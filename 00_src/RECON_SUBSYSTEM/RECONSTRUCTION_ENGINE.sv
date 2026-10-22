//-----------------------------------------------------------
// Description:
//   VVC All-Intra reconstruction, one TU in flight.
//   For each inverse-transform beat (4 x signed16), reads the
//   corresponding final prediction beat (4 x unsigned16) from
//   FINAL_PREDICTION_BUFFER (1-cycle synchronous response),
//   computes Clip10(pred + inv_residual), and transfers to
//   RECON_REF_STORE_WRITER using ready/valid.
//
//   Descriptor interface uses ENCODER_TU_SCHEDULER O_META_*:
//     CU_X/Y are CTU-local LUMA coordinates (7-bit).
//     TU_X/Y are component-local offsets inside the CU; set to
//     zero for current one-TU-per-component baseline.
//     Dimension codes: 0=4, 1=8, 2=16, 3=32 samples.
//   Prediction buffer X/Y are COMPONENT-LOCAL positions in CU.
//   Recon writer X/Y are COMPONENT-LOCAL positions in CTU.
//
//   Only one read request can be outstanding; no FIFO.
//   Never issues a read unless it has captured a residual beat.
//   O_TU_DONE pulses on acceptance of the final recon beat.
//   O_TU_DONE does NOT indicate that reference RAM writes are
//   fully committed; use RECON_REF_STORE_WRITER's release event
//   for commit sequencing at a higher level.
//-----------------------------------------------------------
`timescale 1ns/1ps

module RECONSTRUCTION_ENGINE #(
  parameter int PARA_PIXEL_WD  = 10,
  parameter int PARA_SAMPLE_WD = 16,
  parameter int PARA_TU_ID_WD  = 16,
  parameter int PARA_CTU_ID_WD = 9,
  parameter int PARA_CU_ID_WD  = 8,
  parameter int PARA_COORD_WD  = 7
)(
  input  logic                          I_CLK,
  input  logic                          I_RESETN,

  // One descriptor at a time, from scheduler metadata stream.
  input  logic                          I_DESC_VALID,
  output logic                          O_DESC_READY,
  input  logic [PARA_TU_ID_WD-1:0]      I_DESC_TU_ID,
  input  logic [PARA_CTU_ID_WD-1:0]     I_DESC_CTU_ID,
  input  logic [PARA_CU_ID_WD-1:0]      I_DESC_CU_ID,
  input  logic [1:0]                    I_DESC_COMPONENT_ID,
  input  logic [PARA_COORD_WD-1:0]      I_DESC_CU_X,
  input  logic [PARA_COORD_WD-1:0]      I_DESC_CU_Y,
  input  logic [4:0]                    I_DESC_TU_X,
  input  logic [4:0]                    I_DESC_TU_Y,
  input  logic [1:0]                    I_DESC_WIDTH_SIZE,
  input  logic [1:0]                    I_DESC_HEIGHT_SIZE,

  // TQ_INVERSE_TRANSFORM_TOP output, row-major, 4 samples/beat.
  input  logic                          I_RES_VALID,
  output logic                          O_RES_READY,
  input  logic [4*PARA_SAMPLE_WD-1:0]  I_RES_DATA,
  input  logic [PARA_TU_ID_WD-1:0]      I_RES_TU_ID,
  input  logic [1:0]                    I_RES_COMPONENT,
  input  logic                          I_RES_TU_START,
  input  logic                          I_RES_TU_LAST,

  // FINAL_PREDICTION_BUFFER synchronous read port.
  output logic                          O_PRED_RD_REQ,
  output logic [1:0]                    O_PRED_RD_COMPONENT_ID,
  output logic [4:0]                    O_PRED_RD_X_BASE,
  output logic [4:0]                    O_PRED_RD_Y,
  input  logic                          I_PRED_RD_DATA_VALID,
  input  logic [4*PARA_SAMPLE_WD-1:0]  I_PRED_RD_DATA,
  input  logic [3:0]                    I_PRED_RD_LANE_VALID,

  // Directly matches RECON_REF_STORE_WRITER input interface.
  output logic                          O_RECON_VALID,
  input  logic                          I_RECON_READY,
  output logic [1:0]                    O_RECON_COMPONENT_ID,
  output logic [6:0]                    O_RECON_X_BASE,
  output logic [6:0]                    O_RECON_Y,
  output logic [4*PARA_PIXEL_WD-1:0]   O_RECON_SAMPLE,
  output logic [3:0]                    O_RECON_LANE_VALID,
  output logic                          O_RECON_TU_LAST,

  output logic                          O_TU_DONE,
  output logic [PARA_TU_ID_WD-1:0]      O_DONE_TU_ID,
  output logic                          O_BUSY,
  output logic                          O_ERROR
);

  typedef enum logic [2:0] {
    ST_IDLE, ST_RES_WAIT, ST_PRED_WAIT, ST_OUTPUT
  } state_t;
  state_t r_state, w_next_state;

  logic [PARA_TU_ID_WD-1:0] r_tu_id;
  logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
  logic [PARA_CU_ID_WD-1:0] r_cu_id;
  logic [1:0]               r_comp;
  logic [6:0]               r_cu_x_comp, r_cu_y_comp;
  logic [4:0]               r_tu_x, r_tu_y;
  logic [5:0]               r_tu_w, r_tu_h;
  logic [9:0]               r_beat_idx;
  logic [4*PARA_SAMPLE_WD-1:0] r_res_data;
  logic                      r_res_last;
  logic [4*PARA_PIXEL_WD-1:0] r_out_sample;
  logic [3:0]               r_out_mask;
  logic [6:0]               r_out_x, r_out_y;
  logic                     r_out_last;
  logic                     r_error;
  logic                     r_tu_done;
  logic [PARA_TU_ID_WD-1:0] r_done_tu_id;

  logic [5:0]               w_desc_w, w_desc_h;
  logic [9:0]               w_beats_per_row;
  logic [9:0]               w_total_beats;
  logic [9:0]               w_beat_row, w_beat_col;
  logic [6:0]               w_pred_x, w_pred_y;
  logic [7:0]               w_ctu_x, w_ctu_y;
  logic                     w_desc_fire, w_res_fire, w_out_fire;
  logic                     w_desc_ok, w_res_ok, w_pred_ok;
  logic [4*PARA_PIXEL_WD-1:0] w_clipped;

  // A 2-bit VVC transform dimension code identifies 4/8/16/32.
  always_comb begin
    w_desc_w = 6'(6'd4 << I_DESC_WIDTH_SIZE);
    w_desc_h = 6'(6'd4 << I_DESC_HEIGHT_SIZE);

    w_desc_ok = (I_DESC_COMPONENT_ID != 2'd3) &&
                (({1'b0, I_DESC_TU_X} + {1'b0, w_desc_w}) <= 6'd32) &&
                (({1'b0, I_DESC_TU_Y} + {1'b0, w_desc_h}) <= 6'd32) &&
                ((I_DESC_TU_X[1:0]) == 2'b00) &&
                ((I_DESC_TU_Y[1:0]) == 2'b00) &&
                ((I_DESC_COMPONENT_ID == 2'd0) ||
                 (({1'b0, I_DESC_TU_X} + {1'b0, w_desc_w} <= 6'd16) &&
                  ({1'b0, I_DESC_TU_Y} + {1'b0, w_desc_h} <= 6'd16) &&
                  (I_DESC_CU_X[0] == 1'b0) && (I_DESC_CU_Y[0] == 1'b0)));

    w_beats_per_row = {4'b0,r_tu_w} >> 2;
    w_total_beats = ({4'b0,r_tu_w} * {4'b0,r_tu_h}) >> 2;
    w_beat_row = (w_beats_per_row != 0) ? (r_beat_idx / w_beats_per_row) : 10'd0;
    w_beat_col = (w_beats_per_row != 0) ? (r_beat_idx % w_beats_per_row) : 10'd0;

    w_pred_x = {2'b0,r_tu_x} + 7'(w_beat_col << 2);
    w_pred_y = {2'b0,r_tu_y} + 7'(w_beat_row);
    w_ctu_x  = {1'b0, r_cu_x_comp} + {1'b0, w_pred_x};
    w_ctu_y  = {1'b0, r_cu_y_comp} + {1'b0, w_pred_y};

    w_res_ok = (I_RES_TU_ID == r_tu_id) &&
               (I_RES_COMPONENT == r_comp) &&
               (I_RES_TU_START == (r_beat_idx == 10'd0)) &&
               (I_RES_TU_LAST == (r_beat_idx == (w_total_beats-10'd1))) &&
               (w_pred_x < 7'd32) && (w_pred_y < 7'd32) &&
               (w_ctu_x <= 8'd124) && (w_ctu_y <= 8'd127);

    // Prediction buffer stores all four lane-valid bits per word.
    w_pred_ok = I_PRED_RD_DATA_VALID && (I_PRED_RD_LANE_VALID == 4'b1111);

    O_DESC_READY = (r_state == ST_IDLE) && !r_error;
    O_RES_READY = (r_state == ST_RES_WAIT) && !r_error;
    w_desc_fire = I_DESC_VALID && O_DESC_READY;
    w_res_fire = I_RES_VALID && O_RES_READY;
    O_PRED_RD_REQ = w_res_fire && w_res_ok;
    O_PRED_RD_COMPONENT_ID = r_comp;
    O_PRED_RD_X_BASE = w_pred_x[4:0];
    O_PRED_RD_Y = w_pred_y[4:0];

    O_RECON_VALID = (r_state == ST_OUTPUT);
    O_RECON_COMPONENT_ID = r_comp;
    O_RECON_X_BASE = r_out_x;
    O_RECON_Y = r_out_y;
    O_RECON_SAMPLE = r_out_sample;
    O_RECON_LANE_VALID = r_out_mask;
    O_RECON_TU_LAST = r_out_last;
    w_out_fire = O_RECON_VALID && I_RECON_READY;

    O_TU_DONE = r_tu_done;
    O_DONE_TU_ID = r_done_tu_id;
    O_BUSY = (r_state != ST_IDLE);
    O_ERROR = r_error;
  end

  logic signed [PARA_SAMPLE_WD:0] w_sum [0:3];

  // Full signed intermediate: 10-bit unsigned prediction plus signed16 residual.
  always_comb begin
    w_clipped = '0;
    for (int i = 0; i < 4; i++) begin
      // Width 17 preserves signed 16-bit residual and unsigned prediction.
      // Computed separately per lane; no arithmetic saturation before this.
      if (w_sum[i] < 0) begin
        w_clipped[i*PARA_PIXEL_WD +: PARA_PIXEL_WD] = '0;
      end
      else if (w_sum[i] > ((1 << PARA_PIXEL_WD) - 1)) begin
        w_clipped[i*PARA_PIXEL_WD +: PARA_PIXEL_WD] = {PARA_PIXEL_WD{1'b1}};
      end
      else begin
        w_clipped[i*PARA_PIXEL_WD +: PARA_PIXEL_WD] = PARA_PIXEL_WD'(w_sum[i]);
      end
    end
  end

  always_comb begin
    for (int i = 0; i < 4; i++) begin
      w_sum[i] = $signed({1'b0, I_PRED_RD_DATA[i*PARA_SAMPLE_WD +: PARA_SAMPLE_WD]}) +
                 $signed({r_res_data[(i+1)*PARA_SAMPLE_WD-1],
                          r_res_data[i*PARA_SAMPLE_WD +: PARA_SAMPLE_WD]});
    end
  end

  // Three-process FSM: next-state logic.
  always_comb begin
    w_next_state = r_state;
    case (r_state)
      ST_IDLE: begin
        if (w_desc_fire && w_desc_ok) w_next_state = ST_RES_WAIT;
      end
      ST_RES_WAIT: begin
        if (w_res_fire && w_res_ok) w_next_state = ST_PRED_WAIT;
      end
      ST_PRED_WAIT: begin
        if (I_PRED_RD_DATA_VALID) w_next_state = ST_OUTPUT;
      end
      ST_OUTPUT: begin
        if (w_out_fire) begin
          if (r_out_last) w_next_state = ST_IDLE;
          else            w_next_state = ST_RES_WAIT;
        end
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Registers for FSM, metadata, residual beat, and output beat.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_state       <= ST_IDLE;
      r_tu_id       <= '0;
      r_ctu_id      <= '0;
      r_cu_id       <= '0;
      r_comp        <= '0;
      r_cu_x_comp   <= '0;
      r_cu_y_comp   <= '0;
      r_tu_x        <= '0;
      r_tu_y        <= '0;
      r_tu_w        <= '0;
      r_tu_h        <= '0;
      r_beat_idx    <= '0;
      r_res_data    <= '0;
      r_res_last    <= 1'b0;
      r_out_sample  <= '0;
      r_out_mask    <= '0;
      r_out_x       <= '0;
      r_out_y       <= '0;
      r_out_last    <= 1'b0;
      r_error       <= 1'b0;
      r_tu_done     <= 1'b0;
      r_done_tu_id  <= '0;
    end
    else begin
      r_state <= w_next_state;
      r_tu_done <= 1'b0;

      if (w_desc_fire) begin
        if (!w_desc_ok) begin
          r_error <= 1'b1;
        end
        else begin
          r_tu_id <= I_DESC_TU_ID;
          r_ctu_id <= I_DESC_CTU_ID;
          r_cu_id <= I_DESC_CU_ID;
          r_comp <= I_DESC_COMPONENT_ID;
          r_cu_x_comp <= (I_DESC_COMPONENT_ID == 2'd0) ?
                         7'(I_DESC_CU_X) : 7'(I_DESC_CU_X >> 1);
          r_cu_y_comp <= (I_DESC_COMPONENT_ID == 2'd0) ?
                         7'(I_DESC_CU_Y) : 7'(I_DESC_CU_Y >> 1);
          r_tu_x <= I_DESC_TU_X;
          r_tu_y <= I_DESC_TU_Y;
          r_tu_w <= w_desc_w;
          r_tu_h <= w_desc_h;
          r_beat_idx <= 10'd0;
        end
      end

      if (w_res_fire) begin
        if (!w_res_ok) begin
          r_error <= 1'b1;
        end
        else begin
          r_res_data <= I_RES_DATA;
          r_res_last <= I_RES_TU_LAST;
          r_out_x <= w_ctu_x[6:0];
          r_out_y <= w_ctu_y[6:0];
        end
      end

      if ((r_state == ST_PRED_WAIT) && I_PRED_RD_DATA_VALID) begin
        if (!w_pred_ok) r_error <= 1'b1;
        r_out_sample <= w_clipped;
        r_out_mask <= I_PRED_RD_LANE_VALID;
        r_out_last <= r_res_last;
      end

      if (w_out_fire) begin
        if (r_out_last) begin
          r_tu_done <= 1'b1;
          r_done_tu_id <= r_tu_id;
        end
        else begin
          r_beat_idx <= r_beat_idx + 10'd1;
        end
      end
    end
  end
endmodule
