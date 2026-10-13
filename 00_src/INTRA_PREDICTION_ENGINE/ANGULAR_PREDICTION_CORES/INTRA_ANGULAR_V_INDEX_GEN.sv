//-----------------------------------------------------------
// Description: This module generates the shared vertical angular prediction
// index pair used by a four-lane H.266/VVC vertical angular predictor. The
// four horizontal output lanes share the same y coordinate, so one index
// calculation is sufficient for all lanes. The module forms y + 1, multiplies
// it by the signed intra prediction angle, derives iIdx by an arithmetic right
// shift of five bits, and derives iFact from the five least-significant bits
// of the same signed product. The result is registered as a one-stage
// pipeline. Only the valid register is reset because the datapath outputs are
// meaningful only when O_VALID is asserted.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_V_INDEX_GEN #(
  parameter integer PARA_COORD_WD = 5,
  parameter integer PARA_ANGLE_WD = 11,
  parameter integer PARA_IIDX_WD  = 11
)
(
  input                                   I_CLK,
  input                                   I_RESETN,

  input                                   I_VALID,
  input [PARA_COORD_WD-1:0]               I_Y,
  input signed [PARA_ANGLE_WD-1:0]        I_INTRA_PRED_ANGLE,

  output logic                            O_VALID,
  output logic signed [PARA_IIDX_WD-1:0]  O_IIDX,
  output logic [4:0]                      O_IFACT
);

localparam integer PARA_FACTOR_WD =
  PARA_COORD_WD + 2;

localparam integer PARA_PRODUCT_WD =
  PARA_FACTOR_WD + PARA_ANGLE_WD;

logic signed [PARA_FACTOR_WD-1:0]  w_y_base_ext;
logic signed [PARA_FACTOR_WD-1:0]  w_y_factor;
logic signed [PARA_PRODUCT_WD-1:0] w_product;

logic                                r_valid;
logic signed [PARA_IIDX_WD-1:0]      r_iidx;
logic [4:0]                          r_ifact;

assign w_y_base_ext =
  {{2{1'b0}}, I_Y};

assign w_y_factor =
  w_y_base_ext + 3'd1;

assign w_product =
  w_y_factor * I_INTRA_PRED_ANGLE;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_valid <= 1'b0;
  else
    r_valid <= I_VALID;
end

always_ff @ (posedge I_CLK) begin
  if (I_VALID) begin
    r_iidx <= w_product >>> 5;
    r_ifact <= w_product[4:0];
  end
end

assign O_VALID =
  r_valid;

assign O_IIDX =
  r_iidx;

assign O_IFACT =
  r_ifact;

endmodule: INTRA_ANGULAR_V_INDEX_GEN
