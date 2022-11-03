.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_vsGS_Game_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80483550:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
lbl_8048355C:
	.asciz "vsGS_Game"
.balign 4
lbl_80483568:
	.asciz "s0B_cv_coursein"
.balign 4
lbl_80483578:
	.asciz "vs-readygo"
.balign 4
lbl_80483584:
	.asciz "vs readygo"
.balign 4
lbl_80483590:
	.asciz "vs-rg-arr"
.balign 4
lbl_8048359C:
	.asciz "cmore-yes"
.balign 4
lbl_804835A8:
	.asciz "cmore-no"
.balign 4
lbl_804835B4:
	.asciz "cmore-zenk"
.balign 4
lbl_804835C0:
	.asciz "vsGS_Game.cpp"
.balign 4
lbl_804835D0:
	.asciz "P2Assert"
.balign 4
lbl_804835DC:
	.asciz "s16_find_key"
.balign 4
lbl_804835EC: # Shift-JIS
	.4byte 0x82A082E8
	.4byte 0x82A682C8
	.4byte 0x82A282C1
	.4byte 0x82B70A00
.balign 4
lbl_804835FC:
	.asciz "s12_cv_giveup"
.balign 4
lbl_8048360C:
	.asciz "no pod demo 12"
.balign 4
lbl_8048361C:
	.asciz "vsgs_game:clean"
.balign 4
lbl_8048362C:
	.asciz "x19_vs_bedama"
.balign 4
lbl_8048363C:
	.asciz "s05_pikminzero"
.balign 4
lbl_8048364C:
	.asciz "g2F_appear_hole"
.balign 4
lbl_8048365C:
	.asciz "g30_appear_fountain"
.balign 4
lbl_80483670:
	.asciz "s03_orimadown"
.balign 4
lbl_80483680:
	.asciz "s09_holein"
.balign 4
lbl_8048368C:
	.asciz "s0C_cv_escape"
.balign 4
lbl_8048369C:
	.asciz "PSGame.h"
.balign 4
lbl_804836A8:
	.asciz "PSScene.h"
.balign 4
lbl_804836B4:
	.asciz "get sound scene at\ninvalid timming\n"
.balign 4
lbl_804836D8:
	.asciz "PSMainSide_Scene.h"
.balign 4
lbl_804836EC:
	.asciz "e00_E3_cavestart"
.balign 4
lbl_80483700:
	.asciz "readygo2"
.balign 4
lbl_8048370C:
	.asciz "cannot happen !\n"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q32og6Screen12DispMemberVs
__vt__Q32og6Screen12DispMemberVs:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen12DispMemberVsFv
	.4byte getOwnerID__Q32og6Screen12DispMemberVsFv
	.4byte getMemberID__Q32og6Screen12DispMemberVsFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen21DispMemberChallenge1P
__vt__Q32og6Screen21DispMemberChallenge1P:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen21DispMemberChallenge1PFv
	.4byte getOwnerID__Q32og6Screen21DispMemberChallenge1PFv
	.4byte getMemberID__Q32og6Screen21DispMemberChallenge1PFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32kh6Screen17DispWinLoseReason
__vt__Q32kh6Screen17DispWinLoseReason:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32kh6Screen17DispWinLoseReasonFv
	.4byte getOwnerID__Q32kh6Screen17DispWinLoseReasonFv
	.4byte getMemberID__Q32kh6Screen17DispWinLoseReasonFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32kh6Screen11DispWinLose
__vt__Q32kh6Screen11DispWinLose:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32kh6Screen11DispWinLoseFv
	.4byte getOwnerID__Q32kh6Screen11DispWinLoseFv
	.4byte getMemberID__Q32kh6Screen11DispWinLoseFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen21DispMemberChallenge2P
__vt__Q32og6Screen21DispMemberChallenge2P:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen21DispMemberChallenge2PFv
	.4byte getOwnerID__Q32og6Screen21DispMemberChallenge2PFv
	.4byte getMemberID__Q32og6Screen21DispMemberChallenge2PFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q34Game6VsGame9GameState
__vt__Q34Game6VsGame9GameState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg
	.4byte exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte cleanup__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionR8Graphics
	.4byte pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
	.4byte onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
	.4byte onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
	.4byte onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
	.4byte on_section_fadeout__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte goingToCave__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte onBattleFinished__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
	.4byte onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
	.4byte isCardUsable__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
	.4byte drawStatus__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
	.4byte do_init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051A268:
	.float 1.0
lbl_8051A26C:
	.float 12800.0
lbl_8051A270:
	.float 0.25
lbl_8051A274:
	.float 0.0
lbl_8051A278:
	.float 0.5
.balign 4
lbl_8051A27C:
	.asciz "timeup"
.balign 4
lbl_8051A284:
	.float 100.0
.balign 4
lbl_8051A288:
	.asciz "sm-canc"
.balign 4
lbl_8051A290: # Shift-JIS
	.4byte 0x82C882A2
	.4byte 0x0A000000
.balign 4
lbl_8051A298:
	.asciz "sm-quit"
.balign 4
lbl_8051A2A0:
	.asciz "open-sm"
.balign 4
lbl_8051A2A8:
	.asciz "readygo"
.balign 4
lbl_8051A2B0:
	.float 0.9
lbl_8051A2B4:
	.float 2469.0
lbl_8051A2B8:
	.float 99999.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game6VsGame9GameStateFv
__ct__Q34Game6VsGame9GameStateFv:
/* 802292A4 002261E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802292A8 002261E8  7C 08 02 A6 */	mflr r0
/* 802292AC 002261EC  3C C0 80 4C */	lis r6, __vt__Q34Game6VsGame5State@ha
/* 802292B0 002261F0  3C 80 80 4C */	lis r4, "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"@ha
/* 802292B4 002261F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802292B8 002261F8  38 04 0E E4 */	addi r0, r4, "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"@l
/* 802292BC 002261FC  39 00 00 00 */	li r8, 0
/* 802292C0 00226200  38 C6 0E 98 */	addi r6, r6, __vt__Q34Game6VsGame5State@l
/* 802292C4 00226204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802292C8 00226208  7C 7F 1B 78 */	mr r31, r3
/* 802292CC 0022620C  3C A0 80 4C */	lis r5, __vt__Q34Game6VsGame9GameState@ha
/* 802292D0 00226210  38 E0 00 02 */	li r7, 2
/* 802292D4 00226214  90 03 00 00 */	stw r0, 0(r3)
/* 802292D8 00226218  38 00 00 02 */	li r0, 2
/* 802292DC 0022621C  3C 60 80 23 */	lis r3, "__ct__11BitFlag<Uc>Fv"@ha
/* 802292E0 00226220  90 1F 00 04 */	stw r0, 4(r31)
/* 802292E4 00226224  38 05 0F 8C */	addi r0, r5, __vt__Q34Game6VsGame9GameState@l
/* 802292E8 00226228  38 83 93 48 */	addi r4, r3, "__ct__11BitFlag<Uc>Fv"@l
/* 802292EC 0022622C  38 7F 00 25 */	addi r3, r31, 0x25
/* 802292F0 00226230  91 1F 00 08 */	stw r8, 8(r31)
/* 802292F4 00226234  38 A0 00 00 */	li r5, 0
/* 802292F8 00226238  90 DF 00 00 */	stw r6, 0(r31)
/* 802292FC 0022623C  38 C0 00 01 */	li r6, 1
/* 80229300 00226240  90 1F 00 00 */	stw r0, 0(r31)
/* 80229304 00226244  99 1F 00 14 */	stb r8, 0x14(r31)
/* 80229308 00226248  99 1F 00 15 */	stb r8, 0x15(r31)
/* 8022930C 0022624C  4B E9 85 31 */	bl __construct_array
/* 80229310 00226250  38 60 00 B0 */	li r3, 0xb0
/* 80229314 00226254  4B DF AB 91 */	bl __nw__FUl
/* 80229318 00226258  7C 60 1B 79 */	or. r0, r3, r3
/* 8022931C 0022625C  41 82 00 10 */	beq .L_8022932C
/* 80229320 00226260  38 80 00 00 */	li r4, 0
/* 80229324 00226264  48 1F BB 31 */	bl __ct__10ControllerFQ210JUTGamePad8EPadPort
/* 80229328 00226268  7C 60 1B 78 */	mr r0, r3
.L_8022932C:
/* 8022932C 0022626C  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80229330 00226270  7F E3 FB 78 */	mr r3, r31
/* 80229334 00226274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80229338 00226278  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8022933C 0022627C  7C 08 03 A6 */	mtlr r0
/* 80229340 00226280  38 21 00 10 */	addi r1, r1, 0x10
/* 80229344 00226284  4E 80 00 20 */	blr 

.global "__ct__11BitFlag<Uc>Fv"
"__ct__11BitFlag<Uc>Fv":
/* 80229348 00226288  38 00 00 00 */	li r0, 0
/* 8022934C 0022628C  98 03 00 00 */	stb r0, 0(r3)
/* 80229350 00226290  4E 80 00 20 */	blr 

.if version == 1
.global init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg
init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg:
/* 80229354 00226294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80229358 00226298  7C 08 02 A6 */	mflr r0
/* 8022935C 0022629C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80229360 002262A0  38 00 00 00 */	li r0, 0
/* 80229364 002262A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80229368 002262A8  7C 9F 23 78 */	mr r31, r4
/* 8022936C 002262AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80229370 002262B0  7C 7E 1B 78 */	mr r30, r3
/* 80229374 002262B4  98 03 00 16 */	stb r0, 0x16(r3)
/* 80229378 002262B8  7F E3 FB 78 */	mr r3, r31
/* 8022937C 002262BC  98 1E 00 14 */	stb r0, 0x14(r30)
/* 80229380 002262C0  98 1E 00 15 */	stb r0, 0x15(r30)
/* 80229384 002262C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80229388 002262C8  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8022938C 002262CC  7D 89 03 A6 */	mtctr r12
/* 80229390 002262D0  4E 80 04 21 */	bctrl 
/* 80229394 002262D4  7F C3 F3 78 */	mr r3, r30
/* 80229398 002262D8  7F E4 FB 78 */	mr r4, r31
/* 8022939C 002262DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802293A0 002262E0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 802293A4 002262E4  7D 89 03 A6 */	mtctr r12
/* 802293A8 002262E8  4E 80 04 21 */	bctrl 
/* 802293AC 002262EC  C0 22 BF 08 */	lfs f1, lbl_8051A268@sda21(r2)
/* 802293B0 002262F0  7F E3 FB 78 */	mr r3, r31
/* 802293B4 002262F4  C0 42 BF 0C */	lfs f2, lbl_8051A26C@sda21(r2)
/* 802293B8 002262F8  38 80 00 01 */	li r4, 1
/* 802293BC 002262FC  4B F2 49 65 */	bl setFixNearFar__Q24Game15BaseGameSectionFbff
/* 802293C0 00226300  48 00 72 D5 */	bl clear__Q24Game8DeathMgrFv
/* 802293C4 00226304  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802293C8 00226308  7F E3 FB 78 */	mr r3, r31
/* 802293CC 0022630C  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 802293D0 00226310  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 802293D4 00226314  98 04 00 3C */	stb r0, 0x3c(r4)
/* 802293D8 00226318  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802293DC 0022631C  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 802293E0 00226320  60 00 00 20 */	ori r0, r0, 0x20
/* 802293E4 00226324  98 04 00 3C */	stb r0, 0x3c(r4)
/* 802293E8 00226328  4B F9 8C 45 */	bl clearCaveMenus__Q24Game13VsGameSectionFv
/* 802293EC 0022632C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802293F0 00226330  38 60 00 00 */	li r3, 0
/* 802293F4 00226334  80 04 00 44 */	lwz r0, 0x44(r4)
/* 802293F8 00226338  2C 00 00 01 */	cmpwi r0, 1
/* 802293FC 0022633C  41 82 00 0C */	beq .L_80229408
/* 80229400 00226340  2C 00 00 03 */	cmpwi r0, 3
/* 80229404 00226344  40 82 00 08 */	bne .L_8022940C
.L_80229408:
/* 80229408 00226348  38 60 00 01 */	li r3, 1
.L_8022940C:
/* 8022940C 0022634C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229410 00226350  40 82 00 10 */	bne .L_80229420
/* 80229414 00226354  7F E3 FB 78 */	mr r3, r31
/* 80229418 00226358  38 80 00 00 */	li r4, 0
/* 8022941C 0022635C  4B F2 44 FD */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80229420:
/* 80229420 00226360  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229424 00226364  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80229428 00226368  2C 00 00 01 */	cmpwi r0, 1
/* 8022942C 0022636C  40 82 00 20 */	bne .L_8022944C
/* 80229430 00226370  7F E3 FB 78 */	mr r3, r31
/* 80229434 00226374  38 80 00 02 */	li r4, 2
/* 80229438 00226378  4B F2 44 E1 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8022943C 0022637C  7F C3 F3 78 */	mr r3, r30
/* 80229440 00226380  48 00 00 C1 */	bl clearLoseCauses__Q34Game6VsGame9GameStateFv
/* 80229444 00226384  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229448 00226388  48 1D 43 2D */	bl startFadeBG_Floor__Q26Screen9Game2DMgrFv
.L_8022944C:
/* 8022944C 0022638C  38 60 00 00 */	li r3, 0
/* 80229450 00226390  98 7E 00 24 */	stb r3, 0x24(r30)
/* 80229454 00226394  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80229458 00226398  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022945C 0022639C  2C 00 00 02 */	cmpwi r0, 2
/* 80229460 002263A0  41 82 00 0C */	beq .L_8022946C
/* 80229464 002263A4  2C 00 00 03 */	cmpwi r0, 3
/* 80229468 002263A8  40 82 00 08 */	bne .L_80229470
.L_8022946C:
/* 8022946C 002263AC  38 60 00 01 */	li r3, 1
.L_80229470:
/* 80229470 002263B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229474 002263B4  41 82 00 54 */	beq .L_802294C8
/* 80229478 002263B8  C0 1F 03 C0 */	lfs f0, 0x3e4(r31)
/* 8022947C 002263BC  7F E3 FB 78 */	mr r3, r31
/* 80229480 002263C0  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80229484 002263C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80229488 002263C8  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022948C 002263CC  7D 89 03 A6 */	mtctr r12
/* 80229490 002263D0  4E 80 04 21 */	bctrl 
/* 80229494 002263D4  80 9F 03 34 */	lwz r4, 0x358(r31)
/* 80229498 002263D8  54 60 10 3A */	slwi r0, r3, 2
/* 8022949C 002263DC  C0 02 BF 10 */	lfs f0, lbl_8051A270@sda21(r2)
/* 802294A0 002263E0  80 64 00 78 */	lwz r3, 0x78(r4)
/* 802294A4 002263E4  7C 23 04 2E */	lfsx f1, r3, r0
/* 802294A8 002263E8  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 802294AC 002263EC  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 802294B0 002263F0  EC 01 00 32 */	fmuls f0, f1, f0
/* 802294B4 002263F4  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 802294B8 002263F8  C0 3F 03 C0 */	lfs f1, 0x3e4(r31)
/* 802294BC 002263FC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 802294C0 00226400  EC 01 00 2A */	fadds f0, f1, f0
/* 802294C4 00226404  D0 1F 03 C0 */	stfs f0, 0x3e4(r31)
.L_802294C8:
/* 802294C8 00226408  38 00 00 00 */	li r0, 0
/* 802294CC 0022640C  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 802294D0 00226410  90 1F 03 D8 */	stw r0, 0x3fc(r31)
/* 802294D4 00226414  90 1F 03 D4 */	stw r0, 0x3f8(r31)
/* 802294D8 00226418  90 1F 03 E0 */	stw r0, 0x404(r31)
/* 802294DC 0022641C  90 1F 03 DC */	stw r0, 0x400(r31)
/* 802294E0 00226420  D0 1F 01 F4 */	stfs f0, 0x218(r31)
/* 802294E4 00226424  D0 1F 01 F0 */	stfs f0, 0x214(r31)
/* 802294E8 00226428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802294EC 0022642C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802294F0 00226430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802294F4 00226434  7C 08 03 A6 */	mtlr r0
/* 802294F8 00226438  38 21 00 10 */	addi r1, r1, 0x10
/* 802294FC 0022643C  4E 80 00 20 */	blr 
.else
.global init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg
init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg:
/* 80229354 00226294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80229358 00226298  7C 08 02 A6 */	mflr r0
/* 8022935C 0022629C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80229360 002262A0  38 00 00 00 */	li r0, 0
/* 80229364 002262A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80229368 002262A8  7C 9F 23 78 */	mr r31, r4
/* 8022936C 002262AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80229370 002262B0  7C 7E 1B 78 */	mr r30, r3
/* 80229374 002262B4  98 03 00 16 */	stb r0, 0x16(r3)
/* 80229378 002262B8  7F E3 FB 78 */	mr r3, r31
/* 8022937C 002262BC  98 1E 00 14 */	stb r0, 0x14(r30)
/* 80229380 002262C0  98 1E 00 15 */	stb r0, 0x15(r30)
/* 80229384 002262C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80229388 002262C8  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 8022938C 002262CC  7D 89 03 A6 */	mtctr r12
/* 80229390 002262D0  4E 80 04 21 */	bctrl 
/* 80229394 002262D4  7F C3 F3 78 */	mr r3, r30
/* 80229398 002262D8  7F E4 FB 78 */	mr r4, r31
/* 8022939C 002262DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 802293A0 002262E0  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 802293A4 002262E4  7D 89 03 A6 */	mtctr r12
/* 802293A8 002262E8  4E 80 04 21 */	bctrl 
/* 802293AC 002262EC  C0 22 BF 08 */	lfs f1, lbl_8051A268@sda21(r2)
/* 802293B0 002262F0  7F E3 FB 78 */	mr r3, r31
/* 802293B4 002262F4  C0 42 BF 0C */	lfs f2, lbl_8051A26C@sda21(r2)
/* 802293B8 002262F8  38 80 00 01 */	li r4, 1
/* 802293BC 002262FC  4B F2 49 65 */	bl setFixNearFar__Q24Game15BaseGameSectionFbff
/* 802293C0 00226300  48 00 72 D5 */	bl clear__Q24Game8DeathMgrFv
/* 802293C4 00226304  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802293C8 00226308  7F E3 FB 78 */	mr r3, r31
/* 802293CC 0022630C  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 802293D0 00226310  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 802293D4 00226314  98 04 00 3C */	stb r0, 0x3c(r4)
/* 802293D8 00226318  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802293DC 0022631C  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 802293E0 00226320  60 00 00 20 */	ori r0, r0, 0x20
/* 802293E4 00226324  98 04 00 3C */	stb r0, 0x3c(r4)
/* 802293E8 00226328  4B F9 8C 45 */	bl clearCaveMenus__Q24Game13VsGameSectionFv
/* 802293EC 0022632C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802293F0 00226330  38 60 00 00 */	li r3, 0
/* 802293F4 00226334  80 04 00 44 */	lwz r0, 0x44(r4)
/* 802293F8 00226338  2C 00 00 01 */	cmpwi r0, 1
/* 802293FC 0022633C  41 82 00 0C */	beq .L_80229408
/* 80229400 00226340  2C 00 00 03 */	cmpwi r0, 3
/* 80229404 00226344  40 82 00 08 */	bne .L_8022940C
.L_80229408:
/* 80229408 00226348  38 60 00 01 */	li r3, 1
.L_8022940C:
/* 8022940C 0022634C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229410 00226350  40 82 00 10 */	bne .L_80229420
/* 80229414 00226354  7F E3 FB 78 */	mr r3, r31
/* 80229418 00226358  38 80 00 00 */	li r4, 0
/* 8022941C 0022635C  4B F2 44 FD */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80229420:
/* 80229420 00226360  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229424 00226364  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80229428 00226368  2C 00 00 01 */	cmpwi r0, 1
/* 8022942C 0022636C  40 82 00 20 */	bne .L_8022944C
/* 80229430 00226370  7F E3 FB 78 */	mr r3, r31
/* 80229434 00226374  38 80 00 02 */	li r4, 2
/* 80229438 00226378  4B F2 44 E1 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8022943C 0022637C  7F C3 F3 78 */	mr r3, r30
/* 80229440 00226380  48 00 00 C1 */	bl clearLoseCauses__Q34Game6VsGame9GameStateFv
/* 80229444 00226384  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229448 00226388  48 1D 43 2D */	bl startFadeBG_Floor__Q26Screen9Game2DMgrFv
.L_8022944C:
/* 8022944C 0022638C  38 60 00 00 */	li r3, 0
/* 80229450 00226390  98 7E 00 24 */	stb r3, 0x24(r30)
/* 80229454 00226394  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80229458 00226398  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022945C 0022639C  2C 00 00 02 */	cmpwi r0, 2
/* 80229460 002263A0  41 82 00 0C */	beq .L_8022946C
/* 80229464 002263A4  2C 00 00 03 */	cmpwi r0, 3
/* 80229468 002263A8  40 82 00 08 */	bne .L_80229470
.L_8022946C:
/* 8022946C 002263AC  38 60 00 01 */	li r3, 1
.L_80229470:
/* 80229470 002263B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229474 002263B4  41 82 00 54 */	beq .L_802294C8
/* 80229478 002263B8  C0 1F 03 C0 */	lfs f0, 0x3c0(r31)
/* 8022947C 002263BC  7F E3 FB 78 */	mr r3, r31
/* 80229480 002263C0  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 80229484 002263C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80229488 002263C8  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022948C 002263CC  7D 89 03 A6 */	mtctr r12
/* 80229490 002263D0  4E 80 04 21 */	bctrl 
/* 80229494 002263D4  80 9F 03 34 */	lwz r4, 0x334(r31)
/* 80229498 002263D8  54 60 10 3A */	slwi r0, r3, 2
/* 8022949C 002263DC  C0 02 BF 10 */	lfs f0, lbl_8051A270@sda21(r2)
/* 802294A0 002263E0  80 64 00 78 */	lwz r3, 0x78(r4)
/* 802294A4 002263E4  7C 23 04 2E */	lfsx f1, r3, r0
/* 802294A8 002263E8  D0 3E 00 1C */	stfs f1, 0x1c(r30)
/* 802294AC 002263EC  C0 3E 00 18 */	lfs f1, 0x18(r30)
/* 802294B0 002263F0  EC 01 00 32 */	fmuls f0, f1, f0
/* 802294B4 002263F4  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 802294B8 002263F8  C0 3F 03 C0 */	lfs f1, 0x3c0(r31)
/* 802294BC 002263FC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 802294C0 00226400  EC 01 00 2A */	fadds f0, f1, f0
/* 802294C4 00226404  D0 1F 03 C0 */	stfs f0, 0x3c0(r31)
.L_802294C8:
/* 802294C8 00226408  38 00 00 00 */	li r0, 0
/* 802294CC 0022640C  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 802294D0 00226410  90 1F 03 D8 */	stw r0, 0x3d8(r31)
/* 802294D4 00226414  90 1F 03 D4 */	stw r0, 0x3d4(r31)
/* 802294D8 00226418  90 1F 03 E0 */	stw r0, 0x3e0(r31)
/* 802294DC 0022641C  90 1F 03 DC */	stw r0, 0x3dc(r31)
/* 802294E0 00226420  D0 1F 01 F4 */	stfs f0, 0x1f4(r31)
/* 802294E4 00226424  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 802294E8 00226428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802294EC 0022642C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802294F0 00226430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802294F4 00226434  7C 08 03 A6 */	mtlr r0
/* 802294F8 00226438  38 21 00 10 */	addi r1, r1, 0x10
/* 802294FC 0022643C  4E 80 00 20 */	blr 
.endif

.global clearLoseCauses__Q34Game6VsGame9GameStateFv
clearLoseCauses__Q34Game6VsGame9GameStateFv:
/* 80229500 00226440  38 00 00 00 */	li r0, 0
/* 80229504 00226444  98 03 00 25 */	stb r0, 0x25(r3)
/* 80229508 00226448  98 03 00 26 */	stb r0, 0x26(r3)
/* 8022950C 0022644C  98 03 00 16 */	stb r0, 0x16(r3)
/* 80229510 00226450  4E 80 00 20 */	blr 

.if version == 1
.global do_init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
do_init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 80229514 00226454  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80229518 00226458  7C 08 02 A6 */	mflr r0
/* 8022951C 0022645C  38 C0 00 00 */	li r6, 0
/* 80229520 00226460  3C E0 80 48 */	lis r7, lbl_80483550@ha
/* 80229524 00226464  90 01 00 54 */	stw r0, 0x54(r1)
/* 80229528 00226468  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8022952C 0022646C  7C 9F 23 78 */	mr r31, r4
/* 80229530 00226470  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80229534 00226474  3B C7 35 50 */	addi r30, r7, lbl_80483550@l
/* 80229538 00226478  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8022953C 0022647C  7C 7D 1B 78 */	mr r29, r3
/* 80229540 00226480  80 04 01 04 */	lwz r0, 0x124(r4)
/* 80229544 00226484  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80229548 00226488  90 05 01 90 */	stw r0, 0x190(r5)
/* 8022954C 0022648C  98 C3 00 14 */	stb r6, 0x14(r3)
/* 80229550 00226490  98 C3 00 15 */	stb r6, 0x15(r3)
/* 80229554 00226494  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80229558 00226498  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8022955C 0022649C  2C 00 00 01 */	cmpwi r0, 1
/* 80229560 002264A0  41 82 00 C4 */	beq .L_80229624
/* 80229564 002264A4  80 FF 00 C8 */	lwz r7, 0xe8(r31)
/* 80229568 002264A8  38 1E 00 18 */	addi r0, r30, 0x18
/* 8022956C 002264AC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229570 002264B0  3B C1 00 20 */	addi r30, r1, 0x20
/* 80229574 002264B4  90 01 00 08 */	stw r0, 8(r1)
/* 80229578 002264B8  7F C4 F3 78 */	mr r4, r30
/* 8022957C 002264BC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80229580 002264C0  38 A0 00 00 */	li r5, 0
/* 80229584 002264C4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80229588 002264C8  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8022958C 002264CC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80229590 002264D0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80229594 002264D4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80229598 002264D8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022959C 002264DC  90 C1 00 30 */	stw r6, 0x30(r1)
/* 802295A0 002264E0  90 C1 00 18 */	stw r6, 0x18(r1)
/* 802295A4 002264E4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802295A8 002264E8  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802295AC 002264EC  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 802295B0 002264F0  90 C1 00 38 */	stw r6, 0x38(r1)
/* 802295B4 002264F4  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 802295B8 002264F8  90 01 00 18 */	stw r0, 0x18(r1)
/* 802295BC 002264FC  81 83 00 04 */	lwz r12, 4(r3)
/* 802295C0 00226500  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802295C4 00226504  7D 89 03 A6 */	mtctr r12
/* 802295C8 00226508  4E 80 04 21 */	bctrl 
/* 802295CC 0022650C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802295D0 00226510  7F C4 F3 78 */	mr r4, r30
/* 802295D4 00226514  81 83 00 04 */	lwz r12, 4(r3)
/* 802295D8 00226518  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802295DC 0022651C  7D 89 03 A6 */	mtctr r12
/* 802295E0 00226520  4E 80 04 21 */	bctrl 
/* 802295E4 00226524  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802295E8 00226528  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 802295EC 0022652C  80 63 00 AC */	lwz r3, 0xac(r3)
/* 802295F0 00226530  28 03 00 00 */	cmplwi r3, 0
/* 802295F4 00226534  41 82 00 18 */	beq .L_8022960C
/* 802295F8 00226538  81 83 00 00 */	lwz r12, 0(r3)
/* 802295FC 0022653C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80229600 00226540  7D 89 03 A6 */	mtctr r12
/* 80229604 00226544  4E 80 04 21 */	bctrl 
/* 80229608 00226548  D0 21 00 2C */	stfs f1, 0x2c(r1)
.L_8022960C:
/* 8022960C 0022654C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80229610 00226550  38 81 00 08 */	addi r4, r1, 8
/* 80229614 00226554  48 20 33 BD */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80229618 00226558  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022961C 0022655C  48 1D 41 11 */	bl startCount_Floor__Q26Screen9Game2DMgrFv
/* 80229620 00226560  48 00 00 68 */	b .L_80229688
.L_80229624:
/* 80229624 00226564  38 A0 00 01 */	li r5, 1
/* 80229628 00226568  48 00 25 D9 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022962C 0022656C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229630 00226570  38 BE 00 28 */	addi r5, r30, 0x28
/* 80229634 00226574  38 80 00 00 */	li r4, 0
/* 80229638 00226578  38 C0 00 03 */	li r6, 3
/* 8022963C 0022657C  4B F8 B9 59 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229640 00226580  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229644 00226584  38 BE 00 34 */	addi r5, r30, 0x34
/* 80229648 00226588  38 80 00 01 */	li r4, 1
/* 8022964C 0022658C  38 C0 00 06 */	li r6, 6
/* 80229650 00226590  4B F8 B9 45 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229654 00226594  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229658 00226598  38 BE 00 34 */	addi r5, r30, 0x34
/* 8022965C 0022659C  38 80 00 01 */	li r4, 1
/* 80229660 002265A0  4B F8 B9 25 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229664 002265A4  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229668 002265A8  7F E3 FB 78 */	mr r3, r31
/* 8022966C 002265AC  60 00 00 80 */	ori r0, r0, 0x80
/* 80229670 002265B0  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229674 002265B4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80229678 002265B8  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8022967C 002265BC  60 00 00 02 */	ori r0, r0, 2
/* 80229680 002265C0  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80229684 002265C4  4B F2 47 05 */	bl setCamController__Q24Game15BaseGameSectionFv
.L_80229688:
/* 80229688 002265C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022968C 002265CC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80229690 002265D0  2C 00 00 01 */	cmpwi r0, 1
/* 80229694 002265D4  40 82 00 18 */	bne .L_802296AC
/* 80229698 002265D8  7F E3 FB 78 */	mr r3, r31
/* 8022969C 002265DC  4B F9 91 C1 */	bl createVsPikmins__Q24Game13VsGameSectionFv
/* 802296A0 002265E0  7F E3 FB 78 */	mr r3, r31
/* 802296A4 002265E4  4B F9 A0 19 */	bl initCardGeneration__Q24Game13VsGameSectionFv
/* 802296A8 002265E8  48 00 00 14 */	b .L_802296BC
.L_802296AC:
/* 802296AC 002265EC  7F E3 FB 78 */	mr r3, r31
/* 802296B0 002265F0  38 9F 02 14 */	addi r4, r31, 0x238
/* 802296B4 002265F4  38 A0 00 00 */	li r5, 0
/* 802296B8 002265F8  4B F9 8D 71 */	bl createFallPikmins__Q24Game13VsGameSectionFRQ24Game13PikiContaineri
.L_802296BC:
/* 802296BC 002265FC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802296C0 00226600  38 00 00 01 */	li r0, 1
/* 802296C4 00226604  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802296C8 00226608  98 03 00 91 */	stb r0, 0x91(r3)
/* 802296CC 0022660C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802296D0 00226610  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802296D4 00226614  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 802296D8 00226618  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802296DC 0022661C  7C 08 03 A6 */	mtlr r0
/* 802296E0 00226620  38 21 00 50 */	addi r1, r1, 0x50
/* 802296E4 00226624  4E 80 00 20 */	blr 
.else
.global do_init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
do_init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 80229514 00226454  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80229518 00226458  7C 08 02 A6 */	mflr r0
/* 8022951C 0022645C  38 C0 00 00 */	li r6, 0
/* 80229520 00226460  3C E0 80 48 */	lis r7, lbl_80483550@ha
/* 80229524 00226464  90 01 00 54 */	stw r0, 0x54(r1)
/* 80229528 00226468  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8022952C 0022646C  7C 9F 23 78 */	mr r31, r4
/* 80229530 00226470  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80229534 00226474  3B C7 35 50 */	addi r30, r7, lbl_80483550@l
/* 80229538 00226478  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8022953C 0022647C  7C 7D 1B 78 */	mr r29, r3
/* 80229540 00226480  80 04 01 04 */	lwz r0, 0x104(r4)
/* 80229544 00226484  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80229548 00226488  90 05 01 90 */	stw r0, 0x190(r5)
/* 8022954C 0022648C  98 C3 00 14 */	stb r6, 0x14(r3)
/* 80229550 00226490  98 C3 00 15 */	stb r6, 0x15(r3)
/* 80229554 00226494  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80229558 00226498  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8022955C 0022649C  2C 00 00 01 */	cmpwi r0, 1
/* 80229560 002264A0  41 82 00 C4 */	beq .L_80229624
/* 80229564 002264A4  80 FF 00 C8 */	lwz r7, 0xc8(r31)
/* 80229568 002264A8  38 1E 00 18 */	addi r0, r30, 0x18
/* 8022956C 002264AC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229570 002264B0  3B C1 00 20 */	addi r30, r1, 0x20
/* 80229574 002264B4  90 01 00 08 */	stw r0, 8(r1)
/* 80229578 002264B8  7F C4 F3 78 */	mr r4, r30
/* 8022957C 002264BC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80229580 002264C0  38 A0 00 00 */	li r5, 0
/* 80229584 002264C4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80229588 002264C8  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8022958C 002264CC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80229590 002264D0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80229594 002264D4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80229598 002264D8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022959C 002264DC  90 C1 00 30 */	stw r6, 0x30(r1)
/* 802295A0 002264E0  90 C1 00 18 */	stw r6, 0x18(r1)
/* 802295A4 002264E4  90 C1 00 10 */	stw r6, 0x10(r1)
/* 802295A8 002264E8  90 C1 00 34 */	stw r6, 0x34(r1)
/* 802295AC 002264EC  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 802295B0 002264F0  90 C1 00 38 */	stw r6, 0x38(r1)
/* 802295B4 002264F4  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 802295B8 002264F8  90 01 00 18 */	stw r0, 0x18(r1)
/* 802295BC 002264FC  81 83 00 04 */	lwz r12, 4(r3)
/* 802295C0 00226500  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802295C4 00226504  7D 89 03 A6 */	mtctr r12
/* 802295C8 00226508  4E 80 04 21 */	bctrl 
/* 802295CC 0022650C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802295D0 00226510  7F C4 F3 78 */	mr r4, r30
/* 802295D4 00226514  81 83 00 04 */	lwz r12, 4(r3)
/* 802295D8 00226518  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802295DC 0022651C  7D 89 03 A6 */	mtctr r12
/* 802295E0 00226520  4E 80 04 21 */	bctrl 
/* 802295E4 00226524  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802295E8 00226528  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 802295EC 0022652C  80 63 00 AC */	lwz r3, 0xac(r3)
/* 802295F0 00226530  28 03 00 00 */	cmplwi r3, 0
/* 802295F4 00226534  41 82 00 18 */	beq .L_8022960C
/* 802295F8 00226538  81 83 00 00 */	lwz r12, 0(r3)
/* 802295FC 0022653C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80229600 00226540  7D 89 03 A6 */	mtctr r12
/* 80229604 00226544  4E 80 04 21 */	bctrl 
/* 80229608 00226548  D0 21 00 2C */	stfs f1, 0x2c(r1)
.L_8022960C:
/* 8022960C 0022654C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80229610 00226550  38 81 00 08 */	addi r4, r1, 8
/* 80229614 00226554  48 20 33 BD */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80229618 00226558  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022961C 0022655C  48 1D 41 11 */	bl startCount_Floor__Q26Screen9Game2DMgrFv
/* 80229620 00226560  48 00 00 68 */	b .L_80229688
.L_80229624:
/* 80229624 00226564  38 A0 00 01 */	li r5, 1
/* 80229628 00226568  48 00 25 D9 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022962C 0022656C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229630 00226570  38 BE 00 28 */	addi r5, r30, 0x28
/* 80229634 00226574  38 80 00 00 */	li r4, 0
/* 80229638 00226578  38 C0 00 03 */	li r6, 3
/* 8022963C 0022657C  4B F8 B9 59 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229640 00226580  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229644 00226584  38 BE 00 34 */	addi r5, r30, 0x34
/* 80229648 00226588  38 80 00 01 */	li r4, 1
/* 8022964C 0022658C  38 C0 00 06 */	li r6, 6
/* 80229650 00226590  4B F8 B9 45 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229654 00226594  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229658 00226598  38 BE 00 34 */	addi r5, r30, 0x34
/* 8022965C 0022659C  38 80 00 01 */	li r4, 1
/* 80229660 002265A0  4B F8 B9 25 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229664 002265A4  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229668 002265A8  7F E3 FB 78 */	mr r3, r31
/* 8022966C 002265AC  60 00 00 80 */	ori r0, r0, 0x80
/* 80229670 002265B0  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229674 002265B4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80229678 002265B8  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8022967C 002265BC  60 00 00 02 */	ori r0, r0, 2
/* 80229680 002265C0  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80229684 002265C4  4B F2 47 05 */	bl setCamController__Q24Game15BaseGameSectionFv
.L_80229688:
/* 80229688 002265C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022968C 002265CC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 80229690 002265D0  2C 00 00 01 */	cmpwi r0, 1
/* 80229694 002265D4  40 82 00 18 */	bne .L_802296AC
/* 80229698 002265D8  7F E3 FB 78 */	mr r3, r31
/* 8022969C 002265DC  4B F9 91 C1 */	bl createVsPikmins__Q24Game13VsGameSectionFv
/* 802296A0 002265E0  7F E3 FB 78 */	mr r3, r31
/* 802296A4 002265E4  4B F9 A0 19 */	bl initCardGeneration__Q24Game13VsGameSectionFv
/* 802296A8 002265E8  48 00 00 14 */	b .L_802296BC
.L_802296AC:
/* 802296AC 002265EC  7F E3 FB 78 */	mr r3, r31
/* 802296B0 002265F0  38 9F 02 14 */	addi r4, r31, 0x214
/* 802296B4 002265F4  38 A0 00 00 */	li r5, 0
/* 802296B8 002265F8  4B F9 8D 71 */	bl createFallPikmins__Q24Game13VsGameSectionFRQ24Game13PikiContaineri
.L_802296BC:
/* 802296BC 002265FC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802296C0 00226600  38 00 00 01 */	li r0, 1
/* 802296C4 00226604  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802296C8 00226608  98 03 00 91 */	stb r0, 0x91(r3)
/* 802296CC 0022660C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802296D0 00226610  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802296D4 00226614  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 802296D8 00226618  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802296DC 0022661C  7C 08 03 A6 */	mtlr r0
/* 802296E0 00226620  38 21 00 50 */	addi r1, r1, 0x50
/* 802296E4 00226624  4E 80 00 20 */	blr 
.endif

.global goingToCave__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
goingToCave__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 802296E8 00226628  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 802296EC 0022662C  54 03 07 FE */	clrlwi r3, r0, 0x1f
/* 802296F0 00226630  4E 80 00 20 */	blr 

.if version == 1
.global exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 802296F4 00226634  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802296F8 00226638  7C 08 02 A6 */	mflr r0
/* 802296FC 0022663C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80229700 00226640  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80229704 00226644  7C 7D 1B 78 */	mr r29, r3
/* 80229708 00226648  3C 60 80 48 */	lis r3, lbl_80483550@ha
/* 8022970C 0022664C  7C 9E 23 78 */	mr r30, r4
/* 80229710 00226650  3B E3 35 50 */	addi r31, r3, lbl_80483550@l
/* 80229714 00226654  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229718 00226658  54 00 04 21 */	rlwinm. r0, r0, 0, 0x10, 0x10
/* 8022971C 0022665C  40 82 08 C0 */	bne .L_80229FDC
/* 80229720 00226660  7F C3 F3 78 */	mr r3, r30
/* 80229724 00226664  4B F2 21 59 */	bl doUpdate__Q24Game15BaseGameSectionFv
/* 80229728 00226668  80 7E 01 80 */	lwz r3, 0x1a4(r30)
/* 8022972C 0022666C  80 03 00 04 */	lwz r0, 4(r3)
/* 80229730 00226670  2C 00 00 02 */	cmpwi r0, 2
/* 80229734 00226674  40 82 08 A8 */	bne .L_80229FDC
/* 80229738 00226678  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 8022973C 0022667C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 80229740 00226680  41 82 00 60 */	beq .L_802297A0
/* 80229744 00226684  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229748 00226688  48 1D 52 31 */	bl check_ReadyGo__Q26Screen9Game2DMgrCFv
/* 8022974C 0022668C  2C 03 00 01 */	cmpwi r3, 1
/* 80229750 00226690  41 82 00 08 */	beq .L_80229758
/* 80229754 00226694  48 00 08 88 */	b .L_80229FDC
.L_80229758:
/* 80229758 00226698  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022975C 0022669C  38 BF 00 40 */	addi r5, r31, 0x40
/* 80229760 002266A0  38 80 00 00 */	li r4, 0
/* 80229764 002266A4  38 C0 00 03 */	li r6, 3
/* 80229768 002266A8  4B F8 B8 2D */	bl setPause__Q24Game10GameSystemFbPci
/* 8022976C 002266AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229770 002266B0  38 BF 00 40 */	addi r5, r31, 0x40
/* 80229774 002266B4  38 80 00 00 */	li r4, 0
/* 80229778 002266B8  4B F8 B8 0D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022977C 002266BC  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229780 002266C0  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 80229784 002266C4  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229788 002266C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022978C 002266CC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229790 002266D0  60 00 00 02 */	ori r0, r0, 2
/* 80229794 002266D4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229798 002266D8  48 00 00 08 */	b .L_802297A0
/* 8022979C 002266DC  48 00 08 40 */	b .L_80229FDC
.L_802297A0:
/* 802297A0 002266E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802297A4 002266E4  38 80 00 00 */	li r4, 0
/* 802297A8 002266E8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802297AC 002266EC  2C 00 00 02 */	cmpwi r0, 2
/* 802297B0 002266F0  41 82 00 0C */	beq .L_802297BC
/* 802297B4 002266F4  2C 00 00 03 */	cmpwi r0, 3
/* 802297B8 002266F8  40 82 00 08 */	bne .L_802297C0
.L_802297BC:
/* 802297BC 002266FC  38 80 00 01 */	li r4, 1
.L_802297C0:
/* 802297C0 00226700  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802297C4 00226704  41 82 00 14 */	beq .L_802297D8
/* 802297C8 00226708  7F A3 EB 78 */	mr r3, r29
/* 802297CC 0022670C  7F C4 F3 78 */	mr r4, r30
/* 802297D0 00226710  48 00 08 21 */	bl checkFindKeyDemo__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
/* 802297D4 00226714  48 00 01 F0 */	b .L_802299C4
.L_802297D8:
/* 802297D8 00226718  4B F8 B7 E9 */	bl paused_soft__Q24Game10GameSystemFv
/* 802297DC 0022671C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802297E0 00226720  40 82 01 E4 */	bne .L_802299C4
/* 802297E4 00226724  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802297E8 00226728  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802297EC 0022672C  2C 00 00 01 */	cmpwi r0, 1
/* 802297F0 00226730  40 82 01 D4 */	bne .L_802299C4
/* 802297F4 00226734  C0 3E 01 F0 */	lfs f1, 0x214(r30)
/* 802297F8 00226738  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 802297FC 0022673C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229800 00226740  40 81 00 CC */	ble .L_802298CC
/* 80229804 00226744  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80229808 00226748  38 80 00 00 */	li r4, 0
/* 8022980C 0022674C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80229810 00226750  EC 01 00 28 */	fsubs f0, f1, f0
/* 80229814 00226754  D0 1E 01 F0 */	stfs f0, 0x214(r30)
/* 80229818 00226758  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022981C 0022675C  81 83 00 00 */	lwz r12, 0(r3)
/* 80229820 00226760  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80229824 00226764  7D 89 03 A6 */	mtctr r12
/* 80229828 00226768  4E 80 04 21 */	bctrl 
/* 8022982C 0022676C  28 03 00 00 */	cmplwi r3, 0
/* 80229830 00226770  41 82 00 88 */	beq .L_802298B8
/* 80229834 00226774  C0 3E 01 F0 */	lfs f1, 0x214(r30)
/* 80229838 00226778  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022983C 0022677C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229840 00226780  4C 40 13 82 */	cror 2, 0, 2
/* 80229844 00226784  40 82 00 74 */	bne .L_802298B8
/* 80229848 00226788  83 83 02 D0 */	lwz r28, 0x2d0(r3)
/* 8022984C 0022678C  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229850 00226790  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 80229854 00226794  41 82 00 18 */	beq .L_8022986C
/* 80229858 00226798  80 1C 00 04 */	lwz r0, 4(r28)
/* 8022985C 0022679C  90 1C 00 00 */	stw r0, 0(r28)
/* 80229860 002267A0  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229864 002267A4  54 00 00 7E */	clrlwi r0, r0, 1
/* 80229868 002267A8  90 1C 00 00 */	stw r0, 0(r28)
.L_8022986C:
/* 8022986C 002267AC  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229870 002267B0  54 1B 07 FF */	clrlwi. r27, r0, 0x1f
/* 80229874 002267B4  41 82 00 24 */	beq .L_80229898
/* 80229878 002267B8  60 00 00 01 */	ori r0, r0, 1
/* 8022987C 002267BC  7F 83 E3 78 */	mr r3, r28
/* 80229880 002267C0  90 1C 00 00 */	stw r0, 0(r28)
/* 80229884 002267C4  48 18 E6 99 */	bl updateHamon___Q23efx11TNaviEffectFv
/* 80229888 002267C8  28 1B 00 00 */	cmplwi r27, 0
/* 8022988C 002267CC  40 82 00 0C */	bne .L_80229898
/* 80229890 002267D0  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80229894 002267D4  48 18 E0 01 */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_80229898:
/* 80229898 002267D8  80 7C 00 00 */	lwz r3, 0(r28)
/* 8022989C 002267DC  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 802298A0 002267E0  41 82 00 18 */	beq .L_802298B8
/* 802298A4 002267E4  60 60 00 02 */	ori r0, r3, 2
/* 802298A8 002267E8  7F 83 E3 78 */	mr r3, r28
/* 802298AC 002267EC  90 1C 00 00 */	stw r0, 0(r28)
/* 802298B0 002267F0  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 802298B4 002267F4  48 18 E8 49 */	bl createLight___Q23efx11TNaviEffectFPA4_f
.L_802298B8:
/* 802298B8 002267F8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802298BC 002267FC  38 80 00 01 */	li r4, 1
/* 802298C0 00226800  38 A0 00 00 */	li r5, 0
/* 802298C4 00226804  4B F3 5D 31 */	bl setVsXlu__Q24Game7PikiMgrFib
/* 802298C8 00226808  48 00 00 14 */	b .L_802298DC
.L_802298CC:
/* 802298CC 0022680C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802298D0 00226810  38 80 00 01 */	li r4, 1
/* 802298D4 00226814  38 A0 00 01 */	li r5, 1
/* 802298D8 00226818  4B F3 5D 1D */	bl setVsXlu__Q24Game7PikiMgrFib
.L_802298DC:
/* 802298DC 0022681C  C0 3E 01 F4 */	lfs f1, 0x218(r30)
/* 802298E0 00226820  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 802298E4 00226824  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802298E8 00226828  40 81 00 CC */	ble .L_802299B4
/* 802298EC 0022682C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802298F0 00226830  38 80 00 01 */	li r4, 1
/* 802298F4 00226834  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802298F8 00226838  EC 01 00 28 */	fsubs f0, f1, f0
/* 802298FC 0022683C  D0 1E 01 F4 */	stfs f0, 0x218(r30)
/* 80229900 00226840  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80229904 00226844  81 83 00 00 */	lwz r12, 0(r3)
/* 80229908 00226848  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022990C 0022684C  7D 89 03 A6 */	mtctr r12
/* 80229910 00226850  4E 80 04 21 */	bctrl 
/* 80229914 00226854  28 03 00 00 */	cmplwi r3, 0
/* 80229918 00226858  41 82 00 88 */	beq .L_802299A0
/* 8022991C 0022685C  C0 3E 01 F4 */	lfs f1, 0x218(r30)
/* 80229920 00226860  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229924 00226864  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229928 00226868  4C 40 13 82 */	cror 2, 0, 2
/* 8022992C 0022686C  40 82 00 74 */	bne .L_802299A0
/* 80229930 00226870  83 83 02 D0 */	lwz r28, 0x2d0(r3)
/* 80229934 00226874  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229938 00226878  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 8022993C 0022687C  41 82 00 18 */	beq .L_80229954
/* 80229940 00226880  80 1C 00 04 */	lwz r0, 4(r28)
/* 80229944 00226884  90 1C 00 00 */	stw r0, 0(r28)
/* 80229948 00226888  80 1C 00 00 */	lwz r0, 0(r28)
/* 8022994C 0022688C  54 00 00 7E */	clrlwi r0, r0, 1
/* 80229950 00226890  90 1C 00 00 */	stw r0, 0(r28)
.L_80229954:
/* 80229954 00226894  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229958 00226898  54 1B 07 FF */	clrlwi. r27, r0, 0x1f
/* 8022995C 0022689C  41 82 00 24 */	beq .L_80229980
/* 80229960 002268A0  60 00 00 01 */	ori r0, r0, 1
/* 80229964 002268A4  7F 83 E3 78 */	mr r3, r28
/* 80229968 002268A8  90 1C 00 00 */	stw r0, 0(r28)
/* 8022996C 002268AC  48 18 E5 B1 */	bl updateHamon___Q23efx11TNaviEffectFv
/* 80229970 002268B0  28 1B 00 00 */	cmplwi r27, 0
/* 80229974 002268B4  40 82 00 0C */	bne .L_80229980
/* 80229978 002268B8  38 7C 00 1C */	addi r3, r28, 0x1c
/* 8022997C 002268BC  48 18 DF 19 */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_80229980:
/* 80229980 002268C0  80 7C 00 00 */	lwz r3, 0(r28)
/* 80229984 002268C4  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80229988 002268C8  41 82 00 18 */	beq .L_802299A0
/* 8022998C 002268CC  60 60 00 02 */	ori r0, r3, 2
/* 80229990 002268D0  7F 83 E3 78 */	mr r3, r28
/* 80229994 002268D4  90 1C 00 00 */	stw r0, 0(r28)
/* 80229998 002268D8  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 8022999C 002268DC  48 18 E7 61 */	bl createLight___Q23efx11TNaviEffectFPA4_f
.L_802299A0:
/* 802299A0 002268E0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802299A4 002268E4  38 80 00 00 */	li r4, 0
/* 802299A8 002268E8  38 A0 00 00 */	li r5, 0
/* 802299AC 002268EC  4B F3 5C 49 */	bl setVsXlu__Q24Game7PikiMgrFib
/* 802299B0 002268F0  48 00 00 14 */	b .L_802299C4
.L_802299B4:
/* 802299B4 002268F4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802299B8 002268F8  38 80 00 00 */	li r4, 0
/* 802299BC 002268FC  38 A0 00 01 */	li r5, 1
/* 802299C0 00226900  4B F3 5C 35 */	bl setVsXlu__Q24Game7PikiMgrFib
.L_802299C4:
/* 802299C4 00226904  7F A3 EB 78 */	mr r3, r29
/* 802299C8 00226908  7F C4 F3 78 */	mr r4, r30
/* 802299CC 0022690C  48 00 0F E9 */	bl checkPikminZero__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
/* 802299D0 00226910  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802299D4 00226914  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802299D8 00226918  2C 00 00 01 */	cmpwi r0, 1
/* 802299DC 0022691C  40 82 01 C0 */	bne .L_80229B9C
/* 802299E0 00226920  7F C3 F3 78 */	mr r3, r30
/* 802299E4 00226924  4B F9 A6 C9 */	bl calcVsScores__Q24Game13VsGameSectionFv
/* 802299E8 00226928  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802299EC 0022692C  4B F8 B5 DD */	bl paused__Q24Game10GameSystemFv
/* 802299F0 00226930  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802299F4 00226934  40 82 00 14 */	bne .L_80229A08
/* 802299F8 00226938  7F C3 F3 78 */	mr r3, r30
/* 802299FC 0022693C  4B F9 9C D5 */	bl updateCardGeneration__Q24Game13VsGameSectionFv
/* 80229A00 00226940  80 7E 03 30 */	lwz r3, 0x354(r30)
/* 80229A04 00226944  48 00 BF 61 */	bl update__Q34Game6VsGame7CardMgrFv
.L_80229A08:
/* 80229A08 00226948  A0 7D 00 14 */	lhz r3, 0x14(r29)
/* 80229A0C 0022694C  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80229A10 00226950  41 82 00 F8 */	beq .L_80229B08
/* 80229A14 00226954  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229A18 00226958  48 1D 50 99 */	bl check_WinLoseReason__Q26Screen9Game2DMgrCFv
/* 80229A1C 0022695C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229A20 00226960  41 82 05 BC */	beq .L_80229FDC
/* 80229A24 00226964  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229A28 00226968  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 80229A2C 0022696C  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229A30 00226970  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229A34 00226974  60 00 02 00 */	ori r0, r0, 0x200
/* 80229A38 00226978  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229A3C 0022697C  88 1D 00 25 */	lbz r0, 0x25(r29)
/* 80229A40 00226980  88 7D 00 26 */	lbz r3, 0x26(r29)
/* 80229A44 00226984  28 00 00 00 */	cmplwi r0, 0
/* 80229A48 00226988  40 82 00 20 */	bne .L_80229A68
/* 80229A4C 0022698C  28 03 00 00 */	cmplwi r3, 0
/* 80229A50 00226990  40 82 00 18 */	bne .L_80229A68
/* 80229A54 00226994  80 6D 94 18 */	lwz r3, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A58 00226998  38 C0 00 03 */	li r6, 3
/* 80229A5C 0022699C  38 03 00 01 */	addi r0, r3, 1
/* 80229A60 002269A0  90 0D 94 18 */	stw r0, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A64 002269A4  48 00 00 64 */	b .L_80229AC8
.L_80229A68:
/* 80229A68 002269A8  28 00 00 00 */	cmplwi r0, 0
/* 80229A6C 002269AC  40 82 00 20 */	bne .L_80229A8C
/* 80229A70 002269B0  80 6D 94 10 */	lwz r3, mRedWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A74 002269B4  38 00 00 00 */	li r0, 0
/* 80229A78 002269B8  38 C0 00 01 */	li r6, 1
/* 80229A7C 002269BC  38 63 00 01 */	addi r3, r3, 1
/* 80229A80 002269C0  90 6D 94 10 */	stw r3, mRedWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A84 002269C4  90 1E 03 4C */	stw r0, 0x370(r30)
/* 80229A88 002269C8  48 00 00 40 */	b .L_80229AC8
.L_80229A8C:
/* 80229A8C 002269CC  28 03 00 00 */	cmplwi r3, 0
/* 80229A90 002269D0  40 82 00 20 */	bne .L_80229AB0
/* 80229A94 002269D4  80 6D 94 14 */	lwz r3, mBlueWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A98 002269D8  38 00 00 01 */	li r0, 1
/* 80229A9C 002269DC  38 C0 00 02 */	li r6, 2
/* 80229AA0 002269E0  38 63 00 01 */	addi r3, r3, 1
/* 80229AA4 002269E4  90 6D 94 14 */	stw r3, mBlueWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229AA8 002269E8  90 1E 03 4C */	stw r0, 0x370(r30)
/* 80229AAC 002269EC  48 00 00 1C */	b .L_80229AC8
.L_80229AB0:
/* 80229AB0 002269F0  80 6D 94 18 */	lwz r3, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229AB4 002269F4  38 00 FF FF */	li r0, -1
/* 80229AB8 002269F8  38 C0 00 03 */	li r6, 3
/* 80229ABC 002269FC  38 63 00 01 */	addi r3, r3, 1
/* 80229AC0 00226A00  90 6D 94 18 */	stw r3, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229AC4 00226A04  90 1E 03 4C */	stw r0, 0x370(r30)
.L_80229AC8:
/* 80229AC8 00226A08  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80229ACC 00226A0C  3C 60 80 4C */	lis r3, __vt__Q32kh6Screen11DispWinLose@ha
/* 80229AD0 00226A10  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80229AD4 00226A14  38 80 00 00 */	li r4, 0
/* 80229AD8 00226A18  90 01 00 20 */	stw r0, 0x20(r1)
/* 80229ADC 00226A1C  38 A3 0F 5C */	addi r5, r3, __vt__Q32kh6Screen11DispWinLose@l
/* 80229AE0 00226A20  38 00 00 01 */	li r0, 1
/* 80229AE4 00226A24  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229AE8 00226A28  90 81 00 24 */	stw r4, 0x24(r1)
/* 80229AEC 00226A2C  38 81 00 20 */	addi r4, r1, 0x20
/* 80229AF0 00226A30  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80229AF4 00226A34  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80229AF8 00226A38  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80229AFC 00226A3C  48 1D 50 1D */	bl open_WinLose__Q26Screen9Game2DMgrFRQ32kh6Screen11DispWinLose
/* 80229B00 00226A40  48 00 04 DC */	b .L_80229FDC
/* 80229B04 00226A44  48 00 04 D8 */	b .L_80229FDC
.L_80229B08:
/* 80229B08 00226A48  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80229B0C 00226A4C  41 82 00 48 */	beq .L_80229B54
/* 80229B10 00226A50  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229B14 00226A54  48 1D 50 AD */	bl check_WinLose__Q26Screen9Game2DMgrCFv
/* 80229B18 00226A58  2C 03 00 03 */	cmpwi r3, 3
/* 80229B1C 00226A5C  41 82 00 0C */	beq .L_80229B28
/* 80229B20 00226A60  40 80 04 BC */	bge .L_80229FDC
/* 80229B24 00226A64  48 00 04 B8 */	b .L_80229FDC
.L_80229B28:
/* 80229B28 00226A68  38 00 00 01 */	li r0, 1
/* 80229B2C 00226A6C  7F A3 EB 78 */	mr r3, r29
/* 80229B30 00226A70  98 01 00 0C */	stb r0, 0xc(r1)
/* 80229B34 00226A74  7F C4 F3 78 */	mr r4, r30
/* 80229B38 00226A78  38 C1 00 0C */	addi r6, r1, 0xc
/* 80229B3C 00226A7C  38 A0 00 00 */	li r5, 0
/* 80229B40 00226A80  81 9D 00 00 */	lwz r12, 0(r29)
/* 80229B44 00226A84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80229B48 00226A88  7D 89 03 A6 */	mtctr r12
/* 80229B4C 00226A8C  4E 80 04 21 */	bctrl 
/* 80229B50 00226A90  48 00 04 8C */	b .L_80229FDC
.L_80229B54:
/* 80229B54 00226A94  88 1D 00 16 */	lbz r0, 0x16(r29)
/* 80229B58 00226A98  28 00 00 00 */	cmplwi r0, 0
/* 80229B5C 00226A9C  40 82 02 20 */	bne .L_80229D7C
/* 80229B60 00226AA0  38 60 00 01 */	li r3, 1
/* 80229B64 00226AA4  4B FA 73 D9 */	bl getAllPikmins__Q24Game8GameStatFi
/* 80229B68 00226AA8  2C 03 00 00 */	cmpwi r3, 0
/* 80229B6C 00226AAC  40 82 00 10 */	bne .L_80229B7C
/* 80229B70 00226AB0  88 1D 00 25 */	lbz r0, 0x25(r29)
/* 80229B74 00226AB4  60 00 00 02 */	ori r0, r0, 2
/* 80229B78 00226AB8  98 1D 00 25 */	stb r0, 0x25(r29)
.L_80229B7C:
/* 80229B7C 00226ABC  38 60 00 00 */	li r3, 0
/* 80229B80 00226AC0  4B FA 73 BD */	bl getAllPikmins__Q24Game8GameStatFi
/* 80229B84 00226AC4  2C 03 00 00 */	cmpwi r3, 0
/* 80229B88 00226AC8  40 82 01 F4 */	bne .L_80229D7C
/* 80229B8C 00226ACC  88 1D 00 26 */	lbz r0, 0x26(r29)
/* 80229B90 00226AD0  60 00 00 02 */	ori r0, r0, 2
/* 80229B94 00226AD4  98 1D 00 26 */	stb r0, 0x26(r29)
/* 80229B98 00226AD8  48 00 01 E4 */	b .L_80229D7C
.L_80229B9C:
/* 80229B9C 00226ADC  48 22 F1 F5 */	bl PSMGetPikminNumD__Fv
/* 80229BA0 00226AE0  7C 60 1B 78 */	mr r0, r3
/* 80229BA4 00226AE4  38 60 FF FF */	li r3, -1
/* 80229BA8 00226AE8  7C 1B 03 78 */	mr r27, r0
/* 80229BAC 00226AEC  4B FA 72 65 */	bl getMapPikmins_exclude_Me__Q24Game8GameStatFi
/* 80229BB0 00226AF0  2C 03 00 0A */	cmpwi r3, 0xa
/* 80229BB4 00226AF4  40 80 00 30 */	bge .L_80229BE4
/* 80229BB8 00226AF8  80 0D 96 18 */	lwz r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 80229BBC 00226AFC  2C 00 00 00 */	cmpwi r0, 0
/* 80229BC0 00226B00  40 81 00 24 */	ble .L_80229BE4
/* 80229BC4 00226B04  28 1B 00 00 */	cmplwi r27, 0
/* 80229BC8 00226B08  41 82 00 38 */	beq .L_80229C00
/* 80229BCC 00226B0C  7F 63 DB 78 */	mr r3, r27
/* 80229BD0 00226B10  81 9B 00 00 */	lwz r12, 0(r27)
/* 80229BD4 00226B14  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80229BD8 00226B18  7D 89 03 A6 */	mtctr r12
/* 80229BDC 00226B1C  4E 80 04 21 */	bctrl 
/* 80229BE0 00226B20  48 00 00 20 */	b .L_80229C00
.L_80229BE4:
/* 80229BE4 00226B24  28 1B 00 00 */	cmplwi r27, 0
/* 80229BE8 00226B28  41 82 00 18 */	beq .L_80229C00
/* 80229BEC 00226B2C  7F 63 DB 78 */	mr r3, r27
/* 80229BF0 00226B30  81 9B 00 00 */	lwz r12, 0(r27)
/* 80229BF4 00226B34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80229BF8 00226B38  7D 89 03 A6 */	mtctr r12
/* 80229BFC 00226B3C  4E 80 04 21 */	bctrl 
.L_80229C00:
/* 80229C00 00226B40  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229C04 00226B44  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80229C08 00226B48  41 82 00 58 */	beq .L_80229C60
/* 80229C0C 00226B4C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229C10 00226B50  48 1D 4F B1 */	bl check_WinLose__Q26Screen9Game2DMgrCFv
/* 80229C14 00226B54  2C 03 00 03 */	cmpwi r3, 3
/* 80229C18 00226B58  41 82 00 0C */	beq .L_80229C24
/* 80229C1C 00226B5C  40 80 03 C0 */	bge .L_80229FDC
/* 80229C20 00226B60  48 00 03 BC */	b .L_80229FDC
.L_80229C24:
/* 80229C24 00226B64  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 80229C28 00226B68  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 80229C2C 00226B6C  4B FA 74 45 */	bl clear__Q34Game8GameStat11PikiCounterFv
/* 80229C30 00226B70  38 00 00 00 */	li r0, 0
/* 80229C34 00226B74  38 C1 00 08 */	addi r6, r1, 8
/* 80229C38 00226B78  98 01 00 08 */	stb r0, 8(r1)
/* 80229C3C 00226B7C  7F A3 EB 78 */	mr r3, r29
/* 80229C40 00226B80  7F C4 F3 78 */	mr r4, r30
/* 80229C44 00226B84  38 A0 00 04 */	li r5, 4
/* 80229C48 00226B88  98 01 00 08 */	stb r0, 8(r1)
/* 80229C4C 00226B8C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80229C50 00226B90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80229C54 00226B94  7D 89 03 A6 */	mtctr r12
/* 80229C58 00226B98  4E 80 04 21 */	bctrl 
/* 80229C5C 00226B9C  48 00 03 80 */	b .L_80229FDC
.L_80229C60:
/* 80229C60 00226BA0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229C64 00226BA4  4B F8 B3 65 */	bl paused__Q24Game10GameSystemFv
/* 80229C68 00226BA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229C6C 00226BAC  40 82 01 10 */	bne .L_80229D7C
/* 80229C70 00226BB0  C0 3E 03 C0 */	lfs f1, 0x3e4(r30)
/* 80229C74 00226BB4  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229C78 00226BB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229C7C 00226BBC  40 81 01 00 */	ble .L_80229D7C
/* 80229C80 00226BC0  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229C84 00226BC4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80229C88 00226BC8  41 82 00 F4 */	beq .L_80229D7C
/* 80229C8C 00226BCC  88 1E 01 F8 */	lbz r0, 0x21c(r30)
/* 80229C90 00226BD0  28 00 00 00 */	cmplwi r0, 0
/* 80229C94 00226BD4  40 82 00 E8 */	bne .L_80229D7C
/* 80229C98 00226BD8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229C9C 00226BDC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229CA0 00226BE0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80229CA4 00226BE4  41 82 00 D8 */	beq .L_80229D7C
/* 80229CA8 00226BE8  4B F8 B3 19 */	bl paused_soft__Q24Game10GameSystemFv
/* 80229CAC 00226BEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229CB0 00226BF0  40 82 00 CC */	bne .L_80229D7C
/* 80229CB4 00226BF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80229CB8 00226BF8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80229CBC 00226BFC  2C 00 00 00 */	cmpwi r0, 0
/* 80229CC0 00226C00  40 82 00 BC */	bne .L_80229D7C
/* 80229CC4 00226C04  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80229CC8 00226C08  C0 62 BF 18 */	lfs f3, lbl_8051A278@sda21(r2)
/* 80229CCC 00226C0C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80229CD0 00226C10  C0 3E 03 C0 */	lfs f1, 0x3e4(r30)
/* 80229CD4 00226C14  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229CD8 00226C18  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 80229CDC 00226C1C  D0 3E 03 C0 */	stfs f1, 0x3e4(r30)
/* 80229CE0 00226C20  C0 3E 03 C0 */	lfs f1, 0x3e4(r30)
/* 80229CE4 00226C24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229CE8 00226C28  4C 40 13 82 */	cror 2, 0, 2
/* 80229CEC 00226C2C  40 82 00 90 */	bne .L_80229D7C
/* 80229CF0 00226C30  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229CF4 00226C34  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80229CF8 00226C38  40 82 00 84 */	bne .L_80229D7C
/* 80229CFC 00226C3C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229D00 00226C40  38 80 00 01 */	li r4, 1
/* 80229D04 00226C44  38 A2 BF 1C */	addi r5, r2, lbl_8051A27C@sda21
/* 80229D08 00226C48  38 C0 00 03 */	li r6, 3
/* 80229D0C 00226C4C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229D10 00226C50  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229D14 00226C54  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229D18 00226C58  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229D1C 00226C5C  4B F8 B2 79 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229D20 00226C60  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229D24 00226C64  38 80 00 01 */	li r4, 1
/* 80229D28 00226C68  38 A2 BF 1C */	addi r5, r2, lbl_8051A27C@sda21
/* 80229D2C 00226C6C  4B F8 B2 59 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229D30 00226C70  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229D34 00226C74  38 60 00 00 */	li r3, 0
/* 80229D38 00226C78  60 00 00 08 */	ori r0, r0, 8
/* 80229D3C 00226C7C  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229D40 00226C80  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80229D44 00226C84  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80229D48 00226C88  2C 00 00 01 */	cmpwi r0, 1
/* 80229D4C 00226C8C  41 82 00 0C */	beq .L_80229D58
/* 80229D50 00226C90  2C 00 00 03 */	cmpwi r0, 3
/* 80229D54 00226C94  40 82 00 08 */	bne .L_80229D5C
.L_80229D58:
/* 80229D58 00226C98  38 60 00 01 */	li r3, 1
.L_80229D5C:
/* 80229D5C 00226C9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229D60 00226CA0  40 82 00 10 */	bne .L_80229D70
/* 80229D64 00226CA4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229D68 00226CA8  48 1D 4E E9 */	bl open_TimeUp1P__Q26Screen9Game2DMgrFv
/* 80229D6C 00226CAC  48 00 02 70 */	b .L_80229FDC
.L_80229D70:
/* 80229D70 00226CB0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229D74 00226CB4  48 1D 4F B1 */	bl open_TimeUp2P__Q26Screen9Game2DMgrFv
/* 80229D78 00226CB8  48 00 02 64 */	b .L_80229FDC
.L_80229D7C:
/* 80229D7C 00226CBC  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229D80 00226CC0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80229D84 00226CC4  40 82 00 E4 */	bne .L_80229E68
/* 80229D88 00226CC8  80 1E 01 FC */	lwz r0, 0x220(r30)
/* 80229D8C 00226CCC  28 00 00 00 */	cmplwi r0, 0
/* 80229D90 00226CD0  41 82 00 D8 */	beq .L_80229E68
/* 80229D94 00226CD4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229D98 00226CD8  48 1D 43 A5 */	bl check_CaveMoreMenu__Q26Screen9Game2DMgrFv
/* 80229D9C 00226CDC  2C 03 00 02 */	cmpwi r3, 2
/* 80229DA0 00226CE0  41 82 00 80 */	beq .L_80229E20
/* 80229DA4 00226CE4  40 80 00 14 */	bge .L_80229DB8
/* 80229DA8 00226CE8  2C 03 00 00 */	cmpwi r3, 0
/* 80229DAC 00226CEC  41 82 00 BC */	beq .L_80229E68
/* 80229DB0 00226CF0  40 80 00 14 */	bge .L_80229DC4
/* 80229DB4 00226CF4  48 00 00 B4 */	b .L_80229E68
.L_80229DB8:
/* 80229DB8 00226CF8  2C 03 00 04 */	cmpwi r3, 4
/* 80229DBC 00226CFC  40 80 00 AC */	bge .L_80229E68
/* 80229DC0 00226D00  48 00 00 88 */	b .L_80229E48
.L_80229DC4:
/* 80229DC4 00226D04  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229DC8 00226D08  38 BF 00 4C */	addi r5, r31, 0x4c
/* 80229DCC 00226D0C  38 80 00 00 */	li r4, 0
/* 80229DD0 00226D10  38 C0 00 03 */	li r6, 3
/* 80229DD4 00226D14  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229DD8 00226D18  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229DDC 00226D1C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229DE0 00226D20  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229DE4 00226D24  4B F8 B1 B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229DE8 00226D28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229DEC 00226D2C  38 BF 00 4C */	addi r5, r31, 0x4c
/* 80229DF0 00226D30  38 80 00 00 */	li r4, 0
/* 80229DF4 00226D34  4B F8 B1 91 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229DF8 00226D38  7F C3 F3 78 */	mr r3, r30
/* 80229DFC 00226D3C  80 9E 01 FC */	lwz r4, 0x220(r30)
/* 80229E00 00226D40  81 9E 00 00 */	lwz r12, 0(r30)
/* 80229E04 00226D44  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80229E08 00226D48  7D 89 03 A6 */	mtctr r12
/* 80229E0C 00226D4C  4E 80 04 21 */	bctrl 
/* 80229E10 00226D50  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229E14 00226D54  60 00 00 01 */	ori r0, r0, 1
/* 80229E18 00226D58  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229E1C 00226D5C  48 00 01 C0 */	b .L_80229FDC
.L_80229E20:
/* 80229E20 00226D60  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E24 00226D64  38 BF 00 58 */	addi r5, r31, 0x58
/* 80229E28 00226D68  38 80 00 00 */	li r4, 0
/* 80229E2C 00226D6C  38 C0 00 03 */	li r6, 3
/* 80229E30 00226D70  4B F8 B1 65 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229E34 00226D74  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E38 00226D78  38 BF 00 58 */	addi r5, r31, 0x58
/* 80229E3C 00226D7C  38 80 00 00 */	li r4, 0
/* 80229E40 00226D80  4B F8 B1 45 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229E44 00226D84  48 00 00 24 */	b .L_80229E68
.L_80229E48:
/* 80229E48 00226D88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E4C 00226D8C  38 BF 00 64 */	addi r5, r31, 0x64
/* 80229E50 00226D90  38 80 00 00 */	li r4, 0
/* 80229E54 00226D94  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229E58 00226D98  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229E5C 00226D9C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229E60 00226DA0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E64 00226DA4  4B F8 B1 21 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_80229E68:
/* 80229E68 00226DA8  88 1E 01 F8 */	lbz r0, 0x21c(r30)
/* 80229E6C 00226DAC  28 00 00 00 */	cmplwi r0, 0
/* 80229E70 00226DB0  41 82 00 14 */	beq .L_80229E84
/* 80229E74 00226DB4  7F C3 F3 78 */	mr r3, r30
/* 80229E78 00226DB8  4B F9 81 C9 */	bl updateCaveMenus__Q24Game13VsGameSectionFv
/* 80229E7C 00226DBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229E80 00226DC0  41 82 01 5C */	beq .L_80229FDC
.L_80229E84:
/* 80229E84 00226DC4  7F A3 EB 78 */	mr r3, r29
/* 80229E88 00226DC8  7F C4 F3 78 */	mr r4, r30
/* 80229E8C 00226DCC  48 00 20 B1 */	bl update_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
/* 80229E90 00226DD0  88 1D 00 16 */	lbz r0, 0x16(r29)
/* 80229E94 00226DD4  28 00 00 00 */	cmplwi r0, 0
/* 80229E98 00226DD8  40 82 00 10 */	bne .L_80229EA8
/* 80229E9C 00226DDC  7F A3 EB 78 */	mr r3, r29
/* 80229EA0 00226DE0  7F C4 F3 78 */	mr r4, r30
/* 80229EA4 00226DE4  48 00 04 D5 */	bl checkSMenu__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
.L_80229EA8:
/* 80229EA8 00226DE8  80 ED 93 E8 */	lwz r7, gameSystem__4Game@sda21(r13)
/* 80229EAC 00226DEC  80 07 00 44 */	lwz r0, 0x44(r7)
/* 80229EB0 00226DF0  2C 00 00 01 */	cmpwi r0, 1
/* 80229EB4 00226DF4  40 82 01 28 */	bne .L_80229FDC
/* 80229EB8 00226DF8  A0 7D 00 14 */	lhz r3, 0x14(r29)
/* 80229EBC 00226DFC  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80229EC0 00226E00  40 82 01 1C */	bne .L_80229FDC
/* 80229EC4 00226E04  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80229EC8 00226E08  40 82 01 14 */	bne .L_80229FDC
/* 80229ECC 00226E0C  88 1D 00 16 */	lbz r0, 0x16(r29)
/* 80229ED0 00226E10  28 00 00 01 */	cmplwi r0, 1
/* 80229ED4 00226E14  41 82 01 08 */	beq .L_80229FDC
/* 80229ED8 00226E18  88 1D 00 25 */	lbz r0, 0x25(r29)
/* 80229EDC 00226E1C  28 00 00 00 */	cmplwi r0, 0
/* 80229EE0 00226E20  40 82 00 10 */	bne .L_80229EF0
/* 80229EE4 00226E24  88 1D 00 26 */	lbz r0, 0x26(r29)
/* 80229EE8 00226E28  28 00 00 00 */	cmplwi r0, 0
/* 80229EEC 00226E2C  41 82 00 F0 */	beq .L_80229FDC
.L_80229EF0:
/* 80229EF0 00226E30  88 07 00 3C */	lbz r0, 0x3c(r7)
/* 80229EF4 00226E34  38 80 00 01 */	li r4, 1
/* 80229EF8 00226E38  38 A0 00 00 */	li r5, 0
/* 80229EFC 00226E3C  38 C0 00 03 */	li r6, 3
/* 80229F00 00226E40  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229F04 00226E44  98 07 00 3C */	stb r0, 0x3c(r7)
/* 80229F08 00226E48  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229F0C 00226E4C  60 00 01 00 */	ori r0, r0, 0x100
/* 80229F10 00226E50  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229F14 00226E54  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229F18 00226E58  4B F8 B0 7D */	bl setPause__Q24Game10GameSystemFbPci
/* 80229F1C 00226E5C  88 7D 00 25 */	lbz r3, 0x25(r29)
/* 80229F20 00226E60  38 C0 FF FF */	li r6, -1
/* 80229F24 00226E64  38 E0 FF FF */	li r7, -1
/* 80229F28 00226E68  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80229F2C 00226E6C  41 82 00 0C */	beq .L_80229F38
/* 80229F30 00226E70  38 E0 00 03 */	li r7, 3
/* 80229F34 00226E74  48 00 00 20 */	b .L_80229F54
.L_80229F38:
/* 80229F38 00226E78  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80229F3C 00226E7C  41 82 00 0C */	beq .L_80229F48
/* 80229F40 00226E80  38 C0 00 01 */	li r6, 1
/* 80229F44 00226E84  48 00 00 10 */	b .L_80229F54
.L_80229F48:
/* 80229F48 00226E88  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80229F4C 00226E8C  41 82 00 08 */	beq .L_80229F54
/* 80229F50 00226E90  38 C0 00 02 */	li r6, 2
.L_80229F54:
/* 80229F54 00226E94  2C 07 00 03 */	cmpwi r7, 3
/* 80229F58 00226E98  41 82 00 34 */	beq .L_80229F8C
/* 80229F5C 00226E9C  88 7D 00 26 */	lbz r3, 0x26(r29)
/* 80229F60 00226EA0  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80229F64 00226EA4  41 82 00 0C */	beq .L_80229F70
/* 80229F68 00226EA8  38 C0 00 03 */	li r6, 3
/* 80229F6C 00226EAC  48 00 00 20 */	b .L_80229F8C
.L_80229F70:
/* 80229F70 00226EB0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80229F74 00226EB4  41 82 00 0C */	beq .L_80229F80
/* 80229F78 00226EB8  38 E0 00 01 */	li r7, 1
/* 80229F7C 00226EBC  48 00 00 10 */	b .L_80229F8C
.L_80229F80:
/* 80229F80 00226EC0  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80229F84 00226EC4  41 82 00 08 */	beq .L_80229F8C
/* 80229F88 00226EC8  38 E0 00 02 */	li r7, 2
.L_80229F8C:
/* 80229F8C 00226ECC  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80229F90 00226ED0  3C 60 80 4C */	lis r3, __vt__Q32kh6Screen17DispWinLoseReason@ha
/* 80229F94 00226ED4  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80229F98 00226ED8  38 A0 00 00 */	li r5, 0
/* 80229F9C 00226EDC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80229FA0 00226EE0  38 03 0F 44 */	addi r0, r3, __vt__Q32kh6Screen17DispWinLoseReason@l
/* 80229FA4 00226EE4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229FA8 00226EE8  38 81 00 10 */	addi r4, r1, 0x10
/* 80229FAC 00226EEC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80229FB0 00226EF0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80229FB4 00226EF4  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80229FB8 00226EF8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80229FBC 00226EFC  48 1D 4A 4D */	bl open_WinLoseReason__Q26Screen9Game2DMgrFRQ32kh6Screen17DispWinLoseReason
/* 80229FC0 00226F00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229FC4 00226F04  40 82 00 18 */	bne .L_80229FDC
/* 80229FC8 00226F08  38 7F 00 70 */	addi r3, r31, 0x70
/* 80229FCC 00226F0C  38 BF 00 80 */	addi r5, r31, 0x80
/* 80229FD0 00226F10  38 80 02 01 */	li r4, 0x201
/* 80229FD4 00226F14  4C C6 31 82 */	crclr 6
/* 80229FD8 00226F18  4B E0 06 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80229FDC:
/* 80229FDC 00226F1C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 80229FE0 00226F20  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80229FE4 00226F24  7C 08 03 A6 */	mtlr r0
/* 80229FE8 00226F28  38 21 00 50 */	addi r1, r1, 0x50
/* 80229FEC 00226F2C  4E 80 00 20 */	blr 
.else
.global exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 802296F4 00226634  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802296F8 00226638  7C 08 02 A6 */	mflr r0
/* 802296FC 0022663C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80229700 00226640  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 80229704 00226644  7C 7D 1B 78 */	mr r29, r3
/* 80229708 00226648  3C 60 80 48 */	lis r3, lbl_80483550@ha
/* 8022970C 0022664C  7C 9E 23 78 */	mr r30, r4
/* 80229710 00226650  3B E3 35 50 */	addi r31, r3, lbl_80483550@l
/* 80229714 00226654  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229718 00226658  54 00 04 21 */	rlwinm. r0, r0, 0, 0x10, 0x10
/* 8022971C 0022665C  40 82 08 C0 */	bne .L_80229FDC
/* 80229720 00226660  7F C3 F3 78 */	mr r3, r30
/* 80229724 00226664  4B F2 21 59 */	bl doUpdate__Q24Game15BaseGameSectionFv
/* 80229728 00226668  80 7E 01 80 */	lwz r3, 0x180(r30)
/* 8022972C 0022666C  80 03 00 04 */	lwz r0, 4(r3)
/* 80229730 00226670  2C 00 00 02 */	cmpwi r0, 2
/* 80229734 00226674  40 82 08 A8 */	bne .L_80229FDC
/* 80229738 00226678  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 8022973C 0022667C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 80229740 00226680  41 82 00 60 */	beq .L_802297A0
/* 80229744 00226684  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229748 00226688  48 1D 52 31 */	bl check_ReadyGo__Q26Screen9Game2DMgrCFv
/* 8022974C 0022668C  2C 03 00 01 */	cmpwi r3, 1
/* 80229750 00226690  41 82 00 08 */	beq .L_80229758
/* 80229754 00226694  48 00 08 88 */	b .L_80229FDC
.L_80229758:
/* 80229758 00226698  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022975C 0022669C  38 BF 00 40 */	addi r5, r31, 0x40
/* 80229760 002266A0  38 80 00 00 */	li r4, 0
/* 80229764 002266A4  38 C0 00 03 */	li r6, 3
/* 80229768 002266A8  4B F8 B8 2D */	bl setPause__Q24Game10GameSystemFbPci
/* 8022976C 002266AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229770 002266B0  38 BF 00 40 */	addi r5, r31, 0x40
/* 80229774 002266B4  38 80 00 00 */	li r4, 0
/* 80229778 002266B8  4B F8 B8 0D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022977C 002266BC  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229780 002266C0  54 00 06 6E */	rlwinm r0, r0, 0, 0x19, 0x17
/* 80229784 002266C4  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229788 002266C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022978C 002266CC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229790 002266D0  60 00 00 02 */	ori r0, r0, 2
/* 80229794 002266D4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229798 002266D8  48 00 00 08 */	b .L_802297A0
/* 8022979C 002266DC  48 00 08 40 */	b .L_80229FDC
.L_802297A0:
/* 802297A0 002266E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802297A4 002266E4  38 80 00 00 */	li r4, 0
/* 802297A8 002266E8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802297AC 002266EC  2C 00 00 02 */	cmpwi r0, 2
/* 802297B0 002266F0  41 82 00 0C */	beq .L_802297BC
/* 802297B4 002266F4  2C 00 00 03 */	cmpwi r0, 3
/* 802297B8 002266F8  40 82 00 08 */	bne .L_802297C0
.L_802297BC:
/* 802297BC 002266FC  38 80 00 01 */	li r4, 1
.L_802297C0:
/* 802297C0 00226700  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802297C4 00226704  41 82 00 14 */	beq .L_802297D8
/* 802297C8 00226708  7F A3 EB 78 */	mr r3, r29
/* 802297CC 0022670C  7F C4 F3 78 */	mr r4, r30
/* 802297D0 00226710  48 00 08 21 */	bl checkFindKeyDemo__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
/* 802297D4 00226714  48 00 01 F0 */	b .L_802299C4
.L_802297D8:
/* 802297D8 00226718  4B F8 B7 E9 */	bl paused_soft__Q24Game10GameSystemFv
/* 802297DC 0022671C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802297E0 00226720  40 82 01 E4 */	bne .L_802299C4
/* 802297E4 00226724  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802297E8 00226728  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802297EC 0022672C  2C 00 00 01 */	cmpwi r0, 1
/* 802297F0 00226730  40 82 01 D4 */	bne .L_802299C4
/* 802297F4 00226734  C0 3E 01 F0 */	lfs f1, 0x1f0(r30)
/* 802297F8 00226738  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 802297FC 0022673C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229800 00226740  40 81 00 CC */	ble .L_802298CC
/* 80229804 00226744  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80229808 00226748  38 80 00 00 */	li r4, 0
/* 8022980C 0022674C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 80229810 00226750  EC 01 00 28 */	fsubs f0, f1, f0
/* 80229814 00226754  D0 1E 01 F0 */	stfs f0, 0x1f0(r30)
/* 80229818 00226758  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022981C 0022675C  81 83 00 00 */	lwz r12, 0(r3)
/* 80229820 00226760  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80229824 00226764  7D 89 03 A6 */	mtctr r12
/* 80229828 00226768  4E 80 04 21 */	bctrl 
/* 8022982C 0022676C  28 03 00 00 */	cmplwi r3, 0
/* 80229830 00226770  41 82 00 88 */	beq .L_802298B8
/* 80229834 00226774  C0 3E 01 F0 */	lfs f1, 0x1f0(r30)
/* 80229838 00226778  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022983C 0022677C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229840 00226780  4C 40 13 82 */	cror 2, 0, 2
/* 80229844 00226784  40 82 00 74 */	bne .L_802298B8
/* 80229848 00226788  83 83 02 D0 */	lwz r28, 0x2d0(r3)
/* 8022984C 0022678C  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229850 00226790  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 80229854 00226794  41 82 00 18 */	beq .L_8022986C
/* 80229858 00226798  80 1C 00 04 */	lwz r0, 4(r28)
/* 8022985C 0022679C  90 1C 00 00 */	stw r0, 0(r28)
/* 80229860 002267A0  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229864 002267A4  54 00 00 7E */	clrlwi r0, r0, 1
/* 80229868 002267A8  90 1C 00 00 */	stw r0, 0(r28)
.L_8022986C:
/* 8022986C 002267AC  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229870 002267B0  54 1B 07 FF */	clrlwi. r27, r0, 0x1f
/* 80229874 002267B4  41 82 00 24 */	beq .L_80229898
/* 80229878 002267B8  60 00 00 01 */	ori r0, r0, 1
/* 8022987C 002267BC  7F 83 E3 78 */	mr r3, r28
/* 80229880 002267C0  90 1C 00 00 */	stw r0, 0(r28)
/* 80229884 002267C4  48 18 E6 99 */	bl updateHamon___Q23efx11TNaviEffectFv
/* 80229888 002267C8  28 1B 00 00 */	cmplwi r27, 0
/* 8022988C 002267CC  40 82 00 0C */	bne .L_80229898
/* 80229890 002267D0  38 7C 00 1C */	addi r3, r28, 0x1c
/* 80229894 002267D4  48 18 E0 01 */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_80229898:
/* 80229898 002267D8  80 7C 00 00 */	lwz r3, 0(r28)
/* 8022989C 002267DC  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 802298A0 002267E0  41 82 00 18 */	beq .L_802298B8
/* 802298A4 002267E4  60 60 00 02 */	ori r0, r3, 2
/* 802298A8 002267E8  7F 83 E3 78 */	mr r3, r28
/* 802298AC 002267EC  90 1C 00 00 */	stw r0, 0(r28)
/* 802298B0 002267F0  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 802298B4 002267F4  48 18 E8 49 */	bl createLight___Q23efx11TNaviEffectFPA4_f
.L_802298B8:
/* 802298B8 002267F8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802298BC 002267FC  38 80 00 01 */	li r4, 1
/* 802298C0 00226800  38 A0 00 00 */	li r5, 0
/* 802298C4 00226804  4B F3 5D 31 */	bl setVsXlu__Q24Game7PikiMgrFib
/* 802298C8 00226808  48 00 00 14 */	b .L_802298DC
.L_802298CC:
/* 802298CC 0022680C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802298D0 00226810  38 80 00 01 */	li r4, 1
/* 802298D4 00226814  38 A0 00 01 */	li r5, 1
/* 802298D8 00226818  4B F3 5D 1D */	bl setVsXlu__Q24Game7PikiMgrFib
.L_802298DC:
/* 802298DC 0022681C  C0 3E 01 F4 */	lfs f1, 0x1f4(r30)
/* 802298E0 00226820  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 802298E4 00226824  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802298E8 00226828  40 81 00 CC */	ble .L_802299B4
/* 802298EC 0022682C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802298F0 00226830  38 80 00 01 */	li r4, 1
/* 802298F4 00226834  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802298F8 00226838  EC 01 00 28 */	fsubs f0, f1, f0
/* 802298FC 0022683C  D0 1E 01 F4 */	stfs f0, 0x1f4(r30)
/* 80229900 00226840  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80229904 00226844  81 83 00 00 */	lwz r12, 0(r3)
/* 80229908 00226848  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022990C 0022684C  7D 89 03 A6 */	mtctr r12
/* 80229910 00226850  4E 80 04 21 */	bctrl 
/* 80229914 00226854  28 03 00 00 */	cmplwi r3, 0
/* 80229918 00226858  41 82 00 88 */	beq .L_802299A0
/* 8022991C 0022685C  C0 3E 01 F4 */	lfs f1, 0x1f4(r30)
/* 80229920 00226860  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229924 00226864  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229928 00226868  4C 40 13 82 */	cror 2, 0, 2
/* 8022992C 0022686C  40 82 00 74 */	bne .L_802299A0
/* 80229930 00226870  83 83 02 D0 */	lwz r28, 0x2d0(r3)
/* 80229934 00226874  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229938 00226878  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 8022993C 0022687C  41 82 00 18 */	beq .L_80229954
/* 80229940 00226880  80 1C 00 04 */	lwz r0, 4(r28)
/* 80229944 00226884  90 1C 00 00 */	stw r0, 0(r28)
/* 80229948 00226888  80 1C 00 00 */	lwz r0, 0(r28)
/* 8022994C 0022688C  54 00 00 7E */	clrlwi r0, r0, 1
/* 80229950 00226890  90 1C 00 00 */	stw r0, 0(r28)
.L_80229954:
/* 80229954 00226894  80 1C 00 00 */	lwz r0, 0(r28)
/* 80229958 00226898  54 1B 07 FF */	clrlwi. r27, r0, 0x1f
/* 8022995C 0022689C  41 82 00 24 */	beq .L_80229980
/* 80229960 002268A0  60 00 00 01 */	ori r0, r0, 1
/* 80229964 002268A4  7F 83 E3 78 */	mr r3, r28
/* 80229968 002268A8  90 1C 00 00 */	stw r0, 0(r28)
/* 8022996C 002268AC  48 18 E5 B1 */	bl updateHamon___Q23efx11TNaviEffectFv
/* 80229970 002268B0  28 1B 00 00 */	cmplwi r27, 0
/* 80229974 002268B4  40 82 00 0C */	bne .L_80229980
/* 80229978 002268B8  38 7C 00 1C */	addi r3, r28, 0x1c
/* 8022997C 002268BC  48 18 DF 19 */	bl "createSimpleDive__3efxFR10Vector3<f>"
.L_80229980:
/* 80229980 002268C0  80 7C 00 00 */	lwz r3, 0(r28)
/* 80229984 002268C4  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80229988 002268C8  41 82 00 18 */	beq .L_802299A0
/* 8022998C 002268CC  60 60 00 02 */	ori r0, r3, 2
/* 80229990 002268D0  7F 83 E3 78 */	mr r3, r28
/* 80229994 002268D4  90 1C 00 00 */	stw r0, 0(r28)
/* 80229998 002268D8  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 8022999C 002268DC  48 18 E7 61 */	bl createLight___Q23efx11TNaviEffectFPA4_f
.L_802299A0:
/* 802299A0 002268E0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802299A4 002268E4  38 80 00 00 */	li r4, 0
/* 802299A8 002268E8  38 A0 00 00 */	li r5, 0
/* 802299AC 002268EC  4B F3 5C 49 */	bl setVsXlu__Q24Game7PikiMgrFib
/* 802299B0 002268F0  48 00 00 14 */	b .L_802299C4
.L_802299B4:
/* 802299B4 002268F4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802299B8 002268F8  38 80 00 00 */	li r4, 0
/* 802299BC 002268FC  38 A0 00 01 */	li r5, 1
/* 802299C0 00226900  4B F3 5C 35 */	bl setVsXlu__Q24Game7PikiMgrFib
.L_802299C4:
/* 802299C4 00226904  7F A3 EB 78 */	mr r3, r29
/* 802299C8 00226908  7F C4 F3 78 */	mr r4, r30
/* 802299CC 0022690C  48 00 0F E9 */	bl checkPikminZero__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
/* 802299D0 00226910  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802299D4 00226914  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802299D8 00226918  2C 00 00 01 */	cmpwi r0, 1
/* 802299DC 0022691C  40 82 01 C0 */	bne .L_80229B9C
/* 802299E0 00226920  7F C3 F3 78 */	mr r3, r30
/* 802299E4 00226924  4B F9 A6 C9 */	bl calcVsScores__Q24Game13VsGameSectionFv
/* 802299E8 00226928  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802299EC 0022692C  4B F8 B5 DD */	bl paused__Q24Game10GameSystemFv
/* 802299F0 00226930  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802299F4 00226934  40 82 00 14 */	bne .L_80229A08
/* 802299F8 00226938  7F C3 F3 78 */	mr r3, r30
/* 802299FC 0022693C  4B F9 9C D5 */	bl updateCardGeneration__Q24Game13VsGameSectionFv
/* 80229A00 00226940  80 7E 03 30 */	lwz r3, 0x330(r30)
/* 80229A04 00226944  48 00 BF 61 */	bl update__Q34Game6VsGame7CardMgrFv
.L_80229A08:
/* 80229A08 00226948  A0 7D 00 14 */	lhz r3, 0x14(r29)
/* 80229A0C 0022694C  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80229A10 00226950  41 82 00 F8 */	beq .L_80229B08
/* 80229A14 00226954  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229A18 00226958  48 1D 50 99 */	bl check_WinLoseReason__Q26Screen9Game2DMgrCFv
/* 80229A1C 0022695C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229A20 00226960  41 82 05 BC */	beq .L_80229FDC
/* 80229A24 00226964  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229A28 00226968  54 00 06 2C */	rlwinm r0, r0, 0, 0x18, 0x16
/* 80229A2C 0022696C  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229A30 00226970  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229A34 00226974  60 00 02 00 */	ori r0, r0, 0x200
/* 80229A38 00226978  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229A3C 0022697C  88 1D 00 25 */	lbz r0, 0x25(r29)
/* 80229A40 00226980  88 7D 00 26 */	lbz r3, 0x26(r29)
/* 80229A44 00226984  28 00 00 00 */	cmplwi r0, 0
/* 80229A48 00226988  40 82 00 20 */	bne .L_80229A68
/* 80229A4C 0022698C  28 03 00 00 */	cmplwi r3, 0
/* 80229A50 00226990  40 82 00 18 */	bne .L_80229A68
/* 80229A54 00226994  80 6D 94 18 */	lwz r3, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A58 00226998  38 C0 00 03 */	li r6, 3
/* 80229A5C 0022699C  38 03 00 01 */	addi r0, r3, 1
/* 80229A60 002269A0  90 0D 94 18 */	stw r0, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A64 002269A4  48 00 00 64 */	b .L_80229AC8
.L_80229A68:
/* 80229A68 002269A8  28 00 00 00 */	cmplwi r0, 0
/* 80229A6C 002269AC  40 82 00 20 */	bne .L_80229A8C
/* 80229A70 002269B0  80 6D 94 10 */	lwz r3, mRedWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A74 002269B4  38 00 00 00 */	li r0, 0
/* 80229A78 002269B8  38 C0 00 01 */	li r6, 1
/* 80229A7C 002269BC  38 63 00 01 */	addi r3, r3, 1
/* 80229A80 002269C0  90 6D 94 10 */	stw r3, mRedWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A84 002269C4  90 1E 03 4C */	stw r0, 0x34c(r30)
/* 80229A88 002269C8  48 00 00 40 */	b .L_80229AC8
.L_80229A8C:
/* 80229A8C 002269CC  28 03 00 00 */	cmplwi r3, 0
/* 80229A90 002269D0  40 82 00 20 */	bne .L_80229AB0
/* 80229A94 002269D4  80 6D 94 14 */	lwz r3, mBlueWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229A98 002269D8  38 00 00 01 */	li r0, 1
/* 80229A9C 002269DC  38 C0 00 02 */	li r6, 2
/* 80229AA0 002269E0  38 63 00 01 */	addi r3, r3, 1
/* 80229AA4 002269E4  90 6D 94 14 */	stw r3, mBlueWinCount__Q24Game13VsGameSection@sda21(r13)
/* 80229AA8 002269E8  90 1E 03 4C */	stw r0, 0x34c(r30)
/* 80229AAC 002269EC  48 00 00 1C */	b .L_80229AC8
.L_80229AB0:
/* 80229AB0 002269F0  80 6D 94 18 */	lwz r3, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229AB4 002269F4  38 00 FF FF */	li r0, -1
/* 80229AB8 002269F8  38 C0 00 03 */	li r6, 3
/* 80229ABC 002269FC  38 63 00 01 */	addi r3, r3, 1
/* 80229AC0 00226A00  90 6D 94 18 */	stw r3, mDrawCount__Q24Game13VsGameSection@sda21(r13)
/* 80229AC4 00226A04  90 1E 03 4C */	stw r0, 0x34c(r30)
.L_80229AC8:
/* 80229AC8 00226A08  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80229ACC 00226A0C  3C 60 80 4C */	lis r3, __vt__Q32kh6Screen11DispWinLose@ha
/* 80229AD0 00226A10  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80229AD4 00226A14  38 80 00 00 */	li r4, 0
/* 80229AD8 00226A18  90 01 00 20 */	stw r0, 0x20(r1)
/* 80229ADC 00226A1C  38 A3 0F 5C */	addi r5, r3, __vt__Q32kh6Screen11DispWinLose@l
/* 80229AE0 00226A20  38 00 00 01 */	li r0, 1
/* 80229AE4 00226A24  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229AE8 00226A28  90 81 00 24 */	stw r4, 0x24(r1)
/* 80229AEC 00226A2C  38 81 00 20 */	addi r4, r1, 0x20
/* 80229AF0 00226A30  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80229AF4 00226A34  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80229AF8 00226A38  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80229AFC 00226A3C  48 1D 50 1D */	bl open_WinLose__Q26Screen9Game2DMgrFRQ32kh6Screen11DispWinLose
/* 80229B00 00226A40  48 00 04 DC */	b .L_80229FDC
/* 80229B04 00226A44  48 00 04 D8 */	b .L_80229FDC
.L_80229B08:
/* 80229B08 00226A48  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80229B0C 00226A4C  41 82 00 48 */	beq .L_80229B54
/* 80229B10 00226A50  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229B14 00226A54  48 1D 50 AD */	bl check_WinLose__Q26Screen9Game2DMgrCFv
/* 80229B18 00226A58  2C 03 00 03 */	cmpwi r3, 3
/* 80229B1C 00226A5C  41 82 00 0C */	beq .L_80229B28
/* 80229B20 00226A60  40 80 04 BC */	bge .L_80229FDC
/* 80229B24 00226A64  48 00 04 B8 */	b .L_80229FDC
.L_80229B28:
/* 80229B28 00226A68  38 00 00 01 */	li r0, 1
/* 80229B2C 00226A6C  7F A3 EB 78 */	mr r3, r29
/* 80229B30 00226A70  98 01 00 0C */	stb r0, 0xc(r1)
/* 80229B34 00226A74  7F C4 F3 78 */	mr r4, r30
/* 80229B38 00226A78  38 C1 00 0C */	addi r6, r1, 0xc
/* 80229B3C 00226A7C  38 A0 00 00 */	li r5, 0
/* 80229B40 00226A80  81 9D 00 00 */	lwz r12, 0(r29)
/* 80229B44 00226A84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80229B48 00226A88  7D 89 03 A6 */	mtctr r12
/* 80229B4C 00226A8C  4E 80 04 21 */	bctrl 
/* 80229B50 00226A90  48 00 04 8C */	b .L_80229FDC
.L_80229B54:
/* 80229B54 00226A94  88 1D 00 16 */	lbz r0, 0x16(r29)
/* 80229B58 00226A98  28 00 00 00 */	cmplwi r0, 0
/* 80229B5C 00226A9C  40 82 02 20 */	bne .L_80229D7C
/* 80229B60 00226AA0  38 60 00 01 */	li r3, 1
/* 80229B64 00226AA4  4B FA 73 D9 */	bl getAllPikmins__Q24Game8GameStatFi
/* 80229B68 00226AA8  2C 03 00 00 */	cmpwi r3, 0
/* 80229B6C 00226AAC  40 82 00 10 */	bne .L_80229B7C
/* 80229B70 00226AB0  88 1D 00 25 */	lbz r0, 0x25(r29)
/* 80229B74 00226AB4  60 00 00 02 */	ori r0, r0, 2
/* 80229B78 00226AB8  98 1D 00 25 */	stb r0, 0x25(r29)
.L_80229B7C:
/* 80229B7C 00226ABC  38 60 00 00 */	li r3, 0
/* 80229B80 00226AC0  4B FA 73 BD */	bl getAllPikmins__Q24Game8GameStatFi
/* 80229B84 00226AC4  2C 03 00 00 */	cmpwi r3, 0
/* 80229B88 00226AC8  40 82 01 F4 */	bne .L_80229D7C
/* 80229B8C 00226ACC  88 1D 00 26 */	lbz r0, 0x26(r29)
/* 80229B90 00226AD0  60 00 00 02 */	ori r0, r0, 2
/* 80229B94 00226AD4  98 1D 00 26 */	stb r0, 0x26(r29)
/* 80229B98 00226AD8  48 00 01 E4 */	b .L_80229D7C
.L_80229B9C:
/* 80229B9C 00226ADC  48 22 F1 F5 */	bl PSMGetPikminNumD__Fv
/* 80229BA0 00226AE0  7C 60 1B 78 */	mr r0, r3
/* 80229BA4 00226AE4  38 60 FF FF */	li r3, -1
/* 80229BA8 00226AE8  7C 1B 03 78 */	mr r27, r0
/* 80229BAC 00226AEC  4B FA 72 65 */	bl getMapPikmins_exclude_Me__Q24Game8GameStatFi
/* 80229BB0 00226AF0  2C 03 00 0A */	cmpwi r3, 0xa
/* 80229BB4 00226AF4  40 80 00 30 */	bge .L_80229BE4
/* 80229BB8 00226AF8  80 0D 96 18 */	lwz r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 80229BBC 00226AFC  2C 00 00 00 */	cmpwi r0, 0
/* 80229BC0 00226B00  40 81 00 24 */	ble .L_80229BE4
/* 80229BC4 00226B04  28 1B 00 00 */	cmplwi r27, 0
/* 80229BC8 00226B08  41 82 00 38 */	beq .L_80229C00
/* 80229BCC 00226B0C  7F 63 DB 78 */	mr r3, r27
/* 80229BD0 00226B10  81 9B 00 00 */	lwz r12, 0(r27)
/* 80229BD4 00226B14  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80229BD8 00226B18  7D 89 03 A6 */	mtctr r12
/* 80229BDC 00226B1C  4E 80 04 21 */	bctrl 
/* 80229BE0 00226B20  48 00 00 20 */	b .L_80229C00
.L_80229BE4:
/* 80229BE4 00226B24  28 1B 00 00 */	cmplwi r27, 0
/* 80229BE8 00226B28  41 82 00 18 */	beq .L_80229C00
/* 80229BEC 00226B2C  7F 63 DB 78 */	mr r3, r27
/* 80229BF0 00226B30  81 9B 00 00 */	lwz r12, 0(r27)
/* 80229BF4 00226B34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80229BF8 00226B38  7D 89 03 A6 */	mtctr r12
/* 80229BFC 00226B3C  4E 80 04 21 */	bctrl 
.L_80229C00:
/* 80229C00 00226B40  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229C04 00226B44  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80229C08 00226B48  41 82 00 58 */	beq .L_80229C60
/* 80229C0C 00226B4C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229C10 00226B50  48 1D 4F B1 */	bl check_WinLose__Q26Screen9Game2DMgrCFv
/* 80229C14 00226B54  2C 03 00 03 */	cmpwi r3, 3
/* 80229C18 00226B58  41 82 00 0C */	beq .L_80229C24
/* 80229C1C 00226B5C  40 80 03 C0 */	bge .L_80229FDC
/* 80229C20 00226B60  48 00 03 BC */	b .L_80229FDC
.L_80229C24:
/* 80229C24 00226B64  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 80229C28 00226B68  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 80229C2C 00226B6C  4B FA 74 45 */	bl clear__Q34Game8GameStat11PikiCounterFv
/* 80229C30 00226B70  38 00 00 00 */	li r0, 0
/* 80229C34 00226B74  38 C1 00 08 */	addi r6, r1, 8
/* 80229C38 00226B78  98 01 00 08 */	stb r0, 8(r1)
/* 80229C3C 00226B7C  7F A3 EB 78 */	mr r3, r29
/* 80229C40 00226B80  7F C4 F3 78 */	mr r4, r30
/* 80229C44 00226B84  38 A0 00 04 */	li r5, 4
/* 80229C48 00226B88  98 01 00 08 */	stb r0, 8(r1)
/* 80229C4C 00226B8C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80229C50 00226B90  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80229C54 00226B94  7D 89 03 A6 */	mtctr r12
/* 80229C58 00226B98  4E 80 04 21 */	bctrl 
/* 80229C5C 00226B9C  48 00 03 80 */	b .L_80229FDC
.L_80229C60:
/* 80229C60 00226BA0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229C64 00226BA4  4B F8 B3 65 */	bl paused__Q24Game10GameSystemFv
/* 80229C68 00226BA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229C6C 00226BAC  40 82 01 10 */	bne .L_80229D7C
/* 80229C70 00226BB0  C0 3E 03 C0 */	lfs f1, 0x3c0(r30)
/* 80229C74 00226BB4  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229C78 00226BB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229C7C 00226BBC  40 81 01 00 */	ble .L_80229D7C
/* 80229C80 00226BC0  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229C84 00226BC4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80229C88 00226BC8  41 82 00 F4 */	beq .L_80229D7C
/* 80229C8C 00226BCC  88 1E 01 F8 */	lbz r0, 0x1f8(r30)
/* 80229C90 00226BD0  28 00 00 00 */	cmplwi r0, 0
/* 80229C94 00226BD4  40 82 00 E8 */	bne .L_80229D7C
/* 80229C98 00226BD8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229C9C 00226BDC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229CA0 00226BE0  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80229CA4 00226BE4  41 82 00 D8 */	beq .L_80229D7C
/* 80229CA8 00226BE8  4B F8 B3 19 */	bl paused_soft__Q24Game10GameSystemFv
/* 80229CAC 00226BEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229CB0 00226BF0  40 82 00 CC */	bne .L_80229D7C
/* 80229CB4 00226BF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80229CB8 00226BF8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80229CBC 00226BFC  2C 00 00 00 */	cmpwi r0, 0
/* 80229CC0 00226C00  40 82 00 BC */	bne .L_80229D7C
/* 80229CC4 00226C04  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80229CC8 00226C08  C0 62 BF 18 */	lfs f3, lbl_8051A278@sda21(r2)
/* 80229CCC 00226C0C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 80229CD0 00226C10  C0 3E 03 C0 */	lfs f1, 0x3c0(r30)
/* 80229CD4 00226C14  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 80229CD8 00226C18  EC 23 08 BC */	fnmsubs f1, f3, f2, f1
/* 80229CDC 00226C1C  D0 3E 03 C0 */	stfs f1, 0x3c0(r30)
/* 80229CE0 00226C20  C0 3E 03 C0 */	lfs f1, 0x3c0(r30)
/* 80229CE4 00226C24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80229CE8 00226C28  4C 40 13 82 */	cror 2, 0, 2
/* 80229CEC 00226C2C  40 82 00 90 */	bne .L_80229D7C
/* 80229CF0 00226C30  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229CF4 00226C34  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80229CF8 00226C38  40 82 00 84 */	bne .L_80229D7C
/* 80229CFC 00226C3C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229D00 00226C40  38 80 00 01 */	li r4, 1
/* 80229D04 00226C44  38 A2 BF 1C */	addi r5, r2, lbl_8051A27C@sda21
/* 80229D08 00226C48  38 C0 00 03 */	li r6, 3
/* 80229D0C 00226C4C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229D10 00226C50  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229D14 00226C54  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229D18 00226C58  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229D1C 00226C5C  4B F8 B2 79 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229D20 00226C60  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229D24 00226C64  38 80 00 01 */	li r4, 1
/* 80229D28 00226C68  38 A2 BF 1C */	addi r5, r2, lbl_8051A27C@sda21
/* 80229D2C 00226C6C  4B F8 B2 59 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229D30 00226C70  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229D34 00226C74  38 60 00 00 */	li r3, 0
/* 80229D38 00226C78  60 00 00 08 */	ori r0, r0, 8
/* 80229D3C 00226C7C  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229D40 00226C80  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80229D44 00226C84  80 04 00 44 */	lwz r0, 0x44(r4)
/* 80229D48 00226C88  2C 00 00 01 */	cmpwi r0, 1
/* 80229D4C 00226C8C  41 82 00 0C */	beq .L_80229D58
/* 80229D50 00226C90  2C 00 00 03 */	cmpwi r0, 3
/* 80229D54 00226C94  40 82 00 08 */	bne .L_80229D5C
.L_80229D58:
/* 80229D58 00226C98  38 60 00 01 */	li r3, 1
.L_80229D5C:
/* 80229D5C 00226C9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229D60 00226CA0  40 82 00 10 */	bne .L_80229D70
/* 80229D64 00226CA4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229D68 00226CA8  48 1D 4E E9 */	bl open_TimeUp1P__Q26Screen9Game2DMgrFv
/* 80229D6C 00226CAC  48 00 02 70 */	b .L_80229FDC
.L_80229D70:
/* 80229D70 00226CB0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229D74 00226CB4  48 1D 4F B1 */	bl open_TimeUp2P__Q26Screen9Game2DMgrFv
/* 80229D78 00226CB8  48 00 02 64 */	b .L_80229FDC
.L_80229D7C:
/* 80229D7C 00226CBC  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229D80 00226CC0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80229D84 00226CC4  40 82 00 E4 */	bne .L_80229E68
/* 80229D88 00226CC8  80 1E 01 FC */	lwz r0, 0x1fc(r30)
/* 80229D8C 00226CCC  28 00 00 00 */	cmplwi r0, 0
/* 80229D90 00226CD0  41 82 00 D8 */	beq .L_80229E68
/* 80229D94 00226CD4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229D98 00226CD8  48 1D 43 A5 */	bl check_CaveMoreMenu__Q26Screen9Game2DMgrFv
/* 80229D9C 00226CDC  2C 03 00 02 */	cmpwi r3, 2
/* 80229DA0 00226CE0  41 82 00 80 */	beq .L_80229E20
/* 80229DA4 00226CE4  40 80 00 14 */	bge .L_80229DB8
/* 80229DA8 00226CE8  2C 03 00 00 */	cmpwi r3, 0
/* 80229DAC 00226CEC  41 82 00 BC */	beq .L_80229E68
/* 80229DB0 00226CF0  40 80 00 14 */	bge .L_80229DC4
/* 80229DB4 00226CF4  48 00 00 B4 */	b .L_80229E68
.L_80229DB8:
/* 80229DB8 00226CF8  2C 03 00 04 */	cmpwi r3, 4
/* 80229DBC 00226CFC  40 80 00 AC */	bge .L_80229E68
/* 80229DC0 00226D00  48 00 00 88 */	b .L_80229E48
.L_80229DC4:
/* 80229DC4 00226D04  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229DC8 00226D08  38 BF 00 4C */	addi r5, r31, 0x4c
/* 80229DCC 00226D0C  38 80 00 00 */	li r4, 0
/* 80229DD0 00226D10  38 C0 00 03 */	li r6, 3
/* 80229DD4 00226D14  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229DD8 00226D18  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229DDC 00226D1C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229DE0 00226D20  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229DE4 00226D24  4B F8 B1 B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229DE8 00226D28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229DEC 00226D2C  38 BF 00 4C */	addi r5, r31, 0x4c
/* 80229DF0 00226D30  38 80 00 00 */	li r4, 0
/* 80229DF4 00226D34  4B F8 B1 91 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229DF8 00226D38  7F C3 F3 78 */	mr r3, r30
/* 80229DFC 00226D3C  80 9E 01 FC */	lwz r4, 0x1fc(r30)
/* 80229E00 00226D40  81 9E 00 00 */	lwz r12, 0(r30)
/* 80229E04 00226D44  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80229E08 00226D48  7D 89 03 A6 */	mtctr r12
/* 80229E0C 00226D4C  4E 80 04 21 */	bctrl 
/* 80229E10 00226D50  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229E14 00226D54  60 00 00 01 */	ori r0, r0, 1
/* 80229E18 00226D58  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229E1C 00226D5C  48 00 01 C0 */	b .L_80229FDC
.L_80229E20:
/* 80229E20 00226D60  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E24 00226D64  38 BF 00 58 */	addi r5, r31, 0x58
/* 80229E28 00226D68  38 80 00 00 */	li r4, 0
/* 80229E2C 00226D6C  38 C0 00 03 */	li r6, 3
/* 80229E30 00226D70  4B F8 B1 65 */	bl setPause__Q24Game10GameSystemFbPci
/* 80229E34 00226D74  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E38 00226D78  38 BF 00 58 */	addi r5, r31, 0x58
/* 80229E3C 00226D7C  38 80 00 00 */	li r4, 0
/* 80229E40 00226D80  4B F8 B1 45 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80229E44 00226D84  48 00 00 24 */	b .L_80229E68
.L_80229E48:
/* 80229E48 00226D88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E4C 00226D8C  38 BF 00 64 */	addi r5, r31, 0x64
/* 80229E50 00226D90  38 80 00 00 */	li r4, 0
/* 80229E54 00226D94  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80229E58 00226D98  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229E5C 00226D9C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80229E60 00226DA0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229E64 00226DA4  4B F8 B1 21 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_80229E68:
/* 80229E68 00226DA8  88 1E 01 F8 */	lbz r0, 0x1f8(r30)
/* 80229E6C 00226DAC  28 00 00 00 */	cmplwi r0, 0
/* 80229E70 00226DB0  41 82 00 14 */	beq .L_80229E84
/* 80229E74 00226DB4  7F C3 F3 78 */	mr r3, r30
/* 80229E78 00226DB8  4B F9 81 C9 */	bl updateCaveMenus__Q24Game13VsGameSectionFv
/* 80229E7C 00226DBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229E80 00226DC0  41 82 01 5C */	beq .L_80229FDC
.L_80229E84:
/* 80229E84 00226DC4  7F A3 EB 78 */	mr r3, r29
/* 80229E88 00226DC8  7F C4 F3 78 */	mr r4, r30
/* 80229E8C 00226DCC  48 00 20 B1 */	bl update_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
/* 80229E90 00226DD0  88 1D 00 16 */	lbz r0, 0x16(r29)
/* 80229E94 00226DD4  28 00 00 00 */	cmplwi r0, 0
/* 80229E98 00226DD8  40 82 00 10 */	bne .L_80229EA8
/* 80229E9C 00226DDC  7F A3 EB 78 */	mr r3, r29
/* 80229EA0 00226DE0  7F C4 F3 78 */	mr r4, r30
/* 80229EA4 00226DE4  48 00 04 D5 */	bl checkSMenu__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
.L_80229EA8:
/* 80229EA8 00226DE8  80 ED 93 E8 */	lwz r7, gameSystem__4Game@sda21(r13)
/* 80229EAC 00226DEC  80 07 00 44 */	lwz r0, 0x44(r7)
/* 80229EB0 00226DF0  2C 00 00 01 */	cmpwi r0, 1
/* 80229EB4 00226DF4  40 82 01 28 */	bne .L_80229FDC
/* 80229EB8 00226DF8  A0 7D 00 14 */	lhz r3, 0x14(r29)
/* 80229EBC 00226DFC  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80229EC0 00226E00  40 82 01 1C */	bne .L_80229FDC
/* 80229EC4 00226E04  54 60 05 AD */	rlwinm. r0, r3, 0, 0x16, 0x16
/* 80229EC8 00226E08  40 82 01 14 */	bne .L_80229FDC
/* 80229ECC 00226E0C  88 1D 00 16 */	lbz r0, 0x16(r29)
/* 80229ED0 00226E10  28 00 00 01 */	cmplwi r0, 1
/* 80229ED4 00226E14  41 82 01 08 */	beq .L_80229FDC
/* 80229ED8 00226E18  88 1D 00 25 */	lbz r0, 0x25(r29)
/* 80229EDC 00226E1C  28 00 00 00 */	cmplwi r0, 0
/* 80229EE0 00226E20  40 82 00 10 */	bne .L_80229EF0
/* 80229EE4 00226E24  88 1D 00 26 */	lbz r0, 0x26(r29)
/* 80229EE8 00226E28  28 00 00 00 */	cmplwi r0, 0
/* 80229EEC 00226E2C  41 82 00 F0 */	beq .L_80229FDC
.L_80229EF0:
/* 80229EF0 00226E30  88 07 00 3C */	lbz r0, 0x3c(r7)
/* 80229EF4 00226E34  38 80 00 01 */	li r4, 1
/* 80229EF8 00226E38  38 A0 00 00 */	li r5, 0
/* 80229EFC 00226E3C  38 C0 00 03 */	li r6, 3
/* 80229F00 00226E40  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80229F04 00226E44  98 07 00 3C */	stb r0, 0x3c(r7)
/* 80229F08 00226E48  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 80229F0C 00226E4C  60 00 01 00 */	ori r0, r0, 0x100
/* 80229F10 00226E50  B0 1D 00 14 */	sth r0, 0x14(r29)
/* 80229F14 00226E54  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80229F18 00226E58  4B F8 B0 7D */	bl setPause__Q24Game10GameSystemFbPci
/* 80229F1C 00226E5C  88 7D 00 25 */	lbz r3, 0x25(r29)
/* 80229F20 00226E60  38 C0 FF FF */	li r6, -1
/* 80229F24 00226E64  38 E0 FF FF */	li r7, -1
/* 80229F28 00226E68  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80229F2C 00226E6C  41 82 00 0C */	beq .L_80229F38
/* 80229F30 00226E70  38 E0 00 03 */	li r7, 3
/* 80229F34 00226E74  48 00 00 20 */	b .L_80229F54
.L_80229F38:
/* 80229F38 00226E78  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80229F3C 00226E7C  41 82 00 0C */	beq .L_80229F48
/* 80229F40 00226E80  38 C0 00 01 */	li r6, 1
/* 80229F44 00226E84  48 00 00 10 */	b .L_80229F54
.L_80229F48:
/* 80229F48 00226E88  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80229F4C 00226E8C  41 82 00 08 */	beq .L_80229F54
/* 80229F50 00226E90  38 C0 00 02 */	li r6, 2
.L_80229F54:
/* 80229F54 00226E94  2C 07 00 03 */	cmpwi r7, 3
/* 80229F58 00226E98  41 82 00 34 */	beq .L_80229F8C
/* 80229F5C 00226E9C  88 7D 00 26 */	lbz r3, 0x26(r29)
/* 80229F60 00226EA0  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 80229F64 00226EA4  41 82 00 0C */	beq .L_80229F70
/* 80229F68 00226EA8  38 C0 00 03 */	li r6, 3
/* 80229F6C 00226EAC  48 00 00 20 */	b .L_80229F8C
.L_80229F70:
/* 80229F70 00226EB0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 80229F74 00226EB4  41 82 00 0C */	beq .L_80229F80
/* 80229F78 00226EB8  38 E0 00 01 */	li r7, 1
/* 80229F7C 00226EBC  48 00 00 10 */	b .L_80229F8C
.L_80229F80:
/* 80229F80 00226EC0  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 80229F84 00226EC4  41 82 00 08 */	beq .L_80229F8C
/* 80229F88 00226EC8  38 E0 00 02 */	li r7, 2
.L_80229F8C:
/* 80229F8C 00226ECC  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80229F90 00226ED0  3C 60 80 4C */	lis r3, __vt__Q32kh6Screen17DispWinLoseReason@ha
/* 80229F94 00226ED4  38 04 11 48 */	addi r0, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80229F98 00226ED8  38 A0 00 00 */	li r5, 0
/* 80229F9C 00226EDC  90 01 00 10 */	stw r0, 0x10(r1)
/* 80229FA0 00226EE0  38 03 0F 44 */	addi r0, r3, __vt__Q32kh6Screen17DispWinLoseReason@l
/* 80229FA4 00226EE4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80229FA8 00226EE8  38 81 00 10 */	addi r4, r1, 0x10
/* 80229FAC 00226EEC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80229FB0 00226EF0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80229FB4 00226EF4  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80229FB8 00226EF8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80229FBC 00226EFC  48 1D 4A 4D */	bl open_WinLoseReason__Q26Screen9Game2DMgrFRQ32kh6Screen17DispWinLoseReason
/* 80229FC0 00226F00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80229FC4 00226F04  40 82 00 18 */	bne .L_80229FDC
/* 80229FC8 00226F08  38 7F 00 70 */	addi r3, r31, 0x70
/* 80229FCC 00226F0C  38 BF 00 80 */	addi r5, r31, 0x80
/* 80229FD0 00226F10  38 80 02 01 */	li r4, 0x201
/* 80229FD4 00226F14  4C C6 31 82 */	crclr 6
/* 80229FD8 00226F18  4B E0 06 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80229FDC:
/* 80229FDC 00226F1C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 80229FE0 00226F20  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80229FE4 00226F24  7C 08 03 A6 */	mtlr r0
/* 80229FE8 00226F28  38 21 00 50 */	addi r1, r1, 0x50
/* 80229FEC 00226F2C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global checkFindKeyDemo__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
checkFindKeyDemo__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 80229FF0 00226F30  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80229FF4 00226F34  7C 08 02 A6 */	mflr r0
/* 80229FF8 00226F38  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80229FFC 00226F3C  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8022A000 00226F40  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8022A004 00226F44  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 8022A008 00226F48  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 8022A00C 00226F4C  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 8022A010 00226F50  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 8022A014 00226F54  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8022A018 00226F58  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8022A01C 00226F5C  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8022A020 00226F60  93 81 00 80 */	stw r28, 0x80(r1)
/* 8022A024 00226F64  7C 7D 1B 78 */	mr r29, r3
/* 8022A028 00226F68  7C 9E 23 78 */	mr r30, r4
/* 8022A02C 00226F6C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8022A030 00226F70  28 00 00 00 */	cmplwi r0, 0
/* 8022A034 00226F74  40 82 03 0C */	bne .L_8022A340
/* 8022A038 00226F78  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022A03C 00226F7C  4B F3 0B E5 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8022A040 00226F80  7C 7F 1B 79 */	or. r31, r3, r3
/* 8022A044 00226F84  41 82 02 FC */	beq .L_8022A340
/* 8022A048 00226F88  80 6D 95 28 */	lwz r3, mgr__Q24Game10PelletItem@sda21(r13)
/* 8022A04C 00226F8C  28 03 00 00 */	cmplwi r3, 0
/* 8022A050 00226F90  41 82 00 08 */	beq .L_8022A058
/* 8022A054 00226F94  38 63 00 54 */	addi r3, r3, 0x54
.L_8022A058:
/* 8022A058 00226F98  38 00 00 00 */	li r0, 0
/* 8022A05C 00226F9C  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 8022A060 00226FA0  38 84 1B 74 */	addi r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 8022A064 00226FA4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022A068 00226FA8  28 00 00 00 */	cmplwi r0, 0
/* 8022A06C 00226FAC  90 81 00 30 */	stw r4, 0x30(r1)
/* 8022A070 00226FB0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8022A074 00226FB4  90 61 00 38 */	stw r3, 0x38(r1)
/* 8022A078 00226FB8  40 82 00 1C */	bne .L_8022A094
/* 8022A07C 00226FBC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A080 00226FC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022A084 00226FC4  7D 89 03 A6 */	mtctr r12
/* 8022A088 00226FC8  4E 80 04 21 */	bctrl 
/* 8022A08C 00226FCC  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A090 00226FD0  48 00 02 90 */	b .L_8022A320
.L_8022A094:
/* 8022A094 00226FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A098 00226FD8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022A09C 00226FDC  7D 89 03 A6 */	mtctr r12
/* 8022A0A0 00226FE0  4E 80 04 21 */	bctrl 
/* 8022A0A4 00226FE4  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A0A8 00226FE8  48 00 00 58 */	b .L_8022A100
.L_8022A0AC:
/* 8022A0AC 00226FEC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A0B0 00226FF0  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A0B4 00226FF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A0B8 00226FF8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022A0BC 00226FFC  7D 89 03 A6 */	mtctr r12
/* 8022A0C0 00227000  4E 80 04 21 */	bctrl 
/* 8022A0C4 00227004  7C 64 1B 78 */	mr r4, r3
/* 8022A0C8 00227008  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8022A0CC 0022700C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A0D0 00227010  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A0D4 00227014  7D 89 03 A6 */	mtctr r12
/* 8022A0D8 00227018  4E 80 04 21 */	bctrl 
/* 8022A0DC 0022701C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A0E0 00227020  40 82 02 40 */	bne .L_8022A320
/* 8022A0E4 00227024  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A0E8 00227028  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A0EC 0022702C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A0F0 00227030  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A0F4 00227034  7D 89 03 A6 */	mtctr r12
/* 8022A0F8 00227038  4E 80 04 21 */	bctrl 
/* 8022A0FC 0022703C  90 61 00 34 */	stw r3, 0x34(r1)
.L_8022A100:
/* 8022A100 00227040  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8022A104 00227044  38 61 00 30 */	addi r3, r1, 0x30
/* 8022A108 00227048  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022A10C 0022704C  7D 89 03 A6 */	mtctr r12
/* 8022A110 00227050  4E 80 04 21 */	bctrl 
/* 8022A114 00227054  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A118 00227058  41 82 FF 94 */	beq .L_8022A0AC
/* 8022A11C 0022705C  48 00 02 04 */	b .L_8022A320
.L_8022A120:
/* 8022A120 00227060  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A124 00227064  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A128 00227068  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022A12C 0022706C  7D 89 03 A6 */	mtctr r12
/* 8022A130 00227070  4E 80 04 21 */	bctrl 
/* 8022A134 00227074  7C 7C 1B 78 */	mr r28, r3
/* 8022A138 00227078  4B F3 C8 A9 */	bl getConfigIndex__Q24Game6PelletFv
/* 8022A13C 0022707C  2C 03 00 0C */	cmpwi r3, 0xc
/* 8022A140 00227080  40 82 01 24 */	bne .L_8022A264
/* 8022A144 00227084  7F 84 E3 78 */	mr r4, r28
/* 8022A148 00227088  38 61 00 14 */	addi r3, r1, 0x14
/* 8022A14C 0022708C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8022A150 00227090  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A154 00227094  7D 89 03 A6 */	mtctr r12
/* 8022A158 00227098  4E 80 04 21 */	bctrl 
/* 8022A15C 0022709C  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 8022A160 002270A0  7F 83 E3 78 */	mr r3, r28
/* 8022A164 002270A4  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 8022A168 002270A8  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 8022A16C 002270AC  4B F3 C8 51 */	bl getBottomRadius__Q24Game6PelletFv
/* 8022A170 002270B0  C0 02 BF 24 */	lfs f0, lbl_8051A284@sda21(r2)
/* 8022A174 002270B4  7F E3 FB 78 */	mr r3, r31
/* 8022A178 002270B8  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 8022A17C 002270BC  38 81 00 20 */	addi r4, r1, 0x20
/* 8022A180 002270C0  EC 00 08 2A */	fadds f0, f0, f1
/* 8022A184 002270C4  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8022A188 002270C8  D3 A1 00 28 */	stfs f29, 0x28(r1)
/* 8022A18C 002270CC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022A190 002270D0  4B FF 6C 75 */	bl checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
/* 8022A194 002270D4  28 03 00 00 */	cmplwi r3, 0
/* 8022A198 002270D8  41 82 00 CC */	beq .L_8022A264
/* 8022A19C 002270DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022A1A0 002270E0  48 1F 8D 91 */	bl getPlayCommonData__6SystemFv
/* 8022A1A4 002270E4  48 00 A6 6D */	bl challenge_is_virgin__Q24Game14PlayCommonDataFv
/* 8022A1A8 002270E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A1AC 002270EC  41 82 00 B8 */	beq .L_8022A264
/* 8022A1B0 002270F0  80 DE 00 C8 */	lwz r6, 0xe8(r30)
/* 8022A1B4 002270F4  3C 60 80 48 */	lis r3, lbl_804835DC@ha
/* 8022A1B8 002270F8  38 00 00 00 */	li r0, 0
/* 8022A1BC 002270FC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022A1C0 00227100  38 A3 35 DC */	addi r5, r3, lbl_804835DC@l
/* 8022A1C4 00227104  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022A1C8 00227108  7F 84 E3 78 */	mr r4, r28
/* 8022A1CC 0022710C  38 61 00 08 */	addi r3, r1, 8
/* 8022A1D0 00227110  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8022A1D4 00227114  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 8022A1D8 00227118  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8022A1DC 0022711C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8022A1E0 00227120  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8022A1E4 00227124  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8022A1E8 00227128  90 01 00 68 */	stw r0, 0x68(r1)
/* 8022A1EC 0022712C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8022A1F0 00227130  90 01 00 48 */	stw r0, 0x48(r1)
/* 8022A1F4 00227134  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022A1F8 00227138  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022A1FC 0022713C  90 01 00 70 */	stw r0, 0x70(r1)
/* 8022A200 00227140  80 1E 00 CC */	lwz r0, 0xec(r30)
/* 8022A204 00227144  90 01 00 50 */	stw r0, 0x50(r1)
/* 8022A208 00227148  81 9C 00 00 */	lwz r12, 0(r28)
/* 8022A20C 0022714C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A210 00227150  7D 89 03 A6 */	mtctr r12
/* 8022A214 00227154  4E 80 04 21 */	bctrl 
/* 8022A218 00227158  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022A21C 0022715C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8022A220 00227160  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022A224 00227164  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8022A228 00227168  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022A22C 0022716C  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8022A230 00227170  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 8022A234 00227174  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8022A238 00227178  C0 3C 01 40 */	lfs f1, 0x140(r28)
/* 8022A23C 0022717C  C0 5C 01 60 */	lfs f2, 0x160(r28)
/* 8022A240 00227180  4B E0 AE C9 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8022A244 00227184  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 8022A248 00227188  38 81 00 40 */	addi r4, r1, 0x40
/* 8022A24C 0022718C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A250 00227190  93 83 01 94 */	stw r28, 0x194(r3)
/* 8022A254 00227194  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A258 00227198  48 20 27 79 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022A25C 0022719C  38 00 00 01 */	li r0, 1
/* 8022A260 002271A0  98 1D 00 24 */	stb r0, 0x24(r29)
.L_8022A264:
/* 8022A264 002271A4  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8022A268 002271A8  28 00 00 00 */	cmplwi r0, 0
/* 8022A26C 002271AC  40 82 00 24 */	bne .L_8022A290
/* 8022A270 002271B0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A274 002271B4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A278 002271B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A27C 002271BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A280 002271C0  7D 89 03 A6 */	mtctr r12
/* 8022A284 002271C4  4E 80 04 21 */	bctrl 
/* 8022A288 002271C8  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A28C 002271CC  48 00 00 94 */	b .L_8022A320
.L_8022A290:
/* 8022A290 002271D0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A294 002271D4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A298 002271D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A29C 002271DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A2A0 002271E0  7D 89 03 A6 */	mtctr r12
/* 8022A2A4 002271E4  4E 80 04 21 */	bctrl 
/* 8022A2A8 002271E8  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A2AC 002271EC  48 00 00 58 */	b .L_8022A304
.L_8022A2B0:
/* 8022A2B0 002271F0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A2B4 002271F4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A2B8 002271F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A2BC 002271FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022A2C0 00227200  7D 89 03 A6 */	mtctr r12
/* 8022A2C4 00227204  4E 80 04 21 */	bctrl 
/* 8022A2C8 00227208  7C 64 1B 78 */	mr r4, r3
/* 8022A2CC 0022720C  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8022A2D0 00227210  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A2D4 00227214  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A2D8 00227218  7D 89 03 A6 */	mtctr r12
/* 8022A2DC 0022721C  4E 80 04 21 */	bctrl 
/* 8022A2E0 00227220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A2E4 00227224  40 82 00 3C */	bne .L_8022A320
/* 8022A2E8 00227228  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A2EC 0022722C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A2F0 00227230  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A2F4 00227234  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A2F8 00227238  7D 89 03 A6 */	mtctr r12
/* 8022A2FC 0022723C  4E 80 04 21 */	bctrl 
/* 8022A300 00227240  90 61 00 34 */	stw r3, 0x34(r1)
.L_8022A304:
/* 8022A304 00227244  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8022A308 00227248  38 61 00 30 */	addi r3, r1, 0x30
/* 8022A30C 0022724C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022A310 00227250  7D 89 03 A6 */	mtctr r12
/* 8022A314 00227254  4E 80 04 21 */	bctrl 
/* 8022A318 00227258  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A31C 0022725C  41 82 FF 94 */	beq .L_8022A2B0
.L_8022A320:
/* 8022A320 00227260  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A324 00227264  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A328 00227268  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022A32C 0022726C  7D 89 03 A6 */	mtctr r12
/* 8022A330 00227270  4E 80 04 21 */	bctrl 
/* 8022A334 00227274  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A338 00227278  7C 04 18 40 */	cmplw r4, r3
/* 8022A33C 0022727C  40 82 FD E4 */	bne .L_8022A120
.L_8022A340:
/* 8022A340 00227280  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8022A344 00227284  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8022A348 00227288  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 8022A34C 0022728C  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 8022A350 00227290  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 8022A354 00227294  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 8022A358 00227298  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8022A35C 0022729C  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8022A360 002272A0  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8022A364 002272A4  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8022A368 002272A8  83 81 00 80 */	lwz r28, 0x80(r1)
/* 8022A36C 002272AC  7C 08 03 A6 */	mtlr r0
/* 8022A370 002272B0  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8022A374 002272B4  4E 80 00 20 */	blr 
.else
.global checkFindKeyDemo__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
checkFindKeyDemo__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 80229FF0 00226F30  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 80229FF4 00226F34  7C 08 02 A6 */	mflr r0
/* 80229FF8 00226F38  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80229FFC 00226F3C  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8022A000 00226F40  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8022A004 00226F44  DB C1 00 A0 */	stfd f30, 0xa0(r1)
/* 8022A008 00226F48  F3 C1 00 A8 */	psq_st f30, 168(r1), 0, qr0
/* 8022A00C 00226F4C  DB A1 00 90 */	stfd f29, 0x90(r1)
/* 8022A010 00226F50  F3 A1 00 98 */	psq_st f29, 152(r1), 0, qr0
/* 8022A014 00226F54  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8022A018 00226F58  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8022A01C 00226F5C  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8022A020 00226F60  93 81 00 80 */	stw r28, 0x80(r1)
/* 8022A024 00226F64  7C 7D 1B 78 */	mr r29, r3
/* 8022A028 00226F68  7C 9E 23 78 */	mr r30, r4
/* 8022A02C 00226F6C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 8022A030 00226F70  28 00 00 00 */	cmplwi r0, 0
/* 8022A034 00226F74  40 82 03 0C */	bne .L_8022A340
/* 8022A038 00226F78  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022A03C 00226F7C  4B F3 0B E5 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8022A040 00226F80  7C 7F 1B 79 */	or. r31, r3, r3
/* 8022A044 00226F84  41 82 02 FC */	beq .L_8022A340
/* 8022A048 00226F88  80 6D 95 28 */	lwz r3, mgr__Q24Game10PelletItem@sda21(r13)
/* 8022A04C 00226F8C  28 03 00 00 */	cmplwi r3, 0
/* 8022A050 00226F90  41 82 00 08 */	beq .L_8022A058
/* 8022A054 00226F94  38 63 00 54 */	addi r3, r3, 0x54
.L_8022A058:
/* 8022A058 00226F98  38 00 00 00 */	li r0, 0
/* 8022A05C 00226F9C  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@ha
/* 8022A060 00226FA0  38 84 1B 74 */	addi r4, r4, "__vt__36Iterator<Q34Game10PelletItem6Object>"@l
/* 8022A064 00226FA4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022A068 00226FA8  28 00 00 00 */	cmplwi r0, 0
/* 8022A06C 00226FAC  90 81 00 30 */	stw r4, 0x30(r1)
/* 8022A070 00226FB0  90 01 00 34 */	stw r0, 0x34(r1)
/* 8022A074 00226FB4  90 61 00 38 */	stw r3, 0x38(r1)
/* 8022A078 00226FB8  40 82 00 1C */	bne .L_8022A094
/* 8022A07C 00226FBC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A080 00226FC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022A084 00226FC4  7D 89 03 A6 */	mtctr r12
/* 8022A088 00226FC8  4E 80 04 21 */	bctrl 
/* 8022A08C 00226FCC  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A090 00226FD0  48 00 02 90 */	b .L_8022A320
.L_8022A094:
/* 8022A094 00226FD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A098 00226FD8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022A09C 00226FDC  7D 89 03 A6 */	mtctr r12
/* 8022A0A0 00226FE0  4E 80 04 21 */	bctrl 
/* 8022A0A4 00226FE4  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A0A8 00226FE8  48 00 00 58 */	b .L_8022A100
.L_8022A0AC:
/* 8022A0AC 00226FEC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A0B0 00226FF0  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A0B4 00226FF4  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A0B8 00226FF8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022A0BC 00226FFC  7D 89 03 A6 */	mtctr r12
/* 8022A0C0 00227000  4E 80 04 21 */	bctrl 
/* 8022A0C4 00227004  7C 64 1B 78 */	mr r4, r3
/* 8022A0C8 00227008  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8022A0CC 0022700C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A0D0 00227010  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A0D4 00227014  7D 89 03 A6 */	mtctr r12
/* 8022A0D8 00227018  4E 80 04 21 */	bctrl 
/* 8022A0DC 0022701C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A0E0 00227020  40 82 02 40 */	bne .L_8022A320
/* 8022A0E4 00227024  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A0E8 00227028  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A0EC 0022702C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A0F0 00227030  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A0F4 00227034  7D 89 03 A6 */	mtctr r12
/* 8022A0F8 00227038  4E 80 04 21 */	bctrl 
/* 8022A0FC 0022703C  90 61 00 34 */	stw r3, 0x34(r1)
.L_8022A100:
/* 8022A100 00227040  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8022A104 00227044  38 61 00 30 */	addi r3, r1, 0x30
/* 8022A108 00227048  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022A10C 0022704C  7D 89 03 A6 */	mtctr r12
/* 8022A110 00227050  4E 80 04 21 */	bctrl 
/* 8022A114 00227054  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A118 00227058  41 82 FF 94 */	beq .L_8022A0AC
/* 8022A11C 0022705C  48 00 02 04 */	b .L_8022A320
.L_8022A120:
/* 8022A120 00227060  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A124 00227064  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A128 00227068  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022A12C 0022706C  7D 89 03 A6 */	mtctr r12
/* 8022A130 00227070  4E 80 04 21 */	bctrl 
/* 8022A134 00227074  7C 7C 1B 78 */	mr r28, r3
/* 8022A138 00227078  4B F3 C8 A9 */	bl getConfigIndex__Q24Game6PelletFv
/* 8022A13C 0022707C  2C 03 00 0C */	cmpwi r3, 0xc
/* 8022A140 00227080  40 82 01 24 */	bne .L_8022A264
/* 8022A144 00227084  7F 84 E3 78 */	mr r4, r28
/* 8022A148 00227088  38 61 00 14 */	addi r3, r1, 0x14
/* 8022A14C 0022708C  81 9C 00 00 */	lwz r12, 0(r28)
/* 8022A150 00227090  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A154 00227094  7D 89 03 A6 */	mtctr r12
/* 8022A158 00227098  4E 80 04 21 */	bctrl 
/* 8022A15C 0022709C  C3 E1 00 14 */	lfs f31, 0x14(r1)
/* 8022A160 002270A0  7F 83 E3 78 */	mr r3, r28
/* 8022A164 002270A4  C3 C1 00 18 */	lfs f30, 0x18(r1)
/* 8022A168 002270A8  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 8022A16C 002270AC  4B F3 C8 51 */	bl getBottomRadius__Q24Game6PelletFv
/* 8022A170 002270B0  C0 02 BF 24 */	lfs f0, lbl_8051A284@sda21(r2)
/* 8022A174 002270B4  7F E3 FB 78 */	mr r3, r31
/* 8022A178 002270B8  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 8022A17C 002270BC  38 81 00 20 */	addi r4, r1, 0x20
/* 8022A180 002270C0  EC 00 08 2A */	fadds f0, f0, f1
/* 8022A184 002270C4  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8022A188 002270C8  D3 A1 00 28 */	stfs f29, 0x28(r1)
/* 8022A18C 002270CC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022A190 002270D0  4B FF 6C 75 */	bl checkDemoNaviAndPiki__Q24Game4NaviFRQ23Sys6Sphere
/* 8022A194 002270D4  28 03 00 00 */	cmplwi r3, 0
/* 8022A198 002270D8  41 82 00 CC */	beq .L_8022A264
/* 8022A19C 002270DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022A1A0 002270E0  48 1F 8D 91 */	bl getPlayCommonData__6SystemFv
/* 8022A1A4 002270E4  48 00 A6 6D */	bl challenge_is_virgin__Q24Game14PlayCommonDataFv
/* 8022A1A8 002270E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A1AC 002270EC  41 82 00 B8 */	beq .L_8022A264
/* 8022A1B0 002270F0  80 DE 00 C8 */	lwz r6, 0xc8(r30)
/* 8022A1B4 002270F4  3C 60 80 48 */	lis r3, lbl_804835DC@ha
/* 8022A1B8 002270F8  38 00 00 00 */	li r0, 0
/* 8022A1BC 002270FC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022A1C0 00227100  38 A3 35 DC */	addi r5, r3, lbl_804835DC@l
/* 8022A1C4 00227104  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022A1C8 00227108  7F 84 E3 78 */	mr r4, r28
/* 8022A1CC 0022710C  38 61 00 08 */	addi r3, r1, 8
/* 8022A1D0 00227110  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8022A1D4 00227114  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 8022A1D8 00227118  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 8022A1DC 0022711C  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 8022A1E0 00227120  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8022A1E4 00227124  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8022A1E8 00227128  90 01 00 68 */	stw r0, 0x68(r1)
/* 8022A1EC 0022712C  90 01 00 50 */	stw r0, 0x50(r1)
/* 8022A1F0 00227130  90 01 00 48 */	stw r0, 0x48(r1)
/* 8022A1F4 00227134  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022A1F8 00227138  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022A1FC 0022713C  90 01 00 70 */	stw r0, 0x70(r1)
/* 8022A200 00227140  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 8022A204 00227144  90 01 00 50 */	stw r0, 0x50(r1)
/* 8022A208 00227148  81 9C 00 00 */	lwz r12, 0(r28)
/* 8022A20C 0022714C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A210 00227150  7D 89 03 A6 */	mtctr r12
/* 8022A214 00227154  4E 80 04 21 */	bctrl 
/* 8022A218 00227158  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022A21C 0022715C  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 8022A220 00227160  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022A224 00227164  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 8022A228 00227168  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022A22C 0022716C  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 8022A230 00227170  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 8022A234 00227174  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 8022A238 00227178  C0 3C 01 40 */	lfs f1, 0x140(r28)
/* 8022A23C 0022717C  C0 5C 01 60 */	lfs f2, 0x160(r28)
/* 8022A240 00227180  4B E0 AE C9 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 8022A244 00227184  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 8022A248 00227188  38 81 00 40 */	addi r4, r1, 0x40
/* 8022A24C 0022718C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A250 00227190  93 83 01 94 */	stw r28, 0x194(r3)
/* 8022A254 00227194  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A258 00227198  48 20 27 79 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022A25C 0022719C  38 00 00 01 */	li r0, 1
/* 8022A260 002271A0  98 1D 00 24 */	stb r0, 0x24(r29)
.L_8022A264:
/* 8022A264 002271A4  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8022A268 002271A8  28 00 00 00 */	cmplwi r0, 0
/* 8022A26C 002271AC  40 82 00 24 */	bne .L_8022A290
/* 8022A270 002271B0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A274 002271B4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A278 002271B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A27C 002271BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A280 002271C0  7D 89 03 A6 */	mtctr r12
/* 8022A284 002271C4  4E 80 04 21 */	bctrl 
/* 8022A288 002271C8  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A28C 002271CC  48 00 00 94 */	b .L_8022A320
.L_8022A290:
/* 8022A290 002271D0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A294 002271D4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A298 002271D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A29C 002271DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A2A0 002271E0  7D 89 03 A6 */	mtctr r12
/* 8022A2A4 002271E4  4E 80 04 21 */	bctrl 
/* 8022A2A8 002271E8  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022A2AC 002271EC  48 00 00 58 */	b .L_8022A304
.L_8022A2B0:
/* 8022A2B0 002271F0  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A2B4 002271F4  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A2B8 002271F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A2BC 002271FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022A2C0 00227200  7D 89 03 A6 */	mtctr r12
/* 8022A2C4 00227204  4E 80 04 21 */	bctrl 
/* 8022A2C8 00227208  7C 64 1B 78 */	mr r4, r3
/* 8022A2CC 0022720C  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8022A2D0 00227210  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A2D4 00227214  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A2D8 00227218  7D 89 03 A6 */	mtctr r12
/* 8022A2DC 0022721C  4E 80 04 21 */	bctrl 
/* 8022A2E0 00227220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A2E4 00227224  40 82 00 3C */	bne .L_8022A320
/* 8022A2E8 00227228  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A2EC 0022722C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A2F0 00227230  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A2F4 00227234  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022A2F8 00227238  7D 89 03 A6 */	mtctr r12
/* 8022A2FC 0022723C  4E 80 04 21 */	bctrl 
/* 8022A300 00227240  90 61 00 34 */	stw r3, 0x34(r1)
.L_8022A304:
/* 8022A304 00227244  81 81 00 30 */	lwz r12, 0x30(r1)
/* 8022A308 00227248  38 61 00 30 */	addi r3, r1, 0x30
/* 8022A30C 0022724C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022A310 00227250  7D 89 03 A6 */	mtctr r12
/* 8022A314 00227254  4E 80 04 21 */	bctrl 
/* 8022A318 00227258  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A31C 0022725C  41 82 FF 94 */	beq .L_8022A2B0
.L_8022A320:
/* 8022A320 00227260  80 61 00 38 */	lwz r3, 0x38(r1)
/* 8022A324 00227264  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A328 00227268  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022A32C 0022726C  7D 89 03 A6 */	mtctr r12
/* 8022A330 00227270  4E 80 04 21 */	bctrl 
/* 8022A334 00227274  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8022A338 00227278  7C 04 18 40 */	cmplw r4, r3
/* 8022A33C 0022727C  40 82 FD E4 */	bne .L_8022A120
.L_8022A340:
/* 8022A340 00227280  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8022A344 00227284  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8022A348 00227288  E3 C1 00 A8 */	psq_l f30, 168(r1), 0, qr0
/* 8022A34C 0022728C  CB C1 00 A0 */	lfd f30, 0xa0(r1)
/* 8022A350 00227290  E3 A1 00 98 */	psq_l f29, 152(r1), 0, qr0
/* 8022A354 00227294  CB A1 00 90 */	lfd f29, 0x90(r1)
/* 8022A358 00227298  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8022A35C 0022729C  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8022A360 002272A0  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8022A364 002272A4  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8022A368 002272A8  83 81 00 80 */	lwz r28, 0x80(r1)
/* 8022A36C 002272AC  7C 08 03 A6 */	mtlr r0
/* 8022A370 002272B0  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8022A374 002272B4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global checkSMenu__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
checkSMenu__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022A378 002272B8  94 21 FE 10 */	stwu r1, -0x1f0(r1)
/* 8022A37C 002272BC  7C 08 02 A6 */	mflr r0
/* 8022A380 002272C0  3C A0 80 48 */	lis r5, lbl_80483550@ha
/* 8022A384 002272C4  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 8022A388 002272C8  93 E1 01 EC */	stw r31, 0x1ec(r1)
/* 8022A38C 002272CC  7C 9F 23 78 */	mr r31, r4
/* 8022A390 002272D0  93 C1 01 E8 */	stw r30, 0x1e8(r1)
/* 8022A394 002272D4  3B C5 35 50 */	addi r30, r5, lbl_80483550@l
/* 8022A398 002272D8  93 A1 01 E4 */	stw r29, 0x1e4(r1)
/* 8022A39C 002272DC  7C 7D 1B 78 */	mr r29, r3
/* 8022A3A0 002272E0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A3A4 002272E4  48 1D 2B 8D */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 8022A3A8 002272E8  2C 03 00 03 */	cmpwi r3, 3
/* 8022A3AC 002272EC  41 82 00 6C */	beq .L_8022A418
/* 8022A3B0 002272F0  40 80 00 1C */	bge .L_8022A3CC
/* 8022A3B4 002272F4  2C 03 00 01 */	cmpwi r3, 1
/* 8022A3B8 002272F8  41 82 00 20 */	beq .L_8022A3D8
/* 8022A3BC 002272FC  40 80 00 44 */	bge .L_8022A400
/* 8022A3C0 00227300  2C 03 00 00 */	cmpwi r3, 0
/* 8022A3C4 00227304  40 80 03 7C */	bge .L_8022A740
/* 8022A3C8 00227308  48 00 02 3C */	b .L_8022A604
.L_8022A3CC:
/* 8022A3CC 0022730C  2C 03 00 05 */	cmpwi r3, 5
/* 8022A3D0 00227310  41 82 00 60 */	beq .L_8022A430
/* 8022A3D4 00227314  48 00 02 30 */	b .L_8022A604
.L_8022A3D8:
/* 8022A3D8 00227318  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A3DC 0022731C  38 80 00 00 */	li r4, 0
/* 8022A3E0 00227320  38 A2 BF 28 */	addi r5, r2, lbl_8051A288@sda21
/* 8022A3E4 00227324  38 C0 00 03 */	li r6, 3
/* 8022A3E8 00227328  4B F8 AB AD */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A3EC 0022732C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A3F0 00227330  38 80 00 00 */	li r4, 0
/* 8022A3F4 00227334  38 A2 BF 28 */	addi r5, r2, lbl_8051A288@sda21
/* 8022A3F8 00227338  4B F8 AB 8D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A3FC 0022733C  48 00 03 44 */	b .L_8022A740
.L_8022A400:
/* 8022A400 00227340  38 7E 00 70 */	addi r3, r30, 0x70
/* 8022A404 00227344  38 BE 00 9C */	addi r5, r30, 0x9c
/* 8022A408 00227348  38 80 02 69 */	li r4, 0x269
/* 8022A40C 0022734C  4C C6 31 82 */	crclr 6
/* 8022A410 00227350  4B E0 02 31 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8022A414 00227354  48 00 03 2C */	b .L_8022A740
.L_8022A418:
/* 8022A418 00227358  38 7E 00 70 */	addi r3, r30, 0x70
/* 8022A41C 0022735C  38 80 02 6C */	li r4, 0x26c
/* 8022A420 00227360  38 A2 BF 30 */	addi r5, r2, lbl_8051A290@sda21
/* 8022A424 00227364  4C C6 31 82 */	crclr 6
/* 8022A428 00227368  4B E0 02 19 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8022A42C 0022736C  48 00 03 14 */	b .L_8022A740
.L_8022A430:
/* 8022A430 00227370  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A434 00227374  38 80 00 00 */	li r4, 0
/* 8022A438 00227378  38 A2 BF 38 */	addi r5, r2, lbl_8051A298@sda21
/* 8022A43C 0022737C  4B F8 AB 49 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A440 00227380  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A444 00227384  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022A448 00227388  2C 00 00 01 */	cmpwi r0, 1
/* 8022A44C 0022738C  40 82 00 48 */	bne .L_8022A494
/* 8022A450 00227390  38 60 FF FF */	li r3, -1
/* 8022A454 00227394  38 00 00 01 */	li r0, 1
/* 8022A458 00227398  90 7F 03 4C */	stw r3, 0x370(r31)
/* 8022A45C 0022739C  7F A3 EB 78 */	mr r3, r29
/* 8022A460 002273A0  7F E4 FB 78 */	mr r4, r31
/* 8022A464 002273A4  38 C1 00 08 */	addi r6, r1, 8
/* 8022A468 002273A8  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 8022A46C 002273AC  38 A0 00 00 */	li r5, 0
/* 8022A470 002273B0  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 8022A474 002273B4  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 8022A478 002273B8  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 8022A47C 002273BC  98 01 00 08 */	stb r0, 8(r1)
/* 8022A480 002273C0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8022A484 002273C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022A488 002273C8  7D 89 03 A6 */	mtctr r12
/* 8022A48C 002273CC  4E 80 04 21 */	bctrl 
/* 8022A490 002273D0  48 00 02 B0 */	b .L_8022A740
.L_8022A494:
/* 8022A494 002273D4  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8022A498 002273D8  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8022A49C 002273DC  2C 00 00 00 */	cmpwi r0, 0
/* 8022A4A0 002273E0  40 82 01 40 */	bne .L_8022A5E0
/* 8022A4A4 002273E4  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 8022A4A8 002273E8  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8022A4AC 002273EC  40 82 01 34 */	bne .L_8022A5E0
/* 8022A4B0 002273F0  88 A3 00 3C */	lbz r5, 0x3c(r3)
/* 8022A4B4 002273F4  38 9E 00 AC */	addi r4, r30, 0xac
/* 8022A4B8 002273F8  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022A4BC 002273FC  38 00 00 00 */	li r0, 0
/* 8022A4C0 00227400  54 A5 06 F2 */	rlwinm r5, r5, 0, 0x1b, 0x19
/* 8022A4C4 00227404  98 A3 00 3C */	stb r5, 0x3c(r3)
/* 8022A4C8 00227408  80 BF 00 C8 */	lwz r5, 0xe8(r31)
/* 8022A4CC 0022740C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8022A4D0 00227410  90 81 00 18 */	stw r4, 0x18(r1)
/* 8022A4D4 00227414  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022A4D8 00227418  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8022A4DC 0022741C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022A4E0 00227420  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022A4E4 00227424  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022A4E8 00227428  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8022A4EC 0022742C  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022A4F0 00227430  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022A4F4 00227434  90 01 00 20 */	stw r0, 0x20(r1)
/* 8022A4F8 00227438  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022A4FC 0022743C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8022A500 00227440  90 01 00 48 */	stw r0, 0x48(r1)
/* 8022A504 00227444  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 8022A508 00227448  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022A50C 0022744C  83 E3 00 AC */	lwz r31, 0xac(r3)
/* 8022A510 00227450  28 1F 00 00 */	cmplwi r31, 0
/* 8022A514 00227454  40 82 00 18 */	bne .L_8022A52C
/* 8022A518 00227458  38 7E 00 70 */	addi r3, r30, 0x70
/* 8022A51C 0022745C  38 BE 00 BC */	addi r5, r30, 0xbc
/* 8022A520 00227460  38 80 02 8C */	li r4, 0x28c
/* 8022A524 00227464  4C C6 31 82 */	crclr 6
/* 8022A528 00227468  4B E0 01 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022A52C:
/* 8022A52C 0022746C  7F E4 FB 78 */	mr r4, r31
/* 8022A530 00227470  38 61 00 0C */	addi r3, r1, 0xc
/* 8022A534 00227474  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A538 00227478  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A53C 0022747C  7D 89 03 A6 */	mtctr r12
/* 8022A540 00227480  4E 80 04 21 */	bctrl 
/* 8022A544 00227484  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8022A548 00227488  7F E3 FB 78 */	mr r3, r31
/* 8022A54C 0022748C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8022A550 00227490  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8022A554 00227494  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8022A558 00227498  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8022A55C 0022749C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022A560 002274A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A564 002274A4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022A568 002274A8  7D 89 03 A6 */	mtctr r12
/* 8022A56C 002274AC  4E 80 04 21 */	bctrl 
/* 8022A570 002274B0  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8022A574 002274B4  3B C0 00 00 */	li r30, 0
.L_8022A578:
/* 8022A578 002274B8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022A57C 002274BC  7F C4 F3 78 */	mr r4, r30
/* 8022A580 002274C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A584 002274C4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022A588 002274C8  7D 89 03 A6 */	mtctr r12
/* 8022A58C 002274CC  4E 80 04 21 */	bctrl 
/* 8022A590 002274D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A594 002274D4  7C 7F 1B 78 */	mr r31, r3
/* 8022A598 002274D8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8022A59C 002274DC  7D 89 03 A6 */	mtctr r12
/* 8022A5A0 002274E0  4E 80 04 21 */	bctrl 
/* 8022A5A4 002274E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A5A8 002274E8  41 82 00 1C */	beq .L_8022A5C4
/* 8022A5AC 002274EC  7F E3 FB 78 */	mr r3, r31
/* 8022A5B0 002274F0  4B F7 4F C5 */	bl isStickTo__Q24Game8CreatureFv
/* 8022A5B4 002274F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A5B8 002274F8  41 82 00 0C */	beq .L_8022A5C4
/* 8022A5BC 002274FC  7F E3 FB 78 */	mr r3, r31
/* 8022A5C0 00227500  4B F7 4E 65 */	bl endStick__Q24Game8CreatureFv
.L_8022A5C4:
/* 8022A5C4 00227504  3B DE 00 01 */	addi r30, r30, 1
/* 8022A5C8 00227508  2C 1E 00 02 */	cmpwi r30, 2
/* 8022A5CC 0022750C  41 80 FF AC */	blt .L_8022A578
/* 8022A5D0 00227510  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A5D4 00227514  38 81 00 18 */	addi r4, r1, 0x18
/* 8022A5D8 00227518  48 20 23 F9 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022A5DC 0022751C  48 00 01 64 */	b .L_8022A740
.L_8022A5E0:
/* 8022A5E0 00227520  38 80 00 00 */	li r4, 0
/* 8022A5E4 00227524  38 A2 BF 38 */	addi r5, r2, lbl_8051A298@sda21
/* 8022A5E8 00227528  4B F8 A9 9D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A5EC 0022752C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A5F0 00227530  38 80 00 00 */	li r4, 0
/* 8022A5F4 00227534  38 A2 BF 38 */	addi r5, r2, lbl_8051A298@sda21
/* 8022A5F8 00227538  38 C0 00 03 */	li r6, 3
/* 8022A5FC 0022753C  4B F8 A9 99 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A600 00227540  48 00 01 40 */	b .L_8022A740
.L_8022A604:
/* 8022A604 00227544  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A608 00227548  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8022A60C 0022754C  2C 00 00 00 */	cmpwi r0, 0
/* 8022A610 00227550  40 82 01 30 */	bne .L_8022A740
/* 8022A614 00227554  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A618 00227558  4B F8 A9 A9 */	bl paused_soft__Q24Game10GameSystemFv
/* 8022A61C 0022755C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A620 00227560  40 82 01 20 */	bne .L_8022A740
/* 8022A624 00227564  80 7F 01 0C */	lwz r3, 0x12c(r31)
/* 8022A628 00227568  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8022A62C 0022756C  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 8022A630 00227570  41 82 00 70 */	beq .L_8022A6A0
/* 8022A634 00227574  38 61 01 10 */	addi r3, r1, 0x110
/* 8022A638 00227578  4B FE AC C1 */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 8022A63C 0022757C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A640 00227580  38 80 00 02 */	li r4, 2
/* 8022A644 00227584  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022A648 00227588  2C 00 00 01 */	cmpwi r0, 1
/* 8022A64C 0022758C  40 82 00 08 */	bne .L_8022A654
/* 8022A650 00227590  38 80 00 01 */	li r4, 1
.L_8022A654:
/* 8022A654 00227594  90 81 01 CC */	stw r4, 0x1cc(r1)
/* 8022A658 00227598  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A65C 0022759C  80 9F 01 0C */	lwz r4, 0x12c(r31)
/* 8022A660 002275A0  48 1D 1A 19 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8022A664 002275A4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A668 002275A8  38 81 01 10 */	addi r4, r1, 0x110
/* 8022A66C 002275AC  48 1D 26 65 */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 8022A670 002275B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A674 002275B4  41 82 00 CC */	beq .L_8022A740
/* 8022A678 002275B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A67C 002275BC  38 80 00 01 */	li r4, 1
/* 8022A680 002275C0  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A684 002275C4  38 C0 00 03 */	li r6, 3
/* 8022A688 002275C8  4B F8 A9 0D */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A68C 002275CC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A690 002275D0  38 80 00 01 */	li r4, 1
/* 8022A694 002275D4  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A698 002275D8  4B F8 A8 ED */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A69C 002275DC  48 00 00 A4 */	b .L_8022A740
.L_8022A6A0:
/* 8022A6A0 002275E0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022A6A4 002275E4  38 60 00 00 */	li r3, 0
/* 8022A6A8 002275E8  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022A6AC 002275EC  2C 00 00 01 */	cmpwi r0, 1
/* 8022A6B0 002275F0  41 82 00 0C */	beq .L_8022A6BC
/* 8022A6B4 002275F4  2C 00 00 03 */	cmpwi r0, 3
/* 8022A6B8 002275F8  40 82 00 08 */	bne .L_8022A6C0
.L_8022A6BC:
/* 8022A6BC 002275FC  38 60 00 01 */	li r3, 1
.L_8022A6C0:
/* 8022A6C0 00227600  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A6C4 00227604  41 82 00 7C */	beq .L_8022A740
/* 8022A6C8 00227608  80 7F 01 10 */	lwz r3, 0x130(r31)
/* 8022A6CC 0022760C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8022A6D0 00227610  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 8022A6D4 00227614  41 82 00 6C */	beq .L_8022A740
/* 8022A6D8 00227618  38 61 00 4C */	addi r3, r1, 0x4c
/* 8022A6DC 0022761C  4B FE AC 1D */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 8022A6E0 00227620  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A6E4 00227624  38 80 00 02 */	li r4, 2
/* 8022A6E8 00227628  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022A6EC 0022762C  2C 00 00 01 */	cmpwi r0, 1
/* 8022A6F0 00227630  40 82 00 08 */	bne .L_8022A6F8
/* 8022A6F4 00227634  38 80 00 01 */	li r4, 1
.L_8022A6F8:
/* 8022A6F8 00227638  90 81 01 08 */	stw r4, 0x108(r1)
/* 8022A6FC 0022763C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A700 00227640  80 9F 01 10 */	lwz r4, 0x130(r31)
/* 8022A704 00227644  48 1D 19 75 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8022A708 00227648  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A70C 0022764C  38 81 00 4C */	addi r4, r1, 0x4c
/* 8022A710 00227650  48 1D 25 C1 */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 8022A714 00227654  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A718 00227658  41 82 00 28 */	beq .L_8022A740
/* 8022A71C 0022765C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A720 00227660  38 80 00 01 */	li r4, 1
/* 8022A724 00227664  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A728 00227668  38 C0 00 03 */	li r6, 3
/* 8022A72C 0022766C  4B F8 A8 69 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A730 00227670  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A734 00227674  38 80 00 01 */	li r4, 1
/* 8022A738 00227678  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A73C 0022767C  4B F8 A8 49 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_8022A740:
/* 8022A740 00227680  80 01 01 F4 */	lwz r0, 0x1f4(r1)
/* 8022A744 00227684  83 E1 01 EC */	lwz r31, 0x1ec(r1)
/* 8022A748 00227688  83 C1 01 E8 */	lwz r30, 0x1e8(r1)
/* 8022A74C 0022768C  83 A1 01 E4 */	lwz r29, 0x1e4(r1)
/* 8022A750 00227690  7C 08 03 A6 */	mtlr r0
/* 8022A754 00227694  38 21 01 F0 */	addi r1, r1, 0x1f0
/* 8022A758 00227698  4E 80 00 20 */	blr 
.else
.global checkSMenu__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
checkSMenu__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022A378 002272B8  94 21 FE 10 */	stwu r1, -0x1f0(r1)
/* 8022A37C 002272BC  7C 08 02 A6 */	mflr r0
/* 8022A380 002272C0  3C A0 80 48 */	lis r5, lbl_80483550@ha
/* 8022A384 002272C4  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 8022A388 002272C8  93 E1 01 EC */	stw r31, 0x1ec(r1)
/* 8022A38C 002272CC  7C 9F 23 78 */	mr r31, r4
/* 8022A390 002272D0  93 C1 01 E8 */	stw r30, 0x1e8(r1)
/* 8022A394 002272D4  3B C5 35 50 */	addi r30, r5, lbl_80483550@l
/* 8022A398 002272D8  93 A1 01 E4 */	stw r29, 0x1e4(r1)
/* 8022A39C 002272DC  7C 7D 1B 78 */	mr r29, r3
/* 8022A3A0 002272E0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A3A4 002272E4  48 1D 2B 8D */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 8022A3A8 002272E8  2C 03 00 03 */	cmpwi r3, 3
/* 8022A3AC 002272EC  41 82 00 6C */	beq .L_8022A418
/* 8022A3B0 002272F0  40 80 00 1C */	bge .L_8022A3CC
/* 8022A3B4 002272F4  2C 03 00 01 */	cmpwi r3, 1
/* 8022A3B8 002272F8  41 82 00 20 */	beq .L_8022A3D8
/* 8022A3BC 002272FC  40 80 00 44 */	bge .L_8022A400
/* 8022A3C0 00227300  2C 03 00 00 */	cmpwi r3, 0
/* 8022A3C4 00227304  40 80 03 7C */	bge .L_8022A740
/* 8022A3C8 00227308  48 00 02 3C */	b .L_8022A604
.L_8022A3CC:
/* 8022A3CC 0022730C  2C 03 00 05 */	cmpwi r3, 5
/* 8022A3D0 00227310  41 82 00 60 */	beq .L_8022A430
/* 8022A3D4 00227314  48 00 02 30 */	b .L_8022A604
.L_8022A3D8:
/* 8022A3D8 00227318  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A3DC 0022731C  38 80 00 00 */	li r4, 0
/* 8022A3E0 00227320  38 A2 BF 28 */	addi r5, r2, lbl_8051A288@sda21
/* 8022A3E4 00227324  38 C0 00 03 */	li r6, 3
/* 8022A3E8 00227328  4B F8 AB AD */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A3EC 0022732C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A3F0 00227330  38 80 00 00 */	li r4, 0
/* 8022A3F4 00227334  38 A2 BF 28 */	addi r5, r2, lbl_8051A288@sda21
/* 8022A3F8 00227338  4B F8 AB 8D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A3FC 0022733C  48 00 03 44 */	b .L_8022A740
.L_8022A400:
/* 8022A400 00227340  38 7E 00 70 */	addi r3, r30, 0x70
/* 8022A404 00227344  38 BE 00 9C */	addi r5, r30, 0x9c
/* 8022A408 00227348  38 80 02 69 */	li r4, 0x269
/* 8022A40C 0022734C  4C C6 31 82 */	crclr 6
/* 8022A410 00227350  4B E0 02 31 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8022A414 00227354  48 00 03 2C */	b .L_8022A740
.L_8022A418:
/* 8022A418 00227358  38 7E 00 70 */	addi r3, r30, 0x70
/* 8022A41C 0022735C  38 80 02 6C */	li r4, 0x26c
/* 8022A420 00227360  38 A2 BF 30 */	addi r5, r2, lbl_8051A290@sda21
/* 8022A424 00227364  4C C6 31 82 */	crclr 6
/* 8022A428 00227368  4B E0 02 19 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8022A42C 0022736C  48 00 03 14 */	b .L_8022A740
.L_8022A430:
/* 8022A430 00227370  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A434 00227374  38 80 00 00 */	li r4, 0
/* 8022A438 00227378  38 A2 BF 38 */	addi r5, r2, lbl_8051A298@sda21
/* 8022A43C 0022737C  4B F8 AB 49 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A440 00227380  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A444 00227384  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022A448 00227388  2C 00 00 01 */	cmpwi r0, 1
/* 8022A44C 0022738C  40 82 00 48 */	bne .L_8022A494
/* 8022A450 00227390  38 60 FF FF */	li r3, -1
/* 8022A454 00227394  38 00 00 01 */	li r0, 1
/* 8022A458 00227398  90 7F 03 4C */	stw r3, 0x34c(r31)
/* 8022A45C 0022739C  7F A3 EB 78 */	mr r3, r29
/* 8022A460 002273A0  7F E4 FB 78 */	mr r4, r31
/* 8022A464 002273A4  38 C1 00 08 */	addi r6, r1, 8
/* 8022A468 002273A8  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 8022A46C 002273AC  38 A0 00 00 */	li r5, 0
/* 8022A470 002273B0  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 8022A474 002273B4  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 8022A478 002273B8  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 8022A47C 002273BC  98 01 00 08 */	stb r0, 8(r1)
/* 8022A480 002273C0  81 9D 00 00 */	lwz r12, 0(r29)
/* 8022A484 002273C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022A488 002273C8  7D 89 03 A6 */	mtctr r12
/* 8022A48C 002273CC  4E 80 04 21 */	bctrl 
/* 8022A490 002273D0  48 00 02 B0 */	b .L_8022A740
.L_8022A494:
/* 8022A494 002273D4  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8022A498 002273D8  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8022A49C 002273DC  2C 00 00 00 */	cmpwi r0, 0
/* 8022A4A0 002273E0  40 82 01 40 */	bne .L_8022A5E0
/* 8022A4A4 002273E4  A0 1D 00 14 */	lhz r0, 0x14(r29)
/* 8022A4A8 002273E8  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8022A4AC 002273EC  40 82 01 34 */	bne .L_8022A5E0
/* 8022A4B0 002273F0  88 A3 00 3C */	lbz r5, 0x3c(r3)
/* 8022A4B4 002273F4  38 9E 00 AC */	addi r4, r30, 0xac
/* 8022A4B8 002273F8  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022A4BC 002273FC  38 00 00 00 */	li r0, 0
/* 8022A4C0 00227400  54 A5 06 F2 */	rlwinm r5, r5, 0, 0x1b, 0x19
/* 8022A4C4 00227404  98 A3 00 3C */	stb r5, 0x3c(r3)
/* 8022A4C8 00227408  80 BF 00 C8 */	lwz r5, 0xc8(r31)
/* 8022A4CC 0022740C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8022A4D0 00227410  90 81 00 18 */	stw r4, 0x18(r1)
/* 8022A4D4 00227414  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022A4D8 00227418  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8022A4DC 0022741C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022A4E0 00227420  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022A4E4 00227424  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022A4E8 00227428  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 8022A4EC 0022742C  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022A4F0 00227430  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022A4F4 00227434  90 01 00 20 */	stw r0, 0x20(r1)
/* 8022A4F8 00227438  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022A4FC 0022743C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8022A500 00227440  90 01 00 48 */	stw r0, 0x48(r1)
/* 8022A504 00227444  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 8022A508 00227448  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022A50C 0022744C  83 E3 00 AC */	lwz r31, 0xac(r3)
/* 8022A510 00227450  28 1F 00 00 */	cmplwi r31, 0
/* 8022A514 00227454  40 82 00 18 */	bne .L_8022A52C
/* 8022A518 00227458  38 7E 00 70 */	addi r3, r30, 0x70
/* 8022A51C 0022745C  38 BE 00 BC */	addi r5, r30, 0xbc
/* 8022A520 00227460  38 80 02 8C */	li r4, 0x28c
/* 8022A524 00227464  4C C6 31 82 */	crclr 6
/* 8022A528 00227468  4B E0 01 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022A52C:
/* 8022A52C 0022746C  7F E4 FB 78 */	mr r4, r31
/* 8022A530 00227470  38 61 00 0C */	addi r3, r1, 0xc
/* 8022A534 00227474  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A538 00227478  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A53C 0022747C  7D 89 03 A6 */	mtctr r12
/* 8022A540 00227480  4E 80 04 21 */	bctrl 
/* 8022A544 00227484  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8022A548 00227488  7F E3 FB 78 */	mr r3, r31
/* 8022A54C 0022748C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8022A550 00227490  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8022A554 00227494  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8022A558 00227498  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8022A55C 0022749C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022A560 002274A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A564 002274A4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022A568 002274A8  7D 89 03 A6 */	mtctr r12
/* 8022A56C 002274AC  4E 80 04 21 */	bctrl 
/* 8022A570 002274B0  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8022A574 002274B4  3B C0 00 00 */	li r30, 0
.L_8022A578:
/* 8022A578 002274B8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022A57C 002274BC  7F C4 F3 78 */	mr r4, r30
/* 8022A580 002274C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A584 002274C4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022A588 002274C8  7D 89 03 A6 */	mtctr r12
/* 8022A58C 002274CC  4E 80 04 21 */	bctrl 
/* 8022A590 002274D0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022A594 002274D4  7C 7F 1B 78 */	mr r31, r3
/* 8022A598 002274D8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8022A59C 002274DC  7D 89 03 A6 */	mtctr r12
/* 8022A5A0 002274E0  4E 80 04 21 */	bctrl 
/* 8022A5A4 002274E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A5A8 002274E8  41 82 00 1C */	beq .L_8022A5C4
/* 8022A5AC 002274EC  7F E3 FB 78 */	mr r3, r31
/* 8022A5B0 002274F0  4B F7 4F C5 */	bl isStickTo__Q24Game8CreatureFv
/* 8022A5B4 002274F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A5B8 002274F8  41 82 00 0C */	beq .L_8022A5C4
/* 8022A5BC 002274FC  7F E3 FB 78 */	mr r3, r31
/* 8022A5C0 00227500  4B F7 4E 65 */	bl endStick__Q24Game8CreatureFv
.L_8022A5C4:
/* 8022A5C4 00227504  3B DE 00 01 */	addi r30, r30, 1
/* 8022A5C8 00227508  2C 1E 00 02 */	cmpwi r30, 2
/* 8022A5CC 0022750C  41 80 FF AC */	blt .L_8022A578
/* 8022A5D0 00227510  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A5D4 00227514  38 81 00 18 */	addi r4, r1, 0x18
/* 8022A5D8 00227518  48 20 23 F9 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022A5DC 0022751C  48 00 01 64 */	b .L_8022A740
.L_8022A5E0:
/* 8022A5E0 00227520  38 80 00 00 */	li r4, 0
/* 8022A5E4 00227524  38 A2 BF 38 */	addi r5, r2, lbl_8051A298@sda21
/* 8022A5E8 00227528  4B F8 A9 9D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A5EC 0022752C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A5F0 00227530  38 80 00 00 */	li r4, 0
/* 8022A5F4 00227534  38 A2 BF 38 */	addi r5, r2, lbl_8051A298@sda21
/* 8022A5F8 00227538  38 C0 00 03 */	li r6, 3
/* 8022A5FC 0022753C  4B F8 A9 99 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A600 00227540  48 00 01 40 */	b .L_8022A740
.L_8022A604:
/* 8022A604 00227544  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A608 00227548  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8022A60C 0022754C  2C 00 00 00 */	cmpwi r0, 0
/* 8022A610 00227550  40 82 01 30 */	bne .L_8022A740
/* 8022A614 00227554  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A618 00227558  4B F8 A9 A9 */	bl paused_soft__Q24Game10GameSystemFv
/* 8022A61C 0022755C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A620 00227560  40 82 01 20 */	bne .L_8022A740
/* 8022A624 00227564  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 8022A628 00227568  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8022A62C 0022756C  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 8022A630 00227570  41 82 00 70 */	beq .L_8022A6A0
/* 8022A634 00227574  38 61 01 10 */	addi r3, r1, 0x110
/* 8022A638 00227578  4B FE AC C1 */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 8022A63C 0022757C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A640 00227580  38 80 00 02 */	li r4, 2
/* 8022A644 00227584  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022A648 00227588  2C 00 00 01 */	cmpwi r0, 1
/* 8022A64C 0022758C  40 82 00 08 */	bne .L_8022A654
/* 8022A650 00227590  38 80 00 01 */	li r4, 1
.L_8022A654:
/* 8022A654 00227594  90 81 01 CC */	stw r4, 0x1cc(r1)
/* 8022A658 00227598  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A65C 0022759C  80 9F 01 0C */	lwz r4, 0x10c(r31)
/* 8022A660 002275A0  48 1D 1A 19 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8022A664 002275A4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A668 002275A8  38 81 01 10 */	addi r4, r1, 0x110
/* 8022A66C 002275AC  48 1D 26 65 */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 8022A670 002275B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A674 002275B4  41 82 00 CC */	beq .L_8022A740
/* 8022A678 002275B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A67C 002275BC  38 80 00 01 */	li r4, 1
/* 8022A680 002275C0  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A684 002275C4  38 C0 00 03 */	li r6, 3
/* 8022A688 002275C8  4B F8 A9 0D */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A68C 002275CC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A690 002275D0  38 80 00 01 */	li r4, 1
/* 8022A694 002275D4  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A698 002275D8  4B F8 A8 ED */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A69C 002275DC  48 00 00 A4 */	b .L_8022A740
.L_8022A6A0:
/* 8022A6A0 002275E0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022A6A4 002275E4  38 60 00 00 */	li r3, 0
/* 8022A6A8 002275E8  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022A6AC 002275EC  2C 00 00 01 */	cmpwi r0, 1
/* 8022A6B0 002275F0  41 82 00 0C */	beq .L_8022A6BC
/* 8022A6B4 002275F4  2C 00 00 03 */	cmpwi r0, 3
/* 8022A6B8 002275F8  40 82 00 08 */	bne .L_8022A6C0
.L_8022A6BC:
/* 8022A6BC 002275FC  38 60 00 01 */	li r3, 1
.L_8022A6C0:
/* 8022A6C0 00227600  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A6C4 00227604  41 82 00 7C */	beq .L_8022A740
/* 8022A6C8 00227608  80 7F 01 10 */	lwz r3, 0x110(r31)
/* 8022A6CC 0022760C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 8022A6D0 00227610  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 8022A6D4 00227614  41 82 00 6C */	beq .L_8022A740
/* 8022A6D8 00227618  38 61 00 4C */	addi r3, r1, 0x4c
/* 8022A6DC 0022761C  4B FE AC 1D */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 8022A6E0 00227620  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A6E4 00227624  38 80 00 02 */	li r4, 2
/* 8022A6E8 00227628  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022A6EC 0022762C  2C 00 00 01 */	cmpwi r0, 1
/* 8022A6F0 00227630  40 82 00 08 */	bne .L_8022A6F8
/* 8022A6F4 00227634  38 80 00 01 */	li r4, 1
.L_8022A6F8:
/* 8022A6F8 00227638  90 81 01 08 */	stw r4, 0x108(r1)
/* 8022A6FC 0022763C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A700 00227640  80 9F 01 10 */	lwz r4, 0x110(r31)
/* 8022A704 00227644  48 1D 19 75 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 8022A708 00227648  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022A70C 0022764C  38 81 00 4C */	addi r4, r1, 0x4c
/* 8022A710 00227650  48 1D 25 C1 */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 8022A714 00227654  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022A718 00227658  41 82 00 28 */	beq .L_8022A740
/* 8022A71C 0022765C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A720 00227660  38 80 00 01 */	li r4, 1
/* 8022A724 00227664  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A728 00227668  38 C0 00 03 */	li r6, 3
/* 8022A72C 0022766C  4B F8 A8 69 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022A730 00227670  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A734 00227674  38 80 00 01 */	li r4, 1
/* 8022A738 00227678  38 A2 BF 40 */	addi r5, r2, lbl_8051A2A0@sda21
/* 8022A73C 0022767C  4B F8 A8 49 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_8022A740:
/* 8022A740 00227680  80 01 01 F4 */	lwz r0, 0x1f4(r1)
/* 8022A744 00227684  83 E1 01 EC */	lwz r31, 0x1ec(r1)
/* 8022A748 00227688  83 C1 01 E8 */	lwz r30, 0x1e8(r1)
/* 8022A74C 0022768C  83 A1 01 E4 */	lwz r29, 0x1e4(r1)
/* 8022A750 00227690  7C 08 03 A6 */	mtlr r0
/* 8022A754 00227694  38 21 01 F0 */	addi r1, r1, 0x1f0
/* 8022A758 00227698  4E 80 00 20 */	blr 
.endif

.if version == 1
.global pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection:
/* 8022A75C 0022769C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022A760 002276A0  7C 08 02 A6 */	mflr r0
/* 8022A764 002276A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022A768 002276A8  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8022A76C 002276AC  80 06 00 44 */	lwz r0, 0x44(r6)
/* 8022A770 002276B0  2C 00 00 01 */	cmpwi r0, 1
/* 8022A774 002276B4  40 82 00 28 */	bne .L_8022A79C
/* 8022A778 002276B8  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8022A77C 002276BC  28 00 00 00 */	cmplwi r0, 0
/* 8022A780 002276C0  40 82 00 1C */	bne .L_8022A79C
/* 8022A784 002276C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A788 002276C8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8022A78C 002276CC  2C 00 00 00 */	cmpwi r0, 0
/* 8022A790 002276D0  40 82 00 0C */	bne .L_8022A79C
/* 8022A794 002276D4  80 65 03 30 */	lwz r3, 0x354(r5)
/* 8022A798 002276D8  48 00 B2 15 */	bl draw__Q34Game6VsGame7CardMgrFR8Graphics
.L_8022A79C:
/* 8022A79C 002276DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022A7A0 002276E0  7C 08 03 A6 */	mtlr r0
/* 8022A7A4 002276E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8022A7A8 002276E8  4E 80 00 20 */	blr 
.else
.global pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection:
/* 8022A75C 0022769C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022A760 002276A0  7C 08 02 A6 */	mflr r0
/* 8022A764 002276A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022A768 002276A8  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8022A76C 002276AC  80 06 00 44 */	lwz r0, 0x44(r6)
/* 8022A770 002276B0  2C 00 00 01 */	cmpwi r0, 1
/* 8022A774 002276B4  40 82 00 28 */	bne .L_8022A79C
/* 8022A778 002276B8  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8022A77C 002276BC  28 00 00 00 */	cmplwi r0, 0
/* 8022A780 002276C0  40 82 00 1C */	bne .L_8022A79C
/* 8022A784 002276C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A788 002276C8  80 03 00 18 */	lwz r0, 0x18(r3)
/* 8022A78C 002276CC  2C 00 00 00 */	cmpwi r0, 0
/* 8022A790 002276D0  40 82 00 0C */	bne .L_8022A79C
/* 8022A794 002276D4  80 65 03 30 */	lwz r3, 0x330(r5)
/* 8022A798 002276D8  48 00 B2 15 */	bl draw__Q34Game6VsGame7CardMgrFR8Graphics
.L_8022A79C:
/* 8022A79C 002276DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022A7A0 002276E0  7C 08 03 A6 */	mtlr r0
/* 8022A7A4 002276E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8022A7A8 002276E8  4E 80 00 20 */	blr 
.endif

.global draw__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionR8Graphics
draw__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionR8Graphics:
/* 8022A7AC 002276EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022A7B0 002276F0  7C 08 02 A6 */	mflr r0
/* 8022A7B4 002276F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022A7B8 002276F8  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8022A7BC 002276FC  54 00 04 21 */	rlwinm. r0, r0, 0, 0x10, 0x10
/* 8022A7C0 00227700  40 82 00 10 */	bne .L_8022A7D0
/* 8022A7C4 00227704  7C 83 23 78 */	mr r3, r4
/* 8022A7C8 00227708  7C A4 2B 78 */	mr r4, r5
/* 8022A7CC 0022770C  4B F2 14 5D */	bl doDraw__Q24Game15BaseGameSectionFR8Graphics
.L_8022A7D0:
/* 8022A7D0 00227710  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022A7D4 00227714  7C 08 03 A6 */	mtlr r0
/* 8022A7D8 00227718  38 21 00 10 */	addi r1, r1, 0x10
/* 8022A7DC 0022771C  4E 80 00 20 */	blr 

.global cleanup__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
cleanup__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022A7E0 00227720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022A7E4 00227724  7C 08 02 A6 */	mflr r0
/* 8022A7E8 00227728  3C 60 80 48 */	lis r3, lbl_8048361C@ha
/* 8022A7EC 0022772C  38 80 00 00 */	li r4, 0
/* 8022A7F0 00227730  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022A7F4 00227734  38 A3 36 1C */	addi r5, r3, lbl_8048361C@l
/* 8022A7F8 00227738  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8022A7FC 0022773C  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 8022A800 00227740  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8022A804 00227744  98 06 00 3C */	stb r0, 0x3c(r6)
/* 8022A808 00227748  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022A80C 0022774C  4B F8 A7 79 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022A810 00227750  48 23 CC 29 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022A814 00227754  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022A818 00227758  7C 08 03 A6 */	mtlr r0
/* 8022A81C 0022775C  38 21 00 10 */	addi r1, r1, 0x10
/* 8022A820 00227760  4E 80 00 20 */	blr 

.global onBattleFinished__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
onBattleFinished__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib:
/* 8022A824 00227764  88 03 00 16 */	lbz r0, 0x16(r3)
/* 8022A828 00227768  28 00 00 00 */	cmplwi r0, 0
/* 8022A82C 0022776C  4C 82 00 20 */	bnelr 
/* 8022A830 00227770  20 85 00 01 */	subfic r4, r5, 1
/* 8022A834 00227774  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8022A838 00227778  7C A3 22 14 */	add r5, r3, r4
/* 8022A83C 0022777C  88 85 00 25 */	lbz r4, 0x25(r5)
/* 8022A840 00227780  60 80 00 04 */	ori r0, r4, 4
/* 8022A844 00227784  98 05 00 25 */	stb r0, 0x25(r5)
/* 8022A848 00227788  4D 82 00 20 */	beqlr 
/* 8022A84C 0022778C  38 00 00 01 */	li r0, 1
/* 8022A850 00227790  98 03 00 16 */	stb r0, 0x16(r3)
/* 8022A854 00227794  4E 80 00 20 */	blr 

.global isCardUsable__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
isCardUsable__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022A858 00227798  88 03 00 16 */	lbz r0, 0x16(r3)
/* 8022A85C 0022779C  7C 00 00 34 */	cntlzw r0, r0
/* 8022A860 002277A0  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 8022A864 002277A4  4E 80 00 20 */	blr 

.if version == 1
.global onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib:
/* 8022A868 002277A8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8022A86C 002277AC  7C 08 02 A6 */	mflr r0
/* 8022A870 002277B0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022A874 002277B4  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8022A878 002277B8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8022A87C 002277BC  41 82 00 28 */	beq .L_8022A8A4
/* 8022A880 002277C0  54 A0 10 3A */	slwi r0, r5, 2
/* 8022A884 002277C4  7C E4 02 14 */	add r7, r4, r0
/* 8022A888 002277C8  80 87 03 DC */	lwz r4, 0x400(r7)
/* 8022A88C 002277CC  38 04 00 01 */	addi r0, r4, 1
/* 8022A890 002277D0  90 07 03 DC */	stw r0, 0x400(r7)
/* 8022A894 002277D4  41 82 00 10 */	beq .L_8022A8A4
/* 8022A898 002277D8  80 07 03 DC */	lwz r0, 0x400(r7)
/* 8022A89C 002277DC  2C 00 00 04 */	cmpwi r0, 4
/* 8022A8A0 002277E0  41 80 01 00 */	blt .L_8022A9A0
.L_8022A8A4:
/* 8022A8A4 002277E4  88 03 00 16 */	lbz r0, 0x16(r3)
/* 8022A8A8 002277E8  28 00 00 00 */	cmplwi r0, 0
/* 8022A8AC 002277EC  40 82 00 F4 */	bne .L_8022A9A0
/* 8022A8B0 002277F0  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8022A8B4 002277F4  38 80 00 01 */	li r4, 1
/* 8022A8B8 002277F8  98 83 00 16 */	stb r4, 0x16(r3)
/* 8022A8BC 002277FC  38 C0 00 04 */	li r6, 4
/* 8022A8C0 00227800  40 82 00 0C */	bne .L_8022A8CC
/* 8022A8C4 00227804  60 C0 00 80 */	ori r0, r6, 0x80
/* 8022A8C8 00227808  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_8022A8CC:
/* 8022A8CC 0022780C  20 85 00 01 */	subfic r4, r5, 1
/* 8022A8D0 00227810  38 A4 00 25 */	addi r5, r4, 0x25
/* 8022A8D4 00227814  7C 03 28 AE */	lbzx r0, r3, r5
/* 8022A8D8 00227818  7C 00 33 78 */	or r0, r0, r6
/* 8022A8DC 0022781C  7C 03 29 AE */	stbx r0, r3, r5
/* 8022A8E0 00227820  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8022A8E4 00227824  4B F5 11 B9 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8022A8E8 00227828  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8022A8EC 0022782C  7C 7F 1B 78 */	mr r31, r3
/* 8022A8F0 00227830  38 A0 00 00 */	li r5, 0
/* 8022A8F4 00227834  3C 80 80 48 */	lis r4, lbl_8048362C@ha
/* 8022A8F8 00227838  81 06 00 58 */	lwz r8, 0x58(r6)
/* 8022A8FC 0022783C  38 C4 36 2C */	addi r6, r4, lbl_8048362C@l
/* 8022A900 00227840  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022A904 00227844  7F E4 FB 78 */	mr r4, r31
/* 8022A908 00227848  80 E8 00 C8 */	lwz r7, 0xe8(r8)
/* 8022A90C 0022784C  38 61 00 08 */	addi r3, r1, 8
/* 8022A910 00227850  80 0D 84 80 */	lwz r0, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 8022A914 00227854  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8022A918 00227858  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8022A91C 0022785C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8022A920 00227860  90 E1 00 20 */	stw r7, 0x20(r1)
/* 8022A924 00227864  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022A928 00227868  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022A92C 0022786C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022A930 00227870  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022A934 00227874  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8022A938 00227878  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8022A93C 0022787C  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8022A940 00227880  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8022A944 00227884  90 A1 00 44 */	stw r5, 0x44(r1)
/* 8022A948 00227888  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022A94C 0022788C  80 08 00 CC */	lwz r0, 0xec(r8)
/* 8022A950 00227890  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022A954 00227894  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A958 00227898  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A95C 0022789C  7D 89 03 A6 */	mtctr r12
/* 8022A960 002278A0  4E 80 04 21 */	bctrl 
/* 8022A964 002278A4  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022A968 002278A8  7F E3 FB 78 */	mr r3, r31
/* 8022A96C 002278AC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022A970 002278B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022A974 002278B4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022A978 002278B8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022A97C 002278BC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022A980 002278C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A984 002278C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022A988 002278C8  7D 89 03 A6 */	mtctr r12
/* 8022A98C 002278CC  4E 80 04 21 */	bctrl 
/* 8022A990 002278D0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022A994 002278D4  38 81 00 14 */	addi r4, r1, 0x14
/* 8022A998 002278D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A99C 002278DC  48 20 20 35 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_8022A9A0:
/* 8022A9A0 002278E0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8022A9A4 002278E4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8022A9A8 002278E8  7C 08 03 A6 */	mtlr r0
/* 8022A9AC 002278EC  38 21 00 50 */	addi r1, r1, 0x50
/* 8022A9B0 002278F0  4E 80 00 20 */	blr 
.else
.global onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib:
/* 8022A868 002277A8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8022A86C 002277AC  7C 08 02 A6 */	mflr r0
/* 8022A870 002277B0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022A874 002277B4  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8022A878 002277B8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8022A87C 002277BC  41 82 00 28 */	beq .L_8022A8A4
/* 8022A880 002277C0  54 A0 10 3A */	slwi r0, r5, 2
/* 8022A884 002277C4  7C E4 02 14 */	add r7, r4, r0
/* 8022A888 002277C8  80 87 03 DC */	lwz r4, 0x3dc(r7)
/* 8022A88C 002277CC  38 04 00 01 */	addi r0, r4, 1
/* 8022A890 002277D0  90 07 03 DC */	stw r0, 0x3dc(r7)
/* 8022A894 002277D4  41 82 00 10 */	beq .L_8022A8A4
/* 8022A898 002277D8  80 07 03 DC */	lwz r0, 0x3dc(r7)
/* 8022A89C 002277DC  2C 00 00 04 */	cmpwi r0, 4
/* 8022A8A0 002277E0  41 80 01 00 */	blt .L_8022A9A0
.L_8022A8A4:
/* 8022A8A4 002277E4  88 03 00 16 */	lbz r0, 0x16(r3)
/* 8022A8A8 002277E8  28 00 00 00 */	cmplwi r0, 0
/* 8022A8AC 002277EC  40 82 00 F4 */	bne .L_8022A9A0
/* 8022A8B0 002277F0  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 8022A8B4 002277F4  38 80 00 01 */	li r4, 1
/* 8022A8B8 002277F8  98 83 00 16 */	stb r4, 0x16(r3)
/* 8022A8BC 002277FC  38 C0 00 04 */	li r6, 4
/* 8022A8C0 00227800  40 82 00 0C */	bne .L_8022A8CC
/* 8022A8C4 00227804  60 C0 00 80 */	ori r0, r6, 0x80
/* 8022A8C8 00227808  54 06 06 3E */	clrlwi r6, r0, 0x18
.L_8022A8CC:
/* 8022A8CC 0022780C  20 85 00 01 */	subfic r4, r5, 1
/* 8022A8D0 00227810  38 A4 00 25 */	addi r5, r4, 0x25
/* 8022A8D4 00227814  7C 03 28 AE */	lbzx r0, r3, r5
/* 8022A8D8 00227818  7C 00 33 78 */	or r0, r0, r6
/* 8022A8DC 0022781C  7C 03 29 AE */	stbx r0, r3, r5
/* 8022A8E0 00227820  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8022A8E4 00227824  4B F5 11 B9 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8022A8E8 00227828  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8022A8EC 0022782C  7C 7F 1B 78 */	mr r31, r3
/* 8022A8F0 00227830  38 A0 00 00 */	li r5, 0
/* 8022A8F4 00227834  3C 80 80 48 */	lis r4, lbl_8048362C@ha
/* 8022A8F8 00227838  81 06 00 58 */	lwz r8, 0x58(r6)
/* 8022A8FC 0022783C  38 C4 36 2C */	addi r6, r4, lbl_8048362C@l
/* 8022A900 00227840  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022A904 00227844  7F E4 FB 78 */	mr r4, r31
/* 8022A908 00227848  80 E8 00 C8 */	lwz r7, 0xc8(r8)
/* 8022A90C 0022784C  38 61 00 08 */	addi r3, r1, 8
/* 8022A910 00227850  80 0D 84 80 */	lwz r0, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 8022A914 00227854  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8022A918 00227858  90 C1 00 14 */	stw r6, 0x14(r1)
/* 8022A91C 0022785C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 8022A920 00227860  90 E1 00 20 */	stw r7, 0x20(r1)
/* 8022A924 00227864  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022A928 00227868  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022A92C 0022786C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022A930 00227870  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022A934 00227874  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 8022A938 00227878  90 A1 00 24 */	stw r5, 0x24(r1)
/* 8022A93C 0022787C  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8022A940 00227880  90 A1 00 28 */	stw r5, 0x28(r1)
/* 8022A944 00227884  90 A1 00 44 */	stw r5, 0x44(r1)
/* 8022A948 00227888  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022A94C 0022788C  80 08 00 CC */	lwz r0, 0xcc(r8)
/* 8022A950 00227890  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022A954 00227894  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A958 00227898  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022A95C 0022789C  7D 89 03 A6 */	mtctr r12
/* 8022A960 002278A0  4E 80 04 21 */	bctrl 
/* 8022A964 002278A4  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022A968 002278A8  7F E3 FB 78 */	mr r3, r31
/* 8022A96C 002278AC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022A970 002278B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022A974 002278B4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022A978 002278B8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022A97C 002278BC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022A980 002278C0  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022A984 002278C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022A988 002278C8  7D 89 03 A6 */	mtctr r12
/* 8022A98C 002278CC  4E 80 04 21 */	bctrl 
/* 8022A990 002278D0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022A994 002278D4  38 81 00 14 */	addi r4, r1, 0x14
/* 8022A998 002278D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022A99C 002278DC  48 20 20 35 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_8022A9A0:
/* 8022A9A0 002278E0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8022A9A4 002278E4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8022A9A8 002278E8  7C 08 03 A6 */	mtlr r0
/* 8022A9AC 002278EC  38 21 00 50 */	addi r1, r1, 0x50
/* 8022A9B0 002278F0  4E 80 00 20 */	blr 
.endif

.if version == 1
.global checkPikminZero__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
checkPikminZero__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022A9B4 002278F4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8022A9B8 002278F8  7C 08 02 A6 */	mflr r0
/* 8022A9BC 002278FC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8022A9C0 00227900  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8022A9C4 00227904  7C 9F 23 78 */	mr r31, r4
/* 8022A9C8 00227908  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8022A9CC 0022790C  7C 7E 1B 78 */	mr r30, r3
/* 8022A9D0 00227910  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8022A9D4 00227914  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8022A9D8 00227918  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8022A9DC 0022791C  2C 00 00 01 */	cmpwi r0, 1
/* 8022A9E0 00227920  41 82 01 40 */	beq .L_8022AB20
/* 8022A9E4 00227924  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022A9E8 00227928  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8022A9EC 0022792C  40 82 01 34 */	bne .L_8022AB20
/* 8022A9F0 00227930  38 60 FF FF */	li r3, -1
/* 8022A9F4 00227934  4B FA 65 49 */	bl getAllPikmins__Q24Game8GameStatFi
/* 8022A9F8 00227938  2C 03 00 00 */	cmpwi r3, 0
/* 8022A9FC 0022793C  40 82 01 24 */	bne .L_8022AB20
/* 8022AA00 00227940  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022AA04 00227944  4B F8 A5 BD */	bl paused_soft__Q24Game10GameSystemFv
/* 8022AA08 00227948  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AA0C 0022794C  40 82 01 14 */	bne .L_8022AB20
/* 8022AA10 00227950  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022AA14 00227954  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8022AA18 00227958  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8022AA1C 0022795C  41 82 01 04 */	beq .L_8022AB20
/* 8022AA20 00227960  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022AA24 00227964  4B F3 01 FD */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8022AA28 00227968  7C 7D 1B 79 */	or. r29, r3, r3
/* 8022AA2C 0022796C  40 82 00 38 */	bne .L_8022AA64
/* 8022AA30 00227970  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022AA34 00227974  38 80 00 01 */	li r4, 1
/* 8022AA38 00227978  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8022AA3C 0022797C  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 8022AA40 00227980  2C 00 00 00 */	cmpwi r0, 0
/* 8022AA44 00227984  40 82 00 08 */	bne .L_8022AA4C
/* 8022AA48 00227988  38 80 00 00 */	li r4, 0
.L_8022AA4C:
/* 8022AA4C 0022798C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022AA50 00227990  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AA54 00227994  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022AA58 00227998  7D 89 03 A6 */	mtctr r12
/* 8022AA5C 0022799C  4E 80 04 21 */	bctrl 
/* 8022AA60 002279A0  7C 7D 1B 78 */	mr r29, r3
.L_8022AA64:
/* 8022AA64 002279A4  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022AA68 002279A8  3C 60 80 48 */	lis r3, lbl_8048363C@ha
/* 8022AA6C 002279AC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022AA70 002279B0  38 A3 36 3C */	addi r5, r3, lbl_8048363C@l
/* 8022AA74 002279B4  60 03 00 02 */	ori r3, r0, 2
/* 8022AA78 002279B8  38 00 00 00 */	li r0, 0
/* 8022AA7C 002279BC  B0 7E 00 14 */	sth r3, 0x14(r30)
/* 8022AA80 002279C0  7F A4 EB 78 */	mr r4, r29
/* 8022AA84 002279C4  38 61 00 08 */	addi r3, r1, 8
/* 8022AA88 002279C8  80 DF 00 C8 */	lwz r6, 0xe8(r31)
/* 8022AA8C 002279CC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8022AA90 002279D0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8022AA94 002279D4  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8022AA98 002279D8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022AA9C 002279DC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022AAA0 002279E0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022AAA4 002279E4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022AAA8 002279E8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022AAAC 002279EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022AAB0 002279F0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022AAB4 002279F4  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022AAB8 002279F8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022AABC 002279FC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022AAC0 00227A00  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 8022AAC4 00227A04  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022AAC8 00227A08  81 9D 00 00 */	lwz r12, 0(r29)
/* 8022AACC 00227A0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AAD0 00227A10  7D 89 03 A6 */	mtctr r12
/* 8022AAD4 00227A14  4E 80 04 21 */	bctrl 
/* 8022AAD8 00227A18  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022AADC 00227A1C  7F A3 EB 78 */	mr r3, r29
/* 8022AAE0 00227A20  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022AAE4 00227A24  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022AAE8 00227A28  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022AAEC 00227A2C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022AAF0 00227A30  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022AAF4 00227A34  81 9D 00 00 */	lwz r12, 0(r29)
/* 8022AAF8 00227A38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022AAFC 00227A3C  7D 89 03 A6 */	mtctr r12
/* 8022AB00 00227A40  4E 80 04 21 */	bctrl 
/* 8022AB04 00227A44  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022AB08 00227A48  38 81 00 14 */	addi r4, r1, 0x14
/* 8022AB0C 00227A4C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022AB10 00227A50  48 20 1E C1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022AB14 00227A54  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AB18 00227A58  38 80 00 04 */	li r4, 4
/* 8022AB1C 00227A5C  48 1D 2E 31 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_8022AB20:
/* 8022AB20 00227A60  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022AB24 00227A64  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8022AB28 00227A68  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8022AB2C 00227A6C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8022AB30 00227A70  7C 08 03 A6 */	mtlr r0
/* 8022AB34 00227A74  38 21 00 60 */	addi r1, r1, 0x60
/* 8022AB38 00227A78  4E 80 00 20 */	blr 
.else
.global checkPikminZero__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
checkPikminZero__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022A9B4 002278F4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8022A9B8 002278F8  7C 08 02 A6 */	mflr r0
/* 8022A9BC 002278FC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8022A9C0 00227900  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8022A9C4 00227904  7C 9F 23 78 */	mr r31, r4
/* 8022A9C8 00227908  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8022A9CC 0022790C  7C 7E 1B 78 */	mr r30, r3
/* 8022A9D0 00227910  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8022A9D4 00227914  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8022A9D8 00227918  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8022A9DC 0022791C  2C 00 00 01 */	cmpwi r0, 1
/* 8022A9E0 00227920  41 82 01 40 */	beq .L_8022AB20
/* 8022A9E4 00227924  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022A9E8 00227928  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8022A9EC 0022792C  40 82 01 34 */	bne .L_8022AB20
/* 8022A9F0 00227930  38 60 FF FF */	li r3, -1
/* 8022A9F4 00227934  4B FA 65 49 */	bl getAllPikmins__Q24Game8GameStatFi
/* 8022A9F8 00227938  2C 03 00 00 */	cmpwi r3, 0
/* 8022A9FC 0022793C  40 82 01 24 */	bne .L_8022AB20
/* 8022AA00 00227940  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022AA04 00227944  4B F8 A5 BD */	bl paused_soft__Q24Game10GameSystemFv
/* 8022AA08 00227948  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AA0C 0022794C  40 82 01 14 */	bne .L_8022AB20
/* 8022AA10 00227950  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022AA14 00227954  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8022AA18 00227958  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8022AA1C 0022795C  41 82 01 04 */	beq .L_8022AB20
/* 8022AA20 00227960  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022AA24 00227964  4B F3 01 FD */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8022AA28 00227968  7C 7D 1B 79 */	or. r29, r3, r3
/* 8022AA2C 0022796C  40 82 00 38 */	bne .L_8022AA64
/* 8022AA30 00227970  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022AA34 00227974  38 80 00 01 */	li r4, 1
/* 8022AA38 00227978  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8022AA3C 0022797C  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 8022AA40 00227980  2C 00 00 00 */	cmpwi r0, 0
/* 8022AA44 00227984  40 82 00 08 */	bne .L_8022AA4C
/* 8022AA48 00227988  38 80 00 00 */	li r4, 0
.L_8022AA4C:
/* 8022AA4C 0022798C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022AA50 00227990  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AA54 00227994  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022AA58 00227998  7D 89 03 A6 */	mtctr r12
/* 8022AA5C 0022799C  4E 80 04 21 */	bctrl 
/* 8022AA60 002279A0  7C 7D 1B 78 */	mr r29, r3
.L_8022AA64:
/* 8022AA64 002279A4  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022AA68 002279A8  3C 60 80 48 */	lis r3, lbl_8048363C@ha
/* 8022AA6C 002279AC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022AA70 002279B0  38 A3 36 3C */	addi r5, r3, lbl_8048363C@l
/* 8022AA74 002279B4  60 03 00 02 */	ori r3, r0, 2
/* 8022AA78 002279B8  38 00 00 00 */	li r0, 0
/* 8022AA7C 002279BC  B0 7E 00 14 */	sth r3, 0x14(r30)
/* 8022AA80 002279C0  7F A4 EB 78 */	mr r4, r29
/* 8022AA84 002279C4  38 61 00 08 */	addi r3, r1, 8
/* 8022AA88 002279C8  80 DF 00 C8 */	lwz r6, 0xc8(r31)
/* 8022AA8C 002279CC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 8022AA90 002279D0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8022AA94 002279D4  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8022AA98 002279D8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022AA9C 002279DC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022AAA0 002279E0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022AAA4 002279E4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022AAA8 002279E8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022AAAC 002279EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022AAB0 002279F0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022AAB4 002279F4  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022AAB8 002279F8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022AABC 002279FC  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022AAC0 00227A00  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 8022AAC4 00227A04  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022AAC8 00227A08  81 9D 00 00 */	lwz r12, 0(r29)
/* 8022AACC 00227A0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AAD0 00227A10  7D 89 03 A6 */	mtctr r12
/* 8022AAD4 00227A14  4E 80 04 21 */	bctrl 
/* 8022AAD8 00227A18  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022AADC 00227A1C  7F A3 EB 78 */	mr r3, r29
/* 8022AAE0 00227A20  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022AAE4 00227A24  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022AAE8 00227A28  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022AAEC 00227A2C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022AAF0 00227A30  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022AAF4 00227A34  81 9D 00 00 */	lwz r12, 0(r29)
/* 8022AAF8 00227A38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022AAFC 00227A3C  7D 89 03 A6 */	mtctr r12
/* 8022AB00 00227A40  4E 80 04 21 */	bctrl 
/* 8022AB04 00227A44  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022AB08 00227A48  38 81 00 14 */	addi r4, r1, 0x14
/* 8022AB0C 00227A4C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022AB10 00227A50  48 20 1E C1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022AB14 00227A54  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AB18 00227A58  38 80 00 04 */	li r4, 4
/* 8022AB1C 00227A5C  48 1D 2E 31 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_8022AB20:
/* 8022AB20 00227A60  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022AB24 00227A64  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8022AB28 00227A68  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8022AB2C 00227A6C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8022AB30 00227A70  7C 08 03 A6 */	mtlr r0
/* 8022AB34 00227A74  38 21 00 60 */	addi r1, r1, 0x60
/* 8022AB38 00227A78  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl:
/* 8022AB3C 00227A7C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8022AB40 00227A80  7C 08 02 A6 */	mflr r0
/* 8022AB44 00227A84  3C 60 80 48 */	lis r3, lbl_80483550@ha
/* 8022AB48 00227A88  90 01 00 64 */	stw r0, 0x64(r1)
/* 8022AB4C 00227A8C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8022AB50 00227A90  7C BE 2B 78 */	mr r30, r5
/* 8022AB54 00227A94  3B E3 35 50 */	addi r31, r3, lbl_80483550@l
/* 8022AB58 00227A98  7C 9D 23 78 */	mr r29, r4
/* 8022AB5C 00227A9C  7C FB 3B 78 */	mr r27, r7
/* 8022AB60 00227AA0  7F C3 F3 78 */	mr r3, r30
/* 8022AB64 00227AA4  38 9F 00 FC */	addi r4, r31, 0xfc
/* 8022AB68 00227AA8  48 20 6D 65 */	bl is__Q24Game11MovieConfigFPc
/* 8022AB6C 00227AAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AB70 00227AB0  40 82 00 18 */	bne .L_8022AB88
/* 8022AB74 00227AB4  7F C3 F3 78 */	mr r3, r30
/* 8022AB78 00227AB8  38 9F 01 0C */	addi r4, r31, 0x10c
/* 8022AB7C 00227ABC  48 20 6D 51 */	bl is__Q24Game11MovieConfigFPc
/* 8022AB80 00227AC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AB84 00227AC4  41 82 00 0C */	beq .L_8022AB90
.L_8022AB88:
/* 8022AB88 00227AC8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AB8C 00227ACC  48 1D 15 45 */	bl setToumeiBG__Q26Screen9Game2DMgrFv
.L_8022AB90:
/* 8022AB90 00227AD0  7F C3 F3 78 */	mr r3, r30
/* 8022AB94 00227AD4  38 9F 00 18 */	addi r4, r31, 0x18
/* 8022AB98 00227AD8  48 20 6D 35 */	bl is__Q24Game11MovieConfigFPc
/* 8022AB9C 00227ADC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022ABA0 00227AE0  41 82 00 0C */	beq .L_8022ABAC
/* 8022ABA4 00227AE4  7F A3 EB 78 */	mr r3, r29
/* 8022ABA8 00227AE8  4B F2 69 8D */	bl createFallPikminSound__Q24Game15BaseGameSectionFv
.L_8022ABAC:
/* 8022ABAC 00227AEC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022ABB0 00227AF0  48 1D 2B C5 */	bl startFadeBG_Floor__Q26Screen9Game2DMgrFv
/* 8022ABB4 00227AF4  7F C3 F3 78 */	mr r3, r30
/* 8022ABB8 00227AF8  38 9F 01 20 */	addi r4, r31, 0x120
/* 8022ABBC 00227AFC  48 20 6D 11 */	bl is__Q24Game11MovieConfigFPc
/* 8022ABC0 00227B00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022ABC4 00227B04  41 82 00 8C */	beq .L_8022AC50
/* 8022ABC8 00227B08  28 1B 00 00 */	cmplwi r27, 0
/* 8022ABCC 00227B0C  40 82 00 40 */	bne .L_8022AC0C
/* 8022ABD0 00227B10  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022ABD4 00227B14  3B 80 00 01 */	li r28, 1
/* 8022ABD8 00227B18  38 60 00 00 */	li r3, 0
/* 8022ABDC 00227B1C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022ABE0 00227B20  2C 00 00 01 */	cmpwi r0, 1
/* 8022ABE4 00227B24  41 82 00 0C */	beq .L_8022ABF0
/* 8022ABE8 00227B28  2C 00 00 03 */	cmpwi r0, 3
/* 8022ABEC 00227B2C  40 82 00 08 */	bne .L_8022ABF4
.L_8022ABF0:
/* 8022ABF0 00227B30  38 60 00 01 */	li r3, 1
.L_8022ABF4:
/* 8022ABF4 00227B34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022ABF8 00227B38  40 82 00 4C */	bne .L_8022AC44
/* 8022ABFC 00227B3C  7F A3 EB 78 */	mr r3, r29
/* 8022AC00 00227B40  38 80 00 00 */	li r4, 0
/* 8022AC04 00227B44  4B F2 2D 15 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8022AC08 00227B48  48 00 00 3C */	b .L_8022AC44
.L_8022AC0C:
/* 8022AC0C 00227B4C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022AC10 00227B50  3B 80 00 02 */	li r28, 2
/* 8022AC14 00227B54  38 60 00 00 */	li r3, 0
/* 8022AC18 00227B58  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022AC1C 00227B5C  2C 00 00 01 */	cmpwi r0, 1
/* 8022AC20 00227B60  41 82 00 0C */	beq .L_8022AC2C
/* 8022AC24 00227B64  2C 00 00 03 */	cmpwi r0, 3
/* 8022AC28 00227B68  40 82 00 08 */	bne .L_8022AC30
.L_8022AC2C:
/* 8022AC2C 00227B6C  38 60 00 01 */	li r3, 1
.L_8022AC30:
/* 8022AC30 00227B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AC34 00227B74  40 82 00 10 */	bne .L_8022AC44
/* 8022AC38 00227B78  7F A3 EB 78 */	mr r3, r29
/* 8022AC3C 00227B7C  38 80 00 01 */	li r4, 1
/* 8022AC40 00227B80  4B F2 2C D9 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_8022AC44:
/* 8022AC44 00227B84  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AC48 00227B88  7F 84 E3 78 */	mr r4, r28
/* 8022AC4C 00227B8C  48 1D 2D 01 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_8022AC50:
/* 8022AC50 00227B90  7F C3 F3 78 */	mr r3, r30
/* 8022AC54 00227B94  38 9F 00 AC */	addi r4, r31, 0xac
/* 8022AC58 00227B98  48 20 6C 75 */	bl is__Q24Game11MovieConfigFPc
/* 8022AC5C 00227B9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AC60 00227BA0  41 82 02 28 */	beq .L_8022AE88
/* 8022AC64 00227BA4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AC68 00227BA8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8022AC6C 00227BAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AC70 00227BB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022AC74 00227BB4  7D 89 03 A6 */	mtctr r12
/* 8022AC78 00227BB8  4E 80 04 21 */	bctrl 
/* 8022AC7C 00227BBC  38 00 00 00 */	li r0, 0
/* 8022AC80 00227BC0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8022AC84 00227BC4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8022AC88 00227BC8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022AC8C 00227BCC  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8022AC90 00227BD0  28 00 00 00 */	cmplwi r0, 0
/* 8022AC94 00227BD4  90 81 00 38 */	stw r4, 0x38(r1)
/* 8022AC98 00227BD8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022AC9C 00227BDC  90 61 00 40 */	stw r3, 0x40(r1)
/* 8022ACA0 00227BE0  40 82 00 1C */	bne .L_8022ACBC
/* 8022ACA4 00227BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACA8 00227BE8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022ACAC 00227BEC  7D 89 03 A6 */	mtctr r12
/* 8022ACB0 00227BF0  4E 80 04 21 */	bctrl 
/* 8022ACB4 00227BF4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ACB8 00227BF8  48 00 01 B0 */	b .L_8022AE68
.L_8022ACBC:
/* 8022ACBC 00227BFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACC0 00227C00  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022ACC4 00227C04  7D 89 03 A6 */	mtctr r12
/* 8022ACC8 00227C08  4E 80 04 21 */	bctrl 
/* 8022ACCC 00227C0C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ACD0 00227C10  48 00 00 58 */	b .L_8022AD28
.L_8022ACD4:
/* 8022ACD4 00227C14  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ACD8 00227C18  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022ACDC 00227C1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACE0 00227C20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022ACE4 00227C24  7D 89 03 A6 */	mtctr r12
/* 8022ACE8 00227C28  4E 80 04 21 */	bctrl 
/* 8022ACEC 00227C2C  7C 64 1B 78 */	mr r4, r3
/* 8022ACF0 00227C30  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8022ACF4 00227C34  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACF8 00227C38  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022ACFC 00227C3C  7D 89 03 A6 */	mtctr r12
/* 8022AD00 00227C40  4E 80 04 21 */	bctrl 
/* 8022AD04 00227C44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD08 00227C48  40 82 01 60 */	bne .L_8022AE68
/* 8022AD0C 00227C4C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AD10 00227C50  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AD14 00227C54  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AD18 00227C58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022AD1C 00227C5C  7D 89 03 A6 */	mtctr r12
/* 8022AD20 00227C60  4E 80 04 21 */	bctrl 
/* 8022AD24 00227C64  90 61 00 3C */	stw r3, 0x3c(r1)
.L_8022AD28:
/* 8022AD28 00227C68  81 81 00 38 */	lwz r12, 0x38(r1)
/* 8022AD2C 00227C6C  38 61 00 38 */	addi r3, r1, 0x38
/* 8022AD30 00227C70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022AD34 00227C74  7D 89 03 A6 */	mtctr r12
/* 8022AD38 00227C78  4E 80 04 21 */	bctrl 
/* 8022AD3C 00227C7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD40 00227C80  41 82 FF 94 */	beq .L_8022ACD4
/* 8022AD44 00227C84  48 00 01 24 */	b .L_8022AE68
.L_8022AD48:
/* 8022AD48 00227C88  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AD4C 00227C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AD50 00227C90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022AD54 00227C94  7D 89 03 A6 */	mtctr r12
/* 8022AD58 00227C98  4E 80 04 21 */	bctrl 
/* 8022AD5C 00227C9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AD60 00227CA0  7C 7C 1B 78 */	mr r28, r3
/* 8022AD64 00227CA4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8022AD68 00227CA8  7D 89 03 A6 */	mtctr r12
/* 8022AD6C 00227CAC  4E 80 04 21 */	bctrl 
/* 8022AD70 00227CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD74 00227CB4  41 82 00 38 */	beq .L_8022ADAC
/* 8022AD78 00227CB8  7F 83 E3 78 */	mr r3, r28
/* 8022AD7C 00227CBC  4B F7 47 F9 */	bl isStickTo__Q24Game8CreatureFv
/* 8022AD80 00227CC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD84 00227CC4  40 82 00 28 */	bne .L_8022ADAC
/* 8022AD88 00227CC8  7F 83 E3 78 */	mr r3, r28
/* 8022AD8C 00227CCC  38 80 00 00 */	li r4, 0
/* 8022AD90 00227CD0  4B F1 0C C1 */	bl movie_begin__Q24Game8CreatureFb
/* 8022AD94 00227CD4  7F 83 E3 78 */	mr r3, r28
/* 8022AD98 00227CD8  4B F7 46 8D */	bl endStick__Q24Game8CreatureFv
/* 8022AD9C 00227CDC  80 7C 02 94 */	lwz r3, 0x294(r28)
/* 8022ADA0 00227CE0  38 80 00 01 */	li r4, 1
/* 8022ADA4 00227CE4  38 A0 00 00 */	li r5, 0
/* 8022ADA8 00227CE8  4B F6 C1 ED */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8022ADAC:
/* 8022ADAC 00227CEC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8022ADB0 00227CF0  28 00 00 00 */	cmplwi r0, 0
/* 8022ADB4 00227CF4  40 82 00 24 */	bne .L_8022ADD8
/* 8022ADB8 00227CF8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ADBC 00227CFC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022ADC0 00227D00  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ADC4 00227D04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022ADC8 00227D08  7D 89 03 A6 */	mtctr r12
/* 8022ADCC 00227D0C  4E 80 04 21 */	bctrl 
/* 8022ADD0 00227D10  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ADD4 00227D14  48 00 00 94 */	b .L_8022AE68
.L_8022ADD8:
/* 8022ADD8 00227D18  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ADDC 00227D1C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022ADE0 00227D20  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ADE4 00227D24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022ADE8 00227D28  7D 89 03 A6 */	mtctr r12
/* 8022ADEC 00227D2C  4E 80 04 21 */	bctrl 
/* 8022ADF0 00227D30  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ADF4 00227D34  48 00 00 58 */	b .L_8022AE4C
.L_8022ADF8:
/* 8022ADF8 00227D38  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ADFC 00227D3C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AE00 00227D40  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE04 00227D44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022AE08 00227D48  7D 89 03 A6 */	mtctr r12
/* 8022AE0C 00227D4C  4E 80 04 21 */	bctrl 
/* 8022AE10 00227D50  7C 64 1B 78 */	mr r4, r3
/* 8022AE14 00227D54  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8022AE18 00227D58  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE1C 00227D5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AE20 00227D60  7D 89 03 A6 */	mtctr r12
/* 8022AE24 00227D64  4E 80 04 21 */	bctrl 
/* 8022AE28 00227D68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AE2C 00227D6C  40 82 00 3C */	bne .L_8022AE68
/* 8022AE30 00227D70  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AE34 00227D74  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AE38 00227D78  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE3C 00227D7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022AE40 00227D80  7D 89 03 A6 */	mtctr r12
/* 8022AE44 00227D84  4E 80 04 21 */	bctrl 
/* 8022AE48 00227D88  90 61 00 3C */	stw r3, 0x3c(r1)
.L_8022AE4C:
/* 8022AE4C 00227D8C  81 81 00 38 */	lwz r12, 0x38(r1)
/* 8022AE50 00227D90  38 61 00 38 */	addi r3, r1, 0x38
/* 8022AE54 00227D94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022AE58 00227D98  7D 89 03 A6 */	mtctr r12
/* 8022AE5C 00227D9C  4E 80 04 21 */	bctrl 
/* 8022AE60 00227DA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AE64 00227DA4  41 82 FF 94 */	beq .L_8022ADF8
.L_8022AE68:
/* 8022AE68 00227DA8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AE6C 00227DAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE70 00227DB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022AE74 00227DB4  7D 89 03 A6 */	mtctr r12
/* 8022AE78 00227DB8  4E 80 04 21 */	bctrl 
/* 8022AE7C 00227DBC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AE80 00227DC0  7C 04 18 40 */	cmplw r4, r3
/* 8022AE84 00227DC4  40 82 FE C4 */	bne .L_8022AD48
.L_8022AE88:
/* 8022AE88 00227DC8  7F C3 F3 78 */	mr r3, r30
/* 8022AE8C 00227DCC  38 9F 01 30 */	addi r4, r31, 0x130
/* 8022AE90 00227DD0  48 20 6A 3D */	bl is__Q24Game11MovieConfigFPc
/* 8022AE94 00227DD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AE98 00227DD8  41 82 00 B4 */	beq .L_8022AF4C
/* 8022AE9C 00227DDC  80 9D 01 FC */	lwz r4, 0x220(r29)
/* 8022AEA0 00227DE0  38 61 00 14 */	addi r3, r1, 0x14
/* 8022AEA4 00227DE4  81 84 00 00 */	lwz r12, 0(r4)
/* 8022AEA8 00227DE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AEAC 00227DEC  7D 89 03 A6 */	mtctr r12
/* 8022AEB0 00227DF0  4E 80 04 21 */	bctrl 
/* 8022AEB4 00227DF4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8022AEB8 00227DF8  7F A3 EB 78 */	mr r3, r29
/* 8022AEBC 00227DFC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8022AEC0 00227E00  38 81 00 2C */	addi r4, r1, 0x2c
/* 8022AEC4 00227E04  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8022AEC8 00227E08  38 A0 00 01 */	li r5, 1
/* 8022AECC 00227E0C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022AED0 00227E10  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022AED4 00227E14  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022AED8 00227E18  4B F2 32 59 */	bl "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b"
/* 8022AEDC 00227E1C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8022AEE0 00227E20  38 9D 02 14 */	addi r4, r29, 0x238
/* 8022AEE4 00227E24  4B F3 5E 59 */	bl saveAllPikmins__Q24Game7PikiMgrFRQ24Game13PikiContainer
/* 8022AEE8 00227E28  3B 80 00 00 */	li r28, 0
.L_8022AEEC:
/* 8022AEEC 00227E2C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022AEF0 00227E30  7F 84 E3 78 */	mr r4, r28
/* 8022AEF4 00227E34  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AEF8 00227E38  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022AEFC 00227E3C  7D 89 03 A6 */	mtctr r12
/* 8022AF00 00227E40  4E 80 04 21 */	bctrl 
/* 8022AF04 00227E44  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AF08 00227E48  7C 7B 1B 78 */	mr r27, r3
/* 8022AF0C 00227E4C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8022AF10 00227E50  7D 89 03 A6 */	mtctr r12
/* 8022AF14 00227E54  4E 80 04 21 */	bctrl 
/* 8022AF18 00227E58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AF1C 00227E5C  41 82 00 1C */	beq .L_8022AF38
/* 8022AF20 00227E60  7F 63 DB 78 */	mr r3, r27
/* 8022AF24 00227E64  4B F7 46 51 */	bl isStickTo__Q24Game8CreatureFv
/* 8022AF28 00227E68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AF2C 00227E6C  41 82 00 0C */	beq .L_8022AF38
/* 8022AF30 00227E70  7F 63 DB 78 */	mr r3, r27
/* 8022AF34 00227E74  4B F7 44 F1 */	bl endStick__Q24Game8CreatureFv
.L_8022AF38:
/* 8022AF38 00227E78  3B 9C 00 01 */	addi r28, r28, 1
/* 8022AF3C 00227E7C  2C 1C 00 02 */	cmpwi r28, 2
/* 8022AF40 00227E80  41 80 FF AC */	blt .L_8022AEEC
/* 8022AF44 00227E84  38 00 00 00 */	li r0, 0
/* 8022AF48 00227E88  90 1D 01 FC */	stw r0, 0x220(r29)
.L_8022AF4C:
/* 8022AF4C 00227E8C  7F C3 F3 78 */	mr r3, r30
/* 8022AF50 00227E90  38 9F 01 3C */	addi r4, r31, 0x13c
/* 8022AF54 00227E94  48 20 69 79 */	bl is__Q24Game11MovieConfigFPc
/* 8022AF58 00227E98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AF5C 00227E9C  41 82 00 40 */	beq .L_8022AF9C
/* 8022AF60 00227EA0  80 9D 02 00 */	lwz r4, 0x224(r29)
/* 8022AF64 00227EA4  38 61 00 08 */	addi r3, r1, 8
/* 8022AF68 00227EA8  81 84 00 00 */	lwz r12, 0(r4)
/* 8022AF6C 00227EAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AF70 00227EB0  7D 89 03 A6 */	mtctr r12
/* 8022AF74 00227EB4  4E 80 04 21 */	bctrl 
/* 8022AF78 00227EB8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022AF7C 00227EBC  7F A3 EB 78 */	mr r3, r29
/* 8022AF80 00227EC0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022AF84 00227EC4  38 81 00 20 */	addi r4, r1, 0x20
/* 8022AF88 00227EC8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022AF8C 00227ECC  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8022AF90 00227ED0  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8022AF94 00227ED4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8022AF98 00227ED8  4B F2 38 25 */	bl "prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3<f>"
.L_8022AF9C:
/* 8022AF9C 00227EDC  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8022AFA0 00227EE0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022AFA4 00227EE4  7C 08 03 A6 */	mtlr r0
/* 8022AFA8 00227EE8  38 21 00 60 */	addi r1, r1, 0x60
/* 8022AFAC 00227EEC  4E 80 00 20 */	blr 
.else
.global onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl:
/* 8022AB3C 00227A7C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8022AB40 00227A80  7C 08 02 A6 */	mflr r0
/* 8022AB44 00227A84  3C 60 80 48 */	lis r3, lbl_80483550@ha
/* 8022AB48 00227A88  90 01 00 64 */	stw r0, 0x64(r1)
/* 8022AB4C 00227A8C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 8022AB50 00227A90  7C BE 2B 78 */	mr r30, r5
/* 8022AB54 00227A94  3B E3 35 50 */	addi r31, r3, lbl_80483550@l
/* 8022AB58 00227A98  7C 9D 23 78 */	mr r29, r4
/* 8022AB5C 00227A9C  7C FB 3B 78 */	mr r27, r7
/* 8022AB60 00227AA0  7F C3 F3 78 */	mr r3, r30
/* 8022AB64 00227AA4  38 9F 00 FC */	addi r4, r31, 0xfc
/* 8022AB68 00227AA8  48 20 6D 65 */	bl is__Q24Game11MovieConfigFPc
/* 8022AB6C 00227AAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AB70 00227AB0  40 82 00 18 */	bne .L_8022AB88
/* 8022AB74 00227AB4  7F C3 F3 78 */	mr r3, r30
/* 8022AB78 00227AB8  38 9F 01 0C */	addi r4, r31, 0x10c
/* 8022AB7C 00227ABC  48 20 6D 51 */	bl is__Q24Game11MovieConfigFPc
/* 8022AB80 00227AC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AB84 00227AC4  41 82 00 0C */	beq .L_8022AB90
.L_8022AB88:
/* 8022AB88 00227AC8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AB8C 00227ACC  48 1D 15 45 */	bl setToumeiBG__Q26Screen9Game2DMgrFv
.L_8022AB90:
/* 8022AB90 00227AD0  7F C3 F3 78 */	mr r3, r30
/* 8022AB94 00227AD4  38 9F 00 18 */	addi r4, r31, 0x18
/* 8022AB98 00227AD8  48 20 6D 35 */	bl is__Q24Game11MovieConfigFPc
/* 8022AB9C 00227ADC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022ABA0 00227AE0  41 82 00 0C */	beq .L_8022ABAC
/* 8022ABA4 00227AE4  7F A3 EB 78 */	mr r3, r29
/* 8022ABA8 00227AE8  4B F2 69 8D */	bl createFallPikminSound__Q24Game15BaseGameSectionFv
.L_8022ABAC:
/* 8022ABAC 00227AEC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022ABB0 00227AF0  48 1D 2B C5 */	bl startFadeBG_Floor__Q26Screen9Game2DMgrFv
/* 8022ABB4 00227AF4  7F C3 F3 78 */	mr r3, r30
/* 8022ABB8 00227AF8  38 9F 01 20 */	addi r4, r31, 0x120
/* 8022ABBC 00227AFC  48 20 6D 11 */	bl is__Q24Game11MovieConfigFPc
/* 8022ABC0 00227B00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022ABC4 00227B04  41 82 00 8C */	beq .L_8022AC50
/* 8022ABC8 00227B08  28 1B 00 00 */	cmplwi r27, 0
/* 8022ABCC 00227B0C  40 82 00 40 */	bne .L_8022AC0C
/* 8022ABD0 00227B10  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022ABD4 00227B14  3B 80 00 01 */	li r28, 1
/* 8022ABD8 00227B18  38 60 00 00 */	li r3, 0
/* 8022ABDC 00227B1C  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022ABE0 00227B20  2C 00 00 01 */	cmpwi r0, 1
/* 8022ABE4 00227B24  41 82 00 0C */	beq .L_8022ABF0
/* 8022ABE8 00227B28  2C 00 00 03 */	cmpwi r0, 3
/* 8022ABEC 00227B2C  40 82 00 08 */	bne .L_8022ABF4
.L_8022ABF0:
/* 8022ABF0 00227B30  38 60 00 01 */	li r3, 1
.L_8022ABF4:
/* 8022ABF4 00227B34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022ABF8 00227B38  40 82 00 4C */	bne .L_8022AC44
/* 8022ABFC 00227B3C  7F A3 EB 78 */	mr r3, r29
/* 8022AC00 00227B40  38 80 00 00 */	li r4, 0
/* 8022AC04 00227B44  4B F2 2D 15 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 8022AC08 00227B48  48 00 00 3C */	b .L_8022AC44
.L_8022AC0C:
/* 8022AC0C 00227B4C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022AC10 00227B50  3B 80 00 02 */	li r28, 2
/* 8022AC14 00227B54  38 60 00 00 */	li r3, 0
/* 8022AC18 00227B58  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8022AC1C 00227B5C  2C 00 00 01 */	cmpwi r0, 1
/* 8022AC20 00227B60  41 82 00 0C */	beq .L_8022AC2C
/* 8022AC24 00227B64  2C 00 00 03 */	cmpwi r0, 3
/* 8022AC28 00227B68  40 82 00 08 */	bne .L_8022AC30
.L_8022AC2C:
/* 8022AC2C 00227B6C  38 60 00 01 */	li r3, 1
.L_8022AC30:
/* 8022AC30 00227B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AC34 00227B74  40 82 00 10 */	bne .L_8022AC44
/* 8022AC38 00227B78  7F A3 EB 78 */	mr r3, r29
/* 8022AC3C 00227B7C  38 80 00 01 */	li r4, 1
/* 8022AC40 00227B80  4B F2 2C D9 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_8022AC44:
/* 8022AC44 00227B84  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AC48 00227B88  7F 84 E3 78 */	mr r4, r28
/* 8022AC4C 00227B8C  48 1D 2D 01 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_8022AC50:
/* 8022AC50 00227B90  7F C3 F3 78 */	mr r3, r30
/* 8022AC54 00227B94  38 9F 00 AC */	addi r4, r31, 0xac
/* 8022AC58 00227B98  48 20 6C 75 */	bl is__Q24Game11MovieConfigFPc
/* 8022AC5C 00227B9C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AC60 00227BA0  41 82 02 28 */	beq .L_8022AE88
/* 8022AC64 00227BA4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022AC68 00227BA8  80 63 00 18 */	lwz r3, 0x18(r3)
/* 8022AC6C 00227BAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AC70 00227BB0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022AC74 00227BB4  7D 89 03 A6 */	mtctr r12
/* 8022AC78 00227BB8  4E 80 04 21 */	bctrl 
/* 8022AC7C 00227BBC  38 00 00 00 */	li r0, 0
/* 8022AC80 00227BC0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8022AC84 00227BC4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8022AC88 00227BC8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022AC8C 00227BCC  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8022AC90 00227BD0  28 00 00 00 */	cmplwi r0, 0
/* 8022AC94 00227BD4  90 81 00 38 */	stw r4, 0x38(r1)
/* 8022AC98 00227BD8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022AC9C 00227BDC  90 61 00 40 */	stw r3, 0x40(r1)
/* 8022ACA0 00227BE0  40 82 00 1C */	bne .L_8022ACBC
/* 8022ACA4 00227BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACA8 00227BE8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022ACAC 00227BEC  7D 89 03 A6 */	mtctr r12
/* 8022ACB0 00227BF0  4E 80 04 21 */	bctrl 
/* 8022ACB4 00227BF4  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ACB8 00227BF8  48 00 01 B0 */	b .L_8022AE68
.L_8022ACBC:
/* 8022ACBC 00227BFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACC0 00227C00  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022ACC4 00227C04  7D 89 03 A6 */	mtctr r12
/* 8022ACC8 00227C08  4E 80 04 21 */	bctrl 
/* 8022ACCC 00227C0C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ACD0 00227C10  48 00 00 58 */	b .L_8022AD28
.L_8022ACD4:
/* 8022ACD4 00227C14  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ACD8 00227C18  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022ACDC 00227C1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACE0 00227C20  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022ACE4 00227C24  7D 89 03 A6 */	mtctr r12
/* 8022ACE8 00227C28  4E 80 04 21 */	bctrl 
/* 8022ACEC 00227C2C  7C 64 1B 78 */	mr r4, r3
/* 8022ACF0 00227C30  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8022ACF4 00227C34  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ACF8 00227C38  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022ACFC 00227C3C  7D 89 03 A6 */	mtctr r12
/* 8022AD00 00227C40  4E 80 04 21 */	bctrl 
/* 8022AD04 00227C44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD08 00227C48  40 82 01 60 */	bne .L_8022AE68
/* 8022AD0C 00227C4C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AD10 00227C50  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AD14 00227C54  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AD18 00227C58  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022AD1C 00227C5C  7D 89 03 A6 */	mtctr r12
/* 8022AD20 00227C60  4E 80 04 21 */	bctrl 
/* 8022AD24 00227C64  90 61 00 3C */	stw r3, 0x3c(r1)
.L_8022AD28:
/* 8022AD28 00227C68  81 81 00 38 */	lwz r12, 0x38(r1)
/* 8022AD2C 00227C6C  38 61 00 38 */	addi r3, r1, 0x38
/* 8022AD30 00227C70  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022AD34 00227C74  7D 89 03 A6 */	mtctr r12
/* 8022AD38 00227C78  4E 80 04 21 */	bctrl 
/* 8022AD3C 00227C7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD40 00227C80  41 82 FF 94 */	beq .L_8022ACD4
/* 8022AD44 00227C84  48 00 01 24 */	b .L_8022AE68
.L_8022AD48:
/* 8022AD48 00227C88  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AD4C 00227C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AD50 00227C90  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022AD54 00227C94  7D 89 03 A6 */	mtctr r12
/* 8022AD58 00227C98  4E 80 04 21 */	bctrl 
/* 8022AD5C 00227C9C  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AD60 00227CA0  7C 7C 1B 78 */	mr r28, r3
/* 8022AD64 00227CA4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8022AD68 00227CA8  7D 89 03 A6 */	mtctr r12
/* 8022AD6C 00227CAC  4E 80 04 21 */	bctrl 
/* 8022AD70 00227CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD74 00227CB4  41 82 00 38 */	beq .L_8022ADAC
/* 8022AD78 00227CB8  7F 83 E3 78 */	mr r3, r28
/* 8022AD7C 00227CBC  4B F7 47 F9 */	bl isStickTo__Q24Game8CreatureFv
/* 8022AD80 00227CC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AD84 00227CC4  40 82 00 28 */	bne .L_8022ADAC
/* 8022AD88 00227CC8  7F 83 E3 78 */	mr r3, r28
/* 8022AD8C 00227CCC  38 80 00 00 */	li r4, 0
/* 8022AD90 00227CD0  4B F1 0C C1 */	bl movie_begin__Q24Game8CreatureFb
/* 8022AD94 00227CD4  7F 83 E3 78 */	mr r3, r28
/* 8022AD98 00227CD8  4B F7 46 8D */	bl endStick__Q24Game8CreatureFv
/* 8022AD9C 00227CDC  80 7C 02 94 */	lwz r3, 0x294(r28)
/* 8022ADA0 00227CE0  38 80 00 01 */	li r4, 1
/* 8022ADA4 00227CE4  38 A0 00 00 */	li r5, 0
/* 8022ADA8 00227CE8  4B F6 C1 ED */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_8022ADAC:
/* 8022ADAC 00227CEC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8022ADB0 00227CF0  28 00 00 00 */	cmplwi r0, 0
/* 8022ADB4 00227CF4  40 82 00 24 */	bne .L_8022ADD8
/* 8022ADB8 00227CF8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ADBC 00227CFC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022ADC0 00227D00  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ADC4 00227D04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022ADC8 00227D08  7D 89 03 A6 */	mtctr r12
/* 8022ADCC 00227D0C  4E 80 04 21 */	bctrl 
/* 8022ADD0 00227D10  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ADD4 00227D14  48 00 00 94 */	b .L_8022AE68
.L_8022ADD8:
/* 8022ADD8 00227D18  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ADDC 00227D1C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022ADE0 00227D20  81 83 00 00 */	lwz r12, 0(r3)
/* 8022ADE4 00227D24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022ADE8 00227D28  7D 89 03 A6 */	mtctr r12
/* 8022ADEC 00227D2C  4E 80 04 21 */	bctrl 
/* 8022ADF0 00227D30  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022ADF4 00227D34  48 00 00 58 */	b .L_8022AE4C
.L_8022ADF8:
/* 8022ADF8 00227D38  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022ADFC 00227D3C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AE00 00227D40  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE04 00227D44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022AE08 00227D48  7D 89 03 A6 */	mtctr r12
/* 8022AE0C 00227D4C  4E 80 04 21 */	bctrl 
/* 8022AE10 00227D50  7C 64 1B 78 */	mr r4, r3
/* 8022AE14 00227D54  80 61 00 44 */	lwz r3, 0x44(r1)
/* 8022AE18 00227D58  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE1C 00227D5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AE20 00227D60  7D 89 03 A6 */	mtctr r12
/* 8022AE24 00227D64  4E 80 04 21 */	bctrl 
/* 8022AE28 00227D68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AE2C 00227D6C  40 82 00 3C */	bne .L_8022AE68
/* 8022AE30 00227D70  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AE34 00227D74  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AE38 00227D78  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE3C 00227D7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022AE40 00227D80  7D 89 03 A6 */	mtctr r12
/* 8022AE44 00227D84  4E 80 04 21 */	bctrl 
/* 8022AE48 00227D88  90 61 00 3C */	stw r3, 0x3c(r1)
.L_8022AE4C:
/* 8022AE4C 00227D8C  81 81 00 38 */	lwz r12, 0x38(r1)
/* 8022AE50 00227D90  38 61 00 38 */	addi r3, r1, 0x38
/* 8022AE54 00227D94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022AE58 00227D98  7D 89 03 A6 */	mtctr r12
/* 8022AE5C 00227D9C  4E 80 04 21 */	bctrl 
/* 8022AE60 00227DA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AE64 00227DA4  41 82 FF 94 */	beq .L_8022ADF8
.L_8022AE68:
/* 8022AE68 00227DA8  80 61 00 40 */	lwz r3, 0x40(r1)
/* 8022AE6C 00227DAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AE70 00227DB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022AE74 00227DB4  7D 89 03 A6 */	mtctr r12
/* 8022AE78 00227DB8  4E 80 04 21 */	bctrl 
/* 8022AE7C 00227DBC  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 8022AE80 00227DC0  7C 04 18 40 */	cmplw r4, r3
/* 8022AE84 00227DC4  40 82 FE C4 */	bne .L_8022AD48
.L_8022AE88:
/* 8022AE88 00227DC8  7F C3 F3 78 */	mr r3, r30
/* 8022AE8C 00227DCC  38 9F 01 30 */	addi r4, r31, 0x130
/* 8022AE90 00227DD0  48 20 6A 3D */	bl is__Q24Game11MovieConfigFPc
/* 8022AE94 00227DD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AE98 00227DD8  41 82 00 B4 */	beq .L_8022AF4C
/* 8022AE9C 00227DDC  80 9D 01 FC */	lwz r4, 0x1fc(r29)
/* 8022AEA0 00227DE0  38 61 00 14 */	addi r3, r1, 0x14
/* 8022AEA4 00227DE4  81 84 00 00 */	lwz r12, 0(r4)
/* 8022AEA8 00227DE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AEAC 00227DEC  7D 89 03 A6 */	mtctr r12
/* 8022AEB0 00227DF0  4E 80 04 21 */	bctrl 
/* 8022AEB4 00227DF4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8022AEB8 00227DF8  7F A3 EB 78 */	mr r3, r29
/* 8022AEBC 00227DFC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8022AEC0 00227E00  38 81 00 2C */	addi r4, r1, 0x2c
/* 8022AEC4 00227E04  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8022AEC8 00227E08  38 A0 00 01 */	li r5, 1
/* 8022AECC 00227E0C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022AED0 00227E10  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022AED4 00227E14  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022AED8 00227E18  4B F2 32 59 */	bl "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b"
/* 8022AEDC 00227E1C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8022AEE0 00227E20  38 9D 02 14 */	addi r4, r29, 0x214
/* 8022AEE4 00227E24  4B F3 5E 59 */	bl saveAllPikmins__Q24Game7PikiMgrFRQ24Game13PikiContainer
/* 8022AEE8 00227E28  3B 80 00 00 */	li r28, 0
.L_8022AEEC:
/* 8022AEEC 00227E2C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022AEF0 00227E30  7F 84 E3 78 */	mr r4, r28
/* 8022AEF4 00227E34  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AEF8 00227E38  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022AEFC 00227E3C  7D 89 03 A6 */	mtctr r12
/* 8022AF00 00227E40  4E 80 04 21 */	bctrl 
/* 8022AF04 00227E44  81 83 00 00 */	lwz r12, 0(r3)
/* 8022AF08 00227E48  7C 7B 1B 78 */	mr r27, r3
/* 8022AF0C 00227E4C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8022AF10 00227E50  7D 89 03 A6 */	mtctr r12
/* 8022AF14 00227E54  4E 80 04 21 */	bctrl 
/* 8022AF18 00227E58  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AF1C 00227E5C  41 82 00 1C */	beq .L_8022AF38
/* 8022AF20 00227E60  7F 63 DB 78 */	mr r3, r27
/* 8022AF24 00227E64  4B F7 46 51 */	bl isStickTo__Q24Game8CreatureFv
/* 8022AF28 00227E68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AF2C 00227E6C  41 82 00 0C */	beq .L_8022AF38
/* 8022AF30 00227E70  7F 63 DB 78 */	mr r3, r27
/* 8022AF34 00227E74  4B F7 44 F1 */	bl endStick__Q24Game8CreatureFv
.L_8022AF38:
/* 8022AF38 00227E78  3B 9C 00 01 */	addi r28, r28, 1
/* 8022AF3C 00227E7C  2C 1C 00 02 */	cmpwi r28, 2
/* 8022AF40 00227E80  41 80 FF AC */	blt .L_8022AEEC
/* 8022AF44 00227E84  38 00 00 00 */	li r0, 0
/* 8022AF48 00227E88  90 1D 01 FC */	stw r0, 0x1fc(r29)
.L_8022AF4C:
/* 8022AF4C 00227E8C  7F C3 F3 78 */	mr r3, r30
/* 8022AF50 00227E90  38 9F 01 3C */	addi r4, r31, 0x13c
/* 8022AF54 00227E94  48 20 69 79 */	bl is__Q24Game11MovieConfigFPc
/* 8022AF58 00227E98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022AF5C 00227E9C  41 82 00 40 */	beq .L_8022AF9C
/* 8022AF60 00227EA0  80 9D 02 00 */	lwz r4, 0x200(r29)
/* 8022AF64 00227EA4  38 61 00 08 */	addi r3, r1, 8
/* 8022AF68 00227EA8  81 84 00 00 */	lwz r12, 0(r4)
/* 8022AF6C 00227EAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022AF70 00227EB0  7D 89 03 A6 */	mtctr r12
/* 8022AF74 00227EB4  4E 80 04 21 */	bctrl 
/* 8022AF78 00227EB8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022AF7C 00227EBC  7F A3 EB 78 */	mr r3, r29
/* 8022AF80 00227EC0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022AF84 00227EC4  38 81 00 20 */	addi r4, r1, 0x20
/* 8022AF88 00227EC8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022AF8C 00227ECC  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8022AF90 00227ED0  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8022AF94 00227ED4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8022AF98 00227ED8  4B F2 38 25 */	bl "prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3<f>"
.L_8022AF9C:
/* 8022AF9C 00227EDC  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8022AFA0 00227EE0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022AFA4 00227EE4  7C 08 03 A6 */	mtlr r0
/* 8022AFA8 00227EE8  38 21 00 60 */	addi r1, r1, 0x60
/* 8022AFAC 00227EEC  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl:
/* 8022AFB0 00227EF0  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8022AFB4 00227EF4  7C 08 02 A6 */	mflr r0
/* 8022AFB8 00227EF8  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8022AFBC 00227EFC  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8022AFC0 00227F00  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8022AFC4 00227F04  BF 01 00 90 */	stmw r24, 0x90(r1)
/* 8022AFC8 00227F08  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 8022AFCC 00227F0C  3C C0 80 48 */	lis r6, lbl_80483550@ha
/* 8022AFD0 00227F10  7C 7E 1B 78 */	mr r30, r3
/* 8022AFD4 00227F14  7C 9F 23 78 */	mr r31, r4
/* 8022AFD8 00227F18  80 08 00 44 */	lwz r0, 0x44(r8)
/* 8022AFDC 00227F1C  7C B9 2B 78 */	mr r25, r5
/* 8022AFE0 00227F20  7C FA 3B 78 */	mr r26, r7
/* 8022AFE4 00227F24  3B A6 35 50 */	addi r29, r6, lbl_80483550@l
/* 8022AFE8 00227F28  2C 00 00 01 */	cmpwi r0, 1
/* 8022AFEC 00227F2C  38 60 00 00 */	li r3, 0
/* 8022AFF0 00227F30  41 82 00 0C */	beq .L_8022AFFC
/* 8022AFF4 00227F34  2C 00 00 03 */	cmpwi r0, 3
/* 8022AFF8 00227F38  40 82 00 08 */	bne .L_8022B000
.L_8022AFFC:
/* 8022AFFC 00227F3C  38 60 00 01 */	li r3, 1
.L_8022B000:
/* 8022B000 00227F40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B004 00227F44  41 82 00 10 */	beq .L_8022B014
/* 8022B008 00227F48  7F E3 FB 78 */	mr r3, r31
/* 8022B00C 00227F4C  38 80 00 02 */	li r4, 2
/* 8022B010 00227F50  4B F2 29 09 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_8022B014:
/* 8022B014 00227F54  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8022B018 00227F58  83 83 00 30 */	lwz r28, 0x30(r3)
/* 8022B01C 00227F5C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8022B020 00227F60  4B FA C4 D1 */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 8022B024 00227F64  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8022B028 00227F68  38 03 FF FF */	addi r0, r3, -1
/* 8022B02C 00227F6C  7C 9C 00 50 */	subf r4, r28, r0
/* 8022B030 00227F70  38 60 00 00 */	li r3, 0
/* 8022B034 00227F74  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8022B038 00227F78  7C 84 00 34 */	cntlzw r4, r4
/* 8022B03C 00227F7C  54 9B D9 7E */	srwi r27, r4, 5
/* 8022B040 00227F80  2C 00 00 02 */	cmpwi r0, 2
/* 8022B044 00227F84  41 82 00 0C */	beq .L_8022B050
/* 8022B048 00227F88  2C 00 00 03 */	cmpwi r0, 3
/* 8022B04C 00227F8C  40 82 00 08 */	bne .L_8022B054
.L_8022B050:
/* 8022B050 00227F90  38 60 00 01 */	li r3, 1
.L_8022B054:
/* 8022B054 00227F94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B058 00227F98  41 82 01 10 */	beq .L_8022B168
/* 8022B05C 00227F9C  4B FF 35 D5 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 8022B060 00227FA0  2C 03 00 00 */	cmpwi r3, 0
/* 8022B064 00227FA4  40 82 01 04 */	bne .L_8022B168
/* 8022B068 00227FA8  7F 23 CB 78 */	mr r3, r25
/* 8022B06C 00227FAC  38 9D 00 FC */	addi r4, r29, 0xfc
/* 8022B070 00227FB0  48 20 68 5D */	bl is__Q24Game11MovieConfigFPc
/* 8022B074 00227FB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B078 00227FB8  40 82 00 18 */	bne .L_8022B090
/* 8022B07C 00227FBC  7F 23 CB 78 */	mr r3, r25
/* 8022B080 00227FC0  38 9D 01 0C */	addi r4, r29, 0x10c
/* 8022B084 00227FC4  48 20 68 49 */	bl is__Q24Game11MovieConfigFPc
/* 8022B088 00227FC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B08C 00227FCC  41 82 00 DC */	beq .L_8022B168
.L_8022B090:
/* 8022B090 00227FD0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B094 00227FD4  28 00 00 00 */	cmplwi r0, 0
/* 8022B098 00227FD8  40 82 00 18 */	bne .L_8022B0B0
/* 8022B09C 00227FDC  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B0A0 00227FE0  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B0A4 00227FE4  38 80 01 D3 */	li r4, 0x1d3
/* 8022B0A8 00227FE8  4C C6 31 82 */	crclr 6
/* 8022B0AC 00227FEC  4B DF F5 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B0B0:
/* 8022B0B0 00227FF0  83 0D 98 80 */	lwz r24, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B0B4 00227FF4  28 18 00 00 */	cmplwi r24, 0
/* 8022B0B8 00227FF8  40 82 00 18 */	bne .L_8022B0D0
/* 8022B0BC 00227FFC  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B0C0 00228000  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B0C4 00228004  38 80 01 DC */	li r4, 0x1dc
/* 8022B0C8 00228008  4C C6 31 82 */	crclr 6
/* 8022B0CC 0022800C  4B DF F5 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B0D0:
/* 8022B0D0 00228010  80 18 00 04 */	lwz r0, 4(r24)
/* 8022B0D4 00228014  28 00 00 00 */	cmplwi r0, 0
/* 8022B0D8 00228018  40 82 00 18 */	bne .L_8022B0F0
/* 8022B0DC 0022801C  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B0E0 00228020  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B0E4 00228024  38 80 00 CF */	li r4, 0xcf
/* 8022B0E8 00228028  4C C6 31 82 */	crclr 6
/* 8022B0EC 0022802C  4B DF F5 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B0F0:
/* 8022B0F0 00228030  80 78 00 04 */	lwz r3, 4(r24)
/* 8022B0F4 00228034  83 03 00 04 */	lwz r24, 4(r3)
/* 8022B0F8 00228038  28 18 00 00 */	cmplwi r24, 0
/* 8022B0FC 0022803C  40 82 00 18 */	bne .L_8022B114
/* 8022B100 00228040  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B104 00228044  38 BD 01 64 */	addi r5, r29, 0x164
/* 8022B108 00228048  38 80 00 D1 */	li r4, 0xd1
/* 8022B10C 0022804C  4C C6 31 82 */	crclr 6
/* 8022B110 00228050  4B DF F5 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B114:
/* 8022B114 00228054  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B118 00228058  7F 03 C3 78 */	mr r3, r24
/* 8022B11C 0022805C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8022B120 00228060  7D 89 03 A6 */	mtctr r12
/* 8022B124 00228064  4E 80 04 21 */	bctrl 
/* 8022B128 00228068  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B12C 0022806C  40 82 00 18 */	bne .L_8022B144
/* 8022B130 00228070  38 7D 01 88 */	addi r3, r29, 0x188
/* 8022B134 00228074  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B138 00228078  38 80 01 77 */	li r4, 0x177
/* 8022B13C 0022807C  4C C6 31 82 */	crclr 6
/* 8022B140 00228080  4B DF F5 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B144:
/* 8022B144 00228084  7F 03 C3 78 */	mr r3, r24
/* 8022B148 00228088  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B14C 0022808C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022B150 00228090  7D 89 03 A6 */	mtctr r12
/* 8022B154 00228094  4E 80 04 21 */	bctrl 
/* 8022B158 00228098  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B15C 0022809C  41 82 00 0C */	beq .L_8022B168
/* 8022B160 002280A0  7F 03 C3 78 */	mr r3, r24
/* 8022B164 002280A4  48 23 EF DD */	bl startPollutUpSe__Q23PSM10Scene_CaveFv
.L_8022B168:
/* 8022B168 002280A8  7F 23 CB 78 */	mr r3, r25
/* 8022B16C 002280AC  38 9D 00 DC */	addi r4, r29, 0xdc
/* 8022B170 002280B0  48 20 67 5D */	bl is__Q24Game11MovieConfigFPc
/* 8022B174 002280B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B178 002280B8  41 82 00 D0 */	beq .L_8022B248
/* 8022B17C 002280BC  88 1E 00 25 */	lbz r0, 0x25(r30)
/* 8022B180 002280C0  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022B184 002280C4  40 82 00 10 */	bne .L_8022B194
/* 8022B188 002280C8  88 1E 00 26 */	lbz r0, 0x26(r30)
/* 8022B18C 002280CC  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022B190 002280D0  41 82 00 B8 */	beq .L_8022B248
.L_8022B194:
/* 8022B194 002280D4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B198 002280D8  28 00 00 00 */	cmplwi r0, 0
/* 8022B19C 002280DC  40 82 00 18 */	bne .L_8022B1B4
/* 8022B1A0 002280E0  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B1A4 002280E4  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B1A8 002280E8  38 80 01 D3 */	li r4, 0x1d3
/* 8022B1AC 002280EC  4C C6 31 82 */	crclr 6
/* 8022B1B0 002280F0  4B DF F4 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B1B4:
/* 8022B1B4 002280F4  83 0D 98 80 */	lwz r24, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B1B8 002280F8  28 18 00 00 */	cmplwi r24, 0
/* 8022B1BC 002280FC  40 82 00 18 */	bne .L_8022B1D4
/* 8022B1C0 00228100  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B1C4 00228104  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B1C8 00228108  38 80 01 DC */	li r4, 0x1dc
/* 8022B1CC 0022810C  4C C6 31 82 */	crclr 6
/* 8022B1D0 00228110  4B DF F4 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B1D4:
/* 8022B1D4 00228114  80 18 00 04 */	lwz r0, 4(r24)
/* 8022B1D8 00228118  28 00 00 00 */	cmplwi r0, 0
/* 8022B1DC 0022811C  40 82 00 18 */	bne .L_8022B1F4
/* 8022B1E0 00228120  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B1E4 00228124  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B1E8 00228128  38 80 00 CF */	li r4, 0xcf
/* 8022B1EC 0022812C  4C C6 31 82 */	crclr 6
/* 8022B1F0 00228130  4B DF F4 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B1F4:
/* 8022B1F4 00228134  80 78 00 04 */	lwz r3, 4(r24)
/* 8022B1F8 00228138  83 03 00 04 */	lwz r24, 4(r3)
/* 8022B1FC 0022813C  28 18 00 00 */	cmplwi r24, 0
/* 8022B200 00228140  40 82 00 18 */	bne .L_8022B218
/* 8022B204 00228144  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B208 00228148  38 BD 01 64 */	addi r5, r29, 0x164
/* 8022B20C 0022814C  38 80 00 D1 */	li r4, 0xd1
/* 8022B210 00228150  4C C6 31 82 */	crclr 6
/* 8022B214 00228154  4B DF F4 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B218:
/* 8022B218 00228158  7F 03 C3 78 */	mr r3, r24
/* 8022B21C 0022815C  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B220 00228160  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8022B224 00228164  7D 89 03 A6 */	mtctr r12
/* 8022B228 00228168  4E 80 04 21 */	bctrl 
/* 8022B22C 0022816C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B230 00228170  41 82 00 08 */	beq .L_8022B238
/* 8022B234 00228174  48 00 00 08 */	b .L_8022B23C
.L_8022B238:
/* 8022B238 00228178  3B 00 00 00 */	li r24, 0
.L_8022B23C:
/* 8022B23C 0022817C  38 78 00 10 */	addi r3, r24, 0x10
/* 8022B240 00228180  38 80 00 0F */	li r4, 0xf
/* 8022B244 00228184  48 10 89 F9 */	bl stopAllSound__Q28PSSystem6SeqMgrFUl
.L_8022B248:
/* 8022B248 00228188  7F 23 CB 78 */	mr r3, r25
/* 8022B24C 0022818C  38 9D 01 9C */	addi r4, r29, 0x19c
/* 8022B250 00228190  48 20 66 7D */	bl is__Q24Game11MovieConfigFPc
/* 8022B254 00228194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B258 00228198  41 82 00 7C */	beq .L_8022B2D4
/* 8022B25C 0022819C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022B260 002281A0  7F E3 FB 78 */	mr r3, r31
/* 8022B264 002281A4  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8022B268 002281A8  60 00 00 02 */	ori r0, r0, 2
/* 8022B26C 002281AC  98 04 00 3C */	stb r0, 0x3c(r4)
/* 8022B270 002281B0  4B F2 2B 19 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8022B274 002281B4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8022B278 002281B8  41 82 00 18 */	beq .L_8022B290
/* 8022B27C 002281BC  7F C3 F3 78 */	mr r3, r30
/* 8022B280 002281C0  7F E4 FB 78 */	mr r4, r31
/* 8022B284 002281C4  38 A0 00 03 */	li r5, 3
/* 8022B288 002281C8  48 00 09 79 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B28C 002281CC  48 00 00 14 */	b .L_8022B2A0
.L_8022B290:
/* 8022B290 002281D0  7F C3 F3 78 */	mr r3, r30
/* 8022B294 002281D4  7F E4 FB 78 */	mr r4, r31
/* 8022B298 002281D8  38 A0 00 01 */	li r5, 1
/* 8022B29C 002281DC  48 00 09 65 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
.L_8022B2A0:
/* 8022B2A0 002281E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B2A4 002281E4  38 80 00 01 */	li r4, 1
/* 8022B2A8 002281E8  38 A2 BF 48 */	addi r5, r2, lbl_8051A2A8@sda21
/* 8022B2AC 002281EC  38 C0 00 06 */	li r6, 6
/* 8022B2B0 002281F0  4B F8 9C E5 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022B2B4 002281F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B2B8 002281F8  38 80 00 01 */	li r4, 1
/* 8022B2BC 002281FC  38 A2 BF 48 */	addi r5, r2, lbl_8051A2A8@sda21
/* 8022B2C0 00228200  4B F8 9C C5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022B2C4 00228204  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022B2C8 00228208  60 00 00 80 */	ori r0, r0, 0x80
/* 8022B2CC 0022820C  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8022B2D0 00228210  48 00 06 94 */	b .L_8022B964
.L_8022B2D4:
/* 8022B2D4 00228214  7F 23 CB 78 */	mr r3, r25
/* 8022B2D8 00228218  38 9D 00 18 */	addi r4, r29, 0x18
/* 8022B2DC 0022821C  48 20 65 F1 */	bl is__Q24Game11MovieConfigFPc
/* 8022B2E0 00228220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B2E4 00228224  41 82 04 98 */	beq .L_8022B77C
/* 8022B2E8 00228228  38 00 00 00 */	li r0, 0
/* 8022B2EC 0022822C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8022B2F0 00228230  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8022B2F4 00228234  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022B2F8 00228238  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8022B2FC 0022823C  28 00 00 00 */	cmplwi r0, 0
/* 8022B300 00228240  90 81 00 48 */	stw r4, 0x48(r1)
/* 8022B304 00228244  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8022B308 00228248  90 61 00 50 */	stw r3, 0x50(r1)
/* 8022B30C 0022824C  40 82 00 1C */	bne .L_8022B328
/* 8022B310 00228250  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B314 00228254  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022B318 00228258  7D 89 03 A6 */	mtctr r12
/* 8022B31C 0022825C  4E 80 04 21 */	bctrl 
/* 8022B320 00228260  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B324 00228264  48 00 00 8C */	b .L_8022B3B0
.L_8022B328:
/* 8022B328 00228268  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B32C 0022826C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022B330 00228270  7D 89 03 A6 */	mtctr r12
/* 8022B334 00228274  4E 80 04 21 */	bctrl 
/* 8022B338 00228278  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B33C 0022827C  48 00 00 58 */	b .L_8022B394
.L_8022B340:
/* 8022B340 00228280  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B344 00228284  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B348 00228288  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B34C 0022828C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022B350 00228290  7D 89 03 A6 */	mtctr r12
/* 8022B354 00228294  4E 80 04 21 */	bctrl 
/* 8022B358 00228298  7C 64 1B 78 */	mr r4, r3
/* 8022B35C 0022829C  80 61 00 54 */	lwz r3, 0x54(r1)
/* 8022B360 002282A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B364 002282A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B368 002282A8  7D 89 03 A6 */	mtctr r12
/* 8022B36C 002282AC  4E 80 04 21 */	bctrl 
/* 8022B370 002282B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B374 002282B4  40 82 00 3C */	bne .L_8022B3B0
/* 8022B378 002282B8  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B37C 002282BC  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B380 002282C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B384 002282C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B388 002282C8  7D 89 03 A6 */	mtctr r12
/* 8022B38C 002282CC  4E 80 04 21 */	bctrl 
/* 8022B390 002282D0  90 61 00 4C */	stw r3, 0x4c(r1)
.L_8022B394:
/* 8022B394 002282D4  81 81 00 48 */	lwz r12, 0x48(r1)
/* 8022B398 002282D8  38 61 00 48 */	addi r3, r1, 0x48
/* 8022B39C 002282DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022B3A0 002282E0  7D 89 03 A6 */	mtctr r12
/* 8022B3A4 002282E4  4E 80 04 21 */	bctrl 
/* 8022B3A8 002282E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B3AC 002282EC  41 82 FF 94 */	beq .L_8022B340
.L_8022B3B0:
/* 8022B3B0 002282F0  C3 E2 BF 14 */	lfs f31, lbl_8051A274@sda21(r2)
/* 8022B3B4 002282F4  48 00 01 4C */	b .L_8022B500
.L_8022B3B8:
/* 8022B3B8 002282F8  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B3BC 002282FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B3C0 00228300  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022B3C4 00228304  7D 89 03 A6 */	mtctr r12
/* 8022B3C8 00228308  4E 80 04 21 */	bctrl 
/* 8022B3CC 0022830C  7C 78 1B 78 */	mr r24, r3
/* 8022B3D0 00228310  38 61 00 24 */	addi r3, r1, 0x24
/* 8022B3D4 00228314  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B3D8 00228318  7F 04 C3 78 */	mr r4, r24
/* 8022B3DC 0022831C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B3E0 00228320  7D 89 03 A6 */	mtctr r12
/* 8022B3E4 00228324  4E 80 04 21 */	bctrl 
/* 8022B3E8 00228328  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8022B3EC 0022832C  38 81 00 3C */	addi r4, r1, 0x3c
/* 8022B3F0 00228330  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8022B3F4 00228334  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8022B3F8 00228338  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8022B3FC 0022833C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8022B400 00228340  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8022B404 00228344  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8022B408 00228348  81 83 00 04 */	lwz r12, 4(r3)
/* 8022B40C 0022834C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8022B410 00228350  7D 89 03 A6 */	mtctr r12
/* 8022B414 00228354  4E 80 04 21 */	bctrl 
/* 8022B418 00228358  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8022B41C 0022835C  7F 03 C3 78 */	mr r3, r24
/* 8022B420 00228360  38 81 00 3C */	addi r4, r1, 0x3c
/* 8022B424 00228364  38 A0 00 00 */	li r5, 0
/* 8022B428 00228368  4B F0 FD 81 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8022B42C 0022836C  D3 F8 02 00 */	stfs f31, 0x200(r24)
/* 8022B430 00228370  D3 F8 02 04 */	stfs f31, 0x204(r24)
/* 8022B434 00228374  D3 F8 02 08 */	stfs f31, 0x208(r24)
/* 8022B438 00228378  D3 F8 01 E4 */	stfs f31, 0x1e4(r24)
/* 8022B43C 0022837C  D3 F8 01 E8 */	stfs f31, 0x1e8(r24)
/* 8022B440 00228380  D3 F8 01 EC */	stfs f31, 0x1ec(r24)
/* 8022B444 00228384  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8022B448 00228388  28 00 00 00 */	cmplwi r0, 0
/* 8022B44C 0022838C  40 82 00 24 */	bne .L_8022B470
/* 8022B450 00228390  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B454 00228394  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B458 00228398  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B45C 0022839C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B460 002283A0  7D 89 03 A6 */	mtctr r12
/* 8022B464 002283A4  4E 80 04 21 */	bctrl 
/* 8022B468 002283A8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B46C 002283AC  48 00 00 94 */	b .L_8022B500
.L_8022B470:
/* 8022B470 002283B0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B474 002283B4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B478 002283B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B47C 002283BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B480 002283C0  7D 89 03 A6 */	mtctr r12
/* 8022B484 002283C4  4E 80 04 21 */	bctrl 
/* 8022B488 002283C8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B48C 002283CC  48 00 00 58 */	b .L_8022B4E4
.L_8022B490:
/* 8022B490 002283D0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B494 002283D4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B498 002283D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B49C 002283DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022B4A0 002283E0  7D 89 03 A6 */	mtctr r12
/* 8022B4A4 002283E4  4E 80 04 21 */	bctrl 
/* 8022B4A8 002283E8  7C 64 1B 78 */	mr r4, r3
/* 8022B4AC 002283EC  80 61 00 54 */	lwz r3, 0x54(r1)
/* 8022B4B0 002283F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B4B4 002283F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B4B8 002283F8  7D 89 03 A6 */	mtctr r12
/* 8022B4BC 002283FC  4E 80 04 21 */	bctrl 
/* 8022B4C0 00228400  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B4C4 00228404  40 82 00 3C */	bne .L_8022B500
/* 8022B4C8 00228408  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B4CC 0022840C  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B4D0 00228410  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B4D4 00228414  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B4D8 00228418  7D 89 03 A6 */	mtctr r12
/* 8022B4DC 0022841C  4E 80 04 21 */	bctrl 
/* 8022B4E0 00228420  90 61 00 4C */	stw r3, 0x4c(r1)
.L_8022B4E4:
/* 8022B4E4 00228424  81 81 00 48 */	lwz r12, 0x48(r1)
/* 8022B4E8 00228428  38 61 00 48 */	addi r3, r1, 0x48
/* 8022B4EC 0022842C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022B4F0 00228430  7D 89 03 A6 */	mtctr r12
/* 8022B4F4 00228434  4E 80 04 21 */	bctrl 
/* 8022B4F8 00228438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B4FC 0022843C  41 82 FF 94 */	beq .L_8022B490
.L_8022B500:
/* 8022B500 00228440  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B504 00228444  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B508 00228448  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B50C 0022844C  7D 89 03 A6 */	mtctr r12
/* 8022B510 00228450  4E 80 04 21 */	bctrl 
/* 8022B514 00228454  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B518 00228458  7C 04 18 40 */	cmplw r4, r3
/* 8022B51C 0022845C  40 82 FE 9C */	bne .L_8022B3B8
/* 8022B520 00228460  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022B524 00228464  48 1D 21 3D */	bl close_Floor__Q26Screen9Game2DMgrFv
/* 8022B528 00228468  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022B52C 0022846C  2C 1C 00 00 */	cmpwi r28, 0
/* 8022B530 00228470  60 00 00 04 */	ori r0, r0, 4
/* 8022B534 00228474  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8022B538 00228478  40 82 01 28 */	bne .L_8022B660
/* 8022B53C 0022847C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022B540 00228480  48 1F 79 F1 */	bl getPlayCommonData__6SystemFv
/* 8022B544 00228484  48 00 92 E9 */	bl challenge_is_virgin_check_only__Q24Game14PlayCommonDataFv
/* 8022B548 00228488  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B54C 0022848C  41 82 01 14 */	beq .L_8022B660
/* 8022B550 00228490  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B554 00228494  80 83 00 44 */	lwz r4, 0x44(r3)
/* 8022B558 00228498  2C 04 00 01 */	cmpwi r4, 1
/* 8022B55C 0022849C  41 82 01 04 */	beq .L_8022B660
/* 8022B560 002284A0  80 BF 00 C8 */	lwz r5, 0xe8(r31)
/* 8022B564 002284A4  38 00 00 00 */	li r0, 0
/* 8022B568 002284A8  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022B56C 002284AC  38 7D 01 9C */	addi r3, r29, 0x19c
/* 8022B570 002284B0  90 61 00 58 */	stw r3, 0x58(r1)
/* 8022B574 002284B4  3B 21 00 70 */	addi r25, r1, 0x70
/* 8022B578 002284B8  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8022B57C 002284BC  90 A1 00 64 */	stw r5, 0x64(r1)
/* 8022B580 002284C0  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8022B584 002284C4  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8022B588 002284C8  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 8022B58C 002284CC  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 8022B590 002284D0  90 01 00 80 */	stw r0, 0x80(r1)
/* 8022B594 002284D4  90 01 00 68 */	stw r0, 0x68(r1)
/* 8022B598 002284D8  90 01 00 60 */	stw r0, 0x60(r1)
/* 8022B59C 002284DC  90 01 00 84 */	stw r0, 0x84(r1)
/* 8022B5A0 002284E0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022B5A4 002284E4  90 01 00 88 */	stw r0, 0x88(r1)
/* 8022B5A8 002284E8  41 82 00 0C */	beq .L_8022B5B4
/* 8022B5AC 002284EC  2C 04 00 03 */	cmpwi r4, 3
/* 8022B5B0 002284F0  40 82 00 08 */	bne .L_8022B5B8
.L_8022B5B4:
/* 8022B5B4 002284F4  38 00 00 01 */	li r0, 1
.L_8022B5B8:
/* 8022B5B8 002284F8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8022B5BC 002284FC  41 82 00 10 */	beq .L_8022B5CC
/* 8022B5C0 00228500  7F E3 FB 78 */	mr r3, r31
/* 8022B5C4 00228504  38 80 00 00 */	li r4, 0
/* 8022B5C8 00228508  4B F2 23 51 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_8022B5CC:
/* 8022B5CC 0022850C  7F E3 FB 78 */	mr r3, r31
/* 8022B5D0 00228510  4B F2 27 B9 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8022B5D4 00228514  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 8022B5D8 00228518  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8022B5DC 0022851C  90 01 00 68 */	stw r0, 0x68(r1)
/* 8022B5E0 00228520  83 03 00 AC */	lwz r24, 0xac(r3)
/* 8022B5E4 00228524  28 18 00 00 */	cmplwi r24, 0
/* 8022B5E8 00228528  41 82 00 4C */	beq .L_8022B634
/* 8022B5EC 0022852C  7F 03 C3 78 */	mr r3, r24
/* 8022B5F0 00228530  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B5F4 00228534  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022B5F8 00228538  7D 89 03 A6 */	mtctr r12
/* 8022B5FC 0022853C  4E 80 04 21 */	bctrl 
/* 8022B600 00228540  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 8022B604 00228544  7F 04 C3 78 */	mr r4, r24
/* 8022B608 00228548  38 61 00 18 */	addi r3, r1, 0x18
/* 8022B60C 0022854C  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B610 00228550  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B614 00228554  7D 89 03 A6 */	mtctr r12
/* 8022B618 00228558  4E 80 04 21 */	bctrl 
/* 8022B61C 0022855C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8022B620 00228560  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8022B624 00228564  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8022B628 00228568  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 8022B62C 0022856C  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8022B630 00228570  D0 01 00 78 */	stfs f0, 0x78(r1)
.L_8022B634:
/* 8022B634 00228574  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8022B638 00228578  7F 24 CB 78 */	mr r4, r25
/* 8022B63C 0022857C  81 83 00 04 */	lwz r12, 4(r3)
/* 8022B640 00228580  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8022B644 00228584  7D 89 03 A6 */	mtctr r12
/* 8022B648 00228588  4E 80 04 21 */	bctrl 
/* 8022B64C 0022858C  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8022B650 00228590  38 81 00 58 */	addi r4, r1, 0x58
/* 8022B654 00228594  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022B658 00228598  48 20 13 79 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022B65C 0022859C  48 00 03 08 */	b .L_8022B964
.L_8022B660:
/* 8022B660 002285A0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022B664 002285A4  7F E3 FB 78 */	mr r3, r31
/* 8022B668 002285A8  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8022B66C 002285AC  60 00 00 02 */	ori r0, r0, 2
/* 8022B670 002285B0  98 04 00 3C */	stb r0, 0x3c(r4)
/* 8022B674 002285B4  4B F2 27 15 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8022B678 002285B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B67C 002285BC  2C 1C 00 00 */	cmpwi r28, 0
/* 8022B680 002285C0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8022B684 002285C4  60 00 00 02 */	ori r0, r0, 2
/* 8022B688 002285C8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8022B68C 002285CC  40 82 00 64 */	bne .L_8022B6F0
/* 8022B690 002285D0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8022B694 002285D4  41 82 00 18 */	beq .L_8022B6AC
/* 8022B698 002285D8  7F C3 F3 78 */	mr r3, r30
/* 8022B69C 002285DC  7F E4 FB 78 */	mr r4, r31
/* 8022B6A0 002285E0  38 A0 00 03 */	li r5, 3
/* 8022B6A4 002285E4  48 00 05 5D */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B6A8 002285E8  48 00 00 14 */	b .L_8022B6BC
.L_8022B6AC:
/* 8022B6AC 002285EC  7F C3 F3 78 */	mr r3, r30
/* 8022B6B0 002285F0  7F E4 FB 78 */	mr r4, r31
/* 8022B6B4 002285F4  38 A0 00 01 */	li r5, 1
/* 8022B6B8 002285F8  48 00 05 49 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
.L_8022B6BC:
/* 8022B6BC 002285FC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B6C0 00228600  38 BD 01 B0 */	addi r5, r29, 0x1b0
/* 8022B6C4 00228604  38 80 00 01 */	li r4, 1
/* 8022B6C8 00228608  38 C0 00 06 */	li r6, 6
/* 8022B6CC 0022860C  4B F8 98 C9 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022B6D0 00228610  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B6D4 00228614  38 BD 01 B0 */	addi r5, r29, 0x1b0
/* 8022B6D8 00228618  38 80 00 01 */	li r4, 1
/* 8022B6DC 0022861C  4B F8 98 A9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022B6E0 00228620  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022B6E4 00228624  60 00 00 80 */	ori r0, r0, 0x80
/* 8022B6E8 00228628  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8022B6EC 0022862C  48 00 02 78 */	b .L_8022B964
.L_8022B6F0:
/* 8022B6F0 00228630  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8022B6F4 00228634  41 82 00 18 */	beq .L_8022B70C
/* 8022B6F8 00228638  7F C3 F3 78 */	mr r3, r30
/* 8022B6FC 0022863C  7F E4 FB 78 */	mr r4, r31
/* 8022B700 00228640  38 A0 00 02 */	li r5, 2
/* 8022B704 00228644  48 00 04 FD */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B708 00228648  48 00 02 5C */	b .L_8022B964
.L_8022B70C:
/* 8022B70C 0022864C  7F C3 F3 78 */	mr r3, r30
/* 8022B710 00228650  7F E4 FB 78 */	mr r4, r31
/* 8022B714 00228654  38 A0 00 00 */	li r5, 0
/* 8022B718 00228658  48 00 04 E9 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B71C 0022865C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B720 00228660  28 00 00 00 */	cmplwi r0, 0
/* 8022B724 00228664  40 82 00 18 */	bne .L_8022B73C
/* 8022B728 00228668  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B72C 0022866C  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B730 00228670  38 80 01 D3 */	li r4, 0x1d3
/* 8022B734 00228674  4C C6 31 82 */	crclr 6
/* 8022B738 00228678  4B DF EF 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B73C:
/* 8022B73C 0022867C  83 0D 98 80 */	lwz r24, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B740 00228680  80 18 00 04 */	lwz r0, 4(r24)
/* 8022B744 00228684  28 00 00 00 */	cmplwi r0, 0
/* 8022B748 00228688  40 82 00 18 */	bne .L_8022B760
/* 8022B74C 0022868C  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B750 00228690  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B754 00228694  38 80 00 C7 */	li r4, 0xc7
/* 8022B758 00228698  4C C6 31 82 */	crclr 6
/* 8022B75C 0022869C  4B DF EE E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B760:
/* 8022B760 002286A0  80 78 00 04 */	lwz r3, 4(r24)
/* 8022B764 002286A4  80 63 00 04 */	lwz r3, 4(r3)
/* 8022B768 002286A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B76C 002286AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B770 002286B0  7D 89 03 A6 */	mtctr r12
/* 8022B774 002286B4  4E 80 04 21 */	bctrl 
/* 8022B778 002286B8  48 00 01 EC */	b .L_8022B964
.L_8022B77C:
/* 8022B77C 002286BC  7F 23 CB 78 */	mr r3, r25
/* 8022B780 002286C0  38 9D 01 30 */	addi r4, r29, 0x130
/* 8022B784 002286C4  48 20 61 49 */	bl is__Q24Game11MovieConfigFPc
/* 8022B788 002286C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B78C 002286CC  41 82 00 54 */	beq .L_8022B7E0
/* 8022B790 002286D0  48 23 BC A9 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B794 002286D4  80 9F 03 24 */	lwz r4, 0x348(r31)
/* 8022B798 002286D8  38 E0 00 00 */	li r7, 0
/* 8022B79C 002286DC  38 00 00 01 */	li r0, 1
/* 8022B7A0 002286E0  7F C3 F3 78 */	mr r3, r30
/* 8022B7A4 002286E4  38 A4 00 01 */	addi r5, r4, 1
/* 8022B7A8 002286E8  7F E4 FB 78 */	mr r4, r31
/* 8022B7AC 002286EC  90 BF 03 24 */	stw r5, 0x348(r31)
/* 8022B7B0 002286F0  38 C1 00 30 */	addi r6, r1, 0x30
/* 8022B7B4 002286F4  38 A0 00 01 */	li r5, 1
/* 8022B7B8 002286F8  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8022B7BC 002286FC  98 E1 00 38 */	stb r7, 0x38(r1)
/* 8022B7C0 00228700  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8022B7C4 00228704  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8022B7C8 00228708  98 01 00 38 */	stb r0, 0x38(r1)
/* 8022B7CC 0022870C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B7D0 00228710  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B7D4 00228714  7D 89 03 A6 */	mtctr r12
/* 8022B7D8 00228718  4E 80 04 21 */	bctrl 
/* 8022B7DC 0022871C  48 00 01 88 */	b .L_8022B964
.L_8022B7E0:
/* 8022B7E0 00228720  7F 23 CB 78 */	mr r3, r25
/* 8022B7E4 00228724  38 9D 00 AC */	addi r4, r29, 0xac
/* 8022B7E8 00228728  48 20 60 E5 */	bl is__Q24Game11MovieConfigFPc
/* 8022B7EC 0022872C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B7F0 00228730  41 82 00 48 */	beq .L_8022B838
/* 8022B7F4 00228734  48 23 BC 45 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B7F8 00228738  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8022B7FC 0022873C  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 8022B800 00228740  4B FA 58 71 */	bl clear__Q34Game8GameStat11PikiCounterFv
/* 8022B804 00228744  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022B808 00228748  48 20 17 81 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 8022B80C 0022874C  38 00 00 01 */	li r0, 1
/* 8022B810 00228750  7F C3 F3 78 */	mr r3, r30
/* 8022B814 00228754  98 01 00 14 */	stb r0, 0x14(r1)
/* 8022B818 00228758  7F E4 FB 78 */	mr r4, r31
/* 8022B81C 0022875C  38 C1 00 14 */	addi r6, r1, 0x14
/* 8022B820 00228760  38 A0 00 00 */	li r5, 0
/* 8022B824 00228764  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B828 00228768  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B82C 0022876C  7D 89 03 A6 */	mtctr r12
/* 8022B830 00228770  4E 80 04 21 */	bctrl 
/* 8022B834 00228774  48 00 01 30 */	b .L_8022B964
.L_8022B838:
/* 8022B838 00228778  7F 23 CB 78 */	mr r3, r25
/* 8022B83C 0022877C  38 9D 01 20 */	addi r4, r29, 0x120
/* 8022B840 00228780  48 20 60 8D */	bl is__Q24Game11MovieConfigFPc
/* 8022B844 00228784  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B848 00228788  41 82 00 80 */	beq .L_8022B8C8
/* 8022B84C 0022878C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022B850 00228790  7F 44 D3 78 */	mr r4, r26
/* 8022B854 00228794  4B F2 F9 B5 */	bl informOrimaDead__Q24Game7NaviMgrFi
/* 8022B858 00228798  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022B85C 0022879C  48 1D 23 49 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 8022B860 002287A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B864 002287A4  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022B868 002287A8  2C 00 00 01 */	cmpwi r0, 1
/* 8022B86C 002287AC  40 82 00 1C */	bne .L_8022B888
/* 8022B870 002287B0  38 7D 00 70 */	addi r3, r29, 0x70
/* 8022B874 002287B4  38 BD 01 BC */	addi r5, r29, 0x1bc
/* 8022B878 002287B8  38 80 04 FF */	li r4, 0x4ff
/* 8022B87C 002287BC  4C C6 31 82 */	crclr 6
/* 8022B880 002287C0  4B DF ED C1 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8022B884 002287C4  48 00 00 E0 */	b .L_8022B964
.L_8022B888:
/* 8022B888 002287C8  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8022B88C 002287CC  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 8022B890 002287D0  4B FA 57 E1 */	bl clear__Q34Game8GameStat11PikiCounterFv
/* 8022B894 002287D4  48 23 BB A5 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B898 002287D8  38 00 00 00 */	li r0, 0
/* 8022B89C 002287DC  38 C1 00 10 */	addi r6, r1, 0x10
/* 8022B8A0 002287E0  98 01 00 10 */	stb r0, 0x10(r1)
/* 8022B8A4 002287E4  7F C3 F3 78 */	mr r3, r30
/* 8022B8A8 002287E8  7F E4 FB 78 */	mr r4, r31
/* 8022B8AC 002287EC  38 A0 00 04 */	li r5, 4
/* 8022B8B0 002287F0  98 01 00 10 */	stb r0, 0x10(r1)
/* 8022B8B4 002287F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B8B8 002287F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B8BC 002287FC  7D 89 03 A6 */	mtctr r12
/* 8022B8C0 00228800  4E 80 04 21 */	bctrl 
/* 8022B8C4 00228804  48 00 00 A0 */	b .L_8022B964
.L_8022B8C8:
/* 8022B8C8 00228808  7F 23 CB 78 */	mr r3, r25
/* 8022B8CC 0022880C  38 9D 00 EC */	addi r4, r29, 0xec
/* 8022B8D0 00228810  48 20 5F FD */	bl is__Q24Game11MovieConfigFPc
/* 8022B8D4 00228814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B8D8 00228818  41 82 00 40 */	beq .L_8022B918
/* 8022B8DC 0022881C  48 23 BB 5D */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B8E0 00228820  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022B8E4 00228824  48 1D 22 C1 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 8022B8E8 00228828  38 00 00 00 */	li r0, 0
/* 8022B8EC 0022882C  38 C1 00 0C */	addi r6, r1, 0xc
/* 8022B8F0 00228830  98 01 00 0C */	stb r0, 0xc(r1)
/* 8022B8F4 00228834  7F C3 F3 78 */	mr r3, r30
/* 8022B8F8 00228838  7F E4 FB 78 */	mr r4, r31
/* 8022B8FC 0022883C  38 A0 00 04 */	li r5, 4
/* 8022B900 00228840  98 01 00 0C */	stb r0, 0xc(r1)
/* 8022B904 00228844  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B908 00228848  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B90C 0022884C  7D 89 03 A6 */	mtctr r12
/* 8022B910 00228850  4E 80 04 21 */	bctrl 
/* 8022B914 00228854  48 00 00 50 */	b .L_8022B964
.L_8022B918:
/* 8022B918 00228858  7F 23 CB 78 */	mr r3, r25
/* 8022B91C 0022885C  38 9D 01 3C */	addi r4, r29, 0x13c
/* 8022B920 00228860  48 20 5F AD */	bl is__Q24Game11MovieConfigFPc
/* 8022B924 00228864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B928 00228868  41 82 00 3C */	beq .L_8022B964
/* 8022B92C 0022886C  48 23 BB 0D */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B930 00228870  38 A0 00 00 */	li r5, 0
/* 8022B934 00228874  38 C1 00 08 */	addi r6, r1, 8
/* 8022B938 00228878  98 A1 00 08 */	stb r5, 8(r1)
/* 8022B93C 0022887C  60 A0 00 01 */	ori r0, r5, 1
/* 8022B940 00228880  7F C3 F3 78 */	mr r3, r30
/* 8022B944 00228884  7F E4 FB 78 */	mr r4, r31
/* 8022B948 00228888  98 A1 00 08 */	stb r5, 8(r1)
/* 8022B94C 0022888C  38 A0 00 04 */	li r5, 4
/* 8022B950 00228890  98 01 00 08 */	stb r0, 8(r1)
/* 8022B954 00228894  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B958 00228898  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B95C 0022889C  7D 89 03 A6 */	mtctr r12
/* 8022B960 002288A0  4E 80 04 21 */	bctrl 
.L_8022B964:
/* 8022B964 002288A4  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8022B968 002288A8  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8022B96C 002288AC  BB 01 00 90 */	lmw r24, 0x90(r1)
/* 8022B970 002288B0  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8022B974 002288B4  7C 08 03 A6 */	mtlr r0
/* 8022B978 002288B8  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8022B97C 002288BC  4E 80 00 20 */	blr 
.else
.global onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl:
/* 8022AFB0 00227EF0  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8022AFB4 00227EF4  7C 08 02 A6 */	mflr r0
/* 8022AFB8 00227EF8  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8022AFBC 00227EFC  DB E1 00 B0 */	stfd f31, 0xb0(r1)
/* 8022AFC0 00227F00  F3 E1 00 B8 */	psq_st f31, 184(r1), 0, qr0
/* 8022AFC4 00227F04  BF 01 00 90 */	stmw r24, 0x90(r1)
/* 8022AFC8 00227F08  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 8022AFCC 00227F0C  3C C0 80 48 */	lis r6, lbl_80483550@ha
/* 8022AFD0 00227F10  7C 7E 1B 78 */	mr r30, r3
/* 8022AFD4 00227F14  7C 9F 23 78 */	mr r31, r4
/* 8022AFD8 00227F18  80 08 00 44 */	lwz r0, 0x44(r8)
/* 8022AFDC 00227F1C  7C B9 2B 78 */	mr r25, r5
/* 8022AFE0 00227F20  7C FA 3B 78 */	mr r26, r7
/* 8022AFE4 00227F24  3B A6 35 50 */	addi r29, r6, lbl_80483550@l
/* 8022AFE8 00227F28  2C 00 00 01 */	cmpwi r0, 1
/* 8022AFEC 00227F2C  38 60 00 00 */	li r3, 0
/* 8022AFF0 00227F30  41 82 00 0C */	beq .L_8022AFFC
/* 8022AFF4 00227F34  2C 00 00 03 */	cmpwi r0, 3
/* 8022AFF8 00227F38  40 82 00 08 */	bne .L_8022B000
.L_8022AFFC:
/* 8022AFFC 00227F3C  38 60 00 01 */	li r3, 1
.L_8022B000:
/* 8022B000 00227F40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B004 00227F44  41 82 00 10 */	beq .L_8022B014
/* 8022B008 00227F48  7F E3 FB 78 */	mr r3, r31
/* 8022B00C 00227F4C  38 80 00 02 */	li r4, 2
/* 8022B010 00227F50  4B F2 29 09 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_8022B014:
/* 8022B014 00227F54  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8022B018 00227F58  83 83 00 30 */	lwz r28, 0x30(r3)
/* 8022B01C 00227F5C  80 63 00 28 */	lwz r3, 0x28(r3)
/* 8022B020 00227F60  4B FA C4 D1 */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 8022B024 00227F64  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8022B028 00227F68  38 03 FF FF */	addi r0, r3, -1
/* 8022B02C 00227F6C  7C 9C 00 50 */	subf r4, r28, r0
/* 8022B030 00227F70  38 60 00 00 */	li r3, 0
/* 8022B034 00227F74  80 05 00 44 */	lwz r0, 0x44(r5)
/* 8022B038 00227F78  7C 84 00 34 */	cntlzw r4, r4
/* 8022B03C 00227F7C  54 9B D9 7E */	srwi r27, r4, 5
/* 8022B040 00227F80  2C 00 00 02 */	cmpwi r0, 2
/* 8022B044 00227F84  41 82 00 0C */	beq .L_8022B050
/* 8022B048 00227F88  2C 00 00 03 */	cmpwi r0, 3
/* 8022B04C 00227F8C  40 82 00 08 */	bne .L_8022B054
.L_8022B050:
/* 8022B050 00227F90  38 60 00 01 */	li r3, 1
.L_8022B054:
/* 8022B054 00227F94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B058 00227F98  41 82 01 10 */	beq .L_8022B168
/* 8022B05C 00227F9C  4B FF 35 D5 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 8022B060 00227FA0  2C 03 00 00 */	cmpwi r3, 0
/* 8022B064 00227FA4  40 82 01 04 */	bne .L_8022B168
/* 8022B068 00227FA8  7F 23 CB 78 */	mr r3, r25
/* 8022B06C 00227FAC  38 9D 00 FC */	addi r4, r29, 0xfc
/* 8022B070 00227FB0  48 20 68 5D */	bl is__Q24Game11MovieConfigFPc
/* 8022B074 00227FB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B078 00227FB8  40 82 00 18 */	bne .L_8022B090
/* 8022B07C 00227FBC  7F 23 CB 78 */	mr r3, r25
/* 8022B080 00227FC0  38 9D 01 0C */	addi r4, r29, 0x10c
/* 8022B084 00227FC4  48 20 68 49 */	bl is__Q24Game11MovieConfigFPc
/* 8022B088 00227FC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B08C 00227FCC  41 82 00 DC */	beq .L_8022B168
.L_8022B090:
/* 8022B090 00227FD0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B094 00227FD4  28 00 00 00 */	cmplwi r0, 0
/* 8022B098 00227FD8  40 82 00 18 */	bne .L_8022B0B0
/* 8022B09C 00227FDC  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B0A0 00227FE0  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B0A4 00227FE4  38 80 01 D3 */	li r4, 0x1d3
/* 8022B0A8 00227FE8  4C C6 31 82 */	crclr 6
/* 8022B0AC 00227FEC  4B DF F5 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B0B0:
/* 8022B0B0 00227FF0  83 0D 98 80 */	lwz r24, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B0B4 00227FF4  28 18 00 00 */	cmplwi r24, 0
/* 8022B0B8 00227FF8  40 82 00 18 */	bne .L_8022B0D0
/* 8022B0BC 00227FFC  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B0C0 00228000  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B0C4 00228004  38 80 01 DC */	li r4, 0x1dc
/* 8022B0C8 00228008  4C C6 31 82 */	crclr 6
/* 8022B0CC 0022800C  4B DF F5 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B0D0:
/* 8022B0D0 00228010  80 18 00 04 */	lwz r0, 4(r24)
/* 8022B0D4 00228014  28 00 00 00 */	cmplwi r0, 0
/* 8022B0D8 00228018  40 82 00 18 */	bne .L_8022B0F0
/* 8022B0DC 0022801C  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B0E0 00228020  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B0E4 00228024  38 80 00 CF */	li r4, 0xcf
/* 8022B0E8 00228028  4C C6 31 82 */	crclr 6
/* 8022B0EC 0022802C  4B DF F5 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B0F0:
/* 8022B0F0 00228030  80 78 00 04 */	lwz r3, 4(r24)
/* 8022B0F4 00228034  83 03 00 04 */	lwz r24, 4(r3)
/* 8022B0F8 00228038  28 18 00 00 */	cmplwi r24, 0
/* 8022B0FC 0022803C  40 82 00 18 */	bne .L_8022B114
/* 8022B100 00228040  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B104 00228044  38 BD 01 64 */	addi r5, r29, 0x164
/* 8022B108 00228048  38 80 00 D1 */	li r4, 0xd1
/* 8022B10C 0022804C  4C C6 31 82 */	crclr 6
/* 8022B110 00228050  4B DF F5 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B114:
/* 8022B114 00228054  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B118 00228058  7F 03 C3 78 */	mr r3, r24
/* 8022B11C 0022805C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8022B120 00228060  7D 89 03 A6 */	mtctr r12
/* 8022B124 00228064  4E 80 04 21 */	bctrl 
/* 8022B128 00228068  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B12C 0022806C  40 82 00 18 */	bne .L_8022B144
/* 8022B130 00228070  38 7D 01 88 */	addi r3, r29, 0x188
/* 8022B134 00228074  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B138 00228078  38 80 01 77 */	li r4, 0x177
/* 8022B13C 0022807C  4C C6 31 82 */	crclr 6
/* 8022B140 00228080  4B DF F5 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B144:
/* 8022B144 00228084  7F 03 C3 78 */	mr r3, r24
/* 8022B148 00228088  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B14C 0022808C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022B150 00228090  7D 89 03 A6 */	mtctr r12
/* 8022B154 00228094  4E 80 04 21 */	bctrl 
/* 8022B158 00228098  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B15C 0022809C  41 82 00 0C */	beq .L_8022B168
/* 8022B160 002280A0  7F 03 C3 78 */	mr r3, r24
/* 8022B164 002280A4  48 23 EF DD */	bl startPollutUpSe__Q23PSM10Scene_CaveFv
.L_8022B168:
/* 8022B168 002280A8  7F 23 CB 78 */	mr r3, r25
/* 8022B16C 002280AC  38 9D 00 DC */	addi r4, r29, 0xdc
/* 8022B170 002280B0  48 20 67 5D */	bl is__Q24Game11MovieConfigFPc
/* 8022B174 002280B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B178 002280B8  41 82 00 D0 */	beq .L_8022B248
/* 8022B17C 002280BC  88 1E 00 25 */	lbz r0, 0x25(r30)
/* 8022B180 002280C0  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022B184 002280C4  40 82 00 10 */	bne .L_8022B194
/* 8022B188 002280C8  88 1E 00 26 */	lbz r0, 0x26(r30)
/* 8022B18C 002280CC  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022B190 002280D0  41 82 00 B8 */	beq .L_8022B248
.L_8022B194:
/* 8022B194 002280D4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B198 002280D8  28 00 00 00 */	cmplwi r0, 0
/* 8022B19C 002280DC  40 82 00 18 */	bne .L_8022B1B4
/* 8022B1A0 002280E0  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B1A4 002280E4  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B1A8 002280E8  38 80 01 D3 */	li r4, 0x1d3
/* 8022B1AC 002280EC  4C C6 31 82 */	crclr 6
/* 8022B1B0 002280F0  4B DF F4 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B1B4:
/* 8022B1B4 002280F4  83 0D 98 80 */	lwz r24, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B1B8 002280F8  28 18 00 00 */	cmplwi r24, 0
/* 8022B1BC 002280FC  40 82 00 18 */	bne .L_8022B1D4
/* 8022B1C0 00228100  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B1C4 00228104  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B1C8 00228108  38 80 01 DC */	li r4, 0x1dc
/* 8022B1CC 0022810C  4C C6 31 82 */	crclr 6
/* 8022B1D0 00228110  4B DF F4 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B1D4:
/* 8022B1D4 00228114  80 18 00 04 */	lwz r0, 4(r24)
/* 8022B1D8 00228118  28 00 00 00 */	cmplwi r0, 0
/* 8022B1DC 0022811C  40 82 00 18 */	bne .L_8022B1F4
/* 8022B1E0 00228120  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B1E4 00228124  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B1E8 00228128  38 80 00 CF */	li r4, 0xcf
/* 8022B1EC 0022812C  4C C6 31 82 */	crclr 6
/* 8022B1F0 00228130  4B DF F4 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B1F4:
/* 8022B1F4 00228134  80 78 00 04 */	lwz r3, 4(r24)
/* 8022B1F8 00228138  83 03 00 04 */	lwz r24, 4(r3)
/* 8022B1FC 0022813C  28 18 00 00 */	cmplwi r24, 0
/* 8022B200 00228140  40 82 00 18 */	bne .L_8022B218
/* 8022B204 00228144  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B208 00228148  38 BD 01 64 */	addi r5, r29, 0x164
/* 8022B20C 0022814C  38 80 00 D1 */	li r4, 0xd1
/* 8022B210 00228150  4C C6 31 82 */	crclr 6
/* 8022B214 00228154  4B DF F4 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B218:
/* 8022B218 00228158  7F 03 C3 78 */	mr r3, r24
/* 8022B21C 0022815C  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B220 00228160  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8022B224 00228164  7D 89 03 A6 */	mtctr r12
/* 8022B228 00228168  4E 80 04 21 */	bctrl 
/* 8022B22C 0022816C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B230 00228170  41 82 00 08 */	beq .L_8022B238
/* 8022B234 00228174  48 00 00 08 */	b .L_8022B23C
.L_8022B238:
/* 8022B238 00228178  3B 00 00 00 */	li r24, 0
.L_8022B23C:
/* 8022B23C 0022817C  38 78 00 10 */	addi r3, r24, 0x10
/* 8022B240 00228180  38 80 00 0F */	li r4, 0xf
/* 8022B244 00228184  48 10 89 F9 */	bl stopAllSound__Q28PSSystem6SeqMgrFUl
.L_8022B248:
/* 8022B248 00228188  7F 23 CB 78 */	mr r3, r25
/* 8022B24C 0022818C  38 9D 01 9C */	addi r4, r29, 0x19c
/* 8022B250 00228190  48 20 66 7D */	bl is__Q24Game11MovieConfigFPc
/* 8022B254 00228194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B258 00228198  41 82 00 7C */	beq .L_8022B2D4
/* 8022B25C 0022819C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022B260 002281A0  7F E3 FB 78 */	mr r3, r31
/* 8022B264 002281A4  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8022B268 002281A8  60 00 00 02 */	ori r0, r0, 2
/* 8022B26C 002281AC  98 04 00 3C */	stb r0, 0x3c(r4)
/* 8022B270 002281B0  4B F2 2B 19 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8022B274 002281B4  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8022B278 002281B8  41 82 00 18 */	beq .L_8022B290
/* 8022B27C 002281BC  7F C3 F3 78 */	mr r3, r30
/* 8022B280 002281C0  7F E4 FB 78 */	mr r4, r31
/* 8022B284 002281C4  38 A0 00 03 */	li r5, 3
/* 8022B288 002281C8  48 00 09 79 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B28C 002281CC  48 00 00 14 */	b .L_8022B2A0
.L_8022B290:
/* 8022B290 002281D0  7F C3 F3 78 */	mr r3, r30
/* 8022B294 002281D4  7F E4 FB 78 */	mr r4, r31
/* 8022B298 002281D8  38 A0 00 01 */	li r5, 1
/* 8022B29C 002281DC  48 00 09 65 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
.L_8022B2A0:
/* 8022B2A0 002281E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B2A4 002281E4  38 80 00 01 */	li r4, 1
/* 8022B2A8 002281E8  38 A2 BF 48 */	addi r5, r2, lbl_8051A2A8@sda21
/* 8022B2AC 002281EC  38 C0 00 06 */	li r6, 6
/* 8022B2B0 002281F0  4B F8 9C E5 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022B2B4 002281F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B2B8 002281F8  38 80 00 01 */	li r4, 1
/* 8022B2BC 002281FC  38 A2 BF 48 */	addi r5, r2, lbl_8051A2A8@sda21
/* 8022B2C0 00228200  4B F8 9C C5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022B2C4 00228204  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022B2C8 00228208  60 00 00 80 */	ori r0, r0, 0x80
/* 8022B2CC 0022820C  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8022B2D0 00228210  48 00 06 94 */	b .L_8022B964
.L_8022B2D4:
/* 8022B2D4 00228214  7F 23 CB 78 */	mr r3, r25
/* 8022B2D8 00228218  38 9D 00 18 */	addi r4, r29, 0x18
/* 8022B2DC 0022821C  48 20 65 F1 */	bl is__Q24Game11MovieConfigFPc
/* 8022B2E0 00228220  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B2E4 00228224  41 82 04 98 */	beq .L_8022B77C
/* 8022B2E8 00228228  38 00 00 00 */	li r0, 0
/* 8022B2EC 0022822C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8022B2F0 00228230  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8022B2F4 00228234  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022B2F8 00228238  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 8022B2FC 0022823C  28 00 00 00 */	cmplwi r0, 0
/* 8022B300 00228240  90 81 00 48 */	stw r4, 0x48(r1)
/* 8022B304 00228244  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8022B308 00228248  90 61 00 50 */	stw r3, 0x50(r1)
/* 8022B30C 0022824C  40 82 00 1C */	bne .L_8022B328
/* 8022B310 00228250  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B314 00228254  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022B318 00228258  7D 89 03 A6 */	mtctr r12
/* 8022B31C 0022825C  4E 80 04 21 */	bctrl 
/* 8022B320 00228260  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B324 00228264  48 00 00 8C */	b .L_8022B3B0
.L_8022B328:
/* 8022B328 00228268  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B32C 0022826C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8022B330 00228270  7D 89 03 A6 */	mtctr r12
/* 8022B334 00228274  4E 80 04 21 */	bctrl 
/* 8022B338 00228278  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B33C 0022827C  48 00 00 58 */	b .L_8022B394
.L_8022B340:
/* 8022B340 00228280  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B344 00228284  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B348 00228288  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B34C 0022828C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022B350 00228290  7D 89 03 A6 */	mtctr r12
/* 8022B354 00228294  4E 80 04 21 */	bctrl 
/* 8022B358 00228298  7C 64 1B 78 */	mr r4, r3
/* 8022B35C 0022829C  80 61 00 54 */	lwz r3, 0x54(r1)
/* 8022B360 002282A0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B364 002282A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B368 002282A8  7D 89 03 A6 */	mtctr r12
/* 8022B36C 002282AC  4E 80 04 21 */	bctrl 
/* 8022B370 002282B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B374 002282B4  40 82 00 3C */	bne .L_8022B3B0
/* 8022B378 002282B8  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B37C 002282BC  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B380 002282C0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B384 002282C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B388 002282C8  7D 89 03 A6 */	mtctr r12
/* 8022B38C 002282CC  4E 80 04 21 */	bctrl 
/* 8022B390 002282D0  90 61 00 4C */	stw r3, 0x4c(r1)
.L_8022B394:
/* 8022B394 002282D4  81 81 00 48 */	lwz r12, 0x48(r1)
/* 8022B398 002282D8  38 61 00 48 */	addi r3, r1, 0x48
/* 8022B39C 002282DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022B3A0 002282E0  7D 89 03 A6 */	mtctr r12
/* 8022B3A4 002282E4  4E 80 04 21 */	bctrl 
/* 8022B3A8 002282E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B3AC 002282EC  41 82 FF 94 */	beq .L_8022B340
.L_8022B3B0:
/* 8022B3B0 002282F0  C3 E2 BF 14 */	lfs f31, lbl_8051A274@sda21(r2)
/* 8022B3B4 002282F4  48 00 01 4C */	b .L_8022B500
.L_8022B3B8:
/* 8022B3B8 002282F8  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B3BC 002282FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B3C0 00228300  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022B3C4 00228304  7D 89 03 A6 */	mtctr r12
/* 8022B3C8 00228308  4E 80 04 21 */	bctrl 
/* 8022B3CC 0022830C  7C 78 1B 78 */	mr r24, r3
/* 8022B3D0 00228310  38 61 00 24 */	addi r3, r1, 0x24
/* 8022B3D4 00228314  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B3D8 00228318  7F 04 C3 78 */	mr r4, r24
/* 8022B3DC 0022831C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B3E0 00228320  7D 89 03 A6 */	mtctr r12
/* 8022B3E4 00228324  4E 80 04 21 */	bctrl 
/* 8022B3E8 00228328  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 8022B3EC 0022832C  38 81 00 3C */	addi r4, r1, 0x3c
/* 8022B3F0 00228330  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 8022B3F4 00228334  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 8022B3F8 00228338  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8022B3FC 0022833C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8022B400 00228340  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8022B404 00228344  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8022B408 00228348  81 83 00 04 */	lwz r12, 4(r3)
/* 8022B40C 0022834C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8022B410 00228350  7D 89 03 A6 */	mtctr r12
/* 8022B414 00228354  4E 80 04 21 */	bctrl 
/* 8022B418 00228358  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8022B41C 0022835C  7F 03 C3 78 */	mr r3, r24
/* 8022B420 00228360  38 81 00 3C */	addi r4, r1, 0x3c
/* 8022B424 00228364  38 A0 00 00 */	li r5, 0
/* 8022B428 00228368  4B F0 FD 81 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 8022B42C 0022836C  D3 F8 02 00 */	stfs f31, 0x200(r24)
/* 8022B430 00228370  D3 F8 02 04 */	stfs f31, 0x204(r24)
/* 8022B434 00228374  D3 F8 02 08 */	stfs f31, 0x208(r24)
/* 8022B438 00228378  D3 F8 01 E4 */	stfs f31, 0x1e4(r24)
/* 8022B43C 0022837C  D3 F8 01 E8 */	stfs f31, 0x1e8(r24)
/* 8022B440 00228380  D3 F8 01 EC */	stfs f31, 0x1ec(r24)
/* 8022B444 00228384  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8022B448 00228388  28 00 00 00 */	cmplwi r0, 0
/* 8022B44C 0022838C  40 82 00 24 */	bne .L_8022B470
/* 8022B450 00228390  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B454 00228394  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B458 00228398  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B45C 0022839C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B460 002283A0  7D 89 03 A6 */	mtctr r12
/* 8022B464 002283A4  4E 80 04 21 */	bctrl 
/* 8022B468 002283A8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B46C 002283AC  48 00 00 94 */	b .L_8022B500
.L_8022B470:
/* 8022B470 002283B0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B474 002283B4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B478 002283B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B47C 002283BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B480 002283C0  7D 89 03 A6 */	mtctr r12
/* 8022B484 002283C4  4E 80 04 21 */	bctrl 
/* 8022B488 002283C8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022B48C 002283CC  48 00 00 58 */	b .L_8022B4E4
.L_8022B490:
/* 8022B490 002283D0  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B494 002283D4  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B498 002283D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B49C 002283DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8022B4A0 002283E0  7D 89 03 A6 */	mtctr r12
/* 8022B4A4 002283E4  4E 80 04 21 */	bctrl 
/* 8022B4A8 002283E8  7C 64 1B 78 */	mr r4, r3
/* 8022B4AC 002283EC  80 61 00 54 */	lwz r3, 0x54(r1)
/* 8022B4B0 002283F0  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B4B4 002283F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B4B8 002283F8  7D 89 03 A6 */	mtctr r12
/* 8022B4BC 002283FC  4E 80 04 21 */	bctrl 
/* 8022B4C0 00228400  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B4C4 00228404  40 82 00 3C */	bne .L_8022B500
/* 8022B4C8 00228408  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B4CC 0022840C  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B4D0 00228410  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B4D4 00228414  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8022B4D8 00228418  7D 89 03 A6 */	mtctr r12
/* 8022B4DC 0022841C  4E 80 04 21 */	bctrl 
/* 8022B4E0 00228420  90 61 00 4C */	stw r3, 0x4c(r1)
.L_8022B4E4:
/* 8022B4E4 00228424  81 81 00 48 */	lwz r12, 0x48(r1)
/* 8022B4E8 00228428  38 61 00 48 */	addi r3, r1, 0x48
/* 8022B4EC 0022842C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8022B4F0 00228430  7D 89 03 A6 */	mtctr r12
/* 8022B4F4 00228434  4E 80 04 21 */	bctrl 
/* 8022B4F8 00228438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B4FC 0022843C  41 82 FF 94 */	beq .L_8022B490
.L_8022B500:
/* 8022B500 00228440  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8022B504 00228444  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B508 00228448  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B50C 0022844C  7D 89 03 A6 */	mtctr r12
/* 8022B510 00228450  4E 80 04 21 */	bctrl 
/* 8022B514 00228454  80 81 00 4C */	lwz r4, 0x4c(r1)
/* 8022B518 00228458  7C 04 18 40 */	cmplw r4, r3
/* 8022B51C 0022845C  40 82 FE 9C */	bne .L_8022B3B8
/* 8022B520 00228460  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022B524 00228464  48 1D 21 3D */	bl close_Floor__Q26Screen9Game2DMgrFv
/* 8022B528 00228468  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022B52C 0022846C  2C 1C 00 00 */	cmpwi r28, 0
/* 8022B530 00228470  60 00 00 04 */	ori r0, r0, 4
/* 8022B534 00228474  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8022B538 00228478  40 82 01 28 */	bne .L_8022B660
/* 8022B53C 0022847C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8022B540 00228480  48 1F 79 F1 */	bl getPlayCommonData__6SystemFv
/* 8022B544 00228484  48 00 92 E9 */	bl challenge_is_virgin_check_only__Q24Game14PlayCommonDataFv
/* 8022B548 00228488  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B54C 0022848C  41 82 01 14 */	beq .L_8022B660
/* 8022B550 00228490  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B554 00228494  80 83 00 44 */	lwz r4, 0x44(r3)
/* 8022B558 00228498  2C 04 00 01 */	cmpwi r4, 1
/* 8022B55C 0022849C  41 82 01 04 */	beq .L_8022B660
/* 8022B560 002284A0  80 BF 00 C8 */	lwz r5, 0xc8(r31)
/* 8022B564 002284A4  38 00 00 00 */	li r0, 0
/* 8022B568 002284A8  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022B56C 002284AC  38 7D 01 9C */	addi r3, r29, 0x19c
/* 8022B570 002284B0  90 61 00 58 */	stw r3, 0x58(r1)
/* 8022B574 002284B4  3B 21 00 70 */	addi r25, r1, 0x70
/* 8022B578 002284B8  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8022B57C 002284BC  90 A1 00 64 */	stw r5, 0x64(r1)
/* 8022B580 002284C0  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 8022B584 002284C4  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 8022B588 002284C8  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 8022B58C 002284CC  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 8022B590 002284D0  90 01 00 80 */	stw r0, 0x80(r1)
/* 8022B594 002284D4  90 01 00 68 */	stw r0, 0x68(r1)
/* 8022B598 002284D8  90 01 00 60 */	stw r0, 0x60(r1)
/* 8022B59C 002284DC  90 01 00 84 */	stw r0, 0x84(r1)
/* 8022B5A0 002284E0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022B5A4 002284E4  90 01 00 88 */	stw r0, 0x88(r1)
/* 8022B5A8 002284E8  41 82 00 0C */	beq .L_8022B5B4
/* 8022B5AC 002284EC  2C 04 00 03 */	cmpwi r4, 3
/* 8022B5B0 002284F0  40 82 00 08 */	bne .L_8022B5B8
.L_8022B5B4:
/* 8022B5B4 002284F4  38 00 00 01 */	li r0, 1
.L_8022B5B8:
/* 8022B5B8 002284F8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8022B5BC 002284FC  41 82 00 10 */	beq .L_8022B5CC
/* 8022B5C0 00228500  7F E3 FB 78 */	mr r3, r31
/* 8022B5C4 00228504  38 80 00 00 */	li r4, 0
/* 8022B5C8 00228508  4B F2 23 51 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_8022B5CC:
/* 8022B5CC 0022850C  7F E3 FB 78 */	mr r3, r31
/* 8022B5D0 00228510  4B F2 27 B9 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8022B5D4 00228514  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 8022B5D8 00228518  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8022B5DC 0022851C  90 01 00 68 */	stw r0, 0x68(r1)
/* 8022B5E0 00228520  83 03 00 AC */	lwz r24, 0xac(r3)
/* 8022B5E4 00228524  28 18 00 00 */	cmplwi r24, 0
/* 8022B5E8 00228528  41 82 00 4C */	beq .L_8022B634
/* 8022B5EC 0022852C  7F 03 C3 78 */	mr r3, r24
/* 8022B5F0 00228530  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B5F4 00228534  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022B5F8 00228538  7D 89 03 A6 */	mtctr r12
/* 8022B5FC 0022853C  4E 80 04 21 */	bctrl 
/* 8022B600 00228540  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 8022B604 00228544  7F 04 C3 78 */	mr r4, r24
/* 8022B608 00228548  38 61 00 18 */	addi r3, r1, 0x18
/* 8022B60C 0022854C  81 98 00 00 */	lwz r12, 0(r24)
/* 8022B610 00228550  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B614 00228554  7D 89 03 A6 */	mtctr r12
/* 8022B618 00228558  4E 80 04 21 */	bctrl 
/* 8022B61C 0022855C  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 8022B620 00228560  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8022B624 00228564  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8022B628 00228568  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 8022B62C 0022856C  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8022B630 00228570  D0 01 00 78 */	stfs f0, 0x78(r1)
.L_8022B634:
/* 8022B634 00228574  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8022B638 00228578  7F 24 CB 78 */	mr r4, r25
/* 8022B63C 0022857C  81 83 00 04 */	lwz r12, 4(r3)
/* 8022B640 00228580  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 8022B644 00228584  7D 89 03 A6 */	mtctr r12
/* 8022B648 00228588  4E 80 04 21 */	bctrl 
/* 8022B64C 0022858C  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8022B650 00228590  38 81 00 58 */	addi r4, r1, 0x58
/* 8022B654 00228594  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022B658 00228598  48 20 13 79 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022B65C 0022859C  48 00 03 08 */	b .L_8022B964
.L_8022B660:
/* 8022B660 002285A0  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8022B664 002285A4  7F E3 FB 78 */	mr r3, r31
/* 8022B668 002285A8  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 8022B66C 002285AC  60 00 00 02 */	ori r0, r0, 2
/* 8022B670 002285B0  98 04 00 3C */	stb r0, 0x3c(r4)
/* 8022B674 002285B4  4B F2 27 15 */	bl setCamController__Q24Game15BaseGameSectionFv
/* 8022B678 002285B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B67C 002285BC  2C 1C 00 00 */	cmpwi r28, 0
/* 8022B680 002285C0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8022B684 002285C4  60 00 00 02 */	ori r0, r0, 2
/* 8022B688 002285C8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8022B68C 002285CC  40 82 00 64 */	bne .L_8022B6F0
/* 8022B690 002285D0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8022B694 002285D4  41 82 00 18 */	beq .L_8022B6AC
/* 8022B698 002285D8  7F C3 F3 78 */	mr r3, r30
/* 8022B69C 002285DC  7F E4 FB 78 */	mr r4, r31
/* 8022B6A0 002285E0  38 A0 00 03 */	li r5, 3
/* 8022B6A4 002285E4  48 00 05 5D */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B6A8 002285E8  48 00 00 14 */	b .L_8022B6BC
.L_8022B6AC:
/* 8022B6AC 002285EC  7F C3 F3 78 */	mr r3, r30
/* 8022B6B0 002285F0  7F E4 FB 78 */	mr r4, r31
/* 8022B6B4 002285F4  38 A0 00 01 */	li r5, 1
/* 8022B6B8 002285F8  48 00 05 49 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
.L_8022B6BC:
/* 8022B6BC 002285FC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B6C0 00228600  38 BD 01 B0 */	addi r5, r29, 0x1b0
/* 8022B6C4 00228604  38 80 00 01 */	li r4, 1
/* 8022B6C8 00228608  38 C0 00 06 */	li r6, 6
/* 8022B6CC 0022860C  4B F8 98 C9 */	bl setPause__Q24Game10GameSystemFbPci
/* 8022B6D0 00228610  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B6D4 00228614  38 BD 01 B0 */	addi r5, r29, 0x1b0
/* 8022B6D8 00228618  38 80 00 01 */	li r4, 1
/* 8022B6DC 0022861C  4B F8 98 A9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8022B6E0 00228620  A0 1E 00 14 */	lhz r0, 0x14(r30)
/* 8022B6E4 00228624  60 00 00 80 */	ori r0, r0, 0x80
/* 8022B6E8 00228628  B0 1E 00 14 */	sth r0, 0x14(r30)
/* 8022B6EC 0022862C  48 00 02 78 */	b .L_8022B964
.L_8022B6F0:
/* 8022B6F0 00228630  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 8022B6F4 00228634  41 82 00 18 */	beq .L_8022B70C
/* 8022B6F8 00228638  7F C3 F3 78 */	mr r3, r30
/* 8022B6FC 0022863C  7F E4 FB 78 */	mr r4, r31
/* 8022B700 00228640  38 A0 00 02 */	li r5, 2
/* 8022B704 00228644  48 00 04 FD */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B708 00228648  48 00 02 5C */	b .L_8022B964
.L_8022B70C:
/* 8022B70C 0022864C  7F C3 F3 78 */	mr r3, r30
/* 8022B710 00228650  7F E4 FB 78 */	mr r4, r31
/* 8022B714 00228654  38 A0 00 00 */	li r5, 0
/* 8022B718 00228658  48 00 04 E9 */	bl open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
/* 8022B71C 0022865C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B720 00228660  28 00 00 00 */	cmplwi r0, 0
/* 8022B724 00228664  40 82 00 18 */	bne .L_8022B73C
/* 8022B728 00228668  38 7D 01 4C */	addi r3, r29, 0x14c
/* 8022B72C 0022866C  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B730 00228670  38 80 01 D3 */	li r4, 0x1d3
/* 8022B734 00228674  4C C6 31 82 */	crclr 6
/* 8022B738 00228678  4B DF EF 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B73C:
/* 8022B73C 0022867C  83 0D 98 80 */	lwz r24, spSceneMgr__8PSSystem@sda21(r13)
/* 8022B740 00228680  80 18 00 04 */	lwz r0, 4(r24)
/* 8022B744 00228684  28 00 00 00 */	cmplwi r0, 0
/* 8022B748 00228688  40 82 00 18 */	bne .L_8022B760
/* 8022B74C 0022868C  38 7D 01 58 */	addi r3, r29, 0x158
/* 8022B750 00228690  38 BD 00 80 */	addi r5, r29, 0x80
/* 8022B754 00228694  38 80 00 C7 */	li r4, 0xc7
/* 8022B758 00228698  4C C6 31 82 */	crclr 6
/* 8022B75C 0022869C  4B DF EE E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022B760:
/* 8022B760 002286A0  80 78 00 04 */	lwz r3, 4(r24)
/* 8022B764 002286A4  80 63 00 04 */	lwz r3, 4(r3)
/* 8022B768 002286A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022B76C 002286AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B770 002286B0  7D 89 03 A6 */	mtctr r12
/* 8022B774 002286B4  4E 80 04 21 */	bctrl 
/* 8022B778 002286B8  48 00 01 EC */	b .L_8022B964
.L_8022B77C:
/* 8022B77C 002286BC  7F 23 CB 78 */	mr r3, r25
/* 8022B780 002286C0  38 9D 01 30 */	addi r4, r29, 0x130
/* 8022B784 002286C4  48 20 61 49 */	bl is__Q24Game11MovieConfigFPc
/* 8022B788 002286C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B78C 002286CC  41 82 00 54 */	beq .L_8022B7E0
/* 8022B790 002286D0  48 23 BC A9 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B794 002286D4  80 9F 03 24 */	lwz r4, 0x324(r31)
/* 8022B798 002286D8  38 E0 00 00 */	li r7, 0
/* 8022B79C 002286DC  38 00 00 01 */	li r0, 1
/* 8022B7A0 002286E0  7F C3 F3 78 */	mr r3, r30
/* 8022B7A4 002286E4  38 A4 00 01 */	addi r5, r4, 1
/* 8022B7A8 002286E8  7F E4 FB 78 */	mr r4, r31
/* 8022B7AC 002286EC  90 BF 03 24 */	stw r5, 0x324(r31)
/* 8022B7B0 002286F0  38 C1 00 30 */	addi r6, r1, 0x30
/* 8022B7B4 002286F4  38 A0 00 01 */	li r5, 1
/* 8022B7B8 002286F8  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8022B7BC 002286FC  98 E1 00 38 */	stb r7, 0x38(r1)
/* 8022B7C0 00228700  90 E1 00 30 */	stw r7, 0x30(r1)
/* 8022B7C4 00228704  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8022B7C8 00228708  98 01 00 38 */	stb r0, 0x38(r1)
/* 8022B7CC 0022870C  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B7D0 00228710  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B7D4 00228714  7D 89 03 A6 */	mtctr r12
/* 8022B7D8 00228718  4E 80 04 21 */	bctrl 
/* 8022B7DC 0022871C  48 00 01 88 */	b .L_8022B964
.L_8022B7E0:
/* 8022B7E0 00228720  7F 23 CB 78 */	mr r3, r25
/* 8022B7E4 00228724  38 9D 00 AC */	addi r4, r29, 0xac
/* 8022B7E8 00228728  48 20 60 E5 */	bl is__Q24Game11MovieConfigFPc
/* 8022B7EC 0022872C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B7F0 00228730  41 82 00 48 */	beq .L_8022B838
/* 8022B7F4 00228734  48 23 BC 45 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B7F8 00228738  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8022B7FC 0022873C  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 8022B800 00228740  4B FA 58 71 */	bl clear__Q34Game8GameStat11PikiCounterFv
/* 8022B804 00228744  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022B808 00228748  48 20 17 81 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 8022B80C 0022874C  38 00 00 01 */	li r0, 1
/* 8022B810 00228750  7F C3 F3 78 */	mr r3, r30
/* 8022B814 00228754  98 01 00 14 */	stb r0, 0x14(r1)
/* 8022B818 00228758  7F E4 FB 78 */	mr r4, r31
/* 8022B81C 0022875C  38 C1 00 14 */	addi r6, r1, 0x14
/* 8022B820 00228760  38 A0 00 00 */	li r5, 0
/* 8022B824 00228764  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B828 00228768  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B82C 0022876C  7D 89 03 A6 */	mtctr r12
/* 8022B830 00228770  4E 80 04 21 */	bctrl 
/* 8022B834 00228774  48 00 01 30 */	b .L_8022B964
.L_8022B838:
/* 8022B838 00228778  7F 23 CB 78 */	mr r3, r25
/* 8022B83C 0022877C  38 9D 01 20 */	addi r4, r29, 0x120
/* 8022B840 00228780  48 20 60 8D */	bl is__Q24Game11MovieConfigFPc
/* 8022B844 00228784  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B848 00228788  41 82 00 80 */	beq .L_8022B8C8
/* 8022B84C 0022878C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022B850 00228790  7F 44 D3 78 */	mr r4, r26
/* 8022B854 00228794  4B F2 F9 B5 */	bl informOrimaDead__Q24Game7NaviMgrFi
/* 8022B858 00228798  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022B85C 0022879C  48 1D 23 49 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 8022B860 002287A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022B864 002287A4  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022B868 002287A8  2C 00 00 01 */	cmpwi r0, 1
/* 8022B86C 002287AC  40 82 00 1C */	bne .L_8022B888
/* 8022B870 002287B0  38 7D 00 70 */	addi r3, r29, 0x70
/* 8022B874 002287B4  38 BD 01 BC */	addi r5, r29, 0x1bc
/* 8022B878 002287B8  38 80 04 FF */	li r4, 0x4ff
/* 8022B87C 002287BC  4C C6 31 82 */	crclr 6
/* 8022B880 002287C0  4B DF ED C1 */	bl panic_f__12JUTExceptionFPCciPCce
/* 8022B884 002287C4  48 00 00 E0 */	b .L_8022B964
.L_8022B888:
/* 8022B888 002287C8  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8022B88C 002287CC  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 8022B890 002287D0  4B FA 57 E1 */	bl clear__Q34Game8GameStat11PikiCounterFv
/* 8022B894 002287D4  48 23 BB A5 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B898 002287D8  38 00 00 00 */	li r0, 0
/* 8022B89C 002287DC  38 C1 00 10 */	addi r6, r1, 0x10
/* 8022B8A0 002287E0  98 01 00 10 */	stb r0, 0x10(r1)
/* 8022B8A4 002287E4  7F C3 F3 78 */	mr r3, r30
/* 8022B8A8 002287E8  7F E4 FB 78 */	mr r4, r31
/* 8022B8AC 002287EC  38 A0 00 04 */	li r5, 4
/* 8022B8B0 002287F0  98 01 00 10 */	stb r0, 0x10(r1)
/* 8022B8B4 002287F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B8B8 002287F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B8BC 002287FC  7D 89 03 A6 */	mtctr r12
/* 8022B8C0 00228800  4E 80 04 21 */	bctrl 
/* 8022B8C4 00228804  48 00 00 A0 */	b .L_8022B964
.L_8022B8C8:
/* 8022B8C8 00228808  7F 23 CB 78 */	mr r3, r25
/* 8022B8CC 0022880C  38 9D 00 EC */	addi r4, r29, 0xec
/* 8022B8D0 00228810  48 20 5F FD */	bl is__Q24Game11MovieConfigFPc
/* 8022B8D4 00228814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B8D8 00228818  41 82 00 40 */	beq .L_8022B918
/* 8022B8DC 0022881C  48 23 BB 5D */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B8E0 00228820  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022B8E4 00228824  48 1D 22 C1 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 8022B8E8 00228828  38 00 00 00 */	li r0, 0
/* 8022B8EC 0022882C  38 C1 00 0C */	addi r6, r1, 0xc
/* 8022B8F0 00228830  98 01 00 0C */	stb r0, 0xc(r1)
/* 8022B8F4 00228834  7F C3 F3 78 */	mr r3, r30
/* 8022B8F8 00228838  7F E4 FB 78 */	mr r4, r31
/* 8022B8FC 0022883C  38 A0 00 04 */	li r5, 4
/* 8022B900 00228840  98 01 00 0C */	stb r0, 0xc(r1)
/* 8022B904 00228844  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B908 00228848  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B90C 0022884C  7D 89 03 A6 */	mtctr r12
/* 8022B910 00228850  4E 80 04 21 */	bctrl 
/* 8022B914 00228854  48 00 00 50 */	b .L_8022B964
.L_8022B918:
/* 8022B918 00228858  7F 23 CB 78 */	mr r3, r25
/* 8022B91C 0022885C  38 9D 01 3C */	addi r4, r29, 0x13c
/* 8022B920 00228860  48 20 5F AD */	bl is__Q24Game11MovieConfigFPc
/* 8022B924 00228864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8022B928 00228868  41 82 00 3C */	beq .L_8022B964
/* 8022B92C 0022886C  48 23 BB 0D */	bl PSMCancelToPauseOffMainBgm__Fv
/* 8022B930 00228870  38 A0 00 00 */	li r5, 0
/* 8022B934 00228874  38 C1 00 08 */	addi r6, r1, 8
/* 8022B938 00228878  98 A1 00 08 */	stb r5, 8(r1)
/* 8022B93C 0022887C  60 A0 00 01 */	ori r0, r5, 1
/* 8022B940 00228880  7F C3 F3 78 */	mr r3, r30
/* 8022B944 00228884  7F E4 FB 78 */	mr r4, r31
/* 8022B948 00228888  98 A1 00 08 */	stb r5, 8(r1)
/* 8022B94C 0022888C  38 A0 00 04 */	li r5, 4
/* 8022B950 00228890  98 01 00 08 */	stb r0, 8(r1)
/* 8022B954 00228894  81 9E 00 00 */	lwz r12, 0(r30)
/* 8022B958 00228898  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8022B95C 0022889C  7D 89 03 A6 */	mtctr r12
/* 8022B960 002288A0  4E 80 04 21 */	bctrl 
.L_8022B964:
/* 8022B964 002288A4  E3 E1 00 B8 */	psq_l f31, 184(r1), 0, qr0
/* 8022B968 002288A8  CB E1 00 B0 */	lfd f31, 0xb0(r1)
/* 8022B96C 002288AC  BB 01 00 90 */	lmw r24, 0x90(r1)
/* 8022B970 002288B0  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8022B974 002288B4  7C 08 03 A6 */	mtlr r0
/* 8022B978 002288B8  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8022B97C 002288BC  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item:
/* 8022B980 002288C0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8022B984 002288C4  7C 08 02 A6 */	mflr r0
/* 8022B988 002288C8  3C 60 80 48 */	lis r3, lbl_80483680@ha
/* 8022B98C 002288CC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022B990 002288D0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022B994 002288D4  38 00 00 00 */	li r0, 0
/* 8022B998 002288D8  38 63 36 80 */	addi r3, r3, lbl_80483680@l
/* 8022B99C 002288DC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8022B9A0 002288E0  7C BF 2B 78 */	mr r31, r5
/* 8022B9A4 002288E4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8022B9A8 002288E8  7C 9E 23 78 */	mr r30, r4
/* 8022B9AC 002288EC  80 C4 00 C8 */	lwz r6, 0xe8(r4)
/* 8022B9B0 002288F0  7F E4 FB 78 */	mr r4, r31
/* 8022B9B4 002288F4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8022B9B8 002288F8  38 61 00 08 */	addi r3, r1, 8
/* 8022B9BC 002288FC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8022B9C0 00228900  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8022B9C4 00228904  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022B9C8 00228908  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022B9CC 0022890C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022B9D0 00228910  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022B9D4 00228914  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022B9D8 00228918  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022B9DC 0022891C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022B9E0 00228920  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022B9E4 00228924  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022B9E8 00228928  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022B9EC 0022892C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022B9F0 00228930  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B9F4 00228934  7D 89 03 A6 */	mtctr r12
/* 8022B9F8 00228938  4E 80 04 21 */	bctrl 
/* 8022B9FC 0022893C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022BA00 00228940  7F E3 FB 78 */	mr r3, r31
/* 8022BA04 00228944  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022BA08 00228948  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022BA0C 0022894C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022BA10 00228950  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022BA14 00228954  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022BA18 00228958  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022BA1C 0022895C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022BA20 00228960  7D 89 03 A6 */	mtctr r12
/* 8022BA24 00228964  4E 80 04 21 */	bctrl 
/* 8022BA28 00228968  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022BA2C 0022896C  38 81 00 14 */	addi r4, r1, 0x14
/* 8022BA30 00228970  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BA34 00228974  80 1E 00 CC */	lwz r0, 0xec(r30)
/* 8022BA38 00228978  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BA3C 0022897C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BA40 00228980  93 E3 01 94 */	stw r31, 0x194(r3)
/* 8022BA44 00228984  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BA48 00228988  48 20 0F 89 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022BA4C 0022898C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8022BA50 00228990  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8022BA54 00228994  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8022BA58 00228998  7C 08 03 A6 */	mtlr r0
/* 8022BA5C 0022899C  38 21 00 50 */	addi r1, r1, 0x50
/* 8022BA60 002289A0  4E 80 00 20 */	blr 
.else
.global onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item:
/* 8022B980 002288C0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8022B984 002288C4  7C 08 02 A6 */	mflr r0
/* 8022B988 002288C8  3C 60 80 48 */	lis r3, lbl_80483680@ha
/* 8022B98C 002288CC  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022B990 002288D0  90 01 00 54 */	stw r0, 0x54(r1)
/* 8022B994 002288D4  38 00 00 00 */	li r0, 0
/* 8022B998 002288D8  38 63 36 80 */	addi r3, r3, lbl_80483680@l
/* 8022B99C 002288DC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8022B9A0 002288E0  7C BF 2B 78 */	mr r31, r5
/* 8022B9A4 002288E4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8022B9A8 002288E8  7C 9E 23 78 */	mr r30, r4
/* 8022B9AC 002288EC  80 C4 00 C8 */	lwz r6, 0xc8(r4)
/* 8022B9B0 002288F0  7F E4 FB 78 */	mr r4, r31
/* 8022B9B4 002288F4  90 61 00 14 */	stw r3, 0x14(r1)
/* 8022B9B8 002288F8  38 61 00 08 */	addi r3, r1, 8
/* 8022B9BC 002288FC  90 01 00 18 */	stw r0, 0x18(r1)
/* 8022B9C0 00228900  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8022B9C4 00228904  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022B9C8 00228908  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022B9CC 0022890C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022B9D0 00228910  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022B9D4 00228914  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8022B9D8 00228918  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022B9DC 0022891C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022B9E0 00228920  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022B9E4 00228924  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022B9E8 00228928  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022B9EC 0022892C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022B9F0 00228930  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022B9F4 00228934  7D 89 03 A6 */	mtctr r12
/* 8022B9F8 00228938  4E 80 04 21 */	bctrl 
/* 8022B9FC 0022893C  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022BA00 00228940  7F E3 FB 78 */	mr r3, r31
/* 8022BA04 00228944  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022BA08 00228948  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022BA0C 0022894C  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022BA10 00228950  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022BA14 00228954  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022BA18 00228958  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022BA1C 0022895C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022BA20 00228960  7D 89 03 A6 */	mtctr r12
/* 8022BA24 00228964  4E 80 04 21 */	bctrl 
/* 8022BA28 00228968  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022BA2C 0022896C  38 81 00 14 */	addi r4, r1, 0x14
/* 8022BA30 00228970  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BA34 00228974  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 8022BA38 00228978  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BA3C 0022897C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BA40 00228980  93 E3 01 94 */	stw r31, 0x194(r3)
/* 8022BA44 00228984  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BA48 00228988  48 20 0F 89 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8022BA4C 0022898C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8022BA50 00228990  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8022BA54 00228994  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8022BA58 00228998  7C 08 03 A6 */	mtlr r0
/* 8022BA5C 0022899C  38 21 00 50 */	addi r1, r1, 0x50
/* 8022BA60 002289A0  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni:
/* 8022BA64 002289A4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8022BA68 002289A8  7C 08 02 A6 */	mflr r0
/* 8022BA6C 002289AC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8022BA70 002289B0  38 00 00 00 */	li r0, 0
/* 8022BA74 002289B4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8022BA78 002289B8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8022BA7C 002289BC  7C BE 2B 79 */	or. r30, r5, r5
/* 8022BA80 002289C0  3C A0 80 48 */	lis r5, lbl_80483550@ha
/* 8022BA84 002289C4  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8022BA88 002289C8  7C 9D 23 78 */	mr r29, r4
/* 8022BA8C 002289CC  3B E5 35 50 */	addi r31, r5, lbl_80483550@l
/* 8022BA90 002289D0  93 81 00 50 */	stw r28, 0x50(r1)
/* 8022BA94 002289D4  7C 7C 1B 78 */	mr r28, r3
/* 8022BA98 002289D8  41 80 00 10 */	blt .L_8022BAA8
/* 8022BA9C 002289DC  2C 1E 00 02 */	cmpwi r30, 2
/* 8022BAA0 002289E0  40 80 00 08 */	bge .L_8022BAA8
/* 8022BAA4 002289E4  38 00 00 01 */	li r0, 1
.L_8022BAA8:
/* 8022BAA8 002289E8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8022BAAC 002289EC  40 82 00 18 */	bne .L_8022BAC4
/* 8022BAB0 002289F0  38 7F 00 70 */	addi r3, r31, 0x70
/* 8022BAB4 002289F4  38 BF 00 80 */	addi r5, r31, 0x80
/* 8022BAB8 002289F8  38 80 05 3D */	li r4, 0x53d
/* 8022BABC 002289FC  4C C6 31 82 */	crclr 6
/* 8022BAC0 00228A00  4B DF EB 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022BAC4:
/* 8022BAC4 00228A04  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022BAC8 00228A08  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022BACC 00228A0C  2C 00 00 01 */	cmpwi r0, 1
/* 8022BAD0 00228A10  40 82 00 24 */	bne .L_8022BAF4
/* 8022BAD4 00228A14  88 1C 00 16 */	lbz r0, 0x16(r28)
/* 8022BAD8 00228A18  28 00 00 00 */	cmplwi r0, 0
/* 8022BADC 00228A1C  40 82 01 04 */	bne .L_8022BBE0
/* 8022BAE0 00228A20  7C 7C F2 14 */	add r3, r28, r30
/* 8022BAE4 00228A24  88 03 00 25 */	lbz r0, 0x25(r3)
/* 8022BAE8 00228A28  60 00 00 01 */	ori r0, r0, 1
/* 8022BAEC 00228A2C  98 03 00 25 */	stb r0, 0x25(r3)
/* 8022BAF0 00228A30  48 00 00 F0 */	b .L_8022BBE0
.L_8022BAF4:
/* 8022BAF4 00228A34  80 BD 00 C8 */	lwz r5, 0xe8(r29)
/* 8022BAF8 00228A38  38 00 00 00 */	li r0, 0
/* 8022BAFC 00228A3C  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022BB00 00228A40  38 7F 01 20 */	addi r3, r31, 0x120
/* 8022BB04 00228A44  90 61 00 14 */	stw r3, 0x14(r1)
/* 8022BB08 00228A48  7F C4 F3 78 */	mr r4, r30
/* 8022BB0C 00228A4C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022BB10 00228A50  90 01 00 18 */	stw r0, 0x18(r1)
/* 8022BB14 00228A54  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8022BB18 00228A58  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022BB1C 00228A5C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022BB20 00228A60  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022BB24 00228A64  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022BB28 00228A68  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 8022BB2C 00228A6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BB30 00228A70  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022BB34 00228A74  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022BB38 00228A78  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022BB3C 00228A7C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022BB40 00228A80  80 1D 00 CC */	lwz r0, 0xec(r29)
/* 8022BB44 00228A84  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BB48 00228A88  81 83 00 00 */	lwz r12, 0(r3)
/* 8022BB4C 00228A8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022BB50 00228A90  7D 89 03 A6 */	mtctr r12
/* 8022BB54 00228A94  4E 80 04 21 */	bctrl 
/* 8022BB58 00228A98  7C 60 1B 78 */	mr r0, r3
/* 8022BB5C 00228A9C  38 61 00 08 */	addi r3, r1, 8
/* 8022BB60 00228AA0  7C 1F 03 78 */	mr r31, r0
/* 8022BB64 00228AA4  7F E4 FB 78 */	mr r4, r31
/* 8022BB68 00228AA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022BB6C 00228AAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022BB70 00228AB0  7D 89 03 A6 */	mtctr r12
/* 8022BB74 00228AB4  4E 80 04 21 */	bctrl 
/* 8022BB78 00228AB8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022BB7C 00228ABC  7F E3 FB 78 */	mr r3, r31
/* 8022BB80 00228AC0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022BB84 00228AC4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022BB88 00228AC8  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022BB8C 00228ACC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022BB90 00228AD0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022BB94 00228AD4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022BB98 00228AD8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022BB9C 00228ADC  7D 89 03 A6 */	mtctr r12
/* 8022BBA0 00228AE0  4E 80 04 21 */	bctrl 
/* 8022BBA4 00228AE4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022BBA8 00228AE8  2C 1E 00 00 */	cmpwi r30, 0
/* 8022BBAC 00228AEC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBB0 00228AF0  93 E3 01 8C */	stw r31, 0x18c(r3)
/* 8022BBB4 00228AF4  40 82 00 14 */	bne .L_8022BBC8
/* 8022BBB8 00228AF8  80 1D 01 04 */	lwz r0, 0x124(r29)
/* 8022BBBC 00228AFC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBC0 00228B00  90 03 01 90 */	stw r0, 0x190(r3)
/* 8022BBC4 00228B04  48 00 00 10 */	b .L_8022BBD4
.L_8022BBC8:
/* 8022BBC8 00228B08  80 1D 01 08 */	lwz r0, 0x128(r29)
/* 8022BBCC 00228B0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBD0 00228B10  90 03 01 90 */	stw r0, 0x190(r3)
.L_8022BBD4:
/* 8022BBD4 00228B14  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBD8 00228B18  38 81 00 14 */	addi r4, r1, 0x14
/* 8022BBDC 00228B1C  48 20 0D F5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_8022BBE0:
/* 8022BBE0 00228B20  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022BBE4 00228B24  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8022BBE8 00228B28  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8022BBEC 00228B2C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8022BBF0 00228B30  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8022BBF4 00228B34  7C 08 03 A6 */	mtlr r0
/* 8022BBF8 00228B38  38 21 00 60 */	addi r1, r1, 0x60
/* 8022BBFC 00228B3C  4E 80 00 20 */	blr 
.else
.global onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni:
/* 8022BA64 002289A4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8022BA68 002289A8  7C 08 02 A6 */	mflr r0
/* 8022BA6C 002289AC  90 01 00 64 */	stw r0, 0x64(r1)
/* 8022BA70 002289B0  38 00 00 00 */	li r0, 0
/* 8022BA74 002289B4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8022BA78 002289B8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8022BA7C 002289BC  7C BE 2B 79 */	or. r30, r5, r5
/* 8022BA80 002289C0  3C A0 80 48 */	lis r5, lbl_80483550@ha
/* 8022BA84 002289C4  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8022BA88 002289C8  7C 9D 23 78 */	mr r29, r4
/* 8022BA8C 002289CC  3B E5 35 50 */	addi r31, r5, lbl_80483550@l
/* 8022BA90 002289D0  93 81 00 50 */	stw r28, 0x50(r1)
/* 8022BA94 002289D4  7C 7C 1B 78 */	mr r28, r3
/* 8022BA98 002289D8  41 80 00 10 */	blt .L_8022BAA8
/* 8022BA9C 002289DC  2C 1E 00 02 */	cmpwi r30, 2
/* 8022BAA0 002289E0  40 80 00 08 */	bge .L_8022BAA8
/* 8022BAA4 002289E4  38 00 00 01 */	li r0, 1
.L_8022BAA8:
/* 8022BAA8 002289E8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8022BAAC 002289EC  40 82 00 18 */	bne .L_8022BAC4
/* 8022BAB0 002289F0  38 7F 00 70 */	addi r3, r31, 0x70
/* 8022BAB4 002289F4  38 BF 00 80 */	addi r5, r31, 0x80
/* 8022BAB8 002289F8  38 80 05 3D */	li r4, 0x53d
/* 8022BABC 002289FC  4C C6 31 82 */	crclr 6
/* 8022BAC0 00228A00  4B DF EB 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8022BAC4:
/* 8022BAC4 00228A04  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8022BAC8 00228A08  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8022BACC 00228A0C  2C 00 00 01 */	cmpwi r0, 1
/* 8022BAD0 00228A10  40 82 00 24 */	bne .L_8022BAF4
/* 8022BAD4 00228A14  88 1C 00 16 */	lbz r0, 0x16(r28)
/* 8022BAD8 00228A18  28 00 00 00 */	cmplwi r0, 0
/* 8022BADC 00228A1C  40 82 01 04 */	bne .L_8022BBE0
/* 8022BAE0 00228A20  7C 7C F2 14 */	add r3, r28, r30
/* 8022BAE4 00228A24  88 03 00 25 */	lbz r0, 0x25(r3)
/* 8022BAE8 00228A28  60 00 00 01 */	ori r0, r0, 1
/* 8022BAEC 00228A2C  98 03 00 25 */	stb r0, 0x25(r3)
/* 8022BAF0 00228A30  48 00 00 F0 */	b .L_8022BBE0
.L_8022BAF4:
/* 8022BAF4 00228A34  80 BD 00 C8 */	lwz r5, 0xc8(r29)
/* 8022BAF8 00228A38  38 00 00 00 */	li r0, 0
/* 8022BAFC 00228A3C  C0 02 BF 14 */	lfs f0, lbl_8051A274@sda21(r2)
/* 8022BB00 00228A40  38 7F 01 20 */	addi r3, r31, 0x120
/* 8022BB04 00228A44  90 61 00 14 */	stw r3, 0x14(r1)
/* 8022BB08 00228A48  7F C4 F3 78 */	mr r4, r30
/* 8022BB0C 00228A4C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022BB10 00228A50  90 01 00 18 */	stw r0, 0x18(r1)
/* 8022BB14 00228A54  90 A1 00 20 */	stw r5, 0x20(r1)
/* 8022BB18 00228A58  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8022BB1C 00228A5C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8022BB20 00228A60  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022BB24 00228A64  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8022BB28 00228A68  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 8022BB2C 00228A6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BB30 00228A70  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8022BB34 00228A74  90 01 00 40 */	stw r0, 0x40(r1)
/* 8022BB38 00228A78  90 01 00 28 */	stw r0, 0x28(r1)
/* 8022BB3C 00228A7C  90 01 00 44 */	stw r0, 0x44(r1)
/* 8022BB40 00228A80  80 1D 00 CC */	lwz r0, 0xcc(r29)
/* 8022BB44 00228A84  90 01 00 24 */	stw r0, 0x24(r1)
/* 8022BB48 00228A88  81 83 00 00 */	lwz r12, 0(r3)
/* 8022BB4C 00228A8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022BB50 00228A90  7D 89 03 A6 */	mtctr r12
/* 8022BB54 00228A94  4E 80 04 21 */	bctrl 
/* 8022BB58 00228A98  7C 60 1B 78 */	mr r0, r3
/* 8022BB5C 00228A9C  38 61 00 08 */	addi r3, r1, 8
/* 8022BB60 00228AA0  7C 1F 03 78 */	mr r31, r0
/* 8022BB64 00228AA4  7F E4 FB 78 */	mr r4, r31
/* 8022BB68 00228AA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022BB6C 00228AAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022BB70 00228AB0  7D 89 03 A6 */	mtctr r12
/* 8022BB74 00228AB4  4E 80 04 21 */	bctrl 
/* 8022BB78 00228AB8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8022BB7C 00228ABC  7F E3 FB 78 */	mr r3, r31
/* 8022BB80 00228AC0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8022BB84 00228AC4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8022BB88 00228AC8  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022BB8C 00228ACC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8022BB90 00228AD0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8022BB94 00228AD4  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022BB98 00228AD8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8022BB9C 00228ADC  7D 89 03 A6 */	mtctr r12
/* 8022BBA0 00228AE0  4E 80 04 21 */	bctrl 
/* 8022BBA4 00228AE4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8022BBA8 00228AE8  2C 1E 00 00 */	cmpwi r30, 0
/* 8022BBAC 00228AEC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBB0 00228AF0  93 E3 01 8C */	stw r31, 0x18c(r3)
/* 8022BBB4 00228AF4  40 82 00 14 */	bne .L_8022BBC8
/* 8022BBB8 00228AF8  80 1D 01 04 */	lwz r0, 0x104(r29)
/* 8022BBBC 00228AFC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBC0 00228B00  90 03 01 90 */	stw r0, 0x190(r3)
/* 8022BBC4 00228B04  48 00 00 10 */	b .L_8022BBD4
.L_8022BBC8:
/* 8022BBC8 00228B08  80 1D 01 08 */	lwz r0, 0x108(r29)
/* 8022BBCC 00228B0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBD0 00228B10  90 03 01 90 */	stw r0, 0x190(r3)
.L_8022BBD4:
/* 8022BBD4 00228B14  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022BBD8 00228B18  38 81 00 14 */	addi r4, r1, 0x14
/* 8022BBDC 00228B1C  48 20 0D F5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_8022BBE0:
/* 8022BBE0 00228B20  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8022BBE4 00228B24  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8022BBE8 00228B28  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8022BBEC 00228B2C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8022BBF0 00228B30  83 81 00 50 */	lwz r28, 0x50(r1)
/* 8022BBF4 00228B34  7C 08 03 A6 */	mtlr r0
/* 8022BBF8 00228B38  38 21 00 60 */	addi r1, r1, 0x60
/* 8022BBFC 00228B3C  4E 80 00 20 */	blr 
.endif

.global open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
open_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni:
/* 8022BC00 00228B40  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 8022BC04 00228B44  7C 08 02 A6 */	mflr r0
/* 8022BC08 00228B48  90 01 01 84 */	stw r0, 0x184(r1)
/* 8022BC0C 00228B4C  38 00 00 00 */	li r0, 0
/* 8022BC10 00228B50  93 E1 01 7C */	stw r31, 0x17c(r1)
/* 8022BC14 00228B54  7C BF 2B 78 */	mr r31, r5
/* 8022BC18 00228B58  93 C1 01 78 */	stw r30, 0x178(r1)
/* 8022BC1C 00228B5C  7C 7E 1B 78 */	mr r30, r3
/* 8022BC20 00228B60  93 A1 01 74 */	stw r29, 0x174(r1)
/* 8022BC24 00228B64  93 81 01 70 */	stw r28, 0x170(r1)
/* 8022BC28 00228B68  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8022BC2C 00228B6C  80 66 00 44 */	lwz r3, 0x44(r6)
/* 8022BC30 00228B70  2C 03 00 01 */	cmpwi r3, 1
/* 8022BC34 00228B74  41 82 00 0C */	beq .L_8022BC40
/* 8022BC38 00228B78  2C 03 00 03 */	cmpwi r3, 3
/* 8022BC3C 00228B7C  40 82 00 08 */	bne .L_8022BC44
.L_8022BC40:
/* 8022BC40 00228B80  38 00 00 01 */	li r0, 1
.L_8022BC44:
/* 8022BC44 00228B84  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8022BC48 00228B88  40 82 01 00 */	bne .L_8022BD48
/* 8022BC4C 00228B8C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022BC50 00228B90  3B 80 00 00 */	li r28, 0
/* 8022BC54 00228B94  3B A3 11 48 */	addi r29, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022BC58 00228B98  39 20 00 01 */	li r9, 1
/* 8022BC5C 00228B9C  C0 62 BF 14 */	lfs f3, lbl_8051A274@sda21(r2)
/* 8022BC60 00228BA0  3C C0 80 4C */	lis r6, __vt__Q32og6Screen21DispMemberChallenge1P@ha
/* 8022BC64 00228BA4  38 E0 00 0A */	li r7, 0xa
/* 8022BC68 00228BA8  C0 42 BF 08 */	lfs f2, lbl_8051A268@sda21(r2)
/* 8022BC6C 00228BAC  C0 22 BF 50 */	lfs f1, lbl_8051A2B0@sda21(r2)
/* 8022BC70 00228BB0  39 00 00 02 */	li r8, 2
/* 8022BC74 00228BB4  C0 02 BF 54 */	lfs f0, lbl_8051A2B4@sda21(r2)
/* 8022BC78 00228BB8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8022BC7C 00228BBC  39 60 04 D2 */	li r11, 0x4d2
/* 8022BC80 00228BC0  39 40 00 32 */	li r10, 0x32
/* 8022BC84 00228BC4  38 A0 09 EC */	li r5, 0x9ec
/* 8022BC88 00228BC8  38 00 10 92 */	li r0, 0x1092
/* 8022BC8C 00228BCC  93 A1 00 F4 */	stw r29, 0xf4(r1)
/* 8022BC90 00228BD0  39 86 0F 2C */	addi r12, r6, __vt__Q32og6Screen21DispMemberChallenge1P@l
/* 8022BC94 00228BD4  38 C3 10 C4 */	addi r6, r3, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 8022BC98 00228BD8  7C 83 23 78 */	mr r3, r4
/* 8022BC9C 00228BDC  93 A1 01 5C */	stw r29, 0x15c(r1)
/* 8022BCA0 00228BE0  93 81 00 F8 */	stw r28, 0xf8(r1)
/* 8022BCA4 00228BE4  91 81 00 F4 */	stw r12, 0xf4(r1)
/* 8022BCA8 00228BE8  D0 61 00 FC */	stfs f3, 0xfc(r1)
/* 8022BCAC 00228BEC  93 81 01 00 */	stw r28, 0x100(r1)
/* 8022BCB0 00228BF0  93 81 01 08 */	stw r28, 0x108(r1)
/* 8022BCB4 00228BF4  91 61 01 04 */	stw r11, 0x104(r1)
/* 8022BCB8 00228BF8  91 41 01 0C */	stw r10, 0x10c(r1)
/* 8022BCBC 00228BFC  9B 81 01 10 */	stb r28, 0x110(r1)
/* 8022BCC0 00228C00  93 81 01 14 */	stw r28, 0x114(r1)
/* 8022BCC4 00228C04  D0 41 01 18 */	stfs f2, 0x118(r1)
/* 8022BCC8 00228C08  91 21 01 1C */	stw r9, 0x11c(r1)
/* 8022BCCC 00228C0C  91 01 01 20 */	stw r8, 0x120(r1)
/* 8022BCD0 00228C10  90 E1 01 24 */	stw r7, 0x124(r1)
/* 8022BCD4 00228C14  90 E1 01 28 */	stw r7, 0x128(r1)
/* 8022BCD8 00228C18  99 21 01 2C */	stb r9, 0x12c(r1)
/* 8022BCDC 00228C1C  D0 41 01 30 */	stfs f2, 0x130(r1)
/* 8022BCE0 00228C20  91 21 01 34 */	stw r9, 0x134(r1)
/* 8022BCE4 00228C24  91 01 01 38 */	stw r8, 0x138(r1)
/* 8022BCE8 00228C28  90 E1 01 3C */	stw r7, 0x13c(r1)
/* 8022BCEC 00228C2C  90 E1 01 40 */	stw r7, 0x140(r1)
/* 8022BCF0 00228C30  99 21 01 44 */	stb r9, 0x144(r1)
/* 8022BCF4 00228C34  93 81 01 60 */	stw r28, 0x160(r1)
/* 8022BCF8 00228C38  90 C1 01 5C */	stw r6, 0x15c(r1)
/* 8022BCFC 00228C3C  D0 21 01 68 */	stfs f1, 0x168(r1)
/* 8022BD00 00228C40  D0 21 01 64 */	stfs f1, 0x164(r1)
/* 8022BD04 00228C44  90 A1 01 48 */	stw r5, 0x148(r1)
/* 8022BD08 00228C48  9B 81 01 4C */	stb r28, 0x14c(r1)
/* 8022BD0C 00228C4C  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 8022BD10 00228C50  90 01 01 58 */	stw r0, 0x158(r1)
/* 8022BD14 00228C54  D0 61 01 54 */	stfs f3, 0x154(r1)
/* 8022BD18 00228C58  81 84 00 00 */	lwz r12, 0(r4)
/* 8022BD1C 00228C5C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022BD20 00228C60  7D 89 03 A6 */	mtctr r12
/* 8022BD24 00228C64  4E 80 04 21 */	bctrl 
/* 8022BD28 00228C68  90 61 01 08 */	stw r3, 0x108(r1)
/* 8022BD2C 00228C6C  7F E5 FB 78 */	mr r5, r31
/* 8022BD30 00228C70  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022BD34 00228C74  38 81 00 F4 */	addi r4, r1, 0xf4
/* 8022BD38 00228C78  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8022BD3C 00228C7C  D0 01 01 54 */	stfs f0, 0x154(r1)
/* 8022BD40 00228C80  48 1D 0C 69 */	bl open_GameChallenge1P__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberChallenge1Pi
/* 8022BD44 00228C84  48 00 01 D8 */	b .L_8022BF1C
.L_8022BD48:
/* 8022BD48 00228C88  2C 03 00 01 */	cmpwi r3, 1
/* 8022BD4C 00228C8C  40 82 00 D8 */	bne .L_8022BE24
/* 8022BD50 00228C90  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022BD54 00228C94  3B 80 00 00 */	li r28, 0
/* 8022BD58 00228C98  38 83 11 48 */	addi r4, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022BD5C 00228C9C  39 20 00 01 */	li r9, 1
/* 8022BD60 00228CA0  C0 22 BF 08 */	lfs f1, lbl_8051A268@sda21(r2)
/* 8022BD64 00228CA4  3C 60 80 4C */	lis r3, __vt__Q32og6Screen12DispMemberVs@ha
/* 8022BD68 00228CA8  38 E0 00 0A */	li r7, 0xa
/* 8022BD6C 00228CAC  C0 02 BF 58 */	lfs f0, lbl_8051A2B8@sda21(r2)
/* 8022BD70 00228CB0  39 00 00 02 */	li r8, 2
/* 8022BD74 00228CB4  C0 42 BF 14 */	lfs f2, lbl_8051A274@sda21(r2)
/* 8022BD78 00228CB8  39 60 04 D2 */	li r11, 0x4d2
/* 8022BD7C 00228CBC  39 40 00 32 */	li r10, 0x32
/* 8022BD80 00228CC0  38 C0 00 6F */	li r6, 0x6f
/* 8022BD84 00228CC4  38 00 00 DE */	li r0, 0xde
/* 8022BD88 00228CC8  90 81 00 80 */	stw r4, 0x80(r1)
/* 8022BD8C 00228CCC  39 83 0F 14 */	addi r12, r3, __vt__Q32og6Screen12DispMemberVs@l
/* 8022BD90 00228CD0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022BD94 00228CD4  7F E5 FB 78 */	mr r5, r31
/* 8022BD98 00228CD8  93 81 00 84 */	stw r28, 0x84(r1)
/* 8022BD9C 00228CDC  38 81 00 80 */	addi r4, r1, 0x80
/* 8022BDA0 00228CE0  91 81 00 80 */	stw r12, 0x80(r1)
/* 8022BDA4 00228CE4  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 8022BDA8 00228CE8  93 81 00 90 */	stw r28, 0x90(r1)
/* 8022BDAC 00228CEC  93 81 00 98 */	stw r28, 0x98(r1)
/* 8022BDB0 00228CF0  91 61 00 94 */	stw r11, 0x94(r1)
/* 8022BDB4 00228CF4  91 41 00 9C */	stw r10, 0x9c(r1)
/* 8022BDB8 00228CF8  9B 81 00 A0 */	stb r28, 0xa0(r1)
/* 8022BDBC 00228CFC  93 81 00 A4 */	stw r28, 0xa4(r1)
/* 8022BDC0 00228D00  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 8022BDC4 00228D04  91 21 00 AC */	stw r9, 0xac(r1)
/* 8022BDC8 00228D08  91 01 00 B0 */	stw r8, 0xb0(r1)
/* 8022BDCC 00228D0C  90 E1 00 B4 */	stw r7, 0xb4(r1)
/* 8022BDD0 00228D10  90 E1 00 B8 */	stw r7, 0xb8(r1)
/* 8022BDD4 00228D14  99 21 00 BC */	stb r9, 0xbc(r1)
/* 8022BDD8 00228D18  D0 21 00 C0 */	stfs f1, 0xc0(r1)
/* 8022BDDC 00228D1C  91 21 00 C4 */	stw r9, 0xc4(r1)
/* 8022BDE0 00228D20  91 01 00 C8 */	stw r8, 0xc8(r1)
/* 8022BDE4 00228D24  90 E1 00 CC */	stw r7, 0xcc(r1)
/* 8022BDE8 00228D28  90 E1 00 D0 */	stw r7, 0xd0(r1)
/* 8022BDEC 00228D2C  99 21 00 D4 */	stb r9, 0xd4(r1)
/* 8022BDF0 00228D30  90 C1 00 D8 */	stw r6, 0xd8(r1)
/* 8022BDF4 00228D34  90 01 00 DC */	stw r0, 0xdc(r1)
/* 8022BDF8 00228D38  93 81 00 E0 */	stw r28, 0xe0(r1)
/* 8022BDFC 00228D3C  93 81 00 E4 */	stw r28, 0xe4(r1)
/* 8022BE00 00228D40  93 81 00 88 */	stw r28, 0x88(r1)
/* 8022BE04 00228D44  9B 81 00 E8 */	stb r28, 0xe8(r1)
/* 8022BE08 00228D48  9B 81 00 E9 */	stb r28, 0xe9(r1)
/* 8022BE0C 00228D4C  9B 81 00 EA */	stb r28, 0xea(r1)
/* 8022BE10 00228D50  9B 81 00 EB */	stb r28, 0xeb(r1)
/* 8022BE14 00228D54  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 8022BE18 00228D58  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 8022BE1C 00228D5C  48 1D 06 1D */	bl open_GameVs__Q26Screen9Game2DMgrFRQ32og6Screen12DispMemberVsi
/* 8022BE20 00228D60  48 00 00 FC */	b .L_8022BF1C
.L_8022BE24:
/* 8022BE24 00228D64  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022BE28 00228D68  3B A0 00 00 */	li r29, 0
/* 8022BE2C 00228D6C  3B 83 11 48 */	addi r28, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022BE30 00228D70  39 20 00 01 */	li r9, 1
/* 8022BE34 00228D74  C0 62 BF 14 */	lfs f3, lbl_8051A274@sda21(r2)
/* 8022BE38 00228D78  3C C0 80 4C */	lis r6, __vt__Q32og6Screen21DispMemberChallenge2P@ha
/* 8022BE3C 00228D7C  38 E0 00 0A */	li r7, 0xa
/* 8022BE40 00228D80  C0 42 BF 08 */	lfs f2, lbl_8051A268@sda21(r2)
/* 8022BE44 00228D84  C0 22 BF 50 */	lfs f1, lbl_8051A2B0@sda21(r2)
/* 8022BE48 00228D88  39 00 00 02 */	li r8, 2
/* 8022BE4C 00228D8C  C0 02 BF 54 */	lfs f0, lbl_8051A2B4@sda21(r2)
/* 8022BE50 00228D90  3C 60 80 4B */	lis r3, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8022BE54 00228D94  39 60 04 D2 */	li r11, 0x4d2
/* 8022BE58 00228D98  39 40 00 32 */	li r10, 0x32
/* 8022BE5C 00228D9C  38 A0 09 EC */	li r5, 0x9ec
/* 8022BE60 00228DA0  38 00 10 92 */	li r0, 0x1092
/* 8022BE64 00228DA4  93 81 00 08 */	stw r28, 8(r1)
/* 8022BE68 00228DA8  39 86 0F 74 */	addi r12, r6, __vt__Q32og6Screen21DispMemberChallenge2P@l
/* 8022BE6C 00228DAC  38 C3 10 C4 */	addi r6, r3, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 8022BE70 00228DB0  7C 83 23 78 */	mr r3, r4
/* 8022BE74 00228DB4  93 81 00 70 */	stw r28, 0x70(r1)
/* 8022BE78 00228DB8  93 A1 00 0C */	stw r29, 0xc(r1)
/* 8022BE7C 00228DBC  91 81 00 08 */	stw r12, 8(r1)
/* 8022BE80 00228DC0  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8022BE84 00228DC4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8022BE88 00228DC8  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 8022BE8C 00228DCC  91 61 00 18 */	stw r11, 0x18(r1)
/* 8022BE90 00228DD0  91 41 00 20 */	stw r10, 0x20(r1)
/* 8022BE94 00228DD4  9B A1 00 24 */	stb r29, 0x24(r1)
/* 8022BE98 00228DD8  93 A1 00 28 */	stw r29, 0x28(r1)
/* 8022BE9C 00228DDC  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022BEA0 00228DE0  91 21 00 30 */	stw r9, 0x30(r1)
/* 8022BEA4 00228DE4  91 01 00 34 */	stw r8, 0x34(r1)
/* 8022BEA8 00228DE8  90 E1 00 38 */	stw r7, 0x38(r1)
/* 8022BEAC 00228DEC  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 8022BEB0 00228DF0  99 21 00 40 */	stb r9, 0x40(r1)
/* 8022BEB4 00228DF4  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8022BEB8 00228DF8  91 21 00 48 */	stw r9, 0x48(r1)
/* 8022BEBC 00228DFC  91 01 00 4C */	stw r8, 0x4c(r1)
/* 8022BEC0 00228E00  90 E1 00 50 */	stw r7, 0x50(r1)
/* 8022BEC4 00228E04  90 E1 00 54 */	stw r7, 0x54(r1)
/* 8022BEC8 00228E08  99 21 00 58 */	stb r9, 0x58(r1)
/* 8022BECC 00228E0C  93 A1 00 74 */	stw r29, 0x74(r1)
/* 8022BED0 00228E10  90 C1 00 70 */	stw r6, 0x70(r1)
/* 8022BED4 00228E14  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 8022BED8 00228E18  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 8022BEDC 00228E1C  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 8022BEE0 00228E20  9B A1 00 60 */	stb r29, 0x60(r1)
/* 8022BEE4 00228E24  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8022BEE8 00228E28  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022BEEC 00228E2C  D0 61 00 68 */	stfs f3, 0x68(r1)
/* 8022BEF0 00228E30  81 84 00 00 */	lwz r12, 0(r4)
/* 8022BEF4 00228E34  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022BEF8 00228E38  7D 89 03 A6 */	mtctr r12
/* 8022BEFC 00228E3C  4E 80 04 21 */	bctrl 
/* 8022BF00 00228E40  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8022BF04 00228E44  7F E5 FB 78 */	mr r5, r31
/* 8022BF08 00228E48  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022BF0C 00228E4C  38 81 00 08 */	addi r4, r1, 8
/* 8022BF10 00228E50  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8022BF14 00228E54  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 8022BF18 00228E58  48 1D 07 5D */	bl open_GameChallenge2P__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberChallenge2Pi
.L_8022BF1C:
/* 8022BF1C 00228E5C  80 01 01 84 */	lwz r0, 0x184(r1)
/* 8022BF20 00228E60  83 E1 01 7C */	lwz r31, 0x17c(r1)
/* 8022BF24 00228E64  83 C1 01 78 */	lwz r30, 0x178(r1)
/* 8022BF28 00228E68  83 A1 01 74 */	lwz r29, 0x174(r1)
/* 8022BF2C 00228E6C  83 81 01 70 */	lwz r28, 0x170(r1)
/* 8022BF30 00228E70  7C 08 03 A6 */	mtlr r0
/* 8022BF34 00228E74  38 21 01 80 */	addi r1, r1, 0x180
/* 8022BF38 00228E78  4E 80 00 20 */	blr 

.if version == 1
.global update_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
update_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022BF3C 00228E7C  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 8022BF40 00228E80  7C 08 02 A6 */	mflr r0
/* 8022BF44 00228E84  90 01 01 84 */	stw r0, 0x184(r1)
/* 8022BF48 00228E88  38 00 00 00 */	li r0, 0
/* 8022BF4C 00228E8C  93 E1 01 7C */	stw r31, 0x17c(r1)
/* 8022BF50 00228E90  7C 9F 23 78 */	mr r31, r4
/* 8022BF54 00228E94  93 C1 01 78 */	stw r30, 0x178(r1)
/* 8022BF58 00228E98  7C 7E 1B 78 */	mr r30, r3
/* 8022BF5C 00228E9C  93 A1 01 74 */	stw r29, 0x174(r1)
/* 8022BF60 00228EA0  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8022BF64 00228EA4  80 65 00 44 */	lwz r3, 0x44(r5)
/* 8022BF68 00228EA8  2C 03 00 01 */	cmpwi r3, 1
/* 8022BF6C 00228EAC  41 82 00 0C */	beq .L_8022BF78
/* 8022BF70 00228EB0  2C 03 00 03 */	cmpwi r3, 3
/* 8022BF74 00228EB4  40 82 00 08 */	bne .L_8022BF7C
.L_8022BF78:
/* 8022BF78 00228EB8  38 00 00 01 */	li r0, 1
.L_8022BF7C:
/* 8022BF7C 00228EBC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8022BF80 00228EC0  40 82 02 88 */	bne .L_8022C208
/* 8022BF84 00228EC4  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022BF88 00228EC8  39 80 00 00 */	li r12, 0
/* 8022BF8C 00228ECC  3B A3 11 48 */	addi r29, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022BF90 00228ED0  39 00 00 01 */	li r8, 1
/* 8022BF94 00228ED4  C0 62 BF 14 */	lfs f3, lbl_8051A274@sda21(r2)
/* 8022BF98 00228ED8  3C A0 80 4C */	lis r5, __vt__Q32og6Screen21DispMemberChallenge1P@ha
/* 8022BF9C 00228EDC  38 C0 00 0A */	li r6, 0xa
/* 8022BFA0 00228EE0  C0 42 BF 08 */	lfs f2, lbl_8051A268@sda21(r2)
/* 8022BFA4 00228EE4  C0 22 BF 50 */	lfs f1, lbl_8051A2B0@sda21(r2)
/* 8022BFA8 00228EE8  38 E0 00 02 */	li r7, 2
/* 8022BFAC 00228EEC  C0 02 BF 54 */	lfs f0, lbl_8051A2B4@sda21(r2)
/* 8022BFB0 00228EF0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8022BFB4 00228EF4  39 40 04 D2 */	li r10, 0x4d2
/* 8022BFB8 00228EF8  39 20 00 32 */	li r9, 0x32
/* 8022BFBC 00228EFC  38 80 09 EC */	li r4, 0x9ec
/* 8022BFC0 00228F00  38 00 10 92 */	li r0, 0x1092
/* 8022BFC4 00228F04  93 A1 00 F4 */	stw r29, 0xf4(r1)
/* 8022BFC8 00228F08  39 65 0F 2C */	addi r11, r5, __vt__Q32og6Screen21DispMemberChallenge1P@l
/* 8022BFCC 00228F0C  38 A3 10 C4 */	addi r5, r3, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 8022BFD0 00228F10  7F E3 FB 78 */	mr r3, r31
/* 8022BFD4 00228F14  93 A1 01 5C */	stw r29, 0x15c(r1)
/* 8022BFD8 00228F18  91 81 00 F8 */	stw r12, 0xf8(r1)
/* 8022BFDC 00228F1C  91 61 00 F4 */	stw r11, 0xf4(r1)
/* 8022BFE0 00228F20  D0 61 00 FC */	stfs f3, 0xfc(r1)
/* 8022BFE4 00228F24  91 81 01 00 */	stw r12, 0x100(r1)
/* 8022BFE8 00228F28  91 81 01 08 */	stw r12, 0x108(r1)
/* 8022BFEC 00228F2C  91 41 01 04 */	stw r10, 0x104(r1)
/* 8022BFF0 00228F30  91 21 01 0C */	stw r9, 0x10c(r1)
/* 8022BFF4 00228F34  99 81 01 10 */	stb r12, 0x110(r1)
/* 8022BFF8 00228F38  91 81 01 14 */	stw r12, 0x114(r1)
/* 8022BFFC 00228F3C  D0 41 01 18 */	stfs f2, 0x118(r1)
/* 8022C000 00228F40  91 01 01 1C */	stw r8, 0x11c(r1)
/* 8022C004 00228F44  90 E1 01 20 */	stw r7, 0x120(r1)
/* 8022C008 00228F48  90 C1 01 24 */	stw r6, 0x124(r1)
/* 8022C00C 00228F4C  90 C1 01 28 */	stw r6, 0x128(r1)
/* 8022C010 00228F50  99 01 01 2C */	stb r8, 0x12c(r1)
/* 8022C014 00228F54  D0 41 01 30 */	stfs f2, 0x130(r1)
/* 8022C018 00228F58  91 01 01 34 */	stw r8, 0x134(r1)
/* 8022C01C 00228F5C  90 E1 01 38 */	stw r7, 0x138(r1)
/* 8022C020 00228F60  90 C1 01 3C */	stw r6, 0x13c(r1)
/* 8022C024 00228F64  90 C1 01 40 */	stw r6, 0x140(r1)
/* 8022C028 00228F68  99 01 01 44 */	stb r8, 0x144(r1)
/* 8022C02C 00228F6C  91 81 01 60 */	stw r12, 0x160(r1)
/* 8022C030 00228F70  90 A1 01 5C */	stw r5, 0x15c(r1)
/* 8022C034 00228F74  D0 21 01 68 */	stfs f1, 0x168(r1)
/* 8022C038 00228F78  D0 21 01 64 */	stfs f1, 0x164(r1)
/* 8022C03C 00228F7C  90 81 01 48 */	stw r4, 0x148(r1)
/* 8022C040 00228F80  99 81 01 4C */	stb r12, 0x14c(r1)
/* 8022C044 00228F84  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 8022C048 00228F88  90 01 01 58 */	stw r0, 0x158(r1)
/* 8022C04C 00228F8C  D0 61 01 54 */	stfs f3, 0x154(r1)
/* 8022C050 00228F90  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022C054 00228F94  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022C058 00228F98  7D 89 03 A6 */	mtctr r12
/* 8022C05C 00228F9C  4E 80 04 21 */	bctrl 
/* 8022C060 00228FA0  90 61 01 08 */	stw r3, 0x108(r1)
/* 8022C064 00228FA4  38 80 00 00 */	li r4, 0
/* 8022C068 00228FA8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C06C 00228FAC  80 1F 02 08 */	lwz r0, 0x22c(r31)
/* 8022C070 00228FB0  90 01 01 58 */	stw r0, 0x158(r1)
/* 8022C074 00228FB4  80 1F 03 BC */	lwz r0, 0x3e0(r31)
/* 8022C078 00228FB8  90 01 01 48 */	stw r0, 0x148(r1)
/* 8022C07C 00228FBC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8022C080 00228FC0  D0 01 01 54 */	stfs f0, 0x154(r1)
/* 8022C084 00228FC4  C0 1F 03 C0 */	lfs f0, 0x3e4(r31)
/* 8022C088 00228FC8  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 8022C08C 00228FCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C090 00228FD0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C094 00228FD4  7D 89 03 A6 */	mtctr r12
/* 8022C098 00228FD8  4E 80 04 21 */	bctrl 
/* 8022C09C 00228FDC  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C0A0 00228FE0  7C 60 1B 78 */	mr r0, r3
/* 8022C0A4 00228FE4  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C0A8 00228FE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C0AC 00228FEC  7C 1D 03 78 */	mr r29, r0
/* 8022C0B0 00228FF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C0B4 00228FF4  7D 89 03 A6 */	mtctr r12
/* 8022C0B8 00228FF8  4E 80 04 21 */	bctrl 
/* 8022C0BC 00228FFC  90 61 01 1C */	stw r3, 0x11c(r1)
/* 8022C0C0 00229000  7F A3 EB 78 */	mr r3, r29
/* 8022C0C4 00229004  4B F1 A9 65 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C0C8 00229008  90 61 01 20 */	stw r3, 0x120(r1)
/* 8022C0CC 0022900C  38 80 00 01 */	li r4, 1
/* 8022C0D0 00229010  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C0D4 00229014  4B FB C3 05 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C0D8 00229018  90 61 01 24 */	stw r3, 0x124(r1)
/* 8022C0DC 0022901C  38 80 00 00 */	li r4, 0
/* 8022C0E0 00229020  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C0E4 00229024  4B FB C2 F5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C0E8 00229028  90 61 01 28 */	stw r3, 0x128(r1)
/* 8022C0EC 0022902C  7F A3 EB 78 */	mr r3, r29
/* 8022C0F0 00229030  4B F1 5F 0D */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C0F4 00229034  D0 21 01 18 */	stfs f1, 0x118(r1)
/* 8022C0F8 00229038  38 80 00 01 */	li r4, 1
/* 8022C0FC 0022903C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C100 00229040  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C104 00229044  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C108 00229048  7D 89 03 A6 */	mtctr r12
/* 8022C10C 0022904C  4E 80 04 21 */	bctrl 
/* 8022C110 00229050  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C114 00229054  7C 60 1B 78 */	mr r0, r3
/* 8022C118 00229058  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C11C 0022905C  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 8022C120 00229060  7C 1D 03 78 */	mr r29, r0
/* 8022C124 00229064  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C128 00229068  7D 89 03 A6 */	mtctr r12
/* 8022C12C 0022906C  4E 80 04 21 */	bctrl 
/* 8022C130 00229070  90 61 01 34 */	stw r3, 0x134(r1)
/* 8022C134 00229074  7F A3 EB 78 */	mr r3, r29
/* 8022C138 00229078  4B F1 A8 F1 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C13C 0022907C  90 61 01 38 */	stw r3, 0x138(r1)
/* 8022C140 00229080  38 80 00 01 */	li r4, 1
/* 8022C144 00229084  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C148 00229088  4B FB C2 91 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C14C 0022908C  90 61 01 3C */	stw r3, 0x13c(r1)
/* 8022C150 00229090  38 80 00 00 */	li r4, 0
/* 8022C154 00229094  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C158 00229098  4B FB C2 81 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C15C 0022909C  90 61 01 40 */	stw r3, 0x140(r1)
/* 8022C160 002290A0  7F A3 EB 78 */	mr r3, r29
/* 8022C164 002290A4  4B F1 5E 99 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C168 002290A8  D0 21 01 30 */	stfs f1, 0x130(r1)
/* 8022C16C 002290AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C170 002290B0  4B F2 EA B1 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8022C174 002290B4  28 03 00 00 */	cmplwi r3, 0
/* 8022C178 002290B8  38 00 00 02 */	li r0, 2
/* 8022C17C 002290BC  41 82 00 08 */	beq .L_8022C184
/* 8022C180 002290C0  A0 03 02 DC */	lhz r0, 0x2dc(r3)
.L_8022C184:
/* 8022C184 002290C4  2C 00 00 00 */	cmpwi r0, 0
/* 8022C188 002290C8  40 82 00 18 */	bne .L_8022C1A0
/* 8022C18C 002290CC  38 60 00 01 */	li r3, 1
/* 8022C190 002290D0  38 00 00 00 */	li r0, 0
/* 8022C194 002290D4  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C198 002290D8  98 01 01 44 */	stb r0, 0x144(r1)
/* 8022C19C 002290DC  48 00 00 50 */	b .L_8022C1EC
.L_8022C1A0:
/* 8022C1A0 002290E0  2C 00 00 01 */	cmpwi r0, 1
/* 8022C1A4 002290E4  40 82 00 18 */	bne .L_8022C1BC
/* 8022C1A8 002290E8  38 60 00 00 */	li r3, 0
/* 8022C1AC 002290EC  38 00 00 01 */	li r0, 1
/* 8022C1B0 002290F0  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C1B4 002290F4  98 01 01 44 */	stb r0, 0x144(r1)
/* 8022C1B8 002290F8  48 00 00 34 */	b .L_8022C1EC
.L_8022C1BC:
/* 8022C1BC 002290FC  80 1F 00 E4 */	lwz r0, 0x104(r31)
/* 8022C1C0 00229100  2C 00 00 00 */	cmpwi r0, 0
/* 8022C1C4 00229104  40 82 00 18 */	bne .L_8022C1DC
/* 8022C1C8 00229108  38 60 00 00 */	li r3, 0
/* 8022C1CC 0022910C  38 00 00 01 */	li r0, 1
/* 8022C1D0 00229110  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C1D4 00229114  98 01 01 44 */	stb r0, 0x144(r1)
/* 8022C1D8 00229118  48 00 00 14 */	b .L_8022C1EC
.L_8022C1DC:
/* 8022C1DC 0022911C  38 60 00 01 */	li r3, 1
/* 8022C1E0 00229120  38 00 00 00 */	li r0, 0
/* 8022C1E4 00229124  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C1E8 00229128  98 01 01 44 */	stb r0, 0x144(r1)
.L_8022C1EC:
/* 8022C1EC 0022912C  38 60 FF FF */	li r3, -1
/* 8022C1F0 00229130  4B FA 4C 71 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C1F4 00229134  90 61 01 0C */	stw r3, 0x10c(r1)
/* 8022C1F8 00229138  38 81 00 F4 */	addi r4, r1, 0xf4
/* 8022C1FC 0022913C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C200 00229140  48 1C FE 9D */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 8022C204 00229144  48 00 04 EC */	b .L_8022C6F0
.L_8022C208:
/* 8022C208 00229148  2C 03 00 01 */	cmpwi r3, 1
/* 8022C20C 0022914C  40 82 02 E4 */	bne .L_8022C4F0
/* 8022C210 00229150  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C214 00229154  48 1D 03 C5 */	bl check_VsStatus__Q26Screen9Game2DMgrFv
/* 8022C218 00229158  2C 03 00 02 */	cmpwi r3, 2
/* 8022C21C 0022915C  40 82 00 2C */	bne .L_8022C248
/* 8022C220 00229160  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8022C224 00229164  28 00 00 01 */	cmplwi r0, 1
/* 8022C228 00229168  40 82 00 20 */	bne .L_8022C248
/* 8022C22C 0022916C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C230 00229170  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C234 00229174  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8022C238 00229178  40 82 00 10 */	bne .L_8022C248
/* 8022C23C 0022917C  38 00 00 02 */	li r0, 2
/* 8022C240 00229180  98 1E 00 16 */	stb r0, 0x16(r30)
/* 8022C244 00229184  48 00 00 18 */	b .L_8022C25C
.L_8022C248:
/* 8022C248 00229188  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8022C24C 0022918C  28 00 00 01 */	cmplwi r0, 1
/* 8022C250 00229190  40 82 00 0C */	bne .L_8022C25C
/* 8022C254 00229194  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C258 00229198  48 1D 03 81 */	bl check_VsStatus__Q26Screen9Game2DMgrFv
.L_8022C25C:
/* 8022C25C 0022919C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022C260 002291A0  39 80 00 00 */	li r12, 0
/* 8022C264 002291A4  38 83 11 48 */	addi r4, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022C268 002291A8  39 00 00 01 */	li r8, 1
/* 8022C26C 002291AC  C0 22 BF 08 */	lfs f1, lbl_8051A268@sda21(r2)
/* 8022C270 002291B0  3C 60 80 4C */	lis r3, __vt__Q32og6Screen12DispMemberVs@ha
/* 8022C274 002291B4  38 C0 00 0A */	li r6, 0xa
/* 8022C278 002291B8  C0 02 BF 58 */	lfs f0, lbl_8051A2B8@sda21(r2)
/* 8022C27C 002291BC  38 E0 00 02 */	li r7, 2
/* 8022C280 002291C0  C0 42 BF 14 */	lfs f2, lbl_8051A274@sda21(r2)
/* 8022C284 002291C4  39 40 04 D2 */	li r10, 0x4d2
/* 8022C288 002291C8  39 20 00 32 */	li r9, 0x32
/* 8022C28C 002291CC  38 A0 00 6F */	li r5, 0x6f
/* 8022C290 002291D0  38 00 00 DE */	li r0, 0xde
/* 8022C294 002291D4  90 81 00 80 */	stw r4, 0x80(r1)
/* 8022C298 002291D8  39 63 0F 14 */	addi r11, r3, __vt__Q32og6Screen12DispMemberVs@l
/* 8022C29C 002291DC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C2A0 002291E0  38 80 00 00 */	li r4, 0
/* 8022C2A4 002291E4  91 81 00 84 */	stw r12, 0x84(r1)
/* 8022C2A8 002291E8  91 61 00 80 */	stw r11, 0x80(r1)
/* 8022C2AC 002291EC  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 8022C2B0 002291F0  91 81 00 90 */	stw r12, 0x90(r1)
/* 8022C2B4 002291F4  91 81 00 98 */	stw r12, 0x98(r1)
/* 8022C2B8 002291F8  91 41 00 94 */	stw r10, 0x94(r1)
/* 8022C2BC 002291FC  91 21 00 9C */	stw r9, 0x9c(r1)
/* 8022C2C0 00229200  99 81 00 A0 */	stb r12, 0xa0(r1)
/* 8022C2C4 00229204  91 81 00 A4 */	stw r12, 0xa4(r1)
/* 8022C2C8 00229208  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 8022C2CC 0022920C  91 01 00 AC */	stw r8, 0xac(r1)
/* 8022C2D0 00229210  90 E1 00 B0 */	stw r7, 0xb0(r1)
/* 8022C2D4 00229214  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 8022C2D8 00229218  90 C1 00 B8 */	stw r6, 0xb8(r1)
/* 8022C2DC 0022921C  99 01 00 BC */	stb r8, 0xbc(r1)
/* 8022C2E0 00229220  D0 21 00 C0 */	stfs f1, 0xc0(r1)
/* 8022C2E4 00229224  91 01 00 C4 */	stw r8, 0xc4(r1)
/* 8022C2E8 00229228  90 E1 00 C8 */	stw r7, 0xc8(r1)
/* 8022C2EC 0022922C  90 C1 00 CC */	stw r6, 0xcc(r1)
/* 8022C2F0 00229230  90 C1 00 D0 */	stw r6, 0xd0(r1)
/* 8022C2F4 00229234  99 01 00 D4 */	stb r8, 0xd4(r1)
/* 8022C2F8 00229238  90 A1 00 D8 */	stw r5, 0xd8(r1)
/* 8022C2FC 0022923C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 8022C300 00229240  91 81 00 E0 */	stw r12, 0xe0(r1)
/* 8022C304 00229244  91 81 00 E4 */	stw r12, 0xe4(r1)
/* 8022C308 00229248  91 81 00 88 */	stw r12, 0x88(r1)
/* 8022C30C 0022924C  99 81 00 E8 */	stb r12, 0xe8(r1)
/* 8022C310 00229250  99 81 00 E9 */	stb r12, 0xe9(r1)
/* 8022C314 00229254  99 81 00 EA */	stb r12, 0xea(r1)
/* 8022C318 00229258  99 81 00 EB */	stb r12, 0xeb(r1)
/* 8022C31C 0022925C  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 8022C320 00229260  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 8022C324 00229264  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C328 00229268  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C32C 0022926C  7D 89 03 A6 */	mtctr r12
/* 8022C330 00229270  4E 80 04 21 */	bctrl 
/* 8022C334 00229274  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C338 00229278  7C 60 1B 78 */	mr r0, r3
/* 8022C33C 0022927C  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C340 00229280  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C344 00229284  7C 1D 03 78 */	mr r29, r0
/* 8022C348 00229288  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C34C 0022928C  7D 89 03 A6 */	mtctr r12
/* 8022C350 00229290  4E 80 04 21 */	bctrl 
/* 8022C354 00229294  90 61 00 AC */	stw r3, 0xac(r1)
/* 8022C358 00229298  7F A3 EB 78 */	mr r3, r29
/* 8022C35C 0022929C  4B F1 A6 CD */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C360 002292A0  90 61 00 B0 */	stw r3, 0xb0(r1)
/* 8022C364 002292A4  7F A3 EB 78 */	mr r3, r29
/* 8022C368 002292A8  38 80 00 01 */	li r4, 1
/* 8022C36C 002292AC  4B F1 4B 11 */	bl getDopeCount__Q24Game4NaviFi
/* 8022C370 002292B0  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 8022C374 002292B4  7F A3 EB 78 */	mr r3, r29
/* 8022C378 002292B8  38 80 00 00 */	li r4, 0
/* 8022C37C 002292BC  4B F1 4B 01 */	bl getDopeCount__Q24Game4NaviFi
/* 8022C380 002292C0  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 8022C384 002292C4  7F A3 EB 78 */	mr r3, r29
/* 8022C388 002292C8  4B F1 5C 75 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C38C 002292CC  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 8022C390 002292D0  38 80 00 01 */	li r4, 1
/* 8022C394 002292D4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C398 002292D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C39C 002292DC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C3A0 002292E0  7D 89 03 A6 */	mtctr r12
/* 8022C3A4 002292E4  4E 80 04 21 */	bctrl 
/* 8022C3A8 002292E8  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C3AC 002292EC  7C 60 1B 78 */	mr r0, r3
/* 8022C3B0 002292F0  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C3B4 002292F4  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 8022C3B8 002292F8  7C 1D 03 78 */	mr r29, r0
/* 8022C3BC 002292FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C3C0 00229300  7D 89 03 A6 */	mtctr r12
/* 8022C3C4 00229304  4E 80 04 21 */	bctrl 
/* 8022C3C8 00229308  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 8022C3CC 0022930C  7F A3 EB 78 */	mr r3, r29
/* 8022C3D0 00229310  4B F1 A6 59 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C3D4 00229314  90 61 00 C8 */	stw r3, 0xc8(r1)
/* 8022C3D8 00229318  7F A3 EB 78 */	mr r3, r29
/* 8022C3DC 0022931C  38 80 00 01 */	li r4, 1
/* 8022C3E0 00229320  4B F1 4A 9D */	bl getDopeCount__Q24Game4NaviFi
/* 8022C3E4 00229324  90 61 00 CC */	stw r3, 0xcc(r1)
/* 8022C3E8 00229328  7F A3 EB 78 */	mr r3, r29
/* 8022C3EC 0022932C  38 80 00 00 */	li r4, 0
/* 8022C3F0 00229330  4B F1 4A 8D */	bl getDopeCount__Q24Game4NaviFi
/* 8022C3F4 00229334  90 61 00 D0 */	stw r3, 0xd0(r1)
/* 8022C3F8 00229338  7F A3 EB 78 */	mr r3, r29
/* 8022C3FC 0022933C  4B F1 5C 01 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C400 00229340  D0 21 00 C0 */	stfs f1, 0xc0(r1)
/* 8022C404 00229344  38 60 00 01 */	li r3, 1
/* 8022C408 00229348  4B FA 4A 59 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C40C 0022934C  90 61 00 D8 */	stw r3, 0xd8(r1)
/* 8022C410 00229350  38 60 00 00 */	li r3, 0
/* 8022C414 00229354  4B FA 4A 4D */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C418 00229358  90 61 00 DC */	stw r3, 0xdc(r1)
/* 8022C41C 0022935C  C0 22 BF 14 */	lfs f1, lbl_8051A274@sda21(r2)
/* 8022C420 00229360  C0 5F 01 F0 */	lfs f2, 0x214(r31)
/* 8022C424 00229364  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8022C428 00229368  7C 00 00 26 */	mfcr r0
/* 8022C42C 0022936C  54 00 17 FE */	rlwinm r0, r0, 2, 0x1f, 0x1f
/* 8022C430 00229370  98 01 00 EA */	stb r0, 0xea(r1)
/* 8022C434 00229374  C0 1F 01 F4 */	lfs f0, 0x218(r31)
/* 8022C438 00229378  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8022C43C 0022937C  7C 00 00 26 */	mfcr r0
/* 8022C440 00229380  D0 41 00 EC */	stfs f2, 0xec(r1)
/* 8022C444 00229384  54 00 17 FE */	rlwinm r0, r0, 2, 0x1f, 0x1f
/* 8022C448 00229388  98 01 00 EB */	stb r0, 0xeb(r1)
/* 8022C44C 0022938C  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 8022C450 00229390  80 9F 03 D4 */	lwz r4, 0x3f8(r31)
/* 8022C454 00229394  80 BF 03 D8 */	lwz r5, 0x3fc(r31)
/* 8022C458 00229398  2C 04 00 04 */	cmpwi r4, 4
/* 8022C45C 0022939C  40 82 00 18 */	bne .L_8022C474
/* 8022C460 002293A0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C464 002293A4  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C468 002293A8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8022C46C 002293AC  41 82 00 08 */	beq .L_8022C474
/* 8022C470 002293B0  38 84 FF FF */	addi r4, r4, -1
.L_8022C474:
/* 8022C474 002293B4  2C 05 00 04 */	cmpwi r5, 4
/* 8022C478 002293B8  40 82 00 18 */	bne .L_8022C490
/* 8022C47C 002293BC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C480 002293C0  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C484 002293C4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8022C488 002293C8  41 82 00 08 */	beq .L_8022C490
/* 8022C48C 002293CC  38 A5 FF FF */	addi r5, r5, -1
.L_8022C490:
/* 8022C490 002293D0  90 81 00 E0 */	stw r4, 0xe0(r1)
/* 8022C494 002293D4  38 C0 00 00 */	li r6, 0
/* 8022C498 002293D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C49C 002293DC  38 80 00 00 */	li r4, 0
/* 8022C4A0 002293E0  90 A1 00 E4 */	stw r5, 0xe4(r1)
/* 8022C4A4 002293E4  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C4A8 002293E8  54 03 07 FF */	clrlwi. r3, r0, 0x1f
/* 8022C4AC 002293EC  40 82 00 14 */	bne .L_8022C4C0
/* 8022C4B0 002293F0  88 1E 00 26 */	lbz r0, 0x26(r30)
/* 8022C4B4 002293F4  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022C4B8 002293F8  41 82 00 08 */	beq .L_8022C4C0
/* 8022C4BC 002293FC  38 C0 00 01 */	li r6, 1
.L_8022C4C0:
/* 8022C4C0 00229400  28 03 00 00 */	cmplwi r3, 0
/* 8022C4C4 00229404  40 82 00 14 */	bne .L_8022C4D8
/* 8022C4C8 00229408  88 1E 00 25 */	lbz r0, 0x25(r30)
/* 8022C4CC 0022940C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022C4D0 00229410  41 82 00 08 */	beq .L_8022C4D8
/* 8022C4D4 00229414  38 80 00 01 */	li r4, 1
.L_8022C4D8:
/* 8022C4D8 00229418  98 81 00 E9 */	stb r4, 0xe9(r1)
/* 8022C4DC 0022941C  38 81 00 80 */	addi r4, r1, 0x80
/* 8022C4E0 00229420  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C4E4 00229424  98 C1 00 E8 */	stb r6, 0xe8(r1)
/* 8022C4E8 00229428  48 1C FB B5 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 8022C4EC 0022942C  48 00 02 04 */	b .L_8022C6F0
.L_8022C4F0:
/* 8022C4F0 00229430  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022C4F4 00229434  39 80 00 00 */	li r12, 0
/* 8022C4F8 00229438  3B A3 11 48 */	addi r29, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022C4FC 0022943C  39 00 00 01 */	li r8, 1
/* 8022C500 00229440  C0 62 BF 14 */	lfs f3, lbl_8051A274@sda21(r2)
/* 8022C504 00229444  3C A0 80 4C */	lis r5, __vt__Q32og6Screen21DispMemberChallenge2P@ha
/* 8022C508 00229448  38 C0 00 0A */	li r6, 0xa
/* 8022C50C 0022944C  C0 42 BF 08 */	lfs f2, lbl_8051A268@sda21(r2)
/* 8022C510 00229450  C0 22 BF 50 */	lfs f1, lbl_8051A2B0@sda21(r2)
/* 8022C514 00229454  38 E0 00 02 */	li r7, 2
/* 8022C518 00229458  C0 02 BF 54 */	lfs f0, lbl_8051A2B4@sda21(r2)
/* 8022C51C 0022945C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8022C520 00229460  39 40 04 D2 */	li r10, 0x4d2
/* 8022C524 00229464  39 20 00 32 */	li r9, 0x32
/* 8022C528 00229468  38 80 09 EC */	li r4, 0x9ec
/* 8022C52C 0022946C  38 00 10 92 */	li r0, 0x1092
/* 8022C530 00229470  93 A1 00 08 */	stw r29, 8(r1)
/* 8022C534 00229474  39 65 0F 74 */	addi r11, r5, __vt__Q32og6Screen21DispMemberChallenge2P@l
/* 8022C538 00229478  38 A3 10 C4 */	addi r5, r3, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 8022C53C 0022947C  7F E3 FB 78 */	mr r3, r31
/* 8022C540 00229480  93 A1 00 70 */	stw r29, 0x70(r1)
/* 8022C544 00229484  91 81 00 0C */	stw r12, 0xc(r1)
/* 8022C548 00229488  91 61 00 08 */	stw r11, 8(r1)
/* 8022C54C 0022948C  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8022C550 00229490  91 81 00 14 */	stw r12, 0x14(r1)
/* 8022C554 00229494  91 81 00 1C */	stw r12, 0x1c(r1)
/* 8022C558 00229498  91 41 00 18 */	stw r10, 0x18(r1)
/* 8022C55C 0022949C  91 21 00 20 */	stw r9, 0x20(r1)
/* 8022C560 002294A0  99 81 00 24 */	stb r12, 0x24(r1)
/* 8022C564 002294A4  91 81 00 28 */	stw r12, 0x28(r1)
/* 8022C568 002294A8  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022C56C 002294AC  91 01 00 30 */	stw r8, 0x30(r1)
/* 8022C570 002294B0  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8022C574 002294B4  90 C1 00 38 */	stw r6, 0x38(r1)
/* 8022C578 002294B8  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 8022C57C 002294BC  99 01 00 40 */	stb r8, 0x40(r1)
/* 8022C580 002294C0  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8022C584 002294C4  91 01 00 48 */	stw r8, 0x48(r1)
/* 8022C588 002294C8  90 E1 00 4C */	stw r7, 0x4c(r1)
/* 8022C58C 002294CC  90 C1 00 50 */	stw r6, 0x50(r1)
/* 8022C590 002294D0  90 C1 00 54 */	stw r6, 0x54(r1)
/* 8022C594 002294D4  99 01 00 58 */	stb r8, 0x58(r1)
/* 8022C598 002294D8  91 81 00 74 */	stw r12, 0x74(r1)
/* 8022C59C 002294DC  90 A1 00 70 */	stw r5, 0x70(r1)
/* 8022C5A0 002294E0  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 8022C5A4 002294E4  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 8022C5A8 002294E8  90 81 00 5C */	stw r4, 0x5c(r1)
/* 8022C5AC 002294EC  99 81 00 60 */	stb r12, 0x60(r1)
/* 8022C5B0 002294F0  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8022C5B4 002294F4  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022C5B8 002294F8  D0 61 00 68 */	stfs f3, 0x68(r1)
/* 8022C5BC 002294FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022C5C0 00229500  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022C5C4 00229504  7D 89 03 A6 */	mtctr r12
/* 8022C5C8 00229508  4E 80 04 21 */	bctrl 
/* 8022C5CC 0022950C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8022C5D0 00229510  38 80 00 00 */	li r4, 0
/* 8022C5D4 00229514  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C5D8 00229518  80 1F 03 BC */	lwz r0, 0x3e0(r31)
/* 8022C5DC 0022951C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8022C5E0 00229520  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8022C5E4 00229524  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 8022C5E8 00229528  C0 1F 03 C0 */	lfs f0, 0x3e4(r31)
/* 8022C5EC 0022952C  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8022C5F0 00229530  80 1F 02 08 */	lwz r0, 0x22c(r31)
/* 8022C5F4 00229534  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022C5F8 00229538  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C5FC 0022953C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C600 00229540  7D 89 03 A6 */	mtctr r12
/* 8022C604 00229544  4E 80 04 21 */	bctrl 
/* 8022C608 00229548  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C60C 0022954C  7C 60 1B 78 */	mr r0, r3
/* 8022C610 00229550  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C614 00229554  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C618 00229558  7C 1D 03 78 */	mr r29, r0
/* 8022C61C 0022955C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C620 00229560  7D 89 03 A6 */	mtctr r12
/* 8022C624 00229564  4E 80 04 21 */	bctrl 
/* 8022C628 00229568  90 61 00 30 */	stw r3, 0x30(r1)
/* 8022C62C 0022956C  7F A3 EB 78 */	mr r3, r29
/* 8022C630 00229570  4B F1 A3 F9 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C634 00229574  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022C638 00229578  38 80 00 01 */	li r4, 1
/* 8022C63C 0022957C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C640 00229580  4B FB BD 99 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C644 00229584  90 61 00 38 */	stw r3, 0x38(r1)
/* 8022C648 00229588  38 80 00 00 */	li r4, 0
/* 8022C64C 0022958C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C650 00229590  4B FB BD 89 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C654 00229594  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022C658 00229598  7F A3 EB 78 */	mr r3, r29
/* 8022C65C 0022959C  4B F1 59 A1 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C660 002295A0  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8022C664 002295A4  38 80 00 01 */	li r4, 1
/* 8022C668 002295A8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C66C 002295AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C670 002295B0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C674 002295B4  7D 89 03 A6 */	mtctr r12
/* 8022C678 002295B8  4E 80 04 21 */	bctrl 
/* 8022C67C 002295BC  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C680 002295C0  7C 60 1B 78 */	mr r0, r3
/* 8022C684 002295C4  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C688 002295C8  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 8022C68C 002295CC  7C 1D 03 78 */	mr r29, r0
/* 8022C690 002295D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C694 002295D4  7D 89 03 A6 */	mtctr r12
/* 8022C698 002295D8  4E 80 04 21 */	bctrl 
/* 8022C69C 002295DC  90 61 00 48 */	stw r3, 0x48(r1)
/* 8022C6A0 002295E0  7F A3 EB 78 */	mr r3, r29
/* 8022C6A4 002295E4  4B F1 A3 85 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C6A8 002295E8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022C6AC 002295EC  38 80 00 01 */	li r4, 1
/* 8022C6B0 002295F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C6B4 002295F4  4B FB BD 25 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C6B8 002295F8  90 61 00 50 */	stw r3, 0x50(r1)
/* 8022C6BC 002295FC  38 80 00 00 */	li r4, 0
/* 8022C6C0 00229600  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C6C4 00229604  4B FB BD 15 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C6C8 00229608  90 61 00 54 */	stw r3, 0x54(r1)
/* 8022C6CC 0022960C  7F A3 EB 78 */	mr r3, r29
/* 8022C6D0 00229610  4B F1 59 2D */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C6D4 00229614  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8022C6D8 00229618  38 60 FF FF */	li r3, -1
/* 8022C6DC 0022961C  4B FA 47 85 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C6E0 00229620  90 61 00 20 */	stw r3, 0x20(r1)
/* 8022C6E4 00229624  38 81 00 08 */	addi r4, r1, 8
/* 8022C6E8 00229628  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C6EC 0022962C  48 1C F9 B1 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
.L_8022C6F0:
/* 8022C6F0 00229630  80 01 01 84 */	lwz r0, 0x184(r1)
/* 8022C6F4 00229634  83 E1 01 7C */	lwz r31, 0x17c(r1)
/* 8022C6F8 00229638  83 C1 01 78 */	lwz r30, 0x178(r1)
/* 8022C6FC 0022963C  83 A1 01 74 */	lwz r29, 0x174(r1)
/* 8022C700 00229640  7C 08 03 A6 */	mtlr r0
/* 8022C704 00229644  38 21 01 80 */	addi r1, r1, 0x180
/* 8022C708 00229648  4E 80 00 20 */	blr 
.else
.global update_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
update_GameChallenge__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022BF3C 00228E7C  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 8022BF40 00228E80  7C 08 02 A6 */	mflr r0
/* 8022BF44 00228E84  90 01 01 84 */	stw r0, 0x184(r1)
/* 8022BF48 00228E88  38 00 00 00 */	li r0, 0
/* 8022BF4C 00228E8C  93 E1 01 7C */	stw r31, 0x17c(r1)
/* 8022BF50 00228E90  7C 9F 23 78 */	mr r31, r4
/* 8022BF54 00228E94  93 C1 01 78 */	stw r30, 0x178(r1)
/* 8022BF58 00228E98  7C 7E 1B 78 */	mr r30, r3
/* 8022BF5C 00228E9C  93 A1 01 74 */	stw r29, 0x174(r1)
/* 8022BF60 00228EA0  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 8022BF64 00228EA4  80 65 00 44 */	lwz r3, 0x44(r5)
/* 8022BF68 00228EA8  2C 03 00 01 */	cmpwi r3, 1
/* 8022BF6C 00228EAC  41 82 00 0C */	beq .L_8022BF78
/* 8022BF70 00228EB0  2C 03 00 03 */	cmpwi r3, 3
/* 8022BF74 00228EB4  40 82 00 08 */	bne .L_8022BF7C
.L_8022BF78:
/* 8022BF78 00228EB8  38 00 00 01 */	li r0, 1
.L_8022BF7C:
/* 8022BF7C 00228EBC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8022BF80 00228EC0  40 82 02 88 */	bne .L_8022C208
/* 8022BF84 00228EC4  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022BF88 00228EC8  39 80 00 00 */	li r12, 0
/* 8022BF8C 00228ECC  3B A3 11 48 */	addi r29, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022BF90 00228ED0  39 00 00 01 */	li r8, 1
/* 8022BF94 00228ED4  C0 62 BF 14 */	lfs f3, lbl_8051A274@sda21(r2)
/* 8022BF98 00228ED8  3C A0 80 4C */	lis r5, __vt__Q32og6Screen21DispMemberChallenge1P@ha
/* 8022BF9C 00228EDC  38 C0 00 0A */	li r6, 0xa
/* 8022BFA0 00228EE0  C0 42 BF 08 */	lfs f2, lbl_8051A268@sda21(r2)
/* 8022BFA4 00228EE4  C0 22 BF 50 */	lfs f1, lbl_8051A2B0@sda21(r2)
/* 8022BFA8 00228EE8  38 E0 00 02 */	li r7, 2
/* 8022BFAC 00228EEC  C0 02 BF 54 */	lfs f0, lbl_8051A2B4@sda21(r2)
/* 8022BFB0 00228EF0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8022BFB4 00228EF4  39 40 04 D2 */	li r10, 0x4d2
/* 8022BFB8 00228EF8  39 20 00 32 */	li r9, 0x32
/* 8022BFBC 00228EFC  38 80 09 EC */	li r4, 0x9ec
/* 8022BFC0 00228F00  38 00 10 92 */	li r0, 0x1092
/* 8022BFC4 00228F04  93 A1 00 F4 */	stw r29, 0xf4(r1)
/* 8022BFC8 00228F08  39 65 0F 2C */	addi r11, r5, __vt__Q32og6Screen21DispMemberChallenge1P@l
/* 8022BFCC 00228F0C  38 A3 10 C4 */	addi r5, r3, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 8022BFD0 00228F10  7F E3 FB 78 */	mr r3, r31
/* 8022BFD4 00228F14  93 A1 01 5C */	stw r29, 0x15c(r1)
/* 8022BFD8 00228F18  91 81 00 F8 */	stw r12, 0xf8(r1)
/* 8022BFDC 00228F1C  91 61 00 F4 */	stw r11, 0xf4(r1)
/* 8022BFE0 00228F20  D0 61 00 FC */	stfs f3, 0xfc(r1)
/* 8022BFE4 00228F24  91 81 01 00 */	stw r12, 0x100(r1)
/* 8022BFE8 00228F28  91 81 01 08 */	stw r12, 0x108(r1)
/* 8022BFEC 00228F2C  91 41 01 04 */	stw r10, 0x104(r1)
/* 8022BFF0 00228F30  91 21 01 0C */	stw r9, 0x10c(r1)
/* 8022BFF4 00228F34  99 81 01 10 */	stb r12, 0x110(r1)
/* 8022BFF8 00228F38  91 81 01 14 */	stw r12, 0x114(r1)
/* 8022BFFC 00228F3C  D0 41 01 18 */	stfs f2, 0x118(r1)
/* 8022C000 00228F40  91 01 01 1C */	stw r8, 0x11c(r1)
/* 8022C004 00228F44  90 E1 01 20 */	stw r7, 0x120(r1)
/* 8022C008 00228F48  90 C1 01 24 */	stw r6, 0x124(r1)
/* 8022C00C 00228F4C  90 C1 01 28 */	stw r6, 0x128(r1)
/* 8022C010 00228F50  99 01 01 2C */	stb r8, 0x12c(r1)
/* 8022C014 00228F54  D0 41 01 30 */	stfs f2, 0x130(r1)
/* 8022C018 00228F58  91 01 01 34 */	stw r8, 0x134(r1)
/* 8022C01C 00228F5C  90 E1 01 38 */	stw r7, 0x138(r1)
/* 8022C020 00228F60  90 C1 01 3C */	stw r6, 0x13c(r1)
/* 8022C024 00228F64  90 C1 01 40 */	stw r6, 0x140(r1)
/* 8022C028 00228F68  99 01 01 44 */	stb r8, 0x144(r1)
/* 8022C02C 00228F6C  91 81 01 60 */	stw r12, 0x160(r1)
/* 8022C030 00228F70  90 A1 01 5C */	stw r5, 0x15c(r1)
/* 8022C034 00228F74  D0 21 01 68 */	stfs f1, 0x168(r1)
/* 8022C038 00228F78  D0 21 01 64 */	stfs f1, 0x164(r1)
/* 8022C03C 00228F7C  90 81 01 48 */	stw r4, 0x148(r1)
/* 8022C040 00228F80  99 81 01 4C */	stb r12, 0x14c(r1)
/* 8022C044 00228F84  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 8022C048 00228F88  90 01 01 58 */	stw r0, 0x158(r1)
/* 8022C04C 00228F8C  D0 61 01 54 */	stfs f3, 0x154(r1)
/* 8022C050 00228F90  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022C054 00228F94  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022C058 00228F98  7D 89 03 A6 */	mtctr r12
/* 8022C05C 00228F9C  4E 80 04 21 */	bctrl 
/* 8022C060 00228FA0  90 61 01 08 */	stw r3, 0x108(r1)
/* 8022C064 00228FA4  38 80 00 00 */	li r4, 0
/* 8022C068 00228FA8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C06C 00228FAC  80 1F 02 08 */	lwz r0, 0x208(r31)
/* 8022C070 00228FB0  90 01 01 58 */	stw r0, 0x158(r1)
/* 8022C074 00228FB4  80 1F 03 BC */	lwz r0, 0x3bc(r31)
/* 8022C078 00228FB8  90 01 01 48 */	stw r0, 0x148(r1)
/* 8022C07C 00228FBC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8022C080 00228FC0  D0 01 01 54 */	stfs f0, 0x154(r1)
/* 8022C084 00228FC4  C0 1F 03 C0 */	lfs f0, 0x3c0(r31)
/* 8022C088 00228FC8  D0 01 01 50 */	stfs f0, 0x150(r1)
/* 8022C08C 00228FCC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C090 00228FD0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C094 00228FD4  7D 89 03 A6 */	mtctr r12
/* 8022C098 00228FD8  4E 80 04 21 */	bctrl 
/* 8022C09C 00228FDC  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C0A0 00228FE0  7C 60 1B 78 */	mr r0, r3
/* 8022C0A4 00228FE4  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C0A8 00228FE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C0AC 00228FEC  7C 1D 03 78 */	mr r29, r0
/* 8022C0B0 00228FF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C0B4 00228FF4  7D 89 03 A6 */	mtctr r12
/* 8022C0B8 00228FF8  4E 80 04 21 */	bctrl 
/* 8022C0BC 00228FFC  90 61 01 1C */	stw r3, 0x11c(r1)
/* 8022C0C0 00229000  7F A3 EB 78 */	mr r3, r29
/* 8022C0C4 00229004  4B F1 A9 65 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C0C8 00229008  90 61 01 20 */	stw r3, 0x120(r1)
/* 8022C0CC 0022900C  38 80 00 01 */	li r4, 1
/* 8022C0D0 00229010  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C0D4 00229014  4B FB C3 05 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C0D8 00229018  90 61 01 24 */	stw r3, 0x124(r1)
/* 8022C0DC 0022901C  38 80 00 00 */	li r4, 0
/* 8022C0E0 00229020  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C0E4 00229024  4B FB C2 F5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C0E8 00229028  90 61 01 28 */	stw r3, 0x128(r1)
/* 8022C0EC 0022902C  7F A3 EB 78 */	mr r3, r29
/* 8022C0F0 00229030  4B F1 5F 0D */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C0F4 00229034  D0 21 01 18 */	stfs f1, 0x118(r1)
/* 8022C0F8 00229038  38 80 00 01 */	li r4, 1
/* 8022C0FC 0022903C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C100 00229040  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C104 00229044  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C108 00229048  7D 89 03 A6 */	mtctr r12
/* 8022C10C 0022904C  4E 80 04 21 */	bctrl 
/* 8022C110 00229050  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C114 00229054  7C 60 1B 78 */	mr r0, r3
/* 8022C118 00229058  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C11C 0022905C  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 8022C120 00229060  7C 1D 03 78 */	mr r29, r0
/* 8022C124 00229064  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C128 00229068  7D 89 03 A6 */	mtctr r12
/* 8022C12C 0022906C  4E 80 04 21 */	bctrl 
/* 8022C130 00229070  90 61 01 34 */	stw r3, 0x134(r1)
/* 8022C134 00229074  7F A3 EB 78 */	mr r3, r29
/* 8022C138 00229078  4B F1 A8 F1 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C13C 0022907C  90 61 01 38 */	stw r3, 0x138(r1)
/* 8022C140 00229080  38 80 00 01 */	li r4, 1
/* 8022C144 00229084  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C148 00229088  4B FB C2 91 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C14C 0022908C  90 61 01 3C */	stw r3, 0x13c(r1)
/* 8022C150 00229090  38 80 00 00 */	li r4, 0
/* 8022C154 00229094  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C158 00229098  4B FB C2 81 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C15C 0022909C  90 61 01 40 */	stw r3, 0x140(r1)
/* 8022C160 002290A0  7F A3 EB 78 */	mr r3, r29
/* 8022C164 002290A4  4B F1 5E 99 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C168 002290A8  D0 21 01 30 */	stfs f1, 0x130(r1)
/* 8022C16C 002290AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C170 002290B0  4B F2 EA B1 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8022C174 002290B4  28 03 00 00 */	cmplwi r3, 0
/* 8022C178 002290B8  38 00 00 02 */	li r0, 2
/* 8022C17C 002290BC  41 82 00 08 */	beq .L_8022C184
/* 8022C180 002290C0  A0 03 02 DC */	lhz r0, 0x2dc(r3)
.L_8022C184:
/* 8022C184 002290C4  2C 00 00 00 */	cmpwi r0, 0
/* 8022C188 002290C8  40 82 00 18 */	bne .L_8022C1A0
/* 8022C18C 002290CC  38 60 00 01 */	li r3, 1
/* 8022C190 002290D0  38 00 00 00 */	li r0, 0
/* 8022C194 002290D4  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C198 002290D8  98 01 01 44 */	stb r0, 0x144(r1)
/* 8022C19C 002290DC  48 00 00 50 */	b .L_8022C1EC
.L_8022C1A0:
/* 8022C1A0 002290E0  2C 00 00 01 */	cmpwi r0, 1
/* 8022C1A4 002290E4  40 82 00 18 */	bne .L_8022C1BC
/* 8022C1A8 002290E8  38 60 00 00 */	li r3, 0
/* 8022C1AC 002290EC  38 00 00 01 */	li r0, 1
/* 8022C1B0 002290F0  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C1B4 002290F4  98 01 01 44 */	stb r0, 0x144(r1)
/* 8022C1B8 002290F8  48 00 00 34 */	b .L_8022C1EC
.L_8022C1BC:
/* 8022C1BC 002290FC  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 8022C1C0 00229100  2C 00 00 00 */	cmpwi r0, 0
/* 8022C1C4 00229104  40 82 00 18 */	bne .L_8022C1DC
/* 8022C1C8 00229108  38 60 00 00 */	li r3, 0
/* 8022C1CC 0022910C  38 00 00 01 */	li r0, 1
/* 8022C1D0 00229110  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C1D4 00229114  98 01 01 44 */	stb r0, 0x144(r1)
/* 8022C1D8 00229118  48 00 00 14 */	b .L_8022C1EC
.L_8022C1DC:
/* 8022C1DC 0022911C  38 60 00 01 */	li r3, 1
/* 8022C1E0 00229120  38 00 00 00 */	li r0, 0
/* 8022C1E4 00229124  98 61 01 2C */	stb r3, 0x12c(r1)
/* 8022C1E8 00229128  98 01 01 44 */	stb r0, 0x144(r1)
.L_8022C1EC:
/* 8022C1EC 0022912C  38 60 FF FF */	li r3, -1
/* 8022C1F0 00229130  4B FA 4C 71 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C1F4 00229134  90 61 01 0C */	stw r3, 0x10c(r1)
/* 8022C1F8 00229138  38 81 00 F4 */	addi r4, r1, 0xf4
/* 8022C1FC 0022913C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C200 00229140  48 1C FE 9D */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 8022C204 00229144  48 00 04 EC */	b .L_8022C6F0
.L_8022C208:
/* 8022C208 00229148  2C 03 00 01 */	cmpwi r3, 1
/* 8022C20C 0022914C  40 82 02 E4 */	bne .L_8022C4F0
/* 8022C210 00229150  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C214 00229154  48 1D 03 C5 */	bl check_VsStatus__Q26Screen9Game2DMgrFv
/* 8022C218 00229158  2C 03 00 02 */	cmpwi r3, 2
/* 8022C21C 0022915C  40 82 00 2C */	bne .L_8022C248
/* 8022C220 00229160  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8022C224 00229164  28 00 00 01 */	cmplwi r0, 1
/* 8022C228 00229168  40 82 00 20 */	bne .L_8022C248
/* 8022C22C 0022916C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C230 00229170  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C234 00229174  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8022C238 00229178  40 82 00 10 */	bne .L_8022C248
/* 8022C23C 0022917C  38 00 00 02 */	li r0, 2
/* 8022C240 00229180  98 1E 00 16 */	stb r0, 0x16(r30)
/* 8022C244 00229184  48 00 00 18 */	b .L_8022C25C
.L_8022C248:
/* 8022C248 00229188  88 1E 00 16 */	lbz r0, 0x16(r30)
/* 8022C24C 0022918C  28 00 00 01 */	cmplwi r0, 1
/* 8022C250 00229190  40 82 00 0C */	bne .L_8022C25C
/* 8022C254 00229194  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C258 00229198  48 1D 03 81 */	bl check_VsStatus__Q26Screen9Game2DMgrFv
.L_8022C25C:
/* 8022C25C 0022919C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022C260 002291A0  39 80 00 00 */	li r12, 0
/* 8022C264 002291A4  38 83 11 48 */	addi r4, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022C268 002291A8  39 00 00 01 */	li r8, 1
/* 8022C26C 002291AC  C0 22 BF 08 */	lfs f1, lbl_8051A268@sda21(r2)
/* 8022C270 002291B0  3C 60 80 4C */	lis r3, __vt__Q32og6Screen12DispMemberVs@ha
/* 8022C274 002291B4  38 C0 00 0A */	li r6, 0xa
/* 8022C278 002291B8  C0 02 BF 58 */	lfs f0, lbl_8051A2B8@sda21(r2)
/* 8022C27C 002291BC  38 E0 00 02 */	li r7, 2
/* 8022C280 002291C0  C0 42 BF 14 */	lfs f2, lbl_8051A274@sda21(r2)
/* 8022C284 002291C4  39 40 04 D2 */	li r10, 0x4d2
/* 8022C288 002291C8  39 20 00 32 */	li r9, 0x32
/* 8022C28C 002291CC  38 A0 00 6F */	li r5, 0x6f
/* 8022C290 002291D0  38 00 00 DE */	li r0, 0xde
/* 8022C294 002291D4  90 81 00 80 */	stw r4, 0x80(r1)
/* 8022C298 002291D8  39 63 0F 14 */	addi r11, r3, __vt__Q32og6Screen12DispMemberVs@l
/* 8022C29C 002291DC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C2A0 002291E0  38 80 00 00 */	li r4, 0
/* 8022C2A4 002291E4  91 81 00 84 */	stw r12, 0x84(r1)
/* 8022C2A8 002291E8  91 61 00 80 */	stw r11, 0x80(r1)
/* 8022C2AC 002291EC  D0 41 00 8C */	stfs f2, 0x8c(r1)
/* 8022C2B0 002291F0  91 81 00 90 */	stw r12, 0x90(r1)
/* 8022C2B4 002291F4  91 81 00 98 */	stw r12, 0x98(r1)
/* 8022C2B8 002291F8  91 41 00 94 */	stw r10, 0x94(r1)
/* 8022C2BC 002291FC  91 21 00 9C */	stw r9, 0x9c(r1)
/* 8022C2C0 00229200  99 81 00 A0 */	stb r12, 0xa0(r1)
/* 8022C2C4 00229204  91 81 00 A4 */	stw r12, 0xa4(r1)
/* 8022C2C8 00229208  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 8022C2CC 0022920C  91 01 00 AC */	stw r8, 0xac(r1)
/* 8022C2D0 00229210  90 E1 00 B0 */	stw r7, 0xb0(r1)
/* 8022C2D4 00229214  90 C1 00 B4 */	stw r6, 0xb4(r1)
/* 8022C2D8 00229218  90 C1 00 B8 */	stw r6, 0xb8(r1)
/* 8022C2DC 0022921C  99 01 00 BC */	stb r8, 0xbc(r1)
/* 8022C2E0 00229220  D0 21 00 C0 */	stfs f1, 0xc0(r1)
/* 8022C2E4 00229224  91 01 00 C4 */	stw r8, 0xc4(r1)
/* 8022C2E8 00229228  90 E1 00 C8 */	stw r7, 0xc8(r1)
/* 8022C2EC 0022922C  90 C1 00 CC */	stw r6, 0xcc(r1)
/* 8022C2F0 00229230  90 C1 00 D0 */	stw r6, 0xd0(r1)
/* 8022C2F4 00229234  99 01 00 D4 */	stb r8, 0xd4(r1)
/* 8022C2F8 00229238  90 A1 00 D8 */	stw r5, 0xd8(r1)
/* 8022C2FC 0022923C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 8022C300 00229240  91 81 00 E0 */	stw r12, 0xe0(r1)
/* 8022C304 00229244  91 81 00 E4 */	stw r12, 0xe4(r1)
/* 8022C308 00229248  91 81 00 88 */	stw r12, 0x88(r1)
/* 8022C30C 0022924C  99 81 00 E8 */	stb r12, 0xe8(r1)
/* 8022C310 00229250  99 81 00 E9 */	stb r12, 0xe9(r1)
/* 8022C314 00229254  99 81 00 EA */	stb r12, 0xea(r1)
/* 8022C318 00229258  99 81 00 EB */	stb r12, 0xeb(r1)
/* 8022C31C 0022925C  D0 01 00 EC */	stfs f0, 0xec(r1)
/* 8022C320 00229260  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 8022C324 00229264  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C328 00229268  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C32C 0022926C  7D 89 03 A6 */	mtctr r12
/* 8022C330 00229270  4E 80 04 21 */	bctrl 
/* 8022C334 00229274  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C338 00229278  7C 60 1B 78 */	mr r0, r3
/* 8022C33C 0022927C  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C340 00229280  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C344 00229284  7C 1D 03 78 */	mr r29, r0
/* 8022C348 00229288  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C34C 0022928C  7D 89 03 A6 */	mtctr r12
/* 8022C350 00229290  4E 80 04 21 */	bctrl 
/* 8022C354 00229294  90 61 00 AC */	stw r3, 0xac(r1)
/* 8022C358 00229298  7F A3 EB 78 */	mr r3, r29
/* 8022C35C 0022929C  4B F1 A6 CD */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C360 002292A0  90 61 00 B0 */	stw r3, 0xb0(r1)
/* 8022C364 002292A4  7F A3 EB 78 */	mr r3, r29
/* 8022C368 002292A8  38 80 00 01 */	li r4, 1
/* 8022C36C 002292AC  4B F1 4B 11 */	bl getDopeCount__Q24Game4NaviFi
/* 8022C370 002292B0  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 8022C374 002292B4  7F A3 EB 78 */	mr r3, r29
/* 8022C378 002292B8  38 80 00 00 */	li r4, 0
/* 8022C37C 002292BC  4B F1 4B 01 */	bl getDopeCount__Q24Game4NaviFi
/* 8022C380 002292C0  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 8022C384 002292C4  7F A3 EB 78 */	mr r3, r29
/* 8022C388 002292C8  4B F1 5C 75 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C38C 002292CC  D0 21 00 A8 */	stfs f1, 0xa8(r1)
/* 8022C390 002292D0  38 80 00 01 */	li r4, 1
/* 8022C394 002292D4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C398 002292D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C39C 002292DC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C3A0 002292E0  7D 89 03 A6 */	mtctr r12
/* 8022C3A4 002292E4  4E 80 04 21 */	bctrl 
/* 8022C3A8 002292E8  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C3AC 002292EC  7C 60 1B 78 */	mr r0, r3
/* 8022C3B0 002292F0  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C3B4 002292F4  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 8022C3B8 002292F8  7C 1D 03 78 */	mr r29, r0
/* 8022C3BC 002292FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C3C0 00229300  7D 89 03 A6 */	mtctr r12
/* 8022C3C4 00229304  4E 80 04 21 */	bctrl 
/* 8022C3C8 00229308  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 8022C3CC 0022930C  7F A3 EB 78 */	mr r3, r29
/* 8022C3D0 00229310  4B F1 A6 59 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C3D4 00229314  90 61 00 C8 */	stw r3, 0xc8(r1)
/* 8022C3D8 00229318  7F A3 EB 78 */	mr r3, r29
/* 8022C3DC 0022931C  38 80 00 01 */	li r4, 1
/* 8022C3E0 00229320  4B F1 4A 9D */	bl getDopeCount__Q24Game4NaviFi
/* 8022C3E4 00229324  90 61 00 CC */	stw r3, 0xcc(r1)
/* 8022C3E8 00229328  7F A3 EB 78 */	mr r3, r29
/* 8022C3EC 0022932C  38 80 00 00 */	li r4, 0
/* 8022C3F0 00229330  4B F1 4A 8D */	bl getDopeCount__Q24Game4NaviFi
/* 8022C3F4 00229334  90 61 00 D0 */	stw r3, 0xd0(r1)
/* 8022C3F8 00229338  7F A3 EB 78 */	mr r3, r29
/* 8022C3FC 0022933C  4B F1 5C 01 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C400 00229340  D0 21 00 C0 */	stfs f1, 0xc0(r1)
/* 8022C404 00229344  38 60 00 01 */	li r3, 1
/* 8022C408 00229348  4B FA 4A 59 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C40C 0022934C  90 61 00 D8 */	stw r3, 0xd8(r1)
/* 8022C410 00229350  38 60 00 00 */	li r3, 0
/* 8022C414 00229354  4B FA 4A 4D */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C418 00229358  90 61 00 DC */	stw r3, 0xdc(r1)
/* 8022C41C 0022935C  C0 22 BF 14 */	lfs f1, lbl_8051A274@sda21(r2)
/* 8022C420 00229360  C0 5F 01 F0 */	lfs f2, 0x1f0(r31)
/* 8022C424 00229364  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 8022C428 00229368  7C 00 00 26 */	mfcr r0
/* 8022C42C 0022936C  54 00 17 FE */	rlwinm r0, r0, 2, 0x1f, 0x1f
/* 8022C430 00229370  98 01 00 EA */	stb r0, 0xea(r1)
/* 8022C434 00229374  C0 1F 01 F4 */	lfs f0, 0x1f4(r31)
/* 8022C438 00229378  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8022C43C 0022937C  7C 00 00 26 */	mfcr r0
/* 8022C440 00229380  D0 41 00 EC */	stfs f2, 0xec(r1)
/* 8022C444 00229384  54 00 17 FE */	rlwinm r0, r0, 2, 0x1f, 0x1f
/* 8022C448 00229388  98 01 00 EB */	stb r0, 0xeb(r1)
/* 8022C44C 0022938C  D0 01 00 F0 */	stfs f0, 0xf0(r1)
/* 8022C450 00229390  80 9F 03 D4 */	lwz r4, 0x3d4(r31)
/* 8022C454 00229394  80 BF 03 D8 */	lwz r5, 0x3d8(r31)
/* 8022C458 00229398  2C 04 00 04 */	cmpwi r4, 4
/* 8022C45C 0022939C  40 82 00 18 */	bne .L_8022C474
/* 8022C460 002293A0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C464 002293A4  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C468 002293A8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8022C46C 002293AC  41 82 00 08 */	beq .L_8022C474
/* 8022C470 002293B0  38 84 FF FF */	addi r4, r4, -1
.L_8022C474:
/* 8022C474 002293B4  2C 05 00 04 */	cmpwi r5, 4
/* 8022C478 002293B8  40 82 00 18 */	bne .L_8022C490
/* 8022C47C 002293BC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C480 002293C0  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C484 002293C4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8022C488 002293C8  41 82 00 08 */	beq .L_8022C490
/* 8022C48C 002293CC  38 A5 FF FF */	addi r5, r5, -1
.L_8022C490:
/* 8022C490 002293D0  90 81 00 E0 */	stw r4, 0xe0(r1)
/* 8022C494 002293D4  38 C0 00 00 */	li r6, 0
/* 8022C498 002293D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8022C49C 002293DC  38 80 00 00 */	li r4, 0
/* 8022C4A0 002293E0  90 A1 00 E4 */	stw r5, 0xe4(r1)
/* 8022C4A4 002293E4  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 8022C4A8 002293E8  54 03 07 FF */	clrlwi. r3, r0, 0x1f
/* 8022C4AC 002293EC  40 82 00 14 */	bne .L_8022C4C0
/* 8022C4B0 002293F0  88 1E 00 26 */	lbz r0, 0x26(r30)
/* 8022C4B4 002293F4  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022C4B8 002293F8  41 82 00 08 */	beq .L_8022C4C0
/* 8022C4BC 002293FC  38 C0 00 01 */	li r6, 1
.L_8022C4C0:
/* 8022C4C0 00229400  28 03 00 00 */	cmplwi r3, 0
/* 8022C4C4 00229404  40 82 00 14 */	bne .L_8022C4D8
/* 8022C4C8 00229408  88 1E 00 25 */	lbz r0, 0x25(r30)
/* 8022C4CC 0022940C  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8022C4D0 00229410  41 82 00 08 */	beq .L_8022C4D8
/* 8022C4D4 00229414  38 80 00 01 */	li r4, 1
.L_8022C4D8:
/* 8022C4D8 00229418  98 81 00 E9 */	stb r4, 0xe9(r1)
/* 8022C4DC 0022941C  38 81 00 80 */	addi r4, r1, 0x80
/* 8022C4E0 00229420  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C4E4 00229424  98 C1 00 E8 */	stb r6, 0xe8(r1)
/* 8022C4E8 00229428  48 1C FB B5 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 8022C4EC 0022942C  48 00 02 04 */	b .L_8022C6F0
.L_8022C4F0:
/* 8022C4F0 00229430  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8022C4F4 00229434  39 80 00 00 */	li r12, 0
/* 8022C4F8 00229438  3B A3 11 48 */	addi r29, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8022C4FC 0022943C  39 00 00 01 */	li r8, 1
/* 8022C500 00229440  C0 62 BF 14 */	lfs f3, lbl_8051A274@sda21(r2)
/* 8022C504 00229444  3C A0 80 4C */	lis r5, __vt__Q32og6Screen21DispMemberChallenge2P@ha
/* 8022C508 00229448  38 C0 00 0A */	li r6, 0xa
/* 8022C50C 0022944C  C0 42 BF 08 */	lfs f2, lbl_8051A268@sda21(r2)
/* 8022C510 00229450  C0 22 BF 50 */	lfs f1, lbl_8051A2B0@sda21(r2)
/* 8022C514 00229454  38 E0 00 02 */	li r7, 2
/* 8022C518 00229458  C0 02 BF 54 */	lfs f0, lbl_8051A2B4@sda21(r2)
/* 8022C51C 0022945C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8022C520 00229460  39 40 04 D2 */	li r10, 0x4d2
/* 8022C524 00229464  39 20 00 32 */	li r9, 0x32
/* 8022C528 00229468  38 80 09 EC */	li r4, 0x9ec
/* 8022C52C 0022946C  38 00 10 92 */	li r0, 0x1092
/* 8022C530 00229470  93 A1 00 08 */	stw r29, 8(r1)
/* 8022C534 00229474  39 65 0F 74 */	addi r11, r5, __vt__Q32og6Screen21DispMemberChallenge2P@l
/* 8022C538 00229478  38 A3 10 C4 */	addi r5, r3, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 8022C53C 0022947C  7F E3 FB 78 */	mr r3, r31
/* 8022C540 00229480  93 A1 00 70 */	stw r29, 0x70(r1)
/* 8022C544 00229484  91 81 00 0C */	stw r12, 0xc(r1)
/* 8022C548 00229488  91 61 00 08 */	stw r11, 8(r1)
/* 8022C54C 0022948C  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8022C550 00229490  91 81 00 14 */	stw r12, 0x14(r1)
/* 8022C554 00229494  91 81 00 1C */	stw r12, 0x1c(r1)
/* 8022C558 00229498  91 41 00 18 */	stw r10, 0x18(r1)
/* 8022C55C 0022949C  91 21 00 20 */	stw r9, 0x20(r1)
/* 8022C560 002294A0  99 81 00 24 */	stb r12, 0x24(r1)
/* 8022C564 002294A4  91 81 00 28 */	stw r12, 0x28(r1)
/* 8022C568 002294A8  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8022C56C 002294AC  91 01 00 30 */	stw r8, 0x30(r1)
/* 8022C570 002294B0  90 E1 00 34 */	stw r7, 0x34(r1)
/* 8022C574 002294B4  90 C1 00 38 */	stw r6, 0x38(r1)
/* 8022C578 002294B8  90 C1 00 3C */	stw r6, 0x3c(r1)
/* 8022C57C 002294BC  99 01 00 40 */	stb r8, 0x40(r1)
/* 8022C580 002294C0  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8022C584 002294C4  91 01 00 48 */	stw r8, 0x48(r1)
/* 8022C588 002294C8  90 E1 00 4C */	stw r7, 0x4c(r1)
/* 8022C58C 002294CC  90 C1 00 50 */	stw r6, 0x50(r1)
/* 8022C590 002294D0  90 C1 00 54 */	stw r6, 0x54(r1)
/* 8022C594 002294D4  99 01 00 58 */	stb r8, 0x58(r1)
/* 8022C598 002294D8  91 81 00 74 */	stw r12, 0x74(r1)
/* 8022C59C 002294DC  90 A1 00 70 */	stw r5, 0x70(r1)
/* 8022C5A0 002294E0  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 8022C5A4 002294E4  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 8022C5A8 002294E8  90 81 00 5C */	stw r4, 0x5c(r1)
/* 8022C5AC 002294EC  99 81 00 60 */	stb r12, 0x60(r1)
/* 8022C5B0 002294F0  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8022C5B4 002294F4  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022C5B8 002294F8  D0 61 00 68 */	stfs f3, 0x68(r1)
/* 8022C5BC 002294FC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8022C5C0 00229500  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8022C5C4 00229504  7D 89 03 A6 */	mtctr r12
/* 8022C5C8 00229508  4E 80 04 21 */	bctrl 
/* 8022C5CC 0022950C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 8022C5D0 00229510  38 80 00 00 */	li r4, 0
/* 8022C5D4 00229514  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C5D8 00229518  80 1F 03 BC */	lwz r0, 0x3bc(r31)
/* 8022C5DC 0022951C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 8022C5E0 00229520  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 8022C5E4 00229524  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 8022C5E8 00229528  C0 1F 03 C0 */	lfs f0, 0x3c0(r31)
/* 8022C5EC 0022952C  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 8022C5F0 00229530  80 1F 02 08 */	lwz r0, 0x208(r31)
/* 8022C5F4 00229534  90 01 00 6C */	stw r0, 0x6c(r1)
/* 8022C5F8 00229538  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C5FC 0022953C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C600 00229540  7D 89 03 A6 */	mtctr r12
/* 8022C604 00229544  4E 80 04 21 */	bctrl 
/* 8022C608 00229548  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C60C 0022954C  7C 60 1B 78 */	mr r0, r3
/* 8022C610 00229550  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C614 00229554  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C618 00229558  7C 1D 03 78 */	mr r29, r0
/* 8022C61C 0022955C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C620 00229560  7D 89 03 A6 */	mtctr r12
/* 8022C624 00229564  4E 80 04 21 */	bctrl 
/* 8022C628 00229568  90 61 00 30 */	stw r3, 0x30(r1)
/* 8022C62C 0022956C  7F A3 EB 78 */	mr r3, r29
/* 8022C630 00229570  4B F1 A3 F9 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C634 00229574  90 61 00 34 */	stw r3, 0x34(r1)
/* 8022C638 00229578  38 80 00 01 */	li r4, 1
/* 8022C63C 0022957C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C640 00229580  4B FB BD 99 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C644 00229584  90 61 00 38 */	stw r3, 0x38(r1)
/* 8022C648 00229588  38 80 00 00 */	li r4, 0
/* 8022C64C 0022958C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C650 00229590  4B FB BD 89 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C654 00229594  90 61 00 3C */	stw r3, 0x3c(r1)
/* 8022C658 00229598  7F A3 EB 78 */	mr r3, r29
/* 8022C65C 0022959C  4B F1 59 A1 */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C660 002295A0  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 8022C664 002295A4  38 80 00 01 */	li r4, 1
/* 8022C668 002295A8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8022C66C 002295AC  81 83 00 00 */	lwz r12, 0(r3)
/* 8022C670 002295B0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8022C674 002295B4  7D 89 03 A6 */	mtctr r12
/* 8022C678 002295B8  4E 80 04 21 */	bctrl 
/* 8022C67C 002295BC  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 8022C680 002295C0  7C 60 1B 78 */	mr r0, r3
/* 8022C684 002295C4  38 64 22 EC */	addi r3, r4, formationPikis__Q24Game8GameStat@l
/* 8022C688 002295C8  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 8022C68C 002295CC  7C 1D 03 78 */	mr r29, r0
/* 8022C690 002295D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8022C694 002295D4  7D 89 03 A6 */	mtctr r12
/* 8022C698 002295D8  4E 80 04 21 */	bctrl 
/* 8022C69C 002295DC  90 61 00 48 */	stw r3, 0x48(r1)
/* 8022C6A0 002295E0  7F A3 EB 78 */	mr r3, r29
/* 8022C6A4 002295E4  4B F1 A3 85 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 8022C6A8 002295E8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8022C6AC 002295EC  38 80 00 01 */	li r4, 1
/* 8022C6B0 002295F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C6B4 002295F4  4B FB BD 25 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C6B8 002295F8  90 61 00 50 */	stw r3, 0x50(r1)
/* 8022C6BC 002295FC  38 80 00 00 */	li r4, 0
/* 8022C6C0 00229600  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8022C6C4 00229604  4B FB BD 15 */	bl getDopeCount__Q24Game8PlayDataFi
/* 8022C6C8 00229608  90 61 00 54 */	stw r3, 0x54(r1)
/* 8022C6CC 0022960C  7F A3 EB 78 */	mr r3, r29
/* 8022C6D0 00229610  4B F1 59 2D */	bl getLifeRatio__Q24Game4NaviFv
/* 8022C6D4 00229614  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8022C6D8 00229618  38 60 FF FF */	li r3, -1
/* 8022C6DC 0022961C  4B FA 47 85 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8022C6E0 00229620  90 61 00 20 */	stw r3, 0x20(r1)
/* 8022C6E4 00229624  38 81 00 08 */	addi r4, r1, 8
/* 8022C6E8 00229628  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8022C6EC 0022962C  48 1C F9 B1 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
.L_8022C6F0:
/* 8022C6F0 00229630  80 01 01 84 */	lwz r0, 0x184(r1)
/* 8022C6F4 00229634  83 E1 01 7C */	lwz r31, 0x17c(r1)
/* 8022C6F8 00229638  83 C1 01 78 */	lwz r30, 0x178(r1)
/* 8022C6FC 0022963C  83 A1 01 74 */	lwz r29, 0x174(r1)
/* 8022C700 00229640  7C 08 03 A6 */	mtlr r0
/* 8022C704 00229644  38 21 01 80 */	addi r1, r1, 0x180
/* 8022C708 00229648  4E 80 00 20 */	blr 
.endif

.global drawStatus__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
drawStatus__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection:
/* 8022C70C 0022964C  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen12DispMemberVsFv
getSize__Q32og6Screen12DispMemberVsFv:
/* 8022C710 00229650  38 60 00 74 */	li r3, 0x74
/* 8022C714 00229654  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen12DispMemberVsFv
getOwnerID__Q32og6Screen12DispMemberVsFv:
/* 8022C718 00229658  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8022C71C 0022965C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8022C720 00229660  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen12DispMemberVsFv
getMemberID__Q32og6Screen12DispMemberVsFv:
/* 8022C724 00229664  38 80 56 53 */	li r4, 0x5653
/* 8022C728 00229668  38 60 00 00 */	li r3, 0
/* 8022C72C 0022966C  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen21DispMemberChallenge1PFv
getSize__Q32og6Screen21DispMemberChallenge1PFv:
/* 8022C730 00229670  38 60 00 78 */	li r3, 0x78
/* 8022C734 00229674  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen21DispMemberChallenge1PFv
getOwnerID__Q32og6Screen21DispMemberChallenge1PFv:
/* 8022C738 00229678  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8022C73C 0022967C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8022C740 00229680  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen21DispMemberChallenge1PFv
getMemberID__Q32og6Screen21DispMemberChallenge1PFv:
/* 8022C744 00229684  3C 80 41 4C */	lis r4, 0x414C3150@ha
/* 8022C748 00229688  38 60 43 48 */	li r3, 0x4348
/* 8022C74C 0022968C  38 84 31 50 */	addi r4, r4, 0x414C3150@l
/* 8022C750 00229690  4E 80 00 20 */	blr 

.global getSize__Q32kh6Screen17DispWinLoseReasonFv
getSize__Q32kh6Screen17DispWinLoseReasonFv:
/* 8022C754 00229694  38 60 00 10 */	li r3, 0x10
/* 8022C758 00229698  4E 80 00 20 */	blr 

.global getOwnerID__Q32kh6Screen17DispWinLoseReasonFv
getOwnerID__Q32kh6Screen17DispWinLoseReasonFv:
/* 8022C75C 0022969C  38 60 4B 48 */	li r3, 0x4b48
/* 8022C760 002296A0  4E 80 00 20 */	blr 

.global getMemberID__Q32kh6Screen17DispWinLoseReasonFv
getMemberID__Q32kh6Screen17DispWinLoseReasonFv:
/* 8022C764 002296A4  3C 80 5F 52 */	lis r4, 0x5F52534E@ha
/* 8022C768 002296A8  38 60 57 4C */	li r3, 0x574c
/* 8022C76C 002296AC  38 84 53 4E */	addi r4, r4, 0x5F52534E@l
/* 8022C770 002296B0  4E 80 00 20 */	blr 

.global getSize__Q32kh6Screen11DispWinLoseFv
getSize__Q32kh6Screen11DispWinLoseFv:
/* 8022C774 002296B4  38 60 00 10 */	li r3, 0x10
/* 8022C778 002296B8  4E 80 00 20 */	blr 

.global getOwnerID__Q32kh6Screen11DispWinLoseFv
getOwnerID__Q32kh6Screen11DispWinLoseFv:
/* 8022C77C 002296BC  38 60 4B 48 */	li r3, 0x4b48
/* 8022C780 002296C0  4E 80 00 20 */	blr 

.global getMemberID__Q32kh6Screen11DispWinLoseFv
getMemberID__Q32kh6Screen11DispWinLoseFv:
/* 8022C784 002296C4  3C 80 4C 4F */	lis r4, 0x4C4F5345@ha
/* 8022C788 002296C8  3C 60 57 49 */	lis r3, 0x57494E5F@ha
/* 8022C78C 002296CC  38 84 53 45 */	addi r4, r4, 0x4C4F5345@l
/* 8022C790 002296D0  38 63 4E 5F */	addi r3, r3, 0x57494E5F@l
/* 8022C794 002296D4  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen21DispMemberChallenge2PFv
getSize__Q32og6Screen21DispMemberChallenge2PFv:
/* 8022C798 002296D8  38 60 00 78 */	li r3, 0x78
/* 8022C79C 002296DC  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen21DispMemberChallenge2PFv
getOwnerID__Q32og6Screen21DispMemberChallenge2PFv:
/* 8022C7A0 002296E0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8022C7A4 002296E4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8022C7A8 002296E8  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen21DispMemberChallenge2PFv
getMemberID__Q32og6Screen21DispMemberChallenge2PFv:
/* 8022C7AC 002296EC  3C 80 41 4C */	lis r4, 0x414C3250@ha
/* 8022C7B0 002296F0  38 60 43 48 */	li r3, 0x4348
/* 8022C7B4 002296F4  38 84 32 50 */	addi r4, r4, 0x414C3250@l
/* 8022C7B8 002296F8  4E 80 00 20 */	blr 

.global on_section_fadeout__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
on_section_fadeout__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection:
/* 8022C7BC 002296FC  A0 03 00 14 */	lhz r0, 0x14(r3)
/* 8022C7C0 00229700  60 00 80 00 */	ori r0, r0, 0x8000
/* 8022C7C4 00229704  B0 03 00 14 */	sth r0, 0x14(r3)
/* 8022C7C8 00229708  4E 80 00 20 */	blr 

__sinit_vsGS_Game_cpp: # static initializer
/* 8022C7CC 0022970C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8022C7D0 00229710  38 00 FF FF */	li r0, -1
/* 8022C7D4 00229714  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8022C7D8 00229718  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8022C7DC 0022971C  90 0D 95 E8 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8022C7E0 00229720  D4 03 0F 08 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8022C7E4 00229724  D0 0D 95 EC */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8022C7E8 00229728  D0 03 00 04 */	stfs f0, 4(r3)
/* 8022C7EC 0022972C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8022C7F0 00229730  4E 80 00 20 */	blr 
