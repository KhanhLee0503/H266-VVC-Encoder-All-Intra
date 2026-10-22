`timescale 1ns/1ps

//-----------------------------------------------------------
// Module      : DBF_TOP_TB
// Description : Minimal complete-CTU end-to-end control/data smoke test.
//               A small 8x8 luma CTU (4x4 Cb/Cr) is initialized
//               from a one-cycle synchronous Recon read model. Because
//               no 16-tap edge window fits, every edge must bypass;
//               final SAO-read pixels must match original reconstruction.
//               ALL functional stimulus is driven on POSEDGE with NBA.
//-----------------------------------------------------------
module DBF_TOP_TB;
  logic clk;
  logic rst_n;

  logic meta_start_valid, meta_start_ready, meta_bank, meta_enable;
  logic [8:0] meta_id;
  logic [5:0] meta_qp, meta_qp_cb, meta_qp_cr;
  logic [7:0] meta_width, meta_height;
  logic leaf_valid, leaf_ready, meta_done;
  logic [8:0] leaf_ctu_id, meta_done_ctu_id;
  logic [7:0] leaf_cu_id;
  logic [4:0] leaf_x_unit, leaf_y_unit;
  logic [2:0] leaf_width_code, leaf_height_code;
  logic [1:0] bank_busy, metadata_ready, bank_finished;

  logic start_valid, start_ready;
  logic [8:0] start_ctu_id;
  logic start_bank;
  logic [7:0] start_width, start_height;

  logic recon_desc_valid, recon_desc_ready, recon_desc_bank;
  logic [8:0] recon_desc_ctu_id;
  logic [7:0] recon_desc_frame_id;
  logic [12:0] recon_desc_x_origin, recon_desc_y_origin;
  logic [7:0] recon_desc_valid_width, recon_desc_valid_height;
  logic recon_rd_en, recon_rd_valid, recon_rd_bank_id;
  logic [1:0] recon_rd_component_id;
  logic [11:0] recon_rd_addr;
  logic [63:0] recon_rd_data;
  logic recon_release_valid, recon_release_ready, recon_release_bank;
  logic [8:0] recon_release_ctu_id;
  logic [7:0] recon_release_frame_id;

  logic sao_ctu_valid, sao_ctu_ready, sao_bank, sao_read_enable;
  logic [8:0] sao_ctu_id, sao_release_ctu_id;
  logic sao_rd_en, sao_rd_valid;
  logic [1:0] sao_rd_component_id, sao_rd_return_component_id;
  logic [11:0] sao_rd_addr, sao_rd_return_addr;
  logic [3:0] sao_rd_sample_en, sao_rd_return_sample_en;
  logic [63:0] sao_rd_data;
  logic sao_release_valid, sao_release_ready, sao_release_bank;
  logic busy, err_valid, input_busy;
  logic [2:0] phase;
  logic [3:0] err_code;

  int unsigned accepted_reads;
  int unsigned accepted_releases;
  int unsigned checked_words;
  int unsigned cycle_count;

  // Model uses distinct values in all 16-bit sample slots.
  function automatic logic [63:0] f_recon_word(
      input logic [1:0] comp, input logic [11:0] addr);
    logic [63:0] value;
    for (int i = 0; i < 4; i++) begin
      value[i*16 +: 16] = 16'(200*int'(comp) + 4*int'(addr) + i + 11);
    end
    return value;
  endfunction

  DBF_TOP U_DUT (
    .I_CLK(clk), .I_RST_N(rst_n),
    .I_META_CTU_START_VALID(meta_start_valid),
    .O_META_CTU_START_READY(meta_start_ready),
    .I_META_CTU_BANK(meta_bank), .I_META_CTU_ID(meta_id),
    .I_META_CTU_QP(meta_qp), .I_META_CTU_QP_CB(meta_qp_cb),
    .I_META_CTU_QP_CR(meta_qp_cr),
    .I_META_CTU_VALID_WIDTH(meta_width),
    .I_META_CTU_VALID_HEIGHT(meta_height),
    .I_META_CTU_DBF_ENABLE(meta_enable),
    .I_LEAF_VALID(leaf_valid), .O_LEAF_READY(leaf_ready),
    .I_LEAF_CTU_ID(leaf_ctu_id), .I_LEAF_CU_ID(leaf_cu_id),
    .I_LEAF_X_UNIT(leaf_x_unit), .I_LEAF_Y_UNIT(leaf_y_unit),
    .I_LEAF_WIDTH_CODE(leaf_width_code),
    .I_LEAF_HEIGHT_CODE(leaf_height_code),
    .I_CTU_METADATA_DONE(meta_done), .I_DONE_CTU_ID(meta_done_ctu_id),
    .O_METADATA_BANK_BUSY(bank_busy), .O_METADATA_READY(metadata_ready),
    .O_BANK_SCAN_FINISHED(bank_finished),
    .I_START_VALID(start_valid), .O_START_READY(start_ready),
    .I_START_CTU_ID(start_ctu_id), .I_START_BANK(start_bank),
    .I_START_VALID_WIDTH(start_width), .I_START_VALID_HEIGHT(start_height),
    .I_BETA_OFFSET_DIV2(6'sd0), .I_TC_OFFSET_DIV2(6'sd0),
    .I_RECON_DESC_VALID(recon_desc_valid),
    .O_RECON_DESC_READY(recon_desc_ready),
    .I_RECON_DESC_BANK_ID(recon_desc_bank),
    .I_RECON_DESC_CTU_ID(recon_desc_ctu_id),
    .I_RECON_DESC_FRAME_ID(recon_desc_frame_id),
    .I_RECON_DESC_X_ORIGIN(recon_desc_x_origin),
    .I_RECON_DESC_Y_ORIGIN(recon_desc_y_origin),
    .I_RECON_DESC_VALID_WIDTH(recon_desc_valid_width),
    .I_RECON_DESC_VALID_HEIGHT(recon_desc_valid_height),
    .O_RECON_RD_EN(recon_rd_en),
    .O_RECON_RD_COMPONENT_ID(recon_rd_component_id),
    .O_RECON_RD_ADDR(recon_rd_addr),
    .I_RECON_RD_VALID(recon_rd_valid),
    .I_RECON_RD_DATA(recon_rd_data),
    .I_RECON_RD_BANK_ID(recon_rd_bank_id),
    .O_RECON_RELEASE_VALID(recon_release_valid),
    .I_RECON_RELEASE_READY(recon_release_ready),
    .O_RECON_RELEASE_BANK_ID(recon_release_bank),
    .O_RECON_RELEASE_CTU_ID(recon_release_ctu_id),
    .O_RECON_RELEASE_FRAME_ID(recon_release_frame_id),
    .I_RECON_ERROR(1'b0),
    .O_SAO_CTU_VALID(sao_ctu_valid),
    .I_SAO_CTU_READY(sao_ctu_ready),
    .O_SAO_CTU_ID(sao_ctu_id), .O_SAO_BANK(sao_bank),
    .O_SAO_READ_ENABLE(sao_read_enable),
    .I_SAO_RD_EN(sao_rd_en),
    .I_SAO_RD_COMPONENT_ID(sao_rd_component_id),
    .I_SAO_RD_ADDR(sao_rd_addr),
    .I_SAO_RD_SAMPLE_EN(sao_rd_sample_en),
    .O_SAO_RD_VALID(sao_rd_valid),
    .O_SAO_RD_DATA(sao_rd_data),
    .O_SAO_RD_SAMPLE_EN(sao_rd_return_sample_en),
    .O_SAO_RD_COMPONENT_ID(sao_rd_return_component_id),
    .O_SAO_RD_ADDR(sao_rd_return_addr),
    .I_SAO_RELEASE_VALID(sao_release_valid),
    .O_SAO_RELEASE_READY(sao_release_ready),
    .I_SAO_RELEASE_CTU_ID(sao_release_ctu_id),
    .I_SAO_RELEASE_BANK(sao_release_bank),
    .O_BUSY(busy), .O_PHASE(phase),
    .O_ERROR_VALID(err_valid), .O_ERROR_CODE(err_code),
    .O_INPUT_BUFFER_BUSY(input_busy)
  );

  initial begin
    clk = 1'b0;
    forever #5 clk = ~clk;
  end

  // Clocked synchronous read-response model: no negedge driving.
  always @(posedge clk) begin
    recon_rd_valid <= rst_n && recon_rd_en;
    if (recon_rd_en) begin
      recon_rd_data <= f_recon_word(recon_rd_component_id, recon_rd_addr);
      recon_rd_bank_id <= recon_desc_bank;
      accepted_reads <= accepted_reads + 1;
    end
    if (rst_n && recon_release_valid && recon_release_ready)
      accepted_releases <= accepted_releases + 1;
    if (rst_n && err_valid)
      $fatal(1, "DBF_TOP error code=%0d phase=%0d cycle=%0d", err_code, phase, cycle_count);
    cycle_count <= cycle_count + 1;
    if (cycle_count > 40000)
      $fatal(1, "TIMEOUT DBF_TOP phase=%0d reads=%0d busy=%0d",phase,accepted_reads,busy);
  end

  // The clock-only code above is also what produces all read-model stimulus.
  // Other stimulus changes ONLY on @(posedge clk) using <=.
  initial begin
    meta_start_valid = 0; meta_bank = 0; meta_id = 0;
    meta_qp = 0; meta_qp_cb = 0; meta_qp_cr = 0;
    meta_width = 0; meta_height = 0; meta_enable = 0;
    leaf_valid = 0; leaf_ctu_id = 0; leaf_cu_id = 0;
    leaf_x_unit = 0; leaf_y_unit = 0;
    leaf_width_code = 0; leaf_height_code = 0;
    meta_done = 0; meta_done_ctu_id = 0;
    start_valid = 0; start_ctu_id = 0; start_bank = 0;
    start_width = 0; start_height = 0;
    recon_desc_valid = 0; recon_desc_bank = 0; recon_desc_ctu_id = 0;
    recon_desc_frame_id = 0; recon_desc_x_origin = 0;
    recon_desc_y_origin = 0; recon_desc_valid_width = 0;
    recon_desc_valid_height = 0; recon_release_ready = 1;
    sao_ctu_ready = 0; sao_rd_en = 0; sao_rd_component_id = 0;
    sao_rd_addr = 0; sao_rd_sample_en = 0;
    sao_release_valid = 0; sao_release_ctu_id = 0;
    sao_release_bank = 0;
    rst_n = 0;
    accepted_reads = 0;
    accepted_releases = 0;
    checked_words = 0;
    cycle_count = 0;

    repeat (5) @(posedge clk);
    rst_n <= 1'b1;
    // Allocate CPG metadata bank 0 for a CTU of 8 x 8 luma samples.
    @(posedge clk);
    meta_start_valid <= 1'b1;
    meta_id <= 9'd17; meta_bank <= 1'b0;
    meta_qp <= 6'd25; meta_qp_cb <= 6'd25; meta_qp_cr <= 6'd25;
    meta_width <= 8'd8; meta_height <= 8'd8;
    meta_enable <= 1'b1;
    do @(posedge clk); while (!meta_start_ready);
    meta_start_valid <= 1'b0;
    $display("[TB] metadata CTU start accepted at %0t", $time);

    // One leaf covering all 8x8 luma pixels (2x2 4x4 units).
    @(posedge clk);
    leaf_valid <= 1'b1; leaf_ctu_id <= 9'd17; leaf_cu_id <= 8'd1;
    leaf_x_unit <= 5'd0; leaf_y_unit <= 5'd0;
    leaf_width_code <= 3'd1; leaf_height_code <= 3'd1;
    do @(posedge clk); while (!leaf_ready);
    leaf_valid <= 1'b0;
    $display("[TB] leaf accepted at %0t", $time);

    // End metadata after the collector finishes stamping all grid entries.
    do @(posedge clk); while (!leaf_ready);
    meta_done <= 1'b1; meta_done_ctu_id <= 9'd17;
    @(posedge clk);
    meta_done <= 1'b0;
    wait (metadata_ready[0]);
    $display("[TB] metadata_ready at %0t", $time);

    // Start DBF Controller. Recon descriptor remains valid until Loader READY.
    @(posedge clk);
    start_valid <= 1'b1; start_ctu_id <= 9'd17;
    start_bank <= 1'b0; start_width <= 8'd8; start_height <= 8'd8;
    do @(posedge clk); while (!start_ready);
    start_valid <= 1'b0;
    @(posedge clk);
    recon_desc_valid <= 1'b1;
    recon_desc_ctu_id <= 9'd17; recon_desc_bank <= 1'b1;
    recon_desc_frame_id <= 8'd9;
    recon_desc_valid_width <= 8'd8;
    recon_desc_valid_height <= 8'd8;
    do @(posedge clk); while (!recon_desc_ready);
    recon_desc_valid <= 1'b0;
    $display("[TB] Recon descriptor accepted at %0t", $time);

    wait (sao_ctu_valid);
    $display("[TB] SAO offered at %0t, recon reads=%0d", $time, accepted_reads);
    if (sao_ctu_id !== 9'd17 || sao_bank !== 1'b0)
      $fatal(1, "Bad SAO CTU tags");
    if (accepted_reads != 24 || accepted_releases != 1)
      $fatal(1, "Unexpected Recon read/release count: %0d / %0d",accepted_reads,accepted_releases);
    @(posedge clk);
    sao_ctu_ready <= 1'b1;
    @(posedge clk);
    sao_ctu_ready <= 1'b0;
    // Read and check 16 Y + 4 Cb + 4 Cr words through final Output Buffer.
    for (int comp = 0; comp < 3; comp++) begin
      for (int row = 0; row < (comp==0 ? 8 : 4); row++) begin
        for (int word = 0; word < (comp==0 ? 2 : 1); word++) begin
          @(posedge clk);
          sao_rd_en <= 1'b1;
          sao_rd_component_id <= 2'(comp);
          sao_rd_addr <= 12'(row * (comp==0 ? 32 : 16) + word);
          sao_rd_sample_en <= 4'b1111;
          @(posedge clk);
          sao_rd_en <= 1'b0;
          @(posedge clk);
          if (!sao_rd_valid || sao_rd_return_component_id !== 2'(comp) ||
              sao_rd_return_addr !== 12'(row*(comp==0 ? 32 : 16)+word) ||
              sao_rd_return_sample_en !== 4'b1111 ||
              sao_rd_data !== f_recon_word(2'(comp),12'(row*(comp==0 ? 32 : 16)+word)))
            $fatal(1, "SAO read mismatch comp=%0d row=%0d word=%0d got=%h expected=%h", 
                comp,row,word,sao_rd_data,
                f_recon_word(2'(comp),12'(row*(comp==0 ? 32 : 16)+word)));
          checked_words++;
        end
      end
    end
    @(posedge clk);
    sao_release_valid <= 1'b1;
    sao_release_ctu_id <= 9'd17; sao_release_bank <= 1'b0;
    do @(posedge clk); while (!sao_release_ready);
    sao_release_valid <= 1'b0;
    @(posedge clk);
    if (busy || input_busy || bank_busy != 2'b00)
      $fatal(1,"Buffers/metadata bank not released");
    $display("PASS DBF_TOP: 24/24 SAO words match, Recon release OK, Controller returned IDLE");
    $finish;
  end

  initial begin
    $dumpfile("02_sim/run/DBF_TOP_TB.vcd");
    $dumpvars(0, DBF_TOP_TB);
  end
endmodule: DBF_TOP_TB
