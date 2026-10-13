//-----------------------------------------------------------
// Description: This module implements the inverse 16-point DST-VII
// transform using four time-shared shift-and-add MCM generators.
// Sixteen parallel raw spatial outputs accumulate four input groups.
// Every input/output beat contains four signed samples/coefficient values.
// Results are unscaled and must be normalized by a downstream stage.
// Coefficient routing implements inverse DST-VII matrix S16 transpose.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDST7_MCM_16 #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_RESULT_WD = 28
)(
  input                               I_CLK,
  input                               I_RESETN,
  input                               I_DATA_VALID,
  output logic                        O_DATA_READY,
  input        [4*PARA_DATA_WD-1:0]   I_DATA,
  output logic                        O_DATA_VALID,
  input                               I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0] O_DATA,
  output logic                        O_DATA_LAST
);
  typedef enum logic [2:0] {
    ST_IDLE,
    ST_CAPTURE1,
    ST_CAPTURE2,
    ST_CAPTURE3,
    ST_ISSUE,
    ST_DRAIN,
    ST_SEND
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [1:0] r_issue_group;
  logic [1:0] r_output_beat;
  logic signed [PARA_DATA_WD-1:0] r_input [0:15];
  logic signed [PARA_DATA_WD-1:0] w_group_sample [0:3];
  logic signed [PARA_RESULT_WD-1:0] w_group_ext [0:3];
  logic signed [PARA_RESULT_WD-1:0] w_mul_3 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_3 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_5 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_7 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_9 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_mul_11 [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_product [0:3][0:14];
  logic signed [PARA_RESULT_WD-1:0] w_route_mag [0:15][0:3];
  logic                              w_route_neg [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_route_mag [0:15][0:3];
  logic                              r_route_neg [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_route_signed [0:15][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_pair [0:15][0:1];
  logic signed [PARA_RESULT_WD-1:0] r_partial [0:15];
  logic signed [PARA_RESULT_WD-1:0] r_acc [0:15];
  logic r_pre_valid;
  logic r_prod_valid;
  logic r_route_valid;
  logic r_sign_valid;
  logic r_pair_valid;
  logic r_partial_valid;
  logic [1:0] r_pre_group;
  logic [1:0] r_prod_group;
  logic [1:0] r_route_group;
  logic [1:0] r_sign_group;
  logic [1:0] r_pair_group;
  logic [1:0] r_partial_group;

  // Capture four signed input coefficients per accepted beat.
  // The source revision had no writer for r_input[0:15]; without
  // these registers the MCM group selector reads uninitialized data.
  // Keep data registers unreset: only accepted/valid samples are used.
  always_ff @(posedge I_CLK) begin
    if (I_DATA_VALID && O_DATA_READY) begin
      unique casez (r_current_state)
        ST_IDLE: begin
          for (int lane_idx = 0; lane_idx < 4; lane_idx++)
            r_input[lane_idx] <= $signed(I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]);
        end
        ST_CAPTURE1: begin
          for (int lane_idx = 0; lane_idx < 4; lane_idx++)
            r_input[4+lane_idx] <= $signed(I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]);
        end
        ST_CAPTURE2: begin
          for (int lane_idx = 0; lane_idx < 4; lane_idx++)
            r_input[8+lane_idx] <= $signed(I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]);
        end
        ST_CAPTURE3: begin
          for (int lane_idx = 0; lane_idx < 4; lane_idx++)
            r_input[12+lane_idx] <= $signed(I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]);
        end
        default: begin
          // No writes outside accepted input beats.
        end
      endcase
    end
  end

  // The group selector reads four positions of the captured input vector.
  always_comb begin
    w_group_sample[0] = '0;
    w_group_sample[1] = '0;
    w_group_sample[2] = '0;
    w_group_sample[3] = '0;
    unique casez (r_issue_group)
      2'd0: begin
        w_group_sample[0] = r_input[0];
        w_group_sample[1] = r_input[1];
        w_group_sample[2] = r_input[2];
        w_group_sample[3] = r_input[3];
      end
      2'd1: begin
        w_group_sample[0] = r_input[4];
        w_group_sample[1] = r_input[5];
        w_group_sample[2] = r_input[6];
        w_group_sample[3] = r_input[7];
      end
      2'd2: begin
        w_group_sample[0] = r_input[8];
        w_group_sample[1] = r_input[9];
        w_group_sample[2] = r_input[10];
        w_group_sample[3] = r_input[11];
      end
      2'd3: begin
        w_group_sample[0] = r_input[12];
        w_group_sample[1] = r_input[13];
        w_group_sample[2] = r_input[14];
        w_group_sample[3] = r_input[15];
      end
      default: begin
        w_group_sample[0] = '0;
        w_group_sample[1] = '0;
        w_group_sample[2] = '0;
        w_group_sample[3] = '0;
      end
    endcase
  end

  // Only shift-and-add logic is used for all constant multiplications.
  for (genvar mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin: gen_pre_mcm
    assign w_group_ext[mcm_idx] = {{(PARA_RESULT_WD-PARA_DATA_WD){w_group_sample[mcm_idx][PARA_DATA_WD-1]}}, w_group_sample[mcm_idx]};
    assign w_mul_3[mcm_idx] = (w_group_ext[mcm_idx] <<< 1) + w_group_ext[mcm_idx];
  end

  // One combinational routing process implements 64 fixed four-way selectors.
  always_comb begin
    for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        w_route_mag[lane_idx][mcm_idx] = '0;
        w_route_neg[lane_idx][mcm_idx] = 1'b0;
      end
    end
    unique casez (r_prod_group)
      2'd0: begin
        w_route_mag[0][0] = r_product[0][0]; w_route_neg[0][0] = 1'b0;
        w_route_mag[0][1] = r_product[1][2]; w_route_neg[0][1] = 1'b0;
        w_route_mag[0][2] = r_product[2][4]; w_route_neg[0][2] = 1'b0;
        w_route_mag[0][3] = r_product[3][6]; w_route_neg[0][3] = 1'b0;
        w_route_mag[1][0] = r_product[0][1]; w_route_neg[1][0] = 1'b0;
        w_route_mag[1][1] = r_product[1][5]; w_route_neg[1][1] = 1'b0;
        w_route_mag[1][2] = r_product[2][9]; w_route_neg[1][2] = 1'b0;
        w_route_mag[1][3] = r_product[3][13]; w_route_neg[1][3] = 1'b0;
        w_route_mag[2][0] = r_product[0][2]; w_route_neg[2][0] = 1'b0;
        w_route_mag[2][1] = r_product[1][8]; w_route_neg[2][1] = 1'b0;
        w_route_mag[2][2] = r_product[2][14]; w_route_neg[2][2] = 1'b0;
        w_route_mag[2][3] = r_product[3][11]; w_route_neg[2][3] = 1'b0;
        w_route_mag[3][0] = r_product[0][3]; w_route_neg[3][0] = 1'b0;
        w_route_mag[3][1] = r_product[1][11]; w_route_neg[3][1] = 1'b0;
        w_route_mag[3][2] = r_product[2][12]; w_route_neg[3][2] = 1'b0;
        w_route_mag[3][3] = r_product[3][4]; w_route_neg[3][3] = 1'b0;
        w_route_mag[4][0] = r_product[0][4]; w_route_neg[4][0] = 1'b0;
        w_route_mag[4][1] = r_product[1][14]; w_route_neg[4][1] = 1'b0;
        w_route_mag[4][2] = r_product[2][7]; w_route_neg[4][2] = 1'b0;
        w_route_mag[4][3] = r_product[3][1]; w_route_neg[4][3] = 1'b1;
        w_route_mag[5][0] = r_product[0][5]; w_route_neg[5][0] = 1'b0;
        w_route_mag[5][1] = r_product[1][14]; w_route_neg[5][1] = 1'b0;
        w_route_mag[5][2] = r_product[2][2]; w_route_neg[5][2] = 1'b0;
        w_route_mag[5][3] = r_product[3][8]; w_route_neg[5][3] = 1'b1;
        w_route_mag[6][0] = r_product[0][6]; w_route_neg[6][0] = 1'b0;
        w_route_mag[6][1] = r_product[1][11]; w_route_neg[6][1] = 1'b0;
        w_route_mag[6][2] = r_product[2][1]; w_route_neg[6][2] = 1'b1;
        w_route_mag[6][3] = r_product[3][14]; w_route_neg[6][3] = 1'b1;
        w_route_mag[7][0] = r_product[0][7]; w_route_neg[7][0] = 1'b0;
        w_route_mag[7][1] = r_product[1][8]; w_route_neg[7][1] = 1'b0;
        w_route_mag[7][2] = r_product[2][6]; w_route_neg[7][2] = 1'b1;
        w_route_mag[7][3] = r_product[3][9]; w_route_neg[7][3] = 1'b1;
        w_route_mag[8][0] = r_product[0][8]; w_route_neg[8][0] = 1'b0;
        w_route_mag[8][1] = r_product[1][5]; w_route_neg[8][1] = 1'b0;
        w_route_mag[8][2] = r_product[2][11]; w_route_neg[8][2] = 1'b1;
        w_route_mag[8][3] = r_product[3][2]; w_route_neg[8][3] = 1'b1;
        w_route_mag[9][0] = r_product[0][9]; w_route_neg[9][0] = 1'b0;
        w_route_mag[9][1] = r_product[1][2]; w_route_neg[9][1] = 1'b0;
        w_route_mag[9][2] = r_product[2][14]; w_route_neg[9][2] = 1'b1;
        w_route_mag[9][3] = r_product[3][3]; w_route_neg[9][3] = 1'b0;
        w_route_mag[10][0] = r_product[0][10]; w_route_neg[10][0] = 1'b0;
        w_route_mag[10][2] = r_product[2][10]; w_route_neg[10][2] = 1'b1;
        w_route_mag[10][3] = r_product[3][10]; w_route_neg[10][3] = 1'b0;
        w_route_mag[11][0] = r_product[0][11]; w_route_neg[11][0] = 1'b0;
        w_route_mag[11][1] = r_product[1][2]; w_route_neg[11][1] = 1'b1;
        w_route_mag[11][2] = r_product[2][5]; w_route_neg[11][2] = 1'b1;
        w_route_mag[11][3] = r_product[3][14]; w_route_neg[11][3] = 1'b0;
        w_route_mag[12][0] = r_product[0][12]; w_route_neg[12][0] = 1'b0;
        w_route_mag[12][1] = r_product[1][5]; w_route_neg[12][1] = 1'b1;
        w_route_mag[12][2] = r_product[2][0]; w_route_neg[12][2] = 1'b1;
        w_route_mag[12][3] = r_product[3][7]; w_route_neg[12][3] = 1'b0;
        w_route_mag[13][0] = r_product[0][13]; w_route_neg[13][0] = 1'b0;
        w_route_mag[13][1] = r_product[1][8]; w_route_neg[13][1] = 1'b1;
        w_route_mag[13][2] = r_product[2][3]; w_route_neg[13][2] = 1'b0;
        w_route_mag[13][3] = r_product[3][0]; w_route_neg[13][3] = 1'b0;
        w_route_mag[14][0] = r_product[0][14]; w_route_neg[14][0] = 1'b0;
        w_route_mag[14][1] = r_product[1][11]; w_route_neg[14][1] = 1'b1;
        w_route_mag[14][2] = r_product[2][8]; w_route_neg[14][2] = 1'b0;
        w_route_mag[14][3] = r_product[3][5]; w_route_neg[14][3] = 1'b1;
        w_route_mag[15][0] = r_product[0][14]; w_route_neg[15][0] = 1'b0;
        w_route_mag[15][1] = r_product[1][14]; w_route_neg[15][1] = 1'b1;
        w_route_mag[15][2] = r_product[2][13]; w_route_neg[15][2] = 1'b0;
        w_route_mag[15][3] = r_product[3][12]; w_route_neg[15][3] = 1'b1;
      end
      2'd1: begin
        w_route_mag[0][0] = r_product[0][8]; w_route_neg[0][0] = 1'b0;
        w_route_mag[0][1] = r_product[1][10]; w_route_neg[0][1] = 1'b0;
        w_route_mag[0][2] = r_product[2][12]; w_route_neg[0][2] = 1'b0;
        w_route_mag[0][3] = r_product[3][14]; w_route_neg[0][3] = 1'b0;
        w_route_mag[1][0] = r_product[0][14]; w_route_neg[1][0] = 1'b0;
        w_route_mag[1][1] = r_product[1][10]; w_route_neg[1][1] = 1'b0;
        w_route_mag[1][2] = r_product[2][6]; w_route_neg[1][2] = 1'b0;
        w_route_mag[1][3] = r_product[3][2]; w_route_neg[1][3] = 1'b0;
        w_route_mag[2][0] = r_product[0][5]; w_route_neg[2][0] = 1'b0;
        w_route_mag[2][2] = r_product[2][5]; w_route_neg[2][2] = 1'b1;
        w_route_mag[2][3] = r_product[3][11]; w_route_neg[2][3] = 1'b1;
        w_route_mag[3][0] = r_product[0][2]; w_route_neg[3][0] = 1'b1;
        w_route_mag[3][1] = r_product[1][10]; w_route_neg[3][1] = 1'b1;
        w_route_mag[3][2] = r_product[2][13]; w_route_neg[3][2] = 1'b1;
        w_route_mag[3][3] = r_product[3][5]; w_route_neg[3][3] = 1'b1;
        w_route_mag[4][0] = r_product[0][11]; w_route_neg[4][0] = 1'b1;
        w_route_mag[4][1] = r_product[1][10]; w_route_neg[4][1] = 1'b1;
        w_route_mag[4][2] = r_product[2][0]; w_route_neg[4][2] = 1'b1;
        w_route_mag[4][3] = r_product[3][8]; w_route_neg[4][3] = 1'b0;
        w_route_mag[5][0] = r_product[0][11]; w_route_neg[5][0] = 1'b1;
        w_route_mag[5][2] = r_product[2][11]; w_route_neg[5][2] = 1'b0;
        w_route_mag[5][3] = r_product[3][8]; w_route_neg[5][3] = 1'b0;
        w_route_mag[6][0] = r_product[0][2]; w_route_neg[6][0] = 1'b1;
        w_route_mag[6][1] = r_product[1][10]; w_route_neg[6][1] = 1'b0;
        w_route_mag[6][2] = r_product[2][7]; w_route_neg[6][2] = 1'b0;
        w_route_mag[6][3] = r_product[3][5]; w_route_neg[6][3] = 1'b1;
        w_route_mag[7][0] = r_product[0][5]; w_route_neg[7][0] = 1'b0;
        w_route_mag[7][1] = r_product[1][10]; w_route_neg[7][1] = 1'b0;
        w_route_mag[7][2] = r_product[2][4]; w_route_neg[7][2] = 1'b1;
        w_route_mag[7][3] = r_product[3][11]; w_route_neg[7][3] = 1'b1;
        w_route_mag[8][0] = r_product[0][14]; w_route_neg[8][0] = 1'b0;
        w_route_mag[8][2] = r_product[2][14]; w_route_neg[8][2] = 1'b1;
        w_route_mag[8][3] = r_product[3][2]; w_route_neg[8][3] = 1'b0;
        w_route_mag[9][0] = r_product[0][8]; w_route_neg[9][0] = 1'b0;
        w_route_mag[9][1] = r_product[1][10]; w_route_neg[9][1] = 1'b1;
        w_route_mag[9][2] = r_product[2][1]; w_route_neg[9][2] = 1'b1;
        w_route_mag[9][3] = r_product[3][14]; w_route_neg[9][3] = 1'b0;
        w_route_mag[10][1] = r_product[1][10]; w_route_neg[10][1] = 1'b1;
        w_route_mag[10][2] = r_product[2][10]; w_route_neg[10][2] = 1'b0;
        w_route_mag[11][0] = r_product[0][8]; w_route_neg[11][0] = 1'b1;
        w_route_mag[11][2] = r_product[2][8]; w_route_neg[11][2] = 1'b0;
        w_route_mag[11][3] = r_product[3][14]; w_route_neg[11][3] = 1'b1;
        w_route_mag[12][0] = r_product[0][14]; w_route_neg[12][0] = 1'b1;
        w_route_mag[12][1] = r_product[1][10]; w_route_neg[12][1] = 1'b0;
        w_route_mag[12][2] = r_product[2][3]; w_route_neg[12][2] = 1'b1;
        w_route_mag[12][3] = r_product[3][2]; w_route_neg[12][3] = 1'b1;
        w_route_mag[13][0] = r_product[0][5]; w_route_neg[13][0] = 1'b1;
        w_route_mag[13][1] = r_product[1][10]; w_route_neg[13][1] = 1'b0;
        w_route_mag[13][2] = r_product[2][14]; w_route_neg[13][2] = 1'b1;
        w_route_mag[13][3] = r_product[3][11]; w_route_neg[13][3] = 1'b0;
        w_route_mag[14][0] = r_product[0][2]; w_route_neg[14][0] = 1'b0;
        w_route_mag[14][2] = r_product[2][2]; w_route_neg[14][2] = 1'b1;
        w_route_mag[14][3] = r_product[3][5]; w_route_neg[14][3] = 1'b0;
        w_route_mag[15][0] = r_product[0][11]; w_route_neg[15][0] = 1'b0;
        w_route_mag[15][1] = r_product[1][10]; w_route_neg[15][1] = 1'b1;
        w_route_mag[15][2] = r_product[2][9]; w_route_neg[15][2] = 1'b0;
        w_route_mag[15][3] = r_product[3][8]; w_route_neg[15][3] = 1'b1;
      end
      2'd2: begin
        w_route_mag[0][0] = r_product[0][14]; w_route_neg[0][0] = 1'b0;
        w_route_mag[0][1] = r_product[1][13]; w_route_neg[0][1] = 1'b0;
        w_route_mag[0][2] = r_product[2][11]; w_route_neg[0][2] = 1'b0;
        w_route_mag[0][3] = r_product[3][9]; w_route_neg[0][3] = 1'b0;
        w_route_mag[1][0] = r_product[0][0]; w_route_neg[1][0] = 1'b1;
        w_route_mag[1][1] = r_product[1][4]; w_route_neg[1][1] = 1'b1;
        w_route_mag[1][2] = r_product[2][8]; w_route_neg[1][2] = 1'b1;
        w_route_mag[1][3] = r_product[3][12]; w_route_neg[1][3] = 1'b1;
        w_route_mag[2][0] = r_product[0][14]; w_route_neg[2][0] = 1'b1;
        w_route_mag[2][1] = r_product[1][8]; w_route_neg[2][1] = 1'b1;
        w_route_mag[2][2] = r_product[2][2]; w_route_neg[2][2] = 1'b1;
        w_route_mag[2][3] = r_product[3][2]; w_route_neg[2][3] = 1'b0;
        w_route_mag[3][0] = r_product[0][1]; w_route_neg[3][0] = 1'b0;
        w_route_mag[3][1] = r_product[1][9]; w_route_neg[3][1] = 1'b0;
        w_route_mag[3][2] = r_product[2][14]; w_route_neg[3][2] = 1'b0;
        w_route_mag[3][3] = r_product[3][6]; w_route_neg[3][3] = 1'b0;
        w_route_mag[4][0] = r_product[0][13]; w_route_neg[4][0] = 1'b0;
        w_route_mag[4][1] = r_product[1][3]; w_route_neg[4][1] = 1'b0;
        w_route_mag[4][2] = r_product[2][5]; w_route_neg[4][2] = 1'b1;
        w_route_mag[4][3] = r_product[3][14]; w_route_neg[4][3] = 1'b1;
        w_route_mag[5][0] = r_product[0][2]; w_route_neg[5][0] = 1'b1;
        w_route_mag[5][1] = r_product[1][14]; w_route_neg[5][1] = 1'b1;
        w_route_mag[5][2] = r_product[2][5]; w_route_neg[5][2] = 1'b1;
        w_route_mag[5][3] = r_product[3][5]; w_route_neg[5][3] = 1'b0;
        w_route_mag[6][0] = r_product[0][12]; w_route_neg[6][0] = 1'b1;
        w_route_mag[6][1] = r_product[1][0]; w_route_neg[6][1] = 1'b0;
        w_route_mag[6][2] = r_product[2][14]; w_route_neg[6][2] = 1'b0;
        w_route_mag[6][3] = r_product[3][3]; w_route_neg[6][3] = 1'b0;
        w_route_mag[7][0] = r_product[0][3]; w_route_neg[7][0] = 1'b0;
        w_route_mag[7][1] = r_product[1][12]; w_route_neg[7][1] = 1'b0;
        w_route_mag[7][2] = r_product[2][2]; w_route_neg[7][2] = 1'b1;
        w_route_mag[7][3] = r_product[3][13]; w_route_neg[7][3] = 1'b1;
        w_route_mag[8][0] = r_product[0][11]; w_route_neg[8][0] = 1'b0;
        w_route_mag[8][1] = r_product[1][5]; w_route_neg[8][1] = 1'b1;
        w_route_mag[8][2] = r_product[2][8]; w_route_neg[8][2] = 1'b1;
        w_route_mag[8][3] = r_product[3][8]; w_route_neg[8][3] = 1'b0;
        w_route_mag[9][0] = r_product[0][4]; w_route_neg[9][0] = 1'b1;
        w_route_mag[9][1] = r_product[1][7]; w_route_neg[9][1] = 1'b1;
        w_route_mag[9][2] = r_product[2][11]; w_route_neg[9][2] = 1'b0;
        w_route_mag[9][3] = r_product[3][0]; w_route_neg[9][3] = 1'b0;
        w_route_mag[10][0] = r_product[0][10]; w_route_neg[10][0] = 1'b1;
        w_route_mag[10][1] = r_product[1][10]; w_route_neg[10][1] = 1'b0;
        w_route_mag[10][3] = r_product[3][10]; w_route_neg[10][3] = 1'b1;
        w_route_mag[11][0] = r_product[0][5]; w_route_neg[11][0] = 1'b0;
        w_route_mag[11][1] = r_product[1][2]; w_route_neg[11][1] = 1'b0;
        w_route_mag[11][2] = r_product[2][11]; w_route_neg[11][2] = 1'b1;
        w_route_mag[11][3] = r_product[3][11]; w_route_neg[11][3] = 1'b0;
        w_route_mag[12][0] = r_product[0][9]; w_route_neg[12][0] = 1'b0;
        w_route_mag[12][1] = r_product[1][14]; w_route_neg[12][1] = 1'b1;
        w_route_mag[12][2] = r_product[2][8]; w_route_neg[12][2] = 1'b0;
        w_route_mag[12][3] = r_product[3][1]; w_route_neg[12][3] = 1'b1;
        w_route_mag[13][0] = r_product[0][6]; w_route_neg[13][0] = 1'b1;
        w_route_mag[13][1] = r_product[1][1]; w_route_neg[13][1] = 1'b0;
        w_route_mag[13][2] = r_product[2][2]; w_route_neg[13][2] = 1'b0;
        w_route_mag[13][3] = r_product[3][7]; w_route_neg[13][3] = 1'b1;
        w_route_mag[14][0] = r_product[0][8]; w_route_neg[14][0] = 1'b1;
        w_route_mag[14][1] = r_product[1][11]; w_route_neg[14][1] = 1'b0;
        w_route_mag[14][2] = r_product[2][14]; w_route_neg[14][2] = 1'b1;
        w_route_mag[14][3] = r_product[3][14]; w_route_neg[14][3] = 1'b0;
        w_route_mag[15][0] = r_product[0][7]; w_route_neg[15][0] = 1'b0;
        w_route_mag[15][1] = r_product[1][6]; w_route_neg[15][1] = 1'b1;
        w_route_mag[15][2] = r_product[2][5]; w_route_neg[15][2] = 1'b0;
        w_route_mag[15][3] = r_product[3][4]; w_route_neg[15][3] = 1'b1;
      end
      2'd3: begin
        w_route_mag[0][0] = r_product[0][7]; w_route_neg[0][0] = 1'b0;
        w_route_mag[0][1] = r_product[1][5]; w_route_neg[0][1] = 1'b0;
        w_route_mag[0][2] = r_product[2][3]; w_route_neg[0][2] = 1'b0;
        w_route_mag[0][3] = r_product[3][1]; w_route_neg[0][3] = 1'b0;
        w_route_mag[1][0] = r_product[0][14]; w_route_neg[1][0] = 1'b1;
        w_route_mag[1][1] = r_product[1][11]; w_route_neg[1][1] = 1'b1;
        w_route_mag[1][2] = r_product[2][7]; w_route_neg[1][2] = 1'b1;
        w_route_mag[1][3] = r_product[3][3]; w_route_neg[1][3] = 1'b1;
        w_route_mag[2][0] = r_product[0][8]; w_route_neg[2][0] = 1'b0;
        w_route_mag[2][1] = r_product[1][14]; w_route_neg[2][1] = 1'b0;
        w_route_mag[2][2] = r_product[2][11]; w_route_neg[2][2] = 1'b0;
        w_route_mag[2][3] = r_product[3][5]; w_route_neg[2][3] = 1'b0;
        w_route_mag[3][0] = r_product[0][0]; w_route_neg[3][0] = 1'b1;
        w_route_mag[3][1] = r_product[1][8]; w_route_neg[3][1] = 1'b1;
        w_route_mag[3][2] = r_product[2][14]; w_route_neg[3][2] = 1'b1;
        w_route_mag[3][3] = r_product[3][7]; w_route_neg[3][3] = 1'b1;
        w_route_mag[4][0] = r_product[0][6]; w_route_neg[4][0] = 1'b1;
        w_route_mag[4][1] = r_product[1][2]; w_route_neg[4][1] = 1'b0;
        w_route_mag[4][2] = r_product[2][12]; w_route_neg[4][2] = 1'b0;
        w_route_mag[4][3] = r_product[3][9]; w_route_neg[4][3] = 1'b0;
        w_route_mag[5][0] = r_product[0][14]; w_route_neg[5][0] = 1'b0;
        w_route_mag[5][1] = r_product[1][2]; w_route_neg[5][1] = 1'b0;
        w_route_mag[5][2] = r_product[2][8]; w_route_neg[5][2] = 1'b1;
        w_route_mag[5][3] = r_product[3][11]; w_route_neg[5][3] = 1'b1;
        w_route_mag[6][0] = r_product[0][9]; w_route_neg[6][0] = 1'b1;
        w_route_mag[6][1] = r_product[1][8]; w_route_neg[6][1] = 1'b1;
        w_route_mag[6][2] = r_product[2][4]; w_route_neg[6][2] = 1'b0;
        w_route_mag[6][3] = r_product[3][13]; w_route_neg[6][3] = 1'b0;
        w_route_mag[7][0] = r_product[0][1]; w_route_neg[7][0] = 1'b0;
        w_route_mag[7][1] = r_product[1][14]; w_route_neg[7][1] = 1'b0;
        w_route_mag[7][2] = r_product[2][0]; w_route_neg[7][2] = 1'b1;
        w_route_mag[7][3] = r_product[3][14]; w_route_neg[7][3] = 1'b1;
        w_route_mag[8][0] = r_product[0][5]; w_route_neg[8][0] = 1'b0;
        w_route_mag[8][1] = r_product[1][11]; w_route_neg[8][1] = 1'b1;
        w_route_mag[8][2] = r_product[2][2]; w_route_neg[8][2] = 1'b1;
        w_route_mag[8][3] = r_product[3][14]; w_route_neg[8][3] = 1'b0;
        w_route_mag[9][0] = r_product[0][13]; w_route_neg[9][0] = 1'b1;
        w_route_mag[9][1] = r_product[1][5]; w_route_neg[9][1] = 1'b0;
        w_route_mag[9][2] = r_product[2][6]; w_route_neg[9][2] = 1'b0;
        w_route_mag[9][3] = r_product[3][12]; w_route_neg[9][3] = 1'b1;
        w_route_mag[10][0] = r_product[0][10]; w_route_neg[10][0] = 1'b0;
        w_route_mag[10][2] = r_product[2][10]; w_route_neg[10][2] = 1'b1;
        w_route_mag[10][3] = r_product[3][10]; w_route_neg[10][3] = 1'b0;
        w_route_mag[11][0] = r_product[0][2]; w_route_neg[11][0] = 1'b1;
        w_route_mag[11][1] = r_product[1][5]; w_route_neg[11][1] = 1'b1;
        w_route_mag[11][2] = r_product[2][14]; w_route_neg[11][2] = 1'b0;
        w_route_mag[11][3] = r_product[3][8]; w_route_neg[11][3] = 1'b1;
        w_route_mag[12][0] = r_product[0][4]; w_route_neg[12][0] = 1'b1;
        w_route_mag[12][1] = r_product[1][11]; w_route_neg[12][1] = 1'b0;
        w_route_mag[12][2] = r_product[2][13]; w_route_neg[12][2] = 1'b1;
        w_route_mag[12][3] = r_product[3][6]; w_route_neg[12][3] = 1'b0;
        w_route_mag[13][0] = r_product[0][12]; w_route_neg[13][0] = 1'b0;
        w_route_mag[13][1] = r_product[1][14]; w_route_neg[13][1] = 1'b1;
        w_route_mag[13][2] = r_product[2][9]; w_route_neg[13][2] = 1'b0;
        w_route_mag[13][3] = r_product[3][4]; w_route_neg[13][3] = 1'b1;
        w_route_mag[14][0] = r_product[0][11]; w_route_neg[14][0] = 1'b1;
        w_route_mag[14][1] = r_product[1][8]; w_route_neg[14][1] = 1'b0;
        w_route_mag[14][2] = r_product[2][5]; w_route_neg[14][2] = 1'b1;
        w_route_mag[14][3] = r_product[3][2]; w_route_neg[14][3] = 1'b0;
        w_route_mag[15][0] = r_product[0][3]; w_route_neg[15][0] = 1'b0;
        w_route_mag[15][1] = r_product[1][2]; w_route_neg[15][1] = 1'b1;
        w_route_mag[15][2] = r_product[2][1]; w_route_neg[15][2] = 1'b0;
        w_route_mag[15][3] = r_product[3][0]; w_route_neg[15][3] = 1'b1;
      end
      default: begin
        // All routing outputs have already been assigned safe defaults.
      end
    endcase
  end

  // The control FSM captures one vector, issues four groups and transmits four beats.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: if (I_DATA_VALID) w_next_state = ST_CAPTURE1;
      ST_CAPTURE1: if (I_DATA_VALID) w_next_state = ST_CAPTURE2;
      ST_CAPTURE2: if (I_DATA_VALID) w_next_state = ST_CAPTURE3;
      ST_CAPTURE3: if (I_DATA_VALID) w_next_state = ST_ISSUE;
      ST_ISSUE: if (r_issue_group == 2'd3) w_next_state = ST_DRAIN;
      ST_DRAIN: if (r_partial_valid && (r_partial_group == 2'd3)) w_next_state = ST_SEND;
      ST_SEND: if (I_DATA_READY && (r_output_beat == 2'd3)) w_next_state = ST_IDLE;
      default: w_next_state = ST_IDLE;
    endcase
  end

  // The ready/valid outputs hold the selected coefficient beat while stalled.
  always_comb begin
    O_DATA_READY = 1'b0;
    O_DATA_VALID = 1'b0;
    O_DATA_LAST = 1'b0;
    O_DATA = '0;
    unique casez (r_current_state)
      ST_IDLE, ST_CAPTURE1, ST_CAPTURE2, ST_CAPTURE3: O_DATA_READY = 1'b1;
      ST_SEND: begin
        O_DATA_VALID = 1'b1;
        O_DATA_LAST = (r_output_beat == 2'd3);
        unique casez (r_output_beat)
          2'd0: begin
            O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[0];
            O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[1];
            O_DATA[2*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[2];
            O_DATA[3*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[3];
          end
          2'd1: begin
            O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[4];
            O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[5];
            O_DATA[2*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[6];
            O_DATA[3*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[7];
          end
          2'd2: begin
            O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[8];
            O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[9];
            O_DATA[2*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[10];
            O_DATA[3*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[11];
          end
          2'd3: begin
            O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[12];
            O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[13];
            O_DATA[2*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[14];
            O_DATA[3*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[15];
          end
          default: O_DATA = '0;
        endcase
      end
      default: begin
        O_DATA_READY = 1'b0;
        O_DATA_VALID = 1'b0;
        O_DATA_LAST = 1'b0;
        O_DATA = '0;
      end
    endcase
  end

  // Group and output counters advance only for the intended control events.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_issue_group <= '0;
      r_output_beat <= '0;
    end
    else begin
      if ((r_current_state == ST_IDLE) && I_DATA_VALID) begin
        r_issue_group <= '0;
        r_output_beat <= '0;
      end
      else if ((r_current_state == ST_ISSUE) && (r_issue_group != 2'd3))
        r_issue_group <= r_issue_group + 2'd1;
      if ((r_current_state == ST_SEND) && I_DATA_READY && (r_output_beat != 2'd3))
        r_output_beat <= r_output_beat + 2'd1;
    end
  end

  // Pipeline-valid flags remain registered so inactive datapath values are ignored.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_pre_valid <= 1'b0;
      r_prod_valid <= 1'b0;
      r_route_valid <= 1'b0;
      r_sign_valid <= 1'b0;
      r_pair_valid <= 1'b0;
      r_partial_valid <= 1'b0;
    end
    else begin
      r_pre_valid <= (r_current_state == ST_ISSUE);
      r_prod_valid <= r_pre_valid;
      r_route_valid <= r_prod_valid;
      r_sign_valid <= r_route_valid;
      r_pair_valid <= r_sign_valid;
      r_partial_valid <= r_pair_valid;
    end
  end

  // Pipeline stage zero precomputes reusable small multiples of each input sample.
  always_ff @(posedge I_CLK) begin
    if (r_current_state == ST_ISSUE) begin
      r_pre_group <= r_issue_group;
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        r_x[mcm_idx] <= w_group_ext[mcm_idx];
        r_mul_3[mcm_idx] <= w_mul_3[mcm_idx];
        r_mul_5[mcm_idx] <= (w_group_ext[mcm_idx] <<< 2) + w_group_ext[mcm_idx];
        r_mul_7[mcm_idx] <= (w_group_ext[mcm_idx] <<< 3) - w_group_ext[mcm_idx];
        r_mul_9[mcm_idx] <= (w_group_ext[mcm_idx] <<< 3) + w_group_ext[mcm_idx];
        r_mul_11[mcm_idx] <= (w_group_ext[mcm_idx] <<< 3) + w_mul_3[mcm_idx];
      end
    end
  end

  // Pipeline stage one generates the fifteen required constant products.
  always_ff @(posedge I_CLK) begin
    if (r_pre_valid) begin
      r_prod_group <= r_pre_group;
      for (int mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin
        r_product[mcm_idx][0] <= r_x[mcm_idx] <<< 3;
        r_product[mcm_idx][1] <= (r_x[mcm_idx] <<< 4) + r_x[mcm_idx];
        r_product[mcm_idx][2] <= (r_mul_3[mcm_idx] <<< 3) + r_x[mcm_idx];
        r_product[mcm_idx][3] <= (r_x[mcm_idx] <<< 5) + r_x[mcm_idx];
        r_product[mcm_idx][4] <= r_mul_5[mcm_idx] <<< 3;
        r_product[mcm_idx][5] <= r_mul_3[mcm_idx] <<< 4;
        r_product[mcm_idx][6] <= (r_mul_7[mcm_idx] <<< 3) - r_x[mcm_idx];
        r_product[mcm_idx][7] <= (r_x[mcm_idx] <<< 6) - (r_x[mcm_idx] <<< 1);
        r_product[mcm_idx][8] <= (r_x[mcm_idx] <<< 6) + (r_x[mcm_idx] <<< 2);
        r_product[mcm_idx][9] <= (r_mul_9[mcm_idx] <<< 3) + r_x[mcm_idx];
        r_product[mcm_idx][10] <= (r_mul_5[mcm_idx] <<< 4) - r_mul_3[mcm_idx];
        r_product[mcm_idx][11] <= (r_mul_5[mcm_idx] <<< 4) + r_x[mcm_idx];
        r_product[mcm_idx][12] <= (r_mul_5[mcm_idx] <<< 4) + r_mul_5[mcm_idx];
        r_product[mcm_idx][13] <= (r_mul_11[mcm_idx] <<< 3) - r_x[mcm_idx];
        r_product[mcm_idx][14] <= r_mul_11[mcm_idx] <<< 3;
      end
    end
  end

  // Pipeline stage two registers the fixed coefficient routing and sign bits.
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

  // Pipeline stage three applies matrix signs after the coefficient MUXes.
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

  // Pipeline stages four and five form balanced four-input partial sums.
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

  // Each coefficient accumulator combines four consecutive group partial sums.
  always_ff @(posedge I_CLK) begin
    if (r_partial_valid) begin
      for (int lane_idx = 0; lane_idx < 16; lane_idx++) begin
        if (r_partial_group == 2'd0)
          r_acc[lane_idx] <= r_partial[lane_idx];
        else
          r_acc[lane_idx] <= r_acc[lane_idx] + r_partial[lane_idx];
      end
    end
  end
endmodule: TQ_IDST7_MCM_16
