//-----------------------------------------------------------
// Description: This module stores completed coding-unit leaf
// descriptors from the VVC partition engine. Each FIFO entry contains
// a CU_ID, one node descriptor, and one feature summary captured for
// the same leaf CU. The original CU/node payload remains in the block
// RAM array while the small feature summary is stored in a parallel
// distributed-memory array. Both write and read sides use ready/valid
// flow control. A registered output stage keeps
// the payload stable during downstream backpressure. The storage array
// is not reset so FPGA block-RAM inference is preserved.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_CTU_CU_LEAF_FIFO
#(
  parameter PARA_CU_ID_WD           = 8,
  parameter PARA_NODE_WD            = 64,
  parameter PARA_FEATURE_SUMMARY_WD = 10,
  parameter PARA_DEPTH              = 256,

  localparam PARA_DATA_WD =
    PARA_CU_ID_WD + PARA_NODE_WD,

  localparam PARA_ADDR_WD =
    (PARA_DEPTH <= 1) ? 1 : $clog2(PARA_DEPTH),

  localparam PARA_COUNT_WD =
    (PARA_DEPTH < 1) ? 1 : $clog2(PARA_DEPTH + 1)
)
(
  input                              I_CLK,
  input                              I_RESETN,
  input                              I_CLEAR,

  input                              I_WR_VALID,
  output logic                       O_WR_READY,
  input      [PARA_CU_ID_WD-1:0]     I_CU_ID,
  input      [PARA_NODE_WD-1:0]      I_NODE_DATA,
  input      [PARA_FEATURE_SUMMARY_WD-1:0] I_FEATURE_SUMMARY,

  output logic                       O_RD_VALID,
  input                              I_RD_READY,
  output logic [PARA_CU_ID_WD-1:0]   O_CU_ID,
  output logic [PARA_NODE_WD-1:0]    O_NODE_DATA,
  output logic [PARA_FEATURE_SUMMARY_WD-1:0] O_FEATURE_SUMMARY,

  output logic                       O_EMPTY,
  output logic                       O_FULL,
  output logic [PARA_COUNT_WD-1:0]   O_COUNT
);

(* ram_style = "block" *)
logic [PARA_DATA_WD-1:0] r_memory [0:PARA_DEPTH-1];

(* ram_style = "distributed" *)
logic [PARA_FEATURE_SUMMARY_WD-1:0] r_feature_memory [0:PARA_DEPTH-1];

logic [PARA_ADDR_WD-1:0]  r_write_pointer;
logic [PARA_ADDR_WD-1:0]  r_read_pointer;
logic [PARA_COUNT_WD-1:0] r_total_count;

logic [PARA_DATA_WD-1:0]  r_output_data;
logic [PARA_FEATURE_SUMMARY_WD-1:0] r_output_feature_summary;
logic                     r_output_valid;

logic [PARA_DATA_WD-1:0]  w_input_data;

logic                     w_write_accept;
logic                     w_read_accept;
logic                     w_output_slot_available;

logic [PARA_COUNT_WD-1:0] w_memory_item_count;
logic                     w_memory_has_data;

logic                     w_bypass_write;
logic                     w_memory_write;
logic                     w_memory_read;

assign w_input_data = {
  I_CU_ID,
  I_NODE_DATA
};

// A write may be accepted whenever the FIFO is not full. When the
// FIFO is full, a simultaneous output transfer frees one entry in the
// same cycle, so write-ready remains asserted for full throughput.
assign O_WR_READY =
  (r_total_count < PARA_COUNT_WD'(PARA_DEPTH)) ||
  (r_output_valid && I_RD_READY);

assign w_write_accept =
  I_WR_VALID &&
  O_WR_READY;

assign w_read_accept =
  r_output_valid &&
  I_RD_READY;

// The output register can be replaced when it is empty or when the
// current entry is consumed in this cycle.
assign w_output_slot_available =
  !r_output_valid ||
  w_read_accept;

// r_total_count includes the registered output item. Therefore the
// number of entries still resident in the RAM is total_count minus
// one whenever the output register currently owns a valid entry.
always_comb begin
  w_memory_item_count = r_total_count;

  if (r_output_valid)
    w_memory_item_count =
      r_total_count - PARA_COUNT_WD'(1);
end

assign w_memory_has_data =
  (w_memory_item_count != PARA_COUNT_WD'(0));

// When no older RAM entry exists and an output slot is available,
// a newly accepted leaf can bypass the RAM and enter the output
// register directly.
assign w_bypass_write =
  w_output_slot_available &&
  !w_memory_has_data &&
  w_write_accept;

// A memory read prefetches the oldest queued leaf into the output
// register whenever that register can accept another item.
assign w_memory_read =
  w_output_slot_available &&
  w_memory_has_data;

// Accepted writes use the RAM unless they are directly bypassed into
// the output register.
assign w_memory_write =
  w_write_accept &&
  !w_bypass_write;

// FIFO payload storage. The memory contents are intentionally not
// reset because pointer/count state defines which entries are valid.
always_ff @ (posedge I_CLK) begin
  if (w_memory_write) begin
    r_memory[r_write_pointer] <= w_input_data;
    r_feature_memory[r_write_pointer] <= I_FEATURE_SUMMARY;
  end
end

// The output data register is loaded either from the oldest RAM entry
// or directly from the current input payload. RAM data has priority
// because it always represents an older leaf in FIFO order.
always_ff @ (posedge I_CLK) begin
  if (w_memory_read) begin
    r_output_data <= r_memory[r_read_pointer];
    r_output_feature_summary <= r_feature_memory[r_read_pointer];
  end
  else if (w_bypass_write) begin
    r_output_data <= w_input_data;
    r_output_feature_summary <= I_FEATURE_SUMMARY;
  end
end

// Registered output valid state. I_CLEAR flushes the FIFO without
// resetting the large payload memory.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_output_valid <= 1'b0;
  else if (I_CLEAR)
    r_output_valid <= 1'b0;
  else if (w_output_slot_available) begin
    if (w_memory_read || w_bypass_write)
      r_output_valid <= 1'b1;
    else
      r_output_valid <= 1'b0;
  end
end

// Write pointer advances only for entries physically stored in RAM.
// The pointer wraps explicitly at the configured FIFO depth.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_write_pointer <= '0;
  else if (I_CLEAR)
    r_write_pointer <= '0;
  else if (w_memory_write) begin
    if (r_write_pointer == PARA_ADDR_WD'(PARA_DEPTH - 1))
      r_write_pointer <= '0;
    else
      r_write_pointer <=
        r_write_pointer + PARA_ADDR_WD'(1);
  end
end

// Read pointer advances when an entry is prefetched from RAM into the
// registered output stage.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_read_pointer <= '0;
  else if (I_CLEAR)
    r_read_pointer <= '0;
  else if (w_memory_read) begin
    if (r_read_pointer == PARA_ADDR_WD'(PARA_DEPTH - 1))
      r_read_pointer <= '0;
    else
      r_read_pointer <=
        r_read_pointer + PARA_ADDR_WD'(1);
  end
end

// Total occupancy changes only for externally accepted writes and
// reads. Simultaneous write/read transfers leave the occupancy
// unchanged.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_total_count <= '0;
  else if (I_CLEAR)
    r_total_count <= '0;
  else begin
    unique casez ({w_write_accept, w_read_accept})
      2'b10: begin
        r_total_count <=
          r_total_count + PARA_COUNT_WD'(1);
      end

      2'b01: begin
        r_total_count <=
          r_total_count - PARA_COUNT_WD'(1);
      end

      default: begin
      end
    endcase
  end
end

assign O_RD_VALID = r_output_valid;

assign O_CU_ID =
  r_output_data[PARA_DATA_WD-1:PARA_NODE_WD];

assign O_NODE_DATA =
  r_output_data[PARA_NODE_WD-1:0];

assign O_FEATURE_SUMMARY =
  r_output_feature_summary;

assign O_EMPTY =
  (r_total_count == PARA_COUNT_WD'(0));

assign O_FULL =
  (r_total_count == PARA_COUNT_WD'(PARA_DEPTH));

assign O_COUNT = r_total_count;

endmodule: PARTITION_CTU_CU_LEAF_FIFO
