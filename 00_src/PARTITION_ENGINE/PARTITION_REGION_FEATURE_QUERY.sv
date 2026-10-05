//-----------------------------------------------------------
// Description: This module scans the two partition feature banks
// over the rectangular region of the current coding-tree node and
// accumulates SUM, SUM_SQ, and four directional-variation values.
// Exactly one feature-bank read request is issued per clock cycle.
// Even tile_x coordinates are read from bank A and odd tile_x
// coordinates are read from bank B. Both feature banks use a
// synchronous one-cycle read interface.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_REGION_FEATURE_QUERY
#(
  parameter PARA_FEATURE_DATA_WD = 96,
  parameter PARA_BANK_ADDR_WD    = 9,
  parameter PARA_SUM_WD          = 24,
  parameter PARA_SUM_SQ_WD       = 34,
  parameter PARA_DV_WD           = 23
)
(
  input                                 I_CLK,
  input                                 I_RESETN,

  input                                 I_START,
  input      [4:0]                      I_X_UNIT,
  input      [4:0]                      I_Y_UNIT,
  input      [7:0]                      I_WIDTH,
  input      [7:0]                      I_HEIGHT,

  output logic                          O_BANK_A_RD_EN,
  output logic [PARA_BANK_ADDR_WD-1:0]  O_BANK_A_RD_ADDR,
  input                                 I_BANK_A_RD_VALID,
  input      [PARA_FEATURE_DATA_WD-1:0] I_BANK_A_RD_DATA,

  output logic                          O_BANK_B_RD_EN,
  output logic [PARA_BANK_ADDR_WD-1:0]  O_BANK_B_RD_ADDR,
  input                                 I_BANK_B_RD_VALID,
  input      [PARA_FEATURE_DATA_WD-1:0] I_BANK_B_RD_DATA,

  output logic                          O_BUSY,
  output logic                          O_DONE,

  output logic [PARA_SUM_WD-1:0]        O_SUM,
  output logic [PARA_SUM_SQ_WD-1:0]     O_SUM_SQ,
  output logic [PARA_DV_WD-1:0]         O_DV_H,
  output logic [PARA_DV_WD-1:0]         O_DV_V,
  output logic [PARA_DV_WD-1:0]         O_DV_DL,
  output logic [PARA_DV_WD-1:0]         O_DV_DR
);

typedef enum logic [1:0] {
  ST_IDLE,
  ST_QUERY,
  ST_DONE
} state_t;

state_t r_current_state;
state_t w_next_state;

logic [4:0] r_tile_x_start;
logic [4:0] r_tile_x;
logic [4:0] r_tile_x_end;
logic [4:0] r_tile_y;
logic [4:0] r_tile_y_end;

logic       r_issue_done;
logic       r_last_request_delay;

logic [PARA_SUM_WD-1:0]    r_sum_acc;
logic [PARA_SUM_SQ_WD-1:0] r_sum_sq_acc;
logic [PARA_DV_WD-1:0]     r_dv_h_acc;
logic [PARA_DV_WD-1:0]     r_dv_v_acc;
logic [PARA_DV_WD-1:0]     r_dv_dl_acc;
logic [PARA_DV_WD-1:0]     r_dv_dr_acc;

logic [5:0] w_input_tile_width;
logic [5:0] w_input_tile_height;
logic [5:0] w_input_tile_x_end;
logic [5:0] w_input_tile_y_end;

logic       w_issue;
logic       w_last_issue;
logic       w_bank_select;
logic [PARA_BANK_ADDR_WD-1:0] w_bank_addr;

logic                          w_response_valid;
logic [PARA_FEATURE_DATA_WD-1:0] w_response_data;

logic [13:0] w_feature_sum;
logic [23:0] w_feature_sum_sq;
logic [12:0] w_feature_dv_h;
logic [12:0] w_feature_dv_v;
logic [12:0] w_feature_dv_dl;
logic [12:0] w_feature_dv_dr;

logic [PARA_SUM_WD-1:0]    w_feature_sum_ext;
logic [PARA_SUM_SQ_WD-1:0] w_feature_sum_sq_ext;
logic [PARA_DV_WD-1:0]     w_feature_dv_h_ext;
logic [PARA_DV_WD-1:0]     w_feature_dv_v_ext;
logic [PARA_DV_WD-1:0]     w_feature_dv_dl_ext;
logic [PARA_DV_WD-1:0]     w_feature_dv_dr_ext;

// Node dimensions are multiples of four luma samples. Therefore,
// division by four is implemented by wiring rather than arithmetic.
assign w_input_tile_width  = I_WIDTH[7:2];
assign w_input_tile_height = I_HEIGHT[7:2];

assign w_input_tile_x_end =
  {1'b0, I_X_UNIT} + w_input_tile_width - 6'd1;

assign w_input_tile_y_end =
  {1'b0, I_Y_UNIT} + w_input_tile_height - 6'd1;

// One request is generated every cycle until the last tile of the
// rectangular region has been issued.
assign w_issue =
  (r_current_state == ST_QUERY) &&
  !r_issue_done;

assign w_last_issue =
  (r_tile_x == r_tile_x_end) &&
  (r_tile_y == r_tile_y_end);

// Feature bank selection follows tile_x parity. Each bank stores
// sixteen tile entries per tile row. The bank address is:
// tile_y * 16 + floor(tile_x / 2).
assign w_bank_select = r_tile_x[0];
assign w_bank_addr   = {r_tile_y, r_tile_x[4:1]};

// Only one bank is enabled for each tile request.
always_comb begin
  O_BANK_A_RD_EN   = 1'b0;
  O_BANK_A_RD_ADDR = w_bank_addr;
  O_BANK_B_RD_EN   = 1'b0;
  O_BANK_B_RD_ADDR = w_bank_addr;

  if (w_issue) begin
    if (!w_bank_select)
      O_BANK_A_RD_EN = 1'b1;
    else
      O_BANK_B_RD_EN = 1'b1;
  end
end

// A single request is issued per cycle, so at most one bank read
// response is expected in each response cycle.
assign w_response_valid =
  I_BANK_A_RD_VALID ||
  I_BANK_B_RD_VALID;

assign w_response_data =
  I_BANK_A_RD_VALID ?
  I_BANK_A_RD_DATA :
  I_BANK_B_RD_DATA;

// The feature entry layout matches PARTITION_FEATURE_EXTRACTOR.
assign w_feature_sum    = w_response_data[89:76];
assign w_feature_sum_sq = w_response_data[75:52];
assign w_feature_dv_h   = w_response_data[51:39];
assign w_feature_dv_v   = w_response_data[38:26];
assign w_feature_dv_dl  = w_response_data[25:13];
assign w_feature_dv_dr  = w_response_data[12:0];

// Explicit zero extension preserves the complete accumulated range
// for a maximum 128x128 node containing 1024 feature tiles.
assign w_feature_sum_ext =
  {{(PARA_SUM_WD-14){1'b0}}, w_feature_sum};

assign w_feature_sum_sq_ext =
  {{(PARA_SUM_SQ_WD-24){1'b0}}, w_feature_sum_sq};

assign w_feature_dv_h_ext =
  {{(PARA_DV_WD-13){1'b0}}, w_feature_dv_h};

assign w_feature_dv_v_ext =
  {{(PARA_DV_WD-13){1'b0}}, w_feature_dv_v};

assign w_feature_dv_dl_ext =
  {{(PARA_DV_WD-13){1'b0}}, w_feature_dv_dl};

assign w_feature_dv_dr_ext =
  {{(PARA_DV_WD-13){1'b0}}, w_feature_dv_dr};

// Process 1: Store the current FSM state.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

// Process 2: Calculate the next FSM state.
always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (I_START)
        w_next_state = ST_QUERY;
    end

    ST_QUERY: begin
      if (w_response_valid && r_last_request_delay)
        w_next_state = ST_DONE;
    end

    ST_DONE: begin
      w_next_state = ST_IDLE;
    end

    default: begin
      w_next_state = ST_IDLE;
    end
  endcase
end

// Process 3: Decode externally visible FSM status.
always_comb begin
  O_BUSY = 1'b0;
  O_DONE = 1'b0;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_BUSY = 1'b0;
      O_DONE = 1'b0;
    end

    ST_QUERY: begin
      O_BUSY = 1'b1;
      O_DONE = 1'b0;
    end

    ST_DONE: begin
      O_BUSY = 1'b0;
      O_DONE = 1'b1;
    end

    default: begin
      O_BUSY = 1'b0;
      O_DONE = 1'b0;
    end
  endcase
end

// Query geometry is captured at I_START so the current node can
// change elsewhere only after this query has finished.
always_ff @ (posedge I_CLK) begin
  if ((r_current_state == ST_IDLE) && I_START) begin
    r_tile_x_start <= I_X_UNIT;
    r_tile_x       <= I_X_UNIT;
    r_tile_x_end   <= w_input_tile_x_end[4:0];
    r_tile_y       <= I_Y_UNIT;
    r_tile_y_end   <= w_input_tile_y_end[4:0];
  end
  else if (w_issue) begin
    if (r_tile_x == r_tile_x_end) begin
      r_tile_x <= r_tile_x_start;

      if (r_tile_y != r_tile_y_end)
        r_tile_y <= r_tile_y + 5'd1;
    end
    else begin
      r_tile_x <= r_tile_x + 5'd1;
    end
  end
end

// Request tracking stops new bank reads immediately after the last
// tile request. The delayed marker aligns with the one-cycle bank
// response and identifies the final accumulated feature entry.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_issue_done         <= 1'b0;
    r_last_request_delay <= 1'b0;
  end
  else begin
    if ((r_current_state == ST_IDLE) && I_START)
      r_issue_done <= 1'b0;
    else if (w_issue && w_last_issue)
      r_issue_done <= 1'b1;

    r_last_request_delay <= w_issue && w_last_issue;
  end
end

// Accumulators are cleared for each node query and then updated for
// every valid feature-bank response. No multiplication is required.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_sum_acc    <= '0;
    r_sum_sq_acc <= '0;
    r_dv_h_acc   <= '0;
    r_dv_v_acc   <= '0;
    r_dv_dl_acc  <= '0;
    r_dv_dr_acc  <= '0;
  end
  else if ((r_current_state == ST_IDLE) && I_START) begin
    r_sum_acc    <= '0;
    r_sum_sq_acc <= '0;
    r_dv_h_acc   <= '0;
    r_dv_v_acc   <= '0;
    r_dv_dl_acc  <= '0;
    r_dv_dr_acc  <= '0;
  end
  else if (w_response_valid) begin
    r_sum_acc    <= r_sum_acc    + w_feature_sum_ext;
    r_sum_sq_acc <= r_sum_sq_acc + w_feature_sum_sq_ext;
    r_dv_h_acc   <= r_dv_h_acc   + w_feature_dv_h_ext;
    r_dv_v_acc   <= r_dv_v_acc   + w_feature_dv_v_ext;
    r_dv_dl_acc  <= r_dv_dl_acc  + w_feature_dv_dl_ext;
    r_dv_dr_acc  <= r_dv_dr_acc  + w_feature_dv_dr_ext;
  end
end

assign O_SUM    = r_sum_acc;
assign O_SUM_SQ = r_sum_sq_acc;
assign O_DV_H   = r_dv_h_acc;
assign O_DV_V   = r_dv_v_acc;
assign O_DV_DL  = r_dv_dl_acc;
assign O_DV_DR  = r_dv_dr_acc;

endmodule: PARTITION_REGION_FEATURE_QUERY
