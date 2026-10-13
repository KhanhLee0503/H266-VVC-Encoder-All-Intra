//-----------------------------------------------------------
// Description: This module stores reconstructed vertical CTU boundaries for
// intra-reference access. One 64-bit word contains four vertically adjacent
// 16-bit sample containers. The luma plane contains 1024 words for 32
// vertical boundaries by 32 vertical segments. Each chroma plane contains
// 256 words for 16 boundaries by 16 vertical segments. The upstream
// RECON_REF_STORE_WRITER performs the four-row packing before each write.
// The module provides one synchronous read port and one full-word write port.
//-----------------------------------------------------------
`timescale 1ns/1ps

module V_EDGE_RAM #(
  parameter PARA_CONTAINER_WD = 16
)(
  input                                         I_CLK,
  input                                         I_RESETN,

  input                                         I_WR_EN,
  input [1:0]                                   I_WR_COMPONENT_ID,
  input [9:0]                                   I_WR_ADDR,
  input [(4*PARA_CONTAINER_WD)-1:0]             I_WR_DATA,

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
        r_y_mem[I_WR_ADDR] <= I_WR_DATA;
      end
      PARA_COMP_CB: begin
        r_cb_mem[I_WR_ADDR[7:0]] <= I_WR_DATA;
      end
      PARA_COMP_CR: begin
        r_cr_mem[I_WR_ADDR[7:0]] <= I_WR_DATA;
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
assign O_RD_DATA  = r_rd_data;

endmodule: V_EDGE_RAM
