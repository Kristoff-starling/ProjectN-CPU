// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See SingleRiscv.h for the primary calling header

#include "SingleRiscv.h"
#include "SingleRiscv__Syms.h"

//==========
CData/*0:0*/ SingleRiscv::__Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[32];
CData/*0:0*/ SingleRiscv::__Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[32];

VL_CTOR_IMP(SingleRiscv) {
    SingleRiscv__Syms* __restrict vlSymsp = __VlSymsp = new SingleRiscv__Syms(this, name());
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void SingleRiscv::__Vconfigure(SingleRiscv__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

SingleRiscv::~SingleRiscv() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void SingleRiscv::_initial__TOP__1(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_initial__TOP__1\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[0U] = 0U;
}

void SingleRiscv::_settle__TOP__4(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_settle__TOP__4\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dbg_pc = vlTOPp->cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    vlTOPp->wb = vlTOPp->cpu_tst__DOT__mycpu__DOT__wb_r;
    vlTOPp->done = (0U == vlTOPp->cpu_tst__DOT__idataout);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI 
        = ((0xfffff000U & ((- (IData)((1U & (vlTOPp->cpu_tst__DOT__idataout 
                                             >> 0x1fU)))) 
                           << 0xcU)) | (0xfffU & (vlTOPp->cpu_tst__DOT__idataout 
                                                  >> 0x14U)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__op = (0x7fU & vlTOPp->cpu_tst__DOT__idataout);
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
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0x14U))];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0xfU))];
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

void SingleRiscv::_eval_initial(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval_initial\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void SingleRiscv::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::final\n"); );
    // Variables
    SingleRiscv__Syms* __restrict vlSymsp = this->__VlSymsp;
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void SingleRiscv::_eval_settle(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval_settle\n"); );
    SingleRiscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void SingleRiscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_ctor_var_reset\n"); );
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
    cpu_tst__DOT__daddr = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__pc_r = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__dbg_pc_r = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__nextpc = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__rs1data = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__rs2data = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__op = VL_RAND_RESET_I(7);
    cpu_tst__DOT__mycpu__DOT__imm = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__alua = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__alub = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__less = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__extop = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__regwr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__aluasrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__alubsrc = VL_RAND_RESET_I(2);
    cpu_tst__DOT__mycpu__DOT__aluctr = VL_RAND_RESET_I(4);
    cpu_tst__DOT__mycpu__DOT__branch = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__memtoreg = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__memwr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__pcasrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__pcbsrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__wb_r = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin = VL_RAND_RESET_I(32);
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
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[0] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[1] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[2] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[3] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[4] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[5] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[6] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[7] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[8] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[9] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[10] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[11] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[12] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[13] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[14] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[15] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[16] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[17] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[18] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[19] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[20] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[21] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[22] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[23] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[24] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[25] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[26] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[27] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[28] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[29] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[30] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[31] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[0] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[1] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[2] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[3] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[4] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[5] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[6] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[7] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[8] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[9] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[10] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[11] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[12] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[13] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[14] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[15] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[16] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[17] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[18] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[19] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[20] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[21] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[22] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[23] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[24] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[25] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[26] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[27] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[28] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[29] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[30] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[31] = 0U;
}
