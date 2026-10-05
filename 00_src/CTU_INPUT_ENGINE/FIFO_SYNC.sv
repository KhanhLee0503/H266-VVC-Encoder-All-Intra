//-----------------------------------------------------------
// Description: Synchronous single-clock FIFO with FWFT-style
//              combinational read data. The FIFO depth should be
//              a power of two when using the pointer MSB full/empty
//              detection logic.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module FIFO_SYNC
  #(
    parameter int PARA_FIFO_DEPTH = 16,
    parameter int PARA_DATA_WIDTH = 8)
  (
    input I_CLK,
    input I_RESET_N,

    input                         I_WR_EN,
    input                         I_RD_EN,
    input [PARA_DATA_WIDTH - 1:0] I_FIFO_WDATA,

    output logic [PARA_DATA_WIDTH - 1:0] O_FIFO_RDATA,
    output logic                         O_FIFO_FULL,
    output logic                         O_FIFO_EMPTY);

  localparam int PARA_ADDR_WIDTH = (PARA_FIFO_DEPTH <= 1) ? 1 : $clog2(PARA_FIFO_DEPTH);

  logic [PARA_DATA_WIDTH - 1:0] r_fifo_mem[0:PARA_FIFO_DEPTH - 1];
  logic [PARA_ADDR_WIDTH:0]     r_wr_ptr;
  logic [PARA_ADDR_WIDTH:0]     r_rd_ptr;

  // ============================================================
  // Memory write
  // ============================================================
  always_ff @(posedge I_CLK) begin
    if (I_WR_EN && !O_FIFO_FULL) begin
      r_fifo_mem[r_wr_ptr[PARA_ADDR_WIDTH - 1:0]] <= I_FIFO_WDATA;
    end
  end

  // ============================================================
  // Write pointer
  // ============================================================
  always_ff @(posedge I_CLK, negedge I_RESET_N) begin
    if (!I_RESET_N) begin
      r_wr_ptr <= '0;
    end else if (I_WR_EN && !O_FIFO_FULL) begin
      r_wr_ptr <= r_wr_ptr + {{PARA_ADDR_WIDTH{1'b0}}, 1'b1};
    end
  end

  // ============================================================
  // Read pointer
  // ============================================================
  always_ff @(posedge I_CLK, negedge I_RESET_N) begin
    if (!I_RESET_N) begin
      r_rd_ptr <= '0;
    end else if (I_RD_EN && !O_FIFO_EMPTY) begin
      r_rd_ptr <= r_rd_ptr + {{PARA_ADDR_WIDTH{1'b0}}, 1'b1};
    end
  end

  // ============================================================
  // Status and FWFT-style read data
  // ============================================================
  always_comb begin
    O_FIFO_EMPTY = (~(r_wr_ptr[PARA_ADDR_WIDTH] ^ r_rd_ptr[PARA_ADDR_WIDTH])) &&
                   (r_wr_ptr[PARA_ADDR_WIDTH - 1:0] == r_rd_ptr[PARA_ADDR_WIDTH - 1:0]);

    O_FIFO_FULL = (r_wr_ptr[PARA_ADDR_WIDTH] ^ r_rd_ptr[PARA_ADDR_WIDTH]) &&
                  (r_wr_ptr[PARA_ADDR_WIDTH - 1:0] == r_rd_ptr[PARA_ADDR_WIDTH - 1:0]);

    O_FIFO_RDATA = r_fifo_mem[r_rd_ptr[PARA_ADDR_WIDTH - 1:0]];
  end

endmodule : FIFO_SYNC