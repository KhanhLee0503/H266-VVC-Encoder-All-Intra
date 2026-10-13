//-----------------------------------------------------------
// Description: This synchronous single-clock FIFO stores one 31-bit
// unbinarized Intra syntax packet per Leaf CU. Its ready/valid ports
// support simultaneous push and pop and downstream backpressure.
// The data array is not reset, while the pointers and count are reset.
//-----------------------------------------------------------
`timescale 1ns/1ps
module INTRA_SYNTAX_FIFO
#(
  parameter PARA_DATA_WD = 31,
  parameter PARA_FIFO_DEPTH = 16,
  localparam PARA_ADDR_WD = (PARA_FIFO_DEPTH <= 1) ? 1 : $clog2(PARA_FIFO_DEPTH),
  localparam PARA_COUNT_WD = (PARA_FIFO_DEPTH < 1) ? 1 : $clog2(PARA_FIFO_DEPTH + 1)
)
(
  input                               I_CLK,
  input                               I_RESETN,
  input                               I_WR_VALID,
  output logic                        O_WR_READY,
  input      [PARA_DATA_WD-1:0]       I_WR_DATA,
  output logic                        O_RD_VALID,
  input                               I_RD_READY,
  output logic [PARA_DATA_WD-1:0]     O_RD_DATA,
  output logic [PARA_COUNT_WD-1:0]    O_COUNT,
  output logic                        O_FULL,
  output logic                        O_EMPTY
);

logic [PARA_DATA_WD-1:0] r_memory [0:PARA_FIFO_DEPTH-1];
logic [PARA_ADDR_WD-1:0] r_write_pointer;
logic [PARA_ADDR_WD-1:0] r_read_pointer;
logic [PARA_COUNT_WD-1:0] r_count;
logic w_write_fire;
logic w_read_fire;
logic [PARA_ADDR_WD-1:0] w_write_pointer_next;
logic [PARA_ADDR_WD-1:0] w_read_pointer_next;

assign O_FULL = (r_count == PARA_COUNT_WD'(PARA_FIFO_DEPTH));
assign O_EMPTY = (r_count == '0);
assign O_RD_VALID = !O_EMPTY;
assign O_WR_READY = !O_FULL || (O_RD_VALID && I_RD_READY);
assign w_write_fire = I_WR_VALID && O_WR_READY;
assign w_read_fire = O_RD_VALID && I_RD_READY;
assign O_RD_DATA = r_memory[r_read_pointer];
assign O_COUNT = r_count;
assign w_write_pointer_next = (r_write_pointer == PARA_ADDR_WD'(PARA_FIFO_DEPTH - 1)) ? '0 : r_write_pointer + PARA_ADDR_WD'(1);
assign w_read_pointer_next = (r_read_pointer == PARA_ADDR_WD'(PARA_FIFO_DEPTH - 1)) ? '0 : r_read_pointer + PARA_ADDR_WD'(1);

// RAM data has no reset, preserving memory inference opportunities.
always_ff @ (posedge I_CLK) begin
  if (I_RESETN && w_write_fire)
    r_memory[r_write_pointer] <= I_WR_DATA;
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_write_pointer <= '0;
    r_read_pointer <= '0;
    r_count <= '0;
  end
  else begin
    if (w_write_fire)
      r_write_pointer <= w_write_pointer_next;

    if (w_read_fire)
      r_read_pointer <= w_read_pointer_next;

    if (w_write_fire && !w_read_fire)
      r_count <= r_count + PARA_COUNT_WD'(1);
    else if (!w_write_fire && w_read_fire)
      r_count <= r_count - PARA_COUNT_WD'(1);
  end
end

endmodule: INTRA_SYNTAX_FIFO
