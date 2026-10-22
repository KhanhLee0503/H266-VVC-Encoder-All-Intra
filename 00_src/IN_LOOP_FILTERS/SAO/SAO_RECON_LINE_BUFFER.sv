//------------------------------------------------------------------------------
// Description: This module aligns three reconstructed sample rows for the SAO
//              shared window using two cascaded, full-row shift-register
//              delays. Each accepted transaction carries four 16-bit sample
//              slots in one 64-bit word by default.
//
//              The row length is configured in words (32 for 128-wide luma,
//              16 for 64-wide 4:2:0 chroma). The input word, the first delay
//              tap, and the second delay tap correspond to the same horizontal
//              word index in three consecutive rows.
//
//              Output words and O_ROWS_VALID are combinational PRE-SHIFT taps.
//              They describe the input transaction about to be accepted at
//              the next rising clock edge. I_SHIFT_EN is the common acceptance
//              strobe for this buffer, the difference buffer, and the window
//              consumer. Outputs are not a buffered ready/valid interface.
//
//              I_CLEAR starts a new independent component or CTU. Keep
//              I_WORDS_PER_ROW stable from I_CLEAR until the next I_CLEAR.
//              Data shift registers are intentionally not reset so that FPGA
//              shift-register inference remains possible. Invalid old data
//              is suppressed by the fill counter and O_ROWS_VALID.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_RECON_LINE_BUFFER #(
  parameter int PARA_WORD_WD           = 64,
  parameter int PARA_MAX_WORDS_PER_ROW = 32
) (
  input                                                        I_CLK,
  input                                                        I_RST_N,
  input                                                        I_CLEAR,
  input                                                        I_SHIFT_EN,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                               I_WORDS_PER_ROW,
  input        [PARA_WORD_WD-1:0]                              I_RECON_WORD,
  output logic [PARA_WORD_WD-1:0]                              O_PREV_ROW_WORD,
  output logic [PARA_WORD_WD-1:0]                              O_CURR_ROW_WORD,
  output logic [PARA_WORD_WD-1:0]                              O_NEXT_ROW_WORD,
  output logic                                                 O_ROWS_VALID
);

  localparam int PARA_ROW_COUNT_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_FILL_COUNT_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 2 : $clog2(2 * PARA_MAX_WORDS_PER_ROW + 1);

  logic [PARA_WORD_WD-1:0] r_delay_chain1 [0:PARA_MAX_WORDS_PER_ROW-1];
  logic [PARA_WORD_WD-1:0] r_delay_chain2 [0:PARA_MAX_WORDS_PER_ROW-1];
  logic [PARA_FILL_COUNT_WD-1:0] r_fill_count;

  logic [PARA_ROW_COUNT_WD-1:0] w_tap_index;
  logic [PARA_FILL_COUNT_WD-1:0] w_fill_target;
  logic [PARA_WORD_WD-1:0] w_chain1_tap;
  logic [PARA_WORD_WD-1:0] w_chain2_tap;
  logic w_config_valid;
  logic w_shift_accept;

  // The active tap selects a full-row delay of I_WORDS_PER_ROW transactions.
  assign w_config_valid =
    (I_WORDS_PER_ROW != '0) &&
    (I_WORDS_PER_ROW <= PARA_ROW_COUNT_WD'(PARA_MAX_WORDS_PER_ROW));

  assign w_tap_index = I_WORDS_PER_ROW - PARA_ROW_COUNT_WD'(1);
  assign w_fill_target = PARA_FILL_COUNT_WD'(I_WORDS_PER_ROW) << 1;
  assign w_shift_accept = I_RST_N && !I_CLEAR && I_SHIFT_EN && w_config_valid;

  always_comb begin
    w_chain1_tap = '0;
    w_chain2_tap = '0;

    if (w_config_valid) begin
      w_chain1_tap = r_delay_chain1[w_tap_index];
      w_chain2_tap = r_delay_chain2[w_tap_index];
    end
  end

  assign O_NEXT_ROW_WORD = I_RECON_WORD;
  assign O_CURR_ROW_WORD = w_chain1_tap;
  assign O_PREV_ROW_WORD = w_chain2_tap;

  // A triple-row transaction becomes valid after two complete row delays.
  assign O_ROWS_VALID = w_shift_accept && (r_fill_count >= w_fill_target);

  // Data shifts are enabled but never reset, preserving SRL inference options.
  always_ff @(posedge I_CLK) begin
    if (w_shift_accept) begin
      for (int i = PARA_MAX_WORDS_PER_ROW-1; i > 0; i--) begin
        r_delay_chain1[i] <= r_delay_chain1[i-1];
        r_delay_chain2[i] <= r_delay_chain2[i-1];
      end

      r_delay_chain1[0] <= I_RECON_WORD;
      r_delay_chain2[0] <= w_chain1_tap;
    end
  end

  // The saturating fill count prevents stale array contents being observed.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_fill_count <= '0;
    else if (I_CLEAR)
      r_fill_count <= '0;
    else if (w_shift_accept && (r_fill_count < w_fill_target))
      r_fill_count <= r_fill_count + PARA_FILL_COUNT_WD'(1);
  end

endmodule: SAO_RECON_LINE_BUFFER
