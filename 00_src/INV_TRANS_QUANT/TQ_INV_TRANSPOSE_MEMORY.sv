//-----------------------------------------------------------
// Description: VVC inverse 2-D transpose store.
// - Two independently owned ping-pong TU buffers.
// - Four synchronous 256x16 memory banks per buffer.
// - Column-major input (4 consecutive rows per beat).
// - Row-major output (4 consecutive columns per beat).
// - bank = (row + col) mod 4;
//   addr = row * (W/4) + floor(col/4).
// - Two-entry elastic output FIFO + one in-flight BRAM read.
// - Ordered TU completion and explicit post-row release.
// - Supports all W,H in {4,8,16,32} independently.
// - One active writer and one active reader, on distinct buffers.
// The input TU metadata and START are sampled on beat 0.
// LAST flags refer to a row vector and to an entire TU separately.
// No transform, rounding, clipping or arithmetic is performed.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INV_TRANSPOSE_MEMORY #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_TU_ID_WD = 16
)(
  input                                    I_CLK,
  input                                    I_RESETN,
  // Column-order write stream
  input        [4*PARA_DATA_WD-1:0]        I_WR_DATA,
  input                                    I_WR_VALID,
  output logic                             O_WR_READY,
  input                                    I_WR_TU_START,
  input                                    I_WR_TU_LAST,
  input        [PARA_TU_ID_WD-1:0]         I_WR_TU_ID,
  input        [1:0]                       I_WR_WIDTH,
  input        [1:0]                       I_WR_HEIGHT,
  input        [1:0]                       I_WR_TRANSFORM_HOR,
  input        [1:0]                       I_WR_TRANSFORM_VER,
  input        [1:0]                       I_WR_COMPONENT,
  // Row-order read stream
  output logic [4*PARA_DATA_WD-1:0]        O_RD_DATA,
  output logic                             O_RD_VALID,
  input                                    I_RD_READY,
  output logic                             O_RD_VECTOR_LAST,
  output logic                             O_RD_TU_START,
  output logic                             O_RD_TU_LAST,
  output logic [PARA_TU_ID_WD-1:0]         O_RD_TU_ID,
  output logic [1:0]                       O_RD_WIDTH,
  output logic [1:0]                       O_RD_HEIGHT,
  output logic [1:0]                       O_RD_TRANSFORM_HOR,
  output logic [1:0]                       O_RD_TRANSFORM_VER,
  output logic [1:0]                       O_RD_COMPONENT,
  // A release is issued after the Row Scaling final TU beat
  input                                    I_TU_DONE_VALID,
  input        [PARA_TU_ID_WD-1:0]         I_TU_DONE_ID,
  output logic                             O_PROTOCOL_ERROR
);
  localparam logic [2:0] BUF_FREE         = 3'd0;
  localparam logic [2:0] BUF_FILLING      = 3'd1;
  localparam logic [2:0] BUF_READY        = 3'd2;
  localparam logic [2:0] BUF_READING      = 3'd3;
  localparam logic [2:0] BUF_WAIT_RELEASE = 3'd4;

  logic [2:0] r_buffer_state [0:1];
  logic [PARA_TU_ID_WD-1:0] r_buffer_tu_id [0:1];
  logic [1:0] r_buffer_width [0:1];
  logic [1:0] r_buffer_height [0:1];
  logic [1:0] r_buffer_hor [0:1];
  logic [1:0] r_buffer_ver [0:1];
  logic [1:0] r_buffer_component [0:1];

  // One writer. The first beat allocates a FREE buffer.
  logic r_wr_active;
  logic r_wr_buffer_id;
  logic [4:0] r_wr_col;
  logic [2:0] r_wr_row_group;
  logic w_free_exists;
  logic w_free_buffer_id;
  logic w_write_buffer_id;
  logic [1:0] w_write_width;
  logic [1:0] w_write_height;
  logic [4:0] w_write_col;
  logic [2:0] w_write_row_group;
  logic w_write_fire;
  logic w_write_final;
  logic [3:0] w_wr_bank_en [0:1];
  logic [7:0] w_wr_bank_addr [0:1][0:3];
  logic [PARA_DATA_WD-1:0] w_wr_bank_data [0:1][0:3];

  // Two-entry FIFO preserves the completed-buffer order.
  logic r_ready_queue [0:1];
  logic r_ready_head;
  logic r_ready_tail;
  logic [1:0] r_ready_count;
  logic w_ready_push;
  logic w_ready_pop;

  // One reader. A whole TU is drained before the next TU.
  logic r_rd_active;
  logic r_rd_buffer_id;
  logic [4:0] r_rd_row;
  logic [2:0] r_rd_col_group;
  logic [8:0] r_rd_issue_count;
  logic [8:0] r_rd_accept_count;
  logic [8:0] r_rd_total_beats;
  logic w_read_start;
  logic w_read_issue;
  logic [7:0] w_read_bank_addr;
  logic [3:0] w_rd_bank_en [0:1];
  logic [PARA_DATA_WD-1:0] w_rd_bank_data [0:1][0:3];

  // Single BRAM read return stage (1-cycle synchronous RAM).
  logic r_pipe_valid;
  logic r_pipe_buffer_id;
  logic [1:0] r_pipe_row_low;
  logic r_pipe_vector_last;
  logic r_pipe_tu_start;
  logic r_pipe_tu_last;
  logic [4*PARA_DATA_WD-1:0] w_pipe_data;

  // Two-beat output FIFO. No RAM payload is reset.
  logic [4*PARA_DATA_WD-1:0] r_fifo_data [0:1];
  logic r_fifo_vector_last [0:1];
  logic r_fifo_tu_start [0:1];
  logic r_fifo_tu_last [0:1];
  logic r_fifo_head;
  logic r_fifo_tail;
  logic [1:0] r_fifo_count;
  logic w_fifo_pop;
  logic w_fifo_push;
  logic [2:0] w_reserved_count;

  // ---------------------------------------------------------
  // Free buffer search and column stream acceptance.
  // ---------------------------------------------------------
  always_comb begin
    w_free_exists    = 1'b0;
    w_free_buffer_id = 1'b0;
    if (r_buffer_state[0] == BUF_FREE) begin
      w_free_exists    = 1'b1;
      w_free_buffer_id = 1'b0;
    end
    else if (r_buffer_state[1] == BUF_FREE) begin
      w_free_exists    = 1'b1;
      w_free_buffer_id = 1'b1;
    end
  end

  always_comb begin
    O_WR_READY        = r_wr_active || w_free_exists;
    w_write_buffer_id = r_wr_active ? r_wr_buffer_id : w_free_buffer_id;
    w_write_width     = r_wr_active ? r_buffer_width[r_wr_buffer_id] : I_WR_WIDTH;
    w_write_height    = r_wr_active ? r_buffer_height[r_wr_buffer_id] : I_WR_HEIGHT;
    w_write_col       = r_wr_active ? r_wr_col : 5'd0;
    w_write_row_group = r_wr_active ? r_wr_row_group : 3'd0;
    w_write_fire      = I_WR_VALID && O_WR_READY;
    w_write_final     = w_write_fire &&
                        (w_write_col == ((6'd4 << w_write_width) - 6'd1)) &&
                        (w_write_row_group == ((4'd1 << w_write_height) - 4'd1));
  end

  // The only write-enabled bank per lane is determined by
  // the current row+column coordinate; each of 4 lanes
  // always maps to a different physical bank.
  always_comb begin
    for (integer b = 0; b < 2; b++) begin
      w_wr_bank_en[b] = 4'b0000;
      for (integer k = 0; k < 4; k++) begin
        w_wr_bank_addr[b][k] = '0;
        w_wr_bank_data[b][k] = '0;
      end
    end
    if (w_write_fire) begin
      for (integer lane = 0; lane < 4; lane++) begin
        w_wr_bank_en[w_write_buffer_id][(w_write_col[1:0] + 2'(lane)) & 2'b11] = 1'b1;
        w_wr_bank_addr[w_write_buffer_id][(w_write_col[1:0] + 2'(lane)) & 2'b11] =
          (8'({w_write_row_group, 2'b00} + 5'(lane)) << w_write_width) +
          (w_write_col >> 2);
        w_wr_bank_data[w_write_buffer_id][(w_write_col[1:0] + 2'(lane)) & 2'b11] =
          I_WR_DATA[lane*PARA_DATA_WD +: PARA_DATA_WD];
      end
    end
  end

  assign w_ready_push = w_write_final;
  assign w_read_start = !r_rd_active && (r_ready_count != 2'd0) &&
                        (r_fifo_count == 2'd0) && !r_pipe_valid;
  assign w_ready_pop = w_read_start;

  // ---------------------------------------------------------
  // Read pipeline capacity: outstanding BRAM request reserves
  // a FIFO slot, so backpressure cannot overflow the FIFO.
  // ---------------------------------------------------------
  assign O_RD_VALID = (r_fifo_count != 2'd0);
  assign w_fifo_pop  = O_RD_VALID && I_RD_READY;
  assign w_fifo_push = r_pipe_valid;
  assign w_reserved_count = {1'b0, r_fifo_count} +
                            {2'b00, r_pipe_valid} -
                            {2'b00, w_fifo_pop};
  assign w_read_issue = r_rd_active &&
                        (r_rd_issue_count < r_rd_total_beats) &&
                        (w_reserved_count < 3'd2);

  always_comb begin
    w_read_bank_addr =
      (8'(r_rd_row) << r_buffer_width[r_rd_buffer_id]) +
      8'(r_rd_col_group);
    for (integer b = 0; b < 2; b++) begin
      w_rd_bank_en[b] = '0;
      if (w_read_issue && (r_rd_buffer_id == 1'(b)))
        w_rd_bank_en[b] = 4'b1111;
    end
  end

  // --------------------------------------------
  // Eight physically independent 1RW RAM banks.
  // --------------------------------------------
  generate
    for (genvar b = 0; b < 2; b++) begin: GEN_BUFFERS
      for (genvar k = 0; k < 4; k++) begin: GEN_BANKS
        TQ_INV_TRANSPOSE_BANK #(
          .PARA_DATA_WD(PARA_DATA_WD),
          .PARA_ADDR_WD(8),
          .PARA_DEPTH(256)
        ) u_bank (
          .I_CLK(I_CLK),
          .I_WR_EN(w_wr_bank_en[b][k]),
          .I_WR_ADDR(w_wr_bank_addr[b][k]),
          .I_WR_DATA(w_wr_bank_data[b][k]),
          .I_RD_EN(w_rd_bank_en[b][k]),
          .I_RD_ADDR(w_read_bank_addr),
          .O_RD_DATA(w_rd_bank_data[b][k])
        );
      end
    end
  endgenerate

  // Permute registered BRAM data into natural row order.
  always_comb begin
    w_pipe_data = '0;
    for (integer lane = 0; lane < 4; lane++) begin
      w_pipe_data[lane*PARA_DATA_WD +: PARA_DATA_WD] =
        w_rd_bank_data[r_pipe_buffer_id][(r_pipe_row_low + 2'(lane)) & 2'b11];
    end
  end

  // Output is driven only by held FIFO payloads.
  always_comb begin
    O_RD_DATA        = '0;
    O_RD_VECTOR_LAST = 1'b0;
    O_RD_TU_START    = 1'b0;
    O_RD_TU_LAST     = 1'b0;
    if (O_RD_VALID) begin
      O_RD_DATA        = r_fifo_data[r_fifo_head];
      O_RD_VECTOR_LAST = r_fifo_vector_last[r_fifo_head];
      O_RD_TU_START    = r_fifo_tu_start[r_fifo_head];
      O_RD_TU_LAST     = r_fifo_tu_last[r_fifo_head];
    end
  end

  // Metadata remains owned by the current reader buffer
  // until final row output and explicit TU release.
  always_comb begin
    O_RD_TU_ID         = r_buffer_tu_id[r_rd_buffer_id];
    O_RD_WIDTH         = r_buffer_width[r_rd_buffer_id];
    O_RD_HEIGHT        = r_buffer_height[r_rd_buffer_id];
    O_RD_TRANSFORM_HOR = r_buffer_hor[r_rd_buffer_id];
    O_RD_TRANSFORM_VER = r_buffer_ver[r_rd_buffer_id];
    O_RD_COMPONENT     = r_buffer_component[r_rd_buffer_id];
  end

  // ---------------------------------------------------------
  // SRAM ownership, one writer and one reader state.
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      O_PROTOCOL_ERROR  <= 1'b0;
      r_wr_active       <= 1'b0;
      r_wr_buffer_id    <= 1'b0;
      r_wr_col          <= '0;
      r_wr_row_group    <= '0;
      r_rd_active       <= 1'b0;
      r_rd_buffer_id    <= 1'b0;
      r_rd_row          <= '0;
      r_rd_col_group    <= '0;
      r_rd_issue_count  <= '0;
      r_rd_accept_count <= '0;
      r_rd_total_beats  <= '0;
      for (integer b = 0; b < 2; b++) begin
        r_buffer_state[b]     <= BUF_FREE;
        r_buffer_tu_id[b]    <= '0;
        r_buffer_width[b]    <= '0;
        r_buffer_height[b]   <= '0;
        r_buffer_hor[b]      <= '0;
        r_buffer_ver[b]      <= '0;
        r_buffer_component[b]<= '0;
      end
    end
    else begin
      // Capture the first accepted beat and its immutable metadata.
      if (w_write_fire) begin
        // Invalid framing is sticky; the beat is still accepted.
        if ((!r_wr_active && !I_WR_TU_START) ||
            (r_wr_active && I_WR_TU_START) ||
            (I_WR_TU_LAST != w_write_final))
          O_PROTOCOL_ERROR <= 1'b1;
        if (!r_wr_active) begin
          r_wr_buffer_id                          <= w_write_buffer_id;
          r_wr_active                             <= 1'b1;
          r_buffer_state[w_write_buffer_id]       <= BUF_FILLING;
          r_buffer_tu_id[w_write_buffer_id]       <= I_WR_TU_ID;
          r_buffer_width[w_write_buffer_id]       <= I_WR_WIDTH;
          r_buffer_height[w_write_buffer_id]      <= I_WR_HEIGHT;
          r_buffer_hor[w_write_buffer_id]         <= I_WR_TRANSFORM_HOR;
          r_buffer_ver[w_write_buffer_id]         <= I_WR_TRANSFORM_VER;
          r_buffer_component[w_write_buffer_id]   <= I_WR_COMPONENT;
        end
        if (w_write_final) begin
          r_wr_active                       <= 1'b0;
          r_wr_col                          <= '0;
          r_wr_row_group                    <= '0;
          r_buffer_state[w_write_buffer_id] <= BUF_READY;
        end
        else if (w_write_row_group == ((4'd1 << w_write_height) - 4'd1)) begin
          r_wr_row_group <= 3'd0;
          r_wr_col       <= w_write_col + 5'd1;
        end
        else begin
          r_wr_row_group <= w_write_row_group + 3'd1;
          r_wr_col       <= w_write_col;
        end
      end

      if (w_read_start) begin
        r_rd_active                       <= 1'b1;
        r_rd_buffer_id                    <= r_ready_queue[r_ready_head];
        r_buffer_state[r_ready_queue[r_ready_head]] <= BUF_READING;
        r_rd_row                          <= '0;
        r_rd_col_group                    <= '0;
        r_rd_issue_count                  <= '0;
        r_rd_accept_count                 <= '0;
        r_rd_total_beats                  <= 9'd4 <<
          ({1'b0, r_buffer_width[r_ready_queue[r_ready_head]]} +
           {1'b0, r_buffer_height[r_ready_queue[r_ready_head]]});
      end
      else if (r_rd_active) begin
        if (w_read_issue) begin
          r_rd_issue_count <= r_rd_issue_count + 9'd1;
          if (r_rd_col_group == ((4'd1 << r_buffer_width[r_rd_buffer_id]) - 4'd1)) begin
            r_rd_col_group <= 3'd0;
            r_rd_row       <= r_rd_row + 5'd1;
          end
          else begin
            r_rd_col_group <= r_rd_col_group + 3'd1;
          end
        end
        if (w_fifo_pop) begin
          r_rd_accept_count <= r_rd_accept_count + 9'd1;
          if (r_rd_accept_count == (r_rd_total_beats - 9'd1)) begin
            r_rd_active                       <= 1'b0;
            r_buffer_state[r_rd_buffer_id]    <= BUF_WAIT_RELEASE;
          end
        end
      end

      // Release only after the external 2D pipeline accepts
      // the last row-scaled result for this matching TU ID.
      if (I_TU_DONE_VALID) begin
        for (integer b = 0; b < 2; b++) begin
          if ((r_buffer_state[b] == BUF_WAIT_RELEASE) &&
              (r_buffer_tu_id[b] == I_TU_DONE_ID)) begin
            r_buffer_state[b] <= BUF_FREE;
          end
        end
      end
    end
  end

  // Ordered completed-buffer FIFO; valid buffer count = 0..2.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_ready_head  <= 1'b0;
      r_ready_tail  <= 1'b0;
      r_ready_count <= '0;
    end
    else begin
      if (w_ready_push) begin
        r_ready_queue[r_ready_tail] <= w_write_buffer_id;
        r_ready_tail <= ~r_ready_tail;
      end
      if (w_ready_pop)
        r_ready_head <= ~r_ready_head;
      case ({w_ready_push, w_ready_pop})
        2'b10: r_ready_count <= r_ready_count + 2'd1;
        2'b01: r_ready_count <= r_ready_count - 2'd1;
        default: r_ready_count <= r_ready_count;
      endcase
    end
  end

  // Synchronous BRAM request metadata. Bank outputs from
  // this issue become usable by the FIFO on the next edge.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_pipe_valid       <= 1'b0;
      r_pipe_buffer_id   <= 1'b0;
      r_pipe_row_low     <= '0;
      r_pipe_vector_last <= 1'b0;
      r_pipe_tu_start    <= 1'b0;
      r_pipe_tu_last     <= 1'b0;
    end
    else begin
      r_pipe_valid <= w_read_issue;
      if (w_read_issue) begin
        r_pipe_buffer_id   <= r_rd_buffer_id;
        r_pipe_row_low     <= r_rd_row[1:0];
        r_pipe_vector_last <= (r_rd_col_group ==
          ((4'd1 << r_buffer_width[r_rd_buffer_id]) - 4'd1));
        r_pipe_tu_start <= (r_rd_issue_count == 9'd0);
        r_pipe_tu_last  <= (r_rd_issue_count == (r_rd_total_beats - 9'd1));
      end
    end
  end

  // Two-slot elastic FIFO. BRAM return and downstream
  // consumption may happen on the same posedge.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_fifo_head  <= 1'b0;
      r_fifo_tail  <= 1'b0;
      r_fifo_count <= '0;
    end
    else begin
      if (w_fifo_push) begin
        r_fifo_data[r_fifo_tail]        <= w_pipe_data;
        r_fifo_vector_last[r_fifo_tail] <= r_pipe_vector_last;
        r_fifo_tu_start[r_fifo_tail]    <= r_pipe_tu_start;
        r_fifo_tu_last[r_fifo_tail]     <= r_pipe_tu_last;
        r_fifo_tail <= ~r_fifo_tail;
      end
      if (w_fifo_pop)
        r_fifo_head <= ~r_fifo_head;
      case ({w_fifo_push, w_fifo_pop})
        2'b10: r_fifo_count <= r_fifo_count + 2'd1;
        2'b01: r_fifo_count <= r_fifo_count - 2'd1;
        default: r_fifo_count <= r_fifo_count;
      endcase
    end
  end
endmodule: TQ_INV_TRANSPOSE_MEMORY
