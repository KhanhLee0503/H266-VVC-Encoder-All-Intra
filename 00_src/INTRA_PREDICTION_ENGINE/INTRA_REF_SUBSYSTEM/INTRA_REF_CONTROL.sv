//-----------------------------------------------------------
// Description: This module controls the preparation flow for one intra
// reference request at a time. It captures the TU metadata, starts the
// reference fetch, substitution, and optional filtering stages in order,
// and presents a ready/valid completion interface to the prediction engine.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_CONTROL #(
  parameter integer PARA_COORD_WD = 7
)(
  input                         I_CLK,
  input                         I_RESETN,

  input                         I_REQ_VALID,
  output logic                  O_REQ_READY,
  input [1:0]                   I_COMPONENT_ID,
  input [PARA_COORD_WD-1:0]     I_TU_X,
  input [PARA_COORD_WD-1:0]     I_TU_Y,
  input [2:0]                   I_TU_WIDTH_CODE,
  input [2:0]                   I_TU_HEIGHT_CODE,

  output logic                  O_FETCH_START,
  input                         I_FETCH_DONE,

  output logic                  O_SUB_START,
  input                         I_SUB_DONE,

  output logic                  O_FILTER_START,
  input                         I_FILTER_DONE,

  output logic                  O_REF_VALID,
  input                         I_REF_READY,
  output logic                  O_FILTERED_VALID,

  output logic [1:0]            O_COMPONENT_ID,
  output logic [PARA_COORD_WD-1:0] O_TU_X,
  output logic [PARA_COORD_WD-1:0] O_TU_Y,
  output logic [2:0]            O_TU_WIDTH_CODE,
  output logic [2:0]            O_TU_HEIGHT_CODE
);

localparam [1:0] PARA_COMP_Y = 2'b00;

localparam [2:0] PARA_ST_IDLE       = 3'b000;
localparam [2:0] PARA_ST_FETCH      = 3'b001;
localparam [2:0] PARA_ST_SUBSTITUTE = 3'b010;
localparam [2:0] PARA_ST_FILTER     = 3'b011;
localparam [2:0] PARA_ST_READY      = 3'b100;

logic [2:0]                   r_current_state;
logic [2:0]                   w_next_state;

logic [1:0]                   r_component_id;
logic [PARA_COORD_WD-1:0]     r_tu_x;
logic [PARA_COORD_WD-1:0]     r_tu_y;
logic [2:0]                   r_tu_width_code;
logic [2:0]                   r_tu_height_code;

logic                         r_fetch_start;
logic                         r_sub_start;
logic                         r_filter_start;
logic                         r_filtered_valid;

logic                         w_req_accept;
logic                         w_ref_accept;
logic [3:0]                   w_log2_area;
logic                         w_filter_required;

assign w_req_accept = I_REQ_VALID && O_REQ_READY;
assign w_ref_accept = O_REF_VALID && I_REF_READY;

assign w_log2_area =
  {1'b0, r_tu_width_code} + {1'b0, r_tu_height_code};

assign w_filter_required =
  (r_component_id == PARA_COMP_Y) &&
  (w_log2_area > 4'd5);

assign O_FETCH_START = r_fetch_start;
assign O_SUB_START = r_sub_start;
assign O_FILTER_START = r_filter_start;

assign O_COMPONENT_ID = r_component_id;
assign O_TU_X = r_tu_x;
assign O_TU_Y = r_tu_y;
assign O_TU_WIDTH_CODE = r_tu_width_code;
assign O_TU_HEIGHT_CODE = r_tu_height_code;

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
      if (w_req_accept)
        w_next_state = PARA_ST_FETCH;
    end
    PARA_ST_FETCH: begin
      if (I_FETCH_DONE)
        w_next_state = PARA_ST_SUBSTITUTE;
    end
    PARA_ST_SUBSTITUTE: begin
      if (I_SUB_DONE) begin
        if (w_filter_required)
          w_next_state = PARA_ST_FILTER;
        else
          w_next_state = PARA_ST_READY;
      end
    end
    PARA_ST_FILTER: begin
      if (I_FILTER_DONE)
        w_next_state = PARA_ST_READY;
    end
    PARA_ST_READY: begin
      if (w_ref_accept)
        w_next_state = PARA_ST_IDLE;
    end
    default: begin
      w_next_state = PARA_ST_IDLE;
    end
  endcase
end

always_comb begin
  O_REQ_READY = 1'b0;
  O_REF_VALID = 1'b0;
  O_FILTERED_VALID = 1'b0;

  unique casez (r_current_state)
    PARA_ST_IDLE: begin
      O_REQ_READY = 1'b1;
    end
    PARA_ST_FETCH: begin
      O_REQ_READY = 1'b0;
    end
    PARA_ST_SUBSTITUTE: begin
      O_REQ_READY = 1'b0;
    end
    PARA_ST_FILTER: begin
      O_REQ_READY = 1'b0;
    end
    PARA_ST_READY: begin
      O_REF_VALID = 1'b1;
      O_FILTERED_VALID = r_filtered_valid;
    end
    default: begin
      O_REQ_READY = 1'b0;
      O_REF_VALID = 1'b0;
      O_FILTERED_VALID = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_component_id <= '0;
    r_tu_x <= '0;
    r_tu_y <= '0;
    r_tu_width_code <= '0;
    r_tu_height_code <= '0;
  end
  else if (w_req_accept) begin
    r_component_id <= I_COMPONENT_ID;
    r_tu_x <= I_TU_X;
    r_tu_y <= I_TU_Y;
    r_tu_width_code <= I_TU_WIDTH_CODE;
    r_tu_height_code <= I_TU_HEIGHT_CODE;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_fetch_start <= 1'b0;
    r_sub_start <= 1'b0;
    r_filter_start <= 1'b0;
  end
  else begin
    r_fetch_start <= w_req_accept;
    r_sub_start <=
      (r_current_state == PARA_ST_FETCH) && I_FETCH_DONE;
    r_filter_start <=
      (r_current_state == PARA_ST_SUBSTITUTE) &&
      I_SUB_DONE &&
      w_filter_required;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_filtered_valid <= 1'b0;
  else if (w_req_accept)
    r_filtered_valid <= 1'b0;
  else if ((r_current_state == PARA_ST_FILTER) && I_FILTER_DONE)
    r_filtered_valid <= 1'b1;
end

endmodule: INTRA_REF_CONTROL
