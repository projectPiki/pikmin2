.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global TRKReleaseMutex
TRKReleaseMutex:
/* 800BDD08 000BAC48  38 60 00 00 */	li r3, 0
/* 800BDD0C 000BAC4C  4E 80 00 20 */	blr 

.global TRKAcquireMutex
TRKAcquireMutex:
/* 800BDD10 000BAC50  38 60 00 00 */	li r3, 0
/* 800BDD14 000BAC54  4E 80 00 20 */	blr 

.global TRKInitializeMutex
TRKInitializeMutex:
/* 800BDD18 000BAC58  38 60 00 00 */	li r3, 0
/* 800BDD1C 000BAC5C  4E 80 00 20 */	blr 
