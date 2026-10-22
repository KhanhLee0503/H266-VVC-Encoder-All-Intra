//-----------------------------------------------------------
// Description: Single-CTU input buffer for the VVC in-loop pipeline.
// Stores unfiltered YUV420 10-bit samples in 16-bit containers,
// four samples per 64-bit word, using separate synchronous RAM
// read and write ports. A CTU is acquired by Prefetch, committed
// after all Y/Cb/Cr words arrive, then offered to the DBF consumer.
// The consumer must explicitly release the CTU after its last
// read/halo dependency. This module does not generate raster
// addresses and does not release a Recon bank.
//-----------------------------------------------------------
`timescale 1ns/1ps

module IN_LOOP_INPUT_BUFFER #(
  parameter PARA_CONTAINER_WD = 16,
  parameter PARA_CTU_ID_WD    = 9,
  parameter PARA_FRAME_ID_WD  = 8
)(
  input                                         I_CLK,
  input                                         I_RESETN,
  input                                         I_CLEAR_ERROR,

  // Acquire an empty buffer for a new CTU.
  input                                         I_FILL_DESC_VALID,
  output logic                                  O_FILL_DESC_READY,
  input [PARA_CTU_ID_WD-1:0]                    I_FILL_CTU_ID,
  input [PARA_FRAME_ID_WD-1:0]                  I_FILL_FRAME_ID,
  input [12:0]                                  I_FILL_CTU_X_ORIGIN,
  input [12:0]                                  I_FILL_CTU_Y_ORIGIN,
  input [7:0]                                   I_FILL_VALID_WIDTH,
  input [7:0]                                   I_FILL_VALID_HEIGHT,

  // Prefetch write stream. Addresses use full-plane row strides:
  // Y: row*32 + word_x; Cb/Cr: row*16 + word_x.
  input                                         I_WR_VALID,
  output logic                                  O_WR_READY,
  input [1:0]                                   I_WR_COMPONENT_ID,
  input [11:0]                                  I_WR_ADDR,
  input [(4*PARA_CONTAINER_WD)-1:0]             I_WR_DATA,
  input [3:0]                                   I_WR_SAMPLE_EN,

  // Commit a complete copy. READY is not raised before all words
  // in each plane have been accepted into the buffer.
  input                                         I_FILL_DONE_VALID,
  output logic                                  O_FILL_DONE_READY,

  // CTU descriptor presented to the downstream DBF consumer.
  output logic                                  O_FILTER_DESC_VALID,
  input                                         I_FILTER_DESC_READY,
  output logic [PARA_CTU_ID_WD-1:0]             O_FILTER_CTU_ID,
  output logic [PARA_FRAME_ID_WD-1:0]           O_FILTER_FRAME_ID,
  output logic [12:0]                           O_FILTER_CTU_X_ORIGIN,
  output logic [12:0]                           O_FILTER_CTU_Y_ORIGIN,
  output logic [7:0]                            O_FILTER_VALID_WIDTH,
  output logic [7:0]                            O_FILTER_VALID_HEIGHT,

  // Synchronous DBF read request, without a response backpressure
  // port. The consumer must reserve space for every issued request.
  input                                         I_FILTER_RD_EN,
  input [1:0]                                   I_FILTER_RD_COMPONENT_ID,
  input [11:0]                                  I_FILTER_RD_ADDR,
  output logic                                  O_FILTER_RD_VALID,
  output logic [(4*PARA_CONTAINER_WD)-1:0]     O_FILTER_RD_DATA,
  output logic [3:0]                            O_FILTER_RD_SAMPLE_EN,
  output logic [1:0]                            O_FILTER_RD_COMPONENT_ID,
  output logic [11:0]                           O_FILTER_RD_ADDR,

  // Release only the input buffer (not the upstream Recon bank).
  input                                         I_FILTER_RELEASE_VALID,
  output logic                                  O_FILTER_RELEASE_READY,
  input [PARA_CTU_ID_WD-1:0]                    I_FILTER_RELEASE_CTU_ID,
  input [PARA_FRAME_ID_WD-1:0]                  I_FILTER_RELEASE_FRAME_ID,

  output logic [1:0]                            O_BUFFER_STATE,
  output logic                                  O_BUFFER_BUSY,
  output logic [12:0]                           O_ACCEPTED_WORD_COUNT,
  output logic [12:0]                           O_EXPECTED_WORD_COUNT,
  output logic                                  O_ERROR
);

  localparam PARA_WORD_WD = 4*PARA_CONTAINER_WD;
  localparam PARA_Y_DEPTH = 4096;
  localparam PARA_C_DEPTH = 1024;
  localparam [1:0] PARA_COMP_Y  = 2'b00;
  localparam [1:0] PARA_COMP_CB = 2'b01;
  localparam [1:0] PARA_COMP_CR = 2'b10;

  typedef enum logic [1:0] {
    ST_EMPTY     = 2'd0,
    ST_FILLING   = 2'd1,
    ST_READY     = 2'd2,
    ST_FILTERING = 2'd3
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [PARA_WORD_WD-1:0] r_y_mem  [0:PARA_Y_DEPTH-1];
  logic [PARA_WORD_WD-1:0] r_cb_mem [0:PARA_C_DEPTH-1];
  logic [PARA_WORD_WD-1:0] r_cr_mem [0:PARA_C_DEPTH-1];

  logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
  logic [PARA_FRAME_ID_WD-1:0] r_frame_id;
  logic [12:0] r_x_origin;
  logic [12:0] r_y_origin;
  logic [7:0] r_valid_width;
  logic [7:0] r_valid_height;
  logic [6:0] r_c_height;
  logic [5:0] r_y_row_words;
  logic [4:0] r_c_row_words;
  logic [3:0] r_y_last_mask;
  logic [3:0] r_c_last_mask;
  logic [12:0] r_y_expected;
  logic [10:0] r_c_expected;
  logic [12:0] r_y_accepted;
  logic [10:0] r_cb_accepted;
  logic [10:0] r_cr_accepted;
  logic r_error;

  logic [7:0]  w_new_c_width;
  logic [6:0]  w_new_c_height;
  logic [5:0]  w_new_y_row_words;
  logic [4:0]  w_new_c_row_words;
  logic [3:0]  w_new_y_last_mask;
  logic [3:0]  w_new_c_last_mask;
  logic [12:0] w_new_y_expected;
  logic [10:0] w_new_c_expected;
  logic        w_desc_geometry_valid;

  logic        w_fill_desc_fire;
  logic        w_wr_fire;
  logic        w_fill_done_fire;
  logic        w_filter_desc_fire;
  logic        w_rd_fire;
  logic        w_release_fire;
  logic        w_all_words_written;
  logic        w_wr_addr_legal;
  logic        w_wr_capacity;
  logic        w_wr_legal;
  logic        w_rd_addr_legal;
  logic        w_release_match;
  logic        w_invalid_wr;
  logic        w_invalid_rd;
  logic        w_invalid_release;
  logic [3:0]  w_wr_expected_mask;
  logic [3:0]  w_rd_expected_mask;
  logic [PARA_WORD_WD-1:0] w_wr_padded_data;

  logic [PARA_WORD_WD-1:0] r_y_rd_data;
  logic [PARA_WORD_WD-1:0] r_cb_rd_data;
  logic [PARA_WORD_WD-1:0] r_cr_rd_data;
  logic                   r_rd_valid;
  logic [1:0]             r_rd_component_id;
  logic [11:0]            r_rd_addr;
  logic [3:0]             r_rd_sample_en;

  // Derive plane sizes at descriptor acceptance. Chroma dimensions
  // are ceil(luma_dimension/2), including odd boundary dimensions.
  assign w_desc_geometry_valid = (I_FILL_VALID_WIDTH  >= 8'd1) &&
                                 (I_FILL_VALID_WIDTH  <= 8'd128) &&
                                 (I_FILL_VALID_HEIGHT >= 8'd1) &&
                                 (I_FILL_VALID_HEIGHT <= 8'd128);
  assign w_new_c_width       = (I_FILL_VALID_WIDTH + 8'd1) >> 1;
  assign w_new_c_height      = (I_FILL_VALID_HEIGHT + 8'd1) >> 1;
  assign w_new_y_row_words   = (I_FILL_VALID_WIDTH + 8'd3) >> 2;
  assign w_new_c_row_words   = (w_new_c_width + 8'd3) >> 2;
  assign w_new_y_expected    = 13'(w_new_y_row_words) * 13'(I_FILL_VALID_HEIGHT);
  assign w_new_c_expected    = 11'(w_new_c_row_words) * 11'(w_new_c_height);

  always_comb begin
    w_new_y_last_mask = 4'b1111;
    w_new_c_last_mask = 4'b1111;
    unique casez (I_FILL_VALID_WIDTH[1:0])
      2'b01: w_new_y_last_mask = 4'b0001;
      2'b10: w_new_y_last_mask = 4'b0011;
      2'b11: w_new_y_last_mask = 4'b0111;
      default: w_new_y_last_mask = 4'b1111;
    endcase
    unique casez (w_new_c_width[1:0])
      2'b01: w_new_c_last_mask = 4'b0001;
      2'b10: w_new_c_last_mask = 4'b0011;
      2'b11: w_new_c_last_mask = 4'b0111;
      default: w_new_c_last_mask = 4'b1111;
    endcase
  end

  assign w_all_words_written = (r_y_accepted == r_y_expected) &&
                               (r_cb_accepted == r_c_expected) &&
                               (r_cr_accepted == r_c_expected);

  // Validate range, plane capacity and last-word sample lanes.
  // Address sequencing/uniqueness remains Prefetch's responsibility.
  always_comb begin
    w_wr_addr_legal    = 1'b0;
    w_wr_capacity      = 1'b0;
    w_wr_expected_mask = 4'b0000;
    unique casez (I_WR_COMPONENT_ID)
      PARA_COMP_Y: begin
        w_wr_addr_legal = (I_WR_ADDR[11:5] < r_valid_height) &&
                          (6'(I_WR_ADDR[4:0]) < r_y_row_words);
        w_wr_capacity = (r_y_accepted < r_y_expected);
        w_wr_expected_mask = (6'(I_WR_ADDR[4:0]) ==
                              (r_y_row_words - 6'd1)) ? r_y_last_mask : 4'b1111;
      end
      PARA_COMP_CB: begin
        w_wr_addr_legal = (I_WR_ADDR[11:10] == 2'b00) &&
                          (I_WR_ADDR[9:4] < r_c_height) &&
                          (5'(I_WR_ADDR[3:0]) < r_c_row_words);
        w_wr_capacity = (r_cb_accepted < r_c_expected);
        w_wr_expected_mask = (5'(I_WR_ADDR[3:0]) ==
                              (r_c_row_words - 5'd1)) ? r_c_last_mask : 4'b1111;
      end
      PARA_COMP_CR: begin
        w_wr_addr_legal = (I_WR_ADDR[11:10] == 2'b00) &&
                          (I_WR_ADDR[9:4] < r_c_height) &&
                          (5'(I_WR_ADDR[3:0]) < r_c_row_words);
        w_wr_capacity = (r_cr_accepted < r_c_expected);
        w_wr_expected_mask = (5'(I_WR_ADDR[3:0]) ==
                              (r_c_row_words - 5'd1)) ? r_c_last_mask : 4'b1111;
      end
      default: begin
      end
    endcase
  end
  assign w_wr_legal = w_wr_addr_legal && w_wr_capacity &&
                      (I_WR_SAMPLE_EN == w_wr_expected_mask);

  // Pad invalid boundary lanes with zero so a previous CTU cannot
  // leak stale bits into the next CTU's last word.
  always_comb begin
    w_wr_padded_data = '0;
    if (I_WR_SAMPLE_EN[0])
      w_wr_padded_data[(1*PARA_CONTAINER_WD)-1:0*PARA_CONTAINER_WD] =
        I_WR_DATA[(1*PARA_CONTAINER_WD)-1:0*PARA_CONTAINER_WD];
    if (I_WR_SAMPLE_EN[1])
      w_wr_padded_data[(2*PARA_CONTAINER_WD)-1:1*PARA_CONTAINER_WD] =
        I_WR_DATA[(2*PARA_CONTAINER_WD)-1:1*PARA_CONTAINER_WD];
    if (I_WR_SAMPLE_EN[2])
      w_wr_padded_data[(3*PARA_CONTAINER_WD)-1:2*PARA_CONTAINER_WD] =
        I_WR_DATA[(3*PARA_CONTAINER_WD)-1:2*PARA_CONTAINER_WD];
    if (I_WR_SAMPLE_EN[3])
      w_wr_padded_data[(4*PARA_CONTAINER_WD)-1:3*PARA_CONTAINER_WD] =
        I_WR_DATA[(4*PARA_CONTAINER_WD)-1:3*PARA_CONTAINER_WD];
  end

  always_comb begin
    w_rd_addr_legal    = 1'b0;
    w_rd_expected_mask = 4'b0000;
    unique casez (I_FILTER_RD_COMPONENT_ID)
      PARA_COMP_Y: begin
        w_rd_addr_legal = (I_FILTER_RD_ADDR[11:5] < r_valid_height) &&
                          (6'(I_FILTER_RD_ADDR[4:0]) < r_y_row_words);
        w_rd_expected_mask = (6'(I_FILTER_RD_ADDR[4:0]) ==
                              (r_y_row_words - 6'd1)) ? r_y_last_mask : 4'b1111;
      end
      PARA_COMP_CB, PARA_COMP_CR: begin
        w_rd_addr_legal = (I_FILTER_RD_ADDR[11:10] == 2'b00) &&
                          (I_FILTER_RD_ADDR[9:4] < r_c_height) &&
                          (5'(I_FILTER_RD_ADDR[3:0]) < r_c_row_words);
        w_rd_expected_mask = (5'(I_FILTER_RD_ADDR[3:0]) ==
                              (r_c_row_words - 5'd1)) ? r_c_last_mask : 4'b1111;
      end
      default: begin
      end
    endcase
  end

  assign w_release_match = (I_FILTER_RELEASE_CTU_ID == r_ctu_id) &&
                           (I_FILTER_RELEASE_FRAME_ID == r_frame_id);
  assign w_fill_desc_fire   = I_FILL_DESC_VALID && O_FILL_DESC_READY;
  assign w_wr_fire          = I_WR_VALID && O_WR_READY && w_wr_legal;
  assign w_fill_done_fire   = I_FILL_DONE_VALID && O_FILL_DONE_READY;
  assign w_filter_desc_fire = O_FILTER_DESC_VALID && I_FILTER_DESC_READY;
  assign w_rd_fire          = I_FILTER_RD_EN &&
                              (r_current_state == ST_FILTERING) &&
                              w_rd_addr_legal && !r_error && !I_CLEAR_ERROR;
  assign w_release_fire     = I_FILTER_RELEASE_VALID && O_FILTER_RELEASE_READY;

  assign w_invalid_wr = I_WR_VALID && !I_CLEAR_ERROR &&
                        (((r_current_state != ST_FILLING) && I_RESETN) ||
                         (O_WR_READY && !w_wr_legal));
  assign w_invalid_rd = I_FILTER_RD_EN && !I_CLEAR_ERROR &&
                        ((r_current_state != ST_FILTERING) ||
                         !w_rd_addr_legal);
  assign w_invalid_release = I_FILTER_RELEASE_VALID && !I_CLEAR_ERROR &&
                             ((r_current_state != ST_FILTERING) ||
                              !w_release_match);

  // Process 1: FSM state register.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_EMPTY;
    else if (I_CLEAR_ERROR)
      r_current_state <= ST_EMPTY;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: FSM next-state logic.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_EMPTY: begin
        if (w_fill_desc_fire)
          w_next_state = ST_FILLING;
      end
      ST_FILLING: begin
        if (w_fill_done_fire)
          w_next_state = ST_READY;
      end
      ST_READY: begin
        if (w_filter_desc_fire)
          w_next_state = ST_FILTERING;
      end
      ST_FILTERING: begin
        if (w_release_fire)
          w_next_state = ST_EMPTY;
      end
      default: begin
        w_next_state = ST_EMPTY;
      end
    endcase
  end

  // Process 3: Ownership/handshake output decode.
  always_comb begin
    O_FILL_DESC_READY      = 1'b0;
    O_WR_READY             = 1'b0;
    O_FILL_DONE_READY      = 1'b0;
    O_FILTER_DESC_VALID    = 1'b0;
    O_FILTER_RELEASE_READY = 1'b0;
    if (!r_error && !I_CLEAR_ERROR && I_RESETN) begin
      unique casez (r_current_state)
        ST_EMPTY: begin
          O_FILL_DESC_READY = 1'b1;
        end
        ST_FILLING: begin
          O_WR_READY = !w_all_words_written;
          O_FILL_DONE_READY = w_all_words_written;
        end
        ST_READY: begin
          O_FILTER_DESC_VALID = 1'b1;
        end
        ST_FILTERING: begin
          O_FILTER_RELEASE_READY = w_release_match &&
                                   !I_FILTER_RD_EN && !r_rd_valid;
        end
        default: begin
        end
      endcase
    end
  end

  // Captured CTU metadata and exact expected/accepted word counts.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_ctu_id          <= '0;
      r_frame_id        <= '0;
      r_x_origin        <= '0;
      r_y_origin        <= '0;
      r_valid_width     <= '0;
      r_valid_height    <= '0;
      r_c_height        <= '0;
      r_y_row_words     <= '0;
      r_c_row_words     <= '0;
      r_y_last_mask     <= '0;
      r_c_last_mask     <= '0;
      r_y_expected      <= '0;
      r_c_expected      <= '0;
      r_y_accepted      <= '0;
      r_cb_accepted     <= '0;
      r_cr_accepted     <= '0;
    end else if (I_CLEAR_ERROR) begin
      r_ctu_id          <= '0;
      r_frame_id        <= '0;
      r_x_origin        <= '0;
      r_y_origin        <= '0;
      r_valid_width     <= '0;
      r_valid_height    <= '0;
      r_c_height        <= '0;
      r_y_row_words     <= '0;
      r_c_row_words     <= '0;
      r_y_last_mask     <= '0;
      r_c_last_mask     <= '0;
      r_y_expected      <= '0;
      r_c_expected      <= '0;
      r_y_accepted      <= '0;
      r_cb_accepted     <= '0;
      r_cr_accepted     <= '0;
    end else begin
      if (w_fill_desc_fire && w_desc_geometry_valid) begin
        r_ctu_id       <= I_FILL_CTU_ID;
        r_frame_id     <= I_FILL_FRAME_ID;
        r_x_origin     <= I_FILL_CTU_X_ORIGIN;
        r_y_origin     <= I_FILL_CTU_Y_ORIGIN;
        r_valid_width  <= I_FILL_VALID_WIDTH;
        r_valid_height <= I_FILL_VALID_HEIGHT;
        r_c_height     <= w_new_c_height;
        r_y_row_words  <= w_new_y_row_words;
        r_c_row_words  <= w_new_c_row_words;
        r_y_last_mask  <= w_new_y_last_mask;
        r_c_last_mask  <= w_new_c_last_mask;
        r_y_expected   <= w_new_y_expected;
        r_c_expected   <= w_new_c_expected;
        r_y_accepted   <= '0;
        r_cb_accepted  <= '0;
        r_cr_accepted  <= '0;
      end else if (w_wr_fire) begin
        unique casez (I_WR_COMPONENT_ID)
          PARA_COMP_Y:  r_y_accepted  <= r_y_accepted + 13'd1;
          PARA_COMP_CB: r_cb_accepted <= r_cb_accepted + 11'd1;
          PARA_COMP_CR: r_cr_accepted <= r_cr_accepted + 11'd1;
          default: begin
          end
        endcase
      end
    end
  end

  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN)
      r_error <= 1'b0;
    else if (I_CLEAR_ERROR)
      r_error <= 1'b0;
    else if ((w_fill_desc_fire && !w_desc_geometry_valid) ||
             w_invalid_wr || w_invalid_rd || w_invalid_release)
      r_error <= 1'b1;
  end

  // Three inferred synchronous block RAMs; no reset on RAM arrays.
  // Input/DBF ownership excludes read/write collisions by construction.
  always_ff @(posedge I_CLK) begin
    if (w_wr_fire && (I_WR_COMPONENT_ID == PARA_COMP_Y))
      r_y_mem[I_WR_ADDR] <= w_wr_padded_data;
    if (w_rd_fire && (I_FILTER_RD_COMPONENT_ID == PARA_COMP_Y))
      r_y_rd_data <= r_y_mem[I_FILTER_RD_ADDR];
  end

  always_ff @(posedge I_CLK) begin
    if (w_wr_fire && (I_WR_COMPONENT_ID == PARA_COMP_CB))
      r_cb_mem[I_WR_ADDR[9:0]] <= w_wr_padded_data;
    if (w_rd_fire && (I_FILTER_RD_COMPONENT_ID == PARA_COMP_CB))
      r_cb_rd_data <= r_cb_mem[I_FILTER_RD_ADDR[9:0]];
  end

  always_ff @(posedge I_CLK) begin
    if (w_wr_fire && (I_WR_COMPONENT_ID == PARA_COMP_CR))
      r_cr_mem[I_WR_ADDR[9:0]] <= w_wr_padded_data;
    if (w_rd_fire && (I_FILTER_RD_COMPONENT_ID == PARA_COMP_CR))
      r_cr_rd_data <= r_cr_mem[I_FILTER_RD_ADDR[9:0]];
  end

  // Registered synchronous read response, one clock per request.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_rd_valid        <= 1'b0;
      r_rd_component_id <= '0;
      r_rd_addr         <= '0;
      r_rd_sample_en    <= '0;
    end else if (I_CLEAR_ERROR) begin
      r_rd_valid        <= 1'b0;
      r_rd_component_id <= '0;
      r_rd_addr         <= '0;
      r_rd_sample_en    <= '0;
    end else begin
      r_rd_valid <= w_rd_fire;
      if (w_rd_fire) begin
        r_rd_component_id <= I_FILTER_RD_COMPONENT_ID;
        r_rd_addr         <= I_FILTER_RD_ADDR;
        r_rd_sample_en    <= w_rd_expected_mask;
      end
    end
  end

  always_comb begin
    O_FILTER_RD_DATA = '0;
    unique casez (r_rd_component_id)
      PARA_COMP_Y:  O_FILTER_RD_DATA = r_y_rd_data;
      PARA_COMP_CB: O_FILTER_RD_DATA = r_cb_rd_data;
      PARA_COMP_CR: O_FILTER_RD_DATA = r_cr_rd_data;
      default: begin
      end
    endcase
  end

  assign O_FILTER_CTU_ID         = r_ctu_id;
  assign O_FILTER_FRAME_ID       = r_frame_id;
  assign O_FILTER_CTU_X_ORIGIN   = r_x_origin;
  assign O_FILTER_CTU_Y_ORIGIN   = r_y_origin;
  assign O_FILTER_VALID_WIDTH    = r_valid_width;
  assign O_FILTER_VALID_HEIGHT   = r_valid_height;
  assign O_FILTER_RD_VALID       = r_rd_valid;
  assign O_FILTER_RD_COMPONENT_ID = r_rd_component_id;
  assign O_FILTER_RD_ADDR        = r_rd_addr;
  assign O_FILTER_RD_SAMPLE_EN   = r_rd_sample_en;
  assign O_BUFFER_STATE         = r_current_state;
  assign O_BUFFER_BUSY          = (r_current_state != ST_EMPTY);
  assign O_ACCEPTED_WORD_COUNT  = r_y_accepted + 13'(r_cb_accepted) +
                                  13'(r_cr_accepted);
  assign O_EXPECTED_WORD_COUNT  = r_y_expected + (13'(r_c_expected) << 1);
  assign O_ERROR                = r_error;

endmodule: IN_LOOP_INPUT_BUFFER
