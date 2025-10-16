// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_updowncounter.h for the primary calling header

#include "Vtb_updowncounter__pch.h"
#include "Vtb_updowncounter___024root.h"

VL_ATTR_COLD void Vtb_updowncounter___024root___eval_static(Vtb_updowncounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_updowncounter___024root___eval_final(Vtb_updowncounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_updowncounter___024root___eval_settle(Vtb_updowncounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_updowncounter___024root___dump_triggers__act(Vtb_updowncounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_updowncounter___024root___dump_triggers__nba(Vtb_updowncounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_updowncounter___024root___ctor_var_reset(Vtb_updowncounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->count = VL_RAND_RESET_I(4);
    vlSelf->tb_updowncounter__DOT__up = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
