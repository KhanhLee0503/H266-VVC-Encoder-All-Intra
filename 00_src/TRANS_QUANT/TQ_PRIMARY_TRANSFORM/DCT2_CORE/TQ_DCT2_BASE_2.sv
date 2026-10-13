//-----------------------------------------------------------
// Description: This module implements the final even-frequency
// stage of the forward DCT-II hierarchical partial butterfly.
// It accepts two signed even terms and computes 64 times their
// sum and difference using a fixed left shift. Two elastic
// pipeline stages preserve ready/valid under backpressure.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DCT2_BASE_2 #(
  parameter PARA_DATA_WD = 17,
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
  logic signed [PARA_SUM_WD-1:0]       w_input_0;
  logic signed [PARA_SUM_WD-1:0]       w_input_1;
  logic signed [PARA_SUM_WD-1:0]       w_sum;
  logic signed [PARA_SUM_WD-1:0]       w_difference;
  logic signed [PARA_SUM_WD-1:0]       r_stage0_sum;
  logic signed [PARA_SUM_WD-1:0]       r_stage0_difference;
  logic signed [PARA_RESULT_WD-1:0]    w_extended_sum;
  logic signed [PARA_RESULT_WD-1:0]    w_extended_difference;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_coeff_0;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_coeff_1;

  // The two output coefficients share one valid/ready handshake.
  assign w_ready[1] = !r_valid[1] || I_DATA_READY;
  assign w_ready[0] = !r_valid[0] || w_ready[1];
  assign O_DATA_READY = w_ready[0];
  assign O_DATA_VALID = r_valid[1];
  assign O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage1_coeff_0;
  assign O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage1_coeff_1;

  // Signed operands are extended before the addition and subtraction.
  assign w_input_0 = $signed({I_DATA[PARA_DATA_WD-1], I_DATA[0*PARA_DATA_WD +: PARA_DATA_WD]});
  assign w_input_1 = $signed({I_DATA[2*PARA_DATA_WD-1], I_DATA[1*PARA_DATA_WD +: PARA_DATA_WD]});
  assign w_sum = w_input_0 + w_input_1;
  assign w_difference = w_input_0 - w_input_1;

  // The intermediate result is sign-extended before shifting six bits.
  assign w_extended_sum = r_stage0_sum;
  assign w_extended_difference = r_stage0_difference;

  // Valid bits are reset; datapath registers are qualified by valid.
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

  // Stage 0 registers the sum and difference of the two even terms.
  always_ff @(posedge I_CLK) begin
    if (w_ready[0] && I_DATA_VALID) begin
      r_stage0_sum <= w_sum;
      r_stage0_difference <= w_difference;
    end
  end

  // Stage 1 scales the results by 64 without a multiplier.
  always_ff @(posedge I_CLK) begin
    if (w_ready[1] && r_valid[0]) begin
      r_stage1_coeff_0 <= w_extended_sum <<< 6;
      r_stage1_coeff_1 <= w_extended_difference <<< 6;
    end
  end
endmodule: TQ_DCT2_BASE_2
