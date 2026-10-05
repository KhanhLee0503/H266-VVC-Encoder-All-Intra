//-----------------------------------------------------------
// Description: CTU local buffer pool for planar YUV 4:2:0.
//              Hardware-style version for synthesis.
//              The memory arrays are split per physical buffer to avoid
//              oversized single variable limits in synthesis tools.
//
// Note:
//   This implementation is written for the current architecture with
//   4 CTU buffers and 128-bit words.
//-----------------------------------------------------------
`timescale 1ns / 1ps

module CTU_BUFFER_POOL
  #(
    parameter int PARA_NUM_BUFFERS = 4,
    parameter int PARA_BUF_ID_W    = 2,
    parameter int PARA_Y_DEPTH     = 2048,
    parameter int PARA_C_DEPTH     = 512,
    parameter int PARA_ADDR_WD     = 16,
    parameter int PARA_DATA_WD     = 128,
    parameter int PARA_STRB_WD     = PARA_DATA_WD / 8)
  (
    input                             I_CLK,
    input                             I_RST_N,

    // Buffer write port from CTU_FETCH_ENGINE
    input                             I_BUF_WR_VALID,
    input [PARA_BUF_ID_W - 1:0]       I_BUF_WR_BUFFER_ID,
    input [1:0]                       I_BUF_WR_PLANE,
    input [PARA_ADDR_WD - 1:0]        I_BUF_WR_ADDR,
    input [PARA_DATA_WD - 1:0]        I_BUF_WR_DATA,
    input [PARA_STRB_WD - 1:0]        I_BUF_WR_STRB,

    // Buffer read port to downstream blocks
    input                             I_RD_VALID,
    input [PARA_BUF_ID_W - 1:0]       I_RD_BUFFER_ID,
    input [1:0]                       I_RD_PLANE,
    input [PARA_ADDR_WD - 1:0]        I_RD_ADDR,
    output logic [PARA_DATA_WD - 1:0] O_RD_DATA,
    output logic                      O_RD_DATA_VALID
  );

  localparam logic [1:0] PLANE_Y = 2'd0;
  localparam logic [1:0] PLANE_U = 2'd1;
  localparam logic [1:0] PLANE_V = 2'd2;

  // ---------------------------------------------------------
  // Local CTU memories
  // ---------------------------------------------------------
  // Split each buffer into its own memory array. The original two-dimensional
  // Y memory was 4 * 2048 * 128 = 1,048,576 bits, which can exceed Vivado's
  // single-variable synthesis limit. Each split Y memory is 262,144 bits.
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_y_mem_buf0[0:PARA_Y_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_y_mem_buf1[0:PARA_Y_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_y_mem_buf2[0:PARA_Y_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_y_mem_buf3[0:PARA_Y_DEPTH - 1];

  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_u_mem_buf0[0:PARA_C_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_u_mem_buf1[0:PARA_C_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_u_mem_buf2[0:PARA_C_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_u_mem_buf3[0:PARA_C_DEPTH - 1];

  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_v_mem_buf0[0:PARA_C_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_v_mem_buf1[0:PARA_C_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_v_mem_buf2[0:PARA_C_DEPTH - 1];
  (* ram_style = "block" *) logic [PARA_DATA_WD - 1:0] r_v_mem_buf3[0:PARA_C_DEPTH - 1];

  // ---------------------------------------------------------
  // Full-word write policy
  // ---------------------------------------------------------
  // CTU_FETCH_ENGINE currently generates a complete 128-bit word for every
  // write, including padded boundary words. Therefore no read-modify-write
  // operation is required. I_BUF_WR_STRB is intentionally kept at the module
  // boundary for compatibility with the existing CTU_INPUT_ENGINE wiring.

  // ---------------------------------------------------------
  // Write logic
  // ---------------------------------------------------------
  // Memory content is intentionally not reset. Buffer validity is controlled
  // by CTU_BUFFER_MANAGER.
  always_ff @(posedge I_CLK) begin
    if (I_BUF_WR_VALID) begin
      unique case (I_BUF_WR_PLANE)
        PLANE_Y: begin
          unique case (I_BUF_WR_BUFFER_ID)
            2'd0:
              r_y_mem_buf0[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd1:
              r_y_mem_buf1[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd2:
              r_y_mem_buf2[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd3:
              r_y_mem_buf3[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            default: begin
            end
          endcase
        end

        PLANE_U: begin
          unique case (I_BUF_WR_BUFFER_ID)
            2'd0:
              r_u_mem_buf0[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd1:
              r_u_mem_buf1[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd2:
              r_u_mem_buf2[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd3:
              r_u_mem_buf3[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            default: begin
            end
          endcase
        end

        PLANE_V: begin
          unique case (I_BUF_WR_BUFFER_ID)
            2'd0:
              r_v_mem_buf0[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd1:
              r_v_mem_buf1[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd2:
              r_v_mem_buf2[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            2'd3:
              r_v_mem_buf3[I_BUF_WR_ADDR] <= I_BUF_WR_DATA;
            default: begin
            end
          endcase
        end

        default: begin
        end
      endcase
    end
  end

  // ---------------------------------------------------------
  // Synchronous read logic
  // ---------------------------------------------------------
  always_ff @(posedge I_CLK or negedge I_RST_N) begin
    if (!I_RST_N) begin
      O_RD_DATA       <= '0;
      O_RD_DATA_VALID <= 1'b0;
    end else begin
      O_RD_DATA_VALID <= I_RD_VALID;

      if (I_RD_VALID) begin
        unique case (I_RD_PLANE)
          PLANE_Y: begin
            unique case (I_RD_BUFFER_ID)
              2'd0:
                O_RD_DATA <= r_y_mem_buf0[I_RD_ADDR];
              2'd1:
                O_RD_DATA <= r_y_mem_buf1[I_RD_ADDR];
              2'd2:
                O_RD_DATA <= r_y_mem_buf2[I_RD_ADDR];
              2'd3:
                O_RD_DATA <= r_y_mem_buf3[I_RD_ADDR];
              default:
                O_RD_DATA <= '0;
            endcase
          end

          PLANE_U: begin
            unique case (I_RD_BUFFER_ID)
              2'd0:
                O_RD_DATA <= r_u_mem_buf0[I_RD_ADDR];
              2'd1:
                O_RD_DATA <= r_u_mem_buf1[I_RD_ADDR];
              2'd2:
                O_RD_DATA <= r_u_mem_buf2[I_RD_ADDR];
              2'd3:
                O_RD_DATA <= r_u_mem_buf3[I_RD_ADDR];
              default:
                O_RD_DATA <= '0;
            endcase
          end

          PLANE_V: begin
            unique case (I_RD_BUFFER_ID)
              2'd0:
                O_RD_DATA <= r_v_mem_buf0[I_RD_ADDR];
              2'd1:
                O_RD_DATA <= r_v_mem_buf1[I_RD_ADDR];
              2'd2:
                O_RD_DATA <= r_v_mem_buf2[I_RD_ADDR];
              2'd3:
                O_RD_DATA <= r_v_mem_buf3[I_RD_ADDR];
              default:
                O_RD_DATA <= '0;
            endcase
          end

          default: begin
            O_RD_DATA <= '0;
          end
        endcase
      end
    end
  end

endmodule : CTU_BUFFER_POOL
