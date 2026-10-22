//-----------------------------------------------------------
// Module      : DBF_CTU_INIT_LOADER
// Description : Sequential reconstructed-CTU loader for VVC DBF Option A.
//               Acquires a Recon prefetch descriptor, fills
//               IN_LOOP_INPUT_BUFFER and DBF_INTERMEDIATE_SAMPLE_BUFFER
//               with identical 64-bit original reconstructed words,
//               commits the input-buffer descriptor, then releases the
//               Recon bank. Exactly one read and one data word are in
//               flight. No SRAM array, FIFO, task, function or delay.
//               Controller I_INIT_ACTIVE stays high until INIT_DONE.
//               Reset is required after a fatal protocol error.
//-----------------------------------------------------------
`timescale 1ns/1ps

module DBF_CTU_INIT_LOADER (
  input               I_CLK,
  input               I_RST_N,

  // DBF_FILTER_CONTROLLER initialization phase.
  input               I_INIT_ACTIVE,
  input         [8:0] I_CTU_ID,
  input         [7:0] I_CTU_VALID_WIDTH,
  input         [7:0] I_CTU_VALID_HEIGHT,
  output logic        O_INIT_DONE,
  output logic        O_INIT_ERROR,
  output logic  [3:0] O_INIT_ERROR_CODE,
  output logic        O_BUSY,

  // RECON_LOCAL_RAM_BANK_CTRL prefetch descriptor.
  input               I_RECON_DESC_VALID,
  output logic        O_RECON_DESC_READY,
  input               I_RECON_DESC_BANK_ID,
  input         [8:0] I_RECON_DESC_CTU_ID,
  input         [7:0] I_RECON_DESC_FRAME_ID,
  input        [12:0] I_RECON_DESC_X_ORIGIN,
  input        [12:0] I_RECON_DESC_Y_ORIGIN,
  input         [7:0] I_RECON_DESC_VALID_WIDTH,
  input         [7:0] I_RECON_DESC_VALID_HEIGHT,

  // RECON_LOCAL_RAM_BANK_CTRL synchronous read, no read READY.
  output logic        O_RECON_RD_EN,
  output logic  [1:0] O_RECON_RD_COMPONENT_ID,
  output logic [11:0] O_RECON_RD_ADDR,
  input               I_RECON_RD_VALID,
  input        [63:0] I_RECON_RD_DATA,
  input               I_RECON_RD_BANK_ID,

  // IN_LOOP_INPUT_BUFFER fill-descriptor / word / commit interfaces.
  output logic        O_INPUT_FILL_DESC_VALID,
  input               I_INPUT_FILL_DESC_READY,
  output logic  [8:0] O_INPUT_FILL_CTU_ID,
  output logic  [7:0] O_INPUT_FILL_FRAME_ID,
  output logic [12:0] O_INPUT_FILL_X_ORIGIN,
  output logic [12:0] O_INPUT_FILL_Y_ORIGIN,
  output logic  [7:0] O_INPUT_FILL_VALID_WIDTH,
  output logic  [7:0] O_INPUT_FILL_VALID_HEIGHT,
  output logic        O_INPUT_WR_VALID,
  input               I_INPUT_WR_READY,
  output logic  [1:0] O_INPUT_WR_COMPONENT_ID,
  output logic [11:0] O_INPUT_WR_ADDR,
  output logic [63:0] O_INPUT_WR_DATA,
  output logic  [3:0] O_INPUT_WR_SAMPLE_EN,
  output logic        O_INPUT_FILL_DONE_VALID,
  input               I_INPUT_FILL_DONE_READY,
  input               I_INPUT_FILTER_DESC_VALID,
  output logic        O_INPUT_FILTER_DESC_READY,
  input         [8:0] I_INPUT_FILTER_CTU_ID,
  input         [7:0] I_INPUT_FILTER_FRAME_ID,
  input         [7:0] I_INPUT_FILTER_VALID_WIDTH,
  input         [7:0] I_INPUT_FILTER_VALID_HEIGHT,
  input               I_INPUT_ERROR,

  // DBF_INTERMEDIATE_SAMPLE_BUFFER initialization write interface.
  output logic        O_INTER_INIT_VALID,
  input               I_INTER_INIT_READY,
  output logic  [1:0] O_INTER_INIT_COMPONENT_ID,
  output logic [11:0] O_INTER_INIT_ADDR,
  output logic [63:0] O_INTER_INIT_DATA,
  output logic  [3:0] O_INTER_INIT_SAMPLE_EN,
  input               I_INTER_ERROR_VALID,
  input         [1:0] I_INTER_ERROR_CODE,

  // Recon bank ownership release, after its final read has drained.
  output logic        O_RECON_RELEASE_VALID,
  input               I_RECON_RELEASE_READY,
  output logic        O_RECON_RELEASE_BANK_ID,
  output logic  [8:0] O_RECON_RELEASE_CTU_ID,
  output logic  [7:0] O_RECON_RELEASE_FRAME_ID,
  input               I_RECON_ERROR
);
  localparam logic [1:0] PARA_COMP_Y    = 2'd0;
  localparam logic [1:0] PARA_COMP_CB   = 2'd1;
  localparam logic [1:0] PARA_COMP_CR   = 2'd2;

  localparam logic [3:0] PARA_ERR_NONE       = 4'd0;
  localparam logic [3:0] PARA_ERR_DESC       = 4'd1;
  localparam logic [3:0] PARA_ERR_RECON      = 4'd2;
  localparam logic [3:0] PARA_ERR_INPUT      = 4'd3;
  localparam logic [3:0] PARA_ERR_INTER      = 4'd4;
  localparam logic [3:0] PARA_ERR_FILTER_TAG = 4'd5;
  localparam logic [3:0] PARA_ERR_RESPONSE   = 4'd6;

  typedef enum logic [3:0] {
    ST_IDLE          = 4'd0,
    ST_FILL_DESC     = 4'd1,
    ST_READ          = 4'd2,
    ST_WAIT_DATA     = 4'd3,
    ST_WRITE_INPUT   = 4'd4,
    ST_WRITE_INTER   = 4'd5,
    ST_CHECK_INTER   = 4'd6,
    ST_FILL_DONE     = 4'd7,
    ST_FILTER_DESC   = 4'd8,
    ST_RECON_RELEASE = 4'd9,
    ST_DONE          = 4'd10,
    ST_ERROR         = 4'd11
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic       r_recon_bank;
  logic [8:0] r_ctu_id;
  logic [7:0] r_frame_id;
  logic [12:0] r_x_origin;
  logic [12:0] r_y_origin;
  logic [7:0] r_valid_width;
  logic [7:0] r_valid_height;
  logic [7:0] r_c_width;
  logic [7:0] r_c_height;
  logic [5:0] r_y_row_words;
  logic [5:0] r_c_row_words;
  logic [1:0] r_component;
  logic [7:0] r_row;
  logic [5:0] r_word_col;
  logic [63:0] r_word_data;
  logic [3:0] r_error_code;

  logic [7:0] w_c_width;
  logic [7:0] w_c_height;
  logic [5:0] w_y_row_words;
  logic [5:0] w_c_row_words;
  logic [7:0] w_current_height;
  logic [5:0] w_current_row_words;
  logic [7:0] w_current_width;
  logic [3:0] w_word_mask;
  logic [11:0] w_word_addr;
  logic w_desc_fire;
  logic w_input_wr_fire;
  logic w_inter_wr_fire;
  logic w_filter_desc_fire;
  logic w_desc_valid;
  logic w_filter_tag_valid;
  logic w_last_word;
  logic w_last_component;
  logic w_fault;
  logic [3:0] w_fault_code;

  // Using 9-bit intermediates keeps WIDTH=128 and rounding exact.
  assign w_c_width = ({1'b0, I_RECON_DESC_VALID_WIDTH} + 9'd1) >> 1;
  assign w_c_height = ({1'b0, I_RECON_DESC_VALID_HEIGHT} + 9'd1) >> 1;
  assign w_y_row_words = ({1'b0, I_RECON_DESC_VALID_WIDTH} + 9'd3) >> 2;
  assign w_c_row_words = ({1'b0, w_c_width} + 9'd3) >> 2;

  assign w_desc_valid = (I_RECON_DESC_CTU_ID == I_CTU_ID) &&
                        (I_RECON_DESC_VALID_WIDTH == I_CTU_VALID_WIDTH) &&
                        (I_RECON_DESC_VALID_HEIGHT == I_CTU_VALID_HEIGHT) &&
                        (I_RECON_DESC_VALID_WIDTH >= 8'd1) &&
                        (I_RECON_DESC_VALID_WIDTH <= 8'd128) &&
                        (I_RECON_DESC_VALID_HEIGHT >= 8'd1) &&
                        (I_RECON_DESC_VALID_HEIGHT <= 8'd128);
  assign w_filter_tag_valid =
      (I_INPUT_FILTER_CTU_ID == r_ctu_id) &&
      (I_INPUT_FILTER_FRAME_ID == r_frame_id) &&
      (I_INPUT_FILTER_VALID_WIDTH == r_valid_width) &&
      (I_INPUT_FILTER_VALID_HEIGHT == r_valid_height);

  always_comb begin
    w_current_height = r_valid_height;
    w_current_width = r_valid_width;
    w_current_row_words = r_y_row_words;
    if (r_component != PARA_COMP_Y) begin
      w_current_height = r_c_height;
      w_current_width = r_c_width;
      w_current_row_words = r_c_row_words;
    end
  end

  always_comb begin
    w_word_mask = 4'b1111;
    if (r_word_col == w_current_row_words - 6'd1) begin
      unique casez (w_current_width[1:0])
        2'b01: w_word_mask = 4'b0001;
        2'b10: w_word_mask = 4'b0011;
        2'b11: w_word_mask = 4'b0111;
        default: w_word_mask = 4'b1111;
      endcase
    end
  end

  always_comb begin
    w_word_addr = '0;
    unique casez (r_component)
      PARA_COMP_Y: begin
        w_word_addr = {r_row[6:0], r_word_col[4:0]};
      end
      PARA_COMP_CB, PARA_COMP_CR: begin
        w_word_addr = {2'b00, r_row[5:0], r_word_col[3:0]};
      end
      default: begin
        w_word_addr = '0;
      end
    endcase
  end

  assign w_last_word = (r_row == w_current_height - 8'd1) &&
                       (r_word_col == w_current_row_words - 6'd1);
  assign w_last_component = (r_component == PARA_COMP_CR);

  assign w_desc_fire = O_RECON_DESC_READY && I_RECON_DESC_VALID;
  assign w_input_wr_fire = O_INPUT_WR_VALID && I_INPUT_WR_READY;
  assign w_inter_wr_fire = O_INTER_INIT_VALID && I_INTER_INIT_READY;
  assign w_filter_desc_fire = O_INPUT_FILTER_DESC_READY &&
                              I_INPUT_FILTER_DESC_VALID;

  // Fatal asynchronous protocol reports are consumed at a clock edge.
  always_comb begin
    w_fault = 1'b0;
    w_fault_code = PARA_ERR_NONE;
    if ((r_current_state != ST_IDLE) &&
        (r_current_state != ST_DONE) &&
        (r_current_state != ST_ERROR)) begin
      if (I_RECON_ERROR) begin
        w_fault = 1'b1;
        w_fault_code = PARA_ERR_RECON;
      end else if (I_INPUT_ERROR) begin
        w_fault = 1'b1;
        w_fault_code = PARA_ERR_INPUT;
      end else if (I_INTER_ERROR_VALID) begin
        w_fault = 1'b1;
        w_fault_code = PARA_ERR_INTER;
      end else if ((r_current_state == ST_WAIT_DATA) &&
                   I_RECON_RD_VALID &&
                   (I_RECON_RD_BANK_ID != r_recon_bank)) begin
        w_fault = 1'b1;
        w_fault_code = PARA_ERR_RESPONSE;
      end else if ((r_current_state == ST_FILTER_DESC) &&
                   I_INPUT_FILTER_DESC_VALID && !w_filter_tag_valid) begin
        w_fault = 1'b1;
        w_fault_code = PARA_ERR_FILTER_TAG;
      end
    end else if ((r_current_state == ST_IDLE) &&
                 I_INIT_ACTIVE && I_RECON_DESC_VALID && !w_desc_valid) begin
      w_fault = 1'b1;
      w_fault_code = PARA_ERR_DESC;
    end
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
        if (w_desc_fire)
          w_next_state = ST_FILL_DESC;
      end
      ST_FILL_DESC: begin
        if (O_INPUT_FILL_DESC_VALID && I_INPUT_FILL_DESC_READY)
          w_next_state = ST_READ;
      end
      ST_READ: begin
        w_next_state = ST_WAIT_DATA;
      end
      ST_WAIT_DATA: begin
        if (I_RECON_RD_VALID)
          w_next_state = ST_WRITE_INPUT;
      end
      ST_WRITE_INPUT: begin
        if (w_input_wr_fire)
          w_next_state = ST_WRITE_INTER;
      end
      ST_WRITE_INTER: begin
        if (w_inter_wr_fire)
          w_next_state = ST_CHECK_INTER;
      end
      ST_CHECK_INTER: begin
        if (w_last_word && w_last_component)
          w_next_state = ST_FILL_DONE;
        else
          w_next_state = ST_READ;
      end
      ST_FILL_DONE: begin
        if (O_INPUT_FILL_DONE_VALID && I_INPUT_FILL_DONE_READY)
          w_next_state = ST_FILTER_DESC;
      end
      ST_FILTER_DESC: begin
        if (w_filter_desc_fire)
          w_next_state = ST_RECON_RELEASE;
      end
      ST_RECON_RELEASE: begin
        if (O_RECON_RELEASE_VALID && I_RECON_RELEASE_READY)
          w_next_state = ST_DONE;
      end
      ST_DONE: begin
        if (!I_INIT_ACTIVE)
          w_next_state = ST_IDLE;
      end
      ST_ERROR: begin
        w_next_state = ST_ERROR;
      end
      default: begin
        w_next_state = ST_ERROR;
      end
    endcase
    if (w_fault)
      w_next_state = ST_ERROR;
  end

  // Process 3: State-dependent control outputs.
  always_comb begin
    O_RECON_DESC_READY = 1'b0;
    O_RECON_RD_EN = 1'b0;
    O_INPUT_FILL_DESC_VALID = 1'b0;
    O_INPUT_WR_VALID = 1'b0;
    O_INTER_INIT_VALID = 1'b0;
    O_INPUT_FILL_DONE_VALID = 1'b0;
    O_INPUT_FILTER_DESC_READY = 1'b0;
    O_RECON_RELEASE_VALID = 1'b0;
    O_INIT_DONE = 1'b0;
    O_INIT_ERROR = 1'b0;
    O_BUSY = 1'b0;
    unique casez (r_current_state)
      ST_IDLE: begin
        O_RECON_DESC_READY = I_INIT_ACTIVE;
      end
      ST_FILL_DESC: begin
        O_BUSY = 1'b1;
        O_INPUT_FILL_DESC_VALID = 1'b1;
      end
      ST_READ: begin
        O_BUSY = 1'b1;
        O_RECON_RD_EN = 1'b1;
      end
      ST_WAIT_DATA: begin
        O_BUSY = 1'b1;
      end
      ST_WRITE_INPUT: begin
        O_BUSY = 1'b1;
        O_INPUT_WR_VALID = 1'b1;
      end
      ST_WRITE_INTER: begin
        O_BUSY = 1'b1;
        O_INTER_INIT_VALID = 1'b1;
      end
      ST_CHECK_INTER: begin
        O_BUSY = 1'b1;
      end
      ST_FILL_DONE: begin
        O_BUSY = 1'b1;
        O_INPUT_FILL_DONE_VALID = 1'b1;
      end
      ST_FILTER_DESC: begin
        O_BUSY = 1'b1;
        O_INPUT_FILTER_DESC_READY = 1'b1;
      end
      ST_RECON_RELEASE: begin
        O_BUSY = 1'b1;
        O_RECON_RELEASE_VALID = 1'b1;
      end
      ST_DONE: begin
        O_INIT_DONE = 1'b1;
      end
      ST_ERROR: begin
        O_INIT_ERROR = 1'b1;
      end
      default: begin
        O_INIT_ERROR = 1'b1;
      end
    endcase
    // Prevent a mis-tagged response or sticky fault from causing writes
    // or irrevocable ownership handshakes on the same clock edge.
    if (w_fault) begin
      O_RECON_DESC_READY = 1'b0;
      O_RECON_RD_EN = 1'b0;
      O_INPUT_FILL_DESC_VALID = 1'b0;
      O_INPUT_WR_VALID = 1'b0;
      O_INTER_INIT_VALID = 1'b0;
      O_INPUT_FILL_DONE_VALID = 1'b0;
      O_INPUT_FILTER_DESC_READY = 1'b0;
      O_RECON_RELEASE_VALID = 1'b0;
    end
  end

  assign O_INPUT_FILL_CTU_ID = r_ctu_id;
  assign O_INPUT_FILL_FRAME_ID = r_frame_id;
  assign O_INPUT_FILL_X_ORIGIN = r_x_origin;
  assign O_INPUT_FILL_Y_ORIGIN = r_y_origin;
  assign O_INPUT_FILL_VALID_WIDTH = r_valid_width;
  assign O_INPUT_FILL_VALID_HEIGHT = r_valid_height;

  assign O_RECON_RD_COMPONENT_ID = r_component;
  assign O_RECON_RD_ADDR = w_word_addr;
  assign O_INPUT_WR_COMPONENT_ID = r_component;
  assign O_INPUT_WR_ADDR = w_word_addr;
  assign O_INPUT_WR_DATA = r_word_data;
  assign O_INPUT_WR_SAMPLE_EN = w_word_mask;
  assign O_INTER_INIT_COMPONENT_ID = r_component;
  assign O_INTER_INIT_ADDR = w_word_addr;
  assign O_INTER_INIT_DATA = r_word_data;
  assign O_INTER_INIT_SAMPLE_EN = w_word_mask;
  assign O_RECON_RELEASE_BANK_ID = r_recon_bank;
  assign O_RECON_RELEASE_CTU_ID = r_ctu_id;
  assign O_RECON_RELEASE_FRAME_ID = r_frame_id;
  assign O_INIT_ERROR_CODE = r_error_code;

  // Descriptor and sequence counters. Large data register has no reset.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_recon_bank <= 1'b0;
      r_ctu_id <= '0;
      r_frame_id <= '0;
      r_x_origin <= '0;
      r_y_origin <= '0;
      r_valid_width <= '0;
      r_valid_height <= '0;
      r_c_width <= '0;
      r_c_height <= '0;
      r_y_row_words <= '0;
      r_c_row_words <= '0;
      r_component <= PARA_COMP_Y;
      r_row <= '0;
      r_word_col <= '0;
      r_error_code <= PARA_ERR_NONE;
    end else begin
      if (w_fault)
        r_error_code <= w_fault_code;
      if (w_desc_fire && w_desc_valid) begin
        r_recon_bank <= I_RECON_DESC_BANK_ID;
        r_ctu_id <= I_RECON_DESC_CTU_ID;
        r_frame_id <= I_RECON_DESC_FRAME_ID;
        r_x_origin <= I_RECON_DESC_X_ORIGIN;
        r_y_origin <= I_RECON_DESC_Y_ORIGIN;
        r_valid_width <= I_RECON_DESC_VALID_WIDTH;
        r_valid_height <= I_RECON_DESC_VALID_HEIGHT;
        r_c_width <= w_c_width;
        r_c_height <= w_c_height;
        r_y_row_words <= w_y_row_words;
        r_c_row_words <= w_c_row_words;
        r_component <= PARA_COMP_Y;
        r_row <= '0;
        r_word_col <= '0;
        r_error_code <= PARA_ERR_NONE;
      end else if ((r_current_state == ST_CHECK_INTER) && !w_fault) begin
        if (w_last_word) begin
          r_word_col <= '0;
          r_row <= '0;
          if (!w_last_component)
            r_component <= r_component + 2'd1;
        end else if (r_word_col == w_current_row_words - 6'd1) begin
          r_word_col <= '0;
          r_row <= r_row + 8'd1;
        end else begin
          r_word_col <= r_word_col + 6'd1;
        end
      end
    end
  end

  always_ff @(posedge I_CLK) begin
    if ((r_current_state == ST_WAIT_DATA) && I_RECON_RD_VALID && !w_fault)
      r_word_data <= I_RECON_RD_DATA;
  end

endmodule: DBF_CTU_INIT_LOADER
