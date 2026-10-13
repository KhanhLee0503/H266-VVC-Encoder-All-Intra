//-----------------------------------------------------------
// Description: This module schedules a separable forward 2D
// transform using separate row and column unified 1D cores.
// The row path is Row Transform -> Row Scaling -> dual-buffer
// Transpose Memory, and the column path is Column Transform
// -> Column Scaling. Only one TU occupies the row scheduler
// and one TU occupies the column scheduler at a time. Both
// schedulers run concurrently on different TUs. The memory
// owns two independently controlled four-bank TU buffers.
// First accepted input beat carries TU_START and metadata.
// Output is COLUMN MAJOR: one transformed column vector
// followed by the next; TU_START/TU_LAST mark the whole TU.
// No clipping is inserted at either scaling stage. Sticky
// overflow status warns if the configured output width loses
// significant bits, in which case bit exactness is not met.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_2D_TRANSFORM_CONTROLLER #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_TU_ID_WD = 16,
  localparam PARA_RESULT_WD = PARA_DATA_WD + 12
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
  localparam logic [1:0] PARA_MODE_DCT2 = 2'b00;
  localparam logic [1:0] PARA_MODE_DST7 = 2'b01;
  localparam logic [1:0] PARA_MODE_DCT8 = 2'b10;

  typedef enum logic [1:0] {
    ST_ROW_IDLE,
    ST_ROW_INPUT,
    ST_ROW_DRAIN
  } row_state_t;

  row_state_t r_row_state;
  row_state_t w_row_next_state;
  logic [1:0]                          r_row_width;
  logic [1:0]                          r_row_height;
  logic [1:0]                          r_row_mode;
  logic [1:0]                          r_row_column_mode;
  logic [PARA_TU_ID_WD-1:0]            r_row_tu_id;
  logic [8:0]                          r_row_input_count;
  logic [8:0]                          r_row_write_count;
  logic [8:0]                          w_row_total_beats;
  logic [8:0]                          w_row_write_total_beats;
  logic [2:0]                          w_row_size_sum;
  logic [2:0]                          w_row_write_size_sum;
  logic                                w_row_first_valid;
  logic                                w_row_input_enable;
  logic                                w_row_in_fire;
  logic                                w_row_write_fire;
  logic                                w_row_in_final;
  logic                                w_row_write_final;
  logic [1:0]                          w_row_input_size;
  logic [1:0]                          w_row_input_mode;
  logic                                w_row_core_in_ready;
  logic                                w_row_core_in_valid;
  logic [4*PARA_RESULT_WD-1:0]        w_row_core_out_data;
  logic                                w_row_core_out_valid;
  logic                                w_row_core_out_ready;
  logic                                w_row_core_out_last;
  logic [4*PARA_DATA_WD-1:0]          w_row_scaled_data;
  logic                                w_row_scaled_valid;
  logic                                w_row_scaled_ready;
  logic                                w_row_scaled_last;
  logic [3:0]                          w_row_overflow;

  logic                                w_memory_write_ready;
  logic [4*PARA_DATA_WD-1:0]          w_memory_read_data;
  logic                                w_memory_read_valid;
  logic                                w_memory_read_ready;
  logic                                w_memory_read_vector_last;
  logic                                w_memory_read_tu_start;
  logic                                w_memory_read_tu_last;
  logic [1:0]                          w_memory_read_width;
  logic [1:0]                          w_memory_read_height;
  logic [1:0]                          w_memory_read_row_mode;
  logic [1:0]                          w_memory_read_column_mode;
  logic [PARA_TU_ID_WD-1:0]            w_memory_read_tu_id;

  logic                                r_column_active;
  logic                                r_column_input_done;
  logic [1:0]                          r_column_width;
  logic [1:0]                          r_column_height;
  logic [1:0]                          r_column_row_mode;
  logic [1:0]                          r_column_mode;
  logic [PARA_TU_ID_WD-1:0]            r_column_tu_id;
  logic [4:0]                          r_column_output_index;
  logic [2:0]                          r_column_output_beat;
  logic [4:0]                          w_column_last_index;
  logic                                w_column_input_enable;
  logic                                w_column_input_fire;
  logic                                w_column_output_fire;
  logic                                w_column_output_final;
  logic [1:0]                          w_column_input_size;
  logic [1:0]                          w_column_input_mode;
  logic                                w_column_core_in_ready;
  logic                                w_column_core_in_valid;
  logic [4*PARA_RESULT_WD-1:0]        w_column_core_out_data;
  logic                                w_column_core_out_valid;
  logic                                w_column_core_out_ready;
  logic                                w_column_core_out_last;
  logic [4*PARA_DATA_WD-1:0]          w_column_scaled_data;
  logic                                w_column_scaled_valid;
  logic                                w_column_scaled_last;
  logic [3:0]                          w_column_overflow;

  // A TU configuration is sampled on its first accepted input beat.
  // No other new TU can start before all of the row coefficients of
  // this TU have been committed to the transpose memory.
  assign w_row_first_valid = I_TU_START &&
      (I_ROW_TRANSFORM_MODE != 2'b11) &&
      (I_COLUMN_TRANSFORM_MODE != 2'b11);
  assign w_row_input_enable = (r_row_state == ST_ROW_IDLE) ?
      w_row_first_valid : ((r_row_state == ST_ROW_INPUT) && !I_TU_START);
  assign w_row_input_size = (r_row_state == ST_ROW_IDLE) ? I_TU_WIDTH_SIZE : r_row_width;
  assign w_row_input_mode = (r_row_state == ST_ROW_IDLE) ? I_ROW_TRANSFORM_MODE : r_row_mode;
  assign w_row_core_in_valid = I_DATA_VALID && w_row_input_enable;
  assign I_DATA_READY = I_RESETN && w_row_input_enable && w_row_core_in_ready;
  assign w_row_in_fire = I_DATA_VALID && I_DATA_READY;

  // Width and height are log2(N)-2 codes. Thus the total TU
  // input (and output) beats equal 4 << (width_code + height_code).
  assign w_row_size_sum = {1'b0, r_row_width} + {1'b0, r_row_height};
  assign w_row_write_size_sum = w_row_size_sum;
  assign w_row_total_beats = 9'd4 << w_row_size_sum;
  assign w_row_write_total_beats = 9'd4 << w_row_write_size_sum;
  assign w_row_in_final = w_row_in_fire &&
      (r_row_input_count == (w_row_total_beats - 9'd1));
  assign w_row_write_fire = w_row_scaled_valid && w_memory_write_ready;
  assign w_row_write_final = w_row_write_fire &&
      (r_row_write_count == (w_row_write_total_beats - 9'd1));

  TQ_UNIFIED_1D_TRANSFORM_ENGINE #(
    .PARA_DATA_WD(PARA_DATA_WD)
  ) u_row_transform (
    .I_CLK           (I_CLK),
    .I_RESETN        (I_RESETN),
    .I_TRANSFORM_MODE(w_row_input_mode),
    .I_TRANSFORM_SIZE(w_row_input_size),
    .I_DATA          (I_DATA),
    .I_DATA_VALID    (w_row_core_in_valid),
    .I_DATA_READY    (w_row_core_in_ready),
    .O_DATA          (w_row_core_out_data),
    .O_DATA_VALID    (w_row_core_out_valid),
    .O_DATA_READY    (w_row_core_out_ready),
    .O_DATA_LAST     (w_row_core_out_last)
  );

  TQ_ROW_SCALING #(
    .PARA_INPUT_WD(PARA_RESULT_WD),
    .PARA_OUTPUT_WD(PARA_DATA_WD)
  ) u_row_scaling (
    .I_CLK           (I_CLK),
    .I_RESETN        (I_RESETN),
    .I_TRANSFORM_SIZE(r_row_width),
    .I_DATA          (w_row_core_out_data),
    .I_DATA_VALID    (w_row_core_out_valid),
    .I_DATA_READY    (w_row_core_out_ready),
    .I_DATA_LAST     (w_row_core_out_last),
    .O_DATA          (w_row_scaled_data),
    .O_DATA_VALID    (w_row_scaled_valid),
    .O_DATA_READY    (w_row_scaled_ready),
    .O_DATA_LAST     (w_row_scaled_last),
    .O_OVERFLOW      (w_row_overflow)
  );
  assign w_row_scaled_ready = w_memory_write_ready;

  TQ_TRANSPOSE_MEMORY #(
    .PARA_DATA_WD (PARA_DATA_WD),
    .PARA_TU_ID_WD(PARA_TU_ID_WD)
  ) u_transpose_memory (
    .I_CLK                   (I_CLK),
    .I_RESETN                (I_RESETN),
    .I_WRITE_DATA            (w_row_scaled_data),
    .I_WRITE_VALID           (w_row_scaled_valid),
    .O_WRITE_READY           (w_memory_write_ready),
    .I_WRITE_TU_START        (r_row_write_count == 9'd0),
    .I_WRITE_WIDTH_SIZE      (r_row_width),
    .I_WRITE_HEIGHT_SIZE     (r_row_height),
    .I_WRITE_TU_ID           (r_row_tu_id),
    .I_WRITE_ROW_MODE        (r_row_mode),
    .I_WRITE_COLUMN_MODE     (r_row_column_mode),
    .O_READ_DATA             (w_memory_read_data),
    .O_READ_VALID            (w_memory_read_valid),
    .I_READ_READY            (w_memory_read_ready),
    .O_READ_VECTOR_LAST      (w_memory_read_vector_last),
    .O_READ_TU_START         (w_memory_read_tu_start),
    .O_READ_TU_LAST          (w_memory_read_tu_last),
    .O_READ_WIDTH_SIZE       (w_memory_read_width),
    .O_READ_HEIGHT_SIZE      (w_memory_read_height),
    .O_READ_TU_ID            (w_memory_read_tu_id),
    .O_READ_ROW_MODE         (w_memory_read_row_mode),
    .O_READ_COLUMN_MODE      (w_memory_read_column_mode),
    .O_BUFFER_0_STATE        (O_BUFFER_0_STATE),
    .O_BUFFER_1_STATE        (O_BUFFER_1_STATE)
  );

  // The first beat of a column TU uses live memory metadata;
  // all subsequent beats use the latched column TU metadata.
  // Do not accept a new TU while the prior TU still has a
  // column-transform output pending, even if its RAM is free.
  assign w_column_input_size = r_column_active ? r_column_height : w_memory_read_height;
  assign w_column_input_mode = r_column_active ? r_column_mode : w_memory_read_column_mode;
  assign w_column_input_enable = (!r_column_active && w_memory_read_tu_start) ||
      (r_column_active && !r_column_input_done && !w_memory_read_tu_start);
  assign w_column_core_in_valid = w_memory_read_valid && w_column_input_enable;
  assign w_memory_read_ready = I_RESETN && w_column_input_enable && w_column_core_in_ready;
  assign w_column_input_fire = w_memory_read_valid && w_memory_read_ready;

  TQ_UNIFIED_1D_TRANSFORM_ENGINE #(
    .PARA_DATA_WD(PARA_DATA_WD)
  ) u_column_transform (
    .I_CLK           (I_CLK),
    .I_RESETN        (I_RESETN),
    .I_TRANSFORM_MODE(w_column_input_mode),
    .I_TRANSFORM_SIZE(w_column_input_size),
    .I_DATA          (w_memory_read_data),
    .I_DATA_VALID    (w_column_core_in_valid),
    .I_DATA_READY    (w_column_core_in_ready),
    .O_DATA          (w_column_core_out_data),
    .O_DATA_VALID    (w_column_core_out_valid),
    .O_DATA_READY    (w_column_core_out_ready),
    .O_DATA_LAST     (w_column_core_out_last)
  );

  TQ_COLUMN_SCALING #(
    .PARA_INPUT_WD (PARA_RESULT_WD),
    .PARA_OUTPUT_WD(PARA_DATA_WD)
  ) u_column_scaling (
    .I_CLK           (I_CLK),
    .I_RESETN        (I_RESETN),
    .I_TRANSFORM_SIZE(r_column_height),
    .I_DATA          (w_column_core_out_data),
    .I_DATA_VALID    (w_column_core_out_valid),
    .I_DATA_READY    (w_column_core_out_ready),
    .I_DATA_LAST     (w_column_core_out_last),
    .O_DATA          (w_column_scaled_data),
    .O_DATA_VALID    (w_column_scaled_valid),
    .O_DATA_READY    (O_DATA_READY),
    .O_DATA_LAST     (w_column_scaled_last),
    .O_OVERFLOW      (w_column_overflow)
  );

  assign O_DATA = w_column_scaled_data;
  assign O_DATA_VALID = w_column_scaled_valid;
  assign O_DATA_LAST = w_column_scaled_last;
  assign O_COLUMN_OVERFLOW = w_column_overflow;
  assign O_TU_WIDTH_SIZE = r_column_width;
  assign O_TU_HEIGHT_SIZE = r_column_height;
  assign O_ROW_TRANSFORM_MODE = r_column_row_mode;
  assign O_COLUMN_TRANSFORM_MODE = r_column_mode;
  assign O_TU_ID = r_column_tu_id;

  assign w_column_output_fire = O_DATA_VALID && O_DATA_READY;
  always_comb begin
    w_column_last_index = 5'd3;
    unique casez (r_column_width)
      2'b00: w_column_last_index = 5'd3;
      2'b01: w_column_last_index = 5'd7;
      2'b10: w_column_last_index = 5'd15;
      2'b11: w_column_last_index = 5'd31;
      default: w_column_last_index = 5'd3;
    endcase
  end
  assign w_column_output_final = w_column_output_fire && w_column_scaled_last &&
      (r_column_output_index == w_column_last_index);
  assign O_TU_START = O_DATA_VALID && r_column_active &&
      (r_column_output_index == 5'd0) && (r_column_output_beat == 3'd0);
  assign O_TU_LAST = O_DATA_VALID && w_column_scaled_last &&
      (r_column_output_index == w_column_last_index);

  // Row FSM: keep TU metadata until its final row-scaled beat
  // has been stored, not merely until its final input beat.
  always_comb begin
    w_row_next_state = r_row_state;
    unique casez (r_row_state)
      ST_ROW_IDLE: begin
        if (w_row_in_fire)
          w_row_next_state = ST_ROW_INPUT;
      end
      ST_ROW_INPUT: begin
        if (w_row_in_final)
          w_row_next_state = ST_ROW_DRAIN;
      end
      ST_ROW_DRAIN: begin
        if (w_row_write_final)
          w_row_next_state = ST_ROW_IDLE;
      end
      default: w_row_next_state = ST_ROW_IDLE;
    endcase
  end

  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_row_state <= ST_ROW_IDLE;
      r_row_width <= 2'b00;
      r_row_height <= 2'b00;
      r_row_mode <= PARA_MODE_DCT2;
      r_row_column_mode <= PARA_MODE_DCT2;
      r_row_tu_id <= '0;
      r_row_input_count <= 9'd0;
      r_row_write_count <= 9'd0;
      r_column_active <= 1'b0;
      r_column_input_done <= 1'b0;
      r_column_width <= 2'b00;
      r_column_height <= 2'b00;
      r_column_row_mode <= PARA_MODE_DCT2;
      r_column_mode <= PARA_MODE_DCT2;
      r_column_tu_id <= '0;
      r_column_output_index <= 5'd0;
      r_column_output_beat <= 3'd0;
      O_ROW_OVERFLOW_STICKY <= 1'b0;
      O_COLUMN_OVERFLOW_STICKY <= 1'b0;
    end else begin
      r_row_state <= w_row_next_state;
      if ((r_row_state == ST_ROW_IDLE) && w_row_in_fire) begin
        r_row_width <= I_TU_WIDTH_SIZE;
        r_row_height <= I_TU_HEIGHT_SIZE;
        r_row_mode <= I_ROW_TRANSFORM_MODE;
        r_row_column_mode <= I_COLUMN_TRANSFORM_MODE;
        r_row_tu_id <= I_TU_ID;
        r_row_input_count <= 9'd1;
        r_row_write_count <= 9'd0;
      end else if ((r_row_state == ST_ROW_INPUT) && w_row_in_fire)
        r_row_input_count <= r_row_input_count + 9'd1;

      if (w_row_write_fire) begin
        if (|w_row_overflow)
          O_ROW_OVERFLOW_STICKY <= 1'b1;
        if (w_row_write_final)
          r_row_write_count <= 9'd0;
        else
          r_row_write_count <= r_row_write_count + 9'd1;
      end

      // Latch column TU configuration before its first input
      // beat is accepted by the column 1D engine.
      if (!r_column_active && w_column_input_fire) begin
        r_column_active <= 1'b1;
        r_column_input_done <= 1'b0;
        r_column_width <= w_memory_read_width;
        r_column_height <= w_memory_read_height;
        r_column_row_mode <= w_memory_read_row_mode;
        r_column_mode <= w_memory_read_column_mode;
        r_column_tu_id <= w_memory_read_tu_id;
        r_column_output_index <= 5'd0;
        r_column_output_beat <= 3'd0;
      end
      if (w_column_input_fire && w_memory_read_tu_last)
        r_column_input_done <= 1'b1;

      if (w_column_output_fire) begin
        if (|w_column_overflow)
          O_COLUMN_OVERFLOW_STICKY <= 1'b1;
        if (w_column_scaled_last) begin
          r_column_output_index <= r_column_output_index + 5'd1;
          r_column_output_beat <= 3'd0;
        end else
          r_column_output_beat <= r_column_output_beat + 3'd1;
      end
      if (w_column_output_final) begin
        r_column_active <= 1'b0;
        r_column_input_done <= 1'b0;
        r_column_output_index <= 5'd0;
        r_column_output_beat <= 3'd0;
      end
    end
  end
endmodule: TQ_2D_TRANSFORM_CONTROLLER
