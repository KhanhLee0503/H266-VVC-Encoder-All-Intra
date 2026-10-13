//-----------------------------------------------------------
// Description: This module implements one four-tap luma interpolation lane
// for the H.266/VVC angular intra prediction core. The module receives one
// logical reference base index, the complete extended main-reference array,
// and four signed interpolation coefficients. It gathers four consecutive
// reference samples, multiplies them by the four coefficients, accumulates
// the products with the normative rounding offset, performs an arithmetic
// right shift by six bits, and clips the result to the configured pixel
// width. The datapath uses four registered pipeline stages. Only valid
// control registers are reset because datapath registers are meaningful only
// when the corresponding valid signal is asserted.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_INTERP_LANE #(
  parameter integer PARA_PIXEL_WD   = 10,
  parameter integer PARA_COEFF_WD   = 8,
  parameter integer PARA_NEG_NUM    = 32,
  parameter integer PARA_MAIN_NUM   = 64,
  parameter integer PARA_REF_IDX_WD = 11
)
(
  input                                                      I_CLK,
  input                                                      I_RESETN,

  input                                                      I_VALID,
  input signed [PARA_REF_IDX_WD-1:0]                         I_REF_BASE_IDX,
  input [((PARA_NEG_NUM+1+PARA_MAIN_NUM)*PARA_PIXEL_WD)-1:0] I_EXT_REF,
  input signed [PARA_COEFF_WD-1:0]                           I_COEFF_0,
  input signed [PARA_COEFF_WD-1:0]                           I_COEFF_1,
  input signed [PARA_COEFF_WD-1:0]                           I_COEFF_2,
  input signed [PARA_COEFF_WD-1:0]                           I_COEFF_3,
  output logic                                               O_VALID,
  output logic [PARA_PIXEL_WD-1:0]                           O_PRED_SAMPLE
);

localparam integer PARA_EXT_NUM =
  PARA_NEG_NUM + 1 + PARA_MAIN_NUM;

localparam integer PARA_EXT_ADDR_WD =
  $clog2(PARA_EXT_NUM);

localparam integer PARA_REF_SIGNED_WD =
  PARA_PIXEL_WD + 1;

localparam integer PARA_PRODUCT_WD =
  PARA_REF_SIGNED_WD + PARA_COEFF_WD;

localparam integer PARA_PAIR_SUM_WD =
  PARA_PRODUCT_WD + 1;

localparam integer PARA_TOTAL_SUM_WD =
  PARA_PRODUCT_WD + 2;

localparam signed [PARA_REF_IDX_WD-1:0]
  PARA_LOGICAL_REF_MIN = -PARA_NEG_NUM;

localparam signed [PARA_REF_IDX_WD-1:0]
  PARA_LOGICAL_REF_MAX = PARA_MAIN_NUM;

localparam [PARA_PIXEL_WD-1:0]
  PARA_PIXEL_MAX = {PARA_PIXEL_WD{1'b1}};

logic [PARA_PIXEL_WD-1:0] w_ext_ref [0:PARA_EXT_NUM-1];

logic signed [PARA_REF_IDX_WD-1:0] w_logical_idx_0;
logic signed [PARA_REF_IDX_WD-1:0] w_logical_idx_1;
logic signed [PARA_REF_IDX_WD-1:0] w_logical_idx_2;
logic signed [PARA_REF_IDX_WD-1:0] w_logical_idx_3;

logic [PARA_EXT_ADDR_WD-1:0] w_physical_idx_0;
logic [PARA_EXT_ADDR_WD-1:0] w_physical_idx_1;
logic [PARA_EXT_ADDR_WD-1:0] w_physical_idx_2;
logic [PARA_EXT_ADDR_WD-1:0] w_physical_idx_3;

logic [PARA_PIXEL_WD-1:0] w_ref_0;
logic [PARA_PIXEL_WD-1:0] w_ref_1;
logic [PARA_PIXEL_WD-1:0] w_ref_2;
logic [PARA_PIXEL_WD-1:0] w_ref_3;

logic r_valid_stage1;
logic r_valid_stage2;
logic r_valid_stage3;
logic r_valid_stage4;

logic signed [PARA_REF_SIGNED_WD-1:0] r_ref_0_stage1;
logic signed [PARA_REF_SIGNED_WD-1:0] r_ref_1_stage1;
logic signed [PARA_REF_SIGNED_WD-1:0] r_ref_2_stage1;
logic signed [PARA_REF_SIGNED_WD-1:0] r_ref_3_stage1;

logic signed [PARA_COEFF_WD-1:0] r_coeff_0_stage1;
logic signed [PARA_COEFF_WD-1:0] r_coeff_1_stage1;
logic signed [PARA_COEFF_WD-1:0] r_coeff_2_stage1;
logic signed [PARA_COEFF_WD-1:0] r_coeff_3_stage1;

logic signed [PARA_PRODUCT_WD-1:0] w_product_0;
logic signed [PARA_PRODUCT_WD-1:0] w_product_1;
logic signed [PARA_PRODUCT_WD-1:0] w_product_2;
logic signed [PARA_PRODUCT_WD-1:0] w_product_3;

logic signed [PARA_PRODUCT_WD-1:0] r_product_0_stage2;
logic signed [PARA_PRODUCT_WD-1:0] r_product_1_stage2;
logic signed [PARA_PRODUCT_WD-1:0] r_product_2_stage2;
logic signed [PARA_PRODUCT_WD-1:0] r_product_3_stage2;

logic signed [PARA_PAIR_SUM_WD-1:0] w_pair_sum_01;
logic signed [PARA_PAIR_SUM_WD-1:0] w_pair_sum_23;

logic signed [PARA_TOTAL_SUM_WD-1:0] w_total_sum;
logic signed [PARA_TOTAL_SUM_WD-1:0] w_rounded_sum;

logic signed [PARA_TOTAL_SUM_WD-1:0] r_rounded_sum_stage3;

logic signed [PARA_TOTAL_SUM_WD-1:0] w_shifted_value;
logic signed [PARA_TOTAL_SUM_WD-1:0] w_pixel_max_ext;

logic [PARA_PIXEL_WD-1:0] w_clipped_sample;

logic [PARA_PIXEL_WD-1:0] r_pred_sample_stage4;

genvar gen_ref;

generate
  for (
    gen_ref = 0;
    gen_ref < PARA_EXT_NUM;
    gen_ref = gen_ref + 1
  ) begin: GEN_EXT_REF_UNPACK

    assign w_ext_ref[gen_ref] =
      I_EXT_REF[
        (gen_ref*PARA_PIXEL_WD)
        +: PARA_PIXEL_WD
      ];

  end
endgenerate

always_comb begin
  w_logical_idx_0 =
    I_REF_BASE_IDX;

  w_logical_idx_1 =
    I_REF_BASE_IDX + 1;

  w_logical_idx_2 =
    I_REF_BASE_IDX + 2;

  w_logical_idx_3 =
    I_REF_BASE_IDX + 3;
end

always_comb begin
  w_physical_idx_0 = '0;
  w_physical_idx_1 = '0;
  w_physical_idx_2 = '0;
  w_physical_idx_3 = '0;

  if (w_logical_idx_0 < PARA_LOGICAL_REF_MIN)
    w_physical_idx_0 = '0;
  else if (w_logical_idx_0 > PARA_LOGICAL_REF_MAX)
    w_physical_idx_0 = PARA_EXT_NUM - 1;
  else
    w_physical_idx_0 =
      w_logical_idx_0 + PARA_NEG_NUM;

  if (w_logical_idx_1 < PARA_LOGICAL_REF_MIN)
    w_physical_idx_1 = '0;
  else if (w_logical_idx_1 > PARA_LOGICAL_REF_MAX)
    w_physical_idx_1 = PARA_EXT_NUM - 1;
  else
    w_physical_idx_1 =
      w_logical_idx_1 + PARA_NEG_NUM;

  if (w_logical_idx_2 < PARA_LOGICAL_REF_MIN)
    w_physical_idx_2 = '0;
  else if (w_logical_idx_2 > PARA_LOGICAL_REF_MAX)
    w_physical_idx_2 = PARA_EXT_NUM - 1;
  else
    w_physical_idx_2 =
      w_logical_idx_2 + PARA_NEG_NUM;

  if (w_logical_idx_3 < PARA_LOGICAL_REF_MIN)
    w_physical_idx_3 = '0;
  else if (w_logical_idx_3 > PARA_LOGICAL_REF_MAX)
    w_physical_idx_3 = PARA_EXT_NUM - 1;
  else
    w_physical_idx_3 =
      w_logical_idx_3 + PARA_NEG_NUM;
end

always_comb begin
  w_ref_0 =
    w_ext_ref[w_physical_idx_0];

  w_ref_1 =
    w_ext_ref[w_physical_idx_1];

  w_ref_2 =
    w_ext_ref[w_physical_idx_2];

  w_ref_3 =
    w_ext_ref[w_physical_idx_3];
end

assign w_product_0 =
  r_ref_0_stage1 *
  r_coeff_0_stage1;

assign w_product_1 =
  r_ref_1_stage1 *
  r_coeff_1_stage1;

assign w_product_2 =
  r_ref_2_stage1 *
  r_coeff_2_stage1;

assign w_product_3 =
  r_ref_3_stage1 *
  r_coeff_3_stage1;

assign w_pair_sum_01 =
  {
    r_product_0_stage2[PARA_PRODUCT_WD-1],
    r_product_0_stage2
  }
  +
  {
    r_product_1_stage2[PARA_PRODUCT_WD-1],
    r_product_1_stage2
  };

assign w_pair_sum_23 =
  {
    r_product_2_stage2[PARA_PRODUCT_WD-1],
    r_product_2_stage2
  }
  +
  {
    r_product_3_stage2[PARA_PRODUCT_WD-1],
    r_product_3_stage2
  };

assign w_total_sum =
  {
    w_pair_sum_01[PARA_PAIR_SUM_WD-1],
    w_pair_sum_01
  }
  +
  {
    w_pair_sum_23[PARA_PAIR_SUM_WD-1],
    w_pair_sum_23
  };

assign w_rounded_sum =
  w_total_sum +
  32;

assign w_shifted_value =
  r_rounded_sum_stage3 >>> 6;

assign w_pixel_max_ext =
  {{(PARA_TOTAL_SUM_WD-PARA_PIXEL_WD){1'b0}},
    PARA_PIXEL_MAX};

always_comb begin
  w_clipped_sample = '0;

  if (w_shifted_value < 0)
    w_clipped_sample = '0;
  else if (w_shifted_value > w_pixel_max_ext)
    w_clipped_sample = PARA_PIXEL_MAX;
  else
    w_clipped_sample =
      w_shifted_value[PARA_PIXEL_WD-1:0];
end

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
    r_ref_0_stage1 <=
      {1'b0, w_ref_0};

    r_ref_1_stage1 <=
      {1'b0, w_ref_1};

    r_ref_2_stage1 <=
      {1'b0, w_ref_2};

    r_ref_3_stage1 <=
      {1'b0, w_ref_3};

    r_coeff_0_stage1 <=
      I_COEFF_0;

    r_coeff_1_stage1 <=
      I_COEFF_1;

    r_coeff_2_stage1 <=
      I_COEFF_2;

    r_coeff_3_stage1 <=
      I_COEFF_3;
  end

  if (r_valid_stage1) begin
    r_product_0_stage2 <=
      w_product_0;

    r_product_1_stage2 <=
      w_product_1;

    r_product_2_stage2 <=
      w_product_2;

    r_product_3_stage2 <=
      w_product_3;
  end

  if (r_valid_stage2) begin
    r_rounded_sum_stage3 <=
      w_rounded_sum;
  end

  if (r_valid_stage3) begin
    r_pred_sample_stage4 <=
      w_clipped_sample;
  end
end

assign O_VALID =
  r_valid_stage4;

assign O_PRED_SAMPLE =
  r_pred_sample_stage4;

endmodule: INTRA_ANGULAR_INTERP_LANE
