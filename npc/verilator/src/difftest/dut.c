#include <dlfcn.h>
#include <stdlib.h>
#include <iostream>
#include <assert.h>

#include <tb.h>
#include<difftest.h>



Ref_difftest_memcpy ref_difftest_memcpy=NULL;
Ref_difftest_regcpy ref_difftest_regcpy=NULL;
Ref_difftest_exec ref_difftest_exec=NULL;
Ref_difftest_raise_intr ref_difftest_raise_intr=NULL;
Ref_difftest_init ref_difftest_init=NULL;

void init_difftest(char *ref_so_file, uint32_t img_size, int port, uint8_t *mem){
  assert(ref_so_file != NULL);
  printf("here\n");
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);
  printf("here\n");
  ref_difftest_memcpy = (Ref_difftest_memcpy)dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);
  printf("here\n");
  ref_difftest_regcpy = (Ref_difftest_regcpy)dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);
  printf("here\n");
  ref_difftest_exec = (Ref_difftest_exec)dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);
  printf("here\n");
  ref_difftest_raise_intr = (Ref_difftest_raise_intr)dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);
  printf("here\n");
  ref_difftest_init = (Ref_difftest_init)dlsym(handle, "difftest_init");
  assert(ref_difftest_init);
  printf("here\n");
  ref_difftest_init(port);
  //printf("%d\n",img_size);
  ref_difftest_memcpy(RESET_VECTOR, mem, img_size, DIFFTEST_TO_REF);
  //printf("here5\n");
  ref_difftest_regcpy(&cpu_gpr, DIFFTEST_TO_REF);
  
  printf("difftest \033[40;32mON\033[0m\n");
}

static bool check_reg(cpu_state *ref_cpu,uint64_t pc){
    //printf("%016lx  %016lx\n",pc,ref_cpu->pc);
    if(pc != ref_cpu->pc){
        //printf("her\n");
        
        return false;
    }
    for(int i=0;i<32;i++){
    
        if(ref_cpu->reg[i] != cpu_gpr[i]) {return false;}
        
    }
    
    return true;
}

bool difftest_step(uint64_t pc){
    cpu_state ref_cpu;
    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    //printf("%016lx\n",ref_cpu.pc);
    //printf("%016lx\n",pc);
    bool ret=check_reg(&ref_cpu,pc);
    return ret;
}

void difftest_print(){
    cpu_state ref_cpu;
    ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_DUT);
    
    printf("======ref PC is %016lx\n",ref_cpu.pc-4);
    for(int i=0;i<32;i++){
        printf("gpr[%d]: %016lx\n",i,ref_cpu.reg[i]);
    }
}






