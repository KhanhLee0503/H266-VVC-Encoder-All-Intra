//-----------------------------------------------------------
// Description: This module multicasts each accepted final prediction
// beat from ENCODER_TU_SCHEDULER to RESIDUAL_GENERATOR and
// FINAL_PREDICTION_BUFFER exactly once. One registered entry stores
// the prediction payload and TU metadata. Independent delivery flags
// prevent replay to a branch that already accepted a beat. The input
// may replace the held beat on the same clock edge that the final
// outstanding branch accepts the previous beat.
//
// I_FLUSH synchronously discards the pending beat. The upstream
// scheduler and both consumers must be flushed consistently.
// The outputs are invalid when the holding entry is empty.
//-----------------------------------------------------------
`timescale 1ns/1ps

module PREDICTION_STREAM_FORK #(
  parameter PARA_TU_ID_WD   = 16,
  parameter PARA_CTU_ID_WD  = 9,
  parameter PARA_CU_ID_WD   = 8,
  parameter PARA_COORD_WD   = 7,
  parameter PARA_MODE_WD    = 8,
  parameter PARA_PIXEL_WD   = 10,
  localparam PARA_DATA_WD   = 4 * PARA_PIXEL_WD
)(
  input                              I_CLK,
  input                              I_RESETN,
  input                              I_FLUSH,

  // Prediction beat from ENCODER_TU_SCHEDULER.
  input                              I_DATA_VALID,
  output logic                       O_DATA_READY,
  input [PARA_DATA_WD-1:0]           I_DATA,
  input [3:0]                        I_LANE_VALID,
  input [4:0]                        I_X_BASE,
  input [4:0]                        I_Y,
  input                              I_ROW_LAST,
  input                              I_TU_START,
  input                              I_TU_LAST,
  input [PARA_TU_ID_WD-1:0]          I_TU_ID,
  input [1:0]                        I_COMPONENT_ID,
  input [PARA_CTU_ID_WD-1:0]         I_CTU_ID,
  input [PARA_CU_ID_WD-1:0]          I_CU_ID,
  input [PARA_COORD_WD-1:0]          I_CU_X,
  input [PARA_COORD_WD-1:0]          I_CU_Y,
  input [1:0]                        I_TU_WIDTH_SIZE,
  input [1:0]                        I_TU_HEIGHT_SIZE,
  input [PARA_MODE_WD-1:0]           I_INTRA_MODE,

  // First consumer: RESIDUAL_GENERATOR.
  output logic                       O_RES_VALID,
  input                              I_RES_READY,
  output logic [PARA_DATA_WD-1:0]    O_RES_DATA,
  output logic [3:0]                 O_RES_LANE_VALID,
  output logic [4:0]                 O_RES_X_BASE,
  output logic [4:0]                 O_RES_Y,
  output logic                       O_RES_ROW_LAST,
  output logic                       O_RES_TU_START,
  output logic                       O_RES_TU_LAST,
  output logic [PARA_TU_ID_WD-1:0]   O_RES_TU_ID,
  output logic [1:0]                 O_RES_COMPONENT_ID,
  output logic [PARA_CTU_ID_WD-1:0]  O_RES_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]   O_RES_CU_ID,
  output logic [PARA_COORD_WD-1:0]   O_RES_CU_X,
  output logic [PARA_COORD_WD-1:0]   O_RES_CU_Y,
  output logic [1:0]                 O_RES_TU_WIDTH_SIZE,
  output logic [1:0]                 O_RES_TU_HEIGHT_SIZE,
  output logic [PARA_MODE_WD-1:0]    O_RES_INTRA_MODE,

  // Second consumer: FINAL_PREDICTION_BUFFER.
  output logic                       O_BUF_VALID,
  input                              I_BUF_READY,
  output logic [PARA_DATA_WD-1:0]    O_BUF_DATA,
  output logic [3:0]                 O_BUF_LANE_VALID,
  output logic [4:0]                 O_BUF_X_BASE,
  output logic [4:0]                 O_BUF_Y,
  output logic                       O_BUF_ROW_LAST,
  output logic                       O_BUF_TU_START,
  output logic                       O_BUF_TU_LAST,
  output logic [PARA_TU_ID_WD-1:0]   O_BUF_TU_ID,
  output logic [1:0]                 O_BUF_COMPONENT_ID,
  output logic [PARA_CTU_ID_WD-1:0]  O_BUF_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]   O_BUF_CU_ID,
  output logic [PARA_COORD_WD-1:0]   O_BUF_CU_X,
  output logic [PARA_COORD_WD-1:0]   O_BUF_CU_Y,
  output logic [1:0]                 O_BUF_TU_WIDTH_SIZE,
  output logic [1:0]                 O_BUF_TU_HEIGHT_SIZE,
  output logic [PARA_MODE_WD-1:0]    O_BUF_INTRA_MODE,

  output logic                       O_BUSY
);

logic                              r_valid;
logic                              r_res_sent;
logic                              r_buf_sent;
logic [PARA_DATA_WD-1:0]           r_data;
logic [3:0]                        r_lane_valid;
logic [4:0]                        r_x_base;
logic [4:0]                        r_y;
logic                              r_row_last;
logic                              r_tu_start;
logic                              r_tu_last;
logic [PARA_TU_ID_WD-1:0]          r_tu_id;
logic [1:0]                        r_component_id;
logic [PARA_CTU_ID_WD-1:0]         r_ctu_id;
logic [PARA_CU_ID_WD-1:0]          r_cu_id;
logic [PARA_COORD_WD-1:0]          r_cu_x;
logic [PARA_COORD_WD-1:0]          r_cu_y;
logic [1:0]                        r_tu_width_size;
logic [1:0]                        r_tu_height_size;
logic [PARA_MODE_WD-1:0]           r_intra_mode;

logic                              w_res_fire;
logic                              w_buf_fire;
logic                              w_input_fire;
logic                              w_res_delivered;
logic                              w_buf_delivered;
logic                              w_entry_done;

// A sent branch deasserts VALID even if READY remains asserted.
assign O_RES_VALID = r_valid && !r_res_sent && !I_FLUSH;
assign O_BUF_VALID = r_valid && !r_buf_sent && !I_FLUSH;
assign w_res_fire  = O_RES_VALID && I_RES_READY;
assign w_buf_fire  = O_BUF_VALID && I_BUF_READY;

// Account for acknowledgements that occur on the current edge.
assign w_res_delivered = r_res_sent || w_res_fire;
assign w_buf_delivered = r_buf_sent || w_buf_fire;
assign w_entry_done    = r_valid && w_res_delivered && w_buf_delivered;

// Allow one-cycle replacement when the held beat is fully delivered.
assign O_DATA_READY = !I_FLUSH && (!r_valid || w_entry_done);
assign w_input_fire = I_DATA_VALID && O_DATA_READY;
assign O_BUSY       = r_valid;

// Only control registers are reset. Payload is guarded by r_valid.
always_ff @(posedge I_CLK or negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_valid    <= 1'b0;
    r_res_sent <= 1'b0;
    r_buf_sent <= 1'b0;
  end
  else if (I_FLUSH) begin
    r_valid    <= 1'b0;
    r_res_sent <= 1'b0;
    r_buf_sent <= 1'b0;
  end
  else if (w_input_fire) begin
    // A fresh entry replaces an empty or fully delivered entry.
    r_valid    <= 1'b1;
    r_res_sent <= 1'b0;
    r_buf_sent <= 1'b0;
  end
  else if (w_entry_done) begin
    r_valid    <= 1'b0;
    r_res_sent <= 1'b0;
    r_buf_sent <= 1'b0;
  end
  else if (r_valid) begin
    if (w_res_fire)
      r_res_sent <= 1'b1;
    if (w_buf_fire)
      r_buf_sent <= 1'b1;
  end
end

// Prediction payload is captured only when input handshake succeeds.
always_ff @(posedge I_CLK) begin
  if (w_input_fire) begin
    r_data           <= I_DATA;
    r_lane_valid     <= I_LANE_VALID;
    r_x_base         <= I_X_BASE;
    r_y              <= I_Y;
    r_row_last       <= I_ROW_LAST;
    r_tu_start       <= I_TU_START;
    r_tu_last        <= I_TU_LAST;
    r_tu_id          <= I_TU_ID;
    r_component_id   <= I_COMPONENT_ID;
    r_ctu_id         <= I_CTU_ID;
    r_cu_id          <= I_CU_ID;
    r_cu_x           <= I_CU_X;
    r_cu_y           <= I_CU_Y;
    r_tu_width_size  <= I_TU_WIDTH_SIZE;
    r_tu_height_size <= I_TU_HEIGHT_SIZE;
    r_intra_mode     <= I_INTRA_MODE;
  end
end

// Both consumers see the same registered payload; only VALID differs.
assign O_RES_DATA           = r_data;
assign O_RES_LANE_VALID     = r_lane_valid;
assign O_RES_X_BASE         = r_x_base;
assign O_RES_Y              = r_y;
assign O_RES_ROW_LAST       = r_row_last;
assign O_RES_TU_START       = r_tu_start;
assign O_RES_TU_LAST        = r_tu_last;
assign O_RES_TU_ID          = r_tu_id;
assign O_RES_COMPONENT_ID   = r_component_id;
assign O_RES_CTU_ID         = r_ctu_id;
assign O_RES_CU_ID          = r_cu_id;
assign O_RES_CU_X           = r_cu_x;
assign O_RES_CU_Y           = r_cu_y;
assign O_RES_TU_WIDTH_SIZE  = r_tu_width_size;
assign O_RES_TU_HEIGHT_SIZE = r_tu_height_size;
assign O_RES_INTRA_MODE     = r_intra_mode;

assign O_BUF_DATA           = r_data;
assign O_BUF_LANE_VALID     = r_lane_valid;
assign O_BUF_X_BASE         = r_x_base;
assign O_BUF_Y              = r_y;
assign O_BUF_ROW_LAST       = r_row_last;
assign O_BUF_TU_START       = r_tu_start;
assign O_BUF_TU_LAST        = r_tu_last;
assign O_BUF_TU_ID          = r_tu_id;
assign O_BUF_COMPONENT_ID   = r_component_id;
assign O_BUF_CTU_ID         = r_ctu_id;
assign O_BUF_CU_ID          = r_cu_id;
assign O_BUF_CU_X           = r_cu_x;
assign O_BUF_CU_Y           = r_cu_y;
assign O_BUF_TU_WIDTH_SIZE  = r_tu_width_size;
assign O_BUF_TU_HEIGHT_SIZE = r_tu_height_size;
assign O_BUF_INTRA_MODE     = r_intra_mode;

endmodule: PREDICTION_STREAM_FORK
