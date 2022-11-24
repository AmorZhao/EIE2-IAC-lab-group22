// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VrRISCV__Syms.h"


void VrRISCV___024root__trace_chg_sub_0(VrRISCV___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VrRISCV___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_chg_top_0\n"); );
    // Init
    VrRISCV___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VrRISCV___024root*>(voidSelf);
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VrRISCV___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VrRISCV___024root__trace_chg_sub_0(VrRISCV___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1),32);
        bufp->chgIData(oldp+1,(vlSelf->rRISCV__DOT__RedBlock__DOT__regop2),32);
        bufp->chgIData(oldp+2,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[1]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+4,(vlSelf->rRISCV__DOT__PC),32);
        bufp->chgIData(oldp+5,(vlSelf->rRISCV__DOT__instr),32);
        bufp->chgCData(oldp+6,((0x7fU & vlSelf->rRISCV__DOT__instr)),7);
        bufp->chgBit(oldp+7,(vlSelf->rRISCV__DOT__Control__DOT__addi));
        bufp->chgBit(oldp+8,(vlSelf->rRISCV__DOT__Control__DOT__bne));
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                          >> 7U))),5);
        bufp->chgSData(oldp+12,(((0x800U & (vlSelf->rRISCV__DOT__instr 
                                            >> 0x14U)) 
                                 | ((0x400U & (vlSelf->rRISCV__DOT__instr 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->rRISCV__DOT__instr 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->rRISCV__DOT__instr 
                                                  >> 8U)))))),12);
        bufp->chgSData(oldp+13,((vlSelf->rRISCV__DOT__instr 
                                 >> 0x14U)),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+14,(vlSelf->rRISCV__DOT__PCsrc));
        bufp->chgBit(oldp+15,(vlSelf->rRISCV__DOT__ALUctrl));
        bufp->chgBit(oldp+16,(vlSelf->rRISCV__DOT__ALUsrc));
        bufp->chgIData(oldp+17,(vlSelf->rRISCV__DOT__ImmOp),32);
        bufp->chgBit(oldp+18,(vlSelf->rRISCV__DOT__RegWrite));
        bufp->chgBit(oldp+19,(vlSelf->rRISCV__DOT__EQ));
        bufp->chgBit(oldp+20,(vlSelf->rRISCV__DOT__ImmSrc));
        bufp->chgIData(oldp+21,(vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2),32);
        bufp->chgSData(oldp+22,(vlSelf->rRISCV__DOT__SignExtend__DOT__Imm),12);
    }
    bufp->chgBit(oldp+23,(vlSelf->clk));
    bufp->chgBit(oldp+24,(vlSelf->rst));
    bufp->chgIData(oldp+25,(vlSelf->a0),32);
    bufp->chgIData(oldp+26,((vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 
                             + vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2)),32);
}

void VrRISCV___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_cleanup\n"); );
    // Init
    VrRISCV___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VrRISCV___024root*>(voidSelf);
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
