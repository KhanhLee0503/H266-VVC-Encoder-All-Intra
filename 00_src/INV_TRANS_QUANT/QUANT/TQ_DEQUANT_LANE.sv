//-----------------------------------------------------------
// Description: Four-stage elastic inverse quantization lane.
// Stage 0: input clipping according to VTM and parameter latch.
// Stage 1: signed 16x8 multiplication with DSP48E2 inference.
// Stage 2: signed shift with VTM rounding on right shift.
// Stage 3: clip to signed 16-bit transform dynamic range.
// Data registers have clock enables driven by a shared engine.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DEQUANT_LANE #(
  parameter PARA_DATA_WD = 16
)(
  input                                    I_CLK,
  input        [PARA_DATA_WD-1:0]          I_DATA,
  input        [7:0]                       I_INV_QUANT_SCALE,
  input        signed [5:0]                I_RIGHT_SHIFT,
  input        [4:0]                       I_INPUT_CLIP_BITS,
  input                                    I_STAGE0_ENABLE,
  input                                    I_STAGE1_ENABLE,
  input                                    I_STAGE2_ENABLE,
  input                                    I_STAGE3_ENABLE,
  output logic [PARA_DATA_WD-1:0]          O_DATA,
  output logic                             O_CLIPPED
);
  logic signed [16:0]                       w_input_extended;
  logic signed [16:0]                       w_input_limit;
  logic signed [16:0]                       w_input_minimum;
  logic signed [16:0]                       w_input_maximum;
  logic signed [15:0]                       w_clipped_input;

  logic signed [15:0]                       r_input_s0;
  logic signed [7:0]                        r_scale_s0;
  logic signed [5:0]                        r_shift_s0;
  (* use_dsp = "yes" *) logic signed [23:0] r_product_s1;
  logic signed [5:0]                        r_shift_s1;
  logic signed [39:0]                       w_product_extended;
  logic signed [39:0]                       w_round_offset;
  logic signed [39:0]                       w_shifted_s2;
  logic signed [39:0]                       r_shifted_s2;
  logic                                     w_output_clipped;
  logic [PARA_DATA_WD-1:0]                  w_output_data;

  // This lane implements the agreed signed 16-bit profile only.
  // The clip range is [-2^(bits-1), 2^(bits-1)-1].
  assign w_input_extended = $signed({I_DATA[PARA_DATA_WD-1], I_DATA});
  assign w_input_limit = 17'sd1 <<< (I_INPUT_CLIP_BITS - 5'd1);
  assign w_input_minimum = -w_input_limit;
  assign w_input_maximum = w_input_limit - 17'sd1;

  always_comb begin
    if (w_input_extended < w_input_minimum)
      w_clipped_input = w_input_minimum[15:0];
    else if (w_input_extended > w_input_maximum)
      w_clipped_input = w_input_maximum[15:0];
    else
      w_clipped_input = I_DATA;
  end

  always_ff @(posedge I_CLK) begin
    if (I_STAGE0_ENABLE) begin
      r_input_s0 <= w_clipped_input;
      r_scale_s0 <= $signed(I_INV_QUANT_SCALE);
      r_shift_s0 <= I_RIGHT_SHIFT;
    end
  end

  // Each lane contains one independent signed multiplier.
  // Xilinx Vivado should map the 16x8 operation into one DSP48E2.
  always_ff @(posedge I_CLK) begin
    if (I_STAGE1_ENABLE) begin
      r_product_s1 <= r_input_s0 * r_scale_s0;
      r_shift_s1 <= r_shift_s0;
    end
  end

  assign w_product_extended = {{16{r_product_s1[23]}}, r_product_s1};

  always_comb begin
    w_round_offset = 40'sd0;
    w_shifted_s2 = w_product_extended;
    if (r_shift_s1 > 6'sd0) begin
      w_round_offset = 40'sd1 <<< (r_shift_s1 - 6'sd1);
      w_shifted_s2 = (w_product_extended + w_round_offset) >>> r_shift_s1;
    end
    else if (r_shift_s1 < 6'sd0) begin
      w_shifted_s2 = w_product_extended <<< (-r_shift_s1);
    end
  end

  always_ff @(posedge I_CLK) begin
    if (I_STAGE2_ENABLE)
      r_shifted_s2 <= w_shifted_s2;
  end

  always_comb begin
    w_output_clipped = 1'b0;
    w_output_data = r_shifted_s2[PARA_DATA_WD-1:0];
    if (r_shifted_s2 > 40'sd32767) begin
      w_output_data = 16'h7fff;
      w_output_clipped = 1'b1;
    end
    else if (r_shifted_s2 < -40'sd32768) begin
      w_output_data = 16'h8000;
      w_output_clipped = 1'b1;
    end
  end

  always_ff @(posedge I_CLK) begin
    if (I_STAGE3_ENABLE) begin
      O_DATA <= w_output_data;
      O_CLIPPED <= w_output_clipped;
    end
  end
endmodule: TQ_DEQUANT_LANE
