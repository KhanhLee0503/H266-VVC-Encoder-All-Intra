//-----------------------------------------------------------
// Description: This module implements the inverse DCT-II
// two-point even-frequency base for the hierarchical inverse
// partial butterfly. It accepts C0 and C2 of a four-point
// subtree and produces E0 = 64*(C0+C2) and E1 = 64*(C0-C2).
// Two elastic pipeline stages preserve ready/valid under
// backpressure. No rounding, clipping or DSP is used here.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_BASE_2 #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_RESULT_WD = 28,
  localparam PARA_SUM_WD = PARA_DATA_WD + 1
)(
  input                                I_CLK,
  input                                I_RESETN,
  input                                I_DATA_VALID,
  output logic                         O_DATA_READY,
  input        [2*PARA_DATA_WD-1:0]    I_DATA,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [2*PARA_RESULT_WD-1:0]  O_DATA
);
  logic [1:0]                          r_valid;
  logic [1:0]                          w_ready;
  logic signed [PARA_SUM_WD-1:0]       w_coeff_0;
  logic signed [PARA_SUM_WD-1:0]       w_coeff_2;
  logic signed [PARA_SUM_WD-1:0]       w_sum;
  logic signed [PARA_SUM_WD-1:0]       w_difference;
  logic signed [PARA_SUM_WD-1:0]       r_stage0_sum;
  logic signed [PARA_SUM_WD-1:0]       r_stage0_difference;
  logic signed [PARA_RESULT_WD-1:0]    w_extended_sum;
  logic signed [PARA_RESULT_WD-1:0]    w_extended_difference;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_even_0;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_even_1;

  // Both outputs belong to one transaction and share the handshake.
  assign w_ready[1] = !r_valid[1] || I_DATA_READY;
  assign w_ready[0] = !r_valid[0] || w_ready[1];
  assign O_DATA_READY = w_ready[0];
  assign O_DATA_VALID = r_valid[1];
  assign O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage1_even_0;
  assign O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage1_even_1;

  // Extend signed coefficients before computing the sum and difference.
  assign w_coeff_0 = $signed(I_DATA[0*PARA_DATA_WD +: PARA_DATA_WD]);
  assign w_coeff_2 = $signed(I_DATA[1*PARA_DATA_WD +: PARA_DATA_WD]);
  assign w_sum = w_coeff_0 + w_coeff_2;
  assign w_difference = w_coeff_0 - w_coeff_2;
  assign w_extended_sum = r_stage0_sum;
  assign w_extended_difference = r_stage0_difference;

  // Reset the valid bits only; payload registers are valid-qualified.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_valid <= '0;
    else begin
      if (w_ready[0])
        r_valid[0] <= I_DATA_VALID;
      if (w_ready[1])
        r_valid[1] <= r_valid[0];
    end
  end

  // Stage 0 computes two signed even-frequency combinations.
  always_ff @(posedge I_CLK) begin
    if (w_ready[0] && I_DATA_VALID) begin
      r_stage0_sum <= w_sum;
      r_stage0_difference <= w_difference;
    end
  end

  // Stage 1 multiplies by the fixed DCT-II coefficient 64.
  always_ff @(posedge I_CLK) begin
    if (w_ready[1] && r_valid[0]) begin
      r_stage1_even_0 <= w_extended_sum <<< 6;
      r_stage1_even_1 <= w_extended_difference <<< 6;
    end
  end
endmodule: TQ_IDCT2_BASE_2
