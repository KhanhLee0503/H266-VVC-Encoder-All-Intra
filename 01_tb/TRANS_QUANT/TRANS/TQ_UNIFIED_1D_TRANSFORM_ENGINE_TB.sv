//-----------------------------------------------------------
// Description: This basic self-checking testbench verifies the
// unified 1-D transform wrapper with real DCT-II and DST7/DCT8
// cores. Six vectors cover all four transform sizes and three
// transform modes. The scoreboard prints every input sample,
// expected coefficient and observed coefficient. All testbench
// stimulus changes at the rising edge only; no falling-edge
// event control is used. A watchdog detects stalled progress.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_UNIFIED_1D_TRANSFORM_ENGINE_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_RESULT_WD = PARA_DATA_WD + 12;
  localparam PARA_MAX_N = 32;
  localparam PARA_TEST_COUNT = 6;
  localparam PARA_TIMEOUT = 30000;

  logic I_CLK;
  logic I_RESETN;
  logic [1:0] I_TRANSFORM_MODE;
  logic [1:0] I_TRANSFORM_SIZE;
  logic [4*PARA_DATA_WD-1:0] I_DATA;
  logic I_DATA_VALID;
  logic I_DATA_READY;
  logic [4*PARA_RESULT_WD-1:0] O_DATA;
  logic O_DATA_VALID;
  logic O_DATA_READY;
  logic O_DATA_LAST;

  logic signed [PARA_DATA_WD-1:0] r_sample [0:PARA_MAX_N-1];
  logic signed [PARA_RESULT_WD-1:0] r_expected [0:PARA_MAX_N-1];
  logic signed [PARA_RESULT_WD-1:0] r_actual [0:PARA_MAX_N-1];
  integer r_n;
  integer r_rx_count;
  integer r_case_errors;
  integer r_total_errors;
  integer r_cycle;
  logic r_monitor_enable;
  logic r_done;
  logic r_output_stalled;
  logic r_hold_valid;
  logic [4*PARA_RESULT_WD-1:0] r_hold_data;
  logic r_hold_last;

  TQ_UNIFIED_1D_TRANSFORM_ENGINE #(
    .PARA_DATA_WD(PARA_DATA_WD)
  ) u_dut (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_TRANSFORM_MODE(I_TRANSFORM_MODE),
    .I_TRANSFORM_SIZE(I_TRANSFORM_SIZE),
    .I_DATA(I_DATA),
    .I_DATA_VALID(I_DATA_VALID),
    .I_DATA_READY(I_DATA_READY),
    .O_DATA(O_DATA),
    .O_DATA_VALID(O_DATA_VALID),
    .O_DATA_READY(O_DATA_READY),
    .O_DATA_LAST(O_DATA_LAST)
  );

  initial I_CLK = 1'b0;
  always #5 I_CLK = ~I_CLK;

  // Both the backpressure stimulus and bookkeeping update on posedge.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_cycle <= 0;
      O_DATA_READY <= 1'b0;
    end
    else begin
      r_cycle <= r_cycle + 1;
      O_DATA_READY <= (r_cycle % 7 >= 3);
    end
  end

  // Sample transfers using the values BEFORE this rising edge.
  always @(posedge I_CLK) begin
    if (I_RESETN && r_monitor_enable) begin
      if (r_hold_valid) begin
        if ((O_DATA_VALID !== 1'b1) || (O_DATA !== r_hold_data) || (O_DATA_LAST !== r_hold_last)) begin
          $display("ERROR: Output changed while stalled");
          r_case_errors = r_case_errors + 1;
        end
      end
      r_hold_valid = O_DATA_VALID && !O_DATA_READY;
      if (r_hold_valid) begin
        r_hold_data = O_DATA;
        r_hold_last = O_DATA_LAST;
      end
      if (O_DATA_VALID && O_DATA_READY) begin
        if (r_rx_count >= r_n) begin
          $display("ERROR: Unexpected output beat");
          r_case_errors = r_case_errors + 1;
        end
        else begin
          for (int lane_idx = 0; lane_idx < 4; lane_idx++)
            r_actual[r_rx_count+lane_idx] = O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
          if (O_DATA_LAST !== (r_rx_count == r_n-4)) begin
            $display("ERROR: LAST mismatch at output index %0d", r_rx_count);
            r_case_errors = r_case_errors + 1;
          end
          r_rx_count = r_rx_count + 4;
          if (r_rx_count == r_n)
            r_done = 1'b1;
        end
      end
    end
  end

  task automatic send_beat(input integer beat_idx);
    logic [4*PARA_DATA_WD-1:0] payload;
    begin
      payload = '0;
      for (int lane_idx = 0; lane_idx < 4; lane_idx++)
        payload[lane_idx*PARA_DATA_WD +: PARA_DATA_WD] = r_sample[4*beat_idx+lane_idx];
      @(posedge I_CLK);
      I_DATA <= payload;
      I_DATA_VALID <= 1'b1;
      @(posedge I_CLK);
      while (!I_DATA_READY)
        @(posedge I_CLK);
      I_DATA_VALID <= 1'b0;
    end
  endtask

  task automatic load_case(input integer tc);
    begin
      for (int idx = 0; idx < PARA_MAX_N; idx++) begin
        r_sample[idx] = '0;
        r_expected[idx] = '0;
        r_actual[idx] = 'x;
      end
      r_n = 4;
      case (tc)
        0: begin
          r_n = 4;
          r_sample[0] = 1; r_sample[1] = 2; r_sample[2] = -3; r_sample[3] = 4;
          r_expected[0] = 256; r_expected[1] = -69; r_expected[2] = 384; r_expected[3] = -523;
        end
        1: begin
          r_n = 4;
          r_sample[0] = 1; r_sample[1] = -2; r_sample[2] = 3; r_sample[3] = -4;
          r_expected[0] = -87; r_expected[1] = 156; r_expected[2] = -444; r_expected[3] = 513;
        end
        2: begin
          r_n = 4;
          r_sample[0] = 1; r_sample[1] = -2; r_sample[2] = 3; r_sample[3] = -4;
          r_expected[0] = -15; r_expected[1] = 148; r_expected[2] = -220; r_expected[3] = 649;
        end
        3: begin
          r_n = 8;
          r_sample[0] = 3; r_sample[1] = -1; r_sample[2] = 2; r_sample[3] = 4;
          r_sample[4] = 0; r_sample[5] = 5; r_sample[6] = -2; r_sample[7] = 1;
          r_expected[0] = 768; r_expected[1] = 175; r_expected[2] = -360; r_expected[3] = 199;
          r_expected[4] = 256; r_expected[5] = 257; r_expected[6] = 830; r_expected[7] = -595;
        end
        4: r_n = 16; // All-zero DST7 vector tests four output beats.
        5: r_n = 32; // All-zero DCT8 vector tests zero-out and eight beats.
        default: r_n = 4;
      endcase
    end
  endtask

  task automatic print_case(input integer tc);
    begin
      $display(" ");
      $display("TESTCASE %0d | N=%0d | MODE=%0d", tc+1, r_n, (tc == 0 || tc == 3) ? 0 : ((tc == 1 || tc == 4) ? 1 : 2));
      $display("INDEX       INPUT        GOLDEN           ACTUAL       STATUS");
      for (int idx = 0; idx < r_n; idx++) begin
        $display("%02d     %11d   %11d      %11d       %s", idx, $signed(r_sample[idx]), $signed(r_expected[idx]), $signed(r_actual[idx]), (r_expected[idx] === r_actual[idx]) ? "OK" : "ERROR");
        if (r_expected[idx] !== r_actual[idx])
          r_case_errors = r_case_errors + 1;
      end
      $display("EXPECTED MATRIX (4 coefficients/row):");
      for (int idx = 0; idx < r_n; idx = idx+4)
        $display("[%02d..%02d] %11d %11d %11d %11d", idx, idx+3, $signed(r_expected[idx]), $signed(r_expected[idx+1]), $signed(r_expected[idx+2]), $signed(r_expected[idx+3]));
      $display("ACTUAL MATRIX (4 coefficients/row):");
      for (int idx = 0; idx < r_n; idx = idx+4)
        $display("[%02d..%02d] %11d %11d %11d %11d", idx, idx+3, $signed(r_actual[idx]), $signed(r_actual[idx+1]), $signed(r_actual[idx+2]), $signed(r_actual[idx+3]));
      $display("RESULT TC%0d: %s (errors=%0d)", tc+1, r_case_errors == 0 ? "PASS" : "FAIL", r_case_errors);
    end
  endtask

  task automatic run_case(input integer tc);
    logic [1:0] mode;
    logic [1:0] size;
    begin
      load_case(tc);
      mode = (tc == 0 || tc == 3) ? 2'b00 : ((tc == 1 || tc == 4) ? 2'b01 : 2'b10);
      size = (r_n == 4) ? 2'b00 : ((r_n == 8) ? 2'b01 : ((r_n == 16) ? 2'b10 : 2'b11));
      @(posedge I_CLK);
      r_monitor_enable <= 1'b1;
      r_rx_count = 0;
      r_case_errors = 0;
      r_done = 1'b0;
      r_hold_valid = 1'b0;
      I_TRANSFORM_MODE <= mode;
      I_TRANSFORM_SIZE <= size;
      for (int beat_idx = 0; beat_idx < r_n/4; beat_idx++)
        send_beat(beat_idx);
      // Metadata must not affect an already accepted vector.
      @(posedge I_CLK);
      I_TRANSFORM_MODE <= 2'b11;
      I_TRANSFORM_SIZE <= 2'b11;
      wait (r_done);
      @(posedge I_CLK);
      r_monitor_enable <= 1'b0;
      print_case(tc);
      r_total_errors = r_total_errors + r_case_errors;
      @(posedge I_CLK);
    end
  endtask

  initial begin
    I_RESETN = 1'b0;
    I_TRANSFORM_MODE = 2'b00;
    I_TRANSFORM_SIZE = 2'b00;
    I_DATA = '0;
    I_DATA_VALID = 1'b0;
    O_DATA_READY = 1'b0;
    r_monitor_enable = 1'b0;
    r_done = 1'b0;
    r_rx_count = 0;
    r_case_errors = 0;
    r_total_errors = 0;
    r_hold_valid = 1'b0;
    r_cycle = 0;
    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    for (int tc = 0; tc < PARA_TEST_COUNT; tc++)
      run_case(tc);
    if (r_total_errors == 0)
      $display("PASS: TQ_UNIFIED_1D_TRANSFORM_ENGINE 6 testcases");
    else
      $display("FAIL: TQ_UNIFIED_1D_TRANSFORM_ENGINE errors=%0d", r_total_errors);
    $finish;
  end

  initial begin
    repeat (PARA_TIMEOUT) @(posedge I_CLK);
    $fatal(1, "TIMEOUT: TQ_UNIFIED_1D_TRANSFORM_ENGINE");
  end
endmodule: TQ_UNIFIED_1D_TRANSFORM_ENGINE_TB
