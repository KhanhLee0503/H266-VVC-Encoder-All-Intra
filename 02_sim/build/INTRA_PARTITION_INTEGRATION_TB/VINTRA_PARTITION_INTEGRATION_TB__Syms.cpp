// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "VINTRA_PARTITION_INTEGRATION_TB.h"
#include "VINTRA_PARTITION_INTEGRATION_TB___024root.h"
#include "VINTRA_PARTITION_INTEGRATION_TB_INTRA_ANGULAR_NEG_REF_EXTENSION.h"

// FUNCTIONS
VINTRA_PARTITION_INTEGRATION_TB__Syms::~VINTRA_PARTITION_INTEGRATION_TB__Syms()
{
}

VINTRA_PARTITION_INTEGRATION_TB__Syms::VINTRA_PARTITION_INTEGRATION_TB__Syms(VerilatedContext* contextp, const char* namep, VINTRA_PARTITION_INTEGRATION_TB* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension{this, Verilated::catName(namep, "INTRA_PARTITION_INTEGRATION_TB.U_INTRA_PREDICTION_ENGINE.U_INTRA_ANGULAR_H_PRED_CORE.u_intra_angular_neg_ref_extension")}
    , TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension{this, Verilated::catName(namep, "INTRA_PARTITION_INTEGRATION_TB.U_INTRA_PREDICTION_ENGINE.U_INTRA_ANGULAR_V_PRED_CORE.u_intra_angular_neg_ref_extension")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension = &TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension;
    TOP.__PVT__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension = &TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension.__Vconfigure(true);
    TOP__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension.__Vconfigure(false);
    // Setup scopes
    __Vscope_INTRA_PARTITION_INTEGRATION_TB.configure(this, name(), "INTRA_PARTITION_INTEGRATION_TB", "INTRA_PARTITION_INTEGRATION_TB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_INTRA_PARTITION_INTEGRATION_TB__final_checks.configure(this, name(), "INTRA_PARTITION_INTEGRATION_TB.final_checks", "final_checks", -9, VerilatedScope::SCOPE_OTHER);
}
