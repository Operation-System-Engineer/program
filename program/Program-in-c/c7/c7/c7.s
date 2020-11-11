	.file	"c7.c"
	.section	.rodata
.LC0:
	.string	"NumberToConverted? "
.LC1:
	.string	"%ld"
.LC2:
	.string	"Base? "
.LC3:
	.string	"%i"
.LC4:
	.string	"converted Number = "
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	pushl	%ebx
	subl	$332, %esp
	movb	$48, 296(%esp)
	movb	$49, 297(%esp)
	movb	$50, 298(%esp)
	movb	$51, 299(%esp)
	movb	$52, 300(%esp)
	movb	$53, 301(%esp)
	movb	$54, 302(%esp)
	movb	$55, 303(%esp)
	movb	$56, 304(%esp)
	movb	$57, 305(%esp)
	movb	$65, 306(%esp)
	movb	$66, 307(%esp)
	movb	$67, 308(%esp)
	movb	$68, 309(%esp)
	movb	$69, 310(%esp)
	movb	$70, 311(%esp)
	movl	$0, 316(%esp)
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	36(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	$.LC2, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC3, %eax
	leal	32(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
.L2:
	movl	316(%esp), %ecx
	movl	36(%esp), %eax
	movl	32(%esp), %ebx
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	%ebx
	movl	%edx, %eax
	movl	%eax, 40(%esp,%ecx,4)
	addl	$1, 316(%esp)
	movl	36(%esp), %eax
	movl	32(%esp), %edx
	movl	%edx, 28(%esp)
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	28(%esp)
	movl	%eax, 36(%esp)
	movl	36(%esp), %eax
	testl	%eax, %eax
	jne	.L2
	movl	$.LC4, %eax
	movl	%eax, (%esp)
	call	printf
	subl	$1, 316(%esp)
	jmp	.L3
.L4:
	movl	316(%esp), %eax
	movl	40(%esp,%eax,4), %eax
	movl	%eax, 312(%esp)
	movl	312(%esp), %eax
	movzbl	296(%esp,%eax), %eax
	movsbl	%al, %eax
	movl	%eax, (%esp)
	call	putchar
	subl	$1, 316(%esp)
.L3:
	cmpl	$0, 316(%esp)
	jns	.L4
	movl	$10, (%esp)
	call	putchar
	movl	$0, %eax
	addl	$332, %esp
	popl	%ebx
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
