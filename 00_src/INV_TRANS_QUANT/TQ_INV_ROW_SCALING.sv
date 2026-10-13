//-----------------------------------------------------------
// Description: VVC inverse row scaling wrapper.
// Rounding shift = 10; 4 signed lanes; elastic 2-stage core.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INV_ROW_SCALING #(
  parameter integer PARA_INPUT_WD  = 28,
  parameter integer PARA_OUTPUT_WD = 16,
  parameter integer PARA_TU_ID_WD  = 16
)(
  input                                       I_CLK,
  input                                       I_RESETN,
  input         [4*PARA_INPUT_WD-1:0]         I_DATA,
  input                                       I_DATA_VALID,
  output logic                                I_DATA_READY,
  input         [PARA_TU_ID_WD-1:0]           I_TU_ID,
  input                                       I_TU_START,
  input                                       I_TU_LAST,
  input                                       I_VECTOR_LAST,
  input         [1:0]                         I_COMPONENT,
  output logic  [4*PARA_OUTPUT_WD-1:0]        O_DATA,
  output logic                                O_DATA_VALID,
  input                                       O_DATA_READY,
  output logic  [PARA_TU_ID_WD-1:0]           O_TU_ID,
  output logic                                O_TU_START,
  output logic                                O_TU_LAST,
  output logic                                O_VECTOR_LAST,
  output logic  [1:0]                         O_COMPONENT
);
  TQ_INV_SCALING #(
    .PARA_INPUT_WD  (PARA_INPUT_WD),
    .PARA_OUTPUT_WD (PARA_OUTPUT_WD),
    .PARA_SHIFT     (10),
    .PARA_TU_ID_WD  (PARA_TU_ID_WD)
  ) u_inv_scaling (
    .I_CLK         (I_CLK),
    .I_RESETN      (I_RESETN),
    .I_DATA        (I_DATA),
    .I_DATA_VALID  (I_DATA_VALID),
    .I_DATA_READY  (I_DATA_READY),
    .I_TU_ID       (I_TU_ID),
    .I_TU_START    (I_TU_START),
    .I_TU_LAST     (I_TU_LAST),
    .I_VECTOR_LAST (I_VECTOR_LAST),
    .I_COMPONENT   (I_COMPONENT),
    .O_DATA        (O_DATA),
    .O_DATA_VALID  (O_DATA_VALID),
    .O_DATA_READY  (O_DATA_READY),
    .O_TU_ID       (O_TU_ID),
    .O_TU_START    (O_TU_START),
    .O_TU_LAST     (O_TU_LAST),
    .O_VECTOR_LAST (O_VECTOR_LAST),
    .O_COMPONENT   (O_COMPONENT)
  );
endmodule: TQ_INV_ROW_SCALING
