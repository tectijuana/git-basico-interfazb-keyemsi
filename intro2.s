.data
var1:   .word   3
var2:   .word   4
var3:   .word   0x1234

.text
.global main
main:   ldr     r1, puntero_var1
        ldr     r1,[r1]
        ldr     r2,puntero_var2
        ldr     r2,[r2]
        ldr     r3,puntero_var3
        add     r0,r1,r2
        str     r0,[r3]
        bx      lr

puntero_var1:   .word   var1
puntero_var2:   .word   var2
puntero_var3:   .word   var3
.data

var1:   .byte   0b00110010
        .align
var2:   .byte   0b11000000
        .align
.text
.global main
main:   ldr     r1, =var1
        ldrsb   r1, [r1]
        ldr     r2, =var2
        ldrsb   r2, [r2]
        add     r0, r1, r2
        bx      lr
