#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  printf("sdfas\n");
  int k=inl(KBD_ADDR);
  printf("sdfas\n");

  if(k!=AM_KEY_NONE){
      kbd->keycode = k%256;
      if(k >>8 !=0) kbd->keydown = 1;
      else kbd->keydown = 0;
      
  }
  else{
      kbd->keydown = 0;
      kbd->keycode = AM_KEY_NONE;
  }
}
