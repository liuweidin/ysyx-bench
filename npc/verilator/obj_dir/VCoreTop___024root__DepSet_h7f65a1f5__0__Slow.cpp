// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCoreTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCoreTop__Syms.h"
#include "VCoreTop___024root.h"

void VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(const VlUnpacked<IData/*31:0*/, 7> &inst);
void VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void VCoreTop___024root___settle__TOP__0(VCoreTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3968d463__0;
    VlWide<3>/*95:0*/ __Vtemp_h55f836b3__0;
    VlWide<3>/*95:0*/ __Vtemp_hce5104d0__0;
    // Body
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid 
        = (2U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T = (1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___wrap_value_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___GEN_2 
        = ((0U == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state))
            ? 1U : (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state));
    vlSelf->CoreTop__DOT__If_axi_birdge__DOT___GEN_4 
        = vlSelf->CoreTop__DOT__If_axi_birdge__DOT__aw_state;
    vlSelf->CoreTop__DOT__If_axi_birdge_io_out_wb_ready 
        = vlSelf->CoreTop__DOT__If_axi_birdge__DOT__aw_state;
    vlSelf->CoreTop__DOT__MEM_axi_birdge_io_out_wb_ready 
        = vlSelf->CoreTop__DOT__MEM_axi_birdge__DOT__aw_state;
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_192) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_193));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_206) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_207));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_837) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_838));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_737_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2111) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2112));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2125) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2126));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__s = ((1U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__state)) 
                                                  & (0x3fU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_107_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_220) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_221) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_222))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_221) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_222)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_727_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2081) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2082) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2083))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2082) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2083)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_732_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2096) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2097) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2098))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2097) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2098)));
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mepc_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mcause_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mstatus_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3U] 
        = vlSelf->CoreTop__DOT__EX__DOT__CSRDIFF_io_mtvec_REG_1;
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_72_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_117) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_118));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_525) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_526));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1328_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2307) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2306));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1020) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1021));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1052) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1053));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1315) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1316));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1084) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1085) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1086))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1085) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1086)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1117) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1118) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1119))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1118) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1119)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1150) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1151) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1152))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1151) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1152)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1183) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1184) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1185))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1184) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1185)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1216) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1217) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1218))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1217) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1218)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1249) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1250) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1251))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1250) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1251)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1282) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1283) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1284))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1283) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1284)));
    vlSelf->CoreTop__DOT__DIP__DOT__IN[0U] = vlSelf->CoreTop__DOT__DIP_io_inst_REG;
    vlSelf->CoreTop__DOT__DIP__DOT__IN[1U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_pc_REG);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[2U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_pc_REG 
                                                      >> 0x20U));
    vlSelf->CoreTop__DOT__DIP__DOT__IN[3U] = vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG;
    vlSelf->CoreTop__DOT__DIP__DOT__IN[4U] = (IData)(vlSelf->CoreTop__DOT__DIP_io_dnpc_REG);
    vlSelf->CoreTop__DOT__DIP__DOT__IN[5U] = (IData)(
                                                     (vlSelf->CoreTop__DOT__DIP_io_dnpc_REG 
                                                      >> 0x20U));
    vlSelf->CoreTop__DOT__DIP__DOT__IN[6U] = vlSelf->CoreTop__DOT__DIP_io_is_skip_REG;
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_548) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_549));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1778) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1779));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1801) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1802));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_571) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_572) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_573))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_572) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_573)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1730) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1731) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1732))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1731) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1732)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1754) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1755) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1756))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1755) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1756)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_722_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2065) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2066) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2067))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2066) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2067)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_21) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_22));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_26) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_27));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_396) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_397));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2282) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2283));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2287) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2288));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_44_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_31) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_32) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_33))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_32) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_33)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_602_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1705) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1706) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1707))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1706) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1707)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2263) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2264) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2265))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2264) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2265)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2270) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2271) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2272))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2271) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2272)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2276) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2277) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2278))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2277) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2278)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_3));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_837) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_838));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_866) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_867));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_396) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_397));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_416) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_417));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_416) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_417));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1907) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1908));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1907) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1908));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1927) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1928));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1927) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1928));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_179_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_436) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_437)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_438));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_179_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_436) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_437) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_438))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_437) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_438)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_186_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_457) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_458)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_459));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_648_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1843) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1844) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1845))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1844) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1845)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_655_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1865) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1866)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1867));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_655_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1865) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1866) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1867))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1866) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1867)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_662_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1886) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1887)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1888));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_662_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1886) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1887) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1888))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1887) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1888)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_866) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_867));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1466) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1467));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1466) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1467));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1495) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1496));
    __Vtemp_h3968d463__0[0U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[1U] 
                                           >> 0x1fU));
    __Vtemp_h3968d463__0[1U] = ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                 << 1U) | (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U] 
                                           >> 0x1fU));
    __Vtemp_h3968d463__0[2U] = (vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
                                >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp_h55f836b3__0, vlSelf->CoreTop__DOT__EX__DOT__div__DOT__divisor);
    VL_SUB_W(3, __Vtemp_hce5104d0__0, __Vtemp_h3968d463__0, __Vtemp_h55f836b3__0);
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[0U] 
        = __Vtemp_hce5104d0__0[0U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[1U] 
        = __Vtemp_hce5104d0__0[1U];
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U] 
        = (1U & __Vtemp_hce5104d0__0[2U]);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_112_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_235) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_236) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_237))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_236) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_237)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_186_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_457) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_458) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_459))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_458) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_459)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_478) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_479)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_480));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_478) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_479) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_480))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_479) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_480)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_500) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_501)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_502));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_895) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_896)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_897));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_895) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_896) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_897))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_896) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_897)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_925) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_926)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_927));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1375) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1376) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1377))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1376) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1377)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1406) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1407)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1408));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1406) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1407) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1408))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1407) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1408)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1436) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1437)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1438));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1436) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1437) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1438))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1437) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1438)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_641_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1821) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1822) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1823))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1822) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1823)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_648_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1843) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1844)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1845));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_72_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_117) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_118));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_128) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_129));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_925) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_926) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_927))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_926) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_927)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_955) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_956)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_957));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_955) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_956) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_957))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_956) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_957)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_986) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_987)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_988));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1344) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1345) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1346))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1345) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1346)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1375) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1376)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1377));
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0U] = vlSelf->CoreTop__DOT__rf
        [0U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[1U] = vlSelf->CoreTop__DOT__rf
        [1U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[2U] = vlSelf->CoreTop__DOT__rf
        [2U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[3U] = vlSelf->CoreTop__DOT__rf
        [3U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[4U] = vlSelf->CoreTop__DOT__rf
        [4U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[5U] = vlSelf->CoreTop__DOT__rf
        [5U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[6U] = vlSelf->CoreTop__DOT__rf
        [6U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[7U] = vlSelf->CoreTop__DOT__rf
        [7U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[8U] = vlSelf->CoreTop__DOT__rf
        [8U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[9U] = vlSelf->CoreTop__DOT__rf
        [9U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xaU] = vlSelf->CoreTop__DOT__rf
        [0xaU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xbU] = vlSelf->CoreTop__DOT__rf
        [0xbU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xcU] = vlSelf->CoreTop__DOT__rf
        [0xcU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xdU] = vlSelf->CoreTop__DOT__rf
        [0xdU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xeU] = vlSelf->CoreTop__DOT__rf
        [0xeU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0xfU] = vlSelf->CoreTop__DOT__rf
        [0xfU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x10U] = vlSelf->CoreTop__DOT__rf
        [0x10U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x11U] = vlSelf->CoreTop__DOT__rf
        [0x11U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x12U] = vlSelf->CoreTop__DOT__rf
        [0x12U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x13U] = vlSelf->CoreTop__DOT__rf
        [0x13U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x14U] = vlSelf->CoreTop__DOT__rf
        [0x14U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x15U] = vlSelf->CoreTop__DOT__rf
        [0x15U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x16U] = vlSelf->CoreTop__DOT__rf
        [0x16U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x17U] = vlSelf->CoreTop__DOT__rf
        [0x17U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x18U] = vlSelf->CoreTop__DOT__rf
        [0x18U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x19U] = vlSelf->CoreTop__DOT__rf
        [0x19U];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1aU] = vlSelf->CoreTop__DOT__rf
        [0x1aU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1bU] = vlSelf->CoreTop__DOT__rf
        [0x1bU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1cU] = vlSelf->CoreTop__DOT__rf
        [0x1cU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1dU] = vlSelf->CoreTop__DOT__rf
        [0x1dU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1eU] = vlSelf->CoreTop__DOT__rf
        [0x1eU];
    vlSelf->CoreTop__DOT__DIP__DOT__rf[0x1fU] = vlSelf->CoreTop__DOT__rf
        [0x1fU];
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_60) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_61));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_128) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_129));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1020) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1021));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2186) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2187));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2186) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2187));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2197) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2198));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2197) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2198));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_37) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_38) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_39))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_38) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_39)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_43) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_44) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_45))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_44) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_45)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_50) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_51) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_52))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_51) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_52)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_139) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_140)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_141));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_139) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_140) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_141))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_140) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_141)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_151) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_152)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_153));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_986) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_987) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_988))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_987) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_988)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1017) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1018)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1019));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1312) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1313) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1314))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1313) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1314)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1344) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1345)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1346));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2149) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2150) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2151))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2150) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2151)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2162) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2163)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2164));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2162) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2163) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2164))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2163) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2164)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2174) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2175)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2176));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2174) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2175) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2176))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2175) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2176)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2256) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2257) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2258))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2257) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2258)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_60) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_61));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_68) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_69));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_68) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_69));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1052) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1053));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1315) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1316));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2243) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2244));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2243) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2244));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2251) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2252));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2251) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2252));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_57) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_58) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_59))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_58) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_59)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_65) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_66) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_67))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_66) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_67)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_76) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_77)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_78));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_151) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_152) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_153))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_152) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_153)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_163) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_164)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_165));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1017) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1018) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1019))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1018) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1019)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1049) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1050)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1051));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1049) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1050) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1051))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1050) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1051)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1081) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1082)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1083));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1081) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1082) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1083))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1082) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1083)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1084) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1085)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1086));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1114) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1115)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1116));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1114) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1115) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1116))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1115) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1116)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1117) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1118)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1119));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1147) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1148)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1149));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1147) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1148) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1149))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1148) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1149)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1150) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1151)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1152));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1180) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1181)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1182));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1180) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1181) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1182))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1181) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1182)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1183) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1184)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1185));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1213) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1214)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1215));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1213) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1214) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1215))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1214) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1215)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1216) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1217)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1218));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1246) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1247)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1248));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1246) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1247) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1248))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1247) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1248)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1249) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1250)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1251));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1279) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1280)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1281));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1279) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1280) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1281))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1280) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1281)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1282) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1283)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1284));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1312) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1313)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1314));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1798) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1799) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1800))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1799) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1800)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_641_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1821) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1822)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1823));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2122) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2123) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2124))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2123) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2124)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2136) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2137)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2138));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2136) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2137) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2138))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2137) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2138)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2149) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2150)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2151));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_768_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2202) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2203) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2204))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2203) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2204)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2205) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2206) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2207))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2206) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2207)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_771_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2212) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2213) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2214))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2213) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2214)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2215) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2216)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2217));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2215) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2216) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2217))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2216) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2217)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_774_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2222) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2223) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2224))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2223) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2224)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2225) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2226)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2227));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2225) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2226) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2227))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2226) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2227)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_777_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2231) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2232) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2233))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2232) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2233)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2234) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2235)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2236));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2234) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2235) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2236))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2235) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2236)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_780_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2240) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2241) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2242))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2241) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2242)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_783_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2248) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2249) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2250))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2249) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2250)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_3));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1495) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1496));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2303) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2304));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_4) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_5)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_6));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_525) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_526));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_73) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_74) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_75))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_74) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_75)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_76) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_77) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_78))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_77) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_78)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_82) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_83) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_84))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_83) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_84)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_85) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_86)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_87));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_85) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_86) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_87))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_86) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_87)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_91) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_92) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_93))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_92) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_93)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_94) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_95)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_96));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_94) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_95) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_96))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_95) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_96)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_101) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_102) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_103))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_102) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_103)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_104) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_105)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_106));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_104) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_105) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_106))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_105) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_106)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_114) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_115)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_116));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_500) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_501) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_502))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_501) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_502)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_522) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_523)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_524));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2125) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2126));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_111) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_112) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_113))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_112) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_113)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_114) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_115) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_116))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_115) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_116)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_122) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_123) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_124))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_123) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_124)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_125) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_126)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_127));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_125) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_126) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_127))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_126) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_127)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_133) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_134) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_135))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_134) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_135)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_136) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_137)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_138));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_136) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_137) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_138))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_137) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_138)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_145) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_146) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_147))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_146) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_147)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_148) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_149)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_150));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_148) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_149) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_150))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_149) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_150)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_160) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_161)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_162));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_163) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_164) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_165))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_164) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_165)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_176) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_177)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_178));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2102) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2103) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2104))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2103) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2104)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2105) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2106) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2107))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2106) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2107)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2108) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2109) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2110))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2109) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2110)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_739_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2116) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2117) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2118))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2117) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2118)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2119) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2120)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2121));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2119) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2120) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2121))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2120) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2121)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2122) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2123)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2124));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_744_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2130) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2131) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2132))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2131) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2132)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2133) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2134)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2135));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2133) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2134) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2135))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2134) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2135)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_748_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2143) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2144) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2145))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2144) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2145)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2146) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2147)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2148));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2146) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2147) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2148))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2147) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2148)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_752_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2156) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2157) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2158))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2157) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2158)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2159) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2160)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2161));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2159) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2160) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2161))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2160) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2161)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_756_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2168) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2169) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2170))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2169) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2170)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2171) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2172)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2173));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2171) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2172) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2173))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2172) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2173)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2180) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2181) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2182))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2181) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2182)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2183) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2184)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2185));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2183) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2184) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2185))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2184) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2185)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_764_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2191) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2192) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2193))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2192) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2193)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2194) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2195)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2196));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2194) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2195) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2196))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2195) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2196)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2205) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2206)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2207));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_285) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_286));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2294) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2295)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2294) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2295)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2301) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2302)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2301) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2302)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2301) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2302)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2303) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2304));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_4) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_5) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_6))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_5) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_6)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_7) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_8)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_9));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_117_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_250) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_251) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_252))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_251) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_252)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_266) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_267) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_268))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_267) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_268)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2049) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2050) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2051))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2050) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2051)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2297) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2298)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2299));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2297) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2298) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2299))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2298) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2299)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_285) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_286));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_302) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_303));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_302) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_303));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2018) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2019));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2018) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2019));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2035) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2036));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2035) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2036));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2294) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2295)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_7) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_8) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_9))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_8) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_9)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_10) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_11)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_12));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_10) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_11) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_12))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_11) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_12)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_14) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_15)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_16));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_127_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_282) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_283) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_284))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_283) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_284)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_133_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_299) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_300) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_301))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_300) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_301)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_319) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_320)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_321));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_687_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1960) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1961) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1962))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1961) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1962)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1963) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1964) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1965))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1964) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1965)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_693_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1979) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1980) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1981))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1980) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1981)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1982) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1983)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1984));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1982) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1983) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1984))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1983) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1984)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_699_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1997) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1998) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1999))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1998) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1999)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2000) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2001)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2002));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2000) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2001) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2002))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2001) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2002)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2015) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2016) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2017))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2016) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2017)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_711_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2032) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2033) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2034))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2033) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2034)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2289) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2290) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2291))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2290) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2291)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_595) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_596) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_597))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_596) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_597)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_21) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_22));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_548) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_549));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1778) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1779));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1801) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1802));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2285) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2286)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2285) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2286)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_14) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_15) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_16))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_15) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_16)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_18) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_19)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_20));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_139_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_316) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_317) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_318))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_317) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_318)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_319) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_320) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_321))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_320) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_321)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_146_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_337) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_338)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_339));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_522) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_523) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_524))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_523) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_524)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_545) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_546)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_547));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_545) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_546) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_547))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_546) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_547)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_568) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_569)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_570));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_568) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_569) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_570))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_569) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_570)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_571) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_572)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_573));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_231_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_592) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_593)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_594));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_595) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_596)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_597));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1702) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1703) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1704))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1703) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1704)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1727) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1728)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1729));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1727) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1728) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1729))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1728) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1729)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1730) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1731)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1732));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1751) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1752)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1753));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1751) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1752) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1753))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1752) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1753)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1754) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1755)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1756));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1775) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1776)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1777));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1775) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1776) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1777))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1776) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1777)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1798) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1799)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1800));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_681_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1941) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1942) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1943))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1942) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1943)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1944) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1945) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1946))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1945) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1946)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1963) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1964)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1965));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2289) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2290)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2291));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_257_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_672) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_673));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_240_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_619) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_620) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_621))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_620) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_621)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_248_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_644) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_645) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_646))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_645) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_646)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1680) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1681) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1682))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1681) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1682)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_26) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_27));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_192) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_193));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_206) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_207));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_257_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_672) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_673));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_266_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_698) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_699));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_266_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_698) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_699));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_462_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1286) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1287)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_462_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1286) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1287)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1286) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1287)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_483_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1349) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1350)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_483_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1349) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1350)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1349) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1350)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_503_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1410) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1411)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_503_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1410) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1411)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1410) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1411)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_523_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1469) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1470)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_523_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1469) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1470)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1469) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1470)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_542_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1526) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1527)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_542_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1526) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1527)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1526) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1527)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1581) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1582)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_560_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1581) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1582)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1581) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1582)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1631) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1632));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_577_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1631) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1632));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_578_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1634) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1635)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_578_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1634) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1635)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1634) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1635)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1657) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1658));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_586_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1657) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1658));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_595_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1685) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1686)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_595_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1685) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1686)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1685) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1686)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_611_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1734) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1735)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_611_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1734) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1735)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1734) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1735)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_627_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1781) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1782)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_627_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1781) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1782)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1781) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1782)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_642_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1826) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1827)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_642_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1826) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1827)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1826) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1827)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_656_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1869) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1870)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_656_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1869) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1870)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1869) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1870)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_670_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1910) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1911)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_670_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1910) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1911)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1910) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1911)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_683_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1949) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1950)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_683_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1949) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1950)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1949) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1950)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_695_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1986) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1987)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_695_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1986) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1987)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1986) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1987)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_707_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2021) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2022)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_707_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2021) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2022)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2021) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2022)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_718_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2054) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2055)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_718_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2054) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2055)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2054) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2055)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_728_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2085) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2086)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_728_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2085) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2086)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2085) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2086)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_737_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2111) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2112));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_738_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2114) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2115)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_738_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2114) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2115)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2114) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2115)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_747_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2141) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2142)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_747_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2141) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2142)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2141) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2142)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_755_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2166) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2167)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_755_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2166) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2167)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2166) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2167)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_763_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2189) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2190)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_763_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2189) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2190)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2189) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2190)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_770_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2210) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2211)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_770_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2210) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2211)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2210) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2211)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_776_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2229) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2230)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_776_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2229) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2230)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2229) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2230)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_782_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2246) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2247)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_782_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2246) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2247)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2246) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2247)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_787_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2261) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2262)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_787_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2261) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2262)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2261) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2262)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_791_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2274) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2275)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_791_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2274) 
            | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2275)) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2274) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2275)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_794_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2282) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2283));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_s 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2285) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2286)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_796_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2287) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2288));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_18) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_19) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_20))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_19) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_20)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_23) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_24)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_25));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_23) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_24) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_25))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_24) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_25)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_28) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_29)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_30));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_28) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_29) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_30))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_29) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_30)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_44_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_31) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_32)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_33));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_34) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_35)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_36));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_34) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_35) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_36))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_35) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_36)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_37) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_38)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_39));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_40) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_41)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_42));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_40) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_41) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_42))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_41) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_42)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_43) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_44)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_45));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_47) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_48)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_49));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_47) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_48) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_49))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_48) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_49)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_50) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_51)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_52));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_54) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_55)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_56));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_54) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_55) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_56))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_55) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_56)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_57) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_58)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_59));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_62) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_63)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_64));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_62) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_63) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_64))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_63) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_64)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_65) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_66)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_67));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_70) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_71)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_72));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_70) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_71) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_72))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_71) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_72)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_73) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_74)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_75));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_79) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_80)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_81));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_79) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_80) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_81))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_80) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_81)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_82) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_83)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_84));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_88) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_89)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_90));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_88) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_89) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_90))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_89) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_90)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_91) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_92)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_93));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_98) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_99)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_100));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_98) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_99) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_100))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_99) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_100)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_101) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_102)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_103));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_108) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_109)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_110));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_108) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_109) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_110))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_109) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_110)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_111) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_112)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_113));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_119) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_120)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_121));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_119) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_120) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_121))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_120) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_121)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_122) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_123)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_124));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_130) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_131)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_132));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_130) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_131) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_132))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_131) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_132)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_133) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_134)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_135));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_142) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_143)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_144));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_142) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_143) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_144))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_143) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_144)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_145) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_146)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_147));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_154) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_155)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_156));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_154) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_155) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_156))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_155) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_156)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_157) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_158)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_159));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_157) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_158) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_159))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_158) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_159)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_160) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_161) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_162))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_161) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_162)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_167) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_168)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_169));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_167) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_168) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_169))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_168) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_169)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_170) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_171)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_172));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_170) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_171) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_172))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_171) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_172)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_173) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_174)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_175));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_173) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_174) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_175))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_174) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_175)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_176) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_177) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_178))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_177) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_178)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_180) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_181)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_182));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_180) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_181) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_182))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_181) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_182)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_183) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_184)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_185));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_183) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_184) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_185))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_184) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_185)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_186) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_187)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_188));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_186) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_187) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_188))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_187) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_188)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_189) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_190)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_191));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_189) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_190) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_191))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_190) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_191)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_194) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_195)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_196));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_194) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_195) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_196))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_195) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_196)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_99_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_197) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_198)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_199));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_99_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_197) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_198) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_199))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_198) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_199)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_100_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_200) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_201)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_202));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_100_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_200) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_201) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_202))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_201) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_202)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_101_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_203) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_204)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_205));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_101_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_203) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_204) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_205))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_204) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_205)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_103_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_208) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_209)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_210));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_103_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_208) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_209) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_210))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_209) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_210)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_104_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_211) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_212)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_213));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_104_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_211) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_212) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_213))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_212) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_213)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_105_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_214) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_215)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_216));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_105_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_214) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_215) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_216))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_215) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_216)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_106_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_217) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_218)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_219));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_106_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_217) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_218) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_219))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_218) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_219)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_107_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_220) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_221)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_222));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_108_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_223) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_224)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_225));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_108_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_223) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_224) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_225))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_224) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_225)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_109_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_226) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_227)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_228));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_109_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_226) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_227) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_228))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_227) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_228)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_110_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_229) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_230)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_231));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_110_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_229) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_230) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_231))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_230) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_231)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_111_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_232) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_233)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_234));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_111_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_232) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_233) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_234))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_233) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_234)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_112_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_235) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_236)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_237));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_113_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_238) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_239)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_240));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_113_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_238) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_239) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_240))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_239) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_240)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_114_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_241) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_242)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_243));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_114_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_241) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_242) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_243))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_242) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_243)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_115_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_244) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_245)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_246));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_115_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_244) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_245) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_246))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_245) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_246)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_116_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_247) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_248)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_249));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_116_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_247) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_248) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_249))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_248) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_249)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_117_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_250) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_251)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_252));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_118_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_254) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_255)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_256));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_118_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_254) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_255) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_256))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_255) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_256)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_257) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_258)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_259));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_119_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_257) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_258) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_259))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_258) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_259)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_260) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_261)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_262));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_120_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_260) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_261) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_262))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_261) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_262)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_263) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_264)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_265));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_121_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_263) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_264) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_265))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_264) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_265)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_266) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_267)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_268));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_123_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_270) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_271)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_272));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_123_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_270) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_271) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_272))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_271) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_272)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_124_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_273) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_274)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_275));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_124_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_273) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_274) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_275))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_274) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_275)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_125_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_276) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_277)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_278));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_125_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_276) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_277) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_278))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_277) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_278)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_126_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_279) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_280)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_281));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_126_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_279) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_280) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_281))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_280) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_281)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_127_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_282) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_283)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_284));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_129_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_287) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_288)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_289));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_129_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_287) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_288) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_289))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_288) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_289)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_130_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_290) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_291)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_292));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_130_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_290) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_291) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_292))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_291) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_292)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_131_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_293) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_294)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_295));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_131_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_293) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_294) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_295))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_294) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_295)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_132_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_296) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_297)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_298));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_132_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_296) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_297) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_298))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_297) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_298)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_133_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_299) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_300)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_301));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_135_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_304) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_305)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_306));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_135_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_304) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_305) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_306))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_305) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_306)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_136_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_307) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_308)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_309));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_136_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_307) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_308) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_309))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_308) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_309)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_137_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_310) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_311)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_312));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_137_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_310) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_311) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_312))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_311) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_312)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_138_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_313) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_314)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_315));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_138_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_313) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_314) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_315))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_314) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_315)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_139_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_316) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_317)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_318));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_141_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_322) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_323)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_324));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_141_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_322) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_323) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_324))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_323) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_324)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_142_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_325) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_326)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_327));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_142_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_325) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_326) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_327))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_326) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_327)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_143_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_328) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_329)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_330));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_143_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_328) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_329) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_330))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_329) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_330)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_144_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_331) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_332)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_333));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_144_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_331) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_332) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_333))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_332) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_333)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_145_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_334) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_335)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_336));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_145_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_334) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_335) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_336))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_335) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_336)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_146_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_337) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_338) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_339))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_338) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_339)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_147_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_340) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_341)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_342));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_147_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_340) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_341) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_342))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_341) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_342)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_148_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_343) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_344)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_345));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_148_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_343) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_344) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_345))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_344) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_345)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_149_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_346) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_347)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_348));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_149_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_346) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_347) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_348))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_347) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_348)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_150_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_349) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_350)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_351));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_150_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_349) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_350) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_351))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_350) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_351)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_151_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_352) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_353)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_354));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_151_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_352) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_353) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_354))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_353) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_354)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_152_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_355) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_356)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_357));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_152_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_355) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_356) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_357))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_356) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_357)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_153_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_359) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_360)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_361));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_153_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_359) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_360) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_361))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_360) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_361)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_154_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_362) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_363)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_364));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_154_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_362) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_363) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_364))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_363) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_364)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_155_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_365) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_366)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_367));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_155_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_365) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_366) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_367))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_366) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_367)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_156_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_368) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_369)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_370));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_156_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_368) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_369) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_370))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_369) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_370)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_157_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_371) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_372)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_373));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_157_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_371) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_372) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_373))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_372) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_373)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_158_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_374) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_375)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_376));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_158_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_374) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_375) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_376))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_375) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_376)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_159_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_378) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_379)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_380));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_159_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_378) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_379) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_380))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_379) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_380)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_160_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_381) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_382)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_383));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_160_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_381) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_382) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_383))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_382) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_383)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_161_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_384) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_385)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_386));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_161_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_384) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_385) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_386))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_385) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_386)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_162_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_387) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_388)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_389));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_162_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_387) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_388) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_389))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_388) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_389)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_163_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_390) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_391)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_392));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_163_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_390) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_391) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_392))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_391) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_392)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_393) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_394)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_395));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_164_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_393) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_394) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_395))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_394) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_395)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_166_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_398) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_399)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_400));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_166_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_398) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_399) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_400))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_399) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_400)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_167_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_401) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_402)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_403));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_167_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_401) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_402) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_403))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_402) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_403)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_168_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_404) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_405)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_406));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_168_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_404) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_405) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_406))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_405) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_406)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_169_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_407) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_408)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_409));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_169_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_407) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_408) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_409))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_408) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_409)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_170_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_410) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_411)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_412));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_170_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_410) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_411) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_412))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_411) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_412)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_171_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_413) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_414)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_415));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_171_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_413) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_414) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_415))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_414) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_415)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_173_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_418) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_419)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_420));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_173_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_418) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_419) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_420))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_419) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_420)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_174_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_421) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_422)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_423));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_174_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_421) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_422) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_423))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_422) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_423)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_175_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_424) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_425)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_426));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_175_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_424) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_425) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_426))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_425) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_426)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_176_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_427) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_428)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_429));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_176_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_427) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_428) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_429))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_428) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_429)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_177_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_430) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_431)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_432));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_177_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_430) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_431) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_432))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_431) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_432)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_178_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_433) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_434)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_435));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_178_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_433) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_434) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_435))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_434) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_435)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_180_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_439) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_440)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_441));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_180_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_439) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_440) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_441))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_440) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_441)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_181_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_442) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_443)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_444));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_181_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_442) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_443) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_444))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_443) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_444)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_182_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_445) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_446)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_447));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_182_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_445) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_446) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_447))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_446) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_447)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_183_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_448) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_449)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_450));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_183_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_448) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_449) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_450))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_449) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_450)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_184_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_451) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_452)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_453));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_184_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_451) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_452) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_453))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_452) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_453)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_185_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_454) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_455)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_456));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_185_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_454) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_455) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_456))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_455) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_456)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_187_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_460) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_461)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_462));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_187_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_460) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_461) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_462))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_461) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_462)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_188_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_463) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_464)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_465));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_188_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_463) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_464) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_465))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_464) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_465)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_189_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_466) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_467)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_468));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_189_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_466) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_467) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_468))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_467) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_468)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_190_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_469) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_470)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_471));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_190_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_469) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_470) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_471))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_470) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_471)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_191_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_472) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_473)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_474));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_191_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_472) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_473) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_474))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_473) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_474)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_192_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_475) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_476)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_477));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_192_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_475) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_476) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_477))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_476) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_477)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_194_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_482) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_483)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_484));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_194_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_482) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_483) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_484))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_483) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_484)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_195_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_485) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_486)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_487));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_195_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_485) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_486) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_487))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_486) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_487)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_196_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_488) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_489)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_490));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_196_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_488) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_489) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_490))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_489) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_490)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_197_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_491) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_492)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_493));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_197_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_491) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_492) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_493))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_492) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_493)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_198_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_494) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_495)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_496));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_198_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_494) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_495) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_496))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_495) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_496)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_199_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_497) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_498)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_499));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_199_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_497) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_498) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_499))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_498) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_499)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_504) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_505)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_506));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_201_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_504) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_505) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_506))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_505) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_506)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_507) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_508)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_509));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_202_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_507) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_508) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_509))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_508) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_509)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_510) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_511)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_512));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_203_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_510) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_511) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_512))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_511) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_512)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_204_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_513) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_514)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_515));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_204_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_513) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_514) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_515))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_514) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_515)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_205_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_516) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_517)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_518));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_205_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_516) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_517) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_518))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_517) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_518)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_206_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_519) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_520)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_521));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_206_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_519) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_520) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_521))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_520) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_521)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_527) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_528)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_529));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_209_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_527) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_528) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_529))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_528) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_529)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_530) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_531)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_532));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_210_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_530) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_531) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_532))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_531) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_532)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_533) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_534)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_535));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_211_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_533) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_534) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_535))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_534) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_535)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_212_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_536) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_537)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_538));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_212_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_536) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_537) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_538))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_537) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_538)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_213_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_539) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_540)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_541));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_213_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_539) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_540) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_541))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_540) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_541)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_214_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_542) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_543)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_544));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_214_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_542) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_543) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_544))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_543) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_544)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_550) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_551)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_552));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_217_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_550) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_551) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_552))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_551) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_552)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_553) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_554)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_555));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_218_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_553) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_554) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_555))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_554) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_555)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_556) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_557)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_558));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_219_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_556) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_557) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_558))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_557) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_558)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_220_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_559) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_560)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_561));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_220_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_559) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_560) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_561))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_560) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_561)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_221_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_562) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_563)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_564));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_221_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_562) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_563) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_564))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_563) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_564)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_222_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_565) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_566)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_567));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_222_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_565) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_566) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_567))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_566) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_567)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_574) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_575)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_576));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_225_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_574) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_575) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_576))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_575) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_576)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_577) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_578)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_579));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_226_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_577) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_578) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_579))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_578) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_579)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_580) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_581)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_582));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_227_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_580) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_581) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_582))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_581) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_582)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_228_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_583) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_584)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_585));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_228_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_583) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_584) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_585))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_584) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_585)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_229_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_586) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_587)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_588));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_229_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_586) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_587) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_588))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_587) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_588)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_230_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_589) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_590)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_591));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_230_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_589) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_590) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_591))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_590) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_591)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_231_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_592) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_593) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_594))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_593) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_594)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_598) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_599)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_600));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_233_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_598) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_599) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_600))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_599) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_600)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_601) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_602)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_603));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_234_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_601) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_602) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_603))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_602) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_603)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_604) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_605)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_606));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_235_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_604) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_605) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_606))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_605) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_606)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_236_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_607) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_608)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_609));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_236_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_607) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_608) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_609))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_608) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_609)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_237_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_610) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_611)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_612));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_237_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_610) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_611) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_612))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_611) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_612)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_238_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_613) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_614)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_615));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_238_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_613) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_614) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_615))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_614) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_615)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_239_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_616) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_617)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_618));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_239_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_616) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_617) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_618))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_617) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_618)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_240_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_619) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_620)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_621));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_623) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_624)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_625));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_241_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_623) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_624) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_625))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_624) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_625)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_626) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_627)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_628));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_242_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_626) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_627) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_628))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_627) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_628)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_629) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_630)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_631));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_243_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_629) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_630) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_631))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_630) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_631)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_244_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_632) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_633)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_634));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_244_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_632) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_633) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_634))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_633) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_634)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_245_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_635) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_636)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_637));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_245_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_635) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_636) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_637))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_636) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_637)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_246_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_638) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_639)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_640));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_246_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_638) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_639) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_640))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_639) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_640)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_247_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_641) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_642)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_643));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_247_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_641) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_642) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_643))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_642) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_643)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_248_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_644) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_645)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_646));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_648) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_649)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_650));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_249_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_648) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_649) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_650))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_649) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_650)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_651) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_652)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_653));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_250_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_651) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_652) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_653))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_652) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_653)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_654) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_655)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_656));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_251_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_654) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_655) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_656))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_655) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_656)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_252_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_657) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_658)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_659));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_252_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_657) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_658) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_659))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_658) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_659)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_253_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_660) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_661)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_662));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_253_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_660) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_661) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_662))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_661) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_662)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_254_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_663) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_664)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_665));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_254_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_663) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_664) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_665))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_664) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_665)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_255_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_666) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_667)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_668));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_255_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_666) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_667) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_668))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_667) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_668)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_256_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_669) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_670)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_671));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_256_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_669) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_670) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_671))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_670) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_671)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_674) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_675)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_676));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_258_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_674) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_675) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_676))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_675) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_676)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_677) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_678)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_679));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_259_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_677) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_678) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_679))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_678) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_679)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_680) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_681)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_682));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_260_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_680) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_681) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_682))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_681) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_682)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_261_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_683) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_684)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_685));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_261_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_683) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_684) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_685))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_684) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_685)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_262_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_686) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_687)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_688));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_262_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_686) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_687) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_688))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_687) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_688)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_263_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_689) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_690)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_691));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_263_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_689) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_690) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_691))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_690) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_691)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_264_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_692) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_693)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_694));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_264_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_692) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_693) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_694))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_693) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_694)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_265_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_695) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_696)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_697));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_265_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_695) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_696) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_697))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_696) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_697)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_700) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_701)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_702));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_267_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_700) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_701) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_702))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_701) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_702)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_703) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_704)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_705));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_268_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_703) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_704) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_705))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_704) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_705)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_706) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_707)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_269_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_706) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_707) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_708))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_707) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_708)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_270_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_709) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_710)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_711));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_270_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_709) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_710) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_711))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_710) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_711)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_271_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_712) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_713)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_714));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_271_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_712) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_713) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_714))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_713) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_714)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_272_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_715) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_716)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_717));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_272_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_715) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_716) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_717))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_716) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_717)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_273_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_718) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_719)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_720));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_273_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_718) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_719) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_720))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_719) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_720)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_274_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_721) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_722)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_723));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_274_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_721) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_722) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_723))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_722) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_723)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_275_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_724) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_725)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_726));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_275_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_724) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_725) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_726))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_725) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_726)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_727) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_728)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_729));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_276_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_727) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_728) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_729))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_728) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_729)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_730) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_731)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_732));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_277_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_730) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_731) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_732))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_731) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_732)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_733) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_734)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_735));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_278_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_733) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_734) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_735))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_734) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_735)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_279_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_736) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_737)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_738));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_279_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_736) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_737) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_738))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_737) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_738)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_280_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_739) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_740)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_741));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_280_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_739) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_740) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_741))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_740) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_741)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_281_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_742) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_743)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_744));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_281_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_742) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_743) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_744))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_743) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_744)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_282_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_745) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_746)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_747));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_282_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_745) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_746) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_747))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_746) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_747)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_283_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_748) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_749)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_750));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_283_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_748) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_749) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_750))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_749) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_750)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_751) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_752)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_753));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_284_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_751) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_752) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_753))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_752) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_753)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_754) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_755)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_756));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_285_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_754) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_755) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_756))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_755) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_756)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_757) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_758)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_759));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_286_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_757) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_758) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_759))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_758) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_759)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_760) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_761)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_762));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_287_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_760) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_761) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_762))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_761) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_762)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_288_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_763) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_764)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_765));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_288_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_763) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_764) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_765))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_764) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_765)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_289_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_766) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_767)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_768));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_289_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_766) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_767) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_768))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_767) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_768)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_290_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_769) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_770)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_771));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_290_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_769) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_770) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_771))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_770) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_771)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_291_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_772) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_773)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_774));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_291_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_772) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_773) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_774))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_773) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_774)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_292_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_775) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_776)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_777));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_292_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_775) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_776) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_777))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_776) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_777)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_778) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_779)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_780));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_293_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_778) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_779) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_780))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_779) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_780)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_782) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_783)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_784));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_294_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_782) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_783) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_784))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_783) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_784)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_785) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_786)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_787));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_295_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_785) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_786) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_787))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_786) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_787)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_788) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_789)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_790));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_296_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_788) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_789) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_790))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_789) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_790)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_297_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_791) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_792)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_793));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_297_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_791) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_792) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_793))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_792) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_793)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_298_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_794) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_795)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_796));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_298_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_794) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_795) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_796))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_795) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_796)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_299_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_797) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_798)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_799));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_299_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_797) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_798) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_799))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_798) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_799)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_300_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_800) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_801)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_802));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_300_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_800) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_801) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_802))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_801) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_802)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_301_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_803) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_804)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_805));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_301_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_803) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_804) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_805))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_804) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_805)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_806) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_807)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_808));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_302_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_806) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_807) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_808))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_807) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_808)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_810) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_811)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_812));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_303_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_810) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_811) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_812))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_811) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_812)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_813) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_814)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_815));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_304_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_813) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_814) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_815))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_814) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_815)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_816) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_817)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_818));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_305_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_816) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_817) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_818))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_817) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_818)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_306_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_819) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_820)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_821));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_306_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_819) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_820) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_821))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_820) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_821)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_307_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_822) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_823)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_824));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_307_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_822) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_823) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_824))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_823) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_824)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_308_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_825) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_826)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_827));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_308_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_825) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_826) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_827))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_826) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_827)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_309_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_828) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_829)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_830));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_309_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_828) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_829) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_830))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_829) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_830)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_310_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_831) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_832)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_833));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_310_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_831) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_832) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_833))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_832) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_833)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_311_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_834) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_835)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_836));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_311_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_834) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_835) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_836))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_835) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_836)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_839) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_840)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_841));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_313_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_839) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_840) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_841))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_840) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_841)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_842) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_843)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_844));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_314_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_842) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_843) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_844))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_843) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_844)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_845) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_846)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_847));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_315_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_845) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_846) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_847))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_846) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_847)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_316_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_848) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_849)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_850));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_316_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_848) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_849) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_850))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_849) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_850)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_317_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_851) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_852)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_853));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_317_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_851) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_852) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_853))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_852) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_853)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_318_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_854) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_855)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_856));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_318_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_854) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_855) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_856))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_855) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_856)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_319_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_857) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_858)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_859));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_319_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_857) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_858) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_859))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_858) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_859)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_320_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_860) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_861)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_862));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_320_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_860) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_861) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_862))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_861) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_862)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_321_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_863) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_864)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_865));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_321_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_863) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_864) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_865))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_864) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_865)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_868) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_869)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_870));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_323_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_868) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_869) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_870))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_869) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_870)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_871) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_872)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_873));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_324_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_871) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_872) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_873))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_872) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_873)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_874) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_875)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_876));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_325_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_874) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_875) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_876))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_875) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_876)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_326_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_877) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_878)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_879));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_326_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_877) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_878) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_879))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_878) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_879)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_327_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_880) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_881)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_882));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_327_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_880) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_881) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_882))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_881) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_882)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_328_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_883) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_884)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_885));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_328_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_883) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_884) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_885))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_884) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_885)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_329_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_886) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_887)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_888));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_329_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_886) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_887) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_888))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_887) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_888)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_330_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_889) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_890)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_891));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_330_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_889) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_890) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_891))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_890) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_891)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_331_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_892) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_893)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_894));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_331_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_892) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_893) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_894))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_893) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_894)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_898) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_899)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_900));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_333_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_898) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_899) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_900))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_899) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_900)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_901) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_902)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_903));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_334_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_901) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_902) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_903))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_902) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_903)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_904) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_905)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_906));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_335_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_904) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_905) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_906))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_905) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_906)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_336_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_907) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_908)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_909));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_336_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_907) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_908) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_909))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_908) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_909)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_337_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_910) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_911)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_912));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_337_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_910) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_911) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_912))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_911) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_912)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_338_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_913) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_914)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_915));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_338_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_913) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_914) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_915))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_914) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_915)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_339_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_916) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_917)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_918));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_339_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_916) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_917) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_918))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_917) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_918)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_340_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_919) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_920)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_921));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_340_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_919) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_920) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_921))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_920) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_921)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_922) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_923)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_924));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_341_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_922) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_923) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_924))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_923) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_924)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_928) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_929)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_930));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_343_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_928) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_929) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_930))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_929) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_930)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_931) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_932)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_933));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_344_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_931) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_932) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_933))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_932) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_933)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_934) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_935)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_936));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_345_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_934) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_935) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_936))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_935) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_936)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_346_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_937) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_938)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_939));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_346_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_937) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_938) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_939))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_938) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_939)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_347_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_940) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_941)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_942));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_347_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_940) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_941) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_942))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_941) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_942)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_348_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_943) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_944)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_945));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_348_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_943) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_944) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_945))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_944) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_945)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_349_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_946) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_947)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_948));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_349_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_946) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_947) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_948))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_947) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_948)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_350_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_949) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_950)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_951));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_350_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_949) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_950) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_951))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_950) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_951)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_952) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_953)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_954));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_351_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_952) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_953) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_954))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_953) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_954)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_959) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_960)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_961));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_353_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_959) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_960) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_961))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_960) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_961)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_962) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_963)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_964));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_354_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_962) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_963) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_964))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_963) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_964)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_965) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_966)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_967));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_355_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_965) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_966) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_967))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_966) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_967)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_356_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_968) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_969)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_970));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_356_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_968) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_969) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_970))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_969) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_970)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_357_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_971) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_972)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_973));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_357_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_971) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_972) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_973))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_972) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_973)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_358_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_974) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_975)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_976));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_358_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_974) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_975) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_976))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_975) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_976)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_359_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_977) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_978)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_979));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_359_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_977) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_978) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_979))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_978) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_979)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_360_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_980) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_981)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_982));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_360_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_980) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_981) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_982))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_981) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_982)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_983) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_984)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_985));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_361_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_983) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_984) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_985))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_984) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_985)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_990) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_991)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_992));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_363_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_990) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_991) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_992))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_991) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_992)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_993) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_994)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_995));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_364_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_993) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_994) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_995))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_994) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_995)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_996) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_997)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_998));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_365_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_996) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_997) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_998))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_997) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_998)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_366_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_999) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1000)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1001));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_366_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_999) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1000) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1001))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1000) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1001)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_367_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1002) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1003)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1004));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_367_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1002) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1003) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1004))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1003) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1004)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_368_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1005) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1006)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1007));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_368_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1005) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1006) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1007))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1006) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1007)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_369_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1008) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1009)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1010));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_369_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1008) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1009) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1010))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1009) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1010)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_370_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1011) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1012)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1013));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_370_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1011) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1012) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1013))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1012) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1013)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_371_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1014) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1015)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1016));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_371_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1014) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1015) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1016))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1015) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1016)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1022) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1023)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1024));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_374_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1022) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1023) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1024))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1023) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1024)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1025) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1026)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1027));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_375_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1025) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1026) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1027))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1026) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1027)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1028) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1029)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1030));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_376_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1028) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1029) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1030))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1029) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1030)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_377_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1031) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1032)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1033));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_377_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1031) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1032) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1033))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1032) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1033)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_378_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1034) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1035)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1036));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_378_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1034) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1035) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1036))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1035) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1036)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_379_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1037) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1038)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1039));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_379_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1037) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1038) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1039))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1038) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1039)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_380_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1040) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1041)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1042));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_380_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1040) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1041) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1042))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1041) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1042)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_381_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1043) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1044)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1045));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_381_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1043) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1044) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1045))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1044) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1045)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_382_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1046) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1047)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1048));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_382_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1046) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1047) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1048))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1047) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1048)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1054) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1055)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1056));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_385_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1054) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1055) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1056))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1055) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1056)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1057) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1058)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1059));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_386_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1057) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1058) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1059))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1058) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1059)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1060) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1061)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1062));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_387_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1060) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1061) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1062))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1061) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1062)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_388_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1063) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1064)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1065));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_388_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1063) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1064) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1065))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1064) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1065)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_389_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1066) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1067)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1068));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_389_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1066) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1067) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1068))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1067) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1068)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_390_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1069) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1070)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1071));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_390_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1069) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1070) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1071))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1070) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1071)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_391_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1072) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1073)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1074));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_391_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1072) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1073) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1074))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1073) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1074)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_392_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1075) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1076)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1077));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_392_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1075) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1076) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1077))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1076) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1077)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_393_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1078) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1079)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1080));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_393_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1078) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1079) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1080))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1079) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1080)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1087) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1088)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1089));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_396_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1087) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1088) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1089))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1088) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1089)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1090) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1091)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1092));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_397_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1090) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1091) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1092))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1091) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1092)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1093) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1094)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1095));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_398_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1093) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1094) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1095))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1094) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1095)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_399_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1096) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1097)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1098));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_399_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1096) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1097) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1098))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1097) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1098)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_400_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1099) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1100)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1101));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_400_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1099) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1100) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1101))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1100) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1101)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_401_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1102) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1103)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1104));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_401_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1102) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1103) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1104))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1103) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1104)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_402_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1105) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1106)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1107));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_402_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1105) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1106) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1107))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1106) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1107)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_403_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1108) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1109)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1110));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_403_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1108) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1109) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1110))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1109) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1110)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_404_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1111) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1112)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1113));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_404_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1111) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1112) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1113))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1112) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1113)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1120) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1121)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1122));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_407_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1120) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1121) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1122))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1121) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1122)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1123) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1124)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1125));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_408_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1123) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1124) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1125))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1124) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1125)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1126) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1127)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1128));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_409_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1126) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1127) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1128))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1127) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1128)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_410_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1129) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1130)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1131));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_410_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1129) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1130) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1131))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1130) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1131)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_411_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1132) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1133)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1134));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_411_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1132) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1133) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1134))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1133) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1134)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_412_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1135) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1136)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1137));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_412_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1135) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1136) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1137))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1136) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1137)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_413_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1138) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1139)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1140));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_413_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1138) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1139) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1140))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1139) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1140)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_414_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1141) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1142)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1143));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_414_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1141) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1142) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1143))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1142) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1143)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_415_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1144) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1145)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1146));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_415_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1144) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1145) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1146))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1145) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1146)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1153) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1154)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1155));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_418_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1153) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1154) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1155))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1154) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1155)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1156) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1157)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1158));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_419_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1156) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1157) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1158))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1157) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1158)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1159) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1160)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1161));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_420_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1159) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1160) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1161))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1160) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1161)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_421_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1162) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1163)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1164));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_421_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1162) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1163) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1164))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1163) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1164)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_422_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1165) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1166)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1167));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_422_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1165) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1166) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1167))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1166) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1167)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_423_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1168) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1169)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1170));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_423_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1168) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1169) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1170))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1169) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1170)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_424_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1171) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1172)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1173));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_424_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1171) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1172) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1173))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1172) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1173)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1174) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1175)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1176));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_425_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1174) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1175) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1176))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1175) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1176)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_426_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1177) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1178)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1179));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_426_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1177) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1178) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1179))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1178) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1179)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1186) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1187)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1188));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_429_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1186) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1187) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1188))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1187) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1188)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1189) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1190)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1191));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_430_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1189) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1190) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1191))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1190) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1191)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1192) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1193)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1194));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_431_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1192) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1193) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1194))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1193) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1194)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_432_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1195) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1196)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1197));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_432_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1195) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1196) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1197))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1196) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1197)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_433_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1198) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1199)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1200));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_433_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1198) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1199) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1200))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1199) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1200)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_434_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1201) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1202)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1203));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_434_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1201) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1202) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1203))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1202) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1203)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_435_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1204) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1205)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1206));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_435_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1204) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1205) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1206))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1205) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1206)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_436_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1207) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1208)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1209));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_436_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1207) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1208) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1209))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1208) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1209)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1210) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1211)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1212));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_437_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1210) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1211) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1212))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1211) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1212)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_440_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1219) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1220)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1221));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_440_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1219) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1220) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1221))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1220) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1221)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1222) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1223)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1224));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_441_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1222) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1223) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1224))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1223) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1224)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1225) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1226)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1227));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_442_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1225) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1226) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1227))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1226) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1227)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_443_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1228) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1229)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1230));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_443_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1228) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1229) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1230))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1229) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1230)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_444_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1231) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1232)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1233));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_444_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1231) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1232) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1233))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1232) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1233)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_445_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1234) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1235)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1236));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_445_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1234) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1235) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1236))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1235) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1236)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_446_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1237) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1238)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1239));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_446_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1237) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1238) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1239))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1238) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1239)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_447_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1240) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1241)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1242));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_447_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1240) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1241) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1242))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1241) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1242)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1243) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1244)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1245));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_448_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1243) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1244) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1245))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1244) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1245)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_451_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1252) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1253)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1254));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_451_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1252) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1253) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1254))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1253) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1254)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_452_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1255) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1256)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1257));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_452_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1255) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1256) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1257))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1256) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1257)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1258) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1259)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1260));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_453_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1258) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1259) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1260))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1259) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1260)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_454_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1261) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1262)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1263));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_454_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1261) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1262) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1263))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1262) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1263)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_455_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1264) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1265)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1266));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_455_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1264) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1265) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1266))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1265) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1266)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1267) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1268)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1269));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_456_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1267) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1268) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1269))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1268) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1269)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1270) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1271)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1272));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_457_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1270) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1271) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1272))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1271) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1272)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1273) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1274)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1275));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_458_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1273) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1274) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1275))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1274) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1275)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1276) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1277)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1278));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_459_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1276) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1277) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1278))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1277) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1278)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_463_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1288) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1289)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1290));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_463_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1288) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1289) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1290))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1289) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1290)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_464_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1291) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1292)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1293));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_464_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1291) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1292) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1293))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1292) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1293)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_465_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1294) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1295)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1296));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_465_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1294) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1295) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1296))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1295) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1296)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1297) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1298)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1299));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_466_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1297) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1298) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1299))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1298) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1299)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1300) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1301)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1302));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_467_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1300) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1301) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1302))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1301) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1302)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1303) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1304)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1305));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_468_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1303) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1304) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1305))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1304) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1305)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1306) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1307)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1308));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_469_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1306) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1307) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1308))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1307) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1308)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1309) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1310)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1311));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_470_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1309) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1310) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1311))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1310) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1311)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_473_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1317) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1318)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1319));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_473_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1317) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1318) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1319))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1318) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1319)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_474_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1320) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1321)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1322));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_474_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1320) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1321) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1322))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1321) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1322)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_475_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1323) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1324)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1325));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_475_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1323) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1324) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1325))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1324) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1325)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_476_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1326) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1327)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1328));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_476_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1326) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1327) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1328))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1327) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1328)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_477_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1329) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1330)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1331));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_477_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1329) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1330) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1331))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1330) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1331)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1332) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1333)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1334));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_478_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1332) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1333) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1334))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1333) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1334)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_479_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1335) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1336)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1337));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_479_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1335) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1336) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1337))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1336) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1337)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1338) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1339)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1340));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_480_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1338) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1339) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1340))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1339) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1340)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1341) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1342)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1343));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_481_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1341) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1342) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1343))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1342) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1343)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_484_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1351) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1352)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1353));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_484_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1351) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1352) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1353))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1352) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1353)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_485_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1354) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1355)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1356));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_485_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1354) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1355) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1356))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1355) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1356)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_486_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1357) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1358)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1359));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_486_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1357) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1358) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1359))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1358) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1359)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_487_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1360) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1361)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1362));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_487_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1360) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1361) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1362))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1361) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1362)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_488_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1363) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1364)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1365));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_488_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1363) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1364) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1365))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1364) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1365)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_489_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1366) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1367)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1368));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_489_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1366) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1367) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1368))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1367) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1368)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1369) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1370)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1371));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_490_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1369) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1370) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1371))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1370) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1371)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1372) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1373)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1374));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_491_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1372) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1373) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1374))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1373) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1374)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_493_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1379) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1380)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1381));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_493_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1379) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1380) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1381))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1380) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1381)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_494_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1382) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1383)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1384));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_494_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1382) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1383) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1384))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1383) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1384)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_495_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1385) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1386)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1387));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_495_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1385) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1386) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1387))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1386) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1387)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_496_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1388) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1389)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1390));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_496_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1388) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1389) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1390))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1389) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1390)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_497_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1391) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1392)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1393));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_497_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1391) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1392) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1393))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1392) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1393)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_498_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1394) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1395)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1396));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_498_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1394) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1395) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1396))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1395) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1396)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_499_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1397) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1398)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1399));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_499_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1397) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1398) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1399))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1398) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1399)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_500_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1400) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1401)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1402));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_500_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1400) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1401) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1402))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1401) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1402)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_501_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1403) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1404)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1405));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_501_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1403) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1404) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1405))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1404) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1405)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_504_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1412) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1413)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1414));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_504_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1412) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1413) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1414))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1413) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1414)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_505_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1415) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1416)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1417));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_505_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1415) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1416) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1417))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1416) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1417)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_506_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1418) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1419)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1420));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_506_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1418) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1419) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1420))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1419) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1420)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_507_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1421) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1422)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1423));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_507_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1421) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1422) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1423))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1422) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1423)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_508_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1424) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1425)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1426));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_508_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1424) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1425) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1426))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1425) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1426)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_509_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1427) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1428)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1429));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_509_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1427) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1428) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1429))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1428) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1429)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_510_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1430) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1431)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1432));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_510_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1430) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1431) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1432))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1431) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1432)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_511_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1433) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1434)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1435));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_511_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1433) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1434) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1435))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1434) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1435)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_513_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1439) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1440)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1441));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_513_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1439) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1440) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1441))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1440) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1441)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_514_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1442) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1443)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1444));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_514_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1442) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1443) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1444))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1443) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1444)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_515_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1445) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1446)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1447));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_515_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1445) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1446) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1447))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1446) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1447)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_516_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1448) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1449)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1450));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_516_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1448) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1449) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1450))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1449) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1450)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_517_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1451) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1452)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1453));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_517_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1451) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1452) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1453))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1452) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1453)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_518_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1454) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1455)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1456));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_518_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1454) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1455) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1456))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1455) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1456)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_519_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1457) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1458)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1459));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_519_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1457) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1458) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1459))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1458) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1459)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_520_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1460) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1461)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1462));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_520_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1460) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1461) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1462))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1461) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1462)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_521_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1463) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1464)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1465));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_521_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1463) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1464) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1465))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1464) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1465)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_524_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1471) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1472)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1473));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_524_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1471) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1472) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1473))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1472) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1473)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_525_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1474) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1475)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1476));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_525_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1474) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1475) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1476))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1475) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1476)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_526_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1477) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1478)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1479));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_526_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1477) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1478) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1479))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1478) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1479)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_527_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1480) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1481)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1482));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_527_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1480) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1481) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1482))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1481) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1482)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_528_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1483) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1484)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1485));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_528_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1483) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1484) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1485))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1484) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1485)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_529_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1486) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1487)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1488));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_529_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1486) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1487) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1488))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1487) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1488)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_530_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1489) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1490)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1491));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_530_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1489) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1490) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1491))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1490) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1491)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_531_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1492) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1493)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1494));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_531_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1492) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1493) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1494))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1493) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1494)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_533_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1497) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1498)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1499));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_533_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1497) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1498) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1499))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1498) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1499)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_534_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1500) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1501)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1502));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_534_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1500) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1501) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1502))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1501) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1502)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_535_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1503) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1504)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1505));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_535_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1503) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1504) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1505))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1504) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1505)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_536_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1506) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1507)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1508));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_536_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1506) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1507) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1508))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1507) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1508)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_537_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1509) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1510)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1511));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_537_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1509) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1510) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1511))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1510) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1511)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_538_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1512) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1513)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1514));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_538_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1512) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1513) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1514))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1513) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1514)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_539_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1515) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1516)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1517));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_539_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1515) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1516) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1517))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1516) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1517)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_540_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1518) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1519)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1520));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_540_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1518) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1519) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1520))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1519) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1520)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_541_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1521) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1522)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1523));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_541_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1521) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1522) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1523))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1522) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1523)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_543_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1528) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1529)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1530));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_543_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1528) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1529) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1530))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1529) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1530)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_544_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1531) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1532)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1533));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_544_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1531) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1532) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1533))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1532) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1533)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_545_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1534) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1535)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1536));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_545_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1534) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1535) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1536))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1535) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1536)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_546_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1537) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1538)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1539));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_546_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1537) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1538) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1539))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1538) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1539)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_547_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1540) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1541)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1542));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_547_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1540) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1541) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1542))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1541) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1542)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_548_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1543) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1544)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1545));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_548_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1543) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1544) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1545))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1544) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1545)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_549_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1546) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1547)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1548));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_549_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1546) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1547) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1548))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1547) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1548)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_550_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1549) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1550)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1551));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_550_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1549) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1550) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1551))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1550) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1551)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1553) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1554)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1555));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_551_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1553) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1554) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1555))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1554) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1555)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1556) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1557)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1558));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_552_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1556) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1557) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1558))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1557) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1558)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_553_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1559) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1560)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1561));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_553_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1559) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1560) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1561))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1560) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1561)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_554_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1562) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1563)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1564));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_554_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1562) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1563) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1564))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1563) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1564)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_555_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1565) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1566)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1567));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_555_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1565) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1566) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1567))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1566) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1567)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_556_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1568) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1569)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1570));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_556_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1568) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1569) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1570))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1569) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1570)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_557_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1571) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1572)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1573));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_557_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1571) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1572) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1573))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1572) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1573)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_558_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1574) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1575)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1576));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_558_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1574) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1575) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1576))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1575) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1576)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_559_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1577) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1578)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1579));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_559_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1577) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1578) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1579))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1578) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1579)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1583) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1584)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1585));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_561_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1583) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1584) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1585))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1584) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1585)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_562_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1586) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1587)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1588));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_562_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1586) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1587) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1588))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1587) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1588)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_563_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1589) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1590)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1591));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_563_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1589) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1590) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1591))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1590) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1591)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_564_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1592) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1593)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1594));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_564_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1592) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1593) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1594))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1593) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1594)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_565_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1595) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1596)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1597));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_565_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1595) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1596) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1597))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1596) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1597)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_566_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1598) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1599)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1600));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_566_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1598) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1599) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1600))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1599) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1600)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1601) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1602)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1603));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_567_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1601) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1602) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1603))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1602) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1603)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1604) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1605)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1606));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_568_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1604) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1605) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1606))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1605) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1606)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_569_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1607) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1608)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1609));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_569_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1607) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1608) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1609))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1608) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1609)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1610) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1611)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1612));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_570_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1610) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1611) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1612))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1611) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1612)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1613) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1614)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1615));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_571_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1613) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1614) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1615))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1614) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1615)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_572_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1616) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1617)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1618));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_572_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1616) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1617) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1618))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1617) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1618)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_573_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1619) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1620)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1621));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_573_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1619) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1620) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1621))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1620) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1621)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1622) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1623)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1624));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_574_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1622) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1623) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1624))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1623) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1624)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_575_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1625) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1626)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1627));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_575_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1625) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1626) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1627))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1626) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1627)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_576_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1628) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1629)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1630));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_576_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1628) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1629) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1630))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1629) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1630)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_579_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1636) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1637)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1638));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_579_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1636) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1637) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1638))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1637) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1638)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1639) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1640)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1641));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_580_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1639) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1640) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1641))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1640) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1641)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_581_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1642) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1643)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1644));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_581_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1642) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1643) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1644))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1643) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1644)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_582_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1645) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1646)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1647));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_582_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1645) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1646) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1647))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1646) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1647)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_583_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1648) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1649)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1650));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_583_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1648) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1649) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1650))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1649) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1650)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_584_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1651) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1652)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1653));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_584_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1651) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1652) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1653))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1652) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1653)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1654) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1655)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1656));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_585_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1654) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1655) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1656))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1655) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1656)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_587_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1659) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1660)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1661));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_587_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1659) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1660) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1661))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1660) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1661)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_588_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1662) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1663)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1664));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_588_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1662) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1663) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1664))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1663) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1664)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_589_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1665) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1666)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1667));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_589_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1665) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1666) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1667))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1666) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1667)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_590_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1668) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1669)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1670));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_590_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1668) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1669) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1670))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1669) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1670)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_591_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1671) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1672)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1673));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_591_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1671) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1672) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1673))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1672) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1673)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_592_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1674) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1675)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1676));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_592_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1674) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1675) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1676))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1675) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1676)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_593_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1677) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1678)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1679));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_593_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1677) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1678) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1679))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1678) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1679)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1680) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1681)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1682));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_596_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1687) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1688)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1689));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_596_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1687) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1688) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1689))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1688) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1689)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_597_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1690) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1691)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1692));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_597_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1690) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1691) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1692))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1691) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1692)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_598_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1693) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1694)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1695));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_598_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1693) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1694) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1695))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1694) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1695)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_599_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1696) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1697)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1698));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_599_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1696) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1697) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1698))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1697) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1698)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_600_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1699) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1700)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1701));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_600_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1699) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1700) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1701))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1700) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1701)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1702) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1703)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1704));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_602_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1705) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1706)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1707));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_603_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1709) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1710)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1711));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_603_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1709) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1710) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1711))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1710) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1711)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_604_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1712) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1713)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1714));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_604_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1712) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1713) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1714))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1713) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1714)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_605_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1715) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1716)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1717));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_605_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1715) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1716) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1717))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1716) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1717)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_606_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1718) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1719)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1720));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_606_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1718) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1719) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1720))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1719) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1720)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_607_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1721) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1722)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1723));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_607_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1721) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1722) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1723))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1722) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1723)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_608_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1724) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1725)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1726));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_608_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1724) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1725) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1726))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1725) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1726)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_612_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1736) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1737)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1738));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_612_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1736) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1737) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1738))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1737) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1738)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_613_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1739) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1740)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1741));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_613_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1739) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1740) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1741))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1740) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1741)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_614_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1742) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1743)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1744));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_614_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1742) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1743) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1744))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1743) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1744)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_615_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1745) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1746)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1747));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_615_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1745) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1746) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1747))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1746) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1747)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_616_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1748) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1749)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1750));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_616_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1748) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1749) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1750))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1749) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1750)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_619_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1757) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1758)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1759));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_619_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1757) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1758) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1759))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1758) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1759)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_620_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1760) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1761)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1762));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_620_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1760) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1761) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1762))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1761) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1762)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_621_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1763) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1764)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1765));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_621_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1763) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1764) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1765))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1764) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1765)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_622_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1766) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1767)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1768));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_622_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1766) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1767) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1768))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1767) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1768)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_623_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1769) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1770)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1771));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_623_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1769) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1770) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1771))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1770) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1771)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_624_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1772) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1773)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1774));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_624_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1772) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1773) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1774))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1773) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1774)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_628_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1783) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1784)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1785));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_628_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1783) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1784) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1785))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1784) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1785)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_629_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1786) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1787)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1788));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_629_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1786) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1787) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1788))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1787) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1788)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_630_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1789) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1790)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1791));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_630_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1789) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1790) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1791))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1790) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1791)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_631_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1792) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1793)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1794));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_631_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1792) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1793) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1794))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1793) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1794)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_632_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1795) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1796)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1797));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_632_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1795) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1796) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1797))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1796) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1797)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_635_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1803) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1804)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1805));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_635_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1803) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1804) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1805))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1804) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1805)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_636_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1806) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1807)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1808));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_636_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1806) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1807) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1808))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1807) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1808)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_637_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1809) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1810)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1811));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_637_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1809) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1810) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1811))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1810) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1811)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_638_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1812) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1813)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1814));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_638_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1812) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1813) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1814))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1813) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1814)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_639_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1815) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1816)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1817));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_639_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1815) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1816) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1817))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1816) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1817)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_640_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1818) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1819)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1820));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_640_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1818) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1819) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1820))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1819) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1820)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_643_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1828) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1829)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1830));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_643_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1828) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1829) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1830))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1829) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1830)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_644_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1831) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1832)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1833));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_644_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1831) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1832) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1833))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1832) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1833)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_645_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1834) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1835)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1836));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_645_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1834) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1835) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1836))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1835) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1836)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_646_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1837) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1838)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1839));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_646_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1837) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1838) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1839))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1838) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1839)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_647_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1840) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1841)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1842));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_647_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1840) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1841) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1842))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1841) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1842)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_649_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1847) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1848)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1849));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_649_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1847) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1848) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1849))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1848) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1849)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_650_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1850) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1851)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1852));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_650_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1850) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1851) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1852))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1851) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1852)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_651_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1853) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1854)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1855));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_651_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1853) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1854) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1855))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1854) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1855)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_652_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1856) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1857)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1858));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_652_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1856) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1857) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1858))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1857) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1858)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_653_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1859) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1860)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1861));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_653_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1859) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1860) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1861))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1860) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1861)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_654_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1862) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1863)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1864));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_654_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1862) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1863) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1864))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1863) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1864)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_657_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1871) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1872)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1873));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_657_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1871) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1872) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1873))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1872) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1873)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_658_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1874) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1875)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1876));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_658_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1874) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1875) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1876))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1875) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1876)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_659_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1877) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1878)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1879));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_659_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1877) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1878) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1879))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1878) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1879)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_660_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1880) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1881)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1882));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_660_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1880) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1881) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1882))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1881) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1882)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_661_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1883) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1884)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1885));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_661_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1883) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1884) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1885))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1884) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1885)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1889) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1890)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1891));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_663_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1889) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1890) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1891))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1890) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1891)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_664_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1892) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1893)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1894));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_664_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1892) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1893) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1894))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1893) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1894)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_665_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1895) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1896)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1897));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_665_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1895) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1896) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1897))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1896) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1897)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_666_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1898) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1899)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1900));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_666_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1898) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1899) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1900))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1899) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1900)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_667_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1901) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1902)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1903));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_667_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1901) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1902) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1903))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1902) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1903)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_668_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1904) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1905)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1906));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_668_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1904) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1905) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1906))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1905) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1906)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1912) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1913)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1914));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_671_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1912) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1913) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1914))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1913) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1914)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1915) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1916)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1917));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_672_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1915) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1916) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1917))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1916) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1917)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_673_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1918) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1919)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1920));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_673_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1918) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1919) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1920))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1919) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1920)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1921) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1922)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1923));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_674_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1921) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1922) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1923))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1922) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1923)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1924) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1925)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1926));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_675_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1924) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1925) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1926))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1925) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1926)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_677_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1929) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1930)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1931));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_677_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1929) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1930) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1931))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1930) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1931)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_678_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1932) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1933)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1934));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_678_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1932) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1933) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1934))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1933) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1934)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1935) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1936)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1937));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_679_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1935) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1936) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1937))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1936) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1937)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_680_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1938) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1939)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1940));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_680_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1938) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1939) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1940))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1939) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1940)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_681_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1941) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1942)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1943));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1944) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1945)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1946));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_684_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1951) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1952)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1953));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_684_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1951) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1952) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1953))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1952) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1953)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_685_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1954) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1955)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1956));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_685_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1954) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1955) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1956))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1955) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1956)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_686_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1957) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1958)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1959));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_686_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1957) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1958) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1959))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1958) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1959)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_687_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1960) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1961)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1962));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_689_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1967) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1968)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1969));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_689_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1967) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1968) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1969))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1968) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1969)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_690_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1970) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1971)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1972));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_690_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1970) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1971) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1972))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1971) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1972)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_691_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1973) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1974)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1975));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_691_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1973) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1974) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1975))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1974) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1975)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_692_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1976) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1977)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1978));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_692_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1976) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1977) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1978))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1977) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1978)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_693_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1979) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1980)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1981));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_696_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1988) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1989)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1990));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_696_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1988) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1989) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1990))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1989) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1990)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_697_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1991) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1992)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1993));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_697_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1991) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1992) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1993))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1992) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1993)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_698_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1994) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1995)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1996));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_698_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1994) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1995) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1996))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1995) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1996)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_699_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1997) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1998)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1999));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_701_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2003) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2004)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2005));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_701_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2003) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2004) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2005))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2004) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2005)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_702_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2006) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2007)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2008));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_702_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2006) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2007) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2008))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2007) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2008)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_703_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2009) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2010)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2011));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_703_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2009) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2010) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2011))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2010) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2011)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_704_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2012) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2013)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2014));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_704_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2012) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2013) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2014))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2013) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2014)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2015) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2016)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2017));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_708_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2023) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2024)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2025));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_708_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2023) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2024) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2025))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2024) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2025)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_709_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2026) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2027)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2028));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_709_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2026) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2027) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2028))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2027) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2028)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_710_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2029) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2030)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2031));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_710_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2029) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2030) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2031))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2030) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2031)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_711_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2032) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2033)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2034));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_713_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2037) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2038)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2039));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_713_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2037) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2038) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2039))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2038) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2039)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_714_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2040) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2041)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2042));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_714_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2040) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2041) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2042))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2041) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2042)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_715_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2043) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2044)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2045));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_715_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2043) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2044) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2045))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2044) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2045)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_716_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2046) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2047)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2048));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_716_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2046) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2047) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2048))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2047) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2048)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2049) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2050)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2051));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_719_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2056) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2057)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2058));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_719_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2056) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2057) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2058))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2057) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2058)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_720_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2059) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2060)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2061));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_720_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2059) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2060) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2061))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2060) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2061)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_721_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2062) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2063)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2064));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_721_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2062) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2063) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2064))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2063) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2064)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_722_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2065) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2066)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2067));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_723_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2069) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2070)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2071));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_723_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2069) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2070) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2071))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2070) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2071)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2072) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2073)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2074));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_724_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2072) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2073) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2074))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2073) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2074)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2075) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2076)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2077));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_725_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2075) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2076) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2077))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2076) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2077)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2078) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2079)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2080));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_726_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2078) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2079) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2080))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2079) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2080)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_727_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2081) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2082)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2083));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_729_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2087) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2088)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2089));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_729_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2087) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2088) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2089))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2088) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2089)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2090) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2091)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2092));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_730_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2090) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2091) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2092))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2091) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2092)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_731_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2093) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2094)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2095));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_731_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2093) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2094) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2095))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2094) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2095)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_732_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2096) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2097)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2098));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_733_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2099) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2100)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2101));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_733_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2099) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2100) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2101))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2100) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2101)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2102) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2103)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2104));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2105) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2106)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2107));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2108) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2109)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2110));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_739_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2116) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2117)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2118));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_743_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2127) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2128)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2129));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_743_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2127) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2128) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2129))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2128) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2129)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_744_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2130) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2131)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2132));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_748_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2143) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2144)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2145));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_751_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2153) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2154)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2155));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_751_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2153) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2154) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2155))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2154) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2155)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_752_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2156) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2157)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2158));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_756_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2168) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2169)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2170));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_759_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2177) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2178)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2179));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_759_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2177) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2178) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2179))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2178) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2179)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2180) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2181)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2182));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_764_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2191) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2192)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2193));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_767_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2199) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2200)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2201));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_767_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2199) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2200) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2201))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2200) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2201)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_768_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2202) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2203)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2204));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_771_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2212) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2213)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2214));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_773_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2219) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2220)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2221));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_773_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2219) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2220) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2221))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2220) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2221)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_774_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2222) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2223)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2224));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_777_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2231) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2232)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2233));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_779_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2237) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2238)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2239));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_779_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2237) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2238) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2239))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2238) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2239)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_780_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2240) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2241)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2242));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_783_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2248) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2249)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2250));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_785_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2253) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2254)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2255));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_785_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2253) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2254) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2255))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2254) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2255)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2256) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2257)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2258));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_788_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2263) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2264)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2265));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_789_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2267) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2268)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2269));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_789_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2267) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2268) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2269))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2268) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2269)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_790_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2270) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2271)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2272));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_792_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2276) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2277)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2278));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2279) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2280)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2281));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_793_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2279) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2280) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2281))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2280) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2281)));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0];
    vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data 
        = vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1
        [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0];
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_0_T 
        = (vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0
           [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf__DOT___hit_way_1_T 
        = (vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1
           [vlSelf->CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0] 
           & (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG));
    if ((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S 
                       >> 0x3fU)))) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13 
            = (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S;
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_13 
            = vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S;
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_18 
            = (- vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S);
    }
    if ((vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U] 
         >> 0x1fU)) {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16 
            = (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])));
    } else {
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_16 
            = (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U])));
        vlSelf->CoreTop__DOT__EX__DOT__div__DOT___T_26 
            = (- (((QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT__div__DOT__dividend[2U]))));
    }
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2137_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2867) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2868));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2138_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2869) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2870));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2095_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2748) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2749));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2097_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2753) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2754));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2758) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2759));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2763) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2764));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2768) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2769));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2694) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2695) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2696))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2695) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2696)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2700) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2701) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2702))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2701) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2702)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2706) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2707) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2708))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2707) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2708)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2712) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2713) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2714))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2713) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2714)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2718) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2719) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2720))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2719) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2720)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2724) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2725) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2726))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2725) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2726)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2089_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2730) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2731) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2732))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2731) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2732)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2091_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2736) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2737) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2738))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2737) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2738)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2093_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2742) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2743) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2744))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2743) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2744)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2688) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2689) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2690))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2689) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2690)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2663) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2664) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2665))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2664) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2665)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2670) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2671) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2672))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2671) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2672)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2676) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2677) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2678))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2677) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2678)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2682) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2683) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2684))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2683) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2684)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1989_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2416) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2417));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1991_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2421) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2422));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1993_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2426) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2427));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1995_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2431) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2432));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1997_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2436) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2437));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2441) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2442));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2001_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2446) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2447));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2003_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2451) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2452) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2453))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2452) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2453)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2005_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2457) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2458) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2459))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2458) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2459)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2007_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2463) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2464) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2465))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2464) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2465)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2009_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2469) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2470) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2471))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2470) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2471)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2011_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2475) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2476) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2477))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2476) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2477)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2013_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2481) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2482) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2483))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2482) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2483)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2015_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2487) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2488) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2489))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2488) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2489)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2017_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2493) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2494) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2495))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2494) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2495)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2019_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2499) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2500) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2501))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2500) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2501)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2021_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2505) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2506) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2507))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2506) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2507)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2023_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2511) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2512) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2513))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2512) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2513)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1954_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2312) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2313));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2314) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2315));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2865) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2866));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2137_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2867) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2868));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2593) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2594) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2595))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2594) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2595)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2600) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2601) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2602))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2601) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2602)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2607) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2608) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2609))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2608) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2609)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2614) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2615) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2616))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2615) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2616)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2621) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2622) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2623))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2622) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2623)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2628) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2629) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2630))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2629) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2630)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2635) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2636) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2637))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2636) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2637)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2642) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2643) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2644))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2643) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2644)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2649) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2650) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2651))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2650) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2651)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2656) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2657) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2658))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2657) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2658)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2586) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2587) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2588))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2587) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2588)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2517) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2518) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2519))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2518) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2519)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2523) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2524) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2525))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2524) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2525)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2530) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2531) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2532))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2531) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2532)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2537) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2538) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2539))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2538) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2539)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2544) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2545) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2546))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2545) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2546)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2551) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2552) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2553))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2552) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2553)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2558) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2559) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2560))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2559) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2560)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2565) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2566) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2567))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2566) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2567)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2572) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2573) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2574))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2573) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2574)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2043_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2579) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2580) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2581))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2580) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2581)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2765) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2766) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2767))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2766) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2767)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2770) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2771)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2772));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2095_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2748) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2749));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2097_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2753) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2754));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2099_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2758) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2759));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2101_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2763) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2764));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2103_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2768) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2769));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2691) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2692) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2693))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2692) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2693)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2697) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2698)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2699));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2078_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2697) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2698) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2699))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2698) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2699)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2079_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2700) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2701)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2702));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2703) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2704)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2705));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2080_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2703) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2704) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2705))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2704) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2705)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2081_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2706) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2707)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2709) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2710)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2711));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2082_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2709) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2710) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2711))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2710) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2711)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2083_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2712) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2713)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2714));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2715) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2716)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2717));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2084_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2715) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2716) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2717))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2716) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2717)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2085_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2718) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2719)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2720));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2721) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2722)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2723));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2086_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2721) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2722) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2723))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2722) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2723)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2087_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2724) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2725)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2726));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2727) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2728)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2729));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2088_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2727) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2728) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2729))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2728) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2729)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2089_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2730) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2731)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2732));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2733) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2734)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2735));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2090_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2733) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2734) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2735))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2734) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2735)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2091_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2736) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2737)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2738));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2739) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2740)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2741));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2092_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2739) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2740) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2741))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2740) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2741)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2093_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2742) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2743)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2744));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2745) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2746)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2747));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2094_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2745) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2746) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2747))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2746) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2747)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2750) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2751)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2752));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2096_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2750) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2751) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2752))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2751) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2752)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2755) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2756)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2757));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2098_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2755) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2756) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2757))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2756) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2757)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2760) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2761)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2762));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2100_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2760) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2761) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2762))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2761) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2762)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2102_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2765) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2766)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2767));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2104_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2770) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2771) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2772))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2771) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2772)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2105_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2774) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2775)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2776));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2685) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2686) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2687))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2686) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2687)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2076_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2691) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2692)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2693));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2077_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2694) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2695)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2696));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1955_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2314) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2315));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2316) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2317));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2863) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2864));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2136_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2865) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2866));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2679) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2680) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2681))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2680) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2681)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2074_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2685) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2686)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2687));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2075_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2688) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2689)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2690));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2105_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2774) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2775) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2776))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2775) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2776)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2778) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2779)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2780));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1956_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2316) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2317));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1957_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2318) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2319));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1957_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2318) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2319));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1958_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2320) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2321));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1958_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2320) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2321));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1959_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2322) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2323));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1959_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2322) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2323));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1960_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2324) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2325));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1960_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2324) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2325));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1961_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2326) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2327));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1961_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2326) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2327));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1962_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2328) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2329));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1962_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2328) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2329));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1963_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2330) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2331));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1963_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2330) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2331));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1964_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2332) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2333));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1964_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2332) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2333));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1965_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2334) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2335));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1965_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2334) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2335));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1966_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2336) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2337));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1966_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2336) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2337));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1967_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2338) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2339)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2340));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1967_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2338) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2339) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2340))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2339) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2340)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1968_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2341) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2342)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2343));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1968_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2341) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2342) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2343))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2342) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2343)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2344) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2345)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2346));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1969_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2344) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2345) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2346))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2345) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2346)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2347) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2348)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2349));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1970_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2347) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2348) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2349))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2348) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2349)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1971_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2350) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2351)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2352));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1971_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2350) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2351) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2352))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2351) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2352)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1972_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2353) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2354)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2355));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1972_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2353) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2354) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2355))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2354) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2355)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1973_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2356) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2357)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2358));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1973_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2356) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2357) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2358))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2357) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2358)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1974_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2359) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2360)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2361));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1974_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2359) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2360) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2361))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2360) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2361)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1975_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2362) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2363)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2364));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1975_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2362) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2363) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2364))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2363) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2364)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1976_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2365) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2366)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2367));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1976_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2365) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2366) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2367))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2366) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2367)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1977_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2369) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2370)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2371));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1977_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2369) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2370) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2371))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2370) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2371)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1978_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2373) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2374)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2375));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1978_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2373) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2374) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2375))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2374) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2375)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1979_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2377) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2378)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2379));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2590) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2591) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2592))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2591) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2592)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2597) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2598)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2599));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2048_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2597) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2598) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2599))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2598) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2599)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2049_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2600) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2601)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2602));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2604) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2605)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2606));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2050_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2604) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2605) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2606))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2605) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2606)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2051_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2607) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2608)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2609));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2611) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2612)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2613));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2052_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2611) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2612) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2613))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2612) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2613)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2053_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2614) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2615)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2616));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2618) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2619)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2620));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2054_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2618) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2619) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2620))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2619) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2620)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2055_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2621) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2622)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2623));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2625) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2626)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2627));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2056_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2625) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2626) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2627))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2626) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2627)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2057_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2628) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2629)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2630));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2632) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2633)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2634));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2058_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2632) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2633) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2634))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2633) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2634)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2059_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2635) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2636)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2637));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2639) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2640)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2641));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2060_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2639) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2640) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2641))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2640) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2641)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2061_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2642) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2643)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2644));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2646) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2647)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2648));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2062_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2646) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2647) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2648))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2647) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2648)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2063_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2649) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2650)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2651));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2653) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2654)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2655));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2064_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2653) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2654) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2655))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2654) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2655)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2065_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2656) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2657)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2658));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2660) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2661)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2662));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2066_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2660) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2661) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2662))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2661) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2662)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2067_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2663) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2664)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2665));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2667) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2668)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2669));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2068_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2667) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2668) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2669))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2668) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2669)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2069_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2670) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2671)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2672));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2673) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2674)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2675));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2070_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2673) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2674) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2675))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2674) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2675)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2071_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2676) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2677)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2678));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2072_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2679) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2680)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2681));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2073_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2682) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2683)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2684));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1979_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2377) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2378) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2379))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2378) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2379)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1980_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2381) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2382)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2383));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2839) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2840));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2123_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2839) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2840));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2841) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2842));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2124_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2841) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2842));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2843) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2844));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2125_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2843) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2844));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2845) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2846));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2126_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2845) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2846));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2847) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2848));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2127_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2847) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2848));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2849) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2850));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2128_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2849) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2850));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2851) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2852));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2129_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2851) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2852));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2853) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2854));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2130_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2853) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2854));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2855) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2856));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2131_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2855) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2856));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2857) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2858));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2132_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2857) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2858));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2859) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2860));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2133_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2859) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2860));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2861) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2862));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2134_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2861) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2862));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2135_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2863) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2864));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2814) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2815) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2816))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2815) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2816)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2818) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2819)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2820));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2116_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2818) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2819) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2820))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2819) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2820)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2117_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2821) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2822)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2823));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2117_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2821) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2822) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2823))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2822) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2823)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2824) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2825)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2826));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2118_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2824) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2825) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2826))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2825) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2826)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2827) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2828)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2829));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2119_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2827) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2828) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2829))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2828) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2829)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2830) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2831)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2832));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2120_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2830) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2831) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2832))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2831) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2832)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2833) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2834)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2835));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2121_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2833) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2834) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2835))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2834) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2835)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2836) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2837)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2838));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2122_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2836) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2837) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2838))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2837) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2838)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2106_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2778) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2779) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2780))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2779) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2780)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2782) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2783)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2784));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2107_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2782) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2783) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2784))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2783) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2784)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2786) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2787)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2788));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2108_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2786) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2787) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2788))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2787) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2788)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2790) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2791)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2792));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2109_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2790) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2791) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2792))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2791) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2792)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2794) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2795)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2796));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2110_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2794) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2795) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2796))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2795) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2796)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2798) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2799)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2800));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2111_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2798) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2799) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2800))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2799) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2800)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2802) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2803)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2804));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2112_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2802) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2803) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2804))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2803) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2804)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2806) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2807)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2808));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2113_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2806) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2807) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2808))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2807) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2808)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2810) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2811)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2812));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2114_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2810) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2811) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2812))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2811) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2812)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2115_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2814) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2815)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2816));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2583) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2584) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2585))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2584) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2585)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2046_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2590) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2591)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2592));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2047_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2593) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2594)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2595));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1980_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2381) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2382) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2383))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2382) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2383)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1981_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2385) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2386)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2387));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1981_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2385) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2386) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2387))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2386) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2387)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1982_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2389) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2390)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2391));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1982_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2389) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2390) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2391))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2390) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2391)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1983_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2393) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2394)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2395));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1983_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2393) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2394) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2395))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2394) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2395)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1984_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2397) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2398)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2399));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1984_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2397) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2398) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2399))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2398) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2399)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1985_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2401) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2402)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2403));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1985_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2401) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2402) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2403))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2402) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2403)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1986_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2405) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2406)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2407));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2042_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2576) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2577) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2578))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2577) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2578)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2044_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2583) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2584)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2585));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2045_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2586) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2587)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2588));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1986_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2405) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2406) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2407))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2406) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2407)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1987_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2409) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2410)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2411));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1989_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2416) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2417));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1987_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2409) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2410) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2411))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2410) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2411)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2413) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2414)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2415));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1991_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2421) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2422));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1993_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2426) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2427));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1995_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2431) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2432));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1997_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2436) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2437));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1999_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2441) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2442));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2001_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2446) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2447));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1988_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2413) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2414) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2415))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2414) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2415)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2418) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2419)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2420));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1990_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2418) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2419) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2420))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2419) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2420)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2423) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2424)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2425));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1992_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2423) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2424) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2425))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2424) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2425)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2428) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2429)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2430));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1994_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2428) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2429) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2430))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2429) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2430)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2433) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2434)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2435));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1996_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2433) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2434) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2435))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2434) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2435)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2438) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2439)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2440));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1998_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2438) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2439) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2440))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2439) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2440)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2000_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2443) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2444)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2445));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2000_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2443) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2444) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2445))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2444) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2445)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2448) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2449)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2450));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2002_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2448) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2449) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2450))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2449) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2450)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2003_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2451) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2452)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2453));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2454) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2455)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2456));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2004_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2454) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2455) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2456))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2455) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2456)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2005_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2457) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2458)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2459));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2460) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2461)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2462));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2006_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2460) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2461) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2462))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2461) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2462)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2007_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2463) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2464)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2465));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2466) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2467)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2468));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2008_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2466) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2467) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2468))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2467) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2468)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2009_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2469) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2470)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2471));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2472) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2473)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2474));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2010_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2472) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2473) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2474))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2473) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2474)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2011_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2475) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2476)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2477));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2478) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2479)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2480));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2012_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2478) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2479) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2480))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2479) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2480)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2013_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2481) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2482)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2483));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2484) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2485)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2486));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2014_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2484) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2485) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2486))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2485) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2486)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2015_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2487) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2488)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2489));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2490) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2491)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2492));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2016_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2490) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2491) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2492))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2491) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2492)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2017_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2493) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2494)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2495));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2496) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2497)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2498));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2018_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2496) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2497) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2498))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2497) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2498)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2019_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2499) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2500)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2501));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2502) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2503)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2504));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2020_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2502) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2503) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2504))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2503) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2504)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2021_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2505) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2506)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2507));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2508) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2509)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2510));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2022_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2508) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2509) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2510))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2509) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2510)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2023_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2511) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2512)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2513));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2514) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2515)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2516));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2024_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2514) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2515) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2516))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2515) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2516)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2025_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2517) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2518)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2519));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2520) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2521)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2522));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2026_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2520) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2521) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2522))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2521) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2522)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2027_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2523) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2524)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2525));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2527) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2528)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2529));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2028_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2527) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2528) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2529))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2528) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2529)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2029_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2530) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2531)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2532));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2534) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2535)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2536));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2030_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2534) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2535) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2536))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2535) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2536)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2031_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2537) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2538)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2539));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2541) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2542)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2543));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2032_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2541) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2542) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2543))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2542) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2543)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2033_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2544) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2545)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2546));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2548) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2549)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2550));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2034_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2548) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2549) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2550))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2549) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2550)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2035_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2551) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2552)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2553));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2555) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2556)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2557));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2037_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2558) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2559)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2560));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2036_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2555) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2556) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2557))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2556) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2557)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2562) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2563)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2564));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2039_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2565) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2566)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2567));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2038_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2562) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2563) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2564))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2563) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2564)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2569) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2570)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2571));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2041_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2572) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2573)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2574));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2040_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2569) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2570) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2571))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2570) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2571)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2042_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2576) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2577)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2578));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_2043_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2579) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2580)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2581));
    vlSelf->CoreTop__DOT__MEM_io_cache_io_addr_req_bits_we 
        = ((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
           & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
              | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                 | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                    & ((0x11U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                       & ((0x6fU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                          & ((0xeU != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                             & ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                | (0x77U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT___hit_way_0_T 
        = (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0
           [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0] 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT___hit_way_1_T 
        = (vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1
           [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_addr_pipe_0] 
           & (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG));
    vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1 
        = (vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1 
           + vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid 
        = ((IData)(vlSelf->CoreTop__DOT__valid_2) & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0][0xfU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[1U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][1U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[2U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][2U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[3U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][3U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[4U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][4U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[5U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][5U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[6U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][6U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[7U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][7U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[8U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][8U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[9U] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][9U];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xaU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xaU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xbU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xbU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xcU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xcU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xdU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xdU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xeU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xeU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data[0xfU] 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0][0xfU];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0];
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0];
    vlSelf->io_inst = vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
    vlSelf->CoreTop__DOT__WB_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__valid_3) & (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_33_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_3 = ((1U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                              ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm
                                              : 0ULL);
    vlSelf->CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__valid_2) & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data 
        = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru
        [vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0];
    vlSelf->CoreTop__DOT__EX__DOT___T_92 = (0xfffffffffffffff7ULL 
                                            & vlSelf->CoreTop__DOT__EX__DOT__mstatus);
    vlSelf->CoreTop__DOT__EX__DOT___T_112 = (8ULL | vlSelf->CoreTop__DOT__EX__DOT__mstatus);
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T 
        = (0U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_1 
        = (1U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_5 
        = (2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
    vlSelf->CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfWen 
        = ((IData)(vlSelf->CoreTop__DOT__valid_1) & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_159 
        = ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count))
            ? 0U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
    if ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state))) {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_161 
            = ((8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))
                ? 2U : (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state));
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg;
    } else {
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_161 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
        vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_addr 
            = vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg;
    }
    vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_57 
        = ((0x300U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
            ? vlSelf->CoreTop__DOT__EX__DOT__mstatus
            : ((0x305U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                : ((0x341U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                    : ((0x342U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                        ? vlSelf->CoreTop__DOT__EX__DOT__mcause
                        : ((0x304U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                            ? vlSelf->CoreTop__DOT__EX__DOT__mie
                            : ((0x344U == (0xfffU & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm)))
                                ? vlSelf->CoreTop__DOT__EX__DOT__mip
                                : 0ULL))))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_valid 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           | (3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_we 
        = ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (8U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write)));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE_io_out_addr_req_bits_ce 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           | ((3U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
              & (8U != (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write))));
    vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state)) 
           & (8U == (IData)(vlSelf->CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count)));
    vlSelf->CoreTop__DOT__EX__DOT__csr_data = ((0x17U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                ? vlSelf->CoreTop__DOT__EX__DOT__mtvec
                                                : (
                                                   (0x18U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT__mepc
                                                    : 0ULL));
    vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1 
        = (vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC 
           + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm);
    vlSelf->CoreTop__DOT__ARBITER_io_in2_rdata_rep_valid 
        = (((IData)(vlSelf->CoreTop__DOT__MMEM_r_valid) 
            | (IData)(vlSelf->CoreTop__DOT__MMEM_bvalid)) 
           & ((IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r) 
              & (IData)(vlSelf->CoreTop__DOT__MMEM_r_valid)));
    vlSelf->CoreTop__DOT__EX__DOT__is_div = (((((((
                                                   (((0x43U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                     | (0x13U 
                                                        == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                    | (0x79U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                   | (0x10U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                  | (0x12U 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                 | (0xfU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                                | (0x7aU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | (0xdU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                                             & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__EX__DOT__is_mul = ((((0x78U 
                                                == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               | (7U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              & (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid)) 
                                             & (IData)(vlSelf->CoreTop__DOT__valid_1));
    vlSelf->CoreTop__DOT__ARBITER_io_in1_wb_valid = 
        (((IData)(vlSelf->CoreTop__DOT__MMEM_r_valid) 
          | (IData)(vlSelf->CoreTop__DOT__MMEM_bvalid)) 
         & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
            & (IData)(vlSelf->CoreTop__DOT__MMEM_bvalid)));
    vlSelf->CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid 
        = (((IData)(vlSelf->CoreTop__DOT__MMEM_r_valid) 
            | (IData)(vlSelf->CoreTop__DOT__MMEM_bvalid)) 
           & ((~ (IData)(vlSelf->CoreTop__DOT__ARBITER__DOT__choose_r)) 
              & (IData)(vlSelf->CoreTop__DOT__MMEM_r_valid)));
    vlSelf->CoreTop__DOT__EX__DOT__is_divw = ((((0x79U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                | (0x10U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                               | (0x7aU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))) 
                                              | (0xdU 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
    vlSelf->CoreTop__DOT__EX__DOT___GEN_1 = ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                              ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC
                                              : 0ULL);
    vlSelf->CoreTop__DOT__EX__DOT___is_div_sign_T_2 
        = ((0x43U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)) 
           | (0x79U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype)));
    vlSelf->io_pc = vlSelf->CoreTop__DOT__IF__DOT__temp;
    vlSelf->CoreTop__DOT__IF__DOT___temp_T_3 = (4ULL 
                                                + vlSelf->CoreTop__DOT__IF__DOT__temp);
    vlSelf->CoreTop__DOT__ICACHE__DOT__mem_data = (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                >> 3U))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0U])))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                 >> 3U))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[2U])))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                  >> 3U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[4U])))
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                   >> 3U))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[7U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[6U])))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                    >> 3U))))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[9U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[8U])))
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                     >> 3U))))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xbU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xaU])))
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                      >> 3U))))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xdU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xcU])))
                                                          : 
                                                         ((7U 
                                                           == 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->CoreTop__DOT__IF__DOT__temp 
                                                                       >> 3U))))
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xfU])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->CoreTop__DOT__ICACHE__DOT__data_line_reg[0xeU])))
                                                           : 0ULL))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_363 
        = ((0x501bU == (0xfc00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
           | ((0x2013U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
              | ((0x6003U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                 | ((0x3bU == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                    | ((0x40000033U == (0xfe00707fU 
                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                       | ((0x33U == (0xfe00707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                          | ((0x7033U == (0xfe00707fU 
                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                             | ((0x3033U == (0xfe00707fU 
                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                | ((0x103bU == (0xfe00707fU 
                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                   | ((0x6033U == (0xfe00707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                      | ((0x200003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                         | ((0x200403bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                            | ((0x200603bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                               | ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                  | ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                     | ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                           | ((0x4033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                              | ((0x200703bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                 | ((0x1033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                    | ((0x2007033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                       | ((0x200503bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                          | ((0x2006033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                             | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x100073U 
                                                                                != vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                                                & ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                & ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)) 
                                                                                | (0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_209 
        = ((0x17U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 0U : ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 4U : ((0x1023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 4U : ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 4U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 4U
                                                    : 
                                                   ((0x100073U 
                                                     == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 3U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 3U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 2U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 2U
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 2U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 2U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 2U
                                                            : 
                                                           ((0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 2U
                                                             : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_144 
        = ((0x3023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 9U : ((0x1023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                     ? 9U : ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                              ? 9U : ((0x2023U == (0x707fU 
                                                   & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 9U : ((0x100073U 
                                                == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                ? 0U
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 7U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 8U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0xbU
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0xbU
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0xbU
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x7063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 8U
                                                            : 
                                                           ((0x1073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 8U
                                                             : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_268 
        = ((0x23U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
            ? 0x74U : ((0x2023U == (0x707fU & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                        ? 0x77U : ((0x100073U == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                    ? 0x42U : ((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                ? 0x19U
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0x48U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 0x6bU
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 0x6cU
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 0x76U
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0x7bU
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 0xbU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x2073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 0x15U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0x16U
                                                            : 
                                                           ((0x73U 
                                                             == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                             ? 0x17U
                                                             : 
                                                            ((0x30200073U 
                                                              == vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                              ? 0x18U
                                                              : 0U)))))))))))))));
    vlSelf->CoreTop__DOT__ICACHE__DOT___T = (0U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state));
    vlSelf->CoreTop__DOT__ICACHE__DOT___T_1 = (1U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state));
    vlSelf->CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_valid_T_4 
        = ((2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)) 
           & (8U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__count)));
    vlSelf->CoreTop__DOT__If_axi_birdge_io_out_raddr_req_valid 
        = ((~ (IData)(vlSelf->CoreTop__DOT__If_axi_birdge__DOT__ar_state)) 
           & (2U == (IData)(vlSelf->CoreTop__DOT__ICACHE__DOT__state)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_998_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_998_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_312_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_897_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_165_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1237_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1242_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1947) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_676_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_902_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_179_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_172_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_907_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_186_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_179_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1222_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_655_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_648_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1227_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_662_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_655_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1232_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_669_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_662_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1138_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__div__DOT___S_T_6 
        = ((1U & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__res_div[2U])
            ? (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)
            : (1ULL | (0xfffffffffffffffeULL & vlSelf->CoreTop__DOT__EX__DOT__div__DOT__S)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_860_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_112_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_253));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_860_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_112_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_253));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_912_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_186_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_481));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_917_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_193_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_503));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1005_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1005_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_322_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1012_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1012_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_332_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1117_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1124_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_502_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1131_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_522_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_512_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1217_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_648_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_641_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1846));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_832_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_72_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_832_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_72_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1019_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_958));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1019_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_958))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_342_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_958)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1026_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_989));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1026_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_989))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_352_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_989)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1110_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1378));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1110_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_492_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1378))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1378)));
    if (VL_UNLIKELY(vlSelf->CoreTop__DOT__DIP_io_is_break_REG_1)) {
        VL_FINISH_MT("vsrc/DIP_model.v", 95, "");
    }
    VCoreTop___024unit____Vdpiimwrap_set_pc__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__IN);
    VCoreTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->CoreTop__DOT__DIP__DOT__rf);
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1300_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1300_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1303_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2208) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1303_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2208) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_766_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_813_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_46));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_813_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_46));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_815_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_53));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_815_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_53));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_817_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_817_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_835_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_835_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_76_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_838_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_80_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1033_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1033_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_362_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_373_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1103_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1347))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1347)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1103_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_482_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1347));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1291_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1291_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1294_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1294_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_754_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1297_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_762_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_758_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2266));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1317_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_786_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2266));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_819_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_819_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_53_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_821_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_56_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_166));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_841_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_166))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_84_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_166)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1040_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_372_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_384_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1047_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_383_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_395_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1054_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_394_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_406_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1061_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_405_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_417_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1068_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1068_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_416_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_428_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1075_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1075_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_427_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_439_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1082_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1082_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_438_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_450_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1089_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1089_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_449_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_461_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1096_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1096_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_471_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_460_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_472_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1212_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_641_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1824))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1824)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1212_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_641_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1824));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1285_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2139));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1285_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2139))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2139)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1288_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2152));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1288_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_750_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2152))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_746_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2152)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1305_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_768_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1305_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_768_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1307_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_771_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1307_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_771_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_772_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_774_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1309_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_774_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_775_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_777_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1311_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_777_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_778_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_780_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1313_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_780_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_781_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_783_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2259) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2259) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1315_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_783_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2259)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_784_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1524) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1145_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1524) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_532_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1327_io_out_1 
        = ((~ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2306)) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1327_io_out_0 
        = (1U ^ ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2306) 
                 ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_804_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_34_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_823_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_823_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_59_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_825_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_825_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_62_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_827_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_827_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_65_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_829_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_829_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_68_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_922_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_200_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_208_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_831_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_831_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_71_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_834_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_75_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_837_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_79_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_840_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_83_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_179));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_844_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_179))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_88_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_179)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1281_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1281_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_734_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_735_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1282_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_741_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_736_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_742_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1284_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_739_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1284_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_739_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_740_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1287_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_744_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1287_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_744_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_745_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1290_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_748_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1290_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_748_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_749_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1293_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_752_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1293_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_752_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_753_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1296_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_756_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1296_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_756_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_757_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1299_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1299_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_760_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_761_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1302_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_764_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1302_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_764_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_769_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_765_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_0) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1326_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_801_io_out_0) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_805_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_35_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_864_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_117_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_269));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_864_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_117_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_269));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_868_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_122_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1270_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2068));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1270_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_717_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2068));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1324_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_s) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1325_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_800_io_s) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_799_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_13));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_806_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_13))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_36_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_13)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_17));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_807_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_17))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_37_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_17)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_872_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_127_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_872_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_127_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_128_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_876_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_133_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_876_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_133_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_134_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1250_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_687_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1250_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_687_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1254_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_693_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1254_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_693_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_694_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1258_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_699_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1258_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_699_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_700_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1262_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_0)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1262_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_705_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_0) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_0) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_706_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1266_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_711_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2052)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_1));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1266_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_711_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2052) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_1))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2052) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_712_io_out_1)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2296));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1323_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_798_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2296))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2296)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_943_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_622));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_943_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_622));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_808_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_38_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_40_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_880_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_139_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_146_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_880_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_139_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_146_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_146_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_140_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_927_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_207_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_216_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_932_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_215_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_224_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_231_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_937_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_231_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_223_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_232_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1192_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_601_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_610_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1197_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_609_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_618_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1202_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_617_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_626_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1207_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_633_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_625_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_634_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1246_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_681_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1246_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_681_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_688_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_682_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2292))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2292)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1322_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_797_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_795_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_2292));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_240_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_647));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_949_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_240_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_647));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_955_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_248_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_257_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_955_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_248_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_257_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1187_io_out_0 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_cout) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_1187_io_out_1 
        = ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_594_io_cout) 
           & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__r_1708));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_809_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_39_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_42_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_810_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_44_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_810_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_44_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_41_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_44_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_811_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_811_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_43_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_46_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_812_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_45_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_48_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_814_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_47_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_50_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_816_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_816_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_49_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_52_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_818_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_51_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_55_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_820_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_54_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_58_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_822_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_57_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_61_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_824_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_824_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_60_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_64_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_826_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_826_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_63_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_67_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_828_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_828_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_66_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_70_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_830_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_830_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_69_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_74_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_833_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_73_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_78_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_836_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_77_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_82_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_839_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_81_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_842_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_85_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_843_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_86_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_87_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_845_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_89_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_846_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_90_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_91_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_847_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_92_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_97_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_848_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_99_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_848_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_99_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_93_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_99_io_s)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_849_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_cout) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_100_io_s)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_cout));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_849_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_94_io_cout) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_100_io_s) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_cout))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_100_io_s) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_95_io_cout)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_101_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_0));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_850_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_101_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_0))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_96_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_102_io_out_0)));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_851_io_s 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_103_io_s) 
            ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_cout)) 
           ^ (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_104_io_s));
    vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_851_io_cout 
        = (((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_103_io_s) 
            & ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_cout) 
               | (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_104_io_s))) 
           | ((IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_98_io_cout) 
              & (IData)(vlSelf->CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__m_104_io_s)));
}
