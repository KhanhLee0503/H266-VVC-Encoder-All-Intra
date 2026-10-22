//------------------------------------------------------------------------------
// Description: Per-pair combinational comparators for VVC DBF decisions.
//              One instance processes lanes 0/1, another lanes 2/3.
//              For each lane the unit evaluates conditions C2/C4/C6 for
//              short filtering and their long-filter counterparts.
//              No function/task, behavioral delay, or latches.
// Reference: Hou et al., IEEE TCSVT 2024, Fig. 2(b).
//------------------------------------------------------------------------------
`timescale 1ns/1ps
module DBF_FD_PAIR_UNIT (
  input  logic [31:0] I_DP_SHORT,
  input  logic [31:0] I_DQ_SHORT,
  input  logic [31:0] I_SP_SHORT,
  input  logic [31:0] I_SQ_SHORT,
  input  logic [31:0] I_DP_LONG,
  input  logic [31:0] I_DQ_LONG,
  input  logic [31:0] I_SP_LONG,
  input  logic [31:0] I_SQ_LONG,
  input  logic [31:0] I_BOUNDARY_GAP,
  input  logic  [9:0] I_BETA,
  input  logic  [9:0] I_TC,
  output logic  [5:0] O_COND_SHORT,
  output logic  [5:0] O_COND_LONG
);
  logic [16:0] w_short_dpq [0:1];
  logic [16:0] w_long_dpq  [0:1];
  logic [16:0] w_short_spq [0:1];
  logic [16:0] w_long_spq  [0:1];
  logic [16:0] w_short_thr1;
  logic [16:0] w_short_thr2;
  logic [16:0] w_long_thr1;
  logic [16:0] w_long_thr2;
  logic [16:0] w_gap_thr;

  // Compare only after widening. Avoid truncation of 2*d and 5*tC.
  assign w_short_thr1 = {7'd0, I_BETA} >> 2;
  assign w_short_thr2 = {7'd0, I_BETA} >> 3;
  assign w_long_thr1  = {7'd0, I_BETA} >> 4;
  assign w_long_thr2  = (({7'd0, I_BETA} << 1) + {7'd0, I_BETA}) >> 5;
  assign w_gap_thr    = (({7'd0, I_TC} << 2) + {7'd0, I_TC} + 17'd1) >> 1;

  for (genvar g = 0; g < 2; g++) begin: gen_fd_lane
    assign w_short_dpq[g] = {1'b0, I_DP_SHORT[g*16 +: 16]} +
                            {1'b0, I_DQ_SHORT[g*16 +: 16]};
    assign w_long_dpq[g]  = {1'b0, I_DP_LONG[g*16 +: 16]} +
                            {1'b0, I_DQ_LONG[g*16 +: 16]};
    assign w_short_spq[g] = {1'b0, I_SP_SHORT[g*16 +: 16]} +
                            {1'b0, I_SQ_SHORT[g*16 +: 16]};
    assign w_long_spq[g]  = {1'b0, I_SP_LONG[g*16 +: 16]} +
                            {1'b0, I_SQ_LONG[g*16 +: 16]};

    // C2/C3: twice the second-difference activity at an endpoint.
    assign O_COND_SHORT[g*3+0] = (w_short_dpq[g] << 1) < w_short_thr1;
    assign O_COND_LONG [g*3+0] = (w_long_dpq [g] << 1) < w_long_thr1;
    // C4/C5: edge-side flatness.
    assign O_COND_SHORT[g*3+1] = w_short_spq[g] < w_short_thr2;
    assign O_COND_LONG [g*3+1] = w_long_spq [g] < w_long_thr2;
    // C6/C7: p0-q0 boundary gap, same for both branches.
    assign O_COND_SHORT[g*3+2] = {1'b0, I_BOUNDARY_GAP[g*16 +: 16]} < w_gap_thr;
    assign O_COND_LONG [g*3+2] = {1'b0, I_BOUNDARY_GAP[g*16 +: 16]} < w_gap_thr;
  end
endmodule: DBF_FD_PAIR_UNIT
