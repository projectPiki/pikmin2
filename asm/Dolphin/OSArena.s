.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global OSGetArenaHi
OSGetArenaHi:
/* 800EC424 000E9364  80 6D 8F 68 */	lwz r3, __OSArenaHi@sda21(r13)
/* 800EC428 000E9368  4E 80 00 20 */	blr 

.global OSGetArenaLo
OSGetArenaLo:
/* 800EC42C 000E936C  80 6D 83 60 */	lwz r3, __OSArenaLo@sda21(r13)
/* 800EC430 000E9370  4E 80 00 20 */	blr 

.global OSSetArenaHi
OSSetArenaHi:
/* 800EC434 000E9374  90 6D 8F 68 */	stw r3, __OSArenaHi@sda21(r13)
/* 800EC438 000E9378  4E 80 00 20 */	blr 

.global OSSetArenaLo
OSSetArenaLo:
/* 800EC43C 000E937C  90 6D 83 60 */	stw r3, __OSArenaLo@sda21(r13)
/* 800EC440 000E9380  4E 80 00 20 */	blr 
