// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrRISCV.h for the primary calling header

#include "verilated.h"

#include "VrRISCV___024root.h"

VL_ATTR_COLD void VrRISCV___024root___initial__TOP__0(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h6d3ae739__0;
    // Body
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h6d3ae739__0[0U] = 0x2e6d656dU;
    __Vtemp_h6d3ae739__0[1U] = 0x74696f6eU;
    __Vtemp_h6d3ae739__0[2U] = 0x74727563U;
    __Vtemp_h6d3ae739__0[3U] = 0x496e73U;
    VL_READMEM_N(true, 8, 1001, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h6d3ae739__0)
                 ,  &(vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*4:0*/, 8> VrRISCV__ConstPool__TABLE_h76b30a79_0;
extern const VlUnpacked<CData/*0:0*/, 8> VrRISCV__ConstPool__TABLE_h73dc3151_0;
extern const VlUnpacked<CData/*2:0*/, 8> VrRISCV__ConstPool__TABLE_h44b82762_0;
extern const VlUnpacked<CData/*1:0*/, 8> VrRISCV__ConstPool__TABLE_h7c568549_0;
extern const VlUnpacked<CData/*0:0*/, 8> VrRISCV__ConstPool__TABLE_h08dc11ff_0;

VL_ATTR_COLD void VrRISCV___024root___settle__TOP__0(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___settle__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array
        [0xaU];
    vlSelf->rRISCV__DOT__instr = ((((0x3e8U >= (0x3ffU 
                                                & ((IData)(3U) 
                                                   + vlSelf->rRISCV__DOT__PC)))
                                     ? vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array
                                    [(0x3ffU & ((IData)(3U) 
                                                + vlSelf->rRISCV__DOT__PC))]
                                     : 0U) << 0x18U) 
                                  | ((((0x3e8U >= (0x3ffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->rRISCV__DOT__PC)))
                                        ? vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array
                                       [(0x3ffU & ((IData)(2U) 
                                                   + vlSelf->rRISCV__DOT__PC))]
                                        : 0U) << 0x10U) 
                                     | ((((0x3e8U >= 
                                           (0x3ffU 
                                            & ((IData)(1U) 
                                               + vlSelf->rRISCV__DOT__PC)))
                                           ? vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array
                                          [(0x3ffU 
                                            & ((IData)(1U) 
                                               + vlSelf->rRISCV__DOT__PC))]
                                           : 0U) << 8U) 
                                        | ((0x3e8U 
                                            >= (0x3ffU 
                                                & vlSelf->rRISCV__DOT__PC))
                                            ? vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array
                                           [(0x3ffU 
                                             & vlSelf->rRISCV__DOT__PC)]
                                            : 0U))));
    if ((0x13U == (0x7fU & vlSelf->rRISCV__DOT__instr))) {
        vlSelf->rRISCV__DOT__Control__DOT__addi = 1U;
        vlSelf->rRISCV__DOT__Control__DOT__bne = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->rRISCV__DOT__instr))) {
        vlSelf->rRISCV__DOT__Control__DOT__addi = 0U;
        vlSelf->rRISCV__DOT__Control__DOT__bne = 1U;
    }
    vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 = vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array
        [(0x1fU & (vlSelf->rRISCV__DOT__instr >> 0xfU))];
    __Vtableidx1 = (((vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 
                      == vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2) 
                     << 2U) | (((IData)(vlSelf->rRISCV__DOT__Control__DOT__bne) 
                                << 1U) | (IData)(vlSelf->rRISCV__DOT__Control__DOT__addi)));
    if ((1U & VrRISCV__ConstPool__TABLE_h76b30a79_0
         [__Vtableidx1])) {
        vlSelf->rRISCV__DOT__RegWrite = VrRISCV__ConstPool__TABLE_h73dc3151_0
            [__Vtableidx1];
    }
    if ((2U & VrRISCV__ConstPool__TABLE_h76b30a79_0
         [__Vtableidx1])) {
        vlSelf->rRISCV__DOT____Vcellout__Control__ALUctrl 
            = VrRISCV__ConstPool__TABLE_h44b82762_0
            [__Vtableidx1];
    }
    if ((4U & VrRISCV__ConstPool__TABLE_h76b30a79_0
         [__Vtableidx1])) {
        vlSelf->rRISCV__DOT__ALUsrc = VrRISCV__ConstPool__TABLE_h73dc3151_0
            [__Vtableidx1];
    }
    if ((8U & VrRISCV__ConstPool__TABLE_h76b30a79_0
         [__Vtableidx1])) {
        vlSelf->rRISCV__DOT____Vcellout__Control__ImmSrc 
            = VrRISCV__ConstPool__TABLE_h7c568549_0
            [__Vtableidx1];
    }
    if ((0x10U & VrRISCV__ConstPool__TABLE_h76b30a79_0
         [__Vtableidx1])) {
        vlSelf->rRISCV__DOT__PCsrc = VrRISCV__ConstPool__TABLE_h08dc11ff_0
            [__Vtableidx1];
    }
    vlSelf->rRISCV__DOT__SignExtend__DOT__Imm = (0xfffU 
                                                 & ((1U 
                                                     & (IData)(vlSelf->rRISCV__DOT____Vcellout__Control__ImmSrc))
                                                     ? 
                                                    ((0x800U 
                                                      & (vlSelf->rRISCV__DOT__instr 
                                                         >> 0x14U)) 
                                                     | ((0x400U 
                                                         & (vlSelf->rRISCV__DOT__instr 
                                                            << 3U)) 
                                                        | ((0x3f0U 
                                                            & (vlSelf->rRISCV__DOT__instr 
                                                               >> 0x15U)) 
                                                           | (0xfU 
                                                              & (vlSelf->rRISCV__DOT__instr 
                                                                 >> 8U)))))
                                                     : 
                                                    (vlSelf->rRISCV__DOT__instr 
                                                     >> 0x14U)));
    vlSelf->rRISCV__DOT__ImmOp = (((- (IData)((1U & 
                                               ((IData)(vlSelf->rRISCV__DOT__SignExtend__DOT__Imm) 
                                                >> 0xbU)))) 
                                   << 0xcU) | (IData)(vlSelf->rRISCV__DOT__SignExtend__DOT__Imm));
    vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2 = ((IData)(vlSelf->rRISCV__DOT__ALUsrc)
                                                   ? vlSelf->rRISCV__DOT__ImmOp
                                                   : 
                                                  vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->rRISCV__DOT__instr 
                                                      >> 0x14U))]);
}

VL_ATTR_COLD void VrRISCV___024root___eval_initial(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___eval_initial\n"); );
    // Body
    VrRISCV___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VrRISCV___024root___eval_settle(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___eval_settle\n"); );
    // Body
    VrRISCV___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VrRISCV___024root___final(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___final\n"); );
}

VL_ATTR_COLD void VrRISCV___024root___ctor_var_reset(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->rRISCV__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->rRISCV__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->rRISCV__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->rRISCV__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->rRISCV__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->rRISCV__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->rRISCV__DOT____Vcellout__Control__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->rRISCV__DOT____Vcellout__Control__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->rRISCV__DOT__Control__DOT__ResultSrc = VL_RAND_RESET_I(1);
    vlSelf->rRISCV__DOT__Control__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->rRISCV__DOT__Control__DOT__addi = VL_RAND_RESET_I(1);
    vlSelf->rRISCV__DOT__Control__DOT__bne = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1001; ++__Vi0) {
        vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 = VL_RAND_RESET_I(32);
    vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->rRISCV__DOT__SignExtend__DOT__Imm = VL_RAND_RESET_I(12);
    vlSelf->__Vchglast__TOP__rRISCV__DOT__RedBlock__DOT__ALUop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
