`timescale 1ns/1ps

//------------------------------------------------------------------------------
// Integration TB: strictly posedge-driven non-clock stimulus (NBA).
// Test 1: 32x16 CTU, 8 Y + 4 Cb + 4 Cr descriptors.
// Test 2: 16x16 single CU -> no internal CU-boundary descriptors.
// Test 3: 32x32 CTU, horizontal edges across Y,Cb,Cr.
// Test 4: bank cannot be reused before scan ack and external filter release.
//------------------------------------------------------------------------------
module DBF_CODING_PARAMETER_GENERATOR_TB;
  logic clk;
  logic rst_n;

  logic ctu_start_valid;
  logic ctu_start_ready;
  logic ctu_bank;
  logic [8:0] ctu_id;
  logic [5:0] ctu_qp;
  logic [5:0] ctu_qp_cb, ctu_qp_cr;
  logic [7:0] ctu_width;
  logic [7:0] ctu_height;
  logic ctu_dbf_enable;

  logic leaf_valid;
  logic leaf_ready;
  logic [8:0] leaf_ctu_id;
  logic [7:0] leaf_cu_id;
  logic [4:0] leaf_x, leaf_y;
  logic [2:0] leaf_wcode, leaf_hcode;
  logic metadata_done;
  logic [8:0] metadata_done_id;

  logic [1:0] bank_busy;
  logic [1:0] metadata_ready;
  logic [1:0] bank_scan_finished;

  logic scan_start_valid;
  logic scan_start_ready;
  logic scan_bank;
  logic [8:0] scan_ctu_id;

  logic param_valid;
  logic param_ready;
  logic [11:0] param_edge_id;
  logic [8:0] param_ctu_id;
  logic param_bank;
  logic [1:0] param_component_id;
  logic param_direction;
  logic [7:0] param_x, param_y;
  logic [3:0] param_lane_mask;
  logic [1:0] param_bs;
  logic [2:0] param_sp, param_sq;
  logic [5:0] param_qp_p, param_qp_q;

  logic scan_done_valid;
  logic scan_done_ready;
  logic [8:0] scan_done_ctu_id;
  logic scan_done_bank;

  logic release_valid;
  logic release_ready;
  logic release_bank;
  logic [8:0] release_ctu_id;

  logic error_valid;
  logic [1:0] error_source;
  logic [2:0] error_code;

  string  tb_phase;
  integer observed;
  integer expected_count;
  logic expected_dir[0:47];
  logic [1:0] expected_comp[0:47];
  logic [7:0] expected_x[0:47];
  logic [7:0] expected_y[0:47];
  logic [11:0] expected_id[0:47];

  DBF_CODING_PARAMETER_GENERATOR dut (
    .I_CLK                 (clk),
    .I_RST_N               (rst_n),
    .I_CTU_START_VALID     (ctu_start_valid),
    .O_CTU_START_READY     (ctu_start_ready),
    .I_CTU_BANK            (ctu_bank),
    .I_CTU_ID              (ctu_id),
    .I_CTU_QP              (ctu_qp),
    .I_CTU_QP_CB           (ctu_qp_cb),
    .I_CTU_QP_CR           (ctu_qp_cr),
    .I_CTU_VALID_WIDTH     (ctu_width),
    .I_CTU_VALID_HEIGHT    (ctu_height),
    .I_CTU_DBF_ENABLE      (ctu_dbf_enable),
    .I_LEAF_VALID          (leaf_valid),
    .O_LEAF_READY          (leaf_ready),
    .I_LEAF_CTU_ID         (leaf_ctu_id),
    .I_LEAF_CU_ID         (leaf_cu_id),
    .I_LEAF_X_UNIT        (leaf_x),
    .I_LEAF_Y_UNIT        (leaf_y),
    .I_LEAF_WIDTH_CODE    (leaf_wcode),
    .I_LEAF_HEIGHT_CODE   (leaf_hcode),
    .I_CTU_METADATA_DONE  (metadata_done),
    .I_DONE_CTU_ID        (metadata_done_id),
    .O_BANK_BUSY          (bank_busy),
    .O_METADATA_READY     (metadata_ready),
    .O_BANK_SCAN_FINISHED (bank_scan_finished),
    .I_SCAN_START_VALID   (scan_start_valid),
    .O_SCAN_START_READY   (scan_start_ready),
    .I_SCAN_BANK          (scan_bank),
    .I_SCAN_CTU_ID        (scan_ctu_id),
    .O_PARAM_VALID        (param_valid),
    .I_PARAM_READY        (param_ready),
    .O_PARAM_EDGE_ID      (param_edge_id),
    .O_PARAM_CTU_ID       (param_ctu_id),
    .O_PARAM_BANK         (param_bank),
    .O_PARAM_COMPONENT_ID (param_component_id),
    .O_PARAM_DIRECTION    (param_direction),
    .O_PARAM_X            (param_x),
    .O_PARAM_Y            (param_y),
    .O_PARAM_LANE_MASK    (param_lane_mask),
    .O_PARAM_BS           (param_bs),
    .O_PARAM_SP           (param_sp),
    .O_PARAM_SQ           (param_sq),
    .O_PARAM_QP_P         (param_qp_p),
    .O_PARAM_QP_Q         (param_qp_q),
    .O_SCAN_DONE_VALID    (scan_done_valid),
    .I_SCAN_DONE_READY    (scan_done_ready),
    .O_SCAN_DONE_CTU_ID   (scan_done_ctu_id),
    .O_SCAN_DONE_BANK     (scan_done_bank),
    .I_BANK_RELEASE_VALID (release_valid),
    .O_BANK_RELEASE_READY (release_ready),
    .I_BANK_RELEASE_BANK  (release_bank),
    .I_BANK_RELEASE_CTU_ID(release_ctu_id),
    .O_ERROR_VALID        (error_valid),
    .O_ERROR_SOURCE       (error_source),
    .O_ERROR_CODE         (error_code)
  );

  // Registered handshake event counters: observed only on posedge,
  // avoiding sampling READY after the DUT has consumed a transaction.
  integer ctu_start_accepts = 0;
  integer leaf_accepts = 0;
  integer scan_start_accepts = 0;
  integer release_accepts = 0;
  integer scan_done_accepts = 0;

  always @(posedge clk) begin
    if (rst_n) begin
      if (ctu_start_valid && ctu_start_ready)
        ctu_start_accepts <= ctu_start_accepts + 1;
      if (leaf_valid && leaf_ready)
        leaf_accepts <= leaf_accepts + 1;
      if (scan_start_valid && scan_start_ready)
        scan_start_accepts <= scan_start_accepts + 1;
      if (release_valid && release_ready)
        release_accepts <= release_accepts + 1;
      if (scan_done_valid && scan_done_ready)
        scan_done_accepts <= scan_done_accepts + 1;
    end
  end

  initial clk = 1'b0;
  always #5 clk = ~clk;

  always @(posedge clk) begin
    if (rst_n && error_valid)
      $fatal(1,"DUT error source=%0d code=%0d", error_source, error_code);

    if (rst_n && param_valid && param_ready) begin
      if (observed >= expected_count)
        $fatal(1,"Unexpected output: direction=%0d x=%0d y=%0d",
               param_direction, param_x, param_y);
      if (param_direction !== expected_dir[observed] ||
          param_component_id !== expected_comp[observed] ||
          param_x !== expected_x[observed] ||
          param_y !== expected_y[observed] ||
          param_edge_id !== expected_id[observed] ||
          param_bs !== 2'd2 || param_sp !== 3'd3 ||
          param_sq !== 3'd3 ||
          param_qp_p !== (expected_comp[observed] == 2'd0 ? 6'd28 :
                         expected_comp[observed] == 2'd1 ? 6'd26 : 6'd30) ||
          param_qp_q !== (expected_comp[observed] == 2'd0 ? 6'd28 :
                         expected_comp[observed] == 2'd1 ? 6'd26 : 6'd30) ||
          param_lane_mask !== (expected_comp[observed] == 2'd0 ? 4'b1111 : 4'b0011) ||
          param_ctu_id !== (observed < 16 ? 9'd7 : 9'd9) ||
          param_bank !== 1'b0)
        $fatal(1,"Output #%0d mismatch: c=%0d d=%0d id=%0d (%0d,%0d) SP/SQ=%0d/%0d QP=%0d/%0d mask=%b",
               observed, param_component_id, param_direction, param_edge_id,
               param_x, param_y, param_sp, param_sq, param_qp_p, param_qp_q,
               param_lane_mask);
      $display("PASS #%0d comp=%0d direction=%0d edge_id=%0d x=%0d y=%0d",
               observed, param_component_id, param_direction, param_edge_id, param_x, param_y);
      observed = observed + 1;
    end
  end

  // All TB stimulus is driven by nonblocking assignments on the RISING edge.
  // Handshake status is sampled at the next rising edge, before the NBA update.
  // No negedge-based driving and no #1 stimulus delay are used.
  task automatic start_ctu(
    input logic bank, input logic [8:0] id,
    input logic [7:0] width, input logic [7:0] height
  );
    integer previous_accepts;
    integer wait_count;
    previous_accepts = ctu_start_accepts;
    @(posedge clk);
    ctu_bank         <= bank;
    ctu_id           <= id;
    ctu_qp           <= 6'd28;
    ctu_qp_cb        <= 6'd26;
    ctu_qp_cr        <= 6'd30;
    ctu_width        <= width;
    ctu_height       <= height;
    ctu_dbf_enable   <= 1'b1;
    ctu_start_valid  <= 1'b1;
    tb_phase = $sformatf("CTU_START bank=%0d id=%0d", bank, id);
    wait_count = 0;
    while (ctu_start_accepts == previous_accepts) begin
      @(posedge clk);
      wait_count++;
      if (wait_count > 50)
        $fatal(1, "CTU_START not accepted bank=%0d id=%0d ready=%b col_state=%0d busy=%b top_state=%0d",
               bank, id, ctu_start_ready, dut.u_metadata_collector.r_state,
               bank_busy, dut.r_current_state);
    end
    $display("[TB] CTU_START handshake bank=%0d id=%0d at %0t", bank, id, $time);
    ctu_start_valid <= 1'b0;
  endtask

  task automatic send_leaf(
    input logic [8:0] id, input logic [7:0] cu,
    input logic [4:0] x, input logic [4:0] y,
    input logic [2:0] wc, input logic [2:0] hc
  );
    integer previous_accepts;
    integer wait_count;
    previous_accepts = leaf_accepts;
    @(posedge clk);
    leaf_ctu_id    <= id;
    leaf_cu_id     <= cu;
    leaf_x         <= x;
    leaf_y         <= y;
    leaf_wcode     <= wc;
    leaf_hcode     <= hc;
    leaf_valid     <= 1'b1;
    tb_phase = $sformatf("LEAF bank_ctu=%0d cu=%0d", id, cu);
    wait_count = 0;
    while (leaf_accepts == previous_accepts) begin
      @(posedge clk);
      wait_count++;
      if (wait_count > 1200)
        $fatal(1, "LEAF not accepted ctu=%0d cu=%0d ready=%b col_state=%0d done_seen=%b busy=%b",
               id, cu, leaf_ready, dut.u_metadata_collector.r_state,
               dut.u_metadata_collector.r_done_seen, bank_busy);
    end
    $display("[TB] LEAF handshake ctu=%0d cu=%0d at %0t", id, cu, $time);
    leaf_valid <= 1'b0;
  endtask

  task automatic send_metadata_done(input logic [8:0] id);
    @(posedge clk);
    metadata_done_id <= id;
    metadata_done    <= 1'b1;
    tb_phase = $sformatf("METADATA_DONE ctu=%0d", id);
    @(posedge clk);
    metadata_done    <= 1'b0;
    $display("[TB] METADATA_DONE sent ctu=%0d at %0t", id, $time);
  endtask

  task automatic start_scan(input logic bank, input logic [8:0] id);
    integer previous_accepts;
    integer wait_count;
    previous_accepts = scan_start_accepts;
    @(posedge clk);
    scan_bank        <= bank;
    scan_ctu_id      <= id;
    scan_start_valid <= 1'b1;
    tb_phase = $sformatf("SCAN_START bank=%0d id=%0d", bank, id);
    wait_count = 0;
    while (scan_start_accepts == previous_accepts) begin
      @(posedge clk);
      wait_count++;
      if (wait_count > 50)
        $fatal(1, "SCAN_START not accepted bank=%0d id=%0d ready=%b top_state=%0d busy=%b meta_ready=%b",
               bank, id, scan_start_ready, dut.r_current_state,
               bank_busy, metadata_ready);
    end
    $display("[TB] SCAN_START handshake bank=%0d id=%0d at %0t", bank, id, $time);
    scan_start_valid <= 1'b0;
  endtask

  task automatic acknowledge_scan(input logic bank, input logic [8:0] id);
    integer previous_accepts;
    integer wait_count;
    // Capture the counter before enabling READY. The counter is driven
    // ONLY by VALID && READY sampled on a rising clock edge.
    previous_accepts = scan_done_accepts;
    tb_phase = $sformatf("SCAN_DONE_WAIT bank=%0d id=%0d", bank, id);
    wait_count = 0;
    while (scan_done_valid !== 1'b1) begin
      @(posedge clk);
      wait_count++;
      if (wait_count > 2500)
        $fatal(1, "SCAN_DONE timeout bank=%0d id=%0d top_state=%0d", bank, id, dut.r_current_state);
    end
    if (scan_done_bank !== bank || scan_done_ctu_id !== id)
      $fatal(1, "SCAN_DONE context mismatch");
    $display("[TB] SCAN_DONE seen bank=%0d id=%0d at %0t", bank, id, $time);

    // All stimulus changes at posedge via nonblocking assignments.
    // Never check the level of VALID after the handshake: the DUT is
    // expected to deassert VALID immediately after accepting DONE.
    @(posedge clk);
    scan_done_ready <= 1'b1;
    tb_phase = $sformatf("SCAN_DONE_ACK bank=%0d id=%0d", bank, id);
    wait_count = 0;
    while (scan_done_accepts == previous_accepts) begin
      @(posedge clk);
      wait_count++;
      if (wait_count > 20)
        $fatal(1, "SCAN_DONE handshake timeout bank=%0d id=%0d valid=%b ready=%b top_state=%0d",
               bank, id, scan_done_valid, scan_done_ready, dut.r_current_state);
    end
    scan_done_ready <= 1'b0;

    // Wait for the bank-finished register to become visible, without
    // assuming an NBA update is already visible in the same active region.
    wait_count = 0;
    while (bank_scan_finished[bank] !== 1'b1) begin
      @(posedge clk);
      wait_count++;
      if (wait_count > 20)
        $fatal(1, "SCAN_FINISHED timeout bank=%0d id=%0d", bank, id);
    end
    $display("[TB] SCAN_DONE handshake bank=%0d id=%0d at %0t", bank, id, $time);
  endtask

  task automatic release_ctu(input logic bank, input logic [8:0] id);
    integer wait_cycles;
    integer previous_accepts;
    previous_accepts = release_accepts;
    @(posedge clk);
    release_bank   <= bank;
    release_ctu_id <= id;
    release_valid  <= 1'b1;
    tb_phase = $sformatf("RELEASE bank=%0d id=%0d", bank, id);

    // Count accepted handshakes rather than sampling combinational READY
    // after the bank has already been released.
    wait_cycles = 0;
    while (release_accepts == previous_accepts) begin
      @(posedge clk);
      wait_cycles++;
      if (wait_cycles > 20)
        $fatal(1, "RELEASE not accepted bank=%0d id=%0d busy=%b finished=%b ready=%b",
               bank, id, bank_busy, bank_scan_finished, release_ready);
    end
    release_valid <= 1'b0;
    // Confirm bank was freed by the registered handshake.
    @(posedge clk);
    if (bank_busy[bank] !== 1'b0 || metadata_ready[bank] !== 1'b0 ||
        bank_scan_finished[bank] !== 1'b0)
      $fatal(1, "Bank %0d did not release after handshake", bank);
    $display("[TB] RELEASE bank=%0d id=%0d complete at %0t", bank, id, $time);
  endtask

  initial begin
    #250000;
    $fatal(1,
      "GLOBAL TIMEOUT phase=%s observed=%0d top_state=%0d col_state=%0d sched_state=%0d calc_state=%0d bank_busy=%b metadata_ready=%b finished=%b scan_done_v=%b scan_start_r=%b release_r=%b",
      tb_phase, observed, dut.r_current_state,
      dut.u_metadata_collector.r_state,
      dut.u_edge_scheduler.r_current_state,
      dut.u_edge_parameter_calculator.r_current_state,
      bank_busy, metadata_ready, bank_scan_finished,
      scan_done_valid, scan_start_ready, release_ready);
  end

  initial begin
    rst_n = 1'b0;
    ctu_start_valid = 1'b0;
    ctu_bank = 1'b0;
    ctu_id = 9'd0;
    ctu_qp = 6'd28;
    ctu_qp_cb = 6'd26;
    ctu_qp_cr = 6'd30;
    ctu_width = 8'd0;
    ctu_height = 8'd0;
    ctu_dbf_enable = 1'b1;
    leaf_valid = 1'b0;
    leaf_ctu_id = 9'd0;
    leaf_cu_id = 8'd0;
    leaf_x = 5'd0;
    leaf_y = 5'd0;
    leaf_wcode = 3'd0;
    leaf_hcode = 3'd0;
    metadata_done = 1'b0;
    metadata_done_id = 9'd0;
    scan_start_valid = 1'b0;
    scan_bank = 1'b0;
    scan_ctu_id = 9'd0;
    param_ready = 1'b1;
    scan_done_ready = 1'b0;
    release_valid = 1'b0;
    release_bank = 1'b0;
    release_ctu_id = 9'd0;
    observed = 0;
    expected_count = 16;
    tb_phase = "RESET";

    // Six passes: Y-V, Cb-V, Cr-V, Y-H, Cb-H, Cr-H.
    for (int i=0; i<4; i=i+1) begin
      expected_comp[i]     = 2'd0;
      expected_dir[i]      = 1'b0;
      expected_x[i]        = 8'd16;
      expected_y[i]        = 8'(4*i);
      expected_id[i]       = 12'(i);
      expected_comp[4+i]   = 2'd1;
      expected_dir[4+i]    = 1'b0;
      expected_x[4+i]      = 8'd8;
      expected_y[4+i]      = 8'(2*i);
      expected_id[4+i]     = 12'(i);
      expected_comp[8+i]   = 2'd2;
      expected_dir[8+i]    = 1'b0;
      expected_x[8+i]      = 8'd8;
      expected_y[8+i]      = 8'(2*i);
      expected_id[8+i]     = 12'(i);
      expected_comp[12+i]  = 2'd0;
      expected_dir[12+i]   = 1'b1;
      expected_x[12+i]     = 8'(16+4*i);
      expected_y[12+i]     = 8'd8;
      expected_id[12+i]    = 12'(i);
    end
    // Third CTU expects 8 horizontal segments per component.
    for (int i=0; i<8; i=i+1) begin
      expected_comp[16+i] = 2'd0;
      expected_dir[16+i]  = 1'b1;
      expected_x[16+i]    = 8'(4*i);
      expected_y[16+i]    = 8'd16;
      expected_id[16+i]   = 12'(i);
      expected_comp[24+i] = 2'd1;
      expected_dir[24+i]  = 1'b1;
      expected_x[24+i]    = 8'(2*i);
      expected_y[24+i]    = 8'd8;
      expected_id[24+i]   = 12'(i);
      expected_comp[32+i] = 2'd2;
      expected_dir[32+i]  = 1'b1;
      expected_x[32+i]    = 8'(2*i);
      expected_y[32+i]    = 8'd8;
      expected_id[32+i]   = 12'(i);
    end

    // Reset deasserted at a posedge; all subsequent stimulus also at posedge.
    repeat (5) @(posedge clk);
    rst_n <= 1'b1;

    start_ctu(1'b0, 9'd7, 8'd32, 8'd16);
    send_leaf(9'd7, 8'd0, 5'd0, 5'd0, 3'd2, 3'd2);  // 16x16
    send_leaf(9'd7, 8'd1, 5'd4, 5'd0, 3'd2, 3'd1);  // 16x8
    send_leaf(9'd7, 8'd2, 5'd4, 5'd2, 3'd2, 3'd1);  // 16x8
    send_metadata_done(9'd7);

    tb_phase = "METADATA_READY_WAIT bank=0";
    begin : ready0_wait
      integer wait_count;
      wait_count = 0;
      do begin
        @(posedge clk);
        wait_count = wait_count + 1;
        if (wait_count > 1200)
          $fatal(1,"METADATA_READY timeout bank0 busy=%b ready=%b col_state=%0d done_seen=%b",
                 bank_busy, metadata_ready, dut.u_metadata_collector.r_state,
                 dut.u_metadata_collector.r_done_seen);
      end while (metadata_ready[0] !== 1'b1);
    end
    $display("[TB] METADATA_READY bank=0 at %0t", $time);
    if (bank_busy[0] !== 1'b1)
      $fatal(1, "Bank 0 should be leased");
    start_scan(1'b0, 9'd7);

    // Stall qualified output.  All drive occurs at posedge with NBA.
    @(posedge clk);
    param_ready <= 1'b0;
    tb_phase = "PARAM_VALID_WAIT FIRST EDGE";
    begin : param_wait
      integer wait_count;
      wait_count = 0;
      do begin
        @(posedge clk);
        wait_count = wait_count + 1;
        if (wait_count > 500)
          $fatal(1, "PARAM_VALID stalled top_state=%0d sched_state=%0d calc_state=%0d", 
                 dut.r_current_state, dut.u_edge_scheduler.r_current_state,
                 dut.u_edge_parameter_calculator.r_current_state);
      end while (param_valid !== 1'b1);
    end
    repeat (5) begin
      @(posedge clk);
      if (param_valid !== 1'b1 ||
          param_x !== 8'd16 || param_y !== 8'd0)
        $fatal(1, "Output changed during backpressure");
    end
    param_ready <= 1'b1;

    // RELEASE_READY must be low before acknowledging SCAN_DONE, even when
    // the bank and CTU ID inputs match.
    @(posedge clk);
    release_bank   <= 1'b0;
    release_ctu_id <= 9'd7;
    @(posedge clk);
    if (release_ready !== 1'b0)
      $fatal(1, "RELEASE_READY asserted before SCAN_DONE acknowledgement");

    acknowledge_scan(1'b0, 9'd7);
    if (observed != 16)
      $fatal(1, "Expected 16 qualified edges, got %0d", observed);
    release_ctu(1'b0, 9'd7);

    // Second CTU on the other bank is a single leaf: no internal edges.
    expected_count = 16;
    start_ctu(1'b1, 9'd8, 8'd16, 8'd16);
    send_leaf(9'd8, 8'd0, 5'd0, 5'd0, 3'd2, 3'd2);
    send_metadata_done(9'd8);
    tb_phase = "METADATA_READY_WAIT bank=1";
    begin : ready1_wait
      integer wait_count;
      wait_count = 0;
      do begin
        @(posedge clk);
        wait_count = wait_count + 1;
        if (wait_count > 1200)
          $fatal(1,"METADATA_READY timeout bank1 busy=%b ready=%b col_state=%0d done_seen=%b",
                 bank_busy, metadata_ready, dut.u_metadata_collector.r_state,
                 dut.u_metadata_collector.r_done_seen);
      end while (metadata_ready[1] !== 1'b1);
    end
    $display("[TB] METADATA_READY bank=1 at %0t", $time);
    start_scan(1'b1, 9'd8);
    acknowledge_scan(1'b1, 9'd8);
    if (observed != 16)
      $fatal(1, "Unexpected edge for single-CU CTU");
    release_ctu(1'b1, 9'd8);

    // Third CTU: horizontal CU boundary at luma y=16/chroma y=8.
    // Its Luma-vertical scan emits nothing and Chroma-horizontal emits 8
    // 2-sample segments for each Cb/Cr component.
    expected_count = 40;
    start_ctu(1'b0, 9'd9, 8'd32, 8'd32);
    send_leaf(9'd9, 8'd0, 5'd0, 5'd0, 3'd3, 3'd2); // 32x16 top
    send_leaf(9'd9, 8'd1, 5'd0, 5'd4, 3'd3, 3'd2); // 32x16 bottom
    send_metadata_done(9'd9);
    tb_phase = "METADATA_READY_WAIT bank=0 CTU9";
    begin : ready2_wait
      integer wait_count;
      wait_count = 0;
      do begin
        @(posedge clk);
        wait_count++;
        if (wait_count > 1200)
          $fatal(1, "METADATA_READY timeout CTU9");
      end while (metadata_ready[0] !== 1'b1);
    end
    start_scan(1'b0, 9'd9);
    acknowledge_scan(1'b0, 9'd9);
    if (observed != 40)
      $fatal(1, "Expected 40 qualified edges, got %0d", observed);
    release_ctu(1'b0, 9'd9);

    $display("PASS: DBF_CODING_PARAMETER_GENERATOR Y/Cb/Cr integration, 40 edges + empty CTU + release");
    $finish;
  end
endmodule: DBF_CODING_PARAMETER_GENERATOR_TB
