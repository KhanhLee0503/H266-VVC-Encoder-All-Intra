//------------------------------------------------------------------------------
// Description: VVC baseline DBF filtering decision, one edge transaction
//              in flight. Two FD pair units examine 4 lanes; a combiner
//              uses endpoint lanes 0/3 for Y and 0/1 for Cb/Cr.
//              Luma: long decision -> fallback short -> NF/LSSF/LSNF.
//              Chroma: Sq==3 permits CLF else CSF (Fig. 2(d)).
//              dEP and dEQ are valid for LSNF only.
//              10-bit samples, YUV420, activity inputs from
//              DBF_SAMPLE_ACTIVITY_UNIT, thresholds from
//              DBF_THRESHOLD_GENERATOR. No window bypass logic here.
// Reference: Hou et al., IEEE TCSVT 2024, Fig. 2(a)-(d).
//------------------------------------------------------------------------------
`timescale 1ns/1ps
module DBF_FILTER_DECISION (
  input  logic              I_CLK,
  input  logic              I_RST_N,
  input  logic              I_IN_VALID,
  output logic              O_IN_READY,
  input  logic        [1:0] I_COMPONENT_ID, // 0:Y, 1:Cb, 2:Cr
  input  logic        [1:0] I_BS,
  input  logic        [2:0] I_SP,
  input  logic        [2:0] I_SQ,
  input  logic        [3:0] I_LANE_MASK,
  input  logic        [9:0] I_BETA,
  input  logic        [9:0] I_TC,
  input  logic              I_THRESHOLD_ERROR,
  input  logic              I_ACTIVITY_ERROR,
  input  logic       [63:0] I_DP_SHORT,
  input  logic       [63:0] I_DQ_SHORT,
  input  logic       [63:0] I_DP_LONG,
  input  logic       [63:0] I_DQ_LONG,
  input  logic       [63:0] I_SP_SHORT,
  input  logic       [63:0] I_SQ_SHORT,
  input  logic       [63:0] I_SP_LONG,
  input  logic       [63:0] I_SQ_LONG,
  input  logic       [63:0] I_BOUNDARY_GAP,
  output logic              O_OUT_VALID,
  input  logic              I_OUT_READY,
  output logic        [2:0] O_FILTER_MODE,
  output logic              O_DEP,
  output logic              O_DEQ,
  output logic        [8:0] O_CONDITION_FLAGS,
  output logic              O_ERROR
);
  localparam logic [2:0] MODE_NF   = 3'd0;
  localparam logic [2:0] MODE_LSNF = 3'd1;
  localparam logic [2:0] MODE_LSSF = 3'd2;
  localparam logic [2:0] MODE_LLF  = 3'd3;
  localparam logic [2:0] MODE_CSF  = 3'd4;
  localparam logic [2:0] MODE_CLF  = 3'd5;

  typedef enum logic {
    ST_IDLE   = 1'b0,
    ST_OUTPUT = 1'b1
  } state_t;
  state_t r_current_state;
  state_t w_next_state;

  logic [5:0] w_pair0_short;
  logic [5:0] w_pair0_long;
  logic [5:0] w_pair1_short;
  logic [5:0] w_pair1_long;
  logic [2:0] w_short_end0;
  logic [2:0] w_short_endn;
  logic [2:0] w_long_end0;
  logic [2:0] w_long_endn;
  logic [15:0] w_dp0_short, w_dpn_short, w_dq0_short, w_dqn_short;
  logic [15:0] w_dp0_long, w_dpn_long, w_dq0_long, w_dqn_long;
  logic [17:0] w_dsum_short;
  logic [17:0] w_dsum_long;
  logic [17:0] w_p_sum_short;
  logic [17:0] w_q_sum_short;
  logic [17:0] w_dep_threshold;
  logic [8:0] w_condition_short;
  logic [6:0] w_condition_long;
  logic       w_short_all;
  logic       w_long_all;
  logic       w_is_chroma;
  logic       w_legal;
  logic       w_in_fire;
  logic [2:0] w_mode;
  logic       w_dep;
  logic       w_deq;
  logic [8:0] w_condition_flags;
  logic       w_error;

  logic [2:0] r_mode;
  logic       r_dep;
  logic       r_deq;
  logic [8:0] r_condition_flags;
  logic       r_error;

  DBF_FD_PAIR_UNIT u_fd_pair_0 (
    .I_DP_SHORT     (I_DP_SHORT[31:0]),
    .I_DQ_SHORT     (I_DQ_SHORT[31:0]),
    .I_SP_SHORT     (I_SP_SHORT[31:0]),
    .I_SQ_SHORT     (I_SQ_SHORT[31:0]),
    .I_DP_LONG      (I_DP_LONG[31:0]),
    .I_DQ_LONG      (I_DQ_LONG[31:0]),
    .I_SP_LONG      (I_SP_LONG[31:0]),
    .I_SQ_LONG      (I_SQ_LONG[31:0]),
    .I_BOUNDARY_GAP (I_BOUNDARY_GAP[31:0]),
    .I_BETA         (I_BETA),
    .I_TC           (I_TC),
    .O_COND_SHORT   (w_pair0_short),
    .O_COND_LONG    (w_pair0_long)
  );

  DBF_FD_PAIR_UNIT u_fd_pair_1 (
    .I_DP_SHORT     (I_DP_SHORT[63:32]),
    .I_DQ_SHORT     (I_DQ_SHORT[63:32]),
    .I_SP_SHORT     (I_SP_SHORT[63:32]),
    .I_SQ_SHORT     (I_SQ_SHORT[63:32]),
    .I_DP_LONG      (I_DP_LONG[63:32]),
    .I_DQ_LONG      (I_DQ_LONG[63:32]),
    .I_SP_LONG      (I_SP_LONG[63:32]),
    .I_SQ_LONG      (I_SQ_LONG[63:32]),
    .I_BOUNDARY_GAP (I_BOUNDARY_GAP[63:32]),
    .I_BETA         (I_BETA),
    .I_TC           (I_TC),
    .O_COND_SHORT   (w_pair1_short),
    .O_COND_LONG    (w_pair1_long)
  );

  assign w_is_chroma = (I_COMPONENT_ID != 2'd0);
  assign w_legal = (I_COMPONENT_ID != 2'd3) &&
                   (I_LANE_MASK == (w_is_chroma ? 4'b0011 : 4'b1111)) &&
                   ((I_BS == 2'd0) || (I_BS == 2'd1) || (I_BS == 2'd2)) &&
                   ((I_SP == 3'd1) || (I_SP == 3'd3) ||
                    ((!w_is_chroma) && (I_SP == 3'd7))) &&
                   ((I_SQ == 3'd1) || (I_SQ == 3'd3) ||
                    ((!w_is_chroma) && (I_SQ == 3'd7))) &&
                   !I_THRESHOLD_ERROR && !I_ACTIVITY_ERROR;
  assign w_in_fire = I_IN_VALID && O_IN_READY;

  // Y uses endpoint lane 3; YUV420 Cb/Cr uses endpoint lane 1.
  assign w_short_end0 = w_pair0_short[2:0];
  assign w_short_endn = w_is_chroma ? w_pair0_short[5:3] : w_pair1_short[5:3];
  assign w_long_end0  = w_pair0_long[2:0];
  assign w_long_endn  = w_is_chroma ? w_pair0_long[5:3] : w_pair1_long[5:3];

  assign w_dp0_short = I_DP_SHORT[15:0];
  assign w_dpn_short = w_is_chroma ? I_DP_SHORT[31:16] : I_DP_SHORT[63:48];
  assign w_dq0_short = I_DQ_SHORT[15:0];
  assign w_dqn_short = w_is_chroma ? I_DQ_SHORT[31:16] : I_DQ_SHORT[63:48];
  assign w_dp0_long  = I_DP_LONG[15:0];
  assign w_dpn_long  = w_is_chroma ? I_DP_LONG[31:16] : I_DP_LONG[63:48];
  assign w_dq0_long  = I_DQ_LONG[15:0];
  assign w_dqn_long  = w_is_chroma ? I_DQ_LONG[31:16] : I_DQ_LONG[63:48];

  // C1, computed separately for short and long activities.
  assign w_dsum_short = {2'd0, w_dp0_short} + {2'd0, w_dpn_short} +
                        {2'd0, w_dq0_short} + {2'd0, w_dqn_short};
  assign w_dsum_long  = {2'd0, w_dp0_long} + {2'd0, w_dpn_long} +
                        {2'd0, w_dq0_long} + {2'd0, w_dqn_long};
  assign w_p_sum_short = {2'd0, w_dp0_short} + {2'd0, w_dpn_short};
  assign w_q_sum_short = {2'd0, w_dq0_short} + {2'd0, w_dqn_short};
  assign w_dep_threshold = ({8'd0, I_BETA} + ({8'd0, I_BETA} >> 1)) >> 3;

  // Condition bit mapping: bit 0 -> C1, ... bit 8 -> C9.
  assign w_condition_short[0] = w_dsum_short < {8'd0, I_BETA};
  assign w_condition_short[1] = w_short_end0[0];
  assign w_condition_short[2] = w_short_endn[0];
  assign w_condition_short[3] = w_short_end0[1];
  assign w_condition_short[4] = w_short_endn[1];
  assign w_condition_short[5] = w_short_end0[2];
  assign w_condition_short[6] = w_short_endn[2];
  assign w_condition_short[7] = w_p_sum_short < w_dep_threshold;
  assign w_condition_short[8] = w_q_sum_short < w_dep_threshold;

  assign w_condition_long[0] = w_dsum_long < {8'd0, I_BETA};
  assign w_condition_long[1] = w_long_end0[0];
  assign w_condition_long[2] = w_long_endn[0];
  assign w_condition_long[3] = w_long_end0[1];
  assign w_condition_long[4] = w_long_endn[1];
  assign w_condition_long[5] = w_long_end0[2];
  assign w_condition_long[6] = w_long_endn[2];

  assign w_short_all = &w_condition_short[6:1]; // C2...C7
  assign w_long_all  = &w_condition_long[6:0];  // C1...C7

  // Filter-mode selection follows Fig. 2 decision priorities.
  // Sp/Sq reflect the existing simplified Calculator baseline.
  always_comb begin
    w_mode            = MODE_NF;
    w_dep             = 1'b0;
    w_deq             = 1'b0;
    w_condition_flags = w_condition_short;
    w_error           = !w_legal;

    if (w_legal && (I_BS != 2'd0)) begin
      if (w_is_chroma) begin
        // Chroma Fig. 2(d): CSF fallback; CLF only when Sq==3 and C1...C7.
        if ((I_SQ == 3'd3) && w_condition_short[0] && w_short_all)
          w_mode = MODE_CLF;
        else
          w_mode = MODE_CSF;
      end
      else begin
        if (((I_SP > 3'd3) || (I_SQ > 3'd3)) && w_long_all) begin
          w_mode = MODE_LLF;
          w_condition_flags[6:0] = w_condition_long;
        end
        else if (w_condition_short[0]) begin
          if ((I_SP > 3'd2) && (I_SQ > 3'd2) && w_short_all)
            w_mode = MODE_LSSF;
          else begin
            w_mode = MODE_LSNF;
            w_dep = (I_SP > 3'd1) && (I_SQ > 3'd1) && w_condition_short[7];
            w_deq = (I_SP > 3'd1) && (I_SQ > 3'd1) && w_condition_short[8];
          end
        end
      end
    end
    if (!w_legal)
      w_condition_flags = 9'd0;
  end

  // Process 1: FSM state register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: FSM next-state logic.
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

  // Process 3: ready/valid output control.
  always_comb begin
    O_IN_READY  = (r_current_state == ST_IDLE);
    O_OUT_VALID = (r_current_state == ST_OUTPUT);
  end

  // Payload registers: output remains stable throughout a downstream stall.
  always_ff @(posedge I_CLK) begin
    if (w_in_fire) begin
      r_mode            <= w_mode;
      r_dep             <= w_dep;
      r_deq             <= w_deq;
      r_condition_flags <= w_condition_flags;
      r_error           <= w_error;
    end
  end

  assign O_FILTER_MODE     = r_mode;
  assign O_DEP             = r_dep;
  assign O_DEQ             = r_deq;
  assign O_CONDITION_FLAGS = r_condition_flags;
  assign O_ERROR           = r_error;
endmodule: DBF_FILTER_DECISION
