//-----------------------------------------------------------
// Description: This module reads four original samples from the current CTU buffer and aligns them with one four-pixel intra prediction beat. The current component geometry is provided in component-local coordinates by INTRA_MODE_CONTROL. The CTU buffer stores eight 16-bit sample containers in each 128-bit word, while the active pixel width is 10 bits. Luma uses sixteen words per CTU row and chroma uses eight words per CTU row. A two-entry response FIFO absorbs output backpressure while allowing one CTU-buffer read request per cycle when capacity is available.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ORIGINAL_SAMPLE_READER #(
  parameter PARA_PIXEL_WD         = 10,
  parameter PARA_SAMPLE_STORE_WD  = 16,
  parameter PARA_PIXELS_PER_BEAT  = 4,
  parameter PARA_BUF_DATA_WD      = 128,
  parameter PARA_BUF_ADDR_WD      = 16,
  parameter PARA_BUF_ID_WD        = 2,
  parameter PARA_COMPONENT_WD     = 2,
  parameter PARA_TU_COORD_WD      = 7,
  parameter PARA_BEAT_COORD_WD    = 5
)
(
  input                                                   I_CLK,
  input                                                   I_RESETN,

  input                                                   I_TU_START,
  output logic                                            O_TU_READY,
  input [PARA_BUF_ID_WD-1:0]                              I_CTU_BUFFER_ID,
  input [PARA_COMPONENT_WD-1:0]                           I_COMPONENT_ID,
  input [PARA_TU_COORD_WD-1:0]                            I_TU_X,
  input [PARA_TU_COORD_WD-1:0]                            I_TU_Y,

  input                                                   I_VALID,
  output logic                                            O_READY,
  input [1:0]                                             I_CANDIDATE_ID,
  input [(PARA_PIXEL_WD*PARA_PIXELS_PER_BEAT)-1:0]        I_PRED_DATA,
  input [PARA_BEAT_COORD_WD-1:0]                          I_X_BASE,
  input [PARA_BEAT_COORD_WD-1:0]                          I_Y,
  input                                                   I_ROW_LAST,
  input                                                   I_LAST,

  output logic                                            O_BUF_RD_VALID,
  output logic [PARA_BUF_ID_WD-1:0]                       O_BUF_RD_BUFFER_ID,
  output logic [PARA_COMPONENT_WD-1:0]                    O_BUF_RD_PLANE,
  output logic [PARA_BUF_ADDR_WD-1:0]                     O_BUF_RD_ADDR,
  input [PARA_BUF_DATA_WD-1:0]                            I_BUF_RD_DATA,
  input                                                   I_BUF_RD_DATA_VALID,

  output logic                                            O_VALID,
  input                                                   I_READY,
  output logic [1:0]                                      O_CANDIDATE_ID,
  output logic [(PARA_PIXEL_WD*PARA_PIXELS_PER_BEAT)-1:0] O_PRED_DATA,
  output logic [(PARA_PIXEL_WD*PARA_PIXELS_PER_BEAT)-1:0] O_ORIG_DATA,
  output logic [PARA_BEAT_COORD_WD-1:0]                   O_X_BASE,
  output logic [PARA_BEAT_COORD_WD-1:0]                   O_Y,
  output logic                                            O_ROW_LAST,
  output logic                                            O_LAST
);

localparam PARA_PRED_DATA_WD = PARA_PIXEL_WD * PARA_PIXELS_PER_BEAT;
localparam PARA_HALF_WORD_WD = PARA_BUF_DATA_WD / 2;
localparam PARA_FIFO_DEPTH = 2;
localparam PARA_FIFO_COUNT_WD = 2;
localparam [PARA_COMPONENT_WD-1:0] PARA_COMPONENT_Y = PARA_COMPONENT_WD'(0);
localparam [PARA_COMPONENT_WD-1:0] PARA_COMPONENT_CB = PARA_COMPONENT_WD'(1);
localparam [PARA_COMPONENT_WD-1:0] PARA_COMPONENT_CR = PARA_COMPONENT_WD'(2);

logic r_config_valid;
logic [PARA_BUF_ID_WD-1:0] r_ctu_buffer_id;
logic [PARA_COMPONENT_WD-1:0] r_component_id;
logic [PARA_TU_COORD_WD-1:0] r_tu_x;
logic [PARA_TU_COORD_WD-1:0] r_tu_y;
logic w_component_valid;
logic w_tu_start_accept;

logic [PARA_TU_COORD_WD:0] w_pixel_x;
logic [PARA_TU_COORD_WD:0] w_pixel_y;
logic [PARA_BUF_ADDR_WD-1:0] w_pixel_x_ext;
logic [PARA_BUF_ADDR_WD-1:0] w_pixel_y_ext;
logic [PARA_BUF_ADDR_WD-1:0] w_luma_addr;
logic [PARA_BUF_ADDR_WD-1:0] w_chroma_addr;
logic w_half_select;
logic w_input_fire;
logic w_can_issue;

logic r_req_valid;
logic r_req_half_select;
logic [1:0] r_req_candidate_id;
logic [PARA_PRED_DATA_WD-1:0] r_req_pred_data;
logic [PARA_BEAT_COORD_WD-1:0] r_req_x_base;
logic [PARA_BEAT_COORD_WD-1:0] r_req_y;
logic r_req_row_last;
logic r_req_last;

logic [PARA_HALF_WORD_WD-1:0] w_selected_half_word;
logic [PARA_PRED_DATA_WD-1:0] w_orig_data;
logic w_rsp_push;
logic w_rsp_pop;

logic [PARA_FIFO_COUNT_WD-1:0] r_fifo_count;
logic [PARA_FIFO_COUNT_WD-1:0] w_fifo_count_next;

logic [1:0] r_fifo0_candidate_id;
logic [PARA_PRED_DATA_WD-1:0] r_fifo0_pred_data;
logic [PARA_PRED_DATA_WD-1:0] r_fifo0_orig_data;
logic [PARA_BEAT_COORD_WD-1:0] r_fifo0_x_base;
logic [PARA_BEAT_COORD_WD-1:0] r_fifo0_y;
logic r_fifo0_row_last;
logic r_fifo0_last;

logic [1:0] r_fifo1_candidate_id;
logic [PARA_PRED_DATA_WD-1:0] r_fifo1_pred_data;
logic [PARA_PRED_DATA_WD-1:0] r_fifo1_orig_data;
logic [PARA_BEAT_COORD_WD-1:0] r_fifo1_x_base;
logic [PARA_BEAT_COORD_WD-1:0] r_fifo1_y;
logic r_fifo1_row_last;
logic r_fifo1_last;

assign w_component_valid = (r_component_id == PARA_COMPONENT_Y) || (r_component_id == PARA_COMPONENT_CB) || (r_component_id == PARA_COMPONENT_CR);
assign O_TU_READY = (r_fifo_count == PARA_FIFO_COUNT_WD'(0)) && !r_req_valid;
assign w_tu_start_accept = I_TU_START && O_TU_READY;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_config_valid <= 1'b0;
    r_ctu_buffer_id <= '0;
    r_component_id <= PARA_COMPONENT_Y;
    r_tu_x <= '0;
    r_tu_y <= '0;
  end
  else if (w_tu_start_accept) begin
    r_config_valid <= 1'b1;
    r_ctu_buffer_id <= I_CTU_BUFFER_ID;
    r_component_id <= I_COMPONENT_ID;
    r_tu_x <= I_TU_X;
    r_tu_y <= I_TU_Y;
  end
end

assign w_pixel_x = {1'b0, r_tu_x} + {{(PARA_TU_COORD_WD+1-PARA_BEAT_COORD_WD){1'b0}}, I_X_BASE};
assign w_pixel_y = {1'b0, r_tu_y} + {{(PARA_TU_COORD_WD+1-PARA_BEAT_COORD_WD){1'b0}}, I_Y};
assign w_pixel_x_ext = PARA_BUF_ADDR_WD'(w_pixel_x);
assign w_pixel_y_ext = PARA_BUF_ADDR_WD'(w_pixel_y);
assign w_luma_addr = (w_pixel_y_ext << 4) + (w_pixel_x_ext >> 3);
assign w_chroma_addr = (w_pixel_y_ext << 3) + (w_pixel_x_ext >> 3);
assign w_half_select = w_pixel_x[2];

assign w_rsp_push = I_BUF_RD_DATA_VALID && r_req_valid;
assign w_rsp_pop = (r_fifo_count != PARA_FIFO_COUNT_WD'(0)) && I_READY;

always_comb begin
  w_can_issue = 1'b0;

  unique casez (r_fifo_count)
    2'd0: w_can_issue = 1'b1;
    2'd1: begin
      if (w_rsp_pop)
        w_can_issue = 1'b1;
      else if (!r_req_valid)
        w_can_issue = 1'b1;
    end
    2'd2: begin
      if (w_rsp_pop && !r_req_valid)
        w_can_issue = 1'b1;
    end
    default: w_can_issue = 1'b0;
  endcase
end

assign O_READY = r_config_valid && w_component_valid && w_can_issue && !w_tu_start_accept;
assign w_input_fire = I_VALID && O_READY;

assign O_BUF_RD_VALID = w_input_fire;
assign O_BUF_RD_BUFFER_ID = r_ctu_buffer_id;
assign O_BUF_RD_PLANE = r_component_id;
assign O_BUF_RD_ADDR = (r_component_id == PARA_COMPONENT_Y) ? w_luma_addr : w_chroma_addr;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_req_valid <= 1'b0;
  else
    r_req_valid <= w_input_fire;
end

always_ff @ (posedge I_CLK) begin
  if (w_input_fire) begin
    r_req_half_select <= w_half_select;
    r_req_candidate_id <= I_CANDIDATE_ID;
    r_req_pred_data <= I_PRED_DATA;
    r_req_x_base <= I_X_BASE;
    r_req_y <= I_Y;
    r_req_row_last <= I_ROW_LAST;
    r_req_last <= I_LAST;
  end
end

assign w_selected_half_word = r_req_half_select ? I_BUF_RD_DATA[PARA_BUF_DATA_WD-1 -: PARA_HALF_WORD_WD] : I_BUF_RD_DATA[PARA_HALF_WORD_WD-1:0];

always_comb begin
  w_orig_data = '0;
  w_orig_data[(PARA_PIXEL_WD*1)-1 -: PARA_PIXEL_WD] = w_selected_half_word[(PARA_SAMPLE_STORE_WD*0) +: PARA_PIXEL_WD];
  w_orig_data[(PARA_PIXEL_WD*2)-1 -: PARA_PIXEL_WD] = w_selected_half_word[(PARA_SAMPLE_STORE_WD*1) +: PARA_PIXEL_WD];
  w_orig_data[(PARA_PIXEL_WD*3)-1 -: PARA_PIXEL_WD] = w_selected_half_word[(PARA_SAMPLE_STORE_WD*2) +: PARA_PIXEL_WD];
  w_orig_data[(PARA_PIXEL_WD*4)-1 -: PARA_PIXEL_WD] = w_selected_half_word[(PARA_SAMPLE_STORE_WD*3) +: PARA_PIXEL_WD];
end

always_comb begin
  w_fifo_count_next = r_fifo_count;

  unique casez ({w_rsp_push, w_rsp_pop})
    2'b10: begin
      if (r_fifo_count < PARA_FIFO_COUNT_WD'(PARA_FIFO_DEPTH))
        w_fifo_count_next = r_fifo_count + PARA_FIFO_COUNT_WD'(1);
    end
    2'b01: begin
      if (r_fifo_count != PARA_FIFO_COUNT_WD'(0))
        w_fifo_count_next = r_fifo_count - PARA_FIFO_COUNT_WD'(1);
    end
    default: w_fifo_count_next = r_fifo_count;
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_fifo_count <= '0;
  else
    r_fifo_count <= w_fifo_count_next;
end

always_ff @ (posedge I_CLK) begin
  unique casez ({w_rsp_push, w_rsp_pop})
    2'b10: begin
      if (r_fifo_count == 2'd0) begin
        r_fifo0_candidate_id <= r_req_candidate_id;
        r_fifo0_pred_data <= r_req_pred_data;
        r_fifo0_orig_data <= w_orig_data;
        r_fifo0_x_base <= r_req_x_base;
        r_fifo0_y <= r_req_y;
        r_fifo0_row_last <= r_req_row_last;
        r_fifo0_last <= r_req_last;
      end
      else if (r_fifo_count == 2'd1) begin
        r_fifo1_candidate_id <= r_req_candidate_id;
        r_fifo1_pred_data <= r_req_pred_data;
        r_fifo1_orig_data <= w_orig_data;
        r_fifo1_x_base <= r_req_x_base;
        r_fifo1_y <= r_req_y;
        r_fifo1_row_last <= r_req_row_last;
        r_fifo1_last <= r_req_last;
      end
    end

    2'b01: begin
      if (r_fifo_count == 2'd2) begin
        r_fifo0_candidate_id <= r_fifo1_candidate_id;
        r_fifo0_pred_data <= r_fifo1_pred_data;
        r_fifo0_orig_data <= r_fifo1_orig_data;
        r_fifo0_x_base <= r_fifo1_x_base;
        r_fifo0_y <= r_fifo1_y;
        r_fifo0_row_last <= r_fifo1_row_last;
        r_fifo0_last <= r_fifo1_last;
      end
    end

    2'b11: begin
      if (r_fifo_count == 2'd1) begin
        r_fifo0_candidate_id <= r_req_candidate_id;
        r_fifo0_pred_data <= r_req_pred_data;
        r_fifo0_orig_data <= w_orig_data;
        r_fifo0_x_base <= r_req_x_base;
        r_fifo0_y <= r_req_y;
        r_fifo0_row_last <= r_req_row_last;
        r_fifo0_last <= r_req_last;
      end
      else if (r_fifo_count == 2'd2) begin
        r_fifo0_candidate_id <= r_fifo1_candidate_id;
        r_fifo0_pred_data <= r_fifo1_pred_data;
        r_fifo0_orig_data <= r_fifo1_orig_data;
        r_fifo0_x_base <= r_fifo1_x_base;
        r_fifo0_y <= r_fifo1_y;
        r_fifo0_row_last <= r_fifo1_row_last;
        r_fifo0_last <= r_fifo1_last;

        r_fifo1_candidate_id <= r_req_candidate_id;
        r_fifo1_pred_data <= r_req_pred_data;
        r_fifo1_orig_data <= w_orig_data;
        r_fifo1_x_base <= r_req_x_base;
        r_fifo1_y <= r_req_y;
        r_fifo1_row_last <= r_req_row_last;
        r_fifo1_last <= r_req_last;
      end
    end

    default: begin
    end
  endcase
end

assign O_VALID = (r_fifo_count != PARA_FIFO_COUNT_WD'(0));
assign O_CANDIDATE_ID = r_fifo0_candidate_id;
assign O_PRED_DATA = r_fifo0_pred_data;
assign O_ORIG_DATA = r_fifo0_orig_data;
assign O_X_BASE = r_fifo0_x_base;
assign O_Y = r_fifo0_y;
assign O_ROW_LAST = r_fifo0_row_last;
assign O_LAST = r_fifo0_last;

endmodule: INTRA_ORIGINAL_SAMPLE_READER
