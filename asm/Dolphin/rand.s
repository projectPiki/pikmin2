.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global srand
srand:
/* 800C9598 000C64D8  90 6D 82 28 */	stw r3, next@sda21(r13)
/* 800C959C 000C64DC  4E 80 00 20 */	blr 

.global rand
rand:
/* 800C95A0 000C64E0  3C 60 41 C6 */	lis r3, 0x41C64E6D@ha
/* 800C95A4 000C64E4  80 8D 82 28 */	lwz r4, next@sda21(r13)
/* 800C95A8 000C64E8  38 03 4E 6D */	addi r0, r3, 0x41C64E6D@l
/* 800C95AC 000C64EC  7C 64 01 D6 */	mullw r3, r4, r0
/* 800C95B0 000C64F0  38 03 30 39 */	addi r0, r3, 0x3039
/* 800C95B4 000C64F4  90 0D 82 28 */	stw r0, next@sda21(r13)
/* 800C95B8 000C64F8  54 03 84 7E */	rlwinm r3, r0, 0x10, 0x11, 0x1f
/* 800C95BC 000C64FC  4E 80 00 20 */	blr 
