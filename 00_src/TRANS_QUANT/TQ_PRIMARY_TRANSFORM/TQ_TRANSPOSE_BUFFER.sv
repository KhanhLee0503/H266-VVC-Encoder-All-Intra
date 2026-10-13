//-----------------------------------------------------------
// Description: This module stores one transform unit in four
// independently addressed RAM banks. Diagonal bank selection
// allows four consecutive row samples to be written and four
// consecutive column samples to be read in one clock. Memory
// contents are not reset. Read data is registered in RAM.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_TRANSPOSE_BUFFER #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_BANK_DEPTH = 256,
  localparam PARA_ADDR_WD = $clog2(PARA_BANK_DEPTH)
)(
  input                                     I_CLK,
  input                                     I_WRITE_EN,
  input        [1:0]                        I_WRITE_WIDTH_SIZE,
  input        [4:0]                        I_WRITE_ROW,
  input        [2:0]                        I_WRITE_GROUP,
  input        [4*PARA_DATA_WD-1:0]         I_WRITE_DATA,
  input                                     I_READ_EN,
  input        [1:0]                        I_READ_WIDTH_SIZE,
  input        [4:0]                        I_READ_COLUMN,
  input        [2:0]                        I_READ_GROUP,
  output logic [4*PARA_DATA_WD-1:0]         O_READ_BANK_DATA
);
  logic [PARA_ADDR_WD-1:0] w_write_address;

  // Address = row * (width / 4) + column_group.
  assign w_write_address = ({{(PARA_ADDR_WD-5){1'b0}}, I_WRITE_ROW} << I_WRITE_WIDTH_SIZE) + I_WRITE_GROUP;

  // Each bank has one physical memory array and one synchronous read port.
  for (genvar bank = 0; bank < 4; bank++) begin: GEN_BANK
    localparam logic [1:0] PARA_BANK_INDEX = bank;
    logic [1:0] w_write_lane;
    logic [1:0] w_read_lane;
    logic [4:0] w_read_row;
    logic [PARA_ADDR_WD-1:0] w_read_address;
    logic [PARA_DATA_WD-1:0] w_write_data;
    logic [PARA_DATA_WD-1:0] r_read_data;
    logic [PARA_DATA_WD-1:0] r_memory [0:PARA_BANK_DEPTH-1];

    // Two-bit subtraction implements modulo-4 lane selection.
    assign w_write_lane = PARA_BANK_INDEX - I_WRITE_ROW[1:0];
    assign w_read_lane = PARA_BANK_INDEX - I_READ_COLUMN[1:0];
    assign w_read_row = {I_READ_GROUP, w_read_lane};
    assign w_write_data = I_WRITE_DATA[w_write_lane*PARA_DATA_WD +: PARA_DATA_WD];
    assign w_read_address = ({{(PARA_ADDR_WD-5){1'b0}}, w_read_row} << I_READ_WIDTH_SIZE) + (I_READ_COLUMN >> 2);
    assign O_READ_BANK_DATA[bank*PARA_DATA_WD +: PARA_DATA_WD] = r_read_data;

    // A separate inferred RAM per bank. There is no write/read collision
    // within a buffer because the top-level FSM grants exclusive ownership.
    always_ff @(posedge I_CLK) begin
      if (I_WRITE_EN)
        r_memory[w_write_address] <= w_write_data;
      if (I_READ_EN)
        r_read_data <= r_memory[w_read_address];
    end
  end
endmodule: TQ_TRANSPOSE_BUFFER
