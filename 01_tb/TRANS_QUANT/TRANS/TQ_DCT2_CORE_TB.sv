//-----------------------------------------------------------
// Description: Basic self-checking testbench for TQ_DCT2_CORE.
// Five testcases cover DCT2 sizes 4, 8, 16, and 32.
// All DUT stimulus is driven on posedge I_CLK using nonblocking
// assignments. No falling-edge event control is used in this TB.
// Golden coefficients are embedded; no .mem or Python is needed.
// The checker prints every input / expected / actual coefficient.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DCT2_CORE_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_RESULT_WD = 28;
  localparam PARA_TEST_COUNT = 5;
  localparam PARA_MAX_N = 32;
  localparam PARA_TIMEOUT_CYCLES = 3000;

  logic I_CLK;
  logic I_RESETN;
  logic [1:0] I_TRANSFORM_SIZE;
  logic [4*PARA_DATA_WD-1:0] I_DATA;
  logic I_DATA_VALID;
  logic I_DATA_READY;
  logic [4*PARA_RESULT_WD-1:0] O_DATA;
  logic O_DATA_VALID;
  logic O_DATA_READY;
  logic O_DATA_LAST;

  logic signed [PARA_DATA_WD-1:0] r_input [0:PARA_TEST_COUNT-1][0:PARA_MAX_N-1];
  logic signed [PARA_RESULT_WD-1:0] r_golden [0:PARA_TEST_COUNT-1][0:PARA_MAX_N-1];
  logic signed [PARA_RESULT_WD-1:0] r_actual [0:PARA_TEST_COUNT-1][0:PARA_MAX_N-1];
  integer r_n [0:PARA_TEST_COUNT-1];
  string r_name [0:PARA_TEST_COUNT-1];
  integer r_case_errors [0:PARA_TEST_COUNT-1];
  integer r_completed;
  integer r_rx_beat;
  integer r_total_errors;
  integer r_cycle;
  integer r_stall_cycles;
  integer r_test_in_progress;
  logic r_hold_valid;
  logic [4*PARA_RESULT_WD-1:0] r_hold_data;
  logic r_hold_last;

  initial begin
	  $dumpfile("TQ_DCT2_CORE_TB.vcd");
	  $dumpvars(0, TQ_DCT2_CORE_TB);
  end

  TQ_DCT2_CORE #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_dut (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
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

  // Send one 4-sample beat. The receiver consumes it at a posedge
  // where VALID and READY were both high before the edge.
  task automatic send_beat(
    input logic [4*PARA_DATA_WD-1:0] payload,
    input logic [1:0] transform_size
  );
    begin
      @(posedge I_CLK);
      I_DATA <= payload;
      I_TRANSFORM_SIZE <= transform_size;
      I_DATA_VALID <= 1'b1;
      @(posedge I_CLK);
      while (!(I_DATA_VALID && I_DATA_READY))
        @(posedge I_CLK);
      I_DATA_VALID <= 1'b0;
    end
  endtask

  // Print ALL N input samples and ALL N expected/actual outputs.
  // Four coefficients are printed per row (matching the DUT bus).
  task automatic print_full_result(input integer tc);
    integer idx;
    begin
      $display(" ");
      $display("===============================================================");
      $display("TESTCASE %0d / %0d: %s  (N=%0d)", tc+1, PARA_TEST_COUNT, r_name[tc], r_n[tc]);
      $display("===============================================================");
      $display("     INDEX             INPUT             GOLDEN              RTL");
      for (idx = 0; idx < r_n[tc]; idx++) begin
        $display("       %02d         %11d        %11d      %11d   %s",
                 idx, $signed(r_input[tc][idx]),
                 $signed(r_golden[tc][idx]), $signed(r_actual[tc][idx]),
                 (r_actual[tc][idx] === r_golden[tc][idx]) ? "OK" : "ERROR");
      end
      $display(" ");
      $display("INPUT MATRIX (4 columns / row):");
      for (idx = 0; idx < r_n[tc]; idx = idx + 4) begin
        $display("  [%02d..%02d] %11d %11d %11d %11d",
                 idx, idx+3, $signed(r_input[tc][idx]),
                 $signed(r_input[tc][idx+1]), $signed(r_input[tc][idx+2]),
                 $signed(r_input[tc][idx+3]));
      end
      $display("EXPECTED COEFFICIENT MATRIX (4 columns / row):");
      for (idx = 0; idx < r_n[tc]; idx = idx + 4) begin
        $display("  [%02d..%02d] %11d %11d %11d %11d",
                 idx, idx+3, $signed(r_golden[tc][idx]),
                 $signed(r_golden[tc][idx+1]), $signed(r_golden[tc][idx+2]),
                 $signed(r_golden[tc][idx+3]));
      end
      $display("ACTUAL COEFFICIENT MATRIX (4 columns / row):");
      for (idx = 0; idx < r_n[tc]; idx = idx + 4) begin
        $display("  [%02d..%02d] %11d %11d %11d %11d",
                 idx, idx+3, $signed(r_actual[tc][idx]),
                 $signed(r_actual[tc][idx+1]), $signed(r_actual[tc][idx+2]),
                 $signed(r_actual[tc][idx+3]));
      end
      if (r_case_errors[tc] == 0)
        $display("TESTCASE %0d PASS", tc+1);
      else
        $display("TESTCASE %0d FAIL: %0d error(s)", tc+1, r_case_errors[tc]);
    end
  endtask

  // All READY changes happen on positive clock edges.
  // TC5 deliberately inserts output stalls/backpressure.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      O_DATA_READY <= 1'b0;
      r_cycle <= 0;
    end else begin
      r_cycle <= r_cycle + 1;
      if (r_test_in_progress == 4)
        O_DATA_READY <= ((r_cycle % 5) != 1) && ((r_cycle % 5) != 2);
      else
        O_DATA_READY <= 1'b1;
    end
  end

  // Scoreboard samples values that the DUT presents at each posedge.
  // DUT output is checked only for successful VALID/READY transfers.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_completed = 0;
      r_rx_beat = 0;
      r_total_errors = 0;
      r_stall_cycles = 0;
      r_hold_valid = 1'b0;
      r_hold_data = '0;
      r_hold_last = 1'b0;
    end else begin
      if (r_hold_valid) begin
        if (!O_DATA_VALID || O_DATA !== r_hold_data || O_DATA_LAST !== r_hold_last) begin
          $display("ERROR: output changed while stalled at cycle %0d", r_cycle);
          r_total_errors = r_total_errors + 1;
          if (r_completed < PARA_TEST_COUNT)
            r_case_errors[r_completed] = r_case_errors[r_completed] + 1;
        end
      end
      r_hold_valid = O_DATA_VALID && !O_DATA_READY;
      if (r_hold_valid) begin
        r_hold_data = O_DATA;
        r_hold_last = O_DATA_LAST;
        r_stall_cycles = r_stall_cycles + 1;
      end
      if (O_DATA_VALID && O_DATA_READY) begin
        if (r_completed >= PARA_TEST_COUNT) begin
          $display("ERROR: unexpected extra output at cycle %0d", r_cycle);
          r_total_errors = r_total_errors + 1;
        end else begin
          for (int lane_idx = 0; lane_idx < 4; lane_idx++) begin
            r_actual[r_completed][4*r_rx_beat+lane_idx] =
              O_DATA[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD];
            if (r_actual[r_completed][4*r_rx_beat+lane_idx] !==
                r_golden[r_completed][4*r_rx_beat+lane_idx]) begin
              r_case_errors[r_completed] = r_case_errors[r_completed] + 1;
              r_total_errors = r_total_errors + 1;
            end
          end
          if (O_DATA_LAST !== (r_rx_beat == r_n[r_completed]/4-1)) begin
            $display("ERROR: O_DATA_LAST mismatch in testcase %0d, beat %0d", r_completed+1, r_rx_beat);
            r_case_errors[r_completed] = r_case_errors[r_completed] + 1;
            r_total_errors = r_total_errors + 1;
          end
          if (r_rx_beat == r_n[r_completed]/4-1) begin
            print_full_result(r_completed);
            r_completed = r_completed + 1;
            r_rx_beat = 0;
          end else begin
            r_rx_beat = r_rx_beat + 1;
          end
        end
      end
    end
  end

  initial begin: test_sequence
    logic [4*PARA_DATA_WD-1:0] payload;
    I_RESETN = 1'b0;
    I_TRANSFORM_SIZE = 2'b00;
    I_DATA = '0;
    I_DATA_VALID = 1'b0;
    O_DATA_READY = 1'b0;
    r_test_in_progress = -1;
    r_cycle = 0;
    r_stall_cycles = 0;
    r_completed = 0;
    r_rx_beat = 0;
    r_total_errors = 0;
    for (int tc = 0; tc < PARA_TEST_COUNT; tc++) begin
      r_case_errors[tc] = 0;
      for (int idx = 0; idx < PARA_MAX_N; idx++) begin
        r_input[tc][idx] = '0;
        r_golden[tc][idx] = '0;
        r_actual[tc][idx] = 'x;
      end
    end

    r_n[0] = 4;
    r_name[0] = "4-point mixed signed";
    r_n[1] = 8;
    r_name[1] = "8-point mixed signed";
    r_n[2] = 16;
    r_name[2] = "16-point alternating signed";
    r_n[3] = 32;
    r_name[3] = "32-point increasing ramp";
    r_n[4] = 32;
    r_name[4] = "32-point signed boundary + backpressure";

    // Testcase 1: N4_MIXED_SIGN
    r_input[0][0] = 16'sd3;
    r_input[0][1] = -16'sd1;
    r_input[0][2] = 16'sd2;
    r_input[0][3] = 16'sd4;
    r_golden[0][0] = 28'sd512;
    r_golden[0][1] = -28'sd191;
    r_golden[0][2] = 28'sd384;
    r_golden[0][3] = 28'sd213;

    // Testcase 2: N8_MIXED_SIGN
    r_input[1][0] = 16'sd3;
    r_input[1][1] = -16'sd1;
    r_input[1][2] = 16'sd2;
    r_input[1][3] = 16'sd4;
    r_input[1][4] = 16'sd0;
    r_input[1][5] = 16'sd5;
    r_input[1][6] = -16'sd2;
    r_input[1][7] = 16'sd1;
    r_golden[1][0] = 28'sd768;
    r_golden[1][1] = 28'sd175;
    r_golden[1][2] = -28'sd360;
    r_golden[1][3] = 28'sd199;
    r_golden[1][4] = 28'sd256;
    r_golden[1][5] = 28'sd257;
    r_golden[1][6] = 28'sd830;
    r_golden[1][7] = -28'sd595;

    // Testcase 3: N16_ALT_SIGN
    r_input[2][0] = 16'sd180;
    r_input[2][1] = -16'sd257;
    r_input[2][2] = 16'sd334;
    r_input[2][3] = -16'sd411;
    r_input[2][4] = 16'sd488;
    r_input[2][5] = -16'sd565;
    r_input[2][6] = 16'sd642;
    r_input[2][7] = -16'sd719;
    r_input[2][8] = 16'sd796;
    r_input[2][9] = -16'sd873;
    r_input[2][10] = 16'sd950;
    r_input[2][11] = -16'sd1027;
    r_input[2][12] = 16'sd1104;
    r_input[2][13] = -16'sd1181;
    r_input[2][14] = 16'sd1258;
    r_input[2][15] = -16'sd1335;
    r_golden[2][0] = -28'sd39424;
    r_golden[2][1] = 28'sd65145;
    r_golden[2][2] = -28'sd56672;
    r_golden[2][3] = 28'sd71205;
    r_golden[2][4] = -28'sd57904;
    r_golden[2][5] = 28'sd80295;
    r_golden[2][6] = -28'sd66528;
    r_golden[2][7] = 28'sd89385;
    r_golden[2][8] = -28'sd78848;
    r_golden[2][9] = 28'sd110595;
    r_golden[2][10] = -28'sd101024;
    r_golden[2][11] = 28'sd146955;
    r_golden[2][12] = -28'sd146608;
    r_golden[2][13] = 28'sd234825;
    r_golden[2][14] = -28'sd285824;
    r_golden[2][15] = 28'sd698415;

    // Testcase 4: N32_RAMP
    r_input[3][0] = -16'sd6896;
    r_input[3][1] = -16'sd6465;
    r_input[3][2] = -16'sd6034;
    r_input[3][3] = -16'sd5603;
    r_input[3][4] = -16'sd5172;
    r_input[3][5] = -16'sd4741;
    r_input[3][6] = -16'sd4310;
    r_input[3][7] = -16'sd3879;
    r_input[3][8] = -16'sd3448;
    r_input[3][9] = -16'sd3017;
    r_input[3][10] = -16'sd2586;
    r_input[3][11] = -16'sd2155;
    r_input[3][12] = -16'sd1724;
    r_input[3][13] = -16'sd1293;
    r_input[3][14] = -16'sd862;
    r_input[3][15] = -16'sd431;
    r_input[3][16] = 16'sd0;
    r_input[3][17] = 16'sd431;
    r_input[3][18] = 16'sd862;
    r_input[3][19] = 16'sd1293;
    r_input[3][20] = 16'sd1724;
    r_input[3][21] = 16'sd2155;
    r_input[3][22] = 16'sd2586;
    r_input[3][23] = 16'sd3017;
    r_input[3][24] = 16'sd3448;
    r_input[3][25] = 16'sd3879;
    r_input[3][26] = 16'sd4310;
    r_input[3][27] = 16'sd4741;
    r_input[3][28] = 16'sd5172;
    r_input[3][29] = 16'sd5603;
    r_input[3][30] = 16'sd6034;
    r_input[3][31] = 16'sd6465;
    r_golden[3][0] = -28'sd441344;
    r_golden[3][1] = -28'sd8096766;
    r_golden[3][2] = 28'sd0;
    r_golden[3][3] = -28'sd897342;
    r_golden[3][4] = 28'sd0;
    r_golden[3][5] = -28'sd334456;
    r_golden[3][6] = 28'sd0;
    r_golden[3][7] = -28'sd154298;
    r_golden[3][8] = 28'sd0;
    r_golden[3][9] = -28'sd102578;
    r_golden[3][10] = 28'sd0;
    r_golden[3][11] = -28'sd67236;
    r_golden[3][12] = 28'sd0;
    r_golden[3][13] = -28'sd57754;
    r_golden[3][14] = 28'sd0;
    r_golden[3][15] = -28'sd862;
    r_golden[3][16] = 28'sd0;
    r_golden[3][17] = -28'sd34480;
    r_golden[3][18] = 28'sd0;
    r_golden[3][19] = -28'sd21550;
    r_golden[3][20] = 28'sd0;
    r_golden[3][21] = -28'sd4310;
    r_golden[3][22] = 28'sd0;
    r_golden[3][23] = -28'sd9482;
    r_golden[3][24] = 28'sd0;
    r_golden[3][25] = -28'sd17240;
    r_golden[3][26] = 28'sd0;
    r_golden[3][27] = 28'sd1724;
    r_golden[3][28] = 28'sd0;
    r_golden[3][29] = -28'sd5172;
    r_golden[3][30] = 28'sd0;
    r_golden[3][31] = 28'sd11206;

    // Testcase 5: N32_SIGN_LIMIT
    r_input[4][0] = 16'sh8000;
    r_input[4][1] = 16'sd32767;
    r_input[4][2] = 16'sh8000;
    r_input[4][3] = 16'sd32767;
    r_input[4][4] = 16'sh8000;
    r_input[4][5] = 16'sd32767;
    r_input[4][6] = 16'sh8000;
    r_input[4][7] = 16'sd32767;
    r_input[4][8] = 16'sh8000;
    r_input[4][9] = 16'sd32767;
    r_input[4][10] = 16'sh8000;
    r_input[4][11] = 16'sd32767;
    r_input[4][12] = 16'sh8000;
    r_input[4][13] = 16'sd32767;
    r_input[4][14] = 16'sh8000;
    r_input[4][15] = 16'sd32767;
    r_input[4][16] = 16'sh8000;
    r_input[4][17] = 16'sd32767;
    r_input[4][18] = 16'sh8000;
    r_input[4][19] = 16'sd32767;
    r_input[4][20] = 16'sh8000;
    r_input[4][21] = 16'sd32767;
    r_input[4][22] = 16'sh8000;
    r_input[4][23] = 16'sd32767;
    r_input[4][24] = 16'sh8000;
    r_input[4][25] = 16'sd32767;
    r_input[4][26] = 16'sh8000;
    r_input[4][27] = 16'sd32767;
    r_input[4][28] = 16'sh8000;
    r_input[4][29] = 16'sd32767;
    r_input[4][30] = 16'sh8000;
    r_input[4][31] = 16'sd32767;
    r_golden[4][0] = -28'sd1024;
    r_golden[4][1] = -28'sd3014610;
    r_golden[4][2] = 28'sd0;
    r_golden[4][3] = -28'sd3014610;
    r_golden[4][4] = 28'sd0;
    r_golden[4][5] = -28'sd3145680;
    r_golden[4][6] = 28'sd0;
    r_golden[4][7] = -28'sd3276750;
    r_golden[4][8] = 28'sd0;
    r_golden[4][9] = -28'sd3276750;
    r_golden[4][10] = 28'sd0;
    r_golden[4][11] = -28'sd3407820;
    r_golden[4][12] = 28'sd0;
    r_golden[4][13] = -28'sd3801030;
    r_golden[4][14] = 28'sd0;
    r_golden[4][15] = -28'sd4063170;
    r_golden[4][16] = 28'sd0;
    r_golden[4][17] = -28'sd4718520;
    r_golden[4][18] = 28'sd0;
    r_golden[4][19] = -28'sd5111730;
    r_golden[4][20] = 28'sd0;
    r_golden[4][21] = -28'sd5636010;
    r_golden[4][22] = 28'sd0;
    r_golden[4][23] = -28'sd6946710;
    r_golden[4][24] = 28'sd0;
    r_golden[4][25] = -28'sd8912760;
    r_golden[4][26] = 28'sd0;
    r_golden[4][27] = -28'sd12320580;
    r_golden[4][28] = 28'sd0;
    r_golden[4][29] = -28'sd20184780;
    r_golden[4][30] = 28'sd0;
    r_golden[4][31] = -28'sd60423270;


    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    @(posedge I_CLK);

    for (int tc = 0; tc < PARA_TEST_COUNT; tc++) begin
      @(posedge I_CLK);
      r_test_in_progress <= tc;
      for (int beat = 0; beat < r_n[tc]/4; beat++) begin
        payload = '0;
        for (int lane = 0; lane < 4; lane++)
          payload[lane*PARA_DATA_WD +: PARA_DATA_WD] = r_input[tc][4*beat+lane];
        // Deliberate input VALID gaps in TC4 and TC5.
        if ((tc >= 3) && (beat == 2))
          @(posedge I_CLK);
        send_beat(payload, 2'(tc == 4 ? 3 : tc));
      end
      wait (r_completed == tc+1);
    end

    repeat (8) @(posedge I_CLK);
    $display(" ");
    $display("==================== FINAL SUMMARY ====================");
    $display("Completed: %0d/%0d testcases", r_completed, PARA_TEST_COUNT);
    $display("Output stall cycles: %0d", r_stall_cycles);
    if ((r_total_errors == 0) && (r_completed == PARA_TEST_COUNT) &&
        (r_stall_cycles > 0)) begin
      $display("PASS: all five DCT2 tests, 4/8/16/32, with backpressure");
      $finish;
    end else begin
      $fatal(1, "FAIL: %0d checker error(s), %0d completed, %0d stalls",
             r_total_errors, r_completed, r_stall_cycles);
    end
  end

  initial begin: watchdog
    repeat (PARA_TIMEOUT_CYCLES) @(posedge I_CLK);
    $fatal(1, "TIMEOUT: completed %0d/%0d", r_completed, PARA_TEST_COUNT);
  end
endmodule: TQ_DCT2_CORE_TB
