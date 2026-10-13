//-----------------------------------------------------------
// Description: This module stores the raw intra reference samples fetched
// for one transform unit before reference sample substitution. Top and left
// references are written as four-sample 64-bit words. Availability is stored
// per sample. The top-left reference is stored separately. A combinational
// single-sample query port and a four-sample word query port are provided
// for INTRA_REF_SUBSTITUTION.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_RAW_BUFFER (
  input                                  I_CLK,
  input                                  I_RESETN,

  input                                  I_CLEAR,

  input                                  I_TOP_WR_EN,
  input [3:0]                            I_TOP_WR_INDEX,
  input [63:0]                           I_TOP_WR_DATA,
  input [3:0]                            I_TOP_WR_AVAIL,

  input                                  I_LEFT_WR_EN,
  input [3:0]                            I_LEFT_WR_INDEX,
  input [63:0]                           I_LEFT_WR_DATA,
  input [3:0]                            I_LEFT_WR_AVAIL,

  input                                  I_TL_WR_EN,
  input [15:0]                           I_TL_WR_DATA,
  input                                  I_TL_WR_AVAIL,

  input                                  I_QUERY_VALID,
  input [1:0]                            I_QUERY_REF_TYPE,
  input [5:0]                            I_QUERY_INDEX,

  output logic [15:0]                    O_QUERY_SAMPLE,
  output logic                           O_QUERY_AVAILABLE,

  input                                  I_WORD_QUERY_VALID,
  input [1:0]                            I_WORD_QUERY_REF_TYPE,
  input [3:0]                            I_WORD_QUERY_INDEX,

  output logic [63:0]                    O_WORD_QUERY_DATA,
  output logic [3:0]                     O_WORD_QUERY_AVAIL
);

localparam [1:0] PARA_REF_TOP  = 2'b00;
localparam [1:0] PARA_REF_LEFT = 2'b01;
localparam [1:0] PARA_REF_TL   = 2'b10;

logic [63:0] r_top_data [0:15];
logic [63:0] r_left_data [0:15];

logic [63:0] r_top_available;
logic [63:0] r_left_available;

logic [15:0] r_tl_data;
logic        r_tl_available;

logic [3:0]  w_query_word_index;
logic [1:0]  w_query_lane_index;
logic [63:0] w_query_word;
logic        w_query_is_word;

assign w_query_word_index = I_QUERY_INDEX[5:2];
assign w_query_lane_index = I_QUERY_INDEX[1:0];

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_top_available <= '0;
  end
  else if (I_CLEAR) begin
    r_top_available <= '0;
  end
  else if (I_TOP_WR_EN) begin
    unique casez (I_TOP_WR_INDEX)
      4'd0:  r_top_available[3:0]   <= I_TOP_WR_AVAIL;
      4'd1:  r_top_available[7:4]   <= I_TOP_WR_AVAIL;
      4'd2:  r_top_available[11:8]  <= I_TOP_WR_AVAIL;
      4'd3:  r_top_available[15:12] <= I_TOP_WR_AVAIL;
      4'd4:  r_top_available[19:16] <= I_TOP_WR_AVAIL;
      4'd5:  r_top_available[23:20] <= I_TOP_WR_AVAIL;
      4'd6:  r_top_available[27:24] <= I_TOP_WR_AVAIL;
      4'd7:  r_top_available[31:28] <= I_TOP_WR_AVAIL;
      4'd8:  r_top_available[35:32] <= I_TOP_WR_AVAIL;
      4'd9:  r_top_available[39:36] <= I_TOP_WR_AVAIL;
      4'd10: r_top_available[43:40] <= I_TOP_WR_AVAIL;
      4'd11: r_top_available[47:44] <= I_TOP_WR_AVAIL;
      4'd12: r_top_available[51:48] <= I_TOP_WR_AVAIL;
      4'd13: r_top_available[55:52] <= I_TOP_WR_AVAIL;
      4'd14: r_top_available[59:56] <= I_TOP_WR_AVAIL;
      4'd15: r_top_available[63:60] <= I_TOP_WR_AVAIL;
      default: begin
        // No availability bits are updated for an unsupported index.
      end
    endcase
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_TOP_WR_EN && !I_CLEAR) begin
    r_top_data[I_TOP_WR_INDEX] <= I_TOP_WR_DATA;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_left_available <= '0;
  end
  else if (I_CLEAR) begin
    r_left_available <= '0;
  end
  else if (I_LEFT_WR_EN) begin
    unique casez (I_LEFT_WR_INDEX)
      4'd0:  r_left_available[3:0]   <= I_LEFT_WR_AVAIL;
      4'd1:  r_left_available[7:4]   <= I_LEFT_WR_AVAIL;
      4'd2:  r_left_available[11:8]  <= I_LEFT_WR_AVAIL;
      4'd3:  r_left_available[15:12] <= I_LEFT_WR_AVAIL;
      4'd4:  r_left_available[19:16] <= I_LEFT_WR_AVAIL;
      4'd5:  r_left_available[23:20] <= I_LEFT_WR_AVAIL;
      4'd6:  r_left_available[27:24] <= I_LEFT_WR_AVAIL;
      4'd7:  r_left_available[31:28] <= I_LEFT_WR_AVAIL;
      4'd8:  r_left_available[35:32] <= I_LEFT_WR_AVAIL;
      4'd9:  r_left_available[39:36] <= I_LEFT_WR_AVAIL;
      4'd10: r_left_available[43:40] <= I_LEFT_WR_AVAIL;
      4'd11: r_left_available[47:44] <= I_LEFT_WR_AVAIL;
      4'd12: r_left_available[51:48] <= I_LEFT_WR_AVAIL;
      4'd13: r_left_available[55:52] <= I_LEFT_WR_AVAIL;
      4'd14: r_left_available[59:56] <= I_LEFT_WR_AVAIL;
      4'd15: r_left_available[63:60] <= I_LEFT_WR_AVAIL;
      default: begin
        // No availability bits are updated for an unsupported index.
      end
    endcase
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_LEFT_WR_EN && !I_CLEAR) begin
    r_left_data[I_LEFT_WR_INDEX] <= I_LEFT_WR_DATA;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_tl_available <= 1'b0;
  end
  else if (I_CLEAR) begin
    r_tl_available <= 1'b0;
  end
  else if (I_TL_WR_EN) begin
    r_tl_available <= I_TL_WR_AVAIL;
  end
end

always_ff @ (posedge I_CLK) begin
  if (I_TL_WR_EN && !I_CLEAR) begin
    r_tl_data <= I_TL_WR_DATA;
  end
end

always_comb begin
  w_query_word = '0;
  w_query_is_word = 1'b0;
  O_QUERY_AVAILABLE = 1'b0;

  if (I_QUERY_VALID) begin
    unique casez (I_QUERY_REF_TYPE)
      PARA_REF_TOP: begin
        w_query_word = r_top_data[w_query_word_index];
        w_query_is_word = 1'b1;
        O_QUERY_AVAILABLE = r_top_available[I_QUERY_INDEX];
      end

      PARA_REF_LEFT: begin
        w_query_word = r_left_data[w_query_word_index];
        w_query_is_word = 1'b1;
        O_QUERY_AVAILABLE = r_left_available[I_QUERY_INDEX];
      end

      PARA_REF_TL: begin
        w_query_word = '0;
        w_query_is_word = 1'b0;
        O_QUERY_AVAILABLE = r_tl_available;
      end

      default: begin
        w_query_word = '0;
        w_query_is_word = 1'b0;
        O_QUERY_AVAILABLE = 1'b0;
      end
    endcase
  end
end

always_comb begin
  O_QUERY_SAMPLE = '0;

  if (I_QUERY_VALID) begin
    if (I_QUERY_REF_TYPE == PARA_REF_TL) begin
      O_QUERY_SAMPLE = r_tl_data;
    end
    else if (w_query_is_word) begin
      unique casez (w_query_lane_index)
        2'd0: begin
          O_QUERY_SAMPLE = w_query_word[15:0];
        end
        2'd1: begin
          O_QUERY_SAMPLE = w_query_word[31:16];
        end
        2'd2: begin
          O_QUERY_SAMPLE = w_query_word[47:32];
        end
        2'd3: begin
          O_QUERY_SAMPLE = w_query_word[63:48];
        end
        default: begin
          O_QUERY_SAMPLE = '0;
        end
      endcase
    end
  end
end


always_comb begin
  O_WORD_QUERY_DATA = '0;
  O_WORD_QUERY_AVAIL = 4'b0000;

  if (I_WORD_QUERY_VALID) begin
    unique casez (I_WORD_QUERY_REF_TYPE)
      PARA_REF_TOP: begin
        O_WORD_QUERY_DATA = r_top_data[I_WORD_QUERY_INDEX];

        unique casez (I_WORD_QUERY_INDEX)
          4'd0:  O_WORD_QUERY_AVAIL = r_top_available[3:0];
          4'd1:  O_WORD_QUERY_AVAIL = r_top_available[7:4];
          4'd2:  O_WORD_QUERY_AVAIL = r_top_available[11:8];
          4'd3:  O_WORD_QUERY_AVAIL = r_top_available[15:12];
          4'd4:  O_WORD_QUERY_AVAIL = r_top_available[19:16];
          4'd5:  O_WORD_QUERY_AVAIL = r_top_available[23:20];
          4'd6:  O_WORD_QUERY_AVAIL = r_top_available[27:24];
          4'd7:  O_WORD_QUERY_AVAIL = r_top_available[31:28];
          4'd8:  O_WORD_QUERY_AVAIL = r_top_available[35:32];
          4'd9:  O_WORD_QUERY_AVAIL = r_top_available[39:36];
          4'd10: O_WORD_QUERY_AVAIL = r_top_available[43:40];
          4'd11: O_WORD_QUERY_AVAIL = r_top_available[47:44];
          4'd12: O_WORD_QUERY_AVAIL = r_top_available[51:48];
          4'd13: O_WORD_QUERY_AVAIL = r_top_available[55:52];
          4'd14: O_WORD_QUERY_AVAIL = r_top_available[59:56];
          4'd15: O_WORD_QUERY_AVAIL = r_top_available[63:60];
          default: begin
            O_WORD_QUERY_AVAIL = 4'b0000;
          end
        endcase
      end

      PARA_REF_LEFT: begin
        O_WORD_QUERY_DATA = r_left_data[I_WORD_QUERY_INDEX];

        unique casez (I_WORD_QUERY_INDEX)
          4'd0:  O_WORD_QUERY_AVAIL = r_left_available[3:0];
          4'd1:  O_WORD_QUERY_AVAIL = r_left_available[7:4];
          4'd2:  O_WORD_QUERY_AVAIL = r_left_available[11:8];
          4'd3:  O_WORD_QUERY_AVAIL = r_left_available[15:12];
          4'd4:  O_WORD_QUERY_AVAIL = r_left_available[19:16];
          4'd5:  O_WORD_QUERY_AVAIL = r_left_available[23:20];
          4'd6:  O_WORD_QUERY_AVAIL = r_left_available[27:24];
          4'd7:  O_WORD_QUERY_AVAIL = r_left_available[31:28];
          4'd8:  O_WORD_QUERY_AVAIL = r_left_available[35:32];
          4'd9:  O_WORD_QUERY_AVAIL = r_left_available[39:36];
          4'd10: O_WORD_QUERY_AVAIL = r_left_available[43:40];
          4'd11: O_WORD_QUERY_AVAIL = r_left_available[47:44];
          4'd12: O_WORD_QUERY_AVAIL = r_left_available[51:48];
          4'd13: O_WORD_QUERY_AVAIL = r_left_available[55:52];
          4'd14: O_WORD_QUERY_AVAIL = r_left_available[59:56];
          4'd15: O_WORD_QUERY_AVAIL = r_left_available[63:60];
          default: begin
            O_WORD_QUERY_AVAIL = 4'b0000;
          end
        endcase
      end

      default: begin
        O_WORD_QUERY_DATA = '0;
        O_WORD_QUERY_AVAIL = 4'b0000;
      end
    endcase
  end
end

endmodule: INTRA_REF_RAW_BUFFER
