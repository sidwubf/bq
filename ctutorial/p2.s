	.file	"p2.c"
	.section	.rodata
.LC0:
	.string	"i:%d x:%d y:%d\n"
.LC1:
	.string	"a:%d b:%d c:%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$48, %esp
	movl	$4, 24(%esp)
	leal	24(%esp), %eax
	movl	%eax, 32(%esp)
	movl	32(%esp), %eax
	movl	%eax, 36(%esp)
	movl	36(%esp), %eax
	movl	(%eax), %ebx
	.cfi_offset 3, -12
	movl	32(%esp), %eax
	movl	(%eax), %ecx
	movl	24(%esp), %edx
	movl	$.LC0, %eax
	movl	%ebx, 12(%esp)
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$4, 28(%esp)
	leal	28(%esp), %eax
	movl	%eax, 40(%esp)
	movl	44(%esp), %eax
	movl	%eax, 40(%esp)
	movl	44(%esp), %eax
	movl	(%eax), %ebx
	movl	40(%esp), %eax
	movl	(%eax), %ecx
	movl	28(%esp), %edx
	movl	$.LC1, %eax
	movl	%ebx, 12(%esp)
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	.cfi_restore 3
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
