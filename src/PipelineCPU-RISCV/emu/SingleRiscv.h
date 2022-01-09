// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _SINGLERISCV_H_
#define _SINGLERISCV_H_  // guard

#include "verilated_heavy.h"

//==========

class SingleRiscv__Syms;

//----------

VL_MODULE(SingleRiscv) {
  public:
    
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
    CData/*6:0*/ cpu_tst__DOT__mycpu__DOT__op;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__less;
    CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__extop;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__regwr;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__aluasrc;
    CData/*1:0*/ cpu_tst__DOT__mycpu__DOT__alubsrc;
    CData/*3:0*/ cpu_tst__DOT__mycpu__DOT__aluctr;
    CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__branch;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__memtoreg;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__memwr;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__pcasrc;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__pcbsrc;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__wb_r;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa;
    CData/*3:0*/ cpu_tst__DOT__datamem__DOT__wmask;
    CData/*7:0*/ cpu_tst__DOT__datamem__DOT__byteout;
    SData/*15:0*/ cpu_tst__DOT__datamem__DOT__wordout;
    IData/*31:0*/ cpu_tst__DOT__idataout;
    IData/*31:0*/ cpu_tst__DOT__daddr;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__pc_r;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__nextpc;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__rs1data;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__rs2data;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__imm;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__alua;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__alub;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__memin;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__dwordout;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[32];
    IData/*31:0*/ cpu_tst__DOT__instructions__DOT__ram[65536];
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[32768];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*4:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    static CData/*0:0*/ __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[32];
    static CData/*0:0*/ __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[32];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    SingleRiscv__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(SingleRiscv);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    SingleRiscv(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~SingleRiscv();
    
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
    static void _eval_initial_loop(SingleRiscv__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(SingleRiscv__Syms* symsp, bool first);
  private:
    static QData _change_request(SingleRiscv__Syms* __restrict vlSymsp);
    static QData _change_request_1(SingleRiscv__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(SingleRiscv__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(SingleRiscv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(SingleRiscv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(SingleRiscv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__5(SingleRiscv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(SingleRiscv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(SingleRiscv__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(SingleRiscv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
