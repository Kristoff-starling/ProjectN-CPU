// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "emu__Syms.h"
#include "emu.h"
#include "emu_Adder32.h"



// FUNCTIONS
emu__Syms::emu__Syms(emu* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32(Verilated::catName(topp->name(), "cpu_tst.mycpu.EX.ALU.adder.adder32"))
    , TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen(Verilated::catName(topp->name(), "cpu_tst.mycpu.IF.snpc_gen"))
    , TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32(Verilated::catName(topp->name(), "cpu_tst.mycpu.M.NextAddr.adder_jump.adder32"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32 = &TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32;
    TOPp->__PVT__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen = &TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen;
    TOPp->__PVT__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32 = &TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__Vconfigure(this, true);
    TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__Vconfigure(this, false);
    TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__Vconfigure(this, false);
}
