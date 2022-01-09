// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _EMU_H_
#define _EMU_H_  // guard

#include "verilated_heavy.h"

//==========

class emu__Syms;
class emu_Adder32;


//----------

VL_MODULE(emu) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    emu_Adder32* __PVT__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen;
    emu_Adder32* __PVT__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32;
    emu_Adder32* __PVT__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(wb,0,0);
    VL_OUT(dbg_pc,31,0);
    VL_OUT(dbgregs_0,31,0);
    VL_OUT(dbgregs_1,31,0);
    VL_OUT(dbgregs_2,31,0);
    VL_OUT(dbgregs_3,31,0);
    VL_OUT(dbgregs_4,31,0);
    VL_OUT(dbgregs_5,31,0);
    VL_OUT(dbgregs_6,31,0);
    VL_OUT(dbgregs_7,31,0);
    VL_OUT(dbgregs_8,31,0);
    VL_OUT(dbgregs_9,31,0);
    VL_OUT(dbgregs_10,31,0);
    VL_OUT(dbgregs_11,31,0);
    VL_OUT(dbgregs_12,31,0);
    VL_OUT(dbgregs_13,31,0);
    VL_OUT(dbgregs_14,31,0);
    VL_OUT(dbgregs_15,31,0);
    VL_OUT(dbgregs_16,31,0);
    VL_OUT(dbgregs_17,31,0);
    VL_OUT(dbgregs_18,31,0);
    VL_OUT(dbgregs_19,31,0);
    VL_OUT(dbgregs_20,31,0);
    VL_OUT(dbgregs_21,31,0);
    VL_OUT(dbgregs_22,31,0);
    VL_OUT(dbgregs_23,31,0);
    VL_OUT(dbgregs_24,31,0);
    VL_OUT(dbgregs_25,31,0);
    VL_OUT(dbgregs_26,31,0);
    VL_OUT(dbgregs_27,31,0);
    VL_OUT(dbgregs_28,31,0);
    VL_OUT(dbgregs_29,31,0);
    VL_OUT(dbgregs_30,31,0);
    VL_OUT(dbgregs_31,31,0);
    VL_IN64(testcase,64,1);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ cpu_tst__DOT__dwe;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__flush;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__block;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__IF_valid;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID_valid;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID_ready;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__ID_Branch;
        CData/*1:0*/ cpu_tst__DOT__mycpu__DOT__ID_ALUBSrc;
        CData/*3:0*/ cpu_tst__DOT__mycpu__DOT__ID_ALUctr;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__ID_MemOp;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID_RegWr;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID_MemtoReg;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID_ALUASrc;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID_MemWr;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX_valid;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX_ready;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M_flush;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M_valid;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M_ready;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M_done;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M_MemToReg;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M_RegWr;
        CData/*4:0*/ cpu_tst__DOT__mycpu__DOT__M_rw;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__M_Branch;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__W_RegWr;
        CData/*4:0*/ cpu_tst__DOT__mycpu__DOT__W_rw;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__IF__DOT__reg_valid_r;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__receive_flag;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__reada;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__readb;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__protect;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_valid_r;
        CData/*4:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_rw;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_Branch;
        CData/*1:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUBSrc;
        CData/*3:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemOp;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_RegWr;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemtoReg;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUASrc;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemWr;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_done;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__we;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i;
        CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__Branch_i;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__zero_i;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc;
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc;
        CData/*3:0*/ cpu_tst__DOT__datamem__DOT__wmask;
        CData/*7:0*/ cpu_tst__DOT__datamem__DOT__byteout;
        SData/*15:0*/ cpu_tst__DOT__datamem__DOT__wordout;
        IData/*31:0*/ cpu_tst__DOT__idataout;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__inputPC;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__ID_imm;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX_result;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M_result;
    };
    struct {
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M_PC;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__W_busw;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__IF__DOT__PC;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_PC;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_PC;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_imm;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busa;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busb;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__addr;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__imm_i;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__currentPC_i;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__busa_i;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db;
        IData/*31:0*/ cpu_tst__DOT__datamem__DOT__memin;
        IData/*31:0*/ cpu_tst__DOT__datamem__DOT__dwordout;
        IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout;
        IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin;
        IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[32];
        CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[32];
        IData/*31:0*/ cpu_tst__DOT__instructions__DOT__ram[65536];
        IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[32768];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush;
    CData/*3:0*/ __Vtableidx1;
    CData/*4:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen____Vcellout__gen__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32____Vcellout__gen__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32____Vcellout__gen__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    CData/*3:0*/ __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    CData/*0:0*/ __Vtablechg1[16];
    CData/*1:0*/ __Vtablechg2[32];
    static CData/*2:0*/ __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[16];
    static CData/*0:0*/ __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[32];
    static CData/*0:0*/ __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[32];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    emu__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(emu);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    emu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~emu();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(emu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(emu__Syms* symsp, bool first);
  private:
    static QData _change_request(emu__Syms* __restrict vlSymsp);
    static QData _change_request_1(emu__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(emu__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(emu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__5(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__8(emu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(emu__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(emu__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(emu__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(emu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
