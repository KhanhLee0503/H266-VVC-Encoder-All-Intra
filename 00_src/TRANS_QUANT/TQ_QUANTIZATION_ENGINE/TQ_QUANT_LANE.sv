//-----------------------------------------------------------
// Description: This four-stage elastic quantization lane
// computes the flat-scale VTM regular quantization formula.
// Its unsigned 16-by-15 multiplier is explicitly marked for
// Xilinx DSP mapping. A shared controller provides stage
// enables so that all four lanes advance in exact lockstep.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_QUANT_LANE #(
  parameter PARA_DATA_WD = 16
)(
  input                           I_CLK,
  input        [PARA_DATA_WD-1:0] I_DATA,
  input        [14:0]             I_QUANT_SCALE,
  input        [4:0]              I_QUANT_SHIFT,
  input        [31:0]             I_ROUND_OFFSET,
  input                           I_STAGE0_ENABLE,
  input                           I_STAGE1_ENABLE,
  input                           I_STAGE2_ENABLE,
  input                           I_STAGE3_ENABLE,
  output logic [PARA_DATA_WD-1:0] O_DATA,
  output logic                    O_CLIPPED
);
  logic                              r_negative_s0;
  logic                              r_negative_s1;
  logic                              r_negative_s2;
  logic [15:0]                       r_magnitude_s0;
  logic [14:0]                       r_scale_s0;
  logic [4:0]                        r_shift_s0;
  logic [4:0]                        r_shift_s1;
  logic [4:0]                        r_shift_s2;
  logic [31:0]                       r_offset_s0;
  logic [31:0]                       r_offset_s1;
  (* use_dsp = "yes" *) logic [30:0] r_product_s1;
  logic [39:0]                       r_rounded_s2;
  logic [39:0]                       w_magnitude_s3;
  logic [39:0]                       w_maximum_s3;
  logic                              w_clipped_s3;
  logic [PARA_DATA_WD-1:0]           w_saturated_s3;
  logic [PARA_DATA_WD-1:0]           w_magnitude_truncated_s3;

  // The input is signed; its magnitude is stored as unsigned to handle
  // the minimum negative input (-32768) without overflow.
  always_ff @(posedge I_CLK) begin
    if (I_STAGE0_ENABLE) begin
      r_negative_s0 <= I_DATA[PARA_DATA_WD-1];
      if (I_DATA[PARA_DATA_WD-1])
        r_magnitude_s0 <= 16'((~I_DATA) + 1'b1);
      else
        r_magnitude_s0 <= 16'(I_DATA);
      r_scale_s0 <= I_QUANT_SCALE;
      r_shift_s0 <= I_QUANT_SHIFT;
      r_offset_s0 <= I_ROUND_OFFSET;
    end
  end

  // The explicit register boundary encourages DSP48E2 multiplier
  // inference with a single unsigned 16x15 multiply per lane.
  always_ff @(posedge I_CLK) begin
    if (I_STAGE1_ENABLE) begin
      r_product_s1 <= r_magnitude_s0 * r_scale_s0;
      r_negative_s1 <= r_negative_s0;
      r_shift_s1 <= r_shift_s0;
      r_offset_s1 <= r_offset_s0;
    end
  end

  always_ff @(posedge I_CLK) begin
    if (I_STAGE2_ENABLE) begin
      r_rounded_s2 <= {9'b0, r_product_s1} + {8'b0, r_offset_s1};
      r_negative_s2 <= r_negative_s1;
      r_shift_s2 <= r_shift_s1;
    end
  end

  assign w_magnitude_s3 = r_rounded_s2 >> r_shift_s2;
  assign w_maximum_s3 = r_negative_s2 ? 40'd32768 : 40'd32767;
  assign w_clipped_s3 = w_magnitude_s3 > w_maximum_s3;
  assign w_magnitude_truncated_s3 = PARA_DATA_WD'(w_magnitude_s3);

  always_comb begin
    if (w_clipped_s3)
      w_saturated_s3 = r_negative_s2 ? PARA_DATA_WD'(16'h8000) : PARA_DATA_WD'(16'h7fff);
    else if (r_negative_s2)
      w_saturated_s3 = (~w_magnitude_truncated_s3) + 1'b1;
    else
      w_saturated_s3 = w_magnitude_truncated_s3;
  end

  always_ff @(posedge I_CLK) begin
    if (I_STAGE3_ENABLE) begin
      O_DATA <= w_saturated_s3;
      O_CLIPPED <= w_clipped_s3;
    end
  end
endmodule: TQ_QUANT_LANE
