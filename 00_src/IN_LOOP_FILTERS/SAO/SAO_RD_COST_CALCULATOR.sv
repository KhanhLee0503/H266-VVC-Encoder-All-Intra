//------------------------------------------------------------------------------
// Description: This module calculates the fixed-point Lagrangian rate-
//              distortion cost for one SAO offset candidate:
//                RD_COST_Q8 = (DELTA_DISTORTION << 8) + LAMBDA_Q8*RATE_BITS.
//              Lambda is unsigned Q18.8 in 26 bits, rate is unsigned 6 bits,
//              delta distortion is signed 32 bits, and cost is signed 48-bit
//              Q8. A single signed 27x18 multiplication maps naturally to
//              one UltraScale+ DSP48E2 multiplier. The three-stage elastic
//              pipeline captures lambda with its associated transaction,
//              computes the rate penalty, and registers the signed sum.
//              Offset and statistics index are passed through unchanged.
//              Every stage supports independent ready/valid backpressure.
//              Active-low asynchronous reset and synchronous clear flush
//              valid bits; datapath registers are not reset.
//              Common SAO type, band-position, direction, and merge costs
//              are intentionally excluded from this per-offset calculation.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_RD_COST_CALCULATOR (
  input                       I_CLK,
  input                       I_RST_N,
  input                       I_CLEAR,
  input        [25:0]         I_LAMBDA_Q,
  input        [5:0]          I_RATE_BITS,
  input signed [31:0]         I_DELTA_DISTORTION,
  input signed [5:0]          I_OFFSET,
  input        [5:0]          I_STAT_INDEX,
  input                       I_INPUT_VALID,
  output logic                O_INPUT_READY,
  output logic signed [47:0]  O_RD_COST,
  output logic signed [5:0]   O_OFFSET,
  output logic [5:0]          O_STAT_INDEX,
  output logic                O_OUTPUT_VALID,
  input                       I_OUTPUT_READY
);

  localparam int PARA_LAMBDA_WD = 26;
  localparam int PARA_RATE_WD = 6;
  localparam int PARA_DISTORTION_WD = 32;
  localparam int PARA_OFFSET_WD = 6;
  localparam int PARA_STAT_INDEX_WD = 6;
  localparam int PARA_FRAC_WD = 8;
  localparam int PARA_RD_COST_WD = 48;
  localparam int PARA_DSP_A_WD = 27;
  localparam int PARA_DSP_B_WD = 18;
  localparam int PARA_DSP_PRODUCT_WD = 45;
  localparam int PARA_RATE_PENALTY_WD = 32;

  logic r_stage0_valid;
  logic r_stage1_valid;
  logic r_stage2_valid;

  logic w_stage0_ready;
  logic w_stage1_ready;
  logic w_stage2_ready;
  logic w_input_fire;
  logic w_stage0_fire;
  logic w_stage1_fire;

  logic [PARA_LAMBDA_WD-1:0] r_stage0_lambda_q;
  logic [PARA_RATE_WD-1:0] r_stage0_rate_bits;
  logic signed [PARA_DISTORTION_WD-1:0] r_stage0_delta_distortion;
  logic signed [PARA_OFFSET_WD-1:0] r_stage0_offset;
  logic [PARA_STAT_INDEX_WD-1:0] r_stage0_stat_index;

  logic [PARA_RATE_PENALTY_WD-1:0] r_stage1_rate_penalty;
  logic signed [PARA_DISTORTION_WD-1:0] r_stage1_delta_distortion;
  logic signed [PARA_OFFSET_WD-1:0] r_stage1_offset;
  logic [PARA_STAT_INDEX_WD-1:0] r_stage1_stat_index;

  logic signed [PARA_RD_COST_WD-1:0] r_stage2_rd_cost;
  logic signed [PARA_OFFSET_WD-1:0] r_stage2_offset;
  logic [PARA_STAT_INDEX_WD-1:0] r_stage2_stat_index;

  logic signed [PARA_DSP_A_WD-1:0] w_mul_operand_a;
  logic signed [PARA_DSP_B_WD-1:0] w_mul_operand_b;
  (* use_dsp = "yes" *) logic signed [PARA_DSP_PRODUCT_WD-1:0] w_rate_product;
  logic signed [PARA_RD_COST_WD-1:0] w_scaled_distortion;
  logic signed [PARA_RD_COST_WD-1:0] w_rate_penalty_extended;
  logic signed [PARA_RD_COST_WD-1:0] w_rd_cost;

  // Backpressure propagates from the output stage toward the input stage.
  assign w_stage2_ready = !r_stage2_valid || I_OUTPUT_READY;
  assign w_stage1_ready = !r_stage1_valid || w_stage2_ready;
  assign w_stage0_ready = !r_stage0_valid || w_stage1_ready;

  assign O_INPUT_READY  = I_RST_N && !I_CLEAR && w_stage0_ready;
  assign O_OUTPUT_VALID = I_RST_N && !I_CLEAR && r_stage2_valid;

  assign w_input_fire  = I_INPUT_VALID && O_INPUT_READY;
  assign w_stage0_fire = r_stage0_valid && w_stage1_ready;
  assign w_stage1_fire = r_stage1_valid && w_stage2_ready;

  // The unsigned inputs gain a leading zero to fit signed DSP operands.
  // 26-bit unsigned lambda fits 27-bit signed A; 6-bit unsigned rate fits B.
  assign w_mul_operand_a = $signed({1'b0, r_stage0_lambda_q});
  assign w_mul_operand_b = $signed({12'd0, r_stage0_rate_bits});
  assign w_rate_product = w_mul_operand_a * w_mul_operand_b;

  // Align the signed distortion to Q8 before addition. Extending before
  // shifting preserves the sign even for the minimum 32-bit distortion.
  assign w_scaled_distortion =
    $signed({{(PARA_RD_COST_WD-PARA_DISTORTION_WD){r_stage1_delta_distortion[PARA_DISTORTION_WD-1]}},
              r_stage1_delta_distortion}) <<< PARA_FRAC_WD;

  // The rate penalty is unsigned and can exceed signed 32-bit positive max.
  // Always prepend zero bits before interpreting it as a signed addend.
  assign w_rate_penalty_extended =
    $signed({{(PARA_RD_COST_WD-PARA_RATE_PENALTY_WD){1'b0}},
              r_stage1_rate_penalty});

  assign w_rd_cost = w_scaled_distortion + w_rate_penalty_extended;

  // Reset and clear invalidate all in-flight work, but do not reset payload.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_stage0_valid <= 1'b0;
      r_stage1_valid <= 1'b0;
      r_stage2_valid <= 1'b0;
    end
    else if (I_CLEAR) begin
      r_stage0_valid <= 1'b0;
      r_stage1_valid <= 1'b0;
      r_stage2_valid <= 1'b0;
    end
    else begin
      if (w_stage0_ready)
        r_stage0_valid <= I_INPUT_VALID;

      if (w_stage1_ready)
        r_stage1_valid <= r_stage0_valid;

      if (w_stage2_ready)
        r_stage2_valid <= r_stage1_valid;
    end
  end

  // Stage 0: capture the complete input transaction, including lambda.
  always_ff @(posedge I_CLK) begin
    if (I_RST_N && !I_CLEAR && w_input_fire) begin
      r_stage0_lambda_q         <= I_LAMBDA_Q;
      r_stage0_rate_bits        <= I_RATE_BITS;
      r_stage0_delta_distortion <= I_DELTA_DISTORTION;
      r_stage0_offset           <= I_OFFSET;
      r_stage0_stat_index       <= I_STAT_INDEX;
    end
  end

  // Stage 1: register the product and propagate the matching metadata.
  always_ff @(posedge I_CLK) begin
    if (I_RST_N && !I_CLEAR && w_stage0_fire) begin
      r_stage1_rate_penalty     <= w_rate_product[PARA_RATE_PENALTY_WD-1:0];
      r_stage1_delta_distortion <= r_stage0_delta_distortion;
      r_stage1_offset           <= r_stage0_offset;
      r_stage1_stat_index       <= r_stage0_stat_index;
    end
  end

  // Stage 2: register the signed Q8 result and its associated metadata.
  always_ff @(posedge I_CLK) begin
    if (I_RST_N && !I_CLEAR && w_stage1_fire) begin
      r_stage2_rd_cost    <= w_rd_cost;
      r_stage2_offset     <= r_stage1_offset;
      r_stage2_stat_index <= r_stage1_stat_index;
    end
  end

  assign O_RD_COST   = r_stage2_rd_cost;
  assign O_OFFSET    = r_stage2_offset;
  assign O_STAT_INDEX = r_stage2_stat_index;

endmodule: SAO_RD_COST_CALCULATOR
