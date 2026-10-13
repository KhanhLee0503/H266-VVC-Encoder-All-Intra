//-----------------------------------------------------------
// Description: This module computes the four odd-frequency
// coefficients of the forward 8-point DCT-II transform. It
// accepts a complete four-sample odd butterfly vector and
// shares shift-add products 18, 50, 75 and 89 per input sample.
// Five elastic pipeline stages preserve ready/valid handshakes.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DCT2_ODD_MCM_8 #(
  parameter PARA_DATA_WD = 17,
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
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_9x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_9x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_25x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_18x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_50x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_75x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_89x [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage3_pair01 [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage3_pair23 [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_stage4_y [0:3];

  // Backpressure propagates through five one-entry elastic stages.
  assign w_ready[4] = !r_valid[4] || I_DATA_READY;
  assign w_ready[3] = !r_valid[3] || w_ready[4];
  assign w_ready[2] = !r_valid[2] || w_ready[3];
  assign w_ready[1] = !r_valid[1] || w_ready[2];
  assign w_ready[0] = !r_valid[0] || w_ready[1];
  assign O_DATA_READY = w_ready[0];
  assign O_DATA_VALID = r_valid[4];

  // Valid qualifies the payload; the datapath registers are not reset.
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

  // Each generator reuses 9x and 25x to form four constant products.
  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_constant_products
    logic signed [PARA_RESULT_WD-1:0] w_input;
    logic signed [PARA_RESULT_WD-1:0] w_9x;
    logic signed [PARA_RESULT_WD-1:0] w_25x;

    assign w_input = $signed(I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]);
    assign w_9x = (w_input <<< 3) + w_input;
    assign w_25x = (r_stage0_x[lane_idx] <<< 4) + r_stage0_9x[lane_idx];
    assign O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage4_y[lane_idx];

    always_ff @(posedge I_CLK) begin
      if (w_ready[0] && I_DATA_VALID) begin
        r_stage0_x[lane_idx] <= w_input;
        r_stage0_9x[lane_idx] <= w_9x;
      end
      if (w_ready[1] && r_valid[0]) begin
        r_stage1_x[lane_idx] <= r_stage0_x[lane_idx];
        r_stage1_9x[lane_idx] <= r_stage0_9x[lane_idx];
        r_stage1_25x[lane_idx] <= w_25x;
      end
      if (w_ready[2] && r_valid[1]) begin
        r_stage2_18x[lane_idx] <= r_stage1_9x[lane_idx] <<< 1;
        r_stage2_50x[lane_idx] <= r_stage1_25x[lane_idx] <<< 1;
        r_stage2_75x[lane_idx] <= (r_stage1_25x[lane_idx] <<< 1) + r_stage1_25x[lane_idx];
        r_stage2_89x[lane_idx] <= (r_stage1_x[lane_idx] <<< 6) + r_stage1_25x[lane_idx];
      end
    end
  end

  // The third arithmetic stage forms two terms for each odd coefficient.
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

  // Packed output lane order is y1, y3, y5, y7.
  always_ff @(posedge I_CLK) begin
    if (w_ready[4] && r_valid[3]) begin
      r_stage4_y[0] <= r_stage3_pair01[0] + r_stage3_pair23[0];
      r_stage4_y[1] <= r_stage3_pair01[1] - r_stage3_pair23[1];
      r_stage4_y[2] <= r_stage3_pair01[2] + r_stage3_pair23[2];
      r_stage4_y[3] <= r_stage3_pair01[3] + r_stage3_pair23[3];
    end
  end
endmodule: TQ_DCT2_ODD_MCM_8
