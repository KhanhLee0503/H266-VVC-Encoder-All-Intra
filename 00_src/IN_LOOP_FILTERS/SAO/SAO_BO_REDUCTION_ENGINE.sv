//------------------------------------------------------------------------------
// Description: This module reduces four Sample Adaptive Offset band
//              classifications into at most four unique-band contributions.
//              The first valid lane for each band is the group leader.
//              Each leader gathers all valid lanes with the same five-bit
//              band index, calculates a three-bit sample count, and sums
//              the selected signed differences with a balanced adder tree.
//
//              Each input difference is the sign-extended eleven-bit result
//              of subtracting two ten-bit samples. Four such differences
//              fit in a signed thirteen-bit group sum.
//
//              Output group slot g corresponds to potential leader lane g.
//              Invalid slots contain zero band, count, and difference sum.
//              A one-entry elastic register preserves output and metadata
//              during stalls. This module does not accumulate across cycles.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_BO_REDUCTION_ENGINE #(
  parameter int PARA_SAMPLE_WD         = 16,
  parameter int PARA_MAX_WORDS_PER_ROW = 32,
  parameter int PARA_MAX_ROWS          = 128
) (
  input                                                                    I_CLK,
  input                                                                    I_RST_N,
  input                                                                    I_CLEAR,
  input        [19:0]                                                      I_BAND_INDEX,
  input        [4*PARA_SAMPLE_WD-1:0]                                      I_DIFF_WORD,
  input        [3:0]                                                       I_LANE_VALID,
  input                                                                    I_INPUT_VALID,
  output logic                                                             O_INPUT_READY,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                           I_WORD_X,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_ROW_Y,
  input        [1:0]                                                       I_COMPONENT_ID,
  output logic [3:0]                                                       O_GROUP_VALID,
  output logic [19:0]                                                      O_GROUP_BAND_INDEX,
  output logic [11:0]                                                      O_GROUP_COUNT,
  output logic [51:0]                                                      O_GROUP_DIFF_SUM,
  output logic                                                             O_OUTPUT_VALID,
  input                                                                    I_OUTPUT_READY,
  output logic [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                           O_WORD_X,
  output logic [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] O_ROW_Y,
  output logic [1:0]                                                       O_COMPONENT_ID
);

  localparam int PARA_LANES = 4;
  localparam int PARA_BAND_WD = 5;
  localparam int PARA_COUNT_WD = 3;
  localparam int PARA_DIFF_VALUE_WD = 11;
  localparam int PARA_DIFF_SUM_WD = PARA_DIFF_VALUE_WD + 2;
  localparam int PARA_WORD_X_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_ROW_Y_WD =
    (PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1);

  logic w_equal_01;
  logic w_equal_02;
  logic w_equal_03;
  logic w_equal_12;
  logic w_equal_13;
  logic w_equal_23;
  logic [PARA_LANES-1:0] w_equal [0:PARA_LANES-1];
  logic [PARA_LANES-1:0] w_group_leader;
  logic [PARA_LANES-1:0] w_group_valid;
  logic [PARA_LANES*PARA_BAND_WD-1:0] w_group_band_index;
  logic [PARA_LANES*PARA_COUNT_WD-1:0] w_group_count;
  logic [PARA_LANES*PARA_DIFF_SUM_WD-1:0] w_group_diff_sum;
  logic w_output_slot_available;
  logic r_output_valid;
  logic [PARA_LANES-1:0] r_group_valid;
  logic [PARA_LANES*PARA_BAND_WD-1:0] r_group_band_index;
  logic [PARA_LANES*PARA_COUNT_WD-1:0] r_group_count;
  logic [PARA_LANES*PARA_DIFF_SUM_WD-1:0] r_group_diff_sum;
  logic [PARA_WORD_X_WD-1:0] r_word_x;
  logic [PARA_ROW_Y_WD-1:0] r_row_y;
  logic [1:0] r_component_id;

  // Six comparisons describe all pairwise band equalities.
  assign w_equal_01 = I_BAND_INDEX[0*PARA_BAND_WD +: PARA_BAND_WD] ==
                      I_BAND_INDEX[1*PARA_BAND_WD +: PARA_BAND_WD];
  assign w_equal_02 = I_BAND_INDEX[0*PARA_BAND_WD +: PARA_BAND_WD] ==
                      I_BAND_INDEX[2*PARA_BAND_WD +: PARA_BAND_WD];
  assign w_equal_03 = I_BAND_INDEX[0*PARA_BAND_WD +: PARA_BAND_WD] ==
                      I_BAND_INDEX[3*PARA_BAND_WD +: PARA_BAND_WD];
  assign w_equal_12 = I_BAND_INDEX[1*PARA_BAND_WD +: PARA_BAND_WD] ==
                      I_BAND_INDEX[2*PARA_BAND_WD +: PARA_BAND_WD];
  assign w_equal_13 = I_BAND_INDEX[1*PARA_BAND_WD +: PARA_BAND_WD] ==
                      I_BAND_INDEX[3*PARA_BAND_WD +: PARA_BAND_WD];
  assign w_equal_23 = I_BAND_INDEX[2*PARA_BAND_WD +: PARA_BAND_WD] ==
                      I_BAND_INDEX[3*PARA_BAND_WD +: PARA_BAND_WD];

  // The equality matrix reuses the six comparators in both directions.
  assign w_equal[0] = {w_equal_03, w_equal_02, w_equal_01, 1'b1};
  assign w_equal[1] = {w_equal_13, w_equal_12, 1'b1, w_equal_01};
  assign w_equal[2] = {w_equal_23, 1'b1, w_equal_12, w_equal_02};
  assign w_equal[3] = {1'b1, w_equal_23, w_equal_13, w_equal_03};

  // A lane leads only if no earlier valid lane has the same band.
  assign w_group_leader[0] = I_LANE_VALID[0];
  assign w_group_leader[1] = I_LANE_VALID[1] &&
                              !(I_LANE_VALID[0] && w_equal_01);
  assign w_group_leader[2] = I_LANE_VALID[2] &&
                              !(I_LANE_VALID[0] && w_equal_02) &&
                              !(I_LANE_VALID[1] && w_equal_12);
  assign w_group_leader[3] = I_LANE_VALID[3] &&
                              !(I_LANE_VALID[0] && w_equal_03) &&
                              !(I_LANE_VALID[1] && w_equal_13) &&
                              !(I_LANE_VALID[2] && w_equal_23);

  // Each candidate leader has one parallel membership and reduction unit.
  for (genvar group_id = 0; group_id < PARA_LANES; group_id++) begin : gen_group
    logic [PARA_LANES-1:0] w_membership;
    logic [1:0] w_count_pair_0;
    logic [1:0] w_count_pair_1;
    logic [PARA_COUNT_WD-1:0] w_count;
    logic signed [PARA_DIFF_SUM_WD-1:0] w_selected_diff [0:PARA_LANES-1];
    logic signed [PARA_DIFF_SUM_WD-1:0] w_sum_pair_0;
    logic signed [PARA_DIFF_SUM_WD-1:0] w_sum_pair_1;
    logic signed [PARA_DIFF_SUM_WD-1:0] w_diff_sum;

    for (genvar lane = 0; lane < PARA_LANES; lane++) begin : gen_lane
      assign w_membership[lane] = w_group_leader[group_id] &&
                                  I_LANE_VALID[lane] &&
                                  w_equal[group_id][lane];

      // Masking replaces an excluded signed difference with zero.
      assign w_selected_diff[lane] = w_membership[lane] ?
        $signed({{(PARA_DIFF_SUM_WD-PARA_DIFF_VALUE_WD){
          I_DIFF_WORD[lane*PARA_SAMPLE_WD+PARA_DIFF_VALUE_WD-1]}},
          I_DIFF_WORD[lane*PARA_SAMPLE_WD +: PARA_DIFF_VALUE_WD]}) : '0;
    end

    // A balanced population-count tree calculates zero through four samples.
    assign w_count_pair_0 = {1'b0, w_membership[0]} +
                            {1'b0, w_membership[1]};
    assign w_count_pair_1 = {1'b0, w_membership[2]} +
                            {1'b0, w_membership[3]};
    assign w_count = {1'b0, w_count_pair_0} +
                     {1'b0, w_count_pair_1};

    // Both adder levels retain the complete signed thirteen-bit range.
    assign w_sum_pair_0 = w_selected_diff[0] + w_selected_diff[1];
    assign w_sum_pair_1 = w_selected_diff[2] + w_selected_diff[3];
    assign w_diff_sum = w_sum_pair_0 + w_sum_pair_1;

    assign w_group_valid[group_id] = w_group_leader[group_id];
    assign w_group_band_index[group_id*PARA_BAND_WD +: PARA_BAND_WD] =
      w_group_leader[group_id] ?
      I_BAND_INDEX[group_id*PARA_BAND_WD +: PARA_BAND_WD] : '0;
    assign w_group_count[group_id*PARA_COUNT_WD +: PARA_COUNT_WD] = w_count;
    assign w_group_diff_sum[group_id*PARA_DIFF_SUM_WD +: PARA_DIFF_SUM_WD] =
      w_diff_sum;
  end

  assign w_output_slot_available = !r_output_valid || I_OUTPUT_READY;
  assign O_INPUT_READY = I_RST_N && !I_CLEAR && w_output_slot_available;

  // Reset or clear invalidates the one-entry output register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_output_valid <= 1'b0;
    else if (I_CLEAR)
      r_output_valid <= 1'b0;
    else if (w_output_slot_available)
      r_output_valid <= I_INPUT_VALID;
  end

  // Payload registers update together only for an accepted input transfer.
  always_ff @(posedge I_CLK) begin
    if (O_INPUT_READY && I_INPUT_VALID) begin
      r_group_valid      <= w_group_valid;
      r_group_band_index <= w_group_band_index;
      r_group_count      <= w_group_count;
      r_group_diff_sum   <= w_group_diff_sum;
      r_word_x           <= I_WORD_X;
      r_row_y            <= I_ROW_Y;
      r_component_id     <= I_COMPONENT_ID;
    end
  end

  assign O_GROUP_VALID      = r_group_valid;
  assign O_GROUP_BAND_INDEX = r_group_band_index;
  assign O_GROUP_COUNT      = r_group_count;
  assign O_GROUP_DIFF_SUM   = r_group_diff_sum;
  assign O_OUTPUT_VALID     = r_output_valid;
  assign O_WORD_X           = r_word_x;
  assign O_ROW_Y            = r_row_y;
  assign O_COMPONENT_ID     = r_component_id;

endmodule: SAO_BO_REDUCTION_ENGINE
