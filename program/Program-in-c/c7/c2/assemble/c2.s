	.file	"c2.c"
	.section	.rodata
.LC0:
	.string	"Enter your responses"
.LC1:
	.string	"%i"
.LC2:
	.string	"Bad response: %i\n"
.LC3:
	.string	"\n\nRating Number of Responses"
.LC4:
	.string	"--------------------------"
.LC5:
	.string	"%4i%14i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$80, %esp
	movl	$1, 76(%esp)
	jmp	.L2
.L3:
	movl	76(%esp), %eax
	movl	$0, 32(%esp,%eax,4)
	addl	$1, 76(%esp)
.L2:
	cmpl	$10, 76(%esp)
	jle	.L3
	movl	$.LC0, (%esp)
	call	puts
	movl	$1, 76(%esp)
	jmp	.L4
.L8:
	movl	$.LC1, %eax
	leal	28(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	28(%esp), %eax
	testl	%eax, %eax
	jle	.L5
	movl	28(%esp), %eax
	cmpl	$10, %eax
	jle	.L6
.L5:
	movl	28(%esp), %edx
	movl	$.LC2, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	jmp	.L7
.L6:
	movl	28(%esp), %eax
	movl	32(%esp,%eax,4), %edx
	addl	$1, %edx
	movl	%edx, 32(%esp,%eax,4)
.L7:
	addl	$1, 76(%esp)
.L4:
	cmpl	$20, 76(%esp)
	jle	.L8
	movl	$.LC3, (%esp)
	call	puts
	movl	$.LC4, (%esp)
	call	puts
	movl	$1, 76(%esp)
	jmp	.L9
.L10:
	movl	76(%esp), %eax
	movl	32(%esp,%eax,4), %edx
	movl	$.LC5, %eax
	movl	%edx, 8(%esp)
	movl	76(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	addl	$1, 76(%esp)
.L9:
	cmpl	$10, 76(%esp)
	jle	.L10
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
