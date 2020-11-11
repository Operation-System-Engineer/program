	.file	"c2.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"How many grades will you be entering?"
.LC1:
	.string	"%i"
.LC2:
	.string	"Enter grade #%i:"
.LC3:
	.string	"\ngrade average = %.2f\n"
.LC4:
	.string	"Number of failures = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	movl	$0, 52(%esp)
	movl	$0, 56(%esp)
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	44(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	$1, 48(%esp)
	jmp	.L2
.L4:
	movl	$.LC2, %eax
	movl	48(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	40(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	40(%esp), %eax
	addl	%eax, 52(%esp)
	movl	40(%esp), %eax
	cmpl	$64, %eax
	jg	.L3
	addl	$1, 56(%esp)
.L3:
	addl	$1, 48(%esp)
.L2:
	movl	44(%esp), %eax
	cmpl	%eax, 48(%esp)
	jle	.L4
	fildl	52(%esp)
	movl	44(%esp), %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fdivrp	%st, %st(1)
	fstps	60(%esp)
	flds	60(%esp)
	movl	$.LC3, %eax
	fstpl	4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$.LC4, %eax
	movl	56(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
