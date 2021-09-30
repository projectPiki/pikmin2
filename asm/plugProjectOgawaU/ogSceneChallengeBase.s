.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q32og9newScreen13ChallengeBaseFv
__ct__Q32og9newScreen13ChallengeBaseFv:
/* 8032CD30 00329C70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8032CD34 00329C74  7C 08 02 A6 */	mflr r0
/* 8032CD38 00329C78  90 01 00 14 */	stw r0, 0x14(r1)
/* 8032CD3C 00329C7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8032CD40 00329C80  7C 7F 1B 78 */	mr r31, r3
/* 8032CD44 00329C84  48 12 4A 4D */	bl __ct__Q26Screen9SceneBaseFv
/* 8032CD48 00329C88  3C 60 80 4E */	lis r3, __vt__Q32og9newScreen13ChallengeBase@ha
/* 8032CD4C 00329C8C  38 00 00 00 */	li r0, 0
/* 8032CD50 00329C90  38 83 A0 E0 */	addi r4, r3, __vt__Q32og9newScreen13ChallengeBase@l
/* 8032CD54 00329C94  7F E3 FB 78 */	mr r3, r31
/* 8032CD58 00329C98  90 9F 00 00 */	stw r4, 0(r31)
/* 8032CD5C 00329C9C  98 1F 02 20 */	stb r0, 0x220(r31)
/* 8032CD60 00329CA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032CD64 00329CA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8032CD68 00329CA8  7C 08 03 A6 */	mtlr r0
/* 8032CD6C 00329CAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8032CD70 00329CB0  4E 80 00 20 */	blr 

.global updateCountDown__Q32og9newScreen13ChallengeBaseFfPQ32og6Screen21DispMemberDayEndCount
updateCountDown__Q32og9newScreen13ChallengeBaseFfPQ32og6Screen21DispMemberDayEndCount:
/* 8032CD74 00329CB4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8032CD78 00329CB8  7C 08 02 A6 */	mflr r0
/* 8032CD7C 00329CBC  3C A0 80 51 */	lis r5, msBaseVal__Q32og9newScreen16ObjChallengeBase@ha
/* 8032CD80 00329CC0  C8 82 FB F8 */	lfd f4, lbl_8051DF58@sda21(r2)
/* 8032CD84 00329CC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8032CD88 00329CC8  3C 00 43 30 */	lis r0, 0x4330
/* 8032CD8C 00329CCC  38 A5 3F E0 */	addi r5, r5, msBaseVal__Q32og9newScreen16ObjChallengeBase@l
/* 8032CD90 00329CD0  C0 02 FB F0 */	lfs f0, lbl_8051DF50@sda21(r2)
/* 8032CD94 00329CD4  80 A5 00 10 */	lwz r5, 0x10(r5)
/* 8032CD98 00329CD8  90 01 00 08 */	stw r0, 8(r1)
/* 8032CD9C 00329CDC  38 A5 00 01 */	addi r5, r5, 1
/* 8032CDA0 00329CE0  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8032CDA4 00329CE4  C8 41 00 08 */	lfd f2, 8(r1)
/* 8032CDA8 00329CE8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8032CDAC 00329CEC  EC 62 20 28 */	fsubs f3, f2, f4
/* 8032CDB0 00329CF0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8032CDB4 00329CF4  C8 41 00 10 */	lfd f2, 0x10(r1)
/* 8032CDB8 00329CF8  EC 63 08 28 */	fsubs f3, f3, f1
/* 8032CDBC 00329CFC  EC 22 20 28 */	fsubs f1, f2, f4
/* 8032CDC0 00329D00  EC 23 08 24 */	fdivs f1, f3, f1
/* 8032CDC4 00329D04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8032CDC8 00329D08  4C 41 13 82 */	cror 2, 1, 2
/* 8032CDCC 00329D0C  40 82 00 34 */	bne lbl_8032CE00
/* 8032CDD0 00329D10  D0 24 00 08 */	stfs f1, 8(r4)
/* 8032CDD4 00329D14  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 8032CDD8 00329D18  88 03 02 20 */	lbz r0, 0x220(r3)
/* 8032CDDC 00329D1C  28 00 00 00 */	cmplwi r0, 0
/* 8032CDE0 00329D20  40 82 00 28 */	bne lbl_8032CE08
/* 8032CDE4 00329D24  38 00 00 01 */	li r0, 1
/* 8032CDE8 00329D28  98 03 02 20 */	stb r0, 0x220(r3)
/* 8032CDEC 00329D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 8032CDF0 00329D30  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 8032CDF4 00329D34  7D 89 03 A6 */	mtctr r12
/* 8032CDF8 00329D38  4E 80 04 21 */	bctrl 
/* 8032CDFC 00329D3C  48 00 00 0C */	b lbl_8032CE08
lbl_8032CE00:
/* 8032CE00 00329D40  38 00 00 00 */	li r0, 0
/* 8032CE04 00329D44  98 03 02 20 */	stb r0, 0x220(r3)
lbl_8032CE08:
/* 8032CE08 00329D48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8032CE0C 00329D4C  7C 08 03 A6 */	mtlr r0
/* 8032CE10 00329D50  38 21 00 20 */	addi r1, r1, 0x20
/* 8032CE14 00329D54  4E 80 00 20 */	blr 
