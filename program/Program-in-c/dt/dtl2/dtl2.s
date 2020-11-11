	.file	"dtl2.c"
	.section	.rodata
.LC0:
	.string	"Table of lessons Numbers\n"
.LC1:
	.string	"n  lessons  from 1 to n"
.LC2:
	.string	"-  ---------------------"
.LC3:
	.string	"%i\t    %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, (%esp)
	call	puts
	movl	$.LC1, (%esp)
	call	puts
	movl	$.LC2, (%esp)
	call	puts
	movl	$0, 28(%esp)
	movl	$1, 24(%esp)
	jmp	.L2
.L3:
	addl	$6, 28(%esp)
	movl	$.LC3, %eax
	movl	28(%esp), %edx
	movl	%edx, 8(%esp)
	movl	24(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, 24(%esp)
.L2:
	cmpl	$730, 24(%esp)
	jle	.L3
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
