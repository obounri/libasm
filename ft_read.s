	global	ft_read
	extern	ft_strlen

	section	.text
ft_read:
	mov	rax, 0
	syscall
	mov	[rsi + rax], byte 0
	ret
