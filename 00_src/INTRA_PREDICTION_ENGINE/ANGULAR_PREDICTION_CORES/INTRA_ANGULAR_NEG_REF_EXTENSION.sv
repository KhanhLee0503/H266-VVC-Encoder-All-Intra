//-----------------------------------------------------------
// Description: This module generates the complete negative main-reference
// extension for the H.266/VVC angular prediction core. The module captures
// one shared side-reference array and instantiates thirty-two parallel
// INTRA_ANGULAR_NEG_REF_EXT_UNIT blocks. Each unit generates one logical
// negative reference sample from ref[-1] through ref[-32]. The generated
// samples are packed so that ref[-32] occupies the lowest output sample slot
// and ref[-1] occupies the highest output sample slot. A shared three-stage
// valid pipeline indicates when the complete negative-reference vector is
// valid. Only control-valid registers are reset; the side-reference datapath
// register is not reset because its contents are meaningful only for a valid
// transaction. The interface is intended for one in-flight extension request
// at a time, so I_VALID must not be asserted again until O_VALID is observed.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_NEG_REF_EXTENSION #(
  parameter integer PARA_PIXEL_WD = 10,
  parameter integer PARA_REF_NUM  = 64,
  parameter integer PARA_NEG_NUM  = 32
)
(
  input                                           I_CLK,
  input                                           I_RESETN,

  input                                           I_VALID,
  input [14:0]                                    I_INV_ANGLE_ABS,
  input [5:0]                                     I_EXT_SIZE,
  input [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0]        I_SIDE_REF,

  output logic                                    O_VALID,
  output logic [(PARA_NEG_NUM*PARA_PIXEL_WD)-1:0] O_NEG_REF,
  output logic [PARA_NEG_NUM-1:0]                 O_ACTIVE_MASK
);

logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0]        r_side_ref;

logic                                           r_valid_stage1;
logic                                           r_valid_stage2;
logic                                           r_valid_stage3;

logic [PARA_PIXEL_WD-1:0]                       w_unit_neg_ref [0:PARA_NEG_NUM-1];
logic                                           w_unit_active [0:PARA_NEG_NUM-1];

genvar gen_neg_ref;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_valid_stage1 <= 1'b0;
    r_valid_stage2 <= 1'b0;
    r_valid_stage3 <= 1'b0;
  end
  else begin
    r_valid_stage1 <= I_VALID;
    r_valid_stage2 <= r_valid_stage1;
    r_valid_stage3 <= r_valid_stage2;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_VALID)
    r_side_ref <= I_SIDE_REF;
end

generate
  for (
    gen_neg_ref = 0;
    gen_neg_ref < PARA_NEG_NUM;
    gen_neg_ref = gen_neg_ref + 1
  ) begin: GEN_NEG_REF_UNIT

    INTRA_ANGULAR_NEG_REF_EXT_UNIT #(
      .PARA_PIXEL_WD(PARA_PIXEL_WD),
      .PARA_REF_NUM(PARA_REF_NUM),
      .PARA_DISTANCE(gen_neg_ref + 1)
    )
    u_intra_angular_neg_ref_ext_unit (
      .I_CLK           (I_CLK),
      .I_RESETN        (I_RESETN),
      .I_VALID         (I_VALID),
      .I_INV_ANGLE_ABS (I_INV_ANGLE_ABS),
      .I_EXT_SIZE      (I_EXT_SIZE),
      .I_SIDE_REF      (r_side_ref),
      .O_VALID         (),
      .O_ACTIVE        (w_unit_active[gen_neg_ref]),
      .O_SIDE_INDEX    (),
      .O_NEG_REF_SAMPLE(w_unit_neg_ref[gen_neg_ref])
    );

    assign O_NEG_REF[
      ((PARA_NEG_NUM-1-gen_neg_ref)*PARA_PIXEL_WD)
      +: PARA_PIXEL_WD
    ] =
      w_unit_neg_ref[gen_neg_ref];

    assign O_ACTIVE_MASK[
      PARA_NEG_NUM-1-gen_neg_ref
    ] =
      w_unit_active[gen_neg_ref];

  end
endgenerate

assign O_VALID = r_valid_stage3;

endmodule: INTRA_ANGULAR_NEG_REF_EXTENSION
