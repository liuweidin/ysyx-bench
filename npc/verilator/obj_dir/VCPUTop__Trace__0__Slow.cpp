// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPUTop__Syms.h"


VL_ATTR_COLD void VCPUTop___024root__trace_init_sub__TOP__0(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+308,"clock", false,-1);
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declQuad(c+310,"io_pc", false,-1, 63,0);
    tracep->declBus(c+312,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+313,"io_result", false,-1, 63,0);
    tracep->declBit(c+315,"io_time_int", false,-1);
    tracep->pushNamePrefix("CPUTop ");
    tracep->declBit(c+308,"clock", false,-1);
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declQuad(c+310,"io_pc", false,-1, 63,0);
    tracep->declBus(c+312,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+313,"io_result", false,-1, 63,0);
    tracep->declBit(c+315,"io_time_int", false,-1);
    tracep->declBit(c+308,"IF_clock", false,-1);
    tracep->declBit(c+309,"IF_reset", false,-1);
    tracep->declQuad(c+160,"IF_io_dnpc", false,-1, 63,0);
    tracep->declBit(c+232,"IF_io_is_jump", false,-1);
    tracep->declBit(c+233,"IF_io_is_branch", false,-1);
    tracep->declQuad(c+1,"IF_io_pc", false,-1, 63,0);
    tracep->declBit(c+309,"IFM_reset", false,-1);
    tracep->declBit(c+308,"IFM_clk", false,-1);
    tracep->declQuad(c+1,"IFM_pc", false,-1, 63,0);
    tracep->declBus(c+234,"IFM_inst", false,-1, 31,0);
    tracep->declBus(c+234,"ID_io_inst", false,-1, 31,0);
    tracep->declBus(c+235,"ID_io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+236,"ID_io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+237,"ID_io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+238,"ID_io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+239,"ID_io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+240,"ID_io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+241,"ID_io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+242,"ID_io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+244,"ID_io_rd_en", false,-1);
    tracep->declBit(c+245,"ID_io_mem_we", false,-1);
    tracep->declBit(c+308,"EX_clock", false,-1);
    tracep->declBit(c+309,"EX_reset", false,-1);
    tracep->declBus(c+235,"EX_io_src1type", false,-1, 2,0);
    tracep->declBus(c+236,"EX_io_src2type", false,-1, 2,0);
    tracep->declBus(c+240,"EX_io_futype", false,-1, 2,0);
    tracep->declBus(c+241,"EX_io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+242,"EX_io_Imm", false,-1, 63,0);
    tracep->declQuad(c+246,"EX_io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+248,"EX_io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+1,"EX_io1_PC", false,-1, 63,0);
    tracep->declQuad(c+250,"EX_io1_result", false,-1, 63,0);
    tracep->declBit(c+252,"EX_io1_is_break", false,-1);
    tracep->declBit(c+232,"EX_io1_is_jump", false,-1);
    tracep->declBit(c+233,"EX_io1_is_branch", false,-1);
    tracep->declQuad(c+160,"EX_io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+253,"EX_io1_addr", false,-1, 63,0);
    tracep->declQuad(c+255,"EX_io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"EX_io1_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"EX_io1_wmask", false,-1, 7,0);
    tracep->declQuad(c+3,"EX_io1_mtime", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io1_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+7,"EX_io1_time_int", false,-1);
    tracep->declBit(c+252,"DIP_is_break", false,-1);
    tracep->declQuad(c+162,"DIP_rf_0", false,-1, 63,0);
    tracep->declQuad(c+164,"DIP_rf_1", false,-1, 63,0);
    tracep->declQuad(c+166,"DIP_rf_2", false,-1, 63,0);
    tracep->declQuad(c+168,"DIP_rf_3", false,-1, 63,0);
    tracep->declQuad(c+170,"DIP_rf_4", false,-1, 63,0);
    tracep->declQuad(c+172,"DIP_rf_5", false,-1, 63,0);
    tracep->declQuad(c+174,"DIP_rf_6", false,-1, 63,0);
    tracep->declQuad(c+176,"DIP_rf_7", false,-1, 63,0);
    tracep->declQuad(c+178,"DIP_rf_8", false,-1, 63,0);
    tracep->declQuad(c+180,"DIP_rf_9", false,-1, 63,0);
    tracep->declQuad(c+182,"DIP_rf_10", false,-1, 63,0);
    tracep->declQuad(c+184,"DIP_rf_11", false,-1, 63,0);
    tracep->declQuad(c+186,"DIP_rf_12", false,-1, 63,0);
    tracep->declQuad(c+188,"DIP_rf_13", false,-1, 63,0);
    tracep->declQuad(c+190,"DIP_rf_14", false,-1, 63,0);
    tracep->declQuad(c+192,"DIP_rf_15", false,-1, 63,0);
    tracep->declQuad(c+194,"DIP_rf_16", false,-1, 63,0);
    tracep->declQuad(c+196,"DIP_rf_17", false,-1, 63,0);
    tracep->declQuad(c+198,"DIP_rf_18", false,-1, 63,0);
    tracep->declQuad(c+200,"DIP_rf_19", false,-1, 63,0);
    tracep->declQuad(c+202,"DIP_rf_20", false,-1, 63,0);
    tracep->declQuad(c+204,"DIP_rf_21", false,-1, 63,0);
    tracep->declQuad(c+206,"DIP_rf_22", false,-1, 63,0);
    tracep->declQuad(c+208,"DIP_rf_23", false,-1, 63,0);
    tracep->declQuad(c+210,"DIP_rf_24", false,-1, 63,0);
    tracep->declQuad(c+212,"DIP_rf_25", false,-1, 63,0);
    tracep->declQuad(c+214,"DIP_rf_26", false,-1, 63,0);
    tracep->declQuad(c+216,"DIP_rf_27", false,-1, 63,0);
    tracep->declQuad(c+218,"DIP_rf_28", false,-1, 63,0);
    tracep->declQuad(c+220,"DIP_rf_29", false,-1, 63,0);
    tracep->declQuad(c+222,"DIP_rf_30", false,-1, 63,0);
    tracep->declQuad(c+224,"DIP_rf_31", false,-1, 63,0);
    tracep->declBus(c+312,"DIP_inst", false,-1, 31,0);
    tracep->declQuad(c+1,"DIP_npc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+8+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+316,"rf_EX_io1_REG1_MPORT_en", false,-1);
    tracep->declBus(c+237,"rf_EX_io1_REG1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+226,"rf_EX_io1_REG1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_EX_io1_REG2_MPORT_en", false,-1);
    tracep->declBus(c+238,"rf_EX_io1_REG2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+228,"rf_EX_io1_REG2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_0_MPORT_en", false,-1);
    tracep->declBus(c+317,"rf_DIP_io_rf_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"rf_DIP_io_rf_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_1_MPORT_en", false,-1);
    tracep->declBus(c+318,"rf_DIP_io_rf_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"rf_DIP_io_rf_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_2_MPORT_en", false,-1);
    tracep->declBus(c+319,"rf_DIP_io_rf_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"rf_DIP_io_rf_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_3_MPORT_en", false,-1);
    tracep->declBus(c+320,"rf_DIP_io_rf_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+78,"rf_DIP_io_rf_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_4_MPORT_en", false,-1);
    tracep->declBus(c+321,"rf_DIP_io_rf_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+80,"rf_DIP_io_rf_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_5_MPORT_en", false,-1);
    tracep->declBus(c+322,"rf_DIP_io_rf_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+82,"rf_DIP_io_rf_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_6_MPORT_en", false,-1);
    tracep->declBus(c+323,"rf_DIP_io_rf_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+84,"rf_DIP_io_rf_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_7_MPORT_en", false,-1);
    tracep->declBus(c+324,"rf_DIP_io_rf_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+86,"rf_DIP_io_rf_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_8_MPORT_en", false,-1);
    tracep->declBus(c+325,"rf_DIP_io_rf_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"rf_DIP_io_rf_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_9_MPORT_en", false,-1);
    tracep->declBus(c+326,"rf_DIP_io_rf_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"rf_DIP_io_rf_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_10_MPORT_en", false,-1);
    tracep->declBus(c+327,"rf_DIP_io_rf_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"rf_DIP_io_rf_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_11_MPORT_en", false,-1);
    tracep->declBus(c+328,"rf_DIP_io_rf_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+94,"rf_DIP_io_rf_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_12_MPORT_en", false,-1);
    tracep->declBus(c+329,"rf_DIP_io_rf_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+96,"rf_DIP_io_rf_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_13_MPORT_en", false,-1);
    tracep->declBus(c+330,"rf_DIP_io_rf_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+98,"rf_DIP_io_rf_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_14_MPORT_en", false,-1);
    tracep->declBus(c+331,"rf_DIP_io_rf_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+100,"rf_DIP_io_rf_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_15_MPORT_en", false,-1);
    tracep->declBus(c+332,"rf_DIP_io_rf_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+102,"rf_DIP_io_rf_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_16_MPORT_en", false,-1);
    tracep->declBus(c+333,"rf_DIP_io_rf_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+104,"rf_DIP_io_rf_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_17_MPORT_en", false,-1);
    tracep->declBus(c+334,"rf_DIP_io_rf_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+106,"rf_DIP_io_rf_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_18_MPORT_en", false,-1);
    tracep->declBus(c+335,"rf_DIP_io_rf_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+108,"rf_DIP_io_rf_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_19_MPORT_en", false,-1);
    tracep->declBus(c+336,"rf_DIP_io_rf_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+110,"rf_DIP_io_rf_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_20_MPORT_en", false,-1);
    tracep->declBus(c+337,"rf_DIP_io_rf_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+112,"rf_DIP_io_rf_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_21_MPORT_en", false,-1);
    tracep->declBus(c+338,"rf_DIP_io_rf_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+114,"rf_DIP_io_rf_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_22_MPORT_en", false,-1);
    tracep->declBus(c+339,"rf_DIP_io_rf_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+116,"rf_DIP_io_rf_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_23_MPORT_en", false,-1);
    tracep->declBus(c+340,"rf_DIP_io_rf_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+118,"rf_DIP_io_rf_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_24_MPORT_en", false,-1);
    tracep->declBus(c+341,"rf_DIP_io_rf_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+120,"rf_DIP_io_rf_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_25_MPORT_en", false,-1);
    tracep->declBus(c+342,"rf_DIP_io_rf_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+122,"rf_DIP_io_rf_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_26_MPORT_en", false,-1);
    tracep->declBus(c+343,"rf_DIP_io_rf_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+124,"rf_DIP_io_rf_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_27_MPORT_en", false,-1);
    tracep->declBus(c+344,"rf_DIP_io_rf_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+126,"rf_DIP_io_rf_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_28_MPORT_en", false,-1);
    tracep->declBus(c+345,"rf_DIP_io_rf_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+128,"rf_DIP_io_rf_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_29_MPORT_en", false,-1);
    tracep->declBus(c+346,"rf_DIP_io_rf_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+130,"rf_DIP_io_rf_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_30_MPORT_en", false,-1);
    tracep->declBus(c+347,"rf_DIP_io_rf_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+132,"rf_DIP_io_rf_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+316,"rf_DIP_io_rf_31_MPORT_en", false,-1);
    tracep->declBus(c+348,"rf_DIP_io_rf_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+134,"rf_DIP_io_rf_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+260,"rf_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+239,"rf_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+316,"rf_MPORT_mask", false,-1);
    tracep->declBit(c+244,"rf_MPORT_en", false,-1);
    tracep->declQuad(c+253,"mem_addr", false,-1, 63,0);
    tracep->declBit(c+309,"mem_reset", false,-1);
    tracep->declBit(c+308,"mem_clk", false,-1);
    tracep->declBit(c+245,"mem_we", false,-1);
    tracep->declBit(c+262,"mem_ce", false,-1);
    tracep->declQuad(c+257,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+263,"mem_rdata", false,-1, 63,0);
    tracep->declBus(c+259,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+308,"mmio_clock", false,-1);
    tracep->declBit(c+309,"mmio_reset", false,-1);
    tracep->declQuad(c+253,"mmio_io_addr", false,-1, 63,0);
    tracep->declBit(c+245,"mmio_io_we", false,-1);
    tracep->declBit(c+265,"mmio_io_ce", false,-1);
    tracep->declQuad(c+257,"mmio_io_wdata", false,-1, 63,0);
    tracep->declQuad(c+255,"mmio_io_rdata", false,-1, 63,0);
    tracep->declBus(c+259,"mmio_io_wmask", false,-1, 7,0);
    tracep->declQuad(c+253,"mmio_io_addr_m", false,-1, 63,0);
    tracep->declBit(c+245,"mmio_io_we_m", false,-1);
    tracep->declBit(c+262,"mmio_io_ce_m", false,-1);
    tracep->declQuad(c+257,"mmio_io_wdata_m", false,-1, 63,0);
    tracep->declQuad(c+263,"mmio_io_rdata_m", false,-1, 63,0);
    tracep->declBus(c+259,"mmio_io_wmask_m", false,-1, 7,0);
    tracep->declQuad(c+3,"mmio_io_time", false,-1, 63,0);
    tracep->declQuad(c+5,"mmio_io_timecmp", false,-1, 63,0);
    tracep->declBit(c+7,"mmio_io_time_int", false,-1);
    tracep->declBus(c+237,"src1add", false,-1, 4,0);
    tracep->declBus(c+238,"src2add", false,-1, 4,0);
    tracep->pushNamePrefix("DIP ");
    tracep->declBit(c+252,"is_break", false,-1);
    tracep->declBus(c+312,"inst", false,-1, 31,0);
    tracep->declQuad(c+1,"npc", false,-1, 63,0);
    tracep->declQuad(c+162,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+164,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+166,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+168,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+170,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+172,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+174,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+176,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+178,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+180,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+182,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+184,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+186,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+188,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+190,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+192,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+194,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+196,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+198,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+200,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+202,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+204,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+206,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+208,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+210,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+212,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+214,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+216,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+218,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+220,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+222,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+224,"rf_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+308,"clock", false,-1);
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declBus(c+235,"io_src1type", false,-1, 2,0);
    tracep->declBus(c+236,"io_src2type", false,-1, 2,0);
    tracep->declBus(c+240,"io_futype", false,-1, 2,0);
    tracep->declBus(c+241,"io_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+242,"io_Imm", false,-1, 63,0);
    tracep->declQuad(c+246,"io1_REG1", false,-1, 63,0);
    tracep->declQuad(c+248,"io1_REG2", false,-1, 63,0);
    tracep->declQuad(c+1,"io1_PC", false,-1, 63,0);
    tracep->declQuad(c+250,"io1_result", false,-1, 63,0);
    tracep->declBit(c+252,"io1_is_break", false,-1);
    tracep->declBit(c+232,"io1_is_jump", false,-1);
    tracep->declBit(c+233,"io1_is_branch", false,-1);
    tracep->declQuad(c+160,"io1_dnpc", false,-1, 63,0);
    tracep->declQuad(c+253,"io1_addr", false,-1, 63,0);
    tracep->declQuad(c+255,"io1_rdata", false,-1, 63,0);
    tracep->declQuad(c+257,"io1_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"io1_wmask", false,-1, 7,0);
    tracep->declQuad(c+3,"io1_mtime", false,-1, 63,0);
    tracep->declQuad(c+5,"io1_mtimecmp", false,-1, 63,0);
    tracep->declBit(c+7,"io1_time_int", false,-1);
    tracep->declQuad(c+136,"CSRDIFF_mepc", false,-1, 63,0);
    tracep->declQuad(c+138,"CSRDIFF_mcause", false,-1, 63,0);
    tracep->declQuad(c+140,"CSRDIFF_mstatus", false,-1, 63,0);
    tracep->declQuad(c+142,"CSRDIFF_mtvec", false,-1, 63,0);
    tracep->declQuad(c+136,"mepc", false,-1, 63,0);
    tracep->declQuad(c+138,"mcause", false,-1, 63,0);
    tracep->declQuad(c+140,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+142,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+144,"mie", false,-1, 63,0);
    tracep->declQuad(c+146,"mip", false,-1, 63,0);
    tracep->declBit(c+7,"time_int", false,-1);
    tracep->declQuad(c+266,"src1", false,-1, 63,0);
    tracep->declQuad(c+268,"src2", false,-1, 63,0);
    tracep->declQuad(c+253,"addr_temp", false,-1, 63,0);
    tracep->declBit(c+270,"mem_result_sign", false,-1);
    tracep->declBit(c+271,"mem_result_sign_1", false,-1);
    tracep->declBit(c+272,"mem_result_sign_3", false,-1);
    tracep->declBit(c+273,"mem_result_sign_4", false,-1);
    tracep->declQuad(c+274,"mem_result", false,-1, 63,0);
    tracep->declBit(c+276,"alu_result_sign", false,-1);
    tracep->declBit(c+277,"alu_result_sign_2", false,-1);
    tracep->declBit(c+278,"alu_result_sign_3", false,-1);
    tracep->declBit(c+279,"alu_result_sign_4", false,-1);
    tracep->declBit(c+280,"alu_result_sign_5", false,-1);
    tracep->declBit(c+281,"alu_result_sign_6", false,-1);
    tracep->declBit(c+282,"alu_result_sign_7", false,-1);
    tracep->declQuad(c+283,"alu_result", false,-1, 63,0);
    tracep->declBit(c+285,"shift_result_sign", false,-1);
    tracep->declBit(c+286,"shift_result_sign_1", false,-1);
    tracep->declBit(c+287,"shift_result_sign_2", false,-1);
    tracep->declBit(c+288,"shift_result_sign_3", false,-1);
    tracep->declQuad(c+289,"compar_result", false,-1, 63,0);
    tracep->declQuad(c+230,"jump_result", false,-1, 63,0);
    tracep->declQuad(c+291,"shift_result", false,-1, 63,0);
    tracep->declQuad(c+293,"branch_result", false,-1, 63,0);
    tracep->declBit(c+233,"branch_flag", false,-1);
    tracep->declQuad(c+295,"csr_data", false,-1, 63,0);
    tracep->declQuad(c+297,"dnpc", false,-1, 63,0);
    tracep->pushNamePrefix("CSRDIFF ");
    tracep->declQuad(c+136,"mepc", false,-1, 63,0);
    tracep->declQuad(c+138,"mcause", false,-1, 63,0);
    tracep->declQuad(c+140,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+142,"mtvec", false,-1, 63,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+148+i*2,"inst_csr", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+234,"io_inst", false,-1, 31,0);
    tracep->declBus(c+235,"io_ctrlIO_src1type", false,-1, 2,0);
    tracep->declBus(c+236,"io_ctrlIO_src2type", false,-1, 2,0);
    tracep->declBus(c+237,"io_ctrlIO_src1", false,-1, 4,0);
    tracep->declBus(c+238,"io_ctrlIO_src2", false,-1, 4,0);
    tracep->declBus(c+239,"io_ctrlIO_rd", false,-1, 4,0);
    tracep->declBus(c+240,"io_ctrlIO_futype", false,-1, 2,0);
    tracep->declBus(c+241,"io_ctrlIO_aluoptype", false,-1, 6,0);
    tracep->declQuad(c+242,"io_ctrlIO_Imm", false,-1, 63,0);
    tracep->declBit(c+244,"io_rd_en", false,-1);
    tracep->declBit(c+245,"io_mem_we", false,-1);
    tracep->declBus(c+239,"rd", false,-1, 4,0);
    tracep->declBus(c+299,"Inst_decode_0", false,-1, 3,0);
    tracep->declBus(c+241,"Inst_decode_2", false,-1, 6,0);
    tracep->declBus(c+300,"srctype1", false,-1, 1,0);
    tracep->declBit(c+301,"srctype2", false,-1);
    tracep->declBit(c+302,"sign", false,-1);
    tracep->declBit(c+303,"sign_1", false,-1);
    tracep->declBit(c+304,"sign_2", false,-1);
    tracep->declBit(c+304,"sign_3", false,-1);
    tracep->declBit(c+302,"sign_4", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+308,"clock", false,-1);
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declQuad(c+160,"io_dnpc", false,-1, 63,0);
    tracep->declBit(c+232,"io_is_jump", false,-1);
    tracep->declBit(c+233,"io_is_branch", false,-1);
    tracep->declQuad(c+1,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"temp", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFM ");
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declQuad(c+1,"pc", false,-1, 63,0);
    tracep->declBus(c+234,"inst", false,-1, 31,0);
    tracep->declQuad(c+305,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declQuad(c+253,"addr", false,-1, 63,0);
    tracep->declBit(c+245,"we", false,-1);
    tracep->declBit(c+262,"ce", false,-1);
    tracep->declQuad(c+257,"wdata", false,-1, 63,0);
    tracep->declQuad(c+263,"rdata", false,-1, 63,0);
    tracep->declBus(c+259,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmio ");
    tracep->declBit(c+308,"clock", false,-1);
    tracep->declBit(c+309,"reset", false,-1);
    tracep->declQuad(c+253,"io_addr", false,-1, 63,0);
    tracep->declBit(c+245,"io_we", false,-1);
    tracep->declBit(c+265,"io_ce", false,-1);
    tracep->declQuad(c+257,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+255,"io_rdata", false,-1, 63,0);
    tracep->declBus(c+259,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+253,"io_addr_m", false,-1, 63,0);
    tracep->declBit(c+245,"io_we_m", false,-1);
    tracep->declBit(c+262,"io_ce_m", false,-1);
    tracep->declQuad(c+257,"io_wdata_m", false,-1, 63,0);
    tracep->declQuad(c+263,"io_rdata_m", false,-1, 63,0);
    tracep->declBus(c+259,"io_wmask_m", false,-1, 7,0);
    tracep->declQuad(c+3,"io_time", false,-1, 63,0);
    tracep->declQuad(c+5,"io_timecmp", false,-1, 63,0);
    tracep->declBit(c+7,"io_time_int", false,-1);
    tracep->declQuad(c+3,"mtime", false,-1, 63,0);
    tracep->declQuad(c+5,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+307,"flag", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPUTop___024root__trace_init_top(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_init_top\n"); );
    // Body
    VCPUTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPUTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPUTop___024root__trace_register(VCPUTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPUTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPUTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPUTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPUTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_full_top_0\n"); );
    // Init
    VCPUTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPUTop___024root*>(voidSelf);
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPUTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPUTop___024root__trace_full_sub_0(VCPUTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPUTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPUTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h7548e965__0;
    VlWide<4>/*127:0*/ __Vtemp_hd83d5fe3__0;
    VlWide<4>/*127:0*/ __Vtemp_hb125646c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a02089f__0;
    VlWide<4>/*127:0*/ __Vtemp_hdc10468f__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->CPUTop__DOT__IF__DOT__temp),64);
    bufp->fullQData(oldp+3,(vlSelf->CPUTop__DOT__mmio__DOT__mtime),64);
    bufp->fullQData(oldp+5,(vlSelf->CPUTop__DOT__mmio__DOT__mtimecmp),64);
    bufp->fullBit(oldp+7,(vlSelf->CPUTop__DOT__EX_io1_time_int));
    bufp->fullQData(oldp+8,(vlSelf->CPUTop__DOT__rf[0]),64);
    bufp->fullQData(oldp+10,(vlSelf->CPUTop__DOT__rf[1]),64);
    bufp->fullQData(oldp+12,(vlSelf->CPUTop__DOT__rf[2]),64);
    bufp->fullQData(oldp+14,(vlSelf->CPUTop__DOT__rf[3]),64);
    bufp->fullQData(oldp+16,(vlSelf->CPUTop__DOT__rf[4]),64);
    bufp->fullQData(oldp+18,(vlSelf->CPUTop__DOT__rf[5]),64);
    bufp->fullQData(oldp+20,(vlSelf->CPUTop__DOT__rf[6]),64);
    bufp->fullQData(oldp+22,(vlSelf->CPUTop__DOT__rf[7]),64);
    bufp->fullQData(oldp+24,(vlSelf->CPUTop__DOT__rf[8]),64);
    bufp->fullQData(oldp+26,(vlSelf->CPUTop__DOT__rf[9]),64);
    bufp->fullQData(oldp+28,(vlSelf->CPUTop__DOT__rf[10]),64);
    bufp->fullQData(oldp+30,(vlSelf->CPUTop__DOT__rf[11]),64);
    bufp->fullQData(oldp+32,(vlSelf->CPUTop__DOT__rf[12]),64);
    bufp->fullQData(oldp+34,(vlSelf->CPUTop__DOT__rf[13]),64);
    bufp->fullQData(oldp+36,(vlSelf->CPUTop__DOT__rf[14]),64);
    bufp->fullQData(oldp+38,(vlSelf->CPUTop__DOT__rf[15]),64);
    bufp->fullQData(oldp+40,(vlSelf->CPUTop__DOT__rf[16]),64);
    bufp->fullQData(oldp+42,(vlSelf->CPUTop__DOT__rf[17]),64);
    bufp->fullQData(oldp+44,(vlSelf->CPUTop__DOT__rf[18]),64);
    bufp->fullQData(oldp+46,(vlSelf->CPUTop__DOT__rf[19]),64);
    bufp->fullQData(oldp+48,(vlSelf->CPUTop__DOT__rf[20]),64);
    bufp->fullQData(oldp+50,(vlSelf->CPUTop__DOT__rf[21]),64);
    bufp->fullQData(oldp+52,(vlSelf->CPUTop__DOT__rf[22]),64);
    bufp->fullQData(oldp+54,(vlSelf->CPUTop__DOT__rf[23]),64);
    bufp->fullQData(oldp+56,(vlSelf->CPUTop__DOT__rf[24]),64);
    bufp->fullQData(oldp+58,(vlSelf->CPUTop__DOT__rf[25]),64);
    bufp->fullQData(oldp+60,(vlSelf->CPUTop__DOT__rf[26]),64);
    bufp->fullQData(oldp+62,(vlSelf->CPUTop__DOT__rf[27]),64);
    bufp->fullQData(oldp+64,(vlSelf->CPUTop__DOT__rf[28]),64);
    bufp->fullQData(oldp+66,(vlSelf->CPUTop__DOT__rf[29]),64);
    bufp->fullQData(oldp+68,(vlSelf->CPUTop__DOT__rf[30]),64);
    bufp->fullQData(oldp+70,(vlSelf->CPUTop__DOT__rf[31]),64);
    bufp->fullQData(oldp+72,(vlSelf->CPUTop__DOT__rf
                             [0U]),64);
    bufp->fullQData(oldp+74,(vlSelf->CPUTop__DOT__rf
                             [1U]),64);
    bufp->fullQData(oldp+76,(vlSelf->CPUTop__DOT__rf
                             [2U]),64);
    bufp->fullQData(oldp+78,(vlSelf->CPUTop__DOT__rf
                             [3U]),64);
    bufp->fullQData(oldp+80,(vlSelf->CPUTop__DOT__rf
                             [4U]),64);
    bufp->fullQData(oldp+82,(vlSelf->CPUTop__DOT__rf
                             [5U]),64);
    bufp->fullQData(oldp+84,(vlSelf->CPUTop__DOT__rf
                             [6U]),64);
    bufp->fullQData(oldp+86,(vlSelf->CPUTop__DOT__rf
                             [7U]),64);
    bufp->fullQData(oldp+88,(vlSelf->CPUTop__DOT__rf
                             [8U]),64);
    bufp->fullQData(oldp+90,(vlSelf->CPUTop__DOT__rf
                             [9U]),64);
    bufp->fullQData(oldp+92,(vlSelf->CPUTop__DOT__rf
                             [0xaU]),64);
    bufp->fullQData(oldp+94,(vlSelf->CPUTop__DOT__rf
                             [0xbU]),64);
    bufp->fullQData(oldp+96,(vlSelf->CPUTop__DOT__rf
                             [0xcU]),64);
    bufp->fullQData(oldp+98,(vlSelf->CPUTop__DOT__rf
                             [0xdU]),64);
    bufp->fullQData(oldp+100,(vlSelf->CPUTop__DOT__rf
                              [0xeU]),64);
    bufp->fullQData(oldp+102,(vlSelf->CPUTop__DOT__rf
                              [0xfU]),64);
    bufp->fullQData(oldp+104,(vlSelf->CPUTop__DOT__rf
                              [0x10U]),64);
    bufp->fullQData(oldp+106,(vlSelf->CPUTop__DOT__rf
                              [0x11U]),64);
    bufp->fullQData(oldp+108,(vlSelf->CPUTop__DOT__rf
                              [0x12U]),64);
    bufp->fullQData(oldp+110,(vlSelf->CPUTop__DOT__rf
                              [0x13U]),64);
    bufp->fullQData(oldp+112,(vlSelf->CPUTop__DOT__rf
                              [0x14U]),64);
    bufp->fullQData(oldp+114,(vlSelf->CPUTop__DOT__rf
                              [0x15U]),64);
    bufp->fullQData(oldp+116,(vlSelf->CPUTop__DOT__rf
                              [0x16U]),64);
    bufp->fullQData(oldp+118,(vlSelf->CPUTop__DOT__rf
                              [0x17U]),64);
    bufp->fullQData(oldp+120,(vlSelf->CPUTop__DOT__rf
                              [0x18U]),64);
    bufp->fullQData(oldp+122,(vlSelf->CPUTop__DOT__rf
                              [0x19U]),64);
    bufp->fullQData(oldp+124,(vlSelf->CPUTop__DOT__rf
                              [0x1aU]),64);
    bufp->fullQData(oldp+126,(vlSelf->CPUTop__DOT__rf
                              [0x1bU]),64);
    bufp->fullQData(oldp+128,(vlSelf->CPUTop__DOT__rf
                              [0x1cU]),64);
    bufp->fullQData(oldp+130,(vlSelf->CPUTop__DOT__rf
                              [0x1dU]),64);
    bufp->fullQData(oldp+132,(vlSelf->CPUTop__DOT__rf
                              [0x1eU]),64);
    bufp->fullQData(oldp+134,(vlSelf->CPUTop__DOT__rf
                              [0x1fU]),64);
    bufp->fullQData(oldp+136,(vlSelf->CPUTop__DOT__EX__DOT__mepc),64);
    bufp->fullQData(oldp+138,(vlSelf->CPUTop__DOT__EX__DOT__mcause),64);
    bufp->fullQData(oldp+140,(vlSelf->CPUTop__DOT__EX__DOT__mstatus),64);
    bufp->fullQData(oldp+142,(vlSelf->CPUTop__DOT__EX__DOT__mtvec),64);
    bufp->fullQData(oldp+144,(vlSelf->CPUTop__DOT__EX__DOT__mie),64);
    bufp->fullQData(oldp+146,(vlSelf->CPUTop__DOT__EX__DOT__mip),64);
    bufp->fullQData(oldp+148,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[0]),64);
    bufp->fullQData(oldp+150,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[1]),64);
    bufp->fullQData(oldp+152,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[2]),64);
    bufp->fullQData(oldp+154,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[3]),64);
    bufp->fullQData(oldp+156,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[4]),64);
    bufp->fullQData(oldp+158,(vlSelf->CPUTop__DOT__EX__DOT__CSRDIFF__DOT__inst_csr[5]),64);
    bufp->fullQData(oldp+160,(((IData)(vlSelf->CPUTop__DOT__EX_io1_time_int)
                                ? vlSelf->CPUTop__DOT__EX__DOT__mtvec
                                : ((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                    : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? (0xfffffffffffffffeULL 
                                           & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                        : ((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                            : ((0x6cU 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                : (
                                                   (0x76U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                    : 
                                                   ((0xcU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                     : 
                                                    ((0x7bU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                      : 
                                                     ((0xbU 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                         ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                         : 0ULL)))))))))))),64);
    bufp->fullQData(oldp+162,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0U == (0xf80U & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0U])),64);
    bufp->fullQData(oldp+164,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x80U == (0xf80U 
                                             & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [1U])),64);
    bufp->fullQData(oldp+166,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x100U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [2U])),64);
    bufp->fullQData(oldp+168,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x180U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [3U])),64);
    bufp->fullQData(oldp+170,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x200U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [4U])),64);
    bufp->fullQData(oldp+172,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x280U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [5U])),64);
    bufp->fullQData(oldp+174,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x300U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [6U])),64);
    bufp->fullQData(oldp+176,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x380U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [7U])),64);
    bufp->fullQData(oldp+178,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x400U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [8U])),64);
    bufp->fullQData(oldp+180,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x480U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [9U])),64);
    bufp->fullQData(oldp+182,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x500U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0xaU])),64);
    bufp->fullQData(oldp+184,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x580U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0xbU])),64);
    bufp->fullQData(oldp+186,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x600U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0xcU])),64);
    bufp->fullQData(oldp+188,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x680U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0xdU])),64);
    bufp->fullQData(oldp+190,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x700U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0xeU])),64);
    bufp->fullQData(oldp+192,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x780U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0xfU])),64);
    bufp->fullQData(oldp+194,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x800U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x10U])),64);
    bufp->fullQData(oldp+196,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x880U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x11U])),64);
    bufp->fullQData(oldp+198,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x900U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x12U])),64);
    bufp->fullQData(oldp+200,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0x980U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x13U])),64);
    bufp->fullQData(oldp+202,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xa00U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x14U])),64);
    bufp->fullQData(oldp+204,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xa80U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x15U])),64);
    bufp->fullQData(oldp+206,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xb00U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x16U])),64);
    bufp->fullQData(oldp+208,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xb80U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x17U])),64);
    bufp->fullQData(oldp+210,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xc00U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x18U])),64);
    bufp->fullQData(oldp+212,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xc80U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x19U])),64);
    bufp->fullQData(oldp+214,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xd00U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x1aU])),64);
    bufp->fullQData(oldp+216,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xd80U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x1bU])),64);
    bufp->fullQData(oldp+218,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xe00U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x1cU])),64);
    bufp->fullQData(oldp+220,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xe80U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x1dU])),64);
    bufp->fullQData(oldp+222,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xf00U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x1eU])),64);
    bufp->fullQData(oldp+224,((((IData)(vlSelf->CPUTop__DOT__ID_io_rd_en) 
                                & (0xf80U == (0xf80U 
                                              & vlSelf->CPUTop__DOT__IFM_inst)))
                                ? vlSelf->CPUTop__DOT__EX_io1_result
                                : vlSelf->CPUTop__DOT__rf
                               [0x1fU])),64);
    bufp->fullQData(oldp+226,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+228,(vlSelf->CPUTop__DOT__rf
                              [(0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+230,(((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))
                                ? (4ULL + vlSelf->CPUTop__DOT__IF__DOT__temp)
                                : 0ULL)),64);
    bufp->fullBit(oldp+232,((3U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullBit(oldp+233,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                              ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                 == vlSelf->CPUTop__DOT__EX__DOT__src2)
                              : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_250))));
    bufp->fullIData(oldp+234,(vlSelf->CPUTop__DOT__IFM_inst),32);
    bufp->fullCData(oldp+235,(vlSelf->CPUTop__DOT__ID__DOT___io_ctrlIO_src1type_T_2),3);
    bufp->fullCData(oldp+236,(vlSelf->CPUTop__DOT__ID__DOT__srctype2),3);
    bufp->fullCData(oldp+237,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+238,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+239,((0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+240,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype),3);
    bufp->fullCData(oldp+241,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype),7);
    bufp->fullQData(oldp+242,(vlSelf->CPUTop__DOT__ID_io_ctrlIO_Imm),64);
    bufp->fullBit(oldp+244,(vlSelf->CPUTop__DOT__ID_io_rd_en));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->CPUTop__DOT__ID__DOT___io_mem_we_T_12)))));
    bufp->fullQData(oldp+246,(vlSelf->CPUTop__DOT__EX_io1_REG1),64);
    bufp->fullQData(oldp+248,(vlSelf->CPUTop__DOT__EX_io1_REG2),64);
    bufp->fullQData(oldp+250,(vlSelf->CPUTop__DOT__EX_io1_result),64);
    bufp->fullBit(oldp+252,((0x42U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))));
    bufp->fullQData(oldp+253,(vlSelf->CPUTop__DOT__EX_io1_addr),64);
    bufp->fullQData(oldp+255,(vlSelf->CPUTop__DOT__mmio_io_rdata),64);
    bufp->fullQData(oldp+257,(vlSelf->CPUTop__DOT__EX_io1_wdata),64);
    bufp->fullCData(oldp+259,(((0x46U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? 0xffU : (IData)(vlSelf->CPUTop__DOT__EX__DOT___GEN_28))),8);
    bufp->fullQData(oldp+260,(((0U == (0x1fU & (vlSelf->CPUTop__DOT__IFM_inst 
                                                >> 7U)))
                                ? 0ULL : vlSelf->CPUTop__DOT__EX_io1_result)),64);
    bufp->fullBit(oldp+262,(((0x4000U != (0xffffU & (IData)(
                                                            (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                             >> 0x30U)))) 
                             & ((0xbff8U != (0xffffU 
                                             & (IData)(
                                                       (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                        >> 0x30U)))) 
                                & (4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))))));
    bufp->fullQData(oldp+263,(vlSelf->CPUTop__DOT__mem_rdata),64);
    bufp->fullBit(oldp+265,((4U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_futype))));
    bufp->fullQData(oldp+266,(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58),64);
    bufp->fullQData(oldp+268,(vlSelf->CPUTop__DOT__EX__DOT__src2),64);
    bufp->fullBit(oldp+270,((1U & (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+271,((1U & (IData)((vlSelf->CPUTop__DOT__mmio_io_rdata 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+272,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28) 
                                   >> 7U))));
    bufp->fullBit(oldp+273,((1U & ((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45) 
                                   >> 0xfU))));
    bufp->fullQData(oldp+274,(((0x45U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__mmio_io_rdata
                                : ((0x47U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? ((1U & (IData)(
                                                     (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                      >> 2U)))
                                        ? (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                                         >> 0x3fU)))
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                              >> 0x20U))))
                                        : vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9)
                                    : ((0x11U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? ((1U & (IData)(
                                                         (vlSelf->CPUTop__DOT__EX_io1_addr 
                                                          >> 2U)))
                                            ? (QData)((IData)(
                                                              (vlSelf->CPUTop__DOT__mmio_io_rdata 
                                                               >> 0x20U)))
                                            : vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_9)
                                        : ((0x6fU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28))
                                            : ((0xeU 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? (
                                                   (((0x80U 
                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_28)))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   ((((0x8000U 
                                                       & (IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45))
                                                       ? 0xffffffffffffULL
                                                       : 0ULL) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___mem_result_T_45))
                                                     : 0ULL)))))))),64);
    bufp->fullBit(oldp+276,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+277,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+278,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+279,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_38 
                             >> 0x1fU)));
    bufp->fullBit(oldp+280,((vlSelf->CPUTop__DOT__EX__DOT___GEN_15 
                             >> 0x1fU)));
    bufp->fullBit(oldp+281,((1U & (IData)((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+282,((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_64 
                             >> 0x1fU)));
    bufp->fullQData(oldp+283,(((0x40U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                : ((0x68U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                    : ((0x44U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                           | vlSelf->CPUTop__DOT__EX__DOT__src2)
                                        : ((0x69U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_10
                                            : ((0x71U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                   & vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                : (
                                                   (0x72U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                    ^ vlSelf->CPUTop__DOT__EX__DOT__src2)
                                                    : 
                                                   ((0x6dU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_7
                                                     : 
                                                    ((0x78U 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U] 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_19[0U])))
                                                      : 
                                                     ((0x79U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28 
                                                                                >> 0x1fU)))
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_28)))
                                                       : vlSelf->CPUTop__DOT__EX__DOT___GEN_151)))))))))),64);
    bufp->fullBit(oldp+285,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+286,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+287,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_25 
                             >> 0x1fU)));
    bufp->fullBit(oldp+288,((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_31 
                             >> 0x1fU)));
    bufp->fullQData(oldp+289,(((0x6aU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? ((vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                    < vlSelf->CPUTop__DOT__EX__DOT__src2)
                                    ? 1ULL : 0ULL) : 
                               ((2U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                 ? (VL_LTS_IQQ(64, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, vlSelf->CPUTop__DOT__EX__DOT__src2)
                                     ? 1ULL : 0ULL)
                                 : 0ULL))),64);
    VL_EXTEND_WQ(127,64, __Vtemp_h7548e965__0, VL_SHIFTRS_QQI(64,64,5, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_hd83d5fe3__0, (((QData)((IData)(
                                                                 ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U] 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_5[0U]))));
    VL_EXTEND_WQ(127,64, __Vtemp_hb125646c__0, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h2a02089f__0, __Vtemp_hb125646c__0, 
                  (0x3fU & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_hdc10468f__0, ((0x75U 
                                                 == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                 ? 
                                                (vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_16[0U])))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_28
                                                     : 
                                                    ((0xaU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___shift_result_T_35
                                                      : 
                                                     ((0x14U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? 
                                                      VL_SHIFTRS_QQI(64,64,6, vlSelf->CPUTop__DOT__EX__DOT___alu_result_T_58, 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->CPUTop__DOT__EX__DOT__src2)))
                                                       : 0ULL))))))));
    bufp->fullQData(oldp+291,((((QData)((IData)(((0x6eU 
                                                  == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                  ? 
                                                 __Vtemp_h7548e965__0[1U]
                                                  : 
                                                 ((0x73U 
                                                   == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                   ? 
                                                  __Vtemp_hd83d5fe3__0[1U]
                                                   : 
                                                  ((0x41U 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? 
                                                   __Vtemp_h2a02089f__0[1U]
                                                    : 
                                                   __Vtemp_hdc10468f__0[1U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((0x6eU 
                                                              == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                              ? 
                                                             __Vtemp_h7548e965__0[0U]
                                                              : 
                                                             ((0x73U 
                                                               == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                               ? 
                                                              __Vtemp_hd83d5fe3__0[0U]
                                                               : 
                                                              ((0x41U 
                                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                                ? 
                                                               __Vtemp_h2a02089f__0[0U]
                                                                : 
                                                               __Vtemp_hdc10468f__0[0U]))))))),64);
    bufp->fullQData(oldp+293,(((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                    : ((0x76U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                        : ((0x7bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                            : ((0xbU 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___branch_result_T_1
                                                    : 0ULL))))))),64);
    bufp->fullQData(oldp+295,(vlSelf->CPUTop__DOT__EX__DOT__csr_data),64);
    bufp->fullQData(oldp+297,(((0x19U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                ? vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1
                                : ((0x48U == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                    ? (0xfffffffffffffffeULL 
                                       & vlSelf->CPUTop__DOT__EX__DOT___addr_temp_T_1)
                                    : ((0x6bU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                        ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                        : ((0x6cU == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                            ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                            : ((0x76U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                : (
                                                   (0xcU 
                                                    == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                    ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                    : 
                                                   ((0x7bU 
                                                     == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                     ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                     : 
                                                    ((0xbU 
                                                      == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                      ? vlSelf->CPUTop__DOT__EX__DOT___dnpc_T_9
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                       ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->CPUTop__DOT__ID_io_ctrlIO_aluoptype))
                                                        ? vlSelf->CPUTop__DOT__EX__DOT__csr_data
                                                        : 0ULL))))))))))),64);
    bufp->fullCData(oldp+299,(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0),4);
    bufp->fullCData(oldp+300,((((7U == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                 ? 2U : 0U) | ((3U 
                                                == (IData)(vlSelf->CPUTop__DOT__ID__DOT__Inst_decode_0))
                                                ? 2U
                                                : 0U))),2);
    bufp->fullBit(oldp+301,(vlSelf->CPUTop__DOT__ID__DOT__srctype2));
    bufp->fullBit(oldp+302,((vlSelf->CPUTop__DOT__IFM_inst 
                             >> 0x1fU)));
    bufp->fullBit(oldp+303,((1U & (vlSelf->CPUTop__DOT__IFM_inst 
                                   >> 0x13U))));
    bufp->fullBit(oldp+304,((vlSelf->CPUTop__DOT__IFM_inst 
                             >> 0x1fU)));
    bufp->fullQData(oldp+305,(vlSelf->CPUTop__DOT__IFM__DOT__rdata),64);
    bufp->fullBit(oldp+307,(vlSelf->CPUTop__DOT__mmio__DOT__flag));
    bufp->fullBit(oldp+308,(vlSelf->clock));
    bufp->fullBit(oldp+309,(vlSelf->reset));
    bufp->fullQData(oldp+310,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+312,(vlSelf->io_inst),32);
    bufp->fullQData(oldp+313,(vlSelf->io_result),64);
    bufp->fullBit(oldp+315,(vlSelf->io_time_int));
    bufp->fullBit(oldp+316,(1U));
    bufp->fullCData(oldp+317,(0U),5);
    bufp->fullCData(oldp+318,(1U),5);
    bufp->fullCData(oldp+319,(2U),5);
    bufp->fullCData(oldp+320,(3U),5);
    bufp->fullCData(oldp+321,(4U),5);
    bufp->fullCData(oldp+322,(5U),5);
    bufp->fullCData(oldp+323,(6U),5);
    bufp->fullCData(oldp+324,(7U),5);
    bufp->fullCData(oldp+325,(8U),5);
    bufp->fullCData(oldp+326,(9U),5);
    bufp->fullCData(oldp+327,(0xaU),5);
    bufp->fullCData(oldp+328,(0xbU),5);
    bufp->fullCData(oldp+329,(0xcU),5);
    bufp->fullCData(oldp+330,(0xdU),5);
    bufp->fullCData(oldp+331,(0xeU),5);
    bufp->fullCData(oldp+332,(0xfU),5);
    bufp->fullCData(oldp+333,(0x10U),5);
    bufp->fullCData(oldp+334,(0x11U),5);
    bufp->fullCData(oldp+335,(0x12U),5);
    bufp->fullCData(oldp+336,(0x13U),5);
    bufp->fullCData(oldp+337,(0x14U),5);
    bufp->fullCData(oldp+338,(0x15U),5);
    bufp->fullCData(oldp+339,(0x16U),5);
    bufp->fullCData(oldp+340,(0x17U),5);
    bufp->fullCData(oldp+341,(0x18U),5);
    bufp->fullCData(oldp+342,(0x19U),5);
    bufp->fullCData(oldp+343,(0x1aU),5);
    bufp->fullCData(oldp+344,(0x1bU),5);
    bufp->fullCData(oldp+345,(0x1cU),5);
    bufp->fullCData(oldp+346,(0x1dU),5);
    bufp->fullCData(oldp+347,(0x1eU),5);
    bufp->fullCData(oldp+348,(0x1fU),5);
}
