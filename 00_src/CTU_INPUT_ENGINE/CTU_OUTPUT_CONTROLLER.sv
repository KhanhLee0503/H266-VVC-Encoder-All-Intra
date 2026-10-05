//-----------------------------------------------------------
// Description: CTU output descriptor controller with READY_TAKE.
//
//              This module accepts a READY CTU buffer descriptor
//              from CTU_BUFFER_MANAGER and forwards it to the
//              downstream processing pipeline.
//
//              Ownership model:
//              - When this controller captures a READY descriptor,
//                it asserts O_READY_TAKE_VALID for one cycle.
//              - CTU_BUFFER_MANAGER uses READY_TAKE to change
//                buffer state from READY to IN_USE.
//              - O_CTU_OUT_FIRE only means downstream accepted
//                the descriptor. It no longer owns the READY->IN_USE
//                state transition.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_OUTPUT_CONTROLLER
  #(
    parameter int PARA_NUM_BUFFERS = 4,
    parameter int PARA_BUF_ID_W    = 2,
    parameter int PARA_CTU_TASK_WD = 136)
  (
    input I_CLK,
    input I_RST_N,

    input                          I_READY_BUFFER_VALID,
    input [PARA_BUF_ID_W - 1:0]    I_READY_BUFFER_ID,
    input [PARA_CTU_TASK_WD - 1:0] I_READY_BUFFER_META,

    output logic                       O_READY_TAKE_VALID,
    output logic [PARA_BUF_ID_W - 1:0] O_READY_TAKE_BUFFER_ID,

    output logic                          O_CTU_OUT_VALID,
    input                                 I_CTU_OUT_READY,
    output logic [PARA_BUF_ID_W - 1:0]    O_CTU_OUT_BUFFER_ID,
    output logic [PARA_CTU_TASK_WD - 1:0] O_CTU_OUT_META,

    output logic                       O_CTU_OUT_FIRE,
    output logic [PARA_BUF_ID_W - 1:0] O_CTU_OUT_FIRE_BUFFER_ID,

    output logic O_OUTPUT_CTRL_BUSY);

  logic w_ready_take;
  logic w_out_fire;

  logic                          r_pending_valid;
  logic [PARA_BUF_ID_W - 1:0]    r_pending_buffer_id;
  logic [PARA_CTU_TASK_WD - 1:0] r_pending_meta;

  // ---------------------------------------------------------
  // Handshake decode
  // ---------------------------------------------------------
  assign w_out_fire = O_CTU_OUT_VALID & I_CTU_OUT_READY;

  // Capture a READY descriptor only when there is no pending
  // descriptor inside this controller.
  assign w_ready_take = (~r_pending_valid) & I_READY_BUFFER_VALID;

  // ---------------------------------------------------------
  // READY_TAKE output
  // ---------------------------------------------------------
  assign O_READY_TAKE_VALID     = w_ready_take;
  assign O_READY_TAKE_BUFFER_ID = I_READY_BUFFER_ID;

  // ---------------------------------------------------------
  // CTU output assignment
  // ---------------------------------------------------------
  assign O_CTU_OUT_VALID     = r_pending_valid;
  assign O_CTU_OUT_BUFFER_ID = r_pending_buffer_id;
  assign O_CTU_OUT_META      = r_pending_meta;

  assign O_CTU_OUT_FIRE           = w_out_fire;
  assign O_CTU_OUT_FIRE_BUFFER_ID = r_pending_buffer_id;

  assign O_OUTPUT_CTRL_BUSY = r_pending_valid;

  // ---------------------------------------------------------
  // Pending descriptor register
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_pending_valid     <= 1'b0;
      r_pending_buffer_id <= '0;
      r_pending_meta      <= '0;
    end else begin
      if (w_ready_take) begin
        r_pending_valid     <= 1'b1;
        r_pending_buffer_id <= I_READY_BUFFER_ID;
        r_pending_meta      <= I_READY_BUFFER_META;
      end else if (w_out_fire) begin
        r_pending_valid     <= 1'b0;
        r_pending_buffer_id <= '0;
        r_pending_meta      <= '0;
      end
    end
  end

endmodule : CTU_OUTPUT_CONTROLLER