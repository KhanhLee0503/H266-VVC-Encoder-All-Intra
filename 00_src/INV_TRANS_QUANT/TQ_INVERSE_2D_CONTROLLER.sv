//-----------------------------------------------------------
// Description: H.266/VVC inverse 2-D transform control plane.
// - Independent column/row TU controllers.
// - No sample datapath and no duplicated transpose ownership.
// - Four 16-bit samples per accepted beat.
// - Supports independent W,H = 4/8/16/32 and 3 transform types.
// - One Column TU and one Row TU may overlap.
// - Generates START/LAST for transpose write at scaled BEAT
//   acceptance (not at input acceptance or raw-core latency).
// - Releases transpose TU only when the LAST *final scaled*
//   output beat is accepted by Reconstruction.
// - Does not assume a fixed Core or Scaling latency.
// - Sticky protocol error; reset for recovery.
//-----------------------------------------------------------
`timescale 1ns/1ps
module TQ_INVERSE_2D_CONTROLLER #(
  parameter PARA_TU_ID_WD = 16
)(
  input                              I_CLK,
  input                              I_RESETN,
  // New TU from inverse quantization, column-major, 4 samples/beat.
  input                              I_IN_VALID,
  output logic                       O_IN_READY,
  input                              I_IN_TU_START,
  input                              I_IN_TU_LAST,
  input        [PARA_TU_ID_WD-1:0]   I_IN_TU_ID,
  input        [1:0]                 I_IN_WIDTH,
  input        [1:0]                 I_IN_HEIGHT,
  input        [1:0]                 I_IN_TRANSFORM_HOR,
  input        [1:0]                 I_IN_TRANSFORM_VER,
  input        [1:0]                 I_IN_COMPONENT,
  // Column 1D Core input (data is directly connected in TOP).
  output logic                       O_COL_IN_VALID,
  input                              I_COL_IN_READY,
  output logic [1:0]                 O_COL_TRANSFORM_TYPE,
  output logic [1:0]                 O_COL_TRANSFORM_SIZE,
  // Column 1D Core raw output -> column scaling input.
  input                              I_COL_OUT_VALID,
  input                              I_COL_OUT_LAST,
  output logic                       O_COL_OUT_READY,
  output logic                       O_COL_SCALE_IN_VALID,
  input                              I_COL_SCALE_IN_READY,
  // Column scaling output -> transpose writer.
  input                              I_COL_SCALE_OUT_VALID,
  output logic                       O_COL_SCALE_OUT_READY,
  output logic                       O_MEM_WR_VALID,
  input                              I_MEM_WR_READY,
  output logic                       O_MEM_WR_TU_START,
  output logic                       O_MEM_WR_TU_LAST,
  output logic [PARA_TU_ID_WD-1:0]  O_MEM_WR_TU_ID,
  output logic [1:0]                 O_MEM_WR_WIDTH,
  output logic [1:0]                 O_MEM_WR_HEIGHT,
  output logic [1:0]                 O_MEM_WR_TRANSFORM_HOR,
  output logic [1:0]                 O_MEM_WR_TRANSFORM_VER,
  output logic [1:0]                 O_MEM_WR_COMPONENT,
  // Transpose reader -> Row 1D Core input.
  input                              I_MEM_RD_VALID,
  input                              I_MEM_RD_VECTOR_LAST,
  input                              I_MEM_RD_TU_START,
  input                              I_MEM_RD_TU_LAST,
  input        [PARA_TU_ID_WD-1:0]  I_MEM_RD_TU_ID,
  input        [1:0]                 I_MEM_RD_WIDTH,
  input        [1:0]                 I_MEM_RD_HEIGHT,
  input        [1:0]                 I_MEM_RD_TRANSFORM_HOR,
  input        [1:0]                 I_MEM_RD_TRANSFORM_VER,
  input        [1:0]                 I_MEM_RD_COMPONENT,
  output logic                       O_MEM_RD_READY,
  output logic                       O_ROW_IN_VALID,
  input                              I_ROW_IN_READY,
  output logic [1:0]                 O_ROW_TRANSFORM_TYPE,
  output logic [1:0]                 O_ROW_TRANSFORM_SIZE,
  // Row 1D Core raw output -> row scaling input.
  input                              I_ROW_OUT_VALID,
  input                              I_ROW_OUT_LAST,
  output logic                       O_ROW_OUT_READY,
  output logic                       O_ROW_SCALE_IN_VALID,
  input                              I_ROW_SCALE_IN_READY,
  // Row scaling output -> Reconstruction (data connected in TOP).
  input                              I_ROW_SCALE_OUT_VALID,
  output logic                       O_ROW_SCALE_OUT_READY,
  output logic                       O_RESULT_VALID,
  input                              I_RESULT_READY,
  output logic                       O_RESULT_TU_START,
  output logic                       O_RESULT_VECTOR_LAST,
  output logic                       O_RESULT_TU_LAST,
  output logic [PARA_TU_ID_WD-1:0]  O_RESULT_TU_ID,
  output logic [1:0]                 O_RESULT_WIDTH,
  output logic [1:0]                 O_RESULT_HEIGHT,
  output logic [1:0]                 O_RESULT_COMPONENT,
  output logic [1:0]                 O_RESULT_TRANSFORM_HOR,
  output logic [1:0]                 O_RESULT_TRANSFORM_VER,
  // Release currently owned transpose buffer after final result.
  output logic                       O_TU_DONE_VALID,
  output logic [PARA_TU_ID_WD-1:0]  O_TU_DONE_ID,
  input                              I_MEM_PROTOCOL_ERROR,
  output logic                       O_PROTOCOL_ERROR,
  output logic                       O_BUSY
);
  localparam logic [1:0] ST_IDLE   = 2'd0;
  localparam logic [1:0] ST_ACTIVE = 2'd1;
  localparam logic [1:0] ST_DRAIN  = 2'd2;

  logic [1:0] r_col_state;
  logic [1:0] r_row_state;
  logic [PARA_TU_ID_WD-1:0] r_col_tu_id;
  logic [PARA_TU_ID_WD-1:0] r_row_tu_id;
  logic [1:0] r_col_width, r_col_height;
  logic [1:0] r_col_hor, r_col_ver, r_col_component;
  logic [1:0] r_row_width, r_row_height;
  logic [1:0] r_row_hor, r_row_ver, r_row_component;
  logic [8:0] r_col_total_beats;
  logic [8:0] r_col_input_count;
  logic [8:0] r_col_raw_count;
  logic [8:0] r_col_write_count;
  logic [8:0] r_row_total_beats;
  logic [8:0] r_row_input_count;
  logic [8:0] r_row_raw_count;
  logic [8:0] r_row_result_count;
  logic [2:0] r_outstanding_tus;

  logic [8:0] w_first_total_beats;
  logic [8:0] w_row_first_total_beats;
  logic [8:0] w_col_raw_beats_per_vector;
  logic [8:0] w_row_raw_beats_per_vector;
  logic [8:0] w_row_result_beats_per_vector;
  logic w_in_fire;
  logic w_col_raw_fire;
  logic w_mem_write_fire;
  logic w_mem_read_fire;
  logic w_row_raw_fire;
  logic w_result_fire;
  logic w_col_first;
  logic w_row_first;
  logic w_col_final_input;
  logic w_col_final_write;
  logic w_row_final_input;
  logic w_row_final_result;
  logic w_col_valid_type;
  logic w_row_valid_type;
  logic w_allow_col;
  logic w_allow_row;
  logic w_new_tu;
  logic w_complete_tu;

  // Cast the shift amount to 3 bits; two 2-bit operands can sum to 6.
  assign w_first_total_beats = 9'd4 <<
    ({1'b0, I_IN_WIDTH} + {1'b0, I_IN_HEIGHT});
  assign w_row_first_total_beats = 9'd4 <<
    ({1'b0, I_MEM_RD_WIDTH} + {1'b0, I_MEM_RD_HEIGHT});
  assign w_col_raw_beats_per_vector = 9'd1 << r_col_height;
  assign w_row_raw_beats_per_vector = 9'd1 << r_row_width;
  assign w_row_result_beats_per_vector = 9'd1 << r_row_width;
  assign w_col_valid_type = (I_IN_TRANSFORM_HOR != 2'b11) &&
                            (I_IN_TRANSFORM_VER != 2'b11) &&
                            (I_IN_COMPONENT != 2'b11);
  assign w_row_valid_type = (I_MEM_RD_TRANSFORM_HOR != 2'b11) &&
                            (I_MEM_RD_COMPONENT != 2'b11);
  assign w_allow_col = !O_PROTOCOL_ERROR &&
                       ((r_col_state == ST_ACTIVE) ||
                        ((r_col_state == ST_IDLE) && I_MEM_WR_READY &&
                         w_col_valid_type));
  assign w_allow_row = !O_PROTOCOL_ERROR &&
                       ((r_row_state == ST_ACTIVE) ||
                        ((r_row_state == ST_IDLE) && w_row_valid_type));

  // ---------------------------------------------------------
  // Column input dispatch and vertical transform configuration
  // ---------------------------------------------------------
  assign O_IN_READY = w_allow_col && I_COL_IN_READY;
  assign O_COL_IN_VALID = I_IN_VALID && w_allow_col;
  assign O_COL_TRANSFORM_TYPE = (r_col_state == ST_IDLE) ?
                                I_IN_TRANSFORM_VER : r_col_ver;
  assign O_COL_TRANSFORM_SIZE = (r_col_state == ST_IDLE) ?
                                I_IN_HEIGHT : r_col_height;
  assign w_in_fire = I_IN_VALID && O_IN_READY;
  assign w_col_first = w_in_fire && (r_col_state == ST_IDLE);
  assign w_col_final_input = w_in_fire &&
    ((r_col_state == ST_IDLE) ? (w_first_total_beats == 9'd1) :
                                (r_col_input_count == (r_col_total_beats - 9'd1)));

  // Core output and Column Scaling input share one handshake.
  assign O_COL_SCALE_IN_VALID = I_COL_OUT_VALID &&
                               (r_col_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign O_COL_OUT_READY = I_COL_SCALE_IN_READY &&
                           (r_col_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign w_col_raw_fire = I_COL_OUT_VALID && O_COL_OUT_READY;

  // Column scaling output to RAM: flags derive from ACCEPTED scaled
  // beats, so arbitrary pipeline latency / stalls cannot misalign them.
  assign O_MEM_WR_VALID = I_COL_SCALE_OUT_VALID &&
                          (r_col_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign O_COL_SCALE_OUT_READY = I_MEM_WR_READY &&
                                 (r_col_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign w_mem_write_fire = O_MEM_WR_VALID && I_MEM_WR_READY;
  assign O_MEM_WR_TU_START = (r_col_write_count == 9'd0);
  assign O_MEM_WR_TU_LAST = (r_col_write_count == (r_col_total_beats - 9'd1));
  assign O_MEM_WR_TU_ID = r_col_tu_id;
  assign O_MEM_WR_WIDTH = r_col_width;
  assign O_MEM_WR_HEIGHT = r_col_height;
  assign O_MEM_WR_TRANSFORM_HOR = r_col_hor;
  assign O_MEM_WR_TRANSFORM_VER = r_col_ver;
  assign O_MEM_WR_COMPONENT = r_col_component;
  assign w_col_final_write = w_mem_write_fire && O_MEM_WR_TU_LAST;

  // ---------------------------------------------------------
  // Transpose read -> Row 1D dispatch and horizontal size/mode
  // ---------------------------------------------------------
  assign O_ROW_IN_VALID = I_MEM_RD_VALID && w_allow_row;
  assign O_MEM_RD_READY = I_ROW_IN_READY && w_allow_row;
  assign O_ROW_TRANSFORM_TYPE = (r_row_state == ST_IDLE) ?
                                I_MEM_RD_TRANSFORM_HOR : r_row_hor;
  assign O_ROW_TRANSFORM_SIZE = (r_row_state == ST_IDLE) ?
                                I_MEM_RD_WIDTH : r_row_width;
  assign w_mem_read_fire = I_MEM_RD_VALID && O_MEM_RD_READY;
  assign w_row_first = w_mem_read_fire && (r_row_state == ST_IDLE);
  assign w_row_final_input = w_mem_read_fire &&
    ((r_row_state == ST_IDLE) ? (w_row_first_total_beats == 9'd1) :
                                (r_row_input_count == (r_row_total_beats - 9'd1)));

  assign O_ROW_SCALE_IN_VALID = I_ROW_OUT_VALID &&
                                (r_row_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign O_ROW_OUT_READY = I_ROW_SCALE_IN_READY &&
                           (r_row_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign w_row_raw_fire = I_ROW_OUT_VALID && O_ROW_OUT_READY;

  // Final result sideband is produced AFTER row scaling, using
  // the output beat count, not a guessed pipeline delay.
  assign O_RESULT_VALID = I_ROW_SCALE_OUT_VALID &&
                          (r_row_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign O_ROW_SCALE_OUT_READY = I_RESULT_READY &&
                                 (r_row_state != ST_IDLE) && !O_PROTOCOL_ERROR;
  assign w_result_fire = O_RESULT_VALID && I_RESULT_READY;
  assign O_RESULT_TU_START = O_RESULT_VALID && (r_row_result_count == 9'd0);
  assign O_RESULT_TU_LAST = O_RESULT_VALID &&
                            (r_row_result_count == (r_row_total_beats - 9'd1));
  assign O_RESULT_VECTOR_LAST = O_RESULT_VALID &&
    ((r_row_result_count & (w_row_result_beats_per_vector - 9'd1)) ==
     (w_row_result_beats_per_vector - 9'd1));
  assign O_RESULT_TU_ID = r_row_tu_id;
  assign O_RESULT_WIDTH = r_row_width;
  assign O_RESULT_HEIGHT = r_row_height;
  assign O_RESULT_COMPONENT = r_row_component;
  assign O_RESULT_TRANSFORM_HOR = r_row_hor;
  assign O_RESULT_TRANSFORM_VER = r_row_ver;
  assign w_row_final_result = w_result_fire && O_RESULT_TU_LAST;

  assign O_TU_DONE_VALID = w_row_final_result;
  assign O_TU_DONE_ID = r_row_tu_id;
  assign w_new_tu = w_col_first;
  assign w_complete_tu = w_row_final_result;
  assign O_BUSY = (r_outstanding_tus != 3'd0) ||
                  (r_col_state != ST_IDLE) || (r_row_state != ST_IDLE);

  // ---------------------------------------------------------
  // Independent controller registers and immutable TU metadata
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_col_state <= ST_IDLE;
      r_col_tu_id <= '0;
      r_col_width <= '0;
      r_col_height <= '0;
      r_col_hor <= '0;
      r_col_ver <= '0;
      r_col_component <= '0;
      r_col_total_beats <= '0;
      r_col_input_count <= '0;
      r_col_raw_count <= '0;
      r_col_write_count <= '0;
      r_row_state <= ST_IDLE;
      r_row_tu_id <= '0;
      r_row_width <= '0;
      r_row_height <= '0;
      r_row_hor <= '0;
      r_row_ver <= '0;
      r_row_component <= '0;
      r_row_total_beats <= '0;
      r_row_input_count <= '0;
      r_row_raw_count <= '0;
      r_row_result_count <= '0;
      r_outstanding_tus <= '0;
      O_PROTOCOL_ERROR <= 1'b0;
    end
    else begin
      // Protocol violations are sticky; require reset to recover.
      if (I_MEM_PROTOCOL_ERROR)
        O_PROTOCOL_ERROR <= 1'b1;
      if ((r_col_state == ST_IDLE) && I_IN_VALID &&
          ((I_IN_TRANSFORM_HOR == 2'b11) ||
           (I_IN_TRANSFORM_VER == 2'b11) ||
           (I_IN_COMPONENT == 2'b11)))
        O_PROTOCOL_ERROR <= 1'b1;
      if ((r_row_state == ST_IDLE) && I_MEM_RD_VALID &&
          !w_row_valid_type)
        O_PROTOCOL_ERROR <= 1'b1;

      // Column ownership starts at FIRST accepted input beat.
      if (w_col_first) begin
        r_col_state <= ST_ACTIVE;
        r_col_tu_id <= I_IN_TU_ID;
        r_col_width <= I_IN_WIDTH;
        r_col_height <= I_IN_HEIGHT;
        r_col_hor <= I_IN_TRANSFORM_HOR;
        r_col_ver <= I_IN_TRANSFORM_VER;
        r_col_component <= I_IN_COMPONENT;
        r_col_total_beats <= w_first_total_beats;
        r_col_input_count <= 9'd1;
        r_col_raw_count <= '0;
        r_col_write_count <= '0;
        if (!I_IN_TU_START ||
            (I_IN_TU_LAST != (w_first_total_beats == 9'd1)))
          O_PROTOCOL_ERROR <= 1'b1;
      end
      else if ((r_col_state == ST_ACTIVE) && w_in_fire) begin
        r_col_input_count <= r_col_input_count + 9'd1;
        if (I_IN_TU_START || (I_IN_TU_LAST != w_col_final_input))
          O_PROTOCOL_ERROR <= 1'b1;
      end
      if (w_col_final_input)
        r_col_state <= ST_DRAIN;

      if (w_col_raw_fire) begin
        r_col_raw_count <= r_col_raw_count + 9'd1;
        if ((r_col_raw_count >= r_col_total_beats) ||
            (I_COL_OUT_LAST !=
             ((r_col_raw_count & (w_col_raw_beats_per_vector - 9'd1)) ==
              (w_col_raw_beats_per_vector - 9'd1))))
          O_PROTOCOL_ERROR <= 1'b1;
      end
      if (w_mem_write_fire) begin
        r_col_write_count <= r_col_write_count + 9'd1;
        if (r_col_write_count >= r_col_total_beats)
          O_PROTOCOL_ERROR <= 1'b1;
      end
      if (w_col_final_write) begin
        r_col_state <= ST_IDLE;
        if ((r_col_raw_count + 9'(w_col_raw_fire)) != r_col_total_beats ||
            (r_col_input_count + 9'(w_in_fire)) != r_col_total_beats)
          O_PROTOCOL_ERROR <= 1'b1;
      end

      // Row ownership starts at FIRST accepted transpose beat.
      if (w_row_first) begin
        r_row_state <= ST_ACTIVE;
        r_row_tu_id <= I_MEM_RD_TU_ID;
        r_row_width <= I_MEM_RD_WIDTH;
        r_row_height <= I_MEM_RD_HEIGHT;
        r_row_hor <= I_MEM_RD_TRANSFORM_HOR;
        r_row_ver <= I_MEM_RD_TRANSFORM_VER;
        r_row_component <= I_MEM_RD_COMPONENT;
        r_row_total_beats <= w_row_first_total_beats;
        r_row_input_count <= 9'd1;
        r_row_raw_count <= '0;
        r_row_result_count <= '0;
        if (!I_MEM_RD_TU_START ||
            I_MEM_RD_TU_LAST != (w_row_first_total_beats == 9'd1) ||
            I_MEM_RD_VECTOR_LAST != (I_MEM_RD_WIDTH == 2'b00))
          O_PROTOCOL_ERROR <= 1'b1;
      end
      else if ((r_row_state == ST_ACTIVE) && w_mem_read_fire) begin
        r_row_input_count <= r_row_input_count + 9'd1;
        if (I_MEM_RD_TU_START ||
            I_MEM_RD_TU_LAST != w_row_final_input ||
            I_MEM_RD_VECTOR_LAST !=
            ((r_row_input_count & (w_row_raw_beats_per_vector - 9'd1)) ==
             (w_row_raw_beats_per_vector - 9'd1)) ||
            I_MEM_RD_TU_ID != r_row_tu_id ||
            I_MEM_RD_WIDTH != r_row_width ||
            I_MEM_RD_HEIGHT != r_row_height ||
            I_MEM_RD_TRANSFORM_HOR != r_row_hor ||
            I_MEM_RD_TRANSFORM_VER != r_row_ver ||
            I_MEM_RD_COMPONENT != r_row_component)
          O_PROTOCOL_ERROR <= 1'b1;
      end
      if (w_row_final_input)
        r_row_state <= ST_DRAIN;

      if (w_row_raw_fire) begin
        r_row_raw_count <= r_row_raw_count + 9'd1;
        if ((r_row_raw_count >= r_row_total_beats) ||
            (I_ROW_OUT_LAST !=
             ((r_row_raw_count & (w_row_raw_beats_per_vector - 9'd1)) ==
              (w_row_raw_beats_per_vector - 9'd1))))
          O_PROTOCOL_ERROR <= 1'b1;
      end
      if (w_result_fire) begin
        r_row_result_count <= r_row_result_count + 9'd1;
        if (r_row_result_count >= r_row_total_beats)
          O_PROTOCOL_ERROR <= 1'b1;
      end
      if (w_row_final_result) begin
        r_row_state <= ST_IDLE;
        if ((r_row_raw_count + 9'(w_row_raw_fire)) != r_row_total_beats ||
            (r_row_input_count + 9'(w_mem_read_fire)) != r_row_total_beats)
          O_PROTOCOL_ERROR <= 1'b1;
      end
      case ({w_new_tu, w_complete_tu})
        2'b10: r_outstanding_tus <= r_outstanding_tus + 3'd1;
        2'b01: r_outstanding_tus <= r_outstanding_tus - 3'd1;
        default: r_outstanding_tus <= r_outstanding_tus;
      endcase
    end
  end
endmodule: TQ_INVERSE_2D_CONTROLLER
