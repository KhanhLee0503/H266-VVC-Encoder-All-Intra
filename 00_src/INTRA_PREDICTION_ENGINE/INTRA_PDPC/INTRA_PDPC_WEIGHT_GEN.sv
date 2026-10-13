//-----------------------------------------------------------
// Description: This combinational module computes left and top PDPC weights for four
// consecutive horizontal pixel positions. It supports Planar/DC, axial modes 18/50, and
// the applicable non-axial angular modes. Weight and reference gating follow H.266 PDPC.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PDPC_WEIGHT_GEN #(
  parameter PARA_COORD_WD = 5
)
(
  input [2:0]                      I_PDPC_MODE,
  input [1:0]                      I_N_SCALE,
  input [PARA_COORD_WD-1:0]        I_X_BASE,
  input [PARA_COORD_WD-1:0]        I_Y,
  output logic [23:0]              O_WEIGHT_L,
  output logic [23:0]              O_WEIGHT_T
);

localparam PARA_MODE_PLANAR_DC = 3'd1;
localparam PARA_MODE_HOR_18    = 3'd2;
localparam PARA_MODE_VER_50    = 3'd3;
localparam PARA_MODE_ANG_LT18  = 3'd4;
localparam PARA_MODE_ANG_GT50  = 3'd5;

logic [7:0] w_y_twice;
logic [7:0] w_y_shift;
logic [5:0] w_top_weight;
logic [7:0] w_active_limit;

assign w_y_twice = {2'b00, I_Y, 1'b0};
assign w_y_shift = w_y_twice >> I_N_SCALE;
assign w_top_weight = (w_y_shift >= 8'd6) ? 6'd0 : (6'd32 >> w_y_shift);
assign w_active_limit = 8'd3 << I_N_SCALE;

genvar gen_lane;

generate
  for (gen_lane = 0; gen_lane < 4; gen_lane = gen_lane + 1) begin: GEN_WEIGHT_LANE
    logic [PARA_COORD_WD:0] w_lane_x;
    logic [7:0] w_x_shift;
    logic [5:0] w_left_weight;
    logic [5:0] w_selected_weight_l;
    logic [5:0] w_selected_weight_t;

    assign w_lane_x = {1'b0, I_X_BASE} + (PARA_COORD_WD+1)'(gen_lane);
    assign w_x_shift = ({2'b00, w_lane_x} << 1) >> I_N_SCALE;
    assign w_left_weight = (w_x_shift >= 8'd6) ? 6'd0 : (6'd32 >> w_x_shift);

    assign O_WEIGHT_L[(gen_lane*6) +: 6] = w_selected_weight_l;
    assign O_WEIGHT_T[(gen_lane*6) +: 6] = w_selected_weight_t;

    always_comb begin
      w_selected_weight_l = 6'd0;
      w_selected_weight_t = 6'd0;

      unique casez (I_PDPC_MODE)
        PARA_MODE_PLANAR_DC: begin
          w_selected_weight_l = w_left_weight;
          w_selected_weight_t = w_top_weight;
        end
        PARA_MODE_HOR_18: w_selected_weight_t = w_top_weight;
        PARA_MODE_VER_50: w_selected_weight_l = w_left_weight;
        PARA_MODE_ANG_LT18: begin
          if ({2'b00, I_Y} < w_active_limit)
            w_selected_weight_t = w_top_weight;
        end
        PARA_MODE_ANG_GT50: begin
          if ({2'b00, w_lane_x} < w_active_limit)
            w_selected_weight_l = w_left_weight;
        end
        default: begin
          w_selected_weight_l = 6'd0;
          w_selected_weight_t = 6'd0;
        end
      endcase
    end
  end
endgenerate

endmodule: INTRA_PDPC_WEIGHT_GEN
