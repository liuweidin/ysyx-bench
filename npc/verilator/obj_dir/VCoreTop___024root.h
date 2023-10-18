// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCoreTop.h for the primary calling header

#ifndef VERILATED_VCORETOP___024ROOT_H_
#define VERILATED_VCORETOP___024ROOT_H_  // guard

#include "verilated.h"

class VCoreTop__Syms;
class VCoreTop___024unit;


class VCoreTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VCoreTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ CoreTop__DOT__IF_io_branch_io_is_branch;
        CData/*0:0*/ CoreTop__DOT__IF_io_branch_io_is_jump;
        CData/*0:0*/ CoreTop__DOT__IF_io_cache_req_addr_req_valid;
        CData/*0:0*/ CoreTop__DOT__IF_io_cache_req_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__IF_io_flush;
        CData/*0:0*/ CoreTop__DOT__IF_io_mret_flush;
        CData/*0:0*/ CoreTop__DOT__IF_io_excp_flush;
        CData/*0:0*/ CoreTop__DOT__IF_io_wb_stall;
        CData/*0:0*/ CoreTop__DOT__IF_io_ex_stall;
        CData/*0:0*/ CoreTop__DOT__ID_io_ex_reg_rfWen;
        CData/*0:0*/ CoreTop__DOT__EX_io_out_ready;
        CData/*0:0*/ CoreTop__DOT__rf_MPORT_en;
        CData/*0:0*/ CoreTop__DOT__MEM_io_out_bits_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfWen;
        CData/*0:0*/ CoreTop__DOT__WB_io_out_valid;
        CData/*0:0*/ CoreTop__DOT__WB_io_out_bits_ctrl_csr_csr_en;
        CData/*0:0*/ CoreTop__DOT__ICACHE_io_out_rdata_rep_valid;
        CData/*3:0*/ CoreTop__DOT__MMEM_rd_id;
        CData/*1:0*/ CoreTop__DOT__MMEM_rd_resp;
        CData/*0:0*/ CoreTop__DOT__MMEM_wd_ready;
        CData/*0:0*/ CoreTop__DOT__MMEM_wd_last;
        CData/*3:0*/ CoreTop__DOT__MMEM_wr_id;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_raddr_req_ready;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_raddr_req_valid;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_waddr_req_ready;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_waddr_req_valid;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_wdata_req_ready;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_wdata_req_valid;
        CData/*7:0*/ CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_wstrb;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_last;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_wb_ready;
        CData/*0:0*/ CoreTop__DOT__ARBITER_io_in1_wb_valid;
        CData/*0:0*/ CoreTop__DOT___T;
        CData/*0:0*/ CoreTop__DOT___T_3;
        CData/*0:0*/ CoreTop__DOT___T_5;
        CData/*5:0*/ CoreTop__DOT__head;
        CData/*5:0*/ CoreTop__DOT__tail;
        CData/*0:0*/ CoreTop__DOT__empty;
        CData/*0:0*/ CoreTop__DOT__full;
        CData/*5:0*/ CoreTop__DOT___tail_T_1;
        CData/*5:0*/ CoreTop__DOT___head_T_1;
        CData/*0:0*/ CoreTop__DOT___T_9;
        CData/*0:0*/ CoreTop__DOT__valid;
        CData/*0:0*/ CoreTop__DOT___GEN_197;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src1Type;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_src2Type;
        CData/*2:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_fuType;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfWen;
        CData/*6:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_aluoptype;
        CData/*4:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_rfDest;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_ertn_flush;
        CData/*0:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_signal_excp_flush;
        CData/*0:0*/ CoreTop__DOT___T_15;
        CData/*0:0*/ CoreTop__DOT___T_16;
        CData/*0:0*/ CoreTop__DOT__valid_1;
        CData/*0:0*/ CoreTop__DOT___GEN_221;
        CData/*2:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_fuType;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_rfWen;
        CData/*6:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_aluoptype;
    };
    struct {
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_ertn_flush;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_signal_excp_flush;
        CData/*4:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfDest;
        CData/*0:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_en;
        CData/*0:0*/ CoreTop__DOT__valid_2;
        CData/*0:0*/ CoreTop__DOT___GEN_248;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_inst_valid;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_rfWen;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_ertn_flush;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_signal_excp_flush;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_skip;
        CData/*4:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfDest;
        CData/*0:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_en;
        CData/*0:0*/ CoreTop__DOT__DIP_io_is_break_REG;
        CData/*0:0*/ CoreTop__DOT__DIP_io_is_break_REG_1;
        CData/*0:0*/ CoreTop__DOT__DIP_io_is_skip_REG;
        CData/*0:0*/ CoreTop__DOT__DIP_io_inst_valid_REG;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_144;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_159;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_174;
        CData/*3:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_189;
        CData/*3:0*/ CoreTop__DOT__ID__DOT__Inst_decode_0;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_209;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_224;
        CData/*2:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_239;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_268;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_283;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_298;
        CData/*6:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_313;
        CData/*6:0*/ CoreTop__DOT__ID__DOT__Inst_decode_2;
        CData/*0:0*/ CoreTop__DOT__ID__DOT___Inst_decode_T_363;
        CData/*0:0*/ CoreTop__DOT__ID__DOT__Inst_decode_3;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__is_mul;
        CData/*0:0*/ CoreTop__DOT__EX__DOT___is_divw_T_2;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__is_divw;
        CData/*0:0*/ CoreTop__DOT__EX__DOT___compar_result_T;
        CData/*0:0*/ CoreTop__DOT__EX__DOT___compar_result_T_4;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__branch_flag;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__is_branch;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__is_jump;
        CData/*0:0*/ CoreTop__DOT__EX__DOT___io_is_flush_T_2;
        CData/*0:0*/ CoreTop__DOT__EX__DOT___io_is_flush_T_4;
        CData/*0:0*/ CoreTop__DOT__EX__DOT____VdfgTmp_hd56c994a__0;
        CData/*0:0*/ CoreTop__DOT__EX__DOT____VdfgTmp_h37196788__0;
        CData/*0:0*/ CoreTop__DOT__EX__DOT____VdfgTmp_h1a4c5317__0;
        CData/*0:0*/ CoreTop__DOT__EX__DOT____VdfgTmp_h08208b49__0;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult_io_in_valid;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult_io_out_valid;
        CData/*6:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__count;
        CData/*6:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT___count_T_5;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_valid;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_flow_div_signed;
        CData/*2:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__state;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__NewReq;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aSign;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bSign;
        CData/*5:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__value;
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_25;
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_51;
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_79;
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_105;
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_136;
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_162;
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_190;
    };
    struct {
        CData/*3:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___cntShift_T_216;
        CData/*6:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__cntShift;
        CData/*0:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__enough;
        CData/*2:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_7;
        CData/*6:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___GEN_20;
        CData/*7:0*/ CoreTop__DOT__MEM__DOT___mem_result_T_27;
        CData/*0:0*/ CoreTop__DOT__MEM__DOT___io_out_valid_T_6;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_hit;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__lru_lru_w_MPORT_addr_pipe_0;
        CData/*2:0*/ CoreTop__DOT__ICACHE__DOT__state;
        CData/*1:0*/ CoreTop__DOT__ICACHE__DOT__read_state;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__lru_r;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT___T_5;
        CData/*2:0*/ CoreTop__DOT__ICACHE__DOT___GEN_6;
        CData/*2:0*/ CoreTop__DOT__ICACHE__DOT___GEN_9;
        CData/*1:0*/ CoreTop__DOT__ICACHE__DOT___GEN_17;
        CData/*1:0*/ CoreTop__DOT__ICACHE__DOT___GEN_19;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT___io_in_rdata_rep_bits_rdata_T_1;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf_io_in_valid_REG;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1_tag_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_0_result;
        CData/*0:0*/ CoreTop__DOT__ICACHE__DOT__Scanf__DOT__hit_way_1_result;
        CData/*1:0*/ CoreTop__DOT__MMEM__DOT__read_state;
        CData/*1:0*/ CoreTop__DOT__MMEM__DOT__write_state;
        CData/*1:0*/ CoreTop__DOT__MMEM__DOT__read_next_state;
        CData/*1:0*/ CoreTop__DOT__MMEM__DOT__write_next_state;
        CData/*7:0*/ CoreTop__DOT__MMEM__DOT__read_count;
        CData/*0:0*/ CoreTop__DOT__ARBITER__DOT__state;
        CData/*0:0*/ CoreTop__DOT__ARBITER__DOT__choose_r;
        CData/*0:0*/ CoreTop__DOT__ARBITER__DOT___GEN_55;
        CData/*0:0*/ CoreTop__DOT__ARBITER__DOT___GEN_98;
        CData/*0:0*/ CoreTop__DOT__ARBITER__DOT____VdfgTmp_h85209c61__0;
        CData/*0:0*/ CoreTop__DOT__ARBITER__DOT____VdfgTmp_hc4f34b61__0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_addr_req_bits_we;
        CData/*7:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wmask;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_rdata_rep_bits_last;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wdata_req_ready;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_out_wb_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__birdge_io_in_addr_req_bits_ce;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_ready;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__birdge_io_in_rdata_rep_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__birdge_io_out_raddr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__birdge_io_out_waddr_req_valid;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__birdge_io_out_wb_valid;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data_io_write_bus_waymask;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_hit;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_data;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_lru_w_MPORT_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_MPORT_4_en;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_en_pipe_0;
    };
    struct {
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0_dirt_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1_dirt_w_addr_pipe_0;
        CData/*2:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__state;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__read_state;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__write_state;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru_r;
        CData/*3:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__count_write;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___T_8;
        CData/*2:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_10;
        CData/*2:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_14;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_22;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_24;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_30;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_32;
        CData/*3:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_89;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_bits_rdata_T_1;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_in_valid_REG;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___io_in_rdata_rep_valid_T_4;
        CData/*7:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wmaskextend_T_3;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___Cache_data_io_write_bus_valid_T_3;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT____VdfgTmp_h9d851aea__0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_addr;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_en;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_en_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_en_pipe_0;
        CData/*4:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0_valid_w_addr_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1_valid_w_en_pipe_0;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_0_result;
        CData/*0:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf__DOT__hit_way_1_result;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__birdge__DOT__read_state;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__birdge__DOT__write_state;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_2;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_8;
        CData/*1:0*/ CoreTop__DOT__MMIO__DOT__birdge__DOT___GEN_10;
        CData/*0:0*/ CoreTop__DOT__CSR__DOT____VdfgTmp_h0abbaf32__0;
        CData/*0:0*/ CoreTop__DOT__CSR__DOT____VdfgTmp_had87db98__0;
        CData/*0:0*/ __VdfgTmp_ha116befc__0;
        CData/*0:0*/ __VdfgTmp_ha248cb35__0;
        CData/*0:0*/ __VdfgTmp_h5a5a8c61__0;
        CData/*5:0*/ __Vtableidx1;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ CoreTop__DOT__EX_io_out_bits_ctrl_csr_csr_idx;
        SData/*11:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_csr_csr_idx;
        SData/*11:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_idx;
        SData/*11:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_idx;
        SData/*15:0*/ CoreTop__DOT__MEM__DOT___mem_result_T_44;
        VL_OUT(io_inst,31,0);
        IData/*31:0*/ CoreTop__DOT__IF_io_out_bits_Inst;
        IData/*31:0*/ CoreTop__DOT__ID_io_in_bits_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_0_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_1_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_2_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_3_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_4_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_5_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_6_Inst;
    };
    struct {
        IData/*31:0*/ CoreTop__DOT__buffer_7_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_8_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_9_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_10_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_11_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_12_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_13_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_14_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_15_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_16_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_17_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_18_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_19_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_20_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_21_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_22_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_23_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_24_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_25_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_26_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_27_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_28_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_29_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_30_Inst;
        IData/*31:0*/ CoreTop__DOT__buffer_31_Inst;
        IData/*31:0*/ CoreTop__DOT___GEN_145;
        IData/*31:0*/ CoreTop__DOT___GEN_158;
        IData/*31:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_inst;
        IData/*31:0*/ CoreTop__DOT__DIP_io_inst_REG;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___shift_result_T_25;
        IData/*31:0*/ CoreTop__DOT__EX__DOT___shift_result_T_31;
        VlWide<4>/*126:0*/ CoreTop__DOT__EX__DOT___GEN_76;
        VlWide<3>/*65:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplier;
        VlWide<5>/*131:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__multiplicand;
        VlWide<5>/*131:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__p;
        VlWide<5>/*131:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__temp;
        VlWide<5>/*132:0*/ CoreTop__DOT__EX__DOT__mul__DOT__mult__DOT__partial__DOT___io_p_T_19;
        VlWide<5>/*128:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__shiftReg;
        VlWide<3>/*64:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__aValx2Reg;
        VlWide<5>/*128:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT___shiftReg_T_5;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT__Scanf_io_out_bits_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT__data_line_reg;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT___GEN_51;
        VlWide<16>/*511:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0_MPORT_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Scanf_io_out_bits_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__data_line_reg;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_data_reg;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_67;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___GEN_90;
        VlWide<4>/*127:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo_lo;
        VlWide<8>/*255:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_lo;
        VlWide<4>/*127:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi_lo;
        VlWide<8>/*255:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_hi;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT___wdata_T_4;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_data_w_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0_MPORT_data;
        VlWide<16>/*511:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1_data_w_data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_pc,63,0);
    };
    struct {
        QData/*63:0*/ CoreTop__DOT__IF_io_branch_io_dnpc;
        QData/*63:0*/ CoreTop__DOT__IF_io_cache_req_rdata_rep_bits_rdata;
        QData/*63:0*/ CoreTop__DOT__EX_io_out_bits_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__EX_io_csr_rd_io_rd_data;
        QData/*63:0*/ CoreTop__DOT__MEM_io_out_bits_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__MEM_io_cache_io_rdata_rep_bits_rdata;
        QData/*63:0*/ CoreTop__DOT__ICACHE_io_out_raddr_req_bits_addr;
        QData/*63:0*/ CoreTop__DOT__ARBITER_io_in1_raddr_req_bits_addr;
        QData/*63:0*/ CoreTop__DOT__ARBITER_io_in1_waddr_req_bits_addr;
        QData/*63:0*/ CoreTop__DOT__ARBITER_io_in1_wdata_req_bits_data;
        QData/*63:0*/ CoreTop__DOT__buffer_0_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_1_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_2_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_3_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_4_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_5_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_6_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_7_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_8_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_9_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_10_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_11_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_12_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_13_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_14_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_15_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_16_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_17_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_18_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_19_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_20_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_21_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_22_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_23_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_24_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_25_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_26_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_27_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_28_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_29_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_30_PC;
        QData/*63:0*/ CoreTop__DOT__buffer_31_PC;
        QData/*63:0*/ CoreTop__DOT___GEN_177;
        QData/*63:0*/ CoreTop__DOT___GEN_190;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_data_Imm;
        QData/*63:0*/ CoreTop__DOT__EX_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_flow_Dnpc;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_data_Imm;
        QData/*63:0*/ CoreTop__DOT__MEM_io_in_bits_r_ctrl_csr_csr_data;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_PC;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_flow_Dnpc;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_rf_rfData;
        QData/*63:0*/ CoreTop__DOT__WB_io_in_bits_r_ctrl_csr_csr_data;
        QData/*63:0*/ CoreTop__DOT__DIP_io_pc_REG;
        QData/*63:0*/ CoreTop__DOT__DIP_io_dnpc_REG;
        QData/*63:0*/ CoreTop__DOT__IF__DOT__temp;
        QData/*63:0*/ CoreTop__DOT__IF__DOT___temp_T_10;
        QData/*63:0*/ CoreTop__DOT__ID__DOT__imm;
    };
    struct {
        QData/*63:0*/ CoreTop__DOT__EX__DOT__src1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__src2;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_7;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_10;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_26;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___alu_result_T_30;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___GEN_47;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___shift_result_T_28;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___shift_result_T_35;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___branch_result_T_1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT___dnpc_T_11;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src1;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi_io_in_bits_ctrl_data_src2;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_quotient;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi_io_out_bits_result_remainder;
        QData/*63:0*/ CoreTop__DOT__EX__DOT__div__DOT__divi__DOT__bValReg;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___addr_temp_T_1;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT__addr_temp;
        QData/*63:0*/ CoreTop__DOT__MEM__DOT___wdata_temp_T_21;
        QData/*63:0*/ CoreTop__DOT__ICACHE__DOT__mem_addr_reg;
        QData/*52:0*/ CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        QData/*63:0*/ CoreTop__DOT__MMEM__DOT__rdata;
        QData/*63:0*/ CoreTop__DOT__MMEM__DOT__write_addr_buffer;
        QData/*63:0*/ CoreTop__DOT__MMEM__DOT__read_addr_buffer;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE_io_in_wdata_req_bits_wdata;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_addr_reg;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__mem_write_addr_reg;
        QData/*63:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__wmaskextend_Genmask;
        QData/*52:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_tag_w_data;
        QData/*52:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0_MPORT_1_data;
        QData/*52:0*/ CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1_tag_w_data;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT__mepc;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT__mcause;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT__mstatus;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT__mtvec;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT__mie;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT__mip;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT___mstatus_T;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT___GEN_1;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT___GEN_2;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT___mstatus_T_1;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT___GEN_8;
        QData/*63:0*/ CoreTop__DOT__CSR__DOT___GEN_9;
        QData/*63:0*/ __Vtask_pmem_read__2__rdata;
        VlUnpacked<QData/*63:0*/, 32> CoreTop__DOT__rf;
        VlUnpacked<QData/*63:0*/, 32> CoreTop__DOT__DIP__DOT__rf;
        VlUnpacked<IData/*31:0*/, 7> CoreTop__DOT__DIP__DOT__IN;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__ICACHE__DOT__lru;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_0;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_1;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_0;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__TAG_1;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_0;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__ICACHE__DOT__Cache_data__DOT__data_valid_1;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__lru;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_0;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__dirt_1;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_0;
        VlUnpacked<VlWide<16>/*511:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_1;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_0;
        VlUnpacked<QData/*52:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__TAG_1;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_0;
        VlUnpacked<CData/*0:0*/, 32> CoreTop__DOT__MMIO__DOT__DCACHE__DOT__Cache_data__DOT__data_valid_1;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 6> CoreTop__DOT__CSR__DOT__CSRDIFF__DOT__inst_csr;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCoreTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCoreTop___024root(VCoreTop__Syms* symsp, const char* v__name);
    ~VCoreTop___024root();
    VL_UNCOPYABLE(VCoreTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
