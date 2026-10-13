//-----------------------------------------------------------
// Description: This module implements one H.266/VVC chroma angular interpolation lane.
// The module gathers two reference samples from the extended reference array, generates the
// bilinear interpolation weights from iFact, performs two unsigned multiplications, adds the
// normative rounding offset, shifts the result by five bits, and outputs one chroma prediction
// sample. The datapath uses four registered pipeline stages so that its latency matches the
// luma interpolation lane. When iFact is zero, the module returns the first interpolation
// reference sample through a latency-matched bypass path.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_CHROMA_INTERP_LANE #(
  parameter PARA_PIXEL_WD   = 10,
  parameter PARA_NEG_NUM    = 32,
  parameter PARA_MAIN_NUM   = 64,
  parameter PARA_REF_IDX_WD = 11
)
(
  input                                                      I_CLK,
  input                                                      I_RESETN,
  input                                                      I_VALID,
  input signed [PARA_REF_IDX_WD-1:0]                         I_REF_BASE_IDX,
  input [((PARA_NEG_NUM+1+PARA_MAIN_NUM)*PARA_PIXEL_WD)-1:0] I_EXT_REF,
  input [4:0]                                                I_IFACT,

  output logic                                               O_VALID,
  output logic [PARA_PIXEL_WD-1:0]                           O_PRED_SAMPLE
);

localparam PARA_EXT_NUM       = PARA_NEG_NUM + 1 + PARA_MAIN_NUM;
localparam PARA_EXT_ADDR_WD   = (PARA_EXT_NUM <= 1) ? 1 : $clog2(PARA_EXT_NUM);
localparam PARA_WEIGHT_WD     = 6;
localparam PARA_PRODUCT_WD    = PARA_PIXEL_WD + PARA_WEIGHT_WD;
localparam PARA_SUM_WD        = PARA_PRODUCT_WD + 1;

localparam signed [PARA_REF_IDX_WD-1:0] PARA_LOGICAL_REF_MIN = -PARA_NEG_NUM;
localparam signed [PARA_REF_IDX_WD-1:0] PARA_LOGICAL_REF_MAX = PARA_MAIN_NUM;

logic [PARA_PIXEL_WD-1:0] w_ext_ref [0:PARA_EXT_NUM-1];

logic signed [PARA_REF_IDX_WD-1:0] w_logical_idx_1;
logic signed [PARA_REF_IDX_WD-1:0] w_logical_idx_2;
logic [PARA_EXT_ADDR_WD-1:0] w_physical_idx_1;
logic [PARA_EXT_ADDR_WD-1:0] w_physical_idx_2;
logic [PARA_PIXEL_WD-1:0] w_ref_1;
logic [PARA_PIXEL_WD-1:0] w_ref_2;
logic [PARA_WEIGHT_WD-1:0] w_weight_0;
logic [PARA_WEIGHT_WD-1:0] w_weight_1;

logic r_valid_stage1;
logic r_valid_stage2;
logic r_valid_stage3;
logic r_valid_stage4;

logic [PARA_PIXEL_WD-1:0] r_ref_1_stage1;
logic [PARA_PIXEL_WD-1:0] r_ref_2_stage1;
logic [PARA_WEIGHT_WD-1:0] r_weight_0_stage1;
logic [PARA_WEIGHT_WD-1:0] r_weight_1_stage1;
logic r_bypass_stage1;

logic [PARA_PRODUCT_WD-1:0] w_product_0;
logic [PARA_PRODUCT_WD-1:0] w_product_1;
logic [PARA_PRODUCT_WD-1:0] r_product_0_stage2;
logic [PARA_PRODUCT_WD-1:0] r_product_1_stage2;
logic [PARA_PIXEL_WD-1:0] r_ref_1_stage2;
logic r_bypass_stage2;

logic [PARA_SUM_WD-1:0] w_sum;
logic [PARA_SUM_WD-1:0] w_rounded_sum;
logic [PARA_SUM_WD-1:0] r_rounded_sum_stage3;
logic [PARA_PIXEL_WD-1:0] r_ref_1_stage3;
logic r_bypass_stage3;

logic [PARA_SUM_WD-1:0] w_shifted_value;
logic [PARA_PIXEL_WD-1:0] w_pred_sample;
logic [PARA_PIXEL_WD-1:0] r_pred_sample_stage4;

genvar gen_ref;

generate
  for (gen_ref = 0; gen_ref < PARA_EXT_NUM; gen_ref = gen_ref + 1) begin: GEN_EXT_REF_UNPACK
    assign w_ext_ref[gen_ref] = I_EXT_REF[(gen_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD];
  end
endgenerate

assign w_logical_idx_1 = I_REF_BASE_IDX + PARA_REF_IDX_WD'(1);
assign w_logical_idx_2 = I_REF_BASE_IDX + PARA_REF_IDX_WD'(2);

always_comb begin
  w_physical_idx_1 = '0;
  w_physical_idx_2 = '0;

  if (w_logical_idx_1 < PARA_LOGICAL_REF_MIN)
    w_physical_idx_1 = '0;
  else if (w_logical_idx_1 > PARA_LOGICAL_REF_MAX)
    w_physical_idx_1 = PARA_EXT_ADDR_WD'(PARA_EXT_NUM - 1);
  else
    w_physical_idx_1 = PARA_EXT_ADDR_WD'(w_logical_idx_1 + PARA_NEG_NUM);

  if (w_logical_idx_2 < PARA_LOGICAL_REF_MIN)
    w_physical_idx_2 = '0;
  else if (w_logical_idx_2 > PARA_LOGICAL_REF_MAX)
    w_physical_idx_2 = PARA_EXT_ADDR_WD'(PARA_EXT_NUM - 1);
  else
    w_physical_idx_2 = PARA_EXT_ADDR_WD'(w_logical_idx_2 + PARA_NEG_NUM);
end

assign w_ref_1 = w_ext_ref[w_physical_idx_1];
assign w_ref_2 = w_ext_ref[w_physical_idx_2];

assign w_weight_0 = PARA_WEIGHT_WD'(32) - {1'b0, I_IFACT};
assign w_weight_1 = {1'b0, I_IFACT};

assign w_product_0 = r_ref_1_stage1 * r_weight_0_stage1;
assign w_product_1 = r_ref_2_stage1 * r_weight_1_stage1;

assign w_sum = {1'b0, r_product_0_stage2} + {1'b0, r_product_1_stage2};
assign w_rounded_sum = w_sum + PARA_SUM_WD'(16);
assign w_shifted_value = r_rounded_sum_stage3 >> 5;
assign w_pred_sample = r_bypass_stage3 ? r_ref_1_stage3 : w_shifted_value[PARA_PIXEL_WD-1:0];

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_valid_stage1 <= 1'b0;
    r_valid_stage2 <= 1'b0;
    r_valid_stage3 <= 1'b0;
    r_valid_stage4 <= 1'b0;
  end
  else begin
    r_valid_stage1 <= I_VALID;
    r_valid_stage2 <= r_valid_stage1;
    r_valid_stage3 <= r_valid_stage2;
    r_valid_stage4 <= r_valid_stage3;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_VALID) begin
    r_ref_1_stage1 <= w_ref_1;
    r_ref_2_stage1 <= w_ref_2;
    r_weight_0_stage1 <= w_weight_0;
    r_weight_1_stage1 <= w_weight_1;
    r_bypass_stage1 <= (I_IFACT == 5'd0);
  end

  if (r_valid_stage1) begin
    r_product_0_stage2 <= w_product_0;
    r_product_1_stage2 <= w_product_1;
    r_ref_1_stage2 <= r_ref_1_stage1;
    r_bypass_stage2 <= r_bypass_stage1;
  end

  if (r_valid_stage2) begin
    r_rounded_sum_stage3 <= w_rounded_sum;
    r_ref_1_stage3 <= r_ref_1_stage2;
    r_bypass_stage3 <= r_bypass_stage2;
  end

  if (r_valid_stage3)
    r_pred_sample_stage4 <= w_pred_sample;
end

assign O_VALID = r_valid_stage4;
assign O_PRED_SAMPLE = r_pred_sample_stage4;

endmodule: INTRA_ANGULAR_CHROMA_INTERP_LANE
