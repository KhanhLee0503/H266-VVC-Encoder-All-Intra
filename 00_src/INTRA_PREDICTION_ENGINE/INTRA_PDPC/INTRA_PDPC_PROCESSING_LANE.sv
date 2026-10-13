//-----------------------------------------------------------
// Description: This module implements one four-stage, enable-controlled VVC PDPC datapath.
// Stage one registers selected references, weights, and the base prediction. Stage two
// computes signed differences and weighted products. Stage three sums and rounds the two
// corrections. Stage four applies the correction to the base prediction and clips to the
// configured sample bit depth. Each stage is enabled externally by a common elastic pipeline.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PDPC_PROCESSING_LANE #(
  parameter PARA_PIXEL_WD = 10
)
(
  input                              I_CLK,
  input [3:0]                        I_STAGE_LOAD,
  input                              I_PDPC_ENABLE,
  input                              I_AXIAL_MODE,
  input [PARA_PIXEL_WD-1:0]          I_BASE_PRED,
  input [PARA_PIXEL_WD-1:0]          I_REF_L,
  input [PARA_PIXEL_WD-1:0]          I_REF_T,
  input [PARA_PIXEL_WD-1:0]          I_TL_REF,
  input [5:0]                        I_WEIGHT_L,
  input [5:0]                        I_WEIGHT_T,
  output logic [PARA_PIXEL_WD-1:0]   O_PRED_SAMPLE
);

localparam PARA_DELTA_WD = PARA_PIXEL_WD + 1;
localparam PARA_PRODUCT_WD = PARA_DELTA_WD + 7;
localparam PARA_ACC_WD = PARA_PRODUCT_WD + 2;
localparam logic signed [PARA_ACC_WD-1:0] PARA_ROUND_OFFSET = PARA_ACC_WD'(32);
localparam logic signed [PARA_ACC_WD-1:0] PARA_CLIP_MAX = {{(PARA_ACC_WD-PARA_PIXEL_WD){1'b0}}, {PARA_PIXEL_WD{1'b1}}};

logic [PARA_PIXEL_WD-1:0] r_pred_stage1;
logic [PARA_PIXEL_WD-1:0] r_ref_l_stage1;
logic [PARA_PIXEL_WD-1:0] r_ref_t_stage1;
logic [PARA_PIXEL_WD-1:0] r_tl_stage1;
logic [5:0] r_weight_l_stage1;
logic [5:0] r_weight_t_stage1;
logic r_enable_stage1;
logic r_axial_stage1;

logic signed [PARA_DELTA_WD-1:0] w_delta_l;
logic signed [PARA_DELTA_WD-1:0] w_delta_t;
logic signed [PARA_PRODUCT_WD-1:0] w_product_l;
logic signed [PARA_PRODUCT_WD-1:0] w_product_t;
logic signed [PARA_PRODUCT_WD-1:0] r_product_l_stage2;
logic signed [PARA_PRODUCT_WD-1:0] r_product_t_stage2;
logic [PARA_PIXEL_WD-1:0] r_pred_stage2;
logic r_enable_stage2;

logic signed [PARA_ACC_WD-1:0] w_correction_sum;
logic signed [PARA_ACC_WD-1:0] r_correction_stage3;
logic [PARA_PIXEL_WD-1:0] r_pred_stage3;
logic r_enable_stage3;

logic signed [PARA_ACC_WD-1:0] w_correction_shift;
logic signed [PARA_ACC_WD-1:0] w_candidate;
logic [PARA_PIXEL_WD-1:0] w_clipped_pred;
logic [PARA_PIXEL_WD-1:0] r_result_stage4;

assign w_delta_l = $signed({1'b0, r_ref_l_stage1}) - $signed({1'b0, (r_axial_stage1 ? r_tl_stage1 : r_pred_stage1)});
assign w_delta_t = $signed({1'b0, r_ref_t_stage1}) - $signed({1'b0, (r_axial_stage1 ? r_tl_stage1 : r_pred_stage1)});
assign w_product_l = w_delta_l * $signed({1'b0, r_weight_l_stage1});
assign w_product_t = w_delta_t * $signed({1'b0, r_weight_t_stage1});
assign w_correction_sum = $signed(r_product_l_stage2) + $signed(r_product_t_stage2) + PARA_ROUND_OFFSET;
assign w_correction_shift = r_correction_stage3 >>> 6;
assign w_candidate = $signed({1'b0, r_pred_stage3}) + w_correction_shift;

always_comb begin
  w_clipped_pred = r_pred_stage3;

  if (r_enable_stage3) begin
    if (w_candidate < 0)
      w_clipped_pred = '0;
    else if (w_candidate > PARA_CLIP_MAX)
      w_clipped_pred = {PARA_PIXEL_WD{1'b1}};
    else
      w_clipped_pred = w_candidate[PARA_PIXEL_WD-1:0];
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_STAGE_LOAD[0]) begin
    r_pred_stage1 <= I_BASE_PRED;
    r_ref_l_stage1 <= I_REF_L;
    r_ref_t_stage1 <= I_REF_T;
    r_tl_stage1 <= I_TL_REF;
    r_weight_l_stage1 <= I_WEIGHT_L;
    r_weight_t_stage1 <= I_WEIGHT_T;
    r_enable_stage1 <= I_PDPC_ENABLE;
    r_axial_stage1 <= I_AXIAL_MODE;
  end

  if (I_STAGE_LOAD[1]) begin
    r_product_l_stage2 <= w_product_l;
    r_product_t_stage2 <= w_product_t;
    r_pred_stage2 <= r_pred_stage1;
    r_enable_stage2 <= r_enable_stage1;
  end

  if (I_STAGE_LOAD[2]) begin
    r_correction_stage3 <= w_correction_sum;
    r_pred_stage3 <= r_pred_stage2;
    r_enable_stage3 <= r_enable_stage2;
  end

  if (I_STAGE_LOAD[3])
    r_result_stage4 <= w_clipped_pred;
end

assign O_PRED_SAMPLE = r_result_stage4;

endmodule: INTRA_PDPC_PROCESSING_LANE
