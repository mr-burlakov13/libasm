
section     .text
    global      _ft_strlen
_ft_strlen:
    mov rax, 0
.loop:
    cmp byte [rdi + rax], 0
    jz .re
    inc rax
    jmp  short .loop
.re:
    ret
