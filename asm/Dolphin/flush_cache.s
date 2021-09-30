.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global TRK_flush_cache
TRK_flush_cache:
/* 800BDDB8 000BACF8  3C A0 FF FF */	lis r5, 0xFFFFFFF1@h
/* 800BDDBC 000BACFC  60 A5 FF F1 */	ori r5, r5, 0xFFFFFFF1@l
/* 800BDDC0 000BAD00  7C A5 18 38 */	and r5, r5, r3
/* 800BDDC4 000BAD04  7C 65 18 50 */	subf r3, r5, r3
/* 800BDDC8 000BAD08  7C 84 1A 14 */	add r4, r4, r3
lbl_800BDDCC:
/* 800BDDCC 000BAD0C  7C 00 28 6C */	dcbst 0, r5
/* 800BDDD0 000BAD10  7C 00 28 AC */	dcbf 0, r5
/* 800BDDD4 000BAD14  7C 00 04 AC */	sync 0
/* 800BDDD8 000BAD18  7C 00 2F AC */	icbi 0, r5
/* 800BDDDC 000BAD1C  30 A5 00 08 */	addic r5, r5, 8
/* 800BDDE0 000BAD20  34 84 FF F8 */	addic. r4, r4, -8
/* 800BDDE4 000BAD24  40 80 FF E8 */	bge lbl_800BDDCC
/* 800BDDE8 000BAD28  4C 00 01 2C */	isync 
/* 800BDDEC 000BAD2C  4E 80 00 20 */	blr 
