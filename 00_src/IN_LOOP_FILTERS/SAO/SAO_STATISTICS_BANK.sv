//------------------------------------------------------------------------------
// Description: This module accumulates Sample Adaptive Offset statistics for
//              one picture component at a time. Thirty-two independent Band
//              Offset accumulators accept up to four unique-band groups per
//              transaction. Sixteen independent Edge Offset accumulators
//              accept one fixed-category contribution per channel. BO and EO
//              transactions may be accepted together without sharing a write
//              port. Every accumulator stores an unsigned fifteen-bit count
//              and a signed twenty-six-bit difference sum.
//
//              A synchronous clear initializes all forty-eight accumulators
//              before the first component and between Y, Cb, and Cr. The
//              controller must drain both reduction pipelines before ending
//              collection. A one-entry registered read interface exposes
//              addresses 0 through 31 for BO and 32 through 47 for EO.
//              Reading and collection are mutually exclusive. Addresses
//              48 through 63 return zero and an error flag.
//
//              Each valid BO group must have a distinct band index. This
//              invariant is provided by SAO_BO_REDUCTION_ENGINE. Input
//              contribution widths and channel packing match the previously
//              defined BO and EO reduction engine interfaces.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module SAO_STATISTICS_BANK (
  input                 I_CLK,
  input                 I_RST_N,
  input                 I_CLEAR,
  input                 I_COLLECT_ENABLE,

  input        [3:0]    I_BO_GROUP_VALID,
  input        [19:0]   I_BO_GROUP_BAND_INDEX,
  input        [11:0]   I_BO_GROUP_COUNT,
  input        [51:0]   I_BO_GROUP_DIFF_SUM,
  input                 I_BO_INPUT_VALID,
  output logic          O_BO_INPUT_READY,

  input        [15:0]   I_EO_CATEGORY_VALID,
  input        [47:0]   I_EO_COUNT_DELTA,
  input        [207:0]  I_EO_DIFF_SUM_DELTA,
  input                 I_EO_INPUT_VALID,
  output logic          O_EO_INPUT_READY,

  input                 I_READ_VALID,
  output logic          O_READ_READY,
  input        [5:0]    I_READ_ADDR,
  output logic          O_READ_VALID,
  input                 I_READ_READY,
  output logic [5:0]    O_READ_ADDR,
  output logic [14:0]   O_READ_COUNT,
  output logic [25:0]   O_READ_DIFF_SUM,
  output logic          O_READ_ERROR,
  output logic          O_INITIALIZED
);

  localparam int PARA_BO_BANDS = 32;
  localparam int PARA_EO_CHANNELS = 16;
  localparam int PARA_BO_GROUPS = 4;
  localparam int PARA_COUNT_WD = 15;
  localparam int PARA_DIFF_SUM_WD = 26;
  localparam int PARA_GROUP_COUNT_WD = 3;
  localparam int PARA_GROUP_DIFF_WD = 13;

  logic [PARA_COUNT_WD-1:0] r_bo_count [0:PARA_BO_BANDS-1];
  logic signed [PARA_DIFF_SUM_WD-1:0] r_bo_diff_sum [0:PARA_BO_BANDS-1];
  logic [PARA_COUNT_WD-1:0] r_eo_count [0:PARA_EO_CHANNELS-1];
  logic signed [PARA_DIFF_SUM_WD-1:0] r_eo_diff_sum [0:PARA_EO_CHANNELS-1];

  logic r_initialized;
  logic r_read_valid;
  logic [5:0] r_read_addr;
  logic [PARA_COUNT_WD-1:0] r_read_count;
  logic [PARA_DIFF_SUM_WD-1:0] r_read_diff_sum;
  logic r_read_error;

  logic w_bo_fire;
  logic w_eo_fire;
  logic w_read_slot_available;
  logic w_read_fire;
  logic [PARA_COUNT_WD-1:0] w_read_count;
  logic [PARA_DIFF_SUM_WD-1:0] w_read_diff_sum;
  logic w_read_error;

  // Collection and reading use disjoint operating modes. The controller
  // must clear the bank before its first use after reset.
  assign O_BO_INPUT_READY = I_RST_N && r_initialized && !I_CLEAR &&
                            I_COLLECT_ENABLE && !r_read_valid;
  assign O_EO_INPUT_READY = I_RST_N && r_initialized && !I_CLEAR &&
                            I_COLLECT_ENABLE && !r_read_valid;
  assign w_bo_fire = I_BO_INPUT_VALID && O_BO_INPUT_READY;
  assign w_eo_fire = I_EO_INPUT_VALID && O_EO_INPUT_READY;

  assign w_read_slot_available = !r_read_valid || I_READ_READY;
  assign O_READ_READY = I_RST_N && r_initialized && !I_CLEAR &&
                        !I_COLLECT_ENABLE && w_read_slot_available;
  assign w_read_fire = I_READ_VALID && O_READ_READY;

  // A synchronous clear initializes datapath storage without assigning an
  // asynchronous reset to the forty-eight accumulator entries.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_initialized <= 1'b0;
      r_read_valid  <= 1'b0;
    end
    else if (I_CLEAR) begin
      r_initialized <= 1'b1;
      r_read_valid  <= 1'b0;
    end
    else if (O_READ_READY) begin
      r_read_valid <= I_READ_VALID;
    end
  end

  // BO routing selects at most one contribution per band. Narrow, masked
  // group payloads are OR-reduced before sign or zero extension.
  for (genvar band = 0; band < PARA_BO_BANDS; band++) begin : gen_bo_band
    localparam logic [4:0] PARA_BAND_ID = 5'(band);

    logic [PARA_BO_GROUPS-1:0] w_group_select;
    logic [PARA_GROUP_COUNT_WD-1:0] w_selected_count [0:PARA_BO_GROUPS-1];
    logic [PARA_GROUP_DIFF_WD-1:0] w_selected_diff [0:PARA_BO_GROUPS-1];
    logic [PARA_GROUP_COUNT_WD-1:0] w_count_delta;
    logic [PARA_GROUP_DIFF_WD-1:0] w_diff_delta;
    logic [PARA_COUNT_WD-1:0] w_count_extended;
    logic signed [PARA_DIFF_SUM_WD-1:0] w_diff_extended;
    logic w_write_enable;

    for (genvar group_id = 0; group_id < PARA_BO_GROUPS; group_id++) begin : gen_group
      assign w_group_select[group_id] = I_BO_GROUP_VALID[group_id] &&
        (I_BO_GROUP_BAND_INDEX[5*group_id +: 5] == PARA_BAND_ID);
      assign w_selected_count[group_id] =
        {PARA_GROUP_COUNT_WD{w_group_select[group_id]}} &
        I_BO_GROUP_COUNT[PARA_GROUP_COUNT_WD*group_id +: PARA_GROUP_COUNT_WD];
      assign w_selected_diff[group_id] =
        {PARA_GROUP_DIFF_WD{w_group_select[group_id]}} &
        I_BO_GROUP_DIFF_SUM[PARA_GROUP_DIFF_WD*group_id +: PARA_GROUP_DIFF_WD];
    end

    assign w_write_enable = |w_group_select;
    assign w_count_delta = w_selected_count[0] | w_selected_count[1] |
                           w_selected_count[2] | w_selected_count[3];
    assign w_diff_delta = w_selected_diff[0] | w_selected_diff[1] |
                          w_selected_diff[2] | w_selected_diff[3];
    assign w_count_extended = {{(PARA_COUNT_WD-PARA_GROUP_COUNT_WD){1'b0}},
                               w_count_delta};
    assign w_diff_extended = $signed({{(PARA_DIFF_SUM_WD-PARA_GROUP_DIFF_WD){
                               w_diff_delta[PARA_GROUP_DIFF_WD-1]}}, w_diff_delta});

    // Count and DiffSum for a given band share one sequential owner.
    always_ff @(posedge I_CLK) begin
      if (I_CLEAR) begin
        r_bo_count[band]    <= '0;
        r_bo_diff_sum[band] <= '0;
      end
      else if (w_bo_fire && w_write_enable) begin
        r_bo_count[band]    <= r_bo_count[band] + w_count_extended;
        r_bo_diff_sum[band] <= r_bo_diff_sum[band] + w_diff_extended;
      end
    end
  end

  // EO channel indices are fixed by direction * 4 + category - 1.
  // No address decoder, shared write port, or priority mux is needed.
  for (genvar channel = 0; channel < PARA_EO_CHANNELS; channel++) begin : gen_eo_channel
    logic [PARA_GROUP_COUNT_WD-1:0] w_count_delta;
    logic [PARA_GROUP_DIFF_WD-1:0] w_diff_delta;
    logic [PARA_COUNT_WD-1:0] w_count_extended;
    logic signed [PARA_DIFF_SUM_WD-1:0] w_diff_extended;

    assign w_count_delta =
      I_EO_COUNT_DELTA[PARA_GROUP_COUNT_WD*channel +: PARA_GROUP_COUNT_WD];
    assign w_diff_delta =
      I_EO_DIFF_SUM_DELTA[PARA_GROUP_DIFF_WD*channel +: PARA_GROUP_DIFF_WD];
    assign w_count_extended = {{(PARA_COUNT_WD-PARA_GROUP_COUNT_WD){1'b0}},
                               w_count_delta};
    assign w_diff_extended = $signed({{(PARA_DIFF_SUM_WD-PARA_GROUP_DIFF_WD){
                               w_diff_delta[PARA_GROUP_DIFF_WD-1]}}, w_diff_delta});

    always_ff @(posedge I_CLK) begin
      if (I_CLEAR) begin
        r_eo_count[channel]    <= '0;
        r_eo_diff_sum[channel] <= '0;
      end
      else if (w_eo_fire && I_EO_CATEGORY_VALID[channel]) begin
        r_eo_count[channel]    <= r_eo_count[channel] + w_count_extended;
        r_eo_diff_sum[channel] <= r_eo_diff_sum[channel] + w_diff_extended;
      end
    end
  end

  // The address map contains thirty-two BO entries followed by sixteen EO
  // entries. Unsupported addresses produce a flagged, zero-valued response.
  always_comb begin
    w_read_count    = '0;
    w_read_diff_sum = '0;
    w_read_error    = 1'b0;

    if (I_READ_ADDR < 6'd32) begin
      w_read_count    = r_bo_count[I_READ_ADDR[4:0]];
      w_read_diff_sum = r_bo_diff_sum[I_READ_ADDR[4:0]];
    end
    else if (I_READ_ADDR < 6'd48) begin
      w_read_count    = r_eo_count[I_READ_ADDR[3:0]];
      w_read_diff_sum = r_eo_diff_sum[I_READ_ADDR[3:0]];
    end
    else begin
      w_read_error = 1'b1;
    end
  end

  // A read request replaces the previous response only when its output
  // register is free or the previous response is consumed on this edge.
  always_ff @(posedge I_CLK) begin
    if (w_read_fire) begin
      r_read_addr     <= I_READ_ADDR;
      r_read_count    <= w_read_count;
      r_read_diff_sum <= w_read_diff_sum;
      r_read_error    <= w_read_error;
    end
  end

  assign O_READ_VALID    = r_read_valid;
  assign O_READ_ADDR     = r_read_addr;
  assign O_READ_COUNT    = r_read_count;
  assign O_READ_DIFF_SUM = r_read_diff_sum;
  assign O_READ_ERROR    = r_read_error;
  assign O_INITIALIZED   = r_initialized;

endmodule: SAO_STATISTICS_BANK
