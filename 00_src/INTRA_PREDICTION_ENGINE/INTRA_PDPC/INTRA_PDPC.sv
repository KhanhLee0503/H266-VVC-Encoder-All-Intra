//-----------------------------------------------------------
// Description: This module integrates one shared H.266/VVC position-dependent prediction
// combination datapath for DC, Planar, horizontal angular, and vertical angular prediction.
// A candidate-start handshake captures the prediction mode, sample-component metadata, and
// the selected reconstructed top/left references. The module processes four horizontal
// prediction samples per accepted beat, including chroma samples, with a four-stage elastic
// pipeline. The next candidate is accepted only after the last beat exits the PDPC output.
// The supported baseline disables MRL and BDPCM and uses 4..32 sample transform dimensions.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_PDPC #(
  parameter PARA_PIXEL_WD     = 10,
  parameter PARA_CONTAINER_WD = 16,
  parameter PARA_COORD_WD     = 5,
  parameter PARA_REF_NUM      = 64
)
(
  input                                              I_CLK,
  input                                              I_RESETN,

  input                                              I_START,
  output logic                                       O_START_READY,
  input [2:0]                                        I_WIDTH_CODE,
  input [2:0]                                        I_HEIGHT_CODE,
  input [1:0]                                        I_COMPONENT_ID,
  input signed [7:0]                                 I_MAPPED_MODE,
  input [14:0]                                       I_INV_ANGLE_ABS,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]       I_TOP_REF,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]       I_LEFT_REF,
  input [PARA_CONTAINER_WD-1:0]                      I_TL_REF,

  input                                              I_VALID,
  output logic                                       O_READY,
  input [(4*PARA_PIXEL_WD)-1:0]                      I_PRED_DATA,
  input [PARA_COORD_WD-1:0]                          I_X_BASE,
  input [PARA_COORD_WD-1:0]                          I_Y,
  input                                              I_ROW_LAST,
  input                                              I_TU_LAST,

  output logic                                       O_VALID,
  input                                              I_READY,
  output logic [(4*PARA_PIXEL_WD)-1:0]               O_PRED_DATA,
  output logic [PARA_COORD_WD-1:0]                   O_X_BASE,
  output logic [PARA_COORD_WD-1:0]                   O_Y,
  output logic                                       O_ROW_LAST,
  output logic                                       O_TU_LAST,
  output logic [1:0]                                 O_COMPONENT_ID,
  output logic signed [7:0]                          O_MAPPED_MODE,
  output logic                                       O_BUSY,
  output logic                                       O_DONE
);

localparam PARA_MODE_HOR_18 = 3'd2;
localparam PARA_MODE_VER_50 = 3'd3;

typedef enum logic [1:0] {
  ST_IDLE,
  ST_RUN,
  ST_DRAIN,
  ST_DONE
} state_t;

state_t r_current_state;
state_t w_next_state;

logic w_config_valid;
logic w_start_accept;
logic w_input_valid;
logic w_input_accept;
logic w_pipeline_ready;
logic w_last_beat_accept;
logic [3:0] w_stage_load;

logic w_control_pdpc_enable;
logic [2:0] w_control_pdpc_mode;
logic [1:0] w_control_nscale;

logic [2:0] r_pdpc_mode;
logic [1:0] r_nscale;
logic r_pdpc_enable;
logic r_axial_mode;
logic [14:0] r_inv_angle_abs;
logic [6:0] r_ref_width;
logic [6:0] r_ref_height;
logic [1:0] r_component_id;
logic signed [7:0] r_mapped_mode;
logic [PARA_PIXEL_WD-1:0] r_tl_ref;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] r_top_ref;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] r_left_ref;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] w_top_ref_compact;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] w_left_ref_compact;

logic [23:0] w_weight_l;
logic [23:0] w_weight_t;
logic [(4*PARA_PIXEL_WD)-1:0] w_ref_l;
logic [(4*PARA_PIXEL_WD)-1:0] w_ref_t;
logic [(4*PARA_PIXEL_WD)-1:0] w_processed_data;

genvar gen_lane;
genvar gen_ref;

assign w_config_valid = (I_WIDTH_CODE >= 3'd2) && (I_WIDTH_CODE <= 3'd5) && (I_HEIGHT_CODE >= 3'd2) && (I_HEIGHT_CODE <= 3'd5) &&
                        (I_COMPONENT_ID != 2'b11) && (((I_MAPPED_MODE >= -8'sd14) && (I_MAPPED_MODE <= 8'sd80)));
assign O_START_READY = (r_current_state == ST_IDLE) && w_config_valid;
assign w_start_accept = I_START && O_START_READY;
assign w_input_valid = I_VALID && (r_current_state == ST_RUN);
assign O_READY = (r_current_state == ST_RUN) && w_pipeline_ready;
assign w_input_accept = I_VALID && O_READY;

INTRA_PDPC_CONTROL u_intra_pdpc_control (
  .I_WIDTH_CODE      (I_WIDTH_CODE),
  .I_HEIGHT_CODE     (I_HEIGHT_CODE),
  .I_MAPPED_MODE     (I_MAPPED_MODE),
  .I_INV_ANGLE_ABS   (I_INV_ANGLE_ABS),
  .O_PDPC_ENABLE     (w_control_pdpc_enable),
  .O_PDPC_MODE       (w_control_pdpc_mode),
  .O_N_SCALE         (w_control_nscale)
);

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN)
    r_current_state <= ST_IDLE;
  else
    r_current_state <= w_next_state;
end

always_comb begin
  w_next_state = r_current_state;

  unique casez (r_current_state)
    ST_IDLE: begin
      if (w_start_accept)
        w_next_state = ST_RUN;
    end
    ST_RUN: begin
      if (w_input_accept && I_TU_LAST)
        w_next_state = ST_DRAIN;
    end
    ST_DRAIN: begin
      if (w_last_beat_accept)
        w_next_state = ST_DONE;
    end
    ST_DONE: w_next_state = ST_IDLE;
    default: w_next_state = ST_IDLE;
  endcase
end

always_comb begin
  O_BUSY = 1'b0;
  O_DONE = 1'b0;

  unique casez (r_current_state)
    ST_IDLE: O_BUSY = 1'b0;
    ST_RUN: O_BUSY = 1'b1;
    ST_DRAIN: O_BUSY = 1'b1;
    ST_DONE: O_DONE = 1'b1;
    default: begin
      O_BUSY = 1'b0;
      O_DONE = 1'b0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_pdpc_enable <= 1'b0;
    r_pdpc_mode <= '0;
    r_nscale <= '0;
    r_axial_mode <= 1'b0;
    r_component_id <= '0;
    r_mapped_mode <= '0;
    r_inv_angle_abs <= '0;
    r_ref_width <= '0;
    r_ref_height <= '0;
  end
  else if (w_start_accept) begin
    r_pdpc_enable <= w_control_pdpc_enable;
    r_pdpc_mode <= w_control_pdpc_mode;
    r_nscale <= w_control_nscale;
    r_axial_mode <= (w_control_pdpc_mode == PARA_MODE_HOR_18) || (w_control_pdpc_mode == PARA_MODE_VER_50);
    r_component_id <= I_COMPONENT_ID;
    r_mapped_mode <= I_MAPPED_MODE;
    r_inv_angle_abs <= I_INV_ANGLE_ABS;
    r_ref_width <= 7'd1 << (I_WIDTH_CODE + 3'd1);
    r_ref_height <= 7'd1 << (I_HEIGHT_CODE + 3'd1);
  end
end

always_ff @ (posedge I_CLK) begin
  if (w_start_accept)
    r_tl_ref <= I_TL_REF[PARA_PIXEL_WD-1:0];
end

generate
  for (gen_ref = 0; gen_ref < PARA_REF_NUM; gen_ref = gen_ref + 1) begin: GEN_PDPC_REF_INPUT
    assign w_top_ref_compact[(gen_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD] = I_TOP_REF[(gen_ref*PARA_CONTAINER_WD) +: PARA_PIXEL_WD];
    assign w_left_ref_compact[(gen_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD] = I_LEFT_REF[(gen_ref*PARA_CONTAINER_WD) +: PARA_PIXEL_WD];
  end
endgenerate

always_ff @ (posedge I_CLK) begin
  if (w_start_accept) begin
    r_top_ref <= w_top_ref_compact;
    r_left_ref <= w_left_ref_compact;
  end
end

INTRA_PDPC_WEIGHT_GEN #(
  .PARA_COORD_WD (PARA_COORD_WD)
)
u_intra_pdpc_weight_gen (
  .I_PDPC_MODE (r_pdpc_mode),
  .I_N_SCALE    (r_nscale),
  .I_X_BASE     (I_X_BASE),
  .I_Y          (I_Y),
  .O_WEIGHT_L   (w_weight_l),
  .O_WEIGHT_T   (w_weight_t)
);

INTRA_PDPC_REF_SELECT #(
  .PARA_PIXEL_WD (PARA_PIXEL_WD),
  .PARA_COORD_WD (PARA_COORD_WD),
  .PARA_REF_NUM  (PARA_REF_NUM)
)
u_intra_pdpc_ref_select (
  .I_PDPC_MODE   (r_pdpc_mode),
  .I_X_BASE      (I_X_BASE),
  .I_Y           (I_Y),
  .I_INV_ANGLE_ABS (r_inv_angle_abs),
  .I_REF_WIDTH   (r_ref_width),
  .I_REF_HEIGHT  (r_ref_height),
  .I_TOP_REF     (r_top_ref),
  .I_LEFT_REF    (r_left_ref),
  .O_REF_L       (w_ref_l),
  .O_REF_T       (w_ref_t)
);

INTRA_PDPC_OUTPUT_PIPELINE #(
  .PARA_COORD_WD (PARA_COORD_WD)
)
u_intra_pdpc_output_pipeline (
  .I_CLK              (I_CLK),
  .I_RESETN           (I_RESETN),
  .I_VALID            (w_input_valid),
  .O_INPUT_READY      (w_pipeline_ready),
  .I_X_BASE           (I_X_BASE),
  .I_Y                (I_Y),
  .I_ROW_LAST         (I_ROW_LAST),
  .I_TU_LAST          (I_TU_LAST),
  .O_STAGE_LOAD       (w_stage_load),
  .O_VALID            (O_VALID),
  .I_READY            (I_READY),
  .O_X_BASE           (O_X_BASE),
  .O_Y                (O_Y),
  .O_ROW_LAST         (O_ROW_LAST),
  .O_TU_LAST          (O_TU_LAST),
  .O_LAST_BEAT_ACCEPT (w_last_beat_accept)
);

generate
  for (gen_lane = 0; gen_lane < 4; gen_lane = gen_lane + 1) begin: GEN_PDPC_LANE
    INTRA_PDPC_PROCESSING_LANE #(
      .PARA_PIXEL_WD (PARA_PIXEL_WD)
    )
    u_intra_pdpc_processing_lane (
      .I_CLK         (I_CLK),
      .I_STAGE_LOAD  (w_stage_load),
      .I_PDPC_ENABLE (r_pdpc_enable),
      .I_AXIAL_MODE  (r_axial_mode),
      .I_BASE_PRED   (I_PRED_DATA[(gen_lane*PARA_PIXEL_WD) +: PARA_PIXEL_WD]),
      .I_REF_L       (w_ref_l[(gen_lane*PARA_PIXEL_WD) +: PARA_PIXEL_WD]),
      .I_REF_T       (w_ref_t[(gen_lane*PARA_PIXEL_WD) +: PARA_PIXEL_WD]),
      .I_TL_REF      (r_tl_ref),
      .I_WEIGHT_L    (w_weight_l[(gen_lane*6) +: 6]),
      .I_WEIGHT_T    (w_weight_t[(gen_lane*6) +: 6]),
      .O_PRED_SAMPLE (w_processed_data[(gen_lane*PARA_PIXEL_WD) +: PARA_PIXEL_WD])
    );
  end
endgenerate

assign O_PRED_DATA = w_processed_data;
assign O_COMPONENT_ID = r_component_id;
assign O_MAPPED_MODE = r_mapped_mode;

endmodule: INTRA_PDPC
