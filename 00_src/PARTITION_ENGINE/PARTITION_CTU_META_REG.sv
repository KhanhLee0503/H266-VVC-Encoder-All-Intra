//-----------------------------------------------------------
// Description: This module stores the metadata of the current
// CTU for the partition engine. It also tracks completion of
// the CTU feature pre-analysis phase and generates the root
// node descriptor used to start the coding-tree traversal.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_CTU_META_REG
#(
  parameter PARA_CTU_ID_WD         = 9,
  parameter PARA_CTU_X_WD          = 5,
  parameter PARA_CTU_Y_WD          = 5,
  parameter PARA_QP_WD             = 6,
  parameter PARA_NODE_WD           = 64,
  parameter PARA_ROOT_WIDTH_CODE   = 3'd5,
  parameter PARA_ROOT_HEIGHT_CODE  = 3'd5,
  parameter PARA_SINGLE_TREE_TYPE  = 2'b00
)
(
  input                             I_CLK,
  input                             I_RESETN,

  input                             I_LOAD,
  input                             I_CLEAR,
  input                             I_FEATURE_DONE,

  input      [PARA_CTU_ID_WD-1:0]   I_CTU_ID,
  input      [PARA_CTU_X_WD-1:0]    I_CTU_X,
  input      [PARA_CTU_Y_WD-1:0]    I_CTU_Y,
  input      [7:0]                  I_VALID_WIDTH,
  input      [7:0]                  I_VALID_HEIGHT,
  input      [PARA_QP_WD-1:0]       I_QP,
  input      [3:0]                  I_BOUNDARY_FLAGS,

  output logic                      O_META_VALID,
  output logic                      O_FEATURE_READY,

  output logic [PARA_CTU_ID_WD-1:0] O_CTU_ID,
  output logic [PARA_CTU_X_WD-1:0]  O_CTU_X,
  output logic [PARA_CTU_Y_WD-1:0]  O_CTU_Y,
  output logic [7:0]                O_VALID_WIDTH,
  output logic [7:0]                O_VALID_HEIGHT,
  output logic [PARA_QP_WD-1:0]     O_QP,
  output logic [3:0]                O_BOUNDARY_FLAGS,

  output logic [PARA_NODE_WD-1:0]   O_ROOT_NODE
);

logic                              r_meta_valid;
logic                              r_feature_ready;

logic [PARA_CTU_ID_WD-1:0]         r_ctu_id;
logic [PARA_CTU_X_WD-1:0]          r_ctu_x;
logic [PARA_CTU_Y_WD-1:0]          r_ctu_y;
logic [7:0]                        r_valid_width;
logic [7:0]                        r_valid_height;
logic [PARA_QP_WD-1:0]             r_qp;
logic [3:0]                        r_boundary_flags;

logic [10:0]                       w_root_node_id;
logic [4:0]                        w_root_x_unit;
logic [4:0]                        w_root_y_unit;
logic [2:0]                        w_root_width_code;
logic [2:0]                        w_root_height_code;
logic [2:0]                        w_root_qt_depth;
logic [2:0]                        w_root_mtt_depth;
logic                              w_root_tree_phase;
logic [1:0]                        w_root_tree_type;
logic [2:0]                        w_root_parent_split_type;
logic [1:0]                        w_root_part_idx;
logic [2:0]                        w_root_reserved;

// The metadata validity and feature-ready state are resettable
// control registers.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_meta_valid    <= 1'b0;
    r_feature_ready <= 1'b0;
  end
  else if (I_CLEAR) begin
    r_meta_valid    <= 1'b0;
    r_feature_ready <= 1'b0;
  end
  else if (I_LOAD) begin
    r_meta_valid    <= 1'b1;
    r_feature_ready <= 1'b0;
  end
  else if (I_FEATURE_DONE && r_meta_valid) begin
    r_feature_ready <= 1'b1;
  end
end

// The CTU metadata registers are updated only when a new CTU
// is accepted. They do not require reset because r_meta_valid
// qualifies whether their contents are meaningful.
always_ff @ (posedge I_CLK) begin
  if (I_LOAD) begin
    r_ctu_id         <= I_CTU_ID;
    r_ctu_x          <= I_CTU_X;
    r_ctu_y          <= I_CTU_Y;
    r_valid_width    <= I_VALID_WIDTH;
    r_valid_height   <= I_VALID_HEIGHT;
    r_qp             <= I_QP;
    r_boundary_flags <= I_BOUNDARY_FLAGS;
  end
end

// The root coding-tree node always starts at the local CTU
// origin with zero QT and MTT depth.
always_comb begin
  w_root_node_id           = 11'd0;
  w_root_x_unit            = 5'd0;
  w_root_y_unit            = 5'd0;
  w_root_width_code        = PARA_ROOT_WIDTH_CODE;
  w_root_height_code       = PARA_ROOT_HEIGHT_CODE;
  w_root_qt_depth          = 3'd0;
  w_root_mtt_depth         = 3'd0;
  w_root_tree_phase        = 1'b0;
  w_root_tree_type         = PARA_SINGLE_TREE_TYPE;
  w_root_parent_split_type = 3'd0;
  w_root_part_idx          = 2'd0;
  w_root_reserved          = 3'd0;
end

// The 64-bit node descriptor layout is:
// [63:53] Node ID.
// [52:48] X position in units of four luma samples.
// [47:43] Y position in units of four luma samples.
// [42:40] Width code, log2(width) minus two.
// [39:37] Height code, log2(height) minus two.
// [36:29] Valid luma width.
// [28:21] Valid luma height.
// [20:18] QT depth.
// [17:15] MTT depth.
// [14]    Tree phase.
// [13:12] Tree type.
// [11:9]  Parent split type.
// [8:5]   Boundary flags.
// [4:3]   Child part index.
// [2:0]   Reserved.
always_comb begin
  O_ROOT_NODE = {
    w_root_node_id,
    w_root_x_unit,
    w_root_y_unit,
    w_root_width_code,
    w_root_height_code,
    r_valid_width,
    r_valid_height,
    w_root_qt_depth,
    w_root_mtt_depth,
    w_root_tree_phase,
    w_root_tree_type,
    w_root_parent_split_type,
    r_boundary_flags,
    w_root_part_idx,
    w_root_reserved
  };
end

assign O_META_VALID     = r_meta_valid;
assign O_FEATURE_READY  = r_feature_ready;

assign O_CTU_ID         = r_ctu_id;
assign O_CTU_X          = r_ctu_x;
assign O_CTU_Y          = r_ctu_y;
assign O_VALID_WIDTH    = r_valid_width;
assign O_VALID_HEIGHT   = r_valid_height;
assign O_QP             = r_qp;
assign O_BOUNDARY_FLAGS = r_boundary_flags;

endmodule: PARTITION_CTU_META_REG