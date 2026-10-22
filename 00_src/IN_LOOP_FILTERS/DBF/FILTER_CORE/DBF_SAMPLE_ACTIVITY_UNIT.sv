//------------------------------------------------------------------------------
// Description: This unit computes VVC deblocking sample activities from
// a fixed 4x16 sample window. Four lane arithmetic datapaths operate in
// parallel. Chroma only enables lanes 0 and 1. Short and long activities
// are exported for the downstream pair-FD decision units and combiner.
// VTM correspondence: xCalcDP, xCalcDQ, xUseStrongFiltering.
// Limitations: No CTU-neighbor special-case activities. Full-window bypass
// is owned only by DBF_SAMPLE_WINDOW_READER. Input samples must be 10-bit
// zero-extended into the 16-bit containers.
//------------------------------------------------------------------------------
`timescale 1ns/1ps
module DBF_SAMPLE_ACTIVITY_UNIT (
  input  logic              I_CLK,
  input  logic              I_RST_N,
  input  logic              I_IN_VALID,
  output logic              O_IN_READY,
  input  logic        [1:0] I_COMPONENT_ID,
  input  logic        [2:0] I_SP,
  input  logic        [2:0] I_SQ,
  input  logic        [3:0] I_LANE_MASK,
  input  logic     [1023:0] I_WINDOW_DATA,
  output logic              O_OUT_VALID,
  input  logic              I_OUT_READY,
  output logic              O_ERROR,
  output logic       [63:0] O_DP_SHORT,
  output logic       [63:0] O_DQ_SHORT,
  output logic       [63:0] O_DP_LONG,
  output logic       [63:0] O_DQ_LONG,
  output logic       [63:0] O_SP_SHORT,
  output logic       [63:0] O_SQ_SHORT,
  output logic       [63:0] O_SP_LONG,
  output logic       [63:0] O_SQ_LONG,
  output logic       [63:0] O_BOUNDARY_GAP,
  output logic       [15:0] O_DP_SUM_SHORT,
  output logic       [15:0] O_DQ_SUM_SHORT,
  output logic       [15:0] O_D_SHORT,
  output logic       [15:0] O_D0_SHORT,
  output logic       [15:0] O_DN_SHORT,
  output logic       [15:0] O_DP_SUM_LONG,
  output logic       [15:0] O_DQ_SUM_LONG,
  output logic       [15:0] O_D_LONG,
  output logic       [15:0] O_D0_LONG,
  output logic       [15:0] O_DN_LONG
);
  typedef enum logic {
    ST_IDLE   = 1'b0,
    ST_OUTPUT = 1'b1
  } state_t;
  state_t r_current_state;
  state_t w_next_state;

  logic [63:0] r_dp_short;
  logic [63:0] r_dq_short;
  logic [63:0] r_dp_long;
  logic [63:0] r_dq_long;
  logic [63:0] r_sp_short;
  logic [63:0] r_sq_short;
  logic [63:0] r_sp_long;
  logic [63:0] r_sq_long;
  logic [63:0] r_boundary_gap;

  logic [63:0] w_dp_short;
  logic [63:0] w_dq_short;
  logic [63:0] w_dp_long;
  logic [63:0] w_dq_long;
  logic [63:0] w_sp_short;
  logic [63:0] w_sq_short;
  logic [63:0] w_sp_long;
  logic [63:0] w_sq_long;
  logic [63:0] w_boundary_gap;

  logic [15:0] r_dp_sum_short;
  logic [15:0] r_dq_sum_short;
  logic [15:0] r_d_short;
  logic [15:0] r_d0_short;
  logic [15:0] r_dn_short;
  logic [15:0] r_dp_sum_long;
  logic [15:0] r_dq_sum_long;
  logic [15:0] r_d_long;
  logic [15:0] r_d0_long;
  logic [15:0] r_dn_long;

  logic [15:0] w_dp_sum_short;
  logic [15:0] w_dq_sum_short;
  logic [15:0] w_d_short;
  logic [15:0] w_d0_short;
  logic [15:0] w_dn_short;
  logic [15:0] w_dp_sum_long;
  logic [15:0] w_dq_sum_long;
  logic [15:0] w_d_long;
  logic [15:0] w_d0_long;
  logic [15:0] w_dn_long;

  logic        r_error;
  logic        w_legal;
  logic        w_is_chroma;
  logic  [1:0] w_end_lane;
  logic        w_in_fire;

  assign w_is_chroma = (I_COMPONENT_ID != 2'd0);
  assign w_end_lane  = w_is_chroma ? 2'd1 : 2'd3;
  assign w_legal = (I_COMPONENT_ID != 2'd3) &&
                   (I_LANE_MASK == (w_is_chroma ? 4'b0011 : 4'b1111)) &&
                   ((I_SP == 3'd1) || (I_SP == 3'd3) ||
                    ((!w_is_chroma) && (I_SP == 3'd7))) &&
                   ((I_SQ == 3'd1) || (I_SQ == 3'd3) ||
                    ((!w_is_chroma) && (I_SQ == 3'd7)));
  assign w_in_fire = I_IN_VALID && O_IN_READY;

  // Four independent arithmetic datapaths. Each works on one lane (16 taps).
  for (genvar g = 0; g < 4; g++) begin: gen_activity_lane
    logic [9:0] w_p0, w_p1, w_p2, w_p3, w_p4, w_p5, w_p6, w_p7;
    logic [9:0] w_q0, w_q1, w_q2, w_q3, w_q4, w_q5, w_q6, w_q7;
    logic signed [12:0] w_dp_s, w_dq_s, w_dp_ext, w_dq_ext;
    logic signed [12:0] w_gap_signed;
    logic signed [12:0] w_sp_signed, w_sq_signed;
    logic signed [12:0] w_sp_ext_signed, w_sq_ext_signed;
    logic signed [12:0] w_sp_outer_signed, w_sq_outer_signed;
    logic [11:0] w_dp_base, w_dq_base, w_dp_far, w_dq_far;
    logic [11:0] w_sp_base, w_sq_base, w_sp_far, w_sq_far;
    logic [11:0] w_sp_outer, w_sq_outer, w_gap_abs;
    logic [15:0] w_dp_selected, w_dq_selected;
    logic [15:0] w_sp_selected, w_sq_selected;
    logic        w_lane_enable;

    assign w_lane_enable = w_legal && I_LANE_MASK[g];
    assign w_p7 = I_WINDOW_DATA[(g*16+0)*16 +: 10];
    assign w_p6 = I_WINDOW_DATA[(g*16+1)*16 +: 10];
    assign w_p5 = I_WINDOW_DATA[(g*16+2)*16 +: 10];
    assign w_p4 = I_WINDOW_DATA[(g*16+3)*16 +: 10];
    assign w_p3 = I_WINDOW_DATA[(g*16+4)*16 +: 10];
    assign w_p2 = I_WINDOW_DATA[(g*16+5)*16 +: 10];
    assign w_p1 = I_WINDOW_DATA[(g*16+6)*16 +: 10];
    assign w_p0 = I_WINDOW_DATA[(g*16+7)*16 +: 10];
    assign w_q0 = I_WINDOW_DATA[(g*16+8)*16 +: 10];
    assign w_q1 = I_WINDOW_DATA[(g*16+9)*16 +: 10];
    assign w_q2 = I_WINDOW_DATA[(g*16+10)*16 +: 10];
    assign w_q3 = I_WINDOW_DATA[(g*16+11)*16 +: 10];
    assign w_q4 = I_WINDOW_DATA[(g*16+12)*16 +: 10];
    assign w_q5 = I_WINDOW_DATA[(g*16+13)*16 +: 10];
    assign w_q6 = I_WINDOW_DATA[(g*16+14)*16 +: 10];
    assign w_q7 = I_WINDOW_DATA[(g*16+15)*16 +: 10];

    // VTM xCalcDP/Q: absolute second difference near the boundary.
    assign w_dp_s = $signed({3'b000, w_p2}) -
                    ($signed({3'b000, w_p1}) <<< 1) +
                    $signed({3'b000, w_p0});
    assign w_dq_s = $signed({3'b000, w_q0}) -
                    ($signed({3'b000, w_q1}) <<< 1) +
                    $signed({3'b000, w_q2});
    assign w_dp_ext = $signed({3'b000, w_p5}) -
                      ($signed({3'b000, w_p4}) <<< 1) +
                      $signed({3'b000, w_p3});
    assign w_dq_ext = $signed({3'b000, w_q3}) -
                      ($signed({3'b000, w_q4}) <<< 1) +
                      $signed({3'b000, w_q5});
    assign w_dp_base = (w_dp_s < 13'sd0) ? 12'(-w_dp_s) : 12'(w_dp_s);
    assign w_dq_base = (w_dq_s < 13'sd0) ? 12'(-w_dq_s) : 12'(w_dq_s);
    assign w_dp_far = (w_dp_ext < 13'sd0) ? 12'(-w_dp_ext) : 12'(w_dp_ext);
    assign w_dq_far = (w_dq_ext < 13'sd0) ? 12'(-w_dq_ext) : 12'(w_dq_ext);

    // Short and long activities for strong-filter decisions.
    assign w_sp_signed = $signed({3'b000, w_p3}) - $signed({3'b000, w_p0});
    assign w_sq_signed = $signed({3'b000, w_q3}) - $signed({3'b000, w_q0});
    assign w_sp_ext_signed = $signed({3'b000, w_p4}) -
                             $signed({3'b000, w_p5}) -
                             $signed({3'b000, w_p6}) +
                             $signed({3'b000, w_p7});
    assign w_sq_ext_signed = $signed({3'b000, w_q4}) -
                             $signed({3'b000, w_q5}) -
                             $signed({3'b000, w_q6}) +
                             $signed({3'b000, w_q7});
    assign w_sp_outer_signed = $signed({3'b000, w_p3}) - $signed({3'b000, w_p7});
    assign w_sq_outer_signed = $signed({3'b000, w_q7}) - $signed({3'b000, w_q3});
    assign w_gap_signed = $signed({3'b000, w_p0}) - $signed({3'b000, w_q0});

    assign w_sp_base = (w_sp_signed < 13'sd0) ? 12'(-w_sp_signed) : 12'(w_sp_signed);
    assign w_sq_base = (w_sq_signed < 13'sd0) ? 12'(-w_sq_signed) : 12'(w_sq_signed);
    assign w_sp_far = (w_sp_ext_signed < 13'sd0) ? 12'(-w_sp_ext_signed) : 12'(w_sp_ext_signed);
    assign w_sq_far = (w_sq_ext_signed < 13'sd0) ? 12'(-w_sq_ext_signed) : 12'(w_sq_ext_signed);
    assign w_sp_outer = (w_sp_outer_signed < 13'sd0) ? 12'(-w_sp_outer_signed) : 12'(w_sp_outer_signed);
    assign w_sq_outer = (w_sq_outer_signed < 13'sd0) ? 12'(-w_sq_outer_signed) : 12'(w_sq_outer_signed);
    assign w_gap_abs = (w_gap_signed < 13'sd0) ? 12'(-w_gap_signed) : 12'(w_gap_signed);

    // On the short side, long activity equals short activity.
    assign w_dp_selected = (I_SP == 3'd7) ?
                           (({4'b0000, w_dp_base} + {4'b0000, w_dp_far} + 16'd1) >> 1) :
                           {4'b0000, w_dp_base};
    assign w_dq_selected = (I_SQ == 3'd7) ?
                           (({4'b0000, w_dq_base} + {4'b0000, w_dq_far} + 16'd1) >> 1) :
                           {4'b0000, w_dq_base};
    assign w_sp_selected = (I_SP == 3'd7) ?
                           (({4'b0000, w_sp_base} + {4'b0000, w_sp_far} +
                             {4'b0000, w_sp_outer} + 16'd1) >> 1) :
                           {4'b0000, w_sp_base};
    assign w_sq_selected = (I_SQ == 3'd7) ?
                           (({4'b0000, w_sq_base} + {4'b0000, w_sq_far} +
                             {4'b0000, w_sq_outer} + 16'd1) >> 1) :
                           {4'b0000, w_sq_base};

    assign w_dp_short[g*16 +: 16] = w_lane_enable ? {4'b0000, w_dp_base} : 16'd0;
    assign w_dq_short[g*16 +: 16] = w_lane_enable ? {4'b0000, w_dq_base} : 16'd0;
    assign w_dp_long[g*16 +: 16] = w_lane_enable ? w_dp_selected : 16'd0;
    assign w_dq_long[g*16 +: 16] = w_lane_enable ? w_dq_selected : 16'd0;
    assign w_sp_short[g*16 +: 16] = w_lane_enable ? {4'b0000, w_sp_base} : 16'd0;
    assign w_sq_short[g*16 +: 16] = w_lane_enable ? {4'b0000, w_sq_base} : 16'd0;
    assign w_sp_long[g*16 +: 16] = w_lane_enable ? w_sp_selected : 16'd0;
    assign w_sq_long[g*16 +: 16] = w_lane_enable ? w_sq_selected : 16'd0;
    assign w_boundary_gap[g*16 +: 16] = w_lane_enable ? {4'b0000, w_gap_abs} : 16'd0;
  end

  // Endpoint lane is 3 for luma and 1 for YUV420 chroma.
  // All sums are <= 8184 for 10-bit source samples: 16 bits suffice.
  always_comb begin
    w_d0_short = w_dp_short[15:0] + w_dq_short[15:0];
    w_d0_long  = w_dp_long[15:0]  + w_dq_long[15:0];
    w_dn_short = w_dp_short[w_end_lane*16 +: 16] +
                 w_dq_short[w_end_lane*16 +: 16];
    w_dn_long  = w_dp_long[w_end_lane*16 +: 16] +
                 w_dq_long[w_end_lane*16 +: 16];
    w_dp_sum_short = w_dp_short[15:0] + w_dp_short[w_end_lane*16 +: 16];
    w_dq_sum_short = w_dq_short[15:0] + w_dq_short[w_end_lane*16 +: 16];
    w_dp_sum_long  = w_dp_long[15:0]  + w_dp_long[w_end_lane*16 +: 16];
    w_dq_sum_long  = w_dq_long[15:0]  + w_dq_long[w_end_lane*16 +: 16];
    w_d_short = w_d0_short + w_dn_short;
    w_d_long  = w_d0_long  + w_dn_long;
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

  // Process 3: handshake outputs.
  always_comb begin
    O_IN_READY  = (r_current_state == ST_IDLE);
    O_OUT_VALID = (r_current_state == ST_OUTPUT);
  end

  // No data reset. Output is meaningful only when O_OUT_VALID=1.
  always_ff @(posedge I_CLK) begin
    if (w_in_fire) begin
      r_error        <= !w_legal;
      r_dp_short     <= w_dp_short;
      r_dq_short     <= w_dq_short;
      r_dp_long      <= w_dp_long;
      r_dq_long      <= w_dq_long;
      r_sp_short     <= w_sp_short;
      r_sq_short     <= w_sq_short;
      r_sp_long      <= w_sp_long;
      r_sq_long      <= w_sq_long;
      r_boundary_gap <= w_boundary_gap;
      r_dp_sum_short <= w_dp_sum_short;
      r_dq_sum_short <= w_dq_sum_short;
      r_d_short      <= w_d_short;
      r_d0_short     <= w_d0_short;
      r_dn_short     <= w_dn_short;
      r_dp_sum_long  <= w_dp_sum_long;
      r_dq_sum_long  <= w_dq_sum_long;
      r_d_long       <= w_d_long;
      r_d0_long      <= w_d0_long;
      r_dn_long      <= w_dn_long;
    end
  end

  assign O_ERROR          = r_error;
  assign O_DP_SHORT       = r_dp_short;
  assign O_DQ_SHORT       = r_dq_short;
  assign O_DP_LONG        = r_dp_long;
  assign O_DQ_LONG        = r_dq_long;
  assign O_SP_SHORT       = r_sp_short;
  assign O_SQ_SHORT       = r_sq_short;
  assign O_SP_LONG        = r_sp_long;
  assign O_SQ_LONG        = r_sq_long;
  assign O_BOUNDARY_GAP   = r_boundary_gap;
  assign O_DP_SUM_SHORT   = r_dp_sum_short;
  assign O_DQ_SUM_SHORT   = r_dq_sum_short;
  assign O_D_SHORT        = r_d_short;
  assign O_D0_SHORT       = r_d0_short;
  assign O_DN_SHORT       = r_dn_short;
  assign O_DP_SUM_LONG    = r_dp_sum_long;
  assign O_DQ_SUM_LONG    = r_dq_sum_long;
  assign O_D_LONG         = r_d_long;
  assign O_D0_LONG        = r_d0_long;
  assign O_DN_LONG        = r_dn_long;
endmodule: DBF_SAMPLE_ACTIVITY_UNIT
