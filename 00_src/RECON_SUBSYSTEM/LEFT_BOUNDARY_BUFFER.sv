//-----------------------------------------------------------
// Description: This module stores the reconstructed right boundary of the
// CTU immediately to the left of the current CTU. Two ping-pong banks allow
// the current CTU to write its right boundary while intra prediction reads
// the completed boundary of the previous CTU. Each memory word contains
// four vertically adjacent 16-bit sample containers.
//-----------------------------------------------------------
`timescale 1ns/1ps

module LEFT_BOUNDARY_BUFFER #(
  parameter integer PARA_DATA_WD        = 64,
  parameter integer PARA_LUMA_ADDR_WD   = 5,
  parameter integer PARA_CHROMA_ADDR_WD = 4
)
(
  input                                      I_CLK,
  input                                      I_RESETN,

  input                                      I_PICTURE_START,
  input                                      I_CTU_ROW_START,
  input                                      I_CTU_DONE,

  input                                      I_WR_EN,
  input [1:0]                                I_WR_COMPONENT_ID,
  input [PARA_LUMA_ADDR_WD-1:0]              I_WR_ADDR,
  input [PARA_DATA_WD-1:0]                   I_WR_DATA,

  input                                      I_RD_EN,
  input [1:0]                                I_RD_COMPONENT_ID,
  input [PARA_LUMA_ADDR_WD-1:0]              I_RD_ADDR,
  output logic                               O_RD_VALID,
  output logic [PARA_DATA_WD-1:0]            O_RD_DATA,

  output logic                               O_BOUNDARY_VALID
);

localparam PARA_COMP_Y  = 2'b00;
localparam PARA_COMP_CB = 2'b01;
localparam PARA_COMP_CR = 2'b10;

localparam integer PARA_LUMA_DEPTH   = (1 << PARA_LUMA_ADDR_WD);
localparam integer PARA_CHROMA_DEPTH = (1 << PARA_CHROMA_ADDR_WD);

logic [PARA_DATA_WD-1:0] r_y_bank_a [0:PARA_LUMA_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_y_bank_b [0:PARA_LUMA_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_cb_bank_a [0:PARA_CHROMA_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_cb_bank_b [0:PARA_CHROMA_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_cr_bank_a [0:PARA_CHROMA_DEPTH-1];
logic [PARA_DATA_WD-1:0] r_cr_bank_b [0:PARA_CHROMA_DEPTH-1];

logic                    r_read_bank_select;
logic                    r_boundary_valid;

assign O_BOUNDARY_VALID = r_boundary_valid;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_read_bank_select <= 1'b0;
    r_boundary_valid <= 1'b0;
  end
  else if (I_PICTURE_START) begin
    r_read_bank_select <= 1'b0;
    r_boundary_valid <= 1'b0;
  end
  else if (I_CTU_ROW_START) begin
    r_boundary_valid <= 1'b0;
  end
  else if (I_CTU_DONE) begin
    r_read_bank_select <= ~r_read_bank_select;
    r_boundary_valid <= 1'b1;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_WR_EN) begin
    unique casez (I_WR_COMPONENT_ID)
      PARA_COMP_Y: begin
        if (!r_read_bank_select)
          r_y_bank_b[I_WR_ADDR] <= I_WR_DATA;
        else
          r_y_bank_a[I_WR_ADDR] <= I_WR_DATA;
      end
      PARA_COMP_CB: begin
        if (!r_read_bank_select)
          r_cb_bank_b[I_WR_ADDR[PARA_CHROMA_ADDR_WD-1:0]] <= I_WR_DATA;
        else
          r_cb_bank_a[I_WR_ADDR[PARA_CHROMA_ADDR_WD-1:0]] <= I_WR_DATA;
      end
      PARA_COMP_CR: begin
        if (!r_read_bank_select)
          r_cr_bank_b[I_WR_ADDR[PARA_CHROMA_ADDR_WD-1:0]] <= I_WR_DATA;
        else
          r_cr_bank_a[I_WR_ADDR[PARA_CHROMA_ADDR_WD-1:0]] <= I_WR_DATA;
      end
      default: begin
        // No memory write is performed for an unsupported component.
      end
    endcase
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    O_RD_VALID <= 1'b0;
  end
  else begin
    O_RD_VALID <= I_RD_EN && r_boundary_valid;

    if (I_RD_EN && r_boundary_valid) begin
      unique casez (I_RD_COMPONENT_ID)
        PARA_COMP_Y: begin
          if (!r_read_bank_select)
            O_RD_DATA <= r_y_bank_a[I_RD_ADDR];
          else
            O_RD_DATA <= r_y_bank_b[I_RD_ADDR];
        end
        PARA_COMP_CB: begin
          if (!r_read_bank_select)
            O_RD_DATA <= r_cb_bank_a[I_RD_ADDR[PARA_CHROMA_ADDR_WD-1:0]];
          else
            O_RD_DATA <= r_cb_bank_b[I_RD_ADDR[PARA_CHROMA_ADDR_WD-1:0]];
        end
        PARA_COMP_CR: begin
          if (!r_read_bank_select)
            O_RD_DATA <= r_cr_bank_a[I_RD_ADDR[PARA_CHROMA_ADDR_WD-1:0]];
          else
            O_RD_DATA <= r_cr_bank_b[I_RD_ADDR[PARA_CHROMA_ADDR_WD-1:0]];
        end
        default: begin
          O_RD_DATA <= '0;
        end
      endcase
    end
  end
end

endmodule: LEFT_BOUNDARY_BUFFER
