//-----------------------------------------------------------
// Description: This module performs unsigned integer division
// by repeatedly subtracting the divisor from the remaining
// dividend. One subtraction trial is performed per clock cycle.
// The quotient is incremented only for successful subtractions.
// An unsuccessful trial ends the operation without changing the
// remainder. The input and result interfaces use ready/valid
// handshakes, and division by zero is reported explicitly.
//-----------------------------------------------------------
`timescale 1ns/1ps

module DIVIDER #(
  parameter int unsigned PARA_DATA_WD = 32
)(
  input                              I_CLK,
  input                              I_RESETN,

  input                              I_INPUT_VALID,
  output logic                       O_INPUT_READY,
  input        [PARA_DATA_WD-1:0]    I_DIVIDEND,
  input        [PARA_DATA_WD-1:0]    I_DIVISOR,

  output logic                       O_RESULT_VALID,
  input                              I_RESULT_READY,
  output logic [PARA_DATA_WD-1:0]    O_QUOTIENT,
  output logic [PARA_DATA_WD-1:0]    O_REMAINDER,
  output logic                       O_DIVIDE_BY_ZERO,
  output logic                       O_BUSY
);

  typedef enum logic [1:0] {
    ST_IDLE,
    ST_RUN,
    ST_RESULT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [PARA_DATA_WD-1:0] r_remainder;
  logic [PARA_DATA_WD-1:0] r_divisor;
  logic [PARA_DATA_WD-1:0] r_quotient;
  logic                    r_divide_by_zero;

  logic [PARA_DATA_WD:0]   w_subtract_extended;
  logic                    w_subtract_negative;
  logic                    w_input_accept;

  // The extra subtraction bit detects unsigned borrow correctly.
  assign w_subtract_extended = {1'b0, r_remainder} - {1'b0, r_divisor};
  assign w_subtract_negative = w_subtract_extended[PARA_DATA_WD];
  assign w_input_accept      = I_INPUT_VALID && O_INPUT_READY;

  // Process 1: Store only the current FSM state.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: Determine the next FSM state.
  always_comb begin
    w_next_state = r_current_state;

    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_accept) begin
          if (I_DIVISOR == '0)
            w_next_state = ST_RESULT;
          else
            w_next_state = ST_RUN;
        end
      end

      ST_RUN: begin
        if (w_subtract_negative)
          w_next_state = ST_RESULT;
      end

      ST_RESULT: begin
        if (I_RESULT_READY)
          w_next_state = ST_IDLE;
      end

      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // Process 3: Decode FSM outputs with safe default values.
  always_comb begin
    O_INPUT_READY  = 1'b0;
    O_RESULT_VALID = 1'b0;
    O_BUSY         = 1'b0;

    unique casez (r_current_state)
      ST_IDLE: begin
        O_INPUT_READY = I_RESETN;
      end

      ST_RUN: begin
        O_BUSY = 1'b1;
      end

      ST_RESULT: begin
        O_RESULT_VALID = 1'b1;
      end

      default: begin
        O_INPUT_READY  = 1'b0;
        O_RESULT_VALID = 1'b0;
        O_BUSY         = 1'b0;
      end
    endcase
  end

  // The datapath has no reset because its contents are only
  // meaningful while the result-valid signal is asserted.
  always_ff @(posedge I_CLK) begin
    if (w_input_accept) begin
      r_remainder <= I_DIVIDEND;
      r_divisor   <= I_DIVISOR;
      r_quotient  <= '0;
    end
    else if ((r_current_state == ST_RUN) && !w_subtract_negative) begin
      r_remainder <= w_subtract_extended[PARA_DATA_WD-1:0];
      r_quotient  <= r_quotient + PARA_DATA_WD'(1);
    end
  end

  // The division-by-zero status is cleared for each new request.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN)
      r_divide_by_zero <= 1'b0;
    else if (w_input_accept)
      r_divide_by_zero <= (I_DIVISOR == '0);
  end

  // The result is held until the consumer accepts it.
  assign O_QUOTIENT       = r_quotient;
  assign O_REMAINDER      = r_remainder;
  assign O_DIVIDE_BY_ZERO = r_divide_by_zero;

endmodule: DIVIDER
