//-----------------------------------------------------------
// Description: This module selects the reference samples used by one H.266/VVC
// angular prediction core. It first determines whether the current angular
// candidate requires the pre-filtered reference set for the project baseline.
// It then selects either the filtered or unfiltered top, left, and top-left
// references, extracts the logical pixel bits from each storage container,
// and maps the selected references to the main and side arrays. A horizontal
// core uses Left as Main and Top as Side, while a vertical core uses Top as
// Main and Left as Side. The orientation is selected by a compile-time
// parameter so that no run-time direction multiplexer is required.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_ANGULAR_REF_SELECT #(
  parameter integer PARA_PIXEL_WD         = 10,
  parameter integer PARA_CONTAINER_WD     = 16,
  parameter integer PARA_REF_NUM          = 64,
  parameter integer PARA_VERTICAL_CORE    = 0
)
(
  input [1:0]                                     I_COMPONENT_ID,
  input [2:0]                                     I_TU_WIDTH_CODE,
  input [2:0]                                     I_TU_HEIGHT_CODE,
  input                                           I_REF_FILTER_FLAG,

  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]    I_UNFILT_TOP_REF,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]    I_UNFILT_LEFT_REF,
  input [PARA_CONTAINER_WD-1:0]                   I_UNFILT_TL_REF,

  input                                           I_FILTERED_VALID,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]    I_FILTERED_TOP_REF,
  input [(PARA_REF_NUM*PARA_CONTAINER_WD)-1:0]    I_FILTERED_LEFT_REF,
  input [PARA_CONTAINER_WD-1:0]                   I_FILTERED_TL_REF,

  output logic                                    O_REF_READY,
  output logic                                    O_USE_FILTERED,
  output logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] O_MAIN_REF,
  output logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] O_SIDE_REF,
  output logic [PARA_PIXEL_WD-1:0]                O_TL_REF
);

localparam [1:0] PARA_COMPONENT_Y = 2'b00;

logic                                    w_width_supported;
logic                                    w_height_supported;
logic                                    w_size_valid;
logic [3:0]                              w_size_code_sum;
logic                                    w_area_gt_32;
logic                                    w_filter_required;
logic                                    w_reference_ready;
logic                                    w_use_filtered;

logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] w_selected_top_ref;
logic [(PARA_REF_NUM*PARA_PIXEL_WD)-1:0] w_selected_left_ref;
logic [PARA_PIXEL_WD-1:0]                w_selected_tl_ref;

genvar gen_ref;

always_comb begin
  w_width_supported = 1'b1;

  unique casez (I_TU_WIDTH_CODE)
    3'd2: begin
      w_width_supported = 1'b1;
    end

    3'd3: begin
      w_width_supported = 1'b1;
    end

    3'd4: begin
      w_width_supported = 1'b1;
    end

    3'd5: begin
      w_width_supported = 1'b1;
    end

    default: begin
      w_width_supported = 1'b0;
    end
  endcase
end

always_comb begin
  w_height_supported = 1'b1;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_height_supported = 1'b1;
    end

    3'd3: begin
      w_height_supported = 1'b1;
    end

    3'd4: begin
      w_height_supported = 1'b1;
    end

    3'd5: begin
      w_height_supported = 1'b1;
    end

    default: begin
      w_height_supported = 1'b0;
    end
  endcase
end

assign w_size_valid =
  w_width_supported &&
  w_height_supported;

assign w_size_code_sum =
  {1'b0, I_TU_WIDTH_CODE} +
  {1'b0, I_TU_HEIGHT_CODE};

assign w_area_gt_32 =
  w_size_valid &&
  (w_size_code_sum > 4'd5);

assign w_filter_required =
  w_size_valid &&
  (I_COMPONENT_ID == PARA_COMPONENT_Y) &&
  w_area_gt_32 &&
  I_REF_FILTER_FLAG;

assign w_reference_ready =
  w_size_valid &&
  (
    !w_filter_required ||
    I_FILTERED_VALID
  );

assign w_use_filtered =
  w_filter_required &&
  I_FILTERED_VALID;

assign O_REF_READY =
  w_reference_ready;

assign O_USE_FILTERED =
  w_use_filtered;

generate
  for (
    gen_ref = 0;
    gen_ref < PARA_REF_NUM;
    gen_ref = gen_ref + 1
  ) begin: GEN_REFERENCE_SELECT

    assign w_selected_top_ref[
      (gen_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD
    ] =
      w_reference_ready
      ? (
          w_use_filtered
          ? I_FILTERED_TOP_REF[
              (gen_ref*PARA_CONTAINER_WD) +: PARA_PIXEL_WD
            ]
          : I_UNFILT_TOP_REF[
              (gen_ref*PARA_CONTAINER_WD) +: PARA_PIXEL_WD
            ]
        )
      : {PARA_PIXEL_WD{1'b0}};

    assign w_selected_left_ref[
      (gen_ref*PARA_PIXEL_WD) +: PARA_PIXEL_WD
    ] =
      w_reference_ready
      ? (
          w_use_filtered
          ? I_FILTERED_LEFT_REF[
              (gen_ref*PARA_CONTAINER_WD) +: PARA_PIXEL_WD
            ]
          : I_UNFILT_LEFT_REF[
              (gen_ref*PARA_CONTAINER_WD) +: PARA_PIXEL_WD
            ]
        )
      : {PARA_PIXEL_WD{1'b0}};

  end
endgenerate

assign w_selected_tl_ref =
  w_reference_ready
  ? (
      w_use_filtered
      ? I_FILTERED_TL_REF[PARA_PIXEL_WD-1:0]
      : I_UNFILT_TL_REF[PARA_PIXEL_WD-1:0]
    )
  : {PARA_PIXEL_WD{1'b0}};

generate
  if (PARA_VERTICAL_CORE == 1) begin: GEN_VERTICAL_CORE_MAP

    assign O_MAIN_REF =
      w_selected_top_ref;

    assign O_SIDE_REF =
      w_selected_left_ref;

    assign O_TL_REF =
      w_selected_tl_ref;

  end
  else begin: GEN_HORIZONTAL_CORE_MAP

    assign O_MAIN_REF =
      w_selected_left_ref;

    assign O_SIDE_REF =
      w_selected_top_ref;

    assign O_TL_REF =
      w_selected_tl_ref;

  end
endgenerate

endmodule: INTRA_ANGULAR_REF_SELECT
