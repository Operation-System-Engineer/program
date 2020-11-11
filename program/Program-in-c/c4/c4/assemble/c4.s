	.file	"c4.c"
	.section	.rodata
.LC0:
	.string	"a %% b = %i\n"
.LC1:
	.string	"a %% c = %i\n"
.LC2:
	.string	"a %% d = %i\n"
.LC3:
	.string	"a / d * d + a %% d = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$25, 16(%esp)
	movl	$5, 20(%esp)
	movl	$10, 24(%esp)
	movl	$7, 28(%esp)
	movl	16(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	20(%esp)
	movl	$.LC0, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	16(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	24(%esp)
	movl	$.LC1, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	16(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	28(%esp)
	movl	$.LC2, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	16(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	28(%esp)
	movl	%eax, %ecx
	imull	28(%esp), %ecx
	movl	16(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	28(%esp)
	movl	%edx, %eax
	leal	(%ecx,%eax), %edx
	movl	$.LC3, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
