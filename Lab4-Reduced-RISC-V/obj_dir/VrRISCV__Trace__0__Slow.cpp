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
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBit(c+55,"rst", false,-1);
    tracep->declBus(c+56,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("rRISCV ");
    tracep->declBus(c+60,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBit(c+55,"rst", false,-1);
    tracep->declBus(c+56,"a0", false,-1, 31,0);
    tracep->declBus(c+33,"PC", false,-1, 31,0);
    tracep->declBit(c+44,"PCsrc", false,-1);
    tracep->declBus(c+34,"instr", false,-1, 31,0);
    tracep->declBit(c+45,"ALUctrl", false,-1);
    tracep->declBit(c+46,"ALUsrc", false,-1);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+48,"RegWrite", false,-1);
    tracep->declBit(c+57,"EQ", false,-1);
    tracep->declBit(c+49,"ImmSrc", false,-1);
    tracep->pushNamePrefix("Control ");
    tracep->declBus(c+35,"instr", false,-1, 6,0);
    tracep->declBit(c+57,"EQ", false,-1);
    tracep->declBit(c+44,"PCsrc", false,-1);
    tracep->declBit(c+61,"ResultSrc", false,-1);
    tracep->declBit(c+62,"MemWrite", false,-1);
    tracep->declBus(c+50,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+46,"ALUsrc", false,-1);
    tracep->declBus(c+51,"ImmSrc", false,-1, 1,0);
    tracep->declBit(c+48,"RegWrite", false,-1);
    tracep->declBit(c+36,"addi", false,-1);
    tracep->declBit(c+37,"bne", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("InstrMem ");
    tracep->declBus(c+60,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"A", false,-1, 31,0);
    tracep->declBus(c+34,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCregister ");
    tracep->declBus(c+60,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBit(c+55,"rst", false,-1);
    tracep->declBus(c+47,"immop", false,-1, 31,0);
    tracep->declBit(c+44,"pcsrc", false,-1);
    tracep->declBus(c+33,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RedBlock ");
    tracep->declBus(c+60,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+38,"rs1", false,-1, 4,0);
    tracep->declBus(c+39,"rs2", false,-1, 4,0);
    tracep->declBus(c+40,"rd", false,-1, 4,0);
    tracep->declBit(c+46,"ALUsrc", false,-1);
    tracep->declBit(c+45,"ALUctrl", false,-1);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+48,"RegWrite", false,-1);
    tracep->declBit(c+57,"EQ", false,-1);
    tracep->declBus(c+56,"a0", false,-1, 31,0);
    tracep->declBus(c+41,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+58,"regop2", false,-1, 31,0);
    tracep->declBus(c+52,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+59,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+45,"ALUctrl", false,-1);
    tracep->declBus(c+41,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+52,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+59,"ALUout", false,-1, 31,0);
    tracep->declBit(c+57,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Mux2 ");
    tracep->declBus(c+58,"RegOp2", false,-1, 31,0);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+46,"ALUsrc", false,-1);
    tracep->declBus(c+52,"ALUop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("REG_FILE ");
    tracep->declBus(c+63,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+54,"clk", false,-1);
    tracep->declBus(c+38,"AD1", false,-1, 4,0);
    tracep->declBus(c+39,"AD2", false,-1, 4,0);
    tracep->declBus(c+40,"AD3", false,-1, 4,0);
    tracep->declBit(c+48,"WE3", false,-1);
    tracep->declBus(c+59,"WD3", false,-1, 31,0);
    tracep->declBus(c+41,"RD1", false,-1, 31,0);
    tracep->declBus(c+58,"RD2", false,-1, 31,0);
    tracep->declBus(c+56,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+60,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"IMM_WIDTH", false,-1, 31,0);
    tracep->declBit(c+49,"ImmSrc", false,-1);
    tracep->declBus(c+34,"instr", false,-1, 31,0);
    tracep->declBus(c+47,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+42,"Imm1", false,-1, 11,0);
    tracep->declBus(c+43,"Imm0", false,-1, 11,0);
    tracep->declBus(c+53,"Imm", false,-1, 11,0);
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
    bufp->fullIData(oldp+1,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->rRISCV__DOT__PC),32);
    bufp->fullIData(oldp+34,(vlSelf->rRISCV__DOT__instr),32);
    bufp->fullCData(oldp+35,((0x7fU & vlSelf->rRISCV__DOT__instr)),7);
    bufp->fullBit(oldp+36,(vlSelf->rRISCV__DOT__Control__DOT__addi));
    bufp->fullBit(oldp+37,(vlSelf->rRISCV__DOT__Control__DOT__bne));
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->rRISCV__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+41,(vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1),32);
    bufp->fullSData(oldp+42,(((0x800U & (vlSelf->rRISCV__DOT__instr 
                                         >> 0x14U)) 
                              | ((0x400U & (vlSelf->rRISCV__DOT__instr 
                                            << 3U)) 
                                 | ((0x3f0U & (vlSelf->rRISCV__DOT__instr 
                                               >> 0x15U)) 
                                    | (0xfU & (vlSelf->rRISCV__DOT__instr 
                                               >> 8U)))))),12);
    bufp->fullSData(oldp+43,((vlSelf->rRISCV__DOT__instr 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+44,(vlSelf->rRISCV__DOT__PCsrc));
    bufp->fullBit(oldp+45,((1U & (IData)(vlSelf->rRISCV__DOT____Vcellout__Control__ALUctrl))));
    bufp->fullBit(oldp+46,(vlSelf->rRISCV__DOT__ALUsrc));
    bufp->fullIData(oldp+47,(vlSelf->rRISCV__DOT__ImmOp),32);
    bufp->fullBit(oldp+48,(vlSelf->rRISCV__DOT__RegWrite));
    bufp->fullBit(oldp+49,((1U & (IData)(vlSelf->rRISCV__DOT____Vcellout__Control__ImmSrc))));
    bufp->fullCData(oldp+50,(vlSelf->rRISCV__DOT____Vcellout__Control__ALUctrl),3);
    bufp->fullCData(oldp+51,(vlSelf->rRISCV__DOT____Vcellout__Control__ImmSrc),2);
    bufp->fullIData(oldp+52,(vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2),32);
    bufp->fullSData(oldp+53,(vlSelf->rRISCV__DOT__SignExtend__DOT__Imm),12);
    bufp->fullBit(oldp+54,(vlSelf->clk));
    bufp->fullBit(oldp+55,(vlSelf->rst));
    bufp->fullIData(oldp+56,(vlSelf->a0),32);
    bufp->fullBit(oldp+57,((vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 
                            == vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2)));
    bufp->fullIData(oldp+58,(vlSelf->rRISCV__DOT__RedBlock__DOT__REG_FILE__DOT__ram_array
                             [(0x1fU & (vlSelf->rRISCV__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+59,((vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop1 
                              + vlSelf->rRISCV__DOT__RedBlock__DOT__ALUop2)),32);
    bufp->fullIData(oldp+60,(0x20U),32);
    bufp->fullBit(oldp+61,(vlSelf->rRISCV__DOT__Control__DOT__ResultSrc));
    bufp->fullBit(oldp+62,(vlSelf->rRISCV__DOT__Control__DOT__MemWrite));
    bufp->fullIData(oldp+63,(5U),32);
    bufp->fullIData(oldp+64,(0xcU),32);
}
