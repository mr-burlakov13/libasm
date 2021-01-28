section     .text
global      _ft_strcmp

_ft_strcmp:
    mov rcx, -1

.loop:
    inc rcx
    mov byte al, byte [rdi + rcx]
    mov byte dl, byte [rsi + rcx]
    cmp byte al, 0
        jz .re
    cmp byte bl, 0
        jz .re
    cmp al, dl
        je .loop
    jmp short .re

.re:
    movzx    rax, al
    movzx    rdx, dl
    sub      rax, rdx
    ret
