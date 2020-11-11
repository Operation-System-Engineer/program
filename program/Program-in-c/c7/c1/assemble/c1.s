	.file	"c1.c"
	.section	.rodata
.LC0:
	.string	"values[%i] = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	movl	$197, 20(%esp)
	movl	$-100, 28(%esp)
	movl	$350, 40(%esp)
	movl	20(%esp), %edx
	movl	40(%esp), %eax
	leal	(%edx,%eax), %eax
	movl	%eax, 32(%esp)
	movl	40(%esp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, 56(%esp)
	movl	28(%esp), %eax
	subl	$1, %eax
	movl	%eax, 28(%esp)
	movl	$0, 60(%esp)
	jmp	.L2
.L3:
	movl	60(%esp), %eax
	movl	20(%esp,%eax,4), %edx
	movl	$.LC0, %eax
	movl	%edx, 8(%esp)
	movl	60(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, 60(%esp)
.L2:
	cmpl	$9, 60(%esp)
	jle	.L3
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
