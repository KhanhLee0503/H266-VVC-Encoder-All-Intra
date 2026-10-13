//-----------------------------------------------------------
// Description: Combine the eight even and eight odd raw terms
// of inverse DCT-II 16-point with X[k] = E[k] + O[k] and
// X[15-k] = E[k] - O[k] (k = 0..7). Each branch has an
// independent one-entry elastic holding buffer, matching
// transactions by order; one registered output buffer.
// No scaling, rounding, clipping, ROM, RAM or DSP.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_COMBINE_16 #(
  parameter PARA_RESULT_WD = 28
)(
  input                                   I_CLK,
  input                                   I_RESETN,
  input                                   I_EVEN_VALID,
  output logic                            O_EVEN_READY,
  input        [8*PARA_RESULT_WD-1:0]     I_EVEN_DATA,
  input                                   I_ODD_VALID,
  output logic                            O_ODD_READY,
  input        [8*PARA_RESULT_WD-1:0]     I_ODD_DATA,
  output logic                            O_DATA_VALID,
  input                                   I_DATA_READY,
  output logic [16*PARA_RESULT_WD-1:0]    O_DATA
);
  logic r_even_valid;
  logic r_odd_valid;
  logic r_output_valid;
  logic w_output_ready;
  logic w_combine_enable;
  logic signed [PARA_RESULT_WD-1:0] r_even [0:7];
  logic signed [PARA_RESULT_WD-1:0] r_odd [0:7];
  logic signed [PARA_RESULT_WD-1:0] r_output [0:15];

  assign w_output_ready = !r_output_valid || I_DATA_READY;
  assign w_combine_enable = r_even_valid && r_odd_valid && w_output_ready;
  assign O_EVEN_READY = !r_even_valid || w_combine_enable;
  assign O_ODD_READY = !r_odd_valid || w_combine_enable;
  assign O_DATA_VALID = r_output_valid;

  for (genvar output_idx = 0; output_idx < 16; output_idx++) begin: gen_output
    assign O_DATA[output_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_output[output_idx];
  end

  // Only the payload-valid flags are reset.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_even_valid <= 1'b0;
      r_odd_valid <= 1'b0;
      r_output_valid <= 1'b0;
    end
    else begin
      if (O_EVEN_READY)
        r_even_valid <= I_EVEN_VALID;
      if (O_ODD_READY)
        r_odd_valid <= I_ODD_VALID;
      if (w_output_ready)
        r_output_valid <= r_even_valid && r_odd_valid;
    end
  end

  // Capture each branch only on accepted handshake.
  for (genvar lane_idx = 0; lane_idx < 8; lane_idx++) begin: gen_input
    always_ff @(posedge I_CLK) begin
      if (O_EVEN_READY && I_EVEN_VALID)
        r_even[lane_idx] <= $signed(I_EVEN_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]);
      if (O_ODD_READY && I_ODD_VALID)
        r_odd[lane_idx] <= $signed(I_ODD_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]);
    end
  end

  // A complete aligned Even/Odd pair generates sixteen raw samples.
  for (genvar lane_idx = 0; lane_idx < 8; lane_idx++) begin: gen_combine
    always_ff @(posedge I_CLK) begin
      if (w_combine_enable) begin
        r_output[lane_idx] <= r_even[lane_idx] + r_odd[lane_idx];
        r_output[15-lane_idx] <= r_even[lane_idx] - r_odd[lane_idx];
      end
    end
  end
endmodule: TQ_IDCT2_COMBINE_16
