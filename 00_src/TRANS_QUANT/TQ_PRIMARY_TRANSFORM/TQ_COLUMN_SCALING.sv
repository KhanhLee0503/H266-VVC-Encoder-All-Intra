//-----------------------------------------------------------
// Description: This module implements VTM-style second-stage
// forward transform scaling on four signed coefficients per
// cycle. The column transform length selects a right shift
// of 8, 9, 10, or 11 for 4, 8, 16, or 32 points.
// Each lane adds a positive rounding offset and performs a
// signed arithmetic right shift. A registered ready/valid
// output preserves the column-end marker and reports signed
// output-width overflow. No clipping or saturation is used.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_COLUMN_SCALING #(
  parameter PARA_INPUT_WD = 28,
  parameter PARA_OUTPUT_WD = 16
)(
  input                                   I_CLK,
  input                                   I_RESETN,
  input         [1:0]                     I_TRANSFORM_SIZE,
  input         [4*PARA_INPUT_WD-1:0]     I_DATA,
  input                                   I_DATA_VALID,
  output logic                            I_DATA_READY,
  input                                   I_DATA_LAST,
  output logic  [4*PARA_OUTPUT_WD-1:0]    O_DATA,
  output logic                            O_DATA_VALID,
  input                                   O_DATA_READY,
  output logic                            O_DATA_LAST,
  output logic  [3:0]                     O_OVERFLOW
);
  localparam [1:0] PARA_SIZE_4 = 2'b00;
  localparam [1:0] PARA_SIZE_8 = 2'b01;
  localparam [1:0] PARA_SIZE_16 = 2'b10;
  localparam [1:0] PARA_SIZE_32 = 2'b11;

  logic [3:0]                             w_shift_amount;
  logic signed [PARA_INPUT_WD:0]          w_round_offset;
  logic [4*PARA_OUTPUT_WD-1:0]            w_scaled_data;
  logic [3:0]                             w_overflow;
  logic                                   w_input_fire;
  logic                                   r_output_valid;
  logic                                   r_output_last;
  logic [4*PARA_OUTPUT_WD-1:0]            r_output_data;
  logic [3:0]                             r_overflow;

  // VTM second-stage shift for 10-bit, non-extended mode:
  // shift = log2(column_length) + TRANSFORM_MATRIX_SHIFT.
  always_comb begin
    w_shift_amount = 4'd8;
    w_round_offset = 128;
    unique casez (I_TRANSFORM_SIZE)
      PARA_SIZE_4: begin
        w_shift_amount = 4'd8;
        w_round_offset = 128;
      end
      PARA_SIZE_8: begin
        w_shift_amount = 4'd9;
        w_round_offset = 256;
      end
      PARA_SIZE_16: begin
        w_shift_amount = 4'd10;
        w_round_offset = 512;
      end
      PARA_SIZE_32: begin
        w_shift_amount = 4'd11;
        w_round_offset = 1024;
      end
      default: begin
        w_shift_amount = 4'd8;
        w_round_offset = 128;
      end
    endcase
  end

  for (genvar lane_idx = 0; lane_idx < 4; lane_idx++) begin: gen_scaling_lane
    logic signed [PARA_INPUT_WD:0] w_extended_data;
    logic signed [PARA_INPUT_WD:0] w_rounded_data;
    logic signed [PARA_INPUT_WD:0] w_shifted_data;

    // Extend before rounding to avoid overflow at the maximum
    // positive signed input. Check width before narrowing.
    assign w_extended_data = $signed({I_DATA[(lane_idx+1)*PARA_INPUT_WD-1], I_DATA[lane_idx*PARA_INPUT_WD +: PARA_INPUT_WD]});
    assign w_rounded_data = w_extended_data + w_round_offset;
    assign w_shifted_data = w_rounded_data >>> w_shift_amount;
    assign w_scaled_data[lane_idx*PARA_OUTPUT_WD +: PARA_OUTPUT_WD] = w_shifted_data[PARA_OUTPUT_WD-1:0];
    assign w_overflow[lane_idx] = (w_shifted_data[PARA_INPUT_WD:PARA_OUTPUT_WD] != {(PARA_INPUT_WD-PARA_OUTPUT_WD+1){w_shifted_data[PARA_OUTPUT_WD-1]}});
  end

  // One output register: a new beat is accepted only if the
  // register is empty or downstream consumes its old beat.
  assign I_DATA_READY = I_RESETN && (!r_output_valid || O_DATA_READY);
  assign w_input_fire = I_DATA_VALID && I_DATA_READY;
  assign O_DATA = r_output_data;
  assign O_DATA_VALID = r_output_valid;
  assign O_DATA_LAST = r_output_valid && r_output_last;
  assign O_OVERFLOW = r_output_valid ? r_overflow : 4'b0000;

  // Reset only the control valid, not the wide datapath.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_output_valid <= 1'b0;
    else if (I_DATA_READY)
      r_output_valid <= I_DATA_VALID;
  end

  always_ff @(posedge I_CLK) begin
    if (w_input_fire) begin
      r_output_data <= w_scaled_data;
      r_output_last <= I_DATA_LAST;
      r_overflow <= w_overflow;
    end
  end
endmodule: TQ_COLUMN_SCALING
