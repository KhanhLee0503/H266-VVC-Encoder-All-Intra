//-----------------------------------------------------------
// Standalone TB for DBF_SAMPLE_WINDOW_ASSEMBLER.
// Uses the actual CTU_RECON_LOCAL_RAM implementation.
// Test stimulus is driven only at posedges (via NBA).
//-----------------------------------------------------------
`timescale 1ns/1ps

module TB_DBF_SAMPLE_WINDOW_ASSEMBLER;
  logic clk;
  logic rst_n;
  logic clear;
  logic ctu_start;
  logic [8:0] ctu_id;
  logic [7:0] ctu_width;
  logic [7:0] ctu_height;
  logic ctu_read_enable;
  logic ctu_context_error;
  logic req_valid;
  logic req_ready;
  logic [1:0] req_component;
  logic [7:0] req_edge_x;
  logic [7:0] req_y_base;
  logic [15:0] req_tag;
  logic ram_rd_en;
  logic [1:0] ram_rd_component;
  logic [11:0] ram_rd_addr;
  logic ram_rd_valid;
  logic [63:0] ram_rd_data;
  logic window_valid;
  logic window_ready;
  logic window_error;
  wire [1023:0] window_samples;
  logic [8:0] window_ctu_id;
  logic [1:0] window_component;
  logic [7:0] window_edge_x;
  logic [7:0] window_y_base;
  logic [15:0] window_tag;
  logic busy;
  logic protocol_error;

  logic ram_wr_en;
  logic [1:0] ram_wr_component;
  logic [11:0] ram_wr_addr;
  logic [63:0] ram_wr_data;
  logic [3:0] ram_wr_mask;
  integer read_total;
  integer test_total;
  integer req_accepted_count;
  logic [15:0] last_accepted_tag;

  DBF_SAMPLE_WINDOW_ASSEMBLER U_DUT (
    .I_CLK(clk),
    .I_RST_N(rst_n),
    .I_CLEAR(clear),
    .I_CTU_START(ctu_start),
    .I_CTU_ID(ctu_id),
    .I_CTU_VALID_WIDTH(ctu_width),
    .I_CTU_VALID_HEIGHT(ctu_height),
    .I_CTU_READ_ENABLE(ctu_read_enable),
    .O_CTU_CONTEXT_ERROR(ctu_context_error),
    .I_REQ_VALID(req_valid),
    .O_REQ_READY(req_ready),
    .I_REQ_COMPONENT(req_component),
    .I_REQ_EDGE_X(req_edge_x),
    .I_REQ_Y_BASE(req_y_base),
    .I_REQ_TAG(req_tag),
    .O_RAM_RD_EN(ram_rd_en),
    .O_RAM_RD_COMPONENT_ID(ram_rd_component),
    .O_RAM_RD_ADDR(ram_rd_addr),
    .I_RAM_RD_VALID(ram_rd_valid),
    .I_RAM_RD_DATA(ram_rd_data),
    .O_WINDOW_VALID(window_valid),
    .I_WINDOW_READY(window_ready),
    .O_WINDOW_ERROR(window_error),
    .O_WINDOW_SAMPLES(window_samples),
    .O_WINDOW_CTU_ID(window_ctu_id),
    .O_WINDOW_COMPONENT(window_component),
    .O_WINDOW_EDGE_X(window_edge_x),
    .O_WINDOW_Y_BASE(window_y_base),
    .O_WINDOW_TAG(window_tag),
    .O_BUSY(busy),
    .O_PROTOCOL_ERROR(protocol_error)
  );

  CTU_RECON_LOCAL_RAM U_RAM (
    .I_CLK(clk),
    .I_RESETN(rst_n),
    .I_WR_EN(ram_wr_en),
    .I_WR_COMPONENT_ID(ram_wr_component),
    .I_WR_ADDR(ram_wr_addr),
    .I_WR_DATA(ram_wr_data),
    .I_WR_SAMPLE_EN(ram_wr_mask),
    .I_RD_EN(ram_rd_en),
    .I_RD_COMPONENT_ID(ram_rd_component),
    .I_RD_ADDR(ram_rd_addr),
    .O_RD_VALID(ram_rd_valid),
    .O_RD_DATA(ram_rd_data)
  );

  // Trace only DUT, not all 6144 RAM words.
  initial begin
    $dumpfile("TB_DBF_SAMPLE_WINDOW_ASSEMBLER.vcd");
    $dumpvars(0, U_DUT);
  end

  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end

  always @(posedge clk) begin
    if (!rst_n)
      read_total <= 0;
    else if (ram_rd_en)
      read_total <= read_total + 1;
  end

  // Request handshake scoreboard. IMPORTANT: sample VALID && READY
  // at the same clock edge as the DUT, before the DUT's NBA state
  // change can make READY fall. This monitor is the ONLY owner of
  // request VALID deassertion after an accepted transfer.
  always @(posedge clk) begin
    if (!rst_n) begin
      req_accepted_count <= 0;
      last_accepted_tag  <= '0;
    end
    else if (req_valid && req_ready) begin
      req_accepted_count <= req_accepted_count + 1;
      last_accepted_tag  <= req_tag;
      req_valid          <= 1'b0;
      $display("[REQ ACCEPT] t=%0t tag=%0d cp=%0d x=%0d y=%0d",
               $time, req_tag, req_component, req_edge_x, req_y_base);
    end
  end

  // Verification helper only (not included in synthesizable RTL).
  function automatic [15:0] expected_sample(
    input integer component,
    input integer x,
    input integer y
  );
    expected_sample = ((component << 14) + (y << 7) + x);
  endfunction

  task automatic preload_ram;
    integer cp, yy, xx, lane;
    integer width_pixels, height_pixels, stride;
    reg [63:0] word_data;
    begin
      for (cp = 0; cp < 3; cp = cp + 1) begin
        width_pixels = (cp == 0) ? 128 : 64;
        height_pixels = (cp == 0) ? 128 : 64;
        stride = width_pixels / 4;
        for (yy = 0; yy < height_pixels; yy = yy + 1) begin
          for (xx = 0; xx < stride; xx = xx + 1) begin
            word_data = 64'd0;
            for (lane = 0; lane < 4; lane = lane + 1)
              word_data[lane*16 +: 16] = expected_sample(cp, xx*4+lane, yy);
            @(posedge clk);
            ram_wr_en        <= 1'b1;
            ram_wr_component <= cp[1:0];
            ram_wr_addr      <= (yy*stride+xx);
            ram_wr_data      <= word_data;
            ram_wr_mask      <= 4'b1111;
          end
        end
      end
      @(posedge clk);
      ram_wr_en <= 1'b0;
      @(posedge clk);
      #1;
      $display("[PRELOAD COMPLETE] All Y/Cb/Cr reconstructed RAM words initialized");
    end
  endtask

  task automatic start_ctu(input integer id);
    begin
      @(posedge clk);
      ctu_id <= id[8:0];
      ctu_width <= 8'd128;
      ctu_height <= 8'd128;
      ctu_start <= 1'b1;
      @(posedge clk);
      ctu_start <= 1'b0;
      ctu_read_enable <= 1'b1;
      @(posedge clk);
      #1;
      if (ctu_context_error)
        $fatal(1, "Bad CTU geometry");
    end
  endtask

  task automatic test_window(
    input integer cp,
    input integer edge_x,
    input integer ybase,
    input integer expected_reads,
    input bit expected_error,
    input integer stall_cycles
  );
    integer rd_before;
    integer seen_cycles;
    integer accepted_before;
    integer row, col;
    reg [1023:0] saved_window;
    reg [15:0] saved_tag;
    begin
      // Drive request using a posedge NBA. Do NOT infer acceptance
      // from READY observed after that edge: READY is allowed to fall
      // immediately when the DUT moves from IDLE to PREPARE.
      @(posedge clk);
      accepted_before = req_accepted_count;
      req_component <= cp[1:0];
      req_edge_x    <= edge_x[7:0];
      req_y_base    <= ybase[7:0];
      req_tag       <= test_total[15:0];
      req_valid     <= 1'b1;
      rd_before     = read_total;

      // The monitor records REQ_VALID && REQ_READY at the actual
      // accepting posedge. It also deasserts req_valid via NBA.
      seen_cycles = 0;
      begin : WAIT_REQ_ACCEPT
        forever begin
          @(posedge clk);
          #1;  // sample scoreboard after NBA; not stimulus drive
          seen_cycles = seen_cycles + 1;
          if (req_accepted_count > accepted_before) begin
            if (req_accepted_count != accepted_before + 1)
              $fatal(1, "Request accepted multiple times");
            if (last_accepted_tag !== test_total[15:0])
              $fatal(1, "Request tag mismatch accepted=%0h expected=%0h",
                     last_accepted_tag, test_total[15:0]);
            disable WAIT_REQ_ACCEPT;
          end
          if (seen_cycles > 1000)
            $fatal(1,
              "Request ACCEPT timeout: req_valid=%b req_ready=%b state=%0d context_valid=%b context_err=%b read_enable=%b busy=%b win_valid=%b win_ready=%b protocol_err=%b",
              req_valid, req_ready, U_DUT.r_state, U_DUT.r_context_valid,
              ctu_context_error, ctu_read_enable, busy, window_valid,
              window_ready, protocol_error);
        end
      end

      seen_cycles = 0;
      begin : WAIT_WINDOW
        forever begin
          @(posedge clk);
          #1;
          seen_cycles = seen_cycles + 1;
          if (window_valid)
            disable WAIT_WINDOW;
          if (seen_cycles > 200)
            $fatal(1,
              "Window timeout cp=%0d x=%0d y=%0d state=%0d issued=%0d collected=%0d expect=%0d ram_valid=%b tag_valid=%b protocol_err=%b",
              cp, edge_x, ybase, U_DUT.r_state, U_DUT.r_issue_count,
              U_DUT.r_response_count, U_DUT.r_expected_count,
              ram_rd_valid, U_DUT.r_rsp_tag_valid, protocol_error);
        end
      end

      if (window_error !== expected_error)
        $fatal(1, "Error flag mismatch cp=%0d x=%0d got=%b expected=%b", cp, edge_x, window_error, expected_error);
      if ((read_total - rd_before) != expected_reads)
        $fatal(1, "Read count mismatch cp=%0d x=%0d got=%0d expected=%0d", cp, edge_x, read_total-rd_before, expected_reads);
      if ((window_component != cp[1:0]) || (window_edge_x != edge_x[7:0]) ||
          (window_y_base != ybase[7:0]) || (window_tag != test_total[15:0]) ||
          (window_ctu_id != ctu_id))
        $fatal(1, "Window metadata mismatch");

      if (!expected_error) begin
        for (row = 0; row < 4; row = row + 1) begin
          for (col = 0; col < 16; col = col + 1) begin
            if (window_samples[(row*16+col)*16 +: 16] !==
                expected_sample(cp, edge_x-8+col, ybase+row)) begin
              $fatal(1, "Sample mismatch cp=%0d edge=%0d y=%0d row=%0d col=%0d actual=%h expected=%h",
                     cp,edge_x,ybase,row,col, window_samples[(row*16+col)*16 +: 16],
                     expected_sample(cp, edge_x-8+col, ybase+row));
            end
          end
        end
      end

      saved_window = window_samples;
      saved_tag    = window_tag;
      for (integer i=0; i<stall_cycles; i=i+1) begin
        @(posedge clk);
        #1;
        if (!window_valid || (window_error !== expected_error) ||
            (window_tag !== saved_tag) || (window_samples !== saved_window))
          $fatal(1, "Window changed under backpressure");
      end

      @(posedge clk);
      window_ready <= 1'b1;
      @(posedge clk);
      window_ready <= 1'b0;
      @(posedge clk);
      #1;
      if (window_valid)
        $fatal(1, "Window response not consumed");
      if (protocol_error)
        $fatal(1, "Protocol error sticky flag");

      test_total = test_total + 1;
      $display("PASS test=%0d cp=%0d x=%0d y=%0d reads=%0d error=%0d", test_total,cp,edge_x,ybase,expected_reads,expected_error);
    end
  endtask

  initial begin
    rst_n = 1'b0;
    clear = 1'b0;
    ctu_start = 1'b0;
    ctu_id = '0;
    ctu_width = '0;
    ctu_height = '0;
    ctu_read_enable = 1'b0;
    req_valid = 1'b0;
    req_component = '0;
    req_edge_x = '0;
    req_y_base = '0;
    req_tag = '0;
    window_ready = 1'b0;
    ram_wr_en = 1'b0;
    ram_wr_component = '0;
    ram_wr_addr = '0;
    ram_wr_data = '0;
    ram_wr_mask = 4'b0000;
    test_total = 0;

    repeat (6) @(posedge clk);
    rst_n <= 1'b1;
    preload_ram();
    start_ctu(9);

    test_window(0, 16, 0, 16, 0, 2); // FULL Y
    test_window(0, 20, 0,  4, 0, 3); // SHIFT4
    test_window(0, 28, 0,  8, 0, 1); // SHIFT8
    test_window(0, 32, 0,  4, 0, 0); // SHIFT4 again
    test_window(0, 16, 4, 16, 0, 1); // new row -> FULL
    test_window(1, 16, 0, 16, 0, 1); // new component -> FULL
    test_window(1, 24, 0,  8, 0, 1); // chroma SHIFT8
    test_window(1, 28, 0,  4, 0, 1); // chroma SHIFT4
    test_window(2, 16, 0, 16, 0, 1); // Cr -> FULL
    test_window(2, 20, 0,  4, 0, 1); // Cr SHIFT4
    test_window(2,  4, 0,  0, 1, 1); // left outside -> ERROR
    test_window(2, 60, 0,  0, 1, 1); // right outside -> ERROR
    test_window(0, 16, 0, 16, 0, 1); // error invalidated cache

    start_ctu(10);
    test_window(0, 16, 0, 16, 0, 1); // new CTU => FULL

    $display("ALL PASS: %0d windows, real synchronous CTU_RECON_LOCAL_RAM", test_total);
    $finish;
  end
endmodule : TB_DBF_SAMPLE_WINDOW_ASSEMBLER
