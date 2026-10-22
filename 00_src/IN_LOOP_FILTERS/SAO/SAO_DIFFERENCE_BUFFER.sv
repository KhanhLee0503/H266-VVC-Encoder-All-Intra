//------------------------------------------------------------------------------
// Description: This module delays four signed Original-minus-Reconstructed
//              differences by one complete sample row. One signed 16-bit
//              difference is carried in each 16-bit word slot by default.
//
//              The output difference word aligns with O_CURR_ROW_WORD from
//              SAO_RECON_LINE_BUFFER when both buffers share I_SHIFT_EN,
//              I_CLEAR, I_WORDS_PER_ROW, and the same raster-order input.
//
//              O_CENTER_DIFF_WORD and O_DIFF_VALID are combinational PRE-SHIFT
//              outputs associated with the word accepted on the next rising
//              edge. The shared-window generator must retain the difference
//              word while waiting for the next horizontal neighbor word.
//
//              Only the fill counter is reset. The data shift-register array
//              is intentionally left unreset for FPGA shift-register inference.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_DIFFERENCE_BUFFER #(
  parameter int PARA_WORD_WD           = 64,
  parameter int PARA_MAX_WORDS_PER_ROW = 32
) (
  input                                                        I_CLK,
  input                                                        I_RST_N,
  input                                                        I_CLEAR,
  input                                                        I_SHIFT_EN,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                               I_WORDS_PER_ROW,
  input        [PARA_WORD_WD-1:0]                              I_DIFF_WORD,
  output logic [PARA_WORD_WD-1:0]                              O_CENTER_DIFF_WORD,
  output logic                                                 O_DIFF_VALID
);

  localparam int PARA_ROW_COUNT_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_FILL_COUNT_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);

  logic [PARA_WORD_WD-1:0] r_diff_delay [0:PARA_MAX_WORDS_PER_ROW-1];
  logic [PARA_FILL_COUNT_WD-1:0] r_fill_count;

  logic [PARA_ROW_COUNT_WD-1:0] w_tap_index;
  logic [PARA_FILL_COUNT_WD-1:0] w_fill_target;
  logic [PARA_WORD_WD-1:0] w_center_diff;
  logic w_config_valid;
  logic w_shift_accept;

  assign w_config_valid =
    (I_WORDS_PER_ROW != '0) &&
    (I_WORDS_PER_ROW <= PARA_ROW_COUNT_WD'(PARA_MAX_WORDS_PER_ROW));

  assign w_tap_index = I_WORDS_PER_ROW - PARA_ROW_COUNT_WD'(1);
  assign w_fill_target = PARA_FILL_COUNT_WD'(I_WORDS_PER_ROW);
  assign w_shift_accept = I_RST_N && !I_CLEAR && I_SHIFT_EN && w_config_valid;

  always_comb begin
    w_center_diff = '0;

    if (w_config_valid)
      w_center_diff = r_diff_delay[w_tap_index];
  end

  assign O_CENTER_DIFF_WORD = w_center_diff;

  // The difference word becomes usable after one complete input row.
  assign O_DIFF_VALID = w_shift_accept && (r_fill_count >= w_fill_target);

  always_ff @(posedge I_CLK) begin
    if (w_shift_accept) begin
      for (int i = PARA_MAX_WORDS_PER_ROW-1; i > 0; i--)
        r_diff_delay[i] <= r_diff_delay[i-1];

      r_diff_delay[0] <= I_DIFF_WORD;
    end
  end

  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_fill_count <= '0;
    else if (I_CLEAR)
      r_fill_count <= '0;
    else if (w_shift_accept && (r_fill_count < w_fill_target))
      r_fill_count <= r_fill_count + PARA_FILL_COUNT_WD'(1);
  end

endmodule: SAO_DIFFERENCE_BUFFER
