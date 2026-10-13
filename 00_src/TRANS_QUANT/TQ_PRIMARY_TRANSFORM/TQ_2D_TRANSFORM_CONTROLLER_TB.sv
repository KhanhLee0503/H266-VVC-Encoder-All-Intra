//-----------------------------------------------------------
// Description: Simple end-to-end smoke test for the two-
// dimensional forward transform controller. All testbench
// stimulus is assigned at posedge I_CLK using nonblocking
// assignments. No negedge event controls are used. Six TUs
// cover rectangular size routing, TU metadata, backpressure,
// and DCT2/DST7/DCT8 selection. Expected data are either
// the DC term of a constant DCT2 block or exactly zero.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_2D_TRANSFORM_CONTROLLER_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_TU_ID_WD = 16;
  localparam PARA_TU_COUNT = 6;

  logic I_CLK;
  logic I_RESETN;
  logic [63:0] I_DATA;
  logic I_DATA_VALID;
  logic I_DATA_READY;
  logic I_TU_START;
  logic [1:0] I_TU_WIDTH_SIZE;
  logic [1:0] I_TU_HEIGHT_SIZE;
  logic [1:0] I_ROW_TRANSFORM_MODE;
  logic [1:0] I_COLUMN_TRANSFORM_MODE;
  logic [15:0] I_TU_ID;
  logic [63:0] O_DATA;
  logic O_DATA_VALID;
  logic O_DATA_READY;
  logic O_DATA_LAST;
  logic O_TU_START;
  logic O_TU_LAST;
  logic [1:0] O_TU_WIDTH_SIZE;
  logic [1:0] O_TU_HEIGHT_SIZE;
  logic [1:0] O_ROW_TRANSFORM_MODE;
  logic [1:0] O_COLUMN_TRANSFORM_MODE;
  logic [15:0] O_TU_ID;
  logic [3:0] O_COLUMN_OVERFLOW;
  logic O_ROW_OVERFLOW_STICKY;
  logic O_COLUMN_OVERFLOW_STICKY;
  logic [1:0] O_BUFFER_0_STATE;
  logic [1:0] O_BUFFER_1_STATE;

  integer r_errors;
  integer r_received_tus;
  integer r_received_beat;
  integer r_cycle;
  integer r_overlap_cycles;
  integer r_expected_beats;
  integer r_expected_last_beat;
  integer r_expected_value;
  integer r_actual_value;
  logic r_previous_stall;
  logic [63:0] r_held_output;
  logic r_held_last;
  logic r_held_tu_start;
  logic r_held_tu_last;
  logic [15:0] r_held_tu_id;
  integer r_tu_width [0:PARA_TU_COUNT-1];
  integer r_tu_height [0:PARA_TU_COUNT-1];
  integer r_tu_value [0:PARA_TU_COUNT-1];
  logic [1:0] r_tu_row_mode [0:PARA_TU_COUNT-1];
  logic [1:0] r_tu_col_mode [0:PARA_TU_COUNT-1];

  always #5 I_CLK = ~I_CLK;

  TQ_2D_TRANSFORM_CONTROLLER u_dut (
    .I_CLK                       (I_CLK),
    .I_RESETN                    (I_RESETN),
    .I_DATA                      (I_DATA),
    .I_DATA_VALID                (I_DATA_VALID),
    .I_DATA_READY                (I_DATA_READY),
    .I_TU_START                  (I_TU_START),
    .I_TU_WIDTH_SIZE             (I_TU_WIDTH_SIZE),
    .I_TU_HEIGHT_SIZE            (I_TU_HEIGHT_SIZE),
    .I_ROW_TRANSFORM_MODE        (I_ROW_TRANSFORM_MODE),
    .I_COLUMN_TRANSFORM_MODE     (I_COLUMN_TRANSFORM_MODE),
    .I_TU_ID                     (I_TU_ID),
    .O_DATA                      (O_DATA),
    .O_DATA_VALID                (O_DATA_VALID),
    .O_DATA_READY                (O_DATA_READY),
    .O_DATA_LAST                 (O_DATA_LAST),
    .O_TU_START                  (O_TU_START),
    .O_TU_LAST                   (O_TU_LAST),
    .O_TU_WIDTH_SIZE            (O_TU_WIDTH_SIZE),
    .O_TU_HEIGHT_SIZE           (O_TU_HEIGHT_SIZE),
    .O_ROW_TRANSFORM_MODE        (O_ROW_TRANSFORM_MODE),
    .O_COLUMN_TRANSFORM_MODE     (O_COLUMN_TRANSFORM_MODE),
    .O_TU_ID                    (O_TU_ID),
    .O_COLUMN_OVERFLOW          (O_COLUMN_OVERFLOW),
    .O_ROW_OVERFLOW_STICKY       (O_ROW_OVERFLOW_STICKY),
    .O_COLUMN_OVERFLOW_STICKY    (O_COLUMN_OVERFLOW_STICKY),
    .O_BUFFER_0_STATE           (O_BUFFER_0_STATE),
    .O_BUFFER_1_STATE           (O_BUFFER_1_STATE)
  );

  // Drive at posedge only; the testbench clock is the only
  // signal that changes on both edges.
  task automatic send_beat(
    input integer value,
    input logic first_beat,
    input logic [1:0] width_code,
    input logic [1:0] height_code,
    input logic [1:0] row_mode,
    input logic [1:0] col_mode,
    input logic [15:0] tu_id
  );
    begin
      @(posedge I_CLK);
      I_DATA <= {4{16'(value)}};
      I_DATA_VALID <= 1'b1;
      I_TU_START <= first_beat;
      I_TU_WIDTH_SIZE <= width_code;
      I_TU_HEIGHT_SIZE <= height_code;
      I_ROW_TRANSFORM_MODE <= row_mode;
      I_COLUMN_TRANSFORM_MODE <= col_mode;
      I_TU_ID <= tu_id;
      @(posedge I_CLK);
      while (!I_DATA_READY)
        @(posedge I_CLK);
      I_DATA_VALID <= 1'b0;
      I_TU_START <= 1'b0;
    end
  endtask

  task automatic send_tu(input integer tu_index);
    integer beats;
    begin
      beats = r_tu_width[tu_index] * r_tu_height[tu_index] / 4;
      $display("SEND TU=%0d W=%0d H=%0d RMode=%0d CMode=%0d Input=%0d",
               tu_index, r_tu_width[tu_index], r_tu_height[tu_index],
               r_tu_row_mode[tu_index], r_tu_col_mode[tu_index], r_tu_value[tu_index]);
      for (integer beat = 0; beat < beats; beat++) begin
        send_beat(r_tu_value[tu_index], (beat == 0),
                  2'($clog2(r_tu_width[tu_index]) - 2),
                  2'($clog2(r_tu_height[tu_index]) - 2),
                  r_tu_row_mode[tu_index], r_tu_col_mode[tu_index],
                  16'(100 + tu_index));
      end
    end
  endtask

  // Output coefficients are column major: each column has H/4
  // beats. For a constant-valued 2D DCT2 block, only coeff
  // (vertical index 0, horizontal index 0) is nonzero.
  always @(posedge I_CLK) begin
    if (I_RESETN) begin
      if (r_previous_stall) begin
        if (!O_DATA_VALID || O_DATA !== r_held_output ||
            O_DATA_LAST !== r_held_last ||
            O_TU_START !== r_held_tu_start ||
            O_TU_LAST !== r_held_tu_last ||
            O_TU_ID !== r_held_tu_id) begin
          $display("ERROR output changed under backpressure");
          r_errors = r_errors + 1;
        end
      end
      r_previous_stall = O_DATA_VALID && !O_DATA_READY;
      if (r_previous_stall) begin
        r_held_output = O_DATA;
        r_held_last = O_DATA_LAST;
        r_held_tu_start = O_TU_START;
        r_held_tu_last = O_TU_LAST;
        r_held_tu_id = O_TU_ID;
      end
      r_cycle = r_cycle + 1;
      if (((O_BUFFER_0_STATE == 2'b01) && (O_BUFFER_1_STATE == 2'b11)) ||
          ((O_BUFFER_1_STATE == 2'b01) && (O_BUFFER_0_STATE == 2'b11)))
        r_overlap_cycles = r_overlap_cycles + 1;
      if (O_DATA_VALID && O_DATA_READY) begin
        if (r_received_tus >= PARA_TU_COUNT) begin
          $display("ERROR unexpected extra output TU");
          r_errors = r_errors + 1;
        end else begin
          r_expected_beats = r_tu_width[r_received_tus] * r_tu_height[r_received_tus] / 4;
          r_expected_last_beat = r_tu_height[r_received_tus] / 4 - 1;
          if (O_TU_ID !== 16'(100 + r_received_tus) ||
              (4 << O_TU_WIDTH_SIZE) != r_tu_width[r_received_tus] ||
              (4 << O_TU_HEIGHT_SIZE) != r_tu_height[r_received_tus] ||
              O_ROW_TRANSFORM_MODE !== r_tu_row_mode[r_received_tus] ||
              O_COLUMN_TRANSFORM_MODE !== r_tu_col_mode[r_received_tus]) begin
            $display("ERROR metadata on TU=%0d beat=%0d", r_received_tus, r_received_beat);
            r_errors = r_errors + 1;
          end
          if (O_TU_START !== (r_received_beat == 0) ||
              O_TU_LAST !== (r_received_beat == r_expected_beats-1) ||
              O_DATA_LAST !== ((r_received_beat % (r_expected_last_beat+1)) == r_expected_last_beat)) begin
            $display("ERROR LAST/START TU=%0d beat=%0d: TU_START=%b TU_LAST=%b VECTOR_LAST=%b",
                     r_received_tus, r_received_beat, O_TU_START, O_TU_LAST, O_DATA_LAST);
            r_errors = r_errors + 1;
          end
          $display("RECV TU=%0d beat=%0d ID=%0d W=%0d H=%0d START=%b LAST=%b",
                   r_received_tus, r_received_beat, O_TU_ID,
                   r_tu_width[r_received_tus], r_tu_height[r_received_tus], O_TU_START, O_TU_LAST);
          for (integer lane = 0; lane < 4; lane++) begin
            r_actual_value = $signed(O_DATA[lane*16 +: 16]);
            r_expected_value = 0;
            if ((r_received_beat == 0) && (lane == 0) &&
                (r_tu_row_mode[r_received_tus] == 2'b00) &&
                (r_tu_col_mode[r_received_tus] == 2'b00))
              r_expected_value = 32*r_tu_value[r_received_tus];
            if (r_actual_value != r_expected_value) begin
              $display("  coeff[%0d] expected=%0d actual=%0d FAIL",
                       r_received_beat*4+lane, r_expected_value, r_actual_value);
              r_errors = r_errors + 1;
            end else
              $display("  coeff[%0d] expected=%0d actual=%0d PASS",
                       r_received_beat*4+lane, r_expected_value, r_actual_value);
          end
          if (|O_COLUMN_OVERFLOW) begin
            $display("ERROR column overflow detected: %b", O_COLUMN_OVERFLOW);
            r_errors = r_errors + 1;
          end
          if (r_received_beat == r_expected_beats-1) begin
            r_received_tus = r_received_tus + 1;
            r_received_beat = 0;
          end else
            r_received_beat = r_received_beat + 1;
        end
      end
      if (O_ROW_OVERFLOW_STICKY || O_COLUMN_OVERFLOW_STICKY) begin
        $display("ERROR unexpected row/column width overflow");
        r_errors = r_errors + 1;
      end
    end
  end

  initial begin
    I_CLK = 1'b0;
    I_RESETN = 1'b0;
    I_DATA = '0;
    I_DATA_VALID = 1'b0;
    I_TU_START = 1'b0;
    I_TU_WIDTH_SIZE = '0;
    I_TU_HEIGHT_SIZE = '0;
    I_ROW_TRANSFORM_MODE = '0;
    I_COLUMN_TRANSFORM_MODE = '0;
    I_TU_ID = '0;
    O_DATA_READY = 1'b0;
    r_errors = 0;
    r_received_tus = 0;
    r_received_beat = 0;
    r_cycle = 0;
    r_overlap_cycles = 0;
    r_previous_stall = 1'b0;
    r_held_output = '0;
    r_held_last = 1'b0;
    r_held_tu_start = 1'b0;
    r_held_tu_last = 1'b0;
    r_held_tu_id = '0;

    r_tu_width[0] = 4; r_tu_height[0] = 4; r_tu_value[0] = 1;
    r_tu_width[1] = 8; r_tu_height[1] = 4; r_tu_value[1] = -1;
    r_tu_width[2] = 4; r_tu_height[2] = 8; r_tu_value[2] = 1;
    r_tu_width[3] = 8; r_tu_height[3] = 8; r_tu_value[3] = 2;
    r_tu_width[4] = 4; r_tu_height[4] = 4; r_tu_value[4] = 0;
    r_tu_width[5] = 4; r_tu_height[5] = 4; r_tu_value[5] = 0;
    for (integer i = 0; i < PARA_TU_COUNT; i++) begin
      r_tu_row_mode[i] = 2'b00;
      r_tu_col_mode[i] = 2'b00;
    end
    r_tu_row_mode[4] = 2'b01;
    r_tu_col_mode[4] = 2'b01;
    r_tu_row_mode[5] = 2'b10;
    r_tu_col_mode[5] = 2'b10;

    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    O_DATA_READY <= 1'b1;
    fork
      begin
        for (integer t = 0; t < PARA_TU_COUNT; t++)
          send_tu(t);
      end
      begin
        // Backpressure changes ONLY on positive edges.
        forever begin
          @(posedge I_CLK);
          O_DATA_READY <= ((r_cycle % 13) > 3);
        end
      end
    join_none
    wait (r_received_tus == PARA_TU_COUNT);
    repeat (5) @(posedge I_CLK);
    $display("FINISHED: TUs=%0d errors=%0d row/column buffer overlap cycles=%0d",
             r_received_tus, r_errors, r_overlap_cycles);
    if (r_errors != 0)
      $fatal(1, "2D TRANSFORM TEST FAILED");
    $display("PASS: 2D TRANSFORM CONTROLLER SMOKE TEST");
    $finish;
  end

  initial begin
    repeat (250000) @(posedge I_CLK);
    $fatal(1, "TIMEOUT: incomplete 2D transform transaction");
  end
endmodule: TQ_2D_TRANSFORM_CONTROLLER_TB
