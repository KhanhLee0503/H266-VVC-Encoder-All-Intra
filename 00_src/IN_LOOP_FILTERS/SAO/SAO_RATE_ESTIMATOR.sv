//------------------------------------------------------------------------------
// Description: This module estimates the syntax-bin count for one Sample
//              Adaptive Offset magnitude. BO indices 0 through 31 include
//              one sign bypass bin for each nonzero offset. EO indices 32
//              through 47 have no sign bin, because the EO category implies
//              the sign. Offset magnitude uses truncated unary bin count:
//              min(abs(offset) + 1, 31), for the ten-bit SAO configuration.
//              Index values 48 through 63 produce a zero rate and must not
//              be used by candidate evaluation logic.
//
//              The module does not estimate type, band-position, direction,
//              merge, or CABAC context-coded costs. A one-entry elastic
//              register transfers the signed thirty-two-bit distortion
//              estimate and candidate metadata with the rate. The unused
//              signed six-bit offset code minus thirty-two is clamped to
//              minus thirty-one to match SAO_DISTORTION_ESTIMATOR.
//              Synchronous clear flushes the pending result.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_RATE_ESTIMATOR (
  input                       I_CLK,
  input                       I_RST_N,
  input                       I_CLEAR,
  input signed [5:0]          I_OFFSET,
  input        [5:0]          I_STAT_INDEX,
  input signed [31:0]         I_DELTA_DISTORTION,
  input                       I_INPUT_VALID,
  output logic                O_INPUT_READY,
  output logic [5:0]          O_RATE_BITS,
  output logic signed [31:0]  O_DELTA_DISTORTION,
  output logic signed [5:0]   O_OFFSET,
  output logic [5:0]          O_STAT_INDEX,
  output logic                O_OUTPUT_VALID,
  input                       I_OUTPUT_READY
);

  localparam int PARA_OFFSET_WD = 6;
  localparam int PARA_MAGNITUDE_WD = 5;
  localparam int PARA_RATE_WD = 6;
  localparam int PARA_STAT_INDEX_WD = 6;
  localparam int PARA_DISTORTION_WD = 32;

  logic w_input_fire;
  logic w_output_slot_ready;
  logic signed [PARA_OFFSET_WD-1:0] w_clamped_offset;
  logic [PARA_MAGNITUDE_WD-1:0] w_offset_magnitude;
  logic [PARA_RATE_WD-1:0] w_unary_rate;
  logic w_bo_sign_bin;
  logic [PARA_RATE_WD-1:0] w_rate_bits;

  logic r_output_valid;
  logic [PARA_RATE_WD-1:0] r_rate_bits;
  logic signed [PARA_DISTORTION_WD-1:0] r_delta_distortion;
  logic signed [PARA_OFFSET_WD-1:0] r_offset;
  logic [PARA_STAT_INDEX_WD-1:0] r_stat_index;

  // Minus thirty-two is the one invalid signed six-bit SAO offset code.
  assign w_clamped_offset = (I_OFFSET == 6'sb100000) ?
    -6'sd31 : I_OFFSET;

  // All other signed six-bit values are in the supported offset range.
  assign w_offset_magnitude = w_clamped_offset[PARA_OFFSET_WD-1] ?
    (~w_clamped_offset[PARA_MAGNITUDE_WD-1:0] + 5'd1) :
     w_clamped_offset[PARA_MAGNITUDE_WD-1:0];

  // Truncated unary uses a terminating zero only below the maximum value.
  assign w_unary_rate = (w_offset_magnitude == 5'd31) ?
    6'd31 : ({1'b0, w_offset_magnitude} + 6'd1);

  // The BO sign is explicitly coded only when the offset is nonzero.
  assign w_bo_sign_bin = (I_STAT_INDEX < 6'd32) &&
                         (w_offset_magnitude != 5'd0);

  // EO categories infer their signs. Addresses 48 to 63 are invalid.
  assign w_rate_bits = (I_STAT_INDEX < 6'd48) ?
    (w_unary_rate + {5'd0, w_bo_sign_bin}) : 6'd0;

  // A vacant register or an accepted output leaves room for a new input.
  assign w_output_slot_ready = !r_output_valid || I_OUTPUT_READY;
  assign O_INPUT_READY = I_RST_N && !I_CLEAR && w_output_slot_ready;
  assign O_OUTPUT_VALID = I_RST_N && !I_CLEAR && r_output_valid;
  assign w_input_fire = I_INPUT_VALID && O_INPUT_READY;

  // Only valid is reset. Data registers are meaningful when valid is high.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_output_valid <= 1'b0;
    else if (I_CLEAR)
      r_output_valid <= 1'b0;
    else if (w_output_slot_ready)
      r_output_valid <= I_INPUT_VALID;
  end

  // Hold all payload fields during downstream backpressure.
  always_ff @(posedge I_CLK) begin
    if (I_RST_N && !I_CLEAR) begin
      if (w_input_fire) begin
        r_rate_bits        <= w_rate_bits;
        r_delta_distortion <= I_DELTA_DISTORTION;
        r_offset           <= w_clamped_offset;
        r_stat_index       <= I_STAT_INDEX;
      end
    end
  end

  assign O_RATE_BITS        = r_rate_bits;
  assign O_DELTA_DISTORTION = r_delta_distortion;
  assign O_OFFSET           = r_offset;
  assign O_STAT_INDEX       = r_stat_index;

endmodule: SAO_RATE_ESTIMATOR
