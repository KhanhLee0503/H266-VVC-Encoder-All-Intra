//------------------------------------------------------------------------------
// Description: The DBF threshold generator computes the VVC beta and tC
// thresholds for one Y, Cb, or Cr edge transaction at 10-bit sample depth.
// Chroma QP inputs are mapped and normalized upstream. This block never
// performs the sample-window bypass decision.
// Reference: VTM LoopFilter.cpp, sm_betaTable, sm_tcTable and xEdgeFilter.
//------------------------------------------------------------------------------
`timescale 1ns/1ps
module DBF_THRESHOLD_GENERATOR (
  input  logic              I_CLK,
  input  logic              I_RST_N,
  input  logic              I_IN_VALID,
  output logic              O_IN_READY,
  input  logic        [1:0] I_COMPONENT_ID,
  input  logic        [1:0] I_BS,
  input  logic        [5:0] I_QP_P,
  input  logic        [5:0] I_QP_Q,
  input  logic signed [5:0] I_BETA_OFFSET_DIV2,
  input  logic signed [5:0] I_TC_OFFSET_DIV2,
  output logic              O_OUT_VALID,
  input  logic              I_OUT_READY,
  output logic        [6:0] O_QP_AVG,
  output logic        [5:0] O_INDEX_BETA,
  output logic        [6:0] O_INDEX_TC,
  output logic        [9:0] O_BETA,
  output logic        [9:0] O_TC,
  output logic              O_ERROR
);
  typedef enum logic {
    ST_IDLE   = 1'b0,
    ST_OUTPUT = 1'b1
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [6:0] r_qp_avg;
  logic [5:0] r_index_beta;
  logic [6:0] r_index_tc;
  logic [9:0] r_beta;
  logic [9:0] r_tc;
  logic       r_error;

  logic [6:0] w_qp_avg;
  logic signed [10:0] w_qp_beta_index_s;
  logic signed [10:0] w_qp_tc_index_s;
  logic [5:0] w_beta_index;
  logic [6:0] w_tc_index;
  logic [7:0] w_beta_rom;
  logic [9:0] w_tc_rom;
  logic       w_legal;
  logic       w_in_fire;

  assign w_in_fire = I_IN_VALID && O_IN_READY;
  assign w_legal   = (I_COMPONENT_ID != 2'd3) &&
                     ((I_BS == 2'd1) || (I_BS == 2'd2));
  assign w_qp_avg = ({1'b0, I_QP_P} + {1'b0, I_QP_Q} + 7'd1) >> 1;

  // Signed 11-bit arithmetic prevents unsigned offset wraparound.
  assign w_qp_beta_index_s = $signed({4'b0000, w_qp_avg}) +
                             ($signed({{5{I_BETA_OFFSET_DIV2[5]}}, I_BETA_OFFSET_DIV2}) <<< 1);
  assign w_qp_tc_index_s = $signed({4'b0000, w_qp_avg}) +
                           ((I_BS == 2'd2) ? 11'sd2 : 11'sd0) +
                           ($signed({{5{I_TC_OFFSET_DIV2[5]}}, I_TC_OFFSET_DIV2}) <<< 1);

  always_comb begin
    if (w_qp_beta_index_s < 11'sd0)
      w_beta_index = 6'd0;
    else if (w_qp_beta_index_s > 11'sd63)
      w_beta_index = 6'd63;
    else
      w_beta_index = w_qp_beta_index_s[5:0];

    if (w_qp_tc_index_s < 11'sd0)
      w_tc_index = 7'd0;
    else if (w_qp_tc_index_s > 11'sd65)
      w_tc_index = 7'd65;
    else
      w_tc_index = w_qp_tc_index_s[6:0];
  end

  // VTM 8-bit-domain beta table; fixed 10-bit video: beta = table << 2.
  always_comb begin
    w_beta_rom = 8'd0;
    unique casez (w_beta_index)
      6'd0: w_beta_rom = 8'd0;
      6'd1: w_beta_rom = 8'd0;
      6'd2: w_beta_rom = 8'd0;
      6'd3: w_beta_rom = 8'd0;
      6'd4: w_beta_rom = 8'd0;
      6'd5: w_beta_rom = 8'd0;
      6'd6: w_beta_rom = 8'd0;
      6'd7: w_beta_rom = 8'd0;
      6'd8: w_beta_rom = 8'd0;
      6'd9: w_beta_rom = 8'd0;
      6'd10: w_beta_rom = 8'd0;
      6'd11: w_beta_rom = 8'd0;
      6'd12: w_beta_rom = 8'd0;
      6'd13: w_beta_rom = 8'd0;
      6'd14: w_beta_rom = 8'd0;
      6'd15: w_beta_rom = 8'd0;
      6'd16: w_beta_rom = 8'd6;
      6'd17: w_beta_rom = 8'd7;
      6'd18: w_beta_rom = 8'd8;
      6'd19: w_beta_rom = 8'd9;
      6'd20: w_beta_rom = 8'd10;
      6'd21: w_beta_rom = 8'd11;
      6'd22: w_beta_rom = 8'd12;
      6'd23: w_beta_rom = 8'd13;
      6'd24: w_beta_rom = 8'd14;
      6'd25: w_beta_rom = 8'd15;
      6'd26: w_beta_rom = 8'd16;
      6'd27: w_beta_rom = 8'd17;
      6'd28: w_beta_rom = 8'd18;
      6'd29: w_beta_rom = 8'd20;
      6'd30: w_beta_rom = 8'd22;
      6'd31: w_beta_rom = 8'd24;
      6'd32: w_beta_rom = 8'd26;
      6'd33: w_beta_rom = 8'd28;
      6'd34: w_beta_rom = 8'd30;
      6'd35: w_beta_rom = 8'd32;
      6'd36: w_beta_rom = 8'd34;
      6'd37: w_beta_rom = 8'd36;
      6'd38: w_beta_rom = 8'd38;
      6'd39: w_beta_rom = 8'd40;
      6'd40: w_beta_rom = 8'd42;
      6'd41: w_beta_rom = 8'd44;
      6'd42: w_beta_rom = 8'd46;
      6'd43: w_beta_rom = 8'd48;
      6'd44: w_beta_rom = 8'd50;
      6'd45: w_beta_rom = 8'd52;
      6'd46: w_beta_rom = 8'd54;
      6'd47: w_beta_rom = 8'd56;
      6'd48: w_beta_rom = 8'd58;
      6'd49: w_beta_rom = 8'd60;
      6'd50: w_beta_rom = 8'd62;
      6'd51: w_beta_rom = 8'd64;
      6'd52: w_beta_rom = 8'd66;
      6'd53: w_beta_rom = 8'd68;
      6'd54: w_beta_rom = 8'd70;
      6'd55: w_beta_rom = 8'd72;
      6'd56: w_beta_rom = 8'd74;
      6'd57: w_beta_rom = 8'd76;
      6'd58: w_beta_rom = 8'd78;
      6'd59: w_beta_rom = 8'd80;
      6'd60: w_beta_rom = 8'd82;
      6'd61: w_beta_rom = 8'd84;
      6'd62: w_beta_rom = 8'd86;
      6'd63: w_beta_rom = 8'd88;
      default: w_beta_rom = 8'd0;
    endcase
  end

  // VTM sm_tcTable already uses the 10-bit pixel scale (not multiplied by 4).
  always_comb begin
    w_tc_rom = 10'd0;
    unique casez (w_tc_index)
      7'd0: w_tc_rom = 10'd0;
      7'd1: w_tc_rom = 10'd0;
      7'd2: w_tc_rom = 10'd0;
      7'd3: w_tc_rom = 10'd0;
      7'd4: w_tc_rom = 10'd0;
      7'd5: w_tc_rom = 10'd0;
      7'd6: w_tc_rom = 10'd0;
      7'd7: w_tc_rom = 10'd0;
      7'd8: w_tc_rom = 10'd0;
      7'd9: w_tc_rom = 10'd0;
      7'd10: w_tc_rom = 10'd0;
      7'd11: w_tc_rom = 10'd0;
      7'd12: w_tc_rom = 10'd0;
      7'd13: w_tc_rom = 10'd0;
      7'd14: w_tc_rom = 10'd0;
      7'd15: w_tc_rom = 10'd0;
      7'd16: w_tc_rom = 10'd0;
      7'd17: w_tc_rom = 10'd0;
      7'd18: w_tc_rom = 10'd3;
      7'd19: w_tc_rom = 10'd4;
      7'd20: w_tc_rom = 10'd4;
      7'd21: w_tc_rom = 10'd4;
      7'd22: w_tc_rom = 10'd4;
      7'd23: w_tc_rom = 10'd5;
      7'd24: w_tc_rom = 10'd5;
      7'd25: w_tc_rom = 10'd5;
      7'd26: w_tc_rom = 10'd5;
      7'd27: w_tc_rom = 10'd7;
      7'd28: w_tc_rom = 10'd7;
      7'd29: w_tc_rom = 10'd8;
      7'd30: w_tc_rom = 10'd9;
      7'd31: w_tc_rom = 10'd10;
      7'd32: w_tc_rom = 10'd10;
      7'd33: w_tc_rom = 10'd11;
      7'd34: w_tc_rom = 10'd13;
      7'd35: w_tc_rom = 10'd14;
      7'd36: w_tc_rom = 10'd15;
      7'd37: w_tc_rom = 10'd17;
      7'd38: w_tc_rom = 10'd19;
      7'd39: w_tc_rom = 10'd21;
      7'd40: w_tc_rom = 10'd24;
      7'd41: w_tc_rom = 10'd25;
      7'd42: w_tc_rom = 10'd29;
      7'd43: w_tc_rom = 10'd33;
      7'd44: w_tc_rom = 10'd36;
      7'd45: w_tc_rom = 10'd41;
      7'd46: w_tc_rom = 10'd45;
      7'd47: w_tc_rom = 10'd51;
      7'd48: w_tc_rom = 10'd57;
      7'd49: w_tc_rom = 10'd64;
      7'd50: w_tc_rom = 10'd71;
      7'd51: w_tc_rom = 10'd80;
      7'd52: w_tc_rom = 10'd89;
      7'd53: w_tc_rom = 10'd100;
      7'd54: w_tc_rom = 10'd112;
      7'd55: w_tc_rom = 10'd125;
      7'd56: w_tc_rom = 10'd141;
      7'd57: w_tc_rom = 10'd157;
      7'd58: w_tc_rom = 10'd177;
      7'd59: w_tc_rom = 10'd198;
      7'd60: w_tc_rom = 10'd222;
      7'd61: w_tc_rom = 10'd250;
      7'd62: w_tc_rom = 10'd280;
      7'd63: w_tc_rom = 10'd314;
      7'd64: w_tc_rom = 10'd352;
      7'd65: w_tc_rom = 10'd395;
      default: w_tc_rom = 10'd0;
    endcase
  end

  // Process 1: state register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: next state.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (I_IN_VALID)
          w_next_state = ST_OUTPUT;
      end
      ST_OUTPUT: begin
        if (I_OUT_READY)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: control outputs. Registered payload is stable under stall.
  always_comb begin
    O_IN_READY  = (r_current_state == ST_IDLE);
    O_OUT_VALID = (r_current_state == ST_OUTPUT);
  end

  // Data registers are written only on input handshake; no reset is needed.
  always_ff @(posedge I_CLK) begin
    if (w_in_fire) begin
      r_qp_avg     <= w_qp_avg;
      r_index_beta <= w_beta_index;
      r_index_tc   <= w_tc_index;
      r_beta       <= w_legal ? {w_beta_rom, 2'b00} : 10'd0;
      r_tc         <= w_legal ? w_tc_rom : 10'd0;
      r_error      <= !w_legal;
    end
  end

  assign O_QP_AVG     = r_qp_avg;
  assign O_INDEX_BETA = r_index_beta;
  assign O_INDEX_TC   = r_index_tc;
  assign O_BETA       = r_beta;
  assign O_TC         = r_tc;
  assign O_ERROR      = r_error;
endmodule: DBF_THRESHOLD_GENERATOR
