//-----------------------------------------------------------
// Description: This module generates CTU task descriptors in raster-scan
//              order for the CTU input engine of an H.266/VVC encoder.
//              The output task payload is a packed bus.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_TASK_SCHEDULER
  #(
    parameter int PARA_CTU_SIZE      = 128,
    parameter int PARA_CTU_SIZE_LOG2 = $clog2(PARA_CTU_SIZE),
    parameter int PARA_CTU_TASK_WD   = 136)
  (
    input I_CLK,
    input I_RST_N,

    input        I_FRAME_START,
    input [15:0] I_FRAME_WIDTH,
    input [15:0] I_FRAME_HEIGHT,

    output logic                          O_SCHE_TASK_VALID,
    input                                 I_SCHE_TASK_READY,
    output logic [PARA_CTU_TASK_WD - 1:0] O_SCHE_TASK_PAYLOAD,

    output logic O_FRAME_ISSUE_DONE,
    output logic O_SCHEDULER_BUSY);

  localparam int PARA_TASK_CTU_X_LSB           = 0;
  localparam int PARA_TASK_CTU_X_MSB           = 15;
  localparam int PARA_TASK_CTU_Y_LSB           = 16;
  localparam int PARA_TASK_CTU_Y_MSB           = 31;
  localparam int PARA_TASK_CTU_ADDR_LSB        = 32;
  localparam int PARA_TASK_CTU_ADDR_MSB        = 63;
  localparam int PARA_TASK_ORIGIN_X_LSB        = 64;
  localparam int PARA_TASK_ORIGIN_X_MSB        = 79;
  localparam int PARA_TASK_ORIGIN_Y_LSB        = 80;
  localparam int PARA_TASK_ORIGIN_Y_MSB        = 95;
  localparam int PARA_TASK_VALID_WIDTH_Y_LSB   = 96;
  localparam int PARA_TASK_VALID_WIDTH_Y_MSB   = 111;
  localparam int PARA_TASK_VALID_HEIGHT_Y_LSB  = 112;
  localparam int PARA_TASK_VALID_HEIGHT_Y_MSB  = 127;
  localparam int PARA_TASK_LEFT_BOUNDARY_BIT   = 128;
  localparam int PARA_TASK_RIGHT_BOUNDARY_BIT  = 129;
  localparam int PARA_TASK_TOP_BOUNDARY_BIT    = 130;
  localparam int PARA_TASK_BOTTOM_BOUNDARY_BIT = 131;
  localparam int PARA_TASK_ROW_FIRST_BIT       = 132;
  localparam int PARA_TASK_ROW_LAST_BIT        = 133;
  localparam int PARA_TASK_FRAME_FIRST_BIT     = 134;
  localparam int PARA_TASK_FRAME_LAST_BIT      = 135;

  localparam logic [15:0] PARA_CTU_SIZE_16 = 16'(PARA_CTU_SIZE);

  enum logic [1:0] {
    ST_IDLE = 2'b00,
    ST_INIT = 2'b01,
    ST_RUN  = 2'b10,
    ST_DONE = 2'b11
  } r_current_state,
    w_next_state;

  logic [15:0] w_origin_x;
  logic [15:0] w_origin_y;
  logic [15:0] w_remain_w;
  logic [15:0] w_remain_h;
  logic [15:0] w_valid_width_y;
  logic [15:0] w_valid_height_y;

  logic w_task_fire;
  logic w_frame_last_cur;

  logic [15:0] r_num_ctu_x;
  logic [15:0] r_num_ctu_y;
  logic [15:0] r_ctu_x;
  logic [15:0] r_ctu_y;
  logic [31:0] r_ctu_addr;

  assign w_task_fire = O_SCHE_TASK_VALID & I_SCHE_TASK_READY;

  assign w_origin_x = r_ctu_x << PARA_CTU_SIZE_LOG2;
  assign w_origin_y = r_ctu_y << PARA_CTU_SIZE_LOG2;

  assign w_remain_w = I_FRAME_WIDTH - w_origin_x;
  assign w_remain_h = I_FRAME_HEIGHT - w_origin_y;

  assign w_valid_width_y = (w_remain_w >= PARA_CTU_SIZE_16) ? PARA_CTU_SIZE_16 : w_remain_w;

  assign w_valid_height_y = (w_remain_h >= PARA_CTU_SIZE_16) ? PARA_CTU_SIZE_16 : w_remain_h;

  assign w_frame_last_cur = (r_ctu_x == (r_num_ctu_x - 16'd1)) &
                            (r_ctu_y == (r_num_ctu_y - 16'd1));

  always_comb begin
    O_SCHE_TASK_PAYLOAD = '0;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_CTU_X_MSB:PARA_TASK_CTU_X_LSB] =
      r_ctu_x;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_CTU_Y_MSB:PARA_TASK_CTU_Y_LSB] =
      r_ctu_y;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_CTU_ADDR_MSB:PARA_TASK_CTU_ADDR_LSB] =
      r_ctu_addr;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_ORIGIN_X_MSB:PARA_TASK_ORIGIN_X_LSB] =
      w_origin_x;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_ORIGIN_Y_MSB:PARA_TASK_ORIGIN_Y_LSB] =
      w_origin_y;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_VALID_WIDTH_Y_MSB:PARA_TASK_VALID_WIDTH_Y_LSB] =
      w_valid_width_y;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_VALID_HEIGHT_Y_MSB:PARA_TASK_VALID_HEIGHT_Y_LSB] =
      w_valid_height_y;

    O_SCHE_TASK_PAYLOAD[PARA_TASK_LEFT_BOUNDARY_BIT] =
      (r_ctu_x == 16'd0);

    O_SCHE_TASK_PAYLOAD[PARA_TASK_RIGHT_BOUNDARY_BIT] =
      (r_ctu_x == (r_num_ctu_x - 16'd1));

    O_SCHE_TASK_PAYLOAD[PARA_TASK_TOP_BOUNDARY_BIT] =
      (r_ctu_y == 16'd0);

    O_SCHE_TASK_PAYLOAD[PARA_TASK_BOTTOM_BOUNDARY_BIT] =
      (r_ctu_y == (r_num_ctu_y - 16'd1));

    O_SCHE_TASK_PAYLOAD[PARA_TASK_ROW_FIRST_BIT] =
      (r_ctu_x == 16'd0);

    O_SCHE_TASK_PAYLOAD[PARA_TASK_ROW_LAST_BIT] =
      (r_ctu_x == (r_num_ctu_x - 16'd1));

    O_SCHE_TASK_PAYLOAD[PARA_TASK_FRAME_FIRST_BIT] =
      (r_ctu_x == 16'd0) & (r_ctu_y == 16'd0);

    O_SCHE_TASK_PAYLOAD[PARA_TASK_FRAME_LAST_BIT] =
      w_frame_last_cur;
  end

  // ============================================================
  // FSM block 1: state register
  // ============================================================
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // ============================================================
  // FSM block 2: next-state logic
  // ============================================================
  always_comb begin
    w_next_state = r_current_state;

    case (r_current_state)
      ST_IDLE: begin
        if (I_FRAME_START)
          w_next_state = ST_INIT;
        else
          w_next_state = r_current_state;
      end

      ST_INIT: begin
        w_next_state = ST_RUN;
      end

      ST_RUN: begin
        if (w_task_fire && w_frame_last_cur)
          w_next_state = ST_DONE;
        else
          w_next_state = r_current_state;
      end

      ST_DONE: begin
        w_next_state = ST_IDLE;
      end

      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // ============================================================
  // FSM block 3: output decode
  // ============================================================
  always_comb begin
    O_SCHE_TASK_VALID  = 1'b0;
    O_FRAME_ISSUE_DONE = 1'b0;
    O_SCHEDULER_BUSY   = 1'b1;

    case (r_current_state)
      ST_IDLE: begin
        O_SCHE_TASK_VALID  = 1'b0;
        O_FRAME_ISSUE_DONE = 1'b0;
        O_SCHEDULER_BUSY   = 1'b0;
      end

      ST_INIT: begin
        O_SCHE_TASK_VALID  = 1'b0;
        O_FRAME_ISSUE_DONE = 1'b0;
        O_SCHEDULER_BUSY   = 1'b1;
      end

      ST_RUN: begin
        O_SCHE_TASK_VALID  = 1'b1;
        O_FRAME_ISSUE_DONE = 1'b0;
        O_SCHEDULER_BUSY   = 1'b1;
      end

      ST_DONE: begin
        O_SCHE_TASK_VALID  = 1'b0;
        O_FRAME_ISSUE_DONE = 1'b1;
        O_SCHEDULER_BUSY   = 1'b1;
      end

      default: begin
        O_SCHE_TASK_VALID  = 1'b0;
        O_FRAME_ISSUE_DONE = 1'b0;
        O_SCHEDULER_BUSY   = 1'b0;
      end
    endcase
  end

  // ============================================================
  // Datapath registers
  // ============================================================
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_num_ctu_x <= 16'd0;
      r_num_ctu_y <= 16'd0;
      r_ctu_x     <= 16'd0;
      r_ctu_y     <= 16'd0;
      r_ctu_addr  <= 32'd0;
    end else begin
      case (r_current_state)
        ST_INIT: begin
          r_num_ctu_x <= (I_FRAME_WIDTH + (PARA_CTU_SIZE_16 - 16'd1)) >> PARA_CTU_SIZE_LOG2;
          r_num_ctu_y <= (I_FRAME_HEIGHT + (PARA_CTU_SIZE_16 - 16'd1)) >> PARA_CTU_SIZE_LOG2;
          r_ctu_x     <= 16'd0;
          r_ctu_y     <= 16'd0;
          r_ctu_addr  <= 32'd0;
        end

        ST_RUN: begin
          if (w_task_fire && !w_frame_last_cur) begin
            r_ctu_addr <= r_ctu_addr + 32'd1;

            if (r_ctu_x == (r_num_ctu_x - 16'd1)) begin
              r_ctu_x <= 16'd0;
              r_ctu_y <= r_ctu_y + 16'd1;
            end else begin
              r_ctu_x <= r_ctu_x + 16'd1;
            end
          end
        end

        ST_IDLE: begin
        end
        ST_DONE: begin
        end

        default: begin
          r_num_ctu_x <= 16'd0;
          r_num_ctu_y <= 16'd0;
          r_ctu_x     <= 16'd0;
          r_ctu_y     <= 16'd0;
          r_ctu_addr  <= 32'd0;
        end
      endcase
    end
  end

endmodule : CTU_TASK_SCHEDULER