//-----------------------------------------------------------
// Description: This module implements the full-CTU, four-bank DBF
// Intermediate Sample Buffer for the separate-buffer architecture.
// Original reconstruction words are initialized through a write stream;
// vertical deblocking updates selected samples with masked writes.
// Horizontal deblocking reads these post-vertical samples through a
// synchronous, tagged, one-clock response interface compatible with
// DBF_SAMPLE_WINDOW_READER. Each bank contains 1536 64-bit words:
// Y [0:1023], Cb [1024:1279], and Cr [1280:1535]. Four consecutive
// logical words are interleaved across four banks by address[1:0].
// The buffer performs no window padding, no sample filtering, and no
// write-after-read forwarding. CTU initialization and pass ordering
// are controlled externally. RAM contents are not reset.
//-----------------------------------------------------------
`timescale 1ns/1ps

module DBF_INTERMEDIATE_SAMPLE_BUFFER (
  input                I_CLK,
  input                I_RST_N,

  // Initialization mode owns the single write port of each RAM bank.
  // The controller must initialize all samples that may later be read.
  input                I_INIT_MODE,
  input                I_INIT_VALID,
  output logic         O_INIT_READY,
  input          [1:0] I_INIT_COMPONENT_ID,
  input         [11:0] I_INIT_ADDR,
  input         [63:0] I_INIT_DATA,
  input          [3:0] I_INIT_SAMPLE_EN,

  // Vertical filtering writes only selected modified samples.
  input                I_WR_VALID,
  output logic         O_WR_READY,
  input          [1:0] I_WR_COMPONENT_ID,
  input         [11:0] I_WR_ADDR,
  input         [63:0] I_WR_DATA,
  input          [3:0] I_WR_SAMPLE_EN,

  // Logical row-major read requests from DBF_SAMPLE_WINDOW_READER.
  // I_RD_DIRECTION=1 specifies horizontal filtering.
  // I_RD_X_OFFSET is EdgeX[1:0], retained with the edge descriptor.
  input                I_RD_EN,
  input          [1:0] I_RD_COMPONENT_ID,
  input         [11:0] I_RD_ADDR,
  input                I_RD_DIRECTION,
  input          [1:0] I_RD_X_OFFSET,
  output logic         O_RD_VALID,
  output logic  [63:0] O_RD_DATA,
  output logic   [3:0] O_RD_SAMPLE_EN,
  output logic   [1:0] O_RD_COMPONENT_ID,
  output logic  [11:0] O_RD_ADDR,

  // One-cycle diagnostic pulse; invalid writes are never issued to RAM.
  // 1=invalid read, 2=invalid initialization, 3=invalid vertical write.
  output logic         O_ERROR_VALID,
  output logic   [1:0] O_ERROR_CODE
);

  localparam logic [1:0] PARA_COMP_Y   = 2'd0;
  localparam logic [1:0] PARA_COMP_CB  = 2'd1;
  localparam logic [1:0] PARA_COMP_CR  = 2'd2;
  localparam logic [1:0] PARA_ERR_NONE = 2'd0;
  localparam logic [1:0] PARA_ERR_RD   = 2'd1;
  localparam logic [1:0] PARA_ERR_INIT = 2'd2;
  localparam logic [1:0] PARA_ERR_WR   = 2'd3;

  logic [3:0] w_bank_read_en;
  logic [3:0] w_bank_write_en;
  logic [3:0] w_selected_sample_en;
  logic [1:0] w_selected_bank;
  logic [1:0] w_read_bank;
  logic [10:0] w_read_index;
  logic [10:0] w_selected_index;
  logic [63:0] w_selected_write_data;
  logic [63:0] w_bank_read_data [0:3];
  logic [3:0] w_req_read_sample_en;
  logic w_init_fire;
  logic w_wr_fire;
  logic w_read_fire;
  logic w_selected_write_fire;
  logic w_init_legal;
  logic w_wr_legal;
  logic w_read_legal;
  logic w_read_collision;
  logic w_read_slot_legal;
  logic w_init_addr_legal;
  logic w_wr_addr_legal;
  logic w_read_addr_legal;

  logic r_read_valid;
  logic r_read_legal;
  logic [1:0] r_read_bank;
  logic [1:0] r_read_component_id;
  logic [11:0] r_read_addr;
  logic [3:0] r_read_sample_en;
  logic r_error_valid;
  logic [1:0] r_error_code;

  // Initialization and vertical writes never own the same write port.
  assign O_INIT_READY = I_RST_N && I_INIT_MODE;
  assign O_WR_READY = I_RST_N && !I_INIT_MODE;
  assign w_init_fire = I_INIT_VALID && O_INIT_READY;
  assign w_wr_fire = I_WR_VALID && O_WR_READY;
  assign w_read_fire = I_RD_EN && I_RST_N && !I_INIT_MODE;

  assign w_init_addr_legal =
      (I_INIT_COMPONENT_ID == PARA_COMP_Y) ||
      (((I_INIT_COMPONENT_ID == PARA_COMP_CB) ||
        (I_INIT_COMPONENT_ID == PARA_COMP_CR)) &&
        (I_INIT_ADDR[11:10] == 2'b00));
  assign w_wr_addr_legal =
      (I_WR_COMPONENT_ID == PARA_COMP_Y) ||
      (((I_WR_COMPONENT_ID == PARA_COMP_CB) ||
        (I_WR_COMPONENT_ID == PARA_COMP_CR)) &&
        (I_WR_ADDR[11:10] == 2'b00));
  assign w_read_addr_legal =
      (I_RD_COMPONENT_ID == PARA_COMP_Y) ||
      (((I_RD_COMPONENT_ID == PARA_COMP_CB) ||
        (I_RD_COMPONENT_ID == PARA_COMP_CR)) &&
        (I_RD_ADDR[11:10] == 2'b00));

  assign w_init_legal = w_init_addr_legal &&
                        (I_INIT_COMPONENT_ID != 2'd3);
  assign w_wr_legal = w_wr_addr_legal &&
                      (I_WR_COMPONENT_ID != 2'd3);
  assign w_read_slot_legal =
      (I_RD_COMPONENT_ID == PARA_COMP_Y) ||
      !I_RD_DIRECTION ||
      ((I_RD_X_OFFSET == 2'b00) || (I_RD_X_OFFSET == 2'b10));
  assign w_read_legal = w_read_addr_legal &&
                        (I_RD_COMPONENT_ID != 2'd3) &&
                        w_read_slot_legal;

  // A simultaneous read and update of the same logical word is invalid.
  // The controller normally prevents this by completing each edge first.
  assign w_read_collision = w_read_fire && w_wr_fire && w_wr_legal &&
                            (I_RD_COMPONENT_ID == I_WR_COMPONENT_ID) &&
                            (I_RD_ADDR == I_WR_ADDR);

  // Bank = logical word address modulo four. Component base is applied
  // after division by four, making bank-local memory regions contiguous.
  always_comb begin
    w_selected_bank = I_WR_ADDR[1:0];
    w_selected_index = {1'b0, I_WR_ADDR[11:2]};
    w_selected_write_data = I_WR_DATA;
    w_selected_sample_en = I_WR_SAMPLE_EN;
    w_selected_write_fire = w_wr_fire && w_wr_legal;

    if (I_INIT_MODE) begin
      w_selected_bank = I_INIT_ADDR[1:0];
      w_selected_index = {1'b0, I_INIT_ADDR[11:2]};
      w_selected_write_data = I_INIT_DATA;
      w_selected_sample_en = I_INIT_SAMPLE_EN;
      w_selected_write_fire = w_init_fire && w_init_legal;
      unique casez (I_INIT_COMPONENT_ID)
        PARA_COMP_CB: w_selected_index = 11'd1024 + {1'b0, I_INIT_ADDR[11:2]};
        PARA_COMP_CR: w_selected_index = 11'd1280 + {1'b0, I_INIT_ADDR[11:2]};
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
    w_read_bank = I_RD_ADDR[1:0];
    w_read_index = {1'b0, I_RD_ADDR[11:2]};
    unique casez (I_RD_COMPONENT_ID)
      PARA_COMP_CB: w_read_index = 11'd1024 + {1'b0, I_RD_ADDR[11:2]};
      PARA_COMP_CR: w_read_index = 11'd1280 + {1'b0, I_RD_ADDR[11:2]};
      default: begin
      end
    endcase
  end

  // The Reader expects full-word masks for luma, but only two
  // selected 16-bit slots for chroma horizontal filtering.
  always_comb begin
    w_req_read_sample_en = 4'b1111;
    if ((I_RD_COMPONENT_ID != PARA_COMP_Y) && I_RD_DIRECTION) begin
      unique casez (I_RD_X_OFFSET)
        2'b00:   w_req_read_sample_en = 4'b0011;
        2'b10:   w_req_read_sample_en = 4'b1100;
        default: w_req_read_sample_en = 4'b0000;
      endcase
    end
  end

  for (genvar g_bank = 0; g_bank < 4; g_bank = g_bank + 1) begin: gen_bank
    localparam logic [1:0] PARA_BANK_ID = 2'(g_bank);

    assign w_bank_read_en[g_bank] = w_read_fire &&
                                    w_read_legal && !w_read_collision &&
                                    (w_read_bank == PARA_BANK_ID);
    assign w_bank_write_en[g_bank] = w_selected_write_fire &&
                                     (w_selected_bank == PARA_BANK_ID) &&
                                     (|w_selected_sample_en);

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

  // Read tags and validity are registered alongside the bank read data.
  // Bad read requests return VALID with a zero mask and are also diagnosed.
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
        r_read_bank <= w_read_bank;
        r_read_component_id <= I_RD_COMPONENT_ID;
        r_read_addr <= I_RD_ADDR;
        r_read_legal <= w_read_legal && !w_read_collision;
        r_read_sample_en <= (w_read_legal && !w_read_collision) ?
                            w_req_read_sample_en : 4'b0000;
      end
      if (I_RD_EN && I_INIT_MODE) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_RD;
      end else if (w_read_fire && (!w_read_legal || w_read_collision)) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_RD;
      end else if (w_init_fire && !w_init_legal) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_INIT;
      end else if (w_wr_fire && !w_wr_legal) begin
        r_error_valid <= 1'b1;
        r_error_code <= PARA_ERR_WR;
      end
    end
  end

  always_comb begin
    O_RD_DATA = '0;
    if (r_read_valid && r_read_legal) begin
      unique casez (r_read_bank)
        2'd0: O_RD_DATA = w_bank_read_data[0];
        2'd1: O_RD_DATA = w_bank_read_data[1];
        2'd2: O_RD_DATA = w_bank_read_data[2];
        2'd3: O_RD_DATA = w_bank_read_data[3];
        default: O_RD_DATA = '0;
      endcase
    end
  end

  assign O_RD_VALID = r_read_valid;
  assign O_RD_SAMPLE_EN = r_read_sample_en;
  assign O_RD_COMPONENT_ID = r_read_component_id;
  assign O_RD_ADDR = r_read_addr;
  assign O_ERROR_VALID = r_error_valid;
  assign O_ERROR_CODE = r_error_code;

endmodule: DBF_INTERMEDIATE_SAMPLE_BUFFER
