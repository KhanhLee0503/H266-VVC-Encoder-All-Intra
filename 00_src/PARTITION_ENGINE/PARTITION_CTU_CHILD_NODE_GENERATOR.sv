//-----------------------------------------------------------
// Description: This module generates child node descriptors after
// a legal VVC coding-tree split decision. QT creates up to four
// children, BT creates up to two children, and TT creates three
// children. Child geometry, depth, part index, valid picture size,
// and boundary flags are derived combinationally. Child descriptors
// are emitted in coding-tree traversal order. Children whose
// top-left position is outside the valid picture area are omitted.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_CTU_CHILD_NODE_GENERATOR
(
  input               I_VALID,
  input      [63:0]   I_PARENT_NODE_DATA,
  input      [2:0]    I_SPLIT_TYPE,
  input      [10:0]   I_CHILD_NODE_ID_BASE,

  output logic        O_VALID,
  output logic [2:0]  O_CHILD_COUNT,
  output logic [63:0] O_CHILD_0,
  output logic [63:0] O_CHILD_1,
  output logic [63:0] O_CHILD_2,
  output logic [63:0] O_CHILD_3
);

localparam PARA_SPLIT_NONE = 3'd0;
localparam PARA_SPLIT_QT   = 3'd1;
localparam PARA_SPLIT_HBT  = 3'd2;
localparam PARA_SPLIT_VBT  = 3'd3;
localparam PARA_SPLIT_HTT  = 3'd4;
localparam PARA_SPLIT_VTT  = 3'd5;

logic [4:0] w_parent_x_unit;
logic [4:0] w_parent_y_unit;
logic [2:0] w_parent_width_code;
logic [2:0] w_parent_height_code;
logic [7:0] w_parent_valid_width;
logic [7:0] w_parent_valid_height;
logic [2:0] w_parent_qt_depth;
logic [2:0] w_parent_mtt_depth;
logic       w_parent_tree_phase;
logic [1:0] w_parent_tree_type;
logic [3:0] w_parent_boundary_flags;

logic       w_parent_left_boundary;
logic       w_parent_right_boundary;
logic       w_parent_top_boundary;
logic       w_parent_bottom_boundary;

logic [7:0] w_parent_width;
logic [7:0] w_parent_height;

logic       w_split_geometry_valid;

logic [7:0] w_child_0_offset_x;
logic [7:0] w_child_0_offset_y;
logic [7:0] w_child_1_offset_x;
logic [7:0] w_child_1_offset_y;
logic [7:0] w_child_2_offset_x;
logic [7:0] w_child_2_offset_y;
logic [7:0] w_child_3_offset_x;
logic [7:0] w_child_3_offset_y;

logic [7:0] w_child_0_width;
logic [7:0] w_child_0_height;
logic [7:0] w_child_1_width;
logic [7:0] w_child_1_height;
logic [7:0] w_child_2_width;
logic [7:0] w_child_2_height;
logic [7:0] w_child_3_width;
logic [7:0] w_child_3_height;

logic [2:0] w_child_0_width_code;
logic [2:0] w_child_0_height_code;
logic [2:0] w_child_1_width_code;
logic [2:0] w_child_1_height_code;
logic [2:0] w_child_2_width_code;
logic [2:0] w_child_2_height_code;
logic [2:0] w_child_3_width_code;
logic [2:0] w_child_3_height_code;

logic [1:0] w_child_0_part_idx;
logic [1:0] w_child_1_part_idx;
logic [1:0] w_child_2_part_idx;
logic [1:0] w_child_3_part_idx;

logic [2:0] w_child_qt_depth;
logic [2:0] w_child_mtt_depth;

logic [4:0] w_child_0_x_unit;
logic [4:0] w_child_0_y_unit;
logic [4:0] w_child_1_x_unit;
logic [4:0] w_child_1_y_unit;
logic [4:0] w_child_2_x_unit;
logic [4:0] w_child_2_y_unit;
logic [4:0] w_child_3_x_unit;
logic [4:0] w_child_3_y_unit;

logic [7:0] w_child_0_valid_width;
logic [7:0] w_child_0_valid_height;
logic [7:0] w_child_1_valid_width;
logic [7:0] w_child_1_valid_height;
logic [7:0] w_child_2_valid_width;
logic [7:0] w_child_2_valid_height;
logic [7:0] w_child_3_valid_width;
logic [7:0] w_child_3_valid_height;

logic [7:0] w_child_0_remaining_width;
logic [7:0] w_child_0_remaining_height;
logic [7:0] w_child_1_remaining_width;
logic [7:0] w_child_1_remaining_height;
logic [7:0] w_child_2_remaining_width;
logic [7:0] w_child_2_remaining_height;
logic [7:0] w_child_3_remaining_width;
logic [7:0] w_child_3_remaining_height;

logic       w_child_0_has_samples;
logic       w_child_1_has_samples;
logic       w_child_2_has_samples;
logic       w_child_3_has_samples;

logic [3:0] w_child_0_boundary_flags;
logic [3:0] w_child_1_boundary_flags;
logic [3:0] w_child_2_boundary_flags;
logic [3:0] w_child_3_boundary_flags;

logic [52:0] w_child_0_payload;
logic [52:0] w_child_1_payload;
logic [52:0] w_child_2_payload;
logic [52:0] w_child_3_payload;

logic [10:0] w_child_node_id_0;
logic [10:0] w_child_node_id_1;
logic [10:0] w_child_node_id_2;
logic [10:0] w_child_node_id_3;

assign w_parent_x_unit         = I_PARENT_NODE_DATA[52:48];
assign w_parent_y_unit         = I_PARENT_NODE_DATA[47:43];
assign w_parent_width_code     = I_PARENT_NODE_DATA[42:40];
assign w_parent_height_code    = I_PARENT_NODE_DATA[39:37];
assign w_parent_valid_width    = I_PARENT_NODE_DATA[36:29];
assign w_parent_valid_height   = I_PARENT_NODE_DATA[28:21];
assign w_parent_qt_depth       = I_PARENT_NODE_DATA[20:18];
assign w_parent_mtt_depth      = I_PARENT_NODE_DATA[17:15];
assign w_parent_tree_phase     = I_PARENT_NODE_DATA[14];
assign w_parent_tree_type      = I_PARENT_NODE_DATA[13:12];
assign w_parent_boundary_flags = I_PARENT_NODE_DATA[8:5];

assign w_parent_left_boundary   = w_parent_boundary_flags[3];
assign w_parent_right_boundary  = w_parent_boundary_flags[2];
assign w_parent_top_boundary    = w_parent_boundary_flags[1];
assign w_parent_bottom_boundary = w_parent_boundary_flags[0];

// Width and height codes are log2(size)-2. Explicit decode avoids
// a variable barrel shifter in the child-geometry path.
always_comb begin
  w_parent_width = 8'd0;

  unique casez (w_parent_width_code)
    3'd0:    w_parent_width = 8'd4;
    3'd1:    w_parent_width = 8'd8;
    3'd2:    w_parent_width = 8'd16;
    3'd3:    w_parent_width = 8'd32;
    3'd4:    w_parent_width = 8'd64;
    3'd5:    w_parent_width = 8'd128;
    default: w_parent_width = 8'd0;
  endcase
end

always_comb begin
  w_parent_height = 8'd0;

  unique casez (w_parent_height_code)
    3'd0:    w_parent_height = 8'd4;
    3'd1:    w_parent_height = 8'd8;
    3'd2:    w_parent_height = 8'd16;
    3'd3:    w_parent_height = 8'd32;
    3'd4:    w_parent_height = 8'd64;
    3'd5:    w_parent_height = 8'd128;
    default: w_parent_height = 8'd0;
  endcase
end

// Generate nominal child geometry. The constraint checker is
// expected to provide only legal split types, while the explicit
// geometry-valid flag protects against code underflow if integration
// logic supplies an invalid split.
always_comb begin
  w_split_geometry_valid = 1'b0;

  w_child_0_offset_x = 8'd0;
  w_child_0_offset_y = 8'd0;
  w_child_1_offset_x = 8'd0;
  w_child_1_offset_y = 8'd0;
  w_child_2_offset_x = 8'd0;
  w_child_2_offset_y = 8'd0;
  w_child_3_offset_x = 8'd0;
  w_child_3_offset_y = 8'd0;

  w_child_0_width  = 8'd0;
  w_child_0_height = 8'd0;
  w_child_1_width  = 8'd0;
  w_child_1_height = 8'd0;
  w_child_2_width  = 8'd0;
  w_child_2_height = 8'd0;
  w_child_3_width  = 8'd0;
  w_child_3_height = 8'd0;

  w_child_0_width_code  = 3'd0;
  w_child_0_height_code = 3'd0;
  w_child_1_width_code  = 3'd0;
  w_child_1_height_code = 3'd0;
  w_child_2_width_code  = 3'd0;
  w_child_2_height_code = 3'd0;
  w_child_3_width_code  = 3'd0;
  w_child_3_height_code = 3'd0;

  w_child_0_part_idx = 2'd0;
  w_child_1_part_idx = 2'd0;
  w_child_2_part_idx = 2'd0;
  w_child_3_part_idx = 2'd0;

  w_child_qt_depth  = w_parent_qt_depth;
  w_child_mtt_depth = w_parent_mtt_depth;

  unique casez (I_SPLIT_TYPE)
    PARA_SPLIT_QT: begin
      if ((w_parent_width_code != 3'd0) &&
          (w_parent_height_code != 3'd0)) begin
        w_split_geometry_valid = 1'b1;

        w_child_0_offset_x = 8'd0;
        w_child_0_offset_y = 8'd0;
        w_child_1_offset_x = w_parent_width >> 1;
        w_child_1_offset_y = 8'd0;
        w_child_2_offset_x = 8'd0;
        w_child_2_offset_y = w_parent_height >> 1;
        w_child_3_offset_x = w_parent_width >> 1;
        w_child_3_offset_y = w_parent_height >> 1;

        w_child_0_width  = w_parent_width >> 1;
        w_child_0_height = w_parent_height >> 1;
        w_child_1_width  = w_parent_width >> 1;
        w_child_1_height = w_parent_height >> 1;
        w_child_2_width  = w_parent_width >> 1;
        w_child_2_height = w_parent_height >> 1;
        w_child_3_width  = w_parent_width >> 1;
        w_child_3_height = w_parent_height >> 1;

        w_child_0_width_code  = w_parent_width_code - 3'd1;
        w_child_0_height_code = w_parent_height_code - 3'd1;
        w_child_1_width_code  = w_parent_width_code - 3'd1;
        w_child_1_height_code = w_parent_height_code - 3'd1;
        w_child_2_width_code  = w_parent_width_code - 3'd1;
        w_child_2_height_code = w_parent_height_code - 3'd1;
        w_child_3_width_code  = w_parent_width_code - 3'd1;
        w_child_3_height_code = w_parent_height_code - 3'd1;

        w_child_0_part_idx = 2'd0;
        w_child_1_part_idx = 2'd1;
        w_child_2_part_idx = 2'd2;
        w_child_3_part_idx = 2'd3;

        w_child_qt_depth  = w_parent_qt_depth + 3'd1;
        w_child_mtt_depth = 3'd0;
      end
    end

    PARA_SPLIT_HBT: begin
      if (w_parent_height_code != 3'd0) begin
        w_split_geometry_valid = 1'b1;

        w_child_0_offset_x = 8'd0;
        w_child_0_offset_y = 8'd0;
        w_child_1_offset_x = 8'd0;
        w_child_1_offset_y = w_parent_height >> 1;

        w_child_0_width  = w_parent_width;
        w_child_0_height = w_parent_height >> 1;
        w_child_1_width  = w_parent_width;
        w_child_1_height = w_parent_height >> 1;

        w_child_0_width_code  = w_parent_width_code;
        w_child_0_height_code = w_parent_height_code - 3'd1;
        w_child_1_width_code  = w_parent_width_code;
        w_child_1_height_code = w_parent_height_code - 3'd1;

        w_child_0_part_idx = 2'd0;
        w_child_1_part_idx = 2'd1;

        w_child_qt_depth  = w_parent_qt_depth;
        w_child_mtt_depth = w_parent_mtt_depth + 3'd1;
      end
    end

    PARA_SPLIT_VBT: begin
      if (w_parent_width_code != 3'd0) begin
        w_split_geometry_valid = 1'b1;

        w_child_0_offset_x = 8'd0;
        w_child_0_offset_y = 8'd0;
        w_child_1_offset_x = w_parent_width >> 1;
        w_child_1_offset_y = 8'd0;

        w_child_0_width  = w_parent_width >> 1;
        w_child_0_height = w_parent_height;
        w_child_1_width  = w_parent_width >> 1;
        w_child_1_height = w_parent_height;

        w_child_0_width_code  = w_parent_width_code - 3'd1;
        w_child_0_height_code = w_parent_height_code;
        w_child_1_width_code  = w_parent_width_code - 3'd1;
        w_child_1_height_code = w_parent_height_code;

        w_child_0_part_idx = 2'd0;
        w_child_1_part_idx = 2'd1;

        w_child_qt_depth  = w_parent_qt_depth;
        w_child_mtt_depth = w_parent_mtt_depth + 3'd1;
      end
    end

    PARA_SPLIT_HTT: begin
      if (w_parent_height_code >= 3'd2) begin
        w_split_geometry_valid = 1'b1;

        w_child_0_offset_x = 8'd0;
        w_child_0_offset_y = 8'd0;
        w_child_1_offset_x = 8'd0;
        w_child_1_offset_y = w_parent_height >> 2;
        w_child_2_offset_x = 8'd0;
        w_child_2_offset_y =
          (w_parent_height >> 1) +
          (w_parent_height >> 2);

        w_child_0_width  = w_parent_width;
        w_child_0_height = w_parent_height >> 2;
        w_child_1_width  = w_parent_width;
        w_child_1_height = w_parent_height >> 1;
        w_child_2_width  = w_parent_width;
        w_child_2_height = w_parent_height >> 2;

        w_child_0_width_code  = w_parent_width_code;
        w_child_0_height_code = w_parent_height_code - 3'd2;
        w_child_1_width_code  = w_parent_width_code;
        w_child_1_height_code = w_parent_height_code - 3'd1;
        w_child_2_width_code  = w_parent_width_code;
        w_child_2_height_code = w_parent_height_code - 3'd2;

        w_child_0_part_idx = 2'd0;
        w_child_1_part_idx = 2'd1;
        w_child_2_part_idx = 2'd2;

        w_child_qt_depth  = w_parent_qt_depth;
        w_child_mtt_depth = w_parent_mtt_depth + 3'd1;
      end
    end

    PARA_SPLIT_VTT: begin
      if (w_parent_width_code >= 3'd2) begin
        w_split_geometry_valid = 1'b1;

        w_child_0_offset_x = 8'd0;
        w_child_0_offset_y = 8'd0;
        w_child_1_offset_x = w_parent_width >> 2;
        w_child_1_offset_y = 8'd0;
        w_child_2_offset_x =
          (w_parent_width >> 1) +
          (w_parent_width >> 2);
        w_child_2_offset_y = 8'd0;

        w_child_0_width  = w_parent_width >> 2;
        w_child_0_height = w_parent_height;
        w_child_1_width  = w_parent_width >> 1;
        w_child_1_height = w_parent_height;
        w_child_2_width  = w_parent_width >> 2;
        w_child_2_height = w_parent_height;

        w_child_0_width_code  = w_parent_width_code - 3'd2;
        w_child_0_height_code = w_parent_height_code;
        w_child_1_width_code  = w_parent_width_code - 3'd1;
        w_child_1_height_code = w_parent_height_code;
        w_child_2_width_code  = w_parent_width_code - 3'd2;
        w_child_2_height_code = w_parent_height_code;

        w_child_0_part_idx = 2'd0;
        w_child_1_part_idx = 2'd1;
        w_child_2_part_idx = 2'd2;

        w_child_qt_depth  = w_parent_qt_depth;
        w_child_mtt_depth = w_parent_mtt_depth + 3'd1;
      end
    end

    default: begin
      w_split_geometry_valid = 1'b0;
    end
  endcase
end

// Convert pixel offsets to 4x4-unit coordinates. All legal coding
// block dimensions in this project are multiples of four.
assign w_child_0_x_unit =
  w_parent_x_unit + w_child_0_offset_x[6:2];
assign w_child_0_y_unit =
  w_parent_y_unit + w_child_0_offset_y[6:2];

assign w_child_1_x_unit =
  w_parent_x_unit + w_child_1_offset_x[6:2];
assign w_child_1_y_unit =
  w_parent_y_unit + w_child_1_offset_y[6:2];

assign w_child_2_x_unit =
  w_parent_x_unit + w_child_2_offset_x[6:2];
assign w_child_2_y_unit =
  w_parent_y_unit + w_child_2_offset_y[6:2];

assign w_child_3_x_unit =
  w_parent_x_unit + w_child_3_offset_x[6:2];
assign w_child_3_y_unit =
  w_parent_y_unit + w_child_3_offset_y[6:2];

// A candidate child exists only when its top-left position is still
// inside the valid picture area represented by the parent node.
assign w_child_0_has_samples =
  (w_child_0_offset_x < w_parent_valid_width) &&
  (w_child_0_offset_y < w_parent_valid_height);

assign w_child_1_has_samples =
  (w_child_1_offset_x < w_parent_valid_width) &&
  (w_child_1_offset_y < w_parent_valid_height);

assign w_child_2_has_samples =
  (w_child_2_offset_x < w_parent_valid_width) &&
  (w_child_2_offset_y < w_parent_valid_height);

assign w_child_3_has_samples =
  (w_child_3_offset_x < w_parent_valid_width) &&
  (w_child_3_offset_y < w_parent_valid_height);

// Child 0 valid dimensions are clipped against the parent's valid
// picture extent.
always_comb begin
  w_child_0_remaining_width  = 8'd0;
  w_child_0_remaining_height = 8'd0;
  w_child_0_valid_width      = 8'd0;
  w_child_0_valid_height     = 8'd0;

  if (w_child_0_offset_x < w_parent_valid_width)
    w_child_0_remaining_width =
      w_parent_valid_width - w_child_0_offset_x;

  if (w_child_0_offset_y < w_parent_valid_height)
    w_child_0_remaining_height =
      w_parent_valid_height - w_child_0_offset_y;

  if (w_child_0_remaining_width >= w_child_0_width)
    w_child_0_valid_width = w_child_0_width;
  else
    w_child_0_valid_width = w_child_0_remaining_width;

  if (w_child_0_remaining_height >= w_child_0_height)
    w_child_0_valid_height = w_child_0_height;
  else
    w_child_0_valid_height = w_child_0_remaining_height;
end

always_comb begin
  w_child_1_remaining_width  = 8'd0;
  w_child_1_remaining_height = 8'd0;
  w_child_1_valid_width      = 8'd0;
  w_child_1_valid_height     = 8'd0;

  if (w_child_1_offset_x < w_parent_valid_width)
    w_child_1_remaining_width =
      w_parent_valid_width - w_child_1_offset_x;

  if (w_child_1_offset_y < w_parent_valid_height)
    w_child_1_remaining_height =
      w_parent_valid_height - w_child_1_offset_y;

  if (w_child_1_remaining_width >= w_child_1_width)
    w_child_1_valid_width = w_child_1_width;
  else
    w_child_1_valid_width = w_child_1_remaining_width;

  if (w_child_1_remaining_height >= w_child_1_height)
    w_child_1_valid_height = w_child_1_height;
  else
    w_child_1_valid_height = w_child_1_remaining_height;
end

always_comb begin
  w_child_2_remaining_width  = 8'd0;
  w_child_2_remaining_height = 8'd0;
  w_child_2_valid_width      = 8'd0;
  w_child_2_valid_height     = 8'd0;

  if (w_child_2_offset_x < w_parent_valid_width)
    w_child_2_remaining_width =
      w_parent_valid_width - w_child_2_offset_x;

  if (w_child_2_offset_y < w_parent_valid_height)
    w_child_2_remaining_height =
      w_parent_valid_height - w_child_2_offset_y;

  if (w_child_2_remaining_width >= w_child_2_width)
    w_child_2_valid_width = w_child_2_width;
  else
    w_child_2_valid_width = w_child_2_remaining_width;

  if (w_child_2_remaining_height >= w_child_2_height)
    w_child_2_valid_height = w_child_2_height;
  else
    w_child_2_valid_height = w_child_2_remaining_height;
end

always_comb begin
  w_child_3_remaining_width  = 8'd0;
  w_child_3_remaining_height = 8'd0;
  w_child_3_valid_width      = 8'd0;
  w_child_3_valid_height     = 8'd0;

  if (w_child_3_offset_x < w_parent_valid_width)
    w_child_3_remaining_width =
      w_parent_valid_width - w_child_3_offset_x;

  if (w_child_3_offset_y < w_parent_valid_height)
    w_child_3_remaining_height =
      w_parent_valid_height - w_child_3_offset_y;

  if (w_child_3_remaining_width >= w_child_3_width)
    w_child_3_valid_width = w_child_3_width;
  else
    w_child_3_valid_width = w_child_3_remaining_width;

  if (w_child_3_remaining_height >= w_child_3_height)
    w_child_3_valid_height = w_child_3_height;
  else
    w_child_3_valid_height = w_child_3_remaining_height;
end

// Boundary propagation uses the valid picture extent rather than
// only nominal child geometry. This preserves RIGHT and BOTTOM when
// a full-size child exactly reaches the parent's valid boundary.
always_comb begin
  w_child_0_boundary_flags = 4'b0000;

  if (w_child_0_has_samples) begin
    w_child_0_boundary_flags[3] =
      w_parent_left_boundary &&
      (w_child_0_offset_x == 8'd0);

    w_child_0_boundary_flags[2] =
      w_parent_right_boundary &&
      ((w_child_0_offset_x + w_child_0_valid_width) >=
       w_parent_valid_width);

    w_child_0_boundary_flags[1] =
      w_parent_top_boundary &&
      (w_child_0_offset_y == 8'd0);

    w_child_0_boundary_flags[0] =
      w_parent_bottom_boundary &&
      ((w_child_0_offset_y + w_child_0_valid_height) >=
       w_parent_valid_height);
  end
end

always_comb begin
  w_child_1_boundary_flags = 4'b0000;

  if (w_child_1_has_samples) begin
    w_child_1_boundary_flags[3] =
      w_parent_left_boundary &&
      (w_child_1_offset_x == 8'd0);

    w_child_1_boundary_flags[2] =
      w_parent_right_boundary &&
      ((w_child_1_offset_x + w_child_1_valid_width) >=
       w_parent_valid_width);

    w_child_1_boundary_flags[1] =
      w_parent_top_boundary &&
      (w_child_1_offset_y == 8'd0);

    w_child_1_boundary_flags[0] =
      w_parent_bottom_boundary &&
      ((w_child_1_offset_y + w_child_1_valid_height) >=
       w_parent_valid_height);
  end
end

always_comb begin
  w_child_2_boundary_flags = 4'b0000;

  if (w_child_2_has_samples) begin
    w_child_2_boundary_flags[3] =
      w_parent_left_boundary &&
      (w_child_2_offset_x == 8'd0);

    w_child_2_boundary_flags[2] =
      w_parent_right_boundary &&
      ((w_child_2_offset_x + w_child_2_valid_width) >=
       w_parent_valid_width);

    w_child_2_boundary_flags[1] =
      w_parent_top_boundary &&
      (w_child_2_offset_y == 8'd0);

    w_child_2_boundary_flags[0] =
      w_parent_bottom_boundary &&
      ((w_child_2_offset_y + w_child_2_valid_height) >=
       w_parent_valid_height);
  end
end

always_comb begin
  w_child_3_boundary_flags = 4'b0000;

  if (w_child_3_has_samples) begin
    w_child_3_boundary_flags[3] =
      w_parent_left_boundary &&
      (w_child_3_offset_x == 8'd0);

    w_child_3_boundary_flags[2] =
      w_parent_right_boundary &&
      ((w_child_3_offset_x + w_child_3_valid_width) >=
       w_parent_valid_width);

    w_child_3_boundary_flags[1] =
      w_parent_top_boundary &&
      (w_child_3_offset_y == 8'd0);

    w_child_3_boundary_flags[0] =
      w_parent_bottom_boundary &&
      ((w_child_3_offset_y + w_child_3_valid_height) >=
       w_parent_valid_height);
  end
end

// Candidate payloads exclude NODE_ID. Dense node IDs are assigned
// only to children that are actually emitted.
assign w_child_0_payload = {
  w_child_0_x_unit,
  w_child_0_y_unit,
  w_child_0_width_code,
  w_child_0_height_code,
  w_child_0_valid_width,
  w_child_0_valid_height,
  w_child_qt_depth,
  w_child_mtt_depth,
  w_parent_tree_phase,
  w_parent_tree_type,
  I_SPLIT_TYPE,
  w_child_0_boundary_flags,
  w_child_0_part_idx,
  3'b000
};

assign w_child_1_payload = {
  w_child_1_x_unit,
  w_child_1_y_unit,
  w_child_1_width_code,
  w_child_1_height_code,
  w_child_1_valid_width,
  w_child_1_valid_height,
  w_child_qt_depth,
  w_child_mtt_depth,
  w_parent_tree_phase,
  w_parent_tree_type,
  I_SPLIT_TYPE,
  w_child_1_boundary_flags,
  w_child_1_part_idx,
  3'b000
};

assign w_child_2_payload = {
  w_child_2_x_unit,
  w_child_2_y_unit,
  w_child_2_width_code,
  w_child_2_height_code,
  w_child_2_valid_width,
  w_child_2_valid_height,
  w_child_qt_depth,
  w_child_mtt_depth,
  w_parent_tree_phase,
  w_parent_tree_type,
  I_SPLIT_TYPE,
  w_child_2_boundary_flags,
  w_child_2_part_idx,
  3'b000
};

assign w_child_3_payload = {
  w_child_3_x_unit,
  w_child_3_y_unit,
  w_child_3_width_code,
  w_child_3_height_code,
  w_child_3_valid_width,
  w_child_3_valid_height,
  w_child_qt_depth,
  w_child_mtt_depth,
  w_parent_tree_phase,
  w_parent_tree_type,
  I_SPLIT_TYPE,
  w_child_3_boundary_flags,
  w_child_3_part_idx,
  3'b000
};

assign w_child_node_id_0 = I_CHILD_NODE_ID_BASE;
assign w_child_node_id_1 = I_CHILD_NODE_ID_BASE + 11'd1;
assign w_child_node_id_2 = I_CHILD_NODE_ID_BASE + 11'd2;
assign w_child_node_id_3 = I_CHILD_NODE_ID_BASE + 11'd3;

// Emit only children whose top-left positions are inside the valid
// picture. Outputs are compacted while preserving the normative
// child traversal order and original part_idx value.
always_comb begin
  O_VALID       = 1'b0;
  O_CHILD_COUNT = 3'd0;

  O_CHILD_0 = 64'd0;
  O_CHILD_1 = 64'd0;
  O_CHILD_2 = 64'd0;
  O_CHILD_3 = 64'd0;

  if (I_VALID && w_split_geometry_valid) begin
    unique casez (I_SPLIT_TYPE)
      PARA_SPLIT_QT: begin
        if (w_child_0_has_samples) begin
          O_VALID   = 1'b1;
          O_CHILD_0 = {w_child_node_id_0, w_child_0_payload};

          if (w_child_1_has_samples &&
              w_child_2_has_samples) begin
            O_CHILD_COUNT = 3'd4;
            O_CHILD_1 =
              {w_child_node_id_1, w_child_1_payload};
            O_CHILD_2 =
              {w_child_node_id_2, w_child_2_payload};
            O_CHILD_3 =
              {w_child_node_id_3, w_child_3_payload};
          end
          else if (w_child_1_has_samples) begin
            O_CHILD_COUNT = 3'd2;
            O_CHILD_1 =
              {w_child_node_id_1, w_child_1_payload};
          end
          else if (w_child_2_has_samples) begin
            O_CHILD_COUNT = 3'd2;
            O_CHILD_1 =
              {w_child_node_id_1, w_child_2_payload};
          end
          else begin
            O_CHILD_COUNT = 3'd1;
          end
        end
      end

      PARA_SPLIT_HBT: begin
        if (w_child_0_has_samples) begin
          O_VALID   = 1'b1;
          O_CHILD_0 =
            {w_child_node_id_0, w_child_0_payload};

          if (w_child_1_has_samples) begin
            O_CHILD_COUNT = 3'd2;
            O_CHILD_1 =
              {w_child_node_id_1, w_child_1_payload};
          end
          else begin
            O_CHILD_COUNT = 3'd1;
          end
        end
      end

      PARA_SPLIT_VBT: begin
        if (w_child_0_has_samples) begin
          O_VALID   = 1'b1;
          O_CHILD_0 =
            {w_child_node_id_0, w_child_0_payload};

          if (w_child_1_has_samples) begin
            O_CHILD_COUNT = 3'd2;
            O_CHILD_1 =
              {w_child_node_id_1, w_child_1_payload};
          end
          else begin
            O_CHILD_COUNT = 3'd1;
          end
        end
      end

      PARA_SPLIT_HTT: begin
        if (w_child_0_has_samples &&
            w_child_1_has_samples &&
            w_child_2_has_samples) begin
          O_VALID       = 1'b1;
          O_CHILD_COUNT = 3'd3;
          O_CHILD_0 =
            {w_child_node_id_0, w_child_0_payload};
          O_CHILD_1 =
            {w_child_node_id_1, w_child_1_payload};
          O_CHILD_2 =
            {w_child_node_id_2, w_child_2_payload};
        end
      end

      PARA_SPLIT_VTT: begin
        if (w_child_0_has_samples &&
            w_child_1_has_samples &&
            w_child_2_has_samples) begin
          O_VALID       = 1'b1;
          O_CHILD_COUNT = 3'd3;
          O_CHILD_0 =
            {w_child_node_id_0, w_child_0_payload};
          O_CHILD_1 =
            {w_child_node_id_1, w_child_1_payload};
          O_CHILD_2 =
            {w_child_node_id_2, w_child_2_payload};
        end
      end

      default: begin
        O_VALID       = 1'b0;
        O_CHILD_COUNT = 3'd0;
      end
    endcase
  end
end

endmodule: PARTITION_CTU_CHILD_NODE_GENERATOR
