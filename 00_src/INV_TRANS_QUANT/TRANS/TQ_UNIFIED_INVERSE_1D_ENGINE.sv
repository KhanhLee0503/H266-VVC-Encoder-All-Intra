//-----------------------------------------------------------
// Description: This module dispatches one complete inverse 1-D
// vector to either the inverse DCT-II core or the shared inverse
// DST-VII / DCT-VIII core. Supported sizes are 4, 8, 16 and 32.
// Four signed coefficients are transferred on each accepted beat.
// A transform type and size are latched at the first handshake
// and remain fixed until the final output beat is accepted.
// Both child cores retain ownership of their own vector storage.
// The wrapper adds no coefficient or output memory and performs
// no shift, rounding, clipping or arithmetic transformation.
// Only one vector can be in flight. Invalid type 2'b11 is held
// not-ready and cannot be dispatched to either child core.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_UNIFIED_INVERSE_1D_ENGINE #(
  parameter PARA_DATA_WD   = 16,
  parameter PARA_RESULT_WD = 28
)(
  input                                   I_CLK,
  input                                   I_RESETN,
  input        [1:0]                      I_TRANSFORM_TYPE,
  input        [1:0]                      I_TRANSFORM_SIZE,
  input        [4*PARA_DATA_WD-1:0]       I_DATA,
  input                                   I_DATA_VALID,
  output logic                            I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]     O_DATA,
  output logic                            O_DATA_VALID,
  input                                   O_DATA_READY,
  output logic                            O_DATA_LAST
);
  localparam [1:0] PARA_TYPE_IDCT2 = 2'b00;
  localparam [1:0] PARA_TYPE_IDST7 = 2'b01;
  localparam [1:0] PARA_TYPE_IDCT8 = 2'b10;

  typedef enum logic [1:0] {
    ST_IDLE,
    ST_LOAD,
    ST_WAIT_OUTPUT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [1:0] r_transform_type;
  logic [1:0] r_transform_size;
  logic [3:0] r_input_beat_count;
  logic [1:0] w_active_type;
  logic [1:0] w_active_size;
  logic [3:0] w_expected_beats;
  logic w_type_legal;
  logic w_input_enable;
  logic w_input_fire;
  logic w_output_fire;
  logic w_dct2_input_valid;
  logic w_dct2_input_ready;
  logic w_dct2_output_valid;
  logic w_dct2_output_ready;
  logic w_dct2_output_last;
  logic [4*PARA_RESULT_WD-1:0] w_dct2_output_data;
  logic w_mts_input_valid;
  logic w_mts_input_ready;
  logic w_mts_output_valid;
  logic w_mts_output_ready;
  logic w_mts_output_last;
  logic w_mts_mode;
  logic [4*PARA_RESULT_WD-1:0] w_mts_output_data;

  // Capture the configuration only on the first successful input beat.
  assign w_active_type = (r_current_state == ST_IDLE) ? I_TRANSFORM_TYPE : r_transform_type;
  assign w_active_size = (r_current_state == ST_IDLE) ? I_TRANSFORM_SIZE : r_transform_size;
  assign w_expected_beats = 4'd1 << w_active_size;
  assign w_type_legal = (w_active_type == PARA_TYPE_IDCT2) ||
                        (w_active_type == PARA_TYPE_IDST7) ||
                        (w_active_type == PARA_TYPE_IDCT8);
  assign w_input_enable = ((r_current_state == ST_IDLE) ||
                           (r_current_state == ST_LOAD)) &&
                          (r_input_beat_count < w_expected_beats) && w_type_legal;
  assign w_input_fire = I_DATA_VALID && I_DATA_READY;
  assign w_output_fire = O_DATA_VALID && O_DATA_READY;
  assign w_mts_mode = (w_active_type == PARA_TYPE_IDCT8);

  // Route every input handshake to exactly one selected child.
  assign w_dct2_input_valid = I_DATA_VALID && w_input_enable &&
                              (w_active_type == PARA_TYPE_IDCT2);
  assign w_mts_input_valid = I_DATA_VALID && w_input_enable &&
                             ((w_active_type == PARA_TYPE_IDST7) ||
                              (w_active_type == PARA_TYPE_IDCT8));

  // Decode input readiness from the selected child; reserved types stall.
  always_comb begin
    I_DATA_READY = 1'b0;
    if (w_input_enable) begin
      unique casez (w_active_type)
        PARA_TYPE_IDCT2: I_DATA_READY = w_dct2_input_ready;
        PARA_TYPE_IDST7,
        PARA_TYPE_IDCT8: I_DATA_READY = w_mts_input_ready;
        default: I_DATA_READY = 1'b0;
      endcase
    end
  end

  // Forward output only after input reception is complete. Each child
  // owns its output registers and must hold VALID/DATA/LAST on stalls.
  always_comb begin
    O_DATA = '0;
    O_DATA_VALID = 1'b0;
    O_DATA_LAST = 1'b0;
    w_dct2_output_ready = 1'b0;
    w_mts_output_ready = 1'b0;

    if (r_current_state == ST_WAIT_OUTPUT) begin
      unique casez (r_transform_type)
        PARA_TYPE_IDCT2: begin
          O_DATA = w_dct2_output_data;
          O_DATA_VALID = w_dct2_output_valid;
          O_DATA_LAST = w_dct2_output_valid && w_dct2_output_last;
          w_dct2_output_ready = O_DATA_READY;
        end
        PARA_TYPE_IDST7,
        PARA_TYPE_IDCT8: begin
          O_DATA = w_mts_output_data;
          O_DATA_VALID = w_mts_output_valid;
          O_DATA_LAST = w_mts_output_valid && w_mts_output_last;
          w_mts_output_ready = O_DATA_READY;
        end
        default: begin
          O_DATA = '0;
        end
      endcase
    end
  end

  // Three-process FSM: store the state separately from transitions.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire) begin
          if (w_expected_beats == 4'd1)
            w_next_state = ST_WAIT_OUTPUT;
          else
            w_next_state = ST_LOAD;
        end
      end
      ST_LOAD: begin
        if (w_input_fire && ((r_input_beat_count + 4'd1) == w_expected_beats))
          w_next_state = ST_WAIT_OUTPUT;
      end
      ST_WAIT_OUTPUT: begin
        if (w_output_fire && O_DATA_LAST)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // No datapath payload registers are duplicated in this wrapper.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_transform_type <= PARA_TYPE_IDCT2;
      r_transform_size <= 2'b00;
      r_input_beat_count <= '0;
    end
    else begin
      if ((r_current_state == ST_IDLE) && w_input_fire) begin
        r_transform_type <= I_TRANSFORM_TYPE;
        r_transform_size <= I_TRANSFORM_SIZE;
        r_input_beat_count <= 4'd1;
      end
      else if ((r_current_state == ST_LOAD) && w_input_fire)
        r_input_beat_count <= r_input_beat_count + 4'd1;
      else if ((r_current_state == ST_WAIT_OUTPUT) && w_output_fire && O_DATA_LAST)
        r_input_beat_count <= '0;
    end
  end

  // Inverse DCT2 follows the standard READY port naming.
  TQ_IDCT2_CORE #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idct2_core (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_TRANSFORM_SIZE(w_active_size),
    .I_DATA(I_DATA),
    .I_DATA_VALID(w_dct2_input_valid),
    .I_DATA_READY(w_dct2_input_ready),
    .O_DATA(w_dct2_output_data),
    .O_DATA_VALID(w_dct2_output_valid),
    .O_DATA_READY(w_dct2_output_ready),
    .O_DATA_LAST(w_dct2_output_last)
  );

  // The existing DST7/DCT8 core uses opposite names for its READY
  // ports. Port directions are intentionally mapped without changing
  // that legacy core's interface.
  TQ_IDST7_IDCT8_CORE #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idst7_idct8_core (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_TRANSFORM_SIZE(w_active_size),
    .I_TRANSFORM_MODE(w_mts_mode),
    .I_DATA_VALID(w_mts_input_valid),
    .O_DATA_READY(w_mts_input_ready),
    .I_DATA(I_DATA),
    .O_DATA_VALID(w_mts_output_valid),
    .I_DATA_READY(w_mts_output_ready),
    .O_DATA(w_mts_output_data),
    .O_DATA_LAST(w_mts_output_last)
  );
endmodule: TQ_UNIFIED_INVERSE_1D_ENGINE
