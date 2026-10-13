//-----------------------------------------------------------
// Description: This module decodes the mapped intra mode and transform-unit dimensions to
// select normative VVC PDPC behavior and compute nScale. The supported baseline has MRL
// disabled, BDPCM disabled, and transform dimensions of 4, 8, 16, or 32 samples.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PDPC_CONTROL
(
  input [2:0]                 I_WIDTH_CODE,
  input [2:0]                 I_HEIGHT_CODE,
  input signed [7:0]          I_MAPPED_MODE,
  input [14:0]                I_INV_ANGLE_ABS,
  output logic                O_PDPC_ENABLE,
  output logic [2:0]          O_PDPC_MODE,
  output logic [1:0]          O_N_SCALE
);

localparam PARA_MODE_BYPASS    = 3'd0;
localparam PARA_MODE_PLANAR_DC = 3'd1;
localparam PARA_MODE_HOR_18    = 3'd2;
localparam PARA_MODE_VER_50    = 3'd3;
localparam PARA_MODE_ANG_LT18  = 3'd4;
localparam PARA_MODE_ANG_GT50  = 3'd5;

logic [16:0] w_three_inv_minus_two;
logic [4:0] w_inv_log2;
logic [3:0] w_sum_code;
logic [1:0] w_regular_nscale;
logic signed [6:0] w_dimension_log2;
logic signed [6:0] w_inv_log2_signed;
logic signed [6:0] w_angular_nscale;
logic w_dimension_valid;
integer bit_index;

assign w_dimension_valid = (I_WIDTH_CODE >= 3'd2) && (I_WIDTH_CODE <= 3'd5) && (I_HEIGHT_CODE >= 3'd2) && (I_HEIGHT_CODE <= 3'd5);
assign w_three_inv_minus_two = ({2'b00, I_INV_ANGLE_ABS} * 17'd3) - 17'd2;
assign w_sum_code = {1'b0, I_WIDTH_CODE} + {1'b0, I_HEIGHT_CODE};
assign w_regular_nscale = (w_sum_code - 4'd2) >> 2;
assign w_dimension_log2 = (I_MAPPED_MODE < 8'sd18) ? $signed({4'b0, I_WIDTH_CODE}) : $signed({4'b0, I_HEIGHT_CODE});
assign w_inv_log2_signed = $signed({2'b00, w_inv_log2});
assign w_angular_nscale = w_dimension_log2 - w_inv_log2_signed + 7'sd8;

always_comb begin
  w_inv_log2 = '0;

  for (bit_index = 0; bit_index < 17; bit_index = bit_index + 1) begin
    if (w_three_inv_minus_two[bit_index])
      w_inv_log2 = 5'(bit_index);
  end
end

always_comb begin
  O_PDPC_ENABLE = 1'b0;
  O_PDPC_MODE = PARA_MODE_BYPASS;
  O_N_SCALE = 2'd0;

  if (w_dimension_valid) begin
    if ((I_MAPPED_MODE == 8'sd0) || (I_MAPPED_MODE == 8'sd1)) begin
      O_PDPC_ENABLE = 1'b1;
      O_PDPC_MODE = PARA_MODE_PLANAR_DC;
      O_N_SCALE = w_regular_nscale;
    end
    else if (I_MAPPED_MODE == 8'sd18) begin
      O_PDPC_ENABLE = 1'b1;
      O_PDPC_MODE = PARA_MODE_HOR_18;
      O_N_SCALE = w_regular_nscale;
    end
    else if (I_MAPPED_MODE == 8'sd50) begin
      O_PDPC_ENABLE = 1'b1;
      O_PDPC_MODE = PARA_MODE_VER_50;
      O_N_SCALE = w_regular_nscale;
    end
    else if (((I_MAPPED_MODE >= -8'sd14) && (I_MAPPED_MODE <= -8'sd1)) || ((I_MAPPED_MODE >= 8'sd2) && (I_MAPPED_MODE < 8'sd18))) begin
      if ((I_INV_ANGLE_ABS != 15'd0) && (w_angular_nscale >= 0)) begin
        O_PDPC_ENABLE = 1'b1;
        O_PDPC_MODE = PARA_MODE_ANG_LT18;
        O_N_SCALE = (w_angular_nscale > 7'sd2) ? 2'd2 : 2'(w_angular_nscale);
      end
    end
    else if ((I_MAPPED_MODE > 8'sd50) && (I_MAPPED_MODE <= 8'sd80)) begin
      if ((I_INV_ANGLE_ABS != 15'd0) && (w_angular_nscale >= 0)) begin
        O_PDPC_ENABLE = 1'b1;
        O_PDPC_MODE = PARA_MODE_ANG_GT50;
        O_N_SCALE = (w_angular_nscale > 7'sd2) ? 2'd2 : 2'(w_angular_nscale);
      end
    end
  end
end

endmodule: INTRA_PDPC_CONTROL
