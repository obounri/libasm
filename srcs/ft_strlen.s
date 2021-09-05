		global	_ft_strlen

		section	.text
_ft_strlen:
		xor rsi, rsi
		
loop:
		cmp byte [rdi], 0
		je	end
		inc	rdi
		inc	rsi
		jmp	loop

end:
		mov	rax, rsi
		ret

