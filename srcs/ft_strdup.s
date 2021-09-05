    global _ft_strdup
    extern _ft_strlen
    extern _ft_strcpy
    extern _malloc
    
    section .text
_ft_strdup:
    cmp rdi, 0
    je fail
    push rdi
    call _ft_strlen
    mov rdi, rax
    inc rdi
    call _malloc
    cmp rax, 0
    je fail
    pop rsi
    mov rdi, rax
    call _ft_strcpy
    ret

fail:
    xor rax, rax
    ret
