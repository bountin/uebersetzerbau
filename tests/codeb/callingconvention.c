/* gcc -c -fomit-frame-pointer -fno-defer-pop callingconvention.c */

#include <stdlib.h>

extern int call(void);

/* geprueft werden callee gesicherte Register: rbx,r12-r15, 
 * rsp (stackptr), rbp (frameptr) */

#define CHECKNUM 0x1234567812345678
long callchecking() 
{
  long ret;
  register long x0 asm("%rbx")=CHECKNUM+0;
  register long x1 asm("%r12")=CHECKNUM+1;
  register long x2 asm("%r13")=CHECKNUM+2;
  register long x3 asm("%r14")=CHECKNUM+3;
  register long x4 asm("%r15")=CHECKNUM+4;
  register long x5 asm("%rbp")=CHECKNUM+5;
  static void* origsp;
  void*newsp;
  asm("movq %%rsp,%0":"=g"(origsp):);
  asm("mov $0x1234567812345678, %rax");
  ret=call();
  if(x0!=CHECKNUM+0) exit(11);
  if(x1!=CHECKNUM+1) exit(12);
  if(x2!=CHECKNUM+2) exit(13);
  if(x3!=CHECKNUM+3) exit(14);
  if(x4!=CHECKNUM+4) exit(15);
  if(x5!=CHECKNUM+5) exit(16);
  asm("movq %%rsp,%0":"=g"(newsp):);
  if(origsp!=newsp) exit(30);
  return ret;
}
