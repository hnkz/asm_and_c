.global _add_one
_add_one:
	add $0x01, %rdi
	mov %rdi, %rax
	ret
