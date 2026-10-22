//-----------------------------------------------------------
// Description: This module implements a synchronous 64-bit sample RAM bank.
// It stores four 16-bit sample containers per word and supports independent
// read and write ports. Each write lane has its own 16-bit write enable.
// The read data is registered with one-clock latency. No memory locations
// or read-data registers are reset, allowing block RAM inference.
//-----------------------------------------------------------
`timescale 1ns/1ps

module DBF_SAMPLE_RAM_BANK #(
  parameter integer PARA_RAM_DEPTH = 1536,
  parameter integer PARA_ADDR_WD   = 11
)(
  input                             I_CLK,
  input                             I_RD_EN,
  input       [PARA_ADDR_WD-1:0]    I_RD_ADDR,
  output logic [63:0]               O_RD_DATA,
  input                             I_WR_EN,
  input       [PARA_ADDR_WD-1:0]    I_WR_ADDR,
  input       [63:0]                I_WR_DATA,
  input       [3:0]                 I_WR_SAMPLE_EN
);

  logic [63:0] r_mem [0:PARA_RAM_DEPTH-1];
  logic [63:0] r_rd_data;

  // Sample enables map to sample containers rather than individual bytes.
  // RAM contents and read-data registers intentionally have no reset.
  always_ff @(posedge I_CLK) begin
    if (I_WR_EN) begin
      if (I_WR_SAMPLE_EN[0])
        r_mem[I_WR_ADDR][15:0] <= I_WR_DATA[15:0];
      if (I_WR_SAMPLE_EN[1])
        r_mem[I_WR_ADDR][31:16] <= I_WR_DATA[31:16];
      if (I_WR_SAMPLE_EN[2])
        r_mem[I_WR_ADDR][47:32] <= I_WR_DATA[47:32];
      if (I_WR_SAMPLE_EN[3])
        r_mem[I_WR_ADDR][63:48] <= I_WR_DATA[63:48];
    end

    if (I_RD_EN)
      r_rd_data <= r_mem[I_RD_ADDR];
  end

  assign O_RD_DATA = r_rd_data;

endmodule: DBF_SAMPLE_RAM_BANK
