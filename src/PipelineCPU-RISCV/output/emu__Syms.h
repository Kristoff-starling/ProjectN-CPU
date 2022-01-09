// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _EMU__SYMS_H_
#define _EMU__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "emu.h"
#include "emu_Adder32.h"

// SYMS CLASS
class emu__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    emu*                           TOPp;
    emu_Adder32                    TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32;
    emu_Adder32                    TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen;
    emu_Adder32                    TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32;
    
    // CREATORS
    emu__Syms(emu* topp, const char* namep);
    ~emu__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
