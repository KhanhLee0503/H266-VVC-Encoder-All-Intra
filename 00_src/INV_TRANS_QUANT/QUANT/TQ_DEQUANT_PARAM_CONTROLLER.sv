//-----------------------------------------------------------
// Description: Generate regular inverse-quantization parameters
// for VVC with bit depth 10, maximum transform dynamic range
// 15, flat quantization scales and transform skip disabled.
// TU size codes 0/1/2/3 correspond to 4/8/16/32.
// QP_PRIME is the effective luma or mapped chroma QP.
// This module is combinational and synthesizable.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DEQUANT_PARAM_CONTROLLER (
  input        [6:0]        I_QP_PRIME,
  input        [1:0]        I_TU_WIDTH_SIZE,
  input        [1:0]        I_TU_HEIGHT_SIZE,
  output logic [3:0]        O_QP_PER,
  output logic [2:0]        O_QP_REM,
  output logic              O_SQRT_ADJUST,
  output logic [7:0]        O_INV_QUANT_SCALE,
  output logic signed [5:0] O_RIGHT_SHIFT,
  output logic [4:0]        O_INPUT_CLIP_BITS,
  output logic              O_QP_VALID
);
  logic [3:0]               w_log2_sum;
  logic [3:0]               w_transform_shift;
  logic signed [6:0]        w_right_shift_wide;
  logic signed [6:0]        w_input_bits_wide;

  // Constant quotient/remainder decoder for effective QP / 6.
  always_comb begin
    O_QP_PER = 4'd0;
    O_QP_REM = 3'd0;
    O_QP_VALID = I_QP_PRIME <= 7'd75;
    if (I_QP_PRIME >= 7'd72) begin
      O_QP_PER = 4'd12;
      O_QP_REM = I_QP_PRIME - 7'd72;
    end
    else if (I_QP_PRIME >= 7'd66) begin
      O_QP_PER = 4'd11;
      O_QP_REM = I_QP_PRIME - 7'd66;
    end
    else if (I_QP_PRIME >= 7'd60) begin
      O_QP_PER = 4'd10;
      O_QP_REM = I_QP_PRIME - 7'd60;
    end
    else if (I_QP_PRIME >= 7'd54) begin
      O_QP_PER = 4'd9;
      O_QP_REM = I_QP_PRIME - 7'd54;
    end
    else if (I_QP_PRIME >= 7'd48) begin
      O_QP_PER = 4'd8;
      O_QP_REM = I_QP_PRIME - 7'd48;
    end
    else if (I_QP_PRIME >= 7'd42) begin
      O_QP_PER = 4'd7;
      O_QP_REM = I_QP_PRIME - 7'd42;
    end
    else if (I_QP_PRIME >= 7'd36) begin
      O_QP_PER = 4'd6;
      O_QP_REM = I_QP_PRIME - 7'd36;
    end
    else if (I_QP_PRIME >= 7'd30) begin
      O_QP_PER = 4'd5;
      O_QP_REM = I_QP_PRIME - 7'd30;
    end
    else if (I_QP_PRIME >= 7'd24) begin
      O_QP_PER = 4'd4;
      O_QP_REM = I_QP_PRIME - 7'd24;
    end
    else if (I_QP_PRIME >= 7'd18) begin
      O_QP_PER = 4'd3;
      O_QP_REM = I_QP_PRIME - 7'd18;
    end
    else if (I_QP_PRIME >= 7'd12) begin
      O_QP_PER = 4'd2;
      O_QP_REM = I_QP_PRIME - 7'd12;
    end
    else if (I_QP_PRIME >= 7'd6) begin
      O_QP_PER = 4'd1;
      O_QP_REM = I_QP_PRIME - 7'd6;
    end
    else begin
      O_QP_REM = I_QP_PRIME[2:0];
    end
  end

  // VTM: transformShift = 15 - 10 - floor((log2W+log2H)/2)
  //                       - needSqrtAdjustment.
  // VTM: rightShift = IQUANT_SHIFT(6) - transformShift - QP_per.
  assign w_log2_sum = 4'd4 + {2'b00, I_TU_WIDTH_SIZE} + {2'b00, I_TU_HEIGHT_SIZE};
  assign O_SQRT_ADJUST = w_log2_sum[0];
  assign w_transform_shift = 4'd5 - (w_log2_sum >> 1) - {3'b000, O_SQRT_ADJUST};
  assign w_right_shift_wide = 7'sd6 - $signed({3'b000, w_transform_shift}) - $signed({3'b000, O_QP_PER});
  assign O_RIGHT_SHIFT = w_right_shift_wide[5:0];

  // VTM 32-bit Intermediate_Int input pre-clipping:
  // targetInputBitDepth = min(16, 32 + rightShift - (6+1)).
  // For rightShift >= -9 the signed 16-bit input needs no extra clip.
  assign w_input_bits_wide = 7'sd25 + w_right_shift_wide;
  always_comb begin
    O_INPUT_CLIP_BITS = 5'd16;
    if (w_right_shift_wide < -7'sd9)
      O_INPUT_CLIP_BITS = w_input_bits_wide[4:0];
  end

  always_comb begin
    O_INV_QUANT_SCALE = 8'd40;
    unique casez ({O_SQRT_ADJUST, O_QP_REM})
      4'b0000: O_INV_QUANT_SCALE = 8'd40;
      4'b0001: O_INV_QUANT_SCALE = 8'd45;
      4'b0010: O_INV_QUANT_SCALE = 8'd51;
      4'b0011: O_INV_QUANT_SCALE = 8'd57;
      4'b0100: O_INV_QUANT_SCALE = 8'd64;
      4'b0101: O_INV_QUANT_SCALE = 8'd72;
      4'b1000: O_INV_QUANT_SCALE = 8'd57;
      4'b1001: O_INV_QUANT_SCALE = 8'd64;
      4'b1010: O_INV_QUANT_SCALE = 8'd72;
      4'b1011: O_INV_QUANT_SCALE = 8'd80;
      4'b1100: O_INV_QUANT_SCALE = 8'd90;
      4'b1101: O_INV_QUANT_SCALE = 8'd102;
      default: O_INV_QUANT_SCALE = 8'd40;
    endcase
  end
endmodule: TQ_DEQUANT_PARAM_CONTROLLER
