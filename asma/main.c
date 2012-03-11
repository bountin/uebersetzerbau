void asma(unsigned long x[]);
void asma_ref(unsigned long x[]);

#include <stdio.h>
#include <string.h>

void asma_ref(unsigned long x[])
{
  unsigned long carry;
  carry = x[1] << 63;
  x[1] = x[1] >> 1;
  x[0] = (x[0] >> 1)|carry;
}

int test(unsigned long x[])
{
  int i;
  unsigned long x_ref[2], x_out[2];
  for (i=0; i<2; i++) {
    x_ref[i] = x[i];
    x_out[i] = x[i];
  }
  printf("0x%016lx%016lx", x[1], x[0]);
  asma_callchecking(x_out);
  asma_ref(x_ref);
  for (i=0; i<2; i++) {
    if (x_ref[i] != x_out[i]) {
      printf("\nFehler: Falsche Ausgabe an Stelle %d: Wert: %016lx, erwartet: %016lx\n",i,x_out[i],x_ref[i]);
      return 0;
    }
  }
  printf(" >> 1\n     =0x%016lx%016lx\n", x_out[1],x_out[0]);
  return 1;
}
  
int main()
{
  unsigned long a[]={~0L,~1L,0L,1L,2L,~0L};
  int f;

  f = test(a);
  f &= test(a+1);
  f &= test(a+2);
  f &= test(a+3);
  f &= test(a+4);
  if (!f)
    fprintf(stdout,"\nTest failed.\n");
  else
    fprintf(stdout,"\nTest succeeded.\n");
  return !f;
}
