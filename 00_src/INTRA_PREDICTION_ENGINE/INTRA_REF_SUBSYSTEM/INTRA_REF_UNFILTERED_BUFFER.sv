//-----------------------------------------------------------
// Description: This module stores substituted intra reference samples before
// optional reference sample filtering. Top and left references are written as
// four-sample 64-bit words, while the top-left reference is written as one
// 16-bit sample container. The complete top, left, and top-left reference
// arrays are exposed in parallel for the downstream INTRA_REF_FILTER and
// reference-selection logic. No availability bitmap is required because all
// samples are valid after INTRA_REF_SUBSTITUTION.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_UNFILTERED_BUFFER (
  input                                      I_CLK,

  input                                      I_TOP_WR_EN,
  input [3:0]                                I_TOP_WR_INDEX,
  input [63:0]                               I_TOP_WR_DATA,

  input                                      I_LEFT_WR_EN,
  input [3:0]                                I_LEFT_WR_INDEX,
  input [63:0]                               I_LEFT_WR_DATA,

  input                                      I_TL_WR_EN,
  input [15:0]                               I_TL_WR_DATA,

  output logic [1023:0]                      O_TOP_REF,
  output logic [1023:0]                      O_LEFT_REF,
  output logic [15:0]                        O_TL_REF
);

logic [63:0] r_top_data [0:15];
logic [63:0] r_left_data [0:15];
logic [15:0] r_tl_data;

always_ff @ (posedge I_CLK) begin
  if (I_TOP_WR_EN) begin
    r_top_data[I_TOP_WR_INDEX] <= I_TOP_WR_DATA;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_LEFT_WR_EN) begin
    r_left_data[I_LEFT_WR_INDEX] <= I_LEFT_WR_DATA;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_TL_WR_EN) begin
    r_tl_data <= I_TL_WR_DATA;
  end
end

always_comb begin
  O_TOP_REF = '0;

  O_TOP_REF[63:0]       = r_top_data[0];
  O_TOP_REF[127:64]     = r_top_data[1];
  O_TOP_REF[191:128]    = r_top_data[2];
  O_TOP_REF[255:192]    = r_top_data[3];
  O_TOP_REF[319:256]    = r_top_data[4];
  O_TOP_REF[383:320]    = r_top_data[5];
  O_TOP_REF[447:384]    = r_top_data[6];
  O_TOP_REF[511:448]    = r_top_data[7];
  O_TOP_REF[575:512]    = r_top_data[8];
  O_TOP_REF[639:576]    = r_top_data[9];
  O_TOP_REF[703:640]    = r_top_data[10];
  O_TOP_REF[767:704]    = r_top_data[11];
  O_TOP_REF[831:768]    = r_top_data[12];
  O_TOP_REF[895:832]    = r_top_data[13];
  O_TOP_REF[959:896]    = r_top_data[14];
  O_TOP_REF[1023:960]   = r_top_data[15];
end

always_comb begin
  O_LEFT_REF = '0;

  O_LEFT_REF[63:0]       = r_left_data[0];
  O_LEFT_REF[127:64]     = r_left_data[1];
  O_LEFT_REF[191:128]    = r_left_data[2];
  O_LEFT_REF[255:192]    = r_left_data[3];
  O_LEFT_REF[319:256]    = r_left_data[4];
  O_LEFT_REF[383:320]    = r_left_data[5];
  O_LEFT_REF[447:384]    = r_left_data[6];
  O_LEFT_REF[511:448]    = r_left_data[7];
  O_LEFT_REF[575:512]    = r_left_data[8];
  O_LEFT_REF[639:576]    = r_left_data[9];
  O_LEFT_REF[703:640]    = r_left_data[10];
  O_LEFT_REF[767:704]    = r_left_data[11];
  O_LEFT_REF[831:768]    = r_left_data[12];
  O_LEFT_REF[895:832]    = r_left_data[13];
  O_LEFT_REF[959:896]    = r_left_data[14];
  O_LEFT_REF[1023:960]   = r_left_data[15];
end

always_comb begin
  O_TL_REF = r_tl_data;
end

endmodule: INTRA_REF_UNFILTERED_BUFFER
