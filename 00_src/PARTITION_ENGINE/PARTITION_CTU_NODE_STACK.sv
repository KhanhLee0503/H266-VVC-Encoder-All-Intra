//-----------------------------------------------------------
// Description: This module implements the LIFO node stack used
// by the VVC partition engine for depth-first tree traversal.
// Each stack entry stores one node descriptor. The storage array
// is not reset so synthesis can map the memory efficiently. The
// stack count and pop-valid control are reset. Pop has priority
// over push when both requests are asserted in the same cycle.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_CTU_NODE_STACK
#(
  parameter PARA_NODE_WD = 64,
  parameter PARA_DEPTH   = 64,
  localparam PARA_ADDR_WD =
    (PARA_DEPTH <= 1) ? 1 : $clog2(PARA_DEPTH),
  localparam PARA_COUNT_WD =
    (PARA_DEPTH < 1) ? 1 : $clog2(PARA_DEPTH + 1)
)
(
  input                              I_CLK,
  input                              I_RESETN,
  input                              I_CLEAR,

  input                              I_PUSH,
  input      [PARA_NODE_WD-1:0]      I_PUSH_DATA,

  input                              I_POP,

  output logic                       O_POP_VALID,
  output logic [PARA_NODE_WD-1:0]    O_POP_DATA,

  output logic                       O_EMPTY,
  output logic                       O_FULL,
  output logic [PARA_COUNT_WD-1:0]   O_COUNT
);

logic [PARA_NODE_WD-1:0] r_memory [0:PARA_DEPTH-1];

logic [PARA_COUNT_WD-1:0] r_count;
logic [PARA_NODE_WD-1:0]  r_pop_data;
logic                     r_pop_valid;

logic                     w_pop_accept;
logic                     w_push_accept;
logic [PARA_ADDR_WD-1:0]  w_push_addr;
logic [PARA_ADDR_WD-1:0]  w_pop_addr;

// A pop request is accepted only when at least one node is stored.
assign w_pop_accept = I_POP && (r_count != PARA_COUNT_WD'(0));

// Push is intentionally lower priority than pop. This keeps the
// stack behavior deterministic if both requests are asserted by
// mistake. Normal partition control never asserts both together.
assign w_push_accept =
  I_PUSH &&
  !I_POP &&
  (r_count < PARA_COUNT_WD'(PARA_DEPTH));

// The write address is the first unused stack entry.
assign w_push_addr = PARA_ADDR_WD'(r_count);

// The read address is the current top entry. The expression is
// only used when w_pop_accept is asserted, so r_count is nonzero.
assign w_pop_addr =
  PARA_ADDR_WD'(r_count - PARA_COUNT_WD'(1));

// Stack storage is written only for an accepted push. The memory
// array is intentionally not reset because entries are valid only
// when they are covered by the stack count.
always_ff @ (posedge I_CLK) begin
  if (w_push_accept)
    r_memory[w_push_addr] <= I_PUSH_DATA;
end

// The popped node is captured synchronously from the current top
// entry. O_POP_VALID qualifies O_POP_DATA on the following cycle.
always_ff @ (posedge I_CLK) begin
  if (w_pop_accept)
    r_pop_data <= r_memory[w_pop_addr];
end

// The stack count tracks the number of valid node descriptors.
// I_CLEAR starts a new CTU traversal without clearing the storage.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_count <= '0;
  else if (I_CLEAR)
    r_count <= '0;
  else if (w_pop_accept)
    r_count <= r_count - PARA_COUNT_WD'(1);
  else if (w_push_accept)
    r_count <= r_count + PARA_COUNT_WD'(1);
end

// Pop-valid is a one-cycle pulse for each accepted pop operation.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_pop_valid <= 1'b0;
  else if (I_CLEAR)
    r_pop_valid <= 1'b0;
  else
    r_pop_valid <= w_pop_accept;
end

assign O_POP_VALID = r_pop_valid;
assign O_POP_DATA  = r_pop_data;

assign O_EMPTY = (r_count == PARA_COUNT_WD'(0));
assign O_FULL  = (r_count == PARA_COUNT_WD'(PARA_DEPTH));
assign O_COUNT = r_count;

endmodule: PARTITION_CTU_NODE_STACK
