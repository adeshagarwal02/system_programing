	.file	"syscll.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movabsq	$8079578014015519091, %rax
	movabsq	$7956010482025328498, %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movw	$2663, -16(%rbp)
	movb	$0, -14(%rbp)
	leaq	-32(%rbp), %rax
	movl	$19, %ecx
	movq	%rax, %rdx
	movl	$1, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	syscall
	movw	%ax, -2(%rbp)
	movswl	-2(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 9.3.1 20200317 (Red Hat 9.3.1-1)"
	.section	.note.GNU-stack,"",@progbits
