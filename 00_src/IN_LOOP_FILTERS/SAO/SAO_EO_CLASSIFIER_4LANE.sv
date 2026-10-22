//------------------------------------------------------------------------------
// Description: This module classifies four reconstructed center samples
//              against four Sample Adaptive Offset edge directions in
//              parallel. Its input is a row-major, three-row by six-column
//              shared window from SAO_SHARED_WINDOW_GENERATOR. Each sample
//              occupies one 16-bit slot; only the active 10 pixel bits are
//              used for unsigned comparisons.
//
//              One lane produces four independent category IDs, one for each
//              direction. The result is category 1 for edge type -2, 2 for
//              -1, 0 for 0, 3 for +1, and 4 for +2. The directions are
//              horizontal, vertical, top-left/bottom-right, and
//              top-right/bottom-left in that order.
//
//              Output categories are direction-major: category index
//              (direction * PARA_LANES + lane) occupies three bits. Four
//              signed center differences and metadata follow the same
//              one-entry elastic ready/valid output register. No statistics
//              are accumulated in this module.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_EO_CLASSIFIER_4LANE #(
  parameter int PARA_SAMPLE_WD         = 16,
  parameter int PARA_PIXEL_BIT_DEPTH   = 10,
  parameter int PARA_LANES             = 4,
  parameter int PARA_MAX_WORDS_PER_ROW = 32,
  parameter int PARA_MAX_ROWS          = 128
) (
  input                                                                     I_CLK,
  input                                                                     I_RST_N,
  input                                                                     I_CLEAR,
  input        [3*(PARA_LANES+2)*PARA_SAMPLE_WD-1:0]                        I_SHARED_WINDOW,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_CENTER_DIFF_WORD,
  input        [PARA_LANES-1:0]                                             I_LANE_VALID,
  input                                                                     I_WINDOW_VALID,
  output logic                                                              O_INPUT_READY,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            I_WORD_X,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_CENTER_Y,
  input        [1:0]                                                        I_COMPONENT_ID,
  output logic [PARA_LANES*4*3-1:0]                                         O_EO_CATEGORY,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_CENTER_DIFF_WORD,
  output logic [PARA_LANES-1:0]                                             O_LANE_VALID,
  output logic                                                              O_OUTPUT_VALID,
  input                                                                     I_OUTPUT_READY,
  output logic [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            O_WORD_X,
  output logic [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] O_CENTER_Y,
  output logic [1:0]                                                        O_COMPONENT_ID
);

  localparam int PARA_COLS = PARA_LANES + 2;
  localparam int PARA_EO_DIR_COUNT = 4;
  localparam int PARA_CATEGORY_WD = 3;
  localparam int PARA_WORD_WD = PARA_LANES * PARA_SAMPLE_WD;
  localparam int PARA_CATEGORY_BUS_WD =
    PARA_LANES * PARA_EO_DIR_COUNT * PARA_CATEGORY_WD;
  localparam int PARA_WORD_X_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_ROW_Y_WD =
    (PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1);

  logic [PARA_CATEGORY_BUS_WD-1:0] w_categories;
  logic w_output_slot_available;
  logic r_output_valid;
  logic [PARA_CATEGORY_BUS_WD-1:0] r_categories;
  logic [PARA_WORD_WD-1:0] r_diff_word;
  logic [PARA_LANES-1:0] r_lane_valid;
  logic [PARA_WORD_X_WD-1:0] r_word_x;
  logic [PARA_ROW_Y_WD-1:0] r_center_y;
  logic [1:0] r_component_id;

  // The category depends only on unsigned comparisons, not subtraction.
  function automatic logic [PARA_CATEGORY_WD-1:0] get_eo_category (
    input logic [PARA_PIXEL_BIT_DEPTH-1:0] center,
    input logic [PARA_PIXEL_BIT_DEPTH-1:0] neighbor_a,
    input logic [PARA_PIXEL_BIT_DEPTH-1:0] neighbor_b
  );
    logic center_less_a;
    logic center_less_b;
    logic center_greater_a;
    logic center_greater_b;
    begin
      center_less_a    = center < neighbor_a;
      center_less_b    = center < neighbor_b;
      center_greater_a = center > neighbor_a;
      center_greater_b = center > neighbor_b;

      if (center_less_a && center_less_b)
        get_eo_category = PARA_CATEGORY_WD'(1);
      else if ((center_less_a && !center_greater_b) ||
               (center_less_b && !center_greater_a))
        get_eo_category = PARA_CATEGORY_WD'(2);
      else if (center_greater_a && center_greater_b)
        get_eo_category = PARA_CATEGORY_WD'(4);
      else if ((center_greater_a && !center_less_b) ||
               (center_greater_b && !center_less_a))
        get_eo_category = PARA_CATEGORY_WD'(3);
      else
        get_eo_category = '0;
    end
  endfunction

  // Every lane uses its center column and the eight adjacent pixels.
  // The window's least significant sample is row 0, column 0.
  for (genvar lane = 0; lane < PARA_LANES; lane++) begin : gen_eo_lanes
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_center;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_left;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_right;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_top;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_bottom;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_top_left;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_top_right;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_bottom_left;
    logic [PARA_PIXEL_BIT_DEPTH-1:0] w_bottom_right;

    assign w_center = I_SHARED_WINDOW[
      (1*PARA_COLS+lane+1)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_left = I_SHARED_WINDOW[
      (1*PARA_COLS+lane)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_right = I_SHARED_WINDOW[
      (1*PARA_COLS+lane+2)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_top = I_SHARED_WINDOW[
      (0*PARA_COLS+lane+1)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_bottom = I_SHARED_WINDOW[
      (2*PARA_COLS+lane+1)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_top_left = I_SHARED_WINDOW[
      (0*PARA_COLS+lane)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_top_right = I_SHARED_WINDOW[
      (0*PARA_COLS+lane+2)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_bottom_left = I_SHARED_WINDOW[
      (2*PARA_COLS+lane)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];
    assign w_bottom_right = I_SHARED_WINDOW[
      (2*PARA_COLS+lane+2)*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH];

    assign w_categories[PARA_CATEGORY_WD*(0*PARA_LANES+lane) +: PARA_CATEGORY_WD] =
      get_eo_category(w_center, w_left, w_right);
    assign w_categories[PARA_CATEGORY_WD*(1*PARA_LANES+lane) +: PARA_CATEGORY_WD] =
      get_eo_category(w_center, w_top, w_bottom);
    assign w_categories[PARA_CATEGORY_WD*(2*PARA_LANES+lane) +: PARA_CATEGORY_WD] =
      get_eo_category(w_center, w_top_left, w_bottom_right);
    assign w_categories[PARA_CATEGORY_WD*(3*PARA_LANES+lane) +: PARA_CATEGORY_WD] =
      get_eo_category(w_center, w_top_right, w_bottom_left);
  end

  assign w_output_slot_available = !r_output_valid || I_OUTPUT_READY;
  assign O_INPUT_READY = I_RST_N && !I_CLEAR && w_output_slot_available;

  // The output valid bit holds when the downstream classifier consumer stalls.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_output_valid <= 1'b0;
    else if (I_CLEAR)
      r_output_valid <= 1'b0;
    else if (w_output_slot_available)
      r_output_valid <= I_WINDOW_VALID;
  end

  // Register all related data atomically so categories match their differences.
  always_ff @(posedge I_CLK) begin
    if (O_INPUT_READY && I_WINDOW_VALID) begin
      r_categories   <= w_categories;
      r_diff_word    <= I_CENTER_DIFF_WORD;
      r_lane_valid   <= I_LANE_VALID;
      r_word_x       <= I_WORD_X;
      r_center_y     <= I_CENTER_Y;
      r_component_id <= I_COMPONENT_ID;
    end
  end

  assign O_EO_CATEGORY      = r_categories;
  assign O_CENTER_DIFF_WORD = r_diff_word;
  assign O_LANE_VALID       = r_lane_valid;
  assign O_OUTPUT_VALID     = r_output_valid;
  assign O_WORD_X          = r_word_x;
  assign O_CENTER_Y        = r_center_y;
  assign O_COMPONENT_ID    = r_component_id;

endmodule: SAO_EO_CLASSIFIER_4LANE
