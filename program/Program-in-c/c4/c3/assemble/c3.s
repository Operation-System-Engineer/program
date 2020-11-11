	.file	"c3.c"
	.section	.rodata
.LC2:
	.string	"6 + a / 5 * b = %i\n"
.LC3:
	.string	"a / b * b = %i\n"
.LC4:
	.string	"c / d * d = %f\n"
.LC5:
	.string	"-a = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$25, 16(%esp)
	movl	$2, 20(%esp)
	movl	$0x41c80000, %eax
	movl	%eax, 24(%esp)
	movl	$0x40000000, %eax
	movl	%eax, 28(%esp)
	movl	16(%esp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	imull	20(%esp), %eax
	leal	6(%eax), %edx
	movl	$.LC2, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	16(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	20(%esp)
	movl	%eax, %edx
	imull	20(%esp), %edx
	movl	$.LC3, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	flds	24(%esp)
	fdivs	28(%esp)
	fmuls	28(%esp)
	movl	$.LC4, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	16(%esp), %eax
	movl	%eax, %edx
	negl	%edx
	movl	$.LC5, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
