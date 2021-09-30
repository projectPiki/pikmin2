.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __stdio_atexit
__stdio_atexit:
/* 800C7428 000C4368  3C 60 80 0C */	lis r3, __close_all@ha
/* 800C742C 000C436C  38 03 2A 74 */	addi r0, r3, __close_all@l
/* 800C7430 000C4370  90 0D 8C B0 */	stw r0, __stdio_exit@sda21(r13)
/* 800C7434 000C4374  4E 80 00 20 */	blr 
