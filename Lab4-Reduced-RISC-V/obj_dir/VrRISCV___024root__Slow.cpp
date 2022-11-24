// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VrRISCV.h for the primary calling header

#include "verilated.h"

#include "VrRISCV__Syms.h"
#include "VrRISCV___024root.h"

void VrRISCV___024root___ctor_var_reset(VrRISCV___024root* vlSelf);

VrRISCV___024root::VrRISCV___024root(VrRISCV__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VrRISCV___024root___ctor_var_reset(this);
}

void VrRISCV___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VrRISCV___024root::~VrRISCV___024root() {
}
