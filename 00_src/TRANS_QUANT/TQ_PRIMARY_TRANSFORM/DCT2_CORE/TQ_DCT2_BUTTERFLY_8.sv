//-----------------------------------------------------------
// Description: This module implements the signed 8-point DCT-II
// butterfly pre-addition. It produces the even and odd vectors from
// symmetric input pairs and registers both vectors in one elastic stage.
// The input contains a complete vector; streaming capture is external.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DCT2_BUTTERFLY_8 #(
  parameter PARA_DATA_WD = 16,
  localparam PARA_OUTPUT_WD = PARA_DATA_WD + 1
)(
  input                               I_CLK,
  input                               I_RESETN,
  input                               I_DATA_VALID,
  output logic                        O_DATA_READY,
  input        [8*PARA_DATA_WD-1:0]   I_DATA,
  output logic                        O_DATA_VALID,
  input                               I_DATA_READY,
  output logic [4*PARA_OUTPUT_WD-1:0] O_EVEN_DATA,
  output logic [4*PARA_OUTPUT_WD-1:0] O_ODD_DATA
);
  logic                        r_data_valid;
  logic                        w_stage_enable;
  logic [4*PARA_OUTPUT_WD-1:0] w_even_data;
  logic [4*PARA_OUTPUT_WD-1:0] w_odd_data;
  logic [4*PARA_OUTPUT_WD-1:0] r_even_data;
  logic [4*PARA_OUTPUT_WD-1:0] r_odd_data;

  // Lane zero occupies the least significant sample slice in every bus.
  for (genvar pair_idx = 0; pair_idx < 4; pair_idx++) begin: gen_butterfly_pair
    logic signed [PARA_OUTPUT_WD-1:0] w_first;
    logic signed [PARA_OUTPUT_WD-1:0] w_last;
    logic signed [PARA_OUTPUT_WD-1:0] w_sum;
    logic signed [PARA_OUTPUT_WD-1:0] w_difference;

    assign w_first = $signed({I_DATA[(pair_idx+1)*PARA_DATA_WD-1], I_DATA[pair_idx*PARA_DATA_WD +: PARA_DATA_WD]});
    assign w_last = $signed({I_DATA[(8-pair_idx)*PARA_DATA_WD-1], I_DATA[(8-1-pair_idx)*PARA_DATA_WD +: PARA_DATA_WD]});
    assign w_sum = w_first + w_last;
    assign w_difference = w_first - w_last;
    assign w_even_data[pair_idx*PARA_OUTPUT_WD +: PARA_OUTPUT_WD] = w_sum;
    assign w_odd_data[pair_idx*PARA_OUTPUT_WD +: PARA_OUTPUT_WD] = w_difference;
  end

  // One valid flag qualifies both output vectors as an atomic pair.
  assign w_stage_enable = !r_data_valid || I_DATA_READY;
  assign O_DATA_READY = w_stage_enable;
  assign O_DATA_VALID = r_data_valid;
  assign O_EVEN_DATA = r_even_data;
  assign O_ODD_DATA = r_odd_data;

  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_data_valid <= 1'b0;
    else if (w_stage_enable)
      r_data_valid <= I_DATA_VALID;
  end

  // The payload registers do not require reset because valid qualifies them.
  always_ff @(posedge I_CLK) begin
    if (w_stage_enable && I_DATA_VALID) begin
      r_even_data <= w_even_data;
      r_odd_data <= w_odd_data;
    end
  end
endmodule: TQ_DCT2_BUTTERFLY_8
