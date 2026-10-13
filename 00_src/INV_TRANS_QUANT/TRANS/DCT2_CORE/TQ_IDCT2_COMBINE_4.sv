//-----------------------------------------------------------
// Description: This module combines the even and odd halves
// of an inverse four-point DCT-II vector. Two independent
// ready/valid inputs accept E0/E1 and O0/O1 in vector order.
// One-entry holding registers align the branches, and one
// elastic output register produces X0..X3. Arithmetic is raw:
// no rounding, clipping, coefficient ROM or DSP is used.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_COMBINE_4 #(
  parameter PARA_RESULT_WD = 28
)(
  input                                I_CLK,
  input                                I_RESETN,
  input                                I_EVEN_VALID,
  output logic                         O_EVEN_READY,
  input        [2*PARA_RESULT_WD-1:0]  I_EVEN_DATA,
  input                                I_ODD_VALID,
  output logic                         O_ODD_READY,
  input        [2*PARA_RESULT_WD-1:0]  I_ODD_DATA,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]  O_DATA
);
  logic                                r_even_valid;
  logic                                r_odd_valid;
  logic                                r_output_valid;
  logic                                w_output_ready;
  logic                                w_combine_enable;
  logic signed [PARA_RESULT_WD-1:0]    r_even_0;
  logic signed [PARA_RESULT_WD-1:0]    r_even_1;
  logic signed [PARA_RESULT_WD-1:0]    r_odd_0;
  logic signed [PARA_RESULT_WD-1:0]    r_odd_1;
  logic signed [PARA_RESULT_WD-1:0]    r_output_0;
  logic signed [PARA_RESULT_WD-1:0]    r_output_1;
  logic signed [PARA_RESULT_WD-1:0]    r_output_2;
  logic signed [PARA_RESULT_WD-1:0]    r_output_3;

  // A branch is released only after both halves have been joined.
  // Independent holding slots tolerate unequal branch latencies.
  assign w_output_ready = !r_output_valid || I_DATA_READY;
  assign w_combine_enable = r_even_valid && r_odd_valid && w_output_ready;
  assign O_EVEN_READY = !r_even_valid || w_combine_enable;
  assign O_ODD_READY = !r_odd_valid || w_combine_enable;
  assign O_DATA_VALID = r_output_valid;

  // Packed output order is X0, X1, X2, X3 from least-significant lane.
  assign O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_output_0;
  assign O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_output_1;
  assign O_DATA[2*PARA_RESULT_WD +: PARA_RESULT_WD] = r_output_2;
  assign O_DATA[3*PARA_RESULT_WD +: PARA_RESULT_WD] = r_output_3;

  // Reset valid state only; all payload registers are valid-qualified.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_even_valid <= 1'b0;
      r_odd_valid <= 1'b0;
      r_output_valid <= 1'b0;
    end
    else begin
      if (O_EVEN_READY)
        r_even_valid <= I_EVEN_VALID;
      if (O_ODD_READY)
        r_odd_valid <= I_ODD_VALID;
      if (w_output_ready)
        r_output_valid <= r_even_valid && r_odd_valid;
    end
  end

  // Capture each input stream on its own accepted handshake.
  always_ff @(posedge I_CLK) begin
    if (O_EVEN_READY && I_EVEN_VALID) begin
      r_even_0 <= $signed(I_EVEN_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD]);
      r_even_1 <= $signed(I_EVEN_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD]);
    end
    if (O_ODD_READY && I_ODD_VALID) begin
      r_odd_0 <= $signed(I_ODD_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD]);
      r_odd_1 <= $signed(I_ODD_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD]);
    end
  end

  // The inverse butterfly performs four signed adds/subtracts.
  always_ff @(posedge I_CLK) begin
    if (w_combine_enable) begin
      r_output_0 <= r_even_0 + r_odd_0;
      r_output_1 <= r_even_1 + r_odd_1;
      r_output_2 <= r_even_1 - r_odd_1;
      r_output_3 <= r_even_0 - r_odd_0;
    end
  end
endmodule: TQ_IDCT2_COMBINE_4
