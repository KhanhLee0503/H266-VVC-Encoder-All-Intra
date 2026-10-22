//-----------------------------------------------------------
// Description:
//   Store final Intra Prediction for later Reconstruction.
//   One active leaf CU, single-tree YUV 4:2:0 baseline.
//   Four 10-bit input samples/beat, packed into 4 x 16-bit
//   zero-extended lanes in a 64-bit Simple Dual-Port RAM.
//   One synchronous read response per accepted read request.
//   Read and write to the SAME address in one cycle is forbidden
//   by the integrating controller (undefined collision data).
//   SRAM contents are not reset. Software/controller must only
//   read addresses written for the currently active CU.
//
//   Scheduler X_BASE / Y are COMPONENT-LOCAL coordinates of
//   a prediction beat. Plane ID: Y=0, Cb=1, Cr=2.
//   Fixed address ranges (PARA_MAX_CU=32):
//     Y  : [  0..255], row stride=8 words
//     Cb : [256..319], row stride=4 words
//     Cr : [320..383], row stride=4 words
//   Support actual luma CU width/height of 8,16,32;
//   chroma dimensions are half the luma dimensions.
//   LANE_VALID mask is stored alongside RAM data.
//-----------------------------------------------------------
`timescale 1ns/1ps

module FINAL_PREDICTION_BUFFER #(
  parameter int PARA_PIXEL_WD  = 10,
  parameter int PARA_SAMPLE_WD = 16,
  parameter int PARA_MAX_CU    = 32,
  parameter int PARA_CTU_ID_WD = 9,
  parameter int PARA_CU_ID_WD  = 8,
  localparam int PARA_DATA_WD  = 4 * PARA_SAMPLE_WD,
  localparam int PARA_Y_STRIDE = PARA_MAX_CU / 4,
  localparam int PARA_C_STRIDE = PARA_MAX_CU / 8,
  localparam int PARA_Y_WORDS  = PARA_MAX_CU * PARA_MAX_CU / 4,
  localparam int PARA_C_WORDS  = PARA_MAX_CU * PARA_MAX_CU / 16,
  localparam int PARA_TOTAL_WORDS = PARA_Y_WORDS + 2 * PARA_C_WORDS,
  localparam int PARA_ADDR_WD = $clog2(PARA_TOTAL_WORDS)
)(
  input  logic                           I_CLK,
  input  logic                           I_RESETN,

  // Begin a new leaf CU. A new descriptor is accepted only when idle.
  input  logic                           I_CU_VALID,
  output logic                           O_CU_READY,
  input  logic [PARA_CTU_ID_WD-1:0]      I_CU_CTU_ID,
  input  logic [PARA_CU_ID_WD-1:0]       I_CU_CU_ID,
  input  logic [5:0]                     I_CU_WIDTH,
  input  logic [5:0]                     I_CU_HEIGHT,
  input  logic                           I_RELEASE_CU,
  output logic                           O_BUSY,
  output logic                           O_ERROR,

  // Write: ENCODER_TU_SCHEDULER final prediction stream.
  input  logic                           I_PRED_VALID,
  output logic                           O_PRED_READY,
  input  logic [4*PARA_PIXEL_WD-1:0]     I_PRED_DATA,
  input  logic [3:0]                     I_PRED_LANE_VALID,
  input  logic [4:0]                     I_PRED_X_BASE,
  input  logic [4:0]                     I_PRED_Y,
  input  logic [1:0]                     I_PRED_COMPONENT_ID,
  input  logic [PARA_CTU_ID_WD-1:0]      I_PRED_CTU_ID,
  input  logic [PARA_CU_ID_WD-1:0]       I_PRED_CU_ID,

  // Read: Reconstruction Engine. Fixed 1-clock synchronous latency.
  // No read READY: every qualified I_RD_REQ is accepted at a rising edge.
  input  logic                           I_RD_REQ,
  input  logic [1:0]                     I_RD_COMPONENT_ID,
  input  logic [4:0]                     I_RD_X_BASE,
  input  logic [4:0]                     I_RD_Y,
  output logic                           O_RD_DATA_VALID,
  output logic [PARA_DATA_WD-1:0]        O_RD_DATA,
  output logic [3:0]                     O_RD_LANE_VALID
);

  localparam logic [1:0] PARA_COMP_Y  = 2'd0;
  localparam logic [1:0] PARA_COMP_CB = 2'd1;
  localparam logic [1:0] PARA_COMP_CR = 2'd2;

  // Inferred simple dual-port RAM: no reset on memory or read data.
  (* ram_style = "block" *) logic [PARA_DATA_WD-1:0] r_pred_mem [0:PARA_TOTAL_WORDS-1];
  (* ram_style = "block" *) logic [3:0]              r_mask_mem [0:PARA_TOTAL_WORDS-1];

  logic                           r_active;
  logic                           r_error;
  logic [PARA_CTU_ID_WD-1:0]      r_ctu_id;
  logic [PARA_CU_ID_WD-1:0]       r_cu_id;
  logic [5:0]                     r_width;
  logic [5:0]                     r_height;

  logic                           w_cu_accept;
  logic                           w_wr_fire;
  logic                           w_wr_position_ok;
  logic                           w_rd_position_ok;
  logic [PARA_ADDR_WD-1:0]        w_wr_addr;
  logic [PARA_ADDR_WD-1:0]        w_rd_addr;
  logic [PARA_DATA_WD-1:0]        w_wr_data;
  logic [5:0]                     w_wr_limit_x;
  logic [5:0]                     w_wr_limit_y;
  logic [5:0]                     w_rd_limit_x;
  logic [5:0]                     w_rd_limit_y;
  logic                           w_valid_descriptor;
  logic                           w_wr_in_bounds;
  logic                           w_rd_in_bounds;
  logic                           w_read_accept;

  // Fixed plane bases and row strides. X_BASE is in pixels,
  // and a word stores four horizontally adjacent samples.
  always_comb begin
    w_wr_addr    = '0;
    w_rd_addr    = '0;
    w_wr_limit_x = '0;
    w_wr_limit_y = '0;
    w_rd_limit_x = '0;
    w_rd_limit_y = '0;

    case (I_PRED_COMPONENT_ID)
      PARA_COMP_Y: begin
        w_wr_addr    = PARA_ADDR_WD'(int'(I_PRED_Y) * PARA_Y_STRIDE + (int'(I_PRED_X_BASE) >> 2));
        w_wr_limit_x = r_width;
        w_wr_limit_y = r_height;
      end
      PARA_COMP_CB: begin
        w_wr_addr    = PARA_ADDR_WD'(PARA_Y_WORDS + int'(I_PRED_Y) * PARA_C_STRIDE + (int'(I_PRED_X_BASE) >> 2));
        w_wr_limit_x = r_width >> 1;
        w_wr_limit_y = r_height >> 1;
      end
      PARA_COMP_CR: begin
        w_wr_addr    = PARA_ADDR_WD'(PARA_Y_WORDS + PARA_C_WORDS + int'(I_PRED_Y) * PARA_C_STRIDE + (int'(I_PRED_X_BASE) >> 2));
        w_wr_limit_x = r_width >> 1;
        w_wr_limit_y = r_height >> 1;
      end
      default: begin
      end
    endcase

    case (I_RD_COMPONENT_ID)
      PARA_COMP_Y: begin
        w_rd_addr    = PARA_ADDR_WD'(int'(I_RD_Y) * PARA_Y_STRIDE + (int'(I_RD_X_BASE) >> 2));
        w_rd_limit_x = r_width;
        w_rd_limit_y = r_height;
      end
      PARA_COMP_CB: begin
        w_rd_addr    = PARA_ADDR_WD'(PARA_Y_WORDS + int'(I_RD_Y) * PARA_C_STRIDE + (int'(I_RD_X_BASE) >> 2));
        w_rd_limit_x = r_width >> 1;
        w_rd_limit_y = r_height >> 1;
      end
      PARA_COMP_CR: begin
        w_rd_addr    = PARA_ADDR_WD'(PARA_Y_WORDS + PARA_C_WORDS + int'(I_RD_Y) * PARA_C_STRIDE + (int'(I_RD_X_BASE) >> 2));
        w_rd_limit_x = r_width >> 1;
        w_rd_limit_y = r_height >> 1;
      end
      default: begin
      end
    endcase
  end

  always_comb begin
    w_valid_descriptor = ((I_CU_WIDTH == 6'd8) || (I_CU_WIDTH == 6'd16) ||
                          (I_CU_WIDTH == 6'd32)) &&
                         ((I_CU_HEIGHT == 6'd8) || (I_CU_HEIGHT == 6'd16) ||
                          (I_CU_HEIGHT == 6'd32)) &&
                         (I_CU_WIDTH <= PARA_MAX_CU) && (I_CU_HEIGHT <= PARA_MAX_CU);

    w_wr_in_bounds = (I_PRED_COMPONENT_ID != 2'd3) &&
                     (I_PRED_X_BASE[1:0] == 2'b00) &&
                     (({1'b0,I_PRED_X_BASE} + 6'd4) <= w_wr_limit_x) &&
                     ({1'b0,I_PRED_Y} < w_wr_limit_y);
    w_rd_in_bounds = (I_RD_COMPONENT_ID != 2'd3) &&
                     (I_RD_X_BASE[1:0] == 2'b00) &&
                     (({1'b0,I_RD_X_BASE} + 6'd4) <= w_rd_limit_x) &&
                     ({1'b0,I_RD_Y} < w_rd_limit_y);
    w_wr_position_ok = w_wr_in_bounds &&
                       (I_PRED_CTU_ID == r_ctu_id) && (I_PRED_CU_ID == r_cu_id);
    w_rd_position_ok = w_rd_in_bounds;

    w_cu_accept   = I_CU_VALID && O_CU_READY;
    O_CU_READY    = !r_active && !r_error;
    O_BUSY        = r_active;
    O_ERROR       = r_error;

    // No buffered input stream. When active, every handshake writes RAM.
    O_PRED_READY  = r_active && !I_RELEASE_CU && !r_error;
    w_wr_fire     = I_PRED_VALID && O_PRED_READY && w_wr_position_ok;
    w_read_accept = I_RD_REQ && r_active && !I_RELEASE_CU && !r_error && w_rd_position_ok;

    w_wr_data = '0;
    for (int i = 0; i < 4; i++) begin
      if (I_PRED_LANE_VALID[i]) begin
        w_wr_data[i*PARA_SAMPLE_WD +: PARA_SAMPLE_WD] =
          {{(PARA_SAMPLE_WD-PARA_PIXEL_WD){1'b0}}, I_PRED_DATA[i*PARA_PIXEL_WD +: PARA_PIXEL_WD]};
      end
    end
  end

  // Control state only. Releasing a CU makes previous addresses invalid;
  // memories are overwritten as data for the next CU is accepted.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_active <= 1'b0;
      r_error  <= 1'b0;
      r_ctu_id <= '0;
      r_cu_id  <= '0;
      r_width  <= '0;
      r_height <= '0;
    end
    else begin
      if (w_cu_accept) begin
        if (w_valid_descriptor) begin
          r_active <= 1'b1;
          r_ctu_id <= I_CU_CTU_ID;
          r_cu_id  <= I_CU_CU_ID;
          r_width  <= I_CU_WIDTH;
          r_height <= I_CU_HEIGHT;
        end
        else begin
          r_error <= 1'b1;
        end
      end
      else if (I_RELEASE_CU && r_active) begin
        r_active <= 1'b0;
      end
      else if (r_active && !r_error && I_PRED_VALID && O_PRED_READY && !w_wr_position_ok) begin
        r_error <= 1'b1;
      end
      else if (r_active && !r_error && I_RD_REQ && !w_rd_position_ok) begin
        r_error <= 1'b1;
      end
    end
  end

  // Synchronous write port. Valid-mask RAM uses the same address.
  always_ff @(posedge I_CLK) begin
    if (w_wr_fire) begin
      r_pred_mem[w_wr_addr] <= w_wr_data;
      r_mask_mem[w_wr_addr] <= I_PRED_LANE_VALID;
    end
  end

  // Synchronous, one-cycle read latency. Invalid read produces no VALID.
  // Data/mask have no reset; they matter only while O_RD_DATA_VALID=1.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      O_RD_DATA_VALID <= 1'b0;
    end
    else begin
      O_RD_DATA_VALID <= w_read_accept;
    end
  end
  always_ff @(posedge I_CLK) begin
    if (w_read_accept) begin
      O_RD_DATA       <= r_pred_mem[w_rd_addr];
      O_RD_LANE_VALID <= r_mask_mem[w_rd_addr];
    end
  end

endmodule
