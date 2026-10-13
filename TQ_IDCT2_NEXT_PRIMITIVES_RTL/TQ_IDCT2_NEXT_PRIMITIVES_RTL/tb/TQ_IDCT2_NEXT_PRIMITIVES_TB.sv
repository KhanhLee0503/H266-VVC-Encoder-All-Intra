//-----------------------------------------------------------
// Description: This testbench verifies the inverse 4-point
// even/odd join and the inverse 8-point odd MCM. The join
// receives its inputs from the previously developed BASE_2
// and ODD_MCM_4 modules, including deliberately offset input
// timing. Checkers compare raw integers with independent
// equations and verify output stability during backpressure.
// All stimulus changes occur on positive clock edges only.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_NEXT_PRIMITIVES_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_RESULT_WD = 28;
  localparam PARA_TEST_COUNT = 12;

  logic                                 I_CLK;
  logic                                 I_RESETN;
  logic                                 r_base_valid;
  logic                                 w_base_ready;
  logic [2*PARA_DATA_WD-1:0]            r_base_data;
  logic                                 w_base_output_valid;
  logic                                 w_base_output_ready;
  logic [2*PARA_RESULT_WD-1:0]          w_base_output_data;
  logic                                 r_odd4_valid;
  logic                                 w_odd4_ready;
  logic [2*PARA_DATA_WD-1:0]            r_odd4_data;
  logic                                 w_odd4_output_valid;
  logic                                 w_odd4_output_ready;
  logic [2*PARA_RESULT_WD-1:0]          w_odd4_output_data;
  logic                                 w_combine_valid;
  logic                                 r_combine_ready;
  logic [4*PARA_RESULT_WD-1:0]          w_combine_data;
  logic                                 r_odd8_valid;
  logic                                 w_odd8_ready;
  logic [4*PARA_DATA_WD-1:0]            r_odd8_data;
  logic                                 w_odd8_output_valid;
  logic                                 r_odd8_output_ready;
  logic [4*PARA_RESULT_WD-1:0]          w_odd8_output_data;
  logic                                 r_combine_was_stalled;
  logic                                 r_odd8_was_stalled;
  logic [4*PARA_RESULT_WD-1:0]          r_combine_previous;
  logic [4*PARA_RESULT_WD-1:0]          r_odd8_previous;
  integer                               r_cycle_count;
  integer                               r_combine_received;
  integer                               r_odd8_received;
  integer                               r_combine_stall_cycles;
  integer                               r_odd8_stall_cycles;
  integer signed                        r_c0 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c1 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c2 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c3 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c5 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c7 [0:PARA_TEST_COUNT-1];
  integer signed                        r_expected4 [0:3];
  integer signed                        r_expected8 [0:3];

  TQ_IDCT2_BASE_2 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_base_2 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(r_base_valid),
    .O_DATA_READY(w_base_ready),
    .I_DATA(r_base_data),
    .O_DATA_VALID(w_base_output_valid),
    .I_DATA_READY(w_base_output_ready),
    .O_DATA(w_base_output_data)
  );

  TQ_IDCT2_ODD_MCM_4 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_odd_mcm_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(r_odd4_valid),
    .O_DATA_READY(w_odd4_ready),
    .I_DATA(r_odd4_data),
    .O_DATA_VALID(w_odd4_output_valid),
    .I_DATA_READY(w_odd4_output_ready),
    .O_DATA(w_odd4_output_data)
  );

  TQ_IDCT2_COMBINE_4 #(
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_combine_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_EVEN_VALID(w_base_output_valid),
    .O_EVEN_READY(w_base_output_ready),
    .I_EVEN_DATA(w_base_output_data),
    .I_ODD_VALID(w_odd4_output_valid),
    .O_ODD_READY(w_odd4_output_ready),
    .I_ODD_DATA(w_odd4_output_data),
    .O_DATA_VALID(w_combine_valid),
    .I_DATA_READY(r_combine_ready),
    .O_DATA(w_combine_data)
  );

  TQ_IDCT2_ODD_MCM_8 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_odd_mcm_8 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(r_odd8_valid),
    .O_DATA_READY(w_odd8_ready),
    .I_DATA(r_odd8_data),
    .O_DATA_VALID(w_odd8_output_valid),
    .I_DATA_READY(r_odd8_output_ready),
    .O_DATA(w_odd8_output_data)
  );

  initial begin
    I_CLK = 1'b0;
    forever #5 I_CLK = ~I_CLK;
  end

  // A task releases valid only after a sampled handshake.
  task automatic send_base(input integer index);
    begin
      @(posedge I_CLK);
      r_base_valid <= 1'b1;
      r_base_data <= {r_c2[index][15:0], r_c0[index][15:0]};
      do begin
        @(posedge I_CLK);
      end while (!w_base_ready);
      r_base_valid <= 1'b0;
    end
  endtask

  task automatic send_odd4(input integer index);
    begin
      @(posedge I_CLK);
      r_odd4_valid <= 1'b1;
      r_odd4_data <= {r_c3[index][15:0], r_c1[index][15:0]};
      do begin
        @(posedge I_CLK);
      end while (!w_odd4_ready);
      r_odd4_valid <= 1'b0;
    end
  endtask

  task automatic send_odd8(input integer index);
    begin
      @(posedge I_CLK);
      r_odd8_valid <= 1'b1;
      r_odd8_data <= {r_c7[index][15:0], r_c5[index][15:0],
                      r_c3[index][15:0], r_c1[index][15:0]};
      do begin
        @(posedge I_CLK);
      end while (!w_odd8_ready);
      r_odd8_valid <= 1'b0;
    end
  endtask

  // The downstream consumers deliberately stall independently.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_cycle_count <= 0;
      r_combine_ready <= 1'b0;
      r_odd8_output_ready <= 1'b0;
    end
    else begin
      r_cycle_count <= r_cycle_count + 1;
      r_combine_ready <= ((r_cycle_count % 11) >= 6);
      r_odd8_output_ready <= ((r_cycle_count % 13) >= 7);
    end
  end

  // Raw integer golden equations are independent from shift/add RTL.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_combine_received = 0;
      r_odd8_received = 0;
      r_combine_stall_cycles = 0;
      r_odd8_stall_cycles = 0;
      r_combine_was_stalled = 1'b0;
      r_odd8_was_stalled = 1'b0;
      r_combine_previous = '0;
      r_odd8_previous = '0;
    end
    else begin
      if (r_combine_was_stalled &&
          (!w_combine_valid || w_combine_data !== r_combine_previous))
        $fatal(1, "[FAIL] COMBINE4 output changed under stall");
      if (r_odd8_was_stalled &&
          (!w_odd8_output_valid || w_odd8_output_data !== r_odd8_previous))
        $fatal(1, "[FAIL] ODD8 output changed under stall");

      if (w_combine_valid && !r_combine_ready)
        r_combine_stall_cycles = r_combine_stall_cycles + 1;
      if (w_odd8_output_valid && !r_odd8_output_ready)
        r_odd8_stall_cycles = r_odd8_stall_cycles + 1;

      if (w_combine_valid && r_combine_ready) begin
        if (r_combine_received >= PARA_TEST_COUNT)
          $fatal(1, "[FAIL] COMBINE4 duplicate output");
        r_expected4[0] = 64*(r_c0[r_combine_received]+r_c2[r_combine_received]) +
                         83*r_c1[r_combine_received]+36*r_c3[r_combine_received];
        r_expected4[1] = 64*(r_c0[r_combine_received]-r_c2[r_combine_received]) +
                         36*r_c1[r_combine_received]-83*r_c3[r_combine_received];
        r_expected4[2] = 64*(r_c0[r_combine_received]-r_c2[r_combine_received]) -
                         36*r_c1[r_combine_received]+83*r_c3[r_combine_received];
        r_expected4[3] = 64*(r_c0[r_combine_received]+r_c2[r_combine_received]) -
                         83*r_c1[r_combine_received]-36*r_c3[r_combine_received];
        for (integer lane_idx = 0; lane_idx < 4; lane_idx = lane_idx + 1) begin
          if ($signed(w_combine_data[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]) !==
              r_expected4[lane_idx])
            $fatal(1, "[FAIL] COMBINE4 vector=%0d lane=%0d got=%0d expected=%0d",
              r_combine_received, lane_idx,
              $signed(w_combine_data[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]),
              r_expected4[lane_idx]);
        end
        $display("[IDCT4 %0d] raw=[%0d,%0d,%0d,%0d]", r_combine_received,
          r_expected4[0], r_expected4[1], r_expected4[2], r_expected4[3]);
        r_combine_received = r_combine_received + 1;
      end

      if (w_odd8_output_valid && r_odd8_output_ready) begin
        if (r_odd8_received >= PARA_TEST_COUNT)
          $fatal(1, "[FAIL] ODD8 duplicate output");
        r_expected8[0] = 89*r_c1[r_odd8_received]+75*r_c3[r_odd8_received]+
                         50*r_c5[r_odd8_received]+18*r_c7[r_odd8_received];
        r_expected8[1] = 75*r_c1[r_odd8_received]-18*r_c3[r_odd8_received]-
                         89*r_c5[r_odd8_received]-50*r_c7[r_odd8_received];
        r_expected8[2] = 50*r_c1[r_odd8_received]-89*r_c3[r_odd8_received]+
                         18*r_c5[r_odd8_received]+75*r_c7[r_odd8_received];
        r_expected8[3] = 18*r_c1[r_odd8_received]-50*r_c3[r_odd8_received]+
                         75*r_c5[r_odd8_received]-89*r_c7[r_odd8_received];
        for (integer lane_idx = 0; lane_idx < 4; lane_idx = lane_idx + 1) begin
          if ($signed(w_odd8_output_data[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]) !==
              r_expected8[lane_idx])
            $fatal(1, "[FAIL] ODD8 vector=%0d lane=%0d got=%0d expected=%0d",
              r_odd8_received, lane_idx,
              $signed(w_odd8_output_data[lane_idx*PARA_RESULT_WD +: PARA_RESULT_WD]),
              r_expected8[lane_idx]);
        end
        $display("[ODD8  %0d] raw=[%0d,%0d,%0d,%0d]", r_odd8_received,
          r_expected8[0], r_expected8[1], r_expected8[2], r_expected8[3]);
        r_odd8_received = r_odd8_received + 1;
      end

      r_combine_was_stalled = w_combine_valid && !r_combine_ready;
      r_odd8_was_stalled = w_odd8_output_valid && !r_odd8_output_ready;
      r_combine_previous = w_combine_data;
      r_odd8_previous = w_odd8_output_data;
    end
  end

  // Twelve vectors include zeros, impulses, signed extrema and mixtures.
  initial begin
    I_RESETN = 1'b0;
    r_base_valid = 1'b0;
    r_base_data = '0;
    r_odd4_valid = 1'b0;
    r_odd4_data = '0;
    r_odd8_valid = 1'b0;
    r_odd8_data = '0;

    for (integer idx = 0; idx < PARA_TEST_COUNT; idx = idx + 1) begin
      r_c0[idx] = 0;
      r_c1[idx] = 0;
      r_c2[idx] = 0;
      r_c3[idx] = 0;
      r_c5[idx] = 0;
      r_c7[idx] = 0;
    end
    r_c0[1]=1;       r_c1[1]=2;       r_c2[1]=3;      r_c3[1]=4;       r_c5[1]=5;       r_c7[1]=6;
    r_c0[2]=-1;      r_c1[2]=-2;      r_c2[2]=-3;     r_c3[2]=-4;      r_c5[2]=-5;      r_c7[2]=-6;
    r_c0[3]=32767;   r_c1[3]=-32768;  r_c2[3]=32767;  r_c3[3]=-32768;  r_c5[3]=32767;   r_c7[3]=-32768;
    r_c0[4]=-32768;  r_c1[4]=32767;   r_c2[4]=-32768; r_c3[4]=32767;   r_c5[4]=-32768;  r_c7[4]=32767;
    r_c0[5]=-12345;  r_c1[5]=6789;    r_c2[5]=-2222;  r_c3[5]=9999;    r_c5[5]=-15000;  r_c7[5]=25000;
    r_c1[6]=1;
    r_c3[7]=1;
    r_c5[8]=1;
    r_c7[9]=1;
    r_c0[10]=30000; r_c1[10]=-10000; r_c2[10]=20000; r_c3[10]=10000;  r_c5[10]=0; r_c7[10]=-25000;
    r_c0[11]=-16384;r_c1[11]=8192;   r_c2[11]=32767; r_c3[11]=-1024;  r_c5[11]=1024; r_c7[11]=-8192;

    repeat (4) @(posedge I_CLK);
    I_RESETN <= 1'b1;
  end

  initial begin
    wait (I_RESETN);
    for (integer idx = 0; idx < PARA_TEST_COUNT; idx = idx + 1)
      send_base(idx);
  end

  initial begin
    wait (I_RESETN);
    repeat (4) @(posedge I_CLK);
    for (integer idx = 0; idx < PARA_TEST_COUNT; idx = idx + 1)
      send_odd4(idx);
  end

  initial begin
    wait (I_RESETN);
    repeat (2) @(posedge I_CLK);
    for (integer idx = 0; idx < PARA_TEST_COUNT; idx = idx + 1)
      send_odd8(idx);
  end

  initial begin
    wait (I_RESETN);
    wait (r_combine_received == PARA_TEST_COUNT && r_odd8_received == PARA_TEST_COUNT);
    @(posedge I_CLK);
    if (r_combine_stall_cycles == 0 || r_odd8_stall_cycles == 0)
      $fatal(1, "[FAIL] Required output backpressure was not exercised");
    $display("[PASS] IDCT2_COMBINE_4 and IDCT2_ODD_MCM_8: %0d vectors each; stalls combine=%0d odd8=%0d",
      PARA_TEST_COUNT, r_combine_stall_cycles, r_odd8_stall_cycles);
    $finish;
  end

  initial begin
    repeat (2000) @(posedge I_CLK);
    $fatal(1, "[FAIL] TIMEOUT combine=%0d odd8=%0d", r_combine_received, r_odd8_received);
  end

`ifdef DUMP_VCD
  initial begin
    $dumpfile("TQ_IDCT2_NEXT_PRIMITIVES_TB.vcd");
    $dumpvars(0, TQ_IDCT2_NEXT_PRIMITIVES_TB);
  end
`endif
endmodule: TQ_IDCT2_NEXT_PRIMITIVES_TB
