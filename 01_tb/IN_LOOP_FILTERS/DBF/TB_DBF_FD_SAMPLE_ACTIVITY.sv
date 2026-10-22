//-----------------------------------------------------------
// Description: Directed and randomized FD-I stage testbench.
//              Drives inputs only on posedge with NBA.
//              Verifies every one of 44 metrics per window
//              against a behavioral integer reference model.
//-----------------------------------------------------------
`timescale 1ns/1ps

module TB_DBF_FD_SAMPLE_ACTIVITY;
  localparam integer CW = 16;
  localparam integer BD = 10;
  localparam integer AW = BD+2;

  logic clk;
  logic rst_n;
  logic clear;
  logic in_valid;
  wire  in_ready;
  logic [1023:0] in_samples;
  logic [1:0] in_comp;
  logic in_dir;
  logic [1:0] in_group_enable;
  logic [2:0] in_sp0, in_sq0, in_sp1, in_sq1;
  logic [1:0] in_bs0, in_bs1;
  logic [15:0] in_beta0, in_beta1, in_tc0, in_tc1;
  logic [15:0] in_tag;

  wire  out_valid;
  logic out_ready;
  wire [1023:0] out_samples;
  wire [1:0] out_comp;
  wire out_dir;
  wire [1:0] out_group_enable;
  wire [2:0] out_sp0, out_sq0, out_sp1, out_sq1;
  wire [1:0] out_bs0, out_bs1;
  wire [15:0] out_beta0, out_beta1, out_tc0, out_tc1;
  wire [15:0] out_tag;

  wire [4*AW-1:0] p_near, q_near, p_far, q_far;
  wire [4*AW-1:0] p_span3, q_span3, p_span_len, q_span_len;
  wire [4*AW-1:0] p_ext, q_ext, cross_diff;
  integer total_pass;

  DBF_FD_SAMPLE_ACTIVITY U_DUT (
    .I_CLK           (clk),
    .I_RST_N         (rst_n),
    .I_CLEAR         (clear),
    .I_VALID         (in_valid),
    .O_READY         (in_ready),
    .I_SAMPLES       (in_samples),
    .I_COMPONENT_ID  (in_comp),
    .I_EDGE_DIR      (in_dir),
    .I_GROUP_ENABLE  (in_group_enable),
    .I_SP_G0         (in_sp0),
    .I_SQ_G0         (in_sq0),
    .I_SP_G1         (in_sp1),
    .I_SQ_G1         (in_sq1),
    .I_BS_G0         (in_bs0),
    .I_BS_G1         (in_bs1),
    .I_BETA_G0       (in_beta0),
    .I_BETA_G1       (in_beta1),
    .I_TC_G0         (in_tc0),
    .I_TC_G1         (in_tc1),
    .I_WINDOW_TAG    (in_tag),
    .O_VALID         (out_valid),
    .I_READY         (out_ready),
    .O_SAMPLES       (out_samples),
    .O_COMPONENT_ID  (out_comp),
    .O_EDGE_DIR      (out_dir),
    .O_GROUP_ENABLE  (out_group_enable),
    .O_SP_G0         (out_sp0),
    .O_SQ_G0         (out_sq0),
    .O_SP_G1         (out_sp1),
    .O_SQ_G1         (out_sq1),
    .O_BS_G0         (out_bs0),
    .O_BS_G1         (out_bs1),
    .O_BETA_G0       (out_beta0),
    .O_BETA_G1       (out_beta1),
    .O_TC_G0         (out_tc0),
    .O_TC_G1         (out_tc1),
    .O_WINDOW_TAG    (out_tag),
    .O_P_NEAR_CURV   (p_near),
    .O_Q_NEAR_CURV   (q_near),
    .O_P_FAR_CURV    (p_far),
    .O_Q_FAR_CURV    (q_far),
    .O_P_SPAN3       (p_span3),
    .O_Q_SPAN3       (q_span3),
    .O_P_SPAN_LEN    (p_span_len),
    .O_Q_SPAN_LEN    (q_span_len),
    .O_P_EXTENSION   (p_ext),
    .O_Q_EXTENSION   (q_ext),
    .O_BOUNDARY_DIFF (cross_diff)
  );

  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end

  initial begin
    $dumpfile("TB_DBF_FD_SAMPLE_ACTIVITY.vcd");
    $dumpvars(0, U_DUT);
  end

  // Testbench-only integer reference operations.
  function automatic integer abs_integer(input integer v);
    abs_integer = v < 0 ? -v : v;
  endfunction

  function automatic integer pixel(input integer line, input integer col);
    pixel = int'(in_samples[((line*16+col)*CW) +: BD]);
  endfunction

  function automatic integer actual_metric(input integer metric, input integer line);
    case (metric)
      0: actual_metric = int'(p_near[line*AW +: AW]);
      1: actual_metric = int'(q_near[line*AW +: AW]);
      2: actual_metric = int'(p_far[line*AW +: AW]);
      3: actual_metric = int'(q_far[line*AW +: AW]);
      4: actual_metric = int'(p_span3[line*AW +: AW]);
      5: actual_metric = int'(q_span3[line*AW +: AW]);
      6: actual_metric = int'(p_span_len[line*AW +: AW]);
      7: actual_metric = int'(q_span_len[line*AW +: AW]);
      8: actual_metric = int'(p_ext[line*AW +: AW]);
      9: actual_metric = int'(q_ext[line*AW +: AW]);
      default: actual_metric = int'(cross_diff[line*AW +: AW]);
    endcase
  endfunction

  task automatic verify_payload(input integer transaction);
    integer line, metric, exp, got, p[0:7], q[0:7];
    integer sp, sq, x;
    begin
      if (!out_valid)
        $fatal(1, "No registered response for transaction=%0d",transaction);
      if (out_tag !== transaction[15:0] || out_samples !== in_samples ||
          out_comp !== in_comp || out_dir !== in_dir ||
          out_group_enable !== in_group_enable ||
          out_sp0 !== in_sp0 || out_sq0 !== in_sq0 ||
          out_sp1 !== in_sp1 || out_sq1 !== in_sq1 ||
          out_bs0 !== in_bs0 || out_bs1 !== in_bs1 ||
          out_beta0 !== in_beta0 || out_beta1 !== in_beta1 ||
          out_tc0 !== in_tc0 || out_tc1 !== in_tc1)
        $fatal(1, "Metadata or source sample mismatch transaction=%0d", transaction);

      for (line = 0; line < 4; line = line+1) begin
        sp = line < 2 || in_comp == 0 ? int'(in_sp0) : int'(in_sp1);
        sq = line < 2 || in_comp == 0 ? int'(in_sq0) : int'(in_sq1);
        for (x = 0; x < 8; x=x+1) begin
          p[x] = pixel(line,7-x);
          q[x] = pixel(line,8+x);
        end
        for (metric = 0; metric < 11; metric=metric+1) begin
          case (metric)
            0: exp=abs_integer(p[2]-2*p[1]+p[0]);
            1: exp=abs_integer(q[2]-2*q[1]+q[0]);
            2: exp=abs_integer(p[5]-2*p[4]+p[3]);
            3: exp=abs_integer(q[5]-2*q[4]+q[3]);
            4: exp=abs_integer(p[3]-p[0]);
            5: exp=abs_integer(q[3]-q[0]);
            6: exp=abs_integer(p[3]-p[sp]);
            7: exp=abs_integer(q[3]-q[sq]);
            8: exp=abs_integer(p[7]-p[6]-p[5]+p[4]);
            9: exp=abs_integer(q[7]-q[6]-q[5]+q[4]);
            default: exp=abs_integer(p[0]-q[0]);
          endcase
          got=actual_metric(metric,line);
          if (got !== exp)
            $fatal(1,"METRIC ERROR id=%0d line=%0d kind=%0d: actual=%0d expected=%0d SP=%0d SQ=%0d",
                   transaction,line,metric,got,exp,sp,sq);
        end
      end
    end
  endtask

  task automatic run_one(input integer index, input integer pattern,
                         input integer comp, input integer sp0,
                         input integer sq0, input integer sp1,
                         input integer sq1, input integer stall);
    logic [1023:0] samples;
    integer ln, col, value, i;
    begin
      samples = '0;
      for (ln=0;ln<4;ln=ln+1) begin
        for (col=0;col<16;col=col+1) begin
          case (pattern)
            0: value=0;
            1: value=1023;
            2: value=(col & 1) ? 1023 : 0;
            3: value=(ln & 1) ? 1023 : 0;
            4: value=(col*59+ln*83)&1023;
            default: value=$urandom_range(0,1023);
          endcase
          samples[((ln*16+col)*CW)+:CW]=16'(value);
        end
      end
      // Pos-edge-only NBA drive.
      @(posedge clk);
      if (!in_ready)
        $fatal(1,"Input not ready before transaction=%0d",index);
      in_samples <= samples;
      in_comp    <= 2'(comp);
      in_dir     <= 1'(index&1);
      in_group_enable <= index%3==0 ? 2'b01 : 2'b11;
      in_sp0     <= 3'(sp0);
      in_sq0     <= 3'(sq0);
      in_sp1     <= 3'(sp1);
      in_sq1     <= 3'(sq1);
      in_bs0     <= 2'd2;
      in_bs1     <= 2'(index&2);
      in_beta0   <= 16'(index*13);
      in_beta1   <= 16'(index*3);
      in_tc0     <= 16'(index+7);
      in_tc1     <= 16'(index+9);
      in_tag     <= 16'(index);
      in_valid   <= 1'b1;
      @(posedge clk);
      if (!(in_valid && in_ready))
        $fatal(1,"Missing input handshake index=%0d",index);
      in_valid <= 1'b0;
      #1;
      verify_payload(index);
      for (i=0;i<stall;i=i+1) begin
        @(posedge clk);
        #1;
        verify_payload(index);
        if (in_ready)
          $fatal(1,"Input should be blocked with filled output and downstream stalled");
      end
      @(posedge clk);
      out_ready <= 1'b1;
      @(posedge clk);
      out_ready <= 1'b0;
      #1;
      if (out_valid) $fatal(1,"Output valid did not drain index=%0d",index);
      total_pass = total_pass+1;
      if (index < 12 || index%50==0)
        $display("PASS case=%0d comp=%0d SP=(%0d,%0d) SQ=(%0d,%0d) hold=%0d",
                 index,comp,sp0,sp1,sq0,sq1,stall);
    end
  endtask

  initial begin
    rst_n=1'b0;
    clear=1'b0;
    in_valid=1'b0;
    out_ready=1'b0;
    in_samples='0;
    in_comp='0;
    in_dir='0;
    in_group_enable=2'b11;
    in_sp0='0;
    in_sq0='0;
    in_sp1='0;
    in_sq1='0;
    in_bs0='0;
    in_bs1='0;
    in_beta0='0;
    in_beta1='0;
    in_tc0='0;
    in_tc1='0;
    in_tag='0;
    total_pass=0;

    repeat(5) @(posedge clk);
    rst_n<=1'b1;
    repeat(2) @(posedge clk);

    run_one(0,0,0,1,3,5,7,4);
    run_one(1,1,0,7,5,3,1,2);
    run_one(2,2,1,1,1,7,7,3);
    run_one(3,3,2,3,3,5,5,5);
    run_one(4,4,0,5,7,1,3,1);
    // Additional lengths 0/2/4/6 test pure activity indexing.
    run_one(5,2,1,0,2,4,6,1);
    for (integer n=6;n<206;n=n+1)
      run_one(n,5,n%3,(n*3)%8,(n*5)%8,(n*7)%8,(n+3)%8,n%5);

    // Explicit clear of pending output.
    @(posedge clk);
    clear<=1'b1;
    @(posedge clk);
    clear<=1'b0;
    #1;
    if (out_valid) $fatal(1,"Clear left stale VALID");
    $display("ALL PASS: %0d windows x 4 lines x 11 Table-I metrics",total_pass);
    $finish;
  end
endmodule : TB_DBF_FD_SAMPLE_ACTIVITY
