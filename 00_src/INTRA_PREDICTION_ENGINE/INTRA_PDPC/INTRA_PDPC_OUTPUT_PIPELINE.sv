//-----------------------------------------------------------
// Description: This module supplies four common elastic pipeline-stage enables to four PDPC
// processing lanes. It delays beat coordinates and boundary flags by the same four registered
// stages and provides a stall-safe ready/valid output. Metadata is not reset because the valid
// bits determine whether a pipeline stage contains meaningful data.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PDPC_OUTPUT_PIPELINE #(
  parameter PARA_COORD_WD = 5
)
(
  input                              I_CLK,
  input                              I_RESETN,
  input                              I_VALID,
  output logic                       O_INPUT_READY,
  input [PARA_COORD_WD-1:0]          I_X_BASE,
  input [PARA_COORD_WD-1:0]          I_Y,
  input                              I_ROW_LAST,
  input                              I_TU_LAST,
  output logic [3:0]                 O_STAGE_LOAD,
  output logic                       O_VALID,
  input                              I_READY,
  output logic [PARA_COORD_WD-1:0]   O_X_BASE,
  output logic [PARA_COORD_WD-1:0]   O_Y,
  output logic                       O_ROW_LAST,
  output logic                       O_TU_LAST,
  output logic                       O_LAST_BEAT_ACCEPT
);

logic [3:0] r_stage_valid;
logic [3:0] w_stage_ready;
logic [PARA_COORD_WD-1:0] r_stage_x_base [0:3];
logic [PARA_COORD_WD-1:0] r_stage_y [0:3];
logic r_stage_row_last [0:3];
logic r_stage_tu_last [0:3];

assign w_stage_ready[3] = !r_stage_valid[3] || I_READY;
assign w_stage_ready[2] = !r_stage_valid[2] || w_stage_ready[3];
assign w_stage_ready[1] = !r_stage_valid[1] || w_stage_ready[2];
assign w_stage_ready[0] = !r_stage_valid[0] || w_stage_ready[1];
assign O_INPUT_READY = w_stage_ready[0];

assign O_STAGE_LOAD[0] = I_VALID && w_stage_ready[0];
assign O_STAGE_LOAD[1] = r_stage_valid[0] && w_stage_ready[1];
assign O_STAGE_LOAD[2] = r_stage_valid[1] && w_stage_ready[2];
assign O_STAGE_LOAD[3] = r_stage_valid[2] && w_stage_ready[3];

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage_valid <= '0;
  else begin
    if (w_stage_ready[0])
      r_stage_valid[0] <= I_VALID;
    if (w_stage_ready[1])
      r_stage_valid[1] <= r_stage_valid[0];
    if (w_stage_ready[2])
      r_stage_valid[2] <= r_stage_valid[1];
    if (w_stage_ready[3])
      r_stage_valid[3] <= r_stage_valid[2];
  end
end

always_ff @ (posedge I_CLK) begin
  if (O_STAGE_LOAD[0]) begin
    r_stage_x_base[0] <= I_X_BASE;
    r_stage_y[0] <= I_Y;
    r_stage_row_last[0] <= I_ROW_LAST;
    r_stage_tu_last[0] <= I_TU_LAST;
  end

  if (O_STAGE_LOAD[1]) begin
    r_stage_x_base[1] <= r_stage_x_base[0];
    r_stage_y[1] <= r_stage_y[0];
    r_stage_row_last[1] <= r_stage_row_last[0];
    r_stage_tu_last[1] <= r_stage_tu_last[0];
  end

  if (O_STAGE_LOAD[2]) begin
    r_stage_x_base[2] <= r_stage_x_base[1];
    r_stage_y[2] <= r_stage_y[1];
    r_stage_row_last[2] <= r_stage_row_last[1];
    r_stage_tu_last[2] <= r_stage_tu_last[1];
  end

  if (O_STAGE_LOAD[3]) begin
    r_stage_x_base[3] <= r_stage_x_base[2];
    r_stage_y[3] <= r_stage_y[2];
    r_stage_row_last[3] <= r_stage_row_last[2];
    r_stage_tu_last[3] <= r_stage_tu_last[2];
  end
end

assign O_VALID = r_stage_valid[3];
assign O_X_BASE = r_stage_x_base[3];
assign O_Y = r_stage_y[3];
assign O_ROW_LAST = r_stage_row_last[3];
assign O_TU_LAST = r_stage_tu_last[3];
assign O_LAST_BEAT_ACCEPT = O_VALID && I_READY && O_TU_LAST;

endmodule: INTRA_PDPC_OUTPUT_PIPELINE
