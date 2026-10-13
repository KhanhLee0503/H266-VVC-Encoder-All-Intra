//-----------------------------------------------------------
// Description: This module stores reconstructed horizontal CTU boundaries for
// intra-reference access. Four adjacent 16-bit sample containers are packed
// into one 64-bit word. The luma plane contains 1024 words for 32 horizontal
// boundaries by 32 horizontal segments. Each chroma plane contains 256 words
// for 16 boundaries by 16 horizontal segments. The module provides one
// synchronous read port and one write port with per-sample write enables.
//-----------------------------------------------------------
`timescale 1ns/1ps

module H_EDGE_RAM #(
  parameter PARA_CONTAINER_WD = 16
)(
  input                                         I_CLK,
  input                                         I_RESETN,

  input                                         I_WR_EN,
  input [1:0]                                   I_WR_COMPONENT_ID,
  input [9:0]                                   I_WR_ADDR,
  input [(4*PARA_CONTAINER_WD)-1:0]             I_WR_DATA,
  input [3:0]                                   I_WR_SAMPLE_EN,

  input                                         I_RD_EN,
  input [1:0]                                   I_RD_COMPONENT_ID,
  input [9:0]                                   I_RD_ADDR,
  output logic                                  O_RD_VALID,
  output logic [(4*PARA_CONTAINER_WD)-1:0]      O_RD_DATA
);

localparam PARA_WORD_WD = 4*PARA_CONTAINER_WD;
localparam PARA_Y_DEPTH = 1024;
localparam PARA_C_DEPTH = 256;
localparam PARA_COMP_Y = 2'b00;
localparam PARA_COMP_CB = 2'b01;
localparam PARA_COMP_CR = 2'b10;

logic [PARA_WORD_WD-1:0]                        r_y_mem [0:PARA_Y_DEPTH-1];
logic [PARA_WORD_WD-1:0]                        r_cb_mem [0:PARA_C_DEPTH-1];
logic [PARA_WORD_WD-1:0]                        r_cr_mem [0:PARA_C_DEPTH-1];
logic                                           w_rd_component_valid;
logic [PARA_WORD_WD-1:0]                        r_rd_data;
logic                                           r_rd_valid;

always_comb begin
  w_rd_component_valid = 1'b0;

  unique casez (I_RD_COMPONENT_ID)
    PARA_COMP_Y: begin
      w_rd_component_valid = 1'b1;
    end
    PARA_COMP_CB: begin
      w_rd_component_valid = 1'b1;
    end
    PARA_COMP_CR: begin
      w_rd_component_valid = 1'b1;
    end
    default: begin
      w_rd_component_valid = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK) begin
  if (I_WR_EN) begin
    unique casez (I_WR_COMPONENT_ID)
      PARA_COMP_Y: begin
        if (I_WR_SAMPLE_EN[0])
          r_y_mem[I_WR_ADDR][PARA_CONTAINER_WD-1:0] <=
            I_WR_DATA[PARA_CONTAINER_WD-1:0];
        if (I_WR_SAMPLE_EN[1])
          r_y_mem[I_WR_ADDR][(2*PARA_CONTAINER_WD)-1:PARA_CONTAINER_WD] <=
            I_WR_DATA[(2*PARA_CONTAINER_WD)-1:PARA_CONTAINER_WD];
        if (I_WR_SAMPLE_EN[2])
          r_y_mem[I_WR_ADDR][(3*PARA_CONTAINER_WD)-1:(2*PARA_CONTAINER_WD)] <=
            I_WR_DATA[(3*PARA_CONTAINER_WD)-1:(2*PARA_CONTAINER_WD)];
        if (I_WR_SAMPLE_EN[3])
          r_y_mem[I_WR_ADDR][(4*PARA_CONTAINER_WD)-1:(3*PARA_CONTAINER_WD)] <=
            I_WR_DATA[(4*PARA_CONTAINER_WD)-1:(3*PARA_CONTAINER_WD)];
      end
      PARA_COMP_CB: begin
        if (I_WR_SAMPLE_EN[0])
          r_cb_mem[I_WR_ADDR[7:0]][PARA_CONTAINER_WD-1:0] <=
            I_WR_DATA[PARA_CONTAINER_WD-1:0];
        if (I_WR_SAMPLE_EN[1])
          r_cb_mem[I_WR_ADDR[7:0]][(2*PARA_CONTAINER_WD)-1:PARA_CONTAINER_WD] <=
            I_WR_DATA[(2*PARA_CONTAINER_WD)-1:PARA_CONTAINER_WD];
        if (I_WR_SAMPLE_EN[2])
          r_cb_mem[I_WR_ADDR[7:0]][(3*PARA_CONTAINER_WD)-1:(2*PARA_CONTAINER_WD)] <=
            I_WR_DATA[(3*PARA_CONTAINER_WD)-1:(2*PARA_CONTAINER_WD)];
        if (I_WR_SAMPLE_EN[3])
          r_cb_mem[I_WR_ADDR[7:0]][(4*PARA_CONTAINER_WD)-1:(3*PARA_CONTAINER_WD)] <=
            I_WR_DATA[(4*PARA_CONTAINER_WD)-1:(3*PARA_CONTAINER_WD)];
      end
      PARA_COMP_CR: begin
        if (I_WR_SAMPLE_EN[0])
          r_cr_mem[I_WR_ADDR[7:0]][PARA_CONTAINER_WD-1:0] <=
            I_WR_DATA[PARA_CONTAINER_WD-1:0];
        if (I_WR_SAMPLE_EN[1])
          r_cr_mem[I_WR_ADDR[7:0]][(2*PARA_CONTAINER_WD)-1:PARA_CONTAINER_WD] <=
            I_WR_DATA[(2*PARA_CONTAINER_WD)-1:PARA_CONTAINER_WD];
        if (I_WR_SAMPLE_EN[2])
          r_cr_mem[I_WR_ADDR[7:0]][(3*PARA_CONTAINER_WD)-1:(2*PARA_CONTAINER_WD)] <=
            I_WR_DATA[(3*PARA_CONTAINER_WD)-1:(2*PARA_CONTAINER_WD)];
        if (I_WR_SAMPLE_EN[3])
          r_cr_mem[I_WR_ADDR[7:0]][(4*PARA_CONTAINER_WD)-1:(3*PARA_CONTAINER_WD)] <=
            I_WR_DATA[(4*PARA_CONTAINER_WD)-1:(3*PARA_CONTAINER_WD)];
      end
      default: begin
      end
    endcase
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_RD_EN && w_rd_component_valid) begin
    unique casez (I_RD_COMPONENT_ID)
      PARA_COMP_Y: begin
        r_rd_data <= r_y_mem[I_RD_ADDR];
      end
      PARA_COMP_CB: begin
        r_rd_data <= r_cb_mem[I_RD_ADDR[7:0]];
      end
      PARA_COMP_CR: begin
        r_rd_data <= r_cr_mem[I_RD_ADDR[7:0]];
      end
      default: begin
        r_rd_data <= '0;
      end
    endcase
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_rd_valid <= 1'b0;
  else
    r_rd_valid <= I_RD_EN && w_rd_component_valid;
end

assign O_RD_VALID = r_rd_valid;
assign O_RD_DATA = r_rd_data;

endmodule: H_EDGE_RAM
