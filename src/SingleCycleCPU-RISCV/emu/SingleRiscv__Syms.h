// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _SINGLERISCV__SYMS_H_
#define _SINGLERISCV__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "SingleRiscv.h"

// SYMS CLASS
class SingleRiscv__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    SingleRiscv*                   TOPp;
    
    // CREATORS
    SingleRiscv__Syms(SingleRiscv* topp, const char* namep);
    ~SingleRiscv__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
