//-----------------------------------------------------------
// Description: This module implements the VVC intra Planar prediction core.
// The core accepts one transform block at a time and generates four base
// Planar prediction samples per cycle in raster-scan order. The reference
// samples are selected before this module, so this core does not choose
// between filtered and unfiltered references. Four parallel prediction
// lanes use a four-stage elastic pipeline and support ready/valid
// backpressure at the output interface.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PLANAR_PRED_CORE #(
  parameter PARA_PIXEL_WD = 10,
  parameter PARA_LANE_NUM = 4
)(
  input                                            I_CLK,
  input                                            I_RESETN,

  input                                            I_VALID,
  output logic                                     O_READY,

  input  [2:0]                                     I_TU_WIDTH_CODE,
  input  [2:0]                                     I_TU_HEIGHT_CODE,
  input  [(33*PARA_PIXEL_WD)-1:0]                  I_TOP_REF,
  input  [(33*PARA_PIXEL_WD)-1:0]                  I_LEFT_REF,

  output logic                                     O_VALID,
  input                                            I_READY,
  output logic [(PARA_LANE_NUM*PARA_PIXEL_WD)-1:0] O_PRED_SAMPLE,
  output logic [PARA_LANE_NUM-1:0]                 O_LANE_VALID,
  output logic [4:0]                               O_X_BASE,
  output logic [4:0]                               O_Y,
  output logic                                     O_LAST
);

localparam PARA_REF_NUM          = 33;
localparam PARA_COORD_WD         = 6;
localparam PARA_MAX_SHIFT        = 5;
localparam PARA_COORD_EXT_WD     = PARA_COORD_WD + 1;
localparam PARA_DELTA_WD         = PARA_PIXEL_WD + 1;
localparam PARA_WEIGHT_WD        = PARA_COORD_WD;
localparam PARA_WEIGHT_SIGNED_WD = PARA_WEIGHT_WD + 1;
localparam PARA_MULT_WD          = PARA_DELTA_WD + PARA_WEIGHT_SIGNED_WD;
localparam PARA_BASE_WD          = PARA_MULT_WD + 1;
localparam PARA_PART_WD          = PARA_BASE_WD + PARA_MAX_SHIFT;
localparam PARA_NUM_WD           = PARA_PART_WD + 2;
localparam PARA_FINAL_SHIFT_WD   = 4;

logic [PARA_COORD_WD-1:0] w_input_width;
logic [PARA_COORD_WD-1:0] w_input_height;
logic                      w_input_accept;

logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] r_top_ref;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] r_left_ref;
logic [2:0]                               r_width_code;
logic [2:0]                               r_height_code;
logic [PARA_COORD_WD-1:0]                r_width;
logic [PARA_COORD_WD-1:0]                r_height;
logic                                      r_issue_active;
logic [PARA_COORD_WD-1:0]                 r_x_base;
logic [PARA_COORD_WD-1:0]                 r_y;

logic [PARA_COORD_WD:0] w_x_next_ext;
logic                    w_end_of_row;
logic                    w_last_issue;
logic                    w_issue_fire;
logic [PARA_LANE_NUM-1:0] w_issue_lane_valid;
logic [PARA_COORD_WD-1:0] w_lane_x [0:PARA_LANE_NUM-1];
logic [PARA_COORD_WD-1:0] w_lane_x_safe [0:PARA_LANE_NUM-1];
logic [PARA_PIXEL_WD-1:0] w_top_sample [0:PARA_LANE_NUM-1];
logic [PARA_PIXEL_WD-1:0] w_left_sample;
logic [PARA_PIXEL_WD-1:0] w_top_right;
logic [PARA_PIXEL_WD-1:0] w_bottom_left;
logic [PARA_WEIGHT_WD-1:0] w_y_plus_1;

logic signed [PARA_DELTA_WD-1:0] w_delta_h_shared;
logic signed [PARA_BASE_WD-1:0]  w_left_sample_ext;
logic signed [PARA_BASE_WD-1:0]  w_left_scaled_shared;
logic signed [PARA_DELTA_WD-1:0] w_delta_v [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0]  w_top_sample_ext [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0]  w_top_scaled [0:PARA_LANE_NUM-1];
logic [PARA_WEIGHT_WD-1:0]       w_x_plus_1 [0:PARA_LANE_NUM-1];

logic signed [PARA_DELTA_WD-1:0] r_stage1_delta_h_shared;
logic signed [PARA_BASE_WD-1:0]  r_stage1_left_scaled_shared;
logic [PARA_WEIGHT_WD-1:0]       r_stage1_y_plus_1;
logic signed [PARA_DELTA_WD-1:0] r_stage1_delta_v [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0]  r_stage1_top_scaled [0:PARA_LANE_NUM-1];
logic [PARA_WEIGHT_WD-1:0]       r_stage1_x_plus_1 [0:PARA_LANE_NUM-1];
logic [2:0]                       r_stage1_width_code;
logic [2:0]                       r_stage1_height_code;
logic [PARA_COORD_WD-1:0]        r_stage1_x_base;
logic [PARA_COORD_WD-1:0]        r_stage1_y;
logic [PARA_LANE_NUM-1:0]        r_stage1_lane_valid;
logic                              r_stage1_last;
logic                              r_stage1_valid;

logic signed [PARA_WEIGHT_SIGNED_WD-1:0] w_stage1_y_weight;
logic signed [PARA_WEIGHT_SIGNED_WD-1:0] w_stage1_x_weight [0:PARA_LANE_NUM-1];
logic signed [PARA_MULT_WD-1:0]          w_mul_v [0:PARA_LANE_NUM-1];
logic signed [PARA_MULT_WD-1:0]          w_mul_h [0:PARA_LANE_NUM-1];

logic signed [PARA_MULT_WD-1:0] r_stage2_mul_v [0:PARA_LANE_NUM-1];
logic signed [PARA_MULT_WD-1:0] r_stage2_mul_h [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0] r_stage2_top_scaled [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0] r_stage2_left_scaled_shared;
logic [2:0]                      r_stage2_width_code;
logic [2:0]                      r_stage2_height_code;
logic [PARA_COORD_WD-1:0]       r_stage2_x_base;
logic [PARA_COORD_WD-1:0]       r_stage2_y;
logic [PARA_LANE_NUM-1:0]       r_stage2_lane_valid;
logic                             r_stage2_last;
logic                             r_stage2_valid;

logic signed [PARA_BASE_WD-1:0] w_mul_v_ext [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0] w_mul_h_ext [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0] w_v_base [0:PARA_LANE_NUM-1];
logic signed [PARA_BASE_WD-1:0] w_h_base [0:PARA_LANE_NUM-1];
logic signed [PARA_PART_WD-1:0] w_v_base_ext [0:PARA_LANE_NUM-1];
logic signed [PARA_PART_WD-1:0] w_h_base_ext [0:PARA_LANE_NUM-1];
logic signed [PARA_PART_WD-1:0] w_pred_v [0:PARA_LANE_NUM-1];
logic signed [PARA_PART_WD-1:0] w_pred_h [0:PARA_LANE_NUM-1];
logic [PARA_FINAL_SHIFT_WD-1:0] w_final_shift;
logic [PARA_NUM_WD-1:0]         w_wh_round;

logic signed [PARA_PART_WD-1:0] r_stage3_pred_v [0:PARA_LANE_NUM-1];
logic signed [PARA_PART_WD-1:0] r_stage3_pred_h [0:PARA_LANE_NUM-1];
logic [PARA_FINAL_SHIFT_WD-1:0] r_stage3_final_shift;
logic [PARA_NUM_WD-1:0]         r_stage3_wh_round;
logic [PARA_COORD_WD-1:0]       r_stage3_x_base;
logic [PARA_COORD_WD-1:0]       r_stage3_y;
logic [PARA_LANE_NUM-1:0]       r_stage3_lane_valid;
logic                             r_stage3_last;
logic                             r_stage3_valid;

logic signed [PARA_NUM_WD-1:0] w_pred_v_ext [0:PARA_LANE_NUM-1];
logic signed [PARA_NUM_WD-1:0] w_pred_h_ext [0:PARA_LANE_NUM-1];
logic signed [PARA_NUM_WD-1:0] w_wh_round_signed;
logic signed [PARA_NUM_WD-1:0] w_numerator [0:PARA_LANE_NUM-1];
logic signed [PARA_NUM_WD-1:0] w_shifted_prediction [0:PARA_LANE_NUM-1];
logic [PARA_PIXEL_WD-1:0]      w_prediction [0:PARA_LANE_NUM-1];

logic [PARA_PIXEL_WD-1:0] r_stage4_prediction [0:PARA_LANE_NUM-1];
logic [PARA_COORD_WD-1:0] r_stage4_x_base;
logic [PARA_COORD_WD-1:0] r_stage4_y;
logic [PARA_LANE_NUM-1:0] r_stage4_lane_valid;
logic                       r_stage4_last;
logic                       r_stage4_valid;

logic w_stage1_ready;
logic w_stage2_ready;
logic w_stage3_ready;
logic w_stage4_ready;

genvar gen_lane;
genvar gen_stage1_reg;
genvar gen_stage2_reg;
genvar gen_stage3_reg;
genvar gen_stage4_reg;
genvar gen_output;

// Decode the transform-block width into the numeric sample count.
always_comb begin
  w_input_width = '0;

  unique casez (I_TU_WIDTH_CODE)
    3'd2: begin
      w_input_width = 6'd4;
    end
    3'd3: begin
      w_input_width = 6'd8;
    end
    3'd4: begin
      w_input_width = 6'd16;
    end
    3'd5: begin
      w_input_width = 6'd32;
    end
    default: begin
      w_input_width = '0;
    end
  endcase
end

// Decode the transform-block height into the numeric sample count.
always_comb begin
  w_input_height = '0;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_input_height = 6'd4;
    end
    3'd3: begin
      w_input_height = 6'd8;
    end
    3'd4: begin
      w_input_height = 6'd16;
    end
    3'd5: begin
      w_input_height = 6'd32;
    end
    default: begin
      w_input_height = '0;
    end
  endcase
end

// Backpressure propagates from the output register toward the first pipeline stage.
assign w_stage4_ready = !r_stage4_valid || I_READY;
assign w_stage3_ready = !r_stage3_valid || w_stage4_ready;
assign w_stage2_ready = !r_stage2_valid || w_stage3_ready;
assign w_stage1_ready = !r_stage1_valid || w_stage2_ready;

// A new block is accepted only when the previous block and pipeline are empty.
assign O_READY =
  !r_issue_active &&
  !r_stage1_valid &&
  !r_stage2_valid &&
  !r_stage3_valid &&
  !r_stage4_valid;

assign w_input_accept = I_VALID && O_READY;
assign w_issue_fire = r_issue_active && w_stage1_ready;

// The raster controller advances four horizontal samples for every issued group.
assign w_x_next_ext = {1'b0, r_x_base} + PARA_COORD_EXT_WD'(PARA_LANE_NUM);
assign w_end_of_row = w_x_next_ext >= {1'b0, r_width};
assign w_last_issue = w_end_of_row && (r_y == (r_height - PARA_COORD_WD'(1)));

// The output payload is held in the fourth pipeline stage during backpressure.
assign O_VALID = r_stage4_valid;
assign O_LANE_VALID = r_stage4_lane_valid;
assign O_X_BASE = r_stage4_x_base[4:0];
assign O_Y = r_stage4_y[4:0];
assign O_LAST = r_stage4_last;

// The reference buffer and transform-block geometry are captured for one block transaction.
always_ff @ (posedge I_CLK) begin
  if (w_input_accept) begin
    r_top_ref <= I_TOP_REF;
    r_left_ref <= I_LEFT_REF;
    r_width_code <= I_TU_WIDTH_CODE;
    r_height_code <= I_TU_HEIGHT_CODE;
    r_width <= w_input_width;
    r_height <= w_input_height;
  end
end

// The issue-active flag controls the raster-scan transaction for the current block.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_issue_active <= 1'b0;
  else if (w_input_accept)
    r_issue_active <= 1'b1;
  else if (w_issue_fire && w_last_issue)
    r_issue_active <= 1'b0;
end

// The raster counters advance only when the first pipeline stage accepts a prediction group.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_x_base <= '0;
    r_y <= '0;
  end
  else if (w_input_accept) begin
    r_x_base <= '0;
    r_y <= '0;
  end
  else if (w_issue_fire) begin
    if (w_end_of_row) begin
      r_x_base <= '0;
      if (!w_last_issue)
        r_y <= r_y + PARA_COORD_WD'(1);
    end
    else begin
      r_x_base <= r_x_base + PARA_COORD_WD'(PARA_LANE_NUM);
    end
  end
end

// The row-shared reference samples are selected from the captured reference vectors.
assign w_left_sample =
  r_left_ref[(r_y*PARA_PIXEL_WD) +: PARA_PIXEL_WD];

assign w_top_right =
  r_top_ref[(r_width*PARA_PIXEL_WD) +: PARA_PIXEL_WD];

assign w_bottom_left =
  r_left_ref[(r_height*PARA_PIXEL_WD) +: PARA_PIXEL_WD];

assign w_y_plus_1 = r_y + PARA_WEIGHT_WD'(1);

// The horizontal delta and left scaling are shared by all four lanes in one raster group.
assign w_delta_h_shared =
  $signed({1'b0, w_top_right}) -
  $signed({1'b0, w_left_sample});

assign w_left_sample_ext =
  $signed({{(PARA_BASE_WD-PARA_PIXEL_WD){1'b0}}, w_left_sample});

assign w_left_scaled_shared =
  w_left_sample_ext <<< r_width_code;

// Each lane selects one top reference sample and prepares the first-stage arithmetic.
generate
  for (gen_lane = 0; gen_lane < PARA_LANE_NUM; gen_lane = gen_lane + 1) begin: GEN_LANE_INPUT
    assign w_lane_x[gen_lane] =
      r_x_base + PARA_COORD_WD'(gen_lane);

    assign w_issue_lane_valid[gen_lane] =
      w_lane_x[gen_lane] < r_width;

    assign w_lane_x_safe[gen_lane] =
      w_issue_lane_valid[gen_lane] ? w_lane_x[gen_lane] : '0;

    assign w_top_sample[gen_lane] =
      r_top_ref[(w_lane_x_safe[gen_lane]*PARA_PIXEL_WD) +: PARA_PIXEL_WD];

    assign w_delta_v[gen_lane] =
      $signed({1'b0, w_bottom_left}) -
      $signed({1'b0, w_top_sample[gen_lane]});

    assign w_top_sample_ext[gen_lane] =
      $signed({{(PARA_BASE_WD-PARA_PIXEL_WD){1'b0}}, w_top_sample[gen_lane]});

    assign w_top_scaled[gen_lane] =
      w_top_sample_ext[gen_lane] <<< r_height_code;

    assign w_x_plus_1[gen_lane] =
      w_lane_x[gen_lane] + PARA_WEIGHT_WD'(1);
  end
endgenerate

// The first-stage valid register qualifies the delta and power-of-two scaling results.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage1_valid <= 1'b0;
  else if (w_stage1_ready)
    r_stage1_valid <= r_issue_active;
end

// The row-shared first-stage registers do not require reset because valid qualifies them.
always_ff @ (posedge I_CLK) begin
  if (w_stage1_ready && r_issue_active) begin
    r_stage1_delta_h_shared <= w_delta_h_shared;
    r_stage1_left_scaled_shared <= w_left_scaled_shared;
    r_stage1_y_plus_1 <= w_y_plus_1;
    r_stage1_width_code <= r_width_code;
    r_stage1_height_code <= r_height_code;
    r_stage1_x_base <= r_x_base;
    r_stage1_y <= r_y;
    r_stage1_lane_valid <= w_issue_lane_valid;
    r_stage1_last <= w_last_issue;
  end
end

generate
  for (gen_stage1_reg = 0; gen_stage1_reg < PARA_LANE_NUM; gen_stage1_reg = gen_stage1_reg + 1) begin: GEN_STAGE1_REG
    always_ff @ (posedge I_CLK) begin
      if (w_stage1_ready && r_issue_active) begin
        r_stage1_delta_v[gen_stage1_reg] <= w_delta_v[gen_stage1_reg];
        r_stage1_top_scaled[gen_stage1_reg] <= w_top_scaled[gen_stage1_reg];
        r_stage1_x_plus_1[gen_stage1_reg] <= w_x_plus_1[gen_stage1_reg];
      end
    end
  end
endgenerate

// The second stage contains the two signed dynamic multipliers in each prediction lane.
assign w_stage1_y_weight =
  $signed({1'b0, r_stage1_y_plus_1});

generate
  for (gen_lane = 0; gen_lane < PARA_LANE_NUM; gen_lane = gen_lane + 1) begin: GEN_STAGE2_MULT
    assign w_stage1_x_weight[gen_lane] =
      $signed({1'b0, r_stage1_x_plus_1[gen_lane]});

    assign w_mul_v[gen_lane] =
      r_stage1_delta_v[gen_lane] * w_stage1_y_weight;

    assign w_mul_h[gen_lane] =
      r_stage1_delta_h_shared * w_stage1_x_weight[gen_lane];
  end
endgenerate

// The second-stage valid register qualifies the multiplier results.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage2_valid <= 1'b0;
  else if (w_stage2_ready)
    r_stage2_valid <= r_stage1_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage2_ready && r_stage1_valid) begin
    r_stage2_left_scaled_shared <= r_stage1_left_scaled_shared;
    r_stage2_width_code <= r_stage1_width_code;
    r_stage2_height_code <= r_stage1_height_code;
    r_stage2_x_base <= r_stage1_x_base;
    r_stage2_y <= r_stage1_y;
    r_stage2_lane_valid <= r_stage1_lane_valid;
    r_stage2_last <= r_stage1_last;
  end
end

generate
  for (gen_stage2_reg = 0; gen_stage2_reg < PARA_LANE_NUM; gen_stage2_reg = gen_stage2_reg + 1) begin: GEN_STAGE2_REG
    always_ff @ (posedge I_CLK) begin
      if (w_stage2_ready && r_stage1_valid) begin
        r_stage2_mul_v[gen_stage2_reg] <= w_mul_v[gen_stage2_reg];
        r_stage2_mul_h[gen_stage2_reg] <= w_mul_h[gen_stage2_reg];
        r_stage2_top_scaled[gen_stage2_reg] <= r_stage1_top_scaled[gen_stage2_reg];
      end
    end
  end
endgenerate

// The third stage forms the vertical and horizontal Planar terms and applies power-of-two scaling.
assign w_final_shift =
  {1'b0, r_stage2_width_code} +
  {1'b0, r_stage2_height_code} +
  PARA_FINAL_SHIFT_WD'(1);

assign w_wh_round =
  PARA_NUM_WD'(1) <<
  ({1'b0, r_stage2_width_code} + {1'b0, r_stage2_height_code});

generate
  for (gen_lane = 0; gen_lane < PARA_LANE_NUM; gen_lane = gen_lane + 1) begin: GEN_STAGE3_ARITH
    assign w_mul_v_ext[gen_lane] =
      $signed({{(PARA_BASE_WD-PARA_MULT_WD){r_stage2_mul_v[gen_lane][PARA_MULT_WD-1]}},
               r_stage2_mul_v[gen_lane]});

    assign w_mul_h_ext[gen_lane] =
      $signed({{(PARA_BASE_WD-PARA_MULT_WD){r_stage2_mul_h[gen_lane][PARA_MULT_WD-1]}},
               r_stage2_mul_h[gen_lane]});

    assign w_v_base[gen_lane] =
      r_stage2_top_scaled[gen_lane] +
      w_mul_v_ext[gen_lane];

    assign w_h_base[gen_lane] =
      r_stage2_left_scaled_shared +
      w_mul_h_ext[gen_lane];

    assign w_v_base_ext[gen_lane] =
      $signed({{(PARA_PART_WD-PARA_BASE_WD){w_v_base[gen_lane][PARA_BASE_WD-1]}},
               w_v_base[gen_lane]});

    assign w_h_base_ext[gen_lane] =
      $signed({{(PARA_PART_WD-PARA_BASE_WD){w_h_base[gen_lane][PARA_BASE_WD-1]}},
               w_h_base[gen_lane]});

    assign w_pred_v[gen_lane] =
      w_v_base_ext[gen_lane] <<< r_stage2_width_code;

    assign w_pred_h[gen_lane] =
      w_h_base_ext[gen_lane] <<< r_stage2_height_code;
  end
endgenerate

// The third-stage valid register qualifies the scaled Planar components.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage3_valid <= 1'b0;
  else if (w_stage3_ready)
    r_stage3_valid <= r_stage2_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage3_ready && r_stage2_valid) begin
    r_stage3_final_shift <= w_final_shift;
    r_stage3_wh_round <= w_wh_round;
    r_stage3_x_base <= r_stage2_x_base;
    r_stage3_y <= r_stage2_y;
    r_stage3_lane_valid <= r_stage2_lane_valid;
    r_stage3_last <= r_stage2_last;
  end
end

generate
  for (gen_stage3_reg = 0; gen_stage3_reg < PARA_LANE_NUM; gen_stage3_reg = gen_stage3_reg + 1) begin: GEN_STAGE3_REG
    always_ff @ (posedge I_CLK) begin
      if (w_stage3_ready && r_stage2_valid) begin
        r_stage3_pred_v[gen_stage3_reg] <= w_pred_v[gen_stage3_reg];
        r_stage3_pred_h[gen_stage3_reg] <= w_pred_h[gen_stage3_reg];
      end
    end
  end
endgenerate

// The fourth stage combines both Planar components, adds rounding, and performs the final shift.
assign w_wh_round_signed =
  $signed(r_stage3_wh_round);

generate
  for (gen_lane = 0; gen_lane < PARA_LANE_NUM; gen_lane = gen_lane + 1) begin: GEN_STAGE4_ARITH
    assign w_pred_v_ext[gen_lane] =
      $signed({{(PARA_NUM_WD-PARA_PART_WD){r_stage3_pred_v[gen_lane][PARA_PART_WD-1]}},
               r_stage3_pred_v[gen_lane]});

    assign w_pred_h_ext[gen_lane] =
      $signed({{(PARA_NUM_WD-PARA_PART_WD){r_stage3_pred_h[gen_lane][PARA_PART_WD-1]}},
               r_stage3_pred_h[gen_lane]});

    assign w_numerator[gen_lane] =
      w_pred_v_ext[gen_lane] +
      w_pred_h_ext[gen_lane] +
      w_wh_round_signed;

    assign w_shifted_prediction[gen_lane] =
      w_numerator[gen_lane] >>> r_stage3_final_shift;

    assign w_prediction[gen_lane] =
      w_shifted_prediction[gen_lane][PARA_PIXEL_WD-1:0];
  end
endgenerate

// The fourth-stage output register holds all payload fields stable during backpressure.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage4_valid <= 1'b0;
  else if (w_stage4_ready)
    r_stage4_valid <= r_stage3_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage4_ready && r_stage3_valid) begin
    r_stage4_x_base <= r_stage3_x_base;
    r_stage4_y <= r_stage3_y;
    r_stage4_lane_valid <= r_stage3_lane_valid;
    r_stage4_last <= r_stage3_last;
  end
end

generate
  for (gen_stage4_reg = 0; gen_stage4_reg < PARA_LANE_NUM; gen_stage4_reg = gen_stage4_reg + 1) begin: GEN_STAGE4_REG
    always_ff @ (posedge I_CLK) begin
      if (w_stage4_ready && r_stage3_valid)
        r_stage4_prediction[gen_stage4_reg] <= w_prediction[gen_stage4_reg];
    end
  end
endgenerate

// Lane zero occupies the least-significant sample field of the packed output vector.
generate
  for (gen_output = 0; gen_output < PARA_LANE_NUM; gen_output = gen_output + 1) begin: GEN_OUTPUT_PACK
    assign O_PRED_SAMPLE[(gen_output*PARA_PIXEL_WD) +: PARA_PIXEL_WD] =
      r_stage4_prediction[gen_output];
  end
endgenerate

endmodule: INTRA_PLANAR_PRED_CORE
