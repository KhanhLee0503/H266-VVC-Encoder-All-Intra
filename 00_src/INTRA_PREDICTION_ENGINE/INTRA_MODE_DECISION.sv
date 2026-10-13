//-----------------------------------------------------------
// Description: This module selects the best intra prediction candidate using the minimum SAD cost.
// Four candidate mode identifiers are captured at the start of one decision context. Candidate costs
// are accepted through a ready/valid interface, compared using a best-so-far architecture, and tracked
// with a four-bit received mask. After all four candidates have been evaluated, the winner identifier,
// winner mode, and winner SAD cost are presented through a stable ready/valid output interface.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_MODE_DECISION #(
  parameter PARA_CANDIDATE_ID_WD = 2,
  parameter PARA_MODE_WD         = 8,
  parameter PARA_COST_WD         = 20
)
(
  input                                   I_CLK,
  input                                   I_RESETN,

  input                                   I_TU_START,
  output logic                            O_TU_START_READY,
  input [PARA_MODE_WD-1:0]                I_CANDIDATE_MODE_0,
  input [PARA_MODE_WD-1:0]                I_CANDIDATE_MODE_1,
  input [PARA_MODE_WD-1:0]                I_CANDIDATE_MODE_2,
  input [PARA_MODE_WD-1:0]                I_CANDIDATE_MODE_3,

  input                                   I_COST_VALID,
  output logic                            O_COST_READY,
  input [PARA_CANDIDATE_ID_WD-1:0]        I_COST_CANDIDATE_ID,
  input [PARA_COST_WD-1:0]                I_COST_VALUE,

  output logic                            O_WINNER_VALID,
  input                                   I_WINNER_READY,
  output logic [PARA_CANDIDATE_ID_WD-1:0] O_WINNER_ID,
  output logic [PARA_MODE_WD-1:0]         O_WINNER_MODE,
  output logic [PARA_COST_WD-1:0]         O_WINNER_COST
);

localparam PARA_CANDIDATE_NUM = 4;

logic r_active;
logic [PARA_MODE_WD-1:0] r_candidate_mode_0;
logic [PARA_MODE_WD-1:0] r_candidate_mode_1;
logic [PARA_MODE_WD-1:0] r_candidate_mode_2;
logic [PARA_MODE_WD-1:0] r_candidate_mode_3;

logic [PARA_CANDIDATE_NUM-1:0] r_received_mask;
logic [PARA_CANDIDATE_NUM-1:0] w_received_mask_next;
logic w_all_costs_received;

logic r_best_valid;
logic [PARA_COST_WD-1:0] r_best_cost;
logic [PARA_CANDIDATE_ID_WD-1:0] r_best_id;
logic [PARA_MODE_WD-1:0] r_best_mode;

logic [PARA_MODE_WD-1:0] w_current_mode;
logic w_current_is_better;

logic w_tu_start_fire;
logic w_cost_fire;
logic w_winner_fire;

logic r_winner_valid;
logic [PARA_CANDIDATE_ID_WD-1:0] r_winner_id;
logic [PARA_MODE_WD-1:0] r_winner_mode;
logic [PARA_COST_WD-1:0] r_winner_cost;

assign O_TU_START_READY = !r_active && !r_winner_valid;
assign w_tu_start_fire = I_TU_START && O_TU_START_READY;

assign O_COST_READY = r_active && !r_winner_valid;
assign w_cost_fire = I_COST_VALID && O_COST_READY;

assign w_winner_fire = r_winner_valid && I_WINNER_READY;

always_comb begin
  w_current_mode = '0;

  unique casez (I_COST_CANDIDATE_ID)
    2'd0: w_current_mode = r_candidate_mode_0;
    2'd1: w_current_mode = r_candidate_mode_1;
    2'd2: w_current_mode = r_candidate_mode_2;
    2'd3: w_current_mode = r_candidate_mode_3;
    default: w_current_mode = '0;
  endcase
end

always_comb begin
  w_received_mask_next = r_received_mask;

  if (w_cost_fire)
    w_received_mask_next[I_COST_CANDIDATE_ID] = 1'b1;
end

assign w_all_costs_received = &w_received_mask_next;
assign w_current_is_better = !r_best_valid || (I_COST_VALUE < r_best_cost);

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_active <= 1'b0;
    r_received_mask <= '0;
    r_best_valid <= 1'b0;
    r_best_cost <= '0;
    r_best_id <= '0;
    r_best_mode <= '0;
  end
  else if (w_tu_start_fire) begin
    r_active <= 1'b1;
    r_received_mask <= '0;
    r_best_valid <= 1'b0;
    r_best_cost <= '0;
    r_best_id <= '0;
    r_best_mode <= '0;
  end
  else if (w_cost_fire) begin
    r_received_mask <= w_received_mask_next;

    if (w_current_is_better) begin
      r_best_valid <= 1'b1;
      r_best_cost <= I_COST_VALUE;
      r_best_id <= I_COST_CANDIDATE_ID;
      r_best_mode <= w_current_mode;
    end

    if (w_all_costs_received)
      r_active <= 1'b0;
  end
end

always_ff @ (posedge I_CLK) begin
  if (w_tu_start_fire) begin
    r_candidate_mode_0 <= I_CANDIDATE_MODE_0;
    r_candidate_mode_1 <= I_CANDIDATE_MODE_1;
    r_candidate_mode_2 <= I_CANDIDATE_MODE_2;
    r_candidate_mode_3 <= I_CANDIDATE_MODE_3;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_winner_valid <= 1'b0;
  else if (w_cost_fire && w_all_costs_received)
    r_winner_valid <= 1'b1;
  else if (w_winner_fire)
    r_winner_valid <= 1'b0;
end

always_ff @ (posedge I_CLK) begin
  if (w_cost_fire && w_all_costs_received) begin
    if (w_current_is_better) begin
      r_winner_id <= I_COST_CANDIDATE_ID;
      r_winner_mode <= w_current_mode;
      r_winner_cost <= I_COST_VALUE;
    end
    else begin
      r_winner_id <= r_best_id;
      r_winner_mode <= r_best_mode;
      r_winner_cost <= r_best_cost;
    end
  end
end

assign O_WINNER_VALID = r_winner_valid;
assign O_WINNER_ID = r_winner_id;
assign O_WINNER_MODE = r_winner_mode;
assign O_WINNER_COST = r_winner_cost;

endmodule: INTRA_MODE_DECISION
