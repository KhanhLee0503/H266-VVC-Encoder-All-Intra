//-----------------------------------------------------------
// Description: This module controls the H.266/VVC horizontal angular intra prediction core.
// It stores transform-unit metadata, selects the luma interpolation filter family once per
// transform unit, prepares negative reference extension when required, generates raster-order
// four-pixel issue coordinates, and waits for the final output beat to be accepted before
// completing the transform unit. The baseline assumes MRL is disabled, refIdx is zero, ISP is
// disabled, and supported transform-unit dimensions are 4, 8, 16, and 32 samples.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_H_CONTROL #(
  parameter PARA_COORD_WD = 5,
  parameter PARA_SIZE_WD  = 6,
  parameter PARA_MODE_WD  = 8,
  parameter PARA_ANGLE_WD = 11
)
(
  input                                      I_CLK,
  input                                      I_RESETN,

  input                                      I_START,
  input [2:0]                                I_WIDTH_CODE,
  input [2:0]                                I_HEIGHT_CODE,
  input signed [PARA_MODE_WD-1:0]            I_MAPPED_MODE,
  input signed [PARA_ANGLE_WD-1:0]           I_INTRA_PRED_ANGLE,
  input                                      I_ANGLE_NEGATIVE,
  input                                      I_REF_FILTER_FLAG,

  input                                      I_REF_READY,
  input                                      I_NEG_EXT_VALID,

  input                                      I_OUTPUT_CAN_ISSUE,
  input                                      I_LAST_BEAT_ACCEPT,

  output logic                               O_BUSY,
  output logic                               O_DONE,

  output logic                               O_NEG_EXT_START,
  output logic [PARA_SIZE_WD-1:0]            O_NEG_EXT_SIZE,
  output logic                               O_EXT_REF_LOAD,

  output logic                               O_ISSUE_VALID,
  output logic [PARA_COORD_WD-1:0]           O_X_BASE,
  output logic [PARA_COORD_WD-1:0]           O_Y,
  output logic                               O_ROW_LAST,
  output logic                               O_TU_LAST,

  output logic                               O_INTERP_FILTER_FLAG,
  output logic signed [PARA_ANGLE_WD-1:0]    O_INTRA_PRED_ANGLE
);

typedef enum logic [2:0] {
  ST_IDLE,
  ST_PREP_REF,
  ST_WAIT_NEG_EXT,
  ST_LOAD_EXT_REF,
  ST_RUN,
  ST_DRAIN,
  ST_DONE
} state_t;

state_t r_current_state;
state_t w_next_state;

logic [PARA_SIZE_WD-1:0] r_width;
logic [PARA_SIZE_WD-1:0] r_height;
logic [PARA_COORD_WD-1:0] r_x_base;
logic [PARA_COORD_WD-1:0] r_y;
logic signed [PARA_ANGLE_WD-1:0] r_intra_pred_angle;
logic r_angle_negative;
logic r_interp_filter_flag;

logic [PARA_SIZE_WD-1:0] w_input_width;
logic [PARA_SIZE_WD-1:0] w_input_height;
logic [3:0] w_ntbs;
logic [5:0] w_filter_threshold;
logic signed [PARA_MODE_WD:0] w_mode_ext;
logic signed [PARA_MODE_WD:0] w_mode_diff_18;
logic signed [PARA_MODE_WD:0] w_mode_diff_50;
logic [PARA_MODE_WD:0] w_mode_dist_18;
logic [PARA_MODE_WD:0] w_mode_dist_50;
logic [PARA_MODE_WD:0] w_min_dist;
logic w_interp_filter_flag_input;
logic w_issue_accept;
logic w_row_last;
logic w_tu_last;

always_comb begin
  w_input_width = '0;

  unique casez (I_WIDTH_CODE)
    3'd2: w_input_width = PARA_SIZE_WD'(4);
    3'd3: w_input_width = PARA_SIZE_WD'(8);
    3'd4: w_input_width = PARA_SIZE_WD'(16);
    3'd5: w_input_width = PARA_SIZE_WD'(32);
    default: w_input_width = '0;
  endcase
end

always_comb begin
  w_input_height = '0;

  unique casez (I_HEIGHT_CODE)
    3'd2: w_input_height = PARA_SIZE_WD'(4);
    3'd3: w_input_height = PARA_SIZE_WD'(8);
    3'd4: w_input_height = PARA_SIZE_WD'(16);
    3'd5: w_input_height = PARA_SIZE_WD'(32);
    default: w_input_height = '0;
  endcase
end

assign w_ntbs = ({1'b0, I_WIDTH_CODE} + {1'b0, I_HEIGHT_CODE}) >> 1;

always_comb begin
  w_filter_threshold = 6'd0;

  unique casez (w_ntbs)
    4'd2: w_filter_threshold = 6'd24;
    4'd3: w_filter_threshold = 6'd14;
    4'd4: w_filter_threshold = 6'd2;
    4'd5: w_filter_threshold = 6'd0;
    4'd6: w_filter_threshold = 6'd0;
    default: w_filter_threshold = 6'd0;
  endcase
end

assign w_mode_ext = {I_MAPPED_MODE[PARA_MODE_WD-1], I_MAPPED_MODE};
assign w_mode_diff_18 = w_mode_ext - (PARA_MODE_WD+1)'(18);
assign w_mode_diff_50 = w_mode_ext - (PARA_MODE_WD+1)'(50);

always_comb begin
  if (w_mode_diff_18 < 0)
    w_mode_dist_18 = -w_mode_diff_18;
  else
    w_mode_dist_18 = w_mode_diff_18;

  if (w_mode_diff_50 < 0)
    w_mode_dist_50 = -w_mode_diff_50;
  else
    w_mode_dist_50 = w_mode_diff_50;

  if (w_mode_dist_18 < w_mode_dist_50)
    w_min_dist = w_mode_dist_18;
  else
    w_min_dist = w_mode_dist_50;
end

always_comb begin
  w_interp_filter_flag_input = 1'b0;

  if (!I_REF_FILTER_FLAG) begin
    if (w_min_dist > w_filter_threshold)
      w_interp_filter_flag_input = 1'b1;
  end
end

assign w_row_last = ({1'b0, r_x_base} == (r_width - PARA_SIZE_WD'(4)));
assign w_tu_last = w_row_last && ({1'b0, r_y} == (r_height - PARA_SIZE_WD'(1)));
assign w_issue_accept = (r_current_state == ST_RUN) && I_OUTPUT_CAN_ISSUE;

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (I_START)
        w_next_state = ST_PREP_REF;
    end

    ST_PREP_REF: begin
      if (I_REF_READY) begin
        if (r_angle_negative)
          w_next_state = ST_WAIT_NEG_EXT;
        else
          w_next_state = ST_LOAD_EXT_REF;
      end
    end

    ST_WAIT_NEG_EXT: begin
      if (I_NEG_EXT_VALID)
        w_next_state = ST_LOAD_EXT_REF;
    end

    ST_LOAD_EXT_REF: begin
      w_next_state = ST_RUN;
    end

    ST_RUN: begin
      if (w_issue_accept && w_tu_last)
        w_next_state = ST_DRAIN;
    end

    ST_DRAIN: begin
      if (I_LAST_BEAT_ACCEPT)
        w_next_state = ST_DONE;
    end

    ST_DONE: begin
      w_next_state = ST_IDLE;
    end

    default: begin
      w_next_state = ST_IDLE;
    end
  endcase
end

always_comb begin
  O_BUSY = 1'b0;
  O_DONE = 1'b0;
  O_NEG_EXT_START = 1'b0;
  O_EXT_REF_LOAD = 1'b0;
  O_ISSUE_VALID = 1'b0;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_BUSY = 1'b0;
    end

    ST_PREP_REF: begin
      O_BUSY = 1'b1;

      if (I_REF_READY && r_angle_negative)
        O_NEG_EXT_START = 1'b1;
    end

    ST_WAIT_NEG_EXT: begin
      O_BUSY = 1'b1;
    end

    ST_LOAD_EXT_REF: begin
      O_BUSY = 1'b1;
      O_EXT_REF_LOAD = 1'b1;
    end

    ST_RUN: begin
      O_BUSY = 1'b1;
      O_ISSUE_VALID = 1'b1;
    end

    ST_DRAIN: begin
      O_BUSY = 1'b1;
    end

    ST_DONE: begin
      O_DONE = 1'b1;
    end

    default: begin
      O_BUSY = 1'b0;
      O_DONE = 1'b0;
      O_NEG_EXT_START = 1'b0;
      O_EXT_REF_LOAD = 1'b0;
      O_ISSUE_VALID = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_width <= '0;
    r_height <= '0;
    r_intra_pred_angle <= '0;
    r_angle_negative <= 1'b0;
    r_interp_filter_flag <= 1'b0;
  end
  else if ((r_current_state == ST_IDLE) && I_START) begin
    r_width <= w_input_width;
    r_height <= w_input_height;
    r_intra_pred_angle <= I_INTRA_PRED_ANGLE;
    r_angle_negative <= I_ANGLE_NEGATIVE;
    r_interp_filter_flag <= w_interp_filter_flag_input;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_x_base <= '0;
    r_y <= '0;
  end
  else if ((r_current_state == ST_IDLE) && I_START) begin
    r_x_base <= '0;
    r_y <= '0;
  end
  else if (w_issue_accept) begin
    if (w_row_last) begin
      r_x_base <= '0;

      if (!w_tu_last)
        r_y <= r_y + PARA_COORD_WD'(1);
    end
    else begin
      r_x_base <= r_x_base + PARA_COORD_WD'(4);
    end
  end
end

assign O_NEG_EXT_SIZE = r_width;
assign O_X_BASE = r_x_base;
assign O_Y = r_y;
assign O_ROW_LAST = w_row_last;
assign O_TU_LAST = w_tu_last;
assign O_INTERP_FILTER_FLAG = r_interp_filter_flag;
assign O_INTRA_PRED_ANGLE = r_intra_pred_angle;

endmodule: INTRA_ANGULAR_H_CONTROL
