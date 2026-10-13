//-----------------------------------------------------------
// Description: Verify seven complete TUs against an integer
// reference model. Source and sink change stimulus only at
// positive clock edges. Scoreboard checks all four lanes,
// clipping flags, metadata, and stability during stalls.
// Includes negative coefficients and consecutive TU changes.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INVERSE_QUANTIZATION_ENGINE_TB;
  localparam PARA_NUM_BEATS = 452;
  localparam PARA_NUM_TUS = 7;

  logic                I_CLK;
  logic                I_RESETN;
  logic [63:0]         I_DATA;
  logic                I_DATA_VALID;
  logic                I_DATA_READY;
  logic                I_DATA_LAST;
  logic                I_TU_START;
  logic                I_TU_LAST;
  logic [1:0]          I_TU_WIDTH_SIZE;
  logic [1:0]          I_TU_HEIGHT_SIZE;
  logic [1:0]          I_ROW_TRANSFORM_MODE;
  logic [1:0]          I_COLUMN_TRANSFORM_MODE;
  logic [15:0]         I_TU_ID;
  logic [6:0]          I_QP_PRIME;
  logic                I_IS_IRAP;
  logic [63:0]         O_DATA;
  logic                O_DATA_VALID;
  logic                O_DATA_READY;
  logic                O_DATA_LAST;
  logic                O_TU_START;
  logic                O_TU_LAST;
  logic [1:0]          O_TU_WIDTH_SIZE;
  logic [1:0]          O_TU_HEIGHT_SIZE;
  logic [1:0]          O_ROW_TRANSFORM_MODE;
  logic [1:0]          O_COLUMN_TRANSFORM_MODE;
  logic [15:0]         O_TU_ID;
  logic [6:0]          O_QP_PRIME;
  logic                O_IS_IRAP;
  logic [3:0]          O_CLIPPED;

  logic [63:0]         r_input_mem [0:PARA_NUM_BEATS-1];
  logic [63:0]         r_golden_mem [0:PARA_NUM_BEATS-1];
  logic [34:0]         r_meta_mem [0:PARA_NUM_BEATS-1];
  logic [3:0]          r_clipped_mem [0:PARA_NUM_BEATS-1];
  logic [34:0]         w_actual_meta;
  integer              r_cycle;
  integer              r_sent;
  integer              r_received;
  integer              r_tus_received;
  integer              r_output_stalls;
  logic                r_prev_stalled;
  logic [63:0]         r_prev_output;
  logic [34:0]         r_prev_meta;
  logic [3:0]          r_prev_clip;
  logic                r_prev_input_stalled;
  logic [63:0]         r_prev_input;
  logic [34:0]         r_prev_input_meta;
  logic [34:0]         w_input_meta;

  TQ_INVERSE_QUANTIZATION_ENGINE u_dut (
    .I_CLK                   (I_CLK),
    .I_RESETN                (I_RESETN),
    .I_DATA                  (I_DATA),
    .I_DATA_VALID            (I_DATA_VALID),
    .I_DATA_READY            (I_DATA_READY),
    .I_DATA_LAST             (I_DATA_LAST),
    .I_TU_START              (I_TU_START),
    .I_TU_LAST               (I_TU_LAST),
    .I_TU_WIDTH_SIZE         (I_TU_WIDTH_SIZE),
    .I_TU_HEIGHT_SIZE        (I_TU_HEIGHT_SIZE),
    .I_ROW_TRANSFORM_MODE    (I_ROW_TRANSFORM_MODE),
    .I_COLUMN_TRANSFORM_MODE (I_COLUMN_TRANSFORM_MODE),
    .I_TU_ID                 (I_TU_ID),
    .I_QP_PRIME              (I_QP_PRIME),
    .I_IS_IRAP               (I_IS_IRAP),
    .O_DATA                  (O_DATA),
    .O_DATA_VALID            (O_DATA_VALID),
    .O_DATA_READY            (O_DATA_READY),
    .O_DATA_LAST             (O_DATA_LAST),
    .O_TU_START              (O_TU_START),
    .O_TU_LAST               (O_TU_LAST),
    .O_TU_WIDTH_SIZE         (O_TU_WIDTH_SIZE),
    .O_TU_HEIGHT_SIZE        (O_TU_HEIGHT_SIZE),
    .O_ROW_TRANSFORM_MODE    (O_ROW_TRANSFORM_MODE),
    .O_COLUMN_TRANSFORM_MODE (O_COLUMN_TRANSFORM_MODE),
    .O_TU_ID                 (O_TU_ID),
    .O_QP_PRIME              (O_QP_PRIME),
    .O_IS_IRAP               (O_IS_IRAP),
    .O_CLIPPED               (O_CLIPPED)
  );

  always #5 I_CLK = ~I_CLK;
  assign w_actual_meta = {O_COLUMN_TRANSFORM_MODE, O_ROW_TRANSFORM_MODE, O_TU_ID, O_QP_PRIME, O_IS_IRAP, O_TU_HEIGHT_SIZE, O_TU_WIDTH_SIZE, O_TU_LAST, O_TU_START, O_DATA_LAST};
  assign w_input_meta = {I_COLUMN_TRANSFORM_MODE, I_ROW_TRANSFORM_MODE, I_TU_ID, I_QP_PRIME, I_IS_IRAP, I_TU_HEIGHT_SIZE, I_TU_WIDTH_SIZE, I_TU_LAST, I_TU_START, I_DATA_LAST};

  initial begin
    I_CLK = 1'b0;
    I_RESETN = 1'b0;
    I_DATA = '0;
    I_DATA_VALID = 1'b0;
    I_DATA_LAST = 1'b0;
    I_TU_START = 1'b0;
    I_TU_LAST = 1'b0;
    I_TU_WIDTH_SIZE = '0;
    I_TU_HEIGHT_SIZE = '0;
    I_ROW_TRANSFORM_MODE = '0;
    I_COLUMN_TRANSFORM_MODE = '0;
    I_TU_ID = '0;
    I_QP_PRIME = '0;
    I_IS_IRAP = 1'b0;
    O_DATA_READY = 1'b0;
    $readmemh("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/mem/dequant_input.mem", r_input_mem);
    $readmemh("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/mem/dequant_expected.mem", r_golden_mem);
    $readmemh("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/mem/dequant_metadata.mem", r_meta_mem);
    $readmemh("/mnt/c/SystemVerilog/H266_VVC/Design_All_Intra/mem/dequant_clipped.mem", r_clipped_mem);
    repeat (5) @(posedge I_CLK);
    I_RESETN <= 1'b1;
  end

  // Producer advances its read pointer only on a real handshake.
  // Every stimulus assignment uses nonblocking assignment at posedge.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_sent = 0;
      I_DATA_VALID <= 1'b0;
    end
    else if (!I_DATA_VALID || I_DATA_READY) begin
      if (I_DATA_VALID && I_DATA_READY)
        r_sent = r_sent + 1;
      if (r_sent < PARA_NUM_BEATS) begin
        I_DATA <= r_input_mem[r_sent];
        I_DATA_LAST <= r_meta_mem[r_sent][0];
        I_TU_START <= r_meta_mem[r_sent][1];
        I_TU_LAST <= r_meta_mem[r_sent][2];
        I_TU_WIDTH_SIZE <= r_meta_mem[r_sent][4:3];
        I_TU_HEIGHT_SIZE <= r_meta_mem[r_sent][6:5];
        I_IS_IRAP <= r_meta_mem[r_sent][7];
        I_QP_PRIME <= r_meta_mem[r_sent][14:8];
        I_TU_ID <= r_meta_mem[r_sent][30:15];
        I_ROW_TRANSFORM_MODE <= r_meta_mem[r_sent][32:31];
        I_COLUMN_TRANSFORM_MODE <= r_meta_mem[r_sent][34:33];
        I_DATA_VALID <= 1'b1;
      end
      else begin
        I_DATA_VALID <= 1'b0;
      end
    end
  end

  // Periodic backpressure creates both short and long output stalls.
  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_cycle <= 0;
      O_DATA_READY <= 1'b0;
    end
    else begin
      r_cycle <= r_cycle + 1;
      O_DATA_READY <= ((r_cycle % 17) >= 7) && ((r_cycle % 67) < 58);
    end
  end

  always @(posedge I_CLK) begin
    if (!I_RESETN) begin
      r_received = 0;
      r_tus_received = 0;
      r_output_stalls = 0;
      r_prev_stalled = 1'b0;
      r_prev_input_stalled = 1'b0;
    end
    else begin
      if (r_prev_stalled && (!O_DATA_VALID || O_DATA !== r_prev_output || w_actual_meta !== r_prev_meta || O_CLIPPED !== r_prev_clip))
        $fatal(1, "[FAIL] Output data/metadata changed while stalled, cycle=%0d", r_cycle);
      r_prev_stalled = O_DATA_VALID && !O_DATA_READY;
      if (r_prev_stalled) begin
        r_output_stalls = r_output_stalls + 1;
        r_prev_output = O_DATA;
        r_prev_meta = w_actual_meta;
        r_prev_clip = O_CLIPPED;
      end

      if (r_prev_input_stalled && (!I_DATA_VALID || I_DATA !== r_prev_input || w_input_meta !== r_prev_input_meta))
        $fatal(1, "[FAIL] Input source changed while stalled, cycle=%0d", r_cycle);
      r_prev_input_stalled = I_DATA_VALID && !I_DATA_READY;
      if (r_prev_input_stalled) begin
        r_prev_input = I_DATA;
        r_prev_input_meta = w_input_meta;
      end

      if (O_DATA_VALID && O_DATA_READY) begin
        if (r_received >= PARA_NUM_BEATS)
          $fatal(1, "[FAIL] Unexpected extra output beat");
        if (O_DATA !== r_golden_mem[r_received]) begin
          $display("[FAIL] BEAT %0d DATA: exp=%h act=%h", r_received, r_golden_mem[r_received], O_DATA);
          for (integer lane = 0; lane < 4; lane = lane + 1)
            $display(" lane=%0d q=%0d expected=%0d actual=%0d", lane, $signed(r_input_mem[r_received][16*lane+:16]), $signed(r_golden_mem[r_received][16*lane+:16]), $signed(O_DATA[16*lane+:16]));
          $fatal(1, "[FAIL] Dequant arithmetic mismatch");
        end
        if (O_CLIPPED !== r_clipped_mem[r_received])
          $fatal(1, "[FAIL] BEAT %0d CLIP: expected=%b actual=%b", r_received, r_clipped_mem[r_received], O_CLIPPED);
        if (w_actual_meta !== r_meta_mem[r_received])
          $fatal(1, "[FAIL] BEAT %0d META: expected=%h actual=%h", r_received, r_meta_mem[r_received], w_actual_meta);
        if (O_TU_LAST) begin
          r_tus_received = r_tus_received + 1;
          $display("[INFO] TU=%0d QP_PRIME=%0d SIZE=%0d,%0d completed at beat %0d", O_TU_ID, O_QP_PRIME, O_TU_WIDTH_SIZE, O_TU_HEIGHT_SIZE, r_received);
        end
        r_received = r_received + 1;
      end
    end
  end

  initial begin
    wait (I_RESETN);
    wait (r_received == PARA_NUM_BEATS);
    repeat (2) @(posedge I_CLK);
    if (r_sent != PARA_NUM_BEATS || r_tus_received != PARA_NUM_TUS || r_output_stalls == 0)
      $fatal(1, "[FAIL] Coverage: sent=%0d recv=%0d TUs=%0d stalls=%0d", r_sent, r_received, r_tus_received, r_output_stalls);
    $display("[PASS] Inverse Quantization: %0d beats, %0d TUs, %0d output stall cycles", r_received, r_tus_received, r_output_stalls);
    $finish;
  end

  initial begin
    repeat (20000) @(posedge I_CLK);
    $fatal(1, "[FAIL] TIMEOUT: sent=%0d received=%0d", r_sent, r_received);
  end
endmodule: TQ_INVERSE_QUANTIZATION_ENGINE_TB
