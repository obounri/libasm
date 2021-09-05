    global _ft_strcmp

    section .text
_ft_strcmp:
    xor rax, rax
    xor r8, r8
    cmp rdi, 0
    je end
    cmp rsi, 0
    je end
    
loop:
    mov al, byte [rdi]
    mov r8b, byte [rsi]
    cmp al, r8b
    jne end
    cmp al, 0
    je end
    cmp r8b, 0
    je end
    inc rdi
    inc rsi
    jmp loop

end:
    sub rax, r8
    ret