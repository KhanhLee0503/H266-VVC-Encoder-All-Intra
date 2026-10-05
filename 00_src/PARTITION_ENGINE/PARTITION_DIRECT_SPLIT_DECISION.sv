//-----------------------------------------------------------
// Description: This module selects the final coding-tree split
// type for the current VVC partition node. The decision combines
// texture activity, directional dominance, and the legal split mask.
// The preferred split follows the project heuristic. If the
// preferred split is illegal, a deterministic fallback sequence
// selects another legal mode. This module is purely combinational.
//-----------------------------------------------------------

`timescale 1ns/1ps

module PARTITION_DIRECT_SPLIT_DECISION
(
  input              I_VALID,

  input      [1:0]   I_ACTIVITY,

  input              I_DOMINANT,
  input              I_STRONG_DOMINANT,
  input              I_HORIZONTAL_DOMINANT,
  input              I_VERTICAL_DOMINANT,
  input              I_DIAGONAL_DOMINANT,

  input      [5:0]   I_LEGAL_MASK,

  output logic       O_VALID,
  output logic [2:0] O_SPLIT_TYPE,
  output logic       O_FALLBACK_USED
);

localparam PARA_ACTIVITY_LOW    = 2'd0;
localparam PARA_ACTIVITY_MEDIUM = 2'd1;
localparam PARA_ACTIVITY_HIGH   = 2'd2;

localparam PARA_SPLIT_NONE = 3'd0;
localparam PARA_SPLIT_QT   = 3'd1;
localparam PARA_SPLIT_HBT  = 3'd2;
localparam PARA_SPLIT_VBT  = 3'd3;
localparam PARA_SPLIT_HTT  = 3'd4;
localparam PARA_SPLIT_VTT  = 3'd5;

logic [2:0] w_preferred_split;
logic [2:0] w_selected_split;

logic       w_any_legal;
logic       w_preferred_legal;

logic       w_legal_none;
logic       w_legal_qt;
logic       w_legal_hbt;
logic       w_legal_vbt;
logic       w_legal_htt;
logic       w_legal_vtt;

// Legal-mask bit order is:
// [5] VTT, [4] HTT, [3] VBT, [2] HBT, [1] QT, [0] NONE.
assign w_legal_none = I_LEGAL_MASK[0];
assign w_legal_qt   = I_LEGAL_MASK[1];
assign w_legal_hbt  = I_LEGAL_MASK[2];
assign w_legal_vbt  = I_LEGAL_MASK[3];
assign w_legal_htt  = I_LEGAL_MASK[4];
assign w_legal_vtt  = I_LEGAL_MASK[5];

assign w_any_legal = |I_LEGAL_MASK;

// The preferred split is selected only from activity and direction.
// This is the project heuristic and is intentionally independent
// from the legal mask. Legality is applied in the following stage.
always_comb begin
  w_preferred_split = PARA_SPLIT_QT;

  unique casez (I_ACTIVITY)
    PARA_ACTIVITY_LOW: begin
      w_preferred_split = PARA_SPLIT_NONE;
    end

    PARA_ACTIVITY_MEDIUM: begin
      if (I_DOMINANT && I_VERTICAL_DOMINANT)
        w_preferred_split = PARA_SPLIT_VBT;
      else if (I_DOMINANT && I_HORIZONTAL_DOMINANT)
        w_preferred_split = PARA_SPLIT_HBT;
      else
        w_preferred_split = PARA_SPLIT_QT;
    end

    PARA_ACTIVITY_HIGH: begin
      if (I_STRONG_DOMINANT && I_VERTICAL_DOMINANT)
        w_preferred_split = PARA_SPLIT_VTT;
      else if (I_STRONG_DOMINANT && I_HORIZONTAL_DOMINANT)
        w_preferred_split = PARA_SPLIT_HTT;
      else if (I_DOMINANT && I_VERTICAL_DOMINANT)
        w_preferred_split = PARA_SPLIT_VBT;
      else if (I_DOMINANT && I_HORIZONTAL_DOMINANT)
        w_preferred_split = PARA_SPLIT_HBT;
      else
        w_preferred_split = PARA_SPLIT_QT;
    end

    default: begin
      w_preferred_split = PARA_SPLIT_QT;
    end
  endcase
end

// Check whether the preferred split is legal for the current node.
always_comb begin
  w_preferred_legal = 1'b0;

  unique casez (w_preferred_split)
    PARA_SPLIT_NONE: w_preferred_legal = w_legal_none;
    PARA_SPLIT_QT:   w_preferred_legal = w_legal_qt;
    PARA_SPLIT_HBT:  w_preferred_legal = w_legal_hbt;
    PARA_SPLIT_VBT:  w_preferred_legal = w_legal_vbt;
    PARA_SPLIT_HTT:  w_preferred_legal = w_legal_htt;
    PARA_SPLIT_VTT:  w_preferred_legal = w_legal_vtt;
    default:         w_preferred_legal = 1'b0;
  endcase
end

// The final split keeps the preferred mode when it is legal.
// Otherwise, a deterministic fallback preserves the detected
// orientation as much as possible. NONE is used only after all
// split alternatives have been rejected by the legal mask.
always_comb begin
  w_selected_split = PARA_SPLIT_NONE;

  if (w_preferred_legal) begin
    w_selected_split = w_preferred_split;
  end
  else if (I_DOMINANT && I_VERTICAL_DOMINANT) begin
    if (w_legal_vbt)
      w_selected_split = PARA_SPLIT_VBT;
    else if (w_legal_vtt)
      w_selected_split = PARA_SPLIT_VTT;
    else if (w_legal_qt)
      w_selected_split = PARA_SPLIT_QT;
    else if (w_legal_hbt)
      w_selected_split = PARA_SPLIT_HBT;
    else if (w_legal_htt)
      w_selected_split = PARA_SPLIT_HTT;
    else
      w_selected_split = PARA_SPLIT_NONE;
  end
  else if (I_DOMINANT && I_HORIZONTAL_DOMINANT) begin
    if (w_legal_hbt)
      w_selected_split = PARA_SPLIT_HBT;
    else if (w_legal_htt)
      w_selected_split = PARA_SPLIT_HTT;
    else if (w_legal_qt)
      w_selected_split = PARA_SPLIT_QT;
    else if (w_legal_vbt)
      w_selected_split = PARA_SPLIT_VBT;
    else if (w_legal_vtt)
      w_selected_split = PARA_SPLIT_VTT;
    else
      w_selected_split = PARA_SPLIT_NONE;
  end
  else begin
    if (w_legal_qt)
      w_selected_split = PARA_SPLIT_QT;
    else if (w_legal_vbt)
      w_selected_split = PARA_SPLIT_VBT;
    else if (w_legal_hbt)
      w_selected_split = PARA_SPLIT_HBT;
    else if (w_legal_vtt)
      w_selected_split = PARA_SPLIT_VTT;
    else if (w_legal_htt)
      w_selected_split = PARA_SPLIT_HTT;
    else
      w_selected_split = PARA_SPLIT_NONE;
  end
end

// O_VALID is asserted only when the input decision is valid and
// the constraint checker reports at least one legal mode.
always_comb begin
  O_VALID         = 1'b0;
  O_SPLIT_TYPE    = PARA_SPLIT_NONE;
  O_FALLBACK_USED = 1'b0;

  if (I_VALID && w_any_legal) begin
    O_VALID      = 1'b1;
    O_SPLIT_TYPE = w_selected_split;

    if (w_selected_split != w_preferred_split)
      O_FALLBACK_USED = 1'b1;
  end
end

endmodule: PARTITION_DIRECT_SPLIT_DECISION
