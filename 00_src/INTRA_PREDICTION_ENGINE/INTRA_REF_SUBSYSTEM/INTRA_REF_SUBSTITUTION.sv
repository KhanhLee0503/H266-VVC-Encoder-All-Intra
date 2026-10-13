//-----------------------------------------------------------
// Description: This module performs H.266/VVC intra reference sample
// substitution for the project baseline with reference line index equal to
// zero. It first searches the ordered reference chain for the first available
// sample. The chain order is from the bottom of the left reference toward the
// top-left sample and then across the top reference. The selected sample is
// used as the substitution seed. The module then propagates references in the
// same order and processes four samples per cycle for left and top words.
// When every reference is unavailable, the seed is set to the midpoint value
// 1 << (BitDepth - 1). The substituted references are written to the
// unfiltered reference buffer.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_SUBSTITUTION #(
  parameter integer PARA_SAMPLE_WD = 16,
  parameter integer PARA_BIT_DEPTH = 10
)
(
  input                                      I_CLK,
  input                                      I_RESETN,

  input                                      I_SUB_START,
  input [2:0]                                I_TU_WIDTH_CODE,
  input [2:0]                                I_TU_HEIGHT_CODE,
  output logic                               O_SUB_DONE,

  output logic                               O_RAW_WORD_QUERY_VALID,
  output logic [1:0]                         O_RAW_WORD_QUERY_REF_TYPE,
  output logic [3:0]                         O_RAW_WORD_QUERY_INDEX,
  input [63:0]                               I_RAW_WORD_QUERY_DATA,
  input [3:0]                                I_RAW_WORD_QUERY_AVAIL,

  output logic                               O_RAW_QUERY_VALID,
  output logic [1:0]                         O_RAW_QUERY_REF_TYPE,
  output logic [5:0]                         O_RAW_QUERY_INDEX,
  input [15:0]                               I_RAW_QUERY_SAMPLE,
  input                                      I_RAW_QUERY_AVAILABLE,

  output logic                               O_UNFILT_TOP_WR_EN,
  output logic [3:0]                         O_UNFILT_TOP_WR_INDEX,
  output logic [63:0]                        O_UNFILT_TOP_WR_DATA,

  output logic                               O_UNFILT_LEFT_WR_EN,
  output logic [3:0]                         O_UNFILT_LEFT_WR_INDEX,
  output logic [63:0]                        O_UNFILT_LEFT_WR_DATA,

  output logic                               O_UNFILT_TL_WR_EN,
  output logic [15:0]                        O_UNFILT_TL_WR_DATA
);

localparam [1:0] PARA_REF_TOP  = 2'b00;
localparam [1:0] PARA_REF_LEFT = 2'b01;
localparam [1:0] PARA_REF_TL   = 2'b10;

localparam [1:0] PARA_ST_IDLE      = 2'b00;
localparam [1:0] PARA_ST_SEARCH    = 2'b01;
localparam [1:0] PARA_ST_PROPAGATE = 2'b10;
localparam [1:0] PARA_ST_DONE      = 2'b11;

localparam [1:0] PARA_PHASE_LEFT = 2'b00;
localparam [1:0] PARA_PHASE_TL   = 2'b01;
localparam [1:0] PARA_PHASE_TOP  = 2'b10;

localparam integer PARA_DEFAULT_VALUE =
  (1 << (PARA_BIT_DEPTH - 1));

localparam [PARA_SAMPLE_WD-1:0] PARA_DEFAULT_SAMPLE =
  PARA_DEFAULT_VALUE;

logic [1:0]                            r_current_state;
logic [1:0]                            w_next_state;

logic [2:0]                            r_tu_width_code;
logic [2:0]                            r_tu_height_code;

logic [1:0]                            r_search_phase;
logic [3:0]                            r_search_word_index;

logic [1:0]                            r_prop_phase;
logic [3:0]                            r_prop_word_index;

logic [PARA_SAMPLE_WD-1:0]             r_seed_sample;
logic [PARA_SAMPLE_WD-1:0]             r_previous_sample;

logic [3:0]                            w_start_left_last_index;
logic [3:0]                            w_left_last_index;
logic [3:0]                            w_top_last_index;

logic                                  w_left_word_has_available;
logic                                  w_top_word_has_available;

logic                                  w_search_complete;
logic [PARA_SAMPLE_WD-1:0]             w_search_seed_sample;

logic [PARA_SAMPLE_WD-1:0]             w_left_lane_3;
logic [PARA_SAMPLE_WD-1:0]             w_left_lane_2;
logic [PARA_SAMPLE_WD-1:0]             w_left_lane_1;
logic [PARA_SAMPLE_WD-1:0]             w_left_lane_0;

logic [PARA_SAMPLE_WD-1:0]             w_left_sub_3;
logic [PARA_SAMPLE_WD-1:0]             w_left_sub_2;
logic [PARA_SAMPLE_WD-1:0]             w_left_sub_1;
logic [PARA_SAMPLE_WD-1:0]             w_left_sub_0;
logic [63:0]                           w_left_sub_word;

logic [PARA_SAMPLE_WD-1:0]             w_top_lane_0;
logic [PARA_SAMPLE_WD-1:0]             w_top_lane_1;
logic [PARA_SAMPLE_WD-1:0]             w_top_lane_2;
logic [PARA_SAMPLE_WD-1:0]             w_top_lane_3;

logic [PARA_SAMPLE_WD-1:0]             w_top_sub_0;
logic [PARA_SAMPLE_WD-1:0]             w_top_sub_1;
logic [PARA_SAMPLE_WD-1:0]             w_top_sub_2;
logic [PARA_SAMPLE_WD-1:0]             w_top_sub_3;
logic [63:0]                           w_top_sub_word;

logic [PARA_SAMPLE_WD-1:0]             w_tl_sub_sample;

always_comb begin
  w_start_left_last_index = 4'd0;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_start_left_last_index = 4'd1;
    end
    3'd3: begin
      w_start_left_last_index = 4'd3;
    end
    3'd4: begin
      w_start_left_last_index = 4'd7;
    end
    3'd5: begin
      w_start_left_last_index = 4'd15;
    end
    default: begin
      w_start_left_last_index = 4'd0;
    end
  endcase
end

always_comb begin
  w_left_last_index = 4'd0;

  unique casez (r_tu_height_code)
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
  w_top_last_index = 4'd0;

  unique casez (r_tu_width_code)
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

assign w_left_word_has_available =
  |I_RAW_WORD_QUERY_AVAIL;

assign w_top_word_has_available =
  |I_RAW_WORD_QUERY_AVAIL;

always_comb begin
  w_search_complete = 1'b0;
  w_search_seed_sample = PARA_DEFAULT_SAMPLE;

  if (r_current_state == PARA_ST_SEARCH) begin
    unique casez (r_search_phase)
      PARA_PHASE_LEFT: begin
        if (w_left_word_has_available) begin
          w_search_complete = 1'b1;

          if (I_RAW_WORD_QUERY_AVAIL[3])
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[63:48];
          else if (I_RAW_WORD_QUERY_AVAIL[2])
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[47:32];
          else if (I_RAW_WORD_QUERY_AVAIL[1])
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[31:16];
          else
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[15:0];
        end
      end

      PARA_PHASE_TL: begin
        if (I_RAW_QUERY_AVAILABLE) begin
          w_search_complete = 1'b1;
          w_search_seed_sample = I_RAW_QUERY_SAMPLE;
        end
      end

      PARA_PHASE_TOP: begin
        if (w_top_word_has_available) begin
          w_search_complete = 1'b1;

          if (I_RAW_WORD_QUERY_AVAIL[0])
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[15:0];
          else if (I_RAW_WORD_QUERY_AVAIL[1])
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[31:16];
          else if (I_RAW_WORD_QUERY_AVAIL[2])
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[47:32];
          else
            w_search_seed_sample = I_RAW_WORD_QUERY_DATA[63:48];
        end
        else if (r_search_word_index == w_top_last_index) begin
                  w_search_complete = 1'b1;
          w_search_seed_sample = PARA_DEFAULT_SAMPLE;
        end
      end

      default: begin
              w_search_complete = 1'b0;
        w_search_seed_sample = PARA_DEFAULT_SAMPLE;
      end
    endcase
  end
end

assign w_left_lane_3 = I_RAW_WORD_QUERY_DATA[63:48];
assign w_left_lane_2 = I_RAW_WORD_QUERY_DATA[47:32];
assign w_left_lane_1 = I_RAW_WORD_QUERY_DATA[31:16];
assign w_left_lane_0 = I_RAW_WORD_QUERY_DATA[15:0];

always_comb begin
  if (I_RAW_WORD_QUERY_AVAIL[3])
    w_left_sub_3 = w_left_lane_3;
  else
    w_left_sub_3 = r_previous_sample;

  if (I_RAW_WORD_QUERY_AVAIL[2])
    w_left_sub_2 = w_left_lane_2;
  else
    w_left_sub_2 = w_left_sub_3;

  if (I_RAW_WORD_QUERY_AVAIL[1])
    w_left_sub_1 = w_left_lane_1;
  else
    w_left_sub_1 = w_left_sub_2;

  if (I_RAW_WORD_QUERY_AVAIL[0])
    w_left_sub_0 = w_left_lane_0;
  else
    w_left_sub_0 = w_left_sub_1;
end

assign w_left_sub_word = {
  w_left_sub_3,
  w_left_sub_2,
  w_left_sub_1,
  w_left_sub_0
};

assign w_top_lane_0 = I_RAW_WORD_QUERY_DATA[15:0];
assign w_top_lane_1 = I_RAW_WORD_QUERY_DATA[31:16];
assign w_top_lane_2 = I_RAW_WORD_QUERY_DATA[47:32];
assign w_top_lane_3 = I_RAW_WORD_QUERY_DATA[63:48];

always_comb begin
  if (I_RAW_WORD_QUERY_AVAIL[0])
    w_top_sub_0 = w_top_lane_0;
  else
    w_top_sub_0 = r_previous_sample;

  if (I_RAW_WORD_QUERY_AVAIL[1])
    w_top_sub_1 = w_top_lane_1;
  else
    w_top_sub_1 = w_top_sub_0;

  if (I_RAW_WORD_QUERY_AVAIL[2])
    w_top_sub_2 = w_top_lane_2;
  else
    w_top_sub_2 = w_top_sub_1;

  if (I_RAW_WORD_QUERY_AVAIL[3])
    w_top_sub_3 = w_top_lane_3;
  else
    w_top_sub_3 = w_top_sub_2;
end

assign w_top_sub_word = {
  w_top_sub_3,
  w_top_sub_2,
  w_top_sub_1,
  w_top_sub_0
};

always_comb begin
  if (I_RAW_QUERY_AVAILABLE)
    w_tl_sub_sample = I_RAW_QUERY_SAMPLE;
  else
    w_tl_sub_sample = r_previous_sample;
end

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
      if (I_SUB_START)
        w_next_state = PARA_ST_SEARCH;
    end

    PARA_ST_SEARCH: begin
      if (w_search_complete)
        w_next_state = PARA_ST_PROPAGATE;
    end

    PARA_ST_PROPAGATE: begin
      if ((r_prop_phase == PARA_PHASE_TOP) &&
          (r_prop_word_index == w_top_last_index))
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
  O_SUB_DONE = 1'b0;

  O_RAW_WORD_QUERY_VALID = 1'b0;
  O_RAW_WORD_QUERY_REF_TYPE = PARA_REF_TOP;
  O_RAW_WORD_QUERY_INDEX = 4'd0;

  O_RAW_QUERY_VALID = 1'b0;
  O_RAW_QUERY_REF_TYPE = PARA_REF_TL;
  O_RAW_QUERY_INDEX = 6'd0;

  O_UNFILT_TOP_WR_EN = 1'b0;
  O_UNFILT_TOP_WR_INDEX = 4'd0;
  O_UNFILT_TOP_WR_DATA = 64'd0;

  O_UNFILT_LEFT_WR_EN = 1'b0;
  O_UNFILT_LEFT_WR_INDEX = 4'd0;
  O_UNFILT_LEFT_WR_DATA = 64'd0;

  O_UNFILT_TL_WR_EN = 1'b0;
  O_UNFILT_TL_WR_DATA = 16'd0;

  unique casez (r_current_state)
    PARA_ST_IDLE: begin
      O_SUB_DONE = 1'b0;
    end

    PARA_ST_SEARCH: begin
      unique casez (r_search_phase)
        PARA_PHASE_LEFT: begin
          O_RAW_WORD_QUERY_VALID = 1'b1;
          O_RAW_WORD_QUERY_REF_TYPE = PARA_REF_LEFT;
          O_RAW_WORD_QUERY_INDEX = r_search_word_index;
        end

        PARA_PHASE_TL: begin
          O_RAW_QUERY_VALID = 1'b1;
          O_RAW_QUERY_REF_TYPE = PARA_REF_TL;
          O_RAW_QUERY_INDEX = 6'd0;
        end

        PARA_PHASE_TOP: begin
          O_RAW_WORD_QUERY_VALID = 1'b1;
          O_RAW_WORD_QUERY_REF_TYPE = PARA_REF_TOP;
          O_RAW_WORD_QUERY_INDEX = r_search_word_index;
        end

        default: begin
          O_RAW_WORD_QUERY_VALID = 1'b0;
          O_RAW_QUERY_VALID = 1'b0;
        end
      endcase
    end

    PARA_ST_PROPAGATE: begin
      unique casez (r_prop_phase)
        PARA_PHASE_LEFT: begin
          O_RAW_WORD_QUERY_VALID = 1'b1;
          O_RAW_WORD_QUERY_REF_TYPE = PARA_REF_LEFT;
          O_RAW_WORD_QUERY_INDEX = r_prop_word_index;

          O_UNFILT_LEFT_WR_EN = 1'b1;
          O_UNFILT_LEFT_WR_INDEX = r_prop_word_index;
          O_UNFILT_LEFT_WR_DATA = w_left_sub_word;
        end

        PARA_PHASE_TL: begin
          O_RAW_QUERY_VALID = 1'b1;
          O_RAW_QUERY_REF_TYPE = PARA_REF_TL;
          O_RAW_QUERY_INDEX = 6'd0;

          O_UNFILT_TL_WR_EN = 1'b1;
          O_UNFILT_TL_WR_DATA = w_tl_sub_sample;
        end

        PARA_PHASE_TOP: begin
          O_RAW_WORD_QUERY_VALID = 1'b1;
          O_RAW_WORD_QUERY_REF_TYPE = PARA_REF_TOP;
          O_RAW_WORD_QUERY_INDEX = r_prop_word_index;

          O_UNFILT_TOP_WR_EN = 1'b1;
          O_UNFILT_TOP_WR_INDEX = r_prop_word_index;
          O_UNFILT_TOP_WR_DATA = w_top_sub_word;
        end

        default: begin
          O_RAW_WORD_QUERY_VALID = 1'b0;
          O_RAW_QUERY_VALID = 1'b0;
        end
      endcase
    end

    PARA_ST_DONE: begin
      O_SUB_DONE = 1'b1;
    end

    default: begin
      O_SUB_DONE = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_tu_width_code <= 3'd0;
    r_tu_height_code <= 3'd0;
  end
  else if ((r_current_state == PARA_ST_IDLE) && I_SUB_START) begin
    r_tu_width_code <= I_TU_WIDTH_CODE;
    r_tu_height_code <= I_TU_HEIGHT_CODE;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_search_phase <= PARA_PHASE_LEFT;
    r_search_word_index <= 4'd0;
  end
  else if ((r_current_state == PARA_ST_IDLE) && I_SUB_START) begin
    r_search_phase <= PARA_PHASE_LEFT;
    r_search_word_index <= w_start_left_last_index;
  end
  else if ((r_current_state == PARA_ST_SEARCH) &&
           !w_search_complete) begin
    unique casez (r_search_phase)
      PARA_PHASE_LEFT: begin
        if (r_search_word_index != 4'd0)
          r_search_word_index <= r_search_word_index - 4'd1;
        else begin
          r_search_phase <= PARA_PHASE_TL;
          r_search_word_index <= 4'd0;
        end
      end

      PARA_PHASE_TL: begin
        r_search_phase <= PARA_PHASE_TOP;
        r_search_word_index <= 4'd0;
      end

      PARA_PHASE_TOP: begin
        if (r_search_word_index < w_top_last_index)
          r_search_word_index <= r_search_word_index + 4'd1;
      end

      default: begin
        r_search_phase <= PARA_PHASE_LEFT;
        r_search_word_index <= 4'd0;
      end
    endcase
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_seed_sample <= PARA_DEFAULT_SAMPLE;
    r_previous_sample <= PARA_DEFAULT_SAMPLE;
  end
  else if ((r_current_state == PARA_ST_IDLE) && I_SUB_START) begin
    r_seed_sample <= PARA_DEFAULT_SAMPLE;
    r_previous_sample <= PARA_DEFAULT_SAMPLE;
  end
  else if ((r_current_state == PARA_ST_SEARCH) &&
           w_search_complete) begin
    r_seed_sample <= w_search_seed_sample;
    r_previous_sample <= w_search_seed_sample;
  end
  else if (r_current_state == PARA_ST_PROPAGATE) begin
    unique casez (r_prop_phase)
      PARA_PHASE_LEFT: begin
        r_previous_sample <= w_left_sub_0;
      end

      PARA_PHASE_TL: begin
        r_previous_sample <= w_tl_sub_sample;
      end

      PARA_PHASE_TOP: begin
        r_previous_sample <= w_top_sub_3;
      end

      default: begin
        // The previous sample is preserved outside valid propagation phases.
      end
    endcase
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_prop_phase <= PARA_PHASE_LEFT;
    r_prop_word_index <= 4'd0;
  end
  else if ((r_current_state == PARA_ST_SEARCH) &&
           w_search_complete) begin
    r_prop_phase <= PARA_PHASE_LEFT;
    r_prop_word_index <= w_left_last_index;
  end
  else if (r_current_state == PARA_ST_PROPAGATE) begin
    unique casez (r_prop_phase)
      PARA_PHASE_LEFT: begin
        if (r_prop_word_index != 4'd0)
          r_prop_word_index <= r_prop_word_index - 4'd1;
        else begin
          r_prop_phase <= PARA_PHASE_TL;
          r_prop_word_index <= 4'd0;
        end
      end

      PARA_PHASE_TL: begin
        r_prop_phase <= PARA_PHASE_TOP;
        r_prop_word_index <= 4'd0;
      end

      PARA_PHASE_TOP: begin
        if (r_prop_word_index < w_top_last_index)
          r_prop_word_index <= r_prop_word_index + 4'd1;
      end

      default: begin
        r_prop_phase <= PARA_PHASE_LEFT;
        r_prop_word_index <= 4'd0;
      end
    endcase
  end
end

endmodule: INTRA_REF_SUBSTITUTION
