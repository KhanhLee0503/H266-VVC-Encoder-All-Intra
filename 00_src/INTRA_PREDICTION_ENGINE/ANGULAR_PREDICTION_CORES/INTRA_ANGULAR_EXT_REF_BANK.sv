//-----------------------------------------------------------
// Description: This module stores the extended main-reference array used by
// the H.266/VVC angular prediction core. The bank maps logical reference
// indices from ref[-32] through ref[64] into a contiguous physical array.
// Negative reference samples occupy the lowest slots, the top-left sample
// occupies the next slot, and the positive main-reference samples occupy the
// remaining slots. The module optionally loads the negative-reference region
// and replaces it with zeros when negative extension is not required. The
// valid state is reset or cleared explicitly, while the datapath register is
// not reset because its contents are meaningful only when O_VALID is asserted.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_EXT_REF_BANK #(
  parameter integer PARA_PIXEL_WD = 10,
  parameter integer PARA_MAIN_NUM = 64,
  parameter integer PARA_NEG_NUM  = 32
)
(
  input                                                             I_CLK,
  input                                                             I_RESETN,

  input                                                             I_CLEAR,
  input                                                             I_LOAD_VALID,
  input                                                             I_USE_NEG_REF,

  input [(PARA_NEG_NUM*PARA_PIXEL_WD)-1:0]                          I_NEG_REF,
  input [(PARA_MAIN_NUM*PARA_PIXEL_WD)-1:0]                         I_MAIN_REF,
  input [PARA_PIXEL_WD-1:0]                                         I_TL_REF,

  output logic                                                      O_VALID,
  output logic [((PARA_NEG_NUM+1+PARA_MAIN_NUM)*PARA_PIXEL_WD)-1:0] O_EXT_REF
);

localparam integer PARA_EXT_NUM =
  PARA_NEG_NUM + 1 + PARA_MAIN_NUM;

logic [(PARA_NEG_NUM*PARA_PIXEL_WD)-1:0]
      w_selected_neg_ref;

logic [(PARA_EXT_NUM*PARA_PIXEL_WD)-1:0]
      w_ext_ref_load;

logic [(PARA_EXT_NUM*PARA_PIXEL_WD)-1:0]
      r_ext_ref;

logic r_valid;

assign w_selected_neg_ref =
  I_USE_NEG_REF
  ? I_NEG_REF
  : '0;

assign w_ext_ref_load = {
  I_MAIN_REF,
  I_TL_REF,
  w_selected_neg_ref
};

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_valid <= 1'b0;
  else if (I_CLEAR)
    r_valid <= 1'b0;
  else if (I_LOAD_VALID)
    r_valid <= 1'b1;
end

always_ff @ (posedge I_CLK) begin
  if (I_LOAD_VALID && !I_CLEAR)
    r_ext_ref <= w_ext_ref_load;
end

assign O_VALID =
  r_valid;

assign O_EXT_REF =
  r_ext_ref;

endmodule: INTRA_ANGULAR_EXT_REF_BANK
