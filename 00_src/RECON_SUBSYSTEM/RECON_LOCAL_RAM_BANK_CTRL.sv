//-----------------------------------------------------------
// Description: This module owns two reconstructed CTU local RAM banks.
// It allocates a free bank to the Recon writer, queues completed CTU
// descriptors in finish order, and grants one completed bank to an
// external in-loop prefetch controller. The external controller generates
// ALL component/raster addresses and commits data into its own buffer.
// This module does not generate prefetch addresses or sample ordering.
// A bank is released only by a matched release handshake after its final
// synchronous RAM read response has drained.
//-----------------------------------------------------------
`timescale 1ns/1ps

module RECON_LOCAL_RAM_BANK_CTRL #(
  parameter PARA_CONTAINER_WD = 16,
  parameter PARA_CTU_ID_WD    = 9,
  parameter PARA_FRAME_ID_WD  = 8
)(
  input                                         I_CLK,
  input                                         I_RESETN,
  input                                         I_CLEAR_ERROR,

  input                                         I_CTU_ALLOC_VALID,
  output logic                                  O_CTU_ALLOC_READY,
  input [PARA_CTU_ID_WD-1:0]                    I_CTU_ID,
  input [PARA_FRAME_ID_WD-1:0]                  I_FRAME_ID,
  input [12:0]                                  I_CTU_X_ORIGIN,
  input [12:0]                                  I_CTU_Y_ORIGIN,
  input [7:0]                                   I_CTU_VALID_WIDTH,
  input [7:0]                                   I_CTU_VALID_HEIGHT,
  input                                         I_CTU_RECON_FINISH,
  output logic                                  O_WR_ACTIVE,
  output logic                                  O_ACTIVE_WRITE_BANK_ID,

  input                                         I_WR_EN,
  input [1:0]                                   I_WR_COMPONENT_ID,
  input [11:0]                                  I_WR_ADDR,
  input [(4*PARA_CONTAINER_WD)-1:0]             I_WR_DATA,
  input [3:0]                                   I_WR_SAMPLE_EN,

  output logic                                  O_PREFETCH_DESC_VALID,
  input                                         I_PREFETCH_DESC_READY,
  output logic                                  O_PREFETCH_BANK_ID,
  output logic [PARA_CTU_ID_WD-1:0]             O_PREFETCH_CTU_ID,
  output logic [PARA_FRAME_ID_WD-1:0]           O_PREFETCH_FRAME_ID,
  output logic [12:0]                           O_PREFETCH_CTU_X_ORIGIN,
  output logic [12:0]                           O_PREFETCH_CTU_Y_ORIGIN,
  output logic [7:0]                            O_PREFETCH_VALID_WIDTH,
  output logic [7:0]                            O_PREFETCH_VALID_HEIGHT,

  input                                         I_PREFETCH_RD_EN,
  input [1:0]                                   I_PREFETCH_RD_COMPONENT_ID,
  input [11:0]                                  I_PREFETCH_RD_ADDR,
  output logic                                  O_PREFETCH_RD_VALID,
  output logic [(4*PARA_CONTAINER_WD)-1:0]     O_PREFETCH_RD_DATA,
  output logic                                  O_PREFETCH_RD_BANK_ID,

  input                                         I_PREFETCH_RELEASE_VALID,
  output logic                                  O_PREFETCH_RELEASE_READY,
  input                                         I_PREFETCH_RELEASE_BANK_ID,
  input [PARA_CTU_ID_WD-1:0]                    I_PREFETCH_RELEASE_CTU_ID,
  input [PARA_FRAME_ID_WD-1:0]                  I_PREFETCH_RELEASE_FRAME_ID,

  output logic [1:0]                            O_BANK0_STATE,
  output logic [1:0]                            O_BANK1_STATE,
  output logic                                  O_PREFETCH_ACTIVE,
  output logic                                  O_ERROR
);

  typedef enum logic [1:0] {
    ST_FREE        = 2'd0,
    ST_WRITING     = 2'd1,
    ST_READY       = 2'd2,
    ST_PREFETCHING = 2'd3
  } state_t;

  state_t r_bank0_state;
  state_t r_bank1_state;
  state_t w_bank0_next_state;
  state_t w_bank1_next_state;

  logic r_wr_active;
  logic r_wr_bank;
  logic r_pf_active;
  logic r_pf_bank;
  logic r_fault;
  logic r_read_pending;
  logic r_response_bank;
  logic r_queue_head;
  logic r_queue_tail;
  logic [1:0] r_queue_count;
  logic r_ready_queue [0:1];

  logic [PARA_CTU_ID_WD-1:0] r_ctu_id [0:1];
  logic [PARA_FRAME_ID_WD-1:0] r_frame_id [0:1];
  logic [12:0] r_x_origin [0:1];
  logic [12:0] r_y_origin [0:1];
  logic [7:0] r_valid_width [0:1];
  logic [7:0] r_valid_height [0:1];

  logic w_free_valid;
  logic w_free_bank;
  logic w_head_bank;
  logic w_alloc_fire;
  logic w_finish_fire;
  logic w_desc_fire;
  logic w_read_fire;
  logic w_release_fire;
  logic w_release_match;
  logic w_component_legal;
  logic w_invalid_release;
  logic w_invalid_read;
  logic w_invalid_write;
  logic w_invalid_finish;
  logic w_rd_en0;
  logic w_rd_en1;
  logic w_rd_valid0;
  logic w_rd_valid1;
  logic [(4*PARA_CONTAINER_WD)-1:0] w_rd_data0;
  logic [(4*PARA_CONTAINER_WD)-1:0] w_rd_data1;

  assign w_free_valid = (r_bank0_state == ST_FREE) ||
                        (r_bank1_state == ST_FREE);
  assign w_free_bank = (r_bank0_state == ST_FREE) ? 1'b0 : 1'b1;
  assign w_head_bank = r_ready_queue[r_queue_head];
  assign w_alloc_fire = I_CTU_ALLOC_VALID && O_CTU_ALLOC_READY;
  assign w_finish_fire = I_CTU_RECON_FINISH && r_wr_active &&
                         !I_WR_EN && !r_fault && !I_CLEAR_ERROR;
  assign w_desc_fire = O_PREFETCH_DESC_VALID && I_PREFETCH_DESC_READY;
  assign w_release_fire = I_PREFETCH_RELEASE_VALID && O_PREFETCH_RELEASE_READY;
  assign w_read_fire = I_PREFETCH_RD_EN && r_pf_active &&
                       w_component_legal && !r_fault && !I_CLEAR_ERROR;
  assign w_component_legal = (I_PREFETCH_RD_COMPONENT_ID != 2'b11) &&
                             ((I_PREFETCH_RD_COMPONENT_ID == 2'b00) ||
                              (I_PREFETCH_RD_ADDR[11:10] == 2'b00));
  assign w_release_match = (I_PREFETCH_RELEASE_BANK_ID == r_pf_bank) &&
                           (I_PREFETCH_RELEASE_CTU_ID == r_ctu_id[r_pf_bank]) &&
                           (I_PREFETCH_RELEASE_FRAME_ID == r_frame_id[r_pf_bank]);
  assign w_invalid_release = I_PREFETCH_RELEASE_VALID &&
                             (!r_pf_active || !w_release_match);
  assign w_invalid_read = I_PREFETCH_RD_EN &&
                          (!r_pf_active || !w_component_legal);
  assign w_invalid_write = I_WR_EN && !r_wr_active;
  assign w_invalid_finish = I_CTU_RECON_FINISH && !w_finish_fire;

  // Process 1: Store bank ownership states only.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_bank0_state <= ST_FREE;
      r_bank1_state <= ST_FREE;
    end else if (I_CLEAR_ERROR) begin
      r_bank0_state <= ST_FREE;
      r_bank1_state <= ST_FREE;
    end else begin
      r_bank0_state <= w_bank0_next_state;
      r_bank1_state <= w_bank1_next_state;
    end
  end

  // Process 2: Calculate the next state of each independent bank.
  always_comb begin
    w_bank0_next_state = r_bank0_state;
    w_bank1_next_state = r_bank1_state;

    unique casez (r_bank0_state)
      ST_FREE: if (w_alloc_fire && !w_free_bank)
        w_bank0_next_state = ST_WRITING;
      ST_WRITING: if (w_finish_fire && !r_wr_bank)
        w_bank0_next_state = ST_READY;
      ST_READY: if (w_desc_fire && !w_head_bank)
        w_bank0_next_state = ST_PREFETCHING;
      ST_PREFETCHING: if (w_release_fire && !r_pf_bank)
        w_bank0_next_state = ST_FREE;
      default: w_bank0_next_state = ST_FREE;
    endcase

    unique casez (r_bank1_state)
      ST_FREE: if (w_alloc_fire && w_free_bank)
        w_bank1_next_state = ST_WRITING;
      ST_WRITING: if (w_finish_fire && r_wr_bank)
        w_bank1_next_state = ST_READY;
      ST_READY: if (w_desc_fire && w_head_bank)
        w_bank1_next_state = ST_PREFETCHING;
      ST_PREFETCHING: if (w_release_fire && r_pf_bank)
        w_bank1_next_state = ST_FREE;
      default: w_bank1_next_state = ST_FREE;
    endcase
  end

  // Process 3: Decode bank-control outputs and resource availability.
  always_comb begin
    O_CTU_ALLOC_READY = 1'b0;
    O_PREFETCH_DESC_VALID = 1'b0;
    O_PREFETCH_RELEASE_READY = 1'b0;

    if (!r_fault) begin
      O_CTU_ALLOC_READY = w_free_valid && !r_wr_active;
      O_PREFETCH_DESC_VALID = (r_queue_count != 2'd0) && !r_pf_active;
      O_PREFETCH_RELEASE_READY = r_pf_active && w_release_match &&
                                 !I_PREFETCH_RD_EN && !r_read_pending;
    end
  end

  assign O_WR_ACTIVE = r_wr_active;
  assign O_ACTIVE_WRITE_BANK_ID = r_wr_bank;
  assign O_PREFETCH_ACTIVE = r_pf_active;
  assign O_ERROR = r_fault;
  assign O_BANK0_STATE = r_bank0_state;
  assign O_BANK1_STATE = r_bank1_state;

  // A stalled descriptor remains stable because its queued bank is READY.
  assign O_PREFETCH_BANK_ID = w_head_bank;
  assign O_PREFETCH_CTU_ID = r_ctu_id[w_head_bank];
  assign O_PREFETCH_FRAME_ID = r_frame_id[w_head_bank];
  assign O_PREFETCH_CTU_X_ORIGIN = r_x_origin[w_head_bank];
  assign O_PREFETCH_CTU_Y_ORIGIN = r_y_origin[w_head_bank];
  assign O_PREFETCH_VALID_WIDTH = r_valid_width[w_head_bank];
  assign O_PREFETCH_VALID_HEIGHT = r_valid_height[w_head_bank];

  // State-independent registers carry the active owners and FIFO pointers.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_wr_active <= 1'b0;
      r_wr_bank <= 1'b0;
      r_pf_active <= 1'b0;
      r_pf_bank <= 1'b0;
      r_queue_head <= 1'b0;
      r_queue_tail <= 1'b0;
      r_queue_count <= 2'd0;
      r_fault <= 1'b0;
    end else if (I_CLEAR_ERROR) begin
      r_wr_active <= 1'b0;
      r_wr_bank <= 1'b0;
      r_pf_active <= 1'b0;
      r_pf_bank <= 1'b0;
      r_queue_head <= 1'b0;
      r_queue_tail <= 1'b0;
      r_queue_count <= 2'd0;
      r_fault <= 1'b0;
    end else begin
      if (w_alloc_fire) begin
        r_wr_active <= 1'b1;
        r_wr_bank <= w_free_bank;
      end else if (w_finish_fire) begin
        r_wr_active <= 1'b0;
      end
      if (w_desc_fire) begin
        r_pf_active <= 1'b1;
        r_pf_bank <= w_head_bank;
      end else if (w_release_fire) begin
        r_pf_active <= 1'b0;
      end
      if (w_finish_fire) begin
        r_queue_tail <= ~r_queue_tail;
      end
      if (w_desc_fire) begin
        r_queue_head <= ~r_queue_head;
      end
      unique casez ({w_finish_fire, w_desc_fire})
        2'b10: r_queue_count <= r_queue_count + 2'd1;
        2'b01: r_queue_count <= r_queue_count - 2'd1;
        default: begin end
      endcase
      if (w_invalid_release || w_invalid_read || w_invalid_write ||
          w_invalid_finish)
        r_fault <= 1'b1;
    end
  end

  // Metadata belongs to each physical bank, not to the current Recon CTU.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_ctu_id[0] <= '0;
      r_ctu_id[1] <= '0;
      r_frame_id[0] <= '0;
      r_frame_id[1] <= '0;
      r_x_origin[0] <= '0;
      r_x_origin[1] <= '0;
      r_y_origin[0] <= '0;
      r_y_origin[1] <= '0;
      r_valid_width[0] <= '0;
      r_valid_width[1] <= '0;
      r_valid_height[0] <= '0;
      r_valid_height[1] <= '0;
    end else if (w_alloc_fire) begin
      r_ctu_id[w_free_bank] <= I_CTU_ID;
      r_frame_id[w_free_bank] <= I_FRAME_ID;
      r_x_origin[w_free_bank] <= I_CTU_X_ORIGIN;
      r_y_origin[w_free_bank] <= I_CTU_Y_ORIGIN;
      r_valid_width[w_free_bank] <= I_CTU_VALID_WIDTH;
      r_valid_height[w_free_bank] <= I_CTU_VALID_HEIGHT;
    end
  end

  // Each completed CTU is inserted into a two-entry FIFO in finish order.
  always_ff @(posedge I_CLK) begin
    if (w_finish_fire && !I_CLEAR_ERROR)
      r_ready_queue[r_queue_tail] <= r_wr_bank;
  end

  // Both physical RAMs retain the existing 64-bit component/address mapping.
  CTU_RECON_LOCAL_RAM #(.PARA_CONTAINER_WD(PARA_CONTAINER_WD)) u_bank0 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_WR_EN(I_WR_EN && r_wr_active && !r_wr_bank && !r_fault && !I_CLEAR_ERROR),
    .I_WR_COMPONENT_ID(I_WR_COMPONENT_ID),
    .I_WR_ADDR(I_WR_ADDR),
    .I_WR_DATA(I_WR_DATA),
    .I_WR_SAMPLE_EN(I_WR_SAMPLE_EN),
    .I_RD_EN(w_rd_en0),
    .I_RD_COMPONENT_ID(I_PREFETCH_RD_COMPONENT_ID),
    .I_RD_ADDR(I_PREFETCH_RD_ADDR),
    .O_RD_VALID(w_rd_valid0),
    .O_RD_DATA(w_rd_data0)
  );

  CTU_RECON_LOCAL_RAM #(.PARA_CONTAINER_WD(PARA_CONTAINER_WD)) u_bank1 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_WR_EN(I_WR_EN && r_wr_active && r_wr_bank && !r_fault && !I_CLEAR_ERROR),
    .I_WR_COMPONENT_ID(I_WR_COMPONENT_ID),
    .I_WR_ADDR(I_WR_ADDR),
    .I_WR_DATA(I_WR_DATA),
    .I_WR_SAMPLE_EN(I_WR_SAMPLE_EN),
    .I_RD_EN(w_rd_en1),
    .I_RD_COMPONENT_ID(I_PREFETCH_RD_COMPONENT_ID),
    .I_RD_ADDR(I_PREFETCH_RD_ADDR),
    .O_RD_VALID(w_rd_valid1),
    .O_RD_DATA(w_rd_data1)
  );

  assign w_rd_en0 = w_read_fire && !r_pf_bank;
  assign w_rd_en1 = w_read_fire && r_pf_bank;

  // Track the outstanding synchronous response; no raster counter exists.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_read_pending <= 1'b0;
      r_response_bank <= 1'b0;
    end else if (I_CLEAR_ERROR) begin
      r_read_pending <= 1'b0;
      r_response_bank <= 1'b0;
    end else begin
      r_read_pending <= w_read_fire;
      if (w_read_fire)
        r_response_bank <= r_pf_bank;
    end
  end

  assign O_PREFETCH_RD_VALID = r_read_pending &&
                              (r_response_bank ? w_rd_valid1 : w_rd_valid0);
  assign O_PREFETCH_RD_DATA = r_response_bank ? w_rd_data1 : w_rd_data0;
  assign O_PREFETCH_RD_BANK_ID = r_response_bank;
endmodule: RECON_LOCAL_RAM_BANK_CTRL
