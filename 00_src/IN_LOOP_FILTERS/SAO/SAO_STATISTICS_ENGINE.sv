//------------------------------------------------------------------------------
// Description: This module integrates the four-lane Band Offset reduction
//              engine, the four-lane Edge Offset reduction engine, and the
//              shared forty-eight-entry Sample Adaptive Offset statistics
//              bank. BO and EO inputs have independent ready/valid handshakes
//              and can be accepted during the same clock cycle.
//
//              Each reduction engine has one elastic output register. Its
//              output transfers directly into the statistics bank. The bank
//              contains thirty-two BO and sixteen EO count/difference-sum
//              accumulators and offers a registered sequential read port.
//
//              A synchronous clear flushes both reduction registers and
//              initializes the statistics bank. The controller must complete
//              upstream classification and window drain, keep collection
//              enabled, then wait for O_COLLECT_DRAINED before reading.
//              I_SOURCE_DRAINED qualifies that upstream-drain condition.
//
//              The component selection and Cb-to-Cr SAO mode inheritance are
//              handled by an external controller and RDO engine, not here.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_STATISTICS_ENGINE #(
  parameter int PARA_SAMPLE_WD         = 16,
  parameter int PARA_MAX_WORDS_PER_ROW = 32,
  parameter int PARA_MAX_ROWS          = 128
) (
  input                                                                    I_CLK,
  input                                                                    I_RST_N,
  input                                                                    I_CLEAR,
  input                                                                    I_COLLECT_ENABLE,
  input                                                                    I_SOURCE_DRAINED,

  input        [19:0]                                                      I_BO_BAND_INDEX,
  input        [4*PARA_SAMPLE_WD-1:0]                                      I_BO_DIFF_WORD,
  input        [3:0]                                                       I_BO_LANE_VALID,
  input                                                                    I_BO_INPUT_VALID,
  output logic                                                             O_BO_INPUT_READY,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                           I_BO_WORD_X,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_BO_ROW_Y,
  input        [1:0]                                                       I_BO_COMPONENT_ID,

  input        [47:0]                                                      I_EO_CATEGORY,
  input        [4*PARA_SAMPLE_WD-1:0]                                      I_EO_DIFF_WORD,
  input        [3:0]                                                       I_EO_LANE_VALID,
  input                                                                    I_EO_INPUT_VALID,
  output logic                                                             O_EO_INPUT_READY,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                           I_EO_WORD_X,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_EO_CENTER_Y,
  input        [1:0]                                                       I_EO_COMPONENT_ID,

  input                                                                    I_READ_VALID,
  output logic                                                             O_READ_READY,
  input        [5:0]                                                       I_READ_ADDR,
  output logic                                                             O_READ_VALID,
  input                                                                    I_READ_READY,
  output logic [5:0]                                                       O_READ_ADDR,
  output logic [14:0]                                                      O_READ_COUNT,
  output logic [25:0]                                                      O_READ_DIFF_SUM,
  output logic                                                             O_READ_ERROR,
  output logic                                                             O_INITIALIZED,
  output logic                                                             O_COLLECT_DRAINED
);

  logic w_collect_accept_enable;
  logic w_bo_reduce_input_ready;
  logic w_bo_reduce_output_valid;
  logic w_bo_bank_input_ready;
  logic [3:0] w_bo_group_valid;
  logic [19:0] w_bo_group_band_index;
  logic [11:0] w_bo_group_count;
  logic [51:0] w_bo_group_diff_sum;

  logic w_eo_reduce_input_ready;
  logic w_eo_reduce_output_valid;
  logic w_eo_bank_input_ready;
  logic [15:0] w_eo_category_valid;
  logic [47:0] w_eo_count_delta;
  logic [207:0] w_eo_diff_sum_delta;

  // Inputs enter their reduction register only during an initialized
  // collection phase. Both branches are independently backpressured.
  assign w_collect_accept_enable = I_COLLECT_ENABLE && O_INITIALIZED &&
                                   I_RST_N && !I_CLEAR;
  assign O_BO_INPUT_READY = w_collect_accept_enable && w_bo_reduce_input_ready;
  assign O_EO_INPUT_READY = w_collect_accept_enable && w_eo_reduce_input_ready;

  SAO_BO_REDUCTION_ENGINE #(
    .PARA_SAMPLE_WD         (PARA_SAMPLE_WD),
    .PARA_MAX_WORDS_PER_ROW (PARA_MAX_WORDS_PER_ROW),
    .PARA_MAX_ROWS          (PARA_MAX_ROWS)
  ) u_sao_bo_reduction_engine (
    .I_CLK                  (I_CLK),
    .I_RST_N                (I_RST_N),
    .I_CLEAR                (I_CLEAR),
    .I_BAND_INDEX           (I_BO_BAND_INDEX),
    .I_DIFF_WORD            (I_BO_DIFF_WORD),
    .I_LANE_VALID           (I_BO_LANE_VALID),
    .I_INPUT_VALID          (I_BO_INPUT_VALID && w_collect_accept_enable),
    .O_INPUT_READY          (w_bo_reduce_input_ready),
    .I_WORD_X               (I_BO_WORD_X),
    .I_ROW_Y                (I_BO_ROW_Y),
    .I_COMPONENT_ID         (I_BO_COMPONENT_ID),
    .O_GROUP_VALID          (w_bo_group_valid),
    .O_GROUP_BAND_INDEX     (w_bo_group_band_index),
    .O_GROUP_COUNT          (w_bo_group_count),
    .O_GROUP_DIFF_SUM       (w_bo_group_diff_sum),
    .O_OUTPUT_VALID         (w_bo_reduce_output_valid),
    .I_OUTPUT_READY         (w_bo_bank_input_ready),
    .O_WORD_X               (),
    .O_ROW_Y                (),
    .O_COMPONENT_ID         ()
  );

  SAO_EO_REDUCTION_ENGINE #(
    .PARA_SAMPLE_WD         (PARA_SAMPLE_WD),
    .PARA_MAX_WORDS_PER_ROW (PARA_MAX_WORDS_PER_ROW),
    .PARA_MAX_ROWS          (PARA_MAX_ROWS)
  ) u_sao_eo_reduction_engine (
    .I_CLK                  (I_CLK),
    .I_RST_N                (I_RST_N),
    .I_CLEAR                (I_CLEAR),
    .I_EO_CATEGORY          (I_EO_CATEGORY),
    .I_DIFF_WORD            (I_EO_DIFF_WORD),
    .I_LANE_VALID           (I_EO_LANE_VALID),
    .I_INPUT_VALID          (I_EO_INPUT_VALID && w_collect_accept_enable),
    .O_INPUT_READY          (w_eo_reduce_input_ready),
    .I_WORD_X               (I_EO_WORD_X),
    .I_CENTER_Y             (I_EO_CENTER_Y),
    .I_COMPONENT_ID         (I_EO_COMPONENT_ID),
    .O_CATEGORY_VALID       (w_eo_category_valid),
    .O_COUNT_DELTA          (w_eo_count_delta),
    .O_DIFF_SUM_DELTA       (w_eo_diff_sum_delta),
    .O_OUTPUT_VALID         (w_eo_reduce_output_valid),
    .I_OUTPUT_READY         (w_eo_bank_input_ready),
    .O_WORD_X               (),
    .O_CENTER_Y             (),
    .O_COMPONENT_ID         ()
  );

  SAO_STATISTICS_BANK u_sao_statistics_bank (
    .I_CLK                  (I_CLK),
    .I_RST_N                (I_RST_N),
    .I_CLEAR                (I_CLEAR),
    .I_COLLECT_ENABLE       (I_COLLECT_ENABLE),
    .I_BO_GROUP_VALID       (w_bo_group_valid),
    .I_BO_GROUP_BAND_INDEX  (w_bo_group_band_index),
    .I_BO_GROUP_COUNT       (w_bo_group_count),
    .I_BO_GROUP_DIFF_SUM    (w_bo_group_diff_sum),
    .I_BO_INPUT_VALID       (w_bo_reduce_output_valid),
    .O_BO_INPUT_READY       (w_bo_bank_input_ready),
    .I_EO_CATEGORY_VALID    (w_eo_category_valid),
    .I_EO_COUNT_DELTA       (w_eo_count_delta),
    .I_EO_DIFF_SUM_DELTA    (w_eo_diff_sum_delta),
    .I_EO_INPUT_VALID       (w_eo_reduce_output_valid),
    .O_EO_INPUT_READY       (w_eo_bank_input_ready),
    .I_READ_VALID           (I_READ_VALID),
    .O_READ_READY           (O_READ_READY),
    .I_READ_ADDR            (I_READ_ADDR),
    .O_READ_VALID           (O_READ_VALID),
    .I_READ_READY           (I_READ_READY),
    .O_READ_ADDR            (O_READ_ADDR),
    .O_READ_COUNT           (O_READ_COUNT),
    .O_READ_DIFF_SUM        (O_READ_DIFF_SUM),
    .O_READ_ERROR           (O_READ_ERROR),
    .O_INITIALIZED          (O_INITIALIZED)
  );

  // This status is meaningful only after both upstream classifiers and the
  // shared window generator report that no further transfers are pending.
  // The last reduction contribution is applied at the same clock edge that
  // consumes its registered output; the status becomes true afterwards.
  assign O_COLLECT_DRAINED = w_collect_accept_enable && I_SOURCE_DRAINED &&
                             !I_BO_INPUT_VALID && !I_EO_INPUT_VALID &&
                             !w_bo_reduce_output_valid &&
                             !w_eo_reduce_output_valid;

endmodule: SAO_STATISTICS_ENGINE
