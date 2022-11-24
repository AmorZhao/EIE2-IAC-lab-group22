// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VrRISCV__Syms.h"


VL_ATTR_COLD void VrRISCV___024root__trace_init_sub__TOP__0(VrRISCV___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+27,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("rRISCV ");
    tracep->declBus(c+30,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+27,"a0", false,-1, 31,0);
    tracep->declBus(c+7,"PC", false,-1, 31,0);
    tracep->declBit(c+18,"PCsrc", false,-1);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBit(c+19,"ALUctrl", false,-1);
    tracep->declBit(c+20,"ALUsrc", false,-1);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+21,"RegWrite", false,-1);
    tracep->declBit(c+22,"EQ", false,-1);
    tracep->declBit(c+23,"ImmSrc", false,-1);
    tracep->pushNamePrefix("Control ");
    tracep->declBus(c+10,"instr", false,-1, 6,0);
    tracep->declBit(c+22,"EQ", false,-1);
    tracep->declBit(c+21,"RegWrite", false,-1);
    tracep->declBit(c+19,"ALUctrl", false,-1);
    tracep->declBit(c+20,"ALUsrc", false,-1);
    tracep->declBit(c+23,"ImmSrc", false,-1);
    tracep->declBit(c+18,"PCsrc", false,-1);
    tracep->declBit(c+11,"addi", false,-1);
    tracep->declBit(c+12,"bne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+30,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"A", false,-1, 31,0);
    tracep->declBus(c+8,"RD", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"rom_array", true,(i+-1), 7,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCregister ");
    tracep->declBus(c+30,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+9,"immop", false,-1, 31,0);
    tracep->declBit(c+18,"pcsrc", false,-1);
    tracep->declBus(c+7,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RedBlock ");
    tracep->declBus(c+30,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBus(c+13,"rs1", false,-1, 4,0);
    tracep->declBus(c+14,"rs2", false,-1, 4,0);
    tracep->declBus(c+15,"rd", false,-1, 4,0);
    tracep->declBit(c+20,"ALUsrc", false,-1);
    tracep->declBit(c+19,"ALUctrl", false,-1);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+21,"RegWrite", false,-1);
    tracep->declBit(c+22,"EQ", false,-1);
    tracep->declBus(c+27,"a0", false,-1, 31,0);
    tracep->declBus(c+3,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+4,"regop2", false,-1, 31,0);
    tracep->declBus(c+24,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+28,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+19,"ALUctrl", false,-1);
    tracep->declBus(c+3,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+24,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+28,"ALUout", false,-1, 31,0);
    tracep->declBit(c+22,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Mux2 ");
    tracep->declBus(c+4,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+20,"ALUsrc", false,-1);
    tracep->declBus(c+24,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->declBus(c+30,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBus(c+13,"AD1", false,-1, 4,0);
    tracep->declBus(c+14,"AD2", false,-1, 4,0);
    tracep->declBus(c+15,"AD3", false,-1, 4,0);
    tracep->declBit(c+21,"WE3", false,-1);
    tracep->declBus(c+28,"WD3", false,-1, 31,0);
    tracep->declBus(c+3,"RD1", false,-1, 31,0);
    tracep->declBus(c+4,"RD2", false,-1, 31,0);
    tracep->declBus(c+27,"a0", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"ram_array", true,(i+-1), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+30,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+31,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+23,"ImmSrc", false,-1);
    tracep->declBus(c+8,"instr", false,-1, 31,0);
    tracep->declBus(c+9,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+16,"Imm1", false,-1, 11,0);
    tracep->declBus(c+17,"Imm2", false,-1, 11,0);
    tracep->declBus(c+29,"Imm", false,-1, 11,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VrRISCV___024root__trace_init_top(VrRISCV___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_init_top\n"); );
    // Body
    VrRISCV___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VrRISCV___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VrRISCV___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VrRISCV___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VrRISCV___024root__trace_register(VrRISCV___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VrRISCV___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VrRISCV___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VrRISCV___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VrRISCV___024root__trace_full_sub_0(VrRISCV___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VrRISCV___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_full_top_0\n"); );
    // Init
    VrRISCV___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VrRISCV___024root*>(voidSelf);
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VrRISCV___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VrRISCV___024root__trace_full_sub_0(VrRISCV___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VrRISCV__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VrRISCV___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->rRISCV__DOT__InstrMem__DOT__rom_array[1]),8);
    bufp->fullIData(oldp+3,(vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1),32);
    bufp->fullIData(oldp+4,(vlSelf->rRISCV__DOT__RedBlock__DOT__regop2),32);
    bufp->fullIData(oldp+5,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->rRISCV__DOT__PC),32);
    bufp->fullIData(oldp+8,(vlSelf->rRISCV__DOT__instr),32);
    bufp->fullIData(oldp+9,(vlSelf->rRISCV__DOT__ImmOp),32);
    bufp->fullCData(oldp+10,((0x7fU & vlSelf->rRISCV__DOT__instr)),7);
    bufp->fullBit(oldp+11,(vlSelf->rRISCV__DOT__Control__DOT__addi));
    bufp->fullBit(oldp+12,(vlSelf->rRISCV__DOT__Control__DOT__bne));
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                       >> 7U))),5);
    bufp->fullSData(oldp+16,(((0x800U & (vlSelf->rRISCV__DOT__instr 
                                         >> 0x14U)) 
                              | ((0x400U & (vlSelf->rRISCV__DOT__instr 
                                            << 3U)) 
                                 | ((0x3f0U & (vlSelf->rRISCV__DOT__instr 
                                               >> 0x15U)) 
                                    | (0xfU & (vlSelf->rRISCV__DOT__instr 
                                               >> 8U)))))),12);
    bufp->fullSData(oldp+17,((vlSelf->rRISCV__DOT__instr 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+18,(vlSelf->rRISCV__DOT__PCsrc));
    bufp->fullBit(oldp+19,(vlSelf->rRISCV__DOT__ALUctrl));
    bufp->fullBit(oldp+20,(vlSelf->rRISCV__DOT__ALUsrc));
    bufp->fullBit(oldp+21,(vlSelf->rRISCV__DOT__RegWrite));
    bufp->fullBit(oldp+22,(vlSelf->rRISCV__DOT__EQ));
    bufp->fullBit(oldp+23,(vlSelf->rRISCV__DOT__ImmSrc));
    bufp->fullIData(oldp+24,(vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2),32);
    bufp->fullBit(oldp+25,(vlSelf->clk));
    bufp->fullBit(oldp+26,(vlSelf->rst));
    bufp->fullIData(oldp+27,(vlSelf->a0),32);
    bufp->fullIData(oldp+28,((vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 
                              + vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2)),32);
    bufp->fullSData(oldp+29,((0xfffU & ((IData)(vlSelf->rRISCV__DOT__ImmSrc)
                                         ? ((0x800U 
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
                                         : (vlSelf->rRISCV__DOT__instr 
                                            >> 0x14U)))),12);
    bufp->fullIData(oldp+30,(0x20U),32);
    bufp->fullIData(oldp+31,(0xcU),32);
}
