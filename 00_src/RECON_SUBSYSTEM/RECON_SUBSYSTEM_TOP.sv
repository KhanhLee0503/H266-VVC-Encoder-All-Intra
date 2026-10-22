//-----------------------------------------------------------
// Description: Single-active-CTU reconstructed-reference integration top with two local RAM banks.
// Instantiates the existing writer and H/V/local memories, availability map,
// and cross-CTU ping-pong reference store. Accepts reconstructed 4-sample
// beats, prepares above-left corner from the previous row, and completes a
// leaf CU only after three component jobs and delayed tile commits. CTUs
// must be scheduled in left-to-right, top-to-bottom raster order. Supports
// complete 8..32 luma leaf blocks; partial leaves are rejected. The bottom
// picture CTU may have a shorter valid height (a multiple of four).
//-----------------------------------------------------------
`timescale 1ns/1ps
module RECON_SUBSYSTEM_TOP (
  input             I_CLK,
  input             I_RESETN,
  input             I_CLEAR_ERROR,
  input             I_PICTURE_START,
  input             I_CTU_START_VALID,
  input [8:0]       I_CTU_ID,
  input [7:0]       I_FRAME_ID,
  output logic      O_CTU_START_READY,
  input [12:0]      I_CTU_X_ORIGIN,
  input [12:0]      I_CTU_Y_ORIGIN,
  input [12:0]      I_PICTURE_WIDTH,
  input [12:0]      I_PICTURE_HEIGHT,
  input [7:0]       I_CTU_VALID_WIDTH,
  input [7:0]       I_CTU_VALID_HEIGHT,
  output logic      O_CTU_INIT_DONE,
  input             I_CTU_FINISH_VALID,
  output logic      O_CTU_FINISH_READY,
  input             I_CU_VALID,
  output logic      O_CU_READY,
  input [6:0]       I_CU_X,
  input [6:0]       I_CU_Y,
  input [7:0]       I_CU_WIDTH,
  input [7:0]       I_CU_HEIGHT,
  input             I_CU_REF_COMMIT_REQ,
  output logic      O_CU_REF_COMMIT_DONE,
  input             I_CU_RELEASE,
  input             I_RECON_VALID,
  output logic      O_RECON_READY,
  input [1:0]       I_RECON_COMPONENT_ID,
  input [6:0]       I_RECON_X_BASE,
  input [6:0]       I_RECON_Y,
  input [39:0]      I_RECON_SAMPLE,
  input [3:0]       I_RECON_LANE_VALID,
  input             I_RECON_TU_LAST,
  // Intra availability: TL is time-multiplexed onto query port zero.
  input [1:0]       I_REF_MAP_QUERY_COMPONENT_ID,
  input             I_REF_TOP_MAP_QUERY_VALID,
  input [4:0]       I_REF_TOP_MAP_X_UNIT,
  input [4:0]       I_REF_TOP_MAP_Y_UNIT,
  output logic      O_REF_TOP_MAP_AVAILABLE,
  input             I_REF_LEFT_MAP_QUERY_VALID,
  input [4:0]       I_REF_LEFT_MAP_X_UNIT,
  input [4:0]       I_REF_LEFT_MAP_Y_UNIT,
  output logic      O_REF_LEFT_MAP_AVAILABLE,
  input             I_REF_TL_MAP_QUERY_VALID,
  input [4:0]       I_REF_TL_MAP_X_UNIT,
  input [4:0]       I_REF_TL_MAP_Y_UNIT,
  output logic      O_REF_TL_MAP_AVAILABLE,
  output logic      O_REF_ABOVE_ROW_VALID,
  output logic      O_REF_LEFT_BOUNDARY_VALID,
  output logic      O_REF_ABOVE_LEFT_VALID,
  input             I_REF_H_EDGE_RD_EN,
  input [1:0]       I_REF_H_EDGE_RD_COMPONENT_ID,
  input [9:0]       I_REF_H_EDGE_RD_ADDR,
  output logic      O_REF_H_EDGE_RD_VALID,
  output logic [63:0] O_REF_H_EDGE_RD_DATA,
  input             I_REF_V_EDGE_RD_EN,
  input [1:0]       I_REF_V_EDGE_RD_COMPONENT_ID,
  input [9:0]       I_REF_V_EDGE_RD_ADDR,
  output logic      O_REF_V_EDGE_RD_VALID,
  output logic [63:0] O_REF_V_EDGE_RD_DATA,
  input             I_REF_ABOVE_RD_EN,
  input [1:0]       I_REF_ABOVE_RD_COMPONENT_ID,
  input [9:0]       I_REF_ABOVE_RD_ADDR,
  output logic      O_REF_ABOVE_RD_VALID,
  output logic [63:0] O_REF_ABOVE_RD_DATA,
  input             I_REF_LEFT_BOUND_RD_EN,
  input [1:0]       I_REF_LEFT_BOUND_RD_COMPONENT_ID,
  input [4:0]       I_REF_LEFT_BOUND_RD_ADDR,
  output logic      O_REF_LEFT_BOUND_RD_VALID,
  output logic [63:0] O_REF_LEFT_BOUND_RD_DATA,
  input [1:0]       I_REF_CORNER_QUERY_COMPONENT_ID,
  output logic      O_REF_CORNER_QUERY_VALID,
  output logic [15:0] O_REF_CORNER_QUERY_SAMPLE,
  // The prefetch controller generates all component and raster addresses.
  // This top owns RAM bank allocation, not the prefetch address sequence.
  output logic      O_PREFETCH_DESC_VALID,
  input             I_PREFETCH_DESC_READY,
  output logic      O_PREFETCH_BANK_ID,
  output logic [8:0] O_PREFETCH_CTU_ID,
  output logic [7:0] O_PREFETCH_FRAME_ID,
  output logic [12:0] O_PREFETCH_CTU_X_ORIGIN,
  output logic [12:0] O_PREFETCH_CTU_Y_ORIGIN,
  output logic [7:0] O_PREFETCH_VALID_WIDTH,
  output logic [7:0] O_PREFETCH_VALID_HEIGHT,
  input             I_PREFETCH_RAM_RD_EN,
  input [1:0]       I_PREFETCH_RAM_RD_COMPONENT_ID,
  input [11:0]      I_PREFETCH_RAM_RD_ADDR,
  output logic      O_PREFETCH_RAM_RD_VALID,
  output logic [63:0] O_PREFETCH_RAM_RD_DATA,
  output logic      O_PREFETCH_RAM_RD_BANK_ID,
  input             I_PREFETCH_RELEASE_VALID,
  output logic      O_PREFETCH_RELEASE_READY,
  input             I_PREFETCH_RELEASE_BANK_ID,
  input [8:0]       I_PREFETCH_RELEASE_CTU_ID,
  input [7:0]       I_PREFETCH_RELEASE_FRAME_ID,
  output logic      O_RECON_WRITE_BANK_ID,
  output logic [1:0] O_RECON_BANK0_STATE,
  output logic [1:0] O_RECON_BANK1_STATE,
  output logic      O_BUSY,
  output logic      O_ERROR
);
  typedef enum logic [2:0] {
    ST_IDLE,
    ST_CORNER_ISSUE,
    ST_CORNER_WAIT,
    ST_READY,
    ST_ERROR
  } state_t;
  state_t r_current_state;
  state_t w_next_state;

  logic [12:0] r_origin_x, r_origin_y;
  logic [12:0] r_picture_width;
  logic [7:0] r_valid_width, r_valid_height;
  logic [1:0] r_corner_component;
  logic r_fault;
  logic w_ctu_start, w_ctu_finish, w_geometry_valid;
  logic w_last_ctu_in_row, w_corner_required;
  logic [9:0] w_corner_addr;
  logic [9:0] w_above_wr_addr;
  logic [4:0] w_left_wr_addr;
  logic [7:0] w_comp_width, w_comp_height;
  logic [10:0] w_above_x_words;
  logic w_writer_accept, w_recon_gate, w_beat_legal;
  logic w_writer_ready;
  logic w_cu_active, w_commit_error, w_commit_cu_ready, w_can_accept, w_beat_expected;
  logic w_tu_ref_release;
  logic w_tile_commit;
  logic [1:0] w_tile_comp;
  logic [4:0] w_tile_x, w_tile_y;
  logic w_local_wr_en, w_h_wr_en, w_v_wr_en;
  logic [1:0] w_local_wr_comp,w_h_wr_comp,w_v_wr_comp;
  logic [11:0] w_local_wr_addr;
  logic [9:0] w_h_wr_addr,w_v_wr_addr;
  logic [63:0] w_local_wr_data,w_h_wr_data,w_v_wr_data;
  logic [3:0] w_local_wr_mask,w_h_wr_mask;
  logic w_query0_valid, w_query0_result, w_query1_result;
  logic [4:0] w_query0_x, w_query0_y;
  logic w_h_read_gate, w_v_read_gate;
  logic [1023:0] r_h_y_written, r_v_y_written;
  logic [255:0] r_h_cb_written,r_h_cr_written,r_v_cb_written,r_v_cr_written;
  logic w_h_written, w_v_written;
  logic w_above_rd_en,w_above_rd_valid,w_above_row_valid;
  logic [1:0] w_above_rd_comp;
  logic [9:0] w_above_rd_addr;
  logic [63:0] w_above_rd_data;
  logic w_left_boundary_valid;
  logic w_corner_load,w_corner_query_valid;
  logic [15:0] w_corner_sample;
  logic w_bank_alloc_ready;
  logic w_bank_error;
  logic w_bank_write_active;

  assign O_CTU_START_READY = (r_current_state == ST_IDLE) && !r_fault &&
                             !w_cu_active && w_bank_alloc_ready && !w_bank_error;
  assign w_ctu_start = I_CTU_START_VALID && O_CTU_START_READY;
  assign O_CTU_INIT_DONE = (r_current_state == ST_READY);
  assign O_CU_READY = O_CTU_INIT_DONE && !I_CTU_FINISH_VALID && w_commit_cu_ready;
  assign O_CTU_FINISH_READY = (r_current_state == ST_READY) &&
                              !w_cu_active && !I_RECON_VALID && !I_CU_VALID;
  assign w_ctu_finish = I_CTU_FINISH_VALID && O_CTU_FINISH_READY;
  assign O_BUSY = (r_current_state != ST_IDLE) || w_cu_active || w_bank_write_active;
  assign O_ERROR = r_fault || w_commit_error || w_bank_error;
  assign w_last_ctu_in_row = (r_origin_x + {5'b0,r_valid_width}) >= r_picture_width;
  assign w_corner_required = (r_origin_x != 13'd0) && (r_origin_y != 13'd0) && w_above_row_valid;
  assign w_geometry_valid = (I_CTU_VALID_WIDTH != 8'd0) &&
                            (I_CTU_VALID_HEIGHT != 8'd0) &&
                            (I_CTU_VALID_WIDTH <= 8'd128) &&
                            (I_CTU_VALID_HEIGHT <= 8'd128) &&
                            (I_CTU_VALID_WIDTH[1:0] == 2'b00) &&
                            (I_CTU_VALID_HEIGHT[1:0] == 2'b00) &&
                            (I_CTU_X_ORIGIN[6:0] == 7'd0) &&
                            (I_CTU_Y_ORIGIN[6:0] == 7'd0) &&
                            (({1'b0,I_CTU_X_ORIGIN} + {6'b0,I_CTU_VALID_WIDTH}) <= {1'b0,I_PICTURE_WIDTH}) &&
                            (({1'b0,I_CTU_Y_ORIGIN} + {6'b0,I_CTU_VALID_HEIGHT}) <= {1'b0,I_PICTURE_HEIGHT}) &&
                            (I_PICTURE_WIDTH <= 13'd4096) &&
                            ((I_CTU_X_ORIGIN == 13'd0) || w_left_boundary_valid) &&
                            ((I_CTU_Y_ORIGIN == 13'd0) || w_above_row_valid);

  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: if (w_ctu_start) begin
        if (!w_geometry_valid) w_next_state = ST_ERROR;
        else if ((I_CTU_X_ORIGIN != 13'd0) && (I_CTU_Y_ORIGIN != 13'd0))
          w_next_state = ST_CORNER_ISSUE;
        else w_next_state = ST_READY;
      end
      ST_CORNER_ISSUE: begin
        if (!w_corner_required) w_next_state = ST_READY;
        else w_next_state = ST_CORNER_WAIT;
      end
      ST_CORNER_WAIT: begin
        if (w_above_rd_valid) begin
          if (r_corner_component == 2'd2) w_next_state = ST_READY;
          else w_next_state = ST_CORNER_ISSUE;
        end
      end
      ST_READY: if (w_ctu_finish) w_next_state = ST_IDLE;
      ST_ERROR: if (I_CLEAR_ERROR) w_next_state = ST_IDLE;
      default: w_next_state = ST_IDLE;
    endcase
    if (w_commit_error && !I_CLEAR_ERROR) w_next_state = ST_ERROR;
  end

  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) r_current_state <= ST_IDLE;
    else if (I_CLEAR_ERROR) r_current_state <= ST_IDLE;
    else r_current_state <= w_next_state;
  end

  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_origin_x <= '0;
      r_origin_y <= '0;
      r_picture_width <= '0;
      r_valid_width <= '0;
      r_valid_height <= '0;
      r_corner_component <= '0;
      r_fault <= 1'b0;
    end else if (I_CLEAR_ERROR) begin
      r_fault <= 1'b0;
      r_corner_component <= '0;
    end else begin
      if (w_ctu_start) begin
        r_origin_x <= I_CTU_X_ORIGIN;
        r_origin_y <= I_CTU_Y_ORIGIN;
        r_picture_width <= I_PICTURE_WIDTH;
        r_valid_width <= I_CTU_VALID_WIDTH;
        r_valid_height <= I_CTU_VALID_HEIGHT;
        r_corner_component <= 2'd0;
        if (!w_geometry_valid) r_fault <= 1'b1;
      end
      if ((r_current_state == ST_CORNER_WAIT) && w_above_rd_valid && (r_corner_component != 2'd2))
        r_corner_component <= r_corner_component + 2'd1;
      if (I_REF_TL_MAP_QUERY_VALID && I_REF_TOP_MAP_QUERY_VALID)
        r_fault <= 1'b1;
      if (O_CTU_INIT_DONE && w_can_accept && I_RECON_VALID &&
          (!w_beat_legal || !w_beat_expected))
        r_fault <= 1'b1;
    end
  end

  // Compute component geometry from the stored luma CTU geometry.
  always_comb begin
    w_comp_width = r_valid_width;
    w_comp_height = r_valid_height;
    if (I_RECON_COMPONENT_ID != 2'd0) begin
      w_comp_width = {1'b0,r_valid_width[7:1]};
      w_comp_height = {1'b0,r_valid_height[7:1]};
    end
    w_above_x_words = (I_RECON_COMPONENT_ID == 2'd0) ?
                      {1'b0,r_origin_x[11:2]} : {2'b00,r_origin_x[11:3]};
    w_above_wr_addr = 10'(w_above_x_words + {4'b0000,I_RECON_X_BASE[6:2]});
    w_left_wr_addr = I_RECON_Y[6:2];
    w_corner_addr = '0;
    if (r_corner_component == 2'd0)
      w_corner_addr = 10'((r_origin_x >> 2) - 13'd1);
    else
      w_corner_addr = 10'((r_origin_x >> 3) - 13'd1);
  end

  // Reject unsupported component and out-of-bounds data before writing RAM.
  assign w_beat_legal = (I_RECON_COMPONENT_ID != 2'd3) &&
                        (I_RECON_LANE_VALID == 4'b1111) &&
                        (I_RECON_X_BASE[1:0] == 2'b00) &&
                        (({1'b0,I_RECON_X_BASE} + 8'd4) <= w_comp_width) &&
                        ({1'b0,I_RECON_Y} < w_comp_height);
  assign w_recon_gate = O_CTU_INIT_DONE && w_can_accept && !O_ERROR &&
                        w_beat_legal && w_beat_expected;
  assign O_RECON_READY = w_recon_gate && w_writer_ready;
  assign w_writer_accept = I_RECON_VALID && O_RECON_READY;

  RECON_REF_STORE_WRITER u_writer (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_RECON_VALID(w_writer_accept), .O_RECON_READY(w_writer_ready),
    .I_COMPONENT_ID(I_RECON_COMPONENT_ID),
    .I_RECON_X_BASE(I_RECON_X_BASE), .I_RECON_Y(I_RECON_Y),
    .I_RECON_SAMPLE(I_RECON_SAMPLE), .I_RECON_LANE_VALID(I_RECON_LANE_VALID),
    .I_RECON_TU_LAST(I_RECON_TU_LAST),
    .O_LOCAL_WR_EN(w_local_wr_en), .O_LOCAL_WR_COMPONENT_ID(w_local_wr_comp),
    .O_LOCAL_WR_ADDR(w_local_wr_addr), .O_LOCAL_WR_DATA(w_local_wr_data),
    .O_LOCAL_WR_SAMPLE_EN(w_local_wr_mask),
    .O_H_EDGE_WR_EN(w_h_wr_en), .O_H_EDGE_WR_COMPONENT_ID(w_h_wr_comp),
    .O_H_EDGE_WR_ADDR(w_h_wr_addr), .O_H_EDGE_WR_DATA(w_h_wr_data),
    .O_H_EDGE_WR_SAMPLE_EN(w_h_wr_mask),
    .O_V_EDGE_WR_EN(w_v_wr_en), .O_V_EDGE_WR_COMPONENT_ID(w_v_wr_comp),
    .O_V_EDGE_WR_ADDR(w_v_wr_addr), .O_V_EDGE_WR_DATA(w_v_wr_data),
    .O_TILE_COMMIT_VALID(w_tile_commit),
    .O_TILE_COMMIT_COMPONENT_ID(w_tile_comp),
    .O_TILE_X_UNIT(w_tile_x), .O_TILE_Y_UNIT(w_tile_y),
    .O_TU_REF_RELEASE(w_tu_ref_release)
  );

  // The bank controller owns both local RAM instances. It never walks a
  // raster and does not decide the Y/Cb/Cr prefetch ordering.
  RECON_LOCAL_RAM_BANK_CTRL u_local_banks (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_CLEAR_ERROR(I_CLEAR_ERROR),
    .I_CTU_ALLOC_VALID(w_ctu_start && w_geometry_valid),
    .O_CTU_ALLOC_READY(w_bank_alloc_ready),
    .I_CTU_ID(I_CTU_ID),
    .I_FRAME_ID(I_FRAME_ID),
    .I_CTU_X_ORIGIN(I_CTU_X_ORIGIN),
    .I_CTU_Y_ORIGIN(I_CTU_Y_ORIGIN),
    .I_CTU_VALID_WIDTH(I_CTU_VALID_WIDTH),
    .I_CTU_VALID_HEIGHT(I_CTU_VALID_HEIGHT),
    .I_CTU_RECON_FINISH(w_ctu_finish),
    .O_WR_ACTIVE(w_bank_write_active),
    .O_ACTIVE_WRITE_BANK_ID(O_RECON_WRITE_BANK_ID),
    .I_WR_EN(w_local_wr_en),
    .I_WR_COMPONENT_ID(w_local_wr_comp),
    .I_WR_ADDR(w_local_wr_addr),
    .I_WR_DATA(w_local_wr_data),
    .I_WR_SAMPLE_EN(w_local_wr_mask),
    .O_PREFETCH_DESC_VALID(O_PREFETCH_DESC_VALID),
    .I_PREFETCH_DESC_READY(I_PREFETCH_DESC_READY),
    .O_PREFETCH_BANK_ID(O_PREFETCH_BANK_ID),
    .O_PREFETCH_CTU_ID(O_PREFETCH_CTU_ID),
    .O_PREFETCH_FRAME_ID(O_PREFETCH_FRAME_ID),
    .O_PREFETCH_CTU_X_ORIGIN(O_PREFETCH_CTU_X_ORIGIN),
    .O_PREFETCH_CTU_Y_ORIGIN(O_PREFETCH_CTU_Y_ORIGIN),
    .O_PREFETCH_VALID_WIDTH(O_PREFETCH_VALID_WIDTH),
    .O_PREFETCH_VALID_HEIGHT(O_PREFETCH_VALID_HEIGHT),
    .I_PREFETCH_RD_EN(I_PREFETCH_RAM_RD_EN),
    .I_PREFETCH_RD_COMPONENT_ID(I_PREFETCH_RAM_RD_COMPONENT_ID),
    .I_PREFETCH_RD_ADDR(I_PREFETCH_RAM_RD_ADDR),
    .O_PREFETCH_RD_VALID(O_PREFETCH_RAM_RD_VALID),
    .O_PREFETCH_RD_DATA(O_PREFETCH_RAM_RD_DATA),
    .O_PREFETCH_RD_BANK_ID(O_PREFETCH_RAM_RD_BANK_ID),
    .I_PREFETCH_RELEASE_VALID(I_PREFETCH_RELEASE_VALID),
    .O_PREFETCH_RELEASE_READY(O_PREFETCH_RELEASE_READY),
    .I_PREFETCH_RELEASE_BANK_ID(I_PREFETCH_RELEASE_BANK_ID),
    .I_PREFETCH_RELEASE_CTU_ID(I_PREFETCH_RELEASE_CTU_ID),
    .I_PREFETCH_RELEASE_FRAME_ID(I_PREFETCH_RELEASE_FRAME_ID),
    .O_BANK0_STATE(O_RECON_BANK0_STATE),
    .O_BANK1_STATE(O_RECON_BANK1_STATE),
    .O_PREFETCH_ACTIVE(),
    .O_ERROR(w_bank_error)
  );

  // Word-valid flags ensure that an issued reference read never reads a
  // never-written edge word. Reference availability is additionally tracked
  // at tile granularity by RECON_AVAIL_MAP.
  always_comb begin
    w_h_written = 1'b0;
    w_v_written = 1'b0;
    unique casez (I_REF_H_EDGE_RD_COMPONENT_ID)
      2'd0: w_h_written = r_h_y_written[I_REF_H_EDGE_RD_ADDR];
      2'd1: if (!I_REF_H_EDGE_RD_ADDR[9:8])
        w_h_written = r_h_cb_written[I_REF_H_EDGE_RD_ADDR[7:0]];
      2'd2: if (!I_REF_H_EDGE_RD_ADDR[9:8])
        w_h_written = r_h_cr_written[I_REF_H_EDGE_RD_ADDR[7:0]];
      default: begin end
    endcase
    unique casez (I_REF_V_EDGE_RD_COMPONENT_ID)
      2'd0: w_v_written = r_v_y_written[I_REF_V_EDGE_RD_ADDR];
      2'd1: if (!I_REF_V_EDGE_RD_ADDR[9:8])
        w_v_written = r_v_cb_written[I_REF_V_EDGE_RD_ADDR[7:0]];
      2'd2: if (!I_REF_V_EDGE_RD_ADDR[9:8])
        w_v_written = r_v_cr_written[I_REF_V_EDGE_RD_ADDR[7:0]];
      default: begin end
    endcase
  end
  assign w_h_read_gate = O_CTU_INIT_DONE && I_REF_H_EDGE_RD_EN && w_h_written;
  assign w_v_read_gate = O_CTU_INIT_DONE && I_REF_V_EDGE_RD_EN && w_v_written;

  H_EDGE_RAM u_h_edge (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_WR_EN(w_h_wr_en), .I_WR_COMPONENT_ID(w_h_wr_comp),
    .I_WR_ADDR(w_h_wr_addr), .I_WR_DATA(w_h_wr_data),
    .I_WR_SAMPLE_EN(w_h_wr_mask),
    .I_RD_EN(w_h_read_gate), .I_RD_COMPONENT_ID(I_REF_H_EDGE_RD_COMPONENT_ID),
    .I_RD_ADDR(I_REF_H_EDGE_RD_ADDR),
    .O_RD_VALID(O_REF_H_EDGE_RD_VALID), .O_RD_DATA(O_REF_H_EDGE_RD_DATA)
  );
  V_EDGE_RAM u_v_edge (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_WR_EN(w_v_wr_en), .I_WR_COMPONENT_ID(w_v_wr_comp),
    .I_WR_ADDR(w_v_wr_addr), .I_WR_DATA(w_v_wr_data),
    .I_RD_EN(w_v_read_gate), .I_RD_COMPONENT_ID(I_REF_V_EDGE_RD_COMPONENT_ID),
    .I_RD_ADDR(I_REF_V_EDGE_RD_ADDR),
    .O_RD_VALID(O_REF_V_EDGE_RD_VALID), .O_RD_DATA(O_REF_V_EDGE_RD_DATA)
  );

  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_h_y_written <= '0; r_h_cb_written <= '0; r_h_cr_written <= '0;
      r_v_y_written <= '0; r_v_cb_written <= '0; r_v_cr_written <= '0;
    end else if (w_ctu_start || I_CLEAR_ERROR) begin
      r_h_y_written <= '0; r_h_cb_written <= '0; r_h_cr_written <= '0;
      r_v_y_written <= '0; r_v_cb_written <= '0; r_v_cr_written <= '0;
    end else begin
      if (w_h_wr_en) begin
        unique casez (w_h_wr_comp)
          2'd0: r_h_y_written[w_h_wr_addr] <= 1'b1;
          2'd1: r_h_cb_written[w_h_wr_addr[7:0]] <= 1'b1;
          2'd2: r_h_cr_written[w_h_wr_addr[7:0]] <= 1'b1;
          default: begin end
        endcase
      end
      if (w_v_wr_en) begin
        unique casez (w_v_wr_comp)
          2'd0: r_v_y_written[w_v_wr_addr] <= 1'b1;
          2'd1: r_v_cb_written[w_v_wr_addr[7:0]] <= 1'b1;
          2'd2: r_v_cr_written[w_v_wr_addr[7:0]] <= 1'b1;
          default: begin end
        endcase
      end
    end
  end

  assign w_query0_valid = I_REF_TL_MAP_QUERY_VALID || I_REF_TOP_MAP_QUERY_VALID;
  assign w_query0_x = I_REF_TL_MAP_QUERY_VALID ? I_REF_TL_MAP_X_UNIT : I_REF_TOP_MAP_X_UNIT;
  assign w_query0_y = I_REF_TL_MAP_QUERY_VALID ? I_REF_TL_MAP_Y_UNIT : I_REF_TOP_MAP_Y_UNIT;
  assign O_REF_TL_MAP_AVAILABLE = I_REF_TL_MAP_QUERY_VALID && w_query0_result;
  assign O_REF_TOP_MAP_AVAILABLE = I_REF_TOP_MAP_QUERY_VALID && !I_REF_TL_MAP_QUERY_VALID && w_query0_result;
  assign O_REF_LEFT_MAP_AVAILABLE = I_REF_LEFT_MAP_QUERY_VALID && w_query1_result;

  RECON_AVAIL_MAP u_avail (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN), .I_CTU_START(w_ctu_start),
    .I_TILE_COMMIT_VALID(w_tile_commit),
    .I_TILE_COMMIT_COMPONENT_ID(w_tile_comp),
    .I_TILE_X_UNIT(w_tile_x), .I_TILE_Y_UNIT(w_tile_y),
    .I_QUERY_0_VALID(w_query0_valid && O_CTU_INIT_DONE),
    .I_QUERY_0_COMPONENT_ID(I_REF_MAP_QUERY_COMPONENT_ID),
    .I_QUERY_0_X_UNIT(w_query0_x), .I_QUERY_0_Y_UNIT(w_query0_y),
    .O_QUERY_0_AVAILABLE(w_query0_result),
    .I_QUERY_1_VALID(I_REF_LEFT_MAP_QUERY_VALID && O_CTU_INIT_DONE),
    .I_QUERY_1_COMPONENT_ID(I_REF_MAP_QUERY_COMPONENT_ID),
    .I_QUERY_1_X_UNIT(I_REF_LEFT_MAP_X_UNIT),
    .I_QUERY_1_Y_UNIT(I_REF_LEFT_MAP_Y_UNIT),
    .O_QUERY_1_AVAILABLE(w_query1_result)
  );

  assign w_above_rd_en = (r_current_state == ST_CORNER_ISSUE && w_corner_required) ||
                         (O_CTU_INIT_DONE && I_REF_ABOVE_RD_EN &&
                          (r_origin_y != 13'd0) && w_above_row_valid);
  assign w_above_rd_comp = (r_current_state == ST_CORNER_ISSUE) ?
                           r_corner_component : I_REF_ABOVE_RD_COMPONENT_ID;
  assign w_above_rd_addr = (r_current_state == ST_CORNER_ISSUE) ?
                           w_corner_addr : I_REF_ABOVE_RD_ADDR;
  assign O_REF_ABOVE_RD_VALID = O_CTU_INIT_DONE && w_above_rd_valid;
  assign O_REF_ABOVE_RD_DATA = w_above_rd_data;
  assign O_REF_ABOVE_ROW_VALID = O_CTU_INIT_DONE && w_above_row_valid && (r_origin_y != 13'd0);
  assign O_REF_LEFT_BOUNDARY_VALID = O_CTU_INIT_DONE && w_left_boundary_valid && (r_origin_x != 13'd0);
  assign w_corner_load = (r_current_state == ST_CORNER_WAIT) && w_above_rd_valid;
  assign w_corner_sample = w_above_rd_data[63:48];
  assign O_REF_CORNER_QUERY_VALID = O_CTU_INIT_DONE && w_corner_query_valid &&
                                    (r_origin_x != 13'd0) && (r_origin_y != 13'd0);
  assign O_REF_ABOVE_LEFT_VALID = O_REF_CORNER_QUERY_VALID;

  CROSS_CTU_REFERENCE_STORE u_cross (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_PICTURE_START(I_PICTURE_START),
    .I_CTU_START(w_ctu_start),
    .I_CTU_ROW_START(w_ctu_start && (I_CTU_X_ORIGIN == 13'd0)),
    .I_CTU_DONE(w_ctu_finish),
    .I_CTU_ROW_DONE(w_ctu_finish && w_last_ctu_in_row),
    .I_ABOVE_WR_EN(w_writer_accept && (I_RECON_Y == (w_comp_height - 8'd1)) &&
                   (I_RECON_LANE_VALID == 4'b1111)),
    .I_ABOVE_WR_COMPONENT_ID(I_RECON_COMPONENT_ID),
    .I_ABOVE_WR_ADDR(w_above_wr_addr),
    .I_ABOVE_WR_DATA(w_local_wr_data),
    .I_ABOVE_RD_EN(w_above_rd_en),
    .I_ABOVE_RD_COMPONENT_ID(w_above_rd_comp),
    .I_ABOVE_RD_ADDR(w_above_rd_addr),
    .O_ABOVE_RD_VALID(w_above_rd_valid),
    .O_ABOVE_RD_DATA(w_above_rd_data),
    .O_ABOVE_ROW_VALID(w_above_row_valid),
    .I_LEFT_WR_EN(w_v_wr_en && (I_RECON_X_BASE[6:2] == ((w_comp_width - 8'd1) >> 2))),
    .I_LEFT_WR_COMPONENT_ID(w_v_wr_comp),
    .I_LEFT_WR_ADDR(w_left_wr_addr),
    .I_LEFT_WR_DATA(w_v_wr_data),
    .I_LEFT_RD_EN(O_CTU_INIT_DONE && I_REF_LEFT_BOUND_RD_EN &&
                  w_left_boundary_valid && (r_origin_x != 13'd0)),
    .I_LEFT_RD_COMPONENT_ID(I_REF_LEFT_BOUND_RD_COMPONENT_ID),
    .I_LEFT_RD_ADDR(I_REF_LEFT_BOUND_RD_ADDR),
    .O_LEFT_RD_VALID(O_REF_LEFT_BOUND_RD_VALID),
    .O_LEFT_RD_DATA(O_REF_LEFT_BOUND_RD_DATA),
    .O_LEFT_BOUNDARY_VALID(w_left_boundary_valid),
    .I_CORNER_LOAD_VALID(w_corner_load),
    .I_CORNER_LOAD_COMPONENT_ID(r_corner_component),
    .I_CORNER_LOAD_SAMPLE(w_corner_sample),
    .I_CORNER_QUERY_COMPONENT_ID(I_REF_CORNER_QUERY_COMPONENT_ID),
    .O_CORNER_QUERY_VALID(w_corner_query_valid),
    .O_CORNER_QUERY_SAMPLE(O_REF_CORNER_QUERY_SAMPLE)
  );

  RECON_CU_COMMIT_CONTROL u_commit (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN), .I_CLEAR_ERROR(I_CLEAR_ERROR),
    .I_CTU_START(w_ctu_start),
    .I_CU_VALID(I_CU_VALID && O_CTU_INIT_DONE),
    .O_CU_READY(w_commit_cu_ready),
    .I_CU_X(I_CU_X), .I_CU_Y(I_CU_Y),
    .I_CU_WIDTH(I_CU_WIDTH), .I_CU_HEIGHT(I_CU_HEIGHT),
    .I_CTU_VALID_WIDTH(r_valid_width), .I_CTU_VALID_HEIGHT(r_valid_height),
    .I_RECON_FIRE(w_writer_accept),
    .I_RECON_COMPONENT_ID(I_RECON_COMPONENT_ID),
    .I_RECON_X_BASE(I_RECON_X_BASE), .I_RECON_Y(I_RECON_Y),
    .I_RECON_LANE_VALID(I_RECON_LANE_VALID),
    .I_RECON_TU_LAST(I_RECON_TU_LAST),
    .I_TU_REF_RELEASE(w_tu_ref_release),
    .I_CU_COMMIT_REQ(I_CU_REF_COMMIT_REQ),
    .O_CU_COMMIT_DONE(O_CU_REF_COMMIT_DONE),
    .I_CU_RELEASE(I_CU_RELEASE),
    .O_CU_ACTIVE(w_cu_active),
    .O_RECON_CAN_ACCEPT(w_can_accept),
    .O_RECON_BEAT_EXPECTED_OK(w_beat_expected), .O_ERROR(w_commit_error)
  );
endmodule: RECON_SUBSYSTEM_TOP
