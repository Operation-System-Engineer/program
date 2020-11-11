	.file	"c5.c"
	.section	.rodata
.LC0:
	.string	"The sum of %i and %i is %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$50, 20(%esp)
	movl	$25, 24(%esp)
	movl	24(%esp), %eax
	movl	20(%esp), %edx
	leal	(%edx,%eax), %eax
	movl	%eax, 28(%esp)
	movl	$.LC0, %eax
	movl	28(%esp), %edx
	movl	%edx, 12(%esp)
	movl	24(%esp), %edx
	movl	%edx, 8(%esp)
	movl	20(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
