//-----------------------------------------------------------
// Description: This module determines the availability of top, left, and
// top-left intra reference requests for one transform unit. Top and left
// requests operate on four-sample segments. The module classifies each
// request as local, above-CTU, left-CTU, above-left, or invalid. Local
// requests query the reconstructed availability map, while cross-CTU
// requests use the valid state of the above-line buffer, left-boundary
// buffer, or above-left corner register. Picture boundaries and the current
// CTU coding order are checked before a reference is reported as available.
// Geometry inputs use the CURRENT COMPONENT sample domain. The parent
// INTRA_REF_SUBSYSTEM converts luma CTU origins and picture dimensions
// to chroma coordinates before calling this module. DO NOT shift again.
// A reference is also rejected when the TU origin is outside the picture
// or outside its component CTU, even if a neighboring reference is in range.
// The logic is purely combinational and does not fetch reference sample data.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_AVAILABILITY #(
  parameter integer PARA_COORD_WD       = 7,
  parameter integer PARA_PIC_COORD_WD   = 13,
  parameter integer PARA_SEG_IDX_WD     = 4,
  parameter integer PARA_TILE_UNIT_WD   = 5
)(
  input [1:0]                            I_COMPONENT_ID,
  input [PARA_COORD_WD-1:0]             I_TU_X,
  input [PARA_COORD_WD-1:0]             I_TU_Y,

  // Component-domain origins and picture bounds (pre-scaled by wrapper).
  input [PARA_PIC_COORD_WD-1:0]         I_CTU_X_ORIGIN,
  input [PARA_PIC_COORD_WD-1:0]         I_CTU_Y_ORIGIN,
  input [PARA_PIC_COORD_WD-1:0]         I_PICTURE_WIDTH,
  input [PARA_PIC_COORD_WD-1:0]         I_PICTURE_HEIGHT,

  input                                 I_TOP_CHECK_VALID,
  input [PARA_SEG_IDX_WD-1:0]           I_TOP_SEG_INDEX,
  input                                 I_LEFT_CHECK_VALID,
  input [PARA_SEG_IDX_WD-1:0]           I_LEFT_SEG_INDEX,
  input                                 I_TL_CHECK_VALID,

  input                                 I_TOP_MAP_AVAILABLE,
  input                                 I_LEFT_MAP_AVAILABLE,
  input                                 I_TL_MAP_AVAILABLE,

  input                                 I_ABOVE_ROW_VALID,
  input                                 I_LEFT_BOUNDARY_VALID,
  input                                 I_ABOVE_LEFT_VALID,

  output logic                          O_TOP_MAP_QUERY_VALID,
  output logic [PARA_TILE_UNIT_WD-1:0]  O_TOP_MAP_X_UNIT,
  output logic [PARA_TILE_UNIT_WD-1:0]  O_TOP_MAP_Y_UNIT,

  output logic                          O_LEFT_MAP_QUERY_VALID,
  output logic [PARA_TILE_UNIT_WD-1:0]  O_LEFT_MAP_X_UNIT,
  output logic [PARA_TILE_UNIT_WD-1:0]  O_LEFT_MAP_Y_UNIT,

  output logic                          O_TL_MAP_QUERY_VALID,
  output logic [PARA_TILE_UNIT_WD-1:0]  O_TL_MAP_X_UNIT,
  output logic [PARA_TILE_UNIT_WD-1:0]  O_TL_MAP_Y_UNIT,

  output logic [2:0]                    O_TOP_LOCATION,
  output logic [PARA_COORD_WD:0]        O_TOP_REF_X,
  output logic [PARA_COORD_WD:0]        O_TOP_REF_Y,
  output logic [PARA_PIC_COORD_WD:0]    O_TOP_GLOBAL_X,
  output logic [PARA_PIC_COORD_WD:0]    O_TOP_GLOBAL_Y,
  output logic                          O_TOP_CODING_VALID,
  output logic                          O_TOP_RECON_READY,
  output logic                          O_TOP_AVAILABLE,

  output logic [2:0]                    O_LEFT_LOCATION,
  output logic [PARA_COORD_WD:0]        O_LEFT_REF_X,
  output logic [PARA_COORD_WD:0]        O_LEFT_REF_Y,
  output logic [PARA_PIC_COORD_WD:0]    O_LEFT_GLOBAL_X,
  output logic [PARA_PIC_COORD_WD:0]    O_LEFT_GLOBAL_Y,
  output logic                          O_LEFT_CODING_VALID,
  output logic                          O_LEFT_RECON_READY,
  output logic                          O_LEFT_AVAILABLE,

  output logic [2:0]                    O_TL_LOCATION,
  output logic [PARA_COORD_WD:0]        O_TL_REF_X,
  output logic [PARA_COORD_WD:0]        O_TL_REF_Y,
  output logic [PARA_PIC_COORD_WD:0]    O_TL_GLOBAL_X,
  output logic [PARA_PIC_COORD_WD:0]    O_TL_GLOBAL_Y,
  output logic                          O_TL_CODING_VALID,
  output logic                          O_TL_RECON_READY,
  output logic                          O_TL_AVAILABLE
);

localparam [1:0] PARA_COMP_Y  = 2'b00;
localparam [1:0] PARA_COMP_CB = 2'b01;
localparam [1:0] PARA_COMP_CR = 2'b10;

localparam [2:0] PARA_LOC_LOCAL      = 3'b000;
localparam [2:0] PARA_LOC_ABOVE      = 3'b001;
localparam [2:0] PARA_LOC_LEFT       = 3'b010;
localparam [2:0] PARA_LOC_ABOVE_LEFT = 3'b011;
localparam [2:0] PARA_LOC_INVALID    = 3'b100;

localparam [PARA_COORD_WD:0] PARA_CTU_SIZE_Y = 128;
localparam [PARA_COORD_WD:0] PARA_CTU_SIZE_C = 64;
localparam [PARA_COORD_WD:0] PARA_SEG_LAST_OFFSET = 3;

logic                                  w_component_valid;
logic [PARA_COORD_WD:0]                w_ctu_size;

logic [PARA_COORD_WD:0]                w_top_seg_offset;
logic [PARA_COORD_WD:0]                w_left_seg_offset;
logic [PARA_COORD_WD:0]                w_top_ref_x;
logic [PARA_COORD_WD:0]                w_top_ref_y;
logic [PARA_COORD_WD:0]                w_top_ref_x_last;
logic [PARA_COORD_WD:0]                w_left_ref_x;
logic [PARA_COORD_WD:0]                w_left_ref_y;
logic [PARA_COORD_WD:0]                w_left_ref_y_last;
logic [PARA_COORD_WD:0]                w_tl_ref_x;
logic [PARA_COORD_WD:0]                w_tl_ref_y;

logic [PARA_PIC_COORD_WD:0]            w_picture_width_ext;
logic [PARA_PIC_COORD_WD:0]            w_picture_height_ext;
logic [PARA_PIC_COORD_WD:0]            w_ctu_origin_x_ext;
logic [PARA_PIC_COORD_WD:0]            w_ctu_origin_y_ext;
logic [PARA_PIC_COORD_WD:0]            w_tu_global_x;
logic [PARA_PIC_COORD_WD:0]            w_tu_global_y;
logic                                  w_tu_origin_valid;
logic [PARA_PIC_COORD_WD:0]            w_top_global_x;
logic [PARA_PIC_COORD_WD:0]            w_top_global_y;
logic [PARA_PIC_COORD_WD:0]            w_top_global_x_last;
logic [PARA_PIC_COORD_WD:0]            w_left_global_x;
logic [PARA_PIC_COORD_WD:0]            w_left_global_y;
logic [PARA_PIC_COORD_WD:0]            w_left_global_y_last;
logic [PARA_PIC_COORD_WD:0]            w_tl_global_x;
logic [PARA_PIC_COORD_WD:0]            w_tl_global_y;

logic                                  w_top_picture_valid;
logic                                  w_left_picture_valid;
logic                                  w_tl_picture_valid;

assign w_top_seg_offset =
  {{(PARA_COORD_WD + 1 - PARA_SEG_IDX_WD){1'b0}}, I_TOP_SEG_INDEX} << 2;
assign w_left_seg_offset =
  {{(PARA_COORD_WD + 1 - PARA_SEG_IDX_WD){1'b0}}, I_LEFT_SEG_INDEX} << 2;

assign w_top_ref_x = {1'b0, I_TU_X} + w_top_seg_offset;
assign w_top_ref_y =
  (I_TU_Y != '0) ? ({1'b0, I_TU_Y} - 1'b1) : '0;
assign w_top_ref_x_last = w_top_ref_x + PARA_SEG_LAST_OFFSET;

assign w_left_ref_x =
  (I_TU_X != '0) ? ({1'b0, I_TU_X} - 1'b1) : '0;
assign w_left_ref_y = {1'b0, I_TU_Y} + w_left_seg_offset;
assign w_left_ref_y_last = w_left_ref_y + PARA_SEG_LAST_OFFSET;

assign w_tl_ref_x =
  (I_TU_X != '0) ? ({1'b0, I_TU_X} - 1'b1) : '0;
assign w_tl_ref_y =
  (I_TU_Y != '0) ? ({1'b0, I_TU_Y} - 1'b1) : '0;

assign w_picture_width_ext = {1'b0, I_PICTURE_WIDTH};
assign w_picture_height_ext = {1'b0, I_PICTURE_HEIGHT};
assign w_ctu_origin_x_ext = {1'b0, I_CTU_X_ORIGIN};
assign w_ctu_origin_y_ext = {1'b0, I_CTU_Y_ORIGIN};

// The parent supplies component-domain geometry. Validate the TU anchor
// separately from its reference coordinates: at the bottom/right picture
// border a top/left reference can still lie in range even when the TU is not.
assign w_tu_global_x =
  w_ctu_origin_x_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, {1'b0, I_TU_X}};
assign w_tu_global_y =
  w_ctu_origin_y_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, {1'b0, I_TU_Y}};

assign w_tu_origin_valid =
  ({1'b0, I_TU_X} < w_ctu_size) &&
  ({1'b0, I_TU_Y} < w_ctu_size) &&
  (w_tu_global_x < w_picture_width_ext) &&
  (w_tu_global_y < w_picture_height_ext);

assign w_top_global_x =
  w_ctu_origin_x_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_top_ref_x};
assign w_top_global_x_last =
  w_ctu_origin_x_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_top_ref_x_last};
assign w_top_global_y =
  (I_TU_Y != '0) ?
    (w_ctu_origin_y_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_top_ref_y}) :
    ((I_CTU_Y_ORIGIN != '0) ? (w_ctu_origin_y_ext - 1'b1) : '0);

assign w_left_global_x =
  (I_TU_X != '0) ?
    (w_ctu_origin_x_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_left_ref_x}) :
    ((I_CTU_X_ORIGIN != '0) ? (w_ctu_origin_x_ext - 1'b1) : '0);
assign w_left_global_y =
  w_ctu_origin_y_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_left_ref_y};
assign w_left_global_y_last =
  w_ctu_origin_y_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_left_ref_y_last};

assign w_tl_global_x =
  (I_TU_X != '0) ?
    (w_ctu_origin_x_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_tl_ref_x}) :
    ((I_CTU_X_ORIGIN != '0) ? (w_ctu_origin_x_ext - 1'b1) : '0);
assign w_tl_global_y =
  (I_TU_Y != '0) ?
    (w_ctu_origin_y_ext + {{(PARA_PIC_COORD_WD - PARA_COORD_WD){1'b0}}, w_tl_ref_y}) :
    ((I_CTU_Y_ORIGIN != '0) ? (w_ctu_origin_y_ext - 1'b1) : '0);

assign w_top_picture_valid =
  (w_top_global_x_last < w_picture_width_ext) &&
  (w_top_global_y < w_picture_height_ext);

assign w_left_picture_valid =
  (w_left_global_x < w_picture_width_ext) &&
  (w_left_global_y_last < w_picture_height_ext);

assign w_tl_picture_valid =
  (w_tl_global_x < w_picture_width_ext) &&
  (w_tl_global_y < w_picture_height_ext);

always_comb begin
  w_component_valid = 1'b0;
  w_ctu_size = '0;

  unique casez (I_COMPONENT_ID)
    PARA_COMP_Y: begin
      w_component_valid = 1'b1;
      w_ctu_size = PARA_CTU_SIZE_Y;
    end
    PARA_COMP_CB: begin
      w_component_valid = 1'b1;
      w_ctu_size = PARA_CTU_SIZE_C;
    end
    PARA_COMP_CR: begin
      w_component_valid = 1'b1;
      w_ctu_size = PARA_CTU_SIZE_C;
    end
    default: begin
      w_component_valid = 1'b0;
      w_ctu_size = '0;
    end
  endcase
end

always_comb begin
  O_TOP_MAP_QUERY_VALID = 1'b0;
  O_TOP_MAP_X_UNIT = '0;
  O_TOP_MAP_Y_UNIT = '0;

  O_TOP_LOCATION = PARA_LOC_INVALID;
  O_TOP_REF_X = w_top_ref_x;
  O_TOP_REF_Y = w_top_ref_y;
  O_TOP_GLOBAL_X = w_top_global_x;
  O_TOP_GLOBAL_Y = w_top_global_y;
  O_TOP_CODING_VALID = 1'b0;
  O_TOP_RECON_READY = 1'b0;
  O_TOP_AVAILABLE = 1'b0;

  if (I_TOP_CHECK_VALID && w_component_valid && w_tu_origin_valid && w_top_picture_valid) begin
    if (I_TU_Y != '0) begin
      if (w_top_ref_x_last < w_ctu_size) begin
        O_TOP_LOCATION = PARA_LOC_LOCAL;
        O_TOP_CODING_VALID = 1'b1;
        O_TOP_MAP_QUERY_VALID = 1'b1;
        O_TOP_MAP_X_UNIT = w_top_ref_x[PARA_COORD_WD-1:2];
        O_TOP_MAP_Y_UNIT = w_top_ref_y[PARA_COORD_WD-1:2];
        O_TOP_RECON_READY = I_TOP_MAP_AVAILABLE;
      end
    end
    else if (I_CTU_Y_ORIGIN != '0) begin
      O_TOP_LOCATION = PARA_LOC_ABOVE;
      O_TOP_CODING_VALID = 1'b1;
      O_TOP_RECON_READY = I_ABOVE_ROW_VALID;
    end
  end

  O_TOP_AVAILABLE =
    O_TOP_CODING_VALID && O_TOP_RECON_READY;
end

always_comb begin
  O_LEFT_MAP_QUERY_VALID = 1'b0;
  O_LEFT_MAP_X_UNIT = '0;
  O_LEFT_MAP_Y_UNIT = '0;

  O_LEFT_LOCATION = PARA_LOC_INVALID;
  O_LEFT_REF_X = w_left_ref_x;
  O_LEFT_REF_Y = w_left_ref_y;
  O_LEFT_GLOBAL_X = w_left_global_x;
  O_LEFT_GLOBAL_Y = w_left_global_y;
  O_LEFT_CODING_VALID = 1'b0;
  O_LEFT_RECON_READY = 1'b0;
  O_LEFT_AVAILABLE = 1'b0;

  if (I_LEFT_CHECK_VALID && w_component_valid && w_tu_origin_valid && w_left_picture_valid) begin
    if (w_left_ref_y_last < w_ctu_size) begin
      if (I_TU_X != '0) begin
        O_LEFT_LOCATION = PARA_LOC_LOCAL;
        O_LEFT_CODING_VALID = 1'b1;
        O_LEFT_MAP_QUERY_VALID = 1'b1;
        O_LEFT_MAP_X_UNIT = w_left_ref_x[PARA_COORD_WD-1:2];
        O_LEFT_MAP_Y_UNIT = w_left_ref_y[PARA_COORD_WD-1:2];
        O_LEFT_RECON_READY = I_LEFT_MAP_AVAILABLE;
      end
      else if (I_CTU_X_ORIGIN != '0) begin
        O_LEFT_LOCATION = PARA_LOC_LEFT;
        O_LEFT_CODING_VALID = 1'b1;
        O_LEFT_RECON_READY = I_LEFT_BOUNDARY_VALID;
      end
    end
  end

  O_LEFT_AVAILABLE =
    O_LEFT_CODING_VALID && O_LEFT_RECON_READY;
end

always_comb begin
  O_TL_MAP_QUERY_VALID = 1'b0;
  O_TL_MAP_X_UNIT = '0;
  O_TL_MAP_Y_UNIT = '0;

  O_TL_LOCATION = PARA_LOC_INVALID;
  O_TL_REF_X = w_tl_ref_x;
  O_TL_REF_Y = w_tl_ref_y;
  O_TL_GLOBAL_X = w_tl_global_x;
  O_TL_GLOBAL_Y = w_tl_global_y;
  O_TL_CODING_VALID = 1'b0;
  O_TL_RECON_READY = 1'b0;
  O_TL_AVAILABLE = 1'b0;

  if (I_TL_CHECK_VALID && w_component_valid && w_tu_origin_valid && w_tl_picture_valid) begin
    if ((I_TU_X != '0) && (I_TU_Y != '0)) begin
      O_TL_LOCATION = PARA_LOC_LOCAL;
      O_TL_CODING_VALID = 1'b1;
      O_TL_MAP_QUERY_VALID = 1'b1;
      O_TL_MAP_X_UNIT = w_tl_ref_x[PARA_COORD_WD-1:2];
      O_TL_MAP_Y_UNIT = w_tl_ref_y[PARA_COORD_WD-1:2];
      O_TL_RECON_READY = I_TL_MAP_AVAILABLE;
    end
    else if ((I_TU_X == '0) && (I_TU_Y != '0)) begin
      if (I_CTU_X_ORIGIN != '0) begin
        O_TL_LOCATION = PARA_LOC_LEFT;
        O_TL_CODING_VALID = 1'b1;
        O_TL_RECON_READY = I_LEFT_BOUNDARY_VALID;
      end
    end
    else if ((I_TU_X != '0) && (I_TU_Y == '0)) begin
      if (I_CTU_Y_ORIGIN != '0) begin
        O_TL_LOCATION = PARA_LOC_ABOVE;
        O_TL_CODING_VALID = 1'b1;
        O_TL_RECON_READY = I_ABOVE_ROW_VALID;
      end
    end
    else begin
      if ((I_CTU_X_ORIGIN != '0) && (I_CTU_Y_ORIGIN != '0)) begin
        O_TL_LOCATION = PARA_LOC_ABOVE_LEFT;
        O_TL_CODING_VALID = 1'b1;
        O_TL_RECON_READY = I_ABOVE_LEFT_VALID;
      end
    end
  end

  O_TL_AVAILABLE =
    O_TL_CODING_VALID && O_TL_RECON_READY;
end

endmodule: INTRA_REF_AVAILABILITY
