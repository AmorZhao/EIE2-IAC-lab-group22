// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrRISCV.h for the primary calling header

#include "verilated.h"

#include "VrRISCV___024root.h"

VL_INLINE_OPT void VrRISCV___024root___sequent__TOP__0(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0;
    // Body
    __Vdlyvset__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0 = 0U;
    if (vlSelf->rRISCV__DOT__RegWrite) {
        __Vdlyvval__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0 
            = (vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 
               + vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2);
        __Vdlyvset__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0 
            = (0x1fU & (vlSelf->rRISCV__DOT__instr 
                        >> 7U));
    }
    if (__Vdlyvset__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0) {
        vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[__Vdlyvdim0__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0] 
            = __Vdlyvval__rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array__v0;
    }
    vlSelf->a0 = vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array
        [0xaU];
}

VL_INLINE_OPT void VrRISCV___024root___sequent__TOP__1(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->rRISCV__DOT__PC = ((IData)(vlSelf->rst)
                                ? 0U : ((IData)(vlSelf->rRISCV__DOT__PCsrc)
                                         ? ((IData)(vlSelf->rRISCV__DOT__PCsrc)
                                             ? (vlSelf->rRISCV__DOT__PC 
                                                + vlSelf->rRISCV__DOT__ImmOp)
                                             : vlSelf->rRISCV__DOT__PC)
                                         : ((IData)(4U) 
                                            + vlSelf->rRISCV__DOT__PC)));
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
}

extern const VlUnpacked<CData/*4:0*/, 8> VrRISCV__ConstPool__TABLE_h76b30a79_0;
extern const VlUnpacked<CData/*0:0*/, 8> VrRISCV__ConstPool__TABLE_h73dc3151_0;
extern const VlUnpacked<CData/*2:0*/, 8> VrRISCV__ConstPool__TABLE_h44b82762_0;
extern const VlUnpacked<CData/*1:0*/, 8> VrRISCV__ConstPool__TABLE_h7c568549_0;
extern const VlUnpacked<CData/*0:0*/, 8> VrRISCV__ConstPool__TABLE_h08dc11ff_0;

VL_INLINE_OPT void VrRISCV___024root___combo__TOP__0(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___combo__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    // Body
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

void VrRISCV___024root___eval(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VrRISCV___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VrRISCV___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VrRISCV___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData VrRISCV___024root___change_request_1(VrRISCV___024root* vlSelf);

VL_INLINE_OPT QData VrRISCV___024root___change_request(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___change_request\n"); );
    // Body
    return (VrRISCV___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VrRISCV___024root___change_request_1(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__rRISCV__DOT__RedBlock__DOT__ALUop2));
    VL_DEBUG_IF( if(__req && ((vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__rRISCV__DOT__RedBlock__DOT__ALUop2))) VL_DBG_MSGF("        CHANGE: red_block.sv:19: rRISCV.RedBlock.ALUop2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__rRISCV__DOT__RedBlock__DOT__ALUop2 
        = vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2;
    return __req;
}

#ifdef VL_DEBUG
void VrRISCV___024root___eval_debug_assertions(VrRISCV___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
