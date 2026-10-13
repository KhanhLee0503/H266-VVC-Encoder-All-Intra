//-----------------------------------------------------------
// Description: 8-point inverse DST-VII matrix multiply (S8 transpose).
// Input: two beats, four signed transform coefficients per beat.
// Output: two beats, four signed raw spatial samples per beat.
// Eight parallel shift-add constant generators; no DSP or BRAM.
// Exactly one vector is in flight. Output stalls preserve data/last.
// Coefficients: VTM RomTr.cpp, g_trCoreDST7P8, 6-bit matrix.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDST7_MCM_8 #(
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
  output logic [4*PARA_RESULT_WD-1:0]  O_DATA,
  output logic                         O_DATA_LAST
);
  typedef enum logic [2:0] {
    ST_IDLE,
    ST_CAPTURE1,
    ST_MCM,
    ST_PAIR,
    ST_QUAD,
    ST_FINAL,
    ST_SEND0,
    ST_SEND1
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic signed [PARA_DATA_WD-1:0]   r_input [0:7];
  logic signed [PARA_RESULT_WD-1:0] w_input_ext [0:7];
  logic signed [PARA_RESULT_WD-1:0] w_mul_3 [0:7];
  logic signed [PARA_RESULT_WD-1:0] w_mul_5 [0:7];
  logic signed [PARA_RESULT_WD-1:0] w_mul_7 [0:7];
  logic signed [PARA_RESULT_WD-1:0] w_product [0:7][0:7];
  logic signed [PARA_RESULT_WD-1:0] r_product [0:7][0:7];
  logic signed [PARA_RESULT_WD-1:0] w_route [0:7][0:7];
  logic signed [PARA_RESULT_WD-1:0] r_pair [0:7][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_quad [0:7][0:1];
  logic signed [PARA_RESULT_WD-1:0] r_result [0:7];

  // Each generated MCM block computes the same eight fixed constants.
  for (genvar sample_idx = 0; sample_idx < 8; sample_idx++) begin: gen_constant_products
    assign w_input_ext[sample_idx] = {{(PARA_RESULT_WD-PARA_DATA_WD){r_input[sample_idx][PARA_DATA_WD-1]}}, r_input[sample_idx]};
    assign w_mul_3[sample_idx] = (w_input_ext[sample_idx] <<< 1) + w_input_ext[sample_idx];
    assign w_mul_5[sample_idx] = (w_input_ext[sample_idx] <<< 2) + w_input_ext[sample_idx];
    assign w_mul_7[sample_idx] = (w_input_ext[sample_idx] <<< 3) - w_input_ext[sample_idx];
    assign w_product[sample_idx][0] = (w_input_ext[sample_idx] <<< 4) + w_input_ext[sample_idx];
    assign w_product[sample_idx][1] = w_input_ext[sample_idx] <<< 5;
    assign w_product[sample_idx][2] = (w_mul_3[sample_idx] <<< 4) - (w_input_ext[sample_idx] <<< 1);
    assign w_product[sample_idx][3] = (w_input_ext[sample_idx] <<< 6) - (w_input_ext[sample_idx] <<< 2);
    assign w_product[sample_idx][4] = (w_input_ext[sample_idx] <<< 6) + w_mul_7[sample_idx];
    assign w_product[sample_idx][5] = (w_mul_5[sample_idx] <<< 4) - (w_input_ext[sample_idx] <<< 1);
    assign w_product[sample_idx][6] = (w_mul_5[sample_idx] <<< 4) + w_mul_5[sample_idx];
    assign w_product[sample_idx][7] = w_product[sample_idx][6] + w_input_ext[sample_idx];
  end

  // Inverse route: output j receives coefficients from column j of Forward S8.
  assign w_route[0][0] = r_product[0][0];
  assign w_route[0][1] = r_product[1][2];
  assign w_route[0][2] = r_product[2][4];
  assign w_route[0][3] = r_product[3][6];
  assign w_route[0][4] = r_product[4][7];
  assign w_route[0][5] = r_product[5][5];
  assign w_route[0][6] = r_product[6][3];
  assign w_route[0][7] = r_product[7][1];
  assign w_route[1][0] = r_product[0][1];
  assign w_route[1][1] = r_product[1][5];
  assign w_route[1][2] = r_product[2][6];
  assign w_route[1][3] = r_product[3][2];
  assign w_route[1][4] = -r_product[4][0];
  assign w_route[1][5] = -r_product[5][4];
  assign w_route[1][6] = -r_product[6][7];
  assign w_route[1][7] = -r_product[7][3];
  assign w_route[2][0] = r_product[0][2];
  assign w_route[2][1] = r_product[1][7];
  assign w_route[2][2] = r_product[2][1];
  assign w_route[2][3] = -r_product[3][3];
  assign w_route[2][4] = -r_product[4][6];
  assign w_route[2][5] = -r_product[5][0];
  assign w_route[2][6] = r_product[6][4];
  assign w_route[2][7] = r_product[7][5];
  assign w_route[3][0] = r_product[0][3];
  assign w_route[3][1] = r_product[1][4];
  assign w_route[3][2] = -r_product[2][2];
  assign w_route[3][3] = -r_product[3][5];
  assign w_route[3][4] = r_product[4][1];
  assign w_route[3][5] = r_product[5][6];
  assign w_route[3][6] = -r_product[6][0];
  assign w_route[3][7] = -r_product[7][7];
  assign w_route[4][0] = r_product[0][4];
  assign w_route[4][1] = r_product[1][1];
  assign w_route[4][2] = -r_product[2][7];
  assign w_route[4][3] = r_product[3][0];
  assign w_route[4][4] = r_product[4][5];
  assign w_route[4][5] = -r_product[5][3];
  assign w_route[4][6] = -r_product[6][2];
  assign w_route[4][7] = r_product[7][6];
  assign w_route[5][0] = r_product[0][5];
  assign w_route[5][1] = -r_product[1][0];
  assign w_route[5][2] = -r_product[2][3];
  assign w_route[5][3] = r_product[3][7];
  assign w_route[5][4] = -r_product[4][2];
  assign w_route[5][5] = -r_product[5][1];
  assign w_route[5][6] = r_product[6][6];
  assign w_route[5][7] = -r_product[7][4];
  assign w_route[6][0] = r_product[0][6];
  assign w_route[6][1] = -r_product[1][3];
  assign w_route[6][2] = r_product[2][0];
  assign w_route[6][3] = r_product[3][1];
  assign w_route[6][4] = -r_product[4][4];
  assign w_route[6][5] = r_product[5][7];
  assign w_route[6][6] = -r_product[6][5];
  assign w_route[6][7] = r_product[7][2];
  assign w_route[7][0] = r_product[0][7];
  assign w_route[7][1] = -r_product[1][6];
  assign w_route[7][2] = r_product[2][5];
  assign w_route[7][3] = -r_product[3][4];
  assign w_route[7][4] = r_product[4][3];
  assign w_route[7][5] = -r_product[5][2];
  assign w_route[7][6] = r_product[6][1];
  assign w_route[7][7] = -r_product[7][0];

  // Reset control registers, not the input and transform datapath arrays.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (I_DATA_VALID)
          w_next_state = ST_CAPTURE1;
      end
      ST_CAPTURE1: begin
        if (I_DATA_VALID)
          w_next_state = ST_MCM;
      end
      ST_MCM: w_next_state = ST_PAIR;
      ST_PAIR: w_next_state = ST_QUAD;
      ST_QUAD: w_next_state = ST_FINAL;
      ST_FINAL: w_next_state = ST_SEND0;
      ST_SEND0: begin
        if (I_DATA_READY)
          w_next_state = ST_SEND1;
      end
      ST_SEND1: begin
        if (I_DATA_READY)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // The output bus is stable during both output-ready stalls.
  always_comb begin
    O_DATA_READY = 1'b0;
    O_DATA_VALID = 1'b0;
    O_DATA_LAST  = 1'b0;
    O_DATA       = '0;
    unique casez (r_current_state)
      ST_IDLE: O_DATA_READY = 1'b1;
      ST_CAPTURE1: O_DATA_READY = 1'b1;
      ST_SEND0: begin
        O_DATA_VALID = 1'b1;
        for (int lane_idx = 0; lane_idx < 4; lane_idx++)
          O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_result[lane_idx];
      end
      ST_SEND1: begin
        O_DATA_VALID = 1'b1;
        O_DATA_LAST  = 1'b1;
        for (int lane_idx = 0; lane_idx < 4; lane_idx++)
          O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_result[lane_idx+4];
      end
      default: begin
        O_DATA_READY = 1'b0;
        O_DATA_VALID = 1'b0;
        O_DATA_LAST  = 1'b0;
        O_DATA       = '0;
      end
    endcase
  end

  // Four balanced addends are accumulated in three pipeline levels.
  always_ff @(posedge I_CLK) begin
    if ((r_current_state == ST_IDLE) && I_DATA_VALID) begin
      for (int sample_idx = 0; sample_idx < 4; sample_idx++)
        r_input[sample_idx] <= $signed(I_DATA[sample_idx*PARA_DATA_WD +: PARA_DATA_WD]);
    end
    if ((r_current_state == ST_CAPTURE1) && I_DATA_VALID) begin
      for (int sample_idx = 0; sample_idx < 4; sample_idx++)
        r_input[sample_idx+4] <= $signed(I_DATA[sample_idx*PARA_DATA_WD +: PARA_DATA_WD]);
    end
    if (r_current_state == ST_MCM) begin
      for (int sample_idx = 0; sample_idx < 8; sample_idx++) begin
        for (int coefficient_idx = 0; coefficient_idx < 8; coefficient_idx++)
          r_product[sample_idx][coefficient_idx] <= w_product[sample_idx][coefficient_idx];
      end
    end
    if (r_current_state == ST_PAIR) begin
      for (int lane_idx = 0; lane_idx < 8; lane_idx++) begin
        for (int pair_idx = 0; pair_idx < 4; pair_idx++)
          r_pair[lane_idx][pair_idx] <= w_route[lane_idx][pair_idx*2] + w_route[lane_idx][pair_idx*2+1];
      end
    end
    if (r_current_state == ST_QUAD) begin
      for (int lane_idx = 0; lane_idx < 8; lane_idx++) begin
        r_quad[lane_idx][0] <= r_pair[lane_idx][0] + r_pair[lane_idx][1];
        r_quad[lane_idx][1] <= r_pair[lane_idx][2] + r_pair[lane_idx][3];
      end
    end
    if (r_current_state == ST_FINAL) begin
      for (int lane_idx = 0; lane_idx < 8; lane_idx++)
        r_result[lane_idx] <= r_quad[lane_idx][0] + r_quad[lane_idx][1];
    end
  end
endmodule: TQ_IDST7_MCM_8
