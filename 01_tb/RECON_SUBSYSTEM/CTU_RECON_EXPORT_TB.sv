`timescale 1ns/1ps
module CTU_RECON_EXPORT_TB;
  logic I_CLK=0;
  always #5 I_CLK=~I_CLK;
  logic I_RESETN=0, I_CLEAR_ERROR=0;
  logic I_EXPORT_START_VALID=0, O_EXPORT_START_READY;
  logic [8:0] I_CTU_ID=0;
  logic [7:0] I_CTU_VALID_WIDTH=0,I_CTU_VALID_HEIGHT=0;
  logic O_RAM_RD_EN;
  logic [1:0] O_RAM_RD_COMPONENT_ID;
  logic [11:0] O_RAM_RD_ADDR;
  logic I_RAM_RD_DATA_VALID;
  logic [63:0] I_RAM_RD_DATA;
  logic O_DATA_VALID,I_DATA_READY=0;
  logic [63:0] O_DATA;
  logic [3:0] O_LANE_VALID;
  logic [1:0] O_COMPONENT_ID;
  logic [6:0] O_X_BASE,O_Y;
  logic [8:0] O_CTU_ID;
  logic O_ROW_LAST,O_COMPONENT_LAST,O_CTU_LAST;
  logic O_EXPORT_DONE,O_BUSY,O_ERROR;
  logic wr_en=0;
  logic [1:0] wr_comp=0;
  logic [11:0] wr_addr=0;
  logic [63:0] wr_data=0;
  integer case_id=0, expected_beats=0, observed_beats=0, reads=0;
  integer exp_comp=0, exp_x=0, exp_y=0, w=0, h=0;
  integer stall_budget=0;
  integer done_seen=0;
  always @(posedge I_CLK) if (I_RESETN && O_EXPORT_DONE) done_seen=done_seen+1;
  bit export_active=0;
  logic [63:0] stall_data;
  logic [1:0] stall_comp;
  logic [6:0] stall_x,stall_y;
  logic stall_row_last,stall_comp_last,stall_ctu_last;
  bit was_stalled=0;

  function automatic logic [63:0] pattern(input integer comp, input integer addr);
    logic [63:0] t;
    for (integer lane=0;lane<4;lane++)
      t[lane*16 +:16]=16'((comp*1009 + addr*13 + lane*7 + 5) & 16'h03ff);
    return t;
  endfunction

  CTU_RECON_LOCAL_RAM u_ram(
    .I_CLK(I_CLK),.I_RESETN(I_RESETN),
    .I_WR_EN(wr_en),.I_WR_COMPONENT_ID(wr_comp),
    .I_WR_ADDR(wr_addr),.I_WR_DATA(wr_data),.I_WR_SAMPLE_EN(4'b1111),
    .I_RD_EN(O_RAM_RD_EN),.I_RD_COMPONENT_ID(O_RAM_RD_COMPONENT_ID),
    .I_RD_ADDR(O_RAM_RD_ADDR),.O_RD_VALID(I_RAM_RD_DATA_VALID),.O_RD_DATA(I_RAM_RD_DATA)
  );
  CTU_RECON_EXPORT u_export(
    .I_CLK(I_CLK),.I_RESETN(I_RESETN),.I_CLEAR_ERROR(I_CLEAR_ERROR),
    .I_EXPORT_START_VALID(I_EXPORT_START_VALID),.O_EXPORT_START_READY(O_EXPORT_START_READY),
    .I_CTU_ID(I_CTU_ID),.I_CTU_VALID_WIDTH(I_CTU_VALID_WIDTH),
    .I_CTU_VALID_HEIGHT(I_CTU_VALID_HEIGHT),
    .O_RAM_RD_EN(O_RAM_RD_EN),.O_RAM_RD_COMPONENT_ID(O_RAM_RD_COMPONENT_ID),
    .O_RAM_RD_ADDR(O_RAM_RD_ADDR),.I_RAM_RD_DATA_VALID(I_RAM_RD_DATA_VALID),
    .I_RAM_RD_DATA(I_RAM_RD_DATA),
    .O_DATA_VALID(O_DATA_VALID),.I_DATA_READY(I_DATA_READY),.O_DATA(O_DATA),
    .O_LANE_VALID(O_LANE_VALID),.O_COMPONENT_ID(O_COMPONENT_ID),
    .O_X_BASE(O_X_BASE),.O_Y(O_Y),.O_CTU_ID(O_CTU_ID),
    .O_ROW_LAST(O_ROW_LAST),.O_COMPONENT_LAST(O_COMPONENT_LAST),
    .O_CTU_LAST(O_CTU_LAST),.O_EXPORT_DONE(O_EXPORT_DONE),
    .O_BUSY(O_BUSY),.O_ERROR(O_ERROR)
  );

  // Sample transfers BEFORE NBA; drive all inputs with NBA at posedge only.
  always @(posedge I_CLK) begin
    if (I_RESETN && export_active) begin
      if (O_ERROR) $fatal(1,"[FAIL] unexpected export error case=%0d",case_id);
      if (O_RAM_RD_EN) begin
        if (O_RAM_RD_ADDR > ((O_RAM_RD_COMPONENT_ID==0)?4095:1023))
          $fatal(1,"[FAIL] RAM address outside plane range");
        reads=reads+1;
      end
      if (was_stalled) begin
        if (!O_DATA_VALID || O_DATA!==stall_data || O_COMPONENT_ID!==stall_comp ||
            O_X_BASE!==stall_x || O_Y!==stall_y || O_ROW_LAST!==stall_row_last ||
            O_COMPONENT_LAST!==stall_comp_last || O_CTU_LAST!==stall_ctu_last)
          $fatal(1,"[FAIL] data/metadata changed while stalled at beat %0d",observed_beats);
      end
      was_stalled=O_DATA_VALID && !I_DATA_READY;
      if (was_stalled) begin
        stall_data=O_DATA; stall_comp=O_COMPONENT_ID; stall_x=O_X_BASE;
        stall_y=O_Y; stall_row_last=O_ROW_LAST;
        stall_comp_last=O_COMPONENT_LAST;stall_ctu_last=O_CTU_LAST;
      end
      if (O_DATA_VALID && I_DATA_READY) begin
        integer cw,ch,addr;
        cw=(exp_comp==0)?w:(w/2);
        ch=(exp_comp==0)?h:(h/2);
        addr=exp_y*( (exp_comp==0)?32:16 ) + exp_x/4;
        if (O_COMPONENT_ID!==2'(exp_comp) || O_X_BASE!==7'(exp_x) ||
            O_Y!==7'(exp_y) || O_CTU_ID!==9'(case_id) ||
            O_DATA!==pattern(exp_comp,addr) || O_LANE_VALID!==4'hf ||
            O_ROW_LAST!==(exp_x+4==cw) ||
            O_COMPONENT_LAST!==((exp_x+4==cw)&&(exp_y+1==ch)) ||
            O_CTU_LAST!==((exp_comp==2)&&(exp_x+4==cw)&&(exp_y+1==ch)))
          $fatal(1,"[FAIL] case=%0d beat=%0d comp=%0d xy=%0d,%0d got comp=%0d xy=%0d,%0d data=%h expected=%h",case_id,observed_beats,exp_comp,exp_x,exp_y,O_COMPONENT_ID,O_X_BASE,O_Y,O_DATA,pattern(exp_comp,addr));
        observed_beats=observed_beats+1;
        if (exp_x+4==cw) begin
          exp_x=0;
          if (exp_y+1==ch) begin
            exp_y=0;exp_comp=exp_comp+1;
          end else exp_y=exp_y+1;
        end else exp_x=exp_x+4;
      end
    end
  end

  task automatic preload(input integer ww, input integer hh);
    integer cw,ch,addr;
    for(integer comp=0;comp<3;comp++) begin
      cw=(comp==0)?ww:ww/2;
      ch=(comp==0)?hh:hh/2;
      for(integer yy=0;yy<ch;yy++) begin
        for(integer xx=0;xx<cw;xx+=4) begin
          addr=yy*((comp==0)?32:16)+xx/4;
          @(posedge I_CLK);
          wr_en <= 1;
          wr_comp <= 2'(comp);
          wr_addr <= 12'(addr);
          wr_data <= pattern(comp,addr);
        end
      end
    end
    @(posedge I_CLK);wr_en<=0;
    @(posedge I_CLK);
  endtask

  task automatic run_case(input integer id,input integer ww,input integer hh,input integer mode);
    integer limit;
    case_id=id;w=ww;h=hh;
    expected_beats=(ww*hh*3)/8;
    observed_beats=0;reads=0;exp_comp=0;exp_x=0;exp_y=0;
    was_stalled=0;export_active=0;done_seen=0;
    $display("[TB][TC%0d] preload %0dx%0d, mode=%0d, expected beats=%0d",id,ww,hh,mode,expected_beats);
    preload(ww,hh);
    @(posedge I_CLK);
    I_CTU_ID<=9'(id); I_CTU_VALID_WIDTH<=8'(ww); I_CTU_VALID_HEIGHT<=8'(hh);
    I_EXPORT_START_VALID<=1;
    if (!O_EXPORT_START_READY) $fatal(1,"[FAIL] export not ready before start");
    @(posedge I_CLK);I_EXPORT_START_VALID<=0;
    export_active=1;
    limit=0;
    while (observed_beats<expected_beats && limit<expected_beats*10+50) begin
      @(posedge I_CLK);
      if(mode==0) I_DATA_READY<=1;
      else if(mode==1) I_DATA_READY <= ((limit%7)>=4);
      else I_DATA_READY <= ((limit%31)>=17);
      limit=limit+1;
    end
    if (observed_beats!=expected_beats) $fatal(1,"[FAIL] timeout TC%0d beats=%0d/%0d",id,observed_beats,expected_beats);
    @(posedge I_CLK);
    #1;
    if(O_BUSY || O_ERROR || done_seen!=1) $fatal(1,"[FAIL] DONE/BUSY/ERROR TC%0d done_pulses=%0d busy=%b err=%b",id,done_seen,O_BUSY,O_ERROR);
    export_active=0;
    @(posedge I_CLK);I_DATA_READY<=0;
    $display("[TB][PASS] TC%0d, beats=%0d, reads=%0d, cycles=%0d",id,observed_beats,reads,limit);
  endtask

  initial begin
    $dumpfile("CTU_RECON_EXPORT_TB.vcd");
    $dumpvars(0,CTU_RECON_EXPORT_TB);
    repeat(4) @(posedge I_CLK);
    I_RESETN<=1;
    repeat(3) @(posedge I_CLK);
    run_case(1,8,8,0);
    run_case(2,32,16,1);
    run_case(3,128,112,2);
    run_case(4,128,128,0);
    $display("[TB][PASS] CTU_RECON_EXPORT 4 cases PASS");
    $finish;
  end
endmodule
