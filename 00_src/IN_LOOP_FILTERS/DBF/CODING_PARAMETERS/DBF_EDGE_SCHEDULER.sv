//------------------------------------------------------------------------------
// Module      : DBF_EDGE_SCHEDULER
// Description : Boundary-driven Y/Cb/Cr scanner (4:2:0 All-Intra baseline).
//               The module reads the existing 4x4 spatial CU metadata map.
//               It skips the interior of each CU using the stored CU geometry
//               and emits 4-sample Y / 2-sample Cb,Cr CU edge segments.
//
// Baseline limitations:
//   - Shared luma 4x4 grid metadata; one logical TU per Leaf CU.
//   - Chroma candidates only where the perpendicular coordinate aligns to
//     the 8-chroma-sample grid (4 luma metadata cells).
//   - Only internal CTU CU boundaries are emitted; picture/CTU neighbor
//     boundaries and independent chroma TU partitioning are not supported.
//   - One metadata read request may be outstanding at a time.
//   - One CTU and one direction are processed per start handshake.
//   - Direction 0 is vertical (HFE); direction 1 is horizontal (VFE).
//   - A candidate is not a filtering command. The parameter calculator must
//     still evaluate boundary eligibility and boundary strength.
//   - Sample readiness, bank ownership and HFE/VFE ordering are guaranteed
//     by the external CTU/DBF controller.
//
// Metadata layout (DATA is separate from ENTRY_VALID):
//   [31:30] reserved, [29:24] QP, [23:21] CU height code,
//   [20:18] CU width code, [17:13] CU Y unit, [12:8] CU X unit,
//   [7:0] CU ID.
//   Each grid unit covers 4 x 4 luma samples.
//------------------------------------------------------------------------------
module DBF_EDGE_SCHEDULER (
  input              I_CLK,
  input              I_RST_N,

  // A start transaction is accepted only when the upstream controller has
  // confirmed both matching-CTU sample readiness and metadata completion.
  input              I_CTU_START_VALID,
  output logic       O_CTU_START_READY,
  input        [8:0] I_CTU_ID,
  input              I_CTU_BANK,
  input        [7:0] I_CTU_VALID_WIDTH,
  input        [7:0] I_CTU_VALID_HEIGHT,
  input              I_DIRECTION,
  input        [1:0] I_COMPONENT_ID, // 0 Y, 1 Cb, 2 Cr

  // One shared, synchronous metadata RAM read port.
  output logic       O_RD_EN,
  output logic       O_RD_BANK,
  output logic [9:0] O_RD_ADDR,
  input              I_RD_RESP_VALID,
  input              I_RD_ENTRY_VALID,
  input       [31:0] I_RD_DATA,

  // Ready/valid candidate descriptor for the parameter calculator.
  output logic        O_EDGE_VALID,
  input               I_EDGE_READY,
  output logic [11:0] O_EDGE_ID,
  output logic  [8:0] O_EDGE_CTU_ID,
  output logic        O_EDGE_BANK,
  output logic  [1:0] O_EDGE_COMPONENT_ID,
  output logic        O_EDGE_DIRECTION,
  output logic  [7:0] O_EDGE_X,
  output logic  [7:0] O_EDGE_Y,
  output logic  [3:0] O_EDGE_LANE_MASK,
  output logic [31:0] O_EDGE_META_P,
  output logic [31:0] O_EDGE_META_Q,

  // Scan completion is distinct from downstream filter completion.
  output logic       O_SCAN_DONE_VALID,
  input              I_SCAN_DONE_READY,
  output logic [8:0] O_SCAN_DONE_CTU_ID,
  output logic       O_SCAN_DONE_BANK,
  output logic       O_SCAN_DONE_DIRECTION,

  // Sticky fault, recoverable by resetting the module.
  output logic       O_ERROR_VALID,
  output logic [2:0] O_ERROR_CODE
);

  typedef enum logic [2:0] {
    ST_IDLE      = 3'd0,
    ST_READ_REQ  = 3'd1,
    ST_READ_WAIT = 3'd2,
    ST_EVALUATE  = 3'd3,
    ST_EMIT      = 3'd4,
    ST_DONE      = 3'd5,
    ST_ERROR     = 3'd6
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic  [8:0] r_ctu_id;
  logic        r_bank;
  logic        r_direction;
  logic  [1:0] r_component_id;
  logic  [7:0] r_valid_width;
  logic  [7:0] r_valid_height;
  logic  [5:0] r_major_limit;
  logic  [5:0] r_minor_limit;
  logic  [5:0] r_scan_major;
  logic  [5:0] r_scan_minor;
  logic        r_have_previous;
  logic [11:0] r_edge_id;
  logic  [2:0] r_error_code;

  // Data registers are not reset because the FSM and r_have_previous qualify
  // their contents. They are written by exactly one sequential process.
  logic [31:0] r_metadata_current;
  logic [31:0] r_metadata_previous;

  logic        w_start_fire;
  logic        w_edge_fire;
  logic        w_invalid_start;
  logic        w_geometry_valid;
  logic        w_last_major;
  logic        w_end_of_minor;
  logic        w_is_chroma;
  logic        w_component_edge_valid;
  logic        w_emit_candidate;
  logic  [7:0] w_component_valid_width;
  logic  [7:0] w_component_valid_height;
  logic  [5:0] w_valid_width_cells;
  logic  [5:0] w_valid_height_cells;
  logic  [5:0] w_position_x;
  logic  [5:0] w_position_y;
  logic  [5:0] w_meta_x_origin;
  logic  [5:0] w_meta_y_origin;
  logic  [5:0] w_meta_width_cells;
  logic  [5:0] w_meta_height_cells;
  logic  [5:0] w_meta_x_end;
  logic  [5:0] w_meta_y_end;
  logic  [5:0] w_meta_minor_origin;
  logic  [5:0] w_meta_minor_end;
  logic  [5:0] w_meta_next_minor;
  logic  [8:0] w_lane_base;
  logic  [8:0] w_lane_limit;
  logic  [3:0] w_lane_mask;

  assign w_is_chroma = (r_component_id != 2'd0);
  // CU metadata uses 4x4 luma cells. The same grid step covers 2x2
  // chroma samples. A chroma boundary must align to an 8x8 chroma grid.
  assign w_component_edge_valid = !w_is_chroma ||
                                  (r_scan_minor[1:0] == 2'b00);
  assign w_emit_candidate = r_have_previous && w_component_edge_valid;
  assign w_component_valid_width = w_is_chroma ?
                                   ({1'b0, r_valid_width[7:1]} + {7'd0, r_valid_width[0]}) : r_valid_width;
  assign w_component_valid_height = w_is_chroma ?
                                    ({1'b0, r_valid_height[7:1]} + {7'd0, r_valid_height[0]}) : r_valid_height;

  assign w_start_fire = I_CTU_START_VALID && O_CTU_START_READY;
  assign w_edge_fire  = O_EDGE_VALID && I_EDGE_READY;

  // This rounding is necessary for CTUs partially covered by the picture.
  assign w_valid_width_cells  = {I_CTU_VALID_WIDTH[7:2]} +
                                {5'd0, (|I_CTU_VALID_WIDTH[1:0])};
  assign w_valid_height_cells = {I_CTU_VALID_HEIGHT[7:2]} +
                                {5'd0, (|I_CTU_VALID_HEIGHT[1:0])};

  assign w_invalid_start = (I_CTU_VALID_WIDTH == 8'd0) ||
                           (I_CTU_VALID_HEIGHT == 8'd0) ||
                           (I_CTU_VALID_WIDTH > 8'd128) ||
                           (I_CTU_VALID_HEIGHT > 8'd128) ||
                           (I_COMPONENT_ID == 2'd3);

  // Direction 0: major = Y and minor = X.
  // Direction 1: major = X and minor = Y.
  assign w_position_x = r_direction ? r_scan_major : r_scan_minor;
  assign w_position_y = r_direction ? r_scan_minor : r_scan_major;

  assign w_meta_x_origin     = {1'b0, r_metadata_current[12:8]};
  assign w_meta_y_origin     = {1'b0, r_metadata_current[17:13]};
  assign w_meta_width_cells  = 6'd1 << r_metadata_current[20:18];
  assign w_meta_height_cells = 6'd1 << r_metadata_current[23:21];
  assign w_meta_x_end        = w_meta_x_origin + w_meta_width_cells;
  assign w_meta_y_end        = w_meta_y_origin + w_meta_height_cells;

  assign w_meta_minor_origin = r_direction ? w_meta_y_origin : w_meta_x_origin;
  assign w_meta_minor_end    = r_direction ? w_meta_y_end : w_meta_x_end;
  assign w_meta_next_minor   = (w_meta_minor_end < r_minor_limit) ?
                               w_meta_minor_end : r_minor_limit;

  // A CU must start exactly at the current minor-axis cursor. Its extent on
  // the orthogonal axis must cover the current four-sample edge segment.
  // A malformed metadata map fails closed rather than emitting a false edge.
  assign w_geometry_valid = (r_metadata_current[20:18] <= 3'd5) &&
                            (r_metadata_current[23:21] <= 3'd5) &&
                            (w_meta_x_end <= 6'd32) &&
                            (w_meta_y_end <= 6'd32) &&
                            (w_meta_minor_origin == r_scan_minor) &&
                            (w_meta_x_origin <= w_position_x) &&
                            (w_meta_y_origin <= w_position_y) &&
                            (w_position_x < w_meta_x_end) &&
                            (w_position_y < w_meta_y_end) &&
                            (w_meta_next_minor > r_scan_minor);

  assign w_last_major   = ((r_scan_major + 6'd1) >= r_major_limit);
  assign w_end_of_minor = (w_meta_next_minor >= r_minor_limit);

  // Final edge segment may be partial (4 Y lanes / 2 chroma lanes).
  // Full-Window-or-Bypass is intentionally NOT evaluated here.
  assign w_lane_base  = w_is_chroma ? {2'd0, r_scan_major, 1'b0} :
                                       {1'b0, r_scan_major, 2'b00};
  assign w_lane_limit = r_direction ? {1'b0, w_component_valid_width} :
                                      {1'b0, w_component_valid_height};
  assign w_lane_mask[0] = (w_lane_base < w_lane_limit);
  assign w_lane_mask[1] = ((w_lane_base + 9'd1) < w_lane_limit);
  assign w_lane_mask[2] = !w_is_chroma && ((w_lane_base + 9'd2) < w_lane_limit);
  assign w_lane_mask[3] = !w_is_chroma && ((w_lane_base + 9'd3) < w_lane_limit);

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
        if (w_start_fire)
          w_next_state = w_invalid_start ? ST_ERROR : ST_READ_REQ;
      end

      ST_READ_REQ: begin
        w_next_state = ST_READ_WAIT;
      end

      ST_READ_WAIT: begin
        if (I_RD_RESP_VALID)
          w_next_state = I_RD_ENTRY_VALID ? ST_EVALUATE : ST_ERROR;
      end

      ST_EVALUATE: begin
        if (!w_geometry_valid)
          w_next_state = ST_ERROR;
        else if (w_emit_candidate)
          w_next_state = ST_EMIT;
        else if (w_end_of_minor && w_last_major)
          w_next_state = ST_DONE;
        else
          w_next_state = ST_READ_REQ;
      end

      ST_EMIT: begin
        if (w_edge_fire) begin
          if (w_end_of_minor && w_last_major)
            w_next_state = ST_DONE;
          else
            w_next_state = ST_READ_REQ;
        end
      end

      ST_DONE: begin
        if (I_SCAN_DONE_READY)
          w_next_state = ST_IDLE;
      end

      ST_ERROR: begin
        w_next_state = ST_ERROR;
      end

      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // FSM process 3: Output combinational decode.
  always_comb begin
    O_CTU_START_READY     = 1'b0;
    O_RD_EN               = 1'b0;
    O_RD_BANK             = r_bank;
    O_RD_ADDR             = 10'd0;
    O_EDGE_VALID          = 1'b0;
    O_EDGE_ID             = r_edge_id;
    O_EDGE_CTU_ID         = r_ctu_id;
    O_EDGE_BANK           = r_bank;
    O_EDGE_COMPONENT_ID   = r_component_id;
    O_EDGE_DIRECTION      = r_direction;
    O_EDGE_X              = 8'd0;
    O_EDGE_Y              = 8'd0;
    O_EDGE_LANE_MASK      = 4'd0;
    O_EDGE_META_P         = 32'd0;
    O_EDGE_META_Q         = 32'd0;
    O_SCAN_DONE_VALID     = 1'b0;
    O_SCAN_DONE_CTU_ID    = r_ctu_id;
    O_SCAN_DONE_BANK      = r_bank;
    O_SCAN_DONE_DIRECTION = r_direction;
    O_ERROR_VALID         = 1'b0;
    O_ERROR_CODE          = r_error_code;

    unique casez (r_current_state)
      ST_IDLE: begin
        O_CTU_START_READY = 1'b1;
      end

      ST_READ_REQ: begin
        O_RD_EN   = 1'b1;
        O_RD_ADDR = {w_position_y[4:0], w_position_x[4:0]};
      end

      ST_EMIT: begin
        O_EDGE_VALID     = 1'b1;
        O_EDGE_X         = w_is_chroma ? {1'b0, w_position_x, 1'b0} :
                                            {w_position_x, 2'b00};
        O_EDGE_Y         = w_is_chroma ? {1'b0, w_position_y, 1'b0} :
                                            {w_position_y, 2'b00};
        O_EDGE_LANE_MASK = w_lane_mask;
        O_EDGE_META_P    = r_metadata_previous;
        O_EDGE_META_Q    = r_metadata_current;
      end

      ST_DONE: begin
        O_SCAN_DONE_VALID = 1'b1;
      end

      ST_ERROR: begin
        O_ERROR_VALID = 1'b1;
      end

      default: begin
        // All outputs retain their safe defaults.
      end
    endcase
  end

  // Context and scanner registers. Changes occur on accepted transactions
  // only, preserving candidate metadata and coordinates during backpressure.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_ctu_id          <= '0;
      r_bank            <= 1'b0;
      r_direction       <= 1'b0;
      r_component_id    <= 2'd0;
      r_valid_width     <= '0;
      r_valid_height    <= '0;
      r_major_limit     <= '0;
      r_minor_limit     <= '0;
      r_scan_major      <= '0;
      r_scan_minor      <= '0;
      r_have_previous   <= 1'b0;
      r_edge_id         <= '0;
      r_error_code      <= '0;
    end else begin
      if (w_start_fire) begin
        r_ctu_id        <= I_CTU_ID;
        r_bank          <= I_CTU_BANK;
        r_direction     <= I_DIRECTION;
        r_component_id  <= I_COMPONENT_ID;
        r_valid_width   <= I_CTU_VALID_WIDTH;
        r_valid_height  <= I_CTU_VALID_HEIGHT;
        r_major_limit   <= I_DIRECTION ? w_valid_width_cells : w_valid_height_cells;
        r_minor_limit   <= I_DIRECTION ? w_valid_height_cells : w_valid_width_cells;
        r_scan_major    <= 6'd0;
        r_scan_minor    <= 6'd0;
        r_have_previous <= 1'b0;
        r_edge_id       <= 12'd0;
        r_error_code    <= w_invalid_start ? 3'd1 : 3'd0;
      end else begin
        if (r_current_state == ST_READ_WAIT &&
            I_RD_RESP_VALID && !I_RD_ENTRY_VALID)
          r_error_code <= 3'd2;

        if ((r_current_state == ST_EVALUATE) && !w_geometry_valid)
          r_error_code <= 3'd3;

        if ((r_current_state == ST_EVALUATE) &&
            w_geometry_valid && !w_emit_candidate) begin
          r_have_previous <= 1'b1;
          if (w_end_of_minor) begin
            r_have_previous <= 1'b0;
            r_scan_minor    <= 6'd0;
            if (!w_last_major)
              r_scan_major <= r_scan_major + 6'd1;
          end else begin
            r_scan_minor <= w_meta_next_minor;
          end
        end

        if ((r_current_state == ST_EMIT) && w_edge_fire) begin
          r_edge_id <= r_edge_id + 12'd1;
          if (w_end_of_minor) begin
            r_have_previous <= 1'b0;
            r_scan_minor    <= 6'd0;
            if (!w_last_major)
              r_scan_major <= r_scan_major + 6'd1;
          end else begin
            r_scan_minor <= w_meta_next_minor;
          end
        end
      end
    end
  end

  // Metadata datapath registers intentionally have no reset. Their contents
  // can only be observed while r_have_previous and ST_EMIT are both valid.
  always_ff @(posedge I_CLK) begin
    if ((r_current_state == ST_READ_WAIT) && I_RD_RESP_VALID &&
        I_RD_ENTRY_VALID)
      r_metadata_current <= I_RD_DATA;

    if ((r_current_state == ST_EVALUATE) &&
        w_geometry_valid && !w_emit_candidate)
      r_metadata_previous <= r_metadata_current;
    else if ((r_current_state == ST_EMIT) && w_edge_fire)
      r_metadata_previous <= r_metadata_current;
  end

endmodule: DBF_EDGE_SCHEDULER
