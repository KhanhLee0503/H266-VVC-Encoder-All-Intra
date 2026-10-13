//-----------------------------------------------------------
// Description:
// Directed PARTITION_ENGINE + INTRA_PREDICTION_ENGINE integration
// verification for the H.266/VVC All-Intra RTL baseline.
//
// Two stimulus modes are supported:
//   TC01,02,03,06,07,08: directed Leaf-CU producer -> real Intra DUT.
//   TC04,05            : real Partition DUT -> real Intra DUT.
//
// No DUT internal signal is forced. Original/reference memories and
// reconstructed-reference commit are modeled at external ports.
// Stimulus is driven ONLY on posedge I_CLK (no negedge stimulus).
//
// Command-line selection: +TC=1 through +TC=8 (default TC=1).
// This is protocol/geometry integration verification, NOT a pixel-accurate
// prediction golden model or a complete Reconstruction/Reference model.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PARTITION_INTEGRATION_TB;

localparam integer PARA_CLK_PERIOD = 10;
localparam integer PARA_MAX_LEAF = 512;
localparam integer PARA_TIMEOUT_CYCLES = 3000000;

logic I_CLK;
logic I_RESETN;
integer tc;
integer cycle_count;
logic live_partition;

// CTU transaction config shared by the two engines.
logic p_start;
logic p_done_ack;
logic [8:0] ctu_id;
logic [4:0] ctu_x;
logic [4:0] ctu_y;
logic [7:0] valid_width;
logic [7:0] valid_height;
logic [12:0] picture_width;
logic [12:0] picture_height;
logic [12:0] ctu_origin_x;
logic [12:0] ctu_origin_y;
logic [3:0] boundary_flags;
logic [5:0] qp;

// Partition memory model and leaf/syntax stream.
logic p_start_ready;
logic p_ctu_rd_req;
logic [10:0] p_ctu_rd_addr;
logic p_ctu_rd_valid;
logic [127:0] p_ctu_rd_data;
logic p_leaf_valid;
logic p_leaf_ready;
logic [8:0] p_leaf_ctu_id;
logic [7:0] p_leaf_cu_id;
logic [63:0] p_leaf_node_data;
logic [4:0] p_leaf_x_unit;
logic [4:0] p_leaf_y_unit;
logic [2:0] p_leaf_width_code;
logic [2:0] p_leaf_height_code;
logic [1:0] p_leaf_activity;
logic p_leaf_dominant;
logic p_leaf_strong_dominant;
logic [2:0] p_leaf_direction;
logic [2:0] p_leaf_second_direction;
logic p_syntax_valid;
logic p_syntax_ready;
logic [8:0] p_syntax_ctu_id;
logic [4:0] p_syntax_x_unit;
logic [4:0] p_syntax_y_unit;
logic [2:0] p_syntax_width_code;
logic [2:0] p_syntax_height_code;
logic [2:0] p_syntax_qt_depth;
logic [2:0] p_syntax_mtt_depth;
logic [1:0] p_syntax_part_idx;
logic [5:0] p_syntax_legal_mask;
logic [2:0] p_syntax_split_type;
logic p_syntax_is_leaf;
logic [7:0] p_syntax_cu_id;
logic p_busy;
logic p_done;
logic p_error;
logic p_feature_ready;
logic [8:0] p_leaf_count;
logic [8:0] p_leaf_fifo_count;
logic [8:0] p_syntax_fifo_count;

// Directed leaf source (used by six of the eight cases).
logic d_leaf_valid;
logic [8:0] d_leaf_ctu_id;
logic [7:0] d_leaf_cu_id;
logic [63:0] d_leaf_node_data;
logic [1:0] d_leaf_activity;
logic d_leaf_dominant;
logic d_leaf_strong_dominant;
logic [2:0] d_leaf_direction;
logic [2:0] d_leaf_second_direction;

// A directed Leaf-CU is retired only after a handshake sampled at a clock
// edge.  This event avoids the producer task polling READY separately from
// the receiving DUT/scoreboard and accidentally lowering VALID on a stall.
event ev_direct_leaf_handshake;

logic i_ctu_start;
logic i_ctu_done;
logic i_ctu_start_ready;
logic i_cu_valid;
logic i_cu_ready;
logic [8:0] i_leaf_ctu_id;
logic [7:0] i_leaf_cu_id;
logic [63:0] i_leaf_node_data;
logic [1:0] i_leaf_activity;
logic i_leaf_dominant;
logic i_leaf_strong_dominant;
logic [2:0] i_leaf_direction;
logic [2:0] i_leaf_second_direction;

// Original sample buffer response: single-cycle registered model.
logic orig_req;
logic [1:0] orig_req_buffer_id;
logic [1:0] orig_req_plane;
logic [15:0] orig_req_addr;
logic [127:0] orig_data;
logic orig_data_valid;

// Reference-map model and read-port responses.
logic [1:0] map_component;
logic top_map_valid;
logic [4:0] top_map_x;
logic [4:0] top_map_y;
logic left_map_valid;
logic [4:0] left_map_x;
logic [4:0] left_map_y;
logic tl_map_valid;
logic [4:0] tl_map_x;
logic [4:0] tl_map_y;
logic h_rd_en;
logic [1:0] h_rd_comp;
logic [9:0] h_rd_addr;
logic h_rd_valid;
logic [63:0] h_rd_data;
logic v_rd_en;
logic [1:0] v_rd_comp;
logic [9:0] v_rd_addr;
logic v_rd_valid;
logic [63:0] v_rd_data;
logic above_rd_en;
logic [1:0] above_rd_comp;
logic [9:0] above_rd_addr;
logic above_rd_valid;
logic [63:0] above_rd_data;
logic left_bound_rd_en;
logic [1:0] left_bound_rd_comp;
logic [4:0] left_bound_rd_addr;
logic left_bound_rd_valid;
logic [63:0] left_bound_rd_data;
logic [1:0] corner_query_component;

// Output stream, syntax, and CU commit.
logic pred_valid;
logic pred_ready;
logic [39:0] pred_data;
logic [3:0] pred_lane_valid;
logic [4:0] pred_x_base;
logic [4:0] pred_y;
logic pred_row_last;
logic pred_last;
logic [1:0] pred_comp;
logic [7:0] pred_mode;
logic [8:0] pred_ctu_id;
logic [7:0] pred_cu_id;
logic [6:0] pred_cu_x;
logic [6:0] pred_cu_y;
logic [2:0] pred_width_code;
logic [2:0] pred_height_code;
logic intra_syntax_valid;
logic intra_syntax_ready;
logic [30:0] intra_syntax_data;
logic [4:0] intra_syntax_count;
logic intra_syntax_done;
logic cu_ref_commit_req;
logic cu_ref_commit_done;
logic intra_done;
logic cu_done;
logic intra_busy;
logic intra_error;

// Independently recorded Partition leaf transactions.
logic [8:0] expected_ctu [0:PARA_MAX_LEAF-1];
logic [7:0] expected_cu [0:PARA_MAX_LEAF-1];
logic [63:0] expected_node [0:PARA_MAX_LEAF-1];
logic [7:0] syntax_leaf_ids [0:PARA_MAX_LEAF-1];
logic [7:0] intra_syntax_ids [0:PARA_MAX_LEAF-1];
integer leaf_accepted;
integer cu_finished;
integer cu_output_finished;
integer comp_idx;
integer comp_beat;
integer accepted_beats [0:2];
integer stalled_cycles [0:2];
integer stall_last_cycles [0:2];
integer partition_syntax_leaf_count;
integer partition_syntax_events;
integer intra_syntax_events;
integer commit_count;
integer commit_wait;
integer commit_delay;
integer stall_hold_count;
integer last_hold_left;
logic [2:0] last_stall_armed;
logic [2:0] last_stall_done;
logic syntax_full_seen;
logic syntax_released;
integer syntax_release_wait;
integer chroma_above_reads;
integer pred_stall_total;
logic was_pred_stalled;
logic [127:0] prior_pred_payload;
logic was_intra_syntax_stalled;
logic [30:0] prior_intra_syntax;
logic was_leaf_stalled;
logic [101:0] prior_leaf_payload;
logic was_partition_syntax_stalled;
logic [63:0] prior_partition_syntax;
logic [127:0] current_pred_payload;
logic [101:0] current_leaf_payload;
logic [63:0] current_partition_syntax;
integer expected_width;
integer expected_height;
integer expected_beats;
integer expected_x;
integer expected_y;
integer expected_cu_x;
integer expected_cu_y;
integer active_width_code;
integer active_height_code;
integer test_done_target;

function automatic [127:0] make_sample_word(input integer word_addr, input integer plane_id);
  integer lane;
  logic [127:0] result_word;
  logic [9:0] sample;
  begin
    result_word = '0;
    for (lane = 0; lane < 8; lane = lane + 1) begin
      sample = 10'((word_addr * 3 + plane_id * 29 + lane * 11 + 257) & 1023);
      result_word[(lane*16) +: 16] = {6'b0, sample};
    end
    return result_word;
  end
endfunction

function automatic [63:0] make_leaf_node(
  input integer x, input integer y,
  input integer width_code, input integer height_code
);
  logic [63:0] node;
  begin
    node = '0;
    node[52:48] = 5'(x/4);
    node[47:43] = 5'(y/4);
    node[42:40] = 3'(width_code);
    node[39:37] = 3'(height_code);
    node[36:29] = 8'(4 << width_code);
    node[28:21] = 8'(4 << height_code);
    return node;
  end
endfunction

// ------------------------------------------------------------
// Actual Partition -> Intra link, or directed Leaf-CU producer.
// ------------------------------------------------------------
assign i_cu_valid = live_partition ? p_leaf_valid : d_leaf_valid;
assign p_leaf_ready = live_partition && i_cu_ready;
assign i_leaf_ctu_id = live_partition ? p_leaf_ctu_id : d_leaf_ctu_id;
assign i_leaf_cu_id = live_partition ? p_leaf_cu_id : d_leaf_cu_id;
assign i_leaf_node_data = live_partition ? p_leaf_node_data : d_leaf_node_data;
assign i_leaf_activity = live_partition ? p_leaf_activity : d_leaf_activity;
assign i_leaf_dominant = live_partition ? p_leaf_dominant : d_leaf_dominant;
assign i_leaf_strong_dominant = live_partition ? p_leaf_strong_dominant : d_leaf_strong_dominant;
assign i_leaf_direction = live_partition ? p_leaf_direction : d_leaf_direction;
assign i_leaf_second_direction = live_partition ? p_leaf_second_direction : d_leaf_second_direction;

// Never drop Partition syntax; the stream is consumed independently.
assign p_syntax_ready = ((cycle_count % 11) != 0) || (tc != 4 && tc != 5);

// Read-only reconstructed availability. TC06 exercises cross-CTU
// reads with a pre-committed neighbor map; other cases start empty.
wire ref_neighbor_available = (tc == 6);

assign current_pred_payload = {
  pred_data, pred_lane_valid, pred_x_base, pred_y,
  pred_row_last, pred_last, pred_comp, pred_mode,
  pred_ctu_id, pred_cu_id, pred_cu_x, pred_cu_y,
  pred_width_code, pred_height_code
};
assign current_leaf_payload = {
  i_leaf_ctu_id, i_leaf_cu_id, i_leaf_node_data,
  i_leaf_activity, i_leaf_dominant, i_leaf_strong_dominant,
  i_leaf_direction, i_leaf_second_direction
};
assign current_partition_syntax = {
  p_syntax_ctu_id, p_syntax_x_unit, p_syntax_y_unit,
  p_syntax_width_code, p_syntax_height_code,
  p_syntax_qt_depth, p_syntax_mtt_depth, p_syntax_part_idx,
  p_syntax_legal_mask, p_syntax_split_type,
  p_syntax_is_leaf, p_syntax_cu_id
};

PARTITION_ENGINE U_PARTITION_ENGINE (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_START(p_start),
  .O_START_READY(p_start_ready),
  .I_DONE_ACK(p_done_ack),
  .I_CLEAR_ERROR(1'b0),
  .I_CTU_ID(ctu_id),
  .I_CTU_X(ctu_x),
  .I_CTU_Y(ctu_y),
  .I_VALID_WIDTH(valid_width),
  .I_VALID_HEIGHT(valid_height),
  .I_QP(qp),
  .I_BOUNDARY_FLAGS(boundary_flags),
  .O_CTU_RD_REQ(p_ctu_rd_req),
  .O_CTU_RD_ADDR(p_ctu_rd_addr),
  .I_CTU_RD_VALID(p_ctu_rd_valid),
  .I_CTU_RD_DATA(p_ctu_rd_data),
  .O_LEAF_VALID(p_leaf_valid),
  .I_LEAF_READY(p_leaf_ready),
  .O_LEAF_CTU_ID(p_leaf_ctu_id),
  .O_LEAF_CU_ID(p_leaf_cu_id),
  .O_LEAF_NODE_DATA(p_leaf_node_data),
  .O_LEAF_X_UNIT(p_leaf_x_unit),
  .O_LEAF_Y_UNIT(p_leaf_y_unit),
  .O_LEAF_WIDTH_CODE(p_leaf_width_code),
  .O_LEAF_HEIGHT_CODE(p_leaf_height_code),
  .O_LEAF_ACTIVITY(p_leaf_activity),
  .O_LEAF_DOMINANT(p_leaf_dominant),
  .O_LEAF_STRONG_DOMINANT(p_leaf_strong_dominant),
  .O_LEAF_DIRECTION(p_leaf_direction),
  .O_LEAF_SECOND_DIRECTION(p_leaf_second_direction),
  .O_SYNTAX_VALID(p_syntax_valid),
  .I_SYNTAX_READY(p_syntax_ready),
  .O_SYNTAX_CTU_ID(p_syntax_ctu_id),
  .O_SYNTAX_X_UNIT(p_syntax_x_unit),
  .O_SYNTAX_Y_UNIT(p_syntax_y_unit),
  .O_SYNTAX_WIDTH_CODE(p_syntax_width_code),
  .O_SYNTAX_HEIGHT_CODE(p_syntax_height_code),
  .O_SYNTAX_QT_DEPTH(p_syntax_qt_depth),
  .O_SYNTAX_MTT_DEPTH(p_syntax_mtt_depth),
  .O_SYNTAX_PART_IDX(p_syntax_part_idx),
  .O_SYNTAX_LEGAL_MASK(p_syntax_legal_mask),
  .O_SYNTAX_SPLIT_TYPE(p_syntax_split_type),
  .O_SYNTAX_IS_LEAF(p_syntax_is_leaf),
  .O_SYNTAX_CU_ID(p_syntax_cu_id),
  .O_BUSY(p_busy),
  .O_DONE(p_done),
  .O_ERROR(p_error),
  .O_FEATURE_READY(p_feature_ready),
  .O_LEAF_COUNT(p_leaf_count),
  .O_LEAF_FIFO_COUNT(p_leaf_fifo_count),
  .O_SYNTAX_FIFO_COUNT(p_syntax_fifo_count)
);

INTRA_PREDICTION_ENGINE #(
  .PARA_SYNTAX_FIFO_DEPTH(2)
) U_INTRA_PREDICTION_ENGINE (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_CTU_START(i_ctu_start),
  .O_CTU_START_READY(i_ctu_start_ready),
  .I_CTU_DONE(i_ctu_done),
  .I_CTU_ID(ctu_id),
  .I_LEFT_CTU_AVAILABLE(ctu_x != 0),
  .I_CTU_X_ORIGIN(ctu_origin_x),
  .I_CTU_Y_ORIGIN(ctu_origin_y),
  .I_PICTURE_WIDTH(picture_width),
  .I_PICTURE_HEIGHT(picture_height),
  .I_CU_VALID(i_cu_valid),
  .O_CU_READY(i_cu_ready),
  .I_LEAF_CTU_ID(i_leaf_ctu_id),
  .I_CU_ID(i_leaf_cu_id),
  .I_CU_NODE_DATA(i_leaf_node_data),
  .I_CU_ACTIVITY(i_leaf_activity),
  .I_CU_DOMINANT(i_leaf_dominant),
  .I_CU_STRONG_DOMINANT(i_leaf_strong_dominant),
  .I_CU_DIRECTION(i_leaf_direction),
  .I_CU_SECOND_DIRECTION(i_leaf_second_direction),
  .I_CTU_BUFFER_ID(2'd0),
  .O_ORIG_BUF_RD_VALID(orig_req),
  .O_ORIG_BUF_RD_BUFFER_ID(orig_req_buffer_id),
  .O_ORIG_BUF_RD_PLANE(orig_req_plane),
  .O_ORIG_BUF_RD_ADDR(orig_req_addr),
  .I_ORIG_BUF_RD_DATA(orig_data),
  .I_ORIG_BUF_RD_DATA_VALID(orig_data_valid),
  .O_REF_MAP_QUERY_COMPONENT_ID(map_component),
  .O_REF_TOP_MAP_QUERY_VALID(top_map_valid),
  .O_REF_TOP_MAP_X_UNIT(top_map_x),
  .O_REF_TOP_MAP_Y_UNIT(top_map_y),
  .I_REF_TOP_MAP_AVAILABLE(ref_neighbor_available),
  .O_REF_LEFT_MAP_QUERY_VALID(left_map_valid),
  .O_REF_LEFT_MAP_X_UNIT(left_map_x),
  .O_REF_LEFT_MAP_Y_UNIT(left_map_y),
  .I_REF_LEFT_MAP_AVAILABLE(ref_neighbor_available),
  .O_REF_TL_MAP_QUERY_VALID(tl_map_valid),
  .O_REF_TL_MAP_X_UNIT(tl_map_x),
  .O_REF_TL_MAP_Y_UNIT(tl_map_y),
  .I_REF_TL_MAP_AVAILABLE(ref_neighbor_available),
  .I_REF_ABOVE_ROW_VALID(ref_neighbor_available),
  .I_REF_LEFT_BOUNDARY_VALID(ref_neighbor_available),
  .I_REF_ABOVE_LEFT_VALID(ref_neighbor_available),
  .O_REF_H_EDGE_RD_EN(h_rd_en),
  .O_REF_H_EDGE_RD_COMPONENT_ID(h_rd_comp),
  .O_REF_H_EDGE_RD_ADDR(h_rd_addr),
  .I_REF_H_EDGE_RD_VALID(h_rd_valid),
  .I_REF_H_EDGE_RD_DATA(h_rd_data),
  .O_REF_V_EDGE_RD_EN(v_rd_en),
  .O_REF_V_EDGE_RD_COMPONENT_ID(v_rd_comp),
  .O_REF_V_EDGE_RD_ADDR(v_rd_addr),
  .I_REF_V_EDGE_RD_VALID(v_rd_valid),
  .I_REF_V_EDGE_RD_DATA(v_rd_data),
  .O_REF_ABOVE_RD_EN(above_rd_en),
  .O_REF_ABOVE_RD_COMPONENT_ID(above_rd_comp),
  .O_REF_ABOVE_RD_ADDR(above_rd_addr),
  .I_REF_ABOVE_RD_VALID(above_rd_valid),
  .I_REF_ABOVE_RD_DATA(above_rd_data),
  .O_REF_LEFT_BOUND_RD_EN(left_bound_rd_en),
  .O_REF_LEFT_BOUND_RD_COMPONENT_ID(left_bound_rd_comp),
  .O_REF_LEFT_BOUND_RD_ADDR(left_bound_rd_addr),
  .I_REF_LEFT_BOUND_RD_VALID(left_bound_rd_valid),
  .I_REF_LEFT_BOUND_RD_DATA(left_bound_rd_data),
  .O_REF_CORNER_QUERY_COMPONENT_ID(corner_query_component),
  .I_REF_CORNER_QUERY_VALID(1'b1),
  .I_REF_CORNER_QUERY_SAMPLE(16'd512),
  .O_CU_REF_COMMIT_REQ(cu_ref_commit_req),
  .I_CU_REF_COMMIT_DONE(cu_ref_commit_done),
  .I_CLEAR_ERROR(1'b0),
  .O_PRED_VALID(pred_valid),
  .I_PRED_READY(pred_ready),
  .O_PRED_DATA(pred_data),
  .O_PRED_LANE_VALID(pred_lane_valid),
  .O_PRED_X_BASE(pred_x_base),
  .O_PRED_Y(pred_y),
  .O_PRED_ROW_LAST(pred_row_last),
  .O_PRED_LAST(pred_last),
  .O_PRED_COMPONENT_ID(pred_comp),
  .O_PRED_MODE(pred_mode),
  .O_PRED_CTU_ID(pred_ctu_id),
  .O_PRED_CU_ID(pred_cu_id),
  .O_PRED_CU_X(pred_cu_x),
  .O_PRED_CU_Y(pred_cu_y),
  .O_PRED_WIDTH_CODE(pred_width_code),
  .O_PRED_HEIGHT_CODE(pred_height_code),
  .O_SYNTAX_VALID(intra_syntax_valid),
  .I_SYNTAX_READY(intra_syntax_ready),
  .O_SYNTAX_DATA(intra_syntax_data),
  .O_SYNTAX_COUNT(intra_syntax_count),
  .O_CU_SYNTAX_DONE(intra_syntax_done),
  .O_INTRA_DONE(intra_done),
  .O_CU_DONE(cu_done),
  .O_BUSY(intra_busy),
  .O_ERROR(intra_error)
);

// Clock is the only intentionally free-running toggling signal.
initial begin
  I_CLK = 1'b0;
  forever #(PARA_CLK_PERIOD/2) I_CLK = ~I_CLK;
end

// Synchronous one-cycle external SRAM response models.  No negedge.
always_ff @(posedge I_CLK) begin
  if (!I_RESETN) begin
    p_ctu_rd_valid <= 1'b0;
    p_ctu_rd_data <= '0;
    orig_data_valid <= 1'b0;
    orig_data <= '0;
    h_rd_valid <= 1'b0;
    v_rd_valid <= 1'b0;
    above_rd_valid <= 1'b0;
    left_bound_rd_valid <= 1'b0;
    h_rd_data <= '0;
    v_rd_data <= '0;
    above_rd_data <= '0;
    left_bound_rd_data <= '0;
  end
  else begin
    p_ctu_rd_valid <= p_ctu_rd_req;
    if (p_ctu_rd_req)
      p_ctu_rd_data <= make_sample_word(int'(p_ctu_rd_addr), 0);
    orig_data_valid <= orig_req;
    if (orig_req)
      orig_data <= make_sample_word(int'(orig_req_addr), int'(orig_req_plane));

    h_rd_valid <= h_rd_en;
    v_rd_valid <= v_rd_en;
    above_rd_valid <= above_rd_en;
    left_bound_rd_valid <= left_bound_rd_en;
    if (h_rd_en)
      h_rd_data <= 64'h0200_0200_0200_0200;
    if (v_rd_en)
      v_rd_data <= 64'h0200_0200_0200_0200;
    if (above_rd_en)
      above_rd_data <= 64'h0200_0200_0200_0200;
    if (left_bound_rd_en)
      left_bound_rd_data <= 64'h0200_0200_0200_0200;
  end
end

// Clock-edge transaction acknowledgment for the directed Leaf source.
// friendly: the event occurs in the same posedge active region as
// the RTL handshake; the source drops VALID using NBA on that edge.
always @(posedge I_CLK) begin
  if (I_RESETN && !live_partition && d_leaf_valid && i_cu_ready)
    -> ev_direct_leaf_handshake;
end

// Driver: synthetic sink pressure and delayed reconstruction commit.
// All signal updates are NBA on posedge (never negedge).
always @(posedge I_CLK) begin
  if (!I_RESETN) begin
    cycle_count <= 0;
    pred_ready <= 1'b1;
    intra_syntax_ready <= 1'b1;
    cu_ref_commit_done <= 1'b0;
    commit_wait <= 0;
    last_hold_left <= 0;
    syntax_release_wait <= 0;
    syntax_released <= 1'b0;
  end
  else begin
    cycle_count <= cycle_count + 1;
    cu_ref_commit_done <= 1'b0;

    if (cu_ref_commit_req) begin
      if (commit_wait == commit_delay) begin
        cu_ref_commit_done <= 1'b1;
        commit_wait <= 0;
      end
      else
        commit_wait <= commit_wait + 1;
    end
    else
      commit_wait <= 0;

    if (tc == 2) begin
      pred_ready <= ((cycle_count % 13) >= 5);
    end
    else if (tc == 3) begin
      if (last_hold_left > 0) begin
        pred_ready <= 1'b0;
        last_hold_left <= last_hold_left - 1;
      end
      else begin
        pred_ready <= 1'b1;
        // Arm the LAST-beat stall on the penultimate accepted beat.
        // For TC03 (Y 16x16 and Cb/Cr 8x8), this is always
        // x = width-8 on the last row. Use DUT coordinates to avoid
        // a procedural race with scoreboard counters.
        if (pred_valid && pred_ready && (pred_comp < 3) &&
            !last_stall_done[pred_comp] &&
            (int'(pred_y) == ((1 << int'(pred_height_code)) - 1)) &&
            (int'(pred_x_base) == ((1 << int'(pred_width_code)) - 8))) begin
          pred_ready <= 1'b0;
          last_hold_left <= 5;
          last_stall_done[pred_comp] <= 1'b1;
        end
      end
    end
    else
      pred_ready <= ((tc == 4 || tc == 5) && ((cycle_count % 29) < 3)) ? 1'b0 : 1'b1;

    if (tc == 7) begin
      if (!syntax_released) begin
        intra_syntax_ready <= 1'b0;
        if (intra_syntax_count >= 2) begin
          if (syntax_release_wait < 60)
            syntax_release_wait <= syntax_release_wait + 1;
          else begin
            intra_syntax_ready <= 1'b1;
            syntax_released <= 1'b1;
          end
        end
      end
      else
        intra_syntax_ready <= 1'b1;
    end
    else
      intra_syntax_ready <= ((cycle_count % 17) < 2) ? 1'b0 : 1'b1;
  end
end

// Scoreboard: sample transactions strictly at posedge BEFORE NBA.
always @(posedge I_CLK) begin
  if (I_RESETN) begin
    if (p_error || intra_error)
      $fatal(1, "[FAIL] Engine error: cycle=%0d partition=%0b intra=%0b", cycle_count, p_error, intra_error);
    if (cycle_count >= PARA_TIMEOUT_CYCLES)
      $fatal(1, "[TIMEOUT] TC%0d after %0d cycles. leaves=%0d completed=%0d predComp=%0d", tc, cycle_count, leaf_accepted, cu_finished, comp_idx);

    if (was_leaf_stalled && (!i_cu_valid || current_leaf_payload !== prior_leaf_payload)) begin
      $display("[DEBUG] leaf stall violation at cycle=%0d time=%0t tc=%0d live_partition=%0b", cycle_count, $time, tc, live_partition);
      $display("[DEBUG] now:   VALID=%0b READY=%0b CTU_ID=%0d CU_ID=%0d accepted_leaf=%0d", i_cu_valid, i_cu_ready, i_leaf_ctu_id, i_leaf_cu_id, leaf_accepted);
      $display("[DEBUG] prior: payload=%026h", prior_leaf_payload);
      $display("[DEBUG] now:   payload=%026h", current_leaf_payload);
      $fatal(1, "[FAIL] Leaf transaction changed while stalled");
    end
    was_leaf_stalled = i_cu_valid && !i_cu_ready;
    if (was_leaf_stalled)
      prior_leaf_payload = current_leaf_payload;

    if (was_pred_stalled && (!pred_valid || current_pred_payload !== prior_pred_payload))
      $fatal(1, "[FAIL] Prediction data/metadata changed under stall at cycle %0d", cycle_count);
    was_pred_stalled = pred_valid && !pred_ready;
    if (was_pred_stalled) begin
      prior_pred_payload = current_pred_payload;
      pred_stall_total = pred_stall_total + 1;
      if (pred_comp <= 2) begin
        stalled_cycles[pred_comp] = stalled_cycles[pred_comp] + 1;
        if (pred_last)
          stall_last_cycles[pred_comp] = stall_last_cycles[pred_comp] + 1;
      end
    end

    if (was_intra_syntax_stalled &&
        (!intra_syntax_valid || intra_syntax_data !== prior_intra_syntax))
      $fatal(1, "[FAIL] Intra syntax packet changed while stalled");
    was_intra_syntax_stalled = intra_syntax_valid && !intra_syntax_ready;
    if (was_intra_syntax_stalled)
      prior_intra_syntax = intra_syntax_data;

    if (live_partition && was_partition_syntax_stalled &&
        (!p_syntax_valid || current_partition_syntax !== prior_partition_syntax))
      $fatal(1, "[FAIL] Partition syntax changed while stalled");
    was_partition_syntax_stalled = live_partition && p_syntax_valid && !p_syntax_ready;
    if (was_partition_syntax_stalled)
      prior_partition_syntax = current_partition_syntax;

    if (i_cu_valid && i_cu_ready) begin
      if (leaf_accepted == PARA_MAX_LEAF)
        $fatal(1, "[FAIL] Leaf scoreboard exceeded %0d CUs", PARA_MAX_LEAF);
      expected_ctu[leaf_accepted] = i_leaf_ctu_id;
      expected_cu[leaf_accepted] = i_leaf_cu_id;
      expected_node[leaf_accepted] = i_leaf_node_data;
      if ((i_leaf_node_data[42:40] < 1) || (i_leaf_node_data[42:40] > 3) ||
          (i_leaf_node_data[39:37] < 1) || (i_leaf_node_data[39:37] > 3))
        $fatal(1, "[FAIL] Unsupported leaf geometry");
      if (live_partition) begin
        if (((int'(i_leaf_node_data[52:48]) * 4) + (4 << int'(i_leaf_node_data[42:40]))) > int'(valid_width) ||
            ((int'(i_leaf_node_data[47:43]) * 4) + (4 << int'(i_leaf_node_data[39:37]))) > int'(valid_height))
          $fatal(1, "[FAIL] TC%0d partition produced out-of-picture leaf CU_ID=%0d", tc, i_leaf_cu_id);
      end
      leaf_accepted = leaf_accepted + 1;
    end

    if (live_partition && p_syntax_valid && p_syntax_ready) begin
      partition_syntax_events = partition_syntax_events + 1;
      if (p_syntax_is_leaf) begin
        if (partition_syntax_leaf_count == PARA_MAX_LEAF)
          $fatal(1, "[FAIL] Partition syntax leaf scoreboard overflow");
        syntax_leaf_ids[partition_syntax_leaf_count] = p_syntax_cu_id;
        partition_syntax_leaf_count = partition_syntax_leaf_count + 1;
      end
    end

    if (intra_syntax_valid && intra_syntax_ready) begin
      if (intra_syntax_events == PARA_MAX_LEAF)
        $fatal(1, "[FAIL] Intra syntax scoreboard overflow");
      intra_syntax_ids[intra_syntax_events] = intra_syntax_data[21:14];
      if (intra_syntax_data[30:22] != ctu_id)
        $fatal(1, "[FAIL] Intra syntax CTU ID mismatch");
      intra_syntax_events = intra_syntax_events + 1;
    end
    if (tc == 7 && intra_syntax_count == 2)
      syntax_full_seen = 1'b1;

    if (tc == 6 && above_rd_en && ((above_rd_comp == 1) || (above_rd_comp == 2))) begin
      chroma_above_reads = chroma_above_reads + 1;
      // CTU luma X origin is 128; chroma origin is 64.
      // ABOVE_LINE_BUFFER uses 4-sample words, hence base addr 16.
      if ((above_rd_addr < 10'd16) || (above_rd_addr >= 10'd32))
        $fatal(1, "[FAIL] Chroma above-line address not scaled: comp=%0d addr=%0d", above_rd_comp, above_rd_addr);
    end

    if (pred_valid && pred_ready) begin
      if (cu_output_finished >= leaf_accepted)
        $fatal(1, "[FAIL] Prediction without matching accepted Leaf CU");
      if (pred_comp !== 2'(comp_idx))
        $fatal(1, "[FAIL] Component order: expected %0d got %0d", comp_idx, pred_comp);
      if (pred_ctu_id !== expected_ctu[cu_output_finished] ||
          pred_cu_id !== expected_cu[cu_output_finished])
        $fatal(1, "[FAIL] Prediction CTU/CU ID misalignment at CU %0d", cu_output_finished);

      active_width_code = int'(expected_node[cu_output_finished][42:40]) + ((comp_idx == 0) ? 2 : 1);
      active_height_code = int'(expected_node[cu_output_finished][39:37]) + ((comp_idx == 0) ? 2 : 1);
      expected_width = 1 << active_width_code;
      expected_height = 1 << active_height_code;
      expected_beats = (expected_width * expected_height) / 4;
      expected_x = (comp_beat % (expected_width / 4)) * 4;
      expected_y = comp_beat / (expected_width / 4);
      expected_cu_x = int'(expected_node[cu_output_finished][52:48]) * ((comp_idx == 0) ? 4 : 2);
      expected_cu_y = int'(expected_node[cu_output_finished][47:43]) * ((comp_idx == 0) ? 4 : 2);
      if (pred_width_code !== 3'(active_width_code) ||
          pred_height_code !== 3'(active_height_code) ||
          pred_cu_x !== 7'(expected_cu_x) ||
          pred_cu_y !== 7'(expected_cu_y))
        $fatal(1, "[FAIL] Prediction geometry misaligned: CU_ID=%0d COMP=%0d", pred_cu_id, pred_comp);
      if (pred_x_base !== 5'(expected_x) || pred_y !== 5'(expected_y) ||
          pred_lane_valid !== 4'b1111)
        $fatal(1, "[FAIL] Prediction beat coords: comp=%0d beat=%0d x=%0d/%0d y=%0d/%0d", comp_idx, comp_beat, pred_x_base, expected_x, pred_y, expected_y);
      if (pred_row_last !== (expected_x == expected_width - 4))
        $fatal(1, "[FAIL] ROW_LAST incorrect at comp=%0d beat=%0d", comp_idx, comp_beat);
      if (pred_last !== (comp_beat == expected_beats - 1))
        $fatal(1, "[FAIL] LAST incorrect at comp=%0d beat=%0d", comp_idx, comp_beat);
      accepted_beats[comp_idx] = accepted_beats[comp_idx] + 1;
      comp_beat = comp_beat + 1;
      if (pred_last) begin
        $display("[INFO] CU_ID=%0d COMP=%0d %0dx%0d: %0d beats accepted", pred_cu_id, comp_idx, expected_width, expected_height, comp_beat);
        comp_beat = 0;
        if (comp_idx == 2) begin
          comp_idx = 0;
          cu_output_finished = cu_output_finished + 1;
        end
        else
          comp_idx = comp_idx + 1;
      end
    end

    if (tc == 8 && cu_ref_commit_req && !cu_ref_commit_done && i_cu_ready)
      $fatal(1, "[FAIL] TC08 next CU was accepted before commit");
    if (tc == 5 && above_rd_en)
      $fatal(1, "[FAIL] TC05 unexpected above-line read with empty reference map");
    if (cu_ref_commit_done && cu_ref_commit_req)
      commit_count = commit_count + 1;
    if (cu_done) begin
      if (commit_count <= cu_finished)
        $fatal(1, "[FAIL] CU retired before reconstructed-reference commit");
      cu_finished = cu_finished + 1;
    end
  end
end

// ------------------------------------------------------------
// Directed input tasks. Task output stimulus drives on posedge only.
// ------------------------------------------------------------
task automatic start_ctu;
  begin
    @(posedge I_CLK);
    while (!i_ctu_start_ready || (live_partition && !p_start_ready))
      @(posedge I_CLK);
    i_ctu_start <= 1'b1;
    if (live_partition)
      p_start <= 1'b1;
    @(posedge I_CLK);
    i_ctu_start <= 1'b0;
    p_start <= 1'b0;
  end
endtask

task automatic send_direct_leaf(
  input integer cu_identifier, input integer x, input integer y,
  input integer width_code, input integer height_code
);
  begin
    @(posedge I_CLK);
    d_leaf_ctu_id <= ctu_id;
    d_leaf_cu_id <= 8'(cu_identifier);
    d_leaf_node_data <= make_leaf_node(x, y, width_code, height_code);
    d_leaf_activity <= 2'd0;
    d_leaf_dominant <= 1'b0;
    d_leaf_strong_dominant <= 1'b0;
    d_leaf_direction <= 3'd0;
    d_leaf_second_direction <= 3'd0;
    d_leaf_valid <= 1'b1;
    // Do not poll READY alone.  Retire precisely on a posedge handshake
    // sampled by the monitor, including the case READY rises after a stall.
    @ev_direct_leaf_handshake;
    d_leaf_valid <= 1'b0;
  end
endtask

// End conditions include all CU retires and all expected syntax packets.
// For live Partition cases, do not finish just because the Leaf FIFO emptied.
task automatic wait_for_case_done;
  integer target;
  begin
    target = test_done_target;
    @(posedge I_CLK);
    while (1) begin
      if (live_partition) begin
        if (p_done && (cu_finished == leaf_accepted) &&
            (cu_output_finished == leaf_accepted) &&
            (partition_syntax_leaf_count == leaf_accepted) &&
            (intra_syntax_events == leaf_accepted) && (leaf_accepted > 0))
          break;
      end
      else if ((cu_finished == target) &&
               (cu_output_finished == target) &&
               (intra_syntax_events == target))
        break;
      @(posedge I_CLK);
    end
    @(posedge I_CLK);
  end
endtask

task automatic final_checks;
  integer index;
  begin
    if (leaf_accepted != cu_finished || cu_finished != cu_output_finished)
      $fatal(1, "[FAIL] CU counts inconsistent leaf=%0d output=%0d commit=%0d", leaf_accepted, cu_output_finished, cu_finished);
    if (intra_syntax_events != leaf_accepted)
      $fatal(1, "[FAIL] Intra syntax count=%0d; expected=%0d", intra_syntax_events, leaf_accepted);
    for (index = 0; index < leaf_accepted; index = index + 1) begin
      if (intra_syntax_ids[index] !== expected_cu[index])
        $fatal(1, "[FAIL] Intra syntax CU_ID order mismatch at index %0d", index);
      if (live_partition && syntax_leaf_ids[index] !== expected_cu[index])
        $fatal(1, "[FAIL] Partition syntax CU_ID order mismatch at index %0d", index);
    end
    if (live_partition && partition_syntax_leaf_count != leaf_accepted)
      $fatal(1, "[FAIL] Partition syntax leaf count mismatch");
    if (tc == 2)
      for (index = 0; index < 3; index = index + 1)
        if (stalled_cycles[index] == 0)
          $fatal(1, "[FAIL] No stalled prediction cycle for component %0d", index);
    if (tc == 3)
      for (index = 0; index < 3; index = index + 1)
        if (stall_last_cycles[index] == 0)
          $fatal(1, "[FAIL] Last-beat stall not exercised for component %0d", index);
    if (tc == 6 && chroma_above_reads == 0)
      $fatal(1, "[FAIL] TC06 did not exercise cross-CTU chroma ABOVE_LINE reads");
    if (tc == 7 && !syntax_full_seen)
      $fatal(1, "[FAIL] TC07 did not fill Intra syntax FIFO");
    if (tc == 8 && commit_delay < 10)
      $fatal(1, "[FAIL] TC08 commit delay not configured");

    $display("===========================================================");
    $display("[PASS] TC%02d Partition/Intra Integration", tc);
    $display("       Leaves=%0d CU done=%0d IntraSyntax=%0d PartitionSyntax=%0d", leaf_accepted, cu_finished, intra_syntax_events, partition_syntax_events);
    $display("       Accepted beats Y=%0d Cb=%0d Cr=%0d", accepted_beats[0], accepted_beats[1], accepted_beats[2]);
    $display("       Stalls Y/Cb/Cr=%0d/%0d/%0d, stalled LAST=%0d/%0d/%0d", stalled_cycles[0], stalled_cycles[1], stalled_cycles[2], stall_last_cycles[0], stall_last_cycles[1], stall_last_cycles[2]);
    $display("       Chroma above reads=%0d; syntax FIFO full=%0b; commit=%0d", chroma_above_reads, syntax_full_seen, commit_count);
    $display("===========================================================");
  end
endtask

integer index_init;
initial begin
  // Testcase selector. Each case runs from a fresh reset/simulation.
  tc = 1;
  if (!$value$plusargs("TC=%d", tc))
    tc = 1;
  if ((tc < 1) || (tc > 8))
    $fatal(1, "Use +TC=1..8");
  live_partition = (tc == 4 || tc == 5);
  $display("[INFO] Running TC%02d; live_partition=%0b", tc, live_partition);

  I_RESETN = 1'b0;
  p_start = 1'b0;
  p_done_ack = 1'b0;
  i_ctu_start = 1'b0;
  i_ctu_done = 1'b0;
  d_leaf_valid = 1'b0;
  d_leaf_ctu_id = '0;
  d_leaf_cu_id = '0;
  d_leaf_node_data = '0;
  d_leaf_activity = '0;
  d_leaf_dominant = 1'b0;
  d_leaf_strong_dominant = 1'b0;
  d_leaf_direction = '0;
  d_leaf_second_direction = '0;
  ctu_id = 9'd10;
  ctu_x = 5'd0;
  ctu_y = 5'd0;
  ctu_origin_x = 13'd0;
  ctu_origin_y = 13'd0;
  picture_width = 13'd3840;
  picture_height = 13'd2160;
  valid_width = 8'd128;
  valid_height = 8'd128;
  qp = 6'd22;
  boundary_flags = '0;
  commit_delay = 3;
  test_done_target = 1;

  leaf_accepted = 0;
  cu_finished = 0;
  cu_output_finished = 0;
  comp_idx = 0;
  comp_beat = 0;
  expected_beats = 0;
  partition_syntax_leaf_count = 0;
  partition_syntax_events = 0;
  intra_syntax_events = 0;
  commit_count = 0;
  pred_stall_total = 0;
  chroma_above_reads = 0;
  was_pred_stalled = 0;
  was_leaf_stalled = 0;
  was_intra_syntax_stalled = 0;
  was_partition_syntax_stalled = 0;
  syntax_full_seen = 0;
  last_stall_armed = '0;
  last_stall_done = '0;
  for (index_init = 0; index_init < 3; index_init = index_init + 1) begin
    accepted_beats[index_init] = 0;
    stalled_cycles[index_init] = 0;
    stall_last_cycles[index_init] = 0;
  end

  if (tc == 4) begin
    // Live Partition for an interior CTU.
    ctu_id = 9'd12;
    ctu_x = 5'd1;
    ctu_y = 5'd1;
    ctu_origin_x = 13'd128;
    ctu_origin_y = 13'd128;
    test_done_target = 0;
  end
  if (tc == 5) begin
    // Bottom-right partial CTU. Picture = 3824x2160, origin=(3712,2048).
    ctu_id = 9'd13;
    ctu_x = 5'd29;
    ctu_y = 5'd16;
    ctu_origin_x = 13'd3712;
    ctu_origin_y = 13'd2048;
    picture_width = 13'd3824;
    picture_height = 13'd2160;
    valid_width = 8'd112;
    valid_height = 8'd112;
    test_done_target = 0;
  end
  if (tc == 6) begin
    ctu_id = 9'd14;
    ctu_x = 5'd1;
    ctu_y = 5'd1;
    ctu_origin_x = 13'd128;
    ctu_origin_y = 13'd128;
  end
  if (tc == 7)
    test_done_target = 5;
  if (tc == 8) begin
    commit_delay = 50;
    test_done_target = 2;
  end

  repeat (6) @(posedge I_CLK);
  I_RESETN <= 1'b1;
  repeat (3) @(posedge I_CLK);
  start_ctu();

  if (!live_partition) begin
    unique case (tc)
      1, 2, 3: send_direct_leaf(7, 32, 32, 2, 2); // 16x16 Y; 8x8 Cb/Cr
      6:       send_direct_leaf(7, 0, 0, 2, 2);   // Cross-CTU top/left
      7: begin
        send_direct_leaf(1, 0, 0, 1, 1);
        send_direct_leaf(2, 8, 0, 1, 1);
        send_direct_leaf(3, 16, 0, 1, 1);
        send_direct_leaf(4, 24, 0, 1, 1);
        send_direct_leaf(5, 32, 0, 1, 1);
      end
      8: begin
        send_direct_leaf(1, 0, 0, 2, 2);
        send_direct_leaf(2, 16, 0, 2, 2);
      end
      default: $fatal(1, "Invalid directed TC");
    endcase
  end

  wait_for_case_done();
  final_checks();
  @(posedge I_CLK);
  i_ctu_done <= 1'b1;
  @(posedge I_CLK);
  i_ctu_done <= 1'b0;
  $finish;
end

endmodule: INTRA_PARTITION_INTEGRATION_TB
