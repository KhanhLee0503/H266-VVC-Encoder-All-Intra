//-----------------------------------------------------------
// Description: This module wraps the 4, 8, 16 and 32-point
// forward DST-VII/DCT-VIII MCM cores using a four-sample stream.
// DCT-VIII sizes 4, 8 and 16 use alternating input signs and
// a full-vector output reversal buffer. The 32-point core
// handles DCT-VIII selection and coefficient zero-out internally.
// Only one transform vector is active in the wrapper at a time.
// Outputs are unscaled signed integer transform coefficients.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DST7_DCT8_CORE #(
  parameter PARA_DATA_WD = 16,
  localparam PARA_RESULT_WD = PARA_DATA_WD + 12
)(
  input                                I_CLK,
  input                                I_RESETN,
  input        [1:0]                   I_TRANSFORM_SIZE,
  input                                I_TRANSFORM_MODE,
  input                                I_DATA_VALID,
  output logic                         O_DATA_READY,
  input        [4*PARA_DATA_WD-1:0]    I_DATA,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]  O_DATA,
  output logic                         O_DATA_LAST
);
  typedef enum logic [2:0] {
    ST_IDLE,
    ST_LOAD,
    ST_STREAM,
    ST_CAPTURE_REV,
    ST_SEND_REV
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [1:0] r_transform_size;
  logic r_transform_mode;
  logic [2:0] r_input_beat;
  logic [1:0] r_reverse_write_beat;
  logic [1:0] r_reverse_read_beat;

  logic [1:0] w_active_size;
  logic w_active_mode;
  logic w_input_fire;
  logic w_core_output_fire;
  logic w_wrapper_output_fire;
  logic w_input_last_beat;
  logic w_reverse_last_beat;
  logic [1:0] w_reverse_final_beat;
  logic [4:0] w_reverse_length;
  logic [4:0] w_reverse_base_index;

  logic signed [PARA_DATA_WD:0] w_input_extended [0:3];
  logic signed [PARA_DATA_WD:0] w_input_adapted [0:3];
  logic [4*(PARA_DATA_WD+1)-1:0] w_input_mcm_small;

  logic w_mcm_4_input_valid;
  logic w_mcm_8_input_valid;
  logic w_mcm_16_input_valid;
  logic w_mcm_32_input_valid;
  logic w_mcm_4_input_ready;
  logic w_mcm_8_input_ready;
  logic w_mcm_16_input_ready;
  logic w_mcm_32_input_ready;
  logic w_mcm_4_output_valid;
  logic w_mcm_8_output_valid;
  logic w_mcm_16_output_valid;
  logic w_mcm_32_output_valid;
  logic w_mcm_4_output_ready;
  logic w_mcm_8_output_ready;
  logic w_mcm_16_output_ready;
  logic w_mcm_32_output_ready;
  logic w_mcm_4_output_last;
  logic w_mcm_8_output_last;
  logic w_mcm_16_output_last;
  logic w_mcm_32_output_last;
  logic [4*PARA_RESULT_WD-1:0] w_mcm_4_output;
  logic [4*PARA_RESULT_WD-1:0] w_mcm_8_output;
  logic [4*PARA_RESULT_WD-1:0] w_mcm_16_output;
  logic [4*PARA_RESULT_WD-1:0] w_mcm_32_output;
  logic w_selected_input_ready;
  logic w_accept_input_enable;
  logic w_stream_output_enable;
  logic w_capture_reverse_enable;
  logic w_send_reverse_enable;
  logic w_selected_output_valid;
  logic w_selected_output_last;
  logic [4*PARA_RESULT_WD-1:0] w_selected_output_data;
  logic [PARA_RESULT_WD-1:0] r_reverse_buffer [0:15];

  // The first input handshake supplies the transform configuration.
  assign w_active_size = (r_current_state == ST_IDLE) ? I_TRANSFORM_SIZE : r_transform_size;
  assign w_active_mode = (r_current_state == ST_IDLE) ? I_TRANSFORM_MODE : r_transform_mode;
  assign w_input_fire = I_DATA_VALID && O_DATA_READY;
  assign w_core_output_fire = w_selected_output_valid && w_capture_reverse_enable;
  assign w_wrapper_output_fire = O_DATA_VALID && I_DATA_READY;
  always_comb begin
    w_input_last_beat = 1'b0;
    unique casez (r_transform_size)
      2'b01: w_input_last_beat = (r_input_beat == 3'd1);
      2'b10: w_input_last_beat = (r_input_beat == 3'd3);
      2'b11: w_input_last_beat = (r_input_beat == 3'd7);
      default: w_input_last_beat = 1'b0;
    endcase
  end
  assign w_reverse_last_beat = (r_reverse_read_beat == w_reverse_final_beat);
  assign w_reverse_base_index = (w_reverse_length - 5'd1) - {1'b0, r_reverse_read_beat, 2'b00};

  // An extra sign bit preserves the minimum negative input during DCT-VIII negation.
  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_input_sign_adapter
    assign w_input_extended[lane_idx] = $signed({I_DATA[lane_idx*PARA_DATA_WD+PARA_DATA_WD-1], I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]});
    assign w_input_adapted[lane_idx] = (w_active_mode && ((lane_idx % 2) == 1)) ? -w_input_extended[lane_idx] : w_input_extended[lane_idx];
    assign w_input_mcm_small[lane_idx*(PARA_DATA_WD+1) +: (PARA_DATA_WD+1)] = w_input_adapted[lane_idx];
  end

  // The size-32 core receives the unmodified input and controls DCT-VIII internally.
  TQ_DST7_MCM_4 #(
    .PARA_DATA_WD(PARA_DATA_WD + 1)
  ) u_dst7_mcm_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_mcm_4_input_valid),
    .O_DATA_READY(w_mcm_4_input_ready),
    .I_DATA(w_input_mcm_small),
    .O_DATA_VALID(w_mcm_4_output_valid),
    .I_DATA_READY(w_mcm_4_output_ready),
    .O_DATA(w_mcm_4_output),
    .O_DATA_LAST(w_mcm_4_output_last)
  );

  TQ_DST7_MCM_8 #(
    .PARA_DATA_WD(PARA_DATA_WD + 1)
  ) u_dst7_mcm_8 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_mcm_8_input_valid),
    .O_DATA_READY(w_mcm_8_input_ready),
    .I_DATA(w_input_mcm_small),
    .O_DATA_VALID(w_mcm_8_output_valid),
    .I_DATA_READY(w_mcm_8_output_ready),
    .O_DATA(w_mcm_8_output),
    .O_DATA_LAST(w_mcm_8_output_last)
  );

  TQ_DST7_MCM_16 #(
    .PARA_DATA_WD(PARA_DATA_WD + 1)
  ) u_dst7_mcm_16 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_mcm_16_input_valid),
    .O_DATA_READY(w_mcm_16_input_ready),
    .I_DATA(w_input_mcm_small),
    .O_DATA_VALID(w_mcm_16_output_valid),
    .I_DATA_READY(w_mcm_16_output_ready),
    .O_DATA(w_mcm_16_output),
    .O_DATA_LAST(w_mcm_16_output_last)
  );

  TQ_DST7_MCM_32 #(
    .PARA_DATA_WD(PARA_DATA_WD)
  ) u_dst7_mcm_32 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_mcm_32_input_valid),
    .O_DATA_READY(w_mcm_32_input_ready),
    .I_DATA(I_DATA),
    .I_TRANSFORM_MODE(w_active_mode),
    .O_DATA_VALID(w_mcm_32_output_valid),
    .I_DATA_READY(w_mcm_32_output_ready),
    .O_DATA(w_mcm_32_output),
    .O_DATA_LAST(w_mcm_32_output_last)
  );

  // Only the selected MCM core receives an input-valid handshake.
  always_comb begin
    w_selected_input_ready = 1'b0;
    unique casez (w_active_size)
      2'b00: w_selected_input_ready = w_mcm_4_input_ready;
      2'b01: w_selected_input_ready = w_mcm_8_input_ready;
      2'b10: w_selected_input_ready = w_mcm_16_input_ready;
      2'b11: w_selected_input_ready = w_mcm_32_input_ready;
      default: w_selected_input_ready = 1'b0;
    endcase
  end

  always_comb begin
    O_DATA_READY = 1'b0;
    w_mcm_4_input_valid = 1'b0;
    w_mcm_8_input_valid = 1'b0;
    w_mcm_16_input_valid = 1'b0;
    w_mcm_32_input_valid = 1'b0;
    if (w_accept_input_enable) begin
      O_DATA_READY = w_selected_input_ready;
      if (I_DATA_VALID) begin
        unique casez (w_active_size)
          2'b00: w_mcm_4_input_valid = 1'b1;
          2'b01: w_mcm_8_input_valid = 1'b1;
          2'b10: w_mcm_16_input_valid = 1'b1;
          2'b11: w_mcm_32_input_valid = 1'b1;
          default: begin
            w_mcm_4_input_valid = 1'b0;
            w_mcm_8_input_valid = 1'b0;
            w_mcm_16_input_valid = 1'b0;
            w_mcm_32_input_valid = 1'b0;
          end
        endcase
      end
    end
  end

  // The output selector uses the latched transform size until the vector ends.
  always_comb begin
    w_selected_output_valid = 1'b0;
    w_selected_output_last = 1'b0;
    w_selected_output_data = '0;
    unique casez (r_transform_size)
      2'b00: begin
        w_selected_output_valid = w_mcm_4_output_valid;
        w_selected_output_last = w_mcm_4_output_last;
        w_selected_output_data = w_mcm_4_output;
      end
      2'b01: begin
        w_selected_output_valid = w_mcm_8_output_valid;
        w_selected_output_last = w_mcm_8_output_last;
        w_selected_output_data = w_mcm_8_output;
      end
      2'b10: begin
        w_selected_output_valid = w_mcm_16_output_valid;
        w_selected_output_last = w_mcm_16_output_last;
        w_selected_output_data = w_mcm_16_output;
      end
      2'b11: begin
        w_selected_output_valid = w_mcm_32_output_valid;
        w_selected_output_last = w_mcm_32_output_last;
        w_selected_output_data = w_mcm_32_output;
      end
      default: begin
        w_selected_output_valid = 1'b0;
        w_selected_output_last = 1'b0;
        w_selected_output_data = '0;
      end
    endcase
  end

  // Only one source may advance: direct stream or reversal-buffer capture.
  assign w_mcm_4_output_ready = (r_transform_size == 2'b00) && ((w_stream_output_enable && I_DATA_READY) || w_capture_reverse_enable);
  assign w_mcm_8_output_ready = (r_transform_size == 2'b01) && ((w_stream_output_enable && I_DATA_READY) || w_capture_reverse_enable);
  assign w_mcm_16_output_ready = (r_transform_size == 2'b10) && ((w_stream_output_enable && I_DATA_READY) || w_capture_reverse_enable);
  assign w_mcm_32_output_ready = (r_transform_size == 2'b11) && ((w_stream_output_enable && I_DATA_READY) || w_capture_reverse_enable);

  always_comb begin
    w_reverse_length = 5'd4;
    w_reverse_final_beat = 2'd0;
    unique casez (r_transform_size)
      2'b00: begin
        w_reverse_length = 5'd4;
        w_reverse_final_beat = 2'd0;
      end
      2'b01: begin
        w_reverse_length = 5'd8;
        w_reverse_final_beat = 2'd1;
      end
      2'b10: begin
        w_reverse_length = 5'd16;
        w_reverse_final_beat = 2'd3;
      end
      default: begin
        w_reverse_length = 5'd4;
        w_reverse_final_beat = 2'd0;
      end
    endcase
  end

  // The result of the selected core is either forwarded or reversed as a vector.
  always_comb begin
    O_DATA_VALID = 1'b0;
    O_DATA_LAST = 1'b0;
    O_DATA = '0;
    if (w_stream_output_enable) begin
      O_DATA_VALID = w_selected_output_valid;
      O_DATA_LAST = w_selected_output_last;
      O_DATA = w_selected_output_data;
    end
    else if (w_send_reverse_enable) begin
      O_DATA_VALID = 1'b1;
      O_DATA_LAST = w_reverse_last_beat;
      for (int lane_idx = 0; lane_idx < 4; lane_idx++)
        O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_reverse_buffer[w_reverse_base_index - 5'(lane_idx)];
    end
  end

  // Process 1: Store the current FSM state.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: Calculate FSM transitions from completed handshakes.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire) begin
          if (w_active_size != 2'b00)
            w_next_state = ST_LOAD;
          else if (w_active_mode)
            w_next_state = ST_CAPTURE_REV;
          else
            w_next_state = ST_STREAM;
        end
      end
      ST_LOAD: begin
        if (w_input_fire && w_input_last_beat) begin
          if (r_transform_mode && (r_transform_size != 2'b11))
            w_next_state = ST_CAPTURE_REV;
          else
            w_next_state = ST_STREAM;
        end
      end
      ST_STREAM: begin
        if (w_wrapper_output_fire && O_DATA_LAST)
          w_next_state = ST_IDLE;
      end
      ST_CAPTURE_REV: begin
        if (w_core_output_fire && w_selected_output_last)
          w_next_state = ST_SEND_REV;
      end
      ST_SEND_REV: begin
        if (w_wrapper_output_fire && w_reverse_last_beat)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: Decode the mutually exclusive datapath enables for the FSM.
  always_comb begin
    w_accept_input_enable = 1'b0;
    w_stream_output_enable = 1'b0;
    w_capture_reverse_enable = 1'b0;
    w_send_reverse_enable = 1'b0;
    unique casez (r_current_state)
      ST_IDLE: w_accept_input_enable = 1'b1;
      ST_LOAD: w_accept_input_enable = 1'b1;
      ST_STREAM: w_stream_output_enable = 1'b1;
      ST_CAPTURE_REV: w_capture_reverse_enable = 1'b1;
      ST_SEND_REV: w_send_reverse_enable = 1'b1;
      default: begin
        w_accept_input_enable = 1'b0;
        w_stream_output_enable = 1'b0;
        w_capture_reverse_enable = 1'b0;
        w_send_reverse_enable = 1'b0;
      end
    endcase
  end

  // Configuration and input-beat tracking remain stable throughout each vector.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_transform_size <= '0;
      r_transform_mode <= 1'b0;
      r_input_beat <= '0;
    end
    else begin
      if ((r_current_state == ST_IDLE) && w_input_fire) begin
        r_transform_size <= I_TRANSFORM_SIZE;
        r_transform_mode <= I_TRANSFORM_MODE;
        r_input_beat <= 3'd1;
      end
      else if ((r_current_state == ST_LOAD) && w_input_fire)
        r_input_beat <= r_input_beat + 3'd1;
    end
  end

  // The reversal buffer receives one complete four-, eight- or sixteen-point vector.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_reverse_write_beat <= '0;
      r_reverse_read_beat <= '0;
    end
    else begin
      if ((r_current_state == ST_IDLE) && w_input_fire) begin
        r_reverse_write_beat <= '0;
        r_reverse_read_beat <= '0;
      end
      else begin
        if (w_core_output_fire)
          r_reverse_write_beat <= r_reverse_write_beat + 2'd1;
        if ((r_current_state == ST_SEND_REV) && w_wrapper_output_fire && !w_reverse_last_beat)
          r_reverse_read_beat <= r_reverse_read_beat + 2'd1;
      end
    end
  end

  // The valid capture handshake guarantees every buffer entry is initialized before use.
  always_ff @(posedge I_CLK) begin
    if (w_core_output_fire) begin
      for (int lane_idx = 0; lane_idx < 4; lane_idx++)
        r_reverse_buffer[{r_reverse_write_beat, 2'b00} + lane_idx] <= w_selected_output_data[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
    end
  end
endmodule: TQ_DST7_DCT8_CORE
