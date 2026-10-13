//-----------------------------------------------------------
// Description: This module derives the five non-planar luma MPM candidates
// from the left and above intra modes according to ITU-T H.266 (01/2026),
// clause 8.4.2. Invalid neighbours are replaced with PLANAR mode zero.
// The registered output uses a one-entry ready/valid interface.
//-----------------------------------------------------------
`timescale 1ns/1ps
module INTRA_MPM_LIST_GENERATOR
#(
  parameter PARA_CTU_ID_WD = 9,
  parameter PARA_CU_ID_WD  = 8,
  parameter PARA_MODE_WD   = 7
)
(
  input                             I_CLK,
  input                             I_RESETN,
  input                             I_VALID,
  output logic                      O_READY,
  input      [PARA_CTU_ID_WD-1:0]   I_CTU_ID,
  input      [PARA_CU_ID_WD-1:0]    I_CU_ID,
  input                             I_LEFT_VALID,
  input      [PARA_MODE_WD-1:0]     I_LEFT_MODE,
  input                             I_ABOVE_VALID,
  input      [PARA_MODE_WD-1:0]     I_ABOVE_MODE,
  output logic                      O_VALID,
  input                             I_READY,
  output logic [PARA_CTU_ID_WD-1:0] O_CTU_ID,
  output logic [PARA_CU_ID_WD-1:0]  O_CU_ID,
  output logic [PARA_MODE_WD-1:0]   O_MPM_0,
  output logic [PARA_MODE_WD-1:0]   O_MPM_1,
  output logic [PARA_MODE_WD-1:0]   O_MPM_2,
  output logic [PARA_MODE_WD-1:0]   O_MPM_3,
  output logic [PARA_MODE_WD-1:0]   O_MPM_4,
  output logic                      O_ERROR
);

localparam [PARA_MODE_WD-1:0] PARA_PLANAR_MODE = PARA_MODE_WD'(0);
localparam [PARA_MODE_WD-1:0] PARA_DC_MODE = PARA_MODE_WD'(1);
localparam [PARA_MODE_WD-1:0] PARA_MAX_MODE = PARA_MODE_WD'(66);

logic r_valid;
logic r_error;
logic [PARA_CTU_ID_WD-1:0] r_ctu_id;
logic [PARA_CU_ID_WD-1:0] r_cu_id;
logic [PARA_MODE_WD-1:0] r_mpm_0;
logic [PARA_MODE_WD-1:0] r_mpm_1;
logic [PARA_MODE_WD-1:0] r_mpm_2;
logic [PARA_MODE_WD-1:0] r_mpm_3;
logic [PARA_MODE_WD-1:0] r_mpm_4;
logic [PARA_MODE_WD-1:0] w_mode_a;
logic [PARA_MODE_WD-1:0] w_mode_b;
logic [PARA_MODE_WD-1:0] w_min_ab;
logic [PARA_MODE_WD-1:0] w_max_ab;
logic [PARA_MODE_WD-1:0] w_mode_diff;
logic [PARA_MODE_WD-1:0] w_mpm_0;
logic [PARA_MODE_WD-1:0] w_mpm_1;
logic [PARA_MODE_WD-1:0] w_mpm_2;
logic [PARA_MODE_WD-1:0] w_mpm_3;
logic [PARA_MODE_WD-1:0] w_mpm_4;
logic w_input_error;
logic w_accept;

assign w_mode_a = I_LEFT_VALID ? I_LEFT_MODE : PARA_PLANAR_MODE;
assign w_mode_b = I_ABOVE_VALID ? I_ABOVE_MODE : PARA_PLANAR_MODE;
assign w_min_ab = (w_mode_a < w_mode_b) ? w_mode_a : w_mode_b;
assign w_max_ab = (w_mode_a > w_mode_b) ? w_mode_a : w_mode_b;
assign w_mode_diff = w_max_ab - w_min_ab;
assign w_input_error = (I_LEFT_VALID && (I_LEFT_MODE > PARA_MAX_MODE)) || (I_ABOVE_VALID && (I_ABOVE_MODE > PARA_MAX_MODE));
assign w_accept = !r_valid || I_READY;
assign O_READY = w_accept;
assign O_VALID = r_valid;
assign O_CTU_ID = r_ctu_id;
assign O_CU_ID = r_cu_id;
assign O_MPM_0 = r_mpm_0;
assign O_MPM_1 = r_mpm_1;
assign O_MPM_2 = r_mpm_2;
assign O_MPM_3 = r_mpm_3;
assign O_MPM_4 = r_mpm_4;
assign O_ERROR = r_error;

// Each wrapped angular expression is explicitly reduced modulo 64.
// The extra offset of two maps the wrapped value to regular angular modes.
always_comb begin
  w_mpm_0 = PARA_DC_MODE;
  w_mpm_1 = PARA_MODE_WD'(50);
  w_mpm_2 = PARA_MODE_WD'(18);
  w_mpm_3 = PARA_MODE_WD'(46);
  w_mpm_4 = PARA_MODE_WD'(54);

  if ((w_mode_a == w_mode_b) && (w_mode_a > PARA_DC_MODE)) begin
    w_mpm_0 = w_mode_a;
    w_mpm_1 = PARA_MODE_WD'(2) + ((w_mode_a + PARA_MODE_WD'(61)) & PARA_MODE_WD'(63));
    w_mpm_2 = PARA_MODE_WD'(2) + ((w_mode_a - PARA_MODE_WD'(1)) & PARA_MODE_WD'(63));
    w_mpm_3 = PARA_MODE_WD'(2) + ((w_mode_a + PARA_MODE_WD'(60)) & PARA_MODE_WD'(63));
    w_mpm_4 = PARA_MODE_WD'(2) + (w_mode_a & PARA_MODE_WD'(63));
  end
  else if ((w_mode_a != w_mode_b) && ((w_mode_a > PARA_DC_MODE) || (w_mode_b > PARA_DC_MODE))) begin
    if ((w_mode_a > PARA_DC_MODE) && (w_mode_b > PARA_DC_MODE)) begin
      w_mpm_0 = w_mode_a;
      w_mpm_1 = w_mode_b;

      if (w_mode_diff == PARA_MODE_WD'(1)) begin
        w_mpm_2 = PARA_MODE_WD'(2) + ((w_min_ab + PARA_MODE_WD'(61)) & PARA_MODE_WD'(63));
        w_mpm_3 = PARA_MODE_WD'(2) + ((w_max_ab - PARA_MODE_WD'(1)) & PARA_MODE_WD'(63));
        w_mpm_4 = PARA_MODE_WD'(2) + ((w_min_ab + PARA_MODE_WD'(60)) & PARA_MODE_WD'(63));
      end
      else if (w_mode_diff >= PARA_MODE_WD'(62)) begin
        w_mpm_2 = PARA_MODE_WD'(2) + ((w_min_ab - PARA_MODE_WD'(1)) & PARA_MODE_WD'(63));
        w_mpm_3 = PARA_MODE_WD'(2) + ((w_max_ab + PARA_MODE_WD'(61)) & PARA_MODE_WD'(63));
        w_mpm_4 = PARA_MODE_WD'(2) + (w_min_ab & PARA_MODE_WD'(63));
      end
      else if (w_mode_diff == PARA_MODE_WD'(2)) begin
        w_mpm_2 = PARA_MODE_WD'(2) + ((w_min_ab - PARA_MODE_WD'(1)) & PARA_MODE_WD'(63));
        w_mpm_3 = PARA_MODE_WD'(2) + ((w_min_ab + PARA_MODE_WD'(61)) & PARA_MODE_WD'(63));
        w_mpm_4 = PARA_MODE_WD'(2) + ((w_max_ab - PARA_MODE_WD'(1)) & PARA_MODE_WD'(63));
      end
      else begin
        w_mpm_2 = PARA_MODE_WD'(2) + ((w_min_ab + PARA_MODE_WD'(61)) & PARA_MODE_WD'(63));
        w_mpm_3 = PARA_MODE_WD'(2) + ((w_min_ab - PARA_MODE_WD'(1)) & PARA_MODE_WD'(63));
        w_mpm_4 = PARA_MODE_WD'(2) + ((w_max_ab + PARA_MODE_WD'(61)) & PARA_MODE_WD'(63));
      end
    end
    else begin
      w_mpm_0 = w_max_ab;
      w_mpm_1 = PARA_MODE_WD'(2) + ((w_max_ab + PARA_MODE_WD'(61)) & PARA_MODE_WD'(63));
      w_mpm_2 = PARA_MODE_WD'(2) + ((w_max_ab - PARA_MODE_WD'(1)) & PARA_MODE_WD'(63));
      w_mpm_3 = PARA_MODE_WD'(2) + ((w_max_ab + PARA_MODE_WD'(60)) & PARA_MODE_WD'(63));
      w_mpm_4 = PARA_MODE_WD'(2) + (w_max_ab & PARA_MODE_WD'(63));
    end
  end
end

// Reset only control state. The mode payload is used only when O_VALID is high.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_valid <= 1'b0;
    r_error <= 1'b0;
  end
  else if (w_accept) begin
    r_valid <= I_VALID;

    if (I_VALID)
      r_error <= w_input_error;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_RESETN && w_accept && I_VALID) begin
    r_ctu_id <= I_CTU_ID;
    r_cu_id <= I_CU_ID;
    r_mpm_0 <= w_input_error ? PARA_DC_MODE : w_mpm_0;
    r_mpm_1 <= w_input_error ? PARA_MODE_WD'(50) : w_mpm_1;
    r_mpm_2 <= w_input_error ? PARA_MODE_WD'(18) : w_mpm_2;
    r_mpm_3 <= w_input_error ? PARA_MODE_WD'(46) : w_mpm_3;
    r_mpm_4 <= w_input_error ? PARA_MODE_WD'(54) : w_mpm_4;
  end
end

endmodule: INTRA_MPM_LIST_GENERATOR
