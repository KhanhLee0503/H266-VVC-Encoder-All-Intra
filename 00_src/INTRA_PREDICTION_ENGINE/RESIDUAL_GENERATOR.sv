//-----------------------------------------------------------
// Description: Leaf-CU original prefetch and residual generation.
// Baseline: YUV420, single-tree, luma CU 8/16/32, 10-bit
// pixels in 16-bit CTU storage, four prediction samples/beat.
// Prefetch all Y, Cb, Cr before accepting prediction. Original
// read request uses the existing CTU_ORIGINAL_READ_MUX.
// Each 8-sample local word is aligned to the Leaf-CU origin;
// a two-word 256-bit window supports unaligned CTU offsets.
// Only one prediction beat can be in the subtract pipeline.
// A new leaf CU is accepted only after I_RELEASE_CU in DONE.
// CTU owner must be RES during prefetch and must not switch
// before O_PREFETCH_DONE (all read responses have returned).
// I_CLEAR_ERROR requires system-wide flush + original-read drain before
// any new descriptor; otherwise a stale read response could be mis-tagged.
// Valid dimensions must equal coded dimensions in this baseline.
// A partial boundary Leaf must be further partitioned upstream.
//-----------------------------------------------------------
`timescale 1ns/1ps

module RESIDUAL_GENERATOR #(
  parameter int PARA_CTU_ID_WD = 9,
  parameter int PARA_CU_ID_WD  = 8,
  parameter int PARA_TU_ID_WD  = 16,
  parameter int PARA_MAX_CU    = 32,
  parameter int PARA_ADDR_WD   = 16,
  parameter int PARA_BUF_ID_WD = 2,
  parameter int PARA_CTU_SIZE  = 128,
  // Row-padding matters for 4-wide chroma (8-wide luma CUs).
  parameter int PARA_LOCAL_WORDS =
    (((PARA_MAX_CU + 7)/8) * PARA_MAX_CU) +
    (2 * (((PARA_MAX_CU/2) + 7)/8) * (PARA_MAX_CU/2)),
  parameter int PARA_LOCAL_ADDR_WD = $clog2(PARA_LOCAL_WORDS)
)(
  input                                          I_CLK,
  input                                          I_RESETN,
  input                                          I_CLEAR_ERROR,

  // One Leaf-CU descriptor. X/Y are CTU-relative LUMA coords.
  input                                          I_CU_VALID,
  output logic                                   O_CU_READY,
  input        [PARA_CTU_ID_WD-1:0]              I_CU_CTU_ID,
  input        [PARA_CU_ID_WD-1:0]               I_CU_CU_ID,
  input        [PARA_BUF_ID_WD-1:0]              I_CU_BUFFER_ID,
  input        [6:0]                             I_CU_X,
  input        [6:0]                             I_CU_Y,
  input        [5:0]                             I_CU_WIDTH,
  input        [5:0]                             I_CU_HEIGHT,
  // Valid luma coverage from Partition node data [36:29]/[28:21].
  // The current full-block Intra/TQ baseline cannot code partial CUs.
  input        [7:0]                             I_CU_VALID_WIDTH,
  input        [7:0]                             I_CU_VALID_HEIGHT,
  input                                          I_RELEASE_CU,
  output logic                                   O_PREFETCH_DONE,
  output logic                                   O_CU_DONE,
  output logic                                   O_BUSY,
  output logic                                   O_ERROR,

  // Connect to CTU_ORIGINAL_READ_MUX residual client.
  output logic                                   O_ORIG_RD_VALID,
  output logic [PARA_BUF_ID_WD-1:0]              O_ORIG_RD_BUFFER_ID,
  output logic [1:0]                             O_ORIG_RD_PLANE,
  output logic [PARA_ADDR_WD-1:0]                O_ORIG_RD_ADDR,
  input                                          I_ORIG_RD_DATA_VALID,
  input        [127:0]                           I_ORIG_RD_DATA,

  // Final prediction stream from ENCODER_TU_SCHEDULER.
  // X_BASE/Y refer to the top-left of CURRENT COMPONENT JOB,
  // i.e. they are local to the component's CU plane.
  input                                          I_PRED_VALID,
  output logic                                   O_PRED_READY,
  input        [39:0]                            I_PRED_DATA,
  input        [3:0]                             I_PRED_LANE_VALID,
  input        [4:0]                             I_PRED_X_BASE,
  input        [4:0]                             I_PRED_Y,
  input                                          I_PRED_ROW_LAST,
  input                                          I_PRED_TU_START,
  input                                          I_PRED_TU_LAST,
  input        [1:0]                             I_PRED_COMPONENT_ID,
  input        [PARA_TU_ID_WD-1:0]               I_PRED_TU_ID,
  input        [PARA_CTU_ID_WD-1:0]              I_PRED_CTU_ID,
  input        [PARA_CU_ID_WD-1:0]               I_PRED_CU_ID,

  // Connect to TQ_PRIMARY_TRANSFORM_TOP; additional metadata
  // remains available for a separate integration sideband.
  output logic                                   O_RES_VALID,
  input                                          I_RES_READY,
  output logic [63:0]                            O_RES_DATA,
  output logic [3:0]                             O_RES_LANE_VALID,
  output logic                                   O_RES_ROW_LAST,
  output logic                                   O_RES_TU_START,
  output logic                                   O_RES_TU_LAST,
  output logic [1:0]                             O_RES_COMPONENT_ID,
  output logic [PARA_TU_ID_WD-1:0]               O_RES_TU_ID,
  output logic [PARA_CTU_ID_WD-1:0]              O_RES_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]               O_RES_CU_ID);
  localparam logic [1:0] PARA_Y  = 2'd0;
  localparam logic [1:0] PARA_CB = 2'd1;
  localparam logic [1:0] PARA_CR = 2'd2;
  localparam int PARA_CTU_Y_STRIDE = PARA_CTU_SIZE/8;
  localparam int PARA_CTU_C_STRIDE = PARA_CTU_SIZE/16;

  typedef enum logic [3:0] {
    ST_IDLE, ST_PREP, ST_REQ0, ST_WAIT0, ST_REQ1,
    ST_WAIT1, ST_STORE, ST_READY, ST_PRED_READ,
    ST_PRED_SUB, ST_PRED_OUTPUT, ST_DONE, ST_ERROR
  } state_t;
  state_t r_state;
  state_t w_state;

  // Local buffer is 128-bit wide: 8 samples (16-bit storage) per word.
  // Array intentionally has no reset, permitting RAM inference.
  (* ram_style = "block" *) logic [127:0] r_local_mem [0:PARA_LOCAL_WORDS-1];
  logic [127:0] r_local_read_data;

  logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
  logic [PARA_CU_ID_WD-1:0]  r_cu_id;
  logic [PARA_BUF_ID_WD-1:0] r_buffer_id;
  logic [6:0] r_cu_x, r_cu_y;
  logic [5:0] r_width, r_height;
  logic [1:0] r_plane;
  logic [5:0] r_row;
  logic [2:0] r_group;
  logic [PARA_LOCAL_ADDR_WD:0] r_write_index;
  logic [127:0] r_word0, r_word1;
  logic [127:0] w_aligned_word;
  logic [255:0] w_window;
  logic [7:0] w_offset_bits;
  logic [7:0] w_origin_x, w_origin_y;
  logic [5:0] w_plane_width, w_plane_height;
  logic [4:0] w_words_per_row;
  logic [4:0] w_ctu_stride;
  logic [7:0] w_absolute_x;
  logic [7:0] w_absolute_y;
  logic [2:0] w_word_offset;
  logic [15:0] w_base_addr;
  logic w_need_second;
  logic [5:0] w_remaining;
  logic [3:0] w_take_samples;
  logic w_last_group;
  logic w_last_row;
  logic w_last_plane;
  logic [PARA_LOCAL_ADDR_WD-1:0] w_pred_word_addr;
  logic [5:0] w_pred_width;
  logic [5:0] w_pred_height;
  logic [PARA_LOCAL_ADDR_WD:0] w_pred_plane_base;
  logic [15:0] w_pred_local_index;
  logic w_pred_coords_valid;
  logic [63:0] w_selected_original;
  logic [63:0] w_subtract_data;

  logic [39:0] r_pred_data;
  logic r_pred_high_half;
  logic [3:0]  r_pred_mask;
  logic r_pred_row_last, r_pred_start, r_pred_last;
  logic [1:0] r_pred_plane;
  logic [PARA_TU_ID_WD-1:0] r_pred_tu_id;
  logic [PARA_CTU_ID_WD-1:0] r_pred_ctu_id;
  logic [PARA_CU_ID_WD-1:0] r_pred_cu_id;
  logic r_error;
  // One TU/component job, row-major four-sample beats.
  // These counters advance ONLY when the residual output is accepted.
  logic [1:0] r_expected_plane;
  logic [5:0] r_expected_x;
  logic [5:0] r_expected_y;
  logic [PARA_TU_ID_WD-1:0] r_expected_tu_id;
  logic [5:0] w_expected_width;
  logic [5:0] w_expected_height;
  logic w_expected_first;
  logic w_expected_row_last;
  logic w_expected_tu_last;
  logic w_pred_sequence_valid;
  logic w_pred_beat_valid;
  logic w_cu_geometry_valid;
  logic w_pred_accept;
  logic w_res_accept;

  // Geometry and addresses for CTU reads. CTU words are row-major,
  // with 16 luma words/row and 8 chroma words/row at CTU=128.
  always_comb begin
    w_origin_x = (r_plane == PARA_Y) ? {1'b0,r_cu_x} : {2'b00,r_cu_x[6:1]};
    w_origin_y = (r_plane == PARA_Y) ? {1'b0,r_cu_y} : {2'b00,r_cu_y[6:1]};
    w_plane_width  = (r_plane == PARA_Y) ? r_width : {1'b0,r_width[5:1]};
    w_plane_height = (r_plane == PARA_Y) ? r_height : {1'b0,r_height[5:1]};
    w_ctu_stride = (r_plane == PARA_Y) ? 5'(PARA_CTU_Y_STRIDE) : 5'(PARA_CTU_C_STRIDE);
    w_absolute_x = w_origin_x + {2'b00,r_group,3'b000};
    w_absolute_y = w_origin_y + {2'b00,r_row};
    w_word_offset = w_absolute_x[2:0];
    w_base_addr = (16'(w_absolute_y) * 16'(w_ctu_stride)) + {8'b0,w_absolute_x[7:3]};
    w_words_per_row = (6'(w_plane_width) + 6'd7) >> 3;
    w_remaining = w_plane_width - ({3'b000,r_group} << 3);
    w_take_samples = (w_remaining >= 6'd8) ? 4'd8 : {1'b0,w_remaining[2:0]};
    w_need_second = ({1'b0,w_word_offset} + {1'b0,w_take_samples}) > 5'd8;
    w_last_group = ({3'b000,r_group} + 6'd1 >= w_words_per_row);
    w_last_row = ({1'b0,r_row} + 7'd1 >= {1'b0,w_plane_height});
    w_last_plane = (r_plane == PARA_CR);

    w_window = {r_word1,r_word0};
    w_offset_bits = {w_word_offset,4'b0000};
    w_aligned_word = (w_window >> w_offset_bits);
    // Zero pad the unused samples of a narrow/partial local word.
    for (int i = 0; i < 8; i++) begin
      if (({3'b0,r_group} * 8 + i) >= w_plane_width)
        w_aligned_word[i*16 +: 16] = 16'd0;
    end
  end

  // Prediction addresses are relative to CU, using a tightly packed
  // Y -> Cb -> Cr layout with 8-sample row words.
  always_comb begin
    w_pred_width = (I_PRED_COMPONENT_ID == PARA_Y) ? r_width : (r_width >> 1);
    w_pred_height = (I_PRED_COMPONENT_ID == PARA_Y) ? r_height : (r_height >> 1);
    w_pred_plane_base = '0;
    if (I_PRED_COMPONENT_ID != PARA_Y)
      w_pred_plane_base = PARA_LOCAL_ADDR_WD'( ((int'(r_width)+7)/8) * int'(r_height) );
    if (I_PRED_COMPONENT_ID == PARA_CR)
      w_pred_plane_base = w_pred_plane_base +
          PARA_LOCAL_ADDR_WD'( ((int'(r_width/2)+7)/8) * int'(r_height/2) );
    w_pred_local_index = 16'(w_pred_plane_base) +
      (16'(I_PRED_Y) * ((16'(w_pred_width)+7)>>3)) + (16'(I_PRED_X_BASE)>>3);
    w_pred_word_addr = PARA_LOCAL_ADDR_WD'(w_pred_local_index);
    w_pred_coords_valid = (I_PRED_COMPONENT_ID <= PARA_CR) &&
        (I_PRED_X_BASE < w_pred_width) &&
        (I_PRED_Y < w_pred_height) &&
        (I_PRED_X_BASE[1:0] == 2'b00) &&
        (w_pred_local_index < PARA_LOCAL_WORDS) &&
        (({1'b0,I_PRED_X_BASE} + 6'd4) <= {1'b0,w_pred_width});
  end

  // This baseline has full 4-sample prediction beats and one TU per
  // component. Enforce the exact Y -> Cb -> Cr raster sequence.
  // Checking an accepted beat rather than VALID alone preserves RV stalls.
  always_comb begin
    w_expected_width = (r_expected_plane == PARA_Y) ?
                       r_width : (r_width >> 1);
    w_expected_height = (r_expected_plane == PARA_Y) ?
                        r_height : (r_height >> 1);
    w_expected_first = (r_expected_x == 6'd0) &&
                       (r_expected_y == 6'd0);
    w_expected_row_last = (r_expected_x + 6'd4) == w_expected_width;
    w_expected_tu_last = w_expected_row_last &&
                         ((r_expected_y + 6'd1) == w_expected_height);
    w_pred_sequence_valid =
      (I_PRED_COMPONENT_ID == r_expected_plane) &&
      (I_PRED_X_BASE == r_expected_x[4:0]) &&
      (I_PRED_Y == r_expected_y[4:0]) &&
      (I_PRED_LANE_VALID == 4'b1111) &&
      (I_PRED_ROW_LAST == w_expected_row_last) &&
      (I_PRED_TU_START == w_expected_first) &&
      (I_PRED_TU_LAST == w_expected_tu_last) &&
      (w_expected_first || (I_PRED_TU_ID == r_expected_tu_id));
    w_pred_beat_valid = w_pred_coords_valid &&
                        w_pred_sequence_valid &&
                        (I_PRED_CTU_ID == r_ctu_id) &&
                        (I_PRED_CU_ID == r_cu_id);
    w_pred_accept = I_PRED_VALID && O_PRED_READY;
    w_res_accept = O_RES_VALID && I_RES_READY;
  end

  // Partial Leaf CUs are deliberately rejected instead of silently coding
  // padded samples: Intra currently emits all four lanes as valid, and no
  // downstream valid-region sideband exists. Partial CTU edge leaves must
  // first be split into fully valid leaves by Partition.
  always_comb begin
    w_cu_geometry_valid =
      ((I_CU_WIDTH == 6'd8) || (I_CU_WIDTH == 6'd16) ||
       (I_CU_WIDTH == 6'd32)) &&
      ((I_CU_HEIGHT == 6'd8) || (I_CU_HEIGHT == 6'd16) ||
       (I_CU_HEIGHT == 6'd32)) &&
      (I_CU_WIDTH <= PARA_MAX_CU) &&
      (I_CU_HEIGHT <= PARA_MAX_CU) &&
      (I_CU_X[1:0] == 2'b00) &&
      (I_CU_Y[1:0] == 2'b00) &&
      ({2'b00, I_CU_X} + {3'b000, I_CU_WIDTH} <= 9'(PARA_CTU_SIZE)) &&
      ({2'b00, I_CU_Y} + {3'b000, I_CU_HEIGHT} <= 9'(PARA_CTU_SIZE)) &&
      (I_CU_VALID_WIDTH == {2'b00, I_CU_WIDTH}) &&
      (I_CU_VALID_HEIGHT == {2'b00, I_CU_HEIGHT});
  end

  always_comb begin
    w_selected_original = r_pred_high_half ? r_local_read_data[127:64] : r_local_read_data[63:0];
    w_subtract_data = '0;
    for (int i = 0; i < 4; i++) begin
      if (r_pred_mask[i]) begin
        w_subtract_data[i*16 +:16] =
          16'($signed({1'b0,w_selected_original[i*16 +:10]}) -
              $signed({1'b0,r_pred_data[i*10 +:10]}));
      end
    end
  end

  // Request is combinational, the RAM registers its response on the
  // request clock; WAIT0/WAIT1 consume the registered response.
  always_comb begin
    O_ORIG_RD_VALID = !I_CLEAR_ERROR &&
                      ((r_state == ST_REQ0) || (r_state == ST_REQ1));
    O_ORIG_RD_BUFFER_ID = r_buffer_id;
    O_ORIG_RD_PLANE = r_plane;
    O_ORIG_RD_ADDR = w_base_addr + 16'(r_state == ST_REQ1);
    O_CU_READY = (r_state == ST_IDLE) && !I_CLEAR_ERROR;
    O_PREFETCH_DONE = !I_CLEAR_ERROR &&
                      ((r_state == ST_READY) ||
                       (r_state == ST_PRED_READ) ||
                       (r_state == ST_PRED_SUB) ||
                       (r_state == ST_PRED_OUTPUT) ||
                       (r_state == ST_DONE));
    O_CU_DONE = (r_state == ST_DONE) && !I_CLEAR_ERROR;
    O_BUSY = (r_state != ST_IDLE) && (r_state != ST_ERROR);
    O_ERROR = r_error || (r_state == ST_ERROR);
    O_PRED_READY = (r_state == ST_READY) && !I_CLEAR_ERROR;
  end

  // Control state transition.
  always_comb begin
    w_state = r_state;
    unique casez (r_state)
      ST_IDLE: if (I_CU_VALID && O_CU_READY) begin
        if (!w_cu_geometry_valid) w_state = ST_ERROR;
        else w_state = ST_PREP;
      end
      ST_PREP: w_state = ST_REQ0;
      ST_REQ0: w_state = ST_WAIT0;
      ST_WAIT0: if (I_ORIG_RD_DATA_VALID) begin
        if (w_need_second) w_state = ST_REQ1;
        else w_state = ST_STORE;
      end
      ST_REQ1: w_state = ST_WAIT1;
      ST_WAIT1: if (I_ORIG_RD_DATA_VALID) w_state = ST_STORE;
      ST_STORE: begin
        if (w_last_plane && w_last_group && w_last_row)
          w_state = ST_READY;
        else
          w_state = ST_PREP;
      end
      ST_READY: if (w_pred_accept) begin
        if (w_pred_beat_valid) w_state = ST_PRED_READ;
        else w_state = ST_ERROR;
      end
      ST_PRED_READ: w_state = ST_PRED_SUB;
      ST_PRED_SUB: w_state = ST_PRED_OUTPUT;
      ST_PRED_OUTPUT: if (w_res_accept) begin
        if (w_expected_tu_last && r_expected_plane == PARA_CR)
          w_state = ST_DONE;
        else w_state = ST_READY;
      end
      ST_DONE: if (I_RELEASE_CU) w_state = ST_IDLE;
      ST_ERROR: w_state = ST_ERROR; // I_CLEAR_ERROR has highest priority.
      default: w_state = ST_ERROR;
    endcase
  end

  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) r_state <= ST_IDLE;
    else if (I_CLEAR_ERROR) r_state <= ST_IDLE;
    else r_state <= w_state;
  end

  // Prefetch datapath and counters. Memory arrays are NOT reset.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_ctu_id <= '0;
      r_cu_id <= '0;
      r_buffer_id <= '0;
      r_cu_x <= '0;
      r_cu_y <= '0;
      r_width <= '0;
      r_height <= '0;
      r_plane <= PARA_Y;
      r_row <= '0;
      r_group <= '0;
      r_write_index <= '0;
      r_word0 <= '0;
      r_word1 <= '0;
      r_error <= 1'b0;
    end
    else if (I_CLEAR_ERROR) begin
      r_error <= 1'b0;
      r_plane <= PARA_Y;
      r_row <= '0;
      r_group <= '0;
      r_write_index <= '0;
    end
    else begin
      if (r_state == ST_IDLE && I_CU_VALID && O_CU_READY) begin
        if (w_cu_geometry_valid) begin
          r_ctu_id <= I_CU_CTU_ID;
          r_cu_id <= I_CU_CU_ID;
          r_buffer_id <= I_CU_BUFFER_ID;
          r_cu_x <= I_CU_X;
          r_cu_y <= I_CU_Y;
          r_width <= I_CU_WIDTH;
          r_height <= I_CU_HEIGHT;
          r_plane <= PARA_Y;
          r_row <= '0;
          r_group <= '0;
          r_write_index <= '0;
          r_error <= 1'b0;
        end
        else begin
          r_error <= 1'b1;
        end
      end
      if (r_state == ST_WAIT0 && I_ORIG_RD_DATA_VALID)
        r_word0 <= I_ORIG_RD_DATA;
      if (r_state == ST_WAIT1 && I_ORIG_RD_DATA_VALID)
        r_word1 <= I_ORIG_RD_DATA;
      if (r_state == ST_STORE) begin
        r_write_index <= r_write_index + 1'b1;
        if (w_last_group) begin
          r_group <= '0;
          if (w_last_row) begin
            r_row <= '0;
            if (!w_last_plane)
              r_plane <= r_plane + 2'd1;
          end
          else
            r_row <= r_row + 6'd1;
        end
        else
          r_group <= r_group + 3'd1;
      end
      if (r_state == ST_READY && w_pred_accept && !w_pred_beat_valid)
        r_error <= 1'b1;
    end
  end

  // Keep component, raster coordinates and TU ID aligned to the residual
  // output handshake. Do not advance on mere prediction acceptance.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_expected_plane <= PARA_Y;
      r_expected_x <= '0;
      r_expected_y <= '0;
      r_expected_tu_id <= '0;
    end
    else if (I_CLEAR_ERROR ||
             (r_state == ST_IDLE && I_CU_VALID && O_CU_READY)) begin
      r_expected_plane <= PARA_Y;
      r_expected_x <= '0;
      r_expected_y <= '0;
      r_expected_tu_id <= '0;
    end
    else begin
      if (r_state == ST_READY && w_pred_accept &&
          w_pred_beat_valid && w_expected_first)
        r_expected_tu_id <= I_PRED_TU_ID;
      if (r_state == ST_PRED_OUTPUT && w_res_accept) begin
        if (w_expected_row_last) begin
          r_expected_x <= '0;
          if (w_expected_tu_last) begin
            r_expected_y <= '0;
            if (r_expected_plane != PARA_CR)
              r_expected_plane <= r_expected_plane + 2'd1;
          end
          else
            r_expected_y <= r_expected_y + 6'd1;
        end
        else
          r_expected_x <= r_expected_x + 6'd4;
      end
    end
  end

  always_ff @(posedge I_CLK) begin
    if (!I_CLEAR_ERROR && r_state == ST_STORE)
      r_local_mem[r_write_index[PARA_LOCAL_ADDR_WD-1:0]] <= w_aligned_word;
    if (r_state == ST_READY && w_pred_accept && w_pred_beat_valid)
      r_local_read_data <= r_local_mem[w_pred_word_addr];
  end

  // Stable output register under downstream backpressure.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_pred_data <= '0; r_pred_mask <= '0; r_pred_high_half <= 1'b0;
      r_pred_row_last <= 1'b0; r_pred_start <= 1'b0;
      r_pred_last <= 1'b0; r_pred_plane <= '0;
      r_pred_tu_id <= '0; r_pred_ctu_id <= '0; r_pred_cu_id <= '0;
      O_RES_DATA <= '0; O_RES_LANE_VALID <= '0;
      O_RES_ROW_LAST <= 1'b0; O_RES_TU_START <= 1'b0;
      O_RES_TU_LAST <= 1'b0; O_RES_COMPONENT_ID <= '0;
      O_RES_TU_ID <= '0; O_RES_CTU_ID <= '0; O_RES_CU_ID <= '0;
    end else begin
      if (!I_CLEAR_ERROR && r_state == ST_READY &&
          w_pred_accept && w_pred_beat_valid) begin
        r_pred_data <= I_PRED_DATA;
        r_pred_high_half <= I_PRED_X_BASE[2];
        r_pred_mask <= I_PRED_LANE_VALID;
        r_pred_row_last <= I_PRED_ROW_LAST;
        r_pred_start <= I_PRED_TU_START;
        r_pred_last <= I_PRED_TU_LAST;
        r_pred_plane <= I_PRED_COMPONENT_ID;
        r_pred_tu_id <= I_PRED_TU_ID;
        r_pred_ctu_id <= I_PRED_CTU_ID;
        r_pred_cu_id <= I_PRED_CU_ID;
      end
      if (!I_CLEAR_ERROR && r_state == ST_PRED_SUB) begin
        O_RES_DATA <= w_subtract_data;
        O_RES_LANE_VALID <= r_pred_mask;
        O_RES_ROW_LAST <= r_pred_row_last;
        O_RES_TU_START <= r_pred_start;
        O_RES_TU_LAST <= r_pred_last;
        O_RES_COMPONENT_ID <= r_pred_plane;
        O_RES_TU_ID <= r_pred_tu_id;
        O_RES_CTU_ID <= r_pred_ctu_id;
        O_RES_CU_ID <= r_pred_cu_id;
      end
    end
  end
  assign O_RES_VALID = (r_state == ST_PRED_OUTPUT) && !I_CLEAR_ERROR;
endmodule: RESIDUAL_GENERATOR
