//-----------------------------------------------------------
// Description: This combinational controller generates the
// regular forward-quantization parameters for the selected
// 10-bit VTM configuration. The caller supplies the effective
// QP after luma/chroma QP mapping. Only non-transform-skip,
// non-dependent, flat-scaling quantization is supported.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_QUANT_PARAM_CONTROLLER (
  input        [6:0]   I_QP_PRIME,
  input        [1:0]   I_TU_WIDTH_SIZE,
  input        [1:0]   I_TU_HEIGHT_SIZE,
  input                I_IS_IRAP,
  output logic [3:0]   O_QP_PER,
  output logic [2:0]   O_QP_REM,
  output logic         O_SQRT_ADJUST,
  output logic [14:0]  O_QUANT_SCALE,
  output logic [4:0]   O_QUANT_SHIFT,
  output logic [31:0]  O_ROUND_OFFSET,
  output logic         O_QP_VALID
);
  logic [3:0] w_log2_sum;
  logic [3:0] w_transform_shift;
  logic [5:0] w_qbits_wide;
  logic [7:0] w_round_factor;

  // Decode QP divided by six without implementing a general divider.
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
      O_QP_PER = 4'd0;
      O_QP_REM = I_QP_PRIME[2:0];
    end
  end

  // TU width and height codes 0,1,2,3 represent log2 sizes 2,3,4,5.
  assign w_log2_sum = 4'd4 + {2'b00, I_TU_WIDTH_SIZE} + {2'b00, I_TU_HEIGHT_SIZE};
  assign O_SQRT_ADJUST = w_log2_sum[0];
  assign w_transform_shift = 4'd5 - (w_log2_sum >> 1) - {3'b000, O_SQRT_ADJUST};
  assign w_qbits_wide = 6'd14 + {2'b00, O_QP_PER} + {2'b00, w_transform_shift};
  assign O_QUANT_SHIFT = w_qbits_wide[4:0];
  assign w_round_factor = I_IS_IRAP ? 8'd171 : 8'd85;
  assign O_ROUND_OFFSET = {24'b0, w_round_factor} << (O_QUANT_SHIFT - 5'd9);

  // The second scale table compensates for sqrt(2) on rectangular TUs
  // whose sum of transform-size logarithms is odd.
  always_comb begin
    O_QUANT_SCALE = 15'd26214;
    unique casez ({O_SQRT_ADJUST, O_QP_REM})
      4'b0000: O_QUANT_SCALE = 15'd26214;
      4'b0001: O_QUANT_SCALE = 15'd23302;
      4'b0010: O_QUANT_SCALE = 15'd20560;
      4'b0011: O_QUANT_SCALE = 15'd18396;
      4'b0100: O_QUANT_SCALE = 15'd16384;
      4'b0101: O_QUANT_SCALE = 15'd14564;
      4'b1000: O_QUANT_SCALE = 15'd18396;
      4'b1001: O_QUANT_SCALE = 15'd16384;
      4'b1010: O_QUANT_SCALE = 15'd14564;
      4'b1011: O_QUANT_SCALE = 15'd13107;
      4'b1100: O_QUANT_SCALE = 15'd11651;
      4'b1101: O_QUANT_SCALE = 15'd10280;
      default: O_QUANT_SCALE = 15'd26214;
    endcase
  end
endmodule: TQ_QUANT_PARAM_CONTROLLER
