	.file	"c4.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"Enter your numberto be tested.: "
.LC1:
	.string	"%i"
.LC2:
	.string	"The number is even."
.LC3:
	.string	"The number is odd."
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	24(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	24(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	andl	$1, %eax
	subl	%edx, %eax
	movl	%eax, 28(%esp)
	cmpl	$0, 28(%esp)
	jne	.L2
	movl	$.LC2, (%esp)
	call	puts
	jmp	.L3
.L2:
	movl	$.LC3, (%esp)
	call	puts
.L3:
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
