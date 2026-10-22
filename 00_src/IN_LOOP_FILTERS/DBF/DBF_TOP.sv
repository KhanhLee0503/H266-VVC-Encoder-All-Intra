//------------------------------------------------------------------------------
// Module      : DBF_TOP
// Description : Integration top for H.266/VVC all-intra DBF, Option A.
//               One edge in flight. Recon Local RAM is external. Loader fills
//               both original Input and four-bank Intermediate buffers;
//               CPG drives vertical edges, then sequential copy initializes
//               the separate four-bank Output buffer, and horizontal edges
//               update that Output buffer. SAO reads only after DBF completion.
//               One 64-bit read/write at a time; no bulk 256-bit copy.
//               This top does not implement recon bank control or SAO/ALF.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module DBF_TOP (
  input                I_CLK,
  input                I_RST_N,
  // CPG metadata collection (independent from filter-controller START).
  input                I_META_CTU_START_VALID,
  output logic         O_META_CTU_START_READY,
  input                I_META_CTU_BANK,
  input          [8:0] I_META_CTU_ID,
  input          [5:0] I_META_CTU_QP,
  input          [5:0] I_META_CTU_QP_CB,
  input          [5:0] I_META_CTU_QP_CR,
  input          [7:0] I_META_CTU_VALID_WIDTH,
  input          [7:0] I_META_CTU_VALID_HEIGHT,
  input                I_META_CTU_DBF_ENABLE,
  input                I_LEAF_VALID,
  output logic         O_LEAF_READY,
  input          [8:0] I_LEAF_CTU_ID,
  input          [7:0] I_LEAF_CU_ID,
  input          [4:0] I_LEAF_X_UNIT,
  input          [4:0] I_LEAF_Y_UNIT,
  input          [2:0] I_LEAF_WIDTH_CODE,
  input          [2:0] I_LEAF_HEIGHT_CODE,
  input                I_CTU_METADATA_DONE,
  input          [8:0] I_DONE_CTU_ID,
  output logic   [1:0] O_METADATA_BANK_BUSY,
  output logic   [1:0] O_METADATA_READY,
  output logic   [1:0] O_BANK_SCAN_FINISHED,
  // CTU processing command: must match a CPG-allocated bank and Recon desc.
  input                I_START_VALID,
  output logic         O_START_READY,
  input          [8:0] I_START_CTU_ID,
  input                I_START_BANK,
  input          [7:0] I_START_VALID_WIDTH,
  input          [7:0] I_START_VALID_HEIGHT,
  input  signed  [5:0] I_BETA_OFFSET_DIV2,
  input  signed  [5:0] I_TC_OFFSET_DIV2,
  // Recon prefetch descriptor, provided by external Recon bank controller.
  input                I_RECON_DESC_VALID,
  output logic         O_RECON_DESC_READY,
  input                I_RECON_DESC_BANK_ID,
  input          [8:0] I_RECON_DESC_CTU_ID,
  input          [7:0] I_RECON_DESC_FRAME_ID,
  input         [12:0] I_RECON_DESC_X_ORIGIN,
  input         [12:0] I_RECON_DESC_Y_ORIGIN,
  input          [7:0] I_RECON_DESC_VALID_WIDTH,
  input          [7:0] I_RECON_DESC_VALID_HEIGHT,
  output logic         O_RECON_RD_EN,
  output logic   [1:0] O_RECON_RD_COMPONENT_ID,
  output logic  [11:0] O_RECON_RD_ADDR,
  input                I_RECON_RD_VALID,
  input         [63:0] I_RECON_RD_DATA,
  input                I_RECON_RD_BANK_ID,
  output logic         O_RECON_RELEASE_VALID,
  input                I_RECON_RELEASE_READY,
  output logic         O_RECON_RELEASE_BANK_ID,
  output logic   [8:0] O_RECON_RELEASE_CTU_ID,
  output logic   [7:0] O_RECON_RELEASE_FRAME_ID,
  input                I_RECON_ERROR,
  // SAO owns DBF Output Buffer after filtering. Release to reuse buffer.
  output logic         O_SAO_CTU_VALID,
  input                I_SAO_CTU_READY,
  output logic   [8:0] O_SAO_CTU_ID,
  output logic         O_SAO_BANK,
  output logic         O_SAO_READ_ENABLE,
  input                I_SAO_RD_EN,
  input          [1:0] I_SAO_RD_COMPONENT_ID,
  input         [11:0] I_SAO_RD_ADDR,
  input          [3:0] I_SAO_RD_SAMPLE_EN,
  output logic         O_SAO_RD_VALID,
  output logic  [63:0] O_SAO_RD_DATA,
  output logic   [3:0] O_SAO_RD_SAMPLE_EN,
  output logic   [1:0] O_SAO_RD_COMPONENT_ID,
  output logic  [11:0] O_SAO_RD_ADDR,
  input                I_SAO_RELEASE_VALID,
  output logic         O_SAO_RELEASE_READY,
  input          [8:0] I_SAO_RELEASE_CTU_ID,
  input                I_SAO_RELEASE_BANK,
  // Diagnostics / resource ownership.
  output logic         O_BUSY,
  output logic   [2:0] O_PHASE,
  output logic         O_ERROR_VALID,
  output logic   [3:0] O_ERROR_CODE,
  output logic         O_INPUT_BUFFER_BUSY
);

  // Internal module-to-module ready/valid and datapath links.
  logic              w_copy_copy_busy;
  logic              w_copy_copy_done_valid;
  logic              w_copy_copy_error;
  logic [1:0]        w_copy_copy_error_code;
  logic [11:0]       w_copy_output_copy_addr;
  logic [1:0]        w_copy_output_copy_component_id;
  logic [63:0]       w_copy_output_copy_data;
  logic              w_copy_output_copy_mode;
  logic [3:0]        w_copy_output_copy_sample_en;
  logic              w_copy_output_copy_valid;
  logic              w_core_busy;
  logic [8:0]        w_core_condition_flags;
  logic              w_core_error;
  logic [2:0]        w_core_filter_mode;
  logic [1023:0]     w_core_filtered_window;
  logic              w_core_in_ready;
  logic              w_core_result_bank;
  logic              w_core_result_bypass;
  logic [1:0]        w_core_result_component_id;
  logic [8:0]        w_core_result_ctu_id;
  logic              w_core_result_direction;
  logic [11:0]       w_core_result_edge_id;
  logic [3:0]        w_core_result_lane_mask;
  logic              w_core_result_valid;
  logic [7:0]        w_core_result_x;
  logic [7:0]        w_core_result_y;
  logic [63:0]       w_core_sample_write_mask;
  logic              w_cpg_bank_release_ready;
  logic [2:0]        w_cpg_error_code;
  logic [1:0]        w_cpg_error_source;
  logic              w_cpg_error_valid;
  logic              w_cpg_param_bank;
  logic [1:0]        w_cpg_param_bs;
  logic [1:0]        w_cpg_param_component_id;
  logic [8:0]        w_cpg_param_ctu_id;
  logic              w_cpg_param_direction;
  logic [11:0]       w_cpg_param_edge_id;
  logic [3:0]        w_cpg_param_lane_mask;
  logic [5:0]        w_cpg_param_qp_p;
  logic [5:0]        w_cpg_param_qp_q;
  logic [2:0]        w_cpg_param_sp;
  logic [2:0]        w_cpg_param_sq;
  logic              w_cpg_param_valid;
  logic [7:0]        w_cpg_param_x;
  logic [7:0]        w_cpg_param_y;
  logic              w_cpg_scan_done_bank;
  logic [8:0]        w_cpg_scan_done_ctu_id;
  logic              w_cpg_scan_done_valid;
  logic              w_cpg_scan_start_ready;
  logic              w_ctrl_bank_release_bank;
  logic [8:0]        w_ctrl_bank_release_ctu_id;
  logic              w_ctrl_bank_release_valid;
  logic              w_ctrl_busy;
  logic              w_ctrl_copy_done_ready;
  logic              w_ctrl_copy_start;
  logic [7:0]        w_ctrl_copy_valid_height;
  logic [7:0]        w_ctrl_copy_valid_width;
  logic              w_ctrl_ctu_bank;
  logic [8:0]        w_ctrl_ctu_id;
  logic [7:0]        w_ctrl_ctu_valid_height;
  logic [7:0]        w_ctrl_ctu_valid_width;
  logic [3:0]        w_ctrl_error_code;
  logic              w_ctrl_error_valid;
  logic              w_ctrl_init_active;
  logic              w_ctrl_inter_copy_owner;
  logic              w_ctrl_inter_init_mode;
  logic              w_ctrl_param_ready;
  logic [2:0]        w_ctrl_phase;
  logic              w_ctrl_reader_edge_valid;
  logic              w_ctrl_sao_bank;
  logic [8:0]        w_ctrl_sao_ctu_id;
  logic              w_ctrl_sao_ctu_valid;
  logic              w_ctrl_sao_read_enable;
  logic              w_ctrl_sao_release_ready;
  logic              w_ctrl_scan_done_ready;
  logic              w_ctrl_scan_start_bank;
  logic [8:0]        w_ctrl_scan_start_ctu_id;
  logic              w_ctrl_scan_start_valid;
  logic              w_ctrl_wr_done_ready;
  logic [12:0]       w_input_buffer_accepted_word_count;
  logic [1:0]        w_input_buffer_buffer_state;
  logic              w_input_buffer_error;
  logic [12:0]       w_input_buffer_expected_word_count;
  logic              w_input_buffer_fill_desc_ready;
  logic              w_input_buffer_fill_done_ready;
  logic [9-1:0]      w_input_buffer_filter_ctu_id;
  logic [12:0]       w_input_buffer_filter_ctu_x_origin;
  logic [12:0]       w_input_buffer_filter_ctu_y_origin;
  logic              w_input_buffer_filter_desc_valid;
  logic [8-1:0]      w_input_buffer_filter_frame_id;
  logic [11:0]       w_input_buffer_filter_rd_addr;
  logic [1:0]        w_input_buffer_filter_rd_component_id;
  logic [(4*16)-1:0] w_input_buffer_filter_rd_data;
  logic [3:0]        w_input_buffer_filter_rd_sample_en;
  logic              w_input_buffer_filter_rd_valid;
  logic              w_input_buffer_filter_release_ready;
  logic [7:0]        w_input_buffer_filter_valid_height;
  logic [7:0]        w_input_buffer_filter_valid_width;
  logic              w_input_buffer_wr_ready;
  logic [1:0]        w_inter_error_code;
  logic              w_inter_error_valid;
  logic              w_inter_init_ready;
  logic [11:0]       w_inter_rd_addr;
  logic [1:0]        w_inter_rd_component_id;
  logic [63:0]       w_inter_rd_data;
  logic [3:0]        w_inter_rd_sample_en;
  logic              w_inter_rd_valid;
  logic              w_inter_wr_ready;
  logic              w_loader_busy;
  logic              w_loader_init_done;
  logic              w_loader_init_error;
  logic [3:0]        w_loader_init_error_code;
  logic [8:0]        w_loader_input_fill_ctu_id;
  logic              w_loader_input_fill_desc_valid;
  logic              w_loader_input_fill_done_valid;
  logic [7:0]        w_loader_input_fill_frame_id;
  logic [7:0]        w_loader_input_fill_valid_height;
  logic [7:0]        w_loader_input_fill_valid_width;
  logic [12:0]       w_loader_input_fill_x_origin;
  logic [12:0]       w_loader_input_fill_y_origin;
  logic              w_loader_input_filter_desc_ready;
  logic [11:0]       w_loader_input_wr_addr;
  logic [1:0]        w_loader_input_wr_component_id;
  logic [63:0]       w_loader_input_wr_data;
  logic [3:0]        w_loader_input_wr_sample_en;
  logic              w_loader_input_wr_valid;
  logic [11:0]       w_loader_inter_init_addr;
  logic [1:0]        w_loader_inter_init_component_id;
  logic [63:0]       w_loader_inter_init_data;
  logic [3:0]        w_loader_inter_init_sample_en;
  logic              w_loader_inter_init_valid;
  logic              w_output_buffer_copy_ready;
  logic [1:0]        w_output_buffer_error_code;
  logic              w_output_buffer_error_valid;
  logic              w_output_buffer_wr_ready;
  logic              w_reader_busy;
  logic              w_reader_edge_ready;
  logic [2:0]        w_reader_error_code;
  logic              w_reader_error_valid;
  logic [11:0]       w_reader_input_rd_addr;
  logic [1:0]        w_reader_input_rd_component_id;
  logic              w_reader_input_rd_en;
  logic              w_reader_result_bank;
  logic [1:0]        w_reader_result_bs;
  logic              w_reader_result_bypass;
  logic [1:0]        w_reader_result_component_id;
  logic [8:0]        w_reader_result_ctu_id;
  logic              w_reader_result_direction;
  logic [11:0]       w_reader_result_edge_id;
  logic [3:0]        w_reader_result_lane_mask;
  logic [5:0]        w_reader_result_qp_p;
  logic [5:0]        w_reader_result_qp_q;
  logic [2:0]        w_reader_result_sp;
  logic [2:0]        w_reader_result_sq;
  logic              w_reader_result_valid;
  logic [7:0]        w_reader_result_x;
  logic [7:0]        w_reader_result_y;
  logic [1023:0]     w_reader_window_data;
  logic [11:0]       w_router_inter_wr_addr;
  logic [1:0]        w_router_inter_wr_component_id;
  logic [63:0]       w_router_inter_wr_data;
  logic [3:0]        w_router_inter_wr_sample_en;
  logic              w_router_inter_wr_valid;
  logic [11:0]       w_router_output_wr_addr;
  logic [1:0]        w_router_output_wr_component_id;
  logic [63:0]       w_router_output_wr_data;
  logic [3:0]        w_router_output_wr_sample_en;
  logic              w_router_output_wr_valid;
  logic              w_router_wr_error_valid;
  logic              w_router_wr_ready;
  logic              w_writer_busy;
  logic              w_writer_done_bank;
  logic [1:0]        w_writer_done_component_id;
  logic [8:0]        w_writer_done_ctu_id;
  logic              w_writer_done_direction;
  logic [11:0]       w_writer_done_edge_id;
  logic              w_writer_done_error;
  logic              w_writer_done_valid;
  logic              w_writer_in_ready;
  logic [11:0]       w_writer_wr_addr;
  logic [1:0]        w_writer_wr_component_id;
  logic [63:0]       w_writer_wr_data;
  logic              w_writer_wr_direction;
  logic [3:0]        w_writer_wr_sample_en;
  logic              w_writer_wr_valid;

  // The two read clients never own Intermediate RAM simultaneously.
  logic              w_inter_rd_en;
  logic  [1:0]       w_inter_rd_component_id;
  logic [11:0]       w_inter_rd_addr;
  logic              w_inter_rd_direction;
  logic  [1:0]       w_inter_rd_x_offset;
  logic              w_reader_inter_rd_en;
  logic  [1:0]       w_reader_inter_rd_comp;
  logic [11:0]       w_reader_inter_rd_addr;
  logic              w_copy_inter_rd_en;
  logic  [1:0]       w_copy_inter_rd_comp;
  logic [11:0]       w_copy_inter_rd_addr;
  logic              w_copy_inter_rd_direction;
  logic  [1:0]       w_copy_inter_rd_x_offset;
  logic              w_start_ready_internal;
  logic  [1:0]       r_reader_x_offset;
  logic              r_input_held;
  logic  [7:0]       r_input_frame_id;
  logic              w_input_filter_fire;
  logic              w_input_release_valid;
  logic              w_input_release_fire;

  assign O_START_READY = w_start_ready_internal && !r_input_held;
  assign O_BUSY = w_ctrl_busy || r_input_held;
  assign O_PHASE = w_ctrl_phase;
  assign O_ERROR_VALID = w_ctrl_error_valid ||
                         w_loader_init_error ||
                         w_cpg_error_valid ||
                         w_reader_error_valid ||
                         w_input_buffer_error ||
                         w_inter_error_valid ||
                         w_output_buffer_error_valid;
  assign O_ERROR_CODE = w_ctrl_error_valid ? w_ctrl_error_code :
                        w_loader_init_error ? w_loader_init_error_code :
                        w_cpg_error_valid ? 4'd13 :
                        w_reader_error_valid ? 4'd14 :
                        (w_input_buffer_error || w_inter_error_valid ||
                         w_output_buffer_error_valid) ? 4'd15 : 4'd0;
  assign O_SAO_CTU_VALID = w_ctrl_sao_ctu_valid;
  assign O_SAO_CTU_ID = w_ctrl_sao_ctu_id;
  assign O_SAO_BANK = w_ctrl_sao_bank;
  assign O_SAO_READ_ENABLE = w_ctrl_sao_read_enable;
  assign O_SAO_RELEASE_READY = w_ctrl_sao_release_ready;

  // CPG accepted edge X is retained while Reader performs RAM reads. The
  // CPG may change its descriptor before the last Reader RAM request.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N)
      r_reader_x_offset <= 2'd0;
    else if (w_ctrl_reader_edge_valid && w_reader_edge_ready)
      r_reader_x_offset <= w_cpg_param_x[1:0];
  end

  assign w_inter_rd_en = w_ctrl_inter_copy_owner ?
                         w_copy_inter_rd_en : w_reader_inter_rd_en;
  assign w_inter_rd_component_id = w_ctrl_inter_copy_owner ?
                                   w_copy_inter_rd_comp : w_reader_inter_rd_comp;
  assign w_inter_rd_addr = w_ctrl_inter_copy_owner ?
                           w_copy_inter_rd_addr : w_reader_inter_rd_addr;
  assign w_inter_rd_direction = w_ctrl_inter_copy_owner ?
                                w_copy_inter_rd_direction : 1'b1;
  assign w_inter_rd_x_offset = w_ctrl_inter_copy_owner ?
                               w_copy_inter_rd_x_offset : r_reader_x_offset;

  // The loader consumes INPUT_FILTER_DESC, which transfers the Input
  // Buffer into FILTERING ownership. Release that buffer only after all
  // vertical edges are completed and the controller starts copying.
  assign w_input_filter_fire = w_input_buffer_filter_desc_valid &&
                               w_loader_input_filter_desc_ready;
  assign w_input_release_valid = r_input_held &&
                                 w_ctrl_inter_copy_owner;
  assign w_input_release_fire = w_input_release_valid &&
                                w_input_buffer_filter_release_ready;
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_input_held <= 1'b0;
      r_input_frame_id <= 8'd0;
    end else begin
      if (w_input_filter_fire) begin
        r_input_held <= 1'b1;
        r_input_frame_id <= w_input_buffer_filter_frame_id;
      end else if (w_input_release_fire) begin
        r_input_held <= 1'b0;
      end
    end
  end

  DBF_FILTER_CONTROLLER U_DBF_FILTER_CONTROLLER (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_START_VALID                  (I_START_VALID && !r_input_held),
    .O_START_READY                  (w_start_ready_internal),
    .I_START_CTU_ID                 (I_START_CTU_ID),
    .I_START_BANK                   (I_START_BANK),
    .I_START_VALID_WIDTH            (I_START_VALID_WIDTH),
    .I_START_VALID_HEIGHT           (I_START_VALID_HEIGHT),
    .O_INIT_ACTIVE                  (w_ctrl_init_active),
    .I_INIT_DONE                    (w_loader_init_done),
    .I_INIT_ERROR                   (w_loader_init_error),
    .O_SCAN_START_VALID             (w_ctrl_scan_start_valid),
    .I_SCAN_START_READY             (w_cpg_scan_start_ready),
    .O_SCAN_START_BANK              (w_ctrl_scan_start_bank),
    .O_SCAN_START_CTU_ID            (w_ctrl_scan_start_ctu_id),
    .I_PARAM_VALID                  (w_cpg_param_valid),
    .O_PARAM_READY                  (w_ctrl_param_ready),
    .I_PARAM_EDGE_ID                (w_cpg_param_edge_id),
    .I_PARAM_CTU_ID                 (w_cpg_param_ctu_id),
    .I_PARAM_BANK                   (w_cpg_param_bank),
    .I_PARAM_COMPONENT_ID           (w_cpg_param_component_id),
    .I_PARAM_DIRECTION              (w_cpg_param_direction),
    .I_SCAN_DONE_VALID              (w_cpg_scan_done_valid),
    .O_SCAN_DONE_READY              (w_ctrl_scan_done_ready),
    .I_SCAN_DONE_CTU_ID             (w_cpg_scan_done_ctu_id),
    .I_SCAN_DONE_BANK               (w_cpg_scan_done_bank),
    .I_CPG_ERROR_VALID              (w_cpg_error_valid),
    .O_READER_EDGE_VALID            (w_ctrl_reader_edge_valid),
    .I_READER_EDGE_READY            (w_reader_edge_ready),
    .I_READER_ERROR_VALID           (w_reader_error_valid),
    .I_WR_DONE_VALID                (w_writer_done_valid),
    .O_WR_DONE_READY                (w_ctrl_wr_done_ready),
    .I_WR_DONE_EDGE_ID              (w_writer_done_edge_id),
    .I_WR_DONE_CTU_ID               (w_writer_done_ctu_id),
    .I_WR_DONE_BANK                 (w_writer_done_bank),
    .I_WR_DONE_COMPONENT_ID         (w_writer_done_component_id),
    .I_WR_DONE_DIRECTION            (w_writer_done_direction),
    .I_WR_DONE_ERROR                (w_writer_done_error),
    .O_COPY_START                   (w_ctrl_copy_start),
    .I_COPY_BUSY                    (w_copy_copy_busy),
    .I_COPY_DONE_VALID              (w_copy_copy_done_valid),
    .O_COPY_DONE_READY              (w_ctrl_copy_done_ready),
    .I_COPY_ERROR                   (w_copy_copy_error),
    .O_COPY_VALID_WIDTH             (w_ctrl_copy_valid_width),
    .O_COPY_VALID_HEIGHT            (w_ctrl_copy_valid_height),
    .O_INTER_COPY_OWNER             (w_ctrl_inter_copy_owner),
    .O_INTER_INIT_MODE              (w_ctrl_inter_init_mode),
    .O_BANK_RELEASE_VALID           (w_ctrl_bank_release_valid),
    .I_BANK_RELEASE_READY           (w_cpg_bank_release_ready),
    .O_BANK_RELEASE_BANK            (w_ctrl_bank_release_bank),
    .O_BANK_RELEASE_CTU_ID          (w_ctrl_bank_release_ctu_id),
    .O_SAO_CTU_VALID                (w_ctrl_sao_ctu_valid),
    .I_SAO_CTU_READY                (I_SAO_CTU_READY),
    .O_SAO_READ_ENABLE              (w_ctrl_sao_read_enable),
    .O_SAO_CTU_ID                   (w_ctrl_sao_ctu_id),
    .O_SAO_BANK                     (w_ctrl_sao_bank),
    .I_SAO_RELEASE_VALID            (I_SAO_RELEASE_VALID),
    .O_SAO_RELEASE_READY            (w_ctrl_sao_release_ready),
    .I_SAO_RELEASE_CTU_ID           (I_SAO_RELEASE_CTU_ID),
    .I_SAO_RELEASE_BANK             (I_SAO_RELEASE_BANK),
    .O_CTU_VALID_WIDTH              (w_ctrl_ctu_valid_width),
    .O_CTU_VALID_HEIGHT             (w_ctrl_ctu_valid_height),
    .O_CTU_ID                       (w_ctrl_ctu_id),
    .O_CTU_BANK                     (w_ctrl_ctu_bank),
    .O_BUSY                         (w_ctrl_busy),
    .O_PHASE                        (w_ctrl_phase),
    .O_ERROR_VALID                  (w_ctrl_error_valid),
    .O_ERROR_CODE                   (w_ctrl_error_code)
  );

  DBF_CODING_PARAMETER_GENERATOR U_DBF_CODING_PARAMETER_GENERATOR (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_CTU_START_VALID              (I_META_CTU_START_VALID),
    .O_CTU_START_READY              (O_META_CTU_START_READY),
    .I_CTU_BANK                     (I_META_CTU_BANK),
    .I_CTU_ID                       (I_META_CTU_ID),
    .I_CTU_QP                       (I_META_CTU_QP),
    .I_CTU_QP_CB                    (I_META_CTU_QP_CB),
    .I_CTU_QP_CR                    (I_META_CTU_QP_CR),
    .I_CTU_VALID_WIDTH              (I_META_CTU_VALID_WIDTH),
    .I_CTU_VALID_HEIGHT             (I_META_CTU_VALID_HEIGHT),
    .I_CTU_DBF_ENABLE               (I_META_CTU_DBF_ENABLE),
    .I_LEAF_VALID                   (I_LEAF_VALID),
    .O_LEAF_READY                   (O_LEAF_READY),
    .I_LEAF_CTU_ID                  (I_LEAF_CTU_ID),
    .I_LEAF_CU_ID                   (I_LEAF_CU_ID),
    .I_LEAF_X_UNIT                  (I_LEAF_X_UNIT),
    .I_LEAF_Y_UNIT                  (I_LEAF_Y_UNIT),
    .I_LEAF_WIDTH_CODE              (I_LEAF_WIDTH_CODE),
    .I_LEAF_HEIGHT_CODE             (I_LEAF_HEIGHT_CODE),
    .I_CTU_METADATA_DONE            (I_CTU_METADATA_DONE),
    .I_DONE_CTU_ID                  (I_DONE_CTU_ID),
    .O_BANK_BUSY                    (O_METADATA_BANK_BUSY),
    .O_METADATA_READY               (O_METADATA_READY),
    .O_BANK_SCAN_FINISHED           (O_BANK_SCAN_FINISHED),
    .I_SCAN_START_VALID             (w_ctrl_scan_start_valid),
    .O_SCAN_START_READY             (w_cpg_scan_start_ready),
    .I_SCAN_BANK                    (w_ctrl_scan_start_bank),
    .I_SCAN_CTU_ID                  (w_ctrl_scan_start_ctu_id),
    .O_PARAM_VALID                  (w_cpg_param_valid),
    .I_PARAM_READY                  (w_ctrl_param_ready),
    .O_PARAM_EDGE_ID                (w_cpg_param_edge_id),
    .O_PARAM_CTU_ID                 (w_cpg_param_ctu_id),
    .O_PARAM_BANK                   (w_cpg_param_bank),
    .O_PARAM_COMPONENT_ID           (w_cpg_param_component_id),
    .O_PARAM_DIRECTION              (w_cpg_param_direction),
    .O_PARAM_X                      (w_cpg_param_x),
    .O_PARAM_Y                      (w_cpg_param_y),
    .O_PARAM_LANE_MASK              (w_cpg_param_lane_mask),
    .O_PARAM_BS                     (w_cpg_param_bs),
    .O_PARAM_SP                     (w_cpg_param_sp),
    .O_PARAM_SQ                     (w_cpg_param_sq),
    .O_PARAM_QP_P                   (w_cpg_param_qp_p),
    .O_PARAM_QP_Q                   (w_cpg_param_qp_q),
    .O_SCAN_DONE_VALID              (w_cpg_scan_done_valid),
    .I_SCAN_DONE_READY              (w_ctrl_scan_done_ready),
    .O_SCAN_DONE_CTU_ID             (w_cpg_scan_done_ctu_id),
    .O_SCAN_DONE_BANK               (w_cpg_scan_done_bank),
    .I_BANK_RELEASE_VALID           (w_ctrl_bank_release_valid),
    .O_BANK_RELEASE_READY           (w_cpg_bank_release_ready),
    .I_BANK_RELEASE_BANK            (w_ctrl_bank_release_bank),
    .I_BANK_RELEASE_CTU_ID          (w_ctrl_bank_release_ctu_id),
    .O_ERROR_VALID                  (w_cpg_error_valid),
    .O_ERROR_SOURCE                 (w_cpg_error_source),
    .O_ERROR_CODE                   (w_cpg_error_code)
  );

  DBF_CTU_INIT_LOADER U_DBF_CTU_INIT_LOADER (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_INIT_ACTIVE                  (w_ctrl_init_active),
    .I_CTU_ID                       (w_ctrl_ctu_id),
    .I_CTU_VALID_WIDTH              (w_ctrl_ctu_valid_width),
    .I_CTU_VALID_HEIGHT             (w_ctrl_ctu_valid_height),
    .O_INIT_DONE                    (w_loader_init_done),
    .O_INIT_ERROR                   (w_loader_init_error),
    .O_INIT_ERROR_CODE              (w_loader_init_error_code),
    .O_BUSY                         (w_loader_busy),
    .I_RECON_DESC_VALID             (I_RECON_DESC_VALID),
    .O_RECON_DESC_READY             (O_RECON_DESC_READY),
    .I_RECON_DESC_BANK_ID           (I_RECON_DESC_BANK_ID),
    .I_RECON_DESC_CTU_ID            (I_RECON_DESC_CTU_ID),
    .I_RECON_DESC_FRAME_ID          (I_RECON_DESC_FRAME_ID),
    .I_RECON_DESC_X_ORIGIN          (I_RECON_DESC_X_ORIGIN),
    .I_RECON_DESC_Y_ORIGIN          (I_RECON_DESC_Y_ORIGIN),
    .I_RECON_DESC_VALID_WIDTH       (I_RECON_DESC_VALID_WIDTH),
    .I_RECON_DESC_VALID_HEIGHT      (I_RECON_DESC_VALID_HEIGHT),
    .O_RECON_RD_EN                  (O_RECON_RD_EN),
    .O_RECON_RD_COMPONENT_ID        (O_RECON_RD_COMPONENT_ID),
    .O_RECON_RD_ADDR                (O_RECON_RD_ADDR),
    .I_RECON_RD_VALID               (I_RECON_RD_VALID),
    .I_RECON_RD_DATA                (I_RECON_RD_DATA),
    .I_RECON_RD_BANK_ID             (I_RECON_RD_BANK_ID),
    .O_INPUT_FILL_DESC_VALID        (w_loader_input_fill_desc_valid),
    .I_INPUT_FILL_DESC_READY        (w_input_buffer_fill_desc_ready),
    .O_INPUT_FILL_CTU_ID            (w_loader_input_fill_ctu_id),
    .O_INPUT_FILL_FRAME_ID          (w_loader_input_fill_frame_id),
    .O_INPUT_FILL_X_ORIGIN          (w_loader_input_fill_x_origin),
    .O_INPUT_FILL_Y_ORIGIN          (w_loader_input_fill_y_origin),
    .O_INPUT_FILL_VALID_WIDTH       (w_loader_input_fill_valid_width),
    .O_INPUT_FILL_VALID_HEIGHT      (w_loader_input_fill_valid_height),
    .O_INPUT_WR_VALID               (w_loader_input_wr_valid),
    .I_INPUT_WR_READY               (w_input_buffer_wr_ready),
    .O_INPUT_WR_COMPONENT_ID        (w_loader_input_wr_component_id),
    .O_INPUT_WR_ADDR                (w_loader_input_wr_addr),
    .O_INPUT_WR_DATA                (w_loader_input_wr_data),
    .O_INPUT_WR_SAMPLE_EN           (w_loader_input_wr_sample_en),
    .O_INPUT_FILL_DONE_VALID        (w_loader_input_fill_done_valid),
    .I_INPUT_FILL_DONE_READY        (w_input_buffer_fill_done_ready),
    .I_INPUT_FILTER_DESC_VALID      (w_input_buffer_filter_desc_valid),
    .O_INPUT_FILTER_DESC_READY      (w_loader_input_filter_desc_ready),
    .I_INPUT_FILTER_CTU_ID          (w_input_buffer_filter_ctu_id),
    .I_INPUT_FILTER_FRAME_ID        (w_input_buffer_filter_frame_id),
    .I_INPUT_FILTER_VALID_WIDTH     (w_input_buffer_filter_valid_width),
    .I_INPUT_FILTER_VALID_HEIGHT    (w_input_buffer_filter_valid_height),
    .I_INPUT_ERROR                  (w_input_buffer_error),
    .O_INTER_INIT_VALID             (w_loader_inter_init_valid),
    .I_INTER_INIT_READY             (w_inter_init_ready),
    .O_INTER_INIT_COMPONENT_ID      (w_loader_inter_init_component_id),
    .O_INTER_INIT_ADDR              (w_loader_inter_init_addr),
    .O_INTER_INIT_DATA              (w_loader_inter_init_data),
    .O_INTER_INIT_SAMPLE_EN         (w_loader_inter_init_sample_en),
    .I_INTER_ERROR_VALID            (w_inter_error_valid),
    .I_INTER_ERROR_CODE             (w_inter_error_code),
    .O_RECON_RELEASE_VALID          (O_RECON_RELEASE_VALID),
    .I_RECON_RELEASE_READY          (I_RECON_RELEASE_READY),
    .O_RECON_RELEASE_BANK_ID        (O_RECON_RELEASE_BANK_ID),
    .O_RECON_RELEASE_CTU_ID         (O_RECON_RELEASE_CTU_ID),
    .O_RECON_RELEASE_FRAME_ID       (O_RECON_RELEASE_FRAME_ID),
    .I_RECON_ERROR                  (I_RECON_ERROR)
  );

  IN_LOOP_INPUT_BUFFER U_IN_LOOP_INPUT_BUFFER (
    .I_CLK                          (I_CLK),
    .I_RESETN                       (I_RST_N),
    .I_CLEAR_ERROR                  (1'b0),
    .I_FILL_DESC_VALID              (w_loader_input_fill_desc_valid),
    .O_FILL_DESC_READY              (w_input_buffer_fill_desc_ready),
    .I_FILL_CTU_ID                  (w_loader_input_fill_ctu_id),
    .I_FILL_FRAME_ID                (w_loader_input_fill_frame_id),
    .I_FILL_CTU_X_ORIGIN            (w_loader_input_fill_x_origin),
    .I_FILL_CTU_Y_ORIGIN            (w_loader_input_fill_y_origin),
    .I_FILL_VALID_WIDTH             (w_loader_input_fill_valid_width),
    .I_FILL_VALID_HEIGHT            (w_loader_input_fill_valid_height),
    .I_WR_VALID                     (w_loader_input_wr_valid),
    .O_WR_READY                     (w_input_buffer_wr_ready),
    .I_WR_COMPONENT_ID              (w_loader_input_wr_component_id),
    .I_WR_ADDR                      (w_loader_input_wr_addr),
    .I_WR_DATA                      (w_loader_input_wr_data),
    .I_WR_SAMPLE_EN                 (w_loader_input_wr_sample_en),
    .I_FILL_DONE_VALID              (w_loader_input_fill_done_valid),
    .O_FILL_DONE_READY              (w_input_buffer_fill_done_ready),
    .O_FILTER_DESC_VALID            (w_input_buffer_filter_desc_valid),
    .I_FILTER_DESC_READY            (w_loader_input_filter_desc_ready),
    .O_FILTER_CTU_ID                (w_input_buffer_filter_ctu_id),
    .O_FILTER_FRAME_ID              (w_input_buffer_filter_frame_id),
    .O_FILTER_CTU_X_ORIGIN          (w_input_buffer_filter_ctu_x_origin),
    .O_FILTER_CTU_Y_ORIGIN          (w_input_buffer_filter_ctu_y_origin),
    .O_FILTER_VALID_WIDTH           (w_input_buffer_filter_valid_width),
    .O_FILTER_VALID_HEIGHT          (w_input_buffer_filter_valid_height),
    .I_FILTER_RD_EN                 (w_reader_input_rd_en),
    .I_FILTER_RD_COMPONENT_ID       (w_reader_input_rd_component_id),
    .I_FILTER_RD_ADDR               (w_reader_input_rd_addr),
    .O_FILTER_RD_VALID              (w_input_buffer_filter_rd_valid),
    .O_FILTER_RD_DATA               (w_input_buffer_filter_rd_data),
    .O_FILTER_RD_SAMPLE_EN          (w_input_buffer_filter_rd_sample_en),
    .O_FILTER_RD_COMPONENT_ID       (w_input_buffer_filter_rd_component_id),
    .O_FILTER_RD_ADDR               (w_input_buffer_filter_rd_addr),
    .I_FILTER_RELEASE_VALID         (w_input_release_valid),
    .O_FILTER_RELEASE_READY         (w_input_buffer_filter_release_ready),
    .I_FILTER_RELEASE_CTU_ID        (w_ctrl_ctu_id),
    .I_FILTER_RELEASE_FRAME_ID      (r_input_frame_id),
    .O_BUFFER_STATE                 (w_input_buffer_buffer_state),
    .O_BUFFER_BUSY                  (O_INPUT_BUFFER_BUSY),
    .O_ACCEPTED_WORD_COUNT          (w_input_buffer_accepted_word_count),
    .O_EXPECTED_WORD_COUNT          (w_input_buffer_expected_word_count),
    .O_ERROR                        (w_input_buffer_error)
  );

  DBF_SAMPLE_WINDOW_READER U_DBF_SAMPLE_WINDOW_READER (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_EDGE_VALID                   (w_ctrl_reader_edge_valid),
    .O_EDGE_READY                   (w_reader_edge_ready),
    .I_EDGE_ID                      (w_cpg_param_edge_id),
    .I_EDGE_CTU_ID                  (w_cpg_param_ctu_id),
    .I_EDGE_BANK                    (w_cpg_param_bank),
    .I_EDGE_COMPONENT_ID            (w_cpg_param_component_id),
    .I_EDGE_DIRECTION               (w_cpg_param_direction),
    .I_EDGE_X                       (w_cpg_param_x),
    .I_EDGE_Y                       (w_cpg_param_y),
    .I_EDGE_LANE_MASK               (w_cpg_param_lane_mask),
    .I_EDGE_BS                      (w_cpg_param_bs),
    .I_EDGE_SP                      (w_cpg_param_sp),
    .I_EDGE_SQ                      (w_cpg_param_sq),
    .I_EDGE_QP_P                    (w_cpg_param_qp_p),
    .I_EDGE_QP_Q                    (w_cpg_param_qp_q),
    .I_CTU_VALID_WIDTH              (w_ctrl_ctu_valid_width),
    .I_CTU_VALID_HEIGHT             (w_ctrl_ctu_valid_height),
    .O_INPUT_RD_EN                  (w_reader_input_rd_en),
    .O_INPUT_RD_COMPONENT_ID        (w_reader_input_rd_component_id),
    .O_INPUT_RD_ADDR                (w_reader_input_rd_addr),
    .I_INPUT_RD_VALID               (w_input_buffer_filter_rd_valid),
    .I_INPUT_RD_DATA                (w_input_buffer_filter_rd_data),
    .I_INPUT_RD_SAMPLE_EN           (w_input_buffer_filter_rd_sample_en),
    .I_INPUT_RD_COMPONENT_ID        (w_input_buffer_filter_rd_component_id),
    .I_INPUT_RD_ADDR                (w_input_buffer_filter_rd_addr),
    .O_INTER_RD_EN                  (w_reader_inter_rd_en),
    .O_INTER_RD_COMPONENT_ID        (w_reader_inter_rd_comp),
    .O_INTER_RD_ADDR                (w_reader_inter_rd_addr),
    .I_INTER_RD_VALID               (w_inter_rd_valid),
    .I_INTER_RD_DATA                (w_inter_rd_data),
    .I_INTER_RD_SAMPLE_EN           (w_inter_rd_sample_en),
    .I_INTER_RD_COMPONENT_ID        (w_inter_rd_component_id),
    .I_INTER_RD_ADDR                (w_inter_rd_addr),
    .O_RESULT_VALID                 (w_reader_result_valid),
    .I_RESULT_READY                 (w_core_in_ready),
    .O_RESULT_BYPASS                (w_reader_result_bypass),
    .O_WINDOW_DATA                  (w_reader_window_data),
    .O_RESULT_EDGE_ID               (w_reader_result_edge_id),
    .O_RESULT_CTU_ID                (w_reader_result_ctu_id),
    .O_RESULT_BANK                  (w_reader_result_bank),
    .O_RESULT_COMPONENT_ID          (w_reader_result_component_id),
    .O_RESULT_DIRECTION             (w_reader_result_direction),
    .O_RESULT_X                     (w_reader_result_x),
    .O_RESULT_Y                     (w_reader_result_y),
    .O_RESULT_LANE_MASK             (w_reader_result_lane_mask),
    .O_RESULT_BS                    (w_reader_result_bs),
    .O_RESULT_SP                    (w_reader_result_sp),
    .O_RESULT_SQ                    (w_reader_result_sq),
    .O_RESULT_QP_P                  (w_reader_result_qp_p),
    .O_RESULT_QP_Q                  (w_reader_result_qp_q),
    .O_BUSY                         (w_reader_busy),
    .O_ERROR_VALID                  (w_reader_error_valid),
    .O_ERROR_CODE                   (w_reader_error_code)
  );

  DBF_UNIFIED_FILTER_CORE U_DBF_UNIFIED_FILTER_CORE (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_IN_VALID                     (w_reader_result_valid),
    .O_IN_READY                     (w_core_in_ready),
    .I_IN_BYPASS                    (w_reader_result_bypass),
    .I_WINDOW_DATA                  (w_reader_window_data),
    .I_EDGE_ID                      (w_reader_result_edge_id),
    .I_CTU_ID                       (w_reader_result_ctu_id),
    .I_BANK                         (w_reader_result_bank),
    .I_COMPONENT_ID                 (w_reader_result_component_id),
    .I_DIRECTION                    (w_reader_result_direction),
    .I_EDGE_X                       (w_reader_result_x),
    .I_EDGE_Y                       (w_reader_result_y),
    .I_LANE_MASK                    (w_reader_result_lane_mask),
    .I_BS                           (w_reader_result_bs),
    .I_SP                           (w_reader_result_sp),
    .I_SQ                           (w_reader_result_sq),
    .I_QP_P                         (w_reader_result_qp_p),
    .I_QP_Q                         (w_reader_result_qp_q),
    .I_BETA_OFFSET_DIV2             (I_BETA_OFFSET_DIV2),
    .I_TC_OFFSET_DIV2               (I_TC_OFFSET_DIV2),
    .O_RESULT_VALID                 (w_core_result_valid),
    .I_RESULT_READY                 (w_writer_in_ready),
    .O_RESULT_BYPASS                (w_core_result_bypass),
    .O_FILTERED_WINDOW              (w_core_filtered_window),
    .O_SAMPLE_WRITE_MASK            (w_core_sample_write_mask),
    .O_RESULT_EDGE_ID               (w_core_result_edge_id),
    .O_RESULT_CTU_ID                (w_core_result_ctu_id),
    .O_RESULT_BANK                  (w_core_result_bank),
    .O_RESULT_COMPONENT_ID          (w_core_result_component_id),
    .O_RESULT_DIRECTION             (w_core_result_direction),
    .O_RESULT_X                     (w_core_result_x),
    .O_RESULT_Y                     (w_core_result_y),
    .O_RESULT_LANE_MASK             (w_core_result_lane_mask),
    .O_FILTER_MODE                  (w_core_filter_mode),
    .O_CONDITION_FLAGS              (w_core_condition_flags),
    .O_ERROR                        (w_core_error),
    .O_BUSY                         (w_core_busy)
  );

  DBF_OUTPUT_WRITER U_DBF_OUTPUT_WRITER (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_IN_VALID                     (w_core_result_valid),
    .O_IN_READY                     (w_writer_in_ready),
    .I_IN_BYPASS                    (w_core_result_bypass),
    .I_FILTERED_WINDOW              (w_core_filtered_window),
    .I_SAMPLE_WRITE_MASK            (w_core_sample_write_mask),
    .I_EDGE_ID                      (w_core_result_edge_id),
    .I_CTU_ID                       (w_core_result_ctu_id),
    .I_BANK                         (w_core_result_bank),
    .I_COMPONENT_ID                 (w_core_result_component_id),
    .I_DIRECTION                    (w_core_result_direction),
    .I_EDGE_X                       (w_core_result_x),
    .I_EDGE_Y                       (w_core_result_y),
    .I_LANE_MASK                    (w_core_result_lane_mask),
    .I_CTU_VALID_WIDTH              (w_ctrl_ctu_valid_width),
    .I_CTU_VALID_HEIGHT             (w_ctrl_ctu_valid_height),
    .I_ERROR                        (w_core_error),
    .O_WR_VALID                     (w_writer_wr_valid),
    .I_WR_READY                     (w_router_wr_ready),
    .O_WR_DIRECTION                 (w_writer_wr_direction),
    .O_WR_COMPONENT_ID              (w_writer_wr_component_id),
    .O_WR_ADDR                      (w_writer_wr_addr),
    .O_WR_DATA                      (w_writer_wr_data),
    .O_WR_SAMPLE_EN                 (w_writer_wr_sample_en),
    .I_WR_ERROR_VALID               (w_router_wr_error_valid),
    .O_DONE_VALID                   (w_writer_done_valid),
    .I_DONE_READY                   (w_ctrl_wr_done_ready),
    .O_DONE_EDGE_ID                 (w_writer_done_edge_id),
    .O_DONE_CTU_ID                  (w_writer_done_ctu_id),
    .O_DONE_BANK                    (w_writer_done_bank),
    .O_DONE_COMPONENT_ID            (w_writer_done_component_id),
    .O_DONE_DIRECTION               (w_writer_done_direction),
    .O_DONE_ERROR                   (w_writer_done_error),
    .O_BUSY                         (w_writer_busy)
  );

  DBF_BUFFER_WRITE_ROUTER U_DBF_BUFFER_WRITE_ROUTER (
    .I_WR_VALID                     (w_writer_wr_valid),
    .O_WR_READY                     (w_router_wr_ready),
    .I_WR_DIRECTION                 (w_writer_wr_direction),
    .I_WR_COMPONENT_ID              (w_writer_wr_component_id),
    .I_WR_ADDR                      (w_writer_wr_addr),
    .I_WR_DATA                      (w_writer_wr_data),
    .I_WR_SAMPLE_EN                 (w_writer_wr_sample_en),
    .O_INTER_WR_VALID               (w_router_inter_wr_valid),
    .I_INTER_WR_READY               (w_inter_wr_ready),
    .O_INTER_WR_COMPONENT_ID        (w_router_inter_wr_component_id),
    .O_INTER_WR_ADDR                (w_router_inter_wr_addr),
    .O_INTER_WR_DATA                (w_router_inter_wr_data),
    .O_INTER_WR_SAMPLE_EN           (w_router_inter_wr_sample_en),
    .I_INTER_ERROR_VALID            (w_inter_error_valid),
    .I_INTER_ERROR_CODE             (w_inter_error_code),
    .O_OUTPUT_WR_VALID              (w_router_output_wr_valid),
    .I_OUTPUT_WR_READY              (w_output_buffer_wr_ready),
    .O_OUTPUT_WR_COMPONENT_ID       (w_router_output_wr_component_id),
    .O_OUTPUT_WR_ADDR               (w_router_output_wr_addr),
    .O_OUTPUT_WR_DATA               (w_router_output_wr_data),
    .O_OUTPUT_WR_SAMPLE_EN          (w_router_output_wr_sample_en),
    .I_OUTPUT_ERROR_VALID           (w_output_buffer_error_valid),
    .I_OUTPUT_ERROR_CODE            (w_output_buffer_error_code),
    .O_WR_ERROR_VALID               (w_router_wr_error_valid)
  );

  DBF_INTERMEDIATE_SAMPLE_BUFFER U_DBF_INTERMEDIATE_SAMPLE_BUFFER (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_INIT_MODE                    (w_ctrl_inter_init_mode),
    .I_INIT_VALID                   (w_loader_inter_init_valid),
    .O_INIT_READY                   (w_inter_init_ready),
    .I_INIT_COMPONENT_ID            (w_loader_inter_init_component_id),
    .I_INIT_ADDR                    (w_loader_inter_init_addr),
    .I_INIT_DATA                    (w_loader_inter_init_data),
    .I_INIT_SAMPLE_EN               (w_loader_inter_init_sample_en),
    .I_WR_VALID                     (w_router_inter_wr_valid),
    .O_WR_READY                     (w_inter_wr_ready),
    .I_WR_COMPONENT_ID              (w_router_inter_wr_component_id),
    .I_WR_ADDR                      (w_router_inter_wr_addr),
    .I_WR_DATA                      (w_router_inter_wr_data),
    .I_WR_SAMPLE_EN                 (w_router_inter_wr_sample_en),
    .I_RD_EN                        (w_inter_rd_en),
    .I_RD_COMPONENT_ID              (w_inter_rd_component_id),
    .I_RD_ADDR                      (w_inter_rd_addr),
    .I_RD_DIRECTION                 (w_inter_rd_direction),
    .I_RD_X_OFFSET                  (w_inter_rd_x_offset),
    .O_RD_VALID                     (w_inter_rd_valid),
    .O_RD_DATA                      (w_inter_rd_data),
    .O_RD_SAMPLE_EN                 (w_inter_rd_sample_en),
    .O_RD_COMPONENT_ID              (w_inter_rd_component_id),
    .O_RD_ADDR                      (w_inter_rd_addr),
    .O_ERROR_VALID                  (w_inter_error_valid),
    .O_ERROR_CODE                   (w_inter_error_code)
  );

  DBF_BUFFER_COPY_ENGINE U_DBF_BUFFER_COPY_ENGINE (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_COPY_START                   (w_ctrl_copy_start),
    .I_CTU_LUMA_WIDTH               (w_ctrl_copy_valid_width),
    .I_CTU_LUMA_HEIGHT              (w_ctrl_copy_valid_height),
    .O_COPY_BUSY                    (w_copy_copy_busy),
    .O_COPY_DONE_VALID              (w_copy_copy_done_valid),
    .I_COPY_DONE_READY              (w_ctrl_copy_done_ready),
    .O_COPY_ERROR                   (w_copy_copy_error),
    .O_COPY_ERROR_CODE              (w_copy_copy_error_code),
    .O_INTER_RD_EN                  (w_copy_inter_rd_en),
    .O_INTER_RD_COMPONENT_ID        (w_copy_inter_rd_comp),
    .O_INTER_RD_ADDR                (w_copy_inter_rd_addr),
    .O_INTER_RD_DIRECTION           (w_copy_inter_rd_direction),
    .O_INTER_RD_X_OFFSET            (w_copy_inter_rd_x_offset),
    .I_INTER_RD_VALID               (w_inter_rd_valid),
    .I_INTER_RD_DATA                (w_inter_rd_data),
    .I_INTER_RD_SAMPLE_EN           (w_inter_rd_sample_en),
    .I_INTER_RD_COMPONENT_ID        (w_inter_rd_component_id),
    .I_INTER_RD_ADDR                (w_inter_rd_addr),
    .I_INTER_ERROR_VALID            (w_inter_error_valid),
    .O_OUTPUT_COPY_MODE             (w_copy_output_copy_mode),
    .O_OUTPUT_COPY_VALID            (w_copy_output_copy_valid),
    .I_OUTPUT_COPY_READY            (w_output_buffer_copy_ready),
    .O_OUTPUT_COPY_COMPONENT_ID     (w_copy_output_copy_component_id),
    .O_OUTPUT_COPY_ADDR             (w_copy_output_copy_addr),
    .O_OUTPUT_COPY_DATA             (w_copy_output_copy_data),
    .O_OUTPUT_COPY_SAMPLE_EN        (w_copy_output_copy_sample_en),
    .I_OUTPUT_ERROR_VALID           (w_output_buffer_error_valid)
  );

  DBF_OUTPUT_SAMPLE_BUFFER U_DBF_OUTPUT_SAMPLE_BUFFER (
    .I_CLK                          (I_CLK),
    .I_RST_N                        (I_RST_N),
    .I_COPY_MODE                    (w_copy_output_copy_mode),
    .I_COPY_VALID                   (w_copy_output_copy_valid),
    .O_COPY_READY                   (w_output_buffer_copy_ready),
    .I_COPY_COMPONENT_ID            (w_copy_output_copy_component_id),
    .I_COPY_ADDR                    (w_copy_output_copy_addr),
    .I_COPY_DATA                    (w_copy_output_copy_data),
    .I_COPY_SAMPLE_EN               (w_copy_output_copy_sample_en),
    .I_WR_VALID                     (w_router_output_wr_valid),
    .O_WR_READY                     (w_output_buffer_wr_ready),
    .I_WR_COMPONENT_ID              (w_router_output_wr_component_id),
    .I_WR_ADDR                      (w_router_output_wr_addr),
    .I_WR_DATA                      (w_router_output_wr_data),
    .I_WR_SAMPLE_EN                 (w_router_output_wr_sample_en),
    .I_SAO_RD_EN                    (I_SAO_RD_EN && w_ctrl_sao_read_enable),
    .I_SAO_RD_COMPONENT_ID          (I_SAO_RD_COMPONENT_ID),
    .I_SAO_RD_ADDR                  (I_SAO_RD_ADDR),
    .I_SAO_RD_SAMPLE_EN             (I_SAO_RD_SAMPLE_EN),
    .O_SAO_RD_VALID                 (O_SAO_RD_VALID),
    .O_SAO_RD_DATA                  (O_SAO_RD_DATA),
    .O_SAO_RD_SAMPLE_EN             (O_SAO_RD_SAMPLE_EN),
    .O_SAO_RD_COMPONENT_ID          (O_SAO_RD_COMPONENT_ID),
    .O_SAO_RD_ADDR                  (O_SAO_RD_ADDR),
    .O_ERROR_VALID                  (w_output_buffer_error_valid),
    .O_ERROR_CODE                   (w_output_buffer_error_code)
  );

endmodule: DBF_TOP
