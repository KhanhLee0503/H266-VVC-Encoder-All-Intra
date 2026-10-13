//-----------------------------------------------------------
// Description: This module generates the four horizontal angular prediction
// index pairs used by a four-lane H.266/VVC horizontal angular predictor.
// For each horizontal output lane, the module forms x + 1, multiplies it by
// the signed intra prediction angle, derives iIdx by an arithmetic right
// shift of five bits, and derives iFact from the five least-significant bits
// of the same signed product. The four lane calculations operate in parallel
// and are registered as a one-stage pipeline. Only the valid register is
// reset because the datapath outputs are meaningful only when O_VALID is
// asserted.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_H_INDEX_GEN #(
  parameter integer PARA_COORD_WD = 5,
  parameter integer PARA_ANGLE_WD = 11,
  parameter integer PARA_IIDX_WD  = 11
)
(
  input                                   I_CLK,
  input                                   I_RESETN,

  input                                   I_VALID,
  input [PARA_COORD_WD-1:0]               I_X_BASE,
  input signed [PARA_ANGLE_WD-1:0]        I_INTRA_PRED_ANGLE,

  output logic                            O_VALID,

  output logic signed [PARA_IIDX_WD-1:0]  O_IIDX_0,
  output logic signed [PARA_IIDX_WD-1:0]  O_IIDX_1,
  output logic signed [PARA_IIDX_WD-1:0]  O_IIDX_2,
  output logic signed [PARA_IIDX_WD-1:0]  O_IIDX_3,

  output logic [4:0]                      O_IFACT_0,
  output logic [4:0]                      O_IFACT_1,
  output logic [4:0]                      O_IFACT_2,
  output logic [4:0]                      O_IFACT_3
);

localparam integer PARA_FACTOR_WD =
  PARA_COORD_WD + 2;

localparam integer PARA_PRODUCT_WD =
  PARA_FACTOR_WD + PARA_ANGLE_WD;

logic signed [PARA_FACTOR_WD-1:0]  w_x_base_ext;

logic signed [PARA_FACTOR_WD-1:0]  w_x_factor_0;
logic signed [PARA_FACTOR_WD-1:0]  w_x_factor_1;
logic signed [PARA_FACTOR_WD-1:0]  w_x_factor_2;
logic signed [PARA_FACTOR_WD-1:0]  w_x_factor_3;

logic signed [PARA_PRODUCT_WD-1:0] w_product_0;
logic signed [PARA_PRODUCT_WD-1:0] w_product_1;
logic signed [PARA_PRODUCT_WD-1:0] w_product_2;
logic signed [PARA_PRODUCT_WD-1:0] w_product_3;

logic                                 r_valid;

logic signed [PARA_IIDX_WD-1:0]       r_iidx_0;
logic signed [PARA_IIDX_WD-1:0]       r_iidx_1;
logic signed [PARA_IIDX_WD-1:0]       r_iidx_2;
logic signed [PARA_IIDX_WD-1:0]       r_iidx_3;

logic [4:0]                           r_ifact_0;
logic [4:0]                           r_ifact_1;
logic [4:0]                           r_ifact_2;
logic [4:0]                           r_ifact_3;

assign w_x_base_ext =
  {{2{1'b0}}, I_X_BASE};

assign w_x_factor_0 =
  w_x_base_ext + 3'd1;

assign w_x_factor_1 =
  w_x_base_ext + 3'd2;

assign w_x_factor_2 =
  w_x_base_ext + 3'd3;

assign w_x_factor_3 =
  w_x_base_ext + 3'd4;

assign w_product_0 =
  w_x_factor_0 * I_INTRA_PRED_ANGLE;

assign w_product_1 =
  w_x_factor_1 * I_INTRA_PRED_ANGLE;

assign w_product_2 =
  w_x_factor_2 * I_INTRA_PRED_ANGLE;

assign w_product_3 =
  w_x_factor_3 * I_INTRA_PRED_ANGLE;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_valid <= 1'b0;
  else
    r_valid <= I_VALID;
end

always_ff @ (posedge I_CLK) begin
  if (I_VALID) begin
    r_iidx_0 <= w_product_0 >>> 5;
    r_iidx_1 <= w_product_1 >>> 5;
    r_iidx_2 <= w_product_2 >>> 5;
    r_iidx_3 <= w_product_3 >>> 5;

    r_ifact_0 <= w_product_0[4:0];
    r_ifact_1 <= w_product_1[4:0];
    r_ifact_2 <= w_product_2[4:0];
    r_ifact_3 <= w_product_3[4:0];
  end
end

assign O_VALID =
  r_valid;

assign O_IIDX_0 =
  r_iidx_0;

assign O_IIDX_1 =
  r_iidx_1;

assign O_IIDX_2 =
  r_iidx_2;

assign O_IIDX_3 =
  r_iidx_3;

assign O_IFACT_0 =
  r_ifact_0;

assign O_IFACT_1 =
  r_ifact_1;

assign O_IFACT_2 =
  r_ifact_2;

assign O_IFACT_3 =
  r_ifact_3;

endmodule: INTRA_ANGULAR_H_INDEX_GEN
