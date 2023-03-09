/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}
/*static inline int check_csr_idx(int idx){
    IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 256));
    return idx;
}*/

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
#define csrgpr(idx)                          \
    do{                                      \
      if(idx==0x00) cpu.mstatus;      \
      else if(idx==0x05) cpu.mtvec;   \
      else if(idx == 0x41) cpu.mepc;  \
      else if(idx==0x42) cpu.mcause;   \
      else assert(0);                         \
    }while(0);               


static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
