//-----------------------------------------------------------
// Description: This module derives the legal VVC coding-tree
// split modes for the current luma coding-tree node. The logic is
// specialized for the project configuration of All-Intra coding,
// SINGLE_TREE partitioning, and luma-driven partition decisions.
// QT, BT, and TT availability follows the H.266 split-availability
// conditions that remain relevant to this configuration. Picture
// boundary conditions are represented by VALID_WIDTH and
// VALID_HEIGHT in the node descriptor.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_CONSTRAINT_CHECKER
#(
  parameter PARA_MIN_QT_SIZE     = 8,
  parameter PARA_MIN_BT_SIZE     = 8,
  parameter PARA_MAX_BT_SIZE     = 64,
  parameter PARA_MIN_TT_SIZE     = 8,
  parameter PARA_MAX_TT_SIZE     = 64,
  parameter PARA_MAX_MTT_DEPTH   = 4,
  parameter PARA_ENABLE_TT       = 1,
  localparam PARA_VPDU_SIZE      = 64,
  localparam PARA_TT_LIMIT       =
    (PARA_MAX_TT_SIZE < PARA_VPDU_SIZE) ?
    PARA_MAX_TT_SIZE : PARA_VPDU_SIZE,
  localparam PARA_TT_MIN_SPLIT_SIZE = 2 * PARA_MIN_TT_SIZE
)
(
  input              I_VALID,

  input      [7:0]   I_WIDTH,
  input      [7:0]   I_HEIGHT,
  input      [7:0]   I_VALID_WIDTH,
  input      [7:0]   I_VALID_HEIGHT,

  input      [2:0]   I_MTT_DEPTH,
  input      [1:0]   I_PART_IDX,
  input      [2:0]   I_PARENT_SPLIT_TYPE,

  output logic       O_LEGAL_NONE,
  output logic       O_LEGAL_QT,
  output logic       O_LEGAL_HBT,
  output logic       O_LEGAL_VBT,
  output logic       O_LEGAL_HTT,
  output logic       O_LEGAL_VTT,

  output logic [5:0] O_LEGAL_MASK
);

localparam PARA_SPLIT_HTT = 3'd4;
localparam PARA_SPLIT_VTT = 3'd5;

logic w_outside_right;
logic w_outside_bottom;

logic w_legal_none;
logic w_legal_qt;
logic w_legal_hbt;
logic w_legal_vbt;
logic w_legal_htt;
logic w_legal_vtt;

// VALID_WIDTH and VALID_HEIGHT describe the valid picture samples
// covered by this node. A value smaller than the nominal node size
// means that the coding-tree node extends beyond that picture edge.
always_comb begin
  w_outside_right  = 1'b0;
  w_outside_bottom = 1'b0;

  if (I_VALID_WIDTH < I_WIDTH)
    w_outside_right = 1'b1;

  if (I_VALID_HEIGHT < I_HEIGHT)
    w_outside_bottom = 1'b1;
end

// A node that extends beyond the right or bottom picture boundary
// must continue partitioning. A fully contained node may terminate
// as a leaf coding unit.
always_comb begin
  w_legal_none = 1'b0;

  if (I_VALID) begin
    if (!w_outside_right && !w_outside_bottom)
      w_legal_none = 1'b1;
  end
end

// QT is available only at MTT depth zero. For the SINGLE_TREE luma
// configuration, QT is unavailable when the block size has reached
// the configured minimum quadtree size.
always_comb begin
  w_legal_qt = 1'b0;

  if (I_VALID) begin
    if ((I_WIDTH > PARA_MIN_QT_SIZE) &&
        (I_MTT_DEPTH == 3'd0))
      w_legal_qt = 1'b1;
  end
end

// Horizontal binary split availability is derived from the H.266
// binary-split rules that apply to SINGLE_TREE All-Intra coding.
always_comb begin
  w_legal_hbt = 1'b1;

  if (!I_VALID)
    w_legal_hbt = 1'b0;
  else if (I_HEIGHT <= PARA_MIN_BT_SIZE)
    w_legal_hbt = 1'b0;
  else if (I_WIDTH > PARA_MAX_BT_SIZE)
    w_legal_hbt = 1'b0;
  else if (I_HEIGHT > PARA_MAX_BT_SIZE)
    w_legal_hbt = 1'b0;
  else if (I_MTT_DEPTH >= PARA_MAX_MTT_DEPTH)
    w_legal_hbt = 1'b0;
  else if ((I_WIDTH > PARA_VPDU_SIZE) &&
           w_outside_bottom)
    w_legal_hbt = 1'b0;
  else if (w_outside_right &&
           w_outside_bottom &&
           (I_WIDTH > PARA_MIN_QT_SIZE))
    w_legal_hbt = 1'b0;
  else if (w_outside_right &&
           !w_outside_bottom)
    w_legal_hbt = 1'b0;
  else if ((I_MTT_DEPTH != 3'd0) &&
           (I_PART_IDX == 2'd1) &&
           (I_PARENT_SPLIT_TYPE == PARA_SPLIT_HTT))
    w_legal_hbt = 1'b0;
  else if ((I_WIDTH > PARA_VPDU_SIZE) &&
           (I_HEIGHT <= PARA_VPDU_SIZE))
    w_legal_hbt = 1'b0;
end

// Vertical binary split availability is derived independently so
// the orientation-specific picture-boundary rules are preserved.
always_comb begin
  w_legal_vbt = 1'b1;

  if (!I_VALID)
    w_legal_vbt = 1'b0;
  else if (I_WIDTH <= PARA_MIN_BT_SIZE)
    w_legal_vbt = 1'b0;
  else if (I_WIDTH > PARA_MAX_BT_SIZE)
    w_legal_vbt = 1'b0;
  else if (I_HEIGHT > PARA_MAX_BT_SIZE)
    w_legal_vbt = 1'b0;
  else if (I_MTT_DEPTH >= PARA_MAX_MTT_DEPTH)
    w_legal_vbt = 1'b0;
  else if (w_outside_bottom)
    w_legal_vbt = 1'b0;
  else if ((I_HEIGHT > PARA_VPDU_SIZE) &&
           w_outside_right)
    w_legal_vbt = 1'b0;
  else if (w_outside_right &&
           w_outside_bottom &&
           (I_WIDTH > PARA_MIN_QT_SIZE))
    w_legal_vbt = 1'b0;
  else if ((I_MTT_DEPTH != 3'd0) &&
           (I_PART_IDX == 2'd1) &&
           (I_PARENT_SPLIT_TYPE == PARA_SPLIT_VTT))
    w_legal_vbt = 1'b0;
  else if ((I_WIDTH <= PARA_VPDU_SIZE) &&
           (I_HEIGHT > PARA_VPDU_SIZE))
    w_legal_vbt = 1'b0;
end

// Horizontal ternary split is allowed only for an in-picture node,
// within the configured MTT depth and ternary-tree size limits.
// The split dimension must be larger than two minimum TT units.
always_comb begin
  w_legal_htt = 1'b1;

  if (!I_VALID)
    w_legal_htt = 1'b0;
  else if (PARA_ENABLE_TT == 0)
    w_legal_htt = 1'b0;
  else if (I_HEIGHT <= PARA_TT_MIN_SPLIT_SIZE)
    w_legal_htt = 1'b0;
  else if (I_WIDTH > PARA_TT_LIMIT)
    w_legal_htt = 1'b0;
  else if (I_HEIGHT > PARA_TT_LIMIT)
    w_legal_htt = 1'b0;
  else if (I_MTT_DEPTH >= PARA_MAX_MTT_DEPTH)
    w_legal_htt = 1'b0;
  else if (w_outside_right || w_outside_bottom)
    w_legal_htt = 1'b0;
end

// Vertical ternary split uses the same common constraints while the
// minimum-size check is applied to the horizontal split dimension.
always_comb begin
  w_legal_vtt = 1'b1;

  if (!I_VALID)
    w_legal_vtt = 1'b0;
  else if (PARA_ENABLE_TT == 0)
    w_legal_vtt = 1'b0;
  else if (I_WIDTH <= PARA_TT_MIN_SPLIT_SIZE)
    w_legal_vtt = 1'b0;
  else if (I_WIDTH > PARA_TT_LIMIT)
    w_legal_vtt = 1'b0;
  else if (I_HEIGHT > PARA_TT_LIMIT)
    w_legal_vtt = 1'b0;
  else if (I_MTT_DEPTH >= PARA_MAX_MTT_DEPTH)
    w_legal_vtt = 1'b0;
  else if (w_outside_right || w_outside_bottom)
    w_legal_vtt = 1'b0;
end

assign O_LEGAL_NONE = w_legal_none;
assign O_LEGAL_QT   = w_legal_qt;
assign O_LEGAL_HBT  = w_legal_hbt;
assign O_LEGAL_VBT  = w_legal_vbt;
assign O_LEGAL_HTT  = w_legal_htt;
assign O_LEGAL_VTT  = w_legal_vtt;

// Bit order is {VTT, HTT, VBT, HBT, QT, NONE}.
assign O_LEGAL_MASK = {
  w_legal_vtt,
  w_legal_htt,
  w_legal_vbt,
  w_legal_hbt,
  w_legal_qt,
  w_legal_none
};

endmodule: PARTITION_CONSTRAINT_CHECKER
