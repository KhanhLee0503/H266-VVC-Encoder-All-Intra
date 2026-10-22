//------------------------------------------------------------------------------
// Description: This combinational collector synchronizes the four registered
// outputs of DBF_FO_LANE for one VVC deblocking edge transaction. It packs
// four 256-bit sample lanes and four 16-bit per-sample write masks, masks
// inactive chroma lanes, and suppresses all writes on any FO or format error.
// All four lanes are consumed together by a single ready/valid handshake.
// The FO lanes, rather than this module, hold data during downstream stalls.
// Boundary bypass and metadata forwarding are owned by the parent wrapper.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module DBF_OUTPUT_SELECTOR (
  input         [3:0]   I_FO_VALID,
  output logic          O_FO_READY,
  input      [1023:0]   I_FO_DATA,
  input        [63:0]   I_FO_WRITE_MASK,
  input         [3:0]   I_FO_ERROR,
  input         [3:0]   I_LANE_MASK,
  output logic          O_RESULT_VALID,
  input                 I_RESULT_READY,
  output logic [1023:0] O_FILTERED_WINDOW,
  output logic  [63:0]  O_SAMPLE_WRITE_MASK,
  output logic          O_ERROR
);
  logic        w_all_fo_valid;
  logic        w_any_fo_error;
  logic        w_lane_mask_legal;
  logic [63:0] w_active_write_mask;

  assign w_all_fo_valid    = &I_FO_VALID;
  assign w_any_fo_error    = |I_FO_ERROR;
  assign w_lane_mask_legal = (I_LANE_MASK == 4'b1111) ||
                             (I_LANE_MASK == 4'b0011);

  // Invalid lanes never contribute write enables, even if they contain data.
  always_comb begin
    w_active_write_mask = '0;
    for (integer i = 0; i < 4; i++) begin
      if (I_LANE_MASK[i])
        w_active_write_mask[i*16 +: 16] = I_FO_WRITE_MASK[i*16 +: 16];
    end
  end

  // All four FO output registers must be consumed in the same clock cycle.
  assign O_RESULT_VALID = w_all_fo_valid;
  assign O_FO_READY     = w_all_fo_valid && I_RESULT_READY;

  // Error is meaningful only when the complete transaction is available.
  // Preserve the sample payload for debug; its write mask is forced to zero.
  assign O_ERROR = w_all_fo_valid &&
                   (w_any_fo_error || !w_lane_mask_legal);
  assign O_FILTERED_WINDOW = I_FO_DATA;
  assign O_SAMPLE_WRITE_MASK = (w_all_fo_valid && !O_ERROR) ?
                               w_active_write_mask : 64'd0;
endmodule: DBF_OUTPUT_SELECTOR
