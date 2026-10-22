// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRECON_SUBSYSTEM_TOP__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRECON_SUBSYSTEM_TOP::VRECON_SUBSYSTEM_TOP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRECON_SUBSYSTEM_TOP__Syms(contextp(), _vcname__, this)}
    , I_CLK{vlSymsp->TOP.I_CLK}
    , I_RESETN{vlSymsp->TOP.I_RESETN}
    , I_CLEAR_ERROR{vlSymsp->TOP.I_CLEAR_ERROR}
    , I_PICTURE_START{vlSymsp->TOP.I_PICTURE_START}
    , I_CTU_START_VALID{vlSymsp->TOP.I_CTU_START_VALID}
    , O_CTU_START_READY{vlSymsp->TOP.O_CTU_START_READY}
    , I_CTU_VALID_WIDTH{vlSymsp->TOP.I_CTU_VALID_WIDTH}
    , I_CTU_VALID_HEIGHT{vlSymsp->TOP.I_CTU_VALID_HEIGHT}
    , O_CTU_INIT_DONE{vlSymsp->TOP.O_CTU_INIT_DONE}
    , I_CTU_FINISH_VALID{vlSymsp->TOP.I_CTU_FINISH_VALID}
    , O_CTU_FINISH_READY{vlSymsp->TOP.O_CTU_FINISH_READY}
    , I_CU_VALID{vlSymsp->TOP.I_CU_VALID}
    , O_CU_READY{vlSymsp->TOP.O_CU_READY}
    , I_CU_X{vlSymsp->TOP.I_CU_X}
    , I_CU_Y{vlSymsp->TOP.I_CU_Y}
    , I_CU_WIDTH{vlSymsp->TOP.I_CU_WIDTH}
    , I_CU_HEIGHT{vlSymsp->TOP.I_CU_HEIGHT}
    , I_CU_REF_COMMIT_REQ{vlSymsp->TOP.I_CU_REF_COMMIT_REQ}
    , O_CU_REF_COMMIT_DONE{vlSymsp->TOP.O_CU_REF_COMMIT_DONE}
    , I_CU_RELEASE{vlSymsp->TOP.I_CU_RELEASE}
    , I_RECON_VALID{vlSymsp->TOP.I_RECON_VALID}
    , O_RECON_READY{vlSymsp->TOP.O_RECON_READY}
    , I_RECON_COMPONENT_ID{vlSymsp->TOP.I_RECON_COMPONENT_ID}
    , I_RECON_X_BASE{vlSymsp->TOP.I_RECON_X_BASE}
    , I_RECON_Y{vlSymsp->TOP.I_RECON_Y}
    , I_RECON_LANE_VALID{vlSymsp->TOP.I_RECON_LANE_VALID}
    , I_RECON_TU_LAST{vlSymsp->TOP.I_RECON_TU_LAST}
    , I_REF_MAP_QUERY_COMPONENT_ID{vlSymsp->TOP.I_REF_MAP_QUERY_COMPONENT_ID}
    , I_REF_TOP_MAP_QUERY_VALID{vlSymsp->TOP.I_REF_TOP_MAP_QUERY_VALID}
    , I_REF_TOP_MAP_X_UNIT{vlSymsp->TOP.I_REF_TOP_MAP_X_UNIT}
    , I_REF_TOP_MAP_Y_UNIT{vlSymsp->TOP.I_REF_TOP_MAP_Y_UNIT}
    , O_REF_TOP_MAP_AVAILABLE{vlSymsp->TOP.O_REF_TOP_MAP_AVAILABLE}
    , I_REF_LEFT_MAP_QUERY_VALID{vlSymsp->TOP.I_REF_LEFT_MAP_QUERY_VALID}
    , I_REF_LEFT_MAP_X_UNIT{vlSymsp->TOP.I_REF_LEFT_MAP_X_UNIT}
    , I_REF_LEFT_MAP_Y_UNIT{vlSymsp->TOP.I_REF_LEFT_MAP_Y_UNIT}
    , O_REF_LEFT_MAP_AVAILABLE{vlSymsp->TOP.O_REF_LEFT_MAP_AVAILABLE}
    , I_REF_TL_MAP_QUERY_VALID{vlSymsp->TOP.I_REF_TL_MAP_QUERY_VALID}
    , I_REF_TL_MAP_X_UNIT{vlSymsp->TOP.I_REF_TL_MAP_X_UNIT}
    , I_REF_TL_MAP_Y_UNIT{vlSymsp->TOP.I_REF_TL_MAP_Y_UNIT}
    , O_REF_TL_MAP_AVAILABLE{vlSymsp->TOP.O_REF_TL_MAP_AVAILABLE}
    , O_REF_ABOVE_ROW_VALID{vlSymsp->TOP.O_REF_ABOVE_ROW_VALID}
    , O_REF_LEFT_BOUNDARY_VALID{vlSymsp->TOP.O_REF_LEFT_BOUNDARY_VALID}
    , O_REF_ABOVE_LEFT_VALID{vlSymsp->TOP.O_REF_ABOVE_LEFT_VALID}
    , I_REF_H_EDGE_RD_EN{vlSymsp->TOP.I_REF_H_EDGE_RD_EN}
    , I_REF_H_EDGE_RD_COMPONENT_ID{vlSymsp->TOP.I_REF_H_EDGE_RD_COMPONENT_ID}
    , O_REF_H_EDGE_RD_VALID{vlSymsp->TOP.O_REF_H_EDGE_RD_VALID}
    , I_REF_V_EDGE_RD_EN{vlSymsp->TOP.I_REF_V_EDGE_RD_EN}
    , I_REF_V_EDGE_RD_COMPONENT_ID{vlSymsp->TOP.I_REF_V_EDGE_RD_COMPONENT_ID}
    , O_REF_V_EDGE_RD_VALID{vlSymsp->TOP.O_REF_V_EDGE_RD_VALID}
    , I_REF_ABOVE_RD_EN{vlSymsp->TOP.I_REF_ABOVE_RD_EN}
    , I_REF_ABOVE_RD_COMPONENT_ID{vlSymsp->TOP.I_REF_ABOVE_RD_COMPONENT_ID}
    , O_REF_ABOVE_RD_VALID{vlSymsp->TOP.O_REF_ABOVE_RD_VALID}
    , I_REF_LEFT_BOUND_RD_EN{vlSymsp->TOP.I_REF_LEFT_BOUND_RD_EN}
    , I_REF_LEFT_BOUND_RD_COMPONENT_ID{vlSymsp->TOP.I_REF_LEFT_BOUND_RD_COMPONENT_ID}
    , I_REF_LEFT_BOUND_RD_ADDR{vlSymsp->TOP.I_REF_LEFT_BOUND_RD_ADDR}
    , O_REF_LEFT_BOUND_RD_VALID{vlSymsp->TOP.O_REF_LEFT_BOUND_RD_VALID}
    , I_REF_CORNER_QUERY_COMPONENT_ID{vlSymsp->TOP.I_REF_CORNER_QUERY_COMPONENT_ID}
    , O_REF_CORNER_QUERY_VALID{vlSymsp->TOP.O_REF_CORNER_QUERY_VALID}
    , I_EXPORT_RAM_RD_EN{vlSymsp->TOP.I_EXPORT_RAM_RD_EN}
    , I_EXPORT_RAM_RD_COMPONENT_ID{vlSymsp->TOP.I_EXPORT_RAM_RD_COMPONENT_ID}
    , O_EXPORT_RAM_RD_VALID{vlSymsp->TOP.O_EXPORT_RAM_RD_VALID}
    , O_BUSY{vlSymsp->TOP.O_BUSY}
    , O_ERROR{vlSymsp->TOP.O_ERROR}
    , I_CTU_X_ORIGIN{vlSymsp->TOP.I_CTU_X_ORIGIN}
    , I_CTU_Y_ORIGIN{vlSymsp->TOP.I_CTU_Y_ORIGIN}
    , I_PICTURE_WIDTH{vlSymsp->TOP.I_PICTURE_WIDTH}
    , I_PICTURE_HEIGHT{vlSymsp->TOP.I_PICTURE_HEIGHT}
    , I_REF_H_EDGE_RD_ADDR{vlSymsp->TOP.I_REF_H_EDGE_RD_ADDR}
    , I_REF_V_EDGE_RD_ADDR{vlSymsp->TOP.I_REF_V_EDGE_RD_ADDR}
    , I_REF_ABOVE_RD_ADDR{vlSymsp->TOP.I_REF_ABOVE_RD_ADDR}
    , O_REF_CORNER_QUERY_SAMPLE{vlSymsp->TOP.O_REF_CORNER_QUERY_SAMPLE}
    , I_EXPORT_RAM_RD_ADDR{vlSymsp->TOP.I_EXPORT_RAM_RD_ADDR}
    , I_RECON_SAMPLE{vlSymsp->TOP.I_RECON_SAMPLE}
    , O_REF_H_EDGE_RD_DATA{vlSymsp->TOP.O_REF_H_EDGE_RD_DATA}
    , O_REF_V_EDGE_RD_DATA{vlSymsp->TOP.O_REF_V_EDGE_RD_DATA}
    , O_REF_ABOVE_RD_DATA{vlSymsp->TOP.O_REF_ABOVE_RD_DATA}
    , O_REF_LEFT_BOUND_RD_DATA{vlSymsp->TOP.O_REF_LEFT_BOUND_RD_DATA}
    , O_EXPORT_RAM_RD_DATA{vlSymsp->TOP.O_EXPORT_RAM_RD_DATA}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRECON_SUBSYSTEM_TOP::VRECON_SUBSYSTEM_TOP(const char* _vcname__)
    : VRECON_SUBSYSTEM_TOP(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRECON_SUBSYSTEM_TOP::~VRECON_SUBSYSTEM_TOP() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRECON_SUBSYSTEM_TOP___024root___eval_debug_assertions(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
#endif  // VL_DEBUG
void VRECON_SUBSYSTEM_TOP___024root___eval_static(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
void VRECON_SUBSYSTEM_TOP___024root___eval_initial(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
void VRECON_SUBSYSTEM_TOP___024root___eval_settle(VRECON_SUBSYSTEM_TOP___024root* vlSelf);
void VRECON_SUBSYSTEM_TOP___024root___eval(VRECON_SUBSYSTEM_TOP___024root* vlSelf);

void VRECON_SUBSYSTEM_TOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRECON_SUBSYSTEM_TOP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRECON_SUBSYSTEM_TOP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRECON_SUBSYSTEM_TOP___024root___eval_static(&(vlSymsp->TOP));
        VRECON_SUBSYSTEM_TOP___024root___eval_initial(&(vlSymsp->TOP));
        VRECON_SUBSYSTEM_TOP___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRECON_SUBSYSTEM_TOP___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRECON_SUBSYSTEM_TOP::eventsPending() { return false; }

uint64_t VRECON_SUBSYSTEM_TOP::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRECON_SUBSYSTEM_TOP::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRECON_SUBSYSTEM_TOP___024root___eval_final(VRECON_SUBSYSTEM_TOP___024root* vlSelf);

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP::final() {
    VRECON_SUBSYSTEM_TOP___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRECON_SUBSYSTEM_TOP::hierName() const { return vlSymsp->name(); }
const char* VRECON_SUBSYSTEM_TOP::modelName() const { return "VRECON_SUBSYSTEM_TOP"; }
unsigned VRECON_SUBSYSTEM_TOP::threads() const { return 1; }
void VRECON_SUBSYSTEM_TOP::prepareClone() const { contextp()->prepareClone(); }
void VRECON_SUBSYSTEM_TOP::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRECON_SUBSYSTEM_TOP::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRECON_SUBSYSTEM_TOP___024root__trace_decl_types(VerilatedVcd* tracep);

void VRECON_SUBSYSTEM_TOP___024root__trace_init_top(VRECON_SUBSYSTEM_TOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRECON_SUBSYSTEM_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRECON_SUBSYSTEM_TOP___024root*>(voidSelf);
    VRECON_SUBSYSTEM_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRECON_SUBSYSTEM_TOP___024root__trace_decl_types(tracep);
    VRECON_SUBSYSTEM_TOP___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP___024root__trace_register(VRECON_SUBSYSTEM_TOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRECON_SUBSYSTEM_TOP::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRECON_SUBSYSTEM_TOP::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRECON_SUBSYSTEM_TOP___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
