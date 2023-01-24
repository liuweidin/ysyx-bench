#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VCPUTop.h"
#include "VCPUTop___024root.h"
#include <svdpi.h>
//#include "VCPUTop__Dpi.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time=0;
uint32_t mem[20];

/*void init_mem(char file_path){
    
}*/

//void ebreak() {dut->final();return;}
uint32_t pem_read(uint64_t pc){
    
    mem[0]=0b00000000000100000000000100010011;
    mem[1]=0b00000000000100010000000100010011;
    mem[2]=0b00000000000100010000000100010011;
    mem[3]=0b00000000000100000000000001110011;
    mem[4]=0b00000000000100010000000100010011;
    return mem[(pc-0x80000000)/4];
} 

int main(int argc, char** argv) {

VerilatedContext* contextp = new VerilatedContext;
contextp->commandArgs(argc, argv);
VCPUTop *dut = new VCPUTop;

Verilated::traceEverOn(true);
VerilatedVcdC *m_trace = new VerilatedVcdC;
dut->trace(m_trace,5);
m_trace->open("waveform.vcd");

while(sim_time<MAX_SIM_TIME && (!contextp->gotFinish())){
    dut->clock ^= 1;
    dut->reset = 1;
    dut->io_inst=0; 
    if(sim_time>=5){
        dut->reset = 0;
        dut->io_inst = pem_read(dut->io_pc);
    }
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
}
printf("Final PC is : 0x%lx\n",dut->io_pc);
m_trace->close();
delete dut;
delete contextp;
exit(EXIT_SUCCESS);


}

