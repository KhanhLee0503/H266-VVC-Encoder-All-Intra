//-----------------------------------------------------------
// Description: This module extracts hardware-oriented texture
// features from one 4x4 luma tile. Each input sample is a
// 10-bit unsigned value. The module calculates the sample sum,
// the squared-sample sum, and four directional variation values.
// The calculation is pipelined so one new tile can be accepted
// every clock cycle while maintaining a short combinational path.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_FEATURE_EXTRACTOR
#(
  parameter PARA_PIXEL_WD        = 10,
  parameter PARA_TILE_DATA_WD    = 160,
  parameter PARA_FEATURE_DATA_WD = 96
)
(
  input                                   I_CLK,
  input                                   I_RESETN,

  input                                   I_VALID,
  input      [PARA_TILE_DATA_WD-1:0]      I_TILE_DATA,

  output logic                            O_VALID,
  output logic [PARA_FEATURE_DATA_WD-1:0] O_FEATURE_DATA
);

logic [PARA_PIXEL_WD-1:0] w_pixel_00;
logic [PARA_PIXEL_WD-1:0] w_pixel_01;
logic [PARA_PIXEL_WD-1:0] w_pixel_02;
logic [PARA_PIXEL_WD-1:0] w_pixel_03;
logic [PARA_PIXEL_WD-1:0] w_pixel_10;
logic [PARA_PIXEL_WD-1:0] w_pixel_11;
logic [PARA_PIXEL_WD-1:0] w_pixel_12;
logic [PARA_PIXEL_WD-1:0] w_pixel_13;
logic [PARA_PIXEL_WD-1:0] w_pixel_20;
logic [PARA_PIXEL_WD-1:0] w_pixel_21;
logic [PARA_PIXEL_WD-1:0] w_pixel_22;
logic [PARA_PIXEL_WD-1:0] w_pixel_23;
logic [PARA_PIXEL_WD-1:0] w_pixel_30;
logic [PARA_PIXEL_WD-1:0] w_pixel_31;
logic [PARA_PIXEL_WD-1:0] w_pixel_32;
logic [PARA_PIXEL_WD-1:0] w_pixel_33;

logic [10:0] w_sum_pair_0;
logic [10:0] w_sum_pair_1;
logic [10:0] w_sum_pair_2;
logic [10:0] w_sum_pair_3;
logic [10:0] w_sum_pair_4;
logic [10:0] w_sum_pair_5;
logic [10:0] w_sum_pair_6;
logic [10:0] w_sum_pair_7;
logic [11:0] w_sum_quad_0;
logic [11:0] w_sum_quad_1;
logic [11:0] w_sum_quad_2;
logic [11:0] w_sum_quad_3;
logic [12:0] w_sum_half_0;
logic [12:0] w_sum_half_1;
logic [13:0] w_sum_total;

logic [19:0] w_square_00;
logic [19:0] w_square_01;
logic [19:0] w_square_02;
logic [19:0] w_square_03;
logic [19:0] w_square_10;
logic [19:0] w_square_11;
logic [19:0] w_square_12;
logic [19:0] w_square_13;
logic [19:0] w_square_20;
logic [19:0] w_square_21;
logic [19:0] w_square_22;
logic [19:0] w_square_23;
logic [19:0] w_square_30;
logic [19:0] w_square_31;
logic [19:0] w_square_32;
logic [19:0] w_square_33;

logic [19:0] r_square_00;
logic [19:0] r_square_01;
logic [19:0] r_square_02;
logic [19:0] r_square_03;
logic [19:0] r_square_10;
logic [19:0] r_square_11;
logic [19:0] r_square_12;
logic [19:0] r_square_13;
logic [19:0] r_square_20;
logic [19:0] r_square_21;
logic [19:0] r_square_22;
logic [19:0] r_square_23;
logic [19:0] r_square_30;
logic [19:0] r_square_31;
logic [19:0] r_square_32;
logic [19:0] r_square_33;

logic [20:0] w_sq_pair_0;
logic [20:0] w_sq_pair_1;
logic [20:0] w_sq_pair_2;
logic [20:0] w_sq_pair_3;
logic [20:0] w_sq_pair_4;
logic [20:0] w_sq_pair_5;
logic [20:0] w_sq_pair_6;
logic [20:0] w_sq_pair_7;
logic [21:0] w_sq_quad_0;
logic [21:0] w_sq_quad_1;
logic [21:0] w_sq_quad_2;
logic [21:0] w_sq_quad_3;
logic [22:0] w_sq_half_0;
logic [22:0] w_sq_half_1;
logic [23:0] w_sum_sq_total;

logic [PARA_PIXEL_WD-1:0] w_diff_h_01;
logic [PARA_PIXEL_WD-1:0] w_diff_h_02;
logic [PARA_PIXEL_WD-1:0] w_diff_h_11;
logic [PARA_PIXEL_WD-1:0] w_diff_h_12;
logic [PARA_PIXEL_WD-1:0] w_diff_h_21;
logic [PARA_PIXEL_WD-1:0] w_diff_h_22;

logic [PARA_PIXEL_WD-1:0] w_diff_v_01;
logic [PARA_PIXEL_WD-1:0] w_diff_v_02;
logic [PARA_PIXEL_WD-1:0] w_diff_v_11;
logic [PARA_PIXEL_WD-1:0] w_diff_v_12;
logic [PARA_PIXEL_WD-1:0] w_diff_v_21;
logic [PARA_PIXEL_WD-1:0] w_diff_v_22;

logic [PARA_PIXEL_WD-1:0] w_diff_dl_01;
logic [PARA_PIXEL_WD-1:0] w_diff_dl_02;
logic [PARA_PIXEL_WD-1:0] w_diff_dl_11;
logic [PARA_PIXEL_WD-1:0] w_diff_dl_12;
logic [PARA_PIXEL_WD-1:0] w_diff_dl_21;
logic [PARA_PIXEL_WD-1:0] w_diff_dl_22;

logic [PARA_PIXEL_WD-1:0] w_diff_dr_01;
logic [PARA_PIXEL_WD-1:0] w_diff_dr_02;
logic [PARA_PIXEL_WD-1:0] w_diff_dr_11;
logic [PARA_PIXEL_WD-1:0] w_diff_dr_12;
logic [PARA_PIXEL_WD-1:0] w_diff_dr_21;
logic [PARA_PIXEL_WD-1:0] w_diff_dr_22;

logic [PARA_PIXEL_WD-1:0] r_diff_h_01;
logic [PARA_PIXEL_WD-1:0] r_diff_h_02;
logic [PARA_PIXEL_WD-1:0] r_diff_h_11;
logic [PARA_PIXEL_WD-1:0] r_diff_h_12;
logic [PARA_PIXEL_WD-1:0] r_diff_h_21;
logic [PARA_PIXEL_WD-1:0] r_diff_h_22;

logic [PARA_PIXEL_WD-1:0] r_diff_v_01;
logic [PARA_PIXEL_WD-1:0] r_diff_v_02;
logic [PARA_PIXEL_WD-1:0] r_diff_v_11;
logic [PARA_PIXEL_WD-1:0] r_diff_v_12;
logic [PARA_PIXEL_WD-1:0] r_diff_v_21;
logic [PARA_PIXEL_WD-1:0] r_diff_v_22;

logic [PARA_PIXEL_WD-1:0] r_diff_dl_01;
logic [PARA_PIXEL_WD-1:0] r_diff_dl_02;
logic [PARA_PIXEL_WD-1:0] r_diff_dl_11;
logic [PARA_PIXEL_WD-1:0] r_diff_dl_12;
logic [PARA_PIXEL_WD-1:0] r_diff_dl_21;
logic [PARA_PIXEL_WD-1:0] r_diff_dl_22;

logic [PARA_PIXEL_WD-1:0] r_diff_dr_01;
logic [PARA_PIXEL_WD-1:0] r_diff_dr_02;
logic [PARA_PIXEL_WD-1:0] r_diff_dr_11;
logic [PARA_PIXEL_WD-1:0] r_diff_dr_12;
logic [PARA_PIXEL_WD-1:0] r_diff_dr_21;
logic [PARA_PIXEL_WD-1:0] r_diff_dr_22;

logic [10:0] w_dv_h_pair_0;
logic [10:0] w_dv_h_pair_1;
logic [10:0] w_dv_h_pair_2;
logic [11:0] w_dv_h_quad;
logic [12:0] w_dv_h;

logic [10:0] w_dv_v_pair_0;
logic [10:0] w_dv_v_pair_1;
logic [10:0] w_dv_v_pair_2;
logic [11:0] w_dv_v_quad;
logic [12:0] w_dv_v;

logic [10:0] w_dv_dl_pair_0;
logic [10:0] w_dv_dl_pair_1;
logic [10:0] w_dv_dl_pair_2;
logic [11:0] w_dv_dl_quad;
logic [12:0] w_dv_dl;

logic [10:0] w_dv_dr_pair_0;
logic [10:0] w_dv_dr_pair_1;
logic [10:0] w_dv_dr_pair_2;
logic [11:0] w_dv_dr_quad;
logic [12:0] w_dv_dr;

logic [13:0] r_sum_stage_1;
logic        r_valid_stage_1;
logic        r_valid_stage_2;
logic [PARA_FEATURE_DATA_WD-1:0] r_feature_data;

// The input tile is stored in raster order. Bits [9:0] contain
// pixel (0,0), bits [19:10] contain pixel (0,1), and the same
// pattern continues across all sixteen pixels.
assign w_pixel_00 = I_TILE_DATA[9:0];
assign w_pixel_01 = I_TILE_DATA[19:10];
assign w_pixel_02 = I_TILE_DATA[29:20];
assign w_pixel_03 = I_TILE_DATA[39:30];
assign w_pixel_10 = I_TILE_DATA[49:40];
assign w_pixel_11 = I_TILE_DATA[59:50];
assign w_pixel_12 = I_TILE_DATA[69:60];
assign w_pixel_13 = I_TILE_DATA[79:70];
assign w_pixel_20 = I_TILE_DATA[89:80];
assign w_pixel_21 = I_TILE_DATA[99:90];
assign w_pixel_22 = I_TILE_DATA[109:100];
assign w_pixel_23 = I_TILE_DATA[119:110];
assign w_pixel_30 = I_TILE_DATA[129:120];
assign w_pixel_31 = I_TILE_DATA[139:130];
assign w_pixel_32 = I_TILE_DATA[149:140];
assign w_pixel_33 = I_TILE_DATA[159:150];

// A balanced adder tree calculates the sum of all sixteen samples.
assign w_sum_pair_0 = {1'b0, w_pixel_00} + {1'b0, w_pixel_01};
assign w_sum_pair_1 = {1'b0, w_pixel_02} + {1'b0, w_pixel_03};
assign w_sum_pair_2 = {1'b0, w_pixel_10} + {1'b0, w_pixel_11};
assign w_sum_pair_3 = {1'b0, w_pixel_12} + {1'b0, w_pixel_13};
assign w_sum_pair_4 = {1'b0, w_pixel_20} + {1'b0, w_pixel_21};
assign w_sum_pair_5 = {1'b0, w_pixel_22} + {1'b0, w_pixel_23};
assign w_sum_pair_6 = {1'b0, w_pixel_30} + {1'b0, w_pixel_31};
assign w_sum_pair_7 = {1'b0, w_pixel_32} + {1'b0, w_pixel_33};

assign w_sum_quad_0 = {1'b0, w_sum_pair_0} + {1'b0, w_sum_pair_1};
assign w_sum_quad_1 = {1'b0, w_sum_pair_2} + {1'b0, w_sum_pair_3};
assign w_sum_quad_2 = {1'b0, w_sum_pair_4} + {1'b0, w_sum_pair_5};
assign w_sum_quad_3 = {1'b0, w_sum_pair_6} + {1'b0, w_sum_pair_7};

assign w_sum_half_0 = {1'b0, w_sum_quad_0} + {1'b0, w_sum_quad_1};
assign w_sum_half_1 = {1'b0, w_sum_quad_2} + {1'b0, w_sum_quad_3};
assign w_sum_total  = {1'b0, w_sum_half_0} + {1'b0, w_sum_half_1};

// The square products are registered before the reduction tree. The
// zero extension preserves the full 20-bit square result explicitly.
assign w_square_00 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_00} * w_pixel_00;
assign w_square_01 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_01} * w_pixel_01;
assign w_square_02 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_02} * w_pixel_02;
assign w_square_03 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_03} * w_pixel_03;
assign w_square_10 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_10} * w_pixel_10;
assign w_square_11 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_11} * w_pixel_11;
assign w_square_12 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_12} * w_pixel_12;
assign w_square_13 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_13} * w_pixel_13;
assign w_square_20 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_20} * w_pixel_20;
assign w_square_21 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_21} * w_pixel_21;
assign w_square_22 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_22} * w_pixel_22;
assign w_square_23 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_23} * w_pixel_23;
assign w_square_30 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_30} * w_pixel_30;
assign w_square_31 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_31} * w_pixel_31;
assign w_square_32 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_32} * w_pixel_32;
assign w_square_33 = {{PARA_PIXEL_WD{1'b0}}, w_pixel_33} * w_pixel_33;

// Six base pixels are located at rows zero through two and columns
// one and two. Each absolute difference follows the intended
// down-left, vertical, down-right, or horizontal direction.
assign w_diff_h_01 = (w_pixel_02 >= w_pixel_01) ?
                     (w_pixel_02 - w_pixel_01) :
                     (w_pixel_01 - w_pixel_02);
assign w_diff_h_02 = (w_pixel_03 >= w_pixel_02) ?
                     (w_pixel_03 - w_pixel_02) :
                     (w_pixel_02 - w_pixel_03);
assign w_diff_h_11 = (w_pixel_12 >= w_pixel_11) ?
                     (w_pixel_12 - w_pixel_11) :
                     (w_pixel_11 - w_pixel_12);
assign w_diff_h_12 = (w_pixel_13 >= w_pixel_12) ?
                     (w_pixel_13 - w_pixel_12) :
                     (w_pixel_12 - w_pixel_13);
assign w_diff_h_21 = (w_pixel_22 >= w_pixel_21) ?
                     (w_pixel_22 - w_pixel_21) :
                     (w_pixel_21 - w_pixel_22);
assign w_diff_h_22 = (w_pixel_23 >= w_pixel_22) ?
                     (w_pixel_23 - w_pixel_22) :
                     (w_pixel_22 - w_pixel_23);

assign w_diff_v_01 = (w_pixel_11 >= w_pixel_01) ?
                     (w_pixel_11 - w_pixel_01) :
                     (w_pixel_01 - w_pixel_11);
assign w_diff_v_02 = (w_pixel_12 >= w_pixel_02) ?
                     (w_pixel_12 - w_pixel_02) :
                     (w_pixel_02 - w_pixel_12);
assign w_diff_v_11 = (w_pixel_21 >= w_pixel_11) ?
                     (w_pixel_21 - w_pixel_11) :
                     (w_pixel_11 - w_pixel_21);
assign w_diff_v_12 = (w_pixel_22 >= w_pixel_12) ?
                     (w_pixel_22 - w_pixel_12) :
                     (w_pixel_12 - w_pixel_22);
assign w_diff_v_21 = (w_pixel_31 >= w_pixel_21) ?
                     (w_pixel_31 - w_pixel_21) :
                     (w_pixel_21 - w_pixel_31);
assign w_diff_v_22 = (w_pixel_32 >= w_pixel_22) ?
                     (w_pixel_32 - w_pixel_22) :
                     (w_pixel_22 - w_pixel_32);

assign w_diff_dl_01 = (w_pixel_10 >= w_pixel_01) ?
                      (w_pixel_10 - w_pixel_01) :
                      (w_pixel_01 - w_pixel_10);
assign w_diff_dl_02 = (w_pixel_11 >= w_pixel_02) ?
                      (w_pixel_11 - w_pixel_02) :
                      (w_pixel_02 - w_pixel_11);
assign w_diff_dl_11 = (w_pixel_20 >= w_pixel_11) ?
                      (w_pixel_20 - w_pixel_11) :
                      (w_pixel_11 - w_pixel_20);
assign w_diff_dl_12 = (w_pixel_21 >= w_pixel_12) ?
                      (w_pixel_21 - w_pixel_12) :
                      (w_pixel_12 - w_pixel_21);
assign w_diff_dl_21 = (w_pixel_30 >= w_pixel_21) ?
                      (w_pixel_30 - w_pixel_21) :
                      (w_pixel_21 - w_pixel_30);
assign w_diff_dl_22 = (w_pixel_31 >= w_pixel_22) ?
                      (w_pixel_31 - w_pixel_22) :
                      (w_pixel_22 - w_pixel_31);

assign w_diff_dr_01 = (w_pixel_12 >= w_pixel_01) ?
                      (w_pixel_12 - w_pixel_01) :
                      (w_pixel_01 - w_pixel_12);
assign w_diff_dr_02 = (w_pixel_13 >= w_pixel_02) ?
                      (w_pixel_13 - w_pixel_02) :
                      (w_pixel_02 - w_pixel_13);
assign w_diff_dr_11 = (w_pixel_22 >= w_pixel_11) ?
                      (w_pixel_22 - w_pixel_11) :
                      (w_pixel_11 - w_pixel_22);
assign w_diff_dr_12 = (w_pixel_23 >= w_pixel_12) ?
                      (w_pixel_23 - w_pixel_12) :
                      (w_pixel_12 - w_pixel_23);
assign w_diff_dr_21 = (w_pixel_32 >= w_pixel_21) ?
                      (w_pixel_32 - w_pixel_21) :
                      (w_pixel_21 - w_pixel_32);
assign w_diff_dr_22 = (w_pixel_33 >= w_pixel_22) ?
                      (w_pixel_33 - w_pixel_22) :
                      (w_pixel_22 - w_pixel_33);

// The first pipeline stage stores multiplier results and absolute
// differences. The datapath registers do not need reset because the
// valid pipeline qualifies whether their values are meaningful.
always_ff @ (posedge I_CLK) begin
  if (I_VALID) begin
    r_sum_stage_1 <= w_sum_total;

    r_square_00 <= w_square_00;
    r_square_01 <= w_square_01;
    r_square_02 <= w_square_02;
    r_square_03 <= w_square_03;
    r_square_10 <= w_square_10;
    r_square_11 <= w_square_11;
    r_square_12 <= w_square_12;
    r_square_13 <= w_square_13;
    r_square_20 <= w_square_20;
    r_square_21 <= w_square_21;
    r_square_22 <= w_square_22;
    r_square_23 <= w_square_23;
    r_square_30 <= w_square_30;
    r_square_31 <= w_square_31;
    r_square_32 <= w_square_32;
    r_square_33 <= w_square_33;

    r_diff_h_01 <= w_diff_h_01;
    r_diff_h_02 <= w_diff_h_02;
    r_diff_h_11 <= w_diff_h_11;
    r_diff_h_12 <= w_diff_h_12;
    r_diff_h_21 <= w_diff_h_21;
    r_diff_h_22 <= w_diff_h_22;

    r_diff_v_01 <= w_diff_v_01;
    r_diff_v_02 <= w_diff_v_02;
    r_diff_v_11 <= w_diff_v_11;
    r_diff_v_12 <= w_diff_v_12;
    r_diff_v_21 <= w_diff_v_21;
    r_diff_v_22 <= w_diff_v_22;

    r_diff_dl_01 <= w_diff_dl_01;
    r_diff_dl_02 <= w_diff_dl_02;
    r_diff_dl_11 <= w_diff_dl_11;
    r_diff_dl_12 <= w_diff_dl_12;
    r_diff_dl_21 <= w_diff_dl_21;
    r_diff_dl_22 <= w_diff_dl_22;

    r_diff_dr_01 <= w_diff_dr_01;
    r_diff_dr_02 <= w_diff_dr_02;
    r_diff_dr_11 <= w_diff_dr_11;
    r_diff_dr_12 <= w_diff_dr_12;
    r_diff_dr_21 <= w_diff_dr_21;
    r_diff_dr_22 <= w_diff_dr_22;
  end
end

// The square reduction tree uses explicit width extension at each
// level so the 24-bit accumulated result cannot overflow.
assign w_sq_pair_0 = {1'b0, r_square_00} + {1'b0, r_square_01};
assign w_sq_pair_1 = {1'b0, r_square_02} + {1'b0, r_square_03};
assign w_sq_pair_2 = {1'b0, r_square_10} + {1'b0, r_square_11};
assign w_sq_pair_3 = {1'b0, r_square_12} + {1'b0, r_square_13};
assign w_sq_pair_4 = {1'b0, r_square_20} + {1'b0, r_square_21};
assign w_sq_pair_5 = {1'b0, r_square_22} + {1'b0, r_square_23};
assign w_sq_pair_6 = {1'b0, r_square_30} + {1'b0, r_square_31};
assign w_sq_pair_7 = {1'b0, r_square_32} + {1'b0, r_square_33};

assign w_sq_quad_0 = {1'b0, w_sq_pair_0} + {1'b0, w_sq_pair_1};
assign w_sq_quad_1 = {1'b0, w_sq_pair_2} + {1'b0, w_sq_pair_3};
assign w_sq_quad_2 = {1'b0, w_sq_pair_4} + {1'b0, w_sq_pair_5};
assign w_sq_quad_3 = {1'b0, w_sq_pair_6} + {1'b0, w_sq_pair_7};

assign w_sq_half_0 = {1'b0, w_sq_quad_0} + {1'b0, w_sq_quad_1};
assign w_sq_half_1 = {1'b0, w_sq_quad_2} + {1'b0, w_sq_quad_3};
assign w_sum_sq_total = {1'b0, w_sq_half_0} + {1'b0, w_sq_half_1};

// Each directional variation is the sum of six absolute differences.
assign w_dv_h_pair_0 = {1'b0, r_diff_h_01} + {1'b0, r_diff_h_02};
assign w_dv_h_pair_1 = {1'b0, r_diff_h_11} + {1'b0, r_diff_h_12};
assign w_dv_h_pair_2 = {1'b0, r_diff_h_21} + {1'b0, r_diff_h_22};
assign w_dv_h_quad   = {1'b0, w_dv_h_pair_0} + {1'b0, w_dv_h_pair_1};
assign w_dv_h        = {1'b0, w_dv_h_quad} + {{2{1'b0}}, w_dv_h_pair_2};

assign w_dv_v_pair_0 = {1'b0, r_diff_v_01} + {1'b0, r_diff_v_02};
assign w_dv_v_pair_1 = {1'b0, r_diff_v_11} + {1'b0, r_diff_v_12};
assign w_dv_v_pair_2 = {1'b0, r_diff_v_21} + {1'b0, r_diff_v_22};
assign w_dv_v_quad   = {1'b0, w_dv_v_pair_0} + {1'b0, w_dv_v_pair_1};
assign w_dv_v        = {1'b0, w_dv_v_quad} + {{2{1'b0}}, w_dv_v_pair_2};

assign w_dv_dl_pair_0 = {1'b0, r_diff_dl_01} + {1'b0, r_diff_dl_02};
assign w_dv_dl_pair_1 = {1'b0, r_diff_dl_11} + {1'b0, r_diff_dl_12};
assign w_dv_dl_pair_2 = {1'b0, r_diff_dl_21} + {1'b0, r_diff_dl_22};
assign w_dv_dl_quad   = {1'b0, w_dv_dl_pair_0} + {1'b0, w_dv_dl_pair_1};
assign w_dv_dl        = {1'b0, w_dv_dl_quad} + {{2{1'b0}}, w_dv_dl_pair_2};

assign w_dv_dr_pair_0 = {1'b0, r_diff_dr_01} + {1'b0, r_diff_dr_02};
assign w_dv_dr_pair_1 = {1'b0, r_diff_dr_11} + {1'b0, r_diff_dr_12};
assign w_dv_dr_pair_2 = {1'b0, r_diff_dr_21} + {1'b0, r_diff_dr_22};
assign w_dv_dr_quad   = {1'b0, w_dv_dr_pair_0} + {1'b0, w_dv_dr_pair_1};
assign w_dv_dr        = {1'b0, w_dv_dr_quad} + {{2{1'b0}}, w_dv_dr_pair_2};

// The valid pipeline is reset because it qualifies all datapath
// registers and defines when the feature output is meaningful.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_valid_stage_1 <= 1'b0;
    r_valid_stage_2 <= 1'b0;
  end
  else begin
    r_valid_stage_1 <= I_VALID;
    r_valid_stage_2 <= r_valid_stage_1;
  end
end

// The second pipeline stage stores the final 96-bit feature entry.
// The feature layout is:
// [95:90] Reserved and driven to zero.
// [89:76] Sum of sixteen luma samples.
// [75:52] Sum of sixteen squared luma samples.
// [51:39] Horizontal directional variation.
// [38:26] Vertical directional variation.
// [25:13] Down-left directional variation.
// [12:0]  Down-right directional variation.
always_ff @ (posedge I_CLK) begin
  if (r_valid_stage_1) begin
    r_feature_data <= {
      6'd0,
      r_sum_stage_1,
      w_sum_sq_total,
      w_dv_h,
      w_dv_v,
      w_dv_dl,
      w_dv_dr
    };
  end
end

assign O_VALID        = r_valid_stage_2;
assign O_FEATURE_DATA = r_feature_data;

endmodule: PARTITION_FEATURE_EXTRACTOR
