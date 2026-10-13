//-----------------------------------------------------------
// Description: This module performs the VTM-style regular
// forward integer quantization of four signed coefficients
// per beat using four parallel DSP-inferred multipliers. A
// per-TU parameter decoder feeds a four-stage elastic
// pipeline. Each accepted input beat retains its parameters
// and TU metadata, including across TU boundaries and stalls.
// Supported configuration: 10-bit, flat scale, no RDOQ,
// no dependent quantization, no sign hiding and no LFNST.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_QUANTIZATION_ENGINE #(
  parameter PARA_DATA_WD = 16,
  parameter PARA_TU_ID_WD = 16
)(
  input                                   I_CLK,
  input                                   I_RESETN,
  input         [4*PARA_DATA_WD-1:0]      I_DATA,
  input                                   I_DATA_VALID,
  output logic                            I_DATA_READY,
  input                                   I_DATA_LAST,
  input                                   I_TU_START,
  input                                   I_TU_LAST,
  input         [1:0]                     I_TU_WIDTH_SIZE,
  input         [1:0]                     I_TU_HEIGHT_SIZE,
  input         [1:0]                     I_ROW_TRANSFORM_MODE,
  input         [1:0]                     I_COLUMN_TRANSFORM_MODE,
  input         [PARA_TU_ID_WD-1:0]       I_TU_ID,
  input         [6:0]                     I_QP_PRIME,
  input                                   I_IS_IRAP,
  output logic  [4*PARA_DATA_WD-1:0]      O_DATA,
  output logic                            O_DATA_VALID,
  input                                   O_DATA_READY,
  output logic                            O_DATA_LAST,
  output logic                            O_TU_START,
  output logic                            O_TU_LAST,
  output logic  [1:0]                     O_TU_WIDTH_SIZE,
  output logic  [1:0]                     O_TU_HEIGHT_SIZE,
  output logic  [1:0]                     O_ROW_TRANSFORM_MODE,
  output logic  [1:0]                     O_COLUMN_TRANSFORM_MODE,
  output logic  [PARA_TU_ID_WD-1:0]       O_TU_ID,
  output logic  [6:0]                     O_QP_PRIME,
  output logic                            O_IS_IRAP,
  output logic  [3:0]                     O_CLIPPED
);
  localparam PARA_META_WD = PARA_TU_ID_WD + 19;

  logic                                   r_tu_active;
  logic [6:0]                             r_qp_prime;
  logic                                   r_is_irap;
  logic [1:0]                             r_tu_width_size;
  logic [1:0]                             r_tu_height_size;
  logic [1:0]                             r_row_transform_mode;
  logic [1:0]                             r_column_transform_mode;
  logic [PARA_TU_ID_WD-1:0]               r_tu_id;
  logic [6:0]                             w_qp_prime;
  logic                                   w_is_irap;
  logic [1:0]                             w_tu_width_size;
  logic [1:0]                             w_tu_height_size;
  logic [1:0]                             w_row_transform_mode;
  logic [1:0]                             w_column_transform_mode;
  logic [PARA_TU_ID_WD-1:0]               w_tu_id;
  logic [3:0]                             w_qp_per;
  logic [2:0]                             w_qp_rem;
  logic                                   w_sqrt_adjust;
  logic [14:0]                            w_quant_scale;
  logic [4:0]                             w_quant_shift;
  logic [31:0]                            w_round_offset;
  logic                                   w_qp_valid;
  logic                                   w_input_allowed;
  logic [3:0]                             r_valid;
  logic [3:0]                             w_stage_ready;
  logic [3:0]                             w_stage_enable;
  logic [PARA_META_WD-1:0]                r_meta [0:3];

  // Metadata is sampled only at the first accepted beat of each TU.
  // Subsequent beats reuse the registered TU configuration.
  assign w_qp_prime = I_TU_START ? I_QP_PRIME : r_qp_prime;
  assign w_is_irap = I_TU_START ? I_IS_IRAP : r_is_irap;
  assign w_tu_width_size = I_TU_START ? I_TU_WIDTH_SIZE : r_tu_width_size;
  assign w_tu_height_size = I_TU_START ? I_TU_HEIGHT_SIZE : r_tu_height_size;
  assign w_row_transform_mode = I_TU_START ? I_ROW_TRANSFORM_MODE : r_row_transform_mode;
  assign w_column_transform_mode = I_TU_START ? I_COLUMN_TRANSFORM_MODE : r_column_transform_mode;
  assign w_tu_id = I_TU_START ? I_TU_ID : r_tu_id;

  TQ_QUANT_PARAM_CONTROLLER u_tq_quant_param_controller (
    .I_QP_PRIME            (w_qp_prime),
    .I_TU_WIDTH_SIZE       (w_tu_width_size),
    .I_TU_HEIGHT_SIZE      (w_tu_height_size),
    .I_IS_IRAP             (w_is_irap),
    .O_QP_PER              (w_qp_per),
    .O_QP_REM              (w_qp_rem),
    .O_SQRT_ADJUST         (w_sqrt_adjust),
    .O_QUANT_SCALE         (w_quant_scale),
    .O_QUANT_SHIFT         (w_quant_shift),
    .O_ROUND_OFFSET        (w_round_offset),
    .O_QP_VALID            (w_qp_valid)
  );

  // A TU starts on a beat carrying START and ends on an accepted LAST.
  // Invalid effective QPs cannot start a new TU.
  assign w_input_allowed = I_TU_START ? (!r_tu_active && w_qp_valid) : r_tu_active;
  assign w_stage_ready[3] = !r_valid[3] || O_DATA_READY;
  assign w_stage_ready[2] = !r_valid[2] || w_stage_ready[3];
  assign w_stage_ready[1] = !r_valid[1] || w_stage_ready[2];
  assign w_stage_ready[0] = !r_valid[0] || w_stage_ready[1];
  assign I_DATA_READY = I_RESETN && w_stage_ready[0] && w_input_allowed;

  assign w_stage_enable[0] = I_DATA_VALID && I_DATA_READY;
  assign w_stage_enable[1] = r_valid[0] && w_stage_ready[1];
  assign w_stage_enable[2] = r_valid[1] && w_stage_ready[2];
  assign w_stage_enable[3] = r_valid[2] && w_stage_ready[3];
  assign O_DATA_VALID = r_valid[3];

  // Pipeline occupancy alone is reset; all data and metadata registers
  // are updated only when their associated valid beat advances.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_valid <= 4'b0000;
      r_tu_active <= 1'b0;
    end
    else begin
      if (w_stage_ready[0])
        r_valid[0] <= w_stage_enable[0];
      if (w_stage_ready[1])
        r_valid[1] <= r_valid[0];
      if (w_stage_ready[2])
        r_valid[2] <= r_valid[1];
      if (w_stage_ready[3])
        r_valid[3] <= r_valid[2];
      if (w_stage_enable[0]) begin
        if (I_TU_START)
          r_tu_active <= !I_TU_LAST;
        else if (I_TU_LAST)
          r_tu_active <= 1'b0;
      end
    end
  end

  always_ff @(posedge I_CLK) begin
    if (w_stage_enable[0] && I_TU_START) begin
      r_qp_prime <= I_QP_PRIME;
      r_is_irap <= I_IS_IRAP;
      r_tu_width_size <= I_TU_WIDTH_SIZE;
      r_tu_height_size <= I_TU_HEIGHT_SIZE;
      r_row_transform_mode <= I_ROW_TRANSFORM_MODE;
      r_column_transform_mode <= I_COLUMN_TRANSFORM_MODE;
      r_tu_id <= I_TU_ID;
    end
    if (w_stage_enable[0]) begin
      r_meta[0] <= {w_qp_prime, w_is_irap, w_tu_id, w_column_transform_mode, w_row_transform_mode, w_tu_height_size, w_tu_width_size, I_TU_LAST, I_TU_START, I_DATA_LAST};
    end
    if (w_stage_enable[1])
      r_meta[1] <= r_meta[0];
    if (w_stage_enable[2])
      r_meta[2] <= r_meta[1];
    if (w_stage_enable[3])
      r_meta[3] <= r_meta[2];
  end

  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_quant_lane
    TQ_QUANT_LANE #(
      .PARA_DATA_WD (PARA_DATA_WD)
    ) u_tq_quant_lane (
      .I_CLK           (I_CLK),
      .I_DATA          (I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]),
      .I_QUANT_SCALE   (w_quant_scale),
      .I_QUANT_SHIFT   (w_quant_shift),
      .I_ROUND_OFFSET  (w_round_offset),
      .I_STAGE0_ENABLE (w_stage_enable[0]),
      .I_STAGE1_ENABLE (w_stage_enable[1]),
      .I_STAGE2_ENABLE (w_stage_enable[2]),
      .I_STAGE3_ENABLE (w_stage_enable[3]),
      .O_DATA          (O_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]),
      .O_CLIPPED       (O_CLIPPED[lane_idx])
    );
  end

  assign {O_QP_PRIME, O_IS_IRAP, O_TU_ID, O_COLUMN_TRANSFORM_MODE, O_ROW_TRANSFORM_MODE, O_TU_HEIGHT_SIZE, O_TU_WIDTH_SIZE, O_TU_LAST, O_TU_START, O_DATA_LAST} = r_meta[3];
endmodule: TQ_QUANTIZATION_ENGINE
