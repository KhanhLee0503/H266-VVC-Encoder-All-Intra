//-----------------------------------------------------------
// Description: This module tracks reconstructed 4x4 regions that have been
// committed to the local reconstructed sample RAM and edge RAMs. The map is
// maintained independently for Y, Cb, and Cr components. One commit event
// sets one availability bit. A CTU start clears all availability state.
// The query port is combinational and returns whether the requested 4x4
// region is ready to be used by the intra reference subsystem.
//-----------------------------------------------------------
`timescale 1ns/1ps

module RECON_AVAIL_MAP (
  input                 I_CLK,
  input                 I_RESETN,

  input                 I_CTU_START,

  input                 I_TILE_COMMIT_VALID,
  input [1:0]           I_TILE_COMMIT_COMPONENT_ID,
  input [4:0]           I_TILE_X_UNIT,
  input [4:0]           I_TILE_Y_UNIT,

  input [1:0]           I_QUERY_COMPONENT_ID,
  input [4:0]           I_QUERY_X_UNIT,
  input [4:0]           I_QUERY_Y_UNIT,
  output logic          O_QUERY_AVAILABLE
);

localparam PARA_COMP_Y  = 2'b00;
localparam PARA_COMP_CB = 2'b01;
localparam PARA_COMP_CR = 2'b10;

logic [1023:0]          r_y_avail;
logic [255:0]           r_cb_avail;
logic [255:0]           r_cr_avail;

logic [9:0]             w_y_commit_index;
logic [7:0]             w_c_commit_index;
logic [9:0]             w_y_query_index;
logic [7:0]             w_c_query_index;

logic                   w_commit_component_valid;
logic                   w_commit_coordinate_valid;
logic                   w_query_coordinate_valid;

assign w_y_commit_index = {
  I_TILE_Y_UNIT[4:0],
  I_TILE_X_UNIT[4:0]
};

assign w_c_commit_index = {
  I_TILE_Y_UNIT[3:0],
  I_TILE_X_UNIT[3:0]
};

assign w_y_query_index = {
  I_QUERY_Y_UNIT[4:0],
  I_QUERY_X_UNIT[4:0]
};

assign w_c_query_index = {
  I_QUERY_Y_UNIT[3:0],
  I_QUERY_X_UNIT[3:0]
};

always_comb begin
  w_commit_component_valid = 1'b0;
  w_commit_coordinate_valid = 1'b0;

  unique casez (I_TILE_COMMIT_COMPONENT_ID)
    PARA_COMP_Y: begin
      w_commit_component_valid = 1'b1;
      w_commit_coordinate_valid = 1'b1;
    end
    PARA_COMP_CB: begin
      w_commit_component_valid = 1'b1;
      w_commit_coordinate_valid =
        !I_TILE_X_UNIT[4] &&
        !I_TILE_Y_UNIT[4];
    end
    PARA_COMP_CR: begin
      w_commit_component_valid = 1'b1;
      w_commit_coordinate_valid =
        !I_TILE_X_UNIT[4] &&
        !I_TILE_Y_UNIT[4];
    end
    default: begin
      w_commit_component_valid = 1'b0;
      w_commit_coordinate_valid = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_y_avail <= '0;
    r_cb_avail <= '0;
    r_cr_avail <= '0;
  end
  else if (I_CTU_START) begin
    r_y_avail <= '0;
    r_cb_avail <= '0;
    r_cr_avail <= '0;
  end
  else if (I_TILE_COMMIT_VALID &&
           w_commit_component_valid &&
           w_commit_coordinate_valid) begin
    unique casez (I_TILE_COMMIT_COMPONENT_ID)
      PARA_COMP_Y: begin
        r_y_avail[w_y_commit_index] <= 1'b1;
      end
      PARA_COMP_CB: begin
        r_cb_avail[w_c_commit_index] <= 1'b1;
      end
      PARA_COMP_CR: begin
        r_cr_avail[w_c_commit_index] <= 1'b1;
      end
      default: begin
        // Hold the current availability state.
      end
    endcase
  end
end

always_comb begin
  O_QUERY_AVAILABLE = 1'b0;
  w_query_coordinate_valid = 1'b0;

  unique casez (I_QUERY_COMPONENT_ID)
    PARA_COMP_Y: begin
      w_query_coordinate_valid = 1'b1;
      O_QUERY_AVAILABLE = r_y_avail[w_y_query_index];
    end
    PARA_COMP_CB: begin
      w_query_coordinate_valid =
        !I_QUERY_X_UNIT[4] &&
        !I_QUERY_Y_UNIT[4];

      if (w_query_coordinate_valid)
        O_QUERY_AVAILABLE = r_cb_avail[w_c_query_index];
    end
    PARA_COMP_CR: begin
      w_query_coordinate_valid =
        !I_QUERY_X_UNIT[4] &&
        !I_QUERY_Y_UNIT[4];

      if (w_query_coordinate_valid)
        O_QUERY_AVAILABLE = r_cr_avail[w_c_query_index];
    end
    default: begin
      w_query_coordinate_valid = 1'b0;
      O_QUERY_AVAILABLE = 1'b0;
    end
  endcase
end

endmodule: RECON_AVAIL_MAP
