//------------------------------------------------------------------------------
// Description: This module assembles one shared 3-by-6 SAO neighborhood for
//              four horizontally adjacent center samples. Three aligned
//              reconstructed words and the corresponding center differences
//              arrive as pre-shift, accepted-transfer strobes from the SAO
//              sample alignment buffer.
//
//              One 64-bit current word per row, one 16-bit left halo per row,
//              and one 64-bit current difference word are stored. The next
//              accepted triple-row word supplies the right halo. At the last
//              word of each row, the pending group is flushed without reading
//              a right neighbor from the next row.
//
//              The output has a one-entry elastic register. Its window,
//              differences, coordinates, component ID, and lane mask remain
//              stable while valid is high and ready is low. O_INPUT_READY
//              directly drives the alignment buffer's I_WINDOW_READY.
//
//              The window is flattened in row-major order. The least
//              significant sample is row 0 / column 0 (previous-row left
//              halo), followed by columns 1 through 5 and rows 1 and 2.
//              I_CLEAR synchronously discards pending and output groups.
//
//              Only interior-of-CTU EO statistics are supported here. The
//              invalid boundary samples are still carried in the window;
//              O_LANE_VALID masks center samples at the left/right edges.
//              CTU-neighbor halo handling for standards-compliant EO apply
//              is intentionally outside the scope of this module.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_SHARED_WINDOW_GENERATOR #(
  parameter int PARA_SAMPLE_WD          = 16,
  parameter int PARA_LANES              = 4,
  parameter int PARA_MAX_WORDS_PER_ROW  = 32,
  parameter int PARA_MAX_ROWS           = 128
) (
  input                                                                     I_CLK,
  input                                                                     I_RST_N,
  input                                                                     I_CLEAR,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_PREV_ROW_WORD,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_CURR_ROW_WORD,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_NEXT_ROW_WORD,
  input        [PARA_LANES*PARA_SAMPLE_WD-1:0]                              I_CENTER_DIFF_WORD,
  input                                                                     I_ALIGNED_VALID,
  input        [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            I_WORD_X,
  input        [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] I_CENTER_Y,
  input                                                                     I_ROW_START,
  input                                                                     I_ROW_END,
  input        [1:0]                                                        I_COMPONENT_ID,
  input                                                                     I_COMPONENT_DONE,
  output logic                                                              O_INPUT_READY,
  output logic [3*(PARA_LANES+2)*PARA_SAMPLE_WD-1:0]                        O_SHARED_WINDOW,
  output logic [PARA_LANES*PARA_SAMPLE_WD-1:0]                              O_CENTER_DIFF_WORD,
  output logic [PARA_LANES-1:0]                                             O_LANE_VALID,
  output logic                                                              O_WINDOW_VALID,
  input                                                                     I_OUTPUT_READY,
  output logic [((PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1))-1:0]
                                                                            O_WORD_X,
  output logic [((PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1))-1:0] O_CENTER_Y,
  output logic [1:0]                                                        O_COMPONENT_ID,
  output logic                                                              O_DRAIN_DONE
);

  localparam int PARA_WORD_WD = PARA_LANES * PARA_SAMPLE_WD;
  localparam int PARA_COLS = PARA_LANES + 2;
  localparam int PARA_WINDOW_WD = 3 * PARA_COLS * PARA_SAMPLE_WD;
  localparam int PARA_WORD_X_WD =
    (PARA_MAX_WORDS_PER_ROW <= 1) ? 1 : $clog2(PARA_MAX_WORDS_PER_ROW + 1);
  localparam int PARA_ROW_Y_WD =
    (PARA_MAX_ROWS <= 1) ? 1 : $clog2(PARA_MAX_ROWS + 1);

  logic [PARA_WORD_WD-1:0] r_current_words [0:2];
  logic [PARA_SAMPLE_WD-1:0] r_left_halo [0:2];
  logic [PARA_WORD_WD-1:0] r_current_diff_word;
  logic [PARA_WORD_X_WD-1:0] r_word_x;
  logic [PARA_ROW_Y_WD-1:0] r_center_y;
  logic [1:0] r_component_id;
  logic r_pending_valid;
  logic r_pending_last_word;
  logic r_left_halo_valid;

  logic [PARA_WORD_WD-1:0] w_input_words [0:2];
  logic [PARA_WINDOW_WD-1:0] w_window;
  logic [PARA_LANES-1:0] w_lane_valid;
  logic w_output_slot_available;
  logic w_input_accept;
  logic w_emit;
  logic w_right_halo_valid;

  logic [PARA_WINDOW_WD-1:0] r_output_window;
  logic [PARA_WORD_WD-1:0] r_output_diff_word;
  logic [PARA_LANES-1:0] r_output_lane_valid;
  logic [PARA_WORD_X_WD-1:0] r_output_word_x;
  logic [PARA_ROW_Y_WD-1:0] r_output_center_y;
  logic [1:0] r_output_component_id;
  logic r_output_valid;

  assign w_input_words[0] = I_PREV_ROW_WORD;
  assign w_input_words[1] = I_CURR_ROW_WORD;
  assign w_input_words[2] = I_NEXT_ROW_WORD;

  assign w_output_slot_available = !r_output_valid || I_OUTPUT_READY;
  assign O_INPUT_READY = I_RST_N && !I_CLEAR && !I_COMPONENT_DONE &&
                         w_output_slot_available;
  assign w_input_accept = I_ALIGNED_VALID && O_INPUT_READY;

  // A row-end group may be emitted without another aligned input word.
  assign w_emit = I_RST_N && !I_CLEAR && w_output_slot_available &&
                  r_pending_valid && (r_pending_last_word || w_input_accept);
  assign w_right_halo_valid = !r_pending_last_word && w_input_accept &&
                              !I_ROW_START;

  // Window payloads use the pending group and the current input as lookahead.
  // The right halo is zero-padded when no valid neighbor is available.
  always_comb begin
    w_window = '0;

    for (int row = 0; row < 3; row++) begin
      w_window[(row*PARA_COLS)*PARA_SAMPLE_WD +: PARA_SAMPLE_WD] =
        r_left_halo_valid ? r_left_halo[row] : '0;

      for (int lane = 0; lane < PARA_LANES; lane++) begin
        w_window[(row*PARA_COLS+lane+1)*PARA_SAMPLE_WD +: PARA_SAMPLE_WD] =
          r_current_words[row][lane*PARA_SAMPLE_WD +: PARA_SAMPLE_WD];
      end

      w_window[(row*PARA_COLS+PARA_LANES+1)*PARA_SAMPLE_WD +: PARA_SAMPLE_WD] =
        w_right_halo_valid ? w_input_words[row][0 +: PARA_SAMPLE_WD] : '0;
    end
  end

  // For interior-only EO statistics, the first and last sample in a row
  // cannot be classified without an external CTU neighbor.
  always_comb begin
    w_lane_valid = '1;
    w_lane_valid[0] = r_left_halo_valid;
    w_lane_valid[PARA_LANES-1] = w_right_halo_valid;
  end

  // Pending group holds until it is emitted, including during backpressure.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_pending_valid     <= 1'b0;
      r_pending_last_word <= 1'b0;
      r_left_halo_valid   <= 1'b0;
      r_word_x           <= '0;
      r_center_y         <= '0;
      r_component_id     <= '0;
    end
    else if (I_CLEAR) begin
      r_pending_valid     <= 1'b0;
      r_pending_last_word <= 1'b0;
      r_left_halo_valid   <= 1'b0;
      r_word_x           <= '0;
      r_center_y         <= '0;
      r_component_id     <= '0;
    end
    else if (w_input_accept) begin
      r_pending_valid     <= 1'b1;
      r_pending_last_word <= I_ROW_END;
      r_word_x           <= I_WORD_X;
      r_center_y         <= I_CENTER_Y;
      r_component_id     <= I_COMPONENT_ID;

      if (I_ROW_START || !r_pending_valid || r_pending_last_word)
        r_left_halo_valid <= 1'b0;
      else
        r_left_halo_valid <= 1'b1;
    end
    else if (w_emit) begin
      r_pending_valid     <= 1'b0;
      r_pending_last_word <= 1'b0;
      r_left_halo_valid   <= 1'b0;
    end
  end

  // Datapath registers have no reset; valid state protects uninitialized data.
  always_ff @(posedge I_CLK) begin
    if (w_input_accept) begin
      for (int row = 0; row < 3; row++) begin
        r_current_words[row] <= w_input_words[row];
        if (I_ROW_START || !r_pending_valid || r_pending_last_word)
          r_left_halo[row] <= '0;
        else
          r_left_halo[row] <=
            r_current_words[row][(PARA_LANES-1)*PARA_SAMPLE_WD +: PARA_SAMPLE_WD];
      end
      r_current_diff_word <= I_CENTER_DIFF_WORD;
    end
  end

  // One-entry registered ready/valid stage decouples the EO classifier.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_output_valid <= 1'b0;
    else if (I_CLEAR)
      r_output_valid <= 1'b0;
    else if (w_output_slot_available)
      r_output_valid <= w_emit;
  end

  always_ff @(posedge I_CLK) begin
    if (w_emit) begin
      r_output_window       <= w_window;
      r_output_diff_word    <= r_current_diff_word;
      r_output_lane_valid   <= w_lane_valid;
      r_output_word_x       <= r_word_x;
      r_output_center_y     <= r_center_y;
      r_output_component_id <= r_component_id;
    end
  end

  assign O_SHARED_WINDOW    = r_output_window;
  assign O_CENTER_DIFF_WORD = r_output_diff_word;
  assign O_LANE_VALID       = r_output_lane_valid;
  assign O_WINDOW_VALID     = r_output_valid;
  assign O_WORD_X          = r_output_word_x;
  assign O_CENTER_Y        = r_output_center_y;
  assign O_COMPONENT_ID    = r_output_component_id;

  // Done asserts only after the final pending group has been emitted and
  // the last registered window has actually been accepted downstream.
  assign O_DRAIN_DONE = I_RST_N && !I_CLEAR && I_COMPONENT_DONE &&
                        !r_pending_valid && !r_output_valid;

endmodule: SAO_SHARED_WINDOW_GENERATOR
