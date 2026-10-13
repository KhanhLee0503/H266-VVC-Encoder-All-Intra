//-----------------------------------------------------------
// Description:
// Top-level integration wrapper for the H.266/VVC All-Intra Prediction Engine.
//
// Processing order:
//   Y candidate search -> Winner_Y
//   Cb candidate search -> Winner_Chroma
//   Cr single prediction using Winner_Chroma (no independent Cr search)
//
// Reconstruction is NOT implemented in this block.
// Intra Prediction only reads already reconstructed reference samples through
// INTRA_REF_SUBSYSTEM. The reconstructed-reference storage, availability map,
// and CU commit generation belong to the external Reconstruction/Reference
// subsystem.
//
// Project baseline:
//   - VVC All-Intra
//   - YUV 4:2:0
//   - 10-bit active samples in 16-bit storage containers
//   - Max Leaf CU/TU: 32x32 luma, 16x16 chroma
//   - Four prediction samples per processing beat
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PREDICTION_ENGINE #(
  parameter PARA_LEAF_NODE_WD       = 64,
  parameter PARA_CTU_ID_WD          = 9,
  parameter PARA_CU_ID_WD           = 8,
  parameter PARA_CTU_BUFFER_ID_WD   = 2,
  parameter PARA_COORD_WD           = 7,
  parameter PARA_PIC_COORD_WD       = 13,
  parameter PARA_REF_ADDR_WD        = 10,
  parameter PARA_REF_TILE_UNIT_WD   = 5,
  parameter PARA_MODE_WD            = 8,
  parameter PARA_PIXEL_WD           = 10,
  parameter PARA_CONTAINER_WD       = 16,
  parameter PARA_PIXELS_PER_BEAT    = 4,
  parameter PARA_COST_WD            = 20,
  parameter PARA_SYNTAX_FIFO_DEPTH  = 16,
  localparam PARA_PRED_DATA_WD      = PARA_PIXEL_WD * PARA_PIXELS_PER_BEAT,
  localparam PARA_SYNTAX_WD         = 31,
  localparam PARA_SYNTAX_COUNT_WD   = (PARA_SYNTAX_FIFO_DEPTH < 1) ? 1 : $clog2(PARA_SYNTAX_FIFO_DEPTH + 1)
)(
  input                                     I_CLK,
  input                                     I_RESETN,

  // --------------------------------------------------------
  // CTU lifecycle / global geometry
  // --------------------------------------------------------
  input                                     I_CTU_START,
  output logic                              O_CTU_START_READY,
  input                                     I_CTU_DONE,
  input [PARA_CTU_ID_WD-1:0]                I_CTU_ID,
  input                                     I_LEFT_CTU_AVAILABLE,
  input [PARA_PIC_COORD_WD-1:0]             I_CTU_X_ORIGIN,
  input [PARA_PIC_COORD_WD-1:0]             I_CTU_Y_ORIGIN,
  input [PARA_PIC_COORD_WD-1:0]             I_PICTURE_WIDTH,
  input [PARA_PIC_COORD_WD-1:0]             I_PICTURE_HEIGHT,

  // --------------------------------------------------------
  // Leaf-CU input from Partition Engine
  // All metadata belongs to the same ready/valid beat.
  // --------------------------------------------------------
  input                                     I_CU_VALID,
  output logic                              O_CU_READY,
  input [PARA_CTU_ID_WD-1:0]                I_LEAF_CTU_ID,
  input [PARA_CU_ID_WD-1:0]                 I_CU_ID,
  input [PARA_LEAF_NODE_WD-1:0]             I_CU_NODE_DATA,
  input [1:0]                               I_CU_ACTIVITY,
  input                                     I_CU_DOMINANT,
  input                                     I_CU_STRONG_DOMINANT,
  input [2:0]                               I_CU_DIRECTION,
  input [2:0]                               I_CU_SECOND_DIRECTION,
  input [PARA_CTU_BUFFER_ID_WD-1:0]         I_CTU_BUFFER_ID,

  // --------------------------------------------------------
  // Original CTU-buffer read interface for SAD/cost search
  // --------------------------------------------------------
  output logic                              O_ORIG_BUF_RD_VALID,
  output logic [PARA_CTU_BUFFER_ID_WD-1:0]  O_ORIG_BUF_RD_BUFFER_ID,
  output logic [1:0]                        O_ORIG_BUF_RD_PLANE,
  output logic [15:0]                       O_ORIG_BUF_RD_ADDR,
  input [127:0]                             I_ORIG_BUF_RD_DATA,
  input                                     I_ORIG_BUF_RD_DATA_VALID,

  // --------------------------------------------------------
  // Reconstructed-reference availability map (READ ONLY)
  // --------------------------------------------------------
  output logic [1:0]                        O_REF_MAP_QUERY_COMPONENT_ID,

  output logic                              O_REF_TOP_MAP_QUERY_VALID,
  output logic [PARA_REF_TILE_UNIT_WD-1:0]  O_REF_TOP_MAP_X_UNIT,
  output logic [PARA_REF_TILE_UNIT_WD-1:0]  O_REF_TOP_MAP_Y_UNIT,
  input                                     I_REF_TOP_MAP_AVAILABLE,

  output logic                              O_REF_LEFT_MAP_QUERY_VALID,
  output logic [PARA_REF_TILE_UNIT_WD-1:0]  O_REF_LEFT_MAP_X_UNIT,
  output logic [PARA_REF_TILE_UNIT_WD-1:0]  O_REF_LEFT_MAP_Y_UNIT,
  input                                     I_REF_LEFT_MAP_AVAILABLE,

  output logic                              O_REF_TL_MAP_QUERY_VALID,
  output logic [PARA_REF_TILE_UNIT_WD-1:0]  O_REF_TL_MAP_X_UNIT,
  output logic [PARA_REF_TILE_UNIT_WD-1:0]  O_REF_TL_MAP_Y_UNIT,
  input                                     I_REF_TL_MAP_AVAILABLE,

  input                                     I_REF_ABOVE_ROW_VALID,
  input                                     I_REF_LEFT_BOUNDARY_VALID,
  input                                     I_REF_ABOVE_LEFT_VALID,

  // --------------------------------------------------------
  // Reconstructed-reference memory read channels (READ ONLY)
  // Logical banks preserve the current INTRA_REF_FETCH organization.
  // --------------------------------------------------------
  output logic                              O_REF_H_EDGE_RD_EN,
  output logic [1:0]                        O_REF_H_EDGE_RD_COMPONENT_ID,
  output logic [PARA_REF_ADDR_WD-1:0]       O_REF_H_EDGE_RD_ADDR,
  input                                     I_REF_H_EDGE_RD_VALID,
  input [63:0]                              I_REF_H_EDGE_RD_DATA,

  output logic                              O_REF_V_EDGE_RD_EN,
  output logic [1:0]                        O_REF_V_EDGE_RD_COMPONENT_ID,
  output logic [PARA_REF_ADDR_WD-1:0]       O_REF_V_EDGE_RD_ADDR,
  input                                     I_REF_V_EDGE_RD_VALID,
  input [63:0]                              I_REF_V_EDGE_RD_DATA,

  output logic                              O_REF_ABOVE_RD_EN,
  output logic [1:0]                        O_REF_ABOVE_RD_COMPONENT_ID,
  output logic [PARA_REF_ADDR_WD-1:0]       O_REF_ABOVE_RD_ADDR,
  input                                     I_REF_ABOVE_RD_VALID,
  input [63:0]                              I_REF_ABOVE_RD_DATA,

  output logic                              O_REF_LEFT_BOUND_RD_EN,
  output logic [1:0]                        O_REF_LEFT_BOUND_RD_COMPONENT_ID,
  output logic [4:0]                        O_REF_LEFT_BOUND_RD_ADDR,
  input                                     I_REF_LEFT_BOUND_RD_VALID,
  input [63:0]                              I_REF_LEFT_BOUND_RD_DATA,

  output logic [1:0]                        O_REF_CORNER_QUERY_COMPONENT_ID,
  input                                     I_REF_CORNER_QUERY_VALID,
  input [15:0]                              I_REF_CORNER_QUERY_SAMPLE,

  // --------------------------------------------------------
  // CU reconstruction-commit barrier.
  // Request is generated by INTRA_MODE_CONTROL after the CU prediction
  // sequence completes. DONE comes from the external Recon/Reference side
  // only after the reconstructed samples for this CU are committed.
  // --------------------------------------------------------
  output logic                              O_CU_REF_COMMIT_REQ,
  input                                     I_CU_REF_COMMIT_DONE,

  // --------------------------------------------------------
  // Final selected prediction stream toward Residual/TQ.
  // Y/Cb are winner-bank readback; Cr is direct Winner_Chroma prediction.
  // --------------------------------------------------------
  output logic                              O_PRED_VALID,
  input                                     I_PRED_READY,
  output logic [PARA_PRED_DATA_WD-1:0]      O_PRED_DATA,
  output logic [3:0]                        O_PRED_LANE_VALID,
  output logic [4:0]                        O_PRED_X_BASE,
  output logic [4:0]                        O_PRED_Y,
  output logic                              O_PRED_ROW_LAST,
  output logic                              O_PRED_LAST,
  output logic [1:0]                        O_PRED_COMPONENT_ID,
  output logic [PARA_MODE_WD-1:0]           O_PRED_MODE,
  output logic [PARA_CTU_ID_WD-1:0]         O_PRED_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]          O_PRED_CU_ID,
  output logic [PARA_COORD_WD-1:0]          O_PRED_CU_X,
  output logic [PARA_COORD_WD-1:0]          O_PRED_CU_Y,
  output logic [2:0]                        O_PRED_WIDTH_CODE,
  output logic [2:0]                        O_PRED_HEIGHT_CODE,

  // --------------------------------------------------------
  // Unbinarized intra syntax stream toward CABAC front-end
  // --------------------------------------------------------
  output logic                              O_SYNTAX_VALID,
  input                                     I_SYNTAX_READY,
  output logic [PARA_SYNTAX_WD-1:0]         O_SYNTAX_DATA,
  output logic [PARA_SYNTAX_COUNT_WD-1:0]   O_SYNTAX_COUNT,
  output logic                              O_CU_SYNTAX_DONE,

  // --------------------------------------------------------
  // Status / debug
  // --------------------------------------------------------
  input                                     I_CLEAR_ERROR,
  output logic                              O_INTRA_DONE,
  output logic                              O_CU_DONE,
  output logic                              O_BUSY,
  output logic                              O_ERROR,
  output logic [PARA_MODE_WD-1:0]           O_WINNER_Y_MODE,
  output logic [PARA_MODE_WD-1:0]           O_WINNER_CHROMA_MODE,
  output logic                              O_WINNER_Y_VALID,
  output logic                              O_WINNER_CHROMA_VALID
);

localparam [1:0] PARA_COMPONENT_Y  = 2'd0;
localparam [1:0] PARA_COMPONENT_CB = 2'd1;
localparam [1:0] PARA_COMPONENT_CR = 2'd2;

localparam [1:0] PARA_CORE_PLANAR    = 2'd0;
localparam [1:0] PARA_CORE_DC        = 2'd1;
localparam [1:0] PARA_CORE_ANGULAR_H = 2'd2;
localparam [1:0] PARA_CORE_ANGULAR_V = 2'd3;

// ------------------------------------------------------------
// CU / CTU transaction fanout
// ------------------------------------------------------------
logic w_mode_cu_ready;
logic w_syntax_leaf_ready;
logic w_mode_cu_valid;
logic w_syntax_leaf_valid;
logic w_syntax_ctu_ready;
logic w_ctu_start_fire;
logic r_ctu_active;

assign O_CU_READY = r_ctu_active && w_mode_cu_ready && w_syntax_leaf_ready;
assign w_mode_cu_valid = I_CU_VALID && r_ctu_active && w_syntax_leaf_ready;
assign w_syntax_leaf_valid = I_CU_VALID && r_ctu_active && w_mode_cu_ready;

assign O_CTU_START_READY = w_syntax_ctu_ready && !w_mode_busy && !r_ctu_active;
assign w_ctu_start_fire = I_CTU_START && O_CTU_START_READY;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_ctu_active <= 1'b0;
  else if (w_ctu_start_fire)
    r_ctu_active <= 1'b1;
  else if (I_CTU_DONE)
    r_ctu_active <= 1'b0;
end

// ------------------------------------------------------------
// INTRA_MODE_CONTROL interconnect
// ------------------------------------------------------------
logic w_ctrl_presel_valid;
logic w_ctrl_presel_ready;
logic [1:0] w_ctrl_presel_component_id;
logic [1:0] w_ctrl_presel_activity;
logic w_ctrl_presel_dominant;
logic w_ctrl_presel_strong_dominant;
logic [2:0] w_ctrl_presel_direction;
logic [2:0] w_ctrl_presel_second_direction;

logic w_presel_valid;
logic w_presel_ready;
logic [PARA_MODE_WD-1:0] w_candidate_mode_0;
logic [PARA_MODE_WD-1:0] w_candidate_mode_1;
logic [PARA_MODE_WD-1:0] w_candidate_mode_2;
logic [PARA_MODE_WD-1:0] w_candidate_mode_3;

logic w_ctrl_ref_req_valid;
logic w_ctrl_ref_req_ready;
logic [1:0] w_ctrl_ref_component_id;
logic [PARA_COORD_WD-1:0] w_ctrl_ref_cu_x;
logic [PARA_COORD_WD-1:0] w_ctrl_ref_cu_y;
logic [2:0] w_ctrl_ref_width_code;
logic [2:0] w_ctrl_ref_height_code;
logic w_ref_valid;
logic w_ctrl_ref_ready;

logic w_ctrl_orig_start;
logic w_orig_tu_ready;
logic [PARA_CTU_BUFFER_ID_WD-1:0] w_ctrl_orig_buffer_id;
logic [1:0] w_ctrl_orig_component_id;
logic [PARA_COORD_WD-1:0] w_ctrl_orig_cu_x;
logic [PARA_COORD_WD-1:0] w_ctrl_orig_cu_y;

logic w_ctrl_cand_buf_start;
logic [2:0] w_ctrl_cand_buf_width_code;
logic [2:0] w_ctrl_cand_buf_height_code;

logic w_ctrl_mode_dec_start;
logic w_mode_dec_start_ready;
logic [PARA_MODE_WD-1:0] w_mode_dec_mode_0;
logic [PARA_MODE_WD-1:0] w_mode_dec_mode_1;
logic [PARA_MODE_WD-1:0] w_mode_dec_mode_2;
logic [PARA_MODE_WD-1:0] w_mode_dec_mode_3;

logic w_ctrl_cand_start;
logic w_ctrl_cand_start_ready;
logic [1:0] w_ctrl_candidate_id;
logic [1:0] w_ctrl_cand_component_id;
logic [PARA_COORD_WD-1:0] w_ctrl_cand_cu_x;
logic [PARA_COORD_WD-1:0] w_ctrl_cand_cu_y;
logic [2:0] w_ctrl_cand_width_code;
logic [2:0] w_ctrl_cand_height_code;
logic [PARA_MODE_WD-1:0] w_ctrl_cand_regular_mode;
logic signed [7:0] w_ctrl_cand_mapped_mode;
logic [1:0] w_ctrl_cand_core_select;

logic w_candidate_done;
logic [1:0] w_candidate_done_id;
logic w_cr_output_done;

logic w_winner_valid;
logic w_winner_ready;
logic [1:0] w_winner_id;
logic [PARA_MODE_WD-1:0] w_winner_mode;
logic [PARA_COST_WD-1:0] w_winner_cost;

logic w_ctrl_cand_rd_start;
logic [1:0] w_ctrl_cand_winner_id;
logic w_cand_rd_done;

logic w_ctrl_selected_valid;
logic w_ctrl_selected_ready;
logic [1:0] w_ctrl_selected_component_id;
logic [1:0] w_ctrl_selected_winner_id;
logic [PARA_MODE_WD-1:0] w_ctrl_selected_mode;
logic [PARA_COST_WD-1:0] w_ctrl_selected_cost;

logic [PARA_CTU_ID_WD-1:0] w_ctrl_current_ctu_id;
logic [PARA_CU_ID_WD-1:0] w_ctrl_current_cu_id;
logic [1:0] w_ctrl_current_component_id;
logic [PARA_COORD_WD-1:0] w_ctrl_current_cu_x;
logic [PARA_COORD_WD-1:0] w_ctrl_current_cu_y;
logic [2:0] w_ctrl_current_width_code;
logic [2:0] w_ctrl_current_height_code;
logic w_ctrl_intra_done;
logic w_ctrl_cu_done;
logic w_cr_direct_active;
logic w_ctrl_input_error;
logic w_mode_busy;

INTRA_MODE_CONTROL #(
  .PARA_LEAF_NODE_WD(PARA_LEAF_NODE_WD),
  .PARA_CTU_ID_WD(PARA_CTU_ID_WD),
  .PARA_CU_ID_WD(PARA_CU_ID_WD),
  .PARA_CTU_BUFFER_ID_WD(PARA_CTU_BUFFER_ID_WD),
  .PARA_COORD_WD(PARA_COORD_WD),
  .PARA_MODE_WD(PARA_MODE_WD),
  .PARA_COST_WD(PARA_COST_WD)
) U_INTRA_MODE_CONTROL (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),

  .I_CU_VALID(w_mode_cu_valid),
  .O_CU_READY(w_mode_cu_ready),
  .I_CTU_ID(I_LEAF_CTU_ID),
  .I_CU_ID(I_CU_ID),
  .I_CU_NODE_DATA(I_CU_NODE_DATA),
  .I_CU_ACTIVITY(I_CU_ACTIVITY),
  .I_CU_DOMINANT(I_CU_DOMINANT),
  .I_CU_STRONG_DOMINANT(I_CU_STRONG_DOMINANT),
  .I_CU_DIRECTION(I_CU_DIRECTION),
  .I_CU_SECOND_DIRECTION(I_CU_SECOND_DIRECTION),
  .I_CTU_BUFFER_ID(I_CTU_BUFFER_ID),

  .O_CU_REF_COMMIT_REQ(O_CU_REF_COMMIT_REQ),
  .I_CU_REF_COMMIT_DONE(I_CU_REF_COMMIT_DONE),
  .I_CLEAR_ERROR(I_CLEAR_ERROR),
  .O_INPUT_ERROR(w_ctrl_input_error),

  .O_PRESEL_VALID(w_ctrl_presel_valid),
  .I_PRESEL_READY(w_ctrl_presel_ready),
  .O_PRESEL_COMPONENT_ID(w_ctrl_presel_component_id),
  .O_PRESEL_ACTIVITY(w_ctrl_presel_activity),
  .O_PRESEL_DOMINANT(w_ctrl_presel_dominant),
  .O_PRESEL_STRONG_DOMINANT(w_ctrl_presel_strong_dominant),
  .O_PRESEL_DIRECTION(w_ctrl_presel_direction),
  .O_PRESEL_SECOND_DIRECTION(w_ctrl_presel_second_direction),

  .I_PRESEL_VALID(w_presel_valid),
  .O_PRESEL_READY(w_presel_ready),
  .I_CANDIDATE_MODE_0(w_candidate_mode_0),
  .I_CANDIDATE_MODE_1(w_candidate_mode_1),
  .I_CANDIDATE_MODE_2(w_candidate_mode_2),
  .I_CANDIDATE_MODE_3(w_candidate_mode_3),

  .O_REF_REQ_VALID(w_ctrl_ref_req_valid),
  .I_REF_REQ_READY(w_ctrl_ref_req_ready),
  .O_REF_COMPONENT_ID(w_ctrl_ref_component_id),
  .O_REF_CU_X(w_ctrl_ref_cu_x),
  .O_REF_CU_Y(w_ctrl_ref_cu_y),
  .O_REF_WIDTH_CODE(w_ctrl_ref_width_code),
  .O_REF_HEIGHT_CODE(w_ctrl_ref_height_code),
  .I_REF_VALID(w_ref_valid),
  .O_REF_READY(w_ctrl_ref_ready),

  .O_ORIG_CU_START(w_ctrl_orig_start),
  .I_ORIG_CU_READY(w_orig_tu_ready),
  .O_ORIG_CTU_BUFFER_ID(w_ctrl_orig_buffer_id),
  .O_ORIG_COMPONENT_ID(w_ctrl_orig_component_id),
  .O_ORIG_CU_X(w_ctrl_orig_cu_x),
  .O_ORIG_CU_Y(w_ctrl_orig_cu_y),

  .O_CAND_BUF_CU_START(w_ctrl_cand_buf_start),
  .O_CAND_BUF_WIDTH_CODE(w_ctrl_cand_buf_width_code),
  .O_CAND_BUF_HEIGHT_CODE(w_ctrl_cand_buf_height_code),

  .O_MODE_DEC_START(w_ctrl_mode_dec_start),
  .I_MODE_DEC_START_READY(w_mode_dec_start_ready),
  .O_MODE_DEC_MODE_0(w_mode_dec_mode_0),
  .O_MODE_DEC_MODE_1(w_mode_dec_mode_1),
  .O_MODE_DEC_MODE_2(w_mode_dec_mode_2),
  .O_MODE_DEC_MODE_3(w_mode_dec_mode_3),

  .O_CAND_START(w_ctrl_cand_start),
  .I_CAND_START_READY(w_ctrl_cand_start_ready),
  .O_CANDIDATE_ID(w_ctrl_candidate_id),
  .O_CAND_COMPONENT_ID(w_ctrl_cand_component_id),
  .O_CAND_CU_X(w_ctrl_cand_cu_x),
  .O_CAND_CU_Y(w_ctrl_cand_cu_y),
  .O_CAND_WIDTH_CODE(w_ctrl_cand_width_code),
  .O_CAND_HEIGHT_CODE(w_ctrl_cand_height_code),
  .O_CAND_REGULAR_MODE(w_ctrl_cand_regular_mode),
  .O_CAND_MAPPED_MODE(w_ctrl_cand_mapped_mode),
  .O_CAND_CORE_SELECT(w_ctrl_cand_core_select),

  .I_CANDIDATE_DONE(w_candidate_done),
  .I_CANDIDATE_DONE_ID(w_candidate_done_id),
  .I_CR_OUTPUT_DONE(w_cr_output_done),

  .I_WINNER_VALID(w_winner_valid),
  .O_WINNER_READY(w_winner_ready),
  .I_WINNER_ID(w_winner_id),
  .I_WINNER_MODE(w_winner_mode),
  .I_WINNER_COST(w_winner_cost),

  .O_CAND_RD_START(w_ctrl_cand_rd_start),
  .O_CAND_WINNER_ID(w_ctrl_cand_winner_id),
  .I_CAND_RD_DONE(w_cand_rd_done),

  .O_SELECTED_VALID(w_ctrl_selected_valid),
  .I_SELECTED_READY(w_ctrl_selected_ready),
  .O_SELECTED_COMPONENT_ID(w_ctrl_selected_component_id),
  .O_SELECTED_WINNER_ID(w_ctrl_selected_winner_id),
  .O_SELECTED_MODE(w_ctrl_selected_mode),
  .O_SELECTED_COST(w_ctrl_selected_cost),

  .O_CURRENT_CTU_ID(w_ctrl_current_ctu_id),
  .O_CURRENT_CU_ID(w_ctrl_current_cu_id),
  .O_CURRENT_COMPONENT_ID(w_ctrl_current_component_id),
  .O_CURRENT_CU_X(w_ctrl_current_cu_x),
  .O_CURRENT_CU_Y(w_ctrl_current_cu_y),
  .O_CURRENT_WIDTH_CODE(w_ctrl_current_width_code),
  .O_CURRENT_HEIGHT_CODE(w_ctrl_current_height_code),

  .O_INTRA_DONE(w_ctrl_intra_done),
  .O_CU_DONE(w_ctrl_cu_done),
  .O_CR_DIRECT_ACTIVE(w_cr_direct_active),
  .O_WINNER_Y_MODE(O_WINNER_Y_MODE),
  .O_WINNER_CHROMA_MODE(O_WINNER_CHROMA_MODE),
  .O_WINNER_Y_VALID(O_WINNER_Y_VALID),
  .O_WINNER_CHROMA_VALID(O_WINNER_CHROMA_VALID),
  .O_BUSY(w_mode_busy)
);

// ------------------------------------------------------------
// Candidate preselection
// ------------------------------------------------------------
INTRA_MODE_PRESELECTION #(
  .PARA_MODE_WD(PARA_MODE_WD)
) U_INTRA_MODE_PRESELECTION (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_VALID(w_ctrl_presel_valid),
  .O_READY(w_ctrl_presel_ready),
  .I_COMPONENT_ID(w_ctrl_presel_component_id),
  .I_ACTIVITY(w_ctrl_presel_activity),
  .I_DOMINANT(w_ctrl_presel_dominant),
  .I_STRONG_DOMINANT(w_ctrl_presel_strong_dominant),
  .I_DIRECTION(w_ctrl_presel_direction),
  .I_SECOND_DIRECTION(w_ctrl_presel_second_direction),
  .O_VALID(w_presel_valid),
  .I_READY(w_presel_ready),
  .O_CANDIDATE_MODE_0(w_candidate_mode_0),
  .O_CANDIDATE_MODE_1(w_candidate_mode_1),
  .O_CANDIDATE_MODE_2(w_candidate_mode_2),
  .O_CANDIDATE_MODE_3(w_candidate_mode_3)
);

// ------------------------------------------------------------
// Reconstructed-reference read subsystem
// ------------------------------------------------------------
// INTRA_MODE_CONTROL already exports component-local TU coordinates:
//   Y     : luma sample domain
//   Cb/Cr : chroma sample domain
// Therefore these geometry signals connect directly to INTRA_REF_SUBSYSTEM.
// Global CTU origin / picture dimensions remain in luma coordinates; the
// Ref Subsystem performs the 4:2:0 conversion internally for Cb/Cr.
logic w_ref_filtered_valid;
logic [1:0] w_ref_component_id;
logic [PARA_COORD_WD-1:0] w_ref_tu_x;
logic [PARA_COORD_WD-1:0] w_ref_tu_y;
logic [2:0] w_ref_width_code;
logic [2:0] w_ref_height_code;
logic [(64*PARA_CONTAINER_WD)-1:0] w_ref_unfilt_top;
logic [(64*PARA_CONTAINER_WD)-1:0] w_ref_unfilt_left;
logic [PARA_CONTAINER_WD-1:0] w_ref_unfilt_tl;
logic [(64*PARA_CONTAINER_WD)-1:0] w_ref_filt_top;
logic [(64*PARA_CONTAINER_WD)-1:0] w_ref_filt_left;
logic [PARA_CONTAINER_WD-1:0] w_ref_filt_tl;

INTRA_REF_SUBSYSTEM #(
  .PARA_COORD_WD(PARA_COORD_WD),
  .PARA_PIC_COORD_WD(PARA_PIC_COORD_WD),
  .PARA_ADDR_WD(PARA_REF_ADDR_WD),
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_CONTAINER_WD(PARA_CONTAINER_WD),
  .PARA_TILE_UNIT_WD(PARA_REF_TILE_UNIT_WD)
) U_INTRA_REF_SUBSYSTEM (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),

  .I_REQ_VALID(w_ctrl_ref_req_valid),
  .O_REQ_READY(w_ctrl_ref_req_ready),
  .I_COMPONENT_ID(w_ctrl_ref_component_id),
  .I_TU_X(w_ctrl_ref_cu_x),
  .I_TU_Y(w_ctrl_ref_cu_y),
  .I_TU_WIDTH_CODE(w_ctrl_ref_width_code),
  .I_TU_HEIGHT_CODE(w_ctrl_ref_height_code),

  .I_CTU_X_ORIGIN(I_CTU_X_ORIGIN),
  .I_CTU_Y_ORIGIN(I_CTU_Y_ORIGIN),
  .I_PICTURE_WIDTH(I_PICTURE_WIDTH),
  .I_PICTURE_HEIGHT(I_PICTURE_HEIGHT),

  .O_MAP_QUERY_COMPONENT_ID(O_REF_MAP_QUERY_COMPONENT_ID),

  .O_TOP_MAP_QUERY_VALID(O_REF_TOP_MAP_QUERY_VALID),
  .O_TOP_MAP_X_UNIT(O_REF_TOP_MAP_X_UNIT),
  .O_TOP_MAP_Y_UNIT(O_REF_TOP_MAP_Y_UNIT),
  .I_TOP_MAP_AVAILABLE(I_REF_TOP_MAP_AVAILABLE),

  .O_LEFT_MAP_QUERY_VALID(O_REF_LEFT_MAP_QUERY_VALID),
  .O_LEFT_MAP_X_UNIT(O_REF_LEFT_MAP_X_UNIT),
  .O_LEFT_MAP_Y_UNIT(O_REF_LEFT_MAP_Y_UNIT),
  .I_LEFT_MAP_AVAILABLE(I_REF_LEFT_MAP_AVAILABLE),

  .O_TL_MAP_QUERY_VALID(O_REF_TL_MAP_QUERY_VALID),
  .O_TL_MAP_X_UNIT(O_REF_TL_MAP_X_UNIT),
  .O_TL_MAP_Y_UNIT(O_REF_TL_MAP_Y_UNIT),
  .I_TL_MAP_AVAILABLE(I_REF_TL_MAP_AVAILABLE),

  .I_ABOVE_ROW_VALID(I_REF_ABOVE_ROW_VALID),
  .I_LEFT_BOUNDARY_VALID(I_REF_LEFT_BOUNDARY_VALID),
  .I_ABOVE_LEFT_VALID(I_REF_ABOVE_LEFT_VALID),

  .O_H_EDGE_RD_EN(O_REF_H_EDGE_RD_EN),
  .O_H_EDGE_RD_COMPONENT_ID(O_REF_H_EDGE_RD_COMPONENT_ID),
  .O_H_EDGE_RD_ADDR(O_REF_H_EDGE_RD_ADDR),
  .I_H_EDGE_RD_VALID(I_REF_H_EDGE_RD_VALID),
  .I_H_EDGE_RD_DATA(I_REF_H_EDGE_RD_DATA),

  .O_V_EDGE_RD_EN(O_REF_V_EDGE_RD_EN),
  .O_V_EDGE_RD_COMPONENT_ID(O_REF_V_EDGE_RD_COMPONENT_ID),
  .O_V_EDGE_RD_ADDR(O_REF_V_EDGE_RD_ADDR),
  .I_V_EDGE_RD_VALID(I_REF_V_EDGE_RD_VALID),
  .I_V_EDGE_RD_DATA(I_REF_V_EDGE_RD_DATA),

  .O_ABOVE_RD_EN(O_REF_ABOVE_RD_EN),
  .O_ABOVE_RD_COMPONENT_ID(O_REF_ABOVE_RD_COMPONENT_ID),
  .O_ABOVE_RD_ADDR(O_REF_ABOVE_RD_ADDR),
  .I_ABOVE_RD_VALID(I_REF_ABOVE_RD_VALID),
  .I_ABOVE_RD_DATA(I_REF_ABOVE_RD_DATA),

  .O_LEFT_BOUND_RD_EN(O_REF_LEFT_BOUND_RD_EN),
  .O_LEFT_BOUND_RD_COMPONENT_ID(O_REF_LEFT_BOUND_RD_COMPONENT_ID),
  .O_LEFT_BOUND_RD_ADDR(O_REF_LEFT_BOUND_RD_ADDR),
  .I_LEFT_BOUND_RD_VALID(I_REF_LEFT_BOUND_RD_VALID),
  .I_LEFT_BOUND_RD_DATA(I_REF_LEFT_BOUND_RD_DATA),

  .O_CORNER_QUERY_COMPONENT_ID(O_REF_CORNER_QUERY_COMPONENT_ID),
  .I_CORNER_QUERY_VALID(I_REF_CORNER_QUERY_VALID),
  .I_CORNER_QUERY_SAMPLE(I_REF_CORNER_QUERY_SAMPLE),

  .O_REF_VALID(w_ref_valid),
  .I_REF_READY(w_ctrl_ref_ready),
  .O_FILTERED_VALID(w_ref_filtered_valid),

  .O_COMPONENT_ID(w_ref_component_id),
  .O_TU_X(w_ref_tu_x),
  .O_TU_Y(w_ref_tu_y),
  .O_TU_WIDTH_CODE(w_ref_width_code),
  .O_TU_HEIGHT_CODE(w_ref_height_code),

  .O_UNFILTERED_TOP_REF(w_ref_unfilt_top),
  .O_UNFILTERED_LEFT_REF(w_ref_unfilt_left),
  .O_UNFILTERED_TL_REF(w_ref_unfilt_tl),

  .O_FILTERED_TOP_REF(w_ref_filt_top),
  .O_FILTERED_LEFT_REF(w_ref_filt_left),
  .O_FILTERED_TL_REF(w_ref_filt_tl)
);

// Hold one complete reference transaction while the four candidates of the
// current component are evaluated. Both unfiltered and filtered views are
// retained because Planar/Angular may select them according to the mode.
logic r_ref_filtered_valid;
logic [(64*PARA_CONTAINER_WD)-1:0] r_ref_unfilt_top;
logic [(64*PARA_CONTAINER_WD)-1:0] r_ref_unfilt_left;
logic [PARA_CONTAINER_WD-1:0] r_ref_unfilt_tl;
logic [(64*PARA_CONTAINER_WD)-1:0] r_ref_filt_top;
logic [(64*PARA_CONTAINER_WD)-1:0] r_ref_filt_left;
logic [PARA_CONTAINER_WD-1:0] r_ref_filt_tl;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_ref_filtered_valid <= 1'b0;
    r_ref_unfilt_top <= '0;
    r_ref_unfilt_left <= '0;
    r_ref_unfilt_tl <= '0;
    r_ref_filt_top <= '0;
    r_ref_filt_left <= '0;
    r_ref_filt_tl <= '0;
  end
  else if (w_ref_valid && w_ctrl_ref_ready) begin
    r_ref_filtered_valid <= w_ref_filtered_valid;
    r_ref_unfilt_top <= w_ref_unfilt_top;
    r_ref_unfilt_left <= w_ref_unfilt_left;
    r_ref_unfilt_tl <= w_ref_unfilt_tl;
    r_ref_filt_top <= w_ref_filt_top;
    r_ref_filt_left <= w_ref_filt_left;
    r_ref_filt_tl <= w_ref_filt_tl;
  end
end

// ------------------------------------------------------------
// Predictor start dispatch and active candidate metadata
// ------------------------------------------------------------
logic w_planar_start_ready;
logic w_dc_start_ready;
logic w_ang_h_start_ready;
logic w_ang_v_start_ready;
logic w_pdpc_start_ready;
logic w_selected_core_ready;
logic w_cand_start_fire;

always_comb begin
  unique casez (w_ctrl_cand_core_select)
    PARA_CORE_PLANAR:    w_selected_core_ready = w_planar_start_ready;
    PARA_CORE_DC:        w_selected_core_ready = w_dc_start_ready;
    PARA_CORE_ANGULAR_H: w_selected_core_ready = w_ang_h_start_ready;
    PARA_CORE_ANGULAR_V: w_selected_core_ready = w_ang_v_start_ready;
    default:             w_selected_core_ready = 1'b0;
  endcase
end

assign w_ctrl_cand_start_ready = w_selected_core_ready && w_pdpc_start_ready;
assign w_cand_start_fire = w_ctrl_cand_start && w_ctrl_cand_start_ready;

logic [1:0] r_active_candidate_id;
logic [1:0] r_active_component_id;
logic [1:0] r_active_core_select;
logic [2:0] r_active_width_code;
logic [2:0] r_active_height_code;
logic [PARA_MODE_WD-1:0] r_active_regular_mode;
logic signed [7:0] r_active_mapped_mode;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_active_candidate_id <= '0;
    r_active_component_id <= '0;
    r_active_core_select <= '0;
    r_active_width_code <= '0;
    r_active_height_code <= '0;
    r_active_regular_mode <= '0;
    r_active_mapped_mode <= '0;
  end
  else if (w_cand_start_fire) begin
    r_active_candidate_id <= w_ctrl_candidate_id;
    r_active_component_id <= w_ctrl_cand_component_id;
    r_active_core_select <= w_ctrl_cand_core_select;
    r_active_width_code <= w_ctrl_cand_width_code;
    r_active_height_code <= w_ctrl_cand_height_code;
    r_active_regular_mode <= w_ctrl_cand_regular_mode;
    r_active_mapped_mode <= w_ctrl_cand_mapped_mode;
  end
end

// ------------------------------------------------------------
// Planar predictor
// ------------------------------------------------------------
logic w_planar_valid;
logic w_planar_ready;
logic [39:0] w_planar_data;
logic [3:0] w_planar_lane_valid;
logic [4:0] w_planar_x_base;
logic [4:0] w_planar_y;
logic w_planar_last;

INTRA_PLANAR_PRED_CORE #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_CONTAINER_WD(16),
  .PARA_REF_STORAGE_NUM(64),
  .PARA_LANE_NUM(4)
) U_INTRA_PLANAR_PRED_CORE (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_VALID(w_cand_start_fire && (w_ctrl_cand_core_select == PARA_CORE_PLANAR)),
  .O_READY(w_planar_start_ready),
  .I_TU_WIDTH_CODE(w_ctrl_cand_width_code),
  .I_TU_HEIGHT_CODE(w_ctrl_cand_height_code),
  .I_COMPONENT_ID(w_ctrl_cand_component_id),
  .I_UNFILT_TOP_REF(r_ref_unfilt_top),
  .I_UNFILT_LEFT_REF(r_ref_unfilt_left),
  .I_FILTERED_VALID(r_ref_filtered_valid),
  .I_FILTERED_TOP_REF(r_ref_filt_top),
  .I_FILTERED_LEFT_REF(r_ref_filt_left),
  .O_VALID(w_planar_valid),
  .I_READY(w_planar_ready),
  .O_PRED_SAMPLE(w_planar_data),
  .O_LANE_VALID(w_planar_lane_valid),
  .O_X_BASE(w_planar_x_base),
  .O_Y(w_planar_y),
  .O_LAST(w_planar_last)
);

// ------------------------------------------------------------
// DC predictor + raster expander
// INTRA_DC_PRED_CORE calculates one DC value. This top-level adapter repeats
// it over the full TU so the shared PDPC sees the same four-pixel stream
// format as Planar and Angular predictors.
// ------------------------------------------------------------
logic w_dc_value_valid;
logic w_dc_value_ready;
logic [PARA_PIXEL_WD-1:0] w_dc_value;
logic r_dc_stream_active;
logic [PARA_PIXEL_WD-1:0] r_dc_value;
logic [4:0] r_dc_x_base;
logic [4:0] r_dc_y;
logic [5:0] w_dc_width;
logic [5:0] w_dc_height;
logic w_dc_row_last;
logic w_dc_last;
logic w_dc_stream_fire;

INTRA_DC_PRED_CORE #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_CONTAINER_WD(16),
  .PARA_REF_STORAGE_NUM(64)
) U_INTRA_DC_PRED_CORE (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_VALID(w_cand_start_fire && (w_ctrl_cand_core_select == PARA_CORE_DC)),
  .O_READY(w_dc_start_ready),
  .I_TU_WIDTH_CODE(w_ctrl_cand_width_code),
  .I_TU_HEIGHT_CODE(w_ctrl_cand_height_code),
  .I_UNFILT_TOP_REF(r_ref_unfilt_top),
  .I_UNFILT_LEFT_REF(r_ref_unfilt_left),
  .O_VALID(w_dc_value_valid),
  .I_READY(w_dc_value_ready),
  .O_DC_VAL(w_dc_value)
);

assign w_dc_value_ready = !r_dc_stream_active;
assign w_dc_width = 6'd1 << r_active_width_code;
assign w_dc_height = 6'd1 << r_active_height_code;
assign w_dc_row_last = ({1'b0, r_dc_x_base} + 6'd4) >= w_dc_width;
assign w_dc_last = w_dc_row_last && ({1'b0, r_dc_y} == (w_dc_height - 6'd1));

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_dc_stream_active <= 1'b0;
    r_dc_value <= '0;
    r_dc_x_base <= '0;
    r_dc_y <= '0;
  end
  else begin
    if (w_dc_value_valid && w_dc_value_ready) begin
      r_dc_stream_active <= 1'b1;
      r_dc_value <= w_dc_value;
      r_dc_x_base <= '0;
      r_dc_y <= '0;
    end
    else if (w_dc_stream_fire) begin
      if (w_dc_last) begin
        r_dc_stream_active <= 1'b0;
        r_dc_x_base <= '0;
        r_dc_y <= '0;
      end
      else if (w_dc_row_last) begin
        r_dc_x_base <= '0;
        r_dc_y <= r_dc_y + 5'd1;
      end
      else begin
        r_dc_x_base <= r_dc_x_base + 5'd4;
      end
    end
  end
end

// ------------------------------------------------------------
// Angular predictors
// ------------------------------------------------------------
logic w_ang_h_valid;
logic w_ang_h_ready;
logic [39:0] w_ang_h_data;
logic [3:0] w_ang_h_lane_valid;
logic [4:0] w_ang_h_x_base;
logic [4:0] w_ang_h_y;
logic w_ang_h_row_last;
logic w_ang_h_last;

logic w_ang_v_valid;
logic w_ang_v_ready;
logic [39:0] w_ang_v_data;
logic [3:0] w_ang_v_lane_valid;
logic [4:0] w_ang_v_x_base;
logic [4:0] w_ang_v_y;
logic w_ang_v_row_last;
logic w_ang_v_last;

INTRA_ANGULAR_H_PRED_CORE #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_CONTAINER_WD(16),
  .PARA_REF_NUM(64)
) U_INTRA_ANGULAR_H_PRED_CORE (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_VALID(w_cand_start_fire && (w_ctrl_cand_core_select == PARA_CORE_ANGULAR_H)),
  .O_READY(w_ang_h_start_ready),
  .I_TU_WIDTH_CODE(w_ctrl_cand_width_code),
  .I_TU_HEIGHT_CODE(w_ctrl_cand_height_code),
  .I_COMPONENT_ID(w_ctrl_cand_component_id),
  .I_MAPPED_MODE(w_ctrl_cand_mapped_mode),
  .I_UNFILT_TOP_REF(r_ref_unfilt_top),
  .I_UNFILT_LEFT_REF(r_ref_unfilt_left),
  .I_UNFILT_TL_REF(r_ref_unfilt_tl),
  .I_FILTERED_VALID(r_ref_filtered_valid),
  .I_FILTERED_TOP_REF(r_ref_filt_top),
  .I_FILTERED_LEFT_REF(r_ref_filt_left),
  .I_FILTERED_TL_REF(r_ref_filt_tl),
  .O_BUSY(),
  .O_DONE(),
  .O_VALID(w_ang_h_valid),
  .I_READY(w_ang_h_ready),
  .O_PRED_SAMPLE(w_ang_h_data),
  .O_LANE_VALID(w_ang_h_lane_valid),
  .O_X_BASE(w_ang_h_x_base),
  .O_Y(w_ang_h_y),
  .O_ROW_LAST(w_ang_h_row_last),
  .O_LAST(w_ang_h_last)
);

INTRA_ANGULAR_V_PRED_CORE #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_CONTAINER_WD(16),
  .PARA_REF_NUM(64)
) U_INTRA_ANGULAR_V_PRED_CORE (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_VALID(w_cand_start_fire && (w_ctrl_cand_core_select == PARA_CORE_ANGULAR_V)),
  .O_READY(w_ang_v_start_ready),
  .I_TU_WIDTH_CODE(w_ctrl_cand_width_code),
  .I_TU_HEIGHT_CODE(w_ctrl_cand_height_code),
  .I_COMPONENT_ID(w_ctrl_cand_component_id),
  .I_MAPPED_MODE(w_ctrl_cand_mapped_mode),
  .I_UNFILT_TOP_REF(r_ref_unfilt_top),
  .I_UNFILT_LEFT_REF(r_ref_unfilt_left),
  .I_UNFILT_TL_REF(r_ref_unfilt_tl),
  .I_FILTERED_VALID(r_ref_filtered_valid),
  .I_FILTERED_TOP_REF(r_ref_filt_top),
  .I_FILTERED_LEFT_REF(r_ref_filt_left),
  .I_FILTERED_TL_REF(r_ref_filt_tl),
  .O_BUSY(),
  .O_DONE(),
  .O_VALID(w_ang_v_valid),
  .I_READY(w_ang_v_ready),
  .O_PRED_SAMPLE(w_ang_v_data),
  .O_LANE_VALID(w_ang_v_lane_valid),
  .O_X_BASE(w_ang_v_x_base),
  .O_Y(w_ang_v_y),
  .O_ROW_LAST(w_ang_v_row_last),
  .O_LAST(w_ang_v_last)
);

// ------------------------------------------------------------
// Predictor output mux -> shared PDPC
// ------------------------------------------------------------
logic w_core_pred_valid;
logic w_core_pred_ready;
logic [PARA_PRED_DATA_WD-1:0] w_core_pred_data;
logic [4:0] w_core_pred_x_base;
logic [4:0] w_core_pred_y;
logic w_core_pred_row_last;
logic w_core_pred_last;
logic [5:0] w_active_width;

assign w_active_width = 6'd1 << r_active_width_code;

always_comb begin
  w_core_pred_valid = 1'b0;
  w_core_pred_data = '0;
  w_core_pred_x_base = '0;
  w_core_pred_y = '0;
  w_core_pred_row_last = 1'b0;
  w_core_pred_last = 1'b0;

  w_planar_ready = 1'b0;
  w_ang_h_ready = 1'b0;
  w_ang_v_ready = 1'b0;

  unique casez (r_active_core_select)
    PARA_CORE_PLANAR: begin
      w_core_pred_valid = w_planar_valid;
      w_core_pred_data = w_planar_data;
      w_core_pred_x_base = w_planar_x_base;
      w_core_pred_y = w_planar_y;
      w_core_pred_row_last = ({1'b0, w_planar_x_base} + 6'd4) >= w_active_width;
      w_core_pred_last = w_planar_last;
      w_planar_ready = w_core_pred_ready;
    end
    PARA_CORE_DC: begin
      w_core_pred_valid = r_dc_stream_active;
      w_core_pred_data = {PARA_PIXELS_PER_BEAT{r_dc_value}};
      w_core_pred_x_base = r_dc_x_base;
      w_core_pred_y = r_dc_y;
      w_core_pred_row_last = w_dc_row_last;
      w_core_pred_last = w_dc_last;
    end
    PARA_CORE_ANGULAR_H: begin
      w_core_pred_valid = w_ang_h_valid;
      w_core_pred_data = w_ang_h_data;
      w_core_pred_x_base = w_ang_h_x_base;
      w_core_pred_y = w_ang_h_y;
      w_core_pred_row_last = w_ang_h_row_last;
      w_core_pred_last = w_ang_h_last;
      w_ang_h_ready = w_core_pred_ready;
    end
    PARA_CORE_ANGULAR_V: begin
      w_core_pred_valid = w_ang_v_valid;
      w_core_pred_data = w_ang_v_data;
      w_core_pred_x_base = w_ang_v_x_base;
      w_core_pred_y = w_ang_v_y;
      w_core_pred_row_last = w_ang_v_row_last;
      w_core_pred_last = w_ang_v_last;
      w_ang_v_ready = w_core_pred_ready;
    end
    default: begin
    end
  endcase
end

assign w_dc_stream_fire =
  (r_active_core_select == PARA_CORE_DC) &&
  w_core_pred_valid &&
  w_core_pred_ready;

logic [14:0] w_pdpc_inv_angle_abs;

INTRA_ANGULAR_ANGLE_LUT U_PDPC_ANGLE_LUT (
  .I_ANGULAR_MODE(w_ctrl_cand_mapped_mode),
  .O_MODE_VALID(),
  .O_INTRA_PRED_ANGLE(),
  .O_INV_ANGLE_ABS(w_pdpc_inv_angle_abs),
  .O_ANGLE_NEGATIVE(),
  .O_ANGLE_ZERO(),
  .O_REF_FILTER_FLAG()
);

logic w_pdpc_valid;
logic w_pdpc_ready;
logic [PARA_PRED_DATA_WD-1:0] w_pdpc_data;
logic [4:0] w_pdpc_x_base;
logic [4:0] w_pdpc_y;
logic w_pdpc_row_last;
logic w_pdpc_last;

INTRA_PDPC #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_CONTAINER_WD(16),
  .PARA_COORD_WD(5),
  .PARA_REF_NUM(64)
) U_INTRA_PDPC (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_START(w_cand_start_fire),
  .O_START_READY(w_pdpc_start_ready),
  .I_WIDTH_CODE(w_ctrl_cand_width_code),
  .I_HEIGHT_CODE(w_ctrl_cand_height_code),
  .I_COMPONENT_ID(w_ctrl_cand_component_id),
  .I_MAPPED_MODE(w_ctrl_cand_mapped_mode),
  .I_INV_ANGLE_ABS(w_pdpc_inv_angle_abs),
  .I_TOP_REF(r_ref_unfilt_top),
  .I_LEFT_REF(r_ref_unfilt_left),
  .I_TL_REF(r_ref_unfilt_tl),
  .I_VALID(w_core_pred_valid),
  .O_READY(w_core_pred_ready),
  .I_PRED_DATA(w_core_pred_data),
  .I_X_BASE(w_core_pred_x_base),
  .I_Y(w_core_pred_y),
  .I_ROW_LAST(w_core_pred_row_last),
  .I_TU_LAST(w_core_pred_last),
  .O_VALID(w_pdpc_valid),
  .I_READY(w_pdpc_ready),
  .O_PRED_DATA(w_pdpc_data),
  .O_X_BASE(w_pdpc_x_base),
  .O_Y(w_pdpc_y),
  .O_ROW_LAST(w_pdpc_row_last),
  .O_TU_LAST(w_pdpc_last),
  .O_COMPONENT_ID(),
  .O_MAPPED_MODE(),
  .O_BUSY(),
  .O_DONE()
);

// ------------------------------------------------------------
// Post-PDPC router: Y/Cb -> search paths, Cr -> direct output
// ------------------------------------------------------------
logic w_router_cand_wr_valid;
logic w_router_cand_wr_ready;
logic [1:0] w_router_cand_wr_id;
logic [PARA_PRED_DATA_WD-1:0] w_router_cand_wr_data;
logic w_router_cand_wr_last;

logic w_router_orig_valid;
logic w_router_orig_ready;
logic [1:0] w_router_orig_candidate_id;
logic [PARA_PRED_DATA_WD-1:0] w_router_orig_pred_data;
logic [4:0] w_router_orig_x_base;
logic [4:0] w_router_orig_y;
logic w_router_orig_row_last;
logic w_router_orig_last;

logic w_router_cr_valid;
logic w_router_cr_ready;
logic [PARA_PRED_DATA_WD-1:0] w_router_cr_data;
logic [4:0] w_router_cr_x_base;
logic [4:0] w_router_cr_y;
logic w_router_cr_row_last;
logic w_router_cr_last;

INTRA_PREDICTION_RESULT_ROUTER #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_PIXELS_PER_BEAT(PARA_PIXELS_PER_BEAT),
  .PARA_DATA_WD(PARA_PRED_DATA_WD)
) U_INTRA_PREDICTION_RESULT_ROUTER (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_CR_DIRECT_ACTIVE(w_cr_direct_active),
  .I_PRED_VALID(w_pdpc_valid),
  .O_PRED_READY(w_pdpc_ready),
  .I_PRED_CANDIDATE_ID(r_active_candidate_id),
  .I_PRED_DATA(w_pdpc_data),
  .I_PRED_X_BASE(w_pdpc_x_base),
  .I_PRED_Y(w_pdpc_y),
  .I_PRED_ROW_LAST(w_pdpc_row_last),
  .I_PRED_LAST(w_pdpc_last),
  .O_CAND_WR_VALID(w_router_cand_wr_valid),
  .I_CAND_WR_READY(w_router_cand_wr_ready),
  .O_CAND_WR_ID(w_router_cand_wr_id),
  .O_CAND_WR_DATA(w_router_cand_wr_data),
  .O_CAND_WR_LAST(w_router_cand_wr_last),
  .O_ORIG_VALID(w_router_orig_valid),
  .I_ORIG_READY(w_router_orig_ready),
  .O_ORIG_CANDIDATE_ID(w_router_orig_candidate_id),
  .O_ORIG_PRED_DATA(w_router_orig_pred_data),
  .O_ORIG_X_BASE(w_router_orig_x_base),
  .O_ORIG_Y(w_router_orig_y),
  .O_ORIG_ROW_LAST(w_router_orig_row_last),
  .O_ORIG_LAST(w_router_orig_last),
  .O_CR_VALID(w_router_cr_valid),
  .I_CR_READY(w_router_cr_ready),
  .O_CR_PRED_DATA(w_router_cr_data),
  .O_CR_X_BASE(w_router_cr_x_base),
  .O_CR_Y(w_router_cr_y),
  .O_CR_ROW_LAST(w_router_cr_row_last),
  .O_CR_LAST(w_router_cr_last),
  .O_CR_OUTPUT_DONE(w_cr_output_done)
);

// ------------------------------------------------------------
// Candidate prediction buffer
// ------------------------------------------------------------
logic w_cand_rd_valid;
logic w_cand_rd_ready;
logic [PARA_PRED_DATA_WD-1:0] w_cand_rd_data;
logic [4:0] w_cand_rd_x_base;
logic [4:0] w_cand_rd_y;
logic w_cand_rd_row_last;
logic w_cand_rd_last;

INTRA_CANDIDATE_PRED_BUFFER #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_PIXELS_PER_BEAT(PARA_PIXELS_PER_BEAT),
  .PARA_MAX_TU_WD(32),
  .PARA_MAX_TU_HT(32)
) U_INTRA_CANDIDATE_PRED_BUFFER (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_TU_START(w_ctrl_cand_buf_start),
  .I_WIDTH_CODE(w_ctrl_cand_buf_width_code),
  .I_HEIGHT_CODE(w_ctrl_cand_buf_height_code),
  .I_WR_VALID(w_router_cand_wr_valid),
  .O_WR_READY(w_router_cand_wr_ready),
  .I_WR_CANDIDATE_ID(w_router_cand_wr_id),
  .I_WR_PRED_DATA(w_router_cand_wr_data),
  .I_WR_LAST(w_router_cand_wr_last),
  .O_BANK_VALID(),
  .O_CANDIDATE_DONE(w_candidate_done),
  .O_CANDIDATE_DONE_ID(w_candidate_done_id),
  .O_ALL_CANDIDATES_READY(),
  .I_RD_START(w_ctrl_cand_rd_start),
  .I_WINNER_ID(w_ctrl_cand_winner_id),
  .O_RD_BUSY(),
  .O_RD_DONE(w_cand_rd_done),
  .O_RD_VALID(w_cand_rd_valid),
  .I_RD_READY(w_cand_rd_ready),
  .O_RD_PRED_DATA(w_cand_rd_data),
  .O_RD_X_BASE(w_cand_rd_x_base),
  .O_RD_Y(w_cand_rd_y),
  .O_RD_ROW_LAST(w_cand_rd_row_last),
  .O_RD_LAST(w_cand_rd_last)
);

// ------------------------------------------------------------
// Original sample alignment -> SAD -> mode decision
// ------------------------------------------------------------
logic w_orig_valid;
logic w_orig_ready;
logic [1:0] w_orig_candidate_id;
logic [PARA_PRED_DATA_WD-1:0] w_orig_pred_data;
logic [PARA_PRED_DATA_WD-1:0] w_orig_data;
logic [4:0] w_orig_x_base;
logic [4:0] w_orig_y;
logic w_orig_row_last;
logic w_orig_last;

INTRA_ORIGINAL_SAMPLE_READER #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_SAMPLE_STORE_WD(16),
  .PARA_PIXELS_PER_BEAT(PARA_PIXELS_PER_BEAT),
  .PARA_BUF_DATA_WD(128),
  .PARA_BUF_ADDR_WD(16),
  .PARA_BUF_ID_WD(PARA_CTU_BUFFER_ID_WD),
  .PARA_COMPONENT_WD(2),
  .PARA_TU_COORD_WD(PARA_COORD_WD),
  .PARA_BEAT_COORD_WD(5)
) U_INTRA_ORIGINAL_SAMPLE_READER (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_TU_START(w_ctrl_orig_start),
  .O_TU_READY(w_orig_tu_ready),
  .I_CTU_BUFFER_ID(w_ctrl_orig_buffer_id),
  .I_COMPONENT_ID(w_ctrl_orig_component_id),
  .I_TU_X(w_ctrl_orig_cu_x),
  .I_TU_Y(w_ctrl_orig_cu_y),
  .I_VALID(w_router_orig_valid),
  .O_READY(w_router_orig_ready),
  .I_CANDIDATE_ID(w_router_orig_candidate_id),
  .I_PRED_DATA(w_router_orig_pred_data),
  .I_X_BASE(w_router_orig_x_base),
  .I_Y(w_router_orig_y),
  .I_ROW_LAST(w_router_orig_row_last),
  .I_LAST(w_router_orig_last),
  .O_BUF_RD_VALID(O_ORIG_BUF_RD_VALID),
  .O_BUF_RD_BUFFER_ID(O_ORIG_BUF_RD_BUFFER_ID),
  .O_BUF_RD_PLANE(O_ORIG_BUF_RD_PLANE),
  .O_BUF_RD_ADDR(O_ORIG_BUF_RD_ADDR),
  .I_BUF_RD_DATA(I_ORIG_BUF_RD_DATA),
  .I_BUF_RD_DATA_VALID(I_ORIG_BUF_RD_DATA_VALID),
  .O_VALID(w_orig_valid),
  .I_READY(w_orig_ready),
  .O_CANDIDATE_ID(w_orig_candidate_id),
  .O_PRED_DATA(w_orig_pred_data),
  .O_ORIG_DATA(w_orig_data),
  .O_X_BASE(w_orig_x_base),
  .O_Y(w_orig_y),
  .O_ROW_LAST(w_orig_row_last),
  .O_LAST(w_orig_last)
);

logic w_cost_valid;
logic w_cost_ready;
logic [1:0] w_cost_candidate_id;
logic [PARA_COST_WD-1:0] w_cost_value;

INTRA_COST_EVALUATION #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_PIXELS_PER_BEAT(PARA_PIXELS_PER_BEAT),
  .PARA_CANDIDATE_ID_WD(2),
  .PARA_MAX_TU_WD(32),
  .PARA_MAX_TU_HT(32),
  .PARA_COST_WD(PARA_COST_WD)
) U_INTRA_COST_EVALUATION (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_VALID(w_orig_valid),
  .O_READY(w_orig_ready),
  .I_CANDIDATE_ID(w_orig_candidate_id),
  .I_PRED_DATA(w_orig_pred_data),
  .I_ORIG_DATA(w_orig_data),
  .I_LAST(w_orig_last),
  .O_COST_VALID(w_cost_valid),
  .I_COST_READY(w_cost_ready),
  .O_COST_CANDIDATE_ID(w_cost_candidate_id),
  .O_COST_VALUE(w_cost_value)
);

INTRA_MODE_DECISION #(
  .PARA_CANDIDATE_ID_WD(2),
  .PARA_MODE_WD(PARA_MODE_WD),
  .PARA_COST_WD(PARA_COST_WD)
) U_INTRA_MODE_DECISION (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_TU_START(w_ctrl_mode_dec_start),
  .O_TU_START_READY(w_mode_dec_start_ready),
  .I_CANDIDATE_MODE_0(w_mode_dec_mode_0),
  .I_CANDIDATE_MODE_1(w_mode_dec_mode_1),
  .I_CANDIDATE_MODE_2(w_mode_dec_mode_2),
  .I_CANDIDATE_MODE_3(w_mode_dec_mode_3),
  .I_COST_VALID(w_cost_valid),
  .O_COST_READY(w_cost_ready),
  .I_COST_CANDIDATE_ID(w_cost_candidate_id),
  .I_COST_VALUE(w_cost_value),
  .O_WINNER_VALID(w_winner_valid),
  .I_WINNER_READY(w_winner_ready),
  .O_WINNER_ID(w_winner_id),
  .O_WINNER_MODE(w_winner_mode),
  .O_WINNER_COST(w_winner_cost)
);

// ------------------------------------------------------------
// Intra syntax subsystem
// ------------------------------------------------------------
logic w_syntax_selected_ready;
logic w_syntax_busy;
logic w_syntax_error;

INTRA_SYNTAX_SUBSYSTEM #(
  .PARA_FIFO_DEPTH(PARA_SYNTAX_FIFO_DEPTH)
) U_INTRA_SYNTAX_SUBSYSTEM (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_CTU_START(w_ctu_start_fire),
  .O_CTU_READY(w_syntax_ctu_ready),
  .I_CTU_ID(I_CTU_ID[8:0]),
  .I_LEFT_CTU_AVAILABLE(I_LEFT_CTU_AVAILABLE),
  .I_LEAF_VALID(w_syntax_leaf_valid),
  .O_LEAF_READY(w_syntax_leaf_ready),
  .I_LEAF_CTU_ID(I_LEAF_CTU_ID[8:0]),
  .I_LEAF_CU_ID(I_CU_ID[7:0]),
  .I_LEAF_NODE_DATA(I_CU_NODE_DATA[63:0]),
  .I_SELECTED_VALID(w_ctrl_selected_valid),
  .O_SELECTED_READY(w_syntax_selected_ready),
  .I_SELECTED_CTU_ID(w_ctrl_current_ctu_id[8:0]),
  .I_SELECTED_CU_ID(w_ctrl_current_cu_id[7:0]),
  .I_SELECTED_COMPONENT_ID(w_ctrl_selected_component_id),
  .I_SELECTED_MODE(w_ctrl_selected_mode[6:0]),
  .O_SYNTAX_VALID(O_SYNTAX_VALID),
  .I_SYNTAX_READY(I_SYNTAX_READY),
  .O_SYNTAX_DATA(O_SYNTAX_DATA),
  .O_SYNTAX_COUNT(O_SYNTAX_COUNT),
  .O_CU_SYNTAX_DONE(O_CU_SYNTAX_DONE),
  .O_MAP_UPDATE_DONE(),
  .O_BUSY(w_syntax_busy),
  .O_ERROR(w_syntax_error)
);

assign w_ctrl_selected_ready = w_syntax_selected_ready;

// ------------------------------------------------------------
// Final prediction output merge
// ------------------------------------------------------------
assign w_router_cr_ready = I_PRED_READY && w_cr_direct_active;
assign w_cand_rd_ready = I_PRED_READY && !w_cr_direct_active;

always_comb begin
  O_PRED_VALID = 1'b0;
  O_PRED_DATA = '0;
  O_PRED_LANE_VALID = 4'b1111;
  O_PRED_X_BASE = '0;
  O_PRED_Y = '0;
  O_PRED_ROW_LAST = 1'b0;
  O_PRED_LAST = 1'b0;

  if (w_cr_direct_active) begin
    O_PRED_VALID = w_router_cr_valid;
    O_PRED_DATA = w_router_cr_data;
    O_PRED_X_BASE = w_router_cr_x_base;
    O_PRED_Y = w_router_cr_y;
    O_PRED_ROW_LAST = w_router_cr_row_last;
    O_PRED_LAST = w_router_cr_last;
  end
  else begin
    O_PRED_VALID = w_cand_rd_valid;
    O_PRED_DATA = w_cand_rd_data;
    O_PRED_X_BASE = w_cand_rd_x_base;
    O_PRED_Y = w_cand_rd_y;
    O_PRED_ROW_LAST = w_cand_rd_row_last;
    O_PRED_LAST = w_cand_rd_last;
  end
end

assign O_PRED_COMPONENT_ID = w_ctrl_current_component_id;
assign O_PRED_MODE = w_cr_direct_active ? O_WINNER_CHROMA_MODE : w_ctrl_selected_mode;
assign O_PRED_CTU_ID = w_ctrl_current_ctu_id;
assign O_PRED_CU_ID = w_ctrl_current_cu_id;
assign O_PRED_CU_X = w_ctrl_current_cu_x;
assign O_PRED_CU_Y = w_ctrl_current_cu_y;
assign O_PRED_WIDTH_CODE = w_ctrl_current_width_code;
assign O_PRED_HEIGHT_CODE = w_ctrl_current_height_code;

assign O_INTRA_DONE = w_ctrl_intra_done;
assign O_CU_DONE = w_ctrl_cu_done;
assign O_BUSY = w_mode_busy || w_syntax_busy;
assign O_ERROR = w_ctrl_input_error || w_syntax_error;

endmodule: INTRA_PREDICTION_ENGINE
