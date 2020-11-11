	.file	"c6.c"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movb	$72, 22(%esp)
	movb	$101, 23(%esp)
	movb	$108, 24(%esp)
	movb	$108, 25(%esp)
	movb	$111, 26(%esp)
	movb	$33, 27(%esp)
	movl	$0, 28(%esp)
	jmp	.L2
.L3:
	movl	28(%esp), %eax
	movzbl	22(%esp,%eax), %eax
	movsbl	%al, %eax
	movl	%eax, (%esp)
	call	putchar
	addl	$1, 28(%esp)
.L2:
	cmpl	$5, 28(%esp)
	jle	.L3
	movl	$10, (%esp)
	call	putchar
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
