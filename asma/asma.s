	.file	"asma.s"
	.text
	.globl asma
	.type	asma, @function
asma:
	rcrq $1, 8(%rdi)
	rcrq $1, (%rdi)
	ret
