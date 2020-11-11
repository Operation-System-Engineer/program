	.file	"c1.c"
	.section	.rodata
.LC0:
	.string	"Type in your number: "
.LC1:
	.string	"%i"
.LC2:
	.string	"THE adsolute value is %i\n "
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
	leal	28(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	28(%esp), %eax
	testl	%eax, %eax
	jns	.L2
	movl	28(%esp), %eax
	negl	%eax
	movl	%eax, 28(%esp)
.L2:
	movl	28(%esp), %edx
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
