//-----------------------------------------------------------
// Description: Real-core integration verification for unified
// inverse 1-D VVC transforms. This TB instantiates the actual
// TQ_UNIFIED_INVERSE_1D_ENGINE, TQ_IDCT2_CORE and
// TQ_IDST7_IDCT8_CORE (including all arithmetic primitives).
// Every type x size is tested with a non-zero coefficient vector.
// Additional cases cover zero, boundary, C31 and MTS zero-out.
// The literal goldens were derived independently from the
// integer coefficient tables of ITU-T H.266 (V4, 01/2026),
// clause 8.7.4.5, using transposed matrix multiplication.
// No mock core, no RTL functions and no external .mem needed.
// All DUT stimulus is driven using nonblocking assignments
// at posedge I_CLK only; no negedge stimulus is used.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB;
  localparam integer PARA_DATA_WD   = 16;
  localparam integer PARA_RESULT_WD = 28;
  localparam integer PARA_TC_COUNT  = 20;

  logic I_CLK;
  logic I_RESETN;
  logic [1:0] I_TRANSFORM_TYPE;
  logic [1:0] I_TRANSFORM_SIZE;
  logic [4*PARA_DATA_WD-1:0] I_DATA;
  logic I_DATA_VALID;
  logic I_DATA_READY;
  logic [4*PARA_RESULT_WD-1:0] O_DATA;
  logic O_DATA_VALID;
  logic O_DATA_READY;
  logic O_DATA_LAST;

  logic [1:0] r_type [0:PARA_TC_COUNT-1];
  logic [1:0] r_size [0:PARA_TC_COUNT-1];
  logic signed [15:0] r_coeff [0:PARA_TC_COUNT-1][0:31];
  integer r_golden [0:PARA_TC_COUNT-1][0:31];
  integer r_observed [0:31];
  integer r_done;
  integer r_beat;
  integer r_cycle;
  integer r_stall_count;
  integer r_mismatch_count;
  integer r_last_stall_count;
  logic r_prev_stall;
  logic [4*PARA_RESULT_WD-1:0] r_prev_data;
  logic r_prev_last;
  integer r_actual;
  integer r_n;
  integer r_index;
  // This count is updated only when the DUT actually accepts an input beat.
  // Using an independent edge monitor avoids sampling READY after its
  // deassertion on the final beat of a vector.
  integer r_input_accepted_count;
  integer r_driver_tc;
  integer r_driver_beat;

  TQ_UNIFIED_INVERSE_1D_ENGINE #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_dut (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_TRANSFORM_TYPE(I_TRANSFORM_TYPE),
    .I_TRANSFORM_SIZE(I_TRANSFORM_SIZE),
    .I_DATA(I_DATA),
    .I_DATA_VALID(I_DATA_VALID),
    .I_DATA_READY(I_DATA_READY),
    .O_DATA(O_DATA),
    .O_DATA_VALID(O_DATA_VALID),
    .O_DATA_READY(O_DATA_READY),
    .O_DATA_LAST(O_DATA_LAST)
  );

  initial begin
    I_CLK = 1'b0;
    forever #5 I_CLK = ~I_CLK;
  end

  // Only rising edges modify the downstream ready signal.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_cycle <= 0;
      O_DATA_READY <= 1'b0;
    end
    else begin
      r_cycle <= r_cycle + 1;
      O_DATA_READY <= ((r_cycle % 19) >= 8);
    end
  end

  // Record the pre-NBA input handshake. This process never drives DUT input.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_input_accepted_count <= 0;
    end
    else if (I_DATA_VALID && I_DATA_READY) begin
      r_input_accepted_count <= r_input_accepted_count + 1;
      $display("[HS IN] TC=%0d beat=%0d accepted_count=%0d type_live=%0d",
               r_driver_tc, r_driver_beat,
               r_input_accepted_count + 1, I_TRANSFORM_TYPE);
    end
  end

  // Capture only accepted output beats. This scoreboard observes
  // the pre-NBA transaction at every rising edge.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_done = 0;
      r_beat = 0;
      r_stall_count = 0;
      r_mismatch_count = 0;
      r_last_stall_count = 0;
      r_prev_stall = 1'b0;
      r_prev_data = '0;
      r_prev_last = 1'b0;
    end
    else begin
      if (r_prev_stall &&
          ((!O_DATA_VALID) || (O_DATA !== r_prev_data) ||
           (O_DATA_LAST !== r_prev_last)))
        $fatal(1, "[FAIL] Output unstable during stall: tc=%0d beat=%0d", r_done, r_beat);

      if (O_DATA_VALID && !O_DATA_READY) begin
        r_stall_count = r_stall_count + 1;
        if (O_DATA_LAST)
          r_last_stall_count = r_last_stall_count + 1;
      end

      if (O_DATA_VALID && O_DATA_READY) begin
        if (r_done >= PARA_TC_COUNT)
          $fatal(1, "[FAIL] Unexpected extra output vector");
        r_n = 4 << int'(r_size[r_done]);
        if (O_DATA_LAST !== (r_beat == (r_n/4-1)))
          $fatal(1, "[FAIL] LAST tc=%0d beat=%0d expected=%0d got=%0b",
                 r_done, r_beat, (r_beat == (r_n/4-1)), O_DATA_LAST);

        for (integer lane = 0; lane < 4; lane++) begin
          r_index = 4*r_beat + lane;
          r_actual = $signed(O_DATA[lane*PARA_RESULT_WD +: PARA_RESULT_WD]);
          r_observed[r_index] = r_actual;
          if (r_actual !== r_golden[r_done][r_index]) begin
            $display("[MISMATCH] tc=%0d type=%0d N=%0d X[%0d] actual=%0d golden=%0d",
                     r_done, r_type[r_done], r_n, r_index,
                     r_actual, r_golden[r_done][r_index]);
            r_mismatch_count = r_mismatch_count + 1;
          end
        end

        if (O_DATA_LAST) begin
          $display("-------------------------------------------------------------");
          $display("[VECTOR] TC=%0d type=%0d N=%0d", r_done, r_type[r_done], r_n);
          $display("  Input coefficients:");
          for (integer k = 0; k < r_n; k += 4)
            $display("    C[%0d..%0d]: %0d %0d %0d %0d", k, k+3,
                     r_coeff[r_done][k], r_coeff[r_done][k+1],
                     r_coeff[r_done][k+2], r_coeff[r_done][k+3]);
          $display("  RAW output actual:");
          for (integer k = 0; k < r_n; k += 4)
            $display("    X[%0d..%0d]: %0d %0d %0d %0d", k, k+3,
                     r_observed[k], r_observed[k+1],
                     r_observed[k+2], r_observed[k+3]);
          $display("  RAW output golden:");
          for (integer k = 0; k < r_n; k += 4)
            $display("    G[%0d..%0d]: %0d %0d %0d %0d", k, k+3,
                     r_golden[r_done][k], r_golden[r_done][k+1],
                     r_golden[r_done][k+2], r_golden[r_done][k+3]);
          if (r_mismatch_count != 0)
            $fatal(1, "[FAIL] TC=%0d total mismatches=%0d", r_done, r_mismatch_count);
          $display("[PASS] TC=%0d type=%0d N=%0d", r_done, r_type[r_done], r_n);
          r_mismatch_count = 0;
          r_done = r_done + 1;
          r_beat = 0;
        end
        else
          r_beat = r_beat + 1;
      end

      r_prev_stall = O_DATA_VALID && !O_DATA_READY;
      r_prev_data = O_DATA;
      r_prev_last = O_DATA_LAST;
    end
  end

  // Drive stimulus ONLY at posedge with nonblocking assignments.
  // Count handshakes at posedge in a separate monitor, then deassert VALID
  // as soon as the observed count advances (after the handshake's NBA).
  // Do not poll READY directly after the edge: it may already have dropped
  // because the child completed its last input transaction.
  task automatic send_vector(input integer tc);
    logic [4*PARA_DATA_WD-1:0] w_data;
    integer w_nbeats;
    integer w_expected_ack;
    begin
      w_nbeats = 1 << int'(r_size[tc]);
      r_driver_tc = tc;
      r_driver_beat = -1;
      $display("[SEND] TC=%0d type=%0d N=%0d beats=%0d",
               tc, r_type[tc], 4*w_nbeats, w_nbeats);

      for (integer beat = 0; beat < w_nbeats; beat++) begin
        r_driver_beat = beat;
        w_data = '0;
        for (integer lane = 0; lane < 4; lane++)
          w_data[lane*PARA_DATA_WD +: PARA_DATA_WD] =
            r_coeff[tc][4*beat+lane];

        // The monitor count can only advance at a genuine input handshake.
        w_expected_ack = r_input_accepted_count + 1;
        @(posedge I_CLK);
        I_DATA_VALID <= 1'b1;
        I_DATA <= w_data;
        // Change live configuration after the first beat deliberately.
        // The DUT is required to retain the latched size and mode.
        I_TRANSFORM_TYPE <= (beat == 0) ? r_type[tc] : 2'b11;
        I_TRANSFORM_SIZE <= (beat == 0) ? r_size[tc] : ~r_size[tc];

        // wait wakes on the monitor's NBA update, not on READY itself.
        // VALID is removed before another rising edge can reaccept the beat.
        wait (r_input_accepted_count == w_expected_ack);
        I_DATA_VALID <= 1'b0;
      end
    end
  endtask

  initial begin
    I_RESETN = 1'b0;
    I_DATA_VALID = 1'b0;
    I_DATA = '0;
    I_TRANSFORM_TYPE = 2'b00;
    I_TRANSFORM_SIZE = 2'b00;
    r_driver_tc = -1;
    r_driver_beat = -1;
    // O_DATA_READY is driven by the rising-edge process above.

    // Initialize all cases before the first input handshake.
    for (integer tc = 0; tc < PARA_TC_COUNT; tc++) begin
      r_type[tc] = '0;
      r_size[tc] = '0;
      for (integer k = 0; k < 32; k++) begin
        r_coeff[tc][k] = '0;
        r_golden[tc][k] = 0;
      end
    end

    // Literal golden data generated from the H.266 integer
    // matrices (not from DUT MCM arithmetic or routing).
    // TC00: type=0 N=4
    r_type[0] = 2'd0;
    r_size[0] = 2'd0;
    r_coeff[0][0] = -16'sd19;
    r_coeff[0][1] = 16'sd126;
    r_coeff[0][2] = 16'sd329;
    r_coeff[0][3] = 16'sd590;
    r_golden[0][0] = 51538;
    r_golden[0][1] = -66706;
    r_golden[0][2] = 22162;
    r_golden[0][3] = -11858;
    // TC01: type=1 N=4
    r_type[1] = 2'd1;
    r_size[1] = 2'd0;
    r_coeff[1][0] = 16'sd112;
    r_coeff[1][1] = 16'sd257;
    r_coeff[1][2] = 16'sd460;
    r_coeff[1][3] = 16'sd721;
    r_golden[1][0] = 100561;
    r_golden[1][1] = -48726;
    r_golden[1][2] = 27602;
    r_golden[1][3] = -5219;
    // TC02: type=2 N=4
    r_type[2] = 2'd2;
    r_size[2] = 2'd0;
    r_coeff[2][0] = 16'sd243;
    r_coeff[2][1] = 16'sd388;
    r_coeff[2][2] = 16'sd591;
    r_coeff[2][3] = 16'sd852;
    r_golden[2][0] = 106337;
    r_golden[2][1] = -88800;
    r_golden[2][2] = 39082;
    r_golden[2][3] = -18881;
    // TC03: type=0 N=8
    r_type[3] = 2'd0;
    r_size[3] = 2'd1;
    r_coeff[3][0] = 16'sd374;
    r_coeff[3][1] = 16'sd519;
    r_coeff[3][2] = 16'sd722;
    r_coeff[3][3] = 16'sd983;
    r_coeff[3][4] = -16'sd745;
    r_coeff[3][5] = -16'sd368;
    r_coeff[3][6] = 16'sd67;
    r_coeff[3][7] = 16'sd560;
    r_golden[3][0] = 150190;
    r_golden[3][1] = 118030;
    r_golden[3][2] = 25024;
    r_golden[3][3] = -203330;
    r_golden[3][4] = 31166;
    r_golden[3][5] = 77346;
    r_golden[3][6] = 66064;
    r_golden[3][7] = -73002;
    // TC04: type=1 N=8
    r_type[4] = 2'd1;
    r_size[4] = 2'd1;
    r_coeff[4][0] = 16'sd505;
    r_coeff[4][1] = 16'sd650;
    r_coeff[4][2] = 16'sd853;
    r_coeff[4][3] = -16'sd933;
    r_coeff[4][4] = -16'sd614;
    r_coeff[4][5] = -16'sd237;
    r_coeff[4][6] = 16'sd198;
    r_coeff[4][7] = 16'sd691;
    r_golden[4][0] = -17555;
    r_golden[4][1] = 65224;
    r_golden[4][2] = 286581;
    r_golden[4][3] = 7401;
    r_golden[4][4] = -16609;
    r_golden[4][5] = -99481;
    r_golden[4][6] = 28124;
    r_golden[4][7] = 89608;
    // TC05: type=2 N=8
    r_type[5] = 2'd2;
    r_size[5] = 2'd1;
    r_coeff[5][0] = 16'sd636;
    r_coeff[5][1] = 16'sd781;
    r_coeff[5][2] = 16'sd984;
    r_coeff[5][3] = -16'sd802;
    r_coeff[5][4] = -16'sd483;
    r_coeff[5][5] = -16'sd106;
    r_coeff[5][6] = 16'sd329;
    r_coeff[5][7] = 16'sd822;
    r_golden[5][0] = 131537;
    r_golden[5][1] = 123247;
    r_golden[5][2] = 177970;
    r_golden[5][3] = -179864;
    r_golden[5][4] = -66458;
    r_golden[5][5] = -56046;
    r_golden[5][6] = 101677;
    r_golden[5][7] = 73086;
    // TC06: type=0 N=16
    r_type[6] = 2'd0;
    r_size[6] = 2'd2;
    r_coeff[6][0] = 16'sd767;
    r_coeff[6][1] = 16'sd912;
    r_coeff[6][2] = -16'sd932;
    r_coeff[6][3] = -16'sd671;
    r_coeff[6][4] = -16'sd352;
    r_coeff[6][5] = 16'sd25;
    r_coeff[6][6] = 16'sd460;
    r_coeff[6][7] = 16'sd953;
    r_coeff[6][8] = -16'sd543;
    r_coeff[6][9] = 16'sd66;
    r_coeff[6][10] = 16'sd733;
    r_coeff[6][11] = -16'sd589;
    r_coeff[6][12] = 16'sd194;
    r_coeff[6][13] = -16'sd1012;
    r_coeff[6][14] = -16'sd113;
    r_coeff[6][15] = 16'sd844;
    r_golden[6][0] = 31416;
    r_golden[6][1] = 15112;
    r_golden[6][2] = -77958;
    r_golden[6][3] = 184986;
    r_golden[6][4] = 268334;
    r_golden[6][5] = 196691;
    r_golden[6][6] = 317262;
    r_golden[6][7] = -134591;
    r_golden[6][8] = 146463;
    r_golden[6][9] = 68404;
    r_golden[6][10] = 194179;
    r_golden[6][11] = -245710;
    r_golden[6][12] = -61338;
    r_golden[6][13] = 137544;
    r_golden[6][14] = -180514;
    r_golden[6][15] = -74872;
    // TC07: type=1 N=16
    r_type[7] = 2'd1;
    r_size[7] = 2'd2;
    r_coeff[7][0] = 16'sd898;
    r_coeff[7][1] = -16'sd1004;
    r_coeff[7][2] = -16'sd801;
    r_coeff[7][3] = -16'sd540;
    r_coeff[7][4] = -16'sd221;
    r_coeff[7][5] = 16'sd156;
    r_coeff[7][6] = 16'sd591;
    r_coeff[7][7] = -16'sd963;
    r_coeff[7][8] = -16'sd412;
    r_coeff[7][9] = 16'sd197;
    r_coeff[7][10] = 16'sd864;
    r_coeff[7][11] = -16'sd458;
    r_coeff[7][12] = 16'sd325;
    r_coeff[7][13] = -16'sd881;
    r_coeff[7][14] = 16'sd18;
    r_coeff[7][15] = 16'sd975;
    r_golden[7][0] = -104717;
    r_golden[7][1] = -152321;
    r_golden[7][2] = -138383;
    r_golden[7][3] = -99562;
    r_golden[7][4] = -154943;
    r_golden[7][5] = -172381;
    r_golden[7][6] = 348848;
    r_golden[7][7] = -9906;
    r_golden[7][8] = 35309;
    r_golden[7][9] = -110571;
    r_golden[7][10] = 303611;
    r_golden[7][11] = 76240;
    r_golden[7][12] = 120306;
    r_golden[7][13] = 151726;
    r_golden[7][14] = -69809;
    r_golden[7][15] = 270972;
    // TC08: type=2 N=16
    r_type[8] = 2'd2;
    r_size[8] = 2'd2;
    r_coeff[8][0] = -16'sd1018;
    r_coeff[8][1] = -16'sd873;
    r_coeff[8][2] = -16'sd670;
    r_coeff[8][3] = -16'sd409;
    r_coeff[8][4] = -16'sd90;
    r_coeff[8][5] = 16'sd287;
    r_coeff[8][6] = 16'sd722;
    r_coeff[8][7] = -16'sd832;
    r_coeff[8][8] = -16'sd281;
    r_coeff[8][9] = 16'sd328;
    r_coeff[8][10] = 16'sd995;
    r_coeff[8][11] = -16'sd327;
    r_coeff[8][12] = 16'sd456;
    r_coeff[8][13] = -16'sd750;
    r_coeff[8][14] = 16'sd149;
    r_coeff[8][15] = -16'sd941;
    r_golden[8][0] = -221923;
    r_golden[8][1] = -241660;
    r_golden[8][2] = -220214;
    r_golden[8][3] = -4767;
    r_golden[8][4] = -228203;
    r_golden[8][5] = 149688;
    r_golden[8][6] = 136214;
    r_golden[8][7] = -46151;
    r_golden[8][8] = -220175;
    r_golden[8][9] = 98251;
    r_golden[8][10] = 82096;
    r_golden[8][11] = 31021;
    r_golden[8][12] = -131150;
    r_golden[8][13] = 86292;
    r_golden[8][14] = -179494;
    r_golden[8][15] = 252131;
    // TC09: type=0 N=32
    r_type[9] = 2'd0;
    r_size[9] = 2'd3;
    r_coeff[9][0] = -16'sd887;
    r_coeff[9][1] = -16'sd742;
    r_coeff[9][2] = -16'sd539;
    r_coeff[9][3] = -16'sd278;
    r_coeff[9][4] = 16'sd41;
    r_coeff[9][5] = 16'sd418;
    r_coeff[9][6] = 16'sd853;
    r_coeff[9][7] = -16'sd701;
    r_coeff[9][8] = -16'sd150;
    r_coeff[9][9] = 16'sd459;
    r_coeff[9][10] = -16'sd921;
    r_coeff[9][11] = -16'sd196;
    r_coeff[9][12] = 16'sd587;
    r_coeff[9][13] = -16'sd619;
    r_coeff[9][14] = 16'sd280;
    r_coeff[9][15] = -16'sd810;
    r_coeff[9][16] = 16'sd205;
    r_coeff[9][17] = -16'sd769;
    r_coeff[9][18] = 16'sd362;
    r_coeff[9][19] = -16'sd496;
    r_coeff[9][20] = 16'sd751;
    r_coeff[9][21] = 16'sd9;
    r_coeff[9][22] = -16'sd675;
    r_coeff[9][23] = 16'sd746;
    r_coeff[9][24] = 16'sd178;
    r_coeff[9][25] = -16'sd332;
    r_coeff[9][26] = -16'sd784;
    r_coeff[9][27] = 16'sd869;
    r_coeff[9][28] = 16'sd533;
    r_coeff[9][29] = 16'sd255;
    r_coeff[9][30] = 16'sd35;
    r_coeff[9][31] = -16'sd127;
    r_golden[9][0] = -235933;
    r_golden[9][1] = -147166;
    r_golden[9][2] = 38902;
    r_golden[9][3] = -234266;
    r_golden[9][4] = -190628;
    r_golden[9][5] = -263982;
    r_golden[9][6] = -82872;
    r_golden[9][7] = -314106;
    r_golden[9][8] = -144386;
    r_golden[9][9] = 61582;
    r_golden[9][10] = -9514;
    r_golden[9][11] = 155204;
    r_golden[9][12] = -166046;
    r_golden[9][13] = 231450;
    r_golden[9][14] = -81142;
    r_golden[9][15] = 29101;
    r_golden[9][16] = 173265;
    r_golden[9][17] = -435330;
    r_golden[9][18] = -100452;
    r_golden[9][19] = -117950;
    r_golden[9][20] = -137902;
    r_golden[9][21] = 371574;
    r_golden[9][22] = 202756;
    r_golden[9][23] = 2884;
    r_golden[9][24] = -122424;
    r_golden[9][25] = -137794;
    r_golden[9][26] = -310134;
    r_golden[9][27] = 101798;
    r_golden[9][28] = 288942;
    r_golden[9][29] = -355556;
    r_golden[9][30] = -100530;
    r_golden[9][31] = 214079;
    // TC10: type=1 N=32
    r_type[10] = 2'd1;
    r_size[10] = 2'd3;
    r_coeff[10][0] = -16'sd756;
    r_coeff[10][1] = -16'sd611;
    r_coeff[10][2] = -16'sd408;
    r_coeff[10][3] = -16'sd147;
    r_coeff[10][4] = 16'sd172;
    r_coeff[10][5] = 16'sd549;
    r_coeff[10][6] = 16'sd984;
    r_coeff[10][7] = -16'sd570;
    r_coeff[10][8] = -16'sd19;
    r_coeff[10][9] = 16'sd590;
    r_coeff[10][10] = -16'sd790;
    r_coeff[10][11] = -16'sd65;
    r_coeff[10][12] = 16'sd718;
    r_coeff[10][13] = -16'sd488;
    r_coeff[10][14] = 16'sd411;
    r_coeff[10][15] = -16'sd679;
    r_coeff[10][16] = 16'sd336;
    r_coeff[10][17] = -16'sd638;
    r_coeff[10][18] = 16'sd493;
    r_coeff[10][19] = -16'sd365;
    r_coeff[10][20] = 16'sd882;
    r_coeff[10][21] = 16'sd140;
    r_coeff[10][22] = -16'sd544;
    r_coeff[10][23] = 16'sd877;
    r_coeff[10][24] = 16'sd309;
    r_coeff[10][25] = -16'sd201;
    r_coeff[10][26] = -16'sd653;
    r_coeff[10][27] = 16'sd1000;
    r_coeff[10][28] = 16'sd664;
    r_coeff[10][29] = 16'sd386;
    r_coeff[10][30] = 16'sd166;
    r_coeff[10][31] = 16'sd4;
    r_golden[10][0] = -5605;
    r_golden[10][1] = 44655;
    r_golden[10][2] = 77411;
    r_golden[10][3] = 15585;
    r_golden[10][4] = -78711;
    r_golden[10][5] = -117072;
    r_golden[10][6] = -146976;
    r_golden[10][7] = -229157;
    r_golden[10][8] = -286525;
    r_golden[10][9] = -195612;
    r_golden[10][10] = -42601;
    r_golden[10][11] = -6548;
    r_golden[10][12] = -69227;
    r_golden[10][13] = -58397;
    r_golden[10][14] = 50274;
    r_golden[10][15] = 102776;
    r_golden[10][16] = 4558;
    r_golden[10][17] = -143815;
    r_golden[10][18] = -233967;
    r_golden[10][19] = -235080;
    r_golden[10][20] = -123748;
    r_golden[10][21] = 98309;
    r_golden[10][22] = 262326;
    r_golden[10][23] = 150727;
    r_golden[10][24] = -157298;
    r_golden[10][25] = -293151;
    r_golden[10][26] = -115822;
    r_golden[10][27] = 75017;
    r_golden[10][28] = -777;
    r_golden[10][29] = -156513;
    r_golden[10][30] = -86745;
    r_golden[10][31] = 118501;
    // TC11: type=2 N=32
    r_type[11] = 2'd2;
    r_size[11] = 2'd3;
    r_coeff[11][0] = -16'sd625;
    r_coeff[11][1] = -16'sd480;
    r_coeff[11][2] = -16'sd277;
    r_coeff[11][3] = -16'sd16;
    r_coeff[11][4] = 16'sd303;
    r_coeff[11][5] = 16'sd680;
    r_coeff[11][6] = -16'sd932;
    r_coeff[11][7] = -16'sd439;
    r_coeff[11][8] = 16'sd112;
    r_coeff[11][9] = 16'sd721;
    r_coeff[11][10] = -16'sd659;
    r_coeff[11][11] = 16'sd66;
    r_coeff[11][12] = 16'sd849;
    r_coeff[11][13] = -16'sd357;
    r_coeff[11][14] = 16'sd542;
    r_coeff[11][15] = -16'sd548;
    r_coeff[11][16] = 16'sd467;
    r_coeff[11][17] = -16'sd507;
    r_coeff[11][18] = 16'sd624;
    r_coeff[11][19] = -16'sd234;
    r_coeff[11][20] = 16'sd1013;
    r_coeff[11][21] = 16'sd271;
    r_coeff[11][22] = -16'sd413;
    r_coeff[11][23] = 16'sd1008;
    r_coeff[11][24] = 16'sd440;
    r_coeff[11][25] = -16'sd70;
    r_coeff[11][26] = -16'sd522;
    r_coeff[11][27] = -16'sd916;
    r_coeff[11][28] = 16'sd795;
    r_coeff[11][29] = 16'sd517;
    r_coeff[11][30] = 16'sd297;
    r_coeff[11][31] = 16'sd135;
    r_golden[11][0] = -98412;
    r_golden[11][1] = -113252;
    r_golden[11][2] = -134684;
    r_golden[11][3] = -116041;
    r_golden[11][4] = -45309;
    r_golden[11][5] = -5265;
    r_golden[11][6] = -77741;
    r_golden[11][7] = -188655;
    r_golden[11][8] = -193274;
    r_golden[11][9] = -95365;
    r_golden[11][10] = -37100;
    r_golden[11][11] = -51508;
    r_golden[11][12] = -6170;
    r_golden[11][13] = 146233;
    r_golden[11][14] = 257237;
    r_golden[11][15] = 178246;
    r_golden[11][16] = -23014;
    r_golden[11][17] = -183056;
    r_golden[11][18] = -229344;
    r_golden[11][19] = -166875;
    r_golden[11][20] = -7611;
    r_golden[11][21] = 155984;
    r_golden[11][22] = 157003;
    r_golden[11][23] = -23593;
    r_golden[11][24] = -131366;
    r_golden[11][25] = 20613;
    r_golden[11][26] = 224347;
    r_golden[11][27] = 152672;
    r_golden[11][28] = -134777;
    r_golden[11][29] = -258301;
    r_golden[11][30] = -95120;
    r_golden[11][31] = 54072;
    // TC12: type=0 N=4
    r_type[12] = 2'd0;
    r_size[12] = 2'd0;
    // TC13: type=1 N=8
    r_type[13] = 2'd1;
    r_size[13] = 2'd1;
    // TC14: type=2 N=32
    r_type[14] = 2'd2;
    r_size[14] = 2'd3;
    // TC15: type=2 N=4
    r_type[15] = 2'd2;
    r_size[15] = 2'd0;
    r_coeff[15][1] = 16'sh8000;
    r_golden[15][0] = -2424832;
    r_golden[15][2] = 2424832;
    r_golden[15][3] = 2424832;
    // TC16: type=0 N=32
    r_type[16] = 2'd0;
    r_size[16] = 2'd3;
    r_coeff[16][31] = 16'sd1;
    r_golden[16][0] = 4;
    r_golden[16][1] = -13;
    r_golden[16][2] = 22;
    r_golden[16][3] = -31;
    r_golden[16][4] = 38;
    r_golden[16][5] = -46;
    r_golden[16][6] = 54;
    r_golden[16][7] = -61;
    r_golden[16][8] = 67;
    r_golden[16][9] = -73;
    r_golden[16][10] = 78;
    r_golden[16][11] = -82;
    r_golden[16][12] = 85;
    r_golden[16][13] = -88;
    r_golden[16][14] = 90;
    r_golden[16][15] = -90;
    r_golden[16][16] = 90;
    r_golden[16][17] = -90;
    r_golden[16][18] = 88;
    r_golden[16][19] = -85;
    r_golden[16][20] = 82;
    r_golden[16][21] = -78;
    r_golden[16][22] = 73;
    r_golden[16][23] = -67;
    r_golden[16][24] = 61;
    r_golden[16][25] = -54;
    r_golden[16][26] = 46;
    r_golden[16][27] = -38;
    r_golden[16][28] = 31;
    r_golden[16][29] = -22;
    r_golden[16][30] = 13;
    r_golden[16][31] = -4;
    // TC17: type=1 N=32
    r_type[17] = 2'd1;
    r_size[17] = 2'd3;
    r_coeff[17][15] = 16'sd1;
    r_coeff[17][16] = 16'sd17;
    r_coeff[17][17] = 16'sd34;
    r_coeff[17][18] = 16'sd51;
    r_coeff[17][19] = 16'sd68;
    r_coeff[17][20] = 16'sd85;
    r_coeff[17][21] = 16'sd102;
    r_coeff[17][22] = 16'sd119;
    r_coeff[17][23] = 16'sd136;
    r_coeff[17][24] = 16'sd153;
    r_coeff[17][25] = 16'sd170;
    r_coeff[17][26] = 16'sd187;
    r_coeff[17][27] = 16'sd204;
    r_coeff[17][28] = 16'sd221;
    r_coeff[17][29] = 16'sd238;
    r_coeff[17][30] = 16'sd255;
    r_coeff[17][31] = 16'sd272;
    r_golden[17][0] = 90;
    r_golden[17][1] = 13;
    r_golden[17][2] = -87;
    r_golden[17][3] = -26;
    r_golden[17][4] = 84;
    r_golden[17][5] = 38;
    r_golden[17][6] = -78;
    r_golden[17][7] = -50;
    r_golden[17][8] = 72;
    r_golden[17][9] = 60;
    r_golden[17][10] = -63;
    r_golden[17][11] = -68;
    r_golden[17][12] = 53;
    r_golden[17][13] = 77;
    r_golden[17][14] = -42;
    r_golden[17][15] = -82;
    r_golden[17][16] = 30;
    r_golden[17][17] = 86;
    r_golden[17][18] = -17;
    r_golden[17][19] = -89;
    r_golden[17][20] = 4;
    r_golden[17][21] = 90;
    r_golden[17][22] = 9;
    r_golden[17][23] = -88;
    r_golden[17][24] = -21;
    r_golden[17][25] = 85;
    r_golden[17][26] = 34;
    r_golden[17][27] = -80;
    r_golden[17][28] = -46;
    r_golden[17][29] = 74;
    r_golden[17][30] = 56;
    r_golden[17][31] = -66;
    // TC18: type=2 N=32
    r_type[18] = 2'd2;
    r_size[18] = 2'd3;
    r_coeff[18][15] = 16'sh8000;
    r_coeff[18][16] = 16'sd211;
    r_coeff[18][17] = 16'sd422;
    r_coeff[18][18] = 16'sd633;
    r_coeff[18][19] = 16'sd844;
    r_coeff[18][20] = 16'sd1055;
    r_coeff[18][21] = 16'sd1266;
    r_coeff[18][22] = 16'sd1477;
    r_coeff[18][23] = 16'sd1688;
    r_coeff[18][24] = 16'sd1899;
    r_coeff[18][25] = 16'sd2110;
    r_coeff[18][26] = 16'sd2321;
    r_coeff[18][27] = 16'sd2532;
    r_coeff[18][28] = 16'sd2743;
    r_coeff[18][29] = 16'sd2954;
    r_coeff[18][30] = 16'sd3165;
    r_coeff[18][31] = 16'sd3376;
    r_golden[18][0] = -2162688;
    r_golden[18][1] = 1835008;
    r_golden[18][2] = 2424832;
    r_golden[18][3] = -1507328;
    r_golden[18][4] = -2621440;
    r_golden[18][5] = 1114112;
    r_golden[18][6] = 2785280;
    r_golden[18][7] = -688128;
    r_golden[18][8] = -2883584;
    r_golden[18][9] = 294912;
    r_golden[18][10] = 2949120;
    r_golden[18][11] = 131072;
    r_golden[18][12] = -2916352;
    r_golden[18][13] = -557056;
    r_golden[18][14] = 2818048;
    r_golden[18][15] = 983040;
    r_golden[18][16] = -2686976;
    r_golden[18][17] = -1376256;
    r_golden[18][18] = 2523136;
    r_golden[18][19] = 1736704;
    r_golden[18][20] = -2228224;
    r_golden[18][21] = -2064384;
    r_golden[18][22] = 1966080;
    r_golden[18][23] = 2359296;
    r_golden[18][24] = -1638400;
    r_golden[18][25] = -2555904;
    r_golden[18][26] = 1245184;
    r_golden[18][27] = 2752512;
    r_golden[18][28] = -851968;
    r_golden[18][29] = -2850816;
    r_golden[18][30] = 425984;
    r_golden[18][31] = 2949120;
    // TC19: type=0 N=32
    r_type[19] = 2'd0;
    r_size[19] = 2'd3;
    r_coeff[19][0] = 16'sh8000;
    r_coeff[19][1] = 16'sh8000;
    r_coeff[19][2] = 16'sh8000;
    r_coeff[19][3] = 16'sh8000;
    r_coeff[19][4] = 16'sh8000;
    r_coeff[19][5] = 16'sh8000;
    r_coeff[19][6] = 16'sh8000;
    r_coeff[19][7] = 16'sh8000;
    r_coeff[19][8] = 16'sh8000;
    r_coeff[19][9] = 16'sh8000;
    r_coeff[19][10] = 16'sh8000;
    r_coeff[19][11] = 16'sh8000;
    r_coeff[19][12] = 16'sh8000;
    r_coeff[19][13] = 16'sh8000;
    r_coeff[19][14] = 16'sh8000;
    r_coeff[19][15] = 16'sh8000;
    r_coeff[19][16] = 16'sh8000;
    r_coeff[19][17] = 16'sh8000;
    r_coeff[19][18] = 16'sh8000;
    r_coeff[19][19] = 16'sh8000;
    r_coeff[19][20] = 16'sh8000;
    r_coeff[19][21] = 16'sh8000;
    r_coeff[19][22] = 16'sh8000;
    r_coeff[19][23] = 16'sh8000;
    r_coeff[19][24] = 16'sh8000;
    r_coeff[19][25] = 16'sh8000;
    r_coeff[19][26] = 16'sh8000;
    r_coeff[19][27] = 16'sh8000;
    r_coeff[19][28] = 16'sh8000;
    r_coeff[19][29] = 16'sh8000;
    r_coeff[19][30] = 16'sh8000;
    r_coeff[19][31] = 16'sh8000;
    r_golden[19][0] = -61014016;
    r_golden[19][1] = 19398656;
    r_golden[19][2] = -12648448;
    r_golden[19][3] = 8060928;
    r_golden[19][4] = -7208960;
    r_golden[19][5] = 4784128;
    r_golden[19][6] = -5242880;
    r_golden[19][7] = 3276800;
    r_golden[19][8] = -3932160;
    r_golden[19][9] = 2293760;
    r_golden[19][10] = -3211264;
    r_golden[19][11] = 1769472;
    r_golden[19][12] = -2818048;
    r_golden[19][13] = 1441792;
    r_golden[19][14] = -2359296;
    r_golden[19][15] = 917504;
    r_golden[19][16] = -2097152;
    r_golden[19][17] = 655360;
    r_golden[19][18] = -1703936;
    r_golden[19][19] = 458752;
    r_golden[19][20] = -1507328;
    r_golden[19][21] = 196608;
    r_golden[19][22] = -1507328;
    r_golden[19][23] = 131072;
    r_golden[19][24] = -1441792;
    r_golden[19][25] = -131072;
    r_golden[19][26] = -851968;
    r_golden[19][27] = -262144;
    r_golden[19][28] = -851968;
    r_golden[19][29] = -327680;
    r_golden[19][30] = -786432;
    r_golden[19][31] = -589824;

    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    repeat (2) @(posedge I_CLK);

    for (integer tc = 0; tc < PARA_TC_COUNT; tc++) begin
      send_vector(tc);
      wait (r_done == tc + 1);
    end

    repeat (4) @(posedge I_CLK);
    if (r_stall_count == 0)
      $fatal(1, "[FAIL] No output backpressure was exercised");
    $display("=============================================================");
    $display("[PASS] REAL unified inverse 1-D: %0d vectors; stalls=%0d last_stalls=%0d",
             PARA_TC_COUNT, r_stall_count, r_last_stall_count);
    $finish;
  end

  initial begin
    repeat (60000) @(posedge I_CLK);
    $fatal(1, "[FAIL] Timeout; completed=%0d/%0d", r_done, PARA_TC_COUNT);
  end
endmodule: TQ_UNIFIED_INVERSE_1D_ENGINE_REAL_TB
