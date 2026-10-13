//-----------------------------------------------------------
// Description: One synchronous single-port storage bank for
// inverse 2-D transform transpose buffering. One operation
// per clock (write has priority if misused). No array reset
// to preserve FPGA block-RAM inference.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INV_TRANSPOSE_BANK #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_ADDR_WD = 8,
  parameter PARA_DEPTH   = 256
)(
  input                               I_CLK,
  input                               I_WR_EN,
  input        [PARA_ADDR_WD-1:0]     I_WR_ADDR,
  input        [PARA_DATA_WD-1:0]     I_WR_DATA,
  input                               I_RD_EN,
  input        [PARA_ADDR_WD-1:0]     I_RD_ADDR,
  output logic [PARA_DATA_WD-1:0]     O_RD_DATA
);
  (* ram_style = "block" *)
  logic [PARA_DATA_WD-1:0] r_memory [0:PARA_DEPTH-1];

  always_ff @(posedge I_CLK) begin
    if (I_WR_EN) begin
      r_memory[I_WR_ADDR] <= I_WR_DATA;
    end
    else if (I_RD_EN) begin
      O_RD_DATA <= r_memory[I_RD_ADDR];
    end
  end
endmodule: TQ_INV_TRANSPOSE_BANK
