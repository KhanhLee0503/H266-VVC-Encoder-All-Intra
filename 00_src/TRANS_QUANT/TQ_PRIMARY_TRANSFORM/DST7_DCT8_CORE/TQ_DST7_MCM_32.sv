//-----------------------------------------------------------
// Description: This module implements shared forward 32-point DST-VII
// and DCT-VIII arithmetic using four folded shift-and-add MCM generators.
// Sixteen parallel coefficient lanes accumulate eight four-sample groups.
// All thirty-two input samples contribute to the retained coefficients.
// Output coefficients 16 to 31 are zero as required for 32-point MTS.
// Transform mode 0 selects DST-VII and mode 1 selects DCT-VIII.
// Outputs are unscaled integer matrix products, before normalization.
// Routing regenerated from H.266 integer DST7/DCT8 matrices.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DST7_MCM_32 #(
  parameter PARA_DATA_WD = 16,
  localparam PARA_RESULT_WD = PARA_DATA_WD + 12
)(
  input                                I_CLK,
  input                                I_RESETN,
  input                                I_DATA_VALID,
  output logic                         O_DATA_READY,
  input        [4*PARA_DATA_WD-1:0]    I_DATA,
  input                                I_TRANSFORM_MODE,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]  O_DATA,
  output logic                         O_DATA_LAST
);
  typedef enum logic [2:0] {
    ST_IDLE,
    ST_CAPTURE,
    ST_ISSUE,
    ST_DRAIN,
    ST_SEND
  } state_t;

  state_t r_current_state;
  state_t w_next_state;
  logic [2:0] r_capture_group;
  logic [2:0] r_issue_group;
  logic [2:0] r_output_beat;
  logic r_transform_mode;
  logic signed [PARA_DATA_WD-1:0] r_input [0:31];
  logic signed [PARA_DATA_WD-1:0] w_group_sample [0:3];
  logic signed [PARA_RESULT_WD-1:0] w_group_ext [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_pre_x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_base_x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_3 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_5 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_7 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_9 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_11 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_13 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_15 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_product [0:3][0:30];
  logic signed [PARA_RESULT_WD-1:0] w_dst_mag [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] w_dct_mag [0:15][0:3];
  logic w_dst_neg [0:15][0:3];
  logic w_dct_neg [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] w_route_mag [0:15][0:3];
  logic w_route_neg [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_route_mag [0:15][0:3];
  logic r_route_neg [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_route_signed [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_pair [0:15][0:1];
  logic signed [PARA_RESULT_WD-1:0] r_partial [0:15];
  logic signed [PARA_RESULT_WD-1:0] r_acc [0:15];
  logic r_pre_valid;
  logic r_base_valid;
  logic r_prod_valid;
  logic r_route_valid;
  logic r_sign_valid;
  logic r_pair_valid;
  logic r_partial_valid;
  logic [2:0] r_pre_group;
  logic [2:0] r_base_group;
  logic [2:0] r_prod_group;
  logic [2:0] r_route_group;
  logic [2:0] r_sign_group;
  logic [2:0] r_pair_group;
  logic [2:0] r_partial_group;
  logic r_pre_mode;
  logic r_base_mode;
  logic r_prod_mode;

  // Eight accepted input beats are captured before issuing the transform.
  assign O_DATA_READY = (r_current_state == ST_IDLE) || (r_current_state == ST_CAPTURE);
  assign O_DATA_VALID = (r_current_state == ST_SEND);
  assign O_DATA_LAST = (r_current_state == ST_SEND) && (r_output_beat == 3'd7);

  // Four results are transmitted per beat; beats four to seven are zero.
  always_comb begin
    O_DATA = '0;
    if ((r_current_state == ST_SEND) && (r_output_beat < 3'd4)) begin
      for (int lane_idx = 0; lane_idx < 4; lane_idx++)
        O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[{r_output_beat[1:0], 2'b00} + lane_idx];
    end
  end

  // The group selector reads four samples from the buffered input vector.
  always_comb begin
    for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++)
      w_group_sample[mcm_idx] = r_input[{r_issue_group, 2'b00} + mcm_idx];
  end

  // Sign extension occurs before DCT-VIII input negation to avoid overflow.
  for (genvar mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin: gen_input_extend
    assign w_group_ext[mcm_idx] = {{(PARA_RESULT_WD-PARA_DATA_WD){w_group_sample[mcm_idx][PARA_DATA_WD-1]}}, w_group_sample[mcm_idx]};
  end

  // GENERATED: forward 32-point coefficient matrices from VVC integer DST7.
  // DST7: S[k][n],  DCT8: (-1)^k * S[k][31-n].
  // Keep existing DCT8 input pre-sign (-1)^n; route compensates.
  // Each case covers four input samples n=4*group+mcm_idx.
  always_comb begin
    for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        w_dst_mag[lane_idx][mcm_idx] = '0;
        w_dct_mag[lane_idx][mcm_idx] = '0;
        w_dst_neg[lane_idx][mcm_idx] = 1'b0;
        w_dct_neg[lane_idx][mcm_idx] = 1'b0;
      end
    end
    unique casez (r_prod_group)
      3'd0: begin
        w_dst_mag[0][0] = r_product[0][0];
        w_dct_mag[0][0] = r_product[0][30];
        w_dst_mag[0][1] = r_product[1][1];
        w_dct_mag[0][1] = r_product[1][30];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][2];
        w_dct_mag[0][2] = r_product[2][29];
        w_dst_mag[0][3] = r_product[3][3];
        w_dct_mag[0][3] = r_product[3][28];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][2];
        w_dct_mag[1][0] = r_product[0][30];
        w_dst_mag[1][1] = r_product[1][5];
        w_dct_mag[1][1] = r_product[1][27];
        w_dct_neg[1][1] = 1'b1;
        w_dst_mag[1][2] = r_product[2][8];
        w_dct_mag[1][2] = r_product[2][24];
        w_dst_mag[1][3] = r_product[3][11];
        w_dct_mag[1][3] = r_product[3][21];
        w_dct_neg[1][3] = 1'b1;
        w_dst_mag[2][0] = r_product[0][4];
        w_dct_mag[2][0] = r_product[0][29];
        w_dst_mag[2][1] = r_product[1][9];
        w_dct_mag[2][1] = r_product[1][24];
        w_dct_neg[2][1] = 1'b1;
        w_dst_mag[2][2] = r_product[2][14];
        w_dct_mag[2][2] = r_product[2][19];
        w_dst_mag[2][3] = r_product[3][19];
        w_dct_mag[2][3] = r_product[3][14];
        w_dct_neg[2][3] = 1'b1;
        w_dst_mag[3][0] = r_product[0][6];
        w_dct_mag[3][0] = r_product[0][28];
        w_dst_mag[3][1] = r_product[1][13];
        w_dct_mag[3][1] = r_product[1][21];
        w_dct_neg[3][1] = 1'b1;
        w_dst_mag[3][2] = r_product[2][20];
        w_dct_mag[3][2] = r_product[2][14];
        w_dst_mag[3][3] = r_product[3][27];
        w_dct_mag[3][3] = r_product[3][7];
        w_dct_neg[3][3] = 1'b1;
        w_dst_mag[4][0] = r_product[0][8];
        w_dct_mag[4][0] = r_product[0][27];
        w_dst_mag[4][1] = r_product[1][17];
        w_dct_mag[4][1] = r_product[1][18];
        w_dct_neg[4][1] = 1'b1;
        w_dst_mag[4][2] = r_product[2][26];
        w_dct_mag[4][2] = r_product[2][9];
        w_dst_mag[4][3] = r_product[3][28];
        w_dct_mag[4][3] = r_product[3][0];
        w_dct_neg[4][3] = 1'b1;
        w_dst_mag[5][0] = r_product[0][10];
        w_dct_mag[5][0] = r_product[0][26];
        w_dst_mag[5][1] = r_product[1][21];
        w_dct_mag[5][1] = r_product[1][15];
        w_dct_neg[5][1] = 1'b1;
        w_dst_mag[5][2] = r_product[2][30];
        w_dct_mag[5][2] = r_product[2][4];
        w_dst_mag[5][3] = r_product[3][20];
        w_dct_mag[5][3] = r_product[3][5];
        w_dst_mag[6][0] = r_product[0][12];
        w_dct_mag[6][0] = r_product[0][25];
        w_dst_mag[6][1] = r_product[1][25];
        w_dct_mag[6][1] = r_product[1][12];
        w_dct_neg[6][1] = 1'b1;
        w_dst_mag[6][2] = r_product[2][25];
        w_dst_mag[6][3] = r_product[3][12];
        w_dct_mag[6][3] = r_product[3][12];
        w_dst_mag[7][0] = r_product[0][14];
        w_dct_mag[7][0] = r_product[0][24];
        w_dst_mag[7][1] = r_product[1][29];
        w_dct_mag[7][1] = r_product[1][9];
        w_dct_neg[7][1] = 1'b1;
        w_dst_mag[7][2] = r_product[2][19];
        w_dct_mag[7][2] = r_product[2][4];
        w_dct_neg[7][2] = 1'b1;
        w_dst_mag[7][3] = r_product[3][4];
        w_dct_mag[7][3] = r_product[3][19];
        w_dst_mag[8][0] = r_product[0][16];
        w_dct_mag[8][0] = r_product[0][23];
        w_dst_mag[8][1] = r_product[1][30];
        w_dct_mag[8][1] = r_product[1][6];
        w_dct_neg[8][1] = 1'b1;
        w_dst_mag[8][2] = r_product[2][13];
        w_dct_mag[8][2] = r_product[2][9];
        w_dct_neg[8][2] = 1'b1;
        w_dst_mag[8][3] = r_product[3][2];
        w_dst_neg[8][3] = 1'b1;
        w_dct_mag[8][3] = r_product[3][26];
        w_dst_mag[9][0] = r_product[0][18];
        w_dct_mag[9][0] = r_product[0][22];
        w_dst_mag[9][1] = r_product[1][26];
        w_dct_mag[9][1] = r_product[1][3];
        w_dct_neg[9][1] = 1'b1;
        w_dst_mag[9][2] = r_product[2][7];
        w_dct_mag[9][2] = r_product[2][14];
        w_dct_neg[9][2] = 1'b1;
        w_dst_mag[9][3] = r_product[3][10];
        w_dst_neg[9][3] = 1'b1;
        w_dct_mag[9][3] = r_product[3][30];
        w_dst_mag[10][0] = r_product[0][20];
        w_dct_mag[10][0] = r_product[0][21];
        w_dst_mag[10][1] = r_product[1][22];
        w_dct_mag[10][1] = r_product[1][0];
        w_dct_neg[10][1] = 1'b1;
        w_dst_mag[10][2] = r_product[2][1];
        w_dct_mag[10][2] = r_product[2][19];
        w_dct_neg[10][2] = 1'b1;
        w_dst_mag[10][3] = r_product[3][18];
        w_dst_neg[10][3] = 1'b1;
        w_dct_mag[10][3] = r_product[3][23];
        w_dst_mag[11][0] = r_product[0][22];
        w_dct_mag[11][0] = r_product[0][20];
        w_dst_mag[11][1] = r_product[1][18];
        w_dct_mag[11][1] = r_product[1][1];
        w_dst_mag[11][2] = r_product[2][3];
        w_dst_neg[11][2] = 1'b1;
        w_dct_mag[11][2] = r_product[2][24];
        w_dct_neg[11][2] = 1'b1;
        w_dst_mag[11][3] = r_product[3][26];
        w_dst_neg[11][3] = 1'b1;
        w_dct_mag[11][3] = r_product[3][16];
        w_dst_mag[12][0] = r_product[0][24];
        w_dct_mag[12][0] = r_product[0][19];
        w_dst_mag[12][1] = r_product[1][14];
        w_dct_mag[12][1] = r_product[1][4];
        w_dst_mag[12][2] = r_product[2][9];
        w_dst_neg[12][2] = 1'b1;
        w_dct_mag[12][2] = r_product[2][29];
        w_dct_neg[12][2] = 1'b1;
        w_dst_mag[12][3] = r_product[3][29];
        w_dst_neg[12][3] = 1'b1;
        w_dct_mag[12][3] = r_product[3][9];
        w_dst_mag[13][0] = r_product[0][26];
        w_dct_mag[13][0] = r_product[0][18];
        w_dst_mag[13][1] = r_product[1][10];
        w_dct_mag[13][1] = r_product[1][7];
        w_dst_mag[13][2] = r_product[2][15];
        w_dst_neg[13][2] = 1'b1;
        w_dct_mag[13][2] = r_product[2][29];
        w_dct_neg[13][2] = 1'b1;
        w_dst_mag[13][3] = r_product[3][21];
        w_dst_neg[13][3] = 1'b1;
        w_dct_mag[13][3] = r_product[3][2];
        w_dst_mag[14][0] = r_product[0][28];
        w_dct_mag[14][0] = r_product[0][17];
        w_dst_mag[14][1] = r_product[1][6];
        w_dct_mag[14][1] = r_product[1][10];
        w_dst_mag[14][2] = r_product[2][21];
        w_dst_neg[14][2] = 1'b1;
        w_dct_mag[14][2] = r_product[2][24];
        w_dct_neg[14][2] = 1'b1;
        w_dst_mag[14][3] = r_product[3][13];
        w_dst_neg[14][3] = 1'b1;
        w_dct_mag[14][3] = r_product[3][3];
        w_dct_neg[14][3] = 1'b1;
        w_dst_mag[15][0] = r_product[0][30];
        w_dct_mag[15][0] = r_product[0][16];
        w_dst_mag[15][1] = r_product[1][2];
        w_dct_mag[15][1] = r_product[1][13];
        w_dst_mag[15][2] = r_product[2][27];
        w_dst_neg[15][2] = 1'b1;
        w_dct_mag[15][2] = r_product[2][19];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][5];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][10];
        w_dct_neg[15][3] = 1'b1;
      end
      3'd1: begin
        w_dst_mag[0][0] = r_product[0][4];
        w_dct_mag[0][0] = r_product[0][27];
        w_dst_mag[0][1] = r_product[1][5];
        w_dct_mag[0][1] = r_product[1][26];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][6];
        w_dct_mag[0][2] = r_product[2][25];
        w_dst_mag[0][3] = r_product[3][7];
        w_dct_mag[0][3] = r_product[3][24];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][14];
        w_dct_mag[1][0] = r_product[0][18];
        w_dst_mag[1][1] = r_product[1][17];
        w_dct_mag[1][1] = r_product[1][15];
        w_dct_neg[1][1] = 1'b1;
        w_dst_mag[1][2] = r_product[2][20];
        w_dct_mag[1][2] = r_product[2][12];
        w_dst_mag[1][3] = r_product[3][23];
        w_dct_mag[1][3] = r_product[3][9];
        w_dct_neg[1][3] = 1'b1;
        w_dst_mag[2][0] = r_product[0][24];
        w_dct_mag[2][0] = r_product[0][9];
        w_dst_mag[2][1] = r_product[1][29];
        w_dct_mag[2][1] = r_product[1][4];
        w_dct_neg[2][1] = 1'b1;
        w_dst_mag[2][2] = r_product[2][29];
        w_dst_mag[2][3] = r_product[3][24];
        w_dct_mag[2][3] = r_product[3][4];
        w_dst_mag[3][0] = r_product[0][29];
        w_dct_mag[3][0] = r_product[0][0];
        w_dst_mag[3][1] = r_product[1][22];
        w_dct_mag[3][1] = r_product[1][5];
        w_dst_mag[3][2] = r_product[2][15];
        w_dct_mag[3][2] = r_product[2][12];
        w_dct_neg[3][2] = 1'b1;
        w_dst_mag[3][3] = r_product[3][8];
        w_dct_mag[3][3] = r_product[3][19];
        w_dst_mag[4][0] = r_product[0][19];
        w_dct_mag[4][0] = r_product[0][7];
        w_dct_neg[4][0] = 1'b1;
        w_dst_mag[4][1] = r_product[1][10];
        w_dct_mag[4][1] = r_product[1][16];
        w_dst_mag[4][2] = r_product[2][1];
        w_dct_mag[4][2] = r_product[2][25];
        w_dct_neg[4][2] = 1'b1;
        w_dst_mag[4][3] = r_product[3][6];
        w_dst_neg[4][3] = 1'b1;
        w_dct_mag[4][3] = r_product[3][29];
        w_dst_mag[5][0] = r_product[0][9];
        w_dct_mag[5][0] = r_product[0][16];
        w_dct_neg[5][0] = 1'b1;
        w_dst_mag[5][1] = r_product[1][0];
        w_dst_neg[5][1] = 1'b1;
        w_dct_mag[5][1] = r_product[1][27];
        w_dst_mag[5][2] = r_product[2][11];
        w_dst_neg[5][2] = 1'b1;
        w_dct_mag[5][2] = r_product[2][25];
        w_dct_neg[5][2] = 1'b1;
        w_dst_mag[5][3] = r_product[3][22];
        w_dst_neg[5][3] = 1'b1;
        w_dct_mag[5][3] = r_product[3][14];
        w_dct_mag[6][0] = r_product[0][25];
        w_dct_neg[6][0] = 1'b1;
        w_dst_mag[6][1] = r_product[1][12];
        w_dst_neg[6][1] = 1'b1;
        w_dct_mag[6][1] = r_product[1][25];
        w_dst_mag[6][2] = r_product[2][25];
        w_dst_neg[6][2] = 1'b1;
        w_dct_mag[6][2] = r_product[2][12];
        w_dct_neg[6][2] = 1'b1;
        w_dst_mag[6][3] = r_product[3][25];
        w_dst_neg[6][3] = 1'b1;
        w_dst_mag[7][0] = r_product[0][9];
        w_dst_neg[7][0] = 1'b1;
        w_dct_mag[7][0] = r_product[0][29];
        w_dct_neg[7][0] = 1'b1;
        w_dst_mag[7][1] = r_product[1][24];
        w_dst_neg[7][1] = 1'b1;
        w_dct_mag[7][1] = r_product[1][14];
        w_dst_mag[7][2] = r_product[2][24];
        w_dst_neg[7][2] = 1'b1;
        w_dst_mag[7][3] = r_product[3][9];
        w_dst_neg[7][3] = 1'b1;
        w_dct_mag[7][3] = r_product[3][14];
        w_dct_neg[7][3] = 1'b1;
        w_dst_mag[8][0] = r_product[0][19];
        w_dst_neg[8][0] = 1'b1;
        w_dct_mag[8][0] = r_product[0][20];
        w_dct_neg[8][0] = 1'b1;
        w_dst_mag[8][1] = r_product[1][27];
        w_dst_neg[8][1] = 1'b1;
        w_dct_mag[8][1] = r_product[1][3];
        w_dst_mag[8][2] = r_product[2][10];
        w_dst_neg[8][2] = 1'b1;
        w_dct_mag[8][2] = r_product[2][12];
        w_dst_mag[8][3] = r_product[3][5];
        w_dct_mag[8][3] = r_product[3][29];
        w_dct_neg[8][3] = 1'b1;
        w_dst_mag[9][0] = r_product[0][29];
        w_dst_neg[9][0] = 1'b1;
        w_dct_mag[9][0] = r_product[0][11];
        w_dct_neg[9][0] = 1'b1;
        w_dst_mag[9][1] = r_product[1][15];
        w_dst_neg[9][1] = 1'b1;
        w_dct_mag[9][1] = r_product[1][6];
        w_dct_neg[9][1] = 1'b1;
        w_dst_mag[9][2] = r_product[2][2];
        w_dct_mag[9][2] = r_product[2][25];
        w_dst_mag[9][3] = r_product[3][21];
        w_dct_mag[9][3] = r_product[3][19];
        w_dct_neg[9][3] = 1'b1;
        w_dst_mag[10][0] = r_product[0][24];
        w_dst_neg[10][0] = 1'b1;
        w_dct_mag[10][0] = r_product[0][2];
        w_dct_neg[10][0] = 1'b1;
        w_dst_mag[10][1] = r_product[1][3];
        w_dst_neg[10][1] = 1'b1;
        w_dct_mag[10][1] = r_product[1][17];
        w_dct_neg[10][1] = 1'b1;
        w_dst_mag[10][2] = r_product[2][16];
        w_dct_mag[10][2] = r_product[2][25];
        w_dst_mag[10][3] = r_product[3][26];
        w_dct_mag[10][3] = r_product[3][4];
        w_dct_neg[10][3] = 1'b1;
        w_dst_mag[11][0] = r_product[0][14];
        w_dst_neg[11][0] = 1'b1;
        w_dct_mag[11][0] = r_product[0][5];
        w_dst_mag[11][1] = r_product[1][7];
        w_dct_mag[11][1] = r_product[1][28];
        w_dct_neg[11][1] = 1'b1;
        w_dst_mag[11][2] = r_product[2][30];
        w_dct_mag[11][2] = r_product[2][12];
        w_dst_mag[11][3] = r_product[3][10];
        w_dct_mag[11][3] = r_product[3][9];
        w_dst_mag[12][0] = r_product[0][4];
        w_dst_neg[12][0] = 1'b1;
        w_dct_mag[12][0] = r_product[0][14];
        w_dst_mag[12][1] = r_product[1][19];
        w_dct_mag[12][1] = r_product[1][24];
        w_dct_neg[12][1] = 1'b1;
        w_dst_mag[12][2] = r_product[2][19];
        w_dst_mag[12][3] = r_product[3][4];
        w_dst_neg[12][3] = 1'b1;
        w_dct_mag[12][3] = r_product[3][24];
        w_dst_mag[13][0] = r_product[0][4];
        w_dct_mag[13][0] = r_product[0][23];
        w_dst_mag[13][1] = r_product[1][30];
        w_dct_mag[13][1] = r_product[1][13];
        w_dct_neg[13][1] = 1'b1;
        w_dst_mag[13][2] = r_product[2][5];
        w_dct_mag[13][2] = r_product[2][12];
        w_dct_neg[13][2] = 1'b1;
        w_dst_mag[13][3] = r_product[3][20];
        w_dst_neg[13][3] = 1'b1;
        w_dct_mag[13][3] = r_product[3][24];
        w_dst_mag[14][0] = r_product[0][14];
        w_dct_mag[14][0] = r_product[0][30];
        w_dst_mag[14][1] = r_product[1][20];
        w_dct_mag[14][1] = r_product[1][2];
        w_dct_neg[14][1] = 1'b1;
        w_dst_mag[14][2] = r_product[2][7];
        w_dst_neg[14][2] = 1'b1;
        w_dct_mag[14][2] = r_product[2][25];
        w_dct_neg[14][2] = 1'b1;
        w_dst_mag[14][3] = r_product[3][27];
        w_dst_neg[14][3] = 1'b1;
        w_dct_mag[14][3] = r_product[3][9];
        w_dst_mag[15][0] = r_product[0][24];
        w_dct_mag[15][0] = r_product[0][22];
        w_dst_mag[15][1] = r_product[1][8];
        w_dct_mag[15][1] = r_product[1][7];
        w_dst_mag[15][2] = r_product[2][21];
        w_dst_neg[15][2] = 1'b1;
        w_dct_mag[15][2] = r_product[2][25];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][11];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][4];
        w_dct_neg[15][3] = 1'b1;
      end
      3'd2: begin
        w_dst_mag[0][0] = r_product[0][8];
        w_dct_mag[0][0] = r_product[0][23];
        w_dst_mag[0][1] = r_product[1][9];
        w_dct_mag[0][1] = r_product[1][22];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][10];
        w_dct_mag[0][2] = r_product[2][21];
        w_dst_mag[0][3] = r_product[3][11];
        w_dct_mag[0][3] = r_product[3][20];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][26];
        w_dct_mag[1][0] = r_product[0][6];
        w_dst_mag[1][1] = r_product[1][29];
        w_dct_mag[1][1] = r_product[1][3];
        w_dct_neg[1][1] = 1'b1;
        w_dst_mag[1][2] = r_product[2][30];
        w_dct_mag[1][2] = r_product[2][0];
        w_dst_mag[1][3] = r_product[3][28];
        w_dct_mag[1][3] = r_product[3][1];
        w_dst_mag[2][0] = r_product[0][19];
        w_dct_mag[2][0] = r_product[0][9];
        w_dct_neg[2][0] = 1'b1;
        w_dst_mag[2][1] = r_product[1][14];
        w_dct_mag[2][1] = r_product[1][14];
        w_dst_mag[2][2] = r_product[2][9];
        w_dct_mag[2][2] = r_product[2][19];
        w_dct_neg[2][2] = 1'b1;
        w_dst_mag[2][3] = r_product[3][4];
        w_dct_mag[2][3] = r_product[3][24];
        w_dst_mag[3][0] = r_product[0][1];
        w_dct_mag[3][0] = r_product[0][26];
        w_dct_neg[3][0] = 1'b1;
        w_dst_mag[3][1] = r_product[1][4];
        w_dst_neg[3][1] = 1'b1;
        w_dct_mag[3][1] = r_product[1][30];
        w_dst_mag[3][2] = r_product[2][11];
        w_dst_neg[3][2] = 1'b1;
        w_dct_mag[3][2] = r_product[2][23];
        w_dct_neg[3][2] = 1'b1;
        w_dst_mag[3][3] = r_product[3][18];
        w_dst_neg[3][3] = 1'b1;
        w_dct_mag[3][3] = r_product[3][16];
        w_dst_mag[4][0] = r_product[0][15];
        w_dst_neg[4][0] = 1'b1;
        w_dct_mag[4][0] = r_product[0][20];
        w_dct_neg[4][0] = 1'b1;
        w_dst_mag[4][1] = r_product[1][24];
        w_dst_neg[4][1] = 1'b1;
        w_dct_mag[4][1] = r_product[1][11];
        w_dst_mag[4][2] = r_product[2][30];
        w_dst_neg[4][2] = 1'b1;
        w_dct_mag[4][2] = r_product[2][2];
        w_dct_neg[4][2] = 1'b1;
        w_dst_mag[4][3] = r_product[3][21];
        w_dst_neg[4][3] = 1'b1;
        w_dct_mag[4][3] = r_product[3][5];
        w_dct_neg[4][3] = 1'b1;
        w_dst_mag[5][0] = r_product[0][30];
        w_dst_neg[5][0] = 1'b1;
        w_dct_mag[5][0] = r_product[0][3];
        w_dct_neg[5][0] = 1'b1;
        w_dst_mag[5][1] = r_product[1][19];
        w_dst_neg[5][1] = 1'b1;
        w_dct_mag[5][1] = r_product[1][6];
        w_dct_neg[5][1] = 1'b1;
        w_dst_mag[5][2] = r_product[2][8];
        w_dst_neg[5][2] = 1'b1;
        w_dct_mag[5][2] = r_product[2][17];
        w_dst_mag[5][3] = r_product[3][1];
        w_dct_mag[5][3] = r_product[3][28];
        w_dct_neg[5][3] = 1'b1;
        w_dst_mag[6][0] = r_product[0][12];
        w_dst_neg[6][0] = 1'b1;
        w_dct_mag[6][0] = r_product[0][12];
        w_dct_mag[6][1] = r_product[1][25];
        w_dct_neg[6][1] = 1'b1;
        w_dst_mag[6][2] = r_product[2][12];
        w_dct_mag[6][2] = r_product[2][25];
        w_dst_mag[6][3] = r_product[3][25];
        w_dct_mag[6][3] = r_product[3][12];
        w_dct_neg[6][3] = 1'b1;
        w_dst_mag[7][0] = r_product[0][4];
        w_dct_mag[7][0] = r_product[0][29];
        w_dst_mag[7][1] = r_product[1][19];
        w_dct_mag[7][1] = r_product[1][19];
        w_dct_neg[7][1] = 1'b1;
        w_dst_mag[7][2] = r_product[2][29];
        w_dct_mag[7][2] = r_product[2][4];
        w_dst_mag[7][3] = r_product[3][14];
        w_dct_mag[7][3] = r_product[3][9];
        w_dst_mag[8][0] = r_product[0][22];
        w_dct_mag[8][0] = r_product[0][17];
        w_dst_mag[8][1] = r_product[1][24];
        w_dct_mag[8][1] = r_product[1][0];
        w_dct_neg[8][1] = 1'b1;
        w_dst_mag[8][2] = r_product[2][7];
        w_dct_mag[8][2] = r_product[2][15];
        w_dct_neg[8][2] = 1'b1;
        w_dst_mag[8][3] = r_product[3][8];
        w_dst_neg[8][3] = 1'b1;
        w_dct_mag[8][3] = r_product[3][30];
        w_dst_mag[9][0] = r_product[0][23];
        w_dct_mag[9][0] = r_product[0][0];
        w_dst_mag[9][1] = r_product[1][4];
        w_dct_mag[9][1] = r_product[1][17];
        w_dst_mag[9][2] = r_product[2][13];
        w_dst_neg[9][2] = 1'b1;
        w_dct_mag[9][2] = r_product[2][27];
        w_dct_neg[9][2] = 1'b1;
        w_dst_mag[9][3] = r_product[3][30];
        w_dst_neg[9][3] = 1'b1;
        w_dct_mag[9][3] = r_product[3][8];
        w_dst_mag[10][0] = r_product[0][5];
        w_dct_mag[10][0] = r_product[0][15];
        w_dct_neg[10][0] = 1'b1;
        w_dst_mag[10][1] = r_product[1][14];
        w_dst_neg[10][1] = 1'b1;
        w_dct_mag[10][1] = r_product[1][27];
        w_dst_mag[10][2] = r_product[2][28];
        w_dst_neg[10][2] = 1'b1;
        w_dct_mag[10][2] = r_product[2][6];
        w_dct_neg[10][2] = 1'b1;
        w_dst_mag[10][3] = r_product[3][7];
        w_dst_neg[10][3] = 1'b1;
        w_dct_mag[10][3] = r_product[3][13];
        w_dct_neg[10][3] = 1'b1;
        w_dst_mag[11][0] = r_product[0][11];
        w_dst_neg[11][0] = 1'b1;
        w_dct_mag[11][0] = r_product[0][30];
        w_dct_neg[11][0] = 1'b1;
        w_dst_mag[11][1] = r_product[1][29];
        w_dst_neg[11][1] = 1'b1;
        w_dct_mag[11][1] = r_product[1][8];
        w_dst_mag[11][2] = r_product[2][6];
        w_dst_neg[11][2] = 1'b1;
        w_dct_mag[11][2] = r_product[2][13];
        w_dst_mag[11][3] = r_product[3][15];
        w_dct_mag[11][3] = r_product[3][27];
        w_dct_neg[11][3] = 1'b1;
        w_dst_mag[12][0] = r_product[0][29];
        w_dst_neg[12][0] = 1'b1;
        w_dct_mag[12][0] = r_product[0][14];
        w_dct_neg[12][0] = 1'b1;
        w_dst_mag[12][1] = r_product[1][9];
        w_dst_neg[12][1] = 1'b1;
        w_dct_mag[12][1] = r_product[1][9];
        w_dct_neg[12][1] = 1'b1;
        w_dst_mag[12][2] = r_product[2][14];
        w_dct_mag[12][2] = r_product[2][29];
        w_dst_mag[12][3] = r_product[3][24];
        w_dct_mag[12][3] = r_product[3][4];
        w_dct_neg[12][3] = 1'b1;
        w_dst_mag[13][0] = r_product[0][16];
        w_dst_neg[13][0] = 1'b1;
        w_dct_mag[13][0] = r_product[0][1];
        w_dst_mag[13][1] = r_product[1][9];
        w_dct_mag[13][1] = r_product[1][28];
        w_dct_neg[13][1] = 1'b1;
        w_dst_mag[13][2] = r_product[2][27];
        w_dct_mag[13][2] = r_product[2][8];
        w_dst_mag[13][3] = r_product[3][0];
        w_dct_mag[13][3] = r_product[3][17];
        w_dst_mag[14][0] = r_product[0][0];
        w_dct_mag[14][0] = r_product[0][18];
        w_dst_mag[14][1] = r_product[1][29];
        w_dct_mag[14][1] = r_product[1][16];
        w_dct_neg[14][1] = 1'b1;
        w_dst_mag[14][2] = r_product[2][5];
        w_dct_mag[14][2] = r_product[2][11];
        w_dct_neg[14][2] = 1'b1;
        w_dst_mag[14][3] = r_product[3][22];
        w_dst_neg[14][3] = 1'b1;
        w_dct_mag[14][3] = r_product[3][23];
        w_dst_mag[15][0] = r_product[0][18];
        w_dct_mag[15][0] = r_product[0][28];
        w_dst_mag[15][1] = r_product[1][14];
        w_dct_mag[15][1] = r_product[1][1];
        w_dst_mag[15][2] = r_product[2][15];
        w_dst_neg[15][2] = 1'b1;
        w_dct_mag[15][2] = r_product[2][30];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][17];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][0];
      end
      3'd3: begin
        w_dst_mag[0][0] = r_product[0][12];
        w_dct_mag[0][0] = r_product[0][19];
        w_dst_mag[0][1] = r_product[1][13];
        w_dct_mag[0][1] = r_product[1][18];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][14];
        w_dct_mag[0][2] = r_product[2][17];
        w_dst_mag[0][3] = r_product[3][15];
        w_dct_mag[0][3] = r_product[3][16];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][25];
        w_dct_mag[1][0] = r_product[0][4];
        w_dct_neg[1][0] = 1'b1;
        w_dst_mag[1][1] = r_product[1][22];
        w_dct_mag[1][1] = r_product[1][7];
        w_dst_mag[1][2] = r_product[2][19];
        w_dct_mag[1][2] = r_product[2][10];
        w_dct_neg[1][2] = 1'b1;
        w_dst_mag[1][3] = r_product[3][16];
        w_dct_mag[1][3] = r_product[3][13];
        w_dct_mag[2][0] = r_product[0][29];
        w_dct_neg[2][0] = 1'b1;
        w_dst_mag[2][1] = r_product[1][4];
        w_dst_neg[2][1] = 1'b1;
        w_dct_mag[2][1] = r_product[1][29];
        w_dst_mag[2][2] = r_product[2][9];
        w_dst_neg[2][2] = 1'b1;
        w_dct_mag[2][2] = r_product[2][24];
        w_dct_neg[2][2] = 1'b1;
        w_dst_mag[2][3] = r_product[3][14];
        w_dst_neg[2][3] = 1'b1;
        w_dct_mag[2][3] = r_product[3][19];
        w_dst_mag[3][0] = r_product[0][25];
        w_dst_neg[3][0] = 1'b1;
        w_dct_mag[3][0] = r_product[0][9];
        w_dct_neg[3][0] = 1'b1;
        w_dst_mag[3][1] = r_product[1][30];
        w_dst_neg[3][1] = 1'b1;
        w_dct_mag[3][1] = r_product[1][2];
        w_dst_mag[3][2] = r_product[2][24];
        w_dst_neg[3][2] = 1'b1;
        w_dct_mag[3][2] = r_product[2][3];
        w_dst_mag[3][3] = r_product[3][17];
        w_dst_neg[3][3] = 1'b1;
        w_dct_mag[3][3] = r_product[3][10];
        w_dct_neg[3][3] = 1'b1;
        w_dst_mag[4][0] = r_product[0][12];
        w_dst_neg[4][0] = 1'b1;
        w_dct_mag[4][0] = r_product[0][14];
        w_dst_mag[4][1] = r_product[1][3];
        w_dst_neg[4][1] = 1'b1;
        w_dct_mag[4][1] = r_product[1][23];
        w_dct_neg[4][1] = 1'b1;
        w_dst_mag[4][2] = r_product[2][4];
        w_dct_mag[4][2] = r_product[2][30];
        w_dst_mag[4][3] = r_product[3][13];
        w_dct_mag[4][3] = r_product[3][22];
        w_dct_neg[4][3] = 1'b1;
        w_dst_mag[5][0] = r_product[0][12];
        w_dct_mag[5][0] = r_product[0][24];
        w_dst_mag[5][1] = r_product[1][23];
        w_dct_mag[5][1] = r_product[1][13];
        w_dct_neg[5][1] = 1'b1;
        w_dst_mag[5][2] = r_product[2][29];
        w_dct_mag[5][2] = r_product[2][2];
        w_dst_mag[5][3] = r_product[3][18];
        w_dct_mag[5][3] = r_product[3][7];
        w_dst_mag[6][0] = r_product[0][25];
        w_dst_mag[6][1] = r_product[1][12];
        w_dct_mag[6][1] = r_product[1][12];
        w_dct_mag[6][2] = r_product[2][25];
        w_dct_neg[6][2] = 1'b1;
        w_dst_mag[6][3] = r_product[3][12];
        w_dst_neg[6][3] = 1'b1;
        w_dct_mag[6][3] = r_product[3][25];
        w_dct_mag[7][0] = r_product[0][24];
        w_dct_neg[7][0] = 1'b1;
        w_dst_mag[7][1] = r_product[1][14];
        w_dst_neg[7][1] = 1'b1;
        w_dct_mag[7][1] = r_product[1][24];
        w_dst_mag[7][2] = r_product[2][29];
        w_dst_neg[7][2] = 1'b1;
        w_dct_mag[7][2] = r_product[2][9];
        w_dct_neg[7][2] = 1'b1;
        w_dst_mag[7][3] = r_product[3][19];
        w_dst_neg[7][3] = 1'b1;
        w_dct_mag[7][3] = r_product[3][4];
        w_dct_neg[7][3] = 1'b1;
        w_dst_mag[8][0] = r_product[0][25];
        w_dst_neg[8][0] = 1'b1;
        w_dct_mag[8][0] = r_product[0][14];
        w_dct_neg[8][0] = 1'b1;
        w_dst_mag[8][1] = r_product[1][21];
        w_dst_neg[8][1] = 1'b1;
        w_dct_mag[8][1] = r_product[1][1];
        w_dct_neg[8][1] = 1'b1;
        w_dst_mag[8][2] = r_product[2][4];
        w_dst_neg[8][2] = 1'b1;
        w_dct_mag[8][2] = r_product[2][18];
        w_dst_mag[8][3] = r_product[3][11];
        w_dct_mag[8][3] = r_product[3][28];
        w_dct_neg[8][3] = 1'b1;
        w_dst_mag[9][0] = r_product[0][12];
        w_dst_neg[9][0] = 1'b1;
        w_dct_mag[9][0] = r_product[0][9];
        w_dst_mag[9][1] = r_product[1][5];
        w_dct_mag[9][1] = r_product[1][28];
        w_dct_neg[9][1] = 1'b1;
        w_dst_mag[9][2] = r_product[2][24];
        w_dct_mag[9][2] = r_product[2][16];
        w_dst_mag[9][3] = r_product[3][20];
        w_dct_mag[9][3] = r_product[3][1];
        w_dst_mag[10][0] = r_product[0][12];
        w_dct_mag[10][0] = r_product[0][29];
        w_dst_mag[10][1] = r_product[1][30];
        w_dct_mag[10][1] = r_product[1][8];
        w_dct_neg[10][1] = 1'b1;
        w_dst_mag[10][2] = r_product[2][9];
        w_dct_mag[10][2] = r_product[2][11];
        w_dct_neg[10][2] = 1'b1;
        w_dst_mag[10][3] = r_product[3][10];
        w_dst_neg[10][3] = 1'b1;
        w_dct_mag[10][3] = r_product[3][30];
        w_dst_mag[11][0] = r_product[0][25];
        w_dct_mag[11][0] = r_product[0][4];
        w_dst_mag[11][1] = r_product[1][2];
        w_dct_mag[11][1] = r_product[1][17];
        w_dst_mag[11][2] = r_product[2][19];
        w_dst_neg[11][2] = 1'b1;
        w_dct_mag[11][2] = r_product[2][23];
        w_dct_neg[11][2] = 1'b1;
        w_dst_mag[11][3] = r_product[3][21];
        w_dst_neg[11][3] = 1'b1;
        w_dct_mag[11][3] = r_product[3][0];
        w_dct_mag[12][0] = r_product[0][19];
        w_dct_neg[12][0] = 1'b1;
        w_dst_mag[12][1] = r_product[1][24];
        w_dst_neg[12][1] = 1'b1;
        w_dct_mag[12][1] = r_product[1][19];
        w_dst_mag[12][2] = r_product[2][14];
        w_dst_neg[12][2] = 1'b1;
        w_dct_mag[12][2] = r_product[2][4];
        w_dst_mag[12][3] = r_product[3][9];
        w_dct_mag[12][3] = r_product[3][29];
        w_dct_neg[12][3] = 1'b1;
        w_dst_mag[13][0] = r_product[0][25];
        w_dst_neg[13][0] = 1'b1;
        w_dct_mag[13][0] = r_product[0][19];
        w_dct_neg[13][0] = 1'b1;
        w_dst_mag[13][1] = r_product[1][11];
        w_dst_neg[13][1] = 1'b1;
        w_dct_mag[13][1] = r_product[1][6];
        w_dct_neg[13][1] = 1'b1;
        w_dst_mag[13][2] = r_product[2][14];
        w_dct_mag[13][2] = r_product[2][30];
        w_dst_mag[13][3] = r_product[3][22];
        w_dct_mag[13][3] = r_product[3][3];
        w_dct_neg[13][3] = 1'b1;
        w_dst_mag[14][0] = r_product[0][12];
        w_dst_neg[14][0] = 1'b1;
        w_dct_mag[14][0] = r_product[0][4];
        w_dst_mag[14][1] = r_product[1][15];
        w_dct_mag[14][1] = r_product[1][30];
        w_dct_neg[14][1] = 1'b1;
        w_dst_mag[14][2] = r_product[2][19];
        w_dct_mag[14][2] = r_product[2][1];
        w_dst_mag[14][3] = r_product[3][8];
        w_dst_neg[14][3] = 1'b1;
        w_dct_mag[14][3] = r_product[3][26];
        w_dst_mag[15][0] = r_product[0][12];
        w_dct_mag[15][0] = r_product[0][29];
        w_dst_mag[15][1] = r_product[1][20];
        w_dct_mag[15][1] = r_product[1][3];
        w_dct_neg[15][1] = 1'b1;
        w_dst_mag[15][2] = r_product[2][9];
        w_dst_neg[15][2] = 1'b1;
        w_dct_mag[15][2] = r_product[2][26];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][23];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][6];
      end
      3'd4: begin
        w_dst_mag[0][0] = r_product[0][16];
        w_dct_mag[0][0] = r_product[0][15];
        w_dst_mag[0][1] = r_product[1][17];
        w_dct_mag[0][1] = r_product[1][14];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][18];
        w_dct_mag[0][2] = r_product[2][13];
        w_dst_mag[0][3] = r_product[3][19];
        w_dct_mag[0][3] = r_product[3][12];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][13];
        w_dct_mag[1][0] = r_product[0][16];
        w_dct_neg[1][0] = 1'b1;
        w_dst_mag[1][1] = r_product[1][10];
        w_dct_mag[1][1] = r_product[1][19];
        w_dst_mag[1][2] = r_product[2][7];
        w_dct_mag[1][2] = r_product[2][22];
        w_dct_neg[1][2] = 1'b1;
        w_dst_mag[1][3] = r_product[3][4];
        w_dct_mag[1][3] = r_product[3][25];
        w_dst_mag[2][0] = r_product[0][19];
        w_dst_neg[2][0] = 1'b1;
        w_dct_mag[2][0] = r_product[0][14];
        w_dct_neg[2][0] = 1'b1;
        w_dst_mag[2][1] = r_product[1][24];
        w_dst_neg[2][1] = 1'b1;
        w_dct_mag[2][1] = r_product[1][9];
        w_dst_mag[2][2] = r_product[2][29];
        w_dst_neg[2][2] = 1'b1;
        w_dct_mag[2][2] = r_product[2][4];
        w_dct_neg[2][2] = 1'b1;
        w_dst_mag[2][3] = r_product[3][29];
        w_dst_neg[2][3] = 1'b1;
        w_dst_mag[3][0] = r_product[0][10];
        w_dst_neg[3][0] = 1'b1;
        w_dct_mag[3][0] = r_product[0][17];
        w_dst_mag[3][1] = r_product[1][3];
        w_dst_neg[3][1] = 1'b1;
        w_dct_mag[3][1] = r_product[1][24];
        w_dct_neg[3][1] = 1'b1;
        w_dst_mag[3][2] = r_product[2][2];
        w_dct_mag[3][2] = r_product[2][30];
        w_dst_mag[3][3] = r_product[3][9];
        w_dct_mag[3][3] = r_product[3][25];
        w_dct_neg[3][3] = 1'b1;
        w_dst_mag[4][0] = r_product[0][22];
        w_dct_mag[4][0] = r_product[0][13];
        w_dst_mag[4][1] = r_product[1][30];
        w_dct_mag[4][1] = r_product[1][4];
        w_dct_neg[4][1] = 1'b1;
        w_dst_mag[4][2] = r_product[2][23];
        w_dct_mag[4][2] = r_product[2][3];
        w_dct_neg[4][2] = 1'b1;
        w_dst_mag[4][3] = r_product[3][14];
        w_dct_mag[4][3] = r_product[3][12];
        w_dst_mag[5][0] = r_product[0][7];
        w_dct_mag[5][0] = r_product[0][18];
        w_dct_neg[5][0] = 1'b1;
        w_dst_mag[5][1] = r_product[1][2];
        w_dst_neg[5][1] = 1'b1;
        w_dct_mag[5][1] = r_product[1][29];
        w_dst_mag[5][2] = r_product[2][13];
        w_dst_neg[5][2] = 1'b1;
        w_dct_mag[5][2] = r_product[2][23];
        w_dct_neg[5][2] = 1'b1;
        w_dst_mag[5][3] = r_product[3][24];
        w_dst_neg[5][3] = 1'b1;
        w_dct_mag[5][3] = r_product[3][12];
        w_dst_mag[6][0] = r_product[0][25];
        w_dst_neg[6][0] = 1'b1;
        w_dct_mag[6][0] = r_product[0][12];
        w_dct_neg[6][0] = 1'b1;
        w_dst_mag[6][1] = r_product[1][25];
        w_dst_neg[6][1] = 1'b1;
        w_dst_mag[6][2] = r_product[2][12];
        w_dst_neg[6][2] = 1'b1;
        w_dct_mag[6][2] = r_product[2][12];
        w_dct_mag[6][3] = r_product[3][25];
        w_dct_neg[6][3] = 1'b1;
        w_dst_mag[7][0] = r_product[0][4];
        w_dst_neg[7][0] = 1'b1;
        w_dct_mag[7][0] = r_product[0][19];
        w_dst_mag[7][1] = r_product[1][9];
        w_dct_mag[7][1] = r_product[1][29];
        w_dct_neg[7][1] = 1'b1;
        w_dst_mag[7][2] = r_product[2][24];
        w_dct_mag[7][2] = r_product[2][14];
        w_dst_mag[7][3] = r_product[3][24];
        w_dst_mag[8][0] = r_product[0][28];
        w_dct_mag[8][0] = r_product[0][11];
        w_dst_mag[8][1] = r_product[1][18];
        w_dct_mag[8][1] = r_product[1][4];
        w_dst_mag[8][2] = r_product[2][1];
        w_dct_mag[8][2] = r_product[2][21];
        w_dct_neg[8][2] = 1'b1;
        w_dst_mag[8][3] = r_product[3][14];
        w_dst_neg[8][3] = 1'b1;
        w_dct_mag[8][3] = r_product[3][25];
        w_dst_mag[9][0] = r_product[0][1];
        w_dct_mag[9][0] = r_product[0][20];
        w_dct_neg[9][0] = 1'b1;
        w_dst_mag[9][1] = r_product[1][16];
        w_dst_neg[9][1] = 1'b1;
        w_dct_mag[9][1] = r_product[1][24];
        w_dst_mag[9][2] = r_product[2][28];
        w_dst_neg[9][2] = 1'b1;
        w_dct_mag[9][2] = r_product[2][5];
        w_dct_neg[9][2] = 1'b1;
        w_dst_mag[9][3] = r_product[3][9];
        w_dst_neg[9][3] = 1'b1;
        w_dct_mag[9][3] = r_product[3][12];
        w_dct_neg[9][3] = 1'b1;
        w_dst_mag[10][0] = r_product[0][30];
        w_dst_neg[10][0] = 1'b1;
        w_dct_mag[10][0] = r_product[0][10];
        w_dct_neg[10][0] = 1'b1;
        w_dst_mag[10][1] = r_product[1][11];
        w_dst_neg[10][1] = 1'b1;
        w_dct_mag[10][1] = r_product[1][9];
        w_dct_neg[10][1] = 1'b1;
        w_dst_mag[10][2] = r_product[2][8];
        w_dct_mag[10][2] = r_product[2][30];
        w_dst_mag[10][3] = r_product[3][29];
        w_dct_mag[10][3] = r_product[3][12];
        w_dct_neg[10][3] = 1'b1;
        w_dst_mag[11][0] = r_product[0][0];
        w_dct_mag[11][0] = r_product[0][21];
        w_dst_mag[11][1] = r_product[1][23];
        w_dct_mag[11][1] = r_product[1][19];
        w_dct_neg[11][1] = 1'b1;
        w_dst_mag[11][2] = r_product[2][17];
        w_dct_mag[11][2] = r_product[2][2];
        w_dct_neg[11][2] = 1'b1;
        w_dst_mag[11][3] = r_product[3][4];
        w_dst_neg[11][3] = 1'b1;
        w_dct_mag[11][3] = r_product[3][25];
        w_dst_mag[12][0] = r_product[0][29];
        w_dct_mag[12][0] = r_product[0][9];
        w_dst_mag[12][1] = r_product[1][4];
        w_dct_mag[12][1] = r_product[1][14];
        w_dst_mag[12][2] = r_product[2][19];
        w_dst_neg[12][2] = 1'b1;
        w_dct_mag[12][2] = r_product[2][24];
        w_dct_neg[12][2] = 1'b1;
        w_dst_mag[12][3] = r_product[3][19];
        w_dst_neg[12][3] = 1'b1;
        w_dst_mag[13][0] = r_product[0][3];
        w_dst_neg[13][0] = 1'b1;
        w_dct_mag[13][0] = r_product[0][22];
        w_dct_neg[13][0] = 1'b1;
        w_dst_mag[13][1] = r_product[1][30];
        w_dst_neg[13][1] = 1'b1;
        w_dct_mag[13][1] = r_product[1][14];
        w_dst_mag[13][2] = r_product[2][6];
        w_dst_neg[13][2] = 1'b1;
        w_dct_mag[13][2] = r_product[2][11];
        w_dst_mag[13][3] = r_product[3][19];
        w_dct_mag[13][3] = r_product[3][25];
        w_dct_neg[13][3] = 1'b1;
        w_dst_mag[14][0] = r_product[0][26];
        w_dst_neg[14][0] = 1'b1;
        w_dct_mag[14][0] = r_product[0][8];
        w_dct_neg[14][0] = 1'b1;
        w_dst_mag[14][1] = r_product[1][1];
        w_dct_mag[14][1] = r_product[1][19];
        w_dct_neg[14][1] = 1'b1;
        w_dst_mag[14][2] = r_product[2][30];
        w_dct_mag[14][2] = r_product[2][15];
        w_dst_mag[14][3] = r_product[3][4];
        w_dct_mag[14][3] = r_product[3][12];
        w_dst_mag[15][0] = r_product[0][6];
        w_dct_mag[15][0] = r_product[0][23];
        w_dst_mag[15][1] = r_product[1][26];
        w_dct_mag[15][1] = r_product[1][9];
        w_dct_neg[15][1] = 1'b1;
        w_dst_mag[15][2] = r_product[2][3];
        w_dst_neg[15][2] = 1'b1;
        w_dct_mag[15][2] = r_product[2][20];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][29];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][12];
      end
      3'd5: begin
        w_dst_mag[0][0] = r_product[0][20];
        w_dct_mag[0][0] = r_product[0][11];
        w_dst_mag[0][1] = r_product[1][21];
        w_dct_mag[0][1] = r_product[1][10];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][22];
        w_dct_mag[0][2] = r_product[2][9];
        w_dst_mag[0][3] = r_product[3][23];
        w_dct_mag[0][3] = r_product[3][8];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][1];
        w_dct_mag[1][0] = r_product[0][28];
        w_dct_neg[1][0] = 1'b1;
        w_dst_mag[1][1] = r_product[1][0];
        w_dst_neg[1][1] = 1'b1;
        w_dct_mag[1][1] = r_product[1][30];
        w_dst_mag[1][2] = r_product[2][3];
        w_dst_neg[1][2] = 1'b1;
        w_dct_mag[1][2] = r_product[2][29];
        w_dct_neg[1][2] = 1'b1;
        w_dst_mag[1][3] = r_product[3][6];
        w_dst_neg[1][3] = 1'b1;
        w_dct_mag[1][3] = r_product[3][26];
        w_dst_mag[2][0] = r_product[0][24];
        w_dst_neg[2][0] = 1'b1;
        w_dct_mag[2][0] = r_product[0][4];
        w_dst_mag[2][1] = r_product[1][19];
        w_dst_neg[2][1] = 1'b1;
        w_dct_mag[2][1] = r_product[1][9];
        w_dct_neg[2][1] = 1'b1;
        w_dst_mag[2][2] = r_product[2][14];
        w_dst_neg[2][2] = 1'b1;
        w_dct_mag[2][2] = r_product[2][14];
        w_dst_mag[2][3] = r_product[3][9];
        w_dst_neg[2][3] = 1'b1;
        w_dct_mag[2][3] = r_product[3][19];
        w_dct_neg[2][3] = 1'b1;
        w_dst_mag[3][0] = r_product[0][16];
        w_dct_mag[3][0] = r_product[0][18];
        w_dst_mag[3][1] = r_product[1][23];
        w_dct_mag[3][1] = r_product[1][11];
        w_dct_neg[3][1] = 1'b1;
        w_dst_mag[3][2] = r_product[2][30];
        w_dct_mag[3][2] = r_product[2][4];
        w_dst_mag[3][3] = r_product[3][26];
        w_dct_mag[3][3] = r_product[3][1];
        w_dst_mag[4][0] = r_product[0][5];
        w_dct_mag[4][0] = r_product[0][21];
        w_dct_neg[4][0] = 1'b1;
        w_dst_mag[4][1] = r_product[1][2];
        w_dst_neg[4][1] = 1'b1;
        w_dct_mag[4][1] = r_product[1][30];
        w_dst_mag[4][2] = r_product[2][11];
        w_dst_neg[4][2] = 1'b1;
        w_dct_mag[4][2] = r_product[2][24];
        w_dct_neg[4][2] = 1'b1;
        w_dst_mag[4][3] = r_product[3][20];
        w_dst_neg[4][3] = 1'b1;
        w_dct_mag[4][3] = r_product[3][15];
        w_dst_mag[5][0] = r_product[0][28];
        w_dst_neg[5][0] = 1'b1;
        w_dct_mag[5][0] = r_product[0][1];
        w_dct_neg[5][0] = 1'b1;
        w_dst_mag[5][1] = r_product[1][17];
        w_dst_neg[5][1] = 1'b1;
        w_dct_mag[5][1] = r_product[1][8];
        w_dct_neg[5][1] = 1'b1;
        w_dst_mag[5][2] = r_product[2][6];
        w_dst_neg[5][2] = 1'b1;
        w_dct_mag[5][2] = r_product[2][19];
        w_dst_mag[5][3] = r_product[3][3];
        w_dct_mag[5][3] = r_product[3][30];
        w_dct_neg[5][3] = 1'b1;
        w_dst_mag[6][0] = r_product[0][12];
        w_dct_mag[6][0] = r_product[0][25];
        w_dst_mag[6][1] = r_product[1][25];
        w_dct_mag[6][1] = r_product[1][12];
        w_dct_neg[6][1] = 1'b1;
        w_dst_mag[6][2] = r_product[2][25];
        w_dst_mag[6][3] = r_product[3][12];
        w_dct_mag[6][3] = r_product[3][12];
        w_dst_mag[7][0] = r_product[0][9];
        w_dct_mag[7][0] = r_product[0][14];
        w_dct_neg[7][0] = 1'b1;
        w_dst_mag[7][1] = r_product[1][4];
        w_dst_neg[7][1] = 1'b1;
        w_dct_mag[7][1] = r_product[1][29];
        w_dst_mag[7][2] = r_product[2][19];
        w_dst_neg[7][2] = 1'b1;
        w_dct_mag[7][2] = r_product[2][19];
        w_dct_neg[7][2] = 1'b1;
        w_dst_mag[7][3] = r_product[3][29];
        w_dst_neg[7][3] = 1'b1;
        w_dct_mag[7][3] = r_product[3][4];
        w_dst_mag[8][0] = r_product[0][30];
        w_dst_neg[8][0] = 1'b1;
        w_dct_mag[8][0] = r_product[0][8];
        w_dct_neg[8][0] = 1'b1;
        w_dst_mag[8][1] = r_product[1][15];
        w_dst_neg[8][1] = 1'b1;
        w_dct_mag[8][1] = r_product[1][7];
        w_dct_neg[8][1] = 1'b1;
        w_dst_mag[8][2] = r_product[2][0];
        w_dct_mag[8][2] = r_product[2][24];
        w_dst_mag[8][3] = r_product[3][17];
        w_dct_mag[8][3] = r_product[3][22];
        w_dct_neg[8][3] = 1'b1;
        w_dst_mag[9][0] = r_product[0][8];
        w_dct_mag[9][0] = r_product[0][30];
        w_dst_mag[9][1] = r_product[1][27];
        w_dct_mag[9][1] = r_product[1][13];
        w_dct_neg[9][1] = 1'b1;
        w_dst_mag[9][2] = r_product[2][17];
        w_dct_mag[9][2] = r_product[2][4];
        w_dct_neg[9][2] = 1'b1;
        w_dst_mag[9][3] = r_product[3][0];
        w_dst_neg[9][3] = 1'b1;
        w_dct_mag[9][3] = r_product[3][23];
        w_dst_mag[10][0] = r_product[0][13];
        w_dct_mag[10][0] = r_product[0][7];
        w_dct_neg[10][0] = 1'b1;
        w_dst_mag[10][1] = r_product[1][6];
        w_dst_neg[10][1] = 1'b1;
        w_dct_mag[10][1] = r_product[1][28];
        w_dst_mag[10][2] = r_product[2][27];
        w_dst_neg[10][2] = 1'b1;
        w_dct_mag[10][2] = r_product[2][14];
        w_dct_neg[10][2] = 1'b1;
        w_dst_mag[10][3] = r_product[3][15];
        w_dst_neg[10][3] = 1'b1;
        w_dct_mag[10][3] = r_product[3][5];
        w_dct_neg[10][3] = 1'b1;
        w_dst_mag[11][0] = r_product[0][27];
        w_dst_neg[11][0] = 1'b1;
        w_dct_mag[11][0] = r_product[0][15];
        w_dct_neg[11][0] = 1'b1;
        w_dst_mag[11][1] = r_product[1][13];
        w_dst_neg[11][1] = 1'b1;
        w_dct_mag[11][1] = r_product[1][6];
        w_dct_neg[11][1] = 1'b1;
        w_dst_mag[11][2] = r_product[2][8];
        w_dct_mag[11][2] = r_product[2][29];
        w_dst_mag[11][3] = r_product[3][30];
        w_dct_mag[11][3] = r_product[3][11];
        w_dct_neg[11][3] = 1'b1;
        w_dst_mag[12][0] = r_product[0][4];
        w_dct_mag[12][0] = r_product[0][24];
        w_dst_mag[12][1] = r_product[1][29];
        w_dct_mag[12][1] = r_product[1][14];
        w_dct_neg[12][1] = 1'b1;
        w_dst_mag[12][2] = r_product[2][9];
        w_dct_mag[12][2] = r_product[2][9];
        w_dct_neg[12][2] = 1'b1;
        w_dst_mag[12][3] = r_product[3][14];
        w_dst_neg[12][3] = 1'b1;
        w_dct_mag[12][3] = r_product[3][29];
        w_dst_mag[13][0] = r_product[0][17];
        w_dct_mag[13][0] = r_product[0][0];
        w_dct_neg[13][0] = 1'b1;
        w_dst_mag[13][1] = r_product[1][8];
        w_dst_neg[13][1] = 1'b1;
        w_dct_mag[13][1] = r_product[1][27];
        w_dst_mag[13][2] = r_product[2][28];
        w_dst_neg[13][2] = 1'b1;
        w_dct_mag[13][2] = r_product[2][9];
        w_dct_neg[13][2] = 1'b1;
        w_dst_mag[13][3] = r_product[3][1];
        w_dst_neg[13][3] = 1'b1;
        w_dct_mag[13][3] = r_product[3][16];
        w_dct_neg[13][3] = 1'b1;
        w_dst_mag[14][0] = r_product[0][23];
        w_dst_neg[14][0] = 1'b1;
        w_dct_mag[14][0] = r_product[0][22];
        w_dct_neg[14][0] = 1'b1;
        w_dst_mag[14][1] = r_product[1][11];
        w_dst_neg[14][1] = 1'b1;
        w_dct_mag[14][1] = r_product[1][5];
        w_dct_neg[14][1] = 1'b1;
        w_dst_mag[14][2] = r_product[2][16];
        w_dct_mag[14][2] = r_product[2][29];
        w_dst_mag[14][3] = r_product[3][18];
        w_dct_mag[14][3] = r_product[3][0];
        w_dct_neg[14][3] = 1'b1;
        w_dst_mag[15][0] = r_product[0][0];
        w_dct_mag[15][0] = r_product[0][17];
        w_dst_mag[15][1] = r_product[1][30];
        w_dct_mag[15][1] = r_product[1][15];
        w_dct_neg[15][1] = 1'b1;
        w_dst_mag[15][2] = r_product[2][1];
        w_dct_mag[15][2] = r_product[2][14];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][28];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][18];
      end
      3'd6: begin
        w_dst_mag[0][0] = r_product[0][24];
        w_dct_mag[0][0] = r_product[0][7];
        w_dst_mag[0][1] = r_product[1][25];
        w_dct_mag[0][1] = r_product[1][6];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][26];
        w_dct_mag[0][2] = r_product[2][5];
        w_dst_mag[0][3] = r_product[3][27];
        w_dct_mag[0][3] = r_product[3][4];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][9];
        w_dst_neg[1][0] = 1'b1;
        w_dct_mag[1][0] = r_product[0][23];
        w_dct_neg[1][0] = 1'b1;
        w_dst_mag[1][1] = r_product[1][12];
        w_dst_neg[1][1] = 1'b1;
        w_dct_mag[1][1] = r_product[1][20];
        w_dst_mag[1][2] = r_product[2][15];
        w_dst_neg[1][2] = 1'b1;
        w_dct_mag[1][2] = r_product[2][17];
        w_dct_neg[1][2] = 1'b1;
        w_dst_mag[1][3] = r_product[3][18];
        w_dst_neg[1][3] = 1'b1;
        w_dct_mag[1][3] = r_product[3][14];
        w_dst_mag[2][0] = r_product[0][4];
        w_dst_neg[2][0] = 1'b1;
        w_dct_mag[2][0] = r_product[0][24];
        w_dct_mag[2][1] = r_product[1][29];
        w_dct_neg[2][1] = 1'b1;
        w_dst_mag[2][2] = r_product[2][4];
        w_dct_mag[2][2] = r_product[2][29];
        w_dst_mag[2][3] = r_product[3][9];
        w_dct_mag[2][3] = r_product[3][24];
        w_dct_neg[2][3] = 1'b1;
        w_dst_mag[3][0] = r_product[0][19];
        w_dct_mag[3][0] = r_product[0][8];
        w_dct_neg[3][0] = 1'b1;
        w_dst_mag[3][1] = r_product[1][12];
        w_dct_mag[3][1] = r_product[1][15];
        w_dst_mag[3][2] = r_product[2][5];
        w_dct_mag[3][2] = r_product[2][22];
        w_dct_neg[3][2] = 1'b1;
        w_dst_mag[3][3] = r_product[3][0];
        w_dst_neg[3][3] = 1'b1;
        w_dct_mag[3][3] = r_product[3][29];
        w_dst_mag[4][0] = r_product[0][29];
        w_dst_neg[4][0] = 1'b1;
        w_dct_mag[4][0] = r_product[0][6];
        w_dct_neg[4][0] = 1'b1;
        w_dst_mag[4][1] = r_product[1][25];
        w_dst_neg[4][1] = 1'b1;
        w_dct_mag[4][1] = r_product[1][1];
        w_dct_neg[4][1] = 1'b1;
        w_dst_mag[4][2] = r_product[2][16];
        w_dst_neg[4][2] = 1'b1;
        w_dct_mag[4][2] = r_product[2][10];
        w_dst_mag[4][3] = r_product[3][7];
        w_dst_neg[4][3] = 1'b1;
        w_dct_mag[4][3] = r_product[3][19];
        w_dct_neg[4][3] = 1'b1;
        w_dst_mag[5][0] = r_product[0][14];
        w_dct_mag[5][0] = r_product[0][22];
        w_dst_mag[5][1] = r_product[1][25];
        w_dct_mag[5][1] = r_product[1][11];
        w_dct_neg[5][1] = 1'b1;
        w_dst_mag[5][2] = r_product[2][27];
        w_dct_mag[5][2] = r_product[2][0];
        w_dst_mag[5][3] = r_product[3][16];
        w_dct_mag[5][3] = r_product[3][9];
        w_dct_mag[6][0] = r_product[0][25];
        w_dct_neg[6][0] = 1'b1;
        w_dst_mag[6][1] = r_product[1][12];
        w_dst_neg[6][1] = 1'b1;
        w_dct_mag[6][1] = r_product[1][25];
        w_dst_mag[6][2] = r_product[2][25];
        w_dst_neg[6][2] = 1'b1;
        w_dct_mag[6][2] = r_product[2][12];
        w_dct_neg[6][2] = 1'b1;
        w_dst_mag[6][3] = r_product[3][25];
        w_dst_neg[6][3] = 1'b1;
        w_dst_mag[7][0] = r_product[0][14];
        w_dst_neg[7][0] = 1'b1;
        w_dct_mag[7][0] = r_product[0][9];
        w_dct_mag[7][1] = r_product[1][24];
        w_dct_neg[7][1] = 1'b1;
        w_dst_mag[7][2] = r_product[2][14];
        w_dct_mag[7][2] = r_product[2][24];
        w_dst_mag[7][3] = r_product[3][29];
        w_dct_mag[7][3] = r_product[3][9];
        w_dct_neg[7][3] = 1'b1;
        w_dst_mag[8][0] = r_product[0][29];
        w_dct_mag[8][0] = r_product[0][5];
        w_dst_mag[8][1] = r_product[1][12];
        w_dct_mag[8][1] = r_product[1][10];
        w_dst_mag[8][2] = r_product[2][3];
        w_dst_neg[8][2] = 1'b1;
        w_dct_mag[8][2] = r_product[2][27];
        w_dct_neg[8][2] = 1'b1;
        w_dst_mag[8][3] = r_product[3][20];
        w_dst_neg[8][3] = 1'b1;
        w_dct_mag[8][3] = r_product[3][19];
        w_dst_mag[9][0] = r_product[0][19];
        w_dst_neg[9][0] = 1'b1;
        w_dct_mag[9][0] = r_product[0][21];
        w_dct_neg[9][0] = 1'b1;
        w_dst_mag[9][1] = r_product[1][25];
        w_dst_neg[9][1] = 1'b1;
        w_dct_mag[9][1] = r_product[1][2];
        w_dst_mag[9][2] = r_product[2][6];
        w_dst_neg[9][2] = 1'b1;
        w_dct_mag[9][2] = r_product[2][15];
        w_dst_mag[9][3] = r_product[3][11];
        w_dct_mag[9][3] = r_product[3][29];
        w_dct_neg[9][3] = 1'b1;
        w_dst_mag[10][0] = r_product[0][4];
        w_dct_mag[10][0] = r_product[0][26];
        w_dst_mag[10][1] = r_product[1][25];
        w_dct_mag[10][1] = r_product[1][16];
        w_dct_neg[10][1] = 1'b1;
        w_dst_mag[10][2] = r_product[2][17];
        w_dct_mag[10][2] = r_product[2][3];
        w_dct_neg[10][2] = 1'b1;
        w_dst_mag[10][3] = r_product[3][2];
        w_dst_neg[10][3] = 1'b1;
        w_dct_mag[10][3] = r_product[3][24];
        w_dst_mag[11][0] = r_product[0][9];
        w_dct_mag[11][0] = r_product[0][10];
        w_dct_neg[11][0] = 1'b1;
        w_dst_mag[11][1] = r_product[1][12];
        w_dst_neg[11][1] = 1'b1;
        w_dct_mag[11][1] = r_product[1][30];
        w_dst_mag[11][2] = r_product[2][28];
        w_dst_neg[11][2] = 1'b1;
        w_dct_mag[11][2] = r_product[2][7];
        w_dct_neg[11][2] = 1'b1;
        w_dst_mag[11][3] = r_product[3][5];
        w_dst_neg[11][3] = 1'b1;
        w_dct_mag[11][3] = r_product[3][14];
        w_dct_neg[11][3] = 1'b1;
        w_dst_mag[12][0] = r_product[0][24];
        w_dst_neg[12][0] = 1'b1;
        w_dct_mag[12][0] = r_product[0][4];
        w_dct_neg[12][0] = 1'b1;
        w_dct_mag[12][1] = r_product[1][19];
        w_dct_neg[12][1] = 1'b1;
        w_dst_mag[12][2] = r_product[2][24];
        w_dct_mag[12][2] = r_product[2][19];
        w_dst_mag[12][3] = r_product[3][14];
        w_dct_mag[12][3] = r_product[3][4];
        w_dst_mag[13][0] = r_product[0][24];
        w_dct_mag[13][0] = r_product[0][20];
        w_dst_mag[13][1] = r_product[1][12];
        w_dct_mag[13][1] = r_product[1][5];
        w_dst_mag[13][2] = r_product[2][13];
        w_dst_neg[13][2] = 1'b1;
        w_dct_mag[13][2] = r_product[2][30];
        w_dct_neg[13][2] = 1'b1;
        w_dst_mag[13][3] = r_product[3][23];
        w_dst_neg[13][3] = 1'b1;
        w_dct_mag[13][3] = r_product[3][4];
        w_dst_mag[14][0] = r_product[0][9];
        w_dst_neg[14][0] = 1'b1;
        w_dct_mag[14][0] = r_product[0][27];
        w_dct_neg[14][0] = 1'b1;
        w_dst_mag[14][1] = r_product[1][25];
        w_dst_neg[14][1] = 1'b1;
        w_dct_mag[14][1] = r_product[1][7];
        w_dst_mag[14][2] = r_product[2][2];
        w_dct_mag[14][2] = r_product[2][20];
        w_dst_mag[14][3] = r_product[3][30];
        w_dct_mag[14][3] = r_product[3][14];
        w_dct_neg[14][3] = 1'b1;
        w_dst_mag[15][0] = r_product[0][4];
        w_dst_neg[15][0] = 1'b1;
        w_dct_mag[15][0] = r_product[0][11];
        w_dst_mag[15][1] = r_product[1][25];
        w_dct_mag[15][1] = r_product[1][21];
        w_dct_neg[15][1] = 1'b1;
        w_dst_mag[15][2] = r_product[2][7];
        w_dct_mag[15][2] = r_product[2][8];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][22];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][24];
      end
      3'd7: begin
        w_dst_mag[0][0] = r_product[0][28];
        w_dct_mag[0][0] = r_product[0][3];
        w_dst_mag[0][1] = r_product[1][29];
        w_dct_mag[0][1] = r_product[1][2];
        w_dct_neg[0][1] = 1'b1;
        w_dst_mag[0][2] = r_product[2][30];
        w_dct_mag[0][2] = r_product[2][1];
        w_dst_mag[0][3] = r_product[3][30];
        w_dct_mag[0][3] = r_product[3][0];
        w_dct_neg[0][3] = 1'b1;
        w_dst_mag[1][0] = r_product[0][21];
        w_dst_neg[1][0] = 1'b1;
        w_dct_mag[1][0] = r_product[0][11];
        w_dct_neg[1][0] = 1'b1;
        w_dst_mag[1][1] = r_product[1][24];
        w_dst_neg[1][1] = 1'b1;
        w_dct_mag[1][1] = r_product[1][8];
        w_dst_mag[1][2] = r_product[2][27];
        w_dst_neg[1][2] = 1'b1;
        w_dct_mag[1][2] = r_product[2][5];
        w_dct_neg[1][2] = 1'b1;
        w_dst_mag[1][3] = r_product[3][30];
        w_dst_neg[1][3] = 1'b1;
        w_dct_mag[1][3] = r_product[3][2];
        w_dst_mag[2][0] = r_product[0][14];
        w_dct_mag[2][0] = r_product[0][19];
        w_dst_mag[2][1] = r_product[1][19];
        w_dct_mag[2][1] = r_product[1][14];
        w_dct_neg[2][1] = 1'b1;
        w_dst_mag[2][2] = r_product[2][24];
        w_dct_mag[2][2] = r_product[2][9];
        w_dst_mag[2][3] = r_product[3][29];
        w_dct_mag[2][3] = r_product[3][4];
        w_dct_neg[2][3] = 1'b1;
        w_dst_mag[3][0] = r_product[0][7];
        w_dst_neg[3][0] = 1'b1;
        w_dct_mag[3][0] = r_product[0][27];
        w_dct_neg[3][0] = 1'b1;
        w_dst_mag[3][1] = r_product[1][14];
        w_dst_neg[3][1] = 1'b1;
        w_dct_mag[3][1] = r_product[1][20];
        w_dst_mag[3][2] = r_product[2][21];
        w_dst_neg[3][2] = 1'b1;
        w_dct_mag[3][2] = r_product[2][13];
        w_dct_neg[3][2] = 1'b1;
        w_dst_mag[3][3] = r_product[3][28];
        w_dst_neg[3][3] = 1'b1;
        w_dct_mag[3][3] = r_product[3][6];
        w_dst_mag[4][0] = r_product[0][0];
        w_dct_mag[4][0] = r_product[0][28];
        w_dst_mag[4][1] = r_product[1][9];
        w_dct_mag[4][1] = r_product[1][26];
        w_dct_neg[4][1] = 1'b1;
        w_dst_mag[4][2] = r_product[2][18];
        w_dct_mag[4][2] = r_product[2][17];
        w_dst_mag[4][3] = r_product[3][27];
        w_dct_mag[4][3] = r_product[3][8];
        w_dct_neg[4][3] = 1'b1;
        w_dst_mag[5][0] = r_product[0][5];
        w_dct_mag[5][0] = r_product[0][20];
        w_dct_neg[5][0] = 1'b1;
        w_dst_mag[5][1] = r_product[1][4];
        w_dst_neg[5][1] = 1'b1;
        w_dct_mag[5][1] = r_product[1][30];
        w_dst_mag[5][2] = r_product[2][15];
        w_dst_neg[5][2] = 1'b1;
        w_dct_mag[5][2] = r_product[2][21];
        w_dct_neg[5][2] = 1'b1;
        w_dst_mag[5][3] = r_product[3][26];
        w_dst_neg[5][3] = 1'b1;
        w_dct_mag[5][3] = r_product[3][10];
        w_dst_mag[6][0] = r_product[0][12];
        w_dst_neg[6][0] = 1'b1;
        w_dct_mag[6][0] = r_product[0][12];
        w_dct_mag[6][1] = r_product[1][25];
        w_dct_neg[6][1] = 1'b1;
        w_dst_mag[6][2] = r_product[2][12];
        w_dct_mag[6][2] = r_product[2][25];
        w_dst_mag[6][3] = r_product[3][25];
        w_dct_mag[6][3] = r_product[3][12];
        w_dct_neg[6][3] = 1'b1;
        w_dst_mag[7][0] = r_product[0][19];
        w_dct_mag[7][0] = r_product[0][4];
        w_dct_neg[7][0] = 1'b1;
        w_dst_mag[7][1] = r_product[1][4];
        w_dct_mag[7][1] = r_product[1][19];
        w_dst_mag[7][2] = r_product[2][9];
        w_dst_neg[7][2] = 1'b1;
        w_dct_mag[7][2] = r_product[2][29];
        w_dct_neg[7][2] = 1'b1;
        w_dst_mag[7][3] = r_product[3][24];
        w_dst_neg[7][3] = 1'b1;
        w_dct_mag[7][3] = r_product[3][14];
        w_dst_mag[8][0] = r_product[0][26];
        w_dst_neg[8][0] = 1'b1;
        w_dct_mag[8][0] = r_product[0][2];
        w_dct_neg[8][0] = 1'b1;
        w_dst_mag[8][1] = r_product[1][9];
        w_dst_neg[8][1] = 1'b1;
        w_dct_mag[8][1] = r_product[1][13];
        w_dct_neg[8][1] = 1'b1;
        w_dst_mag[8][2] = r_product[2][6];
        w_dct_mag[8][2] = r_product[2][30];
        w_dst_mag[8][3] = r_product[3][23];
        w_dct_mag[8][3] = r_product[3][16];
        w_dct_neg[8][3] = 1'b1;
        w_dst_mag[9][0] = r_product[0][30];
        w_dct_mag[9][0] = r_product[0][10];
        w_dst_mag[9][1] = r_product[1][14];
        w_dct_mag[9][1] = r_product[1][7];
        w_dst_mag[9][2] = r_product[2][3];
        w_dst_neg[9][2] = 1'b1;
        w_dct_mag[9][2] = r_product[2][26];
        w_dct_neg[9][2] = 1'b1;
        w_dst_mag[9][3] = r_product[3][22];
        w_dst_neg[9][3] = 1'b1;
        w_dct_mag[9][3] = r_product[3][18];
        w_dst_mag[10][0] = r_product[0][23];
        w_dst_neg[10][0] = 1'b1;
        w_dct_mag[10][0] = r_product[0][18];
        w_dct_neg[10][0] = 1'b1;
        w_dst_mag[10][1] = r_product[1][19];
        w_dst_neg[10][1] = 1'b1;
        w_dct_mag[10][1] = r_product[1][1];
        w_dct_neg[10][1] = 1'b1;
        w_dst_mag[10][2] = r_product[2][0];
        w_dct_mag[10][2] = r_product[2][22];
        w_dst_mag[10][3] = r_product[3][21];
        w_dct_mag[10][3] = r_product[3][20];
        w_dct_neg[10][3] = 1'b1;
        w_dst_mag[11][0] = r_product[0][16];
        w_dct_mag[11][0] = r_product[0][26];
        w_dst_mag[11][1] = r_product[1][24];
        w_dct_mag[11][1] = r_product[1][3];
        w_dct_neg[11][1] = 1'b1;
        w_dst_mag[11][2] = r_product[2][1];
        w_dct_mag[11][2] = r_product[2][18];
        w_dct_neg[11][2] = 1'b1;
        w_dst_mag[11][3] = r_product[3][20];
        w_dst_neg[11][3] = 1'b1;
        w_dct_mag[11][3] = r_product[3][22];
        w_dst_mag[12][0] = r_product[0][9];
        w_dst_neg[12][0] = 1'b1;
        w_dct_mag[12][0] = r_product[0][29];
        w_dct_neg[12][0] = 1'b1;
        w_dst_mag[12][1] = r_product[1][29];
        w_dst_neg[12][1] = 1'b1;
        w_dct_mag[12][1] = r_product[1][9];
        w_dst_mag[12][2] = r_product[2][4];
        w_dst_neg[12][2] = 1'b1;
        w_dct_mag[12][2] = r_product[2][14];
        w_dst_mag[12][3] = r_product[3][19];
        w_dct_mag[12][3] = r_product[3][24];
        w_dct_neg[12][3] = 1'b1;
        w_dst_mag[13][0] = r_product[0][2];
        w_dct_mag[13][0] = r_product[0][21];
        w_dst_mag[13][1] = r_product[1][29];
        w_dct_mag[13][1] = r_product[1][15];
        w_dct_neg[13][1] = 1'b1;
        w_dst_mag[13][2] = r_product[2][7];
        w_dct_mag[13][2] = r_product[2][10];
        w_dct_neg[13][2] = 1'b1;
        w_dst_mag[13][3] = r_product[3][18];
        w_dst_neg[13][3] = 1'b1;
        w_dct_mag[13][3] = r_product[3][26];
        w_dst_mag[14][0] = r_product[0][3];
        w_dct_mag[14][0] = r_product[0][13];
        w_dct_neg[14][0] = 1'b1;
        w_dst_mag[14][1] = r_product[1][24];
        w_dst_neg[14][1] = 1'b1;
        w_dct_mag[14][1] = r_product[1][21];
        w_dst_mag[14][2] = r_product[2][10];
        w_dst_neg[14][2] = 1'b1;
        w_dct_mag[14][2] = r_product[2][6];
        w_dst_mag[14][3] = r_product[3][17];
        w_dct_mag[14][3] = r_product[3][28];
        w_dct_neg[14][3] = 1'b1;
        w_dst_mag[15][0] = r_product[0][10];
        w_dst_neg[15][0] = 1'b1;
        w_dct_mag[15][0] = r_product[0][5];
        w_dst_mag[15][1] = r_product[1][19];
        w_dct_mag[15][1] = r_product[1][27];
        w_dct_neg[15][1] = 1'b1;
        w_dst_mag[15][2] = r_product[2][13];
        w_dct_mag[15][2] = r_product[2][2];
        w_dct_neg[15][2] = 1'b1;
        w_dst_mag[15][3] = r_product[3][16];
        w_dst_neg[15][3] = 1'b1;
        w_dct_mag[15][3] = r_product[3][30];
      end
      default: begin
      end
    endcase
  end

  // The final 2-way mode selector feeds every coefficient lane.
  always_comb begin
    for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        if (r_prod_mode) begin
          w_route_mag[lane_idx][mcm_idx] = w_dct_mag[lane_idx][mcm_idx];
          w_route_neg[lane_idx][mcm_idx] = w_dct_neg[lane_idx][mcm_idx];
        end
        else begin
          w_route_mag[lane_idx][mcm_idx] = w_dst_mag[lane_idx][mcm_idx];
          w_route_neg[lane_idx][mcm_idx] = w_dst_neg[lane_idx][mcm_idx];
        end
      end
    end
  end

  // The three-process controller owns capture, arithmetic issue and output.
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
        if (I_DATA_VALID && O_DATA_READY)
          w_next_state = ST_CAPTURE;
      end
      ST_CAPTURE: begin
        if (I_DATA_VALID && O_DATA_READY && (r_capture_group == 3'd7))
          w_next_state = ST_ISSUE;
      end
      ST_ISSUE: begin
        if (r_issue_group == 3'd7)
          w_next_state = ST_DRAIN;
      end
      ST_DRAIN: begin
        if (r_partial_valid && (r_partial_group == 3'd7))
          w_next_state = ST_SEND;
      end
      ST_SEND: begin
        if (O_DATA_VALID && I_DATA_READY && (r_output_beat == 3'd7))
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Reset only control and validity; buffered payload is protected by state.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_capture_group <= '0;
      r_issue_group <= '0;
      r_output_beat <= '0;
      r_transform_mode <= 1'b0;
    end
    else begin
      if ((r_current_state == ST_IDLE) && I_DATA_VALID && O_DATA_READY) begin
        r_capture_group <= 3'd1;
        r_issue_group <= '0;
        r_output_beat <= '0;
        r_transform_mode <= I_TRANSFORM_MODE;
      end
      else if ((r_current_state == ST_CAPTURE) && I_DATA_VALID && O_DATA_READY) begin
        if (r_capture_group != 3'd7)
          r_capture_group <= r_capture_group + 3'd1;
      end
      if ((r_current_state == ST_ISSUE) && (r_issue_group != 3'd7))
        r_issue_group <= r_issue_group + 3'd1;
      if ((r_current_state == ST_SEND) && I_DATA_READY && (r_output_beat != 3'd7))
        r_output_beat <= r_output_beat + 3'd1;
    end
  end

  // Capture each input group only on a successful ready/valid handshake.
  always_ff @(posedge I_CLK) begin
    if (I_DATA_VALID && O_DATA_READY) begin
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        if (r_current_state == ST_IDLE)
          r_input[mcm_idx] <= $signed(I_DATA[mcm_idx*PARA_DATA_WD +: PARA_DATA_WD]);
        else if (r_current_state == ST_CAPTURE)
          r_input[{r_capture_group, 2'b00} + mcm_idx] <= $signed(I_DATA[mcm_idx*PARA_DATA_WD +: PARA_DATA_WD]);
      end
    end
  end

  // Valid control advances alongside independently registered datapath stages.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_pre_valid <= 1'b0;
      r_base_valid <= 1'b0;
      r_prod_valid <= 1'b0;
      r_route_valid <= 1'b0;
      r_sign_valid <= 1'b0;
      r_pair_valid <= 1'b0;
      r_partial_valid <= 1'b0;
    end
    else begin
      r_pre_valid <= (r_current_state == ST_ISSUE);
      r_base_valid <= r_pre_valid;
      r_prod_valid <= r_base_valid;
      r_route_valid <= r_prod_valid;
      r_sign_valid <= r_route_valid;
      r_pair_valid <= r_sign_valid;
      r_partial_valid <= r_pair_valid;
    end
  end

  // Stage zero applies the input sign pattern for the DCT-VIII mode.
  always_ff @(posedge I_CLK) begin
    if (r_current_state == ST_ISSUE) begin
      r_pre_group <= r_issue_group;
      r_pre_mode <= r_transform_mode;
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        if (r_transform_mode && mcm_idx[0])
          r_pre_x[mcm_idx] <= -w_group_ext[mcm_idx];
        else
          r_pre_x[mcm_idx] <= w_group_ext[mcm_idx];
      end
    end
  end

  // Stage one computes small common multiples shared by larger products.
  always_ff @(posedge I_CLK) begin
    if (r_pre_valid) begin
      r_base_group <= r_pre_group;
      r_base_mode <= r_pre_mode;
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        r_base_x[mcm_idx] <= r_pre_x[mcm_idx];
        r_mul_3[mcm_idx] <= (r_pre_x[mcm_idx] <<< 1) + r_pre_x[mcm_idx];
        r_mul_5[mcm_idx] <= (r_pre_x[mcm_idx] <<< 2) + r_pre_x[mcm_idx];
        r_mul_7[mcm_idx] <= (r_pre_x[mcm_idx] <<< 3) - r_pre_x[mcm_idx];
        r_mul_9[mcm_idx] <= (r_pre_x[mcm_idx] <<< 3) + r_pre_x[mcm_idx];
        r_mul_11[mcm_idx] <= (r_pre_x[mcm_idx] <<< 3) + (r_pre_x[mcm_idx] <<< 1) + r_pre_x[mcm_idx];
        r_mul_13[mcm_idx] <= (r_pre_x[mcm_idx] <<< 3) + (r_pre_x[mcm_idx] <<< 2) + r_pre_x[mcm_idx];
        r_mul_15[mcm_idx] <= (r_pre_x[mcm_idx] <<< 4) - r_pre_x[mcm_idx];
      end
    end
  end

  // Stage two generates all thirty-one fixed positive constant products.
  always_ff @(posedge I_CLK) begin
    if (r_base_valid) begin
      r_prod_group <= r_base_group;
      r_prod_mode <= r_base_mode;
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        r_product[mcm_idx][0] <= r_base_x[mcm_idx] <<< 2;
        r_product[mcm_idx][1] <= r_mul_9[mcm_idx];
        r_product[mcm_idx][2] <= r_mul_13[mcm_idx];
        r_product[mcm_idx][3] <= (r_base_x[mcm_idx] <<< 4) + r_base_x[mcm_idx];
        r_product[mcm_idx][4] <= (r_mul_5[mcm_idx] <<< 2) + r_base_x[mcm_idx];
        r_product[mcm_idx][5] <= r_mul_13[mcm_idx] <<< 1;
        r_product[mcm_idx][6] <= r_mul_15[mcm_idx] <<< 1;
        r_product[mcm_idx][7] <= (r_base_x[mcm_idx] <<< 5) + (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][8] <= (r_mul_5[mcm_idx] <<< 3) - (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][9] <= (r_mul_5[mcm_idx] <<< 3) + (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][10] <= (r_mul_3[mcm_idx] <<< 4) - (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][11] <= (r_mul_3[mcm_idx] <<< 4) + (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][12] <= (r_mul_13[mcm_idx] <<< 2) + r_base_x[mcm_idx];
        r_product[mcm_idx][13] <= r_mul_7[mcm_idx] <<< 3;
        r_product[mcm_idx][14] <= r_mul_15[mcm_idx] <<< 2;
        r_product[mcm_idx][15] <= (r_base_x[mcm_idx] <<< 6) - r_base_x[mcm_idx];
        r_product[mcm_idx][16] <= (r_base_x[mcm_idx] <<< 6) + (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][17] <= (r_base_x[mcm_idx] <<< 6) + (r_base_x[mcm_idx] <<< 2);
        r_product[mcm_idx][18] <= r_mul_9[mcm_idx] <<< 3;
        r_product[mcm_idx][19] <= (r_mul_9[mcm_idx] <<< 3) + (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][20] <= (r_mul_5[mcm_idx] <<< 4) - r_mul_3[mcm_idx];
        r_product[mcm_idx][21] <= (r_mul_5[mcm_idx] <<< 4) - (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][22] <= r_mul_5[mcm_idx] <<< 4;
        r_product[mcm_idx][23] <= (r_mul_5[mcm_idx] <<< 4) + (r_base_x[mcm_idx] <<< 1);
        r_product[mcm_idx][24] <= (r_mul_5[mcm_idx] <<< 4) + (r_base_x[mcm_idx] <<< 2);
        r_product[mcm_idx][25] <= (r_mul_5[mcm_idx] <<< 4) + r_mul_5[mcm_idx];
        r_product[mcm_idx][26] <= (r_mul_5[mcm_idx] <<< 4) + (r_mul_3[mcm_idx] <<< 1);
        r_product[mcm_idx][27] <= (r_mul_11[mcm_idx] <<< 3) - r_base_x[mcm_idx];
        r_product[mcm_idx][28] <= r_mul_11[mcm_idx] <<< 3;
        r_product[mcm_idx][29] <= (r_mul_11[mcm_idx] <<< 3) + r_base_x[mcm_idx];
        r_product[mcm_idx][30] <= (r_mul_11[mcm_idx] <<< 3) + (r_base_x[mcm_idx] <<< 1);
      end
    end
  end

  // Stage three registers routed products and their individual signs.
  always_ff @(posedge I_CLK) begin
    if (r_prod_valid) begin
      r_route_group <= r_prod_group;
      for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
        for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
          r_route_mag[lane_idx][mcm_idx] <= w_route_mag[lane_idx][mcm_idx];
          r_route_neg[lane_idx][mcm_idx] <= w_route_neg[lane_idx][mcm_idx];
        end
      end
    end
  end

  // Stage four applies the fixed transform coefficient sign corrections.
  always_ff @(posedge I_CLK) begin
    if (r_route_valid) begin
      r_sign_group <= r_route_group;
      for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
        for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
          if (r_route_neg[lane_idx][mcm_idx])
            r_route_signed[lane_idx][mcm_idx] <= -r_route_mag[lane_idx][mcm_idx];
          else
            r_route_signed[lane_idx][mcm_idx] <= r_route_mag[lane_idx][mcm_idx];
        end
      end
    end
  end

  // Stages five and six form balanced four-input partial sums.
  always_ff @(posedge I_CLK) begin
    if (r_sign_valid) begin
      r_pair_group <= r_sign_group;
      for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
        r_pair[lane_idx][0] <= r_route_signed[lane_idx][0] + r_route_signed[lane_idx][1];
        r_pair[lane_idx][1] <= r_route_signed[lane_idx][2] + r_route_signed[lane_idx][3];
      end
    end
    if (r_pair_valid) begin
      r_partial_group <= r_pair_group;
      for (int lane_idx = 0; lane_idx < 16; lane_idx++)
        r_partial[lane_idx] <= r_pair[lane_idx][0] + r_pair[lane_idx][1];
    end
  end

  // Sixteen accumulators sum eight groups without arithmetic sharing stalls.
  always_ff @(posedge I_CLK) begin
    if (r_partial_valid) begin
      for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
        if (r_partial_group == 3'd0)
          r_acc[lane_idx] <= r_partial[lane_idx];
        else
          r_acc[lane_idx] <= r_acc[lane_idx] + r_partial[lane_idx];
      end
    end
  end
endmodule: TQ_DST7_MCM_32
