    global _ft_strcpy

    section .text
_ft_strcpy:
    xor rcx, rcx
    xor rdx, rdx
    cmp rdi, 0
    je  end
    cmp rsi, 0
    je  end
    
loop:
    mov dl, BYTE [rsi + rcx]
    mov BYTE [rdi + rcx], dl
    cmp	dl, 0
    je	end
    inc rcx
    jmp loop

end:
    mov rax, rdi
    ret