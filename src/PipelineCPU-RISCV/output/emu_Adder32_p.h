// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See emu.h for the primary calling header

#ifndef _EMU_ADDER32_P_H_
#define _EMU_ADDER32_P_H_  // guard

#include "verilated_heavy.h"

//==========

class emu__Syms;

//----------

VL_MODULE(emu_Adder32_p) {
  public:
    
    // PORTS
    VL_OUT8(OF,0,0);
    VL_OUT8(SF,0,0);
    VL_OUT8(CF,0,0);
    VL_OUT8(ZF,0,0);
    VL_OUT8(__PVT__cout,0,0);
    VL_IN8(sub,0,0);
    VL_OUT(f,31,0);
    VL_IN(x,31,0);
    VL_IN(y,31,0);
    
    // LOCAL SIGNALS
    CData/*3:0*/ __PVT__adder32__DOT__Gg;
    CData/*3:0*/ __PVT__adder32__DOT__Pg;
    CData/*4:0*/ __PVT__adder32__DOT__c;
    CData/*3:0*/ __PVT__adder32__DOT__cout_temp;
    CData/*0:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    IData/*31:0*/ __PVT__tmp;
    CData/*7:0*/ __PVT__adder32__DOT__p[4];
    CData/*7:0*/ __PVT__adder32__DOT__g[4];
    CData/*7:0*/ __PVT__adder32__DOT__ff[4];
    
    // LOCAL VARIABLES
    CData/*3:0*/ adder32__DOT____Vcellout__gen__c;
    CData/*7:0*/ adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    CData/*7:0*/ adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    CData/*7:0*/ adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    CData/*7:0*/ adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    
    // INTERNAL VARIABLES
  private:
    emu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(emu_Adder32_p);  ///< Copying not allowed
  public:
    emu_Adder32_p(const char* name = "TOP");
    ~emu_Adder32_p();
    
    // INTERNAL METHODS
    void __Vconfigure(emu__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _settle__TOP__cpu_tst__DOT__mycpu__DOT__ALU_RV32__DOT__adder__1(emu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__adder_jump__2(emu__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
