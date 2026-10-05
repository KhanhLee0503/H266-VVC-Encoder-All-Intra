//-----------------------------------------------------------
// Description: This module implements the VVC intra DC prediction core.
// The core accepts up to 32 top and 32 left reference samples, masks the
// unused lanes according to the transform-block geometry, calculates the
// top and left sums with a three-stage elastic pipeline, and outputs the
// 10-bit DC prediction value. The datapath follows the square, wide, and
// tall DC equations and supports ready/valid backpressure.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_DC_PRED_CORE #(
  parameter PARA_PIXEL_WD = 10
)(
  input                                   I_CLK,
  input                                   I_RESETN,

  input                                   I_VALID,
  output logic                            O_READY,

  input  [2:0]                            I_TU_WIDTH_CODE,
  input  [2:0]                            I_TU_HEIGHT_CODE,
  input  [(32*PARA_PIXEL_WD)-1:0]         I_TOP_REF,
  input  [(32*PARA_PIXEL_WD)-1:0]         I_LEFT_REF,

  output logic                            O_VALID,
  input                                   I_READY,
  output logic [PARA_PIXEL_WD-1:0]        O_DC_VAL
);

localparam PARA_REF_NUM = 32;
localparam PARA_MASK_WD = 32;
localparam PARA_SIZE_WD = 6;
localparam PARA_SHIFT_WD = 3;
localparam PARA_ROUND_WD = 6;
localparam PARA_MUX_SEL_WD = 2;

logic [PARA_MASK_WD-1:0]    w_top_size_mask;
logic [PARA_MASK_WD-1:0]    w_left_size_mask;
logic [PARA_MASK_WD-1:0]    w_top_lane_mask;
logic [PARA_MASK_WD-1:0]    w_left_lane_mask;
logic [PARA_SIZE_WD-1:0]    w_tu_width;
logic [PARA_SIZE_WD-1:0]    w_tu_height;
logic                       w_top_tree_enable;
logic                       w_left_tree_enable;
logic [PARA_MUX_SEL_WD-1:0] w_mux_sel;
logic [PARA_ROUND_WD-1:0]   w_round_value;
logic [PARA_SHIFT_WD-1:0]   w_shift_amount;

logic [PARA_PIXEL_WD-1:0]   w_top_masked [0:PARA_REF_NUM-1];
logic [PARA_PIXEL_WD-1:0]   w_left_masked [0:PARA_REF_NUM-1];
logic [PARA_PIXEL_WD:0]     w_top_l1 [0:15];
logic [PARA_PIXEL_WD:0]     w_left_l1 [0:15];
logic [PARA_PIXEL_WD+1:0]   w_top_l2 [0:7];
logic [PARA_PIXEL_WD+1:0]   w_left_l2 [0:7];

logic [PARA_PIXEL_WD+1:0]   r_top_l2 [0:7];
logic [PARA_PIXEL_WD+1:0]   r_left_l2 [0:7];
logic [PARA_MUX_SEL_WD-1:0] r_stage1_mux_sel;
logic [PARA_ROUND_WD-1:0]   r_stage1_round_value;
logic [PARA_SHIFT_WD-1:0]   r_stage1_shift_amount;
logic                       r_stage1_valid;

logic [PARA_PIXEL_WD+2:0]   w_top_l3 [0:3];
logic [PARA_PIXEL_WD+2:0]   w_left_l3 [0:3];
logic [PARA_PIXEL_WD+3:0]   w_top_l4 [0:1];
logic [PARA_PIXEL_WD+3:0]   w_left_l4 [0:1];
logic [PARA_PIXEL_WD+4:0]   w_top_l5;
logic [PARA_PIXEL_WD+4:0]   w_left_l5;

logic [PARA_PIXEL_WD+4:0]   r_sum_top;
logic [PARA_PIXEL_WD+4:0]   r_sum_left;
logic [PARA_MUX_SEL_WD-1:0] r_stage2_mux_sel;
logic [PARA_ROUND_WD-1:0]   r_stage2_round_value;
logic [PARA_SHIFT_WD-1:0]   r_stage2_shift_amount;
logic                       r_stage2_valid;

logic [PARA_PIXEL_WD+5:0]   w_selected_sum;
logic [PARA_PIXEL_WD+6:0]   w_rounded_sum_ext;
logic [PARA_PIXEL_WD+6:0]   w_shifted_value;
logic [PARA_PIXEL_WD-1:0]   w_dc_value;
logic [PARA_PIXEL_WD-1:0]   r_dc_value;
logic                       r_stage3_valid;

logic                       w_stage1_ready;
logic                       w_stage2_ready;
logic                       w_stage3_ready;

genvar gen_input;
genvar gen_l1;
genvar gen_l2;
genvar gen_stage1_reg;
genvar gen_l3;
genvar gen_l4;

// Decode the transform-block width into the lane mask and numeric size.
always_comb begin
  w_top_size_mask = '0;
  w_tu_width = '0;

  unique casez (I_TU_WIDTH_CODE)
    3'd2: begin
      w_top_size_mask = 32'h0000_000F;
      w_tu_width = 6'd4;
    end
    3'd3: begin
      w_top_size_mask = 32'h0000_00FF;
      w_tu_width = 6'd8;
    end
    3'd4: begin
      w_top_size_mask = 32'h0000_FFFF;
      w_tu_width = 6'd16;
    end
    3'd5: begin
      w_top_size_mask = 32'hFFFF_FFFF;
      w_tu_width = 6'd32;
    end
    default: begin
      w_top_size_mask = '0;
      w_tu_width = '0;
    end
  endcase
end

// Decode the transform-block height into the lane mask and numeric size.
always_comb begin
  w_left_size_mask = '0;
  w_tu_height = '0;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_left_size_mask = 32'h0000_000F;
      w_tu_height = 6'd4;
    end
    3'd3: begin
      w_left_size_mask = 32'h0000_00FF;
      w_tu_height = 6'd8;
    end
    3'd4: begin
      w_left_size_mask = 32'h0000_FFFF;
      w_tu_height = 6'd16;
    end
    3'd5: begin
      w_left_size_mask = 32'hFFFF_FFFF;
      w_tu_height = 6'd32;
    end
    default: begin
      w_left_size_mask = '0;
      w_tu_height = '0;
    end
  endcase
end

// Select the DC equation and generate the rounding and shift controls.
always_comb begin
  w_top_tree_enable = 1'b0;
  w_left_tree_enable = 1'b0;
  w_mux_sel = 2'b00;
  w_round_value = '0;
  w_shift_amount = '0;

  if (I_TU_WIDTH_CODE == I_TU_HEIGHT_CODE) begin
    w_top_tree_enable = 1'b1;
    w_left_tree_enable = 1'b1;
    w_mux_sel = 2'b00;
    w_round_value = w_tu_width;
    w_shift_amount = I_TU_WIDTH_CODE + 3'd1;
  end
  else if (I_TU_WIDTH_CODE > I_TU_HEIGHT_CODE) begin
    w_top_tree_enable = 1'b1;
    w_left_tree_enable = 1'b0;
    w_mux_sel = 2'b01;
    w_round_value = w_tu_width >> 1;
    w_shift_amount = I_TU_WIDTH_CODE;
  end
  else begin
    w_top_tree_enable = 1'b0;
    w_left_tree_enable = 1'b1;
    w_mux_sel = 2'b10;
    w_round_value = w_tu_height >> 1;
    w_shift_amount = I_TU_HEIGHT_CODE;
  end
end

// Operand gating forces unused tree inputs to zero and reduces switching.
assign w_top_lane_mask =
  (I_VALID && w_top_tree_enable) ? w_top_size_mask : '0;

assign w_left_lane_mask =
  (I_VALID && w_left_tree_enable) ? w_left_size_mask : '0;

// Backpressure propagates from the output register toward the input.
assign w_stage3_ready = !r_stage3_valid || I_READY;
assign w_stage2_ready = !r_stage2_valid || w_stage3_ready;
assign w_stage1_ready = !r_stage1_valid || w_stage2_ready;

assign O_READY = w_stage1_ready;
assign O_VALID = r_stage3_valid;
assign O_DC_VAL = r_dc_value;

generate
  for (gen_input = 0; gen_input < PARA_REF_NUM; gen_input = gen_input + 1) begin: GEN_INPUT_MASK
    assign w_top_masked[gen_input] =
      w_top_lane_mask[gen_input] ?
      I_TOP_REF[(gen_input*PARA_PIXEL_WD) +: PARA_PIXEL_WD] :
      {PARA_PIXEL_WD{1'b0}};

    assign w_left_masked[gen_input] =
      w_left_lane_mask[gen_input] ?
      I_LEFT_REF[(gen_input*PARA_PIXEL_WD) +: PARA_PIXEL_WD] :
      {PARA_PIXEL_WD{1'b0}};
  end
endgenerate

// Adder-tree levels one and two form the first pipeline stage.
generate
  for (gen_l1 = 0; gen_l1 < 16; gen_l1 = gen_l1 + 1) begin: GEN_ADDER_L1
    assign w_top_l1[gen_l1] =
      {1'b0, w_top_masked[2*gen_l1]} +
      {1'b0, w_top_masked[(2*gen_l1)+1]};

    assign w_left_l1[gen_l1] =
      {1'b0, w_left_masked[2*gen_l1]} +
      {1'b0, w_left_masked[(2*gen_l1)+1]};
  end
endgenerate

generate
  for (gen_l2 = 0; gen_l2 < 8; gen_l2 = gen_l2 + 1) begin: GEN_ADDER_L2
    assign w_top_l2[gen_l2] =
      {1'b0, w_top_l1[2*gen_l2]} +
      {1'b0, w_top_l1[(2*gen_l2)+1]};

    assign w_left_l2[gen_l2] =
      {1'b0, w_left_l1[2*gen_l2]} +
      {1'b0, w_left_l1[(2*gen_l2)+1]};
  end
endgenerate

// The first-stage valid register is reset because it qualifies all stage data.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage1_valid <= 1'b0;
  else if (w_stage1_ready)
    r_stage1_valid <= I_VALID;
end

// The first-stage datapath registers do not require reset because valid qualifies them.
generate
  for (gen_stage1_reg = 0; gen_stage1_reg < 8; gen_stage1_reg = gen_stage1_reg + 1) begin: GEN_STAGE1_REG
    always_ff @ (posedge I_CLK) begin
      if (w_stage1_ready && I_VALID) begin
        r_top_l2[gen_stage1_reg] <= w_top_l2[gen_stage1_reg];
        r_left_l2[gen_stage1_reg] <= w_left_l2[gen_stage1_reg];
      end
    end
  end
endgenerate

always_ff @ (posedge I_CLK) begin
  if (w_stage1_ready && I_VALID) begin
    r_stage1_mux_sel <= w_mux_sel;
    r_stage1_round_value <= w_round_value;
    r_stage1_shift_amount <= w_shift_amount;
  end
end

// Adder-tree levels three through five form the second pipeline stage.
generate
  for (gen_l3 = 0; gen_l3 < 4; gen_l3 = gen_l3 + 1) begin: GEN_ADDER_L3
    assign w_top_l3[gen_l3] =
      {1'b0, r_top_l2[2*gen_l3]} +
      {1'b0, r_top_l2[(2*gen_l3)+1]};

    assign w_left_l3[gen_l3] =
      {1'b0, r_left_l2[2*gen_l3]} +
      {1'b0, r_left_l2[(2*gen_l3)+1]};
  end
endgenerate

generate
  for (gen_l4 = 0; gen_l4 < 2; gen_l4 = gen_l4 + 1) begin: GEN_ADDER_L4
    assign w_top_l4[gen_l4] =
      {1'b0, w_top_l3[2*gen_l4]} +
      {1'b0, w_top_l3[(2*gen_l4)+1]};

    assign w_left_l4[gen_l4] =
      {1'b0, w_left_l3[2*gen_l4]} +
      {1'b0, w_left_l3[(2*gen_l4)+1]};
  end
endgenerate

assign w_top_l5 =
  {1'b0, w_top_l4[0]} +
  {1'b0, w_top_l4[1]};

assign w_left_l5 =
  {1'b0, w_left_l4[0]} +
  {1'b0, w_left_l4[1]};

// The second-stage valid register is reset because it qualifies all stage data.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage2_valid <= 1'b0;
  else if (w_stage2_ready)
    r_stage2_valid <= r_stage1_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage2_ready && r_stage1_valid) begin
    r_sum_top <= w_top_l5;
    r_sum_left <= w_left_l5;
    r_stage2_mux_sel <= r_stage1_mux_sel;
    r_stage2_round_value <= r_stage1_round_value;
    r_stage2_shift_amount <= r_stage1_shift_amount;
  end
end

// The geometry multiplexer selects square, wide, or tall DC accumulation.
always_comb begin
  w_selected_sum = '0;

  unique casez (r_stage2_mux_sel)
    2'b00: begin
      w_selected_sum =
        {1'b0, r_sum_top} +
        {1'b0, r_sum_left};
    end
    2'b01: begin
      w_selected_sum = {1'b0, r_sum_top};
    end
    2'b10: begin
      w_selected_sum = {1'b0, r_sum_left};
    end
    default: begin
      w_selected_sum = '0;
    end
  endcase
end

// Explicit width extension preserves the carry bit during the rounding addition.
assign w_rounded_sum_ext =
  {1'b0, w_selected_sum} +
  {{(PARA_PIXEL_WD+1){1'b0}}, r_stage2_round_value};

assign w_shifted_value =
  w_rounded_sum_ext >> r_stage2_shift_amount;

assign w_dc_value =
  w_shifted_value[PARA_PIXEL_WD-1:0];

// The third-stage output register holds the payload stable during backpressure.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_stage3_valid <= 1'b0;
  else if (w_stage3_ready)
    r_stage3_valid <= r_stage2_valid;
end

always_ff @ (posedge I_CLK) begin
  if (w_stage3_ready && r_stage2_valid)
    r_dc_value <= w_dc_value;
end

endmodule: INTRA_DC_PRED_CORE
