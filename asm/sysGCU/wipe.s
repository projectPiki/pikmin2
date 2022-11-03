.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_wipe_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__10BlackFader
__vt__10BlackFader:
	.4byte 0
	.4byte 0
	.4byte __dt__10BlackFaderFv
	.4byte getChildCount__5CNodeFv
	.4byte update__8WipeBaseFv
	.4byte draw__8WipeBaseFv
	.4byte isWhite__10BlackFaderFv
	.4byte isBlack__10BlackFaderFv
	.4byte on_start__8WipeBaseFv
	.4byte do_draw__10BlackFaderFf
.global __vt__14WipeOutInFader
__vt__14WipeOutInFader:
	.4byte 0
	.4byte 0
	.4byte __dt__14WipeOutInFaderFv
	.4byte getChildCount__5CNodeFv
	.4byte update__8WipeBaseFv
	.4byte draw__8WipeBaseFv
	.4byte isWhite__14WipeOutInFaderFv
	.4byte isBlack__14WipeOutInFaderFv
	.4byte on_start__14WipeOutInFaderFv
	.4byte do_draw__14WipeOutInFaderFf
.global __vt__12WipeOutFader
__vt__12WipeOutFader:
	.4byte 0
	.4byte 0
	.4byte __dt__12WipeOutFaderFv
	.4byte getChildCount__5CNodeFv
	.4byte update__8WipeBaseFv
	.4byte draw__8WipeBaseFv
	.4byte isWhite__12WipeOutFaderFv
	.4byte isBlack__12WipeOutFaderFv
	.4byte on_start__12WipeOutFaderFv
	.4byte do_draw__12WipeOutFaderFf
.global __vt__11WipeInFader
__vt__11WipeInFader:
	.4byte 0
	.4byte 0
	.4byte __dt__11WipeInFaderFv
	.4byte getChildCount__5CNodeFv
	.4byte update__8WipeBaseFv
	.4byte draw__8WipeBaseFv
	.4byte isWhite__11WipeInFaderFv
	.4byte isBlack__11WipeInFaderFv
	.4byte on_start__8WipeBaseFv
	.4byte do_draw__11WipeInFaderFf
.global __vt__8WipeBase
__vt__8WipeBase:
	.4byte 0
	.4byte 0
	.4byte __dt__8WipeBaseFv
	.4byte getChildCount__5CNodeFv
	.4byte update__8WipeBaseFv
	.4byte draw__8WipeBaseFv
	.4byte isWhite__8WipeBaseFv
	.4byte isBlack__8WipeBaseFv
	.4byte on_start__8WipeBaseFv
	.4byte do_draw__8WipeBaseFf

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_805205E8:
	.float 0.0
lbl_805205EC:
	.float 1.0
lbl_805205F0:
	.float 0.5
lbl_805205F4:
	.float 0.2
lbl_805205F8:
	.float 0.8
lbl_805205FC:
	.float 255.0
.balign 8
lbl_80520600:
	.4byte 0x43300000
	.4byte 0x00000000
lbl_80520608:
	.float 1.25
lbl_8052060C:
	.float 0.1

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__8WipeBaseFv
__ct__8WipeBaseFv:
/* 8042BD0C 00428C4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042BD10 00428C50  7C 08 02 A6 */	mflr r0
/* 8042BD14 00428C54  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042BD18 00428C58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042BD1C 00428C5C  7C 7F 1B 78 */	mr r31, r3
/* 8042BD20 00428C60  4B FE 56 71 */	bl __ct__5CNodeFv
/* 8042BD24 00428C64  3C 60 80 4F */	lis r3, __vt__8WipeBase@ha
/* 8042BD28 00428C68  C0 22 22 88 */	lfs f1, lbl_805205E8@sda21(r2)
/* 8042BD2C 00428C6C  38 03 BF 84 */	addi r0, r3, __vt__8WipeBase@l
/* 8042BD30 00428C70  C0 02 22 8C */	lfs f0, lbl_805205EC@sda21(r2)
/* 8042BD34 00428C74  90 1F 00 00 */	stw r0, 0(r31)
/* 8042BD38 00428C78  38 80 00 00 */	li r4, 0
/* 8042BD3C 00428C7C  38 00 00 01 */	li r0, 1
/* 8042BD40 00428C80  7F E3 FB 78 */	mr r3, r31
/* 8042BD44 00428C84  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8042BD48 00428C88  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8042BD4C 00428C8C  98 9F 00 20 */	stb r4, 0x20(r31)
/* 8042BD50 00428C90  98 1F 00 21 */	stb r0, 0x21(r31)
/* 8042BD54 00428C94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042BD58 00428C98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042BD5C 00428C9C  7C 08 03 A6 */	mtlr r0
/* 8042BD60 00428CA0  38 21 00 10 */	addi r1, r1, 0x10
/* 8042BD64 00428CA4  4E 80 00 20 */	blr 

.global start__8WipeBaseFf
start__8WipeBaseFf:
/* 8042BD68 00428CA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042BD6C 00428CAC  7C 08 02 A6 */	mflr r0
/* 8042BD70 00428CB0  C0 02 22 88 */	lfs f0, lbl_805205E8@sda21(r2)
/* 8042BD74 00428CB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042BD78 00428CB8  38 00 00 01 */	li r0, 1
/* 8042BD7C 00428CBC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8042BD80 00428CC0  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 8042BD84 00428CC4  98 03 00 20 */	stb r0, 0x20(r3)
/* 8042BD88 00428CC8  81 83 00 00 */	lwz r12, 0(r3)
/* 8042BD8C 00428CCC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8042BD90 00428CD0  7D 89 03 A6 */	mtctr r12
/* 8042BD94 00428CD4  4E 80 04 21 */	bctrl 
/* 8042BD98 00428CD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042BD9C 00428CDC  7C 08 03 A6 */	mtlr r0
/* 8042BDA0 00428CE0  38 21 00 10 */	addi r1, r1, 0x10
/* 8042BDA4 00428CE4  4E 80 00 20 */	blr 

.global on_start__8WipeBaseFv
on_start__8WipeBaseFv:
/* 8042BDA8 00428CE8  4E 80 00 20 */	blr 

.global update__8WipeBaseFv
update__8WipeBaseFv:
/* 8042BDAC 00428CEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042BDB0 00428CF0  7C 08 02 A6 */	mflr r0
/* 8042BDB4 00428CF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042BDB8 00428CF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042BDBC 00428CFC  7C 7F 1B 78 */	mr r31, r3
/* 8042BDC0 00428D00  81 83 00 00 */	lwz r12, 0(r3)
/* 8042BDC4 00428D04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042BDC8 00428D08  7D 89 03 A6 */	mtctr r12
/* 8042BDCC 00428D0C  4E 80 04 21 */	bctrl 
/* 8042BDD0 00428D10  88 1F 00 20 */	lbz r0, 0x20(r31)
/* 8042BDD4 00428D14  28 00 00 00 */	cmplwi r0, 0
/* 8042BDD8 00428D18  41 82 00 38 */	beq .L_8042BE10
/* 8042BDDC 00428D1C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042BDE0 00428D20  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 8042BDE4 00428D24  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8042BDE8 00428D28  C0 5F 00 18 */	lfs f2, 0x18(r31)
/* 8042BDEC 00428D2C  EC 21 00 24 */	fdivs f1, f1, f0
/* 8042BDF0 00428D30  C0 02 22 8C */	lfs f0, lbl_805205EC@sda21(r2)
/* 8042BDF4 00428D34  EC 22 08 2A */	fadds f1, f2, f1
/* 8042BDF8 00428D38  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8042BDFC 00428D3C  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8042BE00 00428D40  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042BE04 00428D44  4C 41 13 82 */	cror 2, 1, 2
/* 8042BE08 00428D48  40 82 00 08 */	bne .L_8042BE10
/* 8042BE0C 00428D4C  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8042BE10:
/* 8042BE10 00428D50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042BE14 00428D54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042BE18 00428D58  7C 08 03 A6 */	mtlr r0
/* 8042BE1C 00428D5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8042BE20 00428D60  4E 80 00 20 */	blr 

.global draw__8WipeBaseFv
draw__8WipeBaseFv:
/* 8042BE24 00428D64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042BE28 00428D68  7C 08 02 A6 */	mflr r0
/* 8042BE2C 00428D6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042BE30 00428D70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042BE34 00428D74  7C 7F 1B 78 */	mr r31, r3
/* 8042BE38 00428D78  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8042BE3C 00428D7C  28 00 00 00 */	cmplwi r0, 0
/* 8042BE40 00428D80  41 82 00 30 */	beq .L_8042BE70
/* 8042BE44 00428D84  81 83 00 00 */	lwz r12, 0(r3)
/* 8042BE48 00428D88  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8042BE4C 00428D8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8042BE50 00428D90  7D 89 03 A6 */	mtctr r12
/* 8042BE54 00428D94  4E 80 04 21 */	bctrl 
/* 8042BE58 00428D98  C0 22 22 8C */	lfs f1, lbl_805205EC@sda21(r2)
/* 8042BE5C 00428D9C  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8042BE60 00428DA0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8042BE64 00428DA4  40 82 00 0C */	bne .L_8042BE70
/* 8042BE68 00428DA8  38 00 00 00 */	li r0, 0
/* 8042BE6C 00428DAC  98 1F 00 20 */	stb r0, 0x20(r31)
.L_8042BE70:
/* 8042BE70 00428DB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042BE74 00428DB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042BE78 00428DB8  7C 08 03 A6 */	mtlr r0
/* 8042BE7C 00428DBC  38 21 00 10 */	addi r1, r1, 0x10
/* 8042BE80 00428DC0  4E 80 00 20 */	blr 

.global do_draw__8WipeBaseFf
do_draw__8WipeBaseFf:
/* 8042BE84 00428DC4  4E 80 00 20 */	blr 

.global isWhite__11WipeInFaderFv
isWhite__11WipeInFaderFv:
/* 8042BE88 00428DC8  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8042BE8C 00428DCC  C0 02 22 90 */	lfs f0, lbl_805205F0@sda21(r2)
/* 8042BE90 00428DD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042BE94 00428DD4  7C 00 00 26 */	mfcr r0
/* 8042BE98 00428DD8  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 8042BE9C 00428DDC  4E 80 00 20 */	blr 

.global isBlack__11WipeInFaderFv
isBlack__11WipeInFaderFv:
/* 8042BEA0 00428DE0  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8042BEA4 00428DE4  C0 02 22 90 */	lfs f0, lbl_805205F0@sda21(r2)
/* 8042BEA8 00428DE8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042BEAC 00428DEC  7C 00 00 26 */	mfcr r0
/* 8042BEB0 00428DF0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8042BEB4 00428DF4  4E 80 00 20 */	blr 

.global __ct__11WipeInFaderFv
__ct__11WipeInFaderFv:
/* 8042BEB8 00428DF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042BEBC 00428DFC  7C 08 02 A6 */	mflr r0
/* 8042BEC0 00428E00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042BEC4 00428E04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042BEC8 00428E08  7C 7F 1B 78 */	mr r31, r3
/* 8042BECC 00428E0C  4B FE 54 C5 */	bl __ct__5CNodeFv
/* 8042BED0 00428E10  3C 80 80 4F */	lis r4, __vt__8WipeBase@ha
/* 8042BED4 00428E14  3C 60 80 4F */	lis r3, __vt__11WipeInFader@ha
/* 8042BED8 00428E18  38 04 BF 84 */	addi r0, r4, __vt__8WipeBase@l
/* 8042BEDC 00428E1C  C0 22 22 88 */	lfs f1, lbl_805205E8@sda21(r2)
/* 8042BEE0 00428E20  90 1F 00 00 */	stw r0, 0(r31)
/* 8042BEE4 00428E24  38 A0 00 00 */	li r5, 0
/* 8042BEE8 00428E28  C0 02 22 8C */	lfs f0, lbl_805205EC@sda21(r2)
/* 8042BEEC 00428E2C  38 80 00 01 */	li r4, 1
/* 8042BEF0 00428E30  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8042BEF4 00428E34  38 03 BF 5C */	addi r0, r3, __vt__11WipeInFader@l
/* 8042BEF8 00428E38  7F E3 FB 78 */	mr r3, r31
/* 8042BEFC 00428E3C  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8042BF00 00428E40  98 BF 00 20 */	stb r5, 0x20(r31)
/* 8042BF04 00428E44  98 9F 00 21 */	stb r4, 0x21(r31)
/* 8042BF08 00428E48  90 1F 00 00 */	stw r0, 0(r31)
/* 8042BF0C 00428E4C  98 BF 00 24 */	stb r5, 0x24(r31)
/* 8042BF10 00428E50  98 BF 00 25 */	stb r5, 0x25(r31)
/* 8042BF14 00428E54  98 BF 00 26 */	stb r5, 0x26(r31)
/* 8042BF18 00428E58  98 BF 00 27 */	stb r5, 0x27(r31)
/* 8042BF1C 00428E5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042BF20 00428E60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042BF24 00428E64  7C 08 03 A6 */	mtlr r0
/* 8042BF28 00428E68  38 21 00 10 */	addi r1, r1, 0x10
/* 8042BF2C 00428E6C  4E 80 00 20 */	blr 

.global do_draw__11WipeInFaderFf
do_draw__11WipeInFaderFf:
/* 8042BF30 00428E70  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8042BF34 00428E74  7C 08 02 A6 */	mflr r0
/* 8042BF38 00428E78  90 01 00 64 */	stw r0, 0x64(r1)
/* 8042BF3C 00428E7C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8042BF40 00428E80  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8042BF44 00428E84  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8042BF48 00428E88  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8042BF4C 00428E8C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8042BF50 00428E90  7C 7E 1B 78 */	mr r30, r3
/* 8042BF54 00428E94  FF E0 08 90 */	fmr f31, f1
/* 8042BF58 00428E98  83 E4 00 24 */	lwz r31, 0x24(r4)
/* 8042BF5C 00428E9C  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8042BF60 00428EA0  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8042BF64 00428EA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042BF68 00428EA8  7D 89 03 A6 */	mtctr r12
/* 8042BF6C 00428EAC  4E 80 04 21 */	bctrl 
/* 8042BF70 00428EB0  C0 02 22 94 */	lfs f0, lbl_805205F4@sda21(r2)
/* 8042BF74 00428EB4  3B FF 00 BC */	addi r31, r31, 0xbc
/* 8042BF78 00428EB8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8042BF7C 00428EBC  40 80 00 0C */	bge .L_8042BF88
/* 8042BF80 00428EC0  C0 22 22 88 */	lfs f1, lbl_805205E8@sda21(r2)
/* 8042BF84 00428EC4  48 00 00 10 */	b .L_8042BF94
.L_8042BF88:
/* 8042BF88 00428EC8  EC 3F 00 28 */	fsubs f1, f31, f0
/* 8042BF8C 00428ECC  C0 02 22 98 */	lfs f0, lbl_805205F8@sda21(r2)
/* 8042BF90 00428ED0  EC 21 00 24 */	fdivs f1, f1, f0
.L_8042BF94:
/* 8042BF94 00428ED4  C0 02 22 9C */	lfs f0, lbl_805205FC@sda21(r2)
/* 8042BF98 00428ED8  7F E3 FB 78 */	mr r3, r31
/* 8042BF9C 00428EDC  88 1E 00 26 */	lbz r0, 0x26(r30)
/* 8042BFA0 00428EE0  38 81 00 08 */	addi r4, r1, 8
/* 8042BFA4 00428EE4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8042BFA8 00428EE8  88 DE 00 24 */	lbz r6, 0x24(r30)
/* 8042BFAC 00428EEC  88 FE 00 25 */	lbz r7, 0x25(r30)
/* 8042BFB0 00428EF0  38 A1 00 0C */	addi r5, r1, 0xc
/* 8042BFB4 00428EF4  98 C1 00 18 */	stb r6, 0x18(r1)
/* 8042BFB8 00428EF8  38 C1 00 10 */	addi r6, r1, 0x10
/* 8042BFBC 00428EFC  FC 00 00 1E */	fctiwz f0, f0
/* 8042BFC0 00428F00  98 E1 00 19 */	stb r7, 0x19(r1)
/* 8042BFC4 00428F04  38 E1 00 14 */	addi r7, r1, 0x14
/* 8042BFC8 00428F08  98 01 00 1A */	stb r0, 0x1a(r1)
/* 8042BFCC 00428F0C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8042BFD0 00428F10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8042BFD4 00428F14  20 00 00 FF */	subfic r0, r0, 0xff
/* 8042BFD8 00428F18  98 01 00 1B */	stb r0, 0x1b(r1)
/* 8042BFDC 00428F1C  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8042BFE0 00428F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042BFE4 00428F24  90 01 00 10 */	stw r0, 0x10(r1)
/* 8042BFE8 00428F28  90 01 00 0C */	stw r0, 0xc(r1)
/* 8042BFEC 00428F2C  90 01 00 08 */	stw r0, 8(r1)
/* 8042BFF0 00428F30  4B C0 A6 9D */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8042BFF4 00428F34  4B FF 72 31 */	bl getRenderModeObj__6SystemFv
/* 8042BFF8 00428F38  A3 C3 00 06 */	lhz r30, 6(r3)
/* 8042BFFC 00428F3C  4B FF 72 29 */	bl getRenderModeObj__6SystemFv
/* 8042C000 00428F40  A0 83 00 04 */	lhz r4, 4(r3)
/* 8042C004 00428F44  3C 00 43 30 */	lis r0, 0x4330
/* 8042C008 00428F48  C0 62 22 88 */	lfs f3, lbl_805205E8@sda21(r2)
/* 8042C00C 00428F4C  7F E3 FB 78 */	mr r3, r31
/* 8042C010 00428F50  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8042C014 00428F54  38 81 00 1C */	addi r4, r1, 0x1c
/* 8042C018 00428F58  C8 42 22 A0 */	lfd f2, lbl_80520600@sda21(r2)
/* 8042C01C 00428F5C  90 01 00 38 */	stw r0, 0x38(r1)
/* 8042C020 00428F60  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8042C024 00428F64  93 C1 00 44 */	stw r30, 0x44(r1)
/* 8042C028 00428F68  EC 20 10 28 */	fsubs f1, f0, f2
/* 8042C02C 00428F6C  90 01 00 40 */	stw r0, 0x40(r1)
/* 8042C030 00428F70  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 8042C034 00428F74  EC 23 08 2A */	fadds f1, f3, f1
/* 8042C038 00428F78  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8042C03C 00428F7C  EC 00 10 28 */	fsubs f0, f0, f2
/* 8042C040 00428F80  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8042C044 00428F84  EC 03 00 2A */	fadds f0, f3, f0
/* 8042C048 00428F88  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8042C04C 00428F8C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8042C050 00428F90  4B C0 A7 85 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 8042C054 00428F94  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8042C058 00428F98  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8042C05C 00428F9C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8042C060 00428FA0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8042C064 00428FA4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8042C068 00428FA8  7C 08 03 A6 */	mtlr r0
/* 8042C06C 00428FAC  38 21 00 60 */	addi r1, r1, 0x60
/* 8042C070 00428FB0  4E 80 00 20 */	blr 

.global __ct__12WipeOutFaderFv
__ct__12WipeOutFaderFv:
/* 8042C074 00428FB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C078 00428FB8  7C 08 02 A6 */	mflr r0
/* 8042C07C 00428FBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C080 00428FC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042C084 00428FC4  7C 7F 1B 78 */	mr r31, r3
/* 8042C088 00428FC8  4B FE 53 09 */	bl __ct__5CNodeFv
/* 8042C08C 00428FCC  3C 80 80 4F */	lis r4, __vt__8WipeBase@ha
/* 8042C090 00428FD0  3C 60 80 4F */	lis r3, __vt__12WipeOutFader@ha
/* 8042C094 00428FD4  38 04 BF 84 */	addi r0, r4, __vt__8WipeBase@l
/* 8042C098 00428FD8  C0 22 22 88 */	lfs f1, lbl_805205E8@sda21(r2)
/* 8042C09C 00428FDC  90 1F 00 00 */	stw r0, 0(r31)
/* 8042C0A0 00428FE0  38 A0 00 00 */	li r5, 0
/* 8042C0A4 00428FE4  C0 02 22 8C */	lfs f0, lbl_805205EC@sda21(r2)
/* 8042C0A8 00428FE8  38 80 00 01 */	li r4, 1
/* 8042C0AC 00428FEC  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8042C0B0 00428FF0  38 03 BF 34 */	addi r0, r3, __vt__12WipeOutFader@l
/* 8042C0B4 00428FF4  7F E3 FB 78 */	mr r3, r31
/* 8042C0B8 00428FF8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8042C0BC 00428FFC  98 BF 00 20 */	stb r5, 0x20(r31)
/* 8042C0C0 00429000  98 9F 00 21 */	stb r4, 0x21(r31)
/* 8042C0C4 00429004  90 1F 00 00 */	stw r0, 0(r31)
/* 8042C0C8 00429008  98 BF 00 24 */	stb r5, 0x24(r31)
/* 8042C0CC 0042900C  98 BF 00 25 */	stb r5, 0x25(r31)
/* 8042C0D0 00429010  98 BF 00 26 */	stb r5, 0x26(r31)
/* 8042C0D4 00429014  98 BF 00 27 */	stb r5, 0x27(r31)
/* 8042C0D8 00429018  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042C0DC 0042901C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C0E0 00429020  7C 08 03 A6 */	mtlr r0
/* 8042C0E4 00429024  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C0E8 00429028  4E 80 00 20 */	blr 

.global on_start__12WipeOutFaderFv
on_start__12WipeOutFaderFv:
/* 8042C0EC 0042902C  4E 80 00 20 */	blr 

.global isWhite__12WipeOutFaderFv
isWhite__12WipeOutFaderFv:
/* 8042C0F0 00429030  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8042C0F4 00429034  C0 02 22 90 */	lfs f0, lbl_805205F0@sda21(r2)
/* 8042C0F8 00429038  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042C0FC 0042903C  7C 00 00 26 */	mfcr r0
/* 8042C100 00429040  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8042C104 00429044  4E 80 00 20 */	blr 

.global isBlack__12WipeOutFaderFv
isBlack__12WipeOutFaderFv:
/* 8042C108 00429048  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8042C10C 0042904C  C0 02 22 90 */	lfs f0, lbl_805205F0@sda21(r2)
/* 8042C110 00429050  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042C114 00429054  7C 00 00 26 */	mfcr r0
/* 8042C118 00429058  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 8042C11C 0042905C  4E 80 00 20 */	blr 

.global do_draw__12WipeOutFaderFf
do_draw__12WipeOutFaderFf:
/* 8042C120 00429060  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8042C124 00429064  7C 08 02 A6 */	mflr r0
/* 8042C128 00429068  90 01 00 64 */	stw r0, 0x64(r1)
/* 8042C12C 0042906C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8042C130 00429070  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8042C134 00429074  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8042C138 00429078  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8042C13C 0042907C  C0 02 22 98 */	lfs f0, lbl_805205F8@sda21(r2)
/* 8042C140 00429080  7C 7E 1B 78 */	mr r30, r3
/* 8042C144 00429084  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042C148 00429088  40 81 00 0C */	ble .L_8042C154
/* 8042C14C 0042908C  C3 E2 22 8C */	lfs f31, lbl_805205EC@sda21(r2)
/* 8042C150 00429090  48 00 00 0C */	b .L_8042C15C
.L_8042C154:
/* 8042C154 00429094  C0 02 22 A8 */	lfs f0, lbl_80520608@sda21(r2)
/* 8042C158 00429098  EF E0 00 72 */	fmuls f31, f0, f1
.L_8042C15C:
/* 8042C15C 0042909C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8042C160 004290A0  83 E3 00 24 */	lwz r31, 0x24(r3)
/* 8042C164 004290A4  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8042C168 004290A8  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8042C16C 004290AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042C170 004290B0  7D 89 03 A6 */	mtctr r12
/* 8042C174 004290B4  4E 80 04 21 */	bctrl 
/* 8042C178 004290B8  C0 02 22 9C */	lfs f0, lbl_805205FC@sda21(r2)
/* 8042C17C 004290BC  3B FF 00 BC */	addi r31, r31, 0xbc
/* 8042C180 004290C0  88 1E 00 26 */	lbz r0, 0x26(r30)
/* 8042C184 004290C4  7F E3 FB 78 */	mr r3, r31
/* 8042C188 004290C8  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8042C18C 004290CC  88 BE 00 24 */	lbz r5, 0x24(r30)
/* 8042C190 004290D0  88 DE 00 25 */	lbz r6, 0x25(r30)
/* 8042C194 004290D4  38 81 00 08 */	addi r4, r1, 8
/* 8042C198 004290D8  98 A1 00 18 */	stb r5, 0x18(r1)
/* 8042C19C 004290DC  38 A1 00 0C */	addi r5, r1, 0xc
/* 8042C1A0 004290E0  FC 00 00 1E */	fctiwz f0, f0
/* 8042C1A4 004290E4  98 C1 00 19 */	stb r6, 0x19(r1)
/* 8042C1A8 004290E8  38 C1 00 10 */	addi r6, r1, 0x10
/* 8042C1AC 004290EC  38 E1 00 14 */	addi r7, r1, 0x14
/* 8042C1B0 004290F0  98 01 00 1A */	stb r0, 0x1a(r1)
/* 8042C1B4 004290F4  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 8042C1B8 004290F8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8042C1BC 004290FC  98 01 00 1B */	stb r0, 0x1b(r1)
/* 8042C1C0 00429100  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8042C1C4 00429104  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C1C8 00429108  90 01 00 10 */	stw r0, 0x10(r1)
/* 8042C1CC 0042910C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8042C1D0 00429110  90 01 00 08 */	stw r0, 8(r1)
/* 8042C1D4 00429114  4B C0 A4 B9 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8042C1D8 00429118  4B FF 70 4D */	bl getRenderModeObj__6SystemFv
/* 8042C1DC 0042911C  A3 C3 00 06 */	lhz r30, 6(r3)
/* 8042C1E0 00429120  4B FF 70 45 */	bl getRenderModeObj__6SystemFv
/* 8042C1E4 00429124  A0 83 00 04 */	lhz r4, 4(r3)
/* 8042C1E8 00429128  3C 00 43 30 */	lis r0, 0x4330
/* 8042C1EC 0042912C  C0 62 22 88 */	lfs f3, lbl_805205E8@sda21(r2)
/* 8042C1F0 00429130  7F E3 FB 78 */	mr r3, r31
/* 8042C1F4 00429134  90 81 00 3C */	stw r4, 0x3c(r1)
/* 8042C1F8 00429138  38 81 00 1C */	addi r4, r1, 0x1c
/* 8042C1FC 0042913C  C8 42 22 A0 */	lfd f2, lbl_80520600@sda21(r2)
/* 8042C200 00429140  90 01 00 38 */	stw r0, 0x38(r1)
/* 8042C204 00429144  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8042C208 00429148  93 C1 00 44 */	stw r30, 0x44(r1)
/* 8042C20C 0042914C  EC 20 10 28 */	fsubs f1, f0, f2
/* 8042C210 00429150  90 01 00 40 */	stw r0, 0x40(r1)
/* 8042C214 00429154  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 8042C218 00429158  EC 23 08 2A */	fadds f1, f3, f1
/* 8042C21C 0042915C  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8042C220 00429160  EC 00 10 28 */	fsubs f0, f0, f2
/* 8042C224 00429164  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8042C228 00429168  EC 03 00 2A */	fadds f0, f3, f0
/* 8042C22C 0042916C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8042C230 00429170  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8042C234 00429174  4B C0 A5 A1 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 8042C238 00429178  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8042C23C 0042917C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8042C240 00429180  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8042C244 00429184  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8042C248 00429188  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8042C24C 0042918C  7C 08 03 A6 */	mtlr r0
/* 8042C250 00429190  38 21 00 60 */	addi r1, r1, 0x60
/* 8042C254 00429194  4E 80 00 20 */	blr 

.global on_start__14WipeOutInFaderFv
on_start__14WipeOutInFaderFv:
/* 8042C258 00429198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C25C 0042919C  7C 08 02 A6 */	mflr r0
/* 8042C260 004291A0  C0 22 22 88 */	lfs f1, lbl_805205E8@sda21(r2)
/* 8042C264 004291A4  7C 64 1B 78 */	mr r4, r3
/* 8042C268 004291A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C26C 004291AC  38 00 00 01 */	li r0, 1
/* 8042C270 004291B0  C0 02 22 AC */	lfs f0, lbl_8052060C@sda21(r2)
/* 8042C274 004291B4  98 03 00 74 */	stb r0, 0x74(r3)
/* 8042C278 004291B8  38 64 00 24 */	addi r3, r4, 0x24
/* 8042C27C 004291BC  D0 24 00 3C */	stfs f1, 0x3c(r4)
/* 8042C280 004291C0  D0 04 00 40 */	stfs f0, 0x40(r4)
/* 8042C284 004291C4  98 04 00 44 */	stb r0, 0x44(r4)
/* 8042C288 004291C8  81 84 00 24 */	lwz r12, 0x24(r4)
/* 8042C28C 004291CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8042C290 004291D0  7D 89 03 A6 */	mtctr r12
/* 8042C294 004291D4  4E 80 04 21 */	bctrl 
/* 8042C298 004291D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C29C 004291DC  7C 08 03 A6 */	mtlr r0
/* 8042C2A0 004291E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C2A4 004291E4  4E 80 00 20 */	blr 

.global isWhite__14WipeOutInFaderFv
isWhite__14WipeOutInFaderFv:
/* 8042C2A8 004291E8  88 03 00 74 */	lbz r0, 0x74(r3)
/* 8042C2AC 004291EC  28 00 00 00 */	cmplwi r0, 0
/* 8042C2B0 004291F0  41 82 00 1C */	beq .L_8042C2CC
/* 8042C2B4 004291F4  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8042C2B8 004291F8  C0 02 22 90 */	lfs f0, lbl_805205F0@sda21(r2)
/* 8042C2BC 004291FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042C2C0 00429200  7C 00 00 26 */	mfcr r0
/* 8042C2C4 00429204  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8042C2C8 00429208  4E 80 00 20 */	blr 
.L_8042C2CC:
/* 8042C2CC 0042920C  C0 23 00 18 */	lfs f1, 0x18(r3)
/* 8042C2D0 00429210  C0 02 22 90 */	lfs f0, lbl_805205F0@sda21(r2)
/* 8042C2D4 00429214  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8042C2D8 00429218  7C 00 00 26 */	mfcr r0
/* 8042C2DC 0042921C  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 8042C2E0 00429220  4E 80 00 20 */	blr 

.global isBlack__14WipeOutInFaderFv
isBlack__14WipeOutInFaderFv:
/* 8042C2E4 00429224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C2E8 00429228  7C 08 02 A6 */	mflr r0
/* 8042C2EC 0042922C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C2F0 00429230  81 83 00 00 */	lwz r12, 0(r3)
/* 8042C2F4 00429234  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8042C2F8 00429238  7D 89 03 A6 */	mtctr r12
/* 8042C2FC 0042923C  4E 80 04 21 */	bctrl 
/* 8042C300 00429240  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8042C304 00429244  7C 00 00 34 */	cntlzw r0, r0
/* 8042C308 00429248  54 03 D9 7E */	srwi r3, r0, 5
/* 8042C30C 0042924C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C310 00429250  7C 08 03 A6 */	mtlr r0
/* 8042C314 00429254  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C318 00429258  4E 80 00 20 */	blr 

.global do_draw__14WipeOutInFaderFf
do_draw__14WipeOutInFaderFf:
/* 8042C31C 0042925C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C320 00429260  7C 08 02 A6 */	mflr r0
/* 8042C324 00429264  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C328 00429268  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042C32C 0042926C  7C 7F 1B 78 */	mr r31, r3
/* 8042C330 00429270  88 03 00 74 */	lbz r0, 0x74(r3)
/* 8042C334 00429274  28 00 00 00 */	cmplwi r0, 0
/* 8042C338 00429278  41 82 00 64 */	beq .L_8042C39C
/* 8042C33C 0042927C  88 1F 00 44 */	lbz r0, 0x44(r31)
/* 8042C340 00429280  28 00 00 00 */	cmplwi r0, 0
/* 8042C344 00429284  40 82 00 40 */	bne .L_8042C384
/* 8042C348 00429288  38 00 00 00 */	li r0, 0
/* 8042C34C 0042928C  C0 22 22 AC */	lfs f1, lbl_8052060C@sda21(r2)
/* 8042C350 00429290  98 1F 00 74 */	stb r0, 0x74(r31)
/* 8042C354 00429294  38 00 00 01 */	li r0, 1
/* 8042C358 00429298  C0 02 22 88 */	lfs f0, lbl_805205E8@sda21(r2)
/* 8042C35C 0042929C  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8042C360 004292A0  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 8042C364 004292A4  EC 22 08 28 */	fsubs f1, f2, f1
/* 8042C368 004292A8  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 8042C36C 004292AC  D0 3F 00 68 */	stfs f1, 0x68(r31)
/* 8042C370 004292B0  98 1F 00 6C */	stb r0, 0x6c(r31)
/* 8042C374 004292B4  81 9F 00 4C */	lwz r12, 0x4c(r31)
/* 8042C378 004292B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8042C37C 004292BC  7D 89 03 A6 */	mtctr r12
/* 8042C380 004292C0  4E 80 04 21 */	bctrl 
.L_8042C384:
/* 8042C384 004292C4  38 7F 00 24 */	addi r3, r31, 0x24
/* 8042C388 004292C8  81 9F 00 24 */	lwz r12, 0x24(r31)
/* 8042C38C 004292CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8042C390 004292D0  7D 89 03 A6 */	mtctr r12
/* 8042C394 004292D4  4E 80 04 21 */	bctrl 
/* 8042C398 004292D8  48 00 00 18 */	b .L_8042C3B0
.L_8042C39C:
/* 8042C39C 004292DC  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8042C3A0 004292E0  81 9F 00 4C */	lwz r12, 0x4c(r31)
/* 8042C3A4 004292E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8042C3A8 004292E8  7D 89 03 A6 */	mtctr r12
/* 8042C3AC 004292EC  4E 80 04 21 */	bctrl 
.L_8042C3B0:
/* 8042C3B0 004292F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C3B4 004292F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042C3B8 004292F8  7C 08 03 A6 */	mtlr r0
/* 8042C3BC 004292FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C3C0 00429300  4E 80 00 20 */	blr 

.global __ct__10BlackFaderFv
__ct__10BlackFaderFv:
/* 8042C3C4 00429304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C3C8 00429308  7C 08 02 A6 */	mflr r0
/* 8042C3CC 0042930C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C3D0 00429310  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042C3D4 00429314  7C 7F 1B 78 */	mr r31, r3
/* 8042C3D8 00429318  4B FE 4F B9 */	bl __ct__5CNodeFv
/* 8042C3DC 0042931C  3C 80 80 4F */	lis r4, __vt__8WipeBase@ha
/* 8042C3E0 00429320  3C 60 80 4F */	lis r3, __vt__10BlackFader@ha
/* 8042C3E4 00429324  38 04 BF 84 */	addi r0, r4, __vt__8WipeBase@l
/* 8042C3E8 00429328  C0 22 22 88 */	lfs f1, lbl_805205E8@sda21(r2)
/* 8042C3EC 0042932C  90 1F 00 00 */	stw r0, 0(r31)
/* 8042C3F0 00429330  38 A0 00 00 */	li r5, 0
/* 8042C3F4 00429334  C0 02 22 8C */	lfs f0, lbl_805205EC@sda21(r2)
/* 8042C3F8 00429338  38 80 00 01 */	li r4, 1
/* 8042C3FC 0042933C  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 8042C400 00429340  38 03 BE E4 */	addi r0, r3, __vt__10BlackFader@l
/* 8042C404 00429344  7F E3 FB 78 */	mr r3, r31
/* 8042C408 00429348  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8042C40C 0042934C  98 BF 00 20 */	stb r5, 0x20(r31)
/* 8042C410 00429350  98 9F 00 21 */	stb r4, 0x21(r31)
/* 8042C414 00429354  90 1F 00 00 */	stw r0, 0(r31)
/* 8042C418 00429358  98 BF 00 24 */	stb r5, 0x24(r31)
/* 8042C41C 0042935C  98 BF 00 25 */	stb r5, 0x25(r31)
/* 8042C420 00429360  98 BF 00 26 */	stb r5, 0x26(r31)
/* 8042C424 00429364  98 BF 00 27 */	stb r5, 0x27(r31)
/* 8042C428 00429368  98 9F 00 28 */	stb r4, 0x28(r31)
/* 8042C42C 0042936C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042C430 00429370  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C434 00429374  7C 08 03 A6 */	mtlr r0
/* 8042C438 00429378  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C43C 0042937C  4E 80 00 20 */	blr 

.global isWhite__10BlackFaderFv
isWhite__10BlackFaderFv:
/* 8042C440 00429380  88 03 00 28 */	lbz r0, 0x28(r3)
/* 8042C444 00429384  7C 00 00 34 */	cntlzw r0, r0
/* 8042C448 00429388  54 03 D9 7E */	srwi r3, r0, 5
/* 8042C44C 0042938C  4E 80 00 20 */	blr 

.global isBlack__10BlackFaderFv
isBlack__10BlackFaderFv:
/* 8042C450 00429390  88 63 00 28 */	lbz r3, 0x28(r3)
/* 8042C454 00429394  4E 80 00 20 */	blr 

.global do_draw__10BlackFaderFf
do_draw__10BlackFaderFf:
/* 8042C458 00429398  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8042C45C 0042939C  7C 08 02 A6 */	mflr r0
/* 8042C460 004293A0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8042C464 004293A4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8042C468 004293A8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8042C46C 004293AC  7C 7E 1B 78 */	mr r30, r3
/* 8042C470 004293B0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8042C474 004293B4  83 E4 00 24 */	lwz r31, 0x24(r4)
/* 8042C478 004293B8  81 9F 00 BC */	lwz r12, 0xbc(r31)
/* 8042C47C 004293BC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8042C480 004293C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8042C484 004293C4  7D 89 03 A6 */	mtctr r12
/* 8042C488 004293C8  4E 80 04 21 */	bctrl 
/* 8042C48C 004293CC  88 1E 00 28 */	lbz r0, 0x28(r30)
/* 8042C490 004293D0  38 60 00 FF */	li r3, 0xff
/* 8042C494 004293D4  88 9E 00 24 */	lbz r4, 0x24(r30)
/* 8042C498 004293D8  3B FF 00 BC */	addi r31, r31, 0xbc
/* 8042C49C 004293DC  88 BE 00 25 */	lbz r5, 0x25(r30)
/* 8042C4A0 004293E0  28 00 00 00 */	cmplwi r0, 0
/* 8042C4A4 004293E4  88 DE 00 26 */	lbz r6, 0x26(r30)
/* 8042C4A8 004293E8  98 81 00 1C */	stb r4, 0x1c(r1)
/* 8042C4AC 004293EC  98 A1 00 1D */	stb r5, 0x1d(r1)
/* 8042C4B0 004293F0  98 C1 00 1E */	stb r6, 0x1e(r1)
/* 8042C4B4 004293F4  98 61 00 1F */	stb r3, 0x1f(r1)
/* 8042C4B8 004293F8  40 82 00 18 */	bne .L_8042C4D0
/* 8042C4BC 004293FC  38 00 00 00 */	li r0, 0
/* 8042C4C0 00429400  98 81 00 1C */	stb r4, 0x1c(r1)
/* 8042C4C4 00429404  98 A1 00 1D */	stb r5, 0x1d(r1)
/* 8042C4C8 00429408  98 C1 00 1E */	stb r6, 0x1e(r1)
/* 8042C4CC 0042940C  98 01 00 1F */	stb r0, 0x1f(r1)
.L_8042C4D0:
/* 8042C4D0 00429410  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8042C4D4 00429414  7F E3 FB 78 */	mr r3, r31
/* 8042C4D8 00429418  38 81 00 0C */	addi r4, r1, 0xc
/* 8042C4DC 0042941C  38 A1 00 10 */	addi r5, r1, 0x10
/* 8042C4E0 00429420  90 01 00 08 */	stw r0, 8(r1)
/* 8042C4E4 00429424  38 C1 00 14 */	addi r6, r1, 0x14
/* 8042C4E8 00429428  38 E1 00 18 */	addi r7, r1, 0x18
/* 8042C4EC 0042942C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8042C4F0 00429430  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C4F4 00429434  90 01 00 10 */	stw r0, 0x10(r1)
/* 8042C4F8 00429438  90 01 00 0C */	stw r0, 0xc(r1)
/* 8042C4FC 0042943C  4B C0 A1 91 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 8042C500 00429440  4B FF 6D 25 */	bl getRenderModeObj__6SystemFv
/* 8042C504 00429444  A3 C3 00 06 */	lhz r30, 6(r3)
/* 8042C508 00429448  4B FF 6D 1D */	bl getRenderModeObj__6SystemFv
/* 8042C50C 0042944C  A0 83 00 04 */	lhz r4, 4(r3)
/* 8042C510 00429450  3C 00 43 30 */	lis r0, 0x4330
/* 8042C514 00429454  C0 62 22 88 */	lfs f3, lbl_805205E8@sda21(r2)
/* 8042C518 00429458  7F E3 FB 78 */	mr r3, r31
/* 8042C51C 0042945C  90 81 00 34 */	stw r4, 0x34(r1)
/* 8042C520 00429460  38 81 00 20 */	addi r4, r1, 0x20
/* 8042C524 00429464  C8 42 22 A0 */	lfd f2, lbl_80520600@sda21(r2)
/* 8042C528 00429468  90 01 00 30 */	stw r0, 0x30(r1)
/* 8042C52C 0042946C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8042C530 00429470  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 8042C534 00429474  EC 20 10 28 */	fsubs f1, f0, f2
/* 8042C538 00429478  90 01 00 38 */	stw r0, 0x38(r1)
/* 8042C53C 0042947C  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8042C540 00429480  EC 23 08 2A */	fadds f1, f3, f1
/* 8042C544 00429484  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8042C548 00429488  EC 00 10 28 */	fsubs f0, f0, f2
/* 8042C54C 0042948C  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 8042C550 00429490  EC 03 00 2A */	fadds f0, f3, f0
/* 8042C554 00429494  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8042C558 00429498  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8042C55C 0042949C  4B C0 A2 79 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
/* 8042C560 004294A0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8042C564 004294A4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8042C568 004294A8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8042C56C 004294AC  7C 08 03 A6 */	mtlr r0
/* 8042C570 004294B0  38 21 00 50 */	addi r1, r1, 0x50
/* 8042C574 004294B4  4E 80 00 20 */	blr 

.global isWhite__8WipeBaseFv
isWhite__8WipeBaseFv:
/* 8042C578 004294B8  38 60 00 00 */	li r3, 0
/* 8042C57C 004294BC  4E 80 00 20 */	blr 

.global isBlack__8WipeBaseFv
isBlack__8WipeBaseFv:
/* 8042C580 004294C0  38 60 00 00 */	li r3, 0
/* 8042C584 004294C4  4E 80 00 20 */	blr 

.global __dt__10BlackFaderFv
__dt__10BlackFaderFv:
/* 8042C588 004294C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C58C 004294CC  7C 08 02 A6 */	mflr r0
/* 8042C590 004294D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C594 004294D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042C598 004294D8  7C 9F 23 78 */	mr r31, r4
/* 8042C59C 004294DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8042C5A0 004294E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8042C5A4 004294E4  41 82 00 38 */	beq .L_8042C5DC
/* 8042C5A8 004294E8  3C 80 80 4F */	lis r4, __vt__10BlackFader@ha
/* 8042C5AC 004294EC  38 04 BE E4 */	addi r0, r4, __vt__10BlackFader@l
/* 8042C5B0 004294F0  90 1E 00 00 */	stw r0, 0(r30)
/* 8042C5B4 004294F4  41 82 00 18 */	beq .L_8042C5CC
/* 8042C5B8 004294F8  3C A0 80 4F */	lis r5, __vt__8WipeBase@ha
/* 8042C5BC 004294FC  38 80 00 00 */	li r4, 0
/* 8042C5C0 00429500  38 05 BF 84 */	addi r0, r5, __vt__8WipeBase@l
/* 8042C5C4 00429504  90 1E 00 00 */	stw r0, 0(r30)
/* 8042C5C8 00429508  4B FE 4F C1 */	bl __dt__5CNodeFv
.L_8042C5CC:
/* 8042C5CC 0042950C  7F E0 07 35 */	extsh. r0, r31
/* 8042C5D0 00429510  40 81 00 0C */	ble .L_8042C5DC
/* 8042C5D4 00429514  7F C3 F3 78 */	mr r3, r30
/* 8042C5D8 00429518  4B BF 7A DD */	bl __dl__FPv
.L_8042C5DC:
/* 8042C5DC 0042951C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C5E0 00429520  7F C3 F3 78 */	mr r3, r30
/* 8042C5E4 00429524  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042C5E8 00429528  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042C5EC 0042952C  7C 08 03 A6 */	mtlr r0
/* 8042C5F0 00429530  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C5F4 00429534  4E 80 00 20 */	blr 

.global __dt__14WipeOutInFaderFv
__dt__14WipeOutInFaderFv:
/* 8042C5F8 00429538  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8042C5FC 0042953C  7C 08 02 A6 */	mflr r0
/* 8042C600 00429540  90 01 00 14 */	stw r0, 0x14(r1)
/* 8042C604 00429544  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8042C608 00429548  7C 7F 1B 79 */	or. r31, r3, r3
/* 8042C60C 0042954C  93 C1 00 08 */	stw r30, 8(r1)
/* 8042C610 00429550  7C 9E 23 78 */	mr r30, r4
/* 8042C614 00429554  41 82 00 A8 */	beq .L_8042C6BC
/* 8042C618 00429558  3C 60 80 4F */	lis r3, __vt__14WipeOutInFader@ha
/* 8042C61C 0042955C  34 1F 00 4C */	addic. r0, r31, 0x4c
/* 8042C620 00429560  38 03 BF 0C */	addi r0, r3, __vt__14WipeOutInFader@l
/* 8042C624 00429564  90 1F 00 00 */	stw r0, 0(r31)
/* 8042C628 00429568  41 82 00 30 */	beq .L_8042C658
/* 8042C62C 0042956C  3C 60 80 4F */	lis r3, __vt__11WipeInFader@ha
/* 8042C630 00429570  34 1F 00 4C */	addic. r0, r31, 0x4c
/* 8042C634 00429574  38 03 BF 5C */	addi r0, r3, __vt__11WipeInFader@l
/* 8042C638 00429578  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8042C63C 0042957C  41 82 00 1C */	beq .L_8042C658
/* 8042C640 00429580  3C 80 80 4F */	lis r4, __vt__8WipeBase@ha
/* 8042C644 00429584  38 7F 00 4C */	addi r3, r31, 0x4c
/* 8042C648 00429588  38 04 BF 84 */	addi r0, r4, __vt__8WipeBase@l
/* 8042C64C 0042958C  38 80 00 00 */	li r4, 0
/* 8042C650 00429590  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 8042C654 00429594  4B FE 4F 35 */	bl __dt__5CNodeFv
.L_8042C658:
/* 8042C658 00429598  34 1F 00 24 */	addic. r0, r31, 0x24
/* 8042C65C 0042959C  41 82 00 30 */	beq .L_8042C68C
/* 8042C660 004295A0  3C 60 80 4F */	lis r3, __vt__12WipeOutFader@ha
/* 8042C664 004295A4  34 1F 00 24 */	addic. r0, r31, 0x24
/* 8042C668 004295A8  38 03 BF 34 */	addi r0, r3, __vt__12WipeOutFader@l
/* 8042C66C 004295AC  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8042C670 004295B0  41 82 00 1C */	beq .L_8042C68C
/* 8042C674 004295B4  3C 80 80 4F */	lis r4, __vt__8WipeBase@ha
/* 8042C678 004295B8  38 7F 00 24 */	addi r3, r31, 0x24
/* 8042C67C 004295BC  38 04 BF 84 */	addi r0, r4, __vt__8WipeBase@l
/* 8042C680 004295C0  38 80 00 00 */	li r4, 0
/* 8042C684 004295C4  90 1F 00 24 */	stw r0, 0x24(r31)
/* 8042C688 004295C8  4B FE 4F 01 */	bl __dt__5CNodeFv
.L_8042C68C:
/* 8042C68C 004295CC  28 1F 00 00 */	cmplwi r31, 0
/* 8042C690 004295D0  41 82 00 1C */	beq .L_8042C6AC
/* 8042C694 004295D4  3C 80 80 4F */	lis r4, __vt__8WipeBase@ha
/* 8042C698 004295D8  7F E3 FB 78 */	mr r3, r31
/* 8042C69C 004295DC  38 04 BF 84 */	addi r0, r4, __vt__8WipeBase@l
/* 8042C6A0 004295E0  38 80 00 00 */	li r4, 0
/* 8042C6A4 004295E4  90 1F 00 00 */	stw r0, 0(r31)
/* 8042C6A8 004295E8  4B FE 4E E1 */	bl __dt__5CNodeFv
.L_8042C6AC:
/* 8042C6AC 004295EC  7F C0 07 35 */	extsh. r0, r30
/* 8042C6B0 004295F0  40 81 00 0C */	ble .L_8042C6BC
/* 8042C6B4 004295F4  7F E3 FB 78 */	mr r3, r31
/* 8042C6B8 004295F8  4B BF 79 FD */	bl __dl__FPv
.L_8042C6BC:
/* 8042C6BC 004295FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8042C6C0 00429600  7F E3 FB 78 */	mr r3, r31
/* 8042C6C4 00429604  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8042C6C8 00429608  83 C1 00 08 */	lwz r30, 8(r1)
/* 8042C6CC 0042960C  7C 08 03 A6 */	mtlr r0
/* 8042C6D0 00429610  38 21 00 10 */	addi r1, r1, 0x10
/* 8042C6D4 00429614  4E 80 00 20 */	blr 

__sinit_wipe_cpp: # static initializer
/* 8042C6D8 00429618  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8042C6DC 0042961C  38 00 FF FF */	li r0, -1
/* 8042C6E0 00429620  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8042C6E4 00429624  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8042C6E8 00429628  90 0D 9B 40 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8042C6EC 0042962C  D4 03 BE D8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8042C6F0 00429630  D0 0D 9B 44 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8042C6F4 00429634  D0 03 00 04 */	stfs f0, 4(r3)
/* 8042C6F8 00429638  D0 03 00 08 */	stfs f0, 8(r3)
/* 8042C6FC 0042963C  4E 80 00 20 */	blr 
