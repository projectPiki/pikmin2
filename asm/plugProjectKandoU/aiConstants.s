.include "macros.inc"
.section .text, "ax" # 0x800056C0 - 0x80472F00
.global __ct__Q24Game11AIConstantsFv
__ct__Q24Game11AIConstantsFv:
/* 801B62B0 001B31F0  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801B62B4 001B31F4  7C 08 02 A6 */	mflr r0
/* 801B62B8 001B31F8  3C 80 80 48 */	lis r4, lbl_8047FC28@ha
/* 801B62BC 001B31FC  90 01 04 44 */	stw r0, 0x444(r1)
/* 801B62C0 001B3200  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801B62C4 001B3204  7C 7F 1B 78 */	mr r31, r3
/* 801B62C8 001B3208  93 C1 04 38 */	stw r30, 0x438(r1)
/* 801B62CC 001B320C  3B C4 FC 28 */	addi r30, r4, lbl_8047FC28@l
/* 801B62D0 001B3210  38 9E 00 00 */	addi r4, r30, 0
/* 801B62D4 001B3214  48 26 5D 75 */	bl __ct__13TagParametersFPc
/* 801B62D8 001B3218  3C 60 80 4B */	lis r3, __vt__Q24Game11AIConstants@ha
/* 801B62DC 001B321C  7F E4 FB 78 */	mr r4, r31
/* 801B62E0 001B3220  38 03 5C 10 */	addi r0, r3, __vt__Q24Game11AIConstants@l
/* 801B62E4 001B3224  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801B62E8 001B3228  90 1F 00 00 */	stw r0, 0(r31)
/* 801B62EC 001B322C  38 A2 B0 C8 */	addi r5, r2, lbl_80519428@sda21
/* 801B62F0 001B3230  48 26 5D AD */	bl __ct__7TagParmFP13TagParametersPc
/* 801B62F4 001B3234  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<f>"@ha
/* 801B62F8 001B3238  7F E4 FB 78 */	mr r4, r31
/* 801B62FC 001B323C  38 03 5A F8 */	addi r0, r3, "__vt__14PrimTagParm<f>"@l
/* 801B6300 001B3240  38 7F 00 2C */	addi r3, r31, 0x2c
/* 801B6304 001B3244  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801B6308 001B3248  38 BE 00 0C */	addi r5, r30, 0xc
/* 801B630C 001B324C  48 26 5D 91 */	bl __ct__7TagParmFP13TagParametersPc
/* 801B6310 001B3250  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 801B6314 001B3254  7F E4 FB 78 */	mr r4, r31
/* 801B6318 001B3258  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 801B631C 001B325C  38 7F 00 3C */	addi r3, r31, 0x3c
/* 801B6320 001B3260  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 801B6324 001B3264  38 A2 B0 D0 */	addi r5, r2, lbl_80519430@sda21
/* 801B6328 001B3268  48 26 5D 75 */	bl __ct__7TagParmFP13TagParametersPc
/* 801B632C 001B326C  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 801B6330 001B3270  7F E4 FB 78 */	mr r4, r31
/* 801B6334 001B3274  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 801B6338 001B3278  38 7F 00 4C */	addi r3, r31, 0x4c
/* 801B633C 001B327C  90 1F 00 3C */	stw r0, 0x3c(r31)
/* 801B6340 001B3280  38 BE 00 18 */	addi r5, r30, 0x18
/* 801B6344 001B3284  48 26 5D 59 */	bl __ct__7TagParmFP13TagParametersPc
/* 801B6348 001B3288  3C 80 80 4B */	lis r4, "__vt__14PrimTagParm<f>"@ha
/* 801B634C 001B328C  38 C0 27 10 */	li r6, 0x2710
/* 801B6350 001B3290  38 04 5A F8 */	addi r0, r4, "__vt__14PrimTagParm<f>"@l
/* 801B6354 001B3294  C0 02 B0 D8 */	lfs f0, lbl_80519438@sda21(r2)
/* 801B6358 001B3298  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 801B635C 001B329C  38 80 00 02 */	li r4, 2
/* 801B6360 001B32A0  38 00 00 00 */	li r0, 0
/* 801B6364 001B32A4  38 7E 00 28 */	addi r3, r30, 0x28
/* 801B6368 001B32A8  90 9F 00 38 */	stw r4, 0x38(r31)
/* 801B636C 001B32AC  38 80 00 00 */	li r4, 0
/* 801B6370 001B32B0  38 A0 00 00 */	li r5, 0
/* 801B6374 001B32B4  38 E0 00 00 */	li r7, 0
/* 801B6378 001B32B8  90 DF 00 48 */	stw r6, 0x48(r31)
/* 801B637C 001B32BC  38 C0 00 00 */	li r6, 0
/* 801B6380 001B32C0  39 00 00 02 */	li r8, 2
/* 801B6384 001B32C4  39 20 00 00 */	li r9, 0
/* 801B6388 001B32C8  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 801B638C 001B32CC  39 40 00 00 */	li r10, 0
/* 801B6390 001B32D0  90 01 00 08 */	stw r0, 8(r1)
/* 801B6394 001B32D4  4B E6 8D F5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801B6398 001B32D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B639C 001B32DC  41 82 00 40 */	beq lbl_801B63DC
/* 801B63A0 001B32E0  7F C4 F3 78 */	mr r4, r30
/* 801B63A4 001B32E4  38 61 00 10 */	addi r3, r1, 0x10
/* 801B63A8 001B32E8  38 A0 FF FF */	li r5, -1
/* 801B63AC 001B32EC  48 25 F5 4D */	bl __ct__9RamStreamFPvi
/* 801B63B0 001B32F0  38 00 00 01 */	li r0, 1
/* 801B63B4 001B32F4  2C 00 00 01 */	cmpwi r0, 1
/* 801B63B8 001B32F8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801B63BC 001B32FC  40 82 00 0C */	bne lbl_801B63C8
/* 801B63C0 001B3300  38 00 00 00 */	li r0, 0
/* 801B63C4 001B3304  90 01 04 24 */	stw r0, 0x424(r1)
lbl_801B63C8:
/* 801B63C8 001B3308  7F E3 FB 78 */	mr r3, r31
/* 801B63CC 001B330C  38 81 00 10 */	addi r4, r1, 0x10
/* 801B63D0 001B3310  48 26 5D 05 */	bl read__13TagParametersFR6Stream
/* 801B63D4 001B3314  7F C3 F3 78 */	mr r3, r30
/* 801B63D8 001B3318  4B E6 DD 01 */	bl __dla__FPv
lbl_801B63DC:
/* 801B63DC 001B331C  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801B63E0 001B3320  7F E3 FB 78 */	mr r3, r31
/* 801B63E4 001B3324  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801B63E8 001B3328  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 801B63EC 001B332C  7C 08 03 A6 */	mtlr r0
/* 801B63F0 001B3330  38 21 04 40 */	addi r1, r1, 0x440
/* 801B63F4 001B3334  4E 80 00 20 */	blr 

.global __dt__Q24Game11AIConstantsFv
__dt__Q24Game11AIConstantsFv:
/* 801B63F8 001B3338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801B63FC 001B333C  7C 08 02 A6 */	mflr r0
/* 801B6400 001B3340  90 01 00 14 */	stw r0, 0x14(r1)
/* 801B6404 001B3344  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801B6408 001B3348  7C 9F 23 78 */	mr r31, r4
/* 801B640C 001B334C  93 C1 00 08 */	stw r30, 8(r1)
/* 801B6410 001B3350  7C 7E 1B 79 */	or. r30, r3, r3
/* 801B6414 001B3354  41 82 00 38 */	beq lbl_801B644C
/* 801B6418 001B3358  3C 80 80 4B */	lis r4, __vt__Q24Game11AIConstants@ha
/* 801B641C 001B335C  38 04 5C 10 */	addi r0, r4, __vt__Q24Game11AIConstants@l
/* 801B6420 001B3360  90 1E 00 00 */	stw r0, 0(r30)
/* 801B6424 001B3364  41 82 00 18 */	beq lbl_801B643C
/* 801B6428 001B3368  3C A0 80 4B */	lis r5, __vt__13TagParameters@ha
/* 801B642C 001B336C  38 80 00 00 */	li r4, 0
/* 801B6430 001B3370  38 05 5B 10 */	addi r0, r5, __vt__13TagParameters@l
/* 801B6434 001B3374  90 1E 00 00 */	stw r0, 0(r30)
/* 801B6438 001B3378  48 25 B1 51 */	bl __dt__5CNodeFv
lbl_801B643C:
/* 801B643C 001B337C  7F E0 07 35 */	extsh. r0, r31
/* 801B6440 001B3380  40 81 00 0C */	ble lbl_801B644C
/* 801B6444 001B3384  7F C3 F3 78 */	mr r3, r30
/* 801B6448 001B3388  4B E6 DC 6D */	bl __dl__FPv
lbl_801B644C:
/* 801B644C 001B338C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801B6450 001B3390  7F C3 F3 78 */	mr r3, r30
/* 801B6454 001B3394  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801B6458 001B3398  83 C1 00 08 */	lwz r30, 8(r1)
/* 801B645C 001B339C  7C 08 03 A6 */	mtlr r0
/* 801B6460 001B33A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801B6464 001B33A4  4E 80 00 20 */	blr 

.section .rodata # 0x804732E0 - 0x8049E220
.balign 8
lbl_8047FC28:
	.asciz "aiConstants"
.balign 4
lbl_8047FC34:
	.asciz "dopecount"
.balign 4
lbl_8047FC40:
	.asciz "camera_angle"
.balign 4
lbl_8047FC50:
	.asciz "/user/Kando/aiConstants.txt"

.section .data, "wa" # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q24Game11AIConstants
__vt__Q24Game11AIConstants:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game11AIConstantsFv
	.4byte getChildCount__5CNodeFv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global _aiConstants__4Game
_aiConstants__4Game:
	.skip 8

.section .sdata2, "a" # 0x80516360 - 0x80520E40
.balign 8
lbl_80519428:
	.asciz "gravity"
.balign 4
lbl_80519430:
	.asciz "debt"
.balign 4
lbl_80519438:
	.float 180.0
