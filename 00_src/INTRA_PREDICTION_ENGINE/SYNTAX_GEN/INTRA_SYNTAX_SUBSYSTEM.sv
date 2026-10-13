//-----------------------------------------------------------
// Description: This subsystem converts Leaf CU winner modes into one
// 31-bit unbinarized Intra syntax packet per CU. It derives neighbours,
// generates five H.266 non-planar MPM modes, creates luma and chroma
// syntax values, and writes them to a ready/valid FIFO. Each Leaf CU
// produces exactly one packet. Intra mode search and CABAC are external.
// It accepts Y and Cb winner events in that order; Cr reuses Cb mode.
// The next CU is blocked until the luma mode map update is completed.
//-----------------------------------------------------------
`timescale 1ns/1ps
module INTRA_SYNTAX_SUBSYSTEM
#(
  parameter PARA_FIFO_DEPTH = 16,
  localparam PARA_SYNTAX_WD = 31,
  localparam PARA_FIFO_COUNT_WD = (PARA_FIFO_DEPTH < 1) ? 1 : $clog2(PARA_FIFO_DEPTH + 1)
)
(
  input                                 I_CLK,
  input                                 I_RESETN,
  input                                 I_CTU_START,
  output logic                          O_CTU_READY,
  input      [8:0]                      I_CTU_ID,
  input                                 I_LEFT_CTU_AVAILABLE,
  input                                 I_LEAF_VALID,
  output logic                          O_LEAF_READY,
  input      [8:0]                      I_LEAF_CTU_ID,
  input      [7:0]                      I_LEAF_CU_ID,
  input      [63:0]                     I_LEAF_NODE_DATA,
  input                                 I_SELECTED_VALID,
  output logic                          O_SELECTED_READY,
  input      [8:0]                      I_SELECTED_CTU_ID,
  input      [7:0]                      I_SELECTED_CU_ID,
  input      [1:0]                      I_SELECTED_COMPONENT_ID,
  input      [6:0]                      I_SELECTED_MODE,
  output logic                          O_SYNTAX_VALID,
  input                                 I_SYNTAX_READY,
  output logic [PARA_SYNTAX_WD-1:0]     O_SYNTAX_DATA,
  output logic [PARA_FIFO_COUNT_WD-1:0] O_SYNTAX_COUNT,
  output logic                          O_CU_SYNTAX_DONE,
  output logic                          O_MAP_UPDATE_DONE,
  output logic                          O_BUSY,
  output logic                          O_ERROR
);

localparam [1:0] PARA_COMPONENT_Y = 2'd0;
localparam [1:0] PARA_COMPONENT_CB = 2'd1;

typedef enum logic [3:0] {
  ST_IDLE,
  ST_MAP_CU,
  ST_NEIGHBOR,
  ST_MPM_WAIT,
  ST_WAIT_Y,
  ST_LUMA_SEND,
  ST_LUMA_WAIT,
  ST_WAIT_CB,
  ST_CHROMA_SEND,
  ST_CHROMA_WAIT,
  ST_MAP_FINISH,
  ST_FIFO_WRITE,
  ST_DONE,
  ST_ERROR
} state_t;

state_t r_current_state;
state_t w_next_state;

logic r_ctu_active;
logic [8:0] r_ctu_id;
logic [8:0] r_cu_ctu_id;
logic [7:0] r_cu_id;
logic [63:0] r_cu_node_data;
logic [6:0] r_mpm_0;
logic [6:0] r_mpm_1;
logic [6:0] r_mpm_2;
logic [6:0] r_mpm_3;
logic [6:0] r_mpm_4;
logic [6:0] r_winner_y;
logic [6:0] r_winner_chroma;
logic r_mpm_flag;
logic r_not_planar_flag;
logic [2:0] r_mpm_idx;
logic [5:0] r_mpm_remainder;
logic [2:0] r_chroma_syntax;
logic r_map_update_seen;
logic r_error;

logic w_ctu_fire;
logic w_leaf_fire;
logic w_selected_fire;
logic w_selected_match;
logic w_leaf_match;
logic w_map_ctu_ready;
logic w_map_cu_ready;
logic w_map_neighbor_valid;
logic w_map_neighbor_ready;
logic w_map_left_valid;
logic [6:0] w_map_left_mode;
logic w_map_above_valid;
logic [6:0] w_map_above_mode;
logic w_map_winner_ready;
logic w_map_update_done;
logic w_map_error;
logic [8:0] w_map_ctu_id;
logic [7:0] w_map_cu_id;

logic w_mpm_input_ready;
logic w_mpm_output_valid;
logic w_mpm_output_ready;
logic w_mpm_error;
logic [8:0] w_mpm_ctu_id;
logic [7:0] w_mpm_cu_id;
logic [6:0] w_mpm_0;
logic [6:0] w_mpm_1;
logic [6:0] w_mpm_2;
logic [6:0] w_mpm_3;
logic [6:0] w_mpm_4;

logic w_luma_input_ready;
logic w_luma_output_valid;
logic w_luma_output_ready;
logic w_luma_error;
logic [8:0] w_luma_ctu_id;
logic [7:0] w_luma_cu_id;
logic w_luma_mpm_flag;
logic w_luma_not_planar_flag;
logic [2:0] w_luma_mpm_idx;
logic [5:0] w_luma_mpm_remainder;

logic w_chroma_input_ready;
logic w_chroma_output_valid;
logic w_chroma_output_ready;
logic w_chroma_error;
logic [8:0] w_chroma_ctu_id;
logic [7:0] w_chroma_cu_id;
logic [2:0] w_chroma_mode;
logic w_fifo_write_ready;
logic w_fifo_write_valid;
logic [PARA_SYNTAX_WD-1:0] w_fifo_write_data;

assign w_ctu_fire = I_CTU_START && O_CTU_READY;
assign w_leaf_fire = I_LEAF_VALID && O_LEAF_READY;
assign w_selected_fire = I_SELECTED_VALID && O_SELECTED_READY;
assign w_leaf_match = (I_LEAF_CTU_ID == r_ctu_id) && (I_LEAF_NODE_DATA[42:40] >= 3'd1) && (I_LEAF_NODE_DATA[42:40] <= 3'd3) && (I_LEAF_NODE_DATA[39:37] >= 3'd1) && (I_LEAF_NODE_DATA[39:37] <= 3'd3);
assign w_selected_match = (I_SELECTED_CTU_ID == r_cu_ctu_id) && (I_SELECTED_CU_ID == r_cu_id) && (I_SELECTED_MODE <= 7'd66) && (((r_current_state == ST_WAIT_Y) && (I_SELECTED_COMPONENT_ID == PARA_COMPONENT_Y)) || ((r_current_state == ST_WAIT_CB) && (I_SELECTED_COMPONENT_ID == PARA_COMPONENT_CB)));
assign w_fifo_write_data = {r_cu_ctu_id, r_cu_id, r_mpm_flag, r_not_planar_flag, r_mpm_idx, r_mpm_remainder, r_chroma_syntax};
assign w_fifo_write_valid = (r_current_state == ST_FIFO_WRITE);
assign O_ERROR = r_error || w_map_error || (r_current_state == ST_ERROR);

// Process 1: Store the current FSM state.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

// Process 2: Compute state transitions.
always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (w_leaf_fire)
        w_next_state = w_leaf_match ? ST_MAP_CU : ST_ERROR;
    end
    ST_MAP_CU: begin
      if (w_map_cu_ready)
        w_next_state = ST_NEIGHBOR;
    end
    ST_NEIGHBOR: begin
      if (w_map_neighbor_valid && w_mpm_input_ready)
        w_next_state = ST_MPM_WAIT;
    end
    ST_MPM_WAIT: begin
      if (w_mpm_output_valid)
        w_next_state = (w_mpm_error || (w_mpm_ctu_id != r_cu_ctu_id) || (w_mpm_cu_id != r_cu_id)) ? ST_ERROR : ST_WAIT_Y;
    end
    ST_WAIT_Y: begin
      if (w_selected_fire)
        w_next_state = w_selected_match ? ST_LUMA_SEND : ST_ERROR;
    end
    ST_LUMA_SEND: begin
      if (w_luma_input_ready)
        w_next_state = ST_LUMA_WAIT;
    end
    ST_LUMA_WAIT: begin
      if (w_luma_output_valid)
        w_next_state = (w_luma_error || (w_luma_ctu_id != r_cu_ctu_id) || (w_luma_cu_id != r_cu_id)) ? ST_ERROR : ST_WAIT_CB;
    end
    ST_WAIT_CB: begin
      if (w_selected_fire)
        w_next_state = w_selected_match ? ST_CHROMA_SEND : ST_ERROR;
    end
    ST_CHROMA_SEND: begin
      if (w_chroma_input_ready)
        w_next_state = ST_CHROMA_WAIT;
    end
    ST_CHROMA_WAIT: begin
      if (w_chroma_output_valid)
        w_next_state = (w_chroma_error || (w_chroma_ctu_id != r_cu_ctu_id) || (w_chroma_cu_id != r_cu_id)) ? ST_ERROR : ST_MAP_FINISH;
    end
    ST_MAP_FINISH: begin
      if (r_map_update_seen)
        w_next_state = ST_FIFO_WRITE;
    end
    ST_FIFO_WRITE: begin
      if (w_fifo_write_ready)
        w_next_state = ST_DONE;
    end
    ST_DONE: w_next_state = ST_IDLE;
    ST_ERROR: w_next_state = ST_ERROR;
    default: w_next_state = ST_ERROR;
  endcase

  if (w_map_error)
    w_next_state = ST_ERROR;
end

// Process 3: Decode interface enables and ready/valid flow control.
always_comb begin
  O_CTU_READY = 1'b0;
  O_LEAF_READY = 1'b0;
  O_SELECTED_READY = 1'b0;
  O_CU_SYNTAX_DONE = 1'b0;
  O_MAP_UPDATE_DONE = w_map_update_done;
  O_BUSY = 1'b1;
  w_map_neighbor_ready = 1'b0;
  w_mpm_output_ready = 1'b0;
  w_luma_output_ready = 1'b0;
  w_chroma_output_ready = 1'b0;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_CTU_READY = w_map_ctu_ready && !r_error;
      O_LEAF_READY = r_ctu_active && !I_CTU_START && !r_error;
      O_BUSY = 1'b0;
    end
    ST_NEIGHBOR: w_map_neighbor_ready = w_mpm_input_ready;
    ST_MPM_WAIT: w_mpm_output_ready = 1'b1;
    ST_WAIT_Y: O_SELECTED_READY = w_map_winner_ready;
    ST_LUMA_WAIT: w_luma_output_ready = 1'b1;
    ST_WAIT_CB: O_SELECTED_READY = 1'b1;
    ST_CHROMA_WAIT: w_chroma_output_ready = 1'b1;
    ST_DONE: O_CU_SYNTAX_DONE = 1'b1;
    default: begin
    end
  endcase
end

// Transaction registers hold metadata until the FIFO accepts its packet.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_ctu_active <= 1'b0;
    r_ctu_id <= '0;
    r_cu_ctu_id <= '0;
    r_cu_id <= '0;
    r_cu_node_data <= '0;
    r_mpm_0 <= '0;
    r_mpm_1 <= '0;
    r_mpm_2 <= '0;
    r_mpm_3 <= '0;
    r_mpm_4 <= '0;
    r_winner_y <= '0;
    r_winner_chroma <= '0;
    r_mpm_flag <= 1'b0;
    r_not_planar_flag <= 1'b0;
    r_mpm_idx <= '0;
    r_mpm_remainder <= '0;
    r_chroma_syntax <= '0;
    r_map_update_seen <= 1'b0;
    r_error <= 1'b0;
  end
  else begin
    if (w_ctu_fire) begin
      r_ctu_active <= 1'b1;
      r_ctu_id <= I_CTU_ID;
    end

    if (w_leaf_fire) begin
      r_cu_ctu_id <= I_LEAF_CTU_ID;
      r_cu_id <= I_LEAF_CU_ID;
      r_cu_node_data <= I_LEAF_NODE_DATA;
      r_map_update_seen <= 1'b0;
    end

    if (w_mpm_output_valid && w_mpm_output_ready) begin
      r_mpm_0 <= w_mpm_0;
      r_mpm_1 <= w_mpm_1;
      r_mpm_2 <= w_mpm_2;
      r_mpm_3 <= w_mpm_3;
      r_mpm_4 <= w_mpm_4;
    end

    if (w_selected_fire && w_selected_match && (r_current_state == ST_WAIT_Y))
      r_winner_y <= I_SELECTED_MODE;

    if (w_selected_fire && w_selected_match && (r_current_state == ST_WAIT_CB))
      r_winner_chroma <= I_SELECTED_MODE;

    if (w_luma_output_valid && w_luma_output_ready) begin
      r_mpm_flag <= w_luma_mpm_flag;
      r_not_planar_flag <= w_luma_not_planar_flag;
      r_mpm_idx <= w_luma_mpm_idx;
      r_mpm_remainder <= w_luma_mpm_remainder;
    end

    if (w_chroma_output_valid && w_chroma_output_ready)
      r_chroma_syntax <= w_chroma_mode;

    if (w_map_update_done)
      r_map_update_seen <= 1'b1;

    if (w_leaf_fire && !w_leaf_match)
      r_error <= 1'b1;
    else if (w_selected_fire && !w_selected_match)
      r_error <= 1'b1;
    else if ((r_current_state == ST_MPM_WAIT) && w_mpm_output_valid && (w_mpm_error || (w_mpm_ctu_id != r_cu_ctu_id) || (w_mpm_cu_id != r_cu_id)))
      r_error <= 1'b1;
    else if ((r_current_state == ST_LUMA_WAIT) && w_luma_output_valid && (w_luma_error || (w_luma_ctu_id != r_cu_ctu_id) || (w_luma_cu_id != r_cu_id)))
      r_error <= 1'b1;
    else if ((r_current_state == ST_CHROMA_WAIT) && w_chroma_output_valid && (w_chroma_error || (w_chroma_ctu_id != r_cu_ctu_id) || (w_chroma_cu_id != r_cu_id)))
      r_error <= 1'b1;
    else if (w_map_error)
      r_error <= 1'b1;
  end
end

INTRA_MODE_MAP U_INTRA_MODE_MAP
(
  .I_CLK                 (I_CLK),
  .I_RESETN              (I_RESETN),
  .I_CTU_START           (w_ctu_fire),
  .I_LEFT_CTU_AVAILABLE  (I_LEFT_CTU_AVAILABLE),
  .I_CTU_ID              (I_CTU_ID),
  .O_CTU_READY           (w_map_ctu_ready),
  .I_CU_VALID            (r_current_state == ST_MAP_CU),
  .O_CU_READY            (w_map_cu_ready),
  .I_CU_ID               (r_cu_id),
  .I_CU_X_UNIT           (r_cu_node_data[52:48]),
  .I_CU_Y_UNIT           (r_cu_node_data[47:43]),
  .I_CU_WIDTH_CODE       (r_cu_node_data[42:40]),
  .I_CU_HEIGHT_CODE      (r_cu_node_data[39:37]),
  .O_NEIGHBOR_VALID      (w_map_neighbor_valid),
  .I_NEIGHBOR_READY      (w_map_neighbor_ready),
  .O_LEFT_VALID          (w_map_left_valid),
  .O_LEFT_MODE           (w_map_left_mode),
  .O_ABOVE_VALID         (w_map_above_valid),
  .O_ABOVE_MODE          (w_map_above_mode),
  .I_WINNER_VALID        ((r_current_state == ST_WAIT_Y) && w_selected_fire),
  .O_WINNER_READY        (w_map_winner_ready),
  .I_WINNER_CTU_ID       (I_SELECTED_CTU_ID),
  .I_WINNER_CU_ID        (I_SELECTED_CU_ID),
  .I_WINNER_Y_MODE       (I_SELECTED_MODE),
  .O_CURRENT_CTU_ID      (w_map_ctu_id),
  .O_CURRENT_CU_ID       (w_map_cu_id),
  .O_UPDATE_DONE         (w_map_update_done),
  .O_BUSY                (),
  .O_ERROR               (w_map_error),
  .I_CLEAR_ERROR         (1'b0)
);

INTRA_MPM_LIST_GENERATOR U_INTRA_MPM_LIST_GENERATOR
(
  .I_CLK           (I_CLK),
  .I_RESETN        (I_RESETN),
  .I_VALID         ((r_current_state == ST_NEIGHBOR) && w_map_neighbor_valid),
  .O_READY         (w_mpm_input_ready),
  .I_CTU_ID        (w_map_ctu_id),
  .I_CU_ID         (w_map_cu_id),
  .I_LEFT_VALID    (w_map_left_valid),
  .I_LEFT_MODE     (w_map_left_mode),
  .I_ABOVE_VALID   (w_map_above_valid),
  .I_ABOVE_MODE    (w_map_above_mode),
  .O_VALID         (w_mpm_output_valid),
  .I_READY         (w_mpm_output_ready),
  .O_CTU_ID        (w_mpm_ctu_id),
  .O_CU_ID         (w_mpm_cu_id),
  .O_MPM_0         (w_mpm_0),
  .O_MPM_1         (w_mpm_1),
  .O_MPM_2         (w_mpm_2),
  .O_MPM_3         (w_mpm_3),
  .O_MPM_4         (w_mpm_4),
  .O_ERROR         (w_mpm_error)
);

INTRA_LUMA_SYNTAX_GENERATOR U_INTRA_LUMA_SYNTAX_GENERATOR
(
  .I_CLK                  (I_CLK),
  .I_RESETN               (I_RESETN),
  .I_VALID                (r_current_state == ST_LUMA_SEND),
  .O_READY                (w_luma_input_ready),
  .I_CTU_ID               (r_cu_ctu_id),
  .I_CU_ID                (r_cu_id),
  .I_WINNER_Y_MODE        (r_winner_y),
  .I_MPM_0                (r_mpm_0),
  .I_MPM_1                (r_mpm_1),
  .I_MPM_2                (r_mpm_2),
  .I_MPM_3                (r_mpm_3),
  .I_MPM_4                (r_mpm_4),
  .O_VALID                (w_luma_output_valid),
  .I_READY                (w_luma_output_ready),
  .O_CTU_ID               (w_luma_ctu_id),
  .O_CU_ID                (w_luma_cu_id),
  .O_LUMA_MPM_FLAG        (w_luma_mpm_flag),
  .O_LUMA_NOT_PLANAR_FLAG (w_luma_not_planar_flag),
  .O_LUMA_MPM_IDX         (w_luma_mpm_idx),
  .O_LUMA_MPM_REMAINDER   (w_luma_mpm_remainder),
  .O_ERROR                (w_luma_error)
);

INTRA_CHROMA_SYNTAX_GENERATOR U_INTRA_CHROMA_SYNTAX_GENERATOR
(
  .I_CLK                 (I_CLK),
  .I_RESETN              (I_RESETN),
  .I_VALID               (r_current_state == ST_CHROMA_SEND),
  .O_READY               (w_chroma_input_ready),
  .I_CTU_ID              (r_cu_ctu_id),
  .I_CU_ID               (r_cu_id),
  .I_WINNER_Y_MODE       (r_winner_y),
  .I_WINNER_CHROMA_MODE  (r_winner_chroma),
  .O_VALID               (w_chroma_output_valid),
  .I_READY               (w_chroma_output_ready),
  .O_CTU_ID              (w_chroma_ctu_id),
  .O_CU_ID               (w_chroma_cu_id),
  .O_CHROMA_PRED_MODE    (w_chroma_mode),
  .O_ERROR               (w_chroma_error)
);

INTRA_SYNTAX_FIFO #(.PARA_DATA_WD(PARA_SYNTAX_WD), .PARA_FIFO_DEPTH(PARA_FIFO_DEPTH)) U_INTRA_SYNTAX_FIFO
(
  .I_CLK      (I_CLK),
  .I_RESETN   (I_RESETN),
  .I_WR_VALID (w_fifo_write_valid),
  .O_WR_READY (w_fifo_write_ready),
  .I_WR_DATA  (w_fifo_write_data),
  .O_RD_VALID (O_SYNTAX_VALID),
  .I_RD_READY (I_SYNTAX_READY),
  .O_RD_DATA  (O_SYNTAX_DATA),
  .O_COUNT    (O_SYNTAX_COUNT),
  .O_FULL     (),
  .O_EMPTY    ()
);

endmodule: INTRA_SYNTAX_SUBSYSTEM
