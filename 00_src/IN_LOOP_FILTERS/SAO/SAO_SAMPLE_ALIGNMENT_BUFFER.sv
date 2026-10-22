//------------------------------------------------------------------------------
// Description: This module synchronizes a reconstructed word from the DBF
//              output buffer with the original word at the same raster
//              coordinates. Four unsigned sample pairs are subtracted in
//              parallel to form signed Original-minus-Reconstructed values.
//
//              The module instantiates SAO_RECON_LINE_BUFFER and
//              SAO_DIFFERENCE_BUFFER. Both shift only on one common accepted
//              transfer. Their combinational pre-shift taps therefore remain
//              aligned at the shared-window input.
//
//              The paired input streams must each obey ready/valid holding
//              rules and must deliver words in the same raster order. This
//              module joins matching positions by sequence; it does not
//              contain independent input FIFOs or compare source tags.
//
//              O_INPUT_VALID and O_ALIGNED_VALID are accepted-transfer
//              strobes, not registered elastic output-valid signals. Consume
//              their payload on the rising edge at which they are asserted.
//              The downstream I_WINDOW_READY means that the window pipeline
//              can advance, including while the row-delay lines are filling.
//
//              I_CLEAR synchronously starts a new CTU component. Hold the
//              word/row configuration and component ID constant until done.
//              O_COMPONENT_DONE holds high after the final accepted input
//              word until I_CLEAR. End-of-row and end-of-CTU window flushes
//              are the responsibility of SAO_SHARED_WINDOW_GENERATOR.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_SAMPLE_ALIGNMENT_BUFFER #(
  parameter int PARA_SAMPLE_WD         = 16,
  parameter int PARA_PIXEL_BIT_DEPTH   = 10,
  parameter int PARA_LANES             = 4,
  parameter int PARA_MAX_WORDS_PER_ROW = 32,
  parameter int PARA_MAX_ROWS          = 128
) (
  input                                                                     I_CLK,
  input                                                                     I_RST_N,
  input                                                                     I_CLEAR,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            I_WORDS_PER_ROW,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_ACTIVE_ROWS,
  input        [1:0]                                                        I_COMPONENT_ID,
  input                                                                     I_RECON_VALID,
  output logic                                                              O_RECON_READY,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_RECON_WORD,
  input                                                                     I_ORIGINAL_VALID,
  output logic                                                              O_ORIGINAL_READY,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_ORIGINAL_WORD,
  input                                                                     I_WINDOW_READY,
  output logic                                                              O_INPUT_VALID,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_INPUT_RECON_WORD,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_INPUT_DIFF_WORD,
  output logic [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            O_INPUT_WORD_X,
  output logic [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] O_INPUT_Y,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_PREV_ROW_WORD,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_CURR_ROW_WORD,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_NEXT_ROW_WORD,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_CENTER_DIFF_WORD,
  output logic                                                              O_ALIGNED_VALID,
  output logic [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            O_WORD_X,
  output logic [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] O_CENTER_Y,
  output logic                                                              O_ROW_START,
  output logic                                                              O_ROW_END,
  output logic [1:0]                                                        O_COMPONENT_ID,
  output logic                                                              O_COMPONENT_DONE
);

  localparam int PARA_WORD_WD = PARA_LANES * PARA_SAMPLE_WD;
  localparam int PARA_WORD_COUNT_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_ROW_COUNT_WD =
    (PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1);
  localparam int PARA_DIFF_WD = PARA_PIXEL_BIT_DEPTH + 1;

  logic [PARA_WORD_COUNT_WD-1:0] r_word_x;
  logic [PARA_ROW_COUNT_WD-1:0] r_input_y;
  logic r_component_done;

  logic [PARA_WORD_WD-1:0] w_diff_word;
  logic [PARA_WORD_WD-1:0] w_prev_row_word;
  logic [PARA_WORD_WD-1:0] w_curr_row_word;
  logic [PARA_WORD_WD-1:0] w_next_row_word;
  logic [PARA_WORD_WD-1:0] w_center_diff_word;
  logic w_config_valid;
  logic w_can_advance;
  logic w_input_accept;
  logic w_recon_rows_valid;
  logic w_center_diff_valid;
  logic w_aligned_valid;
  logic w_last_word;
  logic w_last_row;

  assign w_config_valid =
    (I_WORDS_PER_ROW != '0) &&
    (I_WORDS_PER_ROW <= PARA_WORD_COUNT_WD'(PARA_MAX_WORDS_PER_ROW)) &&
    (I_ACTIVE_ROWS != '0) &&
    (I_ACTIVE_ROWS <= PARA_ROW_COUNT_WD'(PARA_MAX_ROWS));

  assign w_can_advance =
    I_RST_N && !I_CLEAR && !r_component_done && w_config_valid &&
    I_WINDOW_READY;

  // Each source is accepted only when its peer is valid in the same cycle.
  assign O_RECON_READY    = w_can_advance && I_ORIGINAL_VALID;
  assign O_ORIGINAL_READY = w_can_advance && I_RECON_VALID;
  assign w_input_accept   = I_RECON_VALID && I_ORIGINAL_VALID && w_can_advance;

  // Both delay buffers observe the same transaction acceptance pulse.
  SAO_RECON_LINE_BUFFER #(
    .PARA_WORD_WD          (PARA_WORD_WD),
    .PARA_MAX_WORDS_PER_ROW(PARA_MAX_WORDS_PER_ROW)
  ) u_recon_line_buffer (
    .I_CLK          (I_CLK),
    .I_RST_N        (I_RST_N),
    .I_CLEAR        (I_CLEAR),
    .I_SHIFT_EN     (w_input_accept),
    .I_WORDS_PER_ROW(I_WORDS_PER_ROW),
    .I_RECON_WORD   (I_RECON_WORD),
    .O_PREV_ROW_WORD(w_prev_row_word),
    .O_CURR_ROW_WORD(w_curr_row_word),
    .O_NEXT_ROW_WORD(w_next_row_word),
    .O_ROWS_VALID   (w_recon_rows_valid)
  );

  SAO_DIFFERENCE_BUFFER #(
    .PARA_WORD_WD          (PARA_WORD_WD),
    .PARA_MAX_WORDS_PER_ROW(PARA_MAX_WORDS_PER_ROW)
  ) u_difference_buffer (
    .I_CLK             (I_CLK),
    .I_RST_N           (I_RST_N),
    .I_CLEAR           (I_CLEAR),
    .I_SHIFT_EN        (w_input_accept),
    .I_WORDS_PER_ROW   (I_WORDS_PER_ROW),
    .I_DIFF_WORD       (w_diff_word),
    .O_CENTER_DIFF_WORD(w_center_diff_word),
    .O_DIFF_VALID      (w_center_diff_valid)
  );

  // The extra difference sign bit prevents unsigned subtraction wraparound.
  for (genvar lane = 0; lane < PARA_LANES; lane++) begin : gen_diff_lanes
    logic signed [PARA_DIFF_WD-1:0] w_original_ext;
    logic signed [PARA_DIFF_WD-1:0] w_recon_ext;
    logic signed [PARA_DIFF_WD-1:0] w_sample_diff;

    assign w_original_ext =
      $signed({1'b0, I_ORIGINAL_WORD[lane*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH]});
    assign w_recon_ext =
      $signed({1'b0, I_RECON_WORD[lane*PARA_SAMPLE_WD +: PARA_PIXEL_BIT_DEPTH]});
    assign w_sample_diff = w_original_ext - w_recon_ext;

    assign w_diff_word[lane*PARA_SAMPLE_WD +: PARA_SAMPLE_WD] =
      {{(PARA_SAMPLE_WD-PARA_DIFF_WD){w_sample_diff[PARA_DIFF_WD-1]}},
       w_sample_diff};
  end

  // Both output streams describe the current accepted input word, before shift.
  assign O_INPUT_VALID       = w_input_accept;
  assign O_INPUT_RECON_WORD  = I_RECON_WORD;
  assign O_INPUT_DIFF_WORD   = w_diff_word;
  assign O_INPUT_WORD_X      = r_word_x;
  assign O_INPUT_Y           = r_input_y;
  assign O_PREV_ROW_WORD     = w_prev_row_word;
  assign O_CURR_ROW_WORD     = w_curr_row_word;
  assign O_NEXT_ROW_WORD     = w_next_row_word;
  assign O_CENTER_DIFF_WORD  = w_center_diff_word;
  assign w_aligned_valid     = w_recon_rows_valid && w_center_diff_valid;
  assign O_ALIGNED_VALID     = w_aligned_valid;
  assign O_WORD_X            = r_word_x;
  assign O_CENTER_Y          = w_aligned_valid ?
    r_input_y - PARA_ROW_COUNT_WD'(1) : '0;
  assign O_ROW_START         = w_aligned_valid && (r_word_x == '0);
  assign O_ROW_END           = w_aligned_valid && w_last_word;
  assign O_COMPONENT_ID      = I_COMPONENT_ID;
  assign O_COMPONENT_DONE    = r_component_done;

  assign w_last_word =
    (r_word_x == (I_WORDS_PER_ROW - PARA_WORD_COUNT_WD'(1)));
  assign w_last_row =
    (r_input_y == (I_ACTIVE_ROWS - PARA_ROW_COUNT_WD'(1)));

  // Input counters are advanced only when BOTH sources are accepted.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_word_x        <= '0;
      r_input_y       <= '0;
      r_component_done <= 1'b0;
    end
    else if (I_CLEAR) begin
      r_word_x        <= '0;
      r_input_y       <= '0;
      r_component_done <= 1'b0;
    end
    else if (w_input_accept) begin
      if (w_last_word) begin
        r_word_x <= '0;

        if (w_last_row)
          r_component_done <= 1'b1;
        else
          r_input_y <= r_input_y + PARA_ROW_COUNT_WD'(1);
      end
      else begin
        r_word_x <= r_word_x + PARA_WORD_COUNT_WD'(1);
      end
    end
  end

endmodule: SAO_SAMPLE_ALIGNMENT_BUFFER
