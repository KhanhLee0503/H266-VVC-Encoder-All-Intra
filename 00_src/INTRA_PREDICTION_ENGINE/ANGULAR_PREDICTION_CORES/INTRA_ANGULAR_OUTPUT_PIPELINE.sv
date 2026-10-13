//-----------------------------------------------------------
// Description: This module aligns Angular prediction metadata with four interpolation-lane
// results, packs four predicted samples into one output beat, buffers completed beats in a
// small FIFO, and provides a ready/valid output interface. The module reserves FIFO capacity
// when an input beat is issued so that fixed-latency prediction results cannot overflow the
// output FIFO while the downstream interface is stalled. The metadata delay is parameterized
// to match the latency from Angular issue to interpolation-lane output. FIFO payload storage
// is not reset; only control state, valid state, pointers, and counters are reset.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_OUTPUT_PIPELINE #(
  parameter PARA_PIXEL_WD     = 10,
  parameter PARA_COORD_WD     = 5,
  parameter PARA_FIFO_DEPTH   = 8,
  parameter PARA_META_LATENCY = 5
)
(
  input                                     I_CLK,
  input                                     I_RESETN,

  input                                     I_ISSUE_VALID,
  input [PARA_COORD_WD-1:0]                 I_ISSUE_X_BASE,
  input [PARA_COORD_WD-1:0]                 I_ISSUE_Y,
  input                                     I_ISSUE_ROW_LAST,
  input                                     I_ISSUE_TU_LAST,

  output logic                              O_CAN_ISSUE,
  output logic                              O_ISSUE_ACCEPT,

  input                                     I_LANE_VALID_0,
  input                                     I_LANE_VALID_1,
  input                                     I_LANE_VALID_2,
  input                                     I_LANE_VALID_3,

  input [PARA_PIXEL_WD-1:0]                 I_PRED_SAMPLE_0,
  input [PARA_PIXEL_WD-1:0]                 I_PRED_SAMPLE_1,
  input [PARA_PIXEL_WD-1:0]                 I_PRED_SAMPLE_2,
  input [PARA_PIXEL_WD-1:0]                 I_PRED_SAMPLE_3,

  output logic                              O_VALID,
  input                                     I_READY,

  output logic [(4*PARA_PIXEL_WD)-1:0]      O_PRED_DATA,
  output logic [PARA_COORD_WD-1:0]          O_X_BASE,
  output logic [PARA_COORD_WD-1:0]          O_Y,
  output logic                              O_ROW_LAST,
  output logic                              O_TU_LAST,

  output logic                              O_LAST_BEAT_ACCEPT
);

localparam PARA_DATA_WD        = 4 * PARA_PIXEL_WD;
localparam PARA_FIFO_PTR_WD    = (PARA_FIFO_DEPTH <= 1) ? 1 : $clog2(PARA_FIFO_DEPTH);
localparam PARA_FIFO_CNT_WD    = (PARA_FIFO_DEPTH < 1) ? 1 : $clog2(PARA_FIFO_DEPTH + 1);
localparam PARA_OUTSTANDING_WD = PARA_FIFO_CNT_WD;

logic                          r_meta_valid [0:PARA_META_LATENCY-1];
logic [PARA_COORD_WD-1:0]      r_meta_x_base [0:PARA_META_LATENCY-1];
logic [PARA_COORD_WD-1:0]      r_meta_y [0:PARA_META_LATENCY-1];
logic                          r_meta_row_last [0:PARA_META_LATENCY-1];
logic                          r_meta_tu_last [0:PARA_META_LATENCY-1];

logic [PARA_DATA_WD-1:0]       r_fifo_data [0:PARA_FIFO_DEPTH-1];
logic [PARA_COORD_WD-1:0]      r_fifo_x_base [0:PARA_FIFO_DEPTH-1];
logic [PARA_COORD_WD-1:0]      r_fifo_y [0:PARA_FIFO_DEPTH-1];
logic                          r_fifo_row_last [0:PARA_FIFO_DEPTH-1];
logic                          r_fifo_tu_last [0:PARA_FIFO_DEPTH-1];

logic [PARA_FIFO_PTR_WD-1:0]   r_fifo_wr_ptr;
logic [PARA_FIFO_PTR_WD-1:0]   r_fifo_rd_ptr;
logic [PARA_FIFO_CNT_WD-1:0]   r_fifo_count;
logic [PARA_OUTSTANDING_WD-1:0] r_outstanding_count;

logic [PARA_FIFO_CNT_WD-1:0]   w_fifo_count_next;
logic [PARA_OUTSTANDING_WD-1:0] w_outstanding_count_next;

logic                          w_issue_accept;
logic                          w_lane_valid;
logic                          w_fifo_push;
logic                          w_output_transfer;
logic [PARA_DATA_WD-1:0]       w_fifo_write_data;

genvar gen_meta_stage;

assign O_CAN_ISSUE    = r_outstanding_count < PARA_OUTSTANDING_WD'(PARA_FIFO_DEPTH);
assign w_issue_accept = I_ISSUE_VALID && O_CAN_ISSUE;
assign O_ISSUE_ACCEPT = w_issue_accept;

assign w_lane_valid      = I_LANE_VALID_0 && I_LANE_VALID_1 && I_LANE_VALID_2 && I_LANE_VALID_3;
assign w_fifo_push       = r_meta_valid[PARA_META_LATENCY-1] && w_lane_valid;
assign w_fifo_write_data = {I_PRED_SAMPLE_3, I_PRED_SAMPLE_2, I_PRED_SAMPLE_1, I_PRED_SAMPLE_0};

assign O_VALID     = (r_fifo_count != '0);
assign O_PRED_DATA = O_VALID ? r_fifo_data[r_fifo_rd_ptr] : '0;
assign O_X_BASE    = O_VALID ? r_fifo_x_base[r_fifo_rd_ptr] : '0;
assign O_Y         = O_VALID ? r_fifo_y[r_fifo_rd_ptr] : '0;
assign O_ROW_LAST  = O_VALID ? r_fifo_row_last[r_fifo_rd_ptr] : 1'b0;
assign O_TU_LAST   = O_VALID ? r_fifo_tu_last[r_fifo_rd_ptr] : 1'b0;

assign w_output_transfer  = O_VALID && I_READY;
assign O_LAST_BEAT_ACCEPT = w_output_transfer && O_TU_LAST;

always_comb begin
  w_fifo_count_next = r_fifo_count;

  unique casez ({w_fifo_push, w_output_transfer})
    2'b10: w_fifo_count_next = r_fifo_count + PARA_FIFO_CNT_WD'(1);
    2'b01: w_fifo_count_next = r_fifo_count - PARA_FIFO_CNT_WD'(1);
    2'b11: w_fifo_count_next = r_fifo_count;
    2'b00: w_fifo_count_next = r_fifo_count;
    default: w_fifo_count_next = r_fifo_count;
  endcase
end

always_comb begin
  w_outstanding_count_next = r_outstanding_count;

  unique casez ({w_issue_accept, w_output_transfer})
    2'b10: w_outstanding_count_next = r_outstanding_count + PARA_OUTSTANDING_WD'(1);
    2'b01: w_outstanding_count_next = r_outstanding_count - PARA_OUTSTANDING_WD'(1);
    2'b11: w_outstanding_count_next = r_outstanding_count;
    2'b00: w_outstanding_count_next = r_outstanding_count;
    default: w_outstanding_count_next = r_outstanding_count;
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_meta_valid[0] <= 1'b0;
  else
    r_meta_valid[0] <= w_issue_accept;
end

always_ff @ (posedge I_CLK) begin
  if (w_issue_accept) begin
    r_meta_x_base[0] <= I_ISSUE_X_BASE;
    r_meta_y[0] <= I_ISSUE_Y;
    r_meta_row_last[0] <= I_ISSUE_ROW_LAST;
    r_meta_tu_last[0] <= I_ISSUE_TU_LAST;
  end
end

generate
  for (gen_meta_stage = 1; gen_meta_stage < PARA_META_LATENCY; gen_meta_stage = gen_meta_stage + 1) begin: GEN_META_PIPELINE

    always_ff @ (posedge I_CLK, negedge I_RESETN) begin
      if (!I_RESETN)
        r_meta_valid[gen_meta_stage] <= 1'b0;
      else
        r_meta_valid[gen_meta_stage] <= r_meta_valid[gen_meta_stage-1];
    end

    always_ff @ (posedge I_CLK) begin
      if (r_meta_valid[gen_meta_stage-1]) begin
        r_meta_x_base[gen_meta_stage] <= r_meta_x_base[gen_meta_stage-1];
        r_meta_y[gen_meta_stage] <= r_meta_y[gen_meta_stage-1];
        r_meta_row_last[gen_meta_stage] <= r_meta_row_last[gen_meta_stage-1];
        r_meta_tu_last[gen_meta_stage] <= r_meta_tu_last[gen_meta_stage-1];
      end
    end

  end
endgenerate

always_ff @ (posedge I_CLK) begin
  if (w_fifo_push) begin
    r_fifo_data[r_fifo_wr_ptr] <= w_fifo_write_data;
    r_fifo_x_base[r_fifo_wr_ptr] <= r_meta_x_base[PARA_META_LATENCY-1];
    r_fifo_y[r_fifo_wr_ptr] <= r_meta_y[PARA_META_LATENCY-1];
    r_fifo_row_last[r_fifo_wr_ptr] <= r_meta_row_last[PARA_META_LATENCY-1];
    r_fifo_tu_last[r_fifo_wr_ptr] <= r_meta_tu_last[PARA_META_LATENCY-1];
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_fifo_wr_ptr <= '0;
  else if (w_fifo_push) begin
    if (r_fifo_wr_ptr == PARA_FIFO_PTR_WD'(PARA_FIFO_DEPTH - 1))
      r_fifo_wr_ptr <= '0;
    else
      r_fifo_wr_ptr <= r_fifo_wr_ptr + PARA_FIFO_PTR_WD'(1);
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_fifo_rd_ptr <= '0;
  else if (w_output_transfer) begin
    if (r_fifo_rd_ptr == PARA_FIFO_PTR_WD'(PARA_FIFO_DEPTH - 1))
      r_fifo_rd_ptr <= '0;
    else
      r_fifo_rd_ptr <= r_fifo_rd_ptr + PARA_FIFO_PTR_WD'(1);
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_fifo_count <= '0;
  else
    r_fifo_count <= w_fifo_count_next;
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_outstanding_count <= '0;
  else
    r_outstanding_count <= w_outstanding_count_next;
end

endmodule: INTRA_ANGULAR_OUTPUT_PIPELINE
