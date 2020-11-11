	.file	"c5.c"
	.section	.rodata
.LC0:
	.string	"Enter the year to be tested: "
.LC1:
	.string	"%i"
.LC2:
	.string	"It's a leap year."
.LC3:
	.string	"Nope,it's not a leap year."
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	pushl	%ebx
	subl	$44, %esp
	movl	$.LC0, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$.LC1, %eax
	leal	16(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	16(%esp), %eax
	movl	%eax, %edx
	sarl	$31, %edx
	shrl	$30, %edx
	addl	%edx, %eax
	andl	$3, %eax
	subl	%edx, %eax
	movl	%eax, 20(%esp)
	movl	16(%esp), %ecx
	movl	$1374389535, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$5, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 24(%esp)
	movl	24(%esp), %eax
	imull	$100, %eax, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, 24(%esp)
	movl	16(%esp), %ecx
	movl	$1374389535, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$7, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	movl	%edx, %ebx
	subl	%eax, %ebx
	movl	%ebx, %eax
	movl	%eax, 28(%esp)
	movl	28(%esp), %eax
	imull	$400, %eax, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, 28(%esp)
	cmpl	$0, 20(%esp)
	jne	.L2
	cmpl	$0, 24(%esp)
	jne	.L3
.L2:
	cmpl	$0, 28(%esp)
	jne	.L4
.L3:
	movl	$.LC2, (%esp)
	call	puts
	jmp	.L5
.L4:
	movl	$.LC3, (%esp)
	call	puts
.L5:
	movl	$0, %eax
	addl	$44, %esp
	popl	%ebx
	movl	%ebp, %esp
	popl	%ebp
	ret
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-18)"
	.section	.note.GNU-stack,"",@progbits
