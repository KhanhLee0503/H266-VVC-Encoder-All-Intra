//-----------------------------------------------------------
// Description: This module combines a forward DCT-II core and
// a forward DST-VII/DCT-VIII core into a unified one-dimensional
// transform datapath. An input demultiplexer selects exactly one
// physical core based on the first accepted beat of each vector.
// Transform mode and size are held until the final output beat
// is accepted. Only one vector may be in flight. Output data,
// valid, last and ready are multiplexed without extra buffering.
// The result is unnormalized, with four coefficients per beat.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_UNIFIED_1D_TRANSFORM_ENGINE #(
  parameter PARA_DATA_WD = 16,
  localparam PARA_RESULT_WD = PARA_DATA_WD + 12
)(
  input                                 I_CLK,
  input                                 I_RESETN,
  input        [1:0]                    I_TRANSFORM_MODE,
  input        [1:0]                    I_TRANSFORM_SIZE,
  input        [4*PARA_DATA_WD-1:0]     I_DATA,
  input                                 I_DATA_VALID,
  output logic                          I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]   O_DATA,
  output logic                          O_DATA_VALID,
  input                                 O_DATA_READY,
  output logic                          O_DATA_LAST
);
  localparam [1:0] PARA_MODE_DCT2 = 2'b00;
  localparam [1:0] PARA_MODE_DST7 = 2'b01;
  localparam [1:0] PARA_MODE_DCT8 = 2'b10;
  localparam [1:0] PARA_SIZE_4    = 2'b00;
  localparam [1:0] PARA_SIZE_8    = 2'b01;
  localparam [1:0] PARA_SIZE_16   = 2'b10;
  localparam [1:0] PARA_SIZE_32   = 2'b11;

  typedef enum logic [1:0] {
    ST_IDLE,
    ST_INPUT,
    ST_WAIT_OUTPUT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [1:0] r_transform_mode;
  logic [1:0] r_transform_size;
  logic [2:0] r_input_beat;
  logic [2:0] w_final_input_beat;
  logic [1:0] w_active_mode;
  logic [1:0] w_active_size;
  logic w_select_dct2;
  logic w_select_dst7_dct8;
  logic w_accept_input_enable;
  logic w_forward_output_enable;
  logic w_input_fire;
  logic w_output_fire;
  logic w_input_last_beat;
  logic w_dct2_input_valid;
  logic w_dct2_input_ready;
  logic w_dct2_output_valid;
  logic w_dct2_output_ready;
  logic w_dct2_output_last;
  logic [4*PARA_RESULT_WD-1:0] w_dct2_output_data;
  logic w_dst7_dct8_input_valid;
  logic w_dst7_dct8_input_ready;
  logic w_dst7_dct8_output_valid;
  logic w_dst7_dct8_output_ready;
  logic w_dst7_dct8_output_last;
  logic [4*PARA_RESULT_WD-1:0] w_dst7_dct8_output_data;

  // Use the live configuration for the first input beat only.
  assign w_active_mode = (r_current_state == ST_IDLE) ? I_TRANSFORM_MODE : r_transform_mode;
  assign w_active_size = (r_current_state == ST_IDLE) ? I_TRANSFORM_SIZE : r_transform_size;
  assign w_select_dct2 = (w_active_mode == PARA_MODE_DCT2);
  assign w_select_dst7_dct8 = (w_active_mode == PARA_MODE_DST7) || (w_active_mode == PARA_MODE_DCT8);
  assign w_input_fire = I_DATA_VALID && I_DATA_READY;
  assign w_output_fire = O_DATA_VALID && O_DATA_READY;

  always_comb begin
    w_final_input_beat = 3'd0;
    unique casez (r_transform_size)
      PARA_SIZE_4: w_final_input_beat = 3'd0;
      PARA_SIZE_8: w_final_input_beat = 3'd1;
      PARA_SIZE_16: w_final_input_beat = 3'd3;
      PARA_SIZE_32: w_final_input_beat = 3'd7;
      default: w_final_input_beat = 3'd0;
    endcase
  end
  assign w_input_last_beat = (r_input_beat == w_final_input_beat);

  // The DCT-II core follows conventional input/output READY naming.
  TQ_DCT2_CORE #(
    .PARA_DATA_WD  (PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_tq_dct2_core (
    .I_CLK           (I_CLK),
    .I_RESETN        (I_RESETN),
    .I_TRANSFORM_SIZE(w_active_size),
    .I_DATA          (I_DATA),
    .I_DATA_VALID    (w_dct2_input_valid),
    .I_DATA_READY    (w_dct2_input_ready),
    .O_DATA          (w_dct2_output_data),
    .O_DATA_VALID    (w_dct2_output_valid),
    .O_DATA_READY    (w_dct2_output_ready),
    .O_DATA_LAST     (w_dct2_output_last)
  );

  // The supplied DST7/DCT8 core uses opposite READY port names:
  // O_DATA_READY is its INPUT ready; I_DATA_READY is its OUTPUT ready.
  TQ_DST7_DCT8_CORE #(
    .PARA_DATA_WD(PARA_DATA_WD)
  ) u_tq_dst7_dct8_core (
    .I_CLK           (I_CLK),
    .I_RESETN        (I_RESETN),
    .I_TRANSFORM_SIZE(w_active_size),
    .I_TRANSFORM_MODE(w_active_mode == PARA_MODE_DCT8),
    .I_DATA_VALID    (w_dst7_dct8_input_valid),
    .O_DATA_READY    (w_dst7_dct8_input_ready),
    .I_DATA          (I_DATA),
    .O_DATA_VALID    (w_dst7_dct8_output_valid),
    .I_DATA_READY    (w_dst7_dct8_output_ready),
    .O_DATA          (w_dst7_dct8_output_data),
    .O_DATA_LAST     (w_dst7_dct8_output_last)
  );

  // Input demultiplexer: one core may observe VALID at a time.
  assign w_dct2_input_valid = I_DATA_VALID && w_accept_input_enable && w_select_dct2;
  assign w_dst7_dct8_input_valid = I_DATA_VALID && w_accept_input_enable && w_select_dst7_dct8;

  // Backpressure is delivered only to the selected output source.
  assign w_dct2_output_ready = w_forward_output_enable && w_select_dct2 && O_DATA_READY;
  assign w_dst7_dct8_output_ready = w_forward_output_enable && w_select_dst7_dct8 && O_DATA_READY;

  // Process 1: Register the current FSM state.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: Transition only on successful input/output handshakes.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire) begin
          if (I_TRANSFORM_SIZE == PARA_SIZE_4)
            w_next_state = ST_WAIT_OUTPUT;
          else
            w_next_state = ST_INPUT;
        end
      end
      ST_INPUT: begin
        if (w_input_fire && w_input_last_beat)
          w_next_state = ST_WAIT_OUTPUT;
      end
      ST_WAIT_OUTPUT: begin
        if (w_output_fire && O_DATA_LAST)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: Decode input/output enables and the output multiplexer.
  always_comb begin
    w_accept_input_enable = 1'b0;
    w_forward_output_enable = 1'b0;
    I_DATA_READY = 1'b0;
    O_DATA_VALID = 1'b0;
    O_DATA_LAST = 1'b0;
    O_DATA = '0;
    unique casez (r_current_state)
      ST_IDLE, ST_INPUT: begin
        w_accept_input_enable = I_RESETN;
        if (I_RESETN) begin
          if (w_select_dct2)
            I_DATA_READY = w_dct2_input_ready;
          else if (w_select_dst7_dct8)
            I_DATA_READY = w_dst7_dct8_input_ready;
        end
      end
      ST_WAIT_OUTPUT: begin
        w_forward_output_enable = I_RESETN;
        if (I_RESETN) begin
          if (w_select_dct2) begin
            O_DATA_VALID = w_dct2_output_valid;
            O_DATA_LAST = w_dct2_output_last;
            O_DATA = w_dct2_output_data;
          end
          else if (w_select_dst7_dct8) begin
            O_DATA_VALID = w_dst7_dct8_output_valid;
            O_DATA_LAST = w_dst7_dct8_output_last;
            O_DATA = w_dst7_dct8_output_data;
          end
        end
      end
      default: begin
        w_accept_input_enable = 1'b0;
        w_forward_output_enable = 1'b0;
      end
    endcase
  end

  // Hold mode and size constant until the final output is accepted.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_transform_mode <= PARA_MODE_DCT2;
      r_transform_size <= PARA_SIZE_4;
      r_input_beat <= 3'd0;
    end
    else begin
      if ((r_current_state == ST_IDLE) && w_input_fire) begin
        r_transform_mode <= I_TRANSFORM_MODE;
        r_transform_size <= I_TRANSFORM_SIZE;
        r_input_beat <= 3'd1;
      end
      else if ((r_current_state == ST_INPUT) && w_input_fire)
        r_input_beat <= r_input_beat + 3'd1;
    end
  end
endmodule: TQ_UNIFIED_1D_TRANSFORM_ENGINE
