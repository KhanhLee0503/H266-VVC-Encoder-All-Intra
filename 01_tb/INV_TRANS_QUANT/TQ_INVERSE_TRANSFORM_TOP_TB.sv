//-----------------------------------------------------------
// Description: Full 2-D inverse transform integration TB.
// Instantiates REAL IDCT2 / IDST7 / IDCT8 cores via the TOP.
// 16 rectangular/square TUs; 4/8/16/32 dimensions; two
// signed scaling stages; MTS zero-out; output backpressure.
// Self-checking reference arrays come from independent H.266
// integer coefficient matrices. All test DUT input stimuli are
// changed only at posedge I_CLK using nonblocking assignments.
// No mock arithmetic cores are compiled into this testbench.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INVERSE_TRANSFORM_TOP_TB;
  localparam integer PARA_TC_COUNT = 16;
  localparam integer PARA_SLOT_SIZE = 1024;
  localparam integer PARA_PRINT_ALL = 1;
  logic I_CLK;
  logic I_RESETN;
  logic [63:0] I_DATA;
  logic I_DATA_VALID;
  logic O_INPUT_READY;
  logic I_TU_START, I_TU_LAST;
  logic [15:0] I_TU_ID;
  logic [1:0] I_TU_WIDTH, I_TU_HEIGHT;
  logic [1:0] I_TRANSFORM_HOR, I_TRANSFORM_VER, I_COMPONENT;
  logic [63:0] O_DATA;
  logic O_DATA_VALID;
  logic I_OUTPUT_READY;
  logic O_TU_START, O_TU_LAST, O_VECTOR_LAST;
  logic [15:0] O_TU_ID;
  logic [1:0] O_TU_WIDTH, O_TU_HEIGHT, O_COMPONENT;
  logic [1:0] O_TRANSFORM_HOR, O_TRANSFORM_VER;
  logic O_PROTOCOL_ERROR, O_BUSY;

  logic signed [15:0] r_input_mem  [0:PARA_TC_COUNT*PARA_SLOT_SIZE-1];
  logic signed [15:0] r_golden_mem [0:PARA_TC_COUNT*PARA_SLOT_SIZE-1];
  integer r_w [0:PARA_TC_COUNT-1];
  integer r_h [0:PARA_TC_COUNT-1];
  logic [1:0] r_hmode [0:PARA_TC_COUNT-1];
  logic [1:0] r_vmode [0:PARA_TC_COUNT-1];
  logic [1:0] r_component [0:PARA_TC_COUNT-1];

  integer r_cycle;
  integer r_tx_tc, r_tx_beat;
  integer r_rx_tc, r_rx_beat;
  integer r_input_fire_count, r_output_fire_count;
  integer r_output_stall_count, r_last_stall_count, r_overlap_cycles;
  logic r_tx_active;
  logic r_hold_valid;
  logic [63:0] r_held_data;
  logic r_held_tu_start, r_held_tu_last, r_held_vector_last;
  logic [15:0] r_held_tu_id;

  TQ_INVERSE_TRANSFORM_TOP u_dut (
    .I_CLK(I_CLK), .I_RESETN(I_RESETN),
    .I_DATA(I_DATA), .I_DATA_VALID(I_DATA_VALID),
    .O_INPUT_READY(O_INPUT_READY),
    .I_TU_START(I_TU_START), .I_TU_LAST(I_TU_LAST),
    .I_TU_ID(I_TU_ID), .I_TU_WIDTH(I_TU_WIDTH),
    .I_TU_HEIGHT(I_TU_HEIGHT),
    .I_TRANSFORM_HOR(I_TRANSFORM_HOR),
    .I_TRANSFORM_VER(I_TRANSFORM_VER),
    .I_COMPONENT(I_COMPONENT),
    .O_DATA(O_DATA), .O_DATA_VALID(O_DATA_VALID),
    .I_OUTPUT_READY(I_OUTPUT_READY),
    .O_TU_START(O_TU_START), .O_TU_LAST(O_TU_LAST),
    .O_VECTOR_LAST(O_VECTOR_LAST),
    .O_TU_ID(O_TU_ID), .O_TU_WIDTH(O_TU_WIDTH),
    .O_TU_HEIGHT(O_TU_HEIGHT), .O_COMPONENT(O_COMPONENT),
    .O_TRANSFORM_HOR(O_TRANSFORM_HOR),
    .O_TRANSFORM_VER(O_TRANSFORM_VER),
    .O_PROTOCOL_ERROR(O_PROTOCOL_ERROR), .O_BUSY(O_BUSY)
  );

  initial I_CLK = 1'b0;
  always #5 I_CLK = ~I_CLK;

  // Metadata mirrors model/generate_2d_golden.py exactly.
  initial begin
    $dumpfile("TQ_INVERSE_TRANSFORM_TOP_TB.vcd");
    $dumpvars(0, TQ_INVERSE_TRANSFORM_TOP_TB);
    $readmemh("tb/input_2d.mem", r_input_mem);
    $readmemh("tb/golden_2d.mem", r_golden_mem);

    r_w[0]=4;   r_h[0]=4;   r_hmode[0]=0; r_vmode[0]=0; r_component[0]=0;
    r_w[1]=8;   r_h[1]=8;   r_hmode[1]=0; r_vmode[1]=0; r_component[1]=0;
    r_w[2]=4;   r_h[2]=8;   r_hmode[2]=1; r_vmode[2]=2; r_component[2]=0;
    r_w[3]=8;   r_h[3]=4;   r_hmode[3]=2; r_vmode[3]=1; r_component[3]=0;
    r_w[4]=16;  r_h[4]=8;   r_hmode[4]=0; r_vmode[4]=1; r_component[4]=0;
    r_w[5]=8;   r_h[5]=16;  r_hmode[5]=2; r_vmode[5]=0; r_component[5]=0;
    r_w[6]=16;  r_h[6]=16;  r_hmode[6]=1; r_vmode[6]=2; r_component[6]=0;
    r_w[7]=4;   r_h[7]=32;  r_hmode[7]=0; r_vmode[7]=1; r_component[7]=0;
    r_w[8]=32;  r_h[8]=4;   r_hmode[8]=1; r_vmode[8]=0; r_component[8]=0;
    r_w[9]=32;  r_h[9]=8;   r_hmode[9]=2; r_vmode[9]=0; r_component[9]=0;
    r_w[10]=8;  r_h[10]=32; r_hmode[10]=0;r_vmode[10]=2;r_component[10]=0;
    r_w[11]=32; r_h[11]=32; r_hmode[11]=0;r_vmode[11]=0;r_component[11]=0;
    r_w[12]=32; r_h[12]=32; r_hmode[12]=1;r_vmode[12]=1;r_component[12]=0;
    r_w[13]=32; r_h[13]=32; r_hmode[13]=2;r_vmode[13]=2;r_component[13]=0;
    r_w[14]=4;  r_h[14]=4;  r_hmode[14]=2;r_vmode[14]=2;r_component[14]=1;
    r_w[15]=4;  r_h[15]=4;  r_hmode[15]=1;r_vmode[15]=0;r_component[15]=2;
    I_RESETN = 1'b0;
    I_DATA_VALID = 1'b0;
    I_DATA = '0;
    I_TU_START = 1'b0;
    I_TU_LAST = 1'b0;
    I_TU_ID = '0;
    I_TU_WIDTH = '0;
    I_TU_HEIGHT = '0;
    I_TRANSFORM_HOR = '0;
    I_TRANSFORM_VER = '0;
    I_COMPONENT = '0;
    I_OUTPUT_READY = 1'b0;
    repeat (6) @(posedge I_CLK);
    I_RESETN <= 1'b1;
  end

  // Source driver: observe old-cycle handshake and replace beat
  // using NBA on the SAME posedge. Never drive on negedge.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_tx_tc <= 0;
      r_tx_beat <= 0;
      r_tx_active <= 1'b0;
      r_input_fire_count <= 0;
      I_DATA_VALID <= 1'b0;
    end
    else begin
      if (!r_tx_active && (r_tx_tc < PARA_TC_COUNT)) begin
        r_tx_active <= 1'b1;
        r_tx_beat <= 0;
        I_DATA_VALID <= 1'b1;
        I_TU_START <= 1'b1;
        I_TU_LAST <= (r_w[r_tx_tc] * r_h[r_tx_tc] == 4);
        I_TU_ID <= 16'(100 + r_tx_tc);
        I_TU_WIDTH <= 2'($clog2(r_w[r_tx_tc]) - 2);
        I_TU_HEIGHT <= 2'($clog2(r_h[r_tx_tc]) - 2);
        I_TRANSFORM_HOR <= r_hmode[r_tx_tc];
        I_TRANSFORM_VER <= r_vmode[r_tx_tc];
        I_COMPONENT <= r_component[r_tx_tc];
        for (integer lane = 0; lane < 4; lane++)
          I_DATA[lane*16 +: 16] <= r_input_mem[r_tx_tc*PARA_SLOT_SIZE+lane];
        $display("[SEND] TU=%0d W=%0d H=%0d HOR=%0d VER=%0d",
                 r_tx_tc,r_w[r_tx_tc],r_h[r_tx_tc],r_hmode[r_tx_tc],r_vmode[r_tx_tc]);
      end
      else if (r_tx_active && I_DATA_VALID && O_INPUT_READY) begin
        r_input_fire_count <= r_input_fire_count + 1;
        if (r_tx_beat == (r_w[r_tx_tc]*r_h[r_tx_tc]/4 - 1)) begin
          I_DATA_VALID <= 1'b0;
          I_TU_START <= 1'b0;
          I_TU_LAST <= 1'b0;
          r_tx_tc <= r_tx_tc + 1;
          r_tx_beat <= 0;
          r_tx_active <= 1'b0;
        end
        else begin
          r_tx_beat <= r_tx_beat + 1;
          I_TU_START <= 1'b0;
          I_TU_LAST <= (r_tx_beat+1 == r_w[r_tx_tc]*r_h[r_tx_tc]/4 - 1);
          for (integer lane = 0; lane < 4; lane++)
            I_DATA[lane*16 +: 16] <= r_input_mem[r_tx_tc*PARA_SLOT_SIZE+4*(r_tx_beat+1)+lane];
        end
      end
    end
  end

  // Deliberate sustained and intermittent Reconstruction stalls.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_cycle <= 0;
      I_OUTPUT_READY <= 1'b0;
    end
    else begin
      r_cycle <= r_cycle + 1;
      I_OUTPUT_READY <= ((r_cycle % 17) < 11) && ((r_cycle % 113) >= 7);
    end
  end

  // The output scoreboard samples PRE-NBA values on posedge.
  // Each output handshake must match the full 2-D integer oracle.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_rx_tc <= 0;
      r_rx_beat <= 0;
      r_output_fire_count <= 0;
      r_output_stall_count <= 0;
      r_last_stall_count <= 0;
      r_overlap_cycles <= 0;
      r_hold_valid <= 1'b0;
    end
    else begin
      if (I_DATA_VALID && O_INPUT_READY && O_DATA_VALID && I_OUTPUT_READY)
        r_overlap_cycles <= r_overlap_cycles + 1;
      if (O_PROTOCOL_ERROR)
        $fatal(1,"[FAIL] Sticky 2D protocol error at cycle=%0d tu=%0d",r_cycle,r_rx_tc);
      if (r_hold_valid) begin
        if (!O_DATA_VALID || O_DATA !== r_held_data ||
            O_TU_START !== r_held_tu_start || O_TU_LAST !== r_held_tu_last ||
            O_VECTOR_LAST !== r_held_vector_last || O_TU_ID !== r_held_tu_id)
          $fatal(1,"[FAIL] Output changed under stall tu=%0d beat=%0d",r_rx_tc,r_rx_beat);
      end
      r_hold_valid <= O_DATA_VALID && !I_OUTPUT_READY;
      if (O_DATA_VALID && !I_OUTPUT_READY) begin
        r_output_stall_count <= r_output_stall_count + 1;
        if (O_TU_LAST)
          r_last_stall_count <= r_last_stall_count + 1;
        r_held_data <= O_DATA;
        r_held_tu_start <= O_TU_START;
        r_held_tu_last <= O_TU_LAST;
        r_held_vector_last <= O_VECTOR_LAST;
        r_held_tu_id <= O_TU_ID;
      end
      if (O_DATA_VALID && I_OUTPUT_READY) begin
        if (r_rx_tc >= PARA_TC_COUNT)
          $fatal(1,"[FAIL] Unexpected extra output");
        if (O_TU_ID !== 16'(100+r_rx_tc) ||
            O_TU_WIDTH !== 2'($clog2(r_w[r_rx_tc])-2) ||
            O_TU_HEIGHT !== 2'($clog2(r_h[r_rx_tc])-2) ||
            O_TRANSFORM_HOR !== r_hmode[r_rx_tc] ||
            O_TRANSFORM_VER !== r_vmode[r_rx_tc] ||
            O_COMPONENT !== r_component[r_rx_tc])
          $fatal(1,"[FAIL] Metadata mismatch TU=%0d beat=%0d",r_rx_tc,r_rx_beat);
        if (O_TU_START !== (r_rx_beat == 0) ||
            O_TU_LAST !== (r_rx_beat == r_w[r_rx_tc]*r_h[r_rx_tc]/4-1) ||
            O_VECTOR_LAST !== ((r_rx_beat % (r_w[r_rx_tc]/4))==(r_w[r_rx_tc]/4-1)))
          $fatal(1,"[FAIL] TU/VECTOR LAST mismatch TU=%0d beat=%0d got=%b/%b/%b",
                 r_rx_tc,r_rx_beat,O_TU_START,O_VECTOR_LAST,O_TU_LAST);
        for (integer lane = 0; lane < 4; lane++) begin
          if ($signed(O_DATA[lane*16 +: 16]) !==
              r_golden_mem[r_rx_tc*PARA_SLOT_SIZE + r_rx_beat*4+lane])
            $fatal(1,"[FAIL] TU=%0d y=%0d x=%0d actual=%0d golden=%0d",
                   r_rx_tc,(r_rx_beat*4+lane)/r_w[r_rx_tc],
                   (r_rx_beat*4+lane)%r_w[r_rx_tc],
                   $signed(O_DATA[lane*16 +: 16]),
                   r_golden_mem[r_rx_tc*PARA_SLOT_SIZE + r_rx_beat*4+lane]);
        end
        if (PARA_PRINT_ALL)
          $display(" [RAW RESIDUAL] TU=%0d beat=%0d X=%0d,%0d,%0d,%0d",
                   r_rx_tc,r_rx_beat,
                   $signed(O_DATA[15:0]),$signed(O_DATA[31:16]),
                   $signed(O_DATA[47:32]),$signed(O_DATA[63:48]));
        r_output_fire_count <= r_output_fire_count + 1;
        if (r_rx_beat == (r_w[r_rx_tc]*r_h[r_rx_tc]/4-1)) begin
          $display("[PASS] TU=%0d W=%0d H=%0d MODE(H,V)=(%0d,%0d)",
                   r_rx_tc,r_w[r_rx_tc],r_h[r_rx_tc],r_hmode[r_rx_tc],r_vmode[r_rx_tc]);
          r_rx_tc <= r_rx_tc+1;
          r_rx_beat <= 0;
        end
        else r_rx_beat <= r_rx_beat+1;
      end
    end
  end

  initial begin
    wait (I_RESETN);
    wait (r_rx_tc == PARA_TC_COUNT);
    repeat (4) @(posedge I_CLK);
    if (O_BUSY)
      $fatal(1,"[FAIL] Busy remains high after final TU");
    if (r_input_fire_count != r_output_fire_count || r_output_stall_count == 0)
      $fatal(1,"[FAIL] Traffic count/stall mismatch in=%0d out=%0d stalls=%0d",
             r_input_fire_count,r_output_fire_count,r_output_stall_count);
    $display("===============================================================");
    $display("[PASS] REAL 2D TOP: 16 TUs, %0d beats, output_stalls=%0d last_stalls=%0d overlap=%0d",
             r_output_fire_count,r_output_stall_count,r_last_stall_count,r_overlap_cycles);
    $finish;
  end

  initial begin
    repeat (600000) @(posedge I_CLK);
    $fatal(1,"[FAIL] Watchdog timeout completed=%0d/%0d input_tu=%0d protocol_error=%b",
           r_rx_tc,PARA_TC_COUNT,r_tx_tc,O_PROTOCOL_ERROR);
  end
endmodule: TQ_INVERSE_TRANSFORM_TOP_TB
