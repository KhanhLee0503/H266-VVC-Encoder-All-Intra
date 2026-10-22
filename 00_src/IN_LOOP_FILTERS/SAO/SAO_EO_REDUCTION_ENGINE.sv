//------------------------------------------------------------------------------
// Description: This module reduces the four-lane Edge Offset classifications
//              into sixteen independent statistics contributions. Four fixed
//              directions each contain four category channels (categories
//              1 through 4). Category 0 does not contribute to statistics.
//
//              Each channel builds a four-lane membership mask, calculates a
//              three-bit population count, and sums the selected signed
//              differences with a balanced two-level adder tree. The signed
//              differences originate from ten-bit original and reconstructed
//              samples, so their eleven significant bits are sign-extended
//              to thirteen bits before summation.
//
//              Input categories are direction-major with category index
//              (direction * 4 + lane). Output channel index is
//              (direction * 4 + category - 1). The one-entry elastic output
//              register preserves all contributions and metadata on stalls.
//              This module does not accumulate statistics across cycles.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_EO_REDUCTION_ENGINE #(
  parameter int PARA_SAMPLE_WD         = 16,
  parameter int PARA_MAX_WORDS_PER_ROW = 32,
  parameter int PARA_MAX_ROWS          = 128
) (
  input                                                                    I_CLK,
  input                                                                    I_RST_N,
  input                                                                    I_CLEAR,
  input        [47:0]                                                      I_EO_CATEGORY,
  input        [4*PARA_SAMPLE_WD-1:0]                                      I_DIFF_WORD,
  input        [3:0]                                                       I_LANE_VALID,
  input                                                                    I_INPUT_VALID,
  output logic                                                             O_INPUT_READY,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                           I_WORD_X,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_CENTER_Y,
  input        [1:0]                                                       I_COMPONENT_ID,
  output logic [15:0]                                                      O_CATEGORY_VALID,
  output logic [47:0]                                                      O_COUNT_DELTA,
  output logic [207:0]                                                     O_DIFF_SUM_DELTA,
  output logic                                                             O_OUTPUT_VALID,
  input                                                                    I_OUTPUT_READY,
  output logic [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                           O_WORD_X,
  output logic [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] O_CENTER_Y,
  output logic [1:0]                                                       O_COMPONENT_ID
);

  localparam int PARA_LANES = 4;
  localparam int PARA_DIRECTION_COUNT = 4;
  localparam int PARA_CATEGORY_COUNT = 4;
  localparam int PARA_CATEGORY_WD = 3;
  localparam int PARA_DIFF_VALUE_WD = 11;
  localparam int PARA_COUNT_WD = 3;
  localparam int PARA_DIFF_SUM_WD = PARA_DIFF_VALUE_WD + 2;
  localparam int PARA_CHANNEL_COUNT = PARA_DIRECTION_COUNT * PARA_CATEGORY_COUNT;
  localparam int PARA_WORD_X_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_ROW_Y_WD =
    (PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1);

  logic [PARA_CHANNEL_COUNT-1:0] w_category_valid;
  logic [PARA_CHANNEL_COUNT*PARA_COUNT_WD-1:0] w_count_delta;
  logic [PARA_CHANNEL_COUNT*PARA_DIFF_SUM_WD-1:0] w_diff_sum_delta;
  logic w_output_slot_available;
  logic r_output_valid;
  logic [PARA_CHANNEL_COUNT-1:0] r_category_valid;
  logic [PARA_CHANNEL_COUNT*PARA_COUNT_WD-1:0] r_count_delta;
  logic [PARA_CHANNEL_COUNT*PARA_DIFF_SUM_WD-1:0] r_diff_sum_delta;
  logic [PARA_WORD_X_WD-1:0] r_word_x;
  logic [PARA_ROW_Y_WD-1:0] r_center_y;
  logic [1:0] r_component_id;

  // Each direction and nonzero category has a fixed output channel.
  for (genvar direction = 0; direction < PARA_DIRECTION_COUNT; direction++) begin : gen_direction
    for (genvar category = 0; category < PARA_CATEGORY_COUNT; category++) begin : gen_category
      localparam int PARA_CHANNEL_INDEX = direction * PARA_CATEGORY_COUNT + category;
      localparam logic [PARA_CATEGORY_WD-1:0] PARA_CATEGORY_ID =
        PARA_CATEGORY_WD'(category + 1);

      logic [PARA_LANES-1:0] w_membership;
      logic [1:0] w_count_pair_0;
      logic [1:0] w_count_pair_1;
      logic [PARA_COUNT_WD-1:0] w_count;
      logic signed [PARA_DIFF_SUM_WD-1:0] w_selected_diff [0:PARA_LANES-1];
      logic signed [PARA_DIFF_SUM_WD-1:0] w_sum_pair_0;
      logic signed [PARA_DIFF_SUM_WD-1:0] w_sum_pair_1;
      logic signed [PARA_DIFF_SUM_WD-1:0] w_diff_sum;

      // Invalid lanes and category zero contribute neither Count nor DiffSum.
      for (genvar lane = 0; lane < PARA_LANES; lane++) begin : gen_lane
        assign w_membership[lane] = I_LANE_VALID[lane] &&
          (I_EO_CATEGORY[PARA_CATEGORY_WD*(direction*PARA_LANES+lane) +:
                         PARA_CATEGORY_WD] == PARA_CATEGORY_ID);

        assign w_selected_diff[lane] = w_membership[lane] ?
          $signed({{(PARA_DIFF_SUM_WD-PARA_DIFF_VALUE_WD){
            I_DIFF_WORD[lane*PARA_SAMPLE_WD+PARA_DIFF_VALUE_WD-1]}},
            I_DIFF_WORD[lane*PARA_SAMPLE_WD +: PARA_DIFF_VALUE_WD]}) : '0;
      end

      // A two-level population-count tree produces a count from zero to four.
      assign w_count_pair_0 = {1'b0, w_membership[0]} +
                              {1'b0, w_membership[1]};
      assign w_count_pair_1 = {1'b0, w_membership[2]} +
                              {1'b0, w_membership[3]};
      assign w_count = {1'b0, w_count_pair_0} +
                       {1'b0, w_count_pair_1};

      // Both summation levels retain thirteen signed bits for four differences.
      assign w_sum_pair_0 = w_selected_diff[0] + w_selected_diff[1];
      assign w_sum_pair_1 = w_selected_diff[2] + w_selected_diff[3];
      assign w_diff_sum = w_sum_pair_0 + w_sum_pair_1;

      assign w_category_valid[PARA_CHANNEL_INDEX] = |w_membership;
      assign w_count_delta[PARA_COUNT_WD*PARA_CHANNEL_INDEX +: PARA_COUNT_WD] =
        w_count;
      assign w_diff_sum_delta[PARA_DIFF_SUM_WD*PARA_CHANNEL_INDEX +:
                              PARA_DIFF_SUM_WD] = w_diff_sum;
    end
  end

  assign w_output_slot_available = !r_output_valid || I_OUTPUT_READY;
  assign O_INPUT_READY = I_RST_N && !I_CLEAR && w_output_slot_available;

  // The valid register clears on reset or flush and holds while output stalls.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_output_valid <= 1'b0;
    else if (I_CLEAR)
      r_output_valid <= 1'b0;
    else if (w_output_slot_available)
      r_output_valid <= I_INPUT_VALID;
  end

  // Every contribution and its metadata enter the output register atomically.
  // Unqualified data registers do not require reset because valid gates them.
  always_ff @(posedge I_CLK) begin
    if (O_INPUT_READY && I_INPUT_VALID) begin
      r_category_valid <= w_category_valid;
      r_count_delta    <= w_count_delta;
      r_diff_sum_delta <= w_diff_sum_delta;
      r_word_x         <= I_WORD_X;
      r_center_y       <= I_CENTER_Y;
      r_component_id   <= I_COMPONENT_ID;
    end
  end

  assign O_CATEGORY_VALID = r_category_valid;
  assign O_COUNT_DELTA    = r_count_delta;
  assign O_DIFF_SUM_DELTA = r_diff_sum_delta;
  assign O_OUTPUT_VALID  = r_output_valid;
  assign O_WORD_X        = r_word_x;
  assign O_CENTER_Y      = r_center_y;
  assign O_COMPONENT_ID  = r_component_id;

endmodule: SAO_EO_REDUCTION_ENGINE
