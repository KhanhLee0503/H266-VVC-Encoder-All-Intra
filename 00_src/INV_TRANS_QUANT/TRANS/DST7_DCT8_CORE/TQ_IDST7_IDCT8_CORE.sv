//-----------------------------------------------------------
// Description: This module implements a unified 1-D inverse
// DST-VII / inverse DCT-VIII transform for sizes 4/8/16/32.
// Four signed 16-bit coefficients are consumed per accepted beat.
// Inverse DCT-VIII uses alternating coefficient signs followed
// by reversal of the reconstructed spatial samples. The input
// is sign-extended to 17 bits BEFORE negation to preserve -32768.
// At size 32 the external core consumes 32 coefficient slots
// but only the first 16 are sent to the zero-out-aware MCM32.
// All raw outputs are signed 28-bit, unscaled and unclipped.
// The output collector buffers one complete vector and supplies
// stable ready/valid with LAST and downstream backpressure.
// A single transform vector may be in flight at any time.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDST7_IDCT8_CORE #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_RESULT_WD = 28
)(
  input                                 I_CLK,
  input                                 I_RESETN,
  input        [1:0]                    I_TRANSFORM_SIZE,
  input                                 I_TRANSFORM_MODE,
  input                                 I_DATA_VALID,
  output logic                          O_DATA_READY,
  input        [4*PARA_DATA_WD-1:0]     I_DATA,
  output logic                          O_DATA_VALID,
  input                                 I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]   O_DATA,
  output logic                          O_DATA_LAST
);
  localparam PARA_MCM_DATA_WD = PARA_DATA_WD + 1;
  localparam [1:0] PARA_SIZE_4 = 2'b00;
  localparam [1:0] PARA_SIZE_8 = 2'b01;
  localparam [1:0] PARA_SIZE_16 = 2'b10;
  localparam [1:0] PARA_SIZE_32 = 2'b11;

  typedef enum logic [1:0] {
    ST_IDLE,
    ST_LOAD,
    ST_WAIT_RESULT,
    ST_OUTPUT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [1:0] r_transform_size;
  logic r_transform_mode;
  logic [1:0] w_active_size;
  logic w_active_mode;
  logic [2:0] r_input_beat;
  logic [3:0] r_collected_beat;
  logic [2:0] r_output_beat;
  logic [3:0] w_num_beats;
  logic [3:0] w_num_output_beats;
  logic [5:0] w_num_samples;
  logic w_input_fire;
  logic w_output_fire;
  logic w_child_output_fire;
  logic w_child_4_input_valid;
  logic w_child_8_input_valid;
  logic w_child_16_input_valid;
  logic w_child_32_input_valid;
  logic w_child_4_input_ready;
  logic w_child_8_input_ready;
  logic w_child_16_input_ready;
  logic w_child_32_input_ready;
  logic w_child_4_output_valid;
  logic w_child_8_output_valid;
  logic w_child_16_output_valid;
  logic w_child_32_output_valid;
  logic w_child_4_output_ready;
  logic w_child_8_output_ready;
  logic w_child_16_output_ready;
  logic w_child_32_output_ready;
  logic w_child_4_output_last;
  logic w_child_8_output_last;
  logic w_child_16_output_last;
  logic w_child_32_output_last;
  logic [4*PARA_RESULT_WD-1:0] w_child_4_output_data;
  logic [4*PARA_RESULT_WD-1:0] w_child_8_output_data;
  logic [4*PARA_RESULT_WD-1:0] w_child_16_output_data;
  logic [4*PARA_RESULT_WD-1:0] w_child_32_output_data;
  logic [4*PARA_RESULT_WD-1:0] w_child_output_data;
  logic w_child_output_valid;
  logic w_child_output_last;
  logic w_child_output_ready;
  logic w_selected_input_ready;
  logic [4*PARA_MCM_DATA_WD-1:0] w_adapted_coefficients;
  logic signed [PARA_MCM_DATA_WD-1:0] w_coefficient_ext [0:3];
  logic signed [PARA_MCM_DATA_WD-1:0] w_coefficient_signed [0:3];
  logic [PARA_RESULT_WD-1:0] r_result_vector [0:31];
  logic [5:0] w_result_index [0:3];

  // The transform configuration belongs to the first accepted beat.
  assign w_active_size = (r_current_state == ST_IDLE) ? I_TRANSFORM_SIZE : r_transform_size;
  assign w_active_mode = (r_current_state == ST_IDLE) ? I_TRANSFORM_MODE : r_transform_mode;
  assign w_num_samples = 6'd4 << r_transform_size;
  assign w_num_output_beats = 4'd1 << r_transform_size;
  assign w_input_fire = I_DATA_VALID && O_DATA_READY;
  assign w_output_fire = O_DATA_VALID && I_DATA_READY;
  assign w_child_output_fire = w_child_output_valid && w_child_output_ready;

  // DCT8 inverse: input C[k] -> (-1)^k*C[k]; the final
  // output reversal is applied after the shared inverse DST7.
  // Each input beat contains four coefficients, so k parity
  // equals the lane parity in every beat.
  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_input_adapter
    assign w_coefficient_ext[lane_idx] = $signed({I_DATA[lane_idx*PARA_DATA_WD+PARA_DATA_WD-1], I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]});
    assign w_coefficient_signed[lane_idx] = (w_active_mode && ((lane_idx % 2) == 1)) ? -w_coefficient_ext[lane_idx] : w_coefficient_ext[lane_idx];
    assign w_adapted_coefficients[lane_idx*PARA_MCM_DATA_WD +: PARA_MCM_DATA_WD] = w_coefficient_signed[lane_idx];
  end

  // External 32-point framing always consumes eight input beats.
  // Only beats zero through three reach MCM32 (low 16 coefficients).
  // Input slots 16..31 are ignored as mandated by MTS zero-out.
  always_comb begin
    O_DATA_READY = 1'b0;
    w_selected_input_ready = 1'b0;
    if ((r_current_state == ST_IDLE) || (r_current_state == ST_LOAD)) begin
      unique casez (w_active_size)
        PARA_SIZE_4:  w_selected_input_ready = w_child_4_input_ready;
        PARA_SIZE_8:  w_selected_input_ready = w_child_8_input_ready;
        PARA_SIZE_16: w_selected_input_ready = w_child_16_input_ready;
        PARA_SIZE_32: begin
          if ((r_current_state == ST_LOAD) && (r_input_beat >= 3'd4))
            w_selected_input_ready = 1'b1;
          else
            w_selected_input_ready = w_child_32_input_ready;
        end
        default: w_selected_input_ready = 1'b0;
      endcase
      O_DATA_READY = w_selected_input_ready;
    end
  end

  assign w_child_4_input_valid = I_DATA_VALID &&
    ((r_current_state == ST_IDLE) || (r_current_state == ST_LOAD)) && (w_active_size == PARA_SIZE_4);
  assign w_child_8_input_valid = I_DATA_VALID &&
    ((r_current_state == ST_IDLE) || (r_current_state == ST_LOAD)) && (w_active_size == PARA_SIZE_8);
  assign w_child_16_input_valid = I_DATA_VALID &&
    ((r_current_state == ST_IDLE) || (r_current_state == ST_LOAD)) && (w_active_size == PARA_SIZE_16);
  assign w_child_32_input_valid = I_DATA_VALID && (w_active_size == PARA_SIZE_32) &&
    ((r_current_state == ST_IDLE) || ((r_current_state == ST_LOAD) && (r_input_beat < 3'd4)));

  // Select one MCM output stream for the shared collection buffer.
  always_comb begin
    w_child_output_data = '0;
    w_child_output_valid = 1'b0;
    w_child_output_last = 1'b0;
    w_child_4_output_ready = 1'b0;
    w_child_8_output_ready = 1'b0;
    w_child_16_output_ready = 1'b0;
    w_child_32_output_ready = 1'b0;
    w_child_output_ready = ((r_current_state == ST_LOAD) ||
                            (r_current_state == ST_WAIT_RESULT) ||
                            (r_current_state == ST_IDLE)) &&
                           (r_collected_beat < w_num_output_beats);
    unique casez (r_transform_size)
      PARA_SIZE_4: begin
        w_child_output_data = w_child_4_output_data;
        w_child_output_valid = w_child_4_output_valid;
        w_child_output_last = w_child_4_output_last;
        w_child_4_output_ready = w_child_output_ready;
      end
      PARA_SIZE_8: begin
        w_child_output_data = w_child_8_output_data;
        w_child_output_valid = w_child_8_output_valid;
        w_child_output_last = w_child_8_output_last;
        w_child_8_output_ready = w_child_output_ready;
      end
      PARA_SIZE_16: begin
        w_child_output_data = w_child_16_output_data;
        w_child_output_valid = w_child_16_output_valid;
        w_child_output_last = w_child_16_output_last;
        w_child_16_output_ready = w_child_output_ready;
      end
      PARA_SIZE_32: begin
        w_child_output_data = w_child_32_output_data;
        w_child_output_valid = w_child_32_output_valid;
        w_child_output_last = w_child_32_output_last;
        w_child_32_output_ready = w_child_output_ready;
      end
      default: begin
        w_child_output_data = '0;
      end
    endcase
  end

  // Single-vector FSM. No second vector is accepted until the
  // final output beat has been accepted by the downstream stage.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  always_comb begin
    w_next_state = r_current_state;
    w_num_beats = 4'd1 << w_active_size;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire) begin
          if (w_num_beats == 4'd1)
            w_next_state = ST_WAIT_RESULT;
          else
            w_next_state = ST_LOAD;
        end
      end
      ST_LOAD: begin
        if (w_input_fire && ({1'b0, r_input_beat} == (w_num_beats - 4'd1)))
          w_next_state = ST_WAIT_RESULT;
      end
      ST_WAIT_RESULT: begin
        if (r_collected_beat == w_num_output_beats)
          w_next_state = ST_OUTPUT;
      end
      ST_OUTPUT: begin
        if (w_output_fire && ({1'b0, r_output_beat} == (w_num_output_beats - 4'd1)))
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Control registers only are reset; payload storage is always
  // qualified by the corresponding ready/valid completion.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_transform_size <= PARA_SIZE_4;
      r_transform_mode <= 1'b0;
      r_input_beat <= '0;
      r_collected_beat <= '0;
      r_output_beat <= '0;
    end
    else begin
      if (w_input_fire) begin
        if (r_current_state == ST_IDLE) begin
          r_transform_size <= I_TRANSFORM_SIZE;
          r_transform_mode <= I_TRANSFORM_MODE;
          r_input_beat <= 3'd1;
          r_collected_beat <= '0;
          r_output_beat <= '0;
        end
        else
          r_input_beat <= r_input_beat + 3'd1;
      end
      if (w_child_output_fire)
        r_collected_beat <= r_collected_beat + 4'd1;
      if (w_output_fire)
        r_output_beat <= r_output_beat + 3'd1;
    end
  end

  always_ff @(posedge I_CLK) begin
    if (w_child_output_fire) begin
      for (int lane_idx = 0; lane_idx < 4; lane_idx++)
        r_result_vector[{r_collected_beat, 2'b00} + lane_idx] <=
          w_child_output_data[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
    end
  end

  // Both transform types emit natural spatial-sample order.
  // DST7 leaves the collector order untouched; DCT8 reverses it.
  always_comb begin
    O_DATA = '0;
    O_DATA_VALID = (r_current_state == ST_OUTPUT);
    O_DATA_LAST = O_DATA_VALID && ({1'b0, r_output_beat} == (w_num_output_beats - 4'd1));
    for (int lane_idx = 0; lane_idx < 4; lane_idx++) begin
      w_result_index[lane_idx] = {r_output_beat, 2'b00} + 6'(lane_idx);
      if (r_transform_mode)
        w_result_index[lane_idx] = (w_num_samples - 6'd1) - w_result_index[lane_idx];
      O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_result_vector[w_result_index[lane_idx]];
    end
  end

  TQ_IDST7_MCM_4 #(
    .PARA_DATA_WD(PARA_MCM_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idst7_mcm_4 (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_child_4_input_valid), .O_DATA_READY(w_child_4_input_ready),
    .I_DATA(w_adapted_coefficients),
    .O_DATA_VALID(w_child_4_output_valid), .I_DATA_READY(w_child_4_output_ready),
    .O_DATA(w_child_4_output_data), .O_DATA_LAST(w_child_4_output_last)
  );

  TQ_IDST7_MCM_8 #(
    .PARA_DATA_WD(PARA_MCM_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idst7_mcm_8 (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_child_8_input_valid), .O_DATA_READY(w_child_8_input_ready),
    .I_DATA(w_adapted_coefficients),
    .O_DATA_VALID(w_child_8_output_valid), .I_DATA_READY(w_child_8_output_ready),
    .O_DATA(w_child_8_output_data), .O_DATA_LAST(w_child_8_output_last)
  );

  TQ_IDST7_MCM_16 #(
    .PARA_DATA_WD(PARA_MCM_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idst7_mcm_16 (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_child_16_input_valid), .O_DATA_READY(w_child_16_input_ready),
    .I_DATA(w_adapted_coefficients),
    .O_DATA_VALID(w_child_16_output_valid), .I_DATA_READY(w_child_16_output_ready),
    .O_DATA(w_child_16_output_data), .O_DATA_LAST(w_child_16_output_last)
  );

  TQ_IDST7_MCM_32 #(
    .PARA_DATA_WD(PARA_MCM_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idst7_mcm_32 (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_child_32_input_valid), .O_DATA_READY(w_child_32_input_ready),
    .I_DATA(w_adapted_coefficients),
    .O_DATA_VALID(w_child_32_output_valid), .I_DATA_READY(w_child_32_output_ready),
    .O_DATA(w_child_32_output_data), .O_DATA_LAST(w_child_32_output_last)
  );
endmodule: TQ_IDST7_IDCT8_CORE
