//------------------------------------------------------------------------------
// DBF_METADATA_COLLECTOR
// One leaf in-flight, one 4x4 grid write per clock, CTU QP held at start.
// Bank ownership is external: do not allocate a busy/read bank.
// Leaf geometry is 4 << CODE pixels (1 << CODE grid cells).
// CTU dimensions in pixels may be partial; geometry is clipped to valid region.
// NOTE: the metadata is CU geometry; 1 logical TU per leaf is a baseline assumption.
//------------------------------------------------------------------------------
module DBF_METADATA_COLLECTOR (
    input  logic        I_CLK,
    input  logic        I_RST_N,
    input  logic        I_CTU_START_VALID,
    output logic        O_CTU_START_READY,
    input  logic        I_CTU_BANK,
    input  logic [8:0]  I_CTU_ID,
    input  logic [5:0]  I_CTU_QP,
    input  logic [7:0]  I_CTU_VALID_WIDTH,
    input  logic [7:0]  I_CTU_VALID_HEIGHT,
    input  logic        I_LEAF_VALID,
    output logic        O_LEAF_READY,
    input  logic [8:0]  I_LEAF_CTU_ID,
    input  logic [7:0]  I_LEAF_CU_ID,
    input  logic [4:0]  I_LEAF_X_UNIT,
    input  logic [4:0]  I_LEAF_Y_UNIT,
    input  logic [2:0]  I_LEAF_WIDTH_CODE,
    input  logic [2:0]  I_LEAF_HEIGHT_CODE,
    input  logic        I_CTU_METADATA_DONE,
    input  logic [8:0]  I_DONE_CTU_ID,
    output logic        O_RAM_WR_EN,
    output logic        O_RAM_WR_BANK,
    output logic [9:0]  O_RAM_WR_ADDR,
    output logic [31:0] O_RAM_WR_DATA,
    output logic        O_RAM_WR_ENTRY_VALID,
    output logic        O_COMPLETE_VALID,
    input  logic        I_COMPLETE_READY,
    output logic        O_COMPLETE_BANK,
    output logic [8:0]  O_COMPLETE_CTU_ID,
    output logic        O_ERROR_VALID,
    output logic [2:0]  O_ERROR_CODE
);

    typedef enum logic [2:0] {
        ST_IDLE       = 3'd0,
        ST_CLEAR      = 3'd1,
        ST_WAIT_LEAF  = 3'd2,
        ST_WRITE_GRID = 3'd3,
        ST_COMPLETE   = 3'd4,
        ST_ERROR      = 3'd5
    } t_state;

    t_state r_state, w_state_next;
    logic [8:0] r_ctu_id;
    logic       r_bank;
    logic [5:0] r_qp;
    logic [7:0] r_valid_width, r_valid_height;
    logic [9:0] r_clear_addr;
    logic [7:0] r_cu_id;
    logic [4:0] r_x_unit, r_y_unit;
    logic [2:0] r_width_code, r_height_code;
    logic [5:0] r_grid_x, r_grid_y;
    logic [5:0] r_x_end, r_y_end;
    logic       r_done_seen;
    logic [2:0] r_error_code;

    logic w_start_fire, w_leaf_fire, w_done_fire, w_last_clear, w_last_cell;
    logic w_invalid_leaf, w_invalid_start, w_bad_done;
    logic [5:0] w_input_xend, w_input_yend;
    logic [5:0] w_width_cells, w_height_cells;
    logic [5:0] w_width_limit, w_height_limit;

    assign O_CTU_START_READY = (r_state == ST_IDLE);
    assign O_LEAF_READY = (r_state == ST_WAIT_LEAF) && !r_done_seen && !I_CTU_METADATA_DONE;
    assign w_start_fire = I_CTU_START_VALID && O_CTU_START_READY;
    assign w_leaf_fire = I_LEAF_VALID && O_LEAF_READY;
    assign w_done_fire = I_CTU_METADATA_DONE &&
                         (r_state != ST_IDLE) && (r_state != ST_COMPLETE) &&
                         (r_state != ST_ERROR) && (I_DONE_CTU_ID == r_ctu_id);
    assign w_bad_done = I_CTU_METADATA_DONE &&
                        (r_state != ST_IDLE) && (r_state != ST_COMPLETE) &&
                        (r_state != ST_ERROR) && (I_DONE_CTU_ID != r_ctu_id);

    assign w_width_cells  = 6'd1 << I_LEAF_WIDTH_CODE;
    assign w_height_cells = 6'd1 << I_LEAF_HEIGHT_CODE;
    assign w_input_xend = {1'b0, I_LEAF_X_UNIT} + w_width_cells;
    assign w_input_yend = {1'b0, I_LEAF_Y_UNIT} + w_height_cells;
    // Ceiling(valid pixels / 4); a boundary cell may be partially populated.
    assign w_width_limit  = ({1'b0, r_valid_width[7:2]} + {5'd0, (|r_valid_width[1:0])});
    assign w_height_limit = ({1'b0, r_valid_height[7:2]} + {5'd0, (|r_valid_height[1:0])});
    assign w_invalid_start = (I_CTU_VALID_WIDTH == 8'd0) ||
                             (I_CTU_VALID_HEIGHT == 8'd0) ||
                             (I_CTU_VALID_WIDTH > 8'd128) ||
                             (I_CTU_VALID_HEIGHT > 8'd128);
    assign w_invalid_leaf = (I_LEAF_CTU_ID != r_ctu_id) ||
                            (I_LEAF_WIDTH_CODE > 3'd5) ||
                            (I_LEAF_HEIGHT_CODE > 3'd5) ||
                            (I_LEAF_X_UNIT >= w_width_limit) ||
                            (I_LEAF_Y_UNIT >= w_height_limit) ||
                            (w_input_xend > 6'd32) || (w_input_yend > 6'd32);
    assign w_last_clear = (r_clear_addr == 10'd1023);
    assign w_last_cell = (r_grid_x == (r_x_end - 6'd1)) &&
                         (r_grid_y == (r_y_end - 6'd1));

    // FSM process 1: state registers.
    always_ff @(posedge I_CLK or negedge I_RST_N) begin
        if (!I_RST_N)
            r_state <= ST_IDLE;
        else
            r_state <= w_state_next;
    end

    // FSM process 2: transition logic.
    always_comb begin
        w_state_next = r_state;
        case (r_state)
            ST_IDLE: begin
                if (w_start_fire)
                    w_state_next = w_invalid_start ? ST_ERROR : ST_CLEAR;
            end
            ST_CLEAR: begin
                if (w_bad_done)
                    w_state_next = ST_ERROR;
                else if (w_last_clear)
                    w_state_next = ST_WAIT_LEAF;
            end
            ST_WAIT_LEAF: begin
                if (w_bad_done)
                    w_state_next = ST_ERROR;
                else if (r_done_seen || w_done_fire)
                    w_state_next = ST_COMPLETE;
                else if (w_leaf_fire)
                    w_state_next = w_invalid_leaf ? ST_ERROR : ST_WRITE_GRID;
            end
            ST_WRITE_GRID: begin
                if (w_bad_done)
                    w_state_next = ST_ERROR;
                else if (w_last_cell)
                    w_state_next = (r_done_seen || w_done_fire) ? ST_COMPLETE : ST_WAIT_LEAF;
            end
            ST_COMPLETE: begin
                if (I_COMPLETE_READY)
                    w_state_next = ST_IDLE;
            end
            ST_ERROR: begin
                // Sticky fault; reset required to avoid reusing corrupted metadata.
                w_state_next = ST_ERROR;
            end
            default: w_state_next = ST_ERROR;
        endcase
    end

    // FSM process 3: registered counters and metadata.
    always_ff @(posedge I_CLK or negedge I_RST_N) begin
        if (!I_RST_N) begin
            r_ctu_id <= '0;
            r_bank <= 1'b0;
            r_qp <= '0;
            r_valid_width <= '0;
            r_valid_height <= '0;
            r_clear_addr <= '0;
            r_cu_id <= '0;
            r_x_unit <= '0;
            r_y_unit <= '0;
            r_width_code <= '0;
            r_height_code <= '0;
            r_grid_x <= '0;
            r_grid_y <= '0;
            r_x_end <= '0;
            r_y_end <= '0;
            r_done_seen <= 1'b0;
            r_error_code <= '0;
        end else begin
            if (w_start_fire) begin
                r_ctu_id <= I_CTU_ID;
                r_bank <= I_CTU_BANK;
                r_qp <= I_CTU_QP;
                r_valid_width <= I_CTU_VALID_WIDTH;
                r_valid_height <= I_CTU_VALID_HEIGHT;
                r_clear_addr <= '0;
                r_done_seen <= 1'b0;
                r_error_code <= w_invalid_start ? 3'd1 : 3'd0;
            end else begin
                if (w_done_fire)
                    r_done_seen <= 1'b1;
                if (w_bad_done)
                    r_error_code <= 3'd3;
                if ((r_state == ST_CLEAR) && !w_bad_done && !w_last_clear)
                    r_clear_addr <= r_clear_addr + 10'd1;
                if (w_leaf_fire) begin
                    if (w_invalid_leaf)
                        r_error_code <= 3'd2;
                    else begin
                        r_cu_id <= I_LEAF_CU_ID;
                        r_x_unit <= I_LEAF_X_UNIT;
                        r_y_unit <= I_LEAF_Y_UNIT;
                        r_width_code <= I_LEAF_WIDTH_CODE;
                        r_height_code <= I_LEAF_HEIGHT_CODE;
                        r_grid_x <= {1'b0, I_LEAF_X_UNIT};
                        r_grid_y <= {1'b0, I_LEAF_Y_UNIT};
                        r_x_end <= (w_input_xend < w_width_limit) ? w_input_xend : w_width_limit;
                        r_y_end <= (w_input_yend < w_height_limit) ? w_input_yend : w_height_limit;
                    end
                end
                if ((r_state == ST_WRITE_GRID) && !w_bad_done && !w_last_cell) begin
                    if (r_grid_x == (r_x_end - 6'd1)) begin
                        r_grid_x <= {1'b0, r_x_unit};
                        r_grid_y <= r_grid_y + 6'd1;
                    end else begin
                        r_grid_x <= r_grid_x + 6'd1;
                    end
                end
            end
        end
    end

    // Write/clear protocol: valid bit is separate from packed 32-bit payload.
    always_comb begin
        O_RAM_WR_EN          = 1'b0;
        O_RAM_WR_BANK        = r_bank;
        O_RAM_WR_ADDR        = 10'd0;
        O_RAM_WR_DATA        = 32'd0;
        O_RAM_WR_ENTRY_VALID = 1'b0;
        if ((r_state == ST_CLEAR) && !w_bad_done) begin
            O_RAM_WR_EN   = 1'b1;
            O_RAM_WR_ADDR = r_clear_addr;
        end else if ((r_state == ST_WRITE_GRID) && !w_bad_done) begin
            O_RAM_WR_EN          = 1'b1;
            O_RAM_WR_ENTRY_VALID = 1'b1;
            O_RAM_WR_ADDR        = {r_grid_y[4:0], r_grid_x[4:0]};
            // [31:30] reserved, [29:24] QP, [23:21] height code,
            // [20:18] width code, [17:13] Y unit, [12:8] X unit, [7:0] CU ID.
            O_RAM_WR_DATA = {2'b00, r_qp, r_height_code, r_width_code,
                             r_y_unit, r_x_unit, r_cu_id};
        end
    end

    assign O_COMPLETE_VALID = (r_state == ST_COMPLETE);
    assign O_COMPLETE_BANK = r_bank;
    assign O_COMPLETE_CTU_ID = r_ctu_id;
    assign O_ERROR_VALID = (r_state == ST_ERROR);
    assign O_ERROR_CODE = r_error_code;
endmodule
