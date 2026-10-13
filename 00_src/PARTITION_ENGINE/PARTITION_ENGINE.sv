//-----------------------------------------------------------
// Description: Top-level integration of the VVC All-Intra partition
// engine. The module performs one-CTU-at-a-time feature pre-analysis
// and coding-tree traversal. Two feature extractors feed even/odd
// feature banks. The control FSM then traverses the coding tree with
// a DFS node stack, scans the feature banks for each node, classifies
// activity and direction, selects a legal split, generates children,
// and writes Leaf-CU and semantic syntax streams. The Leaf FIFO is
// the only CU geometry output source and is connected directly to the
// external Intra Prediction consumer with ready/valid handshaking.
//
// Project baseline:
// - 128x128 luma CTU.
// - 10-bit luma samples stored in 16-bit memory lanes.
// - SINGLE_TREE All-Intra partitioning.
// - Feature map: 32x32 4x4 tiles.
// - Feature banks: even tile_x in bank A, odd tile_x in bank B.
// - Activity thresholds are generated internally from QP + node size.
// - Maximum Leaf CU = 32x32. No TU generator or TU descriptor stream.
// - ISP and SBT are disabled; downstream uses Leaf CU geometry directly.
// - Activity/direction summaries are stored with each Leaf CU.
// - Only synthesizable RTL constructs are used.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_ENGINE
#(
  parameter PARA_CTU_ID_WD           = 9,
  parameter PARA_CTU_X_WD            = 5,
  parameter PARA_CTU_Y_WD            = 5,
  parameter PARA_QP_WD               = 6,

  parameter PARA_STACK_DEPTH         = 64,
  parameter PARA_LEAF_FIFO_DEPTH     = 256,
  parameter PARA_SYNTAX_FIFO_DEPTH   = 256,

  parameter PARA_MIN_QT_SIZE         = 8,
  parameter PARA_MIN_BT_SIZE         = 8,
  parameter PARA_MAX_BT_SIZE         = 64,
  parameter PARA_MIN_TT_SIZE         = 8,
  parameter PARA_MAX_TT_SIZE         = 64,
  parameter PARA_MAX_MTT_DEPTH       = 4,
  parameter PARA_MAX_LEAF_SIZE       = 32,
  parameter PARA_ENABLE_TT           = 1,

  parameter PARA_USE_VARIANCE        = 0,
  parameter [15:0] PARA_IDTV_BIAS    = 16'd40,
  parameter [3:0]  PARA_HIGH_SHIFT   = 4'd1,

  localparam PARA_NODE_WD            = 64,
  localparam PARA_CU_ID_WD           = 8,
  localparam PARA_FEATURE_DATA_WD    = 96,
  localparam PARA_TILE_DATA_WD       = 160,
  localparam PARA_FEATURE_ADDR_WD    = 9,
  localparam PARA_CTU_RD_ADDR_WD     = 11,
  localparam PARA_CTU_RD_DATA_WD     = 128,

  localparam PARA_SUM_WD             = 24,
  localparam PARA_SUM_SQ_WD          = 34,
  localparam PARA_DV_WD              = 23,
  localparam PARA_IDTV_WD            = 25,
  localparam PARA_VAR_WD             = 48,
  localparam PARA_FEATURE_SUMMARY_WD = 10,

  localparam PARA_STACK_COUNT_WD =
    (PARA_STACK_DEPTH < 1) ? 1 :
    $clog2(PARA_STACK_DEPTH + 1),

  localparam PARA_LEAF_COUNT_WD =
    (PARA_LEAF_FIFO_DEPTH < 1) ? 1 :
    $clog2(PARA_LEAF_FIFO_DEPTH + 1),

  localparam PARA_SYNTAX_COUNT_WD =
    (PARA_SYNTAX_FIFO_DEPTH < 1) ? 1 :
    $clog2(PARA_SYNTAX_FIFO_DEPTH + 1)
)
(
  input                                   I_CLK,
  input                                   I_RESETN,

  // CTU transaction interface.
  input                                   I_START,
  output logic                            O_START_READY,
  input                                   I_DONE_ACK,
  input                                   I_CLEAR_ERROR,

  input      [PARA_CTU_ID_WD-1:0]         I_CTU_ID,
  input      [PARA_CTU_X_WD-1:0]          I_CTU_X,
  input      [PARA_CTU_Y_WD-1:0]          I_CTU_Y,
  input      [7:0]                        I_VALID_WIDTH,
  input      [7:0]                        I_VALID_HEIGHT,
  input      [PARA_QP_WD-1:0]             I_QP,
  input      [3:0]                        I_BOUNDARY_FLAGS,

  // Local CTU luma-buffer read interface.
  output logic                            O_CTU_RD_REQ,
  output logic [PARA_CTU_RD_ADDR_WD-1:0]  O_CTU_RD_ADDR,
  input                                   I_CTU_RD_VALID,
  input      [PARA_CTU_RD_DATA_WD-1:0]    I_CTU_RD_DATA,

  // Leaf-CU output stream for CU-level Intra Prediction.
  // Final Leaf geometry uses Partition size codes 1..3:
  //   1->8, 2->16, 3->32.
  output logic                            O_LEAF_VALID,
  input                                   I_LEAF_READY,
  output logic [PARA_CTU_ID_WD-1:0]       O_LEAF_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]        O_LEAF_CU_ID,
  output logic [PARA_NODE_WD-1:0]         O_LEAF_NODE_DATA,
  output logic [4:0]                      O_LEAF_X_UNIT,
  output logic [4:0]                      O_LEAF_Y_UNIT,
  output logic [2:0]                      O_LEAF_WIDTH_CODE,
  output logic [2:0]                      O_LEAF_HEIGHT_CODE,
  output logic [1:0]                      O_LEAF_ACTIVITY,
  output logic                            O_LEAF_DOMINANT,
  output logic                            O_LEAF_STRONG_DOMINANT,
  output logic [2:0]                      O_LEAF_DIRECTION,
  output logic [2:0]                      O_LEAF_SECOND_DIRECTION,

  // Semantic partition-syntax output stream.
  output logic                            O_SYNTAX_VALID,
  input                                   I_SYNTAX_READY,

  output logic [PARA_CTU_ID_WD-1:0]       O_SYNTAX_CTU_ID,
  output logic [4:0]                      O_SYNTAX_X_UNIT,
  output logic [4:0]                      O_SYNTAX_Y_UNIT,
  output logic [2:0]                      O_SYNTAX_WIDTH_CODE,
  output logic [2:0]                      O_SYNTAX_HEIGHT_CODE,
  output logic [2:0]                      O_SYNTAX_QT_DEPTH,
  output logic [2:0]                      O_SYNTAX_MTT_DEPTH,
  output logic [1:0]                      O_SYNTAX_PART_IDX,
  output logic [5:0]                      O_SYNTAX_LEGAL_MASK,
  output logic [2:0]                      O_SYNTAX_SPLIT_TYPE,
  output logic                            O_SYNTAX_IS_LEAF,
  output logic [PARA_CU_ID_WD-1:0]        O_SYNTAX_CU_ID,

  // Status/debug.
  output logic                            O_BUSY,
  output logic                            O_DONE,
  output logic                            O_ERROR,
  output logic                            O_FEATURE_READY,
  output logic [5:0]                      O_CURRENT_LEGAL_MASK,
  output logic [2:0]                      O_CURRENT_SPLIT_TYPE,
  output logic [PARA_IDTV_WD-1:0]         O_CURRENT_IDTV,
  output logic [8:0]                      O_LEAF_COUNT,
  output logic [11:0]                     O_NEXT_NODE_ID,
  output logic [PARA_STACK_COUNT_WD-1:0]  O_STACK_COUNT,
  output logic [PARA_LEAF_COUNT_WD-1:0]   O_LEAF_FIFO_COUNT,
  output logic [PARA_SYNTAX_COUNT_WD-1:0] O_SYNTAX_FIFO_COUNT
);

//-----------------------------------------------------------
// CTU transaction and metadata.
//-----------------------------------------------------------

logic w_start_fire;
logic w_meta_load;
logic w_meta_clear;
logic w_meta_valid;
logic w_meta_feature_ready;
logic w_meta_feature_done;

logic [PARA_CTU_ID_WD-1:0] w_meta_ctu_id;
logic [PARA_CTU_X_WD-1:0]  w_meta_ctu_x;
logic [PARA_CTU_Y_WD-1:0]  w_meta_ctu_y;
logic [7:0]                 w_meta_valid_width;
logic [7:0]                 w_meta_valid_height;
logic [PARA_QP_WD-1:0]      w_meta_qp;
logic [3:0]                 w_meta_boundary_flags;
logic [PARA_NODE_WD-1:0]    w_root_node;

//-----------------------------------------------------------
// Feature tile loader.
//-----------------------------------------------------------

logic                            w_feature_start;
logic                            w_tile_loader_busy;
logic                            w_tile_loader_done;

logic                            w_tile_a_valid;
logic [4:0]                      w_tile_a_x;
logic [4:0]                      w_tile_a_y;
logic [PARA_TILE_DATA_WD-1:0]    w_tile_a_data;

logic                            w_tile_b_valid;
logic [4:0]                      w_tile_b_x;
logic [4:0]                      w_tile_b_y;
logic [PARA_TILE_DATA_WD-1:0]    w_tile_b_data;

//-----------------------------------------------------------
// Feature extractor pipelines.
//-----------------------------------------------------------

logic                            w_feature_a_valid;
logic [PARA_FEATURE_DATA_WD-1:0] w_feature_a_data;
logic                            w_feature_b_valid;
logic [PARA_FEATURE_DATA_WD-1:0] w_feature_b_data;

logic [4:0] r_tile_a_x_d1;
logic [4:0] r_tile_a_y_d1;
logic [4:0] r_tile_a_x_d2;
logic [4:0] r_tile_a_y_d2;
logic       r_tile_a_valid_d1;
logic       r_tile_a_valid_d2;

logic [4:0] r_tile_b_x_d1;
logic [4:0] r_tile_b_y_d1;
logic [4:0] r_tile_b_x_d2;
logic [4:0] r_tile_b_y_d2;
logic       r_tile_b_valid_d1;
logic       r_tile_b_valid_d2;

//-----------------------------------------------------------
// Feature-bank write/read interconnect.
//-----------------------------------------------------------

logic [PARA_FEATURE_ADDR_WD-1:0] w_feature_bank_a_wr_addr;
logic [PARA_FEATURE_ADDR_WD-1:0] w_feature_bank_b_wr_addr;
logic                            w_feature_bank_a_wr_en;
logic                            w_feature_bank_b_wr_en;

logic                            w_feature_bank_a_rd_en;
logic [PARA_FEATURE_ADDR_WD-1:0] w_feature_bank_a_rd_addr;
logic                            w_feature_bank_a_rd_valid;
logic [PARA_FEATURE_DATA_WD-1:0] w_feature_bank_a_rd_data;

logic                            w_feature_bank_b_rd_en;
logic [PARA_FEATURE_ADDR_WD-1:0] w_feature_bank_b_rd_addr;
logic                            w_feature_bank_b_rd_valid;
logic [PARA_FEATURE_DATA_WD-1:0] w_feature_bank_b_rd_data;

//-----------------------------------------------------------
// DFS node stack.
//-----------------------------------------------------------

logic                         w_stack_clear;
logic                         w_stack_push;
logic [PARA_NODE_WD-1:0]      w_stack_push_data;
logic                         w_stack_pop;
logic                         w_stack_pop_valid;
logic [PARA_NODE_WD-1:0]      w_stack_pop_data;
logic                         w_stack_empty;
logic                         w_stack_full;
logic [PARA_STACK_COUNT_WD-1:0] w_stack_count;

//-----------------------------------------------------------
// Current node.
//-----------------------------------------------------------

logic                         w_node_clear;
logic                         w_node_load;
logic [PARA_NODE_WD-1:0]      w_node_load_data;

logic                         w_node_valid;
logic [PARA_NODE_WD-1:0]      w_node_data;
logic [10:0]                  w_node_id;
logic [4:0]                   w_node_x_unit;
logic [4:0]                   w_node_y_unit;
logic [6:0]                   w_node_x;
logic [6:0]                   w_node_y;
logic [2:0]                   w_node_width_code;
logic [2:0]                   w_node_height_code;
logic [7:0]                   w_node_width;
logic [7:0]                   w_node_height;
logic [7:0]                   w_node_valid_width;
logic [7:0]                   w_node_valid_height;
logic [2:0]                   w_node_qt_depth;
logic [2:0]                   w_node_mtt_depth;
logic                         w_node_tree_phase;
logic [1:0]                   w_node_tree_type;
logic [2:0]                   w_node_parent_split_type;
logic [3:0]                   w_node_boundary_flags;
logic [1:0]                   w_node_part_idx;

//-----------------------------------------------------------
// Constraint checker.
//-----------------------------------------------------------

logic       w_legal_none;
logic       w_legal_qt;
logic       w_legal_hbt;
logic       w_legal_vbt;
logic       w_legal_htt;
logic       w_legal_vtt;
logic [5:0] w_legal_mask;

//-----------------------------------------------------------
// Region-feature query.
//-----------------------------------------------------------

logic                     w_query_start;
logic                     w_query_busy;
logic                     w_query_done;

logic [PARA_SUM_WD-1:0]    w_region_sum;
logic [PARA_SUM_SQ_WD-1:0] w_region_sum_sq;
logic [PARA_DV_WD-1:0]     w_region_dv_h;
logic [PARA_DV_WD-1:0]     w_region_dv_v;
logic [PARA_DV_WD-1:0]     w_region_dv_dl;
logic [PARA_DV_WD-1:0]     w_region_dv_dr;

//-----------------------------------------------------------
// Activity and direction classifiers.
//-----------------------------------------------------------

logic                      w_classify_valid;

logic                      w_activity_valid;
logic [1:0]                w_activity;
logic                      w_activity_low;
logic                      w_activity_medium;
logic                      w_activity_high;
logic [PARA_IDTV_WD-1:0]   w_idtv;
logic [PARA_IDTV_WD-1:0]   w_idtv_low_threshold;
logic [PARA_IDTV_WD-1:0]   w_idtv_high_threshold;
logic [PARA_VAR_WD-1:0]    w_var_num;

logic                      w_direction_valid;
logic                      w_dominant;
logic                      w_strong_dominant;
logic [2:0]                w_direction;
logic [2:0]                w_second_direction;
logic                      w_horizontal_dominant;
logic                      w_vertical_dominant;
logic                      w_diagonal_dominant;
logic [PARA_DV_WD-1:0]     w_m1;
logic [PARA_DV_WD-1:0]     w_m2;

//-----------------------------------------------------------
// Direct split decision.
//-----------------------------------------------------------

logic       w_decision_input_valid;
logic       w_decision_valid;
logic [2:0] w_selected_split_type;
logic       w_fallback_used;

//-----------------------------------------------------------
// Child-node generator.
//-----------------------------------------------------------

logic                      w_child_gen_valid;
logic [PARA_NODE_WD-1:0]   w_child_parent_node;
logic [2:0]                w_child_split_type;
logic [10:0]               w_child_node_id_base;

logic                      w_child_valid;
logic [2:0]                w_child_count;
logic [PARA_NODE_WD-1:0]   w_child_0;
logic [PARA_NODE_WD-1:0]   w_child_1;
logic [PARA_NODE_WD-1:0]   w_child_2;
logic [PARA_NODE_WD-1:0]   w_child_3;

//-----------------------------------------------------------
// Leaf FIFO.
//-----------------------------------------------------------

logic                         w_leaf_clear;
logic                         w_leaf_wr_valid;
logic                         w_leaf_wr_ready;
logic [PARA_CU_ID_WD-1:0]     w_leaf_wr_cu_id;
logic [PARA_NODE_WD-1:0]      w_leaf_wr_node_data;
logic [PARA_FEATURE_SUMMARY_WD-1:0] r_leaf_feature_summary;

logic                         w_leaf_rd_valid;
logic [PARA_CU_ID_WD-1:0]     w_leaf_rd_cu_id;
logic [PARA_NODE_WD-1:0]      w_leaf_rd_node_data;
logic [PARA_FEATURE_SUMMARY_WD-1:0] w_leaf_rd_feature_summary;
logic                         w_leaf_empty;
logic                         w_leaf_full;
logic [PARA_LEAF_COUNT_WD-1:0] w_leaf_fifo_count;

//-----------------------------------------------------------
// Syntax FIFO.
//-----------------------------------------------------------

logic                          w_syntax_clear;
logic                          w_syntax_wr_valid;
logic                          w_syntax_wr_ready;

logic [PARA_CTU_ID_WD-1:0]     w_syntax_wr_ctu_id;
logic [4:0]                    w_syntax_wr_x_unit;
logic [4:0]                    w_syntax_wr_y_unit;
logic [2:0]                    w_syntax_wr_width_code;
logic [2:0]                    w_syntax_wr_height_code;
logic [2:0]                    w_syntax_wr_qt_depth;
logic [2:0]                    w_syntax_wr_mtt_depth;
logic [1:0]                    w_syntax_wr_part_idx;
logic [5:0]                    w_syntax_wr_legal_mask;
logic [2:0]                    w_syntax_wr_split_type;
logic                          w_syntax_wr_is_leaf;
logic [PARA_CU_ID_WD-1:0]     w_syntax_wr_cu_id;

logic                          w_syntax_rd_valid;
logic [PARA_CTU_ID_WD-1:0]     w_syntax_rd_ctu_id;
logic [4:0]                    w_syntax_rd_x_unit;
logic [4:0]                    w_syntax_rd_y_unit;
logic [2:0]                    w_syntax_rd_width_code;
logic [2:0]                    w_syntax_rd_height_code;
logic [2:0]                    w_syntax_rd_qt_depth;
logic [2:0]                    w_syntax_rd_mtt_depth;
logic [1:0]                    w_syntax_rd_part_idx;
logic [5:0]                    w_syntax_rd_legal_mask;
logic [2:0]                    w_syntax_rd_split_type;
logic                          w_syntax_rd_is_leaf;
logic [PARA_CU_ID_WD-1:0]     w_syntax_rd_cu_id;

logic                          w_syntax_empty;
logic                          w_syntax_full;
logic [PARA_SYNTAX_COUNT_WD-1:0] w_syntax_fifo_count;

//-----------------------------------------------------------
// Control FSM status.
//-----------------------------------------------------------

logic                         w_fsm_start_ready;
logic                         w_fsm_busy;
logic                         w_fsm_done;
logic                         w_fsm_error;
logic [2:0]                   w_fsm_selected_split_type;
logic [8:0]                   w_fsm_leaf_count;
logic [11:0]                  w_fsm_next_node_id;

logic                         w_engine_done;

//-----------------------------------------------------------
// Leaf feature-summary capture.
//
// Feature-summary layout:
//   [9:8] ACTIVITY
//   [7]   DOMINANT
//   [6]   STRONG_DOMINANT
//   [5:3] DIRECTION
//   [2:0] SECOND_DIRECTION
//
// The activity/direction classifiers and direct split decision are
// combinational in ST_DECIDE. The summary is therefore captured with
// the accepted decision and kept stable until a leaf entry is written.
// Split-node summaries may be captured as well, but only the summary
// associated with a leaf decision is committed into the Leaf FIFO.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_leaf_feature_summary <= '0;
  else if (w_leaf_clear)
    r_leaf_feature_summary <= '0;
  else if (w_decision_valid && w_activity_valid && w_direction_valid)
    r_leaf_feature_summary <= {
      w_activity,
      w_dominant,
      w_strong_dominant,
      w_direction,
      w_second_direction
    };
end

//-----------------------------------------------------------
// Top-level transaction glue.
//-----------------------------------------------------------

assign w_start_fire =
  I_START &&
  w_fsm_start_ready;

assign w_meta_load = w_start_fire;

// The control FSM enters ST_DONE when all tree nodes have been
// traversed. Top-level completion additionally requires that Intra
// has consumed every Leaf CU from the output FIFO. This does not
// imply downstream Intra/Reconstruction/Reference completion.
assign w_engine_done =
  w_fsm_done &&
  w_leaf_empty;

// Metadata remains valid throughout one CTU transaction. It is only
// cleared when the error state is explicitly acknowledged.
assign w_meta_clear =
  I_CLEAR_ERROR &&
  w_fsm_error;

// Feature-ready is asserted on the same edge that stores the final
// feature entry into bank B. The final logical tile is (31,31).
assign w_meta_feature_done =
  w_feature_bank_b_wr_en &&
  (r_tile_b_x_d2 == 5'd31) &&
  (r_tile_b_y_d2 == 5'd31);

//-----------------------------------------------------------
// Extractor coordinate pipelines.
//
// PARTITION_FEATURE_EXTRACTOR has two registered valid stages. These
// two coordinate registers align the tile address with O_VALID.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_tile_a_valid_d1 <= 1'b0;
    r_tile_a_valid_d2 <= 1'b0;
    r_tile_b_valid_d1 <= 1'b0;
    r_tile_b_valid_d2 <= 1'b0;
  end
  else begin
    r_tile_a_valid_d1 <= w_tile_a_valid;
    r_tile_a_valid_d2 <= r_tile_a_valid_d1;

    r_tile_b_valid_d1 <= w_tile_b_valid;
    r_tile_b_valid_d2 <= r_tile_b_valid_d1;
  end
end

always_ff @ (posedge I_CLK) begin
  if (w_tile_a_valid) begin
    r_tile_a_x_d1 <= w_tile_a_x;
    r_tile_a_y_d1 <= w_tile_a_y;
  end

  if (r_tile_a_valid_d1) begin
    r_tile_a_x_d2 <= r_tile_a_x_d1;
    r_tile_a_y_d2 <= r_tile_a_y_d1;
  end

  if (w_tile_b_valid) begin
    r_tile_b_x_d1 <= w_tile_b_x;
    r_tile_b_y_d1 <= w_tile_b_y;
  end

  if (r_tile_b_valid_d1) begin
    r_tile_b_x_d2 <= r_tile_b_x_d1;
    r_tile_b_y_d2 <= r_tile_b_y_d1;
  end
end

assign w_feature_bank_a_wr_addr = {
  r_tile_a_y_d2,
  r_tile_a_x_d2[4:1]
};

assign w_feature_bank_b_wr_addr = {
  r_tile_b_y_d2,
  r_tile_b_x_d2[4:1]
};

assign w_feature_bank_a_wr_en =
  w_feature_a_valid &&
  r_tile_a_valid_d2;

assign w_feature_bank_b_wr_en =
  w_feature_b_valid &&
  r_tile_b_valid_d2;

// Both classifier valid signals are expected to be identical because
// they are driven by the same classification qualifier.
assign w_decision_input_valid =
  w_activity_valid &&
  w_direction_valid;

//-----------------------------------------------------------
// External output assignments.
//-----------------------------------------------------------

assign O_START_READY = w_fsm_start_ready;

// A Leaf CU is accepted exactly once on O_LEAF_VALID && I_LEAF_READY.
// The Leaf FIFO holds its payload stable while I_LEAF_READY is low.
assign O_LEAF_VALID             = w_leaf_rd_valid;
assign O_LEAF_CTU_ID            = w_meta_ctu_id;
assign O_LEAF_CU_ID             = w_leaf_rd_cu_id;
assign O_LEAF_NODE_DATA         = w_leaf_rd_node_data;
assign O_LEAF_X_UNIT            = w_leaf_rd_node_data[52:48];
assign O_LEAF_Y_UNIT            = w_leaf_rd_node_data[47:43];
assign O_LEAF_WIDTH_CODE        = w_leaf_rd_node_data[42:40];
assign O_LEAF_HEIGHT_CODE       = w_leaf_rd_node_data[39:37];
assign O_LEAF_ACTIVITY          = w_leaf_rd_feature_summary[9:8];
assign O_LEAF_DOMINANT          = w_leaf_rd_feature_summary[7];
assign O_LEAF_STRONG_DOMINANT   = w_leaf_rd_feature_summary[6];
assign O_LEAF_DIRECTION         = w_leaf_rd_feature_summary[5:3];
assign O_LEAF_SECOND_DIRECTION  = w_leaf_rd_feature_summary[2:0];

assign O_SYNTAX_VALID       = w_syntax_rd_valid;
assign O_SYNTAX_CTU_ID      = w_syntax_rd_ctu_id;
assign O_SYNTAX_X_UNIT      = w_syntax_rd_x_unit;
assign O_SYNTAX_Y_UNIT      = w_syntax_rd_y_unit;
assign O_SYNTAX_WIDTH_CODE  = w_syntax_rd_width_code;
assign O_SYNTAX_HEIGHT_CODE = w_syntax_rd_height_code;
assign O_SYNTAX_QT_DEPTH    = w_syntax_rd_qt_depth;
assign O_SYNTAX_MTT_DEPTH   = w_syntax_rd_mtt_depth;
assign O_SYNTAX_PART_IDX    = w_syntax_rd_part_idx;
assign O_SYNTAX_LEGAL_MASK  = w_syntax_rd_legal_mask;
assign O_SYNTAX_SPLIT_TYPE  = w_syntax_rd_split_type;
assign O_SYNTAX_IS_LEAF     = w_syntax_rd_is_leaf;
assign O_SYNTAX_CU_ID       = w_syntax_rd_cu_id;

assign O_BUSY =
  w_fsm_busy ||
  (w_fsm_done && !w_engine_done);

assign O_DONE  = w_engine_done;
assign O_ERROR = w_fsm_error;
assign O_FEATURE_READY      = w_meta_feature_ready;
assign O_CURRENT_LEGAL_MASK = w_legal_mask;
assign O_CURRENT_SPLIT_TYPE = w_fsm_selected_split_type;
assign O_CURRENT_IDTV       = w_idtv;
assign O_LEAF_COUNT         = w_fsm_leaf_count;
assign O_NEXT_NODE_ID       = w_fsm_next_node_id;
assign O_STACK_COUNT        = w_stack_count;
assign O_LEAF_FIFO_COUNT    = w_leaf_fifo_count;
assign O_SYNTAX_FIFO_COUNT  = w_syntax_fifo_count;

//-----------------------------------------------------------
// CTU metadata register.
//-----------------------------------------------------------

PARTITION_CTU_META_REG
#(
  .PARA_CTU_ID_WD        (PARA_CTU_ID_WD),
  .PARA_CTU_X_WD         (PARA_CTU_X_WD),
  .PARA_CTU_Y_WD         (PARA_CTU_Y_WD),
  .PARA_QP_WD            (PARA_QP_WD),
  .PARA_NODE_WD          (PARA_NODE_WD),
  .PARA_ROOT_WIDTH_CODE  (3'd5),
  .PARA_ROOT_HEIGHT_CODE (3'd5),
  .PARA_SINGLE_TREE_TYPE (2'b00)
)
U_CTU_META_REG
(
  .I_CLK            (I_CLK),
  .I_RESETN         (I_RESETN),
  .I_LOAD           (w_meta_load),
  .I_CLEAR          (w_meta_clear),
  .I_FEATURE_DONE   (w_meta_feature_done),

  .I_CTU_ID         (I_CTU_ID),
  .I_CTU_X          (I_CTU_X),
  .I_CTU_Y          (I_CTU_Y),
  .I_VALID_WIDTH    (I_VALID_WIDTH),
  .I_VALID_HEIGHT   (I_VALID_HEIGHT),
  .I_QP             (I_QP),
  .I_BOUNDARY_FLAGS (I_BOUNDARY_FLAGS),

  .O_META_VALID     (w_meta_valid),
  .O_FEATURE_READY  (w_meta_feature_ready),
  .O_CTU_ID         (w_meta_ctu_id),
  .O_CTU_X          (w_meta_ctu_x),
  .O_CTU_Y          (w_meta_ctu_y),
  .O_VALID_WIDTH    (w_meta_valid_width),
  .O_VALID_HEIGHT   (w_meta_valid_height),
  .O_QP             (w_meta_qp),
  .O_BOUNDARY_FLAGS (w_meta_boundary_flags),
  .O_ROOT_NODE      (w_root_node)
);

//-----------------------------------------------------------
// Feature pre-analysis front end.
//-----------------------------------------------------------

PARTITION_FEATURE_TILE_LOADER
#(
  .PARA_CTU_RD_ADDR_WD (PARA_CTU_RD_ADDR_WD),
  .PARA_CTU_RD_DATA_WD (PARA_CTU_RD_DATA_WD),
  .PARA_TILE_DATA_WD   (PARA_TILE_DATA_WD)
)
U_FEATURE_TILE_LOADER
(
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_START        (w_feature_start),
  .I_VALID_WIDTH  (w_meta_valid_width),
  .I_VALID_HEIGHT (w_meta_valid_height),

  .O_CTU_RD_REQ   (O_CTU_RD_REQ),
  .O_CTU_RD_ADDR  (O_CTU_RD_ADDR),
  .I_CTU_RD_VALID (I_CTU_RD_VALID),
  .I_CTU_RD_DATA  (I_CTU_RD_DATA),

  .O_TILE_A_VALID (w_tile_a_valid),
  .O_TILE_A_X     (w_tile_a_x),
  .O_TILE_A_Y     (w_tile_a_y),
  .O_TILE_A_DATA  (w_tile_a_data),

  .O_TILE_B_VALID (w_tile_b_valid),
  .O_TILE_B_X     (w_tile_b_x),
  .O_TILE_B_Y     (w_tile_b_y),
  .O_TILE_B_DATA  (w_tile_b_data),

  .O_BUSY         (w_tile_loader_busy),
  .O_DONE         (w_tile_loader_done)
);

PARTITION_FEATURE_EXTRACTOR
#(
  .PARA_PIXEL_WD        (10),
  .PARA_TILE_DATA_WD    (PARA_TILE_DATA_WD),
  .PARA_FEATURE_DATA_WD (PARA_FEATURE_DATA_WD)
)
U_FEATURE_EXTRACTOR_A
(
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_tile_a_valid),
  .I_TILE_DATA    (w_tile_a_data),
  .O_VALID        (w_feature_a_valid),
  .O_FEATURE_DATA (w_feature_a_data)
);

PARTITION_FEATURE_EXTRACTOR
#(
  .PARA_PIXEL_WD        (10),
  .PARA_TILE_DATA_WD    (PARA_TILE_DATA_WD),
  .PARA_FEATURE_DATA_WD (PARA_FEATURE_DATA_WD)
)
U_FEATURE_EXTRACTOR_B
(
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_tile_b_valid),
  .I_TILE_DATA    (w_tile_b_data),
  .O_VALID        (w_feature_b_valid),
  .O_FEATURE_DATA (w_feature_b_data)
);

//-----------------------------------------------------------
// Feature banks.
//-----------------------------------------------------------

PARTITION_FEATURE_BANK
#(
  .PARA_FEATURE_DATA_WD (PARA_FEATURE_DATA_WD),
  .PARA_DEPTH           (512),
  .PARA_ADDR_WD         (PARA_FEATURE_ADDR_WD)
)
U_FEATURE_BANK_A
(
  .I_CLK      (I_CLK),
  .I_RESETN   (I_RESETN),

  .I_WR_EN    (w_feature_bank_a_wr_en),
  .I_WR_ADDR  (w_feature_bank_a_wr_addr),
  .I_WR_DATA  (w_feature_a_data),

  .I_RD_EN    (w_feature_bank_a_rd_en),
  .I_RD_ADDR  (w_feature_bank_a_rd_addr),
  .O_RD_VALID (w_feature_bank_a_rd_valid),
  .O_RD_DATA  (w_feature_bank_a_rd_data)
);

PARTITION_FEATURE_BANK
#(
  .PARA_FEATURE_DATA_WD (PARA_FEATURE_DATA_WD),
  .PARA_DEPTH           (512),
  .PARA_ADDR_WD         (PARA_FEATURE_ADDR_WD)
)
U_FEATURE_BANK_B
(
  .I_CLK      (I_CLK),
  .I_RESETN   (I_RESETN),

  .I_WR_EN    (w_feature_bank_b_wr_en),
  .I_WR_ADDR  (w_feature_bank_b_wr_addr),
  .I_WR_DATA  (w_feature_b_data),

  .I_RD_EN    (w_feature_bank_b_rd_en),
  .I_RD_ADDR  (w_feature_bank_b_rd_addr),
  .O_RD_VALID (w_feature_bank_b_rd_valid),
  .O_RD_DATA  (w_feature_bank_b_rd_data)
);

//-----------------------------------------------------------
// DFS stack and current-node register.
//-----------------------------------------------------------

PARTITION_CTU_NODE_STACK
#(
  .PARA_NODE_WD (PARA_NODE_WD),
  .PARA_DEPTH   (PARA_STACK_DEPTH)
)
U_CTU_NODE_STACK
(
  .I_CLK        (I_CLK),
  .I_RESETN     (I_RESETN),
  .I_CLEAR      (w_stack_clear),

  .I_PUSH       (w_stack_push),
  .I_PUSH_DATA  (w_stack_push_data),
  .I_POP        (w_stack_pop),

  .O_POP_VALID  (w_stack_pop_valid),
  .O_POP_DATA   (w_stack_pop_data),
  .O_EMPTY      (w_stack_empty),
  .O_FULL       (w_stack_full),
  .O_COUNT      (w_stack_count)
);

PARTITION_NODE_REG
U_NODE_REG
(
  .I_CLK               (I_CLK),
  .I_RESETN            (I_RESETN),
  .I_CLEAR             (w_node_clear),
  .I_LOAD              (w_node_load),
  .I_NODE_DATA         (w_node_load_data),

  .O_VALID             (w_node_valid),
  .O_NODE_DATA         (w_node_data),

  .O_NODE_ID           (w_node_id),
  .O_X_UNIT            (w_node_x_unit),
  .O_Y_UNIT            (w_node_y_unit),
  .O_X                 (w_node_x),
  .O_Y                 (w_node_y),

  .O_WIDTH_CODE        (w_node_width_code),
  .O_HEIGHT_CODE       (w_node_height_code),
  .O_WIDTH             (w_node_width),
  .O_HEIGHT            (w_node_height),

  .O_VALID_WIDTH       (w_node_valid_width),
  .O_VALID_HEIGHT      (w_node_valid_height),

  .O_QT_DEPTH          (w_node_qt_depth),
  .O_MTT_DEPTH         (w_node_mtt_depth),
  .O_TREE_PHASE        (w_node_tree_phase),
  .O_TREE_TYPE         (w_node_tree_type),
  .O_PARENT_SPLIT_TYPE (w_node_parent_split_type),
  .O_BOUNDARY_FLAGS    (w_node_boundary_flags),
  .O_PART_IDX          (w_node_part_idx)
);

//-----------------------------------------------------------
// Split legality.
//-----------------------------------------------------------

PARTITION_CONSTRAINT_CHECKER
#(
  .PARA_MIN_QT_SIZE   (PARA_MIN_QT_SIZE),
  .PARA_MIN_BT_SIZE   (PARA_MIN_BT_SIZE),
  .PARA_MAX_BT_SIZE   (PARA_MAX_BT_SIZE),
  .PARA_MIN_TT_SIZE   (PARA_MIN_TT_SIZE),
  .PARA_MAX_TT_SIZE   (PARA_MAX_TT_SIZE),
  .PARA_MAX_MTT_DEPTH (PARA_MAX_MTT_DEPTH),
  .PARA_MAX_LEAF_SIZE (PARA_MAX_LEAF_SIZE),
  .PARA_ENABLE_TT     (PARA_ENABLE_TT)
)
U_CONSTRAINT_CHECKER
(
  .I_VALID             (w_node_valid),
  .I_WIDTH             (w_node_width),
  .I_HEIGHT            (w_node_height),
  .I_VALID_WIDTH       (w_node_valid_width),
  .I_VALID_HEIGHT      (w_node_valid_height),
  .I_MTT_DEPTH         (w_node_mtt_depth),
  .I_PART_IDX          (w_node_part_idx),
  .I_PARENT_SPLIT_TYPE (w_node_parent_split_type),

  .O_LEGAL_NONE        (w_legal_none),
  .O_LEGAL_QT          (w_legal_qt),
  .O_LEGAL_HBT         (w_legal_hbt),
  .O_LEGAL_VBT         (w_legal_vbt),
  .O_LEGAL_HTT         (w_legal_htt),
  .O_LEGAL_VTT         (w_legal_vtt),
  .O_LEGAL_MASK        (w_legal_mask)
);

//-----------------------------------------------------------
// Region-feature scan.
//-----------------------------------------------------------

PARTITION_REGION_FEATURE_QUERY
#(
  .PARA_FEATURE_DATA_WD (PARA_FEATURE_DATA_WD),
  .PARA_BANK_ADDR_WD    (PARA_FEATURE_ADDR_WD),
  .PARA_SUM_WD          (PARA_SUM_WD),
  .PARA_SUM_SQ_WD       (PARA_SUM_SQ_WD),
  .PARA_DV_WD           (PARA_DV_WD)
)
U_REGION_FEATURE_QUERY
(
  .I_CLK                 (I_CLK),
  .I_RESETN              (I_RESETN),
  .I_START               (w_query_start),

  .I_X_UNIT              (w_node_x_unit),
  .I_Y_UNIT              (w_node_y_unit),
  .I_WIDTH               (w_node_width),
  .I_HEIGHT              (w_node_height),

  .O_BANK_A_RD_EN        (w_feature_bank_a_rd_en),
  .O_BANK_A_RD_ADDR      (w_feature_bank_a_rd_addr),
  .I_BANK_A_RD_VALID     (w_feature_bank_a_rd_valid),
  .I_BANK_A_RD_DATA      (w_feature_bank_a_rd_data),

  .O_BANK_B_RD_EN        (w_feature_bank_b_rd_en),
  .O_BANK_B_RD_ADDR      (w_feature_bank_b_rd_addr),
  .I_BANK_B_RD_VALID     (w_feature_bank_b_rd_valid),
  .I_BANK_B_RD_DATA      (w_feature_bank_b_rd_data),

  .O_BUSY                (w_query_busy),
  .O_DONE                (w_query_done),

  .O_SUM                 (w_region_sum),
  .O_SUM_SQ              (w_region_sum_sq),
  .O_DV_H                (w_region_dv_h),
  .O_DV_V                (w_region_dv_v),
  .O_DV_DL               (w_region_dv_dl),
  .O_DV_DR               (w_region_dv_dr)
);

//-----------------------------------------------------------
// Activity and direction classification.
//-----------------------------------------------------------

PARTITION_ACTIVITY_CLASSIFIER
#(
  .PARA_SUM_WD        (PARA_SUM_WD),
  .PARA_SUM_SQ_WD     (PARA_SUM_SQ_WD),
  .PARA_DV_WD         (PARA_DV_WD),
  .PARA_IDTV_WD       (PARA_IDTV_WD),
  .PARA_VAR_WD        (PARA_VAR_WD),
  .PARA_QP_WD         (PARA_QP_WD),
  .PARA_USE_VARIANCE  (PARA_USE_VARIANCE),
  .PARA_IDTV_BIAS     (PARA_IDTV_BIAS),
  .PARA_HIGH_SHIFT    (PARA_HIGH_SHIFT)
)
U_ACTIVITY_CLASSIFIER
(
  .I_VALID               (w_classify_valid),

  .I_SUM                 (w_region_sum),
  .I_SUM_SQ              (w_region_sum_sq),
  .I_DV_H                (w_region_dv_h),
  .I_DV_V                (w_region_dv_v),
  .I_DV_DL               (w_region_dv_dl),
  .I_DV_DR               (w_region_dv_dr),

  .I_QP                  (w_meta_qp),
  .I_WIDTH_CODE          (w_node_width_code),
  .I_HEIGHT_CODE         (w_node_height_code),

  .O_VALID               (w_activity_valid),
  .O_ACTIVITY            (w_activity),
  .O_ACTIVITY_LOW        (w_activity_low),
  .O_ACTIVITY_MEDIUM     (w_activity_medium),
  .O_ACTIVITY_HIGH       (w_activity_high),

  .O_IDTV                (w_idtv),
  .O_IDTV_LOW_THRESHOLD  (w_idtv_low_threshold),
  .O_IDTV_HIGH_THRESHOLD (w_idtv_high_threshold),
  .O_VAR_NUM             (w_var_num)
);

PARTITION_DIRECTION_CLASSIFIER
#(
  .PARA_DV_WD (PARA_DV_WD)
)
U_DIRECTION_CLASSIFIER
(
  .I_VALID               (w_classify_valid),

  .I_DV_H                (w_region_dv_h),
  .I_DV_V                (w_region_dv_v),
  .I_DV_DL               (w_region_dv_dl),
  .I_DV_DR               (w_region_dv_dr),

  .O_VALID               (w_direction_valid),
  .O_DOMINANT            (w_dominant),
  .O_STRONG_DOMINANT     (w_strong_dominant),
  .O_DIRECTION           (w_direction),
  .O_SECOND_DIRECTION    (w_second_direction),

  .O_HORIZONTAL_DOMINANT (w_horizontal_dominant),
  .O_VERTICAL_DOMINANT   (w_vertical_dominant),
  .O_DIAGONAL_DOMINANT   (w_diagonal_dominant),

  .O_M1                  (w_m1),
  .O_M2                  (w_m2)
);

PARTITION_DIRECT_SPLIT_DECISION
U_DIRECT_SPLIT_DECISION
(
  .I_VALID               (w_decision_input_valid),
  .I_ACTIVITY            (w_activity),

  .I_DOMINANT            (w_dominant),
  .I_STRONG_DOMINANT     (w_strong_dominant),
  .I_HORIZONTAL_DOMINANT (w_horizontal_dominant),
  .I_VERTICAL_DOMINANT   (w_vertical_dominant),
  .I_DIAGONAL_DOMINANT   (w_diagonal_dominant),

  .I_LEGAL_MASK          (w_legal_mask),

  .O_VALID               (w_decision_valid),
  .O_SPLIT_TYPE          (w_selected_split_type),
  .O_FALLBACK_USED       (w_fallback_used)
);

//-----------------------------------------------------------
// Child-node generation.
//-----------------------------------------------------------

PARTITION_CTU_CHILD_NODE_GENERATOR
U_CTU_CHILD_NODE_GENERATOR
(
  .I_VALID              (w_child_gen_valid),
  .I_PARENT_NODE_DATA   (w_child_parent_node),
  .I_SPLIT_TYPE         (w_child_split_type),
  .I_CHILD_NODE_ID_BASE (w_child_node_id_base),

  .O_VALID              (w_child_valid),
  .O_CHILD_COUNT        (w_child_count),
  .O_CHILD_0            (w_child_0),
  .O_CHILD_1            (w_child_1),
  .O_CHILD_2            (w_child_2),
  .O_CHILD_3            (w_child_3)
);

//-----------------------------------------------------------
// Leaf-CU FIFO.
//-----------------------------------------------------------

PARTITION_CTU_CU_LEAF_FIFO
#(
  .PARA_CU_ID_WD           (PARA_CU_ID_WD),
  .PARA_NODE_WD            (PARA_NODE_WD),
  .PARA_FEATURE_SUMMARY_WD (PARA_FEATURE_SUMMARY_WD),
  .PARA_DEPTH              (PARA_LEAF_FIFO_DEPTH)
)
U_CTU_CU_LEAF_FIFO
(
  .I_CLK        (I_CLK),
  .I_RESETN     (I_RESETN),
  .I_CLEAR      (w_leaf_clear),

  .I_WR_VALID   (w_leaf_wr_valid),
  .O_WR_READY   (w_leaf_wr_ready),
  .I_CU_ID           (w_leaf_wr_cu_id),
  .I_NODE_DATA       (w_leaf_wr_node_data),
  .I_FEATURE_SUMMARY (r_leaf_feature_summary),

  .O_RD_VALID        (w_leaf_rd_valid),
  .I_RD_READY        (I_LEAF_READY),
  .O_CU_ID           (w_leaf_rd_cu_id),
  .O_NODE_DATA       (w_leaf_rd_node_data),
  .O_FEATURE_SUMMARY (w_leaf_rd_feature_summary),

  .O_EMPTY      (w_leaf_empty),
  .O_FULL       (w_leaf_full),
  .O_COUNT      (w_leaf_fifo_count)
);

//-----------------------------------------------------------
// Semantic syntax FIFO.
//-----------------------------------------------------------

PARTITION_SYNTAX_FIFO
#(
  .PARA_CTU_ID_WD (PARA_CTU_ID_WD),
  .PARA_CU_ID_WD  (PARA_CU_ID_WD),
  .PARA_DEPTH     (PARA_SYNTAX_FIFO_DEPTH)
)
U_SYNTAX_FIFO
(
  .I_CLK         (I_CLK),
  .I_RESETN      (I_RESETN),
  .I_CLEAR       (w_syntax_clear),

  .I_WR_VALID    (w_syntax_wr_valid),
  .O_WR_READY    (w_syntax_wr_ready),

  .I_CTU_ID      (w_syntax_wr_ctu_id),
  .I_X_UNIT      (w_syntax_wr_x_unit),
  .I_Y_UNIT      (w_syntax_wr_y_unit),
  .I_WIDTH_CODE  (w_syntax_wr_width_code),
  .I_HEIGHT_CODE (w_syntax_wr_height_code),
  .I_QT_DEPTH    (w_syntax_wr_qt_depth),
  .I_MTT_DEPTH   (w_syntax_wr_mtt_depth),
  .I_PART_IDX    (w_syntax_wr_part_idx),
  .I_LEGAL_MASK  (w_syntax_wr_legal_mask),
  .I_SPLIT_TYPE  (w_syntax_wr_split_type),
  .I_IS_LEAF     (w_syntax_wr_is_leaf),
  .I_CU_ID       (w_syntax_wr_cu_id),

  .O_RD_VALID    (w_syntax_rd_valid),
  .I_RD_READY    (I_SYNTAX_READY),

  .O_CTU_ID      (w_syntax_rd_ctu_id),
  .O_X_UNIT      (w_syntax_rd_x_unit),
  .O_Y_UNIT      (w_syntax_rd_y_unit),
  .O_WIDTH_CODE  (w_syntax_rd_width_code),
  .O_HEIGHT_CODE (w_syntax_rd_height_code),
  .O_QT_DEPTH    (w_syntax_rd_qt_depth),
  .O_MTT_DEPTH   (w_syntax_rd_mtt_depth),
  .O_PART_IDX    (w_syntax_rd_part_idx),
  .O_LEGAL_MASK  (w_syntax_rd_legal_mask),
  .O_SPLIT_TYPE  (w_syntax_rd_split_type),
  .O_IS_LEAF     (w_syntax_rd_is_leaf),
  .O_CU_ID       (w_syntax_rd_cu_id),

  .O_EMPTY       (w_syntax_empty),
  .O_FULL        (w_syntax_full),
  .O_COUNT       (w_syntax_fifo_count)
);

//-----------------------------------------------------------
// Main partition control FSM.
//-----------------------------------------------------------

PARTITION_CONTROL_FSM
#(
  .PARA_CTU_ID_WD (PARA_CTU_ID_WD),
  .PARA_CU_ID_WD  (PARA_CU_ID_WD),
  .PARA_NODE_WD   (PARA_NODE_WD)
)
U_CONTROL_FSM
(
  .I_CLK                     (I_CLK),
  .I_RESETN                  (I_RESETN),

  .I_START                   (I_START),
  .O_START_READY             (w_fsm_start_ready),
  .I_DONE_ACK                (I_DONE_ACK && w_engine_done),
  .I_CLEAR_ERROR             (I_CLEAR_ERROR),

  .I_META_VALID              (w_meta_valid),
  .I_FEATURE_READY           (w_meta_feature_ready),
  .I_CTU_ID                  (w_meta_ctu_id),
  .I_ROOT_NODE               (w_root_node),

  .O_FEATURE_START           (w_feature_start),

  .O_STACK_CLEAR             (w_stack_clear),
  .O_STACK_PUSH              (w_stack_push),
  .O_STACK_PUSH_DATA         (w_stack_push_data),
  .O_STACK_POP               (w_stack_pop),
  .I_STACK_POP_VALID         (w_stack_pop_valid),
  .I_STACK_POP_DATA          (w_stack_pop_data),
  .I_STACK_EMPTY             (w_stack_empty),
  .I_STACK_FULL              (w_stack_full),

  .O_NODE_CLEAR              (w_node_clear),
  .O_NODE_LOAD               (w_node_load),
  .O_NODE_LOAD_DATA          (w_node_load_data),
  .I_NODE_VALID              (w_node_valid),
  .I_NODE_DATA               (w_node_data),

  .I_LEGAL_MASK              (w_legal_mask),

  .O_QUERY_START             (w_query_start),
  .I_QUERY_BUSY              (w_query_busy),
  .I_QUERY_DONE              (w_query_done),

  .O_CLASSIFY_VALID          (w_classify_valid),

  .I_DECISION_VALID          (w_decision_valid),
  .I_SELECTED_SPLIT_TYPE     (w_selected_split_type),

  .O_CHILD_GEN_VALID         (w_child_gen_valid),
  .O_CHILD_PARENT_NODE       (w_child_parent_node),
  .O_CHILD_SPLIT_TYPE        (w_child_split_type),
  .O_CHILD_NODE_ID_BASE      (w_child_node_id_base),
  .I_CHILD_VALID             (w_child_valid),
  .I_CHILD_COUNT             (w_child_count),
  .I_CHILD_0                 (w_child_0),
  .I_CHILD_1                 (w_child_1),
  .I_CHILD_2                 (w_child_2),
  .I_CHILD_3                 (w_child_3),

  .O_LEAF_CLEAR              (w_leaf_clear),
  .O_LEAF_WR_VALID           (w_leaf_wr_valid),
  .I_LEAF_WR_READY           (w_leaf_wr_ready),
  .I_LEAF_EMPTY              (w_leaf_empty),
  .O_LEAF_CU_ID              (w_leaf_wr_cu_id),
  .O_LEAF_NODE_DATA          (w_leaf_wr_node_data),

  .O_SYNTAX_CLEAR            (w_syntax_clear),
  .O_SYNTAX_WR_VALID         (w_syntax_wr_valid),
  .I_SYNTAX_WR_READY         (w_syntax_wr_ready),
  .I_SYNTAX_EMPTY            (w_syntax_empty),

  .O_SYNTAX_CTU_ID           (w_syntax_wr_ctu_id),
  .O_SYNTAX_X_UNIT           (w_syntax_wr_x_unit),
  .O_SYNTAX_Y_UNIT           (w_syntax_wr_y_unit),
  .O_SYNTAX_WIDTH_CODE       (w_syntax_wr_width_code),
  .O_SYNTAX_HEIGHT_CODE      (w_syntax_wr_height_code),
  .O_SYNTAX_QT_DEPTH         (w_syntax_wr_qt_depth),
  .O_SYNTAX_MTT_DEPTH        (w_syntax_wr_mtt_depth),
  .O_SYNTAX_PART_IDX         (w_syntax_wr_part_idx),
  .O_SYNTAX_LEGAL_MASK       (w_syntax_wr_legal_mask),
  .O_SYNTAX_SPLIT_TYPE       (w_syntax_wr_split_type),
  .O_SYNTAX_IS_LEAF          (w_syntax_wr_is_leaf),
  .O_SYNTAX_CU_ID            (w_syntax_wr_cu_id),

  .O_BUSY                    (w_fsm_busy),
  .O_DONE                    (w_fsm_done),
  .O_ERROR                   (w_fsm_error),
  .O_SELECTED_SPLIT_TYPE     (w_fsm_selected_split_type),
  .O_LEAF_COUNT              (w_fsm_leaf_count),
  .O_NEXT_NODE_ID            (w_fsm_next_node_id)
);

endmodule: PARTITION_ENGINE
