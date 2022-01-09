// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See emu.h for the primary calling header

#include "emu.h"
#include "emu__Syms.h"

//==========

void emu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate emu::eval\n"); );
    emu__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("src/cpu_shell.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void emu::_eval_initial_loop(emu__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("src/cpu_shell.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void emu::_settle__TOP__2(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_settle__TOP__2\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX_result = (
                                                   (4U 
                                                    & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (((3U 
                                                            == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
                                                            ? 0U
                                                            : 1U)
                                                           ? 
                                                          (((((~ 
                                                               (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                                                >> 0x1fU)) 
                                                              & (~ 
                                                                 (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp 
                                                                  >> 0x1fU))) 
                                                             & (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.result 
                                                                >> 0x1fU)) 
                                                            | (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                                                 & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                                                >> 0x1fU) 
                                                               & (~ 
                                                                  (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.result 
                                                                   >> 0x1fU)))) 
                                                           ^ 
                                                           (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.result 
                                                            >> 0x1fU))
                                                           : 
                                                          (((IData)(vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__cout_temp) 
                                                            >> 3U) 
                                                           ^ 
                                                           ((0U 
                                                             == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
                                                             ? 0U
                                                             : 1U))))
                                                       ? 1U
                                                       : 0U))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr))
                                                      ? vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb
                                                      : vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr))
                                                      ? 
                                                     (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)
                                                      : 
                                                     (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                                      | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr))
                                                      ? 
                                                     (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                                      & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)
                                                      : vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.result)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__inputPC = ((IData)(vlTOPp->reset)
                                                  ? 0x80000000U
                                                  : 
                                                 ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__block)
                                                   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC
                                                   : 
                                                  ((0U 
                                                    != (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_Branch))
                                                    ? vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.result
                                                    : 
                                                   ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__ff
                                                     [3U] 
                                                     << 0x18U) 
                                                    | ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__ff
                                                        [2U] 
                                                        << 0x10U) 
                                                       | ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__ff
                                                           [1U] 
                                                           << 8U) 
                                                          | vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__ff
                                                          [0U]))))));
}

VL_INLINE_OPT void emu::_sequent__TOP__3(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_sequent__TOP__3\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    SData/*14:0*/ __Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    // Body
    __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__reg_valid_r = 1U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M_Branch = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag)
                                                   ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_Branch)
                                                   : 0U);
    vlTOPp->wb = vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid;
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__we 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemWr;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r 
        = (1U & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush)) 
                 & (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__receive_flag) 
                     | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r) 
                        & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag))))
                     ? 1U : 0U)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_valid_r 
        = (1U & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush)) 
                 & (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) 
                     | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_valid_r) 
                        & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag))))
                     ? 1U : 0U)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) 
                                                | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r) 
                                                   & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid))))
                                                ? 1U
                                                : 0U)));
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r = 1U;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M_flush = (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_Branch)))
                                                  ? 1U
                                                  : 0U);
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw = vlTOPp->cpu_tst__DOT__mycpu__DOT__M_rw;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid) {
        vlTOPp->done = vlTOPp->cpu_tst__DOT__mycpu__DOT__M_done;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__W_RegWr = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid) 
                                                 & ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_RegWr) 
                                                    & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_done))));
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUASrc 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUASrc;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUctr;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid) {
        vlTOPp->dbg_pc = vlTOPp->cpu_tst__DOT__mycpu__DOT__M_PC;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__currentPC_i 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_PC;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__busa_i 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busa;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUBSrc 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUBSrc;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busb;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__zero_i 
            = ((0U == vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.result)
                ? 1U : 0U);
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Branch_i 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_Branch;
    }
    if (vlTOPp->cpu_tst__DOT__dwe) {
        __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
            = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin;
        __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 1U;
        __Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
            = (0x7fffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                          >> 2U));
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__W_busw = 
            ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_MemToReg)
              ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                  ? ((2U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                      ? ((1U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                          ? vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout
                          : (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout))
                      : ((1U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                          ? (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout)
                          : vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout))
                  : ((2U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                      ? ((1U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                          ? vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout
                          : ((0xffff0000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout) 
                                                            >> 0xfU)))) 
                                             << 0x10U)) 
                             | (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout)))
                      : ((1U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                          ? ((0xffffff00U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout) 
                                                            >> 7U)))) 
                                             << 8U)) 
                             | (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout))
                          : vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout)))
              : vlTOPp->cpu_tst__DOT__mycpu__DOT__M_result);
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__imm_i 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_imm;
    }
    if (__Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[__Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0] 
            = __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemWr 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemWr;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M_rw = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_rw;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_RegWr) 
           & (0U != (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)));
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M_RegWr = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_RegWr;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M_done = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_done;
    }
    vlTOPp->__Vtableidx1 = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr;
    if (vlTOPp->__Vtablechg1[vlTOPp->__Vtableidx1]) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr 
            = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr
            [vlTOPp->__Vtableidx1];
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M_PC = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_PC;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busa 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
            [(0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                       >> 0xfU))];
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busb 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
            [(0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                       >> 0x14U))];
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_Branch 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX_result;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M_result 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX_result;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M_MemToReg 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemtoReg;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemOp;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_imm 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_imm;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_rw 
            = (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                        >> 7U));
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_RegWr 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_RegWr;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_done 
            = ((0xdead10ccU == vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr)
                ? 1U : 0U);
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_PC 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_PC;
    }
    vlTOPp->__Vtableidx2 = ((0x10U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                                      << 4U)) | (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__zero_i) 
                                                  << 3U) 
                                                 | (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Branch_i)));
    if ((1U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc 
            = vlTOPp->__Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc
            [vlTOPp->__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[vlTOPp->__Vtableidx2])) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc 
            = vlTOPp->__Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc
            [vlTOPp->__Vtableidx2];
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemtoReg 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemtoReg;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemOp 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp;
    }
    vlTOPp->cpu_tst__DOT__datamem__DOT__memin = ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i)))
                                                  ? 
                                                 ((0xff000000U 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i 
                                                      << 0x18U)) 
                                                  | ((0xff0000U 
                                                      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i))))
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i)))
                                                   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i
                                                   : 
                                                  ((0xffff0000U 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb 
        = ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUBSrc))
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busb
            : ((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUBSrc))
                ? vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_imm
                : 4U));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc)
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__imm_i
            : 4U);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc)
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__busa_i
            : vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__currentPC_i);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp 
        = (((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
             ? 0U : 1U) ? (~ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)
            : vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb);
    vlTOPp->cpu_tst__DOT__dwe = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__we) 
                                 & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_done)));
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__receive_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
            = vlTOPp->cpu_tst__DOT__idataout;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__receive_flag) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_PC 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUASrc)
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_PC
            : vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busa);
    if (vlTOPp->cpu_tst__DOT__dwe) {
        if ((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))) {
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | (0U == (3U & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr)));
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((1U == (3U & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr)) 
                      << 1U));
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((2U == (3U & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr)) 
                      << 2U));
            vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                = ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((3U == (3U & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr)) 
                      << 3U));
        } else {
            if ((2U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))) {
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (1U & (~ (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                                   >> 1U))));
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (2U & ((~ (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                                    >> 1U)) << 1U)));
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (4U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                                << 1U)));
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
                       | (8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                                << 2U)));
            } else {
                vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
                    = ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i))
                        ? 0xfU : 0U);
            }
        }
    } else {
        vlTOPp->cpu_tst__DOT__datamem__DOT__wmask = 0U;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn 
        = (((0xdU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
             ? 1U : 0U) ? (1U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 >> 0x1fU)) : 0U);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC = vlTOPp->cpu_tst__DOT__mycpu__DOT__inputPC;
    if (((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
          ? 0U : 1U)) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffffeU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (1U & ((0U >= ((IData)(0x20U) - (0x1fU 
                                                  & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                         ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                         : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                            >> (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffffdU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (2U & (((1U >= ((IData)(0x20U) - (0x1fU 
                                                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                          ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                          : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                             >> (0x1fU & ((IData)(1U) 
                                          + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                        << 1U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffffbU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (4U & (((2U >= ((IData)(0x20U) - (0x1fU 
                                                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                          ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                          : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                             >> (0x1fU & ((IData)(2U) 
                                          + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                        << 2U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffff7U & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (8U & (((3U >= ((IData)(0x20U) - (0x1fU 
                                                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                          ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                          : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                             >> (0x1fU & ((IData)(3U) 
                                          + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                        << 3U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffffefU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x10U & (((4U >= ((IData)(0x20U) 
                                    - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                             ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                             : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                >> (0x1fU & ((IData)(4U) 
                                             + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                           << 4U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffffdfU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x20U & (((5U >= ((IData)(0x20U) 
                                    - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                             ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                             : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                >> (0x1fU & ((IData)(5U) 
                                             + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                           << 5U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffffbfU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x40U & (((6U >= ((IData)(0x20U) 
                                    - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                             ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                             : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                >> (0x1fU & ((IData)(6U) 
                                             + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                           << 6U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffff7fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x80U & (((7U >= ((IData)(0x20U) 
                                    - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                             ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                             : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                >> (0x1fU & ((IData)(7U) 
                                             + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                           << 7U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffeffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x100U & (((8U >= ((IData)(0x20U) 
                                     - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                              ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                              : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 >> (0x1fU & ((IData)(8U) 
                                              + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                            << 8U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffdffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x200U & (((9U >= ((IData)(0x20U) 
                                     - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                              ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                              : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 >> (0x1fU & ((IData)(9U) 
                                              + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                            << 9U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffbffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x400U & (((0xaU >= ((IData)(0x20U) 
                                       - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                              ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                              : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 >> (0x1fU & ((IData)(0xaU) 
                                              + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                            << 0xaU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffff7ffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x800U & (((0xbU >= ((IData)(0x20U) 
                                       - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                              ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                              : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 >> (0x1fU & ((IData)(0xbU) 
                                              + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                            << 0xbU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffefffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x1000U & (((0xcU >= ((IData)(0x20U) 
                                        - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                               ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                               : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  >> (0x1fU & ((IData)(0xcU) 
                                               + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                             << 0xcU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffdfffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x2000U & (((0xdU >= ((IData)(0x20U) 
                                        - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                               ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                               : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  >> (0x1fU & ((IData)(0xdU) 
                                               + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                             << 0xdU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffbfffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x4000U & (((0xeU >= ((IData)(0x20U) 
                                        - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                               ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                               : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  >> (0x1fU & ((IData)(0xeU) 
                                               + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                             << 0xeU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffff7fffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x8000U & (((0xfU >= ((IData)(0x20U) 
                                        - (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                               ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                               : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  >> (0x1fU & ((IData)(0xfU) 
                                               + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                             << 0xfU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffeffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x10000U & (((0x10U >= ((IData)(0x20U) 
                                          - (0x1fU 
                                             & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   >> (0x1fU & ((IData)(0x10U) 
                                                + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                              << 0x10U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffdffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x20000U & (((0x11U >= ((IData)(0x20U) 
                                          - (0x1fU 
                                             & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   >> (0x1fU & ((IData)(0x11U) 
                                                + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                              << 0x11U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffbffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x40000U & (((0x12U >= ((IData)(0x20U) 
                                          - (0x1fU 
                                             & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   >> (0x1fU & ((IData)(0x12U) 
                                                + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                              << 0x12U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfff7ffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x80000U & (((0x13U >= ((IData)(0x20U) 
                                          - (0x1fU 
                                             & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   >> (0x1fU & ((IData)(0x13U) 
                                                + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                              << 0x13U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffefffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x100000U & (((0x14U >= ((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                 ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                 : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    >> (0x1fU & ((IData)(0x14U) 
                                                 + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                               << 0x14U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffdfffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x200000U & (((0x15U >= ((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                 ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                 : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    >> (0x1fU & ((IData)(0x15U) 
                                                 + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                               << 0x15U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffbfffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x400000U & (((0x16U >= ((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                 ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                 : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    >> (0x1fU & ((IData)(0x16U) 
                                                 + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                               << 0x16U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xff7fffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x800000U & (((0x17U >= ((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                 ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                 : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    >> (0x1fU & ((IData)(0x17U) 
                                                 + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                               << 0x17U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfeffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x1000000U & (((0x18U >= ((IData)(0x20U) 
                                            - (0x1fU 
                                               & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                  ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                  : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                     >> (0x1fU & ((IData)(0x18U) 
                                                  + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                << 0x18U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfdffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x2000000U & (((0x19U >= ((IData)(0x20U) 
                                            - (0x1fU 
                                               & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                  ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                  : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                     >> (0x1fU & ((IData)(0x19U) 
                                                  + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                << 0x19U)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfbffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x4000000U & (((0x1aU >= ((IData)(0x20U) 
                                            - (0x1fU 
                                               & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                  ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                  : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                     >> (0x1fU & ((IData)(0x1aU) 
                                                  + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                << 0x1aU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xf7ffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x8000000U & (((0x1bU >= ((IData)(0x20U) 
                                            - (0x1fU 
                                               & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                  ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                  : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                     >> (0x1fU & ((IData)(0x1bU) 
                                                  + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                << 0x1bU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xefffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x10000000U & (((0x1cU >= ((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                   ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                   : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                      >> (0x1fU & ((IData)(0x1cU) 
                                                   + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                 << 0x1cU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xdfffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x20000000U & (((0x1dU >= ((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                   ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                   : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                      >> (0x1fU & ((IData)(0x1dU) 
                                                   + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                 << 0x1dU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xbfffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x40000000U & (((0x1eU >= ((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                   ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                   : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                      >> (0x1fU & ((IData)(0x1eU) 
                                                   + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                 << 0x1eU)));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0x7fffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x80000000U & (((0x1fU >= ((IData)(0x20U) 
                                             - (0x1fU 
                                                & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))
                                   ? (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn)
                                   : (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                      >> (0x1fU & ((IData)(0x1fU) 
                                                   + vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                                 << 0x1fU)));
    } else {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffffeU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | ((0U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                     >> (0x1fU & (- vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffffdU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((1U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(1U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 1U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffffbU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((2U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(2U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 2U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffff7U & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((3U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(3U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 3U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffffefU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((4U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(4U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 4U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffffdfU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((5U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(5U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 5U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffffbfU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((6U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(6U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 6U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffff7fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((7U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(7U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 7U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffeffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((8U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(8U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 8U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffdffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((9U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(9U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 9U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffffbffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0xaU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0xaU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0xaU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffff7ffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0xbU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0xbU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0xbU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffefffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0xcU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0xcU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0xcU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffdfffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0xdU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0xdU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0xdU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffffbfffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0xeU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0xeU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0xeU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffff7fffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0xfU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0xfU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0xfU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffeffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x10U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x10U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x10U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffdffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x11U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x11U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x11U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfffbffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x12U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x12U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x12U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfff7ffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x13U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x13U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x13U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffefffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x14U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x14U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x14U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffdfffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x15U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x15U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x15U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xffbfffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x16U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x16U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x16U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xff7fffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x17U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x17U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x17U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfeffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x18U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x18U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x18U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfdffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x19U >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x19U) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x19U));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xfbffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x1aU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x1aU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x1aU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xf7ffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x1bU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x1bU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x1bU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xefffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x1cU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x1cU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x1cU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xdfffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x1dU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x1dU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x1dU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0xbfffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (((0x1eU >= (0x1fU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)) 
                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      >> (0x1fU & ((IData)(0x1eU) - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)))) 
                  << 0x1eU));
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 
            = ((0x7fffffffU & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4) 
               | (0x80000000U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  >> (0x1fU & ((IData)(0x1fU) 
                                               - vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb))) 
                                 << 0x1fU)));
    }
}

VL_INLINE_OPT void emu::_sequent__TOP__4(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_sequent__TOP__4\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v1;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v2;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v3;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v4;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v5;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v6;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v7;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v8;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v9;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v10;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v11;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v12;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v13;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v14;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v15;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v16;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v17;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v18;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v19;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v20;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v21;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v22;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v23;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v24;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v25;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v26;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v27;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v28;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v29;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v30;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v31;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v32;
    CData/*4:0*/ __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v33;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v33;
    IData/*31:0*/ __Vdlyvval__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0;
    WData/*95:0*/ __Vtemp4[3];
    WData/*127:0*/ __Vtemp5[4];
    // Body
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0 = 0U;
    if (VL_UNLIKELY(vlTOPp->reset)) {
        __Vtemp4[0U] = 0x2e686578U;
        __Vtemp4[1U] = (IData)(vlTOPp->testcase);
        __Vtemp4[2U] = (IData)((vlTOPp->testcase >> 0x20U));
        VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp4)
                     , vlTOPp->cpu_tst__DOT__instructions__DOT__ram
                     , 0, ~0ULL);
        __Vtemp5[0U] = 0x2e686578U;
        __Vtemp5[1U] = (0x5f64U | (0xffff0000U & ((IData)(vlTOPp->testcase) 
                                                  << 0x10U)));
        __Vtemp5[2U] = ((0xffffU & ((IData)(vlTOPp->testcase) 
                                    >> 0x10U)) | (0xffff0000U 
                                                  & ((IData)(
                                                             (vlTOPp->testcase 
                                                              >> 0x20U)) 
                                                     << 0x10U)));
        __Vtemp5[3U] = (0xffffU & ((IData)((vlTOPp->testcase 
                                            >> 0x20U)) 
                                   >> 0x10U));
        VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(4, __Vtemp5)
                     , vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
                     , 0, ~0ULL);
        VL_WRITEF("~~~ Begin test case %s ~~~\n",64,
                  vlTOPp->testcase);
    }
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v0 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v1 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v2 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v3 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v4 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v5 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v6 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v7 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v8 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v9 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v10 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v11 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v12 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v13 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v14 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v15 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v16 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v17 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v18 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v19 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v20 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v21 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v22 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v23 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v24 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v25 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v26 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v27 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v28 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v29 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v30 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v31 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v32 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v33 = 0U;
    vlTOPp->cpu_tst__DOT__idataout = vlTOPp->cpu_tst__DOT__instructions__DOT__ram
        [(0xffffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 2U))];
    if ((1U & (~ (IData)(vlTOPp->cpu_tst__DOT__dwe)))) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
            = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
            [(0x7fffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                         >> 2U))];
    }
    if (vlTOPp->cpu_tst__DOT__dwe) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
            = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
            [(0x7fffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr 
                         >> 2U))];
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) {
        __Vdlyvval__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__W_busw;
        __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0 = 1U;
        __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) {
        __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v0 = 1U;
        __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v0 
            = vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw;
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v1 = 1U;
        }
        vlTOPp->cpu_tst__DOT__mycpu__DOT__block = 0U;
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v2 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (2U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v3 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (3U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v4 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (4U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v5 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (5U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v6 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (6U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v7 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (7U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v8 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (8U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v9 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (9U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v10 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0xaU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v11 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0xbU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v12 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0xcU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v13 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0xdU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v14 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0xeU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v15 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0xfU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v16 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x10U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v17 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x11U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v18 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x12U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v19 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x13U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v20 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x14U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v21 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x15U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v22 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x16U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v23 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x17U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v24 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x18U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v25 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x19U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v26 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x1aU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v27 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x1bU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v28 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x1cU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v29 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x1dU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v30 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x1eU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v31 = 1U;
        }
        if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                      & (0x1fU == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v32 = 1U;
        }
    } else {
        if ((((((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__protect) 
                & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r)) 
               & (((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada)) 
                   | (~ vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status
                      [(0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 0xfU))])) & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb)) 
                                                 | (~ 
                                                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status
                                                    [
                                                    (0x1fU 
                                                     & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                        >> 0x14U))])))) 
              & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write)) 
                 | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write) 
                    & ((0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 7U)) != (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw))))) 
             & (0U != (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                >> 7U))))) {
            __Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v33 = 1U;
            __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v33 
                = (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                            >> 7U));
        }
        vlTOPp->cpu_tst__DOT__mycpu__DOT__block = (
                                                   (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada) 
                                                     & vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status
                                                     [
                                                     (0x1fU 
                                                      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                         >> 0xfU))]) 
                                                    | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb) 
                                                       & vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status
                                                       [
                                                       (0x1fU 
                                                        & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                           >> 0x14U))]))
                                                    ? 1U
                                                    : 0U);
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0] 
            = __Vdlyvval__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers__v0;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v0) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v0] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v1) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v2) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[1U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v3) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[2U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v4) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[3U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v5) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[4U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v6) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[5U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v7) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[6U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v8) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[7U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v9) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[8U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v10) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[9U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v11) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xaU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v12) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xbU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v13) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xcU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v14) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xdU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v15) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xeU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v16) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xfU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v17) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x10U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v18) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x11U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v19) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x12U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v20) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x13U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v21) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x14U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v22) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x15U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v23) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x16U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v24) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x17U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v25) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x18U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v26) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x19U] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v27) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1aU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v28) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1bU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v29) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1cU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v30) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1dU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v31) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1eU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v32) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1fU] = 0U;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v33) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status__v33] = 1U;
    }
    vlTOPp->dbgregs_0 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0U];
    vlTOPp->dbgregs_1 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [1U];
    vlTOPp->dbgregs_2 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [2U];
    vlTOPp->dbgregs_3 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [3U];
    vlTOPp->dbgregs_4 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [4U];
    vlTOPp->dbgregs_5 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [5U];
    vlTOPp->dbgregs_6 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [6U];
    vlTOPp->dbgregs_7 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [7U];
    vlTOPp->dbgregs_8 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [8U];
    vlTOPp->dbgregs_9 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [9U];
    vlTOPp->dbgregs_10 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0xaU];
    vlTOPp->dbgregs_11 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0xbU];
    vlTOPp->dbgregs_12 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0xcU];
    vlTOPp->dbgregs_13 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0xdU];
    vlTOPp->dbgregs_14 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0xeU];
    vlTOPp->dbgregs_15 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0xfU];
    vlTOPp->dbgregs_16 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x10U];
    vlTOPp->dbgregs_17 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x11U];
    vlTOPp->dbgregs_18 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x12U];
    vlTOPp->dbgregs_19 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x13U];
    vlTOPp->dbgregs_20 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x14U];
    vlTOPp->dbgregs_21 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x15U];
    vlTOPp->dbgregs_22 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x16U];
    vlTOPp->dbgregs_23 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x17U];
    vlTOPp->dbgregs_24 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x18U];
    vlTOPp->dbgregs_25 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x19U];
    vlTOPp->dbgregs_26 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x1aU];
    vlTOPp->dbgregs_27 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x1bU];
    vlTOPp->dbgregs_28 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x1cU];
    vlTOPp->dbgregs_29 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x1dU];
    vlTOPp->dbgregs_30 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x1eU];
    vlTOPp->dbgregs_31 = vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers
        [0x1fU];
}

VL_INLINE_OPT void emu::_combo__TOP__6(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_combo__TOP__6\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r) 
                                                 & (~ (IData)(vlTOPp->reset)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__flush = ((IData)(vlTOPp->reset) 
                                               | (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_flush));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M_ready = (1U 
                                                 & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r)) 
                                                    | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r) 
                                                       & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__IF_valid = ((
                                                   ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__reg_valid_r) 
                                                    & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__block))) 
                                                   & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__flush))) 
                                                  & (~ (IData)(vlTOPp->reset)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__flush) 
           | (IData)(vlTOPp->reset));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_valid = (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r) 
                                                   & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__block))) 
                                                  & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX_valid = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_valid_r) 
                                                  & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush)));
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            if ((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                   >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 0U;
            } else {
                if ((5U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 0U;
                } else {
                    if ((4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                         >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 0U;
                    } else {
                        if ((0xcU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                               >> 2U)))) {
                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 0U;
                        } else {
                            if ((0x1bU == (0x1fU & 
                                           (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                            >> 2U)))) {
                                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 1U;
                            } else {
                                if ((0x19U == (0x1fU 
                                               & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                  >> 2U)))) {
                                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 2U;
                                } else {
                                    if ((0x18U == (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) {
                                        if ((0U == 
                                             (7U & 
                                              (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                               >> 0xcU)))) {
                                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 4U;
                                        } else {
                                            if ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 0xcU)))) {
                                                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 5U;
                                            } else {
                                                if (
                                                    (4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                         >> 0xcU)))) {
                                                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 6U;
                                                } else {
                                                    if (
                                                        (5U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                             >> 0xcU)))) {
                                                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 7U;
                                                    } else {
                                                        if (
                                                            (6U 
                                                             == 
                                                             (7U 
                                                              & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                 >> 0xcU)))) {
                                                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 6U;
                                                        } else {
                                                            if (
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                     >> 0xcU)))) {
                                                                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 7U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_Branch = 0U;
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUBSrc = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUBSrc 
                = ((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) ? 1U
                    : ((5U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                        >> 2U))) ? 1U
                        : ((4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                            >> 2U)))
                            ? 1U : ((0xcU == (0x1fU 
                                              & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                 >> 2U)))
                                     ? 0U : ((0x1bU 
                                              == (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U)))
                                              ? 2U : 
                                             ((0x19U 
                                               == (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))
                                               ? 2U
                                               : ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))
                                                   ? 0U
                                                   : 1U)))))));
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUBSrc = 1U;
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUctr = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUctr 
                = ((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) ? 0xfU
                    : ((5U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                        >> 2U))) ? 0U
                        : ((4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                            >> 2U)))
                            ? ((5U != (7U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                             >> 0xcU)))
                                ? (7U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                         >> 0xcU)) : 
                               ((8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                       >> 0x1bU)) | 
                                (7U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                       >> 0xcU)))) : 
                           ((0xcU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                               >> 2U)))
                             ? ((8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                       >> 0x1bU)) | 
                                (7U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                       >> 0xcU))) : 
                            ((0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                 >> 2U)))
                              ? 0U : ((0x19U == (0x1fU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                    >> 2U)))
                                       ? 0U : ((0x18U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                    >> 2U)))
                                                ? (
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                         >> 0xcU))) 
                                                    | (7U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                           >> 0xcU))))
                                                    ? 3U
                                                    : 2U)
                                                : 0U)))))));
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUctr = 0U;
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            if ((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                   >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
            } else {
                if ((5U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                } else {
                    if ((4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                         >> 2U)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                    } else {
                        if ((0xcU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                               >> 2U)))) {
                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                        } else {
                            if ((0x1bU == (0x1fU & 
                                           (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                            >> 2U)))) {
                                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                            } else {
                                if ((0x19U == (0x1fU 
                                               & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                  >> 2U)))) {
                                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                                } else {
                                    if ((0x18U == (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) {
                                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                                    } else {
                                        if ((0U == 
                                             (7U & 
                                              (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                               >> 0xcU)))) {
                                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 1U;
                                        } else {
                                            if ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 0xcU)))) {
                                                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 2U;
                                            } else {
                                                if (
                                                    (2U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                         >> 0xcU)))) {
                                                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                                                } else {
                                                    if (
                                                        (4U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                             >> 0xcU)))) {
                                                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 5U;
                                                    } else {
                                                        if (
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                 >> 0xcU)))) {
                                                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 6U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                if ((0U == (7U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                  >> 0xcU)))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 1U;
                } else {
                    if ((1U == (7U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 0xcU)))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 2U;
                    } else {
                        if ((2U == (7U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                          >> 0xcU)))) {
                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemOp = 0U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_RegWr = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_RegWr 
                = ((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U))) 
                                                  | ((4U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                          >> 2U))) 
                                                     | ((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                             >> 2U))) 
                                                        | ((0x1bU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                >> 2U))) 
                                                           | ((0x19U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                   >> 2U))) 
                                                              | (0x18U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                     >> 2U)))))))));
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_RegWr = 0U;
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemtoReg = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemtoReg 
                = ((0xdU != (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) & ((5U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U))) 
                                                  & ((4U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                          >> 2U))) 
                                                     & ((0xcU 
                                                         != 
                                                         (0x1fU 
                                                          & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                             >> 2U))) 
                                                        & ((0x1bU 
                                                            != 
                                                            (0x1fU 
                                                             & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                >> 2U))) 
                                                           & ((0x19U 
                                                               != 
                                                               (0x1fU 
                                                                & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                   >> 2U))) 
                                                              & (0x18U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                     >> 2U)))))))));
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemtoReg = 0U;
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUASrc = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUASrc 
                = ((0xdU != (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) & ((5U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U))) 
                                                  | ((4U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                          >> 2U))) 
                                                     & ((0xcU 
                                                         != 
                                                         (0x1fU 
                                                          & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                             >> 2U))) 
                                                        & ((0x1bU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                >> 2U))) 
                                                           | (0x19U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                                  >> 2U))))))));
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ALUASrc = 0U;
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemWr = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemWr = 0U;
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_MemWr = 1U;
            }
        }
    }
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp = 0U;
    } else {
        if (((((((((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) | (5U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                  | (4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                     >> 2U)))) | (0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))) 
                | (0x1bU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U)))) | (0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))) 
              | (0x18U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                    >> 2U)))) | (0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U))))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp 
                = ((0xdU == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                      >> 2U))) ? 1U
                    : ((5U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                        >> 2U))) ? 1U
                        : ((4U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                            >> 2U)))
                            ? 0U : ((0xcU == (0x1fU 
                                              & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                 >> 2U)))
                                     ? 5U : ((0x1bU 
                                              == (0x1fU 
                                                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                     >> 2U)))
                                              ? 4U : 
                                             ((0x19U 
                                               == (0x1fU 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 2U)))
                                               ? 0U
                                               : ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                       >> 2U)))
                                                   ? 3U
                                                   : 0U)))))));
        } else {
            if ((8U == (0x1fU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                 >> 2U)))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp = 2U;
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX_valid) 
           & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_ready));
    if ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada = 1U;
                } else {
                    if ((4U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada = 0U;
                    } else {
                        if ((5U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reada = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb = 0U;
        } else {
            if ((2U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb = 1U;
            } else {
                if ((3U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb = 1U;
                } else {
                    if ((4U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb = 0U;
                    } else {
                        if ((5U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__readb = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__protect = 1U;
    } else {
        if ((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__protect = 1U;
        } else {
            if ((2U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__protect = 0U;
            } else {
                if ((3U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__protect = 0U;
                } else {
                    if ((4U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__protect = 0U;
                    } else {
                        if ((5U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__protect = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_imm = 
            ((0xfffff000U & ((- (IData)((1U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                               >> 0x1fU)))) 
                             << 0xcU)) | (0xfffU & 
                                          (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                           >> 0x14U)));
    } else {
        if ((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_imm 
                = (0xfffff000U & vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr);
        } else {
            if ((2U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_imm 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0xfe0U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                    >> 7U))));
            } else {
                if ((3U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_imm 
                        = ((0xfffff000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                           | ((0x800U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                         << 4U)) | 
                              ((0x7e0U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                          >> 0x14U)) 
                               | (0x1eU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                           >> 7U)))));
                } else {
                    if ((4U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                        vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_imm 
                            = ((0xfff00000U & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                              >> 0x1fU)))) 
                                               << 0x14U)) 
                               | ((0xff000U & vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr) 
                                  | ((0x800U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                >> 9U)) 
                                     | (0x7feU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr 
                                                  >> 0x14U)))));
                    } else {
                        if ((5U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp))) {
                            vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_imm = 0U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX_ready = (1U 
                                                  & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_valid_r)) 
                                                     | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_valid_r) 
                                                        & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_valid) 
           & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX_ready));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ready = (1U 
                                                  & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r)) 
                                                     | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r) 
                                                        & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__receive_flag 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__IF_valid) 
           & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ID_ready));
}

VL_INLINE_OPT void emu::_multiclk__TOP__8(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_multiclk__TOP__8\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((2U & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr)) {
        vlTOPp->cpu_tst__DOT__datamem__DOT__wordout 
            = (0xffffU & (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
                          >> 0x10U));
        vlTOPp->cpu_tst__DOT__datamem__DOT__byteout 
            = (0xffU & ((1U & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr)
                         ? (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
                            >> 0x18U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
                                         >> 0x10U)));
    } else {
        vlTOPp->cpu_tst__DOT__datamem__DOT__wordout 
            = (0xffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout);
        vlTOPp->cpu_tst__DOT__datamem__DOT__byteout 
            = (0xffU & ((1U & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__addr)
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

void emu::_eval(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_eval\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32._sequent__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__4(vlSymsp);
        vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32._sequent__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__5(vlSymsp);
        vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen._sequent__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32._combo__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__7(vlSymsp);
    vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32._combo__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__8(vlSymsp);
    vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen._combo__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__9(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_multiclk__TOP__8(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData emu::_change_request(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_change_request\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData emu::_change_request_1(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_change_request_1\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__Vcellout__gen__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen____Vcellout__gen__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__Vcellout__gen__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32____Vcellout__gen__c)
        || (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__Vcellout__gen__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32____Vcellout__gen__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)
        || (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)
         | (vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__Vcellout__gen__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen____Vcellout__gen__c))) VL_DBG_MSGF("        CHANGE: src/CLU4.v:3: __Vcellout__gen__c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[0].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[0].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[1].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[1].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[2].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[2].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[3].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[3].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__Vcellout__gen__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32____Vcellout__gen__c))) VL_DBG_MSGF("        CHANGE: src/CLU4.v:3: __Vcellout__gen__c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[0].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[0].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[1].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[1].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[2].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[2].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[3].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[3].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__Vcellout__gen__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32____Vcellout__gen__c))) VL_DBG_MSGF("        CHANGE: src/CLU4.v:3: __Vcellout__gen__c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[0].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[0].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[1].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[1].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[2].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[2].adder8.adder_high.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[3].adder8.adder_low.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c ^ vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))) VL_DBG_MSGF("        CHANGE: src/CLA4.v:10: genblk2[3].adder8.adder_high.c\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen____Vcellout__gen__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__Vcellout__gen__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32____Vcellout__gen__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__Vcellout__gen__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32____Vcellout__gen__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__Vcellout__gen__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c;
    vlTOPp->__Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c;
    return __req;
}

#ifdef VL_DEBUG
void emu::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
