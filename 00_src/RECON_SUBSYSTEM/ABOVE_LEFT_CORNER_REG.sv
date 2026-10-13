//-----------------------------------------------------------
// Description: This module stores the above-left reconstructed sample for
// the current CTU. One 16-bit sample container and one valid bit are kept
// independently for the Y, Cb, and Cr components. The registers are cleared
// logically at each CTU start by clearing only their valid bits.
//-----------------------------------------------------------
`timescale 1ns/1ps

module ABOVE_LEFT_CORNER_REG #(
  parameter integer PARA_SAMPLE_WD = 16
)
(
  input                                  I_CLK,
  input                                  I_RESETN,

  input                                  I_CTU_START,

  input                                  I_LOAD_VALID,
  input [1:0]                            I_LOAD_COMPONENT_ID,
  input [PARA_SAMPLE_WD-1:0]             I_LOAD_SAMPLE,

  input [1:0]                            I_QUERY_COMPONENT_ID,
  output logic                           O_QUERY_VALID,
  output logic [PARA_SAMPLE_WD-1:0]      O_QUERY_SAMPLE
);

localparam PARA_COMP_Y  = 2'b00;
localparam PARA_COMP_CB = 2'b01;
localparam PARA_COMP_CR = 2'b10;

logic [PARA_SAMPLE_WD-1:0] r_y_sample;
logic [PARA_SAMPLE_WD-1:0] r_cb_sample;
logic [PARA_SAMPLE_WD-1:0] r_cr_sample;

logic                      r_y_valid;
logic                      r_cb_valid;
logic                      r_cr_valid;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_y_valid <= 1'b0;
    r_cb_valid <= 1'b0;
    r_cr_valid <= 1'b0;
  end
  else if (I_CTU_START) begin
    r_y_valid <= 1'b0;
    r_cb_valid <= 1'b0;
    r_cr_valid <= 1'b0;
  end
  else if (I_LOAD_VALID) begin
    unique casez (I_LOAD_COMPONENT_ID)
      PARA_COMP_Y: begin
        r_y_valid <= 1'b1;
      end
      PARA_COMP_CB: begin
        r_cb_valid <= 1'b1;
      end
      PARA_COMP_CR: begin
        r_cr_valid <= 1'b1;
      end
      default: begin
        // No valid bit is updated for an unsupported component.
      end
    endcase
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_LOAD_VALID) begin
    unique casez (I_LOAD_COMPONENT_ID)
      PARA_COMP_Y: begin
        r_y_sample <= I_LOAD_SAMPLE;
      end
      PARA_COMP_CB: begin
        r_cb_sample <= I_LOAD_SAMPLE;
      end
      PARA_COMP_CR: begin
        r_cr_sample <= I_LOAD_SAMPLE;
      end
      default: begin
        // No sample register is updated for an unsupported component.
      end
    endcase
  end
end

always_comb begin
  O_QUERY_VALID = 1'b0;
  O_QUERY_SAMPLE = '0;

  unique casez (I_QUERY_COMPONENT_ID)
    PARA_COMP_Y: begin
      O_QUERY_VALID = r_y_valid;
      O_QUERY_SAMPLE = r_y_sample;
    end
    PARA_COMP_CB: begin
      O_QUERY_VALID = r_cb_valid;
      O_QUERY_SAMPLE = r_cb_sample;
    end
    PARA_COMP_CR: begin
      O_QUERY_VALID = r_cr_valid;
      O_QUERY_SAMPLE = r_cr_sample;
    end
    default: begin
      O_QUERY_VALID = 1'b0;
      O_QUERY_SAMPLE = '0;
    end
  endcase
end

endmodule: ABOVE_LEFT_CORNER_REG
