//-----------------------------------------------------------
// Description: Top-level CTU input engine with AXI4 read master.
// Data/control path:
//   Scheduler -> Issue Controller -> Fetch Engine
//             -> AXI Read Master -> AXI interconnect/DDR controller
//   Fetch Engine -> Buffer Pool -> downstream CTU consumer
//   Buffer Manager tracks FREE/RESERVED/FILLING/READY/IN_USE.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_INPUT_ENGINE
  #(
    parameter int PARA_CTU_SIZE         = 128,
    parameter int PARA_CTU_SIZE_LOG2    = $clog2(PARA_CTU_SIZE),
    parameter int PARA_NUM_BUFFERS      = 4,
    parameter int PARA_TASK_QUEUE_DEPTH = PARA_NUM_BUFFERS,
    parameter int PARA_BUF_ID_W         = (PARA_NUM_BUFFERS <= 1) ? 1 : $clog2(PARA_NUM_BUFFERS),
    parameter int PARA_CTU_TASK_WD      = 136,

    parameter int PARA_Y_DEPTH     = 2048,
    parameter int PARA_C_DEPTH     = 512,
    parameter int PARA_BUF_ADDR_WD = 16,

    parameter int PARA_AXI_ADDR_WD = 32,
    parameter int PARA_AXI_DATA_WD = 128,
    parameter int PARA_AXI_ID_WD   = 4,
    parameter int PARA_STRB_WD     = PARA_AXI_DATA_WD / 8)
  (
    input I_CLK,
    input I_RST_N,

    // Frame configuration. These inputs are sampled only when
    // I_FRAME_START & O_FRAME_START_READY are both high. After that point,
    // all internal blocks use the latched configuration registers.
    input                          I_FRAME_START,
    input [15:0]                   I_FRAME_WIDTH,
    input [15:0]                   I_FRAME_HEIGHT,
    input [PARA_AXI_ADDR_WD - 1:0] I_BASE_Y,
    input [PARA_AXI_ADDR_WD - 1:0] I_BASE_U,
    input [PARA_AXI_ADDR_WD - 1:0] I_BASE_V,
    input [15:0]                   I_STRIDE_Y,
    input [15:0]                   I_STRIDE_U,
    input [15:0]                   I_STRIDE_V,

    // AXI4 read-address channel
    output logic [PARA_AXI_ID_WD - 1:0]   O_M_AXI_ARID,
    output logic [PARA_AXI_ADDR_WD - 1:0] O_M_AXI_ARADDR,
    output logic [7:0]                    O_M_AXI_ARLEN,
    output logic [2:0]                    O_M_AXI_ARSIZE,
    output logic [1:0]                    O_M_AXI_ARBURST,
    output logic                          O_M_AXI_ARVALID,
    input                                 I_M_AXI_ARREADY,

    // AXI4 read-data channel
    input [PARA_AXI_ID_WD - 1:0]   I_M_AXI_RID,
    input [PARA_AXI_DATA_WD - 1:0] I_M_AXI_RDATA,
    input [1:0]                    I_M_AXI_RRESP,
    input                          I_M_AXI_RLAST,
    input                          I_M_AXI_RVALID,
    output logic                   O_M_AXI_RREADY,

    // CTU descriptor output
    output logic                          O_CTU_OUT_VALID,
    input                                 I_CTU_OUT_READY,
    output logic [PARA_BUF_ID_W - 1:0]    O_CTU_OUT_BUFFER_ID,
    output logic [PARA_CTU_TASK_WD - 1:0] O_CTU_OUT_META,

    // CTU buffer read port for downstream processing
    input                                 I_BUF_RD_VALID,
    input [PARA_BUF_ID_W - 1:0]           I_BUF_RD_BUFFER_ID,
    input [1:0]                           I_BUF_RD_PLANE,
    input [PARA_BUF_ADDR_WD - 1:0]        I_BUF_RD_ADDR,
    output logic [PARA_AXI_DATA_WD - 1:0] O_BUF_RD_DATA,
    output logic                          O_BUF_RD_DATA_VALID,

    // Downstream releases the buffer after all CTU samples are consumed.
    input                       I_CTU_RELEASE_VALID,
    input [PARA_BUF_ID_W - 1:0] I_CTU_RELEASE_BUFFER_ID,

    // Status/debug
    output logic                          O_FRAME_START_READY,
    output logic                          O_FRAME_CONFIG_ERROR,
    output logic                          O_FRAME_ISSUE_DONE,
    output logic                          O_SCHEDULER_BUSY,
    output logic                          O_ISSUE_CTRL_BUSY,
    output logic                          O_FETCH_BUSY,
    output logic                          O_OUTPUT_CTRL_BUSY,
    output logic                          O_AXI_BUSY,
    output logic                          O_AXI_RESP_ERROR,
    output logic                          O_AXI_BURST_LEN_ERROR,
    output logic                          O_AXI_ID_ERROR,
    output logic                          O_FETCH_ERROR_VALID,
    output logic [PARA_BUF_ID_W - 1:0]    O_FETCH_ERROR_BUFFER_ID,
    output logic [PARA_CTU_TASK_WD - 1:0] O_FETCH_ERROR_TASK,
    output logic                          O_BUFFER_FREE_VALID,
    output logic [PARA_BUF_ID_W - 1:0]    O_BUFFER_FREE_ID,
    output logic                          O_READY_BUFFER_VALID,
    output logic [PARA_BUF_ID_W - 1:0]    O_READY_BUFFER_ID);

  // Scheduler -> issue controller
  logic                          w_sche_task_valid;
  logic                          w_sche_task_ready;
  logic [PARA_CTU_TASK_WD - 1:0] w_sche_task_payload;

  // Issue controller -> fetch engine
  logic                          w_fetch_task_valid;
  logic                          w_fetch_task_ready;
  logic [PARA_CTU_TASK_WD - 1:0] w_fetch_task_payload;
  logic [PARA_BUF_ID_W - 1:0]    w_fetch_task_buffer_id;

  // Buffer allocation/state events
  logic                          w_buffer_free_valid;
  logic [PARA_BUF_ID_W - 1:0]    w_buffer_free_id;
  logic                          w_buffer_reserve_valid;
  logic [PARA_BUF_ID_W - 1:0]    w_buffer_reserve_id;
  logic [PARA_CTU_TASK_WD - 1:0] w_buffer_reserve_meta;
  logic                          w_buffer_fetch_start_valid;
  logic [PARA_BUF_ID_W - 1:0]    w_buffer_fetch_start_id;

  // Fetch completion
  logic                          w_fetch_done_valid;
  logic [PARA_BUF_ID_W - 1:0]    w_fetch_done_buffer_id;
  logic [PARA_CTU_TASK_WD - 1:0] w_fetch_done_task;

  // Fetch engine <-> AXI read master internal command channel
  logic                          w_rd_cmd_valid;
  logic                          w_rd_cmd_ready;
  logic [PARA_AXI_ADDR_WD - 1:0] w_rd_cmd_addr;
  logic [7:0]                    w_rd_cmd_beats;

  // AXI read master -> fetch engine internal data channel
  logic                          w_rd_data_valid;
  logic                          w_rd_data_ready;
  logic [PARA_AXI_DATA_WD - 1:0] w_rd_data;
  logic                          w_rd_data_last;
  logic                          w_rd_data_error;

  // Fetch engine -> buffer pool
  logic                          w_buf_wr_valid;
  logic [PARA_BUF_ID_W - 1:0]    w_buf_wr_buffer_id;
  logic [1:0]                    w_buf_wr_plane;
  logic [PARA_BUF_ADDR_WD - 1:0] w_buf_wr_addr;
  logic [PARA_AXI_DATA_WD - 1:0] w_buf_wr_data;
  logic [PARA_STRB_WD - 1:0]     w_buf_wr_strb;

  // Buffer manager -> output controller
  logic                          w_ready_buffer_valid;
  logic [PARA_BUF_ID_W - 1:0]    w_ready_buffer_id;
  logic [PARA_CTU_TASK_WD - 1:0] w_ready_buffer_meta;

  // Output controller -> buffer manager
  logic                       w_ready_take_valid;
  logic [PARA_BUF_ID_W - 1:0] w_ready_take_buffer_id;

  // Informational downstream handshake
  logic                       w_ctu_out_fire;
  logic [PARA_BUF_ID_W - 1:0] w_ctu_out_fire_buffer_id;

  // Fetch error path
  logic                          w_fetch_error_valid;
  logic [PARA_BUF_ID_W - 1:0]    w_fetch_error_buffer_id;
  logic [PARA_CTU_TASK_WD - 1:0] w_fetch_error_task;

  // Internal status wires
  logic w_scheduler_busy;
  logic w_issue_ctrl_busy;
  logic w_fetch_busy;
  logic w_output_ctrl_busy;
  logic w_axi_busy;
  logic w_axi_resp_error;
  logic w_axi_burst_len_error;
  logic w_axi_id_error;
  logic w_all_buffers_free;

  // Latched frame configuration
  logic [15:0]                   r_frame_width;
  logic [15:0]                   r_frame_height;
  logic [PARA_AXI_ADDR_WD - 1:0] r_base_y;
  logic [PARA_AXI_ADDR_WD - 1:0] r_base_u;
  logic [PARA_AXI_ADDR_WD - 1:0] r_base_v;
  logic [15:0]                   r_stride_y;
  logic [15:0]                   r_stride_u;
  logic [15:0]                   r_stride_v;

  logic w_frame_config_ok;
  logic w_frame_start_ready;
  logic w_frame_start_accept;

  assign O_BUFFER_FREE_VALID  = w_buffer_free_valid;
  assign O_BUFFER_FREE_ID     = w_buffer_free_id;
  assign O_READY_BUFFER_VALID = w_ready_buffer_valid;
  assign O_READY_BUFFER_ID    = w_ready_buffer_id;

  assign O_SCHEDULER_BUSY      = w_scheduler_busy;
  assign O_ISSUE_CTRL_BUSY     = w_issue_ctrl_busy;
  assign O_FETCH_BUSY          = w_fetch_busy;
  assign O_OUTPUT_CTRL_BUSY    = w_output_ctrl_busy;
  assign O_AXI_BUSY            = w_axi_busy;
  assign O_AXI_RESP_ERROR      = w_axi_resp_error;
  assign O_AXI_BURST_LEN_ERROR = w_axi_burst_len_error;
  assign O_AXI_ID_ERROR        = w_axi_id_error;

  assign O_FETCH_ERROR_VALID     = w_fetch_error_valid;
  assign O_FETCH_ERROR_BUFFER_ID = w_fetch_error_buffer_id;
  assign O_FETCH_ERROR_TASK      = w_fetch_error_task;

  assign w_frame_config_ok = (I_FRAME_WIDTH != 16'd0) &
                             (I_FRAME_HEIGHT != 16'd0);

  assign w_frame_start_ready = (~w_scheduler_busy) &
                               (~w_issue_ctrl_busy) &
                               (~w_fetch_busy) &
                               (~w_axi_busy) &
                               (~w_output_ctrl_busy) &
                               w_all_buffers_free;

  assign w_frame_start_accept = I_FRAME_START &
                                w_frame_start_ready &
                                w_frame_config_ok;

  assign O_FRAME_START_READY  = w_frame_start_ready & w_frame_config_ok;
  assign O_FRAME_CONFIG_ERROR = I_FRAME_START & w_frame_start_ready &
                                (~w_frame_config_ok);

  // Capture frame configuration exactly at frame-start acceptance.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_frame_width  <= 16'd0;
      r_frame_height <= 16'd0;
      r_base_y       <= '0;
      r_base_u       <= '0;
      r_base_v       <= '0;
      r_stride_y     <= 16'd0;
      r_stride_u     <= 16'd0;
      r_stride_v     <= 16'd0;
    end else begin
      if (w_frame_start_accept) begin
        r_frame_width  <= I_FRAME_WIDTH;
        r_frame_height <= I_FRAME_HEIGHT;
        r_base_y       <= I_BASE_Y;
        r_base_u       <= I_BASE_U;
        r_base_v       <= I_BASE_V;
        r_stride_y     <= I_STRIDE_Y;
        r_stride_u     <= I_STRIDE_U;
        r_stride_v     <= I_STRIDE_V;
      end
    end
  end

  // ------------------------------------------------------------------
  // CTU task scheduler
  // ------------------------------------------------------------------
  CTU_TASK_SCHEDULER #(
      .PARA_CTU_SIZE(PARA_CTU_SIZE),
      .PARA_CTU_SIZE_LOG2(PARA_CTU_SIZE_LOG2),
      .PARA_CTU_TASK_WD(PARA_CTU_TASK_WD))
    U_CTU_TASK_SCHEDULER(
        .I_CLK(I_CLK),
        .I_RST_N(I_RST_N),
        .I_FRAME_START(w_frame_start_accept),
        .I_FRAME_WIDTH(r_frame_width),
        .I_FRAME_HEIGHT(r_frame_height),
        .O_SCHE_TASK_VALID(w_sche_task_valid),
        .I_SCHE_TASK_READY(w_sche_task_ready),
        .O_SCHE_TASK_PAYLOAD(w_sche_task_payload),
        .O_FRAME_ISSUE_DONE(O_FRAME_ISSUE_DONE),
        .O_SCHEDULER_BUSY(w_scheduler_busy));

  // ------------------------------------------------------------------
  // Task queue and free-buffer allocation
  // ------------------------------------------------------------------
  CTU_TASK_ISSUE_CONTROLLER #(
      .PARA_NUM_BUFFERS(PARA_NUM_BUFFERS),
      .PARA_BUF_ID_W(PARA_BUF_ID_W),
      .PARA_CTU_TASK_WD(PARA_CTU_TASK_WD),
      .PARA_TASK_QUEUE_DEPTH(PARA_TASK_QUEUE_DEPTH))
    U_CTU_TASK_ISSUE_CONTROLLER(
        .I_CLK(I_CLK),
        .I_RST_N(I_RST_N),
        .I_SCHE_TASK_VALID(w_sche_task_valid),
        .O_SCHE_TASK_READY(w_sche_task_ready),
        .I_SCHE_TASK_PAYLOAD(w_sche_task_payload),
        .O_FETCH_TASK_VALID(w_fetch_task_valid),
        .I_FETCH_TASK_READY(w_fetch_task_ready),
        .O_FETCH_TASK_PAYLOAD(w_fetch_task_payload),
        .O_FETCH_TASK_BUFFER_ID(w_fetch_task_buffer_id),
        .I_BUFFER_FREE_VALID(w_buffer_free_valid),
        .I_BUFFER_FREE_ID(w_buffer_free_id),
        .O_BUFFER_RESERVE_VALID(w_buffer_reserve_valid),
        .O_BUFFER_RESERVE_ID(w_buffer_reserve_id),
        .O_BUFFER_RESERVE_META(w_buffer_reserve_meta),
        .O_BUFFER_FETCH_START_VALID(w_buffer_fetch_start_valid),
        .O_BUFFER_FETCH_START_ID(w_buffer_fetch_start_id),
        .O_ISSUE_CTRL_BUSY(w_issue_ctrl_busy));

  // ------------------------------------------------------------------
  // CTU fetch engine: computes row addresses, receives read beats,
  // normalizes samples, performs right/bottom padding, writes buffer.
  // ------------------------------------------------------------------
  CTU_FETCH_ENGINE #(
      .PARA_NUM_BUFFERS(PARA_NUM_BUFFERS),
      .PARA_BUF_ID_W(PARA_BUF_ID_W),
      .PARA_CTU_TASK_WD(PARA_CTU_TASK_WD),
      .PARA_CTU_SIZE(PARA_CTU_SIZE),
      .PARA_DATA_WD(PARA_AXI_DATA_WD),
      .PARA_SAMPLE_BITS(10),
      .PARA_SAMPLE_STORE_WD(16))
    U_CTU_FETCH_ENGINE(
        .I_CLK(I_CLK),
        .I_RST_N(I_RST_N),
        .I_FRAME_WIDTH(r_frame_width),
        .I_FRAME_HEIGHT(r_frame_height),
        .I_BASE_Y(r_base_y[31:0]),
        .I_BASE_U(r_base_u[31:0]),
        .I_BASE_V(r_base_v[31:0]),
        .I_STRIDE_Y(r_stride_y),
        .I_STRIDE_U(r_stride_u),
        .I_STRIDE_V(r_stride_v),
        .I_FETCH_TASK_VALID(w_fetch_task_valid),
        .O_FETCH_TASK_READY(w_fetch_task_ready),
        .I_FETCH_TASK_PAYLOAD(w_fetch_task_payload),
        .I_FETCH_TASK_BUFFER_ID(w_fetch_task_buffer_id),
        .O_RD_CMD_VALID(w_rd_cmd_valid),
        .I_RD_CMD_READY(w_rd_cmd_ready),
        .O_RD_CMD_ADDR(w_rd_cmd_addr[31:0]),
        .O_RD_CMD_BEATS(w_rd_cmd_beats),
        .I_RD_DATA_VALID(w_rd_data_valid),
        .O_RD_DATA_READY(w_rd_data_ready),
        .I_RD_DATA(w_rd_data),
        .I_RD_DATA_LAST(w_rd_data_last),
        .I_RD_DATA_ERROR(w_rd_data_error),
        .O_BUFF_WR_VALID(w_buf_wr_valid),
        .O_BUFF_WR_BUFF_ID(w_buf_wr_buffer_id),
        .O_BUFF_WR_PLANE(w_buf_wr_plane),
        .O_BUFF_WR_ADDR(w_buf_wr_addr),
        .O_BUFF_WR_DATA(w_buf_wr_data),
        .O_BUFF_WR_STRB(w_buf_wr_strb),
        .O_FETCH_DONE_VALID(w_fetch_done_valid),
        .O_FETCH_DONE_BUFF_ID(w_fetch_done_buffer_id),
        .O_FETCH_DONE_TASK(w_fetch_done_task),
        .O_FETCH_ERROR_VALID(w_fetch_error_valid),
        .O_FETCH_ERROR_BUFF_ID(w_fetch_error_buffer_id),
        .O_FETCH_ERROR_TASK(w_fetch_error_task),
        .O_FETCH_BUSY(w_fetch_busy));

  // ------------------------------------------------------------------
  // AXI4 read master: converts internal command/data handshakes into
  // AXI AR/R channels. Current implementation allows one outstanding
  // burst at a time.
  // ------------------------------------------------------------------
  CTU_AXI_READ_MASTER #(
      .PARA_ADDR_WD(PARA_AXI_ADDR_WD),
      .PARA_DATA_WD(PARA_AXI_DATA_WD),
      .PARA_ID_WD(PARA_AXI_ID_WD))
    U_CTU_AXI_READ_MASTER(
        .I_CLK(I_CLK),
        .I_RST_N(I_RST_N),
        .I_RD_CMD_VALID(w_rd_cmd_valid),
        .O_RD_CMD_READY(w_rd_cmd_ready),
        .I_RD_CMD_ADDR(w_rd_cmd_addr),
        .I_RD_CMD_BEATS(w_rd_cmd_beats),
        .O_RD_DATA_VALID(w_rd_data_valid),
        .I_RD_DATA_READY(w_rd_data_ready),
        .O_RD_DATA(w_rd_data),
        .O_RD_DATA_LAST(w_rd_data_last),
        .O_RD_DATA_ERROR(w_rd_data_error),
        .O_AXI_BUSY(w_axi_busy),
        .O_AXI_RESP_ERROR(w_axi_resp_error),
        .O_AXI_BURST_LEN_ERROR(w_axi_burst_len_error),
        .O_AXI_ID_ERROR(w_axi_id_error),
        .O_M_AXI_ARID(O_M_AXI_ARID),
        .O_M_AXI_ARADDR(O_M_AXI_ARADDR),
        .O_M_AXI_ARLEN(O_M_AXI_ARLEN),
        .O_M_AXI_ARSIZE(O_M_AXI_ARSIZE),
        .O_M_AXI_ARBURST(O_M_AXI_ARBURST),
        .O_M_AXI_ARVALID(O_M_AXI_ARVALID),
        .I_M_AXI_ARREADY(I_M_AXI_ARREADY),
        .I_M_AXI_RID(I_M_AXI_RID),
        .I_M_AXI_RDATA(I_M_AXI_RDATA),
        .I_M_AXI_RRESP(I_M_AXI_RRESP),
        .I_M_AXI_RLAST(I_M_AXI_RLAST),
        .I_M_AXI_RVALID(I_M_AXI_RVALID),
        .O_M_AXI_RREADY(O_M_AXI_RREADY));

  // ------------------------------------------------------------------
  // Multi-buffer sample storage
  // ------------------------------------------------------------------
  CTU_BUFFER_POOL #(
      .PARA_NUM_BUFFERS(PARA_NUM_BUFFERS),
      .PARA_BUF_ID_W(PARA_BUF_ID_W),
      .PARA_Y_DEPTH(PARA_Y_DEPTH),
      .PARA_C_DEPTH(PARA_C_DEPTH),
      .PARA_ADDR_WD(PARA_BUF_ADDR_WD),
      .PARA_DATA_WD(PARA_AXI_DATA_WD),
      .PARA_STRB_WD(PARA_STRB_WD))
    U_CTU_BUFFER_POOL(
        .I_CLK(I_CLK),
        .I_RST_N(I_RST_N),
        .I_BUF_WR_VALID(w_buf_wr_valid),
        .I_BUF_WR_BUFFER_ID(w_buf_wr_buffer_id),
        .I_BUF_WR_PLANE(w_buf_wr_plane),
        .I_BUF_WR_ADDR(w_buf_wr_addr),
        .I_BUF_WR_DATA(w_buf_wr_data),
        .I_BUF_WR_STRB(w_buf_wr_strb),
        .I_RD_VALID(I_BUF_RD_VALID),
        .I_RD_BUFFER_ID(I_BUF_RD_BUFFER_ID),
        .I_RD_PLANE(I_BUF_RD_PLANE),
        .I_RD_ADDR(I_BUF_RD_ADDR),
        .O_RD_DATA(O_BUF_RD_DATA),
        .O_RD_DATA_VALID(O_BUF_RD_DATA_VALID));

  // ------------------------------------------------------------------
  // Buffer lifecycle manager
  // ------------------------------------------------------------------
  CTU_BUFFER_MANAGER #(
      .PARA_NUM_BUFFERS(PARA_NUM_BUFFERS),
      .PARA_BUF_ID_W(PARA_BUF_ID_W),
      .PARA_CTU_TASK_WD(PARA_CTU_TASK_WD))
    U_CTU_BUFFER_MANAGER(
        .I_CLK(I_CLK),
        .I_RST_N(I_RST_N),
        .O_BUFFER_FREE_VALID(w_buffer_free_valid),
        .O_BUFFER_FREE_ID(w_buffer_free_id),
        .I_BUFFER_RESERVED_VALID(w_buffer_reserve_valid),
        .I_BUFFER_RESERVED_ID(w_buffer_reserve_id),
        .I_BUFFER_RESERVED_META(w_buffer_reserve_meta),
        .I_BUFFER_FETCH_START_VALID(w_buffer_fetch_start_valid),
        .I_BUFFER_FETCH_START_ID(w_buffer_fetch_start_id),
        .I_FETCH_DONE_VALID(w_fetch_done_valid),
        .I_FETCH_DONE_BUFFER_ID(w_fetch_done_buffer_id),
        .I_FETCH_DONE_TASK(w_fetch_done_task),
        .I_FETCH_ERROR_VALID(w_fetch_error_valid),
        .I_FETCH_ERROR_BUFFER_ID(w_fetch_error_buffer_id),
        .O_READY_BUFFER_VALID(w_ready_buffer_valid),
        .O_READY_BUFFER_ID(w_ready_buffer_id),
        .O_READY_BUFFER_META(w_ready_buffer_meta),
        .I_READY_TAKE_VALID(w_ready_take_valid),
        .I_READY_TAKE_BUFFER_ID(w_ready_take_buffer_id),
        .I_CTU_RELEASE_VALID(I_CTU_RELEASE_VALID),
        .I_CTU_RELEASE_BUFFER_ID(I_CTU_RELEASE_BUFFER_ID),
        .O_ALL_BUFFERS_FREE(w_all_buffers_free));

  // ------------------------------------------------------------------
  // Descriptor output controller
  // ------------------------------------------------------------------
  CTU_OUTPUT_CONTROLLER #(
      .PARA_NUM_BUFFERS(PARA_NUM_BUFFERS),
      .PARA_BUF_ID_W(PARA_BUF_ID_W),
      .PARA_CTU_TASK_WD(PARA_CTU_TASK_WD))
    U_CTU_OUTPUT_CONTROLLER(
        .I_CLK(I_CLK),
        .I_RST_N(I_RST_N),
        .I_READY_BUFFER_VALID(w_ready_buffer_valid),
        .I_READY_BUFFER_ID(w_ready_buffer_id),
        .I_READY_BUFFER_META(w_ready_buffer_meta),
        .O_READY_TAKE_VALID(w_ready_take_valid),
        .O_READY_TAKE_BUFFER_ID(w_ready_take_buffer_id),
        .O_CTU_OUT_VALID(O_CTU_OUT_VALID),
        .I_CTU_OUT_READY(I_CTU_OUT_READY),
        .O_CTU_OUT_BUFFER_ID(O_CTU_OUT_BUFFER_ID),
        .O_CTU_OUT_META(O_CTU_OUT_META),
        .O_CTU_OUT_FIRE(w_ctu_out_fire),
        .O_CTU_OUT_FIRE_BUFFER_ID(w_ctu_out_fire_buffer_id),
        .O_OUTPUT_CTRL_BUSY(w_output_ctrl_busy));

endmodule : CTU_INPUT_ENGINE
