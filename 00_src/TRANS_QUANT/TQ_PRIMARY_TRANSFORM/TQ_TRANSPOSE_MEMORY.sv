//-----------------------------------------------------------
// Description: This module implements a two-buffer transform
// transpose memory. Each independently controlled TU buffer
// contains four diagonal-banked RAMs. A writer accepts four
// row coefficients per beat; a reader emits four consecutive
// row coefficients from a column per beat. Each buffer owns
// independent EMPTY/WRITING/FULL/READING state and metadata.
// Completed TUs are read in write-allocation order. The RAM
// interface provides one synchronous read beat per clock when
// the downstream interface is ready, including backpressure.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_TRANSPOSE_MEMORY #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_TU_ID_WD = 16
)(
  input                                     I_CLK,
  input                                     I_RESETN,
  input        [4*PARA_DATA_WD-1:0]         I_WRITE_DATA,
  input                                     I_WRITE_VALID,
  output logic                              O_WRITE_READY,
  input                                     I_WRITE_TU_START,
  input        [1:0]                        I_WRITE_WIDTH_SIZE,
  input        [1:0]                        I_WRITE_HEIGHT_SIZE,
  input        [PARA_TU_ID_WD-1:0]          I_WRITE_TU_ID,
  input        [1:0]                        I_WRITE_ROW_MODE,
  input        [1:0]                        I_WRITE_COLUMN_MODE,
  output logic [4*PARA_DATA_WD-1:0]         O_READ_DATA,
  output logic                              O_READ_VALID,
  input                                     I_READ_READY,
  output logic                              O_READ_VECTOR_LAST,
  output logic                              O_READ_TU_START,
  output logic                              O_READ_TU_LAST,
  output logic [1:0]                        O_READ_WIDTH_SIZE,
  output logic [1:0]                        O_READ_HEIGHT_SIZE,
  output logic [PARA_TU_ID_WD-1:0]          O_READ_TU_ID,
  output logic [1:0]                        O_READ_ROW_MODE,
  output logic [1:0]                        O_READ_COLUMN_MODE,
  output logic [1:0]                        O_BUFFER_0_STATE,
  output logic [1:0]                        O_BUFFER_1_STATE
);
  localparam logic [1:0] PARA_EMPTY = 2'b00;
  localparam logic [1:0] PARA_WRITING = 2'b01;
  localparam logic [1:0] PARA_FULL = 2'b10;
  localparam logic [1:0] PARA_READING = 2'b11;

  // The two entries are separate physical banks and independent state.
  logic [1:0]                         r_buffer_state [0:1];
  logic [1:0]                         w_buffer_next_state [0:1];
  logic [1:0]                         r_buffer_width [0:1];
  logic [1:0]                         r_buffer_height [0:1];
  logic [PARA_TU_ID_WD-1:0]           r_buffer_id [0:1];
  logic [1:0]                         r_buffer_row_mode [0:1];
  logic [1:0]                         r_buffer_column_mode [0:1];
  logic [31:0]                        r_buffer_sequence [0:1];
  logic [31:0]                        r_next_write_sequence;
  logic [31:0]                        r_next_read_sequence;

  logic                               r_write_active;
  logic                               r_write_select;
  logic [4:0]                         r_write_row;
  logic [2:0]                         r_write_group;
  logic [1:0]                         r_write_width;
  logic [1:0]                         r_write_height;
  logic                               w_write_choose_valid;
  logic                               w_write_choose_select;
  logic                               w_write_fire;
  logic                               w_write_target;
  logic [4:0]                         w_write_row;
  logic [2:0]                         w_write_group;
  logic [1:0]                         w_write_width;
  logic [2:0]                         w_write_group_last;
  logic [4:0]                         w_write_row_last;
  logic                               w_write_end_row;
  logic                               w_write_end_tu;

  logic                               r_read_active;
  logic                               r_read_select;
  logic [4:0]                         r_read_column;
  logic [2:0]                         r_read_group;
  logic                               r_read_all_issued;
  logic                               w_read_choose_valid;
  logic                               w_read_choose_select;
  logic                               w_read_issue;
  logic                               w_read_fire;
  logic                               w_read_end_column;
  logic                               w_read_end_tu;
  logic [2:0]                         w_read_group_last;
  logic [4:0]                         w_read_column_last;

  // A RAM read is synchronous. The outstanding response lives in the
  // RAM data registers and is qualified by r_output_valid.
  logic                               r_output_valid;
  logic                               r_output_select;
  logic [1:0]                         r_output_column_mod4;
  logic                               r_output_tu_start;
  logic                               r_output_vector_last;
  logic                               r_output_tu_last;
  logic [4*PARA_DATA_WD-1:0]          w_bank_data_0;
  logic [4*PARA_DATA_WD-1:0]          w_bank_data_1;
  logic [4*PARA_DATA_WD-1:0]          w_selected_bank_data;

  assign O_BUFFER_0_STATE = r_buffer_state[0];
  assign O_BUFFER_1_STATE = r_buffer_state[1];

  // Select an EMPTY buffer; this never assumes both buffers swap together.
  always_comb begin
    w_write_choose_valid = 1'b0;
    w_write_choose_select = 1'b0;
    if (r_buffer_state[0] == PARA_EMPTY) begin
      w_write_choose_valid = 1'b1;
      w_write_choose_select = 1'b0;
    end else if (r_buffer_state[1] == PARA_EMPTY) begin
      w_write_choose_valid = 1'b1;
      w_write_choose_select = 1'b1;
    end
  end

  // During a TU, only data beats with TU_START low can be accepted.
  always_comb begin
    O_WRITE_READY = 1'b0;
    if (I_RESETN) begin
      if (r_write_active)
        O_WRITE_READY = !I_WRITE_TU_START;
      else
        O_WRITE_READY = I_WRITE_TU_START && w_write_choose_valid;
    end
  end
  assign w_write_fire = I_WRITE_VALID && O_WRITE_READY;
  assign w_write_target = r_write_active ? r_write_select : w_write_choose_select;
  assign w_write_row = r_write_active ? r_write_row : 5'd0;
  assign w_write_group = r_write_active ? r_write_group : 3'd0;
  assign w_write_width = r_write_active ? r_write_width : I_WRITE_WIDTH_SIZE;

  always_comb begin
    w_write_group_last = 3'd0;
    w_write_row_last = 5'd3;
    unique casez (w_write_width)
      2'b00: w_write_group_last = 3'd0;
      2'b01: w_write_group_last = 3'd1;
      2'b10: w_write_group_last = 3'd3;
      2'b11: w_write_group_last = 3'd7;
      default: w_write_group_last = 3'd0;
    endcase
    unique casez (r_write_active ? r_write_height : I_WRITE_HEIGHT_SIZE)
      2'b00: w_write_row_last = 5'd3;
      2'b01: w_write_row_last = 5'd7;
      2'b10: w_write_row_last = 5'd15;
      2'b11: w_write_row_last = 5'd31;
      default: w_write_row_last = 5'd3;
    endcase
  end
  assign w_write_end_row = (w_write_group == w_write_group_last);
  assign w_write_end_tu = w_write_end_row && (w_write_row == w_write_row_last);

  // The next FULL buffer must have the oldest unread sequence number.
  always_comb begin
    w_read_choose_valid = 1'b0;
    w_read_choose_select = 1'b0;
    if (r_buffer_state[0] == PARA_FULL && r_buffer_sequence[0] == r_next_read_sequence) begin
      w_read_choose_valid = 1'b1;
      w_read_choose_select = 1'b0;
    end else if (r_buffer_state[1] == PARA_FULL && r_buffer_sequence[1] == r_next_read_sequence) begin
      w_read_choose_valid = 1'b1;
      w_read_choose_select = 1'b1;
    end
  end

  always_comb begin
    w_read_group_last = 3'd0;
    w_read_column_last = 5'd3;
    unique casez (r_buffer_height[r_read_select])
      2'b00: w_read_group_last = 3'd0;
      2'b01: w_read_group_last = 3'd1;
      2'b10: w_read_group_last = 3'd3;
      2'b11: w_read_group_last = 3'd7;
      default: w_read_group_last = 3'd0;
    endcase
    unique casez (r_buffer_width[r_read_select])
      2'b00: w_read_column_last = 5'd3;
      2'b01: w_read_column_last = 5'd7;
      2'b10: w_read_column_last = 5'd15;
      2'b11: w_read_column_last = 5'd31;
      default: w_read_column_last = 5'd3;
    endcase
  end
  assign w_read_end_column = (r_read_group == w_read_group_last);
  assign w_read_end_tu = w_read_end_column && (r_read_column == w_read_column_last);
  assign w_read_issue = r_read_active && !r_read_all_issued && (!r_output_valid || I_READ_READY);
  assign w_read_fire = r_output_valid && I_READ_READY;

  TQ_TRANSPOSE_BUFFER #(
    .PARA_DATA_WD (PARA_DATA_WD)
  ) u_buffer_0 (
    .I_CLK              (I_CLK),
    .I_WRITE_EN         (w_write_fire && !w_write_target),
    .I_WRITE_WIDTH_SIZE (w_write_width),
    .I_WRITE_ROW        (w_write_row),
    .I_WRITE_GROUP      (w_write_group),
    .I_WRITE_DATA       (I_WRITE_DATA),
    .I_READ_EN          (w_read_issue && !r_read_select),
    .I_READ_WIDTH_SIZE  (r_buffer_width[0]),
    .I_READ_COLUMN      (r_read_column),
    .I_READ_GROUP       (r_read_group),
    .O_READ_BANK_DATA   (w_bank_data_0)
  );

  TQ_TRANSPOSE_BUFFER #(
    .PARA_DATA_WD (PARA_DATA_WD)
  ) u_buffer_1 (
    .I_CLK              (I_CLK),
    .I_WRITE_EN         (w_write_fire && w_write_target),
    .I_WRITE_WIDTH_SIZE (w_write_width),
    .I_WRITE_ROW        (w_write_row),
    .I_WRITE_GROUP      (w_write_group),
    .I_WRITE_DATA       (I_WRITE_DATA),
    .I_READ_EN          (w_read_issue && r_read_select),
    .I_READ_WIDTH_SIZE  (r_buffer_width[1]),
    .I_READ_COLUMN      (r_read_column),
    .I_READ_GROUP       (r_read_group),
    .O_READ_BANK_DATA   (w_bank_data_1)
  );

  // RAM output is physically bank ordered. Reassemble into column order.
  assign w_selected_bank_data = r_output_select ? w_bank_data_1 : w_bank_data_0;
  for (genvar lane = 0; lane < 4; lane++) begin: GEN_READ_LANE
    localparam logic [1:0] PARA_LANE_INDEX = lane;
    logic [1:0] w_bank_index;
    assign w_bank_index = r_output_column_mod4 + PARA_LANE_INDEX;
    assign O_READ_DATA[lane*PARA_DATA_WD +: PARA_DATA_WD] = w_selected_bank_data[w_bank_index*PARA_DATA_WD +: PARA_DATA_WD];
  end

  assign O_READ_VALID = r_output_valid;
  assign O_READ_TU_START = r_output_tu_start;
  assign O_READ_VECTOR_LAST = r_output_vector_last;
  assign O_READ_TU_LAST = r_output_tu_last;
  assign O_READ_WIDTH_SIZE = r_buffer_width[r_output_select];
  assign O_READ_HEIGHT_SIZE = r_buffer_height[r_output_select];
  assign O_READ_TU_ID = r_buffer_id[r_output_select];
  assign O_READ_ROW_MODE = r_buffer_row_mode[r_output_select];
  assign O_READ_COLUMN_MODE = r_buffer_column_mode[r_output_select];

  // Independent four-state FSM for each physical buffer.
  always_comb begin
    for (integer buffer_id = 0; buffer_id < 2; buffer_id = buffer_id + 1) begin
      w_buffer_next_state[buffer_id] = r_buffer_state[buffer_id];
      unique casez (r_buffer_state[buffer_id])
        PARA_EMPTY: begin
          if (w_write_fire && !r_write_active && (w_write_target == (buffer_id == 1)))
            w_buffer_next_state[buffer_id] = PARA_WRITING;
        end
        PARA_WRITING: begin
          if (w_write_fire && w_write_end_tu && (w_write_target == (buffer_id == 1)))
            w_buffer_next_state[buffer_id] = PARA_FULL;
        end
        PARA_FULL: begin
          if (!r_read_active && !r_output_valid && w_read_choose_valid && (w_read_choose_select == (buffer_id == 1)))
            w_buffer_next_state[buffer_id] = PARA_READING;
        end
        PARA_READING: begin
          if (w_read_fire && r_output_tu_last && (r_output_select == (buffer_id == 1)))
            w_buffer_next_state[buffer_id] = PARA_EMPTY;
        end
        default: w_buffer_next_state[buffer_id] = PARA_EMPTY;
      endcase
    end
  end

  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_buffer_state[0] <= PARA_EMPTY;
      r_buffer_state[1] <= PARA_EMPTY;
    end else begin
      r_buffer_state[0] <= w_buffer_next_state[0];
      r_buffer_state[1] <= w_buffer_next_state[1];
    end
  end

  // Independent state registers, transaction metadata and counters.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_buffer_width[0] <= '0;
      r_buffer_width[1] <= '0;
      r_buffer_height[0] <= '0;
      r_buffer_height[1] <= '0;
      r_buffer_id[0] <= '0;
      r_buffer_id[1] <= '0;
      r_buffer_row_mode[0] <= '0;
      r_buffer_row_mode[1] <= '0;
      r_buffer_column_mode[0] <= '0;
      r_buffer_column_mode[1] <= '0;
      r_buffer_sequence[0] <= '0;
      r_buffer_sequence[1] <= '0;
      r_next_write_sequence <= '0;
      r_next_read_sequence <= '0;
      r_write_active <= 1'b0;
      r_write_select <= 1'b0;
      r_write_row <= '0;
      r_write_group <= '0;
      r_write_width <= '0;
      r_write_height <= '0;
      r_read_active <= 1'b0;
      r_read_select <= 1'b0;
      r_read_column <= '0;
      r_read_group <= '0;
      r_read_all_issued <= 1'b0;
      r_output_valid <= 1'b0;
      r_output_select <= 1'b0;
      r_output_column_mod4 <= '0;
      r_output_tu_start <= 1'b0;
      r_output_vector_last <= 1'b0;
      r_output_tu_last <= 1'b0;
    end else begin
      // Allocate an EMPTY buffer on the first accepted beat only.
      if (w_write_fire) begin
        if (!r_write_active) begin
          r_write_active <= 1'b1;
          r_write_select <= w_write_target;
          r_write_width <= I_WRITE_WIDTH_SIZE;
          r_write_height <= I_WRITE_HEIGHT_SIZE;
          r_buffer_width[w_write_target] <= I_WRITE_WIDTH_SIZE;
          r_buffer_height[w_write_target] <= I_WRITE_HEIGHT_SIZE;
          r_buffer_id[w_write_target] <= I_WRITE_TU_ID;
          r_buffer_row_mode[w_write_target] <= I_WRITE_ROW_MODE;
          r_buffer_column_mode[w_write_target] <= I_WRITE_COLUMN_MODE;
          r_buffer_sequence[w_write_target] <= r_next_write_sequence;
          r_next_write_sequence <= r_next_write_sequence + 32'd1;
        end
        if (w_write_end_tu) begin
          r_write_active <= 1'b0;
          r_write_row <= 5'd0;
          r_write_group <= 3'd0;
        end else if (w_write_end_row) begin
          r_write_row <= w_write_row + 5'd1;
          r_write_group <= 3'd0;
        end else begin
          r_write_row <= w_write_row;
          r_write_group <= w_write_group + 3'd1;
        end
      end

      // Start the oldest FULL TU only when the read side is idle.
      if (!r_read_active && !r_output_valid && w_read_choose_valid) begin
        r_read_active <= 1'b1;
        r_read_select <= w_read_choose_select;
        r_read_column <= 5'd0;
        r_read_group <= 3'd0;
        r_read_all_issued <= 1'b0;
      end
      if (w_read_issue) begin
        r_output_valid <= 1'b1;
        r_output_select <= r_read_select;
        r_output_column_mod4 <= r_read_column[1:0];
        r_output_tu_start <= (r_read_column == 5'd0) && (r_read_group == 3'd0);
        r_output_vector_last <= w_read_end_column;
        r_output_tu_last <= w_read_end_tu;
        if (w_read_end_tu)
          r_read_all_issued <= 1'b1;
        else if (w_read_end_column) begin
          r_read_column <= r_read_column + 5'd1;
          r_read_group <= 3'd0;
        end else
          r_read_group <= r_read_group + 3'd1;
      end else if (w_read_fire)
        r_output_valid <= 1'b0;
      if (w_read_fire && r_output_tu_last) begin
        r_read_active <= 1'b0;
        r_next_read_sequence <= r_next_read_sequence + 32'd1;
      end
    end
  end
endmodule: TQ_TRANSPOSE_MEMORY
