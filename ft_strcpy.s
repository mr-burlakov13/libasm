
section     .text
    global      _ft_strcpy

_ft_strcpy:
    mov rcx, 0
    mov rax, rdi
.loop:
    mov byte r9b, byte [rsi + rcx]
    mov byte [rdi + rcx], r9b
    cmp byte [rsi + rcx], 0
    jz .re
    inc rcx
    jmp  short .loop
.re:
    ret
