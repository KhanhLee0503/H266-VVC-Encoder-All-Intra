//-----------------------------------------------------------
// Description:
// The TU scheduler tags the final Intra Prediction stream with
// independent internal TU IDs for Y, Cb, and Cr while preserving
// the source CTU/CU IDs. A metadata FIFO provides a separate
// sideband path for the future VVC CABAC subsystem.
//
// Supported baseline:
//   - Single-tree, YUV 4:2:0, one logical VVC TU per leaf CU.
//   - Three component jobs per leaf CU, in Y -> Cb -> Cr order.
//   - Four 10-bit prediction samples per accepted input beat.
//   - Luma dimensions 8/16/32; chroma dimensions 4/8/16.
//   - All ready/valid payloads remain stable during stall.
//   - ID retirement is in allocation order and is signaled only
//     after BOTH the reconstruction and CABAC paths are done.
//
// A component's internal TU_ID is not a VVC syntax element.
// The bitstream controller groups jobs using CTU_ID and CU_ID.
//
// I_CLEAR_ERROR flushes ALL internal state, so the external
// coordinator must flush or reset its downstream pipelines too.
//-----------------------------------------------------------
`timescale 1ns/1ps

module ENCODER_TU_SCHEDULER #(
  parameter PARA_TU_ID_WD           = 16,
  parameter PARA_CTU_ID_WD          = 9,
  parameter PARA_CU_ID_WD           = 8,
  parameter PARA_COORD_WD           = 7,
  parameter PARA_MODE_WD            = 8,
  parameter PARA_PIXEL_WD           = 10,
  parameter PARA_META_FIFO_DEPTH    = 8,
  parameter PARA_MAX_OUTSTANDING    = 16,
  localparam PARA_DATA_WD           = 4 * PARA_PIXEL_WD,
  localparam PARA_META_PTR_WD       = (PARA_META_FIFO_DEPTH <= 2) ? 1 : $clog2(PARA_META_FIFO_DEPTH),
  localparam PARA_META_COUNT_WD     = $clog2(PARA_META_FIFO_DEPTH + 1),
  localparam PARA_ISSUE_PTR_WD      = (PARA_MAX_OUTSTANDING <= 2) ? 1 : $clog2(PARA_MAX_OUTSTANDING),
  localparam PARA_ISSUE_COUNT_WD    = $clog2(PARA_MAX_OUTSTANDING + 1),
  localparam PARA_META_WD           = PARA_TU_ID_WD + PARA_CTU_ID_WD + PARA_CU_ID_WD +
                                    2 + 2*PARA_COORD_WD + 4 + PARA_MODE_WD
)(
  input                                     I_CLK,
  input                                     I_RESETN,
  input                                     I_CLEAR_ERROR,

  // Final selected prediction stream from INTRA_PREDICTION_ENGINE.
  input                                     I_PRED_VALID,
  output logic                              O_PRED_READY,
  input [PARA_DATA_WD-1:0]                  I_PRED_DATA,
  input [3:0]                               I_PRED_LANE_VALID,
  input [4:0]                               I_PRED_X_BASE,
  input [4:0]                               I_PRED_Y,
  input                                     I_PRED_ROW_LAST,
  input                                     I_PRED_LAST,
  input [1:0]                               I_PRED_COMPONENT_ID,
  input [PARA_MODE_WD-1:0]                  I_PRED_MODE,
  input [PARA_CTU_ID_WD-1:0]                I_PRED_CTU_ID,
  input [PARA_CU_ID_WD-1:0]                 I_PRED_CU_ID,
  input [PARA_COORD_WD-1:0]                 I_PRED_CU_X,
  input [PARA_COORD_WD-1:0]                 I_PRED_CU_Y,
  input [2:0]                               I_PRED_WIDTH_CODE,
  input [2:0]                               I_PRED_HEIGHT_CODE,

  // Registered stream for the Residual Generator.
  output logic                              O_DATA_VALID,
  input                                     I_DATA_READY,
  output logic [PARA_DATA_WD-1:0]           O_DATA,
  output logic [3:0]                        O_LANE_VALID,
  output logic [4:0]                        O_X_BASE,
  output logic [4:0]                        O_Y,
  output logic                              O_ROW_LAST,
  output logic                              O_TU_START,
  output logic                              O_TU_LAST,
  output logic [PARA_TU_ID_WD-1:0]          O_TU_ID,
  output logic [1:0]                        O_COMPONENT_ID,
  output logic [PARA_CTU_ID_WD-1:0]         O_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]          O_CU_ID,
  output logic [PARA_COORD_WD-1:0]          O_CU_X,
  output logic [PARA_COORD_WD-1:0]          O_CU_Y,
  output logic [1:0]                        O_TU_WIDTH_SIZE,
  output logic [1:0]                        O_TU_HEIGHT_SIZE,
  output logic [PARA_MODE_WD-1:0]           O_INTRA_MODE,

  // One metadata packet per accepted component start.
  output logic                              O_META_VALID,
  input                                     I_META_READY,
  output logic [PARA_TU_ID_WD-1:0]          O_META_TU_ID,
  output logic [PARA_CTU_ID_WD-1:0]         O_META_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]          O_META_CU_ID,
  output logic [1:0]                        O_META_COMPONENT_ID,
  output logic [PARA_COORD_WD-1:0]          O_META_CU_X,
  output logic [PARA_COORD_WD-1:0]          O_META_CU_Y,
  output logic [1:0]                        O_META_WIDTH_SIZE,
  output logic [1:0]                        O_META_HEIGHT_SIZE,
  output logic [PARA_MODE_WD-1:0]           O_META_INTRA_MODE,

  // The coordinator releases each TU ID in allocation order after
  // all users (including CABAC and Reconstruction) have retired it.
  input                                     I_RELEASE_VALID,
  output logic                              O_RELEASE_READY,
  input [PARA_TU_ID_WD-1:0]                 I_RELEASE_TU_ID,

  // Status signals are intended for integration/debug.
  output logic                              O_BUSY,
  output logic                              O_ERROR,
  output logic [PARA_META_COUNT_WD-1:0]     O_META_COUNT,
  output logic [PARA_ISSUE_COUNT_WD-1:0]    O_OUTSTANDING_COUNT
);

localparam [1:0] PARA_COMPONENT_Y  = 2'd0;
localparam [1:0] PARA_COMPONENT_CB = 2'd1;
localparam [1:0] PARA_COMPONENT_CR = 2'd2;

typedef enum logic [2:0] {
  ST_WAIT_Y,
  ST_STREAM_Y,
  ST_WAIT_CB,
  ST_STREAM_CB,
  ST_WAIT_CR,
  ST_STREAM_CR,
  ST_ERROR
} state_t;

state_t r_current_state;
state_t w_next_state;

// State decoding and per-component geometry.
logic w_first_beat;
logic [1:0] w_expected_component;
logic w_input_fire;
logic w_good_fire;
logic w_output_slot;
logic w_geometry_ok;
logic w_sequence_ok;
logic w_beat_ok;
logic w_input_ok;
logic w_meta_pop;
logic w_meta_push;
logic w_issue_push;
logic w_issue_pop;
logic w_resources_ok;
logic [8:0] w_width_samples;
logic [8:0] w_height_samples;
logic w_row_last_expected;
logic w_last_expected;
logic [4:0] r_beat_col;
logic [4:0] r_beat_row;
logic [4:0] w_beat_x_base;

// Current component and parent Leaf-CU context.
logic [PARA_CTU_ID_WD-1:0] r_parent_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_parent_cu_id;
logic [PARA_COORD_WD-1:0] r_parent_cu_x;
logic [PARA_COORD_WD-1:0] r_parent_cu_y;
logic [2:0] r_parent_width_code;
logic [2:0] r_parent_height_code;
logic [PARA_CTU_ID_WD-1:0] r_current_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_current_cu_id;
logic [PARA_COORD_WD-1:0] r_current_cu_x;
logic [PARA_COORD_WD-1:0] r_current_cu_y;
logic [2:0] r_current_width_code;
logic [2:0] r_current_height_code;
logic [PARA_MODE_WD-1:0] r_current_mode;
logic [PARA_TU_ID_WD-1:0] r_next_tu_id;
logic [PARA_TU_ID_WD-1:0] r_active_tu_id;

// Single registered output beat. This register isolates backpressure
// from the Intra output and holds both data and metadata together.
logic r_out_valid;
logic [PARA_DATA_WD-1:0] r_out_data;
logic [3:0] r_out_lane_valid;
logic [4:0] r_out_x_base;
logic [4:0] r_out_y;
logic r_out_row_last;
logic r_out_tu_start;
logic r_out_tu_last;
logic [PARA_TU_ID_WD-1:0] r_out_tu_id;
logic [1:0] r_out_component_id;
logic [PARA_CTU_ID_WD-1:0] r_out_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_out_cu_id;
logic [PARA_COORD_WD-1:0] r_out_cu_x;
logic [PARA_COORD_WD-1:0] r_out_cu_y;
logic [1:0] r_out_width_size;
logic [1:0] r_out_height_size;
logic [PARA_MODE_WD-1:0] r_out_mode;

// The metadata FIFO is only reset through its pointers/count.
// RAM contents are not reset to preserve BRAM inference options.
logic [PARA_META_WD-1:0] r_meta_memory [0:PARA_META_FIFO_DEPTH-1];
logic [PARA_META_PTR_WD-1:0] r_meta_wr_ptr;
logic [PARA_META_PTR_WD-1:0] r_meta_rd_ptr;
logic [PARA_META_COUNT_WD-1:0] r_meta_count;
logic [PARA_META_WD-1:0] w_new_metadata;

// The outstanding-ID FIFO prevents a wrapped 16-bit allocation
// counter from reusing an ID before the oldest ID is retired.
logic [PARA_TU_ID_WD-1:0] r_issue_memory [0:PARA_MAX_OUTSTANDING-1];
logic [PARA_ISSUE_PTR_WD-1:0] r_issue_wr_ptr;
logic [PARA_ISSUE_PTR_WD-1:0] r_issue_rd_ptr;
logic [PARA_ISSUE_COUNT_WD-1:0] r_issue_count;

// ------------------------------------------------------------
// FSM process 1: decode state-dependent controls.
// ------------------------------------------------------------
always_comb begin
  w_first_beat = 1'b0;
  w_expected_component = PARA_COMPONENT_Y;

  unique casez (r_current_state)
    ST_WAIT_Y: begin
      w_first_beat = 1'b1;
      w_expected_component = PARA_COMPONENT_Y;
    end
    ST_STREAM_Y: w_expected_component = PARA_COMPONENT_Y;
    ST_WAIT_CB: begin
      w_first_beat = 1'b1;
      w_expected_component = PARA_COMPONENT_CB;
    end
    ST_STREAM_CB: w_expected_component = PARA_COMPONENT_CB;
    ST_WAIT_CR: begin
      w_first_beat = 1'b1;
      w_expected_component = PARA_COMPONENT_CR;
    end
    ST_STREAM_CR: w_expected_component = PARA_COMPONENT_CR;
    ST_ERROR: w_expected_component = PARA_COMPONENT_Y;
    default: w_expected_component = PARA_COMPONENT_Y;
  endcase
end

// ------------------------------------------------------------
// Stream handshake and TU-context validation.
// ------------------------------------------------------------
assign w_output_slot = !r_out_valid || I_DATA_READY;
assign O_META_VALID = (r_meta_count != '0);
assign w_meta_pop = O_META_VALID && I_META_READY;
assign w_resources_ok = !w_first_beat ||
  (((r_meta_count < PARA_META_FIFO_DEPTH) || w_meta_pop) &&
   (r_issue_count < PARA_MAX_OUTSTANDING));

assign O_PRED_READY = (r_current_state != ST_ERROR) &&
  !I_CLEAR_ERROR && w_output_slot && w_resources_ok;
assign w_input_fire = I_PRED_VALID && O_PRED_READY;

assign w_width_samples  = 9'd1 << I_PRED_WIDTH_CODE;
assign w_height_samples = 9'd1 << I_PRED_HEIGHT_CODE;
assign w_beat_x_base = {r_beat_col[2:0], 2'b00};
assign w_row_last_expected = ({4'b0000, r_beat_col} == ((w_width_samples >> 2) - 9'd1));
assign w_last_expected = w_row_last_expected &&
  ({4'b0000, r_beat_row} == (w_height_samples - 9'd1));

always_comb begin
  w_geometry_ok = (I_PRED_LANE_VALID == 4'b1111) &&
    (I_PRED_WIDTH_CODE >= 3'd2) &&
    (I_PRED_WIDTH_CODE <= 3'd5) &&
    (I_PRED_HEIGHT_CODE >= 3'd2) &&
    (I_PRED_HEIGHT_CODE <= 3'd5) &&
    (I_PRED_X_BASE == w_beat_x_base) &&
    (I_PRED_Y == r_beat_row) &&
    (I_PRED_ROW_LAST == w_row_last_expected) &&
    (I_PRED_LAST == w_last_expected);

  // The baseline currently does not admit luma sizes smaller
  // than 8, so corresponding chroma sizes cannot be < 4.
  if (I_PRED_COMPONENT_ID == PARA_COMPONENT_Y) begin
    w_geometry_ok = w_geometry_ok &&
      (I_PRED_WIDTH_CODE >= 3'd3) &&
      (I_PRED_HEIGHT_CODE >= 3'd3) &&
      (({2'b00, I_PRED_CU_X} + w_width_samples) <= 9'd128) &&
      (({2'b00, I_PRED_CU_Y} + w_height_samples) <= 9'd128);
  end
  else begin
    w_geometry_ok = w_geometry_ok &&
      (I_PRED_WIDTH_CODE <= 3'd4) &&
      (I_PRED_HEIGHT_CODE <= 3'd4) &&
      (({2'b00, I_PRED_CU_X} + w_width_samples) <= 9'd64) &&
      (({2'b00, I_PRED_CU_Y} + w_height_samples) <= 9'd64);
  end
end

always_comb begin
  w_sequence_ok = I_PRED_COMPONENT_ID == w_expected_component;

  if (w_first_beat) begin
    if (r_current_state != ST_WAIT_Y) begin
      w_sequence_ok = w_sequence_ok &&
        (I_PRED_CTU_ID == r_parent_ctu_id) &&
        (I_PRED_CU_ID == r_parent_cu_id) &&
        (I_PRED_CU_X == (r_parent_cu_x >> 1)) &&
        (I_PRED_CU_Y == (r_parent_cu_y >> 1)) &&
        (I_PRED_WIDTH_CODE == (r_parent_width_code - 3'd1)) &&
        (I_PRED_HEIGHT_CODE == (r_parent_height_code - 3'd1));
    end
  end
  else begin
    w_sequence_ok = w_sequence_ok &&
      (I_PRED_CTU_ID == r_current_ctu_id) &&
      (I_PRED_CU_ID == r_current_cu_id) &&
      (I_PRED_CU_X == r_current_cu_x) &&
      (I_PRED_CU_Y == r_current_cu_y) &&
      (I_PRED_WIDTH_CODE == r_current_width_code) &&
      (I_PRED_HEIGHT_CODE == r_current_height_code) &&
      (I_PRED_MODE == r_current_mode);
  end
end

assign w_input_ok = w_geometry_ok && w_sequence_ok;
assign w_good_fire = w_input_fire && w_input_ok;
assign w_meta_push = w_good_fire && w_first_beat;
assign w_issue_push = w_meta_push;
assign O_RELEASE_READY = (r_issue_count != '0) &&
  (I_RELEASE_TU_ID == r_issue_memory[r_issue_rd_ptr]) && !I_CLEAR_ERROR;
assign w_issue_pop = I_RELEASE_VALID && O_RELEASE_READY;

// ------------------------------------------------------------
// FSM process 2: next state.
// ------------------------------------------------------------
always_comb begin
  w_next_state = r_current_state;

  if (w_input_fire) begin
    if (!w_input_ok)
      w_next_state = ST_ERROR;
    else begin
      unique casez (r_current_state)
        ST_WAIT_Y:    w_next_state = ST_STREAM_Y;
        ST_STREAM_Y:  if (I_PRED_LAST) w_next_state = ST_WAIT_CB;
        ST_WAIT_CB:   w_next_state = ST_STREAM_CB;
        ST_STREAM_CB: if (I_PRED_LAST) w_next_state = ST_WAIT_CR;
        ST_WAIT_CR:   w_next_state = ST_STREAM_CR;
        ST_STREAM_CR: if (I_PRED_LAST) w_next_state = ST_WAIT_Y;
        ST_ERROR:     w_next_state = ST_ERROR;
        default:      w_next_state = ST_ERROR;
      endcase
    end
  end
end

// ------------------------------------------------------------
// FSM process 3: state register and component progress.
// ------------------------------------------------------------
always_ff @(posedge I_CLK or negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_current_state <= ST_WAIT_Y;
    r_beat_col <= '0;
    r_beat_row <= '0;
    r_parent_ctu_id <= '0;
    r_parent_cu_id <= '0;
    r_parent_cu_x <= '0;
    r_parent_cu_y <= '0;
    r_parent_width_code <= '0;
    r_parent_height_code <= '0;
    r_current_ctu_id <= '0;
    r_current_cu_id <= '0;
    r_current_cu_x <= '0;
    r_current_cu_y <= '0;
    r_current_width_code <= '0;
    r_current_height_code <= '0;
    r_current_mode <= '0;
    r_next_tu_id <= '0;
    r_active_tu_id <= '0;
  end
  else if (I_CLEAR_ERROR) begin
    r_current_state <= ST_WAIT_Y;
    r_beat_col <= '0;
    r_beat_row <= '0;
    r_next_tu_id <= '0;
    r_active_tu_id <= '0;
  end
  else begin
    r_current_state <= w_next_state;

    if (w_good_fire) begin
      if (w_first_beat) begin
        r_active_tu_id <= r_next_tu_id;
        r_next_tu_id <= r_next_tu_id + {{(PARA_TU_ID_WD-1){1'b0}},1'b1};
        r_current_ctu_id <= I_PRED_CTU_ID;
        r_current_cu_id <= I_PRED_CU_ID;
        r_current_cu_x <= I_PRED_CU_X;
        r_current_cu_y <= I_PRED_CU_Y;
        r_current_width_code <= I_PRED_WIDTH_CODE;
        r_current_height_code <= I_PRED_HEIGHT_CODE;
        r_current_mode <= I_PRED_MODE;

        if (r_current_state == ST_WAIT_Y) begin
          r_parent_ctu_id <= I_PRED_CTU_ID;
          r_parent_cu_id <= I_PRED_CU_ID;
          r_parent_cu_x <= I_PRED_CU_X;
          r_parent_cu_y <= I_PRED_CU_Y;
          r_parent_width_code <= I_PRED_WIDTH_CODE;
          r_parent_height_code <= I_PRED_HEIGHT_CODE;
        end
      end

      if (I_PRED_LAST) begin
        r_beat_col <= '0;
        r_beat_row <= '0;
      end
      else if (I_PRED_ROW_LAST) begin
        r_beat_col <= '0;
        r_beat_row <= r_beat_row + 5'd1;
      end
      else
        r_beat_col <= r_beat_col + 5'd1;
    end
  end
end

// ------------------------------------------------------------
// A one-entry elastic register carries all prediction fields.
// ------------------------------------------------------------
always_ff @(posedge I_CLK or negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_out_valid <= 1'b0;
    r_out_data <= '0;
    r_out_lane_valid <= '0;
    r_out_x_base <= '0;
    r_out_y <= '0;
    r_out_row_last <= 1'b0;
    r_out_tu_start <= 1'b0;
    r_out_tu_last <= 1'b0;
    r_out_tu_id <= '0;
    r_out_component_id <= '0;
    r_out_ctu_id <= '0;
    r_out_cu_id <= '0;
    r_out_cu_x <= '0;
    r_out_cu_y <= '0;
    r_out_width_size <= '0;
    r_out_height_size <= '0;
    r_out_mode <= '0;
  end
  else if (I_CLEAR_ERROR)
    r_out_valid <= 1'b0;
  else if (w_output_slot) begin
    r_out_valid <= w_good_fire;
    if (w_good_fire) begin
      r_out_data <= I_PRED_DATA;
      r_out_lane_valid <= I_PRED_LANE_VALID;
      r_out_x_base <= I_PRED_X_BASE;
      r_out_y <= I_PRED_Y;
      r_out_row_last <= I_PRED_ROW_LAST;
      r_out_tu_start <= w_first_beat;
      r_out_tu_last <= I_PRED_LAST;
      r_out_tu_id <= w_first_beat ? r_next_tu_id : r_active_tu_id;
      r_out_component_id <= I_PRED_COMPONENT_ID;
      r_out_ctu_id <= I_PRED_CTU_ID;
      r_out_cu_id <= I_PRED_CU_ID;
      r_out_cu_x <= I_PRED_CU_X;
      r_out_cu_y <= I_PRED_CU_Y;
      r_out_width_size <= I_PRED_WIDTH_CODE[1:0] - 2'd2;
      r_out_height_size <= I_PRED_HEIGHT_CODE[1:0] - 2'd2;
      r_out_mode <= I_PRED_MODE;
    end
  end
end

assign O_DATA_VALID = r_out_valid;
assign O_DATA = r_out_data;
assign O_LANE_VALID = r_out_lane_valid;
assign O_X_BASE = r_out_x_base;
assign O_Y = r_out_y;
assign O_ROW_LAST = r_out_row_last;
assign O_TU_START = r_out_tu_start;
assign O_TU_LAST = r_out_tu_last;
assign O_TU_ID = r_out_tu_id;
assign O_COMPONENT_ID = r_out_component_id;
assign O_CTU_ID = r_out_ctu_id;
assign O_CU_ID = r_out_cu_id;
assign O_CU_X = r_out_cu_x;
assign O_CU_Y = r_out_cu_y;
assign O_TU_WIDTH_SIZE = r_out_width_size;
assign O_TU_HEIGHT_SIZE = r_out_height_size;
assign O_INTRA_MODE = r_out_mode;

// ------------------------------------------------------------
// Metadata FIFO and outstanding-ID FIFO.
// ------------------------------------------------------------
assign w_new_metadata = {
  r_next_tu_id, I_PRED_CTU_ID, I_PRED_CU_ID,
  I_PRED_COMPONENT_ID, I_PRED_CU_X, I_PRED_CU_Y,
  (I_PRED_WIDTH_CODE[1:0] - 2'd2),
  (I_PRED_HEIGHT_CODE[1:0] - 2'd2), I_PRED_MODE
};

assign {
  O_META_TU_ID, O_META_CTU_ID, O_META_CU_ID,
  O_META_COMPONENT_ID, O_META_CU_X, O_META_CU_Y,
  O_META_WIDTH_SIZE, O_META_HEIGHT_SIZE, O_META_INTRA_MODE
} = r_meta_memory[r_meta_rd_ptr];

always_ff @(posedge I_CLK or negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_meta_wr_ptr <= '0;
    r_meta_rd_ptr <= '0;
    r_meta_count <= '0;
  end
  else if (I_CLEAR_ERROR) begin
    r_meta_wr_ptr <= '0;
    r_meta_rd_ptr <= '0;
    r_meta_count <= '0;
  end
  else begin
    if (w_meta_push) begin
      r_meta_memory[r_meta_wr_ptr] <= w_new_metadata;
      if (r_meta_wr_ptr == PARA_META_FIFO_DEPTH-1)
        r_meta_wr_ptr <= '0;
      else
        r_meta_wr_ptr <= r_meta_wr_ptr + 1'b1;
    end
    if (w_meta_pop) begin
      if (r_meta_rd_ptr == PARA_META_FIFO_DEPTH-1)
        r_meta_rd_ptr <= '0;
      else
        r_meta_rd_ptr <= r_meta_rd_ptr + 1'b1;
    end

    unique casez ({w_meta_push, w_meta_pop})
      2'b10: r_meta_count <= r_meta_count + 1'b1;
      2'b01: r_meta_count <= r_meta_count - 1'b1;
      default: r_meta_count <= r_meta_count;
    endcase
  end
end

always_ff @(posedge I_CLK or negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_issue_wr_ptr <= '0;
    r_issue_rd_ptr <= '0;
    r_issue_count <= '0;
  end
  else if (I_CLEAR_ERROR) begin
    r_issue_wr_ptr <= '0;
    r_issue_rd_ptr <= '0;
    r_issue_count <= '0;
  end
  else begin
    if (w_issue_push) begin
      r_issue_memory[r_issue_wr_ptr] <= r_next_tu_id;
      if (r_issue_wr_ptr == PARA_MAX_OUTSTANDING-1)
        r_issue_wr_ptr <= '0;
      else
        r_issue_wr_ptr <= r_issue_wr_ptr + 1'b1;
    end
    if (w_issue_pop) begin
      if (r_issue_rd_ptr == PARA_MAX_OUTSTANDING-1)
        r_issue_rd_ptr <= '0;
      else
        r_issue_rd_ptr <= r_issue_rd_ptr + 1'b1;
    end

    unique casez ({w_issue_push, w_issue_pop})
      2'b10: r_issue_count <= r_issue_count + 1'b1;
      2'b01: r_issue_count <= r_issue_count - 1'b1;
      default: r_issue_count <= r_issue_count;
    endcase
  end
end

assign O_META_COUNT = r_meta_count;
assign O_OUTSTANDING_COUNT = r_issue_count;
assign O_ERROR = (r_current_state == ST_ERROR);
assign O_BUSY = (r_current_state != ST_WAIT_Y) ||
  r_out_valid || (r_meta_count != '0) || (r_issue_count != '0);

endmodule: ENCODER_TU_SCHEDULER
