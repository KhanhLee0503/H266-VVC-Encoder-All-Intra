//------------------------------------------------------------------------------
// Description: This module estimates the change in squared reconstruction
//              distortion produced by one Sample Adaptive Offset candidate.
//              It computes DeltaD = Count*Offset^2 - 2*DiffSum*Offset,
//              without sample-range clipping correction. A 32-entry square
//              lookup table and one time-multiplexed signed multiplier are
//              shared across the two products. The final signed subtraction
//              produces a 32-bit result. One transaction is processed at a
//              time using registered ready/valid output with stall holding.
//              An offset of zero bypasses both multiplications. Input Offset
//              is expected in [-31,31]; the unused signed code -32 is
//              clamped to -31. Synchronous clear cancels in-flight work.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_DISTORTION_ESTIMATOR (
  input                       I_CLK,
  input                       I_RST_N,
  input                       I_CLEAR,
  input        [14:0]         I_COUNT,
  input signed [25:0]         I_DIFF_SUM,
  input signed [5:0]          I_OFFSET,
  input        [5:0]          I_STAT_INDEX,
  input                       I_INPUT_VALID,
  output logic                O_INPUT_READY,
  output logic signed [31:0]  O_DELTA_DISTORTION,
  output logic signed [5:0]   O_OFFSET,
  output logic [5:0]          O_STAT_INDEX,
  output logic                O_OUTPUT_VALID,
  input                       I_OUTPUT_READY
);

  localparam int PARA_COUNT_WD = 15;
  localparam int PARA_DIFF_SUM_WD = 26;
  localparam int PARA_OFFSET_WD = 6;
  localparam int PARA_SQUARE_WD = 10;
  localparam int PARA_PRODUCT_COUNT_WD = 25;
  localparam int PARA_PRODUCT_DIFF_WD = 32;
  localparam int PARA_DSP_A_WD = 27;
  localparam int PARA_DSP_B_WD = 18;
  localparam int PARA_DSP_PRODUCT_WD = 45;
  localparam int PARA_DISTORTION_WD = 32;

  typedef enum logic [2:0] {
    ST_IDLE,
    ST_MUL_COUNT,
    ST_MUL_DIFF,
    ST_FINALIZE,
    ST_RESULT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic w_input_fire;
  logic w_output_fire;
  logic signed [PARA_OFFSET_WD-1:0] w_clamped_input_offset;
  logic [PARA_OFFSET_WD-2:0] w_offset_magnitude;
  logic [PARA_SQUARE_WD-1:0] w_offset_square;
  logic signed [PARA_DSP_A_WD-1:0] w_mul_operand_a;
  logic signed [PARA_DSP_B_WD-1:0] w_mul_operand_b;
  (* use_dsp = "yes" *) logic signed [PARA_DSP_PRODUCT_WD-1:0] w_mul_product;
  logic signed [PARA_DISTORTION_WD-1:0] w_count_term;
  logic signed [PARA_DISTORTION_WD-1:0] w_diff_term_doubled;
  logic signed [PARA_DISTORTION_WD-1:0] w_delta_distortion;

  logic [PARA_COUNT_WD-1:0] r_count;
  logic signed [PARA_DIFF_SUM_WD-1:0] r_diff_sum;
  logic signed [PARA_OFFSET_WD-1:0] r_offset;
  logic [5:0] r_stat_index;
  logic [PARA_PRODUCT_COUNT_WD-1:0] r_count_product;
  logic signed [PARA_PRODUCT_DIFF_WD-1:0] r_diff_product;
  logic signed [PARA_DISTORTION_WD-1:0] r_output_distortion;
  logic signed [PARA_OFFSET_WD-1:0] r_output_offset;
  logic [5:0] r_output_stat_index;

  // The only invalid 6-bit signed offset is -32; clamp it to -31.
  assign w_clamped_input_offset =
    (I_OFFSET == 6'sb100000) ? -6'sd31 : I_OFFSET;

  // The low five bits of a negative two's-complement value are negated to
  // recover its magnitude. The registered offset is always in [-31,31].
  assign w_offset_magnitude = r_offset[PARA_OFFSET_WD-1] ?
    (~r_offset[PARA_OFFSET_WD-2:0] + 5'd1) :
     r_offset[PARA_OFFSET_WD-2:0];

  // The square of a legal SAO offset lies between 0 and 961 inclusive.
  always_comb begin
    w_offset_square = '0;

    unique case (w_offset_magnitude)
      5'd0:  w_offset_square = 10'd0;
      5'd1:  w_offset_square = 10'd1;
      5'd2:  w_offset_square = 10'd4;
      5'd3:  w_offset_square = 10'd9;
      5'd4:  w_offset_square = 10'd16;
      5'd5:  w_offset_square = 10'd25;
      5'd6:  w_offset_square = 10'd36;
      5'd7:  w_offset_square = 10'd49;
      5'd8:  w_offset_square = 10'd64;
      5'd9:  w_offset_square = 10'd81;
      5'd10: w_offset_square = 10'd100;
      5'd11: w_offset_square = 10'd121;
      5'd12: w_offset_square = 10'd144;
      5'd13: w_offset_square = 10'd169;
      5'd14: w_offset_square = 10'd196;
      5'd15: w_offset_square = 10'd225;
      5'd16: w_offset_square = 10'd256;
      5'd17: w_offset_square = 10'd289;
      5'd18: w_offset_square = 10'd324;
      5'd19: w_offset_square = 10'd361;
      5'd20: w_offset_square = 10'd400;
      5'd21: w_offset_square = 10'd441;
      5'd22: w_offset_square = 10'd484;
      5'd23: w_offset_square = 10'd529;
      5'd24: w_offset_square = 10'd576;
      5'd25: w_offset_square = 10'd625;
      5'd26: w_offset_square = 10'd676;
      5'd27: w_offset_square = 10'd729;
      5'd28: w_offset_square = 10'd784;
      5'd29: w_offset_square = 10'd841;
      5'd30: w_offset_square = 10'd900;
      5'd31: w_offset_square = 10'd961;
      default: w_offset_square = '0;
    endcase
  end

  // Both operands are explicitly extended to the signed DSP48E2 multiplier
  // widths. Only one multiply operator exists in this module.
  always_comb begin
    w_mul_operand_a = '0;
    w_mul_operand_b = '0;

    unique case (r_current_state)
      ST_MUL_COUNT: begin
        w_mul_operand_a = $signed({12'd0, r_count});
        w_mul_operand_b = $signed({8'd0, w_offset_square});
      end

      ST_MUL_DIFF: begin
        w_mul_operand_a = $signed({r_diff_sum[PARA_DIFF_SUM_WD-1], r_diff_sum});
        w_mul_operand_b = $signed({{(PARA_DSP_B_WD-PARA_OFFSET_WD){r_offset[PARA_OFFSET_WD-1]}}, r_offset});
      end

      default: begin
      end
    endcase
  end

  assign w_mul_product = w_mul_operand_a * w_mul_operand_b;

  // Both products are mathematically bounded to the captured slices.
  // The doubled difference product and final subtraction fit signed 32-bit.
  assign w_count_term = $signed({7'd0, r_count_product});
  assign w_diff_term_doubled = r_diff_product <<< 1;
  assign w_delta_distortion = w_count_term - w_diff_term_doubled;

  assign w_input_fire = I_INPUT_VALID && O_INPUT_READY;
  assign w_output_fire = O_OUTPUT_VALID && I_OUTPUT_READY;

  // Process 1 maintains the FSM state with clear/reset priority.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else if (I_CLEAR)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2 advances each accepted transaction through the folded multiply.
  always_comb begin
    w_next_state = r_current_state;

    unique case (r_current_state)
      ST_IDLE: begin
        if (w_input_fire) begin
          if (w_clamped_input_offset == '0)
            w_next_state = ST_FINALIZE;
          else
            w_next_state = ST_MUL_COUNT;
        end
      end

      ST_MUL_COUNT: begin
        w_next_state = ST_MUL_DIFF;
      end

      ST_MUL_DIFF: begin
        w_next_state = ST_FINALIZE;
      end

      ST_FINALIZE: begin
        w_next_state = ST_RESULT;
      end

      ST_RESULT: begin
        if (w_output_fire)
          w_next_state = ST_IDLE;
      end

      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // Process 3 derives interface handshakes from the FSM state.
  always_comb begin
    O_INPUT_READY  = 1'b0;
    O_OUTPUT_VALID = 1'b0;

    unique case (r_current_state)
      ST_IDLE: begin
        O_INPUT_READY = I_RST_N && !I_CLEAR;
      end

      ST_RESULT: begin
        O_OUTPUT_VALID = I_RST_N && !I_CLEAR;
      end

      ST_MUL_COUNT, ST_MUL_DIFF, ST_FINALIZE: begin
      end

      default: begin
      end
    endcase
  end

  // All payload registers are qualified by valid-state control and do not
  // require resets. Holding the registers during a stall keeps output stable.
  always_ff @(posedge I_CLK) begin
    if (I_RST_N && !I_CLEAR) begin
      if (w_input_fire) begin
        r_count      <= I_COUNT;
        r_diff_sum   <= I_DIFF_SUM;
        r_offset     <= w_clamped_input_offset;
        r_stat_index <= I_STAT_INDEX;
      end

      if (r_current_state == ST_MUL_COUNT)
        r_count_product <= w_mul_product[PARA_PRODUCT_COUNT_WD-1:0];

      if (r_current_state == ST_MUL_DIFF)
        r_diff_product <= w_mul_product[PARA_PRODUCT_DIFF_WD-1:0];

      if (r_current_state == ST_FINALIZE) begin
        r_output_distortion <= (r_offset == '0) ? '0 : w_delta_distortion;
        r_output_offset     <= r_offset;
        r_output_stat_index <= r_stat_index;
      end
    end
  end

  assign O_DELTA_DISTORTION = r_output_distortion;
  assign O_OFFSET           = r_output_offset;
  assign O_STAT_INDEX       = r_output_stat_index;

endmodule: SAO_DISTORTION_ESTIMATOR
