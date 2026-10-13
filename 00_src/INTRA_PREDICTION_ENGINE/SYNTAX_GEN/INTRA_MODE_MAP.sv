//-----------------------------------------------------------
// Description: This module stores reconstructed luma intra mode decisions
// for 4x4 luma regions of a 128x128 CTU. It returns the left and above
// neighbour modes required by the H.266 luma MPM derivation process.
// The module accepts one Leaf CU at a time, performs two sequential
// memory reads, and commits its winner mode across the entire CU.
// The rightmost CTU column is retained for the next CTU on the same
// CTU row. Invalid neighbours are reported with PLANAR mode zero.
// The mode RAM and valid-column storage have no reset circuitry.
//-----------------------------------------------------------
`timescale 1ns/1ps
module INTRA_MODE_MAP
#(
  parameter PARA_CTU_ID_WD = 9,
  parameter PARA_CU_ID_WD  = 8,
  parameter PARA_MODE_WD   = 7,
  localparam PARA_GRID_WD  = 5,
  localparam PARA_GRID_SIZE = 32,
  localparam PARA_MAP_DEPTH = 1024,
  localparam PARA_MAP_ADDR_WD = 10
)
(
  input                               I_CLK,
  input                               I_RESETN,
  input                               I_CTU_START,
  input                               I_LEFT_CTU_AVAILABLE,
  input      [PARA_CTU_ID_WD-1:0]     I_CTU_ID,
  output logic                        O_CTU_READY,
  input                               I_CU_VALID,
  output logic                        O_CU_READY,
  input      [PARA_CU_ID_WD-1:0]      I_CU_ID,
  input      [PARA_GRID_WD-1:0]       I_CU_X_UNIT,
  input      [PARA_GRID_WD-1:0]       I_CU_Y_UNIT,
  input      [2:0]                    I_CU_WIDTH_CODE,
  input      [2:0]                    I_CU_HEIGHT_CODE,
  output logic                        O_NEIGHBOR_VALID,
  input                               I_NEIGHBOR_READY,
  output logic                        O_LEFT_VALID,
  output logic [PARA_MODE_WD-1:0]     O_LEFT_MODE,
  output logic                        O_ABOVE_VALID,
  output logic [PARA_MODE_WD-1:0]     O_ABOVE_MODE,
  input                               I_WINNER_VALID,
  output logic                        O_WINNER_READY,
  input      [PARA_CTU_ID_WD-1:0]     I_WINNER_CTU_ID,
  input      [PARA_CU_ID_WD-1:0]      I_WINNER_CU_ID,
  input      [PARA_MODE_WD-1:0]       I_WINNER_Y_MODE,
  output logic [PARA_CTU_ID_WD-1:0]   O_CURRENT_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]    O_CURRENT_CU_ID,
  output logic                        O_UPDATE_DONE,
  output logic                        O_BUSY,
  output logic                        O_ERROR,
  input                               I_CLEAR_ERROR
);

localparam [PARA_MODE_WD-1:0] PARA_PLANAR_MODE = '0;
localparam [PARA_MODE_WD-1:0] PARA_MAX_INTRA_MODE = PARA_MODE_WD'(66);

typedef enum logic [3:0] {
  ST_IDLE,
  ST_READ_LEFT,
  ST_READ_ABOVE,
  ST_CAPTURE_ABOVE,
  ST_REPORT,
  ST_WAIT_WINNER,
  ST_UPDATE,
  ST_DONE,
  ST_ERROR
} state_t;

state_t r_current_state;
state_t w_next_state;

logic [PARA_MODE_WD-1:0] r_mode_ram [0:PARA_MAP_DEPTH-1];
logic [PARA_MODE_WD-1:0] r_map_read_data;
logic [PARA_GRID_SIZE-1:0] r_valid_columns [0:PARA_GRID_SIZE-1];
logic [PARA_GRID_SIZE-1:0] r_row_active;
logic [PARA_MODE_WD-1:0] r_right_border_mode [0:PARA_GRID_SIZE-1];
logic [PARA_MODE_WD-1:0] r_left_border_mode [0:PARA_GRID_SIZE-1];
logic [PARA_GRID_SIZE-1:0] r_right_border_valid;
logic [PARA_GRID_SIZE-1:0] r_left_border_valid;
logic r_ctu_active;
logic r_left_ctu_available;
logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_cu_id;
logic [PARA_GRID_WD-1:0] r_cu_x_unit;
logic [PARA_GRID_WD-1:0] r_cu_y_unit;
logic [3:0] r_width_units;
logic [3:0] r_height_units;
logic [PARA_MODE_WD-1:0] r_winner_y_mode;
logic [2:0] r_update_x_offset;
logic [2:0] r_update_y_offset;
logic r_left_valid;
logic r_above_valid;
logic [PARA_MODE_WD-1:0] r_left_mode;
logic [PARA_MODE_WD-1:0] r_above_mode;
logic r_error;

logic w_ctu_fire;
logic w_cu_fire;
logic w_neighbor_fire;
logic w_winner_fire;
logic w_geometry_valid;
logic w_width_code_valid;
logic w_height_code_valid;
logic w_winner_valid;
logic [5:0] w_input_width_units;
logic [5:0] w_input_height_units;
logic [5:0] w_input_x_end;
logic [5:0] w_input_y_end;
logic [4:0] w_left_x_unit;
logic [5:0] w_left_y_unit;
logic [5:0] w_above_x_unit;
logic [4:0] w_above_y_unit;
logic [PARA_MAP_ADDR_WD-1:0] w_left_addr;
logic [PARA_MAP_ADDR_WD-1:0] w_above_addr;
logic [PARA_MAP_ADDR_WD-1:0] w_map_read_addr;
logic w_map_read_enable;
logic w_left_internal_valid;
logic w_left_border_available;
logic w_above_internal_valid;
logic [5:0] w_write_x_unit;
logic [5:0] w_write_y_unit;
logic [PARA_MAP_ADDR_WD-1:0] w_map_write_addr;
logic w_map_write_enable;
logic w_last_x;
logic w_last_y;
logic w_update_last;
logic [PARA_GRID_SIZE-1:0] w_write_column_mask;
logic [PARA_GRID_SIZE-1:0] w_next_valid_columns;

assign w_ctu_fire = I_CTU_START && O_CTU_READY;
assign w_cu_fire = I_CU_VALID && O_CU_READY;
assign w_neighbor_fire = O_NEIGHBOR_VALID && I_NEIGHBOR_READY;
assign w_winner_fire = I_WINNER_VALID && O_WINNER_READY;

assign w_input_width_units = 6'd1 << I_CU_WIDTH_CODE;
assign w_input_height_units = 6'd1 << I_CU_HEIGHT_CODE;
assign w_input_x_end = {1'b0, I_CU_X_UNIT} + w_input_width_units;
assign w_input_y_end = {1'b0, I_CU_Y_UNIT} + w_input_height_units;
assign w_width_code_valid = (I_CU_WIDTH_CODE >= 3'd1) && (I_CU_WIDTH_CODE <= 3'd3);
assign w_height_code_valid = (I_CU_HEIGHT_CODE >= 3'd1) && (I_CU_HEIGHT_CODE <= 3'd3);
assign w_geometry_valid = w_width_code_valid && w_height_code_valid && (w_input_x_end <= 6'd32) && (w_input_y_end <= 6'd32);
assign w_winner_valid = (I_WINNER_CTU_ID == r_ctu_id) && (I_WINNER_CU_ID == r_cu_id) && (I_WINNER_Y_MODE <= PARA_MAX_INTRA_MODE);

assign w_left_x_unit = r_cu_x_unit - 5'd1;
assign w_left_y_unit = {1'b0, r_cu_y_unit} + {2'b00, r_height_units} - 6'd1;
assign w_above_x_unit = {1'b0, r_cu_x_unit} + {2'b00, r_width_units} - 6'd1;
assign w_above_y_unit = r_cu_y_unit - 5'd1;
assign w_left_addr = {w_left_y_unit[4:0], w_left_x_unit};
assign w_above_addr = {w_above_y_unit, w_above_x_unit[4:0]};
assign w_map_read_enable = ((r_current_state == ST_READ_LEFT) && (r_cu_x_unit != 5'd0)) || ((r_current_state == ST_READ_ABOVE) && (r_cu_y_unit != 5'd0));
assign w_map_read_addr = (r_current_state == ST_READ_LEFT) ? w_left_addr : w_above_addr;
assign w_left_internal_valid = r_row_active[w_left_y_unit[4:0]] && r_valid_columns[w_left_y_unit[4:0]][w_left_x_unit];
assign w_left_border_available = r_left_ctu_available && r_left_border_valid[w_left_y_unit[4:0]];
assign w_above_internal_valid = r_row_active[w_above_y_unit] && r_valid_columns[w_above_y_unit][w_above_x_unit[4:0]];

assign w_write_x_unit = {1'b0, r_cu_x_unit} + {3'b000, r_update_x_offset};
assign w_write_y_unit = {1'b0, r_cu_y_unit} + {3'b000, r_update_y_offset};
assign w_map_write_addr = {w_write_y_unit[4:0], w_write_x_unit[4:0]};
assign w_map_write_enable = (r_current_state == ST_UPDATE);
assign w_last_x = {1'b0, r_update_x_offset} == (r_width_units - 4'd1);
assign w_last_y = {1'b0, r_update_y_offset} == (r_height_units - 4'd1);
assign w_update_last = w_last_x && w_last_y;
assign w_write_column_mask = 32'b1 << w_write_x_unit[4:0];
assign w_next_valid_columns = (r_row_active[w_write_y_unit[4:0]] ? r_valid_columns[w_write_y_unit[4:0]] : 32'b0) | w_write_column_mask;

assign O_LEFT_VALID = r_left_valid;
assign O_ABOVE_VALID = r_above_valid;
assign O_LEFT_MODE = r_left_mode;
assign O_ABOVE_MODE = r_above_mode;
assign O_CURRENT_CTU_ID = r_ctu_id;
assign O_CURRENT_CU_ID = r_cu_id;
assign O_ERROR = r_error;

// Process 1: Store the current FSM state.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

// Process 2: Determine the next FSM state.
always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (w_cu_fire) begin
        if (w_geometry_valid)
          w_next_state = ST_READ_LEFT;
        else
          w_next_state = ST_ERROR;
      end
    end

    ST_READ_LEFT: w_next_state = ST_READ_ABOVE;
    ST_READ_ABOVE: w_next_state = ST_CAPTURE_ABOVE;
    ST_CAPTURE_ABOVE: w_next_state = ST_REPORT;

    ST_REPORT: begin
      if (w_neighbor_fire)
        w_next_state = ST_WAIT_WINNER;
    end

    ST_WAIT_WINNER: begin
      if (w_winner_fire) begin
        if (w_winner_valid)
          w_next_state = ST_UPDATE;
        else
          w_next_state = ST_ERROR;
      end
    end

    ST_UPDATE: begin
      if (w_update_last)
        w_next_state = ST_DONE;
    end

    ST_DONE: w_next_state = ST_IDLE;

    ST_ERROR: begin
      if (I_CLEAR_ERROR)
        w_next_state = ST_IDLE;
    end

    default: w_next_state = ST_IDLE;
  endcase
end

// Process 3: Decode combinational control outputs.
always_comb begin
  O_CTU_READY = 1'b0;
  O_CU_READY = 1'b0;
  O_NEIGHBOR_VALID = 1'b0;
  O_WINNER_READY = 1'b0;
  O_UPDATE_DONE = 1'b0;
  O_BUSY = 1'b1;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_CTU_READY = !r_error;
      O_CU_READY = r_ctu_active && !r_error && !I_CTU_START;
      O_BUSY = 1'b0;
    end

    ST_REPORT: O_NEIGHBOR_VALID = 1'b1;
    ST_WAIT_WINNER: O_WINNER_READY = !r_error;
    ST_DONE: O_UPDATE_DONE = 1'b1;

    default: begin
    end
  endcase
end

// The mode array has one synchronous read port and one write port.
// All writes happen after neighbour reads have completed.
always_ff @ (posedge I_CLK) begin
  if (w_map_read_enable)
    r_map_read_data <= r_mode_ram[w_map_read_addr];

  if (w_map_write_enable)
    r_mode_ram[w_map_write_addr] <= r_winner_y_mode;
end

// A row-active bitmap invalidates all 1024 map entries in one cycle.
// Column-valid words have no reset; the first update overwrites stale bits.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_row_active <= '0;
  else if (w_ctu_fire)
    r_row_active <= '0;
  else if (w_map_write_enable)
    r_row_active[w_write_y_unit[4:0]] <= 1'b1;
end

always_ff @ (posedge I_CLK) begin
  if (w_map_write_enable)
    r_valid_columns[w_write_y_unit[4:0]] <= w_next_valid_columns;
end

// At CTU_START, the completed right border becomes the next left border.
// I_LEFT_CTU_AVAILABLE must be false at picture, tile and slice borders.
always_ff @ (posedge I_CLK) begin
  if (w_ctu_fire) begin
    for (int i = 0; i < PARA_GRID_SIZE; i = i + 1)
      r_left_border_mode[i] <= r_right_border_mode[i];
  end

  if (w_map_write_enable && (w_write_x_unit == 6'd31))
    r_right_border_mode[w_write_y_unit[4:0]] <= r_winner_y_mode;
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_right_border_valid <= '0;
    r_left_border_valid <= '0;
    r_left_ctu_available <= 1'b0;
    r_ctu_active <= 1'b0;
  end
  else if (w_ctu_fire) begin
    r_right_border_valid <= '0;
    r_left_border_valid <= I_LEFT_CTU_AVAILABLE ? r_right_border_valid : '0;
    r_left_ctu_available <= I_LEFT_CTU_AVAILABLE;
    r_ctu_active <= 1'b1;
  end
  else if (w_map_write_enable && (w_write_x_unit == 6'd31))
    r_right_border_valid[w_write_y_unit[4:0]] <= 1'b1;
end

// The accepted Leaf CU and the winner mode remain stable while processing.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_ctu_id <= '0;
    r_cu_id <= '0;
    r_cu_x_unit <= '0;
    r_cu_y_unit <= '0;
    r_width_units <= '0;
    r_height_units <= '0;
    r_update_x_offset <= '0;
    r_update_y_offset <= '0;
    r_error <= 1'b0;
  end
  else begin
    if (w_ctu_fire)
      r_ctu_id <= I_CTU_ID;

    if (w_cu_fire) begin
      r_cu_id <= I_CU_ID;
      r_cu_x_unit <= I_CU_X_UNIT;
      r_cu_y_unit <= I_CU_Y_UNIT;
      r_width_units <= w_input_width_units[3:0];
      r_height_units <= w_input_height_units[3:0];
    end

    if (w_winner_fire && w_winner_valid) begin
      r_update_x_offset <= '0;
      r_update_y_offset <= '0;
    end
    else if (w_map_write_enable && !w_update_last) begin
      if (w_last_x) begin
        r_update_x_offset <= '0;
        r_update_y_offset <= r_update_y_offset + 3'd1;
      end
      else
        r_update_x_offset <= r_update_x_offset + 3'd1;
    end

    if (w_cu_fire && !w_geometry_valid)
      r_error <= 1'b1;
    else if (w_winner_fire && !w_winner_valid)
      r_error <= 1'b1;
    else if (I_CLEAR_ERROR && (r_current_state == ST_ERROR))
      r_error <= 1'b0;
  end
end

always_ff @ (posedge I_CLK) begin
  if (w_winner_fire && w_winner_valid)
    r_winner_y_mode <= I_WINNER_Y_MODE;
end

// Neighbour results are stored before asserting O_NEIGHBOR_VALID.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_left_valid <= 1'b0;
    r_above_valid <= 1'b0;
    r_left_mode <= PARA_PLANAR_MODE;
    r_above_mode <= PARA_PLANAR_MODE;
  end
  else begin
    if (r_current_state == ST_READ_ABOVE) begin
      if (r_cu_x_unit == 5'd0) begin
        r_left_valid <= w_left_border_available;
        r_left_mode <= w_left_border_available ? r_left_border_mode[w_left_y_unit[4:0]] : PARA_PLANAR_MODE;
      end
      else begin
        r_left_valid <= w_left_internal_valid;
        r_left_mode <= w_left_internal_valid ? r_map_read_data : PARA_PLANAR_MODE;
      end
    end

    if (r_current_state == ST_CAPTURE_ABOVE) begin
      r_above_valid <= (r_cu_y_unit != 5'd0) && w_above_internal_valid;
      r_above_mode <= ((r_cu_y_unit != 5'd0) && w_above_internal_valid) ? r_map_read_data : PARA_PLANAR_MODE;
    end
  end
end

endmodule: INTRA_MODE_MAP
