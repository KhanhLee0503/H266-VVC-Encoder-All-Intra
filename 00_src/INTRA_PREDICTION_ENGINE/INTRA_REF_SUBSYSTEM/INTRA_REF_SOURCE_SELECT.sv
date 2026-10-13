//-----------------------------------------------------------
// Description: This module selects the reconstructed sample storage source
// for top, left, and top-left intra reference requests. The selection is
// derived only from the availability and location classification generated
// by INTRA_REF_AVAILABILITY. The module is purely combinational and does not
// calculate memory addresses or read sample data.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_SOURCE_SELECT (
  input                                  I_TOP_AVAILABLE,
  input [2:0]                            I_TOP_LOCATION,

  input                                  I_LEFT_AVAILABLE,
  input [2:0]                            I_LEFT_LOCATION,

  input                                  I_TL_AVAILABLE,
  input [2:0]                            I_TL_LOCATION,

  output logic [2:0]                     O_TOP_SOURCE,
  output logic                           O_TOP_READ_ENABLE,

  output logic [2:0]                     O_LEFT_SOURCE,
  output logic                           O_LEFT_READ_ENABLE,

  output logic [2:0]                     O_TL_SOURCE,
  output logic                           O_TL_READ_ENABLE
);

localparam [2:0] PARA_LOC_LOCAL      = 3'b000;
localparam [2:0] PARA_LOC_ABOVE      = 3'b001;
localparam [2:0] PARA_LOC_LEFT       = 3'b010;
localparam [2:0] PARA_LOC_ABOVE_LEFT = 3'b011;
localparam [2:0] PARA_LOC_INVALID    = 3'b100;

localparam [2:0] PARA_SRC_NONE       = 3'b000;
localparam [2:0] PARA_SRC_H_EDGE     = 3'b001;
localparam [2:0] PARA_SRC_V_EDGE     = 3'b010;
localparam [2:0] PARA_SRC_ABOVE_LINE = 3'b011;
localparam [2:0] PARA_SRC_LEFT_BOUND = 3'b100;
localparam [2:0] PARA_SRC_ABOVE_LEFT = 3'b101;

always_comb begin
  O_TOP_SOURCE = PARA_SRC_NONE;
  O_TOP_READ_ENABLE = 1'b0;

  if (I_TOP_AVAILABLE) begin
    unique casez (I_TOP_LOCATION)
      PARA_LOC_LOCAL: begin
        O_TOP_SOURCE = PARA_SRC_H_EDGE;
        O_TOP_READ_ENABLE = 1'b1;
      end
      PARA_LOC_ABOVE: begin
        O_TOP_SOURCE = PARA_SRC_ABOVE_LINE;
        O_TOP_READ_ENABLE = 1'b1;
      end
      PARA_LOC_LEFT: begin
        O_TOP_SOURCE = PARA_SRC_NONE;
        O_TOP_READ_ENABLE = 1'b0;
      end
      PARA_LOC_ABOVE_LEFT: begin
        O_TOP_SOURCE = PARA_SRC_NONE;
        O_TOP_READ_ENABLE = 1'b0;
      end
      PARA_LOC_INVALID: begin
        O_TOP_SOURCE = PARA_SRC_NONE;
        O_TOP_READ_ENABLE = 1'b0;
      end
      default: begin
        O_TOP_SOURCE = PARA_SRC_NONE;
        O_TOP_READ_ENABLE = 1'b0;
      end
    endcase
  end
end

always_comb begin
  O_LEFT_SOURCE = PARA_SRC_NONE;
  O_LEFT_READ_ENABLE = 1'b0;

  if (I_LEFT_AVAILABLE) begin
    unique casez (I_LEFT_LOCATION)
      PARA_LOC_LOCAL: begin
        O_LEFT_SOURCE = PARA_SRC_V_EDGE;
        O_LEFT_READ_ENABLE = 1'b1;
      end
      PARA_LOC_ABOVE: begin
        O_LEFT_SOURCE = PARA_SRC_NONE;
        O_LEFT_READ_ENABLE = 1'b0;
      end
      PARA_LOC_LEFT: begin
        O_LEFT_SOURCE = PARA_SRC_LEFT_BOUND;
        O_LEFT_READ_ENABLE = 1'b1;
      end
      PARA_LOC_ABOVE_LEFT: begin
        O_LEFT_SOURCE = PARA_SRC_NONE;
        O_LEFT_READ_ENABLE = 1'b0;
      end
      PARA_LOC_INVALID: begin
        O_LEFT_SOURCE = PARA_SRC_NONE;
        O_LEFT_READ_ENABLE = 1'b0;
      end
      default: begin
        O_LEFT_SOURCE = PARA_SRC_NONE;
        O_LEFT_READ_ENABLE = 1'b0;
      end
    endcase
  end
end

always_comb begin
  O_TL_SOURCE = PARA_SRC_NONE;
  O_TL_READ_ENABLE = 1'b0;

  if (I_TL_AVAILABLE) begin
    unique casez (I_TL_LOCATION)
      PARA_LOC_LOCAL: begin
        O_TL_SOURCE = PARA_SRC_H_EDGE;
        O_TL_READ_ENABLE = 1'b1;
      end
      PARA_LOC_ABOVE: begin
        O_TL_SOURCE = PARA_SRC_ABOVE_LINE;
        O_TL_READ_ENABLE = 1'b1;
      end
      PARA_LOC_LEFT: begin
        O_TL_SOURCE = PARA_SRC_LEFT_BOUND;
        O_TL_READ_ENABLE = 1'b1;
      end
      PARA_LOC_ABOVE_LEFT: begin
        O_TL_SOURCE = PARA_SRC_ABOVE_LEFT;
        O_TL_READ_ENABLE = 1'b1;
      end
      PARA_LOC_INVALID: begin
        O_TL_SOURCE = PARA_SRC_NONE;
        O_TL_READ_ENABLE = 1'b0;
      end
      default: begin
        O_TL_SOURCE = PARA_SRC_NONE;
        O_TL_READ_ENABLE = 1'b0;
      end
    endcase
  end
end

endmodule: INTRA_REF_SOURCE_SELECT
