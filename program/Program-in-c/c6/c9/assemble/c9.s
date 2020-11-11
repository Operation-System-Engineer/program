	.file	"c9.c"
	.section	.rodata
.LC0:
	.string	"Type in your expression."
.LC1:
	.string	"%f %c %f"
.LC2:
	.string	"%.2f\n"
.LC4:
	.string	"Division by zero."
.LC5:
	.string	"Unknown operator."
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
	movsbl	%al, %eax
	cmpl	$43, %eax
	je	.L4
	cmpl	$43, %eax
	jg	.L7
	cmpl	$42, %eax
	je	.L3
	jmp	.L2
.L7:
	cmpl	$45, %eax
	je	.L5
	cmpl	$47, %eax
	je	.L6
	jmp	.L2
.L4:
	flds	28(%esp)
	flds	24(%esp)
	faddp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L8
.L5:
	flds	28(%esp)
	flds	24(%esp)
	fsubrp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L8
.L3:
	flds	28(%esp)
	flds	24(%esp)
	fmulp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L8
.L6:
	flds	24(%esp)
	fldz
	fxch	%st(1)
	fucomip	%st(1), %st
	fstp	%st(0)
	jne	.L14
	jp	.L14
.L13:
	movl	$.LC4, (%esp)
	call	puts
	jmp	.L8
.L14:
	flds	28(%esp)
	flds	24(%esp)
	fdivrp	%st, %st(1)
	movl	$.LC2, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L8
.L2:
	movl	$.LC5, (%esp)
	call	puts
.L8:
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
