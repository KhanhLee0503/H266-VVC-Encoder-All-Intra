//-----------------------------------------------------------
// Description: This module implements the H.266/VVC angular luma
// interpolation coefficient lookup table. The five-bit fractional phase
// selects one of thirty-two coefficient rows. I_INTERP_FILTER_FLAG selects
// the interpolation filter family: zero selects fC and one selects fG.
// Four signed eight-bit coefficients are produced combinationally according
// to Table 25 of the H.266/VVC specification.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_COEFF_LUT
(
  input [4:0]              I_IFACT,
  input                    I_INTERP_FILTER_FLAG,

  output logic signed [7:0] O_COEFF_0,
  output logic signed [7:0] O_COEFF_1,
  output logic signed [7:0] O_COEFF_2,
  output logic signed [7:0] O_COEFF_3
);

always_comb begin
  O_COEFF_0 = 8'sd0;
  O_COEFF_1 = 8'sd0;
  O_COEFF_2 = 8'sd0;
  O_COEFF_3 = 8'sd0;

  if (I_INTERP_FILTER_FLAG) begin
    unique casez (I_IFACT)
      5'd0 : begin O_COEFF_0 =  8'sd16; O_COEFF_1 = 8'sd32; O_COEFF_2 = 8'sd16; O_COEFF_3 = 8'sd0;  end
      5'd1 : begin O_COEFF_0 =  8'sd16; O_COEFF_1 = 8'sd32; O_COEFF_2 = 8'sd16; O_COEFF_3 = 8'sd0;  end
      5'd2 : begin O_COEFF_0 =  8'sd15; O_COEFF_1 = 8'sd31; O_COEFF_2 = 8'sd17; O_COEFF_3 = 8'sd1;  end
      5'd3 : begin O_COEFF_0 =  8'sd15; O_COEFF_1 = 8'sd31; O_COEFF_2 = 8'sd17; O_COEFF_3 = 8'sd1;  end
      5'd4 : begin O_COEFF_0 =  8'sd14; O_COEFF_1 = 8'sd30; O_COEFF_2 = 8'sd18; O_COEFF_3 = 8'sd2;  end
      5'd5 : begin O_COEFF_0 =  8'sd14; O_COEFF_1 = 8'sd30; O_COEFF_2 = 8'sd18; O_COEFF_3 = 8'sd2;  end
      5'd6 : begin O_COEFF_0 =  8'sd13; O_COEFF_1 = 8'sd29; O_COEFF_2 = 8'sd19; O_COEFF_3 = 8'sd3;  end
      5'd7 : begin O_COEFF_0 =  8'sd13; O_COEFF_1 = 8'sd29; O_COEFF_2 = 8'sd19; O_COEFF_3 = 8'sd3;  end
      5'd8 : begin O_COEFF_0 =  8'sd12; O_COEFF_1 = 8'sd28; O_COEFF_2 = 8'sd20; O_COEFF_3 = 8'sd4;  end
      5'd9 : begin O_COEFF_0 =  8'sd12; O_COEFF_1 = 8'sd28; O_COEFF_2 = 8'sd20; O_COEFF_3 = 8'sd4;  end
      5'd10: begin O_COEFF_0 =  8'sd11; O_COEFF_1 = 8'sd27; O_COEFF_2 = 8'sd21; O_COEFF_3 = 8'sd5;  end
      5'd11: begin O_COEFF_0 =  8'sd11; O_COEFF_1 = 8'sd27; O_COEFF_2 = 8'sd21; O_COEFF_3 = 8'sd5;  end
      5'd12: begin O_COEFF_0 =  8'sd10; O_COEFF_1 = 8'sd26; O_COEFF_2 = 8'sd22; O_COEFF_3 = 8'sd6;  end
      5'd13: begin O_COEFF_0 =  8'sd10; O_COEFF_1 = 8'sd26; O_COEFF_2 = 8'sd22; O_COEFF_3 = 8'sd6;  end
      5'd14: begin O_COEFF_0 =   8'sd9; O_COEFF_1 = 8'sd25; O_COEFF_2 = 8'sd23; O_COEFF_3 = 8'sd7;  end
      5'd15: begin O_COEFF_0 =   8'sd9; O_COEFF_1 = 8'sd25; O_COEFF_2 = 8'sd23; O_COEFF_3 = 8'sd7;  end
      5'd16: begin O_COEFF_0 =   8'sd8; O_COEFF_1 = 8'sd24; O_COEFF_2 = 8'sd24; O_COEFF_3 = 8'sd8;  end
      5'd17: begin O_COEFF_0 =   8'sd8; O_COEFF_1 = 8'sd24; O_COEFF_2 = 8'sd24; O_COEFF_3 = 8'sd8;  end
      5'd18: begin O_COEFF_0 =   8'sd7; O_COEFF_1 = 8'sd23; O_COEFF_2 = 8'sd25; O_COEFF_3 = 8'sd9;  end
      5'd19: begin O_COEFF_0 =   8'sd7; O_COEFF_1 = 8'sd23; O_COEFF_2 = 8'sd25; O_COEFF_3 = 8'sd9;  end
      5'd20: begin O_COEFF_0 =   8'sd6; O_COEFF_1 = 8'sd22; O_COEFF_2 = 8'sd26; O_COEFF_3 = 8'sd10; end
      5'd21: begin O_COEFF_0 =   8'sd6; O_COEFF_1 = 8'sd22; O_COEFF_2 = 8'sd26; O_COEFF_3 = 8'sd10; end
      5'd22: begin O_COEFF_0 =   8'sd5; O_COEFF_1 = 8'sd21; O_COEFF_2 = 8'sd27; O_COEFF_3 = 8'sd11; end
      5'd23: begin O_COEFF_0 =   8'sd5; O_COEFF_1 = 8'sd21; O_COEFF_2 = 8'sd27; O_COEFF_3 = 8'sd11; end
      5'd24: begin O_COEFF_0 =   8'sd4; O_COEFF_1 = 8'sd20; O_COEFF_2 = 8'sd28; O_COEFF_3 = 8'sd12; end
      5'd25: begin O_COEFF_0 =   8'sd4; O_COEFF_1 = 8'sd20; O_COEFF_2 = 8'sd28; O_COEFF_3 = 8'sd12; end
      5'd26: begin O_COEFF_0 =   8'sd3; O_COEFF_1 = 8'sd19; O_COEFF_2 = 8'sd29; O_COEFF_3 = 8'sd13; end
      5'd27: begin O_COEFF_0 =   8'sd3; O_COEFF_1 = 8'sd19; O_COEFF_2 = 8'sd29; O_COEFF_3 = 8'sd13; end
      5'd28: begin O_COEFF_0 =   8'sd2; O_COEFF_1 = 8'sd18; O_COEFF_2 = 8'sd30; O_COEFF_3 = 8'sd14; end
      5'd29: begin O_COEFF_0 =   8'sd2; O_COEFF_1 = 8'sd18; O_COEFF_2 = 8'sd30; O_COEFF_3 = 8'sd14; end
      5'd30: begin O_COEFF_0 =   8'sd1; O_COEFF_1 = 8'sd17; O_COEFF_2 = 8'sd31; O_COEFF_3 = 8'sd15; end
      5'd31: begin O_COEFF_0 =   8'sd1; O_COEFF_1 = 8'sd17; O_COEFF_2 = 8'sd31; O_COEFF_3 = 8'sd15; end

      default: begin
        O_COEFF_0 = 8'sd0;
        O_COEFF_1 = 8'sd0;
        O_COEFF_2 = 8'sd0;
        O_COEFF_3 = 8'sd0;
      end
    endcase
  end
  else begin
    unique casez (I_IFACT)
      5'd0 : begin O_COEFF_0 =   8'sd0; O_COEFF_1 = 8'sd64; O_COEFF_2 =  8'sd0;  O_COEFF_3 =  8'sd0;  end
      5'd1 : begin O_COEFF_0 =  -8'sd1; O_COEFF_1 = 8'sd63; O_COEFF_2 =  8'sd2;  O_COEFF_3 =  8'sd0;  end
      5'd2 : begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd62; O_COEFF_2 =  8'sd4;  O_COEFF_3 =  8'sd0;  end
      5'd3 : begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd60; O_COEFF_2 =  8'sd7;  O_COEFF_3 = -8'sd1;  end
      5'd4 : begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd58; O_COEFF_2 = 8'sd10;  O_COEFF_3 = -8'sd2;  end
      5'd5 : begin O_COEFF_0 =  -8'sd3; O_COEFF_1 = 8'sd57; O_COEFF_2 = 8'sd12;  O_COEFF_3 = -8'sd2;  end
      5'd6 : begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd56; O_COEFF_2 = 8'sd14;  O_COEFF_3 = -8'sd2;  end
      5'd7 : begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd55; O_COEFF_2 = 8'sd15;  O_COEFF_3 = -8'sd2;  end
      5'd8 : begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd54; O_COEFF_2 = 8'sd16;  O_COEFF_3 = -8'sd2;  end
      5'd9 : begin O_COEFF_0 =  -8'sd5; O_COEFF_1 = 8'sd53; O_COEFF_2 = 8'sd18;  O_COEFF_3 = -8'sd2;  end
      5'd10: begin O_COEFF_0 =  -8'sd6; O_COEFF_1 = 8'sd52; O_COEFF_2 = 8'sd20;  O_COEFF_3 = -8'sd2;  end
      5'd11: begin O_COEFF_0 =  -8'sd6; O_COEFF_1 = 8'sd49; O_COEFF_2 = 8'sd24;  O_COEFF_3 = -8'sd3;  end
      5'd12: begin O_COEFF_0 =  -8'sd6; O_COEFF_1 = 8'sd46; O_COEFF_2 = 8'sd28;  O_COEFF_3 = -8'sd4;  end
      5'd13: begin O_COEFF_0 =  -8'sd5; O_COEFF_1 = 8'sd44; O_COEFF_2 = 8'sd29;  O_COEFF_3 = -8'sd4;  end
      5'd14: begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd42; O_COEFF_2 = 8'sd30;  O_COEFF_3 = -8'sd4;  end
      5'd15: begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd39; O_COEFF_2 = 8'sd33;  O_COEFF_3 = -8'sd4;  end
      5'd16: begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd36; O_COEFF_2 = 8'sd36;  O_COEFF_3 = -8'sd4;  end
      5'd17: begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd33; O_COEFF_2 = 8'sd39;  O_COEFF_3 = -8'sd4;  end
      5'd18: begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd30; O_COEFF_2 = 8'sd42;  O_COEFF_3 = -8'sd4;  end
      5'd19: begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd29; O_COEFF_2 = 8'sd44;  O_COEFF_3 = -8'sd5;  end
      5'd20: begin O_COEFF_0 =  -8'sd4; O_COEFF_1 = 8'sd28; O_COEFF_2 = 8'sd46;  O_COEFF_3 = -8'sd6;  end
      5'd21: begin O_COEFF_0 =  -8'sd3; O_COEFF_1 = 8'sd24; O_COEFF_2 = 8'sd49;  O_COEFF_3 = -8'sd6;  end
      5'd22: begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd20; O_COEFF_2 = 8'sd52;  O_COEFF_3 = -8'sd6;  end
      5'd23: begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd18; O_COEFF_2 = 8'sd53;  O_COEFF_3 = -8'sd5;  end
      5'd24: begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd16; O_COEFF_2 = 8'sd54;  O_COEFF_3 = -8'sd4;  end
      5'd25: begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd15; O_COEFF_2 = 8'sd55;  O_COEFF_3 = -8'sd4;  end
      5'd26: begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd14; O_COEFF_2 = 8'sd56;  O_COEFF_3 = -8'sd4;  end
      5'd27: begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd12; O_COEFF_2 = 8'sd57;  O_COEFF_3 = -8'sd3;  end
      5'd28: begin O_COEFF_0 =  -8'sd2; O_COEFF_1 = 8'sd10; O_COEFF_2 = 8'sd58;  O_COEFF_3 = -8'sd2;  end
      5'd29: begin O_COEFF_0 =  -8'sd1; O_COEFF_1 =  8'sd7; O_COEFF_2 = 8'sd60;  O_COEFF_3 = -8'sd2;  end
      5'd30: begin O_COEFF_0 =   8'sd0; O_COEFF_1 =  8'sd4; O_COEFF_2 = 8'sd62;  O_COEFF_3 = -8'sd2;  end
      5'd31: begin O_COEFF_0 =   8'sd0; O_COEFF_1 =  8'sd2; O_COEFF_2 = 8'sd63;  O_COEFF_3 = -8'sd1;  end

      default: begin
        O_COEFF_0 = 8'sd0;
        O_COEFF_1 = 8'sd0;
        O_COEFF_2 = 8'sd0;
        O_COEFF_3 = 8'sd0;
      end
    endcase
  end
end

endmodule: INTRA_ANGULAR_COEFF_LUT
