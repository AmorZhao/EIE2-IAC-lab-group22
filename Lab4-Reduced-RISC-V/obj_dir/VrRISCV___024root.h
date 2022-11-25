// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VrRISCV.h for the primary calling header

#ifndef VERILATED_VRRISCV___024ROOT_H_
#define VERILATED_VRRISCV___024ROOT_H_  // guard

#include "verilated.h"

class VrRISCV__Syms;

class VrRISCV___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ rRISCV__DOT__ALUctrl;
    CData/*0:0*/ rRISCV__DOT__ALUsrc;
    CData/*0:0*/ rRISCV__DOT__RegWrite;
    CData/*0:0*/ rRISCV__DOT__ImmSrc;
    CData/*0:0*/ rRISCV__DOT__PCsrc;
    CData/*0:0*/ rRISCV__DOT__Control__DOT__addi;
    CData/*0:0*/ rRISCV__DOT__Control__DOT__bne;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*11:0*/ rRISCV__DOT__SignExtend__DOT__Imm;
    VL_OUT(a0,31,0);
    IData/*31:0*/ rRISCV__DOT__PC;
    IData/*31:0*/ rRISCV__DOT__instr;
    IData/*31:0*/ rRISCV__DOT__ImmOp;
    IData/*31:0*/ rRISCV__DOT__RedBlock__DOT__ALUop1;
    IData/*31:0*/ rRISCV__DOT__RedBlock__DOT__regop2;
    IData/*31:0*/ rRISCV__DOT__RedBlock__DOT__ALUop2;
    IData/*31:0*/ __Vchglast__TOP__rRISCV__DOT__RedBlock__DOT__ALUop2;
    VlUnpacked<CData/*7:0*/, 1001> rRISCV__DOT__InstrMem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VrRISCV__Syms* const vlSymsp;

    // CONSTRUCTORS
    VrRISCV___024root(VrRISCV__Syms* symsp, const char* name);
    ~VrRISCV___024root();
    VL_UNCOPYABLE(VrRISCV___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
