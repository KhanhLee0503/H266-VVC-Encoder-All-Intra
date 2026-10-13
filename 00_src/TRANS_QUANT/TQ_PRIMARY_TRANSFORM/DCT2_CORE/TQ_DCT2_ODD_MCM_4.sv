//-----------------------------------------------------------
// Description: This module computes the two odd-frequency
// coefficients of the forward 4-point DCT-II transform. It
// accepts a complete two-sample odd butterfly vector and
// implements constant products 36 and 83 by shift-add logic.
// Three elastic pipeline stages preserve ready/valid handshakes.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DCT2_ODD_MCM_4 #(
  parameter PARA_DATA_WD = 17,
  parameter PARA_RESULT_WD = 28
)(
  input                                I_CLK,
  input                                I_RESETN,
  input                                I_DATA_VALID,
  output logic                         O_DATA_READY,
  input        [2*PARA_DATA_WD-1:0]    I_DATA,
  output logic                         O_DATA_VALID,
  input                                I_DATA_READY,
  output logic [2*PARA_RESULT_WD-1:0]  O_DATA
);
  logic [2:0]                          r_valid;
  logic [2:0]                          w_ready;
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_x [0:1];
  logic signed [PARA_RESULT_WD-1:0]    r_stage0_9x [0:1];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_36x [0:1];
  logic signed [PARA_RESULT_WD-1:0]    r_stage1_83x [0:1];
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_y1;
  logic signed [PARA_RESULT_WD-1:0]    r_stage2_y3;

  // A stage advances only when its successor can accept data.
  assign w_ready[2] = !r_valid[2] || I_DATA_READY;
  assign w_ready[1] = !r_valid[1] || w_ready[2];
  assign w_ready[0] = !r_valid[0] || w_ready[1];
  assign O_DATA_READY = w_ready[0];
  assign O_DATA_VALID = r_valid[2];
  assign O_DATA[0*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage2_y1;
  assign O_DATA[1*PARA_RESULT_WD +: PARA_RESULT_WD] = r_stage2_y3;

  // Valid bits are reset; all arithmetic payloads are valid-qualified.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_valid <= '0;
    else begin
      if (w_ready[0])
        r_valid[0] <= I_DATA_VALID;
      if (w_ready[1])
        r_valid[1] <= r_valid[0];
      if (w_ready[2])
        r_valid[2] <= r_valid[1];
    end
  end

  // The first stage builds a shared 9x term from each odd sample.
  for (genvar lane_idx = 0; lane_idx < 2; lane_idx++) begin: gen_constant_products
    logic signed [PARA_RESULT_WD-1:0] w_input;
    logic signed [PARA_RESULT_WD-1:0] w_9x;
    logic signed [PARA_RESULT_WD-1:0] w_83x;

    assign w_input = $signed(I_DATA[lane_idx*PARA_DATA_WD +: PARA_DATA_WD]);
    assign w_9x = (w_input <<< 3) + w_input;
    assign w_83x = (r_stage0_x[lane_idx] <<< 6) + (r_stage0_9x[lane_idx] <<< 1) + r_stage0_x[lane_idx];

    always_ff @(posedge I_CLK) begin
      if (w_ready[0] && I_DATA_VALID) begin
        r_stage0_x[lane_idx] <= w_input;
        r_stage0_9x[lane_idx] <= w_9x;
      end
      if (w_ready[1] && r_valid[0]) begin
        r_stage1_36x[lane_idx] <= r_stage0_9x[lane_idx] <<< 2;
        r_stage1_83x[lane_idx] <= w_83x;
      end
    end
  end

  // Local output order is y1, y3, one coefficient per packed lane.
  always_ff @(posedge I_CLK) begin
    if (w_ready[2] && r_valid[1]) begin
      r_stage2_y1 <= r_stage1_83x[0] + r_stage1_36x[1];
      r_stage2_y3 <= r_stage1_36x[0] - r_stage1_83x[1];
    end
  end
endmodule: TQ_DCT2_ODD_MCM_4
