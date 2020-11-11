	.file	"c4.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"What triangular number do you want?"
.LC1:
	.string	"%i"
	.align 4
.LC2:
	.string	"Triangular number  %i   is%   i\n"
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
	leal	20(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	$0, 28(%esp)
	movl	$1, 24(%esp)
	jmp	.L2
.L3:
	movl	24(%esp), %eax
	addl	%eax, 28(%esp)
	addl	$1, 24(%esp)
.L2:
	movl	20(%esp), %eax
	cmpl	%eax, 24(%esp)
	jle	.L3
	movl	20(%esp), %edx
	movl	$.LC2, %eax
	movl	28(%esp), %ecx
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
