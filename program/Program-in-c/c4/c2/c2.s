	.file	"c2.c"
	.section	.rodata
.LC0:
	.string	"a - b = %i\n"
.LC1:
	.string	"b * c = %i\n"
.LC2:
	.string	"a / c = %i\n"
.LC3:
	.string	"a + b * c = %i\n"
.LC4:
	.string	"a * b + c * d = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$48, %esp
	movl	$100, 28(%esp)
	movl	$2, 32(%esp)
	movl	$25, 36(%esp)
	movl	$4, 40(%esp)
	movl	32(%esp), %eax
	movl	28(%esp), %edx
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, 44(%esp)
	movl	$.LC0, %eax
	movl	44(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	32(%esp), %eax
	imull	36(%esp), %eax
	movl	%eax, 44(%esp)
	movl	$.LC1, %eax
	movl	44(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	28(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	36(%esp)
	movl	%eax, 44(%esp)
	movl	$.LC2, %eax
	movl	44(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	32(%esp), %eax
	imull	36(%esp), %eax
	addl	28(%esp), %eax
	movl	%eax, 44(%esp)
	movl	$.LC3, %eax
	movl	44(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	28(%esp), %eax
	movl	%eax, %edx
	imull	32(%esp), %edx
	movl	36(%esp), %eax
	imull	40(%esp), %eax
	addl	%eax, %edx
	movl	$.LC4, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
