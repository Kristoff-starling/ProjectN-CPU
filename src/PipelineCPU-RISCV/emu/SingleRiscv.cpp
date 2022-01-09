// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See SingleRiscv.h for the primary calling header

#include "SingleRiscv.h"
#include "SingleRiscv__Syms.h"

//==========

void SingleRiscv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate SingleRiscv::eval\n"); );
    SingleRiscv__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/cpu.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void SingleRiscv::_eval_initial_loop(SingleRiscv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("src/cpu.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void SingleRiscv::_sequent__TOP__2(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_sequent__TOP__2\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*127:0*/ __Vtemp2[4];
    // Body
    if (VL_UNLIKELY(vlTOPp->reset)) {
        __Vtemp1[0U] = 0x2e686578U;
        __Vtemp1[1U] = (IData)(vlTOPp->testcase);
        __Vtemp1[2U] = (IData)((vlTOPp->testcase >> 0x20U));
        VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                     , vlTOPp->cpu_tst__DOT__instructions__DOT__ram
                     , 0, ~0ULL);
        __Vtemp2[0U] = 0x2e686578U;
        __Vtemp2[1U] = (0x5f64U | (0xffff0000U & ((IData)(vlTOPp->testcase) 
                                                  << 0x10U)));
        __Vtemp2[2U] = ((0xffffU & ((IData)(vlTOPp->testcase) 
                                    >> 0x10U)) | (0xffff0000U 
                                                  & ((IData)(
                                                             (vlTOPp->testcase 
                                                              >> 0x20U)) 
                                                     << 0x10U)));
        __Vtemp2[3U] = (0xffffU & ((IData)((vlTOPp->testcase 
                                            >> 0x20U)) 
                                   >> 0x10U));
        VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(4, __Vtemp2)
                     , vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
                     , 0, ~0ULL);
        VL_WRITEF("~~~ Begin test case %s ~~~\n",64,
                  vlTOPp->testcase);
    }
    if ((1U & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr)))) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
            = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
            [(0x7fffU & (vlTOPp->cpu_tst__DOT__daddr 
                         >> 2U))];
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
            = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
            [(0x7fffU & (vlTOPp->cpu_tst__DOT__daddr 
                         >> 2U))];
    }
}

VL_INLINE_OPT void SingleRiscv::_sequent__TOP__3(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_sequent__TOP__3\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    SData/*14:0*/ __Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    // Body
    __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 = 0U;
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr) {
        __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
            = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin;
        __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 1U;
        __Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
            = (0x7fffU & (vlTOPp->cpu_tst__DOT__daddr 
                          >> 2U));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__dbg_pc_r 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__wb_r = ((~ (IData)(vlTOPp->reset)) 
                                              & (0U 
                                                 != vlTOPp->cpu_tst__DOT__idataout));
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr) {
        __Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 
            = ((0U == (0x1fU & (vlTOPp->cpu_tst__DOT__idataout 
                                >> 7U))) ? 0U : ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlTOPp->cpu_tst__DOT__idataout)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlTOPp->cpu_tst__DOT__idataout)
                                                    ? vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->cpu_tst__DOT__idataout)
                                                     ? (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout)
                                                     : (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlTOPp->cpu_tst__DOT__idataout)
                                                    ? vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->cpu_tst__DOT__idataout)
                                                     ? 
                                                    ((0xffff0000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout) 
                                                                        >> 0xfU)))) 
                                                         << 0x10U)) 
                                                     | (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout))
                                                     : 
                                                    ((0xffffff00U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout) 
                                                                        >> 7U)))) 
                                                         << 8U)) 
                                                     | (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout)))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? 
                                                    (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
                                                     & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
                                                     : 
                                                    (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
                                                     | vlTOPp->cpu_tst__DOT__mycpu__DOT__alub))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout
                                                     : 
                                                    (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
                                                     ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? vlTOPp->cpu_tst__DOT__mycpu__DOT__alub
                                                     : (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__less))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout
                                                     : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout)))));
        __Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 
            = (0x1fU & (vlTOPp->cpu_tst__DOT__idataout 
                        >> 7U));
    }
    if (__Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[__Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0] 
            = __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0] 
            = __Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    }
    vlTOPp->dbg_pc = vlTOPp->cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r = ((IData)(vlTOPp->reset)
                                               ? 0x80000000U
                                               : vlTOPp->cpu_tst__DOT__mycpu__DOT__nextpc);
    vlTOPp->wb = vlTOPp->cpu_tst__DOT__mycpu__DOT__wb_r;
    vlTOPp->dbgregs_0 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0U];
    vlTOPp->dbgregs_1 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [1U];
    vlTOPp->dbgregs_2 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [2U];
    vlTOPp->dbgregs_3 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [3U];
    vlTOPp->dbgregs_4 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [4U];
    vlTOPp->dbgregs_5 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [5U];
    vlTOPp->dbgregs_6 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [6U];
    vlTOPp->dbgregs_7 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [7U];
    vlTOPp->dbgregs_8 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [8U];
    vlTOPp->dbgregs_9 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [9U];
    vlTOPp->dbgregs_10 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xaU];
    vlTOPp->dbgregs_11 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xbU];
    vlTOPp->dbgregs_12 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xcU];
    vlTOPp->dbgregs_13 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xdU];
    vlTOPp->dbgregs_14 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xeU];
    vlTOPp->dbgregs_15 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xfU];
    vlTOPp->dbgregs_16 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x10U];
    vlTOPp->dbgregs_17 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x11U];
    vlTOPp->dbgregs_18 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x12U];
    vlTOPp->dbgregs_19 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x13U];
    vlTOPp->dbgregs_20 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x14U];
    vlTOPp->dbgregs_21 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x15U];
    vlTOPp->dbgregs_22 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x16U];
    vlTOPp->dbgregs_23 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x17U];
    vlTOPp->dbgregs_24 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x18U];
    vlTOPp->dbgregs_25 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x19U];
    vlTOPp->dbgregs_26 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1aU];
    vlTOPp->dbgregs_27 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1bU];
    vlTOPp->dbgregs_28 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1cU];
    vlTOPp->dbgregs_29 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1dU];
    vlTOPp->dbgregs_30 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1eU];
    vlTOPp->dbgregs_31 = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1fU];
    vlTOPp->cpu_tst__DOT__idataout = vlTOPp->cpu_tst__DOT__instructions__DOT__ram
        [(0xffffU & (((IData)(vlTOPp->reset) ? 0U : vlTOPp->cpu_tst__DOT__mycpu__DOT__nextpc) 
                     >> 2U))];
    vlTOPp->done = (0xdead10ccU == vlTOPp->cpu_tst__DOT__idataout);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0x14U))];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0xfU))];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->cpu_tst__DOT__idataout 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->cpu_tst__DOT__idataout 
                                                  >> 0x14U)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__op = (0x7fU & vlTOPp->cpu_tst__DOT__idataout);
    vlTOPp->cpu_tst__DOT__datamem__DOT__memin = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->cpu_tst__DOT__idataout 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((0xff000000U 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
                                                      << 0x18U)) 
                                                  | ((0xff0000U 
                                                      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data))))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->cpu_tst__DOT__idataout 
                                                       >> 0xcU)))
                                                   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data
                                                   : 
                                                  ((0xffff0000U 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 1U;
                    }
                } else {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__branch 
                        = ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))
                            ? 2U : (4U | ((2U & (vlTOPp->cpu_tst__DOT__idataout 
                                                 >> 0xdU)) 
                                          | (1U & (vlTOPp->cpu_tst__DOT__idataout 
                                                   >> 0xcU)))));
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                      >> 5U)))) {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
                            = ((3U == (3U & (vlTOPp->cpu_tst__DOT__idataout 
                                             >> 0xdU)))
                                ? 0xaU : 2U);
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
                        = ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))
                            ? 3U : ((3U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
                                                  >> 0xcU)))
                                     ? 0xaU : ((8U 
                                                & (vlTOPp->cpu_tst__DOT__idataout 
                                                   >> 0x1bU)) 
                                               | (7U 
                                                  & (vlTOPp->cpu_tst__DOT__idataout 
                                                     >> 0xcU)))));
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
                        = ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))
                            ? 0U : ((3U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
                                                  >> 0xcU)))
                                     ? 0xaU : (((5U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->cpu_tst__DOT__idataout 
                                                     >> 0xcU))) 
                                                & (vlTOPp->cpu_tst__DOT__idataout 
                                                   >> 0x1eU))
                                                ? 0xdU
                                                : (7U 
                                                   & (vlTOPp->cpu_tst__DOT__idataout 
                                                      >> 0xcU)))));
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 4U;
                    }
                } else {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__extop 
                        = ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))
                            ? 0U : 3U);
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 1U;
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 2U;
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__daddr = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr)
                                    ? (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data 
                                       + ((0xfffff000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cpu_tst__DOT__idataout 
                                                             >> 0x1fU)))) 
                                              << 0xcU)) 
                                          | ((0xfe0U 
                                              & (vlTOPp->cpu_tst__DOT__idataout 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlTOPp->cpu_tst__DOT__idataout 
                                                   >> 7U)))))
                                    : (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data 
                                       + ((0xfffff000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlTOPp->cpu_tst__DOT__idataout 
                                                             >> 0x1fU)))) 
                                              << 0xcU)) 
                                          | (0xfffU 
                                             & (vlTOPp->cpu_tst__DOT__idataout 
                                                >> 0x14U)))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alua = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc)
                                               ? vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r
                                               : vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa 
        = (1U & (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr) 
                  >> 3U) | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr) 
                            >> 1U)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__imm = ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
                                              ? ((2U 
                                                  & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
                                                  ? vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
                                                   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
                                                   : 
                                                  ((0xfff00000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->cpu_tst__DOT__idataout 
                                                                      >> 0x1fU)))) 
                                                       << 0x14U)) 
                                                   | ((0xff000U 
                                                       & vlTOPp->cpu_tst__DOT__idataout) 
                                                      | ((0x800U 
                                                          & (vlTOPp->cpu_tst__DOT__idataout 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlTOPp->cpu_tst__DOT__idataout 
                                                               >> 0x14U)))))))
                                              : ((2U 
                                                  & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->cpu_tst__DOT__idataout 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | ((0x800U 
                                                       & (vlTOPp->cpu_tst__DOT__idataout 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlTOPp->cpu_tst__DOT__idataout 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlTOPp->cpu_tst__DOT__idataout 
                                                               >> 7U)))))
                                                   : 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->cpu_tst__DOT__idataout 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | ((0xfe0U 
                                                       & (vlTOPp->cpu_tst__DOT__idataout 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlTOPp->cpu_tst__DOT__idataout 
                                                            >> 7U)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlTOPp->cpu_tst__DOT__idataout)
                                                   : vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI)));
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr) {
        if ((0U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
                          >> 0xcU)))) {
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | (0U == (3U & vlTOPp->cpu_tst__DOT__daddr)));
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((1U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
                      << 1U));
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((2U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
                      << 2U));
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((3U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
                      << 3U));
        } else {
            if ((1U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
                              >> 0xcU)))) {
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (1U & (~ (vlTOPp->cpu_tst__DOT__daddr 
                                   >> 1U))));
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (2U & ((~ (vlTOPp->cpu_tst__DOT__daddr 
                                    >> 1U)) << 1U)));
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (4U & (vlTOPp->cpu_tst__DOT__daddr 
                                << 1U)));
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (8U & (vlTOPp->cpu_tst__DOT__daddr 
                                << 2U)));
            } else {
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((2U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
                                     >> 0xcU))) ? 0xfU
                        : 0U);
            }
        }
    } else {
        vlTOPp->cpu_tst__DOT__datamem__DOT__wmask = 0U;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
        = ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
            ? (- (IData)((1U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
                                >> 0x1fU)))) : 0U);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alub = ((2U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc))
                                               ? 4U
                                               : ((1U 
                                                   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc))
                                                   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__imm
                                                   : vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
        = ((0x10U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((0xffff0000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
                                                    >> 0x10U)))
                : (0xffff0000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
                                  << 0x10U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__alua);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin 
        = ((- (IData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
           ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alub);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
        = ((8U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((0xff000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                                   << 0x18U)) | (0xffffffU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
                                                    >> 8U)))
                : (0xffffff00U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
                                  << 8U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
        = ((vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
            + vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin) 
           + (IData)((QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
        = ((4U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((0xf0000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                                   << 0x1cU)) | (0xfffffffU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
                                                    >> 4U)))
                : (0xfffffff0U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
                                  << 4U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__less = (1U & 
                                              ((8U 
                                                & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                ? ((IData)(
                                                           (1ULL 
                                                            & ((((QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alua)) 
                                                                 + (QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin))) 
                                                                + (QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
                                                               >> 0x20U))) 
                                                   ^ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))
                                                : (
                                                   (((vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
                                                      >> 0x1fU) 
                                                     ^ ~ 
                                                     (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin 
                                                      >> 0x1fU)) 
                                                    & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
                                                        ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alua) 
                                                       >> 0x1fU)) 
                                                   ^ 
                                                   (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
                                                    >> 0x1fU))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
        = ((2U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((0xc0000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                                   << 0x1eU)) | (0x3fffffffU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
                                                    >> 2U)))
                : (0xfffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
                                  << 2U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out);
    vlTOPp->__Vtableidx1 = ((0x10U & ((~ (IData)((0U 
                                                  != vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout))) 
                                      << 4U)) | (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__less) 
                                                  << 3U) 
                                                 | (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__branch)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pcasrc = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc
        [vlTOPp->__Vtableidx1];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pcbsrc = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc
        [vlTOPp->__Vtableidx1];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout 
        = ((1U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((0x80000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                                   << 0x1fU)) | (0x7fffffffU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
                                                    >> 1U)))
                : (0xfffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
                                  << 1U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__nextpc = ((0xdead10ccU 
                                                 != vlTOPp->cpu_tst__DOT__idataout)
                                                 ? 
                                                (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__pcasrc)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__imm)
                                                   : 4U) 
                                                 + 
                                                 ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__pcbsrc)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data)
                                                   : vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r))
                                                 : vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r);
}

VL_INLINE_OPT void SingleRiscv::_multiclk__TOP__5(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_multiclk__TOP__5\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & vlTOPp->cpu_tst__DOT__daddr)) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__wordout 
            = (0xffffU & (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
                          >> 0x10U));
        vlTOPp->cpu_tst__DOT__datamem__DOT__byteout 
            = (0xffU & ((1U & vlTOPp->cpu_tst__DOT__daddr)
                         ? (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
                            >> 0x18U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
                                         >> 0x10U)));
    } else {
        vlTOPp->cpu_tst__DOT__datamem__DOT__wordout 
            = (0xffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout);
        vlTOPp->cpu_tst__DOT__datamem__DOT__byteout 
            = (0xffU & ((1U & vlTOPp->cpu_tst__DOT__daddr)
                         ? (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
                            >> 8U) : vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout));
    }
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
        = ((0xffffff00U & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
           | (0xffU & ((1U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
                        ? vlTOPp->cpu_tst__DOT__datamem__DOT__memin
                        : vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
        = ((0xffff00ffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
           | (0xff00U & (((2U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
                           ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
                              >> 8U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
                                        >> 8U)) << 8U)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
        = ((0xff00ffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
           | (0xff0000U & (((4U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
                             ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
                                >> 0x10U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
        = ((0xffffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
           | (0xff000000U & (((8U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
                               ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
                                  >> 0x18U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
                                               >> 0x18U)) 
                             << 0x18U)));
}

void SingleRiscv::_eval(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData SingleRiscv::_change_request(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_change_request\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData SingleRiscv::_change_request_1(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_change_request_1\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void SingleRiscv::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
