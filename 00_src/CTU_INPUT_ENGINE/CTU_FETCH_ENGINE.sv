//-----------------------------------------------------------
// Description: 10-bit CTU fetch engine for planar YUV 4:2:0.
//              AXI row-burst version.
//              Each 10-bit sample is stored in one 16-bit little-endian
//              container; valid sample bits are [9:0], upper bits are zero.
//              A 128-bit AXI beat therefore contains 8 samples.
//
//              Protocol error handling:
//              - I_RD_DATA_ERROR is sampled with accepted read data beats.
//              - After the first error, the current AXI burst is drained.
//              - No more data is written into CTU_BUFFER_POOL.
//              - O_FETCH_ERROR_VALID is pulsed and the buffer is returned
//                to CTU_BUFFER_MANAGER as an invalid/aborted buffer.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_FETCH_ENGINE
  #(
    parameter int PARA_NUM_BUFFERS     = 2,
    parameter int PARA_BUF_ID_W        = 1,
    parameter int PARA_CTU_TASK_WD     = 136,
    parameter int PARA_CTU_SIZE        = 128,
    parameter int PARA_DATA_WD         = 128,
    parameter int PARA_SAMPLE_BITS     = 10,
    parameter int PARA_SAMPLE_STORE_WD = 16)
  (
    input I_CLK,
    input I_RST_N,

    input [15:0] I_FRAME_WIDTH,
    input [15:0] I_FRAME_HEIGHT,

    input [31:0] I_BASE_Y,
    input [31:0] I_BASE_U,
    input [31:0] I_BASE_V,

    // Strides are expressed in BYTES.
    input [15:0] I_STRIDE_Y,
    input [15:0] I_STRIDE_U,
    input [15:0] I_STRIDE_V,

    input                          I_FETCH_TASK_VALID,
    output logic                   O_FETCH_TASK_READY,
    input [PARA_CTU_TASK_WD - 1:0] I_FETCH_TASK_PAYLOAD,
    input [PARA_BUF_ID_W - 1:0]    I_FETCH_TASK_BUFFER_ID,

    // ============================================================
    // Read command interface to CTU_AXI_READ_MASTER
    // ============================================================
    output logic        O_RD_CMD_VALID,
    input               I_RD_CMD_READY,
    output logic [31:0] O_RD_CMD_ADDR,
    output logic [7:0]  O_RD_CMD_BEATS,

    // ============================================================
    // Read data interface from CTU_AXI_READ_MASTER
    // ============================================================
    input                      I_RD_DATA_VALID,
    output logic               O_RD_DATA_READY,
    input [PARA_DATA_WD - 1:0] I_RD_DATA,
    input                      I_RD_DATA_LAST,
    input                      I_RD_DATA_ERROR,

    // ============================================================
    // Write interface to CTU_BUFFER_POOL
    // ============================================================
    output logic                            O_BUFF_WR_VALID,
    output logic [PARA_BUF_ID_W - 1:0]      O_BUFF_WR_BUFF_ID,
    output logic [1:0]                      O_BUFF_WR_PLANE,
    output logic [15:0]                     O_BUFF_WR_ADDR,
    output logic [PARA_DATA_WD - 1:0]       O_BUFF_WR_DATA,
    output logic [(PARA_DATA_WD / 8) - 1:0] O_BUFF_WR_STRB,

    output logic                          O_FETCH_DONE_VALID,
    output logic [PARA_BUF_ID_W - 1:0]    O_FETCH_DONE_BUFF_ID,
    output logic [PARA_CTU_TASK_WD - 1:0] O_FETCH_DONE_TASK,

    // Asserted for one cycle when the current CTU fetch is aborted because
    // CTU_AXI_READ_MASTER reported an AXI protocol/response error.
    output logic                          O_FETCH_ERROR_VALID,
    output logic [PARA_BUF_ID_W - 1:0]    O_FETCH_ERROR_BUFF_ID,
    output logic [PARA_CTU_TASK_WD - 1:0] O_FETCH_ERROR_TASK,

    output logic O_FETCH_BUSY
  );

  localparam int BUS_BYTES        = PARA_DATA_WD / 8;
  localparam int BYTES_PER_SAMPLE = PARA_SAMPLE_STORE_WD / 8;
  localparam int SAMPLES_PER_WORD = PARA_DATA_WD / PARA_SAMPLE_STORE_WD;
  localparam int CTU_SIZE_C       = PARA_CTU_SIZE / 2;
  localparam int Y_WORDS_PER_ROW  = PARA_CTU_SIZE / SAMPLES_PER_WORD;
  localparam int C_WORDS_PER_ROW  = CTU_SIZE_C / SAMPLES_PER_WORD;
  localparam int PART_CNT_W       = $clog2(SAMPLES_PER_WORD + 1);

  localparam logic [1:0] PLANE_Y = 2'd0;
  localparam logic [1:0] PLANE_U = 2'd1;
  localparam logic [1:0] PLANE_V = 2'd2;

  localparam int TASK_ORIGIN_X_LSB       = 64;
  localparam int TASK_ORIGIN_X_MSB       = 79;
  localparam int TASK_ORIGIN_Y_LSB       = 80;
  localparam int TASK_ORIGIN_Y_MSB       = 95;
  localparam int TASK_VALID_WIDTH_Y_LSB  = 96;
  localparam int TASK_VALID_WIDTH_Y_MSB  = 111;
  localparam int TASK_VALID_HEIGHT_Y_LSB = 112;
  localparam int TASK_VALID_HEIGHT_Y_MSB = 127;

  typedef enum logic [3:0] {
    ST_IDLE         = 4'd0,
    ST_LOAD_TASK    = 4'd1,
    ST_ROW_DISPATCH = 4'd2,
    ST_AXI_CMD      = 4'd3,
    ST_AXI_BURST    = 4'd4,
    ST_RIGHT_PAD    = 4'd5,
    ST_BOTTOM_PAD   = 4'd6,
    ST_NEXT_ROW     = 4'd7,
    ST_NEXT_PLANE   = 4'd8,
    ST_DONE         = 4'd9,
    ST_ERROR        = 4'd10
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [PARA_CTU_TASK_WD - 1:0] r_current_task;
  logic [PARA_BUF_ID_W - 1:0]    r_current_buffer_id;
  logic [1:0]                    r_current_plane;

  logic [15:0] r_row_idx;
  logic [15:0] r_beat_cnt;
  logic [15:0] r_pad_word_idx;
  logic [15:0] r_axi_burst_beats;

  logic [15:0] r_origin_x_c;
  logic [15:0] r_origin_y_c;
  logic [15:0] r_valid_width_c;
  logic [15:0] r_valid_height_c;

  logic [PARA_SAMPLE_STORE_WD - 1:0] r_last_sample_in_row;
  logic [PARA_DATA_WD - 1:0]         r_edge_row_word[0:Y_WORDS_PER_ROW - 1];

  logic r_fetch_error_seen;

  logic [15:0] w_task_origin_x;
  logic [15:0] w_task_origin_y;
  logic [15:0] w_task_valid_width_y;
  logic [15:0] w_task_valid_height_y;

  logic [15:0] w_current_valid_width;
  logic [15:0] w_current_valid_height;
  logic [15:0] w_current_full_height;
  logic [15:0] w_current_full_words_per_row;
  logic [15:0] w_axi_burst_beats;

  logic [PART_CNT_W - 1:0] w_partial_valid_sample_cnt;

  logic w_fetch_task_fire;
  logic w_rd_cmd_fire;
  logic w_rd_data_fire;
  logic w_rd_data_error_fire;
  logic w_axi_burst_done;

  logic w_row_is_valid;
  logic w_last_valid_row_in_plane;
  logic w_last_full_row_in_plane;
  logic w_expected_last_beat;
  logic w_partial_word;
  logic w_need_right_pad;
  logic w_right_pad_done;
  logic w_bottom_pad_done;

  logic [31:0] w_row_base_addr;
  logic [15:0] w_row_local_base_addr;
  logic [15:0] w_buff_wr_addr_axi;
  logic [15:0] w_buff_wr_addr_pad;

  logic [PARA_SAMPLE_STORE_WD - 1:0] w_right_edge_sample;
  logic [PARA_DATA_WD - 1:0]         w_mem_write_data_final;
  logic [PARA_DATA_WD - 1:0]         w_right_pad_word;

  logic                      w_edge_row_wr_valid;
  logic [15:0]               w_edge_row_wr_addr;
  logic [PARA_DATA_WD - 1:0] w_edge_row_wr_data;

  // ============================================================
  // Task field decode
  // ============================================================
  assign w_task_origin_x =
           r_current_task[TASK_ORIGIN_X_MSB:TASK_ORIGIN_X_LSB];

  assign w_task_origin_y =
           r_current_task[TASK_ORIGIN_Y_MSB:TASK_ORIGIN_Y_LSB];

  assign w_task_valid_width_y =
           r_current_task[TASK_VALID_WIDTH_Y_MSB:TASK_VALID_WIDTH_Y_LSB];

  assign w_task_valid_height_y =
           r_current_task[TASK_VALID_HEIGHT_Y_MSB:TASK_VALID_HEIGHT_Y_LSB];

  assign O_FETCH_TASK_READY = (r_current_state == ST_IDLE);
  assign O_FETCH_BUSY       = (r_current_state != ST_IDLE);

  assign w_fetch_task_fire    = I_FETCH_TASK_VALID & O_FETCH_TASK_READY;
  assign w_rd_cmd_fire        = O_RD_CMD_VALID & I_RD_CMD_READY;
  assign w_rd_data_fire       = I_RD_DATA_VALID & O_RD_DATA_READY;
  assign w_rd_data_error_fire = w_rd_data_fire & I_RD_DATA_ERROR;
  assign w_axi_burst_done     = w_rd_data_fire & I_RD_DATA_LAST;

  // ============================================================
  // Current plane information
  // ============================================================
  always_comb begin
    w_current_valid_width        = 16'd0;
    w_current_valid_height       = 16'd0;
    w_current_full_height        = 16'd0;
    w_current_full_words_per_row = 16'd0;

    unique case (r_current_plane)
      PLANE_Y: begin
        w_current_valid_width        = w_task_valid_width_y;
        w_current_valid_height       = w_task_valid_height_y;
        w_current_full_height        = PARA_CTU_SIZE;
        w_current_full_words_per_row = Y_WORDS_PER_ROW;
      end

      PLANE_U, PLANE_V: begin
        w_current_valid_width        = r_valid_width_c;
        w_current_valid_height       = r_valid_height_c;
        w_current_full_height        = CTU_SIZE_C;
        w_current_full_words_per_row = C_WORDS_PER_ROW;
      end

      default: begin
        w_current_valid_width        = 16'd0;
        w_current_valid_height       = 16'd0;
        w_current_full_height        = 16'd0;
        w_current_full_words_per_row = 16'd0;
      end
    endcase
  end

  assign w_axi_burst_beats =
           (w_current_valid_width + SAMPLES_PER_WORD - 1) / SAMPLES_PER_WORD;

  assign w_partial_valid_sample_cnt =
           w_current_valid_width % SAMPLES_PER_WORD;

  assign w_row_is_valid =
           (r_row_idx < w_current_valid_height);

  assign w_last_valid_row_in_plane =
           (w_current_valid_height != 0) &&
           (r_row_idx == (w_current_valid_height - 1));

  assign w_last_full_row_in_plane =
           (r_row_idx == (w_current_full_height - 1));

  assign w_expected_last_beat =
           (r_axi_burst_beats != 0) &&
           (r_beat_cnt == (r_axi_burst_beats - 1));

  assign w_partial_word =
           w_expected_last_beat && (w_partial_valid_sample_cnt != 0);

  assign w_need_right_pad =
           (r_axi_burst_beats < w_current_full_words_per_row);

  assign w_right_pad_done =
           (r_pad_word_idx == (w_current_full_words_per_row - 1));

  assign w_bottom_pad_done =
           (r_pad_word_idx == (w_current_full_words_per_row - 1));

  // ============================================================
  // AXI row base address
  // ============================================================
  always_comb begin
    unique case (r_current_plane)
      PLANE_Y: begin
        w_row_base_addr =
          I_BASE_Y +
          ((w_task_origin_y + r_row_idx) * I_STRIDE_Y) +
          (w_task_origin_x * BYTES_PER_SAMPLE);
      end

      PLANE_U: begin
        w_row_base_addr =
          I_BASE_U +
          ((r_origin_y_c + r_row_idx) * I_STRIDE_U) +
          (r_origin_x_c * BYTES_PER_SAMPLE);
      end

      PLANE_V: begin
        w_row_base_addr =
          I_BASE_V +
          ((r_origin_y_c + r_row_idx) * I_STRIDE_V) +
          (r_origin_x_c * BYTES_PER_SAMPLE);
      end

      default: begin
        w_row_base_addr = 32'd0;
      end
    endcase
  end

  // ============================================================
  // Local Buffer Pool address
  // ============================================================
  always_comb begin
    if (r_current_plane == PLANE_Y) begin
      w_row_local_base_addr = r_row_idx * Y_WORDS_PER_ROW;
    end else begin
      w_row_local_base_addr = r_row_idx * C_WORDS_PER_ROW;
    end
  end

  assign w_buff_wr_addr_axi = w_row_local_base_addr + r_beat_cnt;
  assign w_buff_wr_addr_pad = w_row_local_base_addr + r_pad_word_idx;

  // ============================================================
  // Normalize 10-bit samples from AXI read data
  // ============================================================
  logic [15:0] w_norm_lane_0;
  logic [15:0] w_norm_lane_1;
  logic [15:0] w_norm_lane_2;
  logic [15:0] w_norm_lane_3;
  logic [15:0] w_norm_lane_4;
  logic [15:0] w_norm_lane_5;
  logic [15:0] w_norm_lane_6;
  logic [15:0] w_norm_lane_7;
  logic [15:0] w_edge_lane;

  assign w_norm_lane_0 = {6'b0, I_RD_DATA[9:0]};
  assign w_norm_lane_1 = {6'b0, I_RD_DATA[25:16]};
  assign w_norm_lane_2 = {6'b0, I_RD_DATA[41:32]};
  assign w_norm_lane_3 = {6'b0, I_RD_DATA[57:48]};
  assign w_norm_lane_4 = {6'b0, I_RD_DATA[73:64]};
  assign w_norm_lane_5 = {6'b0, I_RD_DATA[89:80]};
  assign w_norm_lane_6 = {6'b0, I_RD_DATA[105:96]};
  assign w_norm_lane_7 = {6'b0, I_RD_DATA[121:112]};

  always_comb begin
    unique case (w_partial_valid_sample_cnt)
      4'd1:
        w_edge_lane = w_norm_lane_0;
      4'd2:
        w_edge_lane = w_norm_lane_1;
      4'd3:
        w_edge_lane = w_norm_lane_2;
      4'd4:
        w_edge_lane = w_norm_lane_3;
      4'd5:
        w_edge_lane = w_norm_lane_4;
      4'd6:
        w_edge_lane = w_norm_lane_5;
      4'd7:
        w_edge_lane = w_norm_lane_6;
      default:
        w_edge_lane = w_norm_lane_7;
    endcase
  end

  assign w_right_edge_sample = w_edge_lane;

  // Padding inside the last partial beat.
  always_comb begin
    w_mem_write_data_final[15:0]    = w_norm_lane_0;
    w_mem_write_data_final[31:16]   = (w_partial_word && (w_partial_valid_sample_cnt <= 4'd1)) ? w_edge_lane : w_norm_lane_1;
    w_mem_write_data_final[47:32]   = (w_partial_word && (w_partial_valid_sample_cnt <= 4'd2)) ? w_edge_lane : w_norm_lane_2;
    w_mem_write_data_final[63:48]   = (w_partial_word && (w_partial_valid_sample_cnt <= 4'd3)) ? w_edge_lane : w_norm_lane_3;
    w_mem_write_data_final[79:64]   = (w_partial_word && (w_partial_valid_sample_cnt <= 4'd4)) ? w_edge_lane : w_norm_lane_4;
    w_mem_write_data_final[95:80]   = (w_partial_word && (w_partial_valid_sample_cnt <= 4'd5)) ? w_edge_lane : w_norm_lane_5;
    w_mem_write_data_final[111:96]  = (w_partial_word && (w_partial_valid_sample_cnt <= 4'd6)) ? w_edge_lane : w_norm_lane_6;
    w_mem_write_data_final[127:112] = (w_partial_word && (w_partial_valid_sample_cnt <= 4'd7)) ? w_edge_lane : w_norm_lane_7;
  end

  assign w_right_pad_word = {SAMPLES_PER_WORD{r_last_sample_in_row}};

  // ============================================================
  // Edge-row storage write select
  // ============================================================
  always_comb begin
    w_edge_row_wr_valid = 1'b0;
    w_edge_row_wr_addr  = 16'd0;
    w_edge_row_wr_data  = '0;

    if ((r_current_state == ST_AXI_BURST) &&
        w_rd_data_fire &&
        w_last_valid_row_in_plane &&
        (!r_fetch_error_seen) &&
        (!I_RD_DATA_ERROR)) begin
      w_edge_row_wr_valid = 1'b1;
      w_edge_row_wr_addr  = r_beat_cnt;
      w_edge_row_wr_data  = w_mem_write_data_final;
    end else if ((r_current_state == ST_RIGHT_PAD) &&
                 w_last_valid_row_in_plane) begin
      w_edge_row_wr_valid = 1'b1;
      w_edge_row_wr_addr  = r_pad_word_idx;
      w_edge_row_wr_data  = w_right_pad_word;
    end
  end

  // ============================================================
  // FSM block 1: state register
  // ============================================================
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_current_state <= ST_IDLE;
    end else begin
      r_current_state <= w_next_state;
    end
  end

  // ============================================================
  // FSM block 2: next-state logic
  // ============================================================
  always_comb begin
    w_next_state = r_current_state;

    unique case (r_current_state)
      ST_IDLE: begin
        if (w_fetch_task_fire) begin
          w_next_state = ST_LOAD_TASK;
        end
      end

      ST_LOAD_TASK: begin
        w_next_state = ST_ROW_DISPATCH;
      end

      ST_ROW_DISPATCH: begin
        if (w_row_is_valid) begin
          w_next_state = ST_AXI_CMD;
        end else begin
          w_next_state = ST_BOTTOM_PAD;
        end
      end

      ST_AXI_CMD: begin
        if (w_rd_cmd_fire) begin
          w_next_state = ST_AXI_BURST;
        end
      end

      ST_AXI_BURST: begin
        if (w_axi_burst_done) begin
          if (r_fetch_error_seen | w_rd_data_error_fire) begin
            w_next_state = ST_ERROR;
          end else if (w_need_right_pad) begin
            w_next_state = ST_RIGHT_PAD;
          end else begin
            w_next_state = ST_NEXT_ROW;
          end
        end
      end

      ST_RIGHT_PAD: begin
        if (w_right_pad_done) begin
          w_next_state = ST_NEXT_ROW;
        end
      end

      ST_BOTTOM_PAD: begin
        if (w_bottom_pad_done) begin
          w_next_state = ST_NEXT_ROW;
        end
      end

      ST_NEXT_ROW: begin
        if (w_last_full_row_in_plane) begin
          w_next_state = ST_NEXT_PLANE;
        end else begin
          w_next_state = ST_ROW_DISPATCH;
        end
      end

      ST_NEXT_PLANE: begin
        if (r_current_plane == PLANE_V) begin
          w_next_state = ST_DONE;
        end else begin
          w_next_state = ST_ROW_DISPATCH;
        end
      end

      ST_DONE: begin
        w_next_state = ST_IDLE;
      end

      ST_ERROR: begin
        w_next_state = ST_IDLE;
      end

      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // ============================================================
  // FSM block 3: output decode
  // ============================================================
  always_comb begin
    O_RD_CMD_VALID = 1'b0;
    O_RD_CMD_ADDR  = w_row_base_addr;
    O_RD_CMD_BEATS = w_axi_burst_beats[7:0];

    O_RD_DATA_READY = 1'b0;

    O_BUFF_WR_VALID   = 1'b0;
    O_BUFF_WR_BUFF_ID = r_current_buffer_id;
    O_BUFF_WR_PLANE   = r_current_plane;
    O_BUFF_WR_ADDR    = 16'd0;
    O_BUFF_WR_DATA    = '0;
    O_BUFF_WR_STRB    = {(PARA_DATA_WD / 8){1'b1}};

    O_FETCH_DONE_VALID   = 1'b0;
    O_FETCH_DONE_BUFF_ID = r_current_buffer_id;
    O_FETCH_DONE_TASK    = r_current_task;

    O_FETCH_ERROR_VALID   = 1'b0;
    O_FETCH_ERROR_BUFF_ID = r_current_buffer_id;
    O_FETCH_ERROR_TASK    = r_current_task;

    unique case (r_current_state)
      ST_AXI_CMD: begin
        O_RD_CMD_VALID = 1'b1;
        O_RD_CMD_ADDR  = w_row_base_addr;
        O_RD_CMD_BEATS = w_axi_burst_beats[7:0];
      end

      ST_AXI_BURST: begin
        // Always keep RREADY high while draining the current burst.
        // If an error is reported, the rest of the burst is still consumed,
        // but writes to the CTU buffer are suppressed.
        O_RD_DATA_READY = 1'b1;

        if (w_rd_data_fire && (!r_fetch_error_seen) && (!I_RD_DATA_ERROR)) begin
          O_BUFF_WR_VALID = 1'b1;
          O_BUFF_WR_ADDR  = w_buff_wr_addr_axi;
          O_BUFF_WR_DATA  = w_mem_write_data_final;
        end
      end

      ST_RIGHT_PAD: begin
        O_BUFF_WR_VALID = 1'b1;
        O_BUFF_WR_ADDR  = w_buff_wr_addr_pad;
        O_BUFF_WR_DATA  = w_right_pad_word;
      end

      ST_BOTTOM_PAD: begin
        O_BUFF_WR_VALID = 1'b1;
        O_BUFF_WR_ADDR  = w_buff_wr_addr_pad;
        O_BUFF_WR_DATA  = r_edge_row_word[r_pad_word_idx];
      end

      ST_DONE: begin
        O_FETCH_DONE_VALID = 1'b1;
      end

      ST_ERROR: begin
        O_FETCH_ERROR_VALID = 1'b1;
      end

      default: begin
      end
    endcase
  end

  // ============================================================
  // Datapath registers
  // ============================================================
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_current_task       <= '0;
      r_current_buffer_id  <= '0;
      r_current_plane      <= PLANE_Y;
      r_row_idx            <= '0;
      r_beat_cnt           <= '0;
      r_pad_word_idx       <= '0;
      r_axi_burst_beats    <= '0;
      r_origin_x_c         <= '0;
      r_origin_y_c         <= '0;
      r_valid_width_c      <= '0;
      r_valid_height_c     <= '0;
      r_last_sample_in_row <= '0;
      r_fetch_error_seen   <= 1'b0;
    end else begin

      if (w_fetch_task_fire) begin
        r_current_task      <= I_FETCH_TASK_PAYLOAD;
        r_current_buffer_id <= I_FETCH_TASK_BUFFER_ID;
        r_fetch_error_seen  <= 1'b0;
      end

      if (r_current_state == ST_LOAD_TASK) begin
        r_origin_x_c <= w_task_origin_x >> 1;
        r_origin_y_c <= w_task_origin_y >> 1;

        r_valid_width_c <= ((((I_FRAME_WIDTH + 1) >> 1) - (w_task_origin_x >> 1)) >= CTU_SIZE_C) ? CTU_SIZE_C : (((I_FRAME_WIDTH + 1) >> 1) - (w_task_origin_x >> 1));

        r_valid_height_c <= ((((I_FRAME_HEIGHT + 1) >> 1) - (w_task_origin_y >> 1)) >= CTU_SIZE_C) ? CTU_SIZE_C : (((I_FRAME_HEIGHT + 1) >> 1) - (w_task_origin_y >> 1));

        r_current_plane      <= PLANE_Y;
        r_row_idx            <= '0;
        r_beat_cnt           <= '0;
        r_pad_word_idx       <= '0;
        r_axi_burst_beats    <= '0;
        r_last_sample_in_row <= '0;
        r_fetch_error_seen   <= 1'b0;
      end

      // Latch burst length when the row command is accepted.
      if ((r_current_state == ST_AXI_CMD) && w_rd_cmd_fire) begin
        r_axi_burst_beats <= w_axi_burst_beats;
        r_beat_cnt        <= '0;
      end

      // Count each accepted AXI data beat.
      if ((r_current_state == ST_AXI_BURST) && w_rd_data_fire) begin
        if (w_expected_last_beat) begin
          r_beat_cnt <= '0;
        end else begin
          r_beat_cnt <= r_beat_cnt + 1'b1;
        end
      end

      // Latch read-data/protocol error. The burst is still drained, but
      // the current CTU will be aborted after RLAST.
      if ((r_current_state == ST_AXI_BURST) && w_rd_data_error_fire) begin
        r_fetch_error_seen <= 1'b1;
      end

      // Save last sample of row for full-word right padding.
      if ((r_current_state == ST_AXI_BURST) &&
          w_rd_data_fire &&
          w_expected_last_beat &&
          (!r_fetch_error_seen) &&
          (!I_RD_DATA_ERROR)) begin
        r_last_sample_in_row <= w_right_edge_sample;
      end

      // Save the final valid row for bottom padding.
      // Only one edge-row write port is described to keep the hardware
      // mapping deterministic for synthesis.
      if (w_edge_row_wr_valid) begin
        r_edge_row_word[w_edge_row_wr_addr] <= w_edge_row_wr_data;
      end

      // Prepare padding counter.
      if ((r_current_state == ST_AXI_BURST) && w_axi_burst_done && w_need_right_pad) begin
        r_pad_word_idx <= r_axi_burst_beats;
      end else if (r_current_state == ST_ROW_DISPATCH && !w_row_is_valid) begin
        r_pad_word_idx <= '0;
      end else if (r_current_state == ST_RIGHT_PAD) begin
        if (w_right_pad_done) begin
          r_pad_word_idx <= '0;
        end else begin
          r_pad_word_idx <= r_pad_word_idx + 1'b1;
        end
      end else if (r_current_state == ST_BOTTOM_PAD) begin
        if (w_bottom_pad_done) begin
          r_pad_word_idx <= '0;
        end else begin
          r_pad_word_idx <= r_pad_word_idx + 1'b1;
        end
      end

      // Move to next row.
      if (r_current_state == ST_NEXT_ROW) begin
        if (!w_last_full_row_in_plane) begin
          r_row_idx <= r_row_idx + 1'b1;
        end
      end

      // Move to next plane.
      if (r_current_state == ST_NEXT_PLANE) begin
        r_row_idx            <= '0;
        r_beat_cnt           <= '0;
        r_pad_word_idx       <= '0;
        r_axi_burst_beats    <= '0;
        r_last_sample_in_row <= '0;

        if (r_current_plane == PLANE_Y) begin
          r_current_plane <= PLANE_U;
        end else if (r_current_plane == PLANE_U) begin
          r_current_plane <= PLANE_V;
        end
      end
    end
  end

endmodule : CTU_FETCH_ENGINE