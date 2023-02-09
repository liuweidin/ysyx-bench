
#define MAX_MEM 480

#define is_batch_mode 0

#define MAX_SIM_TIME 2000

#define MAX_PRINT_STEP 10

#define IRTRACE 32 

uint32_t mem[MAX_MEM];
uint32_t mem_size;

uint64_t *cpu_gpr = NULL;
uint32_t *Inst;


void init_disasm(const char *triple); 

