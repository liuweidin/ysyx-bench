// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUTop__Syms.h"


void VCPUTop___024root__trace_chg_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPUTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_chg_top_0\n"); );
    // Init
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPUTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCPUTop___024root__trace_chg_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
        bufp->chgQData(oldp+2,(vlSelf->CPUTop__DOT__rf[0]),64);
        bufp->chgQData(oldp+4,(vlSelf->CPUTop__DOT__rf[1]),64);
        bufp->chgQData(oldp+6,(vlSelf->CPUTop__DOT__rf[2]),64);
        bufp->chgQData(oldp+8,(vlSelf->CPUTop__DOT__rf[3]),64);
        bufp->chgQData(oldp+10,(vlSelf->CPUTop__DOT__rf[4]),64);
        bufp->chgQData(oldp+12,(vlSelf->CPUTop__DOT__rf[5]),64);
        bufp->chgQData(oldp+14,(vlSelf->CPUTop__DOT__rf[6]),64);
        bufp->chgQData(oldp+16,(vlSelf->CPUTop__DOT__rf[7]),64);
        bufp->chgQData(oldp+18,(vlSelf->CPUTop__DOT__rf[8]),64);
        bufp->chgQData(oldp+20,(vlSelf->CPUTop__DOT__rf[9]),64);
        bufp->chgQData(oldp+22,(vlSelf->CPUTop__DOT__rf[10]),64);
        bufp->chgQData(oldp+24,(vlSelf->CPUTop__DOT__rf[11]),64);
        bufp->chgQData(oldp+26,(vlSelf->CPUTop__DOT__rf[12]),64);
        bufp->chgQData(oldp+28,(vlSelf->CPUTop__DOT__rf[13]),64);
        bufp->chgQData(oldp+30,(vlSelf->CPUTop__DOT__rf[14]),64);
        bufp->chgQData(oldp+32,(vlSelf->CPUTop__DOT__rf[15]),64);
        bufp->chgQData(oldp+34,(vlSelf->CPUTop__DOT__rf[16]),64);
        bufp->chgQData(oldp+36,(vlSelf->CPUTop__DOT__rf[17]),64);
        bufp->chgQData(oldp+38,(vlSelf->CPUTop__DOT__rf[18]),64);
        bufp->chgQData(oldp+40,(vlSelf->CPUTop__DOT__rf[19]),64);
        bufp->chgQData(oldp+42,(vlSelf->CPUTop__DOT__rf[20]),64);
        bufp->chgQData(oldp+44,(vlSelf->CPUTop__DOT__rf[21]),64);
        bufp->chgQData(oldp+46,(vlSelf->CPUTop__DOT__rf[22]),64);
        bufp->chgQData(oldp+48,(vlSelf->CPUTop__DOT__rf[23]),64);
        bufp->chgQData(oldp+50,(vlSelf->CPUTop__DOT__rf[24]),64);
        bufp->chgQData(oldp+52,(vlSelf->CPUTop__DOT__rf[25]),64);
        bufp->chgQData(oldp+54,(vlSelf->CPUTop__DOT__rf[26]),64);
        bufp->chgQData(oldp+56,(vlSelf->CPUTop__DOT__rf[27]),64);
        bufp->chgQData(oldp+58,(vlSelf->CPUTop__DOT__rf[28]),64);
        bufp->chgQData(oldp+60,(vlSelf->CPUTop__DOT__rf[29]),64);
        bufp->chgQData(oldp+62,(vlSelf->CPUTop__DOT__rf[30]),64);
        bufp->chgQData(oldp+64,(vlSelf->CPUTop__DOT__rf[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+66,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1
                                  : 0ULL)),64);
        bufp->chgBit(oldp+68,((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))));
        bufp->chgCData(oldp+69,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
        bufp->chgCData(oldp+70,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1),3);
        bufp->chgCData(oldp+71,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1),3);
        bufp->chgCData(oldp+72,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
        bufp->chgQData(oldp+73,(vlSelf->CPUTop__DOT__EX_io1_result),64);
        bufp->chgBit(oldp+75,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
        bufp->chgQData(oldp+76,(vlSelf->CPUTop__DOT__EX__DOT__src1),64);
        bufp->chgQData(oldp+78,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
        bufp->chgQData(oldp+80,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                  ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_1
                                  : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                      ? (vlSelf->CPUTop__DOT__EX__DOT__src1 
                                         | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                      : 0ULL))),64);
        bufp->chgCData(oldp+82,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
        bufp->chgCData(oldp+83,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1),2);
        bufp->chgCData(oldp+84,(((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                  ? 0U : ((7U == (7U 
                                                  & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                           ? 2U : (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                                    ? 2U
                                                    : 0U)))),2);
        bufp->chgBit(oldp+85,(vlSelf->CPUTop__DOT__ID__DOT__srctype_1));
    }
    bufp->chgBit(oldp+86,(vlSelf->clock));
    bufp->chgBit(oldp+87,(vlSelf->reset));
    bufp->chgQData(oldp+88,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+90,(vlSelf->io_inst),32);
    bufp->chgQData(oldp+91,(vlSelf->io_result),64);
    bufp->chgCData(oldp+93,((0x1fU & (vlSelf->io_inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+94,((0x1fU & (vlSelf->io_inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+95,((0x1fU & (vlSelf->io_inst 
                                      >> 7U))),5);
    bufp->chgQData(oldp+96,(((8U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                              ? ((((vlSelf->io_inst 
                                    >> 0x1fU) ? 0xfffffffffffffULL
                                    : 0ULL) << 0xcU) 
                                 | (QData)((IData)(
                                                   (vlSelf->io_inst 
                                                    >> 0x14U))))
                              : ((7U == (7U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                  ? ((((0x80000U & vlSelf->io_inst)
                                        ? 0xfffffffffffULL
                                        : 0ULL) << 0x14U) 
                                     | (QData)((IData)(
                                                       ((0xff000U 
                                                         & vlSelf->io_inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->io_inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->io_inst 
                                                                 >> 0x14U)))))))
                                  : ((3U == (3U & (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0)))
                                      ? (((QData)((IData)(
                                                          ((vlSelf->io_inst 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->io_inst))))
                                      : 0ULL)))),64);
    bufp->chgQData(oldp+98,(((0U == (0x1fU & (vlSelf->io_inst 
                                              >> 0xfU)))
                              ? 0ULL : vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))])),64);
    bufp->chgQData(oldp+100,(((0U == (0x1fU & (vlSelf->io_inst 
                                               >> 0x14U)))
                               ? 0ULL : vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))])),64);
    bufp->chgQData(oldp+102,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))]),64);
    bufp->chgQData(oldp+104,(vlSelf->CPUTop__DOT__rf
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))]),64);
    bufp->chgQData(oldp+106,(((3U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_1))
                               ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                               : 0ULL)),64);
    bufp->chgBit(oldp+108,((vlSelf->io_inst >> 0x1fU)));
    bufp->chgBit(oldp+109,((1U & (vlSelf->io_inst >> 0x13U))));
    bufp->chgBit(oldp+110,((vlSelf->io_inst >> 0x1fU)));
}

void VCPUTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_cleanup\n"); );
    // Init
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
