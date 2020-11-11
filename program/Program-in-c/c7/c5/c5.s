	.file	"c5.c"
	.section	.rodata
.LC0:
	.string	"array_values[%i] = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	pushl	%edi
	pushl	%ebx
	subl	$72, %esp
	leal	20(%esp), %ebx
	movl	$0, %eax
	movl	$10, %edx
	movl	%ebx, %edi
	movl	%edx, %ecx
	rep stosl
	movl	$1, 24(%esp)
	movl	$4, 28(%esp)
	movl	$9, 32(%esp)
	movl	$16, 36(%esp)
	movl	$5, 60(%esp)
	jmp	.L2
.L3:
	movl	60(%esp), %eax
	movl	60(%esp), %edx
	imull	60(%esp), %edx
	movl	%edx, 20(%esp,%eax,4)
	addl	$1, 60(%esp)
.L2:
	cmpl	$9, 60(%esp)
	jle	.L3
	movl	$0, 60(%esp)
	jmp	.L4
.L5:
	movl	60(%esp), %eax
	movl	20(%esp,%eax,4), %edx
	movl	$.LC0, %eax
	movl	%edx, 8(%esp)
	movl	60(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, 60(%esp)
.L4:
	cmpl	$9, 60(%esp)
	jle	.L5
	movl	$0, %eax
	addl	$72, %esp
	popl	%ebx
	popl	%edi
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
