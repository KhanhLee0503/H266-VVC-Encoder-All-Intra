//-----------------------------------------------------------
// Description: This module performs fully parallel H.266/VVC intra reference
// sample filtering for the project baseline. Sixty-three filtering units are
// instantiated for the left reference, one filtering unit is instantiated
// for the top-left reference, and sixty-three filtering units are instantiated
// for the top reference. The active units are selected from the current TU
// dimensions. The last active left and top reference samples bypass the filter
// and are delayed to match the pipeline latency of INTRA_REF_FILTER_UNIT.
// Filtered samples and the two bypassed endpoints are assembled into complete
// 64-sample left and top reference arrays.
//-----------------------------------------------------------
`timescale 1ns/1ps

module INTRA_REF_FILTER #(
  parameter integer PARA_PIXEL_WD     = 10,
  parameter integer PARA_CONTAINER_WD = 16
)
(
  input                                         I_CLK,
  input                                         I_RESETN,

  input                                         I_FILTER_START,
  input [2:0]                                   I_TU_WIDTH_CODE,
  input [2:0]                                   I_TU_HEIGHT_CODE,

  input [(64*PARA_CONTAINER_WD)-1:0]            I_UNFILT_TOP_REF,
  input [(64*PARA_CONTAINER_WD)-1:0]            I_UNFILT_LEFT_REF,
  input [PARA_CONTAINER_WD-1:0]                 I_UNFILT_TL_REF,

  output logic                                  O_FILTER_DONE,
  output logic [(64*PARA_CONTAINER_WD)-1:0]     O_FILTERED_TOP_REF,
  output logic [(64*PARA_CONTAINER_WD)-1:0]     O_FILTERED_LEFT_REF,
  output logic [PARA_CONTAINER_WD-1:0]          O_FILTERED_TL_REF
);

localparam integer PARA_MAX_REF_SAMPLES  = 64;
localparam integer PARA_FILTER_UNITS_SIDE = 63;

logic [6:0]                            w_top_filter_count;
logic [6:0]                            w_left_filter_count;
logic                                  w_width_supported;
logic                                  w_height_supported;
logic                                  w_filter_launch_valid;

logic [PARA_CONTAINER_WD-1:0]          w_top_endpoint_sample;
logic [PARA_CONTAINER_WD-1:0]          w_left_endpoint_sample;

logic [6:0]                            r_top_filter_count;
logic [6:0]                            r_left_filter_count;

logic [PARA_CONTAINER_WD-1:0]          r_top_endpoint_stage1;
logic [PARA_CONTAINER_WD-1:0]          r_top_endpoint_stage2;
logic [PARA_CONTAINER_WD-1:0]          r_left_endpoint_stage1;
logic [PARA_CONTAINER_WD-1:0]          r_left_endpoint_stage2;

logic                                  r_bypass_stage1_valid;
logic                                  r_bypass_stage2_valid;

logic [PARA_PIXEL_WD-1:0]              w_left_filtered_sample [0:PARA_FILTER_UNITS_SIDE-1];
logic                                  w_left_filtered_valid  [0:PARA_FILTER_UNITS_SIDE-1];

logic [PARA_PIXEL_WD-1:0]              w_top_filtered_sample [0:PARA_FILTER_UNITS_SIDE-1];
logic                                  w_top_filtered_valid  [0:PARA_FILTER_UNITS_SIDE-1];

logic [PARA_PIXEL_WD-1:0]              w_tl_filtered_sample;
logic                                  w_tl_filtered_valid;

logic [(64*PARA_CONTAINER_WD)-1:0]     w_left_filtered_bus;
logic [(64*PARA_CONTAINER_WD)-1:0]     w_top_filtered_bus;

always_comb begin
  w_top_filter_count = 7'd0;
  w_width_supported = 1'b1;

  unique casez (I_TU_WIDTH_CODE)
    3'd2: begin
      w_top_filter_count = 7'd7;
    end
    3'd3: begin
      w_top_filter_count = 7'd15;
    end
    3'd4: begin
      w_top_filter_count = 7'd31;
    end
    3'd5: begin
      w_top_filter_count = 7'd63;
    end
    default: begin
      w_top_filter_count = 7'd0;
      w_width_supported = 1'b0;
    end
  endcase
end

always_comb begin
  w_left_filter_count = 7'd0;
  w_height_supported = 1'b1;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_left_filter_count = 7'd7;
    end
    3'd3: begin
      w_left_filter_count = 7'd15;
    end
    3'd4: begin
      w_left_filter_count = 7'd31;
    end
    3'd5: begin
      w_left_filter_count = 7'd63;
    end
    default: begin
      w_left_filter_count = 7'd0;
      w_height_supported = 1'b0;
    end
  endcase
end

assign w_filter_launch_valid =
  I_FILTER_START &&
  w_width_supported &&
  w_height_supported;

always_comb begin
  w_top_endpoint_sample = '0;

  unique casez (I_TU_WIDTH_CODE)
    3'd2: begin
      w_top_endpoint_sample =
        I_UNFILT_TOP_REF[(7*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    3'd3: begin
      w_top_endpoint_sample =
        I_UNFILT_TOP_REF[(15*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    3'd4: begin
      w_top_endpoint_sample =
        I_UNFILT_TOP_REF[(31*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    3'd5: begin
      w_top_endpoint_sample =
        I_UNFILT_TOP_REF[(63*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    default: begin
      w_top_endpoint_sample = '0;
    end
  endcase
end

always_comb begin
  w_left_endpoint_sample = '0;

  unique casez (I_TU_HEIGHT_CODE)
    3'd2: begin
      w_left_endpoint_sample =
        I_UNFILT_LEFT_REF[(7*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    3'd3: begin
      w_left_endpoint_sample =
        I_UNFILT_LEFT_REF[(15*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    3'd4: begin
      w_left_endpoint_sample =
        I_UNFILT_LEFT_REF[(31*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    3'd5: begin
      w_left_endpoint_sample =
        I_UNFILT_LEFT_REF[(63*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD];
    end
    default: begin
      w_left_endpoint_sample = '0;
    end
  endcase
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_top_filter_count <= 7'd0;
    r_left_filter_count <= 7'd0;
  end
  else if (w_filter_launch_valid) begin
    r_top_filter_count <= w_top_filter_count;
    r_left_filter_count <= w_left_filter_count;
  end
end

always_ff @ (posedge I_CLK, negedge I_RESETN) begin
  if (!I_RESETN) begin
    r_top_endpoint_stage1 <= '0;
    r_top_endpoint_stage2 <= '0;
    r_left_endpoint_stage1 <= '0;
    r_left_endpoint_stage2 <= '0;
    r_bypass_stage1_valid <= 1'b0;
    r_bypass_stage2_valid <= 1'b0;
  end
  else begin
    r_bypass_stage1_valid <= w_filter_launch_valid;
    r_bypass_stage2_valid <= r_bypass_stage1_valid;

    if (w_filter_launch_valid) begin
      r_top_endpoint_stage1 <= w_top_endpoint_sample;
      r_left_endpoint_stage1 <= w_left_endpoint_sample;
    end

    if (r_bypass_stage1_valid) begin
      r_top_endpoint_stage2 <= r_top_endpoint_stage1;
      r_left_endpoint_stage2 <= r_left_endpoint_stage1;
    end
  end
end

genvar g_left;
generate
  for (g_left = 0; g_left < PARA_FILTER_UNITS_SIDE; g_left = g_left + 1) begin: GEN_LEFT_FILTER_ARRAY

    logic w_unit_active;

    logic [PARA_PIXEL_WD-1:0] w_ref_a;
    logic [PARA_PIXEL_WD-1:0] w_ref_b;
    logic [PARA_PIXEL_WD-1:0] w_ref_c;

    assign w_unit_active =
      w_filter_launch_valid &&
      (g_left < w_left_filter_count);

    assign w_ref_a =
      w_unit_active
      ? I_UNFILT_LEFT_REF[((g_left+1)*PARA_CONTAINER_WD) +: PARA_PIXEL_WD]
      : '0;

    assign w_ref_b =
      w_unit_active
      ? I_UNFILT_LEFT_REF[(g_left*PARA_CONTAINER_WD) +: PARA_PIXEL_WD]
      : '0;

    if (g_left == 0) begin: GEN_LEFT_FIRST_SAMPLE
      assign w_ref_c =
        w_unit_active
        ? I_UNFILT_TL_REF[PARA_PIXEL_WD-1:0]
        : '0;
    end
    else begin: GEN_LEFT_OTHER_SAMPLE
      assign w_ref_c =
        w_unit_active
        ? I_UNFILT_LEFT_REF[((g_left-1)*PARA_CONTAINER_WD) +: PARA_PIXEL_WD]
        : '0;
    end

    INTRA_REF_FILTER_UNIT #(
      .PIXEL_WIDTH(PARA_PIXEL_WD)
    )
    u_intra_ref_filter_unit_left (
      .I_CLK(I_CLK),
      .I_RST_N(I_RESETN),
      .I_VALID(w_unit_active),
      .I_REF_A(w_ref_a),
      .I_REF_B(w_ref_b),
      .I_REF_C(w_ref_c),
      .O_VALID(w_left_filtered_valid[g_left]),
      .O_FILTERED_SAMPLE(w_left_filtered_sample[g_left])
    );

  end
endgenerate

INTRA_REF_FILTER_UNIT #(
  .PIXEL_WIDTH(PARA_PIXEL_WD)
)
u_intra_ref_filter_unit_tl (
  .I_CLK(I_CLK),
  .I_RST_N(I_RESETN),
  .I_VALID(w_filter_launch_valid),
  .I_REF_A(
    w_filter_launch_valid
    ? I_UNFILT_LEFT_REF[0 +: PARA_PIXEL_WD]
    : '0
  ),
  .I_REF_B(
    w_filter_launch_valid
    ? I_UNFILT_TL_REF[PARA_PIXEL_WD-1:0]
    : '0
  ),
  .I_REF_C(
    w_filter_launch_valid
    ? I_UNFILT_TOP_REF[0 +: PARA_PIXEL_WD]
    : '0
  ),
  .O_VALID(w_tl_filtered_valid),
  .O_FILTERED_SAMPLE(w_tl_filtered_sample)
);

genvar g_top;
generate
  for (g_top = 0; g_top < PARA_FILTER_UNITS_SIDE; g_top = g_top + 1) begin: GEN_TOP_FILTER_ARRAY

    logic w_unit_active;

    logic [PARA_PIXEL_WD-1:0] w_ref_a;
    logic [PARA_PIXEL_WD-1:0] w_ref_b;
    logic [PARA_PIXEL_WD-1:0] w_ref_c;

    assign w_unit_active =
      w_filter_launch_valid &&
      (g_top < w_top_filter_count);

    if (g_top == 0) begin: GEN_TOP_FIRST_SAMPLE
      assign w_ref_a =
        w_unit_active
        ? I_UNFILT_TL_REF[PARA_PIXEL_WD-1:0]
        : '0;
    end
    else begin: GEN_TOP_OTHER_SAMPLE
      assign w_ref_a =
        w_unit_active
        ? I_UNFILT_TOP_REF[((g_top-1)*PARA_CONTAINER_WD) +: PARA_PIXEL_WD]
        : '0;
    end

    assign w_ref_b =
      w_unit_active
      ? I_UNFILT_TOP_REF[(g_top*PARA_CONTAINER_WD) +: PARA_PIXEL_WD]
      : '0;

    assign w_ref_c =
      w_unit_active
      ? I_UNFILT_TOP_REF[((g_top+1)*PARA_CONTAINER_WD) +: PARA_PIXEL_WD]
      : '0;

    INTRA_REF_FILTER_UNIT #(
      .PIXEL_WIDTH(PARA_PIXEL_WD)
    )
    u_intra_ref_filter_unit_top (
      .I_CLK(I_CLK),
      .I_RST_N(I_RESETN),
      .I_VALID(w_unit_active),
      .I_REF_A(w_ref_a),
      .I_REF_B(w_ref_b),
      .I_REF_C(w_ref_c),
      .O_VALID(w_top_filtered_valid[g_top]),
      .O_FILTERED_SAMPLE(w_top_filtered_sample[g_top])
    );

  end
endgenerate

genvar g_left_pack;
generate
  for (g_left_pack = 0; g_left_pack < PARA_FILTER_UNITS_SIDE; g_left_pack = g_left_pack + 1) begin: GEN_LEFT_OUTPUT_PACK

    assign w_left_filtered_bus[
      (g_left_pack*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
    ] =
      (g_left_pack < r_left_filter_count)
      ? {
          {(PARA_CONTAINER_WD-PARA_PIXEL_WD){1'b0}},
          w_left_filtered_sample[g_left_pack]
        }
      : '0;

  end
endgenerate

assign w_left_filtered_bus[
  (63*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
] = '0;

genvar g_top_pack;
generate
  for (g_top_pack = 0; g_top_pack < PARA_FILTER_UNITS_SIDE; g_top_pack = g_top_pack + 1) begin: GEN_TOP_OUTPUT_PACK

    assign w_top_filtered_bus[
      (g_top_pack*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
    ] =
      (g_top_pack < r_top_filter_count)
      ? {
          {(PARA_CONTAINER_WD-PARA_PIXEL_WD){1'b0}},
          w_top_filtered_sample[g_top_pack]
        }
      : '0;

  end
endgenerate

assign w_top_filtered_bus[
  (63*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
] = '0;

always_comb begin
  O_FILTERED_LEFT_REF = w_left_filtered_bus;

  unique casez (r_left_filter_count)
    7'd7: begin
      O_FILTERED_LEFT_REF[
        (7*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_left_endpoint_stage2;
    end
    7'd15: begin
      O_FILTERED_LEFT_REF[
        (15*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_left_endpoint_stage2;
    end
    7'd31: begin
      O_FILTERED_LEFT_REF[
        (31*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_left_endpoint_stage2;
    end
    7'd63: begin
      O_FILTERED_LEFT_REF[
        (63*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_left_endpoint_stage2;
    end
    default: begin
      O_FILTERED_LEFT_REF = '0;
    end
  endcase
end

always_comb begin
  O_FILTERED_TOP_REF = w_top_filtered_bus;

  unique casez (r_top_filter_count)
    7'd7: begin
      O_FILTERED_TOP_REF[
        (7*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_top_endpoint_stage2;
    end
    7'd15: begin
      O_FILTERED_TOP_REF[
        (15*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_top_endpoint_stage2;
    end
    7'd31: begin
      O_FILTERED_TOP_REF[
        (31*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_top_endpoint_stage2;
    end
    7'd63: begin
      O_FILTERED_TOP_REF[
        (63*PARA_CONTAINER_WD) +: PARA_CONTAINER_WD
      ] = r_top_endpoint_stage2;
    end
    default: begin
      O_FILTERED_TOP_REF = '0;
    end
  endcase
end

always_comb begin
  O_FILTERED_TL_REF = {
    {(PARA_CONTAINER_WD-PARA_PIXEL_WD){1'b0}},
    w_tl_filtered_sample
  };
end

always_comb begin
  O_FILTER_DONE =
    w_tl_filtered_valid &&
    r_bypass_stage2_valid;
end

endmodule: INTRA_REF_FILTER
