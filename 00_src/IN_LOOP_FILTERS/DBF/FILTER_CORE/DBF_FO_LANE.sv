//------------------------------------------------------------------------------
// Description: This module performs the VVC deblocking filtering operation
// for one lane of sixteen 10-bit samples held in 16-bit containers. It
// supports luma normal/strong/long and chroma short/long filter modes.
// The shared core instantiates four lanes in parallel (two for chroma).
// Exactly one input transaction is in flight until the output handshake.
// The three arithmetic stages are controlled by a three-process FSM.
// Full-window boundary checking belongs to the Sample Window Reader.
// Reference: Hou et al., IEEE TCSVT 2024, Figure 3(a)-(f).
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module DBF_FO_LANE (
  input               I_CLK,
  input               I_RST_N,
  input               I_IN_VALID,
  output logic        O_IN_READY,
  input         [1:0] I_COMPONENT_ID,
  input         [2:0] I_FILTER_MODE,
  input         [2:0] I_SP,
  input         [2:0] I_SQ,
  input               I_DEP,
  input               I_DEQ,
  input         [9:0] I_TC,
  input               I_LANE_ACTIVE,
  input       [255:0] I_LANE_DATA,
  output logic        O_OUT_VALID,
  input               I_OUT_READY,
  output logic [255:0] O_LANE_DATA,
  output logic  [15:0] O_SAMPLE_WRITE_MASK,
  output logic         O_ERROR
);
  localparam PARA_MODE_NF   = 3'd0;
  localparam PARA_MODE_LSNF = 3'd1;
  localparam PARA_MODE_LSSF = 3'd2;
  localparam PARA_MODE_LLF  = 3'd3;
  localparam PARA_MODE_CSF  = 3'd4;
  localparam PARA_MODE_CLF  = 3'd5;

  typedef enum logic [2:0] {
    ST_IDLE,
    ST_FO_1,
    ST_FO_2,
    ST_FO_3,
    ST_OUTPUT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [255:0] r_input_data;
  logic   [2:0] r_mode;
  logic   [2:0] r_sp;
  logic   [2:0] r_sq;
  logic         r_dep;
  logic         r_deq;
  logic   [9:0] r_tc;
  logic         r_active;
  logic         r_error;

  logic signed [23:0] w_p [0:7];
  logic signed [23:0] w_q [0:7];
  logic signed [23:0] w_ref_p;
  logic signed [23:0] w_ref_q;
  logic signed [23:0] w_ref_m;
  logic signed [23:0] w_ref_m_sum;
  logic signed [23:0] w_raw_delta;
  logic signed [23:0] w_delta;
  logic               w_delta_ok;
  logic signed [23:0] w_tc_ext;
  logic signed [23:0] w_tc10;

  logic signed [23:0] r_ref_p;
  logic signed [23:0] r_ref_q;
  logic signed [23:0] r_ref_m;
  logic signed [23:0] r_delta;
  logic               r_delta_ok;

  logic signed [23:0] w_candidate [0:15];
  logic signed [23:0] w_limit     [0:15];
  logic signed [23:0] r_candidate [0:15];
  logic signed [23:0] r_limit     [0:15];
  logic        [15:0] w_mask;
  logic        [15:0] r_mask;
  logic        [48:0] w_coef_p;
  logic        [48:0] w_coef_q;
  logic        [20:0] w_clip_p;
  logic        [20:0] w_clip_q;
  logic signed [23:0] w_delta_p1;
  logic signed [23:0] w_delta_q1;
  logic signed [23:0] w_half_tc;
  logic signed [23:0] w_fcoef;
  logic signed [23:0] w_ccoeff;
  logic signed [23:0] w_original;
  logic signed [23:0] w_clip_candidate;
  logic signed [23:0] w_clip_sample;
  logic        [255:0] w_output_data;
  logic         [15:0] w_output_mask;
  logic        [255:0] r_output_data;
  logic         [15:0] r_output_mask;

  logic               w_is_chroma;
  logic               w_length_legal;
  logic               w_mode_legal;
  logic               w_data_legal;
  logic               w_input_legal;
  logic               w_input_fire;
  logic               w_output_fire;

  for (genvar g = 0; g < 8; g++) begin: gen_sample_extract
    assign w_p[g] = $signed({14'd0, r_input_data[(7-g)*16 +: 10]});
    assign w_q[g] = $signed({14'd0, r_input_data[(8+g)*16 +: 10]});
  end

  assign w_is_chroma = (I_COMPONENT_ID != 2'd0);
  assign w_length_legal =
    ((I_SP == 3'd1) || (I_SP == 3'd3) ||
     ((!w_is_chroma) && (I_SP == 3'd7))) &&
    ((I_SQ == 3'd1) || (I_SQ == 3'd3) ||
     ((!w_is_chroma) && (I_SQ == 3'd7)));

  always_comb begin
    w_mode_legal = 1'b0;
    unique casez (I_FILTER_MODE)
      PARA_MODE_NF:   w_mode_legal = 1'b1;
      PARA_MODE_LSNF: w_mode_legal = !w_is_chroma;
      PARA_MODE_LSSF: w_mode_legal = !w_is_chroma &&
                                    (I_SP >= 3'd3) && (I_SQ >= 3'd3);
      PARA_MODE_LLF:  w_mode_legal = !w_is_chroma &&
                                    (I_SP >= 3'd3) && (I_SQ >= 3'd3) &&
                                    ((I_SP == 3'd7) || (I_SQ == 3'd7));
      PARA_MODE_CSF:  w_mode_legal = w_is_chroma;
      PARA_MODE_CLF:  w_mode_legal = w_is_chroma && (I_SQ == 3'd3) &&
                                    ((I_SP == 3'd1) || (I_SP == 3'd3));
      default:        w_mode_legal = 1'b0;
    endcase
  end

  always_comb begin
    w_data_legal = 1'b1;
    for (integer i = 0; i < 16; i++) begin
      if (I_LANE_DATA[i*16+10 +: 6] != 6'd0)
        w_data_legal = 1'b0;
    end
  end

  assign w_input_legal = (I_COMPONENT_ID != 2'd3) &&
                         w_length_legal && w_mode_legal &&
                         ((!I_LANE_ACTIVE) || w_data_legal);
  assign w_input_fire  = I_IN_VALID && O_IN_READY;
  assign w_output_fire = O_OUT_VALID && I_OUT_READY;

  // Stage FO-1 computes common deltas and reference samples.
  always_comb begin
    w_tc_ext    = $signed({14'd0, r_tc});
    w_tc10      = w_tc_ext * 24'sd10;
    w_ref_p     = 24'sd0;
    w_ref_q     = 24'sd0;
    w_ref_m     = 24'sd0;
    w_ref_m_sum = 24'sd0;
    w_raw_delta = 24'sd0;
    w_delta     = 24'sd0;
    w_delta_ok  = 1'b1;

    if (r_active && !r_error) begin
      unique casez (r_mode)
        PARA_MODE_LSNF: begin
          w_raw_delta = (24'sd9 * (w_q[0] - w_p[0]) -
                         24'sd3 * (w_q[1] - w_p[1]) + 24'sd8) >>> 4;
          w_delta_ok = (w_raw_delta < w_tc10) &&
                       (w_raw_delta > -w_tc10);
          if (w_raw_delta > w_tc_ext)
            w_delta = w_tc_ext;
          else if (w_raw_delta < -w_tc_ext)
            w_delta = -w_tc_ext;
          else
            w_delta = w_raw_delta;
        end
        PARA_MODE_CSF: begin
          w_raw_delta = (((w_q[0] - w_p[0]) <<< 2) +
                          w_p[1] - w_q[1] + 24'sd4) >>> 4;
          if (w_raw_delta > w_tc_ext)
            w_delta = w_tc_ext;
          else if (w_raw_delta < -w_tc_ext)
            w_delta = -w_tc_ext;
          else
            w_delta = w_raw_delta;
        end
        PARA_MODE_LLF: begin
          w_ref_p = (w_p[r_sp] + w_p[r_sp-3'd1] + 24'sd1) >>> 1;
          w_ref_q = (w_q[r_sq] + w_q[r_sq-3'd1] + 24'sd1) >>> 1;
          unique casez ({r_sp, r_sq})
            {3'd7, 3'd7}: begin
              w_ref_m_sum = 24'sd2 * (w_p[0] + w_q[0]) + 24'sd8;
              for (integer i = 1; i <= 6; i++)
                w_ref_m_sum = w_ref_m_sum + w_p[i] + w_q[i];
              w_ref_m = w_ref_m_sum >>> 4;
            end
            {3'd7, 3'd3}: begin
              w_ref_m_sum = 24'sd2 * w_p[0] + 24'sd8;
              for (integer i = 1; i <= 6; i++)
                w_ref_m_sum = w_ref_m_sum + w_p[i];
              for (integer i = 0; i <= 2; i++)
                w_ref_m_sum = w_ref_m_sum + 24'sd2 * w_q[i];
              w_ref_m_sum = w_ref_m_sum + w_q[0] + w_q[1];
              w_ref_m = w_ref_m_sum >>> 4;
            end
            {3'd3, 3'd7}: begin
              w_ref_m_sum = 24'sd2 * w_q[0] + 24'sd8;
              for (integer i = 1; i <= 6; i++)
                w_ref_m_sum = w_ref_m_sum + w_q[i];
              for (integer i = 0; i <= 2; i++)
                w_ref_m_sum = w_ref_m_sum + 24'sd2 * w_p[i];
              w_ref_m_sum = w_ref_m_sum + w_p[0] + w_p[1];
              w_ref_m = w_ref_m_sum >>> 4;
            end
            default: begin
              w_ref_m = 24'sd0;
            end
          endcase
        end
        default: begin
        end
      endcase
    end
  end

  // Coefficient vectors are ordered from the boundary outwards.
  always_comb begin
    w_coef_p = '0;
    w_coef_q = '0;
    w_clip_p = '0;
    w_clip_q = '0;

    if (r_sp == 3'd7) begin
      w_coef_p = {7'd5, 7'd14, 7'd23, 7'd32, 7'd41, 7'd50, 7'd59};
      w_clip_p = {3'd1, 3'd1, 3'd2, 3'd3, 3'd4, 3'd5, 3'd6};
    end
    else if (r_sp == 3'd3) begin
      w_coef_p[20:0] = {7'd11, 7'd32, 7'd53};
      w_clip_p[8:0]  = {3'd2, 3'd4, 3'd6};
    end

    if (r_sq == 3'd7) begin
      w_coef_q = {7'd5, 7'd14, 7'd23, 7'd32, 7'd41, 7'd50, 7'd59};
      w_clip_q = {3'd1, 3'd1, 3'd2, 3'd3, 3'd4, 3'd5, 3'd6};
    end
    else if (r_sq == 3'd3) begin
      w_coef_q[20:0] = {7'd11, 7'd32, 7'd53};
      w_clip_q[8:0]  = {3'd2, 3'd4, 3'd6};
    end
  end

  // Stage FO-2 calculates candidates and clipping limits for each tap.
  always_comb begin
    w_mask       = '0;
    w_delta_p1   = 24'sd0;
    w_delta_q1   = 24'sd0;
    w_half_tc    = $signed({14'd0, r_tc}) >>> 1;
    w_fcoef      = 24'sd0;
    w_ccoeff     = 24'sd0;
    for (integer i = 0; i < 16; i++) begin
      w_candidate[i] = $signed({14'd0, r_input_data[i*16 +: 10]});
      w_limit[i]     = 24'sd0;
    end

    if (r_active && !r_error) begin
      unique casez (r_mode)
        PARA_MODE_LSNF: begin
          if (r_delta_ok) begin
            w_candidate[7] = w_p[0] + r_delta;
            w_candidate[8] = w_q[0] - r_delta;
            w_limit[7]     = 24'sd2047;
            w_limit[8]     = 24'sd2047;
            w_mask[7]      = 1'b1;
            w_mask[8]      = 1'b1;
            if (r_dep) begin
              w_delta_p1 = (((w_p[2] + w_p[0] + 24'sd1) >>> 1) -
                            w_p[1] + r_delta) >>> 1;
              if (w_delta_p1 > w_half_tc)
                w_delta_p1 = w_half_tc;
              else if (w_delta_p1 < -w_half_tc)
                w_delta_p1 = -w_half_tc;
              w_candidate[6] = w_p[1] + w_delta_p1;
              w_limit[6]     = 24'sd2047;
              w_mask[6]      = 1'b1;
            end
            if (r_deq) begin
              w_delta_q1 = (((w_q[2] + w_q[0] + 24'sd1) >>> 1) -
                            w_q[1] - r_delta) >>> 1;
              if (w_delta_q1 > w_half_tc)
                w_delta_q1 = w_half_tc;
              else if (w_delta_q1 < -w_half_tc)
                w_delta_q1 = -w_half_tc;
              w_candidate[9] = w_q[1] + w_delta_q1;
              w_limit[9]     = 24'sd2047;
              w_mask[9]      = 1'b1;
            end
          end
        end
        PARA_MODE_CSF: begin
          w_candidate[7] = w_p[0] + r_delta;
          w_candidate[8] = w_q[0] - r_delta;
          w_limit[7]     = 24'sd2047;
          w_limit[8]     = 24'sd2047;
          w_mask[7]      = 1'b1;
          w_mask[8]      = 1'b1;
        end
        PARA_MODE_LSSF: begin
          w_candidate[7] = (w_p[2] + 24'sd2*w_p[1] + 24'sd2*w_p[0] +
                            24'sd2*w_q[0] + w_q[1] + 24'sd4) >>> 3;
          w_candidate[6] = (w_p[2] + w_p[1] + w_p[0] + w_q[0] + 24'sd2) >>> 2;
          w_candidate[5] = (24'sd2*w_p[3] + 24'sd3*w_p[2] + w_p[1] +
                            w_p[0] + w_q[0] + 24'sd4) >>> 3;
          w_candidate[8] = (w_q[2] + 24'sd2*w_q[1] + 24'sd2*w_q[0] +
                            24'sd2*w_p[0] + w_p[1] + 24'sd4) >>> 3;
          w_candidate[9] = (w_q[2] + w_q[1] + w_q[0] + w_p[0] + 24'sd2) >>> 2;
          w_candidate[10]= (24'sd2*w_q[3] + 24'sd3*w_q[2] + w_q[1] +
                            w_q[0] + w_p[0] + 24'sd4) >>> 3;
          w_limit[7] = 24'sd3*w_tc_ext;
          w_limit[8] = 24'sd3*w_tc_ext;
          w_limit[6] = 24'sd2*w_tc_ext;
          w_limit[9] = 24'sd2*w_tc_ext;
          w_limit[5] = w_tc_ext;
          w_limit[10]= w_tc_ext;
          w_mask[7:5]  = 3'b111;
          w_mask[10:8] = 3'b111;
        end
        PARA_MODE_LLF: begin
          for (integer i = 0; i < 7; i++) begin
            if (i < int'(r_sp)) begin
              w_fcoef = $signed({17'd0, w_coef_p[i*7 +: 7]});
              w_ccoeff= $signed({21'd0, w_clip_p[i*3 +: 3]});
              w_candidate[7-i] = r_ref_p +
                (((r_ref_m-r_ref_p)*w_fcoef + 24'sd32) >>> 6);
              w_limit[7-i] = (w_tc_ext*w_ccoeff) >>> 1;
              w_mask[7-i]  = 1'b1;
            end
            if (i < int'(r_sq)) begin
              w_fcoef = $signed({17'd0, w_coef_q[i*7 +: 7]});
              w_ccoeff= $signed({21'd0, w_clip_q[i*3 +: 3]});
              w_candidate[8+i] = r_ref_q +
                (((r_ref_m-r_ref_q)*w_fcoef + 24'sd32) >>> 6);
              w_limit[8+i] = (w_tc_ext*w_ccoeff) >>> 1;
              w_mask[8+i]  = 1'b1;
            end
          end
        end
        PARA_MODE_CLF: begin
          if (r_sp == 3'd3) begin
            w_candidate[7] = (w_p[3] + w_p[2] + w_p[1] + 24'sd2*w_p[0] +
                              w_q[0] + w_q[1] + w_q[2] + 24'sd4) >>> 3;
            w_candidate[6] = (24'sd2*w_p[3] + w_p[2] + 24'sd2*w_p[1] +
                              w_p[0] + w_q[0] + w_q[1] + 24'sd4) >>> 3;
            w_candidate[5] = (24'sd3*w_p[3] + 24'sd2*w_p[2] + w_p[1] +
                              w_p[0] + w_q[0] + 24'sd4) >>> 3;
            w_candidate[8] = (w_q[3] + w_q[2] + w_q[1] + 24'sd2*w_q[0] +
                              w_p[0] + w_p[1] + w_p[2] + 24'sd4) >>> 3;
            w_candidate[9] = (24'sd2*w_q[3] + w_q[2] + 24'sd2*w_q[1] +
                              w_q[0] + w_p[0] + w_p[1] + 24'sd4) >>> 3;
            w_candidate[10]= (24'sd3*w_q[3] + 24'sd2*w_q[2] + w_q[1] +
                              w_q[0] + w_p[0] + 24'sd4) >>> 3;
            w_mask[7:5] = 3'b111;
            w_mask[10:8]= 3'b111;
          end
          else begin
            // Asymmetric 1+3 chroma long filtering is not the 3+3
            // formula with disabled P taps; it uses separate weights.
            w_candidate[7] = (24'sd3*w_p[1] + 24'sd2*w_p[0] +
                              w_q[0] + w_q[1] + w_q[2] + 24'sd4) >>> 3;
            w_candidate[8] = (24'sd2*w_p[1] + w_p[0] + 24'sd2*w_q[0] +
                              w_q[1] + w_q[2] + w_q[3] + 24'sd4) >>> 3;
            w_candidate[9] = (w_p[1] + w_p[0] + w_q[0] +
                              24'sd2*w_q[1] + w_q[2] + 24'sd2*w_q[3] +
                              24'sd4) >>> 3;
            w_candidate[10]= (w_p[0] + w_q[0] + w_q[1] +
                              24'sd2*w_q[2] + 24'sd3*w_q[3] + 24'sd4) >>> 3;
            w_mask[7]    = 1'b1;
            w_mask[10:8]= 3'b111;
          end
          for (integer i = 0; i < 16; i++) begin
            if (w_mask[i])
              w_limit[i] = w_tc_ext;
          end
        end
        default: begin
        end
      endcase
    end
  end

  // Stage FO-3 clamps offsets around the original sample, then to 10 bits.
  always_comb begin
    w_output_data = r_input_data;
    w_output_mask = r_mask;
    w_original = 24'sd0;
    w_clip_candidate = 24'sd0;
    w_clip_sample = 24'sd0;
    for (integer i = 0; i < 16; i++) begin
      if (r_mask[i]) begin
        w_original = $signed({14'd0, r_input_data[i*16 +: 10]});
        w_clip_candidate = r_candidate[i];
        if (w_clip_candidate > (w_original + r_limit[i]))
          w_clip_candidate = w_original + r_limit[i];
        else if (w_clip_candidate < (w_original - r_limit[i]))
          w_clip_candidate = w_original - r_limit[i];

        if (w_clip_candidate < 24'sd0)
          w_clip_sample = 24'sd0;
        else if (w_clip_candidate > 24'sd1023)
          w_clip_sample = 24'sd1023;
        else
          w_clip_sample = w_clip_candidate;
        w_output_data[i*16 +: 16] = {6'd0, w_clip_sample[9:0]};
      end
    end
  end

  // Process 1: Store only the current FSM state.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: Calculate the next FSM state.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire)
          w_next_state = ST_FO_1;
      end
      ST_FO_1:   w_next_state = ST_FO_2;
      ST_FO_2:   w_next_state = ST_FO_3;
      ST_FO_3:   w_next_state = ST_OUTPUT;
      ST_OUTPUT: begin
        if (w_output_fire)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: Decode outputs from the current FSM state.
  always_comb begin
    O_IN_READY  = 1'b0;
    O_OUT_VALID = 1'b0;
    unique casez (r_current_state)
      ST_IDLE:   O_IN_READY  = 1'b1;
      ST_OUTPUT: O_OUT_VALID = 1'b1;
      default: begin
      end
    endcase
  end

  // Error status is reset because it is externally visible control state.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_error <= 1'b0;
    else if (w_input_fire)
      r_error <= !w_input_legal;
  end

  // Input and intermediate datapath registers are not reset. The FSM
  // prevents their observation before a valid output transaction exists.
  always_ff @(posedge I_CLK) begin
    if (w_input_fire) begin
      r_input_data <= I_LANE_DATA;
      r_mode       <= w_input_legal ? I_FILTER_MODE : PARA_MODE_NF;
      r_sp         <= I_SP;
      r_sq         <= I_SQ;
      r_dep        <= I_DEP;
      r_deq        <= I_DEQ;
      r_tc         <= I_TC;
      r_active     <= I_LANE_ACTIVE;
    end
    if (r_current_state == ST_FO_1) begin
      r_ref_p    <= w_ref_p;
      r_ref_q    <= w_ref_q;
      r_ref_m    <= w_ref_m;
      r_delta    <= w_delta;
      r_delta_ok <= w_delta_ok;
    end
    if (r_current_state == ST_FO_2) begin
      r_mask <= w_mask;
      for (integer i = 0; i < 16; i++) begin
        r_candidate[i] <= w_candidate[i];
        r_limit[i]     <= w_limit[i];
      end
    end
    if (r_current_state == ST_FO_3) begin
      r_output_data <= w_output_data;
      r_output_mask <= w_output_mask;
    end
  end

  assign O_LANE_DATA         = r_output_data;
  assign O_SAMPLE_WRITE_MASK = r_output_mask;
  assign O_ERROR             = r_error;
endmodule: DBF_FO_LANE
