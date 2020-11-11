	.file	"c8.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"How many Fibonacci numbers doy ou want (between 1 and 75?) "
.LC1:
	.string	"%i"
.LC2:
	.string	"Bad number, sorry!"
.LC3:
	.string	"%llu "
	.text
.globl main
	.type	main, @function
main:
	leal	4(%esp), %ecx
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	pushl	%ecx
	subl	$72, %esp
	movl	%esp, %eax
	movl	%eax, %edi
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %edx
	leal	-40(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	__isoc99_scanf
	movl	-40(%ebp), %eax
	testl	%eax, %eax
	jle	.L2
	movl	-40(%ebp), %eax
	cmpl	$75, %eax
	jle	.L3
.L2:
	movl	$.LC2, (%esp)
	call	puts
	movl	$1, %eax
	jmp	.L4
.L3:
	movl	-40(%ebp), %ecx
	leal	-1(%ecx), %eax
	movl	%eax, -36(%ebp)
	movl	%ecx, %eax
	movl	$0, %edx
	movl	%eax, %ebx
	andb	$255, %bh
	movl	%edx, %esi
	andl	$15, %esi
	movl	%ebx, %eax
	movl	%esi, %edx
	shldl	$6, %eax, %edx
	sall	$6, %eax
	movl	%eax, %ebx
	andb	$255, %bh
	movl	%ebx, -48(%ebp)
	movl	%edx, %ebx
	andl	$15, %ebx
	movl	%ebx, -44(%ebp)
	movl	-48(%ebp), %eax
	movl	-44(%ebp), %edx
	movl	%ecx, %eax
	movl	$0, %edx
	movl	%eax, %ebx
	andb	$255, %bh
	movl	%ebx, -56(%ebp)
	movl	%edx, %ebx
	andl	$15, %ebx
	movl	%ebx, -52(%ebp)
	movl	-56(%ebp), %eax
	movl	-52(%ebp), %edx
	shldl	$6, %eax, %edx
	sall	$6, %eax
	movl	%eax, %ebx
	andb	$255, %bh
	movl	%ebx, -64(%ebp)
	movl	%edx, %ebx
	andl	$15, %ebx
	movl	%ebx, -60(%ebp)
	movl	-64(%ebp), %eax
	movl	-60(%ebp), %edx
	movl	%ecx, %eax
	sall	$3, %eax
	addl	$15, %eax
	addl	$15, %eax
	shrl	$4, %eax
	sall	$4, %eax
	subl	%eax, %esp
	leal	12(%esp), %eax
	addl	$15, %eax
	shrl	$4, %eax
	sall	$4, %eax
	movl	%eax, -32(%ebp)
	movl	-32(%ebp), %eax
	movl	$0, (%eax)
	movl	$0, 4(%eax)
	movl	-32(%ebp), %eax
	movl	$1, 8(%eax)
	movl	$0, 12(%eax)
	movl	$2, -28(%ebp)
	jmp	.L5
.L6:
	movl	-28(%ebp), %esi
	movl	-28(%ebp), %eax
	leal	-2(%eax), %edx
	movl	-32(%ebp), %eax
	movl	(%eax,%edx,8), %ecx
	movl	4(%eax,%edx,8), %ebx
	movl	-28(%ebp), %eax
	leal	-1(%eax), %edx
	movl	-32(%ebp), %eax
	leal	(%eax,%edx,8), %edx
	movl	(%edx), %eax
	movl	4(%edx), %edx
	addl	%ecx, %eax
	adcl	%ebx, %edx
	movl	-32(%ebp), %ecx
	movl	%eax, (%ecx,%esi,8)
	movl	%edx, 4(%ecx,%esi,8)
	addl	$1, -28(%ebp)
.L5:
	movl	-40(%ebp), %eax
	cmpl	%eax, -28(%ebp)
	jl	.L6
	movl	$0, -28(%ebp)
	jmp	.L7
.L8:
	movl	-28(%ebp), %edx
	movl	-32(%ebp), %eax
	leal	(%eax,%edx,8), %edx
	movl	(%edx), %eax
	movl	4(%edx), %edx
	movl	$.LC3, %ecx
	movl	%eax, 4(%esp)
	movl	%edx, 8(%esp)
	movl	%ecx, (%esp)
	call	printf
	addl	$1, -28(%ebp)
.L7:
	movl	-40(%ebp), %eax
	cmpl	%eax, -28(%ebp)
	jl	.L8
	movl	$10, (%esp)
	call	putchar
	movl	$0, %eax
.L4:
	movl	%edi, %esp
	leal	-16(%ebp), %esp
	addl	$0, %esp
	popl	%ecx
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-23)"
	.section	.note.GNU-stack,"",@progbits
