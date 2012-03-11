	.file	"asmb.s"
	.text
	.globl asmb
	.type	asmb, @function
asmb:	
	
	# Initialize the flags
	cmp $0, %rsi

loop:
	jz end

	# i--
	# dec updates ZF but not CF!
	dec %rsi

	# x[i] >>= 1
	# rcrq handles the CF
	rcrq $1, (%rdi, %rsi, 8)

	jmp loop

end:
	ret
