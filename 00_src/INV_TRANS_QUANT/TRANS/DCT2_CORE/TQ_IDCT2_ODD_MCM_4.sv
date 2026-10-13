//-----------------------------------------------------------
// Description: This module implements the inverse odd-frequency
// branch of the four-point DCT-II. The packed input contains
// C1 and C3; the packed output contains O0 and O1, where
// O0 = 83*C1 + 36*C3 and O1 = 36*C1 - 83*C3.
// Constant multiplication uses shift/add logic with shared
// 9x terms. Three elastic pipeline stages preserve valid/ready
// transactions under backpressure. No DSP or clipping is used.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_ODD_MCM_4 #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_RESULT_WD = 28
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
  logic [2:0]                          r_valid;
  logic [2:0]                          w_ready;
  logic signed [PARA_RESULT_WD-1:0]    w_coeff_1;
  logic signed [PARA_RESULT_WD-1:0]    w_coeff_3;
  logic signed [PARA_RESULT_WD-1:0]    w_9c1;
  logic signed [PARA_RESULT_WD-1:0]    w_9c3;
  logic signed [PARA_RESULT_WD-1:0]    w_83c1;
  logic signed [PARA_RESULT_WD-1:0]    w_83c3;
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_c1;
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_c3;
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_9c1;
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_9c3;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_36c1;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_36c3;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_83c1;
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_83c3;
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_odd_0;
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_odd_1;

  // The two odd outputs are always transferred in the same beat.
  assign w_ready[2] = !r_valid[2] || I_DATA_READY;
  assign w_ready[1] = !r_valid[1] || w_ready[2];
  assign w_ready[0] = !r_valid[0] || w_ready[1];
  assign O_DATA_READY = w_ready[0];
  assign O_DATA_VALID = r_valid[2];
  assign O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage2_odd_0;
  assign O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage2_odd_1;

  // Sign extension precedes the constant-product arithmetic.
  assign w_coeff_1 = $signed(I_DATA[0*PARA_DATA_WD +: PARA_DATA_WD]);
  assign w_coeff_3 = $signed(I_DATA[1*PARA_DATA_WD +: PARA_DATA_WD]);
  assign w_9c1 = (w_coeff_1 <<< 3) + w_coeff_1;
  assign w_9c3 = (w_coeff_3 <<< 3) + w_coeff_3;

  // The 83x term is shared as 64x + 18x + x.
  assign w_83c1 = (r_stage0_c1 <<< 6) + (r_stage0_9c1 <<< 1) + r_stage0_c1;
  assign w_83c3 = (r_stage0_c3 <<< 6) + (r_stage0_9c3 <<< 1) + r_stage0_c3;

  // Only the pipeline validity registers need asynchronous reset.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_valid <= '0;
    else begin
      if (w_ready[0])
        r_valid[0] <= I_DATA_VALID;
      if (w_ready[1])
        r_valid[1] <= r_valid[0];
      if (w_ready[2])
        r_valid[2] <= r_valid[1];
    end
  end

  // Stage 0 registers the original coefficients and their 9x terms.
  always_ff @(posedge I_CLK) begin
    if (w_ready[0] && I_DATA_VALID) begin
      r_stage0_c1 <= w_coeff_1;
      r_stage0_c3 <= w_coeff_3;
      r_stage0_9c1 <= w_9c1;
      r_stage0_9c3 <= w_9c3;
    end
  end

  // Stage 1 produces the 36x and 83x constant products.
  always_ff @(posedge I_CLK) begin
    if (w_ready[1] && r_valid[0]) begin
      r_stage1_36c1 <= r_stage0_9c1 <<< 2;
      r_stage1_36c3 <= r_stage0_9c3 <<< 2;
      r_stage1_83c1 <= w_83c1;
      r_stage1_83c3 <= w_83c3;
    end
  end

  // Stage 2 evaluates the two inverse odd-frequency dot products.
  always_ff @(posedge I_CLK) begin
    if (w_ready[2] && r_valid[1]) begin
      r_stage2_odd_0 <= r_stage1_83c1 + r_stage1_36c3;
      r_stage2_odd_1 <= r_stage1_36c1 - r_stage1_83c3;
    end
  end
endmodule: TQ_IDCT2_ODD_MCM_4
