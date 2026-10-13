//-----------------------------------------------------------
// Description: This module generates one negative main-reference sample for
// the H.266/VVC angular prediction core. Each instance is assigned one fixed
// negative-reference distance from one to thirty-two. The module multiplies
// the fixed distance by the absolute inverse-angle value, derives and clamps
// the corresponding side-reference index, and uses that index to select one
// sample from the side-reference array. The datapath uses three registered
// pipeline stages. Control and valid registers are reset, while datapath
// registers are not reset because their contents are meaningful only when
// the corresponding valid signal is asserted. The side-reference input must
// remain stable from an accepted I_VALID transaction until O_VALID is asserted.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_NEG_REF_EXT_UNIT #(
  parameter integer PARA_PIXEL_WD = 10,
  parameter integer PARA_REF_NUM  = 64,
  parameter integer PARA_DISTANCE = 1
)
(
  input                                      I_CLK,
  input                                      I_RESETN,

  input                                      I_VALID,
  input [14:0]                               I_INV_ANGLE_ABS,
  input [5:0]                                I_EXT_SIZE,
  input [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0]   I_SIDE_REF,

  output logic                               O_VALID,
  output logic                               O_ACTIVE,
  output logic [4:0]                         O_SIDE_INDEX,
  output logic [PARA_PIXEL_WD-1:0]           O_NEG_REF_SAMPLE
);

localparam integer PARA_PRODUCT_WD     = 21;
localparam integer PARA_POSITION_WD    = 12;
localparam integer PARA_SIDE_INDEX_WD  = 5;
localparam integer PARA_SIDE_REF_NUM   = 32;
localparam [5:0] PARA_DISTANCE_VALUE   = PARA_DISTANCE;

logic [PARA_PRODUCT_WD-1:0]             w_distance_product;

logic                                   r_stage1_valid;
logic                                   r_stage1_active;
logic [PARA_PRODUCT_WD-1:0]             r_product_stage1;
logic [5:0]                             r_ext_size_stage1;

logic [PARA_PRODUCT_WD-1:0]             w_rounded_product;
logic [PARA_POSITION_WD-1:0]            w_raw_position;
logic [5:0]                             w_clamped_position;
logic [PARA_SIDE_INDEX_WD-1:0]          w_side_index;

logic                                   r_stage2_valid;
logic                                   r_stage2_active;
logic [PARA_SIDE_INDEX_WD-1:0]          r_side_index_stage2;

logic [PARA_PIXEL_WD-1:0]               w_side_ref [0:PARA_SIDE_REF_NUM-1];
logic [PARA_PIXEL_WD-1:0]               w_selected_side_sample;

logic                                   r_stage3_valid;
logic                                   r_stage3_active;
logic [PARA_SIDE_INDEX_WD-1:0]          r_side_index_stage3;
logic [PARA_PIXEL_WD-1:0]               r_neg_ref_sample_stage3;

genvar gen_side_ref;

assign w_distance_product =
  PARA_DISTANCE_VALUE *
  I_INV_ANGLE_ABS;

always_comb begin
  w_rounded_product =
    r_product_stage1 +
    21'd256;

  w_raw_position =
    w_rounded_product >> 9;

  w_clamped_position = 6'd0;
  w_side_index = 5'd0;

  if (
    r_stage1_active &&
    (w_raw_position != '0)
  ) begin
    if (w_raw_position > r_ext_size_stage1)
      w_clamped_position = r_ext_size_stage1;
    else
      w_clamped_position = w_raw_position[5:0];

    if (w_clamped_position != 6'd0)
      w_side_index =
        w_clamped_position[4:0] -
        5'd1;
  end
end

generate
  for (
    gen_side_ref = 0;
    gen_side_ref < PARA_SIDE_REF_NUM;
    gen_side_ref = gen_side_ref + 1
  ) begin: GEN_SIDE_REF_UNPACK

    assign w_side_ref[gen_side_ref] =
      I_SIDE_REF[
        (gen_side_ref*PARA_PIXEL_WD)
        +: PARA_PIXEL_WD
      ];

  end
endgenerate

always_comb begin
  w_selected_side_sample = '0;

  if (r_stage2_active)
    w_selected_side_sample =
      w_side_ref[r_side_index_stage2];
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_stage1_valid <= 1'b0;
    r_stage1_active <= 1'b0;
    r_stage2_valid <= 1'b0;
    r_stage2_active <= 1'b0;
    r_stage3_valid <= 1'b0;
    r_stage3_active <= 1'b0;
  end
  else begin
    r_stage1_valid <= I_VALID;
    r_stage1_active <=
      I_VALID &&
      (PARA_DISTANCE_VALUE != 6'd0) &&
      (PARA_DISTANCE_VALUE <= I_EXT_SIZE);

    r_stage2_valid <= r_stage1_valid;
    r_stage2_active <= r_stage1_active;

    r_stage3_valid <= r_stage2_valid;
    r_stage3_active <= r_stage2_active;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_VALID) begin
    r_product_stage1 <= w_distance_product;
    r_ext_size_stage1 <= I_EXT_SIZE;
  end

  if (r_stage1_valid) begin
    r_side_index_stage2 <= w_side_index;
  end

  if (r_stage2_valid) begin
    r_side_index_stage3 <= r_side_index_stage2;
    r_neg_ref_sample_stage3 <= w_selected_side_sample;
  end
end

assign O_VALID =
  r_stage3_valid;

assign O_ACTIVE =
  r_stage3_active;

assign O_SIDE_INDEX =
  r_side_index_stage3;

assign O_NEG_REF_SAMPLE =
  r_stage3_active
  ? r_neg_ref_sample_stage3
  : '0;

endmodule: INTRA_ANGULAR_NEG_REF_EXT_UNIT
