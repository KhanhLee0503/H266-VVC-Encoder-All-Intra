//------------------------------------------------------------------------------
// Module      : DBF_FILTER_CONTROLLER
// Description : CTU-level control for the VVC All-Intra DBF Option-A memory
//               architecture.  A single edge is in flight at any time.
//
// Sequence:
//   1. Wait for original CTU initialization to complete.
//   2. Start the existing six-pass Coding Parameter Generator (CPG).
//   3. Process all Y/Cb/Cr vertical descriptors, one at a time.
//   4. Hold the FIRST horizontal descriptor at the CPG ready/valid interface
//      (or detect scan completion if there are no horizontal descriptors).
//   5. Start sequential 64-bit Intermediate-to-Output Buffer copy.
//   6. Resume and process horizontal descriptors, one at a time.
//   7. Acknowledge CPG SCAN_DONE, release metadata bank, offer the complete
//      output CTU to SAO, and retain its buffer until SAO releases it.
//
// CPG SCAN_DONE is not FILTER_DONE. The Writer's DONE handshake is the end of
// an edge. Neither window-reader, filter-core, writer, RAM, metadata-collector,
// nor copy datapaths are instantiated here; DBF_TOP connects their handshakes.
// Reset is required to recover from a fatal controller error.
//
// CPG contract: the six passes are ordered Y/Cb/Cr vertical, followed by
// Y/Cb/Cr horizontal; each descriptor remains stable under backpressure.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module DBF_FILTER_CONTROLLER (
  input                I_CLK,
  input                I_RST_N,

  // One-CTU command. The CPG metadata bank must already be allocated; CPG
  // itself waits for collection completion before asserting SCAN_START_READY.
  input                I_START_VALID,
  output logic         O_START_READY,
  input          [8:0] I_START_CTU_ID,
  input                I_START_BANK,
  input          [7:0] I_START_VALID_WIDTH,
  input          [7:0] I_START_VALID_HEIGHT,

  // External CTU initialization owner. INIT_DONE may only be asserted after
  // all required original/Intermediate samples have been written and committed.
  output logic         O_INIT_ACTIVE,
  input                I_INIT_DONE,
  input                I_INIT_ERROR,

  // CPG scan command and SCAN_DONE handshake.
  output logic         O_SCAN_START_VALID,
  input                I_SCAN_START_READY,
  output logic         O_SCAN_START_BANK,
  output logic   [8:0] O_SCAN_START_CTU_ID,
  input                I_PARAM_VALID,
  output logic         O_PARAM_READY,
  input         [11:0] I_PARAM_EDGE_ID,
  input          [8:0] I_PARAM_CTU_ID,
  input                I_PARAM_BANK,
  input          [1:0] I_PARAM_COMPONENT_ID,
  input                I_PARAM_DIRECTION,
  input                I_SCAN_DONE_VALID,
  output logic         O_SCAN_DONE_READY,
  input          [8:0] I_SCAN_DONE_CTU_ID,
  input                I_SCAN_DONE_BANK,
  input                I_CPG_ERROR_VALID,

  // Gated edge launch into DBF_SAMPLE_WINDOW_READER. All descriptor payload
  // fields other than VALID/READY are wired directly from CPG in DBF_TOP.
  output logic         O_READER_EDGE_VALID,
  input                I_READER_EDGE_READY,
  input                I_READER_ERROR_VALID,

  // Edge completion from DBF_OUTPUT_WRITER, including no-op/bypass edges.
  input                I_WR_DONE_VALID,
  output logic         O_WR_DONE_READY,
  input         [11:0] I_WR_DONE_EDGE_ID,
  input          [8:0] I_WR_DONE_CTU_ID,
  input                I_WR_DONE_BANK,
  input          [1:0] I_WR_DONE_COMPONENT_ID,
  input                I_WR_DONE_DIRECTION,
  input                I_WR_DONE_ERROR,

  // Sequential-copy engine: one-cycle START; held DONE ready/valid.
  output logic         O_COPY_START,
  input                I_COPY_BUSY,
  input                I_COPY_DONE_VALID,
  output logic         O_COPY_DONE_READY,
  input                I_COPY_ERROR,
  output logic   [7:0] O_COPY_VALID_WIDTH,
  output logic   [7:0] O_COPY_VALID_HEIGHT,
  output logic         O_INTER_COPY_OWNER,
  output logic         O_INTER_INIT_MODE,

  // Explicit metadata bank release after CPG scan completion.
  output logic         O_BANK_RELEASE_VALID,
  input                I_BANK_RELEASE_READY,
  output logic         O_BANK_RELEASE_BANK,
  output logic   [8:0] O_BANK_RELEASE_CTU_ID,

  // SAO gains read ownership only after horizontal writeback completes.
  output logic         O_SAO_CTU_VALID,
  input                I_SAO_CTU_READY,
  output logic         O_SAO_READ_ENABLE,
  output logic   [8:0] O_SAO_CTU_ID,
  output logic         O_SAO_BANK,
  input                I_SAO_RELEASE_VALID,
  output logic         O_SAO_RELEASE_READY,
  input          [8:0] I_SAO_RELEASE_CTU_ID,
  input                I_SAO_RELEASE_BANK,

  // Stable current CTU geometry for Reader and Writer.
  output logic   [7:0] O_CTU_VALID_WIDTH,
  output logic   [7:0] O_CTU_VALID_HEIGHT,
  output logic   [8:0] O_CTU_ID,
  output logic         O_CTU_BANK,
  output logic         O_BUSY,
  output logic   [2:0] O_PHASE,
  output logic         O_ERROR_VALID,
  output logic   [3:0] O_ERROR_CODE
);
  localparam logic [3:0] PARA_ERR_NONE        = 4'd0;
  localparam logic [3:0] PARA_ERR_GEOMETRY    = 4'd1;
  localparam logic [3:0] PARA_ERR_INIT        = 4'd2;
  localparam logic [3:0] PARA_ERR_CPG         = 4'd3;
  localparam logic [3:0] PARA_ERR_READER      = 4'd4;
  localparam logic [3:0] PARA_ERR_WRITE       = 4'd5;
  localparam logic [3:0] PARA_ERR_WRITE_TAG   = 4'd6;
  localparam logic [3:0] PARA_ERR_COPY        = 4'd7;
  localparam logic [3:0] PARA_ERR_SCAN_TAG    = 4'd8;
  localparam logic [3:0] PARA_ERR_PARAM_TAG   = 4'd9;
  localparam logic [3:0] PARA_ERR_DIRECTION   = 4'd10;
  localparam logic [3:0] PARA_ERR_SAO_RELEASE = 4'd11;
  localparam logic [3:0] PARA_ERR_UNEXPECTED  = 4'd12;

  localparam logic [2:0] PARA_PHASE_IDLE       = 3'd0;
  localparam logic [2:0] PARA_PHASE_INIT       = 3'd1;
  localparam logic [2:0] PARA_PHASE_VERTICAL   = 3'd2;
  localparam logic [2:0] PARA_PHASE_COPY       = 3'd3;
  localparam logic [2:0] PARA_PHASE_HORIZONTAL = 3'd4;
  localparam logic [2:0] PARA_PHASE_SAO        = 3'd5;
  localparam logic [2:0] PARA_PHASE_ERROR      = 3'd7;

  typedef enum logic [3:0] {
    ST_IDLE         = 4'd0,
    ST_INIT         = 4'd1,
    ST_SCAN_REQ     = 4'd2,
    ST_VERTICAL     = 4'd3,
    ST_COPY_START   = 4'd4,
    ST_COPY_WAIT    = 4'd5,
    ST_HORIZONTAL   = 4'd6,
    ST_SCAN_ACK     = 4'd7,
    ST_BANK_RELEASE = 4'd8,
    ST_SAO_OFFER    = 4'd9,
    ST_SAO_HOLD     = 4'd10,
    ST_ERROR        = 4'd11
  } state_t;

  state_t r_current_state;
  state_t w_next_state;

  logic  [8:0] r_ctu_id;
  logic        r_bank;
  logic  [7:0] r_valid_width;
  logic  [7:0] r_valid_height;
  logic        r_edge_pending;
  logic [11:0] r_edge_id;
  logic  [1:0] r_edge_component;
  logic        r_edge_direction;
  logic  [3:0] r_error_code;

  logic        w_start_fire;
  logic        w_param_fire;
  logic        w_write_done_fire;
  logic        w_copy_done_fire;
  logic        w_scan_done_fire;
  logic        w_sao_release_fire;
  logic        w_param_tag_bad;
  logic        w_write_tag_bad;
  logic        w_scan_tag_bad;
  logic        w_sao_tag_bad;
  logic        w_wrong_direction;
  logic        w_unexpected_completion;
  logic        w_geometry_bad;
  logic        w_fatal;
  logic  [3:0] w_fatal_code;
  logic        w_accept_vertical;
  logic        w_accept_horizontal;

  assign w_geometry_bad = (I_START_VALID_WIDTH == 8'd0) ||
                          (I_START_VALID_HEIGHT == 8'd0) ||
                          (I_START_VALID_WIDTH > 8'd128) ||
                          (I_START_VALID_HEIGHT > 8'd128);

  assign w_start_fire = I_START_VALID && O_START_READY;

  assign w_param_tag_bad = I_PARAM_VALID &&
                           ((r_ctu_id != I_PARAM_CTU_ID) ||
                            (r_bank != I_PARAM_BANK) ||
                            (I_PARAM_COMPONENT_ID > 2'd2));
  assign w_write_tag_bad = I_WR_DONE_VALID && r_edge_pending &&
                           ((I_WR_DONE_CTU_ID != r_ctu_id) ||
                            (I_WR_DONE_BANK != r_bank) ||
                            (I_WR_DONE_EDGE_ID != r_edge_id) ||
                            (I_WR_DONE_COMPONENT_ID != r_edge_component) ||
                            (I_WR_DONE_DIRECTION != r_edge_direction));
  assign w_scan_tag_bad = I_SCAN_DONE_VALID &&
                          ((I_SCAN_DONE_CTU_ID != r_ctu_id) ||
                           (I_SCAN_DONE_BANK != r_bank));
  assign w_sao_tag_bad = I_SAO_RELEASE_VALID &&
                         ((I_SAO_RELEASE_CTU_ID != r_ctu_id) ||
                          (I_SAO_RELEASE_BANK != r_bank));

  assign w_accept_vertical = (r_current_state == ST_VERTICAL) &&
                             !r_edge_pending && !I_PARAM_DIRECTION;
  assign w_accept_horizontal = (r_current_state == ST_HORIZONTAL) &&
                               !r_edge_pending && I_PARAM_DIRECTION;
  assign w_wrong_direction = (r_current_state == ST_HORIZONTAL) &&
                             !r_edge_pending && I_PARAM_VALID &&
                             !I_PARAM_DIRECTION;

  assign w_unexpected_completion = I_WR_DONE_VALID && !r_edge_pending &&
                                   (r_current_state != ST_IDLE);

  // Error priority is fixed. No partially written CTU is published to SAO.
  always_comb begin
    w_fatal = 1'b0;
    w_fatal_code = PARA_ERR_NONE;
    if (r_current_state == ST_IDLE) begin
      if (w_start_fire && w_geometry_bad) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_GEOMETRY;
      end
    end else if (r_current_state != ST_ERROR) begin
      if (I_CPG_ERROR_VALID) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_CPG;
      end else if (I_READER_ERROR_VALID) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_READER;
      end else if ((r_current_state == ST_INIT) && I_INIT_ERROR) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_INIT;
      end else if (w_unexpected_completion) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_UNEXPECTED;
      end else if (w_write_tag_bad) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_WRITE_TAG;
      end else if (r_edge_pending && I_WR_DONE_VALID && I_WR_DONE_ERROR) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_WRITE;
      end else if (((r_current_state == ST_VERTICAL) ||
                    (r_current_state == ST_HORIZONTAL)) &&
                   I_PARAM_VALID && !r_edge_pending && w_param_tag_bad) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_PARAM_TAG;
      end else if (w_wrong_direction) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_DIRECTION;
      end else if ((r_current_state == ST_COPY_WAIT) &&
                   I_COPY_DONE_VALID && I_COPY_ERROR) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_COPY;
      end else if (((r_current_state == ST_VERTICAL) ||
                    (r_current_state == ST_HORIZONTAL) ||
                    (r_current_state == ST_SCAN_ACK)) &&
                   I_SCAN_DONE_VALID && w_scan_tag_bad) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_SCAN_TAG;
      end else if ((r_current_state == ST_SAO_HOLD) && w_sao_tag_bad) begin
        w_fatal = 1'b1;
        w_fatal_code = PARA_ERR_SAO_RELEASE;
      end
    end
  end

  // FSM process 1: state register.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_current_state <= ST_IDLE;
    else
      r_current_state <= w_next_state;
  end

  // FSM process 2: next-state logic.
  always_comb begin
    w_next_state = r_current_state;
    if (w_fatal) begin
      w_next_state = ST_ERROR;
    end else begin
      unique casez (r_current_state)
        ST_IDLE: begin
          if (w_start_fire)
            w_next_state = ST_INIT;
        end
        ST_INIT: begin
          if (I_INIT_DONE)
            w_next_state = ST_SCAN_REQ;
        end
        ST_SCAN_REQ: begin
          if (O_SCAN_START_VALID && I_SCAN_START_READY)
            w_next_state = ST_VERTICAL;
        end
        ST_VERTICAL: begin
          // CPG must finish all vertical passes before presenting a
          // horizontal descriptor. Hold it during the intervening copy.
          if (!r_edge_pending &&
              ((I_PARAM_VALID && I_PARAM_DIRECTION) ||
               I_SCAN_DONE_VALID))
            w_next_state = ST_COPY_START;
        end
        ST_COPY_START: begin
          if (!I_COPY_BUSY)
            w_next_state = ST_COPY_WAIT;
        end
        ST_COPY_WAIT: begin
          if (w_copy_done_fire)
            w_next_state = ST_HORIZONTAL;
        end
        ST_HORIZONTAL: begin
          if (!r_edge_pending && I_SCAN_DONE_VALID)
            w_next_state = ST_SCAN_ACK;
        end
        ST_SCAN_ACK: begin
          if (w_scan_done_fire)
            w_next_state = ST_BANK_RELEASE;
        end
        ST_BANK_RELEASE: begin
          if (O_BANK_RELEASE_VALID && I_BANK_RELEASE_READY)
            w_next_state = ST_SAO_OFFER;
        end
        ST_SAO_OFFER: begin
          if (O_SAO_CTU_VALID && I_SAO_CTU_READY)
            w_next_state = ST_SAO_HOLD;
        end
        ST_SAO_HOLD: begin
          if (w_sao_release_fire)
            w_next_state = ST_IDLE;
        end
        ST_ERROR: begin
          w_next_state = ST_ERROR;
        end
        default: begin
          w_next_state = ST_ERROR;
        end
      endcase
    end
  end

  // FSM process 3: control outputs and ownership of the two sample buffers.
  always_comb begin
    O_START_READY         = 1'b0;
    O_INIT_ACTIVE         = 1'b0;
    O_INTER_INIT_MODE     = 1'b0;
    O_SCAN_START_VALID    = 1'b0;
    O_PARAM_READY         = 1'b0;
    O_READER_EDGE_VALID   = 1'b0;
    O_WR_DONE_READY       = 1'b0;
    O_COPY_START          = 1'b0;
    O_COPY_DONE_READY     = 1'b0;
    O_INTER_COPY_OWNER    = 1'b0;
    O_SCAN_DONE_READY     = 1'b0;
    O_BANK_RELEASE_VALID  = 1'b0;
    O_SAO_CTU_VALID       = 1'b0;
    O_SAO_READ_ENABLE     = 1'b0;
    O_SAO_RELEASE_READY   = 1'b0;
    O_PHASE               = PARA_PHASE_IDLE;

    unique casez (r_current_state)
      ST_IDLE: begin
        O_START_READY = I_RST_N;
      end
      ST_INIT: begin
        O_INIT_ACTIVE = 1'b1;
        O_INTER_INIT_MODE = 1'b1;
        O_PHASE = PARA_PHASE_INIT;
      end
      ST_SCAN_REQ: begin
        O_SCAN_START_VALID = !w_fatal;
        O_PHASE = PARA_PHASE_VERTICAL;
      end
      ST_VERTICAL: begin
        O_PHASE = PARA_PHASE_VERTICAL;
        O_WR_DONE_READY = r_edge_pending;
        if (!r_edge_pending && !w_fatal && w_accept_vertical) begin
          O_PARAM_READY = I_READER_EDGE_READY;
          O_READER_EDGE_VALID = I_PARAM_VALID;
        end
      end
      ST_COPY_START: begin
        O_PHASE = PARA_PHASE_COPY;
        O_INTER_COPY_OWNER = 1'b1;
        O_COPY_START = !I_COPY_BUSY && !w_fatal;
      end
      ST_COPY_WAIT: begin
        O_PHASE = PARA_PHASE_COPY;
        O_INTER_COPY_OWNER = 1'b1;
        O_COPY_DONE_READY = 1'b1;
      end
      ST_HORIZONTAL: begin
        O_PHASE = PARA_PHASE_HORIZONTAL;
        O_WR_DONE_READY = r_edge_pending;
        if (!r_edge_pending && !w_fatal && w_accept_horizontal) begin
          O_PARAM_READY = I_READER_EDGE_READY;
          O_READER_EDGE_VALID = I_PARAM_VALID;
        end
      end
      ST_SCAN_ACK: begin
        O_PHASE = PARA_PHASE_HORIZONTAL;
        O_SCAN_DONE_READY = !w_fatal;
      end
      ST_BANK_RELEASE: begin
        O_PHASE = PARA_PHASE_HORIZONTAL;
        O_BANK_RELEASE_VALID = !w_fatal;
      end
      ST_SAO_OFFER: begin
        O_PHASE = PARA_PHASE_SAO;
        O_SAO_CTU_VALID = !w_fatal;
        O_SAO_READ_ENABLE = !w_fatal;
      end
      ST_SAO_HOLD: begin
        O_PHASE = PARA_PHASE_SAO;
        O_SAO_READ_ENABLE = !w_fatal;
        O_SAO_RELEASE_READY = !w_fatal && !w_sao_tag_bad;
      end
      ST_ERROR: begin
        O_PHASE = PARA_PHASE_ERROR;
      end
      default: begin
        O_PHASE = PARA_PHASE_ERROR;
      end
    endcase
  end

  assign w_param_fire = I_PARAM_VALID && O_PARAM_READY;
  assign w_write_done_fire = I_WR_DONE_VALID && O_WR_DONE_READY && !w_fatal;
  assign w_copy_done_fire = I_COPY_DONE_VALID && O_COPY_DONE_READY && !w_fatal;
  assign w_scan_done_fire = I_SCAN_DONE_VALID && O_SCAN_DONE_READY;
  assign w_sao_release_fire = I_SAO_RELEASE_VALID && O_SAO_RELEASE_READY;

  assign O_SCAN_START_BANK = r_bank;
  assign O_SCAN_START_CTU_ID = r_ctu_id;
  assign O_COPY_VALID_WIDTH = r_valid_width;
  assign O_COPY_VALID_HEIGHT = r_valid_height;
  assign O_BANK_RELEASE_BANK = r_bank;
  assign O_BANK_RELEASE_CTU_ID = r_ctu_id;
  assign O_SAO_CTU_ID = r_ctu_id;
  assign O_SAO_BANK = r_bank;
  assign O_CTU_VALID_WIDTH = r_valid_width;
  assign O_CTU_VALID_HEIGHT = r_valid_height;
  assign O_CTU_ID = r_ctu_id;
  assign O_CTU_BANK = r_bank;
  assign O_BUSY = (r_current_state != ST_IDLE);
  assign O_ERROR_VALID = (r_current_state == ST_ERROR);
  assign O_ERROR_CODE = r_error_code;

  // Context and one-edge scoreboard; no large sample payload storage here.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_ctu_id <= 9'd0;
      r_bank <= 1'b0;
      r_valid_width <= 8'd0;
      r_valid_height <= 8'd0;
      r_edge_pending <= 1'b0;
      r_edge_id <= 12'd0;
      r_edge_component <= 2'd0;
      r_edge_direction <= 1'b0;
      r_error_code <= PARA_ERR_NONE;
    end else begin
      if (w_fatal)
        r_error_code <= w_fatal_code;

      if (w_start_fire) begin
        r_ctu_id <= I_START_CTU_ID;
        r_bank <= I_START_BANK;
        r_valid_width <= I_START_VALID_WIDTH;
        r_valid_height <= I_START_VALID_HEIGHT;
        r_edge_pending <= 1'b0;
        r_error_code <= w_fatal ? w_fatal_code : PARA_ERR_NONE;
      end else if (w_param_fire) begin
        r_edge_pending <= 1'b1;
        r_edge_id <= I_PARAM_EDGE_ID;
        r_edge_component <= I_PARAM_COMPONENT_ID;
        r_edge_direction <= I_PARAM_DIRECTION;
      end else if (w_write_done_fire) begin
        r_edge_pending <= 1'b0;
      end
    end
  end

endmodule: DBF_FILTER_CONTROLLER
