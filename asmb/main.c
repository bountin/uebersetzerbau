#include <stdio.h>
#include <stddef.h>

void asmb(unsigned long x[], size_t n);
void asmb_callchecking(unsigned long x[], size_t n);

void asmb_ref(unsigned long x[], size_t n)
{
  unsigned long carry=0;
  unsigned long next_carry;
  long i;
  for (i=n-1; i>=0; i--) {
    next_carry = x[i] <<63;
    x[i] = (x[i] >> 1) | carry;
    carry = next_carry;
  }
}

void pln(unsigned long x[], size_t n)
{
  size_t i;
  printf("0x");
  for (i=n; i>0; i--)
    printf("%016lx",x[i-1]);
}


int test(unsigned long x[], size_t n)
{
  int i;
  unsigned long x_ref[n+2], x_out[n+2];
  for (i=0; i<n; i++) {
    x_ref[i+1] = x[i];
    x_out[i+1] = x[i];
  }
  x_out[0] = x_ref[0] = x_out[n+1] = x_ref[n+1] = 0xdeadbeefdeadbeef;
  pln(x,n);
  printf(" >> 1");
  asmb_callchecking(x_out+1,n);
  asmb_ref(x_ref+1,n);
  for (i=0; i<n+2; i++) {
    if (x_ref[i] != x_out[i]) {
      printf("\nFehler auf Position %d:\nWert: %016lx, erwartet: %016lx\n",
             i-1,x_ref[i],x_out[i]);
      return 0;
    }
  }
  printf(" =\n");
  pln(x_out+1,n);
  printf("\n\n");
  return 1;
}
  
int main()
{
  unsigned long a[]={~0L,~1L,1L,0L,2L,3L,~2L,
                     0x5555555555555555L,0xAAAAAAAAAAAAAAAAL,
                     0x123456789abcdef,0xfedcba9876543210};
  int f;

  f = test(a+2,0);
  f &= test(a,1);
  f &= test(a+1,1);
  f &= test(a,11);
  f &= test(a+1,9);

  // Some tests just for me
  f &= test(a,8);
  f &= test(a+3,7);
  f &= test(a,6);
  f &= test(a,7);



  if (!f)
    fprintf(stdout,"\nTest failed.\n");
  else
    fprintf(stdout,"\nTest succeeded.\n");
  return !f;
}
