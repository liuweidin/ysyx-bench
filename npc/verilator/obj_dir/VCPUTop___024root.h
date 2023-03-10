// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPUTop.h for the primary calling header

#ifndef VERILATED_VCPUTOP___024ROOT_H_
#define VERILATED_VCPUTOP___024ROOT_H_  // guard

#include "verilated.h"

class VCPUTop__Syms;
class VCPUTop___024unit;


class VCPUTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VCPUTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*2:0*/ CPUTop__DOT__ID_io_ctrlIO_futype;
        CData/*6:0*/ CPUTop__DOT__ID_io_ctrlIO_aluoptype;
        CData/*3:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_144;
        CData/*3:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_159;
        CData/*3:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_174;
        CData/*3:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_189;
        CData/*3:0*/ CPUTop__DOT__ID__DOT__Inst_decode_0;
        CData/*2:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_213;
        CData/*2:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_228;
        CData/*2:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_243;
        CData/*6:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_268;
        CData/*6:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_283;
        CData/*6:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_298;
        CData/*6:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_313;
        CData/*6:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_316;
        CData/*0:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_346;
        CData/*0:0*/ CPUTop__DOT__ID__DOT___Inst_decode_T_366;
        CData/*0:0*/ CPUTop__DOT__ID__DOT__srctype2;
        CData/*1:0*/ CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2;
        CData/*7:0*/ CPUTop__DOT__EX__DOT___GEN_28;
        CData/*7:0*/ CPUTop__DOT__EX__DOT___mem_result_T_28;
        CData/*0:0*/ CPUTop__DOT__EX__DOT___GEN_188;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*15:0*/ CPUTop__DOT__EX__DOT___mem_result_T_45;
        VL_IN(io_inst,31,0);
        IData/*31:0*/ CPUTop__DOT__IFM_inst;
        VlWide<4>/*127:0*/ CPUTop__DOT__EX__DOT___alu_result_T_19;
        IData/*31:0*/ CPUTop__DOT__EX__DOT___alu_result_T_38;
        IData/*31:0*/ CPUTop__DOT__EX__DOT___GEN_15;
        IData/*31:0*/ CPUTop__DOT__EX__DOT___alu_result_T_64;
        VlWide<3>/*94:0*/ CPUTop__DOT__EX__DOT___shift_result_T_5;
        VlWide<3>/*94:0*/ CPUTop__DOT__EX__DOT___shift_result_T_16;
        IData/*31:0*/ CPUTop__DOT__EX__DOT___shift_result_T_25;
        IData/*31:0*/ CPUTop__DOT__EX__DOT___shift_result_T_31;
        VL_OUT64(io_pc,63,0);
        VL_OUT64(io_result,63,0);
        QData/*63:0*/ CPUTop__DOT__ID_io_ctrlIO_Imm;
        QData/*63:0*/ CPUTop__DOT__EX_io1_REG1;
        QData/*63:0*/ CPUTop__DOT__EX_io1_REG2;
        QData/*63:0*/ CPUTop__DOT__EX_io1_result;
        QData/*63:0*/ CPUTop__DOT__mem_rdata;
        QData/*63:0*/ CPUTop__DOT__IF__DOT__temp;
        QData/*63:0*/ CPUTop__DOT__IF__DOT___temp_T_2;
        QData/*63:0*/ CPUTop__DOT__IFM__DOT__rdata;
        QData/*63:0*/ CPUTop__DOT__EX__DOT__mepc;
        QData/*63:0*/ CPUTop__DOT__EX__DOT__mcause;
        QData/*63:0*/ CPUTop__DOT__EX__DOT__mstatus;
        QData/*63:0*/ CPUTop__DOT__EX__DOT__mtvec;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_1;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_3;
        QData/*63:0*/ CPUTop__DOT__EX__DOT__src2;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___addr_temp_T_1;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___addr_temp_T_3;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_14;
        QData/*63:0*/ CPUTop__DOT__EX__DOT__addr_temp;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___wdata_temp_T_21;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___mem_result_T_9;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___alu_result_T_7;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___alu_result_T_10;
        QData/*32:0*/ CPUTop__DOT__EX__DOT___alu_result_T_28;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___alu_result_T_58;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___alu_result_T_82;
    };
    struct {
        QData/*63:0*/ CPUTop__DOT__EX__DOT___T_159;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_98;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_109;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_112;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_131;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_140;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_141;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_142;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_148;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___shift_result_T_28;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___shift_result_T_35;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_172;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___GEN_173;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___branch_result_T_1;
        QData/*63:0*/ CPUTop__DOT__EX__DOT__csr_data;
        QData/*63:0*/ CPUTop__DOT__EX__DOT___dnpc_T_9;
        QData/*63:0*/ __Vtask_pmem_read__0__rdata;
        QData/*63:0*/ __Vtask_pmem_read__5__rdata;
        VlUnpacked<QData/*63:0*/, 32> CPUTop__DOT__rf;
        VlUnpacked<QData/*63:0*/, 6> CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr;
        VlUnpacked<QData/*63:0*/, 32> CPUTop__DOT__DIP__DOT__rf;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VCPUTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPUTop___024root(VCPUTop__Syms* symsp, const char* name);
    ~VCPUTop___024root();
    VL_UNCOPYABLE(VCPUTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
