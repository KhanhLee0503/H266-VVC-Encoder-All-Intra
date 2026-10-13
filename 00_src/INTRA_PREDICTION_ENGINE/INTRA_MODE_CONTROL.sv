//-----------------------------------------------------------
// Description: CU-level H.266/VVC All-Intra mode control. Accepts the
// Partition Engine Leaf-CU descriptor and its aligned texture-feature
// summary. Searches four luma candidates, searches four Cb candidates,
// and predicts Cr once using the Cb winner mode. The candidate banks,
// original sample reader, SAD and mode decision are bypassed for Cr.
// Each CU is retired only after reconstructed reference commit, so a
// dependent Leaf CU cannot begin before its references are available.
// Geometry remains CU-based throughout; no TU descriptor is required.
//-----------------------------------------------------------
`timescale 1ns/1ps
module INTRA_MODE_CONTROL #(
  parameter PARA_LEAF_NODE_WD     = 64,
  parameter PARA_CTU_ID_WD        = 9,
  parameter PARA_CU_ID_WD         = 8,
  parameter PARA_CTU_BUFFER_ID_WD = 2,
  parameter PARA_COORD_WD         = 7,
  parameter PARA_MODE_WD          = 8,
  parameter PARA_COST_WD          = 20
)
(
  input                                    I_CLK,
  input                                    I_RESETN,

  // All Leaf-CU fields and feature metadata belong to the SAME
  // Partition ready/valid beat; the producer must hold them stable.
  input                                    I_CU_VALID,
  output logic                             O_CU_READY,
  input [PARA_CTU_ID_WD-1:0]               I_CTU_ID,
  input [PARA_CU_ID_WD-1:0]                I_CU_ID,
  input [PARA_LEAF_NODE_WD-1:0]            I_CU_NODE_DATA,
  input [1:0]                              I_CU_ACTIVITY,
  input                                    I_CU_DOMINANT,
  input                                    I_CU_STRONG_DOMINANT,
  input [2:0]                              I_CU_DIRECTION,
  input [2:0]                              I_CU_SECOND_DIRECTION,
  input [PARA_CTU_BUFFER_ID_WD-1:0]        I_CTU_BUFFER_ID,

  // Reconstructed-reference barrier: REQ is held until DONE.
  // DONE must be associated with the CURRENT CTU_ID/CU_ID and may
  // assert only after reconstruction has committed its reference data.
  output logic                             O_CU_REF_COMMIT_REQ,
  input                                    I_CU_REF_COMMIT_DONE,
  input                                    I_CLEAR_ERROR,
  output logic                             O_INPUT_ERROR,

  output logic                             O_PRESEL_VALID,
  input                                    I_PRESEL_READY,
  output logic [1:0]                       O_PRESEL_COMPONENT_ID,
  output logic [1:0]                       O_PRESEL_ACTIVITY,
  output logic                             O_PRESEL_DOMINANT,
  output logic                             O_PRESEL_STRONG_DOMINANT,
  output logic [2:0]                       O_PRESEL_DIRECTION,
  output logic [2:0]                       O_PRESEL_SECOND_DIRECTION,

  input                                    I_PRESEL_VALID,
  output logic                             O_PRESEL_READY,
  input [PARA_MODE_WD-1:0]                 I_CANDIDATE_MODE_0,
  input [PARA_MODE_WD-1:0]                 I_CANDIDATE_MODE_1,
  input [PARA_MODE_WD-1:0]                 I_CANDIDATE_MODE_2,
  input [PARA_MODE_WD-1:0]                 I_CANDIDATE_MODE_3,

  output logic                             O_REF_REQ_VALID,
  input                                    I_REF_REQ_READY,
  output logic [1:0]                       O_REF_COMPONENT_ID,
  output logic [PARA_COORD_WD-1:0]         O_REF_CU_X,
  output logic [PARA_COORD_WD-1:0]         O_REF_CU_Y,
  output logic [2:0]                       O_REF_WIDTH_CODE,
  output logic [2:0]                       O_REF_HEIGHT_CODE,
  input                                    I_REF_VALID,
  output logic                             O_REF_READY,

  output logic                             O_ORIG_CU_START,
  input                                    I_ORIG_CU_READY,
  output logic [PARA_CTU_BUFFER_ID_WD-1:0] O_ORIG_CTU_BUFFER_ID,
  output logic [1:0]                       O_ORIG_COMPONENT_ID,
  output logic [PARA_COORD_WD-1:0]         O_ORIG_CU_X,
  output logic [PARA_COORD_WD-1:0]         O_ORIG_CU_Y,

  output logic                             O_CAND_BUF_CU_START,
  output logic [2:0]                       O_CAND_BUF_WIDTH_CODE,
  output logic [2:0]                       O_CAND_BUF_HEIGHT_CODE,

  output logic                             O_MODE_DEC_START,
  input                                    I_MODE_DEC_START_READY,
  output logic [PARA_MODE_WD-1:0]          O_MODE_DEC_MODE_0,
  output logic [PARA_MODE_WD-1:0]          O_MODE_DEC_MODE_1,
  output logic [PARA_MODE_WD-1:0]          O_MODE_DEC_MODE_2,
  output logic [PARA_MODE_WD-1:0]          O_MODE_DEC_MODE_3,

  output logic                             O_CAND_START,
  input                                    I_CAND_START_READY,
  output logic [1:0]                       O_CANDIDATE_ID,
  output logic [1:0]                       O_CAND_COMPONENT_ID,
  output logic [PARA_COORD_WD-1:0]         O_CAND_CU_X,
  output logic [PARA_COORD_WD-1:0]         O_CAND_CU_Y,
  output logic [2:0]                       O_CAND_WIDTH_CODE,
  output logic [2:0]                       O_CAND_HEIGHT_CODE,
  output logic [PARA_MODE_WD-1:0]          O_CAND_REGULAR_MODE,
  output logic signed [7:0]                O_CAND_MAPPED_MODE,
  output logic [1:0]                       O_CAND_CORE_SELECT,

  input                                    I_CANDIDATE_DONE,
  input [1:0]                              I_CANDIDATE_DONE_ID,
  // Pulse on handshake of LAST Cr beat on direct post-PDPC output.
  input                                    I_CR_OUTPUT_DONE,

  input                                    I_WINNER_VALID,
  output logic                             O_WINNER_READY,
  input [1:0]                              I_WINNER_ID,
  input [PARA_MODE_WD-1:0]                 I_WINNER_MODE,
  input [PARA_COST_WD-1:0]                 I_WINNER_COST,

  output logic                             O_CAND_RD_START,
  output logic [1:0]                       O_CAND_WINNER_ID,
  input                                    I_CAND_RD_DONE,

  output logic                             O_SELECTED_VALID,
  input                                    I_SELECTED_READY,
  output logic [1:0]                       O_SELECTED_COMPONENT_ID,
  output logic [1:0]                       O_SELECTED_WINNER_ID,
  output logic [PARA_MODE_WD-1:0]          O_SELECTED_MODE,
  output logic [PARA_COST_WD-1:0]          O_SELECTED_COST,

  output logic [PARA_CTU_ID_WD-1:0]        O_CURRENT_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]         O_CURRENT_CU_ID,
  output logic [1:0]                       O_CURRENT_COMPONENT_ID,
  output logic [PARA_COORD_WD-1:0]         O_CURRENT_CU_X,
  output logic [PARA_COORD_WD-1:0]         O_CURRENT_CU_Y,
  output logic [2:0]                       O_CURRENT_WIDTH_CODE,
  output logic [2:0]                       O_CURRENT_HEIGHT_CODE,

  // One-cycle pulse after Cr's last downstream output handshake.
  output logic                             O_INTRA_DONE,
  // One-cycle CU-retire pulse only after reconstructed reference commit.
  output logic                             O_CU_DONE,
  output logic                             O_CR_DIRECT_ACTIVE,
  output logic [PARA_MODE_WD-1:0]          O_WINNER_Y_MODE,
  output logic [PARA_MODE_WD-1:0]          O_WINNER_CHROMA_MODE,
  output logic                             O_WINNER_Y_VALID,
  output logic                             O_WINNER_CHROMA_VALID,
  output logic                             O_BUSY
);

localparam [1:0] PARA_COMPONENT_Y  = 2'd0;
localparam [1:0] PARA_COMPONENT_CB = 2'd1;
localparam [1:0] PARA_COMPONENT_CR = 2'd2;

localparam [1:0] PARA_CORE_PLANAR    = 2'd0;
localparam [1:0] PARA_CORE_DC        = 2'd1;
localparam [1:0] PARA_CORE_ANGULAR_H = 2'd2;
localparam [1:0] PARA_CORE_ANGULAR_V = 2'd3;

localparam [PARA_MODE_WD-1:0] PARA_MODE_PLANAR = 0;
localparam [PARA_MODE_WD-1:0] PARA_MODE_DC     = 1;

typedef enum logic [4:0] {
  ST_IDLE,
  ST_PRESEL_REQ,
  ST_PRESEL_WAIT,
  ST_CAND_BUF_START,
  ST_ORIG_START,
  ST_MODE_DEC_START,
  ST_REF_REQ,
  ST_REF_WAIT,
  ST_CAND_START,
  ST_CAND_RUN,
  ST_WAIT_WINNER,
  ST_WINNER_READ_START,
  ST_WINNER_READ,
  ST_NEXT_COMPONENT,
  ST_CR_START,
  ST_CR_RUN,
  ST_WAIT_COMMIT,
  ST_DONE,
  ST_ERROR
} state_t;

state_t r_current_state;
state_t w_next_state;

logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_cu_id;
logic [4:0] r_luma_x_unit;
logic [4:0] r_luma_y_unit;
logic [2:0] r_luma_width_code;
logic [2:0] r_luma_height_code;
logic [1:0] r_activity;
logic r_dominant;
logic r_strong_dominant;
logic [2:0] r_direction;
logic [2:0] r_second_direction;
logic [PARA_CTU_BUFFER_ID_WD-1:0] r_ctu_buffer_id;

logic [1:0] r_component_id;
logic [1:0] r_candidate_id;

logic [PARA_MODE_WD-1:0] r_candidate_mode_0;
logic [PARA_MODE_WD-1:0] r_candidate_mode_1;
logic [PARA_MODE_WD-1:0] r_candidate_mode_2;
logic [PARA_MODE_WD-1:0] r_candidate_mode_3;

logic [1:0] r_selected_component_id;
logic [1:0] r_selected_winner_id;
logic [PARA_MODE_WD-1:0] r_selected_mode;
logic [PARA_COST_WD-1:0] r_selected_cost;
logic [PARA_MODE_WD-1:0] r_winner_y_mode;
logic [PARA_MODE_WD-1:0] r_winner_chroma_mode;
logic r_winner_y_valid;
logic r_winner_chroma_valid;
logic w_cu_geometry_ok;
logic [5:0] w_input_width;
logic [5:0] w_input_height;

logic w_cu_accept;
logic w_presel_req_accept;
logic w_presel_rsp_accept;
logic w_orig_start_accept;
logic w_mode_dec_start_accept;
logic w_ref_req_accept;
logic w_ref_accept;
logic w_cand_start_accept;
logic w_candidate_done_match;
logic w_winner_accept;

logic [PARA_COORD_WD-1:0] w_current_cu_x;
logic [PARA_COORD_WD-1:0] w_current_cu_y;
logic [2:0] w_current_width_code;
logic [2:0] w_current_height_code;

logic [PARA_MODE_WD-1:0] w_current_regular_mode;
logic signed [7:0] w_mapped_mode;
logic [1:0] w_core_select;

logic [2:0] w_wh_ratio;
logic [7:0] w_wide_threshold;
logic [7:0] w_tall_threshold;
logic w_width_gt_height;
logic w_height_gt_width;

assign w_cu_accept = I_CU_VALID && O_CU_READY;

// Coding-tree node descriptor fields (unit = 4 luma samples):
// [52:48] X_UNIT, [47:43] Y_UNIT, [42:40] WIDTH_CODE,
// [39:37] HEIGHT_CODE, [36:29] VALID_WIDTH, [28:21] VALID_HEIGHT.
// Partition size code 1->8, 2->16, 3->32.
assign w_input_width = 6'd4 << I_CU_NODE_DATA[42:40];
assign w_input_height = 6'd4 << I_CU_NODE_DATA[39:37];
assign w_cu_geometry_ok =
  (I_CU_NODE_DATA[42:40] >= 3'd1) &&
  (I_CU_NODE_DATA[42:40] <= 3'd3) &&
  (I_CU_NODE_DATA[39:37] >= 3'd1) &&
  (I_CU_NODE_DATA[39:37] <= 3'd3) &&
  (I_CU_NODE_DATA[36:29] != 8'd0) &&
  (I_CU_NODE_DATA[28:21] != 8'd0) &&
  ({1'b0, I_CU_NODE_DATA[36:29]} <= {3'b000, w_input_width}) &&
  ({1'b0, I_CU_NODE_DATA[28:21]} <= {3'b000, w_input_height}) &&
  ({1'b0, I_CU_NODE_DATA[52:48], 2'b00} + {2'b00, w_input_width} <= 9'd128) &&
  ({1'b0, I_CU_NODE_DATA[47:43], 2'b00} + {2'b00, w_input_height} <= 9'd128);
assign w_presel_req_accept = O_PRESEL_VALID && I_PRESEL_READY;
assign w_presel_rsp_accept = I_PRESEL_VALID && O_PRESEL_READY;
assign w_orig_start_accept = O_ORIG_CU_START && I_ORIG_CU_READY;
assign w_mode_dec_start_accept = O_MODE_DEC_START && I_MODE_DEC_START_READY;
assign w_ref_req_accept = O_REF_REQ_VALID && I_REF_REQ_READY;
assign w_ref_accept = I_REF_VALID && O_REF_READY;
assign w_cand_start_accept = O_CAND_START && I_CAND_START_READY;
assign w_candidate_done_match =
  (r_current_state == ST_CAND_RUN) &&
  I_CANDIDATE_DONE &&
  (I_CANDIDATE_DONE_ID == r_candidate_id);
assign w_winner_accept = I_WINNER_VALID && O_WINNER_READY;

always_comb begin
  if (r_component_id == PARA_COMPONENT_Y) begin
    w_current_cu_x = {r_luma_x_unit, 2'b00};
    w_current_cu_y = {r_luma_y_unit, 2'b00};
    w_current_width_code = r_luma_width_code + 3'd2;
    w_current_height_code = r_luma_height_code + 3'd2;
  end
  else begin
    w_current_cu_x = {1'b0, r_luma_x_unit, 1'b0};
    w_current_cu_y = {1'b0, r_luma_y_unit, 1'b0};
    w_current_width_code = r_luma_width_code + 3'd1;
    w_current_height_code = r_luma_height_code + 3'd1;
  end
end

always_comb begin
  w_current_regular_mode = r_candidate_mode_0;

  if (r_component_id == PARA_COMPONENT_CR)
    w_current_regular_mode = r_winner_chroma_mode;
  else begin
    unique casez (r_candidate_id)
      2'd0: w_current_regular_mode = r_candidate_mode_0;
      2'd1: w_current_regular_mode = r_candidate_mode_1;
      2'd2: w_current_regular_mode = r_candidate_mode_2;
      2'd3: w_current_regular_mode = r_candidate_mode_3;
      default: w_current_regular_mode = r_candidate_mode_0;
    endcase
  end
end

always_comb begin
  w_width_gt_height = 1'b0;
  w_height_gt_width = 1'b0;
  w_wh_ratio = 3'd0;

  if (w_current_width_code > w_current_height_code) begin
    w_width_gt_height = 1'b1;
    w_wh_ratio = w_current_width_code - w_current_height_code;
  end
  else if (w_current_height_code > w_current_width_code) begin
    w_height_gt_width = 1'b1;
    w_wh_ratio = w_current_height_code - w_current_width_code;
  end
end

always_comb begin
  if (w_wh_ratio > 3'd1) begin
    w_wide_threshold = 8'd8 + ({5'd0, w_wh_ratio} << 1);
    w_tall_threshold = 8'd60 - ({5'd0, w_wh_ratio} << 1);
  end
  else begin
    w_wide_threshold = 8'd8;
    w_tall_threshold = 8'd60;
  end
end

always_comb begin
  w_mapped_mode = $signed(w_current_regular_mode[7:0]);

  if ((w_current_regular_mode >= 8'd2) && (w_current_regular_mode <= 8'd66)) begin
    if (w_width_gt_height && (w_current_regular_mode < w_wide_threshold))
      w_mapped_mode = $signed(w_current_regular_mode[7:0]) + 8'sd65;
    else if (w_height_gt_width && (w_current_regular_mode > w_tall_threshold))
      w_mapped_mode = $signed(w_current_regular_mode[7:0]) - 8'sd67;
  end
end

always_comb begin
  w_core_select = PARA_CORE_PLANAR;

  if (w_current_regular_mode == PARA_MODE_PLANAR)
    w_core_select = PARA_CORE_PLANAR;
  else if (w_current_regular_mode == PARA_MODE_DC)
    w_core_select = PARA_CORE_DC;
  else if (w_mapped_mode < 8'sd34)
    w_core_select = PARA_CORE_ANGULAR_H;
  else
    w_core_select = PARA_CORE_ANGULAR_V;
end

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
      if (w_cu_accept) begin
        if (w_cu_geometry_ok)
          w_next_state = ST_PRESEL_REQ;
        else
          w_next_state = ST_ERROR;
      end
    end
    ST_PRESEL_REQ: begin
      if (w_presel_req_accept)
        w_next_state = ST_PRESEL_WAIT;
    end
    ST_PRESEL_WAIT: begin
      if (w_presel_rsp_accept)
        w_next_state = ST_CAND_BUF_START;
    end
    ST_CAND_BUF_START: w_next_state = ST_ORIG_START;
    ST_ORIG_START: begin
      if (w_orig_start_accept)
        w_next_state = ST_MODE_DEC_START;
    end
    ST_MODE_DEC_START: begin
      if (w_mode_dec_start_accept)
        w_next_state = ST_REF_REQ;
    end
    ST_REF_REQ: begin
      if (w_ref_req_accept)
        w_next_state = ST_REF_WAIT;
    end
    ST_REF_WAIT: begin
      if (w_ref_accept) begin
        if (r_component_id == PARA_COMPONENT_CR)
          w_next_state = ST_CR_START;
        else
          w_next_state = ST_CAND_START;
      end
    end
    ST_CAND_START: begin
      if (w_cand_start_accept)
        w_next_state = ST_CAND_RUN;
    end
    ST_CAND_RUN: begin
      if (w_candidate_done_match) begin
        if (r_candidate_id == 2'd3)
          w_next_state = ST_WAIT_WINNER;
        else
          w_next_state = ST_CAND_START;
      end
    end
    ST_WAIT_WINNER: begin
      if (w_winner_accept)
        w_next_state = ST_WINNER_READ_START;
    end
    ST_WINNER_READ_START: begin
      if (I_SELECTED_READY)
        w_next_state = ST_WINNER_READ;
    end
    ST_WINNER_READ: begin
      if (I_CAND_RD_DONE)
        w_next_state = ST_NEXT_COMPONENT;
    end
    ST_NEXT_COMPONENT: begin
      if (r_component_id == PARA_COMPONENT_Y)
        w_next_state = ST_PRESEL_REQ;
      else
        w_next_state = ST_REF_REQ;
    end
    // This is a single prediction request, NOT a fifth candidate.
    // Post-PDPC output must bypass candidate banks, SAD and mode decision.
    ST_CR_START: begin
      if (w_cand_start_accept)
        w_next_state = ST_CR_RUN;
    end
    ST_CR_RUN: begin
      if (I_CR_OUTPUT_DONE)
        w_next_state = ST_WAIT_COMMIT;
    end
    ST_WAIT_COMMIT: begin
      if (I_CU_REF_COMMIT_DONE)
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

always_comb begin
  O_CU_READY = 1'b0;

  O_PRESEL_VALID = 1'b0;
  O_PRESEL_COMPONENT_ID = r_component_id;
  O_PRESEL_ACTIVITY = r_activity;
  O_PRESEL_DOMINANT = r_dominant;
  O_PRESEL_STRONG_DOMINANT = r_strong_dominant;
  O_PRESEL_DIRECTION = r_direction;
  O_PRESEL_SECOND_DIRECTION = r_second_direction;
  O_PRESEL_READY = 1'b0;

  O_REF_REQ_VALID = 1'b0;
  O_REF_COMPONENT_ID = r_component_id;
  O_REF_CU_X = w_current_cu_x;
  O_REF_CU_Y = w_current_cu_y;
  O_REF_WIDTH_CODE = w_current_width_code;
  O_REF_HEIGHT_CODE = w_current_height_code;
  O_REF_READY = 1'b0;

  O_ORIG_CU_START = 1'b0;
  O_ORIG_CTU_BUFFER_ID = r_ctu_buffer_id;
  O_ORIG_COMPONENT_ID = r_component_id;
  O_ORIG_CU_X = w_current_cu_x;
  O_ORIG_CU_Y = w_current_cu_y;

  O_CAND_BUF_CU_START = 1'b0;
  O_CAND_BUF_WIDTH_CODE = w_current_width_code;
  O_CAND_BUF_HEIGHT_CODE = w_current_height_code;

  O_MODE_DEC_START = 1'b0;
  O_MODE_DEC_MODE_0 = r_candidate_mode_0;
  O_MODE_DEC_MODE_1 = r_candidate_mode_1;
  O_MODE_DEC_MODE_2 = r_candidate_mode_2;
  O_MODE_DEC_MODE_3 = r_candidate_mode_3;

  O_CAND_START = 1'b0;
  O_CANDIDATE_ID = (r_component_id == PARA_COMPONENT_CR) ? 2'd0 : r_candidate_id;
  O_CAND_COMPONENT_ID = r_component_id;
  O_CAND_CU_X = w_current_cu_x;
  O_CAND_CU_Y = w_current_cu_y;
  O_CAND_WIDTH_CODE = w_current_width_code;
  O_CAND_HEIGHT_CODE = w_current_height_code;
  O_CAND_REGULAR_MODE = w_current_regular_mode;
  O_CAND_MAPPED_MODE = w_mapped_mode;
  O_CAND_CORE_SELECT = w_core_select;

  O_WINNER_READY = 1'b0;
  O_CAND_RD_START = 1'b0;
  O_CAND_WINNER_ID = r_selected_winner_id;

  // Selected-mode notification is precisely one cycle per Y/Cb.
  O_SELECTED_VALID = 1'b0;
  O_SELECTED_COMPONENT_ID = r_selected_component_id;
  O_SELECTED_WINNER_ID = r_selected_winner_id;
  O_SELECTED_MODE = r_selected_mode;
  O_SELECTED_COST = r_selected_cost;

  O_CURRENT_CTU_ID = r_ctu_id;
  O_CURRENT_CU_ID = r_cu_id;
  O_CURRENT_COMPONENT_ID = r_component_id;
  O_CURRENT_CU_X = w_current_cu_x;
  O_CURRENT_CU_Y = w_current_cu_y;
  O_CURRENT_WIDTH_CODE = w_current_width_code;
  O_CURRENT_HEIGHT_CODE = w_current_height_code;

  O_WINNER_Y_MODE = r_winner_y_mode;
  O_WINNER_CHROMA_MODE = r_winner_chroma_mode;
  O_WINNER_Y_VALID = r_winner_y_valid;
  O_WINNER_CHROMA_VALID = r_winner_chroma_valid;
  O_CR_DIRECT_ACTIVE = 1'b0;
  O_CU_REF_COMMIT_REQ = 1'b0;
  O_INTRA_DONE = 1'b0;
  O_CU_DONE = 1'b0;
  O_INPUT_ERROR = 1'b0;
  O_BUSY = 1'b1;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_CU_READY = 1'b1;
      O_BUSY = 1'b0;
    end
    ST_PRESEL_REQ: O_PRESEL_VALID = 1'b1;
    ST_PRESEL_WAIT: O_PRESEL_READY = 1'b1;
    ST_CAND_BUF_START: O_CAND_BUF_CU_START = 1'b1;
    ST_ORIG_START: O_ORIG_CU_START = 1'b1;
    ST_MODE_DEC_START: O_MODE_DEC_START = 1'b1;
    ST_REF_REQ: O_REF_REQ_VALID = 1'b1;
    ST_REF_WAIT: O_REF_READY = 1'b1;
    ST_CAND_START: O_CAND_START = 1'b1;
    ST_CAND_RUN: begin end
    ST_WAIT_WINNER: O_WINNER_READY = 1'b1;
    ST_WINNER_READ_START: begin
      // The syntax/mode consumer and winner-buffer read start together.
      // Both remain stalled when the selected-mode sink is not ready.
      O_CAND_RD_START = I_SELECTED_READY;
      O_SELECTED_VALID = 1'b1;
    end
    ST_WINNER_READ: begin end
    ST_NEXT_COMPONENT: begin end
    ST_CR_START: begin
      O_CAND_START = 1'b1;
      O_CR_DIRECT_ACTIVE = 1'b1;
    end
    ST_CR_RUN: begin
      O_CR_DIRECT_ACTIVE = 1'b1;
      O_INTRA_DONE = I_CR_OUTPUT_DONE;
    end
    ST_WAIT_COMMIT: O_CU_REF_COMMIT_REQ = 1'b1;
    ST_DONE: O_CU_DONE = 1'b1;
    ST_ERROR: O_INPUT_ERROR = 1'b1;
    default: begin end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_ctu_id <= '0;
    r_cu_id <= '0;
    r_luma_x_unit <= '0;
    r_luma_y_unit <= '0;
    r_luma_width_code <= '0;
    r_luma_height_code <= '0;
    r_activity <= '0;
    r_dominant <= 1'b0;
    r_strong_dominant <= 1'b0;
    r_direction <= '0;
    r_second_direction <= '0;
    r_ctu_buffer_id <= '0;
  end
  else if (w_cu_accept) begin
    r_ctu_id <= I_CTU_ID;
    r_cu_id <= I_CU_ID;
    r_luma_x_unit <= I_CU_NODE_DATA[52:48];
    r_luma_y_unit <= I_CU_NODE_DATA[47:43];
    r_luma_width_code <= I_CU_NODE_DATA[42:40];
    r_luma_height_code <= I_CU_NODE_DATA[39:37];
    r_activity <= I_CU_ACTIVITY;
    r_dominant <= I_CU_DOMINANT;
    r_strong_dominant <= I_CU_STRONG_DOMINANT;
    r_direction <= I_CU_DIRECTION;
    r_second_direction <= I_CU_SECOND_DIRECTION;
    r_ctu_buffer_id <= I_CTU_BUFFER_ID;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_component_id <= PARA_COMPONENT_Y;
  else if (w_cu_accept)
    r_component_id <= PARA_COMPONENT_Y;
  else if (r_current_state == ST_NEXT_COMPONENT) begin
    if (r_component_id == PARA_COMPONENT_Y)
      r_component_id <= PARA_COMPONENT_CB;
    else if (r_component_id == PARA_COMPONENT_CB)
      r_component_id <= PARA_COMPONENT_CR;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_candidate_mode_0 <= '0;
    r_candidate_mode_1 <= '0;
    r_candidate_mode_2 <= '0;
    r_candidate_mode_3 <= '0;
  end
  else if (w_presel_rsp_accept) begin
    r_candidate_mode_0 <= I_CANDIDATE_MODE_0;
    r_candidate_mode_1 <= I_CANDIDATE_MODE_1;
    r_candidate_mode_2 <= I_CANDIDATE_MODE_2;
    r_candidate_mode_3 <= I_CANDIDATE_MODE_3;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_candidate_id <= 2'd0;
  else if (w_cu_accept)
    r_candidate_id <= 2'd0;
  else if (r_current_state == ST_NEXT_COMPONENT)
    r_candidate_id <= 2'd0;
  else if (w_candidate_done_match && (r_candidate_id != 2'd3))
    r_candidate_id <= r_candidate_id + 2'd1;
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_selected_component_id <= PARA_COMPONENT_Y;
    r_selected_winner_id <= '0;
    r_selected_mode <= '0;
    r_selected_cost <= '0;
    r_winner_y_mode <= '0;
    r_winner_chroma_mode <= '0;
    r_winner_y_valid <= 1'b0;
    r_winner_chroma_valid <= 1'b0;
  end
  else if (w_cu_accept) begin
    r_winner_y_valid <= 1'b0;
    r_winner_chroma_valid <= 1'b0;
  end
  else if (w_winner_accept) begin
    r_selected_component_id <= r_component_id;
    r_selected_winner_id <= I_WINNER_ID;
    r_selected_mode <= I_WINNER_MODE;
    r_selected_cost <= I_WINNER_COST;

    if (r_component_id == PARA_COMPONENT_Y) begin
      r_winner_y_mode <= I_WINNER_MODE;
      r_winner_y_valid <= 1'b1;
    end
    else if (r_component_id == PARA_COMPONENT_CB) begin
      r_winner_chroma_mode <= I_WINNER_MODE;
      r_winner_chroma_valid <= 1'b1;
    end
  end
end

endmodule: INTRA_MODE_CONTROL
