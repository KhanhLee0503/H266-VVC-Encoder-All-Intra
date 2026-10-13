//-----------------------------------------------------------
// Description: This module calculates 8 odd-frequency coefficients
// of a forward DCT-II 16-point transform using 2 groups of
// four butterfly odd terms. Four shared shift-add MCM
// generators feed fixed product routing, parallel four-input
// adder trees and one accumulator per output coefficient.
// The complete odd vector is accepted in one ready/valid
// handshake. Results remain stable during output stalls.
// Coefficient source: ITU-T H.266 (01/2026), clause 8.7.4.5.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_DCT2_ODD_MCM_16 #(
  parameter PARA_DATA_WD = 18,
  parameter PARA_RESULT_WD = 28
)(
  input                                       I_CLK,
  input                                       I_RESETN,
  input                                       I_DATA_VALID,
  output logic                                O_DATA_READY,
  input        [8*PARA_DATA_WD-1:0]           I_DATA,
  output logic                                O_DATA_VALID,
  input                                       I_DATA_READY,
  output logic [8*PARA_RESULT_WD-1:0]         O_DATA
);
  localparam PARA_ODD_COUNT = 8;
  localparam PARA_GROUP_COUNT = 2;
  localparam PARA_GROUP_WD = 1;
  localparam PARA_MAG_COUNT = 8;

  typedef enum logic [1:0] {
    ST_IDLE,
    ST_ISSUE,
    ST_DRAIN,
    ST_OUTPUT
  } state_t;

  state_t r_current_state;
  state_t w_next_state;
  logic w_issue;
  logic w_last_accum;
  logic [PARA_GROUP_WD-1:0] r_issue_idx;
  logic [4:0] r_stage_valid;
  logic [PARA_GROUP_WD-1:0] r_stage_group [0:4];
  logic signed [PARA_DATA_WD-1:0] r_input_vector [0:PARA_ODD_COUNT-1];
  logic signed [PARA_RESULT_WD-1:0] r_base_x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_base_3x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_base_5x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_base_7x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_base_9x [0:3];
  logic signed [PARA_RESULT_WD-1:0] r_product [0:3][0:PARA_MAG_COUNT-1];
  logic signed [PARA_RESULT_WD-1:0] w_route [0:PARA_ODD_COUNT-1][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_route [0:PARA_ODD_COUNT-1][0:3];
  logic signed [PARA_RESULT_WD-1:0] r_pair01 [0:PARA_ODD_COUNT-1];
  logic signed [PARA_RESULT_WD-1:0] r_pair23 [0:PARA_ODD_COUNT-1];
  logic signed [PARA_RESULT_WD-1:0] r_partial [0:PARA_ODD_COUNT-1];
  logic signed [PARA_RESULT_WD-1:0] r_acc [0:PARA_ODD_COUNT-1];

  assign w_last_accum = r_stage_valid[4] && (r_stage_group[4] == PARA_GROUP_WD'(PARA_GROUP_COUNT-1));

  // Process 1: Store the current FSM state.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // Process 2: Advance only after the corresponding vector event.
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (I_DATA_VALID && O_DATA_READY)
          w_next_state = ST_ISSUE;
      end
      ST_ISSUE: begin
        if (r_issue_idx == PARA_GROUP_WD'(PARA_GROUP_COUNT-1))
          w_next_state = ST_DRAIN;
      end
      ST_DRAIN: begin
        if (w_last_accum)
          w_next_state = ST_OUTPUT;
      end
      ST_OUTPUT: begin
        if (I_DATA_READY)
          w_next_state = ST_IDLE;
      end
      default: w_next_state = ST_IDLE;
    endcase
  end

  // Process 3: Only the idle state accepts a new whole vector.
  always_comb begin
    O_DATA_READY = 1'b0;
    O_DATA_VALID = 1'b0;
    w_issue = 1'b0;
    unique casez (r_current_state)
      ST_IDLE: O_DATA_READY = 1'b1;
      ST_ISSUE: w_issue = 1'b1;
      ST_OUTPUT: O_DATA_VALID = 1'b1;
      default: begin
        O_DATA_READY = 1'b0;
        O_DATA_VALID = 1'b0;
        w_issue = 1'b0;
      end
    endcase
  end

  // Valid and group tags advance through the fixed-latency datapath.
  always_ff @(posedge I_CLK, negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_issue_idx <= '0;
      r_stage_valid <= '0;
    end
    else begin
      r_stage_valid[0] <= w_issue;
      r_stage_valid[4:1] <= r_stage_valid[3:0];
      if (r_current_state == ST_IDLE)
        r_issue_idx <= '0;
      else if (w_issue && (r_issue_idx != PARA_GROUP_WD'(PARA_GROUP_COUNT-1)))
        r_issue_idx <= r_issue_idx + PARA_GROUP_WD'(1);
    end
  end

  always_ff @(posedge I_CLK) begin
    if (w_issue)
      r_stage_group[0] <= r_issue_idx;
    for (int stage_idx = 1; stage_idx < 5; stage_idx++) begin
      if (r_stage_valid[stage_idx-1])
        r_stage_group[stage_idx] <= r_stage_group[stage_idx-1];
    end
  end

  // A complete butterfly odd vector is buffered until computation ends.
  for (genvar input_idx = 0; input_idx < PARA_ODD_COUNT; input_idx++) begin: gen_input_buffer
    always_ff @(posedge I_CLK) begin
      if (I_DATA_VALID && O_DATA_READY)
        r_input_vector[input_idx] <= $signed(I_DATA[input_idx*PARA_DATA_WD +: PARA_DATA_WD]);
    end
  end

  // Stage 0 creates shared small multiples for four odd inputs.
  for (genvar mcm_idx = 0; mcm_idx < 4; mcm_idx++) begin: gen_mcm
    logic signed [PARA_RESULT_WD-1:0] w_x;
    logic signed [PARA_RESULT_WD-1:0] w_11x;
    logic signed [PARA_RESULT_WD-1:0] w_90x;
    assign w_x = $signed(r_input_vector[4*int'(r_issue_idx)+mcm_idx]);
    assign w_11x = r_base_9x[mcm_idx] + (r_base_x[mcm_idx] <<< 1);
    assign w_90x = (r_base_9x[mcm_idx] <<< 3) + (r_base_9x[mcm_idx] <<< 1);

    always_ff @(posedge I_CLK) begin
      if (w_issue) begin
        r_base_x[mcm_idx] <= w_x;
        r_base_3x[mcm_idx] <= (w_x <<< 1) + w_x;
        r_base_5x[mcm_idx] <= (w_x <<< 2) + w_x;
        r_base_7x[mcm_idx] <= (w_x <<< 3) - w_x;
        r_base_9x[mcm_idx] <= (w_x <<< 3) + w_x;
      end
    end

    // Stage 1 generates all required coefficient magnitudes without multipliers.
    always_ff @(posedge I_CLK) begin
      if (r_stage_valid[0]) begin
        r_product[mcm_idx][0] <= r_base_9x[mcm_idx];  // 9x
        r_product[mcm_idx][1] <= (r_base_5x[mcm_idx] <<< 2) + r_base_5x[mcm_idx];  // 25x
        r_product[mcm_idx][2] <= (r_base_9x[mcm_idx] <<< 2) + r_base_7x[mcm_idx];  // 43x
        r_product[mcm_idx][3] <= (r_base_7x[mcm_idx] <<< 3) + r_base_x[mcm_idx];  // 57x
        r_product[mcm_idx][4] <= (r_base_7x[mcm_idx] <<< 3) + (r_base_7x[mcm_idx] <<< 1);  // 70x
        r_product[mcm_idx][5] <= r_base_5x[mcm_idx] <<< 4;  // 80x
        r_product[mcm_idx][6] <= w_90x - r_base_3x[mcm_idx];  // 87x
        r_product[mcm_idx][7] <= w_90x;  // 90x
      end
    end
  end

  // Stage 2 uses one fixed group-select MUX per MCM/output lane path.
  // The negative coefficient sign is applied to the selected product.
  always_comb begin: route_coeff_0_mcm_0
    w_route[0][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[0][0] = r_product[0][7];
      1'd1: w_route[0][0] = r_product[0][3];
      default: w_route[0][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_0_mcm_1
    w_route[0][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[0][1] = r_product[1][6];
      1'd1: w_route[0][1] = r_product[1][2];
      default: w_route[0][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_0_mcm_2
    w_route[0][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[0][2] = r_product[2][5];
      1'd1: w_route[0][2] = r_product[2][1];
      default: w_route[0][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_0_mcm_3
    w_route[0][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[0][3] = r_product[3][4];
      1'd1: w_route[0][3] = r_product[3][0];
      default: w_route[0][3] = '0;
    endcase
  end
  always_comb begin: route_coeff_1_mcm_0
    w_route[1][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[1][0] = r_product[0][6];
      1'd1: w_route[1][0] = -r_product[0][5];
      default: w_route[1][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_1_mcm_1
    w_route[1][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[1][1] = r_product[1][3];
      1'd1: w_route[1][1] = -r_product[1][7];
      default: w_route[1][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_1_mcm_2
    w_route[1][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[1][2] = r_product[2][0];
      1'd1: w_route[1][2] = -r_product[2][4];
      default: w_route[1][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_1_mcm_3
    w_route[1][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[1][3] = -r_product[3][2];
      1'd1: w_route[1][3] = -r_product[3][1];
      default: w_route[1][3] = '0;
    endcase
  end
  always_comb begin: route_coeff_2_mcm_0
    w_route[2][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[2][0] = r_product[0][5];
      1'd1: w_route[2][0] = -r_product[0][1];
      default: w_route[2][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_2_mcm_1
    w_route[2][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[2][1] = r_product[1][0];
      1'd1: w_route[2][1] = r_product[1][3];
      default: w_route[2][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_2_mcm_2
    w_route[2][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[2][2] = -r_product[2][4];
      1'd1: w_route[2][2] = r_product[2][7];
      default: w_route[2][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_2_mcm_3
    w_route[2][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[2][3] = -r_product[3][6];
      1'd1: w_route[2][3] = r_product[3][2];
      default: w_route[2][3] = '0;
    endcase
  end
  always_comb begin: route_coeff_3_mcm_0
    w_route[3][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[3][0] = r_product[0][4];
      1'd1: w_route[3][0] = r_product[0][7];
      default: w_route[3][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_3_mcm_1
    w_route[3][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[3][1] = -r_product[1][2];
      1'd1: w_route[3][1] = r_product[1][1];
      default: w_route[3][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_3_mcm_2
    w_route[3][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[3][2] = -r_product[2][6];
      1'd1: w_route[3][2] = -r_product[2][5];
      default: w_route[3][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_3_mcm_3
    w_route[3][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[3][3] = r_product[3][0];
      1'd1: w_route[3][3] = -r_product[3][3];
      default: w_route[3][3] = '0;
    endcase
  end
  always_comb begin: route_coeff_4_mcm_0
    w_route[4][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[4][0] = r_product[0][3];
      1'd1: w_route[4][0] = -r_product[0][0];
      default: w_route[4][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_4_mcm_1
    w_route[4][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[4][1] = -r_product[1][5];
      1'd1: w_route[4][1] = -r_product[1][6];
      default: w_route[4][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_4_mcm_2
    w_route[4][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[4][2] = -r_product[2][1];
      1'd1: w_route[4][2] = r_product[2][2];
      default: w_route[4][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_4_mcm_3
    w_route[4][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[4][3] = r_product[3][7];
      1'd1: w_route[4][3] = r_product[3][4];
      default: w_route[4][3] = '0;
    endcase
  end
  always_comb begin: route_coeff_5_mcm_0
    w_route[5][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[5][0] = r_product[0][2];
      1'd1: w_route[5][0] = -r_product[0][6];
      default: w_route[5][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_5_mcm_1
    w_route[5][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[5][1] = -r_product[1][7];
      1'd1: w_route[5][1] = r_product[1][4];
      default: w_route[5][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_5_mcm_2
    w_route[5][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[5][2] = r_product[2][3];
      1'd1: w_route[5][2] = r_product[2][0];
      default: w_route[5][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_5_mcm_3
    w_route[5][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[5][3] = r_product[3][1];
      1'd1: w_route[5][3] = -r_product[3][5];
      default: w_route[5][3] = '0;
    endcase
  end
  always_comb begin: route_coeff_6_mcm_0
    w_route[6][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[6][0] = r_product[0][1];
      1'd1: w_route[6][0] = r_product[0][2];
      default: w_route[6][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_6_mcm_1
    w_route[6][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[6][1] = -r_product[1][4];
      1'd1: w_route[6][1] = r_product[1][0];
      default: w_route[6][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_6_mcm_2
    w_route[6][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[6][2] = r_product[2][7];
      1'd1: w_route[6][2] = -r_product[2][3];
      default: w_route[6][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_6_mcm_3
    w_route[6][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[6][3] = -r_product[3][5];
      1'd1: w_route[6][3] = r_product[3][6];
      default: w_route[6][3] = '0;
    endcase
  end
  always_comb begin: route_coeff_7_mcm_0
    w_route[7][0] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[7][0] = r_product[0][0];
      1'd1: w_route[7][0] = r_product[0][4];
      default: w_route[7][0] = '0;
    endcase
  end
  always_comb begin: route_coeff_7_mcm_1
    w_route[7][1] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[7][1] = -r_product[1][1];
      1'd1: w_route[7][1] = -r_product[1][5];
      default: w_route[7][1] = '0;
    endcase
  end
  always_comb begin: route_coeff_7_mcm_2
    w_route[7][2] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[7][2] = r_product[2][2];
      1'd1: w_route[7][2] = r_product[2][6];
      default: w_route[7][2] = '0;
    endcase
  end
  always_comb begin: route_coeff_7_mcm_3
    w_route[7][3] = '0;
    unique casez (r_stage_group[1])
      1'd0: w_route[7][3] = -r_product[3][3];
      1'd1: w_route[7][3] = -r_product[3][7];
      default: w_route[7][3] = '0;
    endcase
  end

  for (genvar output_idx = 0; output_idx < PARA_ODD_COUNT; output_idx++) begin: gen_output_lane
    // The two adder-tree levels and the accumulation are registered.
    always_ff @(posedge I_CLK) begin
      if (r_stage_valid[1]) begin
        for (int source_idx = 0; source_idx < 4; source_idx++)
          r_route[output_idx][source_idx] <= w_route[output_idx][source_idx];
      end
      if (r_stage_valid[2]) begin
        r_pair01[output_idx] <= r_route[output_idx][0] + r_route[output_idx][1];
        r_pair23[output_idx] <= r_route[output_idx][2] + r_route[output_idx][3];
      end
      if (r_stage_valid[3])
        r_partial[output_idx] <= r_pair01[output_idx] + r_pair23[output_idx];
      if (r_stage_valid[4]) begin
        if (r_stage_group[4] == '0)
          r_acc[output_idx] <= r_partial[output_idx];
        else
          r_acc[output_idx] <= r_acc[output_idx] + r_partial[output_idx];
      end
    end
    // Packed coefficient order: y1, y3, ... y(N-1).
    assign O_DATA[output_idx*PARA_RESULT_WD +: PARA_RESULT_WD] = r_acc[output_idx];
  end
endmodule: TQ_DCT2_ODD_MCM_16
