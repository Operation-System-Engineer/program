	.file	"c7.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"Please type in two nonnegative integers."
.LC1:
	.string	"%i%i"
	.align 4
.LC2:
	.string	"Their greatest common divisor is %i\n"
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
	leal	20(%esp), %edx
	movl	%edx, 8(%esp)
	leal	24(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	jmp	.L2
.L3:
	movl	24(%esp), %eax
	movl	20(%esp), %ecx
	movl	%eax, %edx
	sarl	$31, %edx
	idivl	%ecx
	movl	%edx, 28(%esp)
	movl	20(%esp), %eax
	movl	%eax, 24(%esp)
	movl	28(%esp), %eax
	movl	%eax, 20(%esp)
.L2:
	movl	20(%esp), %eax
	testl	%eax, %eax
	jne	.L3
	movl	24(%esp), %edx
	movl	$.LC2, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
