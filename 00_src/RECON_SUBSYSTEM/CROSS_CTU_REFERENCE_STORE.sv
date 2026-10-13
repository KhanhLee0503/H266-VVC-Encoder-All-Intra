//-----------------------------------------------------------
// Description: This module integrates the cross-CTU reconstructed reference
// storage used by the intra reference subsystem. The above-line buffer keeps
// the previous CTU-row bottom line, the left-boundary buffer keeps the right
// edge of the CTU to the left, and the corner register keeps the above-left
// sample of the current CTU.
//-----------------------------------------------------------
`timescale 1ns/1ps

module CROSS_CTU_REFERENCE_STORE #(
  parameter integer PARA_DATA_WD              = 64,
  parameter integer PARA_SAMPLE_WD            = 16,
  parameter integer PARA_ABOVE_LUMA_ADDR_WD   = 10,
  parameter integer PARA_ABOVE_CHROMA_ADDR_WD = 9,
  parameter integer PARA_LEFT_LUMA_ADDR_WD    = 5,
  parameter integer PARA_LEFT_CHROMA_ADDR_WD  = 4
)
(
  input                                           I_CLK,
  input                                           I_RESETN,

  input                                           I_PICTURE_START,
  input                                           I_CTU_START,
  input                                           I_CTU_ROW_START,
  input                                           I_CTU_DONE,
  input                                           I_CTU_ROW_DONE,

  input                                           I_ABOVE_WR_EN,
  input [1:0]                                     I_ABOVE_WR_COMPONENT_ID,
  input [PARA_ABOVE_LUMA_ADDR_WD-1:0]             I_ABOVE_WR_ADDR,
  input [PARA_DATA_WD-1:0]                        I_ABOVE_WR_DATA,

  input                                           I_ABOVE_RD_EN,
  input [1:0]                                     I_ABOVE_RD_COMPONENT_ID,
  input [PARA_ABOVE_LUMA_ADDR_WD-1:0]             I_ABOVE_RD_ADDR,
  output logic                                    O_ABOVE_RD_VALID,
  output logic [PARA_DATA_WD-1:0]                 O_ABOVE_RD_DATA,
  output logic                                    O_ABOVE_ROW_VALID,

  input                                           I_LEFT_WR_EN,
  input [1:0]                                     I_LEFT_WR_COMPONENT_ID,
  input [PARA_LEFT_LUMA_ADDR_WD-1:0]              I_LEFT_WR_ADDR,
  input [PARA_DATA_WD-1:0]                        I_LEFT_WR_DATA,

  input                                           I_LEFT_RD_EN,
  input [1:0]                                     I_LEFT_RD_COMPONENT_ID,
  input [PARA_LEFT_LUMA_ADDR_WD-1:0]              I_LEFT_RD_ADDR,
  output logic                                    O_LEFT_RD_VALID,
  output logic [PARA_DATA_WD-1:0]                 O_LEFT_RD_DATA,
  output logic                                    O_LEFT_BOUNDARY_VALID,

  input                                           I_CORNER_LOAD_VALID,
  input [1:0]                                     I_CORNER_LOAD_COMPONENT_ID,
  input [PARA_SAMPLE_WD-1:0]                      I_CORNER_LOAD_SAMPLE,

  input [1:0]                                     I_CORNER_QUERY_COMPONENT_ID,
  output logic                                    O_CORNER_QUERY_VALID,
  output logic [PARA_SAMPLE_WD-1:0]               O_CORNER_QUERY_SAMPLE
);

ABOVE_LINE_BUFFER #(
  .PARA_DATA_WD(PARA_DATA_WD),
  .PARA_LUMA_ADDR_WD(PARA_ABOVE_LUMA_ADDR_WD),
  .PARA_CHROMA_ADDR_WD(PARA_ABOVE_CHROMA_ADDR_WD)
)
u_above_line_buffer (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_PICTURE_START(I_PICTURE_START),
  .I_CTU_ROW_DONE(I_CTU_ROW_DONE),
  .I_WR_EN(I_ABOVE_WR_EN),
  .I_WR_COMPONENT_ID(I_ABOVE_WR_COMPONENT_ID),
  .I_WR_ADDR(I_ABOVE_WR_ADDR),
  .I_WR_DATA(I_ABOVE_WR_DATA),
  .I_RD_EN(I_ABOVE_RD_EN),
  .I_RD_COMPONENT_ID(I_ABOVE_RD_COMPONENT_ID),
  .I_RD_ADDR(I_ABOVE_RD_ADDR),
  .O_RD_VALID(O_ABOVE_RD_VALID),
  .O_RD_DATA(O_ABOVE_RD_DATA),
  .O_ROW_VALID(O_ABOVE_ROW_VALID)
);

LEFT_BOUNDARY_BUFFER #(
  .PARA_DATA_WD(PARA_DATA_WD),
  .PARA_LUMA_ADDR_WD(PARA_LEFT_LUMA_ADDR_WD),
  .PARA_CHROMA_ADDR_WD(PARA_LEFT_CHROMA_ADDR_WD)
)
u_left_boundary_buffer (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_PICTURE_START(I_PICTURE_START),
  .I_CTU_ROW_START(I_CTU_ROW_START),
  .I_CTU_DONE(I_CTU_DONE),
  .I_WR_EN(I_LEFT_WR_EN),
  .I_WR_COMPONENT_ID(I_LEFT_WR_COMPONENT_ID),
  .I_WR_ADDR(I_LEFT_WR_ADDR),
  .I_WR_DATA(I_LEFT_WR_DATA),
  .I_RD_EN(I_LEFT_RD_EN),
  .I_RD_COMPONENT_ID(I_LEFT_RD_COMPONENT_ID),
  .I_RD_ADDR(I_LEFT_RD_ADDR),
  .O_RD_VALID(O_LEFT_RD_VALID),
  .O_RD_DATA(O_LEFT_RD_DATA),
  .O_BOUNDARY_VALID(O_LEFT_BOUNDARY_VALID)
);

ABOVE_LEFT_CORNER_REG #(
  .PARA_SAMPLE_WD(PARA_SAMPLE_WD)
)
u_above_left_corner_reg (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_CTU_START(I_CTU_START),
  .I_LOAD_VALID(I_CORNER_LOAD_VALID),
  .I_LOAD_COMPONENT_ID(I_CORNER_LOAD_COMPONENT_ID),
  .I_LOAD_SAMPLE(I_CORNER_LOAD_SAMPLE),
  .I_QUERY_COMPONENT_ID(I_CORNER_QUERY_COMPONENT_ID),
  .O_QUERY_VALID(O_CORNER_QUERY_VALID),
  .O_QUERY_SAMPLE(O_CORNER_QUERY_SAMPLE)
);

endmodule: CROSS_CTU_REFERENCE_STORE
