//-----------------------------------------------------------
// Description: This module routes the post-PDPC four-sample prediction
// stream. In Y/Cb search, each beat is delivered exactly once to the
// candidate-bank writer and the original-sample/SAD path, even when
// the two consumers accept in different cycles. In Cr single-predict
// mode, it bypasses BOTH search consumers and streams directly to the
// downstream residual/transform input. The last accepted Cr beat
// generates a one-cycle completion handshake to INTRA_MODE_CONTROL.
// The upstream producer must obey ready/valid payload hold semantics.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PREDICTION_RESULT_ROUTER #(
  parameter PARA_PIXEL_WD        = 10,
  parameter PARA_PIXELS_PER_BEAT = 4,
  parameter PARA_DATA_WD         = PARA_PIXEL_WD * PARA_PIXELS_PER_BEAT
)
(
  input                              I_CLK,
  input                              I_RESETN,

  input                              I_CR_DIRECT_ACTIVE,

  input                              I_PRED_VALID,
  output logic                       O_PRED_READY,
  input [1:0]                        I_PRED_CANDIDATE_ID,
  input [PARA_DATA_WD-1:0]           I_PRED_DATA,
  input [4:0]                        I_PRED_X_BASE,
  input [4:0]                        I_PRED_Y,
  input                              I_PRED_ROW_LAST,
  input                              I_PRED_LAST,

  output logic                       O_CAND_WR_VALID,
  input                              I_CAND_WR_READY,
  output logic [1:0]                 O_CAND_WR_ID,
  output logic [PARA_DATA_WD-1:0]    O_CAND_WR_DATA,
  output logic                       O_CAND_WR_LAST,

  output logic                       O_ORIG_VALID,
  input                              I_ORIG_READY,
  output logic [1:0]                 O_ORIG_CANDIDATE_ID,
  output logic [PARA_DATA_WD-1:0]    O_ORIG_PRED_DATA,
  output logic [4:0]                 O_ORIG_X_BASE,
  output logic [4:0]                 O_ORIG_Y,
  output logic                       O_ORIG_ROW_LAST,
  output logic                       O_ORIG_LAST,

  output logic                       O_CR_VALID,
  input                              I_CR_READY,
  output logic [PARA_DATA_WD-1:0]    O_CR_PRED_DATA,
  output logic [4:0]                 O_CR_X_BASE,
  output logic [4:0]                 O_CR_Y,
  output logic                       O_CR_ROW_LAST,
  output logic                       O_CR_LAST,
  output logic                       O_CR_OUTPUT_DONE
);

logic r_cand_sent;
logic r_orig_sent;
logic w_cand_fire;
logic w_orig_fire;
logic w_search_done;

assign O_CAND_WR_VALID = I_PRED_VALID && !I_CR_DIRECT_ACTIVE && !r_cand_sent;
assign O_ORIG_VALID = I_PRED_VALID && !I_CR_DIRECT_ACTIVE && !r_orig_sent;
assign w_cand_fire = O_CAND_WR_VALID && I_CAND_WR_READY;
assign w_orig_fire = O_ORIG_VALID && I_ORIG_READY;

assign w_search_done =
  (r_cand_sent || w_cand_fire) &&
  (r_orig_sent || w_orig_fire);

assign O_PRED_READY = I_CR_DIRECT_ACTIVE ? I_CR_READY :
  ((r_cand_sent || I_CAND_WR_READY) && (r_orig_sent || I_ORIG_READY));

assign O_CAND_WR_ID = I_PRED_CANDIDATE_ID;
assign O_CAND_WR_DATA = I_PRED_DATA;
assign O_CAND_WR_LAST = I_PRED_LAST;

assign O_ORIG_CANDIDATE_ID = I_PRED_CANDIDATE_ID;
assign O_ORIG_PRED_DATA = I_PRED_DATA;
assign O_ORIG_X_BASE = I_PRED_X_BASE;
assign O_ORIG_Y = I_PRED_Y;
assign O_ORIG_ROW_LAST = I_PRED_ROW_LAST;
assign O_ORIG_LAST = I_PRED_LAST;

assign O_CR_VALID = I_CR_DIRECT_ACTIVE && I_PRED_VALID;
assign O_CR_PRED_DATA = I_PRED_DATA;
assign O_CR_X_BASE = I_PRED_X_BASE;
assign O_CR_Y = I_PRED_Y;
assign O_CR_ROW_LAST = I_PRED_ROW_LAST;
assign O_CR_LAST = I_PRED_LAST;
assign O_CR_OUTPUT_DONE = O_CR_VALID && I_CR_READY && I_PRED_LAST;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_cand_sent <= 1'b0;
    r_orig_sent <= 1'b0;
  end
  else if (I_CR_DIRECT_ACTIVE || (I_PRED_VALID && w_search_done)) begin
    r_cand_sent <= 1'b0;
    r_orig_sent <= 1'b0;
  end
  else begin
    if (w_cand_fire)
      r_cand_sent <= 1'b1;
    if (w_orig_fire)
      r_orig_sent <= 1'b1;
  end
end

endmodule: INTRA_PREDICTION_RESULT_ROUTER
