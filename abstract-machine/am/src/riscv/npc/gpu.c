#include <am.h>
#include <stdio.h>
#include "./include/npc.h"
#include "../riscv.h"

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {

}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  
  uint32_t v1=inl(VGACTL_ADDR);
  
  //uint32_t v2=inl(VGACTL_ADDR+4);
  /*uint64_t v=(v2<<32) +v1;
  printf("%016x\n",v);*/
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = v1 >> 16, .height = v1 & 0xffff,
    .vmemsz = (v1 >> 16)*(v1 & 0xffff)
  };
  //printf("%d %d\n",v1 >> 16,v1 & 0xffff);
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
    if(ctl->w==0 || ctl->h==0) return;
    
    uint32_t v1=inl(VGACTL_ADDR);
    int w = (v1 >> 16); 
    //int h = (v1 & 0xffff);
    
    int i=ctl->y,j=ctl->x;

   printf("%d  %d   %d   %d  %d %d\n",i,j,ctl->w,ctl->h,ctl->y+ctl->h,ctl->x+ctl->w);
   for(;i<ctl->y+ctl->h;i++){
        for(j=ctl->x;j<ctl->x+ctl->w;j++){
            outl(FB_ADDR+(i*w+j)*4, *(uint32_t *)(ctl->pixels + ((i-ctl->y)*ctl->w+(j-ctl->x))*4));
            //printf("%016x  %x\n",FB_ADDR+(i*w+j)*4,*(uint32_t *)(ctl->pixels + ((i-ctl->y)*ctl->w+(j-ctl->x))*4));
        }
        //printf("%d\n",i);
    }
    outl(SYNC_ADDR,1);
  
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}

