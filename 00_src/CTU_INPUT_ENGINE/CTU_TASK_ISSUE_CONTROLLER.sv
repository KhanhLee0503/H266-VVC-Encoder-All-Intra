//-----------------------------------------------------------
// Description: This module accepts CTU task descriptors from the CTU task
//              scheduler, allocates a free CTU buffer, reserves the buffer
//              in the buffer manager, queues the task by using FIFO_SYNC,
//              and forwards the queued task with buffer ID to the CTU
//              fetch engine.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_TASK_ISSUE_CONTROLLER
  #(
    parameter int PARA_NUM_BUFFERS      = 2,
    parameter int PARA_BUF_ID_W         = (PARA_NUM_BUFFERS <= 1) ? 1 : $clog2(PARA_NUM_BUFFERS),
    parameter int PARA_CTU_TASK_WD      = 136,
    parameter int PARA_TASK_QUEUE_DEPTH = PARA_NUM_BUFFERS,
    parameter int PARA_QUEUE_ENTRY_WD   = PARA_CTU_TASK_WD + PARA_BUF_ID_W)
  (
    input I_CLK,
    input I_RST_N,

    input                          I_SCHE_TASK_VALID,
    output logic                   O_SCHE_TASK_READY,
    input [PARA_CTU_TASK_WD - 1:0] I_SCHE_TASK_PAYLOAD,

    output logic                          O_FETCH_TASK_VALID,
    input                                 I_FETCH_TASK_READY,
    output logic [PARA_CTU_TASK_WD - 1:0] O_FETCH_TASK_PAYLOAD,
    output logic [PARA_BUF_ID_W - 1:0]    O_FETCH_TASK_BUFFER_ID,

    input                       I_BUFFER_FREE_VALID,
    input [PARA_BUF_ID_W - 1:0] I_BUFFER_FREE_ID,

    output logic                          O_BUFFER_RESERVE_VALID,
    output logic [PARA_BUF_ID_W - 1:0]    O_BUFFER_RESERVE_ID,
    output logic [PARA_CTU_TASK_WD - 1:0] O_BUFFER_RESERVE_META,

    output logic                       O_BUFFER_FETCH_START_VALID,
    output logic [PARA_BUF_ID_W - 1:0] O_BUFFER_FETCH_START_ID,

    output logic O_ISSUE_CTRL_BUSY);

  logic w_sched_task_fire;
  logic w_fetch_task_fire;

  logic                             w_fifo_wr_en;
  logic                             w_fifo_rd_en;
  logic [PARA_QUEUE_ENTRY_WD - 1:0] w_fifo_wdata;
  logic [PARA_QUEUE_ENTRY_WD - 1:0] w_fifo_rdata;
  logic                             w_fifo_full;
  logic                             w_fifo_empty;

  logic [PARA_BUF_ID_W - 1:0]    w_fifo_buffer_id;
  logic [PARA_CTU_TASK_WD - 1:0] w_fifo_task_payload;

  assign O_SCHE_TASK_READY = I_BUFFER_FREE_VALID & (~w_fifo_full);

  assign w_sched_task_fire = I_SCHE_TASK_VALID & O_SCHE_TASK_READY;
  assign w_fetch_task_fire = O_FETCH_TASK_VALID & I_FETCH_TASK_READY;

  assign w_fifo_wr_en = w_sched_task_fire;
  assign w_fifo_rd_en = w_fetch_task_fire;
  assign w_fifo_wdata = {I_BUFFER_FREE_ID, I_SCHE_TASK_PAYLOAD};

  assign {w_fifo_buffer_id, w_fifo_task_payload} = w_fifo_rdata;

  assign O_FETCH_TASK_VALID     = ~w_fifo_empty;
  assign O_FETCH_TASK_PAYLOAD   = w_fifo_task_payload;
  assign O_FETCH_TASK_BUFFER_ID = w_fifo_buffer_id;

  assign O_BUFFER_RESERVE_VALID = w_sched_task_fire;
  assign O_BUFFER_RESERVE_ID    = I_BUFFER_FREE_ID;
  assign O_BUFFER_RESERVE_META  = I_SCHE_TASK_PAYLOAD;

  assign O_BUFFER_FETCH_START_VALID = w_fetch_task_fire;
  assign O_BUFFER_FETCH_START_ID    = w_fifo_buffer_id;

  assign O_ISSUE_CTRL_BUSY = ~w_fifo_empty | w_sched_task_fire;

  FIFO_SYNC #(
      .PARA_FIFO_DEPTH(PARA_TASK_QUEUE_DEPTH),
      .PARA_DATA_WIDTH(PARA_QUEUE_ENTRY_WD))
    U_TASK_FIFO(
        .I_CLK(I_CLK),
        .I_RESET_N(I_RST_N),

        .I_WR_EN(w_fifo_wr_en),
        .I_RD_EN(w_fifo_rd_en),
        .I_FIFO_WDATA(w_fifo_wdata),

        .O_FIFO_RDATA(w_fifo_rdata),
        .O_FIFO_FULL(w_fifo_full),
        .O_FIFO_EMPTY(w_fifo_empty));

endmodule : CTU_TASK_ISSUE_CONTROLLER