//-----------------------------------------------------------
// Description: This module integrates the H.266/VVC horizontal angular luma and chroma prediction core.
// The core shares reference preparation, negative-reference extension, raster control, and four
// horizontal index generators between luma and chroma. Luma uses four parallel four-tap interpolation
// lanes, while chroma uses four parallel two-tap bilinear lanes. Both paths keep the same prediction
// latency and feed the common four-pixel output pipeline.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_H_PRED_CORE #(
  parameter PARA_PIXEL_WD        = 10,
  parameter PARA_CONTAINER_WD    = 16,
  parameter PARA_REF_NUM         = 64,
  parameter PARA_NEG_NUM         = 32,
  parameter PARA_COORD_WD        = 5,
  parameter PARA_IIDX_WD         = 11,
  parameter PARA_FIFO_DEPTH      = 8,
  parameter PARA_META_LATENCY    = 5
)
(
  input                                                 I_CLK,
  input                                                 I_RESETN,

  input                                                 I_VALID,
  output logic                                          O_READY,
  input [2:0]                                           I_TU_WIDTH_CODE,
  input [2:0]                                           I_TU_HEIGHT_CODE,
  input [1:0]                                           I_COMPONENT_ID,
  input signed [7:0]                                    I_MAPPED_MODE,

  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]          I_UNFILT_TOP_REF,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]          I_UNFILT_LEFT_REF,
  input [PARA_CONTAINER_WD-1:0]                         I_UNFILT_TL_REF,

  input                                                 I_FILTERED_VALID,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]          I_FILTERED_TOP_REF,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]          I_FILTERED_LEFT_REF,
  input [PARA_CONTAINER_WD-1:0]                         I_FILTERED_TL_REF,

  output logic                                          O_BUSY,
  output logic                                          O_DONE,

  output logic                                          O_VALID,
  input                                                 I_READY,
  output logic [(4*PARA_PIXEL_WD)-1:0]                  O_PRED_SAMPLE,
  output logic [3:0]                                    O_LANE_VALID,
  output logic [PARA_COORD_WD-1:0]                      O_X_BASE,
  output logic [PARA_COORD_WD-1:0]                      O_Y,
  output logic                                          O_ROW_LAST,
  output logic                                          O_LAST
);

localparam [1:0] PARA_COMPONENT_Y  = 2'b00;
localparam [1:0] PARA_COMPONENT_CB = 2'b01;
localparam [1:0] PARA_COMPONENT_CR = 2'b10;
localparam integer PARA_SIZE_WD = 6;

logic w_mode_valid;
logic signed [10:0] w_intra_pred_angle;
logic [14:0] w_inv_angle_abs;
logic w_angle_negative;
logic w_angle_zero;
logic w_ref_filter_flag;
logic w_orientation_valid;
logic w_size_valid;

logic w_ref_ready;
logic w_use_filtered;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] w_main_ref;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] w_side_ref;
logic [PARA_PIXEL_WD-1:0] w_tl_ref;
logic [6:0] w_main_ref_length;
logic [PARA_PIXEL_WD-1:0] w_main_ref_endpoint;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] w_main_ref_padded;

logic w_start;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] r_main_ref;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] r_side_ref;
logic [PARA_PIXEL_WD-1:0] r_tl_ref;
logic [14:0] r_inv_angle_abs;
logic r_use_neg_ref;

logic [1:0] r_component_id;
logic w_component_valid;
logic w_luma_index_valid;
logic w_chroma_index_valid;


logic w_control_busy;
logic w_control_done;
logic w_neg_ext_start;
logic [PARA_SIZE_WD-1:0] w_neg_ext_size;
logic w_ext_ref_load;
logic w_control_issue_valid;
logic [PARA_COORD_WD-1:0] w_control_x_base;
logic [PARA_COORD_WD-1:0] w_control_y;
logic w_control_row_last;
logic w_control_tu_last;
logic w_interp_filter_flag;
logic signed [10:0] w_control_angle;

logic w_neg_ext_valid;
logic [(PARA_NEG_NUM*PARA_PIXEL_WD)-1:0] w_neg_ref;
logic [PARA_NEG_NUM-1:0] w_neg_active_mask;

logic w_ext_ref_valid;
logic [((PARA_NEG_NUM+1+PARA_REF_NUM)*PARA_PIXEL_WD)-1:0] w_ext_ref;

logic w_output_can_issue;
logic w_output_issue_accept;
logic w_last_beat_accept;
logic w_issue_fire;

logic w_index_valid;
logic signed [PARA_IIDX_WD-1:0] w_iidx_0;
logic signed [PARA_IIDX_WD-1:0] w_iidx_1;
logic signed [PARA_IIDX_WD-1:0] w_iidx_2;
logic signed [PARA_IIDX_WD-1:0] w_iidx_3;
logic [4:0] w_ifact_0;
logic [4:0] w_ifact_1;
logic [4:0] w_ifact_2;
logic [4:0] w_ifact_3;

logic [PARA_COORD_WD-1:0] r_issue_y_stage1;
logic signed [PARA_IIDX_WD-1:0] w_y_stage1_ext;
logic signed [PARA_IIDX_WD-1:0] w_ref_base_0;
logic signed [PARA_IIDX_WD-1:0] w_ref_base_1;
logic signed [PARA_IIDX_WD-1:0] w_ref_base_2;
logic signed [PARA_IIDX_WD-1:0] w_ref_base_3;

logic signed [7:0] w_coeff_0_0;
logic signed [7:0] w_coeff_0_1;
logic signed [7:0] w_coeff_0_2;
logic signed [7:0] w_coeff_0_3;
logic signed [7:0] w_coeff_1_0;
logic signed [7:0] w_coeff_1_1;
logic signed [7:0] w_coeff_1_2;
logic signed [7:0] w_coeff_1_3;
logic signed [7:0] w_coeff_2_0;
logic signed [7:0] w_coeff_2_1;
logic signed [7:0] w_coeff_2_2;
logic signed [7:0] w_coeff_2_3;
logic signed [7:0] w_coeff_3_0;
logic signed [7:0] w_coeff_3_1;
logic signed [7:0] w_coeff_3_2;
logic signed [7:0] w_coeff_3_3;

logic w_luma_lane_valid_0;
logic w_luma_lane_valid_1;
logic w_luma_lane_valid_2;
logic w_luma_lane_valid_3;
logic [PARA_PIXEL_WD-1:0] w_luma_pred_sample_0;
logic [PARA_PIXEL_WD-1:0] w_luma_pred_sample_1;
logic [PARA_PIXEL_WD-1:0] w_luma_pred_sample_2;
logic [PARA_PIXEL_WD-1:0] w_luma_pred_sample_3;

logic w_chroma_lane_valid_0;
logic w_chroma_lane_valid_1;
logic w_chroma_lane_valid_2;
logic w_chroma_lane_valid_3;
logic [PARA_PIXEL_WD-1:0] w_chroma_pred_sample_0;
logic [PARA_PIXEL_WD-1:0] w_chroma_pred_sample_1;
logic [PARA_PIXEL_WD-1:0] w_chroma_pred_sample_2;
logic [PARA_PIXEL_WD-1:0] w_chroma_pred_sample_3;

logic w_lane_valid_0;
logic w_lane_valid_1;
logic w_lane_valid_2;
logic w_lane_valid_3;
logic [PARA_PIXEL_WD-1:0] w_pred_sample_0;
logic [PARA_PIXEL_WD-1:0] w_pred_sample_1;
logic [PARA_PIXEL_WD-1:0] w_pred_sample_2;
logic [PARA_PIXEL_WD-1:0] w_pred_sample_3;

logic w_output_valid;
logic [(4*PARA_PIXEL_WD)-1:0] w_output_pred_data;
logic [PARA_COORD_WD-1:0] w_output_x_base;
logic [PARA_COORD_WD-1:0] w_output_y;
logic w_output_row_last;
logic w_output_tu_last;

genvar gen_main_ref;

assign w_orientation_valid = I_MAPPED_MODE < 8'sd34;
assign w_size_valid = (I_TU_WIDTH_CODE >= 3'd2) && (I_TU_WIDTH_CODE <= 3'd5) &&
                      (I_TU_HEIGHT_CODE >= 3'd2) && (I_TU_HEIGHT_CODE <= 3'd5);

always_comb begin
  w_main_ref_length = 7'd0;
  w_main_ref_endpoint = '0;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_main_ref_length = 7'd8;
      w_main_ref_endpoint = w_main_ref[(7*PARA_PIXEL_WD) +: PARA_PIXEL_WD];
    end
    3'd3: begin
      w_main_ref_length = 7'd16;
      w_main_ref_endpoint = w_main_ref[(15*PARA_PIXEL_WD) +: PARA_PIXEL_WD];
    end
    3'd4: begin
      w_main_ref_length = 7'd32;
      w_main_ref_endpoint = w_main_ref[(31*PARA_PIXEL_WD) +: PARA_PIXEL_WD];
    end
    3'd5: begin
      w_main_ref_length = 7'd64;
      w_main_ref_endpoint = w_main_ref[(63*PARA_PIXEL_WD) +: PARA_PIXEL_WD];
    end
    default: begin
      w_main_ref_length = 7'd0;
      w_main_ref_endpoint = '0;
    end
  endcase
end

generate
  for (gen_main_ref = 0; gen_main_ref < PARA_REF_NUM; gen_main_ref = gen_main_ref + 1) begin: GEN_MAIN_REF_PAD
    assign w_main_ref_padded[(gen_main_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD] =
      (gen_main_ref < w_main_ref_length) ? w_main_ref[(gen_main_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD] : w_main_ref_endpoint;
  end
endgenerate

assign w_component_valid = (I_COMPONENT_ID == PARA_COMPONENT_Y) || (I_COMPONENT_ID == PARA_COMPONENT_CB) || (I_COMPONENT_ID == PARA_COMPONENT_CR);
assign O_READY = !w_control_busy && !w_control_done && w_mode_valid && w_orientation_valid && w_size_valid && w_component_valid && w_ref_ready;
assign w_start = I_VALID && O_READY;
assign w_issue_fire = w_control_issue_valid && w_output_can_issue;
assign w_luma_index_valid = w_index_valid && (r_component_id == PARA_COMPONENT_Y);
assign w_chroma_index_valid = w_index_valid && ((r_component_id == PARA_COMPONENT_CB) || (r_component_id == PARA_COMPONENT_CR));

always_ff @ (posedge I_CLK) begin
  if (w_start) begin
    r_main_ref <= w_main_ref_padded;
    r_side_ref <= w_side_ref;
    r_tl_ref <= w_tl_ref;
    r_inv_angle_abs <= w_inv_angle_abs;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_use_neg_ref <= 1'b0;
  else if (w_start)
    r_use_neg_ref <= w_angle_negative;
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_component_id <= PARA_COMPONENT_Y;
  else if (w_start)
    r_component_id <= I_COMPONENT_ID;
end

always_ff @ (posedge I_CLK) begin
  if (w_issue_fire)
    r_issue_y_stage1 <= w_control_y;
end

assign w_y_stage1_ext = {{(PARA_IIDX_WD-PARA_COORD_WD){1'b0}}, r_issue_y_stage1};
assign w_ref_base_0 = w_y_stage1_ext + w_iidx_0;
assign w_ref_base_1 = w_y_stage1_ext + w_iidx_1;
assign w_ref_base_2 = w_y_stage1_ext + w_iidx_2;
assign w_ref_base_3 = w_y_stage1_ext + w_iidx_3;

INTRA_ANGULAR_ANGLE_LUT u_intra_angular_angle_lut (
  .I_ANGULAR_MODE       (I_MAPPED_MODE),
  .O_MODE_VALID         (w_mode_valid),
  .O_INTRA_PRED_ANGLE   (w_intra_pred_angle),
  .O_INV_ANGLE_ABS      (w_inv_angle_abs),
  .O_ANGLE_NEGATIVE     (w_angle_negative),
  .O_ANGLE_ZERO         (w_angle_zero),
  .O_REF_FILTER_FLAG    (w_ref_filter_flag)
);

INTRA_ANGULAR_REF_SELECT #(
  .PARA_PIXEL_WD      (PARA_PIXEL_WD),
  .PARA_CONTAINER_WD  (PARA_CONTAINER_WD),
  .PARA_REF_NUM       (PARA_REF_NUM),
  .PARA_VERTICAL_CORE (0)
)
u_intra_angular_ref_select (
  .I_COMPONENT_ID      (I_COMPONENT_ID),
  .I_TU_WIDTH_CODE     (I_TU_WIDTH_CODE),
  .I_TU_HEIGHT_CODE    (I_TU_HEIGHT_CODE),
  .I_REF_FILTER_FLAG   (w_ref_filter_flag),
  .I_UNFILT_TOP_REF    (I_UNFILT_TOP_REF),
  .I_UNFILT_LEFT_REF   (I_UNFILT_LEFT_REF),
  .I_UNFILT_TL_REF     (I_UNFILT_TL_REF),
  .I_FILTERED_VALID    (I_FILTERED_VALID),
  .I_FILTERED_TOP_REF  (I_FILTERED_TOP_REF),
  .I_FILTERED_LEFT_REF (I_FILTERED_LEFT_REF),
  .I_FILTERED_TL_REF   (I_FILTERED_TL_REF),
  .O_REF_READY         (w_ref_ready),
  .O_USE_FILTERED      (w_use_filtered),
  .O_MAIN_REF          (w_main_ref),
  .O_SIDE_REF          (w_side_ref),
  .O_TL_REF            (w_tl_ref)
);

INTRA_ANGULAR_H_CONTROL #(
  .PARA_COORD_WD (PARA_COORD_WD),
  .PARA_SIZE_WD  (PARA_SIZE_WD),
  .PARA_MODE_WD  (8),
  .PARA_ANGLE_WD (11)
)
u_intra_angular_h_control (
  .I_CLK                (I_CLK),
  .I_RESETN             (I_RESETN),
  .I_START              (w_start),
  .I_WIDTH_CODE         (I_TU_WIDTH_CODE),
  .I_HEIGHT_CODE        (I_TU_HEIGHT_CODE),
  .I_MAPPED_MODE        (I_MAPPED_MODE),
  .I_INTRA_PRED_ANGLE   (w_intra_pred_angle),
  .I_ANGLE_NEGATIVE     (w_angle_negative),
  .I_REF_FILTER_FLAG    (w_ref_filter_flag),
  .I_REF_READY          (1'b1),
  .I_NEG_EXT_VALID      (w_neg_ext_valid),
  .I_OUTPUT_CAN_ISSUE   (w_output_can_issue),
  .I_LAST_BEAT_ACCEPT   (w_last_beat_accept),
  .O_BUSY               (w_control_busy),
  .O_DONE               (w_control_done),
  .O_NEG_EXT_START      (w_neg_ext_start),
  .O_NEG_EXT_SIZE       (w_neg_ext_size),
  .O_EXT_REF_LOAD       (w_ext_ref_load),
  .O_ISSUE_VALID        (w_control_issue_valid),
  .O_X_BASE             (w_control_x_base),
  .O_Y                  (w_control_y),
  .O_ROW_LAST           (w_control_row_last),
  .O_TU_LAST            (w_control_tu_last),
  .O_INTERP_FILTER_FLAG (w_interp_filter_flag),
  .O_INTRA_PRED_ANGLE   (w_control_angle)
);

INTRA_ANGULAR_NEG_REF_EXTENSION #(
  .PARA_PIXEL_WD (PARA_PIXEL_WD),
  .PARA_REF_NUM  (PARA_REF_NUM),
  .PARA_NEG_NUM  (PARA_NEG_NUM)
)
u_intra_angular_neg_ref_extension (
  .I_CLK           (I_CLK),
  .I_RESETN        (I_RESETN),
  .I_VALID         (w_neg_ext_start),
  .I_INV_ANGLE_ABS (r_inv_angle_abs),
  .I_EXT_SIZE      (w_neg_ext_size),
  .I_SIDE_REF      (r_side_ref),
  .O_VALID         (w_neg_ext_valid),
  .O_NEG_REF       (w_neg_ref),
  .O_ACTIVE_MASK   (w_neg_active_mask)
);

INTRA_ANGULAR_EXT_REF_BANK #(
  .PARA_PIXEL_WD (PARA_PIXEL_WD),
  .PARA_MAIN_NUM (PARA_REF_NUM),
  .PARA_NEG_NUM  (PARA_NEG_NUM)
)
u_intra_angular_ext_ref_bank (
  .I_CLK         (I_CLK),
  .I_RESETN      (I_RESETN),
  .I_CLEAR       (w_start),
  .I_LOAD_VALID  (w_ext_ref_load),
  .I_USE_NEG_REF (r_use_neg_ref),
  .I_NEG_REF     (w_neg_ref),
  .I_MAIN_REF    (r_main_ref),
  .I_TL_REF      (r_tl_ref),
  .O_VALID       (w_ext_ref_valid),
  .O_EXT_REF     (w_ext_ref)
);

INTRA_ANGULAR_H_INDEX_GEN #(
  .PARA_COORD_WD (PARA_COORD_WD),
  .PARA_ANGLE_WD (11),
  .PARA_IIDX_WD  (PARA_IIDX_WD)
)
u_intra_angular_h_index_gen (
  .I_CLK              (I_CLK),
  .I_RESETN           (I_RESETN),
  .I_VALID            (w_issue_fire),
  .I_X_BASE           (w_control_x_base),
  .I_INTRA_PRED_ANGLE (w_control_angle),
  .O_VALID            (w_index_valid),
  .O_IIDX_0           (w_iidx_0),
  .O_IIDX_1           (w_iidx_1),
  .O_IIDX_2           (w_iidx_2),
  .O_IIDX_3           (w_iidx_3),
  .O_IFACT_0          (w_ifact_0),
  .O_IFACT_1          (w_ifact_1),
  .O_IFACT_2          (w_ifact_2),
  .O_IFACT_3          (w_ifact_3)
);

INTRA_ANGULAR_COEFF_LUT u_intra_angular_coeff_lut_0 (
  .I_IFACT              (w_ifact_0),
  .I_INTERP_FILTER_FLAG (w_interp_filter_flag),
  .O_COEFF_0            (w_coeff_0_0),
  .O_COEFF_1            (w_coeff_0_1),
  .O_COEFF_2            (w_coeff_0_2),
  .O_COEFF_3            (w_coeff_0_3)
);

INTRA_ANGULAR_COEFF_LUT u_intra_angular_coeff_lut_1 (
  .I_IFACT              (w_ifact_1),
  .I_INTERP_FILTER_FLAG (w_interp_filter_flag),
  .O_COEFF_0            (w_coeff_1_0),
  .O_COEFF_1            (w_coeff_1_1),
  .O_COEFF_2            (w_coeff_1_2),
  .O_COEFF_3            (w_coeff_1_3)
);

INTRA_ANGULAR_COEFF_LUT u_intra_angular_coeff_lut_2 (
  .I_IFACT              (w_ifact_2),
  .I_INTERP_FILTER_FLAG (w_interp_filter_flag),
  .O_COEFF_0            (w_coeff_2_0),
  .O_COEFF_1            (w_coeff_2_1),
  .O_COEFF_2            (w_coeff_2_2),
  .O_COEFF_3            (w_coeff_2_3)
);

INTRA_ANGULAR_COEFF_LUT u_intra_angular_coeff_lut_3 (
  .I_IFACT              (w_ifact_3),
  .I_INTERP_FILTER_FLAG (w_interp_filter_flag),
  .O_COEFF_0            (w_coeff_3_0),
  .O_COEFF_1            (w_coeff_3_1),
  .O_COEFF_2            (w_coeff_3_2),
  .O_COEFF_3            (w_coeff_3_3)
);

INTRA_ANGULAR_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_COEFF_WD   (8),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_interp_lane_0 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_luma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_0),
  .I_EXT_REF      (w_ext_ref),
  .I_COEFF_0      (w_coeff_0_0),
  .I_COEFF_1      (w_coeff_0_1),
  .I_COEFF_2      (w_coeff_0_2),
  .I_COEFF_3      (w_coeff_0_3),
  .O_VALID        (w_luma_lane_valid_0),
  .O_PRED_SAMPLE  (w_luma_pred_sample_0)
);

INTRA_ANGULAR_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_COEFF_WD   (8),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_interp_lane_1 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_luma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_1),
  .I_EXT_REF      (w_ext_ref),
  .I_COEFF_0      (w_coeff_1_0),
  .I_COEFF_1      (w_coeff_1_1),
  .I_COEFF_2      (w_coeff_1_2),
  .I_COEFF_3      (w_coeff_1_3),
  .O_VALID        (w_luma_lane_valid_1),
  .O_PRED_SAMPLE  (w_luma_pred_sample_1)
);

INTRA_ANGULAR_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_COEFF_WD   (8),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_interp_lane_2 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_luma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_2),
  .I_EXT_REF      (w_ext_ref),
  .I_COEFF_0      (w_coeff_2_0),
  .I_COEFF_1      (w_coeff_2_1),
  .I_COEFF_2      (w_coeff_2_2),
  .I_COEFF_3      (w_coeff_2_3),
  .O_VALID        (w_luma_lane_valid_2),
  .O_PRED_SAMPLE  (w_luma_pred_sample_2)
);

INTRA_ANGULAR_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_COEFF_WD   (8),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_interp_lane_3 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_luma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_3),
  .I_EXT_REF      (w_ext_ref),
  .I_COEFF_0      (w_coeff_3_0),
  .I_COEFF_1      (w_coeff_3_1),
  .I_COEFF_2      (w_coeff_3_2),
  .I_COEFF_3      (w_coeff_3_3),
  .O_VALID        (w_luma_lane_valid_3),
  .O_PRED_SAMPLE  (w_luma_pred_sample_3)
);

INTRA_ANGULAR_CHROMA_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_chroma_interp_lane_0 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_chroma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_0),
  .I_EXT_REF      (w_ext_ref),
  .I_IFACT        (w_ifact_0),
  .O_VALID        (w_chroma_lane_valid_0),
  .O_PRED_SAMPLE  (w_chroma_pred_sample_0)
);

INTRA_ANGULAR_CHROMA_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_chroma_interp_lane_1 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_chroma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_1),
  .I_EXT_REF      (w_ext_ref),
  .I_IFACT        (w_ifact_1),
  .O_VALID        (w_chroma_lane_valid_1),
  .O_PRED_SAMPLE  (w_chroma_pred_sample_1)
);

INTRA_ANGULAR_CHROMA_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_chroma_interp_lane_2 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_chroma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_2),
  .I_EXT_REF      (w_ext_ref),
  .I_IFACT        (w_ifact_2),
  .O_VALID        (w_chroma_lane_valid_2),
  .O_PRED_SAMPLE  (w_chroma_pred_sample_2)
);

INTRA_ANGULAR_CHROMA_INTERP_LANE #(
  .PARA_PIXEL_WD   (PARA_PIXEL_WD),
  .PARA_NEG_NUM    (PARA_NEG_NUM),
  .PARA_MAIN_NUM   (PARA_REF_NUM),
  .PARA_REF_IDX_WD (PARA_IIDX_WD)
)
u_intra_angular_chroma_interp_lane_3 (
  .I_CLK          (I_CLK),
  .I_RESETN       (I_RESETN),
  .I_VALID        (w_chroma_index_valid),
  .I_REF_BASE_IDX (w_ref_base_3),
  .I_EXT_REF      (w_ext_ref),
  .I_IFACT        (w_ifact_3),
  .O_VALID        (w_chroma_lane_valid_3),
  .O_PRED_SAMPLE  (w_chroma_pred_sample_3)
);

assign w_lane_valid_0 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_lane_valid_0 : w_chroma_lane_valid_0;
assign w_lane_valid_1 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_lane_valid_1 : w_chroma_lane_valid_1;
assign w_lane_valid_2 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_lane_valid_2 : w_chroma_lane_valid_2;
assign w_lane_valid_3 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_lane_valid_3 : w_chroma_lane_valid_3;

assign w_pred_sample_0 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_pred_sample_0 : w_chroma_pred_sample_0;
assign w_pred_sample_1 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_pred_sample_1 : w_chroma_pred_sample_1;
assign w_pred_sample_2 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_pred_sample_2 : w_chroma_pred_sample_2;
assign w_pred_sample_3 = (r_component_id == PARA_COMPONENT_Y) ? w_luma_pred_sample_3 : w_chroma_pred_sample_3;

INTRA_ANGULAR_OUTPUT_PIPELINE #(
  .PARA_PIXEL_WD     (PARA_PIXEL_WD),
  .PARA_COORD_WD     (PARA_COORD_WD),
  .PARA_FIFO_DEPTH   (PARA_FIFO_DEPTH),
  .PARA_META_LATENCY (PARA_META_LATENCY)
)
u_intra_angular_output_pipeline (
  .I_CLK              (I_CLK),
  .I_RESETN           (I_RESETN),
  .I_ISSUE_VALID      (w_control_issue_valid),
  .I_ISSUE_X_BASE     (w_control_x_base),
  .I_ISSUE_Y          (w_control_y),
  .I_ISSUE_ROW_LAST   (w_control_row_last),
  .I_ISSUE_TU_LAST    (w_control_tu_last),
  .O_CAN_ISSUE        (w_output_can_issue),
  .O_ISSUE_ACCEPT     (w_output_issue_accept),
  .I_LANE_VALID_0     (w_lane_valid_0),
  .I_LANE_VALID_1     (w_lane_valid_1),
  .I_LANE_VALID_2     (w_lane_valid_2),
  .I_LANE_VALID_3     (w_lane_valid_3),
  .I_PRED_SAMPLE_0    (w_pred_sample_0),
  .I_PRED_SAMPLE_1    (w_pred_sample_1),
  .I_PRED_SAMPLE_2    (w_pred_sample_2),
  .I_PRED_SAMPLE_3    (w_pred_sample_3),
  .O_VALID            (w_output_valid),
  .I_READY            (I_READY),
  .O_PRED_DATA        (w_output_pred_data),
  .O_X_BASE           (w_output_x_base),
  .O_Y                (w_output_y),
  .O_ROW_LAST         (w_output_row_last),
  .O_TU_LAST          (w_output_tu_last),
  .O_LAST_BEAT_ACCEPT (w_last_beat_accept)
);

assign O_BUSY        = w_control_busy;
assign O_DONE        = w_control_done;
assign O_VALID       = w_output_valid;
assign O_PRED_SAMPLE = w_output_pred_data;
assign O_LANE_VALID  = {4{w_output_valid}};
assign O_X_BASE      = w_output_x_base;
assign O_Y           = w_output_y;
assign O_ROW_LAST    = w_output_row_last;
assign O_LAST        = w_output_tu_last;

endmodule: INTRA_ANGULAR_H_PRED_CORE
