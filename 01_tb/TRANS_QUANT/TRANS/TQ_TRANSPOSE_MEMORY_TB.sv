//-----------------------------------------------------------
// Description: Self-checking testbench for independent two-
// buffer transpose memory. All stimulus changes at positive
// clock edges. It checks five TU shapes, all column outputs,
// metadata, vector/TU LAST, stalls, and simultaneous bank use.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_TRANSPOSE_MEMORY_TB;
  localparam PARA_DATA_WD = 16;
  localparam PARA_TU_ID_WD = 16;
  localparam PARA_TOTAL_TESTS = 5;

  logic I_CLK;
  logic I_RESETN;
  logic [4*PARA_DATA_WD-1:0] I_WRITE_DATA;
  logic I_WRITE_VALID;
  logic O_WRITE_READY;
  logic I_WRITE_TU_START;
  logic [1:0] I_WRITE_WIDTH_SIZE;
  logic [1:0] I_WRITE_HEIGHT_SIZE;
  logic [PARA_TU_ID_WD-1:0] I_WRITE_TU_ID;
  logic [1:0] I_WRITE_ROW_MODE;
  logic [1:0] I_WRITE_COLUMN_MODE;
  logic [4*PARA_DATA_WD-1:0] O_READ_DATA;
  logic O_READ_VALID;
  logic I_READ_READY;
  logic O_READ_VECTOR_LAST;
  logic O_READ_TU_START;
  logic O_READ_TU_LAST;
  logic [1:0] O_READ_WIDTH_SIZE;
  logic [1:0] O_READ_HEIGHT_SIZE;
  logic [PARA_TU_ID_WD-1:0] O_READ_TU_ID;
  logic [1:0] O_READ_ROW_MODE;
  logic [1:0] O_READ_COLUMN_MODE;
  logic [1:0] O_BUFFER_0_STATE;
  logic [1:0] O_BUFFER_1_STATE;

  integer r_cycle;
  integer r_errors;
  integer r_received_tus;
  integer r_received_column;
  integer r_received_group;
  logic r_stalled;
  logic [4*PARA_DATA_WD-1:0] r_stall_data;
  logic [PARA_TU_ID_WD-1:0] r_stall_id;
  logic [1:0] r_stall_width;
  logic [1:0] r_stall_height;
  logic [1:0] r_stall_row_mode;
  logic [1:0] r_stall_column_mode;
  logic [2:0] r_stall_flags;
  logic r_seen_overlap;

  // Basic test sizes: 4x4, 8x8, 16x8, 8x16, 32x32.
  function automatic integer tu_width(input integer index);
    case (index)
      0: tu_width = 4;
      1: tu_width = 8;
      2: tu_width = 16;
      3: tu_width = 8;
      default: tu_width = 32;
    endcase
  endfunction

  function automatic integer tu_height(input integer index);
    case (index)
      0: tu_height = 4;
      1: tu_height = 8;
      2: tu_height = 8;
      3: tu_height = 16;
      default: tu_height = 32;
    endcase
  endfunction

  function automatic logic [1:0] size_code(input integer size);
    case (size)
      4: size_code = 2'b00;
      8: size_code = 2'b01;
      16: size_code = 2'b10;
      default: size_code = 2'b11;
    endcase
  endfunction

  function automatic logic [15:0] sample_value(input integer id, row, column);
    integer magnitude;
    begin
      magnitude = id*2000 + row*37 + column*31;
      if (((id+row+column) & 1) != 0)
        sample_value = -magnitude;
      else
        sample_value = magnitude;
    end
  endfunction

  TQ_TRANSPOSE_MEMORY #(
    .PARA_DATA_WD (PARA_DATA_WD),
    .PARA_TU_ID_WD (PARA_TU_ID_WD)
  ) u_dut (
    .I_CLK (I_CLK),
    .I_RESETN (I_RESETN),
    .I_WRITE_DATA (I_WRITE_DATA),
    .I_WRITE_VALID (I_WRITE_VALID),
    .O_WRITE_READY (O_WRITE_READY),
    .I_WRITE_TU_START (I_WRITE_TU_START),
    .I_WRITE_WIDTH_SIZE (I_WRITE_WIDTH_SIZE),
    .I_WRITE_HEIGHT_SIZE (I_WRITE_HEIGHT_SIZE),
    .I_WRITE_TU_ID (I_WRITE_TU_ID),
    .I_WRITE_ROW_MODE (I_WRITE_ROW_MODE),
    .I_WRITE_COLUMN_MODE (I_WRITE_COLUMN_MODE),
    .O_READ_DATA (O_READ_DATA),
    .O_READ_VALID (O_READ_VALID),
    .I_READ_READY (I_READ_READY),
    .O_READ_VECTOR_LAST (O_READ_VECTOR_LAST),
    .O_READ_TU_START (O_READ_TU_START),
    .O_READ_TU_LAST (O_READ_TU_LAST),
    .O_READ_WIDTH_SIZE (O_READ_WIDTH_SIZE),
    .O_READ_HEIGHT_SIZE (O_READ_HEIGHT_SIZE),
    .O_READ_TU_ID (O_READ_TU_ID),
    .O_READ_ROW_MODE (O_READ_ROW_MODE),
    .O_READ_COLUMN_MODE (O_READ_COLUMN_MODE),
    .O_BUFFER_0_STATE (O_BUFFER_0_STATE),
    .O_BUFFER_1_STATE (O_BUFFER_1_STATE)
  );

  initial I_CLK = 1'b0;
  always #5 I_CLK = ~I_CLK;

  task automatic send_tu(input integer index);
    integer row;
    integer group;
    integer lane;
    logic [4*PARA_DATA_WD-1:0] payload;
    begin
      $display("[WRITE] TU=%0d WIDTH=%0d HEIGHT=%0d", index+1, tu_width(index), tu_height(index));
      for (row = 0; row < tu_height(index); row = row + 1) begin
        for (group = 0; group < tu_width(index)/4; group = group + 1) begin
          payload = '0;
          for (lane = 0; lane < 4; lane = lane + 1)
            payload[lane*PARA_DATA_WD +: PARA_DATA_WD] = sample_value(index+1, row, 4*group+lane);
          @(posedge I_CLK);
          I_WRITE_VALID <= 1'b1;
          I_WRITE_DATA <= payload;
          I_WRITE_TU_START <= ((row == 0) && (group == 0));
          I_WRITE_WIDTH_SIZE <= size_code(tu_width(index));
          I_WRITE_HEIGHT_SIZE <= size_code(tu_height(index));
          I_WRITE_TU_ID <= PARA_TU_ID_WD'(index+1);
          I_WRITE_ROW_MODE <= 2'(index & 3);
          I_WRITE_COLUMN_MODE <= 2'((index+1) & 3);
          @(posedge I_CLK);
          while (!O_WRITE_READY)
            @(posedge I_CLK);
          I_WRITE_VALID <= 1'b0;
          I_WRITE_TU_START <= 1'b0;
        end
      end
    end
  endtask

  initial begin
    I_RESETN = 1'b0;
    I_WRITE_VALID = 1'b0;
    I_WRITE_DATA = '0;
    I_WRITE_TU_START = 1'b0;
    I_WRITE_WIDTH_SIZE = 2'b00;
    I_WRITE_HEIGHT_SIZE = 2'b00;
    I_WRITE_TU_ID = '0;
    I_WRITE_ROW_MODE = 2'b00;
    I_WRITE_COLUMN_MODE = 2'b00;
    I_READ_READY = 1'b0;
    r_cycle = 0;
    r_errors = 0;
    r_received_tus = 0;
    r_received_column = 0;
    r_received_group = 0;
    r_stalled = 1'b0;
    r_stall_data = '0;
    r_stall_id = '0;
    r_stall_width = '0;
    r_stall_height = '0;
    r_stall_row_mode = '0;
    r_stall_column_mode = '0;
    r_stall_flags = '0;
    r_seen_overlap = 1'b0;
    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    for (integer t = 0; t < PARA_TOTAL_TESTS; t = t + 1)
      send_tu(t);
    wait (r_received_tus == PARA_TOTAL_TESTS);
    @(posedge I_CLK);
    if (!r_seen_overlap) begin
      $display("ERROR: never observed one buffer READING while the other WRITING");
      r_errors = r_errors + 1;
    end
    if (r_errors == 0)
      $display("PASS: all five TUs transposed in order, independent buffers, backpressure");
    else
      $display("FAIL: transpose memory errors=%0d", r_errors);
    if (r_errors != 0)
      $fatal(1, "TQ_TRANSPOSE_MEMORY_TB FAILED");
    $finish;
  end

  // READY updates ONLY at posedge; no negedge stimulus is used.
  always @(posedge I_CLK) begin
    if (I_RESETN) begin
      r_cycle = r_cycle + 1;
      I_READ_READY <= ((r_cycle % 13) >= 4);
      if ((O_BUFFER_0_STATE == 2'b11 && O_BUFFER_1_STATE == 2'b01) ||
          (O_BUFFER_1_STATE == 2'b11 && O_BUFFER_0_STATE == 2'b01))
        r_seen_overlap = 1'b1;
    end
  end

  always @(posedge I_CLK) begin: CHECK_OUTPUT
    integer row;
    integer lane;
    logic [PARA_DATA_WD-1:0] expected;
    if (I_RESETN) begin
      if (r_stalled) begin
        if (!O_READ_VALID || O_READ_DATA !== r_stall_data || O_READ_TU_ID !== r_stall_id ||
            O_READ_WIDTH_SIZE !== r_stall_width || O_READ_HEIGHT_SIZE !== r_stall_height ||
            O_READ_ROW_MODE !== r_stall_row_mode || O_READ_COLUMN_MODE !== r_stall_column_mode ||
            {O_READ_TU_START, O_READ_TU_LAST, O_READ_VECTOR_LAST} !== r_stall_flags) begin
          $display("ERROR: read data or metadata changed during backpressure");
          r_errors = r_errors + 1;
        end
      end
      r_stalled = O_READ_VALID && !I_READ_READY;
      if (r_stalled) begin
        r_stall_data = O_READ_DATA;
        r_stall_id = O_READ_TU_ID;
        r_stall_width = O_READ_WIDTH_SIZE;
        r_stall_height = O_READ_HEIGHT_SIZE;
        r_stall_row_mode = O_READ_ROW_MODE;
        r_stall_column_mode = O_READ_COLUMN_MODE;
        r_stall_flags = {O_READ_TU_START, O_READ_TU_LAST, O_READ_VECTOR_LAST};
      end
      if (O_READ_VALID && I_READ_READY) begin
        if (r_received_tus >= PARA_TOTAL_TESTS) begin
          $display("ERROR: extra TU output");
          r_errors = r_errors + 1;
        end else begin
          for (lane = 0; lane < 4; lane = lane + 1) begin
            row = 4*r_received_group+lane;
            expected = sample_value(r_received_tus+1, row, r_received_column);
            if (O_READ_DATA[lane*PARA_DATA_WD +: PARA_DATA_WD] !== expected) begin
              $display("ERROR: TU=%0d col=%0d row=%0d expected=%0d actual=%0d",
                       r_received_tus+1, r_received_column, row,
                       $signed(expected), $signed(O_READ_DATA[lane*PARA_DATA_WD +: PARA_DATA_WD]));
              r_errors = r_errors + 1;
            end
          end
          if (O_READ_TU_ID !== PARA_TU_ID_WD'(r_received_tus+1) ||
              O_READ_WIDTH_SIZE !== size_code(tu_width(r_received_tus)) ||
              O_READ_HEIGHT_SIZE !== size_code(tu_height(r_received_tus)) ||
              O_READ_ROW_MODE !== 2'(r_received_tus & 3) ||
              O_READ_COLUMN_MODE !== 2'((r_received_tus+1) & 3)) begin
            $display("ERROR: incorrect TU metadata (TU=%0d)", r_received_tus+1);
            r_errors = r_errors + 1;
          end
          if (O_READ_TU_START !== ((r_received_column == 0) && (r_received_group == 0)) ||
              O_READ_VECTOR_LAST !== (r_received_group == tu_height(r_received_tus)/4-1) ||
              O_READ_TU_LAST !== ((r_received_column == tu_width(r_received_tus)-1) &&
                                 (r_received_group == tu_height(r_received_tus)/4-1))) begin
            $display("ERROR: incorrect START/LAST flags (TU=%0d col=%0d group=%0d)",
                     r_received_tus+1, r_received_column, r_received_group);
            r_errors = r_errors + 1;
          end
          if (r_received_group == tu_height(r_received_tus)/4-1) begin
            r_received_group = 0;
            if (r_received_column == tu_width(r_received_tus)-1) begin
              $display("[PASS DATA] TU=%0d (%0dx%0d) completely checked",
                       r_received_tus+1, tu_width(r_received_tus), tu_height(r_received_tus));
              r_received_tus = r_received_tus + 1;
              r_received_column = 0;
            end else
              r_received_column = r_received_column + 1;
          end else
            r_received_group = r_received_group + 1;
        end
      end
    end
  end

  initial begin
    repeat (20000) @(posedge I_CLK);
    $fatal(1, "TIMEOUT: transpose memory did not finish");
  end
endmodule: TQ_TRANSPOSE_MEMORY_TB
