	.file	"dtl4.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"What lessons number do you want?"
.LC1:
	.string	"%i"
	.align 4
.LC2:
	.string	"lessons   number    %i is    %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$1, 28(%esp)
	jmp	.L2
.L5:
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	16(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	$0, 24(%esp)
	movl	$1, 20(%esp)
	jmp	.L3
.L4:
	addl	$6, 24(%esp)
	addl	$1, 20(%esp)
.L3:
	movl	16(%esp), %eax
	cmpl	%eax, 20(%esp)
	jle	.L4
	movl	16(%esp), %edx
	movl	$.LC2, %eax
	movl	24(%esp), %ecx
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, 28(%esp)
.L2:
	cmpl	$5, 28(%esp)
	jle	.L5
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
