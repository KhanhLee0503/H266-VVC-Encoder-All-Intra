//-----------------------------------------------------------
// Description: This module selects the left and top samples used by four VVC PDPC lanes.
// The input arrays contain reconstructed, substituted, and optionally filtered reference
// samples as selected by the upstream intra reference subsystem. For oblique modes, inverse
// angle arithmetic generates each displaced reference address. Out-of-range accesses are
// saturated to the selected reference endpoint as a defensive integration guard.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PDPC_REF_SELECT #(
  parameter PARA_PIXEL_WD = 10,
  parameter PARA_COORD_WD = 5,
  parameter PARA_REF_NUM  = 64
)
(
  input [2:0]                                  I_PDPC_MODE,
  input [PARA_COORD_WD-1:0]                    I_X_BASE,
  input [PARA_COORD_WD-1:0]                    I_Y,
  input [14:0]                                 I_INV_ANGLE_ABS,
  input [6:0]                                  I_REF_WIDTH,
  input [6:0]                                  I_REF_HEIGHT,
  input [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0]     I_TOP_REF,
  input [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0]     I_LEFT_REF,
  output logic [(4*PARA_PIXEL_WD)-1:0]         O_REF_L,
  output logic [(4*PARA_PIXEL_WD)-1:0]         O_REF_T
);

localparam PARA_MODE_PLANAR_DC = 3'd1;
localparam PARA_MODE_HOR_18    = 3'd2;
localparam PARA_MODE_VER_50    = 3'd3;
localparam PARA_MODE_ANG_LT18  = 3'd4;
localparam PARA_MODE_ANG_GT50  = 3'd5;

logic [PARA_PIXEL_WD-1:0] w_top_ref [0:PARA_REF_NUM-1];
logic [PARA_PIXEL_WD-1:0] w_left_ref [0:PARA_REF_NUM-1];
logic [5:0] w_y_plus_one;
logic [20:0] w_dx_product;
logic [21:0] w_dx_rounded;
logic [12:0] w_dx_integer;
logic [6:0] w_ref_width_last;
logic [6:0] w_ref_height_last;

genvar gen_ref;
genvar gen_lane;

assign w_y_plus_one = {1'b0, I_Y} + 6'd1;
assign w_dx_product = w_y_plus_one * I_INV_ANGLE_ABS;
assign w_dx_rounded = {1'b0, w_dx_product} + 22'd256;
assign w_dx_integer = 13'(w_dx_rounded >> 9);
assign w_ref_width_last = (I_REF_WIDTH != 7'd0) ? I_REF_WIDTH - 7'd1 : 7'd0;
assign w_ref_height_last = (I_REF_HEIGHT != 7'd0) ? I_REF_HEIGHT - 7'd1 : 7'd0;

generate
  for (gen_ref = 0; gen_ref < PARA_REF_NUM; gen_ref = gen_ref + 1) begin: GEN_REF_UNPACK
    assign w_top_ref[gen_ref] = I_TOP_REF[(gen_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD];
    assign w_left_ref[gen_ref] = I_LEFT_REF[(gen_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD];
  end

  for (gen_lane = 0; gen_lane < 4; gen_lane = gen_lane + 1) begin: GEN_PDPC_REF_LANE
    logic [5:0] w_x_position;
    logic [5:0] w_x_plus_one;
    logic [20:0] w_dy_product;
    logic [21:0] w_dy_rounded;
    logic [12:0] w_dy_integer;
    logic [12:0] w_top_index;
    logic [12:0] w_left_index;
    logic [5:0] w_top_addr;
    logic [5:0] w_left_addr;
    logic [PARA_PIXEL_WD-1:0] w_lane_ref_l;
    logic [PARA_PIXEL_WD-1:0] w_lane_ref_t;

    assign w_x_position = {1'b0, I_X_BASE} + 6'(gen_lane);
    assign w_x_plus_one = w_x_position + 6'd1;
    assign w_dy_product = w_x_plus_one * I_INV_ANGLE_ABS;
    assign w_dy_rounded = {1'b0, w_dy_product} + 22'd256;
    assign w_dy_integer = 13'(w_dy_rounded >> 9);

    always_comb begin
      w_top_index = {7'b0, w_x_position};
      w_left_index = {8'b0, I_Y};

      unique casez (I_PDPC_MODE)
        PARA_MODE_ANG_LT18: w_top_index = {7'b0, w_x_position} + w_dx_integer;
        PARA_MODE_ANG_GT50: w_left_index = {8'b0, I_Y} + w_dy_integer;
        default: begin
          w_top_index = {7'b0, w_x_position};
          w_left_index = {8'b0, I_Y};
        end
      endcase
    end

    assign O_REF_L[(gen_lane*PARA_PIXEL_WD) +: PARA_PIXEL_WD] = w_lane_ref_l;
    assign O_REF_T[(gen_lane*PARA_PIXEL_WD) +: PARA_PIXEL_WD] = w_lane_ref_t;

    always_comb begin
      w_top_addr = (w_top_index >= {6'b0, I_REF_WIDTH}) ? w_ref_width_last[5:0] : w_top_index[5:0];
      w_left_addr = (w_left_index >= {6'b0, I_REF_HEIGHT}) ? w_ref_height_last[5:0] : w_left_index[5:0];
      w_lane_ref_l = '0;
      w_lane_ref_t = '0;

      unique casez (I_PDPC_MODE)
        PARA_MODE_PLANAR_DC: begin
          w_lane_ref_l = w_left_ref[w_left_addr];
          w_lane_ref_t = w_top_ref[w_top_addr];
        end
        PARA_MODE_HOR_18: w_lane_ref_t = w_top_ref[w_top_addr];
        PARA_MODE_VER_50: w_lane_ref_l = w_left_ref[w_left_addr];
        PARA_MODE_ANG_LT18: w_lane_ref_t = w_top_ref[w_top_addr];
        PARA_MODE_ANG_GT50: w_lane_ref_l = w_left_ref[w_left_addr];
        default: begin
          w_lane_ref_l = '0;
          w_lane_ref_t = '0;
        end
      endcase
    end
  end
endgenerate

endmodule: INTRA_PDPC_REF_SELECT
