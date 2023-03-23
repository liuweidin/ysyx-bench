#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case(11): {
          ev.event =EVENT_SYSCALL;
          c->mepc+=4;
          break;
      }
      default: ev.event = EVENT_ERROR; break;
    }
    /*printf("%x %x %x %x\n",c->mcause,c->mstatus,c->mepc,c->pdir);
    for(int i=0;i<32;i++){
        printf("%x\n",c->gpr[i]);
    }*/
    printf("asdfasf  %x\n",&user_handler);
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));
  asm volatile("csrw mstatus, %0" : : "r"(0xa00001800));
  // register event handler
  //printf("%x\n",handler);
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
