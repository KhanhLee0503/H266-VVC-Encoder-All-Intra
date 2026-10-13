//-----------------------------------------------------------
// Description: This module maps one shared Cb/Cr winner mode to the
// unbinarized intra_chroma_pred_mode syntax value using ITU-T H.266
// (01/2026), Table 20. CCLM is disabled, and only regular chroma modes
// PLANAR, DC, ANGULAR18, and ANGULAR50 are supported. Cr reuses Cb mode.
//-----------------------------------------------------------
`timescale 1ns/1ps
module INTRA_CHROMA_SYNTAX_GENERATOR
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
  input      [PARA_MODE_WD-1:0]     I_WINNER_CHROMA_MODE,
  output logic                      O_VALID,
  input                             I_READY,
  output logic [PARA_CTU_ID_WD-1:0] O_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]  O_CU_ID,
  output logic [2:0]                O_CHROMA_PRED_MODE,
  output logic                      O_ERROR
);

localparam [PARA_MODE_WD-1:0] PARA_MAX_MODE = PARA_MODE_WD'(66);

logic r_valid;
logic r_error;
logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_cu_id;
logic [2:0] r_chroma_pred_mode;
logic [2:0] w_chroma_pred_mode;
logic w_mode_supported;
logic w_input_error;
logic w_accept;

assign w_input_error = (I_WINNER_Y_MODE > PARA_MAX_MODE) || !w_mode_supported;
assign w_accept = !r_valid || I_READY;
assign O_READY = w_accept;
assign O_VALID = r_valid;
assign O_CTU_ID = r_ctu_id;
assign O_CU_ID = r_cu_id;
assign O_CHROMA_PRED_MODE = r_chroma_pred_mode;
assign O_ERROR = r_error;

// Table 20 maps explicit chroma modes that equal luma mode to angular 66.
// The derived-mode code 4 must be used to represent that same mode instead.
always_comb begin
  w_chroma_pred_mode = 3'd0;
  w_mode_supported = 1'b1;

  unique casez (I_WINNER_CHROMA_MODE)
    PARA_MODE_WD'(0): w_chroma_pred_mode = (I_WINNER_Y_MODE == PARA_MODE_WD'(0)) ? 3'd4 : 3'd0;
    PARA_MODE_WD'(50): w_chroma_pred_mode = (I_WINNER_Y_MODE == PARA_MODE_WD'(50)) ? 3'd4 : 3'd1;
    PARA_MODE_WD'(18): w_chroma_pred_mode = (I_WINNER_Y_MODE == PARA_MODE_WD'(18)) ? 3'd4 : 3'd2;
    PARA_MODE_WD'(1): w_chroma_pred_mode = (I_WINNER_Y_MODE == PARA_MODE_WD'(1)) ? 3'd4 : 3'd3;
    default: begin
      w_chroma_pred_mode = 3'd0;
      w_mode_supported = 1'b0;
    end
  endcase
end

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
    r_chroma_pred_mode <= w_input_error ? 3'd0 : w_chroma_pred_mode;
  end
end

endmodule: INTRA_CHROMA_SYNTAX_GENERATOR
