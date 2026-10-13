//-----------------------------------------------------------
// Description:
// Directed integration-interface verification for the VVC TU
// Scheduler. All input stimulus changes only at posedge I_CLK.
// Checks every accepted prediction beat and metadata packet.
// Cases cover multi-component IDs, stalls, FIFO backpressure,
// credit exhaustion, and multiple leaf CUs.
//-----------------------------------------------------------
`timescale 1ns/1ps

module ENCODER_TU_SCHEDULER_TB;

localparam PARA_MAX_BEATS = 1024;
localparam PARA_CHECK_WD = 118;
localparam PARA_META_WD = 61;

logic I_CLK;
logic I_RESETN;
logic I_CLEAR_ERROR;
logic I_PRED_VALID;
logic O_PRED_READY;
logic [39:0] I_PRED_DATA;
logic [3:0] I_PRED_LANE_VALID;
logic [4:0] I_PRED_X_BASE;
logic [4:0] I_PRED_Y;
logic I_PRED_ROW_LAST;
logic I_PRED_LAST;
logic [1:0] I_PRED_COMPONENT_ID;
logic [7:0] I_PRED_MODE;
logic [8:0] I_PRED_CTU_ID;
logic [7:0] I_PRED_CU_ID;
logic [6:0] I_PRED_CU_X;
logic [6:0] I_PRED_CU_Y;
logic [2:0] I_PRED_WIDTH_CODE;
logic [2:0] I_PRED_HEIGHT_CODE;

logic O_DATA_VALID;
logic I_DATA_READY;
logic [39:0] O_DATA;
logic [3:0] O_LANE_VALID;
logic [4:0] O_X_BASE;
logic [4:0] O_Y;
logic O_ROW_LAST;
logic O_TU_START;
logic O_TU_LAST;
logic [15:0] O_TU_ID;
logic [1:0] O_COMPONENT_ID;
logic [8:0] O_CTU_ID;
logic [7:0] O_CU_ID;
logic [6:0] O_CU_X;
logic [6:0] O_CU_Y;
logic [1:0] O_TU_WIDTH_SIZE;
logic [1:0] O_TU_HEIGHT_SIZE;
logic [7:0] O_INTRA_MODE;

logic O_META_VALID;
logic I_META_READY;
logic [15:0] O_META_TU_ID;
logic [8:0] O_META_CTU_ID;
logic [7:0] O_META_CU_ID;
logic [1:0] O_META_COMPONENT_ID;
logic [6:0] O_META_CU_X;
logic [6:0] O_META_CU_Y;
logic [1:0] O_META_WIDTH_SIZE;
logic [1:0] O_META_HEIGHT_SIZE;
logic [7:0] O_META_INTRA_MODE;
logic I_RELEASE_VALID;
logic O_RELEASE_READY;
logic [15:0] I_RELEASE_TU_ID;
logic O_BUSY;
logic O_ERROR;
logic [1:0] O_META_COUNT;
logic [1:0] O_OUTSTANDING_COUNT;

logic [PARA_CHECK_WD-1:0] expected_beats [0:PARA_MAX_BEATS-1];
logic [PARA_META_WD-1:0] expected_meta [0:32];
logic [PARA_CHECK_WD-1:0] current_out_payload;
logic [PARA_META_WD-1:0] current_meta_payload;
logic [PARA_CHECK_WD-1:0] previous_out_payload;
logic [PARA_META_WD-1:0] previous_meta_payload;
logic out_stalled;
logic meta_stalled;
integer input_count;
integer output_count;
integer meta_expected_count;
integer meta_received_count;
integer jobs_completed;
integer jobs_released;
integer cycle_count;
integer test_case;
integer expected_next_id;
logic [15:0] expected_current_id;
logic expect_first;
event ev_pred_accept;

ENCODER_TU_SCHEDULER #(
  .PARA_META_FIFO_DEPTH(2),
  .PARA_MAX_OUTSTANDING(3)
) dut (.*);

initial begin
  I_CLK = 1'b0;
  forever #5 I_CLK = ~I_CLK;
end

// A monitor records the handshake at the clock edge, removing
// the source/driver races seen in earlier integration tests.
always @(posedge I_CLK) begin
  if (I_RESETN && I_PRED_VALID && O_PRED_READY)
    -> ev_pred_accept;
end

assign current_out_payload = {
  O_DATA, O_LANE_VALID, O_X_BASE, O_Y,
  O_ROW_LAST, O_TU_START, O_TU_LAST, O_TU_ID,
  O_COMPONENT_ID, O_CTU_ID, O_CU_ID, O_CU_X, O_CU_Y,
  O_TU_WIDTH_SIZE, O_TU_HEIGHT_SIZE, O_INTRA_MODE
};
assign current_meta_payload = {
  O_META_TU_ID, O_META_CTU_ID, O_META_CU_ID,
  O_META_COMPONENT_ID, O_META_CU_X, O_META_CU_Y,
  O_META_WIDTH_SIZE, O_META_HEIGHT_SIZE, O_META_INTRA_MODE
};

// All checkers sample the same accepted edge; source drives via NBA.
always @(posedge I_CLK) begin
  if (!I_RESETN) begin
    input_count = 0;
    output_count = 0;
    meta_expected_count = 0;
    meta_received_count = 0;
    jobs_completed = 0;
    jobs_released = 0;
    cycle_count = 0;
    expected_next_id = 0;
    expected_current_id = '0;
    out_stalled = 1'b0;
    meta_stalled = 1'b0;
  end
  else begin
    cycle_count = cycle_count + 1;

    if (out_stalled && (!O_DATA_VALID || current_out_payload !== previous_out_payload))
      $fatal(1, "[FAIL] Output beat or TU metadata changed during stall");
    if (meta_stalled && (!O_META_VALID || current_meta_payload !== previous_meta_payload))
      $fatal(1, "[FAIL] Metadata FIFO output changed during stall");
    out_stalled = O_DATA_VALID && !I_DATA_READY;
    meta_stalled = O_META_VALID && !I_META_READY;
    previous_out_payload = current_out_payload;
    previous_meta_payload = current_meta_payload;

    if (I_PRED_VALID && O_PRED_READY) begin
      if (input_count >= PARA_MAX_BEATS)
        $fatal(1, "[FAIL] Scoreboard capacity exceeded");
      expect_first = (I_PRED_X_BASE == 5'd0 && I_PRED_Y == 5'd0);
      if (expect_first) begin
        expected_current_id = expected_next_id[15:0];
        expected_next_id = expected_next_id + 1;
        expected_meta[meta_expected_count] = {
          expected_current_id, I_PRED_CTU_ID, I_PRED_CU_ID,
          I_PRED_COMPONENT_ID, I_PRED_CU_X, I_PRED_CU_Y,
          (I_PRED_WIDTH_CODE[1:0] - 2'd2),
          (I_PRED_HEIGHT_CODE[1:0] - 2'd2), I_PRED_MODE
        };
        meta_expected_count = meta_expected_count + 1;
      end
      expected_beats[input_count] = {
        I_PRED_DATA, I_PRED_LANE_VALID, I_PRED_X_BASE, I_PRED_Y,
        I_PRED_ROW_LAST, expect_first, I_PRED_LAST, expected_current_id,
        I_PRED_COMPONENT_ID, I_PRED_CTU_ID, I_PRED_CU_ID,
        I_PRED_CU_X, I_PRED_CU_Y,
        (I_PRED_WIDTH_CODE[1:0] - 2'd2),
        (I_PRED_HEIGHT_CODE[1:0] - 2'd2), I_PRED_MODE
      };
      input_count = input_count + 1;
    end

    if (O_DATA_VALID && I_DATA_READY) begin
      if (output_count >= input_count ||
          current_out_payload !== expected_beats[output_count])
        $fatal(1, "[FAIL] Beat index %0d: data/TU_ID/framing mismatch", output_count);
      output_count = output_count + 1;
      if (O_TU_LAST)
        jobs_completed = jobs_completed + 1;
    end

    if (O_META_VALID && I_META_READY) begin
      if (meta_received_count >= meta_expected_count ||
          current_meta_payload !== expected_meta[meta_received_count])
        $fatal(1, "[FAIL] Metadata index %0d mismatch", meta_received_count);
      meta_received_count = meta_received_count + 1;
    end

    if (I_RELEASE_VALID && O_RELEASE_READY)
      jobs_released = jobs_released + 1;
    if (O_ERROR)
      $fatal(1, "[FAIL] Scheduler reported invalid component/geometry");

    // Downstream consumers can independently add backpressure.
    if (test_case == 1) begin
      I_DATA_READY <= 1'b1;
      I_META_READY <= 1'b1;
    end
    else begin
      I_DATA_READY <= ((cycle_count % 11) >= 4);
      I_META_READY <= ((cycle_count % 13) >= 8);
    end

    // The coordinator retires TU IDs in order, after the output
    // LAST beat has been delivered to the mock residual consumer.
    I_RELEASE_VALID <= (jobs_completed > jobs_released) &&
      ((cycle_count % ((test_case == 4) ? 47 : 7)) == 0);
    I_RELEASE_TU_ID <= jobs_released[15:0];
  end
end

// Drive each beat at posedge and wait for a real input handshake.
task automatic send_beat(
  input integer row,
  input integer col_word,
  input integer width,
  input integer height,
  input [1:0] comp,
  input [8:0] ctu_id,
  input [7:0] cu_id,
  input [6:0] cu_x,
  input [6:0] cu_y,
  input [7:0] mode,
  input [2:0] log2w,
  input [2:0] log2h
);
  begin
    @(posedge I_CLK);
    I_PRED_VALID <= 1'b1;
    I_PRED_DATA <= {8'h5A, comp, cu_id[5:0], row[7:0], col_word[7:0], 8'hA5};
    I_PRED_LANE_VALID <= 4'b1111;
    I_PRED_X_BASE <= 5'(col_word * 4);
    I_PRED_Y <= 5'(row);
    I_PRED_ROW_LAST <= (col_word == (width/4-1));
    I_PRED_LAST <= ((row == height-1) && (col_word == (width/4-1)));
    I_PRED_COMPONENT_ID <= comp;
    I_PRED_MODE <= mode;
    I_PRED_CTU_ID <= ctu_id;
    I_PRED_CU_ID <= cu_id;
    I_PRED_CU_X <= cu_x;
    I_PRED_CU_Y <= cu_y;
    I_PRED_WIDTH_CODE <= log2w;
    I_PRED_HEIGHT_CODE <= log2h;
    @ev_pred_accept;
    I_PRED_VALID <= 1'b0;
  end
endtask

task automatic send_component(
  input [1:0] comp,
  input [8:0] ctu_id,
  input [7:0] cu_id,
  input [6:0] cu_x,
  input [6:0] cu_y,
  input [2:0] log2w,
  input [2:0] log2h
);
  integer row;
  integer col_word;
  integer width;
  integer height;
  begin
    width = 1 << log2w;
    height = 1 << log2h;
    for (row = 0; row < height; row = row + 1)
      for (col_word = 0; col_word < width/4; col_word = col_word + 1)
        send_beat(row, col_word, width, height, comp,
                  ctu_id, cu_id, cu_x, cu_y, 8'd20 + {6'd0,comp}, log2w, log2h);
  end
endtask

task automatic send_leaf(
  input [8:0] ctu_id,
  input [7:0] cu_id,
  input [6:0] luma_x,
  input [6:0] luma_y,
  input [2:0] luma_log2w,
  input [2:0] luma_log2h
);
  begin
    send_component(2'd0, ctu_id, cu_id, luma_x, luma_y, luma_log2w, luma_log2h);
    send_component(2'd1, ctu_id, cu_id, luma_x >> 1, luma_y >> 1,
                   luma_log2w - 3'd1, luma_log2h - 3'd1);
    send_component(2'd2, ctu_id, cu_id, luma_x >> 1, luma_y >> 1,
                   luma_log2w - 3'd1, luma_log2h - 3'd1);
  end
endtask

initial begin
  I_RESETN = 1'b0;
  I_CLEAR_ERROR = 1'b0;
  I_PRED_VALID = 1'b0;
  I_PRED_DATA = '0;
  I_PRED_LANE_VALID = '0;
  I_PRED_X_BASE = '0;
  I_PRED_Y = '0;
  I_PRED_ROW_LAST = 1'b0;
  I_PRED_LAST = 1'b0;
  I_PRED_COMPONENT_ID = '0;
  I_PRED_MODE = '0;
  I_PRED_CTU_ID = '0;
  I_PRED_CU_ID = '0;
  I_PRED_CU_X = '0;
  I_PRED_CU_Y = '0;
  I_PRED_WIDTH_CODE = '0;
  I_PRED_HEIGHT_CODE = '0;
  I_DATA_READY = 1'b1;
  I_META_READY = 1'b1;
  I_RELEASE_VALID = 1'b0;
  I_RELEASE_TU_ID = '0;
  test_case = 1;
  void'($value$plusargs("TC=%d", test_case));

  repeat (5) @(posedge I_CLK);
  I_RESETN <= 1'b1;

  if (test_case == 1)
    send_leaf(9'd5, 8'd7, 7'd16, 7'd24, 3'd4, 3'd4);
  else if (test_case == 2)
    send_leaf(9'd5, 8'd7, 7'd16, 7'd24, 3'd4, 3'd4);
  else if (test_case == 3)
    send_leaf(9'd1, 8'd11, 7'd0, 7'd32, 3'd3, 3'd5);
  else if (test_case == 4) begin
    send_leaf(9'd5, 8'd7, 7'd16, 7'd24, 3'd3, 3'd3);
    send_leaf(9'd5, 8'd8, 7'd24, 7'd24, 3'd3, 3'd3);
  end
  else if (test_case == 5) begin
    send_leaf(9'd5, 8'd7, 7'd16, 7'd24, 3'd4, 3'd4);
    send_leaf(9'd6, 8'd1, 7'd0, 7'd0, 3'd3, 3'd3);
  end
  else
    $fatal(1, "Unsupported testcase: %0d", test_case);

  // Wait until both consumers have drained and all IDs retired.
  wait (output_count == input_count &&
        meta_received_count == meta_expected_count &&
        jobs_released == expected_next_id);
  repeat (3) @(posedge I_CLK);
  if (O_BUSY || O_ERROR || O_META_COUNT != '0 || O_OUTSTANDING_COUNT != '0)
    $fatal(1, "[FAIL] Scheduler did not drain");

  $display("[PASS] TC%02d Scheduler: beats=%0d, metadata=%0d, released=%0d",
           test_case, output_count, meta_received_count, jobs_released);
  $finish;
end

initial begin
  repeat (50000) @(posedge I_CLK);
  $fatal(1, "[FAIL] Timeout");
end

endmodule: ENCODER_TU_SCHEDULER_TB
