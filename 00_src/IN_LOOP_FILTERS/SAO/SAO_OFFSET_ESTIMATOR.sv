//------------------------------------------------------------------------------
// Description: This module estimates one Sample Adaptive Offset value from an
//              unsigned fifteen-bit sample count and a signed twenty-six-bit
//              sum of original-minus-reconstructed differences. A bounded
//              binary shift-subtract divider determines five magnitude bits
//              in five sequential iterations. The rounded magnitude is
//              saturated to thirty-one, and BO or EO sign constraints are
//              applied according to the six-bit statistics address.
//
//              Addresses 0 through 31 represent BO bands. Addresses 32
//              through 47 represent four EO directions with four nonzero
//              categories per direction. Other addresses return zero.
//              EO categories 1 and 2 allow only nonnegative offsets, while
//              categories 3 and 4 allow only nonpositive offsets.
//
//              Rounding is to nearest with half ties away from zero. The
//              datapath processes one transaction at a time. The result
//              and its statistics index remain registered during stalls.
//              Synchronous clear cancels any in-flight transaction.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_OFFSET_ESTIMATOR (
  input                      I_CLK,
  input                      I_RST_N,
  input                      I_CLEAR,
  input        [14:0]        I_COUNT,
  input signed [25:0]        I_DIFF_SUM,
  input        [5:0]         I_STAT_INDEX,
  input                      I_INPUT_VALID,
  output logic               O_INPUT_READY,
  output logic signed [5:0] O_OFFSET,
  output logic [5:0]         O_STAT_INDEX,
  output logic               O_OUTPUT_VALID,
  input                      I_OUTPUT_READY
);

  localparam int PARA_COUNT_WD = 15;
  localparam int PARA_DIFF_SUM_WD = 26;
  localparam int PARA_MAGNITUDE_WD = 5;
  localparam int PARA_SHIFT_WD = 3;
  localparam int PARA_STAT_INDEX_WD = 6;

  typedef enum logic [1:0] {
    ST_IDLE,
    ST_DIVIDE,
    ST_FINALIZE,
    ST_RESULT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic w_input_fire;
  logic w_output_fire;
  logic [PARA_DIFF_SUM_WD-1:0] w_absolute_diff;
  logic w_input_is_eo;
  logic w_input_invalid_sign;
  logic w_input_bypass;
  logic [PARA_DIFF_SUM_WD-1:0] w_shifted_count;
  logic [PARA_DIFF_SUM_WD:0] w_subtract_extended;
  logic w_subtract_success;
  logic w_round_up;
  logic [PARA_MAGNITUDE_WD-1:0] w_rounded_magnitude;
  logic signed [PARA_MAGNITUDE_WD:0] w_signed_offset;

  logic [PARA_COUNT_WD-1:0] r_count;
  logic [PARA_DIFF_SUM_WD-1:0] r_remainder;
  logic [PARA_MAGNITUDE_WD-1:0] r_quotient;
  logic [PARA_SHIFT_WD-1:0] r_bit_index;
  logic [PARA_STAT_INDEX_WD-1:0] r_stat_index;
  logic r_negative;
  logic r_bypass;
  logic signed [PARA_MAGNITUDE_WD:0] r_output_offset;
  logic [PARA_STAT_INDEX_WD-1:0] r_output_stat_index;

  // The absolute value remains representable when DiffSum is -2^25.
  assign w_absolute_diff = I_DIFF_SUM[PARA_DIFF_SUM_WD-1] ?
                           (~I_DIFF_SUM + PARA_DIFF_SUM_WD'(1)) : I_DIFF_SUM;

  // BO uses addresses 0..31. Each EO direction uses four consecutive entries.
  // EO categories 1/2 require a positive sum; categories 3/4 require a negative sum.
  assign w_input_is_eo = (I_STAT_INDEX >= 6'd32) && (I_STAT_INDEX < 6'd48);
  assign w_input_invalid_sign = w_input_is_eo &&
    ((!I_STAT_INDEX[1] && I_DIFF_SUM[PARA_DIFF_SUM_WD-1]) ||
     ( I_STAT_INDEX[1] && !I_DIFF_SUM[PARA_DIFF_SUM_WD-1]));
  assign w_input_bypass = (I_COUNT == '0) || (I_DIFF_SUM == '0) ||
                          (I_STAT_INDEX >= 6'd48) || w_input_invalid_sign;

  // A zero-extended shift and an extended subtractor share compare and subtract.
  // The top subtraction bit is one exactly when the unsigned subtraction borrows.
  assign w_shifted_count =
    {{(PARA_DIFF_SUM_WD-PARA_COUNT_WD){1'b0}}, r_count} << r_bit_index;
  assign w_subtract_extended = {1'b0, r_remainder} - {1'b0, w_shifted_count};
  assign w_subtract_success = !w_subtract_extended[PARA_DIFF_SUM_WD];

  // A saturated quotient of 31 needs no further rounding or valid remainder.
  // The 27-bit left shift keeps the rounding comparison free of overflow.
  assign w_round_up =
    (({1'b0, r_remainder} << 1) >=
     {{(PARA_DIFF_SUM_WD+1-PARA_COUNT_WD){1'b0}}, r_count});
  assign w_rounded_magnitude = (r_quotient == 5'd31) ? 5'd31 :
    (r_quotient + {{(PARA_MAGNITUDE_WD-1){1'b0}}, w_round_up});
  assign w_signed_offset = r_negative ?
    -$signed({1'b0, w_rounded_magnitude}) :
     $signed({1'b0, w_rounded_magnitude});

  assign w_input_fire = I_INPUT_VALID && O_INPUT_READY;
  assign w_output_fire = O_OUTPUT_VALID && I_OUTPUT_READY;

  // Process 1 stores only the FSM state and gives clear priority over progress.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else if (I_CLEAR)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2 determines state transitions without modifying datapath outputs.
  always_comb begin
    w_next_state = r_current_state;

    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire) begin
          if (w_input_bypass)
            w_next_state = ST_FINALIZE;
          else
            w_next_state = ST_DIVIDE;
        end
      end

      ST_DIVIDE: begin
        if (r_bit_index == '0)
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

  // Process 3 drives the ready/valid controls from the current FSM state.
  always_comb begin
    O_INPUT_READY  = 1'b0;
    O_OUTPUT_VALID = 1'b0;

    unique casez (r_current_state)
      ST_IDLE: begin
        O_INPUT_READY = I_RST_N && !I_CLEAR;
      end

      ST_RESULT: begin
        O_OUTPUT_VALID = I_RST_N && !I_CLEAR;
      end

      ST_DIVIDE, ST_FINALIZE: begin
      end

      default: begin
      end
    endcase
  end

  // Only control storage requires asynchronous reset.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_bit_index <= '0;
      r_bypass    <= 1'b0;
    end
    else if (I_CLEAR) begin
      r_bit_index <= '0;
      r_bypass    <= 1'b0;
    end
    else if (w_input_fire) begin
      r_bit_index <= PARA_SHIFT_WD'(PARA_MAGNITUDE_WD-1);
      r_bypass    <= w_input_bypass;
    end
    else if (r_current_state == ST_DIVIDE) begin
      if (r_bit_index != '0)
        r_bit_index <= r_bit_index - PARA_SHIFT_WD'(1);
    end
  end

  // The datapath only changes when its contents belong to an accepted input.
  // Register values outside a valid result transaction have no meaning.
  always_ff @(posedge I_CLK) begin
    if (I_RST_N && !I_CLEAR) begin
      if (w_input_fire) begin
        r_count      <= I_COUNT;
        r_remainder  <= w_absolute_diff;
        r_quotient   <= '0;
        r_stat_index <= I_STAT_INDEX;
        r_negative   <= I_DIFF_SUM[PARA_DIFF_SUM_WD-1];
      end
      else if (r_current_state == ST_DIVIDE) begin
        if (w_subtract_success) begin
          r_remainder <= w_subtract_extended[PARA_DIFF_SUM_WD-1:0];
          r_quotient  <= r_quotient |
                         (PARA_MAGNITUDE_WD'(1) << r_bit_index);
        end
      end

      if (r_current_state == ST_FINALIZE) begin
        r_output_offset <= r_bypass ? '0 : w_signed_offset;
        r_output_stat_index <= r_stat_index;
      end
    end
  end

  assign O_OFFSET     = r_output_offset;
  assign O_STAT_INDEX = r_output_stat_index;

endmodule: SAO_OFFSET_ESTIMATOR
