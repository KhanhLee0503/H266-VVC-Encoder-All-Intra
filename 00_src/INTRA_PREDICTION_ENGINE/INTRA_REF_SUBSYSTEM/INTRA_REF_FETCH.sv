//-----------------------------------------------------------
// Description: This module controls the sequential fetch of intra reference
// samples. The top-left reference is fetched first. Top and left reference
// segments are then issued in parallel with one four-sample segment per path
// per cycle when the corresponding response slot is available. The module
// receives availability, source, and address decisions from combinational
// helper modules and generates read requests to the reconstructed reference
// memories. Returned data is forwarded to INTRA_REF_RAW_BUFFER.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_FETCH #(
  parameter integer PARA_ADDR_WD = 10
)
(
  input                                      I_CLK,
  input                                      I_RESETN,

  input                                      I_FETCH_START,
  input [1:0]                                I_COMPONENT_ID,
  input [2:0]                                I_TU_WIDTH_CODE,
  input [2:0]                                I_TU_HEIGHT_CODE,
  output logic                               O_FETCH_DONE,

  output logic                               O_TOP_CHECK_VALID,
  output logic [3:0]                         O_TOP_SEG_INDEX,
  input                                      I_TOP_AVAILABLE,
  input [2:0]                                I_TOP_SOURCE,
  input                                      I_TOP_ADDR_VALID,
  input [PARA_ADDR_WD-1:0]                  I_TOP_ADDR,

  output logic                               O_LEFT_CHECK_VALID,
  output logic [3:0]                         O_LEFT_SEG_INDEX,
  input                                      I_LEFT_AVAILABLE,
  input [2:0]                                I_LEFT_SOURCE,
  input                                      I_LEFT_ADDR_VALID,
  input [PARA_ADDR_WD-1:0]                  I_LEFT_ADDR,

  output logic                               O_TL_CHECK_VALID,
  input                                      I_TL_AVAILABLE,
  input [2:0]                                I_TL_SOURCE,
  input                                      I_TL_ADDR_VALID,
  input [PARA_ADDR_WD-1:0]                  I_TL_ADDR,
  input [1:0]                                I_TL_LANE_SEL,

  output logic                               O_H_EDGE_RD_EN,
  output logic [1:0]                         O_H_EDGE_RD_COMPONENT_ID,
  output logic [PARA_ADDR_WD-1:0]           O_H_EDGE_RD_ADDR,
  input                                      I_H_EDGE_RD_VALID,
  input [63:0]                               I_H_EDGE_RD_DATA,

  output logic                               O_V_EDGE_RD_EN,
  output logic [1:0]                         O_V_EDGE_RD_COMPONENT_ID,
  output logic [PARA_ADDR_WD-1:0]           O_V_EDGE_RD_ADDR,
  input                                      I_V_EDGE_RD_VALID,
  input [63:0]                               I_V_EDGE_RD_DATA,

  output logic                               O_ABOVE_RD_EN,
  output logic [1:0]                         O_ABOVE_RD_COMPONENT_ID,
  output logic [PARA_ADDR_WD-1:0]           O_ABOVE_RD_ADDR,
  input                                      I_ABOVE_RD_VALID,
  input [63:0]                               I_ABOVE_RD_DATA,

  output logic                               O_LEFT_BOUND_RD_EN,
  output logic [1:0]                         O_LEFT_BOUND_RD_COMPONENT_ID,
  output logic [4:0]                         O_LEFT_BOUND_RD_ADDR,
  input                                      I_LEFT_BOUND_RD_VALID,
  input [63:0]                               I_LEFT_BOUND_RD_DATA,

  output logic [1:0]                         O_CORNER_QUERY_COMPONENT_ID,
  input                                      I_CORNER_QUERY_VALID,
  input [15:0]                               I_CORNER_QUERY_SAMPLE,

  output logic                               O_RAW_TOP_WR_EN,
  output logic [3:0]                         O_RAW_TOP_WR_INDEX,
  output logic [63:0]                        O_RAW_TOP_WR_DATA,
  output logic [3:0]                         O_RAW_TOP_WR_AVAIL,

  output logic                               O_RAW_LEFT_WR_EN,
  output logic [3:0]                         O_RAW_LEFT_WR_INDEX,
  output logic [63:0]                        O_RAW_LEFT_WR_DATA,
  output logic [3:0]                         O_RAW_LEFT_WR_AVAIL,

  output logic                               O_RAW_TL_WR_EN,
  output logic [15:0]                        O_RAW_TL_WR_DATA,
  output logic                               O_RAW_TL_WR_AVAIL
);

localparam [2:0] PARA_ST_IDLE       = 3'b000;
localparam [2:0] PARA_ST_TL_REQ     = 3'b001;
localparam [2:0] PARA_ST_TL_WAIT    = 3'b010;
localparam [2:0] PARA_ST_SEG_STREAM = 3'b011;
localparam [2:0] PARA_ST_DRAIN      = 3'b100;
localparam [2:0] PARA_ST_DONE       = 3'b101;

localparam [2:0] PARA_SRC_NONE       = 3'b000;
localparam [2:0] PARA_SRC_H_EDGE     = 3'b001;
localparam [2:0] PARA_SRC_V_EDGE     = 3'b010;
localparam [2:0] PARA_SRC_ABOVE_LINE = 3'b011;
localparam [2:0] PARA_SRC_LEFT_BOUND = 3'b100;
localparam [2:0] PARA_SRC_ABOVE_LEFT = 3'b101;

logic [2:0]                            r_current_state;
logic [2:0]                            w_next_state;

logic [3:0]                            r_top_seg_index;
logic [3:0]                            r_left_seg_index;
logic [3:0]                            w_top_last_index;
logic [3:0]                            w_left_last_index;
logic                                  r_top_issue_done;
logic                                  r_left_issue_done;

logic                                  r_top_pending_valid;
logic                                  r_top_pending_available;
logic [2:0]                            r_top_pending_source;
logic [3:0]                            r_top_pending_index;

logic                                  r_left_pending_valid;
logic                                  r_left_pending_available;
logic [2:0]                            r_left_pending_source;
logic [3:0]                            r_left_pending_index;

logic [2:0]                            r_tl_pending_source;
logic [1:0]                            r_tl_pending_lane;

logic [15:0]                           r_top_left_reg;
logic                                  r_top_left_avail;
logic                                  r_tl_raw_pending;

logic                                  w_top_response_valid;
logic [63:0]                           w_top_response_data;
logic                                  w_left_response_valid;
logic [63:0]                           w_left_response_data;
logic                                  w_tl_response_valid;
logic [63:0]                           w_tl_response_data;
logic [15:0]                           w_tl_response_sample;

logic                                  w_top_pending_complete;
logic                                  w_left_pending_complete;
logic                                  w_top_slot_ready;
logic                                  w_left_slot_ready;

logic                                  w_top_issue_fire;
logic                                  w_left_issue_fire;
logic                                  w_top_final_issue;
logic                                  w_left_final_issue;
logic                                  w_top_all_issued;
logic                                  w_left_all_issued;
logic                                  w_top_drained;
logic                                  w_left_drained;

logic                                  w_top_request_available;
logic                                  w_left_request_available;
logic                                  w_tl_ram_request_valid;

assign O_TOP_SEG_INDEX = r_top_seg_index;
assign O_LEFT_SEG_INDEX = r_left_seg_index;

assign O_H_EDGE_RD_COMPONENT_ID = I_COMPONENT_ID;
assign O_V_EDGE_RD_COMPONENT_ID = I_COMPONENT_ID;
assign O_ABOVE_RD_COMPONENT_ID = I_COMPONENT_ID;
assign O_LEFT_BOUND_RD_COMPONENT_ID = I_COMPONENT_ID;
assign O_CORNER_QUERY_COMPONENT_ID = I_COMPONENT_ID;

always_comb begin
  w_top_last_index = 4'd0;

  unique casez (I_TU_WIDTH_CODE)
    3'd2: begin
      w_top_last_index = 4'd1;
    end
    3'd3: begin
      w_top_last_index = 4'd3;
    end
    3'd4: begin
      w_top_last_index = 4'd7;
    end
    3'd5: begin
      w_top_last_index = 4'd15;
    end
    default: begin
      w_top_last_index = 4'd0;
    end
  endcase
end

always_comb begin
  w_left_last_index = 4'd0;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_left_last_index = 4'd1;
    end
    3'd3: begin
      w_left_last_index = 4'd3;
    end
    3'd4: begin
      w_left_last_index = 4'd7;
    end
    3'd5: begin
      w_left_last_index = 4'd15;
    end
    default: begin
      w_left_last_index = 4'd0;
    end
  endcase
end

always_comb begin
  w_top_response_valid = 1'b0;
  w_top_response_data = '0;

  unique casez (r_top_pending_source)
    PARA_SRC_H_EDGE: begin
      w_top_response_valid = I_H_EDGE_RD_VALID;
      w_top_response_data = I_H_EDGE_RD_DATA;
    end
    PARA_SRC_ABOVE_LINE: begin
      w_top_response_valid = I_ABOVE_RD_VALID;
      w_top_response_data = I_ABOVE_RD_DATA;
    end
    default: begin
      w_top_response_valid = 1'b0;
      w_top_response_data = '0;
    end
  endcase
end

always_comb begin
  w_left_response_valid = 1'b0;
  w_left_response_data = '0;

  unique casez (r_left_pending_source)
    PARA_SRC_V_EDGE: begin
      w_left_response_valid = I_V_EDGE_RD_VALID;
      w_left_response_data = I_V_EDGE_RD_DATA;
    end
    PARA_SRC_LEFT_BOUND: begin
      w_left_response_valid = I_LEFT_BOUND_RD_VALID;
      w_left_response_data = I_LEFT_BOUND_RD_DATA;
    end
    default: begin
      w_left_response_valid = 1'b0;
      w_left_response_data = '0;
    end
  endcase
end

always_comb begin
  w_tl_response_valid = 1'b0;
  w_tl_response_data = '0;

  unique casez (r_tl_pending_source)
    PARA_SRC_H_EDGE: begin
      w_tl_response_valid = I_H_EDGE_RD_VALID;
      w_tl_response_data = I_H_EDGE_RD_DATA;
    end
    PARA_SRC_ABOVE_LINE: begin
      w_tl_response_valid = I_ABOVE_RD_VALID;
      w_tl_response_data = I_ABOVE_RD_DATA;
    end
    PARA_SRC_LEFT_BOUND: begin
      w_tl_response_valid = I_LEFT_BOUND_RD_VALID;
      w_tl_response_data = I_LEFT_BOUND_RD_DATA;
    end
    default: begin
      w_tl_response_valid = 1'b0;
      w_tl_response_data = '0;
    end
  endcase
end

always_comb begin
  w_tl_response_sample = 16'd0;

  unique casez (r_tl_pending_lane)
    2'd0: begin
      w_tl_response_sample = w_tl_response_data[15:0];
    end
    2'd1: begin
      w_tl_response_sample = w_tl_response_data[31:16];
    end
    2'd2: begin
      w_tl_response_sample = w_tl_response_data[47:32];
    end
    2'd3: begin
      w_tl_response_sample = w_tl_response_data[63:48];
    end
    default: begin
      w_tl_response_sample = 16'd0;
    end
  endcase
end

assign w_top_pending_complete =
  r_top_pending_valid &&
  (!r_top_pending_available || w_top_response_valid);

assign w_left_pending_complete =
  r_left_pending_valid &&
  (!r_left_pending_available || w_left_response_valid);

assign w_top_slot_ready =
  !r_top_pending_valid ||
  w_top_pending_complete;

assign w_left_slot_ready =
  !r_left_pending_valid ||
  w_left_pending_complete;

assign w_top_issue_fire =
  (r_current_state == PARA_ST_SEG_STREAM) &&
  !r_top_issue_done &&
  w_top_slot_ready;

assign w_left_issue_fire =
  (r_current_state == PARA_ST_SEG_STREAM) &&
  !r_left_issue_done &&
  w_left_slot_ready;

assign w_top_final_issue =
  w_top_issue_fire &&
  (r_top_seg_index == w_top_last_index);

assign w_left_final_issue =
  w_left_issue_fire &&
  (r_left_seg_index == w_left_last_index);

assign w_top_all_issued =
  r_top_issue_done ||
  w_top_final_issue;

assign w_left_all_issued =
  r_left_issue_done ||
  w_left_final_issue;

assign w_top_drained =
  !r_top_pending_valid ||
  w_top_pending_complete;

assign w_left_drained =
  !r_left_pending_valid ||
  w_left_pending_complete;

assign w_top_request_available =
  I_TOP_AVAILABLE &&
  I_TOP_ADDR_VALID &&
  ((I_TOP_SOURCE == PARA_SRC_H_EDGE) ||
   (I_TOP_SOURCE == PARA_SRC_ABOVE_LINE));

assign w_left_request_available =
  I_LEFT_AVAILABLE &&
  I_LEFT_ADDR_VALID &&
  ((I_LEFT_SOURCE == PARA_SRC_V_EDGE) ||
   (I_LEFT_SOURCE == PARA_SRC_LEFT_BOUND));

assign w_tl_ram_request_valid =
  I_TL_AVAILABLE &&
  I_TL_ADDR_VALID &&
  ((I_TL_SOURCE == PARA_SRC_H_EDGE) ||
   (I_TL_SOURCE == PARA_SRC_ABOVE_LINE) ||
   (I_TL_SOURCE == PARA_SRC_LEFT_BOUND));

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= PARA_ST_IDLE;
  else
    r_current_state <= w_next_state;
end

always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    PARA_ST_IDLE: begin
      if (I_FETCH_START)
        w_next_state = PARA_ST_TL_REQ;
    end

    PARA_ST_TL_REQ: begin
      if (!I_TL_AVAILABLE)
        w_next_state = PARA_ST_SEG_STREAM;
      else if (I_TL_SOURCE == PARA_SRC_ABOVE_LEFT)
        w_next_state = PARA_ST_SEG_STREAM;
      else if (w_tl_ram_request_valid)
        w_next_state = PARA_ST_TL_WAIT;
      else
        w_next_state = PARA_ST_SEG_STREAM;
    end

    PARA_ST_TL_WAIT: begin
      if (w_tl_response_valid)
        w_next_state = PARA_ST_SEG_STREAM;
    end

    PARA_ST_SEG_STREAM: begin
      if (w_top_all_issued && w_left_all_issued)
        w_next_state = PARA_ST_DRAIN;
    end

    PARA_ST_DRAIN: begin
      if (w_top_drained && w_left_drained)
        w_next_state = PARA_ST_DONE;
    end

    PARA_ST_DONE: begin
      w_next_state = PARA_ST_IDLE;
    end

    default: begin
      w_next_state = PARA_ST_IDLE;
    end
  endcase
end

always_comb begin
  O_FETCH_DONE = 1'b0;

  O_TOP_CHECK_VALID = 1'b0;
  O_LEFT_CHECK_VALID = 1'b0;
  O_TL_CHECK_VALID = 1'b0;

  O_H_EDGE_RD_EN = 1'b0;
  O_H_EDGE_RD_ADDR = '0;

  O_V_EDGE_RD_EN = 1'b0;
  O_V_EDGE_RD_ADDR = '0;

  O_ABOVE_RD_EN = 1'b0;
  O_ABOVE_RD_ADDR = '0;

  O_LEFT_BOUND_RD_EN = 1'b0;
  O_LEFT_BOUND_RD_ADDR = '0;

  O_RAW_TOP_WR_EN = 1'b0;
  O_RAW_TOP_WR_INDEX = '0;
  O_RAW_TOP_WR_DATA = '0;
  O_RAW_TOP_WR_AVAIL = 4'b0000;

  O_RAW_LEFT_WR_EN = 1'b0;
  O_RAW_LEFT_WR_INDEX = '0;
  O_RAW_LEFT_WR_DATA = '0;
  O_RAW_LEFT_WR_AVAIL = 4'b0000;

  O_RAW_TL_WR_EN = 1'b0;
  O_RAW_TL_WR_DATA = r_top_left_reg;
  O_RAW_TL_WR_AVAIL = r_top_left_avail;

  unique casez (r_current_state)
    PARA_ST_IDLE: begin
      O_FETCH_DONE = 1'b0;
    end

    PARA_ST_TL_REQ: begin
      O_TL_CHECK_VALID = 1'b1;

      if (w_tl_ram_request_valid) begin
        unique casez (I_TL_SOURCE)
          PARA_SRC_H_EDGE: begin
            O_H_EDGE_RD_EN = 1'b1;
            O_H_EDGE_RD_ADDR = I_TL_ADDR;
          end
          PARA_SRC_ABOVE_LINE: begin
            O_ABOVE_RD_EN = 1'b1;
            O_ABOVE_RD_ADDR = I_TL_ADDR;
          end
          PARA_SRC_LEFT_BOUND: begin
            O_LEFT_BOUND_RD_EN = 1'b1;
            O_LEFT_BOUND_RD_ADDR = I_TL_ADDR[4:0];
          end
          default: begin
            O_H_EDGE_RD_EN = 1'b0;
            O_ABOVE_RD_EN = 1'b0;
            O_LEFT_BOUND_RD_EN = 1'b0;
          end
        endcase
      end
    end

    PARA_ST_TL_WAIT: begin
      O_TL_CHECK_VALID = 1'b0;
    end

    PARA_ST_SEG_STREAM: begin
      O_TOP_CHECK_VALID =
        !r_top_issue_done &&
        w_top_slot_ready;

      O_LEFT_CHECK_VALID =
        !r_left_issue_done &&
        w_left_slot_ready;

      if (w_top_issue_fire && w_top_request_available) begin
        unique casez (I_TOP_SOURCE)
          PARA_SRC_H_EDGE: begin
            O_H_EDGE_RD_EN = 1'b1;
            O_H_EDGE_RD_ADDR = I_TOP_ADDR;
          end
          PARA_SRC_ABOVE_LINE: begin
            O_ABOVE_RD_EN = 1'b1;
            O_ABOVE_RD_ADDR = I_TOP_ADDR;
          end
          default: begin
            O_H_EDGE_RD_EN = 1'b0;
            O_ABOVE_RD_EN = 1'b0;
          end
        endcase
      end

      if (w_left_issue_fire && w_left_request_available) begin
        unique casez (I_LEFT_SOURCE)
          PARA_SRC_V_EDGE: begin
            O_V_EDGE_RD_EN = 1'b1;
            O_V_EDGE_RD_ADDR = I_LEFT_ADDR;
          end
          PARA_SRC_LEFT_BOUND: begin
            O_LEFT_BOUND_RD_EN = 1'b1;
            O_LEFT_BOUND_RD_ADDR = I_LEFT_ADDR[4:0];
          end
          default: begin
            O_V_EDGE_RD_EN = 1'b0;
            O_LEFT_BOUND_RD_EN = 1'b0;
          end
        endcase
      end

      if (r_tl_raw_pending) begin
        O_RAW_TL_WR_EN = 1'b1;
        O_RAW_TL_WR_DATA = r_top_left_reg;
        O_RAW_TL_WR_AVAIL = r_top_left_avail;
      end

      if (w_top_pending_complete) begin
        O_RAW_TOP_WR_EN = 1'b1;
        O_RAW_TOP_WR_INDEX = r_top_pending_index;

        if (r_top_pending_available) begin
          O_RAW_TOP_WR_DATA = w_top_response_data;
          O_RAW_TOP_WR_AVAIL = 4'b1111;
        end
        else begin
          O_RAW_TOP_WR_DATA = '0;
          O_RAW_TOP_WR_AVAIL = 4'b0000;
        end
      end

      if (w_left_pending_complete) begin
        O_RAW_LEFT_WR_EN = 1'b1;
        O_RAW_LEFT_WR_INDEX = r_left_pending_index;

        if (r_left_pending_available) begin
          O_RAW_LEFT_WR_DATA = w_left_response_data;
          O_RAW_LEFT_WR_AVAIL = 4'b1111;
        end
        else begin
          O_RAW_LEFT_WR_DATA = '0;
          O_RAW_LEFT_WR_AVAIL = 4'b0000;
        end
      end
    end

    PARA_ST_DRAIN: begin
      if (w_top_pending_complete) begin
        O_RAW_TOP_WR_EN = 1'b1;
        O_RAW_TOP_WR_INDEX = r_top_pending_index;

        if (r_top_pending_available) begin
          O_RAW_TOP_WR_DATA = w_top_response_data;
          O_RAW_TOP_WR_AVAIL = 4'b1111;
        end
        else begin
          O_RAW_TOP_WR_DATA = '0;
          O_RAW_TOP_WR_AVAIL = 4'b0000;
        end
      end

      if (w_left_pending_complete) begin
        O_RAW_LEFT_WR_EN = 1'b1;
        O_RAW_LEFT_WR_INDEX = r_left_pending_index;

        if (r_left_pending_available) begin
          O_RAW_LEFT_WR_DATA = w_left_response_data;
          O_RAW_LEFT_WR_AVAIL = 4'b1111;
        end
        else begin
          O_RAW_LEFT_WR_DATA = '0;
          O_RAW_LEFT_WR_AVAIL = 4'b0000;
        end
      end
    end

    PARA_ST_DONE: begin
      O_FETCH_DONE = 1'b1;
    end

    default: begin
      O_FETCH_DONE = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_top_seg_index <= '0;
    r_left_seg_index <= '0;
    r_top_issue_done <= 1'b0;
    r_left_issue_done <= 1'b0;
  end
  else if ((r_current_state == PARA_ST_IDLE) && I_FETCH_START) begin
    r_top_seg_index <= '0;
    r_left_seg_index <= '0;
    r_top_issue_done <= 1'b0;
    r_left_issue_done <= 1'b0;
  end
  else begin
    if (w_top_issue_fire) begin
      if (r_top_seg_index == w_top_last_index)
        r_top_issue_done <= 1'b1;
      else
        r_top_seg_index <= r_top_seg_index + 4'd1;
    end

    if (w_left_issue_fire) begin
      if (r_left_seg_index == w_left_last_index)
        r_left_issue_done <= 1'b1;
      else
        r_left_seg_index <= r_left_seg_index + 4'd1;
    end
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_top_pending_valid <= 1'b0;
    r_top_pending_available <= 1'b0;
    r_top_pending_source <= PARA_SRC_NONE;
    r_top_pending_index <= '0;
  end
  else if ((r_current_state == PARA_ST_IDLE) && I_FETCH_START) begin
    r_top_pending_valid <= 1'b0;
    r_top_pending_available <= 1'b0;
    r_top_pending_source <= PARA_SRC_NONE;
    r_top_pending_index <= '0;
  end
  else if (w_top_issue_fire) begin
    r_top_pending_valid <= 1'b1;
    r_top_pending_available <= w_top_request_available;
    r_top_pending_source <= I_TOP_SOURCE;
    r_top_pending_index <= r_top_seg_index;
  end
  else if (w_top_pending_complete) begin
    r_top_pending_valid <= 1'b0;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_left_pending_valid <= 1'b0;
    r_left_pending_available <= 1'b0;
    r_left_pending_source <= PARA_SRC_NONE;
    r_left_pending_index <= '0;
  end
  else if ((r_current_state == PARA_ST_IDLE) && I_FETCH_START) begin
    r_left_pending_valid <= 1'b0;
    r_left_pending_available <= 1'b0;
    r_left_pending_source <= PARA_SRC_NONE;
    r_left_pending_index <= '0;
  end
  else if (w_left_issue_fire) begin
    r_left_pending_valid <= 1'b1;
    r_left_pending_available <= w_left_request_available;
    r_left_pending_source <= I_LEFT_SOURCE;
    r_left_pending_index <= r_left_seg_index;
  end
  else if (w_left_pending_complete) begin
    r_left_pending_valid <= 1'b0;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_tl_pending_source <= PARA_SRC_NONE;
    r_tl_pending_lane <= 2'b00;
  end
  else if (r_current_state == PARA_ST_TL_REQ) begin
    if (w_tl_ram_request_valid) begin
      r_tl_pending_source <= I_TL_SOURCE;
      r_tl_pending_lane <= I_TL_LANE_SEL;
    end
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_top_left_reg <= '0;
    r_top_left_avail <= 1'b0;
    r_tl_raw_pending <= 1'b0;
  end
  else if ((r_current_state == PARA_ST_IDLE) && I_FETCH_START) begin
    r_top_left_reg <= '0;
    r_top_left_avail <= 1'b0;
    r_tl_raw_pending <= 1'b0;
  end
  else if (r_current_state == PARA_ST_TL_REQ) begin
    if (!I_TL_AVAILABLE) begin
      r_top_left_reg <= '0;
      r_top_left_avail <= 1'b0;
      r_tl_raw_pending <= 1'b1;
    end
    else if (I_TL_SOURCE == PARA_SRC_ABOVE_LEFT) begin
      if (I_CORNER_QUERY_VALID) begin
        r_top_left_reg <= I_CORNER_QUERY_SAMPLE;
        r_top_left_avail <= 1'b1;
      end
      else begin
        r_top_left_reg <= '0;
        r_top_left_avail <= 1'b0;
      end

      r_tl_raw_pending <= 1'b1;
    end
    else if (!w_tl_ram_request_valid) begin
      r_top_left_reg <= '0;
      r_top_left_avail <= 1'b0;
      r_tl_raw_pending <= 1'b1;
    end
  end
  else if ((r_current_state == PARA_ST_TL_WAIT) &&
           w_tl_response_valid) begin
    r_top_left_reg <= w_tl_response_sample;
    r_top_left_avail <= 1'b1;
    r_tl_raw_pending <= 1'b1;
  end
  else if ((r_current_state == PARA_ST_SEG_STREAM) &&
           r_tl_raw_pending) begin
    r_tl_raw_pending <= 1'b0;
  end
end

endmodule: INTRA_REF_FETCH
