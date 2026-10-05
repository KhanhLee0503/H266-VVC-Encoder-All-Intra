//-----------------------------------------------------------
// Description: This module reads the luma samples of one
// 128x128 CTU from a 128-bit local CTU buffer and assembles
// two adjacent 4x4 tiles in parallel. Each 16-bit sample uses
// bits [9:0] as the valid 10-bit luma value. Samples outside
// the valid CTU region are forced to zero so every logical
// 4x4 tile location is overwritten for each CTU.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_FEATURE_TILE_LOADER
#(
  parameter PARA_CTU_RD_ADDR_WD = 11,
  parameter PARA_CTU_RD_DATA_WD = 128,
  parameter PARA_TILE_DATA_WD   = 160
)
(
  input                              I_CLK,
  input                              I_RESETN,

  input                              I_START,
  input      [7:0]                   I_VALID_WIDTH,
  input      [7:0]                   I_VALID_HEIGHT,

  output logic                       O_CTU_RD_REQ,
  output logic [PARA_CTU_RD_ADDR_WD-1:0] O_CTU_RD_ADDR,
  input                              I_CTU_RD_VALID,
  input      [PARA_CTU_RD_DATA_WD-1:0] I_CTU_RD_DATA,

  output logic                       O_TILE_A_VALID,
  output logic [4:0]                 O_TILE_A_X,
  output logic [4:0]                 O_TILE_A_Y,
  output logic [PARA_TILE_DATA_WD-1:0] O_TILE_A_DATA,

  output logic                       O_TILE_B_VALID,
  output logic [4:0]                 O_TILE_B_X,
  output logic [4:0]                 O_TILE_B_Y,
  output logic [PARA_TILE_DATA_WD-1:0] O_TILE_B_DATA,

  output logic                       O_BUSY,
  output logic                       O_DONE
);

typedef enum logic [1:0] {
  ST_IDLE,
  ST_READ,
  ST_EMIT,
  ST_DONE
} state_t;

state_t r_current_state;
state_t w_next_state;

logic [3:0]   r_pair_x;
logic [4:0]   r_tile_y;
logic [2:0]   r_req_count;
logic [1:0]   r_rsp_count;

logic [7:0]   r_valid_width;
logic [7:0]   r_valid_height;

logic [PARA_TILE_DATA_WD-1:0] r_tile_a_data;
logic [PARA_TILE_DATA_WD-1:0] r_tile_b_data;

logic [6:0]   w_req_pixel_row;
logic [PARA_CTU_RD_ADDR_WD-1:0] w_req_addr;

logic [7:0]   w_pair_base_x;
logic [7:0]   w_rsp_pixel_y;
logic         w_rsp_row_valid;

logic [7:0]   w_sample_x_0;
logic [7:0]   w_sample_x_1;
logic [7:0]   w_sample_x_2;
logic [7:0]   w_sample_x_3;
logic [7:0]   w_sample_x_4;
logic [7:0]   w_sample_x_5;
logic [7:0]   w_sample_x_6;
logic [7:0]   w_sample_x_7;

logic [9:0]   w_pixel_0;
logic [9:0]   w_pixel_1;
logic [9:0]   w_pixel_2;
logic [9:0]   w_pixel_3;
logic [9:0]   w_pixel_4;
logic [9:0]   w_pixel_5;
logic [9:0]   w_pixel_6;
logic [9:0]   w_pixel_7;

logic [39:0]  w_row_a_data;
logic [39:0]  w_row_b_data;

logic         w_last_pair;

// The current-state process contains only the FSM state register.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

// The next-state process waits until four ordered read responses
// have been received before making the two assembled tiles valid.
always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (I_START)
        w_next_state = ST_READ;
    end

    ST_READ: begin
      if ((r_req_count == 3'd4) && I_CTU_RD_VALID &&
          (r_rsp_count == 2'd3))
        w_next_state = ST_EMIT;
    end

    ST_EMIT: begin
      if (w_last_pair)
        w_next_state = ST_DONE;
      else
        w_next_state = ST_READ;
    end

    ST_DONE: begin
      w_next_state = ST_IDLE;
    end

    default: begin
      w_next_state = ST_IDLE;
    end
  endcase
end

// The FSM output process creates read requests and one-cycle tile
// valid pulses. The CTU buffer interface has no backpressure.
always_comb begin
  O_CTU_RD_REQ   = 1'b0;
  O_CTU_RD_ADDR  = w_req_addr;
  O_TILE_A_VALID = 1'b0;
  O_TILE_B_VALID = 1'b0;
  O_BUSY         = 1'b0;
  O_DONE         = 1'b0;

  unique casez (r_current_state)
    ST_IDLE: begin
      O_CTU_RD_REQ   = 1'b0;
      O_TILE_A_VALID = 1'b0;
      O_TILE_B_VALID = 1'b0;
      O_BUSY         = 1'b0;
      O_DONE         = 1'b0;
    end

    ST_READ: begin
      O_CTU_RD_REQ   = (r_req_count < 3'd4);
      O_TILE_A_VALID = 1'b0;
      O_TILE_B_VALID = 1'b0;
      O_BUSY         = 1'b1;
      O_DONE         = 1'b0;
    end

    ST_EMIT: begin
      O_CTU_RD_REQ   = 1'b0;
      O_TILE_A_VALID = 1'b1;
      O_TILE_B_VALID = 1'b1;
      O_BUSY         = 1'b1;
      O_DONE         = 1'b0;
    end

    ST_DONE: begin
      O_CTU_RD_REQ   = 1'b0;
      O_TILE_A_VALID = 1'b0;
      O_TILE_B_VALID = 1'b0;
      O_BUSY         = 1'b1;
      O_DONE         = 1'b1;
    end

    default: begin
      O_CTU_RD_REQ   = 1'b0;
      O_TILE_A_VALID = 1'b0;
      O_TILE_B_VALID = 1'b0;
      O_BUSY         = 1'b0;
      O_DONE         = 1'b0;
    end
  endcase
end

// The read address uses the fixed CTU layout of sixteen 128-bit
// words per luma row. Four consecutive pixel rows form one tile row
// group, and one word provides two adjacent 4x4 tiles.
always_comb begin
  w_req_pixel_row = {r_tile_y, 2'b00} +
                    {5'd0, r_req_count[1:0]};

  w_req_addr = {w_req_pixel_row, 4'b0000} +
               {{(PARA_CTU_RD_ADDR_WD-4){1'b0}}, r_pair_x};
end

// The response position remains associated with the current tile
// pair until all four ordered responses have been received.
always_comb begin
  w_pair_base_x = {1'b0, r_pair_x, 3'b000};
  w_rsp_pixel_y = {1'b0, r_tile_y, 2'b00} +
                  {6'd0, r_rsp_count};

  w_sample_x_0 = w_pair_base_x;
  w_sample_x_1 = w_pair_base_x + 8'd1;
  w_sample_x_2 = w_pair_base_x + 8'd2;
  w_sample_x_3 = w_pair_base_x + 8'd3;
  w_sample_x_4 = w_pair_base_x + 8'd4;
  w_sample_x_5 = w_pair_base_x + 8'd5;
  w_sample_x_6 = w_pair_base_x + 8'd6;
  w_sample_x_7 = w_pair_base_x + 8'd7;

  w_rsp_row_valid = (w_rsp_pixel_y < r_valid_height);
end

// Samples outside the valid CTU area are replaced with zero. The
// lower ten bits of each 16-bit storage lane contain the luma sample.
always_comb begin
  w_pixel_0 = 10'd0;
  w_pixel_1 = 10'd0;
  w_pixel_2 = 10'd0;
  w_pixel_3 = 10'd0;
  w_pixel_4 = 10'd0;
  w_pixel_5 = 10'd0;
  w_pixel_6 = 10'd0;
  w_pixel_7 = 10'd0;

  if (w_rsp_row_valid && (w_sample_x_0 < r_valid_width))
    w_pixel_0 = I_CTU_RD_DATA[9:0];

  if (w_rsp_row_valid && (w_sample_x_1 < r_valid_width))
    w_pixel_1 = I_CTU_RD_DATA[25:16];

  if (w_rsp_row_valid && (w_sample_x_2 < r_valid_width))
    w_pixel_2 = I_CTU_RD_DATA[41:32];

  if (w_rsp_row_valid && (w_sample_x_3 < r_valid_width))
    w_pixel_3 = I_CTU_RD_DATA[57:48];

  if (w_rsp_row_valid && (w_sample_x_4 < r_valid_width))
    w_pixel_4 = I_CTU_RD_DATA[73:64];

  if (w_rsp_row_valid && (w_sample_x_5 < r_valid_width))
    w_pixel_5 = I_CTU_RD_DATA[89:80];

  if (w_rsp_row_valid && (w_sample_x_6 < r_valid_width))
    w_pixel_6 = I_CTU_RD_DATA[105:96];

  if (w_rsp_row_valid && (w_sample_x_7 < r_valid_width))
    w_pixel_7 = I_CTU_RD_DATA[121:112];

  w_row_a_data = {
    w_pixel_3,
    w_pixel_2,
    w_pixel_1,
    w_pixel_0
  };

  w_row_b_data = {
    w_pixel_7,
    w_pixel_6,
    w_pixel_5,
    w_pixel_4
  };
end

// The scan-control registers are reset because they control memory
// accesses and define the current logical tile location.
always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_pair_x    <= 4'd0;
    r_tile_y    <= 5'd0;
    r_req_count <= 3'd0;
    r_rsp_count <= 2'd0;
  end
  else begin
    if ((r_current_state == ST_IDLE) && I_START) begin
      r_pair_x    <= 4'd0;
      r_tile_y    <= 5'd0;
      r_req_count <= 3'd0;
      r_rsp_count <= 2'd0;
    end
    else if (r_current_state == ST_READ) begin
      if (r_req_count < 3'd4)
        r_req_count <= r_req_count + 3'd1;

      if (I_CTU_RD_VALID) begin
        if (r_rsp_count < 2'd3)
          r_rsp_count <= r_rsp_count + 2'd1;
      end
    end
    else if (r_current_state == ST_EMIT) begin
      r_req_count <= 3'd0;
      r_rsp_count <= 2'd0;

      if (!w_last_pair) begin
        if (r_pair_x == 4'd15) begin
          r_pair_x <= 4'd0;
          r_tile_y <= r_tile_y + 5'd1;
        end
        else begin
          r_pair_x <= r_pair_x + 4'd1;
        end
      end
    end
  end
end

// The valid CTU dimensions are captured with the start request and
// remain unchanged during the complete feature-preanalysis scan.
always_ff @ (posedge I_CLK) begin
  if ((r_current_state == ST_IDLE) && I_START) begin
    r_valid_width  <= I_VALID_WIDTH;
    r_valid_height <= I_VALID_HEIGHT;
  end
end

// The tile datapath does not require reset because the tile-valid
// outputs qualify whether the assembled data is meaningful.
always_ff @ (posedge I_CLK) begin
  if ((r_current_state == ST_READ) && I_CTU_RD_VALID) begin
    unique casez (r_rsp_count)
      2'd0: begin
        r_tile_a_data[39:0]   <= w_row_a_data;
        r_tile_b_data[39:0]   <= w_row_b_data;
      end

      2'd1: begin
        r_tile_a_data[79:40]  <= w_row_a_data;
        r_tile_b_data[79:40]  <= w_row_b_data;
      end

      2'd2: begin
        r_tile_a_data[119:80] <= w_row_a_data;
        r_tile_b_data[119:80] <= w_row_b_data;
      end

      2'd3: begin
        r_tile_a_data[159:120] <= w_row_a_data;
        r_tile_b_data[159:120] <= w_row_b_data;
      end

      default: begin
      end
    endcase
  end
end

assign w_last_pair = (r_pair_x == 4'd15) && (r_tile_y == 5'd31);

assign O_TILE_A_X    = {r_pair_x, 1'b0};
assign O_TILE_A_Y    = r_tile_y;
assign O_TILE_A_DATA = r_tile_a_data;

assign O_TILE_B_X    = {r_pair_x, 1'b0} + 5'd1;
assign O_TILE_B_Y    = r_tile_y;
assign O_TILE_B_DATA = r_tile_b_data;

endmodule: PARTITION_FEATURE_TILE_LOADER
