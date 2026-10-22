//------------------------------------------------------------------------------
// Module      : DBF_EDGE_PARAMETER_CALCULATOR
// Description : Qualifies boundary-driven Y/Cb/Cr CU edge candidates generated
//               by DBF_EDGE_SCHEDULER and emits a filter parameter descriptor.
//
// Input contract:
//   - Y: four-sample edge; Cb/Cr: two-sample edge (4:2:0).
//   - Metadata P/Q is passed directly from DBF_EDGE_SCHEDULER.  No RAM read.
//   - CU geometry equals TU geometry (one logical TU per Leaf CU).
//   - All eligible blocks are Intra, with no ISP/BDPCM/sub-block edge tools.
//   - Only internal CTU CU boundaries are supplied by the scheduler.
//   - Cb/Cr QP inputs are pre-mapped QPs for the CTU (0..63), not the
//     luma QP and not raw chroma QP offsets. No per-CU chroma delta QP.
//   - Chroma filter side lengths 1/3 use a CU-size baseline approximation;
//     not complete normative boundary-distance derivation.
//   - I_DBF_ENABLE is sampled with the candidate handshake.
//
// Metadata 32-bit layout:
//   [31:30] reserved       [29:24] QP
//   [23:21] height code    [20:18] width code
//   [17:13] Y grid origin  [12:8]  X grid origin
//   [7:0]   CU ID
//   Width/height in samples = 4 << code.  Entry VALID is external to DATA.
//
// Luma baseline length rule for ordinary CU/TU boundaries:
//   If either orthogonal block side is 4: SP = SQ = 1.
//   Otherwise length per side is 7 for size >=32, or 3 for size 8..16.
//   No PU/SB lengths 2/5, CTU-neighbor caps, chroma or special tools.
//
// Output contract:
//   - bS = 2 for an eligible All-Intra boundary; ineligible candidates drop.
//   - Output VALID indicates a *qualified filter descriptor* (not a sample).
//   - Output payload remains stable while VALID && !READY.
//   - Input candidates are accepted at most once; READY only in ST_IDLE.
//   - No candidate-level done pulse: the controller must drain downstream
//     before it may release the CTU bank after scheduler SCAN_DONE.
//------------------------------------------------------------------------------
module DBF_EDGE_PARAMETER_CALCULATOR (
  input               I_CLK,
  input               I_RST_N,

  // Candidate from DBF_EDGE_SCHEDULER.
  input               I_EDGE_VALID,
  output logic        O_EDGE_READY,
  input        [11:0] I_EDGE_ID,
  input         [8:0] I_EDGE_CTU_ID,
  input               I_EDGE_BANK,
  input         [1:0] I_EDGE_COMPONENT_ID,
  input               I_EDGE_DIRECTION,
  input         [7:0] I_EDGE_X,
  input         [7:0] I_EDGE_Y,
  input         [3:0] I_EDGE_LANE_MASK,
  input        [31:0] I_EDGE_META_P,
  input        [31:0] I_EDGE_META_Q,

  // CTU-level control.  Sampled when the candidate is accepted.
  input               I_DBF_ENABLE,
  input         [5:0] I_QP_CB, // pre-mapped chroma QP, CTU constant
  input         [5:0] I_QP_CR, // pre-mapped chroma QP, CTU constant

  // Qualified descriptor to the directional FIFO / sample fetch controller.
  output logic        O_PARAM_VALID,
  input               I_PARAM_READY,
  output logic [11:0] O_PARAM_EDGE_ID,
  output logic  [8:0] O_PARAM_CTU_ID,
  output logic        O_PARAM_BANK,
  output logic  [1:0] O_PARAM_COMPONENT_ID,
  output logic        O_PARAM_DIRECTION,
  output logic  [7:0] O_PARAM_X,
  output logic  [7:0] O_PARAM_Y,
  output logic  [3:0] O_PARAM_LANE_MASK,
  output logic  [1:0] O_PARAM_BS,
  output logic  [2:0] O_PARAM_SP,
  output logic  [2:0] O_PARAM_SQ,
  output logic  [5:0] O_PARAM_QP_P,
  output logic  [5:0] O_PARAM_QP_Q
);

  // FSM states.
  typedef enum logic [1:0] {
    ST_IDLE      = 2'd0,
    ST_CALCULATE = 2'd1,
    ST_OUTPUT    = 2'd2
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  // Candidate holding registers: no reset, guarded by the FSM.
  logic [11:0] r_edge_id;
  logic  [8:0] r_ctu_id;
  logic        r_bank;
  logic  [1:0] r_component_id;
  logic        r_direction;
  logic  [7:0] r_edge_x;
  logic  [7:0] r_edge_y;
  logic  [3:0] r_lane_mask;
  logic [31:0] r_meta_p;
  logic [31:0] r_meta_q;
  logic        r_dbf_enable;
  logic  [5:0] r_qp_cb;
  logic  [5:0] r_qp_cr;

  // Filter result registers: valid only in ST_OUTPUT.
  logic [11:0] r_param_edge_id;
  logic  [8:0] r_param_ctu_id;
  logic        r_param_bank;
  logic  [1:0] r_param_component_id;
  logic        r_param_direction;
  logic  [7:0] r_param_x;
  logic  [7:0] r_param_y;
  logic  [3:0] r_param_lane_mask;
  logic  [2:0] r_param_sp;
  logic  [2:0] r_param_sq;
  logic  [5:0] r_param_qp_p;
  logic  [5:0] r_param_qp_q;

  // Explicitly widened geometry avoids truncation at the 128-sample limit.
  logic  [2:0] w_width_code_p;
  logic  [2:0] w_width_code_q;
  logic  [2:0] w_height_code_p;
  logic  [2:0] w_height_code_q;
  logic  [5:0] w_x_begin_p;
  logic  [5:0] w_x_begin_q;
  logic  [5:0] w_y_begin_p;
  logic  [5:0] w_y_begin_q;
  logic  [5:0] w_x_end_p;
  logic  [5:0] w_x_end_q;
  logic  [5:0] w_y_end_p;
  logic  [5:0] w_y_end_q;
  logic  [5:0] w_edge_x_grid;
  logic  [5:0] w_edge_y_grid;
  logic  [2:0] w_orth_code_p;
  logic  [2:0] w_orth_code_q;
  logic  [2:0] w_sp;
  logic  [2:0] w_sq;
  logic        w_is_chroma;
  logic        w_component_valid;
  logic        w_chroma_grid_valid;
  logic        w_codes_valid;
  logic        w_geometry_valid;
  logic        w_lane_mask_valid;
  logic        w_candidate_eligible;
  logic        w_input_fire;
  logic        w_output_fire;

  assign w_input_fire  = I_EDGE_VALID && O_EDGE_READY;
  assign w_output_fire = O_PARAM_VALID && I_PARAM_READY;

  assign w_width_code_p  = r_meta_p[20:18];
  assign w_width_code_q  = r_meta_q[20:18];
  assign w_height_code_p = r_meta_p[23:21];
  assign w_height_code_q = r_meta_q[23:21];

  assign w_x_begin_p = {1'b0, r_meta_p[12:8]};
  assign w_x_begin_q = {1'b0, r_meta_q[12:8]};
  assign w_y_begin_p = {1'b0, r_meta_p[17:13]};
  assign w_y_begin_q = {1'b0, r_meta_q[17:13]};

  assign w_x_end_p = w_x_begin_p + (6'd1 << w_width_code_p);
  assign w_x_end_q = w_x_begin_q + (6'd1 << w_width_code_q);
  assign w_y_end_p = w_y_begin_p + (6'd1 << w_height_code_p);
  assign w_y_end_q = w_y_begin_q + (6'd1 << w_height_code_q);

  assign w_is_chroma = (r_component_id != 2'd0);
  // Chroma coordinate is half of luma coordinate; metadata cell size
  // is four luma samples or two chroma samples.
  assign w_edge_x_grid = w_is_chroma ? r_edge_x[6:1] : r_edge_x[7:2];
  assign w_edge_y_grid = w_is_chroma ? r_edge_y[6:1] : r_edge_y[7:2];
  assign w_component_valid = (r_component_id != 2'd3);
  assign w_chroma_grid_valid = !w_is_chroma ||
                                (!r_direction ? (r_edge_x[2:0] == 3'd0) :
                                                (r_edge_y[2:0] == 3'd0));
  assign w_orth_code_p = r_direction ? w_height_code_p : w_width_code_p;
  assign w_orth_code_q = r_direction ? w_height_code_q : w_width_code_q;

  assign w_codes_valid = (w_width_code_p  <= 3'd5) &&
                         (w_width_code_q  <= 3'd5) &&
                         (w_height_code_p <= 3'd5) &&
                         (w_height_code_q <= 3'd5);

  // All four valid-lane masks are LSB-contiguous.  Only a partial segment
  // at the image boundary may have fewer than four enabled lanes.
  assign w_lane_mask_valid = w_is_chroma ?
                               ((r_lane_mask == 4'b0011) ||
                                (r_lane_mask == 4'b0001)) :
                               ((r_lane_mask == 4'b1111) ||
                                (r_lane_mask == 4'b0111) ||
                                (r_lane_mask == 4'b0011) ||
                                (r_lane_mask == 4'b0001));

  // Internal CU boundary geometry: direction 0 is vertical; direction 1
  // is horizontal.  Verify that P ends exactly where Q begins, and that
  // both CU rectangles cover the segment along its edge direction.
  always_comb begin
    w_geometry_valid = 1'b0;

    if (w_codes_valid &&
        (!w_is_chroma ? ((r_edge_x[1:0] == 2'b00) &&
                         (r_edge_y[1:0] == 2'b00)) :
                        ((r_edge_x[0] == 1'b0) &&
                         (r_edge_y[0] == 1'b0))) &&
        w_chroma_grid_valid &&
        (w_x_end_p <= 6'd32) && (w_x_end_q <= 6'd32) &&
        (w_y_end_p <= 6'd32) && (w_y_end_q <= 6'd32)) begin
      if (!r_direction) begin
        w_geometry_valid = (w_edge_x_grid != 6'd0) &&
                           (w_edge_x_grid < 6'd32) &&
                           (w_edge_x_grid == w_x_end_p) &&
                           (w_edge_x_grid == w_x_begin_q) &&
                           (w_edge_y_grid >= w_y_begin_p) &&
                           (w_edge_y_grid < w_y_end_p) &&
                           (w_edge_y_grid >= w_y_begin_q) &&
                           (w_edge_y_grid < w_y_end_q);
      end else begin
        w_geometry_valid = (w_edge_y_grid != 6'd0) &&
                           (w_edge_y_grid < 6'd32) &&
                           (w_edge_y_grid == w_y_end_p) &&
                           (w_edge_y_grid == w_y_begin_q) &&
                           (w_edge_x_grid >= w_x_begin_p) &&
                           (w_edge_x_grid < w_x_end_p) &&
                           (w_edge_x_grid >= w_x_begin_q) &&
                           (w_edge_x_grid < w_x_end_q);
      end
    end
  end

  // Plain luma CU/TU boundary lengths (All-Intra baseline).
  // The 4-sample exception applies to BOTH sides, as in the luma rule.
  always_comb begin
    w_sp = 3'd1;
    w_sq = 3'd1;

    if (w_is_chroma) begin
      // One CU-size-based baseline rule (not a full VVC length derivation).
      // Chroma CU side size is 2 << metadata_code samples.
      w_sp = (w_orth_code_p >= 3'd2) ? 3'd3 : 3'd1;
      w_sq = (w_orth_code_q >= 3'd2) ? 3'd3 : 3'd1;
    end else if ((w_orth_code_p != 3'd0) && (w_orth_code_q != 3'd0)) begin
      w_sp = (w_orth_code_p >= 3'd3) ? 3'd7 : 3'd3;
      w_sq = (w_orth_code_q >= 3'd3) ? 3'd7 : 3'd3;
    end
  end

  assign w_candidate_eligible = r_dbf_enable &&
                                w_component_valid &&
                                w_lane_mask_valid &&
                                w_geometry_valid;

  // FSM process 1: Current-state register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // FSM process 2: Next-state combinational logic.
  always_comb begin
    w_next_state = r_current_state;

    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_input_fire)
          w_next_state = ST_CALCULATE;
      end

      ST_CALCULATE: begin
        w_next_state = w_candidate_eligible ? ST_OUTPUT : ST_IDLE;
      end

      ST_OUTPUT: begin
        if (w_output_fire)
          w_next_state = ST_IDLE;
      end

      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // FSM process 3: Output combinational decode.
  always_comb begin
    O_EDGE_READY          = 1'b0;
    O_PARAM_VALID         = 1'b0;
    O_PARAM_EDGE_ID       = r_param_edge_id;
    O_PARAM_CTU_ID        = r_param_ctu_id;
    O_PARAM_BANK          = r_param_bank;
    O_PARAM_COMPONENT_ID  = r_param_component_id;
    O_PARAM_DIRECTION     = r_param_direction;
    O_PARAM_X             = r_param_x;
    O_PARAM_Y             = r_param_y;
    O_PARAM_LANE_MASK     = r_param_lane_mask;
    O_PARAM_BS            = 2'd2;
    O_PARAM_SP            = r_param_sp;
    O_PARAM_SQ            = r_param_sq;
    O_PARAM_QP_P          = r_param_qp_p;
    O_PARAM_QP_Q          = r_param_qp_q;

    unique casez (r_current_state)
      ST_IDLE: begin
        O_EDGE_READY = 1'b1;
      end

      ST_CALCULATE: begin
        // Result and context are registered before ST_OUTPUT.
      end

      ST_OUTPUT: begin
        O_PARAM_VALID = 1'b1;
      end

      default: begin
        // Safe defaults apply.
      end
    endcase
  end

  // Register a complete candidate on one ready/valid handshake.
  // Candidate payload is unobservable until ST_CALCULATE/ST_OUTPUT.
  always_ff @(posedge I_CLK) begin
    if (w_input_fire) begin
      r_edge_id       <= I_EDGE_ID;
      r_ctu_id        <= I_EDGE_CTU_ID;
      r_bank          <= I_EDGE_BANK;
      r_component_id  <= I_EDGE_COMPONENT_ID;
      r_direction     <= I_EDGE_DIRECTION;
      r_edge_x        <= I_EDGE_X;
      r_edge_y        <= I_EDGE_Y;
      r_lane_mask     <= I_EDGE_LANE_MASK;
      r_meta_p        <= I_EDGE_META_P;
      r_meta_q        <= I_EDGE_META_Q;
      r_dbf_enable    <= I_DBF_ENABLE;
      r_qp_cb         <= I_QP_CB;
      r_qp_cr         <= I_QP_CR;
    end
  end

  // Capture calculated parameters, only when candidate qualifies.
  // One sequential driver per register; payload is held throughout stalls.
  always_ff @(posedge I_CLK) begin
    if ((r_current_state == ST_CALCULATE) && w_candidate_eligible) begin
      r_param_edge_id      <= r_edge_id;
      r_param_ctu_id       <= r_ctu_id;
      r_param_bank         <= r_bank;
      r_param_component_id <= r_component_id;
      r_param_direction    <= r_direction;
      r_param_x            <= r_edge_x;
      r_param_y            <= r_edge_y;
      r_param_lane_mask    <= r_lane_mask;
      r_param_sp           <= w_sp;
      r_param_sq           <= w_sq;
      if (r_component_id == 2'd1) begin
        r_param_qp_p <= r_qp_cb;
        r_param_qp_q <= r_qp_cb;
      end else if (r_component_id == 2'd2) begin
        r_param_qp_p <= r_qp_cr;
        r_param_qp_q <= r_qp_cr;
      end else begin
        r_param_qp_p <= r_meta_p[29:24];
        r_param_qp_q <= r_meta_q[29:24];
      end
    end
  end

endmodule: DBF_EDGE_PARAMETER_CALCULATOR
