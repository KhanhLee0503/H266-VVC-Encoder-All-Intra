//-----------------------------------------------------------
// Description: This module classifies the dominant texture
// direction of the current VVC coding-tree node from the four
// accumulated directional variations. The minimum directional
// variation is m1 and the second minimum is m2. Dominance is
// detected with the hardware-friendly ratio 2*m2 >= 3*m1.
// A stronger dominance flag is also generated with m2 >= 2*m1
// for the direct split heuristic. The module is purely
// combinational and does not use multiplication hardware.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_DIRECTION_CLASSIFIER
#(
  parameter PARA_DV_WD = 23
)
(
  input                           I_VALID,

  input      [PARA_DV_WD-1:0]     I_DV_H,
  input      [PARA_DV_WD-1:0]     I_DV_V,
  input      [PARA_DV_WD-1:0]     I_DV_DL,
  input      [PARA_DV_WD-1:0]     I_DV_DR,

  output logic                    O_VALID,

  output logic                    O_DOMINANT,
  output logic                    O_STRONG_DOMINANT,

  output logic [2:0]              O_DIRECTION,
  output logic [2:0]              O_SECOND_DIRECTION,

  output logic                    O_HORIZONTAL_DOMINANT,
  output logic                    O_VERTICAL_DOMINANT,
  output logic                    O_DIAGONAL_DOMINANT,

  output logic [PARA_DV_WD-1:0]   O_M1,
  output logic [PARA_DV_WD-1:0]   O_M2
);

localparam PARA_DIR_NONE = 3'd0;
localparam PARA_DIR_H    = 3'd1;
localparam PARA_DIR_V    = 3'd2;
localparam PARA_DIR_DL   = 3'd3;
localparam PARA_DIR_DR   = 3'd4;

logic [PARA_DV_WD-1:0] w_pair_0_min;
logic [PARA_DV_WD-1:0] w_pair_0_max;
logic [PARA_DV_WD-1:0] w_pair_1_min;
logic [PARA_DV_WD-1:0] w_pair_1_max;

logic [2:0] w_pair_0_min_dir;
logic [2:0] w_pair_0_max_dir;
logic [2:0] w_pair_1_min_dir;
logic [2:0] w_pair_1_max_dir;

logic [PARA_DV_WD-1:0] w_m1;
logic [PARA_DV_WD-1:0] w_m2;

logic [2:0] w_m1_dir;
logic [2:0] w_m2_dir;

logic [PARA_DV_WD:0] w_m2_x2;
logic [PARA_DV_WD:0] w_m1_x2;
logic [PARA_DV_WD:0] w_m1_x3;
logic [PARA_DV_WD:0] w_m2_ext;

logic w_dominant;
logic w_strong_dominant;

// The first compare-select pair sorts horizontal and vertical
// variation values. The less-than-or-equal relation defines a
// deterministic direction when equal values are encountered.
always_comb begin
  w_pair_0_min     = I_DV_H;
  w_pair_0_max     = I_DV_V;
  w_pair_0_min_dir = PARA_DIR_H;
  w_pair_0_max_dir = PARA_DIR_V;

  if (I_DV_V < I_DV_H) begin
    w_pair_0_min     = I_DV_V;
    w_pair_0_max     = I_DV_H;
    w_pair_0_min_dir = PARA_DIR_V;
    w_pair_0_max_dir = PARA_DIR_H;
  end
end

// The second compare-select pair sorts both diagonal variation
// values.
always_comb begin
  w_pair_1_min     = I_DV_DL;
  w_pair_1_max     = I_DV_DR;
  w_pair_1_min_dir = PARA_DIR_DL;
  w_pair_1_max_dir = PARA_DIR_DR;

  if (I_DV_DR < I_DV_DL) begin
    w_pair_1_min     = I_DV_DR;
    w_pair_1_max     = I_DV_DL;
    w_pair_1_min_dir = PARA_DIR_DR;
    w_pair_1_max_dir = PARA_DIR_DL;
  end
end

// The pair minima are compared to obtain the global minimum m1.
// The second minimum m2 is then selected from the unused pair
// minimum and the maximum belonging to the winning pair.
always_comb begin
  w_m1     = w_pair_0_min;
  w_m1_dir = w_pair_0_min_dir;
  w_m2     = w_pair_1_min;
  w_m2_dir = w_pair_1_min_dir;

  if (w_pair_0_min <= w_pair_1_min) begin
    w_m1     = w_pair_0_min;
    w_m1_dir = w_pair_0_min_dir;

    if (w_pair_0_max <= w_pair_1_min) begin
      w_m2     = w_pair_0_max;
      w_m2_dir = w_pair_0_max_dir;
    end
    else begin
      w_m2     = w_pair_1_min;
      w_m2_dir = w_pair_1_min_dir;
    end
  end
  else begin
    w_m1     = w_pair_1_min;
    w_m1_dir = w_pair_1_min_dir;

    if (w_pair_1_max <= w_pair_0_min) begin
      w_m2     = w_pair_1_max;
      w_m2_dir = w_pair_1_max_dir;
    end
    else begin
      w_m2     = w_pair_0_min;
      w_m2_dir = w_pair_0_min_dir;
    end
  end
end

// Ratio arithmetic is implemented only with shifts and additions.
// Dominant condition:
//   m2 / m1 >= 1.5
// is implemented as:
//   2*m2 >= 3*m1.
//
// Strong dominant condition:
//   m2 / m1 >= 2.0
// is implemented as:
//   m2 >= 2*m1.
assign w_m2_x2 = {w_m2, 1'b0};
assign w_m1_x2 = {w_m1, 1'b0};

assign w_m1_x3 =
  {1'b0, w_m1} +
  w_m1_x2;

assign w_m2_ext =
  {1'b0, w_m2};

// If m2 is zero, at least two directions have zero variation.
// Such a tie is treated as having no unique dominant direction.
assign w_dominant =
  (w_m2 != {PARA_DV_WD{1'b0}}) &&
  (w_m2_x2 >= w_m1_x3);

assign w_strong_dominant =
  w_dominant &&
  (w_m2_ext >= w_m1_x2);

// Outputs are qualified by I_VALID. Direction-specific flags are
// asserted only when a unique dominant direction is detected.
always_comb begin
  O_VALID               = I_VALID;
  O_DOMINANT            = 1'b0;
  O_STRONG_DOMINANT     = 1'b0;
  O_DIRECTION           = PARA_DIR_NONE;
  O_SECOND_DIRECTION    = PARA_DIR_NONE;
  O_HORIZONTAL_DOMINANT = 1'b0;
  O_VERTICAL_DOMINANT   = 1'b0;
  O_DIAGONAL_DOMINANT   = 1'b0;
  O_M1                  = w_m1;
  O_M2                  = w_m2;

  if (I_VALID) begin
    O_DOMINANT         = w_dominant;
    O_STRONG_DOMINANT  = w_strong_dominant;
    O_DIRECTION        = w_m1_dir;
    O_SECOND_DIRECTION = w_m2_dir;

    if (w_dominant) begin
      unique casez (w_m1_dir)
        PARA_DIR_H: begin
          O_HORIZONTAL_DOMINANT = 1'b1;
        end

        PARA_DIR_V: begin
          O_VERTICAL_DOMINANT = 1'b1;
        end

        PARA_DIR_DL: begin
          O_DIAGONAL_DOMINANT = 1'b1;
        end

        PARA_DIR_DR: begin
          O_DIAGONAL_DOMINANT = 1'b1;
        end

        default: begin
          O_HORIZONTAL_DOMINANT = 1'b0;
          O_VERTICAL_DOMINANT   = 1'b0;
          O_DIAGONAL_DOMINANT   = 1'b0;
        end
      endcase
    end
  end
end

endmodule: PARTITION_DIRECTION_CLASSIFIER
