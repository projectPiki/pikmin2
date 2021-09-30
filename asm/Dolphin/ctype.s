.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global tolower
tolower:
/* 800C6264 000C31A4  2C 03 FF FF */	cmpwi r3, -1
/* 800C6268 000C31A8  40 82 00 0C */	bne lbl_800C6274
/* 800C626C 000C31AC  38 60 FF FF */	li r3, -1
/* 800C6270 000C31B0  4E 80 00 20 */	blr 
lbl_800C6274:
/* 800C6274 000C31B4  3C 80 80 4A */	lis r4, __lower_map@ha
/* 800C6278 000C31B8  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 800C627C 000C31BC  38 64 6C F0 */	addi r3, r4, __lower_map@l
/* 800C6280 000C31C0  7C 63 00 AE */	lbzx r3, r3, r0
/* 800C6284 000C31C4  4E 80 00 20 */	blr 
