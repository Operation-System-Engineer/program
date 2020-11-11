	.file	"c7.c"
	.section	.rodata
.LC0:
	.string	"Enter a single character:"
.LC1:
	.string	"%c"
.LC2:
	.string	"It's an alphabetic charater."
.LC3:
	.string	"It's a digit."
.LC4:
	.string	"It's a special character."
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
	leal	31(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movzbl	31(%esp), %eax
	cmpb	$96, %al
	jle	.L2
	movzbl	31(%esp), %eax
	cmpb	$122, %al
	jle	.L3
.L2:
	movzbl	31(%esp), %eax
	cmpb	$64, %al
	jle	.L4
	movzbl	31(%esp), %eax
	cmpb	$90, %al
	jg	.L4
.L3:
	movl	$.LC2, (%esp)
	call	puts
	jmp	.L5
.L4:
	movzbl	31(%esp), %eax
	cmpb	$47, %al
	jle	.L6
	movzbl	31(%esp), %eax
	cmpb	$57, %al
	jg	.L6
	movl	$.LC3, (%esp)
	call	puts
	jmp	.L5
.L6:
	movl	$.LC4, (%esp)
	call	puts
.L5:
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
