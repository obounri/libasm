		global	ft_strlen

		section	.text
ft_strlen:
		xor rsi, rsi
		
loop:
		cmp 	[rdi], byte 0
		je	end
		inc	rdi
		inc	rsi
		jmp	loop

end:
		mov	rax, rsi
		ret

