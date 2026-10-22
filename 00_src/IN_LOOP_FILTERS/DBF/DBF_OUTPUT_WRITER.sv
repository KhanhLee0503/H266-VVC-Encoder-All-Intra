//------------------------------------------------------------------------------
// Description: Sequential 64-bit masked-write controller for VVC deblocking.
// One complete FO edge is accepted at a time (4 x 16 samples, 16 bits each).
// Vertical edges update the Intermediate Sample Buffer; horizontal edges
// update the separate DBF Output Sample Buffer. The external write router
// selects the destination from O_WR_DIRECTION. A zero write mask or a bypass
// completes without RAM accesses. Invalid descriptors suppress all writes.
// The writer examines the selected buffer's registered diagnostic pulse one
// cycle after each accepted word, and reports completion only afterward.
// Original / intermediate CTU initialization is owned by other modules.
// No RAM, reset of large datapath registers, SHF/SEL, or copy logic here.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module DBF_OUTPUT_WRITER (
  input                  I_CLK,
  input                  I_RST_N,

  // Transaction from DBF_UNIFIED_FILTER_CORE.
  input                  I_IN_VALID,
  output logic           O_IN_READY,
  input                  I_IN_BYPASS,
  input         [1023:0] I_FILTERED_WINDOW,
  input           [63:0] I_SAMPLE_WRITE_MASK,
  input           [11:0] I_EDGE_ID,
  input            [8:0] I_CTU_ID,
  input                  I_BANK,
  input            [1:0] I_COMPONENT_ID,
  input                  I_DIRECTION,  // 0=vertical; 1=horizontal
  input            [7:0] I_EDGE_X,
  input            [7:0] I_EDGE_Y,
  input            [3:0] I_LANE_MASK,
  input            [7:0] I_CTU_VALID_WIDTH,
  input            [7:0] I_CTU_VALID_HEIGHT,
  input                  I_ERROR,

  // Single 64-bit write stream to DBF_BUFFER_WRITE_ROUTER.
  output logic           O_WR_VALID,
  input                  I_WR_READY,
  output logic           O_WR_DIRECTION,
  output logic     [1:0] O_WR_COMPONENT_ID,
  output logic    [11:0] O_WR_ADDR,
  output logic    [63:0] O_WR_DATA,
  output logic     [3:0] O_WR_SAMPLE_EN,
  // Registered error pulse from the selected destination buffer.
  // This must correspond to the write accepted in the preceding cycle.
  input                  I_WR_ERROR_VALID,

  // One completion per input edge, including NF, bypass, and errors.
  output logic           O_DONE_VALID,
  input                  I_DONE_READY,
  output logic    [11:0] O_DONE_EDGE_ID,
  output logic     [8:0] O_DONE_CTU_ID,
  output logic           O_DONE_BANK,
  output logic     [1:0] O_DONE_COMPONENT_ID,
  output logic           O_DONE_DIRECTION,
  output logic           O_DONE_ERROR,
  output logic           O_BUSY
);
  localparam logic [1:0] PARA_COMP_Y  = 2'd0;
  localparam logic [1:0] PARA_COMP_CB = 2'd1;
  localparam logic [1:0] PARA_COMP_CR = 2'd2;

  typedef enum logic [2:0] {
    ST_IDLE   = 3'd0,
    ST_CHECK  = 3'd1,
    ST_SELECT = 3'd2,
    ST_WRITE  = 3'd3,
    ST_ACK    = 3'd4,
    ST_DONE   = 3'd5
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [1023:0] r_window;
  logic   [63:0] r_mask;
  logic   [11:0] r_edge_id;
  logic    [8:0] r_ctu_id;
  logic          r_bank;
  logic    [1:0] r_component_id;
  logic          r_direction;
  logic    [7:0] r_x;
  logic    [7:0] r_y;
  logic    [3:0] r_lane_mask;
  logic    [7:0] r_valid_width;
  logic    [7:0] r_valid_height;
  logic          r_bypass;
  logic          r_input_error;
  logic          r_error;
  logic    [4:0] r_word_index;

  logic          w_is_chroma;
  logic    [8:0] w_plane_width;
  logic    [8:0] w_plane_height;
  logic    [8:0] w_segment_length;
  logic          w_descriptor_legal;
  logic          w_full_window_legal;
  logic          w_inactive_mask_legal;
  logic          w_last_word;
  logic          w_input_fire;
  logic          w_write_fire;
  logic          w_skip_word;
  logic          w_advance_word;
  logic    [1:0] w_lane_index;
  logic    [1:0] w_word_slot;
  logic    [3:0] w_tap_index;
  logic    [1:0] w_chroma_slot_base;
  logic    [8:0] w_pixel_y;
  logic    [8:0] w_pixel_x;
  logic   [11:0] w_word_addr;
  logic   [63:0] w_word_data;
  logic    [3:0] w_word_mask;

  assign w_is_chroma = (r_component_id != PARA_COMP_Y);
  assign w_plane_width = w_is_chroma ?
      (({1'b0, r_valid_width} + 9'd1) >> 1) : {1'b0, r_valid_width};
  assign w_plane_height = w_is_chroma ?
      (({1'b0, r_valid_height} + 9'd1) >> 1) : {1'b0, r_valid_height};
  assign w_segment_length = w_is_chroma ? 9'd2 : 9'd4;

  assign w_descriptor_legal =
      ((r_component_id == PARA_COMP_Y) ||
       (r_component_id == PARA_COMP_CB) ||
       (r_component_id == PARA_COMP_CR)) &&
      (r_lane_mask == (w_is_chroma ? 4'b0011 : 4'b1111)) &&
      (r_valid_width >= 8'd1) && (r_valid_width <= 8'd128) &&
      (r_valid_height >= 8'd1) && (r_valid_height <= 8'd128) &&
      ((!r_direction && (r_x[1:0] == 2'b00)) ||
       ( r_direction &&
         ((w_is_chroma && (r_x[0] == 1'b0)) ||
          (!w_is_chroma && (r_x[1:0] == 2'b00)))));

  assign w_full_window_legal = !r_direction ?
      (({1'b0, r_x} >= 9'd8) &&
       (({1'b0, r_x} + 9'd8) <= w_plane_width) &&
       (({1'b0, r_y} + w_segment_length) <= w_plane_height)) :
      (({1'b0, r_y} >= 9'd8) &&
       (({1'b0, r_y} + 9'd8) <= w_plane_height) &&
       (({1'b0, r_x} + w_segment_length) <= w_plane_width));

  assign w_inactive_mask_legal = !w_is_chroma || (r_mask[63:32] == 32'd0);
  assign w_chroma_slot_base = r_x[1] ? 2'd2 : 2'd0;
  assign w_last_word = w_is_chroma && !r_direction ?
                       (r_word_index == 5'd7) :
                       (r_word_index == 5'd15);

  assign w_input_fire = I_IN_VALID && O_IN_READY;
  assign w_write_fire = O_WR_VALID && I_WR_READY;
  assign w_skip_word = (r_current_state == ST_SELECT) &&
                       (w_word_mask == 4'b0000);
  assign w_advance_word = (w_skip_word && !w_last_word) ||
                          ((r_current_state == ST_ACK) &&
                           !I_WR_ERROR_VALID && !w_last_word);

  // Word selection and 16-bit sample alignment. Each index addresses
  // one candidate RAM word; zero-mask candidates are skipped.
  always_comb begin
    w_lane_index = r_word_index[3:2];
    w_word_slot = r_word_index[1:0];
    w_tap_index = r_word_index[3:0];
    w_pixel_x = '0;
    w_pixel_y = '0;
    w_word_addr = '0;
    w_word_data = '0;
    w_word_mask = '0;

    if (!r_direction) begin
      w_pixel_x = {1'b0, r_x} - 9'd8 +
                  {5'd0, w_word_slot, 2'b00};
      w_pixel_y = {1'b0, r_y} + {7'd0, w_lane_index};
      w_word_data = r_window[(w_lane_index*16 + w_word_slot*4)*16 +: 64];
      w_word_mask = r_mask[w_lane_index*16 + w_word_slot*4 +: 4];
    end else begin
      w_pixel_x = {1'b0, r_x};
      w_pixel_y = {1'b0, r_y} - 9'd8 + {5'd0, w_tap_index};
      // Horizontal chroma x=2 (mod 4) places lanes in slots 2/3.
      for (integer w_lane = 0; w_lane < 4; w_lane = w_lane + 1) begin
        if ((w_lane < 2) || !w_is_chroma) begin
          if (r_lane_mask[w_lane]) begin
            w_word_data[((w_lane + (w_is_chroma ? int'(w_chroma_slot_base) : 0))*16) +: 16] =
                r_window[(w_lane*16 + w_tap_index)*16 +: 16];
            w_word_mask[w_lane + (w_is_chroma ? int'(w_chroma_slot_base) : 0)] =
                r_mask[w_lane*16 + w_tap_index];
          end
        end
      end
    end

    if (w_is_chroma)
      w_word_addr = {w_pixel_y[7:0], 4'b0} +
                    {6'b0, w_pixel_x[7:2]};
    else
      w_word_addr = {w_pixel_y[6:0], 5'b0} +
                    {6'b0, w_pixel_x[7:2]};
  end

  // Process 1: FSM state register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: next-state transition logic.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire)
          w_next_state = ST_CHECK;
      end
      ST_CHECK: begin
        if (r_bypass || r_input_error || (r_mask == 64'd0) ||
            !w_descriptor_legal || !w_full_window_legal ||
            !w_inactive_mask_legal)
          w_next_state = ST_DONE;
        else
          w_next_state = ST_SELECT;
      end
      ST_SELECT: begin
        if (w_word_mask != 4'b0000)
          w_next_state = ST_WRITE;
        else if (w_last_word)
          w_next_state = ST_DONE;
      end
      ST_WRITE: begin
        if (w_write_fire)
          w_next_state = ST_ACK;
      end
      ST_ACK: begin
        if (I_WR_ERROR_VALID || w_last_word)
          w_next_state = ST_DONE;
        else
          w_next_state = ST_SELECT;
      end
      ST_DONE: begin
        if (I_DONE_READY)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: FSM outputs. The registered input payload is immutable while
  // the writer is processing, including every WR_VALID/!WR_READY stall.
  always_comb begin
    O_IN_READY = 1'b0;
    O_WR_VALID = 1'b0;
    O_DONE_VALID = 1'b0;
    unique casez (r_current_state)
      ST_IDLE: O_IN_READY = I_RST_N;
      ST_WRITE: O_WR_VALID = 1'b1;
      ST_DONE: O_DONE_VALID = 1'b1;
      default: begin
      end
    endcase
  end

  assign O_WR_DIRECTION = r_direction;
  assign O_WR_COMPONENT_ID = r_component_id;
  assign O_WR_ADDR = w_word_addr;
  assign O_WR_DATA = w_word_data;
  assign O_WR_SAMPLE_EN = w_word_mask;

  assign O_DONE_EDGE_ID = r_edge_id;
  assign O_DONE_CTU_ID = r_ctu_id;
  assign O_DONE_BANK = r_bank;
  assign O_DONE_COMPONENT_ID = r_component_id;
  assign O_DONE_DIRECTION = r_direction;
  assign O_DONE_ERROR = r_error;
  assign O_BUSY = (r_current_state != ST_IDLE);

  // Control, metadata, masks, and counters. Only control needs reset.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_edge_id <= '0;
      r_ctu_id <= '0;
      r_bank <= 1'b0;
      r_component_id <= '0;
      r_direction <= 1'b0;
      r_x <= '0;
      r_y <= '0;
      r_lane_mask <= '0;
      r_valid_width <= '0;
      r_valid_height <= '0;
      r_bypass <= 1'b0;
      r_input_error <= 1'b0;
      r_error <= 1'b0;
      r_word_index <= '0;
    end else begin
      if (w_input_fire) begin
        r_edge_id <= I_EDGE_ID;
        r_ctu_id <= I_CTU_ID;
        r_bank <= I_BANK;
        r_component_id <= I_COMPONENT_ID;
        r_direction <= I_DIRECTION;
        r_x <= I_EDGE_X;
        r_y <= I_EDGE_Y;
        r_lane_mask <= I_LANE_MASK;
        r_valid_width <= I_CTU_VALID_WIDTH;
        r_valid_height <= I_CTU_VALID_HEIGHT;
        r_bypass <= I_IN_BYPASS;
        r_input_error <= I_ERROR;
        r_error <= I_ERROR || (I_IN_BYPASS && (I_SAMPLE_WRITE_MASK != 64'd0));
        r_word_index <= 5'd0;
      end else begin
        if ((r_current_state == ST_CHECK) &&
            (!w_descriptor_legal || !w_inactive_mask_legal ||
             (!r_bypass && (r_mask != 64'd0) && !w_full_window_legal)))
          r_error <= 1'b1;
        if ((r_current_state == ST_ACK) && I_WR_ERROR_VALID)
          r_error <= 1'b1;
        if (w_advance_word)
          r_word_index <= r_word_index + 5'd1;
      end
    end
  end

  // Large payload registers have no asynchronous reset. Validity is carried
  // by the FSM; their values are ignored until an input handshake occurs.
  always_ff @(posedge I_CLK) begin
    if (w_input_fire) begin
      r_window <= I_FILTERED_WINDOW;
      r_mask <= I_SAMPLE_WRITE_MASK;
    end
  end

endmodule: DBF_OUTPUT_WRITER
