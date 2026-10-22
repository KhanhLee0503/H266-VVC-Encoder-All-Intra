//------------------------------------------------------------------------------
// Description: This module classifies four post-deblocking reconstructed
//              samples into the 32 Sample Adaptive Offset band categories.
//              Each input word contains four unsigned 10-bit pixel values in
//              16-bit slots and four aligned signed differences in 16-bit
//              slots. Each band index is the five most significant bits of
//              the active pixel bit depth.
//
//              The module forwards the four band indices, differences, lane
//              valid mask, and position metadata through one elastic output
//              register. It does not accumulate or merge samples that belong
//              to the same band. That work belongs to the BO reduction stage.
//
//              I_INPUT_VALID must describe an accepted-transfer strobe from
//              SAO_SAMPLE_ALIGNMENT_BUFFER. The upstream controller must
//              prohibit the transfer whenever O_INPUT_READY is low.
//              Synchronous I_CLEAR discards an output that is in flight.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_BO_CLASSIFIER_4LANE #(
  parameter int PARA_SAMPLE_WD         = 16,
  parameter int PARA_PIXEL_BIT_DEPTH   = 10,
  parameter int PARA_LANES             = 4,
  parameter int PARA_MAX_WORDS_PER_ROW = 32,
  parameter int PARA_MAX_ROWS          = 128
) (
  input                                                                     I_CLK,
  input                                                                     I_RST_N,
  input                                                                     I_CLEAR,
  input                                                                     I_INPUT_VALID,
  output logic                                                              O_INPUT_READY,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_RECON_WORD,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_DIFF_WORD,
  input        [PARA_LANES-1:0]                                             I_LANE_VALID,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            I_WORD_X,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_ROW_Y,
  input        [1:0]                                                        I_COMPONENT_ID,
  output logic [PARA_LANES*5-1:0]                                           O_BAND_INDEX,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_DIFF_WORD,
  output logic [PARA_LANES-1:0]                                             O_LANE_VALID,
  output logic                                                              O_OUTPUT_VALID,
  input                                                                     I_OUTPUT_READY,
  output logic [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            O_WORD_X,
  output logic [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] O_ROW_Y,
  output logic [1:0]                                                        O_COMPONENT_ID
);

  localparam int PARA_BAND_WD = 5;
  localparam int PARA_BAND_SHIFT = PARA_PIXEL_BIT_DEPTH - PARA_BAND_WD;
  localparam int PARA_WORD_WD = PARA_LANES * PARA_SAMPLE_WD;
  localparam int PARA_WORD_X_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_ROW_Y_WD =
    (PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1);

  logic [PARA_LANES*PARA_BAND_WD-1:0] w_band_index;
  logic w_output_slot_available;
  logic r_output_valid;
  logic [PARA_LANES*PARA_BAND_WD-1:0] r_band_index;
  logic [PARA_WORD_WD-1:0] r_diff_word;
  logic [PARA_LANES-1:0] r_lane_valid;
  logic [PARA_WORD_X_WD-1:0] r_word_x;
  logic [PARA_ROW_Y_WD-1:0] r_row_y;
  logic [1:0] r_component_id;

  // For a 10-bit pixel, bits [9:5] directly encode one of 32 bands.
  for (genvar lane = 0; lane < PARA_LANES; lane++) begin : gen_band_select
    assign w_band_index[lane*PARA_BAND_WD +: PARA_BAND_WD] =
      I_RECON_WORD[lane*PARA_SAMPLE_WD+PARA_BAND_SHIFT +: PARA_BAND_WD];
  end

  assign w_output_slot_available = !r_output_valid || I_OUTPUT_READY;
  assign O_INPUT_READY = I_RST_N && !I_CLEAR && w_output_slot_available;

  // The valid bit advances only when the output register can accept data.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_output_valid <= 1'b0;
    else if (I_CLEAR)
      r_output_valid <= 1'b0;
    else if (w_output_slot_available)
      r_output_valid <= I_INPUT_VALID;
  end

  // Payload registers do not require reset because valid qualifies them.
  always_ff @(posedge I_CLK) begin
    if (O_INPUT_READY && I_INPUT_VALID) begin
      r_band_index   <= w_band_index;
      r_diff_word    <= I_DIFF_WORD;
      r_lane_valid   <= I_LANE_VALID;
      r_word_x       <= I_WORD_X;
      r_row_y        <= I_ROW_Y;
      r_component_id <= I_COMPONENT_ID;
    end
  end

  assign O_BAND_INDEX   = r_band_index;
  assign O_DIFF_WORD    = r_diff_word;
  assign O_LANE_VALID   = r_lane_valid;
  assign O_OUTPUT_VALID = r_output_valid;
  assign O_WORD_X       = r_word_x;
  assign O_ROW_Y        = r_row_y;
  assign O_COMPONENT_ID = r_component_id;

endmodule: SAO_BO_CLASSIFIER_4LANE
