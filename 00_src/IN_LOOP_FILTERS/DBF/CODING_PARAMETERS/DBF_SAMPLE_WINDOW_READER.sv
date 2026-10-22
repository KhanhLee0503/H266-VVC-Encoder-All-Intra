//------------------------------------------------------------------------------
// Module      : DBF_SAMPLE_WINDOW_READER
// Description : Full-window-or-bypass sample fetcher for DBF Y/Cb/Cr edges.
//
// - All-Intra 4:2:0 baseline, one qualified edge in flight.
// - Y: 4 lanes x 16 taps; Cb/Cr: 2 lanes x 16 taps, lanes 2/3 zero.
// - Full-window-or-bypass is implemented ONLY in this module.
// - No SHF, padding, partial-window processing, or CTU-neighbor reads.
// - Vertical reads IN_LOOP_INPUT_BUFFER (original reconstructed samples).
// - Horizontal reads a logical row-major Intermediate Buffer interface;
//   its adapter must expose the same address/response format as the input.
// - One 64-bit read may be issued per clock, with fixed 1-clock latency;
//   responses cannot be backpressured and are checked by tag/address/mask.
// - Output completion uses ready/valid for both filtered and bypassed edges.
// - 16-bit containers, 4 samples per memory word.
// - Row-major memory strides: Y=32 words/row, Cb/Cr=16 words/row.
// - O_WINDOW_DATA[(lane*16+tap)*16 +: 16], tap order P7..P0,Q0..Q7.
// - Only sample storage is updated in the datapath process (no async reset).
//------------------------------------------------------------------------------
module DBF_SAMPLE_WINDOW_READER (
  input                I_CLK,
  input                I_RST_N,

  // Qualified edge from DBF_CODING_PARAMETER_GENERATOR.
  input                I_EDGE_VALID,
  output logic         O_EDGE_READY,
  input         [11:0] I_EDGE_ID,
  input          [8:0] I_EDGE_CTU_ID,
  input                I_EDGE_BANK,
  input          [1:0] I_EDGE_COMPONENT_ID,
  input                I_EDGE_DIRECTION,    // 0=vertical; 1=horizontal
  input          [7:0] I_EDGE_X,
  input          [7:0] I_EDGE_Y,
  input          [3:0] I_EDGE_LANE_MASK,
  input          [1:0] I_EDGE_BS,
  input          [2:0] I_EDGE_SP,
  input          [2:0] I_EDGE_SQ,
  input          [5:0] I_EDGE_QP_P,
  input          [5:0] I_EDGE_QP_Q,
  input          [7:0] I_CTU_VALID_WIDTH,  // luma samples, <= 128
  input          [7:0] I_CTU_VALID_HEIGHT, // luma samples, <= 128

  // Direct connection to IN_LOOP_INPUT_BUFFER's FILTER_RD port.
  output logic         O_INPUT_RD_EN,
  output logic   [1:0] O_INPUT_RD_COMPONENT_ID,
  output logic  [11:0] O_INPUT_RD_ADDR,
  input                I_INPUT_RD_VALID,
  input         [63:0] I_INPUT_RD_DATA,
  input          [3:0] I_INPUT_RD_SAMPLE_EN,
  input          [1:0] I_INPUT_RD_COMPONENT_ID,
  input         [11:0] I_INPUT_RD_ADDR,

  // Logical 64-bit row-major read adapter to post-vertical samples.
  output logic         O_INTER_RD_EN,
  output logic   [1:0] O_INTER_RD_COMPONENT_ID,
  output logic  [11:0] O_INTER_RD_ADDR,
  input                I_INTER_RD_VALID,
  input         [63:0] I_INTER_RD_DATA,
  input          [3:0] I_INTER_RD_SAMPLE_EN,
  input          [1:0] I_INTER_RD_COMPONENT_ID,
  input         [11:0] I_INTER_RD_ADDR,

  // Completed edge. BYPASS=1 means no RAM reads and no filtering.
  output logic         O_RESULT_VALID,
  input                I_RESULT_READY,
  output logic         O_RESULT_BYPASS,
  output logic [1023:0] O_WINDOW_DATA,
  output logic  [11:0] O_RESULT_EDGE_ID,
  output logic   [8:0] O_RESULT_CTU_ID,
  output logic         O_RESULT_BANK,
  output logic   [1:0] O_RESULT_COMPONENT_ID,
  output logic         O_RESULT_DIRECTION,
  output logic   [7:0] O_RESULT_X,
  output logic   [7:0] O_RESULT_Y,
  output logic   [3:0] O_RESULT_LANE_MASK,
  output logic   [1:0] O_RESULT_BS,
  output logic   [2:0] O_RESULT_SP,
  output logic   [2:0] O_RESULT_SQ,
  output logic   [5:0] O_RESULT_QP_P,
  output logic   [5:0] O_RESULT_QP_Q,

  output logic         O_BUSY,
  output logic         O_ERROR_VALID,
  output logic   [2:0] O_ERROR_CODE
);

  localparam logic [1:0] PARA_COMP_Y  = 2'd0;
  localparam logic [1:0] PARA_COMP_CB = 2'd1;
  localparam logic [1:0] PARA_COMP_CR = 2'd2;

  localparam logic [2:0] PARA_ERR_NONE       = 3'd0;
  localparam logic [2:0] PARA_ERR_DESCRIPTOR = 3'd1;
  localparam logic [2:0] PARA_ERR_RD_TAG     = 3'd2;
  localparam logic [2:0] PARA_ERR_RD_MASK    = 3'd3;

  typedef enum logic [2:0] {
    ST_IDLE   = 3'd0,
    ST_CHECK  = 3'd1,
    ST_READ   = 3'd2,
    ST_DRAIN  = 3'd3,
    ST_OUTPUT = 3'd4,
    ST_ERROR  = 3'd5
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic [11:0] r_edge_id;
  logic  [8:0] r_ctu_id;
  logic        r_bank;
  logic  [1:0] r_component_id;
  logic        r_direction;
  logic  [7:0] r_x;
  logic  [7:0] r_y;
  logic  [3:0] r_lane_mask;
  logic  [1:0] r_bs;
  logic  [2:0] r_sp;
  logic  [2:0] r_sq;
  logic  [5:0] r_qp_p;
  logic  [5:0] r_qp_q;
  logic  [7:0] r_valid_width;
  logic  [7:0] r_valid_height;

  logic        r_bypass;
  logic  [2:0] r_error_code;
  logic  [4:0] r_req_count;
  logic  [4:0] r_rsp_count;
  logic [1023:0] r_window_data;

  logic        w_is_chroma;
  logic  [8:0] w_plane_width;
  logic  [8:0] w_plane_height;
  logic  [8:0] w_seg_length;
  logic        w_descriptor_legal;
  logic        w_window_valid;
  logic  [4:0] w_total_reads;

  logic        w_edge_fire;
  logic        w_issue_read;
  logic        w_receive_read;
  logic        w_response_error;
  logic        w_response_tag_error;
  logic        w_response_mask_error;
  logic [63:0] w_response_data;
  logic  [3:0] w_response_mask;
  logic  [1:0] w_response_component;
  logic [11:0] w_response_addr;
  logic        w_response_valid;
  logic  [3:0] w_expected_sample_mask;

  logic  [8:0] w_req_pixel_x;
  logic  [8:0] w_req_pixel_y;
  logic  [8:0] w_rsp_pixel_x;
  logic  [8:0] w_rsp_pixel_y;
  logic [11:0] w_req_address;
  logic [11:0] w_rsp_address;
  logic [11:0] w_req_row_offset;
  logic [11:0] w_rsp_row_offset;

  //-------------------------------------------------------------------------
  // Component geometry, supported descriptor rules, and full-window test.
  //-------------------------------------------------------------------------
  assign w_is_chroma = (r_component_id != PARA_COMP_Y);
  assign w_plane_width = w_is_chroma ?
                         (({1'b0, r_valid_width}  + 9'd1) >> 1) :
                         {1'b0, r_valid_width};
  assign w_plane_height = w_is_chroma ?
                          (({1'b0, r_valid_height} + 9'd1) >> 1) :
                          {1'b0, r_valid_height};
  assign w_seg_length = w_is_chroma ? 9'd2 : 9'd4;

  assign w_descriptor_legal =
      (r_component_id != 2'd3) &&
      (r_lane_mask == (w_is_chroma ? 4'b0011 : 4'b1111)) &&
      (r_valid_width  >= 8'd1) && (r_valid_width  <= 8'd128) &&
      (r_valid_height >= 8'd1) && (r_valid_height <= 8'd128) &&
      ((!r_direction && (r_x[1:0] == 2'b00)) ||
       ( r_direction &&
         ((w_is_chroma && (r_x[0] == 1'b0)) ||
          (!w_is_chroma && (r_x[1:0] == 2'b00)))));

  assign w_window_valid = !r_direction ?
      (({1'b0, r_x} >= 9'd8) &&
       (({1'b0, r_x} + 9'd8) <= w_plane_width) &&
       (({1'b0, r_y} + w_seg_length) <= w_plane_height)) :
      (({1'b0, r_y} >= 9'd8) &&
       (({1'b0, r_y} + 9'd8) <= w_plane_height) &&
       (({1'b0, r_x} + w_seg_length) <= w_plane_width));

  assign w_total_reads = r_direction ? 5'd16 :
                          (w_is_chroma ? 5'd8 : 5'd16);

  //-------------------------------------------------------------------------
  // Address generation (word-aligned windows; no overscan / no padding).
  // Req/Rsp are computed independently so consecutive reads are supported.
  //-------------------------------------------------------------------------
  always_comb begin
    w_req_pixel_x = '0;
    w_req_pixel_y = '0;
    w_rsp_pixel_x = '0;
    w_rsp_pixel_y = '0;

    if (!r_direction) begin
      w_req_pixel_x = {1'b0, r_x} - 9'd8 +
                      {5'd0, r_req_count[1:0], 2'b00};
      w_req_pixel_y = {1'b0, r_y} + {6'd0, r_req_count[4:2]};
      w_rsp_pixel_x = {1'b0, r_x} - 9'd8 +
                      {5'd0, r_rsp_count[1:0], 2'b00};
      w_rsp_pixel_y = {1'b0, r_y} + {6'd0, r_rsp_count[4:2]};
    end else begin
      w_req_pixel_x = {1'b0, r_x};
      w_req_pixel_y = {1'b0, r_y} - 9'd8 + {4'd0, r_req_count};
      w_rsp_pixel_x = {1'b0, r_x};
      w_rsp_pixel_y = {1'b0, r_y} - 9'd8 + {4'd0, r_rsp_count};
    end

    w_req_row_offset = w_is_chroma ?
                       {w_req_pixel_y[7:0], 4'b0000} :
                       {w_req_pixel_y[6:0], 5'b00000};
    w_rsp_row_offset = w_is_chroma ?
                       {w_rsp_pixel_y[7:0], 4'b0000} :
                       {w_rsp_pixel_y[6:0], 5'b00000};
    w_req_address = w_req_row_offset + {6'b0, w_req_pixel_x[7:2]};
    w_rsp_address = w_rsp_row_offset + {6'b0, w_rsp_pixel_x[7:2]};
  end

  //-------------------------------------------------------------------------
  // Response selection: fixed 1-clock response after request, no backpressure.
  //-------------------------------------------------------------------------
  always_comb begin
    w_response_valid     = I_INPUT_RD_VALID;
    w_response_data      = I_INPUT_RD_DATA;
    w_response_mask      = I_INPUT_RD_SAMPLE_EN;
    w_response_component = I_INPUT_RD_COMPONENT_ID;
    w_response_addr      = I_INPUT_RD_ADDR;
    if (r_direction) begin
      w_response_valid     = I_INTER_RD_VALID;
      w_response_data      = I_INTER_RD_DATA;
      w_response_mask      = I_INTER_RD_SAMPLE_EN;
      w_response_component = I_INTER_RD_COMPONENT_ID;
      w_response_addr      = I_INTER_RD_ADDR;
    end
  end

  always_comb begin
    w_expected_sample_mask = 4'b1111;
    if (r_direction && w_is_chroma)
      w_expected_sample_mask = 4'b0011 << r_x[1:0];
  end

  assign w_edge_fire = I_EDGE_VALID && O_EDGE_READY;
  assign w_issue_read = (r_current_state == ST_READ) &&
                        (r_req_count < w_total_reads);
  assign w_receive_read = ((r_current_state == ST_READ) ||
                           (r_current_state == ST_DRAIN)) &&
                          w_response_valid;
  assign w_response_tag_error = w_receive_read &&
        ((r_rsp_count >= w_total_reads) ||
         (w_response_component != r_component_id) ||
         (w_response_addr != w_rsp_address));
  assign w_response_mask_error = w_receive_read &&
        ((w_response_mask & w_expected_sample_mask) !=
         w_expected_sample_mask);
  assign w_response_error = w_response_tag_error || w_response_mask_error;

  //-------------------------------------------------------------------------
  // Process 1: FSM state register.
  //-------------------------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  //-------------------------------------------------------------------------
  // Process 2: FSM next-state logic only.
  //-------------------------------------------------------------------------
  always_comb begin
    w_next_state = r_current_state;
    unique casez (r_current_state)
      ST_IDLE: begin
        if (w_edge_fire)
          w_next_state = ST_CHECK;
      end
      ST_CHECK: begin
        if (!w_descriptor_legal)
          w_next_state = ST_ERROR;
        else if (!w_window_valid)
          w_next_state = ST_OUTPUT;
        else
          w_next_state = ST_READ;
      end
      ST_READ: begin
        if (w_response_error)
          w_next_state = ST_ERROR;
        else if (r_req_count == (w_total_reads - 5'd1))
          w_next_state = ST_DRAIN;
      end
      ST_DRAIN: begin
        if (w_response_error)
          w_next_state = ST_ERROR;
        else if (r_rsp_count == w_total_reads)
          w_next_state = ST_OUTPUT;
      end
      ST_OUTPUT: begin
        if (I_RESULT_READY)
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

  //-------------------------------------------------------------------------
  // Process 3: FSM output decode. Output payload uses holding registers.
  //-------------------------------------------------------------------------
  always_comb begin
    O_EDGE_READY           = 1'b0;
    O_INPUT_RD_EN          = 1'b0;
    O_INTER_RD_EN          = 1'b0;
    O_RESULT_VALID         = 1'b0;
    unique casez (r_current_state)
      ST_IDLE: begin
        O_EDGE_READY = 1'b1;
      end
      ST_READ: begin
        O_INPUT_RD_EN = w_issue_read && !r_direction;
        O_INTER_RD_EN = w_issue_read && r_direction;
      end
      ST_OUTPUT: begin
        O_RESULT_VALID = 1'b1;
      end
      default: begin
      end
    endcase
  end

  // Request buses are stable with the associated RD_EN.
  assign O_INPUT_RD_COMPONENT_ID = r_component_id;
  assign O_INTER_RD_COMPONENT_ID = r_component_id;
  assign O_INPUT_RD_ADDR         = w_req_address;
  assign O_INTER_RD_ADDR         = w_req_address;

  //-------------------------------------------------------------------------
  // Context, request/response counters, bypass and sticky errors.
  //-------------------------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_edge_id      <= '0;
      r_ctu_id       <= '0;
      r_bank         <= 1'b0;
      r_component_id <= '0;
      r_direction    <= 1'b0;
      r_x            <= '0;
      r_y            <= '0;
      r_lane_mask    <= '0;
      r_bs           <= '0;
      r_sp           <= '0;
      r_sq           <= '0;
      r_qp_p         <= '0;
      r_qp_q         <= '0;
      r_valid_width  <= '0;
      r_valid_height <= '0;
      r_req_count    <= '0;
      r_rsp_count    <= '0;
      r_bypass       <= 1'b0;
      r_error_code   <= PARA_ERR_NONE;
    end else begin
      if (w_edge_fire) begin
        r_edge_id      <= I_EDGE_ID;
        r_ctu_id       <= I_EDGE_CTU_ID;
        r_bank         <= I_EDGE_BANK;
        r_component_id <= I_EDGE_COMPONENT_ID;
        r_direction    <= I_EDGE_DIRECTION;
        r_x            <= I_EDGE_X;
        r_y            <= I_EDGE_Y;
        r_lane_mask    <= I_EDGE_LANE_MASK;
        r_bs           <= I_EDGE_BS;
        r_sp           <= I_EDGE_SP;
        r_sq           <= I_EDGE_SQ;
        r_qp_p         <= I_EDGE_QP_P;
        r_qp_q         <= I_EDGE_QP_Q;
        r_valid_width  <= I_CTU_VALID_WIDTH;
        r_valid_height <= I_CTU_VALID_HEIGHT;
        r_req_count    <= '0;
        r_rsp_count    <= '0;
        r_bypass       <= 1'b0;
      end else begin
        if (r_current_state == ST_CHECK &&
            w_descriptor_legal && !w_window_valid)
          r_bypass <= 1'b1;
        if (w_issue_read)
          r_req_count <= r_req_count + 5'd1;
        if (w_receive_read && !w_response_error)
          r_rsp_count <= r_rsp_count + 5'd1;
      end

      if (r_current_state == ST_CHECK && !w_descriptor_legal)
        r_error_code <= PARA_ERR_DESCRIPTOR;
      else if (w_response_tag_error)
        r_error_code <= PARA_ERR_RD_TAG;
      else if (w_response_mask_error)
        r_error_code <= PARA_ERR_RD_MASK;
    end
  end

  // 1024-bit sample register intentionally has no asynchronous reset.
  // Clear it once per descriptor. One 64-bit response writes 4 tap samples
  // for a vertical edge, or 4/2 lane samples for a horizontal edge.
  always_ff @(posedge I_CLK) begin
    if (w_edge_fire)
      r_window_data <= '0;
    else if (w_receive_read && !w_response_error) begin
      if (!r_direction) begin
        r_window_data[(r_rsp_count * 64) +: 64] <= w_response_data;
      end else begin
        for (integer lane = 0; lane < 4; lane = lane + 1) begin
          if (!w_is_chroma || (lane < 2)) begin
            r_window_data[((lane * 16 + r_rsp_count) * 16) +: 16] <=
              w_response_data[((r_x[1:0] + lane) * 16) +: 16];
          end
        end
      end
    end
  end

  assign O_RESULT_BYPASS       = r_bypass;
  assign O_WINDOW_DATA         = r_window_data;
  assign O_RESULT_EDGE_ID      = r_edge_id;
  assign O_RESULT_CTU_ID       = r_ctu_id;
  assign O_RESULT_BANK         = r_bank;
  assign O_RESULT_COMPONENT_ID = r_component_id;
  assign O_RESULT_DIRECTION    = r_direction;
  assign O_RESULT_X            = r_x;
  assign O_RESULT_Y            = r_y;
  assign O_RESULT_LANE_MASK    = r_lane_mask;
  assign O_RESULT_BS           = r_bs;
  assign O_RESULT_SP           = r_sp;
  assign O_RESULT_SQ           = r_sq;
  assign O_RESULT_QP_P         = r_qp_p;
  assign O_RESULT_QP_Q         = r_qp_q;
  assign O_BUSY                = (r_current_state != ST_IDLE);
  assign O_ERROR_VALID         = (r_current_state == ST_ERROR);
  assign O_ERROR_CODE          = r_error_code;

endmodule: DBF_SAMPLE_WINDOW_READER
