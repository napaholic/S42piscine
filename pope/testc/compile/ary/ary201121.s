	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$784, %rsp              ## imm = 0x310
	xorl	%eax, %eax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -8(%rbp)
	movl	$0, -740(%rbp)
	movl	%edi, -744(%rbp)
	movq	%rsi, -752(%rbp)
	leaq	-368(%rbp), %rcx
	movq	%rcx, %rdi
	movl	%eax, %esi
	movl	$360, %ecx              ## imm = 0x168
	movq	%rcx, %rdx
	movl	%eax, -764(%rbp)        ## 4-byte Spill
	movq	%rcx, -776(%rbp)        ## 8-byte Spill
	callq	_memset
	leaq	-736(%rbp), %rcx
	movq	%rcx, %rdi
	movl	-764(%rbp), %esi        ## 4-byte Reload
	movq	-776(%rbp), %rdx        ## 8-byte Reload
	callq	_memset
	movl	$0, -756(%rbp)
	movl	$0, -760(%rbp)
	movl	$1, %edi
	leaq	L_.str(%rip), %rsi
	movl	$10, %edx
	callq	_write
	movl	$0, -756(%rbp)
LBB0_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_3 Depth 2
	cmpl	$10, -756(%rbp)
	jge	LBB0_8
## %bb.2:                               ##   in Loop: Header=BB0_1 Depth=1
	movl	$0, -760(%rbp)
LBB0_3:                                 ##   Parent Loop BB0_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmpl	$9, -760(%rbp)
	jge	LBB0_6
## %bb.4:                               ##   in Loop: Header=BB0_3 Depth=2
	movl	-756(%rbp), %eax
	movslq	-756(%rbp), %rcx
	imulq	$36, %rcx, %rcx
	leaq	-368(%rbp), %rdx
	addq	%rcx, %rdx
	movslq	-760(%rbp), %rcx
	movl	%eax, (%rdx,%rcx,4)
## %bb.5:                               ##   in Loop: Header=BB0_3 Depth=2
	movl	-760(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -760(%rbp)
	jmp	LBB0_3
LBB0_6:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_7
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	movl	-756(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -756(%rbp)
	jmp	LBB0_1
LBB0_8:
	movl	$1, %edi
	leaq	L_.str(%rip), %rsi
	movl	$10, %edx
	callq	_write
	movl	$0, -756(%rbp)
LBB0_9:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_11 Depth 2
	cmpl	$10, -756(%rbp)
	jge	LBB0_16
## %bb.10:                              ##   in Loop: Header=BB0_9 Depth=1
	movl	$0, -760(%rbp)
LBB0_11:                                ##   Parent Loop BB0_9 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmpl	$9, -760(%rbp)
	jge	LBB0_14
## %bb.12:                              ##   in Loop: Header=BB0_11 Depth=2
	movl	-756(%rbp), %eax
	imull	$9, -756(%rbp), %ecx
	addl	-760(%rbp), %ecx
	movslq	%ecx, %rdx
	movl	%eax, -736(%rbp,%rdx,4)
## %bb.13:                              ##   in Loop: Header=BB0_11 Depth=2
	movl	-760(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -760(%rbp)
	jmp	LBB0_11
LBB0_14:                                ##   in Loop: Header=BB0_9 Depth=1
	jmp	LBB0_15
LBB0_15:                                ##   in Loop: Header=BB0_9 Depth=1
	movl	-756(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -756(%rbp)
	jmp	LBB0_9
LBB0_16:
	movl	-740(%rbp), %eax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	movl	%eax, -780(%rbp)        ## 4-byte Spill
	jne	LBB0_18
## %bb.17:
	movl	-780(%rbp), %eax        ## 4-byte Reload
	addq	$784, %rsp              ## imm = 0x310
	popq	%rbp
	retq
LBB0_18:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"          "

.subsections_via_symbols
