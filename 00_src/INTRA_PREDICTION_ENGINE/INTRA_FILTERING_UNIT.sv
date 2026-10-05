`timescale 1ns / 1ps

module INTRA_REF_FILTER_UNIT #(
    parameter PIXEL_WIDTH = 10
)(
    input  logic                   I_CLK,
    input  logic                   I_RST_N,

    input  logic                   I_VALID,

    input  logic [PIXEL_WIDTH-1:0] I_REF_A,
    input  logic [PIXEL_WIDTH-1:0] I_REF_B,
    input  logic [PIXEL_WIDTH-1:0] I_REF_C,

    output logic                   O_VALID,
    output logic [PIXEL_WIDTH-1:0] O_FILTERED_SAMPLE
);

    // ============================================================
    // Stage 1
    //
    // SUM_AC  = REF_A + REF_C
    // REF_B_X2 = REF_B << 1
    //
    // PIXEL_WIDTH = 10:
    //   REF_A / REF_B / REF_C : 10 bits
    //   SUM_AC                : 11 bits
    //   REF_B_X2              : 11 bits
    // ============================================================

    logic [PIXEL_WIDTH:0] w_sum_ac;
    logic [PIXEL_WIDTH:0] w_ref_b_x2;

    logic [PIXEL_WIDTH:0] r_sum_ac;
    logic [PIXEL_WIDTH:0] r_ref_b_x2;

    logic                 r_stage1_valid;

    // ============================================================
    // Stage 2
    //
    // SUM_TOTAL =
    //     SUM_AC
    //   + REF_B_X2
    //   + 2
    //
    // Maximum for 10-bit samples:
    //
    // 1023 + 2*1023 + 1023 + 2 = 4094
    //
    // Therefore 12 bits are required.
    // ============================================================

    logic [PIXEL_WIDTH+1:0] w_sum_total;

    // ============================================================
    // Stage 1 combinational logic
    // ============================================================

    assign w_sum_ac =
        {1'b0, I_REF_A}
        +
        {1'b0, I_REF_C};

    // Multiplication by two is only wiring / shift.
    assign w_ref_b_x2 =
        {I_REF_B, 1'b0};

    // ============================================================
    // Stage 2 combinational logic
    // ============================================================

    assign w_sum_total =
        {1'b0, r_sum_ac}
        +
        {1'b0, r_ref_b_x2}
        +
        {{PIXEL_WIDTH{1'b0}}, 2'b10};

    // ============================================================
    // Pipeline registers
    // ============================================================

    always_ff @(posedge I_CLK or negedge I_RST_N) begin
        if (!I_RST_N) begin
            r_sum_ac           <= '0;
            r_ref_b_x2         <= '0;
            r_stage1_valid     <= 1'b0;

            O_FILTERED_SAMPLE  <= '0;
            O_VALID            <= 1'b0;
        end
        else begin

            // ----------------------------------------------------
            // Pipeline Stage 1
            // ----------------------------------------------------
            r_stage1_valid <= I_VALID;

            if (I_VALID) begin
                r_sum_ac   <= w_sum_ac;
                r_ref_b_x2 <= w_ref_b_x2;
            end

            // ----------------------------------------------------
            // Pipeline Stage 2
            // ----------------------------------------------------
            O_VALID <= r_stage1_valid;

            if (r_stage1_valid) begin

                // Equivalent to:
                //
                // (A + 2*B + C + 2) >> 2
                //
                // Selecting bits [PIXEL_WIDTH+1:2]
                // implements the fixed >> 2 shift.
                O_FILTERED_SAMPLE
                    <= w_sum_total[PIXEL_WIDTH+1:2];

            end
        end
    end

endmodule: INTRA_REF_FILTER_UNIT