.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_804977F0
lbl_804977F0:
	.4byte 0x54536372
	.4byte 0x65656E54
	.4byte 0x4D426163
	.4byte 0x6B3A3A73
	.4byte 0x65744172
	.4byte 0x63686976
	.4byte 0x65000000
.global lbl_8049780C
lbl_8049780C:
	.4byte 0x746D5F62
	.4byte 0x61636B2E
	.4byte 0x626C6F00
.global lbl_80497818
lbl_80497818:
	.4byte 0x65626953
	.4byte 0x63726565
	.4byte 0x6E544D42
	.4byte 0x61636B2E
	.4byte 0x63707000
.global lbl_8049782C
lbl_8049782C:
	.asciz "P2Assert"
	.skip 3
.global lbl_80497838
lbl_80497838:
	.4byte 0x54536372
	.4byte 0x65656E4E
	.4byte 0x696E7465
	.4byte 0x6E646F4C
	.4byte 0x6F676F3A
	.4byte 0x3A736574
	.4byte 0x41726368
	.4byte 0x69766500
.global lbl_80497858
lbl_80497858:
	.4byte 0x746D5F32
	.4byte 0x3030336E
	.4byte 0x696E7465
	.4byte 0x6E646F2E
	.4byte 0x626C6F00
.global lbl_8049786C
lbl_8049786C:
	.4byte 0x544E696E
	.4byte 0x74656E64
	.4byte 0x6F4C6F67
	.4byte 0x6F000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q33ebi6Screen13TNintendoLogo
__vt__Q33ebi6Screen13TNintendoLogo:
	.4byte 0
	.4byte 0
	.4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
	.4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
	.4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
	.4byte killScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte update__Q33ebi6Screen11TScreenBaseFv
	.4byte draw__Q33ebi6Screen11TScreenBaseFv
	.4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte doSetArchive__Q33ebi6Screen13TNintendoLogoFP10JKRArchive
	.4byte doOpenScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
	.4byte doCloseScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
	.4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
	.4byte doUpdateStateOpen__Q33ebi6Screen11TScreenBaseFv
	.4byte doUpdateStateWait__Q33ebi6Screen13TNintendoLogoFv
	.4byte doUpdateStateClose__Q33ebi6Screen11TScreenBaseFv
	.4byte doDraw__Q33ebi6Screen13TNintendoLogoFv
	.4byte getName__Q33ebi6Screen13TNintendoLogoFv
.global __vt__Q33ebi6Screen7TTMBack
__vt__Q33ebi6Screen7TTMBack:
	.4byte 0
	.4byte 0
	.4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
	.4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
	.4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
	.4byte killScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte update__Q33ebi6Screen11TScreenBaseFv
	.4byte draw__Q33ebi6Screen11TScreenBaseFv
	.4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte doSetArchive__Q33ebi6Screen7TTMBackFP10JKRArchive
	.4byte doOpenScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen7ArgOpen
	.4byte doCloseScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen8ArgClose
	.4byte doKillScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte doInitWaitState__Q33ebi6Screen11TScreenBaseFv
	.4byte doUpdateStateOpen__Q33ebi6Screen7TTMBackFv
	.4byte doUpdateStateWait__Q33ebi6Screen7TTMBackFv
	.4byte doUpdateStateClose__Q33ebi6Screen7TTMBackFv
	.4byte doDraw__Q33ebi6Screen7TTMBackFv
	.4byte getName__Q33ebi6Screen7TTMBackFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051FDF8
lbl_8051FDF8:
	.float 0.5
.global lbl_8051FDFC
lbl_8051FDFC:
	.4byte 0x00000000
.global lbl_8051FE00
lbl_8051FE00:
	.4byte 0x43000000
.global lbl_8051FE04
lbl_8051FE04:
	.float 1.0
.global lbl_8051FE08
lbl_8051FE08:
	.4byte 0x43300000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global doSetArchive__Q33ebi6Screen7TTMBackFP10JKRArchive
doSetArchive__Q33ebi6Screen7TTMBackFP10JKRArchive:
/* 803E9C60 003E6BA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E9C64 003E6BA4  7C 08 02 A6 */	mflr r0
/* 803E9C68 003E6BA8  3C A0 80 49 */	lis r5, lbl_804977F0@ha
/* 803E9C6C 003E6BAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E9C70 003E6BB0  38 05 77 F0 */	addi r0, r5, lbl_804977F0@l
/* 803E9C74 003E6BB4  38 A0 00 00 */	li r5, 0
/* 803E9C78 003E6BB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E9C7C 003E6BBC  7C 9F 23 78 */	mr r31, r4
/* 803E9C80 003E6BC0  7C 04 03 78 */	mr r4, r0
/* 803E9C84 003E6BC4  93 C1 00 08 */	stw r30, 8(r1)
/* 803E9C88 003E6BC8  7C 7E 1B 78 */	mr r30, r3
/* 803E9C8C 003E6BCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E9C90 003E6BD0  48 03 96 CD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803E9C94 003E6BD4  38 60 01 48 */	li r3, 0x148
/* 803E9C98 003E6BD8  4B C3 A2 0D */	bl __nw__FUl
/* 803E9C9C 003E6BDC  7C 60 1B 79 */	or. r0, r3, r3
/* 803E9CA0 003E6BE0  41 82 00 0C */	beq lbl_803E9CAC
/* 803E9CA4 003E6BE4  48 04 B1 09 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 803E9CA8 003E6BE8  7C 60 1B 78 */	mr r0, r3
lbl_803E9CAC:
/* 803E9CAC 003E6BEC  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803E9CB0 003E6BF0  3C 60 80 49 */	lis r3, lbl_8049780C@ha
/* 803E9CB4 003E6BF4  38 83 78 0C */	addi r4, r3, lbl_8049780C@l
/* 803E9CB8 003E6BF8  7F E6 FB 78 */	mr r6, r31
/* 803E9CBC 003E6BFC  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 803E9CC0 003E6C00  3C A0 01 10 */	lis r5, 0x110
/* 803E9CC4 003E6C04  4B C5 59 61 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803E9CC8 003E6C08  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 803E9CCC 003E6C0C  38 80 00 01 */	li r4, 1
/* 803E9CD0 003E6C10  4B FE 07 15 */	bl E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
/* 803E9CD4 003E6C14  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 803E9CD8 003E6C18  38 80 00 00 */	li r4, 0
/* 803E9CDC 003E6C1C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E9CE0 003E6C20  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803E9CE4 003E6C24  7D 89 03 A6 */	mtctr r12
/* 803E9CE8 003E6C28  4E 80 04 21 */	bctrl 
/* 803E9CEC 003E6C2C  3C 80 80 49 */	lis r4, lbl_804977F0@ha
/* 803E9CF0 003E6C30  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E9CF4 003E6C34  38 84 77 F0 */	addi r4, r4, lbl_804977F0@l
/* 803E9CF8 003E6C38  48 03 96 6D */	bl heapStatusEnd__6SystemFPc
/* 803E9CFC 003E6C3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E9D00 003E6C40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E9D04 003E6C44  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E9D08 003E6C48  7C 08 03 A6 */	mtlr r0
/* 803E9D0C 003E6C4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E9D10 003E6C50  4E 80 00 20 */	blr 

.global doOpenScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen7ArgOpen
doOpenScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen7ArgOpen:
/* 803E9D14 003E6C54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E9D18 003E6C58  7C 08 02 A6 */	mflr r0
/* 803E9D1C 003E6C5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E9D20 003E6C60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E9D24 003E6C64  7C 9F 23 79 */	or. r31, r4, r4
/* 803E9D28 003E6C68  93 C1 00 08 */	stw r30, 8(r1)
/* 803E9D2C 003E6C6C  7C 7E 1B 78 */	mr r30, r3
/* 803E9D30 003E6C70  40 82 00 20 */	bne lbl_803E9D50
/* 803E9D34 003E6C74  3C 60 80 49 */	lis r3, lbl_80497818@ha
/* 803E9D38 003E6C78  3C A0 80 49 */	lis r5, lbl_8049782C@ha
/* 803E9D3C 003E6C7C  38 63 78 18 */	addi r3, r3, lbl_80497818@l
/* 803E9D40 003E6C80  38 80 00 21 */	li r4, 0x21
/* 803E9D44 003E6C84  38 A5 78 2C */	addi r5, r5, lbl_8049782C@l
/* 803E9D48 003E6C88  4C C6 31 82 */	crclr 6
/* 803E9D4C 003E6C8C  4B C4 08 F5 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803E9D50:
/* 803E9D50 003E6C90  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E9D54 003E6C94  C0 3F 00 04 */	lfs f1, 4(r31)
/* 803E9D58 003E6C98  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E9D5C 003E6C9C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E9D60 003E6CA0  4B CD 7D ED */	bl __cvt_fp2unsigned
/* 803E9D64 003E6CA4  90 7E 00 10 */	stw r3, 0x10(r30)
/* 803E9D68 003E6CA8  90 7E 00 14 */	stw r3, 0x14(r30)
/* 803E9D6C 003E6CAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E9D70 003E6CB0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E9D74 003E6CB4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E9D78 003E6CB8  7C 08 03 A6 */	mtlr r0
/* 803E9D7C 003E6CBC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E9D80 003E6CC0  4E 80 00 20 */	blr 

.global doCloseScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen8ArgClose
doCloseScreen__Q33ebi6Screen7TTMBackFPQ33ebi6Screen8ArgClose:
/* 803E9D84 003E6CC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E9D88 003E6CC8  7C 08 02 A6 */	mflr r0
/* 803E9D8C 003E6CCC  C0 22 1A 98 */	lfs f1, lbl_8051FDF8@sda21(r2)
/* 803E9D90 003E6CD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E9D94 003E6CD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E9D98 003E6CD8  7C 7F 1B 78 */	mr r31, r3
/* 803E9D9C 003E6CDC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803E9DA0 003E6CE0  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803E9DA4 003E6CE4  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E9DA8 003E6CE8  4B CD 7D A5 */	bl __cvt_fp2unsigned
/* 803E9DAC 003E6CEC  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803E9DB0 003E6CF0  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803E9DB4 003E6CF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E9DB8 003E6CF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E9DBC 003E6CFC  7C 08 03 A6 */	mtlr r0
/* 803E9DC0 003E6D00  38 21 00 10 */	addi r1, r1, 0x10
/* 803E9DC4 003E6D04  4E 80 00 20 */	blr 

.global doUpdateStateOpen__Q33ebi6Screen7TTMBackFv
doUpdateStateOpen__Q33ebi6Screen7TTMBackFv:
/* 803E9DC8 003E6D08  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803E9DCC 003E6D0C  7C 08 02 A6 */	mflr r0
/* 803E9DD0 003E6D10  90 01 00 34 */	stw r0, 0x34(r1)
/* 803E9DD4 003E6D14  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803E9DD8 003E6D18  7C 7F 1B 78 */	mr r31, r3
/* 803E9DDC 003E6D1C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803E9DE0 003E6D20  28 03 00 00 */	cmplwi r3, 0
/* 803E9DE4 003E6D24  41 82 00 0C */	beq lbl_803E9DF0
/* 803E9DE8 003E6D28  38 03 FF FF */	addi r0, r3, -1
/* 803E9DEC 003E6D2C  90 1F 00 10 */	stw r0, 0x10(r31)
lbl_803E9DF0:
/* 803E9DF0 003E6D30  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 803E9DF4 003E6D34  28 04 00 00 */	cmplwi r4, 0
/* 803E9DF8 003E6D38  41 82 00 38 */	beq lbl_803E9E30
/* 803E9DFC 003E6D3C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 803E9E00 003E6D40  3C 00 43 30 */	lis r0, 0x4330
/* 803E9E04 003E6D44  90 01 00 08 */	stw r0, 8(r1)
/* 803E9E08 003E6D48  C8 42 1A A8 */	lfd f2, lbl_8051FE08@sda21(r2)
/* 803E9E0C 003E6D4C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E9E10 003E6D50  C8 01 00 08 */	lfd f0, 8(r1)
/* 803E9E14 003E6D54  90 81 00 14 */	stw r4, 0x14(r1)
/* 803E9E18 003E6D58  EC 20 10 28 */	fsubs f1, f0, f2
/* 803E9E1C 003E6D5C  90 01 00 10 */	stw r0, 0x10(r1)
/* 803E9E20 003E6D60  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 803E9E24 003E6D64  EC 00 10 28 */	fsubs f0, f0, f2
/* 803E9E28 003E6D68  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E9E2C 003E6D6C  48 00 00 08 */	b lbl_803E9E34
lbl_803E9E30:
/* 803E9E30 003E6D70  C0 22 1A 9C */	lfs f1, lbl_8051FDFC@sda21(r2)
lbl_803E9E34:
/* 803E9E34 003E6D74  C0 02 1A A4 */	lfs f0, lbl_8051FE04@sda21(r2)
/* 803E9E38 003E6D78  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803E9E3C 003E6D7C  EC 00 08 28 */	fsubs f0, f0, f1
/* 803E9E40 003E6D80  C0 22 1A A0 */	lfs f1, lbl_8051FE00@sda21(r2)
/* 803E9E44 003E6D84  81 83 00 00 */	lwz r12, 0(r3)
/* 803E9E48 003E6D88  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E9E4C 003E6D8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803E9E50 003E6D90  FC 00 00 1E */	fctiwz f0, f0
/* 803E9E54 003E6D94  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803E9E58 003E6D98  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 803E9E5C 003E6D9C  7D 89 03 A6 */	mtctr r12
/* 803E9E60 003E6DA0  4E 80 04 21 */	bctrl 
/* 803E9E64 003E6DA4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803E9E68 003E6DA8  81 83 00 00 */	lwz r12, 0(r3)
/* 803E9E6C 003E6DAC  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803E9E70 003E6DB0  7D 89 03 A6 */	mtctr r12
/* 803E9E74 003E6DB4  4E 80 04 21 */	bctrl 
/* 803E9E78 003E6DB8  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 803E9E7C 003E6DBC  28 00 00 00 */	cmplwi r0, 0
/* 803E9E80 003E6DC0  40 82 00 0C */	bne lbl_803E9E8C
/* 803E9E84 003E6DC4  38 60 00 01 */	li r3, 1
/* 803E9E88 003E6DC8  48 00 00 08 */	b lbl_803E9E90
lbl_803E9E8C:
/* 803E9E8C 003E6DCC  38 60 00 00 */	li r3, 0
lbl_803E9E90:
/* 803E9E90 003E6DD0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803E9E94 003E6DD4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803E9E98 003E6DD8  7C 08 03 A6 */	mtlr r0
/* 803E9E9C 003E6DDC  38 21 00 30 */	addi r1, r1, 0x30
/* 803E9EA0 003E6DE0  4E 80 00 20 */	blr 

.global doUpdateStateWait__Q33ebi6Screen7TTMBackFv
doUpdateStateWait__Q33ebi6Screen7TTMBackFv:
/* 803E9EA4 003E6DE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E9EA8 003E6DE8  7C 08 02 A6 */	mflr r0
/* 803E9EAC 003E6DEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E9EB0 003E6DF0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803E9EB4 003E6DF4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E9EB8 003E6DF8  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803E9EBC 003E6DFC  7D 89 03 A6 */	mtctr r12
/* 803E9EC0 003E6E00  4E 80 04 21 */	bctrl 
/* 803E9EC4 003E6E04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E9EC8 003E6E08  38 60 00 00 */	li r3, 0
/* 803E9ECC 003E6E0C  7C 08 03 A6 */	mtlr r0
/* 803E9ED0 003E6E10  38 21 00 10 */	addi r1, r1, 0x10
/* 803E9ED4 003E6E14  4E 80 00 20 */	blr 

.global doUpdateStateClose__Q33ebi6Screen7TTMBackFv
doUpdateStateClose__Q33ebi6Screen7TTMBackFv:
/* 803E9ED8 003E6E18  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803E9EDC 003E6E1C  7C 08 02 A6 */	mflr r0
/* 803E9EE0 003E6E20  90 01 00 34 */	stw r0, 0x34(r1)
/* 803E9EE4 003E6E24  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803E9EE8 003E6E28  7C 7F 1B 78 */	mr r31, r3
/* 803E9EEC 003E6E2C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 803E9EF0 003E6E30  28 03 00 00 */	cmplwi r3, 0
/* 803E9EF4 003E6E34  41 82 00 0C */	beq lbl_803E9F00
/* 803E9EF8 003E6E38  38 03 FF FF */	addi r0, r3, -1
/* 803E9EFC 003E6E3C  90 1F 00 10 */	stw r0, 0x10(r31)
lbl_803E9F00:
/* 803E9F00 003E6E40  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 803E9F04 003E6E44  28 04 00 00 */	cmplwi r4, 0
/* 803E9F08 003E6E48  41 82 00 38 */	beq lbl_803E9F40
/* 803E9F0C 003E6E4C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 803E9F10 003E6E50  3C 00 43 30 */	lis r0, 0x4330
/* 803E9F14 003E6E54  90 01 00 08 */	stw r0, 8(r1)
/* 803E9F18 003E6E58  C8 42 1A A8 */	lfd f2, lbl_8051FE08@sda21(r2)
/* 803E9F1C 003E6E5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E9F20 003E6E60  C8 01 00 08 */	lfd f0, 8(r1)
/* 803E9F24 003E6E64  90 81 00 14 */	stw r4, 0x14(r1)
/* 803E9F28 003E6E68  EC 20 10 28 */	fsubs f1, f0, f2
/* 803E9F2C 003E6E6C  90 01 00 10 */	stw r0, 0x10(r1)
/* 803E9F30 003E6E70  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 803E9F34 003E6E74  EC 00 10 28 */	fsubs f0, f0, f2
/* 803E9F38 003E6E78  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E9F3C 003E6E7C  48 00 00 08 */	b lbl_803E9F44
lbl_803E9F40:
/* 803E9F40 003E6E80  C0 22 1A 9C */	lfs f1, lbl_8051FDFC@sda21(r2)
lbl_803E9F44:
/* 803E9F44 003E6E84  C0 02 1A A0 */	lfs f0, lbl_8051FE00@sda21(r2)
/* 803E9F48 003E6E88  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803E9F4C 003E6E8C  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E9F50 003E6E90  81 83 00 00 */	lwz r12, 0(r3)
/* 803E9F54 003E6E94  FC 00 00 1E */	fctiwz f0, f0
/* 803E9F58 003E6E98  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803E9F5C 003E6E9C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803E9F60 003E6EA0  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 803E9F64 003E6EA4  7D 89 03 A6 */	mtctr r12
/* 803E9F68 003E6EA8  4E 80 04 21 */	bctrl 
/* 803E9F6C 003E6EAC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803E9F70 003E6EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 803E9F74 003E6EB4  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803E9F78 003E6EB8  7D 89 03 A6 */	mtctr r12
/* 803E9F7C 003E6EBC  4E 80 04 21 */	bctrl 
/* 803E9F80 003E6EC0  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 803E9F84 003E6EC4  28 00 00 00 */	cmplwi r0, 0
/* 803E9F88 003E6EC8  40 82 00 0C */	bne lbl_803E9F94
/* 803E9F8C 003E6ECC  38 60 00 01 */	li r3, 1
/* 803E9F90 003E6ED0  48 00 00 08 */	b lbl_803E9F98
lbl_803E9F94:
/* 803E9F94 003E6ED4  38 60 00 00 */	li r3, 0
lbl_803E9F98:
/* 803E9F98 003E6ED8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803E9F9C 003E6EDC  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803E9FA0 003E6EE0  7C 08 03 A6 */	mtlr r0
/* 803E9FA4 003E6EE4  38 21 00 30 */	addi r1, r1, 0x30
/* 803E9FA8 003E6EE8  4E 80 00 20 */	blr 

.global doDraw__Q33ebi6Screen7TTMBackFv
doDraw__Q33ebi6Screen7TTMBackFv:
/* 803E9FAC 003E6EEC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E9FB0 003E6EF0  7C 08 02 A6 */	mflr r0
/* 803E9FB4 003E6EF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E9FB8 003E6EF8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E9FBC 003E6EFC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E9FC0 003E6F00  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E9FC4 003E6F04  7C 7D 1B 78 */	mr r29, r3
/* 803E9FC8 003E6F08  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803E9FCC 003E6F0C  83 E4 00 24 */	lwz r31, 0x24(r4)
/* 803E9FD0 003E6F10  3B DF 01 90 */	addi r30, r31, 0x190
/* 803E9FD4 003E6F14  81 9E 00 00 */	lwz r12, 0(r30)
/* 803E9FD8 003E6F18  7F C3 F3 78 */	mr r3, r30
/* 803E9FDC 003E6F1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E9FE0 003E6F20  7D 89 03 A6 */	mtctr r12
/* 803E9FE4 003E6F24  4E 80 04 21 */	bctrl 
/* 803E9FE8 003E6F28  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 803E9FEC 003E6F2C  7F E4 FB 78 */	mr r4, r31
/* 803E9FF0 003E6F30  7F C5 F3 78 */	mr r5, r30
/* 803E9FF4 003E6F34  81 83 00 00 */	lwz r12, 0(r3)
/* 803E9FF8 003E6F38  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803E9FFC 003E6F3C  7D 89 03 A6 */	mtctr r12
/* 803EA000 003E6F40  4E 80 04 21 */	bctrl 
/* 803EA004 003E6F44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803EA008 003E6F48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EA00C 003E6F4C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EA010 003E6F50  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EA014 003E6F54  7C 08 03 A6 */	mtlr r0
/* 803EA018 003E6F58  38 21 00 20 */	addi r1, r1, 0x20
/* 803EA01C 003E6F5C  4E 80 00 20 */	blr 

.global doSetArchive__Q33ebi6Screen13TNintendoLogoFP10JKRArchive
doSetArchive__Q33ebi6Screen13TNintendoLogoFP10JKRArchive:
/* 803EA020 003E6F60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EA024 003E6F64  7C 08 02 A6 */	mflr r0
/* 803EA028 003E6F68  3C A0 80 49 */	lis r5, lbl_80497838@ha
/* 803EA02C 003E6F6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EA030 003E6F70  38 05 78 38 */	addi r0, r5, lbl_80497838@l
/* 803EA034 003E6F74  38 A0 00 00 */	li r5, 0
/* 803EA038 003E6F78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803EA03C 003E6F7C  7C 9F 23 78 */	mr r31, r4
/* 803EA040 003E6F80  7C 04 03 78 */	mr r4, r0
/* 803EA044 003E6F84  93 C1 00 08 */	stw r30, 8(r1)
/* 803EA048 003E6F88  7C 7E 1B 78 */	mr r30, r3
/* 803EA04C 003E6F8C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA050 003E6F90  48 03 93 0D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803EA054 003E6F94  38 60 01 48 */	li r3, 0x148
/* 803EA058 003E6F98  4B C3 9E 4D */	bl __nw__FUl
/* 803EA05C 003E6F9C  7C 60 1B 79 */	or. r0, r3, r3
/* 803EA060 003E6FA0  41 82 00 0C */	beq lbl_803EA06C
/* 803EA064 003E6FA4  48 04 AD 49 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 803EA068 003E6FA8  7C 60 1B 78 */	mr r0, r3
lbl_803EA06C:
/* 803EA06C 003E6FAC  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803EA070 003E6FB0  3C 60 80 49 */	lis r3, lbl_80497858@ha
/* 803EA074 003E6FB4  38 83 78 58 */	addi r4, r3, lbl_80497858@l
/* 803EA078 003E6FB8  7F E6 FB 78 */	mr r6, r31
/* 803EA07C 003E6FBC  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 803EA080 003E6FC0  3C A0 01 10 */	lis r5, 0x110
/* 803EA084 003E6FC4  4B C5 55 A1 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803EA088 003E6FC8  3C 80 80 49 */	lis r4, lbl_80497838@ha
/* 803EA08C 003E6FCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803EA090 003E6FD0  38 84 78 38 */	addi r4, r4, lbl_80497838@l
/* 803EA094 003E6FD4  48 03 92 D1 */	bl heapStatusEnd__6SystemFPc
/* 803EA098 003E6FD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EA09C 003E6FDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803EA0A0 003E6FE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803EA0A4 003E6FE4  7C 08 03 A6 */	mtlr r0
/* 803EA0A8 003E6FE8  38 21 00 10 */	addi r1, r1, 0x10
/* 803EA0AC 003E6FEC  4E 80 00 20 */	blr 

.global doUpdateStateWait__Q33ebi6Screen13TNintendoLogoFv
doUpdateStateWait__Q33ebi6Screen13TNintendoLogoFv:
/* 803EA0B0 003E6FF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803EA0B4 003E6FF4  7C 08 02 A6 */	mflr r0
/* 803EA0B8 003E6FF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803EA0BC 003E6FFC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803EA0C0 003E7000  81 83 00 00 */	lwz r12, 0(r3)
/* 803EA0C4 003E7004  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803EA0C8 003E7008  7D 89 03 A6 */	mtctr r12
/* 803EA0CC 003E700C  4E 80 04 21 */	bctrl 
/* 803EA0D0 003E7010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803EA0D4 003E7014  38 60 00 00 */	li r3, 0
/* 803EA0D8 003E7018  7C 08 03 A6 */	mtlr r0
/* 803EA0DC 003E701C  38 21 00 10 */	addi r1, r1, 0x10
/* 803EA0E0 003E7020  4E 80 00 20 */	blr 

.global doDraw__Q33ebi6Screen13TNintendoLogoFv
doDraw__Q33ebi6Screen13TNintendoLogoFv:
/* 803EA0E4 003E7024  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803EA0E8 003E7028  7C 08 02 A6 */	mflr r0
/* 803EA0EC 003E702C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803EA0F0 003E7030  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EA0F4 003E7034  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EA0F8 003E7038  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803EA0FC 003E703C  7C 7D 1B 78 */	mr r29, r3
/* 803EA100 003E7040  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803EA104 003E7044  83 E4 00 24 */	lwz r31, 0x24(r4)
/* 803EA108 003E7048  3B DF 01 90 */	addi r30, r31, 0x190
/* 803EA10C 003E704C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EA110 003E7050  7F C3 F3 78 */	mr r3, r30
/* 803EA114 003E7054  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803EA118 003E7058  7D 89 03 A6 */	mtctr r12
/* 803EA11C 003E705C  4E 80 04 21 */	bctrl 
/* 803EA120 003E7060  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 803EA124 003E7064  7F E4 FB 78 */	mr r4, r31
/* 803EA128 003E7068  7F C5 F3 78 */	mr r5, r30
/* 803EA12C 003E706C  81 83 00 00 */	lwz r12, 0(r3)
/* 803EA130 003E7070  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803EA134 003E7074  7D 89 03 A6 */	mtctr r12
/* 803EA138 003E7078  4E 80 04 21 */	bctrl 
/* 803EA13C 003E707C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803EA140 003E7080  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EA144 003E7084  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EA148 003E7088  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EA14C 003E708C  7C 08 03 A6 */	mtlr r0
/* 803EA150 003E7090  38 21 00 20 */	addi r1, r1, 0x20
/* 803EA154 003E7094  4E 80 00 20 */	blr 

.global getName__Q33ebi6Screen13TNintendoLogoFv
getName__Q33ebi6Screen13TNintendoLogoFv:
/* 803EA158 003E7098  3C 60 80 49 */	lis r3, lbl_8049786C@ha
/* 803EA15C 003E709C  38 63 78 6C */	addi r3, r3, lbl_8049786C@l
/* 803EA160 003E70A0  4E 80 00 20 */	blr 

.global getName__Q33ebi6Screen7TTMBackFv
getName__Q33ebi6Screen7TTMBackFv:
/* 803EA164 003E70A4  3C 60 80 49 */	lis r3, lbl_8049786C@ha
/* 803EA168 003E70A8  38 63 78 6C */	addi r3, r3, lbl_8049786C@l
/* 803EA16C 003E70AC  4E 80 00 20 */	blr 
