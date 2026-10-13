//-----------------------------------------------------------
// Description: This module computes the four odd-frequency
// contributions of an inverse eight-point DCT-II vector.
// Input lanes contain C1, C3, C5 and C7. Output lanes contain
// O0, O1, O2 and O3 (the four pre-butterfly spatial terms).
// Shift/add multiple-constant multiplication shares 9x and
// 25x terms to generate 18x, 50x, 75x and 89x. Five elastic
// stages preserve ready/valid under downstream backpressure.
// No rounding, clipping, coefficient ROM or DSP is used.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_ODD_MCM_8 #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_RESULT_WD = 28
)(
  input                                I_CLK,
  input                                I_RESETN,
  input                                I_DATA_VALID,
  output logic                         O_DATA_READY,
  input        [4*PARA_DATA_WD-1:0]    I_DATA,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]  O_DATA
);
  logic [4:0]                          r_valid;
  logic [4:0]                          w_ready;
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_coeff [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_9x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_coeff [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_9x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_25x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_18x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_50x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_75x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_89x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage3_pair01 [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage3_pair23 [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage4_odd [0:3];

  // A full pipeline stage stalls until its successor can advance.
  assign w_ready[4] = !r_valid[4] || I_DATA_READY;
  assign w_ready[3] = !r_valid[3] || w_ready[4];
  assign w_ready[2] = !r_valid[2] || w_ready[3];
  assign w_ready[1] = !r_valid[1] || w_ready[2];
  assign w_ready[0] = !r_valid[0] || w_ready[1];
  assign O_DATA_READY = w_ready[0];
  assign O_DATA_VALID = r_valid[4];

  // Only the pipeline validity bits require reset.
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
      if (w_ready[3])
        r_valid[3] <= r_valid[2];
      if (w_ready[4])
        r_valid[4] <= r_valid[3];
    end
  end

  // Each input coefficient produces four shared constant products.
  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_mcm_lanes
    logic signed [PARA_RESULT_WD-1:0] w_coeff;
    logic signed [PARA_RESULT_WD-1:0] w_9x;
    logic signed [PARA_RESULT_WD-1:0] w_25x;

    assign w_coeff = $signed(I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]);
    assign w_9x = (w_coeff <<< 3) + w_coeff;
    assign w_25x = (r_stage0_coeff[lane_idx] <<< 4) + r_stage0_9x[lane_idx];
    assign O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage4_odd[lane_idx];

    // Stage 0: extend input and construct 9x.
    always_ff @(posedge I_CLK) begin
      if (w_ready[0] && I_DATA_VALID) begin
        r_stage0_coeff[lane_idx] <= w_coeff;
        r_stage0_9x[lane_idx] <= w_9x;
      end
      // Stage 1: construct 25x = 16x + 9x.
      if (w_ready[1] && r_valid[0]) begin
        r_stage1_coeff[lane_idx] <= r_stage0_coeff[lane_idx];
        r_stage1_9x[lane_idx] <= r_stage0_9x[lane_idx];
        r_stage1_25x[lane_idx] <= w_25x;
      end
      // Stage 2: construct 18x, 50x, 75x and 89x.
      if (w_ready[2] && r_valid[1]) begin
        r_stage2_18x[lane_idx] <= r_stage1_9x[lane_idx] <<< 1;
        r_stage2_50x[lane_idx] <= r_stage1_25x[lane_idx] <<< 1;
        r_stage2_75x[lane_idx] <= (r_stage1_25x[lane_idx] <<< 1) + r_stage1_25x[lane_idx];
        r_stage2_89x[lane_idx] <= (r_stage1_coeff[lane_idx] <<< 6) + r_stage1_25x[lane_idx];
      end
    end
  end

  // Odd matrix rows follow the transposed eight-point DCT-II basis.
  // Stage 3 forms two balanced partial sums for each output lane.
  always_ff @(posedge I_CLK) begin
    if (w_ready[3] && r_valid[2]) begin
      r_stage3_pair01[0] <= r_stage2_89x[0] + r_stage2_75x[1];
      r_stage3_pair23[0] <= r_stage2_50x[2] + r_stage2_18x[3];
      r_stage3_pair01[1] <= r_stage2_75x[0] - r_stage2_18x[1];
      r_stage3_pair23[1] <= r_stage2_89x[2] + r_stage2_50x[3];
      r_stage3_pair01[2] <= r_stage2_50x[0] - r_stage2_89x[1];
      r_stage3_pair23[2] <= r_stage2_18x[2] + r_stage2_75x[3];
      r_stage3_pair01[3] <= r_stage2_18x[0] - r_stage2_50x[1];
      r_stage3_pair23[3] <= r_stage2_75x[2] - r_stage2_89x[3];
    end
  end

  // Stage 4: output order O0,O1,O2,O3.
  // O0 = 89*C1 + 75*C3 + 50*C5 + 18*C7
  // O1 = 75*C1 - 18*C3 - 89*C5 - 50*C7
  // O2 = 50*C1 - 89*C3 + 18*C5 + 75*C7
  // O3 = 18*C1 - 50*C3 + 75*C5 - 89*C7
  always_ff @(posedge I_CLK) begin
    if (w_ready[4] && r_valid[3]) begin
      r_stage4_odd[0] <= r_stage3_pair01[0] + r_stage3_pair23[0];
      r_stage4_odd[1] <= r_stage3_pair01[1] - r_stage3_pair23[1];
      r_stage4_odd[2] <= r_stage3_pair01[2] + r_stage3_pair23[2];
      r_stage4_odd[3] <= r_stage3_pair01[3] + r_stage3_pair23[3];
    end
  end
endmodule: TQ_IDCT2_ODD_MCM_8
