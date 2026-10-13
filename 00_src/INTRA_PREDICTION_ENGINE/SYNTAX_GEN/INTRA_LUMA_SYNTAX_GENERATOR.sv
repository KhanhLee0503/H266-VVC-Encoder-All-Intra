//-----------------------------------------------------------
// Description: This module converts one regular luma intra winner mode
// and five H.266 non-planar MPM candidates into unbinarized luma syntax
// values. PLANAR is represented separately from the five MPM entries.
// No CABAC binarization or entropy coding is performed.
//-----------------------------------------------------------
`timescale 1ns/1ps
module INTRA_LUMA_SYNTAX_GENERATOR
#(
  parameter PARA_CTU_ID_WD = 9,
  parameter PARA_CU_ID_WD  = 8,
  parameter PARA_MODE_WD   = 7
)
(
  input                             I_CLK,
  input                             I_RESETN,
  input                             I_VALID,
  output logic                      O_READY,
  input      [PARA_CTU_ID_WD-1:0]   I_CTU_ID,
  input      [PARA_CU_ID_WD-1:0]    I_CU_ID,
  input      [PARA_MODE_WD-1:0]     I_WINNER_Y_MODE,
  input      [PARA_MODE_WD-1:0]     I_MPM_0,
  input      [PARA_MODE_WD-1:0]     I_MPM_1,
  input      [PARA_MODE_WD-1:0]     I_MPM_2,
  input      [PARA_MODE_WD-1:0]     I_MPM_3,
  input      [PARA_MODE_WD-1:0]     I_MPM_4,
  output logic                      O_VALID,
  input                             I_READY,
  output logic [PARA_CTU_ID_WD-1:0] O_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]  O_CU_ID,
  output logic                      O_LUMA_MPM_FLAG,
  output logic                      O_LUMA_NOT_PLANAR_FLAG,
  output logic [2:0]                O_LUMA_MPM_IDX,
  output logic [5:0]                O_LUMA_MPM_REMAINDER,
  output logic                      O_ERROR
);

localparam [PARA_MODE_WD-1:0] PARA_PLANAR_MODE = PARA_MODE_WD'(0);
localparam [PARA_MODE_WD-1:0] PARA_MAX_MODE = PARA_MODE_WD'(66);

logic r_valid;
logic r_error;
logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_cu_id;
logic r_mpm_flag;
logic r_not_planar_flag;
logic [2:0] r_mpm_idx;
logic [5:0] r_mpm_remainder;
logic [4:0] w_mpm_match;
logic [4:0] w_mpm_less;
logic [4:0] w_mpm_invalid;
logic [2:0] w_less_count;
logic [PARA_MODE_WD-1:0] w_remainder;
logic [2:0] w_mpm_idx;
logic w_mpm_flag;
logic w_not_planar_flag;
logic w_input_error;
logic w_accept;

assign w_mpm_match[0] = (I_WINNER_Y_MODE == I_MPM_0);
assign w_mpm_match[1] = (I_WINNER_Y_MODE == I_MPM_1);
assign w_mpm_match[2] = (I_WINNER_Y_MODE == I_MPM_2);
assign w_mpm_match[3] = (I_WINNER_Y_MODE == I_MPM_3);
assign w_mpm_match[4] = (I_WINNER_Y_MODE == I_MPM_4);
assign w_mpm_less[0] = (I_MPM_0 < I_WINNER_Y_MODE);
assign w_mpm_less[1] = (I_MPM_1 < I_WINNER_Y_MODE);
assign w_mpm_less[2] = (I_MPM_2 < I_WINNER_Y_MODE);
assign w_mpm_less[3] = (I_MPM_3 < I_WINNER_Y_MODE);
assign w_mpm_less[4] = (I_MPM_4 < I_WINNER_Y_MODE);
assign w_mpm_invalid[0] = (I_MPM_0 == PARA_PLANAR_MODE) || (I_MPM_0 > PARA_MAX_MODE);
assign w_mpm_invalid[1] = (I_MPM_1 == PARA_PLANAR_MODE) || (I_MPM_1 > PARA_MAX_MODE);
assign w_mpm_invalid[2] = (I_MPM_2 == PARA_PLANAR_MODE) || (I_MPM_2 > PARA_MAX_MODE);
assign w_mpm_invalid[3] = (I_MPM_3 == PARA_PLANAR_MODE) || (I_MPM_3 > PARA_MAX_MODE);
assign w_mpm_invalid[4] = (I_MPM_4 == PARA_PLANAR_MODE) || (I_MPM_4 > PARA_MAX_MODE);
assign w_less_count = {2'b00, w_mpm_less[0]} + {2'b00, w_mpm_less[1]} + {2'b00, w_mpm_less[2]} + {2'b00, w_mpm_less[3]} + {2'b00, w_mpm_less[4]};
assign w_remainder = I_WINNER_Y_MODE - PARA_MODE_WD'(1) - PARA_MODE_WD'(w_less_count);
assign w_mpm_flag = (I_WINNER_Y_MODE == PARA_PLANAR_MODE) || (|w_mpm_match);
assign w_not_planar_flag = (I_WINNER_Y_MODE != PARA_PLANAR_MODE);
assign w_input_error = (I_WINNER_Y_MODE > PARA_MAX_MODE) || (|w_mpm_invalid);
assign w_accept = !r_valid || I_READY;
assign O_READY = w_accept;
assign O_VALID = r_valid;
assign O_CTU_ID = r_ctu_id;
assign O_CU_ID = r_cu_id;
assign O_LUMA_MPM_FLAG = r_mpm_flag;
assign O_LUMA_NOT_PLANAR_FLAG = r_not_planar_flag;
assign O_LUMA_MPM_IDX = r_mpm_idx;
assign O_LUMA_MPM_REMAINDER = r_mpm_remainder;
assign O_ERROR = r_error;

// A priority encoder selects the first matching non-planar MPM index.
always_comb begin
  w_mpm_idx = 3'd0;

  if (w_mpm_match[0])
    w_mpm_idx = 3'd0;
  else if (w_mpm_match[1])
    w_mpm_idx = 3'd1;
  else if (w_mpm_match[2])
    w_mpm_idx = 3'd2;
  else if (w_mpm_match[3])
    w_mpm_idx = 3'd3;
  else if (w_mpm_match[4])
    w_mpm_idx = 3'd4;
end

// The payload holds its value when the next stage applies backpressure.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_valid <= 1'b0;
    r_error <= 1'b0;
  end
  else if (w_accept) begin
    r_valid <= I_VALID;

    if (I_VALID)
      r_error <= w_input_error;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_RESETN && w_accept && I_VALID) begin
    r_ctu_id <= I_CTU_ID;
    r_cu_id <= I_CU_ID;
    r_mpm_flag <= !w_input_error && w_mpm_flag;
    r_not_planar_flag <= !w_input_error && w_mpm_flag && w_not_planar_flag;
    r_mpm_idx <= (!w_input_error && w_mpm_flag && w_not_planar_flag) ? w_mpm_idx : 3'd0;
    r_mpm_remainder <= (!w_input_error && !w_mpm_flag) ? w_remainder[5:0] : 6'd0;
  end
end

endmodule: INTRA_LUMA_SYNTAX_GENERATOR
