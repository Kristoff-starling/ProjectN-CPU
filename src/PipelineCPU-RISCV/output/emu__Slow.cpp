// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See emu.h for the primary calling header

#include "emu.h"
#include "emu__Syms.h"

//==========
CData/*2:0*/ emu::__Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[16];
CData/*0:0*/ emu::__Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[32];
CData/*0:0*/ emu::__Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[32];

VL_CTOR_IMP(emu) {
    emu__Syms* __restrict vlSymsp = __VlSymsp = new emu__Syms(this, name());
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen, emu_Adder32);
    VL_CELL(__PVT__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32, emu_Adder32);
    VL_CELL(__PVT__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32, emu_Adder32);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void emu::__Vconfigure(emu__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

emu::~emu() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void emu::_settle__TOP__1(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_settle__TOP__1\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr;
    if (vlTOPp->__Vtablechg1[vlTOPp->__Vtableidx1]) {
        vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr 
            = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr
            [vlTOPp->__Vtableidx1];
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__flush = ((IData)(vlTOPp->reset) 
                                               | (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_flush));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r) 
                                                 & (~ (IData)(vlTOPp->reset)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_RegWr) 
           & (0U != (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__W_rw)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb 
        = ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUBSrc))
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busb
            : ((1U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUBSrc))
                ? vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_imm
                : 4U));
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
    vlTOPp->cpu_tst__DOT__dwe = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__we) 
                                 & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_done)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUASrc)
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_PC
            : vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busa);
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
    vlTOPp->cpu_tst__DOT__mycpu__DOT__IF_valid = ((
                                                   ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__reg_valid_r) 
                                                    & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__block))) 
                                                   & (~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__flush))) 
                                                  & (~ (IData)(vlTOPp->reset)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__flush) 
           | (IData)(vlTOPp->reset));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M_ready = (1U 
                                                 & ((~ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r)) 
                                                    | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r) 
                                                       & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M_valid))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp 
        = (((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
             ? 0U : 1U) ? (~ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb)
            : vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb);
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
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc)
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__imm_i
            : 4U);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
        = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc)
            ? vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__busa_i
            : vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__currentPC_i);
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

void emu::_initial__TOP__5(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_initial__TOP__5\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[1U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[1U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[2U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[2U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[3U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[3U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[4U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[4U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[5U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[5U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[6U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[6U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[7U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[7U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[8U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[8U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[9U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[9U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0xaU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xaU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0xbU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xbU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0xcU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xcU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0xdU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xdU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0xeU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xeU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0xfU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0xfU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x10U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x10U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x11U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x11U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x12U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x12U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x13U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x13U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x14U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x14U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x15U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x15U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x16U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x16U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x17U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x17U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x18U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x18U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x19U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x19U] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x1aU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1aU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x1bU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1bU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x1cU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1cU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x1dU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1dU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x1eU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1eU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[0x1fU] = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[0x1fU] = 0U;
}

void emu::_settle__TOP__9(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_settle__TOP__9\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void emu::_eval_initial(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_eval_initial\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->_initial__TOP__5(vlSymsp);
}

void emu::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::final\n"); );
    // Variables
    emu__Syms* __restrict vlSymsp = this->__VlSymsp;
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void emu::_eval_settle(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_eval_settle\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen._settle__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__1(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32._settle__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__2(vlSymsp);
    vlSymsp->TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32._settle__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__3(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

void emu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    emu::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    testcase = VL_RAND_RESET_Q(64);
    dbg_pc = VL_RAND_RESET_I(32);
    dbgregs_0 = VL_RAND_RESET_I(32);
    dbgregs_1 = VL_RAND_RESET_I(32);
    dbgregs_2 = VL_RAND_RESET_I(32);
    dbgregs_3 = VL_RAND_RESET_I(32);
    dbgregs_4 = VL_RAND_RESET_I(32);
    dbgregs_5 = VL_RAND_RESET_I(32);
    dbgregs_6 = VL_RAND_RESET_I(32);
    dbgregs_7 = VL_RAND_RESET_I(32);
    dbgregs_8 = VL_RAND_RESET_I(32);
    dbgregs_9 = VL_RAND_RESET_I(32);
    dbgregs_10 = VL_RAND_RESET_I(32);
    dbgregs_11 = VL_RAND_RESET_I(32);
    dbgregs_12 = VL_RAND_RESET_I(32);
    dbgregs_13 = VL_RAND_RESET_I(32);
    dbgregs_14 = VL_RAND_RESET_I(32);
    dbgregs_15 = VL_RAND_RESET_I(32);
    dbgregs_16 = VL_RAND_RESET_I(32);
    dbgregs_17 = VL_RAND_RESET_I(32);
    dbgregs_18 = VL_RAND_RESET_I(32);
    dbgregs_19 = VL_RAND_RESET_I(32);
    dbgregs_20 = VL_RAND_RESET_I(32);
    dbgregs_21 = VL_RAND_RESET_I(32);
    dbgregs_22 = VL_RAND_RESET_I(32);
    dbgregs_23 = VL_RAND_RESET_I(32);
    dbgregs_24 = VL_RAND_RESET_I(32);
    dbgregs_25 = VL_RAND_RESET_I(32);
    dbgregs_26 = VL_RAND_RESET_I(32);
    dbgregs_27 = VL_RAND_RESET_I(32);
    dbgregs_28 = VL_RAND_RESET_I(32);
    dbgregs_29 = VL_RAND_RESET_I(32);
    dbgregs_30 = VL_RAND_RESET_I(32);
    dbgregs_31 = VL_RAND_RESET_I(32);
    done = VL_RAND_RESET_I(1);
    wb = VL_RAND_RESET_I(1);
    cpu_tst__DOT__idataout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__dwe = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__flush = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__block = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__inputPC = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__IF_valid = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID_valid = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID_ready = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID_imm = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__ID_Branch = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__ID_ALUBSrc = VL_RAND_RESET_I(2);
    cpu_tst__DOT__mycpu__DOT__ID_ALUctr = VL_RAND_RESET_I(4);
    cpu_tst__DOT__mycpu__DOT__ID_MemOp = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__ID_RegWr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID_MemtoReg = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID_ALUASrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID_MemWr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT____Vcellinp__ID__flush = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX_valid = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX_ready = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX_result = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M_flush = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M_valid = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M_ready = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M_done = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M_MemToReg = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M_RegWr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M_result = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M_rw = VL_RAND_RESET_I(5);
    cpu_tst__DOT__mycpu__DOT__M_PC = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M_Branch = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__W_RegWr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__W_busw = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__W_rw = VL_RAND_RESET_I(5);
    cpu_tst__DOT__mycpu__DOT__IF__DOT__PC = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__IF__DOT__reg_valid_r = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_valid_r = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_instr = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__reg_PC = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__receive_flag = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__send_flag = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__ExtOp = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__reada = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__readb = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__ID__DOT__protect = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__reg_status[__Vi0] = VL_RAND_RESET_I(1);
    }}
    cpu_tst__DOT__mycpu__DOT__ID__DOT__Regfiles__DOT__write = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_valid_r = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_PC = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_imm = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busa = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_busb = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_rw = VL_RAND_RESET_I(5);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_Branch = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUBSrc = VL_RAND_RESET_I(2);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr = VL_RAND_RESET_I(4);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemOp = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_RegWr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemtoReg = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUASrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_MemWr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_done = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__send_flag = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUb = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__input4 = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__shift__DOT__sgn = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M__DOT__reg_valid_r = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M__DOT__we = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M__DOT__MemOp_i = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__M__DOT__Di_i = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M__DOT__Branch_i = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__M__DOT__addr = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M__DOT__zero_i = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M__DOT__imm_i = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M__DOT__currentPC_i = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M__DOT__busa_i = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
            cpu_tst__DOT__instructions__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cpu_tst__DOT__datamem__DOT__memin = VL_RAND_RESET_I(32);
    cpu_tst__DOT__datamem__DOT__wmask = VL_RAND_RESET_I(4);
    cpu_tst__DOT__datamem__DOT__byteout = VL_RAND_RESET_I(8);
    cpu_tst__DOT__datamem__DOT__wordout = VL_RAND_RESET_I(16);
    cpu_tst__DOT__datamem__DOT__dwordout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32768; ++__Vi0) {
            cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtablechg1[0] = 1U;
    __Vtablechg1[1] = 1U;
    __Vtablechg1[2] = 1U;
    __Vtablechg1[3] = 1U;
    __Vtablechg1[4] = 1U;
    __Vtablechg1[5] = 1U;
    __Vtablechg1[6] = 1U;
    __Vtablechg1[7] = 1U;
    __Vtablechg1[8] = 1U;
    __Vtablechg1[9] = 0U;
    __Vtablechg1[10] = 0U;
    __Vtablechg1[11] = 0U;
    __Vtablechg1[12] = 0U;
    __Vtablechg1[13] = 1U;
    __Vtablechg1[14] = 0U;
    __Vtablechg1[15] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[0] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[1] = 4U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[2] = 6U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[3] = 6U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[4] = 3U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[5] = 4U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[6] = 2U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[7] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[8] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[9] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[10] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[11] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[12] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[13] = 4U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[14] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__OPctr[15] = 5U;
    __Vtableidx2 = 0;
    __Vtablechg2[0] = 3U;
    __Vtablechg2[1] = 3U;
    __Vtablechg2[2] = 3U;
    __Vtablechg2[3] = 0U;
    __Vtablechg2[4] = 3U;
    __Vtablechg2[5] = 3U;
    __Vtablechg2[6] = 3U;
    __Vtablechg2[7] = 3U;
    __Vtablechg2[8] = 3U;
    __Vtablechg2[9] = 3U;
    __Vtablechg2[10] = 3U;
    __Vtablechg2[11] = 0U;
    __Vtablechg2[12] = 3U;
    __Vtablechg2[13] = 3U;
    __Vtablechg2[14] = 3U;
    __Vtablechg2[15] = 3U;
    __Vtablechg2[16] = 3U;
    __Vtablechg2[17] = 3U;
    __Vtablechg2[18] = 3U;
    __Vtablechg2[19] = 0U;
    __Vtablechg2[20] = 3U;
    __Vtablechg2[21] = 3U;
    __Vtablechg2[22] = 3U;
    __Vtablechg2[23] = 3U;
    __Vtablechg2[24] = 3U;
    __Vtablechg2[25] = 3U;
    __Vtablechg2[26] = 3U;
    __Vtablechg2[27] = 0U;
    __Vtablechg2[28] = 3U;
    __Vtablechg2[29] = 3U;
    __Vtablechg2[30] = 3U;
    __Vtablechg2[31] = 3U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[0] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[1] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[2] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[3] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[4] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[5] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[6] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[7] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[8] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[9] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[10] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[11] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[12] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[13] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[14] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[15] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[16] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[17] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[18] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[19] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[20] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[21] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[22] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[23] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[24] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[25] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[26] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[27] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[28] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[29] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[30] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtASrc[31] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[0] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[1] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[2] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[3] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[4] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[5] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[6] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[7] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[8] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[9] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[10] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[11] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[12] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[13] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[14] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[15] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[16] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[17] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[18] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[19] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[20] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[21] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[22] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[23] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[24] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[25] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[26] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[27] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[28] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[29] = 0U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[30] = 1U;
    __Vtable2_cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__NxtBSrc[31] = 1U;
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen____Vcellout__gen__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32____Vcellout__gen__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32____Vcellout__gen__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c = VL_RAND_RESET_I(4);
    __Vchglast__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c = VL_RAND_RESET_I(4);
}
