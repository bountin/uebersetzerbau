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

<b>scanner</b> is a lexer for a simple exercise language. It is able to parse some keywords, decimal and 
hexadecimal numbers and identifiers. For each found token it's printing what it has found. More details are 
available in German on the practice page: 
http://www.complang.tuwien.ac.at/ubvl/skriptum/skriptum12.html#x1-180007.3

<b>parser</b> adds a semantical check to the lexical that was implemented before (scanner). It is expecting 
a single function definition with n parameters and terminated by the keyword <i>end</i>. Its body can 
contain several operations as well as <i>goto</i>s or <i>if</i>s. The complete grammar as EBNF is available 
at http://www.complang.tuwien.ac.at/ubvl/skriptum/skriptum12.html#x1-220007.4
