//-----------------------------------------------------------
// Description: This module accepts four reconstructed samples per cycle in
// raster-scan order and generates write commands for the local reconstructed
// sample RAM, horizontal edge RAM, and vertical edge RAM. Each reconstructed
// sample is stored in a 16-bit container. The module also accumulates one
// vertical boundary sample across four rows before committing a 64-bit
// vertical edge word. Tile commit and TU release events are registered so
// they are observed after the corresponding storage writes have completed.
//-----------------------------------------------------------
`timescale 1ns/1ps

module RECON_REF_STORE_WRITER #(
  parameter PARA_PIXEL_WD = 10,
  parameter PARA_CONTAINER_WD = 16
)(
  input                                              I_CLK,
  input                                              I_RESETN,

  input                                              I_RECON_VALID,
  output logic                                       O_RECON_READY,
  input [1:0]                                        I_COMPONENT_ID,
  input [6:0]                                        I_RECON_X_BASE,
  input [6:0]                                        I_RECON_Y,
  input [(4*PARA_PIXEL_WD)-1:0]                      I_RECON_SAMPLE,
  input [3:0]                                        I_RECON_LANE_VALID,
  input                                              I_RECON_TU_LAST,

  output logic                                       O_LOCAL_WR_EN,
  output logic [1:0]                                 O_LOCAL_WR_COMPONENT_ID,
  output logic [11:0]                                O_LOCAL_WR_ADDR,
  output logic [(4*PARA_CONTAINER_WD)-1:0]           O_LOCAL_WR_DATA,
  output logic [3:0]                                 O_LOCAL_WR_SAMPLE_EN,

  output logic                                       O_H_EDGE_WR_EN,
  output logic [1:0]                                 O_H_EDGE_WR_COMPONENT_ID,
  output logic [9:0]                                 O_H_EDGE_WR_ADDR,
  output logic [(4*PARA_CONTAINER_WD)-1:0]           O_H_EDGE_WR_DATA,
  output logic [3:0]                                 O_H_EDGE_WR_SAMPLE_EN,

  output logic                                       O_V_EDGE_WR_EN,
  output logic [1:0]                                 O_V_EDGE_WR_COMPONENT_ID,
  output logic [9:0]                                 O_V_EDGE_WR_ADDR,
  output logic [(4*PARA_CONTAINER_WD)-1:0]           O_V_EDGE_WR_DATA,

  output logic                                       O_TILE_COMMIT_VALID,
  output logic [1:0]                                 O_TILE_COMMIT_COMPONENT_ID,
  output logic [4:0]                                 O_TILE_X_UNIT,
  output logic [4:0]                                 O_TILE_Y_UNIT,

  output logic                                       O_TU_REF_RELEASE
);

localparam PARA_WORD_WD = 4*PARA_CONTAINER_WD;
localparam PARA_COMP_Y  = 2'b00;
localparam PARA_COMP_CB = 2'b01;
localparam PARA_COMP_CR = 2'b10;

logic                                              w_component_valid;
logic                                              w_recon_accept;
logic                                              w_horizontal_boundary;
logic                                              w_vertical_word_complete;
logic [4:0]                                        w_v_partial_index;
logic [PARA_CONTAINER_WD-1:0]                      w_sample_0;
logic [PARA_CONTAINER_WD-1:0]                      w_sample_1;
logic [PARA_CONTAINER_WD-1:0]                      w_sample_2;
logic [PARA_CONTAINER_WD-1:0]                      w_sample_3;
logic [PARA_WORD_WD-1:0]                           w_recon_word;
logic [11:0]                                       w_local_addr;
logic [9:0]                                        w_h_edge_addr;
logic [9:0]                                        w_v_edge_addr;
logic [PARA_WORD_WD-1:0]                           r_v_edge_partial [0:31];
logic [PARA_WORD_WD-1:0]                           w_v_partial_current;
logic [PARA_WORD_WD-1:0]                           w_v_partial_next;
logic                                              r_tile_commit_valid;
logic [1:0]                                        r_tile_commit_component_id;
logic [4:0]                                        r_tile_x_unit;
logic [4:0]                                        r_tile_y_unit;
logic                                              r_tu_ref_release;

always_comb begin
  w_component_valid = 1'b0;
  w_local_addr = '0;
  w_h_edge_addr = '0;
  w_v_edge_addr = '0;

  unique casez (I_COMPONENT_ID)
    PARA_COMP_Y: begin
      w_component_valid = 1'b1;
      w_local_addr = {I_RECON_Y[6:0], I_RECON_X_BASE[6:2]};
      w_h_edge_addr = {I_RECON_Y[6:2], I_RECON_X_BASE[6:2]};
      w_v_edge_addr = {I_RECON_X_BASE[6:2], I_RECON_Y[6:2]};
    end
    PARA_COMP_CB: begin
      w_component_valid = 1'b1;
      w_local_addr = {2'b00, I_RECON_Y[5:0], I_RECON_X_BASE[5:2]};
      w_h_edge_addr = {2'b00, I_RECON_Y[5:2], I_RECON_X_BASE[5:2]};
      w_v_edge_addr = {2'b00, I_RECON_X_BASE[5:2], I_RECON_Y[5:2]};
    end
    PARA_COMP_CR: begin
      w_component_valid = 1'b1;
      w_local_addr = {2'b00, I_RECON_Y[5:0], I_RECON_X_BASE[5:2]};
      w_h_edge_addr = {2'b00, I_RECON_Y[5:2], I_RECON_X_BASE[5:2]};
      w_v_edge_addr = {2'b00, I_RECON_X_BASE[5:2], I_RECON_Y[5:2]};
    end
    default: begin
      w_component_valid = 1'b0;
      w_local_addr = '0;
      w_h_edge_addr = '0;
      w_v_edge_addr = '0;
    end
  endcase
end

assign O_RECON_READY = w_component_valid;
assign w_recon_accept = I_RECON_VALID && O_RECON_READY;
assign w_horizontal_boundary = (I_RECON_Y[1:0] == 2'b11);
assign w_vertical_word_complete = (I_RECON_Y[1:0] == 2'b11);
assign w_v_partial_index = I_RECON_X_BASE[6:2];

assign w_sample_0 = {{(PARA_CONTAINER_WD-PARA_PIXEL_WD){1'b0}},
                     I_RECON_SAMPLE[PARA_PIXEL_WD-1:0]};
assign w_sample_1 = {{(PARA_CONTAINER_WD-PARA_PIXEL_WD){1'b0}},
                     I_RECON_SAMPLE[(2*PARA_PIXEL_WD)-1:PARA_PIXEL_WD]};
assign w_sample_2 = {{(PARA_CONTAINER_WD-PARA_PIXEL_WD){1'b0}},
                     I_RECON_SAMPLE[(3*PARA_PIXEL_WD)-1:(2*PARA_PIXEL_WD)]};
assign w_sample_3 = {{(PARA_CONTAINER_WD-PARA_PIXEL_WD){1'b0}},
                     I_RECON_SAMPLE[(4*PARA_PIXEL_WD)-1:(3*PARA_PIXEL_WD)]};
assign w_recon_word = {w_sample_3, w_sample_2, w_sample_1, w_sample_0};

always_comb begin
  w_v_partial_current = r_v_edge_partial[w_v_partial_index];
  w_v_partial_next = w_v_partial_current;

  unique casez (I_RECON_Y[1:0])
    2'b00: begin
      w_v_partial_next[(1*PARA_CONTAINER_WD)-1:0] = w_sample_3;
    end
    2'b01: begin
      w_v_partial_next[(2*PARA_CONTAINER_WD)-1:(1*PARA_CONTAINER_WD)] = w_sample_3;
    end
    2'b10: begin
      w_v_partial_next[(3*PARA_CONTAINER_WD)-1:(2*PARA_CONTAINER_WD)] = w_sample_3;
    end
    2'b11: begin
      w_v_partial_next[(4*PARA_CONTAINER_WD)-1:(3*PARA_CONTAINER_WD)] = w_sample_3;
    end
    default: begin
      w_v_partial_next = w_v_partial_current;
    end
  endcase
end

always_ff @ (posedge I_CLK) begin
  if (w_recon_accept && I_RECON_LANE_VALID[3])
    r_v_edge_partial[w_v_partial_index] <= w_v_partial_next;
end

always_comb begin
  O_LOCAL_WR_EN = 1'b0;
  O_LOCAL_WR_COMPONENT_ID = I_COMPONENT_ID;
  O_LOCAL_WR_ADDR = w_local_addr;
  O_LOCAL_WR_DATA = w_recon_word;
  O_LOCAL_WR_SAMPLE_EN = I_RECON_LANE_VALID;

  O_H_EDGE_WR_EN = 1'b0;
  O_H_EDGE_WR_COMPONENT_ID = I_COMPONENT_ID;
  O_H_EDGE_WR_ADDR = w_h_edge_addr;
  O_H_EDGE_WR_DATA = w_recon_word;
  O_H_EDGE_WR_SAMPLE_EN = I_RECON_LANE_VALID;

  O_V_EDGE_WR_EN = 1'b0;
  O_V_EDGE_WR_COMPONENT_ID = I_COMPONENT_ID;
  O_V_EDGE_WR_ADDR = w_v_edge_addr;
  O_V_EDGE_WR_DATA = w_v_partial_next;

  if (w_recon_accept) begin
    if (|I_RECON_LANE_VALID)
      O_LOCAL_WR_EN = 1'b1;

    if (w_horizontal_boundary && (|I_RECON_LANE_VALID))
      O_H_EDGE_WR_EN = 1'b1;

    if (w_vertical_word_complete && I_RECON_LANE_VALID[3])
      O_V_EDGE_WR_EN = 1'b1;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_tile_commit_valid <= 1'b0;
    r_tu_ref_release <= 1'b0;
  end
  else begin
    r_tile_commit_valid <= w_recon_accept &&
                           w_horizontal_boundary &&
                           (&I_RECON_LANE_VALID);
    r_tu_ref_release <= w_recon_accept &&
                        I_RECON_TU_LAST &&
                        w_horizontal_boundary &&
                        (&I_RECON_LANE_VALID);
  end
end

always_ff @ (posedge I_CLK) begin
  if (w_recon_accept &&
      w_horizontal_boundary &&
      (&I_RECON_LANE_VALID)) begin
    r_tile_commit_component_id <= I_COMPONENT_ID;
    r_tile_x_unit <= I_RECON_X_BASE[6:2];
    r_tile_y_unit <= I_RECON_Y[6:2];
  end
end

assign O_TILE_COMMIT_VALID        = r_tile_commit_valid;
assign O_TILE_COMMIT_COMPONENT_ID = r_tile_commit_component_id;
assign O_TILE_X_UNIT              = r_tile_x_unit;
assign O_TILE_Y_UNIT              = r_tile_y_unit;
assign O_TU_REF_RELEASE           = r_tu_ref_release;

endmodule: RECON_REF_STORE_WRITER
