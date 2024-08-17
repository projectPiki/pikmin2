.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_bootSection_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049AF08, local
	.4byte 0
	.4byte 0
	.4byte 0
.endobj lbl_8049AF08
.balign 4
.obj lbl_8049AF14, local
	.asciz "bootSection.cpp"
.endobj lbl_8049AF14
.balign 4
.obj lbl_8049AF24, local
	.asciz "P2Assert"
.endobj lbl_8049AF24
.balign 4
.obj TitlePiki_Red, local
	.asciz "title_red_5a3.bti"
.endobj TitlePiki_Red
.balign 4
.obj TitlePiki_Yellow, local
	.asciz "title_yellow_5a3.bti"
.endobj TitlePiki_Yellow
.balign 4
.obj TitlePiki_Blue, local
	.asciz "title_blue_5a3.bti"
.endobj TitlePiki_Blue
.balign 4
.obj TitlePiki_White, local
	.asciz "title_white_5a3.bti"
.endobj TitlePiki_White
.balign 4
.obj TitlePiki_Violet, local
	.asciz "title_violet_5a3.bti"
.endobj TitlePiki_Violet
.balign 4
.obj lbl_8049AF9C, local # these strings are unnamed in the dol.
	.4byte TitlePiki_Red
	.4byte TitlePiki_Yellow
	.4byte TitlePiki_Blue
	.4byte TitlePiki_White
	.4byte TitlePiki_Violet
.endobj lbl_8049AF9C
.balign 4
.obj lbl_8049AFB0, local # Shift-JIS
	.4byte 0x8375815B
	.4byte 0x8367835A
	.4byte 0x834E8356
	.4byte 0x83878393
	.byte 0x00
.endobj lbl_8049AFB0
.balign 4
.obj lbl_8049AFC4, local
	.asciz "/user/yamashita/arc/boot_us.szs"
.endobj lbl_8049AFC4
.balign 4
.obj lbl_8049AFE4, local
	.asciz "/data/timg/nintendo_376x104.bti"
.endobj lbl_8049AFE4
.balign 4
.obj lbl_8049B004, local
	.asciz "/data/timg/dolby_mark.bti"
.endobj lbl_8049B004
.balign 4
.obj lbl_8049B020, local
	.asciz "/data/timg/warning.bti"
.endobj lbl_8049B020
.balign 4
.obj lbl_8049B038, local
	.asciz "/data/timg/warning_pstart.bti"
.endobj lbl_8049B038
.balign 4
.obj lbl_8049B058, local
	.asciz "og::Screen::Manager2D::create"
.endobj lbl_8049B058
.balign 4
.obj lbl_8049B078, local
	.asciz "ebiScreen"
.endobj lbl_8049B078
.balign 4
.obj lbl_8049B084, local
	.asciz "TParticle2dMgr"
.endobj lbl_8049B084
.balign 4
.obj lbl_8049B094, local
	.asciz "user/Ebisawa/effect/eff2d_game2d.jpc"
.endobj lbl_8049B094
.balign 4
.obj lbl_8049B0BC, local
	.asciz "ebi::TScreenProgre"
.endobj lbl_8049B0BC
.balign 4
.obj lbl_8049B0D0, local
	.asciz "ebi::TScreenProgre::loadResource"
.endobj lbl_8049B0D0
.balign 4
.obj lbl_8049B0F4, local
	.asciz "PSGame.h"
.endobj lbl_8049B0F4

.section .data, "wa"	# 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804ECFE8, local # no idea wtf this is
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000000
.endobj lbl_804ECFE8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804ED004, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte loadResident__11BootSectionFv
.endobj lbl_804ED004
.obj lbl_804ED010, local
	.4byte .L_80448834
	.4byte .L_80448834
	.4byte .L_80448834
	.4byte .L_80448834
	.4byte .L_80448844
	.4byte .L_8044884C
	.4byte .L_80448978
	.4byte .L_804488AC
	.4byte .L_8044890C
	.4byte .L_8044896C
	.4byte .L_8044896C
.endobj lbl_804ED010
.if version == 0
.obj lbl_804ED03C, local
	.4byte .L_80449068
	.4byte .L_80449074
	.4byte .L_80449360
	.4byte .L_80449458
	.4byte .L_80449080
	.4byte .L_8044908C
	.4byte .L_80449098
	.4byte .L_8044920C
	.4byte .L_804490A4
	.4byte .L_804493B8
	.4byte .L_80449448
.endobj lbl_804ED03C
.else
.obj lbl_804ED03C, local
	.4byte .L_8044907C
	.4byte .L_80449088
	.4byte .L_80449374
	.4byte .L_804494C0
	.4byte .L_80449094
	.4byte .L_804490A0
	.4byte .L_804490AC
	.4byte .L_80449220
	.4byte .L_804490B8
	.4byte .L_8044959C
	.4byte .L_8044962C
.endobj lbl_804ED03C
.endif
.obj lbl_804ED068, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte load2DResource__11BootSectionFv
.endobj lbl_804ED068
.obj lbl_804ED074, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte loadBootResource__11BootSectionFv
.endobj lbl_804ED074
.obj lbl_804ED080, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte waitLoadResource__11BootSectionFv
.endobj lbl_804ED080
.obj lbl_804ED08C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte waitLoadResource__11BootSectionFv
.endobj lbl_804ED08C
	.4byte 0x00000000 # this is likely padding for alignment
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.obj __vt__11BootSection, global
	.4byte 0
	.4byte 0
	.4byte __dt__11BootSectionFv
	.4byte run__11BootSectionFv
	.4byte update__7SectionFv
	.4byte draw__7SectionFR8Graphics
	.4byte init__11BootSectionFv
	.4byte drawInit__7SectionFR8Graphics
	.4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
	.4byte doExit__7SectionFv
	.4byte forceFinish__7SectionFv
	.4byte forceReset__11BootSectionFv
	.4byte getCurrentSection__7SectionFv
	.4byte doLoadingStart__7SectionFv
	.4byte doLoading__7SectionFv
	.4byte doUpdate__11BootSectionFv
	.4byte doDraw__11BootSectionFR8Graphics
	.4byte isFinishable__7SectionFv
	.4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
	.4byte refreshHIO__Q24Game14BaseHIOSectionFv
.endobj __vt__11BootSection
.obj "__vt__23Delegate<11BootSection>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__23Delegate<11BootSection>Fv"
.endobj "__vt__23Delegate<11BootSection>"
	.skip 0xC # padding for alignment?

.section .bss  # 0x804EFC20 - 0x8051467C
# bootSection.cpp
.comm sPikminTex__13TinyPikminMgr, 0x14, 4

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj sTinyPikminNum__13TinyPikminMgr, global
	.4byte 10
.endobj sTinyPikminNum__13TinyPikminMgr

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj sBootSection, global
	.skip 0x4
.endobj sBootSection
.obj sTinyPikminMgr, local
	.skip 0x4
.endobj sTinyPikminMgr

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_805209A0, local
	.float 0.0
.endobj lbl_805209A0
.obj lbl_805209A4, local
	.float 1.0
.endobj lbl_805209A4
.obj lbl_805209A8, local
	.float 70.0
.endobj lbl_805209A8
.obj lbl_805209AC, local
	.float 32768.0
.endobj lbl_805209AC
.obj lbl_805209B0, local
	.float 2.0
.endobj lbl_805209B0
.obj lbl_805209B4, local
	.float -200.0
.endobj lbl_805209B4
.obj lbl_805209B8, local
	.float 1.5
.endobj lbl_805209B8
.balign 8
.obj lbl_805209C0, local
	.8byte 0x4330000080000000
.endobj lbl_805209C0
.obj lbl_805209C8, local
	.float 10.0
.endobj lbl_805209C8
.obj lbl_805209CC, local
	.float 20.0
.endobj lbl_805209CC
.obj lbl_805209D0, local
	.float 4.0
.endobj lbl_805209D0
.obj lbl_805209D4, local
	.float 5.0
.endobj lbl_805209D4
.obj lbl_805209D8, local
	.float 8.5
.endobj lbl_805209D8
.obj lbl_805209DC, local
	.float 7.0
.endobj lbl_805209DC
.obj lbl_805209E0, local
	.float 0.55
.endobj lbl_805209E0
.obj lbl_805209E4, local
	.float 300.0
.endobj lbl_805209E4
.obj lbl_805209E8, local
	.float -1.0
.endobj lbl_805209E8
.obj lbl_805209EC, local
	.float 15.0
.endobj lbl_805209EC
.obj lbl_805209F0, local
	.float -4.0
.endobj lbl_805209F0
.obj lbl_805209F4, local
	.float 0.9
.endobj lbl_805209F4
.obj lbl_805209F8, local
	.float 0.5
.endobj lbl_805209F8
.obj lbl_805209FC, local
	.float 0.98
.endobj lbl_805209FC
.obj lbl_80520A00, local
	.float 0.75
.endobj lbl_80520A00
.obj lbl_80520A04, local
	.float 360.0
.endobj lbl_80520A04
.obj lbl_80520A08, local
	.float 448.0
.endobj lbl_80520A08
.obj lbl_80520A0C, local
	.float 0.8
.endobj lbl_80520A0C
.obj lbl_80520A10, local
	.float 0.2
.endobj lbl_80520A10
.obj lbl_80520A14, local # tau
	.float 6.2831855
.endobj lbl_80520A14
.obj lbl_80520A18, local
	.float 0.1
.endobj lbl_80520A18
.obj lbl_80520A1C, local
	.float -325.9493
.endobj lbl_80520A1C
.obj lbl_80520A20, local
	.float 325.9493
.endobj lbl_80520A20
.obj lbl_80520A24, local
	.float 0.08
.endobj lbl_80520A24
.balign 4
.obj lbl_80520A28, local
	.asciz "timg/%s"
.endobj lbl_80520A28
.balign 4
.obj lbl_80520A30, local
	.float 274.0
.endobj lbl_80520A30
.obj lbl_80520A34, local
	.float 175.0
.endobj lbl_80520A34
.obj lbl_80520A38, local
	.float 166.0
.endobj lbl_80520A38
.balign 8
.obj lbl_80520A40, local
	.8byte 0x4330000000000000
.endobj lbl_80520A40
.obj lbl_80520A48, local
	.float 0.03333
.endobj lbl_80520A48
.obj lbl_80520A4C, local
	.float 117.0
.endobj lbl_80520A4C
.obj lbl_80520A50, local
	.float 154.0
.endobj lbl_80520A50
.obj lbl_80520A54, local
	.float 376.0
.endobj lbl_80520A54
.obj lbl_80520A58, local
	.float 104.0
.endobj lbl_80520A58
.obj lbl_80520A5C, local
	.float 0.94
.endobj lbl_80520A5C
.obj lbl_80520A60, local
	.float 189.0
.endobj lbl_80520A60
.obj lbl_80520A64, local
	.float 150.0
.endobj lbl_80520A64
.obj lbl_80520A68, local
	.float 232.0
.endobj lbl_80520A68
.obj lbl_80520A6C, local
	.float 112.0
.endobj lbl_80520A6C
.if version == 4
.obj lbl_80520A70, local
	.float 608.0
.endobj lbl_80520A70
.obj lbl_80520A74, local
	.float 127.5
.endobj lbl_80520A74
.obj lbl_80520A78, local
	.float 48.0
.endobj lbl_80520A78
.obj zz_80520A7C, local
	.float 60.0
.endobj zz_80520A7C
.endif

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__10TinyPikminFv, global
/* 804473BC 004442FC  38 00 00 00 */	li r0, 0
/* 804473C0 00444300  C0 22 26 40 */	lfs f1, lbl_805209A0@sda21(r2)
/* 804473C4 00444304  90 03 00 00 */	stw r0, 0(r3)
/* 804473C8 00444308  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 804473CC 0044430C  90 03 00 04 */	stw r0, 4(r3)
/* 804473D0 00444310  D0 23 00 08 */	stfs f1, 8(r3)
/* 804473D4 00444314  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 804473D8 00444318  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 804473DC 0044431C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 804473E0 00444320  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 804473E4 00444324  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 804473E8 00444328  4E 80 00 20 */	blr 
.endfn __ct__10TinyPikminFv

.if version == 0
.fn update__10TinyPikminFv, global
/* 804473EC 0044432C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 804473F0 00444330  7C 08 02 A6 */	mflr r0
/* 804473F4 00444334  90 01 00 34 */	stw r0, 0x34(r1)
/* 804473F8 00444338  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 804473FC 0044433C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80447400 00444340  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80447404 00444344  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80447408 00444348  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044740C 0044434C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80447410 00444350  7C 7F 1B 78 */	mr r31, r3
/* 80447414 00444354  80 03 00 00 */	lwz r0, 0(r3)
/* 80447418 00444358  2C 00 00 02 */	cmpwi r0, 2
/* 8044741C 0044435C  41 82 03 44 */	beq .L_80447760
/* 80447420 00444360  40 80 00 14 */	bge .L_80447434
/* 80447424 00444364  2C 00 00 00 */	cmpwi r0, 0
/* 80447428 00444368  41 82 04 24 */	beq .L_8044784C
/* 8044742C 0044436C  40 80 00 18 */	bge .L_80447444
/* 80447430 00444370  48 00 04 1C */	b .L_8044784C
.L_80447434:
/* 80447434 00444374  2C 00 00 04 */	cmpwi r0, 4
/* 80447438 00444378  41 82 03 74 */	beq .L_804477AC
/* 8044743C 0044437C  40 80 04 10 */	bge .L_8044784C
/* 80447440 00444380  48 00 00 74 */	b .L_804474B4
.L_80447444:
/* 80447444 00444384  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80447448 00444388  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 8044744C 0044438C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447450 00444390  40 81 00 50 */	ble .L_804474A0
/* 80447454 00444394  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447458 00444398  38 00 00 03 */	li r0, 3
/* 8044745C 0044439C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80447460 004443A0  90 1F 00 00 */	stw r0, 0(r31)
/* 80447464 004443A4  4B C8 21 3D */	bl rand
/* 80447468 004443A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8044746C 004443AC  3C 00 43 30 */	lis r0, 0x4330
/* 80447470 004443B0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80447474 004443B4  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447478 004443B8  90 01 00 08 */	stw r0, 8(r1)
/* 8044747C 004443BC  C0 42 26 4C */	lfs f2, lbl_805209AC@sda21(r2)
/* 80447480 004443C0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80447484 004443C4  C0 22 26 7C */	lfs f1, lbl_805209DC@sda21(r2)
/* 80447488 004443C8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8044748C 004443CC  C0 02 26 78 */	lfs f0, lbl_805209D8@sda21(r2)
/* 80447490 004443D0  EC 43 10 24 */	fdivs f2, f3, f2
/* 80447494 004443D4  EC 01 00 BE */	fnmadds f0, f1, f2, f0
/* 80447498 004443D8  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8044749C 004443DC  48 00 03 B0 */	b .L_8044784C
.L_804474A0:
/* 804474A0 004443E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804474A4 004443E4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 804474A8 004443E8  EC 01 00 2A */	fadds f0, f1, f0
/* 804474AC 004443EC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 804474B0 004443F0  48 00 03 9C */	b .L_8044784C
.L_804474B4:
/* 804474B4 004443F4  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 804474B8 004443F8  C0 02 26 80 */	lfs f0, lbl_805209E0@sda21(r2)
/* 804474BC 004443FC  C0 22 26 40 */	lfs f1, lbl_805209A0@sda21(r2)
/* 804474C0 00444400  EC 02 00 2A */	fadds f0, f2, f0
/* 804474C4 00444404  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 804474C8 00444408  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 804474CC 0044440C  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 804474D0 00444410  EC 02 00 2A */	fadds f0, f2, f0
/* 804474D4 00444414  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 804474D8 00444418  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 804474DC 0044441C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 804474E0 00444420  40 81 03 6C */	ble .L_8044784C
/* 804474E4 00444424  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 804474E8 00444428  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 804474EC 0044442C  40 81 03 60 */	ble .L_8044784C
/* 804474F0 00444430  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 804474F4 00444434  88 03 00 09 */	lbz r0, 9(r3)
/* 804474F8 00444438  28 00 00 00 */	cmplwi r0, 0
/* 804474FC 0044443C  41 82 01 44 */	beq .L_80447640
/* 80447500 00444440  80 1F 00 04 */	lwz r0, 4(r31)
/* 80447504 00444444  2C 00 00 04 */	cmpwi r0, 4
/* 80447508 00444448  40 82 01 38 */	bne .L_80447640
/* 8044750C 0044444C  C0 02 26 68 */	lfs f0, lbl_805209C8@sda21(r2)
/* 80447510 00444450  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80447514 00444454  40 81 01 2C */	ble .L_80447640
/* 80447518 00444458  3B 80 00 00 */	li r28, 0
/* 8044751C 0044445C  3B A0 00 00 */	li r29, 0
/* 80447520 00444460  48 00 01 08 */	b .L_80447628
.L_80447524:
/* 80447524 00444464  7C 1C 00 40 */	cmplw r28, r0
/* 80447528 00444468  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 8044752C 0044446C  40 80 00 10 */	bge .L_8044753C
/* 80447530 00444470  80 03 00 00 */	lwz r0, 0(r3)
/* 80447534 00444474  7F C0 EA 14 */	add r30, r0, r29
/* 80447538 00444478  48 00 00 08 */	b .L_80447540
.L_8044753C:
/* 8044753C 0044447C  3B C0 00 00 */	li r30, 0
.L_80447540:
/* 80447540 00444480  7C 1E F8 40 */	cmplw r30, r31
/* 80447544 00444484  41 82 00 DC */	beq .L_80447620
/* 80447548 00444488  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8044754C 0044448C  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80447550 00444490  C0 9E 00 08 */	lfs f4, 8(r30)
/* 80447554 00444494  EC 41 00 28 */	fsubs f2, f1, f0
/* 80447558 00444498  C0 7F 00 08 */	lfs f3, 8(r31)
/* 8044755C 0044449C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447560 004444A0  EC 24 18 28 */	fsubs f1, f4, f3
/* 80447564 004444A4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80447568 004444A8  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 8044756C 004444AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447570 004444B0  40 81 00 14 */	ble .L_80447584
/* 80447574 004444B4  40 81 00 14 */	ble .L_80447588
/* 80447578 004444B8  FC 00 08 34 */	frsqrte f0, f1
/* 8044757C 004444BC  EC 20 00 72 */	fmuls f1, f0, f1
/* 80447580 004444C0  48 00 00 08 */	b .L_80447588
.L_80447584:
/* 80447584 004444C4  FC 20 00 90 */	fmr f1, f0
.L_80447588:
/* 80447588 004444C8  C0 02 26 84 */	lfs f0, lbl_805209E4@sda21(r2)
/* 8044758C 004444CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447590 004444D0  40 80 00 90 */	bge .L_80447620
/* 80447594 004444D4  EC 01 00 24 */	fdivs f0, f1, f0
/* 80447598 004444D8  C0 42 26 44 */	lfs f2, lbl_805209A4@sda21(r2)
/* 8044759C 004444DC  C0 22 26 6C */	lfs f1, lbl_805209CC@sda21(r2)
/* 804475A0 004444E0  EC 02 00 28 */	fsubs f0, f2, f0
/* 804475A4 004444E4  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 804475A8 004444E8  EC 21 00 32 */	fmuls f1, f1, f0
/* 804475AC 004444EC  40 80 00 08 */	bge .L_804475B4
/* 804475B0 004444F0  C0 42 26 88 */	lfs f2, lbl_805209E8@sda21(r2)
.L_804475B4:
/* 804475B4 004444F4  80 1E 00 00 */	lwz r0, 0(r30)
/* 804475B8 004444F8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 804475BC 004444FC  2C 00 00 00 */	cmpwi r0, 0
/* 804475C0 00444500  41 82 00 60 */	beq .L_80447620
/* 804475C4 00444504  2C 00 00 01 */	cmpwi r0, 1
/* 804475C8 00444508  41 82 00 58 */	beq .L_80447620
/* 804475CC 0044450C  38 00 00 04 */	li r0, 4
/* 804475D0 00444510  90 1E 00 00 */	stw r0, 0(r30)
/* 804475D4 00444514  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 804475D8 00444518  EC 00 08 2A */	fadds f0, f0, f1
/* 804475DC 0044451C  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 804475E0 00444520  4B C8 1F C1 */	bl rand
/* 804475E4 00444524  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804475E8 00444528  3C 00 43 30 */	lis r0, 0x4330
/* 804475EC 0044452C  90 61 00 0C */	stw r3, 0xc(r1)
/* 804475F0 00444530  C8 42 26 60 */	lfd f2, lbl_805209C0@sda21(r2)
/* 804475F4 00444534  90 01 00 08 */	stw r0, 8(r1)
/* 804475F8 00444538  C0 62 26 4C */	lfs f3, lbl_805209AC@sda21(r2)
/* 804475FC 0044453C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80447600 00444540  C0 22 26 6C */	lfs f1, lbl_805209CC@sda21(r2)
/* 80447604 00444544  EC 80 10 28 */	fsubs f4, f0, f2
/* 80447608 00444548  C0 02 26 68 */	lfs f0, lbl_805209C8@sda21(r2)
/* 8044760C 0044454C  C0 5E 00 2C */	lfs f2, 0x2c(r30)
/* 80447610 00444550  EC 64 18 24 */	fdivs f3, f4, f3
/* 80447614 00444554  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80447618 00444558  EC 02 00 28 */	fsubs f0, f2, f0
/* 8044761C 0044455C  D0 1E 00 2C */	stfs f0, 0x2c(r30)
.L_80447620:
/* 80447620 00444560  3B BD 00 34 */	addi r29, r29, 0x34
/* 80447624 00444564  3B 9C 00 01 */	addi r28, r28, 1
.L_80447628:
/* 80447628 00444568  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 8044762C 0044456C  7C 1C 00 40 */	cmplw r28, r0
/* 80447630 00444570  41 80 FE F4 */	blt .L_80447524
/* 80447634 00444574  C0 02 26 8C */	lfs f0, lbl_805209EC@sda21(r2)
/* 80447638 00444578  80 6D 9C 18 */	lwz r3, sBootSection@sda21(r13)
/* 8044763C 0044457C  D0 03 00 E4 */	stfs f0, 0x104(r3)
.L_80447640:
/* 80447640 00444580  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447644 00444584  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80447648 00444588  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 8044764C 0044458C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447650 00444590  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80447654 00444594  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80447658 00444598  EC 01 00 2A */	fadds f0, f1, f0
/* 8044765C 0044459C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80447660 004445A0  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 80447664 004445A4  88 03 00 08 */	lbz r0, 8(r3)
/* 80447668 004445A8  28 00 00 00 */	cmplwi r0, 0
/* 8044766C 004445AC  41 82 00 50 */	beq .L_804476BC
/* 80447670 004445B0  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80447674 004445B4  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80447678 004445B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044767C 004445BC  40 81 00 40 */	ble .L_804476BC
/* 80447680 004445C0  38 00 00 02 */	li r0, 2
/* 80447684 004445C4  90 1F 00 00 */	stw r0, 0(r31)
/* 80447688 004445C8  4B C8 1F 19 */	bl rand
/* 8044768C 004445CC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447690 004445D0  3C 00 43 30 */	lis r0, 0x4330
/* 80447694 004445D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80447698 004445D8  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 8044769C 004445DC  90 01 00 08 */	stw r0, 8(r1)
/* 804476A0 004445E0  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 804476A4 004445E4  C8 41 00 08 */	lfd f2, 8(r1)
/* 804476A8 004445E8  C0 02 26 90 */	lfs f0, lbl_805209F0@sda21(r2)
/* 804476AC 004445EC  EC 42 18 28 */	fsubs f2, f2, f3
/* 804476B0 004445F0  EC 22 08 24 */	fdivs f1, f2, f1
/* 804476B4 004445F4  EC 00 00 7A */	fmadds f0, f0, f1, f0
/* 804476B8 004445F8  D0 1F 00 2C */	stfs f0, 0x2c(r31)
.L_804476BC:
/* 804476BC 004445FC  4B C8 1E E5 */	bl rand
/* 804476C0 00444600  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804476C4 00444604  3C 00 43 30 */	lis r0, 0x4330
/* 804476C8 00444608  90 61 00 0C */	stw r3, 0xc(r1)
/* 804476CC 0044460C  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 804476D0 00444610  90 01 00 08 */	stw r0, 8(r1)
/* 804476D4 00444614  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 804476D8 00444618  C8 41 00 08 */	lfd f2, 8(r1)
/* 804476DC 0044461C  C0 02 26 94 */	lfs f0, lbl_805209F4@sda21(r2)
/* 804476E0 00444620  EC 42 18 28 */	fsubs f2, f2, f3
/* 804476E4 00444624  EC 22 08 24 */	fdivs f1, f2, f1
/* 804476E8 00444628  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804476EC 0044462C  40 81 01 60 */	ble .L_8044784C
/* 804476F0 00444630  80 1F 00 04 */	lwz r0, 4(r31)
/* 804476F4 00444634  2C 00 00 04 */	cmpwi r0, 4
/* 804476F8 00444638  41 82 00 1C */	beq .L_80447714
/* 804476FC 0044463C  40 80 00 20 */	bge .L_8044771C
/* 80447700 00444640  2C 00 00 03 */	cmpwi r0, 3
/* 80447704 00444644  40 80 00 08 */	bge .L_8044770C
/* 80447708 00444648  48 00 00 14 */	b .L_8044771C
.L_8044770C:
/* 8044770C 0044464C  C3 E2 26 50 */	lfs f31, lbl_805209B0@sda21(r2)
/* 80447710 00444650  48 00 00 10 */	b .L_80447720
.L_80447714:
/* 80447714 00444654  C3 E2 26 98 */	lfs f31, lbl_805209F8@sda21(r2)
/* 80447718 00444658  48 00 00 08 */	b .L_80447720
.L_8044771C:
/* 8044771C 0044465C  C3 E2 26 44 */	lfs f31, lbl_805209A4@sda21(r2)
.L_80447720:
/* 80447720 00444660  4B C8 1E 81 */	bl rand
/* 80447724 00444664  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447728 00444668  3C 00 43 30 */	lis r0, 0x4330
/* 8044772C 0044466C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80447730 00444670  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447734 00444674  90 01 00 08 */	stw r0, 8(r1)
/* 80447738 00444678  C0 42 26 4C */	lfs f2, lbl_805209AC@sda21(r2)
/* 8044773C 0044467C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80447740 00444680  C0 22 26 90 */	lfs f1, lbl_805209F0@sda21(r2)
/* 80447744 00444684  EC 60 18 28 */	fsubs f3, f0, f3
/* 80447748 00444688  C0 02 26 88 */	lfs f0, lbl_805209E8@sda21(r2)
/* 8044774C 0044468C  EC 43 10 24 */	fdivs f2, f3, f2
/* 80447750 00444690  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80447754 00444694  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80447758 00444698  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8044775C 0044469C  48 00 00 F0 */	b .L_8044784C
.L_80447760:
/* 80447760 004446A0  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80447764 004446A4  C0 02 26 48 */	lfs f0, lbl_805209A8@sda21(r2)
/* 80447768 004446A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044776C 004446AC  40 81 00 1C */	ble .L_80447788
/* 80447770 004446B0  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80447774 004446B4  38 00 00 00 */	li r0, 0
/* 80447778 004446B8  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 8044777C 004446BC  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80447780 004446C0  90 1F 00 00 */	stw r0, 0(r31)
/* 80447784 004446C4  48 00 00 C8 */	b .L_8044784C
.L_80447788:
/* 80447788 004446C8  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 8044778C 004446CC  C0 02 26 80 */	lfs f0, lbl_805209E0@sda21(r2)
/* 80447790 004446D0  EC 01 00 2A */	fadds f0, f1, f0
/* 80447794 004446D4  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80447798 004446D8  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8044779C 004446DC  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 804477A0 004446E0  EC 01 00 2A */	fadds f0, f1, f0
/* 804477A4 004446E4  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 804477A8 004446E8  48 00 00 A4 */	b .L_8044784C
.L_804477AC:
/* 804477AC 004446EC  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 804477B0 004446F0  C0 02 26 9C */	lfs f0, lbl_805209FC@sda21(r2)
/* 804477B4 004446F4  C0 22 26 80 */	lfs f1, lbl_805209E0@sda21(r2)
/* 804477B8 004446F8  EC 42 00 32 */	fmuls f2, f2, f0
/* 804477BC 004446FC  C0 62 26 A0 */	lfs f3, lbl_80520A00@sda21(r2)
/* 804477C0 00444700  C0 02 26 A4 */	lfs f0, lbl_80520A04@sda21(r2)
/* 804477C4 00444704  D0 5F 00 28 */	stfs f2, 0x28(r31)
/* 804477C8 00444708  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 804477CC 0044470C  EC 22 08 2A */	fadds f1, f2, f1
/* 804477D0 00444710  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 804477D4 00444714  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 804477D8 00444718  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 804477DC 0044471C  EC 22 08 2A */	fadds f1, f2, f1
/* 804477E0 00444720  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 804477E4 00444724  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 804477E8 00444728  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 804477EC 0044472C  EC 22 08 2A */	fadds f1, f2, f1
/* 804477F0 00444730  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 804477F4 00444734  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 804477F8 00444738  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 804477FC 0044473C  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 80447800 00444740  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 80447804 00444744  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80447808 00444748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044780C 0044474C  40 81 00 0C */	ble .L_80447818
/* 80447810 00444750  EC 01 00 28 */	fsubs f0, f1, f0
/* 80447814 00444754  D0 1F 00 30 */	stfs f0, 0x30(r31)
.L_80447818:
/* 80447818 00444758  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8044781C 0044475C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447820 00444760  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447824 00444764  40 80 00 10 */	bge .L_80447834
/* 80447828 00444768  C0 02 26 A4 */	lfs f0, lbl_80520A04@sda21(r2)
/* 8044782C 0044476C  EC 01 00 2A */	fadds f0, f1, f0
/* 80447830 00444770  D0 1F 00 30 */	stfs f0, 0x30(r31)
.L_80447834:
/* 80447834 00444774  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80447838 00444778  C0 02 26 A8 */	lfs f0, lbl_80520A08@sda21(r2)
/* 8044783C 0044477C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447840 00444780  40 81 00 0C */	ble .L_8044784C
/* 80447844 00444784  38 00 00 00 */	li r0, 0
/* 80447848 00444788  90 1F 00 00 */	stw r0, 0(r31)
.L_8044784C:
/* 8044784C 0044478C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447850 00444790  C0 7F 00 1C */	lfs f3, 0x1c(r31)
/* 80447854 00444794  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80447858 00444798  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8044785C 0044479C  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80447860 004447A0  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80447864 004447A4  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80447868 004447A8  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8044786C 004447AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447870 004447B0  40 81 00 0C */	ble .L_8044787C
/* 80447874 004447B4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447878 004447B8  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8044787C:
/* 8044787C 004447BC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80447880 004447C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80447884 004447C4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80447888 004447C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044788C 004447CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80447890 004447D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80447894 004447D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80447898 004447D8  7C 08 03 A6 */	mtlr r0
/* 8044789C 004447DC  38 21 00 30 */	addi r1, r1, 0x30
/* 804478A0 004447E0  4E 80 00 20 */	blr 
.endfn update__10TinyPikminFv
.else
.fn update__10TinyPikminFv, global
/* 804473EC 0044432C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 804473F0 00444330  7C 08 02 A6 */	mflr r0
/* 804473F4 00444334  90 01 00 34 */	stw r0, 0x34(r1)
/* 804473F8 00444338  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 804473FC 0044433C  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 80447400 00444340  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80447404 00444344  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80447408 00444348  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044740C 0044434C  93 81 00 10 */	stw r28, 0x10(r1)
/* 80447410 00444350  7C 7F 1B 78 */	mr r31, r3
/* 80447414 00444354  80 03 00 00 */	lwz r0, 0(r3)
/* 80447418 00444358  2C 00 00 02 */	cmpwi r0, 2
/* 8044741C 0044435C  41 82 03 44 */	beq .L_80447760
/* 80447420 00444360  40 80 00 14 */	bge .L_80447434
/* 80447424 00444364  2C 00 00 00 */	cmpwi r0, 0
/* 80447428 00444368  41 82 04 24 */	beq .L_8044784C
/* 8044742C 0044436C  40 80 00 18 */	bge .L_80447444
/* 80447430 00444370  48 00 04 1C */	b .L_8044784C
.L_80447434:
/* 80447434 00444374  2C 00 00 04 */	cmpwi r0, 4
/* 80447438 00444378  41 82 03 74 */	beq .L_804477AC
/* 8044743C 0044437C  40 80 04 10 */	bge .L_8044784C
/* 80447440 00444380  48 00 00 74 */	b .L_804474B4
.L_80447444:
/* 80447444 00444384  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80447448 00444388  C0 1F 00 24 */	lfs f0, 0x24(r31)
/* 8044744C 0044438C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447450 00444390  40 81 00 50 */	ble .L_804474A0
/* 80447454 00444394  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447458 00444398  38 00 00 03 */	li r0, 3
/* 8044745C 0044439C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80447460 004443A0  90 1F 00 00 */	stw r0, 0(r31)
/* 80447464 004443A4  4B C8 21 3D */	bl rand
/* 80447468 004443A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8044746C 004443AC  3C 00 43 30 */	lis r0, 0x4330
/* 80447470 004443B0  90 61 00 0C */	stw r3, 0xc(r1)
/* 80447474 004443B4  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447478 004443B8  90 01 00 08 */	stw r0, 8(r1)
/* 8044747C 004443BC  C0 42 26 4C */	lfs f2, lbl_805209AC@sda21(r2)
/* 80447480 004443C0  C8 01 00 08 */	lfd f0, 8(r1)
/* 80447484 004443C4  C0 22 26 7C */	lfs f1, lbl_805209DC@sda21(r2)
/* 80447488 004443C8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8044748C 004443CC  C0 02 26 78 */	lfs f0, lbl_805209D8@sda21(r2)
/* 80447490 004443D0  EC 43 10 24 */	fdivs f2, f3, f2
/* 80447494 004443D4  EC 01 00 BE */	fnmadds f0, f1, f2, f0
/* 80447498 004443D8  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8044749C 004443DC  48 00 03 B0 */	b .L_8044784C
.L_804474A0:
/* 804474A0 004443E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804474A4 004443E4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 804474A8 004443E8  EC 01 00 2A */	fadds f0, f1, f0
/* 804474AC 004443EC  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 804474B0 004443F0  48 00 03 9C */	b .L_8044784C
.L_804474B4:
/* 804474B4 004443F4  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 804474B8 004443F8  C0 02 26 80 */	lfs f0, lbl_805209E0@sda21(r2)
/* 804474BC 004443FC  C0 22 26 40 */	lfs f1, lbl_805209A0@sda21(r2)
/* 804474C0 00444400  EC 02 00 2A */	fadds f0, f2, f0
/* 804474C4 00444404  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 804474C8 00444408  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 804474CC 0044440C  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 804474D0 00444410  EC 02 00 2A */	fadds f0, f2, f0
/* 804474D4 00444414  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 804474D8 00444418  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 804474DC 0044441C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 804474E0 00444420  40 81 03 6C */	ble .L_8044784C
/* 804474E4 00444424  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 804474E8 00444428  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 804474EC 0044442C  40 81 03 60 */	ble .L_8044784C
/* 804474F0 00444430  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 804474F4 00444434  88 03 00 09 */	lbz r0, 9(r3)
/* 804474F8 00444438  28 00 00 00 */	cmplwi r0, 0
/* 804474FC 0044443C  41 82 01 44 */	beq .L_80447640
/* 80447500 00444440  80 1F 00 04 */	lwz r0, 4(r31)
/* 80447504 00444444  2C 00 00 04 */	cmpwi r0, 4
/* 80447508 00444448  40 82 01 38 */	bne .L_80447640
/* 8044750C 0044444C  C0 02 26 68 */	lfs f0, lbl_805209C8@sda21(r2)
/* 80447510 00444450  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80447514 00444454  40 81 01 2C */	ble .L_80447640
/* 80447518 00444458  3B 80 00 00 */	li r28, 0
/* 8044751C 0044445C  3B A0 00 00 */	li r29, 0
/* 80447520 00444460  48 00 01 08 */	b .L_80447628
.L_80447524:
/* 80447524 00444464  7C 1C 00 40 */	cmplw r28, r0
/* 80447528 00444468  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 8044752C 0044446C  40 80 00 10 */	bge .L_8044753C
/* 80447530 00444470  80 03 00 00 */	lwz r0, 0(r3)
/* 80447534 00444474  7F C0 EA 14 */	add r30, r0, r29
/* 80447538 00444478  48 00 00 08 */	b .L_80447540
.L_8044753C:
/* 8044753C 0044447C  3B C0 00 00 */	li r30, 0
.L_80447540:
/* 80447540 00444480  7C 1E F8 40 */	cmplw r30, r31
/* 80447544 00444484  41 82 00 DC */	beq .L_80447620
/* 80447548 00444488  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 8044754C 0044448C  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80447550 00444490  C0 9E 00 08 */	lfs f4, 8(r30)
/* 80447554 00444494  EC 41 00 28 */	fsubs f2, f1, f0
/* 80447558 00444498  C0 7F 00 08 */	lfs f3, 8(r31)
/* 8044755C 0044449C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447560 004444A0  EC 24 18 28 */	fsubs f1, f4, f3
/* 80447564 004444A4  EC 42 00 B2 */	fmuls f2, f2, f2
/* 80447568 004444A8  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 8044756C 004444AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447570 004444B0  40 81 00 14 */	ble .L_80447584
/* 80447574 004444B4  40 81 00 14 */	ble .L_80447588
/* 80447578 004444B8  FC 00 08 34 */	frsqrte f0, f1
/* 8044757C 004444BC  EC 20 00 72 */	fmuls f1, f0, f1
/* 80447580 004444C0  48 00 00 08 */	b .L_80447588
.L_80447584:
/* 80447584 004444C4  FC 20 00 90 */	fmr f1, f0
.L_80447588:
/* 80447588 004444C8  C0 02 26 84 */	lfs f0, lbl_805209E4@sda21(r2)
/* 8044758C 004444CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447590 004444D0  40 80 00 90 */	bge .L_80447620
/* 80447594 004444D4  EC 01 00 24 */	fdivs f0, f1, f0
/* 80447598 004444D8  C0 42 26 44 */	lfs f2, lbl_805209A4@sda21(r2)
/* 8044759C 004444DC  C0 22 26 6C */	lfs f1, lbl_805209CC@sda21(r2)
/* 804475A0 004444E0  EC 02 00 28 */	fsubs f0, f2, f0
/* 804475A4 004444E4  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 804475A8 004444E8  EC 21 00 32 */	fmuls f1, f1, f0
/* 804475AC 004444EC  40 80 00 08 */	bge .L_804475B4
/* 804475B0 004444F0  C0 42 26 88 */	lfs f2, lbl_805209E8@sda21(r2)
.L_804475B4:
/* 804475B4 004444F4  80 1E 00 00 */	lwz r0, 0(r30)
/* 804475B8 004444F8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 804475BC 004444FC  2C 00 00 00 */	cmpwi r0, 0
/* 804475C0 00444500  41 82 00 60 */	beq .L_80447620
/* 804475C4 00444504  2C 00 00 01 */	cmpwi r0, 1
/* 804475C8 00444508  41 82 00 58 */	beq .L_80447620
/* 804475CC 0044450C  38 00 00 04 */	li r0, 4
/* 804475D0 00444510  90 1E 00 00 */	stw r0, 0(r30)
/* 804475D4 00444514  C0 1E 00 28 */	lfs f0, 0x28(r30)
/* 804475D8 00444518  EC 00 08 2A */	fadds f0, f0, f1
/* 804475DC 0044451C  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 804475E0 00444520  4B C8 1F C1 */	bl rand
/* 804475E4 00444524  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804475E8 00444528  3C 00 43 30 */	lis r0, 0x4330
/* 804475EC 0044452C  90 61 00 0C */	stw r3, 0xc(r1)
/* 804475F0 00444530  C8 42 26 60 */	lfd f2, lbl_805209C0@sda21(r2)
/* 804475F4 00444534  90 01 00 08 */	stw r0, 8(r1)
/* 804475F8 00444538  C0 62 26 4C */	lfs f3, lbl_805209AC@sda21(r2)
/* 804475FC 0044453C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80447600 00444540  C0 22 26 6C */	lfs f1, lbl_805209CC@sda21(r2)
/* 80447604 00444544  EC 80 10 28 */	fsubs f4, f0, f2
/* 80447608 00444548  C0 02 26 68 */	lfs f0, lbl_805209C8@sda21(r2)
/* 8044760C 0044454C  C0 5E 00 2C */	lfs f2, 0x2c(r30)
/* 80447610 00444550  EC 64 18 24 */	fdivs f3, f4, f3
/* 80447614 00444554  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 80447618 00444558  EC 02 00 28 */	fsubs f0, f2, f0
/* 8044761C 0044455C  D0 1E 00 2C */	stfs f0, 0x2c(r30)
.L_80447620:
/* 80447620 00444560  3B BD 00 34 */	addi r29, r29, 0x34
/* 80447624 00444564  3B 9C 00 01 */	addi r28, r28, 1
.L_80447628:
/* 80447628 00444568  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 8044762C 0044456C  7C 1C 00 40 */	cmplw r28, r0
/* 80447630 00444570  41 80 FE F4 */	blt .L_80447524
/* 80447634 00444574  C0 02 26 8C */	lfs f0, lbl_805209EC@sda21(r2)
/* 80447638 00444578  80 6D 9C 18 */	lwz r3, sBootSection@sda21(r13)
/* 8044763C 0044457C  D0 03 00 E4 */	stfs f0, 0xe4(r3)
.L_80447640:
/* 80447640 00444580  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447644 00444584  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80447648 00444588  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 8044764C 0044458C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447650 00444590  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80447654 00444594  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80447658 00444598  EC 01 00 2A */	fadds f0, f1, f0
/* 8044765C 0044459C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 80447660 004445A0  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 80447664 004445A4  88 03 00 08 */	lbz r0, 8(r3)
/* 80447668 004445A8  28 00 00 00 */	cmplwi r0, 0
/* 8044766C 004445AC  41 82 00 50 */	beq .L_804476BC
/* 80447670 004445B0  C0 3F 00 20 */	lfs f1, 0x20(r31)
/* 80447674 004445B4  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80447678 004445B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044767C 004445BC  40 81 00 40 */	ble .L_804476BC
/* 80447680 004445C0  38 00 00 02 */	li r0, 2
/* 80447684 004445C4  90 1F 00 00 */	stw r0, 0(r31)
/* 80447688 004445C8  4B C8 1F 19 */	bl rand
/* 8044768C 004445CC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447690 004445D0  3C 00 43 30 */	lis r0, 0x4330
/* 80447694 004445D4  90 61 00 0C */	stw r3, 0xc(r1)
/* 80447698 004445D8  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 8044769C 004445DC  90 01 00 08 */	stw r0, 8(r1)
/* 804476A0 004445E0  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 804476A4 004445E4  C8 41 00 08 */	lfd f2, 8(r1)
/* 804476A8 004445E8  C0 02 26 90 */	lfs f0, lbl_805209F0@sda21(r2)
/* 804476AC 004445EC  EC 42 18 28 */	fsubs f2, f2, f3
/* 804476B0 004445F0  EC 22 08 24 */	fdivs f1, f2, f1
/* 804476B4 004445F4  EC 00 00 7A */	fmadds f0, f0, f1, f0
/* 804476B8 004445F8  D0 1F 00 2C */	stfs f0, 0x2c(r31)
.L_804476BC:
/* 804476BC 004445FC  4B C8 1E E5 */	bl rand
/* 804476C0 00444600  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804476C4 00444604  3C 00 43 30 */	lis r0, 0x4330
/* 804476C8 00444608  90 61 00 0C */	stw r3, 0xc(r1)
/* 804476CC 0044460C  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 804476D0 00444610  90 01 00 08 */	stw r0, 8(r1)
/* 804476D4 00444614  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 804476D8 00444618  C8 41 00 08 */	lfd f2, 8(r1)
/* 804476DC 0044461C  C0 02 26 94 */	lfs f0, lbl_805209F4@sda21(r2)
/* 804476E0 00444620  EC 42 18 28 */	fsubs f2, f2, f3
/* 804476E4 00444624  EC 22 08 24 */	fdivs f1, f2, f1
/* 804476E8 00444628  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804476EC 0044462C  40 81 01 60 */	ble .L_8044784C
/* 804476F0 00444630  80 1F 00 04 */	lwz r0, 4(r31)
/* 804476F4 00444634  2C 00 00 04 */	cmpwi r0, 4
/* 804476F8 00444638  41 82 00 1C */	beq .L_80447714
/* 804476FC 0044463C  40 80 00 20 */	bge .L_8044771C
/* 80447700 00444640  2C 00 00 03 */	cmpwi r0, 3
/* 80447704 00444644  40 80 00 08 */	bge .L_8044770C
/* 80447708 00444648  48 00 00 14 */	b .L_8044771C
.L_8044770C:
/* 8044770C 0044464C  C3 E2 26 50 */	lfs f31, lbl_805209B0@sda21(r2)
/* 80447710 00444650  48 00 00 10 */	b .L_80447720
.L_80447714:
/* 80447714 00444654  C3 E2 26 98 */	lfs f31, lbl_805209F8@sda21(r2)
/* 80447718 00444658  48 00 00 08 */	b .L_80447720
.L_8044771C:
/* 8044771C 0044465C  C3 E2 26 44 */	lfs f31, lbl_805209A4@sda21(r2)
.L_80447720:
/* 80447720 00444660  4B C8 1E 81 */	bl rand
/* 80447724 00444664  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447728 00444668  3C 00 43 30 */	lis r0, 0x4330
/* 8044772C 0044466C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80447730 00444670  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447734 00444674  90 01 00 08 */	stw r0, 8(r1)
/* 80447738 00444678  C0 42 26 4C */	lfs f2, lbl_805209AC@sda21(r2)
/* 8044773C 0044467C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80447740 00444680  C0 22 26 90 */	lfs f1, lbl_805209F0@sda21(r2)
/* 80447744 00444684  EC 60 18 28 */	fsubs f3, f0, f3
/* 80447748 00444688  C0 02 26 88 */	lfs f0, lbl_805209E8@sda21(r2)
/* 8044774C 0044468C  EC 43 10 24 */	fdivs f2, f3, f2
/* 80447750 00444690  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 80447754 00444694  EC 1F 00 32 */	fmuls f0, f31, f0
/* 80447758 00444698  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 8044775C 0044469C  48 00 00 F0 */	b .L_8044784C
.L_80447760:
/* 80447760 004446A0  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80447764 004446A4  C0 02 26 48 */	lfs f0, lbl_805209A8@sda21(r2)
/* 80447768 004446A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044776C 004446AC  40 81 00 1C */	ble .L_80447788
/* 80447770 004446B0  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 80447774 004446B4  38 00 00 00 */	li r0, 0
/* 80447778 004446B8  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 8044777C 004446BC  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80447780 004446C0  90 1F 00 00 */	stw r0, 0(r31)
/* 80447784 004446C4  48 00 00 C8 */	b .L_8044784C
.L_80447788:
/* 80447788 004446C8  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 8044778C 004446CC  C0 02 26 80 */	lfs f0, lbl_805209E0@sda21(r2)
/* 80447790 004446D0  EC 01 00 2A */	fadds f0, f1, f0
/* 80447794 004446D4  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 80447798 004446D8  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 8044779C 004446DC  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 804477A0 004446E0  EC 01 00 2A */	fadds f0, f1, f0
/* 804477A4 004446E4  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 804477A8 004446E8  48 00 00 A4 */	b .L_8044784C
.L_804477AC:
/* 804477AC 004446EC  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 804477B0 004446F0  C0 02 26 9C */	lfs f0, lbl_805209FC@sda21(r2)
/* 804477B4 004446F4  C0 22 26 80 */	lfs f1, lbl_805209E0@sda21(r2)
/* 804477B8 004446F8  EC 42 00 32 */	fmuls f2, f2, f0
/* 804477BC 004446FC  C0 62 26 A0 */	lfs f3, lbl_80520A00@sda21(r2)
/* 804477C0 00444700  C0 02 26 A4 */	lfs f0, lbl_80520A04@sda21(r2)
/* 804477C4 00444704  D0 5F 00 28 */	stfs f2, 0x28(r31)
/* 804477C8 00444708  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 804477CC 0044470C  EC 22 08 2A */	fadds f1, f2, f1
/* 804477D0 00444710  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 804477D4 00444714  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 804477D8 00444718  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 804477DC 0044471C  EC 22 08 2A */	fadds f1, f2, f1
/* 804477E0 00444720  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 804477E4 00444724  C0 5F 00 14 */	lfs f2, 0x14(r31)
/* 804477E8 00444728  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 804477EC 0044472C  EC 22 08 2A */	fadds f1, f2, f1
/* 804477F0 00444730  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 804477F4 00444734  C0 5F 00 28 */	lfs f2, 0x28(r31)
/* 804477F8 00444738  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 804477FC 0044473C  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 80447800 00444740  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 80447804 00444744  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 80447808 00444748  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044780C 0044474C  40 81 00 0C */	ble .L_80447818
/* 80447810 00444750  EC 01 00 28 */	fsubs f0, f1, f0
/* 80447814 00444754  D0 1F 00 30 */	stfs f0, 0x30(r31)
.L_80447818:
/* 80447818 00444758  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8044781C 0044475C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447820 00444760  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447824 00444764  40 80 00 10 */	bge .L_80447834
/* 80447828 00444768  C0 02 26 A4 */	lfs f0, lbl_80520A04@sda21(r2)
/* 8044782C 0044476C  EC 01 00 2A */	fadds f0, f1, f0
/* 80447830 00444770  D0 1F 00 30 */	stfs f0, 0x30(r31)
.L_80447834:
/* 80447834 00444774  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80447838 00444778  C0 02 26 A8 */	lfs f0, lbl_80520A08@sda21(r2)
/* 8044783C 0044477C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447840 00444780  40 81 00 0C */	ble .L_8044784C
/* 80447844 00444784  38 00 00 00 */	li r0, 0
/* 80447848 00444788  90 1F 00 00 */	stw r0, 0(r31)
.L_8044784C:
/* 8044784C 0044478C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447850 00444790  C0 7F 00 1C */	lfs f3, 0x1c(r31)
/* 80447854 00444794  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80447858 00444798  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8044785C 0044479C  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80447860 004447A0  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80447864 004447A4  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80447868 004447A8  C0 3F 00 18 */	lfs f1, 0x18(r31)
/* 8044786C 004447AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447870 004447B0  40 81 00 0C */	ble .L_8044787C
/* 80447874 004447B4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447878 004447B8  D0 1F 00 18 */	stfs f0, 0x18(r31)
.L_8044787C:
/* 8044787C 004447BC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 80447880 004447C0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80447884 004447C4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80447888 004447C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044788C 004447CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80447890 004447D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80447894 004447D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80447898 004447D8  7C 08 03 A6 */	mtlr r0
/* 8044789C 004447DC  38 21 00 30 */	addi r1, r1, 0x30
/* 804478A0 004447E0  4E 80 00 20 */	blr 
.endfn update__10TinyPikminFv
.endif

.fn init__13TinyPikminMgrFv, global
/* 804478A4 004447E4  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 804478A8 004447E8  7C 08 02 A6 */	mflr r0
/* 804478AC 004447EC  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 804478B0 004447F0  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 804478B4 004447F4  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 804478B8 004447F8  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 804478BC 004447FC  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 804478C0 00444800  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 804478C4 00444804  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 804478C8 00444808  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 804478CC 0044480C  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 804478D0 00444810  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 804478D4 00444814  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 804478D8 00444818  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 804478DC 0044481C  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 804478E0 00444820  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 804478E4 00444824  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 804478E8 00444828  DB 01 00 60 */	stfd f24, 0x60(r1)
/* 804478EC 0044482C  F3 01 00 68 */	psq_st f24, 104(r1), 0, qr0
/* 804478F0 00444830  BE E1 00 3C */	stmw r23, 0x3c(r1)
/* 804478F4 00444834  80 AD 86 90 */	lwz r5, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 804478F8 00444838  3C 00 43 30 */	lis r0, 0x4330
/* 804478FC 0044483C  7C 79 1B 78 */	mr r25, r3
/* 80447900 00444840  90 01 00 08 */	stw r0, 8(r1)
/* 80447904 00444844  C8 62 26 E0 */	lfd f3, lbl_80520A40@sda21(r2)
/* 80447908 00444848  54 A3 10 3A */	slwi r3, r5, 2
/* 8044790C 0044484C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80447910 00444850  38 80 FF E0 */	li r4, -32
/* 80447914 00444854  C0 82 26 58 */	lfs f4, lbl_805209B8@sda21(r2)
/* 80447918 00444858  C8 01 00 08 */	lfd f0, 8(r1)
/* 8044791C 0044485C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80447920 00444860  EC 40 18 28 */	fsubs f2, f0, f3
/* 80447924 00444864  C0 22 26 D0 */	lfs f1, lbl_80520A30@sda21(r2)
/* 80447928 00444868  90 01 00 10 */	stw r0, 0x10(r1)
/* 8044792C 0044486C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80447930 00444870  EF C4 10 24 */	fdivs f30, f4, f2
/* 80447934 00444874  EC 00 18 28 */	fsubs f0, f0, f3
/* 80447938 00444878  EF E1 00 24 */	fdivs f31, f1, f0
/* 8044793C 0044487C  4B BD C6 BD */	bl __nwa__FUli
/* 80447940 00444880  7C 7D 1B 78 */	mr r29, r3
/* 80447944 00444884  CB 82 26 60 */	lfd f28, lbl_805209C0@sda21(r2)
/* 80447948 00444888  C3 62 26 4C */	lfs f27, lbl_805209AC@sda21(r2)
/* 8044794C 0044488C  7F B7 EB 78 */	mr r23, r29
/* 80447950 00444890  C3 42 26 A0 */	lfs f26, lbl_80520A00@sda21(r2)
/* 80447954 00444894  3B 40 00 00 */	li r26, 0
/* 80447958 00444898  C3 22 26 98 */	lfs f25, lbl_805209F8@sda21(r2)
/* 8044795C 0044489C  3F 00 43 30 */	lis r24, 0x4330
/* 80447960 004448A0  48 00 00 50 */	b .L_804479B0
.L_80447964:
/* 80447964 004448A4  4B C8 1C 3D */	bl rand
/* 80447968 004448A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8044796C 004448AC  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 80447970 004448B0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80447974 004448B4  3B 5A 00 01 */	addi r26, r26, 1
/* 80447978 004448B8  93 01 00 10 */	stw r24, 0x10(r1)
/* 8044797C 004448BC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80447980 004448C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 80447984 004448C4  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80447988 004448C8  93 01 00 08 */	stw r24, 8(r1)
/* 8044798C 004448CC  EC 00 D8 24 */	fdivs f0, f0, f27
/* 80447990 004448D0  C8 21 00 08 */	lfd f1, 8(r1)
/* 80447994 004448D4  EC 00 C8 28 */	fsubs f0, f0, f25
/* 80447998 004448D8  EC 21 E0 28 */	fsubs f1, f1, f28
/* 8044799C 004448DC  EC 1F 00 32 */	fmuls f0, f31, f0
/* 804479A0 004448E0  EC 1A 00 32 */	fmuls f0, f26, f0
/* 804479A4 004448E4  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 804479A8 004448E8  D0 17 00 00 */	stfs f0, 0(r23)
/* 804479AC 004448EC  3A F7 00 04 */	addi r23, r23, 4
.L_804479B0:
/* 804479B0 004448F0  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 804479B4 004448F4  7C 1A 00 40 */	cmplw r26, r0
/* 804479B8 004448F8  41 80 FF AC */	blt .L_80447964
/* 804479BC 004448FC  CB 62 26 60 */	lfd f27, lbl_805209C0@sda21(r2)
/* 804479C0 00444900  3A E0 00 00 */	li r23, 0
/* 804479C4 00444904  C3 42 26 4C */	lfs f26, lbl_805209AC@sda21(r2)
/* 804479C8 00444908  3F 00 43 30 */	lis r24, 0x4330
/* 804479CC 0044490C  CB 22 26 E0 */	lfd f25, lbl_80520A40@sda21(r2)
/* 804479D0 00444910  48 00 00 A0 */	b .L_80447A70
.L_804479D4:
/* 804479D4 00444914  4B C8 1B CD */	bl rand
/* 804479D8 00444918  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 804479DC 0044491C  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 804479E0 00444920  90 61 00 14 */	stw r3, 0x14(r1)
/* 804479E4 00444924  93 01 00 10 */	stw r24, 0x10(r1)
/* 804479E8 00444928  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 804479EC 0044492C  90 01 00 0C */	stw r0, 0xc(r1)
/* 804479F0 00444930  EC 00 D8 28 */	fsubs f0, f0, f27
/* 804479F4 00444934  93 01 00 08 */	stw r24, 8(r1)
/* 804479F8 00444938  EC 20 D0 24 */	fdivs f1, f0, f26
/* 804479FC 0044493C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80447A00 00444940  EC 00 C8 28 */	fsubs f0, f0, f25
/* 80447A04 00444944  EC 00 00 72 */	fmuls f0, f0, f1
/* 80447A08 00444948  FC 00 00 1E */	fctiwz f0, f0
/* 80447A0C 0044494C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80447A10 00444950  83 41 00 1C */	lwz r26, 0x1c(r1)
/* 80447A14 00444954  4B C8 1B 8D */	bl rand
/* 80447A18 00444958  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447A1C 0044495C  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80447A20 00444960  90 61 00 24 */	stw r3, 0x24(r1)
/* 80447A24 00444964  57 43 10 3A */	slwi r3, r26, 2
/* 80447A28 00444968  7C 5D 1C 2E */	lfsx f2, r29, r3
/* 80447A2C 0044496C  3A F7 00 01 */	addi r23, r23, 1
/* 80447A30 00444970  93 01 00 20 */	stw r24, 0x20(r1)
/* 80447A34 00444974  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80447A38 00444978  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80447A3C 0044497C  EC 00 D8 28 */	fsubs f0, f0, f27
/* 80447A40 00444980  93 01 00 28 */	stw r24, 0x28(r1)
/* 80447A44 00444984  EC 20 D0 24 */	fdivs f1, f0, f26
/* 80447A48 00444988  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80447A4C 0044498C  EC 00 C8 28 */	fsubs f0, f0, f25
/* 80447A50 00444990  EC 00 00 72 */	fmuls f0, f0, f1
/* 80447A54 00444994  FC 00 00 1E */	fctiwz f0, f0
/* 80447A58 00444998  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80447A5C 0044499C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80447A60 004449A0  54 00 10 3A */	slwi r0, r0, 2
/* 80447A64 004449A4  7C 1D 04 2E */	lfsx f0, r29, r0
/* 80447A68 004449A8  7C 1D 1D 2E */	stfsx f0, r29, r3
/* 80447A6C 004449AC  7C 5D 05 2E */	stfsx f2, r29, r0
.L_80447A70:
/* 80447A70 004449B0  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80447A74 004449B4  7C 17 00 40 */	cmplw r23, r0
/* 80447A78 004449B8  41 80 FF 5C */	blt .L_804479D4
/* 80447A7C 004449BC  3B 80 00 01 */	li r28, 1
/* 80447A80 004449C0  3B 60 00 00 */	li r27, 0
/* 80447A84 004449C4  4B C8 1B 1D */	bl rand
/* 80447A88 004449C8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447A8C 004449CC  3C 00 43 30 */	lis r0, 0x4330
/* 80447A90 004449D0  90 61 00 34 */	stw r3, 0x34(r1)
/* 80447A94 004449D4  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447A98 004449D8  90 01 00 30 */	stw r0, 0x30(r1)
/* 80447A9C 004449DC  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447AA0 004449E0  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 80447AA4 004449E4  C0 02 26 A0 */	lfs f0, lbl_80520A00@sda21(r2)
/* 80447AA8 004449E8  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447AAC 004449EC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447AB0 004449F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447AB4 004449F4  40 81 00 44 */	ble .L_80447AF8
/* 80447AB8 004449F8  3B 60 00 01 */	li r27, 1
/* 80447ABC 004449FC  4B C8 1A E5 */	bl rand
/* 80447AC0 00444A00  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447AC4 00444A04  3C 00 43 30 */	lis r0, 0x4330
/* 80447AC8 00444A08  90 61 00 34 */	stw r3, 0x34(r1)
/* 80447ACC 00444A0C  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447AD0 00444A10  90 01 00 30 */	stw r0, 0x30(r1)
/* 80447AD4 00444A14  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447AD8 00444A18  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 80447ADC 00444A1C  C0 02 26 74 */	lfs f0, lbl_805209D4@sda21(r2)
/* 80447AE0 00444A20  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447AE4 00444A24  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447AE8 00444A28  EC 00 00 72 */	fmuls f0, f0, f1
/* 80447AEC 00444A2C  FC 00 00 1E */	fctiwz f0, f0
/* 80447AF0 00444A30  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80447AF4 00444A34  83 81 00 2C */	lwz r28, 0x2c(r1)
.L_80447AF8:
/* 80447AF8 00444A38  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 80447AFC 00444A3C  7F BF EB 78 */	mr r31, r29
/* 80447B00 00444A40  C0 02 26 D4 */	lfs f0, lbl_80520A34@sda21(r2)
/* 80447B04 00444A44  3B 40 00 00 */	li r26, 0
/* 80447B08 00444A48  C3 22 26 D8 */	lfs f25, lbl_80520A38@sda21(r2)
/* 80447B0C 00444A4C  3B C0 00 00 */	li r30, 0
/* 80447B10 00444A50  EF E1 07 FA */	fmadds f31, f1, f31, f0
/* 80447B14 00444A54  C3 42 26 40 */	lfs f26, lbl_805209A0@sda21(r2)
/* 80447B18 00444A58  C3 62 26 48 */	lfs f27, lbl_805209A8@sda21(r2)
/* 80447B1C 00444A5C  3F 00 43 30 */	lis r24, 0x4330
/* 80447B20 00444A60  CB 82 26 60 */	lfd f28, lbl_805209C0@sda21(r2)
/* 80447B24 00444A64  C3 A2 26 4C */	lfs f29, lbl_805209AC@sda21(r2)
/* 80447B28 00444A68  48 00 01 DC */	b .L_80447D04
.L_80447B2C:
/* 80447B2C 00444A6C  88 19 00 09 */	lbz r0, 9(r25)
/* 80447B30 00444A70  28 00 00 00 */	cmplwi r0, 0
/* 80447B34 00444A74  41 82 00 60 */	beq .L_80447B94
/* 80447B38 00444A78  38 03 FF FF */	addi r0, r3, -1
/* 80447B3C 00444A7C  7C 1A 00 40 */	cmplw r26, r0
/* 80447B40 00444A80  40 82 00 0C */	bne .L_80447B4C
/* 80447B44 00444A84  3B 80 00 04 */	li r28, 4
/* 80447B48 00444A88  48 00 00 90 */	b .L_80447BD8
.L_80447B4C:
/* 80447B4C 00444A8C  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80447B50 00444A90  40 82 00 88 */	bne .L_80447BD8
/* 80447B54 00444A94  4B C8 1A 4D */	bl rand
/* 80447B58 00444A98  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447B5C 00444A9C  3C 00 43 30 */	lis r0, 0x4330
/* 80447B60 00444AA0  90 61 00 34 */	stw r3, 0x34(r1)
/* 80447B64 00444AA4  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447B68 00444AA8  90 01 00 30 */	stw r0, 0x30(r1)
/* 80447B6C 00444AAC  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447B70 00444AB0  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 80447B74 00444AB4  C0 02 26 70 */	lfs f0, lbl_805209D0@sda21(r2)
/* 80447B78 00444AB8  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447B7C 00444ABC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447B80 00444AC0  EC 00 00 72 */	fmuls f0, f0, f1
/* 80447B84 00444AC4  FC 00 00 1E */	fctiwz f0, f0
/* 80447B88 00444AC8  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80447B8C 00444ACC  83 81 00 2C */	lwz r28, 0x2c(r1)
/* 80447B90 00444AD0  48 00 00 48 */	b .L_80447BD8
.L_80447B94:
/* 80447B94 00444AD4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80447B98 00444AD8  40 82 00 40 */	bne .L_80447BD8
/* 80447B9C 00444ADC  4B C8 1A 05 */	bl rand
/* 80447BA0 00444AE0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447BA4 00444AE4  3C 00 43 30 */	lis r0, 0x4330
/* 80447BA8 00444AE8  90 61 00 34 */	stw r3, 0x34(r1)
/* 80447BAC 00444AEC  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447BB0 00444AF0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80447BB4 00444AF4  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447BB8 00444AF8  C8 41 00 30 */	lfd f2, 0x30(r1)
/* 80447BBC 00444AFC  C0 02 26 74 */	lfs f0, lbl_805209D4@sda21(r2)
/* 80447BC0 00444B00  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447BC4 00444B04  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447BC8 00444B08  EC 00 00 72 */	fmuls f0, f0, f1
/* 80447BCC 00444B0C  FC 00 00 1E */	fctiwz f0, f0
/* 80447BD0 00444B10  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80447BD4 00444B14  83 81 00 2C */	lwz r28, 0x2c(r1)
.L_80447BD8:
/* 80447BD8 00444B18  2C 1A 00 00 */	cmpwi r26, 0
/* 80447BDC 00444B1C  40 82 00 0C */	bne .L_80447BE8
/* 80447BE0 00444B20  C3 02 26 40 */	lfs f24, lbl_805209A0@sda21(r2)
/* 80447BE4 00444B24  48 00 00 48 */	b .L_80447C2C
.L_80447BE8:
/* 80447BE8 00444B28  4B C8 19 B9 */	bl rand
/* 80447BEC 00444B2C  3C 80 43 30 */	lis r4, 0x4330
/* 80447BF0 00444B30  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80447BF4 00444B34  90 01 00 34 */	stw r0, 0x34(r1)
/* 80447BF8 00444B38  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 80447BFC 00444B3C  C8 42 26 60 */	lfd f2, lbl_805209C0@sda21(r2)
/* 80447C00 00444B40  90 81 00 30 */	stw r4, 0x30(r1)
/* 80447C04 00444B44  C0 02 26 4C */	lfs f0, lbl_805209AC@sda21(r2)
/* 80447C08 00444B48  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80447C0C 00444B4C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80447C10 00444B50  EC 21 10 28 */	fsubs f1, f1, f2
/* 80447C14 00444B54  90 81 00 28 */	stw r4, 0x28(r1)
/* 80447C18 00444B58  EC 61 00 24 */	fdivs f3, f1, f0
/* 80447C1C 00444B5C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80447C20 00444B60  EC 20 10 28 */	fsubs f1, f0, f2
/* 80447C24 00444B64  EC 1E 00 F2 */	fmuls f0, f30, f3
/* 80447C28 00444B68  EF 01 07 BA */	fmadds f24, f1, f30, f0
.L_80447C2C:
/* 80447C2C 00444B6C  80 79 00 00 */	lwz r3, 0(r25)
/* 80447C30 00444B70  38 00 00 00 */	li r0, 0
/* 80447C34 00444B74  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80447C38 00444B78  7E E3 F2 14 */	add r23, r3, r30
/* 80447C3C 00444B7C  90 17 00 00 */	stw r0, 0(r23)
/* 80447C40 00444B80  EC 1F 00 2A */	fadds f0, f31, f0
/* 80447C44 00444B84  93 97 00 04 */	stw r28, 4(r23)
/* 80447C48 00444B88  D0 17 00 08 */	stfs f0, 8(r23)
/* 80447C4C 00444B8C  D3 37 00 0C */	stfs f25, 0xc(r23)
/* 80447C50 00444B90  D3 57 00 10 */	stfs f26, 0x10(r23)
/* 80447C54 00444B94  D3 77 00 14 */	stfs f27, 0x14(r23)
/* 80447C58 00444B98  4B C8 19 49 */	bl rand
/* 80447C5C 00444B9C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80447C60 00444BA0  93 01 00 30 */	stw r24, 0x30(r1)
/* 80447C64 00444BA4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80447C68 00444BA8  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80447C6C 00444BAC  EC 00 E0 28 */	fsubs f0, f0, f28
/* 80447C70 00444BB0  EC 00 E8 24 */	fdivs f0, f0, f29
/* 80447C74 00444BB4  D0 17 00 18 */	stfs f0, 0x18(r23)
/* 80447C78 00444BB8  D3 57 00 20 */	stfs f26, 0x20(r23)
/* 80447C7C 00444BBC  D3 17 00 24 */	stfs f24, 0x24(r23)
/* 80447C80 00444BC0  D3 57 00 28 */	stfs f26, 0x28(r23)
/* 80447C84 00444BC4  D3 57 00 2C */	stfs f26, 0x2c(r23)
/* 80447C88 00444BC8  D3 57 00 30 */	stfs f26, 0x30(r23)
/* 80447C8C 00444BCC  80 17 00 04 */	lwz r0, 4(r23)
/* 80447C90 00444BD0  2C 00 00 04 */	cmpwi r0, 4
/* 80447C94 00444BD4  41 82 00 20 */	beq .L_80447CB4
/* 80447C98 00444BD8  40 80 00 40 */	bge .L_80447CD8
/* 80447C9C 00444BDC  2C 00 00 03 */	cmpwi r0, 3
/* 80447CA0 00444BE0  40 80 00 08 */	bge .L_80447CA8
/* 80447CA4 00444BE4  48 00 00 34 */	b .L_80447CD8
.L_80447CA8:
/* 80447CA8 00444BE8  C0 02 26 50 */	lfs f0, lbl_805209B0@sda21(r2)
/* 80447CAC 00444BEC  D0 17 00 1C */	stfs f0, 0x1c(r23)
/* 80447CB0 00444BF0  48 00 00 30 */	b .L_80447CE0
.L_80447CB4:
/* 80447CB4 00444BF4  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80447CB8 00444BF8  D0 17 00 1C */	stfs f0, 0x1c(r23)
/* 80447CBC 00444BFC  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 80447CC0 00444C00  88 03 00 09 */	lbz r0, 9(r3)
/* 80447CC4 00444C04  28 00 00 00 */	cmplwi r0, 0
/* 80447CC8 00444C08  41 82 00 18 */	beq .L_80447CE0
/* 80447CCC 00444C0C  C0 02 26 54 */	lfs f0, lbl_805209B4@sda21(r2)
/* 80447CD0 00444C10  D0 17 00 14 */	stfs f0, 0x14(r23)
/* 80447CD4 00444C14  48 00 00 0C */	b .L_80447CE0
.L_80447CD8:
/* 80447CD8 00444C18  C0 02 26 58 */	lfs f0, lbl_805209B8@sda21(r2)
/* 80447CDC 00444C1C  D0 17 00 1C */	stfs f0, 0x1c(r23)
.L_80447CE0:
/* 80447CE0 00444C20  80 6D 9C 1C */	lwz r3, sTinyPikminMgr@sda21(r13)
/* 80447CE4 00444C24  80 03 00 04 */	lwz r0, 4(r3)
/* 80447CE8 00444C28  2C 00 00 01 */	cmpwi r0, 1
/* 80447CEC 00444C2C  40 82 00 0C */	bne .L_80447CF8
/* 80447CF0 00444C30  C0 02 26 54 */	lfs f0, lbl_805209B4@sda21(r2)
/* 80447CF4 00444C34  D0 17 00 14 */	stfs f0, 0x14(r23)
.L_80447CF8:
/* 80447CF8 00444C38  3B FF 00 04 */	addi r31, r31, 4
/* 80447CFC 00444C3C  3B DE 00 34 */	addi r30, r30, 0x34
/* 80447D00 00444C40  3B 5A 00 01 */	addi r26, r26, 1
.L_80447D04:
/* 80447D04 00444C44  80 6D 86 90 */	lwz r3, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80447D08 00444C48  7C 1A 18 40 */	cmplw r26, r3
/* 80447D0C 00444C4C  41 80 FE 20 */	blt .L_80447B2C
/* 80447D10 00444C50  7F A3 EB 78 */	mr r3, r29
/* 80447D14 00444C54  4B BD C3 C5 */	bl __dla__FPv
/* 80447D18 00444C58  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 80447D1C 00444C5C  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 80447D20 00444C60  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 80447D24 00444C64  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 80447D28 00444C68  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 80447D2C 00444C6C  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 80447D30 00444C70  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 80447D34 00444C74  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 80447D38 00444C78  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 80447D3C 00444C7C  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 80447D40 00444C80  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 80447D44 00444C84  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 80447D48 00444C88  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 80447D4C 00444C8C  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 80447D50 00444C90  E3 01 00 68 */	psq_l f24, 104(r1), 0, qr0
/* 80447D54 00444C94  CB 01 00 60 */	lfd f24, 0x60(r1)
/* 80447D58 00444C98  BA E1 00 3C */	lmw r23, 0x3c(r1)
/* 80447D5C 00444C9C  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 80447D60 00444CA0  7C 08 03 A6 */	mtlr r0
/* 80447D64 00444CA4  38 21 00 E0 */	addi r1, r1, 0xe0
/* 80447D68 00444CA8  4E 80 00 20 */	blr 
.endfn init__13TinyPikminMgrFv

.if version == 0
.fn __ct__11BootSectionFP7JKRHeap, global
/* 80447D6C 00444CAC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80447D70 00444CB0  7C 08 02 A6 */	mflr r0
/* 80447D74 00444CB4  3C A0 80 4A */	lis r5, lbl_8049AF08@ha
/* 80447D78 00444CB8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80447D7C 00444CBC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80447D80 00444CC0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80447D84 00444CC4  3B C5 AF 08 */	addi r30, r5, lbl_8049AF08@l
/* 80447D88 00444CC8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80447D8C 00444CCC  7C 7D 1B 78 */	mr r29, r3
/* 80447D90 00444CD0  4B D1 CE 61 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 80447D94 00444CD4  3C 60 80 4F */	lis r3, __vt__11BootSection@ha
/* 80447D98 00444CD8  38 80 FF FF */	li r4, -1
/* 80447D9C 00444CDC  38 03 D1 40 */	addi r0, r3, __vt__11BootSection@l
/* 80447DA0 00444CE0  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447DA4 00444CE4  90 1D 00 00 */	stw r0, 0(r29)
/* 80447DA8 00444CE8  38 00 00 00 */	li r0, 0
/* 80447DAC 00444CEC  38 7D 00 64 */	addi r3, r29, 0x84
/* 80447DB0 00444CF0  90 9D 00 48 */	stw r4, 0x68(r29)
/* 80447DB4 00444CF4  90 9D 00 4C */	stw r4, 0x6c(r29)
/* 80447DB8 00444CF8  D0 1D 00 50 */	stfs f0, 0x70(r29)
/* 80447DBC 00444CFC  90 1D 00 5C */	stw r0, 0x7c(r29)
/* 80447DC0 00444D00  4B FD CA 59 */	bl __ct__16DvdThreadCommandFv
/* 80447DC4 00444D04  38 00 00 00 */	li r0, 0
/* 80447DC8 00444D08  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447DCC 00444D0C  90 1D 00 D4 */	stw r0, 0xf4(r29)
/* 80447DD0 00444D10  38 60 00 1C */	li r3, 0x1c
/* 80447DD4 00444D14  90 1D 00 D8 */	stw r0, 0xf8(r29)
/* 80447DD8 00444D18  98 1D 00 DC */	stb r0, 0xfc(r29)
/* 80447DDC 00444D1C  98 1D 00 DD */	stb r0, 0xfd(r29)
/* 80447DE0 00444D20  D0 1D 00 E4 */	stfs f0, 0x104(r29)
/* 80447DE4 00444D24  93 AD 9C 18 */	stw r29, sBootSection@sda21(r13)
/* 80447DE8 00444D28  4B BD C0 BD */	bl __nw__FUl
/* 80447DEC 00444D2C  7C 64 1B 79 */	or. r4, r3, r3
/* 80447DF0 00444D30  41 82 00 10 */	beq .L_80447E00
/* 80447DF4 00444D34  7F A4 EB 78 */	mr r4, r29
/* 80447DF8 00444D38  4B D1 D1 E1 */	bl __ct__Q24Game11HIORootNodeFP7Section
/* 80447DFC 00444D3C  7C 64 1B 78 */	mr r4, r3
.L_80447E00:
/* 80447E00 00444D40  38 1E 00 A8 */	addi r0, r30, 0xa8
/* 80447E04 00444D44  7F A3 EB 78 */	mr r3, r29
/* 80447E08 00444D48  90 04 00 14 */	stw r0, 0x14(r4)
/* 80447E0C 00444D4C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80447E10 00444D50  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80447E14 00444D54  7D 89 03 A6 */	mtctr r12
/* 80447E18 00444D58  4E 80 04 21 */	bctrl 
/* 80447E1C 00444D5C  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 80447E20 00444D60  38 60 00 00 */	li r3, 0
/* 80447E24 00444D64  38 A0 00 02 */	li r5, 2
/* 80447E28 00444D68  38 C0 00 00 */	li r6, 0
/* 80447E2C 00444D6C  4B C4 1C FD */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 80447E30 00444D70  7C 64 1B 78 */	mr r4, r3
/* 80447E34 00444D74  7F A3 EB 78 */	mr r3, r29
/* 80447E38 00444D78  38 A0 00 01 */	li r5, 1
/* 80447E3C 00444D7C  4B D1 CF 99 */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 80447E40 00444D80  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447E44 00444D84  38 80 00 01 */	li r4, 1
/* 80447E48 00444D88  4B FD B6 E5 */	bl setFrameRate__6SystemFi
/* 80447E4C 00444D8C  38 60 00 14 */	li r3, 0x14
/* 80447E50 00444D90  4B BD C0 55 */	bl __nw__FUl
/* 80447E54 00444D94  28 03 00 00 */	cmplwi r3, 0
/* 80447E58 00444D98  41 82 00 4C */	beq .L_80447EA4
/* 80447E5C 00444D9C  3C 80 80 4F */	lis r4, lbl_804ED004@ha
/* 80447E60 00444DA0  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 80447E64 00444DA4  39 04 D0 04 */	addi r8, r4, lbl_804ED004@l
/* 80447E68 00444DA8  3C 80 80 4F */	lis r4, "__vt__23Delegate<11BootSection>"@ha
/* 80447E6C 00444DAC  80 E8 00 00 */	lwz r7, 0(r8)
/* 80447E70 00444DB0  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 80447E74 00444DB4  80 C8 00 04 */	lwz r6, 4(r8)
/* 80447E78 00444DB8  38 04 D1 90 */	addi r0, r4, "__vt__23Delegate<11BootSection>"@l
/* 80447E7C 00444DBC  80 88 00 08 */	lwz r4, 8(r8)
/* 80447E80 00444DC0  90 E1 00 08 */	stw r7, 8(r1)
/* 80447E84 00444DC4  90 A3 00 00 */	stw r5, 0(r3)
/* 80447E88 00444DC8  90 03 00 00 */	stw r0, 0(r3)
/* 80447E8C 00444DCC  93 A3 00 04 */	stw r29, 4(r3)
/* 80447E90 00444DD0  90 E3 00 08 */	stw r7, 8(r3)
/* 80447E94 00444DD4  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80447E98 00444DD8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80447E9C 00444DDC  90 81 00 10 */	stw r4, 0x10(r1)
/* 80447EA0 00444DE0  90 83 00 10 */	stw r4, 0x10(r3)
.L_80447EA4:
/* 80447EA4 00444DE4  90 7D 00 D0 */	stw r3, 0xf0(r29)
/* 80447EA8 00444DE8  38 00 00 00 */	li r0, 0
/* 80447EAC 00444DEC  38 60 00 B0 */	li r3, 0xb0
/* 80447EB0 00444DF0  80 8D 88 F8 */	lwz r4, sManager__10JUTProcBar@sda21(r13)
/* 80447EB4 00444DF4  98 04 01 0C */	stb r0, 0x10c(r4)
/* 80447EB8 00444DF8  80 8D 88 F8 */	lwz r4, sManager__10JUTProcBar@sda21(r13)
/* 80447EBC 00444DFC  98 04 01 30 */	stb r0, 0x130(r4)
/* 80447EC0 00444E00  4B BD BF E5 */	bl __nw__FUl
/* 80447EC4 00444E04  7C 60 1B 79 */	or. r0, r3, r3
/* 80447EC8 00444E08  41 82 00 10 */	beq .L_80447ED8
/* 80447ECC 00444E0C  38 80 00 00 */	li r4, 0
/* 80447ED0 00444E10  4B FD CF 85 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80447ED4 00444E14  7C 60 1B 78 */	mr r0, r3
.L_80447ED8:
/* 80447ED8 00444E18  90 1D 00 D4 */	stw r0, 0xf4(r29)
/* 80447EDC 00444E1C  38 60 00 B0 */	li r3, 0xb0
/* 80447EE0 00444E20  4B BD BF C5 */	bl __nw__FUl
/* 80447EE4 00444E24  28 03 00 00 */	cmplwi r3, 0
/* 80447EE8 00444E28  41 82 00 0C */	beq .L_80447EF4
/* 80447EEC 00444E2C  38 80 00 01 */	li r4, 1
/* 80447EF0 00444E30  4B FD CF 65 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
.L_80447EF4:
/* 80447EF4 00444E34  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447EF8 00444E38  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80447EFC 00444E3C  4B FD AA 25 */	bl createRomFont__6SystemFP7JKRHeap
/* 80447F00 00444E40  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 80447F04 00444E44  38 80 00 01 */	li r4, 1
/* 80447F08 00444E48  48 00 DD A1 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 80447F0C 00444E4C  38 00 00 00 */	li r0, 0
/* 80447F10 00444E50  38 60 00 0C */	li r3, 0xc
/* 80447F14 00444E54  90 0D 9A 08 */	stw r0, particle2dMgr@sda21(r13)
/* 80447F18 00444E58  4B BD BF 8D */	bl __nw__FUl
/* 80447F1C 00444E5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80447F20 00444E60  41 82 01 60 */	beq .L_80448080
/* 80447F24 00444E64  80 0D 9C 1C */	lwz r0, sTinyPikminMgr@sda21(r13)
/* 80447F28 00444E68  28 00 00 00 */	cmplwi r0, 0
/* 80447F2C 00444E6C  41 82 00 18 */	beq .L_80447F44
/* 80447F30 00444E70  38 7E 00 0C */	addi r3, r30, 0xc
/* 80447F34 00444E74  38 BE 00 1C */	addi r5, r30, 0x1c
/* 80447F38 00444E78  38 80 02 DB */	li r4, 0x2db
/* 80447F3C 00444E7C  4C C6 31 82 */	crclr 6
/* 80447F40 00444E80  4B BE 27 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80447F44:
/* 80447F44 00444E84  93 ED 9C 1C */	stw r31, sTinyPikminMgr@sda21(r13)
/* 80447F48 00444E88  4B C8 16 59 */	bl rand
/* 80447F4C 00444E8C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447F50 00444E90  3C 00 43 30 */	lis r0, 0x4330
/* 80447F54 00444E94  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80447F58 00444E98  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447F5C 00444E9C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80447F60 00444EA0  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447F64 00444EA4  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80447F68 00444EA8  C0 02 26 AC */	lfs f0, lbl_80520A0C@sda21(r2)
/* 80447F6C 00444EAC  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447F70 00444EB0  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447F74 00444EB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447F78 00444EB8  40 80 00 0C */	bge .L_80447F84
/* 80447F7C 00444EBC  3B C0 00 0A */	li r30, 0xa
/* 80447F80 00444EC0  48 00 00 08 */	b .L_80447F88
.L_80447F84:
/* 80447F84 00444EC4  3B C0 00 64 */	li r30, 0x64
.L_80447F88:
/* 80447F88 00444EC8  1C 7E 00 34 */	mulli r3, r30, 0x34
/* 80447F8C 00444ECC  93 CD 86 90 */	stw r30, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80447F90 00444ED0  38 63 00 10 */	addi r3, r3, 0x10
/* 80447F94 00444ED4  4B BD C0 19 */	bl __nwa__FUl
/* 80447F98 00444ED8  3C 80 80 44 */	lis r4, __ct__10TinyPikminFv@ha
/* 80447F9C 00444EDC  7F C7 F3 78 */	mr r7, r30
/* 80447FA0 00444EE0  38 84 73 BC */	addi r4, r4, __ct__10TinyPikminFv@l
/* 80447FA4 00444EE4  38 A0 00 00 */	li r5, 0
/* 80447FA8 00444EE8  38 C0 00 34 */	li r6, 0x34
/* 80447FAC 00444EEC  4B C7 9A 45 */	bl __construct_new_array
/* 80447FB0 00444EF0  90 7F 00 00 */	stw r3, 0(r31)
/* 80447FB4 00444EF4  4B C8 15 ED */	bl rand
/* 80447FB8 00444EF8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447FBC 00444EFC  3C 00 43 30 */	lis r0, 0x4330
/* 80447FC0 00444F00  90 61 00 24 */	stw r3, 0x24(r1)
/* 80447FC4 00444F04  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447FC8 00444F08  90 01 00 20 */	stw r0, 0x20(r1)
/* 80447FCC 00444F0C  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447FD0 00444F10  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80447FD4 00444F14  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80447FD8 00444F18  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447FDC 00444F1C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447FE0 00444F20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447FE4 00444F24  40 81 00 10 */	ble .L_80447FF4
/* 80447FE8 00444F28  38 00 00 00 */	li r0, 0
/* 80447FEC 00444F2C  90 1F 00 04 */	stw r0, 4(r31)
/* 80447FF0 00444F30  48 00 00 0C */	b .L_80447FFC
.L_80447FF4:
/* 80447FF4 00444F34  38 00 00 01 */	li r0, 1
/* 80447FF8 00444F38  90 1F 00 04 */	stw r0, 4(r31)
.L_80447FFC:
/* 80447FFC 00444F3C  4B C8 15 A5 */	bl rand
/* 80448000 00444F40  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448004 00444F44  3C 00 43 30 */	lis r0, 0x4330
/* 80448008 00444F48  90 61 00 24 */	stw r3, 0x24(r1)
/* 8044800C 00444F4C  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80448010 00444F50  90 01 00 20 */	stw r0, 0x20(r1)
/* 80448014 00444F54  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80448018 00444F58  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8044801C 00444F5C  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80448020 00444F60  EC 42 18 28 */	fsubs f2, f2, f3
/* 80448024 00444F64  EC 22 08 24 */	fdivs f1, f2, f1
/* 80448028 00444F68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044802C 00444F6C  7C 00 00 26 */	mfcr r0
/* 80448030 00444F70  54 00 17 FE */	rlwinm r0, r0, 2, 0x1f, 0x1f
/* 80448034 00444F74  98 1F 00 08 */	stb r0, 8(r31)
/* 80448038 00444F78  4B C8 15 69 */	bl rand
/* 8044803C 00444F7C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448040 00444F80  3C 00 43 30 */	lis r0, 0x4330
/* 80448044 00444F84  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80448048 00444F88  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 8044804C 00444F8C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80448050 00444F90  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80448054 00444F94  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80448058 00444F98  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 8044805C 00444F9C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80448060 00444FA0  EC 22 08 24 */	fdivs f1, f2, f1
/* 80448064 00444FA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80448068 00444FA8  40 81 00 10 */	ble .L_80448078
/* 8044806C 00444FAC  38 00 00 01 */	li r0, 1
/* 80448070 00444FB0  98 1F 00 09 */	stb r0, 9(r31)
/* 80448074 00444FB4  48 00 00 0C */	b .L_80448080
.L_80448078:
/* 80448078 00444FB8  38 00 00 00 */	li r0, 0
/* 8044807C 00444FBC  98 1F 00 09 */	stb r0, 9(r31)
.L_80448080:
/* 80448080 00444FC0  93 FD 00 E0 */	stw r31, 0x100(r29)
/* 80448084 00444FC4  80 7D 00 E0 */	lwz r3, 0x100(r29)
/* 80448088 00444FC8  4B FF F8 1D */	bl init__13TinyPikminMgrFv
/* 8044808C 00444FCC  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80448090 00444FD0  7F A3 EB 78 */	mr r3, r29
/* 80448094 00444FD4  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 80448098 00444FD8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8044809C 00444FDC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 804480A0 00444FE0  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 804480A4 00444FE4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 804480A8 00444FE8  7C 08 03 A6 */	mtlr r0
/* 804480AC 00444FEC  38 21 00 40 */	addi r1, r1, 0x40
/* 804480B0 00444FF0  4E 80 00 20 */	blr 
.endfn __ct__11BootSectionFP7JKRHeap
.else
.fn __ct__11BootSectionFP7JKRHeap, global
/* 80447D6C 00444CAC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80447D70 00444CB0  7C 08 02 A6 */	mflr r0
/* 80447D74 00444CB4  3C A0 80 4A */	lis r5, lbl_8049AF08@ha
/* 80447D78 00444CB8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80447D7C 00444CBC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80447D80 00444CC0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80447D84 00444CC4  3B C5 AF 08 */	addi r30, r5, lbl_8049AF08@l
/* 80447D88 00444CC8  93 A1 00 34 */	stw r29, 0x34(r1)
/* 80447D8C 00444CCC  7C 7D 1B 78 */	mr r29, r3
/* 80447D90 00444CD0  4B D1 CE 61 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 80447D94 00444CD4  3C 60 80 4F */	lis r3, __vt__11BootSection@ha
/* 80447D98 00444CD8  38 80 FF FF */	li r4, -1
/* 80447D9C 00444CDC  38 03 D1 40 */	addi r0, r3, __vt__11BootSection@l
/* 80447DA0 00444CE0  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447DA4 00444CE4  90 1D 00 00 */	stw r0, 0(r29)
/* 80447DA8 00444CE8  38 00 00 00 */	li r0, 0
/* 80447DAC 00444CEC  38 7D 00 64 */	addi r3, r29, 0x64
/* 80447DB0 00444CF0  90 9D 00 48 */	stw r4, 0x48(r29)
/* 80447DB4 00444CF4  90 9D 00 4C */	stw r4, 0x4c(r29)
/* 80447DB8 00444CF8  D0 1D 00 50 */	stfs f0, 0x50(r29)
/* 80447DBC 00444CFC  90 1D 00 5C */	stw r0, 0x5c(r29)
/* 80447DC0 00444D00  4B FD CA 59 */	bl __ct__16DvdThreadCommandFv
/* 80447DC4 00444D04  38 00 00 00 */	li r0, 0
/* 80447DC8 00444D08  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80447DCC 00444D0C  90 1D 00 D4 */	stw r0, 0xd4(r29)
/* 80447DD0 00444D10  38 60 00 1C */	li r3, 0x1c
/* 80447DD4 00444D14  90 1D 00 D8 */	stw r0, 0xd8(r29)
/* 80447DD8 00444D18  98 1D 00 DC */	stb r0, 0xdc(r29)
/* 80447DDC 00444D1C  98 1D 00 DD */	stb r0, 0xdd(r29)
/* 80447DE0 00444D20  D0 1D 00 E4 */	stfs f0, 0xe4(r29)
/* 80447DE4 00444D24  93 AD 9C 18 */	stw r29, sBootSection@sda21(r13)
/* 80447DE8 00444D28  4B BD C0 BD */	bl __nw__FUl
/* 80447DEC 00444D2C  7C 64 1B 79 */	or. r4, r3, r3
/* 80447DF0 00444D30  41 82 00 10 */	beq .L_80447E00
/* 80447DF4 00444D34  7F A4 EB 78 */	mr r4, r29
/* 80447DF8 00444D38  4B D1 D1 E1 */	bl __ct__Q24Game11HIORootNodeFP7Section
/* 80447DFC 00444D3C  7C 64 1B 78 */	mr r4, r3
.L_80447E00:
/* 80447E00 00444D40  38 1E 00 A8 */	addi r0, r30, 0xa8
/* 80447E04 00444D44  7F A3 EB 78 */	mr r3, r29
/* 80447E08 00444D48  90 04 00 14 */	stw r0, 0x14(r4)
/* 80447E0C 00444D4C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80447E10 00444D50  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 80447E14 00444D54  7D 89 03 A6 */	mtctr r12
/* 80447E18 00444D58  4E 80 04 21 */	bctrl 
/* 80447E1C 00444D5C  80 9D 00 1C */	lwz r4, 0x1c(r29)
/* 80447E20 00444D60  38 60 00 00 */	li r3, 0
/* 80447E24 00444D64  38 A0 00 02 */	li r5, 2
/* 80447E28 00444D68  38 C0 00 00 */	li r6, 0
/* 80447E2C 00444D6C  4B C4 1C FD */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 80447E30 00444D70  7C 64 1B 78 */	mr r4, r3
/* 80447E34 00444D74  7F A3 EB 78 */	mr r3, r29
/* 80447E38 00444D78  38 A0 00 01 */	li r5, 1
/* 80447E3C 00444D7C  4B D1 CF 99 */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 80447E40 00444D80  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447E44 00444D84  38 80 00 01 */	li r4, 1
/* 80447E48 00444D88  4B FD B6 E5 */	bl setFrameRate__6SystemFi
/* 80447E4C 00444D8C  38 60 00 14 */	li r3, 0x14
/* 80447E50 00444D90  4B BD C0 55 */	bl __nw__FUl
/* 80447E54 00444D94  28 03 00 00 */	cmplwi r3, 0
/* 80447E58 00444D98  41 82 00 4C */	beq .L_80447EA4
/* 80447E5C 00444D9C  3C 80 80 4F */	lis r4, lbl_804ED004@ha
/* 80447E60 00444DA0  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 80447E64 00444DA4  39 04 D0 04 */	addi r8, r4, lbl_804ED004@l
/* 80447E68 00444DA8  3C 80 80 4F */	lis r4, "__vt__23Delegate<11BootSection>"@ha
/* 80447E6C 00444DAC  80 E8 00 00 */	lwz r7, 0(r8)
/* 80447E70 00444DB0  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 80447E74 00444DB4  80 C8 00 04 */	lwz r6, 4(r8)
/* 80447E78 00444DB8  38 04 D1 90 */	addi r0, r4, "__vt__23Delegate<11BootSection>"@l
/* 80447E7C 00444DBC  80 88 00 08 */	lwz r4, 8(r8)
/* 80447E80 00444DC0  90 E1 00 08 */	stw r7, 8(r1)
/* 80447E84 00444DC4  90 A3 00 00 */	stw r5, 0(r3)
/* 80447E88 00444DC8  90 03 00 00 */	stw r0, 0(r3)
/* 80447E8C 00444DCC  93 A3 00 04 */	stw r29, 4(r3)
/* 80447E90 00444DD0  90 E3 00 08 */	stw r7, 8(r3)
/* 80447E94 00444DD4  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80447E98 00444DD8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80447E9C 00444DDC  90 81 00 10 */	stw r4, 0x10(r1)
/* 80447EA0 00444DE0  90 83 00 10 */	stw r4, 0x10(r3)
.L_80447EA4:
/* 80447EA4 00444DE4  90 7D 00 D0 */	stw r3, 0xd0(r29)
/* 80447EA8 00444DE8  38 00 00 00 */	li r0, 0
/* 80447EAC 00444DEC  38 60 00 B0 */	li r3, 0xb0
/* 80447EB0 00444DF0  80 8D 88 F8 */	lwz r4, sManager__10JUTProcBar@sda21(r13)
/* 80447EB4 00444DF4  98 04 01 0C */	stb r0, 0x10c(r4)
/* 80447EB8 00444DF8  80 8D 88 F8 */	lwz r4, sManager__10JUTProcBar@sda21(r13)
/* 80447EBC 00444DFC  98 04 01 30 */	stb r0, 0x130(r4)
/* 80447EC0 00444E00  4B BD BF E5 */	bl __nw__FUl
/* 80447EC4 00444E04  7C 60 1B 79 */	or. r0, r3, r3
/* 80447EC8 00444E08  41 82 00 10 */	beq .L_80447ED8
/* 80447ECC 00444E0C  38 80 00 00 */	li r4, 0
/* 80447ED0 00444E10  4B FD CF 85 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80447ED4 00444E14  7C 60 1B 78 */	mr r0, r3
.L_80447ED8:
/* 80447ED8 00444E18  90 1D 00 D4 */	stw r0, 0xd4(r29)
/* 80447EDC 00444E1C  38 60 00 B0 */	li r3, 0xb0
/* 80447EE0 00444E20  4B BD BF C5 */	bl __nw__FUl
/* 80447EE4 00444E24  28 03 00 00 */	cmplwi r3, 0
/* 80447EE8 00444E28  41 82 00 0C */	beq .L_80447EF4
/* 80447EEC 00444E2C  38 80 00 01 */	li r4, 1
/* 80447EF0 00444E30  4B FD CF 65 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
.L_80447EF4:
/* 80447EF4 00444E34  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80447EF8 00444E38  80 8D 88 2C */	lwz r4, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80447EFC 00444E3C  4B FD AA 25 */	bl createRomFont__6SystemFP7JKRHeap
/* 80447F00 00444E40  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 80447F04 00444E44  38 80 00 01 */	li r4, 1
/* 80447F08 00444E48  48 00 DD A1 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 80447F0C 00444E4C  38 00 00 00 */	li r0, 0
/* 80447F10 00444E50  38 60 00 0C */	li r3, 0xc
/* 80447F14 00444E54  90 0D 9A 08 */	stw r0, particle2dMgr@sda21(r13)
/* 80447F18 00444E58  4B BD BF 8D */	bl __nw__FUl
/* 80447F1C 00444E5C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80447F20 00444E60  41 82 01 60 */	beq .L_80448080
/* 80447F24 00444E64  80 0D 9C 1C */	lwz r0, sTinyPikminMgr@sda21(r13)
/* 80447F28 00444E68  28 00 00 00 */	cmplwi r0, 0
/* 80447F2C 00444E6C  41 82 00 18 */	beq .L_80447F44
/* 80447F30 00444E70  38 7E 00 0C */	addi r3, r30, 0xc
/* 80447F34 00444E74  38 BE 00 1C */	addi r5, r30, 0x1c
/* 80447F38 00444E78  38 80 02 DB */	li r4, 0x2db
/* 80447F3C 00444E7C  4C C6 31 82 */	crclr 6
/* 80447F40 00444E80  4B BE 27 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80447F44:
/* 80447F44 00444E84  93 ED 9C 1C */	stw r31, sTinyPikminMgr@sda21(r13)
/* 80447F48 00444E88  4B C8 16 59 */	bl rand
/* 80447F4C 00444E8C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447F50 00444E90  3C 00 43 30 */	lis r0, 0x4330
/* 80447F54 00444E94  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80447F58 00444E98  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447F5C 00444E9C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80447F60 00444EA0  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447F64 00444EA4  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80447F68 00444EA8  C0 02 26 AC */	lfs f0, lbl_80520A0C@sda21(r2)
/* 80447F6C 00444EAC  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447F70 00444EB0  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447F74 00444EB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447F78 00444EB8  40 80 00 0C */	bge .L_80447F84
/* 80447F7C 00444EBC  3B C0 00 0A */	li r30, 0xa
/* 80447F80 00444EC0  48 00 00 08 */	b .L_80447F88
.L_80447F84:
/* 80447F84 00444EC4  3B C0 00 64 */	li r30, 0x64
.L_80447F88:
/* 80447F88 00444EC8  1C 7E 00 34 */	mulli r3, r30, 0x34
/* 80447F8C 00444ECC  93 CD 86 90 */	stw r30, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80447F90 00444ED0  38 63 00 10 */	addi r3, r3, 0x10
/* 80447F94 00444ED4  4B BD C0 19 */	bl __nwa__FUl
/* 80447F98 00444ED8  3C 80 80 44 */	lis r4, __ct__10TinyPikminFv@ha
/* 80447F9C 00444EDC  7F C7 F3 78 */	mr r7, r30
/* 80447FA0 00444EE0  38 84 73 BC */	addi r4, r4, __ct__10TinyPikminFv@l
/* 80447FA4 00444EE4  38 A0 00 00 */	li r5, 0
/* 80447FA8 00444EE8  38 C0 00 34 */	li r6, 0x34
/* 80447FAC 00444EEC  4B C7 9A 45 */	bl __construct_new_array
/* 80447FB0 00444EF0  90 7F 00 00 */	stw r3, 0(r31)
/* 80447FB4 00444EF4  4B C8 15 ED */	bl rand
/* 80447FB8 00444EF8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80447FBC 00444EFC  3C 00 43 30 */	lis r0, 0x4330
/* 80447FC0 00444F00  90 61 00 24 */	stw r3, 0x24(r1)
/* 80447FC4 00444F04  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80447FC8 00444F08  90 01 00 20 */	stw r0, 0x20(r1)
/* 80447FCC 00444F0C  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80447FD0 00444F10  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 80447FD4 00444F14  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80447FD8 00444F18  EC 42 18 28 */	fsubs f2, f2, f3
/* 80447FDC 00444F1C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80447FE0 00444F20  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80447FE4 00444F24  40 81 00 10 */	ble .L_80447FF4
/* 80447FE8 00444F28  38 00 00 00 */	li r0, 0
/* 80447FEC 00444F2C  90 1F 00 04 */	stw r0, 4(r31)
/* 80447FF0 00444F30  48 00 00 0C */	b .L_80447FFC
.L_80447FF4:
/* 80447FF4 00444F34  38 00 00 01 */	li r0, 1
/* 80447FF8 00444F38  90 1F 00 04 */	stw r0, 4(r31)
.L_80447FFC:
/* 80447FFC 00444F3C  4B C8 15 A5 */	bl rand
/* 80448000 00444F40  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448004 00444F44  3C 00 43 30 */	lis r0, 0x4330
/* 80448008 00444F48  90 61 00 24 */	stw r3, 0x24(r1)
/* 8044800C 00444F4C  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 80448010 00444F50  90 01 00 20 */	stw r0, 0x20(r1)
/* 80448014 00444F54  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80448018 00444F58  C8 41 00 20 */	lfd f2, 0x20(r1)
/* 8044801C 00444F5C  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80448020 00444F60  EC 42 18 28 */	fsubs f2, f2, f3
/* 80448024 00444F64  EC 22 08 24 */	fdivs f1, f2, f1
/* 80448028 00444F68  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044802C 00444F6C  7C 00 00 26 */	mfcr r0
/* 80448030 00444F70  54 00 17 FE */	rlwinm r0, r0, 2, 0x1f, 0x1f
/* 80448034 00444F74  98 1F 00 08 */	stb r0, 8(r31)
/* 80448038 00444F78  4B C8 15 69 */	bl rand
/* 8044803C 00444F7C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448040 00444F80  3C 00 43 30 */	lis r0, 0x4330
/* 80448044 00444F84  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80448048 00444F88  C8 62 26 60 */	lfd f3, lbl_805209C0@sda21(r2)
/* 8044804C 00444F8C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80448050 00444F90  C0 22 26 4C */	lfs f1, lbl_805209AC@sda21(r2)
/* 80448054 00444F94  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 80448058 00444F98  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 8044805C 00444F9C  EC 42 18 28 */	fsubs f2, f2, f3
/* 80448060 00444FA0  EC 22 08 24 */	fdivs f1, f2, f1
/* 80448064 00444FA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80448068 00444FA8  40 81 00 10 */	ble .L_80448078
/* 8044806C 00444FAC  38 00 00 01 */	li r0, 1
/* 80448070 00444FB0  98 1F 00 09 */	stb r0, 9(r31)
/* 80448074 00444FB4  48 00 00 0C */	b .L_80448080
.L_80448078:
/* 80448078 00444FB8  38 00 00 00 */	li r0, 0
/* 8044807C 00444FBC  98 1F 00 09 */	stb r0, 9(r31)
.L_80448080:
/* 80448080 00444FC0  93 FD 00 E0 */	stw r31, 0xe0(r29)
/* 80448084 00444FC4  80 7D 00 E0 */	lwz r3, 0xe0(r29)
/* 80448088 00444FC8  4B FF F8 1D */	bl init__13TinyPikminMgrFv
/* 8044808C 00444FCC  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80448090 00444FD0  7F A3 EB 78 */	mr r3, r29
/* 80448094 00444FD4  D0 1D 00 30 */	stfs f0, 0x30(r29)
/* 80448098 00444FD8  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8044809C 00444FDC  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 804480A0 00444FE0  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 804480A4 00444FE4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 804480A8 00444FE8  7C 08 03 A6 */	mtlr r0
/* 804480AC 00444FEC  38 21 00 40 */	addi r1, r1, 0x40
/* 804480B0 00444FF0  4E 80 00 20 */	blr 
.endfn __ct__11BootSectionFP7JKRHeap
.endif

.if version == 0
.fn __dt__11BootSectionFv, global
/* 804480B4 00444FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804480B8 00444FF8  7C 08 02 A6 */	mflr r0
/* 804480BC 00444FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804480C0 00445000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804480C4 00445004  7C 9F 23 78 */	mr r31, r4
/* 804480C8 00445008  93 C1 00 08 */	stw r30, 8(r1)
/* 804480CC 0044500C  7C 7E 1B 79 */	or. r30, r3, r3
/* 804480D0 00445010  41 82 00 4C */	beq .L_8044811C
/* 804480D4 00445014  3C 60 80 4F */	lis r3, __vt__11BootSection@ha
/* 804480D8 00445018  38 03 D1 40 */	addi r0, r3, __vt__11BootSection@l
/* 804480DC 0044501C  90 1E 00 00 */	stw r0, 0(r30)
/* 804480E0 00445020  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804480E4 00445024  4B FD A8 91 */	bl destroyRomFont__6SystemFv
/* 804480E8 00445028  34 1E 00 64 */	addic. r0, r30, 0x84
/* 804480EC 0044502C  41 82 00 14 */	beq .L_80448100
/* 804480F0 00445030  34 7E 00 C0 */	addic. r3, r30, 0xe0
/* 804480F4 00445034  41 82 00 0C */	beq .L_80448100
/* 804480F8 00445038  38 80 00 00 */	li r4, 0
/* 804480FC 0044503C  4B BD E6 D5 */	bl __dt__10JSUPtrLinkFv
.L_80448100:
/* 80448100 00445040  7F C3 F3 78 */	mr r3, r30
/* 80448104 00445044  38 80 00 00 */	li r4, 0
/* 80448108 00445048  4B D1 CB A9 */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8044810C 0044504C  7F E0 07 35 */	extsh. r0, r31
/* 80448110 00445050  40 81 00 0C */	ble .L_8044811C
/* 80448114 00445054  7F C3 F3 78 */	mr r3, r30
/* 80448118 00445058  4B BD BF 9D */	bl __dl__FPv
.L_8044811C:
/* 8044811C 0044505C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80448120 00445060  7F C3 F3 78 */	mr r3, r30
/* 80448124 00445064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80448128 00445068  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044812C 0044506C  7C 08 03 A6 */	mtlr r0
/* 80448130 00445070  38 21 00 10 */	addi r1, r1, 0x10
/* 80448134 00445074  4E 80 00 20 */	blr 
.endfn __dt__11BootSectionFv
.else
.fn __dt__11BootSectionFv, global
/* 804480B4 00444FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804480B8 00444FF8  7C 08 02 A6 */	mflr r0
/* 804480BC 00444FFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804480C0 00445000  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804480C4 00445004  7C 9F 23 78 */	mr r31, r4
/* 804480C8 00445008  93 C1 00 08 */	stw r30, 8(r1)
/* 804480CC 0044500C  7C 7E 1B 79 */	or. r30, r3, r3
/* 804480D0 00445010  41 82 00 4C */	beq .L_8044811C
/* 804480D4 00445014  3C 60 80 4F */	lis r3, __vt__11BootSection@ha
/* 804480D8 00445018  38 03 D1 40 */	addi r0, r3, __vt__11BootSection@l
/* 804480DC 0044501C  90 1E 00 00 */	stw r0, 0(r30)
/* 804480E0 00445020  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804480E4 00445024  4B FD A8 91 */	bl destroyRomFont__6SystemFv
/* 804480E8 00445028  34 1E 00 64 */	addic. r0, r30, 0x64
/* 804480EC 0044502C  41 82 00 14 */	beq .L_80448100
/* 804480F0 00445030  34 7E 00 C0 */	addic. r3, r30, 0xc0
/* 804480F4 00445034  41 82 00 0C */	beq .L_80448100
/* 804480F8 00445038  38 80 00 00 */	li r4, 0
/* 804480FC 0044503C  4B BD E6 D5 */	bl __dt__10JSUPtrLinkFv
.L_80448100:
/* 80448100 00445040  7F C3 F3 78 */	mr r3, r30
/* 80448104 00445044  38 80 00 00 */	li r4, 0
/* 80448108 00445048  4B D1 CB A9 */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8044810C 0044504C  7F E0 07 35 */	extsh. r0, r31
/* 80448110 00445050  40 81 00 0C */	ble .L_8044811C
/* 80448114 00445054  7F C3 F3 78 */	mr r3, r30
/* 80448118 00445058  4B BD BF 9D */	bl __dl__FPv
.L_8044811C:
/* 8044811C 0044505C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80448120 00445060  7F C3 F3 78 */	mr r3, r30
/* 80448124 00445064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80448128 00445068  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044812C 0044506C  7C 08 03 A6 */	mtlr r0
/* 80448130 00445070  38 21 00 10 */	addi r1, r1, 0x10
/* 80448134 00445074  4E 80 00 20 */	blr 
.endfn __dt__11BootSectionFv
.endif

.fn init__11BootSectionFv, global
/* 80448138 00445078  4E 80 00 20 */	blr 
.endfn init__11BootSectionFv

.if version == 0
.fn loadBootResource__11BootSectionFv, global
/* 8044813C 0044507C  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 80448140 00445080  7C 08 02 A6 */	mflr r0
/* 80448144 00445084  3C 80 80 4A */	lis r4, lbl_8049AF08@ha
/* 80448148 00445088  90 01 01 44 */	stw r0, 0x144(r1)
/* 8044814C 0044508C  BF 21 01 24 */	stmw r25, 0x124(r1)
/* 80448150 00445090  7C 7C 1B 78 */	mr r28, r3
/* 80448154 00445094  3B E4 AF 08 */	addi r31, r4, lbl_8049AF08@l
/* 80448158 00445098  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8044815C 0044509C  4B BD B4 49 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80448160 004450A0  38 7F 00 BC */	addi r3, r31, 0xbc
/* 80448164 004450A4  38 80 00 01 */	li r4, 1
/* 80448168 004450A8  38 A0 00 00 */	li r5, 0
/* 8044816C 004450AC  38 C0 00 01 */	li r6, 1
/* 80448170 004450B0  4B BD 2F C1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 80448174 004450B4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80448178 004450B8  40 82 00 18 */	bne .L_80448190
/* 8044817C 004450BC  38 7F 00 0C */	addi r3, r31, 0xc
/* 80448180 004450C0  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80448184 004450C4  38 80 04 01 */	li r4, 0x401
/* 80448188 004450C8  4C C6 31 82 */	crclr 6
/* 8044818C 004450CC  4B BE 24 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80448190:
/* 80448190 004450D0  38 7F 00 DC */	addi r3, r31, 0xdc
/* 80448194 004450D4  4B BD AE 39 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 80448198 004450D8  7C 7A 1B 79 */	or. r26, r3, r3
/* 8044819C 004450DC  40 82 00 18 */	bne .L_804481B4
/* 804481A0 004450E0  38 7F 00 0C */	addi r3, r31, 0xc
/* 804481A4 004450E4  38 BF 00 1C */	addi r5, r31, 0x1c
/* 804481A8 004450E8  38 80 04 07 */	li r4, 0x407
/* 804481AC 004450EC  4C C6 31 82 */	crclr 6
/* 804481B0 004450F0  4B BE 24 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804481B4:
/* 804481B4 004450F4  38 60 00 40 */	li r3, 0x40
/* 804481B8 004450F8  4B BD BC ED */	bl __nw__FUl
/* 804481BC 004450FC  7C 7D 1B 79 */	or. r29, r3, r3
/* 804481C0 00445100  41 82 00 24 */	beq .L_804481E4
/* 804481C4 00445104  38 00 00 00 */	li r0, 0
/* 804481C8 00445108  7F 44 D3 78 */	mr r4, r26
/* 804481CC 0044510C  90 1D 00 28 */	stw r0, 0x28(r29)
/* 804481D0 00445110  38 A0 00 00 */	li r5, 0
/* 804481D4 00445114  4B BE AE B1 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 804481D8 00445118  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 804481DC 0044511C  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 804481E0 00445120  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_804481E4:
/* 804481E4 00445124  93 BC 00 5C */	stw r29, 0x7c(r28)
/* 804481E8 00445128  38 7F 00 FC */	addi r3, r31, 0xfc
/* 804481EC 0044512C  4B BD AD E1 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 804481F0 00445130  7C 7A 1B 79 */	or. r26, r3, r3
/* 804481F4 00445134  40 82 00 18 */	bne .L_8044820C
/* 804481F8 00445138  38 7F 00 0C */	addi r3, r31, 0xc
/* 804481FC 0044513C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80448200 00445140  38 80 04 0A */	li r4, 0x40a
/* 80448204 00445144  4C C6 31 82 */	crclr 6
/* 80448208 00445148  4B BE 24 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044820C:
/* 8044820C 0044514C  38 60 00 40 */	li r3, 0x40
/* 80448210 00445150  4B BD BC 95 */	bl __nw__FUl
/* 80448214 00445154  7C 7D 1B 79 */	or. r29, r3, r3
/* 80448218 00445158  41 82 00 24 */	beq .L_8044823C
/* 8044821C 0044515C  38 00 00 00 */	li r0, 0
/* 80448220 00445160  7F 44 D3 78 */	mr r4, r26
/* 80448224 00445164  90 1D 00 28 */	stw r0, 0x28(r29)
/* 80448228 00445168  38 A0 00 00 */	li r5, 0
/* 8044822C 0044516C  4B BE AE 59 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80448230 00445170  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 80448234 00445174  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 80448238 00445178  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_8044823C:
/* 8044823C 0044517C  93 BC 00 60 */	stw r29, 0x80(r28)
/* 80448240 00445180  38 7F 01 18 */	addi r3, r31, 0x118
/* 80448244 00445184  4B BD AD 89 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 80448248 00445188  7C 7A 1B 79 */	or. r26, r3, r3
/* 8044824C 0044518C  40 82 00 18 */	bne .L_80448264
/* 80448250 00445190  38 7F 00 0C */	addi r3, r31, 0xc
/* 80448254 00445194  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80448258 00445198  38 80 04 0F */	li r4, 0x40f
/* 8044825C 0044519C  4C C6 31 82 */	crclr 6
/* 80448260 004451A0  4B BE 23 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80448264:
/* 80448264 004451A4  38 60 00 40 */	li r3, 0x40
/* 80448268 004451A8  4B BD BC 3D */	bl __nw__FUl
/* 8044826C 004451AC  7C 7D 1B 79 */	or. r29, r3, r3
/* 80448270 004451B0  41 82 00 24 */	beq .L_80448294
/* 80448274 004451B4  38 00 00 00 */	li r0, 0
/* 80448278 004451B8  7F 44 D3 78 */	mr r4, r26
/* 8044827C 004451BC  90 1D 00 28 */	stw r0, 0x28(r29)
/* 80448280 004451C0  38 A0 00 00 */	li r5, 0
/* 80448284 004451C4  4B BE AE 01 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80448288 004451C8  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 8044828C 004451CC  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 80448290 004451D0  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_80448294:
/* 80448294 004451D4  93 BC 00 54 */	stw r29, 0x74(r28)
/* 80448298 004451D8  38 7F 01 30 */	addi r3, r31, 0x130
/* 8044829C 004451DC  4B BD AD 31 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 804482A0 004451E0  7C 7A 1B 79 */	or. r26, r3, r3
/* 804482A4 004451E4  40 82 00 18 */	bne .L_804482BC
/* 804482A8 004451E8  38 7F 00 0C */	addi r3, r31, 0xc
/* 804482AC 004451EC  38 BF 00 1C */	addi r5, r31, 0x1c
/* 804482B0 004451F0  38 80 04 12 */	li r4, 0x412
/* 804482B4 004451F4  4C C6 31 82 */	crclr 6
/* 804482B8 004451F8  4B BE 23 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804482BC:
/* 804482BC 004451FC  38 60 00 40 */	li r3, 0x40
/* 804482C0 00445200  4B BD BB E5 */	bl __nw__FUl
/* 804482C4 00445204  7C 7D 1B 79 */	or. r29, r3, r3
/* 804482C8 00445208  41 82 00 24 */	beq .L_804482EC
/* 804482CC 0044520C  38 00 00 00 */	li r0, 0
/* 804482D0 00445210  7F 44 D3 78 */	mr r4, r26
/* 804482D4 00445214  90 1D 00 28 */	stw r0, 0x28(r29)
/* 804482D8 00445218  38 A0 00 00 */	li r5, 0
/* 804482DC 0044521C  4B BE AD A9 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 804482E0 00445220  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 804482E4 00445224  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 804482E8 00445228  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_804482EC:
/* 804482EC 0044522C  93 BC 00 58 */	stw r29, 0x78(r28)
/* 804482F0 00445230  3C 60 80 51 */	lis r3, sPikminTex__13TinyPikminMgr@ha
/* 804482F4 00445234  3B 83 44 78 */	addi r28, r3, sPikminTex__13TinyPikminMgr@l
/* 804482F8 00445238  3B A1 00 08 */	addi r29, r1, 8
/* 804482FC 0044523C  80 DF 00 94 */	lwz r6, 0x94(r31)
/* 80448300 00445240  3B 60 00 00 */	li r27, 0
/* 80448304 00445244  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 80448308 00445248  80 9F 00 9C */	lwz r4, 0x9c(r31)
/* 8044830C 0044524C  80 7F 00 A0 */	lwz r3, 0xa0(r31)
/* 80448310 00445250  80 1F 00 A4 */	lwz r0, 0xa4(r31)
/* 80448314 00445254  90 C1 00 08 */	stw r6, 8(r1)
/* 80448318 00445258  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8044831C 0044525C  90 81 00 10 */	stw r4, 0x10(r1)
/* 80448320 00445260  90 61 00 14 */	stw r3, 0x14(r1)
/* 80448324 00445264  90 01 00 18 */	stw r0, 0x18(r1)
.L_80448328:
/* 80448328 00445268  80 BD 00 00 */	lwz r5, 0(r29)
/* 8044832C 0044526C  38 61 00 1C */	addi r3, r1, 0x1c
/* 80448330 00445270  38 82 26 C8 */	addi r4, r2, lbl_80520A28@sda21
/* 80448334 00445274  4C C6 31 82 */	crclr 6
/* 80448338 00445278  4B C7 F1 01 */	bl sprintf
/* 8044833C 0044527C  7F C3 F3 78 */	mr r3, r30
/* 80448340 00445280  38 81 00 1C */	addi r4, r1, 0x1c
/* 80448344 00445284  81 9E 00 00 */	lwz r12, 0(r30)
/* 80448348 00445288  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044834C 0044528C  7D 89 03 A6 */	mtctr r12
/* 80448350 00445290  4E 80 04 21 */	bctrl 
/* 80448354 00445294  7C 7A 1B 79 */	or. r26, r3, r3
/* 80448358 00445298  40 82 00 18 */	bne .L_80448370
/* 8044835C 0044529C  38 7F 00 0C */	addi r3, r31, 0xc
/* 80448360 004452A0  38 A1 00 1C */	addi r5, r1, 0x1c
/* 80448364 004452A4  38 80 03 12 */	li r4, 0x312
/* 80448368 004452A8  4C C6 31 82 */	crclr 6
/* 8044836C 004452AC  4B BE 22 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80448370:
/* 80448370 004452B0  38 60 00 40 */	li r3, 0x40
/* 80448374 004452B4  4B BD BB 31 */	bl __nw__FUl
/* 80448378 004452B8  7C 79 1B 79 */	or. r25, r3, r3
/* 8044837C 004452BC  41 82 00 24 */	beq .L_804483A0
/* 80448380 004452C0  38 00 00 00 */	li r0, 0
/* 80448384 004452C4  7F 44 D3 78 */	mr r4, r26
/* 80448388 004452C8  90 19 00 28 */	stw r0, 0x28(r25)
/* 8044838C 004452CC  38 A0 00 00 */	li r5, 0
/* 80448390 004452D0  4B BE AC F5 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80448394 004452D4  88 19 00 3B */	lbz r0, 0x3b(r25)
/* 80448398 004452D8  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8044839C 004452DC  98 19 00 3B */	stb r0, 0x3b(r25)
.L_804483A0:
/* 804483A0 004452E0  38 60 01 68 */	li r3, 0x168
/* 804483A4 004452E4  4B BD BB 01 */	bl __nw__FUl
/* 804483A8 004452E8  7C 60 1B 79 */	or. r0, r3, r3
/* 804483AC 004452EC  41 82 00 10 */	beq .L_804483BC
/* 804483B0 004452F0  7F 24 CB 78 */	mr r4, r25
/* 804483B4 004452F4  4B BF 21 5D */	bl __ct__10J2DPictureFP10JUTTexture
/* 804483B8 004452F8  7C 60 1B 78 */	mr r0, r3
.L_804483BC:
/* 804483BC 004452FC  90 1C 00 00 */	stw r0, 0(r28)
/* 804483C0 00445300  38 80 00 07 */	li r4, 7
/* 804483C4 00445304  80 7C 00 00 */	lwz r3, 0(r28)
/* 804483C8 00445308  4B BF 08 F5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 804483CC 0044530C  3B 7B 00 01 */	addi r27, r27, 1
/* 804483D0 00445310  3B 9C 00 04 */	addi r28, r28, 4
/* 804483D4 00445314  2C 1B 00 05 */	cmpwi r27, 5
/* 804483D8 00445318  3B BD 00 04 */	addi r29, r29, 4
/* 804483DC 0044531C  41 80 FF 4C */	blt .L_80448328
/* 804483E0 00445320  BB 21 01 24 */	lmw r25, 0x124(r1)
/* 804483E4 00445324  80 01 01 44 */	lwz r0, 0x144(r1)
/* 804483E8 00445328  7C 08 03 A6 */	mtlr r0
/* 804483EC 0044532C  38 21 01 40 */	addi r1, r1, 0x140
/* 804483F0 00445330  4E 80 00 20 */	blr 
.endfn loadBootResource__11BootSectionFv
.else
.fn loadBootResource__11BootSectionFv, global
/* 8044813C 0044507C  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 80448140 00445080  7C 08 02 A6 */	mflr r0
/* 80448144 00445084  3C 80 80 4A */	lis r4, lbl_8049AF08@ha
/* 80448148 00445088  90 01 01 44 */	stw r0, 0x144(r1)
/* 8044814C 0044508C  BF 21 01 24 */	stmw r25, 0x124(r1)
/* 80448150 00445090  7C 7C 1B 78 */	mr r28, r3
/* 80448154 00445094  3B E4 AF 08 */	addi r31, r4, lbl_8049AF08@l
/* 80448158 00445098  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8044815C 0044509C  4B BD B4 49 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80448160 004450A0  38 7F 00 BC */	addi r3, r31, 0xbc
/* 80448164 004450A4  38 80 00 01 */	li r4, 1
/* 80448168 004450A8  38 A0 00 00 */	li r5, 0
/* 8044816C 004450AC  38 C0 00 01 */	li r6, 1
/* 80448170 004450B0  4B BD 2F C1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 80448174 004450B4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80448178 004450B8  40 82 00 18 */	bne .L_80448190
/* 8044817C 004450BC  38 7F 00 0C */	addi r3, r31, 0xc
/* 80448180 004450C0  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80448184 004450C4  38 80 04 01 */	li r4, 0x401
/* 80448188 004450C8  4C C6 31 82 */	crclr 6
/* 8044818C 004450CC  4B BE 24 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80448190:
/* 80448190 004450D0  38 7F 00 DC */	addi r3, r31, 0xdc
/* 80448194 004450D4  4B BD AE 39 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 80448198 004450D8  7C 7A 1B 79 */	or. r26, r3, r3
/* 8044819C 004450DC  40 82 00 18 */	bne .L_804481B4
/* 804481A0 004450E0  38 7F 00 0C */	addi r3, r31, 0xc
/* 804481A4 004450E4  38 BF 00 1C */	addi r5, r31, 0x1c
/* 804481A8 004450E8  38 80 04 07 */	li r4, 0x407
/* 804481AC 004450EC  4C C6 31 82 */	crclr 6
/* 804481B0 004450F0  4B BE 24 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804481B4:
/* 804481B4 004450F4  38 60 00 40 */	li r3, 0x40
/* 804481B8 004450F8  4B BD BC ED */	bl __nw__FUl
/* 804481BC 004450FC  7C 7D 1B 79 */	or. r29, r3, r3
/* 804481C0 00445100  41 82 00 24 */	beq .L_804481E4
/* 804481C4 00445104  38 00 00 00 */	li r0, 0
/* 804481C8 00445108  7F 44 D3 78 */	mr r4, r26
/* 804481CC 0044510C  90 1D 00 28 */	stw r0, 0x28(r29)
/* 804481D0 00445110  38 A0 00 00 */	li r5, 0
/* 804481D4 00445114  4B BE AE B1 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 804481D8 00445118  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 804481DC 0044511C  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 804481E0 00445120  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_804481E4:
/* 804481E4 00445124  93 BC 00 5C */	stw r29, 0x5c(r28)
/* 804481E8 00445128  38 7F 00 FC */	addi r3, r31, 0xfc
/* 804481EC 0044512C  4B BD AD E1 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 804481F0 00445130  7C 7A 1B 79 */	or. r26, r3, r3
/* 804481F4 00445134  40 82 00 18 */	bne .L_8044820C
/* 804481F8 00445138  38 7F 00 0C */	addi r3, r31, 0xc
/* 804481FC 0044513C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80448200 00445140  38 80 04 0A */	li r4, 0x40a
/* 80448204 00445144  4C C6 31 82 */	crclr 6
/* 80448208 00445148  4B BE 24 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044820C:
/* 8044820C 0044514C  38 60 00 40 */	li r3, 0x40
/* 80448210 00445150  4B BD BC 95 */	bl __nw__FUl
/* 80448214 00445154  7C 7D 1B 79 */	or. r29, r3, r3
/* 80448218 00445158  41 82 00 24 */	beq .L_8044823C
/* 8044821C 0044515C  38 00 00 00 */	li r0, 0
/* 80448220 00445160  7F 44 D3 78 */	mr r4, r26
/* 80448224 00445164  90 1D 00 28 */	stw r0, 0x28(r29)
/* 80448228 00445168  38 A0 00 00 */	li r5, 0
/* 8044822C 0044516C  4B BE AE 59 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80448230 00445170  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 80448234 00445174  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 80448238 00445178  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_8044823C:
/* 8044823C 0044517C  93 BC 00 60 */	stw r29, 0x60(r28)
/* 80448240 00445180  38 7F 01 18 */	addi r3, r31, 0x118
/* 80448244 00445184  4B BD AD 89 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 80448248 00445188  7C 7A 1B 79 */	or. r26, r3, r3
/* 8044824C 0044518C  40 82 00 18 */	bne .L_80448264
/* 80448250 00445190  38 7F 00 0C */	addi r3, r31, 0xc
/* 80448254 00445194  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80448258 00445198  38 80 04 0F */	li r4, 0x40f
/* 8044825C 0044519C  4C C6 31 82 */	crclr 6
/* 80448260 004451A0  4B BE 23 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80448264:
/* 80448264 004451A4  38 60 00 40 */	li r3, 0x40
/* 80448268 004451A8  4B BD BC 3D */	bl __nw__FUl
/* 8044826C 004451AC  7C 7D 1B 79 */	or. r29, r3, r3
/* 80448270 004451B0  41 82 00 24 */	beq .L_80448294
/* 80448274 004451B4  38 00 00 00 */	li r0, 0
/* 80448278 004451B8  7F 44 D3 78 */	mr r4, r26
/* 8044827C 004451BC  90 1D 00 28 */	stw r0, 0x28(r29)
/* 80448280 004451C0  38 A0 00 00 */	li r5, 0
/* 80448284 004451C4  4B BE AE 01 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80448288 004451C8  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 8044828C 004451CC  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 80448290 004451D0  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_80448294:
/* 80448294 004451D4  93 BC 00 54 */	stw r29, 0x54(r28)
/* 80448298 004451D8  38 7F 01 30 */	addi r3, r31, 0x130
/* 8044829C 004451DC  4B BD AD 31 */	bl getGlbResource__13JKRFileLoaderFPCc
/* 804482A0 004451E0  7C 7A 1B 79 */	or. r26, r3, r3
/* 804482A4 004451E4  40 82 00 18 */	bne .L_804482BC
/* 804482A8 004451E8  38 7F 00 0C */	addi r3, r31, 0xc
/* 804482AC 004451EC  38 BF 00 1C */	addi r5, r31, 0x1c
/* 804482B0 004451F0  38 80 04 12 */	li r4, 0x412
/* 804482B4 004451F4  4C C6 31 82 */	crclr 6
/* 804482B8 004451F8  4B BE 23 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804482BC:
/* 804482BC 004451FC  38 60 00 40 */	li r3, 0x40
/* 804482C0 00445200  4B BD BB E5 */	bl __nw__FUl
/* 804482C4 00445204  7C 7D 1B 79 */	or. r29, r3, r3
/* 804482C8 00445208  41 82 00 24 */	beq .L_804482EC
/* 804482CC 0044520C  38 00 00 00 */	li r0, 0
/* 804482D0 00445210  7F 44 D3 78 */	mr r4, r26
/* 804482D4 00445214  90 1D 00 28 */	stw r0, 0x28(r29)
/* 804482D8 00445218  38 A0 00 00 */	li r5, 0
/* 804482DC 0044521C  4B BE AD A9 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 804482E0 00445220  88 1D 00 3B */	lbz r0, 0x3b(r29)
/* 804482E4 00445224  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 804482E8 00445228  98 1D 00 3B */	stb r0, 0x3b(r29)
.L_804482EC:
/* 804482EC 0044522C  93 BC 00 58 */	stw r29, 0x58(r28)
/* 804482F0 00445230  3C 60 80 51 */	lis r3, sPikminTex__13TinyPikminMgr@ha
/* 804482F4 00445234  3B 83 44 78 */	addi r28, r3, sPikminTex__13TinyPikminMgr@l
/* 804482F8 00445238  3B A1 00 08 */	addi r29, r1, 8
/* 804482FC 0044523C  80 DF 00 94 */	lwz r6, 0x94(r31)
/* 80448300 00445240  3B 60 00 00 */	li r27, 0
/* 80448304 00445244  80 BF 00 98 */	lwz r5, 0x98(r31)
/* 80448308 00445248  80 9F 00 9C */	lwz r4, 0x9c(r31)
/* 8044830C 0044524C  80 7F 00 A0 */	lwz r3, 0xa0(r31)
/* 80448310 00445250  80 1F 00 A4 */	lwz r0, 0xa4(r31)
/* 80448314 00445254  90 C1 00 08 */	stw r6, 8(r1)
/* 80448318 00445258  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8044831C 0044525C  90 81 00 10 */	stw r4, 0x10(r1)
/* 80448320 00445260  90 61 00 14 */	stw r3, 0x14(r1)
/* 80448324 00445264  90 01 00 18 */	stw r0, 0x18(r1)
.L_80448328:
/* 80448328 00445268  80 BD 00 00 */	lwz r5, 0(r29)
/* 8044832C 0044526C  38 61 00 1C */	addi r3, r1, 0x1c
/* 80448330 00445270  38 82 26 C8 */	addi r4, r2, lbl_80520A28@sda21
/* 80448334 00445274  4C C6 31 82 */	crclr 6
/* 80448338 00445278  4B C7 F1 01 */	bl sprintf
/* 8044833C 0044527C  7F C3 F3 78 */	mr r3, r30
/* 80448340 00445280  38 81 00 1C */	addi r4, r1, 0x1c
/* 80448344 00445284  81 9E 00 00 */	lwz r12, 0(r30)
/* 80448348 00445288  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044834C 0044528C  7D 89 03 A6 */	mtctr r12
/* 80448350 00445290  4E 80 04 21 */	bctrl 
/* 80448354 00445294  7C 7A 1B 79 */	or. r26, r3, r3
/* 80448358 00445298  40 82 00 18 */	bne .L_80448370
/* 8044835C 0044529C  38 7F 00 0C */	addi r3, r31, 0xc
/* 80448360 004452A0  38 A1 00 1C */	addi r5, r1, 0x1c
/* 80448364 004452A4  38 80 03 12 */	li r4, 0x312
/* 80448368 004452A8  4C C6 31 82 */	crclr 6
/* 8044836C 004452AC  4B BE 22 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80448370:
/* 80448370 004452B0  38 60 00 40 */	li r3, 0x40
/* 80448374 004452B4  4B BD BB 31 */	bl __nw__FUl
/* 80448378 004452B8  7C 79 1B 79 */	or. r25, r3, r3
/* 8044837C 004452BC  41 82 00 24 */	beq .L_804483A0
/* 80448380 004452C0  38 00 00 00 */	li r0, 0
/* 80448384 004452C4  7F 44 D3 78 */	mr r4, r26
/* 80448388 004452C8  90 19 00 28 */	stw r0, 0x28(r25)
/* 8044838C 004452CC  38 A0 00 00 */	li r5, 0
/* 80448390 004452D0  4B BE AC F5 */	bl storeTIMG__10JUTTextureFPC7ResTIMGUc
/* 80448394 004452D4  88 19 00 3B */	lbz r0, 0x3b(r25)
/* 80448398 004452D8  54 00 07 BC */	rlwinm r0, r0, 0, 0x1e, 0x1e
/* 8044839C 004452DC  98 19 00 3B */	stb r0, 0x3b(r25)
.L_804483A0:
/* 804483A0 004452E0  38 60 01 68 */	li r3, 0x168
/* 804483A4 004452E4  4B BD BB 01 */	bl __nw__FUl
/* 804483A8 004452E8  7C 60 1B 79 */	or. r0, r3, r3
/* 804483AC 004452EC  41 82 00 10 */	beq .L_804483BC
/* 804483B0 004452F0  7F 24 CB 78 */	mr r4, r25
/* 804483B4 004452F4  4B BF 21 5D */	bl __ct__10J2DPictureFP10JUTTexture
/* 804483B8 004452F8  7C 60 1B 78 */	mr r0, r3
.L_804483BC:
/* 804483BC 004452FC  90 1C 00 00 */	stw r0, 0(r28)
/* 804483C0 00445300  38 80 00 07 */	li r4, 7
/* 804483C4 00445304  80 7C 00 00 */	lwz r3, 0(r28)
/* 804483C8 00445308  4B BF 08 F5 */	bl setBasePosition__7J2DPaneF15J2DBasePosition
/* 804483CC 0044530C  3B 7B 00 01 */	addi r27, r27, 1
/* 804483D0 00445310  3B 9C 00 04 */	addi r28, r28, 4
/* 804483D4 00445314  2C 1B 00 05 */	cmpwi r27, 5
/* 804483D8 00445318  3B BD 00 04 */	addi r29, r29, 4
/* 804483DC 0044531C  41 80 FF 4C */	blt .L_80448328
/* 804483E0 00445320  BB 21 01 24 */	lmw r25, 0x124(r1)
/* 804483E4 00445324  80 01 01 44 */	lwz r0, 0x144(r1)
/* 804483E8 00445328  7C 08 03 A6 */	mtlr r0
/* 804483EC 0044532C  38 21 01 40 */	addi r1, r1, 0x140
/* 804483F0 00445330  4E 80 00 20 */	blr 
.endfn loadBootResource__11BootSectionFv
.endif

.if version == 0
.fn load2DResource__11BootSectionFv, global
/* 804483F4 00445334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804483F8 00445338  7C 08 02 A6 */	mflr r0
/* 804483FC 0044533C  3C 80 80 4A */	lis r4, lbl_8049AF08@ha
/* 80448400 00445340  90 01 00 14 */	stw r0, 0x14(r1)
/* 80448404 00445344  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80448408 00445348  3B E4 AF 08 */	addi r31, r4, lbl_8049AF08@l
/* 8044840C 0044534C  93 C1 00 08 */	stw r30, 8(r1)
/* 80448410 00445350  7C 7E 1B 78 */	mr r30, r3
/* 80448414 00445354  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80448418 00445358  4B BD B1 8D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8044841C 0044535C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448420 00445360  38 9F 01 50 */	addi r4, r31, 0x150
/* 80448424 00445364  38 A0 00 00 */	li r5, 0
/* 80448428 00445368  4B FD AF 35 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044842C 0044536C  4B EC 72 3D */	bl create__Q22og5Lib2DFv
/* 80448430 00445370  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448434 00445374  38 9F 01 50 */	addi r4, r31, 0x150
/* 80448438 00445378  4B FD AF 2D */	bl heapStatusEnd__6SystemFPc
/* 8044843C 0044537C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448440 00445380  38 9F 01 70 */	addi r4, r31, 0x170
/* 80448444 00445384  38 A0 00 00 */	li r5, 0
/* 80448448 00445388  4B FD AF 15 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044844C 0044538C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448450 00445390  38 9F 01 7C */	addi r4, r31, 0x17c
/* 80448454 00445394  38 A0 00 00 */	li r5, 0
/* 80448458 00445398  4B FD AF 05 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044845C 0044539C  4B F7 0C 8D */	bl globalInstance__14TParticle2dMgrFv
/* 80448460 004453A0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448464 004453A4  3C 80 00 10 */	lis r4, 0x10
/* 80448468 004453A8  4B F7 0D C5 */	bl createHeap__14TParticle2dMgrFUl
/* 8044846C 004453AC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448470 004453B0  38 9F 01 8C */	addi r4, r31, 0x18c
/* 80448474 004453B4  38 A0 07 D0 */	li r5, 0x7d0
/* 80448478 004453B8  38 C0 00 80 */	li r6, 0x80
/* 8044847C 004453BC  38 E0 00 80 */	li r7, 0x80
/* 80448480 004453C0  4B F7 0E 41 */	bl createMgr__14TParticle2dMgrFPcUlUlUl
/* 80448484 004453C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448488 004453C8  38 9F 01 7C */	addi r4, r31, 0x17c
/* 8044848C 004453CC  4B FD AE D9 */	bl heapStatusEnd__6SystemFPc
/* 80448490 004453D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448494 004453D4  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 80448498 004453D8  38 A0 00 00 */	li r5, 0
/* 8044849C 004453DC  4B FD AE C1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 804484A0 004453E0  38 60 01 58 */	li r3, 0x158
/* 804484A4 004453E4  4B BD BA 01 */	bl __nw__FUl
/* 804484A8 004453E8  7C 60 1B 79 */	or. r0, r3, r3
/* 804484AC 004453EC  41 82 00 0C */	beq .L_804484B8
/* 804484B0 004453F0  48 00 00 6D */	bl __ct__Q23ebi13TScreenProgreFv
/* 804484B4 004453F4  7C 60 1B 78 */	mr r0, r3
.L_804484B8:
/* 804484B8 004453F8  90 1E 00 D8 */	stw r0, 0xf8(r30)
/* 804484BC 004453FC  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 804484C0 00445400  80 1E 00 D4 */	lwz r0, 0xf4(r30)
/* 804484C4 00445404  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 804484C8 00445408  90 03 00 04 */	stw r0, 4(r3)
/* 804484CC 0044540C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484D0 00445410  4B FD AE 95 */	bl heapStatusEnd__6SystemFPc
/* 804484D4 00445414  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484D8 00445418  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 804484DC 0044541C  38 A0 00 00 */	li r5, 0
/* 804484E0 00445420  4B FD AE 7D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 804484E4 00445424  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 804484E8 00445428  4B F8 51 F1 */	bl loadResource__Q23ebi13TScreenProgreFv
/* 804484EC 0044542C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484F0 00445430  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 804484F4 00445434  4B FD AE 71 */	bl heapStatusEnd__6SystemFPc
/* 804484F8 00445438  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484FC 0044543C  38 9F 01 70 */	addi r4, r31, 0x170
/* 80448500 00445440  4B FD AE 65 */	bl heapStatusEnd__6SystemFPc
/* 80448504 00445444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80448508 00445448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044850C 0044544C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80448510 00445450  7C 08 03 A6 */	mtlr r0
/* 80448514 00445454  38 21 00 10 */	addi r1, r1, 0x10
/* 80448518 00445458  4E 80 00 20 */	blr 
.endfn load2DResource__11BootSectionFv
.else
.fn load2DResource__11BootSectionFv, global
/* 804483F4 00445334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804483F8 00445338  7C 08 02 A6 */	mflr r0
/* 804483FC 0044533C  3C 80 80 4A */	lis r4, lbl_8049AF08@ha
/* 80448400 00445340  90 01 00 14 */	stw r0, 0x14(r1)
/* 80448404 00445344  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80448408 00445348  3B E4 AF 08 */	addi r31, r4, lbl_8049AF08@l
/* 8044840C 0044534C  93 C1 00 08 */	stw r30, 8(r1)
/* 80448410 00445350  7C 7E 1B 78 */	mr r30, r3
/* 80448414 00445354  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80448418 00445358  4B BD B1 8D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8044841C 0044535C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448420 00445360  38 9F 01 50 */	addi r4, r31, 0x150
/* 80448424 00445364  38 A0 00 00 */	li r5, 0
/* 80448428 00445368  4B FD AF 35 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044842C 0044536C  4B EC 72 3D */	bl create__Q22og5Lib2DFv
/* 80448430 00445370  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448434 00445374  38 9F 01 50 */	addi r4, r31, 0x150
/* 80448438 00445378  4B FD AF 2D */	bl heapStatusEnd__6SystemFPc
/* 8044843C 0044537C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448440 00445380  38 9F 01 70 */	addi r4, r31, 0x170
/* 80448444 00445384  38 A0 00 00 */	li r5, 0
/* 80448448 00445388  4B FD AF 15 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044844C 0044538C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448450 00445390  38 9F 01 7C */	addi r4, r31, 0x17c
/* 80448454 00445394  38 A0 00 00 */	li r5, 0
/* 80448458 00445398  4B FD AF 05 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044845C 0044539C  4B F7 0C 8D */	bl globalInstance__14TParticle2dMgrFv
/* 80448460 004453A0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448464 004453A4  3C 80 00 10 */	lis r4, 0x10
/* 80448468 004453A8  4B F7 0D C5 */	bl createHeap__14TParticle2dMgrFUl
/* 8044846C 004453AC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448470 004453B0  38 9F 01 8C */	addi r4, r31, 0x18c
/* 80448474 004453B4  38 A0 07 D0 */	li r5, 0x7d0
/* 80448478 004453B8  38 C0 00 80 */	li r6, 0x80
/* 8044847C 004453BC  38 E0 00 80 */	li r7, 0x80
/* 80448480 004453C0  4B F7 0E 41 */	bl createMgr__14TParticle2dMgrFPcUlUlUl
/* 80448484 004453C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448488 004453C8  38 9F 01 7C */	addi r4, r31, 0x17c
/* 8044848C 004453CC  4B FD AE D9 */	bl heapStatusEnd__6SystemFPc
/* 80448490 004453D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448494 004453D4  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 80448498 004453D8  38 A0 00 00 */	li r5, 0
/* 8044849C 004453DC  4B FD AE C1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 804484A0 004453E0  38 60 01 58 */	li r3, 0x158
/* 804484A4 004453E4  4B BD BA 01 */	bl __nw__FUl
/* 804484A8 004453E8  7C 60 1B 79 */	or. r0, r3, r3
/* 804484AC 004453EC  41 82 00 0C */	beq .L_804484B8
/* 804484B0 004453F0  48 00 00 6D */	bl __ct__Q23ebi13TScreenProgreFv
/* 804484B4 004453F4  7C 60 1B 78 */	mr r0, r3
.L_804484B8:
/* 804484B8 004453F8  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 804484BC 004453FC  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 804484C0 00445400  80 1E 00 D4 */	lwz r0, 0xd4(r30)
/* 804484C4 00445404  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 804484C8 00445408  90 03 00 04 */	stw r0, 4(r3)
/* 804484CC 0044540C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484D0 00445410  4B FD AE 95 */	bl heapStatusEnd__6SystemFPc
/* 804484D4 00445414  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484D8 00445418  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 804484DC 0044541C  38 A0 00 00 */	li r5, 0
/* 804484E0 00445420  4B FD AE 7D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 804484E4 00445424  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 804484E8 00445428  4B F8 51 F1 */	bl loadResource__Q23ebi13TScreenProgreFv
/* 804484EC 0044542C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484F0 00445430  38 9F 01 C8 */	addi r4, r31, 0x1c8
/* 804484F4 00445434  4B FD AE 71 */	bl heapStatusEnd__6SystemFPc
/* 804484F8 00445438  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804484FC 0044543C  38 9F 01 70 */	addi r4, r31, 0x170
/* 80448500 00445440  4B FD AE 65 */	bl heapStatusEnd__6SystemFPc
/* 80448504 00445444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80448508 00445448  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044850C 0044544C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80448510 00445450  7C 08 03 A6 */	mtlr r0
/* 80448514 00445454  38 21 00 10 */	addi r1, r1, 0x10
/* 80448518 00445458  4E 80 00 20 */	blr 
.endfn load2DResource__11BootSectionFv
.endif

.fn __ct__Q23ebi13TScreenProgreFv, weak
/* 8044851C 0044545C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80448520 00445460  7C 08 02 A6 */	mflr r0
/* 80448524 00445464  3C 80 80 4F */	lis r4, __vt__Q23ebi13TScreenProgre@ha
/* 80448528 00445468  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044852C 0044546C  38 04 87 D8 */	addi r0, r4, __vt__Q23ebi13TScreenProgre@l
/* 80448530 00445470  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80448534 00445474  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80448538 00445478  7C 7E 1B 78 */	mr r30, r3
/* 8044853C 0044547C  38 60 00 01 */	li r3, 1
/* 80448540 00445480  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80448544 00445484  3B FE 00 50 */	addi r31, r30, 0x50
/* 80448548 00445488  7F FD FB 78 */	mr r29, r31
/* 8044854C 0044548C  90 1E 00 00 */	stw r0, 0(r30)
/* 80448550 00445490  38 00 00 00 */	li r0, 0
/* 80448554 00445494  98 7E 00 08 */	stb r3, 8(r30)
/* 80448558 00445498  7F E3 FB 78 */	mr r3, r31
/* 8044855C 0044549C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80448560 004454A0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80448564 004454A4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80448568 004454A8  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8044856C 004454AC  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80448570 004454B0  90 1E 00 28 */	stw r0, 0x28(r30)
/* 80448574 004454B4  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 80448578 004454B8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 8044857C 004454BC  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80448580 004454C0  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80448584 004454C4  4B FC 8E 0D */	bl __ct__5CNodeFv
/* 80448588 004454C8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 8044858C 004454CC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 80448590 004454D0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 80448594 004454D4  3C C0 80 4F */	lis r6, __vt__Q23ebi16E2DCallBack_Base@ha
/* 80448598 004454D8  90 1F 00 00 */	stw r0, 0(r31)
/* 8044859C 004454DC  38 00 00 00 */	li r0, 0
/* 804485A0 004454E0  3C 60 80 3D */	lis r3, __ct__Q23ebi16E2DFullFontColorFv@ha
/* 804485A4 004454E4  38 E0 00 01 */	li r7, 1
/* 804485A8 004454E8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 804485AC 004454EC  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 804485B0 004454F0  38 83 FE EC */	addi r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
/* 804485B4 004454F4  38 66 88 30 */	addi r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
/* 804485B8 004454F8  90 1D 00 00 */	stw r0, 0(r29)
/* 804485BC 004454FC  3C A0 80 4F */	lis r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 804485C0 00445500  38 05 8A 54 */	addi r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 804485C4 00445504  38 C0 00 10 */	li r6, 0x10
/* 804485C8 00445508  90 7D 00 00 */	stw r3, 0(r29)
/* 804485CC 0044550C  38 7F 00 20 */	addi r3, r31, 0x20
/* 804485D0 00445510  38 A0 00 00 */	li r5, 0
/* 804485D4 00445514  98 FD 00 1C */	stb r7, 0x1c(r29)
/* 804485D8 00445518  38 E0 00 02 */	li r7, 2
/* 804485DC 0044551C  90 1F 00 00 */	stw r0, 0(r31)
/* 804485E0 00445520  4B C7 92 5D */	bl __construct_array
/* 804485E4 00445524  C0 22 26 40 */	lfs f1, lbl_805209A0@sda21(r2)
/* 804485E8 00445528  3B BE 00 9C */	addi r29, r30, 0x9c
/* 804485EC 0044552C  C0 02 26 E8 */	lfs f0, lbl_80520A48@sda21(r2)
/* 804485F0 00445530  38 80 00 01 */	li r4, 1
/* 804485F4 00445534  D0 3F 00 40 */	stfs f1, 0x40(r31)
/* 804485F8 00445538  38 00 00 00 */	li r0, 0
/* 804485FC 0044553C  7F A3 EB 78 */	mr r3, r29
/* 80448600 00445540  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 80448604 00445544  98 9F 00 48 */	stb r4, 0x48(r31)
/* 80448608 00445548  98 1F 00 49 */	stb r0, 0x49(r31)
/* 8044860C 0044554C  98 1F 00 1C */	stb r0, 0x1c(r31)
/* 80448610 00445550  4B FC 8D 81 */	bl __ct__5CNodeFv
/* 80448614 00445554  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 80448618 00445558  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 8044861C 0044555C  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 80448620 00445560  3C C0 80 4F */	lis r6, __vt__Q23ebi16E2DCallBack_Base@ha
/* 80448624 00445564  90 1D 00 00 */	stw r0, 0(r29)
/* 80448628 00445568  38 00 00 00 */	li r0, 0
/* 8044862C 0044556C  3C 60 80 3D */	lis r3, __ct__Q23ebi16E2DFullFontColorFv@ha
/* 80448630 00445570  38 E0 00 01 */	li r7, 1
/* 80448634 00445574  90 1D 00 18 */	stw r0, 0x18(r29)
/* 80448638 00445578  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 8044863C 0044557C  38 83 FE EC */	addi r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
/* 80448640 00445580  38 66 88 30 */	addi r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
/* 80448644 00445584  90 1D 00 00 */	stw r0, 0(r29)
/* 80448648 00445588  3C A0 80 4F */	lis r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 8044864C 0044558C  38 05 8A 54 */	addi r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 80448650 00445590  38 C0 00 10 */	li r6, 0x10
/* 80448654 00445594  90 7D 00 00 */	stw r3, 0(r29)
/* 80448658 00445598  38 7D 00 20 */	addi r3, r29, 0x20
/* 8044865C 0044559C  38 A0 00 00 */	li r5, 0
/* 80448660 004455A0  98 FD 00 1C */	stb r7, 0x1c(r29)
/* 80448664 004455A4  38 E0 00 02 */	li r7, 2
/* 80448668 004455A8  90 1D 00 00 */	stw r0, 0(r29)
/* 8044866C 004455AC  4B C7 91 D1 */	bl __construct_array
/* 80448670 004455B0  C0 62 26 40 */	lfs f3, lbl_805209A0@sda21(r2)
/* 80448674 004455B4  3D 40 80 4C */	lis r10, __vt__Q25efx2d7TBaseIF@ha
/* 80448678 004455B8  3D 20 80 4C */	lis r9, __vt__Q25efx2d5TBase@ha
/* 8044867C 004455BC  3D 00 80 4A */	lis r8, __vt__18JPAEmitterCallBack@ha
/* 80448680 004455C0  D0 7D 00 40 */	stfs f3, 0x40(r29)
/* 80448684 004455C4  3C 60 80 4E */	lis r3, __vt__Q25efx2d8TForever@ha
/* 80448688 004455C8  C0 02 26 E8 */	lfs f0, lbl_80520A48@sda21(r2)
/* 8044868C 004455CC  38 E3 74 20 */	addi r7, r3, __vt__Q25efx2d8TForever@l
/* 80448690 004455D0  3C 80 80 4E */	lis r4, __vt__Q25efx2d9TChasePos@ha
/* 80448694 004455D4  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 80448698 004455D8  D0 1D 00 44 */	stfs f0, 0x44(r29)
/* 8044869C 004455DC  38 00 00 01 */	li r0, 1
/* 804486A0 004455E0  38 C4 73 CC */	addi r6, r4, __vt__Q25efx2d9TChasePos@l
/* 804486A4 004455E4  38 A3 76 48 */	addi r5, r3, __vt__Q25efx2d9T2DCursor@l
/* 804486A8 004455E8  98 1D 00 48 */	stb r0, 0x48(r29)
/* 804486AC 004455EC  39 60 00 00 */	li r11, 0
/* 804486B0 004455F0  39 4A 14 F0 */	addi r10, r10, __vt__Q25efx2d7TBaseIF@l
/* 804486B4 004455F4  39 29 14 D8 */	addi r9, r9, __vt__Q25efx2d5TBase@l
/* 804486B8 004455F8  99 7D 00 49 */	stb r11, 0x49(r29)
/* 804486BC 004455FC  39 08 E2 7C */	addi r8, r8, __vt__18JPAEmitterCallBack@l
/* 804486C0 00445600  39 87 00 18 */	addi r12, r7, 0x18
/* 804486C4 00445604  3B E6 00 18 */	addi r31, r6, 0x18
/* 804486C8 00445608  99 7D 00 1C */	stb r11, 0x1c(r29)
/* 804486CC 0044560C  38 9E 01 04 */	addi r4, r30, 0x104
/* 804486D0 00445610  3B A5 00 18 */	addi r29, r5, 0x18
/* 804486D4 00445614  C0 42 26 44 */	lfs f2, lbl_805209A4@sda21(r2)
/* 804486D8 00445618  91 5E 00 E8 */	stw r10, 0xe8(r30)
/* 804486DC 0044561C  38 1E 01 3C */	addi r0, r30, 0x13c
/* 804486E0 00445620  C0 22 26 74 */	lfs f1, lbl_805209D4@sda21(r2)
/* 804486E4 00445624  7F C3 F3 78 */	mr r3, r30
/* 804486E8 00445628  91 3E 00 E8 */	stw r9, 0xe8(r30)
/* 804486EC 0044562C  99 7E 00 EC */	stb r11, 0xec(r30)
/* 804486F0 00445630  99 7E 00 ED */	stb r11, 0xed(r30)
/* 804486F4 00445634  91 1E 00 F0 */	stw r8, 0xf0(r30)
/* 804486F8 00445638  90 FE 00 E8 */	stw r7, 0xe8(r30)
/* 804486FC 0044563C  91 9E 00 F0 */	stw r12, 0xf0(r30)
/* 80448700 00445640  B1 7E 00 F4 */	sth r11, 0xf4(r30)
/* 80448704 00445644  91 7E 00 F8 */	stw r11, 0xf8(r30)
/* 80448708 00445648  90 DE 00 E8 */	stw r6, 0xe8(r30)
/* 8044870C 0044564C  93 FE 00 F0 */	stw r31, 0xf0(r30)
/* 80448710 00445650  90 9E 00 FC */	stw r4, 0xfc(r30)
/* 80448714 00445654  90 BE 00 E8 */	stw r5, 0xe8(r30)
/* 80448718 00445658  93 BE 00 F0 */	stw r29, 0xf0(r30)
/* 8044871C 0044565C  D0 5E 01 00 */	stfs f2, 0x100(r30)
/* 80448720 00445660  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80448724 00445664  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80448728 00445668  EC 01 00 32 */	fmuls f0, f1, f0
/* 8044872C 0044566C  D0 1E 01 0C */	stfs f0, 0x10c(r30)
/* 80448730 00445670  D0 7E 01 10 */	stfs f3, 0x110(r30)
/* 80448734 00445674  91 7E 01 18 */	stw r11, 0x118(r30)
/* 80448738 00445678  91 7E 01 1C */	stw r11, 0x11c(r30)
/* 8044873C 0044567C  91 5E 01 20 */	stw r10, 0x120(r30)
/* 80448740 00445680  91 3E 01 20 */	stw r9, 0x120(r30)
/* 80448744 00445684  99 7E 01 24 */	stb r11, 0x124(r30)
/* 80448748 00445688  99 7E 01 25 */	stb r11, 0x125(r30)
/* 8044874C 0044568C  91 1E 01 28 */	stw r8, 0x128(r30)
/* 80448750 00445690  90 FE 01 20 */	stw r7, 0x120(r30)
/* 80448754 00445694  91 9E 01 28 */	stw r12, 0x128(r30)
/* 80448758 00445698  B1 7E 01 2C */	sth r11, 0x12c(r30)
/* 8044875C 0044569C  91 7E 01 30 */	stw r11, 0x130(r30)
/* 80448760 004456A0  90 DE 01 20 */	stw r6, 0x120(r30)
/* 80448764 004456A4  93 FE 01 28 */	stw r31, 0x128(r30)
/* 80448768 004456A8  90 1E 01 34 */	stw r0, 0x134(r30)
/* 8044876C 004456AC  90 BE 01 20 */	stw r5, 0x120(r30)
/* 80448770 004456B0  93 BE 01 28 */	stw r29, 0x128(r30)
/* 80448774 004456B4  D0 5E 01 38 */	stfs f2, 0x138(r30)
/* 80448778 004456B8  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044877C 004456BC  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80448780 004456C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80448784 004456C4  D0 1E 01 44 */	stfs f0, 0x144(r30)
/* 80448788 004456C8  D0 7E 01 48 */	stfs f3, 0x148(r30)
/* 8044878C 004456CC  91 7E 01 50 */	stw r11, 0x150(r30)
/* 80448790 004456D0  91 7E 01 54 */	stw r11, 0x154(r30)
/* 80448794 004456D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80448798 004456D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044879C 004456DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804487A0 004456E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804487A4 004456E4  7C 08 03 A6 */	mtlr r0
/* 804487A8 004456E8  38 21 00 20 */	addi r1, r1, 0x20
/* 804487AC 004456EC  4E 80 00 20 */	blr 
.endfn __ct__Q23ebi13TScreenProgreFv

.fn loadResident__11BootSectionFv, global
/* 804487B0 004456F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804487B4 004456F4  7C 08 02 A6 */	mflr r0
/* 804487B8 004456F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804487BC 004456FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804487C0 00445700  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804487C4 00445704  83 ED 88 2C */	lwz r31, sCurrentHeap__7JKRHeap@sda21(r13)
/* 804487C8 00445708  80 63 00 38 */	lwz r3, 0x38(r3)
/* 804487CC 0044570C  4B BD AD D9 */	bl becomeCurrentHeap__7JKRHeapFv
/* 804487D0 00445710  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 804487D4 00445714  48 00 D4 DD */	bl load__Q211Pikmin2ARAM3MgrFv
/* 804487D8 00445718  7F E3 FB 78 */	mr r3, r31
/* 804487DC 0044571C  4B BD AD C9 */	bl becomeCurrentHeap__7JKRHeapFv
/* 804487E0 00445720  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804487E4 00445724  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804487E8 00445728  7C 08 03 A6 */	mtlr r0
/* 804487EC 0044572C  38 21 00 10 */	addi r1, r1, 0x10
/* 804487F0 00445730  4E 80 00 20 */	blr 
.endfn loadResident__11BootSectionFv

.if version == 0
.fn doDraw__11BootSectionFR8Graphics, global
/* 804487F4 00445734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804487F8 00445738  7C 08 02 A6 */	mflr r0
/* 804487FC 0044573C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80448800 00445740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80448804 00445744  7C 9F 23 78 */	mr r31, r4
/* 80448808 00445748  93 C1 00 08 */	stw r30, 8(r1)
/* 8044880C 0044574C  7C 7E 1B 78 */	mr r30, r3
/* 80448810 00445750  80 03 00 48 */	lwz r0, 0x68(r3)
/* 80448814 00445754  28 00 00 0A */	cmplwi r0, 0xa
/* 80448818 00445758  41 81 01 60 */	bgt .L_80448978
/* 8044881C 0044575C  3C A0 80 4F */	lis r5, lbl_804ED010@ha
/* 80448820 00445760  54 00 10 3A */	slwi r0, r0, 2
/* 80448824 00445764  38 A5 D0 10 */	addi r5, r5, lbl_804ED010@l
/* 80448828 00445768  7C 05 00 2E */	lwzx r0, r5, r0
/* 8044882C 0044576C  7C 09 03 A6 */	mtctr r0
/* 80448830 00445770  4E 80 04 20 */	bctr 
.L_80448834:
/* 80448834 00445774  7F C3 F3 78 */	mr r3, r30
/* 80448838 00445778  7F E4 FB 78 */	mr r4, r31
/* 8044883C 0044577C  48 00 01 AD */	bl drawNintendoLogo__11BootSectionFR8Graphics
/* 80448840 00445780  48 00 01 38 */	b .L_80448978
.L_80448844:
/* 80448844 00445784  48 00 01 AD */	bl drawNintendoLogo__11BootSectionFR8Graphics
/* 80448848 00445788  48 00 01 30 */	b .L_80448978
.L_8044884C:
/* 8044884C 0044578C  48 00 01 45 */	bl drawProgressive__11BootSectionFR8Graphics
/* 80448850 00445790  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448854 00445794  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448858 00445798  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044885C 0044579C  7D 89 03 A6 */	mtctr r12
/* 80448860 004457A0  4E 80 04 21 */	bctrl 
/* 80448864 004457A4  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 80448868 004457A8  4B F8 5C AD */	bl draw__Q23ebi13TScreenProgreFv
/* 8044886C 004457AC  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448870 004457B0  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448874 004457B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448878 004457B8  7D 89 03 A6 */	mtctr r12
/* 8044887C 004457BC  4E 80 04 21 */	bctrl 
/* 80448880 004457C0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448884 004457C4  28 03 00 00 */	cmplwi r3, 0
/* 80448888 004457C8  41 82 00 F0 */	beq .L_80448978
/* 8044888C 004457CC  38 80 00 01 */	li r4, 1
/* 80448890 004457D0  38 A0 00 00 */	li r5, 0
/* 80448894 004457D4  4B F7 0D 41 */	bl draw__14TParticle2dMgrFUcUs
/* 80448898 004457D8  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044889C 004457DC  38 80 00 00 */	li r4, 0
/* 804488A0 004457E0  38 A0 00 00 */	li r5, 0
/* 804488A4 004457E4  4B F7 0D 31 */	bl draw__14TParticle2dMgrFUcUs
/* 804488A8 004457E8  48 00 00 D0 */	b .L_80448978
.L_804488AC:
/* 804488AC 004457EC  48 00 01 25 */	bl drawSetInterlace__11BootSectionFR8Graphics
/* 804488B0 004457F0  38 7F 01 90 */	addi r3, r31, 0x190
/* 804488B4 004457F4  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 804488B8 004457F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804488BC 004457FC  7D 89 03 A6 */	mtctr r12
/* 804488C0 00445800  4E 80 04 21 */	bctrl 
/* 804488C4 00445804  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 804488C8 00445808  4B F8 5C 4D */	bl draw__Q23ebi13TScreenProgreFv
/* 804488CC 0044580C  38 7F 01 90 */	addi r3, r31, 0x190
/* 804488D0 00445810  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 804488D4 00445814  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804488D8 00445818  7D 89 03 A6 */	mtctr r12
/* 804488DC 0044581C  4E 80 04 21 */	bctrl 
/* 804488E0 00445820  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 804488E4 00445824  28 03 00 00 */	cmplwi r3, 0
/* 804488E8 00445828  41 82 00 90 */	beq .L_80448978
/* 804488EC 0044582C  38 80 00 01 */	li r4, 1
/* 804488F0 00445830  38 A0 00 00 */	li r5, 0
/* 804488F4 00445834  4B F7 0C E1 */	bl draw__14TParticle2dMgrFUcUs
/* 804488F8 00445838  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 804488FC 0044583C  38 80 00 00 */	li r4, 0
/* 80448900 00445840  38 A0 00 00 */	li r5, 0
/* 80448904 00445844  4B F7 0C D1 */	bl draw__14TParticle2dMgrFUcUs
/* 80448908 00445848  48 00 00 70 */	b .L_80448978
.L_8044890C:
/* 8044890C 0044584C  48 00 00 A5 */	bl drawSetProgressive__11BootSectionFR8Graphics
/* 80448910 00445850  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448914 00445854  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448918 00445858  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044891C 0044585C  7D 89 03 A6 */	mtctr r12
/* 80448920 00445860  4E 80 04 21 */	bctrl 
/* 80448924 00445864  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 80448928 00445868  4B F8 5B ED */	bl draw__Q23ebi13TScreenProgreFv
/* 8044892C 0044586C  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448930 00445870  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448934 00445874  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448938 00445878  7D 89 03 A6 */	mtctr r12
/* 8044893C 0044587C  4E 80 04 21 */	bctrl 
/* 80448940 00445880  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448944 00445884  28 03 00 00 */	cmplwi r3, 0
/* 80448948 00445888  41 82 00 30 */	beq .L_80448978
/* 8044894C 0044588C  38 80 00 01 */	li r4, 1
/* 80448950 00445890  38 A0 00 00 */	li r5, 0
/* 80448954 00445894  4B F7 0C 81 */	bl draw__14TParticle2dMgrFUcUs
/* 80448958 00445898  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044895C 0044589C  38 80 00 00 */	li r4, 0
/* 80448960 004458A0  38 A0 00 00 */	li r5, 0
/* 80448964 004458A4  4B F7 0C 71 */	bl draw__14TParticle2dMgrFUcUs
/* 80448968 004458A8  48 00 00 10 */	b .L_80448978
.L_8044896C:
/* 8044896C 004458AC  7F C3 F3 78 */	mr r3, r30
/* 80448970 004458B0  7F E4 FB 78 */	mr r4, r31
/* 80448974 004458B4  48 00 04 5D */	bl drawDolbyLogo__11BootSectionFR8Graphics
.L_80448978:
/* 80448978 004458B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044897C 004458BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80448980 004458C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80448984 004458C4  7C 08 03 A6 */	mtlr r0
/* 80448988 004458C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8044898C 004458CC  4E 80 00 20 */	blr 
.endfn doDraw__11BootSectionFR8Graphics
.else
.fn doDraw__11BootSectionFR8Graphics, global
/* 804487F4 00445734  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804487F8 00445738  7C 08 02 A6 */	mflr r0
/* 804487FC 0044573C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80448800 00445740  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80448804 00445744  7C 9F 23 78 */	mr r31, r4
/* 80448808 00445748  93 C1 00 08 */	stw r30, 8(r1)
/* 8044880C 0044574C  7C 7E 1B 78 */	mr r30, r3
/* 80448810 00445750  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80448814 00445754  28 00 00 0A */	cmplwi r0, 0xa
/* 80448818 00445758  41 81 01 60 */	bgt .L_80448978
/* 8044881C 0044575C  3C A0 80 4F */	lis r5, lbl_804ED010@ha
/* 80448820 00445760  54 00 10 3A */	slwi r0, r0, 2
/* 80448824 00445764  38 A5 D0 10 */	addi r5, r5, lbl_804ED010@l
/* 80448828 00445768  7C 05 00 2E */	lwzx r0, r5, r0
/* 8044882C 0044576C  7C 09 03 A6 */	mtctr r0
/* 80448830 00445770  4E 80 04 20 */	bctr 
.L_80448834:
/* 80448834 00445774  7F C3 F3 78 */	mr r3, r30
/* 80448838 00445778  7F E4 FB 78 */	mr r4, r31
/* 8044883C 0044577C  48 00 06 49 */	bl drawEpilepsy__11BootSectionFR8Graphics
/* 80448840 00445780  48 00 01 38 */	b .L_80448978
.L_80448844:
/* 80448844 00445784  48 00 01 AD */	bl drawNintendoLogo__11BootSectionFR8Graphics
/* 80448848 00445788  48 00 01 30 */	b .L_80448978
.L_8044884C:
/* 8044884C 0044578C  48 00 01 45 */	bl drawProgressive__11BootSectionFR8Graphics
/* 80448850 00445790  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448854 00445794  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448858 00445798  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044885C 0044579C  7D 89 03 A6 */	mtctr r12
/* 80448860 004457A0  4E 80 04 21 */	bctrl 
/* 80448864 004457A4  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 80448868 004457A8  4B F8 5C AD */	bl draw__Q23ebi13TScreenProgreFv
/* 8044886C 004457AC  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448870 004457B0  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448874 004457B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448878 004457B8  7D 89 03 A6 */	mtctr r12
/* 8044887C 004457BC  4E 80 04 21 */	bctrl 
/* 80448880 004457C0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448884 004457C4  28 03 00 00 */	cmplwi r3, 0
/* 80448888 004457C8  41 82 00 F0 */	beq .L_80448978
/* 8044888C 004457CC  38 80 00 01 */	li r4, 1
/* 80448890 004457D0  38 A0 00 00 */	li r5, 0
/* 80448894 004457D4  4B F7 0D 41 */	bl draw__14TParticle2dMgrFUcUs
/* 80448898 004457D8  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044889C 004457DC  38 80 00 00 */	li r4, 0
/* 804488A0 004457E0  38 A0 00 00 */	li r5, 0
/* 804488A4 004457E4  4B F7 0D 31 */	bl draw__14TParticle2dMgrFUcUs
/* 804488A8 004457E8  48 00 00 D0 */	b .L_80448978
.L_804488AC:
/* 804488AC 004457EC  48 00 01 25 */	bl drawSetInterlace__11BootSectionFR8Graphics
/* 804488B0 004457F0  38 7F 01 90 */	addi r3, r31, 0x190
/* 804488B4 004457F4  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 804488B8 004457F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804488BC 004457FC  7D 89 03 A6 */	mtctr r12
/* 804488C0 00445800  4E 80 04 21 */	bctrl 
/* 804488C4 00445804  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 804488C8 00445808  4B F8 5C 4D */	bl draw__Q23ebi13TScreenProgreFv
/* 804488CC 0044580C  38 7F 01 90 */	addi r3, r31, 0x190
/* 804488D0 00445810  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 804488D4 00445814  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804488D8 00445818  7D 89 03 A6 */	mtctr r12
/* 804488DC 0044581C  4E 80 04 21 */	bctrl 
/* 804488E0 00445820  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 804488E4 00445824  28 03 00 00 */	cmplwi r3, 0
/* 804488E8 00445828  41 82 00 90 */	beq .L_80448978
/* 804488EC 0044582C  38 80 00 01 */	li r4, 1
/* 804488F0 00445830  38 A0 00 00 */	li r5, 0
/* 804488F4 00445834  4B F7 0C E1 */	bl draw__14TParticle2dMgrFUcUs
/* 804488F8 00445838  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 804488FC 0044583C  38 80 00 00 */	li r4, 0
/* 80448900 00445840  38 A0 00 00 */	li r5, 0
/* 80448904 00445844  4B F7 0C D1 */	bl draw__14TParticle2dMgrFUcUs
/* 80448908 00445848  48 00 00 70 */	b .L_80448978
.L_8044890C:
/* 8044890C 0044584C  48 00 00 A5 */	bl drawSetProgressive__11BootSectionFR8Graphics
/* 80448910 00445850  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448914 00445854  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448918 00445858  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044891C 0044585C  7D 89 03 A6 */	mtctr r12
/* 80448920 00445860  4E 80 04 21 */	bctrl 
/* 80448924 00445864  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 80448928 00445868  4B F8 5B ED */	bl draw__Q23ebi13TScreenProgreFv
/* 8044892C 0044586C  38 7F 01 90 */	addi r3, r31, 0x190
/* 80448930 00445870  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 80448934 00445874  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448938 00445878  7D 89 03 A6 */	mtctr r12
/* 8044893C 0044587C  4E 80 04 21 */	bctrl 
/* 80448940 00445880  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80448944 00445884  28 03 00 00 */	cmplwi r3, 0
/* 80448948 00445888  41 82 00 30 */	beq .L_80448978
/* 8044894C 0044588C  38 80 00 01 */	li r4, 1
/* 80448950 00445890  38 A0 00 00 */	li r5, 0
/* 80448954 00445894  4B F7 0C 81 */	bl draw__14TParticle2dMgrFUcUs
/* 80448958 00445898  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044895C 0044589C  38 80 00 00 */	li r4, 0
/* 80448960 004458A0  38 A0 00 00 */	li r5, 0
/* 80448964 004458A4  4B F7 0C 71 */	bl draw__14TParticle2dMgrFUcUs
/* 80448968 004458A8  48 00 00 10 */	b .L_80448978
.L_8044896C:
/* 8044896C 004458AC  7F C3 F3 78 */	mr r3, r30
/* 80448970 004458B0  7F E4 FB 78 */	mr r4, r31
/* 80448974 004458B4  48 00 04 5D */	bl drawDolbyLogo__11BootSectionFR8Graphics
.L_80448978:
/* 80448978 004458B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044897C 004458BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80448980 004458C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80448984 004458C4  7C 08 03 A6 */	mtlr r0
/* 80448988 004458C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8044898C 004458CC  4E 80 00 20 */	blr 
.endfn doDraw__11BootSectionFR8Graphics
.endif

.fn drawProgressive__11BootSectionFR8Graphics, global
/* 80448990 004458D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80448994 004458D4  7C 08 02 A6 */	mflr r0
/* 80448998 004458D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044899C 004458DC  48 00 00 55 */	bl drawNintendoLogo__11BootSectionFR8Graphics
/* 804489A0 004458E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804489A4 004458E4  7C 08 03 A6 */	mtlr r0
/* 804489A8 004458E8  38 21 00 10 */	addi r1, r1, 0x10
/* 804489AC 004458EC  4E 80 00 20 */	blr 
.endfn drawProgressive__11BootSectionFR8Graphics

.fn drawSetProgressive__11BootSectionFR8Graphics, global
/* 804489B0 004458F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804489B4 004458F4  7C 08 02 A6 */	mflr r0
/* 804489B8 004458F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804489BC 004458FC  48 00 00 35 */	bl drawNintendoLogo__11BootSectionFR8Graphics
/* 804489C0 00445900  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804489C4 00445904  7C 08 03 A6 */	mtlr r0
/* 804489C8 00445908  38 21 00 10 */	addi r1, r1, 0x10
/* 804489CC 0044590C  4E 80 00 20 */	blr 
.endfn drawSetProgressive__11BootSectionFR8Graphics

.fn drawSetInterlace__11BootSectionFR8Graphics, global
/* 804489D0 00445910  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804489D4 00445914  7C 08 02 A6 */	mflr r0
/* 804489D8 00445918  90 01 00 14 */	stw r0, 0x14(r1)
/* 804489DC 0044591C  48 00 00 15 */	bl drawNintendoLogo__11BootSectionFR8Graphics
/* 804489E0 00445920  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804489E4 00445924  7C 08 03 A6 */	mtlr r0
/* 804489E8 00445928  38 21 00 10 */	addi r1, r1, 0x10
/* 804489EC 0044592C  4E 80 00 20 */	blr 
.endfn drawSetInterlace__11BootSectionFR8Graphics

.if version == 0
.fn drawNintendoLogo__11BootSectionFR8Graphics, global
/* 804489F0 00445930  94 21 FE 20 */	stwu r1, -0x1e0(r1)
/* 804489F4 00445934  7C 08 02 A6 */	mflr r0
/* 804489F8 00445938  90 01 01 E4 */	stw r0, 0x1e4(r1)
/* 804489FC 0044593C  DB E1 01 D0 */	stfd f31, 0x1d0(r1)
/* 80448A00 00445940  F3 E1 01 D8 */	psq_st f31, 472(r1), 0, qr0
/* 80448A04 00445944  DB C1 01 C0 */	stfd f30, 0x1c0(r1)
/* 80448A08 00445948  F3 C1 01 C8 */	psq_st f30, 456(r1), 0, qr0
/* 80448A0C 0044594C  BF 21 01 A4 */	stmw r25, 0x1a4(r1)
/* 80448A10 00445950  7C 9B 23 78 */	mr r27, r4
/* 80448A14 00445954  7C 7A 1B 78 */	mr r26, r3
/* 80448A18 00445958  38 7B 00 BC */	addi r3, r27, 0xbc
/* 80448A1C 0044595C  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 80448A20 00445960  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448A24 00445964  7D 89 03 A6 */	mtctr r12
/* 80448A28 00445968  4E 80 04 21 */	bctrl 
/* 80448A2C 0044596C  3B E0 00 00 */	li r31, 0
/* 80448A30 00445970  83 DA 00 E0 */	lwz r30, 0x100(r26)
/* 80448A34 00445974  7F FC FB 78 */	mr r28, r31
/* 80448A38 00445978  48 00 02 18 */	b .L_80448C50
.L_80448A3C:
/* 80448A3C 0044597C  80 1E 00 00 */	lwz r0, 0(r30)
/* 80448A40 00445980  7F A0 E2 14 */	add r29, r0, r28
/* 80448A44 00445984  80 1D 00 00 */	lwz r0, 0(r29)
/* 80448A48 00445988  2C 00 00 00 */	cmpwi r0, 0
/* 80448A4C 0044598C  41 82 01 FC */	beq .L_80448C48
/* 80448A50 00445990  C0 5D 00 14 */	lfs f2, 0x14(r29)
/* 80448A54 00445994  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80448A58 00445998  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80448A5C 0044599C  40 80 00 40 */	bge .L_80448A9C
/* 80448A60 004459A0  C0 22 26 68 */	lfs f1, lbl_805209C8@sda21(r2)
/* 80448A64 004459A4  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80448A68 004459A8  EC 22 08 24 */	fdivs f1, f2, f1
/* 80448A6C 004459AC  FC 20 0A 10 */	fabs f1, f1
/* 80448A70 004459B0  FC 80 08 18 */	frsp f4, f1
/* 80448A74 004459B4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80448A78 004459B8  40 81 00 08 */	ble .L_80448A80
/* 80448A7C 004459BC  FC 80 00 90 */	fmr f4, f0
.L_80448A80:
/* 80448A80 004459C0  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80448A84 004459C4  C0 62 26 B0 */	lfs f3, lbl_80520A10@sda21(r2)
/* 80448A88 004459C8  EC 40 20 28 */	fsubs f2, f0, f4
/* 80448A8C 004459CC  C0 22 26 AC */	lfs f1, lbl_80520A0C@sda21(r2)
/* 80448A90 004459D0  EC 03 01 3A */	fmadds f0, f3, f4, f0
/* 80448A94 004459D4  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80448A98 004459D8  48 00 00 0C */	b .L_80448AA4
.L_80448A9C:
/* 80448A9C 004459DC  C0 22 26 44 */	lfs f1, lbl_805209A4@sda21(r2)
/* 80448AA0 004459E0  FC 00 08 90 */	fmr f0, f1
.L_80448AA4:
/* 80448AA4 004459E4  C0 82 26 B4 */	lfs f4, lbl_80520A14@sda21(r2)
/* 80448AA8 004459E8  C0 7D 00 18 */	lfs f3, 0x18(r29)
/* 80448AAC 004459EC  C0 42 26 40 */	lfs f2, lbl_805209A0@sda21(r2)
/* 80448AB0 004459F0  EC C4 00 F2 */	fmuls f6, f4, f3
/* 80448AB4 004459F4  C0 A2 26 B8 */	lfs f5, lbl_80520A18@sda21(r2)
/* 80448AB8 004459F8  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 80448ABC 004459FC  40 80 00 30 */	bge .L_80448AEC
/* 80448AC0 00445A00  C0 42 26 BC */	lfs f2, lbl_80520A1C@sda21(r2)
/* 80448AC4 00445A04  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448AC8 00445A08  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448ACC 00445A0C  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448AD0 00445A10  FC 40 10 1E */	fctiwz f2, f2
/* 80448AD4 00445A14  D8 41 01 78 */	stfd f2, 0x178(r1)
/* 80448AD8 00445A18  80 01 01 7C */	lwz r0, 0x17c(r1)
/* 80448ADC 00445A1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448AE0 00445A20  7C 43 04 2E */	lfsx f2, r3, r0
/* 80448AE4 00445A24  FC 80 10 50 */	fneg f4, f2
/* 80448AE8 00445A28  48 00 00 28 */	b .L_80448B10
.L_80448AEC:
/* 80448AEC 00445A2C  C0 42 26 C0 */	lfs f2, lbl_80520A20@sda21(r2)
/* 80448AF0 00445A30  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448AF4 00445A34  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448AF8 00445A38  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448AFC 00445A3C  FC 40 10 1E */	fctiwz f2, f2
/* 80448B00 00445A40  D8 41 01 80 */	stfd f2, 0x180(r1)
/* 80448B04 00445A44  80 01 01 84 */	lwz r0, 0x184(r1)
/* 80448B08 00445A48  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448B0C 00445A4C  7C 83 04 2E */	lfsx f4, r3, r0
.L_80448B10:
/* 80448B10 00445A50  C0 62 26 44 */	lfs f3, lbl_805209A4@sda21(r2)
/* 80448B14 00445A54  C0 42 26 40 */	lfs f2, lbl_805209A0@sda21(r2)
/* 80448B18 00445A58  EC 65 19 3A */	fmadds f3, f5, f4, f3
/* 80448B1C 00445A5C  C0 82 26 C4 */	lfs f4, lbl_80520A24@sda21(r2)
/* 80448B20 00445A60  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 80448B24 00445A64  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80448B28 00445A68  40 80 00 30 */	bge .L_80448B58
/* 80448B2C 00445A6C  C0 42 26 BC */	lfs f2, lbl_80520A1C@sda21(r2)
/* 80448B30 00445A70  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448B34 00445A74  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448B38 00445A78  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448B3C 00445A7C  FC 40 10 1E */	fctiwz f2, f2
/* 80448B40 00445A80  D8 41 01 88 */	stfd f2, 0x188(r1)
/* 80448B44 00445A84  80 01 01 8C */	lwz r0, 0x18c(r1)
/* 80448B48 00445A88  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448B4C 00445A8C  7C 43 04 2E */	lfsx f2, r3, r0
/* 80448B50 00445A90  FC 60 10 50 */	fneg f3, f2
/* 80448B54 00445A94  48 00 00 28 */	b .L_80448B7C
.L_80448B58:
/* 80448B58 00445A98  C0 42 26 C0 */	lfs f2, lbl_80520A20@sda21(r2)
/* 80448B5C 00445A9C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448B60 00445AA0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448B64 00445AA4  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448B68 00445AA8  FC 40 10 1E */	fctiwz f2, f2
/* 80448B6C 00445AAC  D8 41 01 90 */	stfd f2, 0x190(r1)
/* 80448B70 00445AB0  80 01 01 94 */	lwz r0, 0x194(r1)
/* 80448B74 00445AB4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448B78 00445AB8  7C 63 04 2E */	lfsx f3, r3, r0
.L_80448B7C:
/* 80448B7C 00445ABC  C0 42 26 44 */	lfs f2, lbl_805209A4@sda21(r2)
/* 80448B80 00445AC0  3C 60 80 51 */	lis r3, sPikminTex__13TinyPikminMgr@ha
/* 80448B84 00445AC4  80 1D 00 04 */	lwz r0, 4(r29)
/* 80448B88 00445AC8  38 63 44 78 */	addi r3, r3, sPikminTex__13TinyPikminMgr@l
/* 80448B8C 00445ACC  EC C4 10 FC */	fnmsubs f6, f4, f3, f2
/* 80448B90 00445AD0  C0 BD 00 0C */	lfs f5, 0xc(r29)
/* 80448B94 00445AD4  54 00 10 3A */	slwi r0, r0, 2
/* 80448B98 00445AD8  C0 9D 00 14 */	lfs f4, 0x14(r29)
/* 80448B9C 00445ADC  7F 23 00 2E */	lwzx r25, r3, r0
/* 80448BA0 00445AE0  C0 7D 00 08 */	lfs f3, 8(r29)
/* 80448BA4 00445AE4  C0 5D 00 10 */	lfs f2, 0x10(r29)
/* 80448BA8 00445AE8  EC 00 01 B2 */	fmuls f0, f0, f6
/* 80448BAC 00445AEC  7F 23 CB 78 */	mr r3, r25
/* 80448BB0 00445AF0  EF E5 20 2A */	fadds f31, f5, f4
/* 80448BB4 00445AF4  D0 39 00 CC */	stfs f1, 0xcc(r25)
/* 80448BB8 00445AF8  EF C3 10 2A */	fadds f30, f3, f2
/* 80448BBC 00445AFC  D0 19 00 D0 */	stfs f0, 0xd0(r25)
/* 80448BC0 00445B00  81 99 00 00 */	lwz r12, 0(r25)
/* 80448BC4 00445B04  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80448BC8 00445B08  7D 89 03 A6 */	mtctr r12
/* 80448BCC 00445B0C  4E 80 04 21 */	bctrl 
/* 80448BD0 00445B10  C0 79 00 28 */	lfs f3, 0x28(r25)
/* 80448BD4 00445B14  7F 23 CB 78 */	mr r3, r25
/* 80448BD8 00445B18  C0 59 00 20 */	lfs f2, 0x20(r25)
/* 80448BDC 00445B1C  38 80 00 7A */	li r4, 0x7a
/* 80448BE0 00445B20  C0 39 00 2C */	lfs f1, 0x2c(r25)
/* 80448BE4 00445B24  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 80448BE8 00445B28  EC 83 10 28 */	fsubs f4, f3, f2
/* 80448BEC 00445B2C  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80448BF0 00445B30  EC 01 00 28 */	fsubs f0, f1, f0
/* 80448BF4 00445B34  C0 7D 00 30 */	lfs f3, 0x30(r29)
/* 80448BF8 00445B38  EC 24 00 B2 */	fmuls f1, f4, f2
/* 80448BFC 00445B3C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80448C00 00445B40  4B BE F8 01 */	bl rotate__7J2DPaneFff13J2DRotateAxisf
/* 80448C04 00445B44  C0 59 00 28 */	lfs f2, 0x28(r25)
/* 80448C08 00445B48  7F 23 CB 78 */	mr r3, r25
/* 80448C0C 00445B4C  C0 19 00 20 */	lfs f0, 0x20(r25)
/* 80448C10 00445B50  38 80 00 00 */	li r4, 0
/* 80448C14 00445B54  81 99 00 00 */	lwz r12, 0(r25)
/* 80448C18 00445B58  38 A0 00 00 */	li r5, 0
/* 80448C1C 00445B5C  C0 39 00 2C */	lfs f1, 0x2c(r25)
/* 80448C20 00445B60  EC 62 00 28 */	fsubs f3, f2, f0
/* 80448C24 00445B64  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 80448C28 00445B68  38 C0 00 00 */	li r6, 0
/* 80448C2C 00445B6C  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80448C30 00445B70  EC 01 00 28 */	fsubs f0, f1, f0
/* 80448C34 00445B74  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80448C38 00445B78  EC 23 F0 BC */	fnmsubs f1, f3, f2, f30
/* 80448C3C 00445B7C  EC 5F 00 28 */	fsubs f2, f31, f0
/* 80448C40 00445B80  7D 89 03 A6 */	mtctr r12
/* 80448C44 00445B84  4E 80 04 21 */	bctrl 
.L_80448C48:
/* 80448C48 00445B88  3B 9C 00 34 */	addi r28, r28, 0x34
/* 80448C4C 00445B8C  3B FF 00 01 */	addi r31, r31, 1
.L_80448C50:
/* 80448C50 00445B90  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80448C54 00445B94  7C 1F 00 40 */	cmplw r31, r0
/* 80448C58 00445B98  41 80 FD E4 */	blt .L_80448A3C
/* 80448C5C 00445B9C  38 7B 00 BC */	addi r3, r27, 0xbc
/* 80448C60 00445BA0  81 9B 00 BC */	lwz r12, 0xbc(r27)
/* 80448C64 00445BA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448C68 00445BA8  7D 89 03 A6 */	mtctr r12
/* 80448C6C 00445BAC  4E 80 04 21 */	bctrl 
/* 80448C70 00445BB0  80 9A 00 5C */	lwz r4, 0x7c(r26)
/* 80448C74 00445BB4  38 61 00 10 */	addi r3, r1, 0x10
/* 80448C78 00445BB8  4B BF 18 99 */	bl __ct__10J2DPictureFP10JUTTexture
/* 80448C7C 00445BBC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448C80 00445BC0  38 00 FF FF */	li r0, -1
/* 80448C84 00445BC4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80448C88 00445BC8  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 80448C8C 00445BCC  2C 00 00 05 */	cmpwi r0, 5
/* 80448C90 00445BD0  40 82 00 24 */	bne .L_80448CB4
/* 80448C94 00445BD4  38 00 00 FF */	li r0, 0xff
/* 80448C98 00445BD8  38 80 00 00 */	li r4, 0
/* 80448C9C 00445BDC  38 60 00 46 */	li r3, 0x46
/* 80448CA0 00445BE0  98 81 00 0C */	stb r4, 0xc(r1)
/* 80448CA4 00445BE4  98 61 00 0D */	stb r3, 0xd(r1)
/* 80448CA8 00445BE8  98 01 00 0E */	stb r0, 0xe(r1)
/* 80448CAC 00445BEC  98 01 00 0F */	stb r0, 0xf(r1)
/* 80448CB0 00445BF0  48 00 00 20 */	b .L_80448CD0
.L_80448CB4:
/* 80448CB4 00445BF4  38 60 00 00 */	li r3, 0
/* 80448CB8 00445BF8  38 80 00 DC */	li r4, 0xdc
/* 80448CBC 00445BFC  38 00 00 FF */	li r0, 0xff
/* 80448CC0 00445C00  98 81 00 0C */	stb r4, 0xc(r1)
/* 80448CC4 00445C04  98 61 00 0D */	stb r3, 0xd(r1)
/* 80448CC8 00445C08  98 61 00 0E */	stb r3, 0xe(r1)
/* 80448CCC 00445C0C  98 01 00 0F */	stb r0, 0xf(r1)
.L_80448CD0:
/* 80448CD0 00445C10  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80448CD4 00445C14  90 01 00 08 */	stw r0, 8(r1)
/* 80448CD8 00445C18  88 A1 00 08 */	lbz r5, 8(r1)
/* 80448CDC 00445C1C  88 81 00 09 */	lbz r4, 9(r1)
/* 80448CE0 00445C20  88 61 00 0A */	lbz r3, 0xa(r1)
/* 80448CE4 00445C24  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80448CE8 00445C28  98 A1 01 58 */	stb r5, 0x158(r1)
/* 80448CEC 00445C2C  98 81 01 59 */	stb r4, 0x159(r1)
/* 80448CF0 00445C30  98 61 01 5A */	stb r3, 0x15a(r1)
/* 80448CF4 00445C34  98 01 01 5B */	stb r0, 0x15b(r1)
/* 80448CF8 00445C38  4B C8 08 A9 */	bl rand
/* 80448CFC 00445C3C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448D00 00445C40  3C 00 43 30 */	lis r0, 0x4330
/* 80448D04 00445C44  90 61 01 94 */	stw r3, 0x194(r1)
/* 80448D08 00445C48  C8 42 26 60 */	lfd f2, lbl_805209C0@sda21(r2)
/* 80448D0C 00445C4C  90 01 01 90 */	stw r0, 0x190(r1)
/* 80448D10 00445C50  C0 02 26 4C */	lfs f0, lbl_805209AC@sda21(r2)
/* 80448D14 00445C54  C8 21 01 90 */	lfd f1, 0x190(r1)
/* 80448D18 00445C58  EC 21 10 28 */	fsubs f1, f1, f2
/* 80448D1C 00445C5C  EF C1 00 24 */	fdivs f30, f1, f0
/* 80448D20 00445C60  4B C8 08 81 */	bl rand
/* 80448D24 00445C64  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448D28 00445C68  3C 00 43 30 */	lis r0, 0x4330
/* 80448D2C 00445C6C  90 61 01 8C */	stw r3, 0x18c(r1)
/* 80448D30 00445C70  38 61 00 10 */	addi r3, r1, 0x10
/* 80448D34 00445C74  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80448D38 00445C78  38 80 00 00 */	li r4, 0
/* 80448D3C 00445C7C  90 01 01 88 */	stw r0, 0x188(r1)
/* 80448D40 00445C80  38 A0 00 00 */	li r5, 0
/* 80448D44 00445C84  C8 82 26 60 */	lfd f4, lbl_805209C0@sda21(r2)
/* 80448D48 00445C88  EC 3E 10 28 */	fsubs f1, f30, f2
/* 80448D4C 00445C8C  C8 01 01 88 */	lfd f0, 0x188(r1)
/* 80448D50 00445C90  38 C0 00 00 */	li r6, 0
/* 80448D54 00445C94  C0 62 26 4C */	lfs f3, lbl_805209AC@sda21(r2)
/* 80448D58 00445C98  EC 80 20 28 */	fsubs f4, f0, f4
/* 80448D5C 00445C9C  C0 FA 00 E4 */	lfs f7, 0x104(r26)
/* 80448D60 00445CA0  C0 02 26 F0 */	lfs f0, lbl_80520A50@sda21(r2)
/* 80448D64 00445CA4  C0 A2 26 EC */	lfs f5, lbl_80520A4C@sda21(r2)
/* 80448D68 00445CA8  EC C4 18 24 */	fdivs f6, f4, f3
/* 80448D6C 00445CAC  C0 62 26 F4 */	lfs f3, lbl_80520A54@sda21(r2)
/* 80448D70 00445CB0  C0 82 26 F8 */	lfs f4, lbl_80520A58@sda21(r2)
/* 80448D74 00445CB4  EC C6 10 28 */	fsubs f6, f6, f2
/* 80448D78 00445CB8  EC 47 00 7A */	fmadds f2, f7, f1, f0
/* 80448D7C 00445CBC  EC 27 29 BA */	fmadds f1, f7, f6, f5
/* 80448D80 00445CC0  4B BF 2E 35 */	bl draw__10J2DPictureFffffbbb
/* 80448D84 00445CC4  C0 3A 00 E4 */	lfs f1, 0x104(r26)
/* 80448D88 00445CC8  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80448D8C 00445CCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80448D90 00445CD0  40 81 00 10 */	ble .L_80448DA0
/* 80448D94 00445CD4  C0 02 26 FC */	lfs f0, lbl_80520A5C@sda21(r2)
/* 80448D98 00445CD8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80448D9C 00445CDC  D0 1A 00 E4 */	stfs f0, 0x104(r26)
.L_80448DA0:
/* 80448DA0 00445CE0  38 61 00 10 */	addi r3, r1, 0x10
/* 80448DA4 00445CE4  38 80 FF FF */	li r4, -1
/* 80448DA8 00445CE8  4B BF 21 39 */	bl __dt__10J2DPictureFv
/* 80448DAC 00445CEC  E3 E1 01 D8 */	psq_l f31, 472(r1), 0, qr0
/* 80448DB0 00445CF0  CB E1 01 D0 */	lfd f31, 0x1d0(r1)
/* 80448DB4 00445CF4  E3 C1 01 C8 */	psq_l f30, 456(r1), 0, qr0
/* 80448DB8 00445CF8  CB C1 01 C0 */	lfd f30, 0x1c0(r1)
/* 80448DBC 00445CFC  BB 21 01 A4 */	lmw r25, 0x1a4(r1)
/* 80448DC0 00445D00  80 01 01 E4 */	lwz r0, 0x1e4(r1)
/* 80448DC4 00445D04  7C 08 03 A6 */	mtlr r0
/* 80448DC8 00445D08  38 21 01 E0 */	addi r1, r1, 0x1e0
/* 80448DCC 00445D0C  4E 80 00 20 */	blr 
.endfn drawNintendoLogo__11BootSectionFR8Graphics
.else
.fn drawNintendoLogo__11BootSectionFR8Graphics, global
/* 804489F0 00445930  94 21 FE 20 */	stwu r1, -0x1e0(r1)
/* 804489F4 00445934  7C 08 02 A6 */	mflr r0
/* 804489F8 00445938  90 01 01 E4 */	stw r0, 0x1e4(r1)
/* 804489FC 0044593C  DB E1 01 D0 */	stfd f31, 0x1d0(r1)
/* 80448A00 00445940  F3 E1 01 D8 */	psq_st f31, 472(r1), 0, qr0
/* 80448A04 00445944  DB C1 01 C0 */	stfd f30, 0x1c0(r1)
/* 80448A08 00445948  F3 C1 01 C8 */	psq_st f30, 456(r1), 0, qr0
/* 80448A0C 0044594C  BF 21 01 A4 */	stmw r25, 0x1a4(r1)
/* 80448A10 00445950  7C 9B 23 78 */	mr r27, r4
/* 80448A14 00445954  7C 7A 1B 78 */	mr r26, r3
/* 80448A18 00445958  38 7B 00 BC */	addi r3, r27, 0xbc
/* 80448A1C 0044595C  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 80448A20 00445960  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448A24 00445964  7D 89 03 A6 */	mtctr r12
/* 80448A28 00445968  4E 80 04 21 */	bctrl 
/* 80448A2C 0044596C  3B E0 00 00 */	li r31, 0
/* 80448A30 00445970  83 DA 00 E0 */	lwz r30, 0xe0(r26)
/* 80448A34 00445974  7F FC FB 78 */	mr r28, r31
/* 80448A38 00445978  48 00 02 18 */	b .L_80448C50
.L_80448A3C:
/* 80448A3C 0044597C  80 1E 00 00 */	lwz r0, 0(r30)
/* 80448A40 00445980  7F A0 E2 14 */	add r29, r0, r28
/* 80448A44 00445984  80 1D 00 00 */	lwz r0, 0(r29)
/* 80448A48 00445988  2C 00 00 00 */	cmpwi r0, 0
/* 80448A4C 0044598C  41 82 01 FC */	beq .L_80448C48
/* 80448A50 00445990  C0 5D 00 14 */	lfs f2, 0x14(r29)
/* 80448A54 00445994  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80448A58 00445998  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80448A5C 0044599C  40 80 00 40 */	bge .L_80448A9C
/* 80448A60 004459A0  C0 22 26 68 */	lfs f1, lbl_805209C8@sda21(r2)
/* 80448A64 004459A4  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80448A68 004459A8  EC 22 08 24 */	fdivs f1, f2, f1
/* 80448A6C 004459AC  FC 20 0A 10 */	fabs f1, f1
/* 80448A70 004459B0  FC 80 08 18 */	frsp f4, f1
/* 80448A74 004459B4  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80448A78 004459B8  40 81 00 08 */	ble .L_80448A80
/* 80448A7C 004459BC  FC 80 00 90 */	fmr f4, f0
.L_80448A80:
/* 80448A80 004459C0  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80448A84 004459C4  C0 62 26 B0 */	lfs f3, lbl_80520A10@sda21(r2)
/* 80448A88 004459C8  EC 40 20 28 */	fsubs f2, f0, f4
/* 80448A8C 004459CC  C0 22 26 AC */	lfs f1, lbl_80520A0C@sda21(r2)
/* 80448A90 004459D0  EC 03 01 3A */	fmadds f0, f3, f4, f0
/* 80448A94 004459D4  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 80448A98 004459D8  48 00 00 0C */	b .L_80448AA4
.L_80448A9C:
/* 80448A9C 004459DC  C0 22 26 44 */	lfs f1, lbl_805209A4@sda21(r2)
/* 80448AA0 004459E0  FC 00 08 90 */	fmr f0, f1
.L_80448AA4:
/* 80448AA4 004459E4  C0 82 26 B4 */	lfs f4, lbl_80520A14@sda21(r2)
/* 80448AA8 004459E8  C0 7D 00 18 */	lfs f3, 0x18(r29)
/* 80448AAC 004459EC  C0 42 26 40 */	lfs f2, lbl_805209A0@sda21(r2)
/* 80448AB0 004459F0  EC C4 00 F2 */	fmuls f6, f4, f3
/* 80448AB4 004459F4  C0 A2 26 B8 */	lfs f5, lbl_80520A18@sda21(r2)
/* 80448AB8 004459F8  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 80448ABC 004459FC  40 80 00 30 */	bge .L_80448AEC
/* 80448AC0 00445A00  C0 42 26 BC */	lfs f2, lbl_80520A1C@sda21(r2)
/* 80448AC4 00445A04  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448AC8 00445A08  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448ACC 00445A0C  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448AD0 00445A10  FC 40 10 1E */	fctiwz f2, f2
/* 80448AD4 00445A14  D8 41 01 78 */	stfd f2, 0x178(r1)
/* 80448AD8 00445A18  80 01 01 7C */	lwz r0, 0x17c(r1)
/* 80448ADC 00445A1C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448AE0 00445A20  7C 43 04 2E */	lfsx f2, r3, r0
/* 80448AE4 00445A24  FC 80 10 50 */	fneg f4, f2
/* 80448AE8 00445A28  48 00 00 28 */	b .L_80448B10
.L_80448AEC:
/* 80448AEC 00445A2C  C0 42 26 C0 */	lfs f2, lbl_80520A20@sda21(r2)
/* 80448AF0 00445A30  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448AF4 00445A34  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448AF8 00445A38  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448AFC 00445A3C  FC 40 10 1E */	fctiwz f2, f2
/* 80448B00 00445A40  D8 41 01 80 */	stfd f2, 0x180(r1)
/* 80448B04 00445A44  80 01 01 84 */	lwz r0, 0x184(r1)
/* 80448B08 00445A48  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448B0C 00445A4C  7C 83 04 2E */	lfsx f4, r3, r0
.L_80448B10:
/* 80448B10 00445A50  C0 62 26 44 */	lfs f3, lbl_805209A4@sda21(r2)
/* 80448B14 00445A54  C0 42 26 40 */	lfs f2, lbl_805209A0@sda21(r2)
/* 80448B18 00445A58  EC 65 19 3A */	fmadds f3, f5, f4, f3
/* 80448B1C 00445A5C  C0 82 26 C4 */	lfs f4, lbl_80520A24@sda21(r2)
/* 80448B20 00445A60  FC 06 10 40 */	fcmpo cr0, f6, f2
/* 80448B24 00445A64  EC 21 00 F2 */	fmuls f1, f1, f3
/* 80448B28 00445A68  40 80 00 30 */	bge .L_80448B58
/* 80448B2C 00445A6C  C0 42 26 BC */	lfs f2, lbl_80520A1C@sda21(r2)
/* 80448B30 00445A70  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448B34 00445A74  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448B38 00445A78  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448B3C 00445A7C  FC 40 10 1E */	fctiwz f2, f2
/* 80448B40 00445A80  D8 41 01 88 */	stfd f2, 0x188(r1)
/* 80448B44 00445A84  80 01 01 8C */	lwz r0, 0x18c(r1)
/* 80448B48 00445A88  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448B4C 00445A8C  7C 43 04 2E */	lfsx f2, r3, r0
/* 80448B50 00445A90  FC 60 10 50 */	fneg f3, f2
/* 80448B54 00445A94  48 00 00 28 */	b .L_80448B7C
.L_80448B58:
/* 80448B58 00445A98  C0 42 26 C0 */	lfs f2, lbl_80520A20@sda21(r2)
/* 80448B5C 00445A9C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448B60 00445AA0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448B64 00445AA4  EC 46 00 B2 */	fmuls f2, f6, f2
/* 80448B68 00445AA8  FC 40 10 1E */	fctiwz f2, f2
/* 80448B6C 00445AAC  D8 41 01 90 */	stfd f2, 0x190(r1)
/* 80448B70 00445AB0  80 01 01 94 */	lwz r0, 0x194(r1)
/* 80448B74 00445AB4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448B78 00445AB8  7C 63 04 2E */	lfsx f3, r3, r0
.L_80448B7C:
/* 80448B7C 00445ABC  C0 42 26 44 */	lfs f2, lbl_805209A4@sda21(r2)
/* 80448B80 00445AC0  3C 60 80 51 */	lis r3, sPikminTex__13TinyPikminMgr@ha
/* 80448B84 00445AC4  80 1D 00 04 */	lwz r0, 4(r29)
/* 80448B88 00445AC8  38 63 44 78 */	addi r3, r3, sPikminTex__13TinyPikminMgr@l
/* 80448B8C 00445ACC  EC C4 10 FC */	fnmsubs f6, f4, f3, f2
/* 80448B90 00445AD0  C0 BD 00 0C */	lfs f5, 0xc(r29)
/* 80448B94 00445AD4  54 00 10 3A */	slwi r0, r0, 2
/* 80448B98 00445AD8  C0 9D 00 14 */	lfs f4, 0x14(r29)
/* 80448B9C 00445ADC  7F 23 00 2E */	lwzx r25, r3, r0
/* 80448BA0 00445AE0  C0 7D 00 08 */	lfs f3, 8(r29)
/* 80448BA4 00445AE4  C0 5D 00 10 */	lfs f2, 0x10(r29)
/* 80448BA8 00445AE8  EC 00 01 B2 */	fmuls f0, f0, f6
/* 80448BAC 00445AEC  7F 23 CB 78 */	mr r3, r25
/* 80448BB0 00445AF0  EF E5 20 2A */	fadds f31, f5, f4
/* 80448BB4 00445AF4  D0 39 00 CC */	stfs f1, 0xcc(r25)
/* 80448BB8 00445AF8  EF C3 10 2A */	fadds f30, f3, f2
/* 80448BBC 00445AFC  D0 19 00 D0 */	stfs f0, 0xd0(r25)
/* 80448BC0 00445B00  81 99 00 00 */	lwz r12, 0(r25)
/* 80448BC4 00445B04  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80448BC8 00445B08  7D 89 03 A6 */	mtctr r12
/* 80448BCC 00445B0C  4E 80 04 21 */	bctrl 
/* 80448BD0 00445B10  C0 79 00 28 */	lfs f3, 0x28(r25)
/* 80448BD4 00445B14  7F 23 CB 78 */	mr r3, r25
/* 80448BD8 00445B18  C0 59 00 20 */	lfs f2, 0x20(r25)
/* 80448BDC 00445B1C  38 80 00 7A */	li r4, 0x7a
/* 80448BE0 00445B20  C0 39 00 2C */	lfs f1, 0x2c(r25)
/* 80448BE4 00445B24  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 80448BE8 00445B28  EC 83 10 28 */	fsubs f4, f3, f2
/* 80448BEC 00445B2C  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80448BF0 00445B30  EC 01 00 28 */	fsubs f0, f1, f0
/* 80448BF4 00445B34  C0 7D 00 30 */	lfs f3, 0x30(r29)
/* 80448BF8 00445B38  EC 24 00 B2 */	fmuls f1, f4, f2
/* 80448BFC 00445B3C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 80448C00 00445B40  4B BE F8 01 */	bl rotate__7J2DPaneFff13J2DRotateAxisf
/* 80448C04 00445B44  C0 59 00 28 */	lfs f2, 0x28(r25)
/* 80448C08 00445B48  7F 23 CB 78 */	mr r3, r25
/* 80448C0C 00445B4C  C0 19 00 20 */	lfs f0, 0x20(r25)
/* 80448C10 00445B50  38 80 00 00 */	li r4, 0
/* 80448C14 00445B54  81 99 00 00 */	lwz r12, 0(r25)
/* 80448C18 00445B58  38 A0 00 00 */	li r5, 0
/* 80448C1C 00445B5C  C0 39 00 2C */	lfs f1, 0x2c(r25)
/* 80448C20 00445B60  EC 62 00 28 */	fsubs f3, f2, f0
/* 80448C24 00445B64  C0 19 00 24 */	lfs f0, 0x24(r25)
/* 80448C28 00445B68  38 C0 00 00 */	li r6, 0
/* 80448C2C 00445B6C  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80448C30 00445B70  EC 01 00 28 */	fsubs f0, f1, f0
/* 80448C34 00445B74  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 80448C38 00445B78  EC 23 F0 BC */	fnmsubs f1, f3, f2, f30
/* 80448C3C 00445B7C  EC 5F 00 28 */	fsubs f2, f31, f0
/* 80448C40 00445B80  7D 89 03 A6 */	mtctr r12
/* 80448C44 00445B84  4E 80 04 21 */	bctrl 
.L_80448C48:
/* 80448C48 00445B88  3B 9C 00 34 */	addi r28, r28, 0x34
/* 80448C4C 00445B8C  3B FF 00 01 */	addi r31, r31, 1
.L_80448C50:
/* 80448C50 00445B90  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80448C54 00445B94  7C 1F 00 40 */	cmplw r31, r0
/* 80448C58 00445B98  41 80 FD E4 */	blt .L_80448A3C
/* 80448C5C 00445B9C  38 7B 00 BC */	addi r3, r27, 0xbc
/* 80448C60 00445BA0  81 9B 00 BC */	lwz r12, 0xbc(r27)
/* 80448C64 00445BA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448C68 00445BA8  7D 89 03 A6 */	mtctr r12
/* 80448C6C 00445BAC  4E 80 04 21 */	bctrl 
/* 80448C70 00445BB0  80 9A 00 5C */	lwz r4, 0x5c(r26)
/* 80448C74 00445BB4  38 61 00 10 */	addi r3, r1, 0x10
/* 80448C78 00445BB8  4B BF 18 99 */	bl __ct__10J2DPictureFP10JUTTexture
/* 80448C7C 00445BBC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80448C80 00445BC0  38 00 FF FF */	li r0, -1
/* 80448C84 00445BC4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80448C88 00445BC8  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 80448C8C 00445BCC  2C 00 00 05 */	cmpwi r0, 5
/* 80448C90 00445BD0  40 82 00 24 */	bne .L_80448CB4
/* 80448C94 00445BD4  38 00 00 FF */	li r0, 0xff
/* 80448C98 00445BD8  38 80 00 00 */	li r4, 0
/* 80448C9C 00445BDC  38 60 00 46 */	li r3, 0x46
/* 80448CA0 00445BE0  98 81 00 0C */	stb r4, 0xc(r1)
/* 80448CA4 00445BE4  98 61 00 0D */	stb r3, 0xd(r1)
/* 80448CA8 00445BE8  98 01 00 0E */	stb r0, 0xe(r1)
/* 80448CAC 00445BEC  98 01 00 0F */	stb r0, 0xf(r1)
/* 80448CB0 00445BF0  48 00 00 20 */	b .L_80448CD0
.L_80448CB4:
/* 80448CB4 00445BF4  38 60 00 00 */	li r3, 0
/* 80448CB8 00445BF8  38 80 00 DC */	li r4, 0xdc
/* 80448CBC 00445BFC  38 00 00 FF */	li r0, 0xff
/* 80448CC0 00445C00  98 81 00 0C */	stb r4, 0xc(r1)
/* 80448CC4 00445C04  98 61 00 0D */	stb r3, 0xd(r1)
/* 80448CC8 00445C08  98 61 00 0E */	stb r3, 0xe(r1)
/* 80448CCC 00445C0C  98 01 00 0F */	stb r0, 0xf(r1)
.L_80448CD0:
/* 80448CD0 00445C10  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80448CD4 00445C14  90 01 00 08 */	stw r0, 8(r1)
/* 80448CD8 00445C18  88 A1 00 08 */	lbz r5, 8(r1)
/* 80448CDC 00445C1C  88 81 00 09 */	lbz r4, 9(r1)
/* 80448CE0 00445C20  88 61 00 0A */	lbz r3, 0xa(r1)
/* 80448CE4 00445C24  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80448CE8 00445C28  98 A1 01 58 */	stb r5, 0x158(r1)
/* 80448CEC 00445C2C  98 81 01 59 */	stb r4, 0x159(r1)
/* 80448CF0 00445C30  98 61 01 5A */	stb r3, 0x15a(r1)
/* 80448CF4 00445C34  98 01 01 5B */	stb r0, 0x15b(r1)
/* 80448CF8 00445C38  4B C8 08 A9 */	bl rand
/* 80448CFC 00445C3C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448D00 00445C40  3C 00 43 30 */	lis r0, 0x4330
/* 80448D04 00445C44  90 61 01 94 */	stw r3, 0x194(r1)
/* 80448D08 00445C48  C8 42 26 60 */	lfd f2, lbl_805209C0@sda21(r2)
/* 80448D0C 00445C4C  90 01 01 90 */	stw r0, 0x190(r1)
/* 80448D10 00445C50  C0 02 26 4C */	lfs f0, lbl_805209AC@sda21(r2)
/* 80448D14 00445C54  C8 21 01 90 */	lfd f1, 0x190(r1)
/* 80448D18 00445C58  EC 21 10 28 */	fsubs f1, f1, f2
/* 80448D1C 00445C5C  EF C1 00 24 */	fdivs f30, f1, f0
/* 80448D20 00445C60  4B C8 08 81 */	bl rand
/* 80448D24 00445C64  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80448D28 00445C68  3C 00 43 30 */	lis r0, 0x4330
/* 80448D2C 00445C6C  90 61 01 8C */	stw r3, 0x18c(r1)
/* 80448D30 00445C70  38 61 00 10 */	addi r3, r1, 0x10
/* 80448D34 00445C74  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80448D38 00445C78  38 80 00 00 */	li r4, 0
/* 80448D3C 00445C7C  90 01 01 88 */	stw r0, 0x188(r1)
/* 80448D40 00445C80  38 A0 00 00 */	li r5, 0
/* 80448D44 00445C84  C8 82 26 60 */	lfd f4, lbl_805209C0@sda21(r2)
/* 80448D48 00445C88  EC 3E 10 28 */	fsubs f1, f30, f2
/* 80448D4C 00445C8C  C8 01 01 88 */	lfd f0, 0x188(r1)
/* 80448D50 00445C90  38 C0 00 00 */	li r6, 0
/* 80448D54 00445C94  C0 62 26 4C */	lfs f3, lbl_805209AC@sda21(r2)
/* 80448D58 00445C98  EC 80 20 28 */	fsubs f4, f0, f4
/* 80448D5C 00445C9C  C0 FA 00 E4 */	lfs f7, 0xe4(r26)
/* 80448D60 00445CA0  C0 02 26 F0 */	lfs f0, lbl_80520A50@sda21(r2)
/* 80448D64 00445CA4  C0 A2 26 EC */	lfs f5, lbl_80520A4C@sda21(r2)
/* 80448D68 00445CA8  EC C4 18 24 */	fdivs f6, f4, f3
/* 80448D6C 00445CAC  C0 62 26 F4 */	lfs f3, lbl_80520A54@sda21(r2)
/* 80448D70 00445CB0  C0 82 26 F8 */	lfs f4, lbl_80520A58@sda21(r2)
/* 80448D74 00445CB4  EC C6 10 28 */	fsubs f6, f6, f2
/* 80448D78 00445CB8  EC 47 00 7A */	fmadds f2, f7, f1, f0
/* 80448D7C 00445CBC  EC 27 29 BA */	fmadds f1, f7, f6, f5
/* 80448D80 00445CC0  4B BF 2E 35 */	bl draw__10J2DPictureFffffbbb
/* 80448D84 00445CC4  C0 3A 00 E4 */	lfs f1, 0xe4(r26)
/* 80448D88 00445CC8  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80448D8C 00445CCC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80448D90 00445CD0  40 81 00 10 */	ble .L_80448DA0
/* 80448D94 00445CD4  C0 02 26 FC */	lfs f0, lbl_80520A5C@sda21(r2)
/* 80448D98 00445CD8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80448D9C 00445CDC  D0 1A 00 E4 */	stfs f0, 0xe4(r26)
.L_80448DA0:
/* 80448DA0 00445CE0  38 61 00 10 */	addi r3, r1, 0x10
/* 80448DA4 00445CE4  38 80 FF FF */	li r4, -1
/* 80448DA8 00445CE8  4B BF 21 39 */	bl __dt__10J2DPictureFv
/* 80448DAC 00445CEC  E3 E1 01 D8 */	psq_l f31, 472(r1), 0, qr0
/* 80448DB0 00445CF0  CB E1 01 D0 */	lfd f31, 0x1d0(r1)
/* 80448DB4 00445CF4  E3 C1 01 C8 */	psq_l f30, 456(r1), 0, qr0
/* 80448DB8 00445CF8  CB C1 01 C0 */	lfd f30, 0x1c0(r1)
/* 80448DBC 00445CFC  BB 21 01 A4 */	lmw r25, 0x1a4(r1)
/* 80448DC0 00445D00  80 01 01 E4 */	lwz r0, 0x1e4(r1)
/* 80448DC4 00445D04  7C 08 03 A6 */	mtlr r0
/* 80448DC8 00445D08  38 21 01 E0 */	addi r1, r1, 0x1e0
/* 80448DCC 00445D0C  4E 80 00 20 */	blr 
.endfn drawNintendoLogo__11BootSectionFR8Graphics
.endif

.if version == 0
.fn drawDolbyLogo__11BootSectionFR8Graphics, global
/* 80448DD0 00445D10  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 80448DD4 00445D14  7C 08 02 A6 */	mflr r0
/* 80448DD8 00445D18  90 01 01 84 */	stw r0, 0x184(r1)
/* 80448DDC 00445D1C  93 E1 01 7C */	stw r31, 0x17c(r1)
/* 80448DE0 00445D20  7C 7F 1B 78 */	mr r31, r3
/* 80448DE4 00445D24  38 64 00 BC */	addi r3, r4, 0xbc
/* 80448DE8 00445D28  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 80448DEC 00445D2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448DF0 00445D30  7D 89 03 A6 */	mtctr r12
/* 80448DF4 00445D34  4E 80 04 21 */	bctrl 
/* 80448DF8 00445D38  80 9F 00 60 */	lwz r4, 0x80(r31)
/* 80448DFC 00445D3C  38 61 00 10 */	addi r3, r1, 0x10
/* 80448E00 00445D40  4B BF 17 11 */	bl __ct__10J2DPictureFP10JUTTexture
/* 80448E04 00445D44  38 00 00 FF */	li r0, 0xff
/* 80448E08 00445D48  C0 22 27 00 */	lfs f1, lbl_80520A60@sda21(r2)
/* 80448E0C 00445D4C  98 01 00 0C */	stb r0, 0xc(r1)
/* 80448E10 00445D50  38 61 00 10 */	addi r3, r1, 0x10
/* 80448E14 00445D54  C0 42 27 04 */	lfs f2, lbl_80520A64@sda21(r2)
/* 80448E18 00445D58  38 80 00 00 */	li r4, 0
/* 80448E1C 00445D5C  98 01 00 0D */	stb r0, 0xd(r1)
/* 80448E20 00445D60  38 A0 00 00 */	li r5, 0
/* 80448E24 00445D64  C0 62 27 08 */	lfs f3, lbl_80520A68@sda21(r2)
/* 80448E28 00445D68  38 C0 00 00 */	li r6, 0
/* 80448E2C 00445D6C  98 01 00 0E */	stb r0, 0xe(r1)
/* 80448E30 00445D70  C0 82 27 0C */	lfs f4, lbl_80520A6C@sda21(r2)
/* 80448E34 00445D74  98 01 00 0F */	stb r0, 0xf(r1)
/* 80448E38 00445D78  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80448E3C 00445D7C  90 01 00 08 */	stw r0, 8(r1)
/* 80448E40 00445D80  89 21 00 08 */	lbz r9, 8(r1)
/* 80448E44 00445D84  89 01 00 09 */	lbz r8, 9(r1)
/* 80448E48 00445D88  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 80448E4C 00445D8C  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80448E50 00445D90  99 21 01 58 */	stb r9, 0x158(r1)
/* 80448E54 00445D94  99 01 01 59 */	stb r8, 0x159(r1)
/* 80448E58 00445D98  98 E1 01 5A */	stb r7, 0x15a(r1)
/* 80448E5C 00445D9C  98 01 01 5B */	stb r0, 0x15b(r1)
/* 80448E60 00445DA0  4B BF 2D 55 */	bl draw__10J2DPictureFffffbbb
/* 80448E64 00445DA4  38 61 00 10 */	addi r3, r1, 0x10
/* 80448E68 00445DA8  38 80 FF FF */	li r4, -1
/* 80448E6C 00445DAC  4B BF 20 75 */	bl __dt__10J2DPictureFv
/* 80448E70 00445DB0  80 01 01 84 */	lwz r0, 0x184(r1)
/* 80448E74 00445DB4  83 E1 01 7C */	lwz r31, 0x17c(r1)
/* 80448E78 00445DB8  7C 08 03 A6 */	mtlr r0
/* 80448E7C 00445DBC  38 21 01 80 */	addi r1, r1, 0x180
/* 80448E80 00445DC0  4E 80 00 20 */	blr 
.endfn drawDolbyLogo__11BootSectionFR8Graphics
.else
.fn drawDolbyLogo__11BootSectionFR8Graphics, global
/* 80448DD0 00445D10  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 80448DD4 00445D14  7C 08 02 A6 */	mflr r0
/* 80448DD8 00445D18  90 01 01 84 */	stw r0, 0x184(r1)
/* 80448DDC 00445D1C  93 E1 01 7C */	stw r31, 0x17c(r1)
/* 80448DE0 00445D20  7C 7F 1B 78 */	mr r31, r3
/* 80448DE4 00445D24  38 64 00 BC */	addi r3, r4, 0xbc
/* 80448DE8 00445D28  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 80448DEC 00445D2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448DF0 00445D30  7D 89 03 A6 */	mtctr r12
/* 80448DF4 00445D34  4E 80 04 21 */	bctrl 
/* 80448DF8 00445D38  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 80448DFC 00445D3C  38 61 00 10 */	addi r3, r1, 0x10
/* 80448E00 00445D40  4B BF 17 11 */	bl __ct__10J2DPictureFP10JUTTexture
/* 80448E04 00445D44  38 00 00 FF */	li r0, 0xff
/* 80448E08 00445D48  C0 22 27 00 */	lfs f1, lbl_80520A60@sda21(r2)
/* 80448E0C 00445D4C  98 01 00 0C */	stb r0, 0xc(r1)
/* 80448E10 00445D50  38 61 00 10 */	addi r3, r1, 0x10
/* 80448E14 00445D54  C0 42 27 04 */	lfs f2, lbl_80520A64@sda21(r2)
/* 80448E18 00445D58  38 80 00 00 */	li r4, 0
/* 80448E1C 00445D5C  98 01 00 0D */	stb r0, 0xd(r1)
/* 80448E20 00445D60  38 A0 00 00 */	li r5, 0
/* 80448E24 00445D64  C0 62 27 08 */	lfs f3, lbl_80520A68@sda21(r2)
/* 80448E28 00445D68  38 C0 00 00 */	li r6, 0
/* 80448E2C 00445D6C  98 01 00 0E */	stb r0, 0xe(r1)
/* 80448E30 00445D70  C0 82 27 0C */	lfs f4, lbl_80520A6C@sda21(r2)
/* 80448E34 00445D74  98 01 00 0F */	stb r0, 0xf(r1)
/* 80448E38 00445D78  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80448E3C 00445D7C  90 01 00 08 */	stw r0, 8(r1)
/* 80448E40 00445D80  89 21 00 08 */	lbz r9, 8(r1)
/* 80448E44 00445D84  89 01 00 09 */	lbz r8, 9(r1)
/* 80448E48 00445D88  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 80448E4C 00445D8C  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80448E50 00445D90  99 21 01 58 */	stb r9, 0x158(r1)
/* 80448E54 00445D94  99 01 01 59 */	stb r8, 0x159(r1)
/* 80448E58 00445D98  98 E1 01 5A */	stb r7, 0x15a(r1)
/* 80448E5C 00445D9C  98 01 01 5B */	stb r0, 0x15b(r1)
/* 80448E60 00445DA0  4B BF 2D 55 */	bl draw__10J2DPictureFffffbbb
/* 80448E64 00445DA4  38 61 00 10 */	addi r3, r1, 0x10
/* 80448E68 00445DA8  38 80 FF FF */	li r4, -1
/* 80448E6C 00445DAC  4B BF 20 75 */	bl __dt__10J2DPictureFv
/* 80448E70 00445DB0  80 01 01 84 */	lwz r0, 0x184(r1)
/* 80448E74 00445DB4  83 E1 01 7C */	lwz r31, 0x17c(r1)
/* 80448E78 00445DB8  7C 08 03 A6 */	mtlr r0
/* 80448E7C 00445DBC  38 21 01 80 */	addi r1, r1, 0x180
/* 80448E80 00445DC0  4E 80 00 20 */	blr 
.endfn drawDolbyLogo__11BootSectionFR8Graphics
.endif

.if version == 4
.fn drawEpilepsy__11BootSectionFR8Graphics, global
/* 80448E84 00445DC4  94 21 FD 00 */	stwu r1, -0x300(r1)
/* 80448E88 00445DC8  7C 08 02 A6 */	mflr r0
/* 80448E8C 00445DCC  90 01 03 04 */	stw r0, 0x304(r1)
/* 80448E90 00445DD0  93 E1 02 FC */	stw r31, 0x2fc(r1)
/* 80448E94 00445DD4  7C 7F 1B 78 */	mr r31, r3
/* 80448E98 00445DD8  38 64 00 BC */	addi r3, r4, 0xbc
/* 80448E9C 00445DDC  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 80448EA0 00445DE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80448EA4 00445DE4  7D 89 03 A6 */	mtctr r12
/* 80448EA8 00445DE8  4E 80 04 21 */	bctrl 
/* 80448EAC 00445DEC  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 80448EB0 00445DF0  38 61 01 78 */	addi r3, r1, 0x178
/* 80448EB4 00445DF4  4B BF 16 5D */	bl __ct__10J2DPictureFP10JUTTexture
/* 80448EB8 00445DF8  C0 22 26 40 */	lfs f1, lbl_805209A0@sda21(r2)
/* 80448EBC 00445DFC  38 61 01 78 */	addi r3, r1, 0x178
/* 80448EC0 00445E00  C0 62 27 10 */	lfs f3, lbl_80520A70@sda21(r2)
/* 80448EC4 00445E04  38 80 00 00 */	li r4, 0
/* 80448EC8 00445E08  FC 40 08 90 */	fmr f2, f1
/* 80448ECC 00445E0C  C0 82 26 A8 */	lfs f4, lbl_80520A08@sda21(r2)
/* 80448ED0 00445E10  38 A0 00 00 */	li r5, 0
/* 80448ED4 00445E14  38 C0 00 00 */	li r6, 0
/* 80448ED8 00445E18  4B BF 2C DD */	bl draw__10J2DPictureFffffbbb
/* 80448EDC 00445E1C  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80448EE0 00445E20  C0 02 26 58 */	lfs f0, lbl_805209B8@sda21(r2)
/* 80448EE4 00445E24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80448EE8 00445E28  40 81 01 04 */	ble .L_80448FEC
/* 80448EEC 00445E2C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80448EF0 00445E30  38 00 00 FF */	li r0, 0xff
/* 80448EF4 00445E34  C0 42 26 B4 */	lfs f2, lbl_80520A14@sda21(r2)
/* 80448EF8 00445E38  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80448EFC 00445E3C  EC 22 00 72 */	fmuls f1, f2, f1
/* 80448F00 00445E40  98 01 00 0C */	stb r0, 0xc(r1)
/* 80448F04 00445E44  98 01 00 0D */	stb r0, 0xd(r1)
/* 80448F08 00445E48  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80448F0C 00445E4C  98 01 00 0E */	stb r0, 0xe(r1)
/* 80448F10 00445E50  98 01 00 0F */	stb r0, 0xf(r1)
/* 80448F14 00445E54  40 80 00 08 */	bge .L_80448F1C
/* 80448F18 00445E58  FC 20 08 50 */	fneg f1, f1
.L_80448F1C:
/* 80448F1C 00445E5C  C0 02 26 C0 */	lfs f0, lbl_80520A20@sda21(r2)
/* 80448F20 00445E60  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80448F24 00445E64  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80448F28 00445E68  C0 42 26 44 */	lfs f2, lbl_805209A4@sda21(r2)
/* 80448F2C 00445E6C  EC 21 00 32 */	fmuls f1, f1, f0
/* 80448F30 00445E70  C0 62 27 14 */	lfs f3, lbl_80520A74@sda21(r2)
/* 80448F34 00445E74  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80448F38 00445E78  FC 20 08 1E */	fctiwz f1, f1
/* 80448F3C 00445E7C  D8 21 02 E0 */	stfd f1, 0x2e0(r1)
/* 80448F40 00445E80  80 01 02 E4 */	lwz r0, 0x2e4(r1)
/* 80448F44 00445E84  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80448F48 00445E88  7C 63 02 14 */	add r3, r3, r0
/* 80448F4C 00445E8C  C0 23 00 04 */	lfs f1, 4(r3)
/* 80448F50 00445E90  EC 22 08 28 */	fsubs f1, f2, f1
/* 80448F54 00445E94  EC 23 00 72 */	fmuls f1, f3, f1
/* 80448F58 00445E98  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80448F5C 00445E9C  4C 41 13 82 */	cror 2, 1, 2
/* 80448F60 00445EA0  40 82 00 10 */	bne .L_80448F70
/* 80448F64 00445EA4  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80448F68 00445EA8  EC 00 08 2A */	fadds f0, f0, f1
/* 80448F6C 00445EAC  48 00 00 0C */	b .L_80448F78
.L_80448F70:
/* 80448F70 00445EB0  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80448F74 00445EB4  EC 01 00 28 */	fsubs f0, f1, f0
.L_80448F78:
/* 80448F78 00445EB8  FC 00 00 1E */	fctiwz f0, f0
/* 80448F7C 00445EBC  80 9F 00 58 */	lwz r4, 0x58(r31)
/* 80448F80 00445EC0  38 61 00 10 */	addi r3, r1, 0x10
/* 80448F84 00445EC4  D8 01 02 E8 */	stfd f0, 0x2e8(r1)
/* 80448F88 00445EC8  80 01 02 EC */	lwz r0, 0x2ec(r1)
/* 80448F8C 00445ECC  98 01 00 0F */	stb r0, 0xf(r1)
/* 80448F90 00445ED0  4B BF 15 81 */	bl __ct__10J2DPictureFP10JUTTexture
/* 80448F94 00445ED4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80448F98 00445ED8  38 61 00 10 */	addi r3, r1, 0x10
/* 80448F9C 00445EDC  C0 22 26 40 */	lfs f1, lbl_805209A0@sda21(r2)
/* 80448FA0 00445EE0  38 80 00 00 */	li r4, 0
/* 80448FA4 00445EE4  90 01 00 08 */	stw r0, 8(r1)
/* 80448FA8 00445EE8  38 A0 00 00 */	li r5, 0
/* 80448FAC 00445EEC  C0 42 26 A4 */	lfs f2, lbl_80520A04@sda21(r2)
/* 80448FB0 00445EF0  38 C0 00 00 */	li r6, 0
/* 80448FB4 00445EF4  89 21 00 08 */	lbz r9, 8(r1)
/* 80448FB8 00445EF8  89 01 00 09 */	lbz r8, 9(r1)
/* 80448FBC 00445EFC  88 E1 00 0A */	lbz r7, 0xa(r1)
/* 80448FC0 00445F00  88 01 00 0B */	lbz r0, 0xb(r1)
/* 80448FC4 00445F04  99 21 01 58 */	stb r9, 0x158(r1)
/* 80448FC8 00445F08  C0 62 27 10 */	lfs f3, lbl_80520A70@sda21(r2)
/* 80448FCC 00445F0C  99 01 01 59 */	stb r8, 0x159(r1)
/* 80448FD0 00445F10  C0 82 27 18 */	lfs f4, lbl_80520A78@sda21(r2)
/* 80448FD4 00445F14  98 E1 01 5A */	stb r7, 0x15a(r1)
/* 80448FD8 00445F18  98 01 01 5B */	stb r0, 0x15b(r1)
/* 80448FDC 00445F1C  4B BF 2B D9 */	bl draw__10J2DPictureFffffbbb
/* 80448FE0 00445F20  38 61 00 10 */	addi r3, r1, 0x10
/* 80448FE4 00445F24  38 80 FF FF */	li r4, -1
/* 80448FE8 00445F28  4B BF 1E F9 */	bl __dt__10J2DPictureFv
.L_80448FEC:
/* 80448FEC 00445F2C  38 61 01 78 */	addi r3, r1, 0x178
/* 80448FF0 00445F30  38 80 FF FF */	li r4, -1
/* 80448FF4 00445F34  4B BF 1E ED */	bl __dt__10J2DPictureFv
/* 80448FF8 00445F38  80 01 03 04 */	lwz r0, 0x304(r1)
/* 80448FFC 00445F3C  83 E1 02 FC */	lwz r31, 0x2fc(r1)
/* 80449000 00445F40  7C 08 03 A6 */	mtlr r0
/* 80449004 00445F44  38 21 03 00 */	addi r1, r1, 0x300
/* 80449008 00445F48  4E 80 00 20 */	blr 
.endfn drawEpilepsy__11BootSectionFR8Graphics
.endif

.if version == 0
.fn doUpdate__11BootSectionFv, global
/* 80448FF4 00445F34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80448FF8 00445F38  7C 08 02 A6 */	mflr r0
/* 80448FFC 00445F3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449000 00445F40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449004 00445F44  7C 7F 1B 78 */	mr r31, r3
/* 80449008 00445F48  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044900C 00445F4C  3B C0 00 00 */	li r30, 0
/* 80449010 00445F50  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80449014 00445F54  93 81 00 10 */	stw r28, 0x10(r1)
/* 80449018 00445F58  7F DC F3 78 */	mr r28, r30
/* 8044901C 00445F5C  83 A3 01 00 */	lwz r29, 0x100(r3)
/* 80449020 00445F60  48 00 00 18 */	b .L_80449038
.L_80449024:
/* 80449024 00445F64  80 1D 00 00 */	lwz r0, 0(r29)
/* 80449028 00445F68  7C 60 E2 14 */	add r3, r0, r28
/* 8044902C 00445F6C  4B FF E5 31 */	bl update__10TinyPikminFv
/* 80449030 00445F70  3B 9C 00 34 */	addi r28, r28, 0x34
/* 80449034 00445F74  3B DE 00 01 */	addi r30, r30, 1
.L_80449038:
/* 80449038 00445F78  80 0D 86 88 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 8044903C 00445F7C  7C 1E 00 40 */	cmplw r30, r0
/* 80449040 00445F80  41 80 FF E4 */	blt .L_80449024
/* 80449044 00445F84  80 1F 00 68 */	lwz r0, 0x68(r31)
/* 80449048 00445F88  28 00 00 0A */	cmplwi r0, 0xa
/* 8044904C 00445F8C  41 81 04 0C */	bgt .L_80449458
/* 80449050 00445F90  3C 60 80 4F */	lis r3, lbl_804ED03C@ha
/* 80449054 00445F94  54 00 10 3A */	slwi r0, r0, 2
/* 80449058 00445F98  38 63 CF 7C */	addi r3, r3, lbl_804ED03C@l
/* 8044905C 00445F9C  7C 03 00 2E */	lwzx r0, r3, r0
/* 80449060 00445FA0  7C 09 03 A6 */	mtctr r0
/* 80449064 00445FA4  4E 80 04 20 */	bctr 
.L_80449068:
/* 80449068 00445FA8  7F E3 FB 78 */	mr r3, r31
/* 8044906C 00445FAC  48 00 04 5D */	bl updateLoadResourceFirst__11BootSectionFv
/* 80449070 00445FB0  48 00 03 E8 */	b .L_80449458
.L_80449074:
/* 80449074 00445FB4  7F E3 FB 78 */	mr r3, r31
/* 80449078 00445FB8  48 00 05 75 */	bl updateLoadMemoryCard__11BootSectionFv
/* 8044907C 00445FBC  48 00 03 DC */	b .L_80449458
.L_80449080:
/* 80449080 00445FC0  7F E3 FB 78 */	mr r3, r31
/* 80449084 00445FC4  48 00 06 A5 */	bl updateNintendoLogo__11BootSectionFv
/* 80449088 00445FC8  48 00 03 D0 */	b .L_80449458
.L_8044908C:
/* 8044908C 00445FCC  7F E3 FB 78 */	mr r3, r31
/* 80449090 00445FD0  48 00 09 21 */	bl updateProgressive__11BootSectionFv
/* 80449094 00445FD4  48 00 03 C4 */	b .L_80449458
.L_80449098:
/* 80449098 00445FD8  7F E3 FB 78 */	mr r3, r31
/* 8044909C 00445FDC  48 00 0A 95 */	bl updateWaitProgressive__11BootSectionFv
/* 804490A0 00445FE0  48 00 03 B8 */	b .L_80449458
.L_804490A4:
/* 804490A4 00445FE4  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804490A8 00445FE8  80 63 00 04 */	lwz r3, 4(r3)
/* 804490AC 00445FEC  80 03 00 04 */	lwz r0, 4(r3)
/* 804490B0 00445FF0  2C 00 00 01 */	cmpwi r0, 1
/* 804490B4 00445FF4  41 82 00 14 */	beq .L_804490C8
/* 804490B8 00445FF8  40 80 03 A0 */	bge .L_80449458
/* 804490BC 00445FFC  2C 00 00 00 */	cmpwi r0, 0
/* 804490C0 00446000  40 80 01 04 */	bge .L_804491C4
/* 804490C4 00446004  48 00 03 94 */	b .L_80449458
.L_804490C8:
/* 804490C8 00446008  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804490CC 0044600C  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 804490D0 00446010  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 804490D4 00446014  EC 01 00 2A */	fadds f0, f1, f0
/* 804490D8 00446018  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 804490DC 0044601C  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 804490E0 00446020  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 804490E4 00446024  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 804490E8 00446028  40 82 00 14 */	bne .L_804490FC
/* 804490EC 0044602C  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 804490F0 00446030  C0 02 26 50 */	lfs f0, lbl_805209B0@sda21(r2)
/* 804490F4 00446034  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804490F8 00446038  40 81 00 10 */	ble .L_80449108
.L_804490FC:
/* 804490FC 0044603C  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 80449100 00446040  38 80 00 00 */	li r4, 0
/* 80449104 00446044  48 00 CA 55 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
.L_80449108:
/* 80449108 00446048  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 8044910C 0044604C  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80449110 00446050  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449114 00446054  40 81 03 44 */	ble .L_80449458
/* 80449118 00446058  7F E3 FB 78 */	mr r3, r31
/* 8044911C 0044605C  48 00 0C 35 */	bl waitLoadResource__11BootSectionFv
/* 80449120 00446060  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80449124 00446064  40 82 03 34 */	bne .L_80449458
/* 80449128 00446068  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044912C 0044606C  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449130 00446070  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449134 00446074  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449138 00446078  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044913C 0044607C  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 80449140 00446080  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449144 00446084  4C 41 13 82 */	cror 2, 1, 2
/* 80449148 00446088  40 82 00 0C */	bne .L_80449154
/* 8044914C 0044608C  EC 02 08 2A */	fadds f0, f2, f1
/* 80449150 00446090  48 00 00 08 */	b .L_80449158
.L_80449154:
/* 80449154 00446094  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449158:
/* 80449158 00446098  FC 00 00 1E */	fctiwz f0, f0
/* 8044915C 0044609C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449160 004460A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449164 004460A4  4B F8 4D 9D */	bl fadeout__Q23ebi13TScreenProgreFUl
/* 80449168 004460A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044916C 004460AC  41 82 02 EC */	beq .L_80449458
/* 80449170 004460B0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449174 004460B4  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80449178 004460B8  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 8044917C 004460BC  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80449180 004460C0  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449184 004460C4  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449188 004460C8  80 63 00 04 */	lwz r3, 4(r3)
/* 8044918C 004460CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449190 004460D0  4C 41 13 82 */	cror 2, 1, 2
/* 80449194 004460D4  40 82 00 0C */	bne .L_804491A0
/* 80449198 004460D8  EC 02 08 2A */	fadds f0, f2, f1
/* 8044919C 004460DC  48 00 00 08 */	b .L_804491A4
.L_804491A0:
/* 804491A0 004460E0  EC 01 10 28 */	fsubs f0, f1, f2
.L_804491A4:
/* 804491A4 004460E4  FC 00 00 1E */	fctiwz f0, f0
/* 804491A8 004460E8  81 83 00 00 */	lwz r12, 0(r3)
/* 804491AC 004460EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804491B0 004460F0  D8 01 00 08 */	stfd f0, 8(r1)
/* 804491B4 004460F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804491B8 004460F8  7D 89 03 A6 */	mtctr r12
/* 804491BC 004460FC  4E 80 04 21 */	bctrl 
/* 804491C0 00446100  48 00 02 98 */	b .L_80449458
.L_804491C4:
/* 804491C4 00446104  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 804491C8 00446108  4B F8 4D 8D */	bl isFinish__Q23ebi13TScreenProgreFv
/* 804491CC 0044610C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804491D0 00446110  41 82 02 88 */	beq .L_80449458
/* 804491D4 00446114  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804491D8 00446118  7F E3 FB 78 */	mr r3, r31
/* 804491DC 0044611C  38 80 00 06 */	li r4, 6
/* 804491E0 00446120  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 804491E4 00446124  48 00 0B 9D */	bl setMode__11BootSectionFi
/* 804491E8 00446128  38 60 00 01 */	li r3, 1
/* 804491EC 0044612C  4B C8 8E BD */	bl VISetBlack
/* 804491F0 00446130  4B C8 8D 15 */	bl VIFlush
/* 804491F4 00446134  4B C8 80 21 */	bl VIWaitForRetrace
/* 804491F8 00446138  4B C8 80 1D */	bl VIWaitForRetrace
/* 804491FC 0044613C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449200 00446140  38 80 00 01 */	li r4, 1
/* 80449204 00446144  4B FD A0 B5 */	bl changeRenderMode__6SystemFQ26System11ERenderMode
/* 80449208 00446148  48 00 02 50 */	b .L_80449458
.L_8044920C:
/* 8044920C 0044614C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80449210 00446150  80 63 00 04 */	lwz r3, 4(r3)
/* 80449214 00446154  80 03 00 04 */	lwz r0, 4(r3)
/* 80449218 00446158  2C 00 00 01 */	cmpwi r0, 1
/* 8044921C 0044615C  41 82 00 14 */	beq .L_80449230
/* 80449220 00446160  40 80 02 38 */	bge .L_80449458
/* 80449224 00446164  2C 00 00 00 */	cmpwi r0, 0
/* 80449228 00446168  40 80 01 04 */	bge .L_8044932C
/* 8044922C 0044616C  48 00 02 2C */	b .L_80449458
.L_80449230:
/* 80449230 00446170  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449234 00446174  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80449238 00446178  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8044923C 0044617C  EC 01 00 2A */	fadds f0, f1, f0
/* 80449240 00446180  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80449244 00446184  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 80449248 00446188  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044924C 0044618C  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80449250 00446190  40 82 00 14 */	bne .L_80449264
/* 80449254 00446194  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80449258 00446198  C0 02 26 50 */	lfs f0, lbl_805209B0@sda21(r2)
/* 8044925C 0044619C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449260 004461A0  40 81 00 10 */	ble .L_80449270
.L_80449264:
/* 80449264 004461A4  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 80449268 004461A8  38 80 00 00 */	li r4, 0
/* 8044926C 004461AC  48 00 C8 ED */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
.L_80449270:
/* 80449270 004461B0  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80449274 004461B4  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80449278 004461B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044927C 004461BC  40 81 01 DC */	ble .L_80449458
/* 80449280 004461C0  7F E3 FB 78 */	mr r3, r31
/* 80449284 004461C4  48 00 0A CD */	bl waitLoadResource__11BootSectionFv
/* 80449288 004461C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044928C 004461CC  40 82 01 CC */	bne .L_80449458
/* 80449290 004461D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449294 004461D4  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449298 004461D8  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 8044929C 004461DC  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804492A0 004461E0  EC 22 08 24 */	fdivs f1, f2, f1
/* 804492A4 004461E4  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 804492A8 004461E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804492AC 004461EC  4C 41 13 82 */	cror 2, 1, 2
/* 804492B0 004461F0  40 82 00 0C */	bne .L_804492BC
/* 804492B4 004461F4  EC 02 08 2A */	fadds f0, f2, f1
/* 804492B8 004461F8  48 00 00 08 */	b .L_804492C0
.L_804492BC:
/* 804492BC 004461FC  EC 01 10 28 */	fsubs f0, f1, f2
.L_804492C0:
/* 804492C0 00446200  FC 00 00 1E */	fctiwz f0, f0
/* 804492C4 00446204  D8 01 00 08 */	stfd f0, 8(r1)
/* 804492C8 00446208  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804492CC 0044620C  4B F8 4C 35 */	bl fadeout__Q23ebi13TScreenProgreFUl
/* 804492D0 00446210  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804492D4 00446214  41 82 01 84 */	beq .L_80449458
/* 804492D8 00446218  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804492DC 0044621C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804492E0 00446220  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 804492E4 00446224  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 804492E8 00446228  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804492EC 0044622C  EC 22 08 24 */	fdivs f1, f2, f1
/* 804492F0 00446230  80 63 00 04 */	lwz r3, 4(r3)
/* 804492F4 00446234  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804492F8 00446238  4C 41 13 82 */	cror 2, 1, 2
/* 804492FC 0044623C  40 82 00 0C */	bne .L_80449308
/* 80449300 00446240  EC 02 08 2A */	fadds f0, f2, f1
/* 80449304 00446244  48 00 00 08 */	b .L_8044930C
.L_80449308:
/* 80449308 00446248  EC 01 10 28 */	fsubs f0, f1, f2
.L_8044930C:
/* 8044930C 0044624C  FC 00 00 1E */	fctiwz f0, f0
/* 80449310 00446250  81 83 00 00 */	lwz r12, 0(r3)
/* 80449314 00446254  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80449318 00446258  D8 01 00 08 */	stfd f0, 8(r1)
/* 8044931C 0044625C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449320 00446260  7D 89 03 A6 */	mtctr r12
/* 80449324 00446264  4E 80 04 21 */	bctrl 
/* 80449328 00446268  48 00 01 30 */	b .L_80449458
.L_8044932C:
/* 8044932C 0044626C  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 80449330 00446270  4B F8 4C 25 */	bl isFinish__Q23ebi13TScreenProgreFv
/* 80449334 00446274  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80449338 00446278  41 82 01 20 */	beq .L_80449458
/* 8044933C 0044627C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449340 00446280  7F E3 FB 78 */	mr r3, r31
/* 80449344 00446284  38 80 00 09 */	li r4, 9
/* 80449348 00446288  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 8044934C 0044628C  48 00 0A 35 */	bl setMode__11BootSectionFi
/* 80449350 00446290  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449354 00446294  38 80 00 00 */	li r4, 0
/* 80449358 00446298  4B FD 9F 61 */	bl changeRenderMode__6SystemFQ26System11ERenderMode
/* 8044935C 0044629C  48 00 00 FC */	b .L_80449458
.L_80449360:
/* 80449360 004462A0  7F E3 FB 78 */	mr r3, r31
/* 80449364 004462A4  38 80 00 04 */	li r4, 4
/* 80449368 004462A8  48 00 0A 19 */	bl setMode__11BootSectionFi
/* 8044936C 004462AC  38 80 00 00 */	li r4, 0
/* 80449370 004462B0  80 BF 01 00 */	lwz r5, 0x100(r31)
/* 80449374 004462B4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449378 004462B8  7C 87 23 78 */	mr r7, r4
/* 8044937C 004462BC  38 60 00 01 */	li r3, 1
/* 80449380 004462C0  48 00 00 28 */	b .L_804493A8
.L_80449384:
/* 80449384 004462C4  80 05 00 00 */	lwz r0, 0(r5)
/* 80449388 004462C8  7C C0 3A 14 */	add r6, r0, r7
/* 8044938C 004462CC  80 06 00 00 */	lwz r0, 0(r6)
/* 80449390 004462D0  2C 00 00 01 */	cmpwi r0, 1
/* 80449394 004462D4  41 82 00 0C */	beq .L_804493A0
/* 80449398 004462D8  D0 06 00 20 */	stfs f0, 0x20(r6)
/* 8044939C 004462DC  90 66 00 00 */	stw r3, 0(r6)
.L_804493A0:
/* 804493A0 004462E0  38 E7 00 34 */	addi r7, r7, 0x34
/* 804493A4 004462E4  38 84 00 01 */	addi r4, r4, 1
.L_804493A8:
/* 804493A8 004462E8  80 0D 86 88 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 804493AC 004462EC  7C 04 00 40 */	cmplw r4, r0
/* 804493B0 004462F0  41 80 FF D4 */	blt .L_80449384
/* 804493B4 004462F4  48 00 00 A4 */	b .L_80449458
.L_804493B8:
/* 804493B8 004462F8  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804493BC 004462FC  80 63 00 04 */	lwz r3, 4(r3)
/* 804493C0 00446300  80 03 00 04 */	lwz r0, 4(r3)
/* 804493C4 00446304  2C 00 00 01 */	cmpwi r0, 1
/* 804493C8 00446308  41 82 00 4C */	beq .L_80449414
/* 804493CC 0044630C  40 80 00 8C */	bge .L_80449458
/* 804493D0 00446310  2C 00 00 00 */	cmpwi r0, 0
/* 804493D4 00446314  40 80 00 08 */	bge .L_804493DC
/* 804493D8 00446318  48 00 00 80 */	b .L_80449458
.L_804493DC:
/* 804493DC 0044631C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804493E0 00446320  81 83 00 00 */	lwz r12, 0(r3)
/* 804493E4 00446324  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 804493E8 00446328  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 804493EC 0044632C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 804493F0 00446330  EC 01 00 24 */	fdivs f0, f1, f0
/* 804493F4 00446334  FC 00 00 1E */	fctiwz f0, f0
/* 804493F8 00446338  D8 01 00 08 */	stfd f0, 8(r1)
/* 804493FC 0044633C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449400 00446340  7D 89 03 A6 */	mtctr r12
/* 80449404 00446344  4E 80 04 21 */	bctrl 
/* 80449408 00446348  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 8044940C 0044634C  D0 1F 00 70 */	stfs f0, 0x70(r31)
/* 80449410 00446350  48 00 00 48 */	b .L_80449458
.L_80449414:
/* 80449414 00446354  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449418 00446358  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 8044941C 0044635C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449420 00446360  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80449424 00446364  EC 22 08 2A */	fadds f1, f2, f1
/* 80449428 00446368  D0 3F 00 70 */	stfs f1, 0x70(r31)
/* 8044942C 0044636C  C0 3F 00 70 */	lfs f1, 0x70(r31)
/* 80449430 00446370  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449434 00446374  40 81 00 24 */	ble .L_80449458
/* 80449438 00446378  7F E3 FB 78 */	mr r3, r31
/* 8044943C 0044637C  38 80 00 0A */	li r4, 0xa
/* 80449440 00446380  48 00 09 41 */	bl setMode__11BootSectionFi
/* 80449444 00446384  48 00 00 14 */	b .L_80449458
.L_80449448:
/* 80449448 00446388  38 00 00 00 */	li r0, 0
/* 8044944C 0044638C  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80449450 00446390  98 1F 00 34 */	stb r0, 0x34(r31)
/* 80449454 00446394  D0 1F 00 30 */	stfs f0, 0x30(r31)
.L_80449458:
/* 80449458 00446398  88 1F 00 FC */	lbz r0, 0xfc(r31)
/* 8044945C 0044639C  28 00 00 00 */	cmplwi r0, 0
/* 80449460 004463A0  41 82 00 3C */	beq .L_8044949C
/* 80449464 004463A4  80 7F 00 F8 */	lwz r3, 0xf8(r31)
/* 80449468 004463A8  28 03 00 00 */	cmplwi r3, 0
/* 8044946C 004463AC  41 82 00 08 */	beq .L_80449474
/* 80449470 004463B0  4B F8 4B CD */	bl update__Q23ebi13TScreenProgreFv
.L_80449474:
/* 80449474 004463B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449478 004463B8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8044947C 004463BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80449480 004463C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80449484 004463C4  7D 89 03 A6 */	mtctr r12
/* 80449488 004463C8  4E 80 04 21 */	bctrl 
/* 8044948C 004463CC  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80449490 004463D0  28 03 00 00 */	cmplwi r3, 0
/* 80449494 004463D4  41 82 00 08 */	beq .L_8044949C
/* 80449498 004463D8  4B F7 01 7D */	bl update__14TParticle2dMgrFv
.L_8044949C:
/* 8044949C 004463DC  7F E3 FB 78 */	mr r3, r31
/* 804494A0 004463E0  4B D1 BA E9 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 804494A4 004463E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804494A8 004463E8  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 804494AC 004463EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804494B0 004463F0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804494B4 004463F4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804494B8 004463F8  83 81 00 10 */	lwz r28, 0x10(r1)
/* 804494BC 004463FC  7C 08 03 A6 */	mtlr r0
/* 804494C0 00446400  38 21 00 20 */	addi r1, r1, 0x20
/* 804494C4 00446404  4E 80 00 20 */	blr 
.endfn doUpdate__11BootSectionFv
.else
.fn doUpdate__11BootSectionFv, global
/* 8044900C 00445F4C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80449010 00445F50  7C 08 02 A6 */	mflr r0
/* 80449014 00445F54  90 01 00 34 */	stw r0, 0x34(r1)
/* 80449018 00445F58  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8044901C 00445F5C  7C 7F 1B 78 */	mr r31, r3
/* 80449020 00445F60  3C 60 80 4A */	lis r3, lbl_8049AF08@ha
/* 80449024 00445F64  3B A0 00 00 */	li r29, 0
/* 80449028 00445F68  7F BB EB 78 */	mr r27, r29
/* 8044902C 00445F6C  3B C3 AF 08 */	addi r30, r3, lbl_8049AF08@l
/* 80449030 00445F70  83 9F 00 E0 */	lwz r28, 0xe0(r31)
/* 80449034 00445F74  48 00 00 18 */	b .L_8044904C
.L_80449038:
/* 80449038 00445F78  80 1C 00 00 */	lwz r0, 0(r28)
/* 8044903C 00445F7C  7C 60 DA 14 */	add r3, r0, r27
/* 80449040 00445F80  4B FF E3 AD */	bl update__10TinyPikminFv
/* 80449044 00445F84  3B 7B 00 34 */	addi r27, r27, 0x34
/* 80449048 00445F88  3B BD 00 01 */	addi r29, r29, 1
.L_8044904C:
/* 8044904C 00445F8C  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80449050 00445F90  7C 1D 00 40 */	cmplw r29, r0
/* 80449054 00445F94  41 80 FF E4 */	blt .L_80449038
/* 80449058 00445F98  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 8044905C 00445F9C  28 00 00 0A */	cmplwi r0, 0xa
/* 80449060 00445FA0  41 81 05 DC */	bgt .L_8044963C
/* 80449064 00445FA4  3C 60 80 4F */	lis r3, lbl_804ED03C@ha
/* 80449068 00445FA8  54 00 10 3A */	slwi r0, r0, 2
/* 8044906C 00445FAC  38 63 D0 3C */	addi r3, r3, lbl_804ED03C@l
/* 80449070 00445FB0  7C 03 00 2E */	lwzx r0, r3, r0
/* 80449074 00445FB4  7C 09 03 A6 */	mtctr r0
/* 80449078 00445FB8  4E 80 04 20 */	bctr 
.L_8044907C:
/* 8044907C 00445FBC  7F E3 FB 78 */	mr r3, r31
/* 80449080 00445FC0  48 00 06 21 */	bl updateLoadResourceFirst__11BootSectionFv
/* 80449084 00445FC4  48 00 05 B8 */	b .L_8044963C
.L_80449088:
/* 80449088 00445FC8  7F E3 FB 78 */	mr r3, r31
/* 8044908C 00445FCC  48 00 06 B1 */	bl updateLoadMemoryCard__11BootSectionFv
/* 80449090 00445FD0  48 00 05 AC */	b .L_8044963C
.L_80449094:
/* 80449094 00445FD4  7F E3 FB 78 */	mr r3, r31
/* 80449098 00445FD8  48 00 07 E1 */	bl updateNintendoLogo__11BootSectionFv
/* 8044909C 00445FDC  48 00 05 A0 */	b .L_8044963C
.L_804490A0:
/* 804490A0 00445FE0  7F E3 FB 78 */	mr r3, r31
/* 804490A4 00445FE4  48 00 0A 5D */	bl updateProgressive__11BootSectionFv
/* 804490A8 00445FE8  48 00 05 94 */	b .L_8044963C
.L_804490AC:
/* 804490AC 00445FEC  7F E3 FB 78 */	mr r3, r31
/* 804490B0 00445FF0  48 00 0B D1 */	bl updateWaitProgressive__11BootSectionFv
/* 804490B4 00445FF4  48 00 05 88 */	b .L_8044963C
.L_804490B8:
/* 804490B8 00445FF8  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804490BC 00445FFC  80 63 00 04 */	lwz r3, 4(r3)
/* 804490C0 00446000  80 03 00 04 */	lwz r0, 4(r3)
/* 804490C4 00446004  2C 00 00 01 */	cmpwi r0, 1
/* 804490C8 00446008  41 82 00 14 */	beq .L_804490DC
/* 804490CC 0044600C  40 80 05 70 */	bge .L_8044963C
/* 804490D0 00446010  2C 00 00 00 */	cmpwi r0, 0
/* 804490D4 00446014  40 80 01 04 */	bge .L_804491D8
/* 804490D8 00446018  48 00 05 64 */	b .L_8044963C
.L_804490DC:
/* 804490DC 0044601C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804490E0 00446020  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 804490E4 00446024  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 804490E8 00446028  EC 01 00 2A */	fadds f0, f1, f0
/* 804490EC 0044602C  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 804490F0 00446030  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 804490F4 00446034  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 804490F8 00446038  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 804490FC 0044603C  40 82 00 14 */	bne .L_80449110
/* 80449100 00446040  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80449104 00446044  C0 02 26 50 */	lfs f0, lbl_805209B0@sda21(r2)
/* 80449108 00446048  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044910C 0044604C  40 81 00 10 */	ble .L_8044911C
.L_80449110:
/* 80449110 00446050  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 80449114 00446054  38 80 00 00 */	li r4, 0
/* 80449118 00446058  48 00 CB 91 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
.L_8044911C:
/* 8044911C 0044605C  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80449120 00446060  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80449124 00446064  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449128 00446068  40 81 05 14 */	ble .L_8044963C
/* 8044912C 0044606C  7F E3 FB 78 */	mr r3, r31
/* 80449130 00446070  48 00 0D 71 */	bl waitLoadResource__11BootSectionFv
/* 80449134 00446074  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80449138 00446078  40 82 05 04 */	bne .L_8044963C
/* 8044913C 0044607C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449140 00446080  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449144 00446084  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449148 00446088  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 8044914C 0044608C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449150 00446090  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449154 00446094  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449158 00446098  4C 41 13 82 */	cror 2, 1, 2
/* 8044915C 0044609C  40 82 00 0C */	bne .L_80449168
/* 80449160 004460A0  EC 02 08 2A */	fadds f0, f2, f1
/* 80449164 004460A4  48 00 00 08 */	b .L_8044916C
.L_80449168:
/* 80449168 004460A8  EC 01 10 28 */	fsubs f0, f1, f2
.L_8044916C:
/* 8044916C 004460AC  FC 00 00 1E */	fctiwz f0, f0
/* 80449170 004460B0  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449174 004460B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449178 004460B8  4B F8 4D 0D */	bl fadeout__Q23ebi13TScreenProgreFUl
/* 8044917C 004460BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80449180 004460C0  41 82 04 BC */	beq .L_8044963C
/* 80449184 004460C4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449188 004460C8  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8044918C 004460CC  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449190 004460D0  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80449194 004460D4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449198 004460D8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044919C 004460DC  80 63 00 04 */	lwz r3, 4(r3)
/* 804491A0 004460E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804491A4 004460E4  4C 41 13 82 */	cror 2, 1, 2
/* 804491A8 004460E8  40 82 00 0C */	bne .L_804491B4
/* 804491AC 004460EC  EC 02 08 2A */	fadds f0, f2, f1
/* 804491B0 004460F0  48 00 00 08 */	b .L_804491B8
.L_804491B4:
/* 804491B4 004460F4  EC 01 10 28 */	fsubs f0, f1, f2
.L_804491B8:
/* 804491B8 004460F8  FC 00 00 1E */	fctiwz f0, f0
/* 804491BC 004460FC  81 83 00 00 */	lwz r12, 0(r3)
/* 804491C0 00446100  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804491C4 00446104  D8 01 00 08 */	stfd f0, 8(r1)
/* 804491C8 00446108  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804491CC 0044610C  7D 89 03 A6 */	mtctr r12
/* 804491D0 00446110  4E 80 04 21 */	bctrl 
/* 804491D4 00446114  48 00 04 68 */	b .L_8044963C
.L_804491D8:
/* 804491D8 00446118  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 804491DC 0044611C  4B F8 4C FD */	bl isFinish__Q23ebi13TScreenProgreFv
/* 804491E0 00446120  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804491E4 00446124  41 82 04 58 */	beq .L_8044963C
/* 804491E8 00446128  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804491EC 0044612C  7F E3 FB 78 */	mr r3, r31
/* 804491F0 00446130  38 80 00 06 */	li r4, 6
/* 804491F4 00446134  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 804491F8 00446138  48 00 0C D9 */	bl setMode__11BootSectionFi
/* 804491FC 0044613C  38 60 00 01 */	li r3, 1
/* 80449200 00446140  4B C8 8E C9 */	bl VISetBlack
/* 80449204 00446144  4B C8 8D 21 */	bl VIFlush
/* 80449208 00446148  4B C8 80 2D */	bl VIWaitForRetrace
/* 8044920C 0044614C  4B C8 80 29 */	bl VIWaitForRetrace
/* 80449210 00446150  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449214 00446154  38 80 00 01 */	li r4, 1
/* 80449218 00446158  4B FD A0 25 */	bl changeRenderMode__6SystemFQ26System11ERenderMode
/* 8044921C 0044615C  48 00 04 20 */	b .L_8044963C
.L_80449220:
/* 80449220 00446160  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80449224 00446164  80 63 00 04 */	lwz r3, 4(r3)
/* 80449228 00446168  80 03 00 04 */	lwz r0, 4(r3)
/* 8044922C 0044616C  2C 00 00 01 */	cmpwi r0, 1
/* 80449230 00446170  41 82 00 14 */	beq .L_80449244
/* 80449234 00446174  40 80 04 08 */	bge .L_8044963C
/* 80449238 00446178  2C 00 00 00 */	cmpwi r0, 0
/* 8044923C 0044617C  40 80 01 04 */	bge .L_80449340
/* 80449240 00446180  48 00 03 FC */	b .L_8044963C
.L_80449244:
/* 80449244 00446184  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449248 00446188  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8044924C 0044618C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449250 00446190  EC 01 00 2A */	fadds f0, f1, f0
/* 80449254 00446194  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80449258 00446198  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 8044925C 0044619C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80449260 004461A0  54 00 05 EF */	rlwinm. r0, r0, 0, 0x17, 0x17
/* 80449264 004461A4  40 82 00 14 */	bne .L_80449278
/* 80449268 004461A8  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8044926C 004461AC  C0 02 26 50 */	lfs f0, lbl_805209B0@sda21(r2)
/* 80449270 004461B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449274 004461B4  40 81 00 10 */	ble .L_80449284
.L_80449278:
/* 80449278 004461B8  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 8044927C 004461BC  38 80 00 00 */	li r4, 0
/* 80449280 004461C0  48 00 CA 29 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
.L_80449284:
/* 80449284 004461C4  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80449288 004461C8  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 8044928C 004461CC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449290 004461D0  40 81 03 AC */	ble .L_8044963C
/* 80449294 004461D4  7F E3 FB 78 */	mr r3, r31
/* 80449298 004461D8  48 00 0C 09 */	bl waitLoadResource__11BootSectionFv
/* 8044929C 004461DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804492A0 004461E0  40 82 03 9C */	bne .L_8044963C
/* 804492A4 004461E4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804492A8 004461E8  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 804492AC 004461EC  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 804492B0 004461F0  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804492B4 004461F4  EC 22 08 24 */	fdivs f1, f2, f1
/* 804492B8 004461F8  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 804492BC 004461FC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804492C0 00446200  4C 41 13 82 */	cror 2, 1, 2
/* 804492C4 00446204  40 82 00 0C */	bne .L_804492D0
/* 804492C8 00446208  EC 02 08 2A */	fadds f0, f2, f1
/* 804492CC 0044620C  48 00 00 08 */	b .L_804492D4
.L_804492D0:
/* 804492D0 00446210  EC 01 10 28 */	fsubs f0, f1, f2
.L_804492D4:
/* 804492D4 00446214  FC 00 00 1E */	fctiwz f0, f0
/* 804492D8 00446218  D8 01 00 08 */	stfd f0, 8(r1)
/* 804492DC 0044621C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804492E0 00446220  4B F8 4B A5 */	bl fadeout__Q23ebi13TScreenProgreFUl
/* 804492E4 00446224  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804492E8 00446228  41 82 03 54 */	beq .L_8044963C
/* 804492EC 0044622C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804492F0 00446230  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804492F4 00446234  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 804492F8 00446238  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 804492FC 0044623C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449300 00446240  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449304 00446244  80 63 00 04 */	lwz r3, 4(r3)
/* 80449308 00446248  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044930C 0044624C  4C 41 13 82 */	cror 2, 1, 2
/* 80449310 00446250  40 82 00 0C */	bne .L_8044931C
/* 80449314 00446254  EC 02 08 2A */	fadds f0, f2, f1
/* 80449318 00446258  48 00 00 08 */	b .L_80449320
.L_8044931C:
/* 8044931C 0044625C  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449320:
/* 80449320 00446260  FC 00 00 1E */	fctiwz f0, f0
/* 80449324 00446264  81 83 00 00 */	lwz r12, 0(r3)
/* 80449328 00446268  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8044932C 0044626C  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449330 00446270  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449334 00446274  7D 89 03 A6 */	mtctr r12
/* 80449338 00446278  4E 80 04 21 */	bctrl 
/* 8044933C 0044627C  48 00 03 00 */	b .L_8044963C
.L_80449340:
/* 80449340 00446280  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449344 00446284  4B F8 4B 95 */	bl isFinish__Q23ebi13TScreenProgreFv
/* 80449348 00446288  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044934C 0044628C  41 82 02 F0 */	beq .L_8044963C
/* 80449350 00446290  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449354 00446294  7F E3 FB 78 */	mr r3, r31
/* 80449358 00446298  38 80 00 09 */	li r4, 9
/* 8044935C 0044629C  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80449360 004462A0  48 00 0B 71 */	bl setMode__11BootSectionFi
/* 80449364 004462A4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449368 004462A8  38 80 00 00 */	li r4, 0
/* 8044936C 004462AC  4B FD 9E D1 */	bl changeRenderMode__6SystemFQ26System11ERenderMode
/* 80449370 004462B0  48 00 02 CC */	b .L_8044963C
.L_80449374:
/* 80449374 004462B4  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 80449378 004462B8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8044937C 004462BC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80449380 004462C0  41 82 00 18 */	beq .L_80449398
/* 80449384 004462C4  4B C8 90 09 */	bl VIGetDTVStatus
/* 80449388 004462C8  28 03 00 01 */	cmplwi r3, 1
/* 8044938C 004462CC  40 82 00 0C */	bne .L_80449398
/* 80449390 004462D0  38 00 00 01 */	li r0, 1
/* 80449394 004462D4  98 1F 00 DD */	stb r0, 0xdd(r31)
.L_80449398:
/* 80449398 004462D8  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 8044939C 004462DC  80 63 00 04 */	lwz r3, 4(r3)
/* 804493A0 004462E0  80 03 00 04 */	lwz r0, 4(r3)
/* 804493A4 004462E4  2C 00 00 01 */	cmpwi r0, 1
/* 804493A8 004462E8  41 82 00 4C */	beq .L_804493F4
/* 804493AC 004462EC  40 80 02 90 */	bge .L_8044963C
/* 804493B0 004462F0  2C 00 00 00 */	cmpwi r0, 0
/* 804493B4 004462F4  40 80 00 08 */	bge .L_804493BC
/* 804493B8 004462F8  48 00 02 84 */	b .L_8044963C
.L_804493BC:
/* 804493BC 004462FC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804493C0 00446300  81 83 00 00 */	lwz r12, 0(r3)
/* 804493C4 00446304  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 804493C8 00446308  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 804493CC 0044630C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 804493D0 00446310  EC 01 00 24 */	fdivs f0, f1, f0
/* 804493D4 00446314  FC 00 00 1E */	fctiwz f0, f0
/* 804493D8 00446318  D8 01 00 08 */	stfd f0, 8(r1)
/* 804493DC 0044631C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804493E0 00446320  7D 89 03 A6 */	mtctr r12
/* 804493E4 00446324  4E 80 04 21 */	bctrl 
/* 804493E8 00446328  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804493EC 0044632C  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 804493F0 00446330  48 00 02 4C */	b .L_8044963C
.L_804493F4:
/* 804493F4 00446334  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804493F8 00446338  38 80 00 00 */	li r4, 0
/* 804493FC 0044633C  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80449400 00446340  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449404 00446344  EC 01 00 2A */	fadds f0, f1, f0
/* 80449408 00446348  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8044940C 0044634C  80 7F 00 D4 */	lwz r3, 0xd4(r31)
/* 80449410 00446350  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80449414 00446354  54 00 00 3F */	rotlwi. r0, r0, 0
/* 80449418 00446358  41 82 00 2C */	beq .L_80449444
/* 8044941C 0044635C  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80449420 00446360  C0 02 26 58 */	lfs f0, lbl_805209B8@sda21(r2)
/* 80449424 00446364  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449428 00446368  40 81 00 1C */	ble .L_80449444
/* 8044942C 0044636C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 80449430 00446370  38 80 18 00 */	li r4, 0x1800
/* 80449434 00446374  38 A0 00 00 */	li r5, 0
/* 80449438 00446378  4B EE F1 F9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8044943C 0044637C  38 80 00 01 */	li r4, 1
/* 80449440 00446380  48 00 00 18 */	b .L_80449458
.L_80449444:
/* 80449444 00446384  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80449448 00446388  C0 02 27 1C */	lfs f0, zz_80520A7C@sda21(r2)
/* 8044944C 0044638C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449450 00446390  40 81 00 08 */	ble .L_80449458
/* 80449454 00446394  38 80 00 01 */	li r4, 1
.L_80449458:
/* 80449458 00446398  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8044945C 0044639C  41 82 01 E0 */	beq .L_8044963C
/* 80449460 004463A0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449464 004463A4  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80449468 004463A8  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 8044946C 004463AC  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80449470 004463B0  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449474 004463B4  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449478 004463B8  80 63 00 04 */	lwz r3, 4(r3)
/* 8044947C 004463BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449480 004463C0  4C 41 13 82 */	cror 2, 1, 2
/* 80449484 004463C4  40 82 00 0C */	bne .L_80449490
/* 80449488 004463C8  EC 02 08 2A */	fadds f0, f2, f1
/* 8044948C 004463CC  48 00 00 08 */	b .L_80449494
.L_80449490:
/* 80449490 004463D0  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449494:
/* 80449494 004463D4  FC 00 00 1E */	fctiwz f0, f0
/* 80449498 004463D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8044949C 004463DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 804494A0 004463E0  D8 01 00 08 */	stfd f0, 8(r1)
/* 804494A4 004463E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804494A8 004463E8  7D 89 03 A6 */	mtctr r12
/* 804494AC 004463EC  4E 80 04 21 */	bctrl 
/* 804494B0 004463F0  7F E3 FB 78 */	mr r3, r31
/* 804494B4 004463F4  38 80 00 03 */	li r4, 3
/* 804494B8 004463F8  48 00 0A 19 */	bl setMode__11BootSectionFi
/* 804494BC 004463FC  48 00 01 80 */	b .L_8044963C
.L_804494C0:
/* 804494C0 00446400  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804494C4 00446404  80 63 00 04 */	lwz r3, 4(r3)
/* 804494C8 00446408  80 03 00 04 */	lwz r0, 4(r3)
/* 804494CC 0044640C  2C 00 00 00 */	cmpwi r0, 0
/* 804494D0 00446410  40 82 01 6C */	bne .L_8044963C
/* 804494D4 00446414  7F E3 FB 78 */	mr r3, r31
/* 804494D8 00446418  38 80 00 04 */	li r4, 4
/* 804494DC 0044641C  48 00 09 F5 */	bl setMode__11BootSectionFi
/* 804494E0 00446420  38 80 00 00 */	li r4, 0
/* 804494E4 00446424  80 BF 00 E0 */	lwz r5, 0xe0(r31)
/* 804494E8 00446428  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804494EC 0044642C  7C 87 23 78 */	mr r7, r4
/* 804494F0 00446430  38 60 00 01 */	li r3, 1
/* 804494F4 00446434  48 00 00 28 */	b .L_8044951C
.L_804494F8:
/* 804494F8 00446438  80 05 00 00 */	lwz r0, 0(r5)
/* 804494FC 0044643C  7C C0 3A 14 */	add r6, r0, r7
/* 80449500 00446440  80 06 00 00 */	lwz r0, 0(r6)
/* 80449504 00446444  2C 00 00 01 */	cmpwi r0, 1
/* 80449508 00446448  41 82 00 0C */	beq .L_80449514
/* 8044950C 0044644C  D0 06 00 20 */	stfs f0, 0x20(r6)
/* 80449510 00446450  90 66 00 00 */	stw r3, 0(r6)
.L_80449514:
/* 80449514 00446454  38 E7 00 34 */	addi r7, r7, 0x34
/* 80449518 00446458  38 84 00 01 */	addi r4, r4, 1
.L_8044951C:
/* 8044951C 0044645C  80 0D 86 90 */	lwz r0, sTinyPikminNum__13TinyPikminMgr@sda21(r13)
/* 80449520 00446460  7C 04 00 40 */	cmplw r4, r0
/* 80449524 00446464  41 80 FF D4 */	blt .L_804494F8
/* 80449528 00446468  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044952C 0044646C  28 00 00 00 */	cmplwi r0, 0
/* 80449530 00446470  40 82 00 18 */	bne .L_80449548
/* 80449534 00446474  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 80449538 00446478  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8044953C 0044647C  38 80 01 D3 */	li r4, 0x1d3
/* 80449540 00446480  4C C6 31 82 */	crclr 6
/* 80449544 00446484  4B BE 10 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80449548:
/* 80449548 00446488  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044954C 0044648C  28 1C 00 00 */	cmplwi r28, 0
/* 80449550 00446490  40 82 00 18 */	bne .L_80449568
/* 80449554 00446494  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 80449558 00446498  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8044955C 0044649C  38 80 01 DC */	li r4, 0x1dc
/* 80449560 004464A0  4C C6 31 82 */	crclr 6
/* 80449564 004464A4  4B BE 10 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80449568:
/* 80449568 004464A8  83 7C 00 04 */	lwz r27, 4(r28)
/* 8044956C 004464AC  28 1B 00 00 */	cmplwi r27, 0
/* 80449570 004464B0  40 82 00 18 */	bne .L_80449588
/* 80449574 004464B4  38 7E 00 0C */	addi r3, r30, 0xc
/* 80449578 004464B8  38 BE 00 1C */	addi r5, r30, 0x1c
/* 8044957C 004464BC  38 80 06 66 */	li r4, 0x666
/* 80449580 004464C0  4C C6 31 82 */	crclr 6
/* 80449584 004464C4  4B BE 10 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80449588:
/* 80449588 004464C8  3C 80 C0 01 */	lis r4, 0xC001101F@ha
/* 8044958C 004464CC  7F 63 DB 78 */	mr r3, r27
/* 80449590 004464D0  38 84 10 1F */	addi r4, r4, 0xC001101F@l
/* 80449594 004464D4  48 01 E4 1D */	bl startGlobalStream__Q23PSM12Scene_GlobalFUl
/* 80449598 004464D8  48 00 00 A4 */	b .L_8044963C
.L_8044959C:
/* 8044959C 004464DC  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 804495A0 004464E0  80 63 00 04 */	lwz r3, 4(r3)
/* 804495A4 004464E4  80 03 00 04 */	lwz r0, 4(r3)
/* 804495A8 004464E8  2C 00 00 01 */	cmpwi r0, 1
/* 804495AC 004464EC  41 82 00 4C */	beq .L_804495F8
/* 804495B0 004464F0  40 80 00 8C */	bge .L_8044963C
/* 804495B4 004464F4  2C 00 00 00 */	cmpwi r0, 0
/* 804495B8 004464F8  40 80 00 08 */	bge .L_804495C0
/* 804495BC 004464FC  48 00 00 80 */	b .L_8044963C
.L_804495C0:
/* 804495C0 00446500  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804495C4 00446504  81 83 00 00 */	lwz r12, 0(r3)
/* 804495C8 00446508  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 804495CC 0044650C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 804495D0 00446510  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 804495D4 00446514  EC 01 00 24 */	fdivs f0, f1, f0
/* 804495D8 00446518  FC 00 00 1E */	fctiwz f0, f0
/* 804495DC 0044651C  D8 01 00 08 */	stfd f0, 8(r1)
/* 804495E0 00446520  80 81 00 0C */	lwz r4, 0xc(r1)
/* 804495E4 00446524  7D 89 03 A6 */	mtctr r12
/* 804495E8 00446528  4E 80 04 21 */	bctrl 
/* 804495EC 0044652C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 804495F0 00446530  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 804495F4 00446534  48 00 00 48 */	b .L_8044963C
.L_804495F8:
/* 804495F8 00446538  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804495FC 0044653C  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 80449600 00446540  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449604 00446544  C0 02 26 44 */	lfs f0, lbl_805209A4@sda21(r2)
/* 80449608 00446548  EC 22 08 2A */	fadds f1, f2, f1
/* 8044960C 0044654C  D0 3F 00 50 */	stfs f1, 0x50(r31)
/* 80449610 00446550  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80449614 00446554  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449618 00446558  40 81 00 24 */	ble .L_8044963C
/* 8044961C 0044655C  7F E3 FB 78 */	mr r3, r31
/* 80449620 00446560  38 80 00 0A */	li r4, 0xa
/* 80449624 00446564  48 00 08 AD */	bl setMode__11BootSectionFi
/* 80449628 00446568  48 00 00 14 */	b .L_8044963C
.L_8044962C:
/* 8044962C 0044656C  38 00 00 00 */	li r0, 0
/* 80449630 00446570  C0 02 26 98 */	lfs f0, lbl_805209F8@sda21(r2)
/* 80449634 00446574  98 1F 00 34 */	stb r0, 0x34(r31)
/* 80449638 00446578  D0 1F 00 30 */	stfs f0, 0x30(r31)
.L_8044963C:
/* 8044963C 0044657C  88 1F 00 DC */	lbz r0, 0xdc(r31)
/* 80449640 00446580  28 00 00 00 */	cmplwi r0, 0
/* 80449644 00446584  41 82 00 3C */	beq .L_80449680
/* 80449648 00446588  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 8044964C 0044658C  28 03 00 00 */	cmplwi r3, 0
/* 80449650 00446590  41 82 00 08 */	beq .L_80449658
/* 80449654 00446594  4B F8 49 6D */	bl update__Q23ebi13TScreenProgreFv
.L_80449658:
/* 80449658 00446598  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044965C 0044659C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80449660 004465A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80449664 004465A4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80449668 004465A8  7D 89 03 A6 */	mtctr r12
/* 8044966C 004465AC  4E 80 04 21 */	bctrl 
/* 80449670 004465B0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80449674 004465B4  28 03 00 00 */	cmplwi r3, 0
/* 80449678 004465B8  41 82 00 08 */	beq .L_80449680
/* 8044967C 004465BC  4B F6 FF 35 */	bl update__14TParticle2dMgrFv
.L_80449680:
/* 80449680 004465C0  7F E3 FB 78 */	mr r3, r31
/* 80449684 004465C4  4B D1 B9 25 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 80449688 004465C8  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 8044968C 004465CC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 80449690 004465D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80449694 004465D4  7C 08 03 A6 */	mtlr r0
/* 80449698 004465D8  38 21 00 30 */	addi r1, r1, 0x30
/* 8044969C 004465DC  4E 80 00 20 */	blr 
.endfn doUpdate__11BootSectionFv
.endif

.if version == 0
.fn updateLoadResourceFirst__11BootSectionFv, global
/* 804494C8 00446408  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804494CC 0044640C  7C 08 02 A6 */	mflr r0
/* 804494D0 00446410  3C A0 80 4A */	lis r5, lbl_8049AF08@ha
/* 804494D4 00446414  90 01 00 24 */	stw r0, 0x24(r1)
/* 804494D8 00446418  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804494DC 0044641C  3B E5 AD A8 */	addi r31, r5, lbl_8049AF08@l
/* 804494E0 00446420  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804494E4 00446424  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804494E8 00446428  7C 7D 1B 78 */	mr r29, r3
/* 804494EC 0044642C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804494F0 00446430  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 804494F4 00446434  81 83 00 00 */	lwz r12, 0(r3)
/* 804494F8 00446438  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 804494FC 0044643C  7D 89 03 A6 */	mtctr r12
/* 80449500 00446440  4E 80 04 21 */	bctrl 
/* 80449504 00446444  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449508 00446448  4B FD A1 A9 */	bl dvdLoadSyncAllNoBlock__6SystemFv
/* 8044950C 0044644C  2C 03 00 00 */	cmpwi r3, 0
/* 80449510 00446450  40 82 00 C0 */	bne .L_804495D0
/* 80449514 00446454  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 80449518 00446458  38 63 41 3C */	addi r3, r3, gGameConfig__4Game@l
/* 8044951C 0044645C  80 03 02 38 */	lwz r0, 0x238(r3)
/* 80449520 00446460  2C 00 00 00 */	cmpwi r0, 0
/* 80449524 00446464  41 82 00 18 */	beq .L_8044953C
/* 80449528 00446468  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044952C 0044646C  38 00 00 00 */	li r0, 0
/* 80449530 00446470  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80449534 00446474  98 03 00 3B */	stb r0, 0x3b(r3)
/* 80449538 00446478  48 00 00 1C */	b .L_80449554
.L_8044953C:
/* 8044953C 0044647C  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 80449540 00446480  2C 00 00 00 */	cmpwi r0, 0
/* 80449544 00446484  40 82 00 10 */	bne .L_80449554
/* 80449548 00446488  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044954C 0044648C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80449550 00446490  4B FF 9B BD */	bl loadGameOption__Q34Game10MemoryCard3MgrFv
.L_80449554:
/* 80449554 00446494  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80449558 00446498  28 00 00 00 */	cmplwi r0, 0
/* 8044955C 0044649C  40 82 00 18 */	bne .L_80449574
/* 80449560 004464A0  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 80449564 004464A4  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80449568 004464A8  38 80 01 D3 */	li r4, 0x1d3
/* 8044956C 004464AC  4C C6 31 82 */	crclr 6
/* 80449570 004464B0  4B BE 10 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80449574:
/* 80449574 004464B4  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80449578 004464B8  28 1E 00 00 */	cmplwi r30, 0
/* 8044957C 004464BC  40 82 00 18 */	bne .L_80449594
/* 80449580 004464C0  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 80449584 004464C4  38 BF 00 1C */	addi r5, r31, 0x1c
/* 80449588 004464C8  38 80 01 DC */	li r4, 0x1dc
/* 8044958C 004464CC  4C C6 31 82 */	crclr 6
/* 80449590 004464D0  4B BE 10 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80449594:
/* 80449594 004464D4  83 DE 00 04 */	lwz r30, 4(r30)
/* 80449598 004464D8  28 1E 00 00 */	cmplwi r30, 0
/* 8044959C 004464DC  40 82 00 18 */	bne .L_804495B4
/* 804495A0 004464E0  38 7F 00 0C */	addi r3, r31, 0xc
/* 804495A4 004464E4  38 BF 00 1C */	addi r5, r31, 0x1c
/* 804495A8 004464E8  38 80 06 BB */	li r4, 0x6bb
/* 804495AC 004464EC  4C C6 31 82 */	crclr 6
/* 804495B0 004464F0  4B BE 10 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804495B4:
/* 804495B4 004464F4  3C 80 C0 01 */	lis r4, 0xC001101F@ha
/* 804495B8 004464F8  7F C3 F3 78 */	mr r3, r30
/* 804495BC 004464FC  38 84 10 1F */	addi r4, r4, 0xC001101F@l
/* 804495C0 00446500  48 01 E2 A1 */	bl startGlobalStream__Q23PSM12Scene_GlobalFUl
/* 804495C4 00446504  7F A3 EB 78 */	mr r3, r29
/* 804495C8 00446508  38 80 00 01 */	li r4, 1
/* 804495CC 0044650C  48 00 07 B5 */	bl setMode__11BootSectionFi
.L_804495D0:
/* 804495D0 00446510  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804495D4 00446514  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804495D8 00446518  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804495DC 0044651C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804495E0 00446520  7C 08 03 A6 */	mtlr r0
/* 804495E4 00446524  38 21 00 20 */	addi r1, r1, 0x20
/* 804495E8 00446528  4E 80 00 20 */	blr 
.endfn updateLoadResourceFirst__11BootSectionFv
.else
.fn updateLoadResourceFirst__11BootSectionFv, global
/* 804496A0 004465E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804496A4 004465E4  7C 08 02 A6 */	mflr r0
/* 804496A8 004465E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804496AC 004465EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804496B0 004465F0  7C 7F 1B 78 */	mr r31, r3
/* 804496B4 004465F4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804496B8 004465F8  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 804496BC 004465FC  81 83 00 00 */	lwz r12, 0(r3)
/* 804496C0 00446600  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 804496C4 00446604  7D 89 03 A6 */	mtctr r12
/* 804496C8 00446608  4E 80 04 21 */	bctrl 
/* 804496CC 0044660C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804496D0 00446610  4B FD 9F 65 */	bl dvdLoadSyncAllNoBlock__6SystemFv
/* 804496D4 00446614  2C 03 00 00 */	cmpwi r3, 0
/* 804496D8 00446618  40 82 00 50 */	bne .L_80449728
/* 804496DC 0044661C  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 804496E0 00446620  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 804496E4 00446624  80 03 02 38 */	lwz r0, 0x238(r3)
/* 804496E8 00446628  2C 00 00 00 */	cmpwi r0, 0
/* 804496EC 0044662C  41 82 00 18 */	beq .L_80449704
/* 804496F0 00446630  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804496F4 00446634  38 00 00 00 */	li r0, 0
/* 804496F8 00446638  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804496FC 0044663C  98 03 00 3B */	stb r0, 0x3b(r3)
/* 80449700 00446640  48 00 00 1C */	b .L_8044971C
.L_80449704:
/* 80449704 00446644  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 80449708 00446648  2C 00 00 00 */	cmpwi r0, 0
/* 8044970C 0044664C  40 82 00 10 */	bne .L_8044971C
/* 80449710 00446650  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449714 00446654  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80449718 00446658  4B FF 98 85 */	bl loadGameOption__Q34Game10MemoryCard3MgrFv
.L_8044971C:
/* 8044971C 0044665C  7F E3 FB 78 */	mr r3, r31
/* 80449720 00446660  38 80 00 01 */	li r4, 1
/* 80449724 00446664  48 00 07 AD */	bl setMode__11BootSectionFi
.L_80449728:
/* 80449728 00446668  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044972C 0044666C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80449730 00446670  7C 08 03 A6 */	mtlr r0
/* 80449734 00446674  38 21 00 10 */	addi r1, r1, 0x10
/* 80449738 00446678  4E 80 00 20 */	blr 
.endfn updateLoadResourceFirst__11BootSectionFv
.endif

.fn updateLoadMemoryCard__11BootSectionFv, global
/* 8044973C 0044667C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449740 00446680  7C 08 02 A6 */	mflr r0
/* 80449744 00446684  3C A0 80 4A */	lis r5, lbl_8049AF08@ha
/* 80449748 00446688  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044974C 0044668C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449750 00446690  3B E5 AF 08 */	addi r31, r5, lbl_8049AF08@l
/* 80449754 00446694  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80449758 00446698  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044975C 0044669C  7C 7D 1B 78 */	mr r29, r3
/* 80449760 004466A0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449764 004466A4  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 80449768 004466A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8044976C 004466AC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80449770 004466B0  7D 89 03 A6 */	mtctr r12
/* 80449774 004466B4  4E 80 04 21 */	bctrl 
/* 80449778 004466B8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044977C 004466BC  28 00 00 00 */	cmplwi r0, 0
/* 80449780 004466C0  40 82 00 18 */	bne .L_80449798
/* 80449784 004466C4  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 80449788 004466C8  38 BF 00 1C */	addi r5, r31, 0x1c
/* 8044978C 004466CC  38 80 01 D3 */	li r4, 0x1d3
/* 80449790 004466D0  4C C6 31 82 */	crclr 6
/* 80449794 004466D4  4B BE 0E AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80449798:
/* 80449798 004466D8  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8044979C 004466DC  28 1E 00 00 */	cmplwi r30, 0
/* 804497A0 004466E0  40 82 00 18 */	bne .L_804497B8
/* 804497A4 004466E4  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 804497A8 004466E8  38 BF 00 1C */	addi r5, r31, 0x1c
/* 804497AC 004466EC  38 80 01 DC */	li r4, 0x1dc
/* 804497B0 004466F0  4C C6 31 82 */	crclr 6
/* 804497B4 004466F4  4B BE 0E 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804497B8:
/* 804497B8 004466F8  83 DE 00 04 */	lwz r30, 4(r30)
/* 804497BC 004466FC  28 1E 00 00 */	cmplwi r30, 0
/* 804497C0 00446700  40 82 00 18 */	bne .L_804497D8
/* 804497C4 00446704  38 7F 00 0C */	addi r3, r31, 0xc
/* 804497C8 00446708  38 BF 00 1C */	addi r5, r31, 0x1c
/* 804497CC 0044670C  38 80 06 D4 */	li r4, 0x6d4
/* 804497D0 00446710  4C C6 31 82 */	crclr 6
/* 804497D4 00446714  4B BE 0E 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804497D8:
/* 804497D8 00446718  7F C3 F3 78 */	mr r3, r30
/* 804497DC 0044671C  48 01 E1 41 */	bl getGlobalStream__Q23PSM12Scene_GlobalFv
/* 804497E0 00446720  81 83 00 10 */	lwz r12, 0x10(r3)
/* 804497E4 00446724  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 804497E8 00446728  7D 89 03 A6 */	mtctr r12
/* 804497EC 0044672C  4E 80 04 21 */	bctrl 
/* 804497F0 00446730  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 804497F4 00446734  3B E0 00 00 */	li r31, 0
/* 804497F8 00446738  83 C3 00 00 */	lwz r30, 0(r3)
/* 804497FC 0044673C  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 80449800 00446740  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 80449804 00446744  2C 00 00 00 */	cmpwi r0, 0
/* 80449808 00446748  40 82 00 14 */	bne .L_8044981C
/* 8044980C 0044674C  4B FF 77 B1 */	bl checkStatus__13MemoryCardMgrFv
/* 80449810 00446750  28 03 00 0B */	cmplwi r3, 0xb
/* 80449814 00446754  41 82 00 08 */	beq .L_8044981C
/* 80449818 00446758  3B E0 00 01 */	li r31, 1
.L_8044981C:
/* 8044981C 0044675C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80449820 00446760  41 82 00 3C */	beq .L_8044985C
/* 80449824 00446764  28 1E 00 00 */	cmplwi r30, 0
/* 80449828 00446768  40 82 00 34 */	bne .L_8044985C
/* 8044982C 0044676C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449830 00446770  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 80449834 00446774  4B FF 77 89 */	bl checkStatus__13MemoryCardMgrFv
/* 80449838 00446778  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044983C 0044677C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80449840 00446780  4B FF D6 75 */	bl setup__Q34Game14CommonSaveData3MgrFv
/* 80449844 00446784  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449848 00446788  4B FD 95 A9 */	bl loadResourceSecond__6SystemFv
/* 8044984C 0044678C  7F A3 EB 78 */	mr r3, r29
/* 80449850 00446790  48 00 07 05 */	bl setModeEpilepsy__11BootSectionFv
/* 80449854 00446794  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449858 00446798  4B FD 9B 45 */	bl resetPermissionOn__6SystemFv
.L_8044985C:
/* 8044985C 0044679C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449860 004467A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449864 004467A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80449868 004467A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044986C 004467AC  7C 08 03 A6 */	mtlr r0
/* 80449870 004467B0  38 21 00 20 */	addi r1, r1, 0x20
/* 80449874 004467B4  4E 80 00 20 */	blr 
.endfn updateLoadMemoryCard__11BootSectionFv

.if version == 0
.fn updateNintendoLogo__11BootSectionFv, global
/* 80449878 004467B8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8044987C 004467BC  7C 08 02 A6 */	mflr r0
/* 80449880 004467C0  3C 80 80 51 */	lis r4, gGameConfig__4Game@ha
/* 80449884 004467C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80449888 004467C8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8044988C 004467CC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80449890 004467D0  7C 7E 1B 78 */	mr r30, r3
/* 80449894 004467D4  38 64 41 FC */	addi r3, r4, gGameConfig__4Game@l
/* 80449898 004467D8  80 03 02 38 */	lwz r0, 0x238(r3)
/* 8044989C 004467DC  83 FE 00 48 */	lwz r31, 0x68(r30)
/* 804498A0 004467E0  2C 00 00 00 */	cmpwi r0, 0
/* 804498A4 004467E4  40 82 00 58 */	bne .L_804498FC
/* 804498A8 004467E8  80 0D 9A E8 */	lwz r0, mRenderMode__6System@sda21(r13)
/* 804498AC 004467EC  2C 00 00 01 */	cmpwi r0, 1
/* 804498B0 004467F0  41 82 00 4C */	beq .L_804498FC
/* 804498B4 004467F4  4B CA 7B 11 */	bl OSGetProgressiveMode
/* 804498B8 004467F8  28 03 00 01 */	cmplwi r3, 1
/* 804498BC 004467FC  41 82 00 14 */	beq .L_804498D0
/* 804498C0 00446800  80 7E 00 D4 */	lwz r3, 0xf4(r30)
/* 804498C4 00446804  80 03 00 18 */	lwz r0, 0x18(r3)
/* 804498C8 00446808  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 804498CC 0044680C  41 82 00 1C */	beq .L_804498E8
.L_804498D0:
/* 804498D0 00446810  4B C8 8A BD */	bl VIGetDTVStatus
/* 804498D4 00446814  28 03 00 01 */	cmplwi r3, 1
/* 804498D8 00446818  40 82 00 10 */	bne .L_804498E8
/* 804498DC 0044681C  38 00 00 01 */	li r0, 1
/* 804498E0 00446820  98 1E 00 DD */	stb r0, 0xfd(r30)
/* 804498E4 00446824  48 00 00 18 */	b .L_804498FC
.L_804498E8:
/* 804498E8 00446828  4B C8 8A A5 */	bl VIGetDTVStatus
/* 804498EC 0044682C  28 03 00 01 */	cmplwi r3, 1
/* 804498F0 00446830  41 82 00 0C */	beq .L_804498FC
/* 804498F4 00446834  38 60 00 00 */	li r3, 0
/* 804498F8 00446838  4B CA 7B 3D */	bl OSSetProgressiveMode
.L_804498FC:
/* 804498FC 0044683C  88 1E 00 DD */	lbz r0, 0xfd(r30)
/* 80449900 00446840  28 00 00 00 */	cmplwi r0, 0
/* 80449904 00446844  41 82 00 88 */	beq .L_8044998C
/* 80449908 00446848  80 1E 00 4C */	lwz r0, 0x6c(r30)
/* 8044990C 0044684C  2C 00 00 05 */	cmpwi r0, 5
/* 80449910 00446850  41 82 00 7C */	beq .L_8044998C
/* 80449914 00446854  88 1E 00 DC */	lbz r0, 0xfc(r30)
/* 80449918 00446858  28 00 00 00 */	cmplwi r0, 0
/* 8044991C 0044685C  40 82 00 70 */	bne .L_8044998C
/* 80449920 00446860  38 00 00 05 */	li r0, 5
/* 80449924 00446864  38 60 00 14 */	li r3, 0x14
/* 80449928 00446868  90 1E 00 4C */	stw r0, 0x6c(r30)
/* 8044992C 0044686C  4B BD A5 79 */	bl __nw__FUl
/* 80449930 00446870  7C 65 1B 79 */	or. r5, r3, r3
/* 80449934 00446874  41 82 00 4C */	beq .L_80449980
/* 80449938 00446878  3C 60 80 4F */	lis r3, lbl_804ED068@ha
/* 8044993C 0044687C  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 80449940 00446880  39 03 D0 68 */	addi r8, r3, lbl_804ED068@l
/* 80449944 00446884  3C 60 80 4F */	lis r3, "__vt__23Delegate<11BootSection>"@ha
/* 80449948 00446888  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044994C 0044688C  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 80449950 00446890  80 C8 00 04 */	lwz r6, 4(r8)
/* 80449954 00446894  38 03 D1 90 */	addi r0, r3, "__vt__23Delegate<11BootSection>"@l
/* 80449958 00446898  80 68 00 08 */	lwz r3, 8(r8)
/* 8044995C 0044689C  90 E1 00 08 */	stw r7, 8(r1)
/* 80449960 004468A0  90 85 00 00 */	stw r4, 0(r5)
/* 80449964 004468A4  90 05 00 00 */	stw r0, 0(r5)
/* 80449968 004468A8  93 C5 00 04 */	stw r30, 4(r5)
/* 8044996C 004468AC  90 E5 00 08 */	stw r7, 8(r5)
/* 80449970 004468B0  90 C5 00 0C */	stw r6, 0xc(r5)
/* 80449974 004468B4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80449978 004468B8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8044997C 004468BC  90 65 00 10 */	stw r3, 0x10(r5)
.L_80449980:
/* 80449980 004468C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449984 004468C4  38 9E 00 64 */	addi r4, r30, 0x84
/* 80449988 004468C8  4B FD 95 B1 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
.L_8044998C:
/* 8044998C 004468CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449990 004468D0  C0 5E 00 50 */	lfs f2, 0x70(r30)
/* 80449994 004468D4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449998 004468D8  C0 02 26 58 */	lfs f0, lbl_805209B8@sda21(r2)
/* 8044999C 004468DC  EC 22 08 2A */	fadds f1, f2, f1
/* 804499A0 004468E0  D0 3E 00 50 */	stfs f1, 0x70(r30)
/* 804499A4 004468E4  C0 3E 00 50 */	lfs f1, 0x70(r30)
/* 804499A8 004468E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804499AC 004468EC  40 81 01 20 */	ble .L_80449ACC
/* 804499B0 004468F0  7F C3 F3 78 */	mr r3, r30
/* 804499B4 004468F4  48 00 04 ED */	bl waitLoadResource__11BootSectionFv
/* 804499B8 004468F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804499BC 004468FC  40 82 01 10 */	bne .L_80449ACC
/* 804499C0 00446900  88 1E 00 DC */	lbz r0, 0xfc(r30)
/* 804499C4 00446904  28 00 00 00 */	cmplwi r0, 0
/* 804499C8 00446908  40 82 00 0C */	bne .L_804499D4
/* 804499CC 0044690C  38 00 00 01 */	li r0, 1
/* 804499D0 00446910  98 1E 00 DC */	stb r0, 0xfc(r30)
.L_804499D4:
/* 804499D4 00446914  80 9E 00 4C */	lwz r4, 0x6c(r30)
/* 804499D8 00446918  2C 04 00 05 */	cmpwi r4, 5
/* 804499DC 0044691C  41 82 00 94 */	beq .L_80449A70
/* 804499E0 00446920  38 00 00 09 */	li r0, 9
/* 804499E4 00446924  90 1E 00 4C */	stw r0, 0x6c(r30)
/* 804499E8 00446928  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 804499EC 0044692C  80 63 00 04 */	lwz r3, 4(r3)
/* 804499F0 00446930  80 03 00 04 */	lwz r0, 4(r3)
/* 804499F4 00446934  2C 00 00 01 */	cmpwi r0, 1
/* 804499F8 00446938  40 82 00 4C */	bne .L_80449A44
/* 804499FC 0044693C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449A00 00446940  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449A04 00446944  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80449A08 00446948  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449A0C 0044694C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449A10 00446950  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449A14 00446954  4C 41 13 82 */	cror 2, 1, 2
/* 80449A18 00446958  40 82 00 0C */	bne .L_80449A24
/* 80449A1C 0044695C  EC 02 08 2A */	fadds f0, f2, f1
/* 80449A20 00446960  48 00 00 08 */	b .L_80449A28
.L_80449A24:
/* 80449A24 00446964  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449A28:
/* 80449A28 00446968  FC 00 00 1E */	fctiwz f0, f0
/* 80449A2C 0044696C  81 83 00 00 */	lwz r12, 0(r3)
/* 80449A30 00446970  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80449A34 00446974  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80449A38 00446978  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80449A3C 0044697C  7D 89 03 A6 */	mtctr r12
/* 80449A40 00446980  4E 80 04 21 */	bctrl 
.L_80449A44:
/* 80449A44 00446984  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80449A48 00446988  80 63 00 04 */	lwz r3, 4(r3)
/* 80449A4C 0044698C  80 03 00 04 */	lwz r0, 4(r3)
/* 80449A50 00446990  2C 00 00 00 */	cmpwi r0, 0
/* 80449A54 00446994  40 82 00 78 */	bne .L_80449ACC
/* 80449A58 00446998  80 9E 00 4C */	lwz r4, 0x6c(r30)
/* 80449A5C 0044699C  7F C3 F3 78 */	mr r3, r30
/* 80449A60 004469A0  48 00 04 71 */	bl setMode__11BootSectionFi
/* 80449A64 004469A4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449A68 004469A8  D0 1E 00 50 */	stfs f0, 0x70(r30)
/* 80449A6C 004469AC  48 00 00 60 */	b .L_80449ACC
.L_80449A70:
/* 80449A70 004469B0  7F C3 F3 78 */	mr r3, r30
/* 80449A74 004469B4  48 00 04 5D */	bl setMode__11BootSectionFi
/* 80449A78 004469B8  C0 42 26 40 */	lfs f2, lbl_805209A0@sda21(r2)
/* 80449A7C 004469BC  38 80 00 00 */	li r4, 0
/* 80449A80 004469C0  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 80449A84 004469C4  D0 5E 00 50 */	stfs f2, 0x70(r30)
/* 80449A88 004469C8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80449A8C 004469CC  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 80449A90 004469D0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80449A94 004469D4  EC 01 00 24 */	fdivs f0, f1, f0
/* 80449A98 004469D8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80449A9C 004469DC  4C 41 13 82 */	cror 2, 1, 2
/* 80449AA0 004469E0  40 82 00 0C */	bne .L_80449AAC
/* 80449AA4 004469E4  EC 01 00 2A */	fadds f0, f1, f0
/* 80449AA8 004469E8  48 00 00 08 */	b .L_80449AB0
.L_80449AAC:
/* 80449AAC 004469EC  EC 00 08 28 */	fsubs f0, f0, f1
.L_80449AB0:
/* 80449AB0 004469F0  FC 00 00 1E */	fctiwz f0, f0
/* 80449AB4 004469F4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80449AB8 004469F8  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 80449ABC 004469FC  4B F8 3F E5 */	bl startScreen__Q23ebi13TScreenProgreFlUl
/* 80449AC0 00446A00  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 80449AC4 00446A04  38 00 00 01 */	li r0, 1
/* 80449AC8 00446A08  98 03 00 08 */	stb r0, 8(r3)
.L_80449ACC:
/* 80449ACC 00446A0C  80 1E 00 48 */	lwz r0, 0x68(r30)
/* 80449AD0 00446A10  7C 00 F8 00 */	cmpw r0, r31
/* 80449AD4 00446A14  41 82 00 14 */	beq .L_80449AE8
/* 80449AD8 00446A18  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449ADC 00446A1C  38 9E 00 64 */	addi r4, r30, 0x84
/* 80449AE0 00446A20  80 BE 00 D0 */	lwz r5, 0xf0(r30)
/* 80449AE4 00446A24  4B FD 94 55 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
.L_80449AE8:
/* 80449AE8 00446A28  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80449AEC 00446A2C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80449AF0 00446A30  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80449AF4 00446A34  7C 08 03 A6 */	mtlr r0
/* 80449AF8 00446A38  38 21 00 30 */	addi r1, r1, 0x30
/* 80449AFC 00446A3C  4E 80 00 20 */	blr 
.endfn updateNintendoLogo__11BootSectionFv
.else
.fn updateNintendoLogo__11BootSectionFv, global
/* 80449878 004467B8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8044987C 004467BC  7C 08 02 A6 */	mflr r0
/* 80449880 004467C0  3C 80 80 51 */	lis r4, gGameConfig__4Game@ha
/* 80449884 004467C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80449888 004467C8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8044988C 004467CC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80449890 004467D0  7C 7E 1B 78 */	mr r30, r3
/* 80449894 004467D4  38 64 41 FC */	addi r3, r4, gGameConfig__4Game@l
/* 80449898 004467D8  80 03 02 38 */	lwz r0, 0x238(r3)
/* 8044989C 004467DC  83 FE 00 48 */	lwz r31, 0x48(r30)
/* 804498A0 004467E0  2C 00 00 00 */	cmpwi r0, 0
/* 804498A4 004467E4  40 82 00 58 */	bne .L_804498FC
/* 804498A8 004467E8  80 0D 9A E8 */	lwz r0, mRenderMode__6System@sda21(r13)
/* 804498AC 004467EC  2C 00 00 01 */	cmpwi r0, 1
/* 804498B0 004467F0  41 82 00 4C */	beq .L_804498FC
/* 804498B4 004467F4  4B CA 7B 11 */	bl OSGetProgressiveMode
/* 804498B8 004467F8  28 03 00 01 */	cmplwi r3, 1
/* 804498BC 004467FC  41 82 00 14 */	beq .L_804498D0
/* 804498C0 00446800  80 7E 00 D4 */	lwz r3, 0xd4(r30)
/* 804498C4 00446804  80 03 00 18 */	lwz r0, 0x18(r3)
/* 804498C8 00446808  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 804498CC 0044680C  41 82 00 1C */	beq .L_804498E8
.L_804498D0:
/* 804498D0 00446810  4B C8 8A BD */	bl VIGetDTVStatus
/* 804498D4 00446814  28 03 00 01 */	cmplwi r3, 1
/* 804498D8 00446818  40 82 00 10 */	bne .L_804498E8
/* 804498DC 0044681C  38 00 00 01 */	li r0, 1
/* 804498E0 00446820  98 1E 00 DD */	stb r0, 0xdd(r30)
/* 804498E4 00446824  48 00 00 18 */	b .L_804498FC
.L_804498E8:
/* 804498E8 00446828  4B C8 8A A5 */	bl VIGetDTVStatus
/* 804498EC 0044682C  28 03 00 01 */	cmplwi r3, 1
/* 804498F0 00446830  41 82 00 0C */	beq .L_804498FC
/* 804498F4 00446834  38 60 00 00 */	li r3, 0
/* 804498F8 00446838  4B CA 7B 3D */	bl OSSetProgressiveMode
.L_804498FC:
/* 804498FC 0044683C  88 1E 00 DD */	lbz r0, 0xdd(r30)
/* 80449900 00446840  28 00 00 00 */	cmplwi r0, 0
/* 80449904 00446844  41 82 00 88 */	beq .L_8044998C
/* 80449908 00446848  80 1E 00 4C */	lwz r0, 0x4c(r30)
/* 8044990C 0044684C  2C 00 00 05 */	cmpwi r0, 5
/* 80449910 00446850  41 82 00 7C */	beq .L_8044998C
/* 80449914 00446854  88 1E 00 DC */	lbz r0, 0xdc(r30)
/* 80449918 00446858  28 00 00 00 */	cmplwi r0, 0
/* 8044991C 0044685C  40 82 00 70 */	bne .L_8044998C
/* 80449920 00446860  38 00 00 05 */	li r0, 5
/* 80449924 00446864  38 60 00 14 */	li r3, 0x14
/* 80449928 00446868  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 8044992C 0044686C  4B BD A5 79 */	bl __nw__FUl
/* 80449930 00446870  7C 65 1B 79 */	or. r5, r3, r3
/* 80449934 00446874  41 82 00 4C */	beq .L_80449980
/* 80449938 00446878  3C 60 80 4F */	lis r3, lbl_804ED068@ha
/* 8044993C 0044687C  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 80449940 00446880  39 03 D0 68 */	addi r8, r3, lbl_804ED068@l
/* 80449944 00446884  3C 60 80 4F */	lis r3, "__vt__23Delegate<11BootSection>"@ha
/* 80449948 00446888  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044994C 0044688C  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 80449950 00446890  80 C8 00 04 */	lwz r6, 4(r8)
/* 80449954 00446894  38 03 D1 90 */	addi r0, r3, "__vt__23Delegate<11BootSection>"@l
/* 80449958 00446898  80 68 00 08 */	lwz r3, 8(r8)
/* 8044995C 0044689C  90 E1 00 08 */	stw r7, 8(r1)
/* 80449960 004468A0  90 85 00 00 */	stw r4, 0(r5)
/* 80449964 004468A4  90 05 00 00 */	stw r0, 0(r5)
/* 80449968 004468A8  93 C5 00 04 */	stw r30, 4(r5)
/* 8044996C 004468AC  90 E5 00 08 */	stw r7, 8(r5)
/* 80449970 004468B0  90 C5 00 0C */	stw r6, 0xc(r5)
/* 80449974 004468B4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80449978 004468B8  90 61 00 10 */	stw r3, 0x10(r1)
/* 8044997C 004468BC  90 65 00 10 */	stw r3, 0x10(r5)
.L_80449980:
/* 80449980 004468C0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449984 004468C4  38 9E 00 64 */	addi r4, r30, 0x64
/* 80449988 004468C8  4B FD 95 B1 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
.L_8044998C:
/* 8044998C 004468CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449990 004468D0  C0 5E 00 50 */	lfs f2, 0x50(r30)
/* 80449994 004468D4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449998 004468D8  C0 02 26 58 */	lfs f0, lbl_805209B8@sda21(r2)
/* 8044999C 004468DC  EC 22 08 2A */	fadds f1, f2, f1
/* 804499A0 004468E0  D0 3E 00 50 */	stfs f1, 0x50(r30)
/* 804499A4 004468E4  C0 3E 00 50 */	lfs f1, 0x50(r30)
/* 804499A8 004468E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804499AC 004468EC  40 81 01 20 */	ble .L_80449ACC
/* 804499B0 004468F0  7F C3 F3 78 */	mr r3, r30
/* 804499B4 004468F4  48 00 04 ED */	bl waitLoadResource__11BootSectionFv
/* 804499B8 004468F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804499BC 004468FC  40 82 01 10 */	bne .L_80449ACC
/* 804499C0 00446900  88 1E 00 DC */	lbz r0, 0xdc(r30)
/* 804499C4 00446904  28 00 00 00 */	cmplwi r0, 0
/* 804499C8 00446908  40 82 00 0C */	bne .L_804499D4
/* 804499CC 0044690C  38 00 00 01 */	li r0, 1
/* 804499D0 00446910  98 1E 00 DC */	stb r0, 0xdc(r30)
.L_804499D4:
/* 804499D4 00446914  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 804499D8 00446918  2C 04 00 05 */	cmpwi r4, 5
/* 804499DC 0044691C  41 82 00 94 */	beq .L_80449A70
/* 804499E0 00446920  38 00 00 09 */	li r0, 9
/* 804499E4 00446924  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 804499E8 00446928  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 804499EC 0044692C  80 63 00 04 */	lwz r3, 4(r3)
/* 804499F0 00446930  80 03 00 04 */	lwz r0, 4(r3)
/* 804499F4 00446934  2C 00 00 01 */	cmpwi r0, 1
/* 804499F8 00446938  40 82 00 4C */	bne .L_80449A44
/* 804499FC 0044693C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449A00 00446940  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449A04 00446944  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80449A08 00446948  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449A0C 0044694C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449A10 00446950  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449A14 00446954  4C 41 13 82 */	cror 2, 1, 2
/* 80449A18 00446958  40 82 00 0C */	bne .L_80449A24
/* 80449A1C 0044695C  EC 02 08 2A */	fadds f0, f2, f1
/* 80449A20 00446960  48 00 00 08 */	b .L_80449A28
.L_80449A24:
/* 80449A24 00446964  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449A28:
/* 80449A28 00446968  FC 00 00 1E */	fctiwz f0, f0
/* 80449A2C 0044696C  81 83 00 00 */	lwz r12, 0(r3)
/* 80449A30 00446970  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80449A34 00446974  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80449A38 00446978  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 80449A3C 0044697C  7D 89 03 A6 */	mtctr r12
/* 80449A40 00446980  4E 80 04 21 */	bctrl 
.L_80449A44:
/* 80449A44 00446984  80 7E 00 24 */	lwz r3, 0x24(r30)
/* 80449A48 00446988  80 63 00 04 */	lwz r3, 4(r3)
/* 80449A4C 0044698C  80 03 00 04 */	lwz r0, 4(r3)
/* 80449A50 00446990  2C 00 00 00 */	cmpwi r0, 0
/* 80449A54 00446994  40 82 00 78 */	bne .L_80449ACC
/* 80449A58 00446998  80 9E 00 4C */	lwz r4, 0x4c(r30)
/* 80449A5C 0044699C  7F C3 F3 78 */	mr r3, r30
/* 80449A60 004469A0  48 00 04 71 */	bl setMode__11BootSectionFi
/* 80449A64 004469A4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449A68 004469A8  D0 1E 00 50 */	stfs f0, 0x50(r30)
/* 80449A6C 004469AC  48 00 00 60 */	b .L_80449ACC
.L_80449A70:
/* 80449A70 004469B0  7F C3 F3 78 */	mr r3, r30
/* 80449A74 004469B4  48 00 04 5D */	bl setMode__11BootSectionFi
/* 80449A78 004469B8  C0 42 26 40 */	lfs f2, lbl_805209A0@sda21(r2)
/* 80449A7C 004469BC  38 80 00 00 */	li r4, 0
/* 80449A80 004469C0  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 80449A84 004469C4  D0 5E 00 50 */	stfs f2, 0x50(r30)
/* 80449A88 004469C8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 80449A8C 004469CC  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 80449A90 004469D0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 80449A94 004469D4  EC 01 00 24 */	fdivs f0, f1, f0
/* 80449A98 004469D8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 80449A9C 004469DC  4C 41 13 82 */	cror 2, 1, 2
/* 80449AA0 004469E0  40 82 00 0C */	bne .L_80449AAC
/* 80449AA4 004469E4  EC 01 00 2A */	fadds f0, f1, f0
/* 80449AA8 004469E8  48 00 00 08 */	b .L_80449AB0
.L_80449AAC:
/* 80449AAC 004469EC  EC 00 08 28 */	fsubs f0, f0, f1
.L_80449AB0:
/* 80449AB0 004469F0  FC 00 00 1E */	fctiwz f0, f0
/* 80449AB4 004469F4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80449AB8 004469F8  80 A1 00 1C */	lwz r5, 0x1c(r1)
/* 80449ABC 004469FC  4B F8 3F E5 */	bl startScreen__Q23ebi13TScreenProgreFlUl
/* 80449AC0 00446A00  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 80449AC4 00446A04  38 00 00 01 */	li r0, 1
/* 80449AC8 00446A08  98 03 00 08 */	stb r0, 8(r3)
.L_80449ACC:
/* 80449ACC 00446A0C  80 1E 00 48 */	lwz r0, 0x48(r30)
/* 80449AD0 00446A10  7C 00 F8 00 */	cmpw r0, r31
/* 80449AD4 00446A14  41 82 00 14 */	beq .L_80449AE8
/* 80449AD8 00446A18  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449ADC 00446A1C  38 9E 00 64 */	addi r4, r30, 0x64
/* 80449AE0 00446A20  80 BE 00 D0 */	lwz r5, 0xd0(r30)
/* 80449AE4 00446A24  4B FD 94 55 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
.L_80449AE8:
/* 80449AE8 00446A28  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80449AEC 00446A2C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80449AF0 00446A30  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80449AF4 00446A34  7C 08 03 A6 */	mtlr r0
/* 80449AF8 00446A38  38 21 00 30 */	addi r1, r1, 0x30
/* 80449AFC 00446A3C  4E 80 00 20 */	blr 
.endfn updateNintendoLogo__11BootSectionFv
.endif

.if version == 0
.fn updateProgressive__11BootSectionFv, global
/* 80449B00 00446A40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449B04 00446A44  7C 08 02 A6 */	mflr r0
/* 80449B08 00446A48  C0 22 26 68 */	lfs f1, lbl_805209C8@sda21(r2)
/* 80449B0C 00446A4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449B10 00446A50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449B14 00446A54  7C 7F 1B 78 */	mr r31, r3
/* 80449B18 00446A58  C0 43 00 50 */	lfs f2, 0x70(r3)
/* 80449B1C 00446A5C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80449B20 00446A60  40 80 00 80 */	bge .L_80449BA0
/* 80449B24 00446A64  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449B28 00446A68  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449B2C 00446A6C  EC 02 00 2A */	fadds f0, f2, f0
/* 80449B30 00446A70  D0 1F 00 50 */	stfs f0, 0x70(r31)
/* 80449B34 00446A74  C0 1F 00 50 */	lfs f0, 0x70(r31)
/* 80449B38 00446A78  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80449B3C 00446A7C  4C 41 13 82 */	cror 2, 1, 2
/* 80449B40 00446A80  40 82 00 0C */	bne .L_80449B4C
/* 80449B44 00446A84  80 7F 00 D8 */	lwz r3, 0xf8(r31)
/* 80449B48 00446A88  4B F8 4A A9 */	bl setDecide__Q23ebi13TScreenProgreFv
.L_80449B4C:
/* 80449B4C 00446A8C  80 7F 00 D8 */	lwz r3, 0xf8(r31)
/* 80449B50 00446A90  88 03 00 09 */	lbz r0, 9(r3)
/* 80449B54 00446A94  28 00 00 00 */	cmplwi r0, 0
/* 80449B58 00446A98  41 82 00 48 */	beq .L_80449BA0
/* 80449B5C 00446A9C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449B60 00446AA0  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449B64 00446AA4  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80449B68 00446AA8  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449B6C 00446AAC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449B70 00446AB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449B74 00446AB4  4C 41 13 82 */	cror 2, 1, 2
/* 80449B78 00446AB8  40 82 00 0C */	bne .L_80449B84
/* 80449B7C 00446ABC  EC 02 08 2A */	fadds f0, f2, f1
/* 80449B80 00446AC0  48 00 00 08 */	b .L_80449B88
.L_80449B84:
/* 80449B84 00446AC4  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449B88:
/* 80449B88 00446AC8  FC 00 00 1E */	fctiwz f0, f0
/* 80449B8C 00446ACC  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449B90 00446AD0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449B94 00446AD4  4B F8 42 F1 */	bl fadeout__Q23ebi13TScreenProgreFUl
/* 80449B98 00446AD8  C0 02 26 68 */	lfs f0, lbl_805209C8@sda21(r2)
/* 80449B9C 00446ADC  D0 1F 00 50 */	stfs f0, 0x70(r31)
.L_80449BA0:
/* 80449BA0 00446AE0  80 7F 00 D8 */	lwz r3, 0xf8(r31)
/* 80449BA4 00446AE4  4B F8 43 35 */	bl isFinish__Q23ebi13TScreenProgreFv
/* 80449BA8 00446AE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80449BAC 00446AEC  41 82 00 C0 */	beq .L_80449C6C
/* 80449BB0 00446AF0  80 7F 00 D8 */	lwz r3, 0xf8(r31)
/* 80449BB4 00446AF4  88 03 00 08 */	lbz r0, 8(r3)
/* 80449BB8 00446AF8  28 00 00 00 */	cmplwi r0, 0
/* 80449BBC 00446AFC  41 82 00 58 */	beq .L_80449C14
/* 80449BC0 00446B00  7F E3 FB 78 */	mr r3, r31
/* 80449BC4 00446B04  38 80 00 08 */	li r4, 8
/* 80449BC8 00446B08  48 00 03 09 */	bl setMode__11BootSectionFi
/* 80449BCC 00446B0C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449BD0 00446B10  38 80 00 02 */	li r4, 2
/* 80449BD4 00446B14  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449BD8 00446B18  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449BDC 00446B1C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449BE0 00446B20  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449BE4 00446B24  80 7F 00 D8 */	lwz r3, 0xf8(r31)
/* 80449BE8 00446B28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449BEC 00446B2C  4C 41 13 82 */	cror 2, 1, 2
/* 80449BF0 00446B30  40 82 00 0C */	bne .L_80449BFC
/* 80449BF4 00446B34  EC 02 08 2A */	fadds f0, f2, f1
/* 80449BF8 00446B38  48 00 00 08 */	b .L_80449C00
.L_80449BFC:
/* 80449BFC 00446B3C  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449C00:
/* 80449C00 00446B40  FC 00 00 1E */	fctiwz f0, f0
/* 80449C04 00446B44  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449C08 00446B48  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 80449C0C 00446B4C  4B F8 3E 95 */	bl startScreen__Q23ebi13TScreenProgreFlUl
/* 80449C10 00446B50  48 00 00 54 */	b .L_80449C64
.L_80449C14:
/* 80449C14 00446B54  7F E3 FB 78 */	mr r3, r31
/* 80449C18 00446B58  38 80 00 07 */	li r4, 7
/* 80449C1C 00446B5C  48 00 02 B5 */	bl setMode__11BootSectionFi
/* 80449C20 00446B60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449C24 00446B64  38 80 00 01 */	li r4, 1
/* 80449C28 00446B68  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449C2C 00446B6C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449C30 00446B70  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449C34 00446B74  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449C38 00446B78  80 7F 00 D8 */	lwz r3, 0xf8(r31)
/* 80449C3C 00446B7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449C40 00446B80  4C 41 13 82 */	cror 2, 1, 2
/* 80449C44 00446B84  40 82 00 0C */	bne .L_80449C50
/* 80449C48 00446B88  EC 02 08 2A */	fadds f0, f2, f1
/* 80449C4C 00446B8C  48 00 00 08 */	b .L_80449C54
.L_80449C50:
/* 80449C50 00446B90  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449C54:
/* 80449C54 00446B94  FC 00 00 1E */	fctiwz f0, f0
/* 80449C58 00446B98  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449C5C 00446B9C  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 80449C60 00446BA0  4B F8 3E 41 */	bl startScreen__Q23ebi13TScreenProgreFlUl
.L_80449C64:
/* 80449C64 00446BA4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449C68 00446BA8  D0 1F 00 50 */	stfs f0, 0x70(r31)
.L_80449C6C:
/* 80449C6C 00446BAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449C70 00446BB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449C74 00446BB4  7C 08 03 A6 */	mtlr r0
/* 80449C78 00446BB8  38 21 00 20 */	addi r1, r1, 0x20
/* 80449C7C 00446BBC  4E 80 00 20 */	blr 
.endfn updateProgressive__11BootSectionFv
.else
.fn updateProgressive__11BootSectionFv, global
/* 80449B00 00446A40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449B04 00446A44  7C 08 02 A6 */	mflr r0
/* 80449B08 00446A48  C0 22 26 68 */	lfs f1, lbl_805209C8@sda21(r2)
/* 80449B0C 00446A4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449B10 00446A50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449B14 00446A54  7C 7F 1B 78 */	mr r31, r3
/* 80449B18 00446A58  C0 43 00 50 */	lfs f2, 0x50(r3)
/* 80449B1C 00446A5C  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80449B20 00446A60  40 80 00 80 */	bge .L_80449BA0
/* 80449B24 00446A64  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449B28 00446A68  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449B2C 00446A6C  EC 02 00 2A */	fadds f0, f2, f0
/* 80449B30 00446A70  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 80449B34 00446A74  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80449B38 00446A78  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80449B3C 00446A7C  4C 41 13 82 */	cror 2, 1, 2
/* 80449B40 00446A80  40 82 00 0C */	bne .L_80449B4C
/* 80449B44 00446A84  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449B48 00446A88  4B F8 4A A9 */	bl setDecide__Q23ebi13TScreenProgreFv
.L_80449B4C:
/* 80449B4C 00446A8C  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449B50 00446A90  88 03 00 09 */	lbz r0, 9(r3)
/* 80449B54 00446A94  28 00 00 00 */	cmplwi r0, 0
/* 80449B58 00446A98  41 82 00 48 */	beq .L_80449BA0
/* 80449B5C 00446A9C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80449B60 00446AA0  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449B64 00446AA4  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 80449B68 00446AA8  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449B6C 00446AAC  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449B70 00446AB0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449B74 00446AB4  4C 41 13 82 */	cror 2, 1, 2
/* 80449B78 00446AB8  40 82 00 0C */	bne .L_80449B84
/* 80449B7C 00446ABC  EC 02 08 2A */	fadds f0, f2, f1
/* 80449B80 00446AC0  48 00 00 08 */	b .L_80449B88
.L_80449B84:
/* 80449B84 00446AC4  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449B88:
/* 80449B88 00446AC8  FC 00 00 1E */	fctiwz f0, f0
/* 80449B8C 00446ACC  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449B90 00446AD0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449B94 00446AD4  4B F8 42 F1 */	bl fadeout__Q23ebi13TScreenProgreFUl
/* 80449B98 00446AD8  C0 02 26 68 */	lfs f0, lbl_805209C8@sda21(r2)
/* 80449B9C 00446ADC  D0 1F 00 50 */	stfs f0, 0x50(r31)
.L_80449BA0:
/* 80449BA0 00446AE0  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449BA4 00446AE4  4B F8 43 35 */	bl isFinish__Q23ebi13TScreenProgreFv
/* 80449BA8 00446AE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80449BAC 00446AEC  41 82 00 C0 */	beq .L_80449C6C
/* 80449BB0 00446AF0  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449BB4 00446AF4  88 03 00 08 */	lbz r0, 8(r3)
/* 80449BB8 00446AF8  28 00 00 00 */	cmplwi r0, 0
/* 80449BBC 00446AFC  41 82 00 58 */	beq .L_80449C14
/* 80449BC0 00446B00  7F E3 FB 78 */	mr r3, r31
/* 80449BC4 00446B04  38 80 00 08 */	li r4, 8
/* 80449BC8 00446B08  48 00 03 09 */	bl setMode__11BootSectionFi
/* 80449BCC 00446B0C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449BD0 00446B10  38 80 00 02 */	li r4, 2
/* 80449BD4 00446B14  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449BD8 00446B18  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449BDC 00446B1C  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449BE0 00446B20  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449BE4 00446B24  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449BE8 00446B28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449BEC 00446B2C  4C 41 13 82 */	cror 2, 1, 2
/* 80449BF0 00446B30  40 82 00 0C */	bne .L_80449BFC
/* 80449BF4 00446B34  EC 02 08 2A */	fadds f0, f2, f1
/* 80449BF8 00446B38  48 00 00 08 */	b .L_80449C00
.L_80449BFC:
/* 80449BFC 00446B3C  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449C00:
/* 80449C00 00446B40  FC 00 00 1E */	fctiwz f0, f0
/* 80449C04 00446B44  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449C08 00446B48  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 80449C0C 00446B4C  4B F8 3E 95 */	bl startScreen__Q23ebi13TScreenProgreFlUl
/* 80449C10 00446B50  48 00 00 54 */	b .L_80449C64
.L_80449C14:
/* 80449C14 00446B54  7F E3 FB 78 */	mr r3, r31
/* 80449C18 00446B58  38 80 00 07 */	li r4, 7
/* 80449C1C 00446B5C  48 00 02 B5 */	bl setMode__11BootSectionFi
/* 80449C20 00446B60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449C24 00446B64  38 80 00 01 */	li r4, 1
/* 80449C28 00446B68  C0 42 26 98 */	lfs f2, lbl_805209F8@sda21(r2)
/* 80449C2C 00446B6C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80449C30 00446B70  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449C34 00446B74  EC 22 08 24 */	fdivs f1, f2, f1
/* 80449C38 00446B78  80 7F 00 D8 */	lwz r3, 0xd8(r31)
/* 80449C3C 00446B7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449C40 00446B80  4C 41 13 82 */	cror 2, 1, 2
/* 80449C44 00446B84  40 82 00 0C */	bne .L_80449C50
/* 80449C48 00446B88  EC 02 08 2A */	fadds f0, f2, f1
/* 80449C4C 00446B8C  48 00 00 08 */	b .L_80449C54
.L_80449C50:
/* 80449C50 00446B90  EC 01 10 28 */	fsubs f0, f1, f2
.L_80449C54:
/* 80449C54 00446B94  FC 00 00 1E */	fctiwz f0, f0
/* 80449C58 00446B98  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449C5C 00446B9C  80 A1 00 0C */	lwz r5, 0xc(r1)
/* 80449C60 00446BA0  4B F8 3E 41 */	bl startScreen__Q23ebi13TScreenProgreFlUl
.L_80449C64:
/* 80449C64 00446BA4  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449C68 00446BA8  D0 1F 00 50 */	stfs f0, 0x50(r31)
.L_80449C6C:
/* 80449C6C 00446BAC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449C70 00446BB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449C74 00446BB4  7C 08 03 A6 */	mtlr r0
/* 80449C78 00446BB8  38 21 00 20 */	addi r1, r1, 0x20
/* 80449C7C 00446BBC  4E 80 00 20 */	blr 
.endfn updateProgressive__11BootSectionFv
.endif

.if version == 0
.fn updateWaitProgressive__11BootSectionFv, global
/* 80449C80 00446BC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80449C84 00446BC4  7C 08 02 A6 */	mflr r0
/* 80449C88 00446BC8  C0 22 26 44 */	lfs f1, lbl_805209A4@sda21(r2)
/* 80449C8C 00446BCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80449C90 00446BD0  C0 02 27 04 */	lfs f0, lbl_80520A64@sda21(r2)
/* 80449C94 00446BD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80449C98 00446BD8  7C 7F 1B 78 */	mr r31, r3
/* 80449C9C 00446BDC  C0 43 00 50 */	lfs f2, 0x70(r3)
/* 80449CA0 00446BE0  EC 22 08 2A */	fadds f1, f2, f1
/* 80449CA4 00446BE4  D0 23 00 50 */	stfs f1, 0x70(r3)
/* 80449CA8 00446BE8  C0 23 00 50 */	lfs f1, 0x70(r3)
/* 80449CAC 00446BEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449CB0 00446BF0  40 81 00 20 */	ble .L_80449CD0
/* 80449CB4 00446BF4  38 60 00 00 */	li r3, 0
/* 80449CB8 00446BF8  4B C8 84 11 */	bl VISetBlack
/* 80449CBC 00446BFC  4B C8 82 69 */	bl VIFlush
/* 80449CC0 00446C00  4B C8 75 75 */	bl VIWaitForRetrace
/* 80449CC4 00446C04  7F E3 FB 78 */	mr r3, r31
/* 80449CC8 00446C08  38 80 00 09 */	li r4, 9
/* 80449CCC 00446C0C  48 00 02 05 */	bl setMode__11BootSectionFi
.L_80449CD0:
/* 80449CD0 00446C10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80449CD4 00446C14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80449CD8 00446C18  7C 08 03 A6 */	mtlr r0
/* 80449CDC 00446C1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80449CE0 00446C20  4E 80 00 20 */	blr 
.endfn updateWaitProgressive__11BootSectionFv
.else
.fn updateWaitProgressive__11BootSectionFv, global
/* 80449C80 00446BC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80449C84 00446BC4  7C 08 02 A6 */	mflr r0
/* 80449C88 00446BC8  C0 22 26 44 */	lfs f1, lbl_805209A4@sda21(r2)
/* 80449C8C 00446BCC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80449C90 00446BD0  C0 02 27 04 */	lfs f0, lbl_80520A64@sda21(r2)
/* 80449C94 00446BD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80449C98 00446BD8  7C 7F 1B 78 */	mr r31, r3
/* 80449C9C 00446BDC  C0 43 00 50 */	lfs f2, 0x50(r3)
/* 80449CA0 00446BE0  EC 22 08 2A */	fadds f1, f2, f1
/* 80449CA4 00446BE4  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 80449CA8 00446BE8  C0 23 00 50 */	lfs f1, 0x50(r3)
/* 80449CAC 00446BEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80449CB0 00446BF0  40 81 00 20 */	ble .L_80449CD0
/* 80449CB4 00446BF4  38 60 00 00 */	li r3, 0
/* 80449CB8 00446BF8  4B C8 84 11 */	bl VISetBlack
/* 80449CBC 00446BFC  4B C8 82 69 */	bl VIFlush
/* 80449CC0 00446C00  4B C8 75 75 */	bl VIWaitForRetrace
/* 80449CC4 00446C04  7F E3 FB 78 */	mr r3, r31
/* 80449CC8 00446C08  38 80 00 09 */	li r4, 9
/* 80449CCC 00446C0C  48 00 02 05 */	bl setMode__11BootSectionFi
.L_80449CD0:
/* 80449CD0 00446C10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80449CD4 00446C14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80449CD8 00446C18  7C 08 03 A6 */	mtlr r0
/* 80449CDC 00446C1C  38 21 00 10 */	addi r1, r1, 0x10
/* 80449CE0 00446C20  4E 80 00 20 */	blr 
.endfn updateWaitProgressive__11BootSectionFv
.endif

.if version == 0
.fn run__11BootSectionFv, global
/* 80449CE4 00446C24  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80449CE8 00446C28  7C 08 02 A6 */	mflr r0
/* 80449CEC 00446C2C  3C 80 80 4F */	lis r4, lbl_804ECFE8@ha
/* 80449CF0 00446C30  90 01 00 44 */	stw r0, 0x44(r1)
/* 80449CF4 00446C34  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80449CF8 00446C38  7C 7F 1B 78 */	mr r31, r3
/* 80449CFC 00446C3C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80449D00 00446C40  3B C4 CF E8 */	addi r30, r4, lbl_804ECFE8@l
/* 80449D04 00446C44  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80449D08 00446C48  4B BD 98 9D */	bl becomeCurrentHeap__7JKRHeapFv
/* 80449D0C 00446C4C  38 60 00 14 */	li r3, 0x14
/* 80449D10 00446C50  4B BD A1 95 */	bl __nw__FUl
/* 80449D14 00446C54  7C 65 1B 79 */	or. r5, r3, r3
/* 80449D18 00446C58  41 82 00 44 */	beq .L_80449D5C
/* 80449D1C 00446C5C  81 1E 00 8C */	lwz r8, 0x8c(r30)
/* 80449D20 00446C60  3C 60 80 4B */	lis r3, __vt__9IDelegate@ha
/* 80449D24 00446C64  80 FE 00 90 */	lwz r7, 0x90(r30)
/* 80449D28 00446C68  38 83 0F 00 */	addi r4, r3, __vt__9IDelegate@l
/* 80449D2C 00446C6C  80 DE 00 94 */	lwz r6, 0x94(r30)
/* 80449D30 00446C70  3C 60 80 4F */	lis r3, "__vt__23Delegate<11BootSection>"@ha
/* 80449D34 00446C74  38 03 D1 90 */	addi r0, r3, "__vt__23Delegate<11BootSection>"@l
/* 80449D38 00446C78  91 01 00 20 */	stw r8, 0x20(r1)
/* 80449D3C 00446C7C  90 85 00 00 */	stw r4, 0(r5)
/* 80449D40 00446C80  90 05 00 00 */	stw r0, 0(r5)
/* 80449D44 00446C84  93 E5 00 04 */	stw r31, 4(r5)
/* 80449D48 00446C88  91 05 00 08 */	stw r8, 8(r5)
/* 80449D4C 00446C8C  90 E5 00 0C */	stw r7, 0xc(r5)
/* 80449D50 00446C90  90 E1 00 24 */	stw r7, 0x24(r1)
/* 80449D54 00446C94  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80449D58 00446C98  90 C5 00 10 */	stw r6, 0x10(r5)
.L_80449D5C:
/* 80449D5C 00446C9C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449D60 00446CA0  38 9F 00 64 */	addi r4, r31, 0x84
/* 80449D64 00446CA4  4B FD 91 D5 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80449D68 00446CA8  80 DE 00 98 */	lwz r6, 0x98(r30)
/* 80449D6C 00446CAC  7F E3 FB 78 */	mr r3, r31
/* 80449D70 00446CB0  80 BE 00 9C */	lwz r5, 0x9c(r30)
/* 80449D74 00446CB4  38 81 00 14 */	addi r4, r1, 0x14
/* 80449D78 00446CB8  80 1E 00 A0 */	lwz r0, 0xa0(r30)
/* 80449D7C 00446CBC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80449D80 00446CC0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80449D84 00446CC4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80449D88 00446CC8  48 00 00 7D */	bl runWait__11BootSectionFM11BootSectionFPCvPv_b
/* 80449D8C 00446CCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449D90 00446CD0  4B FD 8F CD */	bl loadResourceFirst__6SystemFv
/* 80449D94 00446CD4  7F E3 FB 78 */	mr r3, r31
/* 80449D98 00446CD8  38 80 00 00 */	li r4, 0
/* 80449D9C 00446CDC  48 00 01 35 */	bl setMode__11BootSectionFi
/* 80449DA0 00446CE0  7F E3 FB 78 */	mr r3, r31
/* 80449DA4 00446CE4  4B FD 9D 21 */	bl run__7SectionFv
/* 80449DA8 00446CE8  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 80449DAC 00446CEC  38 80 00 00 */	li r4, 0
/* 80449DB0 00446CF0  48 00 BE F9 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 80449DB4 00446CF4  80 DE 00 A4 */	lwz r6, 0xa4(r30)
/* 80449DB8 00446CF8  7F E3 FB 78 */	mr r3, r31
/* 80449DBC 00446CFC  80 BE 00 A8 */	lwz r5, 0xa8(r30)
/* 80449DC0 00446D00  38 81 00 08 */	addi r4, r1, 8
/* 80449DC4 00446D04  80 1E 00 AC */	lwz r0, 0xac(r30)
/* 80449DC8 00446D08  90 C1 00 08 */	stw r6, 8(r1)
/* 80449DCC 00446D0C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80449DD0 00446D10  90 01 00 10 */	stw r0, 0x10(r1)
/* 80449DD4 00446D14  48 00 00 31 */	bl runWait__11BootSectionFM11BootSectionFPCvPv_b
/* 80449DD8 00446D18  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449DDC 00446D1C  38 80 00 01 */	li r4, 1
/* 80449DE0 00446D20  4B FD 95 89 */	bl heapStatusDump__6SystemFb
/* 80449DE4 00446D24  38 00 00 00 */	li r0, 0
/* 80449DE8 00446D28  98 1F 00 34 */	stb r0, 0x34(r31)
/* 80449DEC 00446D2C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80449DF0 00446D30  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80449DF4 00446D34  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80449DF8 00446D38  7C 08 03 A6 */	mtlr r0
/* 80449DFC 00446D3C  38 21 00 40 */	addi r1, r1, 0x40
/* 80449E00 00446D40  4E 80 00 20 */	blr 
.endfn run__11BootSectionFv
.else
.fn run__11BootSectionFv, global
/* 80449CE4 00446C24  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80449CE8 00446C28  7C 08 02 A6 */	mflr r0
/* 80449CEC 00446C2C  3C 80 80 4F */	lis r4, lbl_804ECFE8@ha
/* 80449CF0 00446C30  90 01 00 44 */	stw r0, 0x44(r1)
/* 80449CF4 00446C34  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80449CF8 00446C38  7C 7F 1B 78 */	mr r31, r3
/* 80449CFC 00446C3C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 80449D00 00446C40  3B C4 CF E8 */	addi r30, r4, lbl_804ECFE8@l
/* 80449D04 00446C44  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80449D08 00446C48  4B BD 98 9D */	bl becomeCurrentHeap__7JKRHeapFv
/* 80449D0C 00446C4C  38 60 00 14 */	li r3, 0x14
/* 80449D10 00446C50  4B BD A1 95 */	bl __nw__FUl
/* 80449D14 00446C54  7C 65 1B 79 */	or. r5, r3, r3
/* 80449D18 00446C58  41 82 00 44 */	beq .L_80449D5C
/* 80449D1C 00446C5C  81 1E 00 8C */	lwz r8, 0x8c(r30)
/* 80449D20 00446C60  3C 60 80 4B */	lis r3, __vt__9IDelegate@ha
/* 80449D24 00446C64  80 FE 00 90 */	lwz r7, 0x90(r30)
/* 80449D28 00446C68  38 83 0F 00 */	addi r4, r3, __vt__9IDelegate@l
/* 80449D2C 00446C6C  80 DE 00 94 */	lwz r6, 0x94(r30)
/* 80449D30 00446C70  3C 60 80 4F */	lis r3, "__vt__23Delegate<11BootSection>"@ha
/* 80449D34 00446C74  38 03 D1 90 */	addi r0, r3, "__vt__23Delegate<11BootSection>"@l
/* 80449D38 00446C78  91 01 00 20 */	stw r8, 0x20(r1)
/* 80449D3C 00446C7C  90 85 00 00 */	stw r4, 0(r5)
/* 80449D40 00446C80  90 05 00 00 */	stw r0, 0(r5)
/* 80449D44 00446C84  93 E5 00 04 */	stw r31, 4(r5)
/* 80449D48 00446C88  91 05 00 08 */	stw r8, 8(r5)
/* 80449D4C 00446C8C  90 E5 00 0C */	stw r7, 0xc(r5)
/* 80449D50 00446C90  90 E1 00 24 */	stw r7, 0x24(r1)
/* 80449D54 00446C94  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80449D58 00446C98  90 C5 00 10 */	stw r6, 0x10(r5)
.L_80449D5C:
/* 80449D5C 00446C9C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449D60 00446CA0  38 9F 00 64 */	addi r4, r31, 0x64
/* 80449D64 00446CA4  4B FD 91 D5 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 80449D68 00446CA8  80 DE 00 98 */	lwz r6, 0x98(r30)
/* 80449D6C 00446CAC  7F E3 FB 78 */	mr r3, r31
/* 80449D70 00446CB0  80 BE 00 9C */	lwz r5, 0x9c(r30)
/* 80449D74 00446CB4  38 81 00 14 */	addi r4, r1, 0x14
/* 80449D78 00446CB8  80 1E 00 A0 */	lwz r0, 0xa0(r30)
/* 80449D7C 00446CBC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80449D80 00446CC0  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80449D84 00446CC4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80449D88 00446CC8  48 00 00 7D */	bl runWait__11BootSectionFM11BootSectionFPCvPv_b
/* 80449D8C 00446CCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449D90 00446CD0  4B FD 8F CD */	bl loadResourceFirst__6SystemFv
/* 80449D94 00446CD4  7F E3 FB 78 */	mr r3, r31
/* 80449D98 00446CD8  38 80 00 00 */	li r4, 0
/* 80449D9C 00446CDC  48 00 01 35 */	bl setMode__11BootSectionFi
/* 80449DA0 00446CE0  7F E3 FB 78 */	mr r3, r31
/* 80449DA4 00446CE4  4B FD 9D 21 */	bl run__7SectionFv
/* 80449DA8 00446CE8  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 80449DAC 00446CEC  38 80 00 00 */	li r4, 0
/* 80449DB0 00446CF0  48 00 BE F9 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 80449DB4 00446CF4  80 DE 00 A4 */	lwz r6, 0xa4(r30)
/* 80449DB8 00446CF8  7F E3 FB 78 */	mr r3, r31
/* 80449DBC 00446CFC  80 BE 00 A8 */	lwz r5, 0xa8(r30)
/* 80449DC0 00446D00  38 81 00 08 */	addi r4, r1, 8
/* 80449DC4 00446D04  80 1E 00 AC */	lwz r0, 0xac(r30)
/* 80449DC8 00446D08  90 C1 00 08 */	stw r6, 8(r1)
/* 80449DCC 00446D0C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80449DD0 00446D10  90 01 00 10 */	stw r0, 0x10(r1)
/* 80449DD4 00446D14  48 00 00 31 */	bl runWait__11BootSectionFM11BootSectionFPCvPv_b
/* 80449DD8 00446D18  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449DDC 00446D1C  38 80 00 01 */	li r4, 1
/* 80449DE0 00446D20  4B FD 95 89 */	bl heapStatusDump__6SystemFb
/* 80449DE4 00446D24  38 00 00 00 */	li r0, 0
/* 80449DE8 00446D28  98 1F 00 34 */	stb r0, 0x34(r31)
/* 80449DEC 00446D2C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80449DF0 00446D30  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80449DF4 00446D34  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 80449DF8 00446D38  7C 08 03 A6 */	mtlr r0
/* 80449DFC 00446D3C  38 21 00 40 */	addi r1, r1, 0x40
/* 80449E00 00446D40  4E 80 00 20 */	blr 
.endfn run__11BootSectionFv
.endif

.fn runWait__11BootSectionFM11BootSectionFPCvPv_b, global
/* 80449E04 00446D44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449E08 00446D48  7C 08 02 A6 */	mflr r0
/* 80449E0C 00446D4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449E10 00446D50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449E14 00446D54  3B E0 00 01 */	li r31, 1
/* 80449E18 00446D58  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80449E1C 00446D5C  7C 9E 23 78 */	mr r30, r4
/* 80449E20 00446D60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80449E24 00446D64  7C 7D 1B 78 */	mr r29, r3
/* 80449E28 00446D68  48 00 00 54 */	b .L_80449E7C
.L_80449E2C:
/* 80449E2C 00446D6C  7F A3 EB 78 */	mr r3, r29
/* 80449E30 00446D70  4B FD A1 9D */	bl beginFrame__7SectionFv
/* 80449E34 00446D74  7F A3 EB 78 */	mr r3, r29
/* 80449E38 00446D78  4B FD A1 DD */	bl beginRender__7SectionFv
/* 80449E3C 00446D7C  7F A3 EB 78 */	mr r3, r29
/* 80449E40 00446D80  80 9D 00 2C */	lwz r4, 0x2c(r29)
/* 80449E44 00446D84  81 9D 00 00 */	lwz r12, 0(r29)
/* 80449E48 00446D88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80449E4C 00446D8C  7D 89 03 A6 */	mtctr r12
/* 80449E50 00446D90  4E 80 04 21 */	bctrl 
/* 80449E54 00446D94  7F A3 EB 78 */	mr r3, r29
/* 80449E58 00446D98  4B FD A1 E1 */	bl endRender__7SectionFv
/* 80449E5C 00446D9C  7F A3 EB 78 */	mr r3, r29
/* 80449E60 00446DA0  7F CC F3 78 */	mr r12, r30
/* 80449E64 00446DA4  4B C7 7C C1 */	bl __ptmf_scall
/* 80449E68 00446DA8  60 00 00 00 */	nop 
/* 80449E6C 00446DAC  7C 60 1B 78 */	mr r0, r3
/* 80449E70 00446DB0  7F A3 EB 78 */	mr r3, r29
/* 80449E74 00446DB4  7C 1F 03 78 */	mr r31, r0
/* 80449E78 00446DB8  4B FD A1 79 */	bl endFrame__7SectionFv
.L_80449E7C:
/* 80449E7C 00446DBC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80449E80 00446DC0  40 82 FF AC */	bne .L_80449E2C
/* 80449E84 00446DC4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449E88 00446DC8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449E8C 00446DCC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80449E90 00446DD0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80449E94 00446DD4  7C 08 03 A6 */	mtlr r0
/* 80449E98 00446DD8  38 21 00 20 */	addi r1, r1, 0x20
/* 80449E9C 00446DDC  4E 80 00 20 */	blr 
.endfn runWait__11BootSectionFM11BootSectionFPCvPv_b

.fn waitLoadResource__11BootSectionFv, global
/* 80449EA0 00446DE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80449EA4 00446DE4  7C 08 02 A6 */	mflr r0
/* 80449EA8 00446DE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80449EAC 00446DEC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449EB0 00446DF0  4B FD 97 85 */	bl dvdLoadSyncAllNoBlock__6SystemFv
/* 80449EB4 00446DF4  7C 03 00 D0 */	neg r0, r3
/* 80449EB8 00446DF8  7C 00 1B 78 */	or r0, r0, r3
/* 80449EBC 00446DFC  54 03 0F FE */	srwi r3, r0, 0x1f
/* 80449EC0 00446E00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80449EC4 00446E04  7C 08 03 A6 */	mtlr r0
/* 80449EC8 00446E08  38 21 00 10 */	addi r1, r1, 0x10
/* 80449ECC 00446E0C  4E 80 00 20 */	blr 
.endfn waitLoadResource__11BootSectionFv

.if version == 0
.fn setMode__11BootSectionFi, global
/* 80449ED0 00446E10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449ED4 00446E14  7C 08 02 A6 */	mflr r0
/* 80449ED8 00446E18  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449EDC 00446E1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449EE0 00446E20  7C 7F 1B 78 */	mr r31, r3
/* 80449EE4 00446E24  80 03 00 48 */	lwz r0, 0x68(r3)
/* 80449EE8 00446E28  7C 00 20 00 */	cmpw r0, r4
/* 80449EEC 00446E2C  41 82 00 54 */	beq .L_80449F40
/* 80449EF0 00446E30  90 9F 00 48 */	stw r4, 0x68(r31)
/* 80449EF4 00446E34  80 1F 00 48 */	lwz r0, 0x68(r31)
/* 80449EF8 00446E38  2C 00 00 04 */	cmpwi r0, 4
/* 80449EFC 00446E3C  41 82 00 08 */	beq .L_80449F04
/* 80449F00 00446E40  48 00 00 40 */	b .L_80449F40
.L_80449F04:
/* 80449F04 00446E44  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449F08 00446E48  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80449F0C 00446E4C  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 80449F10 00446E50  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449F14 00446E54  80 64 00 04 */	lwz r3, 4(r4)
/* 80449F18 00446E58  EC 01 00 24 */	fdivs f0, f1, f0
/* 80449F1C 00446E5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80449F20 00446E60  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80449F24 00446E64  FC 00 00 1E */	fctiwz f0, f0
/* 80449F28 00446E68  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449F2C 00446E6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449F30 00446E70  7D 89 03 A6 */	mtctr r12
/* 80449F34 00446E74  4E 80 04 21 */	bctrl 
/* 80449F38 00446E78  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449F3C 00446E7C  D0 1F 00 50 */	stfs f0, 0x70(r31)
.L_80449F40:
/* 80449F40 00446E80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449F44 00446E84  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449F48 00446E88  7C 08 03 A6 */	mtlr r0
/* 80449F4C 00446E8C  38 21 00 20 */	addi r1, r1, 0x20
/* 80449F50 00446E90  4E 80 00 20 */	blr 
.endfn setMode__11BootSectionFi
.else
.fn setMode__11BootSectionFi, global
/* 80449ED0 00446E10  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449ED4 00446E14  7C 08 02 A6 */	mflr r0
/* 80449ED8 00446E18  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449EDC 00446E1C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449EE0 00446E20  7C 7F 1B 78 */	mr r31, r3
/* 80449EE4 00446E24  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80449EE8 00446E28  7C 00 20 00 */	cmpw r0, r4
/* 80449EEC 00446E2C  41 82 00 54 */	beq .L_80449F40
/* 80449EF0 00446E30  90 9F 00 48 */	stw r4, 0x48(r31)
/* 80449EF4 00446E34  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 80449EF8 00446E38  2C 00 00 04 */	cmpwi r0, 4
/* 80449EFC 00446E3C  41 82 00 08 */	beq .L_80449F04
/* 80449F00 00446E40  48 00 00 40 */	b .L_80449F40
.L_80449F04:
/* 80449F04 00446E44  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449F08 00446E48  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80449F0C 00446E4C  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 80449F10 00446E50  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449F14 00446E54  80 64 00 04 */	lwz r3, 4(r4)
/* 80449F18 00446E58  EC 01 00 24 */	fdivs f0, f1, f0
/* 80449F1C 00446E5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80449F20 00446E60  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80449F24 00446E64  FC 00 00 1E */	fctiwz f0, f0
/* 80449F28 00446E68  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449F2C 00446E6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449F30 00446E70  7D 89 03 A6 */	mtctr r12
/* 80449F34 00446E74  4E 80 04 21 */	bctrl 
/* 80449F38 00446E78  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449F3C 00446E7C  D0 1F 00 50 */	stfs f0, 0x50(r31)
.L_80449F40:
/* 80449F40 00446E80  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449F44 00446E84  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449F48 00446E88  7C 08 03 A6 */	mtlr r0
/* 80449F4C 00446E8C  38 21 00 20 */	addi r1, r1, 0x20
/* 80449F50 00446E90  4E 80 00 20 */	blr 
.endfn setMode__11BootSectionFi
.endif

.if version == 0
.fn setModeEpilepsy__11BootSectionFv, global
/* 80449F54 00446E94  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449F58 00446E98  7C 08 02 A6 */	mflr r0
/* 80449F5C 00446E9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449F60 00446EA0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449F64 00446EA4  7C 7F 1B 78 */	mr r31, r3
/* 80449F68 00446EA8  80 03 00 48 */	lwz r0, 0x68(r3)
/* 80449F6C 00446EAC  2C 00 00 02 */	cmpwi r0, 2
/* 80449F70 00446EB0  41 82 00 58 */	beq .L_80449FC8
/* 80449F74 00446EB4  38 00 00 02 */	li r0, 2
/* 80449F78 00446EB8  90 1F 00 48 */	stw r0, 0x68(r31)
/* 80449F7C 00446EBC  80 1F 00 48 */	lwz r0, 0x68(r31)
/* 80449F80 00446EC0  2C 00 00 04 */	cmpwi r0, 4
/* 80449F84 00446EC4  41 82 00 08 */	beq .L_80449F8C
/* 80449F88 00446EC8  48 00 00 40 */	b .L_80449FC8
.L_80449F8C:
/* 80449F8C 00446ECC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449F90 00446ED0  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80449F94 00446ED4  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 80449F98 00446ED8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449F9C 00446EDC  80 64 00 04 */	lwz r3, 4(r4)
/* 80449FA0 00446EE0  EC 01 00 24 */	fdivs f0, f1, f0
/* 80449FA4 00446EE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80449FA8 00446EE8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80449FAC 00446EEC  FC 00 00 1E */	fctiwz f0, f0
/* 80449FB0 00446EF0  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449FB4 00446EF4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449FB8 00446EF8  7D 89 03 A6 */	mtctr r12
/* 80449FBC 00446EFC  4E 80 04 21 */	bctrl 
/* 80449FC0 00446F00  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449FC4 00446F04  D0 1F 00 50 */	stfs f0, 0x70(r31)
.L_80449FC8:
/* 80449FC8 00446F08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449FCC 00446F0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449FD0 00446F10  7C 08 03 A6 */	mtlr r0
/* 80449FD4 00446F14  38 21 00 20 */	addi r1, r1, 0x20
/* 80449FD8 00446F18  4E 80 00 20 */	blr 
.endfn setModeEpilepsy__11BootSectionFv
.else
.fn setModeEpilepsy__11BootSectionFv, global
/* 80449F54 00446E94  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80449F58 00446E98  7C 08 02 A6 */	mflr r0
/* 80449F5C 00446E9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80449F60 00446EA0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80449F64 00446EA4  7C 7F 1B 78 */	mr r31, r3
/* 80449F68 00446EA8  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80449F6C 00446EAC  2C 00 00 02 */	cmpwi r0, 2
/* 80449F70 00446EB0  41 82 00 58 */	beq .L_80449FC8
/* 80449F74 00446EB4  38 00 00 02 */	li r0, 2
/* 80449F78 00446EB8  90 1F 00 48 */	stw r0, 0x48(r31)
/* 80449F7C 00446EBC  80 1F 00 48 */	lwz r0, 0x48(r31)
/* 80449F80 00446EC0  2C 00 00 04 */	cmpwi r0, 4
/* 80449F84 00446EC4  41 82 00 08 */	beq .L_80449F8C
/* 80449F88 00446EC8  48 00 00 40 */	b .L_80449FC8
.L_80449F8C:
/* 80449F8C 00446ECC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80449F90 00446ED0  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 80449F94 00446ED4  C0 22 26 98 */	lfs f1, lbl_805209F8@sda21(r2)
/* 80449F98 00446ED8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80449F9C 00446EDC  80 64 00 04 */	lwz r3, 4(r4)
/* 80449FA0 00446EE0  EC 01 00 24 */	fdivs f0, f1, f0
/* 80449FA4 00446EE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80449FA8 00446EE8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80449FAC 00446EEC  FC 00 00 1E */	fctiwz f0, f0
/* 80449FB0 00446EF0  D8 01 00 08 */	stfd f0, 8(r1)
/* 80449FB4 00446EF4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80449FB8 00446EF8  7D 89 03 A6 */	mtctr r12
/* 80449FBC 00446EFC  4E 80 04 21 */	bctrl 
/* 80449FC0 00446F00  C0 02 26 40 */	lfs f0, lbl_805209A0@sda21(r2)
/* 80449FC4 00446F04  D0 1F 00 50 */	stfs f0, 0x50(r31)
.L_80449FC8:
/* 80449FC8 00446F08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80449FCC 00446F0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80449FD0 00446F10  7C 08 03 A6 */	mtlr r0
/* 80449FD4 00446F14  38 21 00 20 */	addi r1, r1, 0x20
/* 80449FD8 00446F18  4E 80 00 20 */	blr 
.endfn setModeEpilepsy__11BootSectionFv
.endif

.fn forceReset__11BootSectionFv, weak
/* 80449FDC 00446F1C  38 60 00 00 */	li r3, 0
/* 80449FE0 00446F20  4E 80 00 20 */	blr 
.endfn forceReset__11BootSectionFv

.fn "invoke__23Delegate<11BootSection>Fv", weak
/* 80449FE4 00446F24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80449FE8 00446F28  7C 08 02 A6 */	mflr r0
/* 80449FEC 00446F2C  7C 64 1B 78 */	mr r4, r3
/* 80449FF0 00446F30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80449FF4 00446F34  39 84 00 08 */	addi r12, r4, 8
/* 80449FF8 00446F38  80 63 00 04 */	lwz r3, 4(r3)
/* 80449FFC 00446F3C  4B C7 7B 29 */	bl __ptmf_scall
/* 8044A000 00446F40  60 00 00 00 */	nop 
/* 8044A004 00446F44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044A008 00446F48  7C 08 03 A6 */	mtlr r0
/* 8044A00C 00446F4C  38 21 00 10 */	addi r1, r1, 0x10
/* 8044A010 00446F50  4E 80 00 20 */	blr 
.endfn "invoke__23Delegate<11BootSection>Fv"

.fn __sinit_bootSection_cpp, local
/* 8044A014 00446F54  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8044A018 00446F58  38 00 FF FF */	li r0, -1
/* 8044A01C 00446F5C  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8044A020 00446F60  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8044A024 00446F64  90 0D 9C 10 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8044A028 00446F68  D4 03 CF F8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8044A02C 00446F6C  D0 0D 9C 14 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8044A030 00446F70  D0 03 00 04 */	stfs f0, 4(r3)
/* 8044A034 00446F74  D0 03 00 08 */	stfs f0, 8(r3)
/* 8044A038 00446F78  4E 80 00 20 */	blr 
.endfn __sinit_bootSection_cpp
