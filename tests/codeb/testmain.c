#include <stdio.h>
#include <stdlib.h>

extern long callchecking();

#define RET return

int call(void)
{
#include CALL
}

int main(int argc, char *argv[])
{
  long r;
  r=callchecking();
  if(r==0 || r==1)
    return !r;
  return r;
}

