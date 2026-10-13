//-----------------------------------------------------------
// Description: Full H.266/VVC primary inverse transform 2D.
// Column-major dequantized coefficients -> vertical inverse 1D
// -> shift 7 + signed16 clip -> banked ping-pong transpose
// -> horizontal inverse 1D -> shift 10 + signed16 clip ->
// row-major residual output. One TU per column controller
// and one TU per row controller may overlap. Core modules
// and transpose memory own their own payload buffering.
// The controller stamps TU flags AFTER each scaling pipeline
// according to successful ready/valid transfers, not latency.
// Data input lane 0 occupies bits [15:0]; output same layout.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INVERSE_TRANSFORM_TOP #(
  parameter integer PARA_DATA_WD   = 16,
  parameter integer PARA_RAW_WD    = 28,
  parameter integer PARA_TU_ID_WD  = 16
)(
  input                                   I_CLK,
  input                                   I_RESETN,
  // One entire TU in column-major order, 4 coefficients/beat.
  input  [4*PARA_DATA_WD-1:0]             I_DATA,
  input                                   I_DATA_VALID,
  output logic                            O_INPUT_READY,
  input                                   I_TU_START,
  input                                   I_TU_LAST,
  input  [PARA_TU_ID_WD-1:0]              I_TU_ID,
  input  [1:0]                            I_TU_WIDTH,
  input  [1:0]                            I_TU_HEIGHT,
  input  [1:0]                            I_TRANSFORM_HOR,
  input  [1:0]                            I_TRANSFORM_VER,
  input  [1:0]                            I_COMPONENT,
  // Row-major spatial residuals, 4 samples/beat.
  output logic [4*PARA_DATA_WD-1:0]       O_DATA,
  output logic                            O_DATA_VALID,
  input                                   I_OUTPUT_READY,
  output logic                            O_TU_START,
  output logic                            O_TU_LAST,
  output logic                            O_VECTOR_LAST,
  output logic [PARA_TU_ID_WD-1:0]        O_TU_ID,
  output logic [1:0]                      O_TU_WIDTH,
  output logic [1:0]                      O_TU_HEIGHT,
  output logic [1:0]                      O_COMPONENT,
  output logic [1:0]                      O_TRANSFORM_HOR,
  output logic [1:0]                      O_TRANSFORM_VER,
  output logic                            O_PROTOCOL_ERROR,
  output logic                            O_BUSY
);
  // Control plane: all signals refer to real transfers.
  logic w_col_in_valid, w_col_in_ready;
  logic [1:0] w_col_type, w_col_size;
  logic [4*PARA_RAW_WD-1:0] w_col_raw_data;
  logic w_col_raw_valid, w_col_raw_ready, w_col_raw_last;
  logic w_col_scale_in_valid, w_col_scale_in_ready;
  logic [4*PARA_DATA_WD-1:0] w_col_scaled_data;
  logic w_col_scaled_valid, w_col_scaled_ready;
  logic w_mem_wr_valid, w_mem_wr_ready;
  logic w_mem_wr_start, w_mem_wr_last;
  logic [PARA_TU_ID_WD-1:0] w_mem_wr_id;
  logic [1:0] w_mem_wr_width, w_mem_wr_height;
  logic [1:0] w_mem_wr_hor, w_mem_wr_ver, w_mem_wr_component;
  logic [4*PARA_DATA_WD-1:0] w_mem_rd_data;
  logic w_mem_rd_valid, w_mem_rd_ready;
  logic w_mem_rd_vector_last, w_mem_rd_start, w_mem_rd_last;
  logic [PARA_TU_ID_WD-1:0] w_mem_rd_id;
  logic [1:0] w_mem_rd_width, w_mem_rd_height;
  logic [1:0] w_mem_rd_hor, w_mem_rd_ver, w_mem_rd_component;
  logic w_mem_error;
  logic w_row_in_valid, w_row_in_ready;
  logic [1:0] w_row_type, w_row_size;
  logic [4*PARA_RAW_WD-1:0] w_row_raw_data;
  logic w_row_raw_valid, w_row_raw_ready, w_row_raw_last;
  logic w_row_scale_in_valid, w_row_scale_in_ready;
  logic [4*PARA_DATA_WD-1:0] w_row_scaled_data;
  logic w_row_scaled_valid, w_row_scaled_ready;
  logic w_tu_done_valid;
  logic [PARA_TU_ID_WD-1:0] w_tu_done_id;

  // Existing controller is the sole owner of TU framing/counters.
  TQ_INVERSE_2D_CONTROLLER #(
    .PARA_TU_ID_WD(PARA_TU_ID_WD)
  ) u_controller (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_IN_VALID(I_DATA_VALID),
    .O_IN_READY(O_INPUT_READY),
    .I_IN_TU_START(I_TU_START),
    .I_IN_TU_LAST(I_TU_LAST),
    .I_IN_TU_ID(I_TU_ID),
    .I_IN_WIDTH(I_TU_WIDTH),
    .I_IN_HEIGHT(I_TU_HEIGHT),
    .I_IN_TRANSFORM_HOR(I_TRANSFORM_HOR),
    .I_IN_TRANSFORM_VER(I_TRANSFORM_VER),
    .I_IN_COMPONENT(I_COMPONENT),
    .O_COL_IN_VALID(w_col_in_valid),
    .I_COL_IN_READY(w_col_in_ready),
    .O_COL_TRANSFORM_TYPE(w_col_type),
    .O_COL_TRANSFORM_SIZE(w_col_size),
    .I_COL_OUT_VALID(w_col_raw_valid),
    .I_COL_OUT_LAST(w_col_raw_last),
    .O_COL_OUT_READY(w_col_raw_ready),
    .O_COL_SCALE_IN_VALID(w_col_scale_in_valid),
    .I_COL_SCALE_IN_READY(w_col_scale_in_ready),
    .I_COL_SCALE_OUT_VALID(w_col_scaled_valid),
    .O_COL_SCALE_OUT_READY(w_col_scaled_ready),
    .O_MEM_WR_VALID(w_mem_wr_valid),
    .I_MEM_WR_READY(w_mem_wr_ready),
    .O_MEM_WR_TU_START(w_mem_wr_start),
    .O_MEM_WR_TU_LAST(w_mem_wr_last),
    .O_MEM_WR_TU_ID(w_mem_wr_id),
    .O_MEM_WR_WIDTH(w_mem_wr_width),
    .O_MEM_WR_HEIGHT(w_mem_wr_height),
    .O_MEM_WR_TRANSFORM_HOR(w_mem_wr_hor),
    .O_MEM_WR_TRANSFORM_VER(w_mem_wr_ver),
    .O_MEM_WR_COMPONENT(w_mem_wr_component),
    .I_MEM_RD_VALID(w_mem_rd_valid),
    .I_MEM_RD_VECTOR_LAST(w_mem_rd_vector_last),
    .I_MEM_RD_TU_START(w_mem_rd_start),
    .I_MEM_RD_TU_LAST(w_mem_rd_last),
    .I_MEM_RD_TU_ID(w_mem_rd_id),
    .I_MEM_RD_WIDTH(w_mem_rd_width),
    .I_MEM_RD_HEIGHT(w_mem_rd_height),
    .I_MEM_RD_TRANSFORM_HOR(w_mem_rd_hor),
    .I_MEM_RD_TRANSFORM_VER(w_mem_rd_ver),
    .I_MEM_RD_COMPONENT(w_mem_rd_component),
    .O_MEM_RD_READY(w_mem_rd_ready),
    .O_ROW_IN_VALID(w_row_in_valid),
    .I_ROW_IN_READY(w_row_in_ready),
    .O_ROW_TRANSFORM_TYPE(w_row_type),
    .O_ROW_TRANSFORM_SIZE(w_row_size),
    .I_ROW_OUT_VALID(w_row_raw_valid),
    .I_ROW_OUT_LAST(w_row_raw_last),
    .O_ROW_OUT_READY(w_row_raw_ready),
    .O_ROW_SCALE_IN_VALID(w_row_scale_in_valid),
    .I_ROW_SCALE_IN_READY(w_row_scale_in_ready),
    .I_ROW_SCALE_OUT_VALID(w_row_scaled_valid),
    .O_ROW_SCALE_OUT_READY(w_row_scaled_ready),
    .O_RESULT_VALID(O_DATA_VALID),
    .I_RESULT_READY(I_OUTPUT_READY),
    .O_RESULT_TU_START(O_TU_START),
    .O_RESULT_VECTOR_LAST(O_VECTOR_LAST),
    .O_RESULT_TU_LAST(O_TU_LAST),
    .O_RESULT_TU_ID(O_TU_ID),
    .O_RESULT_WIDTH(O_TU_WIDTH),
    .O_RESULT_HEIGHT(O_TU_HEIGHT),
    .O_RESULT_COMPONENT(O_COMPONENT),
    .O_RESULT_TRANSFORM_HOR(O_TRANSFORM_HOR),
    .O_RESULT_TRANSFORM_VER(O_TRANSFORM_VER),
    .O_TU_DONE_VALID(w_tu_done_valid),
    .O_TU_DONE_ID(w_tu_done_id),
    .I_MEM_PROTOCOL_ERROR(w_mem_error),
    .O_PROTOCOL_ERROR(O_PROTOCOL_ERROR),
    .O_BUSY(O_BUSY)
  );

  // Vertical inverse transform, natural output row order per column.
  TQ_UNIFIED_INVERSE_1D_ENGINE #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RAW_WD)
  ) u_column_1d (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_TRANSFORM_TYPE(w_col_type),
    .I_TRANSFORM_SIZE(w_col_size),
    .I_DATA(I_DATA),
    .I_DATA_VALID(w_col_in_valid),
    .I_DATA_READY(w_col_in_ready),
    .O_DATA(w_col_raw_data),
    .O_DATA_VALID(w_col_raw_valid),
    .O_DATA_READY(w_col_raw_ready),
    .O_DATA_LAST(w_col_raw_last)
  );

  TQ_INV_COLUMN_SCALING #(
    .PARA_INPUT_WD(PARA_RAW_WD),
    .PARA_OUTPUT_WD(PARA_DATA_WD),
    .PARA_TU_ID_WD(PARA_TU_ID_WD)
  ) u_column_scaling (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA(w_col_raw_data),
    .I_DATA_VALID(w_col_scale_in_valid),
    .I_DATA_READY(w_col_scale_in_ready),
    // TU framing at RAM write is stamped by controller AFTER this
    // elastic pipeline. The inactive scaling sidebands are not used.
    .I_TU_ID(w_mem_wr_id),
    .I_TU_START(1'b0),
    .I_TU_LAST(1'b0),
    .I_VECTOR_LAST(w_col_raw_last),
    .I_COMPONENT(w_mem_wr_component),
    .O_DATA(w_col_scaled_data),
    .O_DATA_VALID(w_col_scaled_valid),
    .O_DATA_READY(w_col_scaled_ready),
    .O_TU_ID(),
    .O_TU_START(),
    .O_TU_LAST(),
    .O_VECTOR_LAST(),
    .O_COMPONENT()
  );

  // Transpose RAM owns buffer A/B and preserves TU completion order.
  TQ_INV_TRANSPOSE_MEMORY #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_TU_ID_WD(PARA_TU_ID_WD)
  ) u_transpose_memory (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_WR_DATA(w_col_scaled_data),
    .I_WR_VALID(w_mem_wr_valid),
    .O_WR_READY(w_mem_wr_ready),
    .I_WR_TU_START(w_mem_wr_start),
    .I_WR_TU_LAST(w_mem_wr_last),
    .I_WR_TU_ID(w_mem_wr_id),
    .I_WR_WIDTH(w_mem_wr_width),
    .I_WR_HEIGHT(w_mem_wr_height),
    .I_WR_TRANSFORM_HOR(w_mem_wr_hor),
    .I_WR_TRANSFORM_VER(w_mem_wr_ver),
    .I_WR_COMPONENT(w_mem_wr_component),
    .O_RD_DATA(w_mem_rd_data),
    .O_RD_VALID(w_mem_rd_valid),
    .I_RD_READY(w_mem_rd_ready),
    .O_RD_VECTOR_LAST(w_mem_rd_vector_last),
    .O_RD_TU_START(w_mem_rd_start),
    .O_RD_TU_LAST(w_mem_rd_last),
    .O_RD_TU_ID(w_mem_rd_id),
    .O_RD_WIDTH(w_mem_rd_width),
    .O_RD_HEIGHT(w_mem_rd_height),
    .O_RD_TRANSFORM_HOR(w_mem_rd_hor),
    .O_RD_TRANSFORM_VER(w_mem_rd_ver),
    .O_RD_COMPONENT(w_mem_rd_component),
    .I_TU_DONE_VALID(w_tu_done_valid),
    .I_TU_DONE_ID(w_tu_done_id),
    .O_PROTOCOL_ERROR(w_mem_error)
  );

  // Horizontal inverse transform. Row vectors have length W.
  TQ_UNIFIED_INVERSE_1D_ENGINE #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RAW_WD)
  ) u_row_1d (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_TRANSFORM_TYPE(w_row_type),
    .I_TRANSFORM_SIZE(w_row_size),
    .I_DATA(w_mem_rd_data),
    .I_DATA_VALID(w_row_in_valid),
    .I_DATA_READY(w_row_in_ready),
    .O_DATA(w_row_raw_data),
    .O_DATA_VALID(w_row_raw_valid),
    .O_DATA_READY(w_row_raw_ready),
    .O_DATA_LAST(w_row_raw_last)
  );

  TQ_INV_ROW_SCALING #(
    .PARA_INPUT_WD(PARA_RAW_WD),
    .PARA_OUTPUT_WD(PARA_DATA_WD),
    .PARA_TU_ID_WD(PARA_TU_ID_WD)
  ) u_row_scaling (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA(w_row_raw_data),
    .I_DATA_VALID(w_row_scale_in_valid),
    .I_DATA_READY(w_row_scale_in_ready),
    .I_TU_ID(O_TU_ID),
    .I_TU_START(1'b0),
    .I_TU_LAST(1'b0),
    .I_VECTOR_LAST(w_row_raw_last),
    .I_COMPONENT(O_COMPONENT),
    .O_DATA(w_row_scaled_data),
    .O_DATA_VALID(w_row_scaled_valid),
    .O_DATA_READY(w_row_scaled_ready),
    .O_TU_ID(),
    .O_TU_START(),
    .O_TU_LAST(),
    .O_VECTOR_LAST(),
    .O_COMPONENT()
  );

  assign O_DATA = w_row_scaled_data;
endmodule: TQ_INVERSE_TRANSFORM_TOP
