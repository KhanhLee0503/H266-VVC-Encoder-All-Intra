//-----------------------------------------------------------
// Description: This module combines the four even and four
// odd terms of an inverse eight-point DCT-II vector using
// the inverse partial-butterfly reconstruction. Independent
// elastic input buffers pair even and odd vectors in order.
// A registered output provides eight signed raw samples.
// No rounding, clipping, coefficient ROM or DSP is used.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_COMBINE_8 #(
  parameter PARA_RESULT_WD = 28
)(
  input                                I_CLK,
  input                                I_RESETN,
  input                                I_EVEN_VALID,
  output logic                         O_EVEN_READY,
  input        [4*PARA_RESULT_WD-1:0]  I_EVEN_DATA,
  input                                I_ODD_VALID,
  output logic                         O_ODD_READY,
  input        [4*PARA_RESULT_WD-1:0]  I_ODD_DATA,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [8*PARA_RESULT_WD-1:0]  O_DATA
);
  logic                                r_even_valid;
  logic                                r_odd_valid;
  logic                                r_output_valid;
  logic                                w_output_ready;
  logic                                w_combine_enable;
  logic signed [PARA_RESULT_WD-1:0]    r_even [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_odd [0:3];
  logic signed [PARA_RESULT_WD-1:0]    r_output [0:7];

  // One holding slot per input stream; pair corresponding
  // vectors in FIFO order even when their latencies differ.
  assign w_output_ready = !r_output_valid || I_DATA_READY;
  assign w_combine_enable = r_even_valid && r_odd_valid && w_output_ready;
  assign O_EVEN_READY = !r_even_valid || w_combine_enable;
  assign O_ODD_READY = !r_odd_valid || w_combine_enable;
  assign O_DATA_VALID = r_output_valid;

  // Lane zero occupies the least-significant output bits.
  for (genvar lane_idx = 0; lane_idx < 8; lane_idx++) begin: gen_output_lanes
    assign O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_output[lane_idx];
  end

  // Only the payload-valid state requires reset.
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

  // Accepted input transactions cannot be overwritten by a
  // stalled branch. No input lane can advance independently.
  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_input_lanes
    always_ff @(posedge I_CLK) begin
      if (O_EVEN_READY && I_EVEN_VALID)
        r_even[lane_idx] <= $signed(I_EVEN_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]);
      if (O_ODD_READY && I_ODD_VALID)
        r_odd[lane_idx] <= $signed(I_ODD_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]);
    end
  end

  // Raw inverse butterfly:
  // X[k]   = E[k] + O[k], k = 0..3
  // X[7-k] = E[k] - O[k], k = 0..3
  // The registered output remains stable during backpressure.
  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_combine_lanes
    always_ff @(posedge I_CLK) begin
      if (w_combine_enable) begin
        r_output[lane_idx] <= r_even[lane_idx] + r_odd[lane_idx];
        r_output[7-lane_idx] <= r_even[lane_idx] - r_odd[lane_idx];
      end
    end
  end
endmodule: TQ_IDCT2_COMBINE_8
