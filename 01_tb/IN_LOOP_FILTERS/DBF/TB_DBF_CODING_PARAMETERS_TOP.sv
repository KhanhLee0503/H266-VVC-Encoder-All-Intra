//-----------------------------------------------------------
// Company     : User Project
// Description : Small single-CTU integration smoke test.
//               All DUT stimuli are driven at posedge I_CLK
//               with nonblocking assignments (no negedge drive).
//               This is a simulation-only testbench.
//-----------------------------------------------------------
`timescale 1ns/1ps

module TB_DBF_CODING_PARAMETERS_TOP;
    logic I_CLK = 1'b0;
    always #5 I_CLK = ~I_CLK;
    logic I_RST_N = 1'b0;
    logic I_CLEAR = 1'b0;
    logic I_FRAME_START = 1'b0;
    logic I_CTU_START = 1'b0;
    logic O_CTU_START_READY;
    logic [8:0] I_CTU_ID = 9'd0;
    logic [15:0] I_CTU_X = 16'd0;
    logic [15:0] I_CTU_Y = 16'd0;
    logic [7:0] I_CTU_VALID_WIDTH = 8'd32;
    logic [7:0] I_CTU_VALID_HEIGHT = 8'd32;
    logic I_HAS_RIGHT_CTU = 1'b0;
    logic I_HAS_BOTTOM_CTU = 1'b0;
    logic I_META_VALID = 1'b0;
    logic O_META_READY;
    logic [15:0] I_META_TU_ID = '0;
    logic [8:0] I_META_CTU_ID = '0;
    logic [7:0] I_META_CU_ID = '0;
    logic [1:0] I_META_COMPONENT_ID = '0;
    logic [6:0] I_META_CU_X = '0;
    logic [6:0] I_META_CU_Y = '0;
    logic [1:0] I_META_WIDTH_SIZE = '0;
    logic [1:0] I_META_HEIGHT_SIZE = '0;
    logic [7:0] I_META_INTRA_MODE = '0;
    logic I_CTU_META_END = 1'b0;
    logic O_CTU_PARAMS_READY;
    logic I_CTU_RELEASE = 1'b0;
    logic O_CTU_RELEASE_READY;
    logic O_BUSY, O_ERROR;
    logic [11:0] O_ACCEPTED_COUNT;
    logic [12:0] O_OUTSTANDING_COUNT;

    logic I_V_RD_VALID = 1'b0;
    logic O_V_RD_READY;
    logic [1:0] I_V_RD_COMPONENT = '0;
    logic [4:0] I_V_RD_ROW = '0, I_V_RD_COL = '0;
    logic O_V_PARAM_VALID;
    logic I_V_PARAM_READY = 1'b0;
    logic [1:0] O_V_PARAM_COMPONENT;
    logic [4:0] O_V_PARAM_ROW, O_V_PARAM_COL;
    logic O_V_EDGE_ACTIVE;
    logic [2:0] O_V_LENGTH_P, O_V_LENGTH_Q;
    logic [1:0] O_V_BS;

    logic I_H_RD_VALID = 1'b0;
    logic O_H_RD_READY;
    logic [1:0] I_H_RD_COMPONENT = '0;
    logic [4:0] I_H_RD_ROW = '0, I_H_RD_COL = '0;
    logic O_H_PARAM_VALID;
    logic I_H_PARAM_READY = 1'b0;
    logic [1:0] O_H_PARAM_COMPONENT;
    logic [4:0] O_H_PARAM_ROW, O_H_PARAM_COL;
    logic O_H_EDGE_ACTIVE;
    logic [2:0] O_H_LENGTH_P, O_H_LENGTH_Q;
    logic [1:0] O_H_BS;

    DBF_CODING_PARAMETERS_TOP #(
        .PARA_MAX_CTU_COLS(1)
    ) DUT (.*);

    // V7: exactly one process accepts a metadata beat and lowers VALID.
    integer r_meta_accept_count = 0;
    integer r_expected_tu_id = 0;
    initial $display("[TB VERSION] DBF CODING PARAMETERS V9 - registered read handshake");

    always @(posedge I_CLK) begin
        if (!I_RST_N) begin
            I_META_VALID        <= 1'b0;
            r_meta_accept_count <= 0;
            r_expected_tu_id   <= 0;
        end
        else if (I_META_VALID && O_META_READY) begin
            if (I_META_TU_ID !== r_expected_tu_id[15:0]) begin
                $fatal(1,"Unexpected TU order: expected=%0d actual=%0d",
                       r_expected_tu_id, I_META_TU_ID);
            end
            $display("[META ACCEPT] t=%0t tu=%0d comp=%0d x=%0d y=%0d count=%0d",
                     $time, I_META_TU_ID, I_META_COMPONENT_ID,
                     I_META_CU_X, I_META_CU_Y, r_meta_accept_count+1);
            I_META_VALID         <= 1'b0;
            r_meta_accept_count <= r_meta_accept_count + 1;
            r_expected_tu_id    <= r_expected_tu_id + 1;
        end
    end

    task automatic send_tu(
        input logic [1:0] component,
        input logic [6:0] x,
        input logic [6:0] y,
        input logic [1:0] code,
        input logic [15:0] tu_id
    );
        integer timeout_count;
        logic done;
        begin
            @(posedge I_CLK);
            if (I_META_VALID !== 1'b0)
                $fatal(1,"Previous metadata transaction still valid");
            if (r_meta_accept_count != int'(tu_id))
                $fatal(1,"Metadata count mismatch: count=%0d nextTU=%0d", r_meta_accept_count, tu_id);
            I_META_VALID        <= 1'b1;
            I_META_COMPONENT_ID <= component;
            I_META_CU_X         <= x;
            I_META_CU_Y         <= y;
            I_META_WIDTH_SIZE   <= code;
            I_META_HEIGHT_SIZE  <= code;
            I_META_TU_ID        <= tu_id;
            I_META_CU_ID        <= tu_id[7:0];
            timeout_count = 0;
            done = 1'b0;
            while (!done) begin
                @(posedge I_CLK);
                #1; // Sampling ONLY, no DUT stimulus assigned after this delay.
                timeout_count = timeout_count + 1;
                if (r_meta_accept_count == (int'(tu_id) + 1)) begin
                    done = 1'b1;
                    $display("[SEND_TU DONE] t=%0t tu=%0d accepted_count=%0d",$time,tu_id,r_meta_accept_count);
                end
                else if (timeout_count >= 400) begin
                    $fatal(1,"TIMEOUT TU=%0d count=%0d ready=%b", tu_id, r_meta_accept_count, O_META_READY);
                end
            end
        end
    endtask

    task automatic check_read_results;
        begin
            // V9: Do NOT infer acceptance from RD_READY sampled AFTER
            // a posedge that asserts RD_VALID via NBA. In the active
            // simulator scheduling, the registered response may already
            // be visible when this observation executes.
            // Before driving the requests, verify both output slots are
            // empty and the producer-facing read channels can receive.
            @(posedge I_CLK);
            if (!O_CTU_PARAMS_READY || O_V_PARAM_VALID || O_H_PARAM_VALID ||
                !O_V_RD_READY || !O_H_RD_READY)
                $fatal(1, "READ PORTS NOT INITIALLY EMPTY/READY: ready=%b Vresp=%b Hresp=%b Vready=%b Hready=%b",
                       O_CTU_PARAMS_READY, O_V_PARAM_VALID, O_H_PARAM_VALID,
                       O_V_RD_READY, O_H_RD_READY);

            // Drive request and address only at this posedge via NBA.
            I_V_RD_VALID      <= 1'b1;
            I_V_RD_COMPONENT  <= 2'd0;
            I_V_RD_ROW        <= 5'd0;
            I_V_RD_COL        <= 5'd4;
            I_H_RD_VALID      <= 1'b1;
            I_H_RD_COMPONENT  <= 2'd0;
            I_H_RD_ROW        <= 5'd4;
            I_H_RD_COL        <= 5'd0;

            // Diagnostic ONLY. A response may already exist here.
            // If so, RD_READY=0 is EXPECTED while PARAM_READY=0.
            #1;
            $display("[READ AFTER DRIVE] t=%0t params_ready=%b Vreq=%b Vready=%b Hreq=%b Hready=%b Vresp=%b Hresp=%b",
                     $time, O_CTU_PARAMS_READY,
                     I_V_RD_VALID, O_V_RD_READY,
                     I_H_RD_VALID, O_H_RD_READY,
                     O_V_PARAM_VALID, O_H_PARAM_VALID);

            // Keep RD_VALID high across one sampling edge; deassert it
            // at the next posedge using NBA. Exactly one request can be
            // accepted because the 1-entry response is held stalled.
            // Either same-edge NBA implementation or conventional edge
            // sampling produces a valid response by the check below.
            @(posedge I_CLK);
            I_V_RD_VALID <= 1'b0;
            I_H_RD_VALID <= 1'b0;
            #1; // Observe the registered responses after NBA settles.
            $display("[READ POST-ACCEPT] t=%0t Vready=%b Hready=%b Vresp=%b Hresp=%b Vactive=%b Hactive=%b V=(%0d,%0d,%0d) H=(%0d,%0d,%0d)",
                     $time, O_V_RD_READY, O_H_RD_READY,
                     O_V_PARAM_VALID, O_H_PARAM_VALID,
                     O_V_EDGE_ACTIVE, O_H_EDGE_ACTIVE,
                     O_V_LENGTH_P, O_V_LENGTH_Q, O_V_BS,
                     O_H_LENGTH_P, O_H_LENGTH_Q, O_H_BS);
            if (!O_V_PARAM_VALID || !O_H_PARAM_VALID)
                $fatal(1, "READ RESPONSE MISSING AFTER REQUEST ACCEPTANCE: V=%b H=%b",
                       O_V_PARAM_VALID, O_H_PARAM_VALID);
            if (O_V_RD_READY || O_H_RD_READY)
                $fatal(1, "ONE-ENTRY RESPONSE BUFFERS SHOULD BE FULL WHILE CONSUMERS STALL");

            if (!O_V_EDGE_ACTIVE ||
                O_V_PARAM_COMPONENT != 2'd0 ||
                O_V_PARAM_ROW != 5'd0 || O_V_PARAM_COL != 5'd4 ||
                O_V_LENGTH_P != 3'd3 || O_V_LENGTH_Q != 3'd3 || O_V_BS != 2'd2)
                $fatal(1, "VERTICAL DATA MISMATCH: active=%b comp=%0d row=%0d col=%0d P=%0d Q=%0d BS=%0d",
                       O_V_EDGE_ACTIVE, O_V_PARAM_COMPONENT, O_V_PARAM_ROW,
                       O_V_PARAM_COL, O_V_LENGTH_P, O_V_LENGTH_Q, O_V_BS);
            if (!O_H_EDGE_ACTIVE ||
                O_H_PARAM_COMPONENT != 2'd0 ||
                O_H_PARAM_ROW != 5'd4 || O_H_PARAM_COL != 5'd0 ||
                O_H_LENGTH_P != 3'd3 || O_H_LENGTH_Q != 3'd3 || O_H_BS != 2'd2)
                $fatal(1, "HORIZONTAL DATA MISMATCH: active=%b comp=%0d row=%0d col=%0d P=%0d Q=%0d BS=%0d",
                       O_H_EDGE_ACTIVE, O_H_PARAM_COMPONENT, O_H_PARAM_ROW,
                       O_H_PARAM_COL, O_H_LENGTH_P, O_H_LENGTH_Q, O_H_BS);

            // Both response channels must retain VALID and payload while
            // their consumers hold READY low.
            repeat (2) @(posedge I_CLK);
            #1;
            if (!O_V_PARAM_VALID || !O_H_PARAM_VALID ||
                !O_V_EDGE_ACTIVE || !O_H_EDGE_ACTIVE ||
                O_V_LENGTH_P != 3'd3 || O_V_LENGTH_Q != 3'd3 ||
                O_H_LENGTH_P != 3'd3 || O_H_LENGTH_Q != 3'd3 ||
                O_V_BS != 2'd2 || O_H_BS != 2'd2)
                $fatal(1, "READ RESPONSE CHANGED UNDER BACKPRESSURE");
            $display("PASS: Y V/H edge SP=3 SQ=3 BS=2, response stall stable");

            // Consume at a deliberately separate clock. READY is driven
            // only via a posedge NBA, never via negedge or a timed delay.
            @(posedge I_CLK);
            I_V_PARAM_READY <= 1'b1;
            I_H_PARAM_READY <= 1'b1;
            @(posedge I_CLK);
            I_V_PARAM_READY <= 1'b0;
            I_H_PARAM_READY <= 1'b0;
            #1;
            if (O_V_PARAM_VALID || O_H_PARAM_VALID)
                $fatal(1, "READ RESPONSE DID NOT DRAIN: V=%b H=%b",
                       O_V_PARAM_VALID, O_H_PARAM_VALID);
            $display("PASS: Y V/H response consumed");
        end
    endtask

    // Diagnostic monitors: observation only, no DUT stimulus.
    logic r_seen_error = 1'b0;
    always @(posedge I_CLK) begin
        if (I_RST_N && !r_seen_error) begin
            if (DUT.w_bs_valid && DUT.w_bs_ready &&
                ((DUT.w_bs_status == 2'd2) || (DUT.w_bs_status == 2'd3))) begin
                $display("[DEBUG BAD STATUS] t=%0t edge=%0d comp=%0d dir=%0d row=%0d col=%0d status=%0d P=%0d Q=%0d geom_exists=%0b geom_pvalid=%0b geom_qvalid=%0b geom_need=%0b", $time,
                    DUT.w_bs_edge_id, DUT.w_bs_component, DUT.w_bs_direction,
                    DUT.w_bs_row, DUT.w_bs_col, DUT.w_bs_status,
                    DUT.w_bs_len_p, DUT.w_bs_len_q,
                    DUT.w_geom_rd_edge_exists, DUT.w_geom_rd_p_valid,
                    DUT.w_geom_rd_q_valid, DUT.w_geom_need_neighbor);
            end
            if (DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_bad) begin
                $display("[DEBUG STORE REJECT] t=%0t edge=%0d expected=%0d comp=%0d dir=%0d row=%0d col=%0d status=%0d P=%0d Q=%0d bS=%0d coord_ok=%0b order_ok=%0b length_ok=%0b", $time,
                    DUT.w_bs_edge_id, DUT.w_store_accepted_count,
                    DUT.w_bs_component, DUT.w_bs_direction, DUT.w_bs_row,
                    DUT.w_bs_col, DUT.w_bs_status, DUT.w_bs_len_p,
                    DUT.w_bs_len_q, DUT.w_bs_strength,
                    DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_coord_ok,
                    DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_order_ok,
                    DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_length_ok);
            end
            if (O_ERROR || DUT.w_sub_error || DUT.r_error) begin
                r_seen_error <= 1'b1;
                $display("\n=== FIRST ERROR DIAGNOSTICS t=%0t ===", $time);
                $display("wrapper: state=%0d r_error=%0b sub_error=%0b end_pending=%0b end_issued=%0b outstanding=%0d accepted=%0d", DUT.r_state,DUT.r_error,DUT.w_sub_error,DUT.r_end_pending,DUT.r_ctu_end_issued,DUT.r_outstanding,DUT.w_store_accepted_count);
                $display("submodules: metadata=%0b neighbor=%0b scanner=%0b store=%0b", DUT.w_geom_error,DUT.w_neighbor_error,DUT.w_scanner_error,DUT.w_store_error);
                $display("FSM: metadata=%0d neighbor=%0d scanner=%0d len=%0d store=%0d", DUT.U_DBF_CTU_METADATA_STORE.r_current_state,DUT.U_DBF_NEIGHBOR_GEOMETRY_BUFFER.r_state,DUT.U_DBF_EDGE_SCANNER.r_state,DUT.U_DBF_FILTER_LENGTH_ENGINE.r_state,DUT.U_DBF_EDGE_PARAMETER_STORE.r_state);
                $display("scanner: done=%0b req_valid=%0b req_ready=%0b phase=%0d row=%0d col=%0d eid=%0d drained=%0b", DUT.w_scanner_done,DUT.w_scanner_req_valid,DUT.w_scanner_req_ready,DUT.U_DBF_EDGE_SCANNER.r_phase,DUT.w_scanner_row,DUT.w_scanner_col,DUT.w_scanner_edge_id,DUT.w_drained);
                $display("last BS: valid=%0b ready=%0b eid=%0d comp=%0d dir=%0d row=%0d col=%0d status=%0d P=%0d Q=%0d bS=%0d", DUT.w_bs_valid,DUT.w_bs_ready,DUT.w_bs_edge_id,DUT.w_bs_component,DUT.w_bs_direction,DUT.w_bs_row,DUT.w_bs_col,DUT.w_bs_status,DUT.w_bs_len_p,DUT.w_bs_len_q,DUT.w_bs_strength);
                $display("store: bad=%0b coord_ok=%0b order_ok=%0b length_ok=%0b build_done=%0b", DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_bad,DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_coord_ok,DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_order_ok,DUT.U_DBF_EDGE_PARAMETER_STORE.w_wr_length_ok,DUT.U_DBF_EDGE_PARAMETER_STORE.I_BUILD_DONE);
                $display("=======================================\n");
            end
        end
    end


    // ------------------------------------------------------------
    // EXTRA GEOMETRY TRACE: check why internal edge (Y,V,row=0,col=4)
    // has Q_VALID=1 but P_VALID=0.
    // Observation-only; no DUT signals are driven here.
    // ------------------------------------------------------------
    logic r_prev_p4 = 1'b0;
    logic r_prev_q4 = 1'b0;
    always @(posedge I_CLK) begin
        if (I_RST_N) begin
            if (DUT.U_DBF_CTU_METADATA_STORE.w_write_step &&
                DUT.U_DBF_CTU_METADATA_STORE.w_wr_vertical &&
                DUT.U_DBF_CTU_METADATA_STORE.w_wr_x == 9'd16 &&
                DUT.U_DBF_CTU_METADATA_STORE.w_wr_y == 9'd0 &&
                DUT.U_DBF_CTU_METADATA_STORE.r_comp == 2'd0) begin
                $display("[GEOM V WRITE] t=%0t side=%s addr=%0d eligible=%0b in_ctu=%0b state=%0d off=%0d x=%0d y=%0d", 
                    $time,
                    DUT.U_DBF_CTU_METADATA_STORE.w_wr_is_p ? "P" : "Q",
                    DUT.U_DBF_CTU_METADATA_STORE.w_wr_addr_y,
                    DUT.U_DBF_CTU_METADATA_STORE.w_wr_eligible,
                    DUT.U_DBF_CTU_METADATA_STORE.w_wr_in_ctu,
                    DUT.U_DBF_CTU_METADATA_STORE.r_current_state,
                    DUT.U_DBF_CTU_METADATA_STORE.r_off,
                    DUT.U_DBF_CTU_METADATA_STORE.w_wr_x,
                    DUT.U_DBF_CTU_METADATA_STORE.w_wr_y);
            end

            // Since sampling is on posedge, these are pre-NBA values.
            // A successful write appears as a change at the NEXT posedge.
            if (DUT.U_DBF_CTU_METADATA_STORE.r_y_v_p_valid[4] != r_prev_p4 ||
                DUT.U_DBF_CTU_METADATA_STORE.r_y_v_q_valid[4] != r_prev_q4) begin
                $display("[GEOM VALID CHANGE] t=%0t P4=%0b Q4=%0b state=%0d clear=%0b ctu_start=%0b", 
                    $time,
                    DUT.U_DBF_CTU_METADATA_STORE.r_y_v_p_valid[4],
                    DUT.U_DBF_CTU_METADATA_STORE.r_y_v_q_valid[4],
                    DUT.U_DBF_CTU_METADATA_STORE.r_current_state,
                    DUT.U_DBF_CTU_METADATA_STORE.I_CLEAR,
                    DUT.U_DBF_CTU_METADATA_STORE.I_CTU_START);
            end
            if (DUT.w_len_meta_rd_en && DUT.w_len_meta_rd_component == 2'd0 &&
                DUT.w_len_meta_rd_direction == 1'b0 &&
                DUT.w_len_meta_rd_row == 5'd0 && DUT.w_len_meta_rd_col == 5'd4) begin
                $display("[GEOM READ REQUEST] t=%0t P4=%0b Q4=%0b payloadP=%0d payloadQ=%0d", 
                    $time,
                    DUT.U_DBF_CTU_METADATA_STORE.r_y_v_p_valid[4],
                    DUT.U_DBF_CTU_METADATA_STORE.r_y_v_q_valid[4],
                    DUT.U_DBF_CTU_METADATA_STORE.r_y_v_p[4],
                    DUT.U_DBF_CTU_METADATA_STORE.r_y_v_q[4]);
            end
        end
        r_prev_p4 <= DUT.U_DBF_CTU_METADATA_STORE.r_y_v_p_valid[4];
        r_prev_q4 <= DUT.U_DBF_CTU_METADATA_STORE.r_y_v_q_valid[4];
    end

    integer i;
    initial begin
        // Testbench clock is generated by the 'always #5' above.
        // All DUT inputs are updated exclusively using NBA at posedge.
        repeat (5) @(posedge I_CLK);
        I_RST_N <= 1'b1;
        @(posedge I_CLK);
        I_FRAME_START <= 1'b1;
        @(posedge I_CLK);
        I_FRAME_START <= 1'b0;
        do @(posedge I_CLK); while (!O_CTU_START_READY);
        I_CTU_START <= 1'b1;
        @(posedge I_CLK);
        I_CTU_START <= 1'b0;

        // Cover a 32x32 luma picture with four 16x16 leaf TUs,
        // and corresponding 16x16 chroma pictures with four 8x8 TUs.
        for (i=0; i<4; i=i+1)
            send_tu(2'd0, (i%2)*16, (i/2)*16, 2'd2, i);
        for (i=0; i<4; i=i+1)
            send_tu(2'd1, (i%2)*8, (i/2)*8, 2'd1, i+4);
        for (i=0; i<4; i=i+1)
            send_tu(2'd2, (i%2)*8, (i/2)*8, 2'd1, i+8);
        @(posedge I_CLK);
        if (r_meta_accept_count != 12)
            $fatal(1,"Incomplete metadata: accepted=%0d expected=12", r_meta_accept_count);
        I_CTU_META_END <= 1'b1;
        @(posedge I_CLK);
        I_CTU_META_END <= 1'b0;

        do @(posedge I_CLK); while (!O_CTU_PARAMS_READY && !O_ERROR);
        if (O_ERROR) $fatal(1,"Subsystem reported O_ERROR");
        if (O_ACCEPTED_COUNT != 12'd192)
            $fatal(1,"Expected 192 accepted edge requests, got %d",O_ACCEPTED_COUNT);
        if (O_OUTSTANDING_COUNT != 13'd0)
            $fatal(1,"Outstanding edge count not zero");
        $display("PASS: parameter build accepted=%d",O_ACCEPTED_COUNT);
        check_read_results();

        // Flush registered read responses before release.
        @(posedge I_CLK);
        do @(posedge I_CLK); while (!O_CTU_RELEASE_READY);
        I_CTU_RELEASE <= 1'b1;
        @(posedge I_CLK);
        I_CTU_RELEASE <= 1'b0;
        $display("PASS: CTU release");
        $finish;
    end

    initial begin
        repeat (30000) @(posedge I_CLK);
        $fatal(1,"TIMEOUT DBF_CODING_PARAMETERS_TOP: top=%0d store=%0d read_V=%b read_H=%b Vresp=%b Hresp=%b rel_ready=%b",
               DUT.r_state, DUT.U_DBF_EDGE_PARAMETER_STORE.r_state,
               O_V_RD_READY,O_H_RD_READY,O_V_PARAM_VALID,O_H_PARAM_VALID,
               O_CTU_RELEASE_READY);
    end
endmodule
