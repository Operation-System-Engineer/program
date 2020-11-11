	.file	"c10a.c"
	.section	.rodata
.LC0:
	.string	"%i  "
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$2, 20(%esp)
	jmp	.L2
.L7:
	movb	$1, 31(%esp)
	movl	$2, 24(%esp)
	jmp	.L3
.L5:
	movl	20(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	24(%esp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L4
	movb	$0, 31(%esp)
.L4:
	addl	$1, 24(%esp)
.L3:
	movl	24(%esp), %eax
	cmpl	20(%esp), %eax
	jl	.L5
	cmpb	$0, 31(%esp)
	je	.L6
	movl	$.LC0, %eax
	movl	20(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
.L6:
	addl	$1, 20(%esp)
.L2:
	cmpl	$50, 20(%esp)
	jle	.L7
	movl	$10, (%esp)
	call	putchar
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
