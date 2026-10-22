//-----------------------------------------------------------
// Description: Tracks a single active YUV420 leaf CU. It counts accepted
// reconstructed beats for Y, Cb and Cr, associates the registered TU release
// pulse from RECON_REF_STORE_WRITER with the final beat's component, and
// raises CU commit only after all component releases and delayed availability
// commits have passed their register boundary. One TU per component is the
// integration baseline. No partial or masked reconstructed beats are allowed.
//-----------------------------------------------------------
`timescale 1ns/1ps
module RECON_CU_COMMIT_CONTROL (
  input             I_CLK,
  input             I_RESETN,
  input             I_CLEAR_ERROR,
  input             I_CTU_START,
  input             I_CU_VALID,
  output logic      O_CU_READY,
  input [6:0]       I_CU_X,
  input [6:0]       I_CU_Y,
  input [7:0]       I_CU_WIDTH,
  input [7:0]       I_CU_HEIGHT,
  input [7:0]       I_CTU_VALID_WIDTH,
  input [7:0]       I_CTU_VALID_HEIGHT,
  input             I_RECON_FIRE,
  input [1:0]       I_RECON_COMPONENT_ID,
  input [6:0]       I_RECON_X_BASE,
  input [6:0]       I_RECON_Y,
  input [3:0]       I_RECON_LANE_VALID,
  input             I_RECON_TU_LAST,
  input             I_TU_REF_RELEASE,
  input             I_CU_COMMIT_REQ,
  output logic      O_CU_COMMIT_DONE,
  input             I_CU_RELEASE,
  output logic      O_CU_ACTIVE,
  output logic      O_RECON_CAN_ACCEPT,
  output logic      O_RECON_BEAT_EXPECTED_OK,
  output logic      O_ERROR
);
  logic              r_active;
  logic              r_error;
  logic [6:0]        r_x, r_y;
  logic [7:0]        r_width, r_height;
  logic [8:0]        r_count_y, r_count_cb, r_count_cr;
  logic [8:0]        r_expected_y, r_expected_c;
  logic [2:0]        r_complete;
  logic [1:0]        r_release_component;
  logic              r_release_expected;
  logic              r_all_released_q;
  logic              r_commit_granted;
  logic              w_cu_fire;
  logic [8:0]        w_actual_count, w_expected_count;
  logic [6:0]        w_expected_x, w_expected_y;
  logic              w_geometry_ok, w_beat_ok, w_component_seq_ok;
  logic [7:0]        w_comp_x, w_comp_y;
  logic [7:0]        w_comp_w, w_comp_h;
  logic [8:0]        w_word_col, w_word_row;

  assign O_CU_ACTIVE = r_active;
  assign O_RECON_CAN_ACCEPT = r_active && !r_release_expected && !r_error;
  assign O_RECON_BEAT_EXPECTED_OK = w_beat_ok;
  assign O_ERROR = r_error;
  assign O_CU_READY = !r_active && !r_error;
  assign w_cu_fire = I_CU_VALID && O_CU_READY;
  assign O_CU_COMMIT_DONE = r_active && !r_error && I_CU_COMMIT_REQ &&
                             (&r_complete) && r_all_released_q;

  always_comb begin
    w_geometry_ok = (I_CU_WIDTH >= 8'd8) && (I_CU_WIDTH <= 8'd32) &&
                    (I_CU_HEIGHT >= 8'd8) && (I_CU_HEIGHT <= 8'd32) &&
                    ((I_CU_WIDTH == 8'd8) || (I_CU_WIDTH == 8'd16) ||
                     (I_CU_WIDTH == 8'd32)) &&
                    ((I_CU_HEIGHT == 8'd8) || (I_CU_HEIGHT == 8'd16) ||
                     (I_CU_HEIGHT == 8'd32)) &&
                    (I_CU_X[2:0] == 3'b000) && (I_CU_Y[2:0] == 3'b000) &&
                    (({1'b0,I_CU_X} + {1'b0,I_CU_WIDTH}) <= {1'b0,I_CTU_VALID_WIDTH}) &&
                    (({1'b0,I_CU_Y} + {1'b0,I_CU_HEIGHT}) <= {1'b0,I_CTU_VALID_HEIGHT});
    w_comp_x = '0;
    w_comp_y = '0;
    w_comp_w = '0;
    w_comp_h = '0;
    w_actual_count = '0;
    w_expected_count = '0;
    unique casez (I_RECON_COMPONENT_ID)
      2'd0: begin
        w_comp_x = {1'b0,r_x};
        w_comp_y = {1'b0,r_y};
        w_comp_w = r_width;
        w_comp_h = r_height;
        w_actual_count = r_count_y;
        w_expected_count = r_expected_y;
      end
      2'd1: begin
        w_comp_x = {2'b00,r_x[6:1]};
        w_comp_y = {2'b00,r_y[6:1]};
        w_comp_w = {1'b0,r_width[7:1]};
        w_comp_h = {1'b0,r_height[7:1]};
        w_actual_count = r_count_cb;
        w_expected_count = r_expected_c;
      end
      2'd2: begin
        w_comp_x = {2'b00,r_x[6:1]};
        w_comp_y = {2'b00,r_y[6:1]};
        w_comp_w = {1'b0,r_width[7:1]};
        w_comp_h = {1'b0,r_height[7:1]};
        w_actual_count = r_count_cr;
        w_expected_count = r_expected_c;
      end
      default: begin end
    endcase
    w_component_seq_ok = 1'b0;
    unique casez (I_RECON_COMPONENT_ID)
      2'd0: w_component_seq_ok = !r_complete[0] && !r_complete[1] && !r_complete[2];
      2'd1: w_component_seq_ok = r_complete[0] && !r_complete[1] && !r_complete[2];
      2'd2: w_component_seq_ok = r_complete[0] && r_complete[1] && !r_complete[2];
      default: begin end
    endcase
    w_word_col = '0;
    w_word_row = '0;
    unique casez (w_comp_w)
      8'd4: begin
        w_word_col = 9'd0;
        w_word_row = w_actual_count;
      end
      8'd8: begin
        w_word_col = {8'b0,w_actual_count[0]};
        w_word_row = w_actual_count >> 1;
      end
      8'd16: begin
        w_word_col = {7'b0,w_actual_count[1:0]};
        w_word_row = w_actual_count >> 2;
      end
      8'd32: begin
        w_word_col = {6'b0,w_actual_count[2:0]};
        w_word_row = w_actual_count >> 3;
      end
      default: begin end
    endcase
    w_expected_x = 7'(w_comp_x + {w_word_col[6:0],2'b00});
    w_expected_y = 7'(w_comp_y + w_word_row[6:0]);
    w_beat_ok = r_active && w_component_seq_ok &&
                (I_RECON_COMPONENT_ID != 2'd3) &&
                (I_RECON_LANE_VALID == 4'b1111) &&
                (w_comp_w >= 8'd4) && (w_comp_h >= 8'd4) &&
                (w_actual_count < w_expected_count) &&
                (I_RECON_X_BASE == w_expected_x) &&
                (I_RECON_Y == w_expected_y) &&
                (I_RECON_TU_LAST == ((w_actual_count + 9'd1) == w_expected_count)) &&
                !r_complete[I_RECON_COMPONENT_ID];
  end

  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_active <= 1'b0;
      r_error <= 1'b0;
      r_x <= '0;
      r_y <= '0;
      r_width <= '0;
      r_height <= '0;
      r_expected_y <= '0;
      r_expected_c <= '0;
      r_count_y <= '0;
      r_count_cb <= '0;
      r_count_cr <= '0;
      r_complete <= '0;
      r_release_expected <= 1'b0;
      r_release_component <= '0;
      r_all_released_q <= 1'b0;
      r_commit_granted <= 1'b0;
    end else if (I_CLEAR_ERROR || I_CTU_START) begin
      r_active <= 1'b0;
      r_error <= 1'b0;
      r_count_y <= '0;
      r_count_cb <= '0;
      r_count_cr <= '0;
      r_complete <= '0;
      r_release_expected <= 1'b0;
      r_all_released_q <= 1'b0;
      r_commit_granted <= 1'b0;
    end else if (w_cu_fire) begin
      if (!w_geometry_ok) r_error <= 1'b1;
      else begin
        r_active <= 1'b1;
        r_x <= I_CU_X;
        r_y <= I_CU_Y;
        r_width <= I_CU_WIDTH;
        r_height <= I_CU_HEIGHT;
        r_expected_y <= 9'((I_CU_WIDTH >> 2) * I_CU_HEIGHT);
        r_expected_c <= 9'((I_CU_WIDTH >> 3) * (I_CU_HEIGHT >> 1));
        r_count_y <= '0;
        r_count_cb <= '0;
        r_count_cr <= '0;
        r_complete <= '0;
        r_release_expected <= 1'b0;
        r_all_released_q <= 1'b0;
      r_commit_granted <= 1'b0;
      end
    end else if (I_CU_RELEASE) begin
      if (r_active && (r_commit_granted || O_CU_COMMIT_DONE) && !r_error) r_active <= 1'b0;
      else r_error <= 1'b1;
    end else begin
      if (I_RECON_FIRE) begin
        if (!w_beat_ok || r_release_expected) r_error <= 1'b1;
        else begin
          unique casez (I_RECON_COMPONENT_ID)
            2'd0: r_count_y <= r_count_y + 9'd1;
            2'd1: r_count_cb <= r_count_cb + 9'd1;
            2'd2: r_count_cr <= r_count_cr + 9'd1;
            default: r_error <= 1'b1;
          endcase
          if (I_RECON_TU_LAST) begin
            r_release_expected <= 1'b1;
            r_release_component <= I_RECON_COMPONENT_ID;
          end
        end
      end
      if (I_TU_REF_RELEASE) begin
        if (!r_release_expected || !r_active) r_error <= 1'b1;
        else begin
          r_complete[r_release_component] <= 1'b1;
          r_release_expected <= 1'b0;
        end
      end
      // This delayed flag forces one more edge after the last release;
      // RECON_AVAIL_MAP consumes the writer's registered tile commit on that edge.
      r_all_released_q <= &r_complete;
      if (O_CU_COMMIT_DONE) r_commit_granted <= 1'b1;
    end
  end
endmodule: RECON_CU_COMMIT_CONTROL
