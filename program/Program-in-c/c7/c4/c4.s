	.file	"c4.c"
	.section	.rodata
.LC0:
	.string	"%i "
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$256, %esp
	movl	$2, 248(%esp)
	movl	$2, 40(%esp)
	movl	$3, 44(%esp)
	movl	$5, 240(%esp)
	jmp	.L2
.L8:
	movb	$1, 255(%esp)
	movl	$1, 244(%esp)
	jmp	.L3
.L6:
	movl	244(%esp), %eax
	movl	40(%esp,%eax,4), %ecx
	movl	240(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	%ecx
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L4
	movb	$0, 255(%esp)
.L4:
	addl	$1, 244(%esp)
.L3:
	cmpb	$0, 255(%esp)
	je	.L5
	movl	244(%esp), %eax
	movl	40(%esp,%eax,4), %eax
	movl	%eax, 28(%esp)
	movl	240(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	28(%esp)
	movl	%eax, %edx
	movl	244(%esp), %eax
	movl	40(%esp,%eax,4), %eax
	cmpl	%eax, %edx
	jge	.L6
.L5:
	cmpb	$0, 255(%esp)
	je	.L7
	movl	248(%esp), %eax
	movl	240(%esp), %edx
	movl	%edx, 40(%esp,%eax,4)
	addl	$1, 248(%esp)
.L7:
	addl	$2, 240(%esp)
.L2:
	cmpl	$50, 240(%esp)
	jle	.L8
	movl	$0, 244(%esp)
	jmp	.L9
.L10:
	movl	244(%esp), %eax
	movl	40(%esp,%eax,4), %edx
	movl	$.LC0, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, 244(%esp)
.L9:
	movl	244(%esp), %eax
	cmpl	248(%esp), %eax
	jl	.L10
	movl	$10, (%esp)
	call	putchar
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
