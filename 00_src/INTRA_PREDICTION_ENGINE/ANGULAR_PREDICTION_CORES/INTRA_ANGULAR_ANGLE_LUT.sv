//-----------------------------------------------------------
// Description: This module decodes the mapped H.266/VVC angular intra
// prediction mode into the signed intra prediction angle and the absolute
// inverse-angle value used by the negative reference extension hardware.
// The input mode is the angular mode after wide-angle intra prediction
// mapping. The module also reports whether the mode is valid, whether the
// angle is negative or zero, and whether reference sample pre-filtering is
// enabled for the mapped mode. The implementation is purely combinational
// and does not perform run-time division.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_ANGLE_LUT
(
  input signed [7:0]         I_ANGULAR_MODE,

  output logic               O_MODE_VALID,
  output logic signed [10:0] O_INTRA_PRED_ANGLE,
  output logic [14:0]        O_INV_ANGLE_ABS,
  output logic               O_ANGLE_NEGATIVE,
  output logic               O_ANGLE_ZERO,
  output logic               O_REF_FILTER_FLAG
);

always_comb begin
  O_MODE_VALID = 1'b0;
  O_INTRA_PRED_ANGLE = 11'sd0;
  O_INV_ANGLE_ABS = 15'd0;

  unique casez (I_ANGULAR_MODE)
    -8'sd14: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd512;
      O_INV_ANGLE_ABS = 15'd32;
    end
    -8'sd13: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd341;
      O_INV_ANGLE_ABS = 15'd48;
    end
    -8'sd12: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd256;
      O_INV_ANGLE_ABS = 15'd64;
    end
    -8'sd11: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd171;
      O_INV_ANGLE_ABS = 15'd96;
    end
    -8'sd10: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd128;
      O_INV_ANGLE_ABS = 15'd128;
    end
    -8'sd9: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd102;
      O_INV_ANGLE_ABS = 15'd161;
    end
    -8'sd8: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd86;
      O_INV_ANGLE_ABS = 15'd191;
    end
    -8'sd7: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd73;
      O_INV_ANGLE_ABS = 15'd224;
    end
    -8'sd6: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd64;
      O_INV_ANGLE_ABS = 15'd256;
    end
    -8'sd5: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd57;
      O_INV_ANGLE_ABS = 15'd287;
    end
    -8'sd4: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd51;
      O_INV_ANGLE_ABS = 15'd321;
    end
    -8'sd3: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd45;
      O_INV_ANGLE_ABS = 15'd364;
    end
    -8'sd2: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd39;
      O_INV_ANGLE_ABS = 15'd420;
    end
    -8'sd1: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd35;
      O_INV_ANGLE_ABS = 15'd468;
    end
    8'sd2: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd32;
      O_INV_ANGLE_ABS = 15'd512;
    end
    8'sd3: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd29;
      O_INV_ANGLE_ABS = 15'd565;
    end
    8'sd4: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd26;
      O_INV_ANGLE_ABS = 15'd630;
    end
    8'sd5: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd23;
      O_INV_ANGLE_ABS = 15'd712;
    end
    8'sd6: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd20;
      O_INV_ANGLE_ABS = 15'd819;
    end
    8'sd7: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd18;
      O_INV_ANGLE_ABS = 15'd910;
    end
    8'sd8: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd16;
      O_INV_ANGLE_ABS = 15'd1024;
    end
    8'sd9: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd14;
      O_INV_ANGLE_ABS = 15'd1170;
    end
    8'sd10: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd12;
      O_INV_ANGLE_ABS = 15'd1365;
    end
    8'sd11: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd10;
      O_INV_ANGLE_ABS = 15'd1638;
    end
    8'sd12: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd8;
      O_INV_ANGLE_ABS = 15'd2048;
    end
    8'sd13: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd6;
      O_INV_ANGLE_ABS = 15'd2731;
    end
    8'sd14: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd4;
      O_INV_ANGLE_ABS = 15'd4096;
    end
    8'sd15: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd3;
      O_INV_ANGLE_ABS = 15'd5461;
    end
    8'sd16: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd2;
      O_INV_ANGLE_ABS = 15'd8192;
    end
    8'sd17: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd1;
      O_INV_ANGLE_ABS = 15'd16384;
    end
    8'sd18: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd0;
      O_INV_ANGLE_ABS = 15'd0;
    end
    8'sd19: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd1;
      O_INV_ANGLE_ABS = 15'd16384;
    end
    8'sd20: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd2;
      O_INV_ANGLE_ABS = 15'd8192;
    end
    8'sd21: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd3;
      O_INV_ANGLE_ABS = 15'd5461;
    end
    8'sd22: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd4;
      O_INV_ANGLE_ABS = 15'd4096;
    end
    8'sd23: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd6;
      O_INV_ANGLE_ABS = 15'd2731;
    end
    8'sd24: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd8;
      O_INV_ANGLE_ABS = 15'd2048;
    end
    8'sd25: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd10;
      O_INV_ANGLE_ABS = 15'd1638;
    end
    8'sd26: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd12;
      O_INV_ANGLE_ABS = 15'd1365;
    end
    8'sd27: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd14;
      O_INV_ANGLE_ABS = 15'd1170;
    end
    8'sd28: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd16;
      O_INV_ANGLE_ABS = 15'd1024;
    end
    8'sd29: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd18;
      O_INV_ANGLE_ABS = 15'd910;
    end
    8'sd30: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd20;
      O_INV_ANGLE_ABS = 15'd819;
    end
    8'sd31: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd23;
      O_INV_ANGLE_ABS = 15'd712;
    end
    8'sd32: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd26;
      O_INV_ANGLE_ABS = 15'd630;
    end
    8'sd33: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd29;
      O_INV_ANGLE_ABS = 15'd565;
    end
    8'sd34: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd32;
      O_INV_ANGLE_ABS = 15'd512;
    end
    8'sd35: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd29;
      O_INV_ANGLE_ABS = 15'd565;
    end
    8'sd36: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd26;
      O_INV_ANGLE_ABS = 15'd630;
    end
    8'sd37: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd23;
      O_INV_ANGLE_ABS = 15'd712;
    end
    8'sd38: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd20;
      O_INV_ANGLE_ABS = 15'd819;
    end
    8'sd39: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd18;
      O_INV_ANGLE_ABS = 15'd910;
    end
    8'sd40: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd16;
      O_INV_ANGLE_ABS = 15'd1024;
    end
    8'sd41: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd14;
      O_INV_ANGLE_ABS = 15'd1170;
    end
    8'sd42: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd12;
      O_INV_ANGLE_ABS = 15'd1365;
    end
    8'sd43: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd10;
      O_INV_ANGLE_ABS = 15'd1638;
    end
    8'sd44: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd8;
      O_INV_ANGLE_ABS = 15'd2048;
    end
    8'sd45: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd6;
      O_INV_ANGLE_ABS = 15'd2731;
    end
    8'sd46: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd4;
      O_INV_ANGLE_ABS = 15'd4096;
    end
    8'sd47: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd3;
      O_INV_ANGLE_ABS = 15'd5461;
    end
    8'sd48: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd2;
      O_INV_ANGLE_ABS = 15'd8192;
    end
    8'sd49: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = -11'sd1;
      O_INV_ANGLE_ABS = 15'd16384;
    end
    8'sd50: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd0;
      O_INV_ANGLE_ABS = 15'd0;
    end
    8'sd51: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd1;
      O_INV_ANGLE_ABS = 15'd16384;
    end
    8'sd52: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd2;
      O_INV_ANGLE_ABS = 15'd8192;
    end
    8'sd53: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd3;
      O_INV_ANGLE_ABS = 15'd5461;
    end
    8'sd54: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd4;
      O_INV_ANGLE_ABS = 15'd4096;
    end
    8'sd55: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd6;
      O_INV_ANGLE_ABS = 15'd2731;
    end
    8'sd56: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd8;
      O_INV_ANGLE_ABS = 15'd2048;
    end
    8'sd57: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd10;
      O_INV_ANGLE_ABS = 15'd1638;
    end
    8'sd58: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd12;
      O_INV_ANGLE_ABS = 15'd1365;
    end
    8'sd59: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd14;
      O_INV_ANGLE_ABS = 15'd1170;
    end
    8'sd60: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd16;
      O_INV_ANGLE_ABS = 15'd1024;
    end
    8'sd61: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd18;
      O_INV_ANGLE_ABS = 15'd910;
    end
    8'sd62: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd20;
      O_INV_ANGLE_ABS = 15'd819;
    end
    8'sd63: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd23;
      O_INV_ANGLE_ABS = 15'd712;
    end
    8'sd64: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd26;
      O_INV_ANGLE_ABS = 15'd630;
    end
    8'sd65: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd29;
      O_INV_ANGLE_ABS = 15'd565;
    end
    8'sd66: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd32;
      O_INV_ANGLE_ABS = 15'd512;
    end
    8'sd67: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd35;
      O_INV_ANGLE_ABS = 15'd468;
    end
    8'sd68: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd39;
      O_INV_ANGLE_ABS = 15'd420;
    end
    8'sd69: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd45;
      O_INV_ANGLE_ABS = 15'd364;
    end
    8'sd70: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd51;
      O_INV_ANGLE_ABS = 15'd321;
    end
    8'sd71: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd57;
      O_INV_ANGLE_ABS = 15'd287;
    end
    8'sd72: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd64;
      O_INV_ANGLE_ABS = 15'd256;
    end
    8'sd73: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd73;
      O_INV_ANGLE_ABS = 15'd224;
    end
    8'sd74: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd86;
      O_INV_ANGLE_ABS = 15'd191;
    end
    8'sd75: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd102;
      O_INV_ANGLE_ABS = 15'd161;
    end
    8'sd76: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd128;
      O_INV_ANGLE_ABS = 15'd128;
    end
    8'sd77: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd171;
      O_INV_ANGLE_ABS = 15'd96;
    end
    8'sd78: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd256;
      O_INV_ANGLE_ABS = 15'd64;
    end
    8'sd79: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd341;
      O_INV_ANGLE_ABS = 15'd48;
    end
    8'sd80: begin
      O_MODE_VALID = 1'b1;
      O_INTRA_PRED_ANGLE = 11'sd512;
      O_INV_ANGLE_ABS = 15'd32;
    end

    default: begin
      O_MODE_VALID = 1'b0;
      O_INTRA_PRED_ANGLE = 11'sd0;
      O_INV_ANGLE_ABS = 15'd0;
    end
  endcase
end

always_comb begin
  O_REF_FILTER_FLAG = 1'b0;

  unique casez (I_ANGULAR_MODE)
    -8'sd14,
    -8'sd12,
    -8'sd10,
    -8'sd6,
    8'sd2,
    8'sd34,
    8'sd66,
    8'sd72,
    8'sd76,
    8'sd78,
    8'sd80: begin
      O_REF_FILTER_FLAG = 1'b1;
    end

    default: begin
      O_REF_FILTER_FLAG = 1'b0;
    end
  endcase
end

always_comb begin
  O_ANGLE_NEGATIVE =
    O_MODE_VALID &&
    O_INTRA_PRED_ANGLE[10];

  O_ANGLE_ZERO =
    O_MODE_VALID &&
    (O_INTRA_PRED_ANGLE == 11'sd0);
end

endmodule: INTRA_ANGULAR_ANGLE_LUT
