	.file	"c6.c"
	.section	.rodata
.LC0:
	.string	"Please type in a number:"
.LC1:
	.string	"%i"
.LC2:
	.string	"Sign = %i\n"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	24(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	24(%esp), %eax
	testl	%eax, %eax
	jns	.L2
	movl	$-1, 28(%esp)
	jmp	.L3
.L2:
	movl	24(%esp), %eax
	testl	%eax, %eax
	jne	.L4
	movl	$0, 28(%esp)
	jmp	.L3
.L4:
	movl	$1, 28(%esp)
.L3:
	movl	$.LC2, %eax
	movl	28(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
