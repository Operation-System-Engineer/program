	.file	"dtl.c"
	.section	.rodata
.LC0:
	.string	"THE sum of is %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$48, %esp
	movl	$144, 28(%esp)
	movl	$96, 32(%esp)
	movl	$60, 36(%esp)
	movl	$48, 40(%esp)
	movl	32(%esp), %eax
	movl	28(%esp), %edx
	leal	(%edx,%eax), %eax
	addl	36(%esp), %eax
	addl	40(%esp), %eax
	movl	%eax, 44(%esp)
	movl	$.LC0, %eax
	movl	44(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
