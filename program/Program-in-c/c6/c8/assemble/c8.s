	.file	"c8.c"
	.section	.rodata
.LC0:
	.string	"Type in your expression."
.LC1:
	.string	"%f %c %f"
.LC2:
	.string	"%.2f\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, (%esp)
	call	puts
	movl	$.LC1, %eax
	leal	24(%esp), %edx
	movl	%edx, 12(%esp)
	leal	23(%esp), %edx
	movl	%edx, 8(%esp)
	leal	28(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movzbl	23(%esp), %eax
	cmpb	$43, %al
	jne	.L2
	flds	28(%esp)
	flds	24(%esp)
	faddp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L3
.L2:
	movzbl	23(%esp), %eax
	cmpb	$45, %al
	jne	.L4
	flds	28(%esp)
	flds	24(%esp)
	fsubrp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L3
.L4:
	movzbl	23(%esp), %eax
	cmpb	$42, %al
	jne	.L5
	flds	28(%esp)
	flds	24(%esp)
	fmulp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L3
.L5:
	movzbl	23(%esp), %eax
	cmpb	$47, %al
	jne	.L3
	flds	28(%esp)
	flds	24(%esp)
	fdivrp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
.L3:
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
