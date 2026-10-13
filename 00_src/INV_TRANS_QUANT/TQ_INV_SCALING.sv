//-----------------------------------------------------------
// Description: Shared 4-lane inverse transform scaling.
// Stage 1: signed (INPUT_WD+1)-bit rounding and arithmetic shift.
// Stage 2: signed saturation to OUTPUT_WD bits.
// Two fully-elastic register stages, capacity = 2 beats,
// peak throughput = 1 beat/cycle if downstream is ready.
// Payload and sideband hold stable on output backpressure.
// The core does not interpret TU metadata or transform modes.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INV_SCALING #(
  parameter integer PARA_INPUT_WD  = 28,
  parameter integer PARA_OUTPUT_WD = 16,
  parameter integer PARA_SHIFT     = 7,
  parameter integer PARA_TU_ID_WD  = 16
)(
  input                                       I_CLK,
  input                                       I_RESETN,
  input         [4*PARA_INPUT_WD-1:0]         I_DATA,
  input                                       I_DATA_VALID,
  output logic                                I_DATA_READY,
  input         [PARA_TU_ID_WD-1:0]           I_TU_ID,
  input                                       I_TU_START,
  input                                       I_TU_LAST,
  input                                       I_VECTOR_LAST,
  input         [1:0]                         I_COMPONENT,
  output logic  [4*PARA_OUTPUT_WD-1:0]        O_DATA,
  output logic                                O_DATA_VALID,
  input                                       O_DATA_READY,
  output logic  [PARA_TU_ID_WD-1:0]           O_TU_ID,
  output logic                                O_TU_START,
  output logic                                O_TU_LAST,
  output logic                                O_VECTOR_LAST,
  output logic  [1:0]                         O_COMPONENT
);
  localparam integer PARA_STAGE_WD = PARA_INPUT_WD + 1;
  // The constant is positive, is rounded to the working width,
  // and must be added BEFORE arithmetic right shift.
  localparam logic signed [PARA_STAGE_WD-1:0] C_ROUND_OFFSET =
    ({{(PARA_STAGE_WD-1){1'b0}}, 1'b1} << (PARA_SHIFT-1));
  localparam logic signed [PARA_OUTPUT_WD-1:0] C_SAT_MAX =
    {1'b0, {(PARA_OUTPUT_WD-1){1'b1}}};
  localparam logic signed [PARA_OUTPUT_WD-1:0] C_SAT_MIN =
    {1'b1, {(PARA_OUTPUT_WD-1){1'b0}}};
  localparam logic signed [PARA_STAGE_WD-1:0] C_COMPARE_MAX =
    {{(PARA_STAGE_WD-PARA_OUTPUT_WD){1'b0}}, C_SAT_MAX};
  localparam logic signed [PARA_STAGE_WD-1:0] C_COMPARE_MIN =
    {{(PARA_STAGE_WD-PARA_OUTPUT_WD){1'b1}}, C_SAT_MIN};

  logic signed [PARA_STAGE_WD-1:0] w_extended_input [0:3];
  logic signed [PARA_STAGE_WD-1:0] w_rounded_data   [0:3];
  logic signed [PARA_STAGE_WD-1:0] r_stage1_data    [0:3];
  logic signed [PARA_OUTPUT_WD-1:0] r_stage2_data   [0:3];

  logic r_stage1_valid;
  logic r_stage2_valid;
  logic w_stage1_ready;
  logic w_stage2_ready;

  logic [PARA_TU_ID_WD-1:0] r_stage1_tu_id;
  logic [PARA_TU_ID_WD-1:0] r_stage2_tu_id;
  logic r_stage1_tu_start, r_stage1_tu_last, r_stage1_vector_last;
  logic r_stage2_tu_start, r_stage2_tu_last, r_stage2_vector_last;
  logic [1:0] r_stage1_component, r_stage2_component;

  assign w_stage2_ready = !r_stage2_valid || O_DATA_READY;
  assign w_stage1_ready = !r_stage1_valid || w_stage2_ready;
  assign I_DATA_READY = w_stage1_ready;
  assign O_DATA_VALID = r_stage2_valid;
  assign O_TU_ID = r_stage2_tu_id;
  assign O_TU_START = r_stage2_tu_start;
  assign O_TU_LAST = r_stage2_tu_last;
  assign O_VECTOR_LAST = r_stage2_vector_last;
  assign O_COMPONENT = r_stage2_component;

  // Fixed shift and saturation constants. All four lanes operate
  // in parallel; no function, DSP, or variable multiplier is used.
  for (genvar lane = 0; lane < 4; lane = lane + 1) begin: g_lane
    assign w_extended_input[lane] =
      $signed(I_DATA[lane*PARA_INPUT_WD +: PARA_INPUT_WD]);
    assign w_rounded_data[lane] =
      (w_extended_input[lane] + C_ROUND_OFFSET) >>> PARA_SHIFT;
    assign O_DATA[lane*PARA_OUTPUT_WD +: PARA_OUTPUT_WD] =
      r_stage2_data[lane];

    always_ff @(posedge I_CLK) begin
      if (I_RESETN && w_stage1_ready && I_DATA_VALID)
        r_stage1_data[lane] <= w_rounded_data[lane];
    end

    always_ff @(posedge I_CLK) begin
      if (I_RESETN && w_stage2_ready && r_stage1_valid) begin
        if (r_stage1_data[lane] > C_COMPARE_MAX)
          r_stage2_data[lane] <= C_SAT_MAX;
        else if (r_stage1_data[lane] < C_COMPARE_MIN)
          r_stage2_data[lane] <= C_SAT_MIN;
        else
          r_stage2_data[lane] <= r_stage1_data[lane][PARA_OUTPUT_WD-1:0];
      end
    end
  end

  // Reset only VALID bits. Payloads/sidebands are valid-qualified,
  // which avoids a reset network on wide arithmetic registers.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_stage1_valid <= 1'b0;
      r_stage2_valid <= 1'b0;
    end
    else begin
      if (w_stage1_ready)
        r_stage1_valid <= I_DATA_VALID;
      if (w_stage2_ready)
        r_stage2_valid <= r_stage1_valid;
    end
  end

  always_ff @(posedge I_CLK) begin
    if (I_RESETN) begin
      if (w_stage1_ready && I_DATA_VALID) begin
        r_stage1_tu_id <= I_TU_ID;
        r_stage1_tu_start <= I_TU_START;
        r_stage1_tu_last <= I_TU_LAST;
        r_stage1_vector_last <= I_VECTOR_LAST;
        r_stage1_component <= I_COMPONENT;
      end
      if (w_stage2_ready && r_stage1_valid) begin
        r_stage2_tu_id <= r_stage1_tu_id;
        r_stage2_tu_start <= r_stage1_tu_start;
        r_stage2_tu_last <= r_stage1_tu_last;
        r_stage2_vector_last <= r_stage1_vector_last;
        r_stage2_component <= r_stage1_component;
      end
    end
  end
endmodule: TQ_INV_SCALING
