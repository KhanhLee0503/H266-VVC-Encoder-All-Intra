//-----------------------------------------------------------
// Description: This testbench verifies the forward DST-7/DCT-8
// 1-D core with five basic directed testcases. All DUT stimulus
// changes only on positive clock edges and uses nonblocking
// assignments. The checker prints complete input and coefficient
// matrices, compares every coefficient, and checks output LAST
// and output stability during downstream backpressure.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DST7_DCT8_CORE_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_RESULT_WD = PARA_DATA_WD + 12;
  localparam PARA_TEST_COUNT = 5;
  localparam PARA_MAX_N = 32;
  localparam PARA_TIMEOUT_CYCLES = 6000;

  logic I_CLK;
  logic I_RESETN;
  logic [1:0] I_TRANSFORM_SIZE;
  logic I_TRANSFORM_MODE;
  logic I_DATA_VALID;
  logic O_DATA_READY;
  logic [4*PARA_DATA_WD-1:0] I_DATA;
  logic O_DATA_VALID;
  logic I_DATA_READY;
  logic [4*PARA_RESULT_WD-1:0] O_DATA;
  logic O_DATA_LAST;

  logic signed [PARA_DATA_WD-1:0] r_input [0:PARA_TEST_COUNT-1][0:PARA_MAX_N-1];
  logic signed [PARA_RESULT_WD-1:0] r_golden [0:PARA_TEST_COUNT-1][0:PARA_MAX_N-1];
  logic signed [PARA_RESULT_WD-1:0] r_actual [0:PARA_TEST_COUNT-1][0:PARA_MAX_N-1];
  integer r_n [0:PARA_TEST_COUNT-1];
  logic r_mode [0:PARA_TEST_COUNT-1];
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

  TQ_DST7_DCT8_CORE #(
    .PARA_DATA_WD(PARA_DATA_WD)
  ) u_dut (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_TRANSFORM_SIZE(I_TRANSFORM_SIZE),
    .I_TRANSFORM_MODE(I_TRANSFORM_MODE),
    .I_DATA_VALID(I_DATA_VALID),
    .O_DATA_READY(O_DATA_READY),
    .I_DATA(I_DATA),
    .O_DATA_VALID(O_DATA_VALID),
    .I_DATA_READY(I_DATA_READY),
    .O_DATA(O_DATA),
    .O_DATA_LAST(O_DATA_LAST)
  );

  initial I_CLK = 1'b0;
  always #5 I_CLK = ~I_CLK;

  // The source holds VALID and payload until the receiving clock edge.
  task automatic send_beat(
    input logic [4*PARA_DATA_WD-1:0] payload,
    input logic [1:0] size,
    input logic mode
  );
    begin
      @(posedge I_CLK);
      I_DATA <= payload;
      I_TRANSFORM_SIZE <= size;
      I_TRANSFORM_MODE <= mode;
      I_DATA_VALID <= 1'b1;
      @(posedge I_CLK);
      while (!(I_DATA_VALID && O_DATA_READY))
        @(posedge I_CLK);
      I_DATA_VALID <= 1'b0;
    end
  endtask

  // Print every input, expected output and measured RTL coefficient.
  task automatic print_full_result(input integer tc);
    integer idx;
    begin
      $display(" ");
      $display("====================================================================");
      $display("TESTCASE %0d/%0d: %s", tc+1, PARA_TEST_COUNT, r_name[tc]);
      $display("N=%0d  TRANSFORM=%s", r_n[tc], r_mode[tc] ? "DCT-8" : "DST-7");
      $display("====================================================================");
      $display("  INDEX        INPUT          GOLDEN            RTL        STATUS");
      for (idx = 0; idx < r_n[tc]; idx++) begin
        $display("    %02d   %11d     %11d    %11d        %s", idx,
                 $signed(r_input[tc][idx]), $signed(r_golden[tc][idx]),
                 $signed(r_actual[tc][idx]),
                 (r_actual[tc][idx] === r_golden[tc][idx]) ? "OK" : "ERROR");
      end
      $display(" ");
      $display("INPUT MATRIX (four values per row):");
      for (idx = 0; idx < r_n[tc]; idx = idx + 4)
        $display("  [%02d..%02d] %11d %11d %11d %11d", idx, idx+3,
                 $signed(r_input[tc][idx]), $signed(r_input[tc][idx+1]),
                 $signed(r_input[tc][idx+2]), $signed(r_input[tc][idx+3]));
      $display("GOLDEN COEFFICIENT MATRIX (four values per row):");
      for (idx = 0; idx < r_n[tc]; idx = idx + 4)
        $display("  [%02d..%02d] %11d %11d %11d %11d", idx, idx+3,
                 $signed(r_golden[tc][idx]), $signed(r_golden[tc][idx+1]),
                 $signed(r_golden[tc][idx+2]), $signed(r_golden[tc][idx+3]));
      $display("RTL COEFFICIENT MATRIX (four values per row):");
      for (idx = 0; idx < r_n[tc]; idx = idx + 4)
        $display("  [%02d..%02d] %11d %11d %11d %11d", idx, idx+3,
                 $signed(r_actual[tc][idx]), $signed(r_actual[tc][idx+1]),
                 $signed(r_actual[tc][idx+2]), $signed(r_actual[tc][idx+3]));
      if (r_case_errors[tc] == 0)
        $display("TESTCASE %0d PASS", tc+1);
      else
        $display("TESTCASE %0d FAIL (%0d errors)", tc+1, r_case_errors[tc]);
    end
  endtask

  // The consumer inserts backpressure in the fifth testcase.
  // READY changes only after a positive clock edge via NBA.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      I_DATA_READY <= 1'b0;
      r_cycle <= 0;
    end else begin
      r_cycle <= r_cycle + 1;
      if (r_test_in_progress == 4)
        I_DATA_READY <= ((r_cycle % 7) >= 4);
      else
        I_DATA_READY <= 1'b1;
    end
  end

  // The scoreboard samples payloads at the same edge as the DUT.
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
        if (!O_DATA_VALID || (O_DATA !== r_hold_data) || (O_DATA_LAST !== r_hold_last)) begin
          $display("ERROR: output not stable during stall, cycle %0d", r_cycle);
          r_total_errors = r_total_errors + 1;
          if (r_completed < PARA_TEST_COUNT)
            r_case_errors[r_completed] = r_case_errors[r_completed] + 1;
        end
      end
      r_hold_valid = O_DATA_VALID && !I_DATA_READY;
      if (r_hold_valid) begin
        r_hold_data = O_DATA;
        r_hold_last = O_DATA_LAST;
        r_stall_cycles = r_stall_cycles + 1;
      end
      if (O_DATA_VALID && I_DATA_READY) begin
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
            $display("ERROR: unexpected LAST in testcase %0d beat %0d", r_completed+1, r_rx_beat);
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
    I_TRANSFORM_MODE = 1'b0;
    I_DATA = '0;
    I_DATA_VALID = 1'b0;
    I_DATA_READY = 1'b0;
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
    r_mode[0] = 1'b0;
    r_name[0] = "DST-7 4-point mixed signed";
    r_n[1] = 8;
    r_mode[1] = 1'b1;
    r_name[1] = "DCT-8 8-point mixed signed";
    r_n[2] = 16;
    r_mode[2] = 1'b0;
    r_name[2] = "DST-7 16-point alternating signed";
    r_n[3] = 32;
    r_mode[3] = 1'b0;
    r_name[3] = "DST-7 32-point ramp and zero-out";
    r_n[4] = 32;
    r_mode[4] = 1'b1;
    r_name[4] = "DCT-8 32-point signed limits and stall";

    // TC01 TC01_DST7_4_MIXED
    r_input[0][0] = 16'sd3;
    r_input[0][1] = -16'sd1;
    r_input[0][2] = 16'sd2;
    r_input[0][3] = 16'sd4;
    r_golden[0][0] = 28'sd401;
    r_golden[0][1] = -28'sd303;
    r_golden[0][2] = 28'sd370;
    r_golden[0][3] = 28'sd320;

    // TC02 TC02_DCT8_8_MIXED
    r_input[1][0] = 16'sd3;
    r_input[1][1] = -16'sd1;
    r_input[1][2] = 16'sd2;
    r_input[1][3] = 16'sd4;
    r_input[1][4] = 16'sd0;
    r_input[1][5] = 16'sd5;
    r_input[1][6] = -16'sd2;
    r_input[1][7] = 16'sd1;
    r_golden[1][0] = 28'sd796;
    r_golden[1][1] = -28'sd219;
    r_golden[1][2] = -28'sd186;
    r_golden[1][3] = 28'sd312;
    r_golden[1][4] = 28'sd166;
    r_golden[1][5] = 28'sd393;
    r_golden[1][6] = 28'sd747;
    r_golden[1][7] = -28'sd643;

    // TC03 TC03_DST7_16_ALTERNATE
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
    r_golden[2][0] = -28'sd6598;
    r_golden[2][1] = 28'sd11938;
    r_golden[2][2] = -28'sd17175;
    r_golden[2][3] = 28'sd27496;
    r_golden[2][4] = -28'sd33323;
    r_golden[2][5] = 28'sd38150;
    r_golden[2][6] = -28'sd52860;
    r_golden[2][7] = 28'sd57713;
    r_golden[2][8] = -28'sd76735;
    r_golden[2][9] = 28'sd87212;
    r_golden[2][10] = -28'sd114653;
    r_golden[2][11] = 28'sd129367;
    r_golden[2][12] = -28'sd195879;
    r_golden[2][13] = 28'sd231011;
    r_golden[2][14] = -28'sd521573;
    r_golden[2][15] = 28'sd563310;

    // TC04 TC04_DST7_32_RAMP
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
    r_golden[3][0] = -28'sd2630824;
    r_golden[3][1] = -28'sd3017000;
    r_golden[3][2] = -28'sd2527384;
    r_golden[3][3] = -28'sd1975704;
    r_golden[3][4] = -28'sd1343427;
    r_golden[3][5] = -28'sd853811;
    r_golden[3][6] = -28'sd889153;
    r_golden[3][7] = -28'sd1121462;
    r_golden[3][8] = -28'sd883119;
    r_golden[3][9] = -28'sd454705;
    r_golden[3][10] = -28'sd488323;
    r_golden[3][11] = -28'sd814159;
    r_golden[3][12] = -28'sd720632;
    r_golden[3][13] = -28'sd299545;
    r_golden[3][14] = -28'sd306872;
    r_golden[3][15] = -28'sd697358;
    r_golden[3][16] = 28'sd0;
    r_golden[3][17] = 28'sd0;
    r_golden[3][18] = 28'sd0;
    r_golden[3][19] = 28'sd0;
    r_golden[3][20] = 28'sd0;
    r_golden[3][21] = 28'sd0;
    r_golden[3][22] = 28'sd0;
    r_golden[3][23] = 28'sd0;
    r_golden[3][24] = 28'sd0;
    r_golden[3][25] = 28'sd0;
    r_golden[3][26] = 28'sd0;
    r_golden[3][27] = 28'sd0;
    r_golden[3][28] = 28'sd0;
    r_golden[3][29] = 28'sd0;
    r_golden[3][30] = 28'sd0;
    r_golden[3][31] = 28'sd0;

    // TC05 TC05_DCT8_32_BOUNDARY
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
    r_golden[4][0] = -28'sd557706;
    r_golden[4][1] = -28'sd5570730;
    r_golden[4][2] = -28'sd7175951;
    r_golden[4][3] = -28'sd2293596;
    r_golden[4][4] = -28'sd491585;
    r_golden[4][5] = -28'sd6094849;
    r_golden[4][6] = -28'sd9043781;
    r_golden[4][7] = -28'sd3342209;
    r_golden[4][8] = -28'sd262176;
    r_golden[4][9] = -28'sd7733195;
    r_golden[4][10] = -28'sd13369113;
    r_golden[4][11] = -28'sd6356835;
    r_golden[4][12] = -28'sd229392;
    r_golden[4][13] = -28'sd13696870;
    r_golden[4][14] = -28'sd34110952;
    r_golden[4][15] = -28'sd30965234;
    r_golden[4][16] = 28'sd0;
    r_golden[4][17] = 28'sd0;
    r_golden[4][18] = 28'sd0;
    r_golden[4][19] = 28'sd0;
    r_golden[4][20] = 28'sd0;
    r_golden[4][21] = 28'sd0;
    r_golden[4][22] = 28'sd0;
    r_golden[4][23] = 28'sd0;
    r_golden[4][24] = 28'sd0;
    r_golden[4][25] = 28'sd0;
    r_golden[4][26] = 28'sd0;
    r_golden[4][27] = 28'sd0;
    r_golden[4][28] = 28'sd0;
    r_golden[4][29] = 28'sd0;
    r_golden[4][30] = 28'sd0;
    r_golden[4][31] = 28'sd0;


    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    @(posedge I_CLK);

    for (int tc = 0; tc < PARA_TEST_COUNT; tc++) begin
      @(posedge I_CLK);
      r_test_in_progress <= tc;
      for (int beat = 0; beat < r_n[tc]/4; beat++) begin
        payload = '0;
        for (int lane_idx = 0; lane_idx < 4; lane_idx++)
          payload[lane_idx*PARA_DATA_WD +: PARA_DATA_WD] = r_input[tc][4*beat+lane_idx];
        if ((tc >= 3) && (beat == 2))
          @(posedge I_CLK);
        send_beat(payload, 2'(r_n[tc] == 4 ? 0 : r_n[tc] == 8 ? 1 : r_n[tc] == 16 ? 2 : 3), r_mode[tc]);
      end
      wait (r_completed == tc+1);
    end

    repeat (8) @(posedge I_CLK);
    $display(" ");
    $display("===================== FINAL SUMMARY =====================");
    $display("Completed: %0d/%0d cases", r_completed, PARA_TEST_COUNT);
    $display("Output stall cycles: %0d", r_stall_cycles);
    if ((r_completed == PARA_TEST_COUNT) && (r_total_errors == 0) && (r_stall_cycles > 0)) begin
      $display("PASS: DST-7/DCT-8 5 basic testcases");
      $finish;
    end else begin
      $fatal(1, "FAIL: errors=%0d completed=%0d stall_cycles=%0d",
             r_total_errors, r_completed, r_stall_cycles);
    end
  end

  initial begin: watchdog
    repeat (PARA_TIMEOUT_CYCLES) @(posedge I_CLK);
    $fatal(1, "TIMEOUT: completed %0d/%0d", r_completed, PARA_TEST_COUNT);
  end
endmodule: TQ_DST7_DCT8_CORE_TB
