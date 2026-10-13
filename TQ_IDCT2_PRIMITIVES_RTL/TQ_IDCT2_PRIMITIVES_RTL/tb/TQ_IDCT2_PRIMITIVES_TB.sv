//-----------------------------------------------------------
// Description: This testbench checks the raw arithmetic and
// elastic ready/valid behavior of the inverse DCT-II two-point
// base and the four-point odd MCM. It also combines their raw
// results to check a complete four-point inverse DCT-II vector.
// All stimulus signals change on positive clock edges only.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_IDCT2_PRIMITIVES_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_RESULT_WD = 28;
  localparam PARA_TEST_COUNT = 8;

  logic                                 I_CLK;
  logic                                 I_RESETN;
  logic                                 r_base_input_valid;
  logic                                 w_base_input_ready;
  logic [2*PARA_DATA_WD-1:0]            r_base_input_data;
  logic                                 w_base_output_valid;
  logic                                 r_base_output_ready;
  logic [2*PARA_RESULT_WD-1:0]          w_base_output_data;
  logic                                 r_odd_input_valid;
  logic                                 w_odd_input_ready;
  logic [2*PARA_DATA_WD-1:0]            r_odd_input_data;
  logic                                 w_odd_output_valid;
  logic                                 r_odd_output_ready;
  logic [2*PARA_RESULT_WD-1:0]          w_odd_output_data;
  logic                                 r_base_was_stalled;
  logic                                 r_odd_was_stalled;
  logic [2*PARA_RESULT_WD-1:0]          r_base_previous_data;
  logic [2*PARA_RESULT_WD-1:0]          r_odd_previous_data;
  integer                               r_cycle_count;
  integer                               r_base_received;
  integer                               r_odd_received;
  integer                               r_base_stall_count;
  integer                               r_odd_stall_count;
  integer signed                        r_c0 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c1 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c2 [0:PARA_TEST_COUNT-1];
  integer signed                        r_c3 [0:PARA_TEST_COUNT-1];
  integer signed                        r_even_0 [0:PARA_TEST_COUNT-1];
  integer signed                        r_even_1 [0:PARA_TEST_COUNT-1];
  integer signed                        r_odd_0 [0:PARA_TEST_COUNT-1];
  integer signed                        r_odd_1 [0:PARA_TEST_COUNT-1];

  TQ_IDCT2_BASE_2 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_base_2 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(r_base_input_valid),
    .O_DATA_READY(w_base_input_ready),
    .I_DATA(r_base_input_data),
    .O_DATA_VALID(w_base_output_valid),
    .I_DATA_READY(r_base_output_ready),
    .O_DATA(w_base_output_data)
  );

  TQ_IDCT2_ODD_MCM_4 #(
    .PARA_DATA_WD(PARA_DATA_WD),
    .PARA_RESULT_WD(PARA_RESULT_WD)
  ) u_odd_mcm_4 (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_DATA_VALID(r_odd_input_valid),
    .O_DATA_READY(w_odd_input_ready),
    .I_DATA(r_odd_input_data),
    .O_DATA_VALID(w_odd_output_valid),
    .I_DATA_READY(r_odd_output_ready),
    .O_DATA(w_odd_output_data)
  );

  initial begin
    I_CLK = 1'b0;
    forever #5 I_CLK = ~I_CLK;
  end

  // The driver waits for an actual positive-edge input handshake.
  task automatic send_base(input integer index);
    begin
      @(posedge I_CLK);
      r_base_input_data <= {r_c2[index][15:0], r_c0[index][15:0]};
      r_base_input_valid <= 1'b1;
      do begin
        @(posedge I_CLK);
      end while (!w_base_input_ready);
      r_base_input_valid <= 1'b0;
    end
  endtask

  task automatic send_odd(input integer index);
    begin
      @(posedge I_CLK);
      r_odd_input_data <= {r_c3[index][15:0], r_c1[index][15:0]};
      r_odd_input_valid <= 1'b1;
      do begin
        @(posedge I_CLK);
      end while (!w_odd_input_ready);
      r_odd_input_valid <= 1'b0;
    end
  endtask

  // Only ready/valid and counters are reset; output data is qualified.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_cycle_count <= 0;
      r_base_output_ready <= 1'b0;
      r_odd_output_ready <= 1'b0;
    end
    else begin
      r_cycle_count <= r_cycle_count + 1;
      r_base_output_ready <= ((r_cycle_count % 9) >= 4);
      r_odd_output_ready <= ((r_cycle_count % 11) >= 5);
    end
  end

  // The scoreboard checks ordered results and hold-under-stall behavior.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_base_received = 0;
      r_odd_received = 0;
      r_base_stall_count = 0;
      r_odd_stall_count = 0;
      r_base_was_stalled = 1'b0;
      r_odd_was_stalled = 1'b0;
      r_base_previous_data = '0;
      r_odd_previous_data = '0;
    end
    else begin
      if (r_base_was_stalled &&
          (!w_base_output_valid || w_base_output_data !== r_base_previous_data))
        $fatal(1, "[FAIL] BASE2 changed its valid/data while stalled");
      if (r_odd_was_stalled &&
          (!w_odd_output_valid || w_odd_output_data !== r_odd_previous_data))
        $fatal(1, "[FAIL] ODD4 changed its valid/data while stalled");

      if (w_base_output_valid && !r_base_output_ready)
        r_base_stall_count = r_base_stall_count + 1;
      if (w_odd_output_valid && !r_odd_output_ready)
        r_odd_stall_count = r_odd_stall_count + 1;

      if (w_base_output_valid && r_base_output_ready) begin
        if (r_base_received >= PARA_TEST_COUNT)
          $fatal(1, "[FAIL] BASE2 duplicated a transaction");
        if ($signed(w_base_output_data[0*PARA_RESULT_WD +: PARA_RESULT_WD]) !==
            (64*(r_c0[r_base_received]+r_c2[r_base_received])) ||
            $signed(w_base_output_data[1*PARA_RESULT_WD +: PARA_RESULT_WD]) !==
            (64*(r_c0[r_base_received]-r_c2[r_base_received])))
          $fatal(1, "[FAIL] BASE2 arithmetic mismatch at vector %0d", r_base_received);
        r_even_0[r_base_received] = $signed(w_base_output_data[0*PARA_RESULT_WD +: PARA_RESULT_WD]);
        r_even_1[r_base_received] = $signed(w_base_output_data[1*PARA_RESULT_WD +: PARA_RESULT_WD]);
        r_base_received = r_base_received + 1;
      end

      if (w_odd_output_valid && r_odd_output_ready) begin
        if (r_odd_received >= PARA_TEST_COUNT)
          $fatal(1, "[FAIL] ODD4 duplicated a transaction");
        if ($signed(w_odd_output_data[0*PARA_RESULT_WD +: PARA_RESULT_WD]) !==
            (83*r_c1[r_odd_received]+36*r_c3[r_odd_received]) ||
            $signed(w_odd_output_data[1*PARA_RESULT_WD +: PARA_RESULT_WD]) !==
            (36*r_c1[r_odd_received]-83*r_c3[r_odd_received]))
          $fatal(1, "[FAIL] ODD4 arithmetic mismatch at vector %0d", r_odd_received);
        r_odd_0[r_odd_received] = $signed(w_odd_output_data[0*PARA_RESULT_WD +: PARA_RESULT_WD]);
        r_odd_1[r_odd_received] = $signed(w_odd_output_data[1*PARA_RESULT_WD +: PARA_RESULT_WD]);
        r_odd_received = r_odd_received + 1;
      end

      r_base_was_stalled = w_base_output_valid && !r_base_output_ready;
      r_odd_was_stalled = w_odd_output_valid && !r_odd_output_ready;
      r_base_previous_data = w_base_output_data;
      r_odd_previous_data = w_odd_output_data;
    end
  end

  initial begin
    I_RESETN = 1'b0;
    r_base_input_valid = 1'b0;
    r_base_input_data = '0;
    r_odd_input_valid = 1'b0;
    r_odd_input_data = '0;

    r_c0[0] = 0;      r_c1[0] = 0;      r_c2[0] = 0;      r_c3[0] = 0;
    r_c0[1] = 1;      r_c1[1] = 2;      r_c2[1] = 3;      r_c3[1] = 4;
    r_c0[2] = -1;     r_c1[2] = -2;     r_c2[2] = -3;     r_c3[2] = -4;
    r_c0[3] = 32767;  r_c1[3] = -32768; r_c2[3] = 32767; r_c3[3] = -32768;
    r_c0[4] = -32768; r_c1[4] = 32767;  r_c2[4] = -32768; r_c3[4] = 32767;
    r_c0[5] = -12345; r_c1[5] = 6789;   r_c2[5] = -2222;  r_c3[5] = 9999;
    r_c0[6] = 15;     r_c1[6] = 0;      r_c2[6] = 0;      r_c3[6] = -15;
    r_c0[7] = 20000;  r_c1[7] = -10000; r_c2[7] = -17000; r_c3[7] = 5000;

    repeat (4) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    for (integer index = 0; index < PARA_TEST_COUNT; index = index + 1) begin
      send_base(index);
      send_odd(index);
    end

    wait (r_base_received == PARA_TEST_COUNT && r_odd_received == PARA_TEST_COUNT);
    @(posedge I_CLK);
    for (integer index = 0; index < PARA_TEST_COUNT; index = index + 1) begin
      $display("[VECTOR %0d] INPUT=[%0d,%0d,%0d,%0d]", index,
        r_c0[index], r_c1[index], r_c2[index], r_c3[index]);
      $display("           E=[%0d,%0d] O=[%0d,%0d]", 
        r_even_0[index], r_even_1[index], r_odd_0[index], r_odd_1[index]);
      $display("           IDCT4_RAW=[%0d,%0d,%0d,%0d]", 
        r_even_0[index]+r_odd_0[index], r_even_1[index]+r_odd_1[index],
        r_even_1[index]-r_odd_1[index], r_even_0[index]-r_odd_0[index]);
    end
    if (r_base_stall_count == 0 || r_odd_stall_count == 0)
      $fatal(1, "[FAIL] Backpressure was not exercised on both modules");
    $display("[PASS] IDCT2 primitives: %0d vectors, BASE2 stalls=%0d, ODD4 stalls=%0d",
      PARA_TEST_COUNT, r_base_stall_count, r_odd_stall_count);
    $finish;
  end

  initial begin
    repeat (2000) @(posedge I_CLK);
    $fatal(1, "[FAIL] TIMEOUT BASE2=%0d ODD4=%0d", r_base_received, r_odd_received);
  end

`ifdef DUMP_VCD
  initial begin
    $dumpfile("TQ_IDCT2_PRIMITIVES_TB.vcd");
    $dumpvars(0, TQ_IDCT2_PRIMITIVES_TB);
  end
`endif
endmodule: TQ_IDCT2_PRIMITIVES_TB
