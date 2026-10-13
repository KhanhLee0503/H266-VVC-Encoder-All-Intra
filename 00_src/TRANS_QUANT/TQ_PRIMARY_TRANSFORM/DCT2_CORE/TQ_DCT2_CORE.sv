//-----------------------------------------------------------
// Description: This module implements a forward DCT-II 1-D
// hierarchical partial-butterfly transform for sizes 4/8/16/32.
// Four input samples are accepted per beat. A complete vector is
// routed into the appropriate butterfly and its even descendants.
// Each odd-vector is dispatched exactly once to its dedicated MCM.
// Completed coefficient vectors are collected in natural order
// and transmitted four coefficients per output beat.
// A single transform vector is in flight in this baseline core.
// The output is unnormalized and no coefficients are zeroed out.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DCT2_CORE #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_RESULT_WD = 28,
  localparam PARA_BF16_WD = PARA_DATA_WD + 1,
  localparam PARA_BF8_WD = PARA_DATA_WD + 2,
  localparam PARA_BF4_WD = PARA_DATA_WD + 3,
  localparam PARA_FINAL_WD = PARA_DATA_WD + 4
)(
  input                                      I_CLK,
  input                                      I_RESETN,
  input        [1:0]                         I_TRANSFORM_SIZE,
  input        [4*PARA_DATA_WD-1:0]          I_DATA,
  input                                      I_DATA_VALID,
  output logic                               I_DATA_READY,
  output logic [4*PARA_RESULT_WD-1:0]        O_DATA,
  output logic                               O_DATA_VALID,
  input                                      O_DATA_READY,
  output logic                               O_DATA_LAST
);
  localparam [1:0] SIZE_4 = 2'b00;
  localparam [1:0] SIZE_8 = 2'b01;
  localparam [1:0] SIZE_16 = 2'b10;
  localparam [1:0] SIZE_32 = 2'b11;

  typedef enum logic [2:0] {
    ST_IDLE,
    ST_LOAD,
    ST_BF_SEND,
    ST_BF_WAIT,
    ST_ODD_SEND,
    ST_BASE_SEND,
    ST_WAIT_RESULTS,
    ST_OUTPUT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;
  logic [1:0] r_transform_size;
  logic [1:0] r_active_stage;
  logic [2:0] r_input_beat;
  logic [2:0] r_output_beat;
  logic [2:0] w_last_beat;
  logic [4:0] r_branch_done;
  logic [4:0] w_required_branches;
  logic w_input_handshake;
  logic w_output_handshake;
  logic w_bf_selected_ready;
  logic w_bf_selected_valid;
  logic w_odd_selected_ready;

  logic [PARA_DATA_WD-1:0] r_input_vector [0:31];
  logic [PARA_RESULT_WD-1:0] r_coefficient [0:31];
  logic [16*PARA_BF16_WD-1:0] r_even_32;
  logic [16*PARA_BF16_WD-1:0] r_odd_32;
  logic [8*PARA_BF8_WD-1:0] r_even_16;
  logic [8*PARA_BF8_WD-1:0] r_odd_16;
  logic [4*PARA_BF4_WD-1:0] r_even_8;
  logic [4*PARA_BF4_WD-1:0] r_odd_8;
  logic [2*PARA_FINAL_WD-1:0] r_even_4;
  logic [2*PARA_FINAL_WD-1:0] r_odd_4;

  logic [32*PARA_DATA_WD-1:0] w_bf32_input;
  logic [16*PARA_BF16_WD-1:0] w_bf16_input;
  logic [8*PARA_BF8_WD-1:0] w_bf8_input;
  logic [4*PARA_BF4_WD-1:0] w_bf4_input;
  logic [16*PARA_BF16_WD-1:0] w_bf32_even;
  logic [16*PARA_BF16_WD-1:0] w_bf32_odd;
  logic [8*PARA_BF8_WD-1:0] w_bf16_even;
  logic [8*PARA_BF8_WD-1:0] w_bf16_odd;
  logic [4*PARA_BF4_WD-1:0] w_bf8_even;
  logic [4*PARA_BF4_WD-1:0] w_bf8_odd;
  logic [2*PARA_FINAL_WD-1:0] w_bf4_even;
  logic [2*PARA_FINAL_WD-1:0] w_bf4_odd;
  logic [3:0] w_bf_input_ready;
  logic [3:0] w_bf_output_valid;
  logic [3:0] w_bf_input_valid;
  logic [3:0] w_bf_output_ready;
  logic [3:0] w_odd_input_ready;
  logic [3:0] w_odd_output_valid;
  logic [3:0] w_odd_input_valid;
  logic [16*PARA_RESULT_WD-1:0] w_odd32_output;
  logic [8*PARA_RESULT_WD-1:0] w_odd16_output;
  logic [4*PARA_RESULT_WD-1:0] w_odd8_output;
  logic [2*PARA_RESULT_WD-1:0] w_odd4_output;
  logic w_base_input_ready;
  logic w_base_output_valid;
  logic [2*PARA_RESULT_WD-1:0] w_base_output;

  // All internal vector buses are packed with sample zero at the LSB.
  for (genvar sample_idx = 0; sample_idx < 32; sample_idx++) begin: gen_input_vector
    assign w_bf32_input[sample_idx*PARA_DATA_WD +: PARA_DATA_WD] = r_input_vector[sample_idx];
  end

  // MUX_16 selects direct 16-point input or the 32-point even path.
  for (genvar sample_idx = 0; sample_idx < 16; sample_idx++) begin: gen_input_mux_16
    assign w_bf16_input[sample_idx*PARA_BF16_WD +: PARA_BF16_WD] =
      (r_transform_size == SIZE_16) ?
      {{(PARA_BF16_WD-PARA_DATA_WD){r_input_vector[sample_idx][PARA_DATA_WD-1]}}, r_input_vector[sample_idx]} :
      r_even_32[sample_idx*PARA_BF16_WD +: PARA_BF16_WD];
  end

  // MUX_8 bypasses larger butterflies for a direct 8-point vector.
  for (genvar sample_idx = 0; sample_idx < 8; sample_idx++) begin: gen_input_mux_8
    assign w_bf8_input[sample_idx*PARA_BF8_WD +: PARA_BF8_WD] =
      (r_transform_size == SIZE_8) ?
      {{(PARA_BF8_WD-PARA_DATA_WD){r_input_vector[sample_idx][PARA_DATA_WD-1]}}, r_input_vector[sample_idx]} :
      r_even_16[sample_idx*PARA_BF8_WD +: PARA_BF8_WD];
  end

  // MUX_4 selects raw 4-point samples or the preceding even path.
  for (genvar sample_idx = 0; sample_idx < 4; sample_idx++) begin: gen_input_mux_4
    assign w_bf4_input[sample_idx*PARA_BF4_WD +: PARA_BF4_WD] =
      (r_transform_size == SIZE_4) ?
      {{(PARA_BF4_WD-PARA_DATA_WD){r_input_vector[sample_idx][PARA_DATA_WD-1]}}, r_input_vector[sample_idx]} :
      r_even_8[sample_idx*PARA_BF4_WD +: PARA_BF4_WD];
  end

  // Stage indices match the transform-size encoding: 0=4, 3=32.
  for (genvar stage_idx = 0; stage_idx < 4; stage_idx++) begin: gen_stage_control
    assign w_bf_input_valid[stage_idx] = (r_current_state == ST_BF_SEND) && (r_active_stage == 2'(stage_idx));
    assign w_bf_output_ready[stage_idx] = (r_current_state == ST_BF_WAIT) && (r_active_stage == 2'(stage_idx));
    assign w_odd_input_valid[stage_idx] = (r_current_state == ST_ODD_SEND) && (r_active_stage == 2'(stage_idx));
  end

  TQ_DCT2_BUTTERFLY_32 #(
    .PARA_DATA_WD(PARA_DATA_WD)
  ) u_tq_dct2_butterfly_32 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_bf_input_valid[3]),
    .O_DATA_READY(w_bf_input_ready[3]),
    .I_DATA(w_bf32_input),
    .O_DATA_VALID(w_bf_output_valid[3]),
    .I_DATA_READY(w_bf_output_ready[3]),
    .O_EVEN_DATA(w_bf32_even),
    .O_ODD_DATA(w_bf32_odd)
  );

  TQ_DCT2_BUTTERFLY_16 #(
    .PARA_DATA_WD(PARA_BF16_WD)
  ) u_tq_dct2_butterfly_16 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_bf_input_valid[2]),
    .O_DATA_READY(w_bf_input_ready[2]),
    .I_DATA(w_bf16_input),
    .O_DATA_VALID(w_bf_output_valid[2]),
    .I_DATA_READY(w_bf_output_ready[2]),
    .O_EVEN_DATA(w_bf16_even),
    .O_ODD_DATA(w_bf16_odd)
  );

  TQ_DCT2_BUTTERFLY_8 #(
    .PARA_DATA_WD(PARA_BF8_WD)
  ) u_tq_dct2_butterfly_8 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_bf_input_valid[1]),
    .O_DATA_READY(w_bf_input_ready[1]),
    .I_DATA(w_bf8_input),
    .O_DATA_VALID(w_bf_output_valid[1]),
    .I_DATA_READY(w_bf_output_ready[1]),
    .O_EVEN_DATA(w_bf8_even),
    .O_ODD_DATA(w_bf8_odd)
  );

  TQ_DCT2_BUTTERFLY_4 #(
    .PARA_DATA_WD(PARA_BF4_WD)
  ) u_tq_dct2_butterfly_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_bf_input_valid[0]),
    .O_DATA_READY(w_bf_input_ready[0]),
    .I_DATA(w_bf4_input),
    .O_DATA_VALID(w_bf_output_valid[0]),
    .I_DATA_READY(w_bf_output_ready[0]),
    .O_EVEN_DATA(w_bf4_even),
    .O_ODD_DATA(w_bf4_odd)
  );

  TQ_DCT2_ODD_MCM_32 #(
    .PARA_DATA_WD(PARA_BF16_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_tq_dct2_odd_mcm_32 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_odd_input_valid[3]),
    .O_DATA_READY(w_odd_input_ready[3]),
    .I_DATA(r_odd_32),
    .O_DATA_VALID(w_odd_output_valid[3]),
    .I_DATA_READY(1'b1),
    .O_DATA(w_odd32_output)
  );

  TQ_DCT2_ODD_MCM_16 #(
    .PARA_DATA_WD(PARA_BF8_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_tq_dct2_odd_mcm_16 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_odd_input_valid[2]),
    .O_DATA_READY(w_odd_input_ready[2]),
    .I_DATA(r_odd_16),
    .O_DATA_VALID(w_odd_output_valid[2]),
    .I_DATA_READY(1'b1),
    .O_DATA(w_odd16_output)
  );

  TQ_DCT2_ODD_MCM_8 #(
    .PARA_DATA_WD(PARA_BF4_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_tq_dct2_odd_mcm_8 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_odd_input_valid[1]),
    .O_DATA_READY(w_odd_input_ready[1]),
    .I_DATA(r_odd_8),
    .O_DATA_VALID(w_odd_output_valid[1]),
    .I_DATA_READY(1'b1),
    .O_DATA(w_odd8_output)
  );

  TQ_DCT2_ODD_MCM_4 #(
    .PARA_DATA_WD(PARA_FINAL_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_tq_dct2_odd_mcm_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_odd_input_valid[0]),
    .O_DATA_READY(w_odd_input_ready[0]),
    .I_DATA(r_odd_4),
    .O_DATA_VALID(w_odd_output_valid[0]),
    .I_DATA_READY(1'b1),
    .O_DATA(w_odd4_output)
  );

  TQ_DCT2_BASE_2 #(
    .PARA_DATA_WD(PARA_FINAL_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_tq_dct2_base_2 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(r_current_state == ST_BASE_SEND),
    .O_DATA_READY(w_base_input_ready),
    .I_DATA(r_even_4),
    .O_DATA_VALID(w_base_output_valid),
    .I_DATA_READY(1'b1),
    .O_DATA(w_base_output)
  );

  // A transform completes only when all its selected branches finish.
  always_comb begin
    w_last_beat = 3'd0;
    w_required_branches = 5'b00011;
    unique casez (r_transform_size)
      SIZE_4: begin
        w_last_beat = 3'd0;
        w_required_branches = 5'b00011;
      end
      SIZE_8: begin
        w_last_beat = 3'd1;
        w_required_branches = 5'b00111;
      end
      SIZE_16: begin
        w_last_beat = 3'd3;
        w_required_branches = 5'b01111;
      end
      SIZE_32: begin
        w_last_beat = 3'd7;
        w_required_branches = 5'b11111;
      end
      default: begin
        w_last_beat = 3'd0;
        w_required_branches = 5'b00011;
      end
    endcase
  end

  always_comb begin
    w_bf_selected_ready = 1'b0;
    w_bf_selected_valid = 1'b0;
    w_odd_selected_ready = 1'b0;
    unique casez (r_active_stage)
      SIZE_4: begin
        w_bf_selected_ready = w_bf_input_ready[0];
        w_bf_selected_valid = w_bf_output_valid[0];
        w_odd_selected_ready = w_odd_input_ready[0];
      end
      SIZE_8: begin
        w_bf_selected_ready = w_bf_input_ready[1];
        w_bf_selected_valid = w_bf_output_valid[1];
        w_odd_selected_ready = w_odd_input_ready[1];
      end
      SIZE_16: begin
        w_bf_selected_ready = w_bf_input_ready[2];
        w_bf_selected_valid = w_bf_output_valid[2];
        w_odd_selected_ready = w_odd_input_ready[2];
      end
      SIZE_32: begin
        w_bf_selected_ready = w_bf_input_ready[3];
        w_bf_selected_valid = w_bf_output_valid[3];
        w_odd_selected_ready = w_odd_input_ready[3];
      end
      default: begin
        w_bf_selected_ready = 1'b0;
        w_bf_selected_valid = 1'b0;
        w_odd_selected_ready = 1'b0;
      end
    endcase
  end

  // Process 1: FSM state register.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: FSM next-state decisions.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_handshake) begin
          if (I_TRANSFORM_SIZE == SIZE_4)
            w_next_state = ST_BF_SEND;
          else
            w_next_state = ST_LOAD;
        end
      end
      ST_LOAD: begin
        if (w_input_handshake && (r_input_beat == w_last_beat))
          w_next_state = ST_BF_SEND;
      end
      ST_BF_SEND: begin
        if (w_bf_selected_ready)
          w_next_state = ST_BF_WAIT;
      end
      ST_BF_WAIT: begin
        if (w_bf_selected_valid)
          w_next_state = ST_ODD_SEND;
      end
      ST_ODD_SEND: begin
        if (w_odd_selected_ready) begin
          if (r_active_stage == SIZE_4)
            w_next_state = ST_BASE_SEND;
          else
            w_next_state = ST_BF_SEND;
        end
      end
      ST_BASE_SEND: begin
        if (w_base_input_ready)
          w_next_state = ST_WAIT_RESULTS;
      end
      ST_WAIT_RESULTS: begin
        if ((r_branch_done & w_required_branches) == w_required_branches)
          w_next_state = ST_OUTPUT;
      end
      ST_OUTPUT: begin
        if (w_output_handshake && (r_output_beat == w_last_beat))
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: Output control, all stream transfers use valid && ready.
  always_comb begin
    I_DATA_READY = 1'b0;
    O_DATA_VALID = 1'b0;
    O_DATA_LAST = 1'b0;
    if ((r_current_state == ST_IDLE) || (r_current_state == ST_LOAD))
      I_DATA_READY = 1'b1;
    if (r_current_state == ST_OUTPUT) begin
      O_DATA_VALID = 1'b1;
      O_DATA_LAST = (r_output_beat == w_last_beat);
    end
  end

  assign w_input_handshake = I_DATA_VALID && I_DATA_READY;
  assign w_output_handshake = O_DATA_VALID && O_DATA_READY;

  // Control registers are reset; sample and coefficient RAMs are not.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_transform_size <= SIZE_4;
      r_active_stage <= SIZE_4;
      r_input_beat <= 3'd0;
      r_output_beat <= 3'd0;
      r_branch_done <= 5'b00000;
    end else begin
      if ((r_current_state == ST_IDLE) && w_input_handshake) begin
        r_transform_size <= I_TRANSFORM_SIZE;
        r_active_stage <= I_TRANSFORM_SIZE;
        r_input_beat <= 3'd1;
        r_output_beat <= 3'd0;
        r_branch_done <= 5'b00000;
      end else begin
        if ((r_current_state == ST_LOAD) && w_input_handshake)
          r_input_beat <= r_input_beat + 3'd1;
        if ((r_current_state == ST_ODD_SEND) && w_odd_selected_ready && (r_active_stage != SIZE_4))
          r_active_stage <= r_active_stage - 2'd1;
        if (w_output_handshake)
          r_output_beat <= r_output_beat + 3'd1;
        if (w_odd_output_valid[3])
          r_branch_done[4] <= 1'b1;
        if (w_odd_output_valid[2])
          r_branch_done[3] <= 1'b1;
        if (w_odd_output_valid[1])
          r_branch_done[2] <= 1'b1;
        if (w_odd_output_valid[0])
          r_branch_done[1] <= 1'b1;
        if (w_base_output_valid)
          r_branch_done[0] <= 1'b1;
      end
    end
  end

  // Capture four input samples on each accepted stream beat.
  always_ff @(posedge I_CLK) begin
    if (w_input_handshake) begin
      if (r_current_state == ST_IDLE) begin
        for (int lane_idx = 0; lane_idx < 4; lane_idx++)
          r_input_vector[lane_idx] <= I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD];
      end else if (r_current_state == ST_LOAD) begin
        for (int lane_idx = 0; lane_idx < 4; lane_idx++)
          r_input_vector[4*r_input_beat+lane_idx] <= I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD];
      end
    end
  end

  // Consume both butterfly branches together, then dispatch the odd
  // vector to its MCM before continuing along the even recursion.
  always_ff @(posedge I_CLK) begin
    if (r_current_state == ST_BF_WAIT) begin
      if ((r_active_stage == SIZE_32) && w_bf_output_valid[3]) begin
        r_even_32 <= w_bf32_even;
        r_odd_32 <= w_bf32_odd;
      end
      if ((r_active_stage == SIZE_16) && w_bf_output_valid[2]) begin
        r_even_16 <= w_bf16_even;
        r_odd_16 <= w_bf16_odd;
      end
      if ((r_active_stage == SIZE_8) && w_bf_output_valid[1]) begin
        r_even_8 <= w_bf8_even;
        r_odd_8 <= w_bf8_odd;
      end
      if ((r_active_stage == SIZE_4) && w_bf_output_valid[0]) begin
        r_even_4 <= w_bf4_even;
        r_odd_4 <= w_bf4_odd;
      end
    end
  end

  // Output collector. Each odd branch has disjoint coefficient slots.
  // The stride depends on the size of the complete transform vector.
  always_ff @(posedge I_CLK) begin
    if (w_odd_output_valid[3]) begin
      for (int coeff_idx = 0; coeff_idx < 16; coeff_idx++)
        r_coefficient[2*coeff_idx+1] <= w_odd32_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
    end
    if (w_odd_output_valid[2]) begin
      for (int coeff_idx = 0; coeff_idx < 8; coeff_idx++) begin
        if (r_transform_size == SIZE_32)
          r_coefficient[4*coeff_idx+2] <= w_odd16_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
        else
          r_coefficient[2*coeff_idx+1] <= w_odd16_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
      end
    end
    if (w_odd_output_valid[1]) begin
      for (int coeff_idx = 0; coeff_idx < 4; coeff_idx++) begin
        unique casez (r_transform_size)
          SIZE_32: r_coefficient[8*coeff_idx+4] <= w_odd8_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
          SIZE_16: r_coefficient[4*coeff_idx+2] <= w_odd8_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
          default: r_coefficient[2*coeff_idx+1] <= w_odd8_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
        endcase
      end
    end
    if (w_odd_output_valid[0]) begin
      for (int coeff_idx = 0; coeff_idx < 2; coeff_idx++) begin
        unique casez (r_transform_size)
          SIZE_32: r_coefficient[16*coeff_idx+8] <= w_odd4_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
          SIZE_16: r_coefficient[8*coeff_idx+4] <= w_odd4_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
          SIZE_8: r_coefficient[4*coeff_idx+2] <= w_odd4_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
          default: r_coefficient[2*coeff_idx+1] <= w_odd4_output[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
        endcase
      end
    end
    if (w_base_output_valid) begin
      r_coefficient[0] <= w_base_output[0*PARA_RESULT_WD +: PARA_RESULT_WD];
      unique casez (r_transform_size)
        SIZE_32: r_coefficient[16] <= w_base_output[1*PARA_RESULT_WD +: PARA_RESULT_WD];
        SIZE_16: r_coefficient[8] <= w_base_output[1*PARA_RESULT_WD +: PARA_RESULT_WD];
        SIZE_8: r_coefficient[4] <= w_base_output[1*PARA_RESULT_WD +: PARA_RESULT_WD];
        default: r_coefficient[2] <= w_base_output[1*PARA_RESULT_WD +: PARA_RESULT_WD];
      endcase
    end
  end

  // The output vector buffer is read in natural coefficient order.
  always_comb begin
    O_DATA = '0;
    if (r_current_state == ST_OUTPUT) begin
      for (int lane_idx = 0; lane_idx < 4; lane_idx++)
        O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_coefficient[4*r_output_beat+lane_idx];
    end
  end
endmodule: TQ_DCT2_CORE
