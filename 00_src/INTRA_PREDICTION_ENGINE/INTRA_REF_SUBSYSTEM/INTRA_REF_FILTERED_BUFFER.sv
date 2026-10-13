//-----------------------------------------------------------
// Description: This module stores the complete filtered intra reference set
// for one transform unit. The top and left reference arrays each contain
// sixty-four 16-bit sample containers, and the top-left reference contains
// one 16-bit sample container. All filtered references are loaded in parallel
// when I_LOAD_VALID is asserted. Only the valid state is reset or cleared;
// the datapath registers are not reset because their contents are ignored
// whenever O_VALID is deasserted.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_FILTERED_BUFFER #(
  parameter integer PARA_CONTAINER_WD = 16,
  parameter integer PARA_REF_SAMPLES  = 64
)
(
  input                                                    I_CLK,
  input                                                    I_RESETN,

  input                                                    I_CLEAR,

  input                                                    I_LOAD_VALID,
  input [(PARA_REF_SAMPLES*PARA_CONTAINER_WD)-1:0]         I_TOP_REF,
  input [(PARA_REF_SAMPLES*PARA_CONTAINER_WD)-1:0]         I_LEFT_REF,
  input [PARA_CONTAINER_WD-1:0]                            I_TL_REF,

  output logic                                             O_VALID,
  output logic [(PARA_REF_SAMPLES*PARA_CONTAINER_WD)-1:0]  O_TOP_REF,
  output logic [(PARA_REF_SAMPLES*PARA_CONTAINER_WD)-1:0]  O_LEFT_REF,
  output logic [PARA_CONTAINER_WD-1:0]                     O_TL_REF
);

logic [(PARA_REF_SAMPLES*PARA_CONTAINER_WD)-1:0] r_top_ref;
logic [(PARA_REF_SAMPLES*PARA_CONTAINER_WD)-1:0] r_left_ref;
logic [PARA_CONTAINER_WD-1:0]                    r_tl_ref;
logic                                            r_valid;

assign O_VALID    = r_valid;
assign O_TOP_REF  = r_top_ref;
assign O_LEFT_REF = r_left_ref;
assign O_TL_REF   = r_tl_ref;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_valid <= 1'b0;
  end
  else if (I_CLEAR) begin
    r_valid <= 1'b0;
  end
  else if (I_LOAD_VALID) begin
    r_valid <= 1'b1;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_LOAD_VALID && !I_CLEAR) begin
    r_top_ref <= I_TOP_REF;
    r_left_ref <= I_LEFT_REF;
    r_tl_ref <= I_TL_REF;
  end
end

endmodule: INTRA_REF_FILTERED_BUFFER
