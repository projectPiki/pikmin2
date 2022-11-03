.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_singleGS_MainGame_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80482150:
	.skip 0xC
.balign 4
lbl_8048215C:
	.asciz "SingleGS_Game"
.balign 4
lbl_8048216C:
	.asciz "x01_gamestart"
.balign 4
lbl_8048217C:
	.asciz "x01_coursein_forest"
.balign 4
lbl_80482190:
	.asciz "x01_coursein_yakushima"
.balign 4
lbl_804821A8:
	.asciz "x01_coursein_last"
.balign 4
lbl_804821BC:
	.4byte lbl_8048216C
	.4byte lbl_8048217C
	.4byte lbl_80482190
	.4byte lbl_804821A8
.balign 4
lbl_804821CC:
	.asciz "singleGS_MainGame.cpp"
.balign 4
lbl_804821E4:
	.asciz "P2Assert"
.balign 4
lbl_804821F0:
	.asciz "BGS::GAME START"
.balign 4
lbl_80482200:
	.asciz "s00_coursein"
.balign 4
lbl_80482210:
	.asciz "s0E_return_cave"
.balign 4
lbl_80482220:
	.asciz "illegal state GameState::init\n"
.balign 4
lbl_80482240:
	.asciz "PSGame.h"
.balign 4
lbl_8048224C:
	.asciz "PSScene.h"
.balign 4
lbl_80482258:
	.asciz "get sound scene at\ninvalid timming\n"
.balign 4
lbl_8048227C:
	.asciz "PSMainSide_Scene.h"
.balign 4
lbl_80482290:
	.asciz "g26_inout_black"
.balign 4
lbl_804822A0:
	.asciz "g29_inout_white"
.balign 4
lbl_804822B0:
	.asciz "g2C_inout_red"
.balign 4
lbl_804822C0:
	.asciz "no down floor 20\n"
.balign 4
lbl_804822D4:
	.asciz "x17_join_guide"
.balign 4
lbl_804822E4:
	.asciz "x15_exp_x"
.balign 4
lbl_804822F0:
	.asciz "x02_watch_red_pikmin"
.balign 4
lbl_80482308:
	.asciz "x04_exp_y"
.balign 4
lbl_80482314:
	.asciz "g01_pick_me"
.balign 4
lbl_80482320:
	.asciz "g33_camera_demo"
.balign 4
lbl_80482330:
	.asciz "repay-done"
.balign 4
lbl_8048233C:
	.asciz "smenu_escape\n"
.balign 4
lbl_8048234C:
	.asciz "s05_pikminzero"
.balign 4
lbl_8048235C:
	.asciz "s03_orimadown"
.balign 4
lbl_8048236C:
	.asciz "s09_holein"
.balign 4
lbl_80482378:
	.asciz "s10_suck_treasure"
.balign 4
lbl_8048238C:
	.asciz "x07_first_recovery"
.balign 4
lbl_804823A0:
	.asciz "g08_first_return"
.balign 4
lbl_804823B4:
	.asciz "g32_get_map"
.balign 4
lbl_804823C0:
	.asciz "s13_pikmin_supply"
.balign 4
lbl_804823D4:
	.asciz "x03_find_red_onyon"
.balign 4
lbl_804823E8:
	.asciz "g35_president_gamestart"
.balign 4
lbl_80482400:
	.asciz "start-repay"
.balign 4
lbl_8048240C:
	.asciz "check-repay"
.balign 4
lbl_80482418:
	.asciz "gamestate::cleanup"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q32og6Screen14DispMemberSave
__vt__Q32og6Screen14DispMemberSave:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen14DispMemberSaveFv
	.4byte getOwnerID__Q32og6Screen14DispMemberSaveFv
	.4byte getMemberID__Q32og6Screen14DispMemberSaveFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen19DispMemberSMenuCont
__vt__Q32og6Screen19DispMemberSMenuCont:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen19DispMemberSMenuContFv
	.4byte getOwnerID__Q32og6Screen19DispMemberSMenuContFv
	.4byte getMemberID__Q32og6Screen19DispMemberSMenuContFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen22DispMemberSMenuPauseVS
__vt__Q32og6Screen22DispMemberSMenuPauseVS:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen22DispMemberSMenuPauseVSFv
	.4byte getOwnerID__Q32og6Screen22DispMemberSMenuPauseVSFv
	.4byte getMemberID__Q32og6Screen22DispMemberSMenuPauseVSFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen18DispMemberSMenuMap
__vt__Q32og6Screen18DispMemberSMenuMap:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen18DispMemberSMenuMapFv
	.4byte getOwnerID__Q32og6Screen18DispMemberSMenuMapFv
	.4byte getMemberID__Q32og6Screen18DispMemberSMenuMapFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen19DispMemberSMenuItem
__vt__Q32og6Screen19DispMemberSMenuItem:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen19DispMemberSMenuItemFv
	.4byte getOwnerID__Q32og6Screen19DispMemberSMenuItemFv
	.4byte getMemberID__Q32og6Screen19DispMemberSMenuItemFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu
__vt__Q32og6Screen27DispMemberSMenuPauseDoukutu:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
	.4byte getOwnerID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
	.4byte getMemberID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen20DispMemberSMenuPause
__vt__Q32og6Screen20DispMemberSMenuPause:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen20DispMemberSMenuPauseFv
	.4byte getOwnerID__Q32og6Screen20DispMemberSMenuPauseFv
	.4byte getMemberID__Q32og6Screen20DispMemberSMenuPauseFv
	.4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
.global __vt__Q32og6Screen18DispMemberSMenuAll
__vt__Q32og6Screen18DispMemberSMenuAll:
	.4byte 0
	.4byte 0
	.4byte getSize__Q32og6Screen18DispMemberSMenuAllFv
	.4byte getOwnerID__Q32og6Screen18DispMemberSMenuAllFv
	.4byte getMemberID__Q32og6Screen18DispMemberSMenuAllFv
	.4byte doSetSubMemberAll__Q32og6Screen18DispMemberSMenuAllFv
.global __vt__Q34Game10SingleGame9GameState
__vt__Q34Game10SingleGame9GameState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
	.4byte exec__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
	.4byte cleanup__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
	.4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionR8Graphics
	.4byte onOrimaDown__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni
	.4byte onMovieStart__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni
	.4byte onHoleIn__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
	.4byte onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
	.4byte onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
	.4byte on_section_fadeout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
	.4byte on_demo_timer__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionUl

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80519FA8:
	.float 0.0
lbl_80519FAC:
	.float 6.0
lbl_80519FB0:
	.float 128000.0
lbl_80519FB4:
	.float 180.0
.balign 4
lbl_80519FB8:
	.asciz "sm-canc"
.balign 4
lbl_80519FC0:
	.asciz "sm-ugot"
.balign 4
lbl_80519FC8:
	.asciz "sm-zenk"
.balign 4
lbl_80519FD0:
	.asciz "open-sm"
.balign 4
lbl_80519FD8:
	.float 20.0
lbl_80519FDC:
	.float 1.0
lbl_80519FE0:
	.float 0.9
lbl_80519FE4:
	.float 0.8
lbl_80519FE8:
	.float 900.0
lbl_80519FEC: # Louie Start X
	.float -1260.0
lbl_80519FF0: # Louie Start Y
	.float -80.0
lbl_80519FF4: # Louie Start Z
	.float 4350.0
lbl_80519FF8:
	.float 7.6969023
lbl_80519FFC:
	.float 5.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.if version == 1
.global init__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
init__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game8StateArg:
/* 802135AC 002104EC  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 802135B0 002104F0  7C 08 02 A6 */	mflr r0
/* 802135B4 002104F4  3C C0 80 48 */	lis r6, lbl_80482150@ha
/* 802135B8 002104F8  90 01 01 44 */	stw r0, 0x144(r1)
/* 802135BC 002104FC  38 00 00 00 */	li r0, 0
/* 802135C0 00210500  BF 61 01 2C */	stmw r27, 0x12c(r1)
/* 802135C4 00210504  7C 7B 1B 78 */	mr r27, r3
/* 802135C8 00210508  7C 9C 23 78 */	mr r28, r4
/* 802135CC 0021050C  7C BD 2B 78 */	mr r29, r5
/* 802135D0 00210510  3B E6 21 50 */	addi r31, r6, lbl_80482150@l
/* 802135D4 00210514  90 0D 96 18 */	stw r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 802135D8 00210518  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802135DC 0021051C  48 21 92 D5 */	bl reset__Q24Game11MoviePlayerFv
/* 802135E0 00210520  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802135E4 00210524  38 00 00 00 */	li r0, 0
/* 802135E8 00210528  88 64 00 3C */	lbz r3, 0x3c(r4)
/* 802135EC 0021052C  60 63 00 20 */	ori r3, r3, 0x20
/* 802135F0 00210530  98 64 00 3C */	stb r3, 0x3c(r4)
/* 802135F4 00210534  98 1B 00 10 */	stb r0, 0x10(r27)
/* 802135F8 00210538  98 1B 00 19 */	stb r0, 0x19(r27)
/* 802135FC 0021053C  98 1B 00 20 */	stb r0, 0x20(r27)
/* 80213600 00210540  80 9C 02 2C */	lwz r4, 0x250(r28)
/* 80213604 00210544  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213608 00210548  83 C4 00 48 */	lwz r30, 0x48(r4)
/* 8021360C 0021054C  7F C4 F3 78 */	mr r4, r30
/* 80213610 00210550  4B FD 3E 5D */	bl setCurrentCourse__Q24Game8PlayDataFi
/* 80213614 00210554  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80213618 00210558  88 05 00 20 */	lbz r0, 0x20(r5)
/* 8021361C 0021055C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80213620 00210560  40 82 00 30 */	bne .L_80213650
/* 80213624 00210564  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80213628 00210568  38 80 00 00 */	li r4, 0
/* 8021362C 0021056C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80213630 00210570  C0 03 09 D0 */	lfs f0, 0x9d0(r3)
/* 80213634 00210574  D0 05 00 24 */	stfs f0, 0x24(r5)
/* 80213638 00210578  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021363C 0021057C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213640 00210580  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80213644 00210584  7D 89 03 A6 */	mtctr r12
/* 80213648 00210588  4E 80 04 21 */	bctrl 
/* 8021364C 0021058C  4B F2 E9 9D */	bl setLifeMax__Q24Game4NaviFv
.L_80213650:
/* 80213650 00210590  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80213654 00210594  88 05 00 20 */	lbz r0, 0x20(r5)
/* 80213658 00210598  54 00 FF FF */	rlwinm. r0, r0, 0x1f, 0x1f, 0x1f
/* 8021365C 0021059C  40 82 00 30 */	bne .L_8021368C
/* 80213660 002105A0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80213664 002105A4  38 80 00 01 */	li r4, 1
/* 80213668 002105A8  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8021366C 002105AC  C0 03 09 D0 */	lfs f0, 0x9d0(r3)
/* 80213670 002105B0  D0 05 00 28 */	stfs f0, 0x28(r5)
/* 80213674 002105B4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80213678 002105B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021367C 002105BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80213680 002105C0  7D 89 03 A6 */	mtctr r12
/* 80213684 002105C4  4E 80 04 21 */	bctrl 
/* 80213688 002105C8  4B F2 E9 61 */	bl setLifeMax__Q24Game4NaviFv
.L_8021368C:
/* 8021368C 002105CC  28 1D 00 00 */	cmplwi r29, 0
/* 80213690 002105D0  40 82 00 18 */	bne .L_802136A8
/* 80213694 002105D4  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80213698 002105D8  38 BF 00 94 */	addi r5, r31, 0x94
/* 8021369C 002105DC  38 80 02 70 */	li r4, 0x270
/* 802136A0 002105E0  4C C6 31 82 */	crclr 6
/* 802136A4 002105E4  4B E1 6F 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802136A8:
/* 802136A8 002105E8  C0 22 BC 48 */	lfs f1, lbl_80519FA8@sda21(r2)
/* 802136AC 002105EC  7F 83 E3 78 */	mr r3, r28
/* 802136B0 002105F0  A3 BD 00 02 */	lhz r29, 2(r29)
/* 802136B4 002105F4  38 80 00 00 */	li r4, 0
/* 802136B8 002105F8  FC 40 08 90 */	fmr f2, f1
/* 802136BC 002105FC  4B F3 A6 65 */	bl setFixNearFar__Q24Game15BaseGameSectionFbff
/* 802136C0 00210600  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802136C4 00210604  38 00 00 00 */	li r0, 0
/* 802136C8 00210608  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802136CC 0021060C  98 03 00 91 */	stb r0, 0x91(r3)
/* 802136D0 00210610  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802136D4 00210614  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802136D8 00210618  93 C3 00 94 */	stw r30, 0x94(r3)
/* 802136DC 0021061C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802136E0 00210620  98 03 00 48 */	stb r0, 0x48(r3)
/* 802136E4 00210624  90 1C 02 48 */	stw r0, 0x26c(r28)
/* 802136E8 00210628  98 1C 01 94 */	stb r0, 0x1b8(r28)
/* 802136EC 0021062C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802136F0 00210630  88 03 00 20 */	lbz r0, 0x20(r3)
/* 802136F4 00210634  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802136F8 00210638  40 82 00 14 */	bne .L_8021370C
/* 802136FC 0021063C  7F 83 E3 78 */	mr r3, r28
/* 80213700 00210640  38 80 00 00 */	li r4, 0
/* 80213704 00210644  4B F3 A2 15 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80213708 00210648  48 00 00 10 */	b .L_80213718
.L_8021370C:
/* 8021370C 0021064C  7F 83 E3 78 */	mr r3, r28
/* 80213710 00210650  38 80 00 01 */	li r4, 1
/* 80213714 00210654  4B F3 A2 05 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80213718:
/* 80213718 00210658  7F 83 E3 78 */	mr r3, r28
/* 8021371C 0021065C  4B F3 A6 6D */	bl setCamController__Q24Game15BaseGameSectionFv
/* 80213720 00210660  80 7C 02 44 */	lwz r3, 0x268(r28)
/* 80213724 00210664  28 03 00 00 */	cmplwi r3, 0
/* 80213728 00210668  41 82 00 18 */	beq .L_80213740
/* 8021372C 0021066C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213730 00210670  38 80 00 00 */	li r4, 0
/* 80213734 00210674  81 8C 00 08 */	lwz r12, 8(r12)
/* 80213738 00210678  7D 89 03 A6 */	mtctr r12
/* 8021373C 0021067C  4E 80 04 21 */	bctrl 
.L_80213740:
/* 80213740 00210680  7F 83 E3 78 */	mr r3, r28
/* 80213744 00210684  4B F4 13 E1 */	bl setupMainMapGames__Q24Game17SingleGameSectionFv
/* 80213748 00210688  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8021374C 0021068C  38 9F 00 A0 */	addi r4, r31, 0xa0
/* 80213750 00210690  4B F4 BA B1 */	bl debugShapeDL__Q24Game7PikiMgrFPc
/* 80213754 00210694  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213758 00210698  48 21 91 A1 */	bl getActiveGameCamera__Q24Game11MoviePlayerFv
/* 8021375C 0021069C  2C 1D 00 02 */	cmpwi r29, 2
/* 80213760 002106A0  41 82 00 28 */	beq .L_80213788
/* 80213764 002106A4  40 80 00 14 */	bge .L_80213778
/* 80213768 002106A8  2C 1D 00 00 */	cmpwi r29, 0
/* 8021376C 002106AC  41 82 02 FC */	beq .L_80213A68
/* 80213770 002106B0  40 80 04 24 */	bge .L_80213B94
/* 80213774 002106B4  48 00 04 E0 */	b .L_80213C54
.L_80213778:
/* 80213778 002106B8  2C 1D 00 05 */	cmpwi r29, 5
/* 8021377C 002106BC  41 82 00 38 */	beq .L_802137B4
/* 80213780 002106C0  40 80 04 D4 */	bge .L_80213C54
/* 80213784 002106C4  48 00 04 10 */	b .L_80213B94
.L_80213788:
/* 80213788 002106C8  38 00 00 02 */	li r0, 2
/* 8021378C 002106CC  7F 63 DB 78 */	mr r3, r27
/* 80213790 002106D0  B0 01 00 08 */	sth r0, 8(r1)
/* 80213794 002106D4  7F 84 E3 78 */	mr r4, r28
/* 80213798 002106D8  38 C1 00 08 */	addi r6, r1, 8
/* 8021379C 002106DC  38 A0 00 05 */	li r5, 5
/* 802137A0 002106E0  81 9B 00 00 */	lwz r12, 0(r27)
/* 802137A4 002106E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802137A8 002106E8  7D 89 03 A6 */	mtctr r12
/* 802137AC 002106EC  4E 80 04 21 */	bctrl 
/* 802137B0 002106F0  48 00 06 98 */	b .L_80213E48
.L_802137B4:
/* 802137B4 002106F4  80 9C 02 2C */	lwz r4, 0x250(r28)
/* 802137B8 002106F8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 802137BC 002106FC  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 802137C0 00210700  38 00 00 00 */	li r0, 0
/* 802137C4 00210704  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802137C8 00210708  38 80 00 1F */	li r4, 0x1f
/* 802137CC 0021070C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802137D0 00210710  90 61 00 E8 */	stw r3, 0xe8(r1)
/* 802137D4 00210714  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802137D8 00210718  90 C1 00 EC */	stw r6, 0xec(r1)
/* 802137DC 0021071C  90 A1 00 F4 */	stw r5, 0xf4(r1)
/* 802137E0 00210720  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 802137E4 00210724  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 802137E8 00210728  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 802137EC 0021072C  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 802137F0 00210730  90 01 01 10 */	stw r0, 0x110(r1)
/* 802137F4 00210734  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 802137F8 00210738  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 802137FC 0021073C  90 01 01 14 */	stw r0, 0x114(r1)
/* 80213800 00210740  90 01 00 FC */	stw r0, 0xfc(r1)
/* 80213804 00210744  90 01 01 18 */	stw r0, 0x118(r1)
/* 80213808 00210748  4B FD 3B 9D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8021380C 0021074C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80213810 00210750  28 03 00 00 */	cmplwi r3, 0
/* 80213814 00210754  41 82 00 08 */	beq .L_8021381C
/* 80213818 00210758  38 63 00 04 */	addi r3, r3, 4
.L_8021381C:
/* 8021381C 0021075C  38 00 00 00 */	li r0, 0
/* 80213820 00210760  90 61 00 44 */	stw r3, 0x44(r1)
/* 80213824 00210764  38 61 00 3C */	addi r3, r1, 0x3c
/* 80213828 00210768  90 01 00 48 */	stw r0, 0x48(r1)
/* 8021382C 0021076C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80213830 00210770  90 01 00 40 */	stw r0, 0x40(r1)
/* 80213834 00210774  4B EF AC 5D */	bl "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
/* 80213838 00210778  48 00 00 28 */	b .L_80213860
.L_8021383C:
/* 8021383C 0021077C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213840 00210780  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80213844 00210784  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213848 00210788  7D 89 03 A6 */	mtctr r12
/* 8021384C 0021078C  4E 80 04 21 */	bctrl 
/* 80213850 00210790  38 80 00 00 */	li r4, 0
/* 80213854 00210794  4B F2 81 FD */	bl movie_begin__Q24Game8CreatureFb
/* 80213858 00210798  38 61 00 3C */	addi r3, r1, 0x3c
/* 8021385C 0021079C  4B EF A6 95 */	bl "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
.L_80213860:
/* 80213860 002107A0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80213864 002107A4  28 03 00 00 */	cmplwi r3, 0
/* 80213868 002107A8  40 82 FF D4 */	bne .L_8021383C
/* 8021386C 002107AC  38 00 00 00 */	li r0, 0
/* 80213870 002107B0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80213874 002107B4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80213878 002107B8  90 01 00 38 */	stw r0, 0x38(r1)
/* 8021387C 002107BC  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80213880 002107C0  28 00 00 00 */	cmplwi r0, 0
/* 80213884 002107C4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80213888 002107C8  90 01 00 30 */	stw r0, 0x30(r1)
/* 8021388C 002107CC  90 61 00 34 */	stw r3, 0x34(r1)
/* 80213890 002107D0  40 82 00 1C */	bne .L_802138AC
/* 80213894 002107D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80213898 002107D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021389C 002107DC  7D 89 03 A6 */	mtctr r12
/* 802138A0 002107E0  4E 80 04 21 */	bctrl 
/* 802138A4 002107E4  90 61 00 30 */	stw r3, 0x30(r1)
/* 802138A8 002107E8  48 00 01 68 */	b .L_80213A10
.L_802138AC:
/* 802138AC 002107EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802138B0 002107F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802138B4 002107F4  7D 89 03 A6 */	mtctr r12
/* 802138B8 002107F8  4E 80 04 21 */	bctrl 
/* 802138BC 002107FC  90 61 00 30 */	stw r3, 0x30(r1)
/* 802138C0 00210800  48 00 00 58 */	b .L_80213918
.L_802138C4:
/* 802138C4 00210804  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802138C8 00210808  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802138CC 0021080C  81 83 00 00 */	lwz r12, 0(r3)
/* 802138D0 00210810  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802138D4 00210814  7D 89 03 A6 */	mtctr r12
/* 802138D8 00210818  4E 80 04 21 */	bctrl 
/* 802138DC 0021081C  7C 64 1B 78 */	mr r4, r3
/* 802138E0 00210820  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802138E4 00210824  81 83 00 00 */	lwz r12, 0(r3)
/* 802138E8 00210828  81 8C 00 08 */	lwz r12, 8(r12)
/* 802138EC 0021082C  7D 89 03 A6 */	mtctr r12
/* 802138F0 00210830  4E 80 04 21 */	bctrl 
/* 802138F4 00210834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802138F8 00210838  40 82 01 18 */	bne .L_80213A10
/* 802138FC 0021083C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213900 00210840  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213904 00210844  81 83 00 00 */	lwz r12, 0(r3)
/* 80213908 00210848  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021390C 0021084C  7D 89 03 A6 */	mtctr r12
/* 80213910 00210850  4E 80 04 21 */	bctrl 
/* 80213914 00210854  90 61 00 30 */	stw r3, 0x30(r1)
.L_80213918:
/* 80213918 00210858  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 8021391C 0021085C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80213920 00210860  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213924 00210864  7D 89 03 A6 */	mtctr r12
/* 80213928 00210868  4E 80 04 21 */	bctrl 
/* 8021392C 0021086C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213930 00210870  41 82 FF 94 */	beq .L_802138C4
/* 80213934 00210874  48 00 00 DC */	b .L_80213A10
.L_80213938:
/* 80213938 00210878  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8021393C 0021087C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213940 00210880  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80213944 00210884  7D 89 03 A6 */	mtctr r12
/* 80213948 00210888  4E 80 04 21 */	bctrl 
/* 8021394C 0021088C  38 80 00 00 */	li r4, 0
/* 80213950 00210890  4B F2 81 01 */	bl movie_begin__Q24Game8CreatureFb
/* 80213954 00210894  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80213958 00210898  28 00 00 00 */	cmplwi r0, 0
/* 8021395C 0021089C  40 82 00 24 */	bne .L_80213980
/* 80213960 002108A0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213964 002108A4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213968 002108A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021396C 002108AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80213970 002108B0  7D 89 03 A6 */	mtctr r12
/* 80213974 002108B4  4E 80 04 21 */	bctrl 
/* 80213978 002108B8  90 61 00 30 */	stw r3, 0x30(r1)
/* 8021397C 002108BC  48 00 00 94 */	b .L_80213A10
.L_80213980:
/* 80213980 002108C0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213984 002108C4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213988 002108C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021398C 002108CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80213990 002108D0  7D 89 03 A6 */	mtctr r12
/* 80213994 002108D4  4E 80 04 21 */	bctrl 
/* 80213998 002108D8  90 61 00 30 */	stw r3, 0x30(r1)
/* 8021399C 002108DC  48 00 00 58 */	b .L_802139F4
.L_802139A0:
/* 802139A0 002108E0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802139A4 002108E4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802139A8 002108E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802139AC 002108EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802139B0 002108F0  7D 89 03 A6 */	mtctr r12
/* 802139B4 002108F4  4E 80 04 21 */	bctrl 
/* 802139B8 002108F8  7C 64 1B 78 */	mr r4, r3
/* 802139BC 002108FC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802139C0 00210900  81 83 00 00 */	lwz r12, 0(r3)
/* 802139C4 00210904  81 8C 00 08 */	lwz r12, 8(r12)
/* 802139C8 00210908  7D 89 03 A6 */	mtctr r12
/* 802139CC 0021090C  4E 80 04 21 */	bctrl 
/* 802139D0 00210910  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802139D4 00210914  40 82 00 3C */	bne .L_80213A10
/* 802139D8 00210918  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802139DC 0021091C  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802139E0 00210920  81 83 00 00 */	lwz r12, 0(r3)
/* 802139E4 00210924  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802139E8 00210928  7D 89 03 A6 */	mtctr r12
/* 802139EC 0021092C  4E 80 04 21 */	bctrl 
/* 802139F0 00210930  90 61 00 30 */	stw r3, 0x30(r1)
.L_802139F4:
/* 802139F4 00210934  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 802139F8 00210938  38 61 00 2C */	addi r3, r1, 0x2c
/* 802139FC 0021093C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213A00 00210940  7D 89 03 A6 */	mtctr r12
/* 80213A04 00210944  4E 80 04 21 */	bctrl 
/* 80213A08 00210948  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213A0C 0021094C  41 82 FF 94 */	beq .L_802139A0
.L_80213A10:
/* 80213A10 00210950  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213A14 00210954  81 83 00 00 */	lwz r12, 0(r3)
/* 80213A18 00210958  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80213A1C 0021095C  7D 89 03 A6 */	mtctr r12
/* 80213A20 00210960  4E 80 04 21 */	bctrl 
/* 80213A24 00210964  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213A28 00210968  7C 04 18 40 */	cmplw r4, r3
/* 80213A2C 0021096C  40 82 FF 0C */	bne .L_80213938
/* 80213A30 00210970  80 1C 00 CC */	lwz r0, 0xec(r28)
/* 80213A34 00210974  38 81 00 E8 */	addi r4, r1, 0xe8
/* 80213A38 00210978  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213A3C 0021097C  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80213A40 00210980  48 21 8F 91 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213A44 00210984  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213A48 00210988  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213A4C 0021098C  4B F1 36 91 */	bl setStartTime__Q24Game7TimeMgrFv
/* 80213A50 00210990  80 7C 02 44 */	lwz r3, 0x268(r28)
/* 80213A54 00210994  81 83 00 00 */	lwz r12, 0(r3)
/* 80213A58 00210998  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213A5C 0021099C  7D 89 03 A6 */	mtctr r12
/* 80213A60 002109A0  4E 80 04 21 */	bctrl 
/* 80213A64 002109A4  48 00 02 04 */	b .L_80213C68
.L_80213A68:
/* 80213A68 002109A8  80 9C 02 2C */	lwz r4, 0x250(r28)
/* 80213A6C 002109AC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213A70 002109B0  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80213A74 002109B4  3B C4 00 1F */	addi r30, r4, 0x1f
/* 80213A78 002109B8  7F C4 F3 78 */	mr r4, r30
/* 80213A7C 002109BC  4B FD 39 65 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80213A80 002109C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213A84 002109C4  40 82 00 A0 */	bne .L_80213B24
/* 80213A88 002109C8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213A8C 002109CC  7F C4 F3 78 */	mr r4, r30
/* 80213A90 002109D0  4B FD 39 15 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80213A94 002109D4  81 7C 02 2C */	lwz r11, 0x250(r28)
/* 80213A98 002109D8  38 A1 00 1C */	addi r5, r1, 0x1c
/* 80213A9C 002109DC  80 DF 00 6C */	lwz r6, 0x6c(r31)
/* 80213AA0 002109E0  38 00 00 00 */	li r0, 0
/* 80213AA4 002109E4  81 3F 00 70 */	lwz r9, 0x70(r31)
/* 80213AA8 002109E8  38 81 00 B4 */	addi r4, r1, 0xb4
/* 80213AAC 002109EC  81 1F 00 74 */	lwz r8, 0x74(r31)
/* 80213AB0 002109F0  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 80213AB4 002109F4  80 6B 00 48 */	lwz r3, 0x48(r11)
/* 80213AB8 002109F8  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80213ABC 002109FC  54 66 10 3A */	slwi r6, r3, 2
/* 80213AC0 00210A00  81 5C 00 C8 */	lwz r10, 0xe8(r28)
/* 80213AC4 00210A04  81 6B 00 14 */	lwz r11, 0x14(r11)
/* 80213AC8 00210A08  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213ACC 00210A0C  91 21 00 20 */	stw r9, 0x20(r1)
/* 80213AD0 00210A10  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213AD4 00210A14  91 01 00 24 */	stw r8, 0x24(r1)
/* 80213AD8 00210A18  90 E1 00 28 */	stw r7, 0x28(r1)
/* 80213ADC 00210A1C  7C A5 30 2E */	lwzx r5, r5, r6
/* 80213AE0 00210A20  91 61 00 B8 */	stw r11, 0xb8(r1)
/* 80213AE4 00210A24  90 A1 00 B4 */	stw r5, 0xb4(r1)
/* 80213AE8 00210A28  91 41 00 C0 */	stw r10, 0xc0(r1)
/* 80213AEC 00210A2C  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80213AF0 00210A30  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80213AF4 00210A34  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80213AF8 00210A38  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80213AFC 00210A3C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80213B00 00210A40  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80213B04 00210A44  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80213B08 00210A48  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80213B0C 00210A4C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80213B10 00210A50  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80213B14 00210A54  80 1C 00 CC */	lwz r0, 0xec(r28)
/* 80213B18 00210A58  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80213B1C 00210A5C  48 21 8E B5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213B20 00210A60  48 00 00 64 */	b .L_80213B84
.L_80213B24:
/* 80213B24 00210A64  80 9C 02 2C */	lwz r4, 0x250(r28)
/* 80213B28 00210A68  38 7F 00 B0 */	addi r3, r31, 0xb0
/* 80213B2C 00210A6C  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 80213B30 00210A70  38 00 00 00 */	li r0, 0
/* 80213B34 00210A74  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80213B38 00210A78  38 81 00 80 */	addi r4, r1, 0x80
/* 80213B3C 00210A7C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213B40 00210A80  90 61 00 80 */	stw r3, 0x80(r1)
/* 80213B44 00210A84  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213B48 00210A88  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80213B4C 00210A8C  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80213B50 00210A90  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80213B54 00210A94  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80213B58 00210A98  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80213B5C 00210A9C  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 80213B60 00210AA0  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80213B64 00210AA4  90 01 00 90 */	stw r0, 0x90(r1)
/* 80213B68 00210AA8  90 01 00 88 */	stw r0, 0x88(r1)
/* 80213B6C 00210AAC  90 01 00 AC */	stw r0, 0xac(r1)
/* 80213B70 00210AB0  90 01 00 94 */	stw r0, 0x94(r1)
/* 80213B74 00210AB4  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80213B78 00210AB8  80 1C 00 CC */	lwz r0, 0xec(r28)
/* 80213B7C 00210ABC  90 01 00 90 */	stw r0, 0x90(r1)
/* 80213B80 00210AC0  48 21 8E 51 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_80213B84:
/* 80213B84 00210AC4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213B88 00210AC8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213B8C 00210ACC  4B F1 35 51 */	bl setStartTime__Q24Game7TimeMgrFv
/* 80213B90 00210AD0  48 00 00 D8 */	b .L_80213C68
.L_80213B94:
/* 80213B94 00210AD4  80 9C 02 2C */	lwz r4, 0x250(r28)
/* 80213B98 00210AD8  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 80213B9C 00210ADC  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 80213BA0 00210AE0  38 00 00 00 */	li r0, 0
/* 80213BA4 00210AE4  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80213BA8 00210AE8  38 81 00 4C */	addi r4, r1, 0x4c
/* 80213BAC 00210AEC  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213BB0 00210AF0  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80213BB4 00210AF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213BB8 00210AF8  90 C1 00 50 */	stw r6, 0x50(r1)
/* 80213BBC 00210AFC  90 A1 00 58 */	stw r5, 0x58(r1)
/* 80213BC0 00210B00  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80213BC4 00210B04  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80213BC8 00210B08  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80213BCC 00210B0C  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 80213BD0 00210B10  90 01 00 74 */	stw r0, 0x74(r1)
/* 80213BD4 00210B14  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80213BD8 00210B18  90 01 00 54 */	stw r0, 0x54(r1)
/* 80213BDC 00210B1C  90 01 00 78 */	stw r0, 0x78(r1)
/* 80213BE0 00210B20  90 01 00 60 */	stw r0, 0x60(r1)
/* 80213BE4 00210B24  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80213BE8 00210B28  80 1C 00 CC */	lwz r0, 0xec(r28)
/* 80213BEC 00210B2C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80213BF0 00210B30  48 21 8D E1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213BF4 00210B34  3B C0 00 00 */	li r30, 0
.L_80213BF8:
/* 80213BF8 00210B38  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213BFC 00210B3C  7F C4 F3 78 */	mr r4, r30
/* 80213C00 00210B40  4B FD 34 D9 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 80213C04 00210B44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213C08 00210B48  41 82 00 20 */	beq .L_80213C28
/* 80213C0C 00210B4C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80213C10 00210B50  7F C4 F3 78 */	mr r4, r30
/* 80213C14 00210B54  4B F6 7E 89 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 80213C18 00210B58  28 03 00 00 */	cmplwi r3, 0
/* 80213C1C 00210B5C  41 82 00 0C */	beq .L_80213C28
/* 80213C20 00210B60  38 80 00 03 */	li r4, 3
/* 80213C24 00210B64  4B F6 36 59 */	bl setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
.L_80213C28:
/* 80213C28 00210B68  3B DE 00 01 */	addi r30, r30, 1
/* 80213C2C 00210B6C  2C 1E 00 03 */	cmpwi r30, 3
/* 80213C30 00210B70  41 80 FF C8 */	blt .L_80213BF8
/* 80213C34 00210B74  28 1D 00 01 */	cmplwi r29, 1
/* 80213C38 00210B78  40 82 00 30 */	bne .L_80213C68
/* 80213C3C 00210B7C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213C40 00210B80  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80213C44 00210B84  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213C48 00210B88  C0 24 00 68 */	lfs f1, 0x68(r4)
/* 80213C4C 00210B8C  4B F1 34 55 */	bl setTime__Q24Game7TimeMgrFf
/* 80213C50 00210B90  48 00 00 18 */	b .L_80213C68
.L_80213C54:
/* 80213C54 00210B94  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80213C58 00210B98  38 BF 00 D0 */	addi r5, r31, 0xd0
/* 80213C5C 00210B9C  38 80 03 40 */	li r4, 0x340
/* 80213C60 00210BA0  4C C6 31 82 */	crclr 6
/* 80213C64 00210BA4  4B E1 69 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213C68:
/* 80213C68 00210BA8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80213C6C 00210BAC  38 80 00 01 */	li r4, 1
/* 80213C70 00210BB0  48 20 F6 F9 */	bl heapStatusDump__6SystemFb
/* 80213C74 00210BB4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213C78 00210BB8  28 1D 00 03 */	cmplwi r29, 3
/* 80213C7C 00210BBC  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213C80 00210BC0  80 03 02 40 */	lwz r0, 0x240(r3)
/* 80213C84 00210BC4  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80213C88 00210BC8  90 03 02 40 */	stw r0, 0x240(r3)
/* 80213C8C 00210BCC  41 82 00 68 */	beq .L_80213CF4
/* 80213C90 00210BD0  3B A0 00 00 */	li r29, 0
/* 80213C94 00210BD4  3B C0 00 00 */	li r30, 0
.L_80213C98:
/* 80213C98 00210BD8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213C9C 00210BDC  7F C4 F3 78 */	mr r4, r30
/* 80213CA0 00210BE0  4B FD 33 81 */	bl hasContainer__Q24Game8PlayDataFi
/* 80213CA4 00210BE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213CA8 00210BE8  41 82 00 2C */	beq .L_80213CD4
/* 80213CAC 00210BEC  7F C3 F3 78 */	mr r3, r30
/* 80213CB0 00210BF0  4B FB D2 8D */	bl getAllPikmins__Q24Game8GameStatFi
/* 80213CB4 00210BF4  2C 03 00 00 */	cmpwi r3, 0
/* 80213CB8 00210BF8  40 82 00 1C */	bne .L_80213CD4
/* 80213CBC 00210BFC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213CC0 00210C00  7F C4 F3 78 */	mr r4, r30
/* 80213CC4 00210C04  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80213CC8 00210C08  4B FD D8 E9 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80213CCC 00210C0C  3B A0 00 01 */	li r29, 1
/* 80213CD0 00210C10  48 00 00 10 */	b .L_80213CE0
.L_80213CD4:
/* 80213CD4 00210C14  3B DE 00 01 */	addi r30, r30, 1
/* 80213CD8 00210C18  2C 1E 00 02 */	cmpwi r30, 2
/* 80213CDC 00210C1C  40 81 FF BC */	ble .L_80213C98
.L_80213CE0:
/* 80213CE0 00210C20  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80213CE4 00210C24  41 82 00 18 */	beq .L_80213CFC
/* 80213CE8 00210C28  38 00 00 01 */	li r0, 1
/* 80213CEC 00210C2C  98 1B 00 10 */	stb r0, 0x10(r27)
/* 80213CF0 00210C30  48 00 00 0C */	b .L_80213CFC
.L_80213CF4:
/* 80213CF4 00210C34  38 00 00 00 */	li r0, 0
/* 80213CF8 00210C38  98 1B 00 10 */	stb r0, 0x10(r27)
.L_80213CFC:
/* 80213CFC 00210C3C  38 00 00 00 */	li r0, 0
/* 80213D00 00210C40  C0 02 BC 4C */	lfs f0, lbl_80519FAC@sda21(r2)
/* 80213D04 00210C44  98 1B 00 11 */	stb r0, 0x11(r27)
/* 80213D08 00210C48  7F 83 E3 78 */	mr r3, r28
/* 80213D0C 00210C4C  D0 1B 00 14 */	stfs f0, 0x14(r27)
/* 80213D10 00210C50  4B F4 02 89 */	bl clearCaveMenus__Q24Game17SingleGameSectionFv
/* 80213D14 00210C54  38 00 00 00 */	li r0, 0
/* 80213D18 00210C58  98 1B 00 18 */	stb r0, 0x18(r27)
/* 80213D1C 00210C5C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213D20 00210C60  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80213D24 00210C64  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80213D28 00210C68  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80213D2C 00210C6C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80213D30 00210C70  48 1E 82 DD */	bl initInCourse__Q26Screen9Game2DMgrFv
/* 80213D34 00210C74  38 00 00 00 */	li r0, 0
/* 80213D38 00210C78  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80213D3C 00210C7C  98 1C 02 3D */	stb r0, 0x261(r28)
/* 80213D40 00210C80  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 80213D44 00210C84  C0 22 BC 50 */	lfs f1, lbl_80519FB0@sda21(r2)
/* 80213D48 00210C88  38 A1 00 10 */	addi r5, r1, 0x10
/* 80213D4C 00210C8C  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80213D50 00210C90  38 C1 00 0C */	addi r6, r1, 0xc
/* 80213D54 00210C94  48 00 AA 21 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80213D58 00210C98  2C 03 00 00 */	cmpwi r3, 0
/* 80213D5C 00210C9C  40 82 00 10 */	bne .L_80213D6C
/* 80213D60 00210CA0  38 00 00 01 */	li r0, 1
/* 80213D64 00210CA4  98 1C 02 3E */	stb r0, 0x262(r28)
/* 80213D68 00210CA8  48 00 00 0C */	b .L_80213D74
.L_80213D6C:
/* 80213D6C 00210CAC  38 00 00 00 */	li r0, 0
/* 80213D70 00210CB0  98 1C 02 3E */	stb r0, 0x262(r28)
.L_80213D74:
/* 80213D74 00210CB4  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 80213D78 00210CB8  28 00 00 00 */	cmplwi r0, 0
/* 80213D7C 00210CBC  41 82 00 CC */	beq .L_80213E48
/* 80213D80 00210CC0  48 00 A8 B1 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 80213D84 00210CC4  2C 03 00 00 */	cmpwi r3, 0
/* 80213D88 00210CC8  40 82 00 C0 */	bne .L_80213E48
/* 80213D8C 00210CCC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80213D90 00210CD0  28 00 00 00 */	cmplwi r0, 0
/* 80213D94 00210CD4  40 82 00 18 */	bne .L_80213DAC
/* 80213D98 00210CD8  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80213D9C 00210CDC  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213DA0 00210CE0  38 80 01 D3 */	li r4, 0x1d3
/* 80213DA4 00210CE4  4C C6 31 82 */	crclr 6
/* 80213DA8 00210CE8  4B E1 68 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213DAC:
/* 80213DAC 00210CEC  83 6D 98 80 */	lwz r27, spSceneMgr__8PSSystem@sda21(r13)
/* 80213DB0 00210CF0  28 1B 00 00 */	cmplwi r27, 0
/* 80213DB4 00210CF4  40 82 00 18 */	bne .L_80213DCC
/* 80213DB8 00210CF8  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80213DBC 00210CFC  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213DC0 00210D00  38 80 01 DC */	li r4, 0x1dc
/* 80213DC4 00210D04  4C C6 31 82 */	crclr 6
/* 80213DC8 00210D08  4B E1 68 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213DCC:
/* 80213DCC 00210D0C  80 1B 00 04 */	lwz r0, 4(r27)
/* 80213DD0 00210D10  28 00 00 00 */	cmplwi r0, 0
/* 80213DD4 00210D14  40 82 00 18 */	bne .L_80213DEC
/* 80213DD8 00210D18  38 7F 00 FC */	addi r3, r31, 0xfc
/* 80213DDC 00210D1C  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213DE0 00210D20  38 80 00 CF */	li r4, 0xcf
/* 80213DE4 00210D24  4C C6 31 82 */	crclr 6
/* 80213DE8 00210D28  4B E1 68 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213DEC:
/* 80213DEC 00210D2C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80213DF0 00210D30  83 63 00 04 */	lwz r27, 4(r3)
/* 80213DF4 00210D34  28 1B 00 00 */	cmplwi r27, 0
/* 80213DF8 00210D38  40 82 00 18 */	bne .L_80213E10
/* 80213DFC 00210D3C  38 7F 00 FC */	addi r3, r31, 0xfc
/* 80213E00 00210D40  38 BF 01 08 */	addi r5, r31, 0x108
/* 80213E04 00210D44  38 80 00 D1 */	li r4, 0xd1
/* 80213E08 00210D48  4C C6 31 82 */	crclr 6
/* 80213E0C 00210D4C  4B E1 68 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213E10:
/* 80213E10 00210D50  81 9B 00 00 */	lwz r12, 0(r27)
/* 80213E14 00210D54  7F 63 DB 78 */	mr r3, r27
/* 80213E18 00210D58  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80213E1C 00210D5C  7D 89 03 A6 */	mtctr r12
/* 80213E20 00210D60  4E 80 04 21 */	bctrl 
/* 80213E24 00210D64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213E28 00210D68  40 82 00 18 */	bne .L_80213E40
/* 80213E2C 00210D6C  38 7F 01 2C */	addi r3, r31, 0x12c
/* 80213E30 00210D70  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213E34 00210D74  38 80 01 77 */	li r4, 0x177
/* 80213E38 00210D78  4C C6 31 82 */	crclr 6
/* 80213E3C 00210D7C  4B E1 68 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213E40:
/* 80213E40 00210D80  7F 63 DB 78 */	mr r3, r27
/* 80213E44 00210D84  48 25 5C C5 */	bl setPollutUp__Q23PSM12Scene_GroundFv
.L_80213E48:
/* 80213E48 00210D88  BB 61 01 2C */	lmw r27, 0x12c(r1)
/* 80213E4C 00210D8C  80 01 01 44 */	lwz r0, 0x144(r1)
/* 80213E50 00210D90  7C 08 03 A6 */	mtlr r0
/* 80213E54 00210D94  38 21 01 40 */	addi r1, r1, 0x140
/* 80213E58 00210D98  4E 80 00 20 */	blr 
.else
.global init__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
init__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game8StateArg:
/* 802135AC 002104EC  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 802135B0 002104F0  7C 08 02 A6 */	mflr r0
/* 802135B4 002104F4  3C C0 80 48 */	lis r6, lbl_80482150@ha
/* 802135B8 002104F8  90 01 01 44 */	stw r0, 0x144(r1)
/* 802135BC 002104FC  38 00 00 00 */	li r0, 0
/* 802135C0 00210500  BF 61 01 2C */	stmw r27, 0x12c(r1)
/* 802135C4 00210504  7C 7B 1B 78 */	mr r27, r3
/* 802135C8 00210508  7C 9C 23 78 */	mr r28, r4
/* 802135CC 0021050C  7C BD 2B 78 */	mr r29, r5
/* 802135D0 00210510  3B E6 21 50 */	addi r31, r6, lbl_80482150@l
/* 802135D4 00210514  90 0D 96 18 */	stw r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 802135D8 00210518  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802135DC 0021051C  48 21 92 D5 */	bl reset__Q24Game11MoviePlayerFv
/* 802135E0 00210520  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802135E4 00210524  38 00 00 00 */	li r0, 0
/* 802135E8 00210528  88 64 00 3C */	lbz r3, 0x3c(r4)
/* 802135EC 0021052C  60 63 00 20 */	ori r3, r3, 0x20
/* 802135F0 00210530  98 64 00 3C */	stb r3, 0x3c(r4)
/* 802135F4 00210534  98 1B 00 10 */	stb r0, 0x10(r27)
/* 802135F8 00210538  98 1B 00 19 */	stb r0, 0x19(r27)
/* 802135FC 0021053C  98 1B 00 20 */	stb r0, 0x20(r27)
/* 80213600 00210540  80 9C 02 2C */	lwz r4, 0x22c(r28)
/* 80213604 00210544  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213608 00210548  83 C4 00 48 */	lwz r30, 0x48(r4)
/* 8021360C 0021054C  7F C4 F3 78 */	mr r4, r30
/* 80213610 00210550  4B FD 3E 5D */	bl setCurrentCourse__Q24Game8PlayDataFi
/* 80213614 00210554  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80213618 00210558  88 05 00 20 */	lbz r0, 0x20(r5)
/* 8021361C 0021055C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80213620 00210560  40 82 00 30 */	bne .L_80213650
/* 80213624 00210564  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80213628 00210568  38 80 00 00 */	li r4, 0
/* 8021362C 0021056C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80213630 00210570  C0 03 09 D0 */	lfs f0, 0x9d0(r3)
/* 80213634 00210574  D0 05 00 24 */	stfs f0, 0x24(r5)
/* 80213638 00210578  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021363C 0021057C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213640 00210580  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80213644 00210584  7D 89 03 A6 */	mtctr r12
/* 80213648 00210588  4E 80 04 21 */	bctrl 
/* 8021364C 0021058C  4B F2 E9 9D */	bl setLifeMax__Q24Game4NaviFv
.L_80213650:
/* 80213650 00210590  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80213654 00210594  88 05 00 20 */	lbz r0, 0x20(r5)
/* 80213658 00210598  54 00 FF FF */	rlwinm. r0, r0, 0x1f, 0x1f, 0x1f
/* 8021365C 0021059C  40 82 00 30 */	bne .L_8021368C
/* 80213660 002105A0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80213664 002105A4  38 80 00 01 */	li r4, 1
/* 80213668 002105A8  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 8021366C 002105AC  C0 03 09 D0 */	lfs f0, 0x9d0(r3)
/* 80213670 002105B0  D0 05 00 28 */	stfs f0, 0x28(r5)
/* 80213674 002105B4  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80213678 002105B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021367C 002105BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80213680 002105C0  7D 89 03 A6 */	mtctr r12
/* 80213684 002105C4  4E 80 04 21 */	bctrl 
/* 80213688 002105C8  4B F2 E9 61 */	bl setLifeMax__Q24Game4NaviFv
.L_8021368C:
/* 8021368C 002105CC  28 1D 00 00 */	cmplwi r29, 0
/* 80213690 002105D0  40 82 00 18 */	bne .L_802136A8
/* 80213694 002105D4  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80213698 002105D8  38 BF 00 94 */	addi r5, r31, 0x94
/* 8021369C 002105DC  38 80 02 70 */	li r4, 0x270
/* 802136A0 002105E0  4C C6 31 82 */	crclr 6
/* 802136A4 002105E4  4B E1 6F 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802136A8:
/* 802136A8 002105E8  C0 22 BC 48 */	lfs f1, lbl_80519FA8@sda21(r2)
/* 802136AC 002105EC  7F 83 E3 78 */	mr r3, r28
/* 802136B0 002105F0  A3 BD 00 02 */	lhz r29, 2(r29)
/* 802136B4 002105F4  38 80 00 00 */	li r4, 0
/* 802136B8 002105F8  FC 40 08 90 */	fmr f2, f1
/* 802136BC 002105FC  4B F3 A6 65 */	bl setFixNearFar__Q24Game15BaseGameSectionFbff
/* 802136C0 00210600  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802136C4 00210604  38 00 00 00 */	li r0, 0
/* 802136C8 00210608  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802136CC 0021060C  98 03 00 91 */	stb r0, 0x91(r3)
/* 802136D0 00210610  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802136D4 00210614  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802136D8 00210618  93 C3 00 94 */	stw r30, 0x94(r3)
/* 802136DC 0021061C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802136E0 00210620  98 03 00 48 */	stb r0, 0x48(r3)
/* 802136E4 00210624  90 1C 02 48 */	stw r0, 0x248(r28)
/* 802136E8 00210628  98 1C 01 94 */	stb r0, 0x194(r28)
/* 802136EC 0021062C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802136F0 00210630  88 03 00 20 */	lbz r0, 0x20(r3)
/* 802136F4 00210634  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 802136F8 00210638  40 82 00 14 */	bne .L_8021370C
/* 802136FC 0021063C  7F 83 E3 78 */	mr r3, r28
/* 80213700 00210640  38 80 00 00 */	li r4, 0
/* 80213704 00210644  4B F3 A2 15 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80213708 00210648  48 00 00 10 */	b .L_80213718
.L_8021370C:
/* 8021370C 0021064C  7F 83 E3 78 */	mr r3, r28
/* 80213710 00210650  38 80 00 01 */	li r4, 1
/* 80213714 00210654  4B F3 A2 05 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80213718:
/* 80213718 00210658  7F 83 E3 78 */	mr r3, r28
/* 8021371C 0021065C  4B F3 A6 6D */	bl setCamController__Q24Game15BaseGameSectionFv
/* 80213720 00210660  80 7C 02 44 */	lwz r3, 0x244(r28)
/* 80213724 00210664  28 03 00 00 */	cmplwi r3, 0
/* 80213728 00210668  41 82 00 18 */	beq .L_80213740
/* 8021372C 0021066C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213730 00210670  38 80 00 00 */	li r4, 0
/* 80213734 00210674  81 8C 00 08 */	lwz r12, 8(r12)
/* 80213738 00210678  7D 89 03 A6 */	mtctr r12
/* 8021373C 0021067C  4E 80 04 21 */	bctrl 
.L_80213740:
/* 80213740 00210680  7F 83 E3 78 */	mr r3, r28
/* 80213744 00210684  4B F4 13 E1 */	bl setupMainMapGames__Q24Game17SingleGameSectionFv
/* 80213748 00210688  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8021374C 0021068C  38 9F 00 A0 */	addi r4, r31, 0xa0
/* 80213750 00210690  4B F4 BA B1 */	bl debugShapeDL__Q24Game7PikiMgrFPc
/* 80213754 00210694  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213758 00210698  48 21 91 A1 */	bl getActiveGameCamera__Q24Game11MoviePlayerFv
/* 8021375C 0021069C  2C 1D 00 02 */	cmpwi r29, 2
/* 80213760 002106A0  41 82 00 28 */	beq .L_80213788
/* 80213764 002106A4  40 80 00 14 */	bge .L_80213778
/* 80213768 002106A8  2C 1D 00 00 */	cmpwi r29, 0
/* 8021376C 002106AC  41 82 02 FC */	beq .L_80213A68
/* 80213770 002106B0  40 80 04 24 */	bge .L_80213B94
/* 80213774 002106B4  48 00 04 E0 */	b .L_80213C54
.L_80213778:
/* 80213778 002106B8  2C 1D 00 05 */	cmpwi r29, 5
/* 8021377C 002106BC  41 82 00 38 */	beq .L_802137B4
/* 80213780 002106C0  40 80 04 D4 */	bge .L_80213C54
/* 80213784 002106C4  48 00 04 10 */	b .L_80213B94
.L_80213788:
/* 80213788 002106C8  38 00 00 02 */	li r0, 2
/* 8021378C 002106CC  7F 63 DB 78 */	mr r3, r27
/* 80213790 002106D0  B0 01 00 08 */	sth r0, 8(r1)
/* 80213794 002106D4  7F 84 E3 78 */	mr r4, r28
/* 80213798 002106D8  38 C1 00 08 */	addi r6, r1, 8
/* 8021379C 002106DC  38 A0 00 05 */	li r5, 5
/* 802137A0 002106E0  81 9B 00 00 */	lwz r12, 0(r27)
/* 802137A4 002106E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802137A8 002106E8  7D 89 03 A6 */	mtctr r12
/* 802137AC 002106EC  4E 80 04 21 */	bctrl 
/* 802137B0 002106F0  48 00 06 98 */	b .L_80213E48
.L_802137B4:
/* 802137B4 002106F4  80 9C 02 2C */	lwz r4, 0x22c(r28)
/* 802137B8 002106F8  38 7F 00 1C */	addi r3, r31, 0x1c
/* 802137BC 002106FC  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 802137C0 00210700  38 00 00 00 */	li r0, 0
/* 802137C4 00210704  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802137C8 00210708  38 80 00 1F */	li r4, 0x1f
/* 802137CC 0021070C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802137D0 00210710  90 61 00 E8 */	stw r3, 0xe8(r1)
/* 802137D4 00210714  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802137D8 00210718  90 C1 00 EC */	stw r6, 0xec(r1)
/* 802137DC 0021071C  90 A1 00 F4 */	stw r5, 0xf4(r1)
/* 802137E0 00210720  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 802137E4 00210724  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 802137E8 00210728  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 802137EC 0021072C  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 802137F0 00210730  90 01 01 10 */	stw r0, 0x110(r1)
/* 802137F4 00210734  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 802137F8 00210738  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 802137FC 0021073C  90 01 01 14 */	stw r0, 0x114(r1)
/* 80213800 00210740  90 01 00 FC */	stw r0, 0xfc(r1)
/* 80213804 00210744  90 01 01 18 */	stw r0, 0x118(r1)
/* 80213808 00210748  4B FD 3B 9D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8021380C 0021074C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 80213810 00210750  28 03 00 00 */	cmplwi r3, 0
/* 80213814 00210754  41 82 00 08 */	beq .L_8021381C
/* 80213818 00210758  38 63 00 04 */	addi r3, r3, 4
.L_8021381C:
/* 8021381C 0021075C  38 00 00 00 */	li r0, 0
/* 80213820 00210760  90 61 00 44 */	stw r3, 0x44(r1)
/* 80213824 00210764  38 61 00 3C */	addi r3, r1, 0x3c
/* 80213828 00210768  90 01 00 48 */	stw r0, 0x48(r1)
/* 8021382C 0021076C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80213830 00210770  90 01 00 40 */	stw r0, 0x40(r1)
/* 80213834 00210774  4B EF AC 5D */	bl "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
/* 80213838 00210778  48 00 00 28 */	b .L_80213860
.L_8021383C:
/* 8021383C 0021077C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213840 00210780  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80213844 00210784  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213848 00210788  7D 89 03 A6 */	mtctr r12
/* 8021384C 0021078C  4E 80 04 21 */	bctrl 
/* 80213850 00210790  38 80 00 00 */	li r4, 0
/* 80213854 00210794  4B F2 81 FD */	bl movie_begin__Q24Game8CreatureFb
/* 80213858 00210798  38 61 00 3C */	addi r3, r1, 0x3c
/* 8021385C 0021079C  4B EF A6 95 */	bl "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
.L_80213860:
/* 80213860 002107A0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80213864 002107A4  28 03 00 00 */	cmplwi r3, 0
/* 80213868 002107A8  40 82 FF D4 */	bne .L_8021383C
/* 8021386C 002107AC  38 00 00 00 */	li r0, 0
/* 80213870 002107B0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80213874 002107B4  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80213878 002107B8  90 01 00 38 */	stw r0, 0x38(r1)
/* 8021387C 002107BC  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80213880 002107C0  28 00 00 00 */	cmplwi r0, 0
/* 80213884 002107C4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80213888 002107C8  90 01 00 30 */	stw r0, 0x30(r1)
/* 8021388C 002107CC  90 61 00 34 */	stw r3, 0x34(r1)
/* 80213890 002107D0  40 82 00 1C */	bne .L_802138AC
/* 80213894 002107D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80213898 002107D8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021389C 002107DC  7D 89 03 A6 */	mtctr r12
/* 802138A0 002107E0  4E 80 04 21 */	bctrl 
/* 802138A4 002107E4  90 61 00 30 */	stw r3, 0x30(r1)
/* 802138A8 002107E8  48 00 01 68 */	b .L_80213A10
.L_802138AC:
/* 802138AC 002107EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802138B0 002107F0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802138B4 002107F4  7D 89 03 A6 */	mtctr r12
/* 802138B8 002107F8  4E 80 04 21 */	bctrl 
/* 802138BC 002107FC  90 61 00 30 */	stw r3, 0x30(r1)
/* 802138C0 00210800  48 00 00 58 */	b .L_80213918
.L_802138C4:
/* 802138C4 00210804  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802138C8 00210808  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802138CC 0021080C  81 83 00 00 */	lwz r12, 0(r3)
/* 802138D0 00210810  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802138D4 00210814  7D 89 03 A6 */	mtctr r12
/* 802138D8 00210818  4E 80 04 21 */	bctrl 
/* 802138DC 0021081C  7C 64 1B 78 */	mr r4, r3
/* 802138E0 00210820  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802138E4 00210824  81 83 00 00 */	lwz r12, 0(r3)
/* 802138E8 00210828  81 8C 00 08 */	lwz r12, 8(r12)
/* 802138EC 0021082C  7D 89 03 A6 */	mtctr r12
/* 802138F0 00210830  4E 80 04 21 */	bctrl 
/* 802138F4 00210834  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802138F8 00210838  40 82 01 18 */	bne .L_80213A10
/* 802138FC 0021083C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213900 00210840  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213904 00210844  81 83 00 00 */	lwz r12, 0(r3)
/* 80213908 00210848  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8021390C 0021084C  7D 89 03 A6 */	mtctr r12
/* 80213910 00210850  4E 80 04 21 */	bctrl 
/* 80213914 00210854  90 61 00 30 */	stw r3, 0x30(r1)
.L_80213918:
/* 80213918 00210858  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 8021391C 0021085C  38 61 00 2C */	addi r3, r1, 0x2c
/* 80213920 00210860  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213924 00210864  7D 89 03 A6 */	mtctr r12
/* 80213928 00210868  4E 80 04 21 */	bctrl 
/* 8021392C 0021086C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213930 00210870  41 82 FF 94 */	beq .L_802138C4
/* 80213934 00210874  48 00 00 DC */	b .L_80213A10
.L_80213938:
/* 80213938 00210878  80 61 00 34 */	lwz r3, 0x34(r1)
/* 8021393C 0021087C  81 83 00 00 */	lwz r12, 0(r3)
/* 80213940 00210880  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80213944 00210884  7D 89 03 A6 */	mtctr r12
/* 80213948 00210888  4E 80 04 21 */	bctrl 
/* 8021394C 0021088C  38 80 00 00 */	li r4, 0
/* 80213950 00210890  4B F2 81 01 */	bl movie_begin__Q24Game8CreatureFb
/* 80213954 00210894  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80213958 00210898  28 00 00 00 */	cmplwi r0, 0
/* 8021395C 0021089C  40 82 00 24 */	bne .L_80213980
/* 80213960 002108A0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213964 002108A4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213968 002108A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021396C 002108AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80213970 002108B0  7D 89 03 A6 */	mtctr r12
/* 80213974 002108B4  4E 80 04 21 */	bctrl 
/* 80213978 002108B8  90 61 00 30 */	stw r3, 0x30(r1)
/* 8021397C 002108BC  48 00 00 94 */	b .L_80213A10
.L_80213980:
/* 80213980 002108C0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213984 002108C4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213988 002108C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021398C 002108CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80213990 002108D0  7D 89 03 A6 */	mtctr r12
/* 80213994 002108D4  4E 80 04 21 */	bctrl 
/* 80213998 002108D8  90 61 00 30 */	stw r3, 0x30(r1)
/* 8021399C 002108DC  48 00 00 58 */	b .L_802139F4
.L_802139A0:
/* 802139A0 002108E0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802139A4 002108E4  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802139A8 002108E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802139AC 002108EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802139B0 002108F0  7D 89 03 A6 */	mtctr r12
/* 802139B4 002108F4  4E 80 04 21 */	bctrl 
/* 802139B8 002108F8  7C 64 1B 78 */	mr r4, r3
/* 802139BC 002108FC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802139C0 00210900  81 83 00 00 */	lwz r12, 0(r3)
/* 802139C4 00210904  81 8C 00 08 */	lwz r12, 8(r12)
/* 802139C8 00210908  7D 89 03 A6 */	mtctr r12
/* 802139CC 0021090C  4E 80 04 21 */	bctrl 
/* 802139D0 00210910  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802139D4 00210914  40 82 00 3C */	bne .L_80213A10
/* 802139D8 00210918  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802139DC 0021091C  80 81 00 30 */	lwz r4, 0x30(r1)
/* 802139E0 00210920  81 83 00 00 */	lwz r12, 0(r3)
/* 802139E4 00210924  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802139E8 00210928  7D 89 03 A6 */	mtctr r12
/* 802139EC 0021092C  4E 80 04 21 */	bctrl 
/* 802139F0 00210930  90 61 00 30 */	stw r3, 0x30(r1)
.L_802139F4:
/* 802139F4 00210934  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 802139F8 00210938  38 61 00 2C */	addi r3, r1, 0x2c
/* 802139FC 0021093C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213A00 00210940  7D 89 03 A6 */	mtctr r12
/* 80213A04 00210944  4E 80 04 21 */	bctrl 
/* 80213A08 00210948  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213A0C 0021094C  41 82 FF 94 */	beq .L_802139A0
.L_80213A10:
/* 80213A10 00210950  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80213A14 00210954  81 83 00 00 */	lwz r12, 0(r3)
/* 80213A18 00210958  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80213A1C 0021095C  7D 89 03 A6 */	mtctr r12
/* 80213A20 00210960  4E 80 04 21 */	bctrl 
/* 80213A24 00210964  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80213A28 00210968  7C 04 18 40 */	cmplw r4, r3
/* 80213A2C 0021096C  40 82 FF 0C */	bne .L_80213938
/* 80213A30 00210970  80 1C 00 CC */	lwz r0, 0xcc(r28)
/* 80213A34 00210974  38 81 00 E8 */	addi r4, r1, 0xe8
/* 80213A38 00210978  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213A3C 0021097C  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80213A40 00210980  48 21 8F 91 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213A44 00210984  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213A48 00210988  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213A4C 0021098C  4B F1 36 91 */	bl setStartTime__Q24Game7TimeMgrFv
/* 80213A50 00210990  80 7C 02 44 */	lwz r3, 0x244(r28)
/* 80213A54 00210994  81 83 00 00 */	lwz r12, 0(r3)
/* 80213A58 00210998  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80213A5C 0021099C  7D 89 03 A6 */	mtctr r12
/* 80213A60 002109A0  4E 80 04 21 */	bctrl 
/* 80213A64 002109A4  48 00 02 04 */	b .L_80213C68
.L_80213A68:
/* 80213A68 002109A8  80 9C 02 2C */	lwz r4, 0x22c(r28)
/* 80213A6C 002109AC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213A70 002109B0  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80213A74 002109B4  3B C4 00 1F */	addi r30, r4, 0x1f
/* 80213A78 002109B8  7F C4 F3 78 */	mr r4, r30
/* 80213A7C 002109BC  4B FD 39 65 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80213A80 002109C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213A84 002109C4  40 82 00 A0 */	bne .L_80213B24
/* 80213A88 002109C8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213A8C 002109CC  7F C4 F3 78 */	mr r4, r30
/* 80213A90 002109D0  4B FD 39 15 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80213A94 002109D4  81 7C 02 2C */	lwz r11, 0x22c(r28)
/* 80213A98 002109D8  38 A1 00 1C */	addi r5, r1, 0x1c
/* 80213A9C 002109DC  80 DF 00 6C */	lwz r6, 0x6c(r31)
/* 80213AA0 002109E0  38 00 00 00 */	li r0, 0
/* 80213AA4 002109E4  81 3F 00 70 */	lwz r9, 0x70(r31)
/* 80213AA8 002109E8  38 81 00 B4 */	addi r4, r1, 0xb4
/* 80213AAC 002109EC  81 1F 00 74 */	lwz r8, 0x74(r31)
/* 80213AB0 002109F0  80 FF 00 78 */	lwz r7, 0x78(r31)
/* 80213AB4 002109F4  80 6B 00 48 */	lwz r3, 0x48(r11)
/* 80213AB8 002109F8  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 80213ABC 002109FC  54 66 10 3A */	slwi r6, r3, 2
/* 80213AC0 00210A00  81 5C 00 C8 */	lwz r10, 0xc8(r28)
/* 80213AC4 00210A04  81 6B 00 14 */	lwz r11, 0x14(r11)
/* 80213AC8 00210A08  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213ACC 00210A0C  91 21 00 20 */	stw r9, 0x20(r1)
/* 80213AD0 00210A10  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213AD4 00210A14  91 01 00 24 */	stw r8, 0x24(r1)
/* 80213AD8 00210A18  90 E1 00 28 */	stw r7, 0x28(r1)
/* 80213ADC 00210A1C  7C A5 30 2E */	lwzx r5, r5, r6
/* 80213AE0 00210A20  91 61 00 B8 */	stw r11, 0xb8(r1)
/* 80213AE4 00210A24  90 A1 00 B4 */	stw r5, 0xb4(r1)
/* 80213AE8 00210A28  91 41 00 C0 */	stw r10, 0xc0(r1)
/* 80213AEC 00210A2C  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80213AF0 00210A30  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80213AF4 00210A34  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80213AF8 00210A38  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80213AFC 00210A3C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80213B00 00210A40  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80213B04 00210A44  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80213B08 00210A48  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80213B0C 00210A4C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80213B10 00210A50  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80213B14 00210A54  80 1C 00 CC */	lwz r0, 0xcc(r28)
/* 80213B18 00210A58  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80213B1C 00210A5C  48 21 8E B5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213B20 00210A60  48 00 00 64 */	b .L_80213B84
.L_80213B24:
/* 80213B24 00210A64  80 9C 02 2C */	lwz r4, 0x22c(r28)
/* 80213B28 00210A68  38 7F 00 B0 */	addi r3, r31, 0xb0
/* 80213B2C 00210A6C  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 80213B30 00210A70  38 00 00 00 */	li r0, 0
/* 80213B34 00210A74  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80213B38 00210A78  38 81 00 80 */	addi r4, r1, 0x80
/* 80213B3C 00210A7C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213B40 00210A80  90 61 00 80 */	stw r3, 0x80(r1)
/* 80213B44 00210A84  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213B48 00210A88  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80213B4C 00210A8C  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80213B50 00210A90  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80213B54 00210A94  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80213B58 00210A98  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80213B5C 00210A9C  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 80213B60 00210AA0  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80213B64 00210AA4  90 01 00 90 */	stw r0, 0x90(r1)
/* 80213B68 00210AA8  90 01 00 88 */	stw r0, 0x88(r1)
/* 80213B6C 00210AAC  90 01 00 AC */	stw r0, 0xac(r1)
/* 80213B70 00210AB0  90 01 00 94 */	stw r0, 0x94(r1)
/* 80213B74 00210AB4  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80213B78 00210AB8  80 1C 00 CC */	lwz r0, 0xcc(r28)
/* 80213B7C 00210ABC  90 01 00 90 */	stw r0, 0x90(r1)
/* 80213B80 00210AC0  48 21 8E 51 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_80213B84:
/* 80213B84 00210AC4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213B88 00210AC8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213B8C 00210ACC  4B F1 35 51 */	bl setStartTime__Q24Game7TimeMgrFv
/* 80213B90 00210AD0  48 00 00 D8 */	b .L_80213C68
.L_80213B94:
/* 80213B94 00210AD4  80 9C 02 2C */	lwz r4, 0x22c(r28)
/* 80213B98 00210AD8  38 7F 00 C0 */	addi r3, r31, 0xc0
/* 80213B9C 00210ADC  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 80213BA0 00210AE0  38 00 00 00 */	li r0, 0
/* 80213BA4 00210AE4  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80213BA8 00210AE8  38 81 00 4C */	addi r4, r1, 0x4c
/* 80213BAC 00210AEC  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213BB0 00210AF0  90 61 00 4C */	stw r3, 0x4c(r1)
/* 80213BB4 00210AF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213BB8 00210AF8  90 C1 00 50 */	stw r6, 0x50(r1)
/* 80213BBC 00210AFC  90 A1 00 58 */	stw r5, 0x58(r1)
/* 80213BC0 00210B00  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80213BC4 00210B04  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80213BC8 00210B08  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80213BCC 00210B0C  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 80213BD0 00210B10  90 01 00 74 */	stw r0, 0x74(r1)
/* 80213BD4 00210B14  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80213BD8 00210B18  90 01 00 54 */	stw r0, 0x54(r1)
/* 80213BDC 00210B1C  90 01 00 78 */	stw r0, 0x78(r1)
/* 80213BE0 00210B20  90 01 00 60 */	stw r0, 0x60(r1)
/* 80213BE4 00210B24  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80213BE8 00210B28  80 1C 00 CC */	lwz r0, 0xcc(r28)
/* 80213BEC 00210B2C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80213BF0 00210B30  48 21 8D E1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213BF4 00210B34  3B C0 00 00 */	li r30, 0
.L_80213BF8:
/* 80213BF8 00210B38  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213BFC 00210B3C  7F C4 F3 78 */	mr r4, r30
/* 80213C00 00210B40  4B FD 34 D9 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 80213C04 00210B44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213C08 00210B48  41 82 00 20 */	beq .L_80213C28
/* 80213C0C 00210B4C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80213C10 00210B50  7F C4 F3 78 */	mr r4, r30
/* 80213C14 00210B54  4B F6 7E 89 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 80213C18 00210B58  28 03 00 00 */	cmplwi r3, 0
/* 80213C1C 00210B5C  41 82 00 0C */	beq .L_80213C28
/* 80213C20 00210B60  38 80 00 03 */	li r4, 3
/* 80213C24 00210B64  4B F6 36 59 */	bl setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
.L_80213C28:
/* 80213C28 00210B68  3B DE 00 01 */	addi r30, r30, 1
/* 80213C2C 00210B6C  2C 1E 00 03 */	cmpwi r30, 3
/* 80213C30 00210B70  41 80 FF C8 */	blt .L_80213BF8
/* 80213C34 00210B74  28 1D 00 01 */	cmplwi r29, 1
/* 80213C38 00210B78  40 82 00 30 */	bne .L_80213C68
/* 80213C3C 00210B7C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213C40 00210B80  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80213C44 00210B84  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213C48 00210B88  C0 24 00 68 */	lfs f1, 0x68(r4)
/* 80213C4C 00210B8C  4B F1 34 55 */	bl setTime__Q24Game7TimeMgrFf
/* 80213C50 00210B90  48 00 00 18 */	b .L_80213C68
.L_80213C54:
/* 80213C54 00210B94  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80213C58 00210B98  38 BF 00 D0 */	addi r5, r31, 0xd0
/* 80213C5C 00210B9C  38 80 03 40 */	li r4, 0x340
/* 80213C60 00210BA0  4C C6 31 82 */	crclr 6
/* 80213C64 00210BA4  4B E1 69 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213C68:
/* 80213C68 00210BA8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80213C6C 00210BAC  38 80 00 01 */	li r4, 1
/* 80213C70 00210BB0  48 20 F6 F9 */	bl heapStatusDump__6SystemFb
/* 80213C74 00210BB4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213C78 00210BB8  28 1D 00 03 */	cmplwi r29, 3
/* 80213C7C 00210BBC  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80213C80 00210BC0  80 03 02 40 */	lwz r0, 0x240(r3)
/* 80213C84 00210BC4  54 00 00 3C */	rlwinm r0, r0, 0, 0, 0x1e
/* 80213C88 00210BC8  90 03 02 40 */	stw r0, 0x240(r3)
/* 80213C8C 00210BCC  41 82 00 68 */	beq .L_80213CF4
/* 80213C90 00210BD0  3B A0 00 00 */	li r29, 0
/* 80213C94 00210BD4  3B C0 00 00 */	li r30, 0
.L_80213C98:
/* 80213C98 00210BD8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213C9C 00210BDC  7F C4 F3 78 */	mr r4, r30
/* 80213CA0 00210BE0  4B FD 33 81 */	bl hasContainer__Q24Game8PlayDataFi
/* 80213CA4 00210BE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213CA8 00210BE8  41 82 00 2C */	beq .L_80213CD4
/* 80213CAC 00210BEC  7F C3 F3 78 */	mr r3, r30
/* 80213CB0 00210BF0  4B FB D2 8D */	bl getAllPikmins__Q24Game8GameStatFi
/* 80213CB4 00210BF4  2C 03 00 00 */	cmpwi r3, 0
/* 80213CB8 00210BF8  40 82 00 1C */	bne .L_80213CD4
/* 80213CBC 00210BFC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213CC0 00210C00  7F C4 F3 78 */	mr r4, r30
/* 80213CC4 00210C04  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80213CC8 00210C08  4B FD D8 E9 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80213CCC 00210C0C  3B A0 00 01 */	li r29, 1
/* 80213CD0 00210C10  48 00 00 10 */	b .L_80213CE0
.L_80213CD4:
/* 80213CD4 00210C14  3B DE 00 01 */	addi r30, r30, 1
/* 80213CD8 00210C18  2C 1E 00 02 */	cmpwi r30, 2
/* 80213CDC 00210C1C  40 81 FF BC */	ble .L_80213C98
.L_80213CE0:
/* 80213CE0 00210C20  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80213CE4 00210C24  41 82 00 18 */	beq .L_80213CFC
/* 80213CE8 00210C28  38 00 00 01 */	li r0, 1
/* 80213CEC 00210C2C  98 1B 00 10 */	stb r0, 0x10(r27)
/* 80213CF0 00210C30  48 00 00 0C */	b .L_80213CFC
.L_80213CF4:
/* 80213CF4 00210C34  38 00 00 00 */	li r0, 0
/* 80213CF8 00210C38  98 1B 00 10 */	stb r0, 0x10(r27)
.L_80213CFC:
/* 80213CFC 00210C3C  38 00 00 00 */	li r0, 0
/* 80213D00 00210C40  C0 02 BC 4C */	lfs f0, lbl_80519FAC@sda21(r2)
/* 80213D04 00210C44  98 1B 00 11 */	stb r0, 0x11(r27)
/* 80213D08 00210C48  7F 83 E3 78 */	mr r3, r28
/* 80213D0C 00210C4C  D0 1B 00 14 */	stfs f0, 0x14(r27)
/* 80213D10 00210C50  4B F4 02 89 */	bl clearCaveMenus__Q24Game17SingleGameSectionFv
/* 80213D14 00210C54  38 00 00 00 */	li r0, 0
/* 80213D18 00210C58  98 1B 00 18 */	stb r0, 0x18(r27)
/* 80213D1C 00210C5C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213D20 00210C60  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80213D24 00210C64  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80213D28 00210C68  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80213D2C 00210C6C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80213D30 00210C70  48 1E 82 DD */	bl initInCourse__Q26Screen9Game2DMgrFv
/* 80213D34 00210C74  38 00 00 00 */	li r0, 0
/* 80213D38 00210C78  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80213D3C 00210C7C  98 1C 02 3D */	stb r0, 0x23d(r28)
/* 80213D40 00210C80  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 80213D44 00210C84  C0 22 BC 50 */	lfs f1, lbl_80519FB0@sda21(r2)
/* 80213D48 00210C88  38 A1 00 10 */	addi r5, r1, 0x10
/* 80213D4C 00210C8C  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80213D50 00210C90  38 C1 00 0C */	addi r6, r1, 0xc
/* 80213D54 00210C94  48 00 AA 21 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80213D58 00210C98  2C 03 00 00 */	cmpwi r3, 0
/* 80213D5C 00210C9C  40 82 00 10 */	bne .L_80213D6C
/* 80213D60 00210CA0  38 00 00 01 */	li r0, 1
/* 80213D64 00210CA4  98 1C 02 3E */	stb r0, 0x23e(r28)
/* 80213D68 00210CA8  48 00 00 0C */	b .L_80213D74
.L_80213D6C:
/* 80213D6C 00210CAC  38 00 00 00 */	li r0, 0
/* 80213D70 00210CB0  98 1C 02 3E */	stb r0, 0x23e(r28)
.L_80213D74:
/* 80213D74 00210CB4  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 80213D78 00210CB8  28 00 00 00 */	cmplwi r0, 0
/* 80213D7C 00210CBC  41 82 00 CC */	beq .L_80213E48
/* 80213D80 00210CC0  48 00 A8 B1 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 80213D84 00210CC4  2C 03 00 00 */	cmpwi r3, 0
/* 80213D88 00210CC8  40 82 00 C0 */	bne .L_80213E48
/* 80213D8C 00210CCC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80213D90 00210CD0  28 00 00 00 */	cmplwi r0, 0
/* 80213D94 00210CD4  40 82 00 18 */	bne .L_80213DAC
/* 80213D98 00210CD8  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80213D9C 00210CDC  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213DA0 00210CE0  38 80 01 D3 */	li r4, 0x1d3
/* 80213DA4 00210CE4  4C C6 31 82 */	crclr 6
/* 80213DA8 00210CE8  4B E1 68 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213DAC:
/* 80213DAC 00210CEC  83 6D 98 80 */	lwz r27, spSceneMgr__8PSSystem@sda21(r13)
/* 80213DB0 00210CF0  28 1B 00 00 */	cmplwi r27, 0
/* 80213DB4 00210CF4  40 82 00 18 */	bne .L_80213DCC
/* 80213DB8 00210CF8  38 7F 00 F0 */	addi r3, r31, 0xf0
/* 80213DBC 00210CFC  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213DC0 00210D00  38 80 01 DC */	li r4, 0x1dc
/* 80213DC4 00210D04  4C C6 31 82 */	crclr 6
/* 80213DC8 00210D08  4B E1 68 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213DCC:
/* 80213DCC 00210D0C  80 1B 00 04 */	lwz r0, 4(r27)
/* 80213DD0 00210D10  28 00 00 00 */	cmplwi r0, 0
/* 80213DD4 00210D14  40 82 00 18 */	bne .L_80213DEC
/* 80213DD8 00210D18  38 7F 00 FC */	addi r3, r31, 0xfc
/* 80213DDC 00210D1C  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213DE0 00210D20  38 80 00 CF */	li r4, 0xcf
/* 80213DE4 00210D24  4C C6 31 82 */	crclr 6
/* 80213DE8 00210D28  4B E1 68 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213DEC:
/* 80213DEC 00210D2C  80 7B 00 04 */	lwz r3, 4(r27)
/* 80213DF0 00210D30  83 63 00 04 */	lwz r27, 4(r3)
/* 80213DF4 00210D34  28 1B 00 00 */	cmplwi r27, 0
/* 80213DF8 00210D38  40 82 00 18 */	bne .L_80213E10
/* 80213DFC 00210D3C  38 7F 00 FC */	addi r3, r31, 0xfc
/* 80213E00 00210D40  38 BF 01 08 */	addi r5, r31, 0x108
/* 80213E04 00210D44  38 80 00 D1 */	li r4, 0xd1
/* 80213E08 00210D48  4C C6 31 82 */	crclr 6
/* 80213E0C 00210D4C  4B E1 68 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213E10:
/* 80213E10 00210D50  81 9B 00 00 */	lwz r12, 0(r27)
/* 80213E14 00210D54  7F 63 DB 78 */	mr r3, r27
/* 80213E18 00210D58  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80213E1C 00210D5C  7D 89 03 A6 */	mtctr r12
/* 80213E20 00210D60  4E 80 04 21 */	bctrl 
/* 80213E24 00210D64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213E28 00210D68  40 82 00 18 */	bne .L_80213E40
/* 80213E2C 00210D6C  38 7F 01 2C */	addi r3, r31, 0x12c
/* 80213E30 00210D70  38 BF 00 94 */	addi r5, r31, 0x94
/* 80213E34 00210D74  38 80 01 77 */	li r4, 0x177
/* 80213E38 00210D78  4C C6 31 82 */	crclr 6
/* 80213E3C 00210D7C  4B E1 68 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80213E40:
/* 80213E40 00210D80  7F 63 DB 78 */	mr r3, r27
/* 80213E44 00210D84  48 25 5C C5 */	bl setPollutUp__Q23PSM12Scene_GroundFv
.L_80213E48:
/* 80213E48 00210D88  BB 61 01 2C */	lmw r27, 0x12c(r1)
/* 80213E4C 00210D8C  80 01 01 44 */	lwz r0, 0x144(r1)
/* 80213E50 00210D90  7C 08 03 A6 */	mtlr r0
/* 80213E54 00210D94  38 21 01 40 */	addi r1, r1, 0x140
/* 80213E58 00210D98  4E 80 00 20 */	blr 
.endif

.if version == 1
.global check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection:
/* 80213E5C 00210D9C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80213E60 00210DA0  7C 08 02 A6 */	mflr r0
/* 80213E64 00210DA4  3C A0 80 48 */	lis r5, lbl_80482150@ha
/* 80213E68 00210DA8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80213E6C 00210DAC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80213E70 00210DB0  7C 9F 23 78 */	mr r31, r4
/* 80213E74 00210DB4  38 80 00 0D */	li r4, 0xd
/* 80213E78 00210DB8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80213E7C 00210DBC  3B C5 21 50 */	addi r30, r5, lbl_80482150@l
/* 80213E80 00210DC0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213E84 00210DC4  4B FD 35 5D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80213E88 00210DC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213E8C 00210DCC  40 82 00 A0 */	bne .L_80213F2C
/* 80213E90 00210DD0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213E94 00210DD4  38 80 00 03 */	li r4, 3
/* 80213E98 00210DD8  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80213E9C 00210DDC  4B FD D7 15 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80213EA0 00210DE0  2C 03 00 00 */	cmpwi r3, 0
/* 80213EA4 00210DE4  40 81 00 88 */	ble .L_80213F2C
/* 80213EA8 00210DE8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213EAC 00210DEC  38 80 00 0D */	li r4, 0xd
/* 80213EB0 00210DF0  4B FD 34 F5 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80213EB4 00210DF4  80 9F 02 2C */	lwz r4, 0x250(r31)
/* 80213EB8 00210DF8  38 7E 01 40 */	addi r3, r30, 0x140
/* 80213EBC 00210DFC  80 BF 00 C8 */	lwz r5, 0xe8(r31)
/* 80213EC0 00210E00  38 00 00 00 */	li r0, 0
/* 80213EC4 00210E04  80 84 00 14 */	lwz r4, 0x14(r4)
/* 80213EC8 00210E08  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213ECC 00210E0C  90 61 00 70 */	stw r3, 0x70(r1)
/* 80213ED0 00210E10  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80213ED4 00210E14  90 81 00 74 */	stw r4, 0x74(r1)
/* 80213ED8 00210E18  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 80213EDC 00210E1C  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 80213EE0 00210E20  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 80213EE4 00210E24  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 80213EE8 00210E28  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80213EEC 00210E2C  90 01 00 98 */	stw r0, 0x98(r1)
/* 80213EF0 00210E30  90 01 00 80 */	stw r0, 0x80(r1)
/* 80213EF4 00210E34  90 01 00 78 */	stw r0, 0x78(r1)
/* 80213EF8 00210E38  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80213EFC 00210E3C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80213F00 00210E40  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80213F04 00210E44  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 80213F08 00210E48  28 03 00 00 */	cmplwi r3, 0
/* 80213F0C 00210E4C  41 82 00 0C */	beq .L_80213F18
/* 80213F10 00210E50  38 80 00 00 */	li r4, 0
/* 80213F14 00210E54  4B F2 7B 3D */	bl movie_begin__Q24Game8CreatureFb
.L_80213F18:
/* 80213F18 00210E58  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213F1C 00210E5C  38 81 00 70 */	addi r4, r1, 0x70
/* 80213F20 00210E60  48 21 8A B1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213F24 00210E64  38 60 00 01 */	li r3, 1
/* 80213F28 00210E68  48 00 01 A4 */	b .L_802140CC
.L_80213F2C:
/* 80213F2C 00210E6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213F30 00210E70  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80213F34 00210E74  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80213F38 00210E78  41 82 00 B4 */	beq .L_80213FEC
/* 80213F3C 00210E7C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213F40 00210E80  38 80 00 0E */	li r4, 0xe
/* 80213F44 00210E84  4B FD 34 9D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80213F48 00210E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213F4C 00210E8C  40 82 00 A0 */	bne .L_80213FEC
/* 80213F50 00210E90  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213F54 00210E94  38 80 00 04 */	li r4, 4
/* 80213F58 00210E98  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80213F5C 00210E9C  4B FD D6 55 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80213F60 00210EA0  2C 03 00 00 */	cmpwi r3, 0
/* 80213F64 00210EA4  40 81 00 88 */	ble .L_80213FEC
/* 80213F68 00210EA8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213F6C 00210EAC  38 80 00 0E */	li r4, 0xe
/* 80213F70 00210EB0  4B FD 34 35 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80213F74 00210EB4  80 9F 02 2C */	lwz r4, 0x250(r31)
/* 80213F78 00210EB8  38 7E 01 50 */	addi r3, r30, 0x150
/* 80213F7C 00210EBC  80 BF 00 C8 */	lwz r5, 0xe8(r31)
/* 80213F80 00210EC0  38 00 00 00 */	li r0, 0
/* 80213F84 00210EC4  80 84 00 14 */	lwz r4, 0x14(r4)
/* 80213F88 00210EC8  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213F8C 00210ECC  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80213F90 00210ED0  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80213F94 00210ED4  90 81 00 40 */	stw r4, 0x40(r1)
/* 80213F98 00210ED8  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80213F9C 00210EDC  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80213FA0 00210EE0  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80213FA4 00210EE4  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80213FA8 00210EE8  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80213FAC 00210EEC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80213FB0 00210EF0  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80213FB4 00210EF4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80213FB8 00210EF8  90 01 00 68 */	stw r0, 0x68(r1)
/* 80213FBC 00210EFC  90 01 00 50 */	stw r0, 0x50(r1)
/* 80213FC0 00210F00  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80213FC4 00210F04  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 80213FC8 00210F08  28 03 00 00 */	cmplwi r3, 0
/* 80213FCC 00210F0C  41 82 00 0C */	beq .L_80213FD8
/* 80213FD0 00210F10  38 80 00 00 */	li r4, 0
/* 80213FD4 00210F14  4B F2 7A 7D */	bl movie_begin__Q24Game8CreatureFb
.L_80213FD8:
/* 80213FD8 00210F18  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213FDC 00210F1C  38 81 00 3C */	addi r4, r1, 0x3c
/* 80213FE0 00210F20  48 21 89 F1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213FE4 00210F24  38 60 00 01 */	li r3, 1
/* 80213FE8 00210F28  48 00 00 E4 */	b .L_802140CC
.L_80213FEC:
/* 80213FEC 00210F2C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213FF0 00210F30  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80213FF4 00210F34  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80213FF8 00210F38  41 82 00 D0 */	beq .L_802140C8
/* 80213FFC 00210F3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214000 00210F40  38 80 00 0F */	li r4, 0xf
/* 80214004 00210F44  4B FD 33 DD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80214008 00210F48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021400C 00210F4C  40 82 00 BC */	bne .L_802140C8
/* 80214010 00210F50  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214014 00210F54  38 80 00 01 */	li r4, 1
/* 80214018 00210F58  38 63 00 A8 */	addi r3, r3, 0xa8
/* 8021401C 00210F5C  4B FD D5 95 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80214020 00210F60  2C 03 00 00 */	cmpwi r3, 0
/* 80214024 00210F64  40 81 00 A4 */	ble .L_802140C8
/* 80214028 00210F68  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021402C 00210F6C  38 80 00 0F */	li r4, 0xf
/* 80214030 00210F70  4B FD 33 75 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214034 00210F74  80 9F 02 2C */	lwz r4, 0x250(r31)
/* 80214038 00210F78  38 7E 01 60 */	addi r3, r30, 0x160
/* 8021403C 00210F7C  80 BF 00 C8 */	lwz r5, 0xe8(r31)
/* 80214040 00210F80  38 00 00 00 */	li r0, 0
/* 80214044 00210F84  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80214048 00210F88  38 80 00 01 */	li r4, 1
/* 8021404C 00210F8C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214050 00210F90  90 61 00 08 */	stw r3, 8(r1)
/* 80214054 00210F94  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80214058 00210F98  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8021405C 00210F9C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80214060 00210FA0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80214064 00210FA4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80214068 00210FA8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8021406C 00210FAC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80214070 00210FB0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80214074 00210FB4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80214078 00210FB8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8021407C 00210FBC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80214080 00210FC0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80214084 00210FC4  90 01 00 38 */	stw r0, 0x38(r1)
/* 80214088 00210FC8  4B F6 7A 15 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8021408C 00210FCC  28 03 00 00 */	cmplwi r3, 0
/* 80214090 00210FD0  41 82 00 0C */	beq .L_8021409C
/* 80214094 00210FD4  38 80 00 00 */	li r4, 0
/* 80214098 00210FD8  4B F2 79 B9 */	bl movie_begin__Q24Game8CreatureFb
.L_8021409C:
/* 8021409C 00210FDC  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 802140A0 00210FE0  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 802140A4 00210FE4  28 03 00 00 */	cmplwi r3, 0
/* 802140A8 00210FE8  41 82 00 0C */	beq .L_802140B4
/* 802140AC 00210FEC  38 80 00 00 */	li r4, 0
/* 802140B0 00210FF0  4B F2 79 A1 */	bl movie_begin__Q24Game8CreatureFb
.L_802140B4:
/* 802140B4 00210FF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802140B8 00210FF8  38 81 00 08 */	addi r4, r1, 8
/* 802140BC 00210FFC  48 21 89 15 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802140C0 00211000  38 60 00 01 */	li r3, 1
/* 802140C4 00211004  48 00 00 08 */	b .L_802140CC
.L_802140C8:
/* 802140C8 00211008  38 60 00 00 */	li r3, 0
.L_802140CC:
/* 802140CC 0021100C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802140D0 00211010  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 802140D4 00211014  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 802140D8 00211018  7C 08 03 A6 */	mtlr r0
/* 802140DC 0021101C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 802140E0 00211020  4E 80 00 20 */	blr 
.else
.global check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection:
/* 80213E5C 00210D9C  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80213E60 00210DA0  7C 08 02 A6 */	mflr r0
/* 80213E64 00210DA4  3C A0 80 48 */	lis r5, lbl_80482150@ha
/* 80213E68 00210DA8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80213E6C 00210DAC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80213E70 00210DB0  7C 9F 23 78 */	mr r31, r4
/* 80213E74 00210DB4  38 80 00 0D */	li r4, 0xd
/* 80213E78 00210DB8  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80213E7C 00210DBC  3B C5 21 50 */	addi r30, r5, lbl_80482150@l
/* 80213E80 00210DC0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213E84 00210DC4  4B FD 35 5D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80213E88 00210DC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213E8C 00210DCC  40 82 00 A0 */	bne .L_80213F2C
/* 80213E90 00210DD0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213E94 00210DD4  38 80 00 03 */	li r4, 3
/* 80213E98 00210DD8  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80213E9C 00210DDC  4B FD D7 15 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80213EA0 00210DE0  2C 03 00 00 */	cmpwi r3, 0
/* 80213EA4 00210DE4  40 81 00 88 */	ble .L_80213F2C
/* 80213EA8 00210DE8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213EAC 00210DEC  38 80 00 0D */	li r4, 0xd
/* 80213EB0 00210DF0  4B FD 34 F5 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80213EB4 00210DF4  80 9F 02 2C */	lwz r4, 0x22c(r31)
/* 80213EB8 00210DF8  38 7E 01 40 */	addi r3, r30, 0x140
/* 80213EBC 00210DFC  80 BF 00 C8 */	lwz r5, 0xc8(r31)
/* 80213EC0 00210E00  38 00 00 00 */	li r0, 0
/* 80213EC4 00210E04  80 84 00 14 */	lwz r4, 0x14(r4)
/* 80213EC8 00210E08  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213ECC 00210E0C  90 61 00 70 */	stw r3, 0x70(r1)
/* 80213ED0 00210E10  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80213ED4 00210E14  90 81 00 74 */	stw r4, 0x74(r1)
/* 80213ED8 00210E18  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 80213EDC 00210E1C  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 80213EE0 00210E20  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 80213EE4 00210E24  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 80213EE8 00210E28  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80213EEC 00210E2C  90 01 00 98 */	stw r0, 0x98(r1)
/* 80213EF0 00210E30  90 01 00 80 */	stw r0, 0x80(r1)
/* 80213EF4 00210E34  90 01 00 78 */	stw r0, 0x78(r1)
/* 80213EF8 00210E38  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80213EFC 00210E3C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80213F00 00210E40  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80213F04 00210E44  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 80213F08 00210E48  28 03 00 00 */	cmplwi r3, 0
/* 80213F0C 00210E4C  41 82 00 0C */	beq .L_80213F18
/* 80213F10 00210E50  38 80 00 00 */	li r4, 0
/* 80213F14 00210E54  4B F2 7B 3D */	bl movie_begin__Q24Game8CreatureFb
.L_80213F18:
/* 80213F18 00210E58  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213F1C 00210E5C  38 81 00 70 */	addi r4, r1, 0x70
/* 80213F20 00210E60  48 21 8A B1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213F24 00210E64  38 60 00 01 */	li r3, 1
/* 80213F28 00210E68  48 00 01 A4 */	b .L_802140CC
.L_80213F2C:
/* 80213F2C 00210E6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213F30 00210E70  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80213F34 00210E74  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80213F38 00210E78  41 82 00 B4 */	beq .L_80213FEC
/* 80213F3C 00210E7C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213F40 00210E80  38 80 00 0E */	li r4, 0xe
/* 80213F44 00210E84  4B FD 34 9D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80213F48 00210E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80213F4C 00210E8C  40 82 00 A0 */	bne .L_80213FEC
/* 80213F50 00210E90  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213F54 00210E94  38 80 00 04 */	li r4, 4
/* 80213F58 00210E98  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80213F5C 00210E9C  4B FD D6 55 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80213F60 00210EA0  2C 03 00 00 */	cmpwi r3, 0
/* 80213F64 00210EA4  40 81 00 88 */	ble .L_80213FEC
/* 80213F68 00210EA8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80213F6C 00210EAC  38 80 00 0E */	li r4, 0xe
/* 80213F70 00210EB0  4B FD 34 35 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80213F74 00210EB4  80 9F 02 2C */	lwz r4, 0x22c(r31)
/* 80213F78 00210EB8  38 7E 01 50 */	addi r3, r30, 0x150
/* 80213F7C 00210EBC  80 BF 00 C8 */	lwz r5, 0xc8(r31)
/* 80213F80 00210EC0  38 00 00 00 */	li r0, 0
/* 80213F84 00210EC4  80 84 00 14 */	lwz r4, 0x14(r4)
/* 80213F88 00210EC8  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80213F8C 00210ECC  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80213F90 00210ED0  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80213F94 00210ED4  90 81 00 40 */	stw r4, 0x40(r1)
/* 80213F98 00210ED8  90 A1 00 48 */	stw r5, 0x48(r1)
/* 80213F9C 00210EDC  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80213FA0 00210EE0  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80213FA4 00210EE4  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80213FA8 00210EE8  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80213FAC 00210EEC  90 01 00 64 */	stw r0, 0x64(r1)
/* 80213FB0 00210EF0  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80213FB4 00210EF4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80213FB8 00210EF8  90 01 00 68 */	stw r0, 0x68(r1)
/* 80213FBC 00210EFC  90 01 00 50 */	stw r0, 0x50(r1)
/* 80213FC0 00210F00  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80213FC4 00210F04  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 80213FC8 00210F08  28 03 00 00 */	cmplwi r3, 0
/* 80213FCC 00210F0C  41 82 00 0C */	beq .L_80213FD8
/* 80213FD0 00210F10  38 80 00 00 */	li r4, 0
/* 80213FD4 00210F14  4B F2 7A 7D */	bl movie_begin__Q24Game8CreatureFb
.L_80213FD8:
/* 80213FD8 00210F18  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80213FDC 00210F1C  38 81 00 3C */	addi r4, r1, 0x3c
/* 80213FE0 00210F20  48 21 89 F1 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80213FE4 00210F24  38 60 00 01 */	li r3, 1
/* 80213FE8 00210F28  48 00 00 E4 */	b .L_802140CC
.L_80213FEC:
/* 80213FEC 00210F2C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80213FF0 00210F30  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80213FF4 00210F34  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80213FF8 00210F38  41 82 00 D0 */	beq .L_802140C8
/* 80213FFC 00210F3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214000 00210F40  38 80 00 0F */	li r4, 0xf
/* 80214004 00210F44  4B FD 33 DD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80214008 00210F48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021400C 00210F4C  40 82 00 BC */	bne .L_802140C8
/* 80214010 00210F50  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214014 00210F54  38 80 00 01 */	li r4, 1
/* 80214018 00210F58  38 63 00 A8 */	addi r3, r3, 0xa8
/* 8021401C 00210F5C  4B FD D5 95 */	bl getColorSum__Q24Game13PikiContainerFi
/* 80214020 00210F60  2C 03 00 00 */	cmpwi r3, 0
/* 80214024 00210F64  40 81 00 A4 */	ble .L_802140C8
/* 80214028 00210F68  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021402C 00210F6C  38 80 00 0F */	li r4, 0xf
/* 80214030 00210F70  4B FD 33 75 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214034 00210F74  80 9F 02 2C */	lwz r4, 0x22c(r31)
/* 80214038 00210F78  38 7E 01 60 */	addi r3, r30, 0x160
/* 8021403C 00210F7C  80 BF 00 C8 */	lwz r5, 0xc8(r31)
/* 80214040 00210F80  38 00 00 00 */	li r0, 0
/* 80214044 00210F84  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80214048 00210F88  38 80 00 01 */	li r4, 1
/* 8021404C 00210F8C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214050 00210F90  90 61 00 08 */	stw r3, 8(r1)
/* 80214054 00210F94  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80214058 00210F98  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8021405C 00210F9C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80214060 00210FA0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80214064 00210FA4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80214068 00210FA8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8021406C 00210FAC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80214070 00210FB0  90 01 00 30 */	stw r0, 0x30(r1)
/* 80214074 00210FB4  90 01 00 18 */	stw r0, 0x18(r1)
/* 80214078 00210FB8  90 01 00 10 */	stw r0, 0x10(r1)
/* 8021407C 00210FBC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80214080 00210FC0  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80214084 00210FC4  90 01 00 38 */	stw r0, 0x38(r1)
/* 80214088 00210FC8  4B F6 7A 15 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8021408C 00210FCC  28 03 00 00 */	cmplwi r3, 0
/* 80214090 00210FD0  41 82 00 0C */	beq .L_8021409C
/* 80214094 00210FD4  38 80 00 00 */	li r4, 0
/* 80214098 00210FD8  4B F2 79 B9 */	bl movie_begin__Q24Game8CreatureFb
.L_8021409C:
/* 8021409C 00210FDC  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 802140A0 00210FE0  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 802140A4 00210FE4  28 03 00 00 */	cmplwi r3, 0
/* 802140A8 00210FE8  41 82 00 0C */	beq .L_802140B4
/* 802140AC 00210FEC  38 80 00 00 */	li r4, 0
/* 802140B0 00210FF0  4B F2 79 A1 */	bl movie_begin__Q24Game8CreatureFb
.L_802140B4:
/* 802140B4 00210FF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802140B8 00210FF8  38 81 00 08 */	addi r4, r1, 8
/* 802140BC 00210FFC  48 21 89 15 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802140C0 00211000  38 60 00 01 */	li r3, 1
/* 802140C4 00211004  48 00 00 08 */	b .L_802140CC
.L_802140C8:
/* 802140C8 00211008  38 60 00 00 */	li r3, 0
.L_802140CC:
/* 802140CC 0021100C  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 802140D0 00211010  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 802140D4 00211014  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 802140D8 00211018  7C 08 03 A6 */	mtlr r0
/* 802140DC 0021101C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 802140E0 00211020  4E 80 00 20 */	blr 
.endif

.global on_section_fadeout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
on_section_fadeout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection:
/* 802140E4 00211024  38 00 00 01 */	li r0, 1
/* 802140E8 00211028  98 03 00 18 */	stb r0, 0x18(r3)
/* 802140EC 0021102C  4E 80 00 20 */	blr 

.if version == 1
.global on_demo_timer__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionUl
on_demo_timer__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionUl:
/* 802140F0 00211030  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 802140F4 00211034  7C 08 02 A6 */	mflr r0
/* 802140F8 00211038  3C 60 80 48 */	lis r3, lbl_80482150@ha
/* 802140FC 0021103C  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80214100 00211040  93 E1 01 CC */	stw r31, 0x1cc(r1)
/* 80214104 00211044  3B E3 21 50 */	addi r31, r3, lbl_80482150@l
/* 80214108 00211048  93 C1 01 C8 */	stw r30, 0x1c8(r1)
/* 8021410C 0021104C  7C 9E 23 78 */	mr r30, r4
/* 80214110 00211050  93 A1 01 C4 */	stw r29, 0x1c4(r1)
/* 80214114 00211054  7C BD 2B 78 */	mr r29, r5
/* 80214118 00211058  28 1D 00 07 */	cmplwi r29, 7
/* 8021411C 0021105C  93 81 01 C0 */	stw r28, 0x1c0(r1)
/* 80214120 00211060  40 82 02 B4 */	bne .L_802143D4
/* 80214124 00211064  80 6D 94 E0 */	lwz r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
/* 80214128 00211068  3B 80 00 00 */	li r28, 0
/* 8021412C 0021106C  28 03 00 00 */	cmplwi r3, 0
/* 80214130 00211070  41 82 00 08 */	beq .L_80214138
/* 80214134 00211074  38 63 00 30 */	addi r3, r3, 0x30
.L_80214138:
/* 80214138 00211078  38 00 00 00 */	li r0, 0
/* 8021413C 0021107C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80214140 00211080  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 80214144 00211084  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80214148 00211088  28 00 00 00 */	cmplwi r0, 0
/* 8021414C 0021108C  90 81 00 70 */	stw r4, 0x70(r1)
/* 80214150 00211090  90 01 00 74 */	stw r0, 0x74(r1)
/* 80214154 00211094  90 61 00 78 */	stw r3, 0x78(r1)
/* 80214158 00211098  40 82 00 1C */	bne .L_80214174
/* 8021415C 0021109C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214160 002110A0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214164 002110A4  7D 89 03 A6 */	mtctr r12
/* 80214168 002110A8  4E 80 04 21 */	bctrl 
/* 8021416C 002110AC  90 61 00 74 */	stw r3, 0x74(r1)
/* 80214170 002110B0  48 00 01 70 */	b .L_802142E0
.L_80214174:
/* 80214174 002110B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80214178 002110B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021417C 002110BC  7D 89 03 A6 */	mtctr r12
/* 80214180 002110C0  4E 80 04 21 */	bctrl 
/* 80214184 002110C4  90 61 00 74 */	stw r3, 0x74(r1)
/* 80214188 002110C8  48 00 00 58 */	b .L_802141E0
.L_8021418C:
/* 8021418C 002110CC  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214190 002110D0  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214194 002110D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80214198 002110D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021419C 002110DC  7D 89 03 A6 */	mtctr r12
/* 802141A0 002110E0  4E 80 04 21 */	bctrl 
/* 802141A4 002110E4  7C 64 1B 78 */	mr r4, r3
/* 802141A8 002110E8  80 61 00 7C */	lwz r3, 0x7c(r1)
/* 802141AC 002110EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802141B0 002110F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802141B4 002110F4  7D 89 03 A6 */	mtctr r12
/* 802141B8 002110F8  4E 80 04 21 */	bctrl 
/* 802141BC 002110FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802141C0 00211100  40 82 01 20 */	bne .L_802142E0
/* 802141C4 00211104  80 61 00 78 */	lwz r3, 0x78(r1)
/* 802141C8 00211108  80 81 00 74 */	lwz r4, 0x74(r1)
/* 802141CC 0021110C  81 83 00 00 */	lwz r12, 0(r3)
/* 802141D0 00211110  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802141D4 00211114  7D 89 03 A6 */	mtctr r12
/* 802141D8 00211118  4E 80 04 21 */	bctrl 
/* 802141DC 0021111C  90 61 00 74 */	stw r3, 0x74(r1)
.L_802141E0:
/* 802141E0 00211120  81 81 00 70 */	lwz r12, 0x70(r1)
/* 802141E4 00211124  38 61 00 70 */	addi r3, r1, 0x70
/* 802141E8 00211128  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802141EC 0021112C  7D 89 03 A6 */	mtctr r12
/* 802141F0 00211130  4E 80 04 21 */	bctrl 
/* 802141F4 00211134  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802141F8 00211138  41 82 FF 94 */	beq .L_8021418C
/* 802141FC 0021113C  48 00 00 E4 */	b .L_802142E0
.L_80214200:
/* 80214200 00211140  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214204 00211144  81 83 00 00 */	lwz r12, 0(r3)
/* 80214208 00211148  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021420C 0021114C  7D 89 03 A6 */	mtctr r12
/* 80214210 00211150  4E 80 04 21 */	bctrl 
/* 80214214 00211154  80 03 01 E8 */	lwz r0, 0x1e8(r3)
/* 80214218 00211158  2C 00 00 0F */	cmpwi r0, 0xf
/* 8021421C 0021115C  40 82 00 08 */	bne .L_80214224
/* 80214220 00211160  7C 7C 1B 78 */	mr r28, r3
.L_80214224:
/* 80214224 00211164  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80214228 00211168  28 00 00 00 */	cmplwi r0, 0
/* 8021422C 0021116C  40 82 00 24 */	bne .L_80214250
/* 80214230 00211170  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214234 00211174  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214238 00211178  81 83 00 00 */	lwz r12, 0(r3)
/* 8021423C 0021117C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214240 00211180  7D 89 03 A6 */	mtctr r12
/* 80214244 00211184  4E 80 04 21 */	bctrl 
/* 80214248 00211188  90 61 00 74 */	stw r3, 0x74(r1)
/* 8021424C 0021118C  48 00 00 94 */	b .L_802142E0
.L_80214250:
/* 80214250 00211190  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214254 00211194  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214258 00211198  81 83 00 00 */	lwz r12, 0(r3)
/* 8021425C 0021119C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214260 002111A0  7D 89 03 A6 */	mtctr r12
/* 80214264 002111A4  4E 80 04 21 */	bctrl 
/* 80214268 002111A8  90 61 00 74 */	stw r3, 0x74(r1)
/* 8021426C 002111AC  48 00 00 58 */	b .L_802142C4
.L_80214270:
/* 80214270 002111B0  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214274 002111B4  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214278 002111B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021427C 002111BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214280 002111C0  7D 89 03 A6 */	mtctr r12
/* 80214284 002111C4  4E 80 04 21 */	bctrl 
/* 80214288 002111C8  7C 64 1B 78 */	mr r4, r3
/* 8021428C 002111CC  80 61 00 7C */	lwz r3, 0x7c(r1)
/* 80214290 002111D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214294 002111D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214298 002111D8  7D 89 03 A6 */	mtctr r12
/* 8021429C 002111DC  4E 80 04 21 */	bctrl 
/* 802142A0 002111E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802142A4 002111E4  40 82 00 3C */	bne .L_802142E0
/* 802142A8 002111E8  80 61 00 78 */	lwz r3, 0x78(r1)
/* 802142AC 002111EC  80 81 00 74 */	lwz r4, 0x74(r1)
/* 802142B0 002111F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802142B4 002111F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802142B8 002111F8  7D 89 03 A6 */	mtctr r12
/* 802142BC 002111FC  4E 80 04 21 */	bctrl 
/* 802142C0 00211200  90 61 00 74 */	stw r3, 0x74(r1)
.L_802142C4:
/* 802142C4 00211204  81 81 00 70 */	lwz r12, 0x70(r1)
/* 802142C8 00211208  38 61 00 70 */	addi r3, r1, 0x70
/* 802142CC 0021120C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802142D0 00211210  7D 89 03 A6 */	mtctr r12
/* 802142D4 00211214  4E 80 04 21 */	bctrl 
/* 802142D8 00211218  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802142DC 0021121C  41 82 FF 94 */	beq .L_80214270
.L_802142E0:
/* 802142E0 00211220  80 61 00 78 */	lwz r3, 0x78(r1)
/* 802142E4 00211224  81 83 00 00 */	lwz r12, 0(r3)
/* 802142E8 00211228  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802142EC 0021122C  7D 89 03 A6 */	mtctr r12
/* 802142F0 00211230  4E 80 04 21 */	bctrl 
/* 802142F4 00211234  80 81 00 74 */	lwz r4, 0x74(r1)
/* 802142F8 00211238  7C 04 18 40 */	cmplw r4, r3
/* 802142FC 0021123C  40 82 FF 04 */	bne .L_80214200
/* 80214300 00211240  28 1C 00 00 */	cmplwi r28, 0
/* 80214304 00211244  40 82 00 18 */	bne .L_8021431C
/* 80214308 00211248  38 7F 00 7C */	addi r3, r31, 0x7c
/* 8021430C 0021124C  38 BF 01 70 */	addi r5, r31, 0x170
/* 80214310 00211250  38 80 04 01 */	li r4, 0x401
/* 80214314 00211254  4C C6 31 82 */	crclr 6
/* 80214318 00211258  4B E1 63 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021431C:
/* 8021431C 0021125C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214320 00211260  38 00 00 00 */	li r0, 0
/* 80214324 00211264  38 BF 01 84 */	addi r5, r31, 0x184
/* 80214328 00211268  90 01 01 88 */	stw r0, 0x188(r1)
/* 8021432C 0021126C  7F 84 E3 78 */	mr r4, r28
/* 80214330 00211270  38 61 00 44 */	addi r3, r1, 0x44
/* 80214334 00211274  90 A1 01 84 */	stw r5, 0x184(r1)
/* 80214338 00211278  90 01 01 90 */	stw r0, 0x190(r1)
/* 8021433C 0021127C  D0 01 01 9C */	stfs f0, 0x19c(r1)
/* 80214340 00211280  D0 01 01 A0 */	stfs f0, 0x1a0(r1)
/* 80214344 00211284  D0 01 01 A4 */	stfs f0, 0x1a4(r1)
/* 80214348 00211288  D0 01 01 A8 */	stfs f0, 0x1a8(r1)
/* 8021434C 0021128C  90 01 01 AC */	stw r0, 0x1ac(r1)
/* 80214350 00211290  90 01 01 94 */	stw r0, 0x194(r1)
/* 80214354 00211294  90 01 01 8C */	stw r0, 0x18c(r1)
/* 80214358 00211298  90 01 01 B0 */	stw r0, 0x1b0(r1)
/* 8021435C 0021129C  90 01 01 98 */	stw r0, 0x198(r1)
/* 80214360 002112A0  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 80214364 002112A4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214368 002112A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021436C 002112AC  7D 89 03 A6 */	mtctr r12
/* 80214370 002112B0  4E 80 04 21 */	bctrl 
/* 80214374 002112B4  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 80214378 002112B8  7F 83 E3 78 */	mr r3, r28
/* 8021437C 002112BC  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 80214380 002112C0  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80214384 002112C4  D0 41 01 9C */	stfs f2, 0x19c(r1)
/* 80214388 002112C8  D0 21 01 A0 */	stfs f1, 0x1a0(r1)
/* 8021438C 002112CC  D0 01 01 A4 */	stfs f0, 0x1a4(r1)
/* 80214390 002112D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214394 002112D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214398 002112D8  7D 89 03 A6 */	mtctr r12
/* 8021439C 002112DC  4E 80 04 21 */	bctrl 
/* 802143A0 002112E0  D0 21 01 A8 */	stfs f1, 0x1a8(r1)
/* 802143A4 002112E4  38 81 01 84 */	addi r4, r1, 0x184
/* 802143A8 002112E8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802143AC 002112EC  93 83 01 94 */	stw r28, 0x194(r3)
/* 802143B0 002112F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802143B4 002112F4  48 21 86 1D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802143B8 002112F8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802143BC 002112FC  38 80 00 07 */	li r4, 7
/* 802143C0 00211300  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802143C4 00211304  81 83 00 00 */	lwz r12, 0(r3)
/* 802143C8 00211308  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802143CC 0021130C  7D 89 03 A6 */	mtctr r12
/* 802143D0 00211310  4E 80 04 21 */	bctrl 
.L_802143D4:
/* 802143D4 00211314  28 1D 00 05 */	cmplwi r29, 5
/* 802143D8 00211318  40 82 01 0C */	bne .L_802144E4
/* 802143DC 0021131C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802143E0 00211320  4B F4 68 41 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802143E4 00211324  7C 7C 1B 79 */	or. r28, r3, r3
/* 802143E8 00211328  40 82 00 38 */	bne .L_80214420
/* 802143EC 0021132C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802143F0 00211330  38 80 00 01 */	li r4, 1
/* 802143F4 00211334  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802143F8 00211338  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 802143FC 0021133C  2C 00 00 00 */	cmpwi r0, 0
/* 80214400 00211340  40 82 00 08 */	bne .L_80214408
/* 80214404 00211344  38 80 00 00 */	li r4, 0
.L_80214408:
/* 80214408 00211348  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021440C 0021134C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214410 00211350  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80214414 00211354  7D 89 03 A6 */	mtctr r12
/* 80214418 00211358  4E 80 04 21 */	bctrl 
/* 8021441C 0021135C  7C 7C 1B 78 */	mr r28, r3
.L_80214420:
/* 80214420 00211360  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214424 00211364  38 80 00 2E */	li r4, 0x2e
/* 80214428 00211368  4B FD 2F 7D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8021442C 0021136C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214430 00211370  38 00 00 00 */	li r0, 0
/* 80214434 00211374  38 BF 01 94 */	addi r5, r31, 0x194
/* 80214438 00211378  90 01 01 54 */	stw r0, 0x154(r1)
/* 8021443C 0021137C  7F 84 E3 78 */	mr r4, r28
/* 80214440 00211380  38 61 00 38 */	addi r3, r1, 0x38
/* 80214444 00211384  90 A1 01 50 */	stw r5, 0x150(r1)
/* 80214448 00211388  90 01 01 5C */	stw r0, 0x15c(r1)
/* 8021444C 0021138C  D0 01 01 68 */	stfs f0, 0x168(r1)
/* 80214450 00211390  D0 01 01 6C */	stfs f0, 0x16c(r1)
/* 80214454 00211394  D0 01 01 70 */	stfs f0, 0x170(r1)
/* 80214458 00211398  D0 01 01 74 */	stfs f0, 0x174(r1)
/* 8021445C 0021139C  90 01 01 78 */	stw r0, 0x178(r1)
/* 80214460 002113A0  90 01 01 60 */	stw r0, 0x160(r1)
/* 80214464 002113A4  90 01 01 58 */	stw r0, 0x158(r1)
/* 80214468 002113A8  90 01 01 7C */	stw r0, 0x17c(r1)
/* 8021446C 002113AC  90 01 01 64 */	stw r0, 0x164(r1)
/* 80214470 002113B0  90 01 01 80 */	stw r0, 0x180(r1)
/* 80214474 002113B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214478 002113B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021447C 002113BC  7D 89 03 A6 */	mtctr r12
/* 80214480 002113C0  4E 80 04 21 */	bctrl 
/* 80214484 002113C4  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80214488 002113C8  7F 83 E3 78 */	mr r3, r28
/* 8021448C 002113CC  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80214490 002113D0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80214494 002113D4  D0 41 01 68 */	stfs f2, 0x168(r1)
/* 80214498 002113D8  D0 21 01 6C */	stfs f1, 0x16c(r1)
/* 8021449C 002113DC  D0 01 01 70 */	stfs f0, 0x170(r1)
/* 802144A0 002113E0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802144A4 002113E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802144A8 002113E8  7D 89 03 A6 */	mtctr r12
/* 802144AC 002113EC  4E 80 04 21 */	bctrl 
/* 802144B0 002113F0  D0 21 01 74 */	stfs f1, 0x174(r1)
/* 802144B4 002113F4  38 81 01 50 */	addi r4, r1, 0x150
/* 802144B8 002113F8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802144BC 002113FC  93 83 01 94 */	stw r28, 0x194(r3)
/* 802144C0 00211400  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802144C4 00211404  48 21 85 0D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802144C8 00211408  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802144CC 0021140C  38 80 00 05 */	li r4, 5
/* 802144D0 00211410  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802144D4 00211414  81 83 00 00 */	lwz r12, 0(r3)
/* 802144D8 00211418  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802144DC 0021141C  7D 89 03 A6 */	mtctr r12
/* 802144E0 00211420  4E 80 04 21 */	bctrl 
.L_802144E4:
/* 802144E4 00211424  28 1D 00 04 */	cmplwi r29, 4
/* 802144E8 00211428  40 82 02 D4 */	bne .L_802147BC
/* 802144EC 0021142C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802144F0 00211430  4B F4 67 31 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802144F4 00211434  7C 7C 1B 79 */	or. r28, r3, r3
/* 802144F8 00211438  40 82 00 38 */	bne .L_80214530
/* 802144FC 0021143C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214500 00211440  38 80 00 01 */	li r4, 1
/* 80214504 00211444  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80214508 00211448  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 8021450C 0021144C  2C 00 00 00 */	cmpwi r0, 0
/* 80214510 00211450  40 82 00 08 */	bne .L_80214518
/* 80214514 00211454  38 80 00 00 */	li r4, 0
.L_80214518:
/* 80214518 00211458  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021451C 0021145C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214520 00211460  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80214524 00211464  7D 89 03 A6 */	mtctr r12
/* 80214528 00211468  4E 80 04 21 */	bctrl 
/* 8021452C 0021146C  7C 7C 1B 78 */	mr r28, r3
.L_80214530:
/* 80214530 00211470  38 00 00 00 */	li r0, 0
/* 80214534 00211474  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80214538 00211478  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8021453C 0021147C  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80214540 00211480  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80214544 00211484  28 00 00 00 */	cmplwi r0, 0
/* 80214548 00211488  90 81 00 60 */	stw r4, 0x60(r1)
/* 8021454C 0021148C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80214550 00211490  90 61 00 68 */	stw r3, 0x68(r1)
/* 80214554 00211494  40 82 00 1C */	bne .L_80214570
/* 80214558 00211498  81 83 00 00 */	lwz r12, 0(r3)
/* 8021455C 0021149C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214560 002114A0  7D 89 03 A6 */	mtctr r12
/* 80214564 002114A4  4E 80 04 21 */	bctrl 
/* 80214568 002114A8  90 61 00 64 */	stw r3, 0x64(r1)
/* 8021456C 002114AC  48 00 01 68 */	b .L_802146D4
.L_80214570:
/* 80214570 002114B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214574 002114B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214578 002114B8  7D 89 03 A6 */	mtctr r12
/* 8021457C 002114BC  4E 80 04 21 */	bctrl 
/* 80214580 002114C0  90 61 00 64 */	stw r3, 0x64(r1)
/* 80214584 002114C4  48 00 00 58 */	b .L_802145DC
.L_80214588:
/* 80214588 002114C8  80 61 00 68 */	lwz r3, 0x68(r1)
/* 8021458C 002114CC  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80214590 002114D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214594 002114D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214598 002114D8  7D 89 03 A6 */	mtctr r12
/* 8021459C 002114DC  4E 80 04 21 */	bctrl 
/* 802145A0 002114E0  7C 64 1B 78 */	mr r4, r3
/* 802145A4 002114E4  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 802145A8 002114E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802145AC 002114EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802145B0 002114F0  7D 89 03 A6 */	mtctr r12
/* 802145B4 002114F4  4E 80 04 21 */	bctrl 
/* 802145B8 002114F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802145BC 002114FC  40 82 01 18 */	bne .L_802146D4
/* 802145C0 00211500  80 61 00 68 */	lwz r3, 0x68(r1)
/* 802145C4 00211504  80 81 00 64 */	lwz r4, 0x64(r1)
/* 802145C8 00211508  81 83 00 00 */	lwz r12, 0(r3)
/* 802145CC 0021150C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802145D0 00211510  7D 89 03 A6 */	mtctr r12
/* 802145D4 00211514  4E 80 04 21 */	bctrl 
/* 802145D8 00211518  90 61 00 64 */	stw r3, 0x64(r1)
.L_802145DC:
/* 802145DC 0021151C  81 81 00 60 */	lwz r12, 0x60(r1)
/* 802145E0 00211520  38 61 00 60 */	addi r3, r1, 0x60
/* 802145E4 00211524  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802145E8 00211528  7D 89 03 A6 */	mtctr r12
/* 802145EC 0021152C  4E 80 04 21 */	bctrl 
/* 802145F0 00211530  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802145F4 00211534  41 82 FF 94 */	beq .L_80214588
/* 802145F8 00211538  48 00 00 DC */	b .L_802146D4
.L_802145FC:
/* 802145FC 0021153C  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214600 00211540  81 83 00 00 */	lwz r12, 0(r3)
/* 80214604 00211544  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214608 00211548  7D 89 03 A6 */	mtctr r12
/* 8021460C 0021154C  4E 80 04 21 */	bctrl 
/* 80214610 00211550  38 80 00 00 */	li r4, 0
/* 80214614 00211554  4B F2 74 3D */	bl movie_begin__Q24Game8CreatureFb
/* 80214618 00211558  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8021461C 0021155C  28 00 00 00 */	cmplwi r0, 0
/* 80214620 00211560  40 82 00 24 */	bne .L_80214644
/* 80214624 00211564  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214628 00211568  80 81 00 64 */	lwz r4, 0x64(r1)
/* 8021462C 0021156C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214630 00211570  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214634 00211574  7D 89 03 A6 */	mtctr r12
/* 80214638 00211578  4E 80 04 21 */	bctrl 
/* 8021463C 0021157C  90 61 00 64 */	stw r3, 0x64(r1)
/* 80214640 00211580  48 00 00 94 */	b .L_802146D4
.L_80214644:
/* 80214644 00211584  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214648 00211588  80 81 00 64 */	lwz r4, 0x64(r1)
/* 8021464C 0021158C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214650 00211590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214654 00211594  7D 89 03 A6 */	mtctr r12
/* 80214658 00211598  4E 80 04 21 */	bctrl 
/* 8021465C 0021159C  90 61 00 64 */	stw r3, 0x64(r1)
/* 80214660 002115A0  48 00 00 58 */	b .L_802146B8
.L_80214664:
/* 80214664 002115A4  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214668 002115A8  80 81 00 64 */	lwz r4, 0x64(r1)
/* 8021466C 002115AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80214670 002115B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214674 002115B4  7D 89 03 A6 */	mtctr r12
/* 80214678 002115B8  4E 80 04 21 */	bctrl 
/* 8021467C 002115BC  7C 64 1B 78 */	mr r4, r3
/* 80214680 002115C0  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 80214684 002115C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80214688 002115C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021468C 002115CC  7D 89 03 A6 */	mtctr r12
/* 80214690 002115D0  4E 80 04 21 */	bctrl 
/* 80214694 002115D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214698 002115D8  40 82 00 3C */	bne .L_802146D4
/* 8021469C 002115DC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 802146A0 002115E0  80 81 00 64 */	lwz r4, 0x64(r1)
/* 802146A4 002115E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802146A8 002115E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802146AC 002115EC  7D 89 03 A6 */	mtctr r12
/* 802146B0 002115F0  4E 80 04 21 */	bctrl 
/* 802146B4 002115F4  90 61 00 64 */	stw r3, 0x64(r1)
.L_802146B8:
/* 802146B8 002115F8  81 81 00 60 */	lwz r12, 0x60(r1)
/* 802146BC 002115FC  38 61 00 60 */	addi r3, r1, 0x60
/* 802146C0 00211600  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802146C4 00211604  7D 89 03 A6 */	mtctr r12
/* 802146C8 00211608  4E 80 04 21 */	bctrl 
/* 802146CC 0021160C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802146D0 00211610  41 82 FF 94 */	beq .L_80214664
.L_802146D4:
/* 802146D4 00211614  80 61 00 68 */	lwz r3, 0x68(r1)
/* 802146D8 00211618  81 83 00 00 */	lwz r12, 0(r3)
/* 802146DC 0021161C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802146E0 00211620  7D 89 03 A6 */	mtctr r12
/* 802146E4 00211624  4E 80 04 21 */	bctrl 
/* 802146E8 00211628  80 81 00 64 */	lwz r4, 0x64(r1)
/* 802146EC 0021162C  7C 04 18 40 */	cmplw r4, r3
/* 802146F0 00211630  40 82 FF 0C */	bne .L_802145FC
/* 802146F4 00211634  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802146F8 00211638  38 80 00 23 */	li r4, 0x23
/* 802146FC 0021163C  4B FD 2C A9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214700 00211640  80 BE 00 C8 */	lwz r5, 0xe8(r30)
/* 80214704 00211644  38 00 00 00 */	li r0, 0
/* 80214708 00211648  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 8021470C 0021164C  38 7F 01 A0 */	addi r3, r31, 0x1a0
/* 80214710 00211650  90 61 01 1C */	stw r3, 0x11c(r1)
/* 80214714 00211654  7F 84 E3 78 */	mr r4, r28
/* 80214718 00211658  38 61 00 2C */	addi r3, r1, 0x2c
/* 8021471C 0021165C  90 01 01 20 */	stw r0, 0x120(r1)
/* 80214720 00211660  90 A1 01 28 */	stw r5, 0x128(r1)
/* 80214724 00211664  D0 01 01 34 */	stfs f0, 0x134(r1)
/* 80214728 00211668  D0 01 01 38 */	stfs f0, 0x138(r1)
/* 8021472C 0021166C  D0 01 01 3C */	stfs f0, 0x13c(r1)
/* 80214730 00211670  D0 01 01 40 */	stfs f0, 0x140(r1)
/* 80214734 00211674  90 01 01 44 */	stw r0, 0x144(r1)
/* 80214738 00211678  90 01 01 2C */	stw r0, 0x12c(r1)
/* 8021473C 0021167C  90 01 01 24 */	stw r0, 0x124(r1)
/* 80214740 00211680  90 01 01 48 */	stw r0, 0x148(r1)
/* 80214744 00211684  90 01 01 30 */	stw r0, 0x130(r1)
/* 80214748 00211688  90 01 01 4C */	stw r0, 0x14c(r1)
/* 8021474C 0021168C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214750 00211690  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214754 00211694  7D 89 03 A6 */	mtctr r12
/* 80214758 00211698  4E 80 04 21 */	bctrl 
/* 8021475C 0021169C  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80214760 002116A0  7F 83 E3 78 */	mr r3, r28
/* 80214764 002116A4  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80214768 002116A8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8021476C 002116AC  D0 41 01 34 */	stfs f2, 0x134(r1)
/* 80214770 002116B0  D0 21 01 38 */	stfs f1, 0x138(r1)
/* 80214774 002116B4  D0 01 01 3C */	stfs f0, 0x13c(r1)
/* 80214778 002116B8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8021477C 002116BC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214780 002116C0  7D 89 03 A6 */	mtctr r12
/* 80214784 002116C4  4E 80 04 21 */	bctrl 
/* 80214788 002116C8  D0 21 01 40 */	stfs f1, 0x140(r1)
/* 8021478C 002116CC  38 81 01 1C */	addi r4, r1, 0x11c
/* 80214790 002116D0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214794 002116D4  93 83 01 94 */	stw r28, 0x194(r3)
/* 80214798 002116D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021479C 002116DC  48 21 82 35 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802147A0 002116E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802147A4 002116E4  38 80 00 04 */	li r4, 4
/* 802147A8 002116E8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802147AC 002116EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802147B0 002116F0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802147B4 002116F4  7D 89 03 A6 */	mtctr r12
/* 802147B8 002116F8  4E 80 04 21 */	bctrl 
.L_802147BC:
/* 802147BC 002116FC  28 1D 00 03 */	cmplwi r29, 3
/* 802147C0 00211700  40 82 01 04 */	bne .L_802148C4
/* 802147C4 00211704  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802147C8 00211708  4B F4 64 59 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802147CC 0021170C  7C 7C 1B 79 */	or. r28, r3, r3
/* 802147D0 00211710  40 82 00 38 */	bne .L_80214808
/* 802147D4 00211714  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802147D8 00211718  38 80 00 01 */	li r4, 1
/* 802147DC 0021171C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802147E0 00211720  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 802147E4 00211724  2C 00 00 00 */	cmpwi r0, 0
/* 802147E8 00211728  40 82 00 08 */	bne .L_802147F0
/* 802147EC 0021172C  38 80 00 00 */	li r4, 0
.L_802147F0:
/* 802147F0 00211730  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802147F4 00211734  81 83 00 00 */	lwz r12, 0(r3)
/* 802147F8 00211738  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802147FC 0021173C  7D 89 03 A6 */	mtctr r12
/* 80214800 00211740  4E 80 04 21 */	bctrl 
/* 80214804 00211744  7C 7C 1B 78 */	mr r28, r3
.L_80214808:
/* 80214808 00211748  80 BE 00 C8 */	lwz r5, 0xe8(r30)
/* 8021480C 0021174C  38 00 00 00 */	li r0, 0
/* 80214810 00211750  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214814 00211754  38 7F 01 B8 */	addi r3, r31, 0x1b8
/* 80214818 00211758  90 61 00 E8 */	stw r3, 0xe8(r1)
/* 8021481C 0021175C  7F 84 E3 78 */	mr r4, r28
/* 80214820 00211760  38 61 00 20 */	addi r3, r1, 0x20
/* 80214824 00211764  90 01 00 EC */	stw r0, 0xec(r1)
/* 80214828 00211768  90 A1 00 F4 */	stw r5, 0xf4(r1)
/* 8021482C 0021176C  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80214830 00211770  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80214834 00211774  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80214838 00211778  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 8021483C 0021177C  90 01 01 10 */	stw r0, 0x110(r1)
/* 80214840 00211780  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80214844 00211784  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80214848 00211788  90 01 01 14 */	stw r0, 0x114(r1)
/* 8021484C 0021178C  90 01 00 FC */	stw r0, 0xfc(r1)
/* 80214850 00211790  90 01 01 18 */	stw r0, 0x118(r1)
/* 80214854 00211794  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214858 00211798  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021485C 0021179C  7D 89 03 A6 */	mtctr r12
/* 80214860 002117A0  4E 80 04 21 */	bctrl 
/* 80214864 002117A4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80214868 002117A8  7F 83 E3 78 */	mr r3, r28
/* 8021486C 002117AC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80214870 002117B0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80214874 002117B4  D0 41 01 00 */	stfs f2, 0x100(r1)
/* 80214878 002117B8  D0 21 01 04 */	stfs f1, 0x104(r1)
/* 8021487C 002117BC  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80214880 002117C0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214884 002117C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214888 002117C8  7D 89 03 A6 */	mtctr r12
/* 8021488C 002117CC  4E 80 04 21 */	bctrl 
/* 80214890 002117D0  D0 21 01 0C */	stfs f1, 0x10c(r1)
/* 80214894 002117D4  38 81 00 E8 */	addi r4, r1, 0xe8
/* 80214898 002117D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021489C 002117DC  48 21 81 35 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802148A0 002117E0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802148A4 002117E4  38 80 00 25 */	li r4, 0x25
/* 802148A8 002117E8  4B FD 2A FD */	bl setDemoFlag__Q24Game8PlayDataFi
/* 802148AC 002117EC  7F C3 F3 78 */	mr r3, r30
/* 802148B0 002117F0  38 80 00 03 */	li r4, 3
/* 802148B4 002117F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802148B8 002117F8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802148BC 002117FC  7D 89 03 A6 */	mtctr r12
/* 802148C0 00211800  4E 80 04 21 */	bctrl 
.L_802148C4:
/* 802148C4 00211804  28 1D 00 01 */	cmplwi r29, 1
/* 802148C8 00211808  40 82 02 0C */	bne .L_80214AD4
/* 802148CC 0021180C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802148D0 00211810  38 80 00 00 */	li r4, 0
/* 802148D4 00211814  4B FD 2B 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 802148D8 00211818  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802148DC 0021181C  40 82 01 DC */	bne .L_80214AB8
/* 802148E0 00211820  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 802148E4 00211824  3B 80 00 00 */	li r28, 0
/* 802148E8 00211828  28 03 00 00 */	cmplwi r3, 0
/* 802148EC 0021182C  41 82 00 08 */	beq .L_802148F4
/* 802148F0 00211830  38 63 00 30 */	addi r3, r3, 0x30
.L_802148F4:
/* 802148F4 00211834  38 00 00 00 */	li r0, 0
/* 802148F8 00211838  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
/* 802148FC 0021183C  38 84 05 A4 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
/* 80214900 00211840  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80214904 00211844  28 00 00 00 */	cmplwi r0, 0
/* 80214908 00211848  90 81 00 50 */	stw r4, 0x50(r1)
/* 8021490C 0021184C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80214910 00211850  90 61 00 58 */	stw r3, 0x58(r1)
/* 80214914 00211854  40 82 00 1C */	bne .L_80214930
/* 80214918 00211858  81 83 00 00 */	lwz r12, 0(r3)
/* 8021491C 0021185C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214920 00211860  7D 89 03 A6 */	mtctr r12
/* 80214924 00211864  4E 80 04 21 */	bctrl 
/* 80214928 00211868  90 61 00 54 */	stw r3, 0x54(r1)
/* 8021492C 0021186C  48 00 00 AC */	b .L_802149D8
.L_80214930:
/* 80214930 00211870  81 83 00 00 */	lwz r12, 0(r3)
/* 80214934 00211874  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214938 00211878  7D 89 03 A6 */	mtctr r12
/* 8021493C 0021187C  4E 80 04 21 */	bctrl 
/* 80214940 00211880  90 61 00 54 */	stw r3, 0x54(r1)
/* 80214944 00211884  48 00 00 58 */	b .L_8021499C
.L_80214948:
/* 80214948 00211888  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8021494C 0021188C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80214950 00211890  81 83 00 00 */	lwz r12, 0(r3)
/* 80214954 00211894  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214958 00211898  7D 89 03 A6 */	mtctr r12
/* 8021495C 0021189C  4E 80 04 21 */	bctrl 
/* 80214960 002118A0  7C 64 1B 78 */	mr r4, r3
/* 80214964 002118A4  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80214968 002118A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021496C 002118AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214970 002118B0  7D 89 03 A6 */	mtctr r12
/* 80214974 002118B4  4E 80 04 21 */	bctrl 
/* 80214978 002118B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021497C 002118BC  40 82 00 5C */	bne .L_802149D8
/* 80214980 002118C0  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80214984 002118C4  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80214988 002118C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021498C 002118CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214990 002118D0  7D 89 03 A6 */	mtctr r12
/* 80214994 002118D4  4E 80 04 21 */	bctrl 
/* 80214998 002118D8  90 61 00 54 */	stw r3, 0x54(r1)
.L_8021499C:
/* 8021499C 002118DC  81 81 00 50 */	lwz r12, 0x50(r1)
/* 802149A0 002118E0  38 61 00 50 */	addi r3, r1, 0x50
/* 802149A4 002118E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802149A8 002118E8  7D 89 03 A6 */	mtctr r12
/* 802149AC 002118EC  4E 80 04 21 */	bctrl 
/* 802149B0 002118F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802149B4 002118F4  41 82 FF 94 */	beq .L_80214948
/* 802149B8 002118F8  48 00 00 20 */	b .L_802149D8
.L_802149BC:
/* 802149BC 002118FC  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802149C0 00211900  81 83 00 00 */	lwz r12, 0(r3)
/* 802149C4 00211904  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802149C8 00211908  7D 89 03 A6 */	mtctr r12
/* 802149CC 0021190C  4E 80 04 21 */	bctrl 
/* 802149D0 00211910  7C 7C 1B 78 */	mr r28, r3
/* 802149D4 00211914  48 00 00 24 */	b .L_802149F8
.L_802149D8:
/* 802149D8 00211918  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802149DC 0021191C  81 83 00 00 */	lwz r12, 0(r3)
/* 802149E0 00211920  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802149E4 00211924  7D 89 03 A6 */	mtctr r12
/* 802149E8 00211928  4E 80 04 21 */	bctrl 
/* 802149EC 0021192C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802149F0 00211930  7C 04 18 40 */	cmplw r4, r3
/* 802149F4 00211934  40 82 FF C8 */	bne .L_802149BC
.L_802149F8:
/* 802149F8 00211938  28 1C 00 00 */	cmplwi r28, 0
/* 802149FC 0021193C  40 82 00 18 */	bne .L_80214A14
/* 80214A00 00211940  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80214A04 00211944  38 BF 00 94 */	addi r5, r31, 0x94
/* 80214A08 00211948  38 80 04 72 */	li r4, 0x472
/* 80214A0C 0021194C  4C C6 31 82 */	crclr 6
/* 80214A10 00211950  4B E1 5C 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80214A14:
/* 80214A14 00211954  80 BE 00 C8 */	lwz r5, 0xe8(r30)
/* 80214A18 00211958  38 00 00 00 */	li r0, 0
/* 80214A1C 0021195C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214A20 00211960  38 7F 01 C4 */	addi r3, r31, 0x1c4
/* 80214A24 00211964  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 80214A28 00211968  7F 84 E3 78 */	mr r4, r28
/* 80214A2C 0021196C  38 61 00 14 */	addi r3, r1, 0x14
/* 80214A30 00211970  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80214A34 00211974  90 A1 00 C0 */	stw r5, 0xc0(r1)
/* 80214A38 00211978  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80214A3C 0021197C  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80214A40 00211980  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80214A44 00211984  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80214A48 00211988  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80214A4C 0021198C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80214A50 00211990  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80214A54 00211994  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80214A58 00211998  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80214A5C 0021199C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80214A60 002119A0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214A64 002119A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214A68 002119A8  7D 89 03 A6 */	mtctr r12
/* 80214A6C 002119AC  4E 80 04 21 */	bctrl 
/* 80214A70 002119B0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80214A74 002119B4  7F 83 E3 78 */	mr r3, r28
/* 80214A78 002119B8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80214A7C 002119BC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80214A80 002119C0  D0 41 00 CC */	stfs f2, 0xcc(r1)
/* 80214A84 002119C4  D0 21 00 D0 */	stfs f1, 0xd0(r1)
/* 80214A88 002119C8  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80214A8C 002119CC  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214A90 002119D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214A94 002119D4  7D 89 03 A6 */	mtctr r12
/* 80214A98 002119D8  4E 80 04 21 */	bctrl 
/* 80214A9C 002119DC  D0 21 00 D8 */	stfs f1, 0xd8(r1)
/* 80214AA0 002119E0  38 81 00 B4 */	addi r4, r1, 0xb4
/* 80214AA4 002119E4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214AA8 002119E8  48 21 7F 29 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80214AAC 002119EC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214AB0 002119F0  38 80 00 00 */	li r4, 0
/* 80214AB4 002119F4  4B FD 28 F1 */	bl setDemoFlag__Q24Game8PlayDataFi
.L_80214AB8:
/* 80214AB8 002119F8  7F C3 F3 78 */	mr r3, r30
/* 80214ABC 002119FC  38 80 00 01 */	li r4, 1
/* 80214AC0 00211A00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80214AC4 00211A04  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80214AC8 00211A08  7D 89 03 A6 */	mtctr r12
/* 80214ACC 00211A0C  4E 80 04 21 */	bctrl 
/* 80214AD0 00211A10  48 00 01 28 */	b .L_80214BF8
.L_80214AD4:
/* 80214AD4 00211A14  28 1D 00 02 */	cmplwi r29, 2
/* 80214AD8 00211A18  40 82 01 20 */	bne .L_80214BF8
/* 80214ADC 00211A1C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214AE0 00211A20  38 80 00 13 */	li r4, 0x13
/* 80214AE4 00211A24  4B FD 28 FD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80214AE8 00211A28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214AEC 00211A2C  40 82 00 F4 */	bne .L_80214BE0
/* 80214AF0 00211A30  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214AF4 00211A34  4B F4 61 2D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80214AF8 00211A38  28 03 00 00 */	cmplwi r3, 0
/* 80214AFC 00211A3C  41 82 00 FC */	beq .L_80214BF8
/* 80214B00 00211A40  80 9E 02 2C */	lwz r4, 0x250(r30)
/* 80214B04 00211A44  38 7F 01 D0 */	addi r3, r31, 0x1d0
/* 80214B08 00211A48  80 BE 00 C8 */	lwz r5, 0xe8(r30)
/* 80214B0C 00211A4C  38 00 00 00 */	li r0, 0
/* 80214B10 00211A50  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80214B14 00211A54  38 80 00 00 */	li r4, 0
/* 80214B18 00211A58  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214B1C 00211A5C  90 61 00 80 */	stw r3, 0x80(r1)
/* 80214B20 00211A60  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214B24 00211A64  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80214B28 00211A68  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80214B2C 00211A6C  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80214B30 00211A70  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80214B34 00211A74  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80214B38 00211A78  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 80214B3C 00211A7C  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80214B40 00211A80  90 01 00 90 */	stw r0, 0x90(r1)
/* 80214B44 00211A84  90 01 00 88 */	stw r0, 0x88(r1)
/* 80214B48 00211A88  90 01 00 AC */	stw r0, 0xac(r1)
/* 80214B4C 00211A8C  90 01 00 94 */	stw r0, 0x94(r1)
/* 80214B50 00211A90  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80214B54 00211A94  81 83 00 00 */	lwz r12, 0(r3)
/* 80214B58 00211A98  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80214B5C 00211A9C  7D 89 03 A6 */	mtctr r12
/* 80214B60 00211AA0  4E 80 04 21 */	bctrl 
/* 80214B64 00211AA4  7C 7C 1B 79 */	or. r28, r3, r3
/* 80214B68 00211AA8  40 82 00 10 */	bne .L_80214B78
/* 80214B6C 00211AAC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214B70 00211AB0  4B F4 60 B1 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80214B74 00211AB4  7C 7C 1B 78 */	mr r28, r3
.L_80214B78:
/* 80214B78 00211AB8  7F 84 E3 78 */	mr r4, r28
/* 80214B7C 00211ABC  38 61 00 08 */	addi r3, r1, 8
/* 80214B80 00211AC0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214B84 00211AC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214B88 00211AC8  7D 89 03 A6 */	mtctr r12
/* 80214B8C 00211ACC  4E 80 04 21 */	bctrl 
/* 80214B90 00211AD0  C0 41 00 08 */	lfs f2, 8(r1)
/* 80214B94 00211AD4  7F 83 E3 78 */	mr r3, r28
/* 80214B98 00211AD8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80214B9C 00211ADC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80214BA0 00211AE0  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 80214BA4 00211AE4  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 80214BA8 00211AE8  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80214BAC 00211AEC  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214BB0 00211AF0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214BB4 00211AF4  7D 89 03 A6 */	mtctr r12
/* 80214BB8 00211AF8  4E 80 04 21 */	bctrl 
/* 80214BBC 00211AFC  D0 21 00 A4 */	stfs f1, 0xa4(r1)
/* 80214BC0 00211B00  38 81 00 80 */	addi r4, r1, 0x80
/* 80214BC4 00211B04  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214BC8 00211B08  48 21 7E 09 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80214BCC 00211B0C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214BD0 00211B10  38 80 00 13 */	li r4, 0x13
/* 80214BD4 00211B14  4B FD 27 D1 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214BD8 00211B18  48 00 00 08 */	b .L_80214BE0
/* 80214BDC 00211B1C  48 00 00 1C */	b .L_80214BF8
.L_80214BE0:
/* 80214BE0 00211B20  7F C3 F3 78 */	mr r3, r30
/* 80214BE4 00211B24  38 80 00 02 */	li r4, 2
/* 80214BE8 00211B28  81 9E 00 00 */	lwz r12, 0(r30)
/* 80214BEC 00211B2C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80214BF0 00211B30  7D 89 03 A6 */	mtctr r12
/* 80214BF4 00211B34  4E 80 04 21 */	bctrl 
.L_80214BF8:
/* 80214BF8 00211B38  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 80214BFC 00211B3C  83 E1 01 CC */	lwz r31, 0x1cc(r1)
/* 80214C00 00211B40  83 C1 01 C8 */	lwz r30, 0x1c8(r1)
/* 80214C04 00211B44  83 A1 01 C4 */	lwz r29, 0x1c4(r1)
/* 80214C08 00211B48  83 81 01 C0 */	lwz r28, 0x1c0(r1)
/* 80214C0C 00211B4C  7C 08 03 A6 */	mtlr r0
/* 80214C10 00211B50  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 80214C14 00211B54  4E 80 00 20 */	blr 
.else
.global on_demo_timer__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionUl
on_demo_timer__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionUl:
/* 802140F0 00211030  94 21 FE 30 */	stwu r1, -0x1d0(r1)
/* 802140F4 00211034  7C 08 02 A6 */	mflr r0
/* 802140F8 00211038  3C 60 80 48 */	lis r3, lbl_80482150@ha
/* 802140FC 0021103C  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80214100 00211040  93 E1 01 CC */	stw r31, 0x1cc(r1)
/* 80214104 00211044  3B E3 21 50 */	addi r31, r3, lbl_80482150@l
/* 80214108 00211048  93 C1 01 C8 */	stw r30, 0x1c8(r1)
/* 8021410C 0021104C  7C 9E 23 78 */	mr r30, r4
/* 80214110 00211050  93 A1 01 C4 */	stw r29, 0x1c4(r1)
/* 80214114 00211054  7C BD 2B 78 */	mr r29, r5
/* 80214118 00211058  28 1D 00 07 */	cmplwi r29, 7
/* 8021411C 0021105C  93 81 01 C0 */	stw r28, 0x1c0(r1)
/* 80214120 00211060  40 82 02 B4 */	bne .L_802143D4
/* 80214124 00211064  80 6D 94 E0 */	lwz r3, mgr__Q24Game13ItemDownFloor@sda21(r13)
/* 80214128 00211068  3B 80 00 00 */	li r28, 0
/* 8021412C 0021106C  28 03 00 00 */	cmplwi r3, 0
/* 80214130 00211070  41 82 00 08 */	beq .L_80214138
/* 80214134 00211074  38 63 00 30 */	addi r3, r3, 0x30
.L_80214138:
/* 80214138 00211078  38 00 00 00 */	li r0, 0
/* 8021413C 0021107C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80214140 00211080  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 80214144 00211084  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80214148 00211088  28 00 00 00 */	cmplwi r0, 0
/* 8021414C 0021108C  90 81 00 70 */	stw r4, 0x70(r1)
/* 80214150 00211090  90 01 00 74 */	stw r0, 0x74(r1)
/* 80214154 00211094  90 61 00 78 */	stw r3, 0x78(r1)
/* 80214158 00211098  40 82 00 1C */	bne .L_80214174
/* 8021415C 0021109C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214160 002110A0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214164 002110A4  7D 89 03 A6 */	mtctr r12
/* 80214168 002110A8  4E 80 04 21 */	bctrl 
/* 8021416C 002110AC  90 61 00 74 */	stw r3, 0x74(r1)
/* 80214170 002110B0  48 00 01 70 */	b .L_802142E0
.L_80214174:
/* 80214174 002110B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80214178 002110B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021417C 002110BC  7D 89 03 A6 */	mtctr r12
/* 80214180 002110C0  4E 80 04 21 */	bctrl 
/* 80214184 002110C4  90 61 00 74 */	stw r3, 0x74(r1)
/* 80214188 002110C8  48 00 00 58 */	b .L_802141E0
.L_8021418C:
/* 8021418C 002110CC  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214190 002110D0  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214194 002110D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80214198 002110D8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021419C 002110DC  7D 89 03 A6 */	mtctr r12
/* 802141A0 002110E0  4E 80 04 21 */	bctrl 
/* 802141A4 002110E4  7C 64 1B 78 */	mr r4, r3
/* 802141A8 002110E8  80 61 00 7C */	lwz r3, 0x7c(r1)
/* 802141AC 002110EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802141B0 002110F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802141B4 002110F4  7D 89 03 A6 */	mtctr r12
/* 802141B8 002110F8  4E 80 04 21 */	bctrl 
/* 802141BC 002110FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802141C0 00211100  40 82 01 20 */	bne .L_802142E0
/* 802141C4 00211104  80 61 00 78 */	lwz r3, 0x78(r1)
/* 802141C8 00211108  80 81 00 74 */	lwz r4, 0x74(r1)
/* 802141CC 0021110C  81 83 00 00 */	lwz r12, 0(r3)
/* 802141D0 00211110  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802141D4 00211114  7D 89 03 A6 */	mtctr r12
/* 802141D8 00211118  4E 80 04 21 */	bctrl 
/* 802141DC 0021111C  90 61 00 74 */	stw r3, 0x74(r1)
.L_802141E0:
/* 802141E0 00211120  81 81 00 70 */	lwz r12, 0x70(r1)
/* 802141E4 00211124  38 61 00 70 */	addi r3, r1, 0x70
/* 802141E8 00211128  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802141EC 0021112C  7D 89 03 A6 */	mtctr r12
/* 802141F0 00211130  4E 80 04 21 */	bctrl 
/* 802141F4 00211134  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802141F8 00211138  41 82 FF 94 */	beq .L_8021418C
/* 802141FC 0021113C  48 00 00 E4 */	b .L_802142E0
.L_80214200:
/* 80214200 00211140  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214204 00211144  81 83 00 00 */	lwz r12, 0(r3)
/* 80214208 00211148  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021420C 0021114C  7D 89 03 A6 */	mtctr r12
/* 80214210 00211150  4E 80 04 21 */	bctrl 
/* 80214214 00211154  80 03 01 E8 */	lwz r0, 0x1e8(r3)
/* 80214218 00211158  2C 00 00 0F */	cmpwi r0, 0xf
/* 8021421C 0021115C  40 82 00 08 */	bne .L_80214224
/* 80214220 00211160  7C 7C 1B 78 */	mr r28, r3
.L_80214224:
/* 80214224 00211164  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80214228 00211168  28 00 00 00 */	cmplwi r0, 0
/* 8021422C 0021116C  40 82 00 24 */	bne .L_80214250
/* 80214230 00211170  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214234 00211174  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214238 00211178  81 83 00 00 */	lwz r12, 0(r3)
/* 8021423C 0021117C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214240 00211180  7D 89 03 A6 */	mtctr r12
/* 80214244 00211184  4E 80 04 21 */	bctrl 
/* 80214248 00211188  90 61 00 74 */	stw r3, 0x74(r1)
/* 8021424C 0021118C  48 00 00 94 */	b .L_802142E0
.L_80214250:
/* 80214250 00211190  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214254 00211194  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214258 00211198  81 83 00 00 */	lwz r12, 0(r3)
/* 8021425C 0021119C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214260 002111A0  7D 89 03 A6 */	mtctr r12
/* 80214264 002111A4  4E 80 04 21 */	bctrl 
/* 80214268 002111A8  90 61 00 74 */	stw r3, 0x74(r1)
/* 8021426C 002111AC  48 00 00 58 */	b .L_802142C4
.L_80214270:
/* 80214270 002111B0  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80214274 002111B4  80 81 00 74 */	lwz r4, 0x74(r1)
/* 80214278 002111B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021427C 002111BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214280 002111C0  7D 89 03 A6 */	mtctr r12
/* 80214284 002111C4  4E 80 04 21 */	bctrl 
/* 80214288 002111C8  7C 64 1B 78 */	mr r4, r3
/* 8021428C 002111CC  80 61 00 7C */	lwz r3, 0x7c(r1)
/* 80214290 002111D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214294 002111D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214298 002111D8  7D 89 03 A6 */	mtctr r12
/* 8021429C 002111DC  4E 80 04 21 */	bctrl 
/* 802142A0 002111E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802142A4 002111E4  40 82 00 3C */	bne .L_802142E0
/* 802142A8 002111E8  80 61 00 78 */	lwz r3, 0x78(r1)
/* 802142AC 002111EC  80 81 00 74 */	lwz r4, 0x74(r1)
/* 802142B0 002111F0  81 83 00 00 */	lwz r12, 0(r3)
/* 802142B4 002111F4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802142B8 002111F8  7D 89 03 A6 */	mtctr r12
/* 802142BC 002111FC  4E 80 04 21 */	bctrl 
/* 802142C0 00211200  90 61 00 74 */	stw r3, 0x74(r1)
.L_802142C4:
/* 802142C4 00211204  81 81 00 70 */	lwz r12, 0x70(r1)
/* 802142C8 00211208  38 61 00 70 */	addi r3, r1, 0x70
/* 802142CC 0021120C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802142D0 00211210  7D 89 03 A6 */	mtctr r12
/* 802142D4 00211214  4E 80 04 21 */	bctrl 
/* 802142D8 00211218  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802142DC 0021121C  41 82 FF 94 */	beq .L_80214270
.L_802142E0:
/* 802142E0 00211220  80 61 00 78 */	lwz r3, 0x78(r1)
/* 802142E4 00211224  81 83 00 00 */	lwz r12, 0(r3)
/* 802142E8 00211228  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802142EC 0021122C  7D 89 03 A6 */	mtctr r12
/* 802142F0 00211230  4E 80 04 21 */	bctrl 
/* 802142F4 00211234  80 81 00 74 */	lwz r4, 0x74(r1)
/* 802142F8 00211238  7C 04 18 40 */	cmplw r4, r3
/* 802142FC 0021123C  40 82 FF 04 */	bne .L_80214200
/* 80214300 00211240  28 1C 00 00 */	cmplwi r28, 0
/* 80214304 00211244  40 82 00 18 */	bne .L_8021431C
/* 80214308 00211248  38 7F 00 7C */	addi r3, r31, 0x7c
/* 8021430C 0021124C  38 BF 01 70 */	addi r5, r31, 0x170
/* 80214310 00211250  38 80 04 01 */	li r4, 0x401
/* 80214314 00211254  4C C6 31 82 */	crclr 6
/* 80214318 00211258  4B E1 63 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021431C:
/* 8021431C 0021125C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214320 00211260  38 00 00 00 */	li r0, 0
/* 80214324 00211264  38 BF 01 84 */	addi r5, r31, 0x184
/* 80214328 00211268  90 01 01 88 */	stw r0, 0x188(r1)
/* 8021432C 0021126C  7F 84 E3 78 */	mr r4, r28
/* 80214330 00211270  38 61 00 44 */	addi r3, r1, 0x44
/* 80214334 00211274  90 A1 01 84 */	stw r5, 0x184(r1)
/* 80214338 00211278  90 01 01 90 */	stw r0, 0x190(r1)
/* 8021433C 0021127C  D0 01 01 9C */	stfs f0, 0x19c(r1)
/* 80214340 00211280  D0 01 01 A0 */	stfs f0, 0x1a0(r1)
/* 80214344 00211284  D0 01 01 A4 */	stfs f0, 0x1a4(r1)
/* 80214348 00211288  D0 01 01 A8 */	stfs f0, 0x1a8(r1)
/* 8021434C 0021128C  90 01 01 AC */	stw r0, 0x1ac(r1)
/* 80214350 00211290  90 01 01 94 */	stw r0, 0x194(r1)
/* 80214354 00211294  90 01 01 8C */	stw r0, 0x18c(r1)
/* 80214358 00211298  90 01 01 B0 */	stw r0, 0x1b0(r1)
/* 8021435C 0021129C  90 01 01 98 */	stw r0, 0x198(r1)
/* 80214360 002112A0  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 80214364 002112A4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214368 002112A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021436C 002112AC  7D 89 03 A6 */	mtctr r12
/* 80214370 002112B0  4E 80 04 21 */	bctrl 
/* 80214374 002112B4  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 80214378 002112B8  7F 83 E3 78 */	mr r3, r28
/* 8021437C 002112BC  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 80214380 002112C0  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 80214384 002112C4  D0 41 01 9C */	stfs f2, 0x19c(r1)
/* 80214388 002112C8  D0 21 01 A0 */	stfs f1, 0x1a0(r1)
/* 8021438C 002112CC  D0 01 01 A4 */	stfs f0, 0x1a4(r1)
/* 80214390 002112D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214394 002112D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214398 002112D8  7D 89 03 A6 */	mtctr r12
/* 8021439C 002112DC  4E 80 04 21 */	bctrl 
/* 802143A0 002112E0  D0 21 01 A8 */	stfs f1, 0x1a8(r1)
/* 802143A4 002112E4  38 81 01 84 */	addi r4, r1, 0x184
/* 802143A8 002112E8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802143AC 002112EC  93 83 01 94 */	stw r28, 0x194(r3)
/* 802143B0 002112F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802143B4 002112F4  48 21 86 1D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802143B8 002112F8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802143BC 002112FC  38 80 00 07 */	li r4, 7
/* 802143C0 00211300  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802143C4 00211304  81 83 00 00 */	lwz r12, 0(r3)
/* 802143C8 00211308  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802143CC 0021130C  7D 89 03 A6 */	mtctr r12
/* 802143D0 00211310  4E 80 04 21 */	bctrl 
.L_802143D4:
/* 802143D4 00211314  28 1D 00 05 */	cmplwi r29, 5
/* 802143D8 00211318  40 82 01 0C */	bne .L_802144E4
/* 802143DC 0021131C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802143E0 00211320  4B F4 68 41 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802143E4 00211324  7C 7C 1B 79 */	or. r28, r3, r3
/* 802143E8 00211328  40 82 00 38 */	bne .L_80214420
/* 802143EC 0021132C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802143F0 00211330  38 80 00 01 */	li r4, 1
/* 802143F4 00211334  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802143F8 00211338  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 802143FC 0021133C  2C 00 00 00 */	cmpwi r0, 0
/* 80214400 00211340  40 82 00 08 */	bne .L_80214408
/* 80214404 00211344  38 80 00 00 */	li r4, 0
.L_80214408:
/* 80214408 00211348  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021440C 0021134C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214410 00211350  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80214414 00211354  7D 89 03 A6 */	mtctr r12
/* 80214418 00211358  4E 80 04 21 */	bctrl 
/* 8021441C 0021135C  7C 7C 1B 78 */	mr r28, r3
.L_80214420:
/* 80214420 00211360  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214424 00211364  38 80 00 2E */	li r4, 0x2e
/* 80214428 00211368  4B FD 2F 7D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8021442C 0021136C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214430 00211370  38 00 00 00 */	li r0, 0
/* 80214434 00211374  38 BF 01 94 */	addi r5, r31, 0x194
/* 80214438 00211378  90 01 01 54 */	stw r0, 0x154(r1)
/* 8021443C 0021137C  7F 84 E3 78 */	mr r4, r28
/* 80214440 00211380  38 61 00 38 */	addi r3, r1, 0x38
/* 80214444 00211384  90 A1 01 50 */	stw r5, 0x150(r1)
/* 80214448 00211388  90 01 01 5C */	stw r0, 0x15c(r1)
/* 8021444C 0021138C  D0 01 01 68 */	stfs f0, 0x168(r1)
/* 80214450 00211390  D0 01 01 6C */	stfs f0, 0x16c(r1)
/* 80214454 00211394  D0 01 01 70 */	stfs f0, 0x170(r1)
/* 80214458 00211398  D0 01 01 74 */	stfs f0, 0x174(r1)
/* 8021445C 0021139C  90 01 01 78 */	stw r0, 0x178(r1)
/* 80214460 002113A0  90 01 01 60 */	stw r0, 0x160(r1)
/* 80214464 002113A4  90 01 01 58 */	stw r0, 0x158(r1)
/* 80214468 002113A8  90 01 01 7C */	stw r0, 0x17c(r1)
/* 8021446C 002113AC  90 01 01 64 */	stw r0, 0x164(r1)
/* 80214470 002113B0  90 01 01 80 */	stw r0, 0x180(r1)
/* 80214474 002113B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214478 002113B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021447C 002113BC  7D 89 03 A6 */	mtctr r12
/* 80214480 002113C0  4E 80 04 21 */	bctrl 
/* 80214484 002113C4  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80214488 002113C8  7F 83 E3 78 */	mr r3, r28
/* 8021448C 002113CC  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 80214490 002113D0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80214494 002113D4  D0 41 01 68 */	stfs f2, 0x168(r1)
/* 80214498 002113D8  D0 21 01 6C */	stfs f1, 0x16c(r1)
/* 8021449C 002113DC  D0 01 01 70 */	stfs f0, 0x170(r1)
/* 802144A0 002113E0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802144A4 002113E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802144A8 002113E8  7D 89 03 A6 */	mtctr r12
/* 802144AC 002113EC  4E 80 04 21 */	bctrl 
/* 802144B0 002113F0  D0 21 01 74 */	stfs f1, 0x174(r1)
/* 802144B4 002113F4  38 81 01 50 */	addi r4, r1, 0x150
/* 802144B8 002113F8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802144BC 002113FC  93 83 01 94 */	stw r28, 0x194(r3)
/* 802144C0 00211400  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802144C4 00211404  48 21 85 0D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802144C8 00211408  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802144CC 0021140C  38 80 00 05 */	li r4, 5
/* 802144D0 00211410  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802144D4 00211414  81 83 00 00 */	lwz r12, 0(r3)
/* 802144D8 00211418  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802144DC 0021141C  7D 89 03 A6 */	mtctr r12
/* 802144E0 00211420  4E 80 04 21 */	bctrl 
.L_802144E4:
/* 802144E4 00211424  28 1D 00 04 */	cmplwi r29, 4
/* 802144E8 00211428  40 82 02 D4 */	bne .L_802147BC
/* 802144EC 0021142C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802144F0 00211430  4B F4 67 31 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802144F4 00211434  7C 7C 1B 79 */	or. r28, r3, r3
/* 802144F8 00211438  40 82 00 38 */	bne .L_80214530
/* 802144FC 0021143C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214500 00211440  38 80 00 01 */	li r4, 1
/* 80214504 00211444  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80214508 00211448  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 8021450C 0021144C  2C 00 00 00 */	cmpwi r0, 0
/* 80214510 00211450  40 82 00 08 */	bne .L_80214518
/* 80214514 00211454  38 80 00 00 */	li r4, 0
.L_80214518:
/* 80214518 00211458  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021451C 0021145C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214520 00211460  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80214524 00211464  7D 89 03 A6 */	mtctr r12
/* 80214528 00211468  4E 80 04 21 */	bctrl 
/* 8021452C 0021146C  7C 7C 1B 78 */	mr r28, r3
.L_80214530:
/* 80214530 00211470  38 00 00 00 */	li r0, 0
/* 80214534 00211474  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80214538 00211478  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 8021453C 0021147C  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80214540 00211480  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80214544 00211484  28 00 00 00 */	cmplwi r0, 0
/* 80214548 00211488  90 81 00 60 */	stw r4, 0x60(r1)
/* 8021454C 0021148C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80214550 00211490  90 61 00 68 */	stw r3, 0x68(r1)
/* 80214554 00211494  40 82 00 1C */	bne .L_80214570
/* 80214558 00211498  81 83 00 00 */	lwz r12, 0(r3)
/* 8021455C 0021149C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214560 002114A0  7D 89 03 A6 */	mtctr r12
/* 80214564 002114A4  4E 80 04 21 */	bctrl 
/* 80214568 002114A8  90 61 00 64 */	stw r3, 0x64(r1)
/* 8021456C 002114AC  48 00 01 68 */	b .L_802146D4
.L_80214570:
/* 80214570 002114B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214574 002114B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214578 002114B8  7D 89 03 A6 */	mtctr r12
/* 8021457C 002114BC  4E 80 04 21 */	bctrl 
/* 80214580 002114C0  90 61 00 64 */	stw r3, 0x64(r1)
/* 80214584 002114C4  48 00 00 58 */	b .L_802145DC
.L_80214588:
/* 80214588 002114C8  80 61 00 68 */	lwz r3, 0x68(r1)
/* 8021458C 002114CC  80 81 00 64 */	lwz r4, 0x64(r1)
/* 80214590 002114D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214594 002114D4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214598 002114D8  7D 89 03 A6 */	mtctr r12
/* 8021459C 002114DC  4E 80 04 21 */	bctrl 
/* 802145A0 002114E0  7C 64 1B 78 */	mr r4, r3
/* 802145A4 002114E4  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 802145A8 002114E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802145AC 002114EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802145B0 002114F0  7D 89 03 A6 */	mtctr r12
/* 802145B4 002114F4  4E 80 04 21 */	bctrl 
/* 802145B8 002114F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802145BC 002114FC  40 82 01 18 */	bne .L_802146D4
/* 802145C0 00211500  80 61 00 68 */	lwz r3, 0x68(r1)
/* 802145C4 00211504  80 81 00 64 */	lwz r4, 0x64(r1)
/* 802145C8 00211508  81 83 00 00 */	lwz r12, 0(r3)
/* 802145CC 0021150C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802145D0 00211510  7D 89 03 A6 */	mtctr r12
/* 802145D4 00211514  4E 80 04 21 */	bctrl 
/* 802145D8 00211518  90 61 00 64 */	stw r3, 0x64(r1)
.L_802145DC:
/* 802145DC 0021151C  81 81 00 60 */	lwz r12, 0x60(r1)
/* 802145E0 00211520  38 61 00 60 */	addi r3, r1, 0x60
/* 802145E4 00211524  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802145E8 00211528  7D 89 03 A6 */	mtctr r12
/* 802145EC 0021152C  4E 80 04 21 */	bctrl 
/* 802145F0 00211530  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802145F4 00211534  41 82 FF 94 */	beq .L_80214588
/* 802145F8 00211538  48 00 00 DC */	b .L_802146D4
.L_802145FC:
/* 802145FC 0021153C  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214600 00211540  81 83 00 00 */	lwz r12, 0(r3)
/* 80214604 00211544  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214608 00211548  7D 89 03 A6 */	mtctr r12
/* 8021460C 0021154C  4E 80 04 21 */	bctrl 
/* 80214610 00211550  38 80 00 00 */	li r4, 0
/* 80214614 00211554  4B F2 74 3D */	bl movie_begin__Q24Game8CreatureFb
/* 80214618 00211558  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8021461C 0021155C  28 00 00 00 */	cmplwi r0, 0
/* 80214620 00211560  40 82 00 24 */	bne .L_80214644
/* 80214624 00211564  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214628 00211568  80 81 00 64 */	lwz r4, 0x64(r1)
/* 8021462C 0021156C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214630 00211570  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214634 00211574  7D 89 03 A6 */	mtctr r12
/* 80214638 00211578  4E 80 04 21 */	bctrl 
/* 8021463C 0021157C  90 61 00 64 */	stw r3, 0x64(r1)
/* 80214640 00211580  48 00 00 94 */	b .L_802146D4
.L_80214644:
/* 80214644 00211584  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214648 00211588  80 81 00 64 */	lwz r4, 0x64(r1)
/* 8021464C 0021158C  81 83 00 00 */	lwz r12, 0(r3)
/* 80214650 00211590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214654 00211594  7D 89 03 A6 */	mtctr r12
/* 80214658 00211598  4E 80 04 21 */	bctrl 
/* 8021465C 0021159C  90 61 00 64 */	stw r3, 0x64(r1)
/* 80214660 002115A0  48 00 00 58 */	b .L_802146B8
.L_80214664:
/* 80214664 002115A4  80 61 00 68 */	lwz r3, 0x68(r1)
/* 80214668 002115A8  80 81 00 64 */	lwz r4, 0x64(r1)
/* 8021466C 002115AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80214670 002115B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214674 002115B4  7D 89 03 A6 */	mtctr r12
/* 80214678 002115B8  4E 80 04 21 */	bctrl 
/* 8021467C 002115BC  7C 64 1B 78 */	mr r4, r3
/* 80214680 002115C0  80 61 00 6C */	lwz r3, 0x6c(r1)
/* 80214684 002115C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80214688 002115C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021468C 002115CC  7D 89 03 A6 */	mtctr r12
/* 80214690 002115D0  4E 80 04 21 */	bctrl 
/* 80214694 002115D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214698 002115D8  40 82 00 3C */	bne .L_802146D4
/* 8021469C 002115DC  80 61 00 68 */	lwz r3, 0x68(r1)
/* 802146A0 002115E0  80 81 00 64 */	lwz r4, 0x64(r1)
/* 802146A4 002115E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802146A8 002115E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802146AC 002115EC  7D 89 03 A6 */	mtctr r12
/* 802146B0 002115F0  4E 80 04 21 */	bctrl 
/* 802146B4 002115F4  90 61 00 64 */	stw r3, 0x64(r1)
.L_802146B8:
/* 802146B8 002115F8  81 81 00 60 */	lwz r12, 0x60(r1)
/* 802146BC 002115FC  38 61 00 60 */	addi r3, r1, 0x60
/* 802146C0 00211600  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802146C4 00211604  7D 89 03 A6 */	mtctr r12
/* 802146C8 00211608  4E 80 04 21 */	bctrl 
/* 802146CC 0021160C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802146D0 00211610  41 82 FF 94 */	beq .L_80214664
.L_802146D4:
/* 802146D4 00211614  80 61 00 68 */	lwz r3, 0x68(r1)
/* 802146D8 00211618  81 83 00 00 */	lwz r12, 0(r3)
/* 802146DC 0021161C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802146E0 00211620  7D 89 03 A6 */	mtctr r12
/* 802146E4 00211624  4E 80 04 21 */	bctrl 
/* 802146E8 00211628  80 81 00 64 */	lwz r4, 0x64(r1)
/* 802146EC 0021162C  7C 04 18 40 */	cmplw r4, r3
/* 802146F0 00211630  40 82 FF 0C */	bne .L_802145FC
/* 802146F4 00211634  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802146F8 00211638  38 80 00 23 */	li r4, 0x23
/* 802146FC 0021163C  4B FD 2C A9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214700 00211640  80 BE 00 C8 */	lwz r5, 0xc8(r30)
/* 80214704 00211644  38 00 00 00 */	li r0, 0
/* 80214708 00211648  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 8021470C 0021164C  38 7F 01 A0 */	addi r3, r31, 0x1a0
/* 80214710 00211650  90 61 01 1C */	stw r3, 0x11c(r1)
/* 80214714 00211654  7F 84 E3 78 */	mr r4, r28
/* 80214718 00211658  38 61 00 2C */	addi r3, r1, 0x2c
/* 8021471C 0021165C  90 01 01 20 */	stw r0, 0x120(r1)
/* 80214720 00211660  90 A1 01 28 */	stw r5, 0x128(r1)
/* 80214724 00211664  D0 01 01 34 */	stfs f0, 0x134(r1)
/* 80214728 00211668  D0 01 01 38 */	stfs f0, 0x138(r1)
/* 8021472C 0021166C  D0 01 01 3C */	stfs f0, 0x13c(r1)
/* 80214730 00211670  D0 01 01 40 */	stfs f0, 0x140(r1)
/* 80214734 00211674  90 01 01 44 */	stw r0, 0x144(r1)
/* 80214738 00211678  90 01 01 2C */	stw r0, 0x12c(r1)
/* 8021473C 0021167C  90 01 01 24 */	stw r0, 0x124(r1)
/* 80214740 00211680  90 01 01 48 */	stw r0, 0x148(r1)
/* 80214744 00211684  90 01 01 30 */	stw r0, 0x130(r1)
/* 80214748 00211688  90 01 01 4C */	stw r0, 0x14c(r1)
/* 8021474C 0021168C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214750 00211690  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214754 00211694  7D 89 03 A6 */	mtctr r12
/* 80214758 00211698  4E 80 04 21 */	bctrl 
/* 8021475C 0021169C  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80214760 002116A0  7F 83 E3 78 */	mr r3, r28
/* 80214764 002116A4  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80214768 002116A8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 8021476C 002116AC  D0 41 01 34 */	stfs f2, 0x134(r1)
/* 80214770 002116B0  D0 21 01 38 */	stfs f1, 0x138(r1)
/* 80214774 002116B4  D0 01 01 3C */	stfs f0, 0x13c(r1)
/* 80214778 002116B8  81 9C 00 00 */	lwz r12, 0(r28)
/* 8021477C 002116BC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214780 002116C0  7D 89 03 A6 */	mtctr r12
/* 80214784 002116C4  4E 80 04 21 */	bctrl 
/* 80214788 002116C8  D0 21 01 40 */	stfs f1, 0x140(r1)
/* 8021478C 002116CC  38 81 01 1C */	addi r4, r1, 0x11c
/* 80214790 002116D0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214794 002116D4  93 83 01 94 */	stw r28, 0x194(r3)
/* 80214798 002116D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021479C 002116DC  48 21 82 35 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802147A0 002116E0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802147A4 002116E4  38 80 00 04 */	li r4, 4
/* 802147A8 002116E8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802147AC 002116EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802147B0 002116F0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802147B4 002116F4  7D 89 03 A6 */	mtctr r12
/* 802147B8 002116F8  4E 80 04 21 */	bctrl 
.L_802147BC:
/* 802147BC 002116FC  28 1D 00 03 */	cmplwi r29, 3
/* 802147C0 00211700  40 82 01 04 */	bne .L_802148C4
/* 802147C4 00211704  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802147C8 00211708  4B F4 64 59 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802147CC 0021170C  7C 7C 1B 79 */	or. r28, r3, r3
/* 802147D0 00211710  40 82 00 38 */	bne .L_80214808
/* 802147D4 00211714  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802147D8 00211718  38 80 00 01 */	li r4, 1
/* 802147DC 0021171C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802147E0 00211720  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 802147E4 00211724  2C 00 00 00 */	cmpwi r0, 0
/* 802147E8 00211728  40 82 00 08 */	bne .L_802147F0
/* 802147EC 0021172C  38 80 00 00 */	li r4, 0
.L_802147F0:
/* 802147F0 00211730  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802147F4 00211734  81 83 00 00 */	lwz r12, 0(r3)
/* 802147F8 00211738  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802147FC 0021173C  7D 89 03 A6 */	mtctr r12
/* 80214800 00211740  4E 80 04 21 */	bctrl 
/* 80214804 00211744  7C 7C 1B 78 */	mr r28, r3
.L_80214808:
/* 80214808 00211748  80 BE 00 C8 */	lwz r5, 0xc8(r30)
/* 8021480C 0021174C  38 00 00 00 */	li r0, 0
/* 80214810 00211750  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214814 00211754  38 7F 01 B8 */	addi r3, r31, 0x1b8
/* 80214818 00211758  90 61 00 E8 */	stw r3, 0xe8(r1)
/* 8021481C 0021175C  7F 84 E3 78 */	mr r4, r28
/* 80214820 00211760  38 61 00 20 */	addi r3, r1, 0x20
/* 80214824 00211764  90 01 00 EC */	stw r0, 0xec(r1)
/* 80214828 00211768  90 A1 00 F4 */	stw r5, 0xf4(r1)
/* 8021482C 0021176C  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80214830 00211770  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80214834 00211774  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80214838 00211778  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 8021483C 0021177C  90 01 01 10 */	stw r0, 0x110(r1)
/* 80214840 00211780  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80214844 00211784  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80214848 00211788  90 01 01 14 */	stw r0, 0x114(r1)
/* 8021484C 0021178C  90 01 00 FC */	stw r0, 0xfc(r1)
/* 80214850 00211790  90 01 01 18 */	stw r0, 0x118(r1)
/* 80214854 00211794  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214858 00211798  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021485C 0021179C  7D 89 03 A6 */	mtctr r12
/* 80214860 002117A0  4E 80 04 21 */	bctrl 
/* 80214864 002117A4  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80214868 002117A8  7F 83 E3 78 */	mr r3, r28
/* 8021486C 002117AC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80214870 002117B0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80214874 002117B4  D0 41 01 00 */	stfs f2, 0x100(r1)
/* 80214878 002117B8  D0 21 01 04 */	stfs f1, 0x104(r1)
/* 8021487C 002117BC  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80214880 002117C0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214884 002117C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214888 002117C8  7D 89 03 A6 */	mtctr r12
/* 8021488C 002117CC  4E 80 04 21 */	bctrl 
/* 80214890 002117D0  D0 21 01 0C */	stfs f1, 0x10c(r1)
/* 80214894 002117D4  38 81 00 E8 */	addi r4, r1, 0xe8
/* 80214898 002117D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021489C 002117DC  48 21 81 35 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802148A0 002117E0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802148A4 002117E4  38 80 00 25 */	li r4, 0x25
/* 802148A8 002117E8  4B FD 2A FD */	bl setDemoFlag__Q24Game8PlayDataFi
/* 802148AC 002117EC  7F C3 F3 78 */	mr r3, r30
/* 802148B0 002117F0  38 80 00 03 */	li r4, 3
/* 802148B4 002117F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 802148B8 002117F8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802148BC 002117FC  7D 89 03 A6 */	mtctr r12
/* 802148C0 00211800  4E 80 04 21 */	bctrl 
.L_802148C4:
/* 802148C4 00211804  28 1D 00 01 */	cmplwi r29, 1
/* 802148C8 00211808  40 82 02 0C */	bne .L_80214AD4
/* 802148CC 0021180C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802148D0 00211810  38 80 00 00 */	li r4, 0
/* 802148D4 00211814  4B FD 2B 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 802148D8 00211818  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802148DC 0021181C  40 82 01 DC */	bne .L_80214AB8
/* 802148E0 00211820  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 802148E4 00211824  3B 80 00 00 */	li r28, 0
/* 802148E8 00211828  28 03 00 00 */	cmplwi r3, 0
/* 802148EC 0021182C  41 82 00 08 */	beq .L_802148F4
/* 802148F0 00211830  38 63 00 30 */	addi r3, r3, 0x30
.L_802148F4:
/* 802148F4 00211834  38 00 00 00 */	li r0, 0
/* 802148F8 00211838  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
/* 802148FC 0021183C  38 84 05 A4 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
/* 80214900 00211840  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80214904 00211844  28 00 00 00 */	cmplwi r0, 0
/* 80214908 00211848  90 81 00 50 */	stw r4, 0x50(r1)
/* 8021490C 0021184C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80214910 00211850  90 61 00 58 */	stw r3, 0x58(r1)
/* 80214914 00211854  40 82 00 1C */	bne .L_80214930
/* 80214918 00211858  81 83 00 00 */	lwz r12, 0(r3)
/* 8021491C 0021185C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214920 00211860  7D 89 03 A6 */	mtctr r12
/* 80214924 00211864  4E 80 04 21 */	bctrl 
/* 80214928 00211868  90 61 00 54 */	stw r3, 0x54(r1)
/* 8021492C 0021186C  48 00 00 AC */	b .L_802149D8
.L_80214930:
/* 80214930 00211870  81 83 00 00 */	lwz r12, 0(r3)
/* 80214934 00211874  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214938 00211878  7D 89 03 A6 */	mtctr r12
/* 8021493C 0021187C  4E 80 04 21 */	bctrl 
/* 80214940 00211880  90 61 00 54 */	stw r3, 0x54(r1)
/* 80214944 00211884  48 00 00 58 */	b .L_8021499C
.L_80214948:
/* 80214948 00211888  80 61 00 58 */	lwz r3, 0x58(r1)
/* 8021494C 0021188C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80214950 00211890  81 83 00 00 */	lwz r12, 0(r3)
/* 80214954 00211894  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80214958 00211898  7D 89 03 A6 */	mtctr r12
/* 8021495C 0021189C  4E 80 04 21 */	bctrl 
/* 80214960 002118A0  7C 64 1B 78 */	mr r4, r3
/* 80214964 002118A4  80 61 00 5C */	lwz r3, 0x5c(r1)
/* 80214968 002118A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021496C 002118AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214970 002118B0  7D 89 03 A6 */	mtctr r12
/* 80214974 002118B4  4E 80 04 21 */	bctrl 
/* 80214978 002118B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021497C 002118BC  40 82 00 5C */	bne .L_802149D8
/* 80214980 002118C0  80 61 00 58 */	lwz r3, 0x58(r1)
/* 80214984 002118C4  80 81 00 54 */	lwz r4, 0x54(r1)
/* 80214988 002118C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021498C 002118CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80214990 002118D0  7D 89 03 A6 */	mtctr r12
/* 80214994 002118D4  4E 80 04 21 */	bctrl 
/* 80214998 002118D8  90 61 00 54 */	stw r3, 0x54(r1)
.L_8021499C:
/* 8021499C 002118DC  81 81 00 50 */	lwz r12, 0x50(r1)
/* 802149A0 002118E0  38 61 00 50 */	addi r3, r1, 0x50
/* 802149A4 002118E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802149A8 002118E8  7D 89 03 A6 */	mtctr r12
/* 802149AC 002118EC  4E 80 04 21 */	bctrl 
/* 802149B0 002118F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802149B4 002118F4  41 82 FF 94 */	beq .L_80214948
/* 802149B8 002118F8  48 00 00 20 */	b .L_802149D8
.L_802149BC:
/* 802149BC 002118FC  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802149C0 00211900  81 83 00 00 */	lwz r12, 0(r3)
/* 802149C4 00211904  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802149C8 00211908  7D 89 03 A6 */	mtctr r12
/* 802149CC 0021190C  4E 80 04 21 */	bctrl 
/* 802149D0 00211910  7C 7C 1B 78 */	mr r28, r3
/* 802149D4 00211914  48 00 00 24 */	b .L_802149F8
.L_802149D8:
/* 802149D8 00211918  80 61 00 58 */	lwz r3, 0x58(r1)
/* 802149DC 0021191C  81 83 00 00 */	lwz r12, 0(r3)
/* 802149E0 00211920  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802149E4 00211924  7D 89 03 A6 */	mtctr r12
/* 802149E8 00211928  4E 80 04 21 */	bctrl 
/* 802149EC 0021192C  80 81 00 54 */	lwz r4, 0x54(r1)
/* 802149F0 00211930  7C 04 18 40 */	cmplw r4, r3
/* 802149F4 00211934  40 82 FF C8 */	bne .L_802149BC
.L_802149F8:
/* 802149F8 00211938  28 1C 00 00 */	cmplwi r28, 0
/* 802149FC 0021193C  40 82 00 18 */	bne .L_80214A14
/* 80214A00 00211940  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80214A04 00211944  38 BF 00 94 */	addi r5, r31, 0x94
/* 80214A08 00211948  38 80 04 72 */	li r4, 0x472
/* 80214A0C 0021194C  4C C6 31 82 */	crclr 6
/* 80214A10 00211950  4B E1 5C 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80214A14:
/* 80214A14 00211954  80 BE 00 C8 */	lwz r5, 0xc8(r30)
/* 80214A18 00211958  38 00 00 00 */	li r0, 0
/* 80214A1C 0021195C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214A20 00211960  38 7F 01 C4 */	addi r3, r31, 0x1c4
/* 80214A24 00211964  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 80214A28 00211968  7F 84 E3 78 */	mr r4, r28
/* 80214A2C 0021196C  38 61 00 14 */	addi r3, r1, 0x14
/* 80214A30 00211970  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80214A34 00211974  90 A1 00 C0 */	stw r5, 0xc0(r1)
/* 80214A38 00211978  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80214A3C 0021197C  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80214A40 00211980  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80214A44 00211984  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80214A48 00211988  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80214A4C 0021198C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80214A50 00211990  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80214A54 00211994  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80214A58 00211998  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80214A5C 0021199C  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 80214A60 002119A0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214A64 002119A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214A68 002119A8  7D 89 03 A6 */	mtctr r12
/* 80214A6C 002119AC  4E 80 04 21 */	bctrl 
/* 80214A70 002119B0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80214A74 002119B4  7F 83 E3 78 */	mr r3, r28
/* 80214A78 002119B8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80214A7C 002119BC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80214A80 002119C0  D0 41 00 CC */	stfs f2, 0xcc(r1)
/* 80214A84 002119C4  D0 21 00 D0 */	stfs f1, 0xd0(r1)
/* 80214A88 002119C8  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 80214A8C 002119CC  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214A90 002119D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214A94 002119D4  7D 89 03 A6 */	mtctr r12
/* 80214A98 002119D8  4E 80 04 21 */	bctrl 
/* 80214A9C 002119DC  D0 21 00 D8 */	stfs f1, 0xd8(r1)
/* 80214AA0 002119E0  38 81 00 B4 */	addi r4, r1, 0xb4
/* 80214AA4 002119E4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214AA8 002119E8  48 21 7F 29 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80214AAC 002119EC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214AB0 002119F0  38 80 00 00 */	li r4, 0
/* 80214AB4 002119F4  4B FD 28 F1 */	bl setDemoFlag__Q24Game8PlayDataFi
.L_80214AB8:
/* 80214AB8 002119F8  7F C3 F3 78 */	mr r3, r30
/* 80214ABC 002119FC  38 80 00 01 */	li r4, 1
/* 80214AC0 00211A00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80214AC4 00211A04  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80214AC8 00211A08  7D 89 03 A6 */	mtctr r12
/* 80214ACC 00211A0C  4E 80 04 21 */	bctrl 
/* 80214AD0 00211A10  48 00 01 28 */	b .L_80214BF8
.L_80214AD4:
/* 80214AD4 00211A14  28 1D 00 02 */	cmplwi r29, 2
/* 80214AD8 00211A18  40 82 01 20 */	bne .L_80214BF8
/* 80214ADC 00211A1C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214AE0 00211A20  38 80 00 13 */	li r4, 0x13
/* 80214AE4 00211A24  4B FD 28 FD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80214AE8 00211A28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214AEC 00211A2C  40 82 00 F4 */	bne .L_80214BE0
/* 80214AF0 00211A30  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214AF4 00211A34  4B F4 61 2D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80214AF8 00211A38  28 03 00 00 */	cmplwi r3, 0
/* 80214AFC 00211A3C  41 82 00 FC */	beq .L_80214BF8
/* 80214B00 00211A40  80 9E 02 2C */	lwz r4, 0x22c(r30)
/* 80214B04 00211A44  38 7F 01 D0 */	addi r3, r31, 0x1d0
/* 80214B08 00211A48  80 BE 00 C8 */	lwz r5, 0xc8(r30)
/* 80214B0C 00211A4C  38 00 00 00 */	li r0, 0
/* 80214B10 00211A50  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80214B14 00211A54  38 80 00 00 */	li r4, 0
/* 80214B18 00211A58  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80214B1C 00211A5C  90 61 00 80 */	stw r3, 0x80(r1)
/* 80214B20 00211A60  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214B24 00211A64  90 C1 00 84 */	stw r6, 0x84(r1)
/* 80214B28 00211A68  90 A1 00 8C */	stw r5, 0x8c(r1)
/* 80214B2C 00211A6C  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80214B30 00211A70  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80214B34 00211A74  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80214B38 00211A78  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 80214B3C 00211A7C  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80214B40 00211A80  90 01 00 90 */	stw r0, 0x90(r1)
/* 80214B44 00211A84  90 01 00 88 */	stw r0, 0x88(r1)
/* 80214B48 00211A88  90 01 00 AC */	stw r0, 0xac(r1)
/* 80214B4C 00211A8C  90 01 00 94 */	stw r0, 0x94(r1)
/* 80214B50 00211A90  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80214B54 00211A94  81 83 00 00 */	lwz r12, 0(r3)
/* 80214B58 00211A98  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80214B5C 00211A9C  7D 89 03 A6 */	mtctr r12
/* 80214B60 00211AA0  4E 80 04 21 */	bctrl 
/* 80214B64 00211AA4  7C 7C 1B 79 */	or. r28, r3, r3
/* 80214B68 00211AA8  40 82 00 10 */	bne .L_80214B78
/* 80214B6C 00211AAC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214B70 00211AB0  4B F4 60 B1 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80214B74 00211AB4  7C 7C 1B 78 */	mr r28, r3
.L_80214B78:
/* 80214B78 00211AB8  7F 84 E3 78 */	mr r4, r28
/* 80214B7C 00211ABC  38 61 00 08 */	addi r3, r1, 8
/* 80214B80 00211AC0  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214B84 00211AC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80214B88 00211AC8  7D 89 03 A6 */	mtctr r12
/* 80214B8C 00211ACC  4E 80 04 21 */	bctrl 
/* 80214B90 00211AD0  C0 41 00 08 */	lfs f2, 8(r1)
/* 80214B94 00211AD4  7F 83 E3 78 */	mr r3, r28
/* 80214B98 00211AD8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80214B9C 00211ADC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80214BA0 00211AE0  D0 41 00 98 */	stfs f2, 0x98(r1)
/* 80214BA4 00211AE4  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 80214BA8 00211AE8  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80214BAC 00211AEC  81 9C 00 00 */	lwz r12, 0(r28)
/* 80214BB0 00211AF0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80214BB4 00211AF4  7D 89 03 A6 */	mtctr r12
/* 80214BB8 00211AF8  4E 80 04 21 */	bctrl 
/* 80214BBC 00211AFC  D0 21 00 A4 */	stfs f1, 0xa4(r1)
/* 80214BC0 00211B00  38 81 00 80 */	addi r4, r1, 0x80
/* 80214BC4 00211B04  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214BC8 00211B08  48 21 7E 09 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80214BCC 00211B0C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214BD0 00211B10  38 80 00 13 */	li r4, 0x13
/* 80214BD4 00211B14  4B FD 27 D1 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214BD8 00211B18  48 00 00 08 */	b .L_80214BE0
/* 80214BDC 00211B1C  48 00 00 1C */	b .L_80214BF8
.L_80214BE0:
/* 80214BE0 00211B20  7F C3 F3 78 */	mr r3, r30
/* 80214BE4 00211B24  38 80 00 02 */	li r4, 2
/* 80214BE8 00211B28  81 9E 00 00 */	lwz r12, 0(r30)
/* 80214BEC 00211B2C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80214BF0 00211B30  7D 89 03 A6 */	mtctr r12
/* 80214BF4 00211B34  4E 80 04 21 */	bctrl 
.L_80214BF8:
/* 80214BF8 00211B38  80 01 01 D4 */	lwz r0, 0x1d4(r1)
/* 80214BFC 00211B3C  83 E1 01 CC */	lwz r31, 0x1cc(r1)
/* 80214C00 00211B40  83 C1 01 C8 */	lwz r30, 0x1c8(r1)
/* 80214C04 00211B44  83 A1 01 C4 */	lwz r29, 0x1c4(r1)
/* 80214C08 00211B48  83 81 01 C0 */	lwz r28, 0x1c0(r1)
/* 80214C0C 00211B4C  7C 08 03 A6 */	mtlr r0
/* 80214C10 00211B50  38 21 01 D0 */	addi r1, r1, 0x1d0
/* 80214C14 00211B54  4E 80 00 20 */	blr 
.endif

.if version == 1
.global exec__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
exec__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection:
/* 80214C18 00211B58  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 80214C1C 00211B5C  7C 08 02 A6 */	mflr r0
/* 80214C20 00211B60  90 01 01 44 */	stw r0, 0x144(r1)
/* 80214C24 00211B64  93 E1 01 3C */	stw r31, 0x13c(r1)
/* 80214C28 00211B68  93 C1 01 38 */	stw r30, 0x138(r1)
/* 80214C2C 00211B6C  7C 9E 23 78 */	mr r30, r4
/* 80214C30 00211B70  93 A1 01 34 */	stw r29, 0x134(r1)
/* 80214C34 00211B74  7C 7D 1B 78 */	mr r29, r3
/* 80214C38 00211B78  3C 60 80 48 */	lis r3, lbl_80482150@ha
/* 80214C3C 00211B7C  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 80214C40 00211B80  3B E3 21 50 */	addi r31, r3, lbl_80482150@l
/* 80214C44 00211B84  28 00 00 00 */	cmplwi r0, 0
/* 80214C48 00211B88  40 82 06 94 */	bne .L_802152DC
/* 80214C4C 00211B8C  88 1D 00 20 */	lbz r0, 0x20(r29)
/* 80214C50 00211B90  28 00 00 00 */	cmplwi r0, 0
/* 80214C54 00211B94  41 82 00 64 */	beq .L_80214CB8
/* 80214C58 00211B98  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80214C5C 00211B9C  48 1A 49 55 */	bl update__14TParticle2dMgrFv
/* 80214C60 00211BA0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214C64 00211BA4  48 1E 73 C9 */	bl update__Q26Screen9Game2DMgrFv
/* 80214C68 00211BA8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214C6C 00211BAC  48 1E 9A E1 */	bl check_Save__Q26Screen9Game2DMgrCFv
/* 80214C70 00211BB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214C74 00211BB4  41 82 06 68 */	beq .L_802152DC
/* 80214C78 00211BB8  38 E0 00 00 */	li r7, 0
/* 80214C7C 00211BBC  38 60 00 01 */	li r3, 1
/* 80214C80 00211BC0  38 00 00 64 */	li r0, 0x64
/* 80214C84 00211BC4  98 61 00 18 */	stb r3, 0x18(r1)
/* 80214C88 00211BC8  7F A3 EB 78 */	mr r3, r29
/* 80214C8C 00211BCC  7F C4 F3 78 */	mr r4, r30
/* 80214C90 00211BD0  98 E1 00 19 */	stb r7, 0x19(r1)
/* 80214C94 00211BD4  38 C1 00 18 */	addi r6, r1, 0x18
/* 80214C98 00211BD8  38 A0 00 02 */	li r5, 2
/* 80214C9C 00211BDC  98 E1 00 1A */	stb r7, 0x1a(r1)
/* 80214CA0 00211BE0  B0 01 00 1C */	sth r0, 0x1c(r1)
/* 80214CA4 00211BE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214CA8 00211BE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214CAC 00211BEC  7D 89 03 A6 */	mtctr r12
/* 80214CB0 00211BF0  4E 80 04 21 */	bctrl 
/* 80214CB4 00211BF4  48 00 06 28 */	b .L_802152DC
.L_80214CB8:
/* 80214CB8 00211BF8  7F C3 F3 78 */	mr r3, r30
/* 80214CBC 00211BFC  4B F3 6B C1 */	bl doUpdate__Q24Game15BaseGameSectionFv
/* 80214CC0 00211C00  80 7E 02 50 */	lwz r3, 0x274(r30)
/* 80214CC4 00211C04  80 1D 00 04 */	lwz r0, 4(r29)
/* 80214CC8 00211C08  80 63 00 04 */	lwz r3, 4(r3)
/* 80214CCC 00211C0C  7C 03 00 00 */	cmpw r3, r0
/* 80214CD0 00211C10  40 82 06 0C */	bne .L_802152DC
/* 80214CD4 00211C14  7F C3 F3 78 */	mr r3, r30
/* 80214CD8 00211C18  4B F4 08 15 */	bl updateMainMapScreen__Q24Game17SingleGameSectionFv
/* 80214CDC 00211C1C  38 60 FF FF */	li r3, -1
/* 80214CE0 00211C20  4B FB C1 81 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80214CE4 00211C24  2C 03 00 0F */	cmpwi r3, 0xf
/* 80214CE8 00211C28  41 80 00 64 */	blt .L_80214D4C
/* 80214CEC 00211C2C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214CF0 00211C30  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80214CF4 00211C34  2C 00 00 00 */	cmpwi r0, 0
/* 80214CF8 00211C38  40 82 00 54 */	bne .L_80214D4C
/* 80214CFC 00211C3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214D00 00211C40  38 80 00 30 */	li r4, 0x30
/* 80214D04 00211C44  4B FD 26 DD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80214D08 00211C48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214D0C 00211C4C  40 82 00 40 */	bne .L_80214D4C
/* 80214D10 00211C50  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214D14 00211C54  38 80 00 01 */	li r4, 1
/* 80214D18 00211C58  4B FD 23 C1 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 80214D1C 00211C5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214D20 00211C60  41 82 00 2C */	beq .L_80214D4C
/* 80214D24 00211C64  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214D28 00211C68  38 80 00 30 */	li r4, 0x30
/* 80214D2C 00211C6C  4B FD 26 79 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214D30 00211C70  7F C3 F3 78 */	mr r3, r30
/* 80214D34 00211C74  C0 22 BC 54 */	lfs f1, lbl_80519FB4@sda21(r2)
/* 80214D38 00211C78  81 9E 00 00 */	lwz r12, 0(r30)
/* 80214D3C 00211C7C  38 80 00 07 */	li r4, 7
/* 80214D40 00211C80  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80214D44 00211C84  7D 89 03 A6 */	mtctr r12
/* 80214D48 00211C88  4E 80 04 21 */	bctrl 
.L_80214D4C:
/* 80214D4C 00211C8C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214D50 00211C90  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80214D54 00211C94  2C 00 00 00 */	cmpwi r0, 0
/* 80214D58 00211C98  40 82 00 1C */	bne .L_80214D74
/* 80214D5C 00211C9C  7F A3 EB 78 */	mr r3, r29
/* 80214D60 00211CA0  48 00 24 FD */	bl needRepayDemo__Q34Game10SingleGame9GameStateFv
/* 80214D64 00211CA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214D68 00211CA8  41 82 00 0C */	beq .L_80214D74
/* 80214D6C 00211CAC  7F A3 EB 78 */	mr r3, r29
/* 80214D70 00211CB0  48 00 25 61 */	bl startRepayDemo__Q34Game10SingleGame9GameStateFv
.L_80214D74:
/* 80214D74 00211CB4  7F A3 EB 78 */	mr r3, r29
/* 80214D78 00211CB8  48 00 26 99 */	bl updateRepayDemo__Q34Game10SingleGame9GameStateFv
/* 80214D7C 00211CBC  2C 03 00 03 */	cmpwi r3, 3
/* 80214D80 00211CC0  41 82 00 28 */	beq .L_80214DA8
/* 80214D84 00211CC4  40 80 00 14 */	bge .L_80214D98
/* 80214D88 00211CC8  2C 03 00 01 */	cmpwi r3, 1
/* 80214D8C 00211CCC  41 82 05 50 */	beq .L_802152DC
/* 80214D90 00211CD0  40 80 00 D8 */	bge .L_80214E68
/* 80214D94 00211CD4  48 00 00 F0 */	b .L_80214E84
.L_80214D98:
/* 80214D98 00211CD8  2C 03 00 05 */	cmpwi r3, 5
/* 80214D9C 00211CDC  40 80 00 E8 */	bge .L_80214E84
/* 80214DA0 00211CE0  48 00 00 68 */	b .L_80214E08
/* 80214DA4 00211CE4  48 00 05 38 */	b .L_802152DC
.L_80214DA8:
/* 80214DA8 00211CE8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80214DAC 00211CEC  38 80 00 00 */	li r4, 0
/* 80214DB0 00211CF0  4B F4 AF 05 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 80214DB4 00211CF4  80 9E 02 2C */	lwz r4, 0x250(r30)
/* 80214DB8 00211CF8  7F C3 F3 78 */	mr r3, r30
/* 80214DBC 00211CFC  4B F3 89 D5 */	bl saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
/* 80214DC0 00211D00  7F C3 F3 78 */	mr r3, r30
/* 80214DC4 00211D04  4B F3 89 29 */	bl advanceDayCount__Q24Game15BaseGameSectionFv
/* 80214DC8 00211D08  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214DCC 00211D0C  38 BF 01 E0 */	addi r5, r31, 0x1e0
/* 80214DD0 00211D10  38 80 00 00 */	li r4, 0
/* 80214DD4 00211D14  38 C0 00 03 */	li r6, 3
/* 80214DD8 00211D18  4B FA 01 BD */	bl setPause__Q24Game10GameSystemFbPci
/* 80214DDC 00211D1C  38 00 00 00 */	li r0, 0
/* 80214DE0 00211D20  7F A3 EB 78 */	mr r3, r29
/* 80214DE4 00211D24  98 01 00 0C */	stb r0, 0xc(r1)
/* 80214DE8 00211D28  7F C4 F3 78 */	mr r4, r30
/* 80214DEC 00211D2C  38 C1 00 0C */	addi r6, r1, 0xc
/* 80214DF0 00211D30  38 A0 00 0B */	li r5, 0xb
/* 80214DF4 00211D34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214DF8 00211D38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214DFC 00211D3C  7D 89 03 A6 */	mtctr r12
/* 80214E00 00211D40  4E 80 04 21 */	bctrl 
/* 80214E04 00211D44  48 00 04 D8 */	b .L_802152DC
.L_80214E08:
/* 80214E08 00211D48  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80214E0C 00211D4C  38 80 00 00 */	li r4, 0
/* 80214E10 00211D50  4B F4 AE A5 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 80214E14 00211D54  80 9E 02 2C */	lwz r4, 0x250(r30)
/* 80214E18 00211D58  7F C3 F3 78 */	mr r3, r30
/* 80214E1C 00211D5C  4B F3 89 75 */	bl saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
/* 80214E20 00211D60  7F C3 F3 78 */	mr r3, r30
/* 80214E24 00211D64  4B F3 88 C9 */	bl advanceDayCount__Q24Game15BaseGameSectionFv
/* 80214E28 00211D68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214E2C 00211D6C  38 BF 01 E0 */	addi r5, r31, 0x1e0
/* 80214E30 00211D70  38 80 00 00 */	li r4, 0
/* 80214E34 00211D74  38 C0 00 03 */	li r6, 3
/* 80214E38 00211D78  4B FA 01 5D */	bl setPause__Q24Game10GameSystemFbPci
/* 80214E3C 00211D7C  38 00 00 02 */	li r0, 2
/* 80214E40 00211D80  7F A3 EB 78 */	mr r3, r29
/* 80214E44 00211D84  98 01 00 08 */	stb r0, 8(r1)
/* 80214E48 00211D88  7F C4 F3 78 */	mr r4, r30
/* 80214E4C 00211D8C  38 C1 00 08 */	addi r6, r1, 8
/* 80214E50 00211D90  38 A0 00 0B */	li r5, 0xb
/* 80214E54 00211D94  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214E58 00211D98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214E5C 00211D9C  7D 89 03 A6 */	mtctr r12
/* 80214E60 00211DA0  4E 80 04 21 */	bctrl 
/* 80214E64 00211DA4  48 00 04 78 */	b .L_802152DC
.L_80214E68:
/* 80214E68 00211DA8  48 25 6C E1 */	bl PSPause_StartMenuOff__Fv
/* 80214E6C 00211DAC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214E70 00211DB0  38 BF 01 E0 */	addi r5, r31, 0x1e0
/* 80214E74 00211DB4  38 80 00 00 */	li r4, 0
/* 80214E78 00211DB8  38 C0 00 03 */	li r6, 3
/* 80214E7C 00211DBC  4B FA 01 19 */	bl setPause__Q24Game10GameSystemFbPci
/* 80214E80 00211DC0  48 00 04 5C */	b .L_802152DC
.L_80214E84:
/* 80214E84 00211DC4  88 1E 01 80 */	lbz r0, 0x1a4(r30)
/* 80214E88 00211DC8  28 00 00 00 */	cmplwi r0, 0
/* 80214E8C 00211DCC  41 82 00 14 */	beq .L_80214EA0
/* 80214E90 00211DD0  7F C3 F3 78 */	mr r3, r30
/* 80214E94 00211DD4  4B F3 F8 89 */	bl updateCaveMenus__Q24Game17SingleGameSectionFv
/* 80214E98 00211DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214E9C 00211DDC  41 82 04 40 */	beq .L_802152DC
.L_80214EA0:
/* 80214EA0 00211DE0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214EA4 00211DE4  80 9E 01 0C */	lwz r4, 0x12c(r30)
/* 80214EA8 00211DE8  48 1E 71 D1 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80214EAC 00211DEC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214EB0 00211DF0  48 1E 80 81 */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 80214EB4 00211DF4  2C 03 00 02 */	cmpwi r3, 2
/* 80214EB8 00211DF8  41 82 00 50 */	beq .L_80214F08
/* 80214EBC 00211DFC  40 80 00 14 */	bge .L_80214ED0
/* 80214EC0 00211E00  2C 03 00 00 */	cmpwi r3, 0
/* 80214EC4 00211E04  41 82 01 F0 */	beq .L_802150B4
/* 80214EC8 00211E08  40 80 00 18 */	bge .L_80214EE0
/* 80214ECC 00211E0C  48 00 01 60 */	b .L_8021502C
.L_80214ED0:
/* 80214ED0 00211E10  2C 03 00 04 */	cmpwi r3, 4
/* 80214ED4 00211E14  41 82 01 40 */	beq .L_80215014
/* 80214ED8 00211E18  40 80 01 54 */	bge .L_8021502C
/* 80214EDC 00211E1C  48 00 00 8C */	b .L_80214F68
.L_80214EE0:
/* 80214EE0 00211E20  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214EE4 00211E24  38 80 00 00 */	li r4, 0
/* 80214EE8 00211E28  38 A2 BC 58 */	addi r5, r2, lbl_80519FB8@sda21
/* 80214EEC 00211E2C  4B FA 00 99 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80214EF0 00211E30  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214EF4 00211E34  38 80 00 00 */	li r4, 0
/* 80214EF8 00211E38  38 A2 BC 58 */	addi r5, r2, lbl_80519FB8@sda21
/* 80214EFC 00211E3C  38 C0 00 03 */	li r6, 3
/* 80214F00 00211E40  4B FA 00 95 */	bl setPause__Q24Game10GameSystemFbPci
/* 80214F04 00211E44  48 00 01 B0 */	b .L_802150B4
.L_80214F08:
/* 80214F08 00211E48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214F0C 00211E4C  38 80 00 00 */	li r4, 0
/* 80214F10 00211E50  38 A2 BC 60 */	addi r5, r2, lbl_80519FC0@sda21
/* 80214F14 00211E54  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80214F18 00211E58  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80214F1C 00211E5C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80214F20 00211E60  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214F24 00211E64  4B FA 00 61 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80214F28 00211E68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214F2C 00211E6C  38 80 00 00 */	li r4, 0
/* 80214F30 00211E70  38 A2 BC 60 */	addi r5, r2, lbl_80519FC0@sda21
/* 80214F34 00211E74  38 C0 00 03 */	li r6, 3
/* 80214F38 00211E78  4B FA 00 5D */	bl setPause__Q24Game10GameSystemFbPci
/* 80214F3C 00211E7C  38 00 00 00 */	li r0, 0
/* 80214F40 00211E80  7F A3 EB 78 */	mr r3, r29
/* 80214F44 00211E84  B0 01 00 14 */	sth r0, 0x14(r1)
/* 80214F48 00211E88  7F C4 F3 78 */	mr r4, r30
/* 80214F4C 00211E8C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80214F50 00211E90  38 A0 00 05 */	li r5, 5
/* 80214F54 00211E94  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214F58 00211E98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214F5C 00211E9C  7D 89 03 A6 */	mtctr r12
/* 80214F60 00211EA0  4E 80 04 21 */	bctrl 
/* 80214F64 00211EA4  48 00 03 78 */	b .L_802152DC
.L_80214F68:
/* 80214F68 00211EA8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214F6C 00211EAC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80214F70 00211EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214F74 00211EB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214F78 00211EB8  7D 89 03 A6 */	mtctr r12
/* 80214F7C 00211EBC  4E 80 04 21 */	bctrl 
/* 80214F80 00211EC0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80214F84 00211EC4  28 00 00 01 */	cmplwi r0, 1
/* 80214F88 00211EC8  41 82 00 18 */	beq .L_80214FA0
/* 80214F8C 00211ECC  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80214F90 00211ED0  38 BF 00 94 */	addi r5, r31, 0x94
/* 80214F94 00211ED4  38 80 05 18 */	li r4, 0x518
/* 80214F98 00211ED8  4C C6 31 82 */	crclr 6
/* 80214F9C 00211EDC  4B E1 56 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80214FA0:
/* 80214FA0 00211EE0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214FA4 00211EE4  38 00 00 00 */	li r0, 0
/* 80214FA8 00211EE8  98 03 00 20 */	stb r0, 0x20(r3)
/* 80214FAC 00211EEC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214FB0 00211EF0  4B F4 62 41 */	bl clearDeadCount__Q24Game7NaviMgrFv
/* 80214FB4 00211EF4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214FB8 00211EF8  38 80 00 00 */	li r4, 0
/* 80214FBC 00211EFC  38 A2 BC 68 */	addi r5, r2, lbl_80519FC8@sda21
/* 80214FC0 00211F00  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80214FC4 00211F04  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80214FC8 00211F08  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80214FCC 00211F0C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214FD0 00211F10  4B F9 FF B5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80214FD4 00211F14  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214FD8 00211F18  38 80 00 00 */	li r4, 0
/* 80214FDC 00211F1C  38 A2 BC 68 */	addi r5, r2, lbl_80519FC8@sda21
/* 80214FE0 00211F20  38 C0 00 03 */	li r6, 3
/* 80214FE4 00211F24  4B F9 FF B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 80214FE8 00211F28  7F C3 F3 78 */	mr r3, r30
/* 80214FEC 00211F2C  4B F3 AD B9 */	bl clearHeap__Q24Game15BaseGameSectionFv
/* 80214FF0 00211F30  7F A3 EB 78 */	mr r3, r29
/* 80214FF4 00211F34  7F C4 F3 78 */	mr r4, r30
/* 80214FF8 00211F38  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214FFC 00211F3C  38 A0 00 00 */	li r5, 0
/* 80215000 00211F40  38 C0 00 00 */	li r6, 0
/* 80215004 00211F44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215008 00211F48  7D 89 03 A6 */	mtctr r12
/* 8021500C 00211F4C  4E 80 04 21 */	bctrl 
/* 80215010 00211F50  48 00 02 CC */	b .L_802152DC
.L_80215014:
/* 80215014 00211F54  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80215018 00211F58  38 BF 01 EC */	addi r5, r31, 0x1ec
/* 8021501C 00211F5C  38 80 05 26 */	li r4, 0x526
/* 80215020 00211F60  4C C6 31 82 */	crclr 6
/* 80215024 00211F64  4B E1 56 1D */	bl panic_f__12JUTExceptionFPCciPCce
/* 80215028 00211F68  48 00 00 8C */	b .L_802150B4
.L_8021502C:
/* 8021502C 00211F6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215030 00211F70  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215034 00211F74  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80215038 00211F78  40 82 00 7C */	bne .L_802150B4
/* 8021503C 00211F7C  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 80215040 00211F80  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80215044 00211F84  2C 00 00 00 */	cmpwi r0, 0
/* 80215048 00211F88  40 82 00 6C */	bne .L_802150B4
/* 8021504C 00211F8C  4B F9 FF 7D */	bl paused__Q24Game10GameSystemFv
/* 80215050 00211F90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215054 00211F94  40 82 00 60 */	bne .L_802150B4
/* 80215058 00211F98  80 7E 01 0C */	lwz r3, 0x12c(r30)
/* 8021505C 00211F9C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80215060 00211FA0  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 80215064 00211FA4  41 82 00 50 */	beq .L_802150B4
/* 80215068 00211FA8  38 61 00 60 */	addi r3, r1, 0x60
/* 8021506C 00211FAC  48 00 02 8D */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 80215070 00211FB0  7F C3 F3 78 */	mr r3, r30
/* 80215074 00211FB4  38 81 00 60 */	addi r4, r1, 0x60
/* 80215078 00211FB8  4B F3 FF 61 */	bl setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
/* 8021507C 00211FBC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80215080 00211FC0  38 81 00 60 */	addi r4, r1, 0x60
/* 80215084 00211FC4  48 1E 7C 4D */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 80215088 00211FC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021508C 00211FCC  41 82 00 28 */	beq .L_802150B4
/* 80215090 00211FD0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215094 00211FD4  38 80 00 01 */	li r4, 1
/* 80215098 00211FD8  38 A2 BC 70 */	addi r5, r2, lbl_80519FD0@sda21
/* 8021509C 00211FDC  38 C0 00 03 */	li r6, 3
/* 802150A0 00211FE0  4B F9 FE F5 */	bl setPause__Q24Game10GameSystemFbPci
/* 802150A4 00211FE4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802150A8 00211FE8  38 80 00 01 */	li r4, 1
/* 802150AC 00211FEC  38 A2 BC 70 */	addi r5, r2, lbl_80519FD0@sda21
/* 802150B0 00211FF0  4B F9 FE D5 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_802150B4:
/* 802150B4 00211FF4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802150B8 00211FF8  4B F9 FF 09 */	bl paused_soft__Q24Game10GameSystemFv
/* 802150BC 00211FFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802150C0 00212000  40 82 00 74 */	bne .L_80215134
/* 802150C4 00212004  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802150C8 00212008  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802150CC 0021200C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 802150D0 00212010  40 82 00 64 */	bne .L_80215134
/* 802150D4 00212014  80 63 00 40 */	lwz r3, 0x40(r3)
/* 802150D8 00212018  4B F1 22 C1 */	bl isDayOver__Q24Game7TimeMgrFv
/* 802150DC 0021201C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802150E0 00212020  41 82 00 54 */	beq .L_80215134
/* 802150E4 00212024  88 1E 01 80 */	lbz r0, 0x1a4(r30)
/* 802150E8 00212028  28 00 00 00 */	cmplwi r0, 0
/* 802150EC 0021202C  40 82 00 48 */	bne .L_80215134
/* 802150F0 00212030  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802150F4 00212034  88 64 00 3C */	lbz r3, 0x3c(r4)
/* 802150F8 00212038  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 802150FC 0021203C  41 82 00 38 */	beq .L_80215134
/* 80215100 00212040  54 63 06 F2 */	rlwinm r3, r3, 0, 0x1b, 0x19
/* 80215104 00212044  38 00 00 00 */	li r0, 0
/* 80215108 00212048  98 64 00 3C */	stb r3, 0x3c(r4)
/* 8021510C 0021204C  7F A3 EB 78 */	mr r3, r29
/* 80215110 00212050  7F C4 F3 78 */	mr r4, r30
/* 80215114 00212054  38 C1 00 10 */	addi r6, r1, 0x10
/* 80215118 00212058  B0 01 00 10 */	sth r0, 0x10(r1)
/* 8021511C 0021205C  38 A0 00 05 */	li r5, 5
/* 80215120 00212060  81 9D 00 00 */	lwz r12, 0(r29)
/* 80215124 00212064  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215128 00212068  7D 89 03 A6 */	mtctr r12
/* 8021512C 0021206C  4E 80 04 21 */	bctrl 
/* 80215130 00212070  48 00 01 AC */	b .L_802152DC
.L_80215134:
/* 80215134 00212074  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 80215138 00212078  28 00 00 00 */	cmplwi r0, 0
/* 8021513C 0021207C  40 82 01 3C */	bne .L_80215278
/* 80215140 00212080  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215144 00212084  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80215148 00212088  2C 00 00 00 */	cmpwi r0, 0
/* 8021514C 0021208C  40 82 01 2C */	bne .L_80215278
/* 80215150 00212090  38 60 FF FF */	li r3, -1
/* 80215154 00212094  4B FB BD E9 */	bl getAllPikmins__Q24Game8GameStatFi
/* 80215158 00212098  7C 7D 1B 78 */	mr r29, r3
/* 8021515C 0021209C  38 60 FF FF */	li r3, -1
/* 80215160 002120A0  4B FB BD 8D */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80215164 002120A4  7C 03 E8 51 */	subf. r0, r3, r29
/* 80215168 002120A8  40 82 01 10 */	bne .L_80215278
/* 8021516C 002120AC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215170 002120B0  38 80 00 01 */	li r4, 1
/* 80215174 002120B4  4B FD 1F 65 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 80215178 002120B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021517C 002120BC  41 82 00 FC */	beq .L_80215278
/* 80215180 002120C0  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80215184 002120C4  38 9F 01 FC */	addi r4, r31, 0x1fc
/* 80215188 002120C8  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 8021518C 002120CC  38 00 00 00 */	li r0, 0
/* 80215190 002120D0  88 65 00 3C */	lbz r3, 0x3c(r5)
/* 80215194 002120D4  54 63 06 F2 */	rlwinm r3, r3, 0, 0x1b, 0x19
/* 80215198 002120D8  98 65 00 3C */	stb r3, 0x3c(r5)
/* 8021519C 002120DC  80 BE 00 C8 */	lwz r5, 0xe8(r30)
/* 802151A0 002120E0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802151A4 002120E4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 802151A8 002120E8  90 01 00 30 */	stw r0, 0x30(r1)
/* 802151AC 002120EC  90 A1 00 38 */	stw r5, 0x38(r1)
/* 802151B0 002120F0  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 802151B4 002120F4  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 802151B8 002120F8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802151BC 002120FC  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 802151C0 00212100  90 01 00 54 */	stw r0, 0x54(r1)
/* 802151C4 00212104  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802151C8 00212108  90 01 00 34 */	stw r0, 0x34(r1)
/* 802151CC 0021210C  90 01 00 58 */	stw r0, 0x58(r1)
/* 802151D0 00212110  90 01 00 40 */	stw r0, 0x40(r1)
/* 802151D4 00212114  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802151D8 00212118  4B F4 5A 49 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802151DC 0021211C  7C 7D 1B 79 */	or. r29, r3, r3
/* 802151E0 00212120  40 82 00 38 */	bne .L_80215218
/* 802151E4 00212124  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802151E8 00212128  38 80 00 01 */	li r4, 1
/* 802151EC 0021212C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802151F0 00212130  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 802151F4 00212134  2C 00 00 00 */	cmpwi r0, 0
/* 802151F8 00212138  40 82 00 08 */	bne .L_80215200
/* 802151FC 0021213C  38 80 00 00 */	li r4, 0
.L_80215200:
/* 80215200 00212140  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80215204 00212144  81 83 00 00 */	lwz r12, 0(r3)
/* 80215208 00212148  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8021520C 0021214C  7D 89 03 A6 */	mtctr r12
/* 80215210 00212150  4E 80 04 21 */	bctrl 
/* 80215214 00212154  7C 7D 1B 78 */	mr r29, r3
.L_80215218:
/* 80215218 00212158  80 1E 00 CC */	lwz r0, 0xec(r30)
/* 8021521C 0021215C  7F A4 EB 78 */	mr r4, r29
/* 80215220 00212160  38 61 00 20 */	addi r3, r1, 0x20
/* 80215224 00212164  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80215228 00212168  81 9D 00 00 */	lwz r12, 0(r29)
/* 8021522C 0021216C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80215230 00212170  7D 89 03 A6 */	mtctr r12
/* 80215234 00212174  4E 80 04 21 */	bctrl 
/* 80215238 00212178  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8021523C 0021217C  7F A3 EB 78 */	mr r3, r29
/* 80215240 00212180  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80215244 00212184  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80215248 00212188  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8021524C 0021218C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80215250 00212190  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80215254 00212194  81 9D 00 00 */	lwz r12, 0(r29)
/* 80215258 00212198  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8021525C 0021219C  7D 89 03 A6 */	mtctr r12
/* 80215260 002121A0  4E 80 04 21 */	bctrl 
/* 80215264 002121A4  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80215268 002121A8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8021526C 002121AC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215270 002121B0  48 21 77 61 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215274 002121B4  48 00 00 68 */	b .L_802152DC
.L_80215278:
/* 80215278 002121B8  48 24 3B 19 */	bl PSMGetPikminNumD__Fv
/* 8021527C 002121BC  7C 60 1B 78 */	mr r0, r3
/* 80215280 002121C0  38 60 FF FF */	li r3, -1
/* 80215284 002121C4  7C 1D 03 78 */	mr r29, r0
/* 80215288 002121C8  4B FB BB 89 */	bl getMapPikmins_exclude_Me__Q24Game8GameStatFi
/* 8021528C 002121CC  2C 03 00 0A */	cmpwi r3, 0xa
/* 80215290 002121D0  40 80 00 30 */	bge .L_802152C0
/* 80215294 002121D4  80 0D 96 18 */	lwz r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 80215298 002121D8  2C 00 00 00 */	cmpwi r0, 0
/* 8021529C 002121DC  40 81 00 24 */	ble .L_802152C0
/* 802152A0 002121E0  28 1D 00 00 */	cmplwi r29, 0
/* 802152A4 002121E4  41 82 00 38 */	beq .L_802152DC
/* 802152A8 002121E8  7F A3 EB 78 */	mr r3, r29
/* 802152AC 002121EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802152B0 002121F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802152B4 002121F4  7D 89 03 A6 */	mtctr r12
/* 802152B8 002121F8  4E 80 04 21 */	bctrl 
/* 802152BC 002121FC  48 00 00 20 */	b .L_802152DC
.L_802152C0:
/* 802152C0 00212200  28 1D 00 00 */	cmplwi r29, 0
/* 802152C4 00212204  41 82 00 18 */	beq .L_802152DC
/* 802152C8 00212208  7F A3 EB 78 */	mr r3, r29
/* 802152CC 0021220C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802152D0 00212210  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802152D4 00212214  7D 89 03 A6 */	mtctr r12
/* 802152D8 00212218  4E 80 04 21 */	bctrl 
.L_802152DC:
/* 802152DC 0021221C  80 01 01 44 */	lwz r0, 0x144(r1)
/* 802152E0 00212220  83 E1 01 3C */	lwz r31, 0x13c(r1)
/* 802152E4 00212224  83 C1 01 38 */	lwz r30, 0x138(r1)
/* 802152E8 00212228  83 A1 01 34 */	lwz r29, 0x134(r1)
/* 802152EC 0021222C  7C 08 03 A6 */	mtlr r0
/* 802152F0 00212230  38 21 01 40 */	addi r1, r1, 0x140
/* 802152F4 00212234  4E 80 00 20 */	blr 
.else
.global exec__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
exec__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection:
/* 80214C18 00211B58  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 80214C1C 00211B5C  7C 08 02 A6 */	mflr r0
/* 80214C20 00211B60  90 01 01 44 */	stw r0, 0x144(r1)
/* 80214C24 00211B64  93 E1 01 3C */	stw r31, 0x13c(r1)
/* 80214C28 00211B68  93 C1 01 38 */	stw r30, 0x138(r1)
/* 80214C2C 00211B6C  7C 9E 23 78 */	mr r30, r4
/* 80214C30 00211B70  93 A1 01 34 */	stw r29, 0x134(r1)
/* 80214C34 00211B74  7C 7D 1B 78 */	mr r29, r3
/* 80214C38 00211B78  3C 60 80 48 */	lis r3, lbl_80482150@ha
/* 80214C3C 00211B7C  88 1D 00 18 */	lbz r0, 0x18(r29)
/* 80214C40 00211B80  3B E3 21 50 */	addi r31, r3, lbl_80482150@l
/* 80214C44 00211B84  28 00 00 00 */	cmplwi r0, 0
/* 80214C48 00211B88  40 82 06 94 */	bne .L_802152DC
/* 80214C4C 00211B8C  88 1D 00 20 */	lbz r0, 0x20(r29)
/* 80214C50 00211B90  28 00 00 00 */	cmplwi r0, 0
/* 80214C54 00211B94  41 82 00 64 */	beq .L_80214CB8
/* 80214C58 00211B98  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80214C5C 00211B9C  48 1A 49 55 */	bl update__14TParticle2dMgrFv
/* 80214C60 00211BA0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214C64 00211BA4  48 1E 73 C9 */	bl update__Q26Screen9Game2DMgrFv
/* 80214C68 00211BA8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214C6C 00211BAC  48 1E 9A E1 */	bl check_Save__Q26Screen9Game2DMgrCFv
/* 80214C70 00211BB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214C74 00211BB4  41 82 06 68 */	beq .L_802152DC
/* 80214C78 00211BB8  38 E0 00 00 */	li r7, 0
/* 80214C7C 00211BBC  38 60 00 01 */	li r3, 1
/* 80214C80 00211BC0  38 00 00 64 */	li r0, 0x64
/* 80214C84 00211BC4  98 61 00 18 */	stb r3, 0x18(r1)
/* 80214C88 00211BC8  7F A3 EB 78 */	mr r3, r29
/* 80214C8C 00211BCC  7F C4 F3 78 */	mr r4, r30
/* 80214C90 00211BD0  98 E1 00 19 */	stb r7, 0x19(r1)
/* 80214C94 00211BD4  38 C1 00 18 */	addi r6, r1, 0x18
/* 80214C98 00211BD8  38 A0 00 02 */	li r5, 2
/* 80214C9C 00211BDC  98 E1 00 1A */	stb r7, 0x1a(r1)
/* 80214CA0 00211BE0  B0 01 00 1C */	sth r0, 0x1c(r1)
/* 80214CA4 00211BE4  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214CA8 00211BE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214CAC 00211BEC  7D 89 03 A6 */	mtctr r12
/* 80214CB0 00211BF0  4E 80 04 21 */	bctrl 
/* 80214CB4 00211BF4  48 00 06 28 */	b .L_802152DC
.L_80214CB8:
/* 80214CB8 00211BF8  7F C3 F3 78 */	mr r3, r30
/* 80214CBC 00211BFC  4B F3 6B C1 */	bl doUpdate__Q24Game15BaseGameSectionFv
/* 80214CC0 00211C00  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 80214CC4 00211C04  80 1D 00 04 */	lwz r0, 4(r29)
/* 80214CC8 00211C08  80 63 00 04 */	lwz r3, 4(r3)
/* 80214CCC 00211C0C  7C 03 00 00 */	cmpw r3, r0
/* 80214CD0 00211C10  40 82 06 0C */	bne .L_802152DC
/* 80214CD4 00211C14  7F C3 F3 78 */	mr r3, r30
/* 80214CD8 00211C18  4B F4 08 15 */	bl updateMainMapScreen__Q24Game17SingleGameSectionFv
/* 80214CDC 00211C1C  38 60 FF FF */	li r3, -1
/* 80214CE0 00211C20  4B FB C1 81 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80214CE4 00211C24  2C 03 00 0F */	cmpwi r3, 0xf
/* 80214CE8 00211C28  41 80 00 64 */	blt .L_80214D4C
/* 80214CEC 00211C2C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214CF0 00211C30  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80214CF4 00211C34  2C 00 00 00 */	cmpwi r0, 0
/* 80214CF8 00211C38  40 82 00 54 */	bne .L_80214D4C
/* 80214CFC 00211C3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214D00 00211C40  38 80 00 30 */	li r4, 0x30
/* 80214D04 00211C44  4B FD 26 DD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80214D08 00211C48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214D0C 00211C4C  40 82 00 40 */	bne .L_80214D4C
/* 80214D10 00211C50  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214D14 00211C54  38 80 00 01 */	li r4, 1
/* 80214D18 00211C58  4B FD 23 C1 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 80214D1C 00211C5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214D20 00211C60  41 82 00 2C */	beq .L_80214D4C
/* 80214D24 00211C64  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214D28 00211C68  38 80 00 30 */	li r4, 0x30
/* 80214D2C 00211C6C  4B FD 26 79 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80214D30 00211C70  7F C3 F3 78 */	mr r3, r30
/* 80214D34 00211C74  C0 22 BC 54 */	lfs f1, lbl_80519FB4@sda21(r2)
/* 80214D38 00211C78  81 9E 00 00 */	lwz r12, 0(r30)
/* 80214D3C 00211C7C  38 80 00 07 */	li r4, 7
/* 80214D40 00211C80  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80214D44 00211C84  7D 89 03 A6 */	mtctr r12
/* 80214D48 00211C88  4E 80 04 21 */	bctrl 
.L_80214D4C:
/* 80214D4C 00211C8C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80214D50 00211C90  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80214D54 00211C94  2C 00 00 00 */	cmpwi r0, 0
/* 80214D58 00211C98  40 82 00 1C */	bne .L_80214D74
/* 80214D5C 00211C9C  7F A3 EB 78 */	mr r3, r29
/* 80214D60 00211CA0  48 00 24 FD */	bl needRepayDemo__Q34Game10SingleGame9GameStateFv
/* 80214D64 00211CA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214D68 00211CA8  41 82 00 0C */	beq .L_80214D74
/* 80214D6C 00211CAC  7F A3 EB 78 */	mr r3, r29
/* 80214D70 00211CB0  48 00 25 61 */	bl startRepayDemo__Q34Game10SingleGame9GameStateFv
.L_80214D74:
/* 80214D74 00211CB4  7F A3 EB 78 */	mr r3, r29
/* 80214D78 00211CB8  48 00 26 99 */	bl updateRepayDemo__Q34Game10SingleGame9GameStateFv
/* 80214D7C 00211CBC  2C 03 00 03 */	cmpwi r3, 3
/* 80214D80 00211CC0  41 82 00 28 */	beq .L_80214DA8
/* 80214D84 00211CC4  40 80 00 14 */	bge .L_80214D98
/* 80214D88 00211CC8  2C 03 00 01 */	cmpwi r3, 1
/* 80214D8C 00211CCC  41 82 05 50 */	beq .L_802152DC
/* 80214D90 00211CD0  40 80 00 D8 */	bge .L_80214E68
/* 80214D94 00211CD4  48 00 00 F0 */	b .L_80214E84
.L_80214D98:
/* 80214D98 00211CD8  2C 03 00 05 */	cmpwi r3, 5
/* 80214D9C 00211CDC  40 80 00 E8 */	bge .L_80214E84
/* 80214DA0 00211CE0  48 00 00 68 */	b .L_80214E08
/* 80214DA4 00211CE4  48 00 05 38 */	b .L_802152DC
.L_80214DA8:
/* 80214DA8 00211CE8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80214DAC 00211CEC  38 80 00 00 */	li r4, 0
/* 80214DB0 00211CF0  4B F4 AF 05 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 80214DB4 00211CF4  80 9E 02 2C */	lwz r4, 0x22c(r30)
/* 80214DB8 00211CF8  7F C3 F3 78 */	mr r3, r30
/* 80214DBC 00211CFC  4B F3 89 D5 */	bl saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
/* 80214DC0 00211D00  7F C3 F3 78 */	mr r3, r30
/* 80214DC4 00211D04  4B F3 89 29 */	bl advanceDayCount__Q24Game15BaseGameSectionFv
/* 80214DC8 00211D08  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214DCC 00211D0C  38 BF 01 E0 */	addi r5, r31, 0x1e0
/* 80214DD0 00211D10  38 80 00 00 */	li r4, 0
/* 80214DD4 00211D14  38 C0 00 03 */	li r6, 3
/* 80214DD8 00211D18  4B FA 01 BD */	bl setPause__Q24Game10GameSystemFbPci
/* 80214DDC 00211D1C  38 00 00 00 */	li r0, 0
/* 80214DE0 00211D20  7F A3 EB 78 */	mr r3, r29
/* 80214DE4 00211D24  98 01 00 0C */	stb r0, 0xc(r1)
/* 80214DE8 00211D28  7F C4 F3 78 */	mr r4, r30
/* 80214DEC 00211D2C  38 C1 00 0C */	addi r6, r1, 0xc
/* 80214DF0 00211D30  38 A0 00 0B */	li r5, 0xb
/* 80214DF4 00211D34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214DF8 00211D38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214DFC 00211D3C  7D 89 03 A6 */	mtctr r12
/* 80214E00 00211D40  4E 80 04 21 */	bctrl 
/* 80214E04 00211D44  48 00 04 D8 */	b .L_802152DC
.L_80214E08:
/* 80214E08 00211D48  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80214E0C 00211D4C  38 80 00 00 */	li r4, 0
/* 80214E10 00211D50  4B F4 AE A5 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 80214E14 00211D54  80 9E 02 2C */	lwz r4, 0x22c(r30)
/* 80214E18 00211D58  7F C3 F3 78 */	mr r3, r30
/* 80214E1C 00211D5C  4B F3 89 75 */	bl saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
/* 80214E20 00211D60  7F C3 F3 78 */	mr r3, r30
/* 80214E24 00211D64  4B F3 88 C9 */	bl advanceDayCount__Q24Game15BaseGameSectionFv
/* 80214E28 00211D68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214E2C 00211D6C  38 BF 01 E0 */	addi r5, r31, 0x1e0
/* 80214E30 00211D70  38 80 00 00 */	li r4, 0
/* 80214E34 00211D74  38 C0 00 03 */	li r6, 3
/* 80214E38 00211D78  4B FA 01 5D */	bl setPause__Q24Game10GameSystemFbPci
/* 80214E3C 00211D7C  38 00 00 02 */	li r0, 2
/* 80214E40 00211D80  7F A3 EB 78 */	mr r3, r29
/* 80214E44 00211D84  98 01 00 08 */	stb r0, 8(r1)
/* 80214E48 00211D88  7F C4 F3 78 */	mr r4, r30
/* 80214E4C 00211D8C  38 C1 00 08 */	addi r6, r1, 8
/* 80214E50 00211D90  38 A0 00 0B */	li r5, 0xb
/* 80214E54 00211D94  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214E58 00211D98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214E5C 00211D9C  7D 89 03 A6 */	mtctr r12
/* 80214E60 00211DA0  4E 80 04 21 */	bctrl 
/* 80214E64 00211DA4  48 00 04 78 */	b .L_802152DC
.L_80214E68:
/* 80214E68 00211DA8  48 25 6C E1 */	bl PSPause_StartMenuOff__Fv
/* 80214E6C 00211DAC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214E70 00211DB0  38 BF 01 E0 */	addi r5, r31, 0x1e0
/* 80214E74 00211DB4  38 80 00 00 */	li r4, 0
/* 80214E78 00211DB8  38 C0 00 03 */	li r6, 3
/* 80214E7C 00211DBC  4B FA 01 19 */	bl setPause__Q24Game10GameSystemFbPci
/* 80214E80 00211DC0  48 00 04 5C */	b .L_802152DC
.L_80214E84:
/* 80214E84 00211DC4  88 1E 01 80 */	lbz r0, 0x180(r30)
/* 80214E88 00211DC8  28 00 00 00 */	cmplwi r0, 0
/* 80214E8C 00211DCC  41 82 00 14 */	beq .L_80214EA0
/* 80214E90 00211DD0  7F C3 F3 78 */	mr r3, r30
/* 80214E94 00211DD4  4B F3 F8 89 */	bl updateCaveMenus__Q24Game17SingleGameSectionFv
/* 80214E98 00211DD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80214E9C 00211DDC  41 82 04 40 */	beq .L_802152DC
.L_80214EA0:
/* 80214EA0 00211DE0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214EA4 00211DE4  80 9E 01 0C */	lwz r4, 0x10c(r30)
/* 80214EA8 00211DE8  48 1E 71 D1 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80214EAC 00211DEC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214EB0 00211DF0  48 1E 80 81 */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 80214EB4 00211DF4  2C 03 00 02 */	cmpwi r3, 2
/* 80214EB8 00211DF8  41 82 00 50 */	beq .L_80214F08
/* 80214EBC 00211DFC  40 80 00 14 */	bge .L_80214ED0
/* 80214EC0 00211E00  2C 03 00 00 */	cmpwi r3, 0
/* 80214EC4 00211E04  41 82 01 F0 */	beq .L_802150B4
/* 80214EC8 00211E08  40 80 00 18 */	bge .L_80214EE0
/* 80214ECC 00211E0C  48 00 01 60 */	b .L_8021502C
.L_80214ED0:
/* 80214ED0 00211E10  2C 03 00 04 */	cmpwi r3, 4
/* 80214ED4 00211E14  41 82 01 40 */	beq .L_80215014
/* 80214ED8 00211E18  40 80 01 54 */	bge .L_8021502C
/* 80214EDC 00211E1C  48 00 00 8C */	b .L_80214F68
.L_80214EE0:
/* 80214EE0 00211E20  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214EE4 00211E24  38 80 00 00 */	li r4, 0
/* 80214EE8 00211E28  38 A2 BC 58 */	addi r5, r2, lbl_80519FB8@sda21
/* 80214EEC 00211E2C  4B FA 00 99 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80214EF0 00211E30  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214EF4 00211E34  38 80 00 00 */	li r4, 0
/* 80214EF8 00211E38  38 A2 BC 58 */	addi r5, r2, lbl_80519FB8@sda21
/* 80214EFC 00211E3C  38 C0 00 03 */	li r6, 3
/* 80214F00 00211E40  4B FA 00 95 */	bl setPause__Q24Game10GameSystemFbPci
/* 80214F04 00211E44  48 00 01 B0 */	b .L_802150B4
.L_80214F08:
/* 80214F08 00211E48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214F0C 00211E4C  38 80 00 00 */	li r4, 0
/* 80214F10 00211E50  38 A2 BC 60 */	addi r5, r2, lbl_80519FC0@sda21
/* 80214F14 00211E54  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80214F18 00211E58  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80214F1C 00211E5C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80214F20 00211E60  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214F24 00211E64  4B FA 00 61 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80214F28 00211E68  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214F2C 00211E6C  38 80 00 00 */	li r4, 0
/* 80214F30 00211E70  38 A2 BC 60 */	addi r5, r2, lbl_80519FC0@sda21
/* 80214F34 00211E74  38 C0 00 03 */	li r6, 3
/* 80214F38 00211E78  4B FA 00 5D */	bl setPause__Q24Game10GameSystemFbPci
/* 80214F3C 00211E7C  38 00 00 00 */	li r0, 0
/* 80214F40 00211E80  7F A3 EB 78 */	mr r3, r29
/* 80214F44 00211E84  B0 01 00 14 */	sth r0, 0x14(r1)
/* 80214F48 00211E88  7F C4 F3 78 */	mr r4, r30
/* 80214F4C 00211E8C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80214F50 00211E90  38 A0 00 05 */	li r5, 5
/* 80214F54 00211E94  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214F58 00211E98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80214F5C 00211E9C  7D 89 03 A6 */	mtctr r12
/* 80214F60 00211EA0  4E 80 04 21 */	bctrl 
/* 80214F64 00211EA4  48 00 03 78 */	b .L_802152DC
.L_80214F68:
/* 80214F68 00211EA8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80214F6C 00211EAC  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80214F70 00211EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80214F74 00211EB4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80214F78 00211EB8  7D 89 03 A6 */	mtctr r12
/* 80214F7C 00211EBC  4E 80 04 21 */	bctrl 
/* 80214F80 00211EC0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80214F84 00211EC4  28 00 00 01 */	cmplwi r0, 1
/* 80214F88 00211EC8  41 82 00 18 */	beq .L_80214FA0
/* 80214F8C 00211ECC  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80214F90 00211ED0  38 BF 00 94 */	addi r5, r31, 0x94
/* 80214F94 00211ED4  38 80 05 18 */	li r4, 0x518
/* 80214F98 00211ED8  4C C6 31 82 */	crclr 6
/* 80214F9C 00211EDC  4B E1 56 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80214FA0:
/* 80214FA0 00211EE0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80214FA4 00211EE4  38 00 00 00 */	li r0, 0
/* 80214FA8 00211EE8  98 03 00 20 */	stb r0, 0x20(r3)
/* 80214FAC 00211EEC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80214FB0 00211EF0  4B F4 62 41 */	bl clearDeadCount__Q24Game7NaviMgrFv
/* 80214FB4 00211EF4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214FB8 00211EF8  38 80 00 00 */	li r4, 0
/* 80214FBC 00211EFC  38 A2 BC 68 */	addi r5, r2, lbl_80519FC8@sda21
/* 80214FC0 00211F00  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80214FC4 00211F04  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80214FC8 00211F08  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80214FCC 00211F0C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214FD0 00211F10  4B F9 FF B5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80214FD4 00211F14  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80214FD8 00211F18  38 80 00 00 */	li r4, 0
/* 80214FDC 00211F1C  38 A2 BC 68 */	addi r5, r2, lbl_80519FC8@sda21
/* 80214FE0 00211F20  38 C0 00 03 */	li r6, 3
/* 80214FE4 00211F24  4B F9 FF B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 80214FE8 00211F28  7F C3 F3 78 */	mr r3, r30
/* 80214FEC 00211F2C  4B F3 AD B9 */	bl clearHeap__Q24Game15BaseGameSectionFv
/* 80214FF0 00211F30  7F A3 EB 78 */	mr r3, r29
/* 80214FF4 00211F34  7F C4 F3 78 */	mr r4, r30
/* 80214FF8 00211F38  81 9D 00 00 */	lwz r12, 0(r29)
/* 80214FFC 00211F3C  38 A0 00 00 */	li r5, 0
/* 80215000 00211F40  38 C0 00 00 */	li r6, 0
/* 80215004 00211F44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215008 00211F48  7D 89 03 A6 */	mtctr r12
/* 8021500C 00211F4C  4E 80 04 21 */	bctrl 
/* 80215010 00211F50  48 00 02 CC */	b .L_802152DC
.L_80215014:
/* 80215014 00211F54  38 7F 00 7C */	addi r3, r31, 0x7c
/* 80215018 00211F58  38 BF 01 EC */	addi r5, r31, 0x1ec
/* 8021501C 00211F5C  38 80 05 26 */	li r4, 0x526
/* 80215020 00211F60  4C C6 31 82 */	crclr 6
/* 80215024 00211F64  4B E1 56 1D */	bl panic_f__12JUTExceptionFPCciPCce
/* 80215028 00211F68  48 00 00 8C */	b .L_802150B4
.L_8021502C:
/* 8021502C 00211F6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215030 00211F70  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215034 00211F74  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80215038 00211F78  40 82 00 7C */	bne .L_802150B4
/* 8021503C 00211F7C  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 80215040 00211F80  80 04 00 18 */	lwz r0, 0x18(r4)
/* 80215044 00211F84  2C 00 00 00 */	cmpwi r0, 0
/* 80215048 00211F88  40 82 00 6C */	bne .L_802150B4
/* 8021504C 00211F8C  4B F9 FF 7D */	bl paused__Q24Game10GameSystemFv
/* 80215050 00211F90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215054 00211F94  40 82 00 60 */	bne .L_802150B4
/* 80215058 00211F98  80 7E 01 0C */	lwz r3, 0x10c(r30)
/* 8021505C 00211F9C  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 80215060 00211FA0  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 80215064 00211FA4  41 82 00 50 */	beq .L_802150B4
/* 80215068 00211FA8  38 61 00 60 */	addi r3, r1, 0x60
/* 8021506C 00211FAC  48 00 02 8D */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 80215070 00211FB0  7F C3 F3 78 */	mr r3, r30
/* 80215074 00211FB4  38 81 00 60 */	addi r4, r1, 0x60
/* 80215078 00211FB8  4B F3 FF 61 */	bl setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
/* 8021507C 00211FBC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80215080 00211FC0  38 81 00 60 */	addi r4, r1, 0x60
/* 80215084 00211FC4  48 1E 7C 4D */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 80215088 00211FC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021508C 00211FCC  41 82 00 28 */	beq .L_802150B4
/* 80215090 00211FD0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215094 00211FD4  38 80 00 01 */	li r4, 1
/* 80215098 00211FD8  38 A2 BC 70 */	addi r5, r2, lbl_80519FD0@sda21
/* 8021509C 00211FDC  38 C0 00 03 */	li r6, 3
/* 802150A0 00211FE0  4B F9 FE F5 */	bl setPause__Q24Game10GameSystemFbPci
/* 802150A4 00211FE4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802150A8 00211FE8  38 80 00 01 */	li r4, 1
/* 802150AC 00211FEC  38 A2 BC 70 */	addi r5, r2, lbl_80519FD0@sda21
/* 802150B0 00211FF0  4B F9 FE D5 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_802150B4:
/* 802150B4 00211FF4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802150B8 00211FF8  4B F9 FF 09 */	bl paused_soft__Q24Game10GameSystemFv
/* 802150BC 00211FFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802150C0 00212000  40 82 00 74 */	bne .L_80215134
/* 802150C4 00212004  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802150C8 00212008  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802150CC 0021200C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 802150D0 00212010  40 82 00 64 */	bne .L_80215134
/* 802150D4 00212014  80 63 00 40 */	lwz r3, 0x40(r3)
/* 802150D8 00212018  4B F1 22 C1 */	bl isDayOver__Q24Game7TimeMgrFv
/* 802150DC 0021201C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802150E0 00212020  41 82 00 54 */	beq .L_80215134
/* 802150E4 00212024  88 1E 01 80 */	lbz r0, 0x180(r30)
/* 802150E8 00212028  28 00 00 00 */	cmplwi r0, 0
/* 802150EC 0021202C  40 82 00 48 */	bne .L_80215134
/* 802150F0 00212030  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802150F4 00212034  88 64 00 3C */	lbz r3, 0x3c(r4)
/* 802150F8 00212038  54 60 06 B5 */	rlwinm. r0, r3, 0, 0x1a, 0x1a
/* 802150FC 0021203C  41 82 00 38 */	beq .L_80215134
/* 80215100 00212040  54 63 06 F2 */	rlwinm r3, r3, 0, 0x1b, 0x19
/* 80215104 00212044  38 00 00 00 */	li r0, 0
/* 80215108 00212048  98 64 00 3C */	stb r3, 0x3c(r4)
/* 8021510C 0021204C  7F A3 EB 78 */	mr r3, r29
/* 80215110 00212050  7F C4 F3 78 */	mr r4, r30
/* 80215114 00212054  38 C1 00 10 */	addi r6, r1, 0x10
/* 80215118 00212058  B0 01 00 10 */	sth r0, 0x10(r1)
/* 8021511C 0021205C  38 A0 00 05 */	li r5, 5
/* 80215120 00212060  81 9D 00 00 */	lwz r12, 0(r29)
/* 80215124 00212064  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215128 00212068  7D 89 03 A6 */	mtctr r12
/* 8021512C 0021206C  4E 80 04 21 */	bctrl 
/* 80215130 00212070  48 00 01 AC */	b .L_802152DC
.L_80215134:
/* 80215134 00212074  88 1D 00 10 */	lbz r0, 0x10(r29)
/* 80215138 00212078  28 00 00 00 */	cmplwi r0, 0
/* 8021513C 0021207C  40 82 01 3C */	bne .L_80215278
/* 80215140 00212080  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215144 00212084  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80215148 00212088  2C 00 00 00 */	cmpwi r0, 0
/* 8021514C 0021208C  40 82 01 2C */	bne .L_80215278
/* 80215150 00212090  38 60 FF FF */	li r3, -1
/* 80215154 00212094  4B FB BD E9 */	bl getAllPikmins__Q24Game8GameStatFi
/* 80215158 00212098  7C 7D 1B 78 */	mr r29, r3
/* 8021515C 0021209C  38 60 FF FF */	li r3, -1
/* 80215160 002120A0  4B FB BD 8D */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80215164 002120A4  7C 03 E8 51 */	subf. r0, r3, r29
/* 80215168 002120A8  40 82 01 10 */	bne .L_80215278
/* 8021516C 002120AC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215170 002120B0  38 80 00 01 */	li r4, 1
/* 80215174 002120B4  4B FD 1F 65 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 80215178 002120B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021517C 002120BC  41 82 00 FC */	beq .L_80215278
/* 80215180 002120C0  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80215184 002120C4  38 9F 01 FC */	addi r4, r31, 0x1fc
/* 80215188 002120C8  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 8021518C 002120CC  38 00 00 00 */	li r0, 0
/* 80215190 002120D0  88 65 00 3C */	lbz r3, 0x3c(r5)
/* 80215194 002120D4  54 63 06 F2 */	rlwinm r3, r3, 0, 0x1b, 0x19
/* 80215198 002120D8  98 65 00 3C */	stb r3, 0x3c(r5)
/* 8021519C 002120DC  80 BE 00 C8 */	lwz r5, 0xc8(r30)
/* 802151A0 002120E0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 802151A4 002120E4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 802151A8 002120E8  90 01 00 30 */	stw r0, 0x30(r1)
/* 802151AC 002120EC  90 A1 00 38 */	stw r5, 0x38(r1)
/* 802151B0 002120F0  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 802151B4 002120F4  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 802151B8 002120F8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802151BC 002120FC  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 802151C0 00212100  90 01 00 54 */	stw r0, 0x54(r1)
/* 802151C4 00212104  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802151C8 00212108  90 01 00 34 */	stw r0, 0x34(r1)
/* 802151CC 0021210C  90 01 00 58 */	stw r0, 0x58(r1)
/* 802151D0 00212110  90 01 00 40 */	stw r0, 0x40(r1)
/* 802151D4 00212114  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802151D8 00212118  4B F4 5A 49 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 802151DC 0021211C  7C 7D 1B 79 */	or. r29, r3, r3
/* 802151E0 00212120  40 82 00 38 */	bne .L_80215218
/* 802151E4 00212124  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802151E8 00212128  38 80 00 01 */	li r4, 1
/* 802151EC 0021212C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802151F0 00212130  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 802151F4 00212134  2C 00 00 00 */	cmpwi r0, 0
/* 802151F8 00212138  40 82 00 08 */	bne .L_80215200
/* 802151FC 0021213C  38 80 00 00 */	li r4, 0
.L_80215200:
/* 80215200 00212140  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80215204 00212144  81 83 00 00 */	lwz r12, 0(r3)
/* 80215208 00212148  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8021520C 0021214C  7D 89 03 A6 */	mtctr r12
/* 80215210 00212150  4E 80 04 21 */	bctrl 
/* 80215214 00212154  7C 7D 1B 78 */	mr r29, r3
.L_80215218:
/* 80215218 00212158  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 8021521C 0021215C  7F A4 EB 78 */	mr r4, r29
/* 80215220 00212160  38 61 00 20 */	addi r3, r1, 0x20
/* 80215224 00212164  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80215228 00212168  81 9D 00 00 */	lwz r12, 0(r29)
/* 8021522C 0021216C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80215230 00212170  7D 89 03 A6 */	mtctr r12
/* 80215234 00212174  4E 80 04 21 */	bctrl 
/* 80215238 00212178  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 8021523C 0021217C  7F A3 EB 78 */	mr r3, r29
/* 80215240 00212180  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80215244 00212184  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80215248 00212188  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 8021524C 0021218C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80215250 00212190  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80215254 00212194  81 9D 00 00 */	lwz r12, 0(r29)
/* 80215258 00212198  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8021525C 0021219C  7D 89 03 A6 */	mtctr r12
/* 80215260 002121A0  4E 80 04 21 */	bctrl 
/* 80215264 002121A4  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80215268 002121A8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8021526C 002121AC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215270 002121B0  48 21 77 61 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215274 002121B4  48 00 00 68 */	b .L_802152DC
.L_80215278:
/* 80215278 002121B8  48 24 3B 19 */	bl PSMGetPikminNumD__Fv
/* 8021527C 002121BC  7C 60 1B 78 */	mr r0, r3
/* 80215280 002121C0  38 60 FF FF */	li r3, -1
/* 80215284 002121C4  7C 1D 03 78 */	mr r29, r0
/* 80215288 002121C8  4B FB BB 89 */	bl getMapPikmins_exclude_Me__Q24Game8GameStatFi
/* 8021528C 002121CC  2C 03 00 0A */	cmpwi r3, 0xa
/* 80215290 002121D0  40 80 00 30 */	bge .L_802152C0
/* 80215294 002121D4  80 0D 96 18 */	lwz r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 80215298 002121D8  2C 00 00 00 */	cmpwi r0, 0
/* 8021529C 002121DC  40 81 00 24 */	ble .L_802152C0
/* 802152A0 002121E0  28 1D 00 00 */	cmplwi r29, 0
/* 802152A4 002121E4  41 82 00 38 */	beq .L_802152DC
/* 802152A8 002121E8  7F A3 EB 78 */	mr r3, r29
/* 802152AC 002121EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802152B0 002121F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802152B4 002121F4  7D 89 03 A6 */	mtctr r12
/* 802152B8 002121F8  4E 80 04 21 */	bctrl 
/* 802152BC 002121FC  48 00 00 20 */	b .L_802152DC
.L_802152C0:
/* 802152C0 00212200  28 1D 00 00 */	cmplwi r29, 0
/* 802152C4 00212204  41 82 00 18 */	beq .L_802152DC
/* 802152C8 00212208  7F A3 EB 78 */	mr r3, r29
/* 802152CC 0021220C  81 9D 00 00 */	lwz r12, 0(r29)
/* 802152D0 00212210  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802152D4 00212214  7D 89 03 A6 */	mtctr r12
/* 802152D8 00212218  4E 80 04 21 */	bctrl 
.L_802152DC:
/* 802152DC 0021221C  80 01 01 44 */	lwz r0, 0x144(r1)
/* 802152E0 00212220  83 E1 01 3C */	lwz r31, 0x13c(r1)
/* 802152E4 00212224  83 C1 01 38 */	lwz r30, 0x138(r1)
/* 802152E8 00212228  83 A1 01 34 */	lwz r29, 0x134(r1)
/* 802152EC 0021222C  7C 08 03 A6 */	mtlr r0
/* 802152F0 00212230  38 21 01 40 */	addi r1, r1, 0x140
/* 802152F4 00212234  4E 80 00 20 */	blr 
.endif

.global __ct__Q32og6Screen18DispMemberSMenuAllFv
__ct__Q32og6Screen18DispMemberSMenuAllFv:
/* 802152F8 00212238  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802152FC 0021223C  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80215300 00212240  38 A4 11 48 */	addi r5, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80215304 00212244  3D 20 80 4C */	lis r9, __vt__Q32og6Screen18DispMemberSMenuAll@ha
/* 80215308 00212248  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 8021530C 0021224C  38 09 05 8C */	addi r0, r9, __vt__Q32og6Screen18DispMemberSMenuAll@l
/* 80215310 00212250  3D 00 80 4C */	lis r8, __vt__Q32og6Screen20DispMemberSMenuPause@ha
/* 80215314 00212254  3C E0 80 4C */	lis r7, __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu@ha
/* 80215318 00212258  3B 48 05 74 */	addi r26, r8, __vt__Q32og6Screen20DispMemberSMenuPause@l
/* 8021531C 0021225C  3C C0 80 4C */	lis r6, __vt__Q32og6Screen19DispMemberSMenuItem@ha
/* 80215320 00212260  39 87 05 5C */	addi r12, r7, __vt__Q32og6Screen27DispMemberSMenuPauseDoukutu@l
/* 80215324 00212264  38 80 00 00 */	li r4, 0
/* 80215328 00212268  39 46 05 44 */	addi r10, r6, __vt__Q32og6Screen19DispMemberSMenuItem@l
/* 8021532C 0021226C  3B 20 04 D2 */	li r25, 0x4d2
/* 80215330 00212270  3B 00 09 A5 */	li r24, 0x9a5
/* 80215334 00212274  39 60 00 56 */	li r11, 0x56
/* 80215338 00212278  39 20 00 6F */	li r9, 0x6f
/* 8021533C 0021227C  39 00 00 16 */	li r8, 0x16
/* 80215340 00212280  38 E0 01 4D */	li r7, 0x14d
/* 80215344 00212284  38 C0 00 2C */	li r6, 0x2c
/* 80215348 00212288  90 A3 00 00 */	stw r5, 0(r3)
/* 8021534C 0021228C  90 83 00 04 */	stw r4, 4(r3)
/* 80215350 00212290  90 03 00 00 */	stw r0, 0(r3)
/* 80215354 00212294  38 00 00 01 */	li r0, 1
/* 80215358 00212298  90 A3 00 08 */	stw r5, 8(r3)
/* 8021535C 0021229C  90 83 00 0C */	stw r4, 0xc(r3)
/* 80215360 002122A0  93 43 00 08 */	stw r26, 8(r3)
/* 80215364 002122A4  93 23 00 10 */	stw r25, 0x10(r3)
/* 80215368 002122A8  93 03 00 14 */	stw r24, 0x14(r3)
/* 8021536C 002122AC  90 03 00 18 */	stw r0, 0x18(r3)
/* 80215370 002122B0  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 80215374 002122B4  90 83 00 20 */	stw r4, 0x20(r3)
/* 80215378 002122B8  91 83 00 1C */	stw r12, 0x1c(r3)
/* 8021537C 002122BC  90 03 00 30 */	stw r0, 0x30(r3)
/* 80215380 002122C0  91 63 00 24 */	stw r11, 0x24(r3)
/* 80215384 002122C4  93 03 00 28 */	stw r24, 0x28(r3)
/* 80215388 002122C8  98 03 00 2C */	stb r0, 0x2c(r3)
/* 8021538C 002122CC  98 83 00 2D */	stb r4, 0x2d(r3)
/* 80215390 002122D0  90 A3 00 34 */	stw r5, 0x34(r3)
/* 80215394 002122D4  90 83 00 38 */	stw r4, 0x38(r3)
/* 80215398 002122D8  91 43 00 34 */	stw r10, 0x34(r3)
/* 8021539C 002122DC  91 23 00 3C */	stw r9, 0x3c(r3)
/* 802153A0 002122E0  91 03 00 40 */	stw r8, 0x40(r3)
/* 802153A4 002122E4  90 E3 00 44 */	stw r7, 0x44(r3)
/* 802153A8 002122E8  90 C3 00 48 */	stw r6, 0x48(r3)
/* 802153AC 002122EC  98 83 00 4C */	stb r4, 0x4c(r3)
/* 802153B0 002122F0  98 83 00 4D */	stb r4, 0x4d(r3)
/* 802153B4 002122F4  98 83 00 4E */	stb r4, 0x4e(r3)
/* 802153B8 002122F8  98 83 00 4F */	stb r4, 0x4f(r3)
/* 802153BC 002122FC  98 83 00 50 */	stb r4, 0x50(r3)
/* 802153C0 00212300  98 83 00 51 */	stb r4, 0x51(r3)
/* 802153C4 00212304  98 83 00 52 */	stb r4, 0x52(r3)
/* 802153C8 00212308  98 83 00 53 */	stb r4, 0x53(r3)
/* 802153CC 0021230C  98 83 00 54 */	stb r4, 0x54(r3)
/* 802153D0 00212310  98 83 00 55 */	stb r4, 0x55(r3)
/* 802153D4 00212314  98 83 00 56 */	stb r4, 0x56(r3)
/* 802153D8 00212318  98 83 00 57 */	stb r4, 0x57(r3)
/* 802153DC 0021231C  98 83 00 58 */	stb r4, 0x58(r3)
/* 802153E0 00212320  3D 80 80 4C */	lis r12, __vt__Q32og6Screen18DispMemberSMenuMap@ha
/* 802153E4 00212324  3D 60 00 75 */	lis r11, 0x0074CBB1@ha
/* 802153E8 00212328  3D 40 00 0A */	lis r10, 0x0009FBF1@ha
/* 802153EC 0021232C  98 83 00 59 */	stb r4, 0x59(r3)
/* 802153F0 00212330  3D 20 00 01 */	lis r9, 0x0000D431@ha
/* 802153F4 00212334  3D 00 74 5F */	lis r8, 0x745F3031@ha
/* 802153F8 00212338  3C E0 80 4C */	lis r7, __vt__Q32og6Screen22DispMemberSMenuPauseVS@ha
/* 802153FC 0021233C  90 A3 00 5C */	stw r5, 0x5c(r3)
/* 80215400 00212340  3C C0 80 4C */	lis r6, __vt__Q32og6Screen19DispMemberSMenuCont@ha
/* 80215404 00212344  39 8C 05 2C */	addi r12, r12, __vt__Q32og6Screen18DispMemberSMenuMap@l
/* 80215408 00212348  3B 0B CB B1 */	addi r24, r11, 0x0074CBB1@l
/* 8021540C 0021234C  90 83 00 60 */	stw r4, 0x60(r3)
/* 80215410 00212350  3B 2A FB F1 */	addi r25, r10, 0x0009FBF1@l
/* 80215414 00212354  3B 49 D4 31 */	addi r26, r9, 0x0000D431@l
/* 80215418 00212358  3B 60 10 E1 */	li r27, 0x10e1
/* 8021541C 0021235C  91 83 00 5C */	stw r12, 0x5c(r3)
/* 80215420 00212360  3B 80 01 41 */	li r28, 0x141
/* 80215424 00212364  3B A0 00 0A */	li r29, 0xa
/* 80215428 00212368  3B C0 00 14 */	li r30, 0x14
/* 8021542C 0021236C  90 03 00 64 */	stw r0, 0x64(r3)
/* 80215430 00212370  3B E0 00 1E */	li r31, 0x1e
/* 80215434 00212374  39 80 00 28 */	li r12, 0x28
/* 80215438 00212378  39 60 00 32 */	li r11, 0x32
/* 8021543C 0021237C  93 03 00 68 */	stw r24, 0x68(r3)
/* 80215440 00212380  39 40 00 3C */	li r10, 0x3c
/* 80215444 00212384  39 20 00 46 */	li r9, 0x46
/* 80215448 00212388  39 08 30 31 */	addi r8, r8, 0x745F3031@l
/* 8021544C 0021238C  93 23 00 6C */	stw r25, 0x6c(r3)
/* 80215450 00212390  38 E7 05 14 */	addi r7, r7, __vt__Q32og6Screen22DispMemberSMenuPauseVS@l
/* 80215454 00212394  38 C6 04 FC */	addi r6, r6, __vt__Q32og6Screen19DispMemberSMenuCont@l
/* 80215458 00212398  93 43 00 70 */	stw r26, 0x70(r3)
/* 8021545C 0021239C  93 63 00 74 */	stw r27, 0x74(r3)
/* 80215460 002123A0  93 83 00 78 */	stw r28, 0x78(r3)
/* 80215464 002123A4  93 A3 00 7C */	stw r29, 0x7c(r3)
/* 80215468 002123A8  93 C3 00 80 */	stw r30, 0x80(r3)
/* 8021546C 002123AC  93 E3 00 84 */	stw r31, 0x84(r3)
/* 80215470 002123B0  91 83 00 88 */	stw r12, 0x88(r3)
/* 80215474 002123B4  91 63 00 8C */	stw r11, 0x8c(r3)
/* 80215478 002123B8  91 43 00 90 */	stw r10, 0x90(r3)
/* 8021547C 002123BC  91 23 00 94 */	stw r9, 0x94(r3)
/* 80215480 002123C0  98 83 00 A5 */	stb r4, 0xa5(r3)
/* 80215484 002123C4  98 83 00 A6 */	stb r4, 0xa6(r3)
/* 80215488 002123C8  90 83 00 98 */	stw r4, 0x98(r3)
/* 8021548C 002123CC  91 03 00 9C */	stw r8, 0x9c(r3)
/* 80215490 002123D0  98 03 00 A0 */	stb r0, 0xa0(r3)
/* 80215494 002123D4  98 03 00 A1 */	stb r0, 0xa1(r3)
/* 80215498 002123D8  98 03 00 A2 */	stb r0, 0xa2(r3)
/* 8021549C 002123DC  98 03 00 A3 */	stb r0, 0xa3(r3)
/* 802154A0 002123E0  98 03 00 A4 */	stb r0, 0xa4(r3)
/* 802154A4 002123E4  90 A3 00 A8 */	stw r5, 0xa8(r3)
/* 802154A8 002123E8  90 83 00 AC */	stw r4, 0xac(r3)
/* 802154AC 002123EC  90 E3 00 A8 */	stw r7, 0xa8(r3)
/* 802154B0 002123F0  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 802154B4 002123F4  90 A3 00 B4 */	stw r5, 0xb4(r3)
/* 802154B8 002123F8  90 83 00 B8 */	stw r4, 0xb8(r3)
/* 802154BC 002123FC  90 C3 00 B4 */	stw r6, 0xb4(r3)
/* 802154C0 00212400  90 83 00 BC */	stw r4, 0xbc(r3)
/* 802154C4 00212404  98 83 00 C0 */	stb r4, 0xc0(r3)
/* 802154C8 00212408  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 802154CC 0021240C  38 21 00 30 */	addi r1, r1, 0x30
/* 802154D0 00212410  4E 80 00 20 */	blr 

.if version == 1
.global onOrimaDown__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni
onOrimaDown__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni:
/* 802154D4 00212414  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802154D8 00212418  7C 08 02 A6 */	mflr r0
/* 802154DC 0021241C  3C 60 80 48 */	lis r3, lbl_8048235C@ha
/* 802154E0 00212420  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802154E4 00212424  90 01 00 54 */	stw r0, 0x54(r1)
/* 802154E8 00212428  38 00 00 00 */	li r0, 0
/* 802154EC 0021242C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802154F0 00212430  7C BF 2B 78 */	mr r31, r5
/* 802154F4 00212434  38 A3 23 5C */	addi r5, r3, lbl_8048235C@l
/* 802154F8 00212438  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802154FC 0021243C  7C 9E 23 78 */	mr r30, r4
/* 80215500 00212440  80 C4 00 C8 */	lwz r6, 0xe8(r4)
/* 80215504 00212444  7F E4 FB 78 */	mr r4, r31
/* 80215508 00212448  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021550C 0021244C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80215510 00212450  90 A1 00 08 */	stw r5, 8(r1)
/* 80215514 00212454  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80215518 00212458  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8021551C 0021245C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80215520 00212460  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80215524 00212464  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80215528 00212468  93 E1 00 30 */	stw r31, 0x30(r1)
/* 8021552C 0021246C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80215530 00212470  90 01 00 10 */	stw r0, 0x10(r1)
/* 80215534 00212474  90 01 00 34 */	stw r0, 0x34(r1)
/* 80215538 00212478  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8021553C 0021247C  90 01 00 38 */	stw r0, 0x38(r1)
/* 80215540 00212480  80 1E 00 CC */	lwz r0, 0xec(r30)
/* 80215544 00212484  90 01 00 18 */	stw r0, 0x18(r1)
/* 80215548 00212488  81 83 00 00 */	lwz r12, 0(r3)
/* 8021554C 0021248C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80215550 00212490  7D 89 03 A6 */	mtctr r12
/* 80215554 00212494  4E 80 04 21 */	bctrl 
/* 80215558 00212498  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8021555C 0021249C  2C 1F 00 00 */	cmpwi r31, 0
/* 80215560 002124A0  90 64 01 8C */	stw r3, 0x18c(r4)
/* 80215564 002124A4  40 82 00 14 */	bne .L_80215578
/* 80215568 002124A8  80 1E 01 04 */	lwz r0, 0x124(r30)
/* 8021556C 002124AC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215570 002124B0  90 03 01 90 */	stw r0, 0x190(r3)
/* 80215574 002124B4  48 00 00 10 */	b .L_80215584
.L_80215578:
/* 80215578 002124B8  80 1E 01 08 */	lwz r0, 0x128(r30)
/* 8021557C 002124BC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215580 002124C0  90 03 01 90 */	stw r0, 0x190(r3)
.L_80215584:
/* 80215584 002124C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215588 002124C8  38 81 00 08 */	addi r4, r1, 8
/* 8021558C 002124CC  48 21 74 45 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215590 002124D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80215594 002124D4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80215598 002124D8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8021559C 002124DC  7C 08 03 A6 */	mtlr r0
/* 802155A0 002124E0  38 21 00 50 */	addi r1, r1, 0x50
/* 802155A4 002124E4  4E 80 00 20 */	blr 
.else
.global onOrimaDown__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni
onOrimaDown__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni:
/* 802154D4 00212414  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802154D8 00212418  7C 08 02 A6 */	mflr r0
/* 802154DC 0021241C  3C 60 80 48 */	lis r3, lbl_8048235C@ha
/* 802154E0 00212420  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802154E4 00212424  90 01 00 54 */	stw r0, 0x54(r1)
/* 802154E8 00212428  38 00 00 00 */	li r0, 0
/* 802154EC 0021242C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802154F0 00212430  7C BF 2B 78 */	mr r31, r5
/* 802154F4 00212434  38 A3 23 5C */	addi r5, r3, lbl_8048235C@l
/* 802154F8 00212438  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802154FC 0021243C  7C 9E 23 78 */	mr r30, r4
/* 80215500 00212440  80 C4 00 C8 */	lwz r6, 0xc8(r4)
/* 80215504 00212444  7F E4 FB 78 */	mr r4, r31
/* 80215508 00212448  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021550C 0021244C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80215510 00212450  90 A1 00 08 */	stw r5, 8(r1)
/* 80215514 00212454  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80215518 00212458  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8021551C 0021245C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80215520 00212460  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80215524 00212464  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80215528 00212468  93 E1 00 30 */	stw r31, 0x30(r1)
/* 8021552C 0021246C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80215530 00212470  90 01 00 10 */	stw r0, 0x10(r1)
/* 80215534 00212474  90 01 00 34 */	stw r0, 0x34(r1)
/* 80215538 00212478  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8021553C 0021247C  90 01 00 38 */	stw r0, 0x38(r1)
/* 80215540 00212480  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 80215544 00212484  90 01 00 18 */	stw r0, 0x18(r1)
/* 80215548 00212488  81 83 00 00 */	lwz r12, 0(r3)
/* 8021554C 0021248C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80215550 00212490  7D 89 03 A6 */	mtctr r12
/* 80215554 00212494  4E 80 04 21 */	bctrl 
/* 80215558 00212498  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 8021555C 0021249C  2C 1F 00 00 */	cmpwi r31, 0
/* 80215560 002124A0  90 64 01 8C */	stw r3, 0x18c(r4)
/* 80215564 002124A4  40 82 00 14 */	bne .L_80215578
/* 80215568 002124A8  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 8021556C 002124AC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215570 002124B0  90 03 01 90 */	stw r0, 0x190(r3)
/* 80215574 002124B4  48 00 00 10 */	b .L_80215584
.L_80215578:
/* 80215578 002124B8  80 1E 01 08 */	lwz r0, 0x108(r30)
/* 8021557C 002124BC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215580 002124C0  90 03 01 90 */	stw r0, 0x190(r3)
.L_80215584:
/* 80215584 002124C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215588 002124C8  38 81 00 08 */	addi r4, r1, 8
/* 8021558C 002124CC  48 21 74 45 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215590 002124D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80215594 002124D4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80215598 002124D8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8021559C 002124DC  7C 08 03 A6 */	mtlr r0
/* 802155A0 002124E0  38 21 00 50 */	addi r1, r1, 0x50
/* 802155A4 002124E4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onHoleIn__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
onHoleIn__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item:
/* 802155A8 002124E8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802155AC 002124EC  7C 08 02 A6 */	mflr r0
/* 802155B0 002124F0  3C 60 80 48 */	lis r3, lbl_8048236C@ha
/* 802155B4 002124F4  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802155B8 002124F8  90 01 00 54 */	stw r0, 0x54(r1)
/* 802155BC 002124FC  38 C3 23 6C */	addi r6, r3, lbl_8048236C@l
/* 802155C0 00212500  38 00 00 00 */	li r0, 0
/* 802155C4 00212504  38 61 00 08 */	addi r3, r1, 8
/* 802155C8 00212508  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802155CC 0021250C  7C BF 2B 78 */	mr r31, r5
/* 802155D0 00212510  80 E4 00 C8 */	lwz r7, 0xe8(r4)
/* 802155D4 00212514  90 01 00 18 */	stw r0, 0x18(r1)
/* 802155D8 00212518  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802155DC 0021251C  90 E1 00 20 */	stw r7, 0x20(r1)
/* 802155E0 00212520  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802155E4 00212524  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802155E8 00212528  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802155EC 0021252C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 802155F0 00212530  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802155F4 00212534  90 01 00 24 */	stw r0, 0x24(r1)
/* 802155F8 00212538  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802155FC 0021253C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80215600 00212540  90 01 00 28 */	stw r0, 0x28(r1)
/* 80215604 00212544  90 01 00 44 */	stw r0, 0x44(r1)
/* 80215608 00212548  80 04 00 CC */	lwz r0, 0xec(r4)
/* 8021560C 0021254C  7F E4 FB 78 */	mr r4, r31
/* 80215610 00212550  90 01 00 24 */	stw r0, 0x24(r1)
/* 80215614 00212554  81 9F 00 00 */	lwz r12, 0(r31)
/* 80215618 00212558  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021561C 0021255C  7D 89 03 A6 */	mtctr r12
/* 80215620 00212560  4E 80 04 21 */	bctrl 
/* 80215624 00212564  C0 41 00 08 */	lfs f2, 8(r1)
/* 80215628 00212568  7F E3 FB 78 */	mr r3, r31
/* 8021562C 0021256C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80215630 00212570  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80215634 00212574  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80215638 00212578  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8021563C 0021257C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80215640 00212580  81 9F 00 00 */	lwz r12, 0(r31)
/* 80215644 00212584  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80215648 00212588  7D 89 03 A6 */	mtctr r12
/* 8021564C 0021258C  4E 80 04 21 */	bctrl 
/* 80215650 00212590  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80215654 00212594  38 81 00 14 */	addi r4, r1, 0x14
/* 80215658 00212598  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021565C 0021259C  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80215660 002125A0  80 1F 01 F0 */	lwz r0, 0x1f0(r31)
/* 80215664 002125A4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215668 002125A8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8021566C 002125AC  48 21 73 65 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215670 002125B0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80215674 002125B4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80215678 002125B8  7C 08 03 A6 */	mtlr r0
/* 8021567C 002125BC  38 21 00 50 */	addi r1, r1, 0x50
/* 80215680 002125C0  4E 80 00 20 */	blr 
.else
.global onHoleIn__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
onHoleIn__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item:
/* 802155A8 002124E8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802155AC 002124EC  7C 08 02 A6 */	mflr r0
/* 802155B0 002124F0  3C 60 80 48 */	lis r3, lbl_8048236C@ha
/* 802155B4 002124F4  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802155B8 002124F8  90 01 00 54 */	stw r0, 0x54(r1)
/* 802155BC 002124FC  38 C3 23 6C */	addi r6, r3, lbl_8048236C@l
/* 802155C0 00212500  38 00 00 00 */	li r0, 0
/* 802155C4 00212504  38 61 00 08 */	addi r3, r1, 8
/* 802155C8 00212508  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802155CC 0021250C  7C BF 2B 78 */	mr r31, r5
/* 802155D0 00212510  80 E4 00 C8 */	lwz r7, 0xc8(r4)
/* 802155D4 00212514  90 01 00 18 */	stw r0, 0x18(r1)
/* 802155D8 00212518  90 C1 00 14 */	stw r6, 0x14(r1)
/* 802155DC 0021251C  90 E1 00 20 */	stw r7, 0x20(r1)
/* 802155E0 00212520  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802155E4 00212524  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802155E8 00212528  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802155EC 0021252C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 802155F0 00212530  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802155F4 00212534  90 01 00 24 */	stw r0, 0x24(r1)
/* 802155F8 00212538  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802155FC 0021253C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80215600 00212540  90 01 00 28 */	stw r0, 0x28(r1)
/* 80215604 00212544  90 01 00 44 */	stw r0, 0x44(r1)
/* 80215608 00212548  80 04 00 CC */	lwz r0, 0xcc(r4)
/* 8021560C 0021254C  7F E4 FB 78 */	mr r4, r31
/* 80215610 00212550  90 01 00 24 */	stw r0, 0x24(r1)
/* 80215614 00212554  81 9F 00 00 */	lwz r12, 0(r31)
/* 80215618 00212558  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021561C 0021255C  7D 89 03 A6 */	mtctr r12
/* 80215620 00212560  4E 80 04 21 */	bctrl 
/* 80215624 00212564  C0 41 00 08 */	lfs f2, 8(r1)
/* 80215628 00212568  7F E3 FB 78 */	mr r3, r31
/* 8021562C 0021256C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80215630 00212570  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80215634 00212574  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80215638 00212578  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8021563C 0021257C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80215640 00212580  81 9F 00 00 */	lwz r12, 0(r31)
/* 80215644 00212584  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80215648 00212588  7D 89 03 A6 */	mtctr r12
/* 8021564C 0021258C  4E 80 04 21 */	bctrl 
/* 80215650 00212590  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80215654 00212594  38 81 00 14 */	addi r4, r1, 0x14
/* 80215658 00212598  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021565C 0021259C  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80215660 002125A0  80 1F 01 F0 */	lwz r0, 0x1f0(r31)
/* 80215664 002125A4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215668 002125A8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8021566C 002125AC  48 21 73 65 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215670 002125B0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80215674 002125B4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80215678 002125B8  7C 08 03 A6 */	mtlr r0
/* 8021567C 002125BC  38 21 00 50 */	addi r1, r1, 0x50
/* 80215680 002125C0  4E 80 00 20 */	blr 
.endif

.global onMovieCommand__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni
onMovieCommand__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectioni:
/* 80215684 002125C4  4E 80 00 20 */	blr 

.if version == 1
.global onMovieStart__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 80215688 002125C8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8021568C 002125CC  7C 08 02 A6 */	mflr r0
/* 80215690 002125D0  3C C0 80 48 */	lis r6, lbl_80482150@ha
/* 80215694 002125D4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80215698 002125D8  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8021569C 002125DC  7C 9B 23 78 */	mr r27, r4
/* 802156A0 002125E0  7C BC 2B 78 */	mr r28, r5
/* 802156A4 002125E4  7C FD 3B 78 */	mr r29, r7
/* 802156A8 002125E8  3B E6 21 50 */	addi r31, r6, lbl_80482150@l
/* 802156AC 002125EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802156B0 002125F0  48 1E 81 9D */	bl startFadeBG_CourseName__Q26Screen9Game2DMgrFv
/* 802156B4 002125F4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802156B8 002125F8  48 1E 82 4D */	bl startCount_CourseName__Q26Screen9Game2DMgrFv
/* 802156BC 002125FC  7F 83 E3 78 */	mr r3, r28
/* 802156C0 00212600  38 9F 00 C0 */	addi r4, r31, 0xc0
/* 802156C4 00212604  48 21 C2 09 */	bl is__Q24Game11MovieConfigFPc
/* 802156C8 00212608  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802156CC 0021260C  41 82 00 0C */	beq .L_802156D8
/* 802156D0 00212610  7F 63 DB 78 */	mr r3, r27
/* 802156D4 00212614  4B F3 BE 61 */	bl createFallPikminSound__Q24Game15BaseGameSectionFv
.L_802156D8:
/* 802156D8 00212618  7F 83 E3 78 */	mr r3, r28
/* 802156DC 0021261C  38 9F 01 FC */	addi r4, r31, 0x1fc
/* 802156E0 00212620  48 21 C1 ED */	bl is__Q24Game11MovieConfigFPc
/* 802156E4 00212624  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802156E8 00212628  41 82 00 10 */	beq .L_802156F8
/* 802156EC 0021262C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802156F0 00212630  38 80 00 04 */	li r4, 4
/* 802156F4 00212634  48 1E 82 59 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_802156F8:
/* 802156F8 00212638  7F 83 E3 78 */	mr r3, r28
/* 802156FC 0021263C  38 9F 02 0C */	addi r4, r31, 0x20c
/* 80215700 00212640  48 21 C1 CD */	bl is__Q24Game11MovieConfigFPc
/* 80215704 00212644  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215708 00212648  41 82 00 54 */	beq .L_8021575C
/* 8021570C 0021264C  28 1D 00 00 */	cmplwi r29, 0
/* 80215710 00212650  40 82 00 18 */	bne .L_80215728
/* 80215714 00212654  7F 63 DB 78 */	mr r3, r27
/* 80215718 00212658  3B C0 00 01 */	li r30, 1
/* 8021571C 0021265C  38 80 00 00 */	li r4, 0
/* 80215720 00212660  4B F3 81 F9 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80215724 00212664  48 00 00 2C */	b .L_80215750
.L_80215728:
/* 80215728 00212668  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021572C 0021266C  38 80 00 02 */	li r4, 2
/* 80215730 00212670  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80215734 00212674  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80215738 00212678  41 82 00 08 */	beq .L_80215740
/* 8021573C 0021267C  38 80 00 03 */	li r4, 3
.L_80215740:
/* 80215740 00212680  7C 9E 23 78 */	mr r30, r4
/* 80215744 00212684  7F 63 DB 78 */	mr r3, r27
/* 80215748 00212688  38 80 00 01 */	li r4, 1
/* 8021574C 0021268C  4B F3 81 CD */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80215750:
/* 80215750 00212690  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80215754 00212694  7F C4 F3 78 */	mr r4, r30
/* 80215758 00212698  48 1E 81 F5 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_8021575C:
/* 8021575C 0021269C  7F 83 E3 78 */	mr r3, r28
/* 80215760 002126A0  38 9F 02 1C */	addi r4, r31, 0x21c
/* 80215764 002126A4  48 21 C1 69 */	bl is__Q24Game11MovieConfigFPc
/* 80215768 002126A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021576C 002126AC  41 82 00 60 */	beq .L_802157CC
/* 80215770 002126B0  3C 1D 86 A1 */	subis r0, r29, 0x795f
/* 80215774 002126B4  38 80 00 00 */	li r4, 0
/* 80215778 002126B8  28 00 30 34 */	cmplwi r0, 0x3034
/* 8021577C 002126BC  40 82 00 08 */	bne .L_80215784
/* 80215780 002126C0  38 80 00 01 */	li r4, 1
.L_80215784:
/* 80215784 002126C4  7F 63 DB 78 */	mr r3, r27
/* 80215788 002126C8  4B F3 E5 41 */	bl saveMainMapSituation__Q24Game17SingleGameSectionFb
/* 8021578C 002126CC  80 9B 01 84 */	lwz r4, 0x1a8(r27)
/* 80215790 002126D0  38 61 00 08 */	addi r3, r1, 8
/* 80215794 002126D4  81 84 00 00 */	lwz r12, 0(r4)
/* 80215798 002126D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021579C 002126DC  7D 89 03 A6 */	mtctr r12
/* 802157A0 002126E0  4E 80 04 21 */	bctrl 
/* 802157A4 002126E4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802157A8 002126E8  7F 63 DB 78 */	mr r3, r27
/* 802157AC 002126EC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802157B0 002126F0  38 81 00 14 */	addi r4, r1, 0x14
/* 802157B4 002126F4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802157B8 002126F8  38 A0 00 00 */	li r5, 0
/* 802157BC 002126FC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802157C0 00212700  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802157C4 00212704  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802157C8 00212708  4B F3 89 69 */	bl "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b"
.L_802157CC:
/* 802157CC 0021270C  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 802157D0 00212710  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802157D4 00212714  7C 08 03 A6 */	mtlr r0
/* 802157D8 00212718  38 21 00 40 */	addi r1, r1, 0x40
/* 802157DC 0021271C  4E 80 00 20 */	blr 
.else
.global onMovieStart__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 80215688 002125C8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8021568C 002125CC  7C 08 02 A6 */	mflr r0
/* 80215690 002125D0  3C C0 80 48 */	lis r6, lbl_80482150@ha
/* 80215694 002125D4  90 01 00 44 */	stw r0, 0x44(r1)
/* 80215698 002125D8  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 8021569C 002125DC  7C 9B 23 78 */	mr r27, r4
/* 802156A0 002125E0  7C BC 2B 78 */	mr r28, r5
/* 802156A4 002125E4  7C FD 3B 78 */	mr r29, r7
/* 802156A8 002125E8  3B E6 21 50 */	addi r31, r6, lbl_80482150@l
/* 802156AC 002125EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802156B0 002125F0  48 1E 81 9D */	bl startFadeBG_CourseName__Q26Screen9Game2DMgrFv
/* 802156B4 002125F4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802156B8 002125F8  48 1E 82 4D */	bl startCount_CourseName__Q26Screen9Game2DMgrFv
/* 802156BC 002125FC  7F 83 E3 78 */	mr r3, r28
/* 802156C0 00212600  38 9F 00 C0 */	addi r4, r31, 0xc0
/* 802156C4 00212604  48 21 C2 09 */	bl is__Q24Game11MovieConfigFPc
/* 802156C8 00212608  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802156CC 0021260C  41 82 00 0C */	beq .L_802156D8
/* 802156D0 00212610  7F 63 DB 78 */	mr r3, r27
/* 802156D4 00212614  4B F3 BE 61 */	bl createFallPikminSound__Q24Game15BaseGameSectionFv
.L_802156D8:
/* 802156D8 00212618  7F 83 E3 78 */	mr r3, r28
/* 802156DC 0021261C  38 9F 01 FC */	addi r4, r31, 0x1fc
/* 802156E0 00212620  48 21 C1 ED */	bl is__Q24Game11MovieConfigFPc
/* 802156E4 00212624  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802156E8 00212628  41 82 00 10 */	beq .L_802156F8
/* 802156EC 0021262C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802156F0 00212630  38 80 00 04 */	li r4, 4
/* 802156F4 00212634  48 1E 82 59 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_802156F8:
/* 802156F8 00212638  7F 83 E3 78 */	mr r3, r28
/* 802156FC 0021263C  38 9F 02 0C */	addi r4, r31, 0x20c
/* 80215700 00212640  48 21 C1 CD */	bl is__Q24Game11MovieConfigFPc
/* 80215704 00212644  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215708 00212648  41 82 00 54 */	beq .L_8021575C
/* 8021570C 0021264C  28 1D 00 00 */	cmplwi r29, 0
/* 80215710 00212650  40 82 00 18 */	bne .L_80215728
/* 80215714 00212654  7F 63 DB 78 */	mr r3, r27
/* 80215718 00212658  3B C0 00 01 */	li r30, 1
/* 8021571C 0021265C  38 80 00 00 */	li r4, 0
/* 80215720 00212660  4B F3 81 F9 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80215724 00212664  48 00 00 2C */	b .L_80215750
.L_80215728:
/* 80215728 00212668  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021572C 0021266C  38 80 00 02 */	li r4, 2
/* 80215730 00212670  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80215734 00212674  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80215738 00212678  41 82 00 08 */	beq .L_80215740
/* 8021573C 0021267C  38 80 00 03 */	li r4, 3
.L_80215740:
/* 80215740 00212680  7C 9E 23 78 */	mr r30, r4
/* 80215744 00212684  7F 63 DB 78 */	mr r3, r27
/* 80215748 00212688  38 80 00 01 */	li r4, 1
/* 8021574C 0021268C  4B F3 81 CD */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80215750:
/* 80215750 00212690  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80215754 00212694  7F C4 F3 78 */	mr r4, r30
/* 80215758 00212698  48 1E 81 F5 */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_8021575C:
/* 8021575C 0021269C  7F 83 E3 78 */	mr r3, r28
/* 80215760 002126A0  38 9F 02 1C */	addi r4, r31, 0x21c
/* 80215764 002126A4  48 21 C1 69 */	bl is__Q24Game11MovieConfigFPc
/* 80215768 002126A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021576C 002126AC  41 82 00 60 */	beq .L_802157CC
/* 80215770 002126B0  3C 1D 86 A1 */	subis r0, r29, 0x795f
/* 80215774 002126B4  38 80 00 00 */	li r4, 0
/* 80215778 002126B8  28 00 30 34 */	cmplwi r0, 0x3034
/* 8021577C 002126BC  40 82 00 08 */	bne .L_80215784
/* 80215780 002126C0  38 80 00 01 */	li r4, 1
.L_80215784:
/* 80215784 002126C4  7F 63 DB 78 */	mr r3, r27
/* 80215788 002126C8  4B F3 E5 41 */	bl saveMainMapSituation__Q24Game17SingleGameSectionFb
/* 8021578C 002126CC  80 9B 01 84 */	lwz r4, 0x184(r27)
/* 80215790 002126D0  38 61 00 08 */	addi r3, r1, 8
/* 80215794 002126D4  81 84 00 00 */	lwz r12, 0(r4)
/* 80215798 002126D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021579C 002126DC  7D 89 03 A6 */	mtctr r12
/* 802157A0 002126E0  4E 80 04 21 */	bctrl 
/* 802157A4 002126E4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802157A8 002126E8  7F 63 DB 78 */	mr r3, r27
/* 802157AC 002126EC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802157B0 002126F0  38 81 00 14 */	addi r4, r1, 0x14
/* 802157B4 002126F4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802157B8 002126F8  38 A0 00 00 */	li r5, 0
/* 802157BC 002126FC  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 802157C0 00212700  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 802157C4 00212704  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802157C8 00212708  4B F3 89 69 */	bl "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b"
.L_802157CC:
/* 802157CC 0021270C  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 802157D0 00212710  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802157D4 00212714  7C 08 03 A6 */	mtlr r0
/* 802157D8 00212718  38 21 00 40 */	addi r1, r1, 0x40
/* 802157DC 0021271C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onMovieDone__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 802157E0 00212720  94 21 FA 80 */	stwu r1, -0x580(r1)
/* 802157E4 00212724  7C 08 02 A6 */	mflr r0
/* 802157E8 00212728  3C C0 80 48 */	lis r6, lbl_80482150@ha
/* 802157EC 0021272C  90 01 05 84 */	stw r0, 0x584(r1)
/* 802157F0 00212730  BF 21 05 64 */	stmw r25, 0x564(r1)
/* 802157F4 00212734  7C 7A 1B 78 */	mr r26, r3
/* 802157F8 00212738  7C 9B 23 78 */	mr r27, r4
/* 802157FC 0021273C  7C BC 2B 78 */	mr r28, r5
/* 80215800 00212740  7C FD 3B 78 */	mr r29, r7
/* 80215804 00212744  3B C6 21 50 */	addi r30, r6, lbl_80482150@l
/* 80215808 00212748  48 00 1A 55 */	bl needRepayDemo__Q34Game10SingleGame9GameStateFv
/* 8021580C 0021274C  7C 7F 1B 78 */	mr r31, r3
/* 80215810 00212750  7F 83 E3 78 */	mr r3, r28
/* 80215814 00212754  38 9E 02 28 */	addi r4, r30, 0x228
/* 80215818 00212758  48 21 C0 B5 */	bl is__Q24Game11MovieConfigFPc
/* 8021581C 0021275C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215820 00212760  41 82 00 94 */	beq .L_802158B4
/* 80215824 00212764  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215828 00212768  38 80 00 00 */	li r4, 0
/* 8021582C 0021276C  4B FD 2A 35 */	bl getGroundOtakaraNum__Q24Game8PlayDataFi
/* 80215830 00212770  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215834 00212774  38 80 00 00 */	li r4, 0
/* 80215838 00212778  4B FD 2A 29 */	bl getGroundOtakaraNum__Q24Game8PlayDataFi
/* 8021583C 0021277C  2C 03 00 01 */	cmpwi r3, 1
/* 80215840 00212780  40 82 00 74 */	bne .L_802158B4
/* 80215844 00212784  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215848 00212788  38 80 00 00 */	li r4, 0
/* 8021584C 0021278C  4B FD 41 75 */	bl getGroundOtakaraNum_Old__Q24Game8PlayDataFi
/* 80215850 00212790  2C 03 00 00 */	cmpwi r3, 0
/* 80215854 00212794  40 82 00 60 */	bne .L_802158B4
/* 80215858 00212798  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 8021585C 0021279C  38 7E 02 3C */	addi r3, r30, 0x23c
/* 80215860 002127A0  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 80215864 002127A4  38 00 00 00 */	li r0, 0
/* 80215868 002127A8  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 8021586C 002127AC  38 81 01 F8 */	addi r4, r1, 0x1f8
/* 80215870 002127B0  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80215874 002127B4  90 61 01 F8 */	stw r3, 0x1f8(r1)
/* 80215878 002127B8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021587C 002127BC  90 C1 01 FC */	stw r6, 0x1fc(r1)
/* 80215880 002127C0  90 A1 02 04 */	stw r5, 0x204(r1)
/* 80215884 002127C4  D0 01 02 10 */	stfs f0, 0x210(r1)
/* 80215888 002127C8  D0 01 02 14 */	stfs f0, 0x214(r1)
/* 8021588C 002127CC  D0 01 02 18 */	stfs f0, 0x218(r1)
/* 80215890 002127D0  D0 01 02 1C */	stfs f0, 0x21c(r1)
/* 80215894 002127D4  90 01 02 20 */	stw r0, 0x220(r1)
/* 80215898 002127D8  90 01 02 08 */	stw r0, 0x208(r1)
/* 8021589C 002127DC  90 01 02 00 */	stw r0, 0x200(r1)
/* 802158A0 002127E0  90 01 02 24 */	stw r0, 0x224(r1)
/* 802158A4 002127E4  90 01 02 0C */	stw r0, 0x20c(r1)
/* 802158A8 002127E8  90 01 02 28 */	stw r0, 0x228(r1)
/* 802158AC 002127EC  48 21 71 25 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802158B0 002127F0  48 00 19 98 */	b .L_80217248
.L_802158B4:
/* 802158B4 002127F4  7F 83 E3 78 */	mr r3, r28
/* 802158B8 002127F8  38 9E 02 3C */	addi r4, r30, 0x23c
/* 802158BC 002127FC  48 21 C0 11 */	bl is__Q24Game11MovieConfigFPc
/* 802158C0 00212800  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802158C4 00212804  41 82 00 30 */	beq .L_802158F4
/* 802158C8 00212808  38 00 00 00 */	li r0, 0
/* 802158CC 0021280C  7F 43 D3 78 */	mr r3, r26
/* 802158D0 00212810  B0 01 00 14 */	sth r0, 0x14(r1)
/* 802158D4 00212814  7F 64 DB 78 */	mr r4, r27
/* 802158D8 00212818  38 C1 00 14 */	addi r6, r1, 0x14
/* 802158DC 0021281C  38 A0 00 05 */	li r5, 5
/* 802158E0 00212820  81 9A 00 00 */	lwz r12, 0(r26)
/* 802158E4 00212824  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802158E8 00212828  7D 89 03 A6 */	mtctr r12
/* 802158EC 0021282C  4E 80 04 21 */	bctrl 
/* 802158F0 00212830  48 00 19 58 */	b .L_80217248
.L_802158F4:
/* 802158F4 00212834  7F 83 E3 78 */	mr r3, r28
/* 802158F8 00212838  38 9E 02 50 */	addi r4, r30, 0x250
/* 802158FC 0021283C  48 21 BF D1 */	bl is__Q24Game11MovieConfigFPc
/* 80215900 00212840  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215904 00212844  41 82 02 78 */	beq .L_80215B7C
/* 80215908 00212848  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021590C 0021284C  38 80 00 12 */	li r4, 0x12
/* 80215910 00212850  4B FD 1A D1 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80215914 00212854  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215918 00212858  40 82 00 84 */	bne .L_8021599C
/* 8021591C 0021285C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215920 00212860  38 80 00 0A */	li r4, 0xa
/* 80215924 00212864  38 63 00 48 */	addi r3, r3, 0x48
/* 80215928 00212868  4B FD 06 A9 */	bl hasItem__Q24Game10OlimarDataFi
/* 8021592C 0021286C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215930 00212870  41 82 00 6C */	beq .L_8021599C
/* 80215934 00212874  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215938 00212878  38 80 00 12 */	li r4, 0x12
/* 8021593C 0021287C  4B FD 1A 69 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80215940 00212880  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 80215944 00212884  38 7E 02 64 */	addi r3, r30, 0x264
/* 80215948 00212888  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 8021594C 0021288C  38 00 00 00 */	li r0, 0
/* 80215950 00212890  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80215954 00212894  38 81 01 C4 */	addi r4, r1, 0x1c4
/* 80215958 00212898  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 8021595C 0021289C  90 61 01 C4 */	stw r3, 0x1c4(r1)
/* 80215960 002128A0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215964 002128A4  90 C1 01 C8 */	stw r6, 0x1c8(r1)
/* 80215968 002128A8  90 A1 01 D0 */	stw r5, 0x1d0(r1)
/* 8021596C 002128AC  D0 01 01 DC */	stfs f0, 0x1dc(r1)
/* 80215970 002128B0  D0 01 01 E0 */	stfs f0, 0x1e0(r1)
/* 80215974 002128B4  D0 01 01 E4 */	stfs f0, 0x1e4(r1)
/* 80215978 002128B8  D0 01 01 E8 */	stfs f0, 0x1e8(r1)
/* 8021597C 002128BC  90 01 01 EC */	stw r0, 0x1ec(r1)
/* 80215980 002128C0  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80215984 002128C4  90 01 01 CC */	stw r0, 0x1cc(r1)
/* 80215988 002128C8  90 01 01 F0 */	stw r0, 0x1f0(r1)
/* 8021598C 002128CC  90 01 01 D8 */	stw r0, 0x1d8(r1)
/* 80215990 002128D0  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 80215994 002128D4  48 21 70 3D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215998 002128D8  48 00 18 B0 */	b .L_80217248
.L_8021599C:
/* 8021599C 002128DC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802159A0 002128E0  41 82 00 20 */	beq .L_802159C0
/* 802159A4 002128E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802159A8 002128E8  4B FD 34 B5 */	bl getRepayLevel__Q24Game8PlayDataFv
/* 802159AC 002128EC  2C 03 00 09 */	cmpwi r3, 9
/* 802159B0 002128F0  40 82 00 10 */	bne .L_802159C0
/* 802159B4 002128F4  7F 43 D3 78 */	mr r3, r26
/* 802159B8 002128F8  48 00 19 19 */	bl startRepayDemo__Q34Game10SingleGame9GameStateFv
/* 802159BC 002128FC  48 00 18 8C */	b .L_80217248
.L_802159C0:
/* 802159C0 00212900  7F 43 D3 78 */	mr r3, r26
/* 802159C4 00212904  7F 64 DB 78 */	mr r4, r27
/* 802159C8 00212908  4B FF E4 95 */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 802159CC 0021290C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802159D0 00212910  40 82 18 78 */	bne .L_80217248
/* 802159D4 00212914  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 802159D8 00212918  28 00 00 00 */	cmplwi r0, 0
/* 802159DC 0021291C  41 82 00 60 */	beq .L_80215A3C
/* 802159E0 00212920  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 802159E4 00212924  38 7E 02 70 */	addi r3, r30, 0x270
/* 802159E8 00212928  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 802159EC 0021292C  38 00 00 00 */	li r0, 0
/* 802159F0 00212930  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802159F4 00212934  38 81 01 90 */	addi r4, r1, 0x190
/* 802159F8 00212938  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802159FC 0021293C  90 61 01 90 */	stw r3, 0x190(r1)
/* 80215A00 00212940  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215A04 00212944  90 C1 01 94 */	stw r6, 0x194(r1)
/* 80215A08 00212948  90 A1 01 9C */	stw r5, 0x19c(r1)
/* 80215A0C 0021294C  D0 01 01 A8 */	stfs f0, 0x1a8(r1)
/* 80215A10 00212950  D0 01 01 AC */	stfs f0, 0x1ac(r1)
/* 80215A14 00212954  D0 01 01 B0 */	stfs f0, 0x1b0(r1)
/* 80215A18 00212958  D0 01 01 B4 */	stfs f0, 0x1b4(r1)
/* 80215A1C 0021295C  90 01 01 B8 */	stw r0, 0x1b8(r1)
/* 80215A20 00212960  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 80215A24 00212964  90 01 01 98 */	stw r0, 0x198(r1)
/* 80215A28 00212968  90 01 01 BC */	stw r0, 0x1bc(r1)
/* 80215A2C 0021296C  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 80215A30 00212970  90 01 01 C0 */	stw r0, 0x1c0(r1)
/* 80215A34 00212974  48 21 6F 9D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215A38 00212978  48 00 18 10 */	b .L_80217248
.L_80215A3C:
/* 80215A3C 0021297C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215A40 00212980  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215A44 00212984  60 00 00 02 */	ori r0, r0, 2
/* 80215A48 00212988  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80215A4C 0021298C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215A50 00212990  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80215A54 00212994  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80215A58 00212998  28 00 00 00 */	cmplwi r0, 0
/* 80215A5C 0021299C  41 82 00 64 */	beq .L_80215AC0
/* 80215A60 002129A0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215A64 002129A4  28 00 00 00 */	cmplwi r0, 0
/* 80215A68 002129A8  40 82 00 18 */	bne .L_80215A80
/* 80215A6C 002129AC  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215A70 002129B0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215A74 002129B4  38 80 01 D3 */	li r4, 0x1d3
/* 80215A78 002129B8  4C C6 31 82 */	crclr 6
/* 80215A7C 002129BC  4B E1 4B C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215A80:
/* 80215A80 002129C0  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215A84 002129C4  80 19 00 04 */	lwz r0, 4(r25)
/* 80215A88 002129C8  28 00 00 00 */	cmplwi r0, 0
/* 80215A8C 002129CC  40 82 00 18 */	bne .L_80215AA4
/* 80215A90 002129D0  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215A94 002129D4  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215A98 002129D8  38 80 00 C7 */	li r4, 0xc7
/* 80215A9C 002129DC  4C C6 31 82 */	crclr 6
/* 80215AA0 002129E0  4B E1 4B A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215AA4:
/* 80215AA4 002129E4  80 79 00 04 */	lwz r3, 4(r25)
/* 80215AA8 002129E8  80 63 00 04 */	lwz r3, 4(r3)
/* 80215AAC 002129EC  81 83 00 00 */	lwz r12, 0(r3)
/* 80215AB0 002129F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215AB4 002129F4  7D 89 03 A6 */	mtctr r12
/* 80215AB8 002129F8  4E 80 04 21 */	bctrl 
/* 80215ABC 002129FC  48 00 00 C0 */	b .L_80215B7C
.L_80215AC0:
/* 80215AC0 00212A00  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215AC4 00212A04  28 00 00 00 */	cmplwi r0, 0
/* 80215AC8 00212A08  40 82 00 18 */	bne .L_80215AE0
/* 80215ACC 00212A0C  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215AD0 00212A10  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215AD4 00212A14  38 80 01 D3 */	li r4, 0x1d3
/* 80215AD8 00212A18  4C C6 31 82 */	crclr 6
/* 80215ADC 00212A1C  4B E1 4B 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215AE0:
/* 80215AE0 00212A20  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215AE4 00212A24  80 19 00 04 */	lwz r0, 4(r25)
/* 80215AE8 00212A28  28 00 00 00 */	cmplwi r0, 0
/* 80215AEC 00212A2C  40 82 00 18 */	bne .L_80215B04
/* 80215AF0 00212A30  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215AF4 00212A34  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215AF8 00212A38  38 80 00 C7 */	li r4, 0xc7
/* 80215AFC 00212A3C  4C C6 31 82 */	crclr 6
/* 80215B00 00212A40  4B E1 4B 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215B04:
/* 80215B04 00212A44  80 79 00 04 */	lwz r3, 4(r25)
/* 80215B08 00212A48  80 63 00 04 */	lwz r3, 4(r3)
/* 80215B0C 00212A4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215B10 00212A50  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80215B14 00212A54  7D 89 03 A6 */	mtctr r12
/* 80215B18 00212A58  4E 80 04 21 */	bctrl 
/* 80215B1C 00212A5C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215B20 00212A60  28 00 00 00 */	cmplwi r0, 0
/* 80215B24 00212A64  40 82 00 18 */	bne .L_80215B3C
/* 80215B28 00212A68  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215B2C 00212A6C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215B30 00212A70  38 80 01 D3 */	li r4, 0x1d3
/* 80215B34 00212A74  4C C6 31 82 */	crclr 6
/* 80215B38 00212A78  4B E1 4B 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215B3C:
/* 80215B3C 00212A7C  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215B40 00212A80  80 19 00 04 */	lwz r0, 4(r25)
/* 80215B44 00212A84  28 00 00 00 */	cmplwi r0, 0
/* 80215B48 00212A88  40 82 00 18 */	bne .L_80215B60
/* 80215B4C 00212A8C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215B50 00212A90  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215B54 00212A94  38 80 00 C7 */	li r4, 0xc7
/* 80215B58 00212A98  4C C6 31 82 */	crclr 6
/* 80215B5C 00212A9C  4B E1 4A E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215B60:
/* 80215B60 00212AA0  80 79 00 04 */	lwz r3, 4(r25)
/* 80215B64 00212AA4  80 63 00 04 */	lwz r3, 4(r3)
/* 80215B68 00212AA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80215B6C 00212AAC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80215B70 00212AB0  7D 89 03 A6 */	mtctr r12
/* 80215B74 00212AB4  4E 80 04 21 */	bctrl 
/* 80215B78 00212AB8  48 12 B1 35 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80215B7C:
/* 80215B7C 00212ABC  7F 83 E3 78 */	mr r3, r28
/* 80215B80 00212AC0  38 9E 02 84 */	addi r4, r30, 0x284
/* 80215B84 00212AC4  48 21 BD 49 */	bl is__Q24Game11MovieConfigFPc
/* 80215B88 00212AC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215B8C 00212ACC  41 82 00 34 */	beq .L_80215BC0
/* 80215B90 00212AD0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215B94 00212AD4  38 80 00 00 */	li r4, 0
/* 80215B98 00212AD8  4B FD 18 49 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80215B9C 00212ADC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215BA0 00212AE0  40 82 00 20 */	bne .L_80215BC0
/* 80215BA4 00212AE4  7F 63 DB 78 */	mr r3, r27
/* 80215BA8 00212AE8  C0 22 BC 78 */	lfs f1, lbl_80519FD8@sda21(r2)
/* 80215BAC 00212AEC  81 9B 00 00 */	lwz r12, 0(r27)
/* 80215BB0 00212AF0  38 80 00 01 */	li r4, 1
/* 80215BB4 00212AF4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80215BB8 00212AF8  7D 89 03 A6 */	mtctr r12
/* 80215BBC 00212AFC  4E 80 04 21 */	bctrl 
.L_80215BC0:
/* 80215BC0 00212B00  7F 83 E3 78 */	mr r3, r28
/* 80215BC4 00212B04  38 9E 02 64 */	addi r4, r30, 0x264
/* 80215BC8 00212B08  48 21 BD 05 */	bl is__Q24Game11MovieConfigFPc
/* 80215BCC 00212B0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215BD0 00212B10  41 82 00 54 */	beq .L_80215C24
/* 80215BD4 00212B14  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80215BD8 00212B18  41 82 00 20 */	beq .L_80215BF8
/* 80215BDC 00212B1C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215BE0 00212B20  4B FD 32 7D */	bl getRepayLevel__Q24Game8PlayDataFv
/* 80215BE4 00212B24  2C 03 00 09 */	cmpwi r3, 9
/* 80215BE8 00212B28  40 82 00 10 */	bne .L_80215BF8
/* 80215BEC 00212B2C  7F 43 D3 78 */	mr r3, r26
/* 80215BF0 00212B30  48 00 16 E1 */	bl startRepayDemo__Q34Game10SingleGame9GameStateFv
/* 80215BF4 00212B34  48 00 16 54 */	b .L_80217248
.L_80215BF8:
/* 80215BF8 00212B38  38 00 00 00 */	li r0, 0
/* 80215BFC 00212B3C  7F 43 D3 78 */	mr r3, r26
/* 80215C00 00212B40  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80215C04 00212B44  7F 64 DB 78 */	mr r4, r27
/* 80215C08 00212B48  38 C1 00 10 */	addi r6, r1, 0x10
/* 80215C0C 00212B4C  38 A0 00 05 */	li r5, 5
/* 80215C10 00212B50  81 9A 00 00 */	lwz r12, 0(r26)
/* 80215C14 00212B54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215C18 00212B58  7D 89 03 A6 */	mtctr r12
/* 80215C1C 00212B5C  4E 80 04 21 */	bctrl 
/* 80215C20 00212B60  48 00 16 28 */	b .L_80217248
.L_80215C24:
/* 80215C24 00212B64  7F 83 E3 78 */	mr r3, r28
/* 80215C28 00212B68  38 9E 00 1C */	addi r4, r30, 0x1c
/* 80215C2C 00212B6C  48 21 BC A1 */	bl is__Q24Game11MovieConfigFPc
/* 80215C30 00212B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215C34 00212B74  40 82 00 18 */	bne .L_80215C4C
/* 80215C38 00212B78  7F 83 E3 78 */	mr r3, r28
/* 80215C3C 00212B7C  38 9E 02 50 */	addi r4, r30, 0x250
/* 80215C40 00212B80  48 21 BC 8D */	bl is__Q24Game11MovieConfigFPc
/* 80215C44 00212B84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215C48 00212B88  41 82 02 74 */	beq .L_80215EBC
.L_80215C4C:
/* 80215C4C 00212B8C  7F 83 E3 78 */	mr r3, r28
/* 80215C50 00212B90  38 9E 00 1C */	addi r4, r30, 0x1c
/* 80215C54 00212B94  48 21 BC 79 */	bl is__Q24Game11MovieConfigFPc
/* 80215C58 00212B98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215C5C 00212B9C  41 82 00 1C */	beq .L_80215C78
/* 80215C60 00212BA0  80 7B 02 44 */	lwz r3, 0x268(r27)
/* 80215C64 00212BA4  38 80 00 00 */	li r4, 0
/* 80215C68 00212BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80215C6C 00212BAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80215C70 00212BB0  7D 89 03 A6 */	mtctr r12
/* 80215C74 00212BB4  4E 80 04 21 */	bctrl 
.L_80215C78:
/* 80215C78 00212BB8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80215C7C 00212BBC  39 80 00 00 */	li r12, 0
/* 80215C80 00212BC0  3B E3 11 48 */	addi r31, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80215C84 00212BC4  39 00 00 01 */	li r8, 1
/* 80215C88 00212BC8  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80215C8C 00212BCC  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80215C90 00212BD0  38 C0 00 0A */	li r6, 0xa
/* 80215C94 00212BD4  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80215C98 00212BD8  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80215C9C 00212BDC  38 E0 00 02 */	li r7, 2
/* 80215CA0 00212BE0  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80215CA4 00212BE4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80215CA8 00212BE8  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80215CAC 00212BEC  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80215CB0 00212BF0  39 40 04 D2 */	li r10, 0x4d2
/* 80215CB4 00212BF4  39 20 00 32 */	li r9, 0x32
/* 80215CB8 00212BF8  93 E1 04 D4 */	stw r31, 0x4d4(r1)
/* 80215CBC 00212BFC  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80215CC0 00212C00  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80215CC4 00212C04  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80215CC8 00212C08  93 E1 05 3C */	stw r31, 0x53c(r1)
/* 80215CCC 00212C0C  38 81 04 D4 */	addi r4, r1, 0x4d4
/* 80215CD0 00212C10  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80215CD4 00212C14  93 E1 05 4C */	stw r31, 0x54c(r1)
/* 80215CD8 00212C18  91 81 04 D8 */	stw r12, 0x4d8(r1)
/* 80215CDC 00212C1C  91 61 04 D4 */	stw r11, 0x4d4(r1)
/* 80215CE0 00212C20  D0 81 04 DC */	stfs f4, 0x4dc(r1)
/* 80215CE4 00212C24  91 81 04 E0 */	stw r12, 0x4e0(r1)
/* 80215CE8 00212C28  91 81 04 E8 */	stw r12, 0x4e8(r1)
/* 80215CEC 00212C2C  91 41 04 E4 */	stw r10, 0x4e4(r1)
/* 80215CF0 00212C30  91 21 04 EC */	stw r9, 0x4ec(r1)
/* 80215CF4 00212C34  99 81 04 F0 */	stb r12, 0x4f0(r1)
/* 80215CF8 00212C38  91 81 04 F4 */	stw r12, 0x4f4(r1)
/* 80215CFC 00212C3C  D0 61 04 F8 */	stfs f3, 0x4f8(r1)
/* 80215D00 00212C40  91 01 04 FC */	stw r8, 0x4fc(r1)
/* 80215D04 00212C44  90 E1 05 00 */	stw r7, 0x500(r1)
/* 80215D08 00212C48  90 C1 05 04 */	stw r6, 0x504(r1)
/* 80215D0C 00212C4C  90 C1 05 08 */	stw r6, 0x508(r1)
/* 80215D10 00212C50  99 01 05 0C */	stb r8, 0x50c(r1)
/* 80215D14 00212C54  D0 61 05 10 */	stfs f3, 0x510(r1)
/* 80215D18 00212C58  91 01 05 14 */	stw r8, 0x514(r1)
/* 80215D1C 00212C5C  90 E1 05 18 */	stw r7, 0x518(r1)
/* 80215D20 00212C60  90 C1 05 1C */	stw r6, 0x51c(r1)
/* 80215D24 00212C64  90 C1 05 20 */	stw r6, 0x520(r1)
/* 80215D28 00212C68  99 01 05 24 */	stb r8, 0x524(r1)
/* 80215D2C 00212C6C  91 81 05 40 */	stw r12, 0x540(r1)
/* 80215D30 00212C70  90 A1 05 3C */	stw r5, 0x53c(r1)
/* 80215D34 00212C74  D0 41 05 48 */	stfs f2, 0x548(r1)
/* 80215D38 00212C78  D0 41 05 44 */	stfs f2, 0x544(r1)
/* 80215D3C 00212C7C  91 81 05 50 */	stw r12, 0x550(r1)
/* 80215D40 00212C80  90 01 05 4C */	stw r0, 0x54c(r1)
/* 80215D44 00212C84  D0 21 05 58 */	stfs f1, 0x558(r1)
/* 80215D48 00212C88  D0 21 05 54 */	stfs f1, 0x554(r1)
/* 80215D4C 00212C8C  99 81 05 32 */	stb r12, 0x532(r1)
/* 80215D50 00212C90  D0 01 05 28 */	stfs f0, 0x528(r1)
/* 80215D54 00212C94  99 81 05 30 */	stb r12, 0x530(r1)
/* 80215D58 00212C98  99 01 05 31 */	stb r8, 0x531(r1)
/* 80215D5C 00212C9C  91 01 05 2C */	stw r8, 0x52c(r1)
/* 80215D60 00212CA0  99 81 05 33 */	stb r12, 0x533(r1)
/* 80215D64 00212CA4  99 81 05 34 */	stb r12, 0x534(r1)
/* 80215D68 00212CA8  99 81 05 35 */	stb r12, 0x535(r1)
/* 80215D6C 00212CAC  99 81 05 36 */	stb r12, 0x536(r1)
/* 80215D70 00212CB0  99 81 05 37 */	stb r12, 0x537(r1)
/* 80215D74 00212CB4  99 81 05 38 */	stb r12, 0x538(r1)
/* 80215D78 00212CB8  48 1E 63 91 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 80215D7C 00212CBC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215D80 00212CC0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215D84 00212CC4  60 00 00 02 */	ori r0, r0, 2
/* 80215D88 00212CC8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80215D8C 00212CCC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215D90 00212CD0  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80215D94 00212CD4  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80215D98 00212CD8  28 00 00 00 */	cmplwi r0, 0
/* 80215D9C 00212CDC  41 82 00 64 */	beq .L_80215E00
/* 80215DA0 00212CE0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215DA4 00212CE4  28 00 00 00 */	cmplwi r0, 0
/* 80215DA8 00212CE8  40 82 00 18 */	bne .L_80215DC0
/* 80215DAC 00212CEC  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215DB0 00212CF0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215DB4 00212CF4  38 80 01 D3 */	li r4, 0x1d3
/* 80215DB8 00212CF8  4C C6 31 82 */	crclr 6
/* 80215DBC 00212CFC  4B E1 48 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215DC0:
/* 80215DC0 00212D00  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215DC4 00212D04  80 19 00 04 */	lwz r0, 4(r25)
/* 80215DC8 00212D08  28 00 00 00 */	cmplwi r0, 0
/* 80215DCC 00212D0C  40 82 00 18 */	bne .L_80215DE4
/* 80215DD0 00212D10  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215DD4 00212D14  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215DD8 00212D18  38 80 00 C7 */	li r4, 0xc7
/* 80215DDC 00212D1C  4C C6 31 82 */	crclr 6
/* 80215DE0 00212D20  4B E1 48 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215DE4:
/* 80215DE4 00212D24  80 79 00 04 */	lwz r3, 4(r25)
/* 80215DE8 00212D28  80 63 00 04 */	lwz r3, 4(r3)
/* 80215DEC 00212D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215DF0 00212D30  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215DF4 00212D34  7D 89 03 A6 */	mtctr r12
/* 80215DF8 00212D38  4E 80 04 21 */	bctrl 
/* 80215DFC 00212D3C  48 00 00 C0 */	b .L_80215EBC
.L_80215E00:
/* 80215E00 00212D40  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E04 00212D44  28 00 00 00 */	cmplwi r0, 0
/* 80215E08 00212D48  40 82 00 18 */	bne .L_80215E20
/* 80215E0C 00212D4C  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215E10 00212D50  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E14 00212D54  38 80 01 D3 */	li r4, 0x1d3
/* 80215E18 00212D58  4C C6 31 82 */	crclr 6
/* 80215E1C 00212D5C  4B E1 48 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215E20:
/* 80215E20 00212D60  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E24 00212D64  80 19 00 04 */	lwz r0, 4(r25)
/* 80215E28 00212D68  28 00 00 00 */	cmplwi r0, 0
/* 80215E2C 00212D6C  40 82 00 18 */	bne .L_80215E44
/* 80215E30 00212D70  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215E34 00212D74  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E38 00212D78  38 80 00 C7 */	li r4, 0xc7
/* 80215E3C 00212D7C  4C C6 31 82 */	crclr 6
/* 80215E40 00212D80  4B E1 48 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215E44:
/* 80215E44 00212D84  80 79 00 04 */	lwz r3, 4(r25)
/* 80215E48 00212D88  80 63 00 04 */	lwz r3, 4(r3)
/* 80215E4C 00212D8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215E50 00212D90  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80215E54 00212D94  7D 89 03 A6 */	mtctr r12
/* 80215E58 00212D98  4E 80 04 21 */	bctrl 
/* 80215E5C 00212D9C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E60 00212DA0  28 00 00 00 */	cmplwi r0, 0
/* 80215E64 00212DA4  40 82 00 18 */	bne .L_80215E7C
/* 80215E68 00212DA8  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215E6C 00212DAC  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E70 00212DB0  38 80 01 D3 */	li r4, 0x1d3
/* 80215E74 00212DB4  4C C6 31 82 */	crclr 6
/* 80215E78 00212DB8  4B E1 47 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215E7C:
/* 80215E7C 00212DBC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E80 00212DC0  80 19 00 04 */	lwz r0, 4(r25)
/* 80215E84 00212DC4  28 00 00 00 */	cmplwi r0, 0
/* 80215E88 00212DC8  40 82 00 18 */	bne .L_80215EA0
/* 80215E8C 00212DCC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215E90 00212DD0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E94 00212DD4  38 80 00 C7 */	li r4, 0xc7
/* 80215E98 00212DD8  4C C6 31 82 */	crclr 6
/* 80215E9C 00212DDC  4B E1 47 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215EA0:
/* 80215EA0 00212DE0  80 79 00 04 */	lwz r3, 4(r25)
/* 80215EA4 00212DE4  80 63 00 04 */	lwz r3, 4(r3)
/* 80215EA8 00212DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80215EAC 00212DEC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80215EB0 00212DF0  7D 89 03 A6 */	mtctr r12
/* 80215EB4 00212DF4  4E 80 04 21 */	bctrl 
/* 80215EB8 00212DF8  48 12 AD F5 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80215EBC:
/* 80215EBC 00212DFC  7F 83 E3 78 */	mr r3, r28
/* 80215EC0 00212E00  38 9E 00 1C */	addi r4, r30, 0x1c
/* 80215EC4 00212E04  48 21 BA 09 */	bl is__Q24Game11MovieConfigFPc
/* 80215EC8 00212E08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215ECC 00212E0C  41 82 00 90 */	beq .L_80215F5C
/* 80215ED0 00212E10  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80215ED4 00212E14  38 80 00 01 */	li r4, 1
/* 80215ED8 00212E18  81 83 00 00 */	lwz r12, 0(r3)
/* 80215EDC 00212E1C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80215EE0 00212E20  7D 89 03 A6 */	mtctr r12
/* 80215EE4 00212E24  4E 80 04 21 */	bctrl 
/* 80215EE8 00212E28  C0 22 BC 8C */	lfs f1, lbl_80519FEC@sda21(r2)
/* 80215EEC 00212E2C  7C 79 1B 78 */	mr r25, r3
/* 80215EF0 00212E30  C0 42 BC 90 */	lfs f2, lbl_80519FF0@sda21(r2)
/* 80215EF4 00212E34  C0 02 BC 94 */	lfs f0, lbl_80519FF4@sda21(r2)
/* 80215EF8 00212E38  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80215EFC 00212E3C  C0 22 BC 98 */	lfs f1, lbl_80519FF8@sda21(r2)
/* 80215F00 00212E40  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80215F04 00212E44  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80215F08 00212E48  48 1F BC C9 */	bl roundAng__Ff
/* 80215F0C 00212E4C  D0 39 01 FC */	stfs f1, 0x1fc(r25)
/* 80215F10 00212E50  38 81 00 4C */	addi r4, r1, 0x4c
/* 80215F14 00212E54  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80215F18 00212E58  81 83 00 04 */	lwz r12, 4(r3)
/* 80215F1C 00212E5C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80215F20 00212E60  7D 89 03 A6 */	mtctr r12
/* 80215F24 00212E64  4E 80 04 21 */	bctrl 
/* 80215F28 00212E68  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80215F2C 00212E6C  7F 23 CB 78 */	mr r3, r25
/* 80215F30 00212E70  38 81 00 4C */	addi r4, r1, 0x4c
/* 80215F34 00212E74  38 A0 00 00 */	li r5, 0
/* 80215F38 00212E78  4B F2 52 71 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80215F3C 00212E7C  80 79 02 70 */	lwz r3, 0x270(r25)
/* 80215F40 00212E80  7F 24 CB 78 */	mr r4, r25
/* 80215F44 00212E84  38 A0 00 00 */	li r5, 0
/* 80215F48 00212E88  38 C0 00 00 */	li r6, 0
/* 80215F4C 00212E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215F50 00212E90  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80215F54 00212E94  7D 89 03 A6 */	mtctr r12
/* 80215F58 00212E98  4E 80 04 21 */	bctrl 
.L_80215F5C:
/* 80215F5C 00212E9C  7F 83 E3 78 */	mr r3, r28
/* 80215F60 00212EA0  38 9E 02 98 */	addi r4, r30, 0x298
/* 80215F64 00212EA4  48 21 B9 69 */	bl is__Q24Game11MovieConfigFPc
/* 80215F68 00212EA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215F6C 00212EAC  41 82 02 C8 */	beq .L_80216234
/* 80215F70 00212EB0  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 80215F74 00212EB4  28 00 00 00 */	cmplwi r0, 0
/* 80215F78 00212EB8  41 82 00 60 */	beq .L_80215FD8
/* 80215F7C 00212EBC  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 80215F80 00212EC0  38 7E 02 70 */	addi r3, r30, 0x270
/* 80215F84 00212EC4  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 80215F88 00212EC8  38 00 00 00 */	li r0, 0
/* 80215F8C 00212ECC  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80215F90 00212ED0  38 81 01 5C */	addi r4, r1, 0x15c
/* 80215F94 00212ED4  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80215F98 00212ED8  90 61 01 5C */	stw r3, 0x15c(r1)
/* 80215F9C 00212EDC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215FA0 00212EE0  90 C1 01 60 */	stw r6, 0x160(r1)
/* 80215FA4 00212EE4  90 A1 01 68 */	stw r5, 0x168(r1)
/* 80215FA8 00212EE8  D0 01 01 74 */	stfs f0, 0x174(r1)
/* 80215FAC 00212EEC  D0 01 01 78 */	stfs f0, 0x178(r1)
/* 80215FB0 00212EF0  D0 01 01 7C */	stfs f0, 0x17c(r1)
/* 80215FB4 00212EF4  D0 01 01 80 */	stfs f0, 0x180(r1)
/* 80215FB8 00212EF8  90 01 01 84 */	stw r0, 0x184(r1)
/* 80215FBC 00212EFC  90 01 01 6C */	stw r0, 0x16c(r1)
/* 80215FC0 00212F00  90 01 01 64 */	stw r0, 0x164(r1)
/* 80215FC4 00212F04  90 01 01 88 */	stw r0, 0x188(r1)
/* 80215FC8 00212F08  90 01 01 70 */	stw r0, 0x170(r1)
/* 80215FCC 00212F0C  90 01 01 8C */	stw r0, 0x18c(r1)
/* 80215FD0 00212F10  48 21 6A 01 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215FD4 00212F14  48 00 12 74 */	b .L_80217248
.L_80215FD8:
/* 80215FD8 00212F18  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215FDC 00212F1C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215FE0 00212F20  60 00 00 02 */	ori r0, r0, 2
/* 80215FE4 00212F24  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80215FE8 00212F28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215FEC 00212F2C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80215FF0 00212F30  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80215FF4 00212F34  28 00 00 00 */	cmplwi r0, 0
/* 80215FF8 00212F38  41 82 00 64 */	beq .L_8021605C
/* 80215FFC 00212F3C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216000 00212F40  28 00 00 00 */	cmplwi r0, 0
/* 80216004 00212F44  40 82 00 18 */	bne .L_8021601C
/* 80216008 00212F48  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 8021600C 00212F4C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216010 00212F50  38 80 01 D3 */	li r4, 0x1d3
/* 80216014 00212F54  4C C6 31 82 */	crclr 6
/* 80216018 00212F58  4B E1 46 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021601C:
/* 8021601C 00212F5C  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216020 00212F60  80 19 00 04 */	lwz r0, 4(r25)
/* 80216024 00212F64  28 00 00 00 */	cmplwi r0, 0
/* 80216028 00212F68  40 82 00 18 */	bne .L_80216040
/* 8021602C 00212F6C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216030 00212F70  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216034 00212F74  38 80 00 C7 */	li r4, 0xc7
/* 80216038 00212F78  4C C6 31 82 */	crclr 6
/* 8021603C 00212F7C  4B E1 46 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216040:
/* 80216040 00212F80  80 79 00 04 */	lwz r3, 4(r25)
/* 80216044 00212F84  80 63 00 04 */	lwz r3, 4(r3)
/* 80216048 00212F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8021604C 00212F8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216050 00212F90  7D 89 03 A6 */	mtctr r12
/* 80216054 00212F94  4E 80 04 21 */	bctrl 
/* 80216058 00212F98  48 00 00 C0 */	b .L_80216118
.L_8021605C:
/* 8021605C 00212F9C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216060 00212FA0  28 00 00 00 */	cmplwi r0, 0
/* 80216064 00212FA4  40 82 00 18 */	bne .L_8021607C
/* 80216068 00212FA8  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 8021606C 00212FAC  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216070 00212FB0  38 80 01 D3 */	li r4, 0x1d3
/* 80216074 00212FB4  4C C6 31 82 */	crclr 6
/* 80216078 00212FB8  4B E1 45 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021607C:
/* 8021607C 00212FBC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216080 00212FC0  80 19 00 04 */	lwz r0, 4(r25)
/* 80216084 00212FC4  28 00 00 00 */	cmplwi r0, 0
/* 80216088 00212FC8  40 82 00 18 */	bne .L_802160A0
/* 8021608C 00212FCC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216090 00212FD0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216094 00212FD4  38 80 00 C7 */	li r4, 0xc7
/* 80216098 00212FD8  4C C6 31 82 */	crclr 6
/* 8021609C 00212FDC  4B E1 45 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802160A0:
/* 802160A0 00212FE0  80 79 00 04 */	lwz r3, 4(r25)
/* 802160A4 00212FE4  80 63 00 04 */	lwz r3, 4(r3)
/* 802160A8 00212FE8  81 83 00 00 */	lwz r12, 0(r3)
/* 802160AC 00212FEC  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 802160B0 00212FF0  7D 89 03 A6 */	mtctr r12
/* 802160B4 00212FF4  4E 80 04 21 */	bctrl 
/* 802160B8 00212FF8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802160BC 00212FFC  28 00 00 00 */	cmplwi r0, 0
/* 802160C0 00213000  40 82 00 18 */	bne .L_802160D8
/* 802160C4 00213004  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 802160C8 00213008  38 BE 00 94 */	addi r5, r30, 0x94
/* 802160CC 0021300C  38 80 01 D3 */	li r4, 0x1d3
/* 802160D0 00213010  4C C6 31 82 */	crclr 6
/* 802160D4 00213014  4B E1 45 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802160D8:
/* 802160D8 00213018  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802160DC 0021301C  80 19 00 04 */	lwz r0, 4(r25)
/* 802160E0 00213020  28 00 00 00 */	cmplwi r0, 0
/* 802160E4 00213024  40 82 00 18 */	bne .L_802160FC
/* 802160E8 00213028  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802160EC 0021302C  38 BE 00 94 */	addi r5, r30, 0x94
/* 802160F0 00213030  38 80 00 C7 */	li r4, 0xc7
/* 802160F4 00213034  4C C6 31 82 */	crclr 6
/* 802160F8 00213038  4B E1 45 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802160FC:
/* 802160FC 0021303C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216100 00213040  80 63 00 04 */	lwz r3, 4(r3)
/* 80216104 00213044  81 83 00 00 */	lwz r12, 0(r3)
/* 80216108 00213048  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8021610C 0021304C  7D 89 03 A6 */	mtctr r12
/* 80216110 00213050  4E 80 04 21 */	bctrl 
/* 80216114 00213054  48 12 AB 99 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80216118:
/* 80216118 00213058  7F 43 D3 78 */	mr r3, r26
/* 8021611C 0021305C  7F 64 DB 78 */	mr r4, r27
/* 80216120 00213060  4B FF DD 3D */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 80216124 00213064  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216128 00213068  40 82 11 20 */	bne .L_80217248
/* 8021612C 0021306C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80216130 00213070  39 80 00 00 */	li r12, 0
/* 80216134 00213074  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216138 00213078  39 00 00 01 */	li r8, 1
/* 8021613C 0021307C  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80216140 00213080  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80216144 00213084  38 C0 00 0A */	li r6, 0xa
/* 80216148 00213088  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 8021614C 0021308C  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216150 00213090  38 E0 00 02 */	li r7, 2
/* 80216154 00213094  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216158 00213098  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8021615C 0021309C  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80216160 002130A0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80216164 002130A4  39 40 04 D2 */	li r10, 0x4d2
/* 80216168 002130A8  39 20 00 32 */	li r9, 0x32
/* 8021616C 002130AC  93 41 04 4C */	stw r26, 0x44c(r1)
/* 80216170 002130B0  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80216174 002130B4  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80216178 002130B8  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 8021617C 002130BC  93 41 04 B4 */	stw r26, 0x4b4(r1)
/* 80216180 002130C0  38 81 04 4C */	addi r4, r1, 0x44c
/* 80216184 002130C4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216188 002130C8  93 41 04 C4 */	stw r26, 0x4c4(r1)
/* 8021618C 002130CC  91 81 04 50 */	stw r12, 0x450(r1)
/* 80216190 002130D0  91 61 04 4C */	stw r11, 0x44c(r1)
/* 80216194 002130D4  D0 81 04 54 */	stfs f4, 0x454(r1)
/* 80216198 002130D8  91 81 04 58 */	stw r12, 0x458(r1)
/* 8021619C 002130DC  91 81 04 60 */	stw r12, 0x460(r1)
/* 802161A0 002130E0  91 41 04 5C */	stw r10, 0x45c(r1)
/* 802161A4 002130E4  91 21 04 64 */	stw r9, 0x464(r1)
/* 802161A8 002130E8  99 81 04 68 */	stb r12, 0x468(r1)
/* 802161AC 002130EC  91 81 04 6C */	stw r12, 0x46c(r1)
/* 802161B0 002130F0  D0 61 04 70 */	stfs f3, 0x470(r1)
/* 802161B4 002130F4  91 01 04 74 */	stw r8, 0x474(r1)
/* 802161B8 002130F8  90 E1 04 78 */	stw r7, 0x478(r1)
/* 802161BC 002130FC  90 C1 04 7C */	stw r6, 0x47c(r1)
/* 802161C0 00213100  90 C1 04 80 */	stw r6, 0x480(r1)
/* 802161C4 00213104  99 01 04 84 */	stb r8, 0x484(r1)
/* 802161C8 00213108  D0 61 04 88 */	stfs f3, 0x488(r1)
/* 802161CC 0021310C  91 01 04 8C */	stw r8, 0x48c(r1)
/* 802161D0 00213110  90 E1 04 90 */	stw r7, 0x490(r1)
/* 802161D4 00213114  90 C1 04 94 */	stw r6, 0x494(r1)
/* 802161D8 00213118  90 C1 04 98 */	stw r6, 0x498(r1)
/* 802161DC 0021311C  99 01 04 9C */	stb r8, 0x49c(r1)
/* 802161E0 00213120  91 81 04 B8 */	stw r12, 0x4b8(r1)
/* 802161E4 00213124  90 A1 04 B4 */	stw r5, 0x4b4(r1)
/* 802161E8 00213128  D0 41 04 C0 */	stfs f2, 0x4c0(r1)
/* 802161EC 0021312C  D0 41 04 BC */	stfs f2, 0x4bc(r1)
/* 802161F0 00213130  91 81 04 C8 */	stw r12, 0x4c8(r1)
/* 802161F4 00213134  90 01 04 C4 */	stw r0, 0x4c4(r1)
/* 802161F8 00213138  D0 21 04 D0 */	stfs f1, 0x4d0(r1)
/* 802161FC 0021313C  D0 21 04 CC */	stfs f1, 0x4cc(r1)
/* 80216200 00213140  99 81 04 AA */	stb r12, 0x4aa(r1)
/* 80216204 00213144  D0 01 04 A0 */	stfs f0, 0x4a0(r1)
/* 80216208 00213148  99 81 04 A8 */	stb r12, 0x4a8(r1)
/* 8021620C 0021314C  99 01 04 A9 */	stb r8, 0x4a9(r1)
/* 80216210 00213150  91 01 04 A4 */	stw r8, 0x4a4(r1)
/* 80216214 00213154  99 81 04 AB */	stb r12, 0x4ab(r1)
/* 80216218 00213158  99 81 04 AC */	stb r12, 0x4ac(r1)
/* 8021621C 0021315C  99 81 04 AD */	stb r12, 0x4ad(r1)
/* 80216220 00213160  99 81 04 AE */	stb r12, 0x4ae(r1)
/* 80216224 00213164  99 81 04 AF */	stb r12, 0x4af(r1)
/* 80216228 00213168  99 81 04 B0 */	stb r12, 0x4b0(r1)
/* 8021622C 0021316C  48 1E 5E DD */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 80216230 00213170  48 00 10 18 */	b .L_80217248
.L_80216234:
/* 80216234 00213174  7F 83 E3 78 */	mr r3, r28
/* 80216238 00213178  38 9E 00 B0 */	addi r4, r30, 0xb0
/* 8021623C 0021317C  48 21 B6 91 */	bl is__Q24Game11MovieConfigFPc
/* 80216240 00213180  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216244 00213184  40 82 00 40 */	bne .L_80216284
/* 80216248 00213188  7F 83 E3 78 */	mr r3, r28
/* 8021624C 0021318C  38 9E 00 2C */	addi r4, r30, 0x2c
/* 80216250 00213190  48 21 B6 7D */	bl is__Q24Game11MovieConfigFPc
/* 80216254 00213194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216258 00213198  40 82 00 2C */	bne .L_80216284
/* 8021625C 0021319C  7F 83 E3 78 */	mr r3, r28
/* 80216260 002131A0  38 9E 00 40 */	addi r4, r30, 0x40
/* 80216264 002131A4  48 21 B6 69 */	bl is__Q24Game11MovieConfigFPc
/* 80216268 002131A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021626C 002131AC  40 82 00 18 */	bne .L_80216284
/* 80216270 002131B0  7F 83 E3 78 */	mr r3, r28
/* 80216274 002131B4  38 9E 00 58 */	addi r4, r30, 0x58
/* 80216278 002131B8  48 21 B6 55 */	bl is__Q24Game11MovieConfigFPc
/* 8021627C 002131BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216280 002131C0  41 82 03 6C */	beq .L_802165EC
.L_80216284:
/* 80216284 002131C4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216288 002131C8  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8021628C 002131CC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80216290 002131D0  41 82 00 8C */	beq .L_8021631C
/* 80216294 002131D4  38 80 00 16 */	li r4, 0x16
/* 80216298 002131D8  4B FD 11 49 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8021629C 002131DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802162A0 002131E0  40 82 00 7C */	bne .L_8021631C
/* 802162A4 002131E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802162A8 002131E8  38 80 00 16 */	li r4, 0x16
/* 802162AC 002131EC  4B FD 10 F9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 802162B0 002131F0  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 802162B4 002131F4  38 7E 02 98 */	addi r3, r30, 0x298
/* 802162B8 002131F8  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 802162BC 002131FC  38 00 00 00 */	li r0, 0
/* 802162C0 00213200  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802162C4 00213204  38 81 01 28 */	addi r4, r1, 0x128
/* 802162C8 00213208  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802162CC 0021320C  90 61 01 28 */	stw r3, 0x128(r1)
/* 802162D0 00213210  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802162D4 00213214  90 C1 01 2C */	stw r6, 0x12c(r1)
/* 802162D8 00213218  90 A1 01 34 */	stw r5, 0x134(r1)
/* 802162DC 0021321C  D0 01 01 40 */	stfs f0, 0x140(r1)
/* 802162E0 00213220  D0 01 01 44 */	stfs f0, 0x144(r1)
/* 802162E4 00213224  D0 01 01 48 */	stfs f0, 0x148(r1)
/* 802162E8 00213228  D0 01 01 4C */	stfs f0, 0x14c(r1)
/* 802162EC 0021322C  90 01 01 50 */	stw r0, 0x150(r1)
/* 802162F0 00213230  90 01 01 38 */	stw r0, 0x138(r1)
/* 802162F4 00213234  90 01 01 30 */	stw r0, 0x130(r1)
/* 802162F8 00213238  90 01 01 54 */	stw r0, 0x154(r1)
/* 802162FC 0021323C  90 01 01 3C */	stw r0, 0x13c(r1)
/* 80216300 00213240  90 01 01 58 */	stw r0, 0x158(r1)
/* 80216304 00213244  80 1B 00 CC */	lwz r0, 0xec(r27)
/* 80216308 00213248  90 01 01 38 */	stw r0, 0x138(r1)
/* 8021630C 0021324C  48 21 66 C5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216310 00213250  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216314 00213254  48 1E 75 81 */	bl close_CourseName__Q26Screen9Game2DMgrFv
/* 80216318 00213258  48 00 0F 30 */	b .L_80217248
.L_8021631C:
/* 8021631C 0021325C  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 80216320 00213260  28 00 00 00 */	cmplwi r0, 0
/* 80216324 00213264  41 82 00 60 */	beq .L_80216384
/* 80216328 00213268  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 8021632C 0021326C  38 7E 02 70 */	addi r3, r30, 0x270
/* 80216330 00213270  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 80216334 00213274  38 00 00 00 */	li r0, 0
/* 80216338 00213278  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 8021633C 0021327C  38 81 00 F4 */	addi r4, r1, 0xf4
/* 80216340 00213280  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80216344 00213284  90 61 00 F4 */	stw r3, 0xf4(r1)
/* 80216348 00213288  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021634C 0021328C  90 C1 00 F8 */	stw r6, 0xf8(r1)
/* 80216350 00213290  90 A1 01 00 */	stw r5, 0x100(r1)
/* 80216354 00213294  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 80216358 00213298  D0 01 01 10 */	stfs f0, 0x110(r1)
/* 8021635C 0021329C  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 80216360 002132A0  D0 01 01 18 */	stfs f0, 0x118(r1)
/* 80216364 002132A4  90 01 01 1C */	stw r0, 0x11c(r1)
/* 80216368 002132A8  90 01 01 04 */	stw r0, 0x104(r1)
/* 8021636C 002132AC  90 01 00 FC */	stw r0, 0xfc(r1)
/* 80216370 002132B0  90 01 01 20 */	stw r0, 0x120(r1)
/* 80216374 002132B4  90 01 01 08 */	stw r0, 0x108(r1)
/* 80216378 002132B8  90 01 01 24 */	stw r0, 0x124(r1)
/* 8021637C 002132BC  48 21 66 55 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216380 002132C0  48 00 0E C8 */	b .L_80217248
.L_80216384:
/* 80216384 002132C4  7F 43 D3 78 */	mr r3, r26
/* 80216388 002132C8  7F 64 DB 78 */	mr r4, r27
/* 8021638C 002132CC  4B FF DA D1 */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 80216390 002132D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216394 002132D4  41 82 00 10 */	beq .L_802163A4
/* 80216398 002132D8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021639C 002132DC  48 1E 74 F9 */	bl close_CourseName__Q26Screen9Game2DMgrFv
/* 802163A0 002132E0  48 00 0E A8 */	b .L_80217248
.L_802163A4:
/* 802163A4 002132E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802163A8 002132E8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802163AC 002132EC  60 00 00 02 */	ori r0, r0, 2
/* 802163B0 002132F0  98 03 00 3C */	stb r0, 0x3c(r3)
/* 802163B4 002132F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802163B8 002132F8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 802163BC 002132FC  80 03 02 18 */	lwz r0, 0x218(r3)
/* 802163C0 00213300  28 00 00 00 */	cmplwi r0, 0
/* 802163C4 00213304  41 82 00 64 */	beq .L_80216428
/* 802163C8 00213308  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802163CC 0021330C  28 00 00 00 */	cmplwi r0, 0
/* 802163D0 00213310  40 82 00 18 */	bne .L_802163E8
/* 802163D4 00213314  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 802163D8 00213318  38 BE 00 94 */	addi r5, r30, 0x94
/* 802163DC 0021331C  38 80 01 D3 */	li r4, 0x1d3
/* 802163E0 00213320  4C C6 31 82 */	crclr 6
/* 802163E4 00213324  4B E1 42 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802163E8:
/* 802163E8 00213328  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802163EC 0021332C  80 19 00 04 */	lwz r0, 4(r25)
/* 802163F0 00213330  28 00 00 00 */	cmplwi r0, 0
/* 802163F4 00213334  40 82 00 18 */	bne .L_8021640C
/* 802163F8 00213338  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802163FC 0021333C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216400 00213340  38 80 00 C7 */	li r4, 0xc7
/* 80216404 00213344  4C C6 31 82 */	crclr 6
/* 80216408 00213348  4B E1 42 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021640C:
/* 8021640C 0021334C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216410 00213350  80 63 00 04 */	lwz r3, 4(r3)
/* 80216414 00213354  81 83 00 00 */	lwz r12, 0(r3)
/* 80216418 00213358  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8021641C 0021335C  7D 89 03 A6 */	mtctr r12
/* 80216420 00213360  4E 80 04 21 */	bctrl 
/* 80216424 00213364  48 00 00 C0 */	b .L_802164E4
.L_80216428:
/* 80216428 00213368  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8021642C 0021336C  28 00 00 00 */	cmplwi r0, 0
/* 80216430 00213370  40 82 00 18 */	bne .L_80216448
/* 80216434 00213374  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216438 00213378  38 BE 00 94 */	addi r5, r30, 0x94
/* 8021643C 0021337C  38 80 01 D3 */	li r4, 0x1d3
/* 80216440 00213380  4C C6 31 82 */	crclr 6
/* 80216444 00213384  4B E1 41 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216448:
/* 80216448 00213388  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 8021644C 0021338C  80 19 00 04 */	lwz r0, 4(r25)
/* 80216450 00213390  28 00 00 00 */	cmplwi r0, 0
/* 80216454 00213394  40 82 00 18 */	bne .L_8021646C
/* 80216458 00213398  38 7E 00 FC */	addi r3, r30, 0xfc
/* 8021645C 0021339C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216460 002133A0  38 80 00 C7 */	li r4, 0xc7
/* 80216464 002133A4  4C C6 31 82 */	crclr 6
/* 80216468 002133A8  4B E1 41 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021646C:
/* 8021646C 002133AC  80 79 00 04 */	lwz r3, 4(r25)
/* 80216470 002133B0  80 63 00 04 */	lwz r3, 4(r3)
/* 80216474 002133B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80216478 002133B8  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8021647C 002133BC  7D 89 03 A6 */	mtctr r12
/* 80216480 002133C0  4E 80 04 21 */	bctrl 
/* 80216484 002133C4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216488 002133C8  28 00 00 00 */	cmplwi r0, 0
/* 8021648C 002133CC  40 82 00 18 */	bne .L_802164A4
/* 80216490 002133D0  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216494 002133D4  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216498 002133D8  38 80 01 D3 */	li r4, 0x1d3
/* 8021649C 002133DC  4C C6 31 82 */	crclr 6
/* 802164A0 002133E0  4B E1 41 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802164A4:
/* 802164A4 002133E4  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802164A8 002133E8  80 19 00 04 */	lwz r0, 4(r25)
/* 802164AC 002133EC  28 00 00 00 */	cmplwi r0, 0
/* 802164B0 002133F0  40 82 00 18 */	bne .L_802164C8
/* 802164B4 002133F4  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802164B8 002133F8  38 BE 00 94 */	addi r5, r30, 0x94
/* 802164BC 002133FC  38 80 00 C7 */	li r4, 0xc7
/* 802164C0 00213400  4C C6 31 82 */	crclr 6
/* 802164C4 00213404  4B E1 41 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802164C8:
/* 802164C8 00213408  80 79 00 04 */	lwz r3, 4(r25)
/* 802164CC 0021340C  80 63 00 04 */	lwz r3, 4(r3)
/* 802164D0 00213410  81 83 00 00 */	lwz r12, 0(r3)
/* 802164D4 00213414  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802164D8 00213418  7D 89 03 A6 */	mtctr r12
/* 802164DC 0021341C  4E 80 04 21 */	bctrl 
/* 802164E0 00213420  48 12 A7 CD */	bl on__Q28PSSystem8EnvSeMgrFv
.L_802164E4:
/* 802164E4 00213424  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 802164E8 00213428  39 80 00 00 */	li r12, 0
/* 802164EC 0021342C  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 802164F0 00213430  39 00 00 01 */	li r8, 1
/* 802164F4 00213434  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 802164F8 00213438  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 802164FC 0021343C  38 C0 00 0A */	li r6, 0xa
/* 80216500 00213440  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80216504 00213444  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216508 00213448  38 E0 00 02 */	li r7, 2
/* 8021650C 0021344C  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216510 00213450  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80216514 00213454  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80216518 00213458  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 8021651C 0021345C  39 40 04 D2 */	li r10, 0x4d2
/* 80216520 00213460  39 20 00 32 */	li r9, 0x32
/* 80216524 00213464  93 41 03 C4 */	stw r26, 0x3c4(r1)
/* 80216528 00213468  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 8021652C 0021346C  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80216530 00213470  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80216534 00213474  93 41 04 2C */	stw r26, 0x42c(r1)
/* 80216538 00213478  38 81 03 C4 */	addi r4, r1, 0x3c4
/* 8021653C 0021347C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216540 00213480  93 41 04 3C */	stw r26, 0x43c(r1)
/* 80216544 00213484  91 81 03 C8 */	stw r12, 0x3c8(r1)
/* 80216548 00213488  91 61 03 C4 */	stw r11, 0x3c4(r1)
/* 8021654C 0021348C  D0 81 03 CC */	stfs f4, 0x3cc(r1)
/* 80216550 00213490  91 81 03 D0 */	stw r12, 0x3d0(r1)
/* 80216554 00213494  91 81 03 D8 */	stw r12, 0x3d8(r1)
/* 80216558 00213498  91 41 03 D4 */	stw r10, 0x3d4(r1)
/* 8021655C 0021349C  91 21 03 DC */	stw r9, 0x3dc(r1)
/* 80216560 002134A0  99 81 03 E0 */	stb r12, 0x3e0(r1)
/* 80216564 002134A4  91 81 03 E4 */	stw r12, 0x3e4(r1)
/* 80216568 002134A8  D0 61 03 E8 */	stfs f3, 0x3e8(r1)
/* 8021656C 002134AC  91 01 03 EC */	stw r8, 0x3ec(r1)
/* 80216570 002134B0  90 E1 03 F0 */	stw r7, 0x3f0(r1)
/* 80216574 002134B4  90 C1 03 F4 */	stw r6, 0x3f4(r1)
/* 80216578 002134B8  90 C1 03 F8 */	stw r6, 0x3f8(r1)
/* 8021657C 002134BC  99 01 03 FC */	stb r8, 0x3fc(r1)
/* 80216580 002134C0  D0 61 04 00 */	stfs f3, 0x400(r1)
/* 80216584 002134C4  91 01 04 04 */	stw r8, 0x404(r1)
/* 80216588 002134C8  90 E1 04 08 */	stw r7, 0x408(r1)
/* 8021658C 002134CC  90 C1 04 0C */	stw r6, 0x40c(r1)
/* 80216590 002134D0  90 C1 04 10 */	stw r6, 0x410(r1)
/* 80216594 002134D4  99 01 04 14 */	stb r8, 0x414(r1)
/* 80216598 002134D8  91 81 04 30 */	stw r12, 0x430(r1)
/* 8021659C 002134DC  90 A1 04 2C */	stw r5, 0x42c(r1)
/* 802165A0 002134E0  D0 41 04 38 */	stfs f2, 0x438(r1)
/* 802165A4 002134E4  D0 41 04 34 */	stfs f2, 0x434(r1)
/* 802165A8 002134E8  91 81 04 40 */	stw r12, 0x440(r1)
/* 802165AC 002134EC  90 01 04 3C */	stw r0, 0x43c(r1)
/* 802165B0 002134F0  D0 21 04 48 */	stfs f1, 0x448(r1)
/* 802165B4 002134F4  D0 21 04 44 */	stfs f1, 0x444(r1)
/* 802165B8 002134F8  99 81 04 22 */	stb r12, 0x422(r1)
/* 802165BC 002134FC  D0 01 04 18 */	stfs f0, 0x418(r1)
/* 802165C0 00213500  99 81 04 20 */	stb r12, 0x420(r1)
/* 802165C4 00213504  99 01 04 21 */	stb r8, 0x421(r1)
/* 802165C8 00213508  91 01 04 1C */	stw r8, 0x41c(r1)
/* 802165CC 0021350C  99 81 04 23 */	stb r12, 0x423(r1)
/* 802165D0 00213510  99 81 04 24 */	stb r12, 0x424(r1)
/* 802165D4 00213514  99 81 04 25 */	stb r12, 0x425(r1)
/* 802165D8 00213518  99 81 04 26 */	stb r12, 0x426(r1)
/* 802165DC 0021351C  99 81 04 27 */	stb r12, 0x427(r1)
/* 802165E0 00213520  99 81 04 28 */	stb r12, 0x428(r1)
/* 802165E4 00213524  48 1E 5B 25 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 802165E8 00213528  48 00 0C 60 */	b .L_80217248
.L_802165EC:
/* 802165EC 0021352C  7F 83 E3 78 */	mr r3, r28
/* 802165F0 00213530  38 9E 02 1C */	addi r4, r30, 0x21c
/* 802165F4 00213534  48 21 B2 D9 */	bl is__Q24Game11MovieConfigFPc
/* 802165F8 00213538  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802165FC 0021353C  41 82 00 54 */	beq .L_80216650
/* 80216600 00213540  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80216604 00213544  48 21 69 85 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 80216608 00213548  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8021660C 0021354C  38 80 00 00 */	li r4, 0
/* 80216610 00213550  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216614 00213554  3C 60 80 4C */	lis r3, __vt__Q32og6Screen14DispMemberSave@ha
/* 80216618 00213558  90 01 00 40 */	stw r0, 0x40(r1)
/* 8021661C 0021355C  38 63 04 E4 */	addi r3, r3, __vt__Q32og6Screen14DispMemberSave@l
/* 80216620 00213560  38 00 00 01 */	li r0, 1
/* 80216624 00213564  98 81 00 48 */	stb r4, 0x48(r1)
/* 80216628 00213568  90 81 00 44 */	stw r4, 0x44(r1)
/* 8021662C 0021356C  90 61 00 40 */	stw r3, 0x40(r1)
/* 80216630 00213570  98 01 00 48 */	stb r0, 0x48(r1)
/* 80216634 00213574  48 25 0E 05 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 80216638 00213578  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021663C 0021357C  38 81 00 40 */	addi r4, r1, 0x40
/* 80216640 00213580  48 1E 80 65 */	bl open_Save__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberSave
/* 80216644 00213584  38 00 00 01 */	li r0, 1
/* 80216648 00213588  98 1A 00 20 */	stb r0, 0x20(r26)
/* 8021664C 0021358C  48 00 0B FC */	b .L_80217248
.L_80216650:
/* 80216650 00213590  7F 83 E3 78 */	mr r3, r28
/* 80216654 00213594  38 9E 02 70 */	addi r4, r30, 0x270
/* 80216658 00213598  48 21 B2 75 */	bl is__Q24Game11MovieConfigFPc
/* 8021665C 0021359C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216660 002135A0  41 82 02 50 */	beq .L_802168B0
/* 80216664 002135A4  3B 60 00 00 */	li r27, 0
/* 80216668 002135A8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8021666C 002135AC  9B 7A 00 10 */	stb r27, 0x10(r26)
/* 80216670 002135B0  39 00 00 01 */	li r8, 1
/* 80216674 002135B4  39 83 11 48 */	addi r12, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216678 002135B8  38 C0 00 0A */	li r6, 0xa
/* 8021667C 002135BC  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80216680 002135C0  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80216684 002135C4  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80216688 002135C8  38 E0 00 02 */	li r7, 2
/* 8021668C 002135CC  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216690 002135D0  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80216694 002135D4  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216698 002135D8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 8021669C 002135DC  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 802166A0 002135E0  39 40 04 D2 */	li r10, 0x4d2
/* 802166A4 002135E4  39 20 00 32 */	li r9, 0x32
/* 802166A8 002135E8  91 81 03 3C */	stw r12, 0x33c(r1)
/* 802166AC 002135EC  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 802166B0 002135F0  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 802166B4 002135F4  91 81 03 A4 */	stw r12, 0x3a4(r1)
/* 802166B8 002135F8  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 802166BC 002135FC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802166C0 00213600  38 81 03 3C */	addi r4, r1, 0x33c
/* 802166C4 00213604  91 81 03 B4 */	stw r12, 0x3b4(r1)
/* 802166C8 00213608  93 61 03 40 */	stw r27, 0x340(r1)
/* 802166CC 0021360C  91 61 03 3C */	stw r11, 0x33c(r1)
/* 802166D0 00213610  D0 81 03 44 */	stfs f4, 0x344(r1)
/* 802166D4 00213614  93 61 03 48 */	stw r27, 0x348(r1)
/* 802166D8 00213618  93 61 03 50 */	stw r27, 0x350(r1)
/* 802166DC 0021361C  91 41 03 4C */	stw r10, 0x34c(r1)
/* 802166E0 00213620  91 21 03 54 */	stw r9, 0x354(r1)
/* 802166E4 00213624  9B 61 03 58 */	stb r27, 0x358(r1)
/* 802166E8 00213628  93 61 03 5C */	stw r27, 0x35c(r1)
/* 802166EC 0021362C  D0 61 03 60 */	stfs f3, 0x360(r1)
/* 802166F0 00213630  91 01 03 64 */	stw r8, 0x364(r1)
/* 802166F4 00213634  90 E1 03 68 */	stw r7, 0x368(r1)
/* 802166F8 00213638  90 C1 03 6C */	stw r6, 0x36c(r1)
/* 802166FC 0021363C  90 C1 03 70 */	stw r6, 0x370(r1)
/* 80216700 00213640  99 01 03 74 */	stb r8, 0x374(r1)
/* 80216704 00213644  D0 61 03 78 */	stfs f3, 0x378(r1)
/* 80216708 00213648  91 01 03 7C */	stw r8, 0x37c(r1)
/* 8021670C 0021364C  90 E1 03 80 */	stw r7, 0x380(r1)
/* 80216710 00213650  90 C1 03 84 */	stw r6, 0x384(r1)
/* 80216714 00213654  90 C1 03 88 */	stw r6, 0x388(r1)
/* 80216718 00213658  99 01 03 8C */	stb r8, 0x38c(r1)
/* 8021671C 0021365C  93 61 03 A8 */	stw r27, 0x3a8(r1)
/* 80216720 00213660  90 A1 03 A4 */	stw r5, 0x3a4(r1)
/* 80216724 00213664  D0 41 03 B0 */	stfs f2, 0x3b0(r1)
/* 80216728 00213668  D0 41 03 AC */	stfs f2, 0x3ac(r1)
/* 8021672C 0021366C  93 61 03 B8 */	stw r27, 0x3b8(r1)
/* 80216730 00213670  90 01 03 B4 */	stw r0, 0x3b4(r1)
/* 80216734 00213674  D0 21 03 C0 */	stfs f1, 0x3c0(r1)
/* 80216738 00213678  D0 21 03 BC */	stfs f1, 0x3bc(r1)
/* 8021673C 0021367C  9B 61 03 9A */	stb r27, 0x39a(r1)
/* 80216740 00213680  D0 01 03 90 */	stfs f0, 0x390(r1)
/* 80216744 00213684  9B 61 03 98 */	stb r27, 0x398(r1)
/* 80216748 00213688  99 01 03 99 */	stb r8, 0x399(r1)
/* 8021674C 0021368C  91 01 03 94 */	stw r8, 0x394(r1)
/* 80216750 00213690  9B 61 03 9B */	stb r27, 0x39b(r1)
/* 80216754 00213694  9B 61 03 9C */	stb r27, 0x39c(r1)
/* 80216758 00213698  9B 61 03 9D */	stb r27, 0x39d(r1)
/* 8021675C 0021369C  9B 61 03 9E */	stb r27, 0x39e(r1)
/* 80216760 002136A0  9B 61 03 9F */	stb r27, 0x39f(r1)
/* 80216764 002136A4  9B 61 03 A0 */	stb r27, 0x3a0(r1)
/* 80216768 002136A8  48 1E 59 A1 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 8021676C 002136AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216770 002136B0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80216774 002136B4  60 00 00 02 */	ori r0, r0, 2
/* 80216778 002136B8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8021677C 002136BC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216780 002136C0  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80216784 002136C4  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80216788 002136C8  28 00 00 00 */	cmplwi r0, 0
/* 8021678C 002136CC  41 82 00 64 */	beq .L_802167F0
/* 80216790 002136D0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216794 002136D4  28 00 00 00 */	cmplwi r0, 0
/* 80216798 002136D8  40 82 00 18 */	bne .L_802167B0
/* 8021679C 002136DC  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 802167A0 002136E0  38 BE 00 94 */	addi r5, r30, 0x94
/* 802167A4 002136E4  38 80 01 D3 */	li r4, 0x1d3
/* 802167A8 002136E8  4C C6 31 82 */	crclr 6
/* 802167AC 002136EC  4B E1 3E 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802167B0:
/* 802167B0 002136F0  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802167B4 002136F4  80 19 00 04 */	lwz r0, 4(r25)
/* 802167B8 002136F8  28 00 00 00 */	cmplwi r0, 0
/* 802167BC 002136FC  40 82 00 18 */	bne .L_802167D4
/* 802167C0 00213700  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802167C4 00213704  38 BE 00 94 */	addi r5, r30, 0x94
/* 802167C8 00213708  38 80 00 C7 */	li r4, 0xc7
/* 802167CC 0021370C  4C C6 31 82 */	crclr 6
/* 802167D0 00213710  4B E1 3E 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802167D4:
/* 802167D4 00213714  80 79 00 04 */	lwz r3, 4(r25)
/* 802167D8 00213718  80 63 00 04 */	lwz r3, 4(r3)
/* 802167DC 0021371C  81 83 00 00 */	lwz r12, 0(r3)
/* 802167E0 00213720  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802167E4 00213724  7D 89 03 A6 */	mtctr r12
/* 802167E8 00213728  4E 80 04 21 */	bctrl 
/* 802167EC 0021372C  48 00 0A 5C */	b .L_80217248
.L_802167F0:
/* 802167F0 00213730  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802167F4 00213734  28 00 00 00 */	cmplwi r0, 0
/* 802167F8 00213738  40 82 00 18 */	bne .L_80216810
/* 802167FC 0021373C  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216800 00213740  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216804 00213744  38 80 01 D3 */	li r4, 0x1d3
/* 80216808 00213748  4C C6 31 82 */	crclr 6
/* 8021680C 0021374C  4B E1 3E 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216810:
/* 80216810 00213750  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216814 00213754  80 19 00 04 */	lwz r0, 4(r25)
/* 80216818 00213758  28 00 00 00 */	cmplwi r0, 0
/* 8021681C 0021375C  40 82 00 18 */	bne .L_80216834
/* 80216820 00213760  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216824 00213764  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216828 00213768  38 80 00 C7 */	li r4, 0xc7
/* 8021682C 0021376C  4C C6 31 82 */	crclr 6
/* 80216830 00213770  4B E1 3E 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216834:
/* 80216834 00213774  80 79 00 04 */	lwz r3, 4(r25)
/* 80216838 00213778  80 63 00 04 */	lwz r3, 4(r3)
/* 8021683C 0021377C  81 83 00 00 */	lwz r12, 0(r3)
/* 80216840 00213780  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80216844 00213784  7D 89 03 A6 */	mtctr r12
/* 80216848 00213788  4E 80 04 21 */	bctrl 
/* 8021684C 0021378C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216850 00213790  28 00 00 00 */	cmplwi r0, 0
/* 80216854 00213794  40 82 00 18 */	bne .L_8021686C
/* 80216858 00213798  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 8021685C 0021379C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216860 002137A0  38 80 01 D3 */	li r4, 0x1d3
/* 80216864 002137A4  4C C6 31 82 */	crclr 6
/* 80216868 002137A8  4B E1 3D D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021686C:
/* 8021686C 002137AC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216870 002137B0  80 19 00 04 */	lwz r0, 4(r25)
/* 80216874 002137B4  28 00 00 00 */	cmplwi r0, 0
/* 80216878 002137B8  40 82 00 18 */	bne .L_80216890
/* 8021687C 002137BC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216880 002137C0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216884 002137C4  38 80 00 C7 */	li r4, 0xc7
/* 80216888 002137C8  4C C6 31 82 */	crclr 6
/* 8021688C 002137CC  4B E1 3D B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216890:
/* 80216890 002137D0  80 79 00 04 */	lwz r3, 4(r25)
/* 80216894 002137D4  80 63 00 04 */	lwz r3, 4(r3)
/* 80216898 002137D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021689C 002137DC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802168A0 002137E0  7D 89 03 A6 */	mtctr r12
/* 802168A4 002137E4  4E 80 04 21 */	bctrl 
/* 802168A8 002137E8  48 12 A4 05 */	bl on__Q28PSSystem8EnvSeMgrFv
/* 802168AC 002137EC  48 00 09 9C */	b .L_80217248
.L_802168B0:
/* 802168B0 002137F0  7F 83 E3 78 */	mr r3, r28
/* 802168B4 002137F4  38 9E 00 C0 */	addi r4, r30, 0xc0
/* 802168B8 002137F8  48 21 B0 15 */	bl is__Q24Game11MovieConfigFPc
/* 802168BC 002137FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802168C0 00213800  41 82 05 FC */	beq .L_80216EBC
/* 802168C4 00213804  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 802168C8 00213808  28 00 00 00 */	cmplwi r0, 0
/* 802168CC 0021380C  41 82 00 60 */	beq .L_8021692C
/* 802168D0 00213810  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 802168D4 00213814  38 7E 02 70 */	addi r3, r30, 0x270
/* 802168D8 00213818  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 802168DC 0021381C  38 00 00 00 */	li r0, 0
/* 802168E0 00213820  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802168E4 00213824  38 81 00 C0 */	addi r4, r1, 0xc0
/* 802168E8 00213828  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802168EC 0021382C  90 61 00 C0 */	stw r3, 0xc0(r1)
/* 802168F0 00213830  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802168F4 00213834  90 C1 00 C4 */	stw r6, 0xc4(r1)
/* 802168F8 00213838  90 A1 00 CC */	stw r5, 0xcc(r1)
/* 802168FC 0021383C  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80216900 00213840  D0 01 00 DC */	stfs f0, 0xdc(r1)
/* 80216904 00213844  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 80216908 00213848  D0 01 00 E4 */	stfs f0, 0xe4(r1)
/* 8021690C 0021384C  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 80216910 00213850  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80216914 00213854  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80216918 00213858  90 01 00 EC */	stw r0, 0xec(r1)
/* 8021691C 0021385C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80216920 00213860  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80216924 00213864  48 21 60 AD */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216928 00213868  48 00 09 20 */	b .L_80217248
.L_8021692C:
/* 8021692C 0021386C  38 00 00 00 */	li r0, 0
/* 80216930 00213870  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80216934 00213874  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80216938 00213878  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8021693C 0021387C  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80216940 00213880  28 00 00 00 */	cmplwi r0, 0
/* 80216944 00213884  90 81 00 30 */	stw r4, 0x30(r1)
/* 80216948 00213888  90 01 00 34 */	stw r0, 0x34(r1)
/* 8021694C 0021388C  90 61 00 38 */	stw r3, 0x38(r1)
/* 80216950 00213890  40 82 00 1C */	bne .L_8021696C
/* 80216954 00213894  81 83 00 00 */	lwz r12, 0(r3)
/* 80216958 00213898  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021695C 0021389C  7D 89 03 A6 */	mtctr r12
/* 80216960 002138A0  4E 80 04 21 */	bctrl 
/* 80216964 002138A4  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216968 002138A8  48 00 01 C0 */	b .L_80216B28
.L_8021696C:
/* 8021696C 002138AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80216970 002138B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80216974 002138B4  7D 89 03 A6 */	mtctr r12
/* 80216978 002138B8  4E 80 04 21 */	bctrl 
/* 8021697C 002138BC  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216980 002138C0  48 00 00 58 */	b .L_802169D8
.L_80216984:
/* 80216984 002138C4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216988 002138C8  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8021698C 002138CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80216990 002138D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80216994 002138D4  7D 89 03 A6 */	mtctr r12
/* 80216998 002138D8  4E 80 04 21 */	bctrl 
/* 8021699C 002138DC  7C 64 1B 78 */	mr r4, r3
/* 802169A0 002138E0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 802169A4 002138E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802169A8 002138E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802169AC 002138EC  7D 89 03 A6 */	mtctr r12
/* 802169B0 002138F0  4E 80 04 21 */	bctrl 
/* 802169B4 002138F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802169B8 002138F8  40 82 01 70 */	bne .L_80216B28
/* 802169BC 002138FC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802169C0 00213900  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802169C4 00213904  81 83 00 00 */	lwz r12, 0(r3)
/* 802169C8 00213908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802169CC 0021390C  7D 89 03 A6 */	mtctr r12
/* 802169D0 00213910  4E 80 04 21 */	bctrl 
/* 802169D4 00213914  90 61 00 34 */	stw r3, 0x34(r1)
.L_802169D8:
/* 802169D8 00213918  81 81 00 30 */	lwz r12, 0x30(r1)
/* 802169DC 0021391C  38 61 00 30 */	addi r3, r1, 0x30
/* 802169E0 00213920  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802169E4 00213924  7D 89 03 A6 */	mtctr r12
/* 802169E8 00213928  4E 80 04 21 */	bctrl 
/* 802169EC 0021392C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802169F0 00213930  41 82 FF 94 */	beq .L_80216984
/* 802169F4 00213934  48 00 01 34 */	b .L_80216B28
.L_802169F8:
/* 802169F8 00213938  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802169FC 0021393C  81 83 00 00 */	lwz r12, 0(r3)
/* 80216A00 00213940  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80216A04 00213944  7D 89 03 A6 */	mtctr r12
/* 80216A08 00213948  4E 80 04 21 */	bctrl 
/* 80216A0C 0021394C  7C 79 1B 78 */	mr r25, r3
/* 80216A10 00213950  38 61 00 18 */	addi r3, r1, 0x18
/* 80216A14 00213954  81 99 00 00 */	lwz r12, 0(r25)
/* 80216A18 00213958  7F 24 CB 78 */	mr r4, r25
/* 80216A1C 0021395C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80216A20 00213960  7D 89 03 A6 */	mtctr r12
/* 80216A24 00213964  4E 80 04 21 */	bctrl 
/* 80216A28 00213968  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80216A2C 0021396C  38 81 00 24 */	addi r4, r1, 0x24
/* 80216A30 00213970  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80216A34 00213974  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80216A38 00213978  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80216A3C 0021397C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80216A40 00213980  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80216A44 00213984  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80216A48 00213988  81 83 00 04 */	lwz r12, 4(r3)
/* 80216A4C 0021398C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80216A50 00213990  7D 89 03 A6 */	mtctr r12
/* 80216A54 00213994  4E 80 04 21 */	bctrl 
/* 80216A58 00213998  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80216A5C 0021399C  7F 23 CB 78 */	mr r3, r25
/* 80216A60 002139A0  38 81 00 24 */	addi r4, r1, 0x24
/* 80216A64 002139A4  38 A0 00 00 */	li r5, 0
/* 80216A68 002139A8  4B F2 47 41 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80216A6C 002139AC  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80216A70 002139B0  28 00 00 00 */	cmplwi r0, 0
/* 80216A74 002139B4  40 82 00 24 */	bne .L_80216A98
/* 80216A78 002139B8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216A7C 002139BC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216A80 002139C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80216A84 002139C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80216A88 002139C8  7D 89 03 A6 */	mtctr r12
/* 80216A8C 002139CC  4E 80 04 21 */	bctrl 
/* 80216A90 002139D0  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216A94 002139D4  48 00 00 94 */	b .L_80216B28
.L_80216A98:
/* 80216A98 002139D8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216A9C 002139DC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216AA0 002139E0  81 83 00 00 */	lwz r12, 0(r3)
/* 80216AA4 002139E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80216AA8 002139E8  7D 89 03 A6 */	mtctr r12
/* 80216AAC 002139EC  4E 80 04 21 */	bctrl 
/* 80216AB0 002139F0  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216AB4 002139F4  48 00 00 58 */	b .L_80216B0C
.L_80216AB8:
/* 80216AB8 002139F8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216ABC 002139FC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216AC0 00213A00  81 83 00 00 */	lwz r12, 0(r3)
/* 80216AC4 00213A04  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80216AC8 00213A08  7D 89 03 A6 */	mtctr r12
/* 80216ACC 00213A0C  4E 80 04 21 */	bctrl 
/* 80216AD0 00213A10  7C 64 1B 78 */	mr r4, r3
/* 80216AD4 00213A14  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80216AD8 00213A18  81 83 00 00 */	lwz r12, 0(r3)
/* 80216ADC 00213A1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80216AE0 00213A20  7D 89 03 A6 */	mtctr r12
/* 80216AE4 00213A24  4E 80 04 21 */	bctrl 
/* 80216AE8 00213A28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216AEC 00213A2C  40 82 00 3C */	bne .L_80216B28
/* 80216AF0 00213A30  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216AF4 00213A34  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216AF8 00213A38  81 83 00 00 */	lwz r12, 0(r3)
/* 80216AFC 00213A3C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80216B00 00213A40  7D 89 03 A6 */	mtctr r12
/* 80216B04 00213A44  4E 80 04 21 */	bctrl 
/* 80216B08 00213A48  90 61 00 34 */	stw r3, 0x34(r1)
.L_80216B0C:
/* 80216B0C 00213A4C  81 81 00 30 */	lwz r12, 0x30(r1)
/* 80216B10 00213A50  38 61 00 30 */	addi r3, r1, 0x30
/* 80216B14 00213A54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80216B18 00213A58  7D 89 03 A6 */	mtctr r12
/* 80216B1C 00213A5C  4E 80 04 21 */	bctrl 
/* 80216B20 00213A60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216B24 00213A64  41 82 FF 94 */	beq .L_80216AB8
.L_80216B28:
/* 80216B28 00213A68  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216B2C 00213A6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80216B30 00213A70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216B34 00213A74  7D 89 03 A6 */	mtctr r12
/* 80216B38 00213A78  4E 80 04 21 */	bctrl 
/* 80216B3C 00213A7C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216B40 00213A80  7C 04 18 40 */	cmplw r4, r3
/* 80216B44 00213A84  40 82 FE B4 */	bne .L_802169F8
/* 80216B48 00213A88  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216B4C 00213A8C  38 80 00 06 */	li r4, 6
/* 80216B50 00213A90  4B FD 08 91 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80216B54 00213A94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216B58 00213A98  40 82 00 74 */	bne .L_80216BCC
/* 80216B5C 00213A9C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216B60 00213AA0  38 80 00 06 */	li r4, 6
/* 80216B64 00213AA4  4B FD 08 41 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80216B68 00213AA8  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 80216B6C 00213AAC  38 7E 02 50 */	addi r3, r30, 0x250
/* 80216B70 00213AB0  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 80216B74 00213AB4  38 00 00 00 */	li r0, 0
/* 80216B78 00213AB8  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80216B7C 00213ABC  38 81 00 8C */	addi r4, r1, 0x8c
/* 80216B80 00213AC0  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80216B84 00213AC4  90 61 00 8C */	stw r3, 0x8c(r1)
/* 80216B88 00213AC8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80216B8C 00213ACC  90 C1 00 90 */	stw r6, 0x90(r1)
/* 80216B90 00213AD0  90 A1 00 98 */	stw r5, 0x98(r1)
/* 80216B94 00213AD4  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 80216B98 00213AD8  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 80216B9C 00213ADC  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 80216BA0 00213AE0  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 80216BA4 00213AE4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80216BA8 00213AE8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80216BAC 00213AEC  90 01 00 94 */	stw r0, 0x94(r1)
/* 80216BB0 00213AF0  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80216BB4 00213AF4  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80216BB8 00213AF8  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80216BBC 00213AFC  80 1B 00 CC */	lwz r0, 0xec(r27)
/* 80216BC0 00213B00  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80216BC4 00213B04  48 21 5E 0D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216BC8 00213B08  48 00 06 80 */	b .L_80217248
.L_80216BCC:
/* 80216BCC 00213B0C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216BD0 00213B10  38 80 00 12 */	li r4, 0x12
/* 80216BD4 00213B14  4B FD 08 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80216BD8 00213B18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216BDC 00213B1C  40 82 00 84 */	bne .L_80216C60
/* 80216BE0 00213B20  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216BE4 00213B24  38 80 00 0A */	li r4, 0xa
/* 80216BE8 00213B28  38 63 00 48 */	addi r3, r3, 0x48
/* 80216BEC 00213B2C  4B FC F3 E5 */	bl hasItem__Q24Game10OlimarDataFi
/* 80216BF0 00213B30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216BF4 00213B34  41 82 00 6C */	beq .L_80216C60
/* 80216BF8 00213B38  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216BFC 00213B3C  38 80 00 12 */	li r4, 0x12
/* 80216C00 00213B40  4B FD 07 A5 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80216C04 00213B44  80 9B 02 2C */	lwz r4, 0x250(r27)
/* 80216C08 00213B48  38 7E 02 64 */	addi r3, r30, 0x264
/* 80216C0C 00213B4C  80 BB 00 C8 */	lwz r5, 0xe8(r27)
/* 80216C10 00213B50  38 00 00 00 */	li r0, 0
/* 80216C14 00213B54  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80216C18 00213B58  38 81 00 58 */	addi r4, r1, 0x58
/* 80216C1C 00213B5C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80216C20 00213B60  90 61 00 58 */	stw r3, 0x58(r1)
/* 80216C24 00213B64  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80216C28 00213B68  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 80216C2C 00213B6C  90 A1 00 64 */	stw r5, 0x64(r1)
/* 80216C30 00213B70  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 80216C34 00213B74  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 80216C38 00213B78  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80216C3C 00213B7C  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 80216C40 00213B80  90 01 00 80 */	stw r0, 0x80(r1)
/* 80216C44 00213B84  90 01 00 68 */	stw r0, 0x68(r1)
/* 80216C48 00213B88  90 01 00 60 */	stw r0, 0x60(r1)
/* 80216C4C 00213B8C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80216C50 00213B90  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80216C54 00213B94  90 01 00 88 */	stw r0, 0x88(r1)
/* 80216C58 00213B98  48 21 5D 79 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216C5C 00213B9C  48 00 05 EC */	b .L_80217248
.L_80216C60:
/* 80216C60 00213BA0  7F 43 D3 78 */	mr r3, r26
/* 80216C64 00213BA4  7F 64 DB 78 */	mr r4, r27
/* 80216C68 00213BA8  4B FF D1 F5 */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 80216C6C 00213BAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216C70 00213BB0  40 82 05 D8 */	bne .L_80217248
/* 80216C74 00213BB4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216C78 00213BB8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80216C7C 00213BBC  60 00 00 02 */	ori r0, r0, 2
/* 80216C80 00213BC0  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80216C84 00213BC4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216C88 00213BC8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80216C8C 00213BCC  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80216C90 00213BD0  28 00 00 00 */	cmplwi r0, 0
/* 80216C94 00213BD4  41 82 00 64 */	beq .L_80216CF8
/* 80216C98 00213BD8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216C9C 00213BDC  28 00 00 00 */	cmplwi r0, 0
/* 80216CA0 00213BE0  40 82 00 18 */	bne .L_80216CB8
/* 80216CA4 00213BE4  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216CA8 00213BE8  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216CAC 00213BEC  38 80 01 D3 */	li r4, 0x1d3
/* 80216CB0 00213BF0  4C C6 31 82 */	crclr 6
/* 80216CB4 00213BF4  4B E1 39 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216CB8:
/* 80216CB8 00213BF8  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216CBC 00213BFC  80 19 00 04 */	lwz r0, 4(r25)
/* 80216CC0 00213C00  28 00 00 00 */	cmplwi r0, 0
/* 80216CC4 00213C04  40 82 00 18 */	bne .L_80216CDC
/* 80216CC8 00213C08  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216CCC 00213C0C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216CD0 00213C10  38 80 00 C7 */	li r4, 0xc7
/* 80216CD4 00213C14  4C C6 31 82 */	crclr 6
/* 80216CD8 00213C18  4B E1 39 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216CDC:
/* 80216CDC 00213C1C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216CE0 00213C20  80 63 00 04 */	lwz r3, 4(r3)
/* 80216CE4 00213C24  81 83 00 00 */	lwz r12, 0(r3)
/* 80216CE8 00213C28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216CEC 00213C2C  7D 89 03 A6 */	mtctr r12
/* 80216CF0 00213C30  4E 80 04 21 */	bctrl 
/* 80216CF4 00213C34  48 00 00 C0 */	b .L_80216DB4
.L_80216CF8:
/* 80216CF8 00213C38  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216CFC 00213C3C  28 00 00 00 */	cmplwi r0, 0
/* 80216D00 00213C40  40 82 00 18 */	bne .L_80216D18
/* 80216D04 00213C44  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216D08 00213C48  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D0C 00213C4C  38 80 01 D3 */	li r4, 0x1d3
/* 80216D10 00213C50  4C C6 31 82 */	crclr 6
/* 80216D14 00213C54  4B E1 39 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D18:
/* 80216D18 00213C58  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216D1C 00213C5C  80 19 00 04 */	lwz r0, 4(r25)
/* 80216D20 00213C60  28 00 00 00 */	cmplwi r0, 0
/* 80216D24 00213C64  40 82 00 18 */	bne .L_80216D3C
/* 80216D28 00213C68  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216D2C 00213C6C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D30 00213C70  38 80 00 C7 */	li r4, 0xc7
/* 80216D34 00213C74  4C C6 31 82 */	crclr 6
/* 80216D38 00213C78  4B E1 39 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D3C:
/* 80216D3C 00213C7C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216D40 00213C80  80 63 00 04 */	lwz r3, 4(r3)
/* 80216D44 00213C84  81 83 00 00 */	lwz r12, 0(r3)
/* 80216D48 00213C88  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80216D4C 00213C8C  7D 89 03 A6 */	mtctr r12
/* 80216D50 00213C90  4E 80 04 21 */	bctrl 
/* 80216D54 00213C94  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216D58 00213C98  28 00 00 00 */	cmplwi r0, 0
/* 80216D5C 00213C9C  40 82 00 18 */	bne .L_80216D74
/* 80216D60 00213CA0  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216D64 00213CA4  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D68 00213CA8  38 80 01 D3 */	li r4, 0x1d3
/* 80216D6C 00213CAC  4C C6 31 82 */	crclr 6
/* 80216D70 00213CB0  4B E1 38 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D74:
/* 80216D74 00213CB4  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216D78 00213CB8  80 19 00 04 */	lwz r0, 4(r25)
/* 80216D7C 00213CBC  28 00 00 00 */	cmplwi r0, 0
/* 80216D80 00213CC0  40 82 00 18 */	bne .L_80216D98
/* 80216D84 00213CC4  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216D88 00213CC8  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D8C 00213CCC  38 80 00 C7 */	li r4, 0xc7
/* 80216D90 00213CD0  4C C6 31 82 */	crclr 6
/* 80216D94 00213CD4  4B E1 38 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D98:
/* 80216D98 00213CD8  80 79 00 04 */	lwz r3, 4(r25)
/* 80216D9C 00213CDC  80 63 00 04 */	lwz r3, 4(r3)
/* 80216DA0 00213CE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80216DA4 00213CE4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80216DA8 00213CE8  7D 89 03 A6 */	mtctr r12
/* 80216DAC 00213CEC  4E 80 04 21 */	bctrl 
/* 80216DB0 00213CF0  48 12 9E FD */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80216DB4:
/* 80216DB4 00213CF4  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80216DB8 00213CF8  39 80 00 00 */	li r12, 0
/* 80216DBC 00213CFC  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216DC0 00213D00  39 00 00 01 */	li r8, 1
/* 80216DC4 00213D04  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80216DC8 00213D08  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80216DCC 00213D0C  38 C0 00 0A */	li r6, 0xa
/* 80216DD0 00213D10  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80216DD4 00213D14  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216DD8 00213D18  38 E0 00 02 */	li r7, 2
/* 80216DDC 00213D1C  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216DE0 00213D20  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80216DE4 00213D24  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80216DE8 00213D28  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80216DEC 00213D2C  39 40 04 D2 */	li r10, 0x4d2
/* 80216DF0 00213D30  39 20 00 32 */	li r9, 0x32
/* 80216DF4 00213D34  93 41 02 B4 */	stw r26, 0x2b4(r1)
/* 80216DF8 00213D38  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80216DFC 00213D3C  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80216E00 00213D40  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80216E04 00213D44  93 41 03 1C */	stw r26, 0x31c(r1)
/* 80216E08 00213D48  38 81 02 B4 */	addi r4, r1, 0x2b4
/* 80216E0C 00213D4C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216E10 00213D50  93 41 03 2C */	stw r26, 0x32c(r1)
/* 80216E14 00213D54  91 81 02 B8 */	stw r12, 0x2b8(r1)
/* 80216E18 00213D58  91 61 02 B4 */	stw r11, 0x2b4(r1)
/* 80216E1C 00213D5C  D0 81 02 BC */	stfs f4, 0x2bc(r1)
/* 80216E20 00213D60  91 81 02 C0 */	stw r12, 0x2c0(r1)
/* 80216E24 00213D64  91 81 02 C8 */	stw r12, 0x2c8(r1)
/* 80216E28 00213D68  91 41 02 C4 */	stw r10, 0x2c4(r1)
/* 80216E2C 00213D6C  91 21 02 CC */	stw r9, 0x2cc(r1)
/* 80216E30 00213D70  99 81 02 D0 */	stb r12, 0x2d0(r1)
/* 80216E34 00213D74  91 81 02 D4 */	stw r12, 0x2d4(r1)
/* 80216E38 00213D78  D0 61 02 D8 */	stfs f3, 0x2d8(r1)
/* 80216E3C 00213D7C  91 01 02 DC */	stw r8, 0x2dc(r1)
/* 80216E40 00213D80  90 E1 02 E0 */	stw r7, 0x2e0(r1)
/* 80216E44 00213D84  90 C1 02 E4 */	stw r6, 0x2e4(r1)
/* 80216E48 00213D88  90 C1 02 E8 */	stw r6, 0x2e8(r1)
/* 80216E4C 00213D8C  99 01 02 EC */	stb r8, 0x2ec(r1)
/* 80216E50 00213D90  D0 61 02 F0 */	stfs f3, 0x2f0(r1)
/* 80216E54 00213D94  91 01 02 F4 */	stw r8, 0x2f4(r1)
/* 80216E58 00213D98  90 E1 02 F8 */	stw r7, 0x2f8(r1)
/* 80216E5C 00213D9C  90 C1 02 FC */	stw r6, 0x2fc(r1)
/* 80216E60 00213DA0  90 C1 03 00 */	stw r6, 0x300(r1)
/* 80216E64 00213DA4  99 01 03 04 */	stb r8, 0x304(r1)
/* 80216E68 00213DA8  91 81 03 20 */	stw r12, 0x320(r1)
/* 80216E6C 00213DAC  90 A1 03 1C */	stw r5, 0x31c(r1)
/* 80216E70 00213DB0  D0 41 03 28 */	stfs f2, 0x328(r1)
/* 80216E74 00213DB4  D0 41 03 24 */	stfs f2, 0x324(r1)
/* 80216E78 00213DB8  91 81 03 30 */	stw r12, 0x330(r1)
/* 80216E7C 00213DBC  90 01 03 2C */	stw r0, 0x32c(r1)
/* 80216E80 00213DC0  D0 21 03 38 */	stfs f1, 0x338(r1)
/* 80216E84 00213DC4  D0 21 03 34 */	stfs f1, 0x334(r1)
/* 80216E88 00213DC8  99 81 03 12 */	stb r12, 0x312(r1)
/* 80216E8C 00213DCC  D0 01 03 08 */	stfs f0, 0x308(r1)
/* 80216E90 00213DD0  99 81 03 10 */	stb r12, 0x310(r1)
/* 80216E94 00213DD4  99 01 03 11 */	stb r8, 0x311(r1)
/* 80216E98 00213DD8  91 01 03 0C */	stw r8, 0x30c(r1)
/* 80216E9C 00213DDC  99 81 03 13 */	stb r12, 0x313(r1)
/* 80216EA0 00213DE0  99 81 03 14 */	stb r12, 0x314(r1)
/* 80216EA4 00213DE4  99 81 03 15 */	stb r12, 0x315(r1)
/* 80216EA8 00213DE8  99 81 03 16 */	stb r12, 0x316(r1)
/* 80216EAC 00213DEC  99 81 03 17 */	stb r12, 0x317(r1)
/* 80216EB0 00213DF0  99 81 03 18 */	stb r12, 0x318(r1)
/* 80216EB4 00213DF4  48 1E 52 55 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 80216EB8 00213DF8  48 00 03 90 */	b .L_80217248
.L_80216EBC:
/* 80216EBC 00213DFC  7F 83 E3 78 */	mr r3, r28
/* 80216EC0 00213E00  38 9E 01 40 */	addi r4, r30, 0x140
/* 80216EC4 00213E04  48 21 AA 09 */	bl is__Q24Game11MovieConfigFPc
/* 80216EC8 00213E08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216ECC 00213E0C  40 82 00 2C */	bne .L_80216EF8
/* 80216ED0 00213E10  7F 83 E3 78 */	mr r3, r28
/* 80216ED4 00213E14  38 9E 01 50 */	addi r4, r30, 0x150
/* 80216ED8 00213E18  48 21 A9 F5 */	bl is__Q24Game11MovieConfigFPc
/* 80216EDC 00213E1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216EE0 00213E20  40 82 00 18 */	bne .L_80216EF8
/* 80216EE4 00213E24  7F 83 E3 78 */	mr r3, r28
/* 80216EE8 00213E28  38 9E 01 60 */	addi r4, r30, 0x160
/* 80216EEC 00213E2C  48 21 A9 E1 */	bl is__Q24Game11MovieConfigFPc
/* 80216EF0 00213E30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216EF4 00213E34  41 82 02 4C */	beq .L_80217140
.L_80216EF8:
/* 80216EF8 00213E38  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216EFC 00213E3C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80216F00 00213E40  60 00 00 02 */	ori r0, r0, 2
/* 80216F04 00213E44  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80216F08 00213E48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216F0C 00213E4C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80216F10 00213E50  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80216F14 00213E54  28 00 00 00 */	cmplwi r0, 0
/* 80216F18 00213E58  41 82 00 64 */	beq .L_80216F7C
/* 80216F1C 00213E5C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216F20 00213E60  28 00 00 00 */	cmplwi r0, 0
/* 80216F24 00213E64  40 82 00 18 */	bne .L_80216F3C
/* 80216F28 00213E68  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216F2C 00213E6C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216F30 00213E70  38 80 01 D3 */	li r4, 0x1d3
/* 80216F34 00213E74  4C C6 31 82 */	crclr 6
/* 80216F38 00213E78  4B E1 37 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216F3C:
/* 80216F3C 00213E7C  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216F40 00213E80  80 19 00 04 */	lwz r0, 4(r25)
/* 80216F44 00213E84  28 00 00 00 */	cmplwi r0, 0
/* 80216F48 00213E88  40 82 00 18 */	bne .L_80216F60
/* 80216F4C 00213E8C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216F50 00213E90  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216F54 00213E94  38 80 00 C7 */	li r4, 0xc7
/* 80216F58 00213E98  4C C6 31 82 */	crclr 6
/* 80216F5C 00213E9C  4B E1 36 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216F60:
/* 80216F60 00213EA0  80 79 00 04 */	lwz r3, 4(r25)
/* 80216F64 00213EA4  80 63 00 04 */	lwz r3, 4(r3)
/* 80216F68 00213EA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80216F6C 00213EAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216F70 00213EB0  7D 89 03 A6 */	mtctr r12
/* 80216F74 00213EB4  4E 80 04 21 */	bctrl 
/* 80216F78 00213EB8  48 00 00 C0 */	b .L_80217038
.L_80216F7C:
/* 80216F7C 00213EBC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216F80 00213EC0  28 00 00 00 */	cmplwi r0, 0
/* 80216F84 00213EC4  40 82 00 18 */	bne .L_80216F9C
/* 80216F88 00213EC8  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216F8C 00213ECC  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216F90 00213ED0  38 80 01 D3 */	li r4, 0x1d3
/* 80216F94 00213ED4  4C C6 31 82 */	crclr 6
/* 80216F98 00213ED8  4B E1 36 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216F9C:
/* 80216F9C 00213EDC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216FA0 00213EE0  80 19 00 04 */	lwz r0, 4(r25)
/* 80216FA4 00213EE4  28 00 00 00 */	cmplwi r0, 0
/* 80216FA8 00213EE8  40 82 00 18 */	bne .L_80216FC0
/* 80216FAC 00213EEC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216FB0 00213EF0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216FB4 00213EF4  38 80 00 C7 */	li r4, 0xc7
/* 80216FB8 00213EF8  4C C6 31 82 */	crclr 6
/* 80216FBC 00213EFC  4B E1 36 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216FC0:
/* 80216FC0 00213F00  80 79 00 04 */	lwz r3, 4(r25)
/* 80216FC4 00213F04  80 63 00 04 */	lwz r3, 4(r3)
/* 80216FC8 00213F08  81 83 00 00 */	lwz r12, 0(r3)
/* 80216FCC 00213F0C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80216FD0 00213F10  7D 89 03 A6 */	mtctr r12
/* 80216FD4 00213F14  4E 80 04 21 */	bctrl 
/* 80216FD8 00213F18  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216FDC 00213F1C  28 00 00 00 */	cmplwi r0, 0
/* 80216FE0 00213F20  40 82 00 18 */	bne .L_80216FF8
/* 80216FE4 00213F24  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216FE8 00213F28  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216FEC 00213F2C  38 80 01 D3 */	li r4, 0x1d3
/* 80216FF0 00213F30  4C C6 31 82 */	crclr 6
/* 80216FF4 00213F34  4B E1 36 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216FF8:
/* 80216FF8 00213F38  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216FFC 00213F3C  80 19 00 04 */	lwz r0, 4(r25)
/* 80217000 00213F40  28 00 00 00 */	cmplwi r0, 0
/* 80217004 00213F44  40 82 00 18 */	bne .L_8021701C
/* 80217008 00213F48  38 7E 00 FC */	addi r3, r30, 0xfc
/* 8021700C 00213F4C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80217010 00213F50  38 80 00 C7 */	li r4, 0xc7
/* 80217014 00213F54  4C C6 31 82 */	crclr 6
/* 80217018 00213F58  4B E1 36 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021701C:
/* 8021701C 00213F5C  80 79 00 04 */	lwz r3, 4(r25)
/* 80217020 00213F60  80 63 00 04 */	lwz r3, 4(r3)
/* 80217024 00213F64  81 83 00 00 */	lwz r12, 0(r3)
/* 80217028 00213F68  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8021702C 00213F6C  7D 89 03 A6 */	mtctr r12
/* 80217030 00213F70  4E 80 04 21 */	bctrl 
/* 80217034 00213F74  48 12 9C 79 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80217038:
/* 80217038 00213F78  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8021703C 00213F7C  39 80 00 00 */	li r12, 0
/* 80217040 00213F80  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80217044 00213F84  39 00 00 01 */	li r8, 1
/* 80217048 00213F88  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 8021704C 00213F8C  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80217050 00213F90  38 C0 00 0A */	li r6, 0xa
/* 80217054 00213F94  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80217058 00213F98  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 8021705C 00213F9C  38 E0 00 02 */	li r7, 2
/* 80217060 00213FA0  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80217064 00213FA4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80217068 00213FA8  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 8021706C 00213FAC  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80217070 00213FB0  39 40 04 D2 */	li r10, 0x4d2
/* 80217074 00213FB4  39 20 00 32 */	li r9, 0x32
/* 80217078 00213FB8  93 41 02 2C */	stw r26, 0x22c(r1)
/* 8021707C 00213FBC  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80217080 00213FC0  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80217084 00213FC4  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80217088 00213FC8  93 41 02 94 */	stw r26, 0x294(r1)
/* 8021708C 00213FCC  38 81 02 2C */	addi r4, r1, 0x22c
/* 80217090 00213FD0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217094 00213FD4  93 41 02 A4 */	stw r26, 0x2a4(r1)
/* 80217098 00213FD8  91 81 02 30 */	stw r12, 0x230(r1)
/* 8021709C 00213FDC  91 61 02 2C */	stw r11, 0x22c(r1)
/* 802170A0 00213FE0  D0 81 02 34 */	stfs f4, 0x234(r1)
/* 802170A4 00213FE4  91 81 02 38 */	stw r12, 0x238(r1)
/* 802170A8 00213FE8  91 81 02 40 */	stw r12, 0x240(r1)
/* 802170AC 00213FEC  91 41 02 3C */	stw r10, 0x23c(r1)
/* 802170B0 00213FF0  91 21 02 44 */	stw r9, 0x244(r1)
/* 802170B4 00213FF4  99 81 02 48 */	stb r12, 0x248(r1)
/* 802170B8 00213FF8  91 81 02 4C */	stw r12, 0x24c(r1)
/* 802170BC 00213FFC  D0 61 02 50 */	stfs f3, 0x250(r1)
/* 802170C0 00214000  91 01 02 54 */	stw r8, 0x254(r1)
/* 802170C4 00214004  90 E1 02 58 */	stw r7, 0x258(r1)
/* 802170C8 00214008  90 C1 02 5C */	stw r6, 0x25c(r1)
/* 802170CC 0021400C  90 C1 02 60 */	stw r6, 0x260(r1)
/* 802170D0 00214010  99 01 02 64 */	stb r8, 0x264(r1)
/* 802170D4 00214014  D0 61 02 68 */	stfs f3, 0x268(r1)
/* 802170D8 00214018  91 01 02 6C */	stw r8, 0x26c(r1)
/* 802170DC 0021401C  90 E1 02 70 */	stw r7, 0x270(r1)
/* 802170E0 00214020  90 C1 02 74 */	stw r6, 0x274(r1)
/* 802170E4 00214024  90 C1 02 78 */	stw r6, 0x278(r1)
/* 802170E8 00214028  99 01 02 7C */	stb r8, 0x27c(r1)
/* 802170EC 0021402C  91 81 02 98 */	stw r12, 0x298(r1)
/* 802170F0 00214030  90 A1 02 94 */	stw r5, 0x294(r1)
/* 802170F4 00214034  D0 41 02 A0 */	stfs f2, 0x2a0(r1)
/* 802170F8 00214038  D0 41 02 9C */	stfs f2, 0x29c(r1)
/* 802170FC 0021403C  91 81 02 A8 */	stw r12, 0x2a8(r1)
/* 80217100 00214040  90 01 02 A4 */	stw r0, 0x2a4(r1)
/* 80217104 00214044  D0 21 02 B0 */	stfs f1, 0x2b0(r1)
/* 80217108 00214048  D0 21 02 AC */	stfs f1, 0x2ac(r1)
/* 8021710C 0021404C  99 81 02 8A */	stb r12, 0x28a(r1)
/* 80217110 00214050  D0 01 02 80 */	stfs f0, 0x280(r1)
/* 80217114 00214054  99 81 02 88 */	stb r12, 0x288(r1)
/* 80217118 00214058  99 01 02 89 */	stb r8, 0x289(r1)
/* 8021711C 0021405C  91 01 02 84 */	stw r8, 0x284(r1)
/* 80217120 00214060  99 81 02 8B */	stb r12, 0x28b(r1)
/* 80217124 00214064  99 81 02 8C */	stb r12, 0x28c(r1)
/* 80217128 00214068  99 81 02 8D */	stb r12, 0x28d(r1)
/* 8021712C 0021406C  99 81 02 8E */	stb r12, 0x28e(r1)
/* 80217130 00214070  99 81 02 8F */	stb r12, 0x28f(r1)
/* 80217134 00214074  99 81 02 90 */	stb r12, 0x290(r1)
/* 80217138 00214078  48 1E 4F D1 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 8021713C 0021407C  48 00 01 0C */	b .L_80217248
.L_80217140:
/* 80217140 00214080  7F 83 E3 78 */	mr r3, r28
/* 80217144 00214084  38 9E 02 0C */	addi r4, r30, 0x20c
/* 80217148 00214088  48 21 A7 85 */	bl is__Q24Game11MovieConfigFPc
/* 8021714C 0021408C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217150 00214090  41 82 00 A4 */	beq .L_802171F4
/* 80217154 00214094  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217158 00214098  48 1E 6A 4D */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 8021715C 0021409C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217160 002140A0  7F A4 EB 78 */	mr r4, r29
/* 80217164 002140A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80217168 002140A8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8021716C 002140AC  7D 89 03 A6 */	mtctr r12
/* 80217170 002140B0  4E 80 04 21 */	bctrl 
/* 80217174 002140B4  4B F2 BB B1 */	bl setDeadLaydown__Q24Game4NaviFv
/* 80217178 002140B8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021717C 002140BC  80 03 00 50 */	lwz r0, 0x50(r3)
/* 80217180 002140C0  2C 00 00 02 */	cmpwi r0, 2
/* 80217184 002140C4  41 82 00 34 */	beq .L_802171B8
/* 80217188 002140C8  2C 1D 00 00 */	cmpwi r29, 0
/* 8021718C 002140CC  40 82 00 18 */	bne .L_802171A4
/* 80217190 002140D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217194 002140D4  38 80 00 01 */	li r4, 1
/* 80217198 002140D8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8021719C 002140DC  4B F3 67 7D */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 802171A0 002140E0  48 00 00 A8 */	b .L_80217248
.L_802171A4:
/* 802171A4 002140E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802171A8 002140E8  38 80 00 00 */	li r4, 0
/* 802171AC 002140EC  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802171B0 002140F0  4B F3 67 69 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 802171B4 002140F4  48 00 00 94 */	b .L_80217248
.L_802171B8:
/* 802171B8 002140F8  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 802171BC 002140FC  38 00 00 02 */	li r0, 2
/* 802171C0 00214100  7F 43 D3 78 */	mr r3, r26
/* 802171C4 00214104  7F 64 DB 78 */	mr r4, r27
/* 802171C8 00214108  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 802171CC 0021410C  38 C1 00 0C */	addi r6, r1, 0xc
/* 802171D0 00214110  38 A0 00 05 */	li r5, 5
/* 802171D4 00214114  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 802171D8 00214118  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 802171DC 0021411C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 802171E0 00214120  81 9A 00 00 */	lwz r12, 0(r26)
/* 802171E4 00214124  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802171E8 00214128  7D 89 03 A6 */	mtctr r12
/* 802171EC 0021412C  4E 80 04 21 */	bctrl 
/* 802171F0 00214130  48 00 00 58 */	b .L_80217248
.L_802171F4:
/* 802171F4 00214134  7F 83 E3 78 */	mr r3, r28
/* 802171F8 00214138  38 9E 01 FC */	addi r4, r30, 0x1fc
/* 802171FC 0021413C  48 21 A6 D1 */	bl is__Q24Game11MovieConfigFPc
/* 80217200 00214140  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217204 00214144  41 82 00 44 */	beq .L_80217248
/* 80217208 00214148  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021720C 0021414C  48 1E 69 99 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 80217210 00214150  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 80217214 00214154  38 00 00 01 */	li r0, 1
/* 80217218 00214158  7F 43 D3 78 */	mr r3, r26
/* 8021721C 0021415C  7F 64 DB 78 */	mr r4, r27
/* 80217220 00214160  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 80217224 00214164  38 C1 00 08 */	addi r6, r1, 8
/* 80217228 00214168  38 A0 00 05 */	li r5, 5
/* 8021722C 0021416C  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 80217230 00214170  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 80217234 00214174  B0 01 00 08 */	sth r0, 8(r1)
/* 80217238 00214178  81 9A 00 00 */	lwz r12, 0(r26)
/* 8021723C 0021417C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80217240 00214180  7D 89 03 A6 */	mtctr r12
/* 80217244 00214184  4E 80 04 21 */	bctrl 
.L_80217248:
/* 80217248 00214188  BB 21 05 64 */	lmw r25, 0x564(r1)
/* 8021724C 0021418C  80 01 05 84 */	lwz r0, 0x584(r1)
/* 80217250 00214190  7C 08 03 A6 */	mtlr r0
/* 80217254 00214194  38 21 05 80 */	addi r1, r1, 0x580
/* 80217258 00214198  4E 80 00 20 */	blr 
.else
.global onMovieDone__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 802157E0 00212720  94 21 FA 80 */	stwu r1, -0x580(r1)
/* 802157E4 00212724  7C 08 02 A6 */	mflr r0
/* 802157E8 00212728  3C C0 80 48 */	lis r6, lbl_80482150@ha
/* 802157EC 0021272C  90 01 05 84 */	stw r0, 0x584(r1)
/* 802157F0 00212730  BF 21 05 64 */	stmw r25, 0x564(r1)
/* 802157F4 00212734  7C 7A 1B 78 */	mr r26, r3
/* 802157F8 00212738  7C 9B 23 78 */	mr r27, r4
/* 802157FC 0021273C  7C BC 2B 78 */	mr r28, r5
/* 80215800 00212740  7C FD 3B 78 */	mr r29, r7
/* 80215804 00212744  3B C6 21 50 */	addi r30, r6, lbl_80482150@l
/* 80215808 00212748  48 00 1A 55 */	bl needRepayDemo__Q34Game10SingleGame9GameStateFv
/* 8021580C 0021274C  7C 7F 1B 78 */	mr r31, r3
/* 80215810 00212750  7F 83 E3 78 */	mr r3, r28
/* 80215814 00212754  38 9E 02 28 */	addi r4, r30, 0x228
/* 80215818 00212758  48 21 C0 B5 */	bl is__Q24Game11MovieConfigFPc
/* 8021581C 0021275C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215820 00212760  41 82 00 94 */	beq .L_802158B4
/* 80215824 00212764  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215828 00212768  38 80 00 00 */	li r4, 0
/* 8021582C 0021276C  4B FD 2A 35 */	bl getGroundOtakaraNum__Q24Game8PlayDataFi
/* 80215830 00212770  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215834 00212774  38 80 00 00 */	li r4, 0
/* 80215838 00212778  4B FD 2A 29 */	bl getGroundOtakaraNum__Q24Game8PlayDataFi
/* 8021583C 0021277C  2C 03 00 01 */	cmpwi r3, 1
/* 80215840 00212780  40 82 00 74 */	bne .L_802158B4
/* 80215844 00212784  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215848 00212788  38 80 00 00 */	li r4, 0
/* 8021584C 0021278C  4B FD 41 75 */	bl getGroundOtakaraNum_Old__Q24Game8PlayDataFi
/* 80215850 00212790  2C 03 00 00 */	cmpwi r3, 0
/* 80215854 00212794  40 82 00 60 */	bne .L_802158B4
/* 80215858 00212798  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 8021585C 0021279C  38 7E 02 3C */	addi r3, r30, 0x23c
/* 80215860 002127A0  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 80215864 002127A4  38 00 00 00 */	li r0, 0
/* 80215868 002127A8  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 8021586C 002127AC  38 81 01 F8 */	addi r4, r1, 0x1f8
/* 80215870 002127B0  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80215874 002127B4  90 61 01 F8 */	stw r3, 0x1f8(r1)
/* 80215878 002127B8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021587C 002127BC  90 C1 01 FC */	stw r6, 0x1fc(r1)
/* 80215880 002127C0  90 A1 02 04 */	stw r5, 0x204(r1)
/* 80215884 002127C4  D0 01 02 10 */	stfs f0, 0x210(r1)
/* 80215888 002127C8  D0 01 02 14 */	stfs f0, 0x214(r1)
/* 8021588C 002127CC  D0 01 02 18 */	stfs f0, 0x218(r1)
/* 80215890 002127D0  D0 01 02 1C */	stfs f0, 0x21c(r1)
/* 80215894 002127D4  90 01 02 20 */	stw r0, 0x220(r1)
/* 80215898 002127D8  90 01 02 08 */	stw r0, 0x208(r1)
/* 8021589C 002127DC  90 01 02 00 */	stw r0, 0x200(r1)
/* 802158A0 002127E0  90 01 02 24 */	stw r0, 0x224(r1)
/* 802158A4 002127E4  90 01 02 0C */	stw r0, 0x20c(r1)
/* 802158A8 002127E8  90 01 02 28 */	stw r0, 0x228(r1)
/* 802158AC 002127EC  48 21 71 25 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802158B0 002127F0  48 00 19 98 */	b .L_80217248
.L_802158B4:
/* 802158B4 002127F4  7F 83 E3 78 */	mr r3, r28
/* 802158B8 002127F8  38 9E 02 3C */	addi r4, r30, 0x23c
/* 802158BC 002127FC  48 21 C0 11 */	bl is__Q24Game11MovieConfigFPc
/* 802158C0 00212800  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802158C4 00212804  41 82 00 30 */	beq .L_802158F4
/* 802158C8 00212808  38 00 00 00 */	li r0, 0
/* 802158CC 0021280C  7F 43 D3 78 */	mr r3, r26
/* 802158D0 00212810  B0 01 00 14 */	sth r0, 0x14(r1)
/* 802158D4 00212814  7F 64 DB 78 */	mr r4, r27
/* 802158D8 00212818  38 C1 00 14 */	addi r6, r1, 0x14
/* 802158DC 0021281C  38 A0 00 05 */	li r5, 5
/* 802158E0 00212820  81 9A 00 00 */	lwz r12, 0(r26)
/* 802158E4 00212824  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802158E8 00212828  7D 89 03 A6 */	mtctr r12
/* 802158EC 0021282C  4E 80 04 21 */	bctrl 
/* 802158F0 00212830  48 00 19 58 */	b .L_80217248
.L_802158F4:
/* 802158F4 00212834  7F 83 E3 78 */	mr r3, r28
/* 802158F8 00212838  38 9E 02 50 */	addi r4, r30, 0x250
/* 802158FC 0021283C  48 21 BF D1 */	bl is__Q24Game11MovieConfigFPc
/* 80215900 00212840  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215904 00212844  41 82 02 78 */	beq .L_80215B7C
/* 80215908 00212848  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021590C 0021284C  38 80 00 12 */	li r4, 0x12
/* 80215910 00212850  4B FD 1A D1 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80215914 00212854  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215918 00212858  40 82 00 84 */	bne .L_8021599C
/* 8021591C 0021285C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215920 00212860  38 80 00 0A */	li r4, 0xa
/* 80215924 00212864  38 63 00 48 */	addi r3, r3, 0x48
/* 80215928 00212868  4B FD 06 A9 */	bl hasItem__Q24Game10OlimarDataFi
/* 8021592C 0021286C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215930 00212870  41 82 00 6C */	beq .L_8021599C
/* 80215934 00212874  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215938 00212878  38 80 00 12 */	li r4, 0x12
/* 8021593C 0021287C  4B FD 1A 69 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80215940 00212880  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 80215944 00212884  38 7E 02 64 */	addi r3, r30, 0x264
/* 80215948 00212888  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 8021594C 0021288C  38 00 00 00 */	li r0, 0
/* 80215950 00212890  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80215954 00212894  38 81 01 C4 */	addi r4, r1, 0x1c4
/* 80215958 00212898  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 8021595C 0021289C  90 61 01 C4 */	stw r3, 0x1c4(r1)
/* 80215960 002128A0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215964 002128A4  90 C1 01 C8 */	stw r6, 0x1c8(r1)
/* 80215968 002128A8  90 A1 01 D0 */	stw r5, 0x1d0(r1)
/* 8021596C 002128AC  D0 01 01 DC */	stfs f0, 0x1dc(r1)
/* 80215970 002128B0  D0 01 01 E0 */	stfs f0, 0x1e0(r1)
/* 80215974 002128B4  D0 01 01 E4 */	stfs f0, 0x1e4(r1)
/* 80215978 002128B8  D0 01 01 E8 */	stfs f0, 0x1e8(r1)
/* 8021597C 002128BC  90 01 01 EC */	stw r0, 0x1ec(r1)
/* 80215980 002128C0  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 80215984 002128C4  90 01 01 CC */	stw r0, 0x1cc(r1)
/* 80215988 002128C8  90 01 01 F0 */	stw r0, 0x1f0(r1)
/* 8021598C 002128CC  90 01 01 D8 */	stw r0, 0x1d8(r1)
/* 80215990 002128D0  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 80215994 002128D4  48 21 70 3D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215998 002128D8  48 00 18 B0 */	b .L_80217248
.L_8021599C:
/* 8021599C 002128DC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802159A0 002128E0  41 82 00 20 */	beq .L_802159C0
/* 802159A4 002128E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802159A8 002128E8  4B FD 34 B5 */	bl getRepayLevel__Q24Game8PlayDataFv
/* 802159AC 002128EC  2C 03 00 09 */	cmpwi r3, 9
/* 802159B0 002128F0  40 82 00 10 */	bne .L_802159C0
/* 802159B4 002128F4  7F 43 D3 78 */	mr r3, r26
/* 802159B8 002128F8  48 00 19 19 */	bl startRepayDemo__Q34Game10SingleGame9GameStateFv
/* 802159BC 002128FC  48 00 18 8C */	b .L_80217248
.L_802159C0:
/* 802159C0 00212900  7F 43 D3 78 */	mr r3, r26
/* 802159C4 00212904  7F 64 DB 78 */	mr r4, r27
/* 802159C8 00212908  4B FF E4 95 */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 802159CC 0021290C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802159D0 00212910  40 82 18 78 */	bne .L_80217248
/* 802159D4 00212914  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 802159D8 00212918  28 00 00 00 */	cmplwi r0, 0
/* 802159DC 0021291C  41 82 00 60 */	beq .L_80215A3C
/* 802159E0 00212920  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 802159E4 00212924  38 7E 02 70 */	addi r3, r30, 0x270
/* 802159E8 00212928  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 802159EC 0021292C  38 00 00 00 */	li r0, 0
/* 802159F0 00212930  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802159F4 00212934  38 81 01 90 */	addi r4, r1, 0x190
/* 802159F8 00212938  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802159FC 0021293C  90 61 01 90 */	stw r3, 0x190(r1)
/* 80215A00 00212940  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215A04 00212944  90 C1 01 94 */	stw r6, 0x194(r1)
/* 80215A08 00212948  90 A1 01 9C */	stw r5, 0x19c(r1)
/* 80215A0C 0021294C  D0 01 01 A8 */	stfs f0, 0x1a8(r1)
/* 80215A10 00212950  D0 01 01 AC */	stfs f0, 0x1ac(r1)
/* 80215A14 00212954  D0 01 01 B0 */	stfs f0, 0x1b0(r1)
/* 80215A18 00212958  D0 01 01 B4 */	stfs f0, 0x1b4(r1)
/* 80215A1C 0021295C  90 01 01 B8 */	stw r0, 0x1b8(r1)
/* 80215A20 00212960  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 80215A24 00212964  90 01 01 98 */	stw r0, 0x198(r1)
/* 80215A28 00212968  90 01 01 BC */	stw r0, 0x1bc(r1)
/* 80215A2C 0021296C  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 80215A30 00212970  90 01 01 C0 */	stw r0, 0x1c0(r1)
/* 80215A34 00212974  48 21 6F 9D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215A38 00212978  48 00 18 10 */	b .L_80217248
.L_80215A3C:
/* 80215A3C 0021297C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215A40 00212980  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215A44 00212984  60 00 00 02 */	ori r0, r0, 2
/* 80215A48 00212988  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80215A4C 0021298C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215A50 00212990  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80215A54 00212994  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80215A58 00212998  28 00 00 00 */	cmplwi r0, 0
/* 80215A5C 0021299C  41 82 00 64 */	beq .L_80215AC0
/* 80215A60 002129A0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215A64 002129A4  28 00 00 00 */	cmplwi r0, 0
/* 80215A68 002129A8  40 82 00 18 */	bne .L_80215A80
/* 80215A6C 002129AC  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215A70 002129B0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215A74 002129B4  38 80 01 D3 */	li r4, 0x1d3
/* 80215A78 002129B8  4C C6 31 82 */	crclr 6
/* 80215A7C 002129BC  4B E1 4B C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215A80:
/* 80215A80 002129C0  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215A84 002129C4  80 19 00 04 */	lwz r0, 4(r25)
/* 80215A88 002129C8  28 00 00 00 */	cmplwi r0, 0
/* 80215A8C 002129CC  40 82 00 18 */	bne .L_80215AA4
/* 80215A90 002129D0  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215A94 002129D4  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215A98 002129D8  38 80 00 C7 */	li r4, 0xc7
/* 80215A9C 002129DC  4C C6 31 82 */	crclr 6
/* 80215AA0 002129E0  4B E1 4B A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215AA4:
/* 80215AA4 002129E4  80 79 00 04 */	lwz r3, 4(r25)
/* 80215AA8 002129E8  80 63 00 04 */	lwz r3, 4(r3)
/* 80215AAC 002129EC  81 83 00 00 */	lwz r12, 0(r3)
/* 80215AB0 002129F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215AB4 002129F4  7D 89 03 A6 */	mtctr r12
/* 80215AB8 002129F8  4E 80 04 21 */	bctrl 
/* 80215ABC 002129FC  48 00 00 C0 */	b .L_80215B7C
.L_80215AC0:
/* 80215AC0 00212A00  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215AC4 00212A04  28 00 00 00 */	cmplwi r0, 0
/* 80215AC8 00212A08  40 82 00 18 */	bne .L_80215AE0
/* 80215ACC 00212A0C  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215AD0 00212A10  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215AD4 00212A14  38 80 01 D3 */	li r4, 0x1d3
/* 80215AD8 00212A18  4C C6 31 82 */	crclr 6
/* 80215ADC 00212A1C  4B E1 4B 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215AE0:
/* 80215AE0 00212A20  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215AE4 00212A24  80 19 00 04 */	lwz r0, 4(r25)
/* 80215AE8 00212A28  28 00 00 00 */	cmplwi r0, 0
/* 80215AEC 00212A2C  40 82 00 18 */	bne .L_80215B04
/* 80215AF0 00212A30  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215AF4 00212A34  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215AF8 00212A38  38 80 00 C7 */	li r4, 0xc7
/* 80215AFC 00212A3C  4C C6 31 82 */	crclr 6
/* 80215B00 00212A40  4B E1 4B 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215B04:
/* 80215B04 00212A44  80 79 00 04 */	lwz r3, 4(r25)
/* 80215B08 00212A48  80 63 00 04 */	lwz r3, 4(r3)
/* 80215B0C 00212A4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215B10 00212A50  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80215B14 00212A54  7D 89 03 A6 */	mtctr r12
/* 80215B18 00212A58  4E 80 04 21 */	bctrl 
/* 80215B1C 00212A5C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215B20 00212A60  28 00 00 00 */	cmplwi r0, 0
/* 80215B24 00212A64  40 82 00 18 */	bne .L_80215B3C
/* 80215B28 00212A68  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215B2C 00212A6C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215B30 00212A70  38 80 01 D3 */	li r4, 0x1d3
/* 80215B34 00212A74  4C C6 31 82 */	crclr 6
/* 80215B38 00212A78  4B E1 4B 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215B3C:
/* 80215B3C 00212A7C  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215B40 00212A80  80 19 00 04 */	lwz r0, 4(r25)
/* 80215B44 00212A84  28 00 00 00 */	cmplwi r0, 0
/* 80215B48 00212A88  40 82 00 18 */	bne .L_80215B60
/* 80215B4C 00212A8C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215B50 00212A90  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215B54 00212A94  38 80 00 C7 */	li r4, 0xc7
/* 80215B58 00212A98  4C C6 31 82 */	crclr 6
/* 80215B5C 00212A9C  4B E1 4A E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215B60:
/* 80215B60 00212AA0  80 79 00 04 */	lwz r3, 4(r25)
/* 80215B64 00212AA4  80 63 00 04 */	lwz r3, 4(r3)
/* 80215B68 00212AA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80215B6C 00212AAC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80215B70 00212AB0  7D 89 03 A6 */	mtctr r12
/* 80215B74 00212AB4  4E 80 04 21 */	bctrl 
/* 80215B78 00212AB8  48 12 B1 35 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80215B7C:
/* 80215B7C 00212ABC  7F 83 E3 78 */	mr r3, r28
/* 80215B80 00212AC0  38 9E 02 84 */	addi r4, r30, 0x284
/* 80215B84 00212AC4  48 21 BD 49 */	bl is__Q24Game11MovieConfigFPc
/* 80215B88 00212AC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215B8C 00212ACC  41 82 00 34 */	beq .L_80215BC0
/* 80215B90 00212AD0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215B94 00212AD4  38 80 00 00 */	li r4, 0
/* 80215B98 00212AD8  4B FD 18 49 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80215B9C 00212ADC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215BA0 00212AE0  40 82 00 20 */	bne .L_80215BC0
/* 80215BA4 00212AE4  7F 63 DB 78 */	mr r3, r27
/* 80215BA8 00212AE8  C0 22 BC 78 */	lfs f1, lbl_80519FD8@sda21(r2)
/* 80215BAC 00212AEC  81 9B 00 00 */	lwz r12, 0(r27)
/* 80215BB0 00212AF0  38 80 00 01 */	li r4, 1
/* 80215BB4 00212AF4  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 80215BB8 00212AF8  7D 89 03 A6 */	mtctr r12
/* 80215BBC 00212AFC  4E 80 04 21 */	bctrl 
.L_80215BC0:
/* 80215BC0 00212B00  7F 83 E3 78 */	mr r3, r28
/* 80215BC4 00212B04  38 9E 02 64 */	addi r4, r30, 0x264
/* 80215BC8 00212B08  48 21 BD 05 */	bl is__Q24Game11MovieConfigFPc
/* 80215BCC 00212B0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215BD0 00212B10  41 82 00 54 */	beq .L_80215C24
/* 80215BD4 00212B14  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80215BD8 00212B18  41 82 00 20 */	beq .L_80215BF8
/* 80215BDC 00212B1C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80215BE0 00212B20  4B FD 32 7D */	bl getRepayLevel__Q24Game8PlayDataFv
/* 80215BE4 00212B24  2C 03 00 09 */	cmpwi r3, 9
/* 80215BE8 00212B28  40 82 00 10 */	bne .L_80215BF8
/* 80215BEC 00212B2C  7F 43 D3 78 */	mr r3, r26
/* 80215BF0 00212B30  48 00 16 E1 */	bl startRepayDemo__Q34Game10SingleGame9GameStateFv
/* 80215BF4 00212B34  48 00 16 54 */	b .L_80217248
.L_80215BF8:
/* 80215BF8 00212B38  38 00 00 00 */	li r0, 0
/* 80215BFC 00212B3C  7F 43 D3 78 */	mr r3, r26
/* 80215C00 00212B40  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80215C04 00212B44  7F 64 DB 78 */	mr r4, r27
/* 80215C08 00212B48  38 C1 00 10 */	addi r6, r1, 0x10
/* 80215C0C 00212B4C  38 A0 00 05 */	li r5, 5
/* 80215C10 00212B50  81 9A 00 00 */	lwz r12, 0(r26)
/* 80215C14 00212B54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215C18 00212B58  7D 89 03 A6 */	mtctr r12
/* 80215C1C 00212B5C  4E 80 04 21 */	bctrl 
/* 80215C20 00212B60  48 00 16 28 */	b .L_80217248
.L_80215C24:
/* 80215C24 00212B64  7F 83 E3 78 */	mr r3, r28
/* 80215C28 00212B68  38 9E 00 1C */	addi r4, r30, 0x1c
/* 80215C2C 00212B6C  48 21 BC A1 */	bl is__Q24Game11MovieConfigFPc
/* 80215C30 00212B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215C34 00212B74  40 82 00 18 */	bne .L_80215C4C
/* 80215C38 00212B78  7F 83 E3 78 */	mr r3, r28
/* 80215C3C 00212B7C  38 9E 02 50 */	addi r4, r30, 0x250
/* 80215C40 00212B80  48 21 BC 8D */	bl is__Q24Game11MovieConfigFPc
/* 80215C44 00212B84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215C48 00212B88  41 82 02 74 */	beq .L_80215EBC
.L_80215C4C:
/* 80215C4C 00212B8C  7F 83 E3 78 */	mr r3, r28
/* 80215C50 00212B90  38 9E 00 1C */	addi r4, r30, 0x1c
/* 80215C54 00212B94  48 21 BC 79 */	bl is__Q24Game11MovieConfigFPc
/* 80215C58 00212B98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215C5C 00212B9C  41 82 00 1C */	beq .L_80215C78
/* 80215C60 00212BA0  80 7B 02 44 */	lwz r3, 0x244(r27)
/* 80215C64 00212BA4  38 80 00 00 */	li r4, 0
/* 80215C68 00212BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80215C6C 00212BAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80215C70 00212BB0  7D 89 03 A6 */	mtctr r12
/* 80215C74 00212BB4  4E 80 04 21 */	bctrl 
.L_80215C78:
/* 80215C78 00212BB8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80215C7C 00212BBC  39 80 00 00 */	li r12, 0
/* 80215C80 00212BC0  3B E3 11 48 */	addi r31, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80215C84 00212BC4  39 00 00 01 */	li r8, 1
/* 80215C88 00212BC8  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80215C8C 00212BCC  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80215C90 00212BD0  38 C0 00 0A */	li r6, 0xa
/* 80215C94 00212BD4  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80215C98 00212BD8  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80215C9C 00212BDC  38 E0 00 02 */	li r7, 2
/* 80215CA0 00212BE0  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80215CA4 00212BE4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80215CA8 00212BE8  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80215CAC 00212BEC  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80215CB0 00212BF0  39 40 04 D2 */	li r10, 0x4d2
/* 80215CB4 00212BF4  39 20 00 32 */	li r9, 0x32
/* 80215CB8 00212BF8  93 E1 04 D4 */	stw r31, 0x4d4(r1)
/* 80215CBC 00212BFC  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80215CC0 00212C00  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80215CC4 00212C04  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80215CC8 00212C08  93 E1 05 3C */	stw r31, 0x53c(r1)
/* 80215CCC 00212C0C  38 81 04 D4 */	addi r4, r1, 0x4d4
/* 80215CD0 00212C10  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80215CD4 00212C14  93 E1 05 4C */	stw r31, 0x54c(r1)
/* 80215CD8 00212C18  91 81 04 D8 */	stw r12, 0x4d8(r1)
/* 80215CDC 00212C1C  91 61 04 D4 */	stw r11, 0x4d4(r1)
/* 80215CE0 00212C20  D0 81 04 DC */	stfs f4, 0x4dc(r1)
/* 80215CE4 00212C24  91 81 04 E0 */	stw r12, 0x4e0(r1)
/* 80215CE8 00212C28  91 81 04 E8 */	stw r12, 0x4e8(r1)
/* 80215CEC 00212C2C  91 41 04 E4 */	stw r10, 0x4e4(r1)
/* 80215CF0 00212C30  91 21 04 EC */	stw r9, 0x4ec(r1)
/* 80215CF4 00212C34  99 81 04 F0 */	stb r12, 0x4f0(r1)
/* 80215CF8 00212C38  91 81 04 F4 */	stw r12, 0x4f4(r1)
/* 80215CFC 00212C3C  D0 61 04 F8 */	stfs f3, 0x4f8(r1)
/* 80215D00 00212C40  91 01 04 FC */	stw r8, 0x4fc(r1)
/* 80215D04 00212C44  90 E1 05 00 */	stw r7, 0x500(r1)
/* 80215D08 00212C48  90 C1 05 04 */	stw r6, 0x504(r1)
/* 80215D0C 00212C4C  90 C1 05 08 */	stw r6, 0x508(r1)
/* 80215D10 00212C50  99 01 05 0C */	stb r8, 0x50c(r1)
/* 80215D14 00212C54  D0 61 05 10 */	stfs f3, 0x510(r1)
/* 80215D18 00212C58  91 01 05 14 */	stw r8, 0x514(r1)
/* 80215D1C 00212C5C  90 E1 05 18 */	stw r7, 0x518(r1)
/* 80215D20 00212C60  90 C1 05 1C */	stw r6, 0x51c(r1)
/* 80215D24 00212C64  90 C1 05 20 */	stw r6, 0x520(r1)
/* 80215D28 00212C68  99 01 05 24 */	stb r8, 0x524(r1)
/* 80215D2C 00212C6C  91 81 05 40 */	stw r12, 0x540(r1)
/* 80215D30 00212C70  90 A1 05 3C */	stw r5, 0x53c(r1)
/* 80215D34 00212C74  D0 41 05 48 */	stfs f2, 0x548(r1)
/* 80215D38 00212C78  D0 41 05 44 */	stfs f2, 0x544(r1)
/* 80215D3C 00212C7C  91 81 05 50 */	stw r12, 0x550(r1)
/* 80215D40 00212C80  90 01 05 4C */	stw r0, 0x54c(r1)
/* 80215D44 00212C84  D0 21 05 58 */	stfs f1, 0x558(r1)
/* 80215D48 00212C88  D0 21 05 54 */	stfs f1, 0x554(r1)
/* 80215D4C 00212C8C  99 81 05 32 */	stb r12, 0x532(r1)
/* 80215D50 00212C90  D0 01 05 28 */	stfs f0, 0x528(r1)
/* 80215D54 00212C94  99 81 05 30 */	stb r12, 0x530(r1)
/* 80215D58 00212C98  99 01 05 31 */	stb r8, 0x531(r1)
/* 80215D5C 00212C9C  91 01 05 2C */	stw r8, 0x52c(r1)
/* 80215D60 00212CA0  99 81 05 33 */	stb r12, 0x533(r1)
/* 80215D64 00212CA4  99 81 05 34 */	stb r12, 0x534(r1)
/* 80215D68 00212CA8  99 81 05 35 */	stb r12, 0x535(r1)
/* 80215D6C 00212CAC  99 81 05 36 */	stb r12, 0x536(r1)
/* 80215D70 00212CB0  99 81 05 37 */	stb r12, 0x537(r1)
/* 80215D74 00212CB4  99 81 05 38 */	stb r12, 0x538(r1)
/* 80215D78 00212CB8  48 1E 63 91 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 80215D7C 00212CBC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215D80 00212CC0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215D84 00212CC4  60 00 00 02 */	ori r0, r0, 2
/* 80215D88 00212CC8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80215D8C 00212CCC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215D90 00212CD0  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80215D94 00212CD4  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80215D98 00212CD8  28 00 00 00 */	cmplwi r0, 0
/* 80215D9C 00212CDC  41 82 00 64 */	beq .L_80215E00
/* 80215DA0 00212CE0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215DA4 00212CE4  28 00 00 00 */	cmplwi r0, 0
/* 80215DA8 00212CE8  40 82 00 18 */	bne .L_80215DC0
/* 80215DAC 00212CEC  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215DB0 00212CF0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215DB4 00212CF4  38 80 01 D3 */	li r4, 0x1d3
/* 80215DB8 00212CF8  4C C6 31 82 */	crclr 6
/* 80215DBC 00212CFC  4B E1 48 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215DC0:
/* 80215DC0 00212D00  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215DC4 00212D04  80 19 00 04 */	lwz r0, 4(r25)
/* 80215DC8 00212D08  28 00 00 00 */	cmplwi r0, 0
/* 80215DCC 00212D0C  40 82 00 18 */	bne .L_80215DE4
/* 80215DD0 00212D10  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215DD4 00212D14  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215DD8 00212D18  38 80 00 C7 */	li r4, 0xc7
/* 80215DDC 00212D1C  4C C6 31 82 */	crclr 6
/* 80215DE0 00212D20  4B E1 48 61 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215DE4:
/* 80215DE4 00212D24  80 79 00 04 */	lwz r3, 4(r25)
/* 80215DE8 00212D28  80 63 00 04 */	lwz r3, 4(r3)
/* 80215DEC 00212D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215DF0 00212D30  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80215DF4 00212D34  7D 89 03 A6 */	mtctr r12
/* 80215DF8 00212D38  4E 80 04 21 */	bctrl 
/* 80215DFC 00212D3C  48 00 00 C0 */	b .L_80215EBC
.L_80215E00:
/* 80215E00 00212D40  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E04 00212D44  28 00 00 00 */	cmplwi r0, 0
/* 80215E08 00212D48  40 82 00 18 */	bne .L_80215E20
/* 80215E0C 00212D4C  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215E10 00212D50  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E14 00212D54  38 80 01 D3 */	li r4, 0x1d3
/* 80215E18 00212D58  4C C6 31 82 */	crclr 6
/* 80215E1C 00212D5C  4B E1 48 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215E20:
/* 80215E20 00212D60  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E24 00212D64  80 19 00 04 */	lwz r0, 4(r25)
/* 80215E28 00212D68  28 00 00 00 */	cmplwi r0, 0
/* 80215E2C 00212D6C  40 82 00 18 */	bne .L_80215E44
/* 80215E30 00212D70  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215E34 00212D74  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E38 00212D78  38 80 00 C7 */	li r4, 0xc7
/* 80215E3C 00212D7C  4C C6 31 82 */	crclr 6
/* 80215E40 00212D80  4B E1 48 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215E44:
/* 80215E44 00212D84  80 79 00 04 */	lwz r3, 4(r25)
/* 80215E48 00212D88  80 63 00 04 */	lwz r3, 4(r3)
/* 80215E4C 00212D8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215E50 00212D90  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80215E54 00212D94  7D 89 03 A6 */	mtctr r12
/* 80215E58 00212D98  4E 80 04 21 */	bctrl 
/* 80215E5C 00212D9C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E60 00212DA0  28 00 00 00 */	cmplwi r0, 0
/* 80215E64 00212DA4  40 82 00 18 */	bne .L_80215E7C
/* 80215E68 00212DA8  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80215E6C 00212DAC  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E70 00212DB0  38 80 01 D3 */	li r4, 0x1d3
/* 80215E74 00212DB4  4C C6 31 82 */	crclr 6
/* 80215E78 00212DB8  4B E1 47 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215E7C:
/* 80215E7C 00212DBC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80215E80 00212DC0  80 19 00 04 */	lwz r0, 4(r25)
/* 80215E84 00212DC4  28 00 00 00 */	cmplwi r0, 0
/* 80215E88 00212DC8  40 82 00 18 */	bne .L_80215EA0
/* 80215E8C 00212DCC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80215E90 00212DD0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80215E94 00212DD4  38 80 00 C7 */	li r4, 0xc7
/* 80215E98 00212DD8  4C C6 31 82 */	crclr 6
/* 80215E9C 00212DDC  4B E1 47 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80215EA0:
/* 80215EA0 00212DE0  80 79 00 04 */	lwz r3, 4(r25)
/* 80215EA4 00212DE4  80 63 00 04 */	lwz r3, 4(r3)
/* 80215EA8 00212DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80215EAC 00212DEC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80215EB0 00212DF0  7D 89 03 A6 */	mtctr r12
/* 80215EB4 00212DF4  4E 80 04 21 */	bctrl 
/* 80215EB8 00212DF8  48 12 AD F5 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80215EBC:
/* 80215EBC 00212DFC  7F 83 E3 78 */	mr r3, r28
/* 80215EC0 00212E00  38 9E 00 1C */	addi r4, r30, 0x1c
/* 80215EC4 00212E04  48 21 BA 09 */	bl is__Q24Game11MovieConfigFPc
/* 80215EC8 00212E08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215ECC 00212E0C  41 82 00 90 */	beq .L_80215F5C
/* 80215ED0 00212E10  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80215ED4 00212E14  38 80 00 01 */	li r4, 1
/* 80215ED8 00212E18  81 83 00 00 */	lwz r12, 0(r3)
/* 80215EDC 00212E1C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80215EE0 00212E20  7D 89 03 A6 */	mtctr r12
/* 80215EE4 00212E24  4E 80 04 21 */	bctrl 
/* 80215EE8 00212E28  C0 22 BC 8C */	lfs f1, lbl_80519FEC@sda21(r2)
/* 80215EEC 00212E2C  7C 79 1B 78 */	mr r25, r3
/* 80215EF0 00212E30  C0 42 BC 90 */	lfs f2, lbl_80519FF0@sda21(r2)
/* 80215EF4 00212E34  C0 02 BC 94 */	lfs f0, lbl_80519FF4@sda21(r2)
/* 80215EF8 00212E38  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 80215EFC 00212E3C  C0 22 BC 98 */	lfs f1, lbl_80519FF8@sda21(r2)
/* 80215F00 00212E40  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 80215F04 00212E44  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80215F08 00212E48  48 1F BC C9 */	bl roundAng__Ff
/* 80215F0C 00212E4C  D0 39 01 FC */	stfs f1, 0x1fc(r25)
/* 80215F10 00212E50  38 81 00 4C */	addi r4, r1, 0x4c
/* 80215F14 00212E54  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80215F18 00212E58  81 83 00 04 */	lwz r12, 4(r3)
/* 80215F1C 00212E5C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80215F20 00212E60  7D 89 03 A6 */	mtctr r12
/* 80215F24 00212E64  4E 80 04 21 */	bctrl 
/* 80215F28 00212E68  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80215F2C 00212E6C  7F 23 CB 78 */	mr r3, r25
/* 80215F30 00212E70  38 81 00 4C */	addi r4, r1, 0x4c
/* 80215F34 00212E74  38 A0 00 00 */	li r5, 0
/* 80215F38 00212E78  4B F2 52 71 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80215F3C 00212E7C  80 79 02 70 */	lwz r3, 0x270(r25)
/* 80215F40 00212E80  7F 24 CB 78 */	mr r4, r25
/* 80215F44 00212E84  38 A0 00 00 */	li r5, 0
/* 80215F48 00212E88  38 C0 00 00 */	li r6, 0
/* 80215F4C 00212E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80215F50 00212E90  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80215F54 00212E94  7D 89 03 A6 */	mtctr r12
/* 80215F58 00212E98  4E 80 04 21 */	bctrl 
.L_80215F5C:
/* 80215F5C 00212E9C  7F 83 E3 78 */	mr r3, r28
/* 80215F60 00212EA0  38 9E 02 98 */	addi r4, r30, 0x298
/* 80215F64 00212EA4  48 21 B9 69 */	bl is__Q24Game11MovieConfigFPc
/* 80215F68 00212EA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80215F6C 00212EAC  41 82 02 C8 */	beq .L_80216234
/* 80215F70 00212EB0  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 80215F74 00212EB4  28 00 00 00 */	cmplwi r0, 0
/* 80215F78 00212EB8  41 82 00 60 */	beq .L_80215FD8
/* 80215F7C 00212EBC  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 80215F80 00212EC0  38 7E 02 70 */	addi r3, r30, 0x270
/* 80215F84 00212EC4  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 80215F88 00212EC8  38 00 00 00 */	li r0, 0
/* 80215F8C 00212ECC  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80215F90 00212ED0  38 81 01 5C */	addi r4, r1, 0x15c
/* 80215F94 00212ED4  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80215F98 00212ED8  90 61 01 5C */	stw r3, 0x15c(r1)
/* 80215F9C 00212EDC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80215FA0 00212EE0  90 C1 01 60 */	stw r6, 0x160(r1)
/* 80215FA4 00212EE4  90 A1 01 68 */	stw r5, 0x168(r1)
/* 80215FA8 00212EE8  D0 01 01 74 */	stfs f0, 0x174(r1)
/* 80215FAC 00212EEC  D0 01 01 78 */	stfs f0, 0x178(r1)
/* 80215FB0 00212EF0  D0 01 01 7C */	stfs f0, 0x17c(r1)
/* 80215FB4 00212EF4  D0 01 01 80 */	stfs f0, 0x180(r1)
/* 80215FB8 00212EF8  90 01 01 84 */	stw r0, 0x184(r1)
/* 80215FBC 00212EFC  90 01 01 6C */	stw r0, 0x16c(r1)
/* 80215FC0 00212F00  90 01 01 64 */	stw r0, 0x164(r1)
/* 80215FC4 00212F04  90 01 01 88 */	stw r0, 0x188(r1)
/* 80215FC8 00212F08  90 01 01 70 */	stw r0, 0x170(r1)
/* 80215FCC 00212F0C  90 01 01 8C */	stw r0, 0x18c(r1)
/* 80215FD0 00212F10  48 21 6A 01 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80215FD4 00212F14  48 00 12 74 */	b .L_80217248
.L_80215FD8:
/* 80215FD8 00212F18  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215FDC 00212F1C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80215FE0 00212F20  60 00 00 02 */	ori r0, r0, 2
/* 80215FE4 00212F24  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80215FE8 00212F28  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80215FEC 00212F2C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80215FF0 00212F30  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80215FF4 00212F34  28 00 00 00 */	cmplwi r0, 0
/* 80215FF8 00212F38  41 82 00 64 */	beq .L_8021605C
/* 80215FFC 00212F3C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216000 00212F40  28 00 00 00 */	cmplwi r0, 0
/* 80216004 00212F44  40 82 00 18 */	bne .L_8021601C
/* 80216008 00212F48  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 8021600C 00212F4C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216010 00212F50  38 80 01 D3 */	li r4, 0x1d3
/* 80216014 00212F54  4C C6 31 82 */	crclr 6
/* 80216018 00212F58  4B E1 46 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021601C:
/* 8021601C 00212F5C  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216020 00212F60  80 19 00 04 */	lwz r0, 4(r25)
/* 80216024 00212F64  28 00 00 00 */	cmplwi r0, 0
/* 80216028 00212F68  40 82 00 18 */	bne .L_80216040
/* 8021602C 00212F6C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216030 00212F70  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216034 00212F74  38 80 00 C7 */	li r4, 0xc7
/* 80216038 00212F78  4C C6 31 82 */	crclr 6
/* 8021603C 00212F7C  4B E1 46 05 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216040:
/* 80216040 00212F80  80 79 00 04 */	lwz r3, 4(r25)
/* 80216044 00212F84  80 63 00 04 */	lwz r3, 4(r3)
/* 80216048 00212F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8021604C 00212F8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216050 00212F90  7D 89 03 A6 */	mtctr r12
/* 80216054 00212F94  4E 80 04 21 */	bctrl 
/* 80216058 00212F98  48 00 00 C0 */	b .L_80216118
.L_8021605C:
/* 8021605C 00212F9C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216060 00212FA0  28 00 00 00 */	cmplwi r0, 0
/* 80216064 00212FA4  40 82 00 18 */	bne .L_8021607C
/* 80216068 00212FA8  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 8021606C 00212FAC  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216070 00212FB0  38 80 01 D3 */	li r4, 0x1d3
/* 80216074 00212FB4  4C C6 31 82 */	crclr 6
/* 80216078 00212FB8  4B E1 45 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021607C:
/* 8021607C 00212FBC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216080 00212FC0  80 19 00 04 */	lwz r0, 4(r25)
/* 80216084 00212FC4  28 00 00 00 */	cmplwi r0, 0
/* 80216088 00212FC8  40 82 00 18 */	bne .L_802160A0
/* 8021608C 00212FCC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216090 00212FD0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216094 00212FD4  38 80 00 C7 */	li r4, 0xc7
/* 80216098 00212FD8  4C C6 31 82 */	crclr 6
/* 8021609C 00212FDC  4B E1 45 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802160A0:
/* 802160A0 00212FE0  80 79 00 04 */	lwz r3, 4(r25)
/* 802160A4 00212FE4  80 63 00 04 */	lwz r3, 4(r3)
/* 802160A8 00212FE8  81 83 00 00 */	lwz r12, 0(r3)
/* 802160AC 00212FEC  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 802160B0 00212FF0  7D 89 03 A6 */	mtctr r12
/* 802160B4 00212FF4  4E 80 04 21 */	bctrl 
/* 802160B8 00212FF8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802160BC 00212FFC  28 00 00 00 */	cmplwi r0, 0
/* 802160C0 00213000  40 82 00 18 */	bne .L_802160D8
/* 802160C4 00213004  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 802160C8 00213008  38 BE 00 94 */	addi r5, r30, 0x94
/* 802160CC 0021300C  38 80 01 D3 */	li r4, 0x1d3
/* 802160D0 00213010  4C C6 31 82 */	crclr 6
/* 802160D4 00213014  4B E1 45 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802160D8:
/* 802160D8 00213018  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802160DC 0021301C  80 19 00 04 */	lwz r0, 4(r25)
/* 802160E0 00213020  28 00 00 00 */	cmplwi r0, 0
/* 802160E4 00213024  40 82 00 18 */	bne .L_802160FC
/* 802160E8 00213028  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802160EC 0021302C  38 BE 00 94 */	addi r5, r30, 0x94
/* 802160F0 00213030  38 80 00 C7 */	li r4, 0xc7
/* 802160F4 00213034  4C C6 31 82 */	crclr 6
/* 802160F8 00213038  4B E1 45 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802160FC:
/* 802160FC 0021303C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216100 00213040  80 63 00 04 */	lwz r3, 4(r3)
/* 80216104 00213044  81 83 00 00 */	lwz r12, 0(r3)
/* 80216108 00213048  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8021610C 0021304C  7D 89 03 A6 */	mtctr r12
/* 80216110 00213050  4E 80 04 21 */	bctrl 
/* 80216114 00213054  48 12 AB 99 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80216118:
/* 80216118 00213058  7F 43 D3 78 */	mr r3, r26
/* 8021611C 0021305C  7F 64 DB 78 */	mr r4, r27
/* 80216120 00213060  4B FF DD 3D */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 80216124 00213064  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216128 00213068  40 82 11 20 */	bne .L_80217248
/* 8021612C 0021306C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80216130 00213070  39 80 00 00 */	li r12, 0
/* 80216134 00213074  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216138 00213078  39 00 00 01 */	li r8, 1
/* 8021613C 0021307C  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80216140 00213080  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80216144 00213084  38 C0 00 0A */	li r6, 0xa
/* 80216148 00213088  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 8021614C 0021308C  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216150 00213090  38 E0 00 02 */	li r7, 2
/* 80216154 00213094  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216158 00213098  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 8021615C 0021309C  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80216160 002130A0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80216164 002130A4  39 40 04 D2 */	li r10, 0x4d2
/* 80216168 002130A8  39 20 00 32 */	li r9, 0x32
/* 8021616C 002130AC  93 41 04 4C */	stw r26, 0x44c(r1)
/* 80216170 002130B0  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80216174 002130B4  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80216178 002130B8  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 8021617C 002130BC  93 41 04 B4 */	stw r26, 0x4b4(r1)
/* 80216180 002130C0  38 81 04 4C */	addi r4, r1, 0x44c
/* 80216184 002130C4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216188 002130C8  93 41 04 C4 */	stw r26, 0x4c4(r1)
/* 8021618C 002130CC  91 81 04 50 */	stw r12, 0x450(r1)
/* 80216190 002130D0  91 61 04 4C */	stw r11, 0x44c(r1)
/* 80216194 002130D4  D0 81 04 54 */	stfs f4, 0x454(r1)
/* 80216198 002130D8  91 81 04 58 */	stw r12, 0x458(r1)
/* 8021619C 002130DC  91 81 04 60 */	stw r12, 0x460(r1)
/* 802161A0 002130E0  91 41 04 5C */	stw r10, 0x45c(r1)
/* 802161A4 002130E4  91 21 04 64 */	stw r9, 0x464(r1)
/* 802161A8 002130E8  99 81 04 68 */	stb r12, 0x468(r1)
/* 802161AC 002130EC  91 81 04 6C */	stw r12, 0x46c(r1)
/* 802161B0 002130F0  D0 61 04 70 */	stfs f3, 0x470(r1)
/* 802161B4 002130F4  91 01 04 74 */	stw r8, 0x474(r1)
/* 802161B8 002130F8  90 E1 04 78 */	stw r7, 0x478(r1)
/* 802161BC 002130FC  90 C1 04 7C */	stw r6, 0x47c(r1)
/* 802161C0 00213100  90 C1 04 80 */	stw r6, 0x480(r1)
/* 802161C4 00213104  99 01 04 84 */	stb r8, 0x484(r1)
/* 802161C8 00213108  D0 61 04 88 */	stfs f3, 0x488(r1)
/* 802161CC 0021310C  91 01 04 8C */	stw r8, 0x48c(r1)
/* 802161D0 00213110  90 E1 04 90 */	stw r7, 0x490(r1)
/* 802161D4 00213114  90 C1 04 94 */	stw r6, 0x494(r1)
/* 802161D8 00213118  90 C1 04 98 */	stw r6, 0x498(r1)
/* 802161DC 0021311C  99 01 04 9C */	stb r8, 0x49c(r1)
/* 802161E0 00213120  91 81 04 B8 */	stw r12, 0x4b8(r1)
/* 802161E4 00213124  90 A1 04 B4 */	stw r5, 0x4b4(r1)
/* 802161E8 00213128  D0 41 04 C0 */	stfs f2, 0x4c0(r1)
/* 802161EC 0021312C  D0 41 04 BC */	stfs f2, 0x4bc(r1)
/* 802161F0 00213130  91 81 04 C8 */	stw r12, 0x4c8(r1)
/* 802161F4 00213134  90 01 04 C4 */	stw r0, 0x4c4(r1)
/* 802161F8 00213138  D0 21 04 D0 */	stfs f1, 0x4d0(r1)
/* 802161FC 0021313C  D0 21 04 CC */	stfs f1, 0x4cc(r1)
/* 80216200 00213140  99 81 04 AA */	stb r12, 0x4aa(r1)
/* 80216204 00213144  D0 01 04 A0 */	stfs f0, 0x4a0(r1)
/* 80216208 00213148  99 81 04 A8 */	stb r12, 0x4a8(r1)
/* 8021620C 0021314C  99 01 04 A9 */	stb r8, 0x4a9(r1)
/* 80216210 00213150  91 01 04 A4 */	stw r8, 0x4a4(r1)
/* 80216214 00213154  99 81 04 AB */	stb r12, 0x4ab(r1)
/* 80216218 00213158  99 81 04 AC */	stb r12, 0x4ac(r1)
/* 8021621C 0021315C  99 81 04 AD */	stb r12, 0x4ad(r1)
/* 80216220 00213160  99 81 04 AE */	stb r12, 0x4ae(r1)
/* 80216224 00213164  99 81 04 AF */	stb r12, 0x4af(r1)
/* 80216228 00213168  99 81 04 B0 */	stb r12, 0x4b0(r1)
/* 8021622C 0021316C  48 1E 5E DD */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 80216230 00213170  48 00 10 18 */	b .L_80217248
.L_80216234:
/* 80216234 00213174  7F 83 E3 78 */	mr r3, r28
/* 80216238 00213178  38 9E 00 B0 */	addi r4, r30, 0xb0
/* 8021623C 0021317C  48 21 B6 91 */	bl is__Q24Game11MovieConfigFPc
/* 80216240 00213180  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216244 00213184  40 82 00 40 */	bne .L_80216284
/* 80216248 00213188  7F 83 E3 78 */	mr r3, r28
/* 8021624C 0021318C  38 9E 00 2C */	addi r4, r30, 0x2c
/* 80216250 00213190  48 21 B6 7D */	bl is__Q24Game11MovieConfigFPc
/* 80216254 00213194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216258 00213198  40 82 00 2C */	bne .L_80216284
/* 8021625C 0021319C  7F 83 E3 78 */	mr r3, r28
/* 80216260 002131A0  38 9E 00 40 */	addi r4, r30, 0x40
/* 80216264 002131A4  48 21 B6 69 */	bl is__Q24Game11MovieConfigFPc
/* 80216268 002131A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021626C 002131AC  40 82 00 18 */	bne .L_80216284
/* 80216270 002131B0  7F 83 E3 78 */	mr r3, r28
/* 80216274 002131B4  38 9E 00 58 */	addi r4, r30, 0x58
/* 80216278 002131B8  48 21 B6 55 */	bl is__Q24Game11MovieConfigFPc
/* 8021627C 002131BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216280 002131C0  41 82 03 6C */	beq .L_802165EC
.L_80216284:
/* 80216284 002131C4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216288 002131C8  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 8021628C 002131CC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80216290 002131D0  41 82 00 8C */	beq .L_8021631C
/* 80216294 002131D4  38 80 00 16 */	li r4, 0x16
/* 80216298 002131D8  4B FD 11 49 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 8021629C 002131DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802162A0 002131E0  40 82 00 7C */	bne .L_8021631C
/* 802162A4 002131E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802162A8 002131E8  38 80 00 16 */	li r4, 0x16
/* 802162AC 002131EC  4B FD 10 F9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 802162B0 002131F0  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 802162B4 002131F4  38 7E 02 98 */	addi r3, r30, 0x298
/* 802162B8 002131F8  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 802162BC 002131FC  38 00 00 00 */	li r0, 0
/* 802162C0 00213200  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802162C4 00213204  38 81 01 28 */	addi r4, r1, 0x128
/* 802162C8 00213208  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802162CC 0021320C  90 61 01 28 */	stw r3, 0x128(r1)
/* 802162D0 00213210  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802162D4 00213214  90 C1 01 2C */	stw r6, 0x12c(r1)
/* 802162D8 00213218  90 A1 01 34 */	stw r5, 0x134(r1)
/* 802162DC 0021321C  D0 01 01 40 */	stfs f0, 0x140(r1)
/* 802162E0 00213220  D0 01 01 44 */	stfs f0, 0x144(r1)
/* 802162E4 00213224  D0 01 01 48 */	stfs f0, 0x148(r1)
/* 802162E8 00213228  D0 01 01 4C */	stfs f0, 0x14c(r1)
/* 802162EC 0021322C  90 01 01 50 */	stw r0, 0x150(r1)
/* 802162F0 00213230  90 01 01 38 */	stw r0, 0x138(r1)
/* 802162F4 00213234  90 01 01 30 */	stw r0, 0x130(r1)
/* 802162F8 00213238  90 01 01 54 */	stw r0, 0x154(r1)
/* 802162FC 0021323C  90 01 01 3C */	stw r0, 0x13c(r1)
/* 80216300 00213240  90 01 01 58 */	stw r0, 0x158(r1)
/* 80216304 00213244  80 1B 00 CC */	lwz r0, 0xcc(r27)
/* 80216308 00213248  90 01 01 38 */	stw r0, 0x138(r1)
/* 8021630C 0021324C  48 21 66 C5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216310 00213250  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216314 00213254  48 1E 75 81 */	bl close_CourseName__Q26Screen9Game2DMgrFv
/* 80216318 00213258  48 00 0F 30 */	b .L_80217248
.L_8021631C:
/* 8021631C 0021325C  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 80216320 00213260  28 00 00 00 */	cmplwi r0, 0
/* 80216324 00213264  41 82 00 60 */	beq .L_80216384
/* 80216328 00213268  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 8021632C 0021326C  38 7E 02 70 */	addi r3, r30, 0x270
/* 80216330 00213270  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 80216334 00213274  38 00 00 00 */	li r0, 0
/* 80216338 00213278  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 8021633C 0021327C  38 81 00 F4 */	addi r4, r1, 0xf4
/* 80216340 00213280  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80216344 00213284  90 61 00 F4 */	stw r3, 0xf4(r1)
/* 80216348 00213288  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021634C 0021328C  90 C1 00 F8 */	stw r6, 0xf8(r1)
/* 80216350 00213290  90 A1 01 00 */	stw r5, 0x100(r1)
/* 80216354 00213294  D0 01 01 0C */	stfs f0, 0x10c(r1)
/* 80216358 00213298  D0 01 01 10 */	stfs f0, 0x110(r1)
/* 8021635C 0021329C  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 80216360 002132A0  D0 01 01 18 */	stfs f0, 0x118(r1)
/* 80216364 002132A4  90 01 01 1C */	stw r0, 0x11c(r1)
/* 80216368 002132A8  90 01 01 04 */	stw r0, 0x104(r1)
/* 8021636C 002132AC  90 01 00 FC */	stw r0, 0xfc(r1)
/* 80216370 002132B0  90 01 01 20 */	stw r0, 0x120(r1)
/* 80216374 002132B4  90 01 01 08 */	stw r0, 0x108(r1)
/* 80216378 002132B8  90 01 01 24 */	stw r0, 0x124(r1)
/* 8021637C 002132BC  48 21 66 55 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216380 002132C0  48 00 0E C8 */	b .L_80217248
.L_80216384:
/* 80216384 002132C4  7F 43 D3 78 */	mr r3, r26
/* 80216388 002132C8  7F 64 DB 78 */	mr r4, r27
/* 8021638C 002132CC  4B FF DA D1 */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 80216390 002132D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216394 002132D4  41 82 00 10 */	beq .L_802163A4
/* 80216398 002132D8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021639C 002132DC  48 1E 74 F9 */	bl close_CourseName__Q26Screen9Game2DMgrFv
/* 802163A0 002132E0  48 00 0E A8 */	b .L_80217248
.L_802163A4:
/* 802163A4 002132E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802163A8 002132E8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802163AC 002132EC  60 00 00 02 */	ori r0, r0, 2
/* 802163B0 002132F0  98 03 00 3C */	stb r0, 0x3c(r3)
/* 802163B4 002132F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802163B8 002132F8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 802163BC 002132FC  80 03 02 18 */	lwz r0, 0x218(r3)
/* 802163C0 00213300  28 00 00 00 */	cmplwi r0, 0
/* 802163C4 00213304  41 82 00 64 */	beq .L_80216428
/* 802163C8 00213308  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802163CC 0021330C  28 00 00 00 */	cmplwi r0, 0
/* 802163D0 00213310  40 82 00 18 */	bne .L_802163E8
/* 802163D4 00213314  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 802163D8 00213318  38 BE 00 94 */	addi r5, r30, 0x94
/* 802163DC 0021331C  38 80 01 D3 */	li r4, 0x1d3
/* 802163E0 00213320  4C C6 31 82 */	crclr 6
/* 802163E4 00213324  4B E1 42 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802163E8:
/* 802163E8 00213328  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802163EC 0021332C  80 19 00 04 */	lwz r0, 4(r25)
/* 802163F0 00213330  28 00 00 00 */	cmplwi r0, 0
/* 802163F4 00213334  40 82 00 18 */	bne .L_8021640C
/* 802163F8 00213338  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802163FC 0021333C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216400 00213340  38 80 00 C7 */	li r4, 0xc7
/* 80216404 00213344  4C C6 31 82 */	crclr 6
/* 80216408 00213348  4B E1 42 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021640C:
/* 8021640C 0021334C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216410 00213350  80 63 00 04 */	lwz r3, 4(r3)
/* 80216414 00213354  81 83 00 00 */	lwz r12, 0(r3)
/* 80216418 00213358  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8021641C 0021335C  7D 89 03 A6 */	mtctr r12
/* 80216420 00213360  4E 80 04 21 */	bctrl 
/* 80216424 00213364  48 00 00 C0 */	b .L_802164E4
.L_80216428:
/* 80216428 00213368  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8021642C 0021336C  28 00 00 00 */	cmplwi r0, 0
/* 80216430 00213370  40 82 00 18 */	bne .L_80216448
/* 80216434 00213374  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216438 00213378  38 BE 00 94 */	addi r5, r30, 0x94
/* 8021643C 0021337C  38 80 01 D3 */	li r4, 0x1d3
/* 80216440 00213380  4C C6 31 82 */	crclr 6
/* 80216444 00213384  4B E1 41 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216448:
/* 80216448 00213388  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 8021644C 0021338C  80 19 00 04 */	lwz r0, 4(r25)
/* 80216450 00213390  28 00 00 00 */	cmplwi r0, 0
/* 80216454 00213394  40 82 00 18 */	bne .L_8021646C
/* 80216458 00213398  38 7E 00 FC */	addi r3, r30, 0xfc
/* 8021645C 0021339C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216460 002133A0  38 80 00 C7 */	li r4, 0xc7
/* 80216464 002133A4  4C C6 31 82 */	crclr 6
/* 80216468 002133A8  4B E1 41 D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021646C:
/* 8021646C 002133AC  80 79 00 04 */	lwz r3, 4(r25)
/* 80216470 002133B0  80 63 00 04 */	lwz r3, 4(r3)
/* 80216474 002133B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80216478 002133B8  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 8021647C 002133BC  7D 89 03 A6 */	mtctr r12
/* 80216480 002133C0  4E 80 04 21 */	bctrl 
/* 80216484 002133C4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216488 002133C8  28 00 00 00 */	cmplwi r0, 0
/* 8021648C 002133CC  40 82 00 18 */	bne .L_802164A4
/* 80216490 002133D0  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216494 002133D4  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216498 002133D8  38 80 01 D3 */	li r4, 0x1d3
/* 8021649C 002133DC  4C C6 31 82 */	crclr 6
/* 802164A0 002133E0  4B E1 41 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802164A4:
/* 802164A4 002133E4  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802164A8 002133E8  80 19 00 04 */	lwz r0, 4(r25)
/* 802164AC 002133EC  28 00 00 00 */	cmplwi r0, 0
/* 802164B0 002133F0  40 82 00 18 */	bne .L_802164C8
/* 802164B4 002133F4  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802164B8 002133F8  38 BE 00 94 */	addi r5, r30, 0x94
/* 802164BC 002133FC  38 80 00 C7 */	li r4, 0xc7
/* 802164C0 00213400  4C C6 31 82 */	crclr 6
/* 802164C4 00213404  4B E1 41 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802164C8:
/* 802164C8 00213408  80 79 00 04 */	lwz r3, 4(r25)
/* 802164CC 0021340C  80 63 00 04 */	lwz r3, 4(r3)
/* 802164D0 00213410  81 83 00 00 */	lwz r12, 0(r3)
/* 802164D4 00213414  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802164D8 00213418  7D 89 03 A6 */	mtctr r12
/* 802164DC 0021341C  4E 80 04 21 */	bctrl 
/* 802164E0 00213420  48 12 A7 CD */	bl on__Q28PSSystem8EnvSeMgrFv
.L_802164E4:
/* 802164E4 00213424  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 802164E8 00213428  39 80 00 00 */	li r12, 0
/* 802164EC 0021342C  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 802164F0 00213430  39 00 00 01 */	li r8, 1
/* 802164F4 00213434  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 802164F8 00213438  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 802164FC 0021343C  38 C0 00 0A */	li r6, 0xa
/* 80216500 00213440  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80216504 00213444  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216508 00213448  38 E0 00 02 */	li r7, 2
/* 8021650C 0021344C  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216510 00213450  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80216514 00213454  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80216518 00213458  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 8021651C 0021345C  39 40 04 D2 */	li r10, 0x4d2
/* 80216520 00213460  39 20 00 32 */	li r9, 0x32
/* 80216524 00213464  93 41 03 C4 */	stw r26, 0x3c4(r1)
/* 80216528 00213468  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 8021652C 0021346C  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80216530 00213470  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80216534 00213474  93 41 04 2C */	stw r26, 0x42c(r1)
/* 80216538 00213478  38 81 03 C4 */	addi r4, r1, 0x3c4
/* 8021653C 0021347C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216540 00213480  93 41 04 3C */	stw r26, 0x43c(r1)
/* 80216544 00213484  91 81 03 C8 */	stw r12, 0x3c8(r1)
/* 80216548 00213488  91 61 03 C4 */	stw r11, 0x3c4(r1)
/* 8021654C 0021348C  D0 81 03 CC */	stfs f4, 0x3cc(r1)
/* 80216550 00213490  91 81 03 D0 */	stw r12, 0x3d0(r1)
/* 80216554 00213494  91 81 03 D8 */	stw r12, 0x3d8(r1)
/* 80216558 00213498  91 41 03 D4 */	stw r10, 0x3d4(r1)
/* 8021655C 0021349C  91 21 03 DC */	stw r9, 0x3dc(r1)
/* 80216560 002134A0  99 81 03 E0 */	stb r12, 0x3e0(r1)
/* 80216564 002134A4  91 81 03 E4 */	stw r12, 0x3e4(r1)
/* 80216568 002134A8  D0 61 03 E8 */	stfs f3, 0x3e8(r1)
/* 8021656C 002134AC  91 01 03 EC */	stw r8, 0x3ec(r1)
/* 80216570 002134B0  90 E1 03 F0 */	stw r7, 0x3f0(r1)
/* 80216574 002134B4  90 C1 03 F4 */	stw r6, 0x3f4(r1)
/* 80216578 002134B8  90 C1 03 F8 */	stw r6, 0x3f8(r1)
/* 8021657C 002134BC  99 01 03 FC */	stb r8, 0x3fc(r1)
/* 80216580 002134C0  D0 61 04 00 */	stfs f3, 0x400(r1)
/* 80216584 002134C4  91 01 04 04 */	stw r8, 0x404(r1)
/* 80216588 002134C8  90 E1 04 08 */	stw r7, 0x408(r1)
/* 8021658C 002134CC  90 C1 04 0C */	stw r6, 0x40c(r1)
/* 80216590 002134D0  90 C1 04 10 */	stw r6, 0x410(r1)
/* 80216594 002134D4  99 01 04 14 */	stb r8, 0x414(r1)
/* 80216598 002134D8  91 81 04 30 */	stw r12, 0x430(r1)
/* 8021659C 002134DC  90 A1 04 2C */	stw r5, 0x42c(r1)
/* 802165A0 002134E0  D0 41 04 38 */	stfs f2, 0x438(r1)
/* 802165A4 002134E4  D0 41 04 34 */	stfs f2, 0x434(r1)
/* 802165A8 002134E8  91 81 04 40 */	stw r12, 0x440(r1)
/* 802165AC 002134EC  90 01 04 3C */	stw r0, 0x43c(r1)
/* 802165B0 002134F0  D0 21 04 48 */	stfs f1, 0x448(r1)
/* 802165B4 002134F4  D0 21 04 44 */	stfs f1, 0x444(r1)
/* 802165B8 002134F8  99 81 04 22 */	stb r12, 0x422(r1)
/* 802165BC 002134FC  D0 01 04 18 */	stfs f0, 0x418(r1)
/* 802165C0 00213500  99 81 04 20 */	stb r12, 0x420(r1)
/* 802165C4 00213504  99 01 04 21 */	stb r8, 0x421(r1)
/* 802165C8 00213508  91 01 04 1C */	stw r8, 0x41c(r1)
/* 802165CC 0021350C  99 81 04 23 */	stb r12, 0x423(r1)
/* 802165D0 00213510  99 81 04 24 */	stb r12, 0x424(r1)
/* 802165D4 00213514  99 81 04 25 */	stb r12, 0x425(r1)
/* 802165D8 00213518  99 81 04 26 */	stb r12, 0x426(r1)
/* 802165DC 0021351C  99 81 04 27 */	stb r12, 0x427(r1)
/* 802165E0 00213520  99 81 04 28 */	stb r12, 0x428(r1)
/* 802165E4 00213524  48 1E 5B 25 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 802165E8 00213528  48 00 0C 60 */	b .L_80217248
.L_802165EC:
/* 802165EC 0021352C  7F 83 E3 78 */	mr r3, r28
/* 802165F0 00213530  38 9E 02 1C */	addi r4, r30, 0x21c
/* 802165F4 00213534  48 21 B2 D9 */	bl is__Q24Game11MovieConfigFPc
/* 802165F8 00213538  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802165FC 0021353C  41 82 00 54 */	beq .L_80216650
/* 80216600 00213540  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80216604 00213544  48 21 69 85 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 80216608 00213548  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8021660C 0021354C  38 80 00 00 */	li r4, 0
/* 80216610 00213550  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216614 00213554  3C 60 80 4C */	lis r3, __vt__Q32og6Screen14DispMemberSave@ha
/* 80216618 00213558  90 01 00 40 */	stw r0, 0x40(r1)
/* 8021661C 0021355C  38 63 04 E4 */	addi r3, r3, __vt__Q32og6Screen14DispMemberSave@l
/* 80216620 00213560  38 00 00 01 */	li r0, 1
/* 80216624 00213564  98 81 00 48 */	stb r4, 0x48(r1)
/* 80216628 00213568  90 81 00 44 */	stw r4, 0x44(r1)
/* 8021662C 0021356C  90 61 00 40 */	stw r3, 0x40(r1)
/* 80216630 00213570  98 01 00 48 */	stb r0, 0x48(r1)
/* 80216634 00213574  48 25 0E 05 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 80216638 00213578  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021663C 0021357C  38 81 00 40 */	addi r4, r1, 0x40
/* 80216640 00213580  48 1E 80 65 */	bl open_Save__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberSave
/* 80216644 00213584  38 00 00 01 */	li r0, 1
/* 80216648 00213588  98 1A 00 20 */	stb r0, 0x20(r26)
/* 8021664C 0021358C  48 00 0B FC */	b .L_80217248
.L_80216650:
/* 80216650 00213590  7F 83 E3 78 */	mr r3, r28
/* 80216654 00213594  38 9E 02 70 */	addi r4, r30, 0x270
/* 80216658 00213598  48 21 B2 75 */	bl is__Q24Game11MovieConfigFPc
/* 8021665C 0021359C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216660 002135A0  41 82 02 50 */	beq .L_802168B0
/* 80216664 002135A4  3B 60 00 00 */	li r27, 0
/* 80216668 002135A8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8021666C 002135AC  9B 7A 00 10 */	stb r27, 0x10(r26)
/* 80216670 002135B0  39 00 00 01 */	li r8, 1
/* 80216674 002135B4  39 83 11 48 */	addi r12, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216678 002135B8  38 C0 00 0A */	li r6, 0xa
/* 8021667C 002135BC  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80216680 002135C0  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80216684 002135C4  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80216688 002135C8  38 E0 00 02 */	li r7, 2
/* 8021668C 002135CC  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216690 002135D0  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80216694 002135D4  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216698 002135D8  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 8021669C 002135DC  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 802166A0 002135E0  39 40 04 D2 */	li r10, 0x4d2
/* 802166A4 002135E4  39 20 00 32 */	li r9, 0x32
/* 802166A8 002135E8  91 81 03 3C */	stw r12, 0x33c(r1)
/* 802166AC 002135EC  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 802166B0 002135F0  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 802166B4 002135F4  91 81 03 A4 */	stw r12, 0x3a4(r1)
/* 802166B8 002135F8  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 802166BC 002135FC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802166C0 00213600  38 81 03 3C */	addi r4, r1, 0x33c
/* 802166C4 00213604  91 81 03 B4 */	stw r12, 0x3b4(r1)
/* 802166C8 00213608  93 61 03 40 */	stw r27, 0x340(r1)
/* 802166CC 0021360C  91 61 03 3C */	stw r11, 0x33c(r1)
/* 802166D0 00213610  D0 81 03 44 */	stfs f4, 0x344(r1)
/* 802166D4 00213614  93 61 03 48 */	stw r27, 0x348(r1)
/* 802166D8 00213618  93 61 03 50 */	stw r27, 0x350(r1)
/* 802166DC 0021361C  91 41 03 4C */	stw r10, 0x34c(r1)
/* 802166E0 00213620  91 21 03 54 */	stw r9, 0x354(r1)
/* 802166E4 00213624  9B 61 03 58 */	stb r27, 0x358(r1)
/* 802166E8 00213628  93 61 03 5C */	stw r27, 0x35c(r1)
/* 802166EC 0021362C  D0 61 03 60 */	stfs f3, 0x360(r1)
/* 802166F0 00213630  91 01 03 64 */	stw r8, 0x364(r1)
/* 802166F4 00213634  90 E1 03 68 */	stw r7, 0x368(r1)
/* 802166F8 00213638  90 C1 03 6C */	stw r6, 0x36c(r1)
/* 802166FC 0021363C  90 C1 03 70 */	stw r6, 0x370(r1)
/* 80216700 00213640  99 01 03 74 */	stb r8, 0x374(r1)
/* 80216704 00213644  D0 61 03 78 */	stfs f3, 0x378(r1)
/* 80216708 00213648  91 01 03 7C */	stw r8, 0x37c(r1)
/* 8021670C 0021364C  90 E1 03 80 */	stw r7, 0x380(r1)
/* 80216710 00213650  90 C1 03 84 */	stw r6, 0x384(r1)
/* 80216714 00213654  90 C1 03 88 */	stw r6, 0x388(r1)
/* 80216718 00213658  99 01 03 8C */	stb r8, 0x38c(r1)
/* 8021671C 0021365C  93 61 03 A8 */	stw r27, 0x3a8(r1)
/* 80216720 00213660  90 A1 03 A4 */	stw r5, 0x3a4(r1)
/* 80216724 00213664  D0 41 03 B0 */	stfs f2, 0x3b0(r1)
/* 80216728 00213668  D0 41 03 AC */	stfs f2, 0x3ac(r1)
/* 8021672C 0021366C  93 61 03 B8 */	stw r27, 0x3b8(r1)
/* 80216730 00213670  90 01 03 B4 */	stw r0, 0x3b4(r1)
/* 80216734 00213674  D0 21 03 C0 */	stfs f1, 0x3c0(r1)
/* 80216738 00213678  D0 21 03 BC */	stfs f1, 0x3bc(r1)
/* 8021673C 0021367C  9B 61 03 9A */	stb r27, 0x39a(r1)
/* 80216740 00213680  D0 01 03 90 */	stfs f0, 0x390(r1)
/* 80216744 00213684  9B 61 03 98 */	stb r27, 0x398(r1)
/* 80216748 00213688  99 01 03 99 */	stb r8, 0x399(r1)
/* 8021674C 0021368C  91 01 03 94 */	stw r8, 0x394(r1)
/* 80216750 00213690  9B 61 03 9B */	stb r27, 0x39b(r1)
/* 80216754 00213694  9B 61 03 9C */	stb r27, 0x39c(r1)
/* 80216758 00213698  9B 61 03 9D */	stb r27, 0x39d(r1)
/* 8021675C 0021369C  9B 61 03 9E */	stb r27, 0x39e(r1)
/* 80216760 002136A0  9B 61 03 9F */	stb r27, 0x39f(r1)
/* 80216764 002136A4  9B 61 03 A0 */	stb r27, 0x3a0(r1)
/* 80216768 002136A8  48 1E 59 A1 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 8021676C 002136AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216770 002136B0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80216774 002136B4  60 00 00 02 */	ori r0, r0, 2
/* 80216778 002136B8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 8021677C 002136BC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216780 002136C0  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80216784 002136C4  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80216788 002136C8  28 00 00 00 */	cmplwi r0, 0
/* 8021678C 002136CC  41 82 00 64 */	beq .L_802167F0
/* 80216790 002136D0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216794 002136D4  28 00 00 00 */	cmplwi r0, 0
/* 80216798 002136D8  40 82 00 18 */	bne .L_802167B0
/* 8021679C 002136DC  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 802167A0 002136E0  38 BE 00 94 */	addi r5, r30, 0x94
/* 802167A4 002136E4  38 80 01 D3 */	li r4, 0x1d3
/* 802167A8 002136E8  4C C6 31 82 */	crclr 6
/* 802167AC 002136EC  4B E1 3E 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802167B0:
/* 802167B0 002136F0  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 802167B4 002136F4  80 19 00 04 */	lwz r0, 4(r25)
/* 802167B8 002136F8  28 00 00 00 */	cmplwi r0, 0
/* 802167BC 002136FC  40 82 00 18 */	bne .L_802167D4
/* 802167C0 00213700  38 7E 00 FC */	addi r3, r30, 0xfc
/* 802167C4 00213704  38 BE 00 94 */	addi r5, r30, 0x94
/* 802167C8 00213708  38 80 00 C7 */	li r4, 0xc7
/* 802167CC 0021370C  4C C6 31 82 */	crclr 6
/* 802167D0 00213710  4B E1 3E 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802167D4:
/* 802167D4 00213714  80 79 00 04 */	lwz r3, 4(r25)
/* 802167D8 00213718  80 63 00 04 */	lwz r3, 4(r3)
/* 802167DC 0021371C  81 83 00 00 */	lwz r12, 0(r3)
/* 802167E0 00213720  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802167E4 00213724  7D 89 03 A6 */	mtctr r12
/* 802167E8 00213728  4E 80 04 21 */	bctrl 
/* 802167EC 0021372C  48 00 0A 5C */	b .L_80217248
.L_802167F0:
/* 802167F0 00213730  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 802167F4 00213734  28 00 00 00 */	cmplwi r0, 0
/* 802167F8 00213738  40 82 00 18 */	bne .L_80216810
/* 802167FC 0021373C  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216800 00213740  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216804 00213744  38 80 01 D3 */	li r4, 0x1d3
/* 80216808 00213748  4C C6 31 82 */	crclr 6
/* 8021680C 0021374C  4B E1 3E 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216810:
/* 80216810 00213750  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216814 00213754  80 19 00 04 */	lwz r0, 4(r25)
/* 80216818 00213758  28 00 00 00 */	cmplwi r0, 0
/* 8021681C 0021375C  40 82 00 18 */	bne .L_80216834
/* 80216820 00213760  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216824 00213764  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216828 00213768  38 80 00 C7 */	li r4, 0xc7
/* 8021682C 0021376C  4C C6 31 82 */	crclr 6
/* 80216830 00213770  4B E1 3E 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216834:
/* 80216834 00213774  80 79 00 04 */	lwz r3, 4(r25)
/* 80216838 00213778  80 63 00 04 */	lwz r3, 4(r3)
/* 8021683C 0021377C  81 83 00 00 */	lwz r12, 0(r3)
/* 80216840 00213780  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80216844 00213784  7D 89 03 A6 */	mtctr r12
/* 80216848 00213788  4E 80 04 21 */	bctrl 
/* 8021684C 0021378C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216850 00213790  28 00 00 00 */	cmplwi r0, 0
/* 80216854 00213794  40 82 00 18 */	bne .L_8021686C
/* 80216858 00213798  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 8021685C 0021379C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216860 002137A0  38 80 01 D3 */	li r4, 0x1d3
/* 80216864 002137A4  4C C6 31 82 */	crclr 6
/* 80216868 002137A8  4B E1 3D D9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021686C:
/* 8021686C 002137AC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216870 002137B0  80 19 00 04 */	lwz r0, 4(r25)
/* 80216874 002137B4  28 00 00 00 */	cmplwi r0, 0
/* 80216878 002137B8  40 82 00 18 */	bne .L_80216890
/* 8021687C 002137BC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216880 002137C0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216884 002137C4  38 80 00 C7 */	li r4, 0xc7
/* 80216888 002137C8  4C C6 31 82 */	crclr 6
/* 8021688C 002137CC  4B E1 3D B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216890:
/* 80216890 002137D0  80 79 00 04 */	lwz r3, 4(r25)
/* 80216894 002137D4  80 63 00 04 */	lwz r3, 4(r3)
/* 80216898 002137D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021689C 002137DC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802168A0 002137E0  7D 89 03 A6 */	mtctr r12
/* 802168A4 002137E4  4E 80 04 21 */	bctrl 
/* 802168A8 002137E8  48 12 A4 05 */	bl on__Q28PSSystem8EnvSeMgrFv
/* 802168AC 002137EC  48 00 09 9C */	b .L_80217248
.L_802168B0:
/* 802168B0 002137F0  7F 83 E3 78 */	mr r3, r28
/* 802168B4 002137F4  38 9E 00 C0 */	addi r4, r30, 0xc0
/* 802168B8 002137F8  48 21 B0 15 */	bl is__Q24Game11MovieConfigFPc
/* 802168BC 002137FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802168C0 00213800  41 82 05 FC */	beq .L_80216EBC
/* 802168C4 00213804  88 1A 00 10 */	lbz r0, 0x10(r26)
/* 802168C8 00213808  28 00 00 00 */	cmplwi r0, 0
/* 802168CC 0021380C  41 82 00 60 */	beq .L_8021692C
/* 802168D0 00213810  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 802168D4 00213814  38 7E 02 70 */	addi r3, r30, 0x270
/* 802168D8 00213818  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 802168DC 0021381C  38 00 00 00 */	li r0, 0
/* 802168E0 00213820  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 802168E4 00213824  38 81 00 C0 */	addi r4, r1, 0xc0
/* 802168E8 00213828  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 802168EC 0021382C  90 61 00 C0 */	stw r3, 0xc0(r1)
/* 802168F0 00213830  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802168F4 00213834  90 C1 00 C4 */	stw r6, 0xc4(r1)
/* 802168F8 00213838  90 A1 00 CC */	stw r5, 0xcc(r1)
/* 802168FC 0021383C  D0 01 00 D8 */	stfs f0, 0xd8(r1)
/* 80216900 00213840  D0 01 00 DC */	stfs f0, 0xdc(r1)
/* 80216904 00213844  D0 01 00 E0 */	stfs f0, 0xe0(r1)
/* 80216908 00213848  D0 01 00 E4 */	stfs f0, 0xe4(r1)
/* 8021690C 0021384C  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 80216910 00213850  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80216914 00213854  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80216918 00213858  90 01 00 EC */	stw r0, 0xec(r1)
/* 8021691C 0021385C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80216920 00213860  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80216924 00213864  48 21 60 AD */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216928 00213868  48 00 09 20 */	b .L_80217248
.L_8021692C:
/* 8021692C 0021386C  38 00 00 00 */	li r0, 0
/* 80216930 00213870  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80216934 00213874  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80216938 00213878  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8021693C 0021387C  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80216940 00213880  28 00 00 00 */	cmplwi r0, 0
/* 80216944 00213884  90 81 00 30 */	stw r4, 0x30(r1)
/* 80216948 00213888  90 01 00 34 */	stw r0, 0x34(r1)
/* 8021694C 0021388C  90 61 00 38 */	stw r3, 0x38(r1)
/* 80216950 00213890  40 82 00 1C */	bne .L_8021696C
/* 80216954 00213894  81 83 00 00 */	lwz r12, 0(r3)
/* 80216958 00213898  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8021695C 0021389C  7D 89 03 A6 */	mtctr r12
/* 80216960 002138A0  4E 80 04 21 */	bctrl 
/* 80216964 002138A4  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216968 002138A8  48 00 01 C0 */	b .L_80216B28
.L_8021696C:
/* 8021696C 002138AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80216970 002138B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80216974 002138B4  7D 89 03 A6 */	mtctr r12
/* 80216978 002138B8  4E 80 04 21 */	bctrl 
/* 8021697C 002138BC  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216980 002138C0  48 00 00 58 */	b .L_802169D8
.L_80216984:
/* 80216984 002138C4  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216988 002138C8  80 81 00 34 */	lwz r4, 0x34(r1)
/* 8021698C 002138CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80216990 002138D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80216994 002138D4  7D 89 03 A6 */	mtctr r12
/* 80216998 002138D8  4E 80 04 21 */	bctrl 
/* 8021699C 002138DC  7C 64 1B 78 */	mr r4, r3
/* 802169A0 002138E0  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 802169A4 002138E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802169A8 002138E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802169AC 002138EC  7D 89 03 A6 */	mtctr r12
/* 802169B0 002138F0  4E 80 04 21 */	bctrl 
/* 802169B4 002138F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802169B8 002138F8  40 82 01 70 */	bne .L_80216B28
/* 802169BC 002138FC  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802169C0 00213900  80 81 00 34 */	lwz r4, 0x34(r1)
/* 802169C4 00213904  81 83 00 00 */	lwz r12, 0(r3)
/* 802169C8 00213908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802169CC 0021390C  7D 89 03 A6 */	mtctr r12
/* 802169D0 00213910  4E 80 04 21 */	bctrl 
/* 802169D4 00213914  90 61 00 34 */	stw r3, 0x34(r1)
.L_802169D8:
/* 802169D8 00213918  81 81 00 30 */	lwz r12, 0x30(r1)
/* 802169DC 0021391C  38 61 00 30 */	addi r3, r1, 0x30
/* 802169E0 00213920  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802169E4 00213924  7D 89 03 A6 */	mtctr r12
/* 802169E8 00213928  4E 80 04 21 */	bctrl 
/* 802169EC 0021392C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802169F0 00213930  41 82 FF 94 */	beq .L_80216984
/* 802169F4 00213934  48 00 01 34 */	b .L_80216B28
.L_802169F8:
/* 802169F8 00213938  80 61 00 38 */	lwz r3, 0x38(r1)
/* 802169FC 0021393C  81 83 00 00 */	lwz r12, 0(r3)
/* 80216A00 00213940  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80216A04 00213944  7D 89 03 A6 */	mtctr r12
/* 80216A08 00213948  4E 80 04 21 */	bctrl 
/* 80216A0C 0021394C  7C 79 1B 78 */	mr r25, r3
/* 80216A10 00213950  38 61 00 18 */	addi r3, r1, 0x18
/* 80216A14 00213954  81 99 00 00 */	lwz r12, 0(r25)
/* 80216A18 00213958  7F 24 CB 78 */	mr r4, r25
/* 80216A1C 0021395C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80216A20 00213960  7D 89 03 A6 */	mtctr r12
/* 80216A24 00213964  4E 80 04 21 */	bctrl 
/* 80216A28 00213968  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80216A2C 0021396C  38 81 00 24 */	addi r4, r1, 0x24
/* 80216A30 00213970  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 80216A34 00213974  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80216A38 00213978  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 80216A3C 0021397C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80216A40 00213980  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80216A44 00213984  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80216A48 00213988  81 83 00 04 */	lwz r12, 4(r3)
/* 80216A4C 0021398C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80216A50 00213990  7D 89 03 A6 */	mtctr r12
/* 80216A54 00213994  4E 80 04 21 */	bctrl 
/* 80216A58 00213998  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 80216A5C 0021399C  7F 23 CB 78 */	mr r3, r25
/* 80216A60 002139A0  38 81 00 24 */	addi r4, r1, 0x24
/* 80216A64 002139A4  38 A0 00 00 */	li r5, 0
/* 80216A68 002139A8  4B F2 47 41 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80216A6C 002139AC  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80216A70 002139B0  28 00 00 00 */	cmplwi r0, 0
/* 80216A74 002139B4  40 82 00 24 */	bne .L_80216A98
/* 80216A78 002139B8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216A7C 002139BC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216A80 002139C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80216A84 002139C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80216A88 002139C8  7D 89 03 A6 */	mtctr r12
/* 80216A8C 002139CC  4E 80 04 21 */	bctrl 
/* 80216A90 002139D0  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216A94 002139D4  48 00 00 94 */	b .L_80216B28
.L_80216A98:
/* 80216A98 002139D8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216A9C 002139DC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216AA0 002139E0  81 83 00 00 */	lwz r12, 0(r3)
/* 80216AA4 002139E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80216AA8 002139E8  7D 89 03 A6 */	mtctr r12
/* 80216AAC 002139EC  4E 80 04 21 */	bctrl 
/* 80216AB0 002139F0  90 61 00 34 */	stw r3, 0x34(r1)
/* 80216AB4 002139F4  48 00 00 58 */	b .L_80216B0C
.L_80216AB8:
/* 80216AB8 002139F8  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216ABC 002139FC  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216AC0 00213A00  81 83 00 00 */	lwz r12, 0(r3)
/* 80216AC4 00213A04  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80216AC8 00213A08  7D 89 03 A6 */	mtctr r12
/* 80216ACC 00213A0C  4E 80 04 21 */	bctrl 
/* 80216AD0 00213A10  7C 64 1B 78 */	mr r4, r3
/* 80216AD4 00213A14  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80216AD8 00213A18  81 83 00 00 */	lwz r12, 0(r3)
/* 80216ADC 00213A1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80216AE0 00213A20  7D 89 03 A6 */	mtctr r12
/* 80216AE4 00213A24  4E 80 04 21 */	bctrl 
/* 80216AE8 00213A28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216AEC 00213A2C  40 82 00 3C */	bne .L_80216B28
/* 80216AF0 00213A30  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216AF4 00213A34  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216AF8 00213A38  81 83 00 00 */	lwz r12, 0(r3)
/* 80216AFC 00213A3C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80216B00 00213A40  7D 89 03 A6 */	mtctr r12
/* 80216B04 00213A44  4E 80 04 21 */	bctrl 
/* 80216B08 00213A48  90 61 00 34 */	stw r3, 0x34(r1)
.L_80216B0C:
/* 80216B0C 00213A4C  81 81 00 30 */	lwz r12, 0x30(r1)
/* 80216B10 00213A50  38 61 00 30 */	addi r3, r1, 0x30
/* 80216B14 00213A54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80216B18 00213A58  7D 89 03 A6 */	mtctr r12
/* 80216B1C 00213A5C  4E 80 04 21 */	bctrl 
/* 80216B20 00213A60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216B24 00213A64  41 82 FF 94 */	beq .L_80216AB8
.L_80216B28:
/* 80216B28 00213A68  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80216B2C 00213A6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80216B30 00213A70  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216B34 00213A74  7D 89 03 A6 */	mtctr r12
/* 80216B38 00213A78  4E 80 04 21 */	bctrl 
/* 80216B3C 00213A7C  80 81 00 34 */	lwz r4, 0x34(r1)
/* 80216B40 00213A80  7C 04 18 40 */	cmplw r4, r3
/* 80216B44 00213A84  40 82 FE B4 */	bne .L_802169F8
/* 80216B48 00213A88  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216B4C 00213A8C  38 80 00 06 */	li r4, 6
/* 80216B50 00213A90  4B FD 08 91 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80216B54 00213A94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216B58 00213A98  40 82 00 74 */	bne .L_80216BCC
/* 80216B5C 00213A9C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216B60 00213AA0  38 80 00 06 */	li r4, 6
/* 80216B64 00213AA4  4B FD 08 41 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80216B68 00213AA8  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 80216B6C 00213AAC  38 7E 02 50 */	addi r3, r30, 0x250
/* 80216B70 00213AB0  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 80216B74 00213AB4  38 00 00 00 */	li r0, 0
/* 80216B78 00213AB8  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80216B7C 00213ABC  38 81 00 8C */	addi r4, r1, 0x8c
/* 80216B80 00213AC0  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80216B84 00213AC4  90 61 00 8C */	stw r3, 0x8c(r1)
/* 80216B88 00213AC8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80216B8C 00213ACC  90 C1 00 90 */	stw r6, 0x90(r1)
/* 80216B90 00213AD0  90 A1 00 98 */	stw r5, 0x98(r1)
/* 80216B94 00213AD4  D0 01 00 A4 */	stfs f0, 0xa4(r1)
/* 80216B98 00213AD8  D0 01 00 A8 */	stfs f0, 0xa8(r1)
/* 80216B9C 00213ADC  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 80216BA0 00213AE0  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 80216BA4 00213AE4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80216BA8 00213AE8  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80216BAC 00213AEC  90 01 00 94 */	stw r0, 0x94(r1)
/* 80216BB0 00213AF0  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80216BB4 00213AF4  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80216BB8 00213AF8  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80216BBC 00213AFC  80 1B 00 CC */	lwz r0, 0xcc(r27)
/* 80216BC0 00213B00  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80216BC4 00213B04  48 21 5E 0D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216BC8 00213B08  48 00 06 80 */	b .L_80217248
.L_80216BCC:
/* 80216BCC 00213B0C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216BD0 00213B10  38 80 00 12 */	li r4, 0x12
/* 80216BD4 00213B14  4B FD 08 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80216BD8 00213B18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216BDC 00213B1C  40 82 00 84 */	bne .L_80216C60
/* 80216BE0 00213B20  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216BE4 00213B24  38 80 00 0A */	li r4, 0xa
/* 80216BE8 00213B28  38 63 00 48 */	addi r3, r3, 0x48
/* 80216BEC 00213B2C  4B FC F3 E5 */	bl hasItem__Q24Game10OlimarDataFi
/* 80216BF0 00213B30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216BF4 00213B34  41 82 00 6C */	beq .L_80216C60
/* 80216BF8 00213B38  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80216BFC 00213B3C  38 80 00 12 */	li r4, 0x12
/* 80216C00 00213B40  4B FD 07 A5 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80216C04 00213B44  80 9B 02 2C */	lwz r4, 0x22c(r27)
/* 80216C08 00213B48  38 7E 02 64 */	addi r3, r30, 0x264
/* 80216C0C 00213B4C  80 BB 00 C8 */	lwz r5, 0xc8(r27)
/* 80216C10 00213B50  38 00 00 00 */	li r0, 0
/* 80216C14 00213B54  80 C4 00 14 */	lwz r6, 0x14(r4)
/* 80216C18 00213B58  38 81 00 58 */	addi r4, r1, 0x58
/* 80216C1C 00213B5C  C0 02 BC 48 */	lfs f0, lbl_80519FA8@sda21(r2)
/* 80216C20 00213B60  90 61 00 58 */	stw r3, 0x58(r1)
/* 80216C24 00213B64  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80216C28 00213B68  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 80216C2C 00213B6C  90 A1 00 64 */	stw r5, 0x64(r1)
/* 80216C30 00213B70  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 80216C34 00213B74  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 80216C38 00213B78  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80216C3C 00213B7C  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 80216C40 00213B80  90 01 00 80 */	stw r0, 0x80(r1)
/* 80216C44 00213B84  90 01 00 68 */	stw r0, 0x68(r1)
/* 80216C48 00213B88  90 01 00 60 */	stw r0, 0x60(r1)
/* 80216C4C 00213B8C  90 01 00 84 */	stw r0, 0x84(r1)
/* 80216C50 00213B90  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80216C54 00213B94  90 01 00 88 */	stw r0, 0x88(r1)
/* 80216C58 00213B98  48 21 5D 79 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80216C5C 00213B9C  48 00 05 EC */	b .L_80217248
.L_80216C60:
/* 80216C60 00213BA0  7F 43 D3 78 */	mr r3, r26
/* 80216C64 00213BA4  7F 64 DB 78 */	mr r4, r27
/* 80216C68 00213BA8  4B FF D1 F5 */	bl check_DemoInout__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
/* 80216C6C 00213BAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216C70 00213BB0  40 82 05 D8 */	bne .L_80217248
/* 80216C74 00213BB4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216C78 00213BB8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80216C7C 00213BBC  60 00 00 02 */	ori r0, r0, 2
/* 80216C80 00213BC0  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80216C84 00213BC4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216C88 00213BC8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80216C8C 00213BCC  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80216C90 00213BD0  28 00 00 00 */	cmplwi r0, 0
/* 80216C94 00213BD4  41 82 00 64 */	beq .L_80216CF8
/* 80216C98 00213BD8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216C9C 00213BDC  28 00 00 00 */	cmplwi r0, 0
/* 80216CA0 00213BE0  40 82 00 18 */	bne .L_80216CB8
/* 80216CA4 00213BE4  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216CA8 00213BE8  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216CAC 00213BEC  38 80 01 D3 */	li r4, 0x1d3
/* 80216CB0 00213BF0  4C C6 31 82 */	crclr 6
/* 80216CB4 00213BF4  4B E1 39 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216CB8:
/* 80216CB8 00213BF8  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216CBC 00213BFC  80 19 00 04 */	lwz r0, 4(r25)
/* 80216CC0 00213C00  28 00 00 00 */	cmplwi r0, 0
/* 80216CC4 00213C04  40 82 00 18 */	bne .L_80216CDC
/* 80216CC8 00213C08  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216CCC 00213C0C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216CD0 00213C10  38 80 00 C7 */	li r4, 0xc7
/* 80216CD4 00213C14  4C C6 31 82 */	crclr 6
/* 80216CD8 00213C18  4B E1 39 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216CDC:
/* 80216CDC 00213C1C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216CE0 00213C20  80 63 00 04 */	lwz r3, 4(r3)
/* 80216CE4 00213C24  81 83 00 00 */	lwz r12, 0(r3)
/* 80216CE8 00213C28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216CEC 00213C2C  7D 89 03 A6 */	mtctr r12
/* 80216CF0 00213C30  4E 80 04 21 */	bctrl 
/* 80216CF4 00213C34  48 00 00 C0 */	b .L_80216DB4
.L_80216CF8:
/* 80216CF8 00213C38  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216CFC 00213C3C  28 00 00 00 */	cmplwi r0, 0
/* 80216D00 00213C40  40 82 00 18 */	bne .L_80216D18
/* 80216D04 00213C44  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216D08 00213C48  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D0C 00213C4C  38 80 01 D3 */	li r4, 0x1d3
/* 80216D10 00213C50  4C C6 31 82 */	crclr 6
/* 80216D14 00213C54  4B E1 39 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D18:
/* 80216D18 00213C58  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216D1C 00213C5C  80 19 00 04 */	lwz r0, 4(r25)
/* 80216D20 00213C60  28 00 00 00 */	cmplwi r0, 0
/* 80216D24 00213C64  40 82 00 18 */	bne .L_80216D3C
/* 80216D28 00213C68  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216D2C 00213C6C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D30 00213C70  38 80 00 C7 */	li r4, 0xc7
/* 80216D34 00213C74  4C C6 31 82 */	crclr 6
/* 80216D38 00213C78  4B E1 39 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D3C:
/* 80216D3C 00213C7C  80 79 00 04 */	lwz r3, 4(r25)
/* 80216D40 00213C80  80 63 00 04 */	lwz r3, 4(r3)
/* 80216D44 00213C84  81 83 00 00 */	lwz r12, 0(r3)
/* 80216D48 00213C88  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80216D4C 00213C8C  7D 89 03 A6 */	mtctr r12
/* 80216D50 00213C90  4E 80 04 21 */	bctrl 
/* 80216D54 00213C94  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216D58 00213C98  28 00 00 00 */	cmplwi r0, 0
/* 80216D5C 00213C9C  40 82 00 18 */	bne .L_80216D74
/* 80216D60 00213CA0  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216D64 00213CA4  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D68 00213CA8  38 80 01 D3 */	li r4, 0x1d3
/* 80216D6C 00213CAC  4C C6 31 82 */	crclr 6
/* 80216D70 00213CB0  4B E1 38 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D74:
/* 80216D74 00213CB4  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216D78 00213CB8  80 19 00 04 */	lwz r0, 4(r25)
/* 80216D7C 00213CBC  28 00 00 00 */	cmplwi r0, 0
/* 80216D80 00213CC0  40 82 00 18 */	bne .L_80216D98
/* 80216D84 00213CC4  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216D88 00213CC8  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216D8C 00213CCC  38 80 00 C7 */	li r4, 0xc7
/* 80216D90 00213CD0  4C C6 31 82 */	crclr 6
/* 80216D94 00213CD4  4B E1 38 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216D98:
/* 80216D98 00213CD8  80 79 00 04 */	lwz r3, 4(r25)
/* 80216D9C 00213CDC  80 63 00 04 */	lwz r3, 4(r3)
/* 80216DA0 00213CE0  81 83 00 00 */	lwz r12, 0(r3)
/* 80216DA4 00213CE4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80216DA8 00213CE8  7D 89 03 A6 */	mtctr r12
/* 80216DAC 00213CEC  4E 80 04 21 */	bctrl 
/* 80216DB0 00213CF0  48 12 9E FD */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80216DB4:
/* 80216DB4 00213CF4  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80216DB8 00213CF8  39 80 00 00 */	li r12, 0
/* 80216DBC 00213CFC  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80216DC0 00213D00  39 00 00 01 */	li r8, 1
/* 80216DC4 00213D04  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 80216DC8 00213D08  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80216DCC 00213D0C  38 C0 00 0A */	li r6, 0xa
/* 80216DD0 00213D10  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80216DD4 00213D14  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 80216DD8 00213D18  38 E0 00 02 */	li r7, 2
/* 80216DDC 00213D1C  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80216DE0 00213D20  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80216DE4 00213D24  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 80216DE8 00213D28  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80216DEC 00213D2C  39 40 04 D2 */	li r10, 0x4d2
/* 80216DF0 00213D30  39 20 00 32 */	li r9, 0x32
/* 80216DF4 00213D34  93 41 02 B4 */	stw r26, 0x2b4(r1)
/* 80216DF8 00213D38  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80216DFC 00213D3C  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80216E00 00213D40  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80216E04 00213D44  93 41 03 1C */	stw r26, 0x31c(r1)
/* 80216E08 00213D48  38 81 02 B4 */	addi r4, r1, 0x2b4
/* 80216E0C 00213D4C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80216E10 00213D50  93 41 03 2C */	stw r26, 0x32c(r1)
/* 80216E14 00213D54  91 81 02 B8 */	stw r12, 0x2b8(r1)
/* 80216E18 00213D58  91 61 02 B4 */	stw r11, 0x2b4(r1)
/* 80216E1C 00213D5C  D0 81 02 BC */	stfs f4, 0x2bc(r1)
/* 80216E20 00213D60  91 81 02 C0 */	stw r12, 0x2c0(r1)
/* 80216E24 00213D64  91 81 02 C8 */	stw r12, 0x2c8(r1)
/* 80216E28 00213D68  91 41 02 C4 */	stw r10, 0x2c4(r1)
/* 80216E2C 00213D6C  91 21 02 CC */	stw r9, 0x2cc(r1)
/* 80216E30 00213D70  99 81 02 D0 */	stb r12, 0x2d0(r1)
/* 80216E34 00213D74  91 81 02 D4 */	stw r12, 0x2d4(r1)
/* 80216E38 00213D78  D0 61 02 D8 */	stfs f3, 0x2d8(r1)
/* 80216E3C 00213D7C  91 01 02 DC */	stw r8, 0x2dc(r1)
/* 80216E40 00213D80  90 E1 02 E0 */	stw r7, 0x2e0(r1)
/* 80216E44 00213D84  90 C1 02 E4 */	stw r6, 0x2e4(r1)
/* 80216E48 00213D88  90 C1 02 E8 */	stw r6, 0x2e8(r1)
/* 80216E4C 00213D8C  99 01 02 EC */	stb r8, 0x2ec(r1)
/* 80216E50 00213D90  D0 61 02 F0 */	stfs f3, 0x2f0(r1)
/* 80216E54 00213D94  91 01 02 F4 */	stw r8, 0x2f4(r1)
/* 80216E58 00213D98  90 E1 02 F8 */	stw r7, 0x2f8(r1)
/* 80216E5C 00213D9C  90 C1 02 FC */	stw r6, 0x2fc(r1)
/* 80216E60 00213DA0  90 C1 03 00 */	stw r6, 0x300(r1)
/* 80216E64 00213DA4  99 01 03 04 */	stb r8, 0x304(r1)
/* 80216E68 00213DA8  91 81 03 20 */	stw r12, 0x320(r1)
/* 80216E6C 00213DAC  90 A1 03 1C */	stw r5, 0x31c(r1)
/* 80216E70 00213DB0  D0 41 03 28 */	stfs f2, 0x328(r1)
/* 80216E74 00213DB4  D0 41 03 24 */	stfs f2, 0x324(r1)
/* 80216E78 00213DB8  91 81 03 30 */	stw r12, 0x330(r1)
/* 80216E7C 00213DBC  90 01 03 2C */	stw r0, 0x32c(r1)
/* 80216E80 00213DC0  D0 21 03 38 */	stfs f1, 0x338(r1)
/* 80216E84 00213DC4  D0 21 03 34 */	stfs f1, 0x334(r1)
/* 80216E88 00213DC8  99 81 03 12 */	stb r12, 0x312(r1)
/* 80216E8C 00213DCC  D0 01 03 08 */	stfs f0, 0x308(r1)
/* 80216E90 00213DD0  99 81 03 10 */	stb r12, 0x310(r1)
/* 80216E94 00213DD4  99 01 03 11 */	stb r8, 0x311(r1)
/* 80216E98 00213DD8  91 01 03 0C */	stw r8, 0x30c(r1)
/* 80216E9C 00213DDC  99 81 03 13 */	stb r12, 0x313(r1)
/* 80216EA0 00213DE0  99 81 03 14 */	stb r12, 0x314(r1)
/* 80216EA4 00213DE4  99 81 03 15 */	stb r12, 0x315(r1)
/* 80216EA8 00213DE8  99 81 03 16 */	stb r12, 0x316(r1)
/* 80216EAC 00213DEC  99 81 03 17 */	stb r12, 0x317(r1)
/* 80216EB0 00213DF0  99 81 03 18 */	stb r12, 0x318(r1)
/* 80216EB4 00213DF4  48 1E 52 55 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 80216EB8 00213DF8  48 00 03 90 */	b .L_80217248
.L_80216EBC:
/* 80216EBC 00213DFC  7F 83 E3 78 */	mr r3, r28
/* 80216EC0 00213E00  38 9E 01 40 */	addi r4, r30, 0x140
/* 80216EC4 00213E04  48 21 AA 09 */	bl is__Q24Game11MovieConfigFPc
/* 80216EC8 00213E08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216ECC 00213E0C  40 82 00 2C */	bne .L_80216EF8
/* 80216ED0 00213E10  7F 83 E3 78 */	mr r3, r28
/* 80216ED4 00213E14  38 9E 01 50 */	addi r4, r30, 0x150
/* 80216ED8 00213E18  48 21 A9 F5 */	bl is__Q24Game11MovieConfigFPc
/* 80216EDC 00213E1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216EE0 00213E20  40 82 00 18 */	bne .L_80216EF8
/* 80216EE4 00213E24  7F 83 E3 78 */	mr r3, r28
/* 80216EE8 00213E28  38 9E 01 60 */	addi r4, r30, 0x160
/* 80216EEC 00213E2C  48 21 A9 E1 */	bl is__Q24Game11MovieConfigFPc
/* 80216EF0 00213E30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80216EF4 00213E34  41 82 02 4C */	beq .L_80217140
.L_80216EF8:
/* 80216EF8 00213E38  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216EFC 00213E3C  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80216F00 00213E40  60 00 00 02 */	ori r0, r0, 2
/* 80216F04 00213E44  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80216F08 00213E48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80216F0C 00213E4C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80216F10 00213E50  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80216F14 00213E54  28 00 00 00 */	cmplwi r0, 0
/* 80216F18 00213E58  41 82 00 64 */	beq .L_80216F7C
/* 80216F1C 00213E5C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216F20 00213E60  28 00 00 00 */	cmplwi r0, 0
/* 80216F24 00213E64  40 82 00 18 */	bne .L_80216F3C
/* 80216F28 00213E68  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216F2C 00213E6C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216F30 00213E70  38 80 01 D3 */	li r4, 0x1d3
/* 80216F34 00213E74  4C C6 31 82 */	crclr 6
/* 80216F38 00213E78  4B E1 37 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216F3C:
/* 80216F3C 00213E7C  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216F40 00213E80  80 19 00 04 */	lwz r0, 4(r25)
/* 80216F44 00213E84  28 00 00 00 */	cmplwi r0, 0
/* 80216F48 00213E88  40 82 00 18 */	bne .L_80216F60
/* 80216F4C 00213E8C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216F50 00213E90  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216F54 00213E94  38 80 00 C7 */	li r4, 0xc7
/* 80216F58 00213E98  4C C6 31 82 */	crclr 6
/* 80216F5C 00213E9C  4B E1 36 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216F60:
/* 80216F60 00213EA0  80 79 00 04 */	lwz r3, 4(r25)
/* 80216F64 00213EA4  80 63 00 04 */	lwz r3, 4(r3)
/* 80216F68 00213EA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80216F6C 00213EAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80216F70 00213EB0  7D 89 03 A6 */	mtctr r12
/* 80216F74 00213EB4  4E 80 04 21 */	bctrl 
/* 80216F78 00213EB8  48 00 00 C0 */	b .L_80217038
.L_80216F7C:
/* 80216F7C 00213EBC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216F80 00213EC0  28 00 00 00 */	cmplwi r0, 0
/* 80216F84 00213EC4  40 82 00 18 */	bne .L_80216F9C
/* 80216F88 00213EC8  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216F8C 00213ECC  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216F90 00213ED0  38 80 01 D3 */	li r4, 0x1d3
/* 80216F94 00213ED4  4C C6 31 82 */	crclr 6
/* 80216F98 00213ED8  4B E1 36 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216F9C:
/* 80216F9C 00213EDC  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216FA0 00213EE0  80 19 00 04 */	lwz r0, 4(r25)
/* 80216FA4 00213EE4  28 00 00 00 */	cmplwi r0, 0
/* 80216FA8 00213EE8  40 82 00 18 */	bne .L_80216FC0
/* 80216FAC 00213EEC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80216FB0 00213EF0  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216FB4 00213EF4  38 80 00 C7 */	li r4, 0xc7
/* 80216FB8 00213EF8  4C C6 31 82 */	crclr 6
/* 80216FBC 00213EFC  4B E1 36 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216FC0:
/* 80216FC0 00213F00  80 79 00 04 */	lwz r3, 4(r25)
/* 80216FC4 00213F04  80 63 00 04 */	lwz r3, 4(r3)
/* 80216FC8 00213F08  81 83 00 00 */	lwz r12, 0(r3)
/* 80216FCC 00213F0C  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80216FD0 00213F10  7D 89 03 A6 */	mtctr r12
/* 80216FD4 00213F14  4E 80 04 21 */	bctrl 
/* 80216FD8 00213F18  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80216FDC 00213F1C  28 00 00 00 */	cmplwi r0, 0
/* 80216FE0 00213F20  40 82 00 18 */	bne .L_80216FF8
/* 80216FE4 00213F24  38 7E 00 F0 */	addi r3, r30, 0xf0
/* 80216FE8 00213F28  38 BE 00 94 */	addi r5, r30, 0x94
/* 80216FEC 00213F2C  38 80 01 D3 */	li r4, 0x1d3
/* 80216FF0 00213F30  4C C6 31 82 */	crclr 6
/* 80216FF4 00213F34  4B E1 36 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80216FF8:
/* 80216FF8 00213F38  83 2D 98 80 */	lwz r25, spSceneMgr__8PSSystem@sda21(r13)
/* 80216FFC 00213F3C  80 19 00 04 */	lwz r0, 4(r25)
/* 80217000 00213F40  28 00 00 00 */	cmplwi r0, 0
/* 80217004 00213F44  40 82 00 18 */	bne .L_8021701C
/* 80217008 00213F48  38 7E 00 FC */	addi r3, r30, 0xfc
/* 8021700C 00213F4C  38 BE 00 94 */	addi r5, r30, 0x94
/* 80217010 00213F50  38 80 00 C7 */	li r4, 0xc7
/* 80217014 00213F54  4C C6 31 82 */	crclr 6
/* 80217018 00213F58  4B E1 36 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021701C:
/* 8021701C 00213F5C  80 79 00 04 */	lwz r3, 4(r25)
/* 80217020 00213F60  80 63 00 04 */	lwz r3, 4(r3)
/* 80217024 00213F64  81 83 00 00 */	lwz r12, 0(r3)
/* 80217028 00213F68  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8021702C 00213F6C  7D 89 03 A6 */	mtctr r12
/* 80217030 00213F70  4E 80 04 21 */	bctrl 
/* 80217034 00213F74  48 12 9C 79 */	bl on__Q28PSSystem8EnvSeMgrFv
.L_80217038:
/* 80217038 00213F78  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8021703C 00213F7C  39 80 00 00 */	li r12, 0
/* 80217040 00213F80  3B 43 11 48 */	addi r26, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80217044 00213F84  39 00 00 01 */	li r8, 1
/* 80217048 00213F88  C0 62 BC 7C */	lfs f3, lbl_80519FDC@sda21(r2)
/* 8021704C 00213F8C  3C A0 80 4B */	lis r5, __vt__Q32og6Screen16DispMemberGround@ha
/* 80217050 00213F90  38 C0 00 0A */	li r6, 0xa
/* 80217054 00213F94  C0 42 BC 80 */	lfs f2, lbl_80519FE0@sda21(r2)
/* 80217058 00213F98  C0 22 BC 84 */	lfs f1, lbl_80519FE4@sda21(r2)
/* 8021705C 00213F9C  38 E0 00 02 */	li r7, 2
/* 80217060 00213FA0  C0 82 BC 48 */	lfs f4, lbl_80519FA8@sda21(r2)
/* 80217064 00213FA4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 80217068 00213FA8  C0 02 BC 88 */	lfs f0, lbl_80519FE8@sda21(r2)
/* 8021706C 00213FAC  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 80217070 00213FB0  39 40 04 D2 */	li r10, 0x4d2
/* 80217074 00213FB4  39 20 00 32 */	li r9, 0x32
/* 80217078 00213FB8  93 41 02 2C */	stw r26, 0x22c(r1)
/* 8021707C 00213FBC  39 65 10 DC */	addi r11, r5, __vt__Q32og6Screen16DispMemberGround@l
/* 80217080 00213FC0  38 A4 10 C4 */	addi r5, r4, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80217084 00213FC4  38 03 10 AC */	addi r0, r3, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 80217088 00213FC8  93 41 02 94 */	stw r26, 0x294(r1)
/* 8021708C 00213FCC  38 81 02 2C */	addi r4, r1, 0x22c
/* 80217090 00213FD0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217094 00213FD4  93 41 02 A4 */	stw r26, 0x2a4(r1)
/* 80217098 00213FD8  91 81 02 30 */	stw r12, 0x230(r1)
/* 8021709C 00213FDC  91 61 02 2C */	stw r11, 0x22c(r1)
/* 802170A0 00213FE0  D0 81 02 34 */	stfs f4, 0x234(r1)
/* 802170A4 00213FE4  91 81 02 38 */	stw r12, 0x238(r1)
/* 802170A8 00213FE8  91 81 02 40 */	stw r12, 0x240(r1)
/* 802170AC 00213FEC  91 41 02 3C */	stw r10, 0x23c(r1)
/* 802170B0 00213FF0  91 21 02 44 */	stw r9, 0x244(r1)
/* 802170B4 00213FF4  99 81 02 48 */	stb r12, 0x248(r1)
/* 802170B8 00213FF8  91 81 02 4C */	stw r12, 0x24c(r1)
/* 802170BC 00213FFC  D0 61 02 50 */	stfs f3, 0x250(r1)
/* 802170C0 00214000  91 01 02 54 */	stw r8, 0x254(r1)
/* 802170C4 00214004  90 E1 02 58 */	stw r7, 0x258(r1)
/* 802170C8 00214008  90 C1 02 5C */	stw r6, 0x25c(r1)
/* 802170CC 0021400C  90 C1 02 60 */	stw r6, 0x260(r1)
/* 802170D0 00214010  99 01 02 64 */	stb r8, 0x264(r1)
/* 802170D4 00214014  D0 61 02 68 */	stfs f3, 0x268(r1)
/* 802170D8 00214018  91 01 02 6C */	stw r8, 0x26c(r1)
/* 802170DC 0021401C  90 E1 02 70 */	stw r7, 0x270(r1)
/* 802170E0 00214020  90 C1 02 74 */	stw r6, 0x274(r1)
/* 802170E4 00214024  90 C1 02 78 */	stw r6, 0x278(r1)
/* 802170E8 00214028  99 01 02 7C */	stb r8, 0x27c(r1)
/* 802170EC 0021402C  91 81 02 98 */	stw r12, 0x298(r1)
/* 802170F0 00214030  90 A1 02 94 */	stw r5, 0x294(r1)
/* 802170F4 00214034  D0 41 02 A0 */	stfs f2, 0x2a0(r1)
/* 802170F8 00214038  D0 41 02 9C */	stfs f2, 0x29c(r1)
/* 802170FC 0021403C  91 81 02 A8 */	stw r12, 0x2a8(r1)
/* 80217100 00214040  90 01 02 A4 */	stw r0, 0x2a4(r1)
/* 80217104 00214044  D0 21 02 B0 */	stfs f1, 0x2b0(r1)
/* 80217108 00214048  D0 21 02 AC */	stfs f1, 0x2ac(r1)
/* 8021710C 0021404C  99 81 02 8A */	stb r12, 0x28a(r1)
/* 80217110 00214050  D0 01 02 80 */	stfs f0, 0x280(r1)
/* 80217114 00214054  99 81 02 88 */	stb r12, 0x288(r1)
/* 80217118 00214058  99 01 02 89 */	stb r8, 0x289(r1)
/* 8021711C 0021405C  91 01 02 84 */	stw r8, 0x284(r1)
/* 80217120 00214060  99 81 02 8B */	stb r12, 0x28b(r1)
/* 80217124 00214064  99 81 02 8C */	stb r12, 0x28c(r1)
/* 80217128 00214068  99 81 02 8D */	stb r12, 0x28d(r1)
/* 8021712C 0021406C  99 81 02 8E */	stb r12, 0x28e(r1)
/* 80217130 00214070  99 81 02 8F */	stb r12, 0x28f(r1)
/* 80217134 00214074  99 81 02 90 */	stb r12, 0x290(r1)
/* 80217138 00214078  48 1E 4F D1 */	bl open_GameGround__Q26Screen9Game2DMgrFRQ32og6Screen16DispMemberGround
/* 8021713C 0021407C  48 00 01 0C */	b .L_80217248
.L_80217140:
/* 80217140 00214080  7F 83 E3 78 */	mr r3, r28
/* 80217144 00214084  38 9E 02 0C */	addi r4, r30, 0x20c
/* 80217148 00214088  48 21 A7 85 */	bl is__Q24Game11MovieConfigFPc
/* 8021714C 0021408C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217150 00214090  41 82 00 A4 */	beq .L_802171F4
/* 80217154 00214094  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217158 00214098  48 1E 6A 4D */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 8021715C 0021409C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217160 002140A0  7F A4 EB 78 */	mr r4, r29
/* 80217164 002140A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80217168 002140A8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8021716C 002140AC  7D 89 03 A6 */	mtctr r12
/* 80217170 002140B0  4E 80 04 21 */	bctrl 
/* 80217174 002140B4  4B F2 BB B1 */	bl setDeadLaydown__Q24Game4NaviFv
/* 80217178 002140B8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8021717C 002140BC  80 03 00 50 */	lwz r0, 0x50(r3)
/* 80217180 002140C0  2C 00 00 02 */	cmpwi r0, 2
/* 80217184 002140C4  41 82 00 34 */	beq .L_802171B8
/* 80217188 002140C8  2C 1D 00 00 */	cmpwi r29, 0
/* 8021718C 002140CC  40 82 00 18 */	bne .L_802171A4
/* 80217190 002140D0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217194 002140D4  38 80 00 01 */	li r4, 1
/* 80217198 002140D8  80 63 00 58 */	lwz r3, 0x58(r3)
/* 8021719C 002140DC  4B F3 67 7D */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 802171A0 002140E0  48 00 00 A8 */	b .L_80217248
.L_802171A4:
/* 802171A4 002140E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802171A8 002140E8  38 80 00 00 */	li r4, 0
/* 802171AC 002140EC  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802171B0 002140F0  4B F3 67 69 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 802171B4 002140F4  48 00 00 94 */	b .L_80217248
.L_802171B8:
/* 802171B8 002140F8  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 802171BC 002140FC  38 00 00 02 */	li r0, 2
/* 802171C0 00214100  7F 43 D3 78 */	mr r3, r26
/* 802171C4 00214104  7F 64 DB 78 */	mr r4, r27
/* 802171C8 00214108  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 802171CC 0021410C  38 C1 00 0C */	addi r6, r1, 0xc
/* 802171D0 00214110  38 A0 00 05 */	li r5, 5
/* 802171D4 00214114  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 802171D8 00214118  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 802171DC 0021411C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 802171E0 00214120  81 9A 00 00 */	lwz r12, 0(r26)
/* 802171E4 00214124  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802171E8 00214128  7D 89 03 A6 */	mtctr r12
/* 802171EC 0021412C  4E 80 04 21 */	bctrl 
/* 802171F0 00214130  48 00 00 58 */	b .L_80217248
.L_802171F4:
/* 802171F4 00214134  7F 83 E3 78 */	mr r3, r28
/* 802171F8 00214138  38 9E 01 FC */	addi r4, r30, 0x1fc
/* 802171FC 0021413C  48 21 A6 D1 */	bl is__Q24Game11MovieConfigFPc
/* 80217200 00214140  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217204 00214144  41 82 00 44 */	beq .L_80217248
/* 80217208 00214148  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021720C 0021414C  48 1E 69 99 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 80217210 00214150  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 80217214 00214154  38 00 00 01 */	li r0, 1
/* 80217218 00214158  7F 43 D3 78 */	mr r3, r26
/* 8021721C 0021415C  7F 64 DB 78 */	mr r4, r27
/* 80217220 00214160  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 80217224 00214164  38 C1 00 08 */	addi r6, r1, 8
/* 80217228 00214168  38 A0 00 05 */	li r5, 5
/* 8021722C 0021416C  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 80217230 00214170  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 80217234 00214174  B0 01 00 08 */	sth r0, 8(r1)
/* 80217238 00214178  81 9A 00 00 */	lwz r12, 0(r26)
/* 8021723C 0021417C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80217240 00214180  7D 89 03 A6 */	mtctr r12
/* 80217244 00214184  4E 80 04 21 */	bctrl 
.L_80217248:
/* 80217248 00214188  BB 21 05 64 */	lmw r25, 0x564(r1)
/* 8021724C 0021418C  80 01 05 84 */	lwz r0, 0x584(r1)
/* 80217250 00214190  7C 08 03 A6 */	mtlr r0
/* 80217254 00214194  38 21 05 80 */	addi r1, r1, 0x580
/* 80217258 00214198  4E 80 00 20 */	blr 
.endif

.global needRepayDemo__Q34Game10SingleGame9GameStateFv
needRepayDemo__Q34Game10SingleGame9GameStateFv:
/* 8021725C 0021419C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80217260 002141A0  7C 08 02 A6 */	mflr r0
/* 80217264 002141A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80217268 002141A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8021726C 002141AC  88 03 00 19 */	lbz r0, 0x19(r3)
/* 80217270 002141B0  28 00 00 00 */	cmplwi r0, 0
/* 80217274 002141B4  41 82 00 0C */	beq .L_80217280
/* 80217278 002141B8  38 60 00 00 */	li r3, 0
/* 8021727C 002141BC  48 00 00 40 */	b .L_802172BC
.L_80217280:
/* 80217280 002141C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217284 002141C4  3B E0 00 00 */	li r31, 0
/* 80217288 002141C8  4B FD 1B D5 */	bl getRepayLevel__Q24Game8PlayDataFv
/* 8021728C 002141CC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217290 002141D0  4B FD 1D 35 */	bl checkRepayLevelFirstClear__Q24Game8PlayDataFv
/* 80217294 002141D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217298 002141D8  41 82 00 08 */	beq .L_802172A0
/* 8021729C 002141DC  3B E0 00 01 */	li r31, 1
.L_802172A0:
/* 802172A0 002141E0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802172A4 002141E4  4B FC EB C5 */	bl isCompletePelletTrigger__Q24Game8PlayDataFv
/* 802172A8 002141E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802172AC 002141EC  41 82 00 0C */	beq .L_802172B8
/* 802172B0 002141F0  38 60 00 01 */	li r3, 1
/* 802172B4 002141F4  48 00 00 08 */	b .L_802172BC
.L_802172B8:
/* 802172B8 002141F8  7F E3 FB 78 */	mr r3, r31
.L_802172BC:
/* 802172BC 002141FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802172C0 00214200  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802172C4 00214204  7C 08 03 A6 */	mtlr r0
/* 802172C8 00214208  38 21 00 10 */	addi r1, r1, 0x10
/* 802172CC 0021420C  4E 80 00 20 */	blr 

.global startRepayDemo__Q34Game10SingleGame9GameStateFv
startRepayDemo__Q34Game10SingleGame9GameStateFv:
/* 802172D0 00214210  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802172D4 00214214  7C 08 02 A6 */	mflr r0
/* 802172D8 00214218  90 01 00 64 */	stw r0, 0x64(r1)
/* 802172DC 0021421C  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802172E0 00214220  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802172E4 00214224  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802172E8 00214228  7C 7F 1B 78 */	mr r31, r3
/* 802172EC 0021422C  88 03 00 19 */	lbz r0, 0x19(r3)
/* 802172F0 00214230  28 00 00 00 */	cmplwi r0, 0
/* 802172F4 00214234  40 82 01 00 */	bne .L_802173F4
/* 802172F8 00214238  38 00 00 01 */	li r0, 1
/* 802172FC 0021423C  3C 60 80 48 */	lis r3, lbl_80482400@ha
/* 80217300 00214240  98 1F 00 19 */	stb r0, 0x19(r31)
/* 80217304 00214244  38 A3 24 00 */	addi r5, r3, lbl_80482400@l
/* 80217308 00214248  38 80 00 01 */	li r4, 1
/* 8021730C 0021424C  38 C0 00 03 */	li r6, 3
/* 80217310 00214250  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217314 00214254  4B F9 DC 81 */	bl setPause__Q24Game10GameSystemFbPci
/* 80217318 00214258  3C 80 80 48 */	lis r4, lbl_80482400@ha
/* 8021731C 0021425C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217320 00214260  38 A4 24 00 */	addi r5, r4, lbl_80482400@l
/* 80217324 00214264  38 80 00 01 */	li r4, 1
/* 80217328 00214268  4B F9 DC 5D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8021732C 0021426C  C0 02 BC 9C */	lfs f0, lbl_80519FFC@sda21(r2)
/* 80217330 00214270  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80217334 00214274  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217338 00214278  4B FD 1B 25 */	bl getRepayLevel__Q24Game8PlayDataFv
/* 8021733C 0021427C  7C 60 1B 78 */	mr r0, r3
/* 80217340 00214280  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217344 00214284  7C 1F 03 78 */	mr r31, r0
/* 80217348 00214288  7F E4 FB 78 */	mr r4, r31
/* 8021734C 0021428C  4B FD 1C 35 */	bl getRepayLevelPercent__Q24Game8PlayDataFi
/* 80217350 00214290  FF E0 08 90 */	fmr f31, f1
/* 80217354 00214294  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217358 00214298  4B FC EB 11 */	bl isCompletePelletTrigger__Q24Game8PlayDataFv
/* 8021735C 0021429C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217360 002142A0  41 82 00 34 */	beq .L_80217394
/* 80217364 002142A4  38 61 00 28 */	addi r3, r1, 0x28
/* 80217368 002142A8  38 80 00 02 */	li r4, 2
/* 8021736C 002142AC  38 A0 00 00 */	li r5, 0
/* 80217370 002142B0  48 1F 7E 71 */	bl __ct__Q32kh6Screen11DispPayDeptFQ42kh6Screen11DispPayDept11PayDeptTypei
/* 80217374 002142B4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217378 002142B8  38 81 00 28 */	addi r4, r1, 0x28
/* 8021737C 002142BC  48 1E 72 25 */	bl open_PayDept__Q26Screen9Game2DMgrFRQ32kh6Screen11DispPayDept
/* 80217380 002142C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217384 002142C4  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80217388 002142C8  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 8021738C 002142CC  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80217390 002142D0  48 00 00 60 */	b .L_802173F0
.L_80217394:
/* 80217394 002142D4  2C 1F 00 09 */	cmpwi r31, 9
/* 80217398 002142D8  40 80 00 2C */	bge .L_802173C4
/* 8021739C 002142DC  FC 00 F8 1E */	fctiwz f0, f31
/* 802173A0 002142E0  38 61 00 18 */	addi r3, r1, 0x18
/* 802173A4 002142E4  38 80 00 00 */	li r4, 0
/* 802173A8 002142E8  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802173AC 002142EC  80 A1 00 3C */	lwz r5, 0x3c(r1)
/* 802173B0 002142F0  48 1F 7E 31 */	bl __ct__Q32kh6Screen11DispPayDeptFQ42kh6Screen11DispPayDept11PayDeptTypei
/* 802173B4 002142F4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802173B8 002142F8  38 81 00 18 */	addi r4, r1, 0x18
/* 802173BC 002142FC  48 1E 71 E5 */	bl open_PayDept__Q26Screen9Game2DMgrFRQ32kh6Screen11DispPayDept
/* 802173C0 00214300  48 00 00 30 */	b .L_802173F0
.L_802173C4:
/* 802173C4 00214304  38 61 00 08 */	addi r3, r1, 8
/* 802173C8 00214308  38 80 00 01 */	li r4, 1
/* 802173CC 0021430C  38 A0 00 00 */	li r5, 0
/* 802173D0 00214310  48 1F 7E 11 */	bl __ct__Q32kh6Screen11DispPayDeptFQ42kh6Screen11DispPayDept11PayDeptTypei
/* 802173D4 00214314  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802173D8 00214318  38 81 00 08 */	addi r4, r1, 8
/* 802173DC 0021431C  48 1E 71 C5 */	bl open_PayDept__Q26Screen9Game2DMgrFRQ32kh6Screen11DispPayDept
/* 802173E0 00214320  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802173E4 00214324  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802173E8 00214328  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 802173EC 0021432C  98 03 00 3C */	stb r0, 0x3c(r3)
.L_802173F0:
/* 802173F0 00214330  48 25 45 6D */	bl PSPause_StartMenuOn__Fv
.L_802173F4:
/* 802173F4 00214334  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802173F8 00214338  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802173FC 0021433C  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80217400 00214340  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80217404 00214344  7C 08 03 A6 */	mtlr r0
/* 80217408 00214348  38 21 00 60 */	addi r1, r1, 0x60
/* 8021740C 0021434C  4E 80 00 20 */	blr 

.global updateRepayDemo__Q34Game10SingleGame9GameStateFv
updateRepayDemo__Q34Game10SingleGame9GameStateFv:
/* 80217410 00214350  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80217414 00214354  7C 08 02 A6 */	mflr r0
/* 80217418 00214358  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021741C 0021435C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80217420 00214360  7C 7F 1B 78 */	mr r31, r3
/* 80217424 00214364  88 03 00 19 */	lbz r0, 0x19(r3)
/* 80217428 00214368  28 00 00 00 */	cmplwi r0, 0
/* 8021742C 0021436C  41 82 00 74 */	beq .L_802174A0
/* 80217430 00214370  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217434 00214374  48 1E 72 15 */	bl check_PayDept__Q26Screen9Game2DMgrCFv
/* 80217438 00214378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021743C 0021437C  41 82 00 5C */	beq .L_80217498
/* 80217440 00214380  3C 80 80 48 */	lis r4, lbl_8048240C@ha
/* 80217444 00214384  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217448 00214388  38 A4 24 0C */	addi r5, r4, lbl_8048240C@l
/* 8021744C 0021438C  38 80 00 00 */	li r4, 0
/* 80217450 00214390  4B F9 DB 35 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80217454 00214394  38 00 00 00 */	li r0, 0
/* 80217458 00214398  98 1F 00 19 */	stb r0, 0x19(r31)
/* 8021745C 0021439C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217460 002143A0  4B FC EA 09 */	bl isCompletePelletTrigger__Q24Game8PlayDataFv
/* 80217464 002143A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217468 002143A8  41 82 00 0C */	beq .L_80217474
/* 8021746C 002143AC  38 60 00 04 */	li r3, 4
/* 80217470 002143B0  48 00 00 34 */	b .L_802174A4
.L_80217474:
/* 80217474 002143B4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217478 002143B8  4B FD 1C AD */	bl experienceRepayLevelFirstClear__Q24Game8PlayDataFv
/* 8021747C 002143BC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217480 002143C0  4B FD 19 DD */	bl getRepayLevel__Q24Game8PlayDataFv
/* 80217484 002143C4  2C 03 00 09 */	cmpwi r3, 9
/* 80217488 002143C8  38 60 00 02 */	li r3, 2
/* 8021748C 002143CC  41 80 00 18 */	blt .L_802174A4
/* 80217490 002143D0  38 60 00 03 */	li r3, 3
/* 80217494 002143D4  48 00 00 10 */	b .L_802174A4
.L_80217498:
/* 80217498 002143D8  38 60 00 01 */	li r3, 1
/* 8021749C 002143DC  48 00 00 08 */	b .L_802174A4
.L_802174A0:
/* 802174A0 002143E0  38 60 00 00 */	li r3, 0
.L_802174A4:
/* 802174A4 002143E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802174A8 002143E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802174AC 002143EC  7C 08 03 A6 */	mtlr r0
/* 802174B0 002143F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802174B4 002143F4  4E 80 00 20 */	blr 

.global draw__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionR8Graphics
draw__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSectionR8Graphics:
/* 802174B8 002143F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802174BC 002143FC  7C 08 02 A6 */	mflr r0
/* 802174C0 00214400  90 01 00 14 */	stw r0, 0x14(r1)
/* 802174C4 00214404  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802174C8 00214408  7C 9F 23 78 */	mr r31, r4
/* 802174CC 0021440C  88 03 00 18 */	lbz r0, 0x18(r3)
/* 802174D0 00214410  28 00 00 00 */	cmplwi r0, 0
/* 802174D4 00214414  40 82 00 48 */	bne .L_8021751C
/* 802174D8 00214418  88 03 00 20 */	lbz r0, 0x20(r3)
/* 802174DC 0021441C  28 00 00 00 */	cmplwi r0, 0
/* 802174E0 00214420  41 82 00 20 */	beq .L_80217500
/* 802174E4 00214424  7F E3 FB 78 */	mr r3, r31
/* 802174E8 00214428  7C A4 2B 78 */	mr r4, r5
/* 802174EC 0021442C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802174F0 00214430  81 8C 01 18 */	lwz r12, 0x118(r12)
/* 802174F4 00214434  7D 89 03 A6 */	mtctr r12
/* 802174F8 00214438  4E 80 04 21 */	bctrl 
/* 802174FC 0021443C  48 00 00 20 */	b .L_8021751C
.L_80217500:
/* 80217500 00214440  7F E3 FB 78 */	mr r3, r31
/* 80217504 00214444  7C A4 2B 78 */	mr r4, r5
/* 80217508 00214448  4B F3 47 21 */	bl doDraw__Q24Game15BaseGameSectionFR8Graphics
/* 8021750C 0021444C  7F E3 FB 78 */	mr r3, r31
/* 80217510 00214450  4B F3 E5 69 */	bl drawMainMapScreen__Q24Game17SingleGameSectionFv
/* 80217514 00214454  7F E3 FB 78 */	mr r3, r31
/* 80217518 00214458  4B F3 7C C1 */	bl test_draw_treasure_detector__Q24Game15BaseGameSectionFv
.L_8021751C:
/* 8021751C 0021445C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80217520 00214460  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80217524 00214464  7C 08 03 A6 */	mtlr r0
/* 80217528 00214468  38 21 00 10 */	addi r1, r1, 0x10
/* 8021752C 0021446C  4E 80 00 20 */	blr 

.if version == 1
.global cleanup__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
cleanup__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection:
/* 80217530 00214470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80217534 00214474  7C 08 02 A6 */	mflr r0
/* 80217538 00214478  3C 60 80 48 */	lis r3, lbl_80482418@ha
/* 8021753C 0021447C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80217540 00214480  38 A3 24 18 */	addi r5, r3, lbl_80482418@l
/* 80217544 00214484  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80217548 00214488  7C 9F 23 78 */	mr r31, r4
/* 8021754C 0021448C  38 80 00 00 */	li r4, 0
/* 80217550 00214490  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 80217554 00214494  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 80217558 00214498  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8021755C 0021449C  98 06 00 3C */	stb r0, 0x3c(r6)
/* 80217560 002144A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217564 002144A4  4B F9 DA 21 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80217568 002144A8  80 1F 00 FC */	lwz r0, 0x11c(r31)
/* 8021756C 002144AC  28 00 00 00 */	cmplwi r0, 0
/* 80217570 002144B0  41 82 00 08 */	beq .L_80217578
/* 80217574 002144B4  48 24 FE C5 */	bl PSMCancelToPauseOffMainBgm__Fv
.L_80217578:
/* 80217578 002144B8  7F E3 FB 78 */	mr r3, r31
/* 8021757C 002144BC  38 80 00 00 */	li r4, 0
/* 80217580 002144C0  48 02 40 19 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 80217584 002144C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80217588 002144C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021758C 002144CC  7C 08 03 A6 */	mtlr r0
/* 80217590 002144D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80217594 002144D4  4E 80 00 20 */	blr 
.else
.global cleanup__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection
cleanup__Q34Game10SingleGame9GameStateFPQ24Game17SingleGameSection:
/* 80217530 00214470  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80217534 00214474  7C 08 02 A6 */	mflr r0
/* 80217538 00214478  3C 60 80 48 */	lis r3, lbl_80482418@ha
/* 8021753C 0021447C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80217540 00214480  38 A3 24 18 */	addi r5, r3, lbl_80482418@l
/* 80217544 00214484  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80217548 00214488  7C 9F 23 78 */	mr r31, r4
/* 8021754C 0021448C  38 80 00 00 */	li r4, 0
/* 80217550 00214490  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 80217554 00214494  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 80217558 00214498  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 8021755C 0021449C  98 06 00 3C */	stb r0, 0x3c(r6)
/* 80217560 002144A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217564 002144A4  4B F9 DA 21 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80217568 002144A8  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 8021756C 002144AC  28 00 00 00 */	cmplwi r0, 0
/* 80217570 002144B0  41 82 00 08 */	beq .L_80217578
/* 80217574 002144B4  48 24 FE C5 */	bl PSMCancelToPauseOffMainBgm__Fv
.L_80217578:
/* 80217578 002144B8  7F E3 FB 78 */	mr r3, r31
/* 8021757C 002144BC  38 80 00 00 */	li r4, 0
/* 80217580 002144C0  48 02 40 19 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 80217584 002144C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80217588 002144C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021758C 002144CC  7C 08 03 A6 */	mtlr r0
/* 80217590 002144D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80217594 002144D4  4E 80 00 20 */	blr 
.endif

.global getSize__Q32og6Screen14DispMemberSaveFv
getSize__Q32og6Screen14DispMemberSaveFv:
/* 80217598 002144D8  38 60 00 0C */	li r3, 0xc
/* 8021759C 002144DC  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen14DispMemberSaveFv
getOwnerID__Q32og6Screen14DispMemberSaveFv:
/* 802175A0 002144E0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 802175A4 002144E4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 802175A8 002144E8  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen14DispMemberSaveFv
getMemberID__Q32og6Screen14DispMemberSaveFv:
/* 802175AC 002144EC  3C 80 53 41 */	lis r4, 0x53415645@ha
/* 802175B0 002144F0  38 60 00 00 */	li r3, 0
/* 802175B4 002144F4  38 84 56 45 */	addi r4, r4, 0x53415645@l
/* 802175B8 002144F8  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen19DispMemberSMenuContFv
getSize__Q32og6Screen19DispMemberSMenuContFv:
/* 802175BC 002144FC  38 60 00 08 */	li r3, 8
/* 802175C0 00214500  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen19DispMemberSMenuContFv
getOwnerID__Q32og6Screen19DispMemberSMenuContFv:
/* 802175C4 00214504  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 802175C8 00214508  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 802175CC 0021450C  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen19DispMemberSMenuContFv
getMemberID__Q32og6Screen19DispMemberSMenuContFv:
/* 802175D0 00214510  3C 80 43 4F */	lis r4, 0x434F4E54@ha
/* 802175D4 00214514  3C 60 00 53 */	lis r3, 0x00534D5F@ha
/* 802175D8 00214518  38 84 4E 54 */	addi r4, r4, 0x434F4E54@l
/* 802175DC 0021451C  38 63 4D 5F */	addi r3, r3, 0x00534D5F@l
/* 802175E0 00214520  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen22DispMemberSMenuPauseVSFv
getSize__Q32og6Screen22DispMemberSMenuPauseVSFv:
/* 802175E4 00214524  38 60 00 0C */	li r3, 0xc
/* 802175E8 00214528  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen22DispMemberSMenuPauseVSFv
getOwnerID__Q32og6Screen22DispMemberSMenuPauseVSFv:
/* 802175EC 0021452C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 802175F0 00214530  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 802175F4 00214534  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen22DispMemberSMenuPauseVSFv
getMemberID__Q32og6Screen22DispMemberSMenuPauseVSFv:
/* 802175F8 00214538  3C 80 53 5F */	lis r4, 0x535F5653@ha
/* 802175FC 0021453C  3C 60 53 4D */	lis r3, 0x534D5F50@ha
/* 80217600 00214540  38 84 56 53 */	addi r4, r4, 0x535F5653@l
/* 80217604 00214544  38 63 5F 50 */	addi r3, r3, 0x534D5F50@l
/* 80217608 00214548  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen18DispMemberSMenuMapFv
getSize__Q32og6Screen18DispMemberSMenuMapFv:
/* 8021760C 0021454C  38 60 00 4C */	li r3, 0x4c
/* 80217610 00214550  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen18DispMemberSMenuMapFv
getOwnerID__Q32og6Screen18DispMemberSMenuMapFv:
/* 80217614 00214554  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80217618 00214558  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8021761C 0021455C  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen18DispMemberSMenuMapFv
getMemberID__Q32og6Screen18DispMemberSMenuMapFv:
/* 80217620 00214560  3C 80 5F 4D */	lis r4, 0x5F4D4150@ha
/* 80217624 00214564  38 60 53 4D */	li r3, 0x534d
/* 80217628 00214568  38 84 41 50 */	addi r4, r4, 0x5F4D4150@l
/* 8021762C 0021456C  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen19DispMemberSMenuItemFv
getSize__Q32og6Screen19DispMemberSMenuItemFv:
/* 80217630 00214570  38 60 00 28 */	li r3, 0x28
/* 80217634 00214574  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen19DispMemberSMenuItemFv
getOwnerID__Q32og6Screen19DispMemberSMenuItemFv:
/* 80217638 00214578  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8021763C 0021457C  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80217640 00214580  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen19DispMemberSMenuItemFv
getMemberID__Q32og6Screen19DispMemberSMenuItemFv:
/* 80217644 00214584  3C 80 49 54 */	lis r4, 0x4954454D@ha
/* 80217648 00214588  3C 60 00 53 */	lis r3, 0x00534D5F@ha
/* 8021764C 0021458C  38 84 45 4D */	addi r4, r4, 0x4954454D@l
/* 80217650 00214590  38 63 4D 5F */	addi r3, r3, 0x00534D5F@l
/* 80217654 00214594  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
getSize__Q32og6Screen27DispMemberSMenuPauseDoukutuFv:
/* 80217658 00214598  38 60 00 18 */	li r3, 0x18
/* 8021765C 0021459C  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
getOwnerID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv:
/* 80217660 002145A0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80217664 002145A4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80217668 002145A8  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv
getMemberID__Q32og6Screen27DispMemberSMenuPauseDoukutuFv:
/* 8021766C 002145AC  3C 80 53 45 */	lis r4, 0x53455F44@ha
/* 80217670 002145B0  3C 60 00 50 */	lis r3, 0x00504155@ha
/* 80217674 002145B4  38 84 5F 44 */	addi r4, r4, 0x53455F44@l
/* 80217678 002145B8  38 63 41 55 */	addi r3, r3, 0x00504155@l
/* 8021767C 002145BC  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen20DispMemberSMenuPauseFv
getSize__Q32og6Screen20DispMemberSMenuPauseFv:
/* 80217680 002145C0  38 60 00 14 */	li r3, 0x14
/* 80217684 002145C4  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen20DispMemberSMenuPauseFv
getOwnerID__Q32og6Screen20DispMemberSMenuPauseFv:
/* 80217688 002145C8  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 8021768C 002145CC  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80217690 002145D0  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen20DispMemberSMenuPauseFv
getMemberID__Q32og6Screen20DispMemberSMenuPauseFv:
/* 80217694 002145D4  3C 80 41 55 */	lis r4, 0x41555345@ha
/* 80217698 002145D8  3C 60 53 4D */	lis r3, 0x534D5F50@ha
/* 8021769C 002145DC  38 84 53 45 */	addi r4, r4, 0x41555345@l
/* 802176A0 002145E0  38 63 5F 50 */	addi r3, r3, 0x534D5F50@l
/* 802176A4 002145E4  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen18DispMemberSMenuAllFv
getSize__Q32og6Screen18DispMemberSMenuAllFv:
/* 802176A8 002145E8  38 60 00 C4 */	li r3, 0xc4
/* 802176AC 002145EC  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen18DispMemberSMenuAllFv
getOwnerID__Q32og6Screen18DispMemberSMenuAllFv:
/* 802176B0 002145F0  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 802176B4 002145F4  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 802176B8 002145F8  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen18DispMemberSMenuAllFv
getMemberID__Q32og6Screen18DispMemberSMenuAllFv:
/* 802176BC 002145FC  3C 80 5F 41 */	lis r4, 0x5F414C4C@ha
/* 802176C0 00214600  38 60 53 4D */	li r3, 0x534d
/* 802176C4 00214604  38 84 4C 4C */	addi r4, r4, 0x5F414C4C@l
/* 802176C8 00214608  4E 80 00 20 */	blr 

.global doSetSubMemberAll__Q32og6Screen18DispMemberSMenuAllFv
doSetSubMemberAll__Q32og6Screen18DispMemberSMenuAllFv:
/* 802176CC 0021460C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802176D0 00214610  7C 08 02 A6 */	mflr r0
/* 802176D4 00214614  90 01 00 14 */	stw r0, 0x14(r1)
/* 802176D8 00214618  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802176DC 0021461C  7C 7F 1B 78 */	mr r31, r3
/* 802176E0 00214620  38 9F 00 08 */	addi r4, r31, 8
/* 802176E4 00214624  48 0F 7C F9 */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 802176E8 00214628  7F E3 FB 78 */	mr r3, r31
/* 802176EC 0021462C  38 9F 00 1C */	addi r4, r31, 0x1c
/* 802176F0 00214630  48 0F 7C ED */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 802176F4 00214634  7F E3 FB 78 */	mr r3, r31
/* 802176F8 00214638  38 9F 00 34 */	addi r4, r31, 0x34
/* 802176FC 0021463C  48 0F 7C E1 */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 80217700 00214640  7F E3 FB 78 */	mr r3, r31
/* 80217704 00214644  38 9F 00 5C */	addi r4, r31, 0x5c
/* 80217708 00214648  48 0F 7C D5 */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 8021770C 0021464C  7F E3 FB 78 */	mr r3, r31
/* 80217710 00214650  38 9F 00 A8 */	addi r4, r31, 0xa8
/* 80217714 00214654  48 0F 7C C9 */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 80217718 00214658  7F E3 FB 78 */	mr r3, r31
/* 8021771C 0021465C  38 9F 00 B4 */	addi r4, r31, 0xb4
/* 80217720 00214660  48 0F 7C BD */	bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
/* 80217724 00214664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80217728 00214668  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8021772C 0021466C  7C 08 03 A6 */	mtlr r0
/* 80217730 00214670  38 21 00 10 */	addi r1, r1, 0x10
/* 80217734 00214674  4E 80 00 20 */	blr 

__sinit_singleGS_MainGame_cpp: # static initializer
/* 80217738 00214678  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8021773C 0021467C  38 00 FF FF */	li r0, -1
/* 80217740 00214680  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80217744 00214684  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80217748 00214688  90 0D 95 68 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8021774C 0021468C  D4 03 04 D8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80217750 00214690  D0 0D 95 6C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80217754 00214694  D0 03 00 04 */	stfs f0, 4(r3)
/* 80217758 00214698  D0 03 00 08 */	stfs f0, 8(r3)
/* 8021775C 0021469C  4E 80 00 20 */	blr 
