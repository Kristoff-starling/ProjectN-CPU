// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See emu.h for the primary calling header

#ifndef _EMU_ADDER32_H_
#define _EMU_ADDER32_H_  // guard

#include "verilated_heavy.h"

//==========

class emu__Syms;

//----------

VL_MODULE(emu_Adder32) {
  public:
    
    // PORTS
    VL_OUT8(cout,0,0);
    VL_IN8(sub,0,0);
    VL_OUT(result,31,0);
    VL_IN(x,31,0);
    VL_IN(y,31,0);
    
    // LOCAL SIGNALS
    CData/*3:0*/ __PVT__Gg;
    CData/*3:0*/ __PVT__Pg;
    CData/*4:0*/ __PVT__c;
    CData/*3:0*/ __PVT__cout_temp;
    CData/*0:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g;
    CData/*3:0*/ __PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*7:0*/ __PVT__p[4];
    CData/*7:0*/ __PVT__g[4];
    CData/*7:0*/ __PVT__ff[4];
    
    // LOCAL VARIABLES
    CData/*3:0*/ __Vcellout__gen__c;
    CData/*7:0*/ __Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    CData/*7:0*/ __Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    CData/*7:0*/ __Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    CData/*7:0*/ __Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
    CData/*3:0*/ genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    CData/*3:0*/ genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f;
    CData/*3:0*/ genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f;
    
    // INTERNAL VARIABLES
  private:
    emu__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(emu_Adder32);  ///< Copying not allowed
  public:
    emu_Adder32(const char* name = "TOP");
    ~emu_Adder32();
    
    // INTERNAL METHODS
    void __Vconfigure(emu__Syms* symsp, bool first);
    void _combo__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__8(emu__Syms* __restrict vlSymsp);
    void _combo__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__9(emu__Syms* __restrict vlSymsp);
    void _combo__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__7(emu__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__5(emu__Syms* __restrict vlSymsp);
    void _sequent__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__6(emu__Syms* __restrict vlSymsp);
    void _sequent__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__4(emu__Syms* __restrict vlSymsp);
    void _settle__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__2(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__1(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__3(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
