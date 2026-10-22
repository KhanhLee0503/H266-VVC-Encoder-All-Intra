//-----------------------------------------------------------
// Description: This module implements the full-CTU DBF Output Sample
// Buffer for the separate-buffer (Option A) VVC deblocking architecture.
// The buffer contains four interleaved 64-bit sample RAM banks. A
// sequential 64-bit copy stream initializes every valid sample with the
// post-vertical data held by DBF_INTERMEDIATE_SAMPLE_BUFFER. Horizontal
// deblocking then updates only modified 16-bit samples through a masked
// write stream. After horizontal writeback is complete, SAO reads the
// final deblocked samples with a registered one-cycle response.
// Copy and horizontal writes are mutually exclusive through I_COPY_MODE;
// SAO reads must not overlap the copy phase. No CTU completeness FSM,
// filter arithmetic, bulk 256-bit port, or RAM reset is implemented here.
//-----------------------------------------------------------
`timescale 1ns/1ps

module DBF_OUTPUT_SAMPLE_BUFFER (
  input                 I_CLK,
  input                 I_RST_N,

  // Copy stream owns the write port while I_COPY_MODE is asserted.
  input                 I_COPY_MODE,
  input                 I_COPY_VALID,
  output logic          O_COPY_READY,
  input           [1:0] I_COPY_COMPONENT_ID,
  input          [11:0] I_COPY_ADDR,
  input          [63:0] I_COPY_DATA,
  input           [3:0] I_COPY_SAMPLE_EN,

  // Horizontal filtering updates sample lanes after copying has ended.
  input                 I_WR_VALID,
  output logic          O_WR_READY,
  input           [1:0] I_WR_COMPONENT_ID,
  input          [11:0] I_WR_ADDR,
  input          [63:0] I_WR_DATA,
  input           [3:0] I_WR_SAMPLE_EN,

  // The SAO client provides the validity mask for the selected word.
  // On partial right-edge CTUs, invalid sample slots must be masked.
  input                 I_SAO_RD_EN,
  input           [1:0] I_SAO_RD_COMPONENT_ID,
  input          [11:0] I_SAO_RD_ADDR,
  input           [3:0] I_SAO_RD_SAMPLE_EN,
  output logic          O_SAO_RD_VALID,
  output logic   [63:0] O_SAO_RD_DATA,
  output logic    [3:0] O_SAO_RD_SAMPLE_EN,
  output logic    [1:0] O_SAO_RD_COMPONENT_ID,
  output logic   [11:0] O_SAO_RD_ADDR,

  // Error code: 1=read error/collision; 2=copy error; 3=write error.
  output logic          O_ERROR_VALID,
  output logic    [1:0] O_ERROR_CODE
);

  localparam logic [1:0] PARA_COMP_Y   = 2'd0;
  localparam logic [1:0] PARA_COMP_CB  = 2'd1;
  localparam logic [1:0] PARA_COMP_CR  = 2'd2;
  localparam logic [1:0] PARA_ERR_NONE = 2'd0;
  localparam logic [1:0] PARA_ERR_RD   = 2'd1;
  localparam logic [1:0] PARA_ERR_COPY = 2'd2;
  localparam logic [1:0] PARA_ERR_WR   = 2'd3;

  logic [3:0] w_bank_read_en;
  logic [3:0] w_bank_write_en;
  logic [63:0] w_bank_read_data [0:3];
  logic [63:0] w_read_selected_data;
  logic [1:0] w_selected_bank;
  logic [10:0] w_selected_index;
  logic [63:0] w_selected_write_data;
  logic [3:0] w_selected_sample_en;
  logic [1:0] w_read_bank;
  logic [10:0] w_read_index;
  logic w_copy_fire;
  logic w_wr_fire;
  logic w_read_fire;
  logic w_selected_write_fire;
  logic w_copy_legal;
  logic w_wr_legal;
  logic w_read_legal;
  logic w_read_collision;

  logic r_read_valid;
  logic r_read_legal;
  logic [1:0] r_read_bank;
  logic [1:0] r_read_component_id;
  logic [11:0] r_read_addr;
  logic [3:0] r_read_sample_en;
  logic r_error_valid;
  logic [1:0] r_error_code;

  // READY accepts the request on its owning phase. Invalid addresses are
  // acknowledged but suppressed at RAM; O_ERROR_VALID diagnoses them.
  assign O_COPY_READY = I_RST_N && I_COPY_MODE;
  assign O_WR_READY = I_RST_N && !I_COPY_MODE;
  assign w_copy_fire = I_COPY_VALID && O_COPY_READY;
  assign w_wr_fire = I_WR_VALID && O_WR_READY;
  assign w_read_fire = I_RST_N && !I_COPY_MODE && I_SAO_RD_EN;

  assign w_copy_legal =
      (I_COPY_COMPONENT_ID == PARA_COMP_Y) ||
      (((I_COPY_COMPONENT_ID == PARA_COMP_CB) ||
        (I_COPY_COMPONENT_ID == PARA_COMP_CR)) &&
        (I_COPY_ADDR[11:10] == 2'b00));
  assign w_wr_legal =
      (I_WR_COMPONENT_ID == PARA_COMP_Y) ||
      (((I_WR_COMPONENT_ID == PARA_COMP_CB) ||
        (I_WR_COMPONENT_ID == PARA_COMP_CR)) &&
        (I_WR_ADDR[11:10] == 2'b00));
  assign w_read_legal =
      (I_SAO_RD_COMPONENT_ID == PARA_COMP_Y) ||
      (((I_SAO_RD_COMPONENT_ID == PARA_COMP_CB) ||
        (I_SAO_RD_COMPONENT_ID == PARA_COMP_CR)) &&
        (I_SAO_RD_ADDR[11:10] == 2'b00));

  // A read during a same-word horizontal update is rejected. The write
  // still commits; external CTU scheduling should prevent such overlap.
  assign w_read_collision = w_read_fire && w_wr_fire && w_wr_legal &&
                            (I_SAO_RD_COMPONENT_ID == I_WR_COMPONENT_ID) &&
                            (I_SAO_RD_ADDR == I_WR_ADDR);

  // The logical address belongs to one component. Its low two bits
  // select the bank; the remaining bits select a bank-local word index.
  always_comb begin
    w_selected_bank = I_WR_ADDR[1:0];
    w_selected_index = {1'b0, I_WR_ADDR[11:2]};
    w_selected_write_data = I_WR_DATA;
    w_selected_sample_en = I_WR_SAMPLE_EN;
    w_selected_write_fire = w_wr_fire && w_wr_legal;

    if (I_COPY_MODE) begin
      w_selected_bank = I_COPY_ADDR[1:0];
      w_selected_index = {1'b0, I_COPY_ADDR[11:2]};
      w_selected_write_data = I_COPY_DATA;
      w_selected_sample_en = I_COPY_SAMPLE_EN;
      w_selected_write_fire = w_copy_fire && w_copy_legal;
      unique casez (I_COPY_COMPONENT_ID)
        PARA_COMP_CB: w_selected_index = 11'd1024 + {1'b0, I_COPY_ADDR[11:2]};
        PARA_COMP_CR: w_selected_index = 11'd1280 + {1'b0, I_COPY_ADDR[11:2]};
        default: begin
        end
      endcase
    end else begin
      unique casez (I_WR_COMPONENT_ID)
        PARA_COMP_CB: w_selected_index = 11'd1024 + {1'b0, I_WR_ADDR[11:2]};
        PARA_COMP_CR: w_selected_index = 11'd1280 + {1'b0, I_WR_ADDR[11:2]};
        default: begin
        end
      endcase
    end
  end

  always_comb begin
    w_read_bank = I_SAO_RD_ADDR[1:0];
    w_read_index = {1'b0, I_SAO_RD_ADDR[11:2]};
    unique casez (I_SAO_RD_COMPONENT_ID)
      PARA_COMP_CB: w_read_index = 11'd1024 + {1'b0, I_SAO_RD_ADDR[11:2]};
      PARA_COMP_CR: w_read_index = 11'd1280 + {1'b0, I_SAO_RD_ADDR[11:2]};
      default: begin
      end
    endcase
  end

  for (genvar g_bank = 0; g_bank < 4; g_bank = g_bank + 1) begin: gen_bank
    localparam logic [1:0] PARA_BANK_ID = 2'(g_bank);

    assign w_bank_read_en[g_bank] = w_read_fire && w_read_legal &&
                                    !w_read_collision && (|I_SAO_RD_SAMPLE_EN) &&
                                    (w_read_bank == PARA_BANK_ID);
    assign w_bank_write_en[g_bank] = w_selected_write_fire &&
                                     (|w_selected_sample_en) &&
                                     (w_selected_bank == PARA_BANK_ID);

    DBF_SAMPLE_RAM_BANK #(
      .PARA_RAM_DEPTH(1536),
      .PARA_ADDR_WD(11)
    ) U_SAMPLE_RAM_BANK (
      .I_CLK          (I_CLK),
      .I_RD_EN        (w_bank_read_en[g_bank]),
      .I_RD_ADDR      (w_read_index),
      .O_RD_DATA      (w_bank_read_data[g_bank]),
      .I_WR_EN        (w_bank_write_en[g_bank]),
      .I_WR_ADDR      (w_selected_index),
      .I_WR_DATA      (w_selected_write_data),
      .I_WR_SAMPLE_EN (w_selected_sample_en)
    );
  end

  // Address tags and response qualifiers are registered together with
  // the synchronous bank read. Data is meaningful only if VALID is high.
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      r_read_valid <= 1'b0;
      r_read_legal <= 1'b0;
      r_read_bank <= '0;
      r_read_component_id <= '0;
      r_read_addr <= '0;
      r_read_sample_en <= '0;
      r_error_valid <= 1'b0;
      r_error_code <= PARA_ERR_NONE;
    end else begin
      r_read_valid <= w_read_fire;
      r_error_valid <= 1'b0;
      r_error_code <= PARA_ERR_NONE;
      if (w_read_fire) begin
        r_read_legal <= w_read_legal && !w_read_collision;
        r_read_bank <= w_read_bank;
        r_read_component_id <= I_SAO_RD_COMPONENT_ID;
        r_read_addr <= I_SAO_RD_ADDR;
        r_read_sample_en <= (w_read_legal && !w_read_collision) ?
                            I_SAO_RD_SAMPLE_EN : 4'b0000;
      end
      if (I_SAO_RD_EN && I_COPY_MODE) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_RD;
      end else if (w_read_fire && (!w_read_legal || w_read_collision)) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_RD;
      end else if (w_copy_fire && !w_copy_legal) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_COPY;
      end else if (w_wr_fire && !w_wr_legal) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_WR;
      end
    end
  end

  // Unselected 16-bit positions are returned as zero. Thus a partial
  // right-boundary CTU read never exposes stale or uninitialized samples.
  always_comb begin
    w_read_selected_data = '0;
    if (r_read_valid && r_read_legal && (|r_read_sample_en)) begin
      unique casez (r_read_bank)
        2'd0: w_read_selected_data = w_bank_read_data[0];
        2'd1: w_read_selected_data = w_bank_read_data[1];
        2'd2: w_read_selected_data = w_bank_read_data[2];
        2'd3: w_read_selected_data = w_bank_read_data[3];
        default: w_read_selected_data = '0;
      endcase
    end

    O_SAO_RD_DATA = '0;
    for (int w_sample = 0; w_sample < 4; w_sample = w_sample + 1) begin
      if (r_read_sample_en[w_sample])
        O_SAO_RD_DATA[w_sample*16 +: 16] =
            w_read_selected_data[w_sample*16 +: 16];
    end
  end

  assign O_SAO_RD_VALID = r_read_valid;
  assign O_SAO_RD_SAMPLE_EN = r_read_sample_en;
  assign O_SAO_RD_COMPONENT_ID = r_read_component_id;
  assign O_SAO_RD_ADDR = r_read_addr;
  assign O_ERROR_VALID = r_error_valid;
  assign O_ERROR_CODE = r_error_code;

endmodule: DBF_OUTPUT_SAMPLE_BUFFER
