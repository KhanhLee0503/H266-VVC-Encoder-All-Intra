//-----------------------------------------------------------
// Description: This module is the top-level integration
// boundary for the forward primary 2D transform. It wraps
// the existing TQ_2D_TRANSFORM_CONTROLLER without changing
// the row and column transform datapaths or scheduling.
// The controller contains two unified 1D engines, VTM-style
// row and column scaling, and a dual-buffer four-bank
// transpose memory with independent buffer management.
// Input residual samples are provided in row-major order.
// Output transform coefficients are emitted in column-major
// order, with TU and vector framing metadata. This block
// does not implement transform mode decision, coefficient
// reorder, LFNST, or quantization. A valid input TU must
// carry I_TU_START on its first accepted data beat only.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_PRIMARY_TRANSFORM_TOP #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_TU_ID_WD = 16
)(
  input                                      I_CLK,
  input                                      I_RESETN,
  input        [4*PARA_DATA_WD-1:0]          I_DATA,
  input                                      I_DATA_VALID,
  output logic                               I_DATA_READY,
  input                                      I_TU_START,
  input        [1:0]                         I_TU_WIDTH_SIZE,
  input        [1:0]                         I_TU_HEIGHT_SIZE,
  input        [1:0]                         I_ROW_TRANSFORM_MODE,
  input        [1:0]                         I_COLUMN_TRANSFORM_MODE,
  input        [PARA_TU_ID_WD-1:0]           I_TU_ID,
  output logic [4*PARA_DATA_WD-1:0]          O_DATA,
  output logic                               O_DATA_VALID,
  input                                      O_DATA_READY,
  output logic                               O_DATA_LAST,
  output logic                               O_TU_START,
  output logic                               O_TU_LAST,
  output logic [1:0]                         O_TU_WIDTH_SIZE,
  output logic [1:0]                         O_TU_HEIGHT_SIZE,
  output logic [1:0]                         O_ROW_TRANSFORM_MODE,
  output logic [1:0]                         O_COLUMN_TRANSFORM_MODE,
  output logic [PARA_TU_ID_WD-1:0]           O_TU_ID,
  output logic [3:0]                         O_COLUMN_OVERFLOW,
  output logic                               O_ROW_OVERFLOW_STICKY,
  output logic                               O_COLUMN_OVERFLOW_STICKY,
  output logic [1:0]                         O_BUFFER_0_STATE,
  output logic [1:0]                         O_BUFFER_1_STATE
);
  // This wrapper is deliberately combinational at its
  // integration boundary. The existing controller owns
  // all TU state, handshakes, datapath storage, and RAMs.
  TQ_2D_TRANSFORM_CONTROLLER #(
    .PARA_DATA_WD                  (PARA_DATA_WD),
    .PARA_TU_ID_WD                 (PARA_TU_ID_WD)
  ) u_tq_2d_transform_controller (
    .I_CLK                         (I_CLK),
    .I_RESETN                      (I_RESETN),
    .I_DATA                        (I_DATA),
    .I_DATA_VALID                  (I_DATA_VALID),
    .I_DATA_READY                  (I_DATA_READY),
    .I_TU_START                    (I_TU_START),
    .I_TU_WIDTH_SIZE               (I_TU_WIDTH_SIZE),
    .I_TU_HEIGHT_SIZE              (I_TU_HEIGHT_SIZE),
    .I_ROW_TRANSFORM_MODE          (I_ROW_TRANSFORM_MODE),
    .I_COLUMN_TRANSFORM_MODE       (I_COLUMN_TRANSFORM_MODE),
    .I_TU_ID                       (I_TU_ID),
    .O_DATA                        (O_DATA),
    .O_DATA_VALID                  (O_DATA_VALID),
    .O_DATA_READY                  (O_DATA_READY),
    .O_DATA_LAST                   (O_DATA_LAST),
    .O_TU_START                    (O_TU_START),
    .O_TU_LAST                     (O_TU_LAST),
    .O_TU_WIDTH_SIZE               (O_TU_WIDTH_SIZE),
    .O_TU_HEIGHT_SIZE              (O_TU_HEIGHT_SIZE),
    .O_ROW_TRANSFORM_MODE          (O_ROW_TRANSFORM_MODE),
    .O_COLUMN_TRANSFORM_MODE       (O_COLUMN_TRANSFORM_MODE),
    .O_TU_ID                       (O_TU_ID),
    .O_COLUMN_OVERFLOW             (O_COLUMN_OVERFLOW),
    .O_ROW_OVERFLOW_STICKY         (O_ROW_OVERFLOW_STICKY),
    .O_COLUMN_OVERFLOW_STICKY      (O_COLUMN_OVERFLOW_STICKY),
    .O_BUFFER_0_STATE              (O_BUFFER_0_STATE),
    .O_BUFFER_1_STATE              (O_BUFFER_1_STATE)
  );
endmodule: TQ_PRIMARY_TRANSFORM_TOP
