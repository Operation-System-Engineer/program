	.file	"c2.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"The 200th triangulular Number is %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$0, 28(%esp)
	movl	$1, 24(%esp)
	jmp	.L2
.L3:
	movl	24(%esp), %eax
	addl	%eax, 28(%esp)
	addl	$1, 24(%esp)
.L2:
	cmpl	$200, 24(%esp)
	jle	.L3
	movl	$.LC0, %eax
	movl	28(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
