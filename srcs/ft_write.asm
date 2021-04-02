	global	ft_write

	section	.text
ft_write:
	mov	rax, 1
	syscall
	mov	rax, rdx
	ret
