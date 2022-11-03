.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global j2dDefaultTexCoordInfo
j2dDefaultTexCoordInfo:
	.4byte 0x01043C00
	.4byte 0x01053C00
	.4byte 0x01063C00
	.4byte 0x01073C00
	.4byte 0x01083C00
	.4byte 0x01093C00
	.4byte 0x010A3C00
	.4byte 0x010B3C00
.global j2dDefaultTexMtxInfo
j2dDefaultTexMtxInfo:
	.4byte 0x0101FFFF
	.float 0.5
	.float 0.5
	.float 0.0
	.float 1.0
	.float 1.0
	.float 0.0
	.4byte 0x00000000
	.4byte 0x00000000
.global j2dDefaultIndTexMtxInfo
j2dDefaultIndTexMtxInfo:
	.float 0.5
	.float 0.0
	.float 0.0
	.float 0.0
	.float 0.5
	.4byte 0x00000000
	.4byte 0x01000000
.global j2dDefaultTevStageInfo
j2dDefaultTevStageInfo:
	.4byte 0x040A0F0F
	.4byte 0x00000000
	.4byte 0x01000507
	.4byte 0x07000000
	.4byte 0x00010000
.global j2dDefaultIndTevStageInfo
j2dDefaultIndTevStageInfo:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_805168F8: # pi
	.float 3.1415927
lbl_805168FC:
	.float 180.0
lbl_80516900:
	.float 0.0
lbl_80516904:
	.float 1.0
lbl_80516908:
	.float 0.5
.global j2dDefaultColInfo
j2dDefaultColInfo:
	.4byte 0xFFFFFFFF
.global j2dDefaultTevOrderInfoNull
j2dDefaultTevOrderInfoNull:
	.4byte 0xFFFFFF00
.global j2dDefaultIndTexOrderNull
j2dDefaultIndTexOrderNull:
	.4byte 0xFFFF0000
.global j2dDefaultTevColor
j2dDefaultTevColor:
	.4byte 0x00FF00FF
	.4byte 0x00FF00FF
.global j2dDefaultIndTexCoordScaleInfo
j2dDefaultIndTexCoordScaleInfo:
	.4byte 0x00000000
.global j2dDefaultTevKColor
j2dDefaultTevKColor:
	.4byte 0xFFFFFFFF
.global j2dDefaultTevSwapMode
j2dDefaultTevSwapMode:
	.4byte 0x00000000
.global j2dDefaultTevSwapModeTable
j2dDefaultTevSwapModeTable:
	.4byte 0x00010203
.global j2dDefaultBlendInfo
j2dDefaultBlendInfo:
	.4byte 0x01040505
.global j2dDefaultDither
j2dDefaultDither:
	.4byte 0x00000000
.global j2dDefaultColorChanInfo
j2dDefaultColorChanInfo:
	.4byte 0x00030000
.global j2dDefaultTevSwapTable
j2dDefaultTevSwapTable:
	.2byte 0x1B00
.global j2dDefaultAlphaCmp
j2dDefaultAlphaCmp:
	.2byte 0x00E7

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global load__9J2DTexMtxFUl
load__9J2DTexMtxFUl:
/* 8005921C 0005615C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80059220 00056160  7C 08 02 A6 */	mflr r0
/* 80059224 00056164  1C 84 00 03 */	mulli r4, r4, 3
/* 80059228 00056168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005922C 0005616C  88 A3 00 00 */	lbz r5, 0(r3)
/* 80059230 00056170  38 63 00 24 */	addi r3, r3, 0x24
/* 80059234 00056174  38 84 00 1E */	addi r4, r4, 0x1e
/* 80059238 00056178  48 09 04 15 */	bl GXLoadTexMtxImm
/* 8005923C 0005617C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80059240 00056180  7C 08 03 A6 */	mtlr r0
/* 80059244 00056184  38 21 00 10 */	addi r1, r1, 0x10
/* 80059248 00056188  4E 80 00 20 */	blr 

.global calc__9J2DTexMtxFv
calc__9J2DTexMtxFv:
/* 8005924C 0005618C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80059250 00056190  7C 08 02 A6 */	mflr r0
/* 80059254 00056194  90 01 00 24 */	stw r0, 0x24(r1)
/* 80059258 00056198  88 03 00 01 */	lbz r0, 1(r3)
/* 8005925C 0005619C  28 00 00 00 */	cmplwi r0, 0
/* 80059260 000561A0  40 82 00 30 */	bne .L_80059290
/* 80059264 000561A4  80 E3 00 04 */	lwz r7, 4(r3)
/* 80059268 000561A8  38 83 00 10 */	addi r4, r3, 0x10
/* 8005926C 000561AC  80 03 00 08 */	lwz r0, 8(r3)
/* 80059270 000561B0  38 A1 00 08 */	addi r5, r1, 8
/* 80059274 000561B4  38 C3 00 24 */	addi r6, r3, 0x24
/* 80059278 000561B8  90 E1 00 08 */	stw r7, 8(r1)
/* 8005927C 000561BC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80059280 000561C0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80059284 000561C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80059288 000561C8  48 00 00 2D */	bl getTextureMtx__9J2DTexMtxFRC17J2DTextureSRTInfo3VecPA4_f
/* 8005928C 000561CC  48 00 00 18 */	b .L_800592A4
.L_80059290:
/* 80059290 000561D0  28 00 00 01 */	cmplwi r0, 1
/* 80059294 000561D4  40 82 00 10 */	bne .L_800592A4
/* 80059298 000561D8  38 83 00 10 */	addi r4, r3, 0x10
/* 8005929C 000561DC  38 A3 00 24 */	addi r5, r3, 0x24
/* 800592A0 000561E0  48 00 01 A5 */	bl getTextureMtxMaya__9J2DTexMtxFRC17J2DTextureSRTInfoPA4_f
.L_800592A4:
/* 800592A4 000561E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800592A8 000561E8  7C 08 03 A6 */	mtlr r0
/* 800592AC 000561EC  38 21 00 20 */	addi r1, r1, 0x20
/* 800592B0 000561F0  4E 80 00 20 */	blr 

.global getTextureMtx__9J2DTexMtxFRC17J2DTextureSRTInfo3VecPA4_f
getTextureMtx__9J2DTexMtxFRC17J2DTextureSRTInfo3VecPA4_f:
/* 800592B4 000561F4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 800592B8 000561F8  7C 08 02 A6 */	mflr r0
/* 800592BC 000561FC  90 01 00 44 */	stw r0, 0x44(r1)
/* 800592C0 00056200  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 800592C4 00056204  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 800592C8 00056208  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 800592CC 0005620C  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 800592D0 00056210  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800592D4 00056214  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800592D8 00056218  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800592DC 0005621C  7C 9D 23 78 */	mr r29, r4
/* 800592E0 00056220  C0 42 85 98 */	lfs f2, lbl_805168F8@sda21(r2)
/* 800592E4 00056224  C0 24 00 08 */	lfs f1, 8(r4)
/* 800592E8 00056228  7C BE 2B 78 */	mr r30, r5
/* 800592EC 0005622C  C0 02 85 9C */	lfs f0, lbl_805168FC@sda21(r2)
/* 800592F0 00056230  7C DF 33 78 */	mr r31, r6
/* 800592F4 00056234  EC 22 00 72 */	fmuls f1, f2, f1
/* 800592F8 00056238  EF E1 00 24 */	fdivs f31, f1, f0
/* 800592FC 0005623C  FC 20 F8 90 */	fmr f1, f31
/* 80059300 00056240  48 07 5F B5 */	bl cos
/* 80059304 00056244  FC 40 08 18 */	frsp f2, f1
/* 80059308 00056248  C0 1D 00 00 */	lfs f0, 0(r29)
/* 8005930C 0005624C  FC 20 F8 90 */	fmr f1, f31
/* 80059310 00056250  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80059314 00056254  D0 1F 00 00 */	stfs f0, 0(r31)
/* 80059318 00056258  48 07 65 05 */	bl sin
/* 8005931C 0005625C  C0 5D 00 00 */	lfs f2, 0(r29)
/* 80059320 00056260  FC 60 08 18 */	frsp f3, f1
/* 80059324 00056264  C0 02 85 A0 */	lfs f0, lbl_80516900@sda21(r2)
/* 80059328 00056268  FC 20 F8 90 */	fmr f1, f31
/* 8005932C 0005626C  FC 40 10 50 */	fneg f2, f2
/* 80059330 00056270  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80059334 00056274  D0 5F 00 04 */	stfs f2, 4(r31)
/* 80059338 00056278  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8005933C 0005627C  48 07 64 E1 */	bl sin
/* 80059340 00056280  FF C0 08 18 */	frsp f30, f1
/* 80059344 00056284  FC 20 F8 90 */	fmr f1, f31
/* 80059348 00056288  48 07 5F 6D */	bl cos
/* 8005934C 0005628C  C0 1D 00 00 */	lfs f0, 0(r29)
/* 80059350 00056290  FC A0 08 18 */	frsp f5, f1
/* 80059354 00056294  C0 5E 00 04 */	lfs f2, 4(r30)
/* 80059358 00056298  FC 20 F8 90 */	fmr f1, f31
/* 8005935C 0005629C  FC 60 00 50 */	fneg f3, f0
/* 80059360 000562A0  C0 DE 00 00 */	lfs f6, 0(r30)
/* 80059364 000562A4  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80059368 000562A8  C0 9D 00 0C */	lfs f4, 0xc(r29)
/* 8005936C 000562AC  EC 63 01 72 */	fmuls f3, f3, f5
/* 80059370 000562B0  EC 02 00 32 */	fmuls f0, f2, f0
/* 80059374 000562B4  EC 06 00 FA */	fmadds f0, f6, f3, f0
/* 80059378 000562B8  EC 06 00 2A */	fadds f0, f6, f0
/* 8005937C 000562BC  EC 04 00 2A */	fadds f0, f4, f0
/* 80059380 000562C0  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 80059384 000562C4  48 07 64 99 */	bl sin
/* 80059388 000562C8  FC 40 08 18 */	frsp f2, f1
/* 8005938C 000562CC  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80059390 000562D0  FC 20 F8 90 */	fmr f1, f31
/* 80059394 000562D4  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80059398 000562D8  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 8005939C 000562DC  48 07 5F 19 */	bl cos
/* 800593A0 000562E0  FC 60 08 18 */	frsp f3, f1
/* 800593A4 000562E4  C0 5D 00 04 */	lfs f2, 4(r29)
/* 800593A8 000562E8  C0 02 85 A0 */	lfs f0, lbl_80516900@sda21(r2)
/* 800593AC 000562EC  FC 20 F8 90 */	fmr f1, f31
/* 800593B0 000562F0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 800593B4 000562F4  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 800593B8 000562F8  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 800593BC 000562FC  48 07 5E F9 */	bl cos
/* 800593C0 00056300  FF C0 08 18 */	frsp f30, f1
/* 800593C4 00056304  FC 20 F8 90 */	fmr f1, f31
/* 800593C8 00056308  48 07 64 55 */	bl sin
/* 800593CC 0005630C  C0 1D 00 04 */	lfs f0, 4(r29)
/* 800593D0 00056310  FC 60 08 18 */	frsp f3, f1
/* 800593D4 00056314  C0 DE 00 04 */	lfs f6, 4(r30)
/* 800593D8 00056318  FC 40 00 50 */	fneg f2, f0
/* 800593DC 0005631C  C0 9E 00 00 */	lfs f4, 0(r30)
/* 800593E0 00056320  EC 00 07 B2 */	fmuls f0, f0, f30
/* 800593E4 00056324  C0 BD 00 10 */	lfs f5, 0x10(r29)
/* 800593E8 00056328  C0 22 85 A0 */	lfs f1, lbl_80516900@sda21(r2)
/* 800593EC 0005632C  EC 62 00 F2 */	fmuls f3, f2, f3
/* 800593F0 00056330  EC 46 00 32 */	fmuls f2, f6, f0
/* 800593F4 00056334  C0 02 85 A4 */	lfs f0, lbl_80516904@sda21(r2)
/* 800593F8 00056338  EC 44 10 F8 */	fmsubs f2, f4, f3, f2
/* 800593FC 0005633C  EC 46 10 2A */	fadds f2, f6, f2
/* 80059400 00056340  EC 45 10 2A */	fadds f2, f5, f2
/* 80059404 00056344  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 80059408 00056348  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 8005940C 0005634C  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 80059410 00056350  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80059414 00056354  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 80059418 00056358  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8005941C 0005635C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80059420 00056360  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 80059424 00056364  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 80059428 00056368  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8005942C 0005636C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80059430 00056370  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80059434 00056374  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80059438 00056378  7C 08 03 A6 */	mtlr r0
/* 8005943C 0005637C  38 21 00 40 */	addi r1, r1, 0x40
/* 80059440 00056380  4E 80 00 20 */	blr 

.global getTextureMtxMaya__9J2DTexMtxFRC17J2DTextureSRTInfoPA4_f
getTextureMtxMaya__9J2DTexMtxFRC17J2DTextureSRTInfoPA4_f:
/* 80059444 00056384  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80059448 00056388  7C 08 02 A6 */	mflr r0
/* 8005944C 0005638C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80059450 00056390  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80059454 00056394  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80059458 00056398  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 8005945C 0005639C  F3 C1 00 18 */	psq_st f30, 24(r1), 0, qr0
/* 80059460 000563A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80059464 000563A4  93 C1 00 08 */	stw r30, 8(r1)
/* 80059468 000563A8  7C 9E 23 78 */	mr r30, r4
/* 8005946C 000563AC  C0 42 85 98 */	lfs f2, lbl_805168F8@sda21(r2)
/* 80059470 000563B0  C0 24 00 08 */	lfs f1, 8(r4)
/* 80059474 000563B4  7C BF 2B 78 */	mr r31, r5
/* 80059478 000563B8  C0 02 85 9C */	lfs f0, lbl_805168FC@sda21(r2)
/* 8005947C 000563BC  EC 22 00 72 */	fmuls f1, f2, f1
/* 80059480 000563C0  EF E1 00 24 */	fdivs f31, f1, f0
/* 80059484 000563C4  FC 20 F8 90 */	fmr f1, f31
/* 80059488 000563C8  48 07 5E 2D */	bl cos
/* 8005948C 000563CC  FC 40 08 18 */	frsp f2, f1
/* 80059490 000563D0  C0 1E 00 00 */	lfs f0, 0(r30)
/* 80059494 000563D4  FC 20 F8 90 */	fmr f1, f31
/* 80059498 000563D8  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8005949C 000563DC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 800594A0 000563E0  48 07 63 7D */	bl sin
/* 800594A4 000563E4  FC 60 08 18 */	frsp f3, f1
/* 800594A8 000563E8  C0 5E 00 04 */	lfs f2, 4(r30)
/* 800594AC 000563EC  C0 02 85 A0 */	lfs f0, lbl_80516900@sda21(r2)
/* 800594B0 000563F0  FC 20 F8 90 */	fmr f1, f31
/* 800594B4 000563F4  EC 42 00 F2 */	fmuls f2, f2, f3
/* 800594B8 000563F8  D0 5F 00 04 */	stfs f2, 4(r31)
/* 800594BC 000563FC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 800594C0 00056400  48 07 63 5D */	bl sin
/* 800594C4 00056404  FF C0 08 18 */	frsp f30, f1
/* 800594C8 00056408  FC 20 F8 90 */	fmr f1, f31
/* 800594CC 0005640C  48 07 5D E9 */	bl cos
/* 800594D0 00056410  C0 82 85 A8 */	lfs f4, lbl_80516908@sda21(r2)
/* 800594D4 00056414  FC A0 08 18 */	frsp f5, f1
/* 800594D8 00056418  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 800594DC 0005641C  FC 20 F8 90 */	fmr f1, f31
/* 800594E0 00056420  C0 7E 00 0C */	lfs f3, 0xc(r30)
/* 800594E4 00056424  EC 40 20 28 */	fsubs f2, f0, f4
/* 800594E8 00056428  C0 1E 00 04 */	lfs f0, 4(r30)
/* 800594EC 0005642C  EC 63 20 28 */	fsubs f3, f3, f4
/* 800594F0 00056430  EC 02 00 2A */	fadds f0, f2, f0
/* 800594F4 00056434  EC 00 07 B2 */	fmuls f0, f0, f30
/* 800594F8 00056438  EC 03 01 78 */	fmsubs f0, f3, f5, f0
/* 800594FC 0005643C  EC 04 00 2A */	fadds f0, f4, f0
/* 80059500 00056440  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 80059504 00056444  48 07 63 19 */	bl sin
/* 80059508 00056448  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8005950C 0005644C  FC 40 08 18 */	frsp f2, f1
/* 80059510 00056450  FC 20 F8 90 */	fmr f1, f31
/* 80059514 00056454  FC 00 00 50 */	fneg f0, f0
/* 80059518 00056458  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8005951C 0005645C  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 80059520 00056460  48 07 5D 95 */	bl cos
/* 80059524 00056464  FC 60 08 18 */	frsp f3, f1
/* 80059528 00056468  C0 5E 00 04 */	lfs f2, 4(r30)
/* 8005952C 0005646C  C0 02 85 A0 */	lfs f0, lbl_80516900@sda21(r2)
/* 80059530 00056470  FC 20 F8 90 */	fmr f1, f31
/* 80059534 00056474  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80059538 00056478  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 8005953C 0005647C  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80059540 00056480  48 07 5D 75 */	bl cos
/* 80059544 00056484  FF C0 08 18 */	frsp f30, f1
/* 80059548 00056488  FC 20 F8 90 */	fmr f1, f31
/* 8005954C 0005648C  48 07 62 D1 */	bl sin
/* 80059550 00056490  C0 A2 85 A8 */	lfs f5, lbl_80516908@sda21(r2)
/* 80059554 00056494  FC C0 08 18 */	frsp f6, f1
/* 80059558 00056498  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 8005955C 0005649C  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80059560 000564A0  EC 60 28 28 */	fsubs f3, f0, f5
/* 80059564 000564A4  C0 5E 00 04 */	lfs f2, 4(r30)
/* 80059568 000564A8  EC 81 28 28 */	fsubs f4, f1, f5
/* 8005956C 000564AC  C0 22 85 A0 */	lfs f1, lbl_80516900@sda21(r2)
/* 80059570 000564B0  C0 02 85 A4 */	lfs f0, lbl_80516904@sda21(r2)
/* 80059574 000564B4  EC 43 10 2A */	fadds f2, f3, f2
/* 80059578 000564B8  FC 60 20 50 */	fneg f3, f4
/* 8005957C 000564BC  EC 42 07 B2 */	fmuls f2, f2, f30
/* 80059580 000564C0  EC 43 11 B8 */	fmsubs f2, f3, f6, f2
/* 80059584 000564C4  EC 45 10 2A */	fadds f2, f5, f2
/* 80059588 000564C8  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 8005958C 000564CC  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 80059590 000564D0  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 80059594 000564D4  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80059598 000564D8  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 8005959C 000564DC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 800595A0 000564E0  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 800595A4 000564E4  E3 C1 00 18 */	psq_l f30, 24(r1), 0, qr0
/* 800595A8 000564E8  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 800595AC 000564EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800595B0 000564F0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800595B4 000564F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 800595B8 000564F8  7C 08 03 A6 */	mtlr r0
/* 800595BC 000564FC  38 21 00 30 */	addi r1, r1, 0x30
/* 800595C0 00056500  4E 80 00 20 */	blr 

.global load__14J2DIndTevStageFUc
load__14J2DIndTevStageFUc:
/* 800595C4 00056504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800595C8 00056508  7C 08 02 A6 */	mflr r0
/* 800595CC 0005650C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800595D0 00056510  81 43 00 00 */	lwz r10, 0(r3)
/* 800595D4 00056514  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 800595D8 00056518  55 40 5F FE */	rlwinm r0, r10, 0xb, 0x1f, 0x1f
/* 800595DC 0005651C  55 44 07 BE */	clrlwi r4, r10, 0x1e
/* 800595E0 00056520  90 01 00 08 */	stw r0, 8(r1)
/* 800595E4 00056524  55 40 57 BE */	rlwinm r0, r10, 0xa, 0x1e, 0x1f
/* 800595E8 00056528  55 45 F7 BE */	rlwinm r5, r10, 0x1e, 0x1e, 0x1f
/* 800595EC 0005652C  55 46 E7 7E */	rlwinm r6, r10, 0x1c, 0x1d, 0x1f
/* 800595F0 00056530  90 01 00 0C */	stw r0, 0xc(r1)
/* 800595F4 00056534  55 47 87 3E */	rlwinm r7, r10, 0x10, 0x1c, 0x1f
/* 800595F8 00056538  55 48 C7 7E */	rlwinm r8, r10, 0x18, 0x1d, 0x1f
/* 800595FC 0005653C  55 49 AF 7E */	rlwinm r9, r10, 0x15, 0x1d, 0x1f
/* 80059600 00056540  55 4A 67 FE */	rlwinm r10, r10, 0xc, 0x1f, 0x1f
/* 80059604 00056544  48 08 E9 3D */	bl GXSetTevIndirect
/* 80059608 00056548  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005960C 0005654C  7C 08 03 A6 */	mtlr r0
/* 80059610 00056550  38 21 00 10 */	addi r1, r1, 0x10
/* 80059614 00056554  4E 80 00 20 */	blr 

.global load__12J2DIndTexMtxFUc
load__12J2DIndTexMtxFUc:
/* 80059618 00056558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005961C 0005655C  7C 08 02 A6 */	mflr r0
/* 80059620 00056560  54 86 06 3E */	clrlwi r6, r4, 0x18
/* 80059624 00056564  7C 64 1B 78 */	mr r4, r3
/* 80059628 00056568  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005962C 0005656C  88 A3 00 18 */	lbz r5, 0x18(r3)
/* 80059630 00056570  38 66 00 01 */	addi r3, r6, 1
/* 80059634 00056574  48 08 E9 79 */	bl GXSetIndTexMtx
/* 80059638 00056578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005963C 0005657C  7C 08 03 A6 */	mtlr r0
/* 80059640 00056580  38 21 00 10 */	addi r1, r1, 0x10
/* 80059644 00056584  4E 80 00 20 */	blr 

.global load__19J2DIndTexCoordScaleFUc
load__19J2DIndTexCoordScaleFUc:
/* 80059648 00056588  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005964C 0005658C  7C 08 02 A6 */	mflr r0
/* 80059650 00056590  7C 65 1B 78 */	mr r5, r3
/* 80059654 00056594  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 80059658 00056598  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005965C 0005659C  88 85 00 00 */	lbz r4, 0(r5)
/* 80059660 000565A0  88 A5 00 01 */	lbz r5, 1(r5)
/* 80059664 000565A4  48 08 EA C1 */	bl GXSetIndTexCoordScale
/* 80059668 000565A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005966C 000565AC  7C 08 03 A6 */	mtlr r0
/* 80059670 000565B0  38 21 00 10 */	addi r1, r1, 0x10
/* 80059674 000565B4  4E 80 00 20 */	blr 

.global load__14J2DIndTexOrderFUc
load__14J2DIndTexOrderFUc:
/* 80059678 000565B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005967C 000565BC  7C 08 02 A6 */	mflr r0
/* 80059680 000565C0  7C 65 1B 78 */	mr r5, r3
/* 80059684 000565C4  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 80059688 000565C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005968C 000565CC  88 85 00 00 */	lbz r4, 0(r5)
/* 80059690 000565D0  88 A5 00 01 */	lbz r5, 1(r5)
/* 80059694 000565D4  48 08 EB D5 */	bl GXSetIndTexOrder
/* 80059698 000565D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8005969C 000565DC  7C 08 03 A6 */	mtlr r0
/* 800596A0 000565E0  38 21 00 10 */	addi r1, r1, 0x10
/* 800596A4 000565E4  4E 80 00 20 */	blr 
