//-----------------------------------------------------------
// Description: Real RTL self-checking transpose-memory TB.
// All DUT controls are driven at posedge I_CLK using NBA.
// Coordinate-based independent scoreboard covers 16
// rectangular/square shapes, ping-pong reuse and stalls.
// No mock RAM, no negedge-driven stimulus.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INV_TRANSPOSE_MEMORY_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_TU_COUNT = 20;

  logic I_CLK;
  logic I_RESETN;
  logic [63:0] I_WR_DATA;
  logic I_WR_VALID;
  logic O_WR_READY;
  logic I_WR_TU_START;
  logic I_WR_TU_LAST;
  logic [15:0] I_WR_TU_ID;
  logic [1:0] I_WR_WIDTH;
  logic [1:0] I_WR_HEIGHT;
  logic [1:0] I_WR_TRANSFORM_HOR;
  logic [1:0] I_WR_TRANSFORM_VER;
  logic [1:0] I_WR_COMPONENT;
  logic [63:0] O_RD_DATA;
  logic O_RD_VALID;
  logic I_RD_READY;
  logic O_RD_VECTOR_LAST;
  logic O_RD_TU_START;
  logic O_RD_TU_LAST;
  logic [15:0] O_RD_TU_ID;
  logic [1:0] O_RD_WIDTH;
  logic [1:0] O_RD_HEIGHT;
  logic [1:0] O_RD_TRANSFORM_HOR;
  logic [1:0] O_RD_TRANSFORM_VER;
  logic [1:0] O_RD_COMPONENT;
  logic I_TU_DONE_VALID;
  logic [15:0] I_TU_DONE_ID;
  logic O_PROTOCOL_ERROR;

  integer r_cycle;
  integer r_tu_completed;
  integer r_output_beat;
  integer r_stall_cycles;
  integer r_tu_last_stalls;
  integer r_input_stalls;
  integer r_simultaneous_cycles;
  integer r_active_tu;
  logic r_stalled;
  logic [63:0] r_held_data;
  logic r_held_start;
  logic r_held_vector_last;
  logic r_held_tu_last;
  logic [15:0] r_held_id;
  // Emulate a downstream Row Core + Scaling delay before TU release.
  logic [9:0] r_release_pipe_valid;
  logic [15:0] r_release_pipe_id [0:9];

  // Verification-only coordinate encoding: always fits signed16.
  function automatic logic signed [15:0] ref_sample(
    input integer tu,
    input integer row,
    input integer col
  );
    integer v;
    begin
      v = -16000 + ((tu*151 + row*63 + col*107) % 32000);
      ref_sample = 16'(v);
    end
  endfunction

  TQ_INV_TRANSPOSE_MEMORY #(
    .PARA_DATA_WD(16),
    .PARA_TU_ID_WD(16)
  ) u_dut (
    .I_CLK(I_CLK),
    .I_RESETN(I_RESETN),
    .I_WR_DATA(I_WR_DATA),
    .I_WR_VALID(I_WR_VALID),
    .O_WR_READY(O_WR_READY),
    .I_WR_TU_START(I_WR_TU_START),
    .I_WR_TU_LAST(I_WR_TU_LAST),
    .I_WR_TU_ID(I_WR_TU_ID),
    .I_WR_WIDTH(I_WR_WIDTH),
    .I_WR_HEIGHT(I_WR_HEIGHT),
    .I_WR_TRANSFORM_HOR(I_WR_TRANSFORM_HOR),
    .I_WR_TRANSFORM_VER(I_WR_TRANSFORM_VER),
    .I_WR_COMPONENT(I_WR_COMPONENT),
    .O_RD_DATA(O_RD_DATA),
    .O_RD_VALID(O_RD_VALID),
    .I_RD_READY(I_RD_READY),
    .O_RD_VECTOR_LAST(O_RD_VECTOR_LAST),
    .O_RD_TU_START(O_RD_TU_START),
    .O_RD_TU_LAST(O_RD_TU_LAST),
    .O_RD_TU_ID(O_RD_TU_ID),
    .O_RD_WIDTH(O_RD_WIDTH),
    .O_RD_HEIGHT(O_RD_HEIGHT),
    .O_RD_TRANSFORM_HOR(O_RD_TRANSFORM_HOR),
    .O_RD_TRANSFORM_VER(O_RD_TRANSFORM_VER),
    .O_RD_COMPONENT(O_RD_COMPONENT),
    .I_TU_DONE_VALID(I_TU_DONE_VALID),
    .I_TU_DONE_ID(I_TU_DONE_ID),
    .O_PROTOCOL_ERROR(O_PROTOCOL_ERROR)
  );

  initial begin
    $dumpfile("TQ_INV_TRANSPOSE_MEMORY_TB.vcd");
    $dumpvars(0, TQ_INV_TRANSPOSE_MEMORY_TB);
  end

  initial begin
    I_CLK = 1'b0;
    forever #5 I_CLK = ~I_CLK;
  end

  // A complete vector is sent without driving anything on negedge.
  // The next beat is scheduled with NBA on the accepting posedge.
  task automatic send_tu(input integer tu);
    integer width_code;
    integer height_code;
    integer w;
    integer h;
    integer nbeat;
    integer beat;
    integer col;
    integer row_base;
    logic [63:0] payload;
    begin
      width_code = tu % 4;
      height_code = (tu / 4) % 4;
      w = 4 << width_code;
      h = 4 << height_code;
      nbeat = (w*h)/4;
      $display("[SEND] TU=%0d W=%0d H=%0d beats=%0d",tu,w,h,nbeat);
      beat = 0;
      col = 0;
      row_base = 0;
      payload = '0;
      for (integer lane = 0; lane < 4; lane++)
        payload[lane*16 +: 16] = ref_sample(tu, row_base+lane, col);
      @(posedge I_CLK);
      I_WR_VALID         <= 1'b1;
      I_WR_DATA          <= payload;
      I_WR_TU_START      <= 1'b1;
      I_WR_TU_LAST       <= (nbeat == 1);
      I_WR_TU_ID         <= 16'(tu);
      I_WR_WIDTH         <= 2'(width_code);
      I_WR_HEIGHT        <= 2'(height_code);
      I_WR_TRANSFORM_HOR <= 2'(tu % 3);
      I_WR_TRANSFORM_VER <= 2'((tu+1) % 3);
      I_WR_COMPONENT     <= 2'(tu % 3);
      while (beat < nbeat) begin
        @(posedge I_CLK);
        if (O_WR_READY) begin
          beat = beat + 1;
          if (beat == nbeat) begin
            I_WR_VALID    <= 1'b0;
            I_WR_TU_START <= 1'b0;
            I_WR_TU_LAST  <= 1'b0;
          end
          else begin
            col = (beat*4) / h;
            row_base = (beat*4) % h;
            payload = '0;
            for (integer lane = 0; lane < 4; lane++)
              payload[lane*16 +: 16] = ref_sample(tu, row_base+lane, col);
            I_WR_DATA     <= payload;
            I_WR_TU_START <= 1'b0;
            I_WR_TU_LAST  <= (beat == nbeat-1);
          end
        end
      end
    end
  endtask

  // Independent clock-edge output scoreboard and delayed release.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_cycle               <= 0;
      r_tu_completed        <= 0;
      r_output_beat         <= 0;
      r_stall_cycles        <= 0;
      r_tu_last_stalls      <= 0;
      r_input_stalls        <= 0;
      r_simultaneous_cycles <= 0;
      r_active_tu           <= 0;
      r_stalled             <= 1'b0;
      I_TU_DONE_VALID       <= 1'b0;
      I_TU_DONE_ID          <= '0;
      r_release_pipe_valid  <= '0;
      I_RD_READY            <= 1'b0;
    end
    else begin
      r_cycle <= r_cycle + 1;
      // Downstream backpressure: deterministic with occasional
      // long stall bursts, including stalls on TU-LAST.
      I_RD_READY <= ((r_cycle % 13) >= 5) &&
                    ((r_cycle % 127) < 116);
      // Delayed, ordered DONE acknowledgements from downstream.
      I_TU_DONE_VALID <= r_release_pipe_valid[9];
      I_TU_DONE_ID <= r_release_pipe_id[9];
      for (integer d = 9; d > 0; d--) begin
        r_release_pipe_valid[d] <= r_release_pipe_valid[d-1];
        r_release_pipe_id[d] <= r_release_pipe_id[d-1];
      end
      r_release_pipe_valid[0] <= O_RD_VALID && I_RD_READY && O_RD_TU_LAST;
      if (O_RD_VALID && I_RD_READY && O_RD_TU_LAST)
        r_release_pipe_id[0] <= O_RD_TU_ID;
      if (I_WR_VALID && !O_WR_READY)
        r_input_stalls <= r_input_stalls + 1;
      if (I_WR_VALID && O_WR_READY && O_RD_VALID && I_RD_READY)
        r_simultaneous_cycles <= r_simultaneous_cycles + 1;
      if (O_RD_VALID && !I_RD_READY) begin
        r_stall_cycles <= r_stall_cycles + 1;
        if (O_RD_TU_LAST)
          r_tu_last_stalls <= r_tu_last_stalls + 1;
      end
      if (r_stalled) begin
        if (!O_RD_VALID || O_RD_DATA !== r_held_data ||
            O_RD_TU_START !== r_held_start ||
            O_RD_VECTOR_LAST !== r_held_vector_last ||
            O_RD_TU_LAST !== r_held_tu_last ||
            O_RD_TU_ID !== r_held_id)
          $fatal(1,"[FAIL] Output changed under backpressure at cycle=%0d",r_cycle);
      end
      r_stalled          <= O_RD_VALID && !I_RD_READY;
      r_held_data        <= O_RD_DATA;
      r_held_start       <= O_RD_TU_START;
      r_held_vector_last <= O_RD_VECTOR_LAST;
      r_held_tu_last     <= O_RD_TU_LAST;
      r_held_id          <= O_RD_TU_ID;
      if (O_RD_VALID && I_RD_READY) begin : SCORE
        integer w;
        integer h;
        integer row;
        integer col_base;
        integer expected_beats;
        logic signed [15:0] expected;
        logic signed [15:0] actual;
        w = 4 << (r_tu_completed % 4);
        h = 4 << ((r_tu_completed / 4) % 4);
        expected_beats = (w*h)/4;
        row = r_output_beat / (w/4);
        col_base = (r_output_beat % (w/4))*4;
        if (O_RD_TU_ID !== 16'(r_tu_completed) ||
            O_RD_WIDTH !== 2'(r_tu_completed % 4) ||
            O_RD_HEIGHT !== 2'((r_tu_completed/4)%4) ||
            O_RD_TRANSFORM_HOR !== 2'(r_tu_completed%3) ||
            O_RD_TRANSFORM_VER !== 2'((r_tu_completed+1)%3) ||
            O_RD_COMPONENT !== 2'(r_tu_completed%3))
          $fatal(1,"[FAIL] TU ordering or metadata, got ID=%0d expect=%0d",O_RD_TU_ID,r_tu_completed);
        if (O_RD_TU_START !== (r_output_beat == 0) ||
            O_RD_VECTOR_LAST !== (col_base+4 == w) ||
            O_RD_TU_LAST !== (r_output_beat == expected_beats-1))
          $fatal(1,"[FAIL] TU/ROW flags TU=%0d beat=%0d",r_tu_completed,r_output_beat);
        for (integer lane = 0; lane < 4; lane++) begin
          expected = ref_sample(r_tu_completed,row,col_base+lane);
          actual = $signed(O_RD_DATA[lane*16 +: 16]);
          if (actual !== expected)
            $fatal(1,"[FAIL] TU=%0d row=%0d col=%0d actual=%0d expected=%0d",
              r_tu_completed,row,col_base+lane,actual,expected);
        end
        if (O_RD_TU_LAST) begin
          $display("[PASS] TU=%0d W=%0d H=%0d read_beats=%0d",r_tu_completed,w,h,expected_beats);
          r_tu_completed <= r_tu_completed + 1;
          r_output_beat <= 0;
        end
        else begin
          r_output_beat <= r_output_beat + 1;
        end
      end
      if (O_PROTOCOL_ERROR)
        $fatal(1,"[FAIL] RTL detected bad TU framing");
    end
  end

  initial begin
    I_RESETN = 1'b0;
    I_WR_VALID = 1'b0;
    I_WR_DATA = '0;
    I_WR_TU_START = 1'b0;
    I_WR_TU_LAST = 1'b0;
    I_WR_TU_ID = '0;
    I_WR_WIDTH = '0;
    I_WR_HEIGHT = '0;
    I_WR_TRANSFORM_HOR = '0;
    I_WR_TRANSFORM_VER = '0;
    I_WR_COMPONENT = '0;
    I_RD_READY = 1'b0;
    I_TU_DONE_VALID = 1'b0;
    I_TU_DONE_ID = '0;
    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    for (integer tu = 0; tu < PARA_TU_COUNT; tu++)
      send_tu(tu);
    wait (r_tu_completed == PARA_TU_COUNT);
    repeat (16) @(posedge I_CLK);
    if (u_dut.r_buffer_state[0] != 3'd0 ||
        u_dut.r_buffer_state[1] != 3'd0)
      $fatal(1,"[FAIL] Buffers not released after delayed downstream DONE");
    if ((r_stall_cycles == 0) || (r_input_stalls == 0) ||
        (r_tu_last_stalls == 0) || (r_simultaneous_cycles == 0))
      $fatal(1,"[FAIL] Required stalls/overlap not exercised");
    $display("==========================================================");
    $display("[PASS] INVERSE TRANSPOSE: TU=%0d stalls=%0d last_stalls=%0d input_stalls=%0d overlap=%0d",
      PARA_TU_COUNT,r_stall_cycles,r_tu_last_stalls,r_input_stalls,r_simultaneous_cycles);
    $finish;
  end

  initial begin
    repeat (200000) @(posedge I_CLK);
    $fatal(1,"[FAIL] Timeout completed=%0d/%0d",r_tu_completed,PARA_TU_COUNT);
  end
endmodule: TQ_INV_TRANSPOSE_MEMORY_TB
