// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See emu.h for the primary calling header

#include "emu_Adder32_p.h"
#include "emu__Syms.h"

//==========

VL_INLINE_OPT void emu_Adder32_p::_settle__TOP__cpu_tst__DOT__mycpu__DOT__ALU_RV32__DOT__adder__1(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            emu_Adder32_p::_settle__TOP__cpu_tst__DOT__mycpu__DOT__ALU_RV32__DOT__adder__1\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__tmp = (((0U == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUctr))
                          ? 0U : 1U) ? (~ vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUb)
                         : vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUb);
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                   | this->__PVT__tmp));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                   & this->__PVT__tmp));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 0x18U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 0x18U));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 4U));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 4U));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 0xcU));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 0xcU));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 0x14U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 0x14U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 0x1cU));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 0x1cU));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                   | this->__PVT__tmp));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                   & this->__PVT__tmp));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    | this->__PVT__tmp) >> 0x18U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                    & this->__PVT__tmp) >> 0x18U));
    this->__PVT__adder32__DOT__g[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                 & this->__PVT__tmp));
    this->__PVT__adder32__DOT__g[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                  & this->__PVT__tmp) 
                                                 >> 8U));
    this->__PVT__adder32__DOT__g[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                  & this->__PVT__tmp) 
                                                 >> 0x10U));
    this->__PVT__adder32__DOT__g[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                  & this->__PVT__tmp) 
                                                 >> 0x18U));
    this->__PVT__adder32__DOT__p[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                 | this->__PVT__tmp));
    this->__PVT__adder32__DOT__p[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                  | this->__PVT__tmp) 
                                                 >> 8U));
    this->__PVT__adder32__DOT__p[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                  | this->__PVT__tmp) 
                                                 >> 0x10U));
    this->__PVT__adder32__DOT__p[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                                  | this->__PVT__tmp) 
                                                 >> 0x18U));
    this->__PVT__adder32__DOT__Pg = ((0xeU & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | ((0xffU == this->__PVT__adder32__DOT__p
                                         [0U]) ? 1U
                                         : 0U));
    this->__PVT__adder32__DOT__Pg = ((0xdU & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | (((0xffU == 
                                          this->__PVT__adder32__DOT__p
                                          [1U]) ? 1U
                                          : 0U) << 1U));
    this->__PVT__adder32__DOT__Pg = ((0xbU & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | (((0xffU == 
                                          this->__PVT__adder32__DOT__p
                                          [2U]) ? 1U
                                          : 0U) << 2U));
    this->__PVT__adder32__DOT__Pg = ((7U & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | (((0xffU == 
                                          this->__PVT__adder32__DOT__p
                                          [3U]) ? 1U
                                          : 0U) << 3U));
    this->__PVT__adder32__DOT__Gg = ((0xeU & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (1U & ((((((
                                                   ((this->__PVT__adder32__DOT__g
                                                     [0U] 
                                                     >> 7U) 
                                                    | ((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__g
                                                          [0U] 
                                                          >> 6U))) 
                                                   | (((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__g
                                                         [0U] 
                                                         >> 5U))) 
                                                  | ((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__g
                                                        [0U] 
                                                        >> 4U))) 
                                                 | (((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 4U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [0U] 
                                                       >> 3U))) 
                                                | ((((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 4U)) 
                                                    & (this->__PVT__adder32__DOT__p
                                                       [0U] 
                                                       >> 3U)) 
                                                   & (this->__PVT__adder32__DOT__g
                                                      [0U] 
                                                      >> 2U))) 
                                               | (((((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 4U)) 
                                                    & (this->__PVT__adder32__DOT__p
                                                       [0U] 
                                                       >> 3U)) 
                                                   & (this->__PVT__adder32__DOT__p
                                                      [0U] 
                                                      >> 2U)) 
                                                  & (this->__PVT__adder32__DOT__g
                                                     [0U] 
                                                     >> 1U))) 
                                              | (((((((((this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 7U) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [0U] 
                                                           >> 6U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__adder32__DOT__p
                                                       [0U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__adder32__DOT__p
                                                      [0U] 
                                                      >> 1U)) 
                                                  & this->__PVT__adder32__DOT__p
                                                  [0U]) 
                                                 & this->__PVT__adder32__DOT__g
                                                 [0U]))));
    this->__PVT__adder32__DOT__Gg = ((0xdU & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (2U & ((((((
                                                   (0x3fffffeU 
                                                    & ((this->__PVT__adder32__DOT__g
                                                        [1U] 
                                                        >> 6U) 
                                                       | ((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__g
                                                             [1U] 
                                                             >> 5U)))) 
                                                   | (0x3fffffeU 
                                                      & (((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__g
                                                            [1U] 
                                                            >> 4U)))) 
                                                  | (0x3fffffeU 
                                                     & ((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__g
                                                           [1U] 
                                                           >> 3U)))) 
                                                 | (0x3fffffeU 
                                                    & (((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__adder32__DOT__g
                                                          [1U] 
                                                          >> 2U)))) 
                                                | (0x3fffffeU 
                                                   & ((((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [1U] 
                                                          >> 2U)) 
                                                      & (this->__PVT__adder32__DOT__g
                                                         [1U] 
                                                         >> 1U)))) 
                                               | (0x3fffffeU 
                                                  & (((((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [1U] 
                                                          >> 2U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [1U] 
                                                         >> 1U)) 
                                                     & this->__PVT__adder32__DOT__g
                                                     [1U]))) 
                                              | (0x3fffffeU 
                                                 & (((((((((this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 6U) 
                                                           & (this->__PVT__adder32__DOT__p
                                                              [1U] 
                                                              >> 5U)) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [1U] 
                                                          >> 1U)) 
                                                      & this->__PVT__adder32__DOT__p
                                                      [1U]) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [1U] 
                                                        << 1U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [1U] 
                                                       << 1U))))));
    this->__PVT__adder32__DOT__Gg = ((0xbU & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (4U & ((((((
                                                   (0x7fffffcU 
                                                    & ((this->__PVT__adder32__DOT__g
                                                        [2U] 
                                                        >> 5U) 
                                                       | ((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__g
                                                             [2U] 
                                                             >> 4U)))) 
                                                   | (0x7fffffcU 
                                                      & (((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__g
                                                            [2U] 
                                                            >> 3U)))) 
                                                  | (0x7fffffcU 
                                                     & ((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__g
                                                           [2U] 
                                                           >> 2U)))) 
                                                 | (0x7fffffcU 
                                                    & (((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__g
                                                          [2U] 
                                                          >> 1U)))) 
                                                | (0x7fffffcU 
                                                   & ((((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [2U] 
                                                          >> 1U)) 
                                                      & this->__PVT__adder32__DOT__g
                                                      [2U]))) 
                                               | (0x7fffffcU 
                                                  & (((((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [2U] 
                                                          >> 1U)) 
                                                      & this->__PVT__adder32__DOT__p
                                                      [2U]) 
                                                     & (this->__PVT__adder32__DOT__g
                                                        [2U] 
                                                        << 1U)))) 
                                              | (0x7fffffcU 
                                                 & (((((((((this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 5U) 
                                                           & (this->__PVT__adder32__DOT__p
                                                              [2U] 
                                                              >> 4U)) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__p
                                                       [2U]) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [2U] 
                                                         << 1U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [2U] 
                                                        << 2U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [2U] 
                                                       << 2U))))));
    this->__PVT__adder32__DOT__Gg = ((7U & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (8U & ((((((
                                                   (0xffffff8U 
                                                    & ((this->__PVT__adder32__DOT__g
                                                        [3U] 
                                                        >> 4U) 
                                                       | ((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__g
                                                             [3U] 
                                                             >> 3U)))) 
                                                   | (0xffffff8U 
                                                      & (((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__g
                                                            [3U] 
                                                            >> 2U)))) 
                                                  | (0xffffff8U 
                                                     & ((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__g
                                                           [3U] 
                                                           >> 1U)))) 
                                                 | (0xffffff8U 
                                                    & (((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__g
                                                       [3U]))) 
                                                | (0xffffff8U 
                                                   & ((((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__p
                                                       [3U]) 
                                                      & (this->__PVT__adder32__DOT__g
                                                         [3U] 
                                                         << 1U)))) 
                                               | (0xffffff8U 
                                                  & (((((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__p
                                                       [3U]) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [3U] 
                                                         << 1U)) 
                                                     & (this->__PVT__adder32__DOT__g
                                                        [3U] 
                                                        << 2U)))) 
                                              | (0xffffff8U 
                                                 & (((((((((this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 4U) 
                                                           & (this->__PVT__adder32__DOT__p
                                                              [3U] 
                                                              >> 3U)) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 2U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 1U)) 
                                                        & this->__PVT__adder32__DOT__p
                                                        [3U]) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [3U] 
                                                          << 1U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [3U] 
                                                         << 2U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [3U] 
                                                        << 3U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [3U] 
                                                       << 3U))))));
    this->adder32__DOT____Vcellout__gen__c = ((0xeU 
                                               & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (1U 
                                                 & ((IData)(this->__PVT__adder32__DOT__Gg) 
                                                    | ((IData)(this->__PVT__adder32__DOT__Pg) 
                                                       & ((0U 
                                                           == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUctr))
                                                           ? 0U
                                                           : 1U)))));
    this->adder32__DOT____Vcellout__gen__c = ((0xdU 
                                               & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (2U 
                                                 & ((IData)(this->__PVT__adder32__DOT__Gg) 
                                                    | ((IData)(this->__PVT__adder32__DOT__Pg) 
                                                       & ((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                                          << 1U)))));
    this->adder32__DOT____Vcellout__gen__c = ((0xbU 
                                               & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (4U 
                                                 & ((IData)(this->__PVT__adder32__DOT__Gg) 
                                                    | ((IData)(this->__PVT__adder32__DOT__Pg) 
                                                       & ((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                                          << 1U)))));
    this->adder32__DOT____Vcellout__gen__c = ((7U & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (8U 
                                                 & ((IData)(this->__PVT__adder32__DOT__Gg) 
                                                    | ((IData)(this->__PVT__adder32__DOT__Pg) 
                                                       & ((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                                          << 1U)))));
    this->__PVT__adder32__DOT__c = (((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                     << 1U) | ((0U 
                                                == (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUctr))
                                                ? 0U
                                                : 1U));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                     ^ this->__PVT__tmp) ^ (IData)(this->__PVT__adder32__DOT__c))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                      ^ this->__PVT__tmp) >> 8U) ^ 
                    ((IData)(this->__PVT__adder32__DOT__c) 
                     >> 1U))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                      ^ this->__PVT__tmp) >> 0x10U) 
                    ^ ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 2U))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                      ^ this->__PVT__tmp) >> 0x18U) 
                    ^ ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 3U))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__c)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__c) 
                          >> 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__c) 
                          >> 2U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__c) 
                          >> 3U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p)) 
                    & (IData)(this->__PVT__adder32__DOT__c))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 1U))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 2U))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 3U))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                    ^ this->__PVT__tmp)) 
                    ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                       << 1U))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                    ^ this->__PVT__tmp)) 
                    ^ (0xfffffffcU & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffffff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                    ^ this->__PVT__tmp)) 
                    ^ (0xfffffff8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                   ^ this->__PVT__tmp) 
                                  >> 8U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                             << 1U))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                   ^ this->__PVT__tmp) 
                                  >> 8U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                   ^ this->__PVT__tmp) 
                                  >> 8U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                 ^ this->__PVT__tmp) 
                                >> 0x10U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                 ^ this->__PVT__tmp) 
                                >> 0x10U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                 ^ this->__PVT__tmp) 
                                >> 0x10U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                               ^ this->__PVT__tmp) 
                              >> 0x18U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            << 1U))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                               ^ this->__PVT__tmp) 
                              >> 0x18U)) ^ (0xfffffffcU 
                                            & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xf8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                               ^ this->__PVT__tmp) 
                              >> 0x18U)) ^ (0xfffffff8U 
                                            & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                      ^ this->__PVT__tmp) >> 4U) ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                      ^ this->__PVT__tmp) >> 0xcU) 
                    ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                      ^ this->__PVT__tmp) >> 0x14U) 
                    ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                      ^ this->__PVT__tmp) >> 0x1cU) 
                    ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__cout_temp = ((0xeU & (IData)(this->__PVT__adder32__DOT__cout_temp)) 
                                            | (1U & 
                                               ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 3U)));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                    ^ this->__PVT__tmp) 
                                   >> 4U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                    ^ this->__PVT__tmp) 
                                   >> 4U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                    ^ this->__PVT__tmp) 
                                   >> 4U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__cout_temp = ((0xdU & (IData)(this->__PVT__adder32__DOT__cout_temp)) 
                                            | (2U & 
                                               ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U)));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                  ^ this->__PVT__tmp) 
                                 >> 0xcU)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                  ^ this->__PVT__tmp) 
                                 >> 0xcU)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                  ^ this->__PVT__tmp) 
                                 >> 0xcU)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__cout_temp = ((0xbU & (IData)(this->__PVT__adder32__DOT__cout_temp)) 
                                            | (4U & 
                                               ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U)));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                ^ this->__PVT__tmp) 
                               >> 0x14U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                             << 1U))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                ^ this->__PVT__tmp) 
                               >> 0x14U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                                ^ this->__PVT__tmp) 
                               >> 0x14U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__cout_temp = ((7U & (IData)(this->__PVT__adder32__DOT__cout_temp)) 
                                            | (8U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                              ^ this->__PVT__tmp) >> 0x1cU)) 
                    ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                       << 1U))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                              ^ this->__PVT__tmp) >> 0x1cU)) 
                    ^ (0xfffffffcU & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                      << 1U)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__ALUa 
                            ^ this->__PVT__tmp) >> 0x1cU)) 
                    ^ (0xfffffff8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                      << 1U)))));
    this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__PVT__adder32__DOT__ff[0U] = this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    this->__PVT__adder32__DOT__ff[1U] = this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    this->__PVT__adder32__DOT__ff[2U] = this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    this->__PVT__adder32__DOT__ff[3U] = this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
    this->f = ((this->__PVT__adder32__DOT__ff[3U] << 0x18U) 
               | ((this->__PVT__adder32__DOT__ff[2U] 
                   << 0x10U) | ((this->__PVT__adder32__DOT__ff
                                 [1U] << 8U) | this->__PVT__adder32__DOT__ff
                                [0U])));
}

VL_INLINE_OPT void emu_Adder32_p::_settle__TOP__cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__adder_jump__2(emu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            emu_Adder32_p::_settle__TOP__cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__adder_jump__2\n"); );
    emu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 4U));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 4U));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0xcU));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0xcU));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x14U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x14U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x1cU));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x1cU));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                   | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g 
        = (0xfU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                   & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 8U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x10U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g 
        = (0xfU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                    & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                   >> 0x18U));
    this->__PVT__adder32__DOT__g[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                 & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db));
    this->__PVT__adder32__DOT__g[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                  & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                                 >> 8U));
    this->__PVT__adder32__DOT__g[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                  & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                                 >> 0x10U));
    this->__PVT__adder32__DOT__g[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                  & vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                                 >> 0x18U));
    this->__PVT__adder32__DOT__p[0U] = (0xffU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                 | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db));
    this->__PVT__adder32__DOT__p[1U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                  | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                                 >> 8U));
    this->__PVT__adder32__DOT__p[2U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                  | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                                 >> 0x10U));
    this->__PVT__adder32__DOT__p[3U] = (0xffU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                                  | vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                                 >> 0x18U));
    this->__PVT__adder32__DOT__Pg = ((0xeU & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | ((0xffU == this->__PVT__adder32__DOT__p
                                         [0U]) ? 1U
                                         : 0U));
    this->__PVT__adder32__DOT__Pg = ((0xdU & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | (((0xffU == 
                                          this->__PVT__adder32__DOT__p
                                          [1U]) ? 1U
                                          : 0U) << 1U));
    this->__PVT__adder32__DOT__Pg = ((0xbU & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | (((0xffU == 
                                          this->__PVT__adder32__DOT__p
                                          [2U]) ? 1U
                                          : 0U) << 2U));
    this->__PVT__adder32__DOT__Pg = ((7U & (IData)(this->__PVT__adder32__DOT__Pg)) 
                                     | (((0xffU == 
                                          this->__PVT__adder32__DOT__p
                                          [3U]) ? 1U
                                          : 0U) << 3U));
    this->__PVT__adder32__DOT__Gg = ((0xeU & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (1U & ((((((
                                                   ((this->__PVT__adder32__DOT__g
                                                     [0U] 
                                                     >> 7U) 
                                                    | ((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__g
                                                          [0U] 
                                                          >> 6U))) 
                                                   | (((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__g
                                                         [0U] 
                                                         >> 5U))) 
                                                  | ((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__g
                                                        [0U] 
                                                        >> 4U))) 
                                                 | (((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 4U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [0U] 
                                                       >> 3U))) 
                                                | ((((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 4U)) 
                                                    & (this->__PVT__adder32__DOT__p
                                                       [0U] 
                                                       >> 3U)) 
                                                   & (this->__PVT__adder32__DOT__g
                                                      [0U] 
                                                      >> 2U))) 
                                               | (((((((this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 7U) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 6U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 5U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 4U)) 
                                                    & (this->__PVT__adder32__DOT__p
                                                       [0U] 
                                                       >> 3U)) 
                                                   & (this->__PVT__adder32__DOT__p
                                                      [0U] 
                                                      >> 2U)) 
                                                  & (this->__PVT__adder32__DOT__g
                                                     [0U] 
                                                     >> 1U))) 
                                              | (((((((((this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 7U) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [0U] 
                                                           >> 6U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [0U] 
                                                          >> 5U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [0U] 
                                                         >> 4U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [0U] 
                                                        >> 3U)) 
                                                    & (this->__PVT__adder32__DOT__p
                                                       [0U] 
                                                       >> 2U)) 
                                                   & (this->__PVT__adder32__DOT__p
                                                      [0U] 
                                                      >> 1U)) 
                                                  & this->__PVT__adder32__DOT__p
                                                  [0U]) 
                                                 & this->__PVT__adder32__DOT__g
                                                 [0U]))));
    this->__PVT__adder32__DOT__Gg = ((0xdU & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (2U & ((((((
                                                   (0x3fffffeU 
                                                    & ((this->__PVT__adder32__DOT__g
                                                        [1U] 
                                                        >> 6U) 
                                                       | ((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__g
                                                             [1U] 
                                                             >> 5U)))) 
                                                   | (0x3fffffeU 
                                                      & (((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__g
                                                            [1U] 
                                                            >> 4U)))) 
                                                  | (0x3fffffeU 
                                                     & ((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__g
                                                           [1U] 
                                                           >> 3U)))) 
                                                 | (0x3fffffeU 
                                                    & (((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__adder32__DOT__g
                                                          [1U] 
                                                          >> 2U)))) 
                                                | (0x3fffffeU 
                                                   & ((((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [1U] 
                                                          >> 2U)) 
                                                      & (this->__PVT__adder32__DOT__g
                                                         [1U] 
                                                         >> 1U)))) 
                                               | (0x3fffffeU 
                                                  & (((((((this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 6U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 5U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 4U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 3U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [1U] 
                                                          >> 2U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [1U] 
                                                         >> 1U)) 
                                                     & this->__PVT__adder32__DOT__g
                                                     [1U]))) 
                                              | (0x3fffffeU 
                                                 & (((((((((this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 6U) 
                                                           & (this->__PVT__adder32__DOT__p
                                                              [1U] 
                                                              >> 5U)) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [1U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [1U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [1U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [1U] 
                                                          >> 1U)) 
                                                      & this->__PVT__adder32__DOT__p
                                                      [1U]) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [1U] 
                                                        << 1U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [1U] 
                                                       << 1U))))));
    this->__PVT__adder32__DOT__Gg = ((0xbU & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (4U & ((((((
                                                   (0x7fffffcU 
                                                    & ((this->__PVT__adder32__DOT__g
                                                        [2U] 
                                                        >> 5U) 
                                                       | ((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__g
                                                             [2U] 
                                                             >> 4U)))) 
                                                   | (0x7fffffcU 
                                                      & (((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__g
                                                            [2U] 
                                                            >> 3U)))) 
                                                  | (0x7fffffcU 
                                                     & ((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__g
                                                           [2U] 
                                                           >> 2U)))) 
                                                 | (0x7fffffcU 
                                                    & (((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__g
                                                          [2U] 
                                                          >> 1U)))) 
                                                | (0x7fffffcU 
                                                   & ((((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [2U] 
                                                          >> 1U)) 
                                                      & this->__PVT__adder32__DOT__g
                                                      [2U]))) 
                                               | (0x7fffffcU 
                                                  & (((((((this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 5U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 4U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 3U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 2U)) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [2U] 
                                                          >> 1U)) 
                                                      & this->__PVT__adder32__DOT__p
                                                      [2U]) 
                                                     & (this->__PVT__adder32__DOT__g
                                                        [2U] 
                                                        << 1U)))) 
                                              | (0x7fffffcU 
                                                 & (((((((((this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 5U) 
                                                           & (this->__PVT__adder32__DOT__p
                                                              [2U] 
                                                              >> 4U)) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [2U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [2U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [2U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__p
                                                       [2U]) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [2U] 
                                                         << 1U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [2U] 
                                                        << 2U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [2U] 
                                                       << 2U))))));
    this->__PVT__adder32__DOT__Gg = ((7U & (IData)(this->__PVT__adder32__DOT__Gg)) 
                                     | (8U & ((((((
                                                   (0xffffff8U 
                                                    & ((this->__PVT__adder32__DOT__g
                                                        [3U] 
                                                        >> 4U) 
                                                       | ((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__g
                                                             [3U] 
                                                             >> 3U)))) 
                                                   | (0xffffff8U 
                                                      & (((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__g
                                                            [3U] 
                                                            >> 2U)))) 
                                                  | (0xffffff8U 
                                                     & ((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__g
                                                           [3U] 
                                                           >> 1U)))) 
                                                 | (0xffffff8U 
                                                    & (((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__g
                                                       [3U]))) 
                                                | (0xffffff8U 
                                                   & ((((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__p
                                                       [3U]) 
                                                      & (this->__PVT__adder32__DOT__g
                                                         [3U] 
                                                         << 1U)))) 
                                               | (0xffffff8U 
                                                  & (((((((this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 4U) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 3U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 2U)) 
                                                        & (this->__PVT__adder32__DOT__p
                                                           [3U] 
                                                           >> 1U)) 
                                                       & this->__PVT__adder32__DOT__p
                                                       [3U]) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [3U] 
                                                         << 1U)) 
                                                     & (this->__PVT__adder32__DOT__g
                                                        [3U] 
                                                        << 2U)))) 
                                              | (0xffffff8U 
                                                 & (((((((((this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 4U) 
                                                           & (this->__PVT__adder32__DOT__p
                                                              [3U] 
                                                              >> 3U)) 
                                                          & (this->__PVT__adder32__DOT__p
                                                             [3U] 
                                                             >> 2U)) 
                                                         & (this->__PVT__adder32__DOT__p
                                                            [3U] 
                                                            >> 1U)) 
                                                        & this->__PVT__adder32__DOT__p
                                                        [3U]) 
                                                       & (this->__PVT__adder32__DOT__p
                                                          [3U] 
                                                          << 1U)) 
                                                      & (this->__PVT__adder32__DOT__p
                                                         [3U] 
                                                         << 2U)) 
                                                     & (this->__PVT__adder32__DOT__p
                                                        [3U] 
                                                        << 3U)) 
                                                    & (this->__PVT__adder32__DOT__g
                                                       [3U] 
                                                       << 3U))))));
    this->adder32__DOT____Vcellout__gen__c = ((0xeU 
                                               & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (1U 
                                                 & (IData)(this->__PVT__adder32__DOT__Gg)));
    this->adder32__DOT____Vcellout__gen__c = ((0xdU 
                                               & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (2U 
                                                 & ((IData)(this->__PVT__adder32__DOT__Gg) 
                                                    | ((IData)(this->__PVT__adder32__DOT__Pg) 
                                                       & ((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                                          << 1U)))));
    this->adder32__DOT____Vcellout__gen__c = ((0xbU 
                                               & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (4U 
                                                 & ((IData)(this->__PVT__adder32__DOT__Gg) 
                                                    | ((IData)(this->__PVT__adder32__DOT__Pg) 
                                                       & ((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                                          << 1U)))));
    this->adder32__DOT____Vcellout__gen__c = ((7U & (IData)(this->adder32__DOT____Vcellout__gen__c)) 
                                              | (8U 
                                                 & ((IData)(this->__PVT__adder32__DOT__Gg) 
                                                    | ((IData)(this->__PVT__adder32__DOT__Pg) 
                                                       & ((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                                          << 1U)))));
    this->__PVT__adder32__DOT__c = ((IData)(this->adder32__DOT____Vcellout__gen__c) 
                                    << 1U);
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                     ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                    ^ (IData)(this->__PVT__adder32__DOT__c))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                     >> 8U) ^ ((IData)(this->__PVT__adder32__DOT__c) 
                               >> 1U))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                     >> 0x10U) ^ ((IData)(this->__PVT__adder32__DOT__c) 
                                  >> 2U))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                     >> 0x18U) ^ ((IData)(this->__PVT__adder32__DOT__c) 
                                  >> 3U))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__c)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__c) 
                          >> 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__c) 
                          >> 2U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__c) 
                          >> 3U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__p)) 
                    & (IData)(this->__PVT__adder32__DOT__c))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 1U))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 2U))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2 
        = (1U & ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                     >> 3U) | (((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                          >> 2U))) 
                   | ((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g) 
                                             >> 1U))) 
                  | (((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__g))) 
                 | ((((((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                        >> 3U) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                  >> 2U)) & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p) 
                                             >> 1U)) 
                     & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__p)) 
                    & ((IData)(this->__PVT__adder32__DOT__c) 
                       >> 3U))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db)) 
                    ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                       << 1U))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db)) 
                    ^ (0xfffffffcU & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffffff8U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db)) 
                    ^ (0xfffffff8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                      << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                  >> 8U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                             << 1U))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                  >> 8U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                  >> 8U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                >> 0x10U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              << 1U))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                >> 0x10U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xfff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                 ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                >> 0x10U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                 << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (2U & ((0xfeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                              >> 0x18U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            << 1U))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (4U & ((0xfcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                              >> 0x18U)) ^ (0xfffffffcU 
                                            & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f)) 
           | (8U & ((0xf8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                               ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                              >> 0x18U)) ^ (0xfffffff8U 
                                            & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                     >> 4U) ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                     >> 0xcU) ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                     >> 0x14U) ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xeU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (1U & (((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                      ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                     >> 0x1cU) ^ (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xeU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (1U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
    this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xf0U & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                   >> 4U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                   >> 4U)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                    ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                   >> 4U)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                 >> 0xcU)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                 >> 0xcU)) ^ (0xfffffffcU 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xffff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                  ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                                 >> 0xcU)) ^ (0xfffffff8U 
                                              & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                 << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xffeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                               >> 0x14U)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                             << 1U))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xffcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                               >> 0x14U)) ^ (0xfffffffcU 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((0xff8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                                ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                               >> 0x14U)) ^ (0xfffffff8U 
                                             & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xdU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (2U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((0xbU & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (4U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c 
        = ((7U & (IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)) 
           | (8U & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                    | ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                       & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                          << 1U)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xdU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (2U & ((0xeU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                              ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                             >> 0x1cU)) ^ ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                           << 1U))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((0xbU & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (4U & ((0xcU & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                              ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                             >> 0x1cU)) ^ (0xfffffffcU 
                                           & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              << 1U)))));
    this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f 
        = ((7U & (IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f)) 
           | (8U & ((8U & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__da 
                            ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__NextAddr__DOT__db) 
                           >> 0x1cU)) ^ (0xfffffff8U 
                                         & ((IData)(this->__PVT__adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            << 1U)))));
    this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f 
        = ((0xfU & (IData)(this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f)) 
           | ((IData)(this->adder32__DOT__genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f) 
              << 4U));
    this->__PVT__adder32__DOT__ff[0U] = this->adder32__DOT____Vcellout__genblk2__BRA__0__KET____DOT__adder8__f;
    this->__PVT__adder32__DOT__ff[1U] = this->adder32__DOT____Vcellout__genblk2__BRA__1__KET____DOT__adder8__f;
    this->__PVT__adder32__DOT__ff[2U] = this->adder32__DOT____Vcellout__genblk2__BRA__2__KET____DOT__adder8__f;
    this->__PVT__adder32__DOT__ff[3U] = this->adder32__DOT____Vcellout__genblk2__BRA__3__KET____DOT__adder8__f;
    this->f = ((this->__PVT__adder32__DOT__ff[3U] << 0x18U) 
               | ((this->__PVT__adder32__DOT__ff[2U] 
                   << 0x10U) | ((this->__PVT__adder32__DOT__ff
                                 [1U] << 8U) | this->__PVT__adder32__DOT__ff
                                [0U])));
}
