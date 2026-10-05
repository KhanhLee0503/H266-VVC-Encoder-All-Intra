//-----------------------------------------------------------
// Description: This module classifies the texture activity of the
// current VVC coding-tree node as LOW, MEDIUM, or HIGH.
//
// IDTV is calculated as the sum of the four accumulated directional
// variations. The IDTV thresholds are generated internally from QP
// and node size:
//
//   base_threshold = (2 * QP) + PARA_IDTV_BIAS
//
// The node-size scaling uses an 8x8 reference area. Because width and
// height are powers of two and encoded by WIDTH_CODE/HEIGHT_CODE,
// scaling is implemented only with addition, comparison, and shift.
//
// For square 8x8, 16x16, 32x32, and 64x64 nodes, the default LOW
// threshold follows the same QP/depth scaling form used by the
// referenced hardware-oriented HEVC IDTV method. Rectangular nodes
// and 128x128 nodes are project extensions based on equivalent area.
//
// HIGH threshold is a project heuristic derived from LOW threshold:
//   high_threshold = low_threshold << PARA_HIGH_SHIFT
//
// Optional variance can participate in classification. It is disabled
// by default. Its reference thresholds are parameters and are scaled
// approximately with the square of node area.
//
// Only synthesizable RTL constructs are used.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_ACTIVITY_CLASSIFIER
#(
  parameter PARA_SUM_WD        = 24,
  parameter PARA_SUM_SQ_WD     = 34,
  parameter PARA_DV_WD         = 23,
  parameter PARA_IDTV_WD       = 25,
  parameter PARA_VAR_WD        = 48,
  parameter PARA_QP_WD         = 6,

  parameter PARA_USE_VARIANCE  = 0,

  parameter [15:0] PARA_IDTV_BIAS = 16'd40,
  parameter [3:0]  PARA_HIGH_SHIFT = 4'd1,

  parameter [PARA_VAR_WD-1:0] PARA_VAR_LOW_BASE  =
    {PARA_VAR_WD{1'b0}},
  parameter [PARA_VAR_WD-1:0] PARA_VAR_HIGH_BASE =
    {PARA_VAR_WD{1'b1}}
)
(
  input                               I_VALID,

  input      [PARA_SUM_WD-1:0]        I_SUM,
  input      [PARA_SUM_SQ_WD-1:0]     I_SUM_SQ,

  input      [PARA_DV_WD-1:0]         I_DV_H,
  input      [PARA_DV_WD-1:0]         I_DV_V,
  input      [PARA_DV_WD-1:0]         I_DV_DL,
  input      [PARA_DV_WD-1:0]         I_DV_DR,

  input      [PARA_QP_WD-1:0]         I_QP,

  input      [2:0]                    I_WIDTH_CODE,
  input      [2:0]                    I_HEIGHT_CODE,

  output logic                        O_VALID,
  output logic [1:0]                  O_ACTIVITY,
  output logic                        O_ACTIVITY_LOW,
  output logic                        O_ACTIVITY_MEDIUM,
  output logic                        O_ACTIVITY_HIGH,

  output logic [PARA_IDTV_WD-1:0]     O_IDTV,
  output logic [PARA_IDTV_WD-1:0]     O_IDTV_LOW_THRESHOLD,
  output logic [PARA_IDTV_WD-1:0]     O_IDTV_HIGH_THRESHOLD,

  output logic [PARA_VAR_WD-1:0]      O_VAR_NUM
);

localparam PARA_ACTIVITY_LOW    = 2'd0;
localparam PARA_ACTIVITY_MEDIUM = 2'd1;
localparam PARA_ACTIVITY_HIGH   = 2'd2;

logic [PARA_DV_WD:0]     w_idtv_pair_0;
logic [PARA_DV_WD:0]     w_idtv_pair_1;
logic [PARA_IDTV_WD-1:0] w_idtv;

logic [3:0]               w_size_code_sum;
logic [3:0]               w_area_shift;

logic [15:0]              w_qp_extended;
logic [15:0]              w_base_threshold;

logic [31:0]              w_idtv_low_threshold_ext;
logic [31:0]              w_idtv_high_threshold_ext;

logic [PARA_IDTV_WD-1:0]  w_idtv_low_threshold;
logic [PARA_IDTV_WD-1:0]  w_idtv_high_threshold;

logic                      w_low_idtv;
logic                      w_high_idtv;

logic [PARA_VAR_WD-1:0]    w_var_num;
logic                      w_low_var;
logic                      w_high_var;

logic                      w_activity_low;
logic                      w_activity_high;

//-----------------------------------------------------------
// IDTV generation.
//-----------------------------------------------------------

assign w_idtv_pair_0 =
  {1'b0, I_DV_H} +
  {1'b0, I_DV_V};

assign w_idtv_pair_1 =
  {1'b0, I_DV_DL} +
  {1'b0, I_DV_DR};

assign w_idtv =
  {{(PARA_IDTV_WD-(PARA_DV_WD+1)){1'b0}}, w_idtv_pair_0} +
  {{(PARA_IDTV_WD-(PARA_DV_WD+1)){1'b0}}, w_idtv_pair_1};

//-----------------------------------------------------------
// Internal IDTV threshold generation.
//-----------------------------------------------------------

assign w_size_code_sum =
  {1'b0, I_WIDTH_CODE} +
  {1'b0, I_HEIGHT_CODE};

always_comb begin
  if (w_size_code_sum > 4'd2)
    w_area_shift = w_size_code_sum - 4'd2;
  else
    w_area_shift = 4'd0;
end

always_comb begin
  w_qp_extended = 16'd0;
  w_qp_extended[PARA_QP_WD-1:0] = I_QP;
end

assign w_base_threshold =
  (w_qp_extended << 1) +
  PARA_IDTV_BIAS;

assign w_idtv_low_threshold_ext =
  {16'd0, w_base_threshold} <<
  w_area_shift;

assign w_idtv_high_threshold_ext =
  w_idtv_low_threshold_ext <<
  PARA_HIGH_SHIFT;

assign w_idtv_low_threshold =
  w_idtv_low_threshold_ext[PARA_IDTV_WD-1:0];

assign w_idtv_high_threshold =
  w_idtv_high_threshold_ext[PARA_IDTV_WD-1:0];

assign w_low_idtv =
  (w_idtv <= w_idtv_low_threshold);

assign w_high_idtv =
  (w_idtv >= w_idtv_high_threshold);

//-----------------------------------------------------------
// Optional variance path.
//-----------------------------------------------------------

generate
  if (PARA_USE_VARIANCE == 1) begin: GEN_VARIANCE
    logic [4:0]             w_sample_count_shift;
    logic [4:0]             w_var_threshold_shift;

    logic [PARA_VAR_WD-1:0] w_sum_sq_scaled;
    logic [PARA_VAR_WD-1:0] w_sum_squared;

    logic [PARA_VAR_WD-1:0] w_var_low_threshold;
    logic [PARA_VAR_WD-1:0] w_var_high_threshold;

    assign w_sample_count_shift =
      {1'b0, w_size_code_sum} +
      5'd4;

    assign w_var_threshold_shift =
      {1'b0, w_area_shift} <<
      1;

    assign w_sum_sq_scaled =
      {{(PARA_VAR_WD-PARA_SUM_SQ_WD){1'b0}}, I_SUM_SQ} <<
      w_sample_count_shift;

    assign w_sum_squared =
      {{(PARA_VAR_WD-PARA_SUM_WD){1'b0}}, I_SUM} *
      {{(PARA_VAR_WD-PARA_SUM_WD){1'b0}}, I_SUM};

    assign w_var_num =
      (w_sum_sq_scaled >= w_sum_squared) ?
      (w_sum_sq_scaled - w_sum_squared) :
      {PARA_VAR_WD{1'b0}};

    assign w_var_low_threshold =
      PARA_VAR_LOW_BASE <<
      w_var_threshold_shift;

    assign w_var_high_threshold =
      PARA_VAR_HIGH_BASE <<
      w_var_threshold_shift;

    assign w_low_var =
      (w_var_num <= w_var_low_threshold);

    assign w_high_var =
      (w_var_num >= w_var_high_threshold);
  end
  else begin: GEN_NO_VARIANCE
    assign w_var_num  = {PARA_VAR_WD{1'b0}};
    assign w_low_var  = 1'b1;
    assign w_high_var = 1'b0;
  end
endgenerate

//-----------------------------------------------------------
// Activity classification.
//-----------------------------------------------------------

assign w_activity_low =
  w_low_idtv &&
  w_low_var;

assign w_activity_high =
  w_high_idtv ||
  w_high_var;

always_comb begin
  O_VALID           = I_VALID;
  O_ACTIVITY        = PARA_ACTIVITY_MEDIUM;
  O_ACTIVITY_LOW    = 1'b0;
  O_ACTIVITY_MEDIUM = 1'b0;
  O_ACTIVITY_HIGH   = 1'b0;

  if (I_VALID) begin
    if (w_activity_high) begin
      O_ACTIVITY      = PARA_ACTIVITY_HIGH;
      O_ACTIVITY_HIGH = 1'b1;
    end
    else if (w_activity_low) begin
      O_ACTIVITY     = PARA_ACTIVITY_LOW;
      O_ACTIVITY_LOW = 1'b1;
    end
    else begin
      O_ACTIVITY        = PARA_ACTIVITY_MEDIUM;
      O_ACTIVITY_MEDIUM = 1'b1;
    end
  end
end

assign O_IDTV                = w_idtv;
assign O_IDTV_LOW_THRESHOLD  = w_idtv_low_threshold;
assign O_IDTV_HIGH_THRESHOLD = w_idtv_high_threshold;
assign O_VAR_NUM             = w_var_num;

endmodule: PARTITION_ACTIVITY_CLASSIFIER
