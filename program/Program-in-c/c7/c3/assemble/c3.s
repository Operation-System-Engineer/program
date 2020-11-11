	.file	"c3.c"
	.section	.rodata
.LC0:
	.string	"%i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$80, %esp
	movl	$0, 16(%esp)
	movl	$1, 20(%esp)
	movl	$2, 76(%esp)
	jmp	.L2
.L3:
	movl	76(%esp), %eax
	movl	76(%esp), %edx
	subl	$2, %edx
	movl	16(%esp,%edx,4), %ecx
	movl	76(%esp), %edx
	subl	$1, %edx
	movl	16(%esp,%edx,4), %edx
	leal	(%ecx,%edx), %edx
	movl	%edx, 16(%esp,%eax,4)
	addl	$1, 76(%esp)
.L2:
	cmpl	$14, 76(%esp)
	jle	.L3
	movl	$0, 76(%esp)
	jmp	.L4
.L5:
	movl	76(%esp), %eax
	movl	16(%esp,%eax,4), %edx
	movl	$.LC0, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, 76(%esp)
.L4:
	cmpl	$14, 76(%esp)
	jle	.L5
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
