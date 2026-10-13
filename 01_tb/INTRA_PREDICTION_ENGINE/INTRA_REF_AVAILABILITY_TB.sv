//-----------------------------------------------------------
// Description:
// Unit-level regression for INTRA_REF_AVAILABILITY, including Y/Cb/Cr,
// picture and CTU boundaries, 4-sample segment limits, and invalid TU
// anchors. Geometry supplied to this DUT is ALREADY component-scaled.
// All testcase stimulus changes at the positive clock edge only.
// This is NOT the 8-case full INTRA/PARTITION integration regression.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_AVAILABILITY_TB;

localparam [2:0] PARA_LOC_LOCAL      = 3'd0;
localparam [2:0] PARA_LOC_ABOVE      = 3'd1;
localparam [2:0] PARA_LOC_LEFT       = 3'd2;
localparam [2:0] PARA_LOC_ABOVE_LEFT = 3'd3;
localparam [2:0] PARA_LOC_INVALID    = 3'd4;

logic clk;
logic [1:0] I_COMPONENT_ID;
logic [6:0] I_TU_X;
logic [6:0] I_TU_Y;
logic [12:0] I_CTU_X_ORIGIN;
logic [12:0] I_CTU_Y_ORIGIN;
logic [12:0] I_PICTURE_WIDTH;
logic [12:0] I_PICTURE_HEIGHT;
logic I_TOP_CHECK_VALID;
logic [3:0] I_TOP_SEG_INDEX;
logic I_LEFT_CHECK_VALID;
logic [3:0] I_LEFT_SEG_INDEX;
logic I_TL_CHECK_VALID;
logic I_TOP_MAP_AVAILABLE;
logic I_LEFT_MAP_AVAILABLE;
logic I_TL_MAP_AVAILABLE;
logic I_ABOVE_ROW_VALID;
logic I_LEFT_BOUNDARY_VALID;
logic I_ABOVE_LEFT_VALID;

wire O_TOP_MAP_QUERY_VALID;
wire [4:0] O_TOP_MAP_X_UNIT;
wire [4:0] O_TOP_MAP_Y_UNIT;
wire O_LEFT_MAP_QUERY_VALID;
wire [4:0] O_LEFT_MAP_X_UNIT;
wire [4:0] O_LEFT_MAP_Y_UNIT;
wire O_TL_MAP_QUERY_VALID;
wire [4:0] O_TL_MAP_X_UNIT;
wire [4:0] O_TL_MAP_Y_UNIT;
wire [2:0] O_TOP_LOCATION;
wire [7:0] O_TOP_REF_X;
wire [7:0] O_TOP_REF_Y;
wire [13:0] O_TOP_GLOBAL_X;
wire [13:0] O_TOP_GLOBAL_Y;
wire O_TOP_CODING_VALID;
wire O_TOP_RECON_READY;
wire O_TOP_AVAILABLE;
wire [2:0] O_LEFT_LOCATION;
wire [7:0] O_LEFT_REF_X;
wire [7:0] O_LEFT_REF_Y;
wire [13:0] O_LEFT_GLOBAL_X;
wire [13:0] O_LEFT_GLOBAL_Y;
wire O_LEFT_CODING_VALID;
wire O_LEFT_RECON_READY;
wire O_LEFT_AVAILABLE;
wire [2:0] O_TL_LOCATION;
wire [7:0] O_TL_REF_X;
wire [7:0] O_TL_REF_Y;
wire [13:0] O_TL_GLOBAL_X;
wire [13:0] O_TL_GLOBAL_Y;
wire O_TL_CODING_VALID;
wire O_TL_RECON_READY;
wire O_TL_AVAILABLE;

integer testcase_count;

INTRA_REF_AVAILABILITY u_dut (.*);

initial clk = 1'b0;
always #5 clk = ~clk;

// Called immediately after @(posedge clk); NBA inputs become visible
// before the checker runs after #1. No stimulus on falling clock edges.
task automatic apply_case (
  input logic [1:0] comp,
  input integer origin_x,
  input integer origin_y,
  input integer picture_w,
  input integer picture_h,
  input integer tu_x,
  input integer tu_y,
  input integer top_seg,
  input integer left_seg
);
  I_COMPONENT_ID    <= comp;
  I_CTU_X_ORIGIN    <= 13'(origin_x);
  I_CTU_Y_ORIGIN    <= 13'(origin_y);
  I_PICTURE_WIDTH   <= 13'(picture_w);
  I_PICTURE_HEIGHT  <= 13'(picture_h);
  I_TU_X            <= 7'(tu_x);
  I_TU_Y            <= 7'(tu_y);
  I_TOP_SEG_INDEX   <= 4'(top_seg);
  I_LEFT_SEG_INDEX  <= 4'(left_seg);
endtask

task automatic check_case (
  input string case_name,
  input logic [2:0] top_expected,
  input logic [2:0] left_expected,
  input logic [2:0] tl_expected
);
  testcase_count = testcase_count + 1;

  if ((O_TOP_LOCATION !== top_expected) ||
      (O_LEFT_LOCATION !== left_expected) ||
      (O_TL_LOCATION !== tl_expected)) begin
    $display("[FAIL] TC%0d %s expected TOP/LEFT/TL=%0d/%0d/%0d got=%0d/%0d/%0d",
      testcase_count, case_name, top_expected, left_expected, tl_expected,
      O_TOP_LOCATION, O_LEFT_LOCATION, O_TL_LOCATION);
    $fatal(1, "Location mismatch");
  end

  if ((O_TOP_MAP_QUERY_VALID !== (top_expected == PARA_LOC_LOCAL)) ||
      (O_LEFT_MAP_QUERY_VALID !== (left_expected == PARA_LOC_LOCAL)) ||
      (O_TL_MAP_QUERY_VALID !== (tl_expected == PARA_LOC_LOCAL))) begin
    $fatal(1, "[FAIL] TC%0d %s reconstructed-map query mismatch", testcase_count, case_name);
  end

  if ((O_TOP_AVAILABLE !== (top_expected != PARA_LOC_INVALID)) ||
      (O_LEFT_AVAILABLE !== (left_expected != PARA_LOC_INVALID)) ||
      (O_TL_AVAILABLE !== (tl_expected != PARA_LOC_INVALID))) begin
    $fatal(1, "[FAIL] TC%0d %s availability mismatch", testcase_count, case_name);
  end

  $display("[PASS] TC%0d %-39s TOP/LEFT/TL=%0d/%0d/%0d globals TOP(%0d,%0d) LEFT(%0d,%0d) TL(%0d,%0d)",
    testcase_count, case_name, O_TOP_LOCATION, O_LEFT_LOCATION, O_TL_LOCATION,
    O_TOP_GLOBAL_X, O_TOP_GLOBAL_Y, O_LEFT_GLOBAL_X, O_LEFT_GLOBAL_Y,
    O_TL_GLOBAL_X, O_TL_GLOBAL_Y);
endtask

task automatic check_globals (
  input integer tx, input integer ty,
  input integer lx, input integer ly,
  input integer tlx, input integer tly
);
  if ((O_TOP_GLOBAL_X !== 14'(tx)) || (O_TOP_GLOBAL_Y !== 14'(ty)) ||
      (O_LEFT_GLOBAL_X !== 14'(lx)) || (O_LEFT_GLOBAL_Y !== 14'(ly)) ||
      (O_TL_GLOBAL_X !== 14'(tlx)) || (O_TL_GLOBAL_Y !== 14'(tly))) begin
    $fatal(1, "[FAIL] TC%0d global coordinate mismatch", testcase_count);
  end
endtask

initial begin
  testcase_count = 0;
  I_COMPONENT_ID = 2'd0;
  I_TU_X = '0;
  I_TU_Y = '0;
  I_CTU_X_ORIGIN = '0;
  I_CTU_Y_ORIGIN = '0;
  I_PICTURE_WIDTH = 13'd3840;
  I_PICTURE_HEIGHT = 13'd2160;
  I_TOP_CHECK_VALID = 1'b1;
  I_TOP_SEG_INDEX = '0;
  I_LEFT_CHECK_VALID = 1'b1;
  I_LEFT_SEG_INDEX = '0;
  I_TL_CHECK_VALID = 1'b1;
  I_TOP_MAP_AVAILABLE = 1'b1;
  I_LEFT_MAP_AVAILABLE = 1'b1;
  I_TL_MAP_AVAILABLE = 1'b1;
  I_ABOVE_ROW_VALID = 1'b1;
  I_LEFT_BOUNDARY_VALID = 1'b1;
  I_ABOVE_LEFT_VALID = 1'b1;

  @(posedge clk);
  apply_case(2'd0, 128, 128, 3840, 2160, 8, 8, 0, 0);
  #1;
  check_case("Luma local references", PARA_LOC_LOCAL, PARA_LOC_LOCAL, PARA_LOC_LOCAL);
  check_globals(136, 135, 135, 136, 135, 135);

  @(posedge clk);
  apply_case(2'd1, 64, 64, 1920, 1080, 8, 8, 0, 0);
  #1;
  check_case("Cb local, pre-scaled geometry", PARA_LOC_LOCAL, PARA_LOC_LOCAL, PARA_LOC_LOCAL);
  check_globals(72, 71, 71, 72, 71, 71);

  @(posedge clk);
  apply_case(2'd2, 64, 64, 1920, 1080, 8, 8, 0, 0);
  #1;
  check_case("Cr local, pre-scaled geometry", PARA_LOC_LOCAL, PARA_LOC_LOCAL, PARA_LOC_LOCAL);
  check_globals(72, 71, 71, 72, 71, 71);

  @(posedge clk);
  apply_case(2'd1, 64, 64, 1920, 1080, 8, 0, 0, 0);
  #1;
  check_case("Cb above CTU crossing", PARA_LOC_ABOVE, PARA_LOC_LOCAL, PARA_LOC_ABOVE);
  check_globals(72, 63, 71, 64, 71, 63);

  @(posedge clk);
  apply_case(2'd1, 64, 64, 1920, 1080, 0, 8, 0, 0);
  #1;
  check_case("Cb left CTU crossing", PARA_LOC_LOCAL, PARA_LOC_LEFT, PARA_LOC_LEFT);
  check_globals(64, 71, 63, 72, 63, 71);

  @(posedge clk);
  apply_case(2'd2, 64, 64, 1920, 1080, 0, 0, 0, 0);
  #1;
  check_case("Cr above-left CTU crossing", PARA_LOC_ABOVE, PARA_LOC_LEFT, PARA_LOC_ABOVE_LEFT);
  check_globals(64, 63, 63, 64, 63, 63);

  @(posedge clk);
  apply_case(2'd0, 0, 0, 3840, 2160, 0, 0, 0, 0);
  #1;
  check_case("First picture corner", PARA_LOC_INVALID, PARA_LOC_INVALID, PARA_LOC_INVALID);

  @(posedge clk);
  apply_case(2'd1, 1856, 64, 1920, 1080, 60, 8, 0, 0);
  #1;
  check_case("Right boundary: last segment valid", PARA_LOC_LOCAL, PARA_LOC_LOCAL, PARA_LOC_LOCAL);

  @(posedge clk);
  apply_case(2'd1, 1856, 64, 1920, 1080, 60, 8, 1, 0);
  #1;
  check_case("Right boundary: top segment overflow", PARA_LOC_INVALID, PARA_LOC_LOCAL, PARA_LOC_LOCAL);

  @(posedge clk);
  apply_case(2'd1, 64, 1024, 1920, 1080, 8, 52, 0, 0);
  #1;
  check_case("Bottom boundary: last segment valid", PARA_LOC_LOCAL, PARA_LOC_LOCAL, PARA_LOC_LOCAL);

  @(posedge clk);
  apply_case(2'd1, 64, 1024, 1920, 1080, 8, 52, 0, 1);
  #1;
  check_case("Bottom boundary: left segment overflow", PARA_LOC_LOCAL, PARA_LOC_INVALID, PARA_LOC_LOCAL);

  @(posedge clk);
  apply_case(2'd1, 64, 1024, 1920, 1080, 8, 56, 0, 0);
  #1;
  check_case("TU origin beyond picture bottom", PARA_LOC_INVALID, PARA_LOC_INVALID, PARA_LOC_INVALID);

  @(posedge clk);
  apply_case(2'd1, 64, 64, 1920, 1080, 64, 8, 0, 0);
  #1;
  check_case("TU origin beyond CTU right", PARA_LOC_INVALID, PARA_LOC_INVALID, PARA_LOC_INVALID);

  @(posedge clk);
  apply_case(2'd3, 64, 64, 1920, 1080, 8, 8, 0, 0);
  #1;
  check_case("Invalid component ID", PARA_LOC_INVALID, PARA_LOC_INVALID, PARA_LOC_INVALID);

  $display("[PASS] ALL %0d INTRA_REF_AVAILABILITY UNIT TESTCASES", testcase_count);
  $finish;
end

endmodule: INTRA_REF_AVAILABILITY_TB
