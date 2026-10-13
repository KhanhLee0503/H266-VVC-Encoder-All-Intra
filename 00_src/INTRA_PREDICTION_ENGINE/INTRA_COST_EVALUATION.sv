//-----------------------------------------------------------
// Description: This module calculates the SAD cost for one intra prediction candidate stream.
// Four 10-bit original samples and four aligned prediction samples are processed per cycle.
// The datapath contains four absolute-difference lanes, a pipelined adder tree, one shared
// candidate accumulator, and a ready/valid registered cost output.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_COST_EVALUATION #(
  parameter PARA_PIXEL_WD        = 10,
  parameter PARA_PIXELS_PER_BEAT = 4,
  parameter PARA_CANDIDATE_ID_WD = 2,
  parameter PARA_MAX_TU_WD       = 32,
  parameter PARA_MAX_TU_HT       = 32,
  parameter PARA_COST_WD         = PARA_PIXEL_WD + $clog2(PARA_MAX_TU_WD * PARA_MAX_TU_HT)
)
(
  input                                            I_CLK,
  input                                            I_RESETN,

  input                                            I_VALID,
  output logic                                     O_READY,
  input [PARA_CANDIDATE_ID_WD-1:0]                 I_CANDIDATE_ID,
  input [(PARA_PIXEL_WD*PARA_PIXELS_PER_BEAT)-1:0] I_PRED_DATA,
  input [(PARA_PIXEL_WD*PARA_PIXELS_PER_BEAT)-1:0] I_ORIG_DATA,
  input                                            I_LAST,

  output logic                                     O_COST_VALID,
  input                                            I_COST_READY,
  output logic [PARA_CANDIDATE_ID_WD-1:0]          O_COST_CANDIDATE_ID,
  output logic [PARA_COST_WD-1:0]                  O_COST_VALUE
);

localparam PARA_PAIR_SUM_WD = PARA_PIXEL_WD + 1;
localparam PARA_BEAT_SAD_WD = PARA_PIXEL_WD + 2;

logic [PARA_PIXEL_WD-1:0] w_pred_0;
logic [PARA_PIXEL_WD-1:0] w_pred_1;
logic [PARA_PIXEL_WD-1:0] w_pred_2;
logic [PARA_PIXEL_WD-1:0] w_pred_3;
logic [PARA_PIXEL_WD-1:0] w_orig_0;
logic [PARA_PIXEL_WD-1:0] w_orig_1;
logic [PARA_PIXEL_WD-1:0] w_orig_2;
logic [PARA_PIXEL_WD-1:0] w_orig_3;
logic [PARA_PIXEL_WD-1:0] w_abs_diff_0;
logic [PARA_PIXEL_WD-1:0] w_abs_diff_1;
logic [PARA_PIXEL_WD-1:0] w_abs_diff_2;
logic [PARA_PIXEL_WD-1:0] w_abs_diff_3;

logic w_stage1_ready;
logic r_stage1_valid;
logic [PARA_PIXEL_WD-1:0] r_stage1_diff_0;
logic [PARA_PIXEL_WD-1:0] r_stage1_diff_1;
logic [PARA_PIXEL_WD-1:0] r_stage1_diff_2;
logic [PARA_PIXEL_WD-1:0] r_stage1_diff_3;
logic [PARA_CANDIDATE_ID_WD-1:0] r_stage1_candidate_id;
logic r_stage1_last;

logic w_stage2_ready;
logic r_stage2_valid;
logic [PARA_PAIR_SUM_WD-1:0] r_stage2_sum_01;
logic [PARA_PAIR_SUM_WD-1:0] r_stage2_sum_23;
logic [PARA_CANDIDATE_ID_WD-1:0] r_stage2_candidate_id;
logic r_stage2_last;

logic w_stage3_ready;
logic r_stage3_valid;
logic [PARA_BEAT_SAD_WD-1:0] r_stage3_beat_sad;
logic [PARA_CANDIDATE_ID_WD-1:0] r_stage3_candidate_id;
logic r_stage3_last;
logic [PARA_COST_WD-1:0] w_stage3_beat_sad_ext;

logic [PARA_COST_WD-1:0] r_cost_accumulator;
logic w_cost_output_ready;
logic r_cost_valid;
logic [PARA_CANDIDATE_ID_WD-1:0] r_cost_candidate_id;
logic [PARA_COST_WD-1:0] r_cost_value;

assign w_pred_0 = I_PRED_DATA[(PARA_PIXEL_WD*0) +: PARA_PIXEL_WD];
assign w_pred_1 = I_PRED_DATA[(PARA_PIXEL_WD*1) +: PARA_PIXEL_WD];
assign w_pred_2 = I_PRED_DATA[(PARA_PIXEL_WD*2) +: PARA_PIXEL_WD];
assign w_pred_3 = I_PRED_DATA[(PARA_PIXEL_WD*3) +: PARA_PIXEL_WD];

assign w_orig_0 = I_ORIG_DATA[(PARA_PIXEL_WD*0) +: PARA_PIXEL_WD];
assign w_orig_1 = I_ORIG_DATA[(PARA_PIXEL_WD*1) +: PARA_PIXEL_WD];
assign w_orig_2 = I_ORIG_DATA[(PARA_PIXEL_WD*2) +: PARA_PIXEL_WD];
assign w_orig_3 = I_ORIG_DATA[(PARA_PIXEL_WD*3) +: PARA_PIXEL_WD];

always_comb begin
  if (w_orig_0 >= w_pred_0)
    w_abs_diff_0 = w_orig_0 - w_pred_0;
  else
    w_abs_diff_0 = w_pred_0 - w_orig_0;

  if (w_orig_1 >= w_pred_1)
    w_abs_diff_1 = w_orig_1 - w_pred_1;
  else
    w_abs_diff_1 = w_pred_1 - w_orig_1;

  if (w_orig_2 >= w_pred_2)
    w_abs_diff_2 = w_orig_2 - w_pred_2;
  else
    w_abs_diff_2 = w_pred_2 - w_orig_2;

  if (w_orig_3 >= w_pred_3)
    w_abs_diff_3 = w_orig_3 - w_pred_3;
  else
    w_abs_diff_3 = w_pred_3 - w_orig_3;
end

assign w_cost_output_ready = !r_cost_valid || I_COST_READY;
assign w_stage3_ready = !r_stage3_valid || w_cost_output_ready;
assign w_stage2_ready = !r_stage2_valid || w_stage3_ready;
assign w_stage1_ready = !r_stage1_valid || w_stage2_ready;
assign O_READY = w_stage1_ready;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage1_valid <= 1'b0;
  else if (w_stage1_ready)
    r_stage1_valid <= I_VALID;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage1_ready && I_VALID) begin
    r_stage1_diff_0 <= w_abs_diff_0;
    r_stage1_diff_1 <= w_abs_diff_1;
    r_stage1_diff_2 <= w_abs_diff_2;
    r_stage1_diff_3 <= w_abs_diff_3;
    r_stage1_candidate_id <= I_CANDIDATE_ID;
    r_stage1_last <= I_LAST;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage2_valid <= 1'b0;
  else if (w_stage2_ready)
    r_stage2_valid <= r_stage1_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage2_ready && r_stage1_valid) begin
    r_stage2_sum_01 <= {1'b0, r_stage1_diff_0} + {1'b0, r_stage1_diff_1};
    r_stage2_sum_23 <= {1'b0, r_stage1_diff_2} + {1'b0, r_stage1_diff_3};
    r_stage2_candidate_id <= r_stage1_candidate_id;
    r_stage2_last <= r_stage1_last;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage3_valid <= 1'b0;
  else if (w_stage3_ready)
    r_stage3_valid <= r_stage2_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage3_ready && r_stage2_valid) begin
    r_stage3_beat_sad <= {1'b0, r_stage2_sum_01} + {1'b0, r_stage2_sum_23};
    r_stage3_candidate_id <= r_stage2_candidate_id;
    r_stage3_last <= r_stage2_last;
  end
end

assign w_stage3_beat_sad_ext = {{(PARA_COST_WD-PARA_BEAT_SAD_WD){1'b0}}, r_stage3_beat_sad};

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_cost_accumulator <= '0;
    r_cost_valid <= 1'b0;
  end
  else if (w_cost_output_ready) begin
    if (r_stage3_valid) begin
      if (r_stage3_last) begin
        r_cost_accumulator <= '0;
        r_cost_valid <= 1'b1;
      end
      else begin
        r_cost_accumulator <= r_cost_accumulator + w_stage3_beat_sad_ext;
        r_cost_valid <= 1'b0;
      end
    end
    else
      r_cost_valid <= 1'b0;
  end
end

always_ff @ (posedge I_CLK) begin
  if (w_cost_output_ready && r_stage3_valid && r_stage3_last) begin
    r_cost_candidate_id <= r_stage3_candidate_id;
    r_cost_value <= r_cost_accumulator + w_stage3_beat_sad_ext;
  end
end

assign O_COST_VALID = r_cost_valid;
assign O_COST_CANDIDATE_ID = r_cost_candidate_id;
assign O_COST_VALUE = r_cost_value;

endmodule: INTRA_COST_EVALUATION
