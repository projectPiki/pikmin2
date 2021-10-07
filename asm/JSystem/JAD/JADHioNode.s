.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__10JADHioNodeFPCc
__ct__10JADHioNodeFPCc:
/* 800BA1EC 000B712C  3C 80 80 4A */	lis r4, __vt__10JADHioNode@ha
/* 800BA1F0 000B7130  38 04 66 D0 */	addi r0, r4, __vt__10JADHioNode@l
/* 800BA1F4 000B7134  90 03 00 00 */	stw r0, 0(r3)
/* 800BA1F8 000B7138  4E 80 00 20 */	blr 

.global __dt__10JADHioNodeFv
__dt__10JADHioNodeFv:
/* 800BA1FC 000B713C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800BA200 000B7140  7C 08 02 A6 */	mflr r0
/* 800BA204 000B7144  90 01 00 14 */	stw r0, 0x14(r1)
/* 800BA208 000B7148  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800BA20C 000B714C  7C 7F 1B 79 */	or. r31, r3, r3
/* 800BA210 000B7150  41 82 00 1C */	beq lbl_800BA22C
/* 800BA214 000B7154  3C A0 80 4A */	lis r5, __vt__10JADHioNode@ha
/* 800BA218 000B7158  7C 80 07 35 */	extsh. r0, r4
/* 800BA21C 000B715C  38 05 66 D0 */	addi r0, r5, __vt__10JADHioNode@l
/* 800BA220 000B7160  90 1F 00 00 */	stw r0, 0(r31)
/* 800BA224 000B7164  40 81 00 08 */	ble lbl_800BA22C
/* 800BA228 000B7168  4B F6 9E 8D */	bl __dl__FPv
lbl_800BA22C:
/* 800BA22C 000B716C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800BA230 000B7170  7F E3 FB 78 */	mr r3, r31
/* 800BA234 000B7174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800BA238 000B7178  7C 08 03 A6 */	mtlr r0
/* 800BA23C 000B717C  38 21 00 10 */	addi r1, r1, 0x10
/* 800BA240 000B7180  4E 80 00 20 */	blr 
