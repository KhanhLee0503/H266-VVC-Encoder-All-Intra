//-----------------------------------------------------------
// Description: Deterministic VVC transform-tree / TU generator for
// one Leaf CU at a time.
//
// Project baseline:
// - All-Intra.
// - SINGLE_TREE.
// - ISP disabled.
// - SBT disabled.
// - MaxTbSizeY = 32 samples.
//
// The module accepts one Leaf-CU descriptor from the coding-tree
// partition stage, recursively splits oversized transform-tree nodes
// with a small internal DFS stack, and emits final TU descriptors.
//
// The split direction follows the H.266 transform_tree rule used when
// ISP is disabled and SBT is not used:
//
//   vertical split first when:
//     width > 32 and width > height
//
//   otherwise:
//     horizontal split
//
// Children are pushed in reverse order so the stack emits TUs in
// recursive transform-tree order.
//
// Final TU descriptor, 41 bits:
//
//   [40:32] CTU_ID       9 bits
//   [31:24] CU_ID        8 bits
//   [23:20] TU_ID        4 bits
//   [19:15] X_UNIT       5 bits, unit = 4 luma samples
//   [14:10] Y_UNIT       5 bits, unit = 4 luma samples
//   [9:7]   WIDTH_CODE   3 bits
//   [6:4]   HEIGHT_CODE  3 bits
//   [3:1]   TU_DEPTH     3 bits
//   [0]     LAST_TU      1 bit
//
// WIDTH_CODE / HEIGHT_CODE:
//   0 -> 4
//   1 -> 8
//   2 -> 16
//   3 -> 32
//   4 -> 64
//   5 -> 128
//
// A 3-bit TU_DEPTH is used because a 128x128 Leaf CU can require four
// recursive binary splits before reaching 32x32 TUs.
//
// Only synthesizable RTL constructs are used.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_TRANSFORM_TREE_GENERATOR
#(
  parameter PARA_CTU_ID_WD      = 9,
  parameter PARA_CU_ID_WD       = 8,
  parameter PARA_CU_NODE_WD     = 64,
  parameter PARA_STACK_DEPTH    = 8,

  localparam PARA_TU_ID_WD      = 4,
  localparam PARA_TU_DEPTH_WD   = 3,
  localparam PARA_TU_NODE_WD    = 19,
  localparam PARA_TU_DESC_WD    = 41,

  localparam PARA_STACK_ADDR_WD =
    (PARA_STACK_DEPTH <= 1) ? 1 :
    $clog2(PARA_STACK_DEPTH),

  localparam PARA_STACK_COUNT_WD =
    (PARA_STACK_DEPTH < 1) ? 1 :
    $clog2(PARA_STACK_DEPTH + 1)
)
(
  input                                  I_CLK,
  input                                  I_RESETN,

  // Leaf-CU input stream.
  input                                  I_CU_VALID,
  output logic                           O_CU_READY,

  input      [PARA_CTU_ID_WD-1:0]        I_CTU_ID,
  input      [PARA_CU_ID_WD-1:0]         I_CU_ID,
  input      [PARA_CU_NODE_WD-1:0]       I_CU_NODE_DATA,

  // Final TU output stream.
  output logic                           O_TU_VALID,
  input                                  I_TU_READY,
  output logic [PARA_TU_DESC_WD-1:0]     O_TU_DESCRIPTOR,

  // Status/debug.
  input                                  I_CLEAR_ERROR,
  output logic                           O_BUSY,
  output logic                           O_DONE,
  output logic                           O_ERROR,
  output logic [PARA_STACK_COUNT_WD-1:0] O_STACK_COUNT
);

// MaxTbSizeY = 32, therefore code 3 is the largest legal final TU
// width/height code in this project.
localparam PARA_MAX_TB_CODE = 3'd3;

typedef enum logic [3:0] {
  ST_IDLE,
  ST_PUSH_ROOT,
  ST_CHECK_STACK,
  ST_POP_NODE,
  ST_CHECK_NODE,
  ST_PUSH_CHILD_1,
  ST_PUSH_CHILD_0,
  ST_EMIT_TU,
  ST_DONE,
  ST_ERROR
} state_t;

state_t r_current_state;
state_t w_next_state;

//-----------------------------------------------------------
// CU context.
//-----------------------------------------------------------

logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
logic [PARA_CU_ID_WD-1:0]  r_cu_id;
logic [PARA_TU_NODE_WD-1:0] r_root_node;

//-----------------------------------------------------------
// Internal TU-node stack.
//
// TU node layout:
//   [18:14] X_UNIT
//   [13:9]  Y_UNIT
//   [8:6]   WIDTH_CODE
//   [5:3]   HEIGHT_CODE
//   [2:0]   TU_DEPTH
//-----------------------------------------------------------

logic [PARA_TU_NODE_WD-1:0] r_stack [0:PARA_STACK_DEPTH-1];
logic [PARA_STACK_COUNT_WD-1:0] r_stack_count;

logic w_stack_empty;
logic w_stack_full;

//-----------------------------------------------------------
// Current transform-tree node.
//-----------------------------------------------------------

logic [PARA_TU_NODE_WD-1:0] r_current_node;

logic [4:0] w_current_x_unit;
logic [4:0] w_current_y_unit;
logic [2:0] w_current_width_code;
logic [2:0] w_current_height_code;
logic [2:0] w_current_tu_depth;

logic       w_current_is_final_tu;
logic       w_vertical_split;

//-----------------------------------------------------------
// Child-node generation.
//-----------------------------------------------------------

logic [2:0] w_child_width_code;
logic [2:0] w_child_height_code;
logic [2:0] w_child_tu_depth;

logic [4:0] w_child_x_offset_unit;
logic [4:0] w_child_y_offset_unit;

logic [PARA_TU_NODE_WD-1:0] w_child_0;
logic [PARA_TU_NODE_WD-1:0] w_child_1;

//-----------------------------------------------------------
// TU output state.
//-----------------------------------------------------------

logic [PARA_TU_ID_WD-1:0] r_tu_id;

logic w_cu_accept;
logic w_tu_accept;
logic w_last_tu;

//-----------------------------------------------------------
// Input geometry checks.
//-----------------------------------------------------------

logic [2:0] w_input_width_code;
logic [2:0] w_input_height_code;
logic       w_input_geometry_valid;

assign w_input_width_code  = I_CU_NODE_DATA[42:40];
assign w_input_height_code = I_CU_NODE_DATA[39:37];

assign w_input_geometry_valid =
  (w_input_width_code <= 3'd5) &&
  (w_input_height_code <= 3'd5);

//-----------------------------------------------------------
// Stack status.
//-----------------------------------------------------------

assign w_stack_empty =
  (r_stack_count == {PARA_STACK_COUNT_WD{1'b0}});

assign w_stack_full =
  (r_stack_count == PARA_STACK_COUNT_WD'(PARA_STACK_DEPTH));

assign O_STACK_COUNT = r_stack_count;

//-----------------------------------------------------------
// Current-node decode.
//-----------------------------------------------------------

assign w_current_x_unit      = r_current_node[18:14];
assign w_current_y_unit      = r_current_node[13:9];
assign w_current_width_code  = r_current_node[8:6];
assign w_current_height_code = r_current_node[5:3];
assign w_current_tu_depth    = r_current_node[2:0];

assign w_current_is_final_tu =
  (w_current_width_code <= PARA_MAX_TB_CODE) &&
  (w_current_height_code <= PARA_MAX_TB_CODE);

// Equivalent to:
//   tbWidth > MaxTbSizeY && tbWidth > tbHeight
//
// Since block sizes are powers of two, WIDTH_CODE > HEIGHT_CODE
// is equivalent to tbWidth > tbHeight.
assign w_vertical_split =
  (w_current_width_code > PARA_MAX_TB_CODE) &&
  (w_current_width_code > w_current_height_code);

//-----------------------------------------------------------
// Child geometry.
//-----------------------------------------------------------

always_comb begin
  w_child_width_code  = w_current_width_code;
  w_child_height_code = w_current_height_code;
  w_child_tu_depth    = w_current_tu_depth + 3'd1;

  if (w_vertical_split)
    w_child_width_code =
      w_current_width_code - 3'd1;
  else
    w_child_height_code =
      w_current_height_code - 3'd1;
end

// Width offset in 4-sample units for the second child of a vertical
// split. The largest reachable child width code is 4 -> 64 samples
// -> 16 units.
always_comb begin
  w_child_x_offset_unit = 5'd0;

  unique casez (w_child_width_code)
    3'd0:    w_child_x_offset_unit = 5'd1;
    3'd1:    w_child_x_offset_unit = 5'd2;
    3'd2:    w_child_x_offset_unit = 5'd4;
    3'd3:    w_child_x_offset_unit = 5'd8;
    3'd4:    w_child_x_offset_unit = 5'd16;
    default: w_child_x_offset_unit = 5'd0;
  endcase
end

// Height offset in 4-sample units for the second child of a
// horizontal split.
always_comb begin
  w_child_y_offset_unit = 5'd0;

  unique casez (w_child_height_code)
    3'd0:    w_child_y_offset_unit = 5'd1;
    3'd1:    w_child_y_offset_unit = 5'd2;
    3'd2:    w_child_y_offset_unit = 5'd4;
    3'd3:    w_child_y_offset_unit = 5'd8;
    3'd4:    w_child_y_offset_unit = 5'd16;
    default: w_child_y_offset_unit = 5'd0;
  endcase
end

// Child 0 is always first in recursive traversal:
//   vertical   -> left child
//   horizontal -> top child
assign w_child_0 = {
  w_current_x_unit,
  w_current_y_unit,
  w_child_width_code,
  w_child_height_code,
  w_child_tu_depth
};

// Child 1 is:
//   vertical   -> right child
//   horizontal -> bottom child
always_comb begin
  w_child_1 = {
    w_current_x_unit,
    w_current_y_unit,
    w_child_width_code,
    w_child_height_code,
    w_child_tu_depth
  };

  if (w_vertical_split) begin
    w_child_1[18:14] =
      w_current_x_unit +
      w_child_x_offset_unit;
  end
  else begin
    w_child_1[13:9] =
      w_current_y_unit +
      w_child_y_offset_unit;
  end
end

//-----------------------------------------------------------
// Handshakes.
//-----------------------------------------------------------

assign w_cu_accept =
  I_CU_VALID &&
  O_CU_READY;

assign w_tu_accept =
  O_TU_VALID &&
  I_TU_READY;

// The current TU is last when no sibling/subtree remains in the DFS
// stack after the current node has already been popped.
assign w_last_tu =
  (r_current_state == ST_EMIT_TU) &&
  w_stack_empty;

//-----------------------------------------------------------
// FSM process 1: state register.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

//-----------------------------------------------------------
// FSM process 2: next-state logic.
//-----------------------------------------------------------

always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (I_CU_VALID) begin
        if (w_input_geometry_valid)
          w_next_state = ST_PUSH_ROOT;
        else
          w_next_state = ST_ERROR;
      end
    end

    ST_PUSH_ROOT: begin
      if (w_stack_full)
        w_next_state = ST_ERROR;
      else
        w_next_state = ST_CHECK_STACK;
    end

    ST_CHECK_STACK: begin
      if (w_stack_empty)
        w_next_state = ST_DONE;
      else
        w_next_state = ST_POP_NODE;
    end

    ST_POP_NODE: begin
      if (w_stack_empty)
        w_next_state = ST_ERROR;
      else
        w_next_state = ST_CHECK_NODE;
    end

    ST_CHECK_NODE: begin
      if (w_current_is_final_tu)
        w_next_state = ST_EMIT_TU;
      else
        w_next_state = ST_PUSH_CHILD_1;
    end

    ST_PUSH_CHILD_1: begin
      if (w_stack_full)
        w_next_state = ST_ERROR;
      else
        w_next_state = ST_PUSH_CHILD_0;
    end

    ST_PUSH_CHILD_0: begin
      if (w_stack_full)
        w_next_state = ST_ERROR;
      else
        w_next_state = ST_CHECK_STACK;
    end

    ST_EMIT_TU: begin
      if (w_tu_accept) begin
        if (w_last_tu)
          w_next_state = ST_DONE;
        else if (r_tu_id == {PARA_TU_ID_WD{1'b1}})
          w_next_state = ST_ERROR;
        else
          w_next_state = ST_CHECK_STACK;
      end
    end

    ST_DONE: begin
      w_next_state = ST_IDLE;
    end

    ST_ERROR: begin
      if (I_CLEAR_ERROR)
        w_next_state = ST_IDLE;
    end

    default: begin
      w_next_state = ST_ERROR;
    end
  endcase
end

//-----------------------------------------------------------
// FSM process 3: output decode.
//-----------------------------------------------------------

always_comb begin
  O_CU_READY      = 1'b0;
  O_TU_VALID      = 1'b0;
  O_TU_DESCRIPTOR = {PARA_TU_DESC_WD{1'b0}};

  O_BUSY  = 1'b0;
  O_DONE  = 1'b0;
  O_ERROR = 1'b0;

  // Descriptor payload is driven from registered CU context and the
  // registered current TU node. It therefore remains stable while
  // O_TU_VALID is asserted and I_TU_READY is low.
  O_TU_DESCRIPTOR = {
    r_ctu_id,
    r_cu_id,
    r_tu_id,
    w_current_x_unit,
    w_current_y_unit,
    w_current_width_code,
    w_current_height_code,
    w_current_tu_depth,
    w_last_tu
  };

  unique casez (r_current_state)
    ST_IDLE: begin
      O_CU_READY = 1'b1;
    end

    ST_PUSH_ROOT,
    ST_CHECK_STACK,
    ST_POP_NODE,
    ST_CHECK_NODE,
    ST_PUSH_CHILD_1,
    ST_PUSH_CHILD_0: begin
      O_BUSY = 1'b1;
    end

    ST_EMIT_TU: begin
      O_BUSY     = 1'b1;
      O_TU_VALID = 1'b1;
    end

    ST_DONE: begin
      O_DONE = 1'b1;
    end

    ST_ERROR: begin
      O_ERROR = 1'b1;
    end

    default: begin
      O_ERROR = 1'b1;
    end
  endcase
end

//-----------------------------------------------------------
// CU context and root-node capture.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK) begin
  if (w_cu_accept) begin
    r_ctu_id <= I_CTU_ID;
    r_cu_id  <= I_CU_ID;

    r_root_node <= {
      I_CU_NODE_DATA[52:48],
      I_CU_NODE_DATA[47:43],
      I_CU_NODE_DATA[42:40],
      I_CU_NODE_DATA[39:37],
      3'd0
    };
  end
end

//-----------------------------------------------------------
// Stack storage.
//
// No stack-memory reset loop is used. Stack validity is defined only
// by r_stack_count.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK) begin
  if ((r_current_state == ST_PUSH_ROOT) &&
      !w_stack_full) begin
    r_stack[r_stack_count] <= r_root_node;
  end
  else if ((r_current_state == ST_PUSH_CHILD_1) &&
           !w_stack_full) begin
    r_stack[r_stack_count] <= w_child_1;
  end
  else if ((r_current_state == ST_PUSH_CHILD_0) &&
           !w_stack_full) begin
    r_stack[r_stack_count] <= w_child_0;
  end
end

//-----------------------------------------------------------
// Stack occupancy.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stack_count <= '0;
  else if (I_CLEAR_ERROR)
    r_stack_count <= '0;
  else if (w_cu_accept)
    r_stack_count <= '0;
  else begin
    unique casez (r_current_state)
      ST_PUSH_ROOT: begin
        if (!w_stack_full)
          r_stack_count <=
            r_stack_count +
            PARA_STACK_COUNT_WD'(1);
      end

      ST_POP_NODE: begin
        if (!w_stack_empty)
          r_stack_count <=
            r_stack_count -
            PARA_STACK_COUNT_WD'(1);
      end

      ST_PUSH_CHILD_1: begin
        if (!w_stack_full)
          r_stack_count <=
            r_stack_count +
            PARA_STACK_COUNT_WD'(1);
      end

      ST_PUSH_CHILD_0: begin
        if (!w_stack_full)
          r_stack_count <=
            r_stack_count +
            PARA_STACK_COUNT_WD'(1);
      end

      default: begin
      end
    endcase
  end
end

//-----------------------------------------------------------
// Stack pop into current-node register.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK) begin
  if ((r_current_state == ST_POP_NODE) &&
      !w_stack_empty) begin
    r_current_node <=
      r_stack[r_stack_count - PARA_STACK_COUNT_WD'(1)];
  end
end

//-----------------------------------------------------------
// TU_ID generation.
//
// TU_ID is local to one Leaf CU. The largest supported Leaf CU,
// 128x128 with MaxTbSizeY=32, produces at most 16 final TUs.
//-----------------------------------------------------------

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_tu_id <= '0;
  else if (w_cu_accept)
    r_tu_id <= '0;
  else if (w_tu_accept)
    r_tu_id <=
      r_tu_id +
      PARA_TU_ID_WD'(1);
end

endmodule: PARTITION_TRANSFORM_TREE_GENERATOR
