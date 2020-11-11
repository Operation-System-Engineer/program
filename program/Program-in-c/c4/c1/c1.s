	.file	"c1.c"
	.section	.rodata
.LC2:
	.string	"integerVar = %i\n"
.LC3:
	.string	"floatingVar = %f\n"
.LC4:
	.string	"doubleVar = %e\n"
.LC5:
	.string	"doubleVar = %g\n"
.LC6:
	.string	"charVar = %c\n"
.LC7:
	.string	"boolVar = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$48, %esp
	movl	$100, 24(%esp)
	movl	$0x43a5e51f, %eax
	movl	%eax, 28(%esp)
	fldl	.LC1
	fstpl	32(%esp)
	movb	$87, 46(%esp)
	movb	$0, 47(%esp)
	movl	$.LC2, %eax
	movl	24(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	flds	28(%esp)
	movl	$.LC3, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$.LC4, %eax
	fldl	32(%esp)
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$.LC5, %eax
	fldl	32(%esp)
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	movsbl	46(%esp), %edx
	movl	$.LC6, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movzbl	47(%esp), %edx
	movl	$.LC7, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.section	.rodata
	.align 8
.LC1:
	.long	1056964608
	.long	1114148938
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
