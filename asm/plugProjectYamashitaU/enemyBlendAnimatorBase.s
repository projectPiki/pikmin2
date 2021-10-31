.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
.4byte __sinit_enemyBlendAnimatorBase_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q28SysShape14BlendLinearFun
__vt__Q28SysShape14BlendLinearFun:
	.4byte 0
	.4byte 0
	.4byte getValue__Q28SysShape14BlendLinearFunFf
.global __vt__Q24Game22EnemyBlendAnimatorBase
__vt__Q24Game22EnemyBlendAnimatorBase:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game22EnemyBlendAnimatorBaseFv
	.4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
	.4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
	.4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
	.4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
	.4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
	.4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
	.4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
.global __vt__Q28SysShape18BlendQuadraticFunc
__vt__Q28SysShape18BlendQuadraticFunc:
	.4byte 0
	.4byte 0
	.4byte getValue__Q28SysShape18BlendQuadraticFuncFf

.section .sbss # 0x80514D80 - 0x80516360
.balign 0x8
.global sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase
sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase:
	.skip 0x4
.global sBlendQuadraticFun__Q24Game22EnemyBlendAnimatorBase
sBlendQuadraticFun__Q24Game22EnemyBlendAnimatorBase:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_80518118
lbl_80518118:
	.4byte 0x00000000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q24Game22EnemyBlendAnimatorBaseFv
__ct__Q24Game22EnemyBlendAnimatorBaseFv:
/* 8012E0E8 0012B028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012E0EC 0012B02C  7C 08 02 A6 */	mflr r0
/* 8012E0F0 0012B030  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012E0F4 0012B034  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8012E0F8 0012B038  7C 7F 1B 78 */	mr r31, r3
/* 8012E0FC 0012B03C  4B FF 98 79 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 8012E100 0012B040  3C 80 80 4B */	lis r4, __vt__Q24Game22EnemyBlendAnimatorBase@ha
/* 8012E104 0012B044  38 7F 00 10 */	addi r3, r31, 0x10
/* 8012E108 0012B048  38 04 F8 24 */	addi r0, r4, __vt__Q24Game22EnemyBlendAnimatorBase@l
/* 8012E10C 0012B04C  90 1F 00 00 */	stw r0, 0(r31)
/* 8012E110 0012B050  48 2F B1 15 */	bl __ct__Q28SysShape13BlendAnimatorFv
/* 8012E114 0012B054  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012E118 0012B058  7F E3 FB 78 */	mr r3, r31
/* 8012E11C 0012B05C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8012E120 0012B060  7C 08 03 A6 */	mtlr r0
/* 8012E124 0012B064  38 21 00 10 */	addi r1, r1, 0x10
/* 8012E128 0012B068  4E 80 00 20 */	blr 

.global setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr:
/* 8012E12C 0012B06C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012E130 0012B070  7C 08 02 A6 */	mflr r0
/* 8012E134 0012B074  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E138 0012B078  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012E13C 0012B07C  48 2F B1 69 */	bl setAnimMgr__Q28SysShape13BlendAnimatorFPQ28SysShape7AnimMgr
/* 8012E140 0012B080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012E144 0012B084  7C 08 03 A6 */	mtlr r0
/* 8012E148 0012B088  38 21 00 10 */	addi r1, r1, 0x10
/* 8012E14C 0012B08C  4E 80 00 20 */	blr 

.global getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
getAnimator__Q24Game22EnemyBlendAnimatorBaseFv:
/* 8012E150 0012B090  38 63 00 14 */	addi r3, r3, 0x14
/* 8012E154 0012B094  4E 80 00 20 */	blr 

.global getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
getAnimator__Q24Game22EnemyBlendAnimatorBaseFi:
/* 8012E158 0012B098  1C 84 00 1C */	mulli r4, r4, 0x1c
/* 8012E15C 0012B09C  7C 60 1B 78 */	mr r0, r3
/* 8012E160 0012B0A0  38 64 00 14 */	addi r3, r4, 0x14
/* 8012E164 0012B0A4  7C 60 1A 14 */	add r3, r0, r3
/* 8012E168 0012B0A8  4E 80 00 20 */	blr 

.global startBlend__Q24Game22EnemyBlendAnimatorBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
startBlend__Q24Game22EnemyBlendAnimatorBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener:
/* 8012E16C 0012B0AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8012E170 0012B0B0  7C 08 02 A6 */	mflr r0
/* 8012E174 0012B0B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8012E178 0012B0B8  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 8012E17C 0012B0BC  FF E0 08 90 */	fmr f31, f1
/* 8012E180 0012B0C0  BF 61 00 14 */	stmw r27, 0x14(r1)
/* 8012E184 0012B0C4  7C 9C 23 78 */	mr r28, r4
/* 8012E188 0012B0C8  7C 7B 1B 78 */	mr r27, r3
/* 8012E18C 0012B0CC  7C BD 2B 78 */	mr r29, r5
/* 8012E190 0012B0D0  7C DE 33 78 */	mr r30, r6
/* 8012E194 0012B0D4  7C FF 3B 78 */	mr r31, r7
/* 8012E198 0012B0D8  38 80 00 00 */	li r4, 0
/* 8012E19C 0012B0DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8012E1A0 0012B0E0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012E1A4 0012B0E4  7D 89 03 A6 */	mtctr r12
/* 8012E1A8 0012B0E8  4E 80 04 21 */	bctrl 
/* 8012E1AC 0012B0EC  7F 84 E3 78 */	mr r4, r28
/* 8012E1B0 0012B0F0  38 A0 00 00 */	li r5, 0
/* 8012E1B4 0012B0F4  48 2F AA D5 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8012E1B8 0012B0F8  7F 63 DB 78 */	mr r3, r27
/* 8012E1BC 0012B0FC  38 80 00 01 */	li r4, 1
/* 8012E1C0 0012B100  81 9B 00 00 */	lwz r12, 0(r27)
/* 8012E1C4 0012B104  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8012E1C8 0012B108  7D 89 03 A6 */	mtctr r12
/* 8012E1CC 0012B10C  4E 80 04 21 */	bctrl 
/* 8012E1D0 0012B110  7F A4 EB 78 */	mr r4, r29
/* 8012E1D4 0012B114  38 A0 00 00 */	li r5, 0
/* 8012E1D8 0012B118  48 2F AA B1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 8012E1DC 0012B11C  FC 20 F8 90 */	fmr f1, f31
/* 8012E1E0 0012B120  7F C4 F3 78 */	mr r4, r30
/* 8012E1E4 0012B124  7F E5 FB 78 */	mr r5, r31
/* 8012E1E8 0012B128  38 7B 00 10 */	addi r3, r27, 0x10
/* 8012E1EC 0012B12C  48 2F B2 0D */	bl startBlend__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
/* 8012E1F0 0012B130  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 8012E1F4 0012B134  BB 61 00 14 */	lmw r27, 0x14(r1)
/* 8012E1F8 0012B138  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8012E1FC 0012B13C  7C 08 03 A6 */	mtlr r0
/* 8012E200 0012B140  38 21 00 30 */	addi r1, r1, 0x30
/* 8012E204 0012B144  4E 80 00 20 */	blr 

.global endBlend__Q24Game22EnemyBlendAnimatorBaseFv
endBlend__Q24Game22EnemyBlendAnimatorBaseFv:
/* 8012E208 0012B148  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012E20C 0012B14C  7C 08 02 A6 */	mflr r0
/* 8012E210 0012B150  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E214 0012B154  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012E218 0012B158  48 2F B3 3D */	bl endBlend__Q28SysShape13BlendAnimatorFv
/* 8012E21C 0012B15C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012E220 0012B160  7C 08 03 A6 */	mtlr r0
/* 8012E224 0012B164  38 21 00 10 */	addi r1, r1, 0x10
/* 8012E228 0012B168  4E 80 00 20 */	blr 

.global animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff
animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff:
/* 8012E22C 0012B16C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012E230 0012B170  7C 08 02 A6 */	mflr r0
/* 8012E234 0012B174  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012E238 0012B178  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8012E23C 0012B17C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8012E240 0012B180  40 82 00 10 */	bne lbl_8012E250
/* 8012E244 0012B184  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E248 0012B188  48 2F B3 25 */	bl animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
/* 8012E24C 0012B18C  48 00 00 18 */	b lbl_8012E264
lbl_8012E250:
/* 8012E250 0012B190  C0 22 9D B8 */	lfs f1, lbl_80518118@sda21(r2)
/* 8012E254 0012B194  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E258 0012B198  FC 40 08 90 */	fmr f2, f1
/* 8012E25C 0012B19C  FC 60 08 90 */	fmr f3, f1
/* 8012E260 0012B1A0  48 2F B3 0D */	bl animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
lbl_8012E264:
/* 8012E264 0012B1A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012E268 0012B1A8  7C 08 03 A6 */	mtlr r0
/* 8012E26C 0012B1AC  38 21 00 10 */	addi r1, r1, 0x10
/* 8012E270 0012B1B0  4E 80 00 20 */	blr 

.global animate__Q24Game22EnemyBlendAnimatorBaseFf
animate__Q24Game22EnemyBlendAnimatorBaseFf:
/* 8012E274 0012B1B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8012E278 0012B1B8  7C 08 02 A6 */	mflr r0
/* 8012E27C 0012B1BC  3C A0 80 4B */	lis r5, __vt__Q28SysShape13BlendFunction@ha
/* 8012E280 0012B1C0  3C 80 80 4B */	lis r4, __vt__Q28SysShape14BlendLinearFun@ha
/* 8012E284 0012B1C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012E288 0012B1C8  38 05 AD 94 */	addi r0, r5, __vt__Q28SysShape13BlendFunction@l
/* 8012E28C 0012B1CC  90 01 00 08 */	stw r0, 8(r1)
/* 8012E290 0012B1D0  38 04 F8 18 */	addi r0, r4, __vt__Q28SysShape14BlendLinearFun@l
/* 8012E294 0012B1D4  90 01 00 08 */	stw r0, 8(r1)
/* 8012E298 0012B1D8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8012E29C 0012B1DC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8012E2A0 0012B1E0  40 82 00 3C */	bne lbl_8012E2DC
/* 8012E2A4 0012B1E4  40 82 00 1C */	bne lbl_8012E2C0
/* 8012E2A8 0012B1E8  FC 40 08 90 */	fmr f2, f1
/* 8012E2AC 0012B1EC  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E2B0 0012B1F0  FC 60 08 90 */	fmr f3, f1
/* 8012E2B4 0012B1F4  38 81 00 08 */	addi r4, r1, 8
/* 8012E2B8 0012B1F8  48 2F B2 B5 */	bl animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
/* 8012E2BC 0012B1FC  48 00 00 58 */	b lbl_8012E314
lbl_8012E2C0:
/* 8012E2C0 0012B200  C0 22 9D B8 */	lfs f1, lbl_80518118@sda21(r2)
/* 8012E2C4 0012B204  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E2C8 0012B208  38 81 00 08 */	addi r4, r1, 8
/* 8012E2CC 0012B20C  FC 40 08 90 */	fmr f2, f1
/* 8012E2D0 0012B210  FC 60 08 90 */	fmr f3, f1
/* 8012E2D4 0012B214  48 2F B2 99 */	bl animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
/* 8012E2D8 0012B218  48 00 00 3C */	b lbl_8012E314
lbl_8012E2DC:
/* 8012E2DC 0012B21C  40 82 00 20 */	bne lbl_8012E2FC
/* 8012E2E0 0012B220  C0 22 9D B8 */	lfs f1, lbl_80518118@sda21(r2)
/* 8012E2E4 0012B224  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E2E8 0012B228  38 81 00 08 */	addi r4, r1, 8
/* 8012E2EC 0012B22C  FC 40 08 90 */	fmr f2, f1
/* 8012E2F0 0012B230  FC 60 08 90 */	fmr f3, f1
/* 8012E2F4 0012B234  48 2F B2 79 */	bl animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
/* 8012E2F8 0012B238  48 00 00 1C */	b lbl_8012E314
lbl_8012E2FC:
/* 8012E2FC 0012B23C  C0 22 9D B8 */	lfs f1, lbl_80518118@sda21(r2)
/* 8012E300 0012B240  38 63 00 10 */	addi r3, r3, 0x10
/* 8012E304 0012B244  38 81 00 08 */	addi r4, r1, 8
/* 8012E308 0012B248  FC 40 08 90 */	fmr f2, f1
/* 8012E30C 0012B24C  FC 60 08 90 */	fmr f3, f1
/* 8012E310 0012B250  48 2F B2 5D */	bl animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
lbl_8012E314:
/* 8012E314 0012B254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012E318 0012B258  7C 08 03 A6 */	mtlr r0
/* 8012E31C 0012B25C  38 21 00 10 */	addi r1, r1, 0x10
/* 8012E320 0012B260  4E 80 00 20 */	blr 

.global getValue__Q28SysShape14BlendLinearFunFf
getValue__Q28SysShape14BlendLinearFunFf:
/* 8012E324 0012B264  4E 80 00 20 */	blr 

.global __sinit_enemyBlendAnimatorBase_cpp
__sinit_enemyBlendAnimatorBase_cpp:
/* 8012E328 0012B268  3C 80 80 4B */	lis r4, __vt__Q28SysShape14BlendLinearFun@ha
/* 8012E32C 0012B26C  3C 60 80 4B */	lis r3, __vt__Q28SysShape18BlendQuadraticFunc@ha
/* 8012E330 0012B270  38 84 F8 18 */	addi r4, r4, __vt__Q28SysShape14BlendLinearFun@l
/* 8012E334 0012B274  38 03 F8 4C */	addi r0, r3, __vt__Q28SysShape18BlendQuadraticFunc@l
/* 8012E338 0012B278  90 8D 92 40 */	stw r4, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21(r13)
/* 8012E33C 0012B27C  90 0D 92 44 */	stw r0, sBlendQuadraticFun__Q24Game22EnemyBlendAnimatorBase@sda21(r13)
/* 8012E340 0012B280  4E 80 00 20 */	blr 

.global getValue__Q28SysShape18BlendQuadraticFuncFf
getValue__Q28SysShape18BlendQuadraticFuncFf:
/* 8012E344 0012B284  EC 21 00 72 */	fmuls f1, f1, f1
/* 8012E348 0012B288  4E 80 00 20 */	blr 
