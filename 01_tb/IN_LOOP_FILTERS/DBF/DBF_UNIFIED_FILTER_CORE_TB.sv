`timescale 1ns/1ps

module DBF_UNIFIED_FILTER_CORE_TB;
  logic clk;
  logic rst_n;
  logic in_valid;
  logic in_ready;
  logic in_bypass;
  logic [1023:0] window_data;
  logic [11:0] edge_id;
  logic [8:0] ctu_id;
  logic bank;
  logic [1:0] component_id;
  logic direction;
  logic [7:0] edge_x;
  logic [7:0] edge_y;
  logic [3:0] lane_mask;
  logic [1:0] bs;
  logic [2:0] sp;
  logic [2:0] sq;
  logic [5:0] qp_p;
  logic [5:0] qp_q;
  logic signed [5:0] beta_offset_div2;
  logic signed [5:0] tc_offset_div2;
  logic result_valid;
  logic result_ready;
  logic result_bypass;
  logic [1023:0] filtered_window;
  logic [63:0] sample_write_mask;
  logic [11:0] result_edge_id;
  logic [8:0] result_ctu_id;
  logic result_bank;
  logic [1:0] result_component_id;
  logic result_direction;
  logic [7:0] result_x;
  logic [7:0] result_y;
  logic [3:0] result_lane_mask;
  logic [2:0] filter_mode;
  logic [8:0] condition_flags;
  logic result_error;
  logic busy;
  integer accepted;
  integer completed;

  localparam logic [2:0] PARA_MODE_NF   = 3'd0;
  localparam logic [2:0] PARA_MODE_LSSF = 3'd2;
  localparam logic [2:0] PARA_MODE_LLF  = 3'd3;
  localparam logic [2:0] PARA_MODE_CSF  = 3'd4;
  localparam logic [2:0] PARA_MODE_CLF  = 3'd5;

  DBF_UNIFIED_FILTER_CORE dut (
    .I_CLK                  (clk),
    .I_RST_N                (rst_n),
    .I_IN_VALID             (in_valid),
    .O_IN_READY             (in_ready),
    .I_IN_BYPASS            (in_bypass),
    .I_WINDOW_DATA          (window_data),
    .I_EDGE_ID              (edge_id),
    .I_CTU_ID               (ctu_id),
    .I_BANK                 (bank),
    .I_COMPONENT_ID         (component_id),
    .I_DIRECTION            (direction),
    .I_EDGE_X               (edge_x),
    .I_EDGE_Y               (edge_y),
    .I_LANE_MASK            (lane_mask),
    .I_BS                   (bs),
    .I_SP                   (sp),
    .I_SQ                   (sq),
    .I_QP_P                 (qp_p),
    .I_QP_Q                 (qp_q),
    .I_BETA_OFFSET_DIV2     (beta_offset_div2),
    .I_TC_OFFSET_DIV2       (tc_offset_div2),
    .O_RESULT_VALID         (result_valid),
    .I_RESULT_READY         (result_ready),
    .O_RESULT_BYPASS        (result_bypass),
    .O_FILTERED_WINDOW      (filtered_window),
    .O_SAMPLE_WRITE_MASK    (sample_write_mask),
    .O_RESULT_EDGE_ID       (result_edge_id),
    .O_RESULT_CTU_ID        (result_ctu_id),
    .O_RESULT_BANK          (result_bank),
    .O_RESULT_COMPONENT_ID  (result_component_id),
    .O_RESULT_DIRECTION     (result_direction),
    .O_RESULT_X             (result_x),
    .O_RESULT_Y             (result_y),
    .O_RESULT_LANE_MASK     (result_lane_mask),
    .O_FILTER_MODE          (filter_mode),
    .O_CONDITION_FLAGS      (condition_flags),
    .O_ERROR                (result_error),
    .O_BUSY                 (busy)
  );

  initial clk = 1'b0;
  always #5 clk = ~clk;

  always @(posedge clk) begin
    if (rst_n) begin
      if (in_valid && in_ready) begin
        accepted <= accepted + 1;
        $display("[TB] IN  handshake id=%0d state=%0d at %0t",
                 edge_id, dut.r_current_state, $time);
      end
      if (result_valid && result_ready) begin
        completed <= completed + 1;
        $display("[TB] OUT handshake id=%0d state=%0d at %0t",
                 result_edge_id, dut.r_current_state, $time);
      end
    end
  end

  // All DUT stimulus is driven only at posedge, using nonblocking assignments.
  task automatic send_edge (
    input logic [11:0] new_id,
    input logic [1:0] comp,
    input logic [2:0] length_p,
    input logic [2:0] length_q,
    input logic [5:0] qp,
    input logic bypass,
    input logic noisy
  );
    logic [1023:0] temp_window;
    logic [15:0] pixel;
    integer watchdog;
    integer accepted_before;
    begin
      temp_window = '0;
      for (integer lane = 0; lane < 4; lane++) begin
        for (integer tap = 0; tap < 16; tap++) begin
          if (noisy)
            pixel = ((tap + lane) % 2 == 0) ? 16'd0 : 16'd1023;
          else
            pixel = 16'd512;
          if ((comp == 2'd0) || (lane < 2))
            temp_window[(lane*16+tap)*16 +:16] = pixel;
        end
      end
      // Count only handshakes sampled by the posedge monitor. Reading READY
      // after the DUT advances to BUSY would incorrectly report a failure.
      accepted_before = accepted;
      watchdog = 0;
      @(posedge clk);
      in_valid          <= 1'b1;
      in_bypass         <= bypass;
      window_data       <= temp_window;
      edge_id           <= new_id;
      ctu_id            <= 9'd17;
      bank              <= new_id[0];
      component_id      <= comp;
      direction         <= new_id[0];
      edge_x            <= 8'd16;
      edge_y            <= 8'd8;
      lane_mask         <= (comp == 2'd0 || comp == 2'd3) ? 4'b1111 : 4'b0011;
      bs                <= 2'd2;
      sp                <= length_p;
      sq                <= length_q;
      qp_p              <= qp;
      qp_q              <= qp;
      beta_offset_div2  <= 6'sd0;
      tc_offset_div2    <= 6'sd0;

      // The counter is registered in the same NBA region as the DUT's FSM.
      // It becomes observable at a subsequent posedge without a #delay.
      while (accepted == accepted_before) begin
        @(posedge clk);
        watchdog++;
        if (watchdog > 80)
          $fatal(1, "input handshake timeout id=%0d ready=%b valid=%b state=%0d accepted=%0d",
                 new_id, in_ready, in_valid, dut.r_current_state, accepted);
      end
      in_valid <= 1'b0;
      $display("[TB] Input accepted id=%0d total=%0d at %0t",
               new_id, accepted, $time);
    end
  endtask

  task automatic check_edge (
    input logic [11:0] expected_id,
    input logic [1:0] expected_component,
    input logic [2:0] expected_mode,
    input logic [63:0] expected_mask,
    input logic expected_bypass,
    input logic expected_error,
    input logic check_flat
  );
    logic [1023:0] saved_window;
    logic [63:0] saved_mask;
    logic [2:0] saved_mode;
    integer watchdog;
    integer completed_before;
    begin
      watchdog = 0;
      while (!result_valid) begin
        @(posedge clk);
        watchdog++;
        if (watchdog > 80)
          $fatal(1, "result timeout edge=%0d state=%0d", expected_id, dut.r_current_state);
      end
      if (result_edge_id !== expected_id || result_ctu_id !== 9'd17 ||
          result_component_id !== expected_component ||
          result_bank !== expected_id[0] || result_direction !== expected_id[0] ||
          result_x !== 8'd16 || result_y !== 8'd8)
        $fatal(1, "context mismatch edge=%0d", expected_id);
      if (result_bypass !== expected_bypass || result_error !== expected_error ||
          filter_mode !== expected_mode || sample_write_mask !== expected_mask)
        $fatal(1, "edge=%0d result mismatch: bypass=%b error=%b mode=%0d mask=%h expected=%h",
               expected_id, result_bypass, result_error, filter_mode,
               sample_write_mask, expected_mask);
      if (check_flat) begin
        if (filtered_window !== window_data)
          $fatal(1, "flat samples modified edge=%0d", expected_id);
      end
      saved_window = filtered_window;
      saved_mask   = sample_write_mask;
      saved_mode   = filter_mode;
      repeat (3) begin
        @(posedge clk);
        if (!result_valid || !busy || in_ready ||
            filtered_window !== saved_window ||
            sample_write_mask !== saved_mask || filter_mode !== saved_mode)
          $fatal(1, "output changed under stall edge=%0d", expected_id);
      end
      // Assert READY only at a rising edge; recognize the completion using
      // the monitor's registered handshake count rather than VALID afterward.
      completed_before = completed;
      @(posedge clk);
      result_ready <= 1'b1;
      watchdog = 0;
      while (completed == completed_before) begin
        @(posedge clk);
        watchdog++;
        if (watchdog > 80)
          $fatal(1, "output handshake timeout edge=%0d valid=%b ready=%b state=%0d completed=%0d",
                 expected_id, result_valid, result_ready, dut.r_current_state, completed);
      end
      result_ready <= 1'b0;
      @(posedge clk);
      if (!in_ready || result_valid)
        $fatal(1, "core failed to return to IDLE edge=%0d state=%0d",
               expected_id, dut.r_current_state);
      $display("PASS edge=%0d comp=%0d bypass=%b mode=%0d mask=%h error=%b",
               expected_id, expected_component, expected_bypass,
               expected_mode, expected_mask, expected_error);
    end
  endtask

  initial begin
    rst_n            = 1'b0;
    in_valid         = 1'b0;
    result_ready     = 1'b0;
    in_bypass        = 1'b0;
    window_data      = '0;
    edge_id          = '0;
    ctu_id           = '0;
    bank             = 1'b0;
    component_id     = '0;
    direction        = 1'b0;
    edge_x           = '0;
    edge_y           = '0;
    lane_mask        = '0;
    bs               = '0;
    sp               = '0;
    sq               = '0;
    qp_p             = '0;
    qp_q             = '0;
    beta_offset_div2 = '0;
    tc_offset_div2   = '0;
    accepted         = 0;
    completed        = 0;
    repeat (5) @(posedge clk);
    rst_n <= 1'b1;
    @(posedge clk);

    send_edge(12'd1, 2'd0, 3'd3, 3'd3, 6'd45, 1'b1, 1'b0);
    check_edge(12'd1, 2'd0, PARA_MODE_NF, 64'd0, 1'b1, 1'b0, 1'b1);

    send_edge(12'd2, 2'd0, 3'd3, 3'd3, 6'd45, 1'b0, 1'b0);
    check_edge(12'd2, 2'd0, PARA_MODE_LSSF, 64'h07E0_07E0_07E0_07E0,
               1'b0, 1'b0, 1'b1);

    send_edge(12'd3, 2'd0, 3'd7, 3'd7, 6'd45, 1'b0, 1'b0);
    check_edge(12'd3, 2'd0, PARA_MODE_LLF, 64'h7FFE_7FFE_7FFE_7FFE,
               1'b0, 1'b0, 1'b1);

    send_edge(12'd4, 2'd1, 3'd3, 3'd3, 6'd45, 1'b0, 1'b0);
    check_edge(12'd4, 2'd1, PARA_MODE_CLF, 64'h0000_0000_07E0_07E0,
               1'b0, 1'b0, 1'b1);

    send_edge(12'd5, 2'd2, 3'd1, 3'd1, 6'd45, 1'b0, 1'b0);
    check_edge(12'd5, 2'd2, PARA_MODE_CSF, 64'h0000_0000_0180_0180,
               1'b0, 1'b0, 1'b1);

    send_edge(12'd6, 2'd0, 3'd3, 3'd3, 6'd0, 1'b0, 1'b1);
    check_edge(12'd6, 2'd0, PARA_MODE_NF, 64'd0,
               1'b0, 1'b0, 1'b0);

    send_edge(12'd7, 2'd3, 3'd3, 3'd3, 6'd45, 1'b0, 1'b0);
    check_edge(12'd7, 2'd3, PARA_MODE_NF, 64'd0,
               1'b0, 1'b1, 1'b1);

    if (accepted != 7 || completed != 7)
      $fatal(1, "handshake count mismatch accepted=%0d completed=%0d", accepted, completed);
    $display("PASS: DBF_UNIFIED_FILTER_CORE integration 7 transactions");
    $finish;
  end

  initial begin
    #200000;
    $fatal(1, "GLOBAL TIMEOUT accepted=%0d completed=%0d state=%0d",
           accepted, completed, dut.r_current_state);
  end
endmodule: DBF_UNIFIED_FILTER_CORE_TB
