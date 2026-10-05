//-----------------------------------------------------------
// Description: AXI4 Read Master for CTU Fetch Engine.
//              - Read-only AXI4 master
//              - Single outstanding burst
//              - Fixed AXI ID
//              - Pass-through RDATA to Fetch Engine
//              - 128-bit data width by default
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_AXI_READ_MASTER
  #(
    parameter int PARA_ADDR_WD = 32,
    parameter int PARA_DATA_WD = 128,
    parameter int PARA_ID_WD   = 4)
  (
    input                             I_CLK,
    input                             I_RST_N,

    // ============================================================
    // Internal read command channel from CTU_FETCH_ENGINE
    // ============================================================
    input                             I_RD_CMD_VALID,
    output logic                      O_RD_CMD_READY,
    input [PARA_ADDR_WD - 1:0]        I_RD_CMD_ADDR,
    input [7:0]                       I_RD_CMD_BEATS,

    // ============================================================
    // Internal read data channel to CTU_FETCH_ENGINE
    // ============================================================
    output logic                      O_RD_DATA_VALID,
    input                             I_RD_DATA_READY,
    output logic [PARA_DATA_WD - 1:0] O_RD_DATA,
    output logic                      O_RD_DATA_LAST,
    output logic                      O_RD_DATA_ERROR,

    // ============================================================
    // Optional status/debug
    // ============================================================
    output logic                      O_AXI_BUSY,
    output logic                      O_AXI_RESP_ERROR,
    output logic                      O_AXI_BURST_LEN_ERROR,
    output logic                      O_AXI_ID_ERROR,

    // ============================================================
    // AXI4 Read Address Channel
    // ============================================================
    output logic [PARA_ID_WD - 1:0]   O_M_AXI_ARID,
    output logic [PARA_ADDR_WD - 1:0] O_M_AXI_ARADDR,
    output logic [7:0]                O_M_AXI_ARLEN,
    output logic [2:0]                O_M_AXI_ARSIZE,
    output logic [1:0]                O_M_AXI_ARBURST,
    output logic                      O_M_AXI_ARVALID,
    input                             I_M_AXI_ARREADY,

    // ============================================================
    // AXI4 Read Data Channel
    // ============================================================
    input [PARA_ID_WD - 1:0]          I_M_AXI_RID,
    input [PARA_DATA_WD - 1:0]        I_M_AXI_RDATA,
    input [1:0]                       I_M_AXI_RRESP,
    input                             I_M_AXI_RLAST,
    input                             I_M_AXI_RVALID,
    output logic                      O_M_AXI_RREADY
  );

  // ============================================================
  // Local parameters
  // ============================================================
  localparam logic [1:0] AXI_BURST_INCR = 2'b01;
  localparam logic [1:0] AXI_RESP_OKAY  = 2'b00;

  localparam int AXI_BYTES_PER_BEAT = PARA_DATA_WD / 8;
  localparam logic [2:0] AXI_SIZE_VALUE = $clog2(AXI_BYTES_PER_BEAT);
  localparam logic [PARA_ID_WD - 1:0] AXI_FIXED_ID = {PARA_ID_WD{1'b0}};

  typedef enum logic [1:0] {
    ST_IDLE = 2'd0,
    ST_AR   = 2'd1,
    ST_R    = 2'd2
  } t_state;

  // ============================================================
  // Internal signals
  // ============================================================
  t_state r_current_state;
  t_state w_next_state;

  logic [PARA_ADDR_WD - 1:0] r_cmd_addr;
  logic [7:0]                r_cmd_beats;
  logic [7:0]                r_beat_cnt;

  logic r_resp_error_seen;
  logic r_burst_len_error;
  logic r_id_error_seen;

  logic w_rd_cmd_fire;
  logic w_axi_ar_fire;
  logic w_axi_r_fire;
  logic w_axi_burst_done;

  logic [7:0] w_safe_cmd_beats;

  logic w_expected_last_beat;

  logic w_resp_error_on_valid;
  logic w_len_error_on_valid;
  logic w_id_error_on_valid;

  logic w_resp_error_on_fire;
  logic w_len_error_on_fire;
  logic w_id_error_on_fire;

  // ============================================================
  // Handshake signals
  // ============================================================
  assign w_rd_cmd_fire    = I_RD_CMD_VALID & O_RD_CMD_READY;
  assign w_axi_ar_fire    = O_M_AXI_ARVALID & I_M_AXI_ARREADY;
  assign w_axi_r_fire     = I_M_AXI_RVALID & O_M_AXI_RREADY;
  assign w_axi_burst_done = w_axi_r_fire & I_M_AXI_RLAST;

  // Avoid ARLEN underflow when command beats is zero.
  // Normal case: CTU_FETCH_ENGINE should always send I_RD_CMD_BEATS >= 1.
  assign w_safe_cmd_beats     = (I_RD_CMD_BEATS == 8'd0) ? 8'd1 : I_RD_CMD_BEATS;
  assign w_expected_last_beat = (r_cmd_beats != 8'd0) & (r_beat_cnt == (r_cmd_beats - 8'd1));

  // Error information that belongs to the current VALID beat.
  // These signals do not depend on READY.
  assign w_resp_error_on_valid = (I_M_AXI_RRESP != AXI_RESP_OKAY);
  assign w_len_error_on_valid  = (I_M_AXI_RLAST != w_expected_last_beat);
  assign w_id_error_on_valid   = (I_M_AXI_RID != AXI_FIXED_ID);

  // Error information that is latched only when the beat is really accepted.
  assign w_resp_error_on_fire = w_axi_r_fire & w_resp_error_on_valid;
  assign w_len_error_on_fire  = w_axi_r_fire & w_len_error_on_valid;
  assign w_id_error_on_fire   = w_axi_r_fire & w_id_error_on_valid;

  // ============================================================
  // FSM state register
  // ============================================================
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_current_state <= ST_IDLE;
    end else begin
      r_current_state <= w_next_state;
    end
  end

  // ============================================================
  // FSM next-state logic
  // ============================================================
  always_comb begin
    w_next_state = r_current_state;

    unique case (r_current_state)

      ST_IDLE: begin
        if (w_rd_cmd_fire) begin
          w_next_state = ST_AR;
        end
      end

      ST_AR: begin
        if (w_axi_ar_fire) begin
          w_next_state = ST_R;
        end
      end

      ST_R: begin
        if (w_axi_burst_done) begin
          w_next_state = ST_IDLE;
        end
      end

      default: begin
        w_next_state = ST_IDLE;
      end
    endcase
  end

  // ============================================================
  // Output decode
  // ============================================================
  always_comb begin
    // Default internal command output
    O_RD_CMD_READY = 1'b0;

    // Default internal read data output
    O_RD_DATA_VALID = 1'b0;
    O_RD_DATA       = I_M_AXI_RDATA;
    O_RD_DATA_LAST  = I_M_AXI_RLAST;
    O_RD_DATA_ERROR = 1'b0;

    // Default AXI AR channel
    O_M_AXI_ARID    = AXI_FIXED_ID;
    O_M_AXI_ARADDR  = r_cmd_addr;
    O_M_AXI_ARLEN   = r_cmd_beats - 8'd1;
    O_M_AXI_ARSIZE  = AXI_SIZE_VALUE;
    O_M_AXI_ARBURST = AXI_BURST_INCR;
    O_M_AXI_ARVALID = 1'b0;

    // Default AXI R channel
    O_M_AXI_RREADY = 1'b0;

    unique case (r_current_state)

      ST_IDLE: begin
        O_RD_CMD_READY = 1'b1;
      end

      ST_AR: begin
        O_M_AXI_ARVALID = 1'b1;
      end

      ST_R: begin
        // Pass-through RDATA to Fetch Engine.
        // AXI beat is only consumed when Fetch Engine is ready.
        O_RD_DATA_VALID = I_M_AXI_RVALID;
        O_RD_DATA       = I_M_AXI_RDATA;
        O_RD_DATA_LAST  = I_M_AXI_RLAST;

        // Error travels with VALID beat. It should not depend on READY.
        O_RD_DATA_ERROR = I_M_AXI_RVALID &
                          (w_resp_error_on_valid |
                           w_len_error_on_valid |
                           w_id_error_on_valid);

        O_M_AXI_RREADY  = I_RD_DATA_READY;
      end

      default: begin
      end
    endcase
  end

  // Busy is raised immediately when a command is accepted.
  assign O_AXI_BUSY            = (r_current_state != ST_IDLE) | w_rd_cmd_fire;
  assign O_AXI_RESP_ERROR      = r_resp_error_seen;
  assign O_AXI_BURST_LEN_ERROR = r_burst_len_error;
  assign O_AXI_ID_ERROR        = r_id_error_seen;

  // ============================================================
  // Command and status registers
  // ============================================================
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_cmd_addr        <= '0;
      r_cmd_beats       <= '0;
      r_beat_cnt        <= '0;
      r_resp_error_seen <= 1'b0;
      r_burst_len_error <= 1'b0;
      r_id_error_seen   <= 1'b0;
    end else begin

      // Latch command when accepted.
      if (w_rd_cmd_fire) begin
        r_cmd_addr        <= I_RD_CMD_ADDR;
        r_cmd_beats       <= w_safe_cmd_beats;
        r_beat_cnt        <= '0;
        r_resp_error_seen <= 1'b0;
        r_burst_len_error <= 1'b0;
        r_id_error_seen   <= 1'b0;
      end

      // Count accepted AXI R beats and latch errors.
      if ((r_current_state == ST_R) && w_axi_r_fire) begin

        if (w_resp_error_on_fire) begin
          r_resp_error_seen <= 1'b1;
        end

        if (w_len_error_on_fire) begin
          r_burst_len_error <= 1'b1;
        end

        if (w_id_error_on_fire) begin
          r_id_error_seen <= 1'b1;
        end

        if (I_M_AXI_RLAST) begin
          r_beat_cnt <= '0;
        end else begin
          r_beat_cnt <= r_beat_cnt + 8'd1;
        end
      end
    end
  end

endmodule : CTU_AXI_READ_MASTER