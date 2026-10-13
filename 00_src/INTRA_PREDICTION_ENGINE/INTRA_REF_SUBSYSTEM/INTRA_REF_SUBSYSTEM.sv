//-----------------------------------------------------------
// Description:
// Top-level wrapper for the Intra Reference Subsystem.
//
// This block DOES NOT contain reconstructed-sample RAMs.
// Reconstruction/reference storage is external to Intra Prediction.
// The subsystem only generates read requests, receives reconstructed
// reference samples, performs availability checking, substitution and
// optional reference filtering, then presents the complete reference set
// to the prediction cores.
//
// Project baseline:
//   - VVC All-Intra
//   - YUV 4:2:0
//   - 10-bit pixel value in 16-bit sample container
//   - CTU size: 128x128 luma / 64x64 chroma
//   - Maximum leaf TU: 32x32 luma / 16x16 chroma
//
// I_CTU_X_ORIGIN / I_CTU_Y_ORIGIN and picture dimensions are supplied in
// LUMA sample coordinates. This wrapper converts them to chroma coordinates
// for Cb/Cr before driving INTRA_REF_AVAILABILITY.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_SUBSYSTEM #(
  parameter integer PARA_COORD_WD       = 7,
  parameter integer PARA_PIC_COORD_WD   = 13,
  parameter integer PARA_ADDR_WD        = 10,
  parameter integer PARA_PIXEL_WD       = 10,
  parameter integer PARA_CONTAINER_WD   = 16,
  parameter integer PARA_TILE_UNIT_WD   = 5
)(
  input                                         I_CLK,
  input                                         I_RESETN,

  // -------------------------------------------------------
  // Reference request from INTRA_MODE_CONTROL
  // TU coordinates are already in the current component domain:
  //   Y     : luma-sample coordinates inside CTU
  //   Cb/Cr : chroma-sample coordinates inside CTU
  // -------------------------------------------------------
  input                                         I_REQ_VALID,
  output logic                                  O_REQ_READY,
  input [1:0]                                   I_COMPONENT_ID,
  input [PARA_COORD_WD-1:0]                     I_TU_X,
  input [PARA_COORD_WD-1:0]                     I_TU_Y,
  input [2:0]                                   I_TU_WIDTH_CODE,
  input [2:0]                                   I_TU_HEIGHT_CODE,

  // Global picture / CTU geometry in LUMA sample coordinates.
  input [PARA_PIC_COORD_WD-1:0]                I_CTU_X_ORIGIN,
  input [PARA_PIC_COORD_WD-1:0]                I_CTU_Y_ORIGIN,
  input [PARA_PIC_COORD_WD-1:0]                I_PICTURE_WIDTH,
  input [PARA_PIC_COORD_WD-1:0]                I_PICTURE_HEIGHT,

  // -------------------------------------------------------
  // External reconstructed-availability map interface.
  // All three queries refer to O_MAP_QUERY_COMPONENT_ID.
  // -------------------------------------------------------
  output logic [1:0]                            O_MAP_QUERY_COMPONENT_ID,

  output logic                                  O_TOP_MAP_QUERY_VALID,
  output logic [PARA_TILE_UNIT_WD-1:0]          O_TOP_MAP_X_UNIT,
  output logic [PARA_TILE_UNIT_WD-1:0]          O_TOP_MAP_Y_UNIT,
  input                                         I_TOP_MAP_AVAILABLE,

  output logic                                  O_LEFT_MAP_QUERY_VALID,
  output logic [PARA_TILE_UNIT_WD-1:0]          O_LEFT_MAP_X_UNIT,
  output logic [PARA_TILE_UNIT_WD-1:0]          O_LEFT_MAP_Y_UNIT,
  input                                         I_LEFT_MAP_AVAILABLE,

  output logic                                  O_TL_MAP_QUERY_VALID,
  output logic [PARA_TILE_UNIT_WD-1:0]          O_TL_MAP_X_UNIT,
  output logic [PARA_TILE_UNIT_WD-1:0]          O_TL_MAP_Y_UNIT,
  input                                         I_TL_MAP_AVAILABLE,

  // Cross-CTU reconstructed-reference availability for current component.
  input                                         I_ABOVE_ROW_VALID,
  input                                         I_LEFT_BOUNDARY_VALID,
  input                                         I_ABOVE_LEFT_VALID,

  // -------------------------------------------------------
  // External reconstruction/reference memory read interface.
  // These ports are READ-ONLY from the Intra point of view.
  // The names H_EDGE/V_EDGE/ABOVE/LEFT_BOUND preserve the existing
  // source-bank organization used by INTRA_REF_FETCH.
  // -------------------------------------------------------
  output logic                                  O_H_EDGE_RD_EN,
  output logic [1:0]                            O_H_EDGE_RD_COMPONENT_ID,
  output logic [PARA_ADDR_WD-1:0]               O_H_EDGE_RD_ADDR,
  input                                         I_H_EDGE_RD_VALID,
  input [63:0]                                  I_H_EDGE_RD_DATA,

  output logic                                  O_V_EDGE_RD_EN,
  output logic [1:0]                            O_V_EDGE_RD_COMPONENT_ID,
  output logic [PARA_ADDR_WD-1:0]               O_V_EDGE_RD_ADDR,
  input                                         I_V_EDGE_RD_VALID,
  input [63:0]                                  I_V_EDGE_RD_DATA,

  output logic                                  O_ABOVE_RD_EN,
  output logic [1:0]                            O_ABOVE_RD_COMPONENT_ID,
  output logic [PARA_ADDR_WD-1:0]               O_ABOVE_RD_ADDR,
  input                                         I_ABOVE_RD_VALID,
  input [63:0]                                  I_ABOVE_RD_DATA,

  output logic                                  O_LEFT_BOUND_RD_EN,
  output logic [1:0]                            O_LEFT_BOUND_RD_COMPONENT_ID,
  output logic [4:0]                            O_LEFT_BOUND_RD_ADDR,
  input                                         I_LEFT_BOUND_RD_VALID,
  input [63:0]                                  I_LEFT_BOUND_RD_DATA,

  output logic [1:0]                            O_CORNER_QUERY_COMPONENT_ID,
  input                                         I_CORNER_QUERY_VALID,
  input [15:0]                                  I_CORNER_QUERY_SAMPLE,

  // -------------------------------------------------------
  // Prepared reference set toward prediction cores.
  // Both unfiltered and filtered arrays are exposed.
  // O_FILTERED_VALID indicates whether filtered references are valid for
  // the current request. When low, downstream logic must use unfiltered refs.
  // -------------------------------------------------------
  output logic                                  O_REF_VALID,
  input                                         I_REF_READY,
  output logic                                  O_FILTERED_VALID,

  output logic [1:0]                            O_COMPONENT_ID,
  output logic [PARA_COORD_WD-1:0]              O_TU_X,
  output logic [PARA_COORD_WD-1:0]              O_TU_Y,
  output logic [2:0]                            O_TU_WIDTH_CODE,
  output logic [2:0]                            O_TU_HEIGHT_CODE,

  output logic [(64*PARA_CONTAINER_WD)-1:0]     O_UNFILTERED_TOP_REF,
  output logic [(64*PARA_CONTAINER_WD)-1:0]     O_UNFILTERED_LEFT_REF,
  output logic [PARA_CONTAINER_WD-1:0]          O_UNFILTERED_TL_REF,

  output logic [(64*PARA_CONTAINER_WD)-1:0]     O_FILTERED_TOP_REF,
  output logic [(64*PARA_CONTAINER_WD)-1:0]     O_FILTERED_LEFT_REF,
  output logic [PARA_CONTAINER_WD-1:0]          O_FILTERED_TL_REF
);

localparam [1:0] PARA_COMP_Y  = 2'b00;
localparam [1:0] PARA_COMP_CB = 2'b01;
localparam [1:0] PARA_COMP_CR = 2'b10;

// ==========================================================
// Control-path signals
// ==========================================================
logic                                         w_fetch_start;
logic                                         w_fetch_done;
logic                                         w_sub_start;
logic                                         w_sub_done;
logic                                         w_filter_start;
logic                                         w_filter_done;
logic                                         w_ctrl_ref_valid;
logic                                         w_ctrl_filtered_valid;

logic [1:0]                                   w_component_id;
logic [PARA_COORD_WD-1:0]                    w_tu_x;
logic [PARA_COORD_WD-1:0]                    w_tu_y;
logic [2:0]                                   w_tu_width_code;
logic [2:0]                                   w_tu_height_code;

// ==========================================================
// Component-domain global geometry
// ==========================================================
logic [PARA_PIC_COORD_WD-1:0]                w_component_ctu_x_origin;
logic [PARA_PIC_COORD_WD-1:0]                w_component_ctu_y_origin;
logic [PARA_PIC_COORD_WD-1:0]                w_component_picture_width;
logic [PARA_PIC_COORD_WD-1:0]                w_component_picture_height;

// ==========================================================
// Availability / source / address signals
// ==========================================================
logic                                         w_top_check_valid;
logic [3:0]                                   w_top_seg_index;
logic                                         w_left_check_valid;
logic [3:0]                                   w_left_seg_index;
logic                                         w_tl_check_valid;

logic [2:0]                                   w_top_location;
logic [PARA_COORD_WD:0]                      w_top_ref_x;
logic [PARA_COORD_WD:0]                      w_top_ref_y;
logic [PARA_PIC_COORD_WD:0]                  w_top_global_x;
logic [PARA_PIC_COORD_WD:0]                  w_top_global_y;
logic                                         w_top_coding_valid;
logic                                         w_top_recon_ready;
logic                                         w_top_available;

logic [2:0]                                   w_left_location;
logic [PARA_COORD_WD:0]                      w_left_ref_x;
logic [PARA_COORD_WD:0]                      w_left_ref_y;
logic [PARA_PIC_COORD_WD:0]                  w_left_global_x;
logic [PARA_PIC_COORD_WD:0]                  w_left_global_y;
logic                                         w_left_coding_valid;
logic                                         w_left_recon_ready;
logic                                         w_left_available;

logic [2:0]                                   w_tl_location;
logic [PARA_COORD_WD:0]                      w_tl_ref_x;
logic [PARA_COORD_WD:0]                      w_tl_ref_y;
logic [PARA_PIC_COORD_WD:0]                  w_tl_global_x;
logic [PARA_PIC_COORD_WD:0]                  w_tl_global_y;
logic                                         w_tl_coding_valid;
logic                                         w_tl_recon_ready;
logic                                         w_tl_available;

logic [2:0]                                   w_top_source;
logic                                         w_top_read_enable;
logic [2:0]                                   w_left_source;
logic                                         w_left_read_enable;
logic [2:0]                                   w_tl_source;
logic                                         w_tl_read_enable;

logic                                         w_top_addr_valid;
logic [PARA_ADDR_WD-1:0]                     w_top_addr;
logic [1:0]                                   w_top_lane_sel;
logic                                         w_left_addr_valid;
logic [PARA_ADDR_WD-1:0]                     w_left_addr;
logic [1:0]                                   w_left_lane_sel;
logic                                         w_tl_addr_valid;
logic [PARA_ADDR_WD-1:0]                     w_tl_addr;
logic [1:0]                                   w_tl_lane_sel;

// ==========================================================
// Raw-buffer write/query signals
// ==========================================================
logic                                         w_raw_top_wr_en;
logic [3:0]                                   w_raw_top_wr_index;
logic [63:0]                                  w_raw_top_wr_data;
logic [3:0]                                   w_raw_top_wr_avail;
logic                                         w_raw_left_wr_en;
logic [3:0]                                   w_raw_left_wr_index;
logic [63:0]                                  w_raw_left_wr_data;
logic [3:0]                                   w_raw_left_wr_avail;
logic                                         w_raw_tl_wr_en;
logic [15:0]                                  w_raw_tl_wr_data;
logic                                         w_raw_tl_wr_avail;

logic                                         w_raw_query_valid;
logic [1:0]                                   w_raw_query_ref_type;
logic [5:0]                                   w_raw_query_index;
logic [15:0]                                  w_raw_query_sample;
logic                                         w_raw_query_available;

logic                                         w_raw_word_query_valid;
logic [1:0]                                   w_raw_word_query_ref_type;
logic [3:0]                                   w_raw_word_query_index;
logic [63:0]                                  w_raw_word_query_data;
logic [3:0]                                   w_raw_word_query_avail;

// ==========================================================
// Unfiltered / filtered reference signals
// ==========================================================
logic                                         w_unfilt_top_wr_en;
logic [3:0]                                   w_unfilt_top_wr_index;
logic [63:0]                                  w_unfilt_top_wr_data;
logic                                         w_unfilt_left_wr_en;
logic [3:0]                                   w_unfilt_left_wr_index;
logic [63:0]                                  w_unfilt_left_wr_data;
logic                                         w_unfilt_tl_wr_en;
logic [15:0]                                  w_unfilt_tl_wr_data;

logic [(64*PARA_CONTAINER_WD)-1:0]            w_unfiltered_top_ref;
logic [(64*PARA_CONTAINER_WD)-1:0]            w_unfiltered_left_ref;
logic [PARA_CONTAINER_WD-1:0]                 w_unfiltered_tl_ref;

logic [(64*PARA_CONTAINER_WD)-1:0]            w_filter_top_ref;
logic [(64*PARA_CONTAINER_WD)-1:0]            w_filter_left_ref;
logic [PARA_CONTAINER_WD-1:0]                 w_filter_tl_ref;

logic                                         w_filtered_buffer_valid;
logic [(64*PARA_CONTAINER_WD)-1:0]            w_filtered_top_ref;
logic [(64*PARA_CONTAINER_WD)-1:0]            w_filtered_left_ref;
logic [PARA_CONTAINER_WD-1:0]                 w_filtered_tl_ref;

// ==========================================================
// Geometry conversion
// ==========================================================
// I_CTU_* and I_PICTURE_* are luma-domain coordinates. 4:2:0 chroma uses
// half horizontal and vertical resolution. The project baseline uses even
// picture dimensions, therefore a simple right shift is sufficient.
always_comb begin
  w_component_ctu_x_origin  = I_CTU_X_ORIGIN;
  w_component_ctu_y_origin  = I_CTU_Y_ORIGIN;
  w_component_picture_width = I_PICTURE_WIDTH;
  w_component_picture_height = I_PICTURE_HEIGHT;

  if ((w_component_id == PARA_COMP_CB) ||
      (w_component_id == PARA_COMP_CR)) begin
    w_component_ctu_x_origin   = I_CTU_X_ORIGIN >> 1;
    w_component_ctu_y_origin   = I_CTU_Y_ORIGIN >> 1;
    w_component_picture_width  = I_PICTURE_WIDTH >> 1;
    w_component_picture_height = I_PICTURE_HEIGHT >> 1;
  end
end

assign O_MAP_QUERY_COMPONENT_ID = w_component_id;

assign O_REF_VALID       = w_ctrl_ref_valid;
assign O_FILTERED_VALID  = w_ctrl_filtered_valid && w_filtered_buffer_valid;

assign O_UNFILTERED_TOP_REF  = w_unfiltered_top_ref;
assign O_UNFILTERED_LEFT_REF = w_unfiltered_left_ref;
assign O_UNFILTERED_TL_REF   = w_unfiltered_tl_ref;

assign O_FILTERED_TOP_REF  = w_filtered_top_ref;
assign O_FILTERED_LEFT_REF = w_filtered_left_ref;
assign O_FILTERED_TL_REF   = w_filtered_tl_ref;

// ==========================================================
// Reference request controller
// ==========================================================
INTRA_REF_CONTROL #(
  .PARA_COORD_WD(PARA_COORD_WD)
)
u_intra_ref_control (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),

  .I_REQ_VALID(I_REQ_VALID),
  .O_REQ_READY(O_REQ_READY),
  .I_COMPONENT_ID(I_COMPONENT_ID),
  .I_TU_X(I_TU_X),
  .I_TU_Y(I_TU_Y),
  .I_TU_WIDTH_CODE(I_TU_WIDTH_CODE),
  .I_TU_HEIGHT_CODE(I_TU_HEIGHT_CODE),

  .O_FETCH_START(w_fetch_start),
  .I_FETCH_DONE(w_fetch_done),

  .O_SUB_START(w_sub_start),
  .I_SUB_DONE(w_sub_done),

  .O_FILTER_START(w_filter_start),
  .I_FILTER_DONE(w_filter_done),

  .O_REF_VALID(w_ctrl_ref_valid),
  .I_REF_READY(I_REF_READY),
  .O_FILTERED_VALID(w_ctrl_filtered_valid),

  .O_COMPONENT_ID(w_component_id),
  .O_TU_X(w_tu_x),
  .O_TU_Y(w_tu_y),
  .O_TU_WIDTH_CODE(w_tu_width_code),
  .O_TU_HEIGHT_CODE(w_tu_height_code)
);

assign O_COMPONENT_ID   = w_component_id;
assign O_TU_X           = w_tu_x;
assign O_TU_Y           = w_tu_y;
assign O_TU_WIDTH_CODE  = w_tu_width_code;
assign O_TU_HEIGHT_CODE = w_tu_height_code;

// ==========================================================
// Availability checker
// ==========================================================
INTRA_REF_AVAILABILITY #(
  .PARA_COORD_WD(PARA_COORD_WD),
  .PARA_PIC_COORD_WD(PARA_PIC_COORD_WD),
  .PARA_SEG_IDX_WD(4),
  .PARA_TILE_UNIT_WD(PARA_TILE_UNIT_WD)
)
u_intra_ref_availability (
  .I_COMPONENT_ID(w_component_id),
  .I_TU_X(w_tu_x),
  .I_TU_Y(w_tu_y),

  .I_CTU_X_ORIGIN(w_component_ctu_x_origin),
  .I_CTU_Y_ORIGIN(w_component_ctu_y_origin),
  .I_PICTURE_WIDTH(w_component_picture_width),
  .I_PICTURE_HEIGHT(w_component_picture_height),

  .I_TOP_CHECK_VALID(w_top_check_valid),
  .I_TOP_SEG_INDEX(w_top_seg_index),
  .I_LEFT_CHECK_VALID(w_left_check_valid),
  .I_LEFT_SEG_INDEX(w_left_seg_index),
  .I_TL_CHECK_VALID(w_tl_check_valid),

  .I_TOP_MAP_AVAILABLE(I_TOP_MAP_AVAILABLE),
  .I_LEFT_MAP_AVAILABLE(I_LEFT_MAP_AVAILABLE),
  .I_TL_MAP_AVAILABLE(I_TL_MAP_AVAILABLE),

  .I_ABOVE_ROW_VALID(I_ABOVE_ROW_VALID),
  .I_LEFT_BOUNDARY_VALID(I_LEFT_BOUNDARY_VALID),
  .I_ABOVE_LEFT_VALID(I_ABOVE_LEFT_VALID),

  .O_TOP_MAP_QUERY_VALID(O_TOP_MAP_QUERY_VALID),
  .O_TOP_MAP_X_UNIT(O_TOP_MAP_X_UNIT),
  .O_TOP_MAP_Y_UNIT(O_TOP_MAP_Y_UNIT),

  .O_LEFT_MAP_QUERY_VALID(O_LEFT_MAP_QUERY_VALID),
  .O_LEFT_MAP_X_UNIT(O_LEFT_MAP_X_UNIT),
  .O_LEFT_MAP_Y_UNIT(O_LEFT_MAP_Y_UNIT),

  .O_TL_MAP_QUERY_VALID(O_TL_MAP_QUERY_VALID),
  .O_TL_MAP_X_UNIT(O_TL_MAP_X_UNIT),
  .O_TL_MAP_Y_UNIT(O_TL_MAP_Y_UNIT),

  .O_TOP_LOCATION(w_top_location),
  .O_TOP_REF_X(w_top_ref_x),
  .O_TOP_REF_Y(w_top_ref_y),
  .O_TOP_GLOBAL_X(w_top_global_x),
  .O_TOP_GLOBAL_Y(w_top_global_y),
  .O_TOP_CODING_VALID(w_top_coding_valid),
  .O_TOP_RECON_READY(w_top_recon_ready),
  .O_TOP_AVAILABLE(w_top_available),

  .O_LEFT_LOCATION(w_left_location),
  .O_LEFT_REF_X(w_left_ref_x),
  .O_LEFT_REF_Y(w_left_ref_y),
  .O_LEFT_GLOBAL_X(w_left_global_x),
  .O_LEFT_GLOBAL_Y(w_left_global_y),
  .O_LEFT_CODING_VALID(w_left_coding_valid),
  .O_LEFT_RECON_READY(w_left_recon_ready),
  .O_LEFT_AVAILABLE(w_left_available),

  .O_TL_LOCATION(w_tl_location),
  .O_TL_REF_X(w_tl_ref_x),
  .O_TL_REF_Y(w_tl_ref_y),
  .O_TL_GLOBAL_X(w_tl_global_x),
  .O_TL_GLOBAL_Y(w_tl_global_y),
  .O_TL_CODING_VALID(w_tl_coding_valid),
  .O_TL_RECON_READY(w_tl_recon_ready),
  .O_TL_AVAILABLE(w_tl_available)
);

// ==========================================================
// Reconstructed-reference source selection
// ==========================================================
INTRA_REF_SOURCE_SELECT
a_u_intra_ref_source_select (
  .I_TOP_AVAILABLE(w_top_available),
  .I_TOP_LOCATION(w_top_location),
  .I_LEFT_AVAILABLE(w_left_available),
  .I_LEFT_LOCATION(w_left_location),
  .I_TL_AVAILABLE(w_tl_available),
  .I_TL_LOCATION(w_tl_location),

  .O_TOP_SOURCE(w_top_source),
  .O_TOP_READ_ENABLE(w_top_read_enable),
  .O_LEFT_SOURCE(w_left_source),
  .O_LEFT_READ_ENABLE(w_left_read_enable),
  .O_TL_SOURCE(w_tl_source),
  .O_TL_READ_ENABLE(w_tl_read_enable)
);

// ==========================================================
// Reconstructed-reference address generation
// ==========================================================
// Local reference coordinates are at most 127 for luma and 63 for chroma,
// hence [6:0] is sufficient. The target project is 3840 pixels wide, so the
// existing address generator's 12-bit global-X input is sufficient.
INTRA_REF_ADDRESS_GEN #(
  .PARA_ADDR_WD(PARA_ADDR_WD)
)
u_intra_ref_address_gen (
  .I_COMPONENT_ID(w_component_id),

  .I_TOP_SOURCE(w_top_source),
  .I_TOP_LOCAL_X(w_top_ref_x[6:0]),
  .I_TOP_LOCAL_Y(w_top_ref_y[6:0]),
  .I_TOP_GLOBAL_X(w_top_global_x[11:0]),

  .I_LEFT_SOURCE(w_left_source),
  .I_LEFT_LOCAL_X(w_left_ref_x[6:0]),
  .I_LEFT_LOCAL_Y(w_left_ref_y[6:0]),

  .I_TL_SOURCE(w_tl_source),
  .I_TL_LOCAL_X(w_tl_ref_x[6:0]),
  .I_TL_LOCAL_Y(w_tl_ref_y[6:0]),
  .I_TL_GLOBAL_X(w_tl_global_x[11:0]),

  .O_TOP_ADDR_VALID(w_top_addr_valid),
  .O_TOP_ADDR(w_top_addr),
  .O_TOP_LANE_SEL(w_top_lane_sel),

  .O_LEFT_ADDR_VALID(w_left_addr_valid),
  .O_LEFT_ADDR(w_left_addr),
  .O_LEFT_LANE_SEL(w_left_lane_sel),

  .O_TL_ADDR_VALID(w_tl_addr_valid),
  .O_TL_ADDR(w_tl_addr),
  .O_TL_LANE_SEL(w_tl_lane_sel)
);

// ==========================================================
// Fetch reconstructed samples from external memory subsystem
// ==========================================================
INTRA_REF_FETCH #(
  .PARA_ADDR_WD(PARA_ADDR_WD)
)
u_intra_ref_fetch (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),

  .I_FETCH_START(w_fetch_start),
  .I_COMPONENT_ID(w_component_id),
  .I_TU_WIDTH_CODE(w_tu_width_code),
  .I_TU_HEIGHT_CODE(w_tu_height_code),
  .O_FETCH_DONE(w_fetch_done),

  .O_TOP_CHECK_VALID(w_top_check_valid),
  .O_TOP_SEG_INDEX(w_top_seg_index),
  .I_TOP_AVAILABLE(w_top_available),
  .I_TOP_SOURCE(w_top_source),
  .I_TOP_ADDR_VALID(w_top_addr_valid),
  .I_TOP_ADDR(w_top_addr),

  .O_LEFT_CHECK_VALID(w_left_check_valid),
  .O_LEFT_SEG_INDEX(w_left_seg_index),
  .I_LEFT_AVAILABLE(w_left_available),
  .I_LEFT_SOURCE(w_left_source),
  .I_LEFT_ADDR_VALID(w_left_addr_valid),
  .I_LEFT_ADDR(w_left_addr),

  .O_TL_CHECK_VALID(w_tl_check_valid),
  .I_TL_AVAILABLE(w_tl_available),
  .I_TL_SOURCE(w_tl_source),
  .I_TL_ADDR_VALID(w_tl_addr_valid),
  .I_TL_ADDR(w_tl_addr),
  .I_TL_LANE_SEL(w_tl_lane_sel),

  .O_H_EDGE_RD_EN(O_H_EDGE_RD_EN),
  .O_H_EDGE_RD_COMPONENT_ID(O_H_EDGE_RD_COMPONENT_ID),
  .O_H_EDGE_RD_ADDR(O_H_EDGE_RD_ADDR),
  .I_H_EDGE_RD_VALID(I_H_EDGE_RD_VALID),
  .I_H_EDGE_RD_DATA(I_H_EDGE_RD_DATA),

  .O_V_EDGE_RD_EN(O_V_EDGE_RD_EN),
  .O_V_EDGE_RD_COMPONENT_ID(O_V_EDGE_RD_COMPONENT_ID),
  .O_V_EDGE_RD_ADDR(O_V_EDGE_RD_ADDR),
  .I_V_EDGE_RD_VALID(I_V_EDGE_RD_VALID),
  .I_V_EDGE_RD_DATA(I_V_EDGE_RD_DATA),

  .O_ABOVE_RD_EN(O_ABOVE_RD_EN),
  .O_ABOVE_RD_COMPONENT_ID(O_ABOVE_RD_COMPONENT_ID),
  .O_ABOVE_RD_ADDR(O_ABOVE_RD_ADDR),
  .I_ABOVE_RD_VALID(I_ABOVE_RD_VALID),
  .I_ABOVE_RD_DATA(I_ABOVE_RD_DATA),

  .O_LEFT_BOUND_RD_EN(O_LEFT_BOUND_RD_EN),
  .O_LEFT_BOUND_RD_COMPONENT_ID(O_LEFT_BOUND_RD_COMPONENT_ID),
  .O_LEFT_BOUND_RD_ADDR(O_LEFT_BOUND_RD_ADDR),
  .I_LEFT_BOUND_RD_VALID(I_LEFT_BOUND_RD_VALID),
  .I_LEFT_BOUND_RD_DATA(I_LEFT_BOUND_RD_DATA),

  .O_CORNER_QUERY_COMPONENT_ID(O_CORNER_QUERY_COMPONENT_ID),
  .I_CORNER_QUERY_VALID(I_CORNER_QUERY_VALID),
  .I_CORNER_QUERY_SAMPLE(I_CORNER_QUERY_SAMPLE),

  .O_RAW_TOP_WR_EN(w_raw_top_wr_en),
  .O_RAW_TOP_WR_INDEX(w_raw_top_wr_index),
  .O_RAW_TOP_WR_DATA(w_raw_top_wr_data),
  .O_RAW_TOP_WR_AVAIL(w_raw_top_wr_avail),

  .O_RAW_LEFT_WR_EN(w_raw_left_wr_en),
  .O_RAW_LEFT_WR_INDEX(w_raw_left_wr_index),
  .O_RAW_LEFT_WR_DATA(w_raw_left_wr_data),
  .O_RAW_LEFT_WR_AVAIL(w_raw_left_wr_avail),

  .O_RAW_TL_WR_EN(w_raw_tl_wr_en),
  .O_RAW_TL_WR_DATA(w_raw_tl_wr_data),
  .O_RAW_TL_WR_AVAIL(w_raw_tl_wr_avail)
);

// ==========================================================
// Raw reference buffer
// ==========================================================
INTRA_REF_RAW_BUFFER
u_intra_ref_raw_buffer (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),
  .I_CLEAR(w_fetch_start),

  .I_TOP_WR_EN(w_raw_top_wr_en),
  .I_TOP_WR_INDEX(w_raw_top_wr_index),
  .I_TOP_WR_DATA(w_raw_top_wr_data),
  .I_TOP_WR_AVAIL(w_raw_top_wr_avail),

  .I_LEFT_WR_EN(w_raw_left_wr_en),
  .I_LEFT_WR_INDEX(w_raw_left_wr_index),
  .I_LEFT_WR_DATA(w_raw_left_wr_data),
  .I_LEFT_WR_AVAIL(w_raw_left_wr_avail),

  .I_TL_WR_EN(w_raw_tl_wr_en),
  .I_TL_WR_DATA(w_raw_tl_wr_data),
  .I_TL_WR_AVAIL(w_raw_tl_wr_avail),

  .I_QUERY_VALID(w_raw_query_valid),
  .I_QUERY_REF_TYPE(w_raw_query_ref_type),
  .I_QUERY_INDEX(w_raw_query_index),
  .O_QUERY_SAMPLE(w_raw_query_sample),
  .O_QUERY_AVAILABLE(w_raw_query_available),

  .I_WORD_QUERY_VALID(w_raw_word_query_valid),
  .I_WORD_QUERY_REF_TYPE(w_raw_word_query_ref_type),
  .I_WORD_QUERY_INDEX(w_raw_word_query_index),
  .O_WORD_QUERY_DATA(w_raw_word_query_data),
  .O_WORD_QUERY_AVAIL(w_raw_word_query_avail)
);

// ==========================================================
// Reference substitution
// ==========================================================
INTRA_REF_SUBSTITUTION #(
  .PARA_SAMPLE_WD(PARA_CONTAINER_WD),
  .PARA_BIT_DEPTH(PARA_PIXEL_WD)
)
u_intra_ref_substitution (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),

  .I_SUB_START(w_sub_start),
  .I_TU_WIDTH_CODE(w_tu_width_code),
  .I_TU_HEIGHT_CODE(w_tu_height_code),
  .O_SUB_DONE(w_sub_done),

  .O_RAW_WORD_QUERY_VALID(w_raw_word_query_valid),
  .O_RAW_WORD_QUERY_REF_TYPE(w_raw_word_query_ref_type),
  .O_RAW_WORD_QUERY_INDEX(w_raw_word_query_index),
  .I_RAW_WORD_QUERY_DATA(w_raw_word_query_data),
  .I_RAW_WORD_QUERY_AVAIL(w_raw_word_query_avail),

  .O_RAW_QUERY_VALID(w_raw_query_valid),
  .O_RAW_QUERY_REF_TYPE(w_raw_query_ref_type),
  .O_RAW_QUERY_INDEX(w_raw_query_index),
  .I_RAW_QUERY_SAMPLE(w_raw_query_sample),
  .I_RAW_QUERY_AVAILABLE(w_raw_query_available),

  .O_UNFILT_TOP_WR_EN(w_unfilt_top_wr_en),
  .O_UNFILT_TOP_WR_INDEX(w_unfilt_top_wr_index),
  .O_UNFILT_TOP_WR_DATA(w_unfilt_top_wr_data),

  .O_UNFILT_LEFT_WR_EN(w_unfilt_left_wr_en),
  .O_UNFILT_LEFT_WR_INDEX(w_unfilt_left_wr_index),
  .O_UNFILT_LEFT_WR_DATA(w_unfilt_left_wr_data),

  .O_UNFILT_TL_WR_EN(w_unfilt_tl_wr_en),
  .O_UNFILT_TL_WR_DATA(w_unfilt_tl_wr_data)
);

// ==========================================================
// Unfiltered reference buffer
// ==========================================================
INTRA_REF_UNFILTERED_BUFFER
u_intra_ref_unfiltered_buffer (
  .I_CLK(I_CLK),

  .I_TOP_WR_EN(w_unfilt_top_wr_en),
  .I_TOP_WR_INDEX(w_unfilt_top_wr_index),
  .I_TOP_WR_DATA(w_unfilt_top_wr_data),

  .I_LEFT_WR_EN(w_unfilt_left_wr_en),
  .I_LEFT_WR_INDEX(w_unfilt_left_wr_index),
  .I_LEFT_WR_DATA(w_unfilt_left_wr_data),

  .I_TL_WR_EN(w_unfilt_tl_wr_en),
  .I_TL_WR_DATA(w_unfilt_tl_wr_data),

  .O_TOP_REF(w_unfiltered_top_ref),
  .O_LEFT_REF(w_unfiltered_left_ref),
  .O_TL_REF(w_unfiltered_tl_ref)
);

// ==========================================================
// Optional luma reference filtering
// ==========================================================
INTRA_REF_FILTER #(
  .PARA_PIXEL_WD(PARA_PIXEL_WD),
  .PARA_CONTAINER_WD(PARA_CONTAINER_WD)
)
u_intra_ref_filter (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),

  .I_FILTER_START(w_filter_start),
  .I_TU_WIDTH_CODE(w_tu_width_code),
  .I_TU_HEIGHT_CODE(w_tu_height_code),

  .I_UNFILT_TOP_REF(w_unfiltered_top_ref),
  .I_UNFILT_LEFT_REF(w_unfiltered_left_ref),
  .I_UNFILT_TL_REF(w_unfiltered_tl_ref),

  .O_FILTER_DONE(w_filter_done),
  .O_FILTERED_TOP_REF(w_filter_top_ref),
  .O_FILTERED_LEFT_REF(w_filter_left_ref),
  .O_FILTERED_TL_REF(w_filter_tl_ref)
);

// ==========================================================
// Filtered reference holding buffer
// ==========================================================
INTRA_REF_FILTERED_BUFFER #(
  .PARA_CONTAINER_WD(PARA_CONTAINER_WD),
  .PARA_REF_SAMPLES(64)
)
u_intra_ref_filtered_buffer (
  .I_CLK(I_CLK),
  .I_RESETN(I_RESETN),

  .I_CLEAR(w_fetch_start),

  .I_LOAD_VALID(w_filter_done),
  .I_TOP_REF(w_filter_top_ref),
  .I_LEFT_REF(w_filter_left_ref),
  .I_TL_REF(w_filter_tl_ref),

  .O_VALID(w_filtered_buffer_valid),
  .O_TOP_REF(w_filtered_top_ref),
  .O_LEFT_REF(w_filtered_left_ref),
  .O_TL_REF(w_filtered_tl_ref)
);

endmodule: INTRA_REF_SUBSYSTEM
