This is a repository for my university lecture 'Uebersetzerbau'. It's about how compilers work and for practice we have to implement our own language with our own compiler.

The university page is at http://www.complang.tuwien.ac.at/andi/185A48

<b>asma</b> is a simple assembler script which implements the following C function:

    void asma_ref(unsigned long x[])
    {
      unsigned long carry;
      carry = x[1] << 63;
      x[1] = x[1] >> 1;
      x[0] = (x[0] >> 1)|carry;
    }

<b>asmb</b> also is a assembler script but it uses a loop *oh yeah*:

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
