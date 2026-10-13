// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VINTRA_PARTITION_INTEGRATION_TB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VINTRA_PARTITION_INTEGRATION_TB::VINTRA_PARTITION_INTEGRATION_TB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VINTRA_PARTITION_INTEGRATION_TB__Syms(contextp(), _vcname__, this)}
    , __PVT__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension{vlSymsp->TOP.__PVT__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_H_PRED_CORE__DOT__u_intra_angular_neg_ref_extension}
    , __PVT__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension{vlSymsp->TOP.__PVT__INTRA_PARTITION_INTEGRATION_TB__DOT__U_INTRA_PREDICTION_ENGINE__DOT__U_INTRA_ANGULAR_V_PRED_CORE__DOT__u_intra_angular_neg_ref_extension}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VINTRA_PARTITION_INTEGRATION_TB::VINTRA_PARTITION_INTEGRATION_TB(const char* _vcname__)
    : VINTRA_PARTITION_INTEGRATION_TB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VINTRA_PARTITION_INTEGRATION_TB::~VINTRA_PARTITION_INTEGRATION_TB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_debug_assertions(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
#endif  // VL_DEBUG
void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_static(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_initial(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_settle(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);
void VINTRA_PARTITION_INTEGRATION_TB___024root___eval(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);

void VINTRA_PARTITION_INTEGRATION_TB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VINTRA_PARTITION_INTEGRATION_TB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->clearTriggeredEvents();
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VINTRA_PARTITION_INTEGRATION_TB___024root___eval_static(&(vlSymsp->TOP));
        VINTRA_PARTITION_INTEGRATION_TB___024root___eval_initial(&(vlSymsp->TOP));
        VINTRA_PARTITION_INTEGRATION_TB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VINTRA_PARTITION_INTEGRATION_TB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VINTRA_PARTITION_INTEGRATION_TB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VINTRA_PARTITION_INTEGRATION_TB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VINTRA_PARTITION_INTEGRATION_TB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VINTRA_PARTITION_INTEGRATION_TB___024root___eval_final(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf);

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB::final() {
    VINTRA_PARTITION_INTEGRATION_TB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VINTRA_PARTITION_INTEGRATION_TB::hierName() const { return vlSymsp->name(); }
const char* VINTRA_PARTITION_INTEGRATION_TB::modelName() const { return "VINTRA_PARTITION_INTEGRATION_TB"; }
unsigned VINTRA_PARTITION_INTEGRATION_TB::threads() const { return 1; }
void VINTRA_PARTITION_INTEGRATION_TB::prepareClone() const { contextp()->prepareClone(); }
void VINTRA_PARTITION_INTEGRATION_TB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VINTRA_PARTITION_INTEGRATION_TB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VINTRA_PARTITION_INTEGRATION_TB___024root__trace_decl_types(VerilatedVcd* tracep);

void VINTRA_PARTITION_INTEGRATION_TB___024root__trace_init_top(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VINTRA_PARTITION_INTEGRATION_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VINTRA_PARTITION_INTEGRATION_TB___024root*>(voidSelf);
    VINTRA_PARTITION_INTEGRATION_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VINTRA_PARTITION_INTEGRATION_TB___024root__trace_decl_types(tracep);
    VINTRA_PARTITION_INTEGRATION_TB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB___024root__trace_register(VINTRA_PARTITION_INTEGRATION_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VINTRA_PARTITION_INTEGRATION_TB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VINTRA_PARTITION_INTEGRATION_TB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VINTRA_PARTITION_INTEGRATION_TB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
