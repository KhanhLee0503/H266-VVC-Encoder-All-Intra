//-----------------------------------------------------------
// Description: Unified raw 1-D inverse DCT-II core for
// vector lengths 4, 8, 16 and 32. Accepts four signed
// coefficients per beat in natural frequency order.
// A single full vector is buffered and dispatched once to
// its required inverse even base and folded odd MCM paths.
// Hierarchical Combine4/8/16/32 blocks reconstruct the
// spatial vector; an output collector emits four signed
// raw samples per beat in natural spatial order.
// Only one vector may be in flight. Raw outputs are not
// rounded, shifted or clipped. These operations belong
// to the inverse 2-D transform scaling stages.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_CORE #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_RESULT_WD = 28
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
  localparam [1:0] SIZE_4  = 2'b00;
  localparam [1:0] SIZE_8  = 2'b01;
  localparam [1:0] SIZE_16 = 2'b10;
  localparam [1:0] SIZE_32 = 2'b11;

  typedef enum logic [2:0] {
    ST_IDLE,
    ST_LOAD,
    ST_DISPATCH,
    ST_WAIT_RESULT,
    ST_OUTPUT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;
  logic [1:0] r_transform_size;
  logic [2:0] r_input_beat;
  logic [2:0] r_output_beat;
  logic [2:0] w_last_beat;
  logic [4:0] r_sent;
  logic [4:0] w_required;
  logic [4:0] w_dispatch_valid;
  logic [4:0] w_dispatch_ready;
  logic [4:0] w_dispatch_fire;
  logic w_input_handshake;
  logic w_output_handshake;
  logic w_collect_valid;
  logic w_collect_ready;
  logic [32*PARA_RESULT_WD-1:0] w_collect_data;
  logic [PARA_DATA_WD-1:0] r_input_vector [0:31];
  logic [PARA_RESULT_WD-1:0] r_output_vector [0:31];

  logic [2*PARA_DATA_WD-1:0] w_base_input;
  logic [2*PARA_DATA_WD-1:0] w_odd4_input;
  logic [4*PARA_DATA_WD-1:0] w_odd8_input;
  logic [8*PARA_DATA_WD-1:0] w_odd16_input;
  logic [16*PARA_DATA_WD-1:0] w_odd32_input;

  logic w_base_valid;
  logic w_base_out_ready;
  logic [2*PARA_RESULT_WD-1:0] w_base_data;
  logic w_odd4_valid;
  logic w_odd4_out_ready;
  logic [2*PARA_RESULT_WD-1:0] w_odd4_data;
  logic w_odd8_valid;
  logic w_odd8_out_ready;
  logic [4*PARA_RESULT_WD-1:0] w_odd8_data;
  logic w_odd16_valid;
  logic w_odd16_out_ready;
  logic [8*PARA_RESULT_WD-1:0] w_odd16_data;
  logic w_odd32_valid;
  logic w_odd32_out_ready;
  logic [16*PARA_RESULT_WD-1:0] w_odd32_data;

  logic w_combine8_even_ready;
  logic w_combine16_even_ready;
  logic w_combine32_even_ready;
  logic w_combine4_valid;
  logic w_combine4_ready;
  logic [4*PARA_RESULT_WD-1:0] w_combine4_data;
  logic w_combine8_valid;
  logic w_combine8_ready;
  logic [8*PARA_RESULT_WD-1:0] w_combine8_data;
  logic w_combine16_valid;
  logic w_combine16_ready;
  logic [16*PARA_RESULT_WD-1:0] w_combine16_data;
  logic w_combine32_valid;
  logic w_combine32_ready;
  logic [32*PARA_RESULT_WD-1:0] w_combine32_data;

  logic [1:0] w_shift8;
  logic [1:0] w_shift16;
  logic [1:0] w_shift32;

  // Each level consumes odd-indexed coefficients from its
  // corresponding even-frequency subtree. The final input
  // coefficient indices are legal whenever the level is used.
  assign w_shift8 = (r_transform_size >= SIZE_8) ? r_transform_size - 2'd1 : 2'd0;
  assign w_shift16 = (r_transform_size >= SIZE_16) ? r_transform_size - 2'd2 : 2'd0;
  assign w_shift32 = (r_transform_size >= SIZE_32) ? r_transform_size - 2'd3 : 2'd0;

  assign w_base_input[0*PARA_DATA_WD +: PARA_DATA_WD] = r_input_vector[0];
  assign w_base_input[1*PARA_DATA_WD +: PARA_DATA_WD] = r_input_vector[2 << r_transform_size];

  for (genvar coeff_idx = 0; coeff_idx < 2; coeff_idx++) begin: gen_odd4_input
    assign w_odd4_input[coeff_idx*PARA_DATA_WD +: PARA_DATA_WD] = r_input_vector[(2*coeff_idx+1) << r_transform_size];
  end
  for (genvar coeff_idx = 0; coeff_idx < 4; coeff_idx++) begin: gen_odd8_input
    assign w_odd8_input[coeff_idx*PARA_DATA_WD +: PARA_DATA_WD] = r_input_vector[(2*coeff_idx+1) << w_shift8];
  end
  for (genvar coeff_idx = 0; coeff_idx < 8; coeff_idx++) begin: gen_odd16_input
    assign w_odd16_input[coeff_idx*PARA_DATA_WD +: PARA_DATA_WD] = r_input_vector[(2*coeff_idx+1) << w_shift16];
  end
  for (genvar coeff_idx = 0; coeff_idx < 16; coeff_idx++) begin: gen_odd32_input
    assign w_odd32_input[coeff_idx*PARA_DATA_WD +: PARA_DATA_WD] = r_input_vector[(2*coeff_idx+1) << w_shift32];
  end

  // A size selects a prefix of the hierarchical primitive tree.
  always_comb begin
    w_required = 5'b00011;
    unique casez (r_transform_size)
      SIZE_4:  w_required = 5'b00011;
      SIZE_8:  w_required = 5'b00111;
      SIZE_16: w_required = 5'b01111;
      SIZE_32: w_required = 5'b11111;
      default: w_required = 5'b00011;
    endcase
  end

  assign w_dispatch_valid = {5{r_current_state == ST_DISPATCH}} & w_required & ~r_sent;
  assign w_dispatch_fire = w_dispatch_valid & w_dispatch_ready;
  assign w_input_handshake = I_DATA_VALID && I_DATA_READY;
  assign w_output_handshake = O_DATA_VALID && O_DATA_READY;

  always_comb begin
    w_last_beat = 3'd0;
    unique casez (r_transform_size)
      SIZE_4:  w_last_beat = 3'd0;
      SIZE_8:  w_last_beat = 3'd1;
      SIZE_16: w_last_beat = 3'd3;
      SIZE_32: w_last_beat = 3'd7;
      default: w_last_beat = 3'd0;
    endcase
  end

  // Process 1: FSM state register.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: FSM state transitions.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_handshake) begin
          if (I_TRANSFORM_SIZE == SIZE_4)
            w_next_state = ST_DISPATCH;
          else
            w_next_state = ST_LOAD;
        end
      end
      ST_LOAD: begin
        if (w_input_handshake && (r_input_beat == w_last_beat))
          w_next_state = ST_DISPATCH;
      end
      ST_DISPATCH: begin
        if ((r_sent | w_dispatch_fire | ~w_required) == 5'b11111)
          w_next_state = ST_WAIT_RESULT;
      end
      ST_WAIT_RESULT: begin
        if (w_collect_valid && w_collect_ready)
          w_next_state = ST_OUTPUT;
      end
      ST_OUTPUT: begin
        if (w_output_handshake && (r_output_beat == w_last_beat))
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: Outputs and handshakes.
  always_comb begin
    I_DATA_READY = (r_current_state == ST_IDLE) || (r_current_state == ST_LOAD);
    O_DATA_VALID = (r_current_state == ST_OUTPUT);
    O_DATA_LAST = O_DATA_VALID && (r_output_beat == w_last_beat);
    w_collect_ready = (r_current_state == ST_WAIT_RESULT);
    O_DATA = '0;
    for (integer lane_idx = 0; lane_idx < 4; lane_idx++)
      O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_output_vector[4*r_output_beat + lane_idx];
  end

  // Input vector and output vector payloads are valid-qualified;
  // no large datapath array is reset.
  always_ff @(posedge I_CLK) begin
    if (w_input_handshake) begin
      for (integer lane_idx = 0; lane_idx < 4; lane_idx++) begin
        if (r_current_state == ST_IDLE)
          r_input_vector[lane_idx] <= I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD];
        else
          r_input_vector[4*r_input_beat + lane_idx] <= I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD];
      end
    end
    if (w_collect_valid && w_collect_ready) begin
      for (integer coeff_idx = 0; coeff_idx < 32; coeff_idx++)
        r_output_vector[coeff_idx] <= w_collect_data[coeff_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
    end
  end

  // Counters, active size and dispatch mask.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_transform_size <= SIZE_4;
      r_input_beat <= 3'd0;
      r_output_beat <= 3'd0;
      r_sent <= '0;
    end
    else begin
      if (w_input_handshake) begin
        if (r_current_state == ST_IDLE) begin
          r_transform_size <= I_TRANSFORM_SIZE;
          r_input_beat <= 3'd1;
          r_output_beat <= 3'd0;
          r_sent <= '0;
        end
        else
          r_input_beat <= r_input_beat + 3'd1;
      end
      if (r_current_state == ST_DISPATCH)
        r_sent <= r_sent | w_dispatch_fire;
      if (w_output_handshake)
        r_output_beat <= r_output_beat + 3'd1;
    end
  end

  TQ_IDCT2_BASE_2 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idct2_base_2 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_dispatch_valid[0]),
    .O_DATA_READY(w_dispatch_ready[0]),
    .I_DATA(w_base_input),
    .O_DATA_VALID(w_base_valid),
    .I_DATA_READY(w_base_out_ready),
    .O_DATA(w_base_data)
  );

  TQ_IDCT2_ODD_MCM_4 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idct2_odd_mcm_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_dispatch_valid[1]),
    .O_DATA_READY(w_dispatch_ready[1]),
    .I_DATA(w_odd4_input),
    .O_DATA_VALID(w_odd4_valid),
    .I_DATA_READY(w_odd4_out_ready),
    .O_DATA(w_odd4_data)
  );

  TQ_IDCT2_ODD_MCM_8 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idct2_odd_mcm_8 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_dispatch_valid[2]),
    .O_DATA_READY(w_dispatch_ready[2]),
    .I_DATA(w_odd8_input),
    .O_DATA_VALID(w_odd8_valid),
    .I_DATA_READY(w_odd8_out_ready),
    .O_DATA(w_odd8_data)
  );

  TQ_IDCT2_ODD_MCM_16 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idct2_odd_mcm_16 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_dispatch_valid[3]),
    .O_DATA_READY(w_dispatch_ready[3]),
    .I_DATA(w_odd16_input),
    .O_DATA_VALID(w_odd16_valid),
    .I_DATA_READY(w_odd16_out_ready),
    .O_DATA(w_odd16_data)
  );

  TQ_IDCT2_ODD_MCM_32 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_idct2_odd_mcm_32 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(w_dispatch_valid[4]),
    .O_DATA_READY(w_dispatch_ready[4]),
    .I_DATA(w_odd32_input),
    .O_DATA_VALID(w_odd32_valid),
    .I_DATA_READY(w_odd32_out_ready),
    .O_DATA(w_odd32_data)
  );

  TQ_IDCT2_COMBINE_4 #(.PARA_RESULT_WD(PARA_RESULT_WD)) u_idct2_combine_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_EVEN_VALID(w_base_valid),
    .O_EVEN_READY(w_base_out_ready),
    .I_EVEN_DATA(w_base_data),
    .I_ODD_VALID(w_odd4_valid),
    .O_ODD_READY(w_odd4_out_ready),
    .I_ODD_DATA(w_odd4_data),
    .O_DATA_VALID(w_combine4_valid),
    .I_DATA_READY(w_combine4_ready),
    .O_DATA(w_combine4_data)
  );

  TQ_IDCT2_COMBINE_8 #(.PARA_RESULT_WD(PARA_RESULT_WD)) u_idct2_combine_8 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_EVEN_VALID(w_combine4_valid && (r_transform_size >= SIZE_8)),
    .O_EVEN_READY(w_combine8_even_ready),
    .I_EVEN_DATA(w_combine4_data),
    .I_ODD_VALID(w_odd8_valid),
    .O_ODD_READY(w_odd8_out_ready),
    .I_ODD_DATA(w_odd8_data),
    .O_DATA_VALID(w_combine8_valid),
    .I_DATA_READY(w_combine8_ready),
    .O_DATA(w_combine8_data)
  );

  TQ_IDCT2_COMBINE_16 #(.PARA_RESULT_WD(PARA_RESULT_WD)) u_idct2_combine_16 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_EVEN_VALID(w_combine8_valid && (r_transform_size >= SIZE_16)),
    .O_EVEN_READY(w_combine16_even_ready),
    .I_EVEN_DATA(w_combine8_data),
    .I_ODD_VALID(w_odd16_valid),
    .O_ODD_READY(w_odd16_out_ready),
    .I_ODD_DATA(w_odd16_data),
    .O_DATA_VALID(w_combine16_valid),
    .I_DATA_READY(w_combine16_ready),
    .O_DATA(w_combine16_data)
  );

  TQ_IDCT2_COMBINE_32 #(.PARA_RESULT_WD(PARA_RESULT_WD)) u_idct2_combine_32 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_EVEN_VALID(w_combine16_valid && (r_transform_size == SIZE_32)),
    .O_EVEN_READY(w_combine32_even_ready),
    .I_EVEN_DATA(w_combine16_data),
    .I_ODD_VALID(w_odd32_valid),
    .O_ODD_READY(w_odd32_out_ready),
    .I_ODD_DATA(w_odd32_data),
    .O_DATA_VALID(w_combine32_valid),
    .I_DATA_READY(w_combine32_ready),
    .O_DATA(w_combine32_data)
  );

  // The selected active Combine output feeds the collector;
  // intermediate Combine results go to the next larger stage.
  always_comb begin
    w_combine4_ready = 1'b0;
    w_combine8_ready = 1'b0;
    w_combine16_ready = 1'b0;
    w_combine32_ready = 1'b0;
    w_collect_valid = 1'b0;
    w_collect_data = '0;
    unique casez (r_transform_size)
      SIZE_4: begin
        w_combine4_ready = w_collect_ready;
        w_collect_valid = w_combine4_valid;
        w_collect_data[0 +: 4*PARA_RESULT_WD] = w_combine4_data;
      end
      SIZE_8: begin
        w_combine4_ready = w_combine8_even_ready;
        w_combine8_ready = w_collect_ready;
        w_collect_valid = w_combine8_valid;
        w_collect_data[0 +: 8*PARA_RESULT_WD] = w_combine8_data;
      end
      SIZE_16: begin
        w_combine4_ready = w_combine8_even_ready;
        w_combine8_ready = w_combine16_even_ready;
        w_combine16_ready = w_collect_ready;
        w_collect_valid = w_combine16_valid;
        w_collect_data[0 +: 16*PARA_RESULT_WD] = w_combine16_data;
      end
      SIZE_32: begin
        w_combine4_ready = w_combine8_even_ready;
        w_combine8_ready = w_combine16_even_ready;
        w_combine16_ready = w_combine32_even_ready;
        w_combine32_ready = w_collect_ready;
        w_collect_valid = w_combine32_valid;
        w_collect_data = w_combine32_data;
      end
      default: begin
        w_combine4_ready = w_collect_ready;
      end
    endcase
  end
endmodule: TQ_IDCT2_CORE
