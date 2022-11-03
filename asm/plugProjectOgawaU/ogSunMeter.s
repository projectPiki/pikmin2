.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q32og6Screen8SunMeter
__vt__Q32og6Screen8SunMeter:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og6Screen8SunMeterFv
	.4byte getTypeID__9J2DScreenCFv
	.4byte move__7J2DPaneFff
	.4byte add__7J2DPaneFff
	.4byte resize__7J2DPaneFff
	.4byte setCullBack__7J2DPaneFb
	.4byte setCullBack__7J2DPaneF11_GXCullMode
	.4byte setAlpha__7J2DPaneFUc
	.4byte setConnectParent__7J2DPaneFb
	.4byte calcMtx__9J2DScreenFv
	.4byte update__Q29P2DScreen3MgrFv
	.4byte drawSelf__7J2DPaneFff
	.4byte drawSelf__9J2DScreenFffPA3_A4_f
	.4byte search__9J2DScreenFUx
	.4byte searchUserInfo__9J2DScreenFUx
	.4byte makeMatrix__7J2DPaneFff
	.4byte makeMatrix__7J2DPaneFffff
	.4byte isUsed__9J2DScreenFPC7ResTIMG
	.4byte isUsed__9J2DScreenFPC7ResFONT
	.4byte clearAnmTransform__9J2DScreenFv
	.4byte rewriteAlpha__7J2DPaneFv
	.4byte setAnimation__9J2DScreenFP10J2DAnmBase
	.4byte setAnimation__9J2DScreenFP15J2DAnmTransform
	.4byte setAnimation__9J2DScreenFP11J2DAnmColor
	.4byte setAnimation__9J2DScreenFP16J2DAnmTexPattern
	.4byte setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey
	.4byte setAnimation__9J2DScreenFP15J2DAnmTevRegKey
	.4byte setAnimation__9J2DScreenFP20J2DAnmVisibilityFull
	.4byte setAnimation__9J2DScreenFP14J2DAnmVtxColor
	.4byte animationTransform__7J2DPaneFPC15J2DAnmTransform
	.4byte setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull
	.4byte setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull
	.4byte setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor
	.4byte setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
	.4byte animationPane__7J2DPaneFPC15J2DAnmTransform
	.4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl
	.4byte createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive
	.4byte draw__Q29P2DScreen10Mgr_tuningFR8GraphicsR14J2DGrafContext
.global __vt__Q32og6Screen17CallBack_SunMeter
__vt__Q32og6Screen17CallBack_SunMeter:
	.4byte 0
	.4byte 0
	.4byte __dt__Q32og6Screen17CallBack_SunMeterFv
	.4byte getChildCount__5CNodeFv
	.4byte update__Q32og6Screen17CallBack_SunMeterFv
	.4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
	.4byte doInit__Q29P2DScreen4NodeFv
	.4byte 0

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_8051D5F0
lbl_8051D5F0:
	.4byte 0x00000000
.global lbl_8051D5F4
lbl_8051D5F4:
	.4byte 0x3E981062
.global lbl_8051D5F8
lbl_8051D5F8:
	.float 0.3
.global lbl_8051D5FC
lbl_8051D5FC:
	.4byte 0x3EFE76C9
.global lbl_8051D600
lbl_8051D600:
	.float 0.5
.global lbl_8051D604
lbl_8051D604:
	.4byte 0x3F326E98
.global lbl_8051D608
lbl_8051D608:
	.float 0.7
.global lbl_8051D60C
lbl_8051D60C:
	.float 1.0
.global lbl_8051D610
lbl_8051D610:
	.4byte 0x40000000
.global lbl_8051D614
lbl_8051D614:
	.4byte 0x40490FDB
.global lbl_8051D618
lbl_8051D618:
	.4byte 0x3BB60B61
.global lbl_8051D61C
lbl_8051D61C:
	.4byte 0x433F0000
.global lbl_8051D620
lbl_8051D620:
	.4byte 0x42800000
.global lbl_8051D624
lbl_8051D624:
	.4byte 0x41F00000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global update__Q32og6Screen17CallBack_SunMeterFv
update__Q32og6Screen17CallBack_SunMeterFv:
/* 80307294 003041D4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80307298 003041D8  7C 08 02 A6 */	mflr r0
/* 8030729C 003041DC  90 01 00 54 */	stw r0, 0x54(r1)
/* 803072A0 003041E0  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803072A4 003041E4  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803072A8 003041E8  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803072AC 003041EC  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803072B0 003041F0  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 803072B4 003041F4  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 803072B8 003041F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803072BC 003041FC  7C 7F 1B 78 */	mr r31, r3
/* 803072C0 00304200  C0 02 F2 94 */	lfs f0, lbl_8051D5F4@sda21(r2)
/* 803072C4 00304204  80 63 00 20 */	lwz r3, 0x20(r3)
/* 803072C8 00304208  C3 E3 00 00 */	lfs f31, 0(r3)
/* 803072CC 0030420C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 803072D0 00304210  40 80 00 34 */	bge .L_80307304
/* 803072D4 00304214  C0 02 F2 98 */	lfs f0, lbl_8051D5F8@sda21(r2)
/* 803072D8 00304218  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803072DC 0030421C  40 80 00 28 */	bge .L_80307304
/* 803072E0 00304220  88 1F 00 39 */	lbz r0, 0x39(r31)
/* 803072E4 00304224  28 00 00 00 */	cmplwi r0, 0
/* 803072E8 00304228  40 82 00 1C */	bne .L_80307304
/* 803072EC 0030422C  38 00 00 01 */	li r0, 1
/* 803072F0 00304230  98 1F 00 39 */	stb r0, 0x39(r31)
/* 803072F4 00304234  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 803072F8 00304238  48 00 58 01 */	bl setChime__Q22og5SoundFv
/* 803072FC 0030423C  7F E3 FB 78 */	mr r3, r31
/* 80307300 00304240  48 00 01 D1 */	bl startEffectChime__Q32og6Screen17CallBack_SunMeterFv
.L_80307304:
/* 80307304 00304244  C0 02 F2 9C */	lfs f0, lbl_8051D5FC@sda21(r2)
/* 80307308 00304248  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 8030730C 0030424C  40 80 00 34 */	bge .L_80307340
/* 80307310 00304250  C0 02 F2 A0 */	lfs f0, lbl_8051D600@sda21(r2)
/* 80307314 00304254  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80307318 00304258  40 80 00 28 */	bge .L_80307340
/* 8030731C 0030425C  88 1F 00 38 */	lbz r0, 0x38(r31)
/* 80307320 00304260  28 00 00 00 */	cmplwi r0, 0
/* 80307324 00304264  40 82 00 1C */	bne .L_80307340
/* 80307328 00304268  38 00 00 01 */	li r0, 1
/* 8030732C 0030426C  98 1F 00 38 */	stb r0, 0x38(r31)
/* 80307330 00304270  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80307334 00304274  48 00 56 D1 */	bl setChimeNoon__Q22og5SoundFv
/* 80307338 00304278  7F E3 FB 78 */	mr r3, r31
/* 8030733C 0030427C  48 00 01 95 */	bl startEffectChime__Q32og6Screen17CallBack_SunMeterFv
.L_80307340:
/* 80307340 00304280  C0 02 F2 A4 */	lfs f0, lbl_8051D604@sda21(r2)
/* 80307344 00304284  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80307348 00304288  40 80 00 34 */	bge .L_8030737C
/* 8030734C 0030428C  C0 02 F2 A8 */	lfs f0, lbl_8051D608@sda21(r2)
/* 80307350 00304290  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80307354 00304294  40 80 00 28 */	bge .L_8030737C
/* 80307358 00304298  88 1F 00 3A */	lbz r0, 0x3a(r31)
/* 8030735C 0030429C  28 00 00 00 */	cmplwi r0, 0
/* 80307360 003042A0  40 82 00 1C */	bne .L_8030737C
/* 80307364 003042A4  38 00 00 01 */	li r0, 1
/* 80307368 003042A8  98 1F 00 3A */	stb r0, 0x3a(r31)
/* 8030736C 003042AC  80 6D 97 A8 */	lwz r3, ogSound__2og@sda21(r13)
/* 80307370 003042B0  48 00 57 89 */	bl setChime__Q22og5SoundFv
/* 80307374 003042B4  7F E3 FB 78 */	mr r3, r31
/* 80307378 003042B8  48 00 01 59 */	bl startEffectChime__Q32og6Screen17CallBack_SunMeterFv
.L_8030737C:
/* 8030737C 003042BC  C0 3F 00 1C */	lfs f1, 0x1c(r31)
/* 80307380 003042C0  C0 02 F2 AC */	lfs f0, lbl_8051D60C@sda21(r2)
/* 80307384 003042C4  EC 01 00 2A */	fadds f0, f1, f0
/* 80307388 003042C8  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 8030738C 003042CC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80307390 003042D0  4B D3 0F 91 */	bl getBounds__7J2DPaneFv
/* 80307394 003042D4  C3 C3 00 00 */	lfs f30, 0(r3)
/* 80307398 003042D8  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 8030739C 003042DC  4B D3 0F 85 */	bl getBounds__7J2DPaneFv
/* 803073A0 003042E0  C3 A3 00 00 */	lfs f29, 0(r3)
/* 803073A4 003042E4  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 803073A8 003042E8  4B D3 0F 79 */	bl getBounds__7J2DPaneFv
/* 803073AC 003042EC  C0 43 00 04 */	lfs f2, 4(r3)
/* 803073B0 003042F0  EC 1D F0 28 */	fsubs f0, f29, f30
/* 803073B4 003042F4  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 803073B8 003042F8  81 83 00 00 */	lwz r12, 0(r3)
/* 803073BC 003042FC  EC 3F F0 3A */	fmadds f1, f31, f0, f30
/* 803073C0 00304300  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803073C4 00304304  7D 89 03 A6 */	mtctr r12
/* 803073C8 00304308  4E 80 04 21 */	bctrl 
/* 803073CC 0030430C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803073D0 00304310  38 80 00 7A */	li r4, 0x7a
/* 803073D4 00304314  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 803073D8 00304318  C0 83 00 28 */	lfs f4, 0x28(r3)
/* 803073DC 0030431C  C0 43 00 20 */	lfs f2, 0x20(r3)
/* 803073E0 00304320  FC 60 00 50 */	fneg f3, f0
/* 803073E4 00304324  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 803073E8 00304328  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 803073EC 0030432C  EC 84 10 28 */	fsubs f4, f4, f2
/* 803073F0 00304330  C0 42 F2 A0 */	lfs f2, lbl_8051D600@sda21(r2)
/* 803073F4 00304334  EC 01 00 28 */	fsubs f0, f1, f0
/* 803073F8 00304338  EC 24 00 B2 */	fmuls f1, f4, f2
/* 803073FC 0030433C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80307400 00304340  4B D3 10 01 */	bl rotate__7J2DPaneFff13J2DRotateAxisf
/* 80307404 00304344  C0 1F 00 1C */	lfs f0, 0x1c(r31)
/* 80307408 00304348  C0 22 F2 B8 */	lfs f1, lbl_8051D618@sda21(r2)
/* 8030740C 0030434C  FC 00 00 50 */	fneg f0, f0
/* 80307410 00304350  C0 42 F2 B4 */	lfs f2, lbl_8051D614@sda21(r2)
/* 80307414 00304354  C0 62 F2 B0 */	lfs f3, lbl_8051D610@sda21(r2)
/* 80307418 00304358  EC 01 00 32 */	fmuls f0, f1, f0
/* 8030741C 0030435C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80307420 00304360  EC 23 00 32 */	fmuls f1, f3, f0
/* 80307424 00304364  4B DC 83 F9 */	bl sin
/* 80307428 00304368  FC 60 08 18 */	frsp f3, f1
/* 8030742C 0030436C  C0 42 F2 C0 */	lfs f2, lbl_8051D620@sda21(r2)
/* 80307430 00304370  C0 22 F2 BC */	lfs f1, lbl_8051D61C@sda21(r2)
/* 80307434 00304374  C0 02 F2 90 */	lfs f0, lbl_8051D5F0@sda21(r2)
/* 80307438 00304378  EC 22 08 FA */	fmadds f1, f2, f3, f1
/* 8030743C 0030437C  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 80307440 00304380  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80307444 00304384  4C 41 13 82 */	cror 2, 1, 2
/* 80307448 00304388  40 82 00 10 */	bne .L_80307458
/* 8030744C 0030438C  C0 02 F2 A0 */	lfs f0, lbl_8051D600@sda21(r2)
/* 80307450 00304390  EC 00 08 2A */	fadds f0, f0, f1
/* 80307454 00304394  48 00 00 0C */	b .L_80307460
.L_80307458:
/* 80307458 00304398  C0 02 F2 A0 */	lfs f0, lbl_8051D600@sda21(r2)
/* 8030745C 0030439C  EC 01 00 28 */	fsubs f0, f1, f0
.L_80307460:
/* 80307460 003043A0  FC 00 00 1E */	fctiwz f0, f0
/* 80307464 003043A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80307468 003043A8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8030746C 003043AC  D8 01 00 08 */	stfd f0, 8(r1)
/* 80307470 003043B0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80307474 003043B4  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80307478 003043B8  7D 89 03 A6 */	mtctr r12
/* 8030747C 003043BC  4E 80 04 21 */	bctrl 
/* 80307480 003043C0  80 7F 00 3C */	lwz r3, 0x3c(r31)
/* 80307484 003043C4  48 02 1B 01 */	bl calc__Q32og6Screen8ScaleMgrFv
/* 80307488 003043C8  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 8030748C 003043CC  D0 23 00 CC */	stfs f1, 0xcc(r3)
/* 80307490 003043D0  D0 23 00 D0 */	stfs f1, 0xd0(r3)
/* 80307494 003043D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80307498 003043D8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8030749C 003043DC  7D 89 03 A6 */	mtctr r12
/* 803074A0 003043E0  4E 80 04 21 */	bctrl 
/* 803074A4 003043E4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803074A8 003043E8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803074AC 003043EC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803074B0 003043F0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803074B4 003043F4  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 803074B8 003043F8  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 803074BC 003043FC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803074C0 00304400  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803074C4 00304404  7C 08 03 A6 */	mtlr r0
/* 803074C8 00304408  38 21 00 50 */	addi r1, r1, 0x50
/* 803074CC 0030440C  4E 80 00 20 */	blr 

.global startEffectChime__Q32og6Screen17CallBack_SunMeterFv
startEffectChime__Q32og6Screen17CallBack_SunMeterFv:
/* 803074D0 00304410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803074D4 00304414  7C 08 02 A6 */	mflr r0
/* 803074D8 00304418  C0 22 F2 98 */	lfs f1, lbl_8051D5F8@sda21(r2)
/* 803074DC 0030441C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803074E0 00304420  C0 42 F2 C4 */	lfs f2, lbl_8051D624@sda21(r2)
/* 803074E4 00304424  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 803074E8 00304428  C0 62 F2 A8 */	lfs f3, lbl_8051D608@sda21(r2)
/* 803074EC 0030442C  C0 82 F2 90 */	lfs f4, lbl_8051D5F0@sda21(r2)
/* 803074F0 00304430  48 02 19 E9 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 803074F4 00304434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803074F8 00304438  7C 08 03 A6 */	mtlr r0
/* 803074FC 0030443C  38 21 00 10 */	addi r1, r1, 0x10
/* 80307500 00304440  4E 80 00 20 */	blr 

.global __ct__Q32og6Screen8SunMeterFv
__ct__Q32og6Screen8SunMeterFv:
/* 80307504 00304444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80307508 00304448  7C 08 02 A6 */	mflr r0
/* 8030750C 0030444C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80307510 00304450  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80307514 00304454  7C 7F 1B 78 */	mr r31, r3
/* 80307518 00304458  48 12 D8 95 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 8030751C 0030445C  3C 60 80 4D */	lis r3, __vt__Q32og6Screen8SunMeter@ha
/* 80307520 00304460  C0 02 F2 90 */	lfs f0, lbl_8051D5F0@sda21(r2)
/* 80307524 00304464  38 03 7F 48 */	addi r0, r3, __vt__Q32og6Screen8SunMeter@l
/* 80307528 00304468  7F E3 FB 78 */	mr r3, r31
/* 8030752C 0030446C  90 1F 00 00 */	stw r0, 0(r31)
/* 80307530 00304470  D0 1F 01 4C */	stfs f0, 0x14c(r31)
/* 80307534 00304474  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80307538 00304478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8030753C 0030447C  7C 08 03 A6 */	mtlr r0
/* 80307540 00304480  38 21 00 10 */	addi r1, r1, 0x10
/* 80307544 00304484  4E 80 00 20 */	blr 

.global setCallBack__Q32og6Screen8SunMeterFv
setCallBack__Q32og6Screen8SunMeterFv:
/* 80307548 00304488  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8030754C 0030448C  7C 08 02 A6 */	mflr r0
/* 80307550 00304490  90 01 00 14 */	stw r0, 0x14(r1)
/* 80307554 00304494  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80307558 00304498  7C 7F 1B 78 */	mr r31, r3
/* 8030755C 0030449C  93 C1 00 08 */	stw r30, 8(r1)
/* 80307560 003044A0  4B FF BD B5 */	bl setAlphaScreen__Q22og6ScreenFP7J2DPane
/* 80307564 003044A4  38 60 00 40 */	li r3, 0x40
/* 80307568 003044A8  4B D1 C9 3D */	bl __nw__FUl
/* 8030756C 003044AC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80307570 003044B0  41 82 00 7C */	beq .L_803075EC
/* 80307574 003044B4  48 10 9E 1D */	bl __ct__5CNodeFv
/* 80307578 003044B8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8030757C 003044BC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 80307580 003044C0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 80307584 003044C4  3C 60 80 4D */	lis r3, __vt__Q32og6Screen17CallBack_SunMeter@ha
/* 80307588 003044C8  90 1E 00 00 */	stw r0, 0(r30)
/* 8030758C 003044CC  38 A0 00 00 */	li r5, 0
/* 80307590 003044D0  38 84 7F 2C */	addi r4, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 80307594 003044D4  38 03 7F E8 */	addi r0, r3, __vt__Q32og6Screen17CallBack_SunMeter@l
/* 80307598 003044D8  90 BE 00 18 */	stw r5, 0x18(r30)
/* 8030759C 003044DC  38 60 00 1C */	li r3, 0x1c
/* 803075A0 003044E0  C0 02 F2 90 */	lfs f0, lbl_8051D5F0@sda21(r2)
/* 803075A4 003044E4  90 9E 00 00 */	stw r4, 0(r30)
/* 803075A8 003044E8  90 1E 00 00 */	stw r0, 0(r30)
/* 803075AC 003044EC  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 803075B0 003044F0  90 BE 00 20 */	stw r5, 0x20(r30)
/* 803075B4 003044F4  90 BE 00 24 */	stw r5, 0x24(r30)
/* 803075B8 003044F8  90 BE 00 28 */	stw r5, 0x28(r30)
/* 803075BC 003044FC  90 BE 00 2C */	stw r5, 0x2c(r30)
/* 803075C0 00304500  90 BE 00 30 */	stw r5, 0x30(r30)
/* 803075C4 00304504  90 BE 00 34 */	stw r5, 0x34(r30)
/* 803075C8 00304508  98 BE 00 38 */	stb r5, 0x38(r30)
/* 803075CC 0030450C  98 BE 00 39 */	stb r5, 0x39(r30)
/* 803075D0 00304510  98 BE 00 3A */	stb r5, 0x3a(r30)
/* 803075D4 00304514  4B D1 C8 D1 */	bl __nw__FUl
/* 803075D8 00304518  7C 60 1B 79 */	or. r0, r3, r3
/* 803075DC 0030451C  41 82 00 0C */	beq .L_803075E8
/* 803075E0 00304520  48 02 18 25 */	bl __ct__Q32og6Screen8ScaleMgrFv
/* 803075E4 00304524  7C 60 1B 78 */	mr r0, r3
.L_803075E8:
/* 803075E8 00304528  90 1E 00 3C */	stw r0, 0x3c(r30)
.L_803075EC:
/* 803075EC 0030452C  93 DF 01 48 */	stw r30, 0x148(r31)
/* 803075F0 00304530  3C 80 73 74 */	lis r4, 0x73746174@ha
/* 803075F4 00304534  38 1F 01 4C */	addi r0, r31, 0x14c
/* 803075F8 00304538  7F E3 FB 78 */	mr r3, r31
/* 803075FC 0030453C  83 DF 01 48 */	lwz r30, 0x148(r31)
/* 80307600 00304540  38 C4 61 74 */	addi r6, r4, 0x73746174@l
/* 80307604 00304544  38 A0 00 00 */	li r5, 0
/* 80307608 00304548  90 1E 00 20 */	stw r0, 0x20(r30)
/* 8030760C 0030454C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80307610 00304550  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80307614 00304554  7D 89 03 A6 */	mtctr r12
/* 80307618 00304558  4E 80 04 21 */	bctrl 
/* 8030761C 0030455C  90 7E 00 24 */	stw r3, 0x24(r30)
/* 80307620 00304560  7F E3 FB 78 */	mr r3, r31
/* 80307624 00304564  3C 80 67 6F */	lis r4, 0x676F616C@ha
/* 80307628 00304568  38 A0 00 00 */	li r5, 0
/* 8030762C 0030456C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80307630 00304570  38 C4 61 6C */	addi r6, r4, 0x676F616C@l
/* 80307634 00304574  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80307638 00304578  7D 89 03 A6 */	mtctr r12
/* 8030763C 0030457C  4E 80 04 21 */	bctrl 
/* 80307640 00304580  90 7E 00 28 */	stw r3, 0x28(r30)
/* 80307644 00304584  7F E3 FB 78 */	mr r3, r31
/* 80307648 00304588  3C 80 73 75 */	lis r4, 0x73756E69@ha
/* 8030764C 0030458C  38 A0 00 00 */	li r5, 0
/* 80307650 00304590  81 9F 00 00 */	lwz r12, 0(r31)
/* 80307654 00304594  38 C4 6E 69 */	addi r6, r4, 0x73756E69@l
/* 80307658 00304598  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 8030765C 0030459C  7D 89 03 A6 */	mtctr r12
/* 80307660 003045A0  4E 80 04 21 */	bctrl 
/* 80307664 003045A4  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 80307668 003045A8  7F E3 FB 78 */	mr r3, r31
/* 8030766C 003045AC  3C 80 73 75 */	lis r4, 0x73756E31@ha
/* 80307670 003045B0  38 A0 00 00 */	li r5, 0
/* 80307674 003045B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80307678 003045B8  38 C4 6E 31 */	addi r6, r4, 0x73756E31@l
/* 8030767C 003045BC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80307680 003045C0  7D 89 03 A6 */	mtctr r12
/* 80307684 003045C4  4E 80 04 21 */	bctrl 
/* 80307688 003045C8  90 7E 00 30 */	stw r3, 0x30(r30)
/* 8030768C 003045CC  7F E3 FB 78 */	mr r3, r31
/* 80307690 003045D0  3C 80 73 75 */	lis r4, 0x73756E32@ha
/* 80307694 003045D4  38 A0 00 00 */	li r5, 0
/* 80307698 003045D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8030769C 003045DC  38 C4 6E 32 */	addi r6, r4, 0x73756E32@l
/* 803076A0 003045E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803076A4 003045E4  7D 89 03 A6 */	mtctr r12
/* 803076A8 003045E8  4E 80 04 21 */	bctrl 
/* 803076AC 003045EC  90 7E 00 34 */	stw r3, 0x34(r30)
/* 803076B0 003045F0  38 00 00 00 */	li r0, 0
/* 803076B4 003045F4  38 80 00 04 */	li r4, 4
/* 803076B8 003045F8  98 1E 00 38 */	stb r0, 0x38(r30)
/* 803076BC 003045FC  98 1E 00 39 */	stb r0, 0x39(r30)
/* 803076C0 00304600  98 1E 00 3A */	stb r0, 0x3a(r30)
/* 803076C4 00304604  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 803076C8 00304608  4B D3 15 F5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 803076CC 0030460C  3C 80 73 75 */	lis r4, 0x73756E69@ha
/* 803076D0 00304610  80 FF 01 48 */	lwz r7, 0x148(r31)
/* 803076D4 00304614  7F E3 FB 78 */	mr r3, r31
/* 803076D8 00304618  38 A0 00 00 */	li r5, 0
/* 803076DC 0030461C  38 C4 6E 69 */	addi r6, r4, 0x73756E69@l
/* 803076E0 00304620  48 12 D4 45 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803076E4 00304624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803076E8 00304628  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803076EC 0030462C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803076F0 00304630  7C 08 03 A6 */	mtlr r0
/* 803076F4 00304634  38 21 00 10 */	addi r1, r1, 0x10
/* 803076F8 00304638  4E 80 00 20 */	blr 

.global __dt__Q32og6Screen8SunMeterFv
__dt__Q32og6Screen8SunMeterFv:
/* 803076FC 0030463C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80307700 00304640  7C 08 02 A6 */	mflr r0
/* 80307704 00304644  90 01 00 14 */	stw r0, 0x14(r1)
/* 80307708 00304648  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8030770C 0030464C  7C 9F 23 78 */	mr r31, r4
/* 80307710 00304650  93 C1 00 08 */	stw r30, 8(r1)
/* 80307714 00304654  7C 7E 1B 79 */	or. r30, r3, r3
/* 80307718 00304658  41 82 00 6C */	beq .L_80307784
/* 8030771C 0030465C  3C 60 80 4D */	lis r3, __vt__Q32og6Screen8SunMeter@ha
/* 80307720 00304660  38 03 7F 48 */	addi r0, r3, __vt__Q32og6Screen8SunMeter@l
/* 80307724 00304664  90 1E 00 00 */	stw r0, 0(r30)
/* 80307728 00304668  41 82 00 4C */	beq .L_80307774
/* 8030772C 0030466C  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen10Mgr_tuning@ha
/* 80307730 00304670  38 03 C5 00 */	addi r0, r3, __vt__Q29P2DScreen10Mgr_tuning@l
/* 80307734 00304674  90 1E 00 00 */	stw r0, 0(r30)
/* 80307738 00304678  41 82 00 3C */	beq .L_80307774
/* 8030773C 0030467C  3C 60 80 4F */	lis r3, __vt__Q29P2DScreen3Mgr@ha
/* 80307740 00304680  34 1E 01 18 */	addic. r0, r30, 0x118
/* 80307744 00304684  38 03 C5 A0 */	addi r0, r3, __vt__Q29P2DScreen3Mgr@l
/* 80307748 00304688  90 1E 00 00 */	stw r0, 0(r30)
/* 8030774C 0030468C  41 82 00 1C */	beq .L_80307768
/* 80307750 00304690  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 80307754 00304694  38 7E 01 18 */	addi r3, r30, 0x118
/* 80307758 00304698  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 8030775C 0030469C  38 80 00 00 */	li r4, 0
/* 80307760 003046A0  90 1E 01 18 */	stw r0, 0x118(r30)
/* 80307764 003046A4  48 10 9E 25 */	bl __dt__5CNodeFv
.L_80307768:
/* 80307768 003046A8  7F C3 F3 78 */	mr r3, r30
/* 8030776C 003046AC  38 80 00 00 */	li r4, 0
/* 80307770 003046B0  4B D3 7D AD */	bl __dt__9J2DScreenFv
.L_80307774:
/* 80307774 003046B4  7F E0 07 35 */	extsh. r0, r31
/* 80307778 003046B8  40 81 00 0C */	ble .L_80307784
/* 8030777C 003046BC  7F C3 F3 78 */	mr r3, r30
/* 80307780 003046C0  4B D1 C9 35 */	bl __dl__FPv
.L_80307784:
/* 80307784 003046C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80307788 003046C8  7F C3 F3 78 */	mr r3, r30
/* 8030778C 003046CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80307790 003046D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80307794 003046D4  7C 08 03 A6 */	mtlr r0
/* 80307798 003046D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8030779C 003046DC  4E 80 00 20 */	blr 

.global __dt__Q32og6Screen17CallBack_SunMeterFv
__dt__Q32og6Screen17CallBack_SunMeterFv:
/* 803077A0 003046E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803077A4 003046E4  7C 08 02 A6 */	mflr r0
/* 803077A8 003046E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803077AC 003046EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803077B0 003046F0  7C 9F 23 78 */	mr r31, r4
/* 803077B4 003046F4  93 C1 00 08 */	stw r30, 8(r1)
/* 803077B8 003046F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 803077BC 003046FC  41 82 00 48 */	beq .L_80307804
/* 803077C0 00304700  3C 80 80 4D */	lis r4, __vt__Q32og6Screen17CallBack_SunMeter@ha
/* 803077C4 00304704  38 04 7F E8 */	addi r0, r4, __vt__Q32og6Screen17CallBack_SunMeter@l
/* 803077C8 00304708  90 1E 00 00 */	stw r0, 0(r30)
/* 803077CC 0030470C  41 82 00 28 */	beq .L_803077F4
/* 803077D0 00304710  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803077D4 00304714  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803077D8 00304718  90 1E 00 00 */	stw r0, 0(r30)
/* 803077DC 0030471C  41 82 00 18 */	beq .L_803077F4
/* 803077E0 00304720  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen4Node@ha
/* 803077E4 00304724  38 80 00 00 */	li r4, 0
/* 803077E8 00304728  38 05 7B 0C */	addi r0, r5, __vt__Q29P2DScreen4Node@l
/* 803077EC 0030472C  90 1E 00 00 */	stw r0, 0(r30)
/* 803077F0 00304730  48 10 9D 99 */	bl __dt__5CNodeFv
.L_803077F4:
/* 803077F4 00304734  7F E0 07 35 */	extsh. r0, r31
/* 803077F8 00304738  40 81 00 0C */	ble .L_80307804
/* 803077FC 0030473C  7F C3 F3 78 */	mr r3, r30
/* 80307800 00304740  4B D1 C8 B5 */	bl __dl__FPv
.L_80307804:
/* 80307804 00304744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80307808 00304748  7F C3 F3 78 */	mr r3, r30
/* 8030780C 0030474C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80307810 00304750  83 C1 00 08 */	lwz r30, 8(r1)
/* 80307814 00304754  7C 08 03 A6 */	mtlr r0
/* 80307818 00304758  38 21 00 10 */	addi r1, r1, 0x10
/* 8030781C 0030475C  4E 80 00 20 */	blr 
