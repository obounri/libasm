		global	_ft_strlen

		section	.text
_ft_strlen:
		xor rsi, rsi
		cmp rdi, 0
		je fail
		
loop:
		cmp byte [rdi], 0
		je	end
		inc	rdi
		inc	rsi
		jmp	loop

fail:
	xor rax, rax
	ret

end:
		mov	rax, rsi
		ret

