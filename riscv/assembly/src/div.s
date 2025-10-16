.macro DEBUG_PRINT reg
csrw 0x800, \reg
.endm
	
.text
.global div              # Export the symbol 'div' so we can call it from other files
.type div, @function
div:
    addi sp, sp, -32     # Allocate stack space

    # store any callee-saved register you might overwrite
    sw   ra, 28(sp)      # Function calls would overwrite
    sw   s0, 24(sp)      # If t0-t6 is not enough, can use s0-s11 if I save and restore them
    # ...

    # do your work
    # example of printing inputs a0 and a1


    li t0,  0 # Quotient
    li t1,  0 # Remainder

    li t2,  32 # i

    beqz a1, end_loop

loop:
    addi t2,  t2,  -1
    blt t2, zero, end_loop

    # left shift R
    slli t1,  t1,  1

    # R[0] = N[i]
    srl  t3,  a0,  t2
    andi t3,  t3,  1
    or   t1,  t1,  t3
    
    # if R>=D then R = R-D, Q[i] = 1
    blt  t1,  a1,  loop
    sub  t1,  t1,  a1

    li   t3,   1
    sll  t3,  t3,  t2
    or   t0,  t0,  t3

    j loop
end_loop:
    mv a0,  t0
    mv a1,  t1

    # load every register you stored above
    lw   ra, 28(sp)
    lw   s0, 24(sp)
    # ...
    addi sp, sp, 32      # Free up stack space
    ret

