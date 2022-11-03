.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_singleGS_CaveGame_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80482430:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
lbl_8048243C:
	.asciz "SingleGS_Game"
.balign 4
lbl_8048244C:
	.asciz "s0B_cv_coursein"
.balign 4
lbl_8048245C:
	.asciz "PSGame.h"
.balign 4
lbl_80482468:
	.asciz "P2Assert"
.balign 4
lbl_80482474:
	.asciz "PSScene.h"
.balign 4
lbl_80482480:
	.asciz "get sound scene at\ninvalid timming\n"
.balign 4
lbl_804824A4:
	.asciz "PSMainSide_Scene.h"
.balign 4
lbl_804824B8:
	.asciz "s05_pikminzero"
.balign 4
lbl_804824C8:
	.asciz "sm-giveup"
.balign 4
lbl_804824D4:
	.asciz "s12_cv_giveup"
.balign 4
lbl_804824E4:
	.asciz "singleGS_CaveGame.cpp"
.balign 4
lbl_804824FC:
	.asciz "no pod demo 12"
.balign 4
lbl_8048250C:
	.asciz "Illegal return value %d."
.balign 4
lbl_80482528:
	.asciz "cavestate:cleanup"
.balign 4
lbl_8048253C:
	.asciz "s03_orimadown"
.balign 4
lbl_8048254C:
	.asciz "s0C_cv_escape"
.balign 4
lbl_8048255C:
	.asciz "s09_holein"
.balign 4
lbl_80482568:
	.asciz "g07_cv_gamestart"
.balign 4
lbl_8048257C:
	.asciz "PikiKillArg"
.balign 4
lbl_80482588:
	.asciz "CreatureKillArg"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q34Game10SingleGame9CaveState
__vt__Q34Game10SingleGame9CaveState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
	.4byte exec__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
	.4byte cleanup__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
	.4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionR8Graphics
	.4byte onOrimaDown__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni
	.4byte onMovieStart__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni
	.4byte onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
	.4byte onNextFloor__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
	.4byte onFountainReturn__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
	.4byte on_section_fadeout__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
	.4byte on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051A000:
	.float 1.0
lbl_8051A004:
	.float 12800.0
lbl_8051A008:
	.float 0.0
lbl_8051A00C:
	.float 128000.0
.balign 4
lbl_8051A010:
	.asciz "sm-canc"
.balign 4
lbl_8051A018:
	.asciz "open-sm"
.balign 4
lbl_8051A020:
	.float 32768.0
.balign 8
lbl_8051A028:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051A030:
	.float 900.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.if version == 1
.global init__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
init__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game8StateArg:
/* 80217760 002146A0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80217764 002146A4  7C 08 02 A6 */	mflr r0
/* 80217768 002146A8  90 01 00 74 */	stw r0, 0x74(r1)
/* 8021776C 002146AC  38 00 00 00 */	li r0, 0
/* 80217770 002146B0  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80217774 002146B4  7C 9F 23 78 */	mr r31, r4
/* 80217778 002146B8  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8021777C 002146BC  7C 7E 1B 78 */	mr r30, r3
/* 80217780 002146C0  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80217784 002146C4  93 81 00 60 */	stw r28, 0x60(r1)
/* 80217788 002146C8  90 0D 96 18 */	stw r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 8021778C 002146CC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217790 002146D0  48 21 51 21 */	bl reset__Q24Game11MoviePlayerFv
/* 80217794 002146D4  38 00 00 00 */	li r0, 0
/* 80217798 002146D8  7F E3 FB 78 */	mr r3, r31
/* 8021779C 002146DC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 802177A0 002146E0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 802177A4 002146E4  4B F3 D3 A1 */	bl setupCaveGames__Q24Game17SingleGameSectionFv
/* 802177A8 002146E8  38 00 00 00 */	li r0, 0
/* 802177AC 002146EC  38 80 00 01 */	li r4, 1
/* 802177B0 002146F0  98 1F 01 94 */	stb r0, 0x1b8(r31)
/* 802177B4 002146F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802177B8 002146F8  48 20 BB B1 */	bl heapStatusDump__6SystemFb
/* 802177BC 002146FC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802177C0 00214700  38 00 00 01 */	li r0, 1
/* 802177C4 00214704  C0 22 BC A0 */	lfs f1, lbl_8051A000@sda21(r2)
/* 802177C8 00214708  7F E3 FB 78 */	mr r3, r31
/* 802177CC 0021470C  80 C4 00 40 */	lwz r6, 0x40(r4)
/* 802177D0 00214710  38 80 00 01 */	li r4, 1
/* 802177D4 00214714  C0 42 BC A4 */	lfs f2, lbl_8051A004@sda21(r2)
/* 802177D8 00214718  80 A6 02 40 */	lwz r5, 0x240(r6)
/* 802177DC 0021471C  60 A5 00 01 */	ori r5, r5, 1
/* 802177E0 00214720  90 A6 02 40 */	stw r5, 0x240(r6)
/* 802177E4 00214724  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 802177E8 00214728  88 A6 00 3C */	lbz r5, 0x3c(r6)
/* 802177EC 0021472C  60 A5 00 20 */	ori r5, r5, 0x20
/* 802177F0 00214730  98 A6 00 3C */	stb r5, 0x3c(r6)
/* 802177F4 00214734  80 AD 9A A0 */	lwz r5, gGame2DMgr__6Screen@sda21(r13)
/* 802177F8 00214738  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 802177FC 0021473C  98 05 00 91 */	stb r0, 0x91(r5)
/* 80217800 00214740  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80217804 00214744  98 05 00 48 */	stb r0, 0x48(r5)
/* 80217808 00214748  4B F3 65 19 */	bl setFixNearFar__Q24Game15BaseGameSectionFbff
/* 8021780C 0021474C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217810 00214750  38 C0 00 01 */	li r6, 1
/* 80217814 00214754  88 83 00 78 */	lbz r4, 0x78(r3)
/* 80217818 00214758  38 03 00 20 */	addi r0, r3, 0x20
/* 8021781C 0021475C  7C 83 1E 70 */	srawi r3, r4, 3
/* 80217820 00214760  54 65 18 38 */	slwi r5, r3, 3
/* 80217824 00214764  7C 63 00 50 */	subf r3, r3, r0
/* 80217828 00214768  7C A5 20 50 */	subf r5, r5, r4
/* 8021782C 0021476C  88 03 00 00 */	lbz r0, 0(r3)
/* 80217830 00214770  7C C3 28 30 */	slw r3, r6, r5
/* 80217834 00214774  7C 60 00 39 */	and. r0, r3, r0
/* 80217838 00214778  41 82 00 08 */	beq .L_80217840
/* 8021783C 0021477C  20 84 00 01 */	subfic r4, r4, 1
.L_80217840:
/* 80217840 00214780  7F E3 FB 78 */	mr r3, r31
/* 80217844 00214784  4B F3 60 D5 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80217848 00214788  7F E3 FB 78 */	mr r3, r31
/* 8021784C 0021478C  4B F3 65 3D */	bl setCamController__Q24Game15BaseGameSectionFv
/* 80217850 00214790  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217854 00214794  38 80 00 00 */	li r4, 0
/* 80217858 00214798  81 83 00 00 */	lwz r12, 0(r3)
/* 8021785C 0021479C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217860 002147A0  7D 89 03 A6 */	mtctr r12
/* 80217864 002147A4  4E 80 04 21 */	bctrl 
/* 80217868 002147A8  7C 60 1B 78 */	mr r0, r3
/* 8021786C 002147AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217870 002147B0  7C 1D 03 78 */	mr r29, r0
/* 80217874 002147B4  38 80 00 01 */	li r4, 1
/* 80217878 002147B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021787C 002147BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217880 002147C0  7D 89 03 A6 */	mtctr r12
/* 80217884 002147C4  4E 80 04 21 */	bctrl 
/* 80217888 002147C8  7C 60 1B 78 */	mr r0, r3
/* 8021788C 002147CC  7F A3 EB 78 */	mr r3, r29
/* 80217890 002147D0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80217894 002147D4  7C 1C 03 78 */	mr r28, r0
/* 80217898 002147D8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8021789C 002147DC  7D 89 03 A6 */	mtctr r12
/* 802178A0 002147E0  4E 80 04 21 */	bctrl 
/* 802178A4 002147E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802178A8 002147E8  41 82 00 64 */	beq .L_8021790C
/* 802178AC 002147EC  7F 83 E3 78 */	mr r3, r28
/* 802178B0 002147F0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802178B4 002147F4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802178B8 002147F8  7D 89 03 A6 */	mtctr r12
/* 802178BC 002147FC  4E 80 04 21 */	bctrl 
/* 802178C0 00214800  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802178C4 00214804  41 82 00 48 */	beq .L_8021790C
/* 802178C8 00214808  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802178CC 0021480C  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractFue@ha
/* 802178D0 00214810  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802178D4 00214814  38 A0 00 00 */	li r5, 0
/* 802178D8 00214818  90 01 00 18 */	stw r0, 0x18(r1)
/* 802178DC 0021481C  38 C3 49 BC */	addi r6, r3, __vt__Q24Game11InteractFue@l
/* 802178E0 00214820  38 00 00 01 */	li r0, 1
/* 802178E4 00214824  7F 83 E3 78 */	mr r3, r28
/* 802178E8 00214828  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 802178EC 0021482C  38 81 00 18 */	addi r4, r1, 0x18
/* 802178F0 00214830  90 C1 00 18 */	stw r6, 0x18(r1)
/* 802178F4 00214834  98 A1 00 20 */	stb r5, 0x20(r1)
/* 802178F8 00214838  98 01 00 21 */	stb r0, 0x21(r1)
/* 802178FC 0021483C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80217900 00214840  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80217904 00214844  7D 89 03 A6 */	mtctr r12
/* 80217908 00214848  4E 80 04 21 */	bctrl 
.L_8021790C:
/* 8021790C 0021484C  80 DF 00 C8 */	lwz r6, 0xe8(r31)
/* 80217910 00214850  3C 60 80 48 */	lis r3, lbl_8048244C@ha
/* 80217914 00214854  38 00 00 00 */	li r0, 0
/* 80217918 00214858  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 8021791C 0021485C  38 83 24 4C */	addi r4, r3, lbl_8048244C@l
/* 80217920 00214860  90 01 00 28 */	stw r0, 0x28(r1)
/* 80217924 00214864  3B A1 00 3C */	addi r29, r1, 0x3c
/* 80217928 00214868  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8021792C 0021486C  90 81 00 24 */	stw r4, 0x24(r1)
/* 80217930 00214870  7F A4 EB 78 */	mr r4, r29
/* 80217934 00214874  38 A0 00 00 */	li r5, 0
/* 80217938 00214878  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8021793C 0021487C  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80217940 00214880  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80217944 00214884  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80217948 00214888  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8021794C 0021488C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80217950 00214890  90 01 00 34 */	stw r0, 0x34(r1)
/* 80217954 00214894  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80217958 00214898  90 01 00 50 */	stw r0, 0x50(r1)
/* 8021795C 0021489C  90 01 00 38 */	stw r0, 0x38(r1)
/* 80217960 002148A0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80217964 002148A4  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 80217968 002148A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8021796C 002148AC  81 83 00 04 */	lwz r12, 4(r3)
/* 80217970 002148B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80217974 002148B4  7D 89 03 A6 */	mtctr r12
/* 80217978 002148B8  4E 80 04 21 */	bctrl 
/* 8021797C 002148BC  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80217980 002148C0  80 63 00 AC */	lwz r3, 0xac(r3)
/* 80217984 002148C4  28 03 00 00 */	cmplwi r3, 0
/* 80217988 002148C8  41 82 00 18 */	beq .L_802179A0
/* 8021798C 002148CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80217990 002148D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80217994 002148D4  7D 89 03 A6 */	mtctr r12
/* 80217998 002148D8  4E 80 04 21 */	bctrl 
/* 8021799C 002148DC  D0 21 00 48 */	stfs f1, 0x48(r1)
.L_802179A0:
/* 802179A0 002148E0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802179A4 002148E4  7F A4 EB 78 */	mr r4, r29
/* 802179A8 002148E8  81 83 00 04 */	lwz r12, 4(r3)
/* 802179AC 002148EC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802179B0 002148F0  7D 89 03 A6 */	mtctr r12
/* 802179B4 002148F4  4E 80 04 21 */	bctrl 
/* 802179B8 002148F8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802179BC 002148FC  7F A4 EB 78 */	mr r4, r29
/* 802179C0 00214900  81 83 00 04 */	lwz r12, 4(r3)
/* 802179C4 00214904  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802179C8 00214908  7D 89 03 A6 */	mtctr r12
/* 802179CC 0021490C  4E 80 04 21 */	bctrl 
/* 802179D0 00214910  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 802179D4 00214914  38 81 00 24 */	addi r4, r1, 0x24
/* 802179D8 00214918  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802179DC 0021491C  48 21 4F F5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802179E0 00214920  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802179E4 00214924  48 1E 5D 49 */	bl startCount_Floor__Q26Screen9Game2DMgrFv
/* 802179E8 00214928  7F E3 FB 78 */	mr r3, r31
/* 802179EC 0021492C  4B F3 C5 AD */	bl clearCaveMenus__Q24Game17SingleGameSectionFv
/* 802179F0 00214930  38 E0 00 00 */	li r7, 0
/* 802179F4 00214934  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 802179F8 00214938  98 FE 00 11 */	stb r7, 0x11(r30)
/* 802179FC 0021493C  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 80217A00 00214940  C0 22 BC AC */	lfs f1, lbl_8051A00C@sda21(r2)
/* 80217A04 00214944  38 A1 00 0C */	addi r5, r1, 0xc
/* 80217A08 00214948  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217A0C 0021494C  38 C1 00 08 */	addi r6, r1, 8
/* 80217A10 00214950  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80217A14 00214954  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80217A18 00214958  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80217A1C 0021495C  98 FF 02 3D */	stb r7, 0x261(r31)
/* 80217A20 00214960  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80217A24 00214964  48 00 6D 51 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80217A28 00214968  2C 03 00 00 */	cmpwi r3, 0
/* 80217A2C 0021496C  40 82 00 10 */	bne .L_80217A3C
/* 80217A30 00214970  38 00 00 01 */	li r0, 1
/* 80217A34 00214974  98 1F 02 3E */	stb r0, 0x262(r31)
/* 80217A38 00214978  48 00 00 0C */	b .L_80217A44
.L_80217A3C:
/* 80217A3C 0021497C  38 00 00 00 */	li r0, 0
/* 80217A40 00214980  98 1F 02 3E */	stb r0, 0x262(r31)
.L_80217A44:
/* 80217A44 00214984  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80217A48 00214988  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80217A4C 0021498C  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80217A50 00214990  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 80217A54 00214994  83 81 00 60 */	lwz r28, 0x60(r1)
/* 80217A58 00214998  7C 08 03 A6 */	mtlr r0
/* 80217A5C 0021499C  38 21 00 70 */	addi r1, r1, 0x70
/* 80217A60 002149A0  4E 80 00 20 */	blr 
.else
.global init__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
init__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game8StateArg:
/* 80217760 002146A0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80217764 002146A4  7C 08 02 A6 */	mflr r0
/* 80217768 002146A8  90 01 00 74 */	stw r0, 0x74(r1)
/* 8021776C 002146AC  38 00 00 00 */	li r0, 0
/* 80217770 002146B0  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80217774 002146B4  7C 9F 23 78 */	mr r31, r4
/* 80217778 002146B8  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8021777C 002146BC  7C 7E 1B 78 */	mr r30, r3
/* 80217780 002146C0  93 A1 00 64 */	stw r29, 0x64(r1)
/* 80217784 002146C4  93 81 00 60 */	stw r28, 0x60(r1)
/* 80217788 002146C8  90 0D 96 18 */	stw r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 8021778C 002146CC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217790 002146D0  48 21 51 21 */	bl reset__Q24Game11MoviePlayerFv
/* 80217794 002146D4  38 00 00 00 */	li r0, 0
/* 80217798 002146D8  7F E3 FB 78 */	mr r3, r31
/* 8021779C 002146DC  98 1E 00 10 */	stb r0, 0x10(r30)
/* 802177A0 002146E0  98 1E 00 18 */	stb r0, 0x18(r30)
/* 802177A4 002146E4  4B F3 D3 A1 */	bl setupCaveGames__Q24Game17SingleGameSectionFv
/* 802177A8 002146E8  38 00 00 00 */	li r0, 0
/* 802177AC 002146EC  38 80 00 01 */	li r4, 1
/* 802177B0 002146F0  98 1F 01 94 */	stb r0, 0x194(r31)
/* 802177B4 002146F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802177B8 002146F8  48 20 BB B1 */	bl heapStatusDump__6SystemFb
/* 802177BC 002146FC  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 802177C0 00214700  38 00 00 01 */	li r0, 1
/* 802177C4 00214704  C0 22 BC A0 */	lfs f1, lbl_8051A000@sda21(r2)
/* 802177C8 00214708  7F E3 FB 78 */	mr r3, r31
/* 802177CC 0021470C  80 C4 00 40 */	lwz r6, 0x40(r4)
/* 802177D0 00214710  38 80 00 01 */	li r4, 1
/* 802177D4 00214714  C0 42 BC A4 */	lfs f2, lbl_8051A004@sda21(r2)
/* 802177D8 00214718  80 A6 02 40 */	lwz r5, 0x240(r6)
/* 802177DC 0021471C  60 A5 00 01 */	ori r5, r5, 1
/* 802177E0 00214720  90 A6 02 40 */	stw r5, 0x240(r6)
/* 802177E4 00214724  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 802177E8 00214728  88 A6 00 3C */	lbz r5, 0x3c(r6)
/* 802177EC 0021472C  60 A5 00 20 */	ori r5, r5, 0x20
/* 802177F0 00214730  98 A6 00 3C */	stb r5, 0x3c(r6)
/* 802177F4 00214734  80 AD 9A A0 */	lwz r5, gGame2DMgr__6Screen@sda21(r13)
/* 802177F8 00214738  80 A5 00 18 */	lwz r5, 0x18(r5)
/* 802177FC 0021473C  98 05 00 91 */	stb r0, 0x91(r5)
/* 80217800 00214740  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80217804 00214744  98 05 00 48 */	stb r0, 0x48(r5)
/* 80217808 00214748  4B F3 65 19 */	bl setFixNearFar__Q24Game15BaseGameSectionFbff
/* 8021780C 0021474C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80217810 00214750  38 C0 00 01 */	li r6, 1
/* 80217814 00214754  88 83 00 78 */	lbz r4, 0x78(r3)
/* 80217818 00214758  38 03 00 20 */	addi r0, r3, 0x20
/* 8021781C 0021475C  7C 83 1E 70 */	srawi r3, r4, 3
/* 80217820 00214760  54 65 18 38 */	slwi r5, r3, 3
/* 80217824 00214764  7C 63 00 50 */	subf r3, r3, r0
/* 80217828 00214768  7C A5 20 50 */	subf r5, r5, r4
/* 8021782C 0021476C  88 03 00 00 */	lbz r0, 0(r3)
/* 80217830 00214770  7C C3 28 30 */	slw r3, r6, r5
/* 80217834 00214774  7C 60 00 39 */	and. r0, r3, r0
/* 80217838 00214778  41 82 00 08 */	beq .L_80217840
/* 8021783C 0021477C  20 84 00 01 */	subfic r4, r4, 1
.L_80217840:
/* 80217840 00214780  7F E3 FB 78 */	mr r3, r31
/* 80217844 00214784  4B F3 60 D5 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80217848 00214788  7F E3 FB 78 */	mr r3, r31
/* 8021784C 0021478C  4B F3 65 3D */	bl setCamController__Q24Game15BaseGameSectionFv
/* 80217850 00214790  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217854 00214794  38 80 00 00 */	li r4, 0
/* 80217858 00214798  81 83 00 00 */	lwz r12, 0(r3)
/* 8021785C 0021479C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217860 002147A0  7D 89 03 A6 */	mtctr r12
/* 80217864 002147A4  4E 80 04 21 */	bctrl 
/* 80217868 002147A8  7C 60 1B 78 */	mr r0, r3
/* 8021786C 002147AC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217870 002147B0  7C 1D 03 78 */	mr r29, r0
/* 80217874 002147B4  38 80 00 01 */	li r4, 1
/* 80217878 002147B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021787C 002147BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217880 002147C0  7D 89 03 A6 */	mtctr r12
/* 80217884 002147C4  4E 80 04 21 */	bctrl 
/* 80217888 002147C8  7C 60 1B 78 */	mr r0, r3
/* 8021788C 002147CC  7F A3 EB 78 */	mr r3, r29
/* 80217890 002147D0  81 9D 00 00 */	lwz r12, 0(r29)
/* 80217894 002147D4  7C 1C 03 78 */	mr r28, r0
/* 80217898 002147D8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8021789C 002147DC  7D 89 03 A6 */	mtctr r12
/* 802178A0 002147E0  4E 80 04 21 */	bctrl 
/* 802178A4 002147E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802178A8 002147E8  41 82 00 64 */	beq .L_8021790C
/* 802178AC 002147EC  7F 83 E3 78 */	mr r3, r28
/* 802178B0 002147F0  81 9C 00 00 */	lwz r12, 0(r28)
/* 802178B4 002147F4  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802178B8 002147F8  7D 89 03 A6 */	mtctr r12
/* 802178BC 002147FC  4E 80 04 21 */	bctrl 
/* 802178C0 00214800  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802178C4 00214804  41 82 00 48 */	beq .L_8021790C
/* 802178C8 00214808  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802178CC 0021480C  3C 60 80 4B */	lis r3, __vt__Q24Game11InteractFue@ha
/* 802178D0 00214810  38 04 A3 00 */	addi r0, r4, __vt__Q24Game11Interaction@l
/* 802178D4 00214814  38 A0 00 00 */	li r5, 0
/* 802178D8 00214818  90 01 00 18 */	stw r0, 0x18(r1)
/* 802178DC 0021481C  38 C3 49 BC */	addi r6, r3, __vt__Q24Game11InteractFue@l
/* 802178E0 00214820  38 00 00 01 */	li r0, 1
/* 802178E4 00214824  7F 83 E3 78 */	mr r3, r28
/* 802178E8 00214828  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 802178EC 0021482C  38 81 00 18 */	addi r4, r1, 0x18
/* 802178F0 00214830  90 C1 00 18 */	stw r6, 0x18(r1)
/* 802178F4 00214834  98 A1 00 20 */	stb r5, 0x20(r1)
/* 802178F8 00214838  98 01 00 21 */	stb r0, 0x21(r1)
/* 802178FC 0021483C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80217900 00214840  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80217904 00214844  7D 89 03 A6 */	mtctr r12
/* 80217908 00214848  4E 80 04 21 */	bctrl 
.L_8021790C:
/* 8021790C 0021484C  80 DF 00 C8 */	lwz r6, 0xc8(r31)
/* 80217910 00214850  3C 60 80 48 */	lis r3, lbl_8048244C@ha
/* 80217914 00214854  38 00 00 00 */	li r0, 0
/* 80217918 00214858  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 8021791C 0021485C  38 83 24 4C */	addi r4, r3, lbl_8048244C@l
/* 80217920 00214860  90 01 00 28 */	stw r0, 0x28(r1)
/* 80217924 00214864  3B A1 00 3C */	addi r29, r1, 0x3c
/* 80217928 00214868  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8021792C 0021486C  90 81 00 24 */	stw r4, 0x24(r1)
/* 80217930 00214870  7F A4 EB 78 */	mr r4, r29
/* 80217934 00214874  38 A0 00 00 */	li r5, 0
/* 80217938 00214878  90 C1 00 30 */	stw r6, 0x30(r1)
/* 8021793C 0021487C  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80217940 00214880  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80217944 00214884  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80217948 00214888  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8021794C 0021488C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80217950 00214890  90 01 00 34 */	stw r0, 0x34(r1)
/* 80217954 00214894  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80217958 00214898  90 01 00 50 */	stw r0, 0x50(r1)
/* 8021795C 0021489C  90 01 00 38 */	stw r0, 0x38(r1)
/* 80217960 002148A0  90 01 00 54 */	stw r0, 0x54(r1)
/* 80217964 002148A4  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 80217968 002148A8  90 01 00 34 */	stw r0, 0x34(r1)
/* 8021796C 002148AC  81 83 00 04 */	lwz r12, 4(r3)
/* 80217970 002148B0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80217974 002148B4  7D 89 03 A6 */	mtctr r12
/* 80217978 002148B8  4E 80 04 21 */	bctrl 
/* 8021797C 002148BC  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80217980 002148C0  80 63 00 AC */	lwz r3, 0xac(r3)
/* 80217984 002148C4  28 03 00 00 */	cmplwi r3, 0
/* 80217988 002148C8  41 82 00 18 */	beq .L_802179A0
/* 8021798C 002148CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80217990 002148D0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80217994 002148D4  7D 89 03 A6 */	mtctr r12
/* 80217998 002148D8  4E 80 04 21 */	bctrl 
/* 8021799C 002148DC  D0 21 00 48 */	stfs f1, 0x48(r1)
.L_802179A0:
/* 802179A0 002148E0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802179A4 002148E4  7F A4 EB 78 */	mr r4, r29
/* 802179A8 002148E8  81 83 00 04 */	lwz r12, 4(r3)
/* 802179AC 002148EC  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802179B0 002148F0  7D 89 03 A6 */	mtctr r12
/* 802179B4 002148F4  4E 80 04 21 */	bctrl 
/* 802179B8 002148F8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802179BC 002148FC  7F A4 EB 78 */	mr r4, r29
/* 802179C0 00214900  81 83 00 04 */	lwz r12, 4(r3)
/* 802179C4 00214904  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802179C8 00214908  7D 89 03 A6 */	mtctr r12
/* 802179CC 0021490C  4E 80 04 21 */	bctrl 
/* 802179D0 00214910  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 802179D4 00214914  38 81 00 24 */	addi r4, r1, 0x24
/* 802179D8 00214918  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802179DC 0021491C  48 21 4F F5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802179E0 00214920  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802179E4 00214924  48 1E 5D 49 */	bl startCount_Floor__Q26Screen9Game2DMgrFv
/* 802179E8 00214928  7F E3 FB 78 */	mr r3, r31
/* 802179EC 0021492C  4B F3 C5 AD */	bl clearCaveMenus__Q24Game17SingleGameSectionFv
/* 802179F0 00214930  38 E0 00 00 */	li r7, 0
/* 802179F4 00214934  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 802179F8 00214938  98 FE 00 11 */	stb r7, 0x11(r30)
/* 802179FC 0021493C  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 80217A00 00214940  C0 22 BC AC */	lfs f1, lbl_8051A00C@sda21(r2)
/* 80217A04 00214944  38 A1 00 0C */	addi r5, r1, 0xc
/* 80217A08 00214948  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217A0C 0021494C  38 C1 00 08 */	addi r6, r1, 8
/* 80217A10 00214950  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80217A14 00214954  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80217A18 00214958  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80217A1C 0021495C  98 FF 02 3D */	stb r7, 0x23d(r31)
/* 80217A20 00214960  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80217A24 00214964  48 00 6D 51 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80217A28 00214968  2C 03 00 00 */	cmpwi r3, 0
/* 80217A2C 0021496C  40 82 00 10 */	bne .L_80217A3C
/* 80217A30 00214970  38 00 00 01 */	li r0, 1
/* 80217A34 00214974  98 1F 02 3E */	stb r0, 0x23e(r31)
/* 80217A38 00214978  48 00 00 0C */	b .L_80217A44
.L_80217A3C:
/* 80217A3C 0021497C  38 00 00 00 */	li r0, 0
/* 80217A40 00214980  98 1F 02 3E */	stb r0, 0x23e(r31)
.L_80217A44:
/* 80217A44 00214984  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80217A48 00214988  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80217A4C 0021498C  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80217A50 00214990  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 80217A54 00214994  83 81 00 60 */	lwz r28, 0x60(r1)
/* 80217A58 00214998  7C 08 03 A6 */	mtlr r0
/* 80217A5C 0021499C  38 21 00 70 */	addi r1, r1, 0x70
/* 80217A60 002149A0  4E 80 00 20 */	blr 
.endif

.global on_section_fadeout__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
on_section_fadeout__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection:
/* 80217A64 002149A4  38 00 00 01 */	li r0, 1
/* 80217A68 002149A8  98 03 00 11 */	stb r0, 0x11(r3)
/* 80217A6C 002149AC  4E 80 00 20 */	blr 

.if version == 1
.global exec__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
exec__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection:
/* 80217A70 002149B0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80217A74 002149B4  7C 08 02 A6 */	mflr r0
/* 80217A78 002149B8  90 01 00 74 */	stw r0, 0x74(r1)
/* 80217A7C 002149BC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80217A80 002149C0  7C 9F 23 78 */	mr r31, r4
/* 80217A84 002149C4  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80217A88 002149C8  7C 7E 1B 78 */	mr r30, r3
/* 80217A8C 002149CC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80217A90 002149D0  28 00 00 00 */	cmplwi r0, 0
/* 80217A94 002149D4  40 82 02 98 */	bne .L_80217D2C
/* 80217A98 002149D8  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80217A9C 002149DC  28 00 00 00 */	cmplwi r0, 0
/* 80217AA0 002149E0  41 82 00 68 */	beq .L_80217B08
/* 80217AA4 002149E4  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80217AA8 002149E8  48 1A 1B 09 */	bl update__14TParticle2dMgrFv
/* 80217AAC 002149EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217AB0 002149F0  48 1E 45 7D */	bl update__Q26Screen9Game2DMgrFv
/* 80217AB4 002149F4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217AB8 002149F8  48 1E 6C 95 */	bl check_Save__Q26Screen9Game2DMgrCFv
/* 80217ABC 002149FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217AC0 00214A00  41 82 02 6C */	beq .L_80217D2C
/* 80217AC4 00214A04  89 1F 02 3C */	lbz r8, 0x260(r31)
/* 80217AC8 00214A08  38 E0 00 00 */	li r7, 0
/* 80217ACC 00214A0C  38 00 00 01 */	li r0, 1
/* 80217AD0 00214A10  7F C3 F3 78 */	mr r3, r30
/* 80217AD4 00214A14  98 E1 00 08 */	stb r7, 8(r1)
/* 80217AD8 00214A18  7F E4 FB 78 */	mr r4, r31
/* 80217ADC 00214A1C  38 C1 00 08 */	addi r6, r1, 8
/* 80217AE0 00214A20  38 A0 00 02 */	li r5, 2
/* 80217AE4 00214A24  98 E1 00 09 */	stb r7, 9(r1)
/* 80217AE8 00214A28  99 01 00 0A */	stb r8, 0xa(r1)
/* 80217AEC 00214A2C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80217AF0 00214A30  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217AF4 00214A34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80217AF8 00214A38  7D 89 03 A6 */	mtctr r12
/* 80217AFC 00214A3C  4E 80 04 21 */	bctrl 
/* 80217B00 00214A40  48 00 02 2C */	b .L_80217D2C
/* 80217B04 00214A44  48 00 02 28 */	b .L_80217D2C
.L_80217B08:
/* 80217B08 00214A48  7F E3 FB 78 */	mr r3, r31
/* 80217B0C 00214A4C  4B F3 3D 71 */	bl doUpdate__Q24Game15BaseGameSectionFv
/* 80217B10 00214A50  80 0D 96 88 */	lwz r0, randMapMgr__Q24Game4Cave@sda21(r13)
/* 80217B14 00214A54  28 00 00 00 */	cmplwi r0, 0
/* 80217B18 00214A58  41 82 00 50 */	beq .L_80217B68
/* 80217B1C 00214A5C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217B20 00214A60  4B F4 31 01 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80217B24 00214A64  28 03 00 00 */	cmplwi r3, 0
/* 80217B28 00214A68  41 82 00 40 */	beq .L_80217B68
/* 80217B2C 00214A6C  7C 64 1B 78 */	mr r4, r3
/* 80217B30 00214A70  38 61 00 1C */	addi r3, r1, 0x1c
/* 80217B34 00214A74  81 84 00 00 */	lwz r12, 0(r4)
/* 80217B38 00214A78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80217B3C 00214A7C  7D 89 03 A6 */	mtctr r12
/* 80217B40 00214A80  4E 80 04 21 */	bctrl 
/* 80217B44 00214A84  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80217B48 00214A88  38 81 00 28 */	addi r4, r1, 0x28
/* 80217B4C 00214A8C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80217B50 00214A90  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80217B54 00214A94  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80217B58 00214A98  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 80217B5C 00214A9C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80217B60 00214AA0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80217B64 00214AA4  48 02 D3 5D */	bl "radarMapPartsOpen__Q34Game4Cave10RandMapMgrFR10Vector3<f>"
.L_80217B68:
/* 80217B68 00214AA8  80 7F 02 50 */	lwz r3, 0x274(r31)
/* 80217B6C 00214AAC  80 1E 00 04 */	lwz r0, 4(r30)
/* 80217B70 00214AB0  80 63 00 04 */	lwz r3, 4(r3)
/* 80217B74 00214AB4  7C 03 00 00 */	cmpw r3, r0
/* 80217B78 00214AB8  40 82 01 B4 */	bne .L_80217D2C
/* 80217B7C 00214ABC  7F E3 FB 78 */	mr r3, r31
/* 80217B80 00214AC0  4B F3 DE FD */	bl updateCaveScreen__Q24Game17SingleGameSectionFv
/* 80217B84 00214AC4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217B88 00214AC8  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 80217B8C 00214ACC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80217B90 00214AD0  40 82 01 10 */	bne .L_80217CA0
/* 80217B94 00214AD4  38 60 FF FF */	li r3, -1
/* 80217B98 00214AD8  4B FB 92 C9 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80217B9C 00214ADC  2C 03 00 00 */	cmpwi r3, 0
/* 80217BA0 00214AE0  40 82 01 00 */	bne .L_80217CA0
/* 80217BA4 00214AE4  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80217BA8 00214AE8  3C 60 80 48 */	lis r3, lbl_804824B8@ha
/* 80217BAC 00214AEC  38 83 24 B8 */	addi r4, r3, lbl_804824B8@l
/* 80217BB0 00214AF0  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80217BB4 00214AF4  88 65 00 3C */	lbz r3, 0x3c(r5)
/* 80217BB8 00214AF8  38 00 00 00 */	li r0, 0
/* 80217BBC 00214AFC  54 63 06 F2 */	rlwinm r3, r3, 0, 0x1b, 0x19
/* 80217BC0 00214B00  98 65 00 3C */	stb r3, 0x3c(r5)
/* 80217BC4 00214B04  80 BF 00 C8 */	lwz r5, 0xe8(r31)
/* 80217BC8 00214B08  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217BCC 00214B0C  90 81 00 34 */	stw r4, 0x34(r1)
/* 80217BD0 00214B10  90 01 00 38 */	stw r0, 0x38(r1)
/* 80217BD4 00214B14  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80217BD8 00214B18  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80217BDC 00214B1C  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80217BE0 00214B20  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80217BE4 00214B24  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80217BE8 00214B28  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80217BEC 00214B2C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80217BF0 00214B30  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80217BF4 00214B34  90 01 00 60 */	stw r0, 0x60(r1)
/* 80217BF8 00214B38  90 01 00 48 */	stw r0, 0x48(r1)
/* 80217BFC 00214B3C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80217C00 00214B40  4B F4 30 21 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80217C04 00214B44  7C 7E 1B 79 */	or. r30, r3, r3
/* 80217C08 00214B48  40 82 00 38 */	bne .L_80217C40
/* 80217C0C 00214B4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217C10 00214B50  38 80 00 01 */	li r4, 1
/* 80217C14 00214B54  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80217C18 00214B58  80 03 00 E4 */	lwz r0, 0x104(r3)
/* 80217C1C 00214B5C  2C 00 00 00 */	cmpwi r0, 0
/* 80217C20 00214B60  40 82 00 08 */	bne .L_80217C28
/* 80217C24 00214B64  38 80 00 00 */	li r4, 0
.L_80217C28:
/* 80217C28 00214B68  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217C2C 00214B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80217C30 00214B70  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217C34 00214B74  7D 89 03 A6 */	mtctr r12
/* 80217C38 00214B78  4E 80 04 21 */	bctrl 
/* 80217C3C 00214B7C  7C 7E 1B 78 */	mr r30, r3
.L_80217C40:
/* 80217C40 00214B80  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 80217C44 00214B84  7F C4 F3 78 */	mr r4, r30
/* 80217C48 00214B88  38 61 00 10 */	addi r3, r1, 0x10
/* 80217C4C 00214B8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80217C50 00214B90  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217C54 00214B94  81 8C 00 08 */	lwz r12, 8(r12)
/* 80217C58 00214B98  7D 89 03 A6 */	mtctr r12
/* 80217C5C 00214B9C  4E 80 04 21 */	bctrl 
/* 80217C60 00214BA0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80217C64 00214BA4  7F C3 F3 78 */	mr r3, r30
/* 80217C68 00214BA8  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80217C6C 00214BAC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80217C70 00214BB0  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 80217C74 00214BB4  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80217C78 00214BB8  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80217C7C 00214BBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217C80 00214BC0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80217C84 00214BC4  7D 89 03 A6 */	mtctr r12
/* 80217C88 00214BC8  4E 80 04 21 */	bctrl 
/* 80217C8C 00214BCC  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80217C90 00214BD0  38 81 00 34 */	addi r4, r1, 0x34
/* 80217C94 00214BD4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217C98 00214BD8  48 21 4D 39 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80217C9C 00214BDC  48 00 00 90 */	b .L_80217D2C
.L_80217CA0:
/* 80217CA0 00214BE0  88 1F 01 80 */	lbz r0, 0x1a4(r31)
/* 80217CA4 00214BE4  28 00 00 00 */	cmplwi r0, 0
/* 80217CA8 00214BE8  41 82 00 14 */	beq .L_80217CBC
/* 80217CAC 00214BEC  7F E3 FB 78 */	mr r3, r31
/* 80217CB0 00214BF0  4B F3 CA 6D */	bl updateCaveMenus__Q24Game17SingleGameSectionFv
/* 80217CB4 00214BF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217CB8 00214BF8  41 82 00 74 */	beq .L_80217D2C
.L_80217CBC:
/* 80217CBC 00214BFC  7F C3 F3 78 */	mr r3, r30
/* 80217CC0 00214C00  7F E4 FB 78 */	mr r4, r31
/* 80217CC4 00214C04  48 00 01 19 */	bl check_SMenu__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
/* 80217CC8 00214C08  48 24 10 C9 */	bl PSMGetPikminNumD__Fv
/* 80217CCC 00214C0C  7C 60 1B 78 */	mr r0, r3
/* 80217CD0 00214C10  38 60 FF FF */	li r3, -1
/* 80217CD4 00214C14  7C 1E 03 78 */	mr r30, r0
/* 80217CD8 00214C18  4B FB 91 39 */	bl getMapPikmins_exclude_Me__Q24Game8GameStatFi
/* 80217CDC 00214C1C  2C 03 00 0A */	cmpwi r3, 0xa
/* 80217CE0 00214C20  40 80 00 30 */	bge .L_80217D10
/* 80217CE4 00214C24  80 0D 96 18 */	lwz r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 80217CE8 00214C28  2C 00 00 00 */	cmpwi r0, 0
/* 80217CEC 00214C2C  40 81 00 24 */	ble .L_80217D10
/* 80217CF0 00214C30  28 1E 00 00 */	cmplwi r30, 0
/* 80217CF4 00214C34  41 82 00 38 */	beq .L_80217D2C
/* 80217CF8 00214C38  7F C3 F3 78 */	mr r3, r30
/* 80217CFC 00214C3C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217D00 00214C40  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80217D04 00214C44  7D 89 03 A6 */	mtctr r12
/* 80217D08 00214C48  4E 80 04 21 */	bctrl 
/* 80217D0C 00214C4C  48 00 00 20 */	b .L_80217D2C
.L_80217D10:
/* 80217D10 00214C50  28 1E 00 00 */	cmplwi r30, 0
/* 80217D14 00214C54  41 82 00 18 */	beq .L_80217D2C
/* 80217D18 00214C58  7F C3 F3 78 */	mr r3, r30
/* 80217D1C 00214C5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217D20 00214C60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80217D24 00214C64  7D 89 03 A6 */	mtctr r12
/* 80217D28 00214C68  4E 80 04 21 */	bctrl 
.L_80217D2C:
/* 80217D2C 00214C6C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80217D30 00214C70  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80217D34 00214C74  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80217D38 00214C78  7C 08 03 A6 */	mtlr r0
/* 80217D3C 00214C7C  38 21 00 70 */	addi r1, r1, 0x70
/* 80217D40 00214C80  4E 80 00 20 */	blr 
.else
.global exec__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
exec__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection:
/* 80217A70 002149B0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80217A74 002149B4  7C 08 02 A6 */	mflr r0
/* 80217A78 002149B8  90 01 00 74 */	stw r0, 0x74(r1)
/* 80217A7C 002149BC  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 80217A80 002149C0  7C 9F 23 78 */	mr r31, r4
/* 80217A84 002149C4  93 C1 00 68 */	stw r30, 0x68(r1)
/* 80217A88 002149C8  7C 7E 1B 78 */	mr r30, r3
/* 80217A8C 002149CC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80217A90 002149D0  28 00 00 00 */	cmplwi r0, 0
/* 80217A94 002149D4  40 82 02 98 */	bne .L_80217D2C
/* 80217A98 002149D8  88 1E 00 18 */	lbz r0, 0x18(r30)
/* 80217A9C 002149DC  28 00 00 00 */	cmplwi r0, 0
/* 80217AA0 002149E0  41 82 00 68 */	beq .L_80217B08
/* 80217AA4 002149E4  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 80217AA8 002149E8  48 1A 1B 09 */	bl update__14TParticle2dMgrFv
/* 80217AAC 002149EC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217AB0 002149F0  48 1E 45 7D */	bl update__Q26Screen9Game2DMgrFv
/* 80217AB4 002149F4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217AB8 002149F8  48 1E 6C 95 */	bl check_Save__Q26Screen9Game2DMgrCFv
/* 80217ABC 002149FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217AC0 00214A00  41 82 02 6C */	beq .L_80217D2C
/* 80217AC4 00214A04  89 1F 02 3C */	lbz r8, 0x23c(r31)
/* 80217AC8 00214A08  38 E0 00 00 */	li r7, 0
/* 80217ACC 00214A0C  38 00 00 01 */	li r0, 1
/* 80217AD0 00214A10  7F C3 F3 78 */	mr r3, r30
/* 80217AD4 00214A14  98 E1 00 08 */	stb r7, 8(r1)
/* 80217AD8 00214A18  7F E4 FB 78 */	mr r4, r31
/* 80217ADC 00214A1C  38 C1 00 08 */	addi r6, r1, 8
/* 80217AE0 00214A20  38 A0 00 02 */	li r5, 2
/* 80217AE4 00214A24  98 E1 00 09 */	stb r7, 9(r1)
/* 80217AE8 00214A28  99 01 00 0A */	stb r8, 0xa(r1)
/* 80217AEC 00214A2C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80217AF0 00214A30  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217AF4 00214A34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80217AF8 00214A38  7D 89 03 A6 */	mtctr r12
/* 80217AFC 00214A3C  4E 80 04 21 */	bctrl 
/* 80217B00 00214A40  48 00 02 2C */	b .L_80217D2C
/* 80217B04 00214A44  48 00 02 28 */	b .L_80217D2C
.L_80217B08:
/* 80217B08 00214A48  7F E3 FB 78 */	mr r3, r31
/* 80217B0C 00214A4C  4B F3 3D 71 */	bl doUpdate__Q24Game15BaseGameSectionFv
/* 80217B10 00214A50  80 0D 96 88 */	lwz r0, randMapMgr__Q24Game4Cave@sda21(r13)
/* 80217B14 00214A54  28 00 00 00 */	cmplwi r0, 0
/* 80217B18 00214A58  41 82 00 50 */	beq .L_80217B68
/* 80217B1C 00214A5C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217B20 00214A60  4B F4 31 01 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80217B24 00214A64  28 03 00 00 */	cmplwi r3, 0
/* 80217B28 00214A68  41 82 00 40 */	beq .L_80217B68
/* 80217B2C 00214A6C  7C 64 1B 78 */	mr r4, r3
/* 80217B30 00214A70  38 61 00 1C */	addi r3, r1, 0x1c
/* 80217B34 00214A74  81 84 00 00 */	lwz r12, 0(r4)
/* 80217B38 00214A78  81 8C 00 08 */	lwz r12, 8(r12)
/* 80217B3C 00214A7C  7D 89 03 A6 */	mtctr r12
/* 80217B40 00214A80  4E 80 04 21 */	bctrl 
/* 80217B44 00214A84  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80217B48 00214A88  38 81 00 28 */	addi r4, r1, 0x28
/* 80217B4C 00214A8C  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80217B50 00214A90  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80217B54 00214A94  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80217B58 00214A98  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 80217B5C 00214A9C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80217B60 00214AA0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80217B64 00214AA4  48 02 D3 5D */	bl "radarMapPartsOpen__Q34Game4Cave10RandMapMgrFR10Vector3<f>"
.L_80217B68:
/* 80217B68 00214AA8  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80217B6C 00214AAC  80 1E 00 04 */	lwz r0, 4(r30)
/* 80217B70 00214AB0  80 63 00 04 */	lwz r3, 4(r3)
/* 80217B74 00214AB4  7C 03 00 00 */	cmpw r3, r0
/* 80217B78 00214AB8  40 82 01 B4 */	bne .L_80217D2C
/* 80217B7C 00214ABC  7F E3 FB 78 */	mr r3, r31
/* 80217B80 00214AC0  4B F3 DE FD */	bl updateCaveScreen__Q24Game17SingleGameSectionFv
/* 80217B84 00214AC4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217B88 00214AC8  80 03 01 F0 */	lwz r0, 0x1f0(r3)
/* 80217B8C 00214ACC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80217B90 00214AD0  40 82 01 10 */	bne .L_80217CA0
/* 80217B94 00214AD4  38 60 FF FF */	li r3, -1
/* 80217B98 00214AD8  4B FB 92 C9 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80217B9C 00214ADC  2C 03 00 00 */	cmpwi r3, 0
/* 80217BA0 00214AE0  40 82 01 00 */	bne .L_80217CA0
/* 80217BA4 00214AE4  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80217BA8 00214AE8  3C 60 80 48 */	lis r3, lbl_804824B8@ha
/* 80217BAC 00214AEC  38 83 24 B8 */	addi r4, r3, lbl_804824B8@l
/* 80217BB0 00214AF0  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80217BB4 00214AF4  88 65 00 3C */	lbz r3, 0x3c(r5)
/* 80217BB8 00214AF8  38 00 00 00 */	li r0, 0
/* 80217BBC 00214AFC  54 63 06 F2 */	rlwinm r3, r3, 0, 0x1b, 0x19
/* 80217BC0 00214B00  98 65 00 3C */	stb r3, 0x3c(r5)
/* 80217BC4 00214B04  80 BF 00 C8 */	lwz r5, 0xc8(r31)
/* 80217BC8 00214B08  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217BCC 00214B0C  90 81 00 34 */	stw r4, 0x34(r1)
/* 80217BD0 00214B10  90 01 00 38 */	stw r0, 0x38(r1)
/* 80217BD4 00214B14  90 A1 00 40 */	stw r5, 0x40(r1)
/* 80217BD8 00214B18  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80217BDC 00214B1C  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 80217BE0 00214B20  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80217BE4 00214B24  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 80217BE8 00214B28  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80217BEC 00214B2C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80217BF0 00214B30  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80217BF4 00214B34  90 01 00 60 */	stw r0, 0x60(r1)
/* 80217BF8 00214B38  90 01 00 48 */	stw r0, 0x48(r1)
/* 80217BFC 00214B3C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80217C00 00214B40  4B F4 30 21 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80217C04 00214B44  7C 7E 1B 79 */	or. r30, r3, r3
/* 80217C08 00214B48  40 82 00 38 */	bne .L_80217C40
/* 80217C0C 00214B4C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217C10 00214B50  38 80 00 01 */	li r4, 1
/* 80217C14 00214B54  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80217C18 00214B58  80 03 00 E4 */	lwz r0, 0xe4(r3)
/* 80217C1C 00214B5C  2C 00 00 00 */	cmpwi r0, 0
/* 80217C20 00214B60  40 82 00 08 */	bne .L_80217C28
/* 80217C24 00214B64  38 80 00 00 */	li r4, 0
.L_80217C28:
/* 80217C28 00214B68  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217C2C 00214B6C  81 83 00 00 */	lwz r12, 0(r3)
/* 80217C30 00214B70  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217C34 00214B74  7D 89 03 A6 */	mtctr r12
/* 80217C38 00214B78  4E 80 04 21 */	bctrl 
/* 80217C3C 00214B7C  7C 7E 1B 78 */	mr r30, r3
.L_80217C40:
/* 80217C40 00214B80  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 80217C44 00214B84  7F C4 F3 78 */	mr r4, r30
/* 80217C48 00214B88  38 61 00 10 */	addi r3, r1, 0x10
/* 80217C4C 00214B8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80217C50 00214B90  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217C54 00214B94  81 8C 00 08 */	lwz r12, 8(r12)
/* 80217C58 00214B98  7D 89 03 A6 */	mtctr r12
/* 80217C5C 00214B9C  4E 80 04 21 */	bctrl 
/* 80217C60 00214BA0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80217C64 00214BA4  7F C3 F3 78 */	mr r3, r30
/* 80217C68 00214BA8  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80217C6C 00214BAC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80217C70 00214BB0  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 80217C74 00214BB4  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80217C78 00214BB8  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 80217C7C 00214BBC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217C80 00214BC0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80217C84 00214BC4  7D 89 03 A6 */	mtctr r12
/* 80217C88 00214BC8  4E 80 04 21 */	bctrl 
/* 80217C8C 00214BCC  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 80217C90 00214BD0  38 81 00 34 */	addi r4, r1, 0x34
/* 80217C94 00214BD4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217C98 00214BD8  48 21 4D 39 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80217C9C 00214BDC  48 00 00 90 */	b .L_80217D2C
.L_80217CA0:
/* 80217CA0 00214BE0  88 1F 01 80 */	lbz r0, 0x180(r31)
/* 80217CA4 00214BE4  28 00 00 00 */	cmplwi r0, 0
/* 80217CA8 00214BE8  41 82 00 14 */	beq .L_80217CBC
/* 80217CAC 00214BEC  7F E3 FB 78 */	mr r3, r31
/* 80217CB0 00214BF0  4B F3 CA 6D */	bl updateCaveMenus__Q24Game17SingleGameSectionFv
/* 80217CB4 00214BF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217CB8 00214BF8  41 82 00 74 */	beq .L_80217D2C
.L_80217CBC:
/* 80217CBC 00214BFC  7F C3 F3 78 */	mr r3, r30
/* 80217CC0 00214C00  7F E4 FB 78 */	mr r4, r31
/* 80217CC4 00214C04  48 00 01 19 */	bl check_SMenu__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
/* 80217CC8 00214C08  48 24 10 C9 */	bl PSMGetPikminNumD__Fv
/* 80217CCC 00214C0C  7C 60 1B 78 */	mr r0, r3
/* 80217CD0 00214C10  38 60 FF FF */	li r3, -1
/* 80217CD4 00214C14  7C 1E 03 78 */	mr r30, r0
/* 80217CD8 00214C18  4B FB 91 39 */	bl getMapPikmins_exclude_Me__Q24Game8GameStatFi
/* 80217CDC 00214C1C  2C 03 00 0A */	cmpwi r3, 0xa
/* 80217CE0 00214C20  40 80 00 30 */	bge .L_80217D10
/* 80217CE4 00214C24  80 0D 96 18 */	lwz r0, mSoundDeathCount__Q24Game8DeathMgr@sda21(r13)
/* 80217CE8 00214C28  2C 00 00 00 */	cmpwi r0, 0
/* 80217CEC 00214C2C  40 81 00 24 */	ble .L_80217D10
/* 80217CF0 00214C30  28 1E 00 00 */	cmplwi r30, 0
/* 80217CF4 00214C34  41 82 00 38 */	beq .L_80217D2C
/* 80217CF8 00214C38  7F C3 F3 78 */	mr r3, r30
/* 80217CFC 00214C3C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217D00 00214C40  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80217D04 00214C44  7D 89 03 A6 */	mtctr r12
/* 80217D08 00214C48  4E 80 04 21 */	bctrl 
/* 80217D0C 00214C4C  48 00 00 20 */	b .L_80217D2C
.L_80217D10:
/* 80217D10 00214C50  28 1E 00 00 */	cmplwi r30, 0
/* 80217D14 00214C54  41 82 00 18 */	beq .L_80217D2C
/* 80217D18 00214C58  7F C3 F3 78 */	mr r3, r30
/* 80217D1C 00214C5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217D20 00214C60  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80217D24 00214C64  7D 89 03 A6 */	mtctr r12
/* 80217D28 00214C68  4E 80 04 21 */	bctrl 
.L_80217D2C:
/* 80217D2C 00214C6C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80217D30 00214C70  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 80217D34 00214C74  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 80217D38 00214C78  7C 08 03 A6 */	mtlr r0
/* 80217D3C 00214C7C  38 21 00 70 */	addi r1, r1, 0x70
/* 80217D40 00214C80  4E 80 00 20 */	blr 
.endif

.global draw__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionR8Graphics
draw__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionR8Graphics:
/* 80217D44 00214C84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80217D48 00214C88  7C 08 02 A6 */	mflr r0
/* 80217D4C 00214C8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80217D50 00214C90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80217D54 00214C94  7C BF 2B 78 */	mr r31, r5
/* 80217D58 00214C98  93 C1 00 08 */	stw r30, 8(r1)
/* 80217D5C 00214C9C  7C 9E 23 78 */	mr r30, r4
/* 80217D60 00214CA0  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80217D64 00214CA4  28 00 00 00 */	cmplwi r0, 0
/* 80217D68 00214CA8  40 82 00 5C */	bne .L_80217DC4
/* 80217D6C 00214CAC  88 03 00 18 */	lbz r0, 0x18(r3)
/* 80217D70 00214CB0  28 00 00 00 */	cmplwi r0, 0
/* 80217D74 00214CB4  41 82 00 20 */	beq .L_80217D94
/* 80217D78 00214CB8  7F C3 F3 78 */	mr r3, r30
/* 80217D7C 00214CBC  7F E4 FB 78 */	mr r4, r31
/* 80217D80 00214CC0  81 9E 00 00 */	lwz r12, 0(r30)
/* 80217D84 00214CC4  81 8C 01 18 */	lwz r12, 0x118(r12)
/* 80217D88 00214CC8  7D 89 03 A6 */	mtctr r12
/* 80217D8C 00214CCC  4E 80 04 21 */	bctrl 
/* 80217D90 00214CD0  48 00 00 34 */	b .L_80217DC4
.L_80217D94:
/* 80217D94 00214CD4  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 80217D98 00214CD8  28 03 00 00 */	cmplwi r3, 0
/* 80217D9C 00214CDC  41 82 00 0C */	beq .L_80217DA8
/* 80217DA0 00214CE0  7F E4 FB 78 */	mr r4, r31
/* 80217DA4 00214CE4  48 02 D0 15 */	bl captureRadarMap__Q34Game4Cave10RandMapMgrFR8Graphics
.L_80217DA8:
/* 80217DA8 00214CE8  7F C3 F3 78 */	mr r3, r30
/* 80217DAC 00214CEC  7F E4 FB 78 */	mr r4, r31
/* 80217DB0 00214CF0  4B F3 3E 79 */	bl doDraw__Q24Game15BaseGameSectionFR8Graphics
/* 80217DB4 00214CF4  7F C3 F3 78 */	mr r3, r30
/* 80217DB8 00214CF8  4B F3 E1 A5 */	bl drawCaveScreen__Q24Game17SingleGameSectionFv
/* 80217DBC 00214CFC  7F C3 F3 78 */	mr r3, r30
/* 80217DC0 00214D00  4B F3 74 19 */	bl test_draw_treasure_detector__Q24Game15BaseGameSectionFv
.L_80217DC4:
/* 80217DC4 00214D04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80217DC8 00214D08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80217DCC 00214D0C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80217DD0 00214D10  7C 08 03 A6 */	mtlr r0
/* 80217DD4 00214D14  38 21 00 10 */	addi r1, r1, 0x10
/* 80217DD8 00214D18  4E 80 00 20 */	blr 

.if version == 1
.global check_SMenu__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
check_SMenu__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection:
/* 80217DDC 00214D1C  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80217DE0 00214D20  7C 08 02 A6 */	mflr r0
/* 80217DE4 00214D24  90 01 01 34 */	stw r0, 0x134(r1)
/* 80217DE8 00214D28  93 E1 01 2C */	stw r31, 0x12c(r1)
/* 80217DEC 00214D2C  7C 9F 23 78 */	mr r31, r4
/* 80217DF0 00214D30  3C 80 80 48 */	lis r4, lbl_80482430@ha
/* 80217DF4 00214D34  93 C1 01 28 */	stw r30, 0x128(r1)
/* 80217DF8 00214D38  3B C4 24 30 */	addi r30, r4, lbl_80482430@l
/* 80217DFC 00214D3C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217E00 00214D40  80 9F 01 0C */	lwz r4, 0x12c(r31)
/* 80217E04 00214D44  48 1E 42 75 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80217E08 00214D48  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217E0C 00214D4C  48 1E 51 25 */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 80217E10 00214D50  2C 03 00 01 */	cmpwi r3, 1
/* 80217E14 00214D54  41 82 00 24 */	beq .L_80217E38
/* 80217E18 00214D58  40 80 00 14 */	bge .L_80217E2C
/* 80217E1C 00214D5C  2C 03 FF FF */	cmpwi r3, -1
/* 80217E20 00214D60  41 82 03 84 */	beq .L_802181A4
/* 80217E24 00214D64  40 80 04 2C */	bge .L_80218250
/* 80217E28 00214D68  48 00 04 08 */	b .L_80218230
.L_80217E2C:
/* 80217E2C 00214D6C  2C 03 00 04 */	cmpwi r3, 4
/* 80217E30 00214D70  41 82 00 30 */	beq .L_80217E60
/* 80217E34 00214D74  48 00 03 FC */	b .L_80218230
.L_80217E38:
/* 80217E38 00214D78  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E3C 00214D7C  38 80 00 00 */	li r4, 0
/* 80217E40 00214D80  38 A2 BC B0 */	addi r5, r2, lbl_8051A010@sda21
/* 80217E44 00214D84  38 C0 00 03 */	li r6, 3
/* 80217E48 00214D88  4B F9 D1 4D */	bl setPause__Q24Game10GameSystemFbPci
/* 80217E4C 00214D8C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E50 00214D90  38 80 00 00 */	li r4, 0
/* 80217E54 00214D94  38 A2 BC B0 */	addi r5, r2, lbl_8051A010@sda21
/* 80217E58 00214D98  4B F9 D1 2D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80217E5C 00214D9C  48 00 03 F4 */	b .L_80218250
.L_80217E60:
/* 80217E60 00214DA0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E64 00214DA4  38 BE 00 98 */	addi r5, r30, 0x98
/* 80217E68 00214DA8  38 80 00 00 */	li r4, 0
/* 80217E6C 00214DAC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80217E70 00214DB0  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80217E74 00214DB4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80217E78 00214DB8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E7C 00214DBC  4B F9 D1 09 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80217E80 00214DC0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217E84 00214DC4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80217E88 00214DC8  2C 00 00 00 */	cmpwi r0, 0
/* 80217E8C 00214DCC  40 82 03 C4 */	bne .L_80218250
/* 80217E90 00214DD0  80 9F 00 C8 */	lwz r4, 0xe8(r31)
/* 80217E94 00214DD4  38 00 00 00 */	li r0, 0
/* 80217E98 00214DD8  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80217E9C 00214DDC  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 80217EA0 00214DE0  90 61 00 24 */	stw r3, 0x24(r1)
/* 80217EA4 00214DE4  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80217EA8 00214DE8  90 01 00 28 */	stw r0, 0x28(r1)
/* 80217EAC 00214DEC  90 81 00 30 */	stw r4, 0x30(r1)
/* 80217EB0 00214DF0  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80217EB4 00214DF4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80217EB8 00214DF8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80217EBC 00214DFC  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80217EC0 00214E00  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80217EC4 00214E04  90 01 00 34 */	stw r0, 0x34(r1)
/* 80217EC8 00214E08  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80217ECC 00214E0C  90 01 00 50 */	stw r0, 0x50(r1)
/* 80217ED0 00214E10  90 01 00 38 */	stw r0, 0x38(r1)
/* 80217ED4 00214E14  90 01 00 54 */	stw r0, 0x54(r1)
/* 80217ED8 00214E18  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 80217EDC 00214E1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80217EE0 00214E20  83 E3 00 AC */	lwz r31, 0xac(r3)
/* 80217EE4 00214E24  28 1F 00 00 */	cmplwi r31, 0
/* 80217EE8 00214E28  40 82 00 18 */	bne .L_80217F00
/* 80217EEC 00214E2C  38 7E 00 B4 */	addi r3, r30, 0xb4
/* 80217EF0 00214E30  38 BE 00 CC */	addi r5, r30, 0xcc
/* 80217EF4 00214E34  38 80 03 18 */	li r4, 0x318
/* 80217EF8 00214E38  4C C6 31 82 */	crclr 6
/* 80217EFC 00214E3C  4B E1 27 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80217F00:
/* 80217F00 00214E40  7F E4 FB 78 */	mr r4, r31
/* 80217F04 00214E44  38 61 00 08 */	addi r3, r1, 8
/* 80217F08 00214E48  81 9F 00 00 */	lwz r12, 0(r31)
/* 80217F0C 00214E4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80217F10 00214E50  7D 89 03 A6 */	mtctr r12
/* 80217F14 00214E54  4E 80 04 21 */	bctrl 
/* 80217F18 00214E58  C0 41 00 08 */	lfs f2, 8(r1)
/* 80217F1C 00214E5C  7F E3 FB 78 */	mr r3, r31
/* 80217F20 00214E60  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80217F24 00214E64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80217F28 00214E68  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80217F2C 00214E6C  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80217F30 00214E70  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80217F34 00214E74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80217F38 00214E78  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80217F3C 00214E7C  7D 89 03 A6 */	mtctr r12
/* 80217F40 00214E80  4E 80 04 21 */	bctrl 
/* 80217F44 00214E84  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80217F48 00214E88  38 81 00 24 */	addi r4, r1, 0x24
/* 80217F4C 00214E8C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217F50 00214E90  48 21 4A 81 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80217F54 00214E94  3B C0 00 00 */	li r30, 0
.L_80217F58:
/* 80217F58 00214E98  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217F5C 00214E9C  7F C4 F3 78 */	mr r4, r30
/* 80217F60 00214EA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80217F64 00214EA4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217F68 00214EA8  7D 89 03 A6 */	mtctr r12
/* 80217F6C 00214EAC  4E 80 04 21 */	bctrl 
/* 80217F70 00214EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80217F74 00214EB4  7C 7F 1B 78 */	mr r31, r3
/* 80217F78 00214EB8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80217F7C 00214EBC  7D 89 03 A6 */	mtctr r12
/* 80217F80 00214EC0  4E 80 04 21 */	bctrl 
/* 80217F84 00214EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217F88 00214EC8  41 82 00 1C */	beq .L_80217FA4
/* 80217F8C 00214ECC  7F E3 FB 78 */	mr r3, r31
/* 80217F90 00214ED0  4B F8 75 E5 */	bl isStickTo__Q24Game8CreatureFv
/* 80217F94 00214ED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217F98 00214ED8  41 82 00 0C */	beq .L_80217FA4
/* 80217F9C 00214EDC  7F E3 FB 78 */	mr r3, r31
/* 80217FA0 00214EE0  4B F8 74 85 */	bl endStick__Q24Game8CreatureFv
.L_80217FA4:
/* 80217FA4 00214EE4  3B DE 00 01 */	addi r30, r30, 1
/* 80217FA8 00214EE8  2C 1E 00 02 */	cmpwi r30, 2
/* 80217FAC 00214EEC  41 80 FF AC */	blt .L_80217F58
/* 80217FB0 00214EF0  38 00 00 00 */	li r0, 0
/* 80217FB4 00214EF4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80217FB8 00214EF8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80217FBC 00214EFC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80217FC0 00214F00  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80217FC4 00214F04  28 00 00 00 */	cmplwi r0, 0
/* 80217FC8 00214F08  90 81 00 14 */	stw r4, 0x14(r1)
/* 80217FCC 00214F0C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80217FD0 00214F10  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80217FD4 00214F14  40 82 00 1C */	bne .L_80217FF0
/* 80217FD8 00214F18  81 83 00 00 */	lwz r12, 0(r3)
/* 80217FDC 00214F1C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80217FE0 00214F20  7D 89 03 A6 */	mtctr r12
/* 80217FE4 00214F24  4E 80 04 21 */	bctrl 
/* 80217FE8 00214F28  90 61 00 18 */	stw r3, 0x18(r1)
/* 80217FEC 00214F2C  48 00 01 94 */	b .L_80218180
.L_80217FF0:
/* 80217FF0 00214F30  81 83 00 00 */	lwz r12, 0(r3)
/* 80217FF4 00214F34  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80217FF8 00214F38  7D 89 03 A6 */	mtctr r12
/* 80217FFC 00214F3C  4E 80 04 21 */	bctrl 
/* 80218000 00214F40  90 61 00 18 */	stw r3, 0x18(r1)
/* 80218004 00214F44  48 00 00 58 */	b .L_8021805C
.L_80218008:
/* 80218008 00214F48  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8021800C 00214F4C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218010 00214F50  81 83 00 00 */	lwz r12, 0(r3)
/* 80218014 00214F54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218018 00214F58  7D 89 03 A6 */	mtctr r12
/* 8021801C 00214F5C  4E 80 04 21 */	bctrl 
/* 80218020 00214F60  7C 64 1B 78 */	mr r4, r3
/* 80218024 00214F64  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80218028 00214F68  81 83 00 00 */	lwz r12, 0(r3)
/* 8021802C 00214F6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218030 00214F70  7D 89 03 A6 */	mtctr r12
/* 80218034 00214F74  4E 80 04 21 */	bctrl 
/* 80218038 00214F78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021803C 00214F7C  40 82 01 44 */	bne .L_80218180
/* 80218040 00214F80  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218044 00214F84  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218048 00214F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8021804C 00214F8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218050 00214F90  7D 89 03 A6 */	mtctr r12
/* 80218054 00214F94  4E 80 04 21 */	bctrl 
/* 80218058 00214F98  90 61 00 18 */	stw r3, 0x18(r1)
.L_8021805C:
/* 8021805C 00214F9C  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80218060 00214FA0  38 61 00 14 */	addi r3, r1, 0x14
/* 80218064 00214FA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218068 00214FA8  7D 89 03 A6 */	mtctr r12
/* 8021806C 00214FAC  4E 80 04 21 */	bctrl 
/* 80218070 00214FB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218074 00214FB4  41 82 FF 94 */	beq .L_80218008
/* 80218078 00214FB8  48 00 01 08 */	b .L_80218180
.L_8021807C:
/* 8021807C 00214FBC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218080 00214FC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218084 00214FC4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218088 00214FC8  7D 89 03 A6 */	mtctr r12
/* 8021808C 00214FCC  4E 80 04 21 */	bctrl 
/* 80218090 00214FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218094 00214FD4  7C 7E 1B 78 */	mr r30, r3
/* 80218098 00214FD8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8021809C 00214FDC  7D 89 03 A6 */	mtctr r12
/* 802180A0 00214FE0  4E 80 04 21 */	bctrl 
/* 802180A4 00214FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802180A8 00214FE8  41 82 00 1C */	beq .L_802180C4
/* 802180AC 00214FEC  7F C3 F3 78 */	mr r3, r30
/* 802180B0 00214FF0  4B F8 73 75 */	bl endStick__Q24Game8CreatureFv
/* 802180B4 00214FF4  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 802180B8 00214FF8  38 80 00 01 */	li r4, 1
/* 802180BC 00214FFC  38 A0 00 00 */	li r5, 0
/* 802180C0 00215000  4B F7 EE D5 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_802180C4:
/* 802180C4 00215004  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802180C8 00215008  28 00 00 00 */	cmplwi r0, 0
/* 802180CC 0021500C  40 82 00 24 */	bne .L_802180F0
/* 802180D0 00215010  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802180D4 00215014  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802180D8 00215018  81 83 00 00 */	lwz r12, 0(r3)
/* 802180DC 0021501C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802180E0 00215020  7D 89 03 A6 */	mtctr r12
/* 802180E4 00215024  4E 80 04 21 */	bctrl 
/* 802180E8 00215028  90 61 00 18 */	stw r3, 0x18(r1)
/* 802180EC 0021502C  48 00 00 94 */	b .L_80218180
.L_802180F0:
/* 802180F0 00215030  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802180F4 00215034  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802180F8 00215038  81 83 00 00 */	lwz r12, 0(r3)
/* 802180FC 0021503C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218100 00215040  7D 89 03 A6 */	mtctr r12
/* 80218104 00215044  4E 80 04 21 */	bctrl 
/* 80218108 00215048  90 61 00 18 */	stw r3, 0x18(r1)
/* 8021810C 0021504C  48 00 00 58 */	b .L_80218164
.L_80218110:
/* 80218110 00215050  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218114 00215054  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218118 00215058  81 83 00 00 */	lwz r12, 0(r3)
/* 8021811C 0021505C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218120 00215060  7D 89 03 A6 */	mtctr r12
/* 80218124 00215064  4E 80 04 21 */	bctrl 
/* 80218128 00215068  7C 64 1B 78 */	mr r4, r3
/* 8021812C 0021506C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80218130 00215070  81 83 00 00 */	lwz r12, 0(r3)
/* 80218134 00215074  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218138 00215078  7D 89 03 A6 */	mtctr r12
/* 8021813C 0021507C  4E 80 04 21 */	bctrl 
/* 80218140 00215080  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218144 00215084  40 82 00 3C */	bne .L_80218180
/* 80218148 00215088  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8021814C 0021508C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218150 00215090  81 83 00 00 */	lwz r12, 0(r3)
/* 80218154 00215094  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218158 00215098  7D 89 03 A6 */	mtctr r12
/* 8021815C 0021509C  4E 80 04 21 */	bctrl 
/* 80218160 002150A0  90 61 00 18 */	stw r3, 0x18(r1)
.L_80218164:
/* 80218164 002150A4  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80218168 002150A8  38 61 00 14 */	addi r3, r1, 0x14
/* 8021816C 002150AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218170 002150B0  7D 89 03 A6 */	mtctr r12
/* 80218174 002150B4  4E 80 04 21 */	bctrl 
/* 80218178 002150B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021817C 002150BC  41 82 FF 94 */	beq .L_80218110
.L_80218180:
/* 80218180 002150C0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218184 002150C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80218188 002150C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8021818C 002150CC  7D 89 03 A6 */	mtctr r12
/* 80218190 002150D0  4E 80 04 21 */	bctrl 
/* 80218194 002150D4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218198 002150D8  7C 04 18 40 */	cmplw r4, r3
/* 8021819C 002150DC  40 82 FE E0 */	bne .L_8021807C
/* 802181A0 002150E0  48 00 00 B0 */	b .L_80218250
.L_802181A4:
/* 802181A4 002150E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802181A8 002150E8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802181AC 002150EC  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 802181B0 002150F0  40 82 00 A0 */	bne .L_80218250
/* 802181B4 002150F4  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 802181B8 002150F8  80 04 00 18 */	lwz r0, 0x18(r4)
/* 802181BC 002150FC  2C 00 00 00 */	cmpwi r0, 0
/* 802181C0 00215100  40 82 00 90 */	bne .L_80218250
/* 802181C4 00215104  4B F9 CE 05 */	bl paused__Q24Game10GameSystemFv
/* 802181C8 00215108  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802181CC 0021510C  40 82 00 84 */	bne .L_80218250
/* 802181D0 00215110  80 7F 01 0C */	lwz r3, 0x12c(r31)
/* 802181D4 00215114  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802181D8 00215118  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 802181DC 0021511C  41 82 00 74 */	beq .L_80218250
/* 802181E0 00215120  38 61 00 58 */	addi r3, r1, 0x58
/* 802181E4 00215124  4B FF D1 15 */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 802181E8 00215128  7F E3 FB 78 */	mr r3, r31
/* 802181EC 0021512C  38 81 00 58 */	addi r4, r1, 0x58
/* 802181F0 00215130  4B F3 CD E9 */	bl setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
/* 802181F4 00215134  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802181F8 00215138  38 81 00 58 */	addi r4, r1, 0x58
/* 802181FC 0021513C  48 1E 4A D5 */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 80218200 00215140  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218204 00215144  41 82 00 4C */	beq .L_80218250
/* 80218208 00215148  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021820C 0021514C  38 80 00 01 */	li r4, 1
/* 80218210 00215150  38 A2 BC B8 */	addi r5, r2, lbl_8051A018@sda21
/* 80218214 00215154  38 C0 00 03 */	li r6, 3
/* 80218218 00215158  4B F9 CD 7D */	bl setPause__Q24Game10GameSystemFbPci
/* 8021821C 0021515C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80218220 00215160  38 80 00 01 */	li r4, 1
/* 80218224 00215164  38 A2 BC B8 */	addi r5, r2, lbl_8051A018@sda21
/* 80218228 00215168  4B F9 CD 5D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8021822C 0021516C  48 00 00 24 */	b .L_80218250
.L_80218230:
/* 80218230 00215170  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218234 00215174  48 1E 4C FD */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 80218238 00215178  7C 66 1B 78 */	mr r6, r3
/* 8021823C 0021517C  38 7E 00 B4 */	addi r3, r30, 0xb4
/* 80218240 00215180  38 BE 00 DC */	addi r5, r30, 0xdc
/* 80218244 00215184  38 80 03 56 */	li r4, 0x356
/* 80218248 00215188  4C C6 31 82 */	crclr 6
/* 8021824C 0021518C  4B E1 23 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80218250:
/* 80218250 00215190  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80218254 00215194  83 E1 01 2C */	lwz r31, 0x12c(r1)
/* 80218258 00215198  83 C1 01 28 */	lwz r30, 0x128(r1)
/* 8021825C 0021519C  7C 08 03 A6 */	mtlr r0
/* 80218260 002151A0  38 21 01 30 */	addi r1, r1, 0x130
/* 80218264 002151A4  4E 80 00 20 */	blr 
.else
.global check_SMenu__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
check_SMenu__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection:
/* 80217DDC 00214D1C  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 80217DE0 00214D20  7C 08 02 A6 */	mflr r0
/* 80217DE4 00214D24  90 01 01 34 */	stw r0, 0x134(r1)
/* 80217DE8 00214D28  93 E1 01 2C */	stw r31, 0x12c(r1)
/* 80217DEC 00214D2C  7C 9F 23 78 */	mr r31, r4
/* 80217DF0 00214D30  3C 80 80 48 */	lis r4, lbl_80482430@ha
/* 80217DF4 00214D34  93 C1 01 28 */	stw r30, 0x128(r1)
/* 80217DF8 00214D38  3B C4 24 30 */	addi r30, r4, lbl_80482430@l
/* 80217DFC 00214D3C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217E00 00214D40  80 9F 01 0C */	lwz r4, 0x10c(r31)
/* 80217E04 00214D44  48 1E 42 75 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 80217E08 00214D48  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80217E0C 00214D4C  48 1E 51 25 */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 80217E10 00214D50  2C 03 00 01 */	cmpwi r3, 1
/* 80217E14 00214D54  41 82 00 24 */	beq .L_80217E38
/* 80217E18 00214D58  40 80 00 14 */	bge .L_80217E2C
/* 80217E1C 00214D5C  2C 03 FF FF */	cmpwi r3, -1
/* 80217E20 00214D60  41 82 03 84 */	beq .L_802181A4
/* 80217E24 00214D64  40 80 04 2C */	bge .L_80218250
/* 80217E28 00214D68  48 00 04 08 */	b .L_80218230
.L_80217E2C:
/* 80217E2C 00214D6C  2C 03 00 04 */	cmpwi r3, 4
/* 80217E30 00214D70  41 82 00 30 */	beq .L_80217E60
/* 80217E34 00214D74  48 00 03 FC */	b .L_80218230
.L_80217E38:
/* 80217E38 00214D78  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E3C 00214D7C  38 80 00 00 */	li r4, 0
/* 80217E40 00214D80  38 A2 BC B0 */	addi r5, r2, lbl_8051A010@sda21
/* 80217E44 00214D84  38 C0 00 03 */	li r6, 3
/* 80217E48 00214D88  4B F9 D1 4D */	bl setPause__Q24Game10GameSystemFbPci
/* 80217E4C 00214D8C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E50 00214D90  38 80 00 00 */	li r4, 0
/* 80217E54 00214D94  38 A2 BC B0 */	addi r5, r2, lbl_8051A010@sda21
/* 80217E58 00214D98  4B F9 D1 2D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80217E5C 00214D9C  48 00 03 F4 */	b .L_80218250
.L_80217E60:
/* 80217E60 00214DA0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E64 00214DA4  38 BE 00 98 */	addi r5, r30, 0x98
/* 80217E68 00214DA8  38 80 00 00 */	li r4, 0
/* 80217E6C 00214DAC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80217E70 00214DB0  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80217E74 00214DB4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80217E78 00214DB8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80217E7C 00214DBC  4B F9 D1 09 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80217E80 00214DC0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217E84 00214DC4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80217E88 00214DC8  2C 00 00 00 */	cmpwi r0, 0
/* 80217E8C 00214DCC  40 82 03 C4 */	bne .L_80218250
/* 80217E90 00214DD0  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 80217E94 00214DD4  38 00 00 00 */	li r0, 0
/* 80217E98 00214DD8  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80217E9C 00214DDC  38 7E 00 A4 */	addi r3, r30, 0xa4
/* 80217EA0 00214DE0  90 61 00 24 */	stw r3, 0x24(r1)
/* 80217EA4 00214DE4  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 80217EA8 00214DE8  90 01 00 28 */	stw r0, 0x28(r1)
/* 80217EAC 00214DEC  90 81 00 30 */	stw r4, 0x30(r1)
/* 80217EB0 00214DF0  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80217EB4 00214DF4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80217EB8 00214DF8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80217EBC 00214DFC  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 80217EC0 00214E00  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80217EC4 00214E04  90 01 00 34 */	stw r0, 0x34(r1)
/* 80217EC8 00214E08  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80217ECC 00214E0C  90 01 00 50 */	stw r0, 0x50(r1)
/* 80217ED0 00214E10  90 01 00 38 */	stw r0, 0x38(r1)
/* 80217ED4 00214E14  90 01 00 54 */	stw r0, 0x54(r1)
/* 80217ED8 00214E18  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 80217EDC 00214E1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80217EE0 00214E20  83 E3 00 AC */	lwz r31, 0xac(r3)
/* 80217EE4 00214E24  28 1F 00 00 */	cmplwi r31, 0
/* 80217EE8 00214E28  40 82 00 18 */	bne .L_80217F00
/* 80217EEC 00214E2C  38 7E 00 B4 */	addi r3, r30, 0xb4
/* 80217EF0 00214E30  38 BE 00 CC */	addi r5, r30, 0xcc
/* 80217EF4 00214E34  38 80 03 18 */	li r4, 0x318
/* 80217EF8 00214E38  4C C6 31 82 */	crclr 6
/* 80217EFC 00214E3C  4B E1 27 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80217F00:
/* 80217F00 00214E40  7F E4 FB 78 */	mr r4, r31
/* 80217F04 00214E44  38 61 00 08 */	addi r3, r1, 8
/* 80217F08 00214E48  81 9F 00 00 */	lwz r12, 0(r31)
/* 80217F0C 00214E4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80217F10 00214E50  7D 89 03 A6 */	mtctr r12
/* 80217F14 00214E54  4E 80 04 21 */	bctrl 
/* 80217F18 00214E58  C0 41 00 08 */	lfs f2, 8(r1)
/* 80217F1C 00214E5C  7F E3 FB 78 */	mr r3, r31
/* 80217F20 00214E60  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80217F24 00214E64  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80217F28 00214E68  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 80217F2C 00214E6C  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80217F30 00214E70  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 80217F34 00214E74  81 9F 00 00 */	lwz r12, 0(r31)
/* 80217F38 00214E78  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80217F3C 00214E7C  7D 89 03 A6 */	mtctr r12
/* 80217F40 00214E80  4E 80 04 21 */	bctrl 
/* 80217F44 00214E84  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80217F48 00214E88  38 81 00 24 */	addi r4, r1, 0x24
/* 80217F4C 00214E8C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80217F50 00214E90  48 21 4A 81 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80217F54 00214E94  3B C0 00 00 */	li r30, 0
.L_80217F58:
/* 80217F58 00214E98  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80217F5C 00214E9C  7F C4 F3 78 */	mr r4, r30
/* 80217F60 00214EA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80217F64 00214EA4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80217F68 00214EA8  7D 89 03 A6 */	mtctr r12
/* 80217F6C 00214EAC  4E 80 04 21 */	bctrl 
/* 80217F70 00214EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80217F74 00214EB4  7C 7F 1B 78 */	mr r31, r3
/* 80217F78 00214EB8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80217F7C 00214EBC  7D 89 03 A6 */	mtctr r12
/* 80217F80 00214EC0  4E 80 04 21 */	bctrl 
/* 80217F84 00214EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217F88 00214EC8  41 82 00 1C */	beq .L_80217FA4
/* 80217F8C 00214ECC  7F E3 FB 78 */	mr r3, r31
/* 80217F90 00214ED0  4B F8 75 E5 */	bl isStickTo__Q24Game8CreatureFv
/* 80217F94 00214ED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80217F98 00214ED8  41 82 00 0C */	beq .L_80217FA4
/* 80217F9C 00214EDC  7F E3 FB 78 */	mr r3, r31
/* 80217FA0 00214EE0  4B F8 74 85 */	bl endStick__Q24Game8CreatureFv
.L_80217FA4:
/* 80217FA4 00214EE4  3B DE 00 01 */	addi r30, r30, 1
/* 80217FA8 00214EE8  2C 1E 00 02 */	cmpwi r30, 2
/* 80217FAC 00214EEC  41 80 FF AC */	blt .L_80217F58
/* 80217FB0 00214EF0  38 00 00 00 */	li r0, 0
/* 80217FB4 00214EF4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80217FB8 00214EF8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80217FBC 00214EFC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80217FC0 00214F00  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80217FC4 00214F04  28 00 00 00 */	cmplwi r0, 0
/* 80217FC8 00214F08  90 81 00 14 */	stw r4, 0x14(r1)
/* 80217FCC 00214F0C  90 01 00 18 */	stw r0, 0x18(r1)
/* 80217FD0 00214F10  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80217FD4 00214F14  40 82 00 1C */	bne .L_80217FF0
/* 80217FD8 00214F18  81 83 00 00 */	lwz r12, 0(r3)
/* 80217FDC 00214F1C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80217FE0 00214F20  7D 89 03 A6 */	mtctr r12
/* 80217FE4 00214F24  4E 80 04 21 */	bctrl 
/* 80217FE8 00214F28  90 61 00 18 */	stw r3, 0x18(r1)
/* 80217FEC 00214F2C  48 00 01 94 */	b .L_80218180
.L_80217FF0:
/* 80217FF0 00214F30  81 83 00 00 */	lwz r12, 0(r3)
/* 80217FF4 00214F34  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80217FF8 00214F38  7D 89 03 A6 */	mtctr r12
/* 80217FFC 00214F3C  4E 80 04 21 */	bctrl 
/* 80218000 00214F40  90 61 00 18 */	stw r3, 0x18(r1)
/* 80218004 00214F44  48 00 00 58 */	b .L_8021805C
.L_80218008:
/* 80218008 00214F48  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8021800C 00214F4C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218010 00214F50  81 83 00 00 */	lwz r12, 0(r3)
/* 80218014 00214F54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218018 00214F58  7D 89 03 A6 */	mtctr r12
/* 8021801C 00214F5C  4E 80 04 21 */	bctrl 
/* 80218020 00214F60  7C 64 1B 78 */	mr r4, r3
/* 80218024 00214F64  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80218028 00214F68  81 83 00 00 */	lwz r12, 0(r3)
/* 8021802C 00214F6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218030 00214F70  7D 89 03 A6 */	mtctr r12
/* 80218034 00214F74  4E 80 04 21 */	bctrl 
/* 80218038 00214F78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021803C 00214F7C  40 82 01 44 */	bne .L_80218180
/* 80218040 00214F80  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218044 00214F84  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218048 00214F88  81 83 00 00 */	lwz r12, 0(r3)
/* 8021804C 00214F8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218050 00214F90  7D 89 03 A6 */	mtctr r12
/* 80218054 00214F94  4E 80 04 21 */	bctrl 
/* 80218058 00214F98  90 61 00 18 */	stw r3, 0x18(r1)
.L_8021805C:
/* 8021805C 00214F9C  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80218060 00214FA0  38 61 00 14 */	addi r3, r1, 0x14
/* 80218064 00214FA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218068 00214FA8  7D 89 03 A6 */	mtctr r12
/* 8021806C 00214FAC  4E 80 04 21 */	bctrl 
/* 80218070 00214FB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218074 00214FB4  41 82 FF 94 */	beq .L_80218008
/* 80218078 00214FB8  48 00 01 08 */	b .L_80218180
.L_8021807C:
/* 8021807C 00214FBC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218080 00214FC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218084 00214FC4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218088 00214FC8  7D 89 03 A6 */	mtctr r12
/* 8021808C 00214FCC  4E 80 04 21 */	bctrl 
/* 80218090 00214FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218094 00214FD4  7C 7E 1B 78 */	mr r30, r3
/* 80218098 00214FD8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8021809C 00214FDC  7D 89 03 A6 */	mtctr r12
/* 802180A0 00214FE0  4E 80 04 21 */	bctrl 
/* 802180A4 00214FE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802180A8 00214FE8  41 82 00 1C */	beq .L_802180C4
/* 802180AC 00214FEC  7F C3 F3 78 */	mr r3, r30
/* 802180B0 00214FF0  4B F8 73 75 */	bl endStick__Q24Game8CreatureFv
/* 802180B4 00214FF4  80 7E 02 94 */	lwz r3, 0x294(r30)
/* 802180B8 00214FF8  38 80 00 01 */	li r4, 1
/* 802180BC 00214FFC  38 A0 00 00 */	li r5, 0
/* 802180C0 00215000  4B F7 EE D5 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
.L_802180C4:
/* 802180C4 00215004  80 01 00 20 */	lwz r0, 0x20(r1)
/* 802180C8 00215008  28 00 00 00 */	cmplwi r0, 0
/* 802180CC 0021500C  40 82 00 24 */	bne .L_802180F0
/* 802180D0 00215010  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802180D4 00215014  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802180D8 00215018  81 83 00 00 */	lwz r12, 0(r3)
/* 802180DC 0021501C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802180E0 00215020  7D 89 03 A6 */	mtctr r12
/* 802180E4 00215024  4E 80 04 21 */	bctrl 
/* 802180E8 00215028  90 61 00 18 */	stw r3, 0x18(r1)
/* 802180EC 0021502C  48 00 00 94 */	b .L_80218180
.L_802180F0:
/* 802180F0 00215030  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 802180F4 00215034  80 81 00 18 */	lwz r4, 0x18(r1)
/* 802180F8 00215038  81 83 00 00 */	lwz r12, 0(r3)
/* 802180FC 0021503C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218100 00215040  7D 89 03 A6 */	mtctr r12
/* 80218104 00215044  4E 80 04 21 */	bctrl 
/* 80218108 00215048  90 61 00 18 */	stw r3, 0x18(r1)
/* 8021810C 0021504C  48 00 00 58 */	b .L_80218164
.L_80218110:
/* 80218110 00215050  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218114 00215054  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218118 00215058  81 83 00 00 */	lwz r12, 0(r3)
/* 8021811C 0021505C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218120 00215060  7D 89 03 A6 */	mtctr r12
/* 80218124 00215064  4E 80 04 21 */	bctrl 
/* 80218128 00215068  7C 64 1B 78 */	mr r4, r3
/* 8021812C 0021506C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 80218130 00215070  81 83 00 00 */	lwz r12, 0(r3)
/* 80218134 00215074  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218138 00215078  7D 89 03 A6 */	mtctr r12
/* 8021813C 0021507C  4E 80 04 21 */	bctrl 
/* 80218140 00215080  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218144 00215084  40 82 00 3C */	bne .L_80218180
/* 80218148 00215088  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 8021814C 0021508C  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218150 00215090  81 83 00 00 */	lwz r12, 0(r3)
/* 80218154 00215094  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218158 00215098  7D 89 03 A6 */	mtctr r12
/* 8021815C 0021509C  4E 80 04 21 */	bctrl 
/* 80218160 002150A0  90 61 00 18 */	stw r3, 0x18(r1)
.L_80218164:
/* 80218164 002150A4  81 81 00 14 */	lwz r12, 0x14(r1)
/* 80218168 002150A8  38 61 00 14 */	addi r3, r1, 0x14
/* 8021816C 002150AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218170 002150B0  7D 89 03 A6 */	mtctr r12
/* 80218174 002150B4  4E 80 04 21 */	bctrl 
/* 80218178 002150B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021817C 002150BC  41 82 FF 94 */	beq .L_80218110
.L_80218180:
/* 80218180 002150C0  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80218184 002150C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80218188 002150C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8021818C 002150CC  7D 89 03 A6 */	mtctr r12
/* 80218190 002150D0  4E 80 04 21 */	bctrl 
/* 80218194 002150D4  80 81 00 18 */	lwz r4, 0x18(r1)
/* 80218198 002150D8  7C 04 18 40 */	cmplw r4, r3
/* 8021819C 002150DC  40 82 FE E0 */	bne .L_8021807C
/* 802181A0 002150E0  48 00 00 B0 */	b .L_80218250
.L_802181A4:
/* 802181A4 002150E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802181A8 002150E8  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802181AC 002150EC  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 802181B0 002150F0  40 82 00 A0 */	bne .L_80218250
/* 802181B4 002150F4  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 802181B8 002150F8  80 04 00 18 */	lwz r0, 0x18(r4)
/* 802181BC 002150FC  2C 00 00 00 */	cmpwi r0, 0
/* 802181C0 00215100  40 82 00 90 */	bne .L_80218250
/* 802181C4 00215104  4B F9 CE 05 */	bl paused__Q24Game10GameSystemFv
/* 802181C8 00215108  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802181CC 0021510C  40 82 00 84 */	bne .L_80218250
/* 802181D0 00215110  80 7F 01 0C */	lwz r3, 0x10c(r31)
/* 802181D4 00215114  80 03 00 1C */	lwz r0, 0x1c(r3)
/* 802181D8 00215118  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 802181DC 0021511C  41 82 00 74 */	beq .L_80218250
/* 802181E0 00215120  38 61 00 58 */	addi r3, r1, 0x58
/* 802181E4 00215124  4B FF D1 15 */	bl __ct__Q32og6Screen18DispMemberSMenuAllFv
/* 802181E8 00215128  7F E3 FB 78 */	mr r3, r31
/* 802181EC 0021512C  38 81 00 58 */	addi r4, r1, 0x58
/* 802181F0 00215130  4B F3 CD E9 */	bl setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
/* 802181F4 00215134  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802181F8 00215138  38 81 00 58 */	addi r4, r1, 0x58
/* 802181FC 0021513C  48 1E 4A D5 */	bl open_SMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberSMenuAll
/* 80218200 00215140  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218204 00215144  41 82 00 4C */	beq .L_80218250
/* 80218208 00215148  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021820C 0021514C  38 80 00 01 */	li r4, 1
/* 80218210 00215150  38 A2 BC B8 */	addi r5, r2, lbl_8051A018@sda21
/* 80218214 00215154  38 C0 00 03 */	li r6, 3
/* 80218218 00215158  4B F9 CD 7D */	bl setPause__Q24Game10GameSystemFbPci
/* 8021821C 0021515C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80218220 00215160  38 80 00 01 */	li r4, 1
/* 80218224 00215164  38 A2 BC B8 */	addi r5, r2, lbl_8051A018@sda21
/* 80218228 00215168  4B F9 CD 5D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8021822C 0021516C  48 00 00 24 */	b .L_80218250
.L_80218230:
/* 80218230 00215170  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218234 00215174  48 1E 4C FD */	bl check_SMenu__Q26Screen9Game2DMgrFv
/* 80218238 00215178  7C 66 1B 78 */	mr r6, r3
/* 8021823C 0021517C  38 7E 00 B4 */	addi r3, r30, 0xb4
/* 80218240 00215180  38 BE 00 DC */	addi r5, r30, 0xdc
/* 80218244 00215184  38 80 03 56 */	li r4, 0x356
/* 80218248 00215188  4C C6 31 82 */	crclr 6
/* 8021824C 0021518C  4B E1 23 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80218250:
/* 80218250 00215190  80 01 01 34 */	lwz r0, 0x134(r1)
/* 80218254 00215194  83 E1 01 2C */	lwz r31, 0x12c(r1)
/* 80218258 00215198  83 C1 01 28 */	lwz r30, 0x128(r1)
/* 8021825C 0021519C  7C 08 03 A6 */	mtlr r0
/* 80218260 002151A0  38 21 01 30 */	addi r1, r1, 0x130
/* 80218264 002151A4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global cleanup__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
cleanup__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection:
/* 80218268 002151A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021826C 002151AC  7C 08 02 A6 */	mflr r0
/* 80218270 002151B0  3C 60 80 48 */	lis r3, lbl_80482528@ha
/* 80218274 002151B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80218278 002151B8  38 A3 25 28 */	addi r5, r3, lbl_80482528@l
/* 8021827C 002151BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80218280 002151C0  7C 9F 23 78 */	mr r31, r4
/* 80218284 002151C4  38 80 00 00 */	li r4, 0
/* 80218288 002151C8  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8021828C 002151CC  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 80218290 002151D0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80218294 002151D4  98 06 00 3C */	stb r0, 0x3c(r6)
/* 80218298 002151D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021829C 002151DC  4B F9 CC E9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 802182A0 002151E0  7F E3 FB 78 */	mr r3, r31
/* 802182A4 002151E4  38 80 00 00 */	li r4, 0
/* 802182A8 002151E8  48 02 32 F1 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 802182AC 002151EC  80 1F 00 FC */	lwz r0, 0x11c(r31)
/* 802182B0 002151F0  28 00 00 00 */	cmplwi r0, 0
/* 802182B4 002151F4  41 82 00 08 */	beq .L_802182BC
/* 802182B8 002151F8  48 24 F1 81 */	bl PSMCancelToPauseOffMainBgm__Fv
.L_802182BC:
/* 802182BC 002151FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802182C0 00215200  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802182C4 00215204  7C 08 03 A6 */	mtlr r0
/* 802182C8 00215208  38 21 00 10 */	addi r1, r1, 0x10
/* 802182CC 0021520C  4E 80 00 20 */	blr 
.else
.global cleanup__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection
cleanup__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSection:
/* 80218268 002151A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021826C 002151AC  7C 08 02 A6 */	mflr r0
/* 80218270 002151B0  3C 60 80 48 */	lis r3, lbl_80482528@ha
/* 80218274 002151B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80218278 002151B8  38 A3 25 28 */	addi r5, r3, lbl_80482528@l
/* 8021827C 002151BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80218280 002151C0  7C 9F 23 78 */	mr r31, r4
/* 80218284 002151C4  38 80 00 00 */	li r4, 0
/* 80218288 002151C8  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 8021828C 002151CC  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 80218290 002151D0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80218294 002151D4  98 06 00 3C */	stb r0, 0x3c(r6)
/* 80218298 002151D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021829C 002151DC  4B F9 CC E9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 802182A0 002151E0  7F E3 FB 78 */	mr r3, r31
/* 802182A4 002151E4  38 80 00 00 */	li r4, 0
/* 802182A8 002151E8  48 02 32 F1 */	bl setDraw2DCreature__Q24Game15BaseGameSectionFPQ24Game8Creature
/* 802182AC 002151EC  80 1F 00 FC */	lwz r0, 0xfc(r31)
/* 802182B0 002151F0  28 00 00 00 */	cmplwi r0, 0
/* 802182B4 002151F4  41 82 00 08 */	beq .L_802182BC
/* 802182B8 002151F8  48 24 F1 81 */	bl PSMCancelToPauseOffMainBgm__Fv
.L_802182BC:
/* 802182BC 002151FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802182C0 00215200  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802182C4 00215204  7C 08 03 A6 */	mtlr r0
/* 802182C8 00215208  38 21 00 10 */	addi r1, r1, 0x10
/* 802182CC 0021520C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onOrimaDown__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni
onOrimaDown__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni:
/* 802182D0 00215210  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802182D4 00215214  7C 08 02 A6 */	mflr r0
/* 802182D8 00215218  3C 60 80 48 */	lis r3, lbl_8048253C@ha
/* 802182DC 0021521C  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 802182E0 00215220  90 01 00 54 */	stw r0, 0x54(r1)
/* 802182E4 00215224  38 00 00 00 */	li r0, 0
/* 802182E8 00215228  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802182EC 0021522C  7C BF 2B 78 */	mr r31, r5
/* 802182F0 00215230  38 A3 25 3C */	addi r5, r3, lbl_8048253C@l
/* 802182F4 00215234  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802182F8 00215238  7C 9E 23 78 */	mr r30, r4
/* 802182FC 0021523C  80 C4 00 C8 */	lwz r6, 0xe8(r4)
/* 80218300 00215240  7F E4 FB 78 */	mr r4, r31
/* 80218304 00215244  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218308 00215248  90 01 00 0C */	stw r0, 0xc(r1)
/* 8021830C 0021524C  90 A1 00 08 */	stw r5, 8(r1)
/* 80218310 00215250  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80218314 00215254  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80218318 00215258  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8021831C 0021525C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80218320 00215260  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80218324 00215264  93 E1 00 30 */	stw r31, 0x30(r1)
/* 80218328 00215268  90 01 00 18 */	stw r0, 0x18(r1)
/* 8021832C 0021526C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80218330 00215270  90 01 00 34 */	stw r0, 0x34(r1)
/* 80218334 00215274  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80218338 00215278  90 01 00 38 */	stw r0, 0x38(r1)
/* 8021833C 0021527C  80 1E 00 CC */	lwz r0, 0xec(r30)
/* 80218340 00215280  90 01 00 18 */	stw r0, 0x18(r1)
/* 80218344 00215284  81 83 00 00 */	lwz r12, 0(r3)
/* 80218348 00215288  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8021834C 0021528C  7D 89 03 A6 */	mtctr r12
/* 80218350 00215290  4E 80 04 21 */	bctrl 
/* 80218354 00215294  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 80218358 00215298  2C 1F 00 00 */	cmpwi r31, 0
/* 8021835C 0021529C  90 64 01 8C */	stw r3, 0x18c(r4)
/* 80218360 002152A0  40 82 00 14 */	bne .L_80218374
/* 80218364 002152A4  80 1E 01 04 */	lwz r0, 0x124(r30)
/* 80218368 002152A8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021836C 002152AC  90 03 01 90 */	stw r0, 0x190(r3)
/* 80218370 002152B0  48 00 00 10 */	b .L_80218380
.L_80218374:
/* 80218374 002152B4  80 1E 01 08 */	lwz r0, 0x128(r30)
/* 80218378 002152B8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021837C 002152BC  90 03 01 90 */	stw r0, 0x190(r3)
.L_80218380:
/* 80218380 002152C0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80218384 002152C4  38 81 00 08 */	addi r4, r1, 8
/* 80218388 002152C8  48 21 46 49 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8021838C 002152CC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80218390 002152D0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80218394 002152D4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80218398 002152D8  7C 08 03 A6 */	mtlr r0
/* 8021839C 002152DC  38 21 00 50 */	addi r1, r1, 0x50
/* 802183A0 002152E0  4E 80 00 20 */	blr 
.else
.global onOrimaDown__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni
onOrimaDown__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni:
/* 802182D0 00215210  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802182D4 00215214  7C 08 02 A6 */	mflr r0
/* 802182D8 00215218  3C 60 80 48 */	lis r3, lbl_8048253C@ha
/* 802182DC 0021521C  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 802182E0 00215220  90 01 00 54 */	stw r0, 0x54(r1)
/* 802182E4 00215224  38 00 00 00 */	li r0, 0
/* 802182E8 00215228  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802182EC 0021522C  7C BF 2B 78 */	mr r31, r5
/* 802182F0 00215230  38 A3 25 3C */	addi r5, r3, lbl_8048253C@l
/* 802182F4 00215234  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802182F8 00215238  7C 9E 23 78 */	mr r30, r4
/* 802182FC 0021523C  80 C4 00 C8 */	lwz r6, 0xc8(r4)
/* 80218300 00215240  7F E4 FB 78 */	mr r4, r31
/* 80218304 00215244  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218308 00215248  90 01 00 0C */	stw r0, 0xc(r1)
/* 8021830C 0021524C  90 A1 00 08 */	stw r5, 8(r1)
/* 80218310 00215250  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80218314 00215254  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80218318 00215258  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8021831C 0021525C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80218320 00215260  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80218324 00215264  93 E1 00 30 */	stw r31, 0x30(r1)
/* 80218328 00215268  90 01 00 18 */	stw r0, 0x18(r1)
/* 8021832C 0021526C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80218330 00215270  90 01 00 34 */	stw r0, 0x34(r1)
/* 80218334 00215274  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80218338 00215278  90 01 00 38 */	stw r0, 0x38(r1)
/* 8021833C 0021527C  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 80218340 00215280  90 01 00 18 */	stw r0, 0x18(r1)
/* 80218344 00215284  81 83 00 00 */	lwz r12, 0(r3)
/* 80218348 00215288  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8021834C 0021528C  7D 89 03 A6 */	mtctr r12
/* 80218350 00215290  4E 80 04 21 */	bctrl 
/* 80218354 00215294  80 8D 9B 54 */	lwz r4, moviePlayer__4Game@sda21(r13)
/* 80218358 00215298  2C 1F 00 00 */	cmpwi r31, 0
/* 8021835C 0021529C  90 64 01 8C */	stw r3, 0x18c(r4)
/* 80218360 002152A0  40 82 00 14 */	bne .L_80218374
/* 80218364 002152A4  80 1E 01 04 */	lwz r0, 0x104(r30)
/* 80218368 002152A8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021836C 002152AC  90 03 01 90 */	stw r0, 0x190(r3)
/* 80218370 002152B0  48 00 00 10 */	b .L_80218380
.L_80218374:
/* 80218374 002152B4  80 1E 01 08 */	lwz r0, 0x108(r30)
/* 80218378 002152B8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021837C 002152BC  90 03 01 90 */	stw r0, 0x190(r3)
.L_80218380:
/* 80218380 002152C0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80218384 002152C4  38 81 00 08 */	addi r4, r1, 8
/* 80218388 002152C8  48 21 46 49 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 8021838C 002152CC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80218390 002152D0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80218394 002152D4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80218398 002152D8  7C 08 03 A6 */	mtlr r0
/* 8021839C 002152DC  38 21 00 50 */	addi r1, r1, 0x50
/* 802183A0 002152E0  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onFountainReturn__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
onFountainReturn__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item:
/* 802183A4 002152E4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802183A8 002152E8  7C 08 02 A6 */	mflr r0
/* 802183AC 002152EC  90 01 00 54 */	stw r0, 0x54(r1)
/* 802183B0 002152F0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802183B4 002152F4  7C BF 2B 78 */	mr r31, r5
/* 802183B8 002152F8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802183BC 002152FC  7C 9E 23 78 */	mr r30, r4
/* 802183C0 00215300  7F C3 F3 78 */	mr r3, r30
/* 802183C4 00215304  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 802183C8 00215308  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 802183CC 0021530C  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 802183D0 00215310  98 06 00 3C */	stb r0, 0x3c(r6)
/* 802183D4 00215314  4B F3 BB 95 */	bl loadMainMapSituation__Q24Game17SingleGameSectionFv
/* 802183D8 00215318  80 DE 00 C8 */	lwz r6, 0xe8(r30)
/* 802183DC 0021531C  3C 60 80 48 */	lis r3, lbl_8048254C@ha
/* 802183E0 00215320  38 00 00 00 */	li r0, 0
/* 802183E4 00215324  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 802183E8 00215328  38 A3 25 4C */	addi r5, r3, lbl_8048254C@l
/* 802183EC 0021532C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802183F0 00215330  7F E4 FB 78 */	mr r4, r31
/* 802183F4 00215334  38 61 00 08 */	addi r3, r1, 8
/* 802183F8 00215338  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802183FC 0021533C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80218400 00215340  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80218404 00215344  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80218408 00215348  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8021840C 0021534C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80218410 00215350  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80218414 00215354  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218418 00215358  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8021841C 0021535C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80218420 00215360  90 01 00 28 */	stw r0, 0x28(r1)
/* 80218424 00215364  90 01 00 44 */	stw r0, 0x44(r1)
/* 80218428 00215368  81 9F 00 00 */	lwz r12, 0(r31)
/* 8021842C 0021536C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218430 00215370  7D 89 03 A6 */	mtctr r12
/* 80218434 00215374  4E 80 04 21 */	bctrl 
/* 80218438 00215378  C0 41 00 08 */	lfs f2, 8(r1)
/* 8021843C 0021537C  7F E3 FB 78 */	mr r3, r31
/* 80218440 00215380  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80218444 00215384  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80218448 00215388  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8021844C 0021538C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80218450 00215390  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80218454 00215394  81 9F 00 00 */	lwz r12, 0(r31)
/* 80218458 00215398  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8021845C 0021539C  7D 89 03 A6 */	mtctr r12
/* 80218460 002153A0  4E 80 04 21 */	bctrl 
/* 80218464 002153A4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80218468 002153A8  7F E3 FB 78 */	mr r3, r31
/* 8021846C 002153AC  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80218470 002153B0  38 80 00 00 */	li r4, 0
/* 80218474 002153B4  80 1E 00 CC */	lwz r0, 0xec(r30)
/* 80218478 002153B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8021847C 002153BC  93 E5 01 94 */	stw r31, 0x194(r5)
/* 80218480 002153C0  4B F2 35 D1 */	bl movie_begin__Q24Game8CreatureFb
/* 80218484 002153C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80218488 002153C8  38 81 00 14 */	addi r4, r1, 0x14
/* 8021848C 002153CC  48 21 45 45 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80218490 002153D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80218494 002153D4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80218498 002153D8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8021849C 002153DC  7C 08 03 A6 */	mtlr r0
/* 802184A0 002153E0  38 21 00 50 */	addi r1, r1, 0x50
/* 802184A4 002153E4  4E 80 00 20 */	blr 
.else
.global onFountainReturn__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
onFountainReturn__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item:
/* 802183A4 002152E4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802183A8 002152E8  7C 08 02 A6 */	mflr r0
/* 802183AC 002152EC  90 01 00 54 */	stw r0, 0x54(r1)
/* 802183B0 002152F0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802183B4 002152F4  7C BF 2B 78 */	mr r31, r5
/* 802183B8 002152F8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802183BC 002152FC  7C 9E 23 78 */	mr r30, r4
/* 802183C0 00215300  7F C3 F3 78 */	mr r3, r30
/* 802183C4 00215304  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 802183C8 00215308  88 06 00 3C */	lbz r0, 0x3c(r6)
/* 802183CC 0021530C  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 802183D0 00215310  98 06 00 3C */	stb r0, 0x3c(r6)
/* 802183D4 00215314  4B F3 BB 95 */	bl loadMainMapSituation__Q24Game17SingleGameSectionFv
/* 802183D8 00215318  80 DE 00 C8 */	lwz r6, 0xc8(r30)
/* 802183DC 0021531C  3C 60 80 48 */	lis r3, lbl_8048254C@ha
/* 802183E0 00215320  38 00 00 00 */	li r0, 0
/* 802183E4 00215324  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 802183E8 00215328  38 A3 25 4C */	addi r5, r3, lbl_8048254C@l
/* 802183EC 0021532C  90 01 00 18 */	stw r0, 0x18(r1)
/* 802183F0 00215330  7F E4 FB 78 */	mr r4, r31
/* 802183F4 00215334  38 61 00 08 */	addi r3, r1, 8
/* 802183F8 00215338  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802183FC 0021533C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80218400 00215340  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80218404 00215344  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80218408 00215348  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8021840C 0021534C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80218410 00215350  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80218414 00215354  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218418 00215358  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8021841C 0021535C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80218420 00215360  90 01 00 28 */	stw r0, 0x28(r1)
/* 80218424 00215364  90 01 00 44 */	stw r0, 0x44(r1)
/* 80218428 00215368  81 9F 00 00 */	lwz r12, 0(r31)
/* 8021842C 0021536C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218430 00215370  7D 89 03 A6 */	mtctr r12
/* 80218434 00215374  4E 80 04 21 */	bctrl 
/* 80218438 00215378  C0 41 00 08 */	lfs f2, 8(r1)
/* 8021843C 0021537C  7F E3 FB 78 */	mr r3, r31
/* 80218440 00215380  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80218444 00215384  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80218448 00215388  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8021844C 0021538C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80218450 00215390  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80218454 00215394  81 9F 00 00 */	lwz r12, 0(r31)
/* 80218458 00215398  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8021845C 0021539C  7D 89 03 A6 */	mtctr r12
/* 80218460 002153A0  4E 80 04 21 */	bctrl 
/* 80218464 002153A4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80218468 002153A8  7F E3 FB 78 */	mr r3, r31
/* 8021846C 002153AC  80 AD 9B 54 */	lwz r5, moviePlayer__4Game@sda21(r13)
/* 80218470 002153B0  38 80 00 00 */	li r4, 0
/* 80218474 002153B4  80 1E 00 CC */	lwz r0, 0xcc(r30)
/* 80218478 002153B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8021847C 002153BC  93 E5 01 94 */	stw r31, 0x194(r5)
/* 80218480 002153C0  4B F2 35 D1 */	bl movie_begin__Q24Game8CreatureFb
/* 80218484 002153C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80218488 002153C8  38 81 00 14 */	addi r4, r1, 0x14
/* 8021848C 002153CC  48 21 45 45 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80218490 002153D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80218494 002153D4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80218498 002153D8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8021849C 002153DC  7C 08 03 A6 */	mtlr r0
/* 802184A0 002153E0  38 21 00 50 */	addi r1, r1, 0x50
/* 802184A4 002153E4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onNextFloor__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
onNextFloor__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item:
/* 802184A8 002153E8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802184AC 002153EC  7C 08 02 A6 */	mflr r0
/* 802184B0 002153F0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802184B4 002153F4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802184B8 002153F8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802184BC 002153FC  7C BE 2B 78 */	mr r30, r5
/* 802184C0 00215400  93 A1 00 54 */	stw r29, 0x54(r1)
/* 802184C4 00215404  7C 9D 23 78 */	mr r29, r4
/* 802184C8 00215408  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802184CC 0021540C  83 E3 01 14 */	lwz r31, 0x114(r3)
/* 802184D0 00215410  28 1F 00 00 */	cmplwi r31, 0
/* 802184D4 00215414  41 82 00 40 */	beq .L_80218514
/* 802184D8 00215418  7F E3 FB 78 */	mr r3, r31
/* 802184DC 0021541C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802184E0 00215420  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802184E4 00215424  7D 89 03 A6 */	mtctr r12
/* 802184E8 00215428  4E 80 04 21 */	bctrl 
/* 802184EC 0021542C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802184F0 00215430  41 82 00 18 */	beq .L_80218508
/* 802184F4 00215434  7F E3 FB 78 */	mr r3, r31
/* 802184F8 00215438  48 19 24 D5 */	bl getTimer__Q34Game8BlackMan3ObjFv
/* 802184FC 0021543C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218500 00215440  D0 23 00 70 */	stfs f1, 0x70(r3)
/* 80218504 00215444  48 00 00 10 */	b .L_80218514
.L_80218508:
/* 80218508 00215448  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021850C 0021544C  38 00 00 00 */	li r0, 0
/* 80218510 00215450  98 03 00 6C */	stb r0, 0x6c(r3)
.L_80218514:
/* 80218514 00215454  80 ED 93 E8 */	lwz r7, gameSystem__4Game@sda21(r13)
/* 80218518 00215458  3C 60 80 48 */	lis r3, lbl_8048255C@ha
/* 8021851C 0021545C  38 A3 25 5C */	addi r5, r3, lbl_8048255C@l
/* 80218520 00215460  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80218524 00215464  88 C7 00 3C */	lbz r6, 0x3c(r7)
/* 80218528 00215468  38 00 00 00 */	li r0, 0
/* 8021852C 0021546C  7F C4 F3 78 */	mr r4, r30
/* 80218530 00215470  38 61 00 08 */	addi r3, r1, 8
/* 80218534 00215474  54 C6 06 F2 */	rlwinm r6, r6, 0, 0x1b, 0x19
/* 80218538 00215478  98 C7 00 3C */	stb r6, 0x3c(r7)
/* 8021853C 0021547C  80 DD 00 C8 */	lwz r6, 0xe8(r29)
/* 80218540 00215480  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80218544 00215484  90 01 00 18 */	stw r0, 0x18(r1)
/* 80218548 00215488  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8021854C 0021548C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80218550 00215490  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80218554 00215494  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80218558 00215498  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8021855C 0021549C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80218560 002154A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218564 002154A4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80218568 002154A8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8021856C 002154AC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80218570 002154B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80218574 002154B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80218578 002154B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021857C 002154BC  7D 89 03 A6 */	mtctr r12
/* 80218580 002154C0  4E 80 04 21 */	bctrl 
/* 80218584 002154C4  C0 41 00 08 */	lfs f2, 8(r1)
/* 80218588 002154C8  7F C3 F3 78 */	mr r3, r30
/* 8021858C 002154CC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80218590 002154D0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80218594 002154D4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80218598 002154D8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8021859C 002154DC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802185A0 002154E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802185A4 002154E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802185A8 002154E8  7D 89 03 A6 */	mtctr r12
/* 802185AC 002154EC  4E 80 04 21 */	bctrl 
/* 802185B0 002154F0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 802185B4 002154F4  38 81 00 14 */	addi r4, r1, 0x14
/* 802185B8 002154F8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802185BC 002154FC  80 1D 00 CC */	lwz r0, 0xec(r29)
/* 802185C0 00215500  90 01 00 24 */	stw r0, 0x24(r1)
/* 802185C4 00215504  93 C3 01 94 */	stw r30, 0x194(r3)
/* 802185C8 00215508  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802185CC 0021550C  48 21 44 05 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802185D0 00215510  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802185D4 00215514  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802185D8 00215518  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802185DC 0021551C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 802185E0 00215520  7C 08 03 A6 */	mtlr r0
/* 802185E4 00215524  38 21 00 60 */	addi r1, r1, 0x60
/* 802185E8 00215528  4E 80 00 20 */	blr 
.else
.global onNextFloor__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
onNextFloor__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item:
/* 802184A8 002153E8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802184AC 002153EC  7C 08 02 A6 */	mflr r0
/* 802184B0 002153F0  90 01 00 64 */	stw r0, 0x64(r1)
/* 802184B4 002153F4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802184B8 002153F8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 802184BC 002153FC  7C BE 2B 78 */	mr r30, r5
/* 802184C0 00215400  93 A1 00 54 */	stw r29, 0x54(r1)
/* 802184C4 00215404  7C 9D 23 78 */	mr r29, r4
/* 802184C8 00215408  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802184CC 0021540C  83 E3 01 14 */	lwz r31, 0x114(r3)
/* 802184D0 00215410  28 1F 00 00 */	cmplwi r31, 0
/* 802184D4 00215414  41 82 00 40 */	beq .L_80218514
/* 802184D8 00215418  7F E3 FB 78 */	mr r3, r31
/* 802184DC 0021541C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802184E0 00215420  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802184E4 00215424  7D 89 03 A6 */	mtctr r12
/* 802184E8 00215428  4E 80 04 21 */	bctrl 
/* 802184EC 0021542C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802184F0 00215430  41 82 00 18 */	beq .L_80218508
/* 802184F4 00215434  7F E3 FB 78 */	mr r3, r31
/* 802184F8 00215438  48 19 24 D5 */	bl getTimer__Q34Game8BlackMan3ObjFv
/* 802184FC 0021543C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218500 00215440  D0 23 00 70 */	stfs f1, 0x70(r3)
/* 80218504 00215444  48 00 00 10 */	b .L_80218514
.L_80218508:
/* 80218508 00215448  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021850C 0021544C  38 00 00 00 */	li r0, 0
/* 80218510 00215450  98 03 00 6C */	stb r0, 0x6c(r3)
.L_80218514:
/* 80218514 00215454  80 ED 93 E8 */	lwz r7, gameSystem__4Game@sda21(r13)
/* 80218518 00215458  3C 60 80 48 */	lis r3, lbl_8048255C@ha
/* 8021851C 0021545C  38 A3 25 5C */	addi r5, r3, lbl_8048255C@l
/* 80218520 00215460  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80218524 00215464  88 C7 00 3C */	lbz r6, 0x3c(r7)
/* 80218528 00215468  38 00 00 00 */	li r0, 0
/* 8021852C 0021546C  7F C4 F3 78 */	mr r4, r30
/* 80218530 00215470  38 61 00 08 */	addi r3, r1, 8
/* 80218534 00215474  54 C6 06 F2 */	rlwinm r6, r6, 0, 0x1b, 0x19
/* 80218538 00215478  98 C7 00 3C */	stb r6, 0x3c(r7)
/* 8021853C 0021547C  80 DD 00 C8 */	lwz r6, 0xc8(r29)
/* 80218540 00215480  90 A1 00 14 */	stw r5, 0x14(r1)
/* 80218544 00215484  90 01 00 18 */	stw r0, 0x18(r1)
/* 80218548 00215488  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8021854C 0021548C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80218550 00215490  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80218554 00215494  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80218558 00215498  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8021855C 0021549C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80218560 002154A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218564 002154A4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80218568 002154A8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8021856C 002154AC  90 01 00 28 */	stw r0, 0x28(r1)
/* 80218570 002154B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80218574 002154B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 80218578 002154B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021857C 002154BC  7D 89 03 A6 */	mtctr r12
/* 80218580 002154C0  4E 80 04 21 */	bctrl 
/* 80218584 002154C4  C0 41 00 08 */	lfs f2, 8(r1)
/* 80218588 002154C8  7F C3 F3 78 */	mr r3, r30
/* 8021858C 002154CC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80218590 002154D0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80218594 002154D4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80218598 002154D8  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8021859C 002154DC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802185A0 002154E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802185A4 002154E4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 802185A8 002154E8  7D 89 03 A6 */	mtctr r12
/* 802185AC 002154EC  4E 80 04 21 */	bctrl 
/* 802185B0 002154F0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 802185B4 002154F4  38 81 00 14 */	addi r4, r1, 0x14
/* 802185B8 002154F8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802185BC 002154FC  80 1D 00 CC */	lwz r0, 0xcc(r29)
/* 802185C0 00215500  90 01 00 24 */	stw r0, 0x24(r1)
/* 802185C4 00215504  93 C3 01 94 */	stw r30, 0x194(r3)
/* 802185C8 00215508  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802185CC 0021550C  48 21 44 05 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802185D0 00215510  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802185D4 00215514  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802185D8 00215518  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 802185DC 0021551C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 802185E0 00215520  7C 08 03 A6 */	mtlr r0
/* 802185E4 00215524  38 21 00 60 */	addi r1, r1, 0x60
/* 802185E8 00215528  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onMovieCommand__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni
onMovieCommand__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni:
/* 802185EC 0021552C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802185F0 00215530  7C 08 02 A6 */	mflr r0
/* 802185F4 00215534  90 01 00 94 */	stw r0, 0x94(r1)
/* 802185F8 00215538  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 802185FC 0021553C  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80218600 00215540  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80218604 00215544  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80218608 00215548  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8021860C 0021554C  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80218610 00215550  BE E1 00 3C */	stmw r23, 0x3c(r1)
/* 80218614 00215554  2C 05 00 00 */	cmpwi r5, 0
/* 80218618 00215558  7C 7F 1B 78 */	mr r31, r3
/* 8021861C 0021555C  7C 9D 23 78 */	mr r29, r4
/* 80218620 00215560  41 82 00 08 */	beq .L_80218628
/* 80218624 00215564  48 00 05 8C */	b .L_80218BB0
.L_80218628:
/* 80218628 00215568  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8021862C 0021556C  28 00 00 00 */	cmplwi r0, 0
/* 80218630 00215570  40 82 05 80 */	bne .L_80218BB0
/* 80218634 00215574  3C 80 80 48 */	lis r4, lbl_8048253C@ha
/* 80218638 00215578  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021863C 0021557C  38 84 25 3C */	addi r4, r4, lbl_8048253C@l
/* 80218640 00215580  48 21 5F 79 */	bl isPlaying__Q24Game11MoviePlayerFPc
/* 80218644 00215584  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218648 00215588  41 82 00 14 */	beq .L_8021865C
/* 8021864C 0021558C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218650 00215590  80 03 00 50 */	lwz r0, 0x50(r3)
/* 80218654 00215594  2C 00 00 00 */	cmpwi r0, 0
/* 80218658 00215598  41 82 05 58 */	beq .L_80218BB0
.L_8021865C:
/* 8021865C 0021559C  3C 80 80 48 */	lis r4, lbl_8048253C@ha
/* 80218660 002155A0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80218664 002155A4  38 84 25 3C */	addi r4, r4, lbl_8048253C@l
/* 80218668 002155A8  48 21 5F 51 */	bl isPlaying__Q24Game11MoviePlayerFPc
/* 8021866C 002155AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218670 002155B0  41 82 02 20 */	beq .L_80218890
/* 80218674 002155B4  38 00 00 00 */	li r0, 0
/* 80218678 002155B8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8021867C 002155BC  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80218680 002155C0  90 01 00 18 */	stw r0, 0x18(r1)
/* 80218684 002155C4  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80218688 002155C8  28 00 00 00 */	cmplwi r0, 0
/* 8021868C 002155CC  90 81 00 0C */	stw r4, 0xc(r1)
/* 80218690 002155D0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80218694 002155D4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80218698 002155D8  40 82 00 1C */	bne .L_802186B4
/* 8021869C 002155DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802186A0 002155E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802186A4 002155E4  7D 89 03 A6 */	mtctr r12
/* 802186A8 002155E8  4E 80 04 21 */	bctrl 
/* 802186AC 002155EC  90 61 00 10 */	stw r3, 0x10(r1)
/* 802186B0 002155F0  48 00 01 C0 */	b .L_80218870
.L_802186B4:
/* 802186B4 002155F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802186B8 002155F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802186BC 002155FC  7D 89 03 A6 */	mtctr r12
/* 802186C0 00215600  4E 80 04 21 */	bctrl 
/* 802186C4 00215604  90 61 00 10 */	stw r3, 0x10(r1)
/* 802186C8 00215608  48 00 00 58 */	b .L_80218720
.L_802186CC:
/* 802186CC 0021560C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802186D0 00215610  80 81 00 10 */	lwz r4, 0x10(r1)
/* 802186D4 00215614  81 83 00 00 */	lwz r12, 0(r3)
/* 802186D8 00215618  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802186DC 0021561C  7D 89 03 A6 */	mtctr r12
/* 802186E0 00215620  4E 80 04 21 */	bctrl 
/* 802186E4 00215624  7C 64 1B 78 */	mr r4, r3
/* 802186E8 00215628  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802186EC 0021562C  81 83 00 00 */	lwz r12, 0(r3)
/* 802186F0 00215630  81 8C 00 08 */	lwz r12, 8(r12)
/* 802186F4 00215634  7D 89 03 A6 */	mtctr r12
/* 802186F8 00215638  4E 80 04 21 */	bctrl 
/* 802186FC 0021563C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218700 00215640  40 82 01 70 */	bne .L_80218870
/* 80218704 00215644  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218708 00215648  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8021870C 0021564C  81 83 00 00 */	lwz r12, 0(r3)
/* 80218710 00215650  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218714 00215654  7D 89 03 A6 */	mtctr r12
/* 80218718 00215658  4E 80 04 21 */	bctrl 
/* 8021871C 0021565C  90 61 00 10 */	stw r3, 0x10(r1)
.L_80218720:
/* 80218720 00215660  81 81 00 0C */	lwz r12, 0xc(r1)
/* 80218724 00215664  38 61 00 0C */	addi r3, r1, 0xc
/* 80218728 00215668  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8021872C 0021566C  7D 89 03 A6 */	mtctr r12
/* 80218730 00215670  4E 80 04 21 */	bctrl 
/* 80218734 00215674  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218738 00215678  41 82 FF 94 */	beq .L_802186CC
/* 8021873C 0021567C  48 00 01 34 */	b .L_80218870
.L_80218740:
/* 80218740 00215680  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218744 00215684  81 83 00 00 */	lwz r12, 0(r3)
/* 80218748 00215688  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021874C 0021568C  7D 89 03 A6 */	mtctr r12
/* 80218750 00215690  4E 80 04 21 */	bctrl 
/* 80218754 00215694  81 83 00 00 */	lwz r12, 0(r3)
/* 80218758 00215698  7C 7C 1B 78 */	mr r28, r3
/* 8021875C 0021569C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80218760 002156A0  7D 89 03 A6 */	mtctr r12
/* 80218764 002156A4  4E 80 04 21 */	bctrl 
/* 80218768 002156A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021876C 002156AC  41 82 00 48 */	beq .L_802187B4
/* 80218770 002156B0  80 7C 02 94 */	lwz r3, 0x294(r28)
/* 80218774 002156B4  38 80 00 01 */	li r4, 1
/* 80218778 002156B8  38 A0 00 00 */	li r5, 0
/* 8021877C 002156BC  4B F7 E8 19 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80218780 002156C0  7F 83 E3 78 */	mr r3, r28
/* 80218784 002156C4  38 80 00 00 */	li r4, 0
/* 80218788 002156C8  4B F2 32 C9 */	bl movie_begin__Q24Game8CreatureFb
/* 8021878C 002156CC  38 00 00 03 */	li r0, 3
/* 80218790 002156D0  7F 84 E3 78 */	mr r4, r28
/* 80218794 002156D4  B0 01 00 08 */	sth r0, 8(r1)
/* 80218798 002156D8  38 C1 00 08 */	addi r6, r1, 8
/* 8021879C 002156DC  38 A0 00 15 */	li r5, 0x15
/* 802187A0 002156E0  80 7C 02 8C */	lwz r3, 0x28c(r28)
/* 802187A4 002156E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802187A8 002156E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802187AC 002156EC  7D 89 03 A6 */	mtctr r12
/* 802187B0 002156F0  4E 80 04 21 */	bctrl 
.L_802187B4:
/* 802187B4 002156F4  80 01 00 18 */	lwz r0, 0x18(r1)
/* 802187B8 002156F8  28 00 00 00 */	cmplwi r0, 0
/* 802187BC 002156FC  40 82 00 24 */	bne .L_802187E0
/* 802187C0 00215700  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802187C4 00215704  80 81 00 10 */	lwz r4, 0x10(r1)
/* 802187C8 00215708  81 83 00 00 */	lwz r12, 0(r3)
/* 802187CC 0021570C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802187D0 00215710  7D 89 03 A6 */	mtctr r12
/* 802187D4 00215714  4E 80 04 21 */	bctrl 
/* 802187D8 00215718  90 61 00 10 */	stw r3, 0x10(r1)
/* 802187DC 0021571C  48 00 00 94 */	b .L_80218870
.L_802187E0:
/* 802187E0 00215720  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802187E4 00215724  80 81 00 10 */	lwz r4, 0x10(r1)
/* 802187E8 00215728  81 83 00 00 */	lwz r12, 0(r3)
/* 802187EC 0021572C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802187F0 00215730  7D 89 03 A6 */	mtctr r12
/* 802187F4 00215734  4E 80 04 21 */	bctrl 
/* 802187F8 00215738  90 61 00 10 */	stw r3, 0x10(r1)
/* 802187FC 0021573C  48 00 00 58 */	b .L_80218854
.L_80218800:
/* 80218800 00215740  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218804 00215744  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80218808 00215748  81 83 00 00 */	lwz r12, 0(r3)
/* 8021880C 0021574C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218810 00215750  7D 89 03 A6 */	mtctr r12
/* 80218814 00215754  4E 80 04 21 */	bctrl 
/* 80218818 00215758  7C 64 1B 78 */	mr r4, r3
/* 8021881C 0021575C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80218820 00215760  81 83 00 00 */	lwz r12, 0(r3)
/* 80218824 00215764  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218828 00215768  7D 89 03 A6 */	mtctr r12
/* 8021882C 0021576C  4E 80 04 21 */	bctrl 
/* 80218830 00215770  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218834 00215774  40 82 00 3C */	bne .L_80218870
/* 80218838 00215778  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8021883C 0021577C  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80218840 00215780  81 83 00 00 */	lwz r12, 0(r3)
/* 80218844 00215784  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218848 00215788  7D 89 03 A6 */	mtctr r12
/* 8021884C 0021578C  4E 80 04 21 */	bctrl 
/* 80218850 00215790  90 61 00 10 */	stw r3, 0x10(r1)
.L_80218854:
/* 80218854 00215794  81 81 00 0C */	lwz r12, 0xc(r1)
/* 80218858 00215798  38 61 00 0C */	addi r3, r1, 0xc
/* 8021885C 0021579C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218860 002157A0  7D 89 03 A6 */	mtctr r12
/* 80218864 002157A4  4E 80 04 21 */	bctrl 
/* 80218868 002157A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021886C 002157AC  41 82 FF 94 */	beq .L_80218800
.L_80218870:
/* 80218870 002157B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218874 002157B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80218878 002157B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8021887C 002157BC  7D 89 03 A6 */	mtctr r12
/* 80218880 002157C0  4E 80 04 21 */	bctrl 
/* 80218884 002157C4  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80218888 002157C8  7C 04 18 40 */	cmplw r4, r3
/* 8021888C 002157CC  40 82 FE B4 */	bne .L_80218740
.L_80218890:
/* 80218890 002157D0  7F A3 EB 78 */	mr r3, r29
/* 80218894 002157D4  4B F3 D7 59 */	bl clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
/* 80218898 002157D8  38 00 00 01 */	li r0, 1
/* 8021889C 002157DC  3B C0 00 00 */	li r30, 0
/* 802188A0 002157E0  98 1F 00 10 */	stb r0, 0x10(r31)
/* 802188A4 002157E4  3B 60 00 00 */	li r27, 0
/* 802188A8 002157E8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802188AC 002157EC  83 E3 00 B8 */	lwz r31, 0xb8(r3)
/* 802188B0 002157F0  3B 9F 00 04 */	addi r28, r31, 4
/* 802188B4 002157F4  48 00 00 34 */	b .L_802188E8
.L_802188B8:
/* 802188B8 002157F8  7F 83 E3 78 */	mr r3, r28
/* 802188BC 002157FC  7F 64 DB 78 */	mr r4, r27
/* 802188C0 00215800  4B FC CB 41 */	bl __cl__Q24Game11KindCounterFi
/* 802188C4 00215804  88 03 00 00 */	lbz r0, 0(r3)
/* 802188C8 00215808  28 00 00 00 */	cmplwi r0, 0
/* 802188CC 0021580C  41 82 00 18 */	beq .L_802188E4
/* 802188D0 00215810  7F 83 E3 78 */	mr r3, r28
/* 802188D4 00215814  7F 64 DB 78 */	mr r4, r27
/* 802188D8 00215818  4B FC CB 29 */	bl __cl__Q24Game11KindCounterFi
/* 802188DC 0021581C  88 03 00 00 */	lbz r0, 0(r3)
/* 802188E0 00215820  7F DE 02 14 */	add r30, r30, r0
.L_802188E4:
/* 802188E4 00215824  3B 7B 00 01 */	addi r27, r27, 1
.L_802188E8:
/* 802188E8 00215828  A0 1C 00 00 */	lhz r0, 0(r28)
/* 802188EC 0021582C  7C 1B 00 00 */	cmpw r27, r0
/* 802188F0 00215830  41 80 FF C8 */	blt .L_802188B8
/* 802188F4 00215834  3B 7F 00 0C */	addi r27, r31, 0xc
/* 802188F8 00215838  3B 80 00 00 */	li r28, 0
/* 802188FC 0021583C  48 00 00 34 */	b .L_80218930
.L_80218900:
/* 80218900 00215840  7F 63 DB 78 */	mr r3, r27
/* 80218904 00215844  7F 84 E3 78 */	mr r4, r28
/* 80218908 00215848  4B FC CA F9 */	bl __cl__Q24Game11KindCounterFi
/* 8021890C 0021584C  88 03 00 00 */	lbz r0, 0(r3)
/* 80218910 00215850  28 00 00 00 */	cmplwi r0, 0
/* 80218914 00215854  41 82 00 18 */	beq .L_8021892C
/* 80218918 00215858  7F 63 DB 78 */	mr r3, r27
/* 8021891C 0021585C  7F 84 E3 78 */	mr r4, r28
/* 80218920 00215860  4B FC CA E1 */	bl __cl__Q24Game11KindCounterFi
/* 80218924 00215864  88 03 00 00 */	lbz r0, 0(r3)
/* 80218928 00215868  7F DE 02 14 */	add r30, r30, r0
.L_8021892C:
/* 8021892C 0021586C  3B 9C 00 01 */	addi r28, r28, 1
.L_80218930:
/* 80218930 00215870  A0 1B 00 00 */	lhz r0, 0(r27)
/* 80218934 00215874  7C 1C 00 00 */	cmpw r28, r0
/* 80218938 00215878  41 80 FF C8 */	blt .L_80218900
/* 8021893C 0021587C  4B EB 0C 65 */	bl rand
/* 80218940 00215880  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80218944 00215884  3C 00 43 30 */	lis r0, 0x4330
/* 80218948 00215888  90 61 00 24 */	stw r3, 0x24(r1)
/* 8021894C 0021588C  C8 62 BC C8 */	lfd f3, lbl_8051A028@sda21(r2)
/* 80218950 00215890  90 01 00 20 */	stw r0, 0x20(r1)
/* 80218954 00215894  C0 42 BC C0 */	lfs f2, lbl_8051A020@sda21(r2)
/* 80218958 00215898  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8021895C 0021589C  C0 22 BC A8 */	lfs f1, lbl_8051A008@sda21(r2)
/* 80218960 002158A0  EC 60 18 28 */	fsubs f3, f0, f3
/* 80218964 002158A4  C0 02 BC A0 */	lfs f0, lbl_8051A000@sda21(r2)
/* 80218968 002158A8  EC 43 10 24 */	fdivs f2, f3, f2
/* 8021896C 002158AC  EC 41 00 BA */	fmadds f2, f1, f2, f0
/* 80218970 002158B0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80218974 002158B4  40 80 00 0C */	bge .L_80218980
/* 80218978 002158B8  FC 40 08 90 */	fmr f2, f1
/* 8021897C 002158BC  48 00 00 10 */	b .L_8021898C
.L_80218980:
/* 80218980 002158C0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80218984 002158C4  40 81 00 08 */	ble .L_8021898C
/* 80218988 002158C8  FC 40 00 90 */	fmr f2, f0
.L_8021898C:
/* 8021898C 002158CC  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80218990 002158D0  3F 80 43 30 */	lis r28, 0x4330
/* 80218994 002158D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218998 002158D8  38 00 00 01 */	li r0, 1
/* 8021899C 002158DC  CB C2 BC C8 */	lfd f30, lbl_8051A028@sda21(r2)
/* 802189A0 002158E0  93 81 00 20 */	stw r28, 0x20(r1)
/* 802189A4 002158E4  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 802189A8 002158E8  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 802189AC 002158EC  98 1D 02 74 */	stb r0, 0x298(r29)
/* 802189B0 002158F0  EC 21 F0 28 */	fsubs f1, f1, f30
/* 802189B4 002158F4  EF E1 00 B2 */	fmuls f31, f1, f2
/* 802189B8 002158F8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802189BC 002158FC  40 81 01 F4 */	ble .L_80218BB0
/* 802189C0 00215900  83 6D 95 20 */	lwz r27, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 802189C4 00215904  3B 5F 00 04 */	addi r26, r31, 4
/* 802189C8 00215908  C3 A2 BC C0 */	lfs f29, lbl_8051A020@sda21(r2)
/* 802189CC 0021590C  3B 20 00 00 */	li r25, 0
/* 802189D0 00215910  48 00 00 D8 */	b .L_80218AA8
.L_802189D4:
/* 802189D4 00215914  3B 00 00 00 */	li r24, 0
/* 802189D8 00215918  3A E0 00 00 */	li r23, 0
/* 802189DC 0021591C  48 00 00 98 */	b .L_80218A74
.L_802189E0:
/* 802189E0 00215920  7F 63 DB 78 */	mr r3, r27
/* 802189E4 00215924  7F 24 CB 78 */	mr r4, r25
/* 802189E8 00215928  4B F5 33 A1 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 802189EC 0021592C  4B EB 0B B5 */	bl rand
/* 802189F0 00215930  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802189F4 00215934  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 802189F8 00215938  90 61 00 24 */	stw r3, 0x24(r1)
/* 802189FC 0021593C  93 81 00 20 */	stw r28, 0x20(r1)
/* 80218A00 00215940  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80218A04 00215944  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80218A08 00215948  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80218A0C 0021594C  93 81 00 28 */	stw r28, 0x28(r1)
/* 80218A10 00215950  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80218A14 00215954  EC 21 E8 24 */	fdivs f1, f1, f29
/* 80218A18 00215958  EC 00 F0 28 */	fsubs f0, f0, f30
/* 80218A1C 0021595C  EC 1F 00 24 */	fdivs f0, f31, f0
/* 80218A20 00215960  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80218A24 00215964  4C 40 13 82 */	cror 2, 0, 2
/* 80218A28 00215968  40 82 00 44 */	bne .L_80218A6C
/* 80218A2C 0021596C  7F 63 DB 78 */	mr r3, r27
/* 80218A30 00215970  7F 24 CB 78 */	mr r4, r25
/* 80218A34 00215974  4B F5 33 55 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80218A38 00215978  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218A3C 0021597C  7F 64 DB 78 */	mr r4, r27
/* 80218A40 00215980  7F 25 CB 78 */	mr r5, r25
/* 80218A44 00215984  4B FC EB 81 */	bl losePellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80218A48 00215988  7F 24 CB 78 */	mr r4, r25
/* 80218A4C 0021598C  38 7D 02 64 */	addi r3, r29, 0x288
/* 80218A50 00215990  4B FC C9 B1 */	bl __cl__Q24Game11KindCounterFi
/* 80218A54 00215994  88 83 00 00 */	lbz r4, 0(r3)
/* 80218A58 00215998  3B 18 00 01 */	addi r24, r24, 1
/* 80218A5C 0021599C  C0 02 BC A0 */	lfs f0, lbl_8051A000@sda21(r2)
/* 80218A60 002159A0  38 04 00 01 */	addi r0, r4, 1
/* 80218A64 002159A4  EF FF 00 28 */	fsubs f31, f31, f0
/* 80218A68 002159A8  98 03 00 00 */	stb r0, 0(r3)
.L_80218A6C:
/* 80218A6C 002159AC  3B DE FF FF */	addi r30, r30, -1
/* 80218A70 002159B0  3A F7 00 01 */	addi r23, r23, 1
.L_80218A74:
/* 80218A74 002159B4  7F 43 D3 78 */	mr r3, r26
/* 80218A78 002159B8  7F 24 CB 78 */	mr r4, r25
/* 80218A7C 002159BC  4B FC C9 85 */	bl __cl__Q24Game11KindCounterFi
/* 80218A80 002159C0  88 03 00 00 */	lbz r0, 0(r3)
/* 80218A84 002159C4  7C 17 00 00 */	cmpw r23, r0
/* 80218A88 002159C8  41 80 FF 58 */	blt .L_802189E0
/* 80218A8C 002159CC  7F 43 D3 78 */	mr r3, r26
/* 80218A90 002159D0  7F 24 CB 78 */	mr r4, r25
/* 80218A94 002159D4  4B FC C9 6D */	bl __cl__Q24Game11KindCounterFi
/* 80218A98 002159D8  88 03 00 00 */	lbz r0, 0(r3)
/* 80218A9C 002159DC  3B 39 00 01 */	addi r25, r25, 1
/* 80218AA0 002159E0  7C 18 00 50 */	subf r0, r24, r0
/* 80218AA4 002159E4  98 03 00 00 */	stb r0, 0(r3)
.L_80218AA8:
/* 80218AA8 002159E8  A0 1A 00 00 */	lhz r0, 0(r26)
/* 80218AAC 002159EC  7C 19 00 00 */	cmpw r25, r0
/* 80218AB0 002159F0  41 80 FF 24 */	blt .L_802189D4
/* 80218AB4 002159F4  83 8D 95 28 */	lwz r28, mgr__Q24Game10PelletItem@sda21(r13)
/* 80218AB8 002159F8  3A FF 00 0C */	addi r23, r31, 0xc
/* 80218ABC 002159FC  CB A2 BC C8 */	lfd f29, lbl_8051A028@sda21(r2)
/* 80218AC0 00215A00  3B 00 00 00 */	li r24, 0
/* 80218AC4 00215A04  C3 C2 BC C0 */	lfs f30, lbl_8051A020@sda21(r2)
/* 80218AC8 00215A08  3F E0 43 30 */	lis r31, 0x4330
/* 80218ACC 00215A0C  48 00 00 D8 */	b .L_80218BA4
.L_80218AD0:
/* 80218AD0 00215A10  3B 20 00 00 */	li r25, 0
/* 80218AD4 00215A14  3B 40 00 00 */	li r26, 0
/* 80218AD8 00215A18  48 00 00 98 */	b .L_80218B70
.L_80218ADC:
/* 80218ADC 00215A1C  7F 83 E3 78 */	mr r3, r28
/* 80218AE0 00215A20  7F 04 C3 78 */	mr r4, r24
/* 80218AE4 00215A24  4B F5 32 A5 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80218AE8 00215A28  4B EB 0A B9 */	bl rand
/* 80218AEC 00215A2C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80218AF0 00215A30  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80218AF4 00215A34  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80218AF8 00215A38  93 E1 00 28 */	stw r31, 0x28(r1)
/* 80218AFC 00215A3C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80218B00 00215A40  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218B04 00215A44  EC 20 E8 28 */	fsubs f1, f0, f29
/* 80218B08 00215A48  93 E1 00 20 */	stw r31, 0x20(r1)
/* 80218B0C 00215A4C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80218B10 00215A50  EC 21 F0 24 */	fdivs f1, f1, f30
/* 80218B14 00215A54  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80218B18 00215A58  EC 1F 00 24 */	fdivs f0, f31, f0
/* 80218B1C 00215A5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80218B20 00215A60  4C 40 13 82 */	cror 2, 0, 2
/* 80218B24 00215A64  40 82 00 44 */	bne .L_80218B68
/* 80218B28 00215A68  7F 83 E3 78 */	mr r3, r28
/* 80218B2C 00215A6C  7F 04 C3 78 */	mr r4, r24
/* 80218B30 00215A70  4B F5 32 59 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80218B34 00215A74  7F 04 C3 78 */	mr r4, r24
/* 80218B38 00215A78  38 7D 02 6C */	addi r3, r29, 0x290
/* 80218B3C 00215A7C  4B FC C8 C5 */	bl __cl__Q24Game11KindCounterFi
/* 80218B40 00215A80  88 C3 00 00 */	lbz r6, 0(r3)
/* 80218B44 00215A84  7F 84 E3 78 */	mr r4, r28
/* 80218B48 00215A88  7F 05 C3 78 */	mr r5, r24
/* 80218B4C 00215A8C  38 06 00 01 */	addi r0, r6, 1
/* 80218B50 00215A90  98 03 00 00 */	stb r0, 0(r3)
/* 80218B54 00215A94  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218B58 00215A98  4B FC EA 6D */	bl losePellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80218B5C 00215A9C  C0 02 BC A0 */	lfs f0, lbl_8051A000@sda21(r2)
/* 80218B60 00215AA0  3B 39 00 01 */	addi r25, r25, 1
/* 80218B64 00215AA4  EF FF 00 28 */	fsubs f31, f31, f0
.L_80218B68:
/* 80218B68 00215AA8  3B DE FF FF */	addi r30, r30, -1
/* 80218B6C 00215AAC  3B 5A 00 01 */	addi r26, r26, 1
.L_80218B70:
/* 80218B70 00215AB0  7E E3 BB 78 */	mr r3, r23
/* 80218B74 00215AB4  7F 04 C3 78 */	mr r4, r24
/* 80218B78 00215AB8  4B FC C8 89 */	bl __cl__Q24Game11KindCounterFi
/* 80218B7C 00215ABC  88 03 00 00 */	lbz r0, 0(r3)
/* 80218B80 00215AC0  7C 1A 00 00 */	cmpw r26, r0
/* 80218B84 00215AC4  41 80 FF 58 */	blt .L_80218ADC
/* 80218B88 00215AC8  7E E3 BB 78 */	mr r3, r23
/* 80218B8C 00215ACC  7F 04 C3 78 */	mr r4, r24
/* 80218B90 00215AD0  4B FC C8 71 */	bl __cl__Q24Game11KindCounterFi
/* 80218B94 00215AD4  88 03 00 00 */	lbz r0, 0(r3)
/* 80218B98 00215AD8  3B 18 00 01 */	addi r24, r24, 1
/* 80218B9C 00215ADC  7C 19 00 50 */	subf r0, r25, r0
/* 80218BA0 00215AE0  98 03 00 00 */	stb r0, 0(r3)
.L_80218BA4:
/* 80218BA4 00215AE4  A0 17 00 00 */	lhz r0, 0(r23)
/* 80218BA8 00215AE8  7C 18 00 00 */	cmpw r24, r0
/* 80218BAC 00215AEC  41 80 FF 24 */	blt .L_80218AD0
.L_80218BB0:
/* 80218BB0 00215AF0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80218BB4 00215AF4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80218BB8 00215AF8  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80218BBC 00215AFC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80218BC0 00215B00  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80218BC4 00215B04  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80218BC8 00215B08  BA E1 00 3C */	lmw r23, 0x3c(r1)
/* 80218BCC 00215B0C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80218BD0 00215B10  7C 08 03 A6 */	mtlr r0
/* 80218BD4 00215B14  38 21 00 90 */	addi r1, r1, 0x90
/* 80218BD8 00215B18  4E 80 00 20 */	blr 
.else
.global onMovieCommand__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni
onMovieCommand__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectioni:
/* 802185EC 0021552C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 802185F0 00215530  7C 08 02 A6 */	mflr r0
/* 802185F4 00215534  90 01 00 94 */	stw r0, 0x94(r1)
/* 802185F8 00215538  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 802185FC 0021553C  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 80218600 00215540  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 80218604 00215544  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 80218608 00215548  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8021860C 0021554C  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 80218610 00215550  BE E1 00 3C */	stmw r23, 0x3c(r1)
/* 80218614 00215554  2C 05 00 00 */	cmpwi r5, 0
/* 80218618 00215558  7C 7F 1B 78 */	mr r31, r3
/* 8021861C 0021555C  7C 9D 23 78 */	mr r29, r4
/* 80218620 00215560  41 82 00 08 */	beq .L_80218628
/* 80218624 00215564  48 00 05 8C */	b .L_80218BB0
.L_80218628:
/* 80218628 00215568  88 1F 00 10 */	lbz r0, 0x10(r31)
/* 8021862C 0021556C  28 00 00 00 */	cmplwi r0, 0
/* 80218630 00215570  40 82 05 80 */	bne .L_80218BB0
/* 80218634 00215574  3C 80 80 48 */	lis r4, lbl_8048253C@ha
/* 80218638 00215578  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8021863C 0021557C  38 84 25 3C */	addi r4, r4, lbl_8048253C@l
/* 80218640 00215580  48 21 5F 79 */	bl isPlaying__Q24Game11MoviePlayerFPc
/* 80218644 00215584  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218648 00215588  41 82 00 14 */	beq .L_8021865C
/* 8021864C 0021558C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218650 00215590  80 03 00 50 */	lwz r0, 0x50(r3)
/* 80218654 00215594  2C 00 00 00 */	cmpwi r0, 0
/* 80218658 00215598  41 82 05 58 */	beq .L_80218BB0
.L_8021865C:
/* 8021865C 0021559C  3C 80 80 48 */	lis r4, lbl_8048253C@ha
/* 80218660 002155A0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80218664 002155A4  38 84 25 3C */	addi r4, r4, lbl_8048253C@l
/* 80218668 002155A8  48 21 5F 51 */	bl isPlaying__Q24Game11MoviePlayerFPc
/* 8021866C 002155AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218670 002155B0  41 82 02 20 */	beq .L_80218890
/* 80218674 002155B4  38 00 00 00 */	li r0, 0
/* 80218678 002155B8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 8021867C 002155BC  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80218680 002155C0  90 01 00 18 */	stw r0, 0x18(r1)
/* 80218684 002155C4  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80218688 002155C8  28 00 00 00 */	cmplwi r0, 0
/* 8021868C 002155CC  90 81 00 0C */	stw r4, 0xc(r1)
/* 80218690 002155D0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80218694 002155D4  90 61 00 14 */	stw r3, 0x14(r1)
/* 80218698 002155D8  40 82 00 1C */	bne .L_802186B4
/* 8021869C 002155DC  81 83 00 00 */	lwz r12, 0(r3)
/* 802186A0 002155E0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802186A4 002155E4  7D 89 03 A6 */	mtctr r12
/* 802186A8 002155E8  4E 80 04 21 */	bctrl 
/* 802186AC 002155EC  90 61 00 10 */	stw r3, 0x10(r1)
/* 802186B0 002155F0  48 00 01 C0 */	b .L_80218870
.L_802186B4:
/* 802186B4 002155F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802186B8 002155F8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802186BC 002155FC  7D 89 03 A6 */	mtctr r12
/* 802186C0 00215600  4E 80 04 21 */	bctrl 
/* 802186C4 00215604  90 61 00 10 */	stw r3, 0x10(r1)
/* 802186C8 00215608  48 00 00 58 */	b .L_80218720
.L_802186CC:
/* 802186CC 0021560C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802186D0 00215610  80 81 00 10 */	lwz r4, 0x10(r1)
/* 802186D4 00215614  81 83 00 00 */	lwz r12, 0(r3)
/* 802186D8 00215618  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802186DC 0021561C  7D 89 03 A6 */	mtctr r12
/* 802186E0 00215620  4E 80 04 21 */	bctrl 
/* 802186E4 00215624  7C 64 1B 78 */	mr r4, r3
/* 802186E8 00215628  80 61 00 18 */	lwz r3, 0x18(r1)
/* 802186EC 0021562C  81 83 00 00 */	lwz r12, 0(r3)
/* 802186F0 00215630  81 8C 00 08 */	lwz r12, 8(r12)
/* 802186F4 00215634  7D 89 03 A6 */	mtctr r12
/* 802186F8 00215638  4E 80 04 21 */	bctrl 
/* 802186FC 0021563C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218700 00215640  40 82 01 70 */	bne .L_80218870
/* 80218704 00215644  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218708 00215648  80 81 00 10 */	lwz r4, 0x10(r1)
/* 8021870C 0021564C  81 83 00 00 */	lwz r12, 0(r3)
/* 80218710 00215650  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218714 00215654  7D 89 03 A6 */	mtctr r12
/* 80218718 00215658  4E 80 04 21 */	bctrl 
/* 8021871C 0021565C  90 61 00 10 */	stw r3, 0x10(r1)
.L_80218720:
/* 80218720 00215660  81 81 00 0C */	lwz r12, 0xc(r1)
/* 80218724 00215664  38 61 00 0C */	addi r3, r1, 0xc
/* 80218728 00215668  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8021872C 0021566C  7D 89 03 A6 */	mtctr r12
/* 80218730 00215670  4E 80 04 21 */	bctrl 
/* 80218734 00215674  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218738 00215678  41 82 FF 94 */	beq .L_802186CC
/* 8021873C 0021567C  48 00 01 34 */	b .L_80218870
.L_80218740:
/* 80218740 00215680  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218744 00215684  81 83 00 00 */	lwz r12, 0(r3)
/* 80218748 00215688  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8021874C 0021568C  7D 89 03 A6 */	mtctr r12
/* 80218750 00215690  4E 80 04 21 */	bctrl 
/* 80218754 00215694  81 83 00 00 */	lwz r12, 0(r3)
/* 80218758 00215698  7C 7C 1B 78 */	mr r28, r3
/* 8021875C 0021569C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80218760 002156A0  7D 89 03 A6 */	mtctr r12
/* 80218764 002156A4  4E 80 04 21 */	bctrl 
/* 80218768 002156A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021876C 002156AC  41 82 00 48 */	beq .L_802187B4
/* 80218770 002156B0  80 7C 02 94 */	lwz r3, 0x294(r28)
/* 80218774 002156B4  38 80 00 01 */	li r4, 1
/* 80218778 002156B8  38 A0 00 00 */	li r5, 0
/* 8021877C 002156BC  4B F7 E8 19 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80218780 002156C0  7F 83 E3 78 */	mr r3, r28
/* 80218784 002156C4  38 80 00 00 */	li r4, 0
/* 80218788 002156C8  4B F2 32 C9 */	bl movie_begin__Q24Game8CreatureFb
/* 8021878C 002156CC  38 00 00 03 */	li r0, 3
/* 80218790 002156D0  7F 84 E3 78 */	mr r4, r28
/* 80218794 002156D4  B0 01 00 08 */	sth r0, 8(r1)
/* 80218798 002156D8  38 C1 00 08 */	addi r6, r1, 8
/* 8021879C 002156DC  38 A0 00 15 */	li r5, 0x15
/* 802187A0 002156E0  80 7C 02 8C */	lwz r3, 0x28c(r28)
/* 802187A4 002156E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802187A8 002156E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802187AC 002156EC  7D 89 03 A6 */	mtctr r12
/* 802187B0 002156F0  4E 80 04 21 */	bctrl 
.L_802187B4:
/* 802187B4 002156F4  80 01 00 18 */	lwz r0, 0x18(r1)
/* 802187B8 002156F8  28 00 00 00 */	cmplwi r0, 0
/* 802187BC 002156FC  40 82 00 24 */	bne .L_802187E0
/* 802187C0 00215700  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802187C4 00215704  80 81 00 10 */	lwz r4, 0x10(r1)
/* 802187C8 00215708  81 83 00 00 */	lwz r12, 0(r3)
/* 802187CC 0021570C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802187D0 00215710  7D 89 03 A6 */	mtctr r12
/* 802187D4 00215714  4E 80 04 21 */	bctrl 
/* 802187D8 00215718  90 61 00 10 */	stw r3, 0x10(r1)
/* 802187DC 0021571C  48 00 00 94 */	b .L_80218870
.L_802187E0:
/* 802187E0 00215720  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802187E4 00215724  80 81 00 10 */	lwz r4, 0x10(r1)
/* 802187E8 00215728  81 83 00 00 */	lwz r12, 0(r3)
/* 802187EC 0021572C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802187F0 00215730  7D 89 03 A6 */	mtctr r12
/* 802187F4 00215734  4E 80 04 21 */	bctrl 
/* 802187F8 00215738  90 61 00 10 */	stw r3, 0x10(r1)
/* 802187FC 0021573C  48 00 00 58 */	b .L_80218854
.L_80218800:
/* 80218800 00215740  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218804 00215744  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80218808 00215748  81 83 00 00 */	lwz r12, 0(r3)
/* 8021880C 0021574C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218810 00215750  7D 89 03 A6 */	mtctr r12
/* 80218814 00215754  4E 80 04 21 */	bctrl 
/* 80218818 00215758  7C 64 1B 78 */	mr r4, r3
/* 8021881C 0021575C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80218820 00215760  81 83 00 00 */	lwz r12, 0(r3)
/* 80218824 00215764  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218828 00215768  7D 89 03 A6 */	mtctr r12
/* 8021882C 0021576C  4E 80 04 21 */	bctrl 
/* 80218830 00215770  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218834 00215774  40 82 00 3C */	bne .L_80218870
/* 80218838 00215778  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8021883C 0021577C  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80218840 00215780  81 83 00 00 */	lwz r12, 0(r3)
/* 80218844 00215784  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218848 00215788  7D 89 03 A6 */	mtctr r12
/* 8021884C 0021578C  4E 80 04 21 */	bctrl 
/* 80218850 00215790  90 61 00 10 */	stw r3, 0x10(r1)
.L_80218854:
/* 80218854 00215794  81 81 00 0C */	lwz r12, 0xc(r1)
/* 80218858 00215798  38 61 00 0C */	addi r3, r1, 0xc
/* 8021885C 0021579C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218860 002157A0  7D 89 03 A6 */	mtctr r12
/* 80218864 002157A4  4E 80 04 21 */	bctrl 
/* 80218868 002157A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021886C 002157AC  41 82 FF 94 */	beq .L_80218800
.L_80218870:
/* 80218870 002157B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80218874 002157B4  81 83 00 00 */	lwz r12, 0(r3)
/* 80218878 002157B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8021887C 002157BC  7D 89 03 A6 */	mtctr r12
/* 80218880 002157C0  4E 80 04 21 */	bctrl 
/* 80218884 002157C4  80 81 00 10 */	lwz r4, 0x10(r1)
/* 80218888 002157C8  7C 04 18 40 */	cmplw r4, r3
/* 8021888C 002157CC  40 82 FE B4 */	bne .L_80218740
.L_80218890:
/* 80218890 002157D0  7F A3 EB 78 */	mr r3, r29
/* 80218894 002157D4  4B F3 D7 59 */	bl clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
/* 80218898 002157D8  38 00 00 01 */	li r0, 1
/* 8021889C 002157DC  3B C0 00 00 */	li r30, 0
/* 802188A0 002157E0  98 1F 00 10 */	stb r0, 0x10(r31)
/* 802188A4 002157E4  3B 60 00 00 */	li r27, 0
/* 802188A8 002157E8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 802188AC 002157EC  83 E3 00 B8 */	lwz r31, 0xb8(r3)
/* 802188B0 002157F0  3B 9F 00 04 */	addi r28, r31, 4
/* 802188B4 002157F4  48 00 00 34 */	b .L_802188E8
.L_802188B8:
/* 802188B8 002157F8  7F 83 E3 78 */	mr r3, r28
/* 802188BC 002157FC  7F 64 DB 78 */	mr r4, r27
/* 802188C0 00215800  4B FC CB 41 */	bl __cl__Q24Game11KindCounterFi
/* 802188C4 00215804  88 03 00 00 */	lbz r0, 0(r3)
/* 802188C8 00215808  28 00 00 00 */	cmplwi r0, 0
/* 802188CC 0021580C  41 82 00 18 */	beq .L_802188E4
/* 802188D0 00215810  7F 83 E3 78 */	mr r3, r28
/* 802188D4 00215814  7F 64 DB 78 */	mr r4, r27
/* 802188D8 00215818  4B FC CB 29 */	bl __cl__Q24Game11KindCounterFi
/* 802188DC 0021581C  88 03 00 00 */	lbz r0, 0(r3)
/* 802188E0 00215820  7F DE 02 14 */	add r30, r30, r0
.L_802188E4:
/* 802188E4 00215824  3B 7B 00 01 */	addi r27, r27, 1
.L_802188E8:
/* 802188E8 00215828  A0 1C 00 00 */	lhz r0, 0(r28)
/* 802188EC 0021582C  7C 1B 00 00 */	cmpw r27, r0
/* 802188F0 00215830  41 80 FF C8 */	blt .L_802188B8
/* 802188F4 00215834  3B 7F 00 0C */	addi r27, r31, 0xc
/* 802188F8 00215838  3B 80 00 00 */	li r28, 0
/* 802188FC 0021583C  48 00 00 34 */	b .L_80218930
.L_80218900:
/* 80218900 00215840  7F 63 DB 78 */	mr r3, r27
/* 80218904 00215844  7F 84 E3 78 */	mr r4, r28
/* 80218908 00215848  4B FC CA F9 */	bl __cl__Q24Game11KindCounterFi
/* 8021890C 0021584C  88 03 00 00 */	lbz r0, 0(r3)
/* 80218910 00215850  28 00 00 00 */	cmplwi r0, 0
/* 80218914 00215854  41 82 00 18 */	beq .L_8021892C
/* 80218918 00215858  7F 63 DB 78 */	mr r3, r27
/* 8021891C 0021585C  7F 84 E3 78 */	mr r4, r28
/* 80218920 00215860  4B FC CA E1 */	bl __cl__Q24Game11KindCounterFi
/* 80218924 00215864  88 03 00 00 */	lbz r0, 0(r3)
/* 80218928 00215868  7F DE 02 14 */	add r30, r30, r0
.L_8021892C:
/* 8021892C 0021586C  3B 9C 00 01 */	addi r28, r28, 1
.L_80218930:
/* 80218930 00215870  A0 1B 00 00 */	lhz r0, 0(r27)
/* 80218934 00215874  7C 1C 00 00 */	cmpw r28, r0
/* 80218938 00215878  41 80 FF C8 */	blt .L_80218900
/* 8021893C 0021587C  4B EB 0C 65 */	bl rand
/* 80218940 00215880  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80218944 00215884  3C 00 43 30 */	lis r0, 0x4330
/* 80218948 00215888  90 61 00 24 */	stw r3, 0x24(r1)
/* 8021894C 0021588C  C8 62 BC C8 */	lfd f3, lbl_8051A028@sda21(r2)
/* 80218950 00215890  90 01 00 20 */	stw r0, 0x20(r1)
/* 80218954 00215894  C0 42 BC C0 */	lfs f2, lbl_8051A020@sda21(r2)
/* 80218958 00215898  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8021895C 0021589C  C0 22 BC A8 */	lfs f1, lbl_8051A008@sda21(r2)
/* 80218960 002158A0  EC 60 18 28 */	fsubs f3, f0, f3
/* 80218964 002158A4  C0 02 BC A0 */	lfs f0, lbl_8051A000@sda21(r2)
/* 80218968 002158A8  EC 43 10 24 */	fdivs f2, f3, f2
/* 8021896C 002158AC  EC 41 00 BA */	fmadds f2, f1, f2, f0
/* 80218970 002158B0  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 80218974 002158B4  40 80 00 0C */	bge .L_80218980
/* 80218978 002158B8  FC 40 08 90 */	fmr f2, f1
/* 8021897C 002158BC  48 00 00 10 */	b .L_8021898C
.L_80218980:
/* 80218980 002158C0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80218984 002158C4  40 81 00 08 */	ble .L_8021898C
/* 80218988 002158C8  FC 40 00 90 */	fmr f2, f0
.L_8021898C:
/* 8021898C 002158CC  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80218990 002158D0  3F 80 43 30 */	lis r28, 0x4330
/* 80218994 002158D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218998 002158D8  38 00 00 01 */	li r0, 1
/* 8021899C 002158DC  CB C2 BC C8 */	lfd f30, lbl_8051A028@sda21(r2)
/* 802189A0 002158E0  93 81 00 20 */	stw r28, 0x20(r1)
/* 802189A4 002158E4  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 802189A8 002158E8  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 802189AC 002158EC  98 1D 02 74 */	stb r0, 0x274(r29)
/* 802189B0 002158F0  EC 21 F0 28 */	fsubs f1, f1, f30
/* 802189B4 002158F4  EF E1 00 B2 */	fmuls f31, f1, f2
/* 802189B8 002158F8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 802189BC 002158FC  40 81 01 F4 */	ble .L_80218BB0
/* 802189C0 00215900  83 6D 95 20 */	lwz r27, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 802189C4 00215904  3B 5F 00 04 */	addi r26, r31, 4
/* 802189C8 00215908  C3 A2 BC C0 */	lfs f29, lbl_8051A020@sda21(r2)
/* 802189CC 0021590C  3B 20 00 00 */	li r25, 0
/* 802189D0 00215910  48 00 00 D8 */	b .L_80218AA8
.L_802189D4:
/* 802189D4 00215914  3B 00 00 00 */	li r24, 0
/* 802189D8 00215918  3A E0 00 00 */	li r23, 0
/* 802189DC 0021591C  48 00 00 98 */	b .L_80218A74
.L_802189E0:
/* 802189E0 00215920  7F 63 DB 78 */	mr r3, r27
/* 802189E4 00215924  7F 24 CB 78 */	mr r4, r25
/* 802189E8 00215928  4B F5 33 A1 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 802189EC 0021592C  4B EB 0B B5 */	bl rand
/* 802189F0 00215930  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802189F4 00215934  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 802189F8 00215938  90 61 00 24 */	stw r3, 0x24(r1)
/* 802189FC 0021593C  93 81 00 20 */	stw r28, 0x20(r1)
/* 80218A00 00215940  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80218A04 00215944  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80218A08 00215948  EC 20 F0 28 */	fsubs f1, f0, f30
/* 80218A0C 0021594C  93 81 00 28 */	stw r28, 0x28(r1)
/* 80218A10 00215950  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80218A14 00215954  EC 21 E8 24 */	fdivs f1, f1, f29
/* 80218A18 00215958  EC 00 F0 28 */	fsubs f0, f0, f30
/* 80218A1C 0021595C  EC 1F 00 24 */	fdivs f0, f31, f0
/* 80218A20 00215960  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80218A24 00215964  4C 40 13 82 */	cror 2, 0, 2
/* 80218A28 00215968  40 82 00 44 */	bne .L_80218A6C
/* 80218A2C 0021596C  7F 63 DB 78 */	mr r3, r27
/* 80218A30 00215970  7F 24 CB 78 */	mr r4, r25
/* 80218A34 00215974  4B F5 33 55 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80218A38 00215978  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218A3C 0021597C  7F 64 DB 78 */	mr r4, r27
/* 80218A40 00215980  7F 25 CB 78 */	mr r5, r25
/* 80218A44 00215984  4B FC EB 81 */	bl losePellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80218A48 00215988  7F 24 CB 78 */	mr r4, r25
/* 80218A4C 0021598C  38 7D 02 64 */	addi r3, r29, 0x264
/* 80218A50 00215990  4B FC C9 B1 */	bl __cl__Q24Game11KindCounterFi
/* 80218A54 00215994  88 83 00 00 */	lbz r4, 0(r3)
/* 80218A58 00215998  3B 18 00 01 */	addi r24, r24, 1
/* 80218A5C 0021599C  C0 02 BC A0 */	lfs f0, lbl_8051A000@sda21(r2)
/* 80218A60 002159A0  38 04 00 01 */	addi r0, r4, 1
/* 80218A64 002159A4  EF FF 00 28 */	fsubs f31, f31, f0
/* 80218A68 002159A8  98 03 00 00 */	stb r0, 0(r3)
.L_80218A6C:
/* 80218A6C 002159AC  3B DE FF FF */	addi r30, r30, -1
/* 80218A70 002159B0  3A F7 00 01 */	addi r23, r23, 1
.L_80218A74:
/* 80218A74 002159B4  7F 43 D3 78 */	mr r3, r26
/* 80218A78 002159B8  7F 24 CB 78 */	mr r4, r25
/* 80218A7C 002159BC  4B FC C9 85 */	bl __cl__Q24Game11KindCounterFi
/* 80218A80 002159C0  88 03 00 00 */	lbz r0, 0(r3)
/* 80218A84 002159C4  7C 17 00 00 */	cmpw r23, r0
/* 80218A88 002159C8  41 80 FF 58 */	blt .L_802189E0
/* 80218A8C 002159CC  7F 43 D3 78 */	mr r3, r26
/* 80218A90 002159D0  7F 24 CB 78 */	mr r4, r25
/* 80218A94 002159D4  4B FC C9 6D */	bl __cl__Q24Game11KindCounterFi
/* 80218A98 002159D8  88 03 00 00 */	lbz r0, 0(r3)
/* 80218A9C 002159DC  3B 39 00 01 */	addi r25, r25, 1
/* 80218AA0 002159E0  7C 18 00 50 */	subf r0, r24, r0
/* 80218AA4 002159E4  98 03 00 00 */	stb r0, 0(r3)
.L_80218AA8:
/* 80218AA8 002159E8  A0 1A 00 00 */	lhz r0, 0(r26)
/* 80218AAC 002159EC  7C 19 00 00 */	cmpw r25, r0
/* 80218AB0 002159F0  41 80 FF 24 */	blt .L_802189D4
/* 80218AB4 002159F4  83 8D 95 28 */	lwz r28, mgr__Q24Game10PelletItem@sda21(r13)
/* 80218AB8 002159F8  3A FF 00 0C */	addi r23, r31, 0xc
/* 80218ABC 002159FC  CB A2 BC C8 */	lfd f29, lbl_8051A028@sda21(r2)
/* 80218AC0 00215A00  3B 00 00 00 */	li r24, 0
/* 80218AC4 00215A04  C3 C2 BC C0 */	lfs f30, lbl_8051A020@sda21(r2)
/* 80218AC8 00215A08  3F E0 43 30 */	lis r31, 0x4330
/* 80218ACC 00215A0C  48 00 00 D8 */	b .L_80218BA4
.L_80218AD0:
/* 80218AD0 00215A10  3B 20 00 00 */	li r25, 0
/* 80218AD4 00215A14  3B 40 00 00 */	li r26, 0
/* 80218AD8 00215A18  48 00 00 98 */	b .L_80218B70
.L_80218ADC:
/* 80218ADC 00215A1C  7F 83 E3 78 */	mr r3, r28
/* 80218AE0 00215A20  7F 04 C3 78 */	mr r4, r24
/* 80218AE4 00215A24  4B F5 32 A5 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80218AE8 00215A28  4B EB 0A B9 */	bl rand
/* 80218AEC 00215A2C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80218AF0 00215A30  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 80218AF4 00215A34  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80218AF8 00215A38  93 E1 00 28 */	stw r31, 0x28(r1)
/* 80218AFC 00215A3C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80218B00 00215A40  90 01 00 24 */	stw r0, 0x24(r1)
/* 80218B04 00215A44  EC 20 E8 28 */	fsubs f1, f0, f29
/* 80218B08 00215A48  93 E1 00 20 */	stw r31, 0x20(r1)
/* 80218B0C 00215A4C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80218B10 00215A50  EC 21 F0 24 */	fdivs f1, f1, f30
/* 80218B14 00215A54  EC 00 E8 28 */	fsubs f0, f0, f29
/* 80218B18 00215A58  EC 1F 00 24 */	fdivs f0, f31, f0
/* 80218B1C 00215A5C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80218B20 00215A60  4C 40 13 82 */	cror 2, 0, 2
/* 80218B24 00215A64  40 82 00 44 */	bne .L_80218B68
/* 80218B28 00215A68  7F 83 E3 78 */	mr r3, r28
/* 80218B2C 00215A6C  7F 04 C3 78 */	mr r4, r24
/* 80218B30 00215A70  4B F5 32 59 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80218B34 00215A74  7F 04 C3 78 */	mr r4, r24
/* 80218B38 00215A78  38 7D 02 6C */	addi r3, r29, 0x26c
/* 80218B3C 00215A7C  4B FC C8 C5 */	bl __cl__Q24Game11KindCounterFi
/* 80218B40 00215A80  88 C3 00 00 */	lbz r6, 0(r3)
/* 80218B44 00215A84  7F 84 E3 78 */	mr r4, r28
/* 80218B48 00215A88  7F 05 C3 78 */	mr r5, r24
/* 80218B4C 00215A8C  38 06 00 01 */	addi r0, r6, 1
/* 80218B50 00215A90  98 03 00 00 */	stb r0, 0(r3)
/* 80218B54 00215A94  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218B58 00215A98  4B FC EA 6D */	bl losePellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80218B5C 00215A9C  C0 02 BC A0 */	lfs f0, lbl_8051A000@sda21(r2)
/* 80218B60 00215AA0  3B 39 00 01 */	addi r25, r25, 1
/* 80218B64 00215AA4  EF FF 00 28 */	fsubs f31, f31, f0
.L_80218B68:
/* 80218B68 00215AA8  3B DE FF FF */	addi r30, r30, -1
/* 80218B6C 00215AAC  3B 5A 00 01 */	addi r26, r26, 1
.L_80218B70:
/* 80218B70 00215AB0  7E E3 BB 78 */	mr r3, r23
/* 80218B74 00215AB4  7F 04 C3 78 */	mr r4, r24
/* 80218B78 00215AB8  4B FC C8 89 */	bl __cl__Q24Game11KindCounterFi
/* 80218B7C 00215ABC  88 03 00 00 */	lbz r0, 0(r3)
/* 80218B80 00215AC0  7C 1A 00 00 */	cmpw r26, r0
/* 80218B84 00215AC4  41 80 FF 58 */	blt .L_80218ADC
/* 80218B88 00215AC8  7E E3 BB 78 */	mr r3, r23
/* 80218B8C 00215ACC  7F 04 C3 78 */	mr r4, r24
/* 80218B90 00215AD0  4B FC C8 71 */	bl __cl__Q24Game11KindCounterFi
/* 80218B94 00215AD4  88 03 00 00 */	lbz r0, 0(r3)
/* 80218B98 00215AD8  3B 18 00 01 */	addi r24, r24, 1
/* 80218B9C 00215ADC  7C 19 00 50 */	subf r0, r25, r0
/* 80218BA0 00215AE0  98 03 00 00 */	stb r0, 0(r3)
.L_80218BA4:
/* 80218BA4 00215AE4  A0 17 00 00 */	lhz r0, 0(r23)
/* 80218BA8 00215AE8  7C 18 00 00 */	cmpw r24, r0
/* 80218BAC 00215AEC  41 80 FF 24 */	blt .L_80218AD0
.L_80218BB0:
/* 80218BB0 00215AF0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80218BB4 00215AF4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80218BB8 00215AF8  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80218BBC 00215AFC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80218BC0 00215B00  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80218BC4 00215B04  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80218BC8 00215B08  BA E1 00 3C */	lmw r23, 0x3c(r1)
/* 80218BCC 00215B0C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80218BD0 00215B10  7C 08 03 A6 */	mtlr r0
/* 80218BD4 00215B14  38 21 00 90 */	addi r1, r1, 0x90
/* 80218BD8 00215B18  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onMovieStart__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 80218BDC 00215B1C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80218BE0 00215B20  7C 08 02 A6 */	mflr r0
/* 80218BE4 00215B24  3C 60 80 48 */	lis r3, lbl_80482430@ha
/* 80218BE8 00215B28  90 01 00 64 */	stw r0, 0x64(r1)
/* 80218BEC 00215B2C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 80218BF0 00215B30  7C BD 2B 78 */	mr r29, r5
/* 80218BF4 00215B34  3B E3 24 30 */	addi r31, r3, lbl_80482430@l
/* 80218BF8 00215B38  7C 9C 23 78 */	mr r28, r4
/* 80218BFC 00215B3C  7C FE 3B 78 */	mr r30, r7
/* 80218C00 00215B40  7F A3 EB 78 */	mr r3, r29
/* 80218C04 00215B44  38 9F 00 1C */	addi r4, r31, 0x1c
/* 80218C08 00215B48  48 21 8C C5 */	bl is__Q24Game11MovieConfigFPc
/* 80218C0C 00215B4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218C10 00215B50  41 82 00 0C */	beq .L_80218C1C
/* 80218C14 00215B54  7F 83 E3 78 */	mr r3, r28
/* 80218C18 00215B58  4B F3 89 1D */	bl createFallPikminSound__Q24Game15BaseGameSectionFv
.L_80218C1C:
/* 80218C1C 00215B5C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218C20 00215B60  48 1E 4B 55 */	bl startFadeBG_Floor__Q26Screen9Game2DMgrFv
/* 80218C24 00215B64  7F A3 EB 78 */	mr r3, r29
/* 80218C28 00215B68  38 9F 00 88 */	addi r4, r31, 0x88
/* 80218C2C 00215B6C  48 21 8C A1 */	bl is__Q24Game11MovieConfigFPc
/* 80218C30 00215B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218C34 00215B74  41 82 00 10 */	beq .L_80218C44
/* 80218C38 00215B78  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218C3C 00215B7C  38 80 00 04 */	li r4, 4
/* 80218C40 00215B80  48 1E 4D 0D */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_80218C44:
/* 80218C44 00215B84  7F A3 EB 78 */	mr r3, r29
/* 80218C48 00215B88  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 80218C4C 00215B8C  48 21 8C 81 */	bl is__Q24Game11MovieConfigFPc
/* 80218C50 00215B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218C54 00215B94  41 82 02 1C */	beq .L_80218E70
/* 80218C58 00215B98  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218C5C 00215B9C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80218C60 00215BA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218C64 00215BA4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80218C68 00215BA8  7D 89 03 A6 */	mtctr r12
/* 80218C6C 00215BAC  4E 80 04 21 */	bctrl 
/* 80218C70 00215BB0  38 00 00 00 */	li r0, 0
/* 80218C74 00215BB4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80218C78 00215BB8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80218C7C 00215BBC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80218C80 00215BC0  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80218C84 00215BC4  28 00 00 00 */	cmplwi r0, 0
/* 80218C88 00215BC8  90 81 00 38 */	stw r4, 0x38(r1)
/* 80218C8C 00215BCC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80218C90 00215BD0  90 61 00 40 */	stw r3, 0x40(r1)
/* 80218C94 00215BD4  40 82 00 1C */	bne .L_80218CB0
/* 80218C98 00215BD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80218C9C 00215BDC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80218CA0 00215BE0  7D 89 03 A6 */	mtctr r12
/* 80218CA4 00215BE4  4E 80 04 21 */	bctrl 
/* 80218CA8 00215BE8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218CAC 00215BEC  48 00 01 A4 */	b .L_80218E50
.L_80218CB0:
/* 80218CB0 00215BF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218CB4 00215BF4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80218CB8 00215BF8  7D 89 03 A6 */	mtctr r12
/* 80218CBC 00215BFC  4E 80 04 21 */	bctrl 
/* 80218CC0 00215C00  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218CC4 00215C04  48 00 00 58 */	b .L_80218D1C
.L_80218CC8:
/* 80218CC8 00215C08  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218CCC 00215C0C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218CD0 00215C10  81 83 00 00 */	lwz r12, 0(r3)
/* 80218CD4 00215C14  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218CD8 00215C18  7D 89 03 A6 */	mtctr r12
/* 80218CDC 00215C1C  4E 80 04 21 */	bctrl 
/* 80218CE0 00215C20  7C 64 1B 78 */	mr r4, r3
/* 80218CE4 00215C24  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80218CE8 00215C28  81 83 00 00 */	lwz r12, 0(r3)
/* 80218CEC 00215C2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218CF0 00215C30  7D 89 03 A6 */	mtctr r12
/* 80218CF4 00215C34  4E 80 04 21 */	bctrl 
/* 80218CF8 00215C38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218CFC 00215C3C  40 82 01 54 */	bne .L_80218E50
/* 80218D00 00215C40  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218D04 00215C44  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218D08 00215C48  81 83 00 00 */	lwz r12, 0(r3)
/* 80218D0C 00215C4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218D10 00215C50  7D 89 03 A6 */	mtctr r12
/* 80218D14 00215C54  4E 80 04 21 */	bctrl 
/* 80218D18 00215C58  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80218D1C:
/* 80218D1C 00215C5C  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80218D20 00215C60  38 61 00 38 */	addi r3, r1, 0x38
/* 80218D24 00215C64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218D28 00215C68  7D 89 03 A6 */	mtctr r12
/* 80218D2C 00215C6C  4E 80 04 21 */	bctrl 
/* 80218D30 00215C70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218D34 00215C74  41 82 FF 94 */	beq .L_80218CC8
/* 80218D38 00215C78  48 00 01 18 */	b .L_80218E50
.L_80218D3C:
/* 80218D3C 00215C7C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218D40 00215C80  81 83 00 00 */	lwz r12, 0(r3)
/* 80218D44 00215C84  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218D48 00215C88  7D 89 03 A6 */	mtctr r12
/* 80218D4C 00215C8C  4E 80 04 21 */	bctrl 
/* 80218D50 00215C90  81 83 00 00 */	lwz r12, 0(r3)
/* 80218D54 00215C94  7C 7B 1B 78 */	mr r27, r3
/* 80218D58 00215C98  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80218D5C 00215C9C  7D 89 03 A6 */	mtctr r12
/* 80218D60 00215CA0  4E 80 04 21 */	bctrl 
/* 80218D64 00215CA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218D68 00215CA8  41 82 00 2C */	beq .L_80218D94
/* 80218D6C 00215CAC  7F 63 DB 78 */	mr r3, r27
/* 80218D70 00215CB0  4B F8 68 05 */	bl isStickTo__Q24Game8CreatureFv
/* 80218D74 00215CB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218D78 00215CB8  40 82 00 1C */	bne .L_80218D94
/* 80218D7C 00215CBC  88 1B 02 B8 */	lbz r0, 0x2b8(r27)
/* 80218D80 00215CC0  2C 00 00 05 */	cmpwi r0, 5
/* 80218D84 00215CC4  40 82 00 10 */	bne .L_80218D94
/* 80218D88 00215CC8  7F 63 DB 78 */	mr r3, r27
/* 80218D8C 00215CCC  38 80 00 00 */	li r4, 0
/* 80218D90 00215CD0  4B F2 2C C1 */	bl movie_begin__Q24Game8CreatureFb
.L_80218D94:
/* 80218D94 00215CD4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80218D98 00215CD8  28 00 00 00 */	cmplwi r0, 0
/* 80218D9C 00215CDC  40 82 00 24 */	bne .L_80218DC0
/* 80218DA0 00215CE0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218DA4 00215CE4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218DA8 00215CE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80218DAC 00215CEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218DB0 00215CF0  7D 89 03 A6 */	mtctr r12
/* 80218DB4 00215CF4  4E 80 04 21 */	bctrl 
/* 80218DB8 00215CF8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218DBC 00215CFC  48 00 00 94 */	b .L_80218E50
.L_80218DC0:
/* 80218DC0 00215D00  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218DC4 00215D04  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218DC8 00215D08  81 83 00 00 */	lwz r12, 0(r3)
/* 80218DCC 00215D0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218DD0 00215D10  7D 89 03 A6 */	mtctr r12
/* 80218DD4 00215D14  4E 80 04 21 */	bctrl 
/* 80218DD8 00215D18  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218DDC 00215D1C  48 00 00 58 */	b .L_80218E34
.L_80218DE0:
/* 80218DE0 00215D20  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218DE4 00215D24  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218DE8 00215D28  81 83 00 00 */	lwz r12, 0(r3)
/* 80218DEC 00215D2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218DF0 00215D30  7D 89 03 A6 */	mtctr r12
/* 80218DF4 00215D34  4E 80 04 21 */	bctrl 
/* 80218DF8 00215D38  7C 64 1B 78 */	mr r4, r3
/* 80218DFC 00215D3C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80218E00 00215D40  81 83 00 00 */	lwz r12, 0(r3)
/* 80218E04 00215D44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218E08 00215D48  7D 89 03 A6 */	mtctr r12
/* 80218E0C 00215D4C  4E 80 04 21 */	bctrl 
/* 80218E10 00215D50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218E14 00215D54  40 82 00 3C */	bne .L_80218E50
/* 80218E18 00215D58  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218E1C 00215D5C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218E20 00215D60  81 83 00 00 */	lwz r12, 0(r3)
/* 80218E24 00215D64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218E28 00215D68  7D 89 03 A6 */	mtctr r12
/* 80218E2C 00215D6C  4E 80 04 21 */	bctrl 
/* 80218E30 00215D70  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80218E34:
/* 80218E34 00215D74  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80218E38 00215D78  38 61 00 38 */	addi r3, r1, 0x38
/* 80218E3C 00215D7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218E40 00215D80  7D 89 03 A6 */	mtctr r12
/* 80218E44 00215D84  4E 80 04 21 */	bctrl 
/* 80218E48 00215D88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218E4C 00215D8C  41 82 FF 94 */	beq .L_80218DE0
.L_80218E50:
/* 80218E50 00215D90  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218E54 00215D94  81 83 00 00 */	lwz r12, 0(r3)
/* 80218E58 00215D98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80218E5C 00215D9C  7D 89 03 A6 */	mtctr r12
/* 80218E60 00215DA0  4E 80 04 21 */	bctrl 
/* 80218E64 00215DA4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218E68 00215DA8  7C 04 18 40 */	cmplw r4, r3
/* 80218E6C 00215DAC  40 82 FE D0 */	bne .L_80218D3C
.L_80218E70:
/* 80218E70 00215DB0  7F A3 EB 78 */	mr r3, r29
/* 80218E74 00215DB4  38 9F 01 0C */	addi r4, r31, 0x10c
/* 80218E78 00215DB8  48 21 8A 55 */	bl is__Q24Game11MovieConfigFPc
/* 80218E7C 00215DBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218E80 00215DC0  41 82 00 54 */	beq .L_80218ED4
/* 80218E84 00215DC4  28 1E 00 00 */	cmplwi r30, 0
/* 80218E88 00215DC8  40 82 00 18 */	bne .L_80218EA0
/* 80218E8C 00215DCC  7F 83 E3 78 */	mr r3, r28
/* 80218E90 00215DD0  3B 60 00 01 */	li r27, 1
/* 80218E94 00215DD4  38 80 00 00 */	li r4, 0
/* 80218E98 00215DD8  4B F3 4A 81 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80218E9C 00215DDC  48 00 00 2C */	b .L_80218EC8
.L_80218EA0:
/* 80218EA0 00215DE0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218EA4 00215DE4  38 80 00 02 */	li r4, 2
/* 80218EA8 00215DE8  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80218EAC 00215DEC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80218EB0 00215DF0  41 82 00 08 */	beq .L_80218EB8
/* 80218EB4 00215DF4  38 80 00 03 */	li r4, 3
.L_80218EB8:
/* 80218EB8 00215DF8  7C 9B 23 78 */	mr r27, r4
/* 80218EBC 00215DFC  7F 83 E3 78 */	mr r3, r28
/* 80218EC0 00215E00  38 80 00 01 */	li r4, 1
/* 80218EC4 00215E04  4B F3 4A 55 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80218EC8:
/* 80218EC8 00215E08  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218ECC 00215E0C  7F 64 DB 78 */	mr r4, r27
/* 80218ED0 00215E10  48 1E 4A 7D */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_80218ED4:
/* 80218ED4 00215E14  7F A3 EB 78 */	mr r3, r29
/* 80218ED8 00215E18  38 9F 01 2C */	addi r4, r31, 0x12c
/* 80218EDC 00215E1C  48 21 89 F1 */	bl is__Q24Game11MovieConfigFPc
/* 80218EE0 00215E20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218EE4 00215E24  41 82 01 14 */	beq .L_80218FF8
/* 80218EE8 00215E28  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80218EEC 00215E2C  7F 83 E3 78 */	mr r3, r28
/* 80218EF0 00215E30  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80218EF4 00215E34  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80218EF8 00215E38  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80218EFC 00215E3C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80218F00 00215E40  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80218F04 00215E44  7D 89 03 A6 */	mtctr r12
/* 80218F08 00215E48  4E 80 04 21 */	bctrl 
/* 80218F0C 00215E4C  7C 64 1B 78 */	mr r4, r3
/* 80218F10 00215E50  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218F14 00215E54  38 84 00 01 */	addi r4, r4, 1
/* 80218F18 00215E58  4B FC E5 B5 */	bl setCurrentCaveFloor__Q24Game8PlayDataFi
/* 80218F1C 00215E5C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218F20 00215E60  4B F4 1D 01 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80218F24 00215E64  28 03 00 00 */	cmplwi r3, 0
/* 80218F28 00215E68  41 82 00 0C */	beq .L_80218F34
/* 80218F2C 00215E6C  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 80218F30 00215E70  48 00 00 08 */	b .L_80218F38
.L_80218F34:
/* 80218F34 00215E74  38 00 00 00 */	li r0, 0
.L_80218F38:
/* 80218F38 00215E78  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80218F3C 00215E7C  28 03 00 00 */	cmplwi r3, 0
/* 80218F40 00215E80  98 04 00 78 */	stb r0, 0x78(r4)
/* 80218F44 00215E84  40 82 00 10 */	bne .L_80218F54
/* 80218F48 00215E88  38 00 00 19 */	li r0, 0x19
/* 80218F4C 00215E8C  7C 09 03 A6 */	mtctr r0
.L_80218F50:
/* 80218F50 00215E90  42 00 00 00 */	bdnz .L_80218F50
.L_80218F54:
/* 80218F54 00215E94  3B 60 00 00 */	li r27, 0
.L_80218F58:
/* 80218F58 00215E98  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218F5C 00215E9C  7F 64 DB 78 */	mr r4, r27
/* 80218F60 00215EA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218F64 00215EA4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80218F68 00215EA8  7D 89 03 A6 */	mtctr r12
/* 80218F6C 00215EAC  4E 80 04 21 */	bctrl 
/* 80218F70 00215EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218F74 00215EB4  7C 7E 1B 78 */	mr r30, r3
/* 80218F78 00215EB8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80218F7C 00215EBC  7D 89 03 A6 */	mtctr r12
/* 80218F80 00215EC0  4E 80 04 21 */	bctrl 
/* 80218F84 00215EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218F88 00215EC8  41 82 00 1C */	beq .L_80218FA4
/* 80218F8C 00215ECC  7F C3 F3 78 */	mr r3, r30
/* 80218F90 00215ED0  4B F8 65 E5 */	bl isStickTo__Q24Game8CreatureFv
/* 80218F94 00215ED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218F98 00215ED8  41 82 00 0C */	beq .L_80218FA4
/* 80218F9C 00215EDC  7F C3 F3 78 */	mr r3, r30
/* 80218FA0 00215EE0  4B F8 64 85 */	bl endStick__Q24Game8CreatureFv
.L_80218FA4:
/* 80218FA4 00215EE4  3B 7B 00 01 */	addi r27, r27, 1
/* 80218FA8 00215EE8  2C 1B 00 02 */	cmpwi r27, 2
/* 80218FAC 00215EEC  41 80 FF AC */	blt .L_80218F58
/* 80218FB0 00215EF0  80 9C 01 88 */	lwz r4, 0x1ac(r28)
/* 80218FB4 00215EF4  38 61 00 14 */	addi r3, r1, 0x14
/* 80218FB8 00215EF8  81 84 00 00 */	lwz r12, 0(r4)
/* 80218FBC 00215EFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218FC0 00215F00  7D 89 03 A6 */	mtctr r12
/* 80218FC4 00215F04  4E 80 04 21 */	bctrl 
/* 80218FC8 00215F08  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80218FCC 00215F0C  7F 83 E3 78 */	mr r3, r28
/* 80218FD0 00215F10  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80218FD4 00215F14  38 81 00 2C */	addi r4, r1, 0x2c
/* 80218FD8 00215F18  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80218FDC 00215F1C  38 A0 00 01 */	li r5, 1
/* 80218FE0 00215F20  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80218FE4 00215F24  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80218FE8 00215F28  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80218FEC 00215F2C  4B F3 51 45 */	bl "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b"
/* 80218FF0 00215F30  7F 83 E3 78 */	mr r3, r28
/* 80218FF4 00215F34  4B F3 B5 79 */	bl saveCaveMore__Q24Game17SingleGameSectionFv
.L_80218FF8:
/* 80218FF8 00215F38  7F A3 EB 78 */	mr r3, r29
/* 80218FFC 00215F3C  38 9F 01 1C */	addi r4, r31, 0x11c
/* 80219000 00215F40  48 21 88 CD */	bl is__Q24Game11MovieConfigFPc
/* 80219004 00215F44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219008 00215F48  41 82 00 50 */	beq .L_80219058
/* 8021900C 00215F4C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80219010 00215F50  38 61 00 08 */	addi r3, r1, 8
/* 80219014 00215F54  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80219018 00215F58  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 8021901C 00215F5C  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80219020 00215F60  80 9C 01 8C */	lwz r4, 0x1b0(r28)
/* 80219024 00215F64  81 84 00 00 */	lwz r12, 0(r4)
/* 80219028 00215F68  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021902C 00215F6C  7D 89 03 A6 */	mtctr r12
/* 80219030 00215F70  4E 80 04 21 */	bctrl 
/* 80219034 00215F74  C0 41 00 08 */	lfs f2, 8(r1)
/* 80219038 00215F78  7F 83 E3 78 */	mr r3, r28
/* 8021903C 00215F7C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80219040 00215F80  38 81 00 20 */	addi r4, r1, 0x20
/* 80219044 00215F84  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80219048 00215F88  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8021904C 00215F8C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80219050 00215F90  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80219054 00215F94  4B F3 57 69 */	bl "prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3<f>"
.L_80219058:
/* 80219058 00215F98  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8021905C 00215F9C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80219060 00215FA0  7C 08 03 A6 */	mtlr r0
/* 80219064 00215FA4  38 21 00 60 */	addi r1, r1, 0x60
/* 80219068 00215FA8  4E 80 00 20 */	blr 
.else
.global onMovieStart__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 80218BDC 00215B1C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80218BE0 00215B20  7C 08 02 A6 */	mflr r0
/* 80218BE4 00215B24  3C 60 80 48 */	lis r3, lbl_80482430@ha
/* 80218BE8 00215B28  90 01 00 64 */	stw r0, 0x64(r1)
/* 80218BEC 00215B2C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 80218BF0 00215B30  7C BD 2B 78 */	mr r29, r5
/* 80218BF4 00215B34  3B E3 24 30 */	addi r31, r3, lbl_80482430@l
/* 80218BF8 00215B38  7C 9C 23 78 */	mr r28, r4
/* 80218BFC 00215B3C  7C FE 3B 78 */	mr r30, r7
/* 80218C00 00215B40  7F A3 EB 78 */	mr r3, r29
/* 80218C04 00215B44  38 9F 00 1C */	addi r4, r31, 0x1c
/* 80218C08 00215B48  48 21 8C C5 */	bl is__Q24Game11MovieConfigFPc
/* 80218C0C 00215B4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218C10 00215B50  41 82 00 0C */	beq .L_80218C1C
/* 80218C14 00215B54  7F 83 E3 78 */	mr r3, r28
/* 80218C18 00215B58  4B F3 89 1D */	bl createFallPikminSound__Q24Game15BaseGameSectionFv
.L_80218C1C:
/* 80218C1C 00215B5C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218C20 00215B60  48 1E 4B 55 */	bl startFadeBG_Floor__Q26Screen9Game2DMgrFv
/* 80218C24 00215B64  7F A3 EB 78 */	mr r3, r29
/* 80218C28 00215B68  38 9F 00 88 */	addi r4, r31, 0x88
/* 80218C2C 00215B6C  48 21 8C A1 */	bl is__Q24Game11MovieConfigFPc
/* 80218C30 00215B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218C34 00215B74  41 82 00 10 */	beq .L_80218C44
/* 80218C38 00215B78  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218C3C 00215B7C  38 80 00 04 */	li r4, 4
/* 80218C40 00215B80  48 1E 4D 0D */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_80218C44:
/* 80218C44 00215B84  7F A3 EB 78 */	mr r3, r29
/* 80218C48 00215B88  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 80218C4C 00215B8C  48 21 8C 81 */	bl is__Q24Game11MovieConfigFPc
/* 80218C50 00215B90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218C54 00215B94  41 82 02 1C */	beq .L_80218E70
/* 80218C58 00215B98  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218C5C 00215B9C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80218C60 00215BA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218C64 00215BA4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80218C68 00215BA8  7D 89 03 A6 */	mtctr r12
/* 80218C6C 00215BAC  4E 80 04 21 */	bctrl 
/* 80218C70 00215BB0  38 00 00 00 */	li r0, 0
/* 80218C74 00215BB4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80218C78 00215BB8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80218C7C 00215BBC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80218C80 00215BC0  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80218C84 00215BC4  28 00 00 00 */	cmplwi r0, 0
/* 80218C88 00215BC8  90 81 00 38 */	stw r4, 0x38(r1)
/* 80218C8C 00215BCC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80218C90 00215BD0  90 61 00 40 */	stw r3, 0x40(r1)
/* 80218C94 00215BD4  40 82 00 1C */	bne .L_80218CB0
/* 80218C98 00215BD8  81 83 00 00 */	lwz r12, 0(r3)
/* 80218C9C 00215BDC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80218CA0 00215BE0  7D 89 03 A6 */	mtctr r12
/* 80218CA4 00215BE4  4E 80 04 21 */	bctrl 
/* 80218CA8 00215BE8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218CAC 00215BEC  48 00 01 A4 */	b .L_80218E50
.L_80218CB0:
/* 80218CB0 00215BF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218CB4 00215BF4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80218CB8 00215BF8  7D 89 03 A6 */	mtctr r12
/* 80218CBC 00215BFC  4E 80 04 21 */	bctrl 
/* 80218CC0 00215C00  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218CC4 00215C04  48 00 00 58 */	b .L_80218D1C
.L_80218CC8:
/* 80218CC8 00215C08  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218CCC 00215C0C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218CD0 00215C10  81 83 00 00 */	lwz r12, 0(r3)
/* 80218CD4 00215C14  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218CD8 00215C18  7D 89 03 A6 */	mtctr r12
/* 80218CDC 00215C1C  4E 80 04 21 */	bctrl 
/* 80218CE0 00215C20  7C 64 1B 78 */	mr r4, r3
/* 80218CE4 00215C24  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80218CE8 00215C28  81 83 00 00 */	lwz r12, 0(r3)
/* 80218CEC 00215C2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218CF0 00215C30  7D 89 03 A6 */	mtctr r12
/* 80218CF4 00215C34  4E 80 04 21 */	bctrl 
/* 80218CF8 00215C38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218CFC 00215C3C  40 82 01 54 */	bne .L_80218E50
/* 80218D00 00215C40  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218D04 00215C44  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218D08 00215C48  81 83 00 00 */	lwz r12, 0(r3)
/* 80218D0C 00215C4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218D10 00215C50  7D 89 03 A6 */	mtctr r12
/* 80218D14 00215C54  4E 80 04 21 */	bctrl 
/* 80218D18 00215C58  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80218D1C:
/* 80218D1C 00215C5C  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80218D20 00215C60  38 61 00 38 */	addi r3, r1, 0x38
/* 80218D24 00215C64  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218D28 00215C68  7D 89 03 A6 */	mtctr r12
/* 80218D2C 00215C6C  4E 80 04 21 */	bctrl 
/* 80218D30 00215C70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218D34 00215C74  41 82 FF 94 */	beq .L_80218CC8
/* 80218D38 00215C78  48 00 01 18 */	b .L_80218E50
.L_80218D3C:
/* 80218D3C 00215C7C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218D40 00215C80  81 83 00 00 */	lwz r12, 0(r3)
/* 80218D44 00215C84  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218D48 00215C88  7D 89 03 A6 */	mtctr r12
/* 80218D4C 00215C8C  4E 80 04 21 */	bctrl 
/* 80218D50 00215C90  81 83 00 00 */	lwz r12, 0(r3)
/* 80218D54 00215C94  7C 7B 1B 78 */	mr r27, r3
/* 80218D58 00215C98  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80218D5C 00215C9C  7D 89 03 A6 */	mtctr r12
/* 80218D60 00215CA0  4E 80 04 21 */	bctrl 
/* 80218D64 00215CA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218D68 00215CA8  41 82 00 2C */	beq .L_80218D94
/* 80218D6C 00215CAC  7F 63 DB 78 */	mr r3, r27
/* 80218D70 00215CB0  4B F8 68 05 */	bl isStickTo__Q24Game8CreatureFv
/* 80218D74 00215CB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218D78 00215CB8  40 82 00 1C */	bne .L_80218D94
/* 80218D7C 00215CBC  88 1B 02 B8 */	lbz r0, 0x2b8(r27)
/* 80218D80 00215CC0  2C 00 00 05 */	cmpwi r0, 5
/* 80218D84 00215CC4  40 82 00 10 */	bne .L_80218D94
/* 80218D88 00215CC8  7F 63 DB 78 */	mr r3, r27
/* 80218D8C 00215CCC  38 80 00 00 */	li r4, 0
/* 80218D90 00215CD0  4B F2 2C C1 */	bl movie_begin__Q24Game8CreatureFb
.L_80218D94:
/* 80218D94 00215CD4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80218D98 00215CD8  28 00 00 00 */	cmplwi r0, 0
/* 80218D9C 00215CDC  40 82 00 24 */	bne .L_80218DC0
/* 80218DA0 00215CE0  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218DA4 00215CE4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218DA8 00215CE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80218DAC 00215CEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218DB0 00215CF0  7D 89 03 A6 */	mtctr r12
/* 80218DB4 00215CF4  4E 80 04 21 */	bctrl 
/* 80218DB8 00215CF8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218DBC 00215CFC  48 00 00 94 */	b .L_80218E50
.L_80218DC0:
/* 80218DC0 00215D00  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218DC4 00215D04  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218DC8 00215D08  81 83 00 00 */	lwz r12, 0(r3)
/* 80218DCC 00215D0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218DD0 00215D10  7D 89 03 A6 */	mtctr r12
/* 80218DD4 00215D14  4E 80 04 21 */	bctrl 
/* 80218DD8 00215D18  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80218DDC 00215D1C  48 00 00 58 */	b .L_80218E34
.L_80218DE0:
/* 80218DE0 00215D20  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218DE4 00215D24  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218DE8 00215D28  81 83 00 00 */	lwz r12, 0(r3)
/* 80218DEC 00215D2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80218DF0 00215D30  7D 89 03 A6 */	mtctr r12
/* 80218DF4 00215D34  4E 80 04 21 */	bctrl 
/* 80218DF8 00215D38  7C 64 1B 78 */	mr r4, r3
/* 80218DFC 00215D3C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80218E00 00215D40  81 83 00 00 */	lwz r12, 0(r3)
/* 80218E04 00215D44  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218E08 00215D48  7D 89 03 A6 */	mtctr r12
/* 80218E0C 00215D4C  4E 80 04 21 */	bctrl 
/* 80218E10 00215D50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218E14 00215D54  40 82 00 3C */	bne .L_80218E50
/* 80218E18 00215D58  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218E1C 00215D5C  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218E20 00215D60  81 83 00 00 */	lwz r12, 0(r3)
/* 80218E24 00215D64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80218E28 00215D68  7D 89 03 A6 */	mtctr r12
/* 80218E2C 00215D6C  4E 80 04 21 */	bctrl 
/* 80218E30 00215D70  90 61 00 3C */	stw r3, 0x3c(r1)
.L_80218E34:
/* 80218E34 00215D74  81 81 00 38 */	lwz r12, 0x38(r1)
/* 80218E38 00215D78  38 61 00 38 */	addi r3, r1, 0x38
/* 80218E3C 00215D7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80218E40 00215D80  7D 89 03 A6 */	mtctr r12
/* 80218E44 00215D84  4E 80 04 21 */	bctrl 
/* 80218E48 00215D88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218E4C 00215D8C  41 82 FF 94 */	beq .L_80218DE0
.L_80218E50:
/* 80218E50 00215D90  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80218E54 00215D94  81 83 00 00 */	lwz r12, 0(r3)
/* 80218E58 00215D98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80218E5C 00215D9C  7D 89 03 A6 */	mtctr r12
/* 80218E60 00215DA0  4E 80 04 21 */	bctrl 
/* 80218E64 00215DA4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 80218E68 00215DA8  7C 04 18 40 */	cmplw r4, r3
/* 80218E6C 00215DAC  40 82 FE D0 */	bne .L_80218D3C
.L_80218E70:
/* 80218E70 00215DB0  7F A3 EB 78 */	mr r3, r29
/* 80218E74 00215DB4  38 9F 01 0C */	addi r4, r31, 0x10c
/* 80218E78 00215DB8  48 21 8A 55 */	bl is__Q24Game11MovieConfigFPc
/* 80218E7C 00215DBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218E80 00215DC0  41 82 00 54 */	beq .L_80218ED4
/* 80218E84 00215DC4  28 1E 00 00 */	cmplwi r30, 0
/* 80218E88 00215DC8  40 82 00 18 */	bne .L_80218EA0
/* 80218E8C 00215DCC  7F 83 E3 78 */	mr r3, r28
/* 80218E90 00215DD0  3B 60 00 01 */	li r27, 1
/* 80218E94 00215DD4  38 80 00 00 */	li r4, 0
/* 80218E98 00215DD8  4B F3 4A 81 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80218E9C 00215DDC  48 00 00 2C */	b .L_80218EC8
.L_80218EA0:
/* 80218EA0 00215DE0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218EA4 00215DE4  38 80 00 02 */	li r4, 2
/* 80218EA8 00215DE8  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 80218EAC 00215DEC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80218EB0 00215DF0  41 82 00 08 */	beq .L_80218EB8
/* 80218EB4 00215DF4  38 80 00 03 */	li r4, 3
.L_80218EB8:
/* 80218EB8 00215DF8  7C 9B 23 78 */	mr r27, r4
/* 80218EBC 00215DFC  7F 83 E3 78 */	mr r3, r28
/* 80218EC0 00215E00  38 80 00 01 */	li r4, 1
/* 80218EC4 00215E04  4B F3 4A 55 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
.L_80218EC8:
/* 80218EC8 00215E08  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80218ECC 00215E0C  7F 64 DB 78 */	mr r4, r27
/* 80218ED0 00215E10  48 1E 4A 7D */	bl open_GameOver__Q26Screen9Game2DMgrFQ36Screen9Game2DMgr13GameOverTitle
.L_80218ED4:
/* 80218ED4 00215E14  7F A3 EB 78 */	mr r3, r29
/* 80218ED8 00215E18  38 9F 01 2C */	addi r4, r31, 0x12c
/* 80218EDC 00215E1C  48 21 89 F1 */	bl is__Q24Game11MovieConfigFPc
/* 80218EE0 00215E20  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218EE4 00215E24  41 82 01 14 */	beq .L_80218FF8
/* 80218EE8 00215E28  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80218EEC 00215E2C  7F 83 E3 78 */	mr r3, r28
/* 80218EF0 00215E30  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80218EF4 00215E34  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80218EF8 00215E38  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80218EFC 00215E3C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80218F00 00215E40  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80218F04 00215E44  7D 89 03 A6 */	mtctr r12
/* 80218F08 00215E48  4E 80 04 21 */	bctrl 
/* 80218F0C 00215E4C  7C 64 1B 78 */	mr r4, r3
/* 80218F10 00215E50  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80218F14 00215E54  38 84 00 01 */	addi r4, r4, 1
/* 80218F18 00215E58  4B FC E5 B5 */	bl setCurrentCaveFloor__Q24Game8PlayDataFi
/* 80218F1C 00215E5C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218F20 00215E60  4B F4 1D 01 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80218F24 00215E64  28 03 00 00 */	cmplwi r3, 0
/* 80218F28 00215E68  41 82 00 0C */	beq .L_80218F34
/* 80218F2C 00215E6C  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 80218F30 00215E70  48 00 00 08 */	b .L_80218F38
.L_80218F34:
/* 80218F34 00215E74  38 00 00 00 */	li r0, 0
.L_80218F38:
/* 80218F38 00215E78  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80218F3C 00215E7C  28 03 00 00 */	cmplwi r3, 0
/* 80218F40 00215E80  98 04 00 78 */	stb r0, 0x78(r4)
/* 80218F44 00215E84  40 82 00 10 */	bne .L_80218F54
/* 80218F48 00215E88  38 00 00 19 */	li r0, 0x19
/* 80218F4C 00215E8C  7C 09 03 A6 */	mtctr r0
.L_80218F50:
/* 80218F50 00215E90  42 00 00 00 */	bdnz .L_80218F50
.L_80218F54:
/* 80218F54 00215E94  3B 60 00 00 */	li r27, 0
.L_80218F58:
/* 80218F58 00215E98  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80218F5C 00215E9C  7F 64 DB 78 */	mr r4, r27
/* 80218F60 00215EA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218F64 00215EA4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80218F68 00215EA8  7D 89 03 A6 */	mtctr r12
/* 80218F6C 00215EAC  4E 80 04 21 */	bctrl 
/* 80218F70 00215EB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80218F74 00215EB4  7C 7E 1B 78 */	mr r30, r3
/* 80218F78 00215EB8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80218F7C 00215EBC  7D 89 03 A6 */	mtctr r12
/* 80218F80 00215EC0  4E 80 04 21 */	bctrl 
/* 80218F84 00215EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218F88 00215EC8  41 82 00 1C */	beq .L_80218FA4
/* 80218F8C 00215ECC  7F C3 F3 78 */	mr r3, r30
/* 80218F90 00215ED0  4B F8 65 E5 */	bl isStickTo__Q24Game8CreatureFv
/* 80218F94 00215ED4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80218F98 00215ED8  41 82 00 0C */	beq .L_80218FA4
/* 80218F9C 00215EDC  7F C3 F3 78 */	mr r3, r30
/* 80218FA0 00215EE0  4B F8 64 85 */	bl endStick__Q24Game8CreatureFv
.L_80218FA4:
/* 80218FA4 00215EE4  3B 7B 00 01 */	addi r27, r27, 1
/* 80218FA8 00215EE8  2C 1B 00 02 */	cmpwi r27, 2
/* 80218FAC 00215EEC  41 80 FF AC */	blt .L_80218F58
/* 80218FB0 00215EF0  80 9C 01 88 */	lwz r4, 0x188(r28)
/* 80218FB4 00215EF4  38 61 00 14 */	addi r3, r1, 0x14
/* 80218FB8 00215EF8  81 84 00 00 */	lwz r12, 0(r4)
/* 80218FBC 00215EFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80218FC0 00215F00  7D 89 03 A6 */	mtctr r12
/* 80218FC4 00215F04  4E 80 04 21 */	bctrl 
/* 80218FC8 00215F08  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80218FCC 00215F0C  7F 83 E3 78 */	mr r3, r28
/* 80218FD0 00215F10  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80218FD4 00215F14  38 81 00 2C */	addi r4, r1, 0x2c
/* 80218FD8 00215F18  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80218FDC 00215F1C  38 A0 00 01 */	li r5, 1
/* 80218FE0 00215F20  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80218FE4 00215F24  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80218FE8 00215F28  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80218FEC 00215F2C  4B F3 51 45 */	bl "prepareHoleIn__Q24Game15BaseGameSectionFR10Vector3<f>b"
/* 80218FF0 00215F30  7F 83 E3 78 */	mr r3, r28
/* 80218FF4 00215F34  4B F3 B5 79 */	bl saveCaveMore__Q24Game17SingleGameSectionFv
.L_80218FF8:
/* 80218FF8 00215F38  7F A3 EB 78 */	mr r3, r29
/* 80218FFC 00215F3C  38 9F 01 1C */	addi r4, r31, 0x11c
/* 80219000 00215F40  48 21 88 CD */	bl is__Q24Game11MovieConfigFPc
/* 80219004 00215F44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219008 00215F48  41 82 00 50 */	beq .L_80219058
/* 8021900C 00215F4C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80219010 00215F50  38 61 00 08 */	addi r3, r1, 8
/* 80219014 00215F54  88 04 00 3C */	lbz r0, 0x3c(r4)
/* 80219018 00215F58  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 8021901C 00215F5C  98 04 00 3C */	stb r0, 0x3c(r4)
/* 80219020 00215F60  80 9C 01 8C */	lwz r4, 0x18c(r28)
/* 80219024 00215F64  81 84 00 00 */	lwz r12, 0(r4)
/* 80219028 00215F68  81 8C 00 08 */	lwz r12, 8(r12)
/* 8021902C 00215F6C  7D 89 03 A6 */	mtctr r12
/* 80219030 00215F70  4E 80 04 21 */	bctrl 
/* 80219034 00215F74  C0 41 00 08 */	lfs f2, 8(r1)
/* 80219038 00215F78  7F 83 E3 78 */	mr r3, r28
/* 8021903C 00215F7C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80219040 00215F80  38 81 00 20 */	addi r4, r1, 0x20
/* 80219044 00215F84  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80219048 00215F88  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8021904C 00215F8C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 80219050 00215F90  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80219054 00215F94  4B F3 57 69 */	bl "prepareFountainOn__Q24Game15BaseGameSectionFR10Vector3<f>"
.L_80219058:
/* 80219058 00215F98  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 8021905C 00215F9C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80219060 00215FA0  7C 08 03 A6 */	mtlr r0
/* 80219064 00215FA4  38 21 00 60 */	addi r1, r1, 0x60
/* 80219068 00215FA8  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onMovieDone__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 8021906C 00215FAC  94 21 FC D0 */	stwu r1, -0x330(r1)
/* 80219070 00215FB0  7C 08 02 A6 */	mflr r0
/* 80219074 00215FB4  90 01 03 34 */	stw r0, 0x334(r1)
/* 80219078 00215FB8  DB E1 03 20 */	stfd f31, 0x320(r1)
/* 8021907C 00215FBC  F3 E1 03 28 */	psq_st f31, 808(r1), 0, qr0
/* 80219080 00215FC0  BF 01 03 00 */	stmw r24, 0x300(r1)
/* 80219084 00215FC4  3C C0 80 48 */	lis r6, lbl_80482430@ha
/* 80219088 00215FC8  7C B9 2B 78 */	mr r25, r5
/* 8021908C 00215FCC  3B E6 24 30 */	addi r31, r6, lbl_80482430@l
/* 80219090 00215FD0  7C 7D 1B 78 */	mr r29, r3
/* 80219094 00215FD4  7C 9E 23 78 */	mr r30, r4
/* 80219098 00215FD8  7C F8 3B 78 */	mr r24, r7
/* 8021909C 00215FDC  7F 23 CB 78 */	mr r3, r25
/* 802190A0 00215FE0  38 9F 01 1C */	addi r4, r31, 0x11c
/* 802190A4 00215FE4  48 21 88 29 */	bl is__Q24Game11MovieConfigFPc
/* 802190A8 00215FE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802190AC 00215FEC  41 82 00 4C */	beq .L_802190F8
/* 802190B0 00215FF0  48 24 E3 89 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 802190B4 00215FF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802190B8 00215FF8  48 21 3E D1 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 802190BC 00215FFC  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802190C0 00216000  38 80 00 01 */	li r4, 1
/* 802190C4 00216004  38 A0 00 01 */	li r5, 1
/* 802190C8 00216008  4B F4 79 B1 */	bl caveSaveAllPikmins__Q24Game7PikiMgrFbb
/* 802190CC 0021600C  38 00 00 01 */	li r0, 1
/* 802190D0 00216010  7F A3 EB 78 */	mr r3, r29
/* 802190D4 00216014  B0 01 00 14 */	sth r0, 0x14(r1)
/* 802190D8 00216018  7F C4 F3 78 */	mr r4, r30
/* 802190DC 0021601C  38 C1 00 14 */	addi r6, r1, 0x14
/* 802190E0 00216020  38 A0 00 08 */	li r5, 8
/* 802190E4 00216024  81 9D 00 00 */	lwz r12, 0(r29)
/* 802190E8 00216028  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802190EC 0021602C  7D 89 03 A6 */	mtctr r12
/* 802190F0 00216030  4E 80 04 21 */	bctrl 
/* 802190F4 00216034  48 00 0E 10 */	b .L_80219F04
.L_802190F8:
/* 802190F8 00216038  7F 23 CB 78 */	mr r3, r25
/* 802190FC 0021603C  38 9F 01 2C */	addi r4, r31, 0x12c
/* 80219100 00216040  48 21 87 CD */	bl is__Q24Game11MovieConfigFPc
/* 80219104 00216044  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219108 00216048  41 82 00 54 */	beq .L_8021915C
/* 8021910C 0021604C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80219110 00216050  48 21 3E 79 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 80219114 00216054  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80219118 00216058  38 80 00 00 */	li r4, 0
/* 8021911C 0021605C  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80219120 00216060  3C 60 80 4C */	lis r3, __vt__Q32og6Screen14DispMemberSave@ha
/* 80219124 00216064  90 01 00 68 */	stw r0, 0x68(r1)
/* 80219128 00216068  38 63 04 E4 */	addi r3, r3, __vt__Q32og6Screen14DispMemberSave@l
/* 8021912C 0021606C  38 00 00 01 */	li r0, 1
/* 80219130 00216070  98 81 00 70 */	stb r4, 0x70(r1)
/* 80219134 00216074  90 81 00 6C */	stw r4, 0x6c(r1)
/* 80219138 00216078  90 61 00 68 */	stw r3, 0x68(r1)
/* 8021913C 0021607C  98 01 00 70 */	stb r0, 0x70(r1)
/* 80219140 00216080  48 24 E2 F9 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 80219144 00216084  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219148 00216088  38 81 00 68 */	addi r4, r1, 0x68
/* 8021914C 0021608C  48 1E 55 59 */	bl open_Save__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberSave
/* 80219150 00216090  38 00 00 01 */	li r0, 1
/* 80219154 00216094  98 1D 00 18 */	stb r0, 0x18(r29)
/* 80219158 00216098  48 00 0D AC */	b .L_80219F04
.L_8021915C:
/* 8021915C 0021609C  7F 23 CB 78 */	mr r3, r25
/* 80219160 002160A0  38 9F 01 38 */	addi r4, r31, 0x138
/* 80219164 002160A4  48 21 87 69 */	bl is__Q24Game11MovieConfigFPc
/* 80219168 002160A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021916C 002160AC  41 82 02 50 */	beq .L_802193BC
/* 80219170 002160B0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80219174 002160B4  39 00 00 00 */	li r8, 0
/* 80219178 002160B8  39 23 11 48 */	addi r9, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8021917C 002160BC  38 80 00 01 */	li r4, 1
/* 80219180 002160C0  C0 22 BC A0 */	lfs f1, lbl_8051A000@sda21(r2)
/* 80219184 002160C4  3C E0 80 4B */	lis r7, __vt__Q32og6Screen14DispMemberCave@ha
/* 80219188 002160C8  38 00 00 0A */	li r0, 0xa
/* 8021918C 002160CC  38 60 00 02 */	li r3, 2
/* 80219190 002160D0  99 01 01 28 */	stb r8, 0x128(r1)
/* 80219194 002160D4  38 C0 04 D2 */	li r6, 0x4d2
/* 80219198 002160D8  C0 42 BC A8 */	lfs f2, lbl_8051A008@sda21(r2)
/* 8021919C 002160DC  38 A0 00 32 */	li r5, 0x32
/* 802191A0 002160E0  C0 02 BC D0 */	lfs f0, lbl_8051A030@sda21(r2)
/* 802191A4 002160E4  38 E7 10 94 */	addi r7, r7, __vt__Q32og6Screen14DispMemberCave@l
/* 802191A8 002160E8  91 21 01 0C */	stw r9, 0x10c(r1)
/* 802191AC 002160EC  81 2D 93 08 */	lwz r9, mapMgr__4Game@sda21(r13)
/* 802191B0 002160F0  91 01 01 10 */	stw r8, 0x110(r1)
/* 802191B4 002160F4  90 E1 01 0C */	stw r7, 0x10c(r1)
/* 802191B8 002160F8  D0 41 01 14 */	stfs f2, 0x114(r1)
/* 802191BC 002160FC  91 01 01 18 */	stw r8, 0x118(r1)
/* 802191C0 00216100  91 01 01 20 */	stw r8, 0x120(r1)
/* 802191C4 00216104  90 C1 01 1C */	stw r6, 0x11c(r1)
/* 802191C8 00216108  90 A1 01 24 */	stw r5, 0x124(r1)
/* 802191CC 0021610C  91 01 01 2C */	stw r8, 0x12c(r1)
/* 802191D0 00216110  D0 21 01 30 */	stfs f1, 0x130(r1)
/* 802191D4 00216114  90 81 01 34 */	stw r4, 0x134(r1)
/* 802191D8 00216118  90 61 01 38 */	stw r3, 0x138(r1)
/* 802191DC 0021611C  90 01 01 3C */	stw r0, 0x13c(r1)
/* 802191E0 00216120  90 01 01 40 */	stw r0, 0x140(r1)
/* 802191E4 00216124  98 81 01 44 */	stb r4, 0x144(r1)
/* 802191E8 00216128  D0 21 01 48 */	stfs f1, 0x148(r1)
/* 802191EC 0021612C  90 81 01 4C */	stw r4, 0x14c(r1)
/* 802191F0 00216130  90 61 01 50 */	stw r3, 0x150(r1)
/* 802191F4 00216134  90 01 01 54 */	stw r0, 0x154(r1)
/* 802191F8 00216138  90 01 01 58 */	stw r0, 0x158(r1)
/* 802191FC 0021613C  98 81 01 5C */	stb r4, 0x15c(r1)
/* 80219200 00216140  98 81 01 28 */	stb r4, 0x128(r1)
/* 80219204 00216144  99 01 01 69 */	stb r8, 0x169(r1)
/* 80219208 00216148  99 01 01 6A */	stb r8, 0x16a(r1)
/* 8021920C 0021614C  D0 01 01 60 */	stfs f0, 0x160(r1)
/* 80219210 00216150  99 01 01 68 */	stb r8, 0x168(r1)
/* 80219214 00216154  90 81 01 64 */	stw r4, 0x164(r1)
/* 80219218 00216158  99 01 01 6B */	stb r8, 0x16b(r1)
/* 8021921C 0021615C  99 01 01 6E */	stb r8, 0x16e(r1)
/* 80219220 00216160  99 01 01 6F */	stb r8, 0x16f(r1)
/* 80219224 00216164  99 01 01 6C */	stb r8, 0x16c(r1)
/* 80219228 00216168  99 01 01 6D */	stb r8, 0x16d(r1)
/* 8021922C 0021616C  83 29 00 30 */	lwz r25, 0x30(r9)
/* 80219230 00216170  80 69 00 28 */	lwz r3, 0x28(r9)
/* 80219234 00216174  4B FB E2 BD */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 80219238 00216178  38 03 FF FF */	addi r0, r3, -1
/* 8021923C 0021617C  7C 19 00 50 */	subf r0, r25, r0
/* 80219240 00216180  7C 03 00 34 */	cntlzw r3, r0
/* 80219244 00216184  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 80219248 00216188  54 63 D9 7E */	srwi r3, r3, 5
/* 8021924C 0021618C  98 61 01 6A */	stb r3, 0x16a(r1)
/* 80219250 00216190  41 82 00 18 */	beq .L_80219268
/* 80219254 00216194  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219258 00216198  38 81 01 0C */	addi r4, r1, 0x10c
/* 8021925C 0021619C  38 A0 00 02 */	li r5, 2
/* 80219260 002161A0  48 1E 2F C5 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 80219264 002161A4  48 00 0C A0 */	b .L_80219F04
.L_80219268:
/* 80219268 002161A8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021926C 002161AC  38 81 01 0C */	addi r4, r1, 0x10c
/* 80219270 002161B0  38 A0 00 00 */	li r5, 0
/* 80219274 002161B4  48 1E 2F B1 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 80219278 002161B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021927C 002161BC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80219280 002161C0  60 00 00 02 */	ori r0, r0, 2
/* 80219284 002161C4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219288 002161C8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8021928C 002161CC  28 00 00 00 */	cmplwi r0, 0
/* 80219290 002161D0  40 82 00 18 */	bne .L_802192A8
/* 80219294 002161D4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80219298 002161D8  38 BF 00 38 */	addi r5, r31, 0x38
/* 8021929C 002161DC  38 80 01 D3 */	li r4, 0x1d3
/* 802192A0 002161E0  4C C6 31 82 */	crclr 6
/* 802192A4 002161E4  4B E1 13 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802192A8:
/* 802192A8 002161E8  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 802192AC 002161EC  80 1A 00 04 */	lwz r0, 4(r26)
/* 802192B0 002161F0  28 00 00 00 */	cmplwi r0, 0
/* 802192B4 002161F4  40 82 00 18 */	bne .L_802192CC
/* 802192B8 002161F8  38 7F 00 44 */	addi r3, r31, 0x44
/* 802192BC 002161FC  38 BF 00 38 */	addi r5, r31, 0x38
/* 802192C0 00216200  38 80 00 C7 */	li r4, 0xc7
/* 802192C4 00216204  4C C6 31 82 */	crclr 6
/* 802192C8 00216208  4B E1 13 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802192CC:
/* 802192CC 0021620C  80 7A 00 04 */	lwz r3, 4(r26)
/* 802192D0 00216210  80 63 00 04 */	lwz r3, 4(r3)
/* 802192D4 00216214  81 83 00 00 */	lwz r12, 0(r3)
/* 802192D8 00216218  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802192DC 0021621C  7D 89 03 A6 */	mtctr r12
/* 802192E0 00216220  4E 80 04 21 */	bctrl 
/* 802192E4 00216224  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 802192E8 00216228  28 00 00 00 */	cmplwi r0, 0
/* 802192EC 0021622C  41 82 0C 18 */	beq .L_80219F04
/* 802192F0 00216230  48 00 53 41 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 802192F4 00216234  2C 03 00 00 */	cmpwi r3, 0
/* 802192F8 00216238  40 82 0C 0C */	bne .L_80219F04
/* 802192FC 0021623C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80219300 00216240  28 00 00 00 */	cmplwi r0, 0
/* 80219304 00216244  40 82 00 18 */	bne .L_8021931C
/* 80219308 00216248  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8021930C 0021624C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219310 00216250  38 80 01 D3 */	li r4, 0x1d3
/* 80219314 00216254  4C C6 31 82 */	crclr 6
/* 80219318 00216258  4B E1 13 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021931C:
/* 8021931C 0021625C  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 80219320 00216260  28 1A 00 00 */	cmplwi r26, 0
/* 80219324 00216264  40 82 00 18 */	bne .L_8021933C
/* 80219328 00216268  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8021932C 0021626C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219330 00216270  38 80 01 DC */	li r4, 0x1dc
/* 80219334 00216274  4C C6 31 82 */	crclr 6
/* 80219338 00216278  4B E1 13 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021933C:
/* 8021933C 0021627C  80 1A 00 04 */	lwz r0, 4(r26)
/* 80219340 00216280  28 00 00 00 */	cmplwi r0, 0
/* 80219344 00216284  40 82 00 18 */	bne .L_8021935C
/* 80219348 00216288  38 7F 00 44 */	addi r3, r31, 0x44
/* 8021934C 0021628C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219350 00216290  38 80 00 CF */	li r4, 0xcf
/* 80219354 00216294  4C C6 31 82 */	crclr 6
/* 80219358 00216298  4B E1 12 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021935C:
/* 8021935C 0021629C  80 7A 00 04 */	lwz r3, 4(r26)
/* 80219360 002162A0  83 43 00 04 */	lwz r26, 4(r3)
/* 80219364 002162A4  28 1A 00 00 */	cmplwi r26, 0
/* 80219368 002162A8  40 82 00 18 */	bne .L_80219380
/* 8021936C 002162AC  38 7F 00 44 */	addi r3, r31, 0x44
/* 80219370 002162B0  38 BF 00 50 */	addi r5, r31, 0x50
/* 80219374 002162B4  38 80 00 D1 */	li r4, 0xd1
/* 80219378 002162B8  4C C6 31 82 */	crclr 6
/* 8021937C 002162BC  4B E1 12 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219380:
/* 80219380 002162C0  81 9A 00 00 */	lwz r12, 0(r26)
/* 80219384 002162C4  7F 43 D3 78 */	mr r3, r26
/* 80219388 002162C8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8021938C 002162CC  7D 89 03 A6 */	mtctr r12
/* 80219390 002162D0  4E 80 04 21 */	bctrl 
/* 80219394 002162D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219398 002162D8  40 82 00 18 */	bne .L_802193B0
/* 8021939C 002162DC  38 7F 00 74 */	addi r3, r31, 0x74
/* 802193A0 002162E0  38 BF 00 38 */	addi r5, r31, 0x38
/* 802193A4 002162E4  38 80 01 77 */	li r4, 0x177
/* 802193A8 002162E8  4C C6 31 82 */	crclr 6
/* 802193AC 002162EC  4B E1 12 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802193B0:
/* 802193B0 002162F0  7F 43 D3 78 */	mr r3, r26
/* 802193B4 002162F4  48 25 0D 41 */	bl stopPollutionSe__Q23PSM10Scene_CaveFv
/* 802193B8 002162F8  48 00 0B 4C */	b .L_80219F04
.L_802193BC:
/* 802193BC 002162FC  7F 23 CB 78 */	mr r3, r25
/* 802193C0 00216300  38 9F 00 1C */	addi r4, r31, 0x1c
/* 802193C4 00216304  48 21 85 09 */	bl is__Q24Game11MovieConfigFPc
/* 802193C8 00216308  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802193CC 0021630C  41 82 05 6C */	beq .L_80219938
/* 802193D0 00216310  38 00 00 00 */	li r0, 0
/* 802193D4 00216314  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802193D8 00216318  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802193DC 0021631C  90 01 00 64 */	stw r0, 0x64(r1)
/* 802193E0 00216320  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802193E4 00216324  28 00 00 00 */	cmplwi r0, 0
/* 802193E8 00216328  90 81 00 58 */	stw r4, 0x58(r1)
/* 802193EC 0021632C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802193F0 00216330  90 61 00 60 */	stw r3, 0x60(r1)
/* 802193F4 00216334  40 82 00 1C */	bne .L_80219410
/* 802193F8 00216338  81 83 00 00 */	lwz r12, 0(r3)
/* 802193FC 0021633C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219400 00216340  7D 89 03 A6 */	mtctr r12
/* 80219404 00216344  4E 80 04 21 */	bctrl 
/* 80219408 00216348  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8021940C 0021634C  48 00 00 8C */	b .L_80219498
.L_80219410:
/* 80219410 00216350  81 83 00 00 */	lwz r12, 0(r3)
/* 80219414 00216354  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219418 00216358  7D 89 03 A6 */	mtctr r12
/* 8021941C 0021635C  4E 80 04 21 */	bctrl 
/* 80219420 00216360  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80219424 00216364  48 00 00 58 */	b .L_8021947C
.L_80219428:
/* 80219428 00216368  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021942C 0021636C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219430 00216370  81 83 00 00 */	lwz r12, 0(r3)
/* 80219434 00216374  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219438 00216378  7D 89 03 A6 */	mtctr r12
/* 8021943C 0021637C  4E 80 04 21 */	bctrl 
/* 80219440 00216380  7C 64 1B 78 */	mr r4, r3
/* 80219444 00216384  80 61 00 64 */	lwz r3, 0x64(r1)
/* 80219448 00216388  81 83 00 00 */	lwz r12, 0(r3)
/* 8021944C 0021638C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219450 00216390  7D 89 03 A6 */	mtctr r12
/* 80219454 00216394  4E 80 04 21 */	bctrl 
/* 80219458 00216398  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021945C 0021639C  40 82 00 3C */	bne .L_80219498
/* 80219460 002163A0  80 61 00 60 */	lwz r3, 0x60(r1)
/* 80219464 002163A4  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219468 002163A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021946C 002163AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219470 002163B0  7D 89 03 A6 */	mtctr r12
/* 80219474 002163B4  4E 80 04 21 */	bctrl 
/* 80219478 002163B8  90 61 00 5C */	stw r3, 0x5c(r1)
.L_8021947C:
/* 8021947C 002163BC  81 81 00 58 */	lwz r12, 0x58(r1)
/* 80219480 002163C0  38 61 00 58 */	addi r3, r1, 0x58
/* 80219484 002163C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219488 002163C8  7D 89 03 A6 */	mtctr r12
/* 8021948C 002163CC  4E 80 04 21 */	bctrl 
/* 80219490 002163D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219494 002163D4  41 82 FF 94 */	beq .L_80219428
.L_80219498:
/* 80219498 002163D8  C3 E2 BC A8 */	lfs f31, lbl_8051A008@sda21(r2)
/* 8021949C 002163DC  48 00 01 4C */	b .L_802195E8
.L_802194A0:
/* 802194A0 002163E0  80 61 00 60 */	lwz r3, 0x60(r1)
/* 802194A4 002163E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802194A8 002163E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802194AC 002163EC  7D 89 03 A6 */	mtctr r12
/* 802194B0 002163F0  4E 80 04 21 */	bctrl 
/* 802194B4 002163F4  7C 7A 1B 78 */	mr r26, r3
/* 802194B8 002163F8  38 61 00 20 */	addi r3, r1, 0x20
/* 802194BC 002163FC  81 9A 00 00 */	lwz r12, 0(r26)
/* 802194C0 00216400  7F 44 D3 78 */	mr r4, r26
/* 802194C4 00216404  81 8C 00 08 */	lwz r12, 8(r12)
/* 802194C8 00216408  7D 89 03 A6 */	mtctr r12
/* 802194CC 0021640C  4E 80 04 21 */	bctrl 
/* 802194D0 00216410  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802194D4 00216414  38 81 00 4C */	addi r4, r1, 0x4c
/* 802194D8 00216418  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802194DC 0021641C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802194E0 00216420  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 802194E4 00216424  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802194E8 00216428  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 802194EC 0021642C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 802194F0 00216430  81 83 00 04 */	lwz r12, 4(r3)
/* 802194F4 00216434  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802194F8 00216438  7D 89 03 A6 */	mtctr r12
/* 802194FC 0021643C  4E 80 04 21 */	bctrl 
/* 80219500 00216440  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80219504 00216444  7F 43 D3 78 */	mr r3, r26
/* 80219508 00216448  38 81 00 4C */	addi r4, r1, 0x4c
/* 8021950C 0021644C  38 A0 00 00 */	li r5, 0
/* 80219510 00216450  4B F2 1C 99 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80219514 00216454  D3 FA 02 00 */	stfs f31, 0x200(r26)
/* 80219518 00216458  D3 FA 02 04 */	stfs f31, 0x204(r26)
/* 8021951C 0021645C  D3 FA 02 08 */	stfs f31, 0x208(r26)
/* 80219520 00216460  D3 FA 01 E4 */	stfs f31, 0x1e4(r26)
/* 80219524 00216464  D3 FA 01 E8 */	stfs f31, 0x1e8(r26)
/* 80219528 00216468  D3 FA 01 EC */	stfs f31, 0x1ec(r26)
/* 8021952C 0021646C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80219530 00216470  28 00 00 00 */	cmplwi r0, 0
/* 80219534 00216474  40 82 00 24 */	bne .L_80219558
/* 80219538 00216478  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021953C 0021647C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219540 00216480  81 83 00 00 */	lwz r12, 0(r3)
/* 80219544 00216484  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219548 00216488  7D 89 03 A6 */	mtctr r12
/* 8021954C 0021648C  4E 80 04 21 */	bctrl 
/* 80219550 00216490  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80219554 00216494  48 00 00 94 */	b .L_802195E8
.L_80219558:
/* 80219558 00216498  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021955C 0021649C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219560 002164A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219564 002164A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219568 002164A8  7D 89 03 A6 */	mtctr r12
/* 8021956C 002164AC  4E 80 04 21 */	bctrl 
/* 80219570 002164B0  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80219574 002164B4  48 00 00 58 */	b .L_802195CC
.L_80219578:
/* 80219578 002164B8  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021957C 002164BC  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219580 002164C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219584 002164C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219588 002164C8  7D 89 03 A6 */	mtctr r12
/* 8021958C 002164CC  4E 80 04 21 */	bctrl 
/* 80219590 002164D0  7C 64 1B 78 */	mr r4, r3
/* 80219594 002164D4  80 61 00 64 */	lwz r3, 0x64(r1)
/* 80219598 002164D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021959C 002164DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802195A0 002164E0  7D 89 03 A6 */	mtctr r12
/* 802195A4 002164E4  4E 80 04 21 */	bctrl 
/* 802195A8 002164E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802195AC 002164EC  40 82 00 3C */	bne .L_802195E8
/* 802195B0 002164F0  80 61 00 60 */	lwz r3, 0x60(r1)
/* 802195B4 002164F4  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 802195B8 002164F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802195BC 002164FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802195C0 00216500  7D 89 03 A6 */	mtctr r12
/* 802195C4 00216504  4E 80 04 21 */	bctrl 
/* 802195C8 00216508  90 61 00 5C */	stw r3, 0x5c(r1)
.L_802195CC:
/* 802195CC 0021650C  81 81 00 58 */	lwz r12, 0x58(r1)
/* 802195D0 00216510  38 61 00 58 */	addi r3, r1, 0x58
/* 802195D4 00216514  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802195D8 00216518  7D 89 03 A6 */	mtctr r12
/* 802195DC 0021651C  4E 80 04 21 */	bctrl 
/* 802195E0 00216520  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802195E4 00216524  41 82 FF 94 */	beq .L_80219578
.L_802195E8:
/* 802195E8 00216528  80 61 00 60 */	lwz r3, 0x60(r1)
/* 802195EC 0021652C  81 83 00 00 */	lwz r12, 0(r3)
/* 802195F0 00216530  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802195F4 00216534  7D 89 03 A6 */	mtctr r12
/* 802195F8 00216538  4E 80 04 21 */	bctrl 
/* 802195FC 0021653C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219600 00216540  7C 04 18 40 */	cmplw r4, r3
/* 80219604 00216544  40 82 FE 9C */	bne .L_802194A0
/* 80219608 00216548  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021960C 0021654C  38 80 00 05 */	li r4, 5
/* 80219610 00216550  4B FC DD D1 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80219614 00216554  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219618 00216558  40 82 00 CC */	bne .L_802196E4
/* 8021961C 0021655C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80219620 00216560  38 80 00 05 */	li r4, 5
/* 80219624 00216564  4B FC DD 81 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80219628 00216568  80 9E 00 C8 */	lwz r4, 0xe8(r30)
/* 8021962C 0021656C  38 00 00 00 */	li r0, 0
/* 80219630 00216570  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80219634 00216574  38 7F 01 38 */	addi r3, r31, 0x138
/* 80219638 00216578  90 61 00 74 */	stw r3, 0x74(r1)
/* 8021963C 0021657C  3B 21 00 8C */	addi r25, r1, 0x8c
/* 80219640 00216580  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219644 00216584  90 01 00 78 */	stw r0, 0x78(r1)
/* 80219648 00216588  90 81 00 80 */	stw r4, 0x80(r1)
/* 8021964C 0021658C  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 80219650 00216590  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 80219654 00216594  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80219658 00216598  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 8021965C 0021659C  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80219660 002165A0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80219664 002165A4  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80219668 002165A8  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8021966C 002165AC  90 01 00 88 */	stw r0, 0x88(r1)
/* 80219670 002165B0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80219674 002165B4  48 1E 3F ED */	bl close_Floor__Q26Screen9Game2DMgrFv
/* 80219678 002165B8  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8021967C 002165BC  80 63 00 AC */	lwz r3, 0xac(r3)
/* 80219680 002165C0  28 03 00 00 */	cmplwi r3, 0
/* 80219684 002165C4  41 82 00 18 */	beq .L_8021969C
/* 80219688 002165C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021968C 002165CC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80219690 002165D0  7D 89 03 A6 */	mtctr r12
/* 80219694 002165D4  4E 80 04 21 */	bctrl 
/* 80219698 002165D8  D0 21 00 98 */	stfs f1, 0x98(r1)
.L_8021969C:
/* 8021969C 002165DC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802196A0 002165E0  7F 24 CB 78 */	mr r4, r25
/* 802196A4 002165E4  38 A0 00 00 */	li r5, 0
/* 802196A8 002165E8  81 83 00 04 */	lwz r12, 4(r3)
/* 802196AC 002165EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802196B0 002165F0  7D 89 03 A6 */	mtctr r12
/* 802196B4 002165F4  4E 80 04 21 */	bctrl 
/* 802196B8 002165F8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802196BC 002165FC  7F 24 CB 78 */	mr r4, r25
/* 802196C0 00216600  81 83 00 04 */	lwz r12, 4(r3)
/* 802196C4 00216604  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802196C8 00216608  7D 89 03 A6 */	mtctr r12
/* 802196CC 0021660C  4E 80 04 21 */	bctrl 
/* 802196D0 00216610  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 802196D4 00216614  38 81 00 74 */	addi r4, r1, 0x74
/* 802196D8 00216618  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802196DC 0021661C  48 21 32 F5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802196E0 00216620  48 00 08 24 */	b .L_80219F04
.L_802196E4:
/* 802196E4 00216624  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802196E8 00216628  48 1E 3F 79 */	bl close_Floor__Q26Screen9Game2DMgrFv
/* 802196EC 0021662C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 802196F0 00216630  39 00 00 00 */	li r8, 0
/* 802196F4 00216634  39 23 11 48 */	addi r9, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 802196F8 00216638  38 80 00 01 */	li r4, 1
/* 802196FC 0021663C  C0 22 BC A0 */	lfs f1, lbl_8051A000@sda21(r2)
/* 80219700 00216640  3C E0 80 4B */	lis r7, __vt__Q32og6Screen14DispMemberCave@ha
/* 80219704 00216644  38 00 00 0A */	li r0, 0xa
/* 80219708 00216648  38 60 00 02 */	li r3, 2
/* 8021970C 0021664C  99 01 00 C4 */	stb r8, 0xc4(r1)
/* 80219710 00216650  38 C0 04 D2 */	li r6, 0x4d2
/* 80219714 00216654  C0 42 BC A8 */	lfs f2, lbl_8051A008@sda21(r2)
/* 80219718 00216658  38 A0 00 32 */	li r5, 0x32
/* 8021971C 0021665C  C0 02 BC D0 */	lfs f0, lbl_8051A030@sda21(r2)
/* 80219720 00216660  38 E7 10 94 */	addi r7, r7, __vt__Q32og6Screen14DispMemberCave@l
/* 80219724 00216664  91 21 00 A8 */	stw r9, 0xa8(r1)
/* 80219728 00216668  81 2D 93 08 */	lwz r9, mapMgr__4Game@sda21(r13)
/* 8021972C 0021666C  91 01 00 AC */	stw r8, 0xac(r1)
/* 80219730 00216670  90 E1 00 A8 */	stw r7, 0xa8(r1)
/* 80219734 00216674  D0 41 00 B0 */	stfs f2, 0xb0(r1)
/* 80219738 00216678  91 01 00 B4 */	stw r8, 0xb4(r1)
/* 8021973C 0021667C  91 01 00 BC */	stw r8, 0xbc(r1)
/* 80219740 00216680  90 C1 00 B8 */	stw r6, 0xb8(r1)
/* 80219744 00216684  90 A1 00 C0 */	stw r5, 0xc0(r1)
/* 80219748 00216688  91 01 00 C8 */	stw r8, 0xc8(r1)
/* 8021974C 0021668C  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 80219750 00216690  90 81 00 D0 */	stw r4, 0xd0(r1)
/* 80219754 00216694  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 80219758 00216698  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 8021975C 0021669C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80219760 002166A0  98 81 00 E0 */	stb r4, 0xe0(r1)
/* 80219764 002166A4  D0 21 00 E4 */	stfs f1, 0xe4(r1)
/* 80219768 002166A8  90 81 00 E8 */	stw r4, 0xe8(r1)
/* 8021976C 002166AC  90 61 00 EC */	stw r3, 0xec(r1)
/* 80219770 002166B0  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80219774 002166B4  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80219778 002166B8  98 81 00 F8 */	stb r4, 0xf8(r1)
/* 8021977C 002166BC  98 81 00 C4 */	stb r4, 0xc4(r1)
/* 80219780 002166C0  99 01 01 05 */	stb r8, 0x105(r1)
/* 80219784 002166C4  99 01 01 06 */	stb r8, 0x106(r1)
/* 80219788 002166C8  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 8021978C 002166CC  99 01 01 04 */	stb r8, 0x104(r1)
/* 80219790 002166D0  90 81 01 00 */	stw r4, 0x100(r1)
/* 80219794 002166D4  99 01 01 07 */	stb r8, 0x107(r1)
/* 80219798 002166D8  99 01 01 0A */	stb r8, 0x10a(r1)
/* 8021979C 002166DC  99 01 01 0B */	stb r8, 0x10b(r1)
/* 802197A0 002166E0  99 01 01 08 */	stb r8, 0x108(r1)
/* 802197A4 002166E4  99 01 01 09 */	stb r8, 0x109(r1)
/* 802197A8 002166E8  83 29 00 30 */	lwz r25, 0x30(r9)
/* 802197AC 002166EC  80 69 00 28 */	lwz r3, 0x28(r9)
/* 802197B0 002166F0  4B FB DD 41 */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 802197B4 002166F4  38 03 FF FF */	addi r0, r3, -1
/* 802197B8 002166F8  7C 19 00 50 */	subf r0, r25, r0
/* 802197BC 002166FC  7C 03 00 34 */	cntlzw r3, r0
/* 802197C0 00216700  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 802197C4 00216704  54 63 D9 7E */	srwi r3, r3, 5
/* 802197C8 00216708  98 61 01 06 */	stb r3, 0x106(r1)
/* 802197CC 0021670C  41 82 00 18 */	beq .L_802197E4
/* 802197D0 00216710  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802197D4 00216714  38 81 00 A8 */	addi r4, r1, 0xa8
/* 802197D8 00216718  38 A0 00 02 */	li r5, 2
/* 802197DC 0021671C  48 1E 2A 49 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 802197E0 00216720  48 00 07 24 */	b .L_80219F04
.L_802197E4:
/* 802197E4 00216724  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802197E8 00216728  38 81 00 A8 */	addi r4, r1, 0xa8
/* 802197EC 0021672C  38 A0 00 00 */	li r5, 0
/* 802197F0 00216730  48 1E 2A 35 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 802197F4 00216734  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802197F8 00216738  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802197FC 0021673C  60 00 00 02 */	ori r0, r0, 2
/* 80219800 00216740  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219804 00216744  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80219808 00216748  28 00 00 00 */	cmplwi r0, 0
/* 8021980C 0021674C  40 82 00 18 */	bne .L_80219824
/* 80219810 00216750  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80219814 00216754  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219818 00216758  38 80 01 D3 */	li r4, 0x1d3
/* 8021981C 0021675C  4C C6 31 82 */	crclr 6
/* 80219820 00216760  4B E1 0E 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219824:
/* 80219824 00216764  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 80219828 00216768  80 1A 00 04 */	lwz r0, 4(r26)
/* 8021982C 0021676C  28 00 00 00 */	cmplwi r0, 0
/* 80219830 00216770  40 82 00 18 */	bne .L_80219848
/* 80219834 00216774  38 7F 00 44 */	addi r3, r31, 0x44
/* 80219838 00216778  38 BF 00 38 */	addi r5, r31, 0x38
/* 8021983C 0021677C  38 80 00 C7 */	li r4, 0xc7
/* 80219840 00216780  4C C6 31 82 */	crclr 6
/* 80219844 00216784  4B E1 0D FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219848:
/* 80219848 00216788  80 7A 00 04 */	lwz r3, 4(r26)
/* 8021984C 0021678C  80 63 00 04 */	lwz r3, 4(r3)
/* 80219850 00216790  81 83 00 00 */	lwz r12, 0(r3)
/* 80219854 00216794  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219858 00216798  7D 89 03 A6 */	mtctr r12
/* 8021985C 0021679C  4E 80 04 21 */	bctrl 
/* 80219860 002167A0  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 80219864 002167A4  28 00 00 00 */	cmplwi r0, 0
/* 80219868 002167A8  41 82 06 9C */	beq .L_80219F04
/* 8021986C 002167AC  48 00 4D C5 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 80219870 002167B0  2C 03 00 00 */	cmpwi r3, 0
/* 80219874 002167B4  40 82 06 90 */	bne .L_80219F04
/* 80219878 002167B8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8021987C 002167BC  28 00 00 00 */	cmplwi r0, 0
/* 80219880 002167C0  40 82 00 18 */	bne .L_80219898
/* 80219884 002167C4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80219888 002167C8  38 BF 00 38 */	addi r5, r31, 0x38
/* 8021988C 002167CC  38 80 01 D3 */	li r4, 0x1d3
/* 80219890 002167D0  4C C6 31 82 */	crclr 6
/* 80219894 002167D4  4B E1 0D AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219898:
/* 80219898 002167D8  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 8021989C 002167DC  28 1A 00 00 */	cmplwi r26, 0
/* 802198A0 002167E0  40 82 00 18 */	bne .L_802198B8
/* 802198A4 002167E4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 802198A8 002167E8  38 BF 00 38 */	addi r5, r31, 0x38
/* 802198AC 002167EC  38 80 01 DC */	li r4, 0x1dc
/* 802198B0 002167F0  4C C6 31 82 */	crclr 6
/* 802198B4 002167F4  4B E1 0D 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802198B8:
/* 802198B8 002167F8  80 1A 00 04 */	lwz r0, 4(r26)
/* 802198BC 002167FC  28 00 00 00 */	cmplwi r0, 0
/* 802198C0 00216800  40 82 00 18 */	bne .L_802198D8
/* 802198C4 00216804  38 7F 00 44 */	addi r3, r31, 0x44
/* 802198C8 00216808  38 BF 00 38 */	addi r5, r31, 0x38
/* 802198CC 0021680C  38 80 00 CF */	li r4, 0xcf
/* 802198D0 00216810  4C C6 31 82 */	crclr 6
/* 802198D4 00216814  4B E1 0D 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802198D8:
/* 802198D8 00216818  80 7A 00 04 */	lwz r3, 4(r26)
/* 802198DC 0021681C  83 43 00 04 */	lwz r26, 4(r3)
/* 802198E0 00216820  28 1A 00 00 */	cmplwi r26, 0
/* 802198E4 00216824  40 82 00 18 */	bne .L_802198FC
/* 802198E8 00216828  38 7F 00 44 */	addi r3, r31, 0x44
/* 802198EC 0021682C  38 BF 00 50 */	addi r5, r31, 0x50
/* 802198F0 00216830  38 80 00 D1 */	li r4, 0xd1
/* 802198F4 00216834  4C C6 31 82 */	crclr 6
/* 802198F8 00216838  4B E1 0D 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802198FC:
/* 802198FC 0021683C  81 9A 00 00 */	lwz r12, 0(r26)
/* 80219900 00216840  7F 43 D3 78 */	mr r3, r26
/* 80219904 00216844  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80219908 00216848  7D 89 03 A6 */	mtctr r12
/* 8021990C 0021684C  4E 80 04 21 */	bctrl 
/* 80219910 00216850  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219914 00216854  40 82 00 18 */	bne .L_8021992C
/* 80219918 00216858  38 7F 00 74 */	addi r3, r31, 0x74
/* 8021991C 0021685C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219920 00216860  38 80 01 77 */	li r4, 0x177
/* 80219924 00216864  4C C6 31 82 */	crclr 6
/* 80219928 00216868  4B E1 0D 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021992C:
/* 8021992C 0021686C  7F 43 D3 78 */	mr r3, r26
/* 80219930 00216870  48 25 07 C5 */	bl stopPollutionSe__Q23PSM10Scene_CaveFv
/* 80219934 00216874  48 00 05 D0 */	b .L_80219F04
.L_80219938:
/* 80219938 00216878  7F 23 CB 78 */	mr r3, r25
/* 8021993C 0021687C  38 9F 01 0C */	addi r4, r31, 0x10c
/* 80219940 00216880  48 21 7F 8D */	bl is__Q24Game11MovieConfigFPc
/* 80219944 00216884  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219948 00216888  41 82 03 10 */	beq .L_80219C58
/* 8021994C 0021688C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219950 00216890  48 1E 42 55 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 80219954 00216894  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80219958 00216898  7F 04 C3 78 */	mr r4, r24
/* 8021995C 0021689C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219960 002168A0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80219964 002168A4  7D 89 03 A6 */	mtctr r12
/* 80219968 002168A8  4E 80 04 21 */	bctrl 
/* 8021996C 002168AC  4B F2 93 B9 */	bl setDeadLaydown__Q24Game4NaviFv
/* 80219970 002168B0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80219974 002168B4  80 03 00 50 */	lwz r0, 0x50(r3)
/* 80219978 002168B8  2C 00 00 02 */	cmpwi r0, 2
/* 8021997C 002168BC  41 82 00 34 */	beq .L_802199B0
/* 80219980 002168C0  2C 18 00 00 */	cmpwi r24, 0
/* 80219984 002168C4  40 82 00 18 */	bne .L_8021999C
/* 80219988 002168C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021998C 002168CC  38 80 00 01 */	li r4, 1
/* 80219990 002168D0  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80219994 002168D4  4B F3 3F 85 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80219998 002168D8  48 00 05 6C */	b .L_80219F04
.L_8021999C:
/* 8021999C 002168DC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802199A0 002168E0  38 80 00 00 */	li r4, 0
/* 802199A4 002168E4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802199A8 002168E8  4B F3 3F 71 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 802199AC 002168EC  48 00 05 58 */	b .L_80219F04
.L_802199B0:
/* 802199B0 002168F0  3B 80 00 00 */	li r28, 0
/* 802199B4 002168F4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802199B8 002168F8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802199BC 002168FC  93 81 00 48 */	stw r28, 0x48(r1)
/* 802199C0 00216900  38 04 BC 9C */	addi r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802199C4 00216904  28 1C 00 00 */	cmplwi r28, 0
/* 802199C8 00216908  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802199CC 0021690C  3B E0 00 00 */	li r31, 0
/* 802199D0 00216910  93 81 00 40 */	stw r28, 0x40(r1)
/* 802199D4 00216914  90 61 00 44 */	stw r3, 0x44(r1)
/* 802199D8 00216918  40 82 00 1C */	bne .L_802199F4
/* 802199DC 0021691C  81 83 00 00 */	lwz r12, 0(r3)
/* 802199E0 00216920  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802199E4 00216924  7D 89 03 A6 */	mtctr r12
/* 802199E8 00216928  4E 80 04 21 */	bctrl 
/* 802199EC 0021692C  90 61 00 40 */	stw r3, 0x40(r1)
/* 802199F0 00216930  48 00 01 98 */	b .L_80219B88
.L_802199F4:
/* 802199F4 00216934  81 83 00 00 */	lwz r12, 0(r3)
/* 802199F8 00216938  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802199FC 0021693C  7D 89 03 A6 */	mtctr r12
/* 80219A00 00216940  4E 80 04 21 */	bctrl 
/* 80219A04 00216944  90 61 00 40 */	stw r3, 0x40(r1)
/* 80219A08 00216948  48 00 00 58 */	b .L_80219A60
.L_80219A0C:
/* 80219A0C 0021694C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219A10 00216950  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219A14 00216954  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A18 00216958  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219A1C 0021695C  7D 89 03 A6 */	mtctr r12
/* 80219A20 00216960  4E 80 04 21 */	bctrl 
/* 80219A24 00216964  7C 64 1B 78 */	mr r4, r3
/* 80219A28 00216968  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80219A2C 0021696C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A30 00216970  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219A34 00216974  7D 89 03 A6 */	mtctr r12
/* 80219A38 00216978  4E 80 04 21 */	bctrl 
/* 80219A3C 0021697C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219A40 00216980  40 82 01 48 */	bne .L_80219B88
/* 80219A44 00216984  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219A48 00216988  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219A4C 0021698C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A50 00216990  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219A54 00216994  7D 89 03 A6 */	mtctr r12
/* 80219A58 00216998  4E 80 04 21 */	bctrl 
/* 80219A5C 0021699C  90 61 00 40 */	stw r3, 0x40(r1)
.L_80219A60:
/* 80219A60 002169A0  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 80219A64 002169A4  38 61 00 3C */	addi r3, r1, 0x3c
/* 80219A68 002169A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219A6C 002169AC  7D 89 03 A6 */	mtctr r12
/* 80219A70 002169B0  4E 80 04 21 */	bctrl 
/* 80219A74 002169B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219A78 002169B8  41 82 FF 94 */	beq .L_80219A0C
/* 80219A7C 002169BC  48 00 01 0C */	b .L_80219B88
.L_80219A80:
/* 80219A80 002169C0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219A84 002169C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A88 002169C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219A8C 002169CC  7D 89 03 A6 */	mtctr r12
/* 80219A90 002169D0  4E 80 04 21 */	bctrl 
/* 80219A94 002169D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A98 002169D8  7C 7A 1B 78 */	mr r26, r3
/* 80219A9C 002169DC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80219AA0 002169E0  7D 89 03 A6 */	mtctr r12
/* 80219AA4 002169E4  4E 80 04 21 */	bctrl 
/* 80219AA8 002169E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219AAC 002169EC  41 82 00 20 */	beq .L_80219ACC
/* 80219AB0 002169F0  88 1A 02 B8 */	lbz r0, 0x2b8(r26)
/* 80219AB4 002169F4  2C 00 00 05 */	cmpwi r0, 5
/* 80219AB8 002169F8  40 80 00 14 */	bge .L_80219ACC
/* 80219ABC 002169FC  38 61 01 70 */	addi r3, r1, 0x170
/* 80219AC0 00216A00  3B FF 00 01 */	addi r31, r31, 1
/* 80219AC4 00216A04  7F 43 E1 2E */	stwx r26, r3, r28
/* 80219AC8 00216A08  3B 9C 00 04 */	addi r28, r28, 4
.L_80219ACC:
/* 80219ACC 00216A0C  80 01 00 48 */	lwz r0, 0x48(r1)
/* 80219AD0 00216A10  28 00 00 00 */	cmplwi r0, 0
/* 80219AD4 00216A14  40 82 00 24 */	bne .L_80219AF8
/* 80219AD8 00216A18  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219ADC 00216A1C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219AE0 00216A20  81 83 00 00 */	lwz r12, 0(r3)
/* 80219AE4 00216A24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219AE8 00216A28  7D 89 03 A6 */	mtctr r12
/* 80219AEC 00216A2C  4E 80 04 21 */	bctrl 
/* 80219AF0 00216A30  90 61 00 40 */	stw r3, 0x40(r1)
/* 80219AF4 00216A34  48 00 00 94 */	b .L_80219B88
.L_80219AF8:
/* 80219AF8 00216A38  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219AFC 00216A3C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219B00 00216A40  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B04 00216A44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219B08 00216A48  7D 89 03 A6 */	mtctr r12
/* 80219B0C 00216A4C  4E 80 04 21 */	bctrl 
/* 80219B10 00216A50  90 61 00 40 */	stw r3, 0x40(r1)
/* 80219B14 00216A54  48 00 00 58 */	b .L_80219B6C
.L_80219B18:
/* 80219B18 00216A58  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219B1C 00216A5C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219B20 00216A60  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B24 00216A64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219B28 00216A68  7D 89 03 A6 */	mtctr r12
/* 80219B2C 00216A6C  4E 80 04 21 */	bctrl 
/* 80219B30 00216A70  7C 64 1B 78 */	mr r4, r3
/* 80219B34 00216A74  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80219B38 00216A78  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B3C 00216A7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219B40 00216A80  7D 89 03 A6 */	mtctr r12
/* 80219B44 00216A84  4E 80 04 21 */	bctrl 
/* 80219B48 00216A88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219B4C 00216A8C  40 82 00 3C */	bne .L_80219B88
/* 80219B50 00216A90  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219B54 00216A94  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219B58 00216A98  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B5C 00216A9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219B60 00216AA0  7D 89 03 A6 */	mtctr r12
/* 80219B64 00216AA4  4E 80 04 21 */	bctrl 
/* 80219B68 00216AA8  90 61 00 40 */	stw r3, 0x40(r1)
.L_80219B6C:
/* 80219B6C 00216AAC  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 80219B70 00216AB0  38 61 00 3C */	addi r3, r1, 0x3c
/* 80219B74 00216AB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219B78 00216AB8  7D 89 03 A6 */	mtctr r12
/* 80219B7C 00216ABC  4E 80 04 21 */	bctrl 
/* 80219B80 00216AC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219B84 00216AC4  41 82 FF 94 */	beq .L_80219B18
.L_80219B88:
/* 80219B88 00216AC8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219B8C 00216ACC  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B90 00216AD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219B94 00216AD4  7D 89 03 A6 */	mtctr r12
/* 80219B98 00216AD8  4E 80 04 21 */	bctrl 
/* 80219B9C 00216ADC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219BA0 00216AE0  7C 04 18 40 */	cmplw r4, r3
/* 80219BA4 00216AE4  40 82 FE DC */	bne .L_80219A80
/* 80219BA8 00216AE8  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureKillArg@ha
/* 80219BAC 00216AEC  3C 60 80 4B */	lis r3, __vt__Q24Game11PikiKillArg@ha
/* 80219BB0 00216AF0  3B 21 01 70 */	addi r25, r1, 0x170
/* 80219BB4 00216AF4  3B 00 00 00 */	li r24, 0
/* 80219BB8 00216AF8  3B 44 A2 D0 */	addi r26, r4, __vt__Q24Game15CreatureKillArg@l
/* 80219BBC 00216AFC  3B 83 11 60 */	addi r28, r3, __vt__Q24Game11PikiKillArg@l
/* 80219BC0 00216B00  3B 60 00 01 */	li r27, 1
/* 80219BC4 00216B04  48 00 00 50 */	b .L_80219C14
.L_80219BC8:
/* 80219BC8 00216B08  80 79 00 00 */	lwz r3, 0(r25)
/* 80219BCC 00216B0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219BD0 00216B10  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80219BD4 00216B14  7D 89 03 A6 */	mtctr r12
/* 80219BD8 00216B18  4E 80 04 21 */	bctrl 
/* 80219BDC 00216B1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219BE0 00216B20  41 82 00 14 */	beq .L_80219BF4
/* 80219BE4 00216B24  38 60 00 00 */	li r3, 0
/* 80219BE8 00216B28  48 01 6B 31 */	bl inc__Q24Game8DeathMgrFi
/* 80219BEC 00216B2C  38 60 00 07 */	li r3, 7
/* 80219BF0 00216B30  48 01 6B 29 */	bl inc__Q24Game8DeathMgrFi
.L_80219BF4:
/* 80219BF4 00216B34  93 41 00 18 */	stw r26, 0x18(r1)
/* 80219BF8 00216B38  38 81 00 18 */	addi r4, r1, 0x18
/* 80219BFC 00216B3C  80 79 00 00 */	lwz r3, 0(r25)
/* 80219C00 00216B40  93 61 00 1C */	stw r27, 0x1c(r1)
/* 80219C04 00216B44  93 81 00 18 */	stw r28, 0x18(r1)
/* 80219C08 00216B48  4B F2 14 E9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 80219C0C 00216B4C  3B 39 00 04 */	addi r25, r25, 4
/* 80219C10 00216B50  3B 18 00 01 */	addi r24, r24, 1
.L_80219C14:
/* 80219C14 00216B54  7C 18 F8 00 */	cmpw r24, r31
/* 80219C18 00216B58  41 80 FF B0 */	blt .L_80219BC8
/* 80219C1C 00216B5C  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 80219C20 00216B60  38 00 00 02 */	li r0, 2
/* 80219C24 00216B64  7F A3 EB 78 */	mr r3, r29
/* 80219C28 00216B68  7F C4 F3 78 */	mr r4, r30
/* 80219C2C 00216B6C  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 80219C30 00216B70  38 C1 00 10 */	addi r6, r1, 0x10
/* 80219C34 00216B74  38 A0 00 08 */	li r5, 8
/* 80219C38 00216B78  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 80219C3C 00216B7C  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 80219C40 00216B80  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80219C44 00216B84  81 9D 00 00 */	lwz r12, 0(r29)
/* 80219C48 00216B88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219C4C 00216B8C  7D 89 03 A6 */	mtctr r12
/* 80219C50 00216B90  4E 80 04 21 */	bctrl 
/* 80219C54 00216B94  48 00 02 B0 */	b .L_80219F04
.L_80219C58:
/* 80219C58 00216B98  7F 23 CB 78 */	mr r3, r25
/* 80219C5C 00216B9C  38 9F 00 88 */	addi r4, r31, 0x88
/* 80219C60 00216BA0  48 21 7C 6D */	bl is__Q24Game11MovieConfigFPc
/* 80219C64 00216BA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219C68 00216BA8  41 82 00 48 */	beq .L_80219CB0
/* 80219C6C 00216BAC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80219C70 00216BB0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80219C74 00216BB4  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80219C78 00216BB8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219C7C 00216BBC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219C80 00216BC0  48 1E 3F 25 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 80219C84 00216BC4  38 00 00 03 */	li r0, 3
/* 80219C88 00216BC8  7F A3 EB 78 */	mr r3, r29
/* 80219C8C 00216BCC  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80219C90 00216BD0  7F C4 F3 78 */	mr r4, r30
/* 80219C94 00216BD4  38 C1 00 0C */	addi r6, r1, 0xc
/* 80219C98 00216BD8  38 A0 00 08 */	li r5, 8
/* 80219C9C 00216BDC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80219CA0 00216BE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219CA4 00216BE4  7D 89 03 A6 */	mtctr r12
/* 80219CA8 00216BE8  4E 80 04 21 */	bctrl 
/* 80219CAC 00216BEC  48 00 02 58 */	b .L_80219F04
.L_80219CB0:
/* 80219CB0 00216BF0  7F 23 CB 78 */	mr r3, r25
/* 80219CB4 00216BF4  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 80219CB8 00216BF8  48 21 7C 15 */	bl is__Q24Game11MovieConfigFPc
/* 80219CBC 00216BFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219CC0 00216C00  41 82 02 44 */	beq .L_80219F04
/* 80219CC4 00216C04  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80219CC8 00216C08  48 21 32 C1 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 80219CCC 00216C0C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80219CD0 00216C10  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80219CD4 00216C14  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80219CD8 00216C18  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219CDC 00216C1C  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 80219CE0 00216C20  28 03 00 00 */	cmplwi r3, 0
/* 80219CE4 00216C24  41 82 00 08 */	beq .L_80219CEC
/* 80219CE8 00216C28  38 63 00 30 */	addi r3, r3, 0x30
.L_80219CEC:
/* 80219CEC 00216C2C  38 00 00 00 */	li r0, 0
/* 80219CF0 00216C30  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
/* 80219CF4 00216C34  38 84 05 A4 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
/* 80219CF8 00216C38  90 01 00 38 */	stw r0, 0x38(r1)
/* 80219CFC 00216C3C  28 00 00 00 */	cmplwi r0, 0
/* 80219D00 00216C40  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80219D04 00216C44  90 01 00 30 */	stw r0, 0x30(r1)
/* 80219D08 00216C48  90 61 00 34 */	stw r3, 0x34(r1)
/* 80219D0C 00216C4C  40 82 00 1C */	bne .L_80219D28
/* 80219D10 00216C50  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D14 00216C54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219D18 00216C58  7D 89 03 A6 */	mtctr r12
/* 80219D1C 00216C5C  4E 80 04 21 */	bctrl 
/* 80219D20 00216C60  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219D24 00216C64  48 00 01 88 */	b .L_80219EAC
.L_80219D28:
/* 80219D28 00216C68  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D2C 00216C6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219D30 00216C70  7D 89 03 A6 */	mtctr r12
/* 80219D34 00216C74  4E 80 04 21 */	bctrl 
/* 80219D38 00216C78  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219D3C 00216C7C  48 00 00 58 */	b .L_80219D94
.L_80219D40:
/* 80219D40 00216C80  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219D44 00216C84  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219D48 00216C88  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D4C 00216C8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219D50 00216C90  7D 89 03 A6 */	mtctr r12
/* 80219D54 00216C94  4E 80 04 21 */	bctrl 
/* 80219D58 00216C98  7C 64 1B 78 */	mr r4, r3
/* 80219D5C 00216C9C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80219D60 00216CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D64 00216CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219D68 00216CA8  7D 89 03 A6 */	mtctr r12
/* 80219D6C 00216CAC  4E 80 04 21 */	bctrl 
/* 80219D70 00216CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219D74 00216CB4  40 82 01 38 */	bne .L_80219EAC
/* 80219D78 00216CB8  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219D7C 00216CBC  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219D80 00216CC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D84 00216CC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219D88 00216CC8  7D 89 03 A6 */	mtctr r12
/* 80219D8C 00216CCC  4E 80 04 21 */	bctrl 
/* 80219D90 00216CD0  90 61 00 30 */	stw r3, 0x30(r1)
.L_80219D94:
/* 80219D94 00216CD4  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 80219D98 00216CD8  38 61 00 2C */	addi r3, r1, 0x2c
/* 80219D9C 00216CDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219DA0 00216CE0  7D 89 03 A6 */	mtctr r12
/* 80219DA4 00216CE4  4E 80 04 21 */	bctrl 
/* 80219DA8 00216CE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219DAC 00216CEC  41 82 FF 94 */	beq .L_80219D40
/* 80219DB0 00216CF0  48 00 00 FC */	b .L_80219EAC
.L_80219DB4:
/* 80219DB4 00216CF4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219DB8 00216CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80219DBC 00216CFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219DC0 00216D00  7D 89 03 A6 */	mtctr r12
/* 80219DC4 00216D04  4E 80 04 21 */	bctrl 
/* 80219DC8 00216D08  81 83 00 00 */	lwz r12, 0(r3)
/* 80219DCC 00216D0C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80219DD0 00216D10  7D 89 03 A6 */	mtctr r12
/* 80219DD4 00216D14  4E 80 04 21 */	bctrl 
/* 80219DD8 00216D18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219DDC 00216D1C  41 82 00 14 */	beq .L_80219DF0
/* 80219DE0 00216D20  38 60 00 00 */	li r3, 0
/* 80219DE4 00216D24  48 01 69 35 */	bl inc__Q24Game8DeathMgrFi
/* 80219DE8 00216D28  38 60 00 07 */	li r3, 7
/* 80219DEC 00216D2C  48 01 69 2D */	bl inc__Q24Game8DeathMgrFi
.L_80219DF0:
/* 80219DF0 00216D30  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80219DF4 00216D34  28 00 00 00 */	cmplwi r0, 0
/* 80219DF8 00216D38  40 82 00 24 */	bne .L_80219E1C
/* 80219DFC 00216D3C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E00 00216D40  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E04 00216D44  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E08 00216D48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219E0C 00216D4C  7D 89 03 A6 */	mtctr r12
/* 80219E10 00216D50  4E 80 04 21 */	bctrl 
/* 80219E14 00216D54  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219E18 00216D58  48 00 00 94 */	b .L_80219EAC
.L_80219E1C:
/* 80219E1C 00216D5C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E20 00216D60  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E24 00216D64  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E28 00216D68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219E2C 00216D6C  7D 89 03 A6 */	mtctr r12
/* 80219E30 00216D70  4E 80 04 21 */	bctrl 
/* 80219E34 00216D74  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219E38 00216D78  48 00 00 58 */	b .L_80219E90
.L_80219E3C:
/* 80219E3C 00216D7C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E40 00216D80  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E44 00216D84  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E48 00216D88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219E4C 00216D8C  7D 89 03 A6 */	mtctr r12
/* 80219E50 00216D90  4E 80 04 21 */	bctrl 
/* 80219E54 00216D94  7C 64 1B 78 */	mr r4, r3
/* 80219E58 00216D98  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80219E5C 00216D9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E60 00216DA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219E64 00216DA4  7D 89 03 A6 */	mtctr r12
/* 80219E68 00216DA8  4E 80 04 21 */	bctrl 
/* 80219E6C 00216DAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219E70 00216DB0  40 82 00 3C */	bne .L_80219EAC
/* 80219E74 00216DB4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E78 00216DB8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E7C 00216DBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E80 00216DC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219E84 00216DC4  7D 89 03 A6 */	mtctr r12
/* 80219E88 00216DC8  4E 80 04 21 */	bctrl 
/* 80219E8C 00216DCC  90 61 00 30 */	stw r3, 0x30(r1)
.L_80219E90:
/* 80219E90 00216DD0  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 80219E94 00216DD4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80219E98 00216DD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219E9C 00216DDC  7D 89 03 A6 */	mtctr r12
/* 80219EA0 00216DE0  4E 80 04 21 */	bctrl 
/* 80219EA4 00216DE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219EA8 00216DE8  41 82 FF 94 */	beq .L_80219E3C
.L_80219EAC:
/* 80219EAC 00216DEC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219EB0 00216DF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219EB4 00216DF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219EB8 00216DF8  7D 89 03 A6 */	mtctr r12
/* 80219EBC 00216DFC  4E 80 04 21 */	bctrl 
/* 80219EC0 00216E00  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219EC4 00216E04  7C 04 18 40 */	cmplw r4, r3
/* 80219EC8 00216E08  40 82 FE EC */	bne .L_80219DB4
/* 80219ECC 00216E0C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80219ED0 00216E10  38 80 00 01 */	li r4, 1
/* 80219ED4 00216E14  38 A0 00 01 */	li r5, 1
/* 80219ED8 00216E18  4B F4 6B A1 */	bl caveSaveAllPikmins__Q24Game7PikiMgrFbb
/* 80219EDC 00216E1C  38 00 00 04 */	li r0, 4
/* 80219EE0 00216E20  7F A3 EB 78 */	mr r3, r29
/* 80219EE4 00216E24  B0 01 00 08 */	sth r0, 8(r1)
/* 80219EE8 00216E28  7F C4 F3 78 */	mr r4, r30
/* 80219EEC 00216E2C  38 C1 00 08 */	addi r6, r1, 8
/* 80219EF0 00216E30  38 A0 00 08 */	li r5, 8
/* 80219EF4 00216E34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80219EF8 00216E38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219EFC 00216E3C  7D 89 03 A6 */	mtctr r12
/* 80219F00 00216E40  4E 80 04 21 */	bctrl 
.L_80219F04:
/* 80219F04 00216E44  E3 E1 03 28 */	psq_l f31, 808(r1), 0, qr0
/* 80219F08 00216E48  CB E1 03 20 */	lfd f31, 0x320(r1)
/* 80219F0C 00216E4C  BB 01 03 00 */	lmw r24, 0x300(r1)
/* 80219F10 00216E50  80 01 03 34 */	lwz r0, 0x334(r1)
/* 80219F14 00216E54  7C 08 03 A6 */	mtlr r0
/* 80219F18 00216E58  38 21 03 30 */	addi r1, r1, 0x330
/* 80219F1C 00216E5C  4E 80 00 20 */	blr 
.else
.global onMovieDone__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game10SingleGame9CaveStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 8021906C 00215FAC  94 21 FC D0 */	stwu r1, -0x330(r1)
/* 80219070 00215FB0  7C 08 02 A6 */	mflr r0
/* 80219074 00215FB4  90 01 03 34 */	stw r0, 0x334(r1)
/* 80219078 00215FB8  DB E1 03 20 */	stfd f31, 0x320(r1)
/* 8021907C 00215FBC  F3 E1 03 28 */	psq_st f31, 808(r1), 0, qr0
/* 80219080 00215FC0  BF 01 03 00 */	stmw r24, 0x300(r1)
/* 80219084 00215FC4  3C C0 80 48 */	lis r6, lbl_80482430@ha
/* 80219088 00215FC8  7C B9 2B 78 */	mr r25, r5
/* 8021908C 00215FCC  3B E6 24 30 */	addi r31, r6, lbl_80482430@l
/* 80219090 00215FD0  7C 7D 1B 78 */	mr r29, r3
/* 80219094 00215FD4  7C 9E 23 78 */	mr r30, r4
/* 80219098 00215FD8  7C F8 3B 78 */	mr r24, r7
/* 8021909C 00215FDC  7F 23 CB 78 */	mr r3, r25
/* 802190A0 00215FE0  38 9F 01 1C */	addi r4, r31, 0x11c
/* 802190A4 00215FE4  48 21 88 29 */	bl is__Q24Game11MovieConfigFPc
/* 802190A8 00215FE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802190AC 00215FEC  41 82 00 4C */	beq .L_802190F8
/* 802190B0 00215FF0  48 24 E3 89 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 802190B4 00215FF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802190B8 00215FF8  48 21 3E D1 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 802190BC 00215FFC  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802190C0 00216000  38 80 00 01 */	li r4, 1
/* 802190C4 00216004  38 A0 00 01 */	li r5, 1
/* 802190C8 00216008  4B F4 79 B1 */	bl caveSaveAllPikmins__Q24Game7PikiMgrFbb
/* 802190CC 0021600C  38 00 00 01 */	li r0, 1
/* 802190D0 00216010  7F A3 EB 78 */	mr r3, r29
/* 802190D4 00216014  B0 01 00 14 */	sth r0, 0x14(r1)
/* 802190D8 00216018  7F C4 F3 78 */	mr r4, r30
/* 802190DC 0021601C  38 C1 00 14 */	addi r6, r1, 0x14
/* 802190E0 00216020  38 A0 00 08 */	li r5, 8
/* 802190E4 00216024  81 9D 00 00 */	lwz r12, 0(r29)
/* 802190E8 00216028  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802190EC 0021602C  7D 89 03 A6 */	mtctr r12
/* 802190F0 00216030  4E 80 04 21 */	bctrl 
/* 802190F4 00216034  48 00 0E 10 */	b .L_80219F04
.L_802190F8:
/* 802190F8 00216038  7F 23 CB 78 */	mr r3, r25
/* 802190FC 0021603C  38 9F 01 2C */	addi r4, r31, 0x12c
/* 80219100 00216040  48 21 87 CD */	bl is__Q24Game11MovieConfigFPc
/* 80219104 00216044  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219108 00216048  41 82 00 54 */	beq .L_8021915C
/* 8021910C 0021604C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80219110 00216050  48 21 3E 79 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 80219114 00216054  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80219118 00216058  38 80 00 00 */	li r4, 0
/* 8021911C 0021605C  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80219120 00216060  3C 60 80 4C */	lis r3, __vt__Q32og6Screen14DispMemberSave@ha
/* 80219124 00216064  90 01 00 68 */	stw r0, 0x68(r1)
/* 80219128 00216068  38 63 04 E4 */	addi r3, r3, __vt__Q32og6Screen14DispMemberSave@l
/* 8021912C 0021606C  38 00 00 01 */	li r0, 1
/* 80219130 00216070  98 81 00 70 */	stb r4, 0x70(r1)
/* 80219134 00216074  90 81 00 6C */	stw r4, 0x6c(r1)
/* 80219138 00216078  90 61 00 68 */	stw r3, 0x68(r1)
/* 8021913C 0021607C  98 01 00 70 */	stb r0, 0x70(r1)
/* 80219140 00216080  48 24 E2 F9 */	bl PSMCancelToPauseOffMainBgm__Fv
/* 80219144 00216084  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219148 00216088  38 81 00 68 */	addi r4, r1, 0x68
/* 8021914C 0021608C  48 1E 55 59 */	bl open_Save__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberSave
/* 80219150 00216090  38 00 00 01 */	li r0, 1
/* 80219154 00216094  98 1D 00 18 */	stb r0, 0x18(r29)
/* 80219158 00216098  48 00 0D AC */	b .L_80219F04
.L_8021915C:
/* 8021915C 0021609C  7F 23 CB 78 */	mr r3, r25
/* 80219160 002160A0  38 9F 01 38 */	addi r4, r31, 0x138
/* 80219164 002160A4  48 21 87 69 */	bl is__Q24Game11MovieConfigFPc
/* 80219168 002160A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021916C 002160AC  41 82 02 50 */	beq .L_802193BC
/* 80219170 002160B0  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80219174 002160B4  39 00 00 00 */	li r8, 0
/* 80219178 002160B8  39 23 11 48 */	addi r9, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 8021917C 002160BC  38 80 00 01 */	li r4, 1
/* 80219180 002160C0  C0 22 BC A0 */	lfs f1, lbl_8051A000@sda21(r2)
/* 80219184 002160C4  3C E0 80 4B */	lis r7, __vt__Q32og6Screen14DispMemberCave@ha
/* 80219188 002160C8  38 00 00 0A */	li r0, 0xa
/* 8021918C 002160CC  38 60 00 02 */	li r3, 2
/* 80219190 002160D0  99 01 01 28 */	stb r8, 0x128(r1)
/* 80219194 002160D4  38 C0 04 D2 */	li r6, 0x4d2
/* 80219198 002160D8  C0 42 BC A8 */	lfs f2, lbl_8051A008@sda21(r2)
/* 8021919C 002160DC  38 A0 00 32 */	li r5, 0x32
/* 802191A0 002160E0  C0 02 BC D0 */	lfs f0, lbl_8051A030@sda21(r2)
/* 802191A4 002160E4  38 E7 10 94 */	addi r7, r7, __vt__Q32og6Screen14DispMemberCave@l
/* 802191A8 002160E8  91 21 01 0C */	stw r9, 0x10c(r1)
/* 802191AC 002160EC  81 2D 93 08 */	lwz r9, mapMgr__4Game@sda21(r13)
/* 802191B0 002160F0  91 01 01 10 */	stw r8, 0x110(r1)
/* 802191B4 002160F4  90 E1 01 0C */	stw r7, 0x10c(r1)
/* 802191B8 002160F8  D0 41 01 14 */	stfs f2, 0x114(r1)
/* 802191BC 002160FC  91 01 01 18 */	stw r8, 0x118(r1)
/* 802191C0 00216100  91 01 01 20 */	stw r8, 0x120(r1)
/* 802191C4 00216104  90 C1 01 1C */	stw r6, 0x11c(r1)
/* 802191C8 00216108  90 A1 01 24 */	stw r5, 0x124(r1)
/* 802191CC 0021610C  91 01 01 2C */	stw r8, 0x12c(r1)
/* 802191D0 00216110  D0 21 01 30 */	stfs f1, 0x130(r1)
/* 802191D4 00216114  90 81 01 34 */	stw r4, 0x134(r1)
/* 802191D8 00216118  90 61 01 38 */	stw r3, 0x138(r1)
/* 802191DC 0021611C  90 01 01 3C */	stw r0, 0x13c(r1)
/* 802191E0 00216120  90 01 01 40 */	stw r0, 0x140(r1)
/* 802191E4 00216124  98 81 01 44 */	stb r4, 0x144(r1)
/* 802191E8 00216128  D0 21 01 48 */	stfs f1, 0x148(r1)
/* 802191EC 0021612C  90 81 01 4C */	stw r4, 0x14c(r1)
/* 802191F0 00216130  90 61 01 50 */	stw r3, 0x150(r1)
/* 802191F4 00216134  90 01 01 54 */	stw r0, 0x154(r1)
/* 802191F8 00216138  90 01 01 58 */	stw r0, 0x158(r1)
/* 802191FC 0021613C  98 81 01 5C */	stb r4, 0x15c(r1)
/* 80219200 00216140  98 81 01 28 */	stb r4, 0x128(r1)
/* 80219204 00216144  99 01 01 69 */	stb r8, 0x169(r1)
/* 80219208 00216148  99 01 01 6A */	stb r8, 0x16a(r1)
/* 8021920C 0021614C  D0 01 01 60 */	stfs f0, 0x160(r1)
/* 80219210 00216150  99 01 01 68 */	stb r8, 0x168(r1)
/* 80219214 00216154  90 81 01 64 */	stw r4, 0x164(r1)
/* 80219218 00216158  99 01 01 6B */	stb r8, 0x16b(r1)
/* 8021921C 0021615C  99 01 01 6E */	stb r8, 0x16e(r1)
/* 80219220 00216160  99 01 01 6F */	stb r8, 0x16f(r1)
/* 80219224 00216164  99 01 01 6C */	stb r8, 0x16c(r1)
/* 80219228 00216168  99 01 01 6D */	stb r8, 0x16d(r1)
/* 8021922C 0021616C  83 29 00 30 */	lwz r25, 0x30(r9)
/* 80219230 00216170  80 69 00 28 */	lwz r3, 0x28(r9)
/* 80219234 00216174  4B FB E2 BD */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 80219238 00216178  38 03 FF FF */	addi r0, r3, -1
/* 8021923C 0021617C  7C 19 00 50 */	subf r0, r25, r0
/* 80219240 00216180  7C 03 00 34 */	cntlzw r3, r0
/* 80219244 00216184  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 80219248 00216188  54 63 D9 7E */	srwi r3, r3, 5
/* 8021924C 0021618C  98 61 01 6A */	stb r3, 0x16a(r1)
/* 80219250 00216190  41 82 00 18 */	beq .L_80219268
/* 80219254 00216194  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219258 00216198  38 81 01 0C */	addi r4, r1, 0x10c
/* 8021925C 0021619C  38 A0 00 02 */	li r5, 2
/* 80219260 002161A0  48 1E 2F C5 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 80219264 002161A4  48 00 0C A0 */	b .L_80219F04
.L_80219268:
/* 80219268 002161A8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8021926C 002161AC  38 81 01 0C */	addi r4, r1, 0x10c
/* 80219270 002161B0  38 A0 00 00 */	li r5, 0
/* 80219274 002161B4  48 1E 2F B1 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 80219278 002161B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021927C 002161BC  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80219280 002161C0  60 00 00 02 */	ori r0, r0, 2
/* 80219284 002161C4  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219288 002161C8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8021928C 002161CC  28 00 00 00 */	cmplwi r0, 0
/* 80219290 002161D0  40 82 00 18 */	bne .L_802192A8
/* 80219294 002161D4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80219298 002161D8  38 BF 00 38 */	addi r5, r31, 0x38
/* 8021929C 002161DC  38 80 01 D3 */	li r4, 0x1d3
/* 802192A0 002161E0  4C C6 31 82 */	crclr 6
/* 802192A4 002161E4  4B E1 13 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802192A8:
/* 802192A8 002161E8  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 802192AC 002161EC  80 1A 00 04 */	lwz r0, 4(r26)
/* 802192B0 002161F0  28 00 00 00 */	cmplwi r0, 0
/* 802192B4 002161F4  40 82 00 18 */	bne .L_802192CC
/* 802192B8 002161F8  38 7F 00 44 */	addi r3, r31, 0x44
/* 802192BC 002161FC  38 BF 00 38 */	addi r5, r31, 0x38
/* 802192C0 00216200  38 80 00 C7 */	li r4, 0xc7
/* 802192C4 00216204  4C C6 31 82 */	crclr 6
/* 802192C8 00216208  4B E1 13 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802192CC:
/* 802192CC 0021620C  80 7A 00 04 */	lwz r3, 4(r26)
/* 802192D0 00216210  80 63 00 04 */	lwz r3, 4(r3)
/* 802192D4 00216214  81 83 00 00 */	lwz r12, 0(r3)
/* 802192D8 00216218  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802192DC 0021621C  7D 89 03 A6 */	mtctr r12
/* 802192E0 00216220  4E 80 04 21 */	bctrl 
/* 802192E4 00216224  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 802192E8 00216228  28 00 00 00 */	cmplwi r0, 0
/* 802192EC 0021622C  41 82 0C 18 */	beq .L_80219F04
/* 802192F0 00216230  48 00 53 41 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 802192F4 00216234  2C 03 00 00 */	cmpwi r3, 0
/* 802192F8 00216238  40 82 0C 0C */	bne .L_80219F04
/* 802192FC 0021623C  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80219300 00216240  28 00 00 00 */	cmplwi r0, 0
/* 80219304 00216244  40 82 00 18 */	bne .L_8021931C
/* 80219308 00216248  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8021930C 0021624C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219310 00216250  38 80 01 D3 */	li r4, 0x1d3
/* 80219314 00216254  4C C6 31 82 */	crclr 6
/* 80219318 00216258  4B E1 13 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021931C:
/* 8021931C 0021625C  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 80219320 00216260  28 1A 00 00 */	cmplwi r26, 0
/* 80219324 00216264  40 82 00 18 */	bne .L_8021933C
/* 80219328 00216268  38 7F 00 2C */	addi r3, r31, 0x2c
/* 8021932C 0021626C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219330 00216270  38 80 01 DC */	li r4, 0x1dc
/* 80219334 00216274  4C C6 31 82 */	crclr 6
/* 80219338 00216278  4B E1 13 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021933C:
/* 8021933C 0021627C  80 1A 00 04 */	lwz r0, 4(r26)
/* 80219340 00216280  28 00 00 00 */	cmplwi r0, 0
/* 80219344 00216284  40 82 00 18 */	bne .L_8021935C
/* 80219348 00216288  38 7F 00 44 */	addi r3, r31, 0x44
/* 8021934C 0021628C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219350 00216290  38 80 00 CF */	li r4, 0xcf
/* 80219354 00216294  4C C6 31 82 */	crclr 6
/* 80219358 00216298  4B E1 12 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021935C:
/* 8021935C 0021629C  80 7A 00 04 */	lwz r3, 4(r26)
/* 80219360 002162A0  83 43 00 04 */	lwz r26, 4(r3)
/* 80219364 002162A4  28 1A 00 00 */	cmplwi r26, 0
/* 80219368 002162A8  40 82 00 18 */	bne .L_80219380
/* 8021936C 002162AC  38 7F 00 44 */	addi r3, r31, 0x44
/* 80219370 002162B0  38 BF 00 50 */	addi r5, r31, 0x50
/* 80219374 002162B4  38 80 00 D1 */	li r4, 0xd1
/* 80219378 002162B8  4C C6 31 82 */	crclr 6
/* 8021937C 002162BC  4B E1 12 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219380:
/* 80219380 002162C0  81 9A 00 00 */	lwz r12, 0(r26)
/* 80219384 002162C4  7F 43 D3 78 */	mr r3, r26
/* 80219388 002162C8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8021938C 002162CC  7D 89 03 A6 */	mtctr r12
/* 80219390 002162D0  4E 80 04 21 */	bctrl 
/* 80219394 002162D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219398 002162D8  40 82 00 18 */	bne .L_802193B0
/* 8021939C 002162DC  38 7F 00 74 */	addi r3, r31, 0x74
/* 802193A0 002162E0  38 BF 00 38 */	addi r5, r31, 0x38
/* 802193A4 002162E4  38 80 01 77 */	li r4, 0x177
/* 802193A8 002162E8  4C C6 31 82 */	crclr 6
/* 802193AC 002162EC  4B E1 12 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802193B0:
/* 802193B0 002162F0  7F 43 D3 78 */	mr r3, r26
/* 802193B4 002162F4  48 25 0D 41 */	bl stopPollutionSe__Q23PSM10Scene_CaveFv
/* 802193B8 002162F8  48 00 0B 4C */	b .L_80219F04
.L_802193BC:
/* 802193BC 002162FC  7F 23 CB 78 */	mr r3, r25
/* 802193C0 00216300  38 9F 00 1C */	addi r4, r31, 0x1c
/* 802193C4 00216304  48 21 85 09 */	bl is__Q24Game11MovieConfigFPc
/* 802193C8 00216308  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802193CC 0021630C  41 82 05 6C */	beq .L_80219938
/* 802193D0 00216310  38 00 00 00 */	li r0, 0
/* 802193D4 00216314  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802193D8 00216318  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802193DC 0021631C  90 01 00 64 */	stw r0, 0x64(r1)
/* 802193E0 00216320  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802193E4 00216324  28 00 00 00 */	cmplwi r0, 0
/* 802193E8 00216328  90 81 00 58 */	stw r4, 0x58(r1)
/* 802193EC 0021632C  90 01 00 5C */	stw r0, 0x5c(r1)
/* 802193F0 00216330  90 61 00 60 */	stw r3, 0x60(r1)
/* 802193F4 00216334  40 82 00 1C */	bne .L_80219410
/* 802193F8 00216338  81 83 00 00 */	lwz r12, 0(r3)
/* 802193FC 0021633C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219400 00216340  7D 89 03 A6 */	mtctr r12
/* 80219404 00216344  4E 80 04 21 */	bctrl 
/* 80219408 00216348  90 61 00 5C */	stw r3, 0x5c(r1)
/* 8021940C 0021634C  48 00 00 8C */	b .L_80219498
.L_80219410:
/* 80219410 00216350  81 83 00 00 */	lwz r12, 0(r3)
/* 80219414 00216354  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219418 00216358  7D 89 03 A6 */	mtctr r12
/* 8021941C 0021635C  4E 80 04 21 */	bctrl 
/* 80219420 00216360  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80219424 00216364  48 00 00 58 */	b .L_8021947C
.L_80219428:
/* 80219428 00216368  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021942C 0021636C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219430 00216370  81 83 00 00 */	lwz r12, 0(r3)
/* 80219434 00216374  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219438 00216378  7D 89 03 A6 */	mtctr r12
/* 8021943C 0021637C  4E 80 04 21 */	bctrl 
/* 80219440 00216380  7C 64 1B 78 */	mr r4, r3
/* 80219444 00216384  80 61 00 64 */	lwz r3, 0x64(r1)
/* 80219448 00216388  81 83 00 00 */	lwz r12, 0(r3)
/* 8021944C 0021638C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219450 00216390  7D 89 03 A6 */	mtctr r12
/* 80219454 00216394  4E 80 04 21 */	bctrl 
/* 80219458 00216398  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021945C 0021639C  40 82 00 3C */	bne .L_80219498
/* 80219460 002163A0  80 61 00 60 */	lwz r3, 0x60(r1)
/* 80219464 002163A4  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219468 002163A8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021946C 002163AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219470 002163B0  7D 89 03 A6 */	mtctr r12
/* 80219474 002163B4  4E 80 04 21 */	bctrl 
/* 80219478 002163B8  90 61 00 5C */	stw r3, 0x5c(r1)
.L_8021947C:
/* 8021947C 002163BC  81 81 00 58 */	lwz r12, 0x58(r1)
/* 80219480 002163C0  38 61 00 58 */	addi r3, r1, 0x58
/* 80219484 002163C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219488 002163C8  7D 89 03 A6 */	mtctr r12
/* 8021948C 002163CC  4E 80 04 21 */	bctrl 
/* 80219490 002163D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219494 002163D4  41 82 FF 94 */	beq .L_80219428
.L_80219498:
/* 80219498 002163D8  C3 E2 BC A8 */	lfs f31, lbl_8051A008@sda21(r2)
/* 8021949C 002163DC  48 00 01 4C */	b .L_802195E8
.L_802194A0:
/* 802194A0 002163E0  80 61 00 60 */	lwz r3, 0x60(r1)
/* 802194A4 002163E4  81 83 00 00 */	lwz r12, 0(r3)
/* 802194A8 002163E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802194AC 002163EC  7D 89 03 A6 */	mtctr r12
/* 802194B0 002163F0  4E 80 04 21 */	bctrl 
/* 802194B4 002163F4  7C 7A 1B 78 */	mr r26, r3
/* 802194B8 002163F8  38 61 00 20 */	addi r3, r1, 0x20
/* 802194BC 002163FC  81 9A 00 00 */	lwz r12, 0(r26)
/* 802194C0 00216400  7F 44 D3 78 */	mr r4, r26
/* 802194C4 00216404  81 8C 00 08 */	lwz r12, 8(r12)
/* 802194C8 00216408  7D 89 03 A6 */	mtctr r12
/* 802194CC 0021640C  4E 80 04 21 */	bctrl 
/* 802194D0 00216410  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 802194D4 00216414  38 81 00 4C */	addi r4, r1, 0x4c
/* 802194D8 00216418  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 802194DC 0021641C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802194E0 00216420  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 802194E4 00216424  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802194E8 00216428  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 802194EC 0021642C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 802194F0 00216430  81 83 00 04 */	lwz r12, 4(r3)
/* 802194F4 00216434  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802194F8 00216438  7D 89 03 A6 */	mtctr r12
/* 802194FC 0021643C  4E 80 04 21 */	bctrl 
/* 80219500 00216440  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 80219504 00216444  7F 43 D3 78 */	mr r3, r26
/* 80219508 00216448  38 81 00 4C */	addi r4, r1, 0x4c
/* 8021950C 0021644C  38 A0 00 00 */	li r5, 0
/* 80219510 00216450  4B F2 1C 99 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80219514 00216454  D3 FA 02 00 */	stfs f31, 0x200(r26)
/* 80219518 00216458  D3 FA 02 04 */	stfs f31, 0x204(r26)
/* 8021951C 0021645C  D3 FA 02 08 */	stfs f31, 0x208(r26)
/* 80219520 00216460  D3 FA 01 E4 */	stfs f31, 0x1e4(r26)
/* 80219524 00216464  D3 FA 01 E8 */	stfs f31, 0x1e8(r26)
/* 80219528 00216468  D3 FA 01 EC */	stfs f31, 0x1ec(r26)
/* 8021952C 0021646C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80219530 00216470  28 00 00 00 */	cmplwi r0, 0
/* 80219534 00216474  40 82 00 24 */	bne .L_80219558
/* 80219538 00216478  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021953C 0021647C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219540 00216480  81 83 00 00 */	lwz r12, 0(r3)
/* 80219544 00216484  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219548 00216488  7D 89 03 A6 */	mtctr r12
/* 8021954C 0021648C  4E 80 04 21 */	bctrl 
/* 80219550 00216490  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80219554 00216494  48 00 00 94 */	b .L_802195E8
.L_80219558:
/* 80219558 00216498  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021955C 0021649C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219560 002164A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219564 002164A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219568 002164A8  7D 89 03 A6 */	mtctr r12
/* 8021956C 002164AC  4E 80 04 21 */	bctrl 
/* 80219570 002164B0  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80219574 002164B4  48 00 00 58 */	b .L_802195CC
.L_80219578:
/* 80219578 002164B8  80 61 00 60 */	lwz r3, 0x60(r1)
/* 8021957C 002164BC  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219580 002164C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219584 002164C4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219588 002164C8  7D 89 03 A6 */	mtctr r12
/* 8021958C 002164CC  4E 80 04 21 */	bctrl 
/* 80219590 002164D0  7C 64 1B 78 */	mr r4, r3
/* 80219594 002164D4  80 61 00 64 */	lwz r3, 0x64(r1)
/* 80219598 002164D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021959C 002164DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802195A0 002164E0  7D 89 03 A6 */	mtctr r12
/* 802195A4 002164E4  4E 80 04 21 */	bctrl 
/* 802195A8 002164E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802195AC 002164EC  40 82 00 3C */	bne .L_802195E8
/* 802195B0 002164F0  80 61 00 60 */	lwz r3, 0x60(r1)
/* 802195B4 002164F4  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 802195B8 002164F8  81 83 00 00 */	lwz r12, 0(r3)
/* 802195BC 002164FC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802195C0 00216500  7D 89 03 A6 */	mtctr r12
/* 802195C4 00216504  4E 80 04 21 */	bctrl 
/* 802195C8 00216508  90 61 00 5C */	stw r3, 0x5c(r1)
.L_802195CC:
/* 802195CC 0021650C  81 81 00 58 */	lwz r12, 0x58(r1)
/* 802195D0 00216510  38 61 00 58 */	addi r3, r1, 0x58
/* 802195D4 00216514  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802195D8 00216518  7D 89 03 A6 */	mtctr r12
/* 802195DC 0021651C  4E 80 04 21 */	bctrl 
/* 802195E0 00216520  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802195E4 00216524  41 82 FF 94 */	beq .L_80219578
.L_802195E8:
/* 802195E8 00216528  80 61 00 60 */	lwz r3, 0x60(r1)
/* 802195EC 0021652C  81 83 00 00 */	lwz r12, 0(r3)
/* 802195F0 00216530  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802195F4 00216534  7D 89 03 A6 */	mtctr r12
/* 802195F8 00216538  4E 80 04 21 */	bctrl 
/* 802195FC 0021653C  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 80219600 00216540  7C 04 18 40 */	cmplw r4, r3
/* 80219604 00216544  40 82 FE 9C */	bne .L_802194A0
/* 80219608 00216548  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8021960C 0021654C  38 80 00 05 */	li r4, 5
/* 80219610 00216550  4B FC DD D1 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80219614 00216554  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219618 00216558  40 82 00 CC */	bne .L_802196E4
/* 8021961C 0021655C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80219620 00216560  38 80 00 05 */	li r4, 5
/* 80219624 00216564  4B FC DD 81 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80219628 00216568  80 9E 00 C8 */	lwz r4, 0xc8(r30)
/* 8021962C 0021656C  38 00 00 00 */	li r0, 0
/* 80219630 00216570  C0 02 BC A8 */	lfs f0, lbl_8051A008@sda21(r2)
/* 80219634 00216574  38 7F 01 38 */	addi r3, r31, 0x138
/* 80219638 00216578  90 61 00 74 */	stw r3, 0x74(r1)
/* 8021963C 0021657C  3B 21 00 8C */	addi r25, r1, 0x8c
/* 80219640 00216580  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219644 00216584  90 01 00 78 */	stw r0, 0x78(r1)
/* 80219648 00216588  90 81 00 80 */	stw r4, 0x80(r1)
/* 8021964C 0021658C  D0 01 00 8C */	stfs f0, 0x8c(r1)
/* 80219650 00216590  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 80219654 00216594  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80219658 00216598  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 8021965C 0021659C  90 01 00 9C */	stw r0, 0x9c(r1)
/* 80219660 002165A0  90 01 00 84 */	stw r0, 0x84(r1)
/* 80219664 002165A4  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80219668 002165A8  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 8021966C 002165AC  90 01 00 88 */	stw r0, 0x88(r1)
/* 80219670 002165B0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80219674 002165B4  48 1E 3F ED */	bl close_Floor__Q26Screen9Game2DMgrFv
/* 80219678 002165B8  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 8021967C 002165BC  80 63 00 AC */	lwz r3, 0xac(r3)
/* 80219680 002165C0  28 03 00 00 */	cmplwi r3, 0
/* 80219684 002165C4  41 82 00 18 */	beq .L_8021969C
/* 80219688 002165C8  81 83 00 00 */	lwz r12, 0(r3)
/* 8021968C 002165CC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80219690 002165D0  7D 89 03 A6 */	mtctr r12
/* 80219694 002165D4  4E 80 04 21 */	bctrl 
/* 80219698 002165D8  D0 21 00 98 */	stfs f1, 0x98(r1)
.L_8021969C:
/* 8021969C 002165DC  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802196A0 002165E0  7F 24 CB 78 */	mr r4, r25
/* 802196A4 002165E4  38 A0 00 00 */	li r5, 0
/* 802196A8 002165E8  81 83 00 04 */	lwz r12, 4(r3)
/* 802196AC 002165EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802196B0 002165F0  7D 89 03 A6 */	mtctr r12
/* 802196B4 002165F4  4E 80 04 21 */	bctrl 
/* 802196B8 002165F8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802196BC 002165FC  7F 24 CB 78 */	mr r4, r25
/* 802196C0 00216600  81 83 00 04 */	lwz r12, 4(r3)
/* 802196C4 00216604  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802196C8 00216608  7D 89 03 A6 */	mtctr r12
/* 802196CC 0021660C  4E 80 04 21 */	bctrl 
/* 802196D0 00216610  D0 21 00 90 */	stfs f1, 0x90(r1)
/* 802196D4 00216614  38 81 00 74 */	addi r4, r1, 0x74
/* 802196D8 00216618  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 802196DC 0021661C  48 21 32 F5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 802196E0 00216620  48 00 08 24 */	b .L_80219F04
.L_802196E4:
/* 802196E4 00216624  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802196E8 00216628  48 1E 3F 79 */	bl close_Floor__Q26Screen9Game2DMgrFv
/* 802196EC 0021662C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 802196F0 00216630  39 00 00 00 */	li r8, 0
/* 802196F4 00216634  39 23 11 48 */	addi r9, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 802196F8 00216638  38 80 00 01 */	li r4, 1
/* 802196FC 0021663C  C0 22 BC A0 */	lfs f1, lbl_8051A000@sda21(r2)
/* 80219700 00216640  3C E0 80 4B */	lis r7, __vt__Q32og6Screen14DispMemberCave@ha
/* 80219704 00216644  38 00 00 0A */	li r0, 0xa
/* 80219708 00216648  38 60 00 02 */	li r3, 2
/* 8021970C 0021664C  99 01 00 C4 */	stb r8, 0xc4(r1)
/* 80219710 00216650  38 C0 04 D2 */	li r6, 0x4d2
/* 80219714 00216654  C0 42 BC A8 */	lfs f2, lbl_8051A008@sda21(r2)
/* 80219718 00216658  38 A0 00 32 */	li r5, 0x32
/* 8021971C 0021665C  C0 02 BC D0 */	lfs f0, lbl_8051A030@sda21(r2)
/* 80219720 00216660  38 E7 10 94 */	addi r7, r7, __vt__Q32og6Screen14DispMemberCave@l
/* 80219724 00216664  91 21 00 A8 */	stw r9, 0xa8(r1)
/* 80219728 00216668  81 2D 93 08 */	lwz r9, mapMgr__4Game@sda21(r13)
/* 8021972C 0021666C  91 01 00 AC */	stw r8, 0xac(r1)
/* 80219730 00216670  90 E1 00 A8 */	stw r7, 0xa8(r1)
/* 80219734 00216674  D0 41 00 B0 */	stfs f2, 0xb0(r1)
/* 80219738 00216678  91 01 00 B4 */	stw r8, 0xb4(r1)
/* 8021973C 0021667C  91 01 00 BC */	stw r8, 0xbc(r1)
/* 80219740 00216680  90 C1 00 B8 */	stw r6, 0xb8(r1)
/* 80219744 00216684  90 A1 00 C0 */	stw r5, 0xc0(r1)
/* 80219748 00216688  91 01 00 C8 */	stw r8, 0xc8(r1)
/* 8021974C 0021668C  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 80219750 00216690  90 81 00 D0 */	stw r4, 0xd0(r1)
/* 80219754 00216694  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 80219758 00216698  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 8021975C 0021669C  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80219760 002166A0  98 81 00 E0 */	stb r4, 0xe0(r1)
/* 80219764 002166A4  D0 21 00 E4 */	stfs f1, 0xe4(r1)
/* 80219768 002166A8  90 81 00 E8 */	stw r4, 0xe8(r1)
/* 8021976C 002166AC  90 61 00 EC */	stw r3, 0xec(r1)
/* 80219770 002166B0  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80219774 002166B4  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80219778 002166B8  98 81 00 F8 */	stb r4, 0xf8(r1)
/* 8021977C 002166BC  98 81 00 C4 */	stb r4, 0xc4(r1)
/* 80219780 002166C0  99 01 01 05 */	stb r8, 0x105(r1)
/* 80219784 002166C4  99 01 01 06 */	stb r8, 0x106(r1)
/* 80219788 002166C8  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 8021978C 002166CC  99 01 01 04 */	stb r8, 0x104(r1)
/* 80219790 002166D0  90 81 01 00 */	stw r4, 0x100(r1)
/* 80219794 002166D4  99 01 01 07 */	stb r8, 0x107(r1)
/* 80219798 002166D8  99 01 01 0A */	stb r8, 0x10a(r1)
/* 8021979C 002166DC  99 01 01 0B */	stb r8, 0x10b(r1)
/* 802197A0 002166E0  99 01 01 08 */	stb r8, 0x108(r1)
/* 802197A4 002166E4  99 01 01 09 */	stb r8, 0x109(r1)
/* 802197A8 002166E8  83 29 00 30 */	lwz r25, 0x30(r9)
/* 802197AC 002166EC  80 69 00 28 */	lwz r3, 0x28(r9)
/* 802197B0 002166F0  4B FB DD 41 */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 802197B4 002166F4  38 03 FF FF */	addi r0, r3, -1
/* 802197B8 002166F8  7C 19 00 50 */	subf r0, r25, r0
/* 802197BC 002166FC  7C 03 00 34 */	cntlzw r3, r0
/* 802197C0 00216700  54 60 DE 3F */	rlwinm. r0, r3, 0x1b, 0x18, 0x1f
/* 802197C4 00216704  54 63 D9 7E */	srwi r3, r3, 5
/* 802197C8 00216708  98 61 01 06 */	stb r3, 0x106(r1)
/* 802197CC 0021670C  41 82 00 18 */	beq .L_802197E4
/* 802197D0 00216710  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802197D4 00216714  38 81 00 A8 */	addi r4, r1, 0xa8
/* 802197D8 00216718  38 A0 00 02 */	li r5, 2
/* 802197DC 0021671C  48 1E 2A 49 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 802197E0 00216720  48 00 07 24 */	b .L_80219F04
.L_802197E4:
/* 802197E4 00216724  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 802197E8 00216728  38 81 00 A8 */	addi r4, r1, 0xa8
/* 802197EC 0021672C  38 A0 00 00 */	li r5, 0
/* 802197F0 00216730  48 1E 2A 35 */	bl open_GameCave__Q26Screen9Game2DMgrFRQ32og6Screen14DispMemberCavei
/* 802197F4 00216734  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802197F8 00216738  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 802197FC 0021673C  60 00 00 02 */	ori r0, r0, 2
/* 80219800 00216740  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219804 00216744  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80219808 00216748  28 00 00 00 */	cmplwi r0, 0
/* 8021980C 0021674C  40 82 00 18 */	bne .L_80219824
/* 80219810 00216750  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80219814 00216754  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219818 00216758  38 80 01 D3 */	li r4, 0x1d3
/* 8021981C 0021675C  4C C6 31 82 */	crclr 6
/* 80219820 00216760  4B E1 0E 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219824:
/* 80219824 00216764  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 80219828 00216768  80 1A 00 04 */	lwz r0, 4(r26)
/* 8021982C 0021676C  28 00 00 00 */	cmplwi r0, 0
/* 80219830 00216770  40 82 00 18 */	bne .L_80219848
/* 80219834 00216774  38 7F 00 44 */	addi r3, r31, 0x44
/* 80219838 00216778  38 BF 00 38 */	addi r5, r31, 0x38
/* 8021983C 0021677C  38 80 00 C7 */	li r4, 0xc7
/* 80219840 00216780  4C C6 31 82 */	crclr 6
/* 80219844 00216784  4B E1 0D FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219848:
/* 80219848 00216788  80 7A 00 04 */	lwz r3, 4(r26)
/* 8021984C 0021678C  80 63 00 04 */	lwz r3, 4(r3)
/* 80219850 00216790  81 83 00 00 */	lwz r12, 0(r3)
/* 80219854 00216794  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219858 00216798  7D 89 03 A6 */	mtctr r12
/* 8021985C 0021679C  4E 80 04 21 */	bctrl 
/* 80219860 002167A0  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 80219864 002167A4  28 00 00 00 */	cmplwi r0, 0
/* 80219868 002167A8  41 82 06 9C */	beq .L_80219F04
/* 8021986C 002167AC  48 00 4D C5 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 80219870 002167B0  2C 03 00 00 */	cmpwi r3, 0
/* 80219874 002167B4  40 82 06 90 */	bne .L_80219F04
/* 80219878 002167B8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 8021987C 002167BC  28 00 00 00 */	cmplwi r0, 0
/* 80219880 002167C0  40 82 00 18 */	bne .L_80219898
/* 80219884 002167C4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 80219888 002167C8  38 BF 00 38 */	addi r5, r31, 0x38
/* 8021988C 002167CC  38 80 01 D3 */	li r4, 0x1d3
/* 80219890 002167D0  4C C6 31 82 */	crclr 6
/* 80219894 002167D4  4B E1 0D AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80219898:
/* 80219898 002167D8  83 4D 98 80 */	lwz r26, spSceneMgr__8PSSystem@sda21(r13)
/* 8021989C 002167DC  28 1A 00 00 */	cmplwi r26, 0
/* 802198A0 002167E0  40 82 00 18 */	bne .L_802198B8
/* 802198A4 002167E4  38 7F 00 2C */	addi r3, r31, 0x2c
/* 802198A8 002167E8  38 BF 00 38 */	addi r5, r31, 0x38
/* 802198AC 002167EC  38 80 01 DC */	li r4, 0x1dc
/* 802198B0 002167F0  4C C6 31 82 */	crclr 6
/* 802198B4 002167F4  4B E1 0D 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802198B8:
/* 802198B8 002167F8  80 1A 00 04 */	lwz r0, 4(r26)
/* 802198BC 002167FC  28 00 00 00 */	cmplwi r0, 0
/* 802198C0 00216800  40 82 00 18 */	bne .L_802198D8
/* 802198C4 00216804  38 7F 00 44 */	addi r3, r31, 0x44
/* 802198C8 00216808  38 BF 00 38 */	addi r5, r31, 0x38
/* 802198CC 0021680C  38 80 00 CF */	li r4, 0xcf
/* 802198D0 00216810  4C C6 31 82 */	crclr 6
/* 802198D4 00216814  4B E1 0D 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802198D8:
/* 802198D8 00216818  80 7A 00 04 */	lwz r3, 4(r26)
/* 802198DC 0021681C  83 43 00 04 */	lwz r26, 4(r3)
/* 802198E0 00216820  28 1A 00 00 */	cmplwi r26, 0
/* 802198E4 00216824  40 82 00 18 */	bne .L_802198FC
/* 802198E8 00216828  38 7F 00 44 */	addi r3, r31, 0x44
/* 802198EC 0021682C  38 BF 00 50 */	addi r5, r31, 0x50
/* 802198F0 00216830  38 80 00 D1 */	li r4, 0xd1
/* 802198F4 00216834  4C C6 31 82 */	crclr 6
/* 802198F8 00216838  4B E1 0D 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802198FC:
/* 802198FC 0021683C  81 9A 00 00 */	lwz r12, 0(r26)
/* 80219900 00216840  7F 43 D3 78 */	mr r3, r26
/* 80219904 00216844  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80219908 00216848  7D 89 03 A6 */	mtctr r12
/* 8021990C 0021684C  4E 80 04 21 */	bctrl 
/* 80219910 00216850  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219914 00216854  40 82 00 18 */	bne .L_8021992C
/* 80219918 00216858  38 7F 00 74 */	addi r3, r31, 0x74
/* 8021991C 0021685C  38 BF 00 38 */	addi r5, r31, 0x38
/* 80219920 00216860  38 80 01 77 */	li r4, 0x177
/* 80219924 00216864  4C C6 31 82 */	crclr 6
/* 80219928 00216868  4B E1 0D 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8021992C:
/* 8021992C 0021686C  7F 43 D3 78 */	mr r3, r26
/* 80219930 00216870  48 25 07 C5 */	bl stopPollutionSe__Q23PSM10Scene_CaveFv
/* 80219934 00216874  48 00 05 D0 */	b .L_80219F04
.L_80219938:
/* 80219938 00216878  7F 23 CB 78 */	mr r3, r25
/* 8021993C 0021687C  38 9F 01 0C */	addi r4, r31, 0x10c
/* 80219940 00216880  48 21 7F 8D */	bl is__Q24Game11MovieConfigFPc
/* 80219944 00216884  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219948 00216888  41 82 03 10 */	beq .L_80219C58
/* 8021994C 0021688C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219950 00216890  48 1E 42 55 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 80219954 00216894  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80219958 00216898  7F 04 C3 78 */	mr r4, r24
/* 8021995C 0021689C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219960 002168A0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80219964 002168A4  7D 89 03 A6 */	mtctr r12
/* 80219968 002168A8  4E 80 04 21 */	bctrl 
/* 8021996C 002168AC  4B F2 93 B9 */	bl setDeadLaydown__Q24Game4NaviFv
/* 80219970 002168B0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80219974 002168B4  80 03 00 50 */	lwz r0, 0x50(r3)
/* 80219978 002168B8  2C 00 00 02 */	cmpwi r0, 2
/* 8021997C 002168BC  41 82 00 34 */	beq .L_802199B0
/* 80219980 002168C0  2C 18 00 00 */	cmpwi r24, 0
/* 80219984 002168C4  40 82 00 18 */	bne .L_8021999C
/* 80219988 002168C8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8021998C 002168CC  38 80 00 01 */	li r4, 1
/* 80219990 002168D0  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80219994 002168D4  4B F3 3F 85 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 80219998 002168D8  48 00 05 6C */	b .L_80219F04
.L_8021999C:
/* 8021999C 002168DC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802199A0 002168E0  38 80 00 00 */	li r4, 0
/* 802199A4 002168E4  80 63 00 58 */	lwz r3, 0x58(r3)
/* 802199A8 002168E8  4B F3 3F 71 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 802199AC 002168EC  48 00 05 58 */	b .L_80219F04
.L_802199B0:
/* 802199B0 002168F0  3B 80 00 00 */	li r28, 0
/* 802199B4 002168F4  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 802199B8 002168F8  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802199BC 002168FC  93 81 00 48 */	stw r28, 0x48(r1)
/* 802199C0 00216900  38 04 BC 9C */	addi r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802199C4 00216904  28 1C 00 00 */	cmplwi r28, 0
/* 802199C8 00216908  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802199CC 0021690C  3B E0 00 00 */	li r31, 0
/* 802199D0 00216910  93 81 00 40 */	stw r28, 0x40(r1)
/* 802199D4 00216914  90 61 00 44 */	stw r3, 0x44(r1)
/* 802199D8 00216918  40 82 00 1C */	bne .L_802199F4
/* 802199DC 0021691C  81 83 00 00 */	lwz r12, 0(r3)
/* 802199E0 00216920  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802199E4 00216924  7D 89 03 A6 */	mtctr r12
/* 802199E8 00216928  4E 80 04 21 */	bctrl 
/* 802199EC 0021692C  90 61 00 40 */	stw r3, 0x40(r1)
/* 802199F0 00216930  48 00 01 98 */	b .L_80219B88
.L_802199F4:
/* 802199F4 00216934  81 83 00 00 */	lwz r12, 0(r3)
/* 802199F8 00216938  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802199FC 0021693C  7D 89 03 A6 */	mtctr r12
/* 80219A00 00216940  4E 80 04 21 */	bctrl 
/* 80219A04 00216944  90 61 00 40 */	stw r3, 0x40(r1)
/* 80219A08 00216948  48 00 00 58 */	b .L_80219A60
.L_80219A0C:
/* 80219A0C 0021694C  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219A10 00216950  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219A14 00216954  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A18 00216958  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219A1C 0021695C  7D 89 03 A6 */	mtctr r12
/* 80219A20 00216960  4E 80 04 21 */	bctrl 
/* 80219A24 00216964  7C 64 1B 78 */	mr r4, r3
/* 80219A28 00216968  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80219A2C 0021696C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A30 00216970  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219A34 00216974  7D 89 03 A6 */	mtctr r12
/* 80219A38 00216978  4E 80 04 21 */	bctrl 
/* 80219A3C 0021697C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219A40 00216980  40 82 01 48 */	bne .L_80219B88
/* 80219A44 00216984  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219A48 00216988  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219A4C 0021698C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A50 00216990  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219A54 00216994  7D 89 03 A6 */	mtctr r12
/* 80219A58 00216998  4E 80 04 21 */	bctrl 
/* 80219A5C 0021699C  90 61 00 40 */	stw r3, 0x40(r1)
.L_80219A60:
/* 80219A60 002169A0  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 80219A64 002169A4  38 61 00 3C */	addi r3, r1, 0x3c
/* 80219A68 002169A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219A6C 002169AC  7D 89 03 A6 */	mtctr r12
/* 80219A70 002169B0  4E 80 04 21 */	bctrl 
/* 80219A74 002169B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219A78 002169B8  41 82 FF 94 */	beq .L_80219A0C
/* 80219A7C 002169BC  48 00 01 0C */	b .L_80219B88
.L_80219A80:
/* 80219A80 002169C0  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219A84 002169C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A88 002169C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219A8C 002169CC  7D 89 03 A6 */	mtctr r12
/* 80219A90 002169D0  4E 80 04 21 */	bctrl 
/* 80219A94 002169D4  81 83 00 00 */	lwz r12, 0(r3)
/* 80219A98 002169D8  7C 7A 1B 78 */	mr r26, r3
/* 80219A9C 002169DC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80219AA0 002169E0  7D 89 03 A6 */	mtctr r12
/* 80219AA4 002169E4  4E 80 04 21 */	bctrl 
/* 80219AA8 002169E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219AAC 002169EC  41 82 00 20 */	beq .L_80219ACC
/* 80219AB0 002169F0  88 1A 02 B8 */	lbz r0, 0x2b8(r26)
/* 80219AB4 002169F4  2C 00 00 05 */	cmpwi r0, 5
/* 80219AB8 002169F8  40 80 00 14 */	bge .L_80219ACC
/* 80219ABC 002169FC  38 61 01 70 */	addi r3, r1, 0x170
/* 80219AC0 00216A00  3B FF 00 01 */	addi r31, r31, 1
/* 80219AC4 00216A04  7F 43 E1 2E */	stwx r26, r3, r28
/* 80219AC8 00216A08  3B 9C 00 04 */	addi r28, r28, 4
.L_80219ACC:
/* 80219ACC 00216A0C  80 01 00 48 */	lwz r0, 0x48(r1)
/* 80219AD0 00216A10  28 00 00 00 */	cmplwi r0, 0
/* 80219AD4 00216A14  40 82 00 24 */	bne .L_80219AF8
/* 80219AD8 00216A18  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219ADC 00216A1C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219AE0 00216A20  81 83 00 00 */	lwz r12, 0(r3)
/* 80219AE4 00216A24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219AE8 00216A28  7D 89 03 A6 */	mtctr r12
/* 80219AEC 00216A2C  4E 80 04 21 */	bctrl 
/* 80219AF0 00216A30  90 61 00 40 */	stw r3, 0x40(r1)
/* 80219AF4 00216A34  48 00 00 94 */	b .L_80219B88
.L_80219AF8:
/* 80219AF8 00216A38  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219AFC 00216A3C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219B00 00216A40  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B04 00216A44  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219B08 00216A48  7D 89 03 A6 */	mtctr r12
/* 80219B0C 00216A4C  4E 80 04 21 */	bctrl 
/* 80219B10 00216A50  90 61 00 40 */	stw r3, 0x40(r1)
/* 80219B14 00216A54  48 00 00 58 */	b .L_80219B6C
.L_80219B18:
/* 80219B18 00216A58  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219B1C 00216A5C  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219B20 00216A60  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B24 00216A64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219B28 00216A68  7D 89 03 A6 */	mtctr r12
/* 80219B2C 00216A6C  4E 80 04 21 */	bctrl 
/* 80219B30 00216A70  7C 64 1B 78 */	mr r4, r3
/* 80219B34 00216A74  80 61 00 48 */	lwz r3, 0x48(r1)
/* 80219B38 00216A78  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B3C 00216A7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219B40 00216A80  7D 89 03 A6 */	mtctr r12
/* 80219B44 00216A84  4E 80 04 21 */	bctrl 
/* 80219B48 00216A88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219B4C 00216A8C  40 82 00 3C */	bne .L_80219B88
/* 80219B50 00216A90  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219B54 00216A94  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219B58 00216A98  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B5C 00216A9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219B60 00216AA0  7D 89 03 A6 */	mtctr r12
/* 80219B64 00216AA4  4E 80 04 21 */	bctrl 
/* 80219B68 00216AA8  90 61 00 40 */	stw r3, 0x40(r1)
.L_80219B6C:
/* 80219B6C 00216AAC  81 81 00 3C */	lwz r12, 0x3c(r1)
/* 80219B70 00216AB0  38 61 00 3C */	addi r3, r1, 0x3c
/* 80219B74 00216AB4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219B78 00216AB8  7D 89 03 A6 */	mtctr r12
/* 80219B7C 00216ABC  4E 80 04 21 */	bctrl 
/* 80219B80 00216AC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219B84 00216AC4  41 82 FF 94 */	beq .L_80219B18
.L_80219B88:
/* 80219B88 00216AC8  80 61 00 44 */	lwz r3, 0x44(r1)
/* 80219B8C 00216ACC  81 83 00 00 */	lwz r12, 0(r3)
/* 80219B90 00216AD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219B94 00216AD4  7D 89 03 A6 */	mtctr r12
/* 80219B98 00216AD8  4E 80 04 21 */	bctrl 
/* 80219B9C 00216ADC  80 81 00 40 */	lwz r4, 0x40(r1)
/* 80219BA0 00216AE0  7C 04 18 40 */	cmplw r4, r3
/* 80219BA4 00216AE4  40 82 FE DC */	bne .L_80219A80
/* 80219BA8 00216AE8  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureKillArg@ha
/* 80219BAC 00216AEC  3C 60 80 4B */	lis r3, __vt__Q24Game11PikiKillArg@ha
/* 80219BB0 00216AF0  3B 21 01 70 */	addi r25, r1, 0x170
/* 80219BB4 00216AF4  3B 00 00 00 */	li r24, 0
/* 80219BB8 00216AF8  3B 44 A2 D0 */	addi r26, r4, __vt__Q24Game15CreatureKillArg@l
/* 80219BBC 00216AFC  3B 83 11 60 */	addi r28, r3, __vt__Q24Game11PikiKillArg@l
/* 80219BC0 00216B00  3B 60 00 01 */	li r27, 1
/* 80219BC4 00216B04  48 00 00 50 */	b .L_80219C14
.L_80219BC8:
/* 80219BC8 00216B08  80 79 00 00 */	lwz r3, 0(r25)
/* 80219BCC 00216B0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219BD0 00216B10  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80219BD4 00216B14  7D 89 03 A6 */	mtctr r12
/* 80219BD8 00216B18  4E 80 04 21 */	bctrl 
/* 80219BDC 00216B1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219BE0 00216B20  41 82 00 14 */	beq .L_80219BF4
/* 80219BE4 00216B24  38 60 00 00 */	li r3, 0
/* 80219BE8 00216B28  48 01 6B 31 */	bl inc__Q24Game8DeathMgrFi
/* 80219BEC 00216B2C  38 60 00 07 */	li r3, 7
/* 80219BF0 00216B30  48 01 6B 29 */	bl inc__Q24Game8DeathMgrFi
.L_80219BF4:
/* 80219BF4 00216B34  93 41 00 18 */	stw r26, 0x18(r1)
/* 80219BF8 00216B38  38 81 00 18 */	addi r4, r1, 0x18
/* 80219BFC 00216B3C  80 79 00 00 */	lwz r3, 0(r25)
/* 80219C00 00216B40  93 61 00 1C */	stw r27, 0x1c(r1)
/* 80219C04 00216B44  93 81 00 18 */	stw r28, 0x18(r1)
/* 80219C08 00216B48  4B F2 14 E9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 80219C0C 00216B4C  3B 39 00 04 */	addi r25, r25, 4
/* 80219C10 00216B50  3B 18 00 01 */	addi r24, r24, 1
.L_80219C14:
/* 80219C14 00216B54  7C 18 F8 00 */	cmpw r24, r31
/* 80219C18 00216B58  41 80 FF B0 */	blt .L_80219BC8
/* 80219C1C 00216B5C  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 80219C20 00216B60  38 00 00 02 */	li r0, 2
/* 80219C24 00216B64  7F A3 EB 78 */	mr r3, r29
/* 80219C28 00216B68  7F C4 F3 78 */	mr r4, r30
/* 80219C2C 00216B6C  88 E8 00 3C */	lbz r7, 0x3c(r8)
/* 80219C30 00216B70  38 C1 00 10 */	addi r6, r1, 0x10
/* 80219C34 00216B74  38 A0 00 08 */	li r5, 8
/* 80219C38 00216B78  54 E7 06 F2 */	rlwinm r7, r7, 0, 0x1b, 0x19
/* 80219C3C 00216B7C  98 E8 00 3C */	stb r7, 0x3c(r8)
/* 80219C40 00216B80  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80219C44 00216B84  81 9D 00 00 */	lwz r12, 0(r29)
/* 80219C48 00216B88  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219C4C 00216B8C  7D 89 03 A6 */	mtctr r12
/* 80219C50 00216B90  4E 80 04 21 */	bctrl 
/* 80219C54 00216B94  48 00 02 B0 */	b .L_80219F04
.L_80219C58:
/* 80219C58 00216B98  7F 23 CB 78 */	mr r3, r25
/* 80219C5C 00216B9C  38 9F 00 88 */	addi r4, r31, 0x88
/* 80219C60 00216BA0  48 21 7C 6D */	bl is__Q24Game11MovieConfigFPc
/* 80219C64 00216BA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219C68 00216BA8  41 82 00 48 */	beq .L_80219CB0
/* 80219C6C 00216BAC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80219C70 00216BB0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80219C74 00216BB4  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80219C78 00216BB8  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219C7C 00216BBC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80219C80 00216BC0  48 1E 3F 25 */	bl close_GameOver__Q26Screen9Game2DMgrFv
/* 80219C84 00216BC4  38 00 00 03 */	li r0, 3
/* 80219C88 00216BC8  7F A3 EB 78 */	mr r3, r29
/* 80219C8C 00216BCC  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80219C90 00216BD0  7F C4 F3 78 */	mr r4, r30
/* 80219C94 00216BD4  38 C1 00 0C */	addi r6, r1, 0xc
/* 80219C98 00216BD8  38 A0 00 08 */	li r5, 8
/* 80219C9C 00216BDC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80219CA0 00216BE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219CA4 00216BE4  7D 89 03 A6 */	mtctr r12
/* 80219CA8 00216BE8  4E 80 04 21 */	bctrl 
/* 80219CAC 00216BEC  48 00 02 58 */	b .L_80219F04
.L_80219CB0:
/* 80219CB0 00216BF0  7F 23 CB 78 */	mr r3, r25
/* 80219CB4 00216BF4  38 9F 00 A4 */	addi r4, r31, 0xa4
/* 80219CB8 00216BF8  48 21 7C 15 */	bl is__Q24Game11MovieConfigFPc
/* 80219CBC 00216BFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219CC0 00216C00  41 82 02 44 */	beq .L_80219F04
/* 80219CC4 00216C04  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80219CC8 00216C08  48 21 32 C1 */	bl clearSuspendedDemo__Q24Game11MoviePlayerFv
/* 80219CCC 00216C0C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80219CD0 00216C10  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80219CD4 00216C14  54 00 06 F2 */	rlwinm r0, r0, 0, 0x1b, 0x19
/* 80219CD8 00216C18  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80219CDC 00216C1C  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 80219CE0 00216C20  28 03 00 00 */	cmplwi r3, 0
/* 80219CE4 00216C24  41 82 00 08 */	beq .L_80219CEC
/* 80219CE8 00216C28  38 63 00 30 */	addi r3, r3, 0x30
.L_80219CEC:
/* 80219CEC 00216C2C  38 00 00 00 */	li r0, 0
/* 80219CF0 00216C30  3C 80 80 4B */	lis r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
/* 80219CF4 00216C34  38 84 05 A4 */	addi r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
/* 80219CF8 00216C38  90 01 00 38 */	stw r0, 0x38(r1)
/* 80219CFC 00216C3C  28 00 00 00 */	cmplwi r0, 0
/* 80219D00 00216C40  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80219D04 00216C44  90 01 00 30 */	stw r0, 0x30(r1)
/* 80219D08 00216C48  90 61 00 34 */	stw r3, 0x34(r1)
/* 80219D0C 00216C4C  40 82 00 1C */	bne .L_80219D28
/* 80219D10 00216C50  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D14 00216C54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219D18 00216C58  7D 89 03 A6 */	mtctr r12
/* 80219D1C 00216C5C  4E 80 04 21 */	bctrl 
/* 80219D20 00216C60  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219D24 00216C64  48 00 01 88 */	b .L_80219EAC
.L_80219D28:
/* 80219D28 00216C68  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D2C 00216C6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80219D30 00216C70  7D 89 03 A6 */	mtctr r12
/* 80219D34 00216C74  4E 80 04 21 */	bctrl 
/* 80219D38 00216C78  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219D3C 00216C7C  48 00 00 58 */	b .L_80219D94
.L_80219D40:
/* 80219D40 00216C80  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219D44 00216C84  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219D48 00216C88  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D4C 00216C8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219D50 00216C90  7D 89 03 A6 */	mtctr r12
/* 80219D54 00216C94  4E 80 04 21 */	bctrl 
/* 80219D58 00216C98  7C 64 1B 78 */	mr r4, r3
/* 80219D5C 00216C9C  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80219D60 00216CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D64 00216CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219D68 00216CA8  7D 89 03 A6 */	mtctr r12
/* 80219D6C 00216CAC  4E 80 04 21 */	bctrl 
/* 80219D70 00216CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219D74 00216CB4  40 82 01 38 */	bne .L_80219EAC
/* 80219D78 00216CB8  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219D7C 00216CBC  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219D80 00216CC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219D84 00216CC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219D88 00216CC8  7D 89 03 A6 */	mtctr r12
/* 80219D8C 00216CCC  4E 80 04 21 */	bctrl 
/* 80219D90 00216CD0  90 61 00 30 */	stw r3, 0x30(r1)
.L_80219D94:
/* 80219D94 00216CD4  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 80219D98 00216CD8  38 61 00 2C */	addi r3, r1, 0x2c
/* 80219D9C 00216CDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219DA0 00216CE0  7D 89 03 A6 */	mtctr r12
/* 80219DA4 00216CE4  4E 80 04 21 */	bctrl 
/* 80219DA8 00216CE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219DAC 00216CEC  41 82 FF 94 */	beq .L_80219D40
/* 80219DB0 00216CF0  48 00 00 FC */	b .L_80219EAC
.L_80219DB4:
/* 80219DB4 00216CF4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219DB8 00216CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80219DBC 00216CFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219DC0 00216D00  7D 89 03 A6 */	mtctr r12
/* 80219DC4 00216D04  4E 80 04 21 */	bctrl 
/* 80219DC8 00216D08  81 83 00 00 */	lwz r12, 0(r3)
/* 80219DCC 00216D0C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80219DD0 00216D10  7D 89 03 A6 */	mtctr r12
/* 80219DD4 00216D14  4E 80 04 21 */	bctrl 
/* 80219DD8 00216D18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219DDC 00216D1C  41 82 00 14 */	beq .L_80219DF0
/* 80219DE0 00216D20  38 60 00 00 */	li r3, 0
/* 80219DE4 00216D24  48 01 69 35 */	bl inc__Q24Game8DeathMgrFi
/* 80219DE8 00216D28  38 60 00 07 */	li r3, 7
/* 80219DEC 00216D2C  48 01 69 2D */	bl inc__Q24Game8DeathMgrFi
.L_80219DF0:
/* 80219DF0 00216D30  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80219DF4 00216D34  28 00 00 00 */	cmplwi r0, 0
/* 80219DF8 00216D38  40 82 00 24 */	bne .L_80219E1C
/* 80219DFC 00216D3C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E00 00216D40  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E04 00216D44  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E08 00216D48  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219E0C 00216D4C  7D 89 03 A6 */	mtctr r12
/* 80219E10 00216D50  4E 80 04 21 */	bctrl 
/* 80219E14 00216D54  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219E18 00216D58  48 00 00 94 */	b .L_80219EAC
.L_80219E1C:
/* 80219E1C 00216D5C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E20 00216D60  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E24 00216D64  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E28 00216D68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219E2C 00216D6C  7D 89 03 A6 */	mtctr r12
/* 80219E30 00216D70  4E 80 04 21 */	bctrl 
/* 80219E34 00216D74  90 61 00 30 */	stw r3, 0x30(r1)
/* 80219E38 00216D78  48 00 00 58 */	b .L_80219E90
.L_80219E3C:
/* 80219E3C 00216D7C  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E40 00216D80  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E44 00216D84  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E48 00216D88  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80219E4C 00216D8C  7D 89 03 A6 */	mtctr r12
/* 80219E50 00216D90  4E 80 04 21 */	bctrl 
/* 80219E54 00216D94  7C 64 1B 78 */	mr r4, r3
/* 80219E58 00216D98  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80219E5C 00216D9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E60 00216DA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80219E64 00216DA4  7D 89 03 A6 */	mtctr r12
/* 80219E68 00216DA8  4E 80 04 21 */	bctrl 
/* 80219E6C 00216DAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219E70 00216DB0  40 82 00 3C */	bne .L_80219EAC
/* 80219E74 00216DB4  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219E78 00216DB8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219E7C 00216DBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80219E80 00216DC0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80219E84 00216DC4  7D 89 03 A6 */	mtctr r12
/* 80219E88 00216DC8  4E 80 04 21 */	bctrl 
/* 80219E8C 00216DCC  90 61 00 30 */	stw r3, 0x30(r1)
.L_80219E90:
/* 80219E90 00216DD0  81 81 00 2C */	lwz r12, 0x2c(r1)
/* 80219E94 00216DD4  38 61 00 2C */	addi r3, r1, 0x2c
/* 80219E98 00216DD8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80219E9C 00216DDC  7D 89 03 A6 */	mtctr r12
/* 80219EA0 00216DE0  4E 80 04 21 */	bctrl 
/* 80219EA4 00216DE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80219EA8 00216DE8  41 82 FF 94 */	beq .L_80219E3C
.L_80219EAC:
/* 80219EAC 00216DEC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 80219EB0 00216DF0  81 83 00 00 */	lwz r12, 0(r3)
/* 80219EB4 00216DF4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219EB8 00216DF8  7D 89 03 A6 */	mtctr r12
/* 80219EBC 00216DFC  4E 80 04 21 */	bctrl 
/* 80219EC0 00216E00  80 81 00 30 */	lwz r4, 0x30(r1)
/* 80219EC4 00216E04  7C 04 18 40 */	cmplw r4, r3
/* 80219EC8 00216E08  40 82 FE EC */	bne .L_80219DB4
/* 80219ECC 00216E0C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80219ED0 00216E10  38 80 00 01 */	li r4, 1
/* 80219ED4 00216E14  38 A0 00 01 */	li r5, 1
/* 80219ED8 00216E18  4B F4 6B A1 */	bl caveSaveAllPikmins__Q24Game7PikiMgrFbb
/* 80219EDC 00216E1C  38 00 00 04 */	li r0, 4
/* 80219EE0 00216E20  7F A3 EB 78 */	mr r3, r29
/* 80219EE4 00216E24  B0 01 00 08 */	sth r0, 8(r1)
/* 80219EE8 00216E28  7F C4 F3 78 */	mr r4, r30
/* 80219EEC 00216E2C  38 C1 00 08 */	addi r6, r1, 8
/* 80219EF0 00216E30  38 A0 00 08 */	li r5, 8
/* 80219EF4 00216E34  81 9D 00 00 */	lwz r12, 0(r29)
/* 80219EF8 00216E38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80219EFC 00216E3C  7D 89 03 A6 */	mtctr r12
/* 80219F00 00216E40  4E 80 04 21 */	bctrl 
.L_80219F04:
/* 80219F04 00216E44  E3 E1 03 28 */	psq_l f31, 808(r1), 0, qr0
/* 80219F08 00216E48  CB E1 03 20 */	lfd f31, 0x320(r1)
/* 80219F0C 00216E4C  BB 01 03 00 */	lmw r24, 0x300(r1)
/* 80219F10 00216E50  80 01 03 34 */	lwz r0, 0x334(r1)
/* 80219F14 00216E54  7C 08 03 A6 */	mtlr r0
/* 80219F18 00216E58  38 21 03 30 */	addi r1, r1, 0x330
/* 80219F1C 00216E5C  4E 80 00 20 */	blr 
.endif

__sinit_singleGS_CaveGame_cpp: # static initializer
/* 80219F20 00216E60  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80219F24 00216E64  38 00 FF FF */	li r0, -1
/* 80219F28 00216E68  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80219F2C 00216E6C  3C 60 80 4C */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80219F30 00216E70  90 0D 95 70 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80219F34 00216E74  D4 03 05 F0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80219F38 00216E78  D0 0D 95 74 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80219F3C 00216E7C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80219F40 00216E80  D0 03 00 08 */	stfs f0, 8(r3)
/* 80219F44 00216E84  4E 80 00 20 */	blr 
