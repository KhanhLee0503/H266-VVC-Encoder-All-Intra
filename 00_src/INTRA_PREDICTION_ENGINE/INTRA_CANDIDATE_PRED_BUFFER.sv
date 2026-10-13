//-----------------------------------------------------------
// Description: This module stores the final intra prediction results of four candidates after PDPC.
// Each candidate owns one independent prediction bank. The write path uses one shared write counter
// because candidates are written sequentially. After all four banks are valid, the selected winner
// bank is read in raster order through a two-stage elastic output pipeline.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_CANDIDATE_PRED_BUFFER #(
  parameter PARA_PIXEL_WD        = 10,
  parameter PARA_PIXELS_PER_BEAT = 4,
  parameter PARA_MAX_TU_WD       = 32,
  parameter PARA_MAX_TU_HT       = 32
)
(
  input                                                   I_CLK,
  input                                                   I_RESETN,

  input                                                   I_TU_START,
  input [2:0]                                             I_WIDTH_CODE,
  input [2:0]                                             I_HEIGHT_CODE,

  input                                                   I_WR_VALID,
  output logic                                            O_WR_READY,
  input [1:0]                                             I_WR_CANDIDATE_ID,
  input [(PARA_PIXEL_WD*PARA_PIXELS_PER_BEAT)-1:0]        I_WR_PRED_DATA,
  input                                                   I_WR_LAST,

  output logic [3:0]                                      O_BANK_VALID,
  output logic                                            O_CANDIDATE_DONE,
  output logic [1:0]                                      O_CANDIDATE_DONE_ID,
  output logic                                            O_ALL_CANDIDATES_READY,

  input                                                   I_RD_START,
  input [1:0]                                             I_WINNER_ID,
  output logic                                            O_RD_BUSY,
  output logic                                            O_RD_DONE,

  output logic                                            O_RD_VALID,
  input                                                   I_RD_READY,
  output logic [(PARA_PIXEL_WD*PARA_PIXELS_PER_BEAT)-1:0] O_RD_PRED_DATA,
  output logic [4:0]                                      O_RD_X_BASE,
  output logic [4:0]                                      O_RD_Y,
  output logic                                            O_RD_ROW_LAST,
  output logic                                            O_RD_LAST
);

localparam PARA_CANDIDATE_NUM = 4;
localparam PARA_DATA_WD = PARA_PIXEL_WD * PARA_PIXELS_PER_BEAT;
localparam PARA_MAX_SAMPLES = PARA_MAX_TU_WD * PARA_MAX_TU_HT;
localparam PARA_BANK_DEPTH = PARA_MAX_SAMPLES / PARA_PIXELS_PER_BEAT;
localparam PARA_ADDR_WD = (PARA_BANK_DEPTH <= 1) ? 1 : $clog2(PARA_BANK_DEPTH);
localparam PARA_COORD_WD = 5;

typedef enum logic [2:0] {
  ST_IDLE,
  ST_WRITE,
  ST_WAIT_WINNER,
  ST_READ,
  ST_DONE
} state_t;

state_t r_current_state;
state_t w_next_state;

logic [PARA_DATA_WD-1:0] r_bank_0 [0:PARA_BANK_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_bank_1 [0:PARA_BANK_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_bank_2 [0:PARA_BANK_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_bank_3 [0:PARA_BANK_DEPTH-1];

logic [5:0] w_tu_width;
logic [5:0] w_tu_height;
logic w_width_valid;
logic w_height_valid;
logic w_size_valid;
logic w_tu_start_accept;

logic [5:0] r_tu_width;
logic [5:0] r_tu_height;

logic [PARA_ADDR_WD-1:0] r_write_addr;
logic [1:0] r_write_candidate_id;
logic [1:0] w_write_candidate_id;
logic w_write_fire;
logic w_candidate_complete;

logic [PARA_CANDIDATE_NUM-1:0] r_bank_valid;
logic [PARA_CANDIDATE_NUM-1:0] w_bank_valid_next;
logic w_all_banks_ready_next;

logic r_candidate_done;
logic [1:0] r_candidate_done_id;

logic [1:0] r_winner_id;
logic w_read_start_accept;

logic [PARA_ADDR_WD-1:0] r_read_addr;
logic [PARA_COORD_WD-1:0] r_read_x_base;
logic [PARA_COORD_WD-1:0] r_read_y;
logic r_all_reads_issued;
logic w_read_row_last_issue;
logic w_read_last_issue;
logic w_read_issue;

logic r_stage1_valid;
logic [PARA_DATA_WD-1:0] r_stage1_data;
logic [PARA_COORD_WD-1:0] r_stage1_x_base;
logic [PARA_COORD_WD-1:0] r_stage1_y;
logic r_stage1_row_last;
logic r_stage1_last;
logic w_stage1_ready;

logic r_stage2_valid;
logic [PARA_DATA_WD-1:0] r_stage2_data;
logic [PARA_COORD_WD-1:0] r_stage2_x_base;
logic [PARA_COORD_WD-1:0] r_stage2_y;
logic r_stage2_row_last;
logic r_stage2_last;
logic w_stage2_ready;
logic w_read_last_accept;

always_comb begin
  w_tu_width = '0;
  w_width_valid = 1'b1;

  unique casez (I_WIDTH_CODE)
    3'd2: w_tu_width = 6'd4;
    3'd3: w_tu_width = 6'd8;
    3'd4: w_tu_width = 6'd16;
    3'd5: w_tu_width = 6'd32;
    default: begin
      w_tu_width = '0;
      w_width_valid = 1'b0;
    end
  endcase
end

always_comb begin
  w_tu_height = '0;
  w_height_valid = 1'b1;

  unique casez (I_HEIGHT_CODE)
    3'd2: w_tu_height = 6'd4;
    3'd3: w_tu_height = 6'd8;
    3'd4: w_tu_height = 6'd16;
    3'd5: w_tu_height = 6'd32;
    default: begin
      w_tu_height = '0;
      w_height_valid = 1'b0;
    end
  endcase
end

assign w_size_valid = w_width_valid && w_height_valid;
assign w_tu_start_accept = (r_current_state == ST_IDLE) && I_TU_START && w_size_valid;

assign w_write_fire = I_WR_VALID && O_WR_READY;
assign w_write_candidate_id = (r_write_addr == '0) ? I_WR_CANDIDATE_ID : r_write_candidate_id;
assign w_candidate_complete = w_write_fire && I_WR_LAST;

always_comb begin
  w_bank_valid_next = r_bank_valid;

  if (w_candidate_complete)
    w_bank_valid_next[w_write_candidate_id] = 1'b1;
end

assign w_all_banks_ready_next = &w_bank_valid_next;
assign w_read_start_accept = (r_current_state == ST_WAIT_WINNER) && I_RD_START && r_bank_valid[I_WINNER_ID];

assign w_stage2_ready = !r_stage2_valid || I_RD_READY;
assign w_stage1_ready = !r_stage1_valid || w_stage2_ready;
assign w_read_row_last_issue = ({1'b0, r_read_x_base} + 6'(PARA_PIXELS_PER_BEAT)) >= r_tu_width;
assign w_read_last_issue = w_read_row_last_issue && (({1'b0, r_read_y} + 6'd1) >= r_tu_height);
assign w_read_issue = (r_current_state == ST_READ) && w_stage1_ready && !r_all_reads_issued;
assign w_read_last_accept = r_stage2_valid && I_RD_READY && r_stage2_last;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (I_TU_START && w_size_valid)
        w_next_state = ST_WRITE;
    end

    ST_WRITE: begin
      if (w_all_banks_ready_next)
        w_next_state = ST_WAIT_WINNER;
    end

    ST_WAIT_WINNER: begin
      if (I_RD_START && r_bank_valid[I_WINNER_ID])
        w_next_state = ST_READ;
    end

    ST_READ: begin
      if (w_read_last_accept)
        w_next_state = ST_DONE;
    end

    ST_DONE: w_next_state = ST_IDLE;

    default: w_next_state = ST_IDLE;
  endcase
end

always_comb begin
  O_WR_READY = 1'b0;
  O_RD_BUSY = 1'b0;
  O_RD_DONE = 1'b0;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_WR_READY = 1'b0;
      O_RD_BUSY = 1'b0;
      O_RD_DONE = 1'b0;
    end

    ST_WRITE: O_WR_READY = 1'b1;
    ST_WAIT_WINNER: O_WR_READY = 1'b0;
    ST_READ: O_RD_BUSY = 1'b1;
    ST_DONE: O_RD_DONE = 1'b1;

    default: begin
      O_WR_READY = 1'b0;
      O_RD_BUSY = 1'b0;
      O_RD_DONE = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_tu_width <= '0;
    r_tu_height <= '0;
  end
  else if (w_tu_start_accept) begin
    r_tu_width <= w_tu_width;
    r_tu_height <= w_tu_height;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_write_addr <= '0;
    r_write_candidate_id <= '0;
  end
  else if (w_tu_start_accept) begin
    r_write_addr <= '0;
    r_write_candidate_id <= '0;
  end
  else if (w_write_fire) begin
    if (r_write_addr == '0)
      r_write_candidate_id <= I_WR_CANDIDATE_ID;

    if (I_WR_LAST)
      r_write_addr <= '0;
    else
      r_write_addr <= r_write_addr + PARA_ADDR_WD'(1);
  end
end

always_ff @ (posedge I_CLK) begin
  if (w_write_fire) begin
    unique casez (w_write_candidate_id)
      2'd0: r_bank_0[r_write_addr] <= I_WR_PRED_DATA;
      2'd1: r_bank_1[r_write_addr] <= I_WR_PRED_DATA;
      2'd2: r_bank_2[r_write_addr] <= I_WR_PRED_DATA;
      2'd3: r_bank_3[r_write_addr] <= I_WR_PRED_DATA;
      default: begin end
    endcase
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_bank_valid <= '0;
  else if (w_tu_start_accept)
    r_bank_valid <= '0;
  else if (w_candidate_complete)
    r_bank_valid[w_write_candidate_id] <= 1'b1;
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_candidate_done <= 1'b0;
    r_candidate_done_id <= '0;
  end
  else begin
    r_candidate_done <= w_candidate_complete;

    if (w_candidate_complete)
      r_candidate_done_id <= w_write_candidate_id;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_winner_id <= '0;
  else if (w_read_start_accept)
    r_winner_id <= I_WINNER_ID;
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_read_addr <= '0;
    r_read_x_base <= '0;
    r_read_y <= '0;
    r_all_reads_issued <= 1'b0;
  end
  else if (w_read_start_accept) begin
    r_read_addr <= '0;
    r_read_x_base <= '0;
    r_read_y <= '0;
    r_all_reads_issued <= 1'b0;
  end
  else if (w_read_issue) begin
    if (w_read_last_issue)
      r_all_reads_issued <= 1'b1;
    else begin
      r_read_addr <= r_read_addr + PARA_ADDR_WD'(1);

      if (w_read_row_last_issue) begin
        r_read_x_base <= '0;
        r_read_y <= r_read_y + PARA_COORD_WD'(1);
      end
      else
        r_read_x_base <= r_read_x_base + PARA_COORD_WD'(PARA_PIXELS_PER_BEAT);
    end
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage1_valid <= 1'b0;
  else if (w_tu_start_accept)
    r_stage1_valid <= 1'b0;
  else if (w_stage1_ready)
    r_stage1_valid <= w_read_issue;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage1_ready && w_read_issue) begin
    unique casez (r_winner_id)
      2'd0: r_stage1_data    <= r_bank_0[r_read_addr];
      2'd1: r_stage1_data    <= r_bank_1[r_read_addr];
      2'd2: r_stage1_data    <= r_bank_2[r_read_addr];
      2'd3: r_stage1_data    <= r_bank_3[r_read_addr];
      default: r_stage1_data <= '0;
    endcase

    r_stage1_x_base   <= r_read_x_base;
    r_stage1_y        <= r_read_y;
    r_stage1_row_last <= w_read_row_last_issue;
    r_stage1_last     <= w_read_last_issue;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage2_valid <= 1'b0;
  else if (w_tu_start_accept)
    r_stage2_valid <= 1'b0;
  else if (w_stage2_ready)
    r_stage2_valid <= r_stage1_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage2_ready && r_stage1_valid) begin
    r_stage2_data     <= r_stage1_data;
    r_stage2_x_base   <= r_stage1_x_base;
    r_stage2_y        <= r_stage1_y;
    r_stage2_row_last <= r_stage1_row_last;
    r_stage2_last     <= r_stage1_last;
  end
end

assign O_BANK_VALID           = r_bank_valid;
assign O_CANDIDATE_DONE       = r_candidate_done;
assign O_CANDIDATE_DONE_ID    = r_candidate_done_id;
assign O_ALL_CANDIDATES_READY = &r_bank_valid;

assign O_RD_VALID     = r_stage2_valid;
assign O_RD_PRED_DATA = r_stage2_data;
assign O_RD_X_BASE    = r_stage2_x_base;
assign O_RD_Y         = r_stage2_y;
assign O_RD_ROW_LAST  = r_stage2_row_last;
assign O_RD_LAST      = r_stage2_last;

endmodule: INTRA_CANDIDATE_PRED_BUFFER
