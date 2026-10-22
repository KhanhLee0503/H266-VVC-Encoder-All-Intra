//------------------------------------------------------------------------------
// SPATIAL_GRID_METADATA_RAM
// Two independent CTU banks, 1024 x 32 metadata and separate 1024 x 1 valid.
// One shared write/clear channel and one shared synchronous read channel.
// Read response: registered at the rising edge accepting I_RD_EN.
// No asynchronous reset on data or valid storage arrays.
//------------------------------------------------------------------------------
module SPATIAL_GRID_METADATA_RAM (
    input  logic        I_CLK,
    input  logic        I_RST_N,
    input  logic        I_WR_EN,
    input  logic        I_WR_BANK,
    input  logic [9:0]  I_WR_ADDR,
    input  logic [31:0] I_WR_DATA,
    input  logic        I_WR_ENTRY_VALID,
    input  logic        I_RD_EN,
    input  logic        I_RD_BANK,
    input  logic [9:0]  I_RD_ADDR,
    output logic        O_RD_RESP_VALID,
    output logic        O_RD_ENTRY_VALID,
    output logic [31:0] O_RD_DATA
);

    logic [31:0] r_data_bank0  [0:1023];
    logic [31:0] r_data_bank1  [0:1023];
    logic        r_valid_bank0 [0:1023];
    logic        r_valid_bank1 [0:1023];

    // Separate processes ensure no array-wide reset is synthesized.
    always_ff @(posedge I_CLK) begin
        if (I_WR_EN && !I_WR_BANK) begin
            if (I_WR_ENTRY_VALID)
                r_data_bank0[I_WR_ADDR] <= I_WR_DATA;
            r_valid_bank0[I_WR_ADDR] <= I_WR_ENTRY_VALID;
        end
    end

    always_ff @(posedge I_CLK) begin
        if (I_WR_EN && I_WR_BANK) begin
            if (I_WR_ENTRY_VALID)
                r_data_bank1[I_WR_ADDR] <= I_WR_DATA;
            r_valid_bank1[I_WR_ADDR] <= I_WR_ENTRY_VALID;
        end
    end

    // Read bank is selected on the request edge. The response is synchronous.
    // Same-bank/same-address read-write collision is prohibited by ownership.
    always_ff @(posedge I_CLK or negedge I_RST_N) begin
        if (!I_RST_N) begin
            O_RD_RESP_VALID  <= 1'b0;
            O_RD_ENTRY_VALID <= 1'b0;
        end else begin
            O_RD_RESP_VALID <= I_RD_EN;
            if (I_RD_EN) begin
                if (I_RD_BANK)
                    O_RD_ENTRY_VALID <= r_valid_bank1[I_RD_ADDR];
                else
                    O_RD_ENTRY_VALID <= r_valid_bank0[I_RD_ADDR];
            end
        end
    end

    always_ff @(posedge I_CLK) begin
        if (I_RD_EN) begin
            if (I_RD_BANK)
                O_RD_DATA <= r_data_bank1[I_RD_ADDR];
            else
                O_RD_DATA <= r_data_bank0[I_RD_ADDR];
        end
    end
endmodule
