.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_titleSection_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8049B100, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_8049B100
.balign 4
.obj lbl_8049B10C, local
	.asciz "titleSection"
.endobj lbl_8049B10C
.balign 4
.obj lbl_8049B11C, local
	.asciz "PSGame.h"
.endobj lbl_8049B11C
.balign 4
.obj lbl_8049B128, local
	.asciz "P2Assert"
.endobj lbl_8049B128
.balign 4
.obj lbl_8049B134, local
	.asciz "titleSection.cpp"
.endobj lbl_8049B134
.balign 4
.obj lbl_8049B148, local
	.asciz "game2DMgr::reset error\n"
.endobj lbl_8049B148
.balign 4
.obj lbl_8049B160, local
	.asciz "titleSection::loadResident"
.endobj lbl_8049B160
.balign 4
.obj lbl_8049B17C, local
	.asciz "/user/Kando/piki/pikis.szs"
.endobj lbl_8049B17C
.balign 4
.obj lbl_8049B198, local
	.asciz "%s : mount failed !!\n"
.endobj lbl_8049B198
.balign 4
.obj lbl_8049B1B0, local
	.asciz "user/Kando/onyon/arc.szs"
.endobj lbl_8049B1B0
.balign 4
.obj lbl_8049B1CC, local
	.asciz "TitleSection::init"
.endobj lbl_8049B1CC
.balign 4
.obj lbl_8049B1E0, local
	.asciz "JMANewSinTable"
.endobj lbl_8049B1E0
.balign 4
.obj lbl_8049B1F0, local # Shift-JIS
	.4byte 0x835E8343
	.4byte 0x8367838B
	.4byte 0x835A834E
	.4byte 0x83568387
	.4byte 0x83930000
.endobj lbl_8049B1F0
.balign 4
.obj lbl_8049B204, local
	.asciz "frameBuffer"
.endobj lbl_8049B204
.balign 4
.obj lbl_8049B210, local
	.asciz "PSCommon.h"
.endobj lbl_8049B210
.balign 4
.obj lbl_8049B21C, local
	.asciz "code size           %dKB\n"
.endobj lbl_8049B21C
.balign 4
.obj lbl_8049B238, local
	.asciz "GameSystemHeap Free %dKB\n"
.endobj lbl_8049B238
.balign 4
.obj lbl_8049B254, local
	.asciz "PSScene.h"
.endobj lbl_8049B254
.balign 4
.obj lbl_8049B260, local
	.asciz "TitleSection::loadResource"
.endobj lbl_8049B260
.balign 4
.obj lbl_8049B27C, local
	.asciz "TParticle2dMgr"
.endobj lbl_8049B27C
.balign 4
.obj lbl_8049B28C, local
	.asciz "user/Ebisawa/effect/eff2d_game2d.jpc"
.endobj lbl_8049B28C
.balign 4
.obj lbl_8049B2B4, local
	.asciz "titleMgr"
.endobj lbl_8049B2B4
.balign 4
.obj lbl_8049B2C0, local
	.asciz "optionMgr"
.endobj lbl_8049B2C0
.balign 4
.obj lbl_8049B2CC, local
	.asciz "hiscoreTexture"
.endobj lbl_8049B2CC
.balign 4
.obj lbl_8049B2DC, local
	.asciz "res_hiscoreTexture.szs"
.endobj lbl_8049B2DC
.balign 4
.obj lbl_8049B2F4, local
	.asciz "arcName = %s\n"
.endobj lbl_8049B2F4
.balign 4
.obj lbl_8049B304, local
	.asciz "omakeMgr"
.endobj lbl_8049B304
.balign 4
.obj lbl_8049B310, local
	.asciz "TitleDummySection::loadResource"
.endobj lbl_8049B310
.balign 4
.obj lbl_8049B330, local
	.asciz "/user/Yamashita/testResource/tex"
.endobj lbl_8049B330
.balign 4
.obj lbl_8049B354, local
	.asciz "titlelogo.bti"
.endobj lbl_8049B354

.section .data, "wa"	# 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj lbl_804ED1B4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte loadResident__Q25Title7SectionFv
.endobj lbl_804ED1B4
.obj lbl_804ED1C0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte menuCancel__Q25Title7SectionFR4Menu
.endobj lbl_804ED1C0
.obj lbl_804ED1CC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte menuSelect__Q25Title7SectionFR4Menu
.endobj lbl_804ED1CC
.obj lbl_804ED1D8, local
	.4byte .L_8044B290
	.4byte .L_8044AF78
	.4byte .L_8044AF84
	.4byte .L_8044AF90
	.4byte .L_8044AF9C
	.4byte .L_8044B088
	.4byte .L_8044B1B4
.endobj lbl_804ED1D8
.obj lbl_804ED1F4, local
	.4byte 0x00000000
	.4byte 0x00000050
	.4byte 0x00000000
.endobj lbl_804ED1F4
.obj lbl_804ED200, local
	.4byte .L_8044C208
	.4byte .L_8044C214
	.4byte .L_8044C220
	.4byte .L_8044C22C
	.4byte .L_8044C238
	.4byte .L_8044C244
	.4byte .L_8044C250
	.4byte .L_8044C25C
	.4byte .L_8044C268
	.4byte .L_8044C274
	.4byte .L_8044C280
	.4byte .L_8044C28C
.endobj lbl_804ED200
.obj "__vt__34Delegate1<Q25Title7Section,R4Menu>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__34Delegate1<Q25Title7Section,R4Menu>FR4Menu"
.endobj "__vt__34Delegate1<Q25Title7Section,R4Menu>"
.obj "__vt__18IDelegate1<R4Menu>", weak
	.4byte 0
	.4byte 0
	.4byte 0
.endobj "__vt__18IDelegate1<R4Menu>"
.obj __vt__11HIORootNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__11HIORootNodeFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__11HIORootNode
.obj __vt__Q25Title7Section, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q25Title7SectionFv
	.4byte run__Q25Title7SectionFv
	.4byte update__7SectionFv
	.4byte draw__7SectionFR8Graphics
	.4byte init__Q25Title7SectionFv
	.4byte drawInit__7SectionFR8Graphics
	.4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
	.4byte doExit__Q25Title7SectionFv
	.4byte forceFinish__7SectionFv
	.4byte forceReset__Q25Title7SectionFv
	.4byte getCurrentSection__7SectionFv
	.4byte doLoadingStart__Q25Title7SectionFv
	.4byte doLoading__Q25Title7SectionFv
	.4byte doUpdate__Q25Title7SectionFv
	.4byte doDraw__Q25Title7SectionFR8Graphics
	.4byte isFinishable__Q25Title7SectionFv
	.4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
	.4byte refreshHIO__Q24Game14BaseHIOSectionFv
	.4byte loadResource__Q25Title7SectionFv
.endobj __vt__Q25Title7Section
.obj "__vt__26Delegate<Q25Title7Section>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__26Delegate<Q25Title7Section>Fv"
.endobj "__vt__26Delegate<Q25Title7Section>"

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj "sMovieIndex__26@unnamed@titleSection_cpp@", local
	.byte 0x0
	.byte 0x2
	.byte 0x4
	.byte 0x01
	.byte 0x03
	.byte 0x0B
	.byte 0x0B
.endobj "sMovieIndex__26@unnamed@titleSection_cpp@"
.obj "sSeasonIndex__26@unnamed@titleSection_cpp@", local
	.byte 0xFF
.endobj "sSeasonIndex__26@unnamed@titleSection_cpp@"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80520A80, local
	.float 0.0
.endobj lbl_80520A80
.balign 4
.obj lbl_80520A84, local
	.asciz "NO NAME"
.endobj lbl_80520A84
.balign 8
.obj lbl_80520A90, local
	.8byte 0x4330000080000000
.endobj lbl_80520A90
.obj lbl_80520A98, local
	.float 0.5
.endobj lbl_80520A98
.obj lbl_80520A9C, local
	.float 43.0
.endobj lbl_80520A9C
.obj lbl_80520AA0, local
	.float 32768.0
.endobj lbl_80520AA0
.obj lbl_80520AA4, local
	.float 12.0
.endobj lbl_80520AA4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.if version == 0
.fn __ct__Q25Title7SectionFP7JKRHeap, global
/* 8044A03C 00446F7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044A040 00446F80  7C 08 02 A6 */	mflr r0
/* 8044A044 00446F84  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044A048 00446F88  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044A04C 00446F8C  7C 7F 1B 78 */	mr r31, r3
/* 8044A050 00446F90  4B D1 AB A1 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 8044A054 00446F94  3C 60 80 4F */	lis r3, __vt__Q25Title7Section@ha
/* 8044A058 00446F98  38 00 00 00 */	li r0, 0
/* 8044A05C 00446F9C  38 63 D2 58 */	addi r3, r3, __vt__Q25Title7Section@l
/* 8044A060 00446FA0  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044A064 00446FA4  90 7F 00 00 */	stw r3, 0(r31)
/* 8044A068 00446FA8  38 7F 00 54 */	addi r3, r31, 0x74
/* 8044A06C 00446FAC  90 1F 00 48 */	stw r0, 0x68(r31)
/* 8044A070 00446FB0  D0 1F 00 4C */	stfs f0, 0x6c(r31)
/* 8044A074 00446FB4  4B FD A7 A5 */	bl __ct__16DvdThreadCommandFv
/* 8044A078 00446FB8  38 00 00 00 */	li r0, 0
/* 8044A07C 00446FBC  38 7F 00 CC */	addi r3, r31, 0xec
/* 8044A080 00446FC0  90 1F 00 C0 */	stw r0, 0xe0(r31)
/* 8044A084 00446FC4  4B FA 00 ED */	bl __ct__Q23ebi13TMainTitleMgrFv
/* 8044A088 00446FC8  38 7F 17 30 */	addi r3, r31, 0x1750
/* 8044A08C 00446FCC  4B F8 53 59 */	bl __ct__Q33ebi6Option4TMgrFv
/* 8044A090 00446FD0  38 7F 26 78 */	addi r3, r31, 0x2698
/* 8044A094 00446FD4  4B FA 53 95 */	bl __ct__Q33ebi5Omake4TMgrFv
/* 8044A098 00446FD8  38 00 FF FF */	li r0, -1
/* 8044A09C 00446FDC  38 60 00 14 */	li r3, 0x14
/* 8044A0A0 00446FE0  90 1F 2F 3C */	stw r0, 0x2f5c(r31)
/* 8044A0A4 00446FE4  4B BD 9E 01 */	bl __nw__FUl
/* 8044A0A8 00446FE8  28 03 00 00 */	cmplwi r3, 0
/* 8044A0AC 00446FEC  41 82 00 4C */	beq .L_8044A0F8
/* 8044A0B0 00446FF0  3C 80 80 4F */	lis r4, lbl_804ED1B4@ha
/* 8044A0B4 00446FF4  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 8044A0B8 00446FF8  39 04 D1 B4 */	addi r8, r4, lbl_804ED1B4@l
/* 8044A0BC 00446FFC  3C 80 80 4F */	lis r4, "__vt__26Delegate<Q25Title7Section>"@ha
/* 8044A0C0 00447000  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044A0C4 00447004  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 8044A0C8 00447008  80 C8 00 04 */	lwz r6, 4(r8)
/* 8044A0CC 0044700C  38 04 D2 AC */	addi r0, r4, "__vt__26Delegate<Q25Title7Section>"@l
/* 8044A0D0 00447010  80 88 00 08 */	lwz r4, 8(r8)
/* 8044A0D4 00447014  90 E1 00 08 */	stw r7, 8(r1)
/* 8044A0D8 00447018  90 A3 00 00 */	stw r5, 0(r3)
/* 8044A0DC 0044701C  90 03 00 00 */	stw r0, 0(r3)
/* 8044A0E0 00447020  93 E3 00 04 */	stw r31, 4(r3)
/* 8044A0E4 00447024  90 E3 00 08 */	stw r7, 8(r3)
/* 8044A0E8 00447028  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8044A0EC 0044702C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8044A0F0 00447030  90 81 00 10 */	stw r4, 0x10(r1)
/* 8044A0F4 00447034  90 83 00 10 */	stw r4, 0x10(r3)
.L_8044A0F8:
/* 8044A0F8 00447038  90 7F 00 C0 */	stw r3, 0xe0(r31)
/* 8044A0FC 0044703C  4B EC 55 6D */	bl create__Q22og5Lib2DFv
/* 8044A100 00447040  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 8044A104 00447044  38 80 00 01 */	li r4, 1
/* 8044A108 00447048  48 00 BB A1 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 8044A10C 0044704C  38 00 00 00 */	li r0, 0
/* 8044A110 00447050  7F E3 FB 78 */	mr r3, r31
/* 8044A114 00447054  98 1F 2F 44 */	stb r0, 0x2f64(r31)
/* 8044A118 00447058  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044A11C 0044705C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044A120 00447060  7C 08 03 A6 */	mtlr r0
/* 8044A124 00447064  38 21 00 20 */	addi r1, r1, 0x20
/* 8044A128 00447068  4E 80 00 20 */	blr 
.endfn __ct__Q25Title7SectionFP7JKRHeap
.else
.fn __ct__Q25Title7SectionFP7JKRHeap, global
/* 8044A03C 00446F7C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044A040 00446F80  7C 08 02 A6 */	mflr r0
/* 8044A044 00446F84  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044A048 00446F88  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044A04C 00446F8C  7C 7F 1B 78 */	mr r31, r3
/* 8044A050 00446F90  4B D1 AB A1 */	bl __ct__Q24Game14BaseHIOSectionFP7JKRHeap
/* 8044A054 00446F94  3C 60 80 4F */	lis r3, __vt__Q25Title7Section@ha
/* 8044A058 00446F98  38 00 00 00 */	li r0, 0
/* 8044A05C 00446F9C  38 63 D2 58 */	addi r3, r3, __vt__Q25Title7Section@l
/* 8044A060 00446FA0  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044A064 00446FA4  90 7F 00 00 */	stw r3, 0(r31)
/* 8044A068 00446FA8  38 7F 00 54 */	addi r3, r31, 0x54
/* 8044A06C 00446FAC  90 1F 00 48 */	stw r0, 0x48(r31)
/* 8044A070 00446FB0  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8044A074 00446FB4  4B FD A7 A5 */	bl __ct__16DvdThreadCommandFv
/* 8044A078 00446FB8  38 00 00 00 */	li r0, 0
/* 8044A07C 00446FBC  38 7F 00 CC */	addi r3, r31, 0xcc
/* 8044A080 00446FC0  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 8044A084 00446FC4  4B FA 00 ED */	bl __ct__Q23ebi13TMainTitleMgrFv
/* 8044A088 00446FC8  38 7F 17 30 */	addi r3, r31, 0x1730
/* 8044A08C 00446FCC  4B F8 53 59 */	bl __ct__Q33ebi6Option4TMgrFv
/* 8044A090 00446FD0  38 7F 26 78 */	addi r3, r31, 0x2678
/* 8044A094 00446FD4  4B FA 53 95 */	bl __ct__Q33ebi5Omake4TMgrFv
/* 8044A098 00446FD8  38 00 FF FF */	li r0, -1
/* 8044A09C 00446FDC  38 60 00 14 */	li r3, 0x14
/* 8044A0A0 00446FE0  90 1F 2F 3C */	stw r0, 0x2f3c(r31)
/* 8044A0A4 00446FE4  4B BD 9E 01 */	bl __nw__FUl
/* 8044A0A8 00446FE8  28 03 00 00 */	cmplwi r3, 0
/* 8044A0AC 00446FEC  41 82 00 4C */	beq .L_8044A0F8
/* 8044A0B0 00446FF0  3C 80 80 4F */	lis r4, lbl_804ED1B4@ha
/* 8044A0B4 00446FF4  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 8044A0B8 00446FF8  39 04 D1 B4 */	addi r8, r4, lbl_804ED1B4@l
/* 8044A0BC 00446FFC  3C 80 80 4F */	lis r4, "__vt__26Delegate<Q25Title7Section>"@ha
/* 8044A0C0 00447000  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044A0C4 00447004  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 8044A0C8 00447008  80 C8 00 04 */	lwz r6, 4(r8)
/* 8044A0CC 0044700C  38 04 D2 AC */	addi r0, r4, "__vt__26Delegate<Q25Title7Section>"@l
/* 8044A0D0 00447010  80 88 00 08 */	lwz r4, 8(r8)
/* 8044A0D4 00447014  90 E1 00 08 */	stw r7, 8(r1)
/* 8044A0D8 00447018  90 A3 00 00 */	stw r5, 0(r3)
/* 8044A0DC 0044701C  90 03 00 00 */	stw r0, 0(r3)
/* 8044A0E0 00447020  93 E3 00 04 */	stw r31, 4(r3)
/* 8044A0E4 00447024  90 E3 00 08 */	stw r7, 8(r3)
/* 8044A0E8 00447028  90 C3 00 0C */	stw r6, 0xc(r3)
/* 8044A0EC 0044702C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8044A0F0 00447030  90 81 00 10 */	stw r4, 0x10(r1)
/* 8044A0F4 00447034  90 83 00 10 */	stw r4, 0x10(r3)
.L_8044A0F8:
/* 8044A0F8 00447038  90 7F 00 C0 */	stw r3, 0xc0(r31)
/* 8044A0FC 0044703C  4B EC 55 6D */	bl create__Q22og5Lib2DFv
/* 8044A100 00447040  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 8044A104 00447044  38 80 00 01 */	li r4, 1
/* 8044A108 00447048  48 00 BB A1 */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 8044A10C 0044704C  38 00 00 00 */	li r0, 0
/* 8044A110 00447050  7F E3 FB 78 */	mr r3, r31
/* 8044A114 00447054  98 1F 2F 44 */	stb r0, 0x2f44(r31)
/* 8044A118 00447058  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044A11C 0044705C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044A120 00447060  7C 08 03 A6 */	mtlr r0
/* 8044A124 00447064  38 21 00 20 */	addi r1, r1, 0x20
/* 8044A128 00447068  4E 80 00 20 */	blr 
.endfn __ct__Q25Title7SectionFP7JKRHeap
.endif

.fn __dt__Q33ebi5Omake4TMgrFv, weak
/* 8044A12C 0044706C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044A130 00447070  7C 08 02 A6 */	mflr r0
/* 8044A134 00447074  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044A138 00447078  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044A13C 0044707C  7C 9F 23 78 */	mr r31, r4
/* 8044A140 00447080  93 C1 00 08 */	stw r30, 8(r1)
/* 8044A144 00447084  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044A148 00447088  41 82 00 38 */	beq .L_8044A180
/* 8044A14C 0044708C  38 7E 05 DC */	addi r3, r30, 0x5dc
/* 8044A150 00447090  38 80 FF FF */	li r4, -1
/* 8044A154 00447094  4B FA 58 0D */	bl __dt__Q33ebi6Screen10TOmakeGameFv
/* 8044A158 00447098  38 7E 04 68 */	addi r3, r30, 0x468
/* 8044A15C 0044709C  38 80 FF FF */	li r4, -1
/* 8044A160 004470A0  4B FA 5A 79 */	bl __dt__Q33ebi6Screen11TOmakeCardEFv
/* 8044A164 004470A4  38 7E 00 08 */	addi r3, r30, 8
/* 8044A168 004470A8  38 80 FF FF */	li r4, -1
/* 8044A16C 004470AC  4B FA 5D 51 */	bl __dt__Q33ebi6Screen6TOmakeFv
/* 8044A170 004470B0  7F E0 07 35 */	extsh. r0, r31
/* 8044A174 004470B4  40 81 00 0C */	ble .L_8044A180
/* 8044A178 004470B8  7F C3 F3 78 */	mr r3, r30
/* 8044A17C 004470BC  4B BD 9F 39 */	bl __dl__FPv
.L_8044A180:
/* 8044A180 004470C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044A184 004470C4  7F C3 F3 78 */	mr r3, r30
/* 8044A188 004470C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044A18C 004470CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044A190 004470D0  7C 08 03 A6 */	mtlr r0
/* 8044A194 004470D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8044A198 004470D8  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi5Omake4TMgrFv

.fn __dt__Q33ebi6Option4TMgrFv, weak
/* 8044A19C 004470DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044A1A0 004470E0  7C 08 02 A6 */	mflr r0
/* 8044A1A4 004470E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044A1A8 004470E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044A1AC 004470EC  7C 9F 23 78 */	mr r31, r4
/* 8044A1B0 004470F0  93 C1 00 08 */	stw r30, 8(r1)
/* 8044A1B4 004470F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044A1B8 004470F8  41 82 00 1C */	beq .L_8044A1D4
/* 8044A1BC 004470FC  38 80 FF FF */	li r4, -1
/* 8044A1C0 00447100  4B F8 53 19 */	bl __dt__Q33ebi6Screen7TOptionFv
/* 8044A1C4 00447104  7F E0 07 35 */	extsh. r0, r31
/* 8044A1C8 00447108  40 81 00 0C */	ble .L_8044A1D4
/* 8044A1CC 0044710C  7F C3 F3 78 */	mr r3, r30
/* 8044A1D0 00447110  4B BD 9E E5 */	bl __dl__FPv
.L_8044A1D4:
/* 8044A1D4 00447114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044A1D8 00447118  7F C3 F3 78 */	mr r3, r30
/* 8044A1DC 0044711C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044A1E0 00447120  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044A1E4 00447124  7C 08 03 A6 */	mtlr r0
/* 8044A1E8 00447128  38 21 00 10 */	addi r1, r1, 0x10
/* 8044A1EC 0044712C  4E 80 00 20 */	blr 
.endfn __dt__Q33ebi6Option4TMgrFv

.fn __dt__Q23ebi13TMainTitleMgrFv, weak
/* 8044A1F0 00447130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044A1F4 00447134  7C 08 02 A6 */	mflr r0
/* 8044A1F8 00447138  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044A1FC 0044713C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044A200 00447140  7C 9F 23 78 */	mr r31, r4
/* 8044A204 00447144  93 C1 00 08 */	stw r30, 8(r1)
/* 8044A208 00447148  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044A20C 0044714C  41 82 02 38 */	beq .L_8044A444
/* 8044A210 00447150  34 1E 13 7C */	addic. r0, r30, 0x137c
/* 8044A214 00447154  41 82 00 58 */	beq .L_8044A26C
/* 8044A218 00447158  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen11TPressStart@ha
/* 8044A21C 0044715C  3C 80 80 3D */	lis r4, __dt__Q23ebi25E2DCallBack_CalcAnimationFv@ha
/* 8044A220 00447160  38 03 8C E0 */	addi r0, r3, __vt__Q33ebi6Screen11TPressStart@l
/* 8044A224 00447164  38 A0 00 20 */	li r5, 0x20
/* 8044A228 00447168  90 1E 13 7C */	stw r0, 0x137c(r30)
/* 8044A22C 0044716C  38 7E 15 8C */	addi r3, r30, 0x158c
/* 8044A230 00447170  38 84 FF 04 */	addi r4, r4, __dt__Q23ebi25E2DCallBack_CalcAnimationFv@l
/* 8044A234 00447174  38 C0 00 04 */	li r6, 4
/* 8044A238 00447178  4B C7 75 8D */	bl __destroy_arr
/* 8044A23C 0044717C  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 8044A240 00447180  38 7E 14 9C */	addi r3, r30, 0x149c
/* 8044A244 00447184  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 8044A248 00447188  38 A0 00 3C */	li r5, 0x3c
/* 8044A24C 0044718C  38 C0 00 04 */	li r6, 4
/* 8044A250 00447190  4B C7 75 75 */	bl __destroy_arr
/* 8044A254 00447194  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 8044A258 00447198  38 7E 13 AC */	addi r3, r30, 0x13ac
/* 8044A25C 0044719C  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 8044A260 004471A0  38 A0 00 3C */	li r5, 0x3c
/* 8044A264 004471A4  38 C0 00 04 */	li r6, 4
/* 8044A268 004471A8  4B C7 75 5D */	bl __destroy_arr
.L_8044A26C:
/* 8044A26C 004471AC  28 1E 00 00 */	cmplwi r30, 0
/* 8044A270 004471B0  41 82 01 C4 */	beq .L_8044A434
/* 8044A274 004471B4  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen10TTitleMenu@ha
/* 8044A278 004471B8  34 1E 13 5C */	addic. r0, r30, 0x135c
/* 8044A27C 004471BC  38 03 8F 30 */	addi r0, r3, __vt__Q33ebi6Screen10TTitleMenu@l
/* 8044A280 004471C0  90 1E 00 00 */	stw r0, 0(r30)
/* 8044A284 004471C4  41 82 00 58 */	beq .L_8044A2DC
/* 8044A288 004471C8  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 8044A28C 004471CC  34 1E 13 5C */	addic. r0, r30, 0x135c
/* 8044A290 004471D0  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 8044A294 004471D4  90 1E 13 5C */	stw r0, 0x135c(r30)
/* 8044A298 004471D8  41 82 00 44 */	beq .L_8044A2DC
/* 8044A29C 004471DC  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 8044A2A0 004471E0  34 1E 13 5C */	addic. r0, r30, 0x135c
/* 8044A2A4 004471E4  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 8044A2A8 004471E8  90 1E 13 5C */	stw r0, 0x135c(r30)
/* 8044A2AC 004471EC  41 82 00 30 */	beq .L_8044A2DC
/* 8044A2B0 004471F0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 8044A2B4 004471F4  34 1E 13 5C */	addic. r0, r30, 0x135c
/* 8044A2B8 004471F8  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 8044A2BC 004471FC  90 1E 13 5C */	stw r0, 0x135c(r30)
/* 8044A2C0 00447200  41 82 00 1C */	beq .L_8044A2DC
/* 8044A2C4 00447204  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 8044A2C8 00447208  38 7E 13 5C */	addi r3, r30, 0x135c
/* 8044A2CC 0044720C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 8044A2D0 00447210  38 80 00 00 */	li r4, 0
/* 8044A2D4 00447214  90 1E 13 5C */	stw r0, 0x135c(r30)
/* 8044A2D8 00447218  4B FC 72 B1 */	bl __dt__5CNodeFv
.L_8044A2DC:
/* 8044A2DC 0044721C  34 1E 13 20 */	addic. r0, r30, 0x1320
/* 8044A2E0 00447220  41 82 00 6C */	beq .L_8044A34C
/* 8044A2E4 00447224  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 8044A2E8 00447228  34 1E 13 40 */	addic. r0, r30, 0x1340
/* 8044A2EC 0044722C  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 8044A2F0 00447230  90 1E 13 20 */	stw r0, 0x1320(r30)
/* 8044A2F4 00447234  41 82 00 10 */	beq .L_8044A304
/* 8044A2F8 00447238  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 8044A2FC 0044723C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 8044A300 00447240  90 1E 13 40 */	stw r0, 0x1340(r30)
.L_8044A304:
/* 8044A304 00447244  34 1E 13 20 */	addic. r0, r30, 0x1320
/* 8044A308 00447248  41 82 00 44 */	beq .L_8044A34C
/* 8044A30C 0044724C  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 8044A310 00447250  34 1E 13 20 */	addic. r0, r30, 0x1320
/* 8044A314 00447254  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 8044A318 00447258  90 1E 13 20 */	stw r0, 0x1320(r30)
/* 8044A31C 0044725C  41 82 00 30 */	beq .L_8044A34C
/* 8044A320 00447260  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 8044A324 00447264  34 1E 13 20 */	addic. r0, r30, 0x1320
/* 8044A328 00447268  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 8044A32C 0044726C  90 1E 13 20 */	stw r0, 0x1320(r30)
/* 8044A330 00447270  41 82 00 1C */	beq .L_8044A34C
/* 8044A334 00447274  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 8044A338 00447278  38 7E 13 20 */	addi r3, r30, 0x1320
/* 8044A33C 0044727C  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 8044A340 00447280  38 80 00 00 */	li r4, 0
/* 8044A344 00447284  90 1E 13 20 */	stw r0, 0x1320(r30)
/* 8044A348 00447288  4B FC 72 41 */	bl __dt__5CNodeFv
.L_8044A34C:
/* 8044A34C 0044728C  34 1E 12 E4 */	addic. r0, r30, 0x12e4
/* 8044A350 00447290  41 82 00 6C */	beq .L_8044A3BC
/* 8044A354 00447294  3C 60 80 4F */	lis r3, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 8044A358 00447298  34 1E 13 04 */	addic. r0, r30, 0x1304
/* 8044A35C 0044729C  38 03 8A 0C */	addi r0, r3, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 8044A360 004472A0  90 1E 12 E4 */	stw r0, 0x12e4(r30)
/* 8044A364 004472A4  41 82 00 10 */	beq .L_8044A374
/* 8044A368 004472A8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 8044A36C 004472AC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 8044A370 004472B0  90 1E 13 04 */	stw r0, 0x1304(r30)
.L_8044A374:
/* 8044A374 004472B4  34 1E 12 E4 */	addic. r0, r30, 0x12e4
/* 8044A378 004472B8  41 82 00 44 */	beq .L_8044A3BC
/* 8044A37C 004472BC  3C 60 80 4F */	lis r3, __vt__Q23ebi16E2DCallBack_Base@ha
/* 8044A380 004472C0  34 1E 12 E4 */	addic. r0, r30, 0x12e4
/* 8044A384 004472C4  38 03 88 30 */	addi r0, r3, __vt__Q23ebi16E2DCallBack_Base@l
/* 8044A388 004472C8  90 1E 12 E4 */	stw r0, 0x12e4(r30)
/* 8044A38C 004472CC  41 82 00 30 */	beq .L_8044A3BC
/* 8044A390 004472D0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen12CallBackNode@ha
/* 8044A394 004472D4  34 1E 12 E4 */	addic. r0, r30, 0x12e4
/* 8044A398 004472D8  38 03 7F 2C */	addi r0, r3, __vt__Q29P2DScreen12CallBackNode@l
/* 8044A39C 004472DC  90 1E 12 E4 */	stw r0, 0x12e4(r30)
/* 8044A3A0 004472E0  41 82 00 1C */	beq .L_8044A3BC
/* 8044A3A4 004472E4  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen4Node@ha
/* 8044A3A8 004472E8  38 7E 12 E4 */	addi r3, r30, 0x12e4
/* 8044A3AC 004472EC  38 04 7B 0C */	addi r0, r4, __vt__Q29P2DScreen4Node@l
/* 8044A3B0 004472F0  38 80 00 00 */	li r4, 0
/* 8044A3B4 004472F4  90 1E 12 E4 */	stw r0, 0x12e4(r30)
/* 8044A3B8 004472F8  4B FC 71 D1 */	bl __dt__5CNodeFv
.L_8044A3BC:
/* 8044A3BC 004472FC  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 8044A3C0 00447300  38 7E 11 7C */	addi r3, r30, 0x117c
/* 8044A3C4 00447304  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 8044A3C8 00447308  38 A0 00 3C */	li r5, 0x3c
/* 8044A3CC 0044730C  38 C0 00 06 */	li r6, 6
/* 8044A3D0 00447310  4B C7 73 F5 */	bl __destroy_arr
/* 8044A3D4 00447314  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 8044A3D8 00447318  38 7E 10 14 */	addi r3, r30, 0x1014
/* 8044A3DC 0044731C  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 8044A3E0 00447320  38 A0 00 3C */	li r5, 0x3c
/* 8044A3E4 00447324  38 C0 00 06 */	li r6, 6
/* 8044A3E8 00447328  4B C7 73 DD */	bl __destroy_arr
/* 8044A3EC 0044732C  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 8044A3F0 00447330  38 7E 0E AC */	addi r3, r30, 0xeac
/* 8044A3F4 00447334  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 8044A3F8 00447338  38 A0 00 3C */	li r5, 0x3c
/* 8044A3FC 0044733C  38 C0 00 06 */	li r6, 6
/* 8044A400 00447340  4B C7 73 C5 */	bl __destroy_arr
/* 8044A404 00447344  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 8044A408 00447348  38 7E 0D 44 */	addi r3, r30, 0xd44
/* 8044A40C 0044734C  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 8044A410 00447350  38 A0 00 3C */	li r5, 0x3c
/* 8044A414 00447354  38 C0 00 06 */	li r6, 6
/* 8044A418 00447358  4B C7 73 AD */	bl __destroy_arr
/* 8044A41C 0044735C  3C 80 80 3D */	lis r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 8044A420 00447360  38 7E 0A 74 */	addi r3, r30, 0xa74
/* 8044A424 00447364  38 84 FF 94 */	addi r4, r4, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 8044A428 00447368  38 A0 00 3C */	li r5, 0x3c
/* 8044A42C 0044736C  38 C0 00 0C */	li r6, 0xc
/* 8044A430 00447370  4B C7 73 95 */	bl __destroy_arr
.L_8044A434:
/* 8044A434 00447374  7F E0 07 35 */	extsh. r0, r31
/* 8044A438 00447378  40 81 00 0C */	ble .L_8044A444
/* 8044A43C 0044737C  7F C3 F3 78 */	mr r3, r30
/* 8044A440 00447380  4B BD 9C 75 */	bl __dl__FPv
.L_8044A444:
/* 8044A444 00447384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044A448 00447388  7F C3 F3 78 */	mr r3, r30
/* 8044A44C 0044738C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044A450 00447390  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044A454 00447394  7C 08 03 A6 */	mtlr r0
/* 8044A458 00447398  38 21 00 10 */	addi r1, r1, 0x10
/* 8044A45C 0044739C  4E 80 00 20 */	blr 
.endfn __dt__Q23ebi13TMainTitleMgrFv

.if version == 0
.fn __dt__Q25Title7SectionFv, global
/* 8044A460 004473A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044A464 004473A4  7C 08 02 A6 */	mflr r0
/* 8044A468 004473A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044A46C 004473AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044A470 004473B0  7C 9F 23 78 */	mr r31, r4
/* 8044A474 004473B4  93 C1 00 08 */	stw r30, 8(r1)
/* 8044A478 004473B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044A47C 004473BC  41 82 00 6C */	beq .L_8044A4E8
/* 8044A480 004473C0  3C 60 80 4F */	lis r3, __vt__Q25Title7Section@ha
/* 8044A484 004473C4  38 03 D2 58 */	addi r0, r3, __vt__Q25Title7Section@l
/* 8044A488 004473C8  90 1E 00 00 */	stw r0, 0(r30)
/* 8044A48C 004473CC  4B F7 43 55 */	bl deleteInstance__Q33ebi5title9TTitleMgrFv
/* 8044A490 004473D0  38 7E 26 78 */	addi r3, r30, 0x2698
/* 8044A494 004473D4  38 80 FF FF */	li r4, -1
/* 8044A498 004473D8  4B FF FC 95 */	bl __dt__Q33ebi5Omake4TMgrFv
/* 8044A49C 004473DC  38 7E 17 30 */	addi r3, r30, 0x1750
/* 8044A4A0 004473E0  38 80 FF FF */	li r4, -1
/* 8044A4A4 004473E4  4B FF FC F9 */	bl __dt__Q33ebi6Option4TMgrFv
/* 8044A4A8 004473E8  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044A4AC 004473EC  38 80 FF FF */	li r4, -1
/* 8044A4B0 004473F0  4B FF FD 41 */	bl __dt__Q23ebi13TMainTitleMgrFv
/* 8044A4B4 004473F4  34 1E 00 54 */	addic. r0, r30, 0x74
/* 8044A4B8 004473F8  41 82 00 14 */	beq .L_8044A4CC
/* 8044A4BC 004473FC  34 7E 00 B0 */	addic. r3, r30, 0xd0
/* 8044A4C0 00447400  41 82 00 0C */	beq .L_8044A4CC
/* 8044A4C4 00447404  38 80 00 00 */	li r4, 0
/* 8044A4C8 00447408  4B BD C3 09 */	bl __dt__10JSUPtrLinkFv
.L_8044A4CC:
/* 8044A4CC 0044740C  7F C3 F3 78 */	mr r3, r30
/* 8044A4D0 00447410  38 80 00 00 */	li r4, 0
/* 8044A4D4 00447414  4B D1 A7 DD */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8044A4D8 00447418  7F E0 07 35 */	extsh. r0, r31
/* 8044A4DC 0044741C  40 81 00 0C */	ble .L_8044A4E8
/* 8044A4E0 00447420  7F C3 F3 78 */	mr r3, r30
/* 8044A4E4 00447424  4B BD 9B D1 */	bl __dl__FPv
.L_8044A4E8:
/* 8044A4E8 00447428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044A4EC 0044742C  7F C3 F3 78 */	mr r3, r30
/* 8044A4F0 00447430  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044A4F4 00447434  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044A4F8 00447438  7C 08 03 A6 */	mtlr r0
/* 8044A4FC 0044743C  38 21 00 10 */	addi r1, r1, 0x10
/* 8044A500 00447440  4E 80 00 20 */	blr 
.endfn __dt__Q25Title7SectionFv
.else
.fn __dt__Q25Title7SectionFv, global
/* 8044A460 004473A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044A464 004473A4  7C 08 02 A6 */	mflr r0
/* 8044A468 004473A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044A46C 004473AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044A470 004473B0  7C 9F 23 78 */	mr r31, r4
/* 8044A474 004473B4  93 C1 00 08 */	stw r30, 8(r1)
/* 8044A478 004473B8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044A47C 004473BC  41 82 00 6C */	beq .L_8044A4E8
/* 8044A480 004473C0  3C 60 80 4F */	lis r3, __vt__Q25Title7Section@ha
/* 8044A484 004473C4  38 03 D2 58 */	addi r0, r3, __vt__Q25Title7Section@l
/* 8044A488 004473C8  90 1E 00 00 */	stw r0, 0(r30)
/* 8044A48C 004473CC  4B F7 43 55 */	bl deleteInstance__Q33ebi5title9TTitleMgrFv
/* 8044A490 004473D0  38 7E 26 78 */	addi r3, r30, 0x2678
/* 8044A494 004473D4  38 80 FF FF */	li r4, -1
/* 8044A498 004473D8  4B FF FC 95 */	bl __dt__Q33ebi5Omake4TMgrFv
/* 8044A49C 004473DC  38 7E 17 30 */	addi r3, r30, 0x1730
/* 8044A4A0 004473E0  38 80 FF FF */	li r4, -1
/* 8044A4A4 004473E4  4B FF FC F9 */	bl __dt__Q33ebi6Option4TMgrFv
/* 8044A4A8 004473E8  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044A4AC 004473EC  38 80 FF FF */	li r4, -1
/* 8044A4B0 004473F0  4B FF FD 41 */	bl __dt__Q23ebi13TMainTitleMgrFv
/* 8044A4B4 004473F4  34 1E 00 54 */	addic. r0, r30, 0x54
/* 8044A4B8 004473F8  41 82 00 14 */	beq .L_8044A4CC
/* 8044A4BC 004473FC  34 7E 00 B0 */	addic. r3, r30, 0xb0
/* 8044A4C0 00447400  41 82 00 0C */	beq .L_8044A4CC
/* 8044A4C4 00447404  38 80 00 00 */	li r4, 0
/* 8044A4C8 00447408  4B BD C3 09 */	bl __dt__10JSUPtrLinkFv
.L_8044A4CC:
/* 8044A4CC 0044740C  7F C3 F3 78 */	mr r3, r30
/* 8044A4D0 00447410  38 80 00 00 */	li r4, 0
/* 8044A4D4 00447414  4B D1 A7 DD */	bl __dt__Q24Game14BaseHIOSectionFv
/* 8044A4D8 00447418  7F E0 07 35 */	extsh. r0, r31
/* 8044A4DC 0044741C  40 81 00 0C */	ble .L_8044A4E8
/* 8044A4E0 00447420  7F C3 F3 78 */	mr r3, r30
/* 8044A4E4 00447424  4B BD 9B D1 */	bl __dl__FPv
.L_8044A4E8:
/* 8044A4E8 00447428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044A4EC 0044742C  7F C3 F3 78 */	mr r3, r30
/* 8044A4F0 00447430  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044A4F4 00447434  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044A4F8 00447438  7C 08 03 A6 */	mtlr r0
/* 8044A4FC 0044743C  38 21 00 10 */	addi r1, r1, 0x10
/* 8044A500 00447440  4E 80 00 20 */	blr 
.endfn __dt__Q25Title7SectionFv
.endif

.if version == 0
.fn doExit__Q25Title7SectionFv, global
/* 8044A504 00447444  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044A508 00447448  7C 08 02 A6 */	mflr r0
/* 8044A50C 0044744C  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044A510 00447450  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044A514 00447454  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044A518 00447458  3B E4 B1 00 */	addi r31, r4, lbl_8049B100@l
/* 8044A51C 0044745C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044A520 00447460  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044A524 00447464  7C 7D 1B 78 */	mr r29, r3
/* 8044A528 00447468  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044A52C 0044746C  28 00 00 00 */	cmplwi r0, 0
/* 8044A530 00447470  40 82 00 18 */	bne .L_8044A548
/* 8044A534 00447474  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044A538 00447478  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044A53C 0044747C  38 80 01 D3 */	li r4, 0x1d3
/* 8044A540 00447480  4C C6 31 82 */	crclr 6
/* 8044A544 00447484  4B BE 00 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A548:
/* 8044A548 00447488  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8044A54C 0044748C  28 1E 00 00 */	cmplwi r30, 0
/* 8044A550 00447490  40 82 00 18 */	bne .L_8044A568
/* 8044A554 00447494  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044A558 00447498  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044A55C 0044749C  38 80 01 DC */	li r4, 0x1dc
/* 8044A560 004474A0  4C C6 31 82 */	crclr 6
/* 8044A564 004474A4  4B BE 00 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A568:
/* 8044A568 004474A8  7F C3 F3 78 */	mr r3, r30
/* 8044A56C 004474AC  4B EF 7C 75 */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8044A570 004474B0  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044A574 004474B4  48 00 5F E9 */	bl stop__Q24Game9THPPlayerFv
/* 8044A578 004474B8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044A57C 004474BC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8044A580 004474C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8044A584 004474C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044A588 004474C8  7D 89 03 A6 */	mtctr r12
/* 8044A58C 004474CC  4E 80 04 21 */	bctrl 
/* 8044A590 004474D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044A594 004474D4  40 82 00 18 */	bne .L_8044A5AC
/* 8044A598 004474D8  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044A59C 004474DC  38 BF 00 48 */	addi r5, r31, 0x48
/* 8044A5A0 004474E0  38 80 02 0F */	li r4, 0x215
/* 8044A5A4 004474E4  4C C6 31 82 */	crclr 6
/* 8044A5A8 004474E8  4B BE 00 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A5AC:
/* 8044A5AC 004474EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044A5B0 004474F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044A5B4 004474F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044A5B8 004474F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044A5BC 004474FC  7C 08 03 A6 */	mtlr r0
/* 8044A5C0 00447500  38 21 00 20 */	addi r1, r1, 0x20
/* 8044A5C4 00447504  4E 80 00 20 */	blr 
.endfn doExit__Q25Title7SectionFv
.else
.fn doExit__Q25Title7SectionFv, global
/* 8044A504 00447444  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044A508 00447448  7C 08 02 A6 */	mflr r0
/* 8044A50C 0044744C  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044A510 00447450  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044A514 00447454  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044A518 00447458  3B E4 B1 00 */	addi r31, r4, lbl_8049B100@l
/* 8044A51C 0044745C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044A520 00447460  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044A524 00447464  7C 7D 1B 78 */	mr r29, r3
/* 8044A528 00447468  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044A52C 0044746C  28 00 00 00 */	cmplwi r0, 0
/* 8044A530 00447470  40 82 00 18 */	bne .L_8044A548
/* 8044A534 00447474  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044A538 00447478  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044A53C 0044747C  38 80 01 D3 */	li r4, 0x1d3
/* 8044A540 00447480  4C C6 31 82 */	crclr 6
/* 8044A544 00447484  4B BE 00 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A548:
/* 8044A548 00447488  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8044A54C 0044748C  28 1E 00 00 */	cmplwi r30, 0
/* 8044A550 00447490  40 82 00 18 */	bne .L_8044A568
/* 8044A554 00447494  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044A558 00447498  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044A55C 0044749C  38 80 01 DC */	li r4, 0x1dc
/* 8044A560 004474A0  4C C6 31 82 */	crclr 6
/* 8044A564 004474A4  4B BE 00 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A568:
/* 8044A568 004474A8  7F C3 F3 78 */	mr r3, r30
/* 8044A56C 004474AC  4B EF 7C 75 */	bl deleteCurrentScene__Q28PSSystem8SceneMgrFv
/* 8044A570 004474B0  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044A574 004474B4  48 00 5F E9 */	bl stop__Q24Game9THPPlayerFv
/* 8044A578 004474B8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044A57C 004474BC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8044A580 004474C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8044A584 004474C4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044A588 004474C8  7D 89 03 A6 */	mtctr r12
/* 8044A58C 004474CC  4E 80 04 21 */	bctrl 
/* 8044A590 004474D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044A594 004474D4  40 82 00 18 */	bne .L_8044A5AC
/* 8044A598 004474D8  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044A59C 004474DC  38 BF 00 48 */	addi r5, r31, 0x48
/* 8044A5A0 004474E0  38 80 02 0F */	li r4, 0x20f
/* 8044A5A4 004474E4  4C C6 31 82 */	crclr 6
/* 8044A5A8 004474E8  4B BE 00 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A5AC:
/* 8044A5AC 004474EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044A5B0 004474F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044A5B4 004474F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044A5B8 004474F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044A5BC 004474FC  7C 08 03 A6 */	mtlr r0
/* 8044A5C0 00447500  38 21 00 20 */	addi r1, r1, 0x20
/* 8044A5C4 00447504  4E 80 00 20 */	blr 
.endfn doExit__Q25Title7SectionFv
.endif

.if version == 0
.fn loadResident__Q25Title7SectionFv, global
/* 8044A5C8 00447508  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044A5CC 0044750C  7C 08 02 A6 */	mflr r0
/* 8044A5D0 00447510  3C 60 80 4A */	lis r3, lbl_8049B100@ha
/* 8044A5D4 00447514  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044A5D8 00447518  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044A5DC 0044751C  3B E3 B1 00 */	addi r31, r3, lbl_8049B100@l
/* 8044A5E0 00447520  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044A5E4 00447524  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044A5E8 00447528  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044A5EC 0044752C  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8044A5F0 00447530  80 04 00 D8 */	lwz r0, 0xd8(r4)
/* 8044A5F4 00447534  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8044A5F8 00447538  40 82 00 A8 */	bne .L_8044A6A0
/* 8044A5FC 0044753C  80 64 00 38 */	lwz r3, 0x38(r4)
/* 8044A600 00447540  4B BD 8F A5 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8044A604 00447544  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A608 00447548  38 9F 00 60 */	addi r4, r31, 0x60
/* 8044A60C 0044754C  38 A0 00 00 */	li r5, 0
/* 8044A610 00447550  4B FD 8D 4D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A614 00447554  3B BF 00 7C */	addi r29, r31, 0x7c
/* 8044A618 00447558  38 80 00 01 */	li r4, 1
/* 8044A61C 0044755C  7F A3 EB 78 */	mr r3, r29
/* 8044A620 00447560  38 A0 00 00 */	li r5, 0
/* 8044A624 00447564  38 C0 00 01 */	li r6, 1
/* 8044A628 00447568  4B BD 0B 09 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044A62C 0044756C  28 03 00 00 */	cmplwi r3, 0
/* 8044A630 00447570  40 82 00 1C */	bne .L_8044A64C
/* 8044A634 00447574  7F A6 EB 78 */	mr r6, r29
/* 8044A638 00447578  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044A63C 0044757C  38 BF 00 98 */	addi r5, r31, 0x98
/* 8044A640 00447580  38 80 02 46 */	li r4, 0x24c
/* 8044A644 00447584  4C C6 31 82 */	crclr 6
/* 8044A648 00447588  4B BD FF F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A64C:
/* 8044A64C 0044758C  3B BF 00 B0 */	addi r29, r31, 0xb0
/* 8044A650 00447590  38 80 00 01 */	li r4, 1
/* 8044A654 00447594  7F A3 EB 78 */	mr r3, r29
/* 8044A658 00447598  38 A0 00 00 */	li r5, 0
/* 8044A65C 0044759C  38 C0 00 01 */	li r6, 1
/* 8044A660 004475A0  4B BD 0A D1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044A664 004475A4  28 03 00 00 */	cmplwi r3, 0
/* 8044A668 004475A8  40 82 00 1C */	bne .L_8044A684
/* 8044A66C 004475AC  7F A6 EB 78 */	mr r6, r29
/* 8044A670 004475B0  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044A674 004475B4  38 BF 00 98 */	addi r5, r31, 0x98
/* 8044A678 004475B8  38 80 02 4E */	li r4, 0x254
/* 8044A67C 004475BC  4C C6 31 82 */	crclr 6
/* 8044A680 004475C0  4B BD FF C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A684:
/* 8044A684 004475C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A688 004475C8  38 9F 00 60 */	addi r4, r31, 0x60
/* 8044A68C 004475CC  4B FD 8C D9 */	bl heapStatusEnd__6SystemFPc
/* 8044A690 004475D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A694 004475D4  80 03 00 D8 */	lwz r0, 0xd8(r3)
/* 8044A698 004475D8  60 00 00 01 */	ori r0, r0, 1
/* 8044A69C 004475DC  90 03 00 D8 */	stw r0, 0xd8(r3)
.L_8044A6A0:
/* 8044A6A0 004475E0  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 8044A6A4 004475E4  48 00 B6 0D */	bl load__Q211Pikmin2ARAM3MgrFv
/* 8044A6A8 004475E8  7F C3 F3 78 */	mr r3, r30
/* 8044A6AC 004475EC  4B BD 8E F9 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8044A6B0 004475F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044A6B4 004475F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044A6B8 004475F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044A6BC 004475FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044A6C0 00447600  7C 08 03 A6 */	mtlr r0
/* 8044A6C4 00447604  38 21 00 20 */	addi r1, r1, 0x20
/* 8044A6C8 00447608  4E 80 00 20 */	blr 
.endfn loadResident__Q25Title7SectionFv
.else
.fn loadResident__Q25Title7SectionFv, global
/* 8044A5C8 00447508  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044A5CC 0044750C  7C 08 02 A6 */	mflr r0
/* 8044A5D0 00447510  3C 60 80 4A */	lis r3, lbl_8049B100@ha
/* 8044A5D4 00447514  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044A5D8 00447518  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044A5DC 0044751C  3B E3 B1 00 */	addi r31, r3, lbl_8049B100@l
/* 8044A5E0 00447520  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044A5E4 00447524  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044A5E8 00447528  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044A5EC 0044752C  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 8044A5F0 00447530  80 04 00 D8 */	lwz r0, 0xd8(r4)
/* 8044A5F4 00447534  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8044A5F8 00447538  40 82 00 A8 */	bne .L_8044A6A0
/* 8044A5FC 0044753C  80 64 00 38 */	lwz r3, 0x38(r4)
/* 8044A600 00447540  4B BD 8F A5 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8044A604 00447544  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A608 00447548  38 9F 00 60 */	addi r4, r31, 0x60
/* 8044A60C 0044754C  38 A0 00 00 */	li r5, 0
/* 8044A610 00447550  4B FD 8D 4D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A614 00447554  3B BF 00 7C */	addi r29, r31, 0x7c
/* 8044A618 00447558  38 80 00 01 */	li r4, 1
/* 8044A61C 0044755C  7F A3 EB 78 */	mr r3, r29
/* 8044A620 00447560  38 A0 00 00 */	li r5, 0
/* 8044A624 00447564  38 C0 00 01 */	li r6, 1
/* 8044A628 00447568  4B BD 0B 09 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044A62C 0044756C  28 03 00 00 */	cmplwi r3, 0
/* 8044A630 00447570  40 82 00 1C */	bne .L_8044A64C
/* 8044A634 00447574  7F A6 EB 78 */	mr r6, r29
/* 8044A638 00447578  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044A63C 0044757C  38 BF 00 98 */	addi r5, r31, 0x98
/* 8044A640 00447580  38 80 02 46 */	li r4, 0x246
/* 8044A644 00447584  4C C6 31 82 */	crclr 6
/* 8044A648 00447588  4B BD FF F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A64C:
/* 8044A64C 0044758C  3B BF 00 B0 */	addi r29, r31, 0xb0
/* 8044A650 00447590  38 80 00 01 */	li r4, 1
/* 8044A654 00447594  7F A3 EB 78 */	mr r3, r29
/* 8044A658 00447598  38 A0 00 00 */	li r5, 0
/* 8044A65C 0044759C  38 C0 00 01 */	li r6, 1
/* 8044A660 004475A0  4B BD 0A D1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044A664 004475A4  28 03 00 00 */	cmplwi r3, 0
/* 8044A668 004475A8  40 82 00 1C */	bne .L_8044A684
/* 8044A66C 004475AC  7F A6 EB 78 */	mr r6, r29
/* 8044A670 004475B0  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044A674 004475B4  38 BF 00 98 */	addi r5, r31, 0x98
/* 8044A678 004475B8  38 80 02 4E */	li r4, 0x24e
/* 8044A67C 004475BC  4C C6 31 82 */	crclr 6
/* 8044A680 004475C0  4B BD FF C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A684:
/* 8044A684 004475C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A688 004475C8  38 9F 00 60 */	addi r4, r31, 0x60
/* 8044A68C 004475CC  4B FD 8C D9 */	bl heapStatusEnd__6SystemFPc
/* 8044A690 004475D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A694 004475D4  80 03 00 D8 */	lwz r0, 0xd8(r3)
/* 8044A698 004475D8  60 00 00 01 */	ori r0, r0, 1
/* 8044A69C 004475DC  90 03 00 D8 */	stw r0, 0xd8(r3)
.L_8044A6A0:
/* 8044A6A0 004475E0  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 8044A6A4 004475E4  48 00 B6 0D */	bl load__Q211Pikmin2ARAM3MgrFv
/* 8044A6A8 004475E8  7F C3 F3 78 */	mr r3, r30
/* 8044A6AC 004475EC  4B BD 8E F9 */	bl becomeCurrentHeap__7JKRHeapFv
/* 8044A6B0 004475F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044A6B4 004475F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044A6B8 004475F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044A6BC 004475FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044A6C0 00447600  7C 08 03 A6 */	mtlr r0
/* 8044A6C4 00447604  38 21 00 20 */	addi r1, r1, 0x20
/* 8044A6C8 00447608  4E 80 00 20 */	blr 
.endfn loadResident__Q25Title7SectionFv
.endif

.if version == 0
.fn init__Q25Title7SectionFv, global
/* 8044A6CC 0044760C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8044A6D0 00447610  7C 08 02 A6 */	mflr r0
/* 8044A6D4 00447614  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044A6D8 00447618  38 A0 00 00 */	li r5, 0
/* 8044A6DC 0044761C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8044A6E0 00447620  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 8044A6E4 00447624  7C 7F 1B 78 */	mr r31, r3
/* 8044A6E8 00447628  3B C4 B1 00 */	addi r30, r4, lbl_8049B100@l
/* 8044A6EC 0044762C  38 9E 00 CC */	addi r4, r30, 0xcc
/* 8044A6F0 00447630  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A6F4 00447634  4B FD 8C 69 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A6F8 00447638  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A6FC 0044763C  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8044A700 00447640  38 A0 00 00 */	li r5, 0
/* 8044A704 00447644  4B FD 8C 59 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A708 00447648  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A70C 0044764C  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8044A710 00447650  4B FD 8C 55 */	bl heapStatusEnd__6SystemFPc
/* 8044A714 00447654  38 60 00 1C */	li r3, 0x1c
/* 8044A718 00447658  4B BD 97 8D */	bl __nw__FUl
/* 8044A71C 0044765C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044A720 00447660  41 82 00 20 */	beq .L_8044A740
/* 8044A724 00447664  7F E4 FB 78 */	mr r4, r31
/* 8044A728 00447668  4B D1 A8 B1 */	bl __ct__Q24Game11HIORootNodeFP7Section
/* 8044A72C 0044766C  3C 60 80 4F */	lis r3, __vt__11HIORootNode@ha
/* 8044A730 00447670  38 1E 00 F0 */	addi r0, r30, 0xf0
/* 8044A734 00447674  38 63 D2 48 */	addi r3, r3, __vt__11HIORootNode@l
/* 8044A738 00447678  90 7D 00 00 */	stw r3, 0(r29)
/* 8044A73C 0044767C  90 1D 00 14 */	stw r0, 0x14(r29)
.L_8044A740:
/* 8044A740 00447680  7F E3 FB 78 */	mr r3, r31
/* 8044A744 00447684  7F A4 EB 78 */	mr r4, r29
/* 8044A748 00447688  81 9F 00 00 */	lwz r12, 0(r31)
/* 8044A74C 0044768C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8044A750 00447690  7D 89 03 A6 */	mtctr r12
/* 8044A754 00447694  4E 80 04 21 */	bctrl 
/* 8044A758 00447698  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A75C 0044769C  38 9E 01 04 */	addi r4, r30, 0x104
/* 8044A760 004476A0  38 A0 00 00 */	li r5, 0
/* 8044A764 004476A4  4B FD 8B F9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A768 004476A8  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8044A76C 004476AC  38 60 00 00 */	li r3, 0
/* 8044A770 004476B0  38 A0 00 02 */	li r5, 2
/* 8044A774 004476B4  38 C0 00 00 */	li r6, 0
/* 8044A778 004476B8  4B C3 F3 B1 */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 8044A77C 004476BC  7C 64 1B 78 */	mr r4, r3
/* 8044A780 004476C0  7F E3 FB 78 */	mr r3, r31
/* 8044A784 004476C4  38 A0 00 01 */	li r5, 1
/* 8044A788 004476C8  4B D1 A6 4D */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 8044A78C 004476CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A790 004476D0  38 9E 01 04 */	addi r4, r30, 0x104
/* 8044A794 004476D4  4B FD 8B D1 */	bl heapStatusEnd__6SystemFPc
/* 8044A798 004476D8  38 60 00 B0 */	li r3, 0xb0
/* 8044A79C 004476DC  4B BD 97 09 */	bl __nw__FUl
/* 8044A7A0 004476E0  7C 60 1B 79 */	or. r0, r3, r3
/* 8044A7A4 004476E4  41 82 00 10 */	beq .L_8044A7B4
/* 8044A7A8 004476E8  38 80 00 00 */	li r4, 0
/* 8044A7AC 004476EC  4B FD A6 A9 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 8044A7B0 004476F0  7C 60 1B 78 */	mr r0, r3
.L_8044A7B4:
/* 8044A7B4 004476F4  90 1F 00 C4 */	stw r0, 0xe4(r31)
/* 8044A7B8 004476F8  38 60 00 B0 */	li r3, 0xb0
/* 8044A7BC 004476FC  4B BD 96 E9 */	bl __nw__FUl
/* 8044A7C0 00447700  7C 60 1B 79 */	or. r0, r3, r3
/* 8044A7C4 00447704  41 82 00 10 */	beq .L_8044A7D4
/* 8044A7C8 00447708  38 80 00 01 */	li r4, 1
/* 8044A7CC 0044770C  4B FD A6 89 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 8044A7D0 00447710  7C 60 1B 78 */	mr r0, r3
.L_8044A7D4:
/* 8044A7D4 00447714  90 1F 00 C8 */	stw r0, 0xe8(r31)
/* 8044A7D8 00447718  38 80 00 01 */	li r4, 1
/* 8044A7DC 0044771C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A7E0 00447720  4B FD 8D 4D */	bl setFrameRate__6SystemFi
/* 8044A7E4 00447724  38 60 00 60 */	li r3, 0x60
/* 8044A7E8 00447728  4B BD 96 BD */	bl __nw__FUl
/* 8044A7EC 0044772C  7C 60 1B 79 */	or. r0, r3, r3
/* 8044A7F0 00447730  41 82 00 18 */	beq .L_8044A808
/* 8044A7F4 00447734  80 9F 00 C4 */	lwz r4, 0xe4(r31)
/* 8044A7F8 00447738  38 C0 00 00 */	li r6, 0
/* 8044A7FC 0044773C  80 AD 89 D8 */	lwz r5, systemFont__9JFWSystem@sda21(r13)
/* 8044A800 00447740  48 00 B9 85 */	bl __ct__4MenuFP10JUTGamePadP7JUTFontb
/* 8044A804 00447744  7C 60 1B 78 */	mr r0, r3
.L_8044A808:
/* 8044A808 00447748  90 1F 00 50 */	stw r0, 0x70(r31)
/* 8044A80C 0044774C  38 00 01 04 */	li r0, 0x104
/* 8044A810 00447750  38 60 00 14 */	li r3, 0x14
/* 8044A814 00447754  80 9F 00 50 */	lwz r4, 0x70(r31)
/* 8044A818 00447758  90 04 00 48 */	stw r0, 0x48(r4)
/* 8044A81C 0044775C  4B BD 96 89 */	bl __nw__FUl
/* 8044A820 00447760  7C 66 1B 79 */	or. r6, r3, r3
/* 8044A824 00447764  41 82 00 4C */	beq .L_8044A870
/* 8044A828 00447768  3C 60 80 4F */	lis r3, lbl_804ED1C0@ha
/* 8044A82C 0044776C  3C 80 80 4F */	lis r4, "__vt__18IDelegate1<R4Menu>"@ha
/* 8044A830 00447770  39 03 D1 C0 */	addi r8, r3, lbl_804ED1C0@l
/* 8044A834 00447774  3C 60 80 4F */	lis r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@ha
/* 8044A838 00447778  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044A83C 0044777C  38 84 D2 3C */	addi r4, r4, "__vt__18IDelegate1<R4Menu>"@l
/* 8044A840 00447780  80 A8 00 04 */	lwz r5, 4(r8)
/* 8044A844 00447784  38 03 D2 30 */	addi r0, r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@l
/* 8044A848 00447788  80 68 00 08 */	lwz r3, 8(r8)
/* 8044A84C 0044778C  90 E1 00 24 */	stw r7, 0x24(r1)
/* 8044A850 00447790  90 86 00 00 */	stw r4, 0(r6)
/* 8044A854 00447794  90 06 00 00 */	stw r0, 0(r6)
/* 8044A858 00447798  93 E6 00 04 */	stw r31, 4(r6)
/* 8044A85C 0044779C  90 E6 00 08 */	stw r7, 8(r6)
/* 8044A860 004477A0  90 A6 00 0C */	stw r5, 0xc(r6)
/* 8044A864 004477A4  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8044A868 004477A8  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8044A86C 004477AC  90 66 00 10 */	stw r3, 0x10(r6)
.L_8044A870:
/* 8044A870 004477B0  80 7F 00 50 */	lwz r3, 0x70(r31)
/* 8044A874 004477B4  38 80 00 20 */	li r4, 0x20
/* 8044A878 004477B8  38 A0 02 00 */	li r5, 0x200
/* 8044A87C 004477BC  48 00 BA F5 */	bl "addKeyEvent__4MenuFQ34Menu8KeyEvent9cTypeFlagUlP18IDelegate1<R4Menu>"
/* 8044A880 004477C0  38 60 00 14 */	li r3, 0x14
/* 8044A884 004477C4  4B BD 96 21 */	bl __nw__FUl
/* 8044A888 004477C8  7C 66 1B 79 */	or. r6, r3, r3
/* 8044A88C 004477CC  41 82 00 4C */	beq .L_8044A8D8
/* 8044A890 004477D0  3C 60 80 4F */	lis r3, lbl_804ED1CC@ha
/* 8044A894 004477D4  3C 80 80 4F */	lis r4, "__vt__18IDelegate1<R4Menu>"@ha
/* 8044A898 004477D8  39 03 D1 CC */	addi r8, r3, lbl_804ED1CC@l
/* 8044A89C 004477DC  3C 60 80 4F */	lis r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@ha
/* 8044A8A0 004477E0  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044A8A4 004477E4  38 84 D2 3C */	addi r4, r4, "__vt__18IDelegate1<R4Menu>"@l
/* 8044A8A8 004477E8  80 A8 00 04 */	lwz r5, 4(r8)
/* 8044A8AC 004477EC  38 03 D2 30 */	addi r0, r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@l
/* 8044A8B0 004477F0  80 68 00 08 */	lwz r3, 8(r8)
/* 8044A8B4 004477F4  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8044A8B8 004477F8  90 86 00 00 */	stw r4, 0(r6)
/* 8044A8BC 004477FC  90 06 00 00 */	stw r0, 0(r6)
/* 8044A8C0 00447800  93 E6 00 04 */	stw r31, 4(r6)
/* 8044A8C4 00447804  90 E6 00 08 */	stw r7, 8(r6)
/* 8044A8C8 00447808  90 A6 00 0C */	stw r5, 0xc(r6)
/* 8044A8CC 0044780C  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8044A8D0 00447810  90 61 00 20 */	stw r3, 0x20(r1)
/* 8044A8D4 00447814  90 66 00 10 */	stw r3, 0x10(r6)
.L_8044A8D8:
/* 8044A8D8 00447818  80 7F 00 50 */	lwz r3, 0x70(r31)
/* 8044A8DC 0044781C  38 80 00 10 */	li r4, 0x10
/* 8044A8E0 00447820  38 A0 01 00 */	li r5, 0x100
/* 8044A8E4 00447824  48 00 BA 8D */	bl "addKeyEvent__4MenuFQ34Menu8KeyEvent9cTypeFlagUlP18IDelegate1<R4Menu>"
/* 8044A8E8 00447828  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044A8EC 0044782C  3B 60 00 00 */	li r27, 0
/* 8044A8F0 00447830  3B A3 41 FC */	addi r29, r3, gGameConfig__4Game@l
/* 8044A8F4 00447834  3B 80 00 00 */	li r28, 0
.L_8044A8F8:
/* 8044A8F8 00447838  7F 83 E3 78 */	mr r3, r28
/* 8044A8FC 0044783C  4B FD 9A 71 */	bl getSectionInfo__8GameFlowFi
/* 8044A900 00447840  7C 65 1B 79 */	or. r5, r3, r3
/* 8044A904 00447844  41 82 00 48 */	beq .L_8044A94C
/* 8044A908 00447848  80 1D 01 E8 */	lwz r0, 0x1e8(r29)
/* 8044A90C 0044784C  2C 00 00 00 */	cmpwi r0, 0
/* 8044A910 00447850  41 82 00 10 */	beq .L_8044A920
/* 8044A914 00447854  88 05 00 06 */	lbz r0, 6(r5)
/* 8044A918 00447858  28 00 00 00 */	cmplwi r0, 0
/* 8044A91C 0044785C  41 82 00 4C */	beq .L_8044A968
.L_8044A920:
/* 8044A920 00447860  88 05 00 05 */	lbz r0, 5(r5)
/* 8044A924 00447864  28 00 00 00 */	cmplwi r0, 0
/* 8044A928 00447868  41 82 00 40 */	beq .L_8044A968
/* 8044A92C 0044786C  80 7F 00 50 */	lwz r3, 0x70(r31)
/* 8044A930 00447870  7F 84 E3 78 */	mr r4, r28
/* 8044A934 00447874  80 A5 00 00 */	lwz r5, 0(r5)
/* 8044A938 00447878  38 C0 00 00 */	li r6, 0
/* 8044A93C 0044787C  38 E0 00 01 */	li r7, 1
/* 8044A940 00447880  48 00 B9 71 */	bl "addOption__4MenuFiPcP18IDelegate1<R4Menu>b"
/* 8044A944 00447884  3B 7B 00 01 */	addi r27, r27, 1
/* 8044A948 00447888  48 00 00 20 */	b .L_8044A968
.L_8044A94C:
/* 8044A94C 0044788C  80 7F 00 50 */	lwz r3, 0x70(r31)
/* 8044A950 00447890  7F 84 E3 78 */	mr r4, r28
/* 8044A954 00447894  38 A2 27 24 */	addi r5, r2, lbl_80520A84@sda21
/* 8044A958 00447898  38 C0 00 00 */	li r6, 0
/* 8044A95C 0044789C  38 E0 00 01 */	li r7, 1
/* 8044A960 004478A0  48 00 B9 51 */	bl "addOption__4MenuFiPcP18IDelegate1<R4Menu>b"
/* 8044A964 004478A4  3B 7B 00 01 */	addi r27, r27, 1
.L_8044A968:
/* 8044A968 004478A8  3B 9C 00 01 */	addi r28, r28, 1
/* 8044A96C 004478AC  2C 1C 00 23 */	cmpwi r28, 0x23
/* 8044A970 004478B0  41 80 FF 88 */	blt .L_8044A8F8
/* 8044A974 004478B4  83 AD 89 D8 */	lwz r29, systemFont__9JFWSystem@sda21(r13)
/* 8044A978 004478B8  4B FD 88 AD */	bl getRenderModeObj__6SystemFv
/* 8044A97C 004478BC  A3 83 00 06 */	lhz r28, 6(r3)
/* 8044A980 004478C0  7F A3 EB 78 */	mr r3, r29
/* 8044A984 004478C4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8044A988 004478C8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8044A98C 004478CC  7D 89 03 A6 */	mtctr r12
/* 8044A990 004478D0  4E 80 04 21 */	bctrl 
/* 8044A994 004478D4  7C 7B 19 D6 */	mullw r3, r27, r3
/* 8044A998 004478D8  38 00 01 2C */	li r0, 0x12c
/* 8044A99C 004478DC  80 BF 00 50 */	lwz r5, 0x70(r31)
/* 8044A9A0 004478E0  38 9E 00 CC */	addi r4, r30, 0xcc
/* 8044A9A4 004478E4  90 01 00 08 */	stw r0, 8(r1)
/* 8044A9A8 004478E8  90 05 00 40 */	stw r0, 0x40(r5)
/* 8044A9AC 004478EC  38 63 00 3C */	addi r3, r3, 0x3c
/* 8044A9B0 004478F0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8044A9B4 004478F4  7C 03 E0 50 */	subf r0, r3, r28
/* 8044A9B8 004478F8  90 05 00 44 */	stw r0, 0x44(r5)
/* 8044A9BC 004478FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8044A9C0 00447900  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A9C4 00447904  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044A9C8 00447908  4B FD 89 9D */	bl heapStatusEnd__6SystemFPc
/* 8044A9CC 0044790C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044A9D0 00447910  28 00 00 00 */	cmplwi r0, 0
/* 8044A9D4 00447914  41 82 00 18 */	beq .L_8044A9EC
/* 8044A9D8 00447918  38 7E 01 10 */	addi r3, r30, 0x110
/* 8044A9DC 0044791C  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044A9E0 00447920  38 80 00 76 */	li r4, 0x76
/* 8044A9E4 00447924  4C C6 31 82 */	crclr 6
/* 8044A9E8 00447928  4B BD FC 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A9EC:
/* 8044A9EC 0044792C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044A9F0 00447930  28 00 00 00 */	cmplwi r0, 0
/* 8044A9F4 00447934  40 82 00 6C */	bne .L_8044AA60
/* 8044A9F8 00447938  38 60 00 30 */	li r3, 0x30
/* 8044A9FC 0044793C  4B BD 94 A9 */	bl __nw__FUl
/* 8044AA00 00447940  7C 65 1B 79 */	or. r5, r3, r3
/* 8044AA04 00447944  41 82 00 58 */	beq .L_8044AA5C
/* 8044AA08 00447948  7C BB 2B 78 */	mr r27, r5
/* 8044AA0C 0044794C  4B BD BE C5 */	bl initiate__10JSUPtrListFv
/* 8044AA10 00447950  3C 60 80 4B */	lis r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
/* 8044AA14 00447954  34 9B 00 0C */	addic. r4, r27, 0xc
/* 8044AA18 00447958  38 03 0C E0 */	addi r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
/* 8044AA1C 0044795C  90 1B 00 0C */	stw r0, 0xc(r27)
/* 8044AA20 00447960  41 82 00 08 */	beq .L_8044AA28
/* 8044AA24 00447964  38 84 FF F4 */	addi r4, r4, -12
.L_8044AA28:
/* 8044AA28 00447968  90 8D 91 BC */	stw r4, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044AA2C 0044796C  38 7B 00 10 */	addi r3, r27, 0x10
/* 8044AA30 00447970  4B BD 25 9D */	bl __ct__11JKRDisposerFv
/* 8044AA34 00447974  3C 60 80 4F */	lis r3, __vt__Q23PSM6ObjMgr@ha
/* 8044AA38 00447978  38 00 00 00 */	li r0, 0
/* 8044AA3C 0044797C  38 63 F2 0C */	addi r3, r3, __vt__Q23PSM6ObjMgr@l
/* 8044AA40 00447980  7F 65 DB 78 */	mr r5, r27
/* 8044AA44 00447984  90 7B 00 28 */	stw r3, 0x28(r27)
/* 8044AA48 00447988  38 83 00 08 */	addi r4, r3, 8
/* 8044AA4C 0044798C  38 63 00 14 */	addi r3, r3, 0x14
/* 8044AA50 00447990  90 9B 00 0C */	stw r4, 0xc(r27)
/* 8044AA54 00447994  90 7B 00 10 */	stw r3, 0x10(r27)
/* 8044AA58 00447998  90 1B 00 2C */	stw r0, 0x2c(r27)
.L_8044AA5C:
/* 8044AA5C 0044799C  90 AD 91 BC */	stw r5, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
.L_8044AA60:
/* 8044AA60 004479A0  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044AA64 004479A4  28 00 00 00 */	cmplwi r0, 0
/* 8044AA68 004479A8  40 82 00 18 */	bne .L_8044AA80
/* 8044AA6C 004479AC  38 7E 01 10 */	addi r3, r30, 0x110
/* 8044AA70 004479B0  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044AA74 004479B4  38 80 00 79 */	li r4, 0x79
/* 8044AA78 004479B8  4C C6 31 82 */	crclr 6
/* 8044AA7C 004479BC  4B BD FB C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AA80:
/* 8044AA80 004479C0  38 60 00 EC */	li r3, 0xec
/* 8044AA84 004479C4  4B BD 94 21 */	bl __nw__FUl
/* 8044AA88 004479C8  7C 60 1B 79 */	or. r0, r3, r3
/* 8044AA8C 004479CC  41 82 00 0C */	beq .L_8044AA98
/* 8044AA90 004479D0  48 00 53 61 */	bl __ct__Q24Game9THPPlayerFv
/* 8044AA94 004479D4  7C 60 1B 78 */	mr r0, r3
.L_8044AA98:
/* 8044AA98 004479D8  90 1F 2F 38 */	stw r0, 0x2f58(r31)
/* 8044AA9C 004479DC  80 7F 2F 38 */	lwz r3, 0x2f58(r31)
/* 8044AAA0 004479E0  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8044AAA4 004479E4  48 00 59 21 */	bl init__Q24Game9THPPlayerFP7JKRHeap
/* 8044AAA8 004479E8  80 9F 2F 38 */	lwz r4, 0x2f58(r31)
/* 8044AAAC 004479EC  28 04 00 00 */	cmplwi r4, 0
/* 8044AAB0 004479F0  41 82 00 08 */	beq .L_8044AAB8
/* 8044AAB4 004479F4  38 84 00 18 */	addi r4, r4, 0x18
.L_8044AAB8:
/* 8044AAB8 004479F8  7F E3 FB 78 */	mr r3, r31
/* 8044AABC 004479FC  4B D1 A4 F5 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8044AAC0 00447A00  4B FB 14 2D */	bl create__Q26Screen9Game2DMgrFv
/* 8044AAC4 00447A04  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044AAC8 00447A08  80 9F 00 C4 */	lwz r4, 0xe4(r31)
/* 8044AACC 00447A0C  4B FB 15 AD */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8044AAD0 00447A10  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044AAD4 00447A14  38 00 00 00 */	li r0, 0
/* 8044AAD8 00447A18  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044AADC 00447A1C  98 03 01 0C */	stb r0, 0x10c(r3)
/* 8044AAE0 00447A20  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044AAE4 00447A24  98 03 01 30 */	stb r0, 0x130(r3)
/* 8044AAE8 00447A28  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8044AAEC 00447A2C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 8044AAF0 00447A30  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8044AAF4 00447A34  7C 08 03 A6 */	mtlr r0
/* 8044AAF8 00447A38  38 21 00 50 */	addi r1, r1, 0x50
/* 8044AAFC 00447A3C  4E 80 00 20 */	blr 
.endfn init__Q25Title7SectionFv
.else
.fn init__Q25Title7SectionFv, global
/* 8044A6CC 0044760C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8044A6D0 00447610  7C 08 02 A6 */	mflr r0
/* 8044A6D4 00447614  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044A6D8 00447618  38 A0 00 00 */	li r5, 0
/* 8044A6DC 0044761C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8044A6E0 00447620  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 8044A6E4 00447624  7C 7F 1B 78 */	mr r31, r3
/* 8044A6E8 00447628  3B C4 B1 00 */	addi r30, r4, lbl_8049B100@l
/* 8044A6EC 0044762C  38 9E 00 CC */	addi r4, r30, 0xcc
/* 8044A6F0 00447630  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A6F4 00447634  4B FD 8C 69 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A6F8 00447638  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A6FC 0044763C  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8044A700 00447640  38 A0 00 00 */	li r5, 0
/* 8044A704 00447644  4B FD 8C 59 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A708 00447648  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A70C 0044764C  38 9E 00 E0 */	addi r4, r30, 0xe0
/* 8044A710 00447650  4B FD 8C 55 */	bl heapStatusEnd__6SystemFPc
/* 8044A714 00447654  38 60 00 1C */	li r3, 0x1c
/* 8044A718 00447658  4B BD 97 8D */	bl __nw__FUl
/* 8044A71C 0044765C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044A720 00447660  41 82 00 20 */	beq .L_8044A740
/* 8044A724 00447664  7F E4 FB 78 */	mr r4, r31
/* 8044A728 00447668  4B D1 A8 B1 */	bl __ct__Q24Game11HIORootNodeFP7Section
/* 8044A72C 0044766C  3C 60 80 4F */	lis r3, __vt__11HIORootNode@ha
/* 8044A730 00447670  38 1E 00 F0 */	addi r0, r30, 0xf0
/* 8044A734 00447674  38 63 D2 48 */	addi r3, r3, __vt__11HIORootNode@l
/* 8044A738 00447678  90 7D 00 00 */	stw r3, 0(r29)
/* 8044A73C 0044767C  90 1D 00 14 */	stw r0, 0x14(r29)
.L_8044A740:
/* 8044A740 00447680  7F E3 FB 78 */	mr r3, r31
/* 8044A744 00447684  7F A4 EB 78 */	mr r4, r29
/* 8044A748 00447688  81 9F 00 00 */	lwz r12, 0(r31)
/* 8044A74C 0044768C  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 8044A750 00447690  7D 89 03 A6 */	mtctr r12
/* 8044A754 00447694  4E 80 04 21 */	bctrl 
/* 8044A758 00447698  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A75C 0044769C  38 9E 01 04 */	addi r4, r30, 0x104
/* 8044A760 004476A0  38 A0 00 00 */	li r5, 0
/* 8044A764 004476A4  4B FD 8B F9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044A768 004476A8  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8044A76C 004476AC  38 60 00 00 */	li r3, 0
/* 8044A770 004476B0  38 A0 00 02 */	li r5, 2
/* 8044A774 004476B4  38 C0 00 00 */	li r6, 0
/* 8044A778 004476B8  4B C3 F3 B1 */	bl createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
/* 8044A77C 004476BC  7C 64 1B 78 */	mr r4, r3
/* 8044A780 004476C0  7F E3 FB 78 */	mr r3, r31
/* 8044A784 004476C4  38 A0 00 01 */	li r5, 1
/* 8044A788 004476C8  4B D1 A6 4D */	bl setDisplay__Q24Game14BaseHIOSectionFP10JFWDisplayi
/* 8044A78C 004476CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A790 004476D0  38 9E 01 04 */	addi r4, r30, 0x104
/* 8044A794 004476D4  4B FD 8B D1 */	bl heapStatusEnd__6SystemFPc
/* 8044A798 004476D8  38 60 00 B0 */	li r3, 0xb0
/* 8044A79C 004476DC  4B BD 97 09 */	bl __nw__FUl
/* 8044A7A0 004476E0  7C 60 1B 79 */	or. r0, r3, r3
/* 8044A7A4 004476E4  41 82 00 10 */	beq .L_8044A7B4
/* 8044A7A8 004476E8  38 80 00 00 */	li r4, 0
/* 8044A7AC 004476EC  4B FD A6 A9 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 8044A7B0 004476F0  7C 60 1B 78 */	mr r0, r3
.L_8044A7B4:
/* 8044A7B4 004476F4  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 8044A7B8 004476F8  38 60 00 B0 */	li r3, 0xb0
/* 8044A7BC 004476FC  4B BD 96 E9 */	bl __nw__FUl
/* 8044A7C0 00447700  7C 60 1B 79 */	or. r0, r3, r3
/* 8044A7C4 00447704  41 82 00 10 */	beq .L_8044A7D4
/* 8044A7C8 00447708  38 80 00 01 */	li r4, 1
/* 8044A7CC 0044770C  4B FD A6 89 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 8044A7D0 00447710  7C 60 1B 78 */	mr r0, r3
.L_8044A7D4:
/* 8044A7D4 00447714  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 8044A7D8 00447718  38 80 00 01 */	li r4, 1
/* 8044A7DC 0044771C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A7E0 00447720  4B FD 8D 4D */	bl setFrameRate__6SystemFi
/* 8044A7E4 00447724  38 60 00 60 */	li r3, 0x60
/* 8044A7E8 00447728  4B BD 96 BD */	bl __nw__FUl
/* 8044A7EC 0044772C  7C 60 1B 79 */	or. r0, r3, r3
/* 8044A7F0 00447730  41 82 00 18 */	beq .L_8044A808
/* 8044A7F4 00447734  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 8044A7F8 00447738  38 C0 00 00 */	li r6, 0
/* 8044A7FC 0044773C  80 AD 89 D8 */	lwz r5, systemFont__9JFWSystem@sda21(r13)
/* 8044A800 00447740  48 00 B9 85 */	bl __ct__4MenuFP10JUTGamePadP7JUTFontb
/* 8044A804 00447744  7C 60 1B 78 */	mr r0, r3
.L_8044A808:
/* 8044A808 00447748  90 1F 00 50 */	stw r0, 0x50(r31)
/* 8044A80C 0044774C  38 00 01 04 */	li r0, 0x104
/* 8044A810 00447750  38 60 00 14 */	li r3, 0x14
/* 8044A814 00447754  80 9F 00 50 */	lwz r4, 0x50(r31)
/* 8044A818 00447758  90 04 00 48 */	stw r0, 0x48(r4)
/* 8044A81C 0044775C  4B BD 96 89 */	bl __nw__FUl
/* 8044A820 00447760  7C 66 1B 79 */	or. r6, r3, r3
/* 8044A824 00447764  41 82 00 4C */	beq .L_8044A870
/* 8044A828 00447768  3C 60 80 4F */	lis r3, lbl_804ED1C0@ha
/* 8044A82C 0044776C  3C 80 80 4F */	lis r4, "__vt__18IDelegate1<R4Menu>"@ha
/* 8044A830 00447770  39 03 D1 C0 */	addi r8, r3, lbl_804ED1C0@l
/* 8044A834 00447774  3C 60 80 4F */	lis r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@ha
/* 8044A838 00447778  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044A83C 0044777C  38 84 D2 3C */	addi r4, r4, "__vt__18IDelegate1<R4Menu>"@l
/* 8044A840 00447780  80 A8 00 04 */	lwz r5, 4(r8)
/* 8044A844 00447784  38 03 D2 30 */	addi r0, r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@l
/* 8044A848 00447788  80 68 00 08 */	lwz r3, 8(r8)
/* 8044A84C 0044778C  90 E1 00 24 */	stw r7, 0x24(r1)
/* 8044A850 00447790  90 86 00 00 */	stw r4, 0(r6)
/* 8044A854 00447794  90 06 00 00 */	stw r0, 0(r6)
/* 8044A858 00447798  93 E6 00 04 */	stw r31, 4(r6)
/* 8044A85C 0044779C  90 E6 00 08 */	stw r7, 8(r6)
/* 8044A860 004477A0  90 A6 00 0C */	stw r5, 0xc(r6)
/* 8044A864 004477A4  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8044A868 004477A8  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8044A86C 004477AC  90 66 00 10 */	stw r3, 0x10(r6)
.L_8044A870:
/* 8044A870 004477B0  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8044A874 004477B4  38 80 00 20 */	li r4, 0x20
/* 8044A878 004477B8  38 A0 02 00 */	li r5, 0x200
/* 8044A87C 004477BC  48 00 BA F5 */	bl "addKeyEvent__4MenuFQ34Menu8KeyEvent9cTypeFlagUlP18IDelegate1<R4Menu>"
/* 8044A880 004477C0  38 60 00 14 */	li r3, 0x14
/* 8044A884 004477C4  4B BD 96 21 */	bl __nw__FUl
/* 8044A888 004477C8  7C 66 1B 79 */	or. r6, r3, r3
/* 8044A88C 004477CC  41 82 00 4C */	beq .L_8044A8D8
/* 8044A890 004477D0  3C 60 80 4F */	lis r3, lbl_804ED1CC@ha
/* 8044A894 004477D4  3C 80 80 4F */	lis r4, "__vt__18IDelegate1<R4Menu>"@ha
/* 8044A898 004477D8  39 03 D1 CC */	addi r8, r3, lbl_804ED1CC@l
/* 8044A89C 004477DC  3C 60 80 4F */	lis r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@ha
/* 8044A8A0 004477E0  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044A8A4 004477E4  38 84 D2 3C */	addi r4, r4, "__vt__18IDelegate1<R4Menu>"@l
/* 8044A8A8 004477E8  80 A8 00 04 */	lwz r5, 4(r8)
/* 8044A8AC 004477EC  38 03 D2 30 */	addi r0, r3, "__vt__34Delegate1<Q25Title7Section,R4Menu>"@l
/* 8044A8B0 004477F0  80 68 00 08 */	lwz r3, 8(r8)
/* 8044A8B4 004477F4  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8044A8B8 004477F8  90 86 00 00 */	stw r4, 0(r6)
/* 8044A8BC 004477FC  90 06 00 00 */	stw r0, 0(r6)
/* 8044A8C0 00447800  93 E6 00 04 */	stw r31, 4(r6)
/* 8044A8C4 00447804  90 E6 00 08 */	stw r7, 8(r6)
/* 8044A8C8 00447808  90 A6 00 0C */	stw r5, 0xc(r6)
/* 8044A8CC 0044780C  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8044A8D0 00447810  90 61 00 20 */	stw r3, 0x20(r1)
/* 8044A8D4 00447814  90 66 00 10 */	stw r3, 0x10(r6)
.L_8044A8D8:
/* 8044A8D8 00447818  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8044A8DC 0044781C  38 80 00 10 */	li r4, 0x10
/* 8044A8E0 00447820  38 A0 01 00 */	li r5, 0x100
/* 8044A8E4 00447824  48 00 BA 8D */	bl "addKeyEvent__4MenuFQ34Menu8KeyEvent9cTypeFlagUlP18IDelegate1<R4Menu>"
/* 8044A8E8 00447828  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044A8EC 0044782C  3B 60 00 00 */	li r27, 0
/* 8044A8F0 00447830  3B A3 41 FC */	addi r29, r3, gGameConfig__4Game@l
/* 8044A8F4 00447834  3B 80 00 00 */	li r28, 0
.L_8044A8F8:
/* 8044A8F8 00447838  7F 83 E3 78 */	mr r3, r28
/* 8044A8FC 0044783C  4B FD 9A 71 */	bl getSectionInfo__8GameFlowFi
/* 8044A900 00447840  7C 65 1B 79 */	or. r5, r3, r3
/* 8044A904 00447844  41 82 00 48 */	beq .L_8044A94C
/* 8044A908 00447848  80 1D 01 E8 */	lwz r0, 0x1e8(r29)
/* 8044A90C 0044784C  2C 00 00 00 */	cmpwi r0, 0
/* 8044A910 00447850  41 82 00 10 */	beq .L_8044A920
/* 8044A914 00447854  88 05 00 06 */	lbz r0, 6(r5)
/* 8044A918 00447858  28 00 00 00 */	cmplwi r0, 0
/* 8044A91C 0044785C  41 82 00 4C */	beq .L_8044A968
.L_8044A920:
/* 8044A920 00447860  88 05 00 05 */	lbz r0, 5(r5)
/* 8044A924 00447864  28 00 00 00 */	cmplwi r0, 0
/* 8044A928 00447868  41 82 00 40 */	beq .L_8044A968
/* 8044A92C 0044786C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8044A930 00447870  7F 84 E3 78 */	mr r4, r28
/* 8044A934 00447874  80 A5 00 00 */	lwz r5, 0(r5)
/* 8044A938 00447878  38 C0 00 00 */	li r6, 0
/* 8044A93C 0044787C  38 E0 00 01 */	li r7, 1
/* 8044A940 00447880  48 00 B9 71 */	bl "addOption__4MenuFiPcP18IDelegate1<R4Menu>b"
/* 8044A944 00447884  3B 7B 00 01 */	addi r27, r27, 1
/* 8044A948 00447888  48 00 00 20 */	b .L_8044A968
.L_8044A94C:
/* 8044A94C 0044788C  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 8044A950 00447890  7F 84 E3 78 */	mr r4, r28
/* 8044A954 00447894  38 A2 27 24 */	addi r5, r2, lbl_80520A84@sda21
/* 8044A958 00447898  38 C0 00 00 */	li r6, 0
/* 8044A95C 0044789C  38 E0 00 01 */	li r7, 1
/* 8044A960 004478A0  48 00 B9 51 */	bl "addOption__4MenuFiPcP18IDelegate1<R4Menu>b"
/* 8044A964 004478A4  3B 7B 00 01 */	addi r27, r27, 1
.L_8044A968:
/* 8044A968 004478A8  3B 9C 00 01 */	addi r28, r28, 1
/* 8044A96C 004478AC  2C 1C 00 23 */	cmpwi r28, 0x23
/* 8044A970 004478B0  41 80 FF 88 */	blt .L_8044A8F8
/* 8044A974 004478B4  83 AD 89 D8 */	lwz r29, systemFont__9JFWSystem@sda21(r13)
/* 8044A978 004478B8  4B FD 88 AD */	bl getRenderModeObj__6SystemFv
/* 8044A97C 004478BC  A3 83 00 06 */	lhz r28, 6(r3)
/* 8044A980 004478C0  7F A3 EB 78 */	mr r3, r29
/* 8044A984 004478C4  81 9D 00 00 */	lwz r12, 0(r29)
/* 8044A988 004478C8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8044A98C 004478CC  7D 89 03 A6 */	mtctr r12
/* 8044A990 004478D0  4E 80 04 21 */	bctrl 
/* 8044A994 004478D4  7C 7B 19 D6 */	mullw r3, r27, r3
/* 8044A998 004478D8  38 00 01 2C */	li r0, 0x12c
/* 8044A99C 004478DC  80 BF 00 50 */	lwz r5, 0x50(r31)
/* 8044A9A0 004478E0  38 9E 00 CC */	addi r4, r30, 0xcc
/* 8044A9A4 004478E4  90 01 00 08 */	stw r0, 8(r1)
/* 8044A9A8 004478E8  90 05 00 40 */	stw r0, 0x40(r5)
/* 8044A9AC 004478EC  38 63 00 3C */	addi r3, r3, 0x3c
/* 8044A9B0 004478F0  90 01 00 10 */	stw r0, 0x10(r1)
/* 8044A9B4 004478F4  7C 03 E0 50 */	subf r0, r3, r28
/* 8044A9B8 004478F8  90 05 00 44 */	stw r0, 0x44(r5)
/* 8044A9BC 004478FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8044A9C0 00447900  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044A9C4 00447904  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044A9C8 00447908  4B FD 89 9D */	bl heapStatusEnd__6SystemFPc
/* 8044A9CC 0044790C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044A9D0 00447910  28 00 00 00 */	cmplwi r0, 0
/* 8044A9D4 00447914  41 82 00 18 */	beq .L_8044A9EC
/* 8044A9D8 00447918  38 7E 01 10 */	addi r3, r30, 0x110
/* 8044A9DC 0044791C  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044A9E0 00447920  38 80 00 76 */	li r4, 0x76
/* 8044A9E4 00447924  4C C6 31 82 */	crclr 6
/* 8044A9E8 00447928  4B BD FC 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044A9EC:
/* 8044A9EC 0044792C  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044A9F0 00447930  28 00 00 00 */	cmplwi r0, 0
/* 8044A9F4 00447934  40 82 00 6C */	bne .L_8044AA60
/* 8044A9F8 00447938  38 60 00 30 */	li r3, 0x30
/* 8044A9FC 0044793C  4B BD 94 A9 */	bl __nw__FUl
/* 8044AA00 00447940  7C 65 1B 79 */	or. r5, r3, r3
/* 8044AA04 00447944  41 82 00 58 */	beq .L_8044AA5C
/* 8044AA08 00447948  7C BB 2B 78 */	mr r27, r5
/* 8044AA0C 0044794C  4B BD BE C5 */	bl initiate__10JSUPtrListFv
/* 8044AA10 00447950  3C 60 80 4B */	lis r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@ha
/* 8044AA14 00447954  34 9B 00 0C */	addic. r4, r27, 0xc
/* 8044AA18 00447958  38 03 0C E0 */	addi r0, r3, "__vt__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@l
/* 8044AA1C 0044795C  90 1B 00 0C */	stw r0, 0xc(r27)
/* 8044AA20 00447960  41 82 00 08 */	beq .L_8044AA28
/* 8044AA24 00447964  38 84 FF F4 */	addi r4, r4, -12
.L_8044AA28:
/* 8044AA28 00447968  90 8D 91 BC */	stw r4, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044AA2C 0044796C  38 7B 00 10 */	addi r3, r27, 0x10
/* 8044AA30 00447970  4B BD 25 9D */	bl __ct__11JKRDisposerFv
/* 8044AA34 00447974  3C 60 80 4F */	lis r3, __vt__Q23PSM6ObjMgr@ha
/* 8044AA38 00447978  38 00 00 00 */	li r0, 0
/* 8044AA3C 0044797C  38 63 F2 0C */	addi r3, r3, __vt__Q23PSM6ObjMgr@l
/* 8044AA40 00447980  7F 65 DB 78 */	mr r5, r27
/* 8044AA44 00447984  90 7B 00 28 */	stw r3, 0x28(r27)
/* 8044AA48 00447988  38 83 00 08 */	addi r4, r3, 8
/* 8044AA4C 0044798C  38 63 00 14 */	addi r3, r3, 0x14
/* 8044AA50 00447990  90 9B 00 0C */	stw r4, 0xc(r27)
/* 8044AA54 00447994  90 7B 00 10 */	stw r3, 0x10(r27)
/* 8044AA58 00447998  90 1B 00 2C */	stw r0, 0x2c(r27)
.L_8044AA5C:
/* 8044AA5C 0044799C  90 AD 91 BC */	stw r5, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
.L_8044AA60:
/* 8044AA60 004479A0  80 0D 91 BC */	lwz r0, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 8044AA64 004479A4  28 00 00 00 */	cmplwi r0, 0
/* 8044AA68 004479A8  40 82 00 18 */	bne .L_8044AA80
/* 8044AA6C 004479AC  38 7E 01 10 */	addi r3, r30, 0x110
/* 8044AA70 004479B0  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044AA74 004479B4  38 80 00 79 */	li r4, 0x79
/* 8044AA78 004479B8  4C C6 31 82 */	crclr 6
/* 8044AA7C 004479BC  4B BD FB C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AA80:
/* 8044AA80 004479C0  38 60 00 EC */	li r3, 0xec
/* 8044AA84 004479C4  4B BD 94 21 */	bl __nw__FUl
/* 8044AA88 004479C8  7C 60 1B 79 */	or. r0, r3, r3
/* 8044AA8C 004479CC  41 82 00 0C */	beq .L_8044AA98
/* 8044AA90 004479D0  48 00 53 61 */	bl __ct__Q24Game9THPPlayerFv
/* 8044AA94 004479D4  7C 60 1B 78 */	mr r0, r3
.L_8044AA98:
/* 8044AA98 004479D8  90 1F 2F 38 */	stw r0, 0x2f38(r31)
/* 8044AA9C 004479DC  80 7F 2F 38 */	lwz r3, 0x2f38(r31)
/* 8044AAA0 004479E0  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 8044AAA4 004479E4  48 00 59 21 */	bl init__Q24Game9THPPlayerFP7JKRHeap
/* 8044AAA8 004479E8  80 9F 2F 38 */	lwz r4, 0x2f38(r31)
/* 8044AAAC 004479EC  28 04 00 00 */	cmplwi r4, 0
/* 8044AAB0 004479F0  41 82 00 08 */	beq .L_8044AAB8
/* 8044AAB4 004479F4  38 84 00 18 */	addi r4, r4, 0x18
.L_8044AAB8:
/* 8044AAB8 004479F8  7F E3 FB 78 */	mr r3, r31
/* 8044AABC 004479FC  4B D1 A4 F5 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 8044AAC0 00447A00  4B FB 14 2D */	bl create__Q26Screen9Game2DMgrFv
/* 8044AAC4 00447A04  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044AAC8 00447A08  80 9F 00 C4 */	lwz r4, 0xc4(r31)
/* 8044AACC 00447A0C  4B FB 15 AD */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8044AAD0 00447A10  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044AAD4 00447A14  38 00 00 00 */	li r0, 0
/* 8044AAD8 00447A18  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044AADC 00447A1C  98 03 01 0C */	stb r0, 0x10c(r3)
/* 8044AAE0 00447A20  80 6D 88 F8 */	lwz r3, sManager__10JUTProcBar@sda21(r13)
/* 8044AAE4 00447A24  98 03 01 30 */	stb r0, 0x130(r3)
/* 8044AAE8 00447A28  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8044AAEC 00447A2C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 8044AAF0 00447A30  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8044AAF4 00447A34  7C 08 03 A6 */	mtlr r0
/* 8044AAF8 00447A38  38 21 00 50 */	addi r1, r1, 0x50
/* 8044AAFC 00447A3C  4E 80 00 20 */	blr 
.endfn init__Q25Title7SectionFv
.endif

.fn menuCancel__Q25Title7SectionFR4Menu, global
/* 8044AB00 00447A40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044AB04 00447A44  7C 08 02 A6 */	mflr r0
/* 8044AB08 00447A48  38 80 18 01 */	li r4, 0x1801
/* 8044AB0C 00447A4C  38 A0 00 00 */	li r5, 0
/* 8044AB10 00447A50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044AB14 00447A54  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8044AB18 00447A58  4B EE DB 19 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 8044AB1C 00447A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044AB20 00447A60  7C 08 03 A6 */	mtlr r0
/* 8044AB24 00447A64  38 21 00 10 */	addi r1, r1, 0x10
/* 8044AB28 00447A68  4E 80 00 20 */	blr 
.endfn menuCancel__Q25Title7SectionFR4Menu

.fn menuSelect__Q25Title7SectionFR4Menu, global
/* 8044AB2C 00447A6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044AB30 00447A70  7C 08 02 A6 */	mflr r0
/* 8044AB34 00447A74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044AB38 00447A78  80 04 00 34 */	lwz r0, 0x34(r4)
/* 8044AB3C 00447A7C  2C 00 00 02 */	cmpwi r0, 2
/* 8044AB40 00447A80  41 82 00 0C */	beq .L_8044AB4C
/* 8044AB44 00447A84  2C 00 00 01 */	cmpwi r0, 1
/* 8044AB48 00447A88  40 82 00 28 */	bne .L_8044AB70
.L_8044AB4C:
/* 8044AB4C 00447A8C  38 00 00 00 */	li r0, 0
/* 8044AB50 00447A90  38 A0 00 00 */	li r5, 0
/* 8044AB54 00447A94  98 03 00 34 */	stb r0, 0x34(r3)
/* 8044AB58 00447A98  80 C4 00 24 */	lwz r6, 0x24(r4)
/* 8044AB5C 00447A9C  38 80 18 00 */	li r4, 0x1800
/* 8044AB60 00447AA0  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8044AB64 00447AA4  80 06 00 0C */	lwz r0, 0xc(r6)
/* 8044AB68 00447AA8  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AB6C 00447AAC  4B EE DA C5 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8044AB70:
/* 8044AB70 00447AB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044AB74 00447AB4  7C 08 03 A6 */	mtlr r0
/* 8044AB78 00447AB8  38 21 00 10 */	addi r1, r1, 0x10
/* 8044AB7C 00447ABC  4E 80 00 20 */	blr 
.endfn menuSelect__Q25Title7SectionFR4Menu

.if version == 0
.fn doDraw__Q25Title7SectionFR8Graphics, global
/* 8044AB80 00447AC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044AB84 00447AC4  7C 08 02 A6 */	mflr r0
/* 8044AB88 00447AC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044AB8C 00447ACC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044AB90 00447AD0  7C 9F 23 78 */	mr r31, r4
/* 8044AB94 00447AD4  93 C1 00 08 */	stw r30, 8(r1)
/* 8044AB98 00447AD8  7C 7E 1B 78 */	mr r30, r3
/* 8044AB9C 00447ADC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8044ABA0 00447AE0  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 8044ABA4 00447AE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044ABA8 00447AE8  7D 89 03 A6 */	mtctr r12
/* 8044ABAC 00447AEC  4E 80 04 21 */	bctrl 
/* 8044ABB0 00447AF0  80 1E 00 48 */	lwz r0, 0x68(r30)
/* 8044ABB4 00447AF4  2C 00 00 03 */	cmpwi r0, 3
/* 8044ABB8 00447AF8  41 82 00 44 */	beq .L_8044ABFC
/* 8044ABBC 00447AFC  40 80 00 18 */	bge .L_8044ABD4
/* 8044ABC0 00447B00  2C 00 00 02 */	cmpwi r0, 2
/* 8044ABC4 00447B04  40 80 00 2C */	bge .L_8044ABF0
/* 8044ABC8 00447B08  2C 00 00 00 */	cmpwi r0, 0
/* 8044ABCC 00447B0C  40 80 00 18 */	bge .L_8044ABE4
/* 8044ABD0 00447B10  48 00 00 74 */	b .L_8044AC44
.L_8044ABD4:
/* 8044ABD4 00447B14  2C 00 00 05 */	cmpwi r0, 5
/* 8044ABD8 00447B18  41 82 00 6C */	beq .L_8044AC44
/* 8044ABDC 00447B1C  40 80 00 68 */	bge .L_8044AC44
/* 8044ABE0 00447B20  48 00 00 4C */	b .L_8044AC2C
.L_8044ABE4:
/* 8044ABE4 00447B24  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044ABE8 00447B28  4B FA 02 99 */	bl draw__Q23ebi13TMainTitleMgrFv
/* 8044ABEC 00447B2C  48 00 00 58 */	b .L_8044AC44
.L_8044ABF0:
/* 8044ABF0 00447B30  38 7E 17 30 */	addi r3, r30, 0x1750
/* 8044ABF4 00447B34  4B F8 57 15 */	bl draw__Q33ebi6Option4TMgrFv
/* 8044ABF8 00447B38  48 00 00 4C */	b .L_8044AC44
.L_8044ABFC:
/* 8044ABFC 00447B3C  80 1E 2F 3C */	lwz r0, 0x2f5c(r30)
/* 8044AC00 00447B40  2C 00 00 00 */	cmpwi r0, 0
/* 8044AC04 00447B44  41 80 00 1C */	blt .L_8044AC20
/* 8044AC08 00447B48  80 7E 2F 38 */	lwz r3, 0x2f58(r30)
/* 8044AC0C 00447B4C  7F E4 FB 78 */	mr r4, r31
/* 8044AC10 00447B50  81 83 00 00 */	lwz r12, 0(r3)
/* 8044AC14 00447B54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8044AC18 00447B58  7D 89 03 A6 */	mtctr r12
/* 8044AC1C 00447B5C  4E 80 04 21 */	bctrl 
.L_8044AC20:
/* 8044AC20 00447B60  38 7E 26 78 */	addi r3, r30, 0x2698
/* 8044AC24 00447B64  4B FA 4B 71 */	bl draw__Q33ebi5Omake4TMgrFv
/* 8044AC28 00447B68  48 00 00 1C */	b .L_8044AC44
.L_8044AC2C:
/* 8044AC2C 00447B6C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044AC30 00447B70  7F E4 FB 78 */	mr r4, r31
/* 8044AC34 00447B74  4B FB 14 1D */	bl draw__Q26Screen9Game2DMgrFR8Graphics
/* 8044AC38 00447B78  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044AC3C 00447B7C  7F E4 FB 78 */	mr r4, r31
/* 8044AC40 00447B80  4B FB 14 35 */	bl drawIndirect__Q26Screen9Game2DMgrFR8Graphics
.L_8044AC44:
/* 8044AC44 00447B84  38 7F 01 90 */	addi r3, r31, 0x190
/* 8044AC48 00447B88  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 8044AC4C 00447B8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044AC50 00447B90  7D 89 03 A6 */	mtctr r12
/* 8044AC54 00447B94  4E 80 04 21 */	bctrl 
/* 8044AC58 00447B98  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044AC5C 00447B9C  38 80 00 01 */	li r4, 1
/* 8044AC60 00447BA0  38 A0 00 00 */	li r5, 0
/* 8044AC64 00447BA4  4B F6 E9 71 */	bl draw__14TParticle2dMgrFUcUs
/* 8044AC68 00447BA8  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044AC6C 00447BAC  38 80 00 00 */	li r4, 0
/* 8044AC70 00447BB0  38 A0 00 00 */	li r5, 0
/* 8044AC74 00447BB4  4B F6 E9 61 */	bl draw__14TParticle2dMgrFUcUs
/* 8044AC78 00447BB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044AC7C 00447BBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044AC80 00447BC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044AC84 00447BC4  7C 08 03 A6 */	mtlr r0
/* 8044AC88 00447BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8044AC8C 00447BCC  4E 80 00 20 */	blr 
.endfn doDraw__Q25Title7SectionFR8Graphics
.else
.fn doDraw__Q25Title7SectionFR8Graphics, global
/* 8044AB80 00447AC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044AB84 00447AC4  7C 08 02 A6 */	mflr r0
/* 8044AB88 00447AC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044AB8C 00447ACC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044AB90 00447AD0  7C 9F 23 78 */	mr r31, r4
/* 8044AB94 00447AD4  93 C1 00 08 */	stw r30, 8(r1)
/* 8044AB98 00447AD8  7C 7E 1B 78 */	mr r30, r3
/* 8044AB9C 00447ADC  38 7F 00 BC */	addi r3, r31, 0xbc
/* 8044ABA0 00447AE0  81 84 00 BC */	lwz r12, 0xbc(r4)
/* 8044ABA4 00447AE4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044ABA8 00447AE8  7D 89 03 A6 */	mtctr r12
/* 8044ABAC 00447AEC  4E 80 04 21 */	bctrl 
/* 8044ABB0 00447AF0  80 1E 00 48 */	lwz r0, 0x48(r30)
/* 8044ABB4 00447AF4  2C 00 00 03 */	cmpwi r0, 3
/* 8044ABB8 00447AF8  41 82 00 44 */	beq .L_8044ABFC
/* 8044ABBC 00447AFC  40 80 00 18 */	bge .L_8044ABD4
/* 8044ABC0 00447B00  2C 00 00 02 */	cmpwi r0, 2
/* 8044ABC4 00447B04  40 80 00 2C */	bge .L_8044ABF0
/* 8044ABC8 00447B08  2C 00 00 00 */	cmpwi r0, 0
/* 8044ABCC 00447B0C  40 80 00 18 */	bge .L_8044ABE4
/* 8044ABD0 00447B10  48 00 00 74 */	b .L_8044AC44
.L_8044ABD4:
/* 8044ABD4 00447B14  2C 00 00 05 */	cmpwi r0, 5
/* 8044ABD8 00447B18  41 82 00 6C */	beq .L_8044AC44
/* 8044ABDC 00447B1C  40 80 00 68 */	bge .L_8044AC44
/* 8044ABE0 00447B20  48 00 00 4C */	b .L_8044AC2C
.L_8044ABE4:
/* 8044ABE4 00447B24  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044ABE8 00447B28  4B FA 02 99 */	bl draw__Q23ebi13TMainTitleMgrFv
/* 8044ABEC 00447B2C  48 00 00 58 */	b .L_8044AC44
.L_8044ABF0:
/* 8044ABF0 00447B30  38 7E 17 30 */	addi r3, r30, 0x1730
/* 8044ABF4 00447B34  4B F8 57 15 */	bl draw__Q33ebi6Option4TMgrFv
/* 8044ABF8 00447B38  48 00 00 4C */	b .L_8044AC44
.L_8044ABFC:
/* 8044ABFC 00447B3C  80 1E 2F 3C */	lwz r0, 0x2f3c(r30)
/* 8044AC00 00447B40  2C 00 00 00 */	cmpwi r0, 0
/* 8044AC04 00447B44  41 80 00 1C */	blt .L_8044AC20
/* 8044AC08 00447B48  80 7E 2F 38 */	lwz r3, 0x2f38(r30)
/* 8044AC0C 00447B4C  7F E4 FB 78 */	mr r4, r31
/* 8044AC10 00447B50  81 83 00 00 */	lwz r12, 0(r3)
/* 8044AC14 00447B54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8044AC18 00447B58  7D 89 03 A6 */	mtctr r12
/* 8044AC1C 00447B5C  4E 80 04 21 */	bctrl 
.L_8044AC20:
/* 8044AC20 00447B60  38 7E 26 78 */	addi r3, r30, 0x2678
/* 8044AC24 00447B64  4B FA 4B 71 */	bl draw__Q33ebi5Omake4TMgrFv
/* 8044AC28 00447B68  48 00 00 1C */	b .L_8044AC44
.L_8044AC2C:
/* 8044AC2C 00447B6C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044AC30 00447B70  7F E4 FB 78 */	mr r4, r31
/* 8044AC34 00447B74  4B FB 14 1D */	bl draw__Q26Screen9Game2DMgrFR8Graphics
/* 8044AC38 00447B78  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044AC3C 00447B7C  7F E4 FB 78 */	mr r4, r31
/* 8044AC40 00447B80  4B FB 14 35 */	bl drawIndirect__Q26Screen9Game2DMgrFR8Graphics
.L_8044AC44:
/* 8044AC44 00447B84  38 7F 01 90 */	addi r3, r31, 0x190
/* 8044AC48 00447B88  81 9F 01 90 */	lwz r12, 0x190(r31)
/* 8044AC4C 00447B8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044AC50 00447B90  7D 89 03 A6 */	mtctr r12
/* 8044AC54 00447B94  4E 80 04 21 */	bctrl 
/* 8044AC58 00447B98  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044AC5C 00447B9C  38 80 00 01 */	li r4, 1
/* 8044AC60 00447BA0  38 A0 00 00 */	li r5, 0
/* 8044AC64 00447BA4  4B F6 E9 71 */	bl draw__14TParticle2dMgrFUcUs
/* 8044AC68 00447BA8  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044AC6C 00447BAC  38 80 00 00 */	li r4, 0
/* 8044AC70 00447BB0  38 A0 00 00 */	li r5, 0
/* 8044AC74 00447BB4  4B F6 E9 61 */	bl draw__14TParticle2dMgrFUcUs
/* 8044AC78 00447BB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044AC7C 00447BBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044AC80 00447BC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044AC84 00447BC4  7C 08 03 A6 */	mtlr r0
/* 8044AC88 00447BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8044AC8C 00447BCC  4E 80 00 20 */	blr 
.endfn doDraw__Q25Title7SectionFR8Graphics
.endif

.if version == 0
.fn doUpdateMainTitle__Q25Title7SectionFv, global
/* 8044AC90 00447BD0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8044AC94 00447BD4  7C 08 02 A6 */	mflr r0
/* 8044AC98 00447BD8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8044AC9C 00447BDC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8044ACA0 00447BE0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8044ACA4 00447BE4  7C 7E 1B 78 */	mr r30, r3
/* 8044ACA8 00447BE8  3C 60 80 4A */	lis r3, lbl_8049B100@ha
/* 8044ACAC 00447BEC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8044ACB0 00447BF0  3B E3 B1 00 */	addi r31, r3, lbl_8049B100@l
/* 8044ACB4 00447BF4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044ACB8 00447BF8  C0 3E 00 4C */	lfs f1, 0x6c(r30)
/* 8044ACBC 00447BFC  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8044ACC0 00447C00  EC 01 00 2A */	fadds f0, f1, f0
/* 8044ACC4 00447C04  D0 1E 00 4C */	stfs f0, 0x6c(r30)
/* 8044ACC8 00447C08  88 1E 2F 44 */	lbz r0, 0x2f64(r30)
/* 8044ACCC 00447C0C  28 00 00 00 */	cmplwi r0, 0
/* 8044ACD0 00447C10  41 82 00 E8 */	beq .L_8044ADB8
/* 8044ACD4 00447C14  80 7E 00 50 */	lwz r3, 0x70(r30)
/* 8044ACD8 00447C18  38 80 00 00 */	li r4, 0
/* 8044ACDC 00447C1C  48 00 B7 5D */	bl doUpdate__4MenuFb
/* 8044ACE0 00447C20  80 7E 00 50 */	lwz r3, 0x70(r30)
/* 8044ACE4 00447C24  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8044ACE8 00447C28  2C 00 00 02 */	cmpwi r0, 2
/* 8044ACEC 00447C2C  41 82 00 0C */	beq .L_8044ACF8
/* 8044ACF0 00447C30  2C 00 00 01 */	cmpwi r0, 1
/* 8044ACF4 00447C34  40 82 00 C4 */	bne .L_8044ADB8
.L_8044ACF8:
/* 8044ACF8 00447C38  80 7E 00 C4 */	lwz r3, 0xe4(r30)
/* 8044ACFC 00447C3C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD00 00447C40  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8044AD04 00447C44  41 82 00 24 */	beq .L_8044AD28
/* 8044AD08 00447C48  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD0C 00447C4C  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044AD10 00447C50  80 03 00 E8 */	lwz r0, 0xe8(r3)
/* 8044AD14 00447C54  2C 00 00 00 */	cmpwi r0, 0
/* 8044AD18 00447C58  41 80 00 10 */	blt .L_8044AD28
/* 8044AD1C 00447C5C  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AD20 00447C60  38 00 00 00 */	li r0, 0
/* 8044AD24 00447C64  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044AD28:
/* 8044AD28 00447C68  80 7E 00 C4 */	lwz r3, 0xe4(r30)
/* 8044AD2C 00447C6C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD30 00447C70  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8044AD34 00447C74  41 82 00 24 */	beq .L_8044AD58
/* 8044AD38 00447C78  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD3C 00447C7C  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044AD40 00447C80  80 03 00 F8 */	lwz r0, 0xf8(r3)
/* 8044AD44 00447C84  2C 00 00 00 */	cmpwi r0, 0
/* 8044AD48 00447C88  41 80 00 10 */	blt .L_8044AD58
/* 8044AD4C 00447C8C  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AD50 00447C90  38 00 00 00 */	li r0, 0
/* 8044AD54 00447C94  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044AD58:
/* 8044AD58 00447C98  80 7E 00 C4 */	lwz r3, 0xe4(r30)
/* 8044AD5C 00447C9C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD60 00447CA0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8044AD64 00447CA4  41 82 00 24 */	beq .L_8044AD88
/* 8044AD68 00447CA8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD6C 00447CAC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044AD70 00447CB0  80 03 01 08 */	lwz r0, 0x108(r3)
/* 8044AD74 00447CB4  2C 00 00 00 */	cmpwi r0, 0
/* 8044AD78 00447CB8  41 80 00 10 */	blt .L_8044AD88
/* 8044AD7C 00447CBC  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AD80 00447CC0  38 00 00 00 */	li r0, 0
/* 8044AD84 00447CC4  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044AD88:
/* 8044AD88 00447CC8  80 7E 00 C4 */	lwz r3, 0xe4(r30)
/* 8044AD8C 00447CCC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD90 00447CD0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8044AD94 00447CD4  41 82 00 24 */	beq .L_8044ADB8
/* 8044AD98 00447CD8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD9C 00447CDC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044ADA0 00447CE0  80 03 01 18 */	lwz r0, 0x118(r3)
/* 8044ADA4 00447CE4  2C 00 00 00 */	cmpwi r0, 0
/* 8044ADA8 00447CE8  41 80 00 10 */	blt .L_8044ADB8
/* 8044ADAC 00447CEC  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044ADB0 00447CF0  38 00 00 00 */	li r0, 0
/* 8044ADB4 00447CF4  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044ADB8:
/* 8044ADB8 00447CF8  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044ADBC 00447CFC  4B F9 FC 15 */	bl update__Q23ebi13TMainTitleMgrFv
/* 8044ADC0 00447D00  80 7E 00 C4 */	lwz r3, 0xe4(r30)
/* 8044ADC4 00447D04  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8044ADC8 00447D08  54 00 00 3F */	rotlwi. r0, r0, 0
/* 8044ADCC 00447D0C  41 82 00 0C */	beq .L_8044ADD8
/* 8044ADD0 00447D10  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044ADD4 00447D14  D0 1E 00 4C */	stfs f0, 0x6c(r30)
.L_8044ADD8:
/* 8044ADD8 00447D18  80 7E 00 C4 */	lwz r3, 0xe4(r30)
/* 8044ADDC 00447D1C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044ADE0 00447D20  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 8044ADE4 00447D24  41 82 00 44 */	beq .L_8044AE28
/* 8044ADE8 00447D28  80 8D 88 3C */	lwz r4, mCodeStart__7JKRHeap@sda21(r13)
/* 8044ADEC 00447D2C  38 7F 01 1C */	addi r3, r31, 0x11c
/* 8044ADF0 00447D30  80 0D 88 40 */	lwz r0, mCodeEnd__7JKRHeap@sda21(r13)
/* 8044ADF4 00447D34  7C 04 00 50 */	subf r0, r4, r0
/* 8044ADF8 00447D38  7C 00 56 70 */	srawi r0, r0, 0xa
/* 8044ADFC 00447D3C  7C 80 01 94 */	addze r4, r0
/* 8044AE00 00447D40  4C C6 31 82 */	crclr 6
/* 8044AE04 00447D44  4B CA 28 E9 */	bl OSReport
/* 8044AE08 00447D48  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044AE0C 00447D4C  80 63 00 38 */	lwz r3, 0x38(r3)
/* 8044AE10 00447D50  4B BD 89 D1 */	bl getTotalFreeSize__7JKRHeapFv
/* 8044AE14 00447D54  7C 60 56 70 */	srawi r0, r3, 0xa
/* 8044AE18 00447D58  38 7F 01 38 */	addi r3, r31, 0x138
/* 8044AE1C 00447D5C  7C 80 01 94 */	addze r4, r0
/* 8044AE20 00447D60  4C C6 31 82 */	crclr 6
/* 8044AE24 00447D64  4B CA 28 C9 */	bl OSReport
.L_8044AE28:
/* 8044AE28 00447D68  88 1E 17 20 */	lbz r0, 0x1740(r30)
/* 8044AE2C 00447D6C  28 00 00 00 */	cmplwi r0, 0
/* 8044AE30 00447D70  41 82 01 04 */	beq .L_8044AF34
/* 8044AE34 00447D74  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AE38 00447D78  28 00 00 00 */	cmplwi r0, 0
/* 8044AE3C 00447D7C  40 82 00 18 */	bne .L_8044AE54
/* 8044AE40 00447D80  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AE44 00447D84  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AE48 00447D88  38 80 01 D3 */	li r4, 0x1d3
/* 8044AE4C 00447D8C  4C C6 31 82 */	crclr 6
/* 8044AE50 00447D90  4B BD F7 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AE54:
/* 8044AE54 00447D94  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AE58 00447D98  28 1D 00 00 */	cmplwi r29, 0
/* 8044AE5C 00447D9C  40 82 00 18 */	bne .L_8044AE74
/* 8044AE60 00447DA0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AE64 00447DA4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AE68 00447DA8  38 80 01 DC */	li r4, 0x1dc
/* 8044AE6C 00447DAC  4C C6 31 82 */	crclr 6
/* 8044AE70 00447DB0  4B BD F7 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AE74:
/* 8044AE74 00447DB4  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044AE78 00447DB8  28 00 00 00 */	cmplwi r0, 0
/* 8044AE7C 00447DBC  40 82 00 18 */	bne .L_8044AE94
/* 8044AE80 00447DC0  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044AE84 00447DC4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AE88 00447DC8  38 80 00 C7 */	li r4, 0xc7
/* 8044AE8C 00447DCC  4C C6 31 82 */	crclr 6
/* 8044AE90 00447DD0  4B BD F7 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AE94:
/* 8044AE94 00447DD4  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044AE98 00447DD8  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044AE9C 00447DDC  28 1D 00 00 */	cmplwi r29, 0
/* 8044AEA0 00447DE0  40 82 00 18 */	bne .L_8044AEB8
/* 8044AEA4 00447DE4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AEA8 00447DE8  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AEAC 00447DEC  38 80 01 E5 */	li r4, 0x1e5
/* 8044AEB0 00447DF0  4C C6 31 82 */	crclr 6
/* 8044AEB4 00447DF4  4B BD F7 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AEB8:
/* 8044AEB8 00447DF8  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044AEBC 00447DFC  38 80 00 00 */	li r4, 0
/* 8044AEC0 00447E00  4B EE 8F DD */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044AEC4 00447E04  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044AEC8 00447E08  40 82 00 18 */	bne .L_8044AEE0
/* 8044AECC 00447E0C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AED0 00447E10  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AED4 00447E14  38 80 01 E7 */	li r4, 0x1e7
/* 8044AED8 00447E18  4C C6 31 82 */	crclr 6
/* 8044AEDC 00447E1C  4B BD F7 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AEE0:
/* 8044AEE0 00447E20  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044AEE4 00447E24  7F A3 EB 78 */	mr r3, r29
/* 8044AEE8 00447E28  C0 42 1A B0 */	lfs f2, kFadeOutTime__Q23ebi13TMainTitleMgr@sda21(r2)
/* 8044AEEC 00447E2C  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8044AEF0 00447E30  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044AEF4 00447E34  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044AEF8 00447E38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044AEFC 00447E3C  4C 41 13 82 */	cror 2, 1, 2
/* 8044AF00 00447E40  40 82 00 10 */	bne .L_8044AF10
/* 8044AF04 00447E44  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044AF08 00447E48  EC 00 08 2A */	fadds f0, f0, f1
/* 8044AF0C 00447E4C  48 00 00 0C */	b .L_8044AF18
.L_8044AF10:
/* 8044AF10 00447E50  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044AF14 00447E54  EC 01 00 28 */	fsubs f0, f1, f0
.L_8044AF18:
/* 8044AF18 00447E58  FC 00 00 1E */	fctiwz f0, f0
/* 8044AF1C 00447E5C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8044AF20 00447E60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044AF24 00447E64  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8044AF28 00447E68  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8044AF2C 00447E6C  7D 89 03 A6 */	mtctr r12
/* 8044AF30 00447E70  4E 80 04 21 */	bctrl 
.L_8044AF34:
/* 8044AF34 00447E74  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044AF38 00447E78  4B F9 FA 81 */	bl isFinish__Q23ebi13TMainTitleMgrFv
/* 8044AF3C 00447E7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044AF40 00447E80  41 82 03 68 */	beq .L_8044B2A8
/* 8044AF44 00447E84  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044AF48 00447E88  4B F9 FA 81 */	bl getSelectedMenu__Q23ebi13TMainTitleMgrFv
/* 8044AF4C 00447E8C  38 03 00 01 */	addi r0, r3, 1
/* 8044AF50 00447E90  38 60 00 00 */	li r3, 0
/* 8044AF54 00447E94  28 00 00 06 */	cmplwi r0, 6
/* 8044AF58 00447E98  98 7E 00 34 */	stb r3, 0x34(r30)
/* 8044AF5C 00447E9C  41 81 03 40 */	bgt .L_8044B29C
/* 8044AF60 00447EA0  3C 60 80 4F */	lis r3, lbl_804ED1D8@ha
/* 8044AF64 00447EA4  54 00 10 3A */	slwi r0, r0, 2
/* 8044AF68 00447EA8  38 63 D1 D8 */	addi r3, r3, lbl_804ED1D8@l
/* 8044AF6C 00447EAC  7C 03 00 2E */	lwzx r0, r3, r0
/* 8044AF70 00447EB0  7C 09 03 A6 */	mtctr r0
/* 8044AF74 00447EB4  4E 80 04 20 */	bctr 
.L_8044AF78:
/* 8044AF78 00447EB8  38 00 00 02 */	li r0, 2
/* 8044AF7C 00447EBC  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AF80 00447EC0  48 00 03 7C */	b .L_8044B2FC
.L_8044AF84:
/* 8044AF84 00447EC4  38 00 00 03 */	li r0, 3
/* 8044AF88 00447EC8  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AF8C 00447ECC  48 00 03 70 */	b .L_8044B2FC
.L_8044AF90:
/* 8044AF90 00447ED0  38 00 00 1E */	li r0, 0x1e
/* 8044AF94 00447ED4  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AF98 00447ED8  48 00 03 64 */	b .L_8044B2FC
.L_8044AF9C:
/* 8044AF9C 00447EDC  38 00 00 02 */	li r0, 2
/* 8044AFA0 00447EE0  38 7E 17 30 */	addi r3, r30, 0x1750
/* 8044AFA4 00447EE4  90 1E 00 48 */	stw r0, 0x68(r30)
/* 8044AFA8 00447EE8  4B F8 51 ED */	bl start__Q33ebi6Option4TMgrFv
/* 8044AFAC 00447EEC  38 00 00 01 */	li r0, 1
/* 8044AFB0 00447EF0  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044AFB4 00447EF4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AFB8 00447EF8  28 00 00 00 */	cmplwi r0, 0
/* 8044AFBC 00447EFC  40 82 00 18 */	bne .L_8044AFD4
/* 8044AFC0 00447F00  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AFC4 00447F04  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AFC8 00447F08  38 80 01 D3 */	li r4, 0x1d3
/* 8044AFCC 00447F0C  4C C6 31 82 */	crclr 6
/* 8044AFD0 00447F10  4B BD F6 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AFD4:
/* 8044AFD4 00447F14  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AFD8 00447F18  28 1D 00 00 */	cmplwi r29, 0
/* 8044AFDC 00447F1C  40 82 00 18 */	bne .L_8044AFF4
/* 8044AFE0 00447F20  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AFE4 00447F24  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AFE8 00447F28  38 80 01 DC */	li r4, 0x1dc
/* 8044AFEC 00447F2C  4C C6 31 82 */	crclr 6
/* 8044AFF0 00447F30  4B BD F6 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AFF4:
/* 8044AFF4 00447F34  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044AFF8 00447F38  28 00 00 00 */	cmplwi r0, 0
/* 8044AFFC 00447F3C  40 82 00 18 */	bne .L_8044B014
/* 8044B000 00447F40  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B004 00447F44  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B008 00447F48  38 80 00 C7 */	li r4, 0xc7
/* 8044B00C 00447F4C  4C C6 31 82 */	crclr 6
/* 8044B010 00447F50  4B BD F6 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B014:
/* 8044B014 00447F54  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044B018 00447F58  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044B01C 00447F5C  28 1D 00 00 */	cmplwi r29, 0
/* 8044B020 00447F60  40 82 00 18 */	bne .L_8044B038
/* 8044B024 00447F64  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B028 00447F68  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B02C 00447F6C  38 80 01 E5 */	li r4, 0x1e5
/* 8044B030 00447F70  4C C6 31 82 */	crclr 6
/* 8044B034 00447F74  4B BD F6 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B038:
/* 8044B038 00447F78  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044B03C 00447F7C  38 80 00 01 */	li r4, 1
/* 8044B040 00447F80  4B EE 8E 5D */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B044 00447F84  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044B048 00447F88  40 82 00 18 */	bne .L_8044B060
/* 8044B04C 00447F8C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B050 00447F90  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B054 00447F94  38 80 01 E7 */	li r4, 0x1e7
/* 8044B058 00447F98  4C C6 31 82 */	crclr 6
/* 8044B05C 00447F9C  4B BD F5 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B060:
/* 8044B060 00447FA0  7F A3 EB 78 */	mr r3, r29
/* 8044B064 00447FA4  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044B068 00447FA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B06C 00447FAC  7D 89 03 A6 */	mtctr r12
/* 8044B070 00447FB0  4E 80 04 21 */	bctrl 
/* 8044B074 00447FB4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044B078 00447FB8  80 63 00 60 */	lwz r3, 0x60(r3)
/* 8044B07C 00447FBC  88 03 00 3E */	lbz r0, 0x3e(r3)
/* 8044B080 00447FC0  90 1E 2F 48 */	stw r0, 0x2f68(r30)
/* 8044B084 00447FC4  48 00 02 78 */	b .L_8044B2FC
.L_8044B088:
/* 8044B088 00447FC8  7F C3 F3 78 */	mr r3, r30
/* 8044B08C 00447FCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8044B090 00447FD0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8044B094 00447FD4  7D 89 03 A6 */	mtctr r12
/* 8044B098 00447FD8  4E 80 04 21 */	bctrl 
/* 8044B09C 00447FDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B0A0 00447FE0  41 82 01 08 */	beq .L_8044B1A8
/* 8044B0A4 00447FE4  38 00 00 04 */	li r0, 4
/* 8044B0A8 00447FE8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8044B0AC 00447FEC  90 1E 00 48 */	stw r0, 0x68(r30)
/* 8044B0B0 00447FF0  38 A0 00 00 */	li r5, 0
/* 8044B0B4 00447FF4  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8044B0B8 00447FF8  3C 60 80 4E */	lis r3, __vt__Q28Morimura19DispMemberHighScore@ha
/* 8044B0BC 00447FFC  90 01 00 08 */	stw r0, 8(r1)
/* 8044B0C0 00448000  38 03 42 90 */	addi r0, r3, __vt__Q28Morimura19DispMemberHighScore@l
/* 8044B0C4 00448004  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044B0C8 00448008  38 81 00 08 */	addi r4, r1, 8
/* 8044B0CC 0044800C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8044B0D0 00448010  90 01 00 08 */	stw r0, 8(r1)
/* 8044B0D4 00448014  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8044B0D8 00448018  98 A1 00 14 */	stb r5, 0x14(r1)
/* 8044B0DC 0044801C  80 1E 2F 40 */	lwz r0, 0x2f60(r30)
/* 8044B0E0 00448020  90 01 00 10 */	stw r0, 0x10(r1)
/* 8044B0E4 00448024  4B FB 4E 99 */	bl open_HighScore__Q26Screen9Game2DMgrFRQ28Morimura19DispMemberHighScore
/* 8044B0E8 00448028  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B0EC 0044802C  28 00 00 00 */	cmplwi r0, 0
/* 8044B0F0 00448030  40 82 00 18 */	bne .L_8044B108
/* 8044B0F4 00448034  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B0F8 00448038  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B0FC 0044803C  38 80 01 D3 */	li r4, 0x1d3
/* 8044B100 00448040  4C C6 31 82 */	crclr 6
/* 8044B104 00448044  4B BD F5 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B108:
/* 8044B108 00448048  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B10C 0044804C  28 1D 00 00 */	cmplwi r29, 0
/* 8044B110 00448050  40 82 00 18 */	bne .L_8044B128
/* 8044B114 00448054  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B118 00448058  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B11C 0044805C  38 80 01 DC */	li r4, 0x1dc
/* 8044B120 00448060  4C C6 31 82 */	crclr 6
/* 8044B124 00448064  4B BD F5 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B128:
/* 8044B128 00448068  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044B12C 0044806C  28 00 00 00 */	cmplwi r0, 0
/* 8044B130 00448070  40 82 00 18 */	bne .L_8044B148
/* 8044B134 00448074  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B138 00448078  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B13C 0044807C  38 80 00 C7 */	li r4, 0xc7
/* 8044B140 00448080  4C C6 31 82 */	crclr 6
/* 8044B144 00448084  4B BD F4 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B148:
/* 8044B148 00448088  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044B14C 0044808C  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044B150 00448090  28 1D 00 00 */	cmplwi r29, 0
/* 8044B154 00448094  40 82 00 18 */	bne .L_8044B16C
/* 8044B158 00448098  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B15C 0044809C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B160 004480A0  38 80 01 E5 */	li r4, 0x1e5
/* 8044B164 004480A4  4C C6 31 82 */	crclr 6
/* 8044B168 004480A8  4B BD F4 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B16C:
/* 8044B16C 004480AC  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044B170 004480B0  38 80 00 02 */	li r4, 2
/* 8044B174 004480B4  4B EE 8D 29 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B178 004480B8  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044B17C 004480BC  40 82 00 18 */	bne .L_8044B194
/* 8044B180 004480C0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B184 004480C4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B188 004480C8  38 80 01 E7 */	li r4, 0x1e7
/* 8044B18C 004480CC  4C C6 31 82 */	crclr 6
/* 8044B190 004480D0  4B BD F4 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B194:
/* 8044B194 004480D4  7F A3 EB 78 */	mr r3, r29
/* 8044B198 004480D8  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044B19C 004480DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B1A0 004480E0  7D 89 03 A6 */	mtctr r12
/* 8044B1A4 004480E4  4E 80 04 21 */	bctrl 
.L_8044B1A8:
/* 8044B1A8 004480E8  38 00 00 01 */	li r0, 1
/* 8044B1AC 004480EC  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044B1B0 004480F0  48 00 01 4C */	b .L_8044B2FC
.L_8044B1B4:
/* 8044B1B4 004480F4  38 00 00 03 */	li r0, 3
/* 8044B1B8 004480F8  38 7E 26 78 */	addi r3, r30, 0x2698
/* 8044B1BC 004480FC  90 1E 00 48 */	stw r0, 0x68(r30)
/* 8044B1C0 00448100  4B FA 44 55 */	bl start__Q33ebi5Omake4TMgrFv
/* 8044B1C4 00448104  38 00 00 01 */	li r0, 1
/* 8044B1C8 00448108  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044B1CC 0044810C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B1D0 00448110  28 00 00 00 */	cmplwi r0, 0
/* 8044B1D4 00448114  40 82 00 18 */	bne .L_8044B1EC
/* 8044B1D8 00448118  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B1DC 0044811C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B1E0 00448120  38 80 01 D3 */	li r4, 0x1d3
/* 8044B1E4 00448124  4C C6 31 82 */	crclr 6
/* 8044B1E8 00448128  4B BD F4 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B1EC:
/* 8044B1EC 0044812C  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B1F0 00448130  28 1D 00 00 */	cmplwi r29, 0
/* 8044B1F4 00448134  40 82 00 18 */	bne .L_8044B20C
/* 8044B1F8 00448138  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B1FC 0044813C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B200 00448140  38 80 01 DC */	li r4, 0x1dc
/* 8044B204 00448144  4C C6 31 82 */	crclr 6
/* 8044B208 00448148  4B BD F4 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B20C:
/* 8044B20C 0044814C  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044B210 00448150  28 00 00 00 */	cmplwi r0, 0
/* 8044B214 00448154  40 82 00 18 */	bne .L_8044B22C
/* 8044B218 00448158  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B21C 0044815C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B220 00448160  38 80 00 C7 */	li r4, 0xc7
/* 8044B224 00448164  4C C6 31 82 */	crclr 6
/* 8044B228 00448168  4B BD F4 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B22C:
/* 8044B22C 0044816C  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044B230 00448170  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044B234 00448174  28 1D 00 00 */	cmplwi r29, 0
/* 8044B238 00448178  40 82 00 18 */	bne .L_8044B250
/* 8044B23C 0044817C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B240 00448180  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B244 00448184  38 80 01 E5 */	li r4, 0x1e5
/* 8044B248 00448188  4C C6 31 82 */	crclr 6
/* 8044B24C 0044818C  4B BD F3 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B250:
/* 8044B250 00448190  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044B254 00448194  38 80 00 03 */	li r4, 3
/* 8044B258 00448198  4B EE 8C 45 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B25C 0044819C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044B260 004481A0  40 82 00 18 */	bne .L_8044B278
/* 8044B264 004481A4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B268 004481A8  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B26C 004481AC  38 80 01 E7 */	li r4, 0x1e7
/* 8044B270 004481B0  4C C6 31 82 */	crclr 6
/* 8044B274 004481B4  4B BD F3 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B278:
/* 8044B278 004481B8  7F A3 EB 78 */	mr r3, r29
/* 8044B27C 004481BC  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044B280 004481C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B284 004481C4  7D 89 03 A6 */	mtctr r12
/* 8044B288 004481C8  4E 80 04 21 */	bctrl 
/* 8044B28C 004481CC  48 00 00 70 */	b .L_8044B2FC
.L_8044B290:
/* 8044B290 004481D0  38 00 00 01 */	li r0, 1
/* 8044B294 004481D4  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044B298 004481D8  48 00 00 64 */	b .L_8044B2FC
.L_8044B29C:
/* 8044B29C 004481DC  38 00 00 16 */	li r0, 0x16
/* 8044B2A0 004481E0  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044B2A4 004481E4  48 00 00 58 */	b .L_8044B2FC
.L_8044B2A8:
/* 8044B2A8 004481E8  C0 3E 00 4C */	lfs f1, 0x6c(r30)
/* 8044B2AC 004481EC  C0 02 27 3C */	lfs f0, lbl_80520A9C@sda21(r2)
/* 8044B2B0 004481F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044B2B4 004481F4  40 81 00 48 */	ble .L_8044B2FC
/* 8044B2B8 004481F8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044B2BC 004481FC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044B2C0 00448200  80 03 02 28 */	lwz r0, 0x228(r3)
/* 8044B2C4 00448204  2C 00 00 00 */	cmpwi r0, 0
/* 8044B2C8 00448208  40 82 00 2C */	bne .L_8044B2F4
/* 8044B2CC 0044820C  80 03 02 38 */	lwz r0, 0x238(r3)
/* 8044B2D0 00448210  2C 00 00 00 */	cmpwi r0, 0
/* 8044B2D4 00448214  40 82 00 20 */	bne .L_8044B2F4
/* 8044B2D8 00448218  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044B2DC 0044821C  4B F9 F6 D1 */	bl forceQuit__Q23ebi13TMainTitleMgrFv
/* 8044B2E0 00448220  38 60 00 00 */	li r3, 0
/* 8044B2E4 00448224  38 00 00 17 */	li r0, 0x17
/* 8044B2E8 00448228  98 7E 00 34 */	stb r3, 0x34(r30)
/* 8044B2EC 0044822C  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044B2F0 00448230  48 00 00 0C */	b .L_8044B2FC
.L_8044B2F4:
/* 8044B2F4 00448234  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044B2F8 00448238  D0 1E 00 4C */	stfs f0, 0x6c(r30)
.L_8044B2FC:
/* 8044B2FC 0044823C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8044B300 00448240  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8044B304 00448244  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8044B308 00448248  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8044B30C 0044824C  7C 08 03 A6 */	mtlr r0
/* 8044B310 00448250  38 21 00 30 */	addi r1, r1, 0x30
/* 8044B314 00448254  4E 80 00 20 */	blr 
.endfn doUpdateMainTitle__Q25Title7SectionFv
.else
.fn doUpdateMainTitle__Q25Title7SectionFv, global
/* 8044AC90 00447BD0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8044AC94 00447BD4  7C 08 02 A6 */	mflr r0
/* 8044AC98 00447BD8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8044AC9C 00447BDC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8044ACA0 00447BE0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8044ACA4 00447BE4  7C 7E 1B 78 */	mr r30, r3
/* 8044ACA8 00447BE8  3C 60 80 4A */	lis r3, lbl_8049B100@ha
/* 8044ACAC 00447BEC  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8044ACB0 00447BF0  3B E3 B1 00 */	addi r31, r3, lbl_8049B100@l
/* 8044ACB4 00447BF4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044ACB8 00447BF8  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 8044ACBC 00447BFC  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8044ACC0 00447C00  EC 01 00 2A */	fadds f0, f1, f0
/* 8044ACC4 00447C04  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 8044ACC8 00447C08  88 1E 2F 44 */	lbz r0, 0x2f44(r30)
/* 8044ACCC 00447C0C  28 00 00 00 */	cmplwi r0, 0
/* 8044ACD0 00447C10  41 82 00 E8 */	beq .L_8044ADB8
/* 8044ACD4 00447C14  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8044ACD8 00447C18  38 80 00 00 */	li r4, 0
/* 8044ACDC 00447C1C  48 00 B7 5D */	bl doUpdate__4MenuFb
/* 8044ACE0 00447C20  80 7E 00 50 */	lwz r3, 0x50(r30)
/* 8044ACE4 00447C24  80 03 00 34 */	lwz r0, 0x34(r3)
/* 8044ACE8 00447C28  2C 00 00 02 */	cmpwi r0, 2
/* 8044ACEC 00447C2C  41 82 00 0C */	beq .L_8044ACF8
/* 8044ACF0 00447C30  2C 00 00 01 */	cmpwi r0, 1
/* 8044ACF4 00447C34  40 82 00 C4 */	bne .L_8044ADB8
.L_8044ACF8:
/* 8044ACF8 00447C38  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8044ACFC 00447C3C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD00 00447C40  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8044AD04 00447C44  41 82 00 24 */	beq .L_8044AD28
/* 8044AD08 00447C48  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD0C 00447C4C  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044AD10 00447C50  80 03 00 E8 */	lwz r0, 0xe8(r3)
/* 8044AD14 00447C54  2C 00 00 00 */	cmpwi r0, 0
/* 8044AD18 00447C58  41 80 00 10 */	blt .L_8044AD28
/* 8044AD1C 00447C5C  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AD20 00447C60  38 00 00 00 */	li r0, 0
/* 8044AD24 00447C64  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044AD28:
/* 8044AD28 00447C68  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8044AD2C 00447C6C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD30 00447C70  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8044AD34 00447C74  41 82 00 24 */	beq .L_8044AD58
/* 8044AD38 00447C78  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD3C 00447C7C  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044AD40 00447C80  80 03 00 F8 */	lwz r0, 0xf8(r3)
/* 8044AD44 00447C84  2C 00 00 00 */	cmpwi r0, 0
/* 8044AD48 00447C88  41 80 00 10 */	blt .L_8044AD58
/* 8044AD4C 00447C8C  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AD50 00447C90  38 00 00 00 */	li r0, 0
/* 8044AD54 00447C94  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044AD58:
/* 8044AD58 00447C98  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8044AD5C 00447C9C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD60 00447CA0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8044AD64 00447CA4  41 82 00 24 */	beq .L_8044AD88
/* 8044AD68 00447CA8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD6C 00447CAC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044AD70 00447CB0  80 03 01 08 */	lwz r0, 0x108(r3)
/* 8044AD74 00447CB4  2C 00 00 00 */	cmpwi r0, 0
/* 8044AD78 00447CB8  41 80 00 10 */	blt .L_8044AD88
/* 8044AD7C 00447CBC  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AD80 00447CC0  38 00 00 00 */	li r0, 0
/* 8044AD84 00447CC4  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044AD88:
/* 8044AD88 00447CC8  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8044AD8C 00447CCC  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044AD90 00447CD0  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8044AD94 00447CD4  41 82 00 24 */	beq .L_8044ADB8
/* 8044AD98 00447CD8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044AD9C 00447CDC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044ADA0 00447CE0  80 03 01 18 */	lwz r0, 0x118(r3)
/* 8044ADA4 00447CE4  2C 00 00 00 */	cmpwi r0, 0
/* 8044ADA8 00447CE8  41 80 00 10 */	blt .L_8044ADB8
/* 8044ADAC 00447CEC  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044ADB0 00447CF0  38 00 00 00 */	li r0, 0
/* 8044ADB4 00447CF4  98 1E 00 34 */	stb r0, 0x34(r30)
.L_8044ADB8:
/* 8044ADB8 00447CF8  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044ADBC 00447CFC  4B F9 FC 15 */	bl update__Q23ebi13TMainTitleMgrFv
/* 8044ADC0 00447D00  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8044ADC4 00447D04  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8044ADC8 00447D08  54 00 00 3F */	rotlwi. r0, r0, 0
/* 8044ADCC 00447D0C  41 82 00 0C */	beq .L_8044ADD8
/* 8044ADD0 00447D10  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044ADD4 00447D14  D0 1E 00 4C */	stfs f0, 0x4c(r30)
.L_8044ADD8:
/* 8044ADD8 00447D18  80 7E 00 C4 */	lwz r3, 0xc4(r30)
/* 8044ADDC 00447D1C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044ADE0 00447D20  54 00 05 29 */	rlwinm. r0, r0, 0, 0x14, 0x14
/* 8044ADE4 00447D24  41 82 00 44 */	beq .L_8044AE28
/* 8044ADE8 00447D28  80 8D 88 3C */	lwz r4, mCodeStart__7JKRHeap@sda21(r13)
/* 8044ADEC 00447D2C  38 7F 01 1C */	addi r3, r31, 0x11c
/* 8044ADF0 00447D30  80 0D 88 40 */	lwz r0, mCodeEnd__7JKRHeap@sda21(r13)
/* 8044ADF4 00447D34  7C 04 00 50 */	subf r0, r4, r0
/* 8044ADF8 00447D38  7C 00 56 70 */	srawi r0, r0, 0xa
/* 8044ADFC 00447D3C  7C 80 01 94 */	addze r4, r0
/* 8044AE00 00447D40  4C C6 31 82 */	crclr 6
/* 8044AE04 00447D44  4B CA 28 E9 */	bl OSReport
/* 8044AE08 00447D48  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044AE0C 00447D4C  80 63 00 38 */	lwz r3, 0x38(r3)
/* 8044AE10 00447D50  4B BD 89 D1 */	bl getTotalFreeSize__7JKRHeapFv
/* 8044AE14 00447D54  7C 60 56 70 */	srawi r0, r3, 0xa
/* 8044AE18 00447D58  38 7F 01 38 */	addi r3, r31, 0x138
/* 8044AE1C 00447D5C  7C 80 01 94 */	addze r4, r0
/* 8044AE20 00447D60  4C C6 31 82 */	crclr 6
/* 8044AE24 00447D64  4B CA 28 C9 */	bl OSReport
.L_8044AE28:
/* 8044AE28 00447D68  88 1E 17 20 */	lbz r0, 0x1720(r30)
/* 8044AE2C 00447D6C  28 00 00 00 */	cmplwi r0, 0
/* 8044AE30 00447D70  41 82 01 04 */	beq .L_8044AF34
/* 8044AE34 00447D74  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AE38 00447D78  28 00 00 00 */	cmplwi r0, 0
/* 8044AE3C 00447D7C  40 82 00 18 */	bne .L_8044AE54
/* 8044AE40 00447D80  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AE44 00447D84  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AE48 00447D88  38 80 01 D3 */	li r4, 0x1d3
/* 8044AE4C 00447D8C  4C C6 31 82 */	crclr 6
/* 8044AE50 00447D90  4B BD F7 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AE54:
/* 8044AE54 00447D94  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AE58 00447D98  28 1D 00 00 */	cmplwi r29, 0
/* 8044AE5C 00447D9C  40 82 00 18 */	bne .L_8044AE74
/* 8044AE60 00447DA0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AE64 00447DA4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AE68 00447DA8  38 80 01 DC */	li r4, 0x1dc
/* 8044AE6C 00447DAC  4C C6 31 82 */	crclr 6
/* 8044AE70 00447DB0  4B BD F7 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AE74:
/* 8044AE74 00447DB4  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044AE78 00447DB8  28 00 00 00 */	cmplwi r0, 0
/* 8044AE7C 00447DBC  40 82 00 18 */	bne .L_8044AE94
/* 8044AE80 00447DC0  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044AE84 00447DC4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AE88 00447DC8  38 80 00 C7 */	li r4, 0xc7
/* 8044AE8C 00447DCC  4C C6 31 82 */	crclr 6
/* 8044AE90 00447DD0  4B BD F7 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AE94:
/* 8044AE94 00447DD4  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044AE98 00447DD8  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044AE9C 00447DDC  28 1D 00 00 */	cmplwi r29, 0
/* 8044AEA0 00447DE0  40 82 00 18 */	bne .L_8044AEB8
/* 8044AEA4 00447DE4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AEA8 00447DE8  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AEAC 00447DEC  38 80 01 E5 */	li r4, 0x1e5
/* 8044AEB0 00447DF0  4C C6 31 82 */	crclr 6
/* 8044AEB4 00447DF4  4B BD F7 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AEB8:
/* 8044AEB8 00447DF8  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044AEBC 00447DFC  38 80 00 00 */	li r4, 0
/* 8044AEC0 00447E00  4B EE 8F DD */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044AEC4 00447E04  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044AEC8 00447E08  40 82 00 18 */	bne .L_8044AEE0
/* 8044AECC 00447E0C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AED0 00447E10  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AED4 00447E14  38 80 01 E7 */	li r4, 0x1e7
/* 8044AED8 00447E18  4C C6 31 82 */	crclr 6
/* 8044AEDC 00447E1C  4B BD F7 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AEE0:
/* 8044AEE0 00447E20  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044AEE4 00447E24  7F A3 EB 78 */	mr r3, r29
/* 8044AEE8 00447E28  C0 42 1A B0 */	lfs f2, kFadeOutTime__Q23ebi13TMainTitleMgr@sda21(r2)
/* 8044AEEC 00447E2C  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8044AEF0 00447E30  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044AEF4 00447E34  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044AEF8 00447E38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044AEFC 00447E3C  4C 41 13 82 */	cror 2, 1, 2
/* 8044AF00 00447E40  40 82 00 10 */	bne .L_8044AF10
/* 8044AF04 00447E44  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044AF08 00447E48  EC 00 08 2A */	fadds f0, f0, f1
/* 8044AF0C 00447E4C  48 00 00 0C */	b .L_8044AF18
.L_8044AF10:
/* 8044AF10 00447E50  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044AF14 00447E54  EC 01 00 28 */	fsubs f0, f1, f0
.L_8044AF18:
/* 8044AF18 00447E58  FC 00 00 1E */	fctiwz f0, f0
/* 8044AF1C 00447E5C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8044AF20 00447E60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044AF24 00447E64  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8044AF28 00447E68  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 8044AF2C 00447E6C  7D 89 03 A6 */	mtctr r12
/* 8044AF30 00447E70  4E 80 04 21 */	bctrl 
.L_8044AF34:
/* 8044AF34 00447E74  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044AF38 00447E78  4B F9 FA 81 */	bl isFinish__Q23ebi13TMainTitleMgrFv
/* 8044AF3C 00447E7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044AF40 00447E80  41 82 03 68 */	beq .L_8044B2A8
/* 8044AF44 00447E84  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044AF48 00447E88  4B F9 FA 81 */	bl getSelectedMenu__Q23ebi13TMainTitleMgrFv
/* 8044AF4C 00447E8C  38 03 00 01 */	addi r0, r3, 1
/* 8044AF50 00447E90  38 60 00 00 */	li r3, 0
/* 8044AF54 00447E94  28 00 00 06 */	cmplwi r0, 6
/* 8044AF58 00447E98  98 7E 00 34 */	stb r3, 0x34(r30)
/* 8044AF5C 00447E9C  41 81 03 40 */	bgt .L_8044B29C
/* 8044AF60 00447EA0  3C 60 80 4F */	lis r3, lbl_804ED1D8@ha
/* 8044AF64 00447EA4  54 00 10 3A */	slwi r0, r0, 2
/* 8044AF68 00447EA8  38 63 D1 D8 */	addi r3, r3, lbl_804ED1D8@l
/* 8044AF6C 00447EAC  7C 03 00 2E */	lwzx r0, r3, r0
/* 8044AF70 00447EB0  7C 09 03 A6 */	mtctr r0
/* 8044AF74 00447EB4  4E 80 04 20 */	bctr 
.L_8044AF78:
/* 8044AF78 00447EB8  38 00 00 02 */	li r0, 2
/* 8044AF7C 00447EBC  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AF80 00447EC0  48 00 03 7C */	b .L_8044B2FC
.L_8044AF84:
/* 8044AF84 00447EC4  38 00 00 03 */	li r0, 3
/* 8044AF88 00447EC8  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AF8C 00447ECC  48 00 03 70 */	b .L_8044B2FC
.L_8044AF90:
/* 8044AF90 00447ED0  38 00 00 1E */	li r0, 0x1e
/* 8044AF94 00447ED4  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044AF98 00447ED8  48 00 03 64 */	b .L_8044B2FC
.L_8044AF9C:
/* 8044AF9C 00447EDC  38 00 00 02 */	li r0, 2
/* 8044AFA0 00447EE0  38 7E 17 30 */	addi r3, r30, 0x1730
/* 8044AFA4 00447EE4  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8044AFA8 00447EE8  4B F8 51 ED */	bl start__Q33ebi6Option4TMgrFv
/* 8044AFAC 00447EEC  38 00 00 01 */	li r0, 1
/* 8044AFB0 00447EF0  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044AFB4 00447EF4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AFB8 00447EF8  28 00 00 00 */	cmplwi r0, 0
/* 8044AFBC 00447EFC  40 82 00 18 */	bne .L_8044AFD4
/* 8044AFC0 00447F00  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AFC4 00447F04  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AFC8 00447F08  38 80 01 D3 */	li r4, 0x1d3
/* 8044AFCC 00447F0C  4C C6 31 82 */	crclr 6
/* 8044AFD0 00447F10  4B BD F6 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AFD4:
/* 8044AFD4 00447F14  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044AFD8 00447F18  28 1D 00 00 */	cmplwi r29, 0
/* 8044AFDC 00447F1C  40 82 00 18 */	bne .L_8044AFF4
/* 8044AFE0 00447F20  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044AFE4 00447F24  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044AFE8 00447F28  38 80 01 DC */	li r4, 0x1dc
/* 8044AFEC 00447F2C  4C C6 31 82 */	crclr 6
/* 8044AFF0 00447F30  4B BD F6 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044AFF4:
/* 8044AFF4 00447F34  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044AFF8 00447F38  28 00 00 00 */	cmplwi r0, 0
/* 8044AFFC 00447F3C  40 82 00 18 */	bne .L_8044B014
/* 8044B000 00447F40  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B004 00447F44  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B008 00447F48  38 80 00 C7 */	li r4, 0xc7
/* 8044B00C 00447F4C  4C C6 31 82 */	crclr 6
/* 8044B010 00447F50  4B BD F6 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B014:
/* 8044B014 00447F54  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044B018 00447F58  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044B01C 00447F5C  28 1D 00 00 */	cmplwi r29, 0
/* 8044B020 00447F60  40 82 00 18 */	bne .L_8044B038
/* 8044B024 00447F64  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B028 00447F68  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B02C 00447F6C  38 80 01 E5 */	li r4, 0x1e5
/* 8044B030 00447F70  4C C6 31 82 */	crclr 6
/* 8044B034 00447F74  4B BD F6 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B038:
/* 8044B038 00447F78  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044B03C 00447F7C  38 80 00 01 */	li r4, 1
/* 8044B040 00447F80  4B EE 8E 5D */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B044 00447F84  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044B048 00447F88  40 82 00 18 */	bne .L_8044B060
/* 8044B04C 00447F8C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B050 00447F90  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B054 00447F94  38 80 01 E7 */	li r4, 0x1e7
/* 8044B058 00447F98  4C C6 31 82 */	crclr 6
/* 8044B05C 00447F9C  4B BD F5 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B060:
/* 8044B060 00447FA0  7F A3 EB 78 */	mr r3, r29
/* 8044B064 00447FA4  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044B068 00447FA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B06C 00447FAC  7D 89 03 A6 */	mtctr r12
/* 8044B070 00447FB0  4E 80 04 21 */	bctrl 
/* 8044B074 00447FB4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044B078 00447FB8  80 63 00 60 */	lwz r3, 0x60(r3)
/* 8044B07C 00447FBC  88 03 00 3E */	lbz r0, 0x3e(r3)
/* 8044B080 00447FC0  90 1E 2F 48 */	stw r0, 0x2f48(r30)
/* 8044B084 00447FC4  48 00 02 78 */	b .L_8044B2FC
.L_8044B088:
/* 8044B088 00447FC8  7F C3 F3 78 */	mr r3, r30
/* 8044B08C 00447FCC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8044B090 00447FD0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8044B094 00447FD4  7D 89 03 A6 */	mtctr r12
/* 8044B098 00447FD8  4E 80 04 21 */	bctrl 
/* 8044B09C 00447FDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B0A0 00447FE0  41 82 01 08 */	beq .L_8044B1A8
/* 8044B0A4 00447FE4  38 00 00 04 */	li r0, 4
/* 8044B0A8 00447FE8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8044B0AC 00447FEC  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8044B0B0 00447FF0  38 A0 00 00 */	li r5, 0
/* 8044B0B4 00447FF4  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8044B0B8 00447FF8  3C 60 80 4E */	lis r3, __vt__Q28Morimura19DispMemberHighScore@ha
/* 8044B0BC 00447FFC  90 01 00 08 */	stw r0, 8(r1)
/* 8044B0C0 00448000  38 03 42 90 */	addi r0, r3, __vt__Q28Morimura19DispMemberHighScore@l
/* 8044B0C4 00448004  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044B0C8 00448008  38 81 00 08 */	addi r4, r1, 8
/* 8044B0CC 0044800C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8044B0D0 00448010  90 01 00 08 */	stw r0, 8(r1)
/* 8044B0D4 00448014  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8044B0D8 00448018  98 A1 00 14 */	stb r5, 0x14(r1)
/* 8044B0DC 0044801C  80 1E 2F 40 */	lwz r0, 0x2f40(r30)
/* 8044B0E0 00448020  90 01 00 10 */	stw r0, 0x10(r1)
/* 8044B0E4 00448024  4B FB 4E 99 */	bl open_HighScore__Q26Screen9Game2DMgrFRQ28Morimura19DispMemberHighScore
/* 8044B0E8 00448028  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B0EC 0044802C  28 00 00 00 */	cmplwi r0, 0
/* 8044B0F0 00448030  40 82 00 18 */	bne .L_8044B108
/* 8044B0F4 00448034  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B0F8 00448038  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B0FC 0044803C  38 80 01 D3 */	li r4, 0x1d3
/* 8044B100 00448040  4C C6 31 82 */	crclr 6
/* 8044B104 00448044  4B BD F5 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B108:
/* 8044B108 00448048  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B10C 0044804C  28 1D 00 00 */	cmplwi r29, 0
/* 8044B110 00448050  40 82 00 18 */	bne .L_8044B128
/* 8044B114 00448054  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B118 00448058  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B11C 0044805C  38 80 01 DC */	li r4, 0x1dc
/* 8044B120 00448060  4C C6 31 82 */	crclr 6
/* 8044B124 00448064  4B BD F5 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B128:
/* 8044B128 00448068  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044B12C 0044806C  28 00 00 00 */	cmplwi r0, 0
/* 8044B130 00448070  40 82 00 18 */	bne .L_8044B148
/* 8044B134 00448074  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B138 00448078  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B13C 0044807C  38 80 00 C7 */	li r4, 0xc7
/* 8044B140 00448080  4C C6 31 82 */	crclr 6
/* 8044B144 00448084  4B BD F4 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B148:
/* 8044B148 00448088  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044B14C 0044808C  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044B150 00448090  28 1D 00 00 */	cmplwi r29, 0
/* 8044B154 00448094  40 82 00 18 */	bne .L_8044B16C
/* 8044B158 00448098  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B15C 0044809C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B160 004480A0  38 80 01 E5 */	li r4, 0x1e5
/* 8044B164 004480A4  4C C6 31 82 */	crclr 6
/* 8044B168 004480A8  4B BD F4 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B16C:
/* 8044B16C 004480AC  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044B170 004480B0  38 80 00 02 */	li r4, 2
/* 8044B174 004480B4  4B EE 8D 29 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B178 004480B8  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044B17C 004480BC  40 82 00 18 */	bne .L_8044B194
/* 8044B180 004480C0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B184 004480C4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B188 004480C8  38 80 01 E7 */	li r4, 0x1e7
/* 8044B18C 004480CC  4C C6 31 82 */	crclr 6
/* 8044B190 004480D0  4B BD F4 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B194:
/* 8044B194 004480D4  7F A3 EB 78 */	mr r3, r29
/* 8044B198 004480D8  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044B19C 004480DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B1A0 004480E0  7D 89 03 A6 */	mtctr r12
/* 8044B1A4 004480E4  4E 80 04 21 */	bctrl 
.L_8044B1A8:
/* 8044B1A8 004480E8  38 00 00 01 */	li r0, 1
/* 8044B1AC 004480EC  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044B1B0 004480F0  48 00 01 4C */	b .L_8044B2FC
.L_8044B1B4:
/* 8044B1B4 004480F4  38 00 00 03 */	li r0, 3
/* 8044B1B8 004480F8  38 7E 26 78 */	addi r3, r30, 0x2678
/* 8044B1BC 004480FC  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8044B1C0 00448100  4B FA 44 55 */	bl start__Q33ebi5Omake4TMgrFv
/* 8044B1C4 00448104  38 00 00 01 */	li r0, 1
/* 8044B1C8 00448108  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044B1CC 0044810C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B1D0 00448110  28 00 00 00 */	cmplwi r0, 0
/* 8044B1D4 00448114  40 82 00 18 */	bne .L_8044B1EC
/* 8044B1D8 00448118  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B1DC 0044811C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B1E0 00448120  38 80 01 D3 */	li r4, 0x1d3
/* 8044B1E4 00448124  4C C6 31 82 */	crclr 6
/* 8044B1E8 00448128  4B BD F4 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B1EC:
/* 8044B1EC 0044812C  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B1F0 00448130  28 1D 00 00 */	cmplwi r29, 0
/* 8044B1F4 00448134  40 82 00 18 */	bne .L_8044B20C
/* 8044B1F8 00448138  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B1FC 0044813C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B200 00448140  38 80 01 DC */	li r4, 0x1dc
/* 8044B204 00448144  4C C6 31 82 */	crclr 6
/* 8044B208 00448148  4B BD F4 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B20C:
/* 8044B20C 0044814C  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044B210 00448150  28 00 00 00 */	cmplwi r0, 0
/* 8044B214 00448154  40 82 00 18 */	bne .L_8044B22C
/* 8044B218 00448158  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B21C 0044815C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B220 00448160  38 80 00 C7 */	li r4, 0xc7
/* 8044B224 00448164  4C C6 31 82 */	crclr 6
/* 8044B228 00448168  4B BD F4 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B22C:
/* 8044B22C 0044816C  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044B230 00448170  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044B234 00448174  28 1D 00 00 */	cmplwi r29, 0
/* 8044B238 00448178  40 82 00 18 */	bne .L_8044B250
/* 8044B23C 0044817C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B240 00448180  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B244 00448184  38 80 01 E5 */	li r4, 0x1e5
/* 8044B248 00448188  4C C6 31 82 */	crclr 6
/* 8044B24C 0044818C  4B BD F3 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B250:
/* 8044B250 00448190  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044B254 00448194  38 80 00 03 */	li r4, 3
/* 8044B258 00448198  4B EE 8C 45 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B25C 0044819C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044B260 004481A0  40 82 00 18 */	bne .L_8044B278
/* 8044B264 004481A4  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B268 004481A8  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B26C 004481AC  38 80 01 E7 */	li r4, 0x1e7
/* 8044B270 004481B0  4C C6 31 82 */	crclr 6
/* 8044B274 004481B4  4B BD F3 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B278:
/* 8044B278 004481B8  7F A3 EB 78 */	mr r3, r29
/* 8044B27C 004481BC  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044B280 004481C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B284 004481C4  7D 89 03 A6 */	mtctr r12
/* 8044B288 004481C8  4E 80 04 21 */	bctrl 
/* 8044B28C 004481CC  48 00 00 70 */	b .L_8044B2FC
.L_8044B290:
/* 8044B290 004481D0  38 00 00 01 */	li r0, 1
/* 8044B294 004481D4  98 1E 00 34 */	stb r0, 0x34(r30)
/* 8044B298 004481D8  48 00 00 64 */	b .L_8044B2FC
.L_8044B29C:
/* 8044B29C 004481DC  38 00 00 16 */	li r0, 0x16
/* 8044B2A0 004481E0  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044B2A4 004481E4  48 00 00 58 */	b .L_8044B2FC
.L_8044B2A8:
/* 8044B2A8 004481E8  C0 3E 00 4C */	lfs f1, 0x4c(r30)
/* 8044B2AC 004481EC  C0 02 27 3C */	lfs f0, lbl_80520A9C@sda21(r2)
/* 8044B2B0 004481F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044B2B4 004481F4  40 81 00 48 */	ble .L_8044B2FC
/* 8044B2B8 004481F8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044B2BC 004481FC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044B2C0 00448200  80 03 02 28 */	lwz r0, 0x228(r3)
/* 8044B2C4 00448204  2C 00 00 00 */	cmpwi r0, 0
/* 8044B2C8 00448208  40 82 00 2C */	bne .L_8044B2F4
/* 8044B2CC 0044820C  80 03 02 38 */	lwz r0, 0x238(r3)
/* 8044B2D0 00448210  2C 00 00 00 */	cmpwi r0, 0
/* 8044B2D4 00448214  40 82 00 20 */	bne .L_8044B2F4
/* 8044B2D8 00448218  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044B2DC 0044821C  4B F9 F6 D1 */	bl forceQuit__Q23ebi13TMainTitleMgrFv
/* 8044B2E0 00448220  38 60 00 00 */	li r3, 0
/* 8044B2E4 00448224  38 00 00 17 */	li r0, 0x17
/* 8044B2E8 00448228  98 7E 00 34 */	stb r3, 0x34(r30)
/* 8044B2EC 0044822C  90 0D 86 78 */	stw r0, mActiveSectionFlag__8GameFlow@sda21(r13)
/* 8044B2F0 00448230  48 00 00 0C */	b .L_8044B2FC
.L_8044B2F4:
/* 8044B2F4 00448234  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044B2F8 00448238  D0 1E 00 4C */	stfs f0, 0x4c(r30)
.L_8044B2FC:
/* 8044B2FC 0044823C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8044B300 00448240  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8044B304 00448244  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8044B308 00448248  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8044B30C 0044824C  7C 08 03 A6 */	mtlr r0
/* 8044B310 00448250  38 21 00 30 */	addi r1, r1, 0x30
/* 8044B314 00448254  4E 80 00 20 */	blr 
.endfn doUpdateMainTitle__Q25Title7SectionFv
.endif

.if version == 0
.fn doUpdateOmake__Q25Title7SectionFv, global
/* 8044B318 00448258  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044B31C 0044825C  7C 08 02 A6 */	mflr r0
/* 8044B320 00448260  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044B324 00448264  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044B328 00448268  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044B32C 0044826C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044B330 00448270  7C 7D 1B 78 */	mr r29, r3
/* 8044B334 00448274  3C 60 80 4A */	lis r3, lbl_8049B100@ha
/* 8044B338 00448278  93 81 00 10 */	stw r28, 0x10(r1)
/* 8044B33C 0044827C  3B E3 B1 00 */	addi r31, r3, lbl_8049B100@l
/* 8044B340 00448280  38 7D 26 78 */	addi r3, r29, 0x2698
/* 8044B344 00448284  4B FA 43 71 */	bl update__Q33ebi5Omake4TMgrFv
/* 8044B348 00448288  88 1D 2F 08 */	lbz r0, 0x2f28(r29)
/* 8044B34C 0044828C  28 00 00 00 */	cmplwi r0, 0
/* 8044B350 00448290  41 82 01 04 */	beq .L_8044B454
/* 8044B354 00448294  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B358 00448298  28 00 00 00 */	cmplwi r0, 0
/* 8044B35C 0044829C  40 82 00 18 */	bne .L_8044B374
/* 8044B360 004482A0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B364 004482A4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B368 004482A8  38 80 01 D3 */	li r4, 0x1d3
/* 8044B36C 004482AC  4C C6 31 82 */	crclr 6
/* 8044B370 004482B0  4B BD F2 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B374:
/* 8044B374 004482B4  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B378 004482B8  28 1C 00 00 */	cmplwi r28, 0
/* 8044B37C 004482BC  40 82 00 18 */	bne .L_8044B394
/* 8044B380 004482C0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B384 004482C4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B388 004482C8  38 80 01 DC */	li r4, 0x1dc
/* 8044B38C 004482CC  4C C6 31 82 */	crclr 6
/* 8044B390 004482D0  4B BD F2 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B394:
/* 8044B394 004482D4  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B398 004482D8  28 00 00 00 */	cmplwi r0, 0
/* 8044B39C 004482DC  40 82 00 18 */	bne .L_8044B3B4
/* 8044B3A0 004482E0  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B3A4 004482E4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B3A8 004482E8  38 80 00 C7 */	li r4, 0xc7
/* 8044B3AC 004482EC  4C C6 31 82 */	crclr 6
/* 8044B3B0 004482F0  4B BD F2 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B3B4:
/* 8044B3B4 004482F4  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B3B8 004482F8  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B3BC 004482FC  28 1C 00 00 */	cmplwi r28, 0
/* 8044B3C0 00448300  40 82 00 18 */	bne .L_8044B3D8
/* 8044B3C4 00448304  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B3C8 00448308  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B3CC 0044830C  38 80 01 E5 */	li r4, 0x1e5
/* 8044B3D0 00448310  4C C6 31 82 */	crclr 6
/* 8044B3D4 00448314  4B BD F2 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B3D8:
/* 8044B3D8 00448318  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B3DC 0044831C  38 80 00 03 */	li r4, 3
/* 8044B3E0 00448320  4B EE 8A BD */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B3E4 00448324  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B3E8 00448328  40 82 00 18 */	bne .L_8044B400
/* 8044B3EC 0044832C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B3F0 00448330  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B3F4 00448334  38 80 01 E7 */	li r4, 0x1e7
/* 8044B3F8 00448338  4C C6 31 82 */	crclr 6
/* 8044B3FC 0044833C  4B BD F2 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B400:
/* 8044B400 00448340  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044B404 00448344  7F 83 E3 78 */	mr r3, r28
/* 8044B408 00448348  C0 42 16 98 */	lfs f2, kFadeTime__Q23ebi8E2DFader@sda21(r2)
/* 8044B40C 0044834C  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8044B410 00448350  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044B414 00448354  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044B418 00448358  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044B41C 0044835C  4C 41 13 82 */	cror 2, 1, 2
/* 8044B420 00448360  40 82 00 10 */	bne .L_8044B430
/* 8044B424 00448364  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044B428 00448368  EC 00 08 2A */	fadds f0, f0, f1
/* 8044B42C 0044836C  48 00 00 0C */	b .L_8044B438
.L_8044B430:
/* 8044B430 00448370  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044B434 00448374  EC 01 00 28 */	fsubs f0, f1, f0
.L_8044B438:
/* 8044B438 00448378  FC 00 00 1E */	fctiwz f0, f0
/* 8044B43C 0044837C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8044B440 00448380  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044B444 00448384  D8 01 00 08 */	stfd f0, 8(r1)
/* 8044B448 00448388  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8044B44C 0044838C  7D 89 03 A6 */	mtctr r12
/* 8044B450 00448390  4E 80 04 21 */	bctrl 
.L_8044B454:
/* 8044B454 00448394  38 7D 26 78 */	addi r3, r29, 0x2698
/* 8044B458 00448398  4B FA 43 BD */	bl isMovieState__Q33ebi5Omake4TMgrFv
/* 8044B45C 0044839C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B460 004483A0  41 82 02 78 */	beq .L_8044B6D8
/* 8044B464 004483A4  80 1D 2F 3C */	lwz r0, 0x2f5c(r29)
/* 8044B468 004483A8  2C 00 00 00 */	cmpwi r0, 0
/* 8044B46C 004483AC  40 80 01 10 */	bge .L_8044B57C
/* 8044B470 004483B0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B474 004483B4  28 00 00 00 */	cmplwi r0, 0
/* 8044B478 004483B8  40 82 00 18 */	bne .L_8044B490
/* 8044B47C 004483BC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B480 004483C0  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B484 004483C4  38 80 01 D3 */	li r4, 0x1d3
/* 8044B488 004483C8  4C C6 31 82 */	crclr 6
/* 8044B48C 004483CC  4B BD F1 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B490:
/* 8044B490 004483D0  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B494 004483D4  28 1C 00 00 */	cmplwi r28, 0
/* 8044B498 004483D8  40 82 00 18 */	bne .L_8044B4B0
/* 8044B49C 004483DC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B4A0 004483E0  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B4A4 004483E4  38 80 01 DC */	li r4, 0x1dc
/* 8044B4A8 004483E8  4C C6 31 82 */	crclr 6
/* 8044B4AC 004483EC  4B BD F1 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B4B0:
/* 8044B4B0 004483F0  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B4B4 004483F4  28 00 00 00 */	cmplwi r0, 0
/* 8044B4B8 004483F8  40 82 00 18 */	bne .L_8044B4D0
/* 8044B4BC 004483FC  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B4C0 00448400  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B4C4 00448404  38 80 00 C7 */	li r4, 0xc7
/* 8044B4C8 00448408  4C C6 31 82 */	crclr 6
/* 8044B4CC 0044840C  4B BD F1 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B4D0:
/* 8044B4D0 00448410  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B4D4 00448414  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B4D8 00448418  28 1C 00 00 */	cmplwi r28, 0
/* 8044B4DC 0044841C  40 82 00 18 */	bne .L_8044B4F4
/* 8044B4E0 00448420  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B4E4 00448424  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B4E8 00448428  38 80 01 E5 */	li r4, 0x1e5
/* 8044B4EC 0044842C  4C C6 31 82 */	crclr 6
/* 8044B4F0 00448430  4B BD F1 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B4F4:
/* 8044B4F4 00448434  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B4F8 00448438  38 80 00 03 */	li r4, 3
/* 8044B4FC 0044843C  4B EE 89 A1 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B500 00448440  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B504 00448444  40 82 00 18 */	bne .L_8044B51C
/* 8044B508 00448448  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B50C 0044844C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B510 00448450  38 80 01 E7 */	li r4, 0x1e7
/* 8044B514 00448454  4C C6 31 82 */	crclr 6
/* 8044B518 00448458  4B BD F1 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B51C:
/* 8044B51C 0044845C  7F 83 E3 78 */	mr r3, r28
/* 8044B520 00448460  38 80 00 00 */	li r4, 0
/* 8044B524 00448464  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044B528 00448468  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044B52C 0044846C  7D 89 03 A6 */	mtctr r12
/* 8044B530 00448470  4E 80 04 21 */	bctrl 
/* 8044B534 00448474  38 7D 26 78 */	addi r3, r29, 0x2698
/* 8044B538 00448478  4B FA 43 5D */	bl getMovieID__Q33ebi5Omake4TMgrFv
/* 8044B53C 0044847C  38 8D 86 98 */	addi r4, r13, "sMovieIndex__26@unnamed@titleSection_cpp@"@sda21
/* 8044B540 00448480  7C 04 18 AE */	lbzx r0, r4, r3
/* 8044B544 00448484  90 1D 2F 3C */	stw r0, 0x2f5c(r29)
/* 8044B548 00448488  80 1D 2F 3C */	lwz r0, 0x2f5c(r29)
/* 8044B54C 0044848C  2C 00 00 00 */	cmpwi r0, 0
/* 8044B550 00448490  41 80 00 0C */	blt .L_8044B55C
/* 8044B554 00448494  2C 00 00 0C */	cmpwi r0, 0xc
/* 8044B558 00448498  41 80 00 0C */	blt .L_8044B564
.L_8044B55C:
/* 8044B55C 0044849C  38 00 00 09 */	li r0, 9
/* 8044B560 004484A0  90 1D 2F 3C */	stw r0, 0x2f5c(r29)
.L_8044B564:
/* 8044B564 004484A4  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B568 004484A8  80 9D 2F 3C */	lwz r4, 0x2f5c(r29)
/* 8044B56C 004484AC  48 00 4A 35 */	bl load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
/* 8044B570 004484B0  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B574 004484B4  48 00 4F B1 */	bl pause__Q24Game9THPPlayerFv
/* 8044B578 004484B8  48 00 00 1C */	b .L_8044B594
.L_8044B57C:
/* 8044B57C 004484BC  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B580 004484C0  48 00 52 B9 */	bl isFinishLoading__Q24Game9THPPlayerFv
/* 8044B584 004484C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B588 004484C8  41 82 00 0C */	beq .L_8044B594
/* 8044B58C 004484CC  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B590 004484D0  48 00 4E F5 */	bl play__Q24Game9THPPlayerFv
.L_8044B594:
/* 8044B594 004484D4  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B598 004484D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8044B59C 004484DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8044B5A0 004484E0  7D 89 03 A6 */	mtctr r12
/* 8044B5A4 004484E4  4E 80 04 21 */	bctrl 
/* 8044B5A8 004484E8  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B5AC 004484EC  48 00 52 8D */	bl isFinishLoading__Q24Game9THPPlayerFv
/* 8044B5B0 004484F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B5B4 004484F4  41 82 01 24 */	beq .L_8044B6D8
/* 8044B5B8 004484F8  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B5BC 004484FC  48 00 52 D9 */	bl isFinishPlaying__Q24Game9THPPlayerFv
/* 8044B5C0 00448500  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B5C4 00448504  40 82 00 14 */	bne .L_8044B5D8
/* 8044B5C8 00448508  80 7D 00 C4 */	lwz r3, 0xe4(r29)
/* 8044B5CC 0044850C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044B5D0 00448510  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8044B5D4 00448514  41 82 01 04 */	beq .L_8044B6D8
.L_8044B5D8:
/* 8044B5D8 00448518  80 7D 00 C4 */	lwz r3, 0xe4(r29)
/* 8044B5DC 0044851C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044B5E0 00448520  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8044B5E4 00448524  41 82 00 14 */	beq .L_8044B5F8
/* 8044B5E8 00448528  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8044B5EC 0044852C  38 80 18 01 */	li r4, 0x1801
/* 8044B5F0 00448530  38 A0 00 00 */	li r5, 0
/* 8044B5F4 00448534  4B EE D0 3D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8044B5F8:
/* 8044B5F8 00448538  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B5FC 0044853C  48 00 4F 29 */	bl pause__Q24Game9THPPlayerFv
/* 8044B600 00448540  80 7D 2F 38 */	lwz r3, 0x2f58(r29)
/* 8044B604 00448544  48 00 4F 59 */	bl stop__Q24Game9THPPlayerFv
/* 8044B608 00448548  38 7D 26 78 */	addi r3, r29, 0x2698
/* 8044B60C 0044854C  4B FA 42 35 */	bl restartFromMovieState__Q33ebi5Omake4TMgrFv
/* 8044B610 00448550  38 00 FF FF */	li r0, -1
/* 8044B614 00448554  90 1D 2F 3C */	stw r0, 0x2f5c(r29)
/* 8044B618 00448558  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B61C 0044855C  28 00 00 00 */	cmplwi r0, 0
/* 8044B620 00448560  40 82 00 18 */	bne .L_8044B638
/* 8044B624 00448564  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B628 00448568  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B62C 0044856C  38 80 01 D3 */	li r4, 0x1d3
/* 8044B630 00448570  4C C6 31 82 */	crclr 6
/* 8044B634 00448574  4B BD F0 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B638:
/* 8044B638 00448578  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B63C 0044857C  28 1C 00 00 */	cmplwi r28, 0
/* 8044B640 00448580  40 82 00 18 */	bne .L_8044B658
/* 8044B644 00448584  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B648 00448588  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B64C 0044858C  38 80 01 DC */	li r4, 0x1dc
/* 8044B650 00448590  4C C6 31 82 */	crclr 6
/* 8044B654 00448594  4B BD EF ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B658:
/* 8044B658 00448598  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B65C 0044859C  28 00 00 00 */	cmplwi r0, 0
/* 8044B660 004485A0  40 82 00 18 */	bne .L_8044B678
/* 8044B664 004485A4  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B668 004485A8  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B66C 004485AC  38 80 00 C7 */	li r4, 0xc7
/* 8044B670 004485B0  4C C6 31 82 */	crclr 6
/* 8044B674 004485B4  4B BD EF CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B678:
/* 8044B678 004485B8  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B67C 004485BC  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B680 004485C0  28 1C 00 00 */	cmplwi r28, 0
/* 8044B684 004485C4  40 82 00 18 */	bne .L_8044B69C
/* 8044B688 004485C8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B68C 004485CC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B690 004485D0  38 80 01 E5 */	li r4, 0x1e5
/* 8044B694 004485D4  4C C6 31 82 */	crclr 6
/* 8044B698 004485D8  4B BD EF A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B69C:
/* 8044B69C 004485DC  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B6A0 004485E0  38 80 00 03 */	li r4, 3
/* 8044B6A4 004485E4  4B EE 87 F9 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B6A8 004485E8  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B6AC 004485EC  40 82 00 18 */	bne .L_8044B6C4
/* 8044B6B0 004485F0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B6B4 004485F4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B6B8 004485F8  38 80 01 E7 */	li r4, 0x1e7
/* 8044B6BC 004485FC  4C C6 31 82 */	crclr 6
/* 8044B6C0 00448600  4B BD EF 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B6C4:
/* 8044B6C4 00448604  7F 83 E3 78 */	mr r3, r28
/* 8044B6C8 00448608  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044B6CC 0044860C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B6D0 00448610  7D 89 03 A6 */	mtctr r12
/* 8044B6D4 00448614  4E 80 04 21 */	bctrl 
.L_8044B6D8:
/* 8044B6D8 00448618  38 7D 26 78 */	addi r3, r29, 0x2698
/* 8044B6DC 0044861C  4B FA 3F B1 */	bl isFinish__Q33ebi5Omake4TMgrFv
/* 8044B6E0 00448620  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B6E4 00448624  41 82 00 DC */	beq .L_8044B7C0
/* 8044B6E8 00448628  38 00 00 01 */	li r0, 1
/* 8044B6EC 0044862C  7F C4 F3 78 */	mr r4, r30
/* 8044B6F0 00448630  90 1D 00 48 */	stw r0, 0x68(r29)
/* 8044B6F4 00448634  38 7D 00 CC */	addi r3, r29, 0xec
/* 8044B6F8 00448638  38 A0 00 05 */	li r5, 5
/* 8044B6FC 0044863C  4B F9 F0 C1 */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044B700 00448640  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B704 00448644  28 00 00 00 */	cmplwi r0, 0
/* 8044B708 00448648  40 82 00 18 */	bne .L_8044B720
/* 8044B70C 0044864C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B710 00448650  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B714 00448654  38 80 01 D3 */	li r4, 0x1d3
/* 8044B718 00448658  4C C6 31 82 */	crclr 6
/* 8044B71C 0044865C  4B BD EF 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B720:
/* 8044B720 00448660  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B724 00448664  28 1C 00 00 */	cmplwi r28, 0
/* 8044B728 00448668  40 82 00 18 */	bne .L_8044B740
/* 8044B72C 0044866C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B730 00448670  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B734 00448674  38 80 01 DC */	li r4, 0x1dc
/* 8044B738 00448678  4C C6 31 82 */	crclr 6
/* 8044B73C 0044867C  4B BD EF 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B740:
/* 8044B740 00448680  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B744 00448684  28 00 00 00 */	cmplwi r0, 0
/* 8044B748 00448688  40 82 00 18 */	bne .L_8044B760
/* 8044B74C 0044868C  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B750 00448690  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B754 00448694  38 80 00 C7 */	li r4, 0xc7
/* 8044B758 00448698  4C C6 31 82 */	crclr 6
/* 8044B75C 0044869C  4B BD EE E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B760:
/* 8044B760 004486A0  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B764 004486A4  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B768 004486A8  28 1C 00 00 */	cmplwi r28, 0
/* 8044B76C 004486AC  40 82 00 18 */	bne .L_8044B784
/* 8044B770 004486B0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B774 004486B4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B778 004486B8  38 80 01 E5 */	li r4, 0x1e5
/* 8044B77C 004486BC  4C C6 31 82 */	crclr 6
/* 8044B780 004486C0  4B BD EE C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B784:
/* 8044B784 004486C4  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B788 004486C8  38 80 00 00 */	li r4, 0
/* 8044B78C 004486CC  4B EE 87 11 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B790 004486D0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B794 004486D4  40 82 00 18 */	bne .L_8044B7AC
/* 8044B798 004486D8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B79C 004486DC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B7A0 004486E0  38 80 01 E7 */	li r4, 0x1e7
/* 8044B7A4 004486E4  4C C6 31 82 */	crclr 6
/* 8044B7A8 004486E8  4B BD EE 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B7AC:
/* 8044B7AC 004486EC  7F 83 E3 78 */	mr r3, r28
/* 8044B7B0 004486F0  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044B7B4 004486F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B7B8 004486F8  7D 89 03 A6 */	mtctr r12
/* 8044B7BC 004486FC  4E 80 04 21 */	bctrl 
.L_8044B7C0:
/* 8044B7C0 00448700  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044B7C4 00448704  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044B7C8 00448708  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044B7CC 0044870C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044B7D0 00448710  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8044B7D4 00448714  7C 08 03 A6 */	mtlr r0
/* 8044B7D8 00448718  38 21 00 20 */	addi r1, r1, 0x20
/* 8044B7DC 0044871C  4E 80 00 20 */	blr 
.endfn doUpdateOmake__Q25Title7SectionFv
.else
.fn doUpdateOmake__Q25Title7SectionFv, global
/* 8044B318 00448258  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044B31C 0044825C  7C 08 02 A6 */	mflr r0
/* 8044B320 00448260  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044B324 00448264  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044B328 00448268  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044B32C 0044826C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044B330 00448270  7C 7D 1B 78 */	mr r29, r3
/* 8044B334 00448274  3C 60 80 4A */	lis r3, lbl_8049B100@ha
/* 8044B338 00448278  93 81 00 10 */	stw r28, 0x10(r1)
/* 8044B33C 0044827C  3B E3 B1 00 */	addi r31, r3, lbl_8049B100@l
/* 8044B340 00448280  38 7D 26 78 */	addi r3, r29, 0x2678
/* 8044B344 00448284  4B FA 43 71 */	bl update__Q33ebi5Omake4TMgrFv
/* 8044B348 00448288  88 1D 2F 08 */	lbz r0, 0x2f08(r29)
/* 8044B34C 0044828C  28 00 00 00 */	cmplwi r0, 0
/* 8044B350 00448290  41 82 01 04 */	beq .L_8044B454
/* 8044B354 00448294  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B358 00448298  28 00 00 00 */	cmplwi r0, 0
/* 8044B35C 0044829C  40 82 00 18 */	bne .L_8044B374
/* 8044B360 004482A0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B364 004482A4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B368 004482A8  38 80 01 D3 */	li r4, 0x1d3
/* 8044B36C 004482AC  4C C6 31 82 */	crclr 6
/* 8044B370 004482B0  4B BD F2 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B374:
/* 8044B374 004482B4  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B378 004482B8  28 1C 00 00 */	cmplwi r28, 0
/* 8044B37C 004482BC  40 82 00 18 */	bne .L_8044B394
/* 8044B380 004482C0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B384 004482C4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B388 004482C8  38 80 01 DC */	li r4, 0x1dc
/* 8044B38C 004482CC  4C C6 31 82 */	crclr 6
/* 8044B390 004482D0  4B BD F2 B1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B394:
/* 8044B394 004482D4  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B398 004482D8  28 00 00 00 */	cmplwi r0, 0
/* 8044B39C 004482DC  40 82 00 18 */	bne .L_8044B3B4
/* 8044B3A0 004482E0  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B3A4 004482E4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B3A8 004482E8  38 80 00 C7 */	li r4, 0xc7
/* 8044B3AC 004482EC  4C C6 31 82 */	crclr 6
/* 8044B3B0 004482F0  4B BD F2 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B3B4:
/* 8044B3B4 004482F4  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B3B8 004482F8  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B3BC 004482FC  28 1C 00 00 */	cmplwi r28, 0
/* 8044B3C0 00448300  40 82 00 18 */	bne .L_8044B3D8
/* 8044B3C4 00448304  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B3C8 00448308  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B3CC 0044830C  38 80 01 E5 */	li r4, 0x1e5
/* 8044B3D0 00448310  4C C6 31 82 */	crclr 6
/* 8044B3D4 00448314  4B BD F2 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B3D8:
/* 8044B3D8 00448318  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B3DC 0044831C  38 80 00 03 */	li r4, 3
/* 8044B3E0 00448320  4B EE 8A BD */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B3E4 00448324  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B3E8 00448328  40 82 00 18 */	bne .L_8044B400
/* 8044B3EC 0044832C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B3F0 00448330  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B3F4 00448334  38 80 01 E7 */	li r4, 0x1e7
/* 8044B3F8 00448338  4C C6 31 82 */	crclr 6
/* 8044B3FC 0044833C  4B BD F2 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B400:
/* 8044B400 00448340  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044B404 00448344  7F 83 E3 78 */	mr r3, r28
/* 8044B408 00448348  C0 42 16 98 */	lfs f2, kFadeTime__Q23ebi8E2DFader@sda21(r2)
/* 8044B40C 0044834C  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8044B410 00448350  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044B414 00448354  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044B418 00448358  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044B41C 0044835C  4C 41 13 82 */	cror 2, 1, 2
/* 8044B420 00448360  40 82 00 10 */	bne .L_8044B430
/* 8044B424 00448364  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044B428 00448368  EC 00 08 2A */	fadds f0, f0, f1
/* 8044B42C 0044836C  48 00 00 0C */	b .L_8044B438
.L_8044B430:
/* 8044B430 00448370  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044B434 00448374  EC 01 00 28 */	fsubs f0, f1, f0
.L_8044B438:
/* 8044B438 00448378  FC 00 00 1E */	fctiwz f0, f0
/* 8044B43C 0044837C  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8044B440 00448380  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044B444 00448384  D8 01 00 08 */	stfd f0, 8(r1)
/* 8044B448 00448388  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8044B44C 0044838C  7D 89 03 A6 */	mtctr r12
/* 8044B450 00448390  4E 80 04 21 */	bctrl 
.L_8044B454:
/* 8044B454 00448394  38 7D 26 78 */	addi r3, r29, 0x2678
/* 8044B458 00448398  4B FA 43 BD */	bl isMovieState__Q33ebi5Omake4TMgrFv
/* 8044B45C 0044839C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B460 004483A0  41 82 02 78 */	beq .L_8044B6D8
/* 8044B464 004483A4  80 1D 2F 3C */	lwz r0, 0x2f3c(r29)
/* 8044B468 004483A8  2C 00 00 00 */	cmpwi r0, 0
/* 8044B46C 004483AC  40 80 01 10 */	bge .L_8044B57C
/* 8044B470 004483B0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B474 004483B4  28 00 00 00 */	cmplwi r0, 0
/* 8044B478 004483B8  40 82 00 18 */	bne .L_8044B490
/* 8044B47C 004483BC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B480 004483C0  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B484 004483C4  38 80 01 D3 */	li r4, 0x1d3
/* 8044B488 004483C8  4C C6 31 82 */	crclr 6
/* 8044B48C 004483CC  4B BD F1 B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B490:
/* 8044B490 004483D0  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B494 004483D4  28 1C 00 00 */	cmplwi r28, 0
/* 8044B498 004483D8  40 82 00 18 */	bne .L_8044B4B0
/* 8044B49C 004483DC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B4A0 004483E0  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B4A4 004483E4  38 80 01 DC */	li r4, 0x1dc
/* 8044B4A8 004483E8  4C C6 31 82 */	crclr 6
/* 8044B4AC 004483EC  4B BD F1 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B4B0:
/* 8044B4B0 004483F0  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B4B4 004483F4  28 00 00 00 */	cmplwi r0, 0
/* 8044B4B8 004483F8  40 82 00 18 */	bne .L_8044B4D0
/* 8044B4BC 004483FC  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B4C0 00448400  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B4C4 00448404  38 80 00 C7 */	li r4, 0xc7
/* 8044B4C8 00448408  4C C6 31 82 */	crclr 6
/* 8044B4CC 0044840C  4B BD F1 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B4D0:
/* 8044B4D0 00448410  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B4D4 00448414  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B4D8 00448418  28 1C 00 00 */	cmplwi r28, 0
/* 8044B4DC 0044841C  40 82 00 18 */	bne .L_8044B4F4
/* 8044B4E0 00448420  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B4E4 00448424  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B4E8 00448428  38 80 01 E5 */	li r4, 0x1e5
/* 8044B4EC 0044842C  4C C6 31 82 */	crclr 6
/* 8044B4F0 00448430  4B BD F1 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B4F4:
/* 8044B4F4 00448434  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B4F8 00448438  38 80 00 03 */	li r4, 3
/* 8044B4FC 0044843C  4B EE 89 A1 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B500 00448440  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B504 00448444  40 82 00 18 */	bne .L_8044B51C
/* 8044B508 00448448  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B50C 0044844C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B510 00448450  38 80 01 E7 */	li r4, 0x1e7
/* 8044B514 00448454  4C C6 31 82 */	crclr 6
/* 8044B518 00448458  4B BD F1 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B51C:
/* 8044B51C 0044845C  7F 83 E3 78 */	mr r3, r28
/* 8044B520 00448460  38 80 00 00 */	li r4, 0
/* 8044B524 00448464  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044B528 00448468  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044B52C 0044846C  7D 89 03 A6 */	mtctr r12
/* 8044B530 00448470  4E 80 04 21 */	bctrl 
/* 8044B534 00448474  38 7D 26 78 */	addi r3, r29, 0x2678
/* 8044B538 00448478  4B FA 43 5D */	bl getMovieID__Q33ebi5Omake4TMgrFv
/* 8044B53C 0044847C  38 8D 86 98 */	addi r4, r13, "sMovieIndex__26@unnamed@titleSection_cpp@"@sda21
/* 8044B540 00448480  7C 04 18 AE */	lbzx r0, r4, r3
/* 8044B544 00448484  90 1D 2F 3C */	stw r0, 0x2f3c(r29)
/* 8044B548 00448488  80 1D 2F 3C */	lwz r0, 0x2f3c(r29)
/* 8044B54C 0044848C  2C 00 00 00 */	cmpwi r0, 0
/* 8044B550 00448490  41 80 00 0C */	blt .L_8044B55C
/* 8044B554 00448494  2C 00 00 0C */	cmpwi r0, 0xc
/* 8044B558 00448498  41 80 00 0C */	blt .L_8044B564
.L_8044B55C:
/* 8044B55C 0044849C  38 00 00 09 */	li r0, 9
/* 8044B560 004484A0  90 1D 2F 3C */	stw r0, 0x2f3c(r29)
.L_8044B564:
/* 8044B564 004484A4  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B568 004484A8  80 9D 2F 3C */	lwz r4, 0x2f3c(r29)
/* 8044B56C 004484AC  48 00 4A 35 */	bl load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
/* 8044B570 004484B0  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B574 004484B4  48 00 4F B1 */	bl pause__Q24Game9THPPlayerFv
/* 8044B578 004484B8  48 00 00 1C */	b .L_8044B594
.L_8044B57C:
/* 8044B57C 004484BC  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B580 004484C0  48 00 52 B9 */	bl isFinishLoading__Q24Game9THPPlayerFv
/* 8044B584 004484C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B588 004484C8  41 82 00 0C */	beq .L_8044B594
/* 8044B58C 004484CC  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B590 004484D0  48 00 4E F5 */	bl play__Q24Game9THPPlayerFv
.L_8044B594:
/* 8044B594 004484D4  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B598 004484D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8044B59C 004484DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8044B5A0 004484E0  7D 89 03 A6 */	mtctr r12
/* 8044B5A4 004484E4  4E 80 04 21 */	bctrl 
/* 8044B5A8 004484E8  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B5AC 004484EC  48 00 52 8D */	bl isFinishLoading__Q24Game9THPPlayerFv
/* 8044B5B0 004484F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B5B4 004484F4  41 82 01 24 */	beq .L_8044B6D8
/* 8044B5B8 004484F8  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B5BC 004484FC  48 00 52 D9 */	bl isFinishPlaying__Q24Game9THPPlayerFv
/* 8044B5C0 00448500  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B5C4 00448504  40 82 00 14 */	bne .L_8044B5D8
/* 8044B5C8 00448508  80 7D 00 C4 */	lwz r3, 0xc4(r29)
/* 8044B5CC 0044850C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044B5D0 00448510  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8044B5D4 00448514  41 82 01 04 */	beq .L_8044B6D8
.L_8044B5D8:
/* 8044B5D8 00448518  80 7D 00 C4 */	lwz r3, 0xc4(r29)
/* 8044B5DC 0044851C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8044B5E0 00448520  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8044B5E4 00448524  41 82 00 14 */	beq .L_8044B5F8
/* 8044B5E8 00448528  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 8044B5EC 0044852C  38 80 18 01 */	li r4, 0x1801
/* 8044B5F0 00448530  38 A0 00 00 */	li r5, 0
/* 8044B5F4 00448534  4B EE D0 3D */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_8044B5F8:
/* 8044B5F8 00448538  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B5FC 0044853C  48 00 4F 29 */	bl pause__Q24Game9THPPlayerFv
/* 8044B600 00448540  80 7D 2F 38 */	lwz r3, 0x2f38(r29)
/* 8044B604 00448544  48 00 4F 59 */	bl stop__Q24Game9THPPlayerFv
/* 8044B608 00448548  38 7D 26 78 */	addi r3, r29, 0x2678
/* 8044B60C 0044854C  4B FA 42 35 */	bl restartFromMovieState__Q33ebi5Omake4TMgrFv
/* 8044B610 00448550  38 00 FF FF */	li r0, -1
/* 8044B614 00448554  90 1D 2F 3C */	stw r0, 0x2f3c(r29)
/* 8044B618 00448558  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B61C 0044855C  28 00 00 00 */	cmplwi r0, 0
/* 8044B620 00448560  40 82 00 18 */	bne .L_8044B638
/* 8044B624 00448564  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B628 00448568  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B62C 0044856C  38 80 01 D3 */	li r4, 0x1d3
/* 8044B630 00448570  4C C6 31 82 */	crclr 6
/* 8044B634 00448574  4B BD F0 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B638:
/* 8044B638 00448578  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B63C 0044857C  28 1C 00 00 */	cmplwi r28, 0
/* 8044B640 00448580  40 82 00 18 */	bne .L_8044B658
/* 8044B644 00448584  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B648 00448588  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B64C 0044858C  38 80 01 DC */	li r4, 0x1dc
/* 8044B650 00448590  4C C6 31 82 */	crclr 6
/* 8044B654 00448594  4B BD EF ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B658:
/* 8044B658 00448598  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B65C 0044859C  28 00 00 00 */	cmplwi r0, 0
/* 8044B660 004485A0  40 82 00 18 */	bne .L_8044B678
/* 8044B664 004485A4  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B668 004485A8  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B66C 004485AC  38 80 00 C7 */	li r4, 0xc7
/* 8044B670 004485B0  4C C6 31 82 */	crclr 6
/* 8044B674 004485B4  4B BD EF CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B678:
/* 8044B678 004485B8  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B67C 004485BC  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B680 004485C0  28 1C 00 00 */	cmplwi r28, 0
/* 8044B684 004485C4  40 82 00 18 */	bne .L_8044B69C
/* 8044B688 004485C8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B68C 004485CC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B690 004485D0  38 80 01 E5 */	li r4, 0x1e5
/* 8044B694 004485D4  4C C6 31 82 */	crclr 6
/* 8044B698 004485D8  4B BD EF A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B69C:
/* 8044B69C 004485DC  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B6A0 004485E0  38 80 00 03 */	li r4, 3
/* 8044B6A4 004485E4  4B EE 87 F9 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B6A8 004485E8  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B6AC 004485EC  40 82 00 18 */	bne .L_8044B6C4
/* 8044B6B0 004485F0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B6B4 004485F4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B6B8 004485F8  38 80 01 E7 */	li r4, 0x1e7
/* 8044B6BC 004485FC  4C C6 31 82 */	crclr 6
/* 8044B6C0 00448600  4B BD EF 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B6C4:
/* 8044B6C4 00448604  7F 83 E3 78 */	mr r3, r28
/* 8044B6C8 00448608  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044B6CC 0044860C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B6D0 00448610  7D 89 03 A6 */	mtctr r12
/* 8044B6D4 00448614  4E 80 04 21 */	bctrl 
.L_8044B6D8:
/* 8044B6D8 00448618  38 7D 26 78 */	addi r3, r29, 0x2678
/* 8044B6DC 0044861C  4B FA 3F B1 */	bl isFinish__Q33ebi5Omake4TMgrFv
/* 8044B6E0 00448620  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B6E4 00448624  41 82 00 DC */	beq .L_8044B7C0
/* 8044B6E8 00448628  38 00 00 01 */	li r0, 1
/* 8044B6EC 0044862C  7F C4 F3 78 */	mr r4, r30
/* 8044B6F0 00448630  90 1D 00 48 */	stw r0, 0x48(r29)
/* 8044B6F4 00448634  38 7D 00 CC */	addi r3, r29, 0xcc
/* 8044B6F8 00448638  38 A0 00 05 */	li r5, 5
/* 8044B6FC 0044863C  4B F9 F0 C1 */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044B700 00448640  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B704 00448644  28 00 00 00 */	cmplwi r0, 0
/* 8044B708 00448648  40 82 00 18 */	bne .L_8044B720
/* 8044B70C 0044864C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B710 00448650  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B714 00448654  38 80 01 D3 */	li r4, 0x1d3
/* 8044B718 00448658  4C C6 31 82 */	crclr 6
/* 8044B71C 0044865C  4B BD EF 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B720:
/* 8044B720 00448660  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B724 00448664  28 1C 00 00 */	cmplwi r28, 0
/* 8044B728 00448668  40 82 00 18 */	bne .L_8044B740
/* 8044B72C 0044866C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B730 00448670  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B734 00448674  38 80 01 DC */	li r4, 0x1dc
/* 8044B738 00448678  4C C6 31 82 */	crclr 6
/* 8044B73C 0044867C  4B BD EF 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B740:
/* 8044B740 00448680  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044B744 00448684  28 00 00 00 */	cmplwi r0, 0
/* 8044B748 00448688  40 82 00 18 */	bne .L_8044B760
/* 8044B74C 0044868C  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044B750 00448690  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B754 00448694  38 80 00 C7 */	li r4, 0xc7
/* 8044B758 00448698  4C C6 31 82 */	crclr 6
/* 8044B75C 0044869C  4B BD EE E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B760:
/* 8044B760 004486A0  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044B764 004486A4  83 83 00 04 */	lwz r28, 4(r3)
/* 8044B768 004486A8  28 1C 00 00 */	cmplwi r28, 0
/* 8044B76C 004486AC  40 82 00 18 */	bne .L_8044B784
/* 8044B770 004486B0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B774 004486B4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B778 004486B8  38 80 01 E5 */	li r4, 0x1e5
/* 8044B77C 004486BC  4C C6 31 82 */	crclr 6
/* 8044B780 004486C0  4B BD EE C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B784:
/* 8044B784 004486C4  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044B788 004486C8  38 80 00 00 */	li r4, 0
/* 8044B78C 004486CC  4B EE 87 11 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044B790 004486D0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044B794 004486D4  40 82 00 18 */	bne .L_8044B7AC
/* 8044B798 004486D8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B79C 004486DC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B7A0 004486E0  38 80 01 E7 */	li r4, 0x1e7
/* 8044B7A4 004486E4  4C C6 31 82 */	crclr 6
/* 8044B7A8 004486E8  4B BD EE 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B7AC:
/* 8044B7AC 004486EC  7F 83 E3 78 */	mr r3, r28
/* 8044B7B0 004486F0  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044B7B4 004486F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044B7B8 004486F8  7D 89 03 A6 */	mtctr r12
/* 8044B7BC 004486FC  4E 80 04 21 */	bctrl 
.L_8044B7C0:
/* 8044B7C0 00448700  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044B7C4 00448704  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044B7C8 00448708  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044B7CC 0044870C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044B7D0 00448710  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8044B7D4 00448714  7C 08 03 A6 */	mtlr r0
/* 8044B7D8 00448718  38 21 00 20 */	addi r1, r1, 0x20
/* 8044B7DC 0044871C  4E 80 00 20 */	blr 
.endfn doUpdateOmake__Q25Title7SectionFv
.endif

.fn run__Q25Title7SectionFv, global
/* 8044B7E0 00448720  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044B7E4 00448724  7C 08 02 A6 */	mflr r0
/* 8044B7E8 00448728  3C 80 80 51 */	lis r4, gGameConfig__4Game@ha
/* 8044B7EC 0044872C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044B7F0 00448730  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044B7F4 00448734  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044B7F8 00448738  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044B7FC 0044873C  7C 7D 1B 78 */	mr r29, r3
/* 8044B800 00448740  38 64 41 FC */	addi r3, r4, gGameConfig__4Game@l
/* 8044B804 00448744  80 03 02 38 */	lwz r0, 0x238(r3)
/* 8044B808 00448748  2C 00 00 00 */	cmpwi r0, 0
/* 8044B80C 0044874C  40 82 00 1C */	bne .L_8044B828
/* 8044B810 00448750  80 03 01 C8 */	lwz r0, 0x1c8(r3)
/* 8044B814 00448754  2C 00 00 00 */	cmpwi r0, 0
/* 8044B818 00448758  40 82 00 10 */	bne .L_8044B828
/* 8044B81C 0044875C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044B820 00448760  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8044B824 00448764  4B FF 77 79 */	bl loadGameOption__Q34Game10MemoryCard3MgrFv
.L_8044B828:
/* 8044B828 00448768  3B C0 00 01 */	li r30, 1
/* 8044B82C 0044876C  48 00 00 88 */	b .L_8044B8B4
.L_8044B830:
/* 8044B830 00448770  7F A3 EB 78 */	mr r3, r29
/* 8044B834 00448774  4B FD 87 99 */	bl beginFrame__7SectionFv
/* 8044B838 00448778  7F A3 EB 78 */	mr r3, r29
/* 8044B83C 0044877C  4B FD 87 D9 */	bl beginRender__7SectionFv
/* 8044B840 00448780  7F A3 EB 78 */	mr r3, r29
/* 8044B844 00448784  4B FD 87 F5 */	bl endRender__7SectionFv
/* 8044B848 00448788  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044B84C 0044878C  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8044B850 00448790  81 83 00 00 */	lwz r12, 0(r3)
/* 8044B854 00448794  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8044B858 00448798  7D 89 03 A6 */	mtctr r12
/* 8044B85C 0044879C  4E 80 04 21 */	bctrl 
/* 8044B860 004487A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044B864 004487A4  3B E0 00 00 */	li r31, 0
/* 8044B868 004487A8  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8044B86C 004487AC  80 03 00 A8 */	lwz r0, 0xa8(r3)
/* 8044B870 004487B0  2C 00 00 00 */	cmpwi r0, 0
/* 8044B874 004487B4  40 82 00 14 */	bne .L_8044B888
/* 8044B878 004487B8  4B FF 57 45 */	bl checkStatus__13MemoryCardMgrFv
/* 8044B87C 004487BC  28 03 00 0B */	cmplwi r3, 0xb
/* 8044B880 004487C0  41 82 00 08 */	beq .L_8044B888
/* 8044B884 004487C4  3B E0 00 01 */	li r31, 1
.L_8044B888:
/* 8044B888 004487C8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8044B88C 004487CC  41 82 00 20 */	beq .L_8044B8AC
/* 8044B890 004487D0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044B894 004487D4  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 8044B898 004487D8  4B FF 57 25 */	bl checkStatus__13MemoryCardMgrFv
/* 8044B89C 004487DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044B8A0 004487E0  80 63 00 60 */	lwz r3, 0x60(r3)
/* 8044B8A4 004487E4  4B FF B6 11 */	bl setup__Q34Game14CommonSaveData3MgrFv
/* 8044B8A8 004487E8  3B C0 00 00 */	li r30, 0
.L_8044B8AC:
/* 8044B8AC 004487EC  7F A3 EB 78 */	mr r3, r29
/* 8044B8B0 004487F0  4B FD 87 41 */	bl endFrame__7SectionFv
.L_8044B8B4:
/* 8044B8B4 004487F4  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8044B8B8 004487F8  40 82 FF 78 */	bne .L_8044B830
/* 8044B8BC 004487FC  7F A3 EB 78 */	mr r3, r29
/* 8044B8C0 00448800  4B FD 82 05 */	bl run__7SectionFv
/* 8044B8C4 00448804  38 00 00 00 */	li r0, 0
/* 8044B8C8 00448808  98 1D 00 34 */	stb r0, 0x34(r29)
/* 8044B8CC 0044880C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044B8D0 00448810  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044B8D4 00448814  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044B8D8 00448818  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044B8DC 0044881C  7C 08 03 A6 */	mtlr r0
/* 8044B8E0 00448820  38 21 00 20 */	addi r1, r1, 0x20
/* 8044B8E4 00448824  4E 80 00 20 */	blr 
.endfn run__Q25Title7SectionFv

.if version == 0
.fn doUpdate__Q25Title7SectionFv, global
/* 8044B8E8 00448828  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044B8EC 0044882C  7C 08 02 A6 */	mflr r0
/* 8044B8F0 00448830  3C A0 80 4A */	lis r5, lbl_8049B100@ha
/* 8044B8F4 00448834  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044B8F8 00448838  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044B8FC 0044883C  3B E5 B1 00 */	addi r31, r5, lbl_8049B100@l
/* 8044B900 00448840  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044B904 00448844  7C 7E 1B 78 */	mr r30, r3
/* 8044B908 00448848  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044B90C 0044884C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8044B910 00448850  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044B914 00448854  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 8044B918 00448858  81 83 00 00 */	lwz r12, 0(r3)
/* 8044B91C 0044885C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8044B920 00448860  7D 89 03 A6 */	mtctr r12
/* 8044B924 00448864  4E 80 04 21 */	bctrl 
/* 8044B928 00448868  80 1E 00 48 */	lwz r0, 0x68(r30)
/* 8044B92C 0044886C  2C 00 00 03 */	cmpwi r0, 3
/* 8044B930 00448870  41 82 02 74 */	beq .L_8044BBA4
/* 8044B934 00448874  40 80 00 1C */	bge .L_8044B950
/* 8044B938 00448878  2C 00 00 01 */	cmpwi r0, 1
/* 8044B93C 0044887C  41 82 00 40 */	beq .L_8044B97C
/* 8044B940 00448880  40 80 00 48 */	bge .L_8044B988
/* 8044B944 00448884  2C 00 00 00 */	cmpwi r0, 0
/* 8044B948 00448888  40 80 00 18 */	bge .L_8044B960
/* 8044B94C 0044888C  48 00 05 20 */	b .L_8044BE6C
.L_8044B950:
/* 8044B950 00448890  2C 00 00 05 */	cmpwi r0, 5
/* 8044B954 00448894  41 82 04 2C */	beq .L_8044BD80
/* 8044B958 00448898  40 80 05 14 */	bge .L_8044BE6C
/* 8044B95C 0044889C  48 00 02 54 */	b .L_8044BBB0
.L_8044B960:
/* 8044B960 004488A0  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044B964 004488A4  4B F9 ED 99 */	bl start__Q23ebi13TMainTitleMgrFv
/* 8044B968 004488A8  38 00 00 01 */	li r0, 1
/* 8044B96C 004488AC  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044B970 004488B0  90 1E 00 48 */	stw r0, 0x68(r30)
/* 8044B974 004488B4  4B F9 F0 5D */	bl update__Q23ebi13TMainTitleMgrFv
/* 8044B978 004488B8  48 00 04 F4 */	b .L_8044BE6C
.L_8044B97C:
/* 8044B97C 004488BC  7F C3 F3 78 */	mr r3, r30
/* 8044B980 004488C0  4B FF F3 11 */	bl doUpdateMainTitle__Q25Title7SectionFv
/* 8044B984 004488C4  48 00 04 E8 */	b .L_8044BE6C
.L_8044B988:
/* 8044B988 004488C8  7F C3 F3 78 */	mr r3, r30
/* 8044B98C 004488CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8044B990 004488D0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8044B994 004488D4  7D 89 03 A6 */	mtctr r12
/* 8044B998 004488D8  4E 80 04 21 */	bctrl 
/* 8044B99C 004488DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B9A0 004488E0  41 82 04 CC */	beq .L_8044BE6C
/* 8044B9A4 004488E4  38 7E 17 30 */	addi r3, r30, 0x1750
/* 8044B9A8 004488E8  4B F8 48 CD */	bl update__Q33ebi6Option4TMgrFv
/* 8044B9AC 004488EC  88 1E 26 50 */	lbz r0, 0x2670(r30)
/* 8044B9B0 004488F0  28 00 00 00 */	cmplwi r0, 0
/* 8044B9B4 004488F4  41 82 01 04 */	beq .L_8044BAB8
/* 8044B9B8 004488F8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B9BC 004488FC  28 00 00 00 */	cmplwi r0, 0
/* 8044B9C0 00448900  40 82 00 18 */	bne .L_8044B9D8
/* 8044B9C4 00448904  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B9C8 00448908  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B9CC 0044890C  38 80 01 D3 */	li r4, 0x1d3
/* 8044B9D0 00448910  4C C6 31 82 */	crclr 6
/* 8044B9D4 00448914  4B BD EC 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B9D8:
/* 8044B9D8 00448918  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B9DC 0044891C  28 1D 00 00 */	cmplwi r29, 0
/* 8044B9E0 00448920  40 82 00 18 */	bne .L_8044B9F8
/* 8044B9E4 00448924  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B9E8 00448928  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B9EC 0044892C  38 80 01 DC */	li r4, 0x1dc
/* 8044B9F0 00448930  4C C6 31 82 */	crclr 6
/* 8044B9F4 00448934  4B BD EC 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B9F8:
/* 8044B9F8 00448938  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044B9FC 0044893C  28 00 00 00 */	cmplwi r0, 0
/* 8044BA00 00448940  40 82 00 18 */	bne .L_8044BA18
/* 8044BA04 00448944  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BA08 00448948  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BA0C 0044894C  38 80 00 C7 */	li r4, 0xc7
/* 8044BA10 00448950  4C C6 31 82 */	crclr 6
/* 8044BA14 00448954  4B BD EC 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BA18:
/* 8044BA18 00448958  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044BA1C 0044895C  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044BA20 00448960  28 1D 00 00 */	cmplwi r29, 0
/* 8044BA24 00448964  40 82 00 18 */	bne .L_8044BA3C
/* 8044BA28 00448968  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BA2C 0044896C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BA30 00448970  38 80 01 E5 */	li r4, 0x1e5
/* 8044BA34 00448974  4C C6 31 82 */	crclr 6
/* 8044BA38 00448978  4B BD EC 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BA3C:
/* 8044BA3C 0044897C  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044BA40 00448980  38 80 00 01 */	li r4, 1
/* 8044BA44 00448984  4B EE 84 59 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BA48 00448988  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044BA4C 0044898C  40 82 00 18 */	bne .L_8044BA64
/* 8044BA50 00448990  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BA54 00448994  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BA58 00448998  38 80 01 E7 */	li r4, 0x1e7
/* 8044BA5C 0044899C  4C C6 31 82 */	crclr 6
/* 8044BA60 004489A0  4B BD EB E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BA64:
/* 8044BA64 004489A4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044BA68 004489A8  7F A3 EB 78 */	mr r3, r29
/* 8044BA6C 004489AC  C0 42 16 98 */	lfs f2, kFadeTime__Q23ebi8E2DFader@sda21(r2)
/* 8044BA70 004489B0  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8044BA74 004489B4  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044BA78 004489B8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044BA7C 004489BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044BA80 004489C0  4C 41 13 82 */	cror 2, 1, 2
/* 8044BA84 004489C4  40 82 00 10 */	bne .L_8044BA94
/* 8044BA88 004489C8  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044BA8C 004489CC  EC 00 08 2A */	fadds f0, f0, f1
/* 8044BA90 004489D0  48 00 00 0C */	b .L_8044BA9C
.L_8044BA94:
/* 8044BA94 004489D4  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044BA98 004489D8  EC 01 00 28 */	fsubs f0, f1, f0
.L_8044BA9C:
/* 8044BA9C 004489DC  FC 00 00 1E */	fctiwz f0, f0
/* 8044BAA0 004489E0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8044BAA4 004489E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044BAA8 004489E8  D8 01 00 08 */	stfd f0, 8(r1)
/* 8044BAAC 004489EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8044BAB0 004489F0  7D 89 03 A6 */	mtctr r12
/* 8044BAB4 004489F4  4E 80 04 21 */	bctrl 
.L_8044BAB8:
/* 8044BAB8 004489F8  38 7E 17 30 */	addi r3, r30, 0x1750
/* 8044BABC 004489FC  4B F8 47 15 */	bl isFinish__Q33ebi6Option4TMgrFv
/* 8044BAC0 00448A00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BAC4 00448A04  41 82 03 A8 */	beq .L_8044BE6C
/* 8044BAC8 00448A08  38 00 00 01 */	li r0, 1
/* 8044BACC 00448A0C  7F 84 E3 78 */	mr r4, r28
/* 8044BAD0 00448A10  90 1E 00 48 */	stw r0, 0x68(r30)
/* 8044BAD4 00448A14  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044BAD8 00448A18  38 A0 00 03 */	li r5, 3
/* 8044BADC 00448A1C  4B F9 EC E1 */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044BAE0 00448A20  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BAE4 00448A24  28 00 00 00 */	cmplwi r0, 0
/* 8044BAE8 00448A28  40 82 00 18 */	bne .L_8044BB00
/* 8044BAEC 00448A2C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BAF0 00448A30  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BAF4 00448A34  38 80 01 D3 */	li r4, 0x1d3
/* 8044BAF8 00448A38  4C C6 31 82 */	crclr 6
/* 8044BAFC 00448A3C  4B BD EB 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB00:
/* 8044BB00 00448A40  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BB04 00448A44  28 1C 00 00 */	cmplwi r28, 0
/* 8044BB08 00448A48  40 82 00 18 */	bne .L_8044BB20
/* 8044BB0C 00448A4C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BB10 00448A50  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB14 00448A54  38 80 01 DC */	li r4, 0x1dc
/* 8044BB18 00448A58  4C C6 31 82 */	crclr 6
/* 8044BB1C 00448A5C  4B BD EB 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB20:
/* 8044BB20 00448A60  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BB24 00448A64  28 00 00 00 */	cmplwi r0, 0
/* 8044BB28 00448A68  40 82 00 18 */	bne .L_8044BB40
/* 8044BB2C 00448A6C  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BB30 00448A70  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB34 00448A74  38 80 00 C7 */	li r4, 0xc7
/* 8044BB38 00448A78  4C C6 31 82 */	crclr 6
/* 8044BB3C 00448A7C  4B BD EB 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB40:
/* 8044BB40 00448A80  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BB44 00448A84  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BB48 00448A88  28 1C 00 00 */	cmplwi r28, 0
/* 8044BB4C 00448A8C  40 82 00 18 */	bne .L_8044BB64
/* 8044BB50 00448A90  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BB54 00448A94  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB58 00448A98  38 80 01 E5 */	li r4, 0x1e5
/* 8044BB5C 00448A9C  4C C6 31 82 */	crclr 6
/* 8044BB60 00448AA0  4B BD EA E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB64:
/* 8044BB64 00448AA4  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BB68 00448AA8  38 80 00 00 */	li r4, 0
/* 8044BB6C 00448AAC  4B EE 83 31 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BB70 00448AB0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044BB74 00448AB4  40 82 00 18 */	bne .L_8044BB8C
/* 8044BB78 00448AB8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BB7C 00448ABC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB80 00448AC0  38 80 01 E7 */	li r4, 0x1e7
/* 8044BB84 00448AC4  4C C6 31 82 */	crclr 6
/* 8044BB88 00448AC8  4B BD EA B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB8C:
/* 8044BB8C 00448ACC  7F 83 E3 78 */	mr r3, r28
/* 8044BB90 00448AD0  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044BB94 00448AD4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044BB98 00448AD8  7D 89 03 A6 */	mtctr r12
/* 8044BB9C 00448ADC  4E 80 04 21 */	bctrl 
/* 8044BBA0 00448AE0  48 00 02 CC */	b .L_8044BE6C
.L_8044BBA4:
/* 8044BBA4 00448AE4  7F C3 F3 78 */	mr r3, r30
/* 8044BBA8 00448AE8  4B FF F7 71 */	bl doUpdateOmake__Q25Title7SectionFv
/* 8044BBAC 00448AEC  48 00 02 C0 */	b .L_8044BE6C
.L_8044BBB0:
/* 8044BBB0 00448AF0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044BBB4 00448AF4  4B FB 04 79 */	bl update__Q26Screen9Game2DMgrFv
/* 8044BBB8 00448AF8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044BBBC 00448AFC  4B FB 44 5D */	bl isEndHighScore__Q26Screen9Game2DMgrFv
/* 8044BBC0 00448B00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BBC4 00448B04  41 82 02 A8 */	beq .L_8044BE6C
/* 8044BBC8 00448B08  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BBCC 00448B0C  28 00 00 00 */	cmplwi r0, 0
/* 8044BBD0 00448B10  40 82 00 18 */	bne .L_8044BBE8
/* 8044BBD4 00448B14  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BBD8 00448B18  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BBDC 00448B1C  38 80 01 D3 */	li r4, 0x1d3
/* 8044BBE0 00448B20  4C C6 31 82 */	crclr 6
/* 8044BBE4 00448B24  4B BD EA 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BBE8:
/* 8044BBE8 00448B28  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BBEC 00448B2C  28 1C 00 00 */	cmplwi r28, 0
/* 8044BBF0 00448B30  40 82 00 18 */	bne .L_8044BC08
/* 8044BBF4 00448B34  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BBF8 00448B38  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BBFC 00448B3C  38 80 01 DC */	li r4, 0x1dc
/* 8044BC00 00448B40  4C C6 31 82 */	crclr 6
/* 8044BC04 00448B44  4B BD EA 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC08:
/* 8044BC08 00448B48  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BC0C 00448B4C  28 00 00 00 */	cmplwi r0, 0
/* 8044BC10 00448B50  40 82 00 18 */	bne .L_8044BC28
/* 8044BC14 00448B54  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BC18 00448B58  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BC1C 00448B5C  38 80 00 C7 */	li r4, 0xc7
/* 8044BC20 00448B60  4C C6 31 82 */	crclr 6
/* 8044BC24 00448B64  4B BD EA 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC28:
/* 8044BC28 00448B68  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BC2C 00448B6C  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BC30 00448B70  28 1C 00 00 */	cmplwi r28, 0
/* 8044BC34 00448B74  40 82 00 18 */	bne .L_8044BC4C
/* 8044BC38 00448B78  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BC3C 00448B7C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BC40 00448B80  38 80 01 E5 */	li r4, 0x1e5
/* 8044BC44 00448B84  4C C6 31 82 */	crclr 6
/* 8044BC48 00448B88  4B BD E9 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC4C:
/* 8044BC4C 00448B8C  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BC50 00448B90  38 80 00 02 */	li r4, 2
/* 8044BC54 00448B94  4B EE 82 49 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BC58 00448B98  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044BC5C 00448B9C  40 82 00 18 */	bne .L_8044BC74
/* 8044BC60 00448BA0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BC64 00448BA4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BC68 00448BA8  38 80 01 E7 */	li r4, 0x1e7
/* 8044BC6C 00448BAC  4C C6 31 82 */	crclr 6
/* 8044BC70 00448BB0  4B BD E9 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC74:
/* 8044BC74 00448BB4  7F 83 E3 78 */	mr r3, r28
/* 8044BC78 00448BB8  38 80 00 00 */	li r4, 0
/* 8044BC7C 00448BBC  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044BC80 00448BC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044BC84 00448BC4  7D 89 03 A6 */	mtctr r12
/* 8044BC88 00448BC8  4E 80 04 21 */	bctrl 
/* 8044BC8C 00448BCC  38 00 00 01 */	li r0, 1
/* 8044BC90 00448BD0  7F A4 EB 78 */	mr r4, r29
/* 8044BC94 00448BD4  90 1E 00 48 */	stw r0, 0x68(r30)
/* 8044BC98 00448BD8  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044BC9C 00448BDC  38 A0 00 04 */	li r5, 4
/* 8044BCA0 00448BE0  4B F9 EB 1D */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044BCA4 00448BE4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BCA8 00448BE8  28 00 00 00 */	cmplwi r0, 0
/* 8044BCAC 00448BEC  40 82 00 18 */	bne .L_8044BCC4
/* 8044BCB0 00448BF0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BCB4 00448BF4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BCB8 00448BF8  38 80 01 D3 */	li r4, 0x1d3
/* 8044BCBC 00448BFC  4C C6 31 82 */	crclr 6
/* 8044BCC0 00448C00  4B BD E9 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BCC4:
/* 8044BCC4 00448C04  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BCC8 00448C08  28 1C 00 00 */	cmplwi r28, 0
/* 8044BCCC 00448C0C  40 82 00 18 */	bne .L_8044BCE4
/* 8044BCD0 00448C10  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BCD4 00448C14  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BCD8 00448C18  38 80 01 DC */	li r4, 0x1dc
/* 8044BCDC 00448C1C  4C C6 31 82 */	crclr 6
/* 8044BCE0 00448C20  4B BD E9 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BCE4:
/* 8044BCE4 00448C24  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BCE8 00448C28  28 00 00 00 */	cmplwi r0, 0
/* 8044BCEC 00448C2C  40 82 00 18 */	bne .L_8044BD04
/* 8044BCF0 00448C30  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BCF4 00448C34  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BCF8 00448C38  38 80 00 C7 */	li r4, 0xc7
/* 8044BCFC 00448C3C  4C C6 31 82 */	crclr 6
/* 8044BD00 00448C40  4B BD E9 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BD04:
/* 8044BD04 00448C44  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BD08 00448C48  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BD0C 00448C4C  28 1C 00 00 */	cmplwi r28, 0
/* 8044BD10 00448C50  40 82 00 18 */	bne .L_8044BD28
/* 8044BD14 00448C54  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BD18 00448C58  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BD1C 00448C5C  38 80 01 E5 */	li r4, 0x1e5
/* 8044BD20 00448C60  4C C6 31 82 */	crclr 6
/* 8044BD24 00448C64  4B BD E9 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BD28:
/* 8044BD28 00448C68  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BD2C 00448C6C  38 80 00 00 */	li r4, 0
/* 8044BD30 00448C70  4B EE 81 6D */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BD34 00448C74  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044BD38 00448C78  40 82 00 18 */	bne .L_8044BD50
/* 8044BD3C 00448C7C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BD40 00448C80  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BD44 00448C84  38 80 01 E7 */	li r4, 0x1e7
/* 8044BD48 00448C88  4C C6 31 82 */	crclr 6
/* 8044BD4C 00448C8C  4B BD E8 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BD50:
/* 8044BD50 00448C90  7F 83 E3 78 */	mr r3, r28
/* 8044BD54 00448C94  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044BD58 00448C98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044BD5C 00448C9C  7D 89 03 A6 */	mtctr r12
/* 8044BD60 00448CA0  4E 80 04 21 */	bctrl 
/* 8044BD64 00448CA4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044BD68 00448CA8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8044BD6C 00448CAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8044BD70 00448CB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044BD74 00448CB4  7D 89 03 A6 */	mtctr r12
/* 8044BD78 00448CB8  4E 80 04 21 */	bctrl 
/* 8044BD7C 00448CBC  48 00 00 F0 */	b .L_8044BE6C
.L_8044BD80:
/* 8044BD80 00448CC0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BD84 00448CC4  38 9E 00 54 */	addi r4, r30, 0x74
/* 8044BD88 00448CC8  4B FD 78 4D */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044BD8C 00448CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BD90 00448CD0  41 82 00 DC */	beq .L_8044BE6C
/* 8044BD94 00448CD4  38 00 00 01 */	li r0, 1
/* 8044BD98 00448CD8  7F A4 EB 78 */	mr r4, r29
/* 8044BD9C 00448CDC  90 1E 00 48 */	stw r0, 0x68(r30)
/* 8044BDA0 00448CE0  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044BDA4 00448CE4  38 A0 00 03 */	li r5, 3
/* 8044BDA8 00448CE8  4B F9 EA 15 */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044BDAC 00448CEC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BDB0 00448CF0  28 00 00 00 */	cmplwi r0, 0
/* 8044BDB4 00448CF4  40 82 00 18 */	bne .L_8044BDCC
/* 8044BDB8 00448CF8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BDBC 00448CFC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BDC0 00448D00  38 80 01 D3 */	li r4, 0x1d3
/* 8044BDC4 00448D04  4C C6 31 82 */	crclr 6
/* 8044BDC8 00448D08  4B BD E8 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BDCC:
/* 8044BDCC 00448D0C  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BDD0 00448D10  28 1C 00 00 */	cmplwi r28, 0
/* 8044BDD4 00448D14  40 82 00 18 */	bne .L_8044BDEC
/* 8044BDD8 00448D18  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BDDC 00448D1C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BDE0 00448D20  38 80 01 DC */	li r4, 0x1dc
/* 8044BDE4 00448D24  4C C6 31 82 */	crclr 6
/* 8044BDE8 00448D28  4B BD E8 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BDEC:
/* 8044BDEC 00448D2C  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BDF0 00448D30  28 00 00 00 */	cmplwi r0, 0
/* 8044BDF4 00448D34  40 82 00 18 */	bne .L_8044BE0C
/* 8044BDF8 00448D38  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BDFC 00448D3C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BE00 00448D40  38 80 00 C7 */	li r4, 0xc7
/* 8044BE04 00448D44  4C C6 31 82 */	crclr 6
/* 8044BE08 00448D48  4B BD E8 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BE0C:
/* 8044BE0C 00448D4C  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BE10 00448D50  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BE14 00448D54  28 1C 00 00 */	cmplwi r28, 0
/* 8044BE18 00448D58  40 82 00 18 */	bne .L_8044BE30
/* 8044BE1C 00448D5C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BE20 00448D60  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BE24 00448D64  38 80 01 E5 */	li r4, 0x1e5
/* 8044BE28 00448D68  4C C6 31 82 */	crclr 6
/* 8044BE2C 00448D6C  4B BD E8 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BE30:
/* 8044BE30 00448D70  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BE34 00448D74  38 80 00 00 */	li r4, 0
/* 8044BE38 00448D78  4B EE 80 65 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BE3C 00448D7C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044BE40 00448D80  40 82 00 18 */	bne .L_8044BE58
/* 8044BE44 00448D84  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BE48 00448D88  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BE4C 00448D8C  38 80 01 E7 */	li r4, 0x1e7
/* 8044BE50 00448D90  4C C6 31 82 */	crclr 6
/* 8044BE54 00448D94  4B BD E7 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BE58:
/* 8044BE58 00448D98  7F A3 EB 78 */	mr r3, r29
/* 8044BE5C 00448D9C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044BE60 00448DA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044BE64 00448DA4  7D 89 03 A6 */	mtctr r12
/* 8044BE68 00448DA8  4E 80 04 21 */	bctrl 
.L_8044BE6C:
/* 8044BE6C 00448DAC  7F C3 F3 78 */	mr r3, r30
/* 8044BE70 00448DB0  4B D1 91 39 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 8044BE74 00448DB4  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044BE78 00448DB8  4B F6 D7 39 */	bl update__14TParticle2dMgrFv
/* 8044BE7C 00448DBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044BE80 00448DC0  88 7E 00 34 */	lbz r3, 0x34(r30)
/* 8044BE84 00448DC4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044BE88 00448DC8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044BE8C 00448DCC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044BE90 00448DD0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8044BE94 00448DD4  7C 08 03 A6 */	mtlr r0
/* 8044BE98 00448DD8  38 21 00 20 */	addi r1, r1, 0x20
/* 8044BE9C 00448DDC  4E 80 00 20 */	blr 
.endfn doUpdate__Q25Title7SectionFv
.else
.fn doUpdate__Q25Title7SectionFv, global
/* 8044B8E8 00448828  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044B8EC 0044882C  7C 08 02 A6 */	mflr r0
/* 8044B8F0 00448830  3C A0 80 4A */	lis r5, lbl_8049B100@ha
/* 8044B8F4 00448834  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044B8F8 00448838  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044B8FC 0044883C  3B E5 B1 00 */	addi r31, r5, lbl_8049B100@l
/* 8044B900 00448840  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044B904 00448844  7C 7E 1B 78 */	mr r30, r3
/* 8044B908 00448848  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044B90C 0044884C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8044B910 00448850  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044B914 00448854  80 64 00 5C */	lwz r3, 0x5c(r4)
/* 8044B918 00448858  81 83 00 00 */	lwz r12, 0(r3)
/* 8044B91C 0044885C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8044B920 00448860  7D 89 03 A6 */	mtctr r12
/* 8044B924 00448864  4E 80 04 21 */	bctrl 
/* 8044B928 00448868  80 1E 00 48 */	lwz r0, 0x48(r30)
/* 8044B92C 0044886C  2C 00 00 03 */	cmpwi r0, 3
/* 8044B930 00448870  41 82 02 74 */	beq .L_8044BBA4
/* 8044B934 00448874  40 80 00 1C */	bge .L_8044B950
/* 8044B938 00448878  2C 00 00 01 */	cmpwi r0, 1
/* 8044B93C 0044887C  41 82 00 40 */	beq .L_8044B97C
/* 8044B940 00448880  40 80 00 48 */	bge .L_8044B988
/* 8044B944 00448884  2C 00 00 00 */	cmpwi r0, 0
/* 8044B948 00448888  40 80 00 18 */	bge .L_8044B960
/* 8044B94C 0044888C  48 00 05 20 */	b .L_8044BE6C
.L_8044B950:
/* 8044B950 00448890  2C 00 00 05 */	cmpwi r0, 5
/* 8044B954 00448894  41 82 04 2C */	beq .L_8044BD80
/* 8044B958 00448898  40 80 05 14 */	bge .L_8044BE6C
/* 8044B95C 0044889C  48 00 02 54 */	b .L_8044BBB0
.L_8044B960:
/* 8044B960 004488A0  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044B964 004488A4  4B F9 ED 99 */	bl start__Q23ebi13TMainTitleMgrFv
/* 8044B968 004488A8  38 00 00 01 */	li r0, 1
/* 8044B96C 004488AC  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044B970 004488B0  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8044B974 004488B4  4B F9 F0 5D */	bl update__Q23ebi13TMainTitleMgrFv
/* 8044B978 004488B8  48 00 04 F4 */	b .L_8044BE6C
.L_8044B97C:
/* 8044B97C 004488BC  7F C3 F3 78 */	mr r3, r30
/* 8044B980 004488C0  4B FF F3 11 */	bl doUpdateMainTitle__Q25Title7SectionFv
/* 8044B984 004488C4  48 00 04 E8 */	b .L_8044BE6C
.L_8044B988:
/* 8044B988 004488C8  7F C3 F3 78 */	mr r3, r30
/* 8044B98C 004488CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 8044B990 004488D0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8044B994 004488D4  7D 89 03 A6 */	mtctr r12
/* 8044B998 004488D8  4E 80 04 21 */	bctrl 
/* 8044B99C 004488DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044B9A0 004488E0  41 82 04 CC */	beq .L_8044BE6C
/* 8044B9A4 004488E4  38 7E 17 30 */	addi r3, r30, 0x1730
/* 8044B9A8 004488E8  4B F8 48 CD */	bl update__Q33ebi6Option4TMgrFv
/* 8044B9AC 004488EC  88 1E 26 50 */	lbz r0, 0x2650(r30)
/* 8044B9B0 004488F0  28 00 00 00 */	cmplwi r0, 0
/* 8044B9B4 004488F4  41 82 01 04 */	beq .L_8044BAB8
/* 8044B9B8 004488F8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B9BC 004488FC  28 00 00 00 */	cmplwi r0, 0
/* 8044B9C0 00448900  40 82 00 18 */	bne .L_8044B9D8
/* 8044B9C4 00448904  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B9C8 00448908  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B9CC 0044890C  38 80 01 D3 */	li r4, 0x1d3
/* 8044B9D0 00448910  4C C6 31 82 */	crclr 6
/* 8044B9D4 00448914  4B BD EC 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B9D8:
/* 8044B9D8 00448918  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044B9DC 0044891C  28 1D 00 00 */	cmplwi r29, 0
/* 8044B9E0 00448920  40 82 00 18 */	bne .L_8044B9F8
/* 8044B9E4 00448924  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044B9E8 00448928  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044B9EC 0044892C  38 80 01 DC */	li r4, 0x1dc
/* 8044B9F0 00448930  4C C6 31 82 */	crclr 6
/* 8044B9F4 00448934  4B BD EC 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044B9F8:
/* 8044B9F8 00448938  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044B9FC 0044893C  28 00 00 00 */	cmplwi r0, 0
/* 8044BA00 00448940  40 82 00 18 */	bne .L_8044BA18
/* 8044BA04 00448944  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BA08 00448948  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BA0C 0044894C  38 80 00 C7 */	li r4, 0xc7
/* 8044BA10 00448950  4C C6 31 82 */	crclr 6
/* 8044BA14 00448954  4B BD EC 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BA18:
/* 8044BA18 00448958  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044BA1C 0044895C  83 A3 00 04 */	lwz r29, 4(r3)
/* 8044BA20 00448960  28 1D 00 00 */	cmplwi r29, 0
/* 8044BA24 00448964  40 82 00 18 */	bne .L_8044BA3C
/* 8044BA28 00448968  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BA2C 0044896C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BA30 00448970  38 80 01 E5 */	li r4, 0x1e5
/* 8044BA34 00448974  4C C6 31 82 */	crclr 6
/* 8044BA38 00448978  4B BD EC 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BA3C:
/* 8044BA3C 0044897C  38 7D 00 10 */	addi r3, r29, 0x10
/* 8044BA40 00448980  38 80 00 01 */	li r4, 1
/* 8044BA44 00448984  4B EE 84 59 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BA48 00448988  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044BA4C 0044898C  40 82 00 18 */	bne .L_8044BA64
/* 8044BA50 00448990  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BA54 00448994  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BA58 00448998  38 80 01 E7 */	li r4, 0x1e7
/* 8044BA5C 0044899C  4C C6 31 82 */	crclr 6
/* 8044BA60 004489A0  4B BD EB E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BA64:
/* 8044BA64 004489A4  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 8044BA68 004489A8  7F A3 EB 78 */	mr r3, r29
/* 8044BA6C 004489AC  C0 42 16 98 */	lfs f2, kFadeTime__Q23ebi8E2DFader@sda21(r2)
/* 8044BA70 004489B0  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 8044BA74 004489B4  C0 02 27 20 */	lfs f0, lbl_80520A80@sda21(r2)
/* 8044BA78 004489B8  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044BA7C 004489BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8044BA80 004489C0  4C 41 13 82 */	cror 2, 1, 2
/* 8044BA84 004489C4  40 82 00 10 */	bne .L_8044BA94
/* 8044BA88 004489C8  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044BA8C 004489CC  EC 00 08 2A */	fadds f0, f0, f1
/* 8044BA90 004489D0  48 00 00 0C */	b .L_8044BA9C
.L_8044BA94:
/* 8044BA94 004489D4  C0 02 27 38 */	lfs f0, lbl_80520A98@sda21(r2)
/* 8044BA98 004489D8  EC 01 00 28 */	fsubs f0, f1, f0
.L_8044BA9C:
/* 8044BA9C 004489DC  FC 00 00 1E */	fctiwz f0, f0
/* 8044BAA0 004489E0  81 83 00 10 */	lwz r12, 0x10(r3)
/* 8044BAA4 004489E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044BAA8 004489E8  D8 01 00 08 */	stfd f0, 8(r1)
/* 8044BAAC 004489EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8044BAB0 004489F0  7D 89 03 A6 */	mtctr r12
/* 8044BAB4 004489F4  4E 80 04 21 */	bctrl 
.L_8044BAB8:
/* 8044BAB8 004489F8  38 7E 17 30 */	addi r3, r30, 0x1730
/* 8044BABC 004489FC  4B F8 47 15 */	bl isFinish__Q33ebi6Option4TMgrFv
/* 8044BAC0 00448A00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BAC4 00448A04  41 82 03 A8 */	beq .L_8044BE6C
/* 8044BAC8 00448A08  38 00 00 01 */	li r0, 1
/* 8044BACC 00448A0C  7F 84 E3 78 */	mr r4, r28
/* 8044BAD0 00448A10  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8044BAD4 00448A14  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044BAD8 00448A18  38 A0 00 03 */	li r5, 3
/* 8044BADC 00448A1C  4B F9 EC E1 */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044BAE0 00448A20  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BAE4 00448A24  28 00 00 00 */	cmplwi r0, 0
/* 8044BAE8 00448A28  40 82 00 18 */	bne .L_8044BB00
/* 8044BAEC 00448A2C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BAF0 00448A30  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BAF4 00448A34  38 80 01 D3 */	li r4, 0x1d3
/* 8044BAF8 00448A38  4C C6 31 82 */	crclr 6
/* 8044BAFC 00448A3C  4B BD EB 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB00:
/* 8044BB00 00448A40  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BB04 00448A44  28 1C 00 00 */	cmplwi r28, 0
/* 8044BB08 00448A48  40 82 00 18 */	bne .L_8044BB20
/* 8044BB0C 00448A4C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BB10 00448A50  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB14 00448A54  38 80 01 DC */	li r4, 0x1dc
/* 8044BB18 00448A58  4C C6 31 82 */	crclr 6
/* 8044BB1C 00448A5C  4B BD EB 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB20:
/* 8044BB20 00448A60  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BB24 00448A64  28 00 00 00 */	cmplwi r0, 0
/* 8044BB28 00448A68  40 82 00 18 */	bne .L_8044BB40
/* 8044BB2C 00448A6C  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BB30 00448A70  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB34 00448A74  38 80 00 C7 */	li r4, 0xc7
/* 8044BB38 00448A78  4C C6 31 82 */	crclr 6
/* 8044BB3C 00448A7C  4B BD EB 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB40:
/* 8044BB40 00448A80  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BB44 00448A84  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BB48 00448A88  28 1C 00 00 */	cmplwi r28, 0
/* 8044BB4C 00448A8C  40 82 00 18 */	bne .L_8044BB64
/* 8044BB50 00448A90  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BB54 00448A94  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB58 00448A98  38 80 01 E5 */	li r4, 0x1e5
/* 8044BB5C 00448A9C  4C C6 31 82 */	crclr 6
/* 8044BB60 00448AA0  4B BD EA E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB64:
/* 8044BB64 00448AA4  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BB68 00448AA8  38 80 00 00 */	li r4, 0
/* 8044BB6C 00448AAC  4B EE 83 31 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BB70 00448AB0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044BB74 00448AB4  40 82 00 18 */	bne .L_8044BB8C
/* 8044BB78 00448AB8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BB7C 00448ABC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BB80 00448AC0  38 80 01 E7 */	li r4, 0x1e7
/* 8044BB84 00448AC4  4C C6 31 82 */	crclr 6
/* 8044BB88 00448AC8  4B BD EA B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BB8C:
/* 8044BB8C 00448ACC  7F 83 E3 78 */	mr r3, r28
/* 8044BB90 00448AD0  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044BB94 00448AD4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044BB98 00448AD8  7D 89 03 A6 */	mtctr r12
/* 8044BB9C 00448ADC  4E 80 04 21 */	bctrl 
/* 8044BBA0 00448AE0  48 00 02 CC */	b .L_8044BE6C
.L_8044BBA4:
/* 8044BBA4 00448AE4  7F C3 F3 78 */	mr r3, r30
/* 8044BBA8 00448AE8  4B FF F7 71 */	bl doUpdateOmake__Q25Title7SectionFv
/* 8044BBAC 00448AEC  48 00 02 C0 */	b .L_8044BE6C
.L_8044BBB0:
/* 8044BBB0 00448AF0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044BBB4 00448AF4  4B FB 04 79 */	bl update__Q26Screen9Game2DMgrFv
/* 8044BBB8 00448AF8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044BBBC 00448AFC  4B FB 44 5D */	bl isEndHighScore__Q26Screen9Game2DMgrFv
/* 8044BBC0 00448B00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BBC4 00448B04  41 82 02 A8 */	beq .L_8044BE6C
/* 8044BBC8 00448B08  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BBCC 00448B0C  28 00 00 00 */	cmplwi r0, 0
/* 8044BBD0 00448B10  40 82 00 18 */	bne .L_8044BBE8
/* 8044BBD4 00448B14  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BBD8 00448B18  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BBDC 00448B1C  38 80 01 D3 */	li r4, 0x1d3
/* 8044BBE0 00448B20  4C C6 31 82 */	crclr 6
/* 8044BBE4 00448B24  4B BD EA 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BBE8:
/* 8044BBE8 00448B28  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BBEC 00448B2C  28 1C 00 00 */	cmplwi r28, 0
/* 8044BBF0 00448B30  40 82 00 18 */	bne .L_8044BC08
/* 8044BBF4 00448B34  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BBF8 00448B38  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BBFC 00448B3C  38 80 01 DC */	li r4, 0x1dc
/* 8044BC00 00448B40  4C C6 31 82 */	crclr 6
/* 8044BC04 00448B44  4B BD EA 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC08:
/* 8044BC08 00448B48  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BC0C 00448B4C  28 00 00 00 */	cmplwi r0, 0
/* 8044BC10 00448B50  40 82 00 18 */	bne .L_8044BC28
/* 8044BC14 00448B54  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BC18 00448B58  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BC1C 00448B5C  38 80 00 C7 */	li r4, 0xc7
/* 8044BC20 00448B60  4C C6 31 82 */	crclr 6
/* 8044BC24 00448B64  4B BD EA 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC28:
/* 8044BC28 00448B68  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BC2C 00448B6C  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BC30 00448B70  28 1C 00 00 */	cmplwi r28, 0
/* 8044BC34 00448B74  40 82 00 18 */	bne .L_8044BC4C
/* 8044BC38 00448B78  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BC3C 00448B7C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BC40 00448B80  38 80 01 E5 */	li r4, 0x1e5
/* 8044BC44 00448B84  4C C6 31 82 */	crclr 6
/* 8044BC48 00448B88  4B BD E9 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC4C:
/* 8044BC4C 00448B8C  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BC50 00448B90  38 80 00 02 */	li r4, 2
/* 8044BC54 00448B94  4B EE 82 49 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BC58 00448B98  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044BC5C 00448B9C  40 82 00 18 */	bne .L_8044BC74
/* 8044BC60 00448BA0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BC64 00448BA4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BC68 00448BA8  38 80 01 E7 */	li r4, 0x1e7
/* 8044BC6C 00448BAC  4C C6 31 82 */	crclr 6
/* 8044BC70 00448BB0  4B BD E9 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BC74:
/* 8044BC74 00448BB4  7F 83 E3 78 */	mr r3, r28
/* 8044BC78 00448BB8  38 80 00 00 */	li r4, 0
/* 8044BC7C 00448BBC  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044BC80 00448BC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044BC84 00448BC4  7D 89 03 A6 */	mtctr r12
/* 8044BC88 00448BC8  4E 80 04 21 */	bctrl 
/* 8044BC8C 00448BCC  38 00 00 01 */	li r0, 1
/* 8044BC90 00448BD0  7F A4 EB 78 */	mr r4, r29
/* 8044BC94 00448BD4  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8044BC98 00448BD8  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044BC9C 00448BDC  38 A0 00 04 */	li r5, 4
/* 8044BCA0 00448BE0  4B F9 EB 1D */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044BCA4 00448BE4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BCA8 00448BE8  28 00 00 00 */	cmplwi r0, 0
/* 8044BCAC 00448BEC  40 82 00 18 */	bne .L_8044BCC4
/* 8044BCB0 00448BF0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BCB4 00448BF4  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BCB8 00448BF8  38 80 01 D3 */	li r4, 0x1d3
/* 8044BCBC 00448BFC  4C C6 31 82 */	crclr 6
/* 8044BCC0 00448C00  4B BD E9 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BCC4:
/* 8044BCC4 00448C04  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BCC8 00448C08  28 1C 00 00 */	cmplwi r28, 0
/* 8044BCCC 00448C0C  40 82 00 18 */	bne .L_8044BCE4
/* 8044BCD0 00448C10  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BCD4 00448C14  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BCD8 00448C18  38 80 01 DC */	li r4, 0x1dc
/* 8044BCDC 00448C1C  4C C6 31 82 */	crclr 6
/* 8044BCE0 00448C20  4B BD E9 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BCE4:
/* 8044BCE4 00448C24  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BCE8 00448C28  28 00 00 00 */	cmplwi r0, 0
/* 8044BCEC 00448C2C  40 82 00 18 */	bne .L_8044BD04
/* 8044BCF0 00448C30  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BCF4 00448C34  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BCF8 00448C38  38 80 00 C7 */	li r4, 0xc7
/* 8044BCFC 00448C3C  4C C6 31 82 */	crclr 6
/* 8044BD00 00448C40  4B BD E9 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BD04:
/* 8044BD04 00448C44  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BD08 00448C48  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BD0C 00448C4C  28 1C 00 00 */	cmplwi r28, 0
/* 8044BD10 00448C50  40 82 00 18 */	bne .L_8044BD28
/* 8044BD14 00448C54  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BD18 00448C58  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BD1C 00448C5C  38 80 01 E5 */	li r4, 0x1e5
/* 8044BD20 00448C60  4C C6 31 82 */	crclr 6
/* 8044BD24 00448C64  4B BD E9 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BD28:
/* 8044BD28 00448C68  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BD2C 00448C6C  38 80 00 00 */	li r4, 0
/* 8044BD30 00448C70  4B EE 81 6D */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BD34 00448C74  7C 7C 1B 79 */	or. r28, r3, r3
/* 8044BD38 00448C78  40 82 00 18 */	bne .L_8044BD50
/* 8044BD3C 00448C7C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BD40 00448C80  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BD44 00448C84  38 80 01 E7 */	li r4, 0x1e7
/* 8044BD48 00448C88  4C C6 31 82 */	crclr 6
/* 8044BD4C 00448C8C  4B BD E8 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BD50:
/* 8044BD50 00448C90  7F 83 E3 78 */	mr r3, r28
/* 8044BD54 00448C94  81 9C 00 10 */	lwz r12, 0x10(r28)
/* 8044BD58 00448C98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044BD5C 00448C9C  7D 89 03 A6 */	mtctr r12
/* 8044BD60 00448CA0  4E 80 04 21 */	bctrl 
/* 8044BD64 00448CA4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8044BD68 00448CA8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8044BD6C 00448CAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8044BD70 00448CB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8044BD74 00448CB4  7D 89 03 A6 */	mtctr r12
/* 8044BD78 00448CB8  4E 80 04 21 */	bctrl 
/* 8044BD7C 00448CBC  48 00 00 F0 */	b .L_8044BE6C
.L_8044BD80:
/* 8044BD80 00448CC0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BD84 00448CC4  38 9E 00 54 */	addi r4, r30, 0x54
/* 8044BD88 00448CC8  4B FD 78 4D */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044BD8C 00448CCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BD90 00448CD0  41 82 00 DC */	beq .L_8044BE6C
/* 8044BD94 00448CD4  38 00 00 01 */	li r0, 1
/* 8044BD98 00448CD8  7F A4 EB 78 */	mr r4, r29
/* 8044BD9C 00448CDC  90 1E 00 48 */	stw r0, 0x48(r30)
/* 8044BDA0 00448CE0  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044BDA4 00448CE4  38 A0 00 03 */	li r5, 3
/* 8044BDA8 00448CE8  4B F9 EA 15 */	bl startMenuSet__Q23ebi13TMainTitleMgrFll
/* 8044BDAC 00448CEC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BDB0 00448CF0  28 00 00 00 */	cmplwi r0, 0
/* 8044BDB4 00448CF4  40 82 00 18 */	bne .L_8044BDCC
/* 8044BDB8 00448CF8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BDBC 00448CFC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BDC0 00448D00  38 80 01 D3 */	li r4, 0x1d3
/* 8044BDC4 00448D04  4C C6 31 82 */	crclr 6
/* 8044BDC8 00448D08  4B BD E8 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BDCC:
/* 8044BDCC 00448D0C  83 8D 98 80 */	lwz r28, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BDD0 00448D10  28 1C 00 00 */	cmplwi r28, 0
/* 8044BDD4 00448D14  40 82 00 18 */	bne .L_8044BDEC
/* 8044BDD8 00448D18  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BDDC 00448D1C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BDE0 00448D20  38 80 01 DC */	li r4, 0x1dc
/* 8044BDE4 00448D24  4C C6 31 82 */	crclr 6
/* 8044BDE8 00448D28  4B BD E8 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BDEC:
/* 8044BDEC 00448D2C  80 1C 00 04 */	lwz r0, 4(r28)
/* 8044BDF0 00448D30  28 00 00 00 */	cmplwi r0, 0
/* 8044BDF4 00448D34  40 82 00 18 */	bne .L_8044BE0C
/* 8044BDF8 00448D38  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044BDFC 00448D3C  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BE00 00448D40  38 80 00 C7 */	li r4, 0xc7
/* 8044BE04 00448D44  4C C6 31 82 */	crclr 6
/* 8044BE08 00448D48  4B BD E8 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BE0C:
/* 8044BE0C 00448D4C  80 7C 00 04 */	lwz r3, 4(r28)
/* 8044BE10 00448D50  83 83 00 04 */	lwz r28, 4(r3)
/* 8044BE14 00448D54  28 1C 00 00 */	cmplwi r28, 0
/* 8044BE18 00448D58  40 82 00 18 */	bne .L_8044BE30
/* 8044BE1C 00448D5C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BE20 00448D60  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BE24 00448D64  38 80 01 E5 */	li r4, 0x1e5
/* 8044BE28 00448D68  4C C6 31 82 */	crclr 6
/* 8044BE2C 00448D6C  4B BD E8 15 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BE30:
/* 8044BE30 00448D70  38 7C 00 10 */	addi r3, r28, 0x10
/* 8044BE34 00448D74  38 80 00 00 */	li r4, 0
/* 8044BE38 00448D78  4B EE 80 65 */	bl getSeq__Q28PSSystem6SeqMgrFUl
/* 8044BE3C 00448D7C  7C 7D 1B 79 */	or. r29, r3, r3
/* 8044BE40 00448D80  40 82 00 18 */	bne .L_8044BE58
/* 8044BE44 00448D84  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044BE48 00448D88  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044BE4C 00448D8C  38 80 01 E7 */	li r4, 0x1e7
/* 8044BE50 00448D90  4C C6 31 82 */	crclr 6
/* 8044BE54 00448D94  4B BD E7 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BE58:
/* 8044BE58 00448D98  7F A3 EB 78 */	mr r3, r29
/* 8044BE5C 00448D9C  81 9D 00 10 */	lwz r12, 0x10(r29)
/* 8044BE60 00448DA0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044BE64 00448DA4  7D 89 03 A6 */	mtctr r12
/* 8044BE68 00448DA8  4E 80 04 21 */	bctrl 
.L_8044BE6C:
/* 8044BE6C 00448DAC  7F C3 F3 78 */	mr r3, r30
/* 8044BE70 00448DB0  4B D1 91 39 */	bl doUpdate__Q24Game14BaseHIOSectionFv
/* 8044BE74 00448DB4  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044BE78 00448DB8  4B F6 D7 39 */	bl update__14TParticle2dMgrFv
/* 8044BE7C 00448DBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044BE80 00448DC0  88 7E 00 34 */	lbz r3, 0x34(r30)
/* 8044BE84 00448DC4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044BE88 00448DC8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044BE8C 00448DCC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044BE90 00448DD0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8044BE94 00448DD4  7C 08 03 A6 */	mtlr r0
/* 8044BE98 00448DD8  38 21 00 20 */	addi r1, r1, 0x20
/* 8044BE9C 00448DDC  4E 80 00 20 */	blr 
.endfn doUpdate__Q25Title7SectionFv
.endif

.if version == 0
.fn isFinishable__Q25Title7SectionFv, global
/* 8044BEA0 00448DE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044BEA4 00448DE4  7C 08 02 A6 */	mflr r0
/* 8044BEA8 00448DE8  38 80 00 00 */	li r4, 0
/* 8044BEAC 00448DEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044BEB0 00448DF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044BEB4 00448DF4  7C 7F 1B 78 */	mr r31, r3
/* 8044BEB8 00448DF8  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 8044BEBC 00448DFC  48 00 9D ED */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 8044BEC0 00448E00  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BEC4 00448E04  38 9F 00 54 */	addi r4, r31, 0x74
/* 8044BEC8 00448E08  4B FD 77 0D */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044BECC 00448E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044BED0 00448E10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044BED4 00448E14  7C 08 03 A6 */	mtlr r0
/* 8044BED8 00448E18  38 21 00 10 */	addi r1, r1, 0x10
/* 8044BEDC 00448E1C  4E 80 00 20 */	blr 
.endfn isFinishable__Q25Title7SectionFv
.else
.fn isFinishable__Q25Title7SectionFv, global
/* 8044BEA0 00448DE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044BEA4 00448DE4  7C 08 02 A6 */	mflr r0
/* 8044BEA8 00448DE8  38 80 00 00 */	li r4, 0
/* 8044BEAC 00448DEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044BEB0 00448DF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044BEB4 00448DF4  7C 7F 1B 78 */	mr r31, r3
/* 8044BEB8 00448DF8  80 6D 9C 80 */	lwz r3, gPikmin2AramMgr@sda21(r13)
/* 8044BEBC 00448DFC  48 00 9D ED */	bl setLoadPermission__Q211Pikmin2ARAM3MgrFb
/* 8044BEC0 00448E00  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BEC4 00448E04  38 9F 00 54 */	addi r4, r31, 0x54
/* 8044BEC8 00448E08  4B FD 77 0D */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044BECC 00448E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044BED0 00448E10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044BED4 00448E14  7C 08 03 A6 */	mtlr r0
/* 8044BED8 00448E18  38 21 00 10 */	addi r1, r1, 0x10
/* 8044BEDC 00448E1C  4E 80 00 20 */	blr 
.endfn isFinishable__Q25Title7SectionFv
.endif

.if version == 0
.fn doLoadingStart__Q25Title7SectionFv, global
/* 8044BEE0 00448E20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044BEE4 00448E24  7C 08 02 A6 */	mflr r0
/* 8044BEE8 00448E28  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044BEEC 00448E2C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044BEF0 00448E30  7C 7F 1B 78 */	mr r31, r3
/* 8044BEF4 00448E34  38 60 00 14 */	li r3, 0x14
/* 8044BEF8 00448E38  4B BD 7F AD */	bl __nw__FUl
/* 8044BEFC 00448E3C  7C 65 1B 79 */	or. r5, r3, r3
/* 8044BF00 00448E40  41 82 00 4C */	beq .L_8044BF4C
/* 8044BF04 00448E44  3C 60 80 4F */	lis r3, lbl_804ED1F4@ha
/* 8044BF08 00448E48  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 8044BF0C 00448E4C  39 03 D1 F4 */	addi r8, r3, lbl_804ED1F4@l
/* 8044BF10 00448E50  3C 60 80 4F */	lis r3, "__vt__26Delegate<Q25Title7Section>"@ha
/* 8044BF14 00448E54  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044BF18 00448E58  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 8044BF1C 00448E5C  80 C8 00 04 */	lwz r6, 4(r8)
/* 8044BF20 00448E60  38 03 D2 AC */	addi r0, r3, "__vt__26Delegate<Q25Title7Section>"@l
/* 8044BF24 00448E64  80 68 00 08 */	lwz r3, 8(r8)
/* 8044BF28 00448E68  90 E1 00 08 */	stw r7, 8(r1)
/* 8044BF2C 00448E6C  90 85 00 00 */	stw r4, 0(r5)
/* 8044BF30 00448E70  90 05 00 00 */	stw r0, 0(r5)
/* 8044BF34 00448E74  93 E5 00 04 */	stw r31, 4(r5)
/* 8044BF38 00448E78  90 E5 00 08 */	stw r7, 8(r5)
/* 8044BF3C 00448E7C  90 C5 00 0C */	stw r6, 0xc(r5)
/* 8044BF40 00448E80  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8044BF44 00448E84  90 61 00 10 */	stw r3, 0x10(r1)
/* 8044BF48 00448E88  90 65 00 10 */	stw r3, 0x10(r5)
.L_8044BF4C:
/* 8044BF4C 00448E8C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BF50 00448E90  38 9F 00 54 */	addi r4, r31, 0x74
/* 8044BF54 00448E94  4B FD 6F E5 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8044BF58 00448E98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044BF5C 00448E9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044BF60 00448EA0  7C 08 03 A6 */	mtlr r0
/* 8044BF64 00448EA4  38 21 00 20 */	addi r1, r1, 0x20
/* 8044BF68 00448EA8  4E 80 00 20 */	blr 
.endfn doLoadingStart__Q25Title7SectionFv
.else
.fn doLoadingStart__Q25Title7SectionFv, global
/* 8044BEE0 00448E20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044BEE4 00448E24  7C 08 02 A6 */	mflr r0
/* 8044BEE8 00448E28  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044BEEC 00448E2C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044BEF0 00448E30  7C 7F 1B 78 */	mr r31, r3
/* 8044BEF4 00448E34  38 60 00 14 */	li r3, 0x14
/* 8044BEF8 00448E38  4B BD 7F AD */	bl __nw__FUl
/* 8044BEFC 00448E3C  7C 65 1B 79 */	or. r5, r3, r3
/* 8044BF00 00448E40  41 82 00 4C */	beq .L_8044BF4C
/* 8044BF04 00448E44  3C 60 80 4F */	lis r3, lbl_804ED1F4@ha
/* 8044BF08 00448E48  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 8044BF0C 00448E4C  39 03 D1 F4 */	addi r8, r3, lbl_804ED1F4@l
/* 8044BF10 00448E50  3C 60 80 4F */	lis r3, "__vt__26Delegate<Q25Title7Section>"@ha
/* 8044BF14 00448E54  80 E8 00 00 */	lwz r7, 0(r8)
/* 8044BF18 00448E58  38 84 0F 00 */	addi r4, r4, __vt__9IDelegate@l
/* 8044BF1C 00448E5C  80 C8 00 04 */	lwz r6, 4(r8)
/* 8044BF20 00448E60  38 03 D2 AC */	addi r0, r3, "__vt__26Delegate<Q25Title7Section>"@l
/* 8044BF24 00448E64  80 68 00 08 */	lwz r3, 8(r8)
/* 8044BF28 00448E68  90 E1 00 08 */	stw r7, 8(r1)
/* 8044BF2C 00448E6C  90 85 00 00 */	stw r4, 0(r5)
/* 8044BF30 00448E70  90 05 00 00 */	stw r0, 0(r5)
/* 8044BF34 00448E74  93 E5 00 04 */	stw r31, 4(r5)
/* 8044BF38 00448E78  90 E5 00 08 */	stw r7, 8(r5)
/* 8044BF3C 00448E7C  90 C5 00 0C */	stw r6, 0xc(r5)
/* 8044BF40 00448E80  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8044BF44 00448E84  90 61 00 10 */	stw r3, 0x10(r1)
/* 8044BF48 00448E88  90 65 00 10 */	stw r3, 0x10(r5)
.L_8044BF4C:
/* 8044BF4C 00448E8C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BF50 00448E90  38 9F 00 54 */	addi r4, r31, 0x54
/* 8044BF54 00448E94  4B FD 6F E5 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8044BF58 00448E98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044BF5C 00448E9C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044BF60 00448EA0  7C 08 03 A6 */	mtlr r0
/* 8044BF64 00448EA4  38 21 00 20 */	addi r1, r1, 0x20
/* 8044BF68 00448EA8  4E 80 00 20 */	blr 
.endfn doLoadingStart__Q25Title7SectionFv
.endif

.if version == 0
.fn doLoading__Q25Title7SectionFv, global
/* 8044BF6C 00448EAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044BF70 00448EB0  7C 08 02 A6 */	mflr r0
/* 8044BF74 00448EB4  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044BF78 00448EB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044BF7C 00448EBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044BF80 00448EC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044BF84 00448EC4  3B C4 B1 00 */	addi r30, r4, lbl_8049B100@l
/* 8044BF88 00448EC8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044BF8C 00448ECC  7C 7D 1B 78 */	mr r29, r3
/* 8044BF90 00448ED0  38 9D 00 54 */	addi r4, r29, 0x74
/* 8044BF94 00448ED4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BF98 00448ED8  4B FD 76 3D */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044BF9C 00448EDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BFA0 00448EE0  7C 7F 1B 78 */	mr r31, r3
/* 8044BFA4 00448EE4  41 82 00 8C */	beq .L_8044C030
/* 8044BFA8 00448EE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BFAC 00448EEC  38 9D 00 54 */	addi r4, r29, 0x74
/* 8044BFB0 00448EF0  80 BD 00 C0 */	lwz r5, 0xe0(r29)
/* 8044BFB4 00448EF4  4B FD 6F 85 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8044BFB8 00448EF8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BFBC 00448EFC  28 00 00 00 */	cmplwi r0, 0
/* 8044BFC0 00448F00  40 82 00 18 */	bne .L_8044BFD8
/* 8044BFC4 00448F04  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8044BFC8 00448F08  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044BFCC 00448F0C  38 80 01 D3 */	li r4, 0x1d3
/* 8044BFD0 00448F10  4C C6 31 82 */	crclr 6
/* 8044BFD4 00448F14  4B BD E6 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BFD8:
/* 8044BFD8 00448F18  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BFDC 00448F1C  28 1D 00 00 */	cmplwi r29, 0
/* 8044BFE0 00448F20  40 82 00 18 */	bne .L_8044BFF8
/* 8044BFE4 00448F24  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8044BFE8 00448F28  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044BFEC 00448F2C  38 80 01 DC */	li r4, 0x1dc
/* 8044BFF0 00448F30  4C C6 31 82 */	crclr 6
/* 8044BFF4 00448F34  4B BD E6 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BFF8:
/* 8044BFF8 00448F38  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044BFFC 00448F3C  28 00 00 00 */	cmplwi r0, 0
/* 8044C000 00448F40  40 82 00 18 */	bne .L_8044C018
/* 8044C004 00448F44  38 7E 01 54 */	addi r3, r30, 0x154
/* 8044C008 00448F48  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044C00C 00448F4C  38 80 00 C7 */	li r4, 0xc7
/* 8044C010 00448F50  4C C6 31 82 */	crclr 6
/* 8044C014 00448F54  4B BD E6 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C018:
/* 8044C018 00448F58  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044C01C 00448F5C  80 63 00 04 */	lwz r3, 4(r3)
/* 8044C020 00448F60  81 83 00 00 */	lwz r12, 0(r3)
/* 8044C024 00448F64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8044C028 00448F68  7D 89 03 A6 */	mtctr r12
/* 8044C02C 00448F6C  4E 80 04 21 */	bctrl 
.L_8044C030:
/* 8044C030 00448F70  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8044C034 00448F74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044C038 00448F78  7C 00 00 34 */	cntlzw r0, r0
/* 8044C03C 00448F7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044C040 00448F80  54 03 D9 7E */	srwi r3, r0, 5
/* 8044C044 00448F84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044C048 00448F88  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044C04C 00448F8C  7C 08 03 A6 */	mtlr r0
/* 8044C050 00448F90  38 21 00 20 */	addi r1, r1, 0x20
/* 8044C054 00448F94  4E 80 00 20 */	blr 
.endfn doLoading__Q25Title7SectionFv
.else
.fn doLoading__Q25Title7SectionFv, global
/* 8044BF6C 00448EAC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044BF70 00448EB0  7C 08 02 A6 */	mflr r0
/* 8044BF74 00448EB4  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044BF78 00448EB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044BF7C 00448EBC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044BF80 00448EC0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044BF84 00448EC4  3B C4 B1 00 */	addi r30, r4, lbl_8049B100@l
/* 8044BF88 00448EC8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044BF8C 00448ECC  7C 7D 1B 78 */	mr r29, r3
/* 8044BF90 00448ED0  38 9D 00 54 */	addi r4, r29, 0x54
/* 8044BF94 00448ED4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BF98 00448ED8  4B FD 76 3D */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 8044BF9C 00448EDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8044BFA0 00448EE0  7C 7F 1B 78 */	mr r31, r3
/* 8044BFA4 00448EE4  41 82 00 8C */	beq .L_8044C030
/* 8044BFA8 00448EE8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044BFAC 00448EEC  38 9D 00 54 */	addi r4, r29, 0x54
/* 8044BFB0 00448EF0  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 8044BFB4 00448EF4  4B FD 6F 85 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 8044BFB8 00448EF8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BFBC 00448EFC  28 00 00 00 */	cmplwi r0, 0
/* 8044BFC0 00448F00  40 82 00 18 */	bne .L_8044BFD8
/* 8044BFC4 00448F04  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8044BFC8 00448F08  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044BFCC 00448F0C  38 80 01 D3 */	li r4, 0x1d3
/* 8044BFD0 00448F10  4C C6 31 82 */	crclr 6
/* 8044BFD4 00448F14  4B BD E6 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BFD8:
/* 8044BFD8 00448F18  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044BFDC 00448F1C  28 1D 00 00 */	cmplwi r29, 0
/* 8044BFE0 00448F20  40 82 00 18 */	bne .L_8044BFF8
/* 8044BFE4 00448F24  38 7E 00 1C */	addi r3, r30, 0x1c
/* 8044BFE8 00448F28  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044BFEC 00448F2C  38 80 01 DC */	li r4, 0x1dc
/* 8044BFF0 00448F30  4C C6 31 82 */	crclr 6
/* 8044BFF4 00448F34  4B BD E6 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044BFF8:
/* 8044BFF8 00448F38  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044BFFC 00448F3C  28 00 00 00 */	cmplwi r0, 0
/* 8044C000 00448F40  40 82 00 18 */	bne .L_8044C018
/* 8044C004 00448F44  38 7E 01 54 */	addi r3, r30, 0x154
/* 8044C008 00448F48  38 BE 00 28 */	addi r5, r30, 0x28
/* 8044C00C 00448F4C  38 80 00 C7 */	li r4, 0xc7
/* 8044C010 00448F50  4C C6 31 82 */	crclr 6
/* 8044C014 00448F54  4B BD E6 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C018:
/* 8044C018 00448F58  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044C01C 00448F5C  80 63 00 04 */	lwz r3, 4(r3)
/* 8044C020 00448F60  81 83 00 00 */	lwz r12, 0(r3)
/* 8044C024 00448F64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8044C028 00448F68  7D 89 03 A6 */	mtctr r12
/* 8044C02C 00448F6C  4E 80 04 21 */	bctrl 
.L_8044C030:
/* 8044C030 00448F70  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 8044C034 00448F74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044C038 00448F78  7C 00 00 34 */	cntlzw r0, r0
/* 8044C03C 00448F7C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8044C040 00448F80  54 03 D9 7E */	srwi r3, r0, 5
/* 8044C044 00448F84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044C048 00448F88  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8044C04C 00448F8C  7C 08 03 A6 */	mtlr r0
/* 8044C050 00448F90  38 21 00 20 */	addi r1, r1, 0x20
/* 8044C054 00448F94  4E 80 00 20 */	blr 
.endfn doLoading__Q25Title7SectionFv
.endif

.if version == 0
.fn loadResource__Q25Title7SectionFv, global
/* 8044C058 00448F98  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8044C05C 00448F9C  7C 08 02 A6 */	mflr r0
/* 8044C060 00448FA0  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044C064 00448FA4  38 A0 00 00 */	li r5, 0
/* 8044C068 00448FA8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8044C06C 00448FAC  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8044C070 00448FB0  3B E4 B1 00 */	addi r31, r4, lbl_8049B100@l
/* 8044C074 00448FB4  38 9F 01 60 */	addi r4, r31, 0x160
/* 8044C078 00448FB8  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8044C07C 00448FBC  7C 7E 1B 78 */	mr r30, r3
/* 8044C080 00448FC0  93 A1 00 94 */	stw r29, 0x94(r1)
/* 8044C084 00448FC4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C088 00448FC8  4B FD 72 D5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C08C 00448FCC  7F C3 F3 78 */	mr r3, r30
/* 8044C090 00448FD0  4B D1 8F 15 */	bl createScreenRootNode__Q24Game14BaseHIOSectionFv
/* 8044C094 00448FD4  38 61 00 3C */	addi r3, r1, 0x3c
/* 8044C098 00448FD8  4B EE 94 19 */	bl __ct__Q26PSGame9SceneInfoFv
/* 8044C09C 00448FDC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C0A0 00448FE0  38 80 00 08 */	li r4, 8
/* 8044C0A4 00448FE4  38 60 00 00 */	li r3, 0
/* 8044C0A8 00448FE8  98 81 00 42 */	stb r4, 0x42(r1)
/* 8044C0AC 00448FEC  28 00 00 00 */	cmplwi r0, 0
/* 8044C0B0 00448FF0  98 61 00 43 */	stb r3, 0x43(r1)
/* 8044C0B4 00448FF4  40 82 00 18 */	bne .L_8044C0CC
/* 8044C0B8 00448FF8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044C0BC 00448FFC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044C0C0 00449000  38 80 01 D3 */	li r4, 0x1d3
/* 8044C0C4 00449004  4C C6 31 82 */	crclr 6
/* 8044C0C8 00449008  4B BD E5 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C0CC:
/* 8044C0CC 0044900C  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C0D0 00449010  38 81 00 3C */	addi r4, r1, 0x3c
/* 8044C0D4 00449014  81 83 00 00 */	lwz r12, 0(r3)
/* 8044C0D8 00449018  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8044C0DC 0044901C  7D 89 03 A6 */	mtctr r12
/* 8044C0E0 00449020  4E 80 04 21 */	bctrl 
/* 8044C0E4 00449024  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C0E8 00449028  28 00 00 00 */	cmplwi r0, 0
/* 8044C0EC 0044902C  40 82 00 18 */	bne .L_8044C104
/* 8044C0F0 00449030  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044C0F4 00449034  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044C0F8 00449038  38 80 01 D3 */	li r4, 0x1d3
/* 8044C0FC 0044903C  4C C6 31 82 */	crclr 6
/* 8044C100 00449040  4B BD E5 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C104:
/* 8044C104 00449044  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C108 00449048  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044C10C 0044904C  28 00 00 00 */	cmplwi r0, 0
/* 8044C110 00449050  40 82 00 18 */	bne .L_8044C128
/* 8044C114 00449054  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044C118 00449058  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044C11C 0044905C  38 80 00 C7 */	li r4, 0xc7
/* 8044C120 00449060  4C C6 31 82 */	crclr 6
/* 8044C124 00449064  4B BD E5 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C128:
/* 8044C128 00449068  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044C12C 0044906C  80 63 00 04 */	lwz r3, 4(r3)
/* 8044C130 00449070  81 83 00 00 */	lwz r12, 0(r3)
/* 8044C134 00449074  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044C138 00449078  7D 89 03 A6 */	mtctr r12
/* 8044C13C 0044907C  4E 80 04 21 */	bctrl 
/* 8044C140 00449080  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C144 00449084  38 9F 01 7C */	addi r4, r31, 0x17c
/* 8044C148 00449088  38 A0 00 00 */	li r5, 0
/* 8044C14C 0044908C  4B FD 72 11 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C150 00449090  4B F6 CF 99 */	bl globalInstance__14TParticle2dMgrFv
/* 8044C154 00449094  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044C158 00449098  3C 80 00 10 */	lis r4, 0x10
/* 8044C15C 0044909C  4B F6 D0 D1 */	bl createHeap__14TParticle2dMgrFUl
/* 8044C160 004490A0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044C164 004490A4  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8044C168 004490A8  38 A0 07 D0 */	li r5, 0x7d0
/* 8044C16C 004490AC  38 C0 00 80 */	li r6, 0x80
/* 8044C170 004490B0  38 E0 00 80 */	li r7, 0x80
/* 8044C174 004490B4  4B F6 D1 4D */	bl createMgr__14TParticle2dMgrFPcUlUlUl
/* 8044C178 004490B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C17C 004490BC  38 9F 01 7C */	addi r4, r31, 0x17c
/* 8044C180 004490C0  4B FD 71 E5 */	bl heapStatusEnd__6SystemFPc
/* 8044C184 004490C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C188 004490C8  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 8044C18C 004490CC  38 A0 00 00 */	li r5, 0
/* 8044C190 004490D0  4B FD 71 CD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C194 004490D4  88 0D 86 9F */	lbz r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C198 004490D8  7C 00 07 74 */	extsb r0, r0
/* 8044C19C 004490DC  2C 00 FF FF */	cmpwi r0, -1
/* 8044C1A0 004490E0  40 82 00 44 */	bne .L_8044C1E4
/* 8044C1A4 004490E4  4B C7 D3 FD */	bl rand
/* 8044C1A8 004490E8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8044C1AC 004490EC  3C 00 43 30 */	lis r0, 0x4330
/* 8044C1B0 004490F0  90 61 00 7C */	stw r3, 0x7c(r1)
/* 8044C1B4 004490F4  C8 62 27 30 */	lfd f3, lbl_80520A90@sda21(r2)
/* 8044C1B8 004490F8  90 01 00 78 */	stw r0, 0x78(r1)
/* 8044C1BC 004490FC  C0 22 27 40 */	lfs f1, lbl_80520AA0@sda21(r2)
/* 8044C1C0 00449100  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 8044C1C4 00449104  C0 02 27 44 */	lfs f0, lbl_80520AA4@sda21(r2)
/* 8044C1C8 00449108  EC 42 18 28 */	fsubs f2, f2, f3
/* 8044C1CC 0044910C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044C1D0 00449110  EC 00 00 72 */	fmuls f0, f0, f1
/* 8044C1D4 00449114  FC 00 00 1E */	fctiwz f0, f0
/* 8044C1D8 00449118  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 8044C1DC 0044911C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8044C1E0 00449120  48 00 00 08 */	b .L_8044C1E8
.L_8044C1E4:
/* 8044C1E4 00449124  38 00 00 0C */	li r0, 0xc
.L_8044C1E8:
/* 8044C1E8 00449128  28 00 00 0B */	cmplwi r0, 0xb
/* 8044C1EC 0044912C  41 81 00 AC */	bgt .L_8044C298
/* 8044C1F0 00449130  3C 60 80 4F */	lis r3, lbl_804ED200@ha
/* 8044C1F4 00449134  54 00 10 3A */	slwi r0, r0, 2
/* 8044C1F8 00449138  38 63 D2 00 */	addi r3, r3, lbl_804ED200@l
/* 8044C1FC 0044913C  7C 03 00 2E */	lwzx r0, r3, r0
/* 8044C200 00449140  7C 09 03 A6 */	mtctr r0
/* 8044C204 00449144  4E 80 04 20 */	bctr 
.L_8044C208:
/* 8044C208 00449148  38 00 00 03 */	li r0, 3
/* 8044C20C 0044914C  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C210 00449150  48 00 00 A8 */	b .L_8044C2B8
.L_8044C214:
/* 8044C214 00449154  38 00 00 03 */	li r0, 3
/* 8044C218 00449158  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C21C 0044915C  48 00 00 9C */	b .L_8044C2B8
.L_8044C220:
/* 8044C220 00449160  38 00 00 00 */	li r0, 0
/* 8044C224 00449164  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C228 00449168  48 00 00 90 */	b .L_8044C2B8
.L_8044C22C:
/* 8044C22C 0044916C  38 00 00 00 */	li r0, 0
/* 8044C230 00449170  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C234 00449174  48 00 00 84 */	b .L_8044C2B8
.L_8044C238:
/* 8044C238 00449178  38 00 00 00 */	li r0, 0
/* 8044C23C 0044917C  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C240 00449180  48 00 00 78 */	b .L_8044C2B8
.L_8044C244:
/* 8044C244 00449184  38 00 00 01 */	li r0, 1
/* 8044C248 00449188  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C24C 0044918C  48 00 00 6C */	b .L_8044C2B8
.L_8044C250:
/* 8044C250 00449190  38 00 00 01 */	li r0, 1
/* 8044C254 00449194  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C258 00449198  48 00 00 60 */	b .L_8044C2B8
.L_8044C25C:
/* 8044C25C 0044919C  38 00 00 01 */	li r0, 1
/* 8044C260 004491A0  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C264 004491A4  48 00 00 54 */	b .L_8044C2B8
.L_8044C268:
/* 8044C268 004491A8  38 00 00 02 */	li r0, 2
/* 8044C26C 004491AC  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C270 004491B0  48 00 00 48 */	b .L_8044C2B8
.L_8044C274:
/* 8044C274 004491B4  38 00 00 02 */	li r0, 2
/* 8044C278 004491B8  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C27C 004491BC  48 00 00 3C */	b .L_8044C2B8
.L_8044C280:
/* 8044C280 004491C0  38 00 00 02 */	li r0, 2
/* 8044C284 004491C4  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C288 004491C8  48 00 00 30 */	b .L_8044C2B8
.L_8044C28C:
/* 8044C28C 004491CC  38 00 00 03 */	li r0, 3
/* 8044C290 004491D0  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C294 004491D4  48 00 00 24 */	b .L_8044C2B8
.L_8044C298:
/* 8044C298 004491D8  88 6D 86 9F */	lbz r3, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C29C 004491DC  38 63 00 01 */	addi r3, r3, 1
/* 8044C2A0 004491E0  7C 60 07 74 */	extsb r0, r3
/* 8044C2A4 004491E4  98 6D 86 9F */	stb r3, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C2A8 004491E8  2C 00 00 03 */	cmpwi r0, 3
/* 8044C2AC 004491EC  40 81 00 0C */	ble .L_8044C2B8
/* 8044C2B0 004491F0  38 00 00 00 */	li r0, 0
/* 8044C2B4 004491F4  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
.L_8044C2B8:
/* 8044C2B8 004491F8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044C2BC 004491FC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044C2C0 00449200  80 03 02 28 */	lwz r0, 0x228(r3)
/* 8044C2C4 00449204  2C 00 00 00 */	cmpwi r0, 0
/* 8044C2C8 00449208  41 82 00 14 */	beq .L_8044C2DC
/* 8044C2CC 0044920C  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044C2D0 00449210  38 80 00 01 */	li r4, 1
/* 8044C2D4 00449214  4B F9 E2 51 */	bl setMode__Q23ebi13TMainTitleMgrFl
/* 8044C2D8 00449218  48 00 00 14 */	b .L_8044C2EC
.L_8044C2DC:
/* 8044C2DC 0044921C  88 8D 86 9F */	lbz r4, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C2E0 00449220  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044C2E4 00449224  7C 84 07 74 */	extsb r4, r4
/* 8044C2E8 00449228  4B F9 E2 3D */	bl setMode__Q23ebi13TMainTitleMgrFl
.L_8044C2EC:
/* 8044C2EC 0044922C  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044C2F0 00449230  4B F9 E2 9D */	bl loadResource__Q23ebi13TMainTitleMgrFv
/* 8044C2F4 00449234  80 9E 00 C4 */	lwz r4, 0xe4(r30)
/* 8044C2F8 00449238  38 7E 00 CC */	addi r3, r30, 0xec
/* 8044C2FC 0044923C  4B F9 E3 B5 */	bl setController__Q23ebi13TMainTitleMgrFP10Controller
/* 8044C300 00449240  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C304 00449244  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 8044C308 00449248  4B FD 70 5D */	bl heapStatusEnd__6SystemFPc
/* 8044C30C 0044924C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C310 00449250  38 9F 01 C0 */	addi r4, r31, 0x1c0
/* 8044C314 00449254  38 A0 00 00 */	li r5, 0
/* 8044C318 00449258  4B FD 70 45 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C31C 0044925C  38 7E 17 30 */	addi r3, r30, 0x1750
/* 8044C320 00449260  4B F8 3D A1 */	bl loadResource__Q33ebi6Option4TMgrFv
/* 8044C324 00449264  80 9E 00 C4 */	lwz r4, 0xe4(r30)
/* 8044C328 00449268  38 7E 17 30 */	addi r3, r30, 0x1750
/* 8044C32C 0044926C  4B F8 3E 1D */	bl setController__Q33ebi6Option4TMgrFP10Controller
/* 8044C330 00449270  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C334 00449274  38 9F 01 C0 */	addi r4, r31, 0x1c0
/* 8044C338 00449278  4B FD 70 2D */	bl heapStatusEnd__6SystemFPc
/* 8044C33C 0044927C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C340 00449280  38 9F 01 CC */	addi r4, r31, 0x1cc
/* 8044C344 00449284  38 A0 00 00 */	li r5, 0
/* 8044C348 00449288  4B FD 70 15 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C34C 0044928C  38 00 00 00 */	li r0, 0
/* 8044C350 00449290  38 9F 01 DC */	addi r4, r31, 0x1dc
/* 8044C354 00449294  90 1E 2F 40 */	stw r0, 0x2f60(r30)
/* 8044C358 00449298  38 61 00 08 */	addi r3, r1, 8
/* 8044C35C 0044929C  4B EC BB F1 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 8044C360 004492A0  38 61 00 08 */	addi r3, r1, 8
/* 8044C364 004492A4  38 80 00 01 */	li r4, 1
/* 8044C368 004492A8  38 A0 00 00 */	li r5, 0
/* 8044C36C 004492AC  38 C0 00 01 */	li r6, 1
/* 8044C370 004492B0  4B BC ED C1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044C374 004492B4  90 7E 2F 40 */	stw r3, 0x2f60(r30)
/* 8044C378 004492B8  80 1E 2F 40 */	lwz r0, 0x2f60(r30)
/* 8044C37C 004492BC  28 00 00 00 */	cmplwi r0, 0
/* 8044C380 004492C0  40 82 00 1C */	bne .L_8044C39C
/* 8044C384 004492C4  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044C388 004492C8  38 BF 01 F4 */	addi r5, r31, 0x1f4
/* 8044C38C 004492CC  38 C1 00 08 */	addi r6, r1, 8
/* 8044C390 004492D0  38 80 06 A4 */	li r4, 0x6aa
/* 8044C394 004492D4  4C C6 31 82 */	crclr 6
/* 8044C398 004492D8  4B BD E2 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C39C:
/* 8044C39C 004492DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3A0 004492E0  38 9F 01 CC */	addi r4, r31, 0x1cc
/* 8044C3A4 004492E4  4B FD 6F C1 */	bl heapStatusEnd__6SystemFPc
/* 8044C3A8 004492E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3AC 004492EC  38 9F 02 04 */	addi r4, r31, 0x204
/* 8044C3B0 004492F0  38 A0 00 00 */	li r5, 0
/* 8044C3B4 004492F4  4B FD 6F A9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C3B8 004492F8  38 7E 26 78 */	addi r3, r30, 0x2698
/* 8044C3BC 004492FC  4B FA 32 09 */	bl newCardEMgrAndTask__Q33ebi5Omake4TMgrFv
/* 8044C3C0 00449300  38 7E 26 78 */	addi r3, r30, 0x2698
/* 8044C3C4 00449304  4B FA 31 19 */	bl loadResource__Q33ebi5Omake4TMgrFv
/* 8044C3C8 00449308  83 BE 00 C4 */	lwz r29, 0xe4(r30)
/* 8044C3CC 0044930C  38 7E 26 80 */	addi r3, r30, 0x26a0
/* 8044C3D0 00449310  93 BE 26 78 */	stw r29, 0x2698(r30)
/* 8044C3D4 00449314  7F A4 EB 78 */	mr r4, r29
/* 8044C3D8 00449318  4B FA 25 79 */	bl setController__Q33ebi6Screen6TOmakeFP10Controller
/* 8044C3DC 0044931C  93 BE 2A EC */	stw r29, 0x2b0c(r30)
/* 8044C3E0 00449320  7F A4 EB 78 */	mr r4, r29
/* 8044C3E4 00449324  38 7E 2C 54 */	addi r3, r30, 0x2c74
/* 8044C3E8 00449328  4B FA 54 BD */	bl setController__Q33ebi6Screen10TOmakeGameFP10Controller
/* 8044C3EC 0044932C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3F0 00449330  38 9F 02 04 */	addi r4, r31, 0x204
/* 8044C3F4 00449334  4B FD 6F 71 */	bl heapStatusEnd__6SystemFPc
/* 8044C3F8 00449338  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3FC 0044933C  38 9F 01 60 */	addi r4, r31, 0x160
/* 8044C400 00449340  4B FD 6F 65 */	bl heapStatusEnd__6SystemFPc
/* 8044C404 00449344  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8044C408 00449348  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8044C40C 0044934C  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8044C410 00449350  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 8044C414 00449354  7C 08 03 A6 */	mtlr r0
/* 8044C418 00449358  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8044C41C 0044935C  4E 80 00 20 */	blr 
.endfn loadResource__Q25Title7SectionFv
.else
.fn loadResource__Q25Title7SectionFv, global
/* 8044C058 00448F98  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8044C05C 00448F9C  7C 08 02 A6 */	mflr r0
/* 8044C060 00448FA0  3C 80 80 4A */	lis r4, lbl_8049B100@ha
/* 8044C064 00448FA4  38 A0 00 00 */	li r5, 0
/* 8044C068 00448FA8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8044C06C 00448FAC  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 8044C070 00448FB0  3B E4 B1 00 */	addi r31, r4, lbl_8049B100@l
/* 8044C074 00448FB4  38 9F 01 60 */	addi r4, r31, 0x160
/* 8044C078 00448FB8  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8044C07C 00448FBC  7C 7E 1B 78 */	mr r30, r3
/* 8044C080 00448FC0  93 A1 00 94 */	stw r29, 0x94(r1)
/* 8044C084 00448FC4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C088 00448FC8  4B FD 72 D5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C08C 00448FCC  7F C3 F3 78 */	mr r3, r30
/* 8044C090 00448FD0  4B D1 8F 15 */	bl createScreenRootNode__Q24Game14BaseHIOSectionFv
/* 8044C094 00448FD4  38 61 00 3C */	addi r3, r1, 0x3c
/* 8044C098 00448FD8  4B EE 94 19 */	bl __ct__Q26PSGame9SceneInfoFv
/* 8044C09C 00448FDC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C0A0 00448FE0  38 80 00 08 */	li r4, 8
/* 8044C0A4 00448FE4  38 60 00 00 */	li r3, 0
/* 8044C0A8 00448FE8  98 81 00 42 */	stb r4, 0x42(r1)
/* 8044C0AC 00448FEC  28 00 00 00 */	cmplwi r0, 0
/* 8044C0B0 00448FF0  98 61 00 43 */	stb r3, 0x43(r1)
/* 8044C0B4 00448FF4  40 82 00 18 */	bne .L_8044C0CC
/* 8044C0B8 00448FF8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044C0BC 00448FFC  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044C0C0 00449000  38 80 01 D3 */	li r4, 0x1d3
/* 8044C0C4 00449004  4C C6 31 82 */	crclr 6
/* 8044C0C8 00449008  4B BD E5 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C0CC:
/* 8044C0CC 0044900C  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C0D0 00449010  38 81 00 3C */	addi r4, r1, 0x3c
/* 8044C0D4 00449014  81 83 00 00 */	lwz r12, 0(r3)
/* 8044C0D8 00449018  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8044C0DC 0044901C  7D 89 03 A6 */	mtctr r12
/* 8044C0E0 00449020  4E 80 04 21 */	bctrl 
/* 8044C0E4 00449024  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C0E8 00449028  28 00 00 00 */	cmplwi r0, 0
/* 8044C0EC 0044902C  40 82 00 18 */	bne .L_8044C104
/* 8044C0F0 00449030  38 7F 00 1C */	addi r3, r31, 0x1c
/* 8044C0F4 00449034  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044C0F8 00449038  38 80 01 D3 */	li r4, 0x1d3
/* 8044C0FC 0044903C  4C C6 31 82 */	crclr 6
/* 8044C100 00449040  4B BD E5 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C104:
/* 8044C104 00449044  83 AD 98 80 */	lwz r29, spSceneMgr__8PSSystem@sda21(r13)
/* 8044C108 00449048  80 1D 00 04 */	lwz r0, 4(r29)
/* 8044C10C 0044904C  28 00 00 00 */	cmplwi r0, 0
/* 8044C110 00449050  40 82 00 18 */	bne .L_8044C128
/* 8044C114 00449054  38 7F 01 54 */	addi r3, r31, 0x154
/* 8044C118 00449058  38 BF 00 28 */	addi r5, r31, 0x28
/* 8044C11C 0044905C  38 80 00 C7 */	li r4, 0xc7
/* 8044C120 00449060  4C C6 31 82 */	crclr 6
/* 8044C124 00449064  4B BD E5 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C128:
/* 8044C128 00449068  80 7D 00 04 */	lwz r3, 4(r29)
/* 8044C12C 0044906C  80 63 00 04 */	lwz r3, 4(r3)
/* 8044C130 00449070  81 83 00 00 */	lwz r12, 0(r3)
/* 8044C134 00449074  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8044C138 00449078  7D 89 03 A6 */	mtctr r12
/* 8044C13C 0044907C  4E 80 04 21 */	bctrl 
/* 8044C140 00449080  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C144 00449084  38 9F 01 7C */	addi r4, r31, 0x17c
/* 8044C148 00449088  38 A0 00 00 */	li r5, 0
/* 8044C14C 0044908C  4B FD 72 11 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C150 00449090  4B F6 CF 99 */	bl globalInstance__14TParticle2dMgrFv
/* 8044C154 00449094  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044C158 00449098  3C 80 00 10 */	lis r4, 0x10
/* 8044C15C 0044909C  4B F6 D0 D1 */	bl createHeap__14TParticle2dMgrFUl
/* 8044C160 004490A0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 8044C164 004490A4  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8044C168 004490A8  38 A0 07 D0 */	li r5, 0x7d0
/* 8044C16C 004490AC  38 C0 00 80 */	li r6, 0x80
/* 8044C170 004490B0  38 E0 00 80 */	li r7, 0x80
/* 8044C174 004490B4  4B F6 D1 4D */	bl createMgr__14TParticle2dMgrFPcUlUlUl
/* 8044C178 004490B8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C17C 004490BC  38 9F 01 7C */	addi r4, r31, 0x17c
/* 8044C180 004490C0  4B FD 71 E5 */	bl heapStatusEnd__6SystemFPc
/* 8044C184 004490C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C188 004490C8  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 8044C18C 004490CC  38 A0 00 00 */	li r5, 0
/* 8044C190 004490D0  4B FD 71 CD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C194 004490D4  88 0D 86 9F */	lbz r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C198 004490D8  7C 00 07 74 */	extsb r0, r0
/* 8044C19C 004490DC  2C 00 FF FF */	cmpwi r0, -1
/* 8044C1A0 004490E0  40 82 00 44 */	bne .L_8044C1E4
/* 8044C1A4 004490E4  4B C7 D3 FD */	bl rand
/* 8044C1A8 004490E8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8044C1AC 004490EC  3C 00 43 30 */	lis r0, 0x4330
/* 8044C1B0 004490F0  90 61 00 7C */	stw r3, 0x7c(r1)
/* 8044C1B4 004490F4  C8 62 27 30 */	lfd f3, lbl_80520A90@sda21(r2)
/* 8044C1B8 004490F8  90 01 00 78 */	stw r0, 0x78(r1)
/* 8044C1BC 004490FC  C0 22 27 40 */	lfs f1, lbl_80520AA0@sda21(r2)
/* 8044C1C0 00449100  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 8044C1C4 00449104  C0 02 27 44 */	lfs f0, lbl_80520AA4@sda21(r2)
/* 8044C1C8 00449108  EC 42 18 28 */	fsubs f2, f2, f3
/* 8044C1CC 0044910C  EC 22 08 24 */	fdivs f1, f2, f1
/* 8044C1D0 00449110  EC 00 00 72 */	fmuls f0, f0, f1
/* 8044C1D4 00449114  FC 00 00 1E */	fctiwz f0, f0
/* 8044C1D8 00449118  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 8044C1DC 0044911C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8044C1E0 00449120  48 00 00 08 */	b .L_8044C1E8
.L_8044C1E4:
/* 8044C1E4 00449124  38 00 00 0C */	li r0, 0xc
.L_8044C1E8:
/* 8044C1E8 00449128  28 00 00 0B */	cmplwi r0, 0xb
/* 8044C1EC 0044912C  41 81 00 AC */	bgt .L_8044C298
/* 8044C1F0 00449130  3C 60 80 4F */	lis r3, lbl_804ED200@ha
/* 8044C1F4 00449134  54 00 10 3A */	slwi r0, r0, 2
/* 8044C1F8 00449138  38 63 D2 00 */	addi r3, r3, lbl_804ED200@l
/* 8044C1FC 0044913C  7C 03 00 2E */	lwzx r0, r3, r0
/* 8044C200 00449140  7C 09 03 A6 */	mtctr r0
/* 8044C204 00449144  4E 80 04 20 */	bctr 
.L_8044C208:
/* 8044C208 00449148  38 00 00 03 */	li r0, 3
/* 8044C20C 0044914C  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C210 00449150  48 00 00 A8 */	b .L_8044C2B8
.L_8044C214:
/* 8044C214 00449154  38 00 00 03 */	li r0, 3
/* 8044C218 00449158  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C21C 0044915C  48 00 00 9C */	b .L_8044C2B8
.L_8044C220:
/* 8044C220 00449160  38 00 00 00 */	li r0, 0
/* 8044C224 00449164  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C228 00449168  48 00 00 90 */	b .L_8044C2B8
.L_8044C22C:
/* 8044C22C 0044916C  38 00 00 00 */	li r0, 0
/* 8044C230 00449170  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C234 00449174  48 00 00 84 */	b .L_8044C2B8
.L_8044C238:
/* 8044C238 00449178  38 00 00 00 */	li r0, 0
/* 8044C23C 0044917C  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C240 00449180  48 00 00 78 */	b .L_8044C2B8
.L_8044C244:
/* 8044C244 00449184  38 00 00 01 */	li r0, 1
/* 8044C248 00449188  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C24C 0044918C  48 00 00 6C */	b .L_8044C2B8
.L_8044C250:
/* 8044C250 00449190  38 00 00 01 */	li r0, 1
/* 8044C254 00449194  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C258 00449198  48 00 00 60 */	b .L_8044C2B8
.L_8044C25C:
/* 8044C25C 0044919C  38 00 00 01 */	li r0, 1
/* 8044C260 004491A0  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C264 004491A4  48 00 00 54 */	b .L_8044C2B8
.L_8044C268:
/* 8044C268 004491A8  38 00 00 02 */	li r0, 2
/* 8044C26C 004491AC  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C270 004491B0  48 00 00 48 */	b .L_8044C2B8
.L_8044C274:
/* 8044C274 004491B4  38 00 00 02 */	li r0, 2
/* 8044C278 004491B8  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C27C 004491BC  48 00 00 3C */	b .L_8044C2B8
.L_8044C280:
/* 8044C280 004491C0  38 00 00 02 */	li r0, 2
/* 8044C284 004491C4  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C288 004491C8  48 00 00 30 */	b .L_8044C2B8
.L_8044C28C:
/* 8044C28C 004491CC  38 00 00 03 */	li r0, 3
/* 8044C290 004491D0  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C294 004491D4  48 00 00 24 */	b .L_8044C2B8
.L_8044C298:
/* 8044C298 004491D8  88 6D 86 9F */	lbz r3, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C29C 004491DC  38 63 00 01 */	addi r3, r3, 1
/* 8044C2A0 004491E0  7C 60 07 74 */	extsb r0, r3
/* 8044C2A4 004491E4  98 6D 86 9F */	stb r3, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C2A8 004491E8  2C 00 00 03 */	cmpwi r0, 3
/* 8044C2AC 004491EC  40 81 00 0C */	ble .L_8044C2B8
/* 8044C2B0 004491F0  38 00 00 00 */	li r0, 0
/* 8044C2B4 004491F4  98 0D 86 9F */	stb r0, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
.L_8044C2B8:
/* 8044C2B8 004491F8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8044C2BC 004491FC  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 8044C2C0 00449200  80 03 02 28 */	lwz r0, 0x228(r3)
/* 8044C2C4 00449204  2C 00 00 00 */	cmpwi r0, 0
/* 8044C2C8 00449208  41 82 00 14 */	beq .L_8044C2DC
/* 8044C2CC 0044920C  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044C2D0 00449210  38 80 00 01 */	li r4, 1
/* 8044C2D4 00449214  4B F9 E2 51 */	bl setMode__Q23ebi13TMainTitleMgrFl
/* 8044C2D8 00449218  48 00 00 14 */	b .L_8044C2EC
.L_8044C2DC:
/* 8044C2DC 0044921C  88 8D 86 9F */	lbz r4, "sSeasonIndex__26@unnamed@titleSection_cpp@"@sda21(r13)
/* 8044C2E0 00449220  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044C2E4 00449224  7C 84 07 74 */	extsb r4, r4
/* 8044C2E8 00449228  4B F9 E2 3D */	bl setMode__Q23ebi13TMainTitleMgrFl
.L_8044C2EC:
/* 8044C2EC 0044922C  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044C2F0 00449230  4B F9 E2 9D */	bl loadResource__Q23ebi13TMainTitleMgrFv
/* 8044C2F4 00449234  80 9E 00 C4 */	lwz r4, 0xc4(r30)
/* 8044C2F8 00449238  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8044C2FC 0044923C  4B F9 E3 B5 */	bl setController__Q23ebi13TMainTitleMgrFP10Controller
/* 8044C300 00449240  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C304 00449244  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 8044C308 00449248  4B FD 70 5D */	bl heapStatusEnd__6SystemFPc
/* 8044C30C 0044924C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C310 00449250  38 9F 01 C0 */	addi r4, r31, 0x1c0
/* 8044C314 00449254  38 A0 00 00 */	li r5, 0
/* 8044C318 00449258  4B FD 70 45 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C31C 0044925C  38 7E 17 30 */	addi r3, r30, 0x1730
/* 8044C320 00449260  4B F8 3D A1 */	bl loadResource__Q33ebi6Option4TMgrFv
/* 8044C324 00449264  80 9E 00 C4 */	lwz r4, 0xc4(r30)
/* 8044C328 00449268  38 7E 17 30 */	addi r3, r30, 0x1730
/* 8044C32C 0044926C  4B F8 3E 1D */	bl setController__Q33ebi6Option4TMgrFP10Controller
/* 8044C330 00449270  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C334 00449274  38 9F 01 C0 */	addi r4, r31, 0x1c0
/* 8044C338 00449278  4B FD 70 2D */	bl heapStatusEnd__6SystemFPc
/* 8044C33C 0044927C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C340 00449280  38 9F 01 CC */	addi r4, r31, 0x1cc
/* 8044C344 00449284  38 A0 00 00 */	li r5, 0
/* 8044C348 00449288  4B FD 70 15 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C34C 0044928C  38 00 00 00 */	li r0, 0
/* 8044C350 00449290  38 9F 01 DC */	addi r4, r31, 0x1dc
/* 8044C354 00449294  90 1E 2F 40 */	stw r0, 0x2f40(r30)
/* 8044C358 00449298  38 61 00 08 */	addi r3, r1, 8
/* 8044C35C 0044929C  4B EC BB F1 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 8044C360 004492A0  38 61 00 08 */	addi r3, r1, 8
/* 8044C364 004492A4  38 80 00 01 */	li r4, 1
/* 8044C368 004492A8  38 A0 00 00 */	li r5, 0
/* 8044C36C 004492AC  38 C0 00 01 */	li r6, 1
/* 8044C370 004492B0  4B BC ED C1 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 8044C374 004492B4  90 7E 2F 40 */	stw r3, 0x2f40(r30)
/* 8044C378 004492B8  80 1E 2F 40 */	lwz r0, 0x2f40(r30)
/* 8044C37C 004492BC  28 00 00 00 */	cmplwi r0, 0
/* 8044C380 004492C0  40 82 00 1C */	bne .L_8044C39C
/* 8044C384 004492C4  38 7F 00 34 */	addi r3, r31, 0x34
/* 8044C388 004492C8  38 BF 01 F4 */	addi r5, r31, 0x1f4
/* 8044C38C 004492CC  38 C1 00 08 */	addi r6, r1, 8
/* 8044C390 004492D0  38 80 06 A4 */	li r4, 0x6a4
/* 8044C394 004492D4  4C C6 31 82 */	crclr 6
/* 8044C398 004492D8  4B BD E2 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044C39C:
/* 8044C39C 004492DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3A0 004492E0  38 9F 01 CC */	addi r4, r31, 0x1cc
/* 8044C3A4 004492E4  4B FD 6F C1 */	bl heapStatusEnd__6SystemFPc
/* 8044C3A8 004492E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3AC 004492EC  38 9F 02 04 */	addi r4, r31, 0x204
/* 8044C3B0 004492F0  38 A0 00 00 */	li r5, 0
/* 8044C3B4 004492F4  4B FD 6F A9 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8044C3B8 004492F8  38 7E 26 78 */	addi r3, r30, 0x2678
/* 8044C3BC 004492FC  4B FA 32 09 */	bl newCardEMgrAndTask__Q33ebi5Omake4TMgrFv
/* 8044C3C0 00449300  38 7E 26 78 */	addi r3, r30, 0x2678
/* 8044C3C4 00449304  4B FA 31 19 */	bl loadResource__Q33ebi5Omake4TMgrFv
/* 8044C3C8 00449308  83 BE 00 C4 */	lwz r29, 0xc4(r30)
/* 8044C3CC 0044930C  38 7E 26 80 */	addi r3, r30, 0x2680
/* 8044C3D0 00449310  93 BE 26 78 */	stw r29, 0x2678(r30)
/* 8044C3D4 00449314  7F A4 EB 78 */	mr r4, r29
/* 8044C3D8 00449318  4B FA 25 79 */	bl setController__Q33ebi6Screen6TOmakeFP10Controller
/* 8044C3DC 0044931C  93 BE 2A EC */	stw r29, 0x2aec(r30)
/* 8044C3E0 00449320  7F A4 EB 78 */	mr r4, r29
/* 8044C3E4 00449324  38 7E 2C 54 */	addi r3, r30, 0x2c54
/* 8044C3E8 00449328  4B FA 54 BD */	bl setController__Q33ebi6Screen10TOmakeGameFP10Controller
/* 8044C3EC 0044932C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3F0 00449330  38 9F 02 04 */	addi r4, r31, 0x204
/* 8044C3F4 00449334  4B FD 6F 71 */	bl heapStatusEnd__6SystemFPc
/* 8044C3F8 00449338  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8044C3FC 0044933C  38 9F 01 60 */	addi r4, r31, 0x160
/* 8044C400 00449340  4B FD 6F 65 */	bl heapStatusEnd__6SystemFPc
/* 8044C404 00449344  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8044C408 00449348  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 8044C40C 0044934C  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8044C410 00449350  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 8044C414 00449354  7C 08 03 A6 */	mtlr r0
/* 8044C418 00449358  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8044C41C 0044935C  4E 80 00 20 */	blr 
.endfn loadResource__Q25Title7SectionFv
.endif

.fn forceReset__Q25Title7SectionFv, weak
/* 8044C420 00449360  38 60 00 00 */	li r3, 0
/* 8044C424 00449364  4E 80 00 20 */	blr 
.endfn forceReset__Q25Title7SectionFv

.fn __dt__11HIORootNodeFv, weak
/* 8044C428 00449368  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044C42C 0044936C  7C 08 02 A6 */	mflr r0
/* 8044C430 00449370  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044C434 00449374  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044C438 00449378  7C 9F 23 78 */	mr r31, r4
/* 8044C43C 0044937C  93 C1 00 08 */	stw r30, 8(r1)
/* 8044C440 00449380  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044C444 00449384  41 82 00 38 */	beq .L_8044C47C
/* 8044C448 00449388  3C 80 80 4F */	lis r4, __vt__11HIORootNode@ha
/* 8044C44C 0044938C  38 04 D2 48 */	addi r0, r4, __vt__11HIORootNode@l
/* 8044C450 00449390  90 1E 00 00 */	stw r0, 0(r30)
/* 8044C454 00449394  41 82 00 18 */	beq .L_8044C46C
/* 8044C458 00449398  3C A0 80 4B */	lis r5, __vt__Q24Game11HIORootNode@ha
/* 8044C45C 0044939C  38 80 00 00 */	li r4, 0
/* 8044C460 004493A0  38 05 19 FC */	addi r0, r5, __vt__Q24Game11HIORootNode@l
/* 8044C464 004493A4  90 1E 00 00 */	stw r0, 0(r30)
/* 8044C468 004493A8  4B FC 51 21 */	bl __dt__5CNodeFv
.L_8044C46C:
/* 8044C46C 004493AC  7F E0 07 35 */	extsh. r0, r31
/* 8044C470 004493B0  40 81 00 0C */	ble .L_8044C47C
/* 8044C474 004493B4  7F C3 F3 78 */	mr r3, r30
/* 8044C478 004493B8  4B BD 7C 3D */	bl __dl__FPv
.L_8044C47C:
/* 8044C47C 004493BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044C480 004493C0  7F C3 F3 78 */	mr r3, r30
/* 8044C484 004493C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044C488 004493C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044C48C 004493CC  7C 08 03 A6 */	mtlr r0
/* 8044C490 004493D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8044C494 004493D4  4E 80 00 20 */	blr 
.endfn __dt__11HIORootNodeFv

.fn "invoke__34Delegate1<Q25Title7Section,R4Menu>FR4Menu", weak
/* 8044C498 004493D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044C49C 004493DC  7C 08 02 A6 */	mflr r0
/* 8044C4A0 004493E0  7C 65 1B 78 */	mr r5, r3
/* 8044C4A4 004493E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044C4A8 004493E8  39 85 00 08 */	addi r12, r5, 8
/* 8044C4AC 004493EC  80 63 00 04 */	lwz r3, 4(r3)
/* 8044C4B0 004493F0  4B C7 56 75 */	bl __ptmf_scall
/* 8044C4B4 004493F4  60 00 00 00 */	nop 
/* 8044C4B8 004493F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044C4BC 004493FC  7C 08 03 A6 */	mtlr r0
/* 8044C4C0 00449400  38 21 00 10 */	addi r1, r1, 0x10
/* 8044C4C4 00449404  4E 80 00 20 */	blr 
.endfn "invoke__34Delegate1<Q25Title7Section,R4Menu>FR4Menu"

.fn "invoke__26Delegate<Q25Title7Section>Fv", weak
/* 8044C4C8 00449408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044C4CC 0044940C  7C 08 02 A6 */	mflr r0
/* 8044C4D0 00449410  7C 64 1B 78 */	mr r4, r3
/* 8044C4D4 00449414  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044C4D8 00449418  39 84 00 08 */	addi r12, r4, 8
/* 8044C4DC 0044941C  80 63 00 04 */	lwz r3, 4(r3)
/* 8044C4E0 00449420  4B C7 56 45 */	bl __ptmf_scall
/* 8044C4E4 00449424  60 00 00 00 */	nop 
/* 8044C4E8 00449428  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044C4EC 0044942C  7C 08 03 A6 */	mtlr r0
/* 8044C4F0 00449430  38 21 00 10 */	addi r1, r1, 0x10
/* 8044C4F4 00449434  4E 80 00 20 */	blr 
.endfn "invoke__26Delegate<Q25Title7Section>Fv"

.fn __sinit_titleSection_cpp, local
/* 8044C4F8 00449438  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8044C4FC 0044943C  38 00 FF FF */	li r0, -1
/* 8044C500 00449440  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8044C504 00449444  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8044C508 00449448  90 0D 9C 20 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8044C50C 0044944C  D4 03 D1 A8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8044C510 00449450  D0 0D 9C 24 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8044C514 00449454  D0 03 00 04 */	stfs f0, 4(r3)
/* 8044C518 00449458  D0 03 00 08 */	stfs f0, 8(r3)
/* 8044C51C 0044945C  4E 80 00 20 */	blr 
.endfn __sinit_titleSection_cpp
