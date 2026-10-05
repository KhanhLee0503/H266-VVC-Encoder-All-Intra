//-----------------------------------------------------------
// Description: CTU buffer state manager with READY_TAKE ownership transfer.
//              Hardware-style version for 4 physical CTU buffers.
//
// READY ordering fix:
//   Fetch-completed buffer IDs are pushed into a READY FIFO.
//   O_READY_BUFFER_* is always driven from the FIFO head, so CTUs are
//   presented downstream in fetch-completion order instead of fixed
//   physical-buffer-ID priority.
//
// Buffer lifecycle:
//   FREE -> RESERVED -> FILLING -> READY -> IN_USE -> FREE
//
// Error lifecycle:
//   FILLING -> FREE when CTU_FETCH_ENGINE aborts a fetch because of
//   an AXI response/protocol error.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_BUFFER_MANAGER
  #(
    parameter int PARA_NUM_BUFFERS = 4,
    parameter int PARA_BUF_ID_W    = 2,
    parameter int PARA_CTU_TASK_WD = 136)
  (
    input                                   I_CLK,
    input                                   I_RST_N,

    output logic                            O_BUFFER_FREE_VALID,
    output logic [PARA_BUF_ID_W - 1:0]      O_BUFFER_FREE_ID,

    input                                   I_BUFFER_RESERVED_VALID,
    input [PARA_BUF_ID_W - 1:0]             I_BUFFER_RESERVED_ID,
    input [PARA_CTU_TASK_WD - 1:0]          I_BUFFER_RESERVED_META,

    input                                   I_BUFFER_FETCH_START_VALID,
    input [PARA_BUF_ID_W - 1:0]             I_BUFFER_FETCH_START_ID,

    input                                   I_FETCH_DONE_VALID,
    input [PARA_BUF_ID_W - 1:0]             I_FETCH_DONE_BUFFER_ID,
    input [PARA_CTU_TASK_WD - 1:0]          I_FETCH_DONE_TASK,

    input                                   I_FETCH_ERROR_VALID,
    input [PARA_BUF_ID_W - 1:0]             I_FETCH_ERROR_BUFFER_ID,

    output logic                            O_READY_BUFFER_VALID,
    output logic [PARA_BUF_ID_W - 1:0]      O_READY_BUFFER_ID,
    output logic [PARA_CTU_TASK_WD - 1:0]   O_READY_BUFFER_META,

    input                                   I_READY_TAKE_VALID,
    input [PARA_BUF_ID_W - 1:0]             I_READY_TAKE_BUFFER_ID,

    input                                   I_CTU_RELEASE_VALID,
    input [PARA_BUF_ID_W - 1:0]             I_CTU_RELEASE_BUFFER_ID,

    output logic                            O_ALL_BUFFERS_FREE
  );

  typedef enum logic [2:0] {
    ST_BUF_FREE     = 3'b000,
    ST_BUF_RESERVED = 3'b001,
    ST_BUF_FILLING  = 3'b010,
    ST_BUF_READY    = 3'b011,
    ST_BUF_IN_USE   = 3'b100
  } t_buffer_state;

  t_buffer_state r_buffer0_state;
  t_buffer_state r_buffer1_state;
  t_buffer_state r_buffer2_state;
  t_buffer_state r_buffer3_state;

  logic [PARA_CTU_TASK_WD - 1:0] r_buffer0_meta;
  logic [PARA_CTU_TASK_WD - 1:0] r_buffer1_meta;
  logic [PARA_CTU_TASK_WD - 1:0] r_buffer2_meta;
  logic [PARA_CTU_TASK_WD - 1:0] r_buffer3_meta;

  // READY FIFO keeps the temporal order of completed CTUs.
  // The current manager implementation is for four physical buffers,
  // therefore a depth of PARA_NUM_BUFFERS is sufficient.
  logic [PARA_BUF_ID_W - 1:0]  w_ready_fifo_wdata;
  logic [PARA_BUF_ID_W - 1:0]  w_ready_fifo_rdata;
  logic                        w_ready_fifo_wr_en;
  logic                        w_ready_fifo_rd_en;
  logic                        w_ready_fifo_full;
  logic                        w_ready_fifo_empty;
  logic                        w_fetch_done_state_valid;

  logic w_buffer0_free;
  logic w_buffer1_free;
  logic w_buffer2_free;
  logic w_buffer3_free;

  logic w_buf0_reserved;
  logic w_buf1_reserved;
  logic w_buf2_reserved;
  logic w_buf3_reserved;

  logic w_buf0_fetch_start;
  logic w_buf1_fetch_start;
  logic w_buf2_fetch_start;
  logic w_buf3_fetch_start;

  logic w_buf0_fetch_done;
  logic w_buf1_fetch_done;
  logic w_buf2_fetch_done;
  logic w_buf3_fetch_done;

  logic w_buf0_fetch_error;
  logic w_buf1_fetch_error;
  logic w_buf2_fetch_error;
  logic w_buf3_fetch_error;

  logic w_buf0_ready_take;
  logic w_buf1_ready_take;
  logic w_buf2_ready_take;
  logic w_buf3_ready_take;

  logic w_buf0_release;
  logic w_buf1_release;
  logic w_buf2_release;
  logic w_buf3_release;

  assign w_buffer0_free = (r_buffer0_state == ST_BUF_FREE);
  assign w_buffer1_free = (r_buffer1_state == ST_BUF_FREE);
  assign w_buffer2_free = (r_buffer2_state == ST_BUF_FREE);
  assign w_buffer3_free = (r_buffer3_state == ST_BUF_FREE);

  assign O_ALL_BUFFERS_FREE = w_buffer0_free & w_buffer1_free &
                              w_buffer2_free & w_buffer3_free &
                              w_ready_fifo_empty;

  assign w_buf0_reserved = I_BUFFER_RESERVED_VALID & (I_BUFFER_RESERVED_ID == 2'd0);
  assign w_buf1_reserved = I_BUFFER_RESERVED_VALID & (I_BUFFER_RESERVED_ID == 2'd1);
  assign w_buf2_reserved = I_BUFFER_RESERVED_VALID & (I_BUFFER_RESERVED_ID == 2'd2);
  assign w_buf3_reserved = I_BUFFER_RESERVED_VALID & (I_BUFFER_RESERVED_ID == 2'd3);

  assign w_buf0_fetch_start = I_BUFFER_FETCH_START_VALID & (I_BUFFER_FETCH_START_ID == 2'd0);
  assign w_buf1_fetch_start = I_BUFFER_FETCH_START_VALID & (I_BUFFER_FETCH_START_ID == 2'd1);
  assign w_buf2_fetch_start = I_BUFFER_FETCH_START_VALID & (I_BUFFER_FETCH_START_ID == 2'd2);
  assign w_buf3_fetch_start = I_BUFFER_FETCH_START_VALID & (I_BUFFER_FETCH_START_ID == 2'd3);

  // A fetch completion is accepted only for the buffer that is currently
  // in FILLING state. This also prevents an accidental duplicate DONE from
  // inserting a duplicate buffer ID into the READY FIFO.
  always_comb begin
    w_fetch_done_state_valid = 1'b0;

    case (I_FETCH_DONE_BUFFER_ID)
      2'd0: w_fetch_done_state_valid = (r_buffer0_state == ST_BUF_FILLING);
      2'd1: w_fetch_done_state_valid = (r_buffer1_state == ST_BUF_FILLING);
      2'd2: w_fetch_done_state_valid = (r_buffer2_state == ST_BUF_FILLING);
      2'd3: w_fetch_done_state_valid = (r_buffer3_state == ST_BUF_FILLING);
      default: w_fetch_done_state_valid = 1'b0;
    endcase
  end

  // With four buffers, READY FIFO full and a valid FILLING completion
  // cannot occur simultaneously in normal operation. Fetch error has
  // priority over fetch done.
  assign w_ready_fifo_wr_en = I_FETCH_DONE_VALID &
                              w_fetch_done_state_valid &
                              (~I_FETCH_ERROR_VALID) &
                              (~w_ready_fifo_full);
  assign w_ready_fifo_wdata = I_FETCH_DONE_BUFFER_ID;

  assign w_buf0_fetch_done = w_ready_fifo_wr_en & (I_FETCH_DONE_BUFFER_ID == 2'd0);
  assign w_buf1_fetch_done = w_ready_fifo_wr_en & (I_FETCH_DONE_BUFFER_ID == 2'd1);
  assign w_buf2_fetch_done = w_ready_fifo_wr_en & (I_FETCH_DONE_BUFFER_ID == 2'd2);
  assign w_buf3_fetch_done = w_ready_fifo_wr_en & (I_FETCH_DONE_BUFFER_ID == 2'd3);

  assign w_buf0_fetch_error = I_FETCH_ERROR_VALID & (I_FETCH_ERROR_BUFFER_ID == 2'd0);
  assign w_buf1_fetch_error = I_FETCH_ERROR_VALID & (I_FETCH_ERROR_BUFFER_ID == 2'd1);
  assign w_buf2_fetch_error = I_FETCH_ERROR_VALID & (I_FETCH_ERROR_BUFFER_ID == 2'd2);
  assign w_buf3_fetch_error = I_FETCH_ERROR_VALID & (I_FETCH_ERROR_BUFFER_ID == 2'd3);

  // Pop only when the consumer takes the current FIFO head.
  assign w_ready_fifo_rd_en = I_READY_TAKE_VALID &
                              (~w_ready_fifo_empty) &
                              (I_READY_TAKE_BUFFER_ID == w_ready_fifo_rdata);

  assign w_buf0_ready_take = w_ready_fifo_rd_en & (w_ready_fifo_rdata == 2'd0);
  assign w_buf1_ready_take = w_ready_fifo_rd_en & (w_ready_fifo_rdata == 2'd1);
  assign w_buf2_ready_take = w_ready_fifo_rd_en & (w_ready_fifo_rdata == 2'd2);
  assign w_buf3_ready_take = w_ready_fifo_rd_en & (w_ready_fifo_rdata == 2'd3);

  assign w_buf0_release = I_CTU_RELEASE_VALID & (I_CTU_RELEASE_BUFFER_ID == 2'd0);
  assign w_buf1_release = I_CTU_RELEASE_VALID & (I_CTU_RELEASE_BUFFER_ID == 2'd1);
  assign w_buf2_release = I_CTU_RELEASE_VALID & (I_CTU_RELEASE_BUFFER_ID == 2'd2);
  assign w_buf3_release = I_CTU_RELEASE_VALID & (I_CTU_RELEASE_BUFFER_ID == 2'd3);

  // ---------------------------------------------------------
  // Free buffer fixed-priority selection
  // ---------------------------------------------------------
  always_comb begin
    O_BUFFER_FREE_VALID = 1'b0;
    O_BUFFER_FREE_ID    = '0;

    if (w_buffer0_free) begin
      O_BUFFER_FREE_VALID = 1'b1;
      O_BUFFER_FREE_ID    = 2'd0;
    end else if (w_buffer1_free) begin
      O_BUFFER_FREE_VALID = 1'b1;
      O_BUFFER_FREE_ID    = 2'd1;
    end else if (w_buffer2_free) begin
      O_BUFFER_FREE_VALID = 1'b1;
      O_BUFFER_FREE_ID    = 2'd2;
    end else if (w_buffer3_free) begin
      O_BUFFER_FREE_VALID = 1'b1;
      O_BUFFER_FREE_ID    = 2'd3;
    end
  end

  // ---------------------------------------------------------
  // READY FIFO
  // ---------------------------------------------------------
  // FIFO order is the fetch-completion order. Because the current fetch
  // engine services CTU tasks sequentially, this is also the CTU task order.
  FIFO_SYNC #(
      .PARA_FIFO_DEPTH(PARA_NUM_BUFFERS),
      .PARA_DATA_WIDTH(PARA_BUF_ID_W))
    U_READY_FIFO(
        .I_CLK(I_CLK),
        .I_RESET_N(I_RST_N),
        .I_WR_EN(w_ready_fifo_wr_en),
        .I_RD_EN(w_ready_fifo_rd_en),
        .I_FIFO_WDATA(w_ready_fifo_wdata),
        .O_FIFO_RDATA(w_ready_fifo_rdata),
        .O_FIFO_FULL(w_ready_fifo_full),
        .O_FIFO_EMPTY(w_ready_fifo_empty))
  ;

  assign O_READY_BUFFER_VALID = ~w_ready_fifo_empty;
  assign O_READY_BUFFER_ID    = w_ready_fifo_empty ? '0 : w_ready_fifo_rdata;

  // Metadata remains stored with each physical buffer. The FIFO only needs
  // to store the buffer ID; the ID selects the corresponding metadata.
  always_comb begin
    O_READY_BUFFER_META = '0;

    if (!w_ready_fifo_empty) begin
      case (w_ready_fifo_rdata)
        2'd0: O_READY_BUFFER_META = r_buffer0_meta;
        2'd1: O_READY_BUFFER_META = r_buffer1_meta;
        2'd2: O_READY_BUFFER_META = r_buffer2_meta;
        2'd3: O_READY_BUFFER_META = r_buffer3_meta;
        default: O_READY_BUFFER_META = '0;
      endcase
    end
  end

  // ---------------------------------------------------------
  // Buffer 0 state register
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_buffer0_state <= ST_BUF_FREE;
      r_buffer0_meta  <= '0;
    end else begin
      unique case (r_buffer0_state)
        ST_BUF_FREE: begin
          if (w_buf0_reserved) begin
            r_buffer0_state <= ST_BUF_RESERVED;
            r_buffer0_meta  <= I_BUFFER_RESERVED_META;
          end
        end

        ST_BUF_RESERVED: begin
          if (w_buf0_fetch_start) begin
            r_buffer0_state <= ST_BUF_FILLING;
          end
        end

        ST_BUF_FILLING: begin
          if (w_buf0_fetch_error) begin
            r_buffer0_state <= ST_BUF_FREE;
            r_buffer0_meta  <= '0;
          end else if (w_buf0_fetch_done) begin
            r_buffer0_state <= ST_BUF_READY;
            r_buffer0_meta  <= I_FETCH_DONE_TASK;
          end
        end

        ST_BUF_READY: begin
          if (w_buf0_ready_take) begin
            r_buffer0_state <= ST_BUF_IN_USE;
          end
        end

        ST_BUF_IN_USE: begin
          if (w_buf0_release) begin
            r_buffer0_state <= ST_BUF_FREE;
            r_buffer0_meta  <= '0;
          end
        end

        default: begin
          r_buffer0_state <= ST_BUF_FREE;
          r_buffer0_meta  <= '0;
        end
      endcase
    end
  end

  // ---------------------------------------------------------
  // Buffer 1 state register
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_buffer1_state <= ST_BUF_FREE;
      r_buffer1_meta  <= '0;
    end else begin
      unique case (r_buffer1_state)
        ST_BUF_FREE: begin
          if (w_buf1_reserved) begin
            r_buffer1_state <= ST_BUF_RESERVED;
            r_buffer1_meta  <= I_BUFFER_RESERVED_META;
          end
        end

        ST_BUF_RESERVED: begin
          if (w_buf1_fetch_start) begin
            r_buffer1_state <= ST_BUF_FILLING;
          end
        end

        ST_BUF_FILLING: begin
          if (w_buf1_fetch_error) begin
            r_buffer1_state <= ST_BUF_FREE;
            r_buffer1_meta  <= '0;
          end else if (w_buf1_fetch_done) begin
            r_buffer1_state <= ST_BUF_READY;
            r_buffer1_meta  <= I_FETCH_DONE_TASK;
          end
        end

        ST_BUF_READY: begin
          if (w_buf1_ready_take) begin
            r_buffer1_state <= ST_BUF_IN_USE;
          end
        end

        ST_BUF_IN_USE: begin
          if (w_buf1_release) begin
            r_buffer1_state <= ST_BUF_FREE;
            r_buffer1_meta  <= '0;
          end
        end

        default: begin
          r_buffer1_state <= ST_BUF_FREE;
          r_buffer1_meta  <= '0;
        end
      endcase
    end
  end

  // ---------------------------------------------------------
  // Buffer 2 state register
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_buffer2_state <= ST_BUF_FREE;
      r_buffer2_meta  <= '0;
    end else begin
      unique case (r_buffer2_state)
        ST_BUF_FREE: begin
          if (w_buf2_reserved) begin
            r_buffer2_state <= ST_BUF_RESERVED;
            r_buffer2_meta  <= I_BUFFER_RESERVED_META;
          end
        end

        ST_BUF_RESERVED: begin
          if (w_buf2_fetch_start) begin
            r_buffer2_state <= ST_BUF_FILLING;
          end
        end

        ST_BUF_FILLING: begin
          if (w_buf2_fetch_error) begin
            r_buffer2_state <= ST_BUF_FREE;
            r_buffer2_meta  <= '0;
          end else if (w_buf2_fetch_done) begin
            r_buffer2_state <= ST_BUF_READY;
            r_buffer2_meta  <= I_FETCH_DONE_TASK;
          end
        end

        ST_BUF_READY: begin
          if (w_buf2_ready_take) begin
            r_buffer2_state <= ST_BUF_IN_USE;
          end
        end

        ST_BUF_IN_USE: begin
          if (w_buf2_release) begin
            r_buffer2_state <= ST_BUF_FREE;
            r_buffer2_meta  <= '0;
          end
        end

        default: begin
          r_buffer2_state <= ST_BUF_FREE;
          r_buffer2_meta  <= '0;
        end
      endcase
    end
  end

  // ---------------------------------------------------------
  // Buffer 3 state register
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_buffer3_state <= ST_BUF_FREE;
      r_buffer3_meta  <= '0;
    end else begin
      unique case (r_buffer3_state)
        ST_BUF_FREE: begin
          if (w_buf3_reserved) begin
            r_buffer3_state <= ST_BUF_RESERVED;
            r_buffer3_meta  <= I_BUFFER_RESERVED_META;
          end
        end

        ST_BUF_RESERVED: begin
          if (w_buf3_fetch_start) begin
            r_buffer3_state <= ST_BUF_FILLING;
          end
        end

        ST_BUF_FILLING: begin
          if (w_buf3_fetch_error) begin
            r_buffer3_state <= ST_BUF_FREE;
            r_buffer3_meta  <= '0;
          end else if (w_buf3_fetch_done) begin
            r_buffer3_state <= ST_BUF_READY;
            r_buffer3_meta  <= I_FETCH_DONE_TASK;
          end
        end

        ST_BUF_READY: begin
          if (w_buf3_ready_take) begin
            r_buffer3_state <= ST_BUF_IN_USE;
          end
        end

        ST_BUF_IN_USE: begin
          if (w_buf3_release) begin
            r_buffer3_state <= ST_BUF_FREE;
            r_buffer3_meta  <= '0;
          end
        end

        default: begin
          r_buffer3_state <= ST_BUF_FREE;
          r_buffer3_meta  <= '0;
        end
      endcase
    end
  end

endmodule : CTU_BUFFER_MANAGER
