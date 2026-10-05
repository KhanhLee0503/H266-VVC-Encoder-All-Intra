//-----------------------------------------------------------
// Description: This module orchestrates the complete CTU coding-tree
// partition flow. It starts feature pre-analysis, initializes the DFS
// node stack, loads one current node at a time, starts region-feature
// queries, accepts the direct split decision, emits the semantic syntax
// event before child traversal, stores leaf CUs, and pushes generated
// children onto the LIFO stack in reverse order so they are popped in
// H.266 coding-tree DFS order.
//
// The module does not calculate features, constraints, activity,
// direction, or child geometry. Those datapaths remain in their
// dedicated modules. This FSM only sequences them.
//
// Only synthesizable RTL constructs are used.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_CONTROL_FSM
#(
  parameter PARA_CTU_ID_WD = 9,
  parameter PARA_CU_ID_WD  = 8,
  parameter PARA_NODE_WD   = 64,

  localparam PARA_CU_COUNT_WD = PARA_CU_ID_WD + 1
)
(
  input                              I_CLK,
  input                              I_RESETN,

  // Partition transaction control.
  input                              I_START,
  output logic                       O_START_READY,
  input                              I_DONE_ACK,
  input                              I_CLEAR_ERROR,

  // Current CTU metadata.
  input                              I_META_VALID,
  input                              I_FEATURE_READY,
  input      [PARA_CTU_ID_WD-1:0]    I_CTU_ID,
  input      [PARA_NODE_WD-1:0]      I_ROOT_NODE,

  // Feature pre-analysis control.
  output logic                       O_FEATURE_START,

  // CTU node stack control.
  output logic                       O_STACK_CLEAR,
  output logic                       O_STACK_PUSH,
  output logic [PARA_NODE_WD-1:0]    O_STACK_PUSH_DATA,
  output logic                       O_STACK_POP,
  input                              I_STACK_POP_VALID,
  input      [PARA_NODE_WD-1:0]      I_STACK_POP_DATA,
  input                              I_STACK_EMPTY,
  input                              I_STACK_FULL,

  // Current-node register control.
  output logic                       O_NODE_CLEAR,
  output logic                       O_NODE_LOAD,
  output logic [PARA_NODE_WD-1:0]    O_NODE_LOAD_DATA,
  input                              I_NODE_VALID,
  input      [PARA_NODE_WD-1:0]      I_NODE_DATA,

  // Constraint checker result for the current node.
  input      [5:0]                   I_LEGAL_MASK,

  // Region feature query control.
  output logic                       O_QUERY_START,
  input                              I_QUERY_BUSY,
  input                              I_QUERY_DONE,

  // Activity/direction classifier valid qualifier.
  output logic                       O_CLASSIFY_VALID,

  // Direct split decision result.
  input                              I_DECISION_VALID,
  input      [2:0]                   I_SELECTED_SPLIT_TYPE,

  // Child-node generator control and result.
  output logic                       O_CHILD_GEN_VALID,
  output logic [PARA_NODE_WD-1:0]    O_CHILD_PARENT_NODE,
  output logic [2:0]                 O_CHILD_SPLIT_TYPE,
  output logic [10:0]                O_CHILD_NODE_ID_BASE,
  input                              I_CHILD_VALID,
  input      [2:0]                   I_CHILD_COUNT,
  input      [PARA_NODE_WD-1:0]      I_CHILD_0,
  input      [PARA_NODE_WD-1:0]      I_CHILD_1,
  input      [PARA_NODE_WD-1:0]      I_CHILD_2,
  input      [PARA_NODE_WD-1:0]      I_CHILD_3,

  // Leaf-CU FIFO write interface.
  output logic                       O_LEAF_CLEAR,
  output logic                       O_LEAF_WR_VALID,
  input                              I_LEAF_WR_READY,
  input                              I_LEAF_EMPTY,
  output logic [PARA_CU_ID_WD-1:0]   O_LEAF_CU_ID,
  output logic [PARA_NODE_WD-1:0]    O_LEAF_NODE_DATA,

  // Semantic partition-syntax FIFO write interface.
  output logic                       O_SYNTAX_CLEAR,
  output logic                       O_SYNTAX_WR_VALID,
  input                              I_SYNTAX_WR_READY,
  input                              I_SYNTAX_EMPTY,

  output logic [PARA_CTU_ID_WD-1:0]  O_SYNTAX_CTU_ID,
  output logic [4:0]                 O_SYNTAX_X_UNIT,
  output logic [4:0]                 O_SYNTAX_Y_UNIT,
  output logic [2:0]                 O_SYNTAX_WIDTH_CODE,
  output logic [2:0]                 O_SYNTAX_HEIGHT_CODE,
  output logic [2:0]                 O_SYNTAX_QT_DEPTH,
  output logic [2:0]                 O_SYNTAX_MTT_DEPTH,
  output logic [1:0]                 O_SYNTAX_PART_IDX,
  output logic [5:0]                 O_SYNTAX_LEGAL_MASK,
  output logic [2:0]                 O_SYNTAX_SPLIT_TYPE,
  output logic                       O_SYNTAX_IS_LEAF,
  output logic [PARA_CU_ID_WD-1:0]   O_SYNTAX_CU_ID,

  // Partition status and useful debug counters.
  output logic                       O_BUSY,
  output logic                       O_DONE,
  output logic                       O_ERROR,
  output logic [2:0]                 O_SELECTED_SPLIT_TYPE,
  output logic [PARA_CU_COUNT_WD-1:0] O_LEAF_COUNT,
  output logic [11:0]                O_NEXT_NODE_ID
);

localparam PARA_SPLIT_NONE = 3'd0;
localparam PARA_SPLIT_QT   = 3'd1;
localparam PARA_SPLIT_HBT  = 3'd2;
localparam PARA_SPLIT_VBT  = 3'd3;
localparam PARA_SPLIT_HTT  = 3'd4;
localparam PARA_SPLIT_VTT  = 3'd5;

localparam [PARA_CU_COUNT_WD-1:0] PARA_MAX_LEAF_COUNT =
  PARA_CU_COUNT_WD'(1 << PARA_CU_ID_WD);

typedef enum logic [4:0] {
  ST_IDLE,
  ST_CLEAR,
  ST_WAIT_META,
  ST_FEATURE_START,
  ST_WAIT_FEATURE,
  ST_PUSH_ROOT,
  ST_CHECK_STACK,
  ST_POP_REQUEST,
  ST_WAIT_POP,
  ST_LOAD_NODE,
  ST_QUERY_START,
  ST_WAIT_QUERY,
  ST_DECIDE,
  ST_CHILD_PREPARE,
  ST_EMIT_SYNTAX,
  ST_WRITE_LEAF,
  ST_PUSH_CHILD,
  ST_DONE,
  ST_ERROR
} state_t;

state_t r_current_state;
state_t w_next_state;

logic [PARA_NODE_WD-1:0] r_popped_node;

logic [2:0] r_selected_split_type;
logic [5:0] r_selected_legal_mask;

logic [PARA_CU_ID_WD-1:0]    r_next_cu_id;
logic [PARA_CU_COUNT_WD-1:0] r_leaf_count;

// Twelve bits are used internally so 2048 can represent the
// one-past-the-last value after allocating NODE_ID 2047.
logic [11:0] r_next_node_id;

logic [2:0] r_child_count;
logic [1:0] r_child_push_index;

logic [PARA_NODE_WD-1:0] w_selected_child;

logic                     w_selected_split_legal;
logic                     w_leaf_capacity_available;
logic                     w_child_count_valid;
logic [11:0]              w_child_last_id;
logic                     w_child_id_capacity_available;

logic                     w_syntax_write_fire;
logic                     w_leaf_write_fire;
logic                     w_stack_push_fire;

// Selected child data is taken in reverse order. The child generator
// itself emits children in normal coding-tree order.
always_comb begin
  w_selected_child = {PARA_NODE_WD{1'b0}};

  unique casez (r_child_push_index)
    2'd0: begin
      w_selected_child = I_CHILD_0;
    end

    2'd1: begin
      w_selected_child = I_CHILD_1;
    end

    2'd2: begin
      w_selected_child = I_CHILD_2;
    end

    2'd3: begin
      w_selected_child = I_CHILD_3;
    end

    default: begin
      w_selected_child = {PARA_NODE_WD{1'b0}};
    end
  endcase
end

// Verify that the direct decision selected a split enabled by the
// current legal mask.
always_comb begin
  w_selected_split_legal = 1'b0;

  unique casez (I_SELECTED_SPLIT_TYPE)
    PARA_SPLIT_NONE: w_selected_split_legal = I_LEGAL_MASK[0];
    PARA_SPLIT_QT:   w_selected_split_legal = I_LEGAL_MASK[1];
    PARA_SPLIT_HBT:  w_selected_split_legal = I_LEGAL_MASK[2];
    PARA_SPLIT_VBT:  w_selected_split_legal = I_LEGAL_MASK[3];
    PARA_SPLIT_HTT:  w_selected_split_legal = I_LEGAL_MASK[4];
    PARA_SPLIT_VTT:  w_selected_split_legal = I_LEGAL_MASK[5];
    default:         w_selected_split_legal = 1'b0;
  endcase
end

assign w_leaf_capacity_available =
  (r_leaf_count < PARA_MAX_LEAF_COUNT);

assign w_child_count_valid =
  (I_CHILD_COUNT >= 3'd1) &&
  (I_CHILD_COUNT <= 3'd4);

// Last allocated child ID is base + count - 1. A legal 11-bit node
// ID must not exceed 2047.
assign w_child_last_id =
  r_next_node_id +
  {9'd0, I_CHILD_COUNT} -
  12'd1;

assign w_child_id_capacity_available =
  (r_next_node_id <= 12'd2047) &&
  (w_child_last_id <= 12'd2047);

assign w_syntax_write_fire =
  O_SYNTAX_WR_VALID &&
  I_SYNTAX_WR_READY;

assign w_leaf_write_fire =
  O_LEAF_WR_VALID &&
  I_LEAF_WR_READY;

assign w_stack_push_fire =
  O_STACK_PUSH &&
  !I_STACK_FULL;

// Process 1: FSM state register.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

// Process 2: FSM next-state logic.
always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (I_START &&
          I_LEAF_EMPTY &&
          I_SYNTAX_EMPTY)
        w_next_state = ST_CLEAR;
    end

    ST_CLEAR: begin
      w_next_state = ST_WAIT_META;
    end

    ST_WAIT_META: begin
      if (I_META_VALID) begin
        if (I_FEATURE_READY)
          w_next_state = ST_PUSH_ROOT;
        else
          w_next_state = ST_FEATURE_START;
      end
    end

    ST_FEATURE_START: begin
      w_next_state = ST_WAIT_FEATURE;
    end

    ST_WAIT_FEATURE: begin
      if (!I_META_VALID)
        w_next_state = ST_ERROR;
      else if (I_FEATURE_READY)
        w_next_state = ST_PUSH_ROOT;
    end

    ST_PUSH_ROOT: begin
      if (!I_META_VALID)
        w_next_state = ST_ERROR;
      else if (I_STACK_FULL)
        w_next_state = ST_ERROR;
      else
        w_next_state = ST_CHECK_STACK;
    end

    ST_CHECK_STACK: begin
      if (I_STACK_EMPTY)
        w_next_state = ST_DONE;
      else
        w_next_state = ST_POP_REQUEST;
    end

    ST_POP_REQUEST: begin
      if (I_STACK_EMPTY)
        w_next_state = ST_CHECK_STACK;
      else
        w_next_state = ST_WAIT_POP;
    end

    ST_WAIT_POP: begin
      if (I_STACK_POP_VALID)
        w_next_state = ST_LOAD_NODE;
    end

    ST_LOAD_NODE: begin
      w_next_state = ST_QUERY_START;
    end

    ST_QUERY_START: begin
      if (!I_NODE_VALID)
        w_next_state = ST_ERROR;
      else if (I_LEGAL_MASK == 6'b000000)
        w_next_state = ST_ERROR;
      else if (!I_QUERY_BUSY)
        w_next_state = ST_WAIT_QUERY;
    end

    ST_WAIT_QUERY: begin
      if (I_QUERY_DONE)
        w_next_state = ST_DECIDE;
    end

    ST_DECIDE: begin
      if (I_DECISION_VALID) begin
        if (!w_selected_split_legal)
          w_next_state = ST_ERROR;
        else if ((I_SELECTED_SPLIT_TYPE == PARA_SPLIT_NONE) &&
                 !w_leaf_capacity_available)
          w_next_state = ST_ERROR;
        else if (I_SELECTED_SPLIT_TYPE == PARA_SPLIT_NONE)
          w_next_state = ST_EMIT_SYNTAX;
        else
          w_next_state = ST_CHILD_PREPARE;
      end
    end

    ST_CHILD_PREPARE: begin
      if (!I_CHILD_VALID)
        w_next_state = ST_ERROR;
      else if (!w_child_count_valid)
        w_next_state = ST_ERROR;
      else if (!w_child_id_capacity_available)
        w_next_state = ST_ERROR;
      else
        w_next_state = ST_EMIT_SYNTAX;
    end

    ST_EMIT_SYNTAX: begin
      if (w_syntax_write_fire) begin
        if (r_selected_split_type == PARA_SPLIT_NONE)
          w_next_state = ST_WRITE_LEAF;
        else
          w_next_state = ST_PUSH_CHILD;
      end
    end

    ST_WRITE_LEAF: begin
      if (w_leaf_write_fire)
        w_next_state = ST_CHECK_STACK;
    end

    ST_PUSH_CHILD: begin
      if (I_STACK_FULL)
        w_next_state = ST_ERROR;
      else if (w_stack_push_fire &&
               (r_child_push_index == 2'd0))
        w_next_state = ST_CHECK_STACK;
    end

    ST_DONE: begin
      if (I_DONE_ACK)
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

// Process 3: FSM output decode.
always_comb begin
  O_START_READY = 1'b0;

  O_FEATURE_START = 1'b0;

  O_STACK_CLEAR     = 1'b0;
  O_STACK_PUSH      = 1'b0;
  O_STACK_PUSH_DATA = {PARA_NODE_WD{1'b0}};
  O_STACK_POP       = 1'b0;

  O_NODE_CLEAR     = 1'b0;
  O_NODE_LOAD      = 1'b0;
  O_NODE_LOAD_DATA = r_popped_node;

  O_QUERY_START    = 1'b0;
  O_CLASSIFY_VALID = 1'b0;

  O_CHILD_GEN_VALID    = 1'b0;
  O_CHILD_PARENT_NODE  = I_NODE_DATA;
  O_CHILD_SPLIT_TYPE   = r_selected_split_type;
  O_CHILD_NODE_ID_BASE = r_next_node_id[10:0];

  O_LEAF_CLEAR     = 1'b0;
  O_LEAF_WR_VALID  = 1'b0;
  O_LEAF_CU_ID     = r_next_cu_id;
  O_LEAF_NODE_DATA = I_NODE_DATA;

  O_SYNTAX_CLEAR       = 1'b0;
  O_SYNTAX_WR_VALID    = 1'b0;
  O_SYNTAX_CTU_ID      = I_CTU_ID;
  O_SYNTAX_X_UNIT      = I_NODE_DATA[52:48];
  O_SYNTAX_Y_UNIT      = I_NODE_DATA[47:43];
  O_SYNTAX_WIDTH_CODE  = I_NODE_DATA[42:40];
  O_SYNTAX_HEIGHT_CODE = I_NODE_DATA[39:37];
  O_SYNTAX_QT_DEPTH    = I_NODE_DATA[20:18];
  O_SYNTAX_MTT_DEPTH   = I_NODE_DATA[17:15];
  O_SYNTAX_PART_IDX    = I_NODE_DATA[4:3];
  O_SYNTAX_LEGAL_MASK  = r_selected_legal_mask;
  O_SYNTAX_SPLIT_TYPE  = r_selected_split_type;
  O_SYNTAX_IS_LEAF     =
    (r_selected_split_type == PARA_SPLIT_NONE);
  O_SYNTAX_CU_ID =
    (r_selected_split_type == PARA_SPLIT_NONE) ?
    r_next_cu_id :
    {PARA_CU_ID_WD{1'b0}};

  O_BUSY  = 1'b0;
  O_DONE  = 1'b0;
  O_ERROR = 1'b0;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_START_READY =
        I_LEAF_EMPTY &&
        I_SYNTAX_EMPTY;
    end

    ST_CLEAR: begin
      O_BUSY         = 1'b1;
      O_STACK_CLEAR  = 1'b1;
      O_NODE_CLEAR   = 1'b1;
      O_LEAF_CLEAR   = 1'b1;
      O_SYNTAX_CLEAR = 1'b1;
    end

    ST_WAIT_META: begin
      O_BUSY = 1'b1;
    end

    ST_FEATURE_START: begin
      O_BUSY          = 1'b1;
      O_FEATURE_START = 1'b1;
    end

    ST_WAIT_FEATURE: begin
      O_BUSY = 1'b1;
    end

    ST_PUSH_ROOT: begin
      O_BUSY = 1'b1;

      if (!I_STACK_FULL) begin
        O_STACK_PUSH      = 1'b1;
        O_STACK_PUSH_DATA = I_ROOT_NODE;
      end
    end

    ST_CHECK_STACK: begin
      O_BUSY = 1'b1;
    end

    ST_POP_REQUEST: begin
      O_BUSY = 1'b1;

      if (!I_STACK_EMPTY)
        O_STACK_POP = 1'b1;
    end

    ST_WAIT_POP: begin
      O_BUSY = 1'b1;
    end

    ST_LOAD_NODE: begin
      O_BUSY           = 1'b1;
      O_NODE_LOAD      = 1'b1;
      O_NODE_LOAD_DATA = r_popped_node;
    end

    ST_QUERY_START: begin
      O_BUSY = 1'b1;

      if (I_NODE_VALID &&
          (I_LEGAL_MASK != 6'b000000) &&
          !I_QUERY_BUSY)
        O_QUERY_START = 1'b1;
    end

    ST_WAIT_QUERY: begin
      O_BUSY = 1'b1;
    end

    ST_DECIDE: begin
      O_BUSY           = 1'b1;
      O_CLASSIFY_VALID = 1'b1;
    end

    ST_CHILD_PREPARE: begin
      O_BUSY            = 1'b1;
      O_CHILD_GEN_VALID = 1'b1;
    end

    ST_EMIT_SYNTAX: begin
      O_BUSY            = 1'b1;
      O_SYNTAX_WR_VALID = 1'b1;
    end

    ST_WRITE_LEAF: begin
      O_BUSY          = 1'b1;
      O_LEAF_WR_VALID = 1'b1;
    end

    ST_PUSH_CHILD: begin
      O_BUSY            = 1'b1;
      O_CHILD_GEN_VALID = 1'b1;

      if (!I_STACK_FULL) begin
        O_STACK_PUSH      = 1'b1;
        O_STACK_PUSH_DATA = w_selected_child;
      end
    end

    ST_DONE: begin
      O_DONE = 1'b1;
    end

    ST_ERROR: begin
      O_ERROR = 1'b1;

      if (I_CLEAR_ERROR) begin
        O_STACK_CLEAR  = 1'b1;
        O_NODE_CLEAR   = 1'b1;
        O_LEAF_CLEAR   = 1'b1;
        O_SYNTAX_CLEAR = 1'b1;
      end
    end

    default: begin
      O_ERROR = 1'b1;
    end
  endcase
end

// Capture the popped stack entry. The stack pop-valid pulse occurs
// one cycle after O_STACK_POP is asserted.
always_ff @ (posedge I_CLK) begin
  if ((r_current_state == ST_WAIT_POP) &&
      I_STACK_POP_VALID)
    r_popped_node <= I_STACK_POP_DATA;
end

// Capture the accepted split decision and its corresponding legal
// mask. These registers keep the syntax payload stable while either
// syntax FIFO or leaf FIFO applies backpressure.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_selected_split_type <= PARA_SPLIT_NONE;
    r_selected_legal_mask <= 6'b000000;
  end
  else if (r_current_state == ST_CLEAR) begin
    r_selected_split_type <= PARA_SPLIT_NONE;
    r_selected_legal_mask <= 6'b000000;
  end
  else if ((r_current_state == ST_DECIDE) &&
           I_DECISION_VALID &&
           w_selected_split_legal) begin
    r_selected_split_type <= I_SELECTED_SPLIT_TYPE;
    r_selected_legal_mask <= I_LEGAL_MASK;
  end
end

// CU_ID is dense over leaf nodes only. r_leaf_count is one bit wider
// so the legal maximum of 256 leaves can be represented explicitly.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_next_cu_id <= '0;
    r_leaf_count <= '0;
  end
  else if (r_current_state == ST_CLEAR) begin
    r_next_cu_id <= '0;
    r_leaf_count <= '0;
  end
  else if (w_leaf_write_fire) begin
    r_next_cu_id <=
      r_next_cu_id + PARA_CU_ID_WD'(1);

    r_leaf_count <=
      r_leaf_count + PARA_CU_COUNT_WD'(1);
  end
end

// Capture the number of generated children and initialize the reverse
// push index. QT therefore pushes 3,2,1,0; TT pushes 2,1,0; and BT
// pushes 1,0 so stack pops occur in forward coding-tree order.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_child_count      <= 3'd0;
    r_child_push_index <= 2'd0;
  end
  else if (r_current_state == ST_CLEAR) begin
    r_child_count      <= 3'd0;
    r_child_push_index <= 2'd0;
  end
  else if ((r_current_state == ST_CHILD_PREPARE) &&
           I_CHILD_VALID &&
           w_child_count_valid &&
           w_child_id_capacity_available) begin
    r_child_count <= I_CHILD_COUNT;

    unique casez (I_CHILD_COUNT)
      3'd1: begin
        r_child_push_index <= 2'd0;
      end

      3'd2: begin
        r_child_push_index <= 2'd1;
      end

      3'd3: begin
        r_child_push_index <= 2'd2;
      end

      3'd4: begin
        r_child_push_index <= 2'd3;
      end

      default: begin
        r_child_push_index <= 2'd0;
      end
    endcase
  end
  else if ((r_current_state == ST_PUSH_CHILD) &&
           w_stack_push_fire &&
           (r_child_push_index != 2'd0)) begin
    r_child_push_index <=
      r_child_push_index - 2'd1;
  end
end

// NODE_ID 0 is reserved for the CTU root. Children receive dense IDs
// beginning at 1. The counter is updated only after the complete child
// set has been successfully pushed.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_next_node_id <= 12'd1;
  else if (r_current_state == ST_CLEAR)
    r_next_node_id <= 12'd1;
  else if ((r_current_state == ST_PUSH_CHILD) &&
           w_stack_push_fire &&
           (r_child_push_index == 2'd0)) begin
    r_next_node_id <=
      r_next_node_id +
      {9'd0, r_child_count};
  end
end

assign O_SELECTED_SPLIT_TYPE = r_selected_split_type;
assign O_LEAF_COUNT          = r_leaf_count;
assign O_NEXT_NODE_ID        = r_next_node_id;

endmodule: PARTITION_CONTROL_FSM
