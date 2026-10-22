//------------------------------------------------------------------------------
// Description: This wrapper executes one VVC deblocking edge at a time.
// It launches threshold and sample-activity units together, transfers their
// registered outputs atomically to the filter-decision unit, and launches
// four parallel filtering-operation lanes using one shared decision.
// A combinational output selector synchronizes the four FO output handshakes.
// Bypassed edges skip all calculation units and produce a zero-write result.
// This module does not read or write RAM and does not test window boundaries.
// All-Intra baseline: 10-bit samples in 16-bit containers, YUV 4:2:0.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module DBF_UNIFIED_FILTER_CORE (
  input                 I_CLK,
  input                 I_RST_N,
  input                 I_IN_VALID,
  output logic          O_IN_READY,
  input                 I_IN_BYPASS,
  input       [1023:0]  I_WINDOW_DATA,
  input         [11:0]  I_EDGE_ID,
  input          [8:0]  I_CTU_ID,
  input                 I_BANK,
  input          [1:0]  I_COMPONENT_ID,
  input                 I_DIRECTION,
  input          [7:0]  I_EDGE_X,
  input          [7:0]  I_EDGE_Y,
  input          [3:0]  I_LANE_MASK,
  input          [1:0]  I_BS,
  input          [2:0]  I_SP,
  input          [2:0]  I_SQ,
  input          [5:0]  I_QP_P,
  input          [5:0]  I_QP_Q,
  input  signed  [5:0]  I_BETA_OFFSET_DIV2,
  input  signed  [5:0]  I_TC_OFFSET_DIV2,
  output logic          O_RESULT_VALID,
  input                 I_RESULT_READY,
  output logic          O_RESULT_BYPASS,
  output logic [1023:0] O_FILTERED_WINDOW,
  output logic   [63:0] O_SAMPLE_WRITE_MASK,
  output logic   [11:0] O_RESULT_EDGE_ID,
  output logic    [8:0] O_RESULT_CTU_ID,
  output logic          O_RESULT_BANK,
  output logic    [1:0] O_RESULT_COMPONENT_ID,
  output logic          O_RESULT_DIRECTION,
  output logic    [7:0] O_RESULT_X,
  output logic    [7:0] O_RESULT_Y,
  output logic    [3:0] O_RESULT_LANE_MASK,
  output logic    [2:0] O_FILTER_MODE,
  output logic    [8:0] O_CONDITION_FLAGS,
  output logic          O_ERROR,
  output logic          O_BUSY
);
  localparam logic [2:0] PARA_MODE_NF = 3'd0;

  typedef enum logic [2:0] {
    ST_IDLE          = 3'd0,
    ST_PRIM_START    = 3'd1,
    ST_PRIM_WAIT     = 3'd2,
    ST_DECISION_WAIT = 3'd3,
    ST_FO_WAIT       = 3'd4,
    ST_BYPASS_OUTPUT = 3'd5
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [1023:0] r_window_data;
  logic   [11:0] r_edge_id;
  logic    [8:0] r_ctu_id;
  logic          r_bank;
  logic    [1:0] r_component_id;
  logic          r_direction;
  logic    [7:0] r_edge_x;
  logic    [7:0] r_edge_y;
  logic    [3:0] r_lane_mask;
  logic    [1:0] r_bs;
  logic    [2:0] r_sp;
  logic    [2:0] r_sq;
  logic    [5:0] r_qp_p;
  logic    [5:0] r_qp_q;
  logic signed [5:0] r_beta_offset_div2;
  logic signed [5:0] r_tc_offset_div2;

  logic    [9:0] r_tc;
  logic    [2:0] r_filter_mode;
  logic    [8:0] r_condition_flags;
  logic          r_decision_error;

  logic          w_input_fire;
  logic          w_primitive_start;
  logic          w_primitive_accept;
  logic          w_decision_accept;
  logic          w_fo_complete;
  logic          w_threshold_in_ready;
  logic          w_activity_in_ready;
  logic          w_decision_in_ready;
  logic    [3:0] w_fo_in_ready;
  logic    [3:0] w_fo_out_valid;
  logic    [3:0] w_fo_error;
  logic          w_threshold_in_valid;
  logic          w_activity_in_valid;
  logic          w_threshold_out_valid;
  logic          w_activity_out_valid;
  logic          w_primitive_out_ready;
  logic          w_decision_in_valid;
  logic          w_decision_out_valid;
  logic          w_decision_out_ready;
  logic          w_fo_in_valid;
  logic          w_fo_out_ready;
  logic          w_selector_result_valid;
  logic          w_selector_error;
  logic [1023:0] w_fo_data;
  logic   [63:0] w_fo_write_mask;
  logic [1023:0] w_selected_window;
  logic   [63:0] w_selected_write_mask;

  logic    [6:0] w_qp_avg_unused;
  logic    [5:0] w_beta_index_unused;
  logic    [6:0] w_tc_index_unused;
  logic    [9:0] w_beta;
  logic    [9:0] w_tc;
  logic          w_threshold_error;
  logic          w_activity_error;
  logic   [63:0] w_dp_short;
  logic   [63:0] w_dq_short;
  logic   [63:0] w_dp_long;
  logic   [63:0] w_dq_long;
  logic   [63:0] w_sp_short;
  logic   [63:0] w_sq_short;
  logic   [63:0] w_sp_long;
  logic   [63:0] w_sq_long;
  logic   [63:0] w_boundary_gap;
  logic   [15:0] w_dp_sum_short_unused;
  logic   [15:0] w_dq_sum_short_unused;
  logic   [15:0] w_d_short_unused;
  logic   [15:0] w_d0_short_unused;
  logic   [15:0] w_dn_short_unused;
  logic   [15:0] w_dp_sum_long_unused;
  logic   [15:0] w_dq_sum_long_unused;
  logic   [15:0] w_d_long_unused;
  logic   [15:0] w_d0_long_unused;
  logic   [15:0] w_dn_long_unused;
  logic    [2:0] w_decision_mode;
  logic          w_decision_dep;
  logic          w_decision_deq;
  logic    [8:0] w_decision_conditions;
  logic          w_decision_error;

  // Primitive inputs launch atomically and primitive outputs are consumed
  // together by the decision unit. No intermediate activity bus is stored.
  assign w_input_fire = I_IN_VALID && O_IN_READY;
  assign w_primitive_start = (r_current_state == ST_PRIM_START) &&
                             w_threshold_in_ready && w_activity_in_ready;
  assign w_threshold_in_valid = w_primitive_start;
  assign w_activity_in_valid  = w_primitive_start;
  assign w_primitive_accept = (r_current_state == ST_PRIM_WAIT) &&
                              w_threshold_out_valid && w_activity_out_valid &&
                              w_decision_in_ready;
  assign w_primitive_out_ready = (r_current_state == ST_PRIM_WAIT) &&
                                 w_threshold_out_valid && w_activity_out_valid &&
                                 w_decision_in_ready;
  assign w_decision_in_valid = (r_current_state == ST_PRIM_WAIT) &&
                               w_threshold_out_valid && w_activity_out_valid;

  // The four FO input handshakes occur on the same rising clock edge.
  assign w_decision_out_ready = (r_current_state == ST_DECISION_WAIT) &&
                                (&w_fo_in_ready);
  assign w_decision_accept = (r_current_state == ST_DECISION_WAIT) &&
                             w_decision_out_valid && (&w_fo_in_ready);
  assign w_fo_in_valid = w_decision_accept;

  assign w_fo_complete = (r_current_state == ST_FO_WAIT) &&
                         w_selector_result_valid && I_RESULT_READY;

  DBF_THRESHOLD_GENERATOR u_threshold (
    .I_CLK               (I_CLK),
    .I_RST_N             (I_RST_N),
    .I_IN_VALID          (w_threshold_in_valid),
    .O_IN_READY          (w_threshold_in_ready),
    .I_COMPONENT_ID      (r_component_id),
    .I_BS                (r_bs),
    .I_QP_P              (r_qp_p),
    .I_QP_Q              (r_qp_q),
    .I_BETA_OFFSET_DIV2  (r_beta_offset_div2),
    .I_TC_OFFSET_DIV2    (r_tc_offset_div2),
    .O_OUT_VALID         (w_threshold_out_valid),
    .I_OUT_READY         (w_primitive_out_ready),
    .O_QP_AVG            (w_qp_avg_unused),
    .O_INDEX_BETA        (w_beta_index_unused),
    .O_INDEX_TC          (w_tc_index_unused),
    .O_BETA              (w_beta),
    .O_TC                (w_tc),
    .O_ERROR             (w_threshold_error)
  );

  DBF_SAMPLE_ACTIVITY_UNIT u_activity (
    .I_CLK               (I_CLK),
    .I_RST_N             (I_RST_N),
    .I_IN_VALID          (w_activity_in_valid),
    .O_IN_READY          (w_activity_in_ready),
    .I_COMPONENT_ID      (r_component_id),
    .I_SP                (r_sp),
    .I_SQ                (r_sq),
    .I_LANE_MASK         (r_lane_mask),
    .I_WINDOW_DATA       (r_window_data),
    .O_OUT_VALID         (w_activity_out_valid),
    .I_OUT_READY         (w_primitive_out_ready),
    .O_ERROR             (w_activity_error),
    .O_DP_SHORT          (w_dp_short),
    .O_DQ_SHORT          (w_dq_short),
    .O_DP_LONG           (w_dp_long),
    .O_DQ_LONG           (w_dq_long),
    .O_SP_SHORT          (w_sp_short),
    .O_SQ_SHORT          (w_sq_short),
    .O_SP_LONG           (w_sp_long),
    .O_SQ_LONG           (w_sq_long),
    .O_BOUNDARY_GAP      (w_boundary_gap),
    .O_DP_SUM_SHORT      (w_dp_sum_short_unused),
    .O_DQ_SUM_SHORT      (w_dq_sum_short_unused),
    .O_D_SHORT           (w_d_short_unused),
    .O_D0_SHORT          (w_d0_short_unused),
    .O_DN_SHORT          (w_dn_short_unused),
    .O_DP_SUM_LONG       (w_dp_sum_long_unused),
    .O_DQ_SUM_LONG       (w_dq_sum_long_unused),
    .O_D_LONG            (w_d_long_unused),
    .O_D0_LONG           (w_d0_long_unused),
    .O_DN_LONG           (w_dn_long_unused)
  );

  DBF_FILTER_DECISION u_decision (
    .I_CLK               (I_CLK),
    .I_RST_N             (I_RST_N),
    .I_IN_VALID          (w_decision_in_valid),
    .O_IN_READY          (w_decision_in_ready),
    .I_COMPONENT_ID      (r_component_id),
    .I_BS                (r_bs),
    .I_SP                (r_sp),
    .I_SQ                (r_sq),
    .I_LANE_MASK         (r_lane_mask),
    .I_BETA              (w_beta),
    .I_TC                (w_tc),
    .I_THRESHOLD_ERROR   (w_threshold_error),
    .I_ACTIVITY_ERROR    (w_activity_error),
    .I_DP_SHORT          (w_dp_short),
    .I_DQ_SHORT          (w_dq_short),
    .I_DP_LONG           (w_dp_long),
    .I_DQ_LONG           (w_dq_long),
    .I_SP_SHORT          (w_sp_short),
    .I_SQ_SHORT          (w_sq_short),
    .I_SP_LONG           (w_sp_long),
    .I_SQ_LONG           (w_sq_long),
    .I_BOUNDARY_GAP      (w_boundary_gap),
    .O_OUT_VALID         (w_decision_out_valid),
    .I_OUT_READY         (w_decision_out_ready),
    .O_FILTER_MODE       (w_decision_mode),
    .O_DEP               (w_decision_dep),
    .O_DEQ               (w_decision_deq),
    .O_CONDITION_FLAGS   (w_decision_conditions),
    .O_ERROR             (w_decision_error)
  );

  for (genvar g = 0; g < 4; g++) begin: gen_fo_lane
    DBF_FO_LANE u_fo (
      .I_CLK               (I_CLK),
      .I_RST_N             (I_RST_N),
      .I_IN_VALID          (w_fo_in_valid),
      .O_IN_READY          (w_fo_in_ready[g]),
      .I_COMPONENT_ID      (r_component_id),
      .I_FILTER_MODE       (w_decision_mode),
      .I_SP                (r_sp),
      .I_SQ                (r_sq),
      .I_DEP               (w_decision_dep),
      .I_DEQ               (w_decision_deq),
      .I_TC                (r_tc),
      .I_LANE_ACTIVE       (r_lane_mask[g]),
      .I_LANE_DATA         (r_window_data[g*256 +: 256]),
      .O_OUT_VALID         (w_fo_out_valid[g]),
      .I_OUT_READY         (w_fo_out_ready),
      .O_LANE_DATA         (w_fo_data[g*256 +: 256]),
      .O_SAMPLE_WRITE_MASK (w_fo_write_mask[g*16 +: 16]),
      .O_ERROR             (w_fo_error[g])
    );
  end

  DBF_OUTPUT_SELECTOR u_selector (
    .I_FO_VALID          (w_fo_out_valid),
    .O_FO_READY          (w_fo_out_ready),
    .I_FO_DATA           (w_fo_data),
    .I_FO_WRITE_MASK     (w_fo_write_mask),
    .I_FO_ERROR          (w_fo_error),
    .I_LANE_MASK         (r_lane_mask),
    .O_RESULT_VALID      (w_selector_result_valid),
    .I_RESULT_READY      (I_RESULT_READY && (r_current_state == ST_FO_WAIT)),
    .O_FILTERED_WINDOW   (w_selected_window),
    .O_SAMPLE_WRITE_MASK (w_selected_write_mask),
    .O_ERROR             (w_selector_error)
  );

  // Process 1: current-state register only.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: FSM next-state decisions only.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (I_IN_VALID) begin
          if (I_IN_BYPASS)
            w_next_state = ST_BYPASS_OUTPUT;
          else
            w_next_state = ST_PRIM_START;
        end
      end
      ST_PRIM_START: begin
        if (w_primitive_start)
          w_next_state = ST_PRIM_WAIT;
      end
      ST_PRIM_WAIT: begin
        if (w_primitive_accept)
          w_next_state = ST_DECISION_WAIT;
      end
      ST_DECISION_WAIT: begin
        if (w_decision_accept)
          w_next_state = ST_FO_WAIT;
      end
      ST_FO_WAIT: begin
        if (w_fo_complete)
          w_next_state = ST_IDLE;
      end
      ST_BYPASS_OUTPUT: begin
        if (I_RESULT_READY)
          w_next_state = ST_IDLE;
      end
      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // Process 3: outputs, with safe defaults for every state.
  always_comb begin
    O_IN_READY          = 1'b0;
    O_RESULT_VALID      = 1'b0;
    O_RESULT_BYPASS     = 1'b0;
    O_FILTERED_WINDOW   = '0;
    O_SAMPLE_WRITE_MASK = '0;
    O_ERROR             = 1'b0;
    O_BUSY              = 1'b1;

    unique casez (r_current_state)
      ST_IDLE: begin
        O_IN_READY = 1'b1;
        O_BUSY     = 1'b0;
      end
      ST_FO_WAIT: begin
        O_RESULT_VALID      = w_selector_result_valid;
        O_FILTERED_WINDOW   = w_selected_window;
        O_SAMPLE_WRITE_MASK = r_decision_error ? 64'd0 : w_selected_write_mask;
        O_ERROR             = w_selector_result_valid &&
                              (r_decision_error || w_selector_error);
      end
      ST_BYPASS_OUTPUT: begin
        O_RESULT_VALID    = 1'b1;
        O_RESULT_BYPASS   = 1'b1;
        O_FILTERED_WINDOW = r_window_data;
      end
      default: begin
      end
    endcase
  end

  // Context status is reset; large sample storage is valid-qualified.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_filter_mode      <= PARA_MODE_NF;
      r_condition_flags  <= '0;
      r_decision_error   <= 1'b0;
    end
    else if (w_input_fire) begin
      r_filter_mode      <= PARA_MODE_NF;
      r_condition_flags  <= '0;
      r_decision_error   <= 1'b0;
    end
    else if (w_decision_accept) begin
      r_filter_mode      <= w_decision_mode;
      r_condition_flags  <= w_decision_conditions;
      r_decision_error   <= w_decision_error;
    end
  end

  // Transaction context remains unchanged until the output handshake.
  always_ff @(posedge I_CLK) begin
    if (w_input_fire) begin
      r_window_data      <= I_WINDOW_DATA;
      r_edge_id          <= I_EDGE_ID;
      r_ctu_id           <= I_CTU_ID;
      r_bank             <= I_BANK;
      r_component_id     <= I_COMPONENT_ID;
      r_direction        <= I_DIRECTION;
      r_edge_x           <= I_EDGE_X;
      r_edge_y           <= I_EDGE_Y;
      r_lane_mask        <= I_LANE_MASK;
      r_bs               <= I_BS;
      r_sp               <= I_SP;
      r_sq               <= I_SQ;
      r_qp_p             <= I_QP_P;
      r_qp_q             <= I_QP_Q;
      r_beta_offset_div2 <= I_BETA_OFFSET_DIV2;
      r_tc_offset_div2   <= I_TC_OFFSET_DIV2;
    end
    if (w_primitive_accept)
      r_tc <= w_tc;
  end

  assign O_RESULT_EDGE_ID      = r_edge_id;
  assign O_RESULT_CTU_ID       = r_ctu_id;
  assign O_RESULT_BANK         = r_bank;
  assign O_RESULT_COMPONENT_ID = r_component_id;
  assign O_RESULT_DIRECTION    = r_direction;
  assign O_RESULT_X            = r_edge_x;
  assign O_RESULT_Y            = r_edge_y;
  assign O_RESULT_LANE_MASK    = r_lane_mask;
  assign O_FILTER_MODE         = r_filter_mode;
  assign O_CONDITION_FLAGS     = r_condition_flags;
endmodule: DBF_UNIFIED_FILTER_CORE
