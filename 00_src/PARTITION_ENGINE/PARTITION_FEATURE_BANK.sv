//-----------------------------------------------------------
// Description: This module stores 4x4 luma feature entries for
// the VVC partition engine. The memory is intended to infer one
// block RAM bank. The module has one synchronous write port and
// one synchronous read port. Read data is valid one clock cycle
// after I_RD_EN is asserted. The memory array is not reset so
// FPGA block RAM inference is preserved.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_FEATURE_BANK
#(
  parameter PARA_FEATURE_DATA_WD = 96,
  parameter PARA_DEPTH           = 512,
  parameter PARA_ADDR_WD         = (PARA_DEPTH <= 1) ? 1 : $clog2(PARA_DEPTH)
)
(
  input                                   I_CLK,
  input                                   I_RESETN,

  input                                   I_WR_EN,
  input      [PARA_ADDR_WD-1:0]           I_WR_ADDR,
  input      [PARA_FEATURE_DATA_WD-1:0]   I_WR_DATA,

  input                                   I_RD_EN,
  input      [PARA_ADDR_WD-1:0]           I_RD_ADDR,

  output logic                            O_RD_VALID,
  output logic [PARA_FEATURE_DATA_WD-1:0] O_RD_DATA
);

(* ram_style = "block" *)
logic [PARA_FEATURE_DATA_WD-1:0] r_memory [0:PARA_DEPTH-1];

logic [PARA_FEATURE_DATA_WD-1:0] r_read_data;
logic                            r_read_valid;

// The write port updates one feature entry per clock cycle. The
// memory contents are not reset because every logical tile entry
// is overwritten during feature generation before region queries
// are allowed to read the bank.
always_ff @ (posedge I_CLK) begin
  if (I_WR_EN)
    r_memory[I_WR_ADDR] <= I_WR_DATA;
end

// The read port is synchronous and therefore has one clock cycle
// of latency. The data register only changes for an active read,
// which provides a natural clock enable for the BRAM output path.
always_ff @ (posedge I_CLK) begin
  if (I_RD_EN)
    r_read_data <= r_memory[I_RD_ADDR];
end

// The read-valid register qualifies the synchronous read data.
// Only the valid control register is reset; the RAM and datapath
// data register do not require reset because their values are not
// architecturally observed while O_RD_VALID is low.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_read_valid <= 1'b0;
  else
    r_read_valid <= I_RD_EN;
end

assign O_RD_VALID = r_read_valid;
assign O_RD_DATA  = r_read_data;

endmodule: PARTITION_FEATURE_BANK
