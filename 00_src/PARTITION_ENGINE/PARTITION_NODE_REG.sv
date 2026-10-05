//-----------------------------------------------------------
// Description: This module stores the current 64-bit partition
// node descriptor after the node is popped from the CTU node
// stack. The descriptor fields are decoded to simple output ports
// for the constraint checker, region feature query, split decision,
// and child-node generator. The payload register is not reset
// because O_VALID qualifies whether the stored descriptor is valid.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_NODE_REG
(
  input               I_CLK,
  input               I_RESETN,
  input               I_CLEAR,
  input               I_LOAD,
  input      [63:0]   I_NODE_DATA,

  output logic        O_VALID,
  output logic [63:0] O_NODE_DATA,

  output logic [10:0] O_NODE_ID,
  output logic [4:0]  O_X_UNIT,
  output logic [4:0]  O_Y_UNIT,
  output logic [6:0]  O_X,
  output logic [6:0]  O_Y,

  output logic [2:0]  O_WIDTH_CODE,
  output logic [2:0]  O_HEIGHT_CODE,
  output logic [7:0]  O_WIDTH,
  output logic [7:0]  O_HEIGHT,

  output logic [7:0]  O_VALID_WIDTH,
  output logic [7:0]  O_VALID_HEIGHT,

  output logic [2:0]  O_QT_DEPTH,
  output logic [2:0]  O_MTT_DEPTH,
  output logic        O_TREE_PHASE,
  output logic [1:0]  O_TREE_TYPE,
  output logic [2:0]  O_PARENT_SPLIT_TYPE,
  output logic [3:0]  O_BOUNDARY_FLAGS,
  output logic [1:0]  O_PART_IDX
);

logic [63:0] r_node_data;
logic        r_node_valid;

logic [7:0] w_width;
logic [7:0] w_height;

// The node payload only changes when a new descriptor is loaded.
// Reset is intentionally omitted from this datapath register because
// r_node_valid determines whether the stored descriptor is meaningful.
always_ff @ (posedge I_CLK) begin
  if (I_LOAD)
    r_node_data <= I_NODE_DATA;
end

// The valid state is reset and can be cleared when a new CTU starts.
// I_CLEAR has priority over I_LOAD when both are asserted together.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_node_valid <= 1'b0;
  else if (I_CLEAR)
    r_node_valid <= 1'b0;
  else if (I_LOAD)
    r_node_valid <= 1'b1;
end

// Width code is defined as log2(width) minus two. Explicit decode
// avoids a variable shifter in the geometry path.
always_comb begin
  w_width = 8'd0;

  unique casez (r_node_data[42:40])
    3'd0:    w_width = 8'd4;
    3'd1:    w_width = 8'd8;
    3'd2:    w_width = 8'd16;
    3'd3:    w_width = 8'd32;
    3'd4:    w_width = 8'd64;
    3'd5:    w_width = 8'd128;
    default: w_width = 8'd0;
  endcase
end

// Height code uses the same encoding as the width code.
always_comb begin
  w_height = 8'd0;

  unique casez (r_node_data[39:37])
    3'd0:    w_height = 8'd4;
    3'd1:    w_height = 8'd8;
    3'd2:    w_height = 8'd16;
    3'd3:    w_height = 8'd32;
    3'd4:    w_height = 8'd64;
    3'd5:    w_height = 8'd128;
    default: w_height = 8'd0;
  endcase
end

assign O_VALID             = r_node_valid;
assign O_NODE_DATA         = r_node_data;

assign O_NODE_ID           = r_node_data[63:53];
assign O_X_UNIT            = r_node_data[52:48];
assign O_Y_UNIT            = r_node_data[47:43];
assign O_X                 = {r_node_data[52:48], 2'b00};
assign O_Y                 = {r_node_data[47:43], 2'b00};

assign O_WIDTH_CODE        = r_node_data[42:40];
assign O_HEIGHT_CODE       = r_node_data[39:37];
assign O_WIDTH             = w_width;
assign O_HEIGHT            = w_height;

assign O_VALID_WIDTH       = r_node_data[36:29];
assign O_VALID_HEIGHT      = r_node_data[28:21];

assign O_QT_DEPTH          = r_node_data[20:18];
assign O_MTT_DEPTH         = r_node_data[17:15];
assign O_TREE_PHASE        = r_node_data[14];
assign O_TREE_TYPE         = r_node_data[13:12];
assign O_PARENT_SPLIT_TYPE = r_node_data[11:9];

// Boundary flags use bit order {LEFT, RIGHT, TOP, BOTTOM}.
assign O_BOUNDARY_FLAGS    = r_node_data[8:5];

assign O_PART_IDX          = r_node_data[4:3];

endmodule: PARTITION_NODE_REG
