// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCoreTop__Syms.h"


void VCoreTop___024root__trace_chg_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCoreTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_chg_top_0\n"); );
    // Init
    VCoreTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreTop___024root*>(voidSelf);
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCoreTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCoreTop___024root__trace_chg_sub_0(VCoreTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h05cc7cb3__0;
    VlWide<4>/*127:0*/ __Vtemp_h8248920c__0;
    VlWide<4>/*127:0*/ __Vtemp_h32213b7b__0;
    VlWide<4>/*127:0*/ __Vtemp_hf98c7323__0;
    VlWide<4>/*127:0*/ __Vtemp_hf56a95e4__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                               ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                  == vlSelf->CoreTop__DOT__EX__DOT__src2)
                               : (IData)(vlSelf->CoreTop__DOT__EX__DOT___GEN_51))));
        bufp->chgBit(oldp+1,((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))));
        bufp->chgBit(oldp+2,((1U & (IData)(((0x19U 
                                             == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                             ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                             : ((0x48U 
                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                 ? 
                                                (0xfffffffffffffffeULL 
                                                 & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                                 : 
                                                ((0x6bU 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                  : 
                                                 ((0x6cU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                   : 
                                                  ((0x76U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                       : 0ULL))))))))))));
        bufp->chgQData(oldp+3,(vlSelf->CoreTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+5,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_PC),64);
        bufp->chgIData(oldp+7,(vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst),32);
        bufp->chgQData(oldp+8,(((0U == (0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                 >> 0xfU)))
                                 ? 0ULL : vlSelf->CoreTop__DOT__rf
                                [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                           >> 0xfU))])),64);
        bufp->chgCData(oldp+10,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                   ? 2U : 0U) | ((3U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 2U
                                                  : 0U))),3);
        bufp->chgCData(oldp+11,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                  | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                 | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))),3);
        bufp->chgCData(oldp+12,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0U : ((0x1013U 
                                           == (0xfc00707fU 
                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                           ? 1U : (
                                                   (0x6013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                     ? 4U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                      ? 4U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                       ? 5U
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                        ? 0U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                         ? 1U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                          ? 4U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                           ? 4U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                            ? 0U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                             ? 0U
                                                             : 
                                                            ((0x5013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                              ? 1U
                                                              : 
                                                             ((0x1003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                               ? 4U
                                                               : 
                                                              ((0x5003U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                                                ? 4U
                                                                : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_239))))))))))))))))),3);
        bufp->chgBit(oldp+13,((0U != ((0x13U == (0x707fU 
                                                 & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                       ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316)))));
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 0xfU))),5);
        bufp->chgBit(oldp+15,(vlSelf->CoreTop__DOT__ID_io_out_bits_ctrl_signal_rfWen));
        bufp->chgCData(oldp+16,(((0x13U == (0x707fU 
                                            & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))
                                  ? 0x40U : (IData)(vlSelf->CoreTop__DOT__ID__DOT___Inst_decode_T_316))),7);
        bufp->chgCData(oldp+17,((0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                          >> 7U))),5);
        bufp->chgQData(oldp+18,(((((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                      ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0x1fU)
                                            ? 0xfffffffffffffULL
                                            : 0ULL) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                            >> 0x14U))))
                                      : 0ULL) | ((7U 
                                                  == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                  ? 
                                                 ((((0x80000U 
                                                     & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst)
                                                     ? 0xfffffffffffULL
                                                     : 0ULL) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                              >> 0x14U)))))))
                                                  : 0ULL)) 
                                   | ((3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                       ? (((QData)((IData)(
                                                           ((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                             >> 0x1fU)
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst))))
                                       : 0ULL)) | (
                                                   (9U 
                                                    == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                    ? 
                                                   ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                       >> 0x1fU)
                                                       ? 0xfffffffffffffULL
                                                       : 0ULL) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                             >> 7U))))))
                                                    : 0ULL)) 
                                 | ((0xbU == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                     ? ((((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                           >> 0x1fU)
                                           ? 0x7ffffffffffffULL
                                           : 0ULL) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                                                                >> 7U))))))))
                                     : 0ULL))),64);
        bufp->chgCData(oldp+20,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type),3);
        bufp->chgCData(oldp+21,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type),3);
        bufp->chgCData(oldp+22,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+23,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgBit(oldp+24,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen));
        bufp->chgCData(oldp+25,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgCData(oldp+26,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest),5);
        bufp->chgQData(oldp+27,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+29,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgQData(oldp+31,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+33,(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+34,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                  ? ((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                      ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                      : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                          ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                          : ((0x44U 
                                              == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                              ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                 | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                              : ((0x69U 
                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                  ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                                  : 
                                                 ((0x71U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x72U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x6dU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                     : 
                                                    ((0x78U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U])))
                                                      : vlSelf->CoreTop__DOT__EX__DOT___GEN_14))))))))
                                  : ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                      ? ((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                          ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                          : 0ULL) : 
                                     ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                       ? 0ULL : vlSelf->CoreTop__DOT__EX__DOT___GEN_36)))),64);
        bufp->chgQData(oldp+36,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type))
                                  ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_1)),64);
        bufp->chgQData(oldp+38,(((0U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type))
                                  ? vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2
                                  : vlSelf->CoreTop__DOT__EX__DOT___GEN_3)),64);
        bufp->chgBit(oldp+40,((0x42U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))));
        bufp->chgQData(oldp+41,(vlSelf->CoreTop__DOT__DIP_io_rf_0_REG),64);
        bufp->chgQData(oldp+43,(vlSelf->CoreTop__DOT__DIP_io_rf_1_REG),64);
        bufp->chgQData(oldp+45,(vlSelf->CoreTop__DOT__DIP_io_rf_2_REG),64);
        bufp->chgQData(oldp+47,(vlSelf->CoreTop__DOT__DIP_io_rf_3_REG),64);
        bufp->chgQData(oldp+49,(vlSelf->CoreTop__DOT__DIP_io_rf_4_REG),64);
        bufp->chgQData(oldp+51,(vlSelf->CoreTop__DOT__DIP_io_rf_5_REG),64);
        bufp->chgQData(oldp+53,(vlSelf->CoreTop__DOT__DIP_io_rf_6_REG),64);
        bufp->chgQData(oldp+55,(vlSelf->CoreTop__DOT__DIP_io_rf_7_REG),64);
        bufp->chgQData(oldp+57,(vlSelf->CoreTop__DOT__DIP_io_rf_8_REG),64);
        bufp->chgQData(oldp+59,(vlSelf->CoreTop__DOT__DIP_io_rf_9_REG),64);
        bufp->chgQData(oldp+61,(vlSelf->CoreTop__DOT__DIP_io_rf_10_REG),64);
        bufp->chgQData(oldp+63,(vlSelf->CoreTop__DOT__DIP_io_rf_11_REG),64);
        bufp->chgQData(oldp+65,(vlSelf->CoreTop__DOT__DIP_io_rf_12_REG),64);
        bufp->chgQData(oldp+67,(vlSelf->CoreTop__DOT__DIP_io_rf_13_REG),64);
        bufp->chgQData(oldp+69,(vlSelf->CoreTop__DOT__DIP_io_rf_14_REG),64);
        bufp->chgQData(oldp+71,(vlSelf->CoreTop__DOT__DIP_io_rf_15_REG),64);
        bufp->chgQData(oldp+73,(vlSelf->CoreTop__DOT__DIP_io_rf_16_REG),64);
        bufp->chgQData(oldp+75,(vlSelf->CoreTop__DOT__DIP_io_rf_17_REG),64);
        bufp->chgQData(oldp+77,(vlSelf->CoreTop__DOT__DIP_io_rf_18_REG),64);
        bufp->chgQData(oldp+79,(vlSelf->CoreTop__DOT__DIP_io_rf_19_REG),64);
        bufp->chgQData(oldp+81,(vlSelf->CoreTop__DOT__DIP_io_rf_20_REG),64);
        bufp->chgQData(oldp+83,(vlSelf->CoreTop__DOT__DIP_io_rf_21_REG),64);
        bufp->chgQData(oldp+85,(vlSelf->CoreTop__DOT__DIP_io_rf_22_REG),64);
        bufp->chgQData(oldp+87,(vlSelf->CoreTop__DOT__DIP_io_rf_23_REG),64);
        bufp->chgQData(oldp+89,(vlSelf->CoreTop__DOT__DIP_io_rf_24_REG),64);
        bufp->chgQData(oldp+91,(vlSelf->CoreTop__DOT__DIP_io_rf_25_REG),64);
        bufp->chgQData(oldp+93,(vlSelf->CoreTop__DOT__DIP_io_rf_26_REG),64);
        bufp->chgQData(oldp+95,(vlSelf->CoreTop__DOT__DIP_io_rf_27_REG),64);
        bufp->chgQData(oldp+97,(vlSelf->CoreTop__DOT__DIP_io_rf_28_REG),64);
        bufp->chgQData(oldp+99,(vlSelf->CoreTop__DOT__DIP_io_rf_29_REG),64);
        bufp->chgQData(oldp+101,(vlSelf->CoreTop__DOT__DIP_io_rf_30_REG),64);
        bufp->chgQData(oldp+103,(vlSelf->CoreTop__DOT__DIP_io_rf_31_REG),64);
        bufp->chgIData(oldp+105,(vlSelf->CoreTop__DOT__DIP_io_inst_REG),32);
        bufp->chgQData(oldp+106,(vlSelf->CoreTop__DOT__DIP_io_pc_REG),64);
        bufp->chgBit(oldp+108,(vlSelf->CoreTop__DOT__DIP_io_inst_valid_REG));
        bufp->chgQData(oldp+109,(vlSelf->CoreTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+111,(vlSelf->CoreTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+113,(vlSelf->CoreTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+115,(vlSelf->CoreTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+117,(vlSelf->CoreTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+119,(vlSelf->CoreTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+121,(vlSelf->CoreTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+123,(vlSelf->CoreTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+125,(vlSelf->CoreTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+127,(vlSelf->CoreTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+129,(vlSelf->CoreTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+131,(vlSelf->CoreTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+133,(vlSelf->CoreTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+135,(vlSelf->CoreTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+137,(vlSelf->CoreTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+139,(vlSelf->CoreTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+141,(vlSelf->CoreTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+143,(vlSelf->CoreTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+145,(vlSelf->CoreTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+147,(vlSelf->CoreTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+149,(vlSelf->CoreTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+151,(vlSelf->CoreTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+153,(vlSelf->CoreTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+155,(vlSelf->CoreTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+157,(vlSelf->CoreTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+159,(vlSelf->CoreTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+161,(vlSelf->CoreTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+163,(vlSelf->CoreTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+165,(vlSelf->CoreTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+167,(vlSelf->CoreTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+169,(vlSelf->CoreTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+171,(vlSelf->CoreTop__DOT__rf[31]),64);
        bufp->chgQData(oldp+173,(vlSelf->CoreTop__DOT__rf
                                 [(0x1fU & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                            >> 0xfU))]),64);
        bufp->chgQData(oldp+175,(vlSelf->CoreTop__DOT__rf
                                 [0U]),64);
        bufp->chgQData(oldp+177,(vlSelf->CoreTop__DOT__rf
                                 [1U]),64);
        bufp->chgQData(oldp+179,(vlSelf->CoreTop__DOT__rf
                                 [2U]),64);
        bufp->chgQData(oldp+181,(vlSelf->CoreTop__DOT__rf
                                 [3U]),64);
        bufp->chgQData(oldp+183,(vlSelf->CoreTop__DOT__rf
                                 [4U]),64);
        bufp->chgQData(oldp+185,(vlSelf->CoreTop__DOT__rf
                                 [5U]),64);
        bufp->chgQData(oldp+187,(vlSelf->CoreTop__DOT__rf
                                 [6U]),64);
        bufp->chgQData(oldp+189,(vlSelf->CoreTop__DOT__rf
                                 [7U]),64);
        bufp->chgQData(oldp+191,(vlSelf->CoreTop__DOT__rf
                                 [8U]),64);
        bufp->chgQData(oldp+193,(vlSelf->CoreTop__DOT__rf
                                 [9U]),64);
        bufp->chgQData(oldp+195,(vlSelf->CoreTop__DOT__rf
                                 [0xaU]),64);
        bufp->chgQData(oldp+197,(vlSelf->CoreTop__DOT__rf
                                 [0xbU]),64);
        bufp->chgQData(oldp+199,(vlSelf->CoreTop__DOT__rf
                                 [0xcU]),64);
        bufp->chgQData(oldp+201,(vlSelf->CoreTop__DOT__rf
                                 [0xdU]),64);
        bufp->chgQData(oldp+203,(vlSelf->CoreTop__DOT__rf
                                 [0xeU]),64);
        bufp->chgQData(oldp+205,(vlSelf->CoreTop__DOT__rf
                                 [0xfU]),64);
        bufp->chgQData(oldp+207,(vlSelf->CoreTop__DOT__rf
                                 [0x10U]),64);
        bufp->chgQData(oldp+209,(vlSelf->CoreTop__DOT__rf
                                 [0x11U]),64);
        bufp->chgQData(oldp+211,(vlSelf->CoreTop__DOT__rf
                                 [0x12U]),64);
        bufp->chgQData(oldp+213,(vlSelf->CoreTop__DOT__rf
                                 [0x13U]),64);
        bufp->chgQData(oldp+215,(vlSelf->CoreTop__DOT__rf
                                 [0x14U]),64);
        bufp->chgQData(oldp+217,(vlSelf->CoreTop__DOT__rf
                                 [0x15U]),64);
        bufp->chgQData(oldp+219,(vlSelf->CoreTop__DOT__rf
                                 [0x16U]),64);
        bufp->chgQData(oldp+221,(vlSelf->CoreTop__DOT__rf
                                 [0x17U]),64);
        bufp->chgQData(oldp+223,(vlSelf->CoreTop__DOT__rf
                                 [0x18U]),64);
        bufp->chgQData(oldp+225,(vlSelf->CoreTop__DOT__rf
                                 [0x19U]),64);
        bufp->chgQData(oldp+227,(vlSelf->CoreTop__DOT__rf
                                 [0x1aU]),64);
        bufp->chgQData(oldp+229,(vlSelf->CoreTop__DOT__rf
                                 [0x1bU]),64);
        bufp->chgQData(oldp+231,(vlSelf->CoreTop__DOT__rf
                                 [0x1cU]),64);
        bufp->chgQData(oldp+233,(vlSelf->CoreTop__DOT__rf
                                 [0x1dU]),64);
        bufp->chgQData(oldp+235,(vlSelf->CoreTop__DOT__rf
                                 [0x1eU]),64);
        bufp->chgQData(oldp+237,(vlSelf->CoreTop__DOT__rf
                                 [0x1fU]),64);
        bufp->chgQData(oldp+239,(((0U == (IData)(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest))
                                   ? 0ULL : vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData)),64);
        bufp->chgCData(oldp+241,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+242,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfWen));
        bufp->chgQData(oldp+243,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__MEM__DOT___addr_temp_T_1
                                   : vlSelf->CoreTop__DOT__MEM__DOT___GEN_16)),64);
        bufp->chgBit(oldp+245,(((0x45U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                & ((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                   | ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                      | ((0x47U != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                         & ((0x11U 
                                             != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                            & ((0x6fU 
                                                != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                               & ((0xeU 
                                                   != (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                  & ((0x74U 
                                                      == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype)) 
                                                     | (0x77U 
                                                        == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))))))))))));
        bufp->chgBit(oldp+246,((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))));
        bufp->chgQData(oldp+247,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2
                                   : ((0x70U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((0U == (3U 
                                                  & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 1U))))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2))))
                                           : ((1U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                           >> 1U))))
                                               ? ((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                  << 0x10U)
                                               : ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                               >> 1U))))
                                                   ? 
                                                  ((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                   << 0x20U)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))) 
                                                    << 0x30U)
                                                    : 0ULL))))
                                       : ((0x74U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__MEM__DOT___wdata_temp_T_21
                                           : ((0x77U 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                              >> 2U)))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)) 
                                                   << 0x20U)
                                                   : (QData)((IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2)))
                                               : 0ULL))))),64);
        bufp->chgCData(oldp+249,(((0x46U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? 0xffU : (IData)(vlSelf->CoreTop__DOT__MEM__DOT___GEN_32))),8);
        bufp->chgCData(oldp+250,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType),3);
        bufp->chgBit(oldp+251,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgCData(oldp+252,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype),7);
        bufp->chgQData(oldp+253,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+255,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgCData(oldp+256,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest),5);
        bufp->chgBit(oldp+257,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfWen));
        bufp->chgQData(oldp+258,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgQData(oldp+260,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1),64);
        bufp->chgQData(oldp+262,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2),64);
        bufp->chgQData(oldp+264,(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm),64);
        bufp->chgBit(oldp+266,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid));
        bufp->chgQData(oldp+267,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC),64);
        bufp->chgIData(oldp+269,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst),32);
        bufp->chgQData(oldp+270,(vlSelf->CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData),64);
        bufp->chgIData(oldp+272,(vlSelf->CoreTop__DOT__io_inst_REG),32);
        bufp->chgQData(oldp+273,(vlSelf->CoreTop__DOT__DIP__DOT__rf[0]),64);
        bufp->chgQData(oldp+275,(vlSelf->CoreTop__DOT__DIP__DOT__rf[1]),64);
        bufp->chgQData(oldp+277,(vlSelf->CoreTop__DOT__DIP__DOT__rf[2]),64);
        bufp->chgQData(oldp+279,(vlSelf->CoreTop__DOT__DIP__DOT__rf[3]),64);
        bufp->chgQData(oldp+281,(vlSelf->CoreTop__DOT__DIP__DOT__rf[4]),64);
        bufp->chgQData(oldp+283,(vlSelf->CoreTop__DOT__DIP__DOT__rf[5]),64);
        bufp->chgQData(oldp+285,(vlSelf->CoreTop__DOT__DIP__DOT__rf[6]),64);
        bufp->chgQData(oldp+287,(vlSelf->CoreTop__DOT__DIP__DOT__rf[7]),64);
        bufp->chgQData(oldp+289,(vlSelf->CoreTop__DOT__DIP__DOT__rf[8]),64);
        bufp->chgQData(oldp+291,(vlSelf->CoreTop__DOT__DIP__DOT__rf[9]),64);
        bufp->chgQData(oldp+293,(vlSelf->CoreTop__DOT__DIP__DOT__rf[10]),64);
        bufp->chgQData(oldp+295,(vlSelf->CoreTop__DOT__DIP__DOT__rf[11]),64);
        bufp->chgQData(oldp+297,(vlSelf->CoreTop__DOT__DIP__DOT__rf[12]),64);
        bufp->chgQData(oldp+299,(vlSelf->CoreTop__DOT__DIP__DOT__rf[13]),64);
        bufp->chgQData(oldp+301,(vlSelf->CoreTop__DOT__DIP__DOT__rf[14]),64);
        bufp->chgQData(oldp+303,(vlSelf->CoreTop__DOT__DIP__DOT__rf[15]),64);
        bufp->chgQData(oldp+305,(vlSelf->CoreTop__DOT__DIP__DOT__rf[16]),64);
        bufp->chgQData(oldp+307,(vlSelf->CoreTop__DOT__DIP__DOT__rf[17]),64);
        bufp->chgQData(oldp+309,(vlSelf->CoreTop__DOT__DIP__DOT__rf[18]),64);
        bufp->chgQData(oldp+311,(vlSelf->CoreTop__DOT__DIP__DOT__rf[19]),64);
        bufp->chgQData(oldp+313,(vlSelf->CoreTop__DOT__DIP__DOT__rf[20]),64);
        bufp->chgQData(oldp+315,(vlSelf->CoreTop__DOT__DIP__DOT__rf[21]),64);
        bufp->chgQData(oldp+317,(vlSelf->CoreTop__DOT__DIP__DOT__rf[22]),64);
        bufp->chgQData(oldp+319,(vlSelf->CoreTop__DOT__DIP__DOT__rf[23]),64);
        bufp->chgQData(oldp+321,(vlSelf->CoreTop__DOT__DIP__DOT__rf[24]),64);
        bufp->chgQData(oldp+323,(vlSelf->CoreTop__DOT__DIP__DOT__rf[25]),64);
        bufp->chgQData(oldp+325,(vlSelf->CoreTop__DOT__DIP__DOT__rf[26]),64);
        bufp->chgQData(oldp+327,(vlSelf->CoreTop__DOT__DIP__DOT__rf[27]),64);
        bufp->chgQData(oldp+329,(vlSelf->CoreTop__DOT__DIP__DOT__rf[28]),64);
        bufp->chgQData(oldp+331,(vlSelf->CoreTop__DOT__DIP__DOT__rf[29]),64);
        bufp->chgQData(oldp+333,(vlSelf->CoreTop__DOT__DIP__DOT__rf[30]),64);
        bufp->chgQData(oldp+335,(vlSelf->CoreTop__DOT__DIP__DOT__rf[31]),64);
        bufp->chgIData(oldp+337,(vlSelf->CoreTop__DOT__DIP__DOT__IN[0]),32);
        bufp->chgIData(oldp+338,(vlSelf->CoreTop__DOT__DIP__DOT__IN[1]),32);
        bufp->chgIData(oldp+339,(vlSelf->CoreTop__DOT__DIP__DOT__IN[2]),32);
        bufp->chgIData(oldp+340,(vlSelf->CoreTop__DOT__DIP__DOT__IN[3]),32);
        bufp->chgQData(oldp+341,(vlSelf->CoreTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+343,(vlSelf->CoreTop__DOT__EX__DOT__src2),64);
        bufp->chgBit(oldp+345,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+346,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+347,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_28 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+348,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_38 
                                >> 0x1fU)));
        bufp->chgBit(oldp+349,((vlSelf->CoreTop__DOT__EX__DOT___GEN_22 
                                >> 0x1fU)));
        bufp->chgBit(oldp+350,((1U & (IData)((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+351,((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_64 
                                >> 0x1fU)));
        bufp->chgQData(oldp+352,(((0x40U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : ((0x68U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                       : ((0x44U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                              | vlSelf->CoreTop__DOT__EX__DOT__src2)
                                           : ((0x69U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_10
                                               : ((0x71U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                   & vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                   : 
                                                  ((0x72U 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   (vlSelf->CoreTop__DOT__EX__DOT__src1 
                                                    ^ vlSelf->CoreTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x6dU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_7
                                                     : 
                                                    ((0x78U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_19[0U])))
                                                      : vlSelf->CoreTop__DOT__EX__DOT___GEN_14))))))))),64);
        bufp->chgBit(oldp+354,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+355,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+356,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_25 
                                >> 0x1fU)));
        bufp->chgBit(oldp+357,((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_31 
                                >> 0x1fU)));
        bufp->chgQData(oldp+358,(((0x6aU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? ((vlSelf->CoreTop__DOT__EX__DOT__src1 
                                       < vlSelf->CoreTop__DOT__EX__DOT__src2)
                                       ? 1ULL : 0ULL)
                                   : ((2U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? (VL_LTS_IQQ(64, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CoreTop__DOT__EX__DOT__src2)
                                           ? 1ULL : 0ULL)
                                       : 0ULL))),64);
        bufp->chgQData(oldp+360,(((3U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType))
                                   ? (4ULL + vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC)
                                   : 0ULL)),64);
        VL_EXTEND_WQ(127,64, __Vtemp_h05cc7cb3__0, 
                     VL_SHIFTRS_QQI(64,64,5, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, 
                                    (0x1fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2))));
        VL_EXTEND_WQ(127,64, __Vtemp_h8248920c__0, 
                     (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U))) << 0x20U) 
                      | (QData)((IData)(vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_5[0U]))));
        VL_EXTEND_WQ(127,64, __Vtemp_h32213b7b__0, vlSelf->CoreTop__DOT__EX__DOT__src1);
        VL_SHIFTL_WWI(127,127,6, __Vtemp_hf98c7323__0, __Vtemp_h32213b7b__0, 
                      (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)));
        VL_EXTEND_WQ(127,64, __Vtemp_hf56a95e4__0, 
                     ((0x75U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                       ? (vlSelf->CoreTop__DOT__EX__DOT__src1 
                          >> (0x3fU & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                       : ((5U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                           ? (((QData)((IData)(((vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                 >> 0x1fU)
                                                 ? 0xffffffffU
                                                 : 0U))) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_16[0U])))
                           : ((6U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                               ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                               : ((8U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                   : ((9U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_28
                                       : ((0xaU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___shift_result_T_35
                                           : ((0x14U 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? VL_SHIFTRS_QQI(64,64,6, vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_58, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->CoreTop__DOT__EX__DOT__src2)))
                                               : 0ULL))))))));
        bufp->chgQData(oldp+362,((((QData)((IData)(
                                                   ((0x6eU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? 
                                                    __Vtemp_h05cc7cb3__0[1U]
                                                     : 
                                                    ((0x73U 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? 
                                                     __Vtemp_h8248920c__0[1U]
                                                      : 
                                                     ((0x41U 
                                                       == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                       ? 
                                                      __Vtemp_hf98c7323__0[1U]
                                                       : 
                                                      __Vtemp_hf56a95e4__0[1U]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((0x6eU 
                                                                 == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                 ? 
                                                                __Vtemp_h05cc7cb3__0[0U]
                                                                 : 
                                                                ((0x73U 
                                                                  == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                  ? 
                                                                 __Vtemp_h8248920c__0[0U]
                                                                  : 
                                                                 ((0x41U 
                                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                                   ? 
                                                                  __Vtemp_hf98c7323__0[0U]
                                                                   : 
                                                                  __Vtemp_hf56a95e4__0[0U]))))))),64);
        bufp->chgQData(oldp+364,(((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                   : ((0x6cU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                       : ((0x76U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                           : ((0x7bU 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                               : ((0xbU 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___branch_result_T_1
                                                    : 0ULL))))))),64);
        bufp->chgQData(oldp+366,(((0x19U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1
                                   : ((0x48U == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? (0xfffffffffffffffeULL 
                                          & vlSelf->CoreTop__DOT__EX__DOT___alu_result_T_1)
                                       : ((0x6bU == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                           : ((0x6cU 
                                               == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                               : ((0x76U 
                                                   == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                    : 
                                                   ((0x7bU 
                                                     == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype))
                                                      ? vlSelf->CoreTop__DOT__EX__DOT___dnpc_T_9
                                                      : 0ULL))))))))),64);
        bufp->chgCData(oldp+368,(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgCData(oldp+369,((((7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                    ? 2U : 0U) | ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))
                                                   ? 2U
                                                   : 0U))),2);
        bufp->chgBit(oldp+370,((((8U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)) 
                                 | (7U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0))) 
                                | (3U == (IData)(vlSelf->CoreTop__DOT__ID__DOT__Inst_decode_0)))));
        bufp->chgBit(oldp+371,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                >> 0x1fU)));
        bufp->chgBit(oldp+372,((1U & (vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                      >> 0x13U))));
        bufp->chgBit(oldp+373,((vlSelf->CoreTop__DOT__ID_io_in_bits_r_Inst 
                                >> 0x1fU)));
        bufp->chgQData(oldp+374,(vlSelf->CoreTop__DOT__MEM__DOT__addr_temp),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+376,(vlSelf->CoreTop__DOT__mem_rdata),64);
        bufp->chgQData(oldp+378,(vlSelf->CoreTop__DOT__IFM__DOT__rdata),64);
        bufp->chgBit(oldp+380,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+381,((1U & (IData)((vlSelf->CoreTop__DOT__mem_rdata 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+382,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27) 
                                      >> 7U))));
        bufp->chgBit(oldp+383,((1U & ((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44) 
                                      >> 0xfU))));
    }
    bufp->chgBit(oldp+384,(vlSelf->clock));
    bufp->chgBit(oldp+385,(vlSelf->reset));
    bufp->chgQData(oldp+386,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+388,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+389,(((1U & (IData)((vlSelf->CoreTop__DOT__IF__DOT__temp 
                                             >> 2U)))
                               ? (IData)((vlSelf->CoreTop__DOT__IFM__DOT__rdata 
                                          >> 0x20U))
                               : (IData)(vlSelf->CoreTop__DOT__IFM__DOT__rdata))),32);
    bufp->chgQData(oldp+390,(((4U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType))
                               ? ((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? vlSelf->CoreTop__DOT__mem_rdata
                                   : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((1U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 2U)))
                                           ? (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__mem_rdata 
                                                                            >> 0x3fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (vlSelf->CoreTop__DOT__mem_rdata 
                                                                 >> 0x20U))))
                                           : (((QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->CoreTop__DOT__mem_rdata 
                                                                            >> 0x1fU)))
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata))))
                                       : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? ((1U & (IData)(
                                                            (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                             >> 2U)))
                                               ? (QData)((IData)(
                                                                 (vlSelf->CoreTop__DOT__mem_rdata 
                                                                  >> 0x20U)))
                                               : (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata)))
                                           : ((0x6fU 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                               : ((0xeU 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((((0x80U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? 
                                                   ((((0x8000U 
                                                       & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                     ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                     : 0ULL)))))))
                               : vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData)),64);
    bufp->chgQData(oldp+392,(((0x45U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                               ? vlSelf->CoreTop__DOT__mem_rdata
                               : ((0x47U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                   ? ((1U & (IData)(
                                                    (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                     >> 2U)))
                                       ? (((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__mem_rdata 
                                                                        >> 0x3fU)))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            (vlSelf->CoreTop__DOT__mem_rdata 
                                                             >> 0x20U))))
                                       : (((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->CoreTop__DOT__mem_rdata 
                                                                        >> 0x1fU)))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata))))
                                   : ((0x11U == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                       ? ((1U & (IData)(
                                                        (vlSelf->CoreTop__DOT__MEM__DOT__addr_temp 
                                                         >> 2U)))
                                           ? (QData)((IData)(
                                                             (vlSelf->CoreTop__DOT__mem_rdata 
                                                              >> 0x20U)))
                                           : (QData)((IData)(vlSelf->CoreTop__DOT__mem_rdata)))
                                       : ((0x6fU == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                           ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                           : ((0xeU 
                                               == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                               ? ((
                                                   ((0x80U 
                                                     & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27))
                                                     ? 0xffffffffffffffULL
                                                     : 0ULL) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_27)))
                                               : ((3U 
                                                   == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                   ? 
                                                  ((((0x8000U 
                                                      & (IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44)))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype))
                                                    ? (QData)((IData)(vlSelf->CoreTop__DOT__MEM__DOT___mem_result_T_44))
                                                    : 0ULL)))))))),64);
}

void VCoreTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCoreTop___024root__trace_cleanup\n"); );
    // Init
    VCoreTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCoreTop___024root*>(voidSelf);
    VCoreTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
