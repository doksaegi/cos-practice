.global sum

sum:
    movl %edi, %eax    # eax = a
    addl %esi, %eax    # eax += b
    ret