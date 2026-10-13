//-----------------------------------------------------------
// Description: This module generates the word address and lane selection
// for top, left, and top-left intra reference accesses. The source encoding
// is provided by INTRA_REF_SOURCE_SELECT. Local coordinates are used for
// H_EDGE_RAM, V_EDGE_RAM, and LEFT_BOUNDARY_BUFFER accesses, while the global
// horizontal coordinate is used for ABOVE_LINE_BUFFER accesses. The module
// is purely combinational and does not perform any memory read.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_ADDRESS_GEN #(
  parameter integer PARA_ADDR_WD = 10
)
(
  input [1:0]                         I_COMPONENT_ID,

  input [2:0]                         I_TOP_SOURCE,
  input [6:0]                         I_TOP_LOCAL_X,
  input [6:0]                         I_TOP_LOCAL_Y,
  input [11:0]                        I_TOP_GLOBAL_X,

  input [2:0]                         I_LEFT_SOURCE,
  input [6:0]                         I_LEFT_LOCAL_X,
  input [6:0]                         I_LEFT_LOCAL_Y,

  input [2:0]                         I_TL_SOURCE,
  input [6:0]                         I_TL_LOCAL_X,
  input [6:0]                         I_TL_LOCAL_Y,
  input [11:0]                        I_TL_GLOBAL_X,

  output logic                        O_TOP_ADDR_VALID,
  output logic [PARA_ADDR_WD-1:0]     O_TOP_ADDR,
  output logic [1:0]                  O_TOP_LANE_SEL,

  output logic                        O_LEFT_ADDR_VALID,
  output logic [PARA_ADDR_WD-1:0]     O_LEFT_ADDR,
  output logic [1:0]                  O_LEFT_LANE_SEL,

  output logic                        O_TL_ADDR_VALID,
  output logic [PARA_ADDR_WD-1:0]     O_TL_ADDR,
  output logic [1:0]                  O_TL_LANE_SEL
);

localparam [1:0] PARA_COMP_Y  = 2'b00;
localparam [1:0] PARA_COMP_CB = 2'b01;
localparam [1:0] PARA_COMP_CR = 2'b10;

localparam [2:0] PARA_SRC_NONE       = 3'b000;
localparam [2:0] PARA_SRC_H_EDGE     = 3'b001;
localparam [2:0] PARA_SRC_V_EDGE     = 3'b010;
localparam [2:0] PARA_SRC_ABOVE_LINE = 3'b011;
localparam [2:0] PARA_SRC_LEFT_BOUND = 3'b100;
localparam [2:0] PARA_SRC_ABOVE_LEFT = 3'b101;

logic [9:0] w_top_h_addr_y;
logic [9:0] w_top_h_addr_c;
logic [9:0] w_top_above_addr;

logic [9:0] w_left_v_addr_y;
logic [9:0] w_left_v_addr_c;
logic [9:0] w_left_bound_addr;

logic [9:0] w_tl_h_addr_y;
logic [9:0] w_tl_h_addr_c;
logic [9:0] w_tl_above_addr;
logic [9:0] w_tl_left_bound_addr;

assign w_top_h_addr_y = {
  I_TOP_LOCAL_Y[6:2],
  I_TOP_LOCAL_X[6:2]
};

assign w_top_h_addr_c = {
  2'b00,
  I_TOP_LOCAL_Y[5:2],
  I_TOP_LOCAL_X[5:2]
};

assign w_top_above_addr = I_TOP_GLOBAL_X[11:2];

assign w_left_v_addr_y = {
  I_LEFT_LOCAL_X[6:2],
  I_LEFT_LOCAL_Y[6:2]
};

assign w_left_v_addr_c = {
  2'b00,
  I_LEFT_LOCAL_X[5:2],
  I_LEFT_LOCAL_Y[5:2]
};

assign w_left_bound_addr = {
  5'b00000,
  I_LEFT_LOCAL_Y[6:2]
};

assign w_tl_h_addr_y = {
  I_TL_LOCAL_Y[6:2],
  I_TL_LOCAL_X[6:2]
};

assign w_tl_h_addr_c = {
  2'b00,
  I_TL_LOCAL_Y[5:2],
  I_TL_LOCAL_X[5:2]
};

assign w_tl_above_addr = I_TL_GLOBAL_X[11:2];

assign w_tl_left_bound_addr = {
  5'b00000,
  I_TL_LOCAL_Y[6:2]
};

always_comb begin
  O_TOP_ADDR_VALID = 1'b0;
  O_TOP_ADDR = '0;
  O_TOP_LANE_SEL = 2'b00;

  unique casez (I_TOP_SOURCE)
    PARA_SRC_H_EDGE: begin
      unique casez (I_COMPONENT_ID)
        PARA_COMP_Y: begin
          O_TOP_ADDR_VALID = 1'b1;
          O_TOP_ADDR = w_top_h_addr_y;
        end
        PARA_COMP_CB: begin
          if (!I_TOP_LOCAL_X[6] && !I_TOP_LOCAL_Y[6]) begin
            O_TOP_ADDR_VALID = 1'b1;
            O_TOP_ADDR = w_top_h_addr_c;
          end
        end
        PARA_COMP_CR: begin
          if (!I_TOP_LOCAL_X[6] && !I_TOP_LOCAL_Y[6]) begin
            O_TOP_ADDR_VALID = 1'b1;
            O_TOP_ADDR = w_top_h_addr_c;
          end
        end
        default: begin
          O_TOP_ADDR_VALID = 1'b0;
          O_TOP_ADDR = '0;
        end
      endcase
    end

    PARA_SRC_ABOVE_LINE: begin
      O_TOP_ADDR_VALID = 1'b1;
      O_TOP_ADDR = w_top_above_addr;
    end

    PARA_SRC_NONE: begin
      O_TOP_ADDR_VALID = 1'b0;
      O_TOP_ADDR = '0;
    end

    default: begin
      O_TOP_ADDR_VALID = 1'b0;
      O_TOP_ADDR = '0;
    end
  endcase
end

always_comb begin
  O_LEFT_ADDR_VALID = 1'b0;
  O_LEFT_ADDR = '0;
  O_LEFT_LANE_SEL = 2'b00;

  unique casez (I_LEFT_SOURCE)
    PARA_SRC_V_EDGE: begin
      unique casez (I_COMPONENT_ID)
        PARA_COMP_Y: begin
          O_LEFT_ADDR_VALID = 1'b1;
          O_LEFT_ADDR = w_left_v_addr_y;
        end
        PARA_COMP_CB: begin
          if (!I_LEFT_LOCAL_X[6] && !I_LEFT_LOCAL_Y[6]) begin
            O_LEFT_ADDR_VALID = 1'b1;
            O_LEFT_ADDR = w_left_v_addr_c;
          end
        end
        PARA_COMP_CR: begin
          if (!I_LEFT_LOCAL_X[6] && !I_LEFT_LOCAL_Y[6]) begin
            O_LEFT_ADDR_VALID = 1'b1;
            O_LEFT_ADDR = w_left_v_addr_c;
          end
        end
        default: begin
          O_LEFT_ADDR_VALID = 1'b0;
          O_LEFT_ADDR = '0;
        end
      endcase
    end

    PARA_SRC_LEFT_BOUND: begin
      O_LEFT_ADDR_VALID = 1'b1;
      O_LEFT_ADDR = w_left_bound_addr;
    end

    PARA_SRC_NONE: begin
      O_LEFT_ADDR_VALID = 1'b0;
      O_LEFT_ADDR = '0;
    end

    default: begin
      O_LEFT_ADDR_VALID = 1'b0;
      O_LEFT_ADDR = '0;
    end
  endcase
end

always_comb begin
  O_TL_ADDR_VALID = 1'b0;
  O_TL_ADDR = '0;
  O_TL_LANE_SEL = 2'b00;

  unique casez (I_TL_SOURCE)
    PARA_SRC_H_EDGE: begin
      unique casez (I_COMPONENT_ID)
        PARA_COMP_Y: begin
          O_TL_ADDR_VALID = 1'b1;
          O_TL_ADDR = w_tl_h_addr_y;
          O_TL_LANE_SEL = I_TL_LOCAL_X[1:0];
        end
        PARA_COMP_CB: begin
          if (!I_TL_LOCAL_X[6] && !I_TL_LOCAL_Y[6]) begin
            O_TL_ADDR_VALID = 1'b1;
            O_TL_ADDR = w_tl_h_addr_c;
            O_TL_LANE_SEL = I_TL_LOCAL_X[1:0];
          end
        end
        PARA_COMP_CR: begin
          if (!I_TL_LOCAL_X[6] && !I_TL_LOCAL_Y[6]) begin
            O_TL_ADDR_VALID = 1'b1;
            O_TL_ADDR = w_tl_h_addr_c;
            O_TL_LANE_SEL = I_TL_LOCAL_X[1:0];
          end
        end
        default: begin
          O_TL_ADDR_VALID = 1'b0;
          O_TL_ADDR = '0;
          O_TL_LANE_SEL = 2'b00;
        end
      endcase
    end

    PARA_SRC_ABOVE_LINE: begin
      O_TL_ADDR_VALID = 1'b1;
      O_TL_ADDR = w_tl_above_addr;
      O_TL_LANE_SEL = I_TL_GLOBAL_X[1:0];
    end

    PARA_SRC_LEFT_BOUND: begin
      O_TL_ADDR_VALID = 1'b1;
      O_TL_ADDR = w_tl_left_bound_addr;
      O_TL_LANE_SEL = I_TL_LOCAL_Y[1:0];
    end

    PARA_SRC_ABOVE_LEFT: begin
      O_TL_ADDR_VALID = 1'b0;
      O_TL_ADDR = '0;
      O_TL_LANE_SEL = 2'b00;
    end

    PARA_SRC_NONE: begin
      O_TL_ADDR_VALID = 1'b0;
      O_TL_ADDR = '0;
      O_TL_LANE_SEL = 2'b00;
    end

    default: begin
      O_TL_ADDR_VALID = 1'b0;
      O_TL_ADDR = '0;
      O_TL_LANE_SEL = 2'b00;
    end
  endcase
end

endmodule: INTRA_REF_ADDRESS_GEN
