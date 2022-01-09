// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See emu.h for the primary calling header

#include "emu_Adder32_p.h"
#include "emu__Syms.h"

//==========

VL_CTOR_IMP(emu_Adder32_p) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void emu_Adder32_p::__Vconfigure(emu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

emu_Adder32_p::~emu_Adder32_p() {
}

void emu_Adder32_p::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            emu_Adder32_p::_ctor_var_reset\n"); );
    // Body
    f = VL_RAND_RESET_I(32);
    OF = VL_RAND_RESET_I(1);
    SF = VL_RAND_RESET_I(1);
    CF = VL_RAND_RESET_I(1);
    ZF = VL_RAND_RESET_I(1);
    __PVT__cout = VL_RAND_RESET_I(1);
    x = VL_RAND_RESET_I(32);
    y = VL_RAND_RESET_I(32);
    sub = VL_RAND_RESET_I(1);
    __PVT__tmp = VL_RAND_RESET_I(32);
    __PVT__adder32__DOT__Gg = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__Pg = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__adder32__DOT__p[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__adder32__DOT__g[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__adder32__DOT__c = VL_RAND_RESET_I(5);
    __PVT__adder32__DOT__cout_temp = VL_RAND_RESET_I(4);
    adder32__DOT____Vcellout__gen__c = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__adder32__DOT__ff[__Vi0] = VL_RAND_RESET_I(8);
    }}
    adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f = VL_RAND_RESET_I(8);
    adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f = VL_RAND_RESET_I(8);
    adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f = VL_RAND_RESET_I(8);
    adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f = VL_RAND_RESET_I(8);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2 = VL_RAND_RESET_I(1);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2 = VL_RAND_RESET_I(1);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2 = VL_RAND_RESET_I(1);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2 = VL_RAND_RESET_I(1);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f = VL_RAND_RESET_I(4);
    adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g = VL_RAND_RESET_I(4);
    __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
}
