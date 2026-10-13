//-----------------------------------------------------------
// Description: This module multiplexes the original CTU buffer
// read port among Partition, Intra Prediction, and Residual.
// The selected request is presented without additional latency.
// A registered owner tag routes the synchronous read response
// to the consumer that issued the request.
// The external controller guarantees exclusive ownership and
// prevents requests from consumers that do not own the port.
// The CTU buffer read port accepts every asserted request and
// responds after one rising clock edge without backpressure.
//-----------------------------------------------------------
`timescale 1ns/1ps

module CTU_ORIGINAL_READ_MUX #(
  parameter PARA_BUF_ID_WD   = 2,
  parameter PARA_ADDR_WD     = 16,
  parameter PARA_DATA_WD     = 128,
  parameter PARA_PART_ADDR_WD = 11
)(
  input                                  I_CLK,
  input                                  I_RESETN,
  input [1:0]                            I_OWNER_SEL,

  // Partition requests read only the original luma plane.
  input                                  I_PART_RD_REQ,
  input [PARA_PART_ADDR_WD-1:0]          I_PART_RD_ADDR,
  input [PARA_BUF_ID_WD-1:0]            I_PART_BUFFER_ID,
  output logic                           O_PART_RD_VALID,
  output logic [PARA_DATA_WD-1:0]       O_PART_RD_DATA,

  // Intra Prediction requests.
  input                                  I_INTRA_RD_VALID,
  input [PARA_BUF_ID_WD-1:0]            I_INTRA_RD_BUFFER_ID,
  input [1:0]                            I_INTRA_RD_PLANE,
  input [PARA_ADDR_WD-1:0]              I_INTRA_RD_ADDR,
  output logic                           O_INTRA_RD_DATA_VALID,
  output logic [PARA_DATA_WD-1:0]       O_INTRA_RD_DATA,

  // Residual Generator requests.
  input                                  I_RES_RD_VALID,
  input [PARA_BUF_ID_WD-1:0]            I_RES_RD_BUFFER_ID,
  input [1:0]                            I_RES_RD_PLANE,
  input [PARA_ADDR_WD-1:0]              I_RES_RD_ADDR,
  output logic                           O_RES_RD_DATA_VALID,
  output logic [PARA_DATA_WD-1:0]       O_RES_RD_DATA,

  // Shared CTU Input Engine original-buffer read request.
  output logic                           O_BUF_RD_VALID,
  output logic [PARA_BUF_ID_WD-1:0]     O_BUF_RD_BUFFER_ID,
  output logic [1:0]                     O_BUF_RD_PLANE,
  output logic [PARA_ADDR_WD-1:0]       O_BUF_RD_ADDR,

  // Shared CTU Input Engine original-buffer read response.
  input                                  I_BUF_RD_DATA_VALID,
  input [PARA_DATA_WD-1:0]              I_BUF_RD_DATA
);

  localparam [1:0] PARA_OWNER_IDLE  = 2'b00;
  localparam [1:0] PARA_OWNER_PART  = 2'b01;
  localparam [1:0] PARA_OWNER_INTRA = 2'b10;
  localparam [1:0] PARA_OWNER_RES   = 2'b11;

  logic [1:0] r_response_owner;
  logic       r_response_pending;
  logic [1:0] w_request_owner;

  // The request MUX does not change the CTU buffer read latency.
  always_comb begin
    O_BUF_RD_VALID     = 1'b0;
    O_BUF_RD_BUFFER_ID = '0;
    O_BUF_RD_PLANE     = '0;
    O_BUF_RD_ADDR      = '0;
    w_request_owner    = PARA_OWNER_IDLE;

    unique casez (I_OWNER_SEL)
      PARA_OWNER_PART: begin
        O_BUF_RD_VALID     = I_PART_RD_REQ;
        O_BUF_RD_BUFFER_ID = I_PART_BUFFER_ID;
        O_BUF_RD_PLANE     = 2'b00;
        O_BUF_RD_ADDR      = {{(PARA_ADDR_WD-PARA_PART_ADDR_WD){1'b0}}, I_PART_RD_ADDR};
        w_request_owner    = PARA_OWNER_PART;
      end
      PARA_OWNER_INTRA: begin
        O_BUF_RD_VALID     = I_INTRA_RD_VALID;
        O_BUF_RD_BUFFER_ID = I_INTRA_RD_BUFFER_ID;
        O_BUF_RD_PLANE     = I_INTRA_RD_PLANE;
        O_BUF_RD_ADDR      = I_INTRA_RD_ADDR;
        w_request_owner    = PARA_OWNER_INTRA;
      end
      PARA_OWNER_RES: begin
        O_BUF_RD_VALID     = I_RES_RD_VALID;
        O_BUF_RD_BUFFER_ID = I_RES_RD_BUFFER_ID;
        O_BUF_RD_PLANE     = I_RES_RD_PLANE;
        O_BUF_RD_ADDR      = I_RES_RD_ADDR;
        w_request_owner    = PARA_OWNER_RES;
      end
      default: begin
        O_BUF_RD_VALID     = 1'b0;
        O_BUF_RD_BUFFER_ID = '0;
        O_BUF_RD_PLANE     = '0;
        O_BUF_RD_ADDR      = '0;
        w_request_owner    = PARA_OWNER_IDLE;
      end
    endcase
  end

  // Capture the owner on the same clock edge as the CTU RAM read.
  // A registered RAM response is aligned with this owner tag.
  always_ff @(posedge I_CLK or negedge I_RESETN) begin
    if (!I_RESETN) begin
      r_response_owner   <= PARA_OWNER_IDLE;
      r_response_pending <= 1'b0;
    end
    else begin
      r_response_pending <= O_BUF_RD_VALID;
      if (O_BUF_RD_VALID)
        r_response_owner <= w_request_owner;
    end
  end

  // Only the selected request owner receives the response valid.
  // Response data is meaningful only when its valid output is high.
  always_comb begin
    O_PART_RD_VALID       = 1'b0;
    O_PART_RD_DATA        = '0;
    O_INTRA_RD_DATA_VALID = 1'b0;
    O_INTRA_RD_DATA       = '0;
    O_RES_RD_DATA_VALID   = 1'b0;
    O_RES_RD_DATA         = '0;

    if (I_BUF_RD_DATA_VALID && r_response_pending) begin
      unique casez (r_response_owner)
        PARA_OWNER_PART: begin
          O_PART_RD_VALID = 1'b1;
          O_PART_RD_DATA  = I_BUF_RD_DATA;
        end
        PARA_OWNER_INTRA: begin
          O_INTRA_RD_DATA_VALID = 1'b1;
          O_INTRA_RD_DATA       = I_BUF_RD_DATA;
        end
        PARA_OWNER_RES: begin
          O_RES_RD_DATA_VALID = 1'b1;
          O_RES_RD_DATA       = I_BUF_RD_DATA;
        end
        default: begin
          O_PART_RD_VALID       = 1'b0;
          O_INTRA_RD_DATA_VALID = 1'b0;
          O_RES_RD_DATA_VALID   = 1'b0;
        end
      endcase
    end
  end
endmodule: CTU_ORIGINAL_READ_MUX
