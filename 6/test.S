.global test

test:
    # rax = c + b - a
    leaq (%rdx, %rsi), %rax
    subq %rdi, %rax

    cmpq $5, %rdx
    jle .label2

    cmpq $2, %rsi
    jle .label3

    movq %rdi, %rax   # rax = a
    cqto              # sign extend
    idivq %rdx        # rax = a / c

.label3:
    movq %rdi, %rax   # rax = a
    cqto
    idivq %rsi        # rax = a / b

.label2:
    cmpq $3, %rdx
    jge .label4

    movq %rdx, %rax   # rax = c
    cqto
    idivq %rsi        # rax = c / b

.label4:
    ret