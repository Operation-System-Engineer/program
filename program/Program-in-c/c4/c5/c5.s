	.file	"c5.c"
	.section	.rodata
	.align 4
.LC1:
	.string	"%f assigned to an int produces %i\n"
	.align 4
.LC2:
	.string	"%i assigned to a float produces %f\n"
	.align 4
.LC3:
	.string	"%i divided by 100 produces %f\n"
	.align 4
.LC5:
	.string	"%i divided by 100.0 produces %f\n"
	.align 4
.LC7:
	.string	" (float) %i divided by 100 produces %f\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	movl	$0x42f64000, %eax
	movl	%eax, 44(%esp)
	movl	$-150, 56(%esp)
	movb	$97, 63(%esp)
	flds	44(%esp)
	fnstcw	26(%esp)
	movzwl	26(%esp), %eax
	movb	$12, %ah
	movw	%ax, 24(%esp)
	fldcw	24(%esp)
	fistpl	52(%esp)
	fldcw	26(%esp)
	flds	44(%esp)
	movl	$.LC1, %eax
	movl	52(%esp), %edx
	movl	%edx, 12(%esp)
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	fildl	56(%esp)
	fstps	44(%esp)
	flds	44(%esp)
	movl	$.LC2, %eax
	fstpl	8(%esp)
	movl	56(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	56(%esp), %ecx
	movl	$1374389535, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$5, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, 20(%esp)
	fildl	20(%esp)
	fstps	48(%esp)
	flds	48(%esp)
	movl	$.LC3, %eax
	fstpl	8(%esp)
	movl	56(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	fildl	56(%esp)
	fldl	.LC4
	fdivrp	%st, %st(1)
	fstps	48(%esp)
	flds	48(%esp)
	movl	$.LC5, %eax
	fstpl	8(%esp)
	movl	56(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	fildl	56(%esp)
	flds	.LC6
	fdivrp	%st, %st(1)
	fstps	48(%esp)
	flds	48(%esp)
	movl	$.LC7, %eax
	fstpl	8(%esp)
	movl	56(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.section	.rodata
	.align 8
.LC4:
	.long	0
	.long	1079574528
	.align 4
.LC6:
	.long	1120403456
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
