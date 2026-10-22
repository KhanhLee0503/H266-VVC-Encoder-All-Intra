//-----------------------------------------------------------
// Description: Self-checking integration testbench for RECON_SUBSYSTEM_TOP.
// Testbench stimulus changes only on positive clock edges. A dedicated
// posedge handshake monitor counts ACCEPTED transfers and deasserts VALID
// using NBA at the SAME accepting clock edge, preventing duplicate beats.
// A #1 delay is used for observations only, never for driving DUT inputs.
// Coverage: CU 8x8, commits, availability, H/V references, cross-CTU
// borders and corner, and invalid component sequencing.
//-----------------------------------------------------------
`timescale 1ns/1ps

module RECON_SUBSYSTEM_TOP_TB;
  logic I_CLK;
  logic I_RESETN;
  logic I_CLEAR_ERROR;
  logic I_PICTURE_START;
  logic I_CTU_START_VALID;
  logic O_CTU_START_READY;
  logic [12:0] I_CTU_X_ORIGIN, I_CTU_Y_ORIGIN;
  logic [12:0] I_PICTURE_WIDTH, I_PICTURE_HEIGHT;
  logic [7:0] I_CTU_VALID_WIDTH, I_CTU_VALID_HEIGHT;
  logic O_CTU_INIT_DONE;
  logic I_CTU_FINISH_VALID;
  logic O_CTU_FINISH_READY;
  logic I_CU_VALID;
  logic O_CU_READY;
  logic [6:0] I_CU_X, I_CU_Y;
  logic [7:0] I_CU_WIDTH, I_CU_HEIGHT;
  logic I_CU_REF_COMMIT_REQ;
  logic O_CU_REF_COMMIT_DONE;
  logic I_CU_RELEASE;
  logic I_RECON_VALID;
  logic O_RECON_READY;
  logic [1:0] I_RECON_COMPONENT_ID;
  logic [6:0] I_RECON_X_BASE, I_RECON_Y;
  logic [39:0] I_RECON_SAMPLE;
  logic [3:0] I_RECON_LANE_VALID;
  logic I_RECON_TU_LAST;
  logic [1:0] I_REF_MAP_QUERY_COMPONENT_ID;
  logic I_REF_TOP_MAP_QUERY_VALID;
  logic [4:0] I_REF_TOP_MAP_X_UNIT,I_REF_TOP_MAP_Y_UNIT;
  logic O_REF_TOP_MAP_AVAILABLE;
  logic I_REF_LEFT_MAP_QUERY_VALID;
  logic [4:0] I_REF_LEFT_MAP_X_UNIT,I_REF_LEFT_MAP_Y_UNIT;
  logic O_REF_LEFT_MAP_AVAILABLE;
  logic I_REF_TL_MAP_QUERY_VALID;
  logic [4:0] I_REF_TL_MAP_X_UNIT,I_REF_TL_MAP_Y_UNIT;
  logic O_REF_TL_MAP_AVAILABLE;
  logic O_REF_ABOVE_ROW_VALID,O_REF_LEFT_BOUNDARY_VALID,O_REF_ABOVE_LEFT_VALID;
  logic I_REF_H_EDGE_RD_EN;
  logic [1:0] I_REF_H_EDGE_RD_COMPONENT_ID;
  logic [9:0] I_REF_H_EDGE_RD_ADDR;
  logic O_REF_H_EDGE_RD_VALID;
  logic [63:0] O_REF_H_EDGE_RD_DATA;
  logic I_REF_V_EDGE_RD_EN;
  logic [1:0] I_REF_V_EDGE_RD_COMPONENT_ID;
  logic [9:0] I_REF_V_EDGE_RD_ADDR;
  logic O_REF_V_EDGE_RD_VALID;
  logic [63:0] O_REF_V_EDGE_RD_DATA;
  logic I_REF_ABOVE_RD_EN;
  logic [1:0] I_REF_ABOVE_RD_COMPONENT_ID;
  logic [9:0] I_REF_ABOVE_RD_ADDR;
  logic O_REF_ABOVE_RD_VALID;
  logic [63:0] O_REF_ABOVE_RD_DATA;
  logic I_REF_LEFT_BOUND_RD_EN;
  logic [1:0] I_REF_LEFT_BOUND_RD_COMPONENT_ID;
  logic [4:0] I_REF_LEFT_BOUND_RD_ADDR;
  logic O_REF_LEFT_BOUND_RD_VALID;
  logic [63:0] O_REF_LEFT_BOUND_RD_DATA;
  logic [1:0] I_REF_CORNER_QUERY_COMPONENT_ID;
  logic O_REF_CORNER_QUERY_VALID;
  logic [15:0] O_REF_CORNER_QUERY_SAMPLE;
  logic O_BUSY, O_ERROR;

  integer tb_cycle;
  integer tb_tests;
  integer tb_checks;
  integer tb_beats;
  integer tb_origin_x, tb_origin_y;
  integer tb_ctu_start_fire_count;
  integer tb_cu_start_fire_count;
  integer tb_recon_fire_count;
  integer tb_ctu_finish_fire_count;

  RECON_SUBSYSTEM_TOP dut (.*);

  initial begin
    I_CLK = 1'b0;
    forever #5 I_CLK = ~I_CLK;
  end

  // The DUT samples VALID && READY at the posedge, before NBA state changes.
  // Count that precise transaction and lower VALID via NBA at that same
  // posedge, so READY may deassert immediately without losing the event.
  // Task-side #1 observations see the updated monotonically increasing count.
  always @(posedge I_CLK) begin
    if (I_RESETN) begin
      if (I_CTU_START_VALID && O_CTU_START_READY) begin
        tb_ctu_start_fire_count <= tb_ctu_start_fire_count + 1;
        I_CTU_START_VALID <= 1'b0;
      end
      if (I_CU_VALID && O_CU_READY) begin
        tb_cu_start_fire_count <= tb_cu_start_fire_count + 1;
        I_CU_VALID <= 1'b0;
      end
      if (I_RECON_VALID && O_RECON_READY) begin
        tb_recon_fire_count <= tb_recon_fire_count + 1;
        I_RECON_VALID <= 1'b0;
      end
      if (I_CTU_FINISH_VALID && O_CTU_FINISH_READY) begin
        tb_ctu_finish_fire_count <= tb_ctu_finish_fire_count + 1;
        I_CTU_FINISH_VALID <= 1'b0;
      end
    end
  end

  // Monitor targeted H-edge writes to establish whether address 0 was ever
  // committed before TC2 attempts to read it. No input is driven here.
  always @(posedge I_CLK) begin
    if (I_RESETN && dut.w_h_wr_en && dut.w_h_wr_comp == 2'd0 &&
        (dut.w_h_wr_addr == 10'd0 || dut.w_h_wr_addr == 10'd32))
      $display("[TB][H_EDGE_TRACE] write Y addr=%0d mask=%b y=%0d cycle=%0d",
               dut.w_h_wr_addr,dut.w_h_wr_mask,I_RECON_Y,tb_cycle);
  end

  // Global watchdog is also posedge-only.
  always @(posedge I_CLK) begin
    tb_cycle = tb_cycle + 1;
    if (tb_cycle > 60000)
      $fatal(1,"[TB][TIMEOUT] Global watchdog at %0d cycles",tb_cycle);
  end

  // Deterministic test samples. Inputs are 10-bit, stored in 16-bit lanes.
  // x,y are absolute coordinates in the selected component's sample grid.
  function automatic logic [15:0] sample_at (input integer comp, input integer x, input integer y);
    integer v;
    begin
      v = (17 + 137*comp + 11*x + 3*y) & 1023;
      sample_at = 16'(v);
    end
  endfunction

  function automatic logic [63:0] row_word (
    input integer comp, input integer x0, input integer y0);
    logic [63:0] v;
    begin
      v = '0;
      for (integer k=0; k<4; k=k+1)
        v[k*16 +:16] = sample_at(comp,x0+k,y0);
      row_word = v;
    end
  endfunction

  function automatic logic [63:0] column_word (
    input integer comp, input integer x0, input integer y0);
    logic [63:0] v;
    begin
      v = '0;
      for (integer k=0; k<4; k=k+1)
        v[k*16 +:16] = sample_at(comp,x0,y0+k);
      column_word = v;
    end
  endfunction

  function automatic logic [39:0] recon_word (
    input integer comp, input integer x0, input integer y0);
    logic [39:0] v;
    begin
      v = '0;
      for (integer k=0; k<4; k=k+1)
        v[k*10 +:10] = 10'(sample_at(comp,x0+k,y0));
      recon_word = v;
    end
  endfunction

  task automatic check_bit(input string msg,input logic got,input logic exp);
    begin
      tb_checks = tb_checks + 1;
      if (got !== exp)
        $fatal(1,"[TB][FAIL] %s got=%b expected=%b cycle=%0d",msg,got,exp,tb_cycle);
    end
  endtask

  task automatic check_word(input string msg,input logic [63:0] got,input logic [63:0] exp);
    begin
      tb_checks = tb_checks + 1;
      if (got !== exp)
        $fatal(1,"[TB][FAIL] %s got=%016h expected=%016h cycle=%0d",msg,got,exp,tb_cycle);
    end
  endtask

  task automatic init_inputs;
    begin
      I_RESETN = 1'b0;
      I_CLEAR_ERROR = 1'b0;
      I_PICTURE_START = 1'b0;
      I_CTU_START_VALID = 1'b0;
      I_CTU_X_ORIGIN = '0; I_CTU_Y_ORIGIN = '0;
      I_PICTURE_WIDTH = '0; I_PICTURE_HEIGHT = '0;
      I_CTU_VALID_WIDTH = '0; I_CTU_VALID_HEIGHT = '0;
      I_CTU_FINISH_VALID = 1'b0;
      I_CU_VALID = 1'b0; I_CU_X = '0; I_CU_Y = '0;
      I_CU_WIDTH = '0; I_CU_HEIGHT = '0;
      I_CU_REF_COMMIT_REQ = 1'b0; I_CU_RELEASE = 1'b0;
      I_RECON_VALID = 1'b0; I_RECON_COMPONENT_ID = '0;
      I_RECON_X_BASE = '0; I_RECON_Y = '0;
      I_RECON_SAMPLE = '0; I_RECON_LANE_VALID = '0;
      I_RECON_TU_LAST = 1'b0;
      I_REF_MAP_QUERY_COMPONENT_ID = '0;
      I_REF_TOP_MAP_QUERY_VALID = 1'b0;
      I_REF_TOP_MAP_X_UNIT = '0; I_REF_TOP_MAP_Y_UNIT = '0;
      I_REF_LEFT_MAP_QUERY_VALID = 1'b0;
      I_REF_LEFT_MAP_X_UNIT = '0; I_REF_LEFT_MAP_Y_UNIT = '0;
      I_REF_TL_MAP_QUERY_VALID = 1'b0;
      I_REF_TL_MAP_X_UNIT = '0; I_REF_TL_MAP_Y_UNIT = '0;
      I_REF_H_EDGE_RD_EN = 1'b0;
      I_REF_H_EDGE_RD_COMPONENT_ID = '0; I_REF_H_EDGE_RD_ADDR = '0;
      I_REF_V_EDGE_RD_EN = 1'b0;
      I_REF_V_EDGE_RD_COMPONENT_ID = '0; I_REF_V_EDGE_RD_ADDR = '0;
      I_REF_ABOVE_RD_EN = 1'b0;
      I_REF_ABOVE_RD_COMPONENT_ID = '0; I_REF_ABOVE_RD_ADDR = '0;
      I_REF_LEFT_BOUND_RD_EN = 1'b0;
      I_REF_LEFT_BOUND_RD_COMPONENT_ID = '0;
      I_REF_LEFT_BOUND_RD_ADDR = '0;
      I_REF_CORNER_QUERY_COMPONENT_ID = '0;
    end
  endtask

  task automatic new_picture;
    begin
      // Reset assertion and all subsequent DUT-input changes occur at posedge.
      @(posedge I_CLK);
      I_RESETN <= 1'b0;
      I_CTU_START_VALID <= 1'b0;
      I_CTU_FINISH_VALID <= 1'b0;
      I_CU_VALID <= 1'b0;
      I_CU_REF_COMMIT_REQ <= 1'b0;
      I_CU_RELEASE <= 1'b0;
      I_RECON_VALID <= 1'b0;
      I_REF_H_EDGE_RD_EN <= 1'b0;
      I_REF_V_EDGE_RD_EN <= 1'b0;
      I_REF_ABOVE_RD_EN <= 1'b0;
      I_REF_LEFT_BOUND_RD_EN <= 1'b0;
      I_REF_TOP_MAP_QUERY_VALID <= 1'b0;
      I_REF_LEFT_MAP_QUERY_VALID <= 1'b0;
      I_REF_TL_MAP_QUERY_VALID <= 1'b0;
      repeat (3) @(posedge I_CLK);
      I_RESETN <= 1'b1;
      @(posedge I_CLK);
      I_PICTURE_START <= 1'b1;
      @(posedge I_CLK);
      I_PICTURE_START <= 1'b0;
    end
  endtask

  task automatic start_ctu(
    input integer ox,input integer oy,input integer pw,input integer ph,
    input integer vw,input integer vh);
    integer attempt;
    integer before_fires;
    logic hit;
    begin
      tb_origin_x=ox; tb_origin_y=oy;
      @(posedge I_CLK);
      before_fires=tb_ctu_start_fire_count;
      I_CTU_X_ORIGIN <= 13'(ox);
      I_CTU_Y_ORIGIN <= 13'(oy);
      I_PICTURE_WIDTH <= 13'(pw);
      I_PICTURE_HEIGHT <= 13'(ph);
      I_CTU_VALID_WIDTH <= 8'(vw);
      I_CTU_VALID_HEIGHT <= 8'(vh);
      I_CTU_START_VALID <= 1'b1;
      hit=1'b0;
      for (attempt=0;attempt<40;attempt=attempt+1) begin
        @(posedge I_CLK);
        #1;
        if (tb_ctu_start_fire_count != before_fires) begin
          hit=1'b1;
          break;
        end
      end
      if (!hit)
        $fatal(1,"[TB][TIMEOUT] CTU start (%0d,%0d): FIRE=%0d->%0d READY=%b INIT=%b BUSY=%b ERROR=%b",
               ox,oy,before_fires,tb_ctu_start_fire_count,
               O_CTU_START_READY,O_CTU_INIT_DONE,O_BUSY,O_ERROR);
      if (tb_ctu_start_fire_count != before_fires + 1)
        $fatal(1,"[TB][FAIL] CTU start accepted more than once");
      hit=1'b0;
      for (attempt=0;attempt<40;attempt=attempt+1) begin
        #1;
        if (O_ERROR===1'b1)
          $fatal(1,"[TB][FAIL] CTU initialization ERROR, origin=(%0d,%0d)",ox,oy);
        if (O_CTU_INIT_DONE===1'b1) begin hit=1'b1; break; end
        @(posedge I_CLK);
      end
      if (!hit) $fatal(1,"[TB][TIMEOUT] CTU init (%0d,%0d), ERROR=%b",ox,oy,O_ERROR);
      check_bit("CTU init no error",O_ERROR,1'b0);
      $display("[TB] CTU start (%0d,%0d), valid=%0dx%0d",ox,oy,vw,vh);
    end
  endtask

  task automatic finish_ctu;
    integer attempt;
    integer before_fires;
    logic hit;
    begin
      @(posedge I_CLK);
      before_fires=tb_ctu_finish_fire_count;
      I_CTU_FINISH_VALID <= 1'b1;
      hit=1'b0;
      for (attempt=0;attempt<30;attempt=attempt+1) begin
        @(posedge I_CLK);
        #1;
        if (tb_ctu_finish_fire_count != before_fires) begin
          hit=1'b1;
          break;
        end
      end
      if (!hit)
        $fatal(1,"[TB][TIMEOUT] CTU finish: FIRES=%0d->%0d READY=%b BUSY=%b ERROR=%b",
               before_fires,tb_ctu_finish_fire_count,O_CTU_FINISH_READY,O_BUSY,O_ERROR);
      if (tb_ctu_finish_fire_count != before_fires + 1)
        $fatal(1,"[TB][FAIL] CTU finish accepted more than once");
      check_bit("CTU idle after finish",O_CTU_INIT_DONE,1'b0);
    end
  endtask

  task automatic start_cu(input integer x,input integer y,input integer w,input integer h);
    integer attempt;
    integer before_fires;
    logic hit;
    begin
      @(posedge I_CLK);
      before_fires=tb_cu_start_fire_count;
      I_CU_X <= 7'(x); I_CU_Y <= 7'(y);
      I_CU_WIDTH <= 8'(w); I_CU_HEIGHT <= 8'(h);
      I_CU_VALID <= 1'b1;
      hit=1'b0;
      for (attempt=0;attempt<30;attempt=attempt+1) begin
        @(posedge I_CLK);
        #1;
        if (tb_cu_start_fire_count != before_fires) begin
          hit=1'b1;
          break;
        end
      end
      if (!hit)
        $fatal(1,"[TB][TIMEOUT] CU start (%0d,%0d): FIRES=%0d->%0d READY=%b BUSY=%b ERROR=%b",
               x,y,before_fires,tb_cu_start_fire_count,O_CU_READY,O_BUSY,O_ERROR);
      if (tb_cu_start_fire_count != before_fires + 1)
        $fatal(1,"[TB][FAIL] CU start accepted more than once");
      @(posedge I_CLK);
      I_CU_REF_COMMIT_REQ <= 1'b1;
      #1;
      check_bit("CU not committed before recon",O_CU_REF_COMMIT_DONE,1'b0);
    end
  endtask

  task automatic send_recon(
    input integer comp,input integer x,input integer y,input logic last);
    integer attempt;
    integer before_fires;
    integer abs_x,abs_y;
    logic hit;
    begin
      abs_x = (comp==0) ? (tb_origin_x+x) : ((tb_origin_x>>1)+x);
      abs_y = (comp==0) ? (tb_origin_y+y) : ((tb_origin_y>>1)+y);
      @(posedge I_CLK);
      before_fires=tb_recon_fire_count;
      I_RECON_COMPONENT_ID <= 2'(comp);
      I_RECON_X_BASE <= 7'(x);
      I_RECON_Y <= 7'(y);
      I_RECON_SAMPLE <= recon_word(comp,abs_x,abs_y);
      I_RECON_LANE_VALID <= 4'b1111;
      I_RECON_TU_LAST <= last;
      I_RECON_VALID <= 1'b1;
      hit=1'b0;
      for (attempt=0;attempt<30;attempt=attempt+1) begin
        @(posedge I_CLK);
        #1;
        if (tb_recon_fire_count != before_fires) begin
          hit=1'b1;
          tb_beats=tb_beats+1;
          break;
        end
      end
      if (!hit)
        $fatal(1,"[TB][TIMEOUT] recon comp=%0d x=%0d y=%0d LAST=%b READY=%b ERROR=%b",
               comp,x,y,last,O_RECON_READY,O_ERROR);
      if (tb_recon_fire_count != before_fires + 1)
        $fatal(1,"[TB][FAIL] recon accepted more than once");
    end
  endtask

  task automatic complete_cu(input integer x,input integer y,input integer w,input integer h);
    integer c,cx,cy,cw,ch;
    begin
      start_cu(x,y,w,h);
      for (c=0;c<3;c=c+1) begin
        cx = c==0 ? x : (x>>1);
        cy = c==0 ? y : (y>>1);
        cw = c==0 ? w : (w>>1);
        ch = c==0 ? h : (h>>1);
        for (integer yy=0;yy<ch;yy=yy+1) begin
          for (integer xx=0;xx<cw;xx=xx+4) begin
            send_recon(c,cx+xx,cy+yy,(yy==ch-1)&&(xx==cw-4));
          end
        end
        // This also checks the delayed writer release; Y/Cb alone cannot commit.
        if (c != 2) begin
          repeat (3) @(posedge I_CLK);
          check_bit("No early CU commit",O_CU_REF_COMMIT_DONE,1'b0);
        end
      end
      // Check that all three component jobs have committed.
      begin: wait_commit
        integer tries;
        logic seen;
        seen=1'b0;
        for (tries=0;tries<30;tries=tries+1) begin
          @(posedge I_CLK);
          #1;
          if (O_CU_REF_COMMIT_DONE===1'b1) begin seen=1'b1; break; end
        end
        if (!seen) $fatal(1,"[TB][TIMEOUT] CU commit x=%0d y=%0d ERROR=%b",x,y,O_ERROR);
      end
      @(posedge I_CLK);
      I_CU_RELEASE <= 1'b1;
      @(posedge I_CLK);
      I_CU_RELEASE <= 1'b0;
      I_CU_REF_COMMIT_REQ <= 1'b0;
      @(posedge I_CLK);
      check_bit("CU released",O_CU_REF_COMMIT_DONE,1'b0);
      check_bit("No error after CU",O_ERROR,1'b0);
      $display("[TB] CU (%0d,%0d) %0dx%0d commit PASS",x,y,w,h);
    end
  endtask

  // Memory ports are synchronous (one rising-edge response).
  // Drive read requests on posedge via NBA; sample the RAM's registered
  // response after the NEXT posedge while RD_EN is still held high.
  // Release RD_EN on the following posedge to avoid sampling/deassertion races.
  // All DUT-input changes occur only at posedge; #1 is observation-only.
  task automatic read_h(input integer comp,input integer addr,input logic expected_valid,
                        input logic [63:0] expected_data);
    logic snapshot_written;
    logic snapshot_read_gate;
    logic snapshot_init;
    logic snapshot_rd_en;
    begin
      @(posedge I_CLK);
      I_REF_H_EDGE_RD_EN <= 1'b1;
      I_REF_H_EDGE_RD_COMPONENT_ID <= 2'(comp);
      I_REF_H_EDGE_RD_ADDR <= 10'(addr);
      #1;
      snapshot_written   = dut.w_h_written;
      snapshot_read_gate = dut.w_h_read_gate;
      snapshot_init      = O_CTU_INIT_DONE;
      snapshot_rd_en     = I_REF_H_EDGE_RD_EN;
      // Hold the request through the sampling edge.  Do not lower RD_EN
      // at the same posedge at which the synchronous RAM samples it.
      @(posedge I_CLK);
      #1;
      if (O_REF_H_EDGE_RD_VALID !== expected_valid) begin
        $display("[TB][H_EDGE_DEBUG] comp=%0d addr=%0d expected=%b got=%b cycle=%0d",
                 comp,addr,expected_valid,O_REF_H_EDGE_RD_VALID,tb_cycle);
        $display("[TB][H_EDGE_DEBUG] request: init=%b rd_en=%b written=%b gated_rd_en=%b",
                 snapshot_init,snapshot_rd_en,snapshot_written,snapshot_read_gate);
        $display("[TB][H_EDGE_DEBUG] after: init=%b written=%b gate=%b internal_ram_valid=%b",
                 O_CTU_INIT_DONE,dut.w_h_written,dut.w_h_read_gate,dut.u_h_edge.r_rd_valid);
        $display("[TB][H_EDGE_DEBUG] write history: Y[0]=%b Y[32]=%b Cb[0]=%b Cr[0]=%b",
                 dut.r_h_y_written[0],dut.r_h_y_written[32],
                 dut.r_h_cb_written[0],dut.r_h_cr_written[0]);
        $display("[TB][H_EDGE_DEBUG] current writer: wr_en=%b wr_comp=%0d wr_addr=%0d sample_en=%b",
                 dut.w_h_wr_en,dut.w_h_wr_comp,dut.w_h_wr_addr,dut.w_h_wr_mask);
        $fatal(1,"[TB][FAIL] H edge RD_VALID mismatch");
      end
      if (expected_valid)
        check_word("H edge RD_DATA",O_REF_H_EDGE_RD_DATA,expected_data);
      tb_checks = tb_checks + 1;
      // Drive the deassertion at a later posedge, after checking the
      // registered RAM response.  Extra read cycle is harmless: read-only RAM.
      @(posedge I_CLK);
      I_REF_H_EDGE_RD_EN <= 1'b0;
    end
  endtask

  task automatic read_v(input integer comp,input integer addr,input logic expected_valid,
                        input logic [63:0] expected_data);
    begin
      @(posedge I_CLK);
      I_REF_V_EDGE_RD_EN <= 1'b1;
      I_REF_V_EDGE_RD_COMPONENT_ID <= 2'(comp);
      I_REF_V_EDGE_RD_ADDR <= 10'(addr);
      // Sample the RAM output with the request still asserted.
      @(posedge I_CLK);
      #1;
      check_bit("V edge RD_VALID",O_REF_V_EDGE_RD_VALID,expected_valid);
      if (expected_valid) check_word("V edge RD_DATA",O_REF_V_EDGE_RD_DATA,expected_data);
      @(posedge I_CLK);
      I_REF_V_EDGE_RD_EN <= 1'b0;
    end
  endtask

  task automatic read_above(input integer comp,input integer addr,input logic expected_valid,
                            input logic [63:0] expected_data);
    begin
      @(posedge I_CLK);
      I_REF_ABOVE_RD_EN <= 1'b1;
      I_REF_ABOVE_RD_COMPONENT_ID <= 2'(comp);
      I_REF_ABOVE_RD_ADDR <= 10'(addr);
      // Sample the RAM output with the request still asserted.
      @(posedge I_CLK);
      #1;
      check_bit("Above RD_VALID",O_REF_ABOVE_RD_VALID,expected_valid);
      if (expected_valid) check_word("Above RD_DATA",O_REF_ABOVE_RD_DATA,expected_data);
      @(posedge I_CLK);
      I_REF_ABOVE_RD_EN <= 1'b0;
    end
  endtask

  task automatic read_left(input integer comp,input integer addr,input logic expected_valid,
                           input logic [63:0] expected_data);
    begin
      @(posedge I_CLK);
      I_REF_LEFT_BOUND_RD_EN <= 1'b1;
      I_REF_LEFT_BOUND_RD_COMPONENT_ID <= 2'(comp);
      I_REF_LEFT_BOUND_RD_ADDR <= 5'(addr);
      // Sample the RAM output with the request still asserted.
      @(posedge I_CLK);
      #1;
      check_bit("Left RD_VALID",O_REF_LEFT_BOUND_RD_VALID,expected_valid);
      if (expected_valid) check_word("Left RD_DATA",O_REF_LEFT_BOUND_RD_DATA,expected_data);
      @(posedge I_CLK);
      I_REF_LEFT_BOUND_RD_EN <= 1'b0;
    end
  endtask

  task automatic check_map(input integer comp,input integer xu,input integer yu,
                           input logic expected);
    begin
      @(posedge I_CLK);
      I_REF_MAP_QUERY_COMPONENT_ID <= 2'(comp);
      I_REF_TOP_MAP_X_UNIT <= 5'(xu);
      I_REF_TOP_MAP_Y_UNIT <= 5'(yu);
      I_REF_TOP_MAP_QUERY_VALID <= 1'b1;
      #1;
      check_bit("Availability Top Query",O_REF_TOP_MAP_AVAILABLE,expected);
      @(posedge I_CLK);
      I_REF_TOP_MAP_QUERY_VALID <= 1'b0;
    end
  endtask

  task automatic check_map_pair(input integer comp,input integer top_x,input integer top_y,
                               input integer left_x,input integer left_y,
                               input logic expected_top,input logic expected_left);
    begin
      @(posedge I_CLK);
      I_REF_MAP_QUERY_COMPONENT_ID <= 2'(comp);
      I_REF_TOP_MAP_QUERY_VALID <= 1'b1;
      I_REF_TOP_MAP_X_UNIT <= 5'(top_x);
      I_REF_TOP_MAP_Y_UNIT <= 5'(top_y);
      I_REF_LEFT_MAP_QUERY_VALID <= 1'b1;
      I_REF_LEFT_MAP_X_UNIT <= 5'(left_x);
      I_REF_LEFT_MAP_Y_UNIT <= 5'(left_y);
      #1;
      check_bit("Simultaneous Top query",O_REF_TOP_MAP_AVAILABLE,expected_top);
      check_bit("Simultaneous Left query",O_REF_LEFT_MAP_AVAILABLE,expected_left);
      @(posedge I_CLK);
      I_REF_TOP_MAP_QUERY_VALID <= 1'b0;
      I_REF_LEFT_MAP_QUERY_VALID <= 1'b0;
    end
  endtask

  task automatic check_map_tl(input integer comp,input integer xu,input integer yu,
                              input logic expected);
    begin
      @(posedge I_CLK);
      I_REF_MAP_QUERY_COMPONENT_ID <= 2'(comp);
      I_REF_TL_MAP_QUERY_VALID <= 1'b1;
      I_REF_TL_MAP_X_UNIT <= 5'(xu);
      I_REF_TL_MAP_Y_UNIT <= 5'(yu);
      #1;
      check_bit("Top-left availability query",O_REF_TL_MAP_AVAILABLE,expected);
      check_bit("Top output inactive on TL query",O_REF_TOP_MAP_AVAILABLE,1'b0);
      @(posedge I_CLK);
      I_REF_TL_MAP_QUERY_VALID <= 1'b0;
    end
  endtask

  task automatic check_corner(input integer comp,input logic valid,
                               input logic [15:0] sample);
    begin
      @(posedge I_CLK);
      I_REF_CORNER_QUERY_COMPONENT_ID <= 2'(comp);
      #1;
      check_bit("Corner valid",O_REF_CORNER_QUERY_VALID,valid);
      if(valid) begin
        tb_checks=tb_checks+1;
        if (O_REF_CORNER_QUERY_SAMPLE !== sample)
          $fatal(1,"[TB][FAIL] Corner comp=%0d got=%04h expected=%04h",comp,
                  O_REF_CORNER_QUERY_SAMPLE,sample);
      end
    end
  endtask

  initial begin
    tb_cycle=0;tb_checks=0;tb_tests=0;tb_beats=0;
    tb_ctu_start_fire_count=0;
    tb_cu_start_fire_count=0;
    tb_recon_fire_count=0;
    tb_ctu_finish_fire_count=0;
    tb_origin_x=0;tb_origin_y=0;
    init_inputs();
    repeat (4) @(posedge I_CLK);
    I_RESETN <= 1'b1;
    // -------------------------------- TEST 1 --------------------------------
    $display("\n[TB][TC1] Empty reference RAM / availability guards");
    tb_tests=tb_tests+1;
    @(posedge I_CLK);
    I_PICTURE_START <= 1'b1;
    @(posedge I_CLK);
    I_PICTURE_START <= 1'b0;
    start_ctu(0,0,128,8,128,8);
    read_h(0,0,1'b0,64'b0);
    read_v(0,0,1'b0,64'b0);
    read_above(0,0,1'b0,64'b0);
    read_left(0,0,1'b0,64'b0);
    check_map(0,0,0,1'b0);
    check_bit("No previous CTU row",O_REF_ABOVE_ROW_VALID,1'b0);
    check_bit("No previous CTU left",O_REF_LEFT_BOUNDARY_VALID,1'b0);
    // -------------------------------- TEST 2 --------------------------------
    $display("\n[TB][TC2] CU8x8: Y/Cb/Cr, commit, H/V, availability");
    tb_tests=tb_tests+1;
    complete_cu(0,0,8,8);
    check_map(0,0,0,1'b1);
    check_map(0,1,1,1'b1);
    check_map(1,0,0,1'b1);
    check_map(2,0,0,1'b1);
    check_map(0,2,0,1'b0);
    check_map_pair(0,0,0,1,1,1'b1,1'b1);
    check_map_tl(0,0,0,1'b1);
    read_h(0,0,1'b1,row_word(0,0,3));
    read_h(0,32,1'b1,row_word(0,0,7));
    read_v(0,0,1'b1,column_word(0,3,0));
    read_v(1,0,1'b1,column_word(1,3,0));
    read_v(2,0,1'b1,column_word(2,3,0));
    // -------------------------------- TEST 3 --------------------------------
    $display("\n[TB][TC3] Second Leaf CU + availability isolation");
    tb_tests=tb_tests+1;
    complete_cu(8,0,8,8);
    check_map(0,2,0,1'b1);
    check_map(0,3,1,1'b1);
    check_map(0,4,0,1'b0);
    read_h(0,2,1'b1,row_word(0,8,3));
    read_v(0,64,1'b1,column_word(0,11,0));
    finish_ctu();
    // -------------------------------- TEST 4 --------------------------------
    $display("\n[TB][TC4] Horizontal CTU boundary: Left ping-pong");
    tb_tests=tb_tests+1;
    new_picture();
    start_ctu(0,0,136,8,128,8);
    complete_cu(120,0,8,8);
    finish_ctu();
    start_ctu(128,0,136,8,8,8);
    check_bit("Left boundary enabled",O_REF_LEFT_BOUNDARY_VALID,1'b1);
    read_left(0,0,1'b1,column_word(0,127,0));
    read_left(1,0,1'b1,column_word(1,63,0));
    read_left(2,0,1'b1,column_word(2,63,0));
    check_bit("No above row in first row",O_REF_ABOVE_ROW_VALID,1'b0);
    finish_ctu();
    // -------------------------------- TEST 5 --------------------------------
    $display("\n[TB][TC5] Vertical CTU boundary: Above line ping-pong");
    tb_tests=tb_tests+1;
    new_picture();
    start_ctu(0,0,8,136,8,128);
    complete_cu(0,120,8,8);
    finish_ctu();
    start_ctu(0,128,8,136,8,8);
    check_bit("Above row enabled",O_REF_ABOVE_ROW_VALID,1'b1);
    read_above(0,0,1'b1,row_word(0,0,127));
    read_above(1,0,1'b1,row_word(1,0,63));
    read_above(2,0,1'b1,row_word(2,0,63));
    finish_ctu();
    // -------------------------------- TEST 6 --------------------------------
    $display("\n[TB][TC6] Above-left corner: four CTUs, all components");
    tb_tests=tb_tests+1;
    new_picture();
    start_ctu(0,0,136,136,128,128);
    complete_cu(120,120,8,8);
    finish_ctu();
    start_ctu(128,0,136,136,8,128);
    complete_cu(0,120,8,8);
    finish_ctu();
    start_ctu(0,128,136,136,128,8);
    complete_cu(120,0,8,8);
    finish_ctu();
    start_ctu(128,128,136,136,8,8);
    check_bit("Corner flag",O_REF_ABOVE_LEFT_VALID,1'b1);
    check_bit("Left flag in bottom-right CTU",O_REF_LEFT_BOUNDARY_VALID,1'b1);
    check_bit("Above flag in bottom-right CTU",O_REF_ABOVE_ROW_VALID,1'b1);
    check_corner(0,1'b1,sample_at(0,127,127));
    check_corner(1,1'b1,sample_at(1,63,63));
    check_corner(2,1'b1,sample_at(2,63,63));
    read_above(0,32,1'b1,row_word(0,128,127));
    read_left(0,0,1'b1,column_word(0,127,128));
    finish_ctu();
    // -------------------------------- TEST 7 --------------------------------
    $display("\n[TB][TC7] Invalid component order: reject-before-write and clear");
    tb_tests=tb_tests+1;
    new_picture();
    start_ctu(0,0,8,8,8,8);
    start_cu(0,0,8,8);
    @(posedge I_CLK);
    I_RECON_VALID <= 1'b1;
    I_RECON_COMPONENT_ID <= 2'd1; // Illegal: Cb before Y.
    I_RECON_X_BASE <= 7'd0;
    I_RECON_Y <= 7'd0;
    I_RECON_LANE_VALID <= 4'b1111;
    I_RECON_TU_LAST <= 1'b0;
    I_RECON_SAMPLE <= 40'd0;
    @(posedge I_CLK);
    check_bit("Reject out-of-order Cb",O_RECON_READY,1'b0);
    I_RECON_VALID <= 1'b0;
    #1;
    check_bit("Report out-of-order beat",O_ERROR,1'b1);
    check_bit("No erroneous CU commit",O_CU_REF_COMMIT_DONE,1'b0);
    @(posedge I_CLK);
    I_CLEAR_ERROR <= 1'b1;
    I_CU_REF_COMMIT_REQ <= 1'b0;
    @(posedge I_CLK);
    I_CLEAR_ERROR <= 1'b0;
    @(posedge I_CLK);
    check_bit("Clear error",O_ERROR,1'b0);
    check_bit("Return to idle after error clear",O_CTU_START_READY,1'b1);
    $display("\n====================================================");
    $display("[TB][PASS] Tests: %0d  Checks: %0d  Recon beats: %0d  Cycles: %0d",
             tb_tests,tb_checks,tb_beats,tb_cycle);
    $display("====================================================");
    $finish;
  end
endmodule: RECON_SUBSYSTEM_TOP_TB
