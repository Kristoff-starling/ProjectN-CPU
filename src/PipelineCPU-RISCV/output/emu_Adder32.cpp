// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See emu.h for the primary calling header

#include "emu_Adder32.h"
#include "emu__Syms.h"

//==========

VL_INLINE_OPT void emu_Adder32::_sequent__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__6(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                emu_Adder32::_sequent__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__6\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__g[0U] = (4U & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC);
    this->__PVT__p[0U] = (0xffU & (4U | vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC));
    this->__PVT__p[1U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                   >> 8U));
    this->__PVT__p[2U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                   >> 0x10U));
    this->__PVT__p[3U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                   >> 0x18U));
    this->__PVT__Pg = ((0xeU & (IData)(this->__PVT__Pg)) 
                       | ((0xffU == this->__PVT__p[0U])
                           ? 1U : 0U));
    this->__PVT__Pg = ((0xdU & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [1U]) ? 1U : 0U) << 1U));
    this->__PVT__Pg = ((0xbU & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [2U]) ? 1U : 0U) << 2U));
    this->__PVT__Pg = ((7U & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [3U]) ? 1U : 0U) << 3U));
    this->__PVT__Gg = ((0xeU & (IData)(this->__PVT__Gg)) 
                       | (1U & ((((((((this->__PVT__g
                                       [0U] >> 7U) 
                                      | ((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__g
                                            [0U] >> 6U))) 
                                     | (((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__g
                                           [0U] >> 5U))) 
                                    | ((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__g
                                          [0U] >> 4U))) 
                                   | (((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__g
                                         [0U] >> 3U))) 
                                  | ((((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__p
                                         [0U] >> 3U)) 
                                     & (this->__PVT__g
                                        [0U] >> 2U))) 
                                 | (((((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__p
                                         [0U] >> 3U)) 
                                     & (this->__PVT__p
                                        [0U] >> 2U)) 
                                    & (this->__PVT__g
                                       [0U] >> 1U))) 
                                | (((((((((this->__PVT__p
                                           [0U] >> 7U) 
                                          & (this->__PVT__p
                                             [0U] >> 6U)) 
                                         & (this->__PVT__p
                                            [0U] >> 5U)) 
                                        & (this->__PVT__p
                                           [0U] >> 4U)) 
                                       & (this->__PVT__p
                                          [0U] >> 3U)) 
                                      & (this->__PVT__p
                                         [0U] >> 2U)) 
                                     & (this->__PVT__p
                                        [0U] >> 1U)) 
                                    & this->__PVT__p
                                    [0U]) & this->__PVT__g
                                   [0U]))));
    this->__PVT__Gg = ((0xdU & (IData)(this->__PVT__Gg)) 
                       | (2U & (((((((0x3fffffeU & 
                                      ((this->__PVT__g
                                        [1U] >> 6U) 
                                       | ((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__g
                                             [1U] >> 5U)))) 
                                     | (0x3fffffeU 
                                        & (((this->__PVT__p
                                             [1U] >> 6U) 
                                            & (this->__PVT__p
                                               [1U] 
                                               >> 5U)) 
                                           & (this->__PVT__g
                                              [1U] 
                                              >> 4U)))) 
                                    | (0x3fffffeU & 
                                       ((((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__p
                                             [1U] >> 5U)) 
                                         & (this->__PVT__p
                                            [1U] >> 4U)) 
                                        & (this->__PVT__g
                                           [1U] >> 3U)))) 
                                   | (0x3fffffeU & 
                                      (((((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__p
                                             [1U] >> 5U)) 
                                         & (this->__PVT__p
                                            [1U] >> 4U)) 
                                        & (this->__PVT__p
                                           [1U] >> 3U)) 
                                       & (this->__PVT__g
                                          [1U] >> 2U)))) 
                                  | (0x3fffffeU & (
                                                   (((((this->__PVT__p
                                                        [1U] 
                                                        >> 6U) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__g
                                                      [1U] 
                                                      >> 1U)))) 
                                 | (0x3fffffeU & ((
                                                   (((((this->__PVT__p
                                                        [1U] 
                                                        >> 6U) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__p
                                                      [1U] 
                                                      >> 1U)) 
                                                  & this->__PVT__g
                                                  [1U]))) 
                                | (0x3fffffeU & (((
                                                   ((((((this->__PVT__p
                                                         [1U] 
                                                         >> 6U) 
                                                        & (this->__PVT__p
                                                           [1U] 
                                                           >> 5U)) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 1U)) 
                                                   & this->__PVT__p
                                                   [1U]) 
                                                  & (this->__PVT__p
                                                     [1U] 
                                                     << 1U)) 
                                                 & (this->__PVT__g
                                                    [1U] 
                                                    << 1U))))));
    this->__PVT__Gg = ((0xbU & (IData)(this->__PVT__Gg)) 
                       | (4U & (((((((0x7fffffcU & 
                                      ((this->__PVT__g
                                        [2U] >> 5U) 
                                       | ((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__g
                                             [2U] >> 4U)))) 
                                     | (0x7fffffcU 
                                        & (((this->__PVT__p
                                             [2U] >> 5U) 
                                            & (this->__PVT__p
                                               [2U] 
                                               >> 4U)) 
                                           & (this->__PVT__g
                                              [2U] 
                                              >> 3U)))) 
                                    | (0x7fffffcU & 
                                       ((((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__p
                                             [2U] >> 4U)) 
                                         & (this->__PVT__p
                                            [2U] >> 3U)) 
                                        & (this->__PVT__g
                                           [2U] >> 2U)))) 
                                   | (0x7fffffcU & 
                                      (((((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__p
                                             [2U] >> 4U)) 
                                         & (this->__PVT__p
                                            [2U] >> 3U)) 
                                        & (this->__PVT__p
                                           [2U] >> 2U)) 
                                       & (this->__PVT__g
                                          [2U] >> 1U)))) 
                                  | (0x7fffffcU & (
                                                   (((((this->__PVT__p
                                                        [2U] 
                                                        >> 5U) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [2U] 
                                                       >> 1U)) 
                                                   & this->__PVT__g
                                                   [2U]))) 
                                 | (0x7fffffcU & ((
                                                   (((((this->__PVT__p
                                                        [2U] 
                                                        >> 5U) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [2U] 
                                                       >> 1U)) 
                                                   & this->__PVT__p
                                                   [2U]) 
                                                  & (this->__PVT__g
                                                     [2U] 
                                                     << 1U)))) 
                                | (0x7fffffcU & (((
                                                   ((((((this->__PVT__p
                                                         [2U] 
                                                         >> 5U) 
                                                        & (this->__PVT__p
                                                           [2U] 
                                                           >> 4U)) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 3U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 2U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 1U)) 
                                                    & this->__PVT__p
                                                    [2U]) 
                                                   & (this->__PVT__p
                                                      [2U] 
                                                      << 1U)) 
                                                  & (this->__PVT__p
                                                     [2U] 
                                                     << 2U)) 
                                                 & (this->__PVT__g
                                                    [2U] 
                                                    << 2U))))));
    this->__PVT__Gg = ((7U & (IData)(this->__PVT__Gg)) 
                       | (8U & (((((((0xffffff8U & 
                                      ((this->__PVT__g
                                        [3U] >> 4U) 
                                       | ((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__g
                                             [3U] >> 3U)))) 
                                     | (0xffffff8U 
                                        & (((this->__PVT__p
                                             [3U] >> 4U) 
                                            & (this->__PVT__p
                                               [3U] 
                                               >> 3U)) 
                                           & (this->__PVT__g
                                              [3U] 
                                              >> 2U)))) 
                                    | (0xffffff8U & 
                                       ((((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__p
                                             [3U] >> 3U)) 
                                         & (this->__PVT__p
                                            [3U] >> 2U)) 
                                        & (this->__PVT__g
                                           [3U] >> 1U)))) 
                                   | (0xffffff8U & 
                                      (((((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__p
                                             [3U] >> 3U)) 
                                         & (this->__PVT__p
                                            [3U] >> 2U)) 
                                        & (this->__PVT__p
                                           [3U] >> 1U)) 
                                       & this->__PVT__g
                                       [3U]))) | (0xffffff8U 
                                                  & ((((((this->__PVT__p
                                                          [3U] 
                                                          >> 4U) 
                                                         & (this->__PVT__p
                                                            [3U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__p
                                                           [3U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 1U)) 
                                                      & this->__PVT__p
                                                      [3U]) 
                                                     & (this->__PVT__g
                                                        [3U] 
                                                        << 1U)))) 
                                 | (0xffffff8U & ((
                                                   (((((this->__PVT__p
                                                        [3U] 
                                                        >> 4U) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 3U)) 
                                                      & (this->__PVT__p
                                                         [3U] 
                                                         >> 2U)) 
                                                     & (this->__PVT__p
                                                        [3U] 
                                                        >> 1U)) 
                                                    & this->__PVT__p
                                                    [3U]) 
                                                   & (this->__PVT__p
                                                      [3U] 
                                                      << 1U)) 
                                                  & (this->__PVT__g
                                                     [3U] 
                                                     << 2U)))) 
                                | (0xffffff8U & (((
                                                   ((((((this->__PVT__p
                                                         [3U] 
                                                         >> 4U) 
                                                        & (this->__PVT__p
                                                           [3U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 2U)) 
                                                      & (this->__PVT__p
                                                         [3U] 
                                                         >> 1U)) 
                                                     & this->__PVT__p
                                                     [3U]) 
                                                    & (this->__PVT__p
                                                       [3U] 
                                                       << 1U)) 
                                                   & (this->__PVT__p
                                                      [3U] 
                                                      << 2U)) 
                                                  & (this->__PVT__p
                                                     [3U] 
                                                     << 3U)) 
                                                 & (this->__PVT__g
                                                    [3U] 
                                                    << 3U))))));
    this->__Vcellout__gen__c = ((0xeU & (IData)(this->__Vcellout__gen__c)) 
                                | (1U & (IData)(this->__PVT__Gg)));
}

VL_INLINE_OPT void emu_Adder32::_combo__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__9(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                emu_Adder32::_combo__TOP__cpu_tst__DOT__mycpu__DOT__IF__DOT__snpc_gen__9\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen__c = ((0xdU & (IData)(this->__Vcellout__gen__c)) 
                                | (2U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__Vcellout__gen__c = ((0xbU & (IData)(this->__Vcellout__gen__c)) 
                                | (4U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__Vcellout__gen__c = ((7U & (IData)(this->__Vcellout__gen__c)) 
                                | (8U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__PVT__c = ((IData)(this->__Vcellout__gen__c) 
                      << 1U);
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                    ^ (IData)(this->__PVT__c))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 8U) ^ ((IData)(this->__PVT__c) 
                               >> 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x10U) ^ ((IData)(this->__PVT__c) 
                                  >> 2U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x18U) ^ ((IData)(this->__PVT__c) 
                                  >> 3U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                    & (IData)(this->__PVT__c))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 8U) & ((IData)(this->__PVT__c) 
                               >> 1U))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x10U) & ((IData)(this->__PVT__c) 
                                  >> 2U))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x18U) & ((IData)(this->__PVT__c) 
                                  >> 3U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2 
        = (1U & (((1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                          >> 3U) & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                    >> 2U))) | (1U 
                                                & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                                     >> 3U) 
                                                    & (1U 
                                                       | (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                                          >> 2U))) 
                                                   & (2U 
                                                      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                                         >> 1U))))) 
                 | (1U & (((((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                              >> 3U) & (1U | (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                              >> 2U))) 
                            & (7U & (2U | (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                           >> 1U)))) 
                           & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC) 
                          & (IData)(this->__PVT__c)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2 
        = (1U & (((((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0xbU) & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                 >> 0xaU)) & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                              >> 9U)) 
                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 8U)) & ((IData)(this->__PVT__c) 
                                >> 1U)));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2 
        = (1U & (((((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x13U) & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                  >> 0x12U)) & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                                >> 0x11U)) 
                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x10U)) & ((IData)(this->__PVT__c) 
                                   >> 2U)));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2 
        = (1U & (((((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x1bU) & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                  >> 0x1aU)) & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                                >> 0x19U)) 
                  & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x18U)) & ((IData)(this->__PVT__c) 
                                   >> 3U)));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((4U & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC) 
                    | (0xeU & ((4U | (0xfffffffeU & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC)) 
                               & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((4U & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC) 
                    | (0xcU & ((4U | (0xfffffffcU & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC)) 
                               & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                    & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                       << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffffeU & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC) 
                    ^ ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                       << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & (((~ (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                         >> 2U)) << 2U) ^ (0xfffffffcU 
                                           & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffffff8U & vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC) 
                    ^ (0xfffffff8U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 8U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                               << 1U))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 8U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                               << 1U))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 8U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                               << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                  >> 8U)) ^ ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                             << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                  >> 8U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                  >> 8U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x10U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x10U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x10U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                >> 0x10U)) ^ ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                >> 0x10U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                >> 0x10U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x18U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x18U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x18U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                  << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                              >> 0x18U)) ^ ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                              >> 0x18U)) ^ (0xfffffffcU 
                                            & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xf8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                              >> 0x18U)) ^ (0xfffffff8U 
                                            & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 4U) ^ (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
               >> 4U) & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0xcU) ^ (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
               >> 0xcU) & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x14U) ^ (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
               >> 0x14U) & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x1cU) ^ (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
               >> 0x1cU) & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)));
    this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 4U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                               << 1U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 4U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                               << 1U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 4U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                               << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                   >> 4U)) ^ ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                   >> 4U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffffff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                   >> 4U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0xcU) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                 << 1U))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0xcU) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                 << 1U))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0xcU) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                 << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                 >> 0xcU)) ^ ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                 >> 0xcU)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                                 >> 0xcU)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x14U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x14U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x14U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                  << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                               >> 0x14U)) ^ ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                             << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                               >> 0x14U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                               >> 0x14U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x1cU) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x1cU) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                  << 1U))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                     >> 0x1cU) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                  << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                             >> 0x1cU)) ^ ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                           << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                             >> 0x1cU)) ^ (0xfffffffcU 
                                           & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__IF__DOT__PC 
                           >> 0x1cU)) ^ (0xfffffff8U 
                                         & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            << 1U)))));
    this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__PVT__ff[0U] = this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    this->__PVT__ff[1U] = this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    this->__PVT__ff[2U] = this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    this->__PVT__ff[3U] = this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
}

VL_INLINE_OPT void emu_Adder32::_sequent__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__5(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                emu_Adder32::_sequent__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__5\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 8U));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 8U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x18U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x18U));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 4U));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 4U));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0xcU));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0xcU));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x14U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x14U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x1cU));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x1cU));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 8U));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 8U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x18U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                   >> 0x18U));
    this->__PVT__g[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp));
    this->__PVT__g[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 8U));
    this->__PVT__g[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 0x10U));
    this->__PVT__g[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 0x18U));
    this->__PVT__p[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp));
    this->__PVT__p[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 8U));
    this->__PVT__p[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 0x10U));
    this->__PVT__p[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 0x18U));
    this->__PVT__Pg = ((0xeU & (IData)(this->__PVT__Pg)) 
                       | ((0xffU == this->__PVT__p[0U])
                           ? 1U : 0U));
    this->__PVT__Pg = ((0xdU & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [1U]) ? 1U : 0U) << 1U));
    this->__PVT__Pg = ((0xbU & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [2U]) ? 1U : 0U) << 2U));
    this->__PVT__Pg = ((7U & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [3U]) ? 1U : 0U) << 3U));
    this->__PVT__Gg = ((0xeU & (IData)(this->__PVT__Gg)) 
                       | (1U & ((((((((this->__PVT__g
                                       [0U] >> 7U) 
                                      | ((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__g
                                            [0U] >> 6U))) 
                                     | (((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__g
                                           [0U] >> 5U))) 
                                    | ((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__g
                                          [0U] >> 4U))) 
                                   | (((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__g
                                         [0U] >> 3U))) 
                                  | ((((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__p
                                         [0U] >> 3U)) 
                                     & (this->__PVT__g
                                        [0U] >> 2U))) 
                                 | (((((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__p
                                         [0U] >> 3U)) 
                                     & (this->__PVT__p
                                        [0U] >> 2U)) 
                                    & (this->__PVT__g
                                       [0U] >> 1U))) 
                                | (((((((((this->__PVT__p
                                           [0U] >> 7U) 
                                          & (this->__PVT__p
                                             [0U] >> 6U)) 
                                         & (this->__PVT__p
                                            [0U] >> 5U)) 
                                        & (this->__PVT__p
                                           [0U] >> 4U)) 
                                       & (this->__PVT__p
                                          [0U] >> 3U)) 
                                      & (this->__PVT__p
                                         [0U] >> 2U)) 
                                     & (this->__PVT__p
                                        [0U] >> 1U)) 
                                    & this->__PVT__p
                                    [0U]) & this->__PVT__g
                                   [0U]))));
    this->__PVT__Gg = ((0xdU & (IData)(this->__PVT__Gg)) 
                       | (2U & (((((((0x3fffffeU & 
                                      ((this->__PVT__g
                                        [1U] >> 6U) 
                                       | ((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__g
                                             [1U] >> 5U)))) 
                                     | (0x3fffffeU 
                                        & (((this->__PVT__p
                                             [1U] >> 6U) 
                                            & (this->__PVT__p
                                               [1U] 
                                               >> 5U)) 
                                           & (this->__PVT__g
                                              [1U] 
                                              >> 4U)))) 
                                    | (0x3fffffeU & 
                                       ((((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__p
                                             [1U] >> 5U)) 
                                         & (this->__PVT__p
                                            [1U] >> 4U)) 
                                        & (this->__PVT__g
                                           [1U] >> 3U)))) 
                                   | (0x3fffffeU & 
                                      (((((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__p
                                             [1U] >> 5U)) 
                                         & (this->__PVT__p
                                            [1U] >> 4U)) 
                                        & (this->__PVT__p
                                           [1U] >> 3U)) 
                                       & (this->__PVT__g
                                          [1U] >> 2U)))) 
                                  | (0x3fffffeU & (
                                                   (((((this->__PVT__p
                                                        [1U] 
                                                        >> 6U) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__g
                                                      [1U] 
                                                      >> 1U)))) 
                                 | (0x3fffffeU & ((
                                                   (((((this->__PVT__p
                                                        [1U] 
                                                        >> 6U) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__p
                                                      [1U] 
                                                      >> 1U)) 
                                                  & this->__PVT__g
                                                  [1U]))) 
                                | (0x3fffffeU & (((
                                                   ((((((this->__PVT__p
                                                         [1U] 
                                                         >> 6U) 
                                                        & (this->__PVT__p
                                                           [1U] 
                                                           >> 5U)) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 1U)) 
                                                   & this->__PVT__p
                                                   [1U]) 
                                                  & (this->__PVT__p
                                                     [1U] 
                                                     << 1U)) 
                                                 & (this->__PVT__g
                                                    [1U] 
                                                    << 1U))))));
    this->__PVT__Gg = ((0xbU & (IData)(this->__PVT__Gg)) 
                       | (4U & (((((((0x7fffffcU & 
                                      ((this->__PVT__g
                                        [2U] >> 5U) 
                                       | ((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__g
                                             [2U] >> 4U)))) 
                                     | (0x7fffffcU 
                                        & (((this->__PVT__p
                                             [2U] >> 5U) 
                                            & (this->__PVT__p
                                               [2U] 
                                               >> 4U)) 
                                           & (this->__PVT__g
                                              [2U] 
                                              >> 3U)))) 
                                    | (0x7fffffcU & 
                                       ((((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__p
                                             [2U] >> 4U)) 
                                         & (this->__PVT__p
                                            [2U] >> 3U)) 
                                        & (this->__PVT__g
                                           [2U] >> 2U)))) 
                                   | (0x7fffffcU & 
                                      (((((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__p
                                             [2U] >> 4U)) 
                                         & (this->__PVT__p
                                            [2U] >> 3U)) 
                                        & (this->__PVT__p
                                           [2U] >> 2U)) 
                                       & (this->__PVT__g
                                          [2U] >> 1U)))) 
                                  | (0x7fffffcU & (
                                                   (((((this->__PVT__p
                                                        [2U] 
                                                        >> 5U) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [2U] 
                                                       >> 1U)) 
                                                   & this->__PVT__g
                                                   [2U]))) 
                                 | (0x7fffffcU & ((
                                                   (((((this->__PVT__p
                                                        [2U] 
                                                        >> 5U) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [2U] 
                                                       >> 1U)) 
                                                   & this->__PVT__p
                                                   [2U]) 
                                                  & (this->__PVT__g
                                                     [2U] 
                                                     << 1U)))) 
                                | (0x7fffffcU & (((
                                                   ((((((this->__PVT__p
                                                         [2U] 
                                                         >> 5U) 
                                                        & (this->__PVT__p
                                                           [2U] 
                                                           >> 4U)) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 3U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 2U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 1U)) 
                                                    & this->__PVT__p
                                                    [2U]) 
                                                   & (this->__PVT__p
                                                      [2U] 
                                                      << 1U)) 
                                                  & (this->__PVT__p
                                                     [2U] 
                                                     << 2U)) 
                                                 & (this->__PVT__g
                                                    [2U] 
                                                    << 2U))))));
    this->__PVT__Gg = ((7U & (IData)(this->__PVT__Gg)) 
                       | (8U & (((((((0xffffff8U & 
                                      ((this->__PVT__g
                                        [3U] >> 4U) 
                                       | ((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__g
                                             [3U] >> 3U)))) 
                                     | (0xffffff8U 
                                        & (((this->__PVT__p
                                             [3U] >> 4U) 
                                            & (this->__PVT__p
                                               [3U] 
                                               >> 3U)) 
                                           & (this->__PVT__g
                                              [3U] 
                                              >> 2U)))) 
                                    | (0xffffff8U & 
                                       ((((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__p
                                             [3U] >> 3U)) 
                                         & (this->__PVT__p
                                            [3U] >> 2U)) 
                                        & (this->__PVT__g
                                           [3U] >> 1U)))) 
                                   | (0xffffff8U & 
                                      (((((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__p
                                             [3U] >> 3U)) 
                                         & (this->__PVT__p
                                            [3U] >> 2U)) 
                                        & (this->__PVT__p
                                           [3U] >> 1U)) 
                                       & this->__PVT__g
                                       [3U]))) | (0xffffff8U 
                                                  & ((((((this->__PVT__p
                                                          [3U] 
                                                          >> 4U) 
                                                         & (this->__PVT__p
                                                            [3U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__p
                                                           [3U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 1U)) 
                                                      & this->__PVT__p
                                                      [3U]) 
                                                     & (this->__PVT__g
                                                        [3U] 
                                                        << 1U)))) 
                                 | (0xffffff8U & ((
                                                   (((((this->__PVT__p
                                                        [3U] 
                                                        >> 4U) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 3U)) 
                                                      & (this->__PVT__p
                                                         [3U] 
                                                         >> 2U)) 
                                                     & (this->__PVT__p
                                                        [3U] 
                                                        >> 1U)) 
                                                    & this->__PVT__p
                                                    [3U]) 
                                                   & (this->__PVT__p
                                                      [3U] 
                                                      << 1U)) 
                                                  & (this->__PVT__g
                                                     [3U] 
                                                     << 2U)))) 
                                | (0xffffff8U & (((
                                                   ((((((this->__PVT__p
                                                         [3U] 
                                                         >> 4U) 
                                                        & (this->__PVT__p
                                                           [3U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 2U)) 
                                                      & (this->__PVT__p
                                                         [3U] 
                                                         >> 1U)) 
                                                     & this->__PVT__p
                                                     [3U]) 
                                                    & (this->__PVT__p
                                                       [3U] 
                                                       << 1U)) 
                                                   & (this->__PVT__p
                                                      [3U] 
                                                      << 2U)) 
                                                  & (this->__PVT__p
                                                     [3U] 
                                                     << 3U)) 
                                                 & (this->__PVT__g
                                                    [3U] 
                                                    << 3U))))));
    this->__Vcellout__gen__c = ((0xeU & (IData)(this->__Vcellout__gen__c)) 
                                | (1U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((0U 
                                                == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
                                                ? 0U
                                                : 1U)))));
}

VL_INLINE_OPT void emu_Adder32::_combo__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__8(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                emu_Adder32::_combo__TOP__cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__adder32__8\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen__c = ((0xdU & (IData)(this->__Vcellout__gen__c)) 
                                | (2U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__Vcellout__gen__c = ((0xbU & (IData)(this->__Vcellout__gen__c)) 
                                | (4U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__Vcellout__gen__c = ((7U & (IData)(this->__Vcellout__gen__c)) 
                                | (8U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__PVT__c = (((IData)(this->__Vcellout__gen__c) 
                       << 1U) | ((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__reg_ALUctr))
                                  ? 0U : 1U));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                     ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                    ^ (IData)(this->__PVT__c))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                     >> 8U) ^ ((IData)(this->__PVT__c) 
                               >> 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                     >> 0x10U) ^ ((IData)(this->__PVT__c) 
                                  >> 2U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                     >> 0x18U) ^ ((IData)(this->__PVT__c) 
                                  >> 3U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & (IData)(this->__PVT__c)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__c) >> 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__c) >> 2U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__c) >> 3U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p)) 
                    & (IData)(this->__PVT__c))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__c) >> 1U))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__c) >> 2U))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__c) >> 3U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp)) 
                    ^ ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                       << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp)) 
                    ^ (0xfffffffcU & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffffff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp)) 
                    ^ (0xfffffff8U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                  >> 8U)) ^ ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                             << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                  >> 8U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                  >> 8U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                >> 0x10U)) ^ ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                >> 0x10U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                >> 0x10U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                              >> 0x18U)) ^ ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                              >> 0x18U)) ^ (0xfffffffcU 
                                            & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xf8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                              >> 0x18U)) ^ (0xfffffff8U 
                                            & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                     >> 4U) ^ (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                     >> 0xcU) ^ (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                     >> 0x14U) ^ (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                     >> 0x1cU) ^ (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
    this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__cout_temp = ((0xeU & (IData)(this->__PVT__cout_temp)) 
                              | (1U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                       >> 3U)));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 4U)) ^ ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 4U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                   >> 4U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__cout_temp = ((0xdU & (IData)(this->__PVT__cout_temp)) 
                              | (2U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                       >> 2U)));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                 >> 0xcU)) ^ ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                 >> 0xcU)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                                 >> 0xcU)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__cout_temp = ((0xbU & (IData)(this->__PVT__cout_temp)) 
                              | (4U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                       >> 1U)));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                               >> 0x14U)) ^ ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                             << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                               >> 0x14U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                               >> 0x14U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__cout_temp = ((7U & (IData)(this->__PVT__cout_temp)) 
                              | (8U & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                              ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                             >> 0x1cU)) ^ ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                           << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                              ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                             >> 0x1cU)) ^ (0xfffffffcU 
                                           & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALUa 
                            ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__EX__DOT__ALU__DOT__adder__DOT__tmp) 
                           >> 0x1cU)) ^ (0xfffffff8U 
                                         & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            << 1U)))));
    this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__PVT__ff[0U] = this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    this->__PVT__ff[1U] = this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    this->__PVT__ff[2U] = this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    this->__PVT__ff[3U] = this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
    this->result = ((this->__PVT__ff[3U] << 0x18U) 
                    | ((this->__PVT__ff[2U] << 0x10U) 
                       | ((this->__PVT__ff[1U] << 8U) 
                          | this->__PVT__ff[0U])));
}

VL_INLINE_OPT void emu_Adder32::_sequent__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__4(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                emu_Adder32::_sequent__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__4\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 4U));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 4U));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0xcU));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0xcU));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x14U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x14U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x1cU));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x1cU));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__g[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db));
    this->__PVT__g[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 8U));
    this->__PVT__g[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 0x10U));
    this->__PVT__g[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 0x18U));
    this->__PVT__p[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db));
    this->__PVT__p[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 8U));
    this->__PVT__p[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 0x10U));
    this->__PVT__p[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 0x18U));
    this->__PVT__Pg = ((0xeU & (IData)(this->__PVT__Pg)) 
                       | ((0xffU == this->__PVT__p[0U])
                           ? 1U : 0U));
    this->__PVT__Pg = ((0xdU & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [1U]) ? 1U : 0U) << 1U));
    this->__PVT__Pg = ((0xbU & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [2U]) ? 1U : 0U) << 2U));
    this->__PVT__Pg = ((7U & (IData)(this->__PVT__Pg)) 
                       | (((0xffU == this->__PVT__p
                            [3U]) ? 1U : 0U) << 3U));
    this->__PVT__Gg = ((0xeU & (IData)(this->__PVT__Gg)) 
                       | (1U & ((((((((this->__PVT__g
                                       [0U] >> 7U) 
                                      | ((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__g
                                            [0U] >> 6U))) 
                                     | (((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__g
                                           [0U] >> 5U))) 
                                    | ((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__g
                                          [0U] >> 4U))) 
                                   | (((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__g
                                         [0U] >> 3U))) 
                                  | ((((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__p
                                         [0U] >> 3U)) 
                                     & (this->__PVT__g
                                        [0U] >> 2U))) 
                                 | (((((((this->__PVT__p
                                          [0U] >> 7U) 
                                         & (this->__PVT__p
                                            [0U] >> 6U)) 
                                        & (this->__PVT__p
                                           [0U] >> 5U)) 
                                       & (this->__PVT__p
                                          [0U] >> 4U)) 
                                      & (this->__PVT__p
                                         [0U] >> 3U)) 
                                     & (this->__PVT__p
                                        [0U] >> 2U)) 
                                    & (this->__PVT__g
                                       [0U] >> 1U))) 
                                | (((((((((this->__PVT__p
                                           [0U] >> 7U) 
                                          & (this->__PVT__p
                                             [0U] >> 6U)) 
                                         & (this->__PVT__p
                                            [0U] >> 5U)) 
                                        & (this->__PVT__p
                                           [0U] >> 4U)) 
                                       & (this->__PVT__p
                                          [0U] >> 3U)) 
                                      & (this->__PVT__p
                                         [0U] >> 2U)) 
                                     & (this->__PVT__p
                                        [0U] >> 1U)) 
                                    & this->__PVT__p
                                    [0U]) & this->__PVT__g
                                   [0U]))));
    this->__PVT__Gg = ((0xdU & (IData)(this->__PVT__Gg)) 
                       | (2U & (((((((0x3fffffeU & 
                                      ((this->__PVT__g
                                        [1U] >> 6U) 
                                       | ((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__g
                                             [1U] >> 5U)))) 
                                     | (0x3fffffeU 
                                        & (((this->__PVT__p
                                             [1U] >> 6U) 
                                            & (this->__PVT__p
                                               [1U] 
                                               >> 5U)) 
                                           & (this->__PVT__g
                                              [1U] 
                                              >> 4U)))) 
                                    | (0x3fffffeU & 
                                       ((((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__p
                                             [1U] >> 5U)) 
                                         & (this->__PVT__p
                                            [1U] >> 4U)) 
                                        & (this->__PVT__g
                                           [1U] >> 3U)))) 
                                   | (0x3fffffeU & 
                                      (((((this->__PVT__p
                                           [1U] >> 6U) 
                                          & (this->__PVT__p
                                             [1U] >> 5U)) 
                                         & (this->__PVT__p
                                            [1U] >> 4U)) 
                                        & (this->__PVT__p
                                           [1U] >> 3U)) 
                                       & (this->__PVT__g
                                          [1U] >> 2U)))) 
                                  | (0x3fffffeU & (
                                                   (((((this->__PVT__p
                                                        [1U] 
                                                        >> 6U) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__g
                                                      [1U] 
                                                      >> 1U)))) 
                                 | (0x3fffffeU & ((
                                                   (((((this->__PVT__p
                                                        [1U] 
                                                        >> 6U) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__p
                                                      [1U] 
                                                      >> 1U)) 
                                                  & this->__PVT__g
                                                  [1U]))) 
                                | (0x3fffffeU & (((
                                                   ((((((this->__PVT__p
                                                         [1U] 
                                                         >> 6U) 
                                                        & (this->__PVT__p
                                                           [1U] 
                                                           >> 5U)) 
                                                       & (this->__PVT__p
                                                          [1U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [1U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [1U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [1U] 
                                                       >> 1U)) 
                                                   & this->__PVT__p
                                                   [1U]) 
                                                  & (this->__PVT__p
                                                     [1U] 
                                                     << 1U)) 
                                                 & (this->__PVT__g
                                                    [1U] 
                                                    << 1U))))));
    this->__PVT__Gg = ((0xbU & (IData)(this->__PVT__Gg)) 
                       | (4U & (((((((0x7fffffcU & 
                                      ((this->__PVT__g
                                        [2U] >> 5U) 
                                       | ((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__g
                                             [2U] >> 4U)))) 
                                     | (0x7fffffcU 
                                        & (((this->__PVT__p
                                             [2U] >> 5U) 
                                            & (this->__PVT__p
                                               [2U] 
                                               >> 4U)) 
                                           & (this->__PVT__g
                                              [2U] 
                                              >> 3U)))) 
                                    | (0x7fffffcU & 
                                       ((((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__p
                                             [2U] >> 4U)) 
                                         & (this->__PVT__p
                                            [2U] >> 3U)) 
                                        & (this->__PVT__g
                                           [2U] >> 2U)))) 
                                   | (0x7fffffcU & 
                                      (((((this->__PVT__p
                                           [2U] >> 5U) 
                                          & (this->__PVT__p
                                             [2U] >> 4U)) 
                                         & (this->__PVT__p
                                            [2U] >> 3U)) 
                                        & (this->__PVT__p
                                           [2U] >> 2U)) 
                                       & (this->__PVT__g
                                          [2U] >> 1U)))) 
                                  | (0x7fffffcU & (
                                                   (((((this->__PVT__p
                                                        [2U] 
                                                        >> 5U) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [2U] 
                                                       >> 1U)) 
                                                   & this->__PVT__g
                                                   [2U]))) 
                                 | (0x7fffffcU & ((
                                                   (((((this->__PVT__p
                                                        [2U] 
                                                        >> 5U) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 4U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 3U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 2U)) 
                                                    & (this->__PVT__p
                                                       [2U] 
                                                       >> 1U)) 
                                                   & this->__PVT__p
                                                   [2U]) 
                                                  & (this->__PVT__g
                                                     [2U] 
                                                     << 1U)))) 
                                | (0x7fffffcU & (((
                                                   ((((((this->__PVT__p
                                                         [2U] 
                                                         >> 5U) 
                                                        & (this->__PVT__p
                                                           [2U] 
                                                           >> 4U)) 
                                                       & (this->__PVT__p
                                                          [2U] 
                                                          >> 3U)) 
                                                      & (this->__PVT__p
                                                         [2U] 
                                                         >> 2U)) 
                                                     & (this->__PVT__p
                                                        [2U] 
                                                        >> 1U)) 
                                                    & this->__PVT__p
                                                    [2U]) 
                                                   & (this->__PVT__p
                                                      [2U] 
                                                      << 1U)) 
                                                  & (this->__PVT__p
                                                     [2U] 
                                                     << 2U)) 
                                                 & (this->__PVT__g
                                                    [2U] 
                                                    << 2U))))));
    this->__PVT__Gg = ((7U & (IData)(this->__PVT__Gg)) 
                       | (8U & (((((((0xffffff8U & 
                                      ((this->__PVT__g
                                        [3U] >> 4U) 
                                       | ((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__g
                                             [3U] >> 3U)))) 
                                     | (0xffffff8U 
                                        & (((this->__PVT__p
                                             [3U] >> 4U) 
                                            & (this->__PVT__p
                                               [3U] 
                                               >> 3U)) 
                                           & (this->__PVT__g
                                              [3U] 
                                              >> 2U)))) 
                                    | (0xffffff8U & 
                                       ((((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__p
                                             [3U] >> 3U)) 
                                         & (this->__PVT__p
                                            [3U] >> 2U)) 
                                        & (this->__PVT__g
                                           [3U] >> 1U)))) 
                                   | (0xffffff8U & 
                                      (((((this->__PVT__p
                                           [3U] >> 4U) 
                                          & (this->__PVT__p
                                             [3U] >> 3U)) 
                                         & (this->__PVT__p
                                            [3U] >> 2U)) 
                                        & (this->__PVT__p
                                           [3U] >> 1U)) 
                                       & this->__PVT__g
                                       [3U]))) | (0xffffff8U 
                                                  & ((((((this->__PVT__p
                                                          [3U] 
                                                          >> 4U) 
                                                         & (this->__PVT__p
                                                            [3U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__p
                                                           [3U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 1U)) 
                                                      & this->__PVT__p
                                                      [3U]) 
                                                     & (this->__PVT__g
                                                        [3U] 
                                                        << 1U)))) 
                                 | (0xffffff8U & ((
                                                   (((((this->__PVT__p
                                                        [3U] 
                                                        >> 4U) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 3U)) 
                                                      & (this->__PVT__p
                                                         [3U] 
                                                         >> 2U)) 
                                                     & (this->__PVT__p
                                                        [3U] 
                                                        >> 1U)) 
                                                    & this->__PVT__p
                                                    [3U]) 
                                                   & (this->__PVT__p
                                                      [3U] 
                                                      << 1U)) 
                                                  & (this->__PVT__g
                                                     [3U] 
                                                     << 2U)))) 
                                | (0xffffff8U & (((
                                                   ((((((this->__PVT__p
                                                         [3U] 
                                                         >> 4U) 
                                                        & (this->__PVT__p
                                                           [3U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__p
                                                          [3U] 
                                                          >> 2U)) 
                                                      & (this->__PVT__p
                                                         [3U] 
                                                         >> 1U)) 
                                                     & this->__PVT__p
                                                     [3U]) 
                                                    & (this->__PVT__p
                                                       [3U] 
                                                       << 1U)) 
                                                   & (this->__PVT__p
                                                      [3U] 
                                                      << 2U)) 
                                                  & (this->__PVT__p
                                                     [3U] 
                                                     << 3U)) 
                                                 & (this->__PVT__g
                                                    [3U] 
                                                    << 3U))))));
    this->__Vcellout__gen__c = ((0xeU & (IData)(this->__Vcellout__gen__c)) 
                                | (1U & (IData)(this->__PVT__Gg)));
}

VL_INLINE_OPT void emu_Adder32::_combo__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__7(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                emu_Adder32::_combo__TOP__cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__adder_jump__DOT__adder32__7\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vcellout__gen__c = ((0xdU & (IData)(this->__Vcellout__gen__c)) 
                                | (2U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__Vcellout__gen__c = ((0xbU & (IData)(this->__Vcellout__gen__c)) 
                                | (4U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__Vcellout__gen__c = ((7U & (IData)(this->__Vcellout__gen__c)) 
                                | (8U & ((IData)(this->__PVT__Gg) 
                                         | ((IData)(this->__PVT__Pg) 
                                            & ((IData)(this->__Vcellout__gen__c) 
                                               << 1U)))));
    this->__PVT__c = ((IData)(this->__Vcellout__gen__c) 
                      << 1U);
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                     ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                    ^ (IData)(this->__PVT__c))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                     >> 8U) ^ ((IData)(this->__PVT__c) 
                               >> 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                     >> 0x10U) ^ ((IData)(this->__PVT__c) 
                                  >> 2U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                     >> 0x18U) ^ ((IData)(this->__PVT__c) 
                                  >> 3U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & (IData)(this->__PVT__c)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__c) >> 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__c) >> 2U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__c) >> 3U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p)) 
                    & (IData)(this->__PVT__c))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__c) >> 1U))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__c) >> 2U))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__c) >> 3U))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db)) 
                    ^ ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                       << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db)) 
                    ^ (0xfffffffcU & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffffff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db)) 
                    ^ (0xfffffff8U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                  >> 8U)) ^ ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                             << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                  >> 8U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                  >> 8U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                >> 0x10U)) ^ ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                >> 0x10U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                >> 0x10U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                              >> 0x18U)) ^ ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                              >> 0x18U)) ^ (0xfffffffcU 
                                            & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xf8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                              >> 0x18U)) ^ (0xfffffff8U 
                                            & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                     >> 4U) ^ (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                     >> 0xcU) ^ (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                     >> 0x14U) ^ (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                     >> 0x1cU) ^ (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
    this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 4U)) ^ ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 4U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                   >> 4U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                 >> 0xcU)) ^ ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                 >> 0xcU)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                                 >> 0xcU)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                               >> 0x14U)) ^ ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                             << 1U))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                               >> 0x14U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                               >> 0x14U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                              ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                             >> 0x1cU)) ^ ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                           << 1U))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                              ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                             >> 0x1cU)) ^ (0xfffffffcU 
                                           & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__da 
                            ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__M__DOT__NextAddr__DOT__db) 
                           >> 0x1cU)) ^ (0xfffffff8U 
                                         & ((IData)(this->__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            << 1U)))));
    this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | ((IData)(this->genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__PVT__ff[0U] = this->__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    this->__PVT__ff[1U] = this->__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    this->__PVT__ff[2U] = this->__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    this->__PVT__ff[3U] = this->__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
    this->result = ((this->__PVT__ff[3U] << 0x18U) 
                    | ((this->__PVT__ff[2U] << 0x10U) 
                       | ((this->__PVT__ff[1U] << 8U) 
                          | this->__PVT__ff[0U])));
}
