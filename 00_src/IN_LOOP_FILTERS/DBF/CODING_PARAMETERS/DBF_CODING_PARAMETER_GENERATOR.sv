//------------------------------------------------------------------------------
// Module      : DBF_CODING_PARAMETER_GENERATOR
// Description : Integration wrapper for DBF metadata collection, two-bank
//               spatial-grid RAM, boundary-driven edge scheduling, and
//               Y/Cb/Cr edge parameter calculation.
//
// Scope:
//   - All-Intra 4:2:0, shared Y CU/TU partition, one logical TU/Leaf CU.
//   - Internal CTU CU boundaries only; no neighbor CTU edges.
//   - Six passes: Y/Cb/Cr vertical, then Y/Cb/Cr horizontal.
//   - Chroma QP input must be pre-mapped and constant for each CTU.
//   - A collection request leases an explicitly chosen FREE metadata bank.
//   - A scan request is accepted only for a COMPLETE, unscanned bank, after
//     the external controller ensures the matching input samples are ready.
//   - One scan context at a time, six automatic component/direction passes.
//   - SCAN_DONE means all candidate decisions and qualified descriptor
//     output handshakes are complete; it is NOT FILTER_DONE.
//   - A bank remains leased until the external DBF controller asserts RELEASE
//     after the downstream filter has finished with the CTU.
//
// All submodule interfaces are reused unchanged.
//------------------------------------------------------------------------------
module DBF_CODING_PARAMETER_GENERATOR (
  input               I_CLK,
  input               I_RST_N,

  // CTU metadata collection / bank allocation.
  input               I_CTU_START_VALID,
  output logic        O_CTU_START_READY,
  input               I_CTU_BANK,
  input         [8:0] I_CTU_ID,
  input         [5:0] I_CTU_QP,
  input         [5:0] I_CTU_QP_CB, // pre-mapped Cb QP
  input         [5:0] I_CTU_QP_CR, // pre-mapped Cr QP
  input         [7:0] I_CTU_VALID_WIDTH,
  input         [7:0] I_CTU_VALID_HEIGHT,
  input               I_CTU_DBF_ENABLE,

  // Existing Partition Engine Leaf descriptor stream.
  input               I_LEAF_VALID,
  output logic        O_LEAF_READY,
  input         [8:0] I_LEAF_CTU_ID,
  input         [7:0] I_LEAF_CU_ID,
  input         [4:0] I_LEAF_X_UNIT,
  input         [4:0] I_LEAF_Y_UNIT,
  input         [2:0] I_LEAF_WIDTH_CODE,
  input         [2:0] I_LEAF_HEIGHT_CODE,
  input               I_CTU_METADATA_DONE,
  input         [8:0] I_DONE_CTU_ID,

  // Metadata bank status: index 0 is bit 0, index 1 is bit 1.
  output logic  [1:0] O_BANK_BUSY,
  output logic  [1:0] O_METADATA_READY,
  output logic  [1:0] O_BANK_SCAN_FINISHED,

  // An external controller starts scanning only after IN_LOOP_INPUT_BUFFER
  // has prefetched samples of the matching CTU.
  input               I_SCAN_START_VALID,
  output logic        O_SCAN_START_READY,
  input               I_SCAN_BANK,
  input         [8:0] I_SCAN_CTU_ID,

  // Qualified Y/Cb/Cr descriptors (one stream; direction/component tagged).
  output logic        O_PARAM_VALID,
  input               I_PARAM_READY,
  output logic [11:0] O_PARAM_EDGE_ID,
  output logic  [8:0] O_PARAM_CTU_ID,
  output logic        O_PARAM_BANK,
  output logic  [1:0] O_PARAM_COMPONENT_ID,
  output logic        O_PARAM_DIRECTION,
  output logic  [7:0] O_PARAM_X,
  output logic  [7:0] O_PARAM_Y,
  output logic  [3:0] O_PARAM_LANE_MASK,
  output logic  [1:0] O_PARAM_BS,
  output logic  [2:0] O_PARAM_SP,
  output logic  [2:0] O_PARAM_SQ,
  output logic  [5:0] O_PARAM_QP_P,
  output logic  [5:0] O_PARAM_QP_Q,

  // Both scheduler passes and the calculator have drained.
  output logic        O_SCAN_DONE_VALID,
  input               I_SCAN_DONE_READY,
  output logic  [8:0] O_SCAN_DONE_CTU_ID,
  output logic        O_SCAN_DONE_BANK,

  // Filter controller releases metadata only AFTER actual DBF filtering.
  input               I_BANK_RELEASE_VALID,
  output logic        O_BANK_RELEASE_READY,
  input               I_BANK_RELEASE_BANK,
  input         [8:0] I_BANK_RELEASE_CTU_ID,

  // Sticky submodule error; reset required for recovery.
  output logic        O_ERROR_VALID,
  output logic  [1:0] O_ERROR_SOURCE,
  output logic  [2:0] O_ERROR_CODE
);

  typedef enum logic [2:0] {
    ST_IDLE      = 3'd0,
    ST_PASS_REQ  = 3'd1,
    ST_PASS_RUN  = 3'd2,
    ST_SCAN_DONE = 3'd3,
    ST_ERROR     = 3'd4
  } state_t;

  state_t r_current_state;
  state_t w_next_state;
  logic [2:0] r_pass_index;  // 0..2 V Y/Cb/Cr; 3..5 H Y/Cb/Cr

  // Two entries, implemented as registers; DATA RAM arrays live in the RAM
  // submodule and are never reset by this wrapper.
  logic [1:0] r_bank_busy;
  logic [1:0] r_metadata_ready;
  logic [1:0] r_bank_scan_finished;
  logic [8:0] r_bank_ctu_id [0:1];
  logic [7:0] r_bank_width  [0:1];
  logic [7:0] r_bank_height [0:1];
  logic       r_bank_dbf_en [0:1];
  logic [5:0] r_bank_qp_cb [0:1];
  logic [5:0] r_bank_qp_cr [0:1];

  logic       r_scan_bank;
  logic [8:0] r_scan_ctu_id;
  logic [7:0] r_scan_width;
  logic [7:0] r_scan_height;
  logic       r_scan_dbf_en;
  logic [5:0] r_scan_qp_cb;
  logic [5:0] r_scan_qp_cr;

  logic       w_collect_start_fire;
  logic       w_collection_complete_fire;
  logic       w_scan_start_fire;
  logic       w_scan_launch_fire;
  logic       w_pass_done_fire;
  logic       w_top_scan_done_fire;
  logic       w_bank_release_fire;
  logic       w_any_error;
  logic       w_context_error;

  // Collector <-> RAM (write channel).
  logic        w_col_start_valid;
  logic        w_col_start_ready;
  logic        w_col_leaf_ready;
  logic        w_col_wr_en;
  logic        w_col_wr_bank;
  logic  [9:0] w_col_wr_addr;
  logic [31:0] w_col_wr_data;
  logic        w_col_wr_entry_valid;
  logic        w_col_complete_valid;
  logic        w_col_complete_bank;
  logic  [8:0] w_col_complete_id;
  logic        w_col_error_valid;
  logic  [2:0] w_col_error_code;

  // Scheduler <-> RAM (read channel).
  logic        w_sched_start_valid;
  logic        w_sched_start_ready;
  logic        w_sched_direction;
  logic  [1:0] w_sched_component_id;
  logic        w_ram_rd_en;
  logic        w_ram_rd_bank;
  logic  [9:0] w_ram_rd_addr;
  logic        w_ram_rd_resp_valid;
  logic        w_ram_rd_entry_valid;
  logic [31:0] w_ram_rd_data;

  // Scheduler <-> Calculator (candidate channel).
  logic        w_edge_valid;
  logic        w_edge_ready;
  logic [11:0] w_edge_id;
  logic  [8:0] w_edge_ctu_id;
  logic        w_edge_bank;
  logic  [1:0] w_edge_component_id;
  logic        w_edge_direction;
  logic  [7:0] w_edge_x;
  logic  [7:0] w_edge_y;
  logic  [3:0] w_edge_lane_mask;
  logic [31:0] w_edge_meta_p;
  logic [31:0] w_edge_meta_q;

  logic        w_sched_done_valid;
  logic        w_sched_done_ready;
  logic        w_sched_error_valid;
  logic  [2:0] w_sched_error_code;

  // An unexpected metadata completion must not corrupt the scan context.
  assign w_context_error = w_col_complete_valid &&
                           (!r_bank_busy[w_col_complete_bank] ||
                            (r_bank_ctu_id[w_col_complete_bank] !=
                             w_col_complete_id));
  assign w_any_error = w_col_error_valid || w_sched_error_valid ||
                       w_context_error;

  // An allocated bank cannot be reused before actual filtering finishes.
  assign O_BANK_BUSY          = r_bank_busy;
  assign O_METADATA_READY     = r_metadata_ready;
  assign O_BANK_SCAN_FINISHED = r_bank_scan_finished;

  assign O_CTU_START_READY = w_col_start_ready &&
                             !r_bank_busy[I_CTU_BANK] && !w_any_error;
  assign w_col_start_valid = I_CTU_START_VALID &&
                             !r_bank_busy[I_CTU_BANK] && !w_any_error;
  assign w_collect_start_fire = I_CTU_START_VALID && O_CTU_START_READY;

  // Collection completion is consumed internally; READY is never blocked by
  // the scan FSM.  The collector can refill the other bank during scanning.
  assign w_collection_complete_fire = w_col_complete_valid;

  // A scan request is explicit to avoid starting before the matching sample
  // prefetch has completed.  Repeated scans of the same leased bank disallowed.
  assign O_SCAN_START_READY = (r_current_state == ST_IDLE) &&
                              r_bank_busy[I_SCAN_BANK] &&
                              r_metadata_ready[I_SCAN_BANK] &&
                              !r_bank_scan_finished[I_SCAN_BANK] &&
                              (r_bank_ctu_id[I_SCAN_BANK] == I_SCAN_CTU_ID) &&
                              !w_any_error;
  assign w_scan_start_fire = I_SCAN_START_VALID && O_SCAN_START_READY;

  assign w_scan_launch_fire  = w_sched_start_valid && w_sched_start_ready;

  // SCHEDULER.DONE only means its last candidate was accepted.  The
  // CALCULATOR may still be evaluating that candidate or holding its output.
  // A safe pass drain requires the calculator to return to its IDLE/READY
  // state.  Qualified outputs are accepted by I_PARAM_READY before this.
  assign w_pass_done_fire = w_sched_done_valid && w_sched_done_ready;

  assign O_SCAN_DONE_CTU_ID = r_scan_ctu_id;
  assign O_SCAN_DONE_BANK = r_scan_bank;
  assign w_top_scan_done_fire = O_SCAN_DONE_VALID && I_SCAN_DONE_READY;

  // Only the external FILTER_DONE path may authorize release.  Scan-Done
  // acknowledgement must precede release.  Other bank may scan concurrently
  // with release of an already completed bank.
  assign O_BANK_RELEASE_READY = r_bank_busy[I_BANK_RELEASE_BANK] &&
                                r_bank_scan_finished[I_BANK_RELEASE_BANK] &&
                                (r_bank_ctu_id[I_BANK_RELEASE_BANK] ==
                                 I_BANK_RELEASE_CTU_ID) && !w_any_error;
  assign w_bank_release_fire = I_BANK_RELEASE_VALID && O_BANK_RELEASE_READY;

  // FSM process 1: state register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // FSM process 2: transition logic. Every pass is acknowledged only once
  // the scheduler finished AND the calculator returned to idle/ready.
  always_comb begin
    w_next_state = r_current_state;
    if (w_any_error) begin
      w_next_state = ST_ERROR;
    end else begin
      unique casez (r_current_state)
        ST_IDLE: begin
          if (w_scan_start_fire)
            w_next_state = ST_PASS_REQ;
        end
        ST_PASS_REQ: begin
          if (w_scan_launch_fire)
            w_next_state = ST_PASS_RUN;
        end
        ST_PASS_RUN: begin
          if (w_pass_done_fire)
            w_next_state = (r_pass_index == 3'd5) ? ST_SCAN_DONE : ST_PASS_REQ;
        end
        ST_SCAN_DONE: begin
          if (w_top_scan_done_fire)
            w_next_state = ST_IDLE;
        end
        ST_ERROR: begin
          w_next_state = ST_ERROR;
        end
        default: begin
          w_next_state = ST_ERROR;
        end
      endcase
    end
  end

  // FSM process 3: output/control decode with safe defaults.
  always_comb begin
    w_sched_start_valid  = 1'b0;
    w_sched_direction    = (r_pass_index >= 3'd3);
    w_sched_component_id = 2'd0;
    w_sched_done_ready   = 1'b0;
    O_SCAN_DONE_VALID    = 1'b0;
    O_ERROR_VALID        = 1'b0;
    O_ERROR_SOURCE       = 2'd0;
    O_ERROR_CODE         = 3'd0;

    unique case (r_pass_index)
      3'd1, 3'd4: w_sched_component_id = 2'd1;
      3'd2, 3'd5: w_sched_component_id = 2'd2;
      default:    w_sched_component_id = 2'd0;
    endcase

    unique casez (r_current_state)
      ST_PASS_REQ: begin
        w_sched_start_valid = !w_any_error;
      end
      ST_PASS_RUN: begin
        w_sched_done_ready = w_sched_done_valid && w_edge_ready &&
                             !w_any_error;
      end
      ST_SCAN_DONE: begin
        O_SCAN_DONE_VALID = 1'b1;
      end
      default: begin
      end
    endcase

    if (w_col_error_valid) begin
      O_ERROR_VALID  = 1'b1;
      O_ERROR_SOURCE = 2'd1;
      O_ERROR_CODE   = w_col_error_code;
    end else if (w_sched_error_valid) begin
      O_ERROR_VALID  = 1'b1;
      O_ERROR_SOURCE = 2'd2;
      O_ERROR_CODE   = w_sched_error_code;
    end else if (w_context_error) begin
      O_ERROR_VALID  = 1'b1;
      O_ERROR_SOURCE = 2'd3;
      O_ERROR_CODE   = 3'd1;
    end else if (r_current_state == ST_ERROR) begin
      O_ERROR_VALID  = 1'b1;
      O_ERROR_SOURCE = 2'd3;
      O_ERROR_CODE   = 3'd7;
    end
  end

  // Scan pass index increments after each drained pass.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_pass_index <= 3'd0;
    end else if (w_scan_start_fire) begin
      r_pass_index <= 3'd0;
    end else if (w_pass_done_fire && (r_pass_index != 3'd5)) begin
      r_pass_index <= r_pass_index + 3'd1;
    end
  end

  // Bank ownership and latched CTU context.  Two small context entries are
  // resettable registers, not inferred sample/metadata RAM arrays.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_bank_busy          <= 2'b00;
      r_metadata_ready     <= 2'b00;
      r_bank_scan_finished <= 2'b00;
      r_bank_ctu_id[0]     <= 9'd0;
      r_bank_ctu_id[1]     <= 9'd0;
      r_bank_width[0]      <= 8'd0;
      r_bank_width[1]      <= 8'd0;
      r_bank_height[0]     <= 8'd0;
      r_bank_height[1]     <= 8'd0;
      r_bank_dbf_en[0]     <= 1'b0;
      r_bank_dbf_en[1]     <= 1'b0;
      r_bank_qp_cb[0]      <= 6'd0;
      r_bank_qp_cb[1]      <= 6'd0;
      r_bank_qp_cr[0]      <= 6'd0;
      r_bank_qp_cr[1]      <= 6'd0;
    end else begin
      if (w_collect_start_fire) begin
        r_bank_busy[I_CTU_BANK]          <= 1'b1;
        r_metadata_ready[I_CTU_BANK]     <= 1'b0;
        r_bank_scan_finished[I_CTU_BANK] <= 1'b0;
        r_bank_ctu_id[I_CTU_BANK]        <= I_CTU_ID;
        r_bank_width[I_CTU_BANK]         <= I_CTU_VALID_WIDTH;
        r_bank_height[I_CTU_BANK]        <= I_CTU_VALID_HEIGHT;
        r_bank_dbf_en[I_CTU_BANK]        <= I_CTU_DBF_ENABLE;
        r_bank_qp_cb[I_CTU_BANK]         <= I_CTU_QP_CB;
        r_bank_qp_cr[I_CTU_BANK]         <= I_CTU_QP_CR;
      end

      if (w_collection_complete_fire)
        r_metadata_ready[w_col_complete_bank] <= 1'b1;

      if (w_top_scan_done_fire)
        r_bank_scan_finished[r_scan_bank] <= 1'b1;

      if (w_bank_release_fire) begin
        r_bank_busy[I_BANK_RELEASE_BANK]          <= 1'b0;
        r_metadata_ready[I_BANK_RELEASE_BANK]     <= 1'b0;
        r_bank_scan_finished[I_BANK_RELEASE_BANK] <= 1'b0;
      end
    end
  end

  // Scan-context registers; held across both directional passes.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_scan_bank   <= 1'b0;
      r_scan_ctu_id <= 9'd0;
      r_scan_width  <= 8'd0;
      r_scan_height <= 8'd0;
      r_scan_dbf_en <= 1'b0;
      r_scan_qp_cb   <= 6'd0;
      r_scan_qp_cr   <= 6'd0;
    end else if (w_scan_start_fire) begin
      r_scan_bank   <= I_SCAN_BANK;
      r_scan_ctu_id <= I_SCAN_CTU_ID;
      r_scan_width  <= r_bank_width[I_SCAN_BANK];
      r_scan_height <= r_bank_height[I_SCAN_BANK];
      r_scan_dbf_en <= r_bank_dbf_en[I_SCAN_BANK];
      r_scan_qp_cb   <= r_bank_qp_cb[I_SCAN_BANK];
      r_scan_qp_cr   <= r_bank_qp_cr[I_SCAN_BANK];
    end
  end

  DBF_METADATA_COLLECTOR u_metadata_collector (
    .I_CLK                (I_CLK),
    .I_RST_N              (I_RST_N),
    .I_CTU_START_VALID    (w_col_start_valid),
    .O_CTU_START_READY    (w_col_start_ready),
    .I_CTU_BANK           (I_CTU_BANK),
    .I_CTU_ID             (I_CTU_ID),
    .I_CTU_QP             (I_CTU_QP),
    .I_CTU_VALID_WIDTH    (I_CTU_VALID_WIDTH),
    .I_CTU_VALID_HEIGHT   (I_CTU_VALID_HEIGHT),
    .I_LEAF_VALID         (I_LEAF_VALID),
    .O_LEAF_READY         (w_col_leaf_ready),
    .I_LEAF_CTU_ID        (I_LEAF_CTU_ID),
    .I_LEAF_CU_ID        (I_LEAF_CU_ID),
    .I_LEAF_X_UNIT       (I_LEAF_X_UNIT),
    .I_LEAF_Y_UNIT       (I_LEAF_Y_UNIT),
    .I_LEAF_WIDTH_CODE   (I_LEAF_WIDTH_CODE),
    .I_LEAF_HEIGHT_CODE  (I_LEAF_HEIGHT_CODE),
    .I_CTU_METADATA_DONE  (I_CTU_METADATA_DONE),
    .I_DONE_CTU_ID        (I_DONE_CTU_ID),
    .O_RAM_WR_EN          (w_col_wr_en),
    .O_RAM_WR_BANK        (w_col_wr_bank),
    .O_RAM_WR_ADDR        (w_col_wr_addr),
    .O_RAM_WR_DATA        (w_col_wr_data),
    .O_RAM_WR_ENTRY_VALID (w_col_wr_entry_valid),
    .O_COMPLETE_VALID     (w_col_complete_valid),
    .I_COMPLETE_READY     (1'b1),
    .O_COMPLETE_BANK      (w_col_complete_bank),
    .O_COMPLETE_CTU_ID    (w_col_complete_id),
    .O_ERROR_VALID        (w_col_error_valid),
    .O_ERROR_CODE         (w_col_error_code)
  );

  SPATIAL_GRID_METADATA_RAM u_metadata_ram (
    .I_CLK            (I_CLK),
    .I_RST_N          (I_RST_N),
    .I_WR_EN          (w_col_wr_en),
    .I_WR_BANK        (w_col_wr_bank),
    .I_WR_ADDR        (w_col_wr_addr),
    .I_WR_DATA        (w_col_wr_data),
    .I_WR_ENTRY_VALID (w_col_wr_entry_valid),
    .I_RD_EN          (w_ram_rd_en),
    .I_RD_BANK        (w_ram_rd_bank),
    .I_RD_ADDR        (w_ram_rd_addr),
    .O_RD_RESP_VALID  (w_ram_rd_resp_valid),
    .O_RD_ENTRY_VALID (w_ram_rd_entry_valid),
    .O_RD_DATA        (w_ram_rd_data)
  );

  DBF_EDGE_SCHEDULER u_edge_scheduler (
    .I_CLK                 (I_CLK),
    .I_RST_N               (I_RST_N),
    .I_CTU_START_VALID     (w_sched_start_valid),
    .O_CTU_START_READY     (w_sched_start_ready),
    .I_CTU_ID              (r_scan_ctu_id),
    .I_CTU_BANK            (r_scan_bank),
    .I_CTU_VALID_WIDTH     (r_scan_width),
    .I_CTU_VALID_HEIGHT    (r_scan_height),
    .I_DIRECTION           (w_sched_direction),
    .I_COMPONENT_ID        (w_sched_component_id),
    .O_RD_EN               (w_ram_rd_en),
    .O_RD_BANK             (w_ram_rd_bank),
    .O_RD_ADDR             (w_ram_rd_addr),
    .I_RD_RESP_VALID       (w_ram_rd_resp_valid),
    .I_RD_ENTRY_VALID      (w_ram_rd_entry_valid),
    .I_RD_DATA             (w_ram_rd_data),
    .O_EDGE_VALID          (w_edge_valid),
    .I_EDGE_READY          (w_edge_ready),
    .O_EDGE_ID             (w_edge_id),
    .O_EDGE_CTU_ID         (w_edge_ctu_id),
    .O_EDGE_BANK           (w_edge_bank),
    .O_EDGE_COMPONENT_ID   (w_edge_component_id),
    .O_EDGE_DIRECTION      (w_edge_direction),
    .O_EDGE_X              (w_edge_x),
    .O_EDGE_Y              (w_edge_y),
    .O_EDGE_LANE_MASK      (w_edge_lane_mask),
    .O_EDGE_META_P         (w_edge_meta_p),
    .O_EDGE_META_Q         (w_edge_meta_q),
    .O_SCAN_DONE_VALID     (w_sched_done_valid),
    .I_SCAN_DONE_READY     (w_sched_done_ready),
    .O_SCAN_DONE_CTU_ID    (),
    .O_SCAN_DONE_BANK      (),
    .O_SCAN_DONE_DIRECTION (),
    .O_ERROR_VALID         (w_sched_error_valid),
    .O_ERROR_CODE          (w_sched_error_code)
  );

  DBF_EDGE_PARAMETER_CALCULATOR u_edge_parameter_calculator (
    .I_CLK                (I_CLK),
    .I_RST_N              (I_RST_N),
    .I_EDGE_VALID         (w_edge_valid),
    .O_EDGE_READY         (w_edge_ready),
    .I_EDGE_ID            (w_edge_id),
    .I_EDGE_CTU_ID        (w_edge_ctu_id),
    .I_EDGE_BANK          (w_edge_bank),
    .I_EDGE_COMPONENT_ID  (w_edge_component_id),
    .I_EDGE_DIRECTION     (w_edge_direction),
    .I_EDGE_X             (w_edge_x),
    .I_EDGE_Y             (w_edge_y),
    .I_EDGE_LANE_MASK     (w_edge_lane_mask),
    .I_EDGE_META_P        (w_edge_meta_p),
    .I_EDGE_META_Q        (w_edge_meta_q),
    .I_DBF_ENABLE         (r_scan_dbf_en),
    .I_QP_CB              (r_scan_qp_cb),
    .I_QP_CR              (r_scan_qp_cr),
    .O_PARAM_VALID        (O_PARAM_VALID),
    .I_PARAM_READY        (I_PARAM_READY),
    .O_PARAM_EDGE_ID      (O_PARAM_EDGE_ID),
    .O_PARAM_CTU_ID       (O_PARAM_CTU_ID),
    .O_PARAM_BANK         (O_PARAM_BANK),
    .O_PARAM_COMPONENT_ID (O_PARAM_COMPONENT_ID),
    .O_PARAM_DIRECTION    (O_PARAM_DIRECTION),
    .O_PARAM_X           (O_PARAM_X),
    .O_PARAM_Y           (O_PARAM_Y),
    .O_PARAM_LANE_MASK   (O_PARAM_LANE_MASK),
    .O_PARAM_BS          (O_PARAM_BS),
    .O_PARAM_SP          (O_PARAM_SP),
    .O_PARAM_SQ          (O_PARAM_SQ),
    .O_PARAM_QP_P        (O_PARAM_QP_P),
    .O_PARAM_QP_Q        (O_PARAM_QP_Q)
  );

  assign O_LEAF_READY = w_col_leaf_ready;

endmodule: DBF_CODING_PARAMETER_GENERATOR
