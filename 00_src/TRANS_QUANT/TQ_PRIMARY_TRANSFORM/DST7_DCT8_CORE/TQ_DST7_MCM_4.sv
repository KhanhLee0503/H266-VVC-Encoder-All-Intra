//-----------------------------------------------------------
// Description: This module implements the fully pipelined forward
// 4-point DST-VII transform with shared shift-and-add constants.
// Each accepted four-sample beat produces one unscaled coefficient beat.
// The elastic pipeline supports one vector per cycle without stalls.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DST7_MCM_4 #(
  parameter PARA_DATA_WD = 16,
  localparam PARA_RESULT_WD = PARA_DATA_WD + 11
)(
  input                                I_CLK,
  input                                I_RESETN,
  input                                I_DATA_VALID,
  output logic                         O_DATA_READY,
  input        [4*PARA_DATA_WD-1:0]    I_DATA,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]  O_DATA,
  output logic                         O_DATA_LAST
);
  logic [4:0]                       r_valid;
  logic                             w_pipeline_enable;
  logic signed [PARA_DATA_WD-1:0]   r_input [0:3];
  logic signed [PARA_RESULT_WD-1:0] w_input_ext [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_preadd;
  logic signed [PARA_RESULT_WD-1:0] r_prod_29_x0;
  logic signed [PARA_RESULT_WD-1:0] r_prod_29_x2;
  logic signed [PARA_RESULT_WD-1:0] r_prod_29_x3;
  logic signed [PARA_RESULT_WD-1:0] r_prod_55_x0;
  logic signed [PARA_RESULT_WD-1:0] r_prod_55_x2;
  logic signed [PARA_RESULT_WD-1:0] r_prod_55_x3;
  logic signed [PARA_RESULT_WD-1:0] r_prod_74_x1;
  logic signed [PARA_RESULT_WD-1:0] r_prod_84_x0;
  logic signed [PARA_RESULT_WD-1:0] r_prod_84_x2;
  logic signed [PARA_RESULT_WD-1:0] r_prod_84_x3;
  logic signed [PARA_RESULT_WD-1:0] r_29_x0_d;
  logic signed [PARA_RESULT_WD-1:0] r_29_x2_d;
  logic signed [PARA_RESULT_WD-1:0] r_29_x3_d;
  logic signed [PARA_RESULT_WD-1:0] r_55_x0_d;
  logic signed [PARA_RESULT_WD-1:0] r_55_x2_d;
  logic signed [PARA_RESULT_WD-1:0] r_55_x3_d;
  logic signed [PARA_RESULT_WD-1:0] r_74_x1_d;
  logic signed [PARA_RESULT_WD-1:0] r_prod_74_preadd;
  logic signed [PARA_RESULT_WD-1:0] r_pair_0a;
  logic signed [PARA_RESULT_WD-1:0] r_pair_0b;
  logic signed [PARA_RESULT_WD-1:0] r_pair_1a;
  logic signed [PARA_RESULT_WD-1:0] r_pair_1b;
  logic signed [PARA_RESULT_WD-1:0] r_pair_3a;
  logic signed [PARA_RESULT_WD-1:0] r_pair_3b;
  logic signed [PARA_RESULT_WD-1:0] r_74_preadd_d;
  logic signed [PARA_RESULT_WD-1:0] r_result [0:3];

  for (genvar sample_idx = 0; sample_idx < 4; sample_idx++) begin: gen_input_extend
    assign w_input_ext[sample_idx] = {{(PARA_RESULT_WD-PARA_DATA_WD){r_input[sample_idx][PARA_DATA_WD-1]}}, r_input[sample_idx]};
  end

  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_output_pack
    assign O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_result[lane_idx];
  end

  // A downstream stall freezes all five pipeline stages and their valids.
  assign w_pipeline_enable = !r_valid[4] || I_DATA_READY;
  assign O_DATA_READY = w_pipeline_enable;
  assign O_DATA_VALID = r_valid[4];
  assign O_DATA_LAST = r_valid[4];

  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_valid <= '0;
    else if (w_pipeline_enable)
      r_valid <= {r_valid[3:0], I_DATA_VALID};
  end

  // Stage 0 captures four signed samples from the input interface.
  always_ff @(posedge I_CLK) begin
    if (w_pipeline_enable && I_DATA_VALID) begin
      for (int sample_idx = 0; sample_idx < 4; sample_idx++)
        r_input[sample_idx] <= $signed(I_DATA[sample_idx*PARA_DATA_WD +: PARA_DATA_WD]);
    end
  end

  // Stage 1 generates shared products and the three-sample pre-addition.
  always_ff @(posedge I_CLK) begin
    if (w_pipeline_enable && r_valid[0]) begin
      r_preadd <= w_input_ext[0] - w_input_ext[2] + w_input_ext[3];
      r_prod_29_x0 <= (w_input_ext[0] <<< 5) - (w_input_ext[0] <<< 1) - w_input_ext[0];
      r_prod_29_x2 <= (w_input_ext[2] <<< 5) - (w_input_ext[2] <<< 1) - w_input_ext[2];
      r_prod_29_x3 <= (w_input_ext[3] <<< 5) - (w_input_ext[3] <<< 1) - w_input_ext[3];
      r_prod_55_x0 <= (w_input_ext[0] <<< 6) - (w_input_ext[0] <<< 3) - w_input_ext[0];
      r_prod_55_x2 <= (w_input_ext[2] <<< 6) - (w_input_ext[2] <<< 3) - w_input_ext[2];
      r_prod_55_x3 <= (w_input_ext[3] <<< 6) - (w_input_ext[3] <<< 3) - w_input_ext[3];
      r_prod_74_x1 <= (w_input_ext[1] <<< 6) + (w_input_ext[1] <<< 3) + (w_input_ext[1] <<< 1);
    end
  end

  // Stage 2 shares 29x + 55x = 84x and computes 74 times the pre-add.
  always_ff @(posedge I_CLK) begin
    if (w_pipeline_enable && r_valid[1]) begin
      r_prod_84_x0 <= r_prod_29_x0 + r_prod_55_x0;
      r_prod_84_x2 <= r_prod_29_x2 + r_prod_55_x2;
      r_prod_84_x3 <= r_prod_29_x3 + r_prod_55_x3;
      r_prod_74_preadd <= (r_preadd <<< 6) + (r_preadd <<< 3) + (r_preadd <<< 1);
      r_29_x0_d <= r_prod_29_x0;
      r_29_x2_d <= r_prod_29_x2;
      r_29_x3_d <= r_prod_29_x3;
      r_55_x0_d <= r_prod_55_x0;
      r_55_x2_d <= r_prod_55_x2;
      r_55_x3_d <= r_prod_55_x3;
      r_74_x1_d <= r_prod_74_x1;
    end
  end

  // Stage 3 forms balanced partial sums for coefficients zero, one and three.
  always_ff @(posedge I_CLK) begin
    if (w_pipeline_enable && r_valid[2]) begin
      r_pair_0a <= r_29_x0_d + r_74_x1_d;
      r_pair_0b <= r_prod_84_x2 + r_55_x3_d;
      r_pair_1a <= r_55_x0_d + r_74_x1_d;
      r_pair_1b <= r_29_x2_d + r_prod_84_x3;
      r_pair_3a <= r_prod_84_x0 - r_74_x1_d;
      r_pair_3b <= r_55_x2_d - r_29_x3_d;
      r_74_preadd_d <= r_prod_74_preadd;
    end
  end

  // Stage 4 registers the complete forward DST-VII vector.
  always_ff @(posedge I_CLK) begin
    if (w_pipeline_enable && r_valid[3]) begin
      r_result[0] <= r_pair_0a + r_pair_0b;
      r_result[1] <= r_pair_1a - r_pair_1b;
      r_result[2] <= r_74_preadd_d;
      r_result[3] <= r_pair_3a + r_pair_3b;
    end
  end
endmodule: TQ_DST7_MCM_4
