//-----------------------------------------------------------
// Description: This module copies the post-vertical reconstructed
// CTU from DBF_INTERMEDIATE_SAMPLE_BUFFER into the separate
// DBF_OUTPUT_SAMPLE_BUFFER. The sequential architecture handles
// exactly one 64-bit word at a time: request read, capture its
// registered response, then issue a masked copy write. Address
// generation traverses Y, Cb and Cr in component-row-major order
// for a maximum 128x128 luma YUV420 CTU. Partial right/bottom
// CTUs are supported by copying only valid sample slots.
// It uses no FIFO, parallel bulk port, RAM reset or RTL function.
// The CTU controller owns both buffer interfaces during copying.
//-----------------------------------------------------------
`timescale 1ns/1ps

module DBF_BUFFER_COPY_ENGINE (
  input                I_CLK,
  input                I_RST_N,

  // Command: luma dimensions of the current CTU, 1 through 128.
  input                I_COPY_START,
  input          [7:0] I_CTU_LUMA_WIDTH,
  input          [7:0] I_CTU_LUMA_HEIGHT,
  output logic         O_COPY_BUSY,
  output logic         O_COPY_DONE_VALID,
  input                I_COPY_DONE_READY,
  output logic         O_COPY_ERROR,
  output logic   [1:0] O_COPY_ERROR_CODE,

  // Connect to the Intermediate Buffer's normal 64-bit read port.
  output logic         O_INTER_RD_EN,
  output logic   [1:0] O_INTER_RD_COMPONENT_ID,
  output logic  [11:0] O_INTER_RD_ADDR,
  output logic         O_INTER_RD_DIRECTION,
  output logic   [1:0] O_INTER_RD_X_OFFSET,
  input                I_INTER_RD_VALID,
  input         [63:0] I_INTER_RD_DATA,
  input          [3:0] I_INTER_RD_SAMPLE_EN,
  input          [1:0] I_INTER_RD_COMPONENT_ID,
  input         [11:0] I_INTER_RD_ADDR,
  input                I_INTER_ERROR_VALID,

  // Connect to the Output Buffer's sequential 64-bit copy port.
  output logic         O_OUTPUT_COPY_MODE,
  output logic         O_OUTPUT_COPY_VALID,
  input                I_OUTPUT_COPY_READY,
  output logic   [1:0] O_OUTPUT_COPY_COMPONENT_ID,
  output logic  [11:0] O_OUTPUT_COPY_ADDR,
  output logic  [63:0] O_OUTPUT_COPY_DATA,
  output logic   [3:0] O_OUTPUT_COPY_SAMPLE_EN,
  input                I_OUTPUT_ERROR_VALID
);

  localparam logic [1:0] PARA_COMP_Y  = 2'd0;
  localparam logic [1:0] PARA_COMP_CB = 2'd1;
  localparam logic [1:0] PARA_COMP_CR = 2'd2;

  localparam logic [1:0] PARA_ERR_NONE   = 2'd0;
  localparam logic [1:0] PARA_ERR_CONFIG = 2'd1;
  localparam logic [1:0] PARA_ERR_READ   = 2'd2;
  localparam logic [1:0] PARA_ERR_WRITE  = 2'd3;

  typedef enum logic [2:0] {
    ST_IDLE      = 3'd0,
    ST_READ      = 3'd1,
    ST_WAIT_DATA = 3'd2,
    ST_WRITE     = 3'd3,
    ST_FINALIZE  = 3'd4,
    ST_DONE      = 3'd5
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [7:0] r_luma_width;
  logic [7:0] r_luma_height;
  logic [1:0] r_component_id;
  logic [7:0] r_row;
  logic [5:0] r_word_col;
  logic       r_copy_error;
  logic [1:0] r_copy_error_code;

  // Only one data word is in flight. Its storage has no reset.
  logic [63:0] r_copy_data;
  logic  [3:0] r_copy_sample_en;

  logic [7:0]  w_plane_width;
  logic [7:0]  w_plane_height;
  logic [5:0]  w_plane_words;
  logic [11:0] w_logical_addr;
  logic  [3:0] w_expected_sample_en;
  logic        w_config_legal;
  logic        w_read_response_legal;
  logic        w_last_word;
  logic        w_read_accept;
  logic        w_write_accept;

  assign w_config_legal =
      (I_CTU_LUMA_WIDTH != 8'd0) &&
      (I_CTU_LUMA_HEIGHT != 8'd0) &&
      (I_CTU_LUMA_WIDTH <= 8'd128) &&
      (I_CTU_LUMA_HEIGHT <= 8'd128);

  // For 4:2:0, chroma dimensions are ceil(luma_dimension/2).
  assign w_plane_width = (r_component_id == PARA_COMP_Y) ?
                         r_luma_width :
                         ((r_luma_width >> 1) + {7'd0, r_luma_width[0]});
  assign w_plane_height = (r_component_id == PARA_COMP_Y) ?
                          r_luma_height :
                          ((r_luma_height >> 1) + {7'd0, r_luma_height[0]});
  assign w_plane_words = (w_plane_width[7:2] +
                          {5'd0, (|w_plane_width[1:0])});

  // Per-component row-major 64-bit word address.
  always_comb begin
    w_logical_addr = '0;
    unique casez (r_component_id)
      PARA_COMP_Y: begin
        w_logical_addr = {r_row[6:0], r_word_col[4:0]};
      end
      PARA_COMP_CB, PARA_COMP_CR: begin
        w_logical_addr = {2'b00, r_row[5:0], r_word_col[3:0]};
      end
      default: begin
        w_logical_addr = '0;
      end
    endcase
  end

  // Full words copy all samples. Partial right words copy only the
  // sample slots inside the valid luma/chroma plane width.
  always_comb begin
    w_expected_sample_en = 4'b1111;
    if (r_word_col == (w_plane_words - 6'd1)) begin
      unique casez (w_plane_width[1:0])
        2'b00: w_expected_sample_en = 4'b1111;
        2'b01: w_expected_sample_en = 4'b0001;
        2'b10: w_expected_sample_en = 4'b0011;
        2'b11: w_expected_sample_en = 4'b0111;
        default: w_expected_sample_en = 4'b0000;
      endcase
    end
  end

  assign w_last_word =
      (r_component_id == PARA_COMP_CR) &&
      (r_row == (w_plane_height - 8'd1)) &&
      (r_word_col == (w_plane_words - 6'd1));

  // The Intermediate read response contains a one-cycle registered
  // tag and sample mask; it has no downstream READY signal.
  assign w_read_response_legal =
      (I_INTER_RD_COMPONENT_ID == r_component_id) &&
      (I_INTER_RD_ADDR == w_logical_addr) &&
      ((I_INTER_RD_SAMPLE_EN & w_expected_sample_en) ==
       w_expected_sample_en);

  assign w_read_accept = (r_current_state == ST_WAIT_DATA) &&
                         I_INTER_RD_VALID &&
                         !I_INTER_ERROR_VALID &&
                         w_read_response_legal;

  assign w_write_accept = (r_current_state == ST_WRITE) &&
                          I_OUTPUT_COPY_READY;

  // FSM Process 1: current-state register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_current_state <= ST_IDLE;
    end else begin
      r_current_state <= w_next_state;
    end
  end

  // FSM Process 2: next-state logic.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (I_COPY_START) begin
          if (w_config_legal)
            w_next_state = ST_READ;
          else
            w_next_state = ST_DONE;
        end
      end
      ST_READ: begin
        if (I_OUTPUT_ERROR_VALID)
          w_next_state = ST_DONE;
        else
          w_next_state = ST_WAIT_DATA;
      end
      ST_WAIT_DATA: begin
        if (I_INTER_ERROR_VALID)
          w_next_state = ST_DONE;
        else if (I_INTER_RD_VALID) begin
          if (w_read_response_legal)
            w_next_state = ST_WRITE;
          else
            w_next_state = ST_DONE;
        end
      end
      ST_WRITE: begin
        if (w_write_accept) begin
          if (w_last_word)
            w_next_state = ST_FINALIZE;
          else
            w_next_state = ST_READ;
        end
      end
      ST_FINALIZE: begin
        w_next_state = ST_DONE;
      end
      ST_DONE: begin
        if (I_COPY_DONE_READY)
          w_next_state = ST_IDLE;
      end
      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // FSM Process 3: registered-buffer protocol outputs.
  always_comb begin
    O_COPY_BUSY = (r_current_state != ST_IDLE);
    O_COPY_DONE_VALID = (r_current_state == ST_DONE);
    O_COPY_ERROR = r_copy_error;
    O_COPY_ERROR_CODE = r_copy_error_code;

    // Retain exclusive Output Buffer copy ownership through DONE.
    O_OUTPUT_COPY_MODE = (r_current_state != ST_IDLE);
    O_OUTPUT_COPY_VALID = (r_current_state == ST_WRITE);
    O_OUTPUT_COPY_COMPONENT_ID = r_component_id;
    O_OUTPUT_COPY_ADDR = w_logical_addr;
    O_OUTPUT_COPY_DATA = r_copy_data;
    O_OUTPUT_COPY_SAMPLE_EN = r_copy_sample_en;

    O_INTER_RD_EN = (r_current_state == ST_READ) &&
                    !I_OUTPUT_ERROR_VALID;
    O_INTER_RD_COMPONENT_ID = r_component_id;
    O_INTER_RD_ADDR = w_logical_addr;
    O_INTER_RD_DIRECTION = 1'b0;
    O_INTER_RD_X_OFFSET = 2'b00;
  end

  // Command context, address progression, and sticky error status.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_luma_width <= '0;
      r_luma_height <= '0;
      r_component_id <= PARA_COMP_Y;
      r_row <= '0;
      r_word_col <= '0;
      r_copy_error <= 1'b0;
      r_copy_error_code <= PARA_ERR_NONE;
    end else begin
      if ((r_current_state == ST_IDLE) && I_COPY_START) begin
        r_luma_width <= I_CTU_LUMA_WIDTH;
        r_luma_height <= I_CTU_LUMA_HEIGHT;
        r_component_id <= PARA_COMP_Y;
        r_row <= '0;
        r_word_col <= '0;
        r_copy_error <= !w_config_legal;
        r_copy_error_code <= w_config_legal ? PARA_ERR_NONE :
                                             PARA_ERR_CONFIG;
      end else begin
        if ((r_current_state == ST_READ) && I_OUTPUT_ERROR_VALID) begin
          r_copy_error <= 1'b1;
          r_copy_error_code <= PARA_ERR_WRITE;
        end else if (r_current_state == ST_WAIT_DATA) begin
          if (I_INTER_ERROR_VALID ||
              (I_INTER_RD_VALID && !w_read_response_legal)) begin
            r_copy_error <= 1'b1;
            r_copy_error_code <= PARA_ERR_READ;
          end
        end else if ((r_current_state == ST_FINALIZE) &&
                     I_OUTPUT_ERROR_VALID) begin
          r_copy_error <= 1'b1;
          r_copy_error_code <= PARA_ERR_WRITE;
        end

        if (w_write_accept) begin
          if ((r_word_col + 6'd1) < w_plane_words) begin
            r_word_col <= r_word_col + 6'd1;
          end else begin
            r_word_col <= '0;
            if ((r_row + 8'd1) < w_plane_height) begin
              r_row <= r_row + 8'd1;
            end else begin
              r_row <= '0;
              if (r_component_id != PARA_COMP_CR)
                r_component_id <= r_component_id + 2'd1;
            end
          end
        end
      end
    end
  end

  // Valid word data is captured only at the registered read handshake.
  // Large datapath storage is intentionally not reset.
  always_ff @(posedge I_CLK) begin
    if (w_read_accept) begin
      r_copy_data <= I_INTER_RD_DATA;
      r_copy_sample_en <= w_expected_sample_en;
    end
  end

endmodule: DBF_BUFFER_COPY_ENGINE
