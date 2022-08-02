.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_vsGameSection_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8047FF98
lbl_8047FF98:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x56734761
	.4byte 0x6D655365
	.4byte 0x6374696F
	.4byte 0x6E000000
	.4byte 0x50534761
	.4byte 0x6D652E68
	.4byte 0x00000000
.global lbl_8047FFC0
lbl_8047FFC0:
	.asciz "P2Assert"
	.skip 3
	.4byte 0x50535363
	.4byte 0x656E652E
	.4byte 0x68000000
.global lbl_8047FFD8
lbl_8047FFD8:
	.4byte 0x63617665
	.4byte 0x696E666F
	.4byte 0x2E747874
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global lbl_8047FFF4
lbl_8047FFF4:
	.4byte 0x76734761
	.4byte 0x6D655365
	.4byte 0x6374696F
	.4byte 0x6E2E6370
	.4byte 0x70000000
.global lbl_80480008
lbl_80480008:
	.4byte 0x7A616E6E
	.4byte 0x656E6E0A
	.4byte 0x00000000
.global lbl_80480014
lbl_80480014:
	.4byte 0x2F757365
	.4byte 0x722F4D61
	.4byte 0x746F6261
	.4byte 0x2F636861
	.4byte 0x6C6C656E
	.4byte 0x67652F6B
	.4byte 0x6665732D
	.4byte 0x73746167
	.4byte 0x65732E74
	.4byte 0x78740000
.global lbl_8048003C
lbl_8048003C:
	.4byte 0x2F757365
	.4byte 0x722F4D61
	.4byte 0x746F6261
	.4byte 0x2F636861
	.4byte 0x6C6C656E
	.4byte 0x67652F73
	.4byte 0x74616765
	.4byte 0x732E7478
	.4byte 0x74000000
.global lbl_80480060
lbl_80480060:
	.4byte 0x2F757365
	.4byte 0x722F6162
	.4byte 0x652F7673
	.4byte 0x2F737461
	.4byte 0x6765732E
	.4byte 0x74787400
.global lbl_80480078
lbl_80480078:
	.4byte 0x6F702D63
	.4byte 0x2D6D6F72
	.4byte 0x65000000
	.4byte 0x6D6F7265
	.4byte 0x2D796573
	.4byte 0x00000000
	.4byte 0x6D6F7265
	.4byte 0x2D7A656E
	.4byte 0x6B616900
	.4byte 0x7330435F
	.4byte 0x63765F65
	.4byte 0x73636170
	.4byte 0x65000000
.global lbl_804800AC
lbl_804800AC:
	.4byte 0x7330335F
	.4byte 0x6F72696D
	.4byte 0x61646F77
	.4byte 0x6E000000
.global lbl_804800BC
lbl_804800BC:
	.4byte 0x63726561
	.4byte 0x74654661
	.4byte 0x6C6C5069
	.4byte 0x6B6D696E
	.4byte 0x73000000
.global lbl_804800D0
lbl_804800D0:
	.4byte 0x6E6F2073
	.4byte 0x70616365
	.4byte 0x20666F72
	.4byte 0x206E6577
	.4byte 0x2079656C
	.4byte 0x6C6F770A
	.4byte 0x00000000
.global lbl_804800EC
lbl_804800EC:
	.4byte 0x6E6F2065
	.4byte 0x6E747279
	.4byte 0x20666F72
	.4byte 0x2070656C
	.4byte 0x6C65740A
	.4byte 0x00000000
	.4byte 0x62697274
	.4byte 0x68206661
	.4byte 0x696C6564
	.4byte 0x20210A00
	.4byte 0x6F6F7375
	.4byte 0x67692025
	.4byte 0x640A0000
	.4byte 0x25642070
	.4byte 0x6C617965
	.4byte 0x7249440A
	.4byte 0x00000000
	.4byte 0x25642074
	.4byte 0x79706549
	.4byte 0x440A0000
	.4byte 0x41726745
	.4byte 0x6E656D79
	.4byte 0x54797065
	.4byte 0x00000000
	.4byte 0x50696B69
	.4byte 0x496E6974
	.4byte 0x41726700
	.4byte 0x50656C6C
	.4byte 0x6574496E
	.4byte 0x69744172
	.4byte 0x67000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global lbl_804B60E8
lbl_804B60E8:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.global __vt__Q24Game20GameMessageVsUseCard
__vt__Q24Game20GameMessageVsUseCard:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game20GameMessageVsUseCardFPQ24Game13VsGameSection
.global __vt__Q24Game20GameMessageVsGotCard
__vt__Q24Game20GameMessageVsGotCard:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game20GameMessageVsGotCardFPQ24Game13VsGameSection
.global __vt__Q24Game23GameMessageVsPikminDead
__vt__Q24Game23GameMessageVsPikminDead:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game23GameMessageVsPikminDeadFPQ24Game13VsGameSection
.global __vt__Q24Game30GameMessageVsBirthTekiTreasure
__vt__Q24Game30GameMessageVsBirthTekiTreasure:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game30GameMessageVsBirthTekiTreasureFPQ24Game13VsGameSection
.global __vt__Q24Game21GameMessagePelletDead
__vt__Q24Game21GameMessagePelletDead:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game21GameMessagePelletDeadFPQ24Game13VsGameSection
.global __vt__Q24Game21GameMessagePelletBorn
__vt__Q24Game21GameMessagePelletBorn:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game21GameMessagePelletBornFPQ24Game13VsGameSection
.global __vt__Q24Game21GameMessageVsAddEnemy
__vt__Q24Game21GameMessageVsAddEnemy:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game21GameMessageVsAddEnemyFPQ24Game13VsGameSection
.global __vt__Q24Game23GameMessageVsGetOtakara
__vt__Q24Game23GameMessageVsGetOtakara:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game23GameMessageVsGetOtakaraFPQ24Game13VsGameSection
.global __vt__Q24Game27GameMessageVsRedOrSuckStart
__vt__Q24Game27GameMessageVsRedOrSuckStart:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game27GameMessageVsRedOrSuckStartFPQ24Game13VsGameSection
.global __vt__Q24Game27GameMessageVsBattleFinished
__vt__Q24Game27GameMessageVsBattleFinished:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game27GameMessageVsBattleFinishedFPQ24Game13VsGameSection
.global __vt__Q24Game22GameMessageVsGetDoping
__vt__Q24Game22GameMessageVsGetDoping:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
	.4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
	.4byte actVs__Q24Game22GameMessageVsGetDopingFPQ24Game13VsGameSection
.global "__vt__Q24Game36StateMachine<Q24Game13VsGameSection>"
"__vt__Q24Game36StateMachine<Q24Game13VsGameSection>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
	.4byte "exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte "transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
.global __vt__Q24Game13VsGameSection
__vt__Q24Game13VsGameSection:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game13VsGameSectionFv
	.4byte run__7SectionFv
	.4byte update__7SectionFv
	.4byte draw__7SectionFR8Graphics
	.4byte init__Q24Game15BaseGameSectionFv
	.4byte drawInit__7SectionFR8Graphics
	.4byte drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode
	.4byte doExit__7SectionFv
	.4byte forceFinish__Q24Game15BaseGameSectionFv
	.4byte forceReset__7SectionFv
	.4byte getCurrentSection__7SectionFv
	.4byte doLoadingStart__7SectionFv
	.4byte doLoading__7SectionFv
	.4byte doUpdate__Q24Game13VsGameSectionFv
	.4byte doDraw__Q24Game13VsGameSectionFR8Graphics
	.4byte isFinishable__7SectionFv
	.4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
	.4byte refreshHIO__Q24Game14BaseHIOSectionFv
	.4byte sendMessage__Q24Game13VsGameSectionFRQ24Game11GameMessage
	.4byte pre2dDraw__Q24Game13VsGameSectionFR8Graphics
	.4byte getCurrFloor__Q24Game13VsGameSectionFv
	.4byte isDevelopSection__Q24Game15BaseGameSectionFv
	.4byte addChallengeScore__Q24Game13VsGameSectionFi
	.4byte startMainBgm__Q24Game13VsGameSectionFv
	.4byte section_fadeout__Q24Game13VsGameSectionFv
	.4byte goNextFloor__Q24Game13VsGameSectionFPQ34Game8ItemHole4Item
	.4byte goCave__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Item
	.4byte goMainMap__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4Item
	.4byte getCaveID__Q24Game15BaseGameSectionFv
	.4byte getCurrentCourseInfo__Q24Game15BaseGameSectionFv
	.4byte challengeDisablePelplant__Q24Game13VsGameSectionFv
	.4byte getCaveFilename__Q24Game13VsGameSectionFv
	.4byte getEditorFilename__Q24Game13VsGameSectionFv
	.4byte getVsEditNumber__Q24Game13VsGameSectionFv
	.4byte openContainerWindow__Q24Game15BaseGameSectionFv
	.4byte closeContainerWindow__Q24Game15BaseGameSectionFv
	.4byte playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature
	.4byte playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon
	.4byte playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki
	.4byte enableTimer__Q24Game15BaseGameSectionFfUl
	.4byte disableTimer__Q24Game15BaseGameSectionFUl
	.4byte getTimerType__Q24Game15BaseGameSectionFv
	.4byte onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q24Game15BaseGameSectionFi
	.4byte startFadeout__Q24Game15BaseGameSectionFf
	.4byte startFadein__Q24Game15BaseGameSectionFf
	.4byte startFadeoutin__Q24Game15BaseGameSectionFf
	.4byte startFadeblack__Q24Game15BaseGameSectionFv
	.4byte startFadewhite__Q24Game15BaseGameSectionFv
	.4byte gmOrimaDown__Q24Game13VsGameSectionFi
	.4byte gmPikminZero__Q24Game13VsGameSectionFv
	.4byte openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi
	.4byte openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller
	.4byte openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
	.4byte on_setCamController__Q24Game15BaseGameSectionFi
	.4byte onTogglePlayer__Q24Game15BaseGameSectionFv
	.4byte onPlayerJoin__Q24Game15BaseGameSectionFv
	.4byte onInit__Q24Game13VsGameSectionFv
	.4byte onUpdate__Q24Game15BaseGameSectionFv
	.4byte initJ3D__Q24Game15BaseGameSectionFv
	.4byte initViewports__Q24Game15BaseGameSectionFR8Graphics
	.4byte initResources__Q24Game15BaseGameSectionFv
	.4byte initGenerators__Q24Game15BaseGameSectionFv
	.4byte initLights__Q24Game15BaseGameSectionFv
	.4byte draw3D__Q24Game15BaseGameSectionFR8Graphics
	.4byte draw2D__Q24Game15BaseGameSectionFR8Graphics
	.4byte drawParticle__Q24Game15BaseGameSectionFR8Graphicsi
	.4byte draw_Ogawa2D__Q24Game15BaseGameSectionFR8Graphics
	.4byte do_drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
	.4byte onSetupFloatMemory__Q24Game13VsGameSectionFv
	.4byte postSetupFloatMemory__Q24Game13VsGameSectionFv
	.4byte onSetSoundScene__Q24Game13VsGameSectionFv
	.4byte onStartHeap__Q24Game15BaseGameSectionFv
	.4byte onClearHeap__Q24Game13VsGameSectionFv
	.4byte player2enabled__Q24Game13VsGameSectionFv
.global __vt__Q34Game6VsGame3FSM
__vt__Q34Game6VsGame3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game6VsGame3FSMFPQ24Game13VsGameSection
	.4byte "start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
	.4byte "exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
	.4byte transit__Q34Game6VsGame3FSMFPQ24Game13VsGameSectioniPQ24Game8StateArg

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global lbl_80515A88
lbl_80515A88:
	.skip 0x4
.global lbl_80515A8C
lbl_80515A8C:
	.skip 0x4
.global mRedWinCount__Q24Game13VsGameSection
mRedWinCount__Q24Game13VsGameSection:
	.skip 0x4
.global mBlueWinCount__Q24Game13VsGameSection
mBlueWinCount__Q24Game13VsGameSection:
	.skip 0x4
.global mDrawCount__Q24Game13VsGameSection
mDrawCount__Q24Game13VsGameSection:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_805194A8
lbl_805194A8:
	.4byte 0x00000000
.global lbl_805194AC
lbl_805194AC:
	.float 0.5
.global lbl_805194B0
lbl_805194B0:
	.4byte 0x72616E64
	.4byte 0x6F6D0000
.global lbl_805194B8
lbl_805194B8:
	.float 1.0
	.4byte 0x00000000
.global lbl_805194C0
lbl_805194C0:
	.4byte 0x40490000
	.4byte 0x00000000
.global lbl_805194C8
lbl_805194C8:
	.4byte 0x43300000
	.4byte 0x80000000
.global lbl_805194D0
lbl_805194D0:
	.4byte 0x6F702D6B
	.4byte 0x6B000000
.global lbl_805194D8
lbl_805194D8:
	.4byte 0x6D6F7265
	.4byte 0x2D6E6F00
.global lbl_805194E0
lbl_805194E0:
	.4byte 0x6B6B2D79
	.4byte 0x65730000
.global lbl_805194E8
lbl_805194E8:
	.4byte 0x6B6B2D6E
	.4byte 0x6F000000
.global lbl_805194F0
lbl_805194F0:
	.4byte 0x47000000
.global lbl_805194F4
lbl_805194F4:
	.4byte 0x41700000
.global lbl_805194F8
lbl_805194F8:
	.4byte 0x41F00000
.global lbl_805194FC
lbl_805194FC:
	.4byte 0x40C90FDB
.global lbl_80519500
lbl_80519500:
	.4byte 0x44408000
.global lbl_80519504
lbl_80519504:
	.4byte 0x44548000
.global lbl_80519508
lbl_80519508:
	.4byte 0x42F00000
.global lbl_8051950C
lbl_8051950C:
	.4byte 0x43A2F983
.global lbl_80519510
lbl_80519510:
	.4byte 0xC3A2F983
.global lbl_80519514
lbl_80519514:
	.4byte 0x4528C000
.global lbl_80519518
lbl_80519518:
	.4byte 0x43160000
.global lbl_8051951C
lbl_8051951C:
	.4byte 0x41200000
.global lbl_80519520
lbl_80519520:
	.4byte 0x41A00000
.global lbl_80519524
lbl_80519524:
	.4byte 0x3E4CCCCD
.global lbl_80519528
lbl_80519528:
	.4byte 0x3F4CCCCD
.global lbl_8051952C
lbl_8051952C:
	.float 0.1
.global lbl_80519530
lbl_80519530:
	.4byte 0xBDCCCCCD
.global lbl_80519534
lbl_80519534:
	.4byte 0xBF000000
.global lbl_80519538
lbl_80519538:
	.4byte 0xBF4CCCCD
.global lbl_8051953C
lbl_8051953C:
	.4byte 0x3D50E560
.global lbl_80519540
lbl_80519540:
	.4byte 0x3C23D70A
.global lbl_80519544
lbl_80519544:
	.4byte 0x41C80000
.global lbl_80519548
lbl_80519548:
	.4byte 0x3ECCCCCD
.global lbl_8051954C
lbl_8051954C:
	.4byte 0x3F19999A
.global lbl_80519550
lbl_80519550:
	.float 0.3
.global lbl_80519554
lbl_80519554:
	.4byte 0x3F0CCCCD
.global lbl_80519558
lbl_80519558:
	.4byte 0x3F666666
.global lbl_8051955C
lbl_8051955C:
	.4byte 0x40000000
.global lbl_80519560
lbl_80519560:
	.4byte 0x40400000
	.4byte 0x00000000
.global lbl_80519568
lbl_80519568:
	.4byte 0x43300000
	.4byte 0x00000000
.global lbl_80519570
lbl_80519570:
	.4byte 0x430C0000
.global lbl_80519574
lbl_80519574:
	.4byte 0xC1200000
.global lbl_80519578
lbl_80519578:
	.4byte 0xBF800000
.global lbl_8051957C
lbl_8051957C:
	.4byte 0x40800000
.global lbl_80519580
lbl_80519580:
	.float 0.25
	.4byte 0x00000000

.section .sbss2, "", @nobits # 0x80520E40 - 0x80520ED8
.global lbl_80520E68
lbl_80520E68:
	.skip 0x4
.global lbl_80520E6C
lbl_80520E6C:
	.skip 0x4
.global lbl_80520E70
lbl_80520E70:
	.skip 0x4
.global lbl_80520E74
lbl_80520E74:
	.skip 0x4
.global lbl_80520E78
lbl_80520E78:
	.skip 0x4
.global lbl_80520E7C
lbl_80520E7C:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global init__Q34Game6VsGame3FSMFPQ24Game13VsGameSection
init__Q34Game6VsGame3FSMFPQ24Game13VsGameSection:
/* 801C0DF8 001BDD38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0DFC 001BDD3C  7C 08 02 A6 */	mflr r0
/* 801C0E00 001BDD40  38 80 00 05 */	li r4, 5
/* 801C0E04 001BDD44  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0E08 001BDD48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C0E0C 001BDD4C  7C 7F 1B 78 */	mr r31, r3
/* 801C0E10 001BDD50  48 00 3B D5 */	bl "create__Q24Game36StateMachine<Q24Game13VsGameSection>Fi"
/* 801C0E14 001BDD54  38 60 00 44 */	li r3, 0x44
/* 801C0E18 001BDD58  4B E6 30 8D */	bl __nw__FUl
/* 801C0E1C 001BDD5C  7C 64 1B 79 */	or. r4, r3, r3
/* 801C0E20 001BDD60  41 82 00 0C */	beq lbl_801C0E2C
/* 801C0E24 001BDD64  48 06 75 05 */	bl __ct__Q34Game6VsGame10TitleStateFv
/* 801C0E28 001BDD68  7C 64 1B 78 */	mr r4, r3
lbl_801C0E2C:
/* 801C0E2C 001BDD6C  7F E3 FB 78 */	mr r3, r31
/* 801C0E30 001BDD70  48 00 3C BD */	bl "registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
/* 801C0E34 001BDD74  38 60 00 A4 */	li r3, 0xa4
/* 801C0E38 001BDD78  4B E6 30 6D */	bl __nw__FUl
/* 801C0E3C 001BDD7C  7C 64 1B 79 */	or. r4, r3, r3
/* 801C0E40 001BDD80  41 82 00 0C */	beq lbl_801C0E4C
/* 801C0E44 001BDD84  48 06 C2 A5 */	bl __ct__Q34Game6VsGame9LoadStateFv
/* 801C0E48 001BDD88  7C 64 1B 78 */	mr r4, r3
lbl_801C0E4C:
/* 801C0E4C 001BDD8C  7F E3 FB 78 */	mr r3, r31
/* 801C0E50 001BDD90  48 00 3C 9D */	bl "registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
/* 801C0E54 001BDD94  38 60 00 28 */	li r3, 0x28
/* 801C0E58 001BDD98  4B E6 30 4D */	bl __nw__FUl
/* 801C0E5C 001BDD9C  7C 64 1B 79 */	or. r4, r3, r3
/* 801C0E60 001BDDA0  41 82 00 0C */	beq lbl_801C0E6C
/* 801C0E64 001BDDA4  48 06 84 41 */	bl __ct__Q34Game6VsGame9GameStateFv
/* 801C0E68 001BDDA8  7C 64 1B 78 */	mr r4, r3
lbl_801C0E6C:
/* 801C0E6C 001BDDAC  7F E3 FB 78 */	mr r3, r31
/* 801C0E70 001BDDB0  48 00 3C 7D */	bl "registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
/* 801C0E74 001BDDB4  38 60 00 28 */	li r3, 0x28
/* 801C0E78 001BDDB8  4B E6 30 2D */	bl __nw__FUl
/* 801C0E7C 001BDDBC  7C 64 1B 79 */	or. r4, r3, r3
/* 801C0E80 001BDDC0  41 82 00 0C */	beq lbl_801C0E8C
/* 801C0E84 001BDDC4  48 06 DC 11 */	bl __ct__Q34Game6VsGame7VSStateFv
/* 801C0E88 001BDDC8  7C 64 1B 78 */	mr r4, r3
lbl_801C0E8C:
/* 801C0E8C 001BDDCC  7F E3 FB 78 */	mr r3, r31
/* 801C0E90 001BDDD0  48 00 3C 5D */	bl "registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
/* 801C0E94 001BDDD4  38 60 00 3C */	li r3, 0x3c
/* 801C0E98 001BDDD8  4B E6 30 0D */	bl __nw__FUl
/* 801C0E9C 001BDDDC  7C 64 1B 79 */	or. r4, r3, r3
/* 801C0EA0 001BDDE0  41 82 00 0C */	beq lbl_801C0EAC
/* 801C0EA4 001BDDE4  48 06 B9 51 */	bl __ct__Q34Game6VsGame11ResultStateFv
/* 801C0EA8 001BDDE8  7C 64 1B 78 */	mr r4, r3
lbl_801C0EAC:
/* 801C0EAC 001BDDEC  7F E3 FB 78 */	mr r3, r31
/* 801C0EB0 001BDDF0  48 00 3C 3D */	bl "registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
/* 801C0EB4 001BDDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0EB8 001BDDF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C0EBC 001BDDFC  7C 08 03 A6 */	mtlr r0
/* 801C0EC0 001BDE00  38 21 00 10 */	addi r1, r1, 0x10
/* 801C0EC4 001BDE04  4E 80 00 20 */	blr 

.global draw__Q34Game6VsGame5StateFPQ24Game13VsGameSectionR8Graphics
draw__Q34Game6VsGame5StateFPQ24Game13VsGameSectionR8Graphics:
/* 801C0EC8 001BDE08  4E 80 00 20 */	blr 

.global transit__Q34Game6VsGame3FSMFPQ24Game13VsGameSectioniPQ24Game8StateArg
transit__Q34Game6VsGame3FSMFPQ24Game13VsGameSectioniPQ24Game8StateArg:
/* 801C0ECC 001BDE0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0ED0 001BDE10  7C 08 02 A6 */	mflr r0
/* 801C0ED4 001BDE14  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0ED8 001BDE18  48 00 3B 71 */	bl "transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
/* 801C0EDC 001BDE1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0EE0 001BDE20  7C 08 03 A6 */	mtlr r0
/* 801C0EE4 001BDE24  38 21 00 10 */	addi r1, r1, 0x10
/* 801C0EE8 001BDE28  4E 80 00 20 */	blr 

.if version == 1
.global __ct__Q24Game13VsGameSectionFP7JKRHeapb
__ct__Q24Game13VsGameSectionFP7JKRHeapb:
/* 801C0EEC 001BDE2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0EF0 001BDE30  7C 08 02 A6 */	mflr r0
/* 801C0EF4 001BDE34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0EF8 001BDE38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C0EFC 001BDE3C  7C BF 2B 78 */	mr r31, r5
/* 801C0F00 001BDE40  93 C1 00 08 */	stw r30, 8(r1)
/* 801C0F04 001BDE44  7C 7E 1B 78 */	mr r30, r3
/* 801C0F08 001BDE48  4B F8 9E 99 */	bl __ct__Q24Game15BaseGameSectionFP7JKRHeap
/* 801C0F0C 001BDE4C  3C 80 80 4B */	lis r4, __vt__Q24Game13VsGameSection@ha
/* 801C0F10 001BDE50  38 7E 01 84 */	addi r3, r30, 0x1a8
/* 801C0F14 001BDE54  38 04 61 E8 */	addi r0, r4, __vt__Q24Game13VsGameSection@l
/* 801C0F18 001BDE58  90 1E 00 00 */	stw r0, 0(r30)
/* 801C0F1C 001BDE5C  48 26 38 FD */	bl __ct__16DvdThreadCommandFv
/* 801C0F20 001BDE60  38 00 00 00 */	li r0, 0
/* 801C0F24 001BDE64  38 7E 02 14 */	addi r3, r30, 0x238
/* 801C0F28 001BDE68  98 1E 01 F8 */	stb r0, 0x21c(r30)
/* 801C0F2C 001BDE6C  48 03 03 15 */	bl __ct__Q24Game13PikiContainerFv
/* 801C0F30 001BDE70  38 7E 02 1C */	addi r3, r30, 0x240
/* 801C0F34 001BDE74  48 03 03 0D */	bl __ct__Q24Game13PikiContainerFv
/* 801C0F38 001BDE78  9B FE 01 74 */	stb r31, 0x198(r30)
/* 801C0F3C 001BDE7C  38 00 00 01 */	li r0, 1
/* 801C0F40 001BDE80  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 801C0F44 001BDE84  38 C0 00 00 */	li r6, 0
/* 801C0F48 001BDE88  98 1E 02 05 */	stb r0, 0x229(r30)
/* 801C0F4C 001BDE8C  38 A0 FF FF */	li r5, -1
/* 801C0F50 001BDE90  38 80 00 02 */	li r4, 2
/* 801C0F54 001BDE94  38 00 FF FE */	li r0, -2
/* 801C0F58 001BDE98  90 DE 03 38 */	stw r6, 0x35c(r30)
/* 801C0F5C 001BDE9C  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 801C0F60 001BDEA0  90 DE 03 40 */	stw r6, 0x364(r30)
/* 801C0F64 001BDEA4  90 BE 03 4C */	stw r5, 0x370(r30)
/* 801C0F68 001BDEA8  90 9E 03 48 */	stw r4, 0x36c(r30)
/* 801C0F6C 001BDEAC  90 9E 03 44 */	stw r4, 0x368(r30)
/* 801C0F70 001BDEB0  90 DE 03 D8 */	stw r6, 0x3fc(r30)
/* 801C0F74 001BDEB4  90 DE 03 D4 */	stw r6, 0x3f8(r30)
/* 801C0F78 001BDEB8  90 DE 03 E0 */	stw r6, 0x404(r30)
/* 801C0F7C 001BDEBC  90 DE 03 DC */	stw r6, 0x400(r30)
/* 801C0F80 001BDEC0  90 1E 03 28 */	stw r0, 0x34c(r30)
/* 801C0F84 001BDEC4  90 DE 01 78 */	stw r6, 0x19c(r30)
/* 801C0F88 001BDEC8  80 03 02 78 */	lwz r0, 0x278(r3)
/* 801C0F8C 001BDECC  2C 00 00 00 */	cmpwi r0, 0
/* 801C0F90 001BDED0  40 81 00 3C */	ble lbl_801C0FCC
/* 801C0F94 001BDED4  54 1F 50 2A */	slwi r31, r0, 0xa
/* 801C0F98 001BDED8  38 60 00 1C */	li r3, 0x1c
/* 801C0F9C 001BDEDC  4B E6 2F 09 */	bl __nw__FUl
/* 801C0FA0 001BDEE0  7C 60 1B 79 */	or. r0, r3, r3
/* 801C0FA4 001BDEE4  41 82 00 10 */	beq lbl_801C0FB4
/* 801C0FA8 001BDEE8  7F E4 FB 78 */	mr r4, r31
/* 801C0FAC 001BDEEC  48 07 C6 A1 */	bl __ct__6VSFifoFUl
/* 801C0FB0 001BDEF0  7C 60 1B 78 */	mr r0, r3
lbl_801C0FB4:
/* 801C0FB4 001BDEF4  90 1E 01 78 */	stw r0, 0x19c(r30)
/* 801C0FB8 001BDEF8  80 7E 01 78 */	lwz r3, 0x19c(r30)
/* 801C0FBC 001BDEFC  48 07 C7 69 */	bl becomeCurrent__6VSFifoFv
/* 801C0FC0 001BDF00  80 7E 01 78 */	lwz r3, 0x19c(r30)
/* 801C0FC4 001BDF04  80 63 00 04 */	lwz r3, 4(r3)
/* 801C0FC8 001BDF08  4B F2 2D 7D */	bl GXSetGPFifo
lbl_801C0FCC:
/* 801C0FCC 001BDF0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0FD0 001BDF10  7F C3 F3 78 */	mr r3, r30
/* 801C0FD4 001BDF14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C0FD8 001BDF18  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C0FDC 001BDF1C  7C 08 03 A6 */	mtlr r0
/* 801C0FE0 001BDF20  38 21 00 10 */	addi r1, r1, 0x10
/* 801C0FE4 001BDF24  4E 80 00 20 */	blr 
.else
.global __ct__Q24Game13VsGameSectionFP7JKRHeapb
__ct__Q24Game13VsGameSectionFP7JKRHeapb:
/* 801C0EEC 001BDE2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0EF0 001BDE30  7C 08 02 A6 */	mflr r0
/* 801C0EF4 001BDE34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0EF8 001BDE38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C0EFC 001BDE3C  7C BF 2B 78 */	mr r31, r5
/* 801C0F00 001BDE40  93 C1 00 08 */	stw r30, 8(r1)
/* 801C0F04 001BDE44  7C 7E 1B 78 */	mr r30, r3
/* 801C0F08 001BDE48  4B F8 9E 99 */	bl __ct__Q24Game15BaseGameSectionFP7JKRHeap
/* 801C0F0C 001BDE4C  3C 80 80 4B */	lis r4, __vt__Q24Game13VsGameSection@ha
/* 801C0F10 001BDE50  38 7E 01 84 */	addi r3, r30, 0x184
/* 801C0F14 001BDE54  38 04 61 E8 */	addi r0, r4, __vt__Q24Game13VsGameSection@l
/* 801C0F18 001BDE58  90 1E 00 00 */	stw r0, 0(r30)
/* 801C0F1C 001BDE5C  48 26 38 FD */	bl __ct__16DvdThreadCommandFv
/* 801C0F20 001BDE60  38 00 00 00 */	li r0, 0
/* 801C0F24 001BDE64  38 7E 02 14 */	addi r3, r30, 0x214
/* 801C0F28 001BDE68  98 1E 01 F8 */	stb r0, 0x1f8(r30)
/* 801C0F2C 001BDE6C  48 03 03 15 */	bl __ct__Q24Game13PikiContainerFv
/* 801C0F30 001BDE70  38 7E 02 1C */	addi r3, r30, 0x21c
/* 801C0F34 001BDE74  48 03 03 0D */	bl __ct__Q24Game13PikiContainerFv
/* 801C0F38 001BDE78  9B FE 01 74 */	stb r31, 0x174(r30)
/* 801C0F3C 001BDE7C  38 00 00 01 */	li r0, 1
/* 801C0F40 001BDE80  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 801C0F44 001BDE84  38 C0 00 00 */	li r6, 0
/* 801C0F48 001BDE88  98 1E 02 05 */	stb r0, 0x205(r30)
/* 801C0F4C 001BDE8C  38 A0 FF FF */	li r5, -1
/* 801C0F50 001BDE90  38 80 00 02 */	li r4, 2
/* 801C0F54 001BDE94  38 00 FF FE */	li r0, -2
/* 801C0F58 001BDE98  90 DE 03 38 */	stw r6, 0x338(r30)
/* 801C0F5C 001BDE9C  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 801C0F60 001BDEA0  90 DE 03 40 */	stw r6, 0x340(r30)
/* 801C0F64 001BDEA4  90 BE 03 4C */	stw r5, 0x34c(r30)
/* 801C0F68 001BDEA8  90 9E 03 48 */	stw r4, 0x348(r30)
/* 801C0F6C 001BDEAC  90 9E 03 44 */	stw r4, 0x344(r30)
/* 801C0F70 001BDEB0  90 DE 03 D8 */	stw r6, 0x3d8(r30)
/* 801C0F74 001BDEB4  90 DE 03 D4 */	stw r6, 0x3d4(r30)
/* 801C0F78 001BDEB8  90 DE 03 E0 */	stw r6, 0x3e0(r30)
/* 801C0F7C 001BDEBC  90 DE 03 DC */	stw r6, 0x3dc(r30)
/* 801C0F80 001BDEC0  90 1E 03 28 */	stw r0, 0x328(r30)
/* 801C0F84 001BDEC4  90 DE 01 78 */	stw r6, 0x178(r30)
/* 801C0F88 001BDEC8  80 03 02 78 */	lwz r0, 0x278(r3)
/* 801C0F8C 001BDECC  2C 00 00 00 */	cmpwi r0, 0
/* 801C0F90 001BDED0  40 81 00 3C */	ble lbl_801C0FCC
/* 801C0F94 001BDED4  54 1F 50 2A */	slwi r31, r0, 0xa
/* 801C0F98 001BDED8  38 60 00 1C */	li r3, 0x1c
/* 801C0F9C 001BDEDC  4B E6 2F 09 */	bl __nw__FUl
/* 801C0FA0 001BDEE0  7C 60 1B 79 */	or. r0, r3, r3
/* 801C0FA4 001BDEE4  41 82 00 10 */	beq lbl_801C0FB4
/* 801C0FA8 001BDEE8  7F E4 FB 78 */	mr r4, r31
/* 801C0FAC 001BDEEC  48 07 C6 A1 */	bl __ct__6VSFifoFUl
/* 801C0FB0 001BDEF0  7C 60 1B 78 */	mr r0, r3
lbl_801C0FB4:
/* 801C0FB4 001BDEF4  90 1E 01 78 */	stw r0, 0x178(r30)
/* 801C0FB8 001BDEF8  80 7E 01 78 */	lwz r3, 0x178(r30)
/* 801C0FBC 001BDEFC  48 07 C7 69 */	bl becomeCurrent__6VSFifoFv
/* 801C0FC0 001BDF00  80 7E 01 78 */	lwz r3, 0x178(r30)
/* 801C0FC4 001BDF04  80 63 00 04 */	lwz r3, 4(r3)
/* 801C0FC8 001BDF08  4B F2 2D 7D */	bl GXSetGPFifo
lbl_801C0FCC:
/* 801C0FCC 001BDF0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C0FD0 001BDF10  7F C3 F3 78 */	mr r3, r30
/* 801C0FD4 001BDF14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C0FD8 001BDF18  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C0FDC 001BDF1C  7C 08 03 A6 */	mtlr r0
/* 801C0FE0 001BDF20  38 21 00 10 */	addi r1, r1, 0x10
/* 801C0FE4 001BDF24  4E 80 00 20 */	blr 
.endif

.if version == 1
.global __dt__Q24Game13VsGameSectionFv
__dt__Q24Game13VsGameSectionFv:
/* 801C0FE8 001BDF28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0FEC 001BDF2C  7C 08 02 A6 */	mflr r0
/* 801C0FF0 001BDF30  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0FF4 001BDF34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C0FF8 001BDF38  7C 9F 23 78 */	mr r31, r4
/* 801C0FFC 001BDF3C  93 C1 00 08 */	stw r30, 8(r1)
/* 801C1000 001BDF40  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C1004 001BDF44  41 82 00 94 */	beq lbl_801C1098
/* 801C1008 001BDF48  3C 60 80 4B */	lis r3, __vt__Q24Game13VsGameSection@ha
/* 801C100C 001BDF4C  38 03 61 E8 */	addi r0, r3, __vt__Q24Game13VsGameSection@l
/* 801C1010 001BDF50  90 1E 00 00 */	stw r0, 0(r30)
/* 801C1014 001BDF54  80 7E 01 78 */	lwz r3, 0x19c(r30)
/* 801C1018 001BDF58  28 03 00 00 */	cmplwi r3, 0
/* 801C101C 001BDF5C  41 82 00 48 */	beq lbl_801C1064
/* 801C1020 001BDF60  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1024 001BDF64  4B F2 2E 99 */	bl GXSaveCPUFifo
lbl_801C1028:
/* 801C1028 001BDF68  48 00 00 8D */	bl isGPActive__6VSFifoFv
/* 801C102C 001BDF6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1030 001BDF70  40 82 FF F8 */	bne lbl_801C1028
/* 801C1034 001BDF74  4B F2 45 09 */	bl GXDrawDone
/* 801C1038 001BDF78  80 6D 88 EC */	lwz r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
/* 801C103C 001BDF7C  80 83 00 08 */	lwz r4, 8(r3)
/* 801C1040 001BDF80  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1044 001BDF84  7C 85 23 78 */	mr r5, r4
/* 801C1048 001BDF88  4B F2 2B 59 */	bl GXInitFifoPtrs
/* 801C104C 001BDF8C  80 6D 88 EC */	lwz r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
/* 801C1050 001BDF90  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1054 001BDF94  4B F2 2B C9 */	bl GXSetCPUFifo
/* 801C1058 001BDF98  80 6D 88 EC */	lwz r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
/* 801C105C 001BDF9C  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1060 001BDFA0  4B F2 2C E5 */	bl GXSetGPFifo
lbl_801C1064:
/* 801C1064 001BDFA4  34 1E 01 84 */	addic. r0, r30, 0x1a8
/* 801C1068 001BDFA8  41 82 00 14 */	beq lbl_801C107C
/* 801C106C 001BDFAC  34 7E 01 E0 */	addic. r3, r30, 0x204
/* 801C1070 001BDFB0  41 82 00 0C */	beq lbl_801C107C
/* 801C1074 001BDFB4  38 80 00 00 */	li r4, 0
/* 801C1078 001BDFB8  4B E6 57 59 */	bl __dt__10JSUPtrLinkFv
lbl_801C107C:
/* 801C107C 001BDFBC  7F C3 F3 78 */	mr r3, r30
/* 801C1080 001BDFC0  38 80 00 00 */	li r4, 0
/* 801C1084 001BDFC4  4B F8 A1 59 */	bl __dt__Q24Game15BaseGameSectionFv
/* 801C1088 001BDFC8  7F E0 07 35 */	extsh. r0, r31
/* 801C108C 001BDFCC  40 81 00 0C */	ble lbl_801C1098
/* 801C1090 001BDFD0  7F C3 F3 78 */	mr r3, r30
/* 801C1094 001BDFD4  4B E6 30 21 */	bl __dl__FPv
lbl_801C1098:
/* 801C1098 001BDFD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C109C 001BDFDC  7F C3 F3 78 */	mr r3, r30
/* 801C10A0 001BDFE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C10A4 001BDFE4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C10A8 001BDFE8  7C 08 03 A6 */	mtlr r0
/* 801C10AC 001BDFEC  38 21 00 10 */	addi r1, r1, 0x10
/* 801C10B0 001BDFF0  4E 80 00 20 */	blr 
.else
.global __dt__Q24Game13VsGameSectionFv
__dt__Q24Game13VsGameSectionFv:
/* 801C0FE8 001BDF28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C0FEC 001BDF2C  7C 08 02 A6 */	mflr r0
/* 801C0FF0 001BDF30  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C0FF4 001BDF34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C0FF8 001BDF38  7C 9F 23 78 */	mr r31, r4
/* 801C0FFC 001BDF3C  93 C1 00 08 */	stw r30, 8(r1)
/* 801C1000 001BDF40  7C 7E 1B 79 */	or. r30, r3, r3
/* 801C1004 001BDF44  41 82 00 94 */	beq lbl_801C1098
/* 801C1008 001BDF48  3C 60 80 4B */	lis r3, __vt__Q24Game13VsGameSection@ha
/* 801C100C 001BDF4C  38 03 61 E8 */	addi r0, r3, __vt__Q24Game13VsGameSection@l
/* 801C1010 001BDF50  90 1E 00 00 */	stw r0, 0(r30)
/* 801C1014 001BDF54  80 7E 01 78 */	lwz r3, 0x178(r30)
/* 801C1018 001BDF58  28 03 00 00 */	cmplwi r3, 0
/* 801C101C 001BDF5C  41 82 00 48 */	beq lbl_801C1064
/* 801C1020 001BDF60  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1024 001BDF64  4B F2 2E 99 */	bl GXSaveCPUFifo
lbl_801C1028:
/* 801C1028 001BDF68  48 00 00 8D */	bl isGPActive__6VSFifoFv
/* 801C102C 001BDF6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1030 001BDF70  40 82 FF F8 */	bne lbl_801C1028
/* 801C1034 001BDF74  4B F2 45 09 */	bl GXDrawDone
/* 801C1038 001BDF78  80 6D 88 EC */	lwz r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
/* 801C103C 001BDF7C  80 83 00 08 */	lwz r4, 8(r3)
/* 801C1040 001BDF80  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1044 001BDF84  7C 85 23 78 */	mr r5, r4
/* 801C1048 001BDF88  4B F2 2B 59 */	bl GXInitFifoPtrs
/* 801C104C 001BDF8C  80 6D 88 EC */	lwz r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
/* 801C1050 001BDF90  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1054 001BDF94  4B F2 2B C9 */	bl GXSetCPUFifo
/* 801C1058 001BDF98  80 6D 88 EC */	lwz r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
/* 801C105C 001BDF9C  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1060 001BDFA0  4B F2 2C E5 */	bl GXSetGPFifo
lbl_801C1064:
/* 801C1064 001BDFA4  34 1E 01 84 */	addic. r0, r30, 0x184
/* 801C1068 001BDFA8  41 82 00 14 */	beq lbl_801C107C
/* 801C106C 001BDFAC  34 7E 01 E0 */	addic. r3, r30, 0x1e0
/* 801C1070 001BDFB0  41 82 00 0C */	beq lbl_801C107C
/* 801C1074 001BDFB4  38 80 00 00 */	li r4, 0
/* 801C1078 001BDFB8  4B E6 57 59 */	bl __dt__10JSUPtrLinkFv
lbl_801C107C:
/* 801C107C 001BDFBC  7F C3 F3 78 */	mr r3, r30
/* 801C1080 001BDFC0  38 80 00 00 */	li r4, 0
/* 801C1084 001BDFC4  4B F8 A1 59 */	bl __dt__Q24Game15BaseGameSectionFv
/* 801C1088 001BDFC8  7F E0 07 35 */	extsh. r0, r31
/* 801C108C 001BDFCC  40 81 00 0C */	ble lbl_801C1098
/* 801C1090 001BDFD0  7F C3 F3 78 */	mr r3, r30
/* 801C1094 001BDFD4  4B E6 30 21 */	bl __dl__FPv
lbl_801C1098:
/* 801C1098 001BDFD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C109C 001BDFDC  7F C3 F3 78 */	mr r3, r30
/* 801C10A0 001BDFE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C10A4 001BDFE4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C10A8 001BDFE8  7C 08 03 A6 */	mtlr r0
/* 801C10AC 001BDFEC  38 21 00 10 */	addi r1, r1, 0x10
/* 801C10B0 001BDFF0  4E 80 00 20 */	blr 
.endif

.global isGPActive__6VSFifoFv
isGPActive__6VSFifoFv:
/* 801C10B4 001BDFF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C10B8 001BDFF8  7C 08 02 A6 */	mflr r0
/* 801C10BC 001BDFFC  38 8D 96 60 */	addi r4, r13, mGpStatus__6VSFifo@sda21
/* 801C10C0 001BE000  38 CD 96 60 */	addi r6, r13, mGpStatus__6VSFifo@sda21
/* 801C10C4 001BE004  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C10C8 001BE008  38 ED 96 60 */	addi r7, r13, mGpStatus__6VSFifo@sda21
/* 801C10CC 001BE00C  38 6D 96 60 */	addi r3, r13, mGpStatus__6VSFifo@sda21
/* 801C10D0 001BE010  38 84 00 01 */	addi r4, r4, 1
/* 801C10D4 001BE014  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C10D8 001BE018  3B ED 96 60 */	addi r31, r13, mGpStatus__6VSFifo@sda21
/* 801C10DC 001BE01C  3B FF 00 02 */	addi r31, r31, 2
/* 801C10E0 001BE020  38 C6 00 03 */	addi r6, r6, 3
/* 801C10E4 001BE024  7F E5 FB 78 */	mr r5, r31
/* 801C10E8 001BE028  38 E7 00 04 */	addi r7, r7, 4
/* 801C10EC 001BE02C  4B F2 2E CD */	bl GXGetGPStatus
/* 801C10F0 001BE030  88 1F 00 00 */	lbz r0, 0(r31)
/* 801C10F4 001BE034  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C10F8 001BE038  7C 00 00 34 */	cntlzw r0, r0
/* 801C10FC 001BE03C  54 03 D9 7E */	srwi r3, r0, 5
/* 801C1100 001BE040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1104 001BE044  7C 08 03 A6 */	mtlr r0
/* 801C1108 001BE048  38 21 00 10 */	addi r1, r1, 0x10
/* 801C110C 001BE04C  4E 80 00 20 */	blr 

.if version == 1
.global section_fadeout__Q24Game13VsGameSectionFv
section_fadeout__Q24Game13VsGameSectionFv:
/* 801C1110 001BE050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1114 001BE054  7C 08 02 A6 */	mflr r0
/* 801C1118 001BE058  7C 64 1B 78 */	mr r4, r3
/* 801C111C 001BE05C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1120 001BE060  80 63 01 80 */	lwz r3, 0x1a4(r3)
/* 801C1124 001BE064  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1128 001BE068  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801C112C 001BE06C  7D 89 03 A6 */	mtctr r12
/* 801C1130 001BE070  4E 80 04 21 */	bctrl 
/* 801C1134 001BE074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1138 001BE078  7C 08 03 A6 */	mtlr r0
/* 801C113C 001BE07C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1140 001BE080  4E 80 00 20 */	blr 
.else
.global section_fadeout__Q24Game13VsGameSectionFv
section_fadeout__Q24Game13VsGameSectionFv:
/* 801C1110 001BE050  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1114 001BE054  7C 08 02 A6 */	mflr r0
/* 801C1118 001BE058  7C 64 1B 78 */	mr r4, r3
/* 801C111C 001BE05C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1120 001BE060  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801C1124 001BE064  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1128 001BE068  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801C112C 001BE06C  7D 89 03 A6 */	mtctr r12
/* 801C1130 001BE070  4E 80 04 21 */	bctrl 
/* 801C1134 001BE074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1138 001BE078  7C 08 03 A6 */	mtlr r0
/* 801C113C 001BE07C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1140 001BE080  4E 80 00 20 */	blr 
.endif

.global on_section_fadeout__Q34Game6VsGame5StateFPQ24Game13VsGameSection
on_section_fadeout__Q34Game6VsGame5StateFPQ24Game13VsGameSection:
/* 801C1144 001BE084  4E 80 00 20 */	blr 

.global startMainBgm__Q24Game13VsGameSectionFv
startMainBgm__Q24Game13VsGameSectionFv:
/* 801C1148 001BE088  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C114C 001BE08C  7C 08 02 A6 */	mflr r0
/* 801C1150 001BE090  3C 60 80 48 */	lis r3, lbl_8047FF98@ha
/* 801C1154 001BE094  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1158 001BE098  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C115C 001BE09C  3B E3 FF 98 */	addi r31, r3, lbl_8047FF98@l
/* 801C1160 001BE0A0  93 C1 00 08 */	stw r30, 8(r1)
/* 801C1164 001BE0A4  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801C1168 001BE0A8  28 00 00 00 */	cmplwi r0, 0
/* 801C116C 001BE0AC  40 82 00 18 */	bne lbl_801C1184
/* 801C1170 001BE0B0  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801C1174 001BE0B4  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C1178 001BE0B8  38 80 01 D3 */	li r4, 0x1d3
/* 801C117C 001BE0BC  4C C6 31 82 */	crclr 6
/* 801C1180 001BE0C0  4B E6 94 C1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C1184:
/* 801C1184 001BE0C4  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 801C1188 001BE0C8  80 1E 00 04 */	lwz r0, 4(r30)
/* 801C118C 001BE0CC  28 00 00 00 */	cmplwi r0, 0
/* 801C1190 001BE0D0  40 82 00 18 */	bne lbl_801C11A8
/* 801C1194 001BE0D4  38 7F 00 34 */	addi r3, r31, 0x34
/* 801C1198 001BE0D8  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C119C 001BE0DC  38 80 00 C7 */	li r4, 0xc7
/* 801C11A0 001BE0E0  4C C6 31 82 */	crclr 6
/* 801C11A4 001BE0E4  4B E6 94 9D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C11A8:
/* 801C11A8 001BE0E8  80 7E 00 04 */	lwz r3, 4(r30)
/* 801C11AC 001BE0EC  80 63 00 04 */	lwz r3, 4(r3)
/* 801C11B0 001BE0F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C11B4 001BE0F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801C11B8 001BE0F8  7D 89 03 A6 */	mtctr r12
/* 801C11BC 001BE0FC  4E 80 04 21 */	bctrl 
/* 801C11C0 001BE100  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C11C4 001BE104  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C11C8 001BE108  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C11CC 001BE10C  7C 08 03 A6 */	mtlr r0
/* 801C11D0 001BE110  38 21 00 10 */	addi r1, r1, 0x10
/* 801C11D4 001BE114  4E 80 00 20 */	blr 

.if version == 1
.global onInit__Q24Game13VsGameSectionFv
onInit__Q24Game13VsGameSectionFv:
/* 801C11D8 001BE118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C11DC 001BE11C  7C 08 02 A6 */	mflr r0
/* 801C11E0 001BE120  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C11E4 001BE124  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C11E8 001BE128  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C11EC 001BE12C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C11F0 001BE130  7C 7F 1B 78 */	mr r31, r3
/* 801C11F4 001BE134  D0 23 03 50 */	stfs f1, 0x374(r3)
/* 801C11F8 001BE138  D0 03 03 54 */	stfs f0, 0x378(r3)
/* 801C11FC 001BE13C  D0 23 01 F4 */	stfs f1, 0x218(r3)
/* 801C1200 001BE140  D0 23 01 F0 */	stfs f1, 0x214(r3)
/* 801C1204 001BE144  48 00 36 BD */	bl clearGetDopeCount__Q24Game13VsGameSectionFv
/* 801C1208 001BE148  7F E3 FB 78 */	mr r3, r31
/* 801C120C 001BE14C  48 00 37 9D */	bl clearGetCherryCount__Q24Game13VsGameSectionFv
/* 801C1210 001BE150  88 1F 01 74 */	lbz r0, 0x198(r31)
/* 801C1214 001BE154  28 00 00 00 */	cmplwi r0, 0
/* 801C1218 001BE158  41 82 00 14 */	beq lbl_801C122C
/* 801C121C 001BE15C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1220 001BE160  38 00 00 01 */	li r0, 1
/* 801C1224 001BE164  90 03 00 44 */	stw r0, 0x44(r3)
/* 801C1228 001BE168  48 00 00 10 */	b lbl_801C1238
lbl_801C122C:
/* 801C122C 001BE16C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1230 001BE170  38 00 00 02 */	li r0, 2
/* 801C1234 001BE174  90 03 00 44 */	stw r0, 0x44(r3)
lbl_801C1238:
/* 801C1238 001BE178  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C123C 001BE17C  38 A0 00 01 */	li r5, 1
/* 801C1240 001BE180  38 00 00 00 */	li r0, 0
/* 801C1244 001BE184  3C 60 80 48 */	lis r3, lbl_8047FFD8@ha
/* 801C1248 001BE188  98 A4 00 48 */	stb r5, 0x48(r4)
/* 801C124C 001BE18C  38 83 FF D8 */	addi r4, r3, lbl_8047FFD8@l
/* 801C1250 001BE190  38 7F 02 24 */	addi r3, r31, 0x248
/* 801C1254 001BE194  98 1F 01 1C */	stb r0, 0x13c(r31)
/* 801C1258 001BE198  90 1F 01 FC */	stw r0, 0x220(r31)
/* 801C125C 001BE19C  90 1F 03 BC */	stw r0, 0x3e0(r31)
/* 801C1260 001BE1A0  98 1F 02 04 */	stb r0, 0x228(r31)
/* 801C1264 001BE1A4  4C C6 31 82 */	crclr 6
/* 801C1268 001BE1A8  4B F0 61 D1 */	bl sprintf
/* 801C126C 001BE1AC  38 7F 02 A4 */	addi r3, r31, 0x2c8
/* 801C1270 001BE1B0  38 82 B1 50 */	addi r4, r2, lbl_805194B0@sda21
/* 801C1274 001BE1B4  4C C6 31 82 */	crclr 6
/* 801C1278 001BE1B8  4B F0 61 C1 */	bl sprintf
/* 801C127C 001BE1BC  7F E3 FB 78 */	mr r3, r31
/* 801C1280 001BE1C0  4B F8 EF 2D */	bl setupFixMemory__Q24Game15BaseGameSectionFv
/* 801C1284 001BE1C4  38 60 00 94 */	li r3, 0x94
/* 801C1288 001BE1C8  4B E6 2C 1D */	bl __nw__FUl
/* 801C128C 001BE1CC  7C 60 1B 79 */	or. r0, r3, r3
/* 801C1290 001BE1D0  41 82 00 0C */	beq lbl_801C129C
/* 801C1294 001BE1D4  48 06 C6 31 */	bl __ct__Q34Game13ChallengeGame9StageListFv
/* 801C1298 001BE1D8  7C 60 1B 78 */	mr r0, r3
lbl_801C129C:
/* 801C129C 001BE1DC  90 1F 02 0C */	stw r0, 0x230(r31)
/* 801C12A0 001BE1E0  7F E3 FB 78 */	mr r3, r31
/* 801C12A4 001BE1E4  80 9F 02 0C */	lwz r4, 0x230(r31)
/* 801C12A8 001BE1E8  4B FA 3D 09 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801C12AC 001BE1EC  38 60 00 CC */	li r3, 0xcc
/* 801C12B0 001BE1F0  4B E6 2B F5 */	bl __nw__FUl
/* 801C12B4 001BE1F4  7C 60 1B 79 */	or. r0, r3, r3
/* 801C12B8 001BE1F8  41 82 00 0C */	beq lbl_801C12C4
/* 801C12BC 001BE1FC  48 06 C8 AD */	bl __ct__Q34Game6VsGame9StageListFv
/* 801C12C0 001BE200  7C 60 1B 78 */	mr r0, r3
lbl_801C12C4:
/* 801C12C4 001BE204  90 1F 02 10 */	stw r0, 0x234(r31)
/* 801C12C8 001BE208  7F E3 FB 78 */	mr r3, r31
/* 801C12CC 001BE20C  80 9F 02 10 */	lwz r4, 0x234(r31)
/* 801C12D0 001BE210  4B FA 3C E1 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801C12D4 001BE214  7F E3 FB 78 */	mr r3, r31
/* 801C12D8 001BE218  48 00 07 F1 */	bl loadChallengeStageList__Q24Game13VsGameSectionFv
/* 801C12DC 001BE21C  7F E3 FB 78 */	mr r3, r31
/* 801C12E0 001BE220  48 00 08 99 */	bl loadVsStageList__Q24Game13VsGameSectionFv
/* 801C12E4 001BE224  38 60 00 1C */	li r3, 0x1c
/* 801C12E8 001BE228  4B E6 2B BD */	bl __nw__FUl
/* 801C12EC 001BE22C  28 03 00 00 */	cmplwi r3, 0
/* 801C12F0 001BE230  41 82 00 24 */	beq lbl_801C1314
/* 801C12F4 001BE234  3C A0 80 4B */	lis r5, "__vt__Q24Game36StateMachine<Q24Game13VsGameSection>"@ha
/* 801C12F8 001BE238  3C 80 80 4B */	lis r4, __vt__Q34Game6VsGame3FSM@ha
/* 801C12FC 001BE23C  38 05 61 D0 */	addi r0, r5, "__vt__Q24Game36StateMachine<Q24Game13VsGameSection>"@l
/* 801C1300 001BE240  38 A0 FF FF */	li r5, -1
/* 801C1304 001BE244  90 03 00 00 */	stw r0, 0(r3)
/* 801C1308 001BE248  38 04 63 20 */	addi r0, r4, __vt__Q34Game6VsGame3FSM@l
/* 801C130C 001BE24C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 801C1310 001BE250  90 03 00 00 */	stw r0, 0(r3)
lbl_801C1314:
/* 801C1314 001BE254  90 7F 01 7C */	stw r3, 0x1a0(r31)
/* 801C1318 001BE258  7F E4 FB 78 */	mr r4, r31
/* 801C131C 001BE25C  80 7F 01 7C */	lwz r3, 0x1a0(r31)
/* 801C1320 001BE260  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1324 001BE264  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C1328 001BE268  7D 89 03 A6 */	mtctr r12
/* 801C132C 001BE26C  4E 80 04 21 */	bctrl 
/* 801C1330 001BE270  7F E3 FB 78 */	mr r3, r31
/* 801C1334 001BE274  48 00 05 11 */	bl initPlayData__Q24Game13VsGameSectionFv
/* 801C1338 001BE278  80 7F 01 7C */	lwz r3, 0x1a0(r31)
/* 801C133C 001BE27C  7F E4 FB 78 */	mr r4, r31
/* 801C1340 001BE280  38 A0 00 00 */	li r5, 0
/* 801C1344 001BE284  38 C0 00 00 */	li r6, 0
/* 801C1348 001BE288  81 83 00 00 */	lwz r12, 0(r3)
/* 801C134C 001BE28C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C1350 001BE290  7D 89 03 A6 */	mtctr r12
/* 801C1354 001BE294  4E 80 04 21 */	bctrl 
/* 801C1358 001BE298  38 00 00 00 */	li r0, 0
/* 801C135C 001BE29C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C1360 001BE2A0  90 1F 03 24 */	stw r0, 0x348(r31)
/* 801C1364 001BE2A4  38 60 00 5C */	li r3, 0x5c
/* 801C1368 001BE2A8  D0 1F 03 5C */	stfs f0, 0x380(r31)
/* 801C136C 001BE2AC  D0 1F 03 58 */	stfs f0, 0x37c(r31)
/* 801C1370 001BE2B0  D0 1F 03 74 */	stfs f0, 0x398(r31)
/* 801C1374 001BE2B4  D0 1F 03 70 */	stfs f0, 0x394(r31)
/* 801C1378 001BE2B8  D0 1F 03 64 */	stfs f0, 0x388(r31)
/* 801C137C 001BE2BC  D0 1F 03 60 */	stfs f0, 0x384(r31)
/* 801C1380 001BE2C0  D0 1F 03 6C */	stfs f0, 0x390(r31)
/* 801C1384 001BE2C4  D0 1F 03 68 */	stfs f0, 0x38c(r31)
/* 801C1388 001BE2C8  D0 1F 03 7C */	stfs f0, 0x3a0(r31)
/* 801C138C 001BE2CC  D0 1F 03 78 */	stfs f0, 0x39c(r31)
/* 801C1390 001BE2D0  90 1F 03 84 */	stw r0, 0x3a8(r31)
/* 801C1394 001BE2D4  90 1F 03 80 */	stw r0, 0x3a4(r31)
/* 801C1398 001BE2D8  4B E6 2B 0D */	bl __nw__FUl
/* 801C139C 001BE2DC  7C 60 1B 79 */	or. r0, r3, r3
/* 801C13A0 001BE2E0  41 82 00 0C */	beq lbl_801C13AC
/* 801C13A4 001BE2E4  48 05 CF 51 */	bl __ct__Q25Radar3MgrFv
/* 801C13A8 001BE2E8  7C 60 1B 78 */	mr r0, r3
lbl_801C13AC:
/* 801C13AC 001BE2EC  90 0D 95 B0 */	stw r0, mgr__5Radar@sda21(r13)
/* 801C13B0 001BE2F0  38 00 00 00 */	li r0, 0
/* 801C13B4 001BE2F4  90 1F 03 88 */	stw r0, 0x3ac(r31)
/* 801C13B8 001BE2F8  90 1F 03 8C */	stw r0, 0x3b0(r31)
/* 801C13BC 001BE2FC  90 1F 03 90 */	stw r0, 0x3b4(r31)
/* 801C13C0 001BE300  90 1F 03 94 */	stw r0, 0x3b8(r31)
/* 801C13C4 001BE304  90 1F 03 98 */	stw r0, 0x3bc(r31)
/* 801C13C8 001BE308  90 1F 03 9C */	stw r0, 0x3c0(r31)
/* 801C13CC 001BE30C  90 1F 03 A0 */	stw r0, 0x3c4(r31)
/* 801C13D0 001BE310  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C13D4 001BE314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C13D8 001BE318  7C 08 03 A6 */	mtlr r0
/* 801C13DC 001BE31C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C13E0 001BE320  4E 80 00 20 */	blr 
.else
.global onInit__Q24Game13VsGameSectionFv
onInit__Q24Game13VsGameSectionFv:
/* 801C11D8 001BE118  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C11DC 001BE11C  7C 08 02 A6 */	mflr r0
/* 801C11E0 001BE120  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C11E4 001BE124  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C11E8 001BE128  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C11EC 001BE12C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C11F0 001BE130  7C 7F 1B 78 */	mr r31, r3
/* 801C11F4 001BE134  D0 23 03 50 */	stfs f1, 0x350(r3)
/* 801C11F8 001BE138  D0 03 03 54 */	stfs f0, 0x354(r3)
/* 801C11FC 001BE13C  D0 23 01 F4 */	stfs f1, 0x1f4(r3)
/* 801C1200 001BE140  D0 23 01 F0 */	stfs f1, 0x1f0(r3)
/* 801C1204 001BE144  48 00 36 BD */	bl clearGetDopeCount__Q24Game13VsGameSectionFv
/* 801C1208 001BE148  7F E3 FB 78 */	mr r3, r31
/* 801C120C 001BE14C  48 00 37 9D */	bl clearGetCherryCount__Q24Game13VsGameSectionFv
/* 801C1210 001BE150  88 1F 01 74 */	lbz r0, 0x174(r31)
/* 801C1214 001BE154  28 00 00 00 */	cmplwi r0, 0
/* 801C1218 001BE158  41 82 00 14 */	beq lbl_801C122C
/* 801C121C 001BE15C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1220 001BE160  38 00 00 01 */	li r0, 1
/* 801C1224 001BE164  90 03 00 44 */	stw r0, 0x44(r3)
/* 801C1228 001BE168  48 00 00 10 */	b lbl_801C1238
lbl_801C122C:
/* 801C122C 001BE16C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1230 001BE170  38 00 00 02 */	li r0, 2
/* 801C1234 001BE174  90 03 00 44 */	stw r0, 0x44(r3)
lbl_801C1238:
/* 801C1238 001BE178  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C123C 001BE17C  38 A0 00 01 */	li r5, 1
/* 801C1240 001BE180  38 00 00 00 */	li r0, 0
/* 801C1244 001BE184  3C 60 80 48 */	lis r3, lbl_8047FFD8@ha
/* 801C1248 001BE188  98 A4 00 48 */	stb r5, 0x48(r4)
/* 801C124C 001BE18C  38 83 FF D8 */	addi r4, r3, lbl_8047FFD8@l
/* 801C1250 001BE190  38 7F 02 24 */	addi r3, r31, 0x224
/* 801C1254 001BE194  98 1F 01 1C */	stb r0, 0x11c(r31)
/* 801C1258 001BE198  90 1F 01 FC */	stw r0, 0x1fc(r31)
/* 801C125C 001BE19C  90 1F 03 BC */	stw r0, 0x3bc(r31)
/* 801C1260 001BE1A0  98 1F 02 04 */	stb r0, 0x204(r31)
/* 801C1264 001BE1A4  4C C6 31 82 */	crclr 6
/* 801C1268 001BE1A8  4B F0 61 D1 */	bl sprintf
/* 801C126C 001BE1AC  38 7F 02 A4 */	addi r3, r31, 0x2a4
/* 801C1270 001BE1B0  38 82 B1 50 */	addi r4, r2, lbl_805194B0@sda21
/* 801C1274 001BE1B4  4C C6 31 82 */	crclr 6
/* 801C1278 001BE1B8  4B F0 61 C1 */	bl sprintf
/* 801C127C 001BE1BC  7F E3 FB 78 */	mr r3, r31
/* 801C1280 001BE1C0  4B F8 EF 2D */	bl setupFixMemory__Q24Game15BaseGameSectionFv
/* 801C1284 001BE1C4  38 60 00 94 */	li r3, 0x94
/* 801C1288 001BE1C8  4B E6 2C 1D */	bl __nw__FUl
/* 801C128C 001BE1CC  7C 60 1B 79 */	or. r0, r3, r3
/* 801C1290 001BE1D0  41 82 00 0C */	beq lbl_801C129C
/* 801C1294 001BE1D4  48 06 C6 31 */	bl __ct__Q34Game13ChallengeGame9StageListFv
/* 801C1298 001BE1D8  7C 60 1B 78 */	mr r0, r3
lbl_801C129C:
/* 801C129C 001BE1DC  90 1F 02 0C */	stw r0, 0x20c(r31)
/* 801C12A0 001BE1E0  7F E3 FB 78 */	mr r3, r31
/* 801C12A4 001BE1E4  80 9F 02 0C */	lwz r4, 0x20c(r31)
/* 801C12A8 001BE1E8  4B FA 3D 09 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801C12AC 001BE1EC  38 60 00 CC */	li r3, 0xcc
/* 801C12B0 001BE1F0  4B E6 2B F5 */	bl __nw__FUl
/* 801C12B4 001BE1F4  7C 60 1B 79 */	or. r0, r3, r3
/* 801C12B8 001BE1F8  41 82 00 0C */	beq lbl_801C12C4
/* 801C12BC 001BE1FC  48 06 C8 AD */	bl __ct__Q34Game6VsGame9StageListFv
/* 801C12C0 001BE200  7C 60 1B 78 */	mr r0, r3
lbl_801C12C4:
/* 801C12C4 001BE204  90 1F 02 10 */	stw r0, 0x210(r31)
/* 801C12C8 001BE208  7F E3 FB 78 */	mr r3, r31
/* 801C12CC 001BE20C  80 9F 02 10 */	lwz r4, 0x210(r31)
/* 801C12D0 001BE210  4B FA 3C E1 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
/* 801C12D4 001BE214  7F E3 FB 78 */	mr r3, r31
/* 801C12D8 001BE218  48 00 07 F1 */	bl loadChallengeStageList__Q24Game13VsGameSectionFv
/* 801C12DC 001BE21C  7F E3 FB 78 */	mr r3, r31
/* 801C12E0 001BE220  48 00 08 99 */	bl loadVsStageList__Q24Game13VsGameSectionFv
/* 801C12E4 001BE224  38 60 00 1C */	li r3, 0x1c
/* 801C12E8 001BE228  4B E6 2B BD */	bl __nw__FUl
/* 801C12EC 001BE22C  28 03 00 00 */	cmplwi r3, 0
/* 801C12F0 001BE230  41 82 00 24 */	beq lbl_801C1314
/* 801C12F4 001BE234  3C A0 80 4B */	lis r5, "__vt__Q24Game36StateMachine<Q24Game13VsGameSection>"@ha
/* 801C12F8 001BE238  3C 80 80 4B */	lis r4, __vt__Q34Game6VsGame3FSM@ha
/* 801C12FC 001BE23C  38 05 61 D0 */	addi r0, r5, "__vt__Q24Game36StateMachine<Q24Game13VsGameSection>"@l
/* 801C1300 001BE240  38 A0 FF FF */	li r5, -1
/* 801C1304 001BE244  90 03 00 00 */	stw r0, 0(r3)
/* 801C1308 001BE248  38 04 63 20 */	addi r0, r4, __vt__Q34Game6VsGame3FSM@l
/* 801C130C 001BE24C  90 A3 00 18 */	stw r5, 0x18(r3)
/* 801C1310 001BE250  90 03 00 00 */	stw r0, 0(r3)
lbl_801C1314:
/* 801C1314 001BE254  90 7F 01 7C */	stw r3, 0x17c(r31)
/* 801C1318 001BE258  7F E4 FB 78 */	mr r4, r31
/* 801C131C 001BE25C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C1320 001BE260  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1324 001BE264  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C1328 001BE268  7D 89 03 A6 */	mtctr r12
/* 801C132C 001BE26C  4E 80 04 21 */	bctrl 
/* 801C1330 001BE270  7F E3 FB 78 */	mr r3, r31
/* 801C1334 001BE274  48 00 05 11 */	bl initPlayData__Q24Game13VsGameSectionFv
/* 801C1338 001BE278  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801C133C 001BE27C  7F E4 FB 78 */	mr r4, r31
/* 801C1340 001BE280  38 A0 00 00 */	li r5, 0
/* 801C1344 001BE284  38 C0 00 00 */	li r6, 0
/* 801C1348 001BE288  81 83 00 00 */	lwz r12, 0(r3)
/* 801C134C 001BE28C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C1350 001BE290  7D 89 03 A6 */	mtctr r12
/* 801C1354 001BE294  4E 80 04 21 */	bctrl 
/* 801C1358 001BE298  38 00 00 00 */	li r0, 0
/* 801C135C 001BE29C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C1360 001BE2A0  90 1F 03 24 */	stw r0, 0x324(r31)
/* 801C1364 001BE2A4  38 60 00 5C */	li r3, 0x5c
/* 801C1368 001BE2A8  D0 1F 03 5C */	stfs f0, 0x35c(r31)
/* 801C136C 001BE2AC  D0 1F 03 58 */	stfs f0, 0x358(r31)
/* 801C1370 001BE2B0  D0 1F 03 74 */	stfs f0, 0x374(r31)
/* 801C1374 001BE2B4  D0 1F 03 70 */	stfs f0, 0x370(r31)
/* 801C1378 001BE2B8  D0 1F 03 64 */	stfs f0, 0x364(r31)
/* 801C137C 001BE2BC  D0 1F 03 60 */	stfs f0, 0x360(r31)
/* 801C1380 001BE2C0  D0 1F 03 6C */	stfs f0, 0x36c(r31)
/* 801C1384 001BE2C4  D0 1F 03 68 */	stfs f0, 0x368(r31)
/* 801C1388 001BE2C8  D0 1F 03 7C */	stfs f0, 0x37c(r31)
/* 801C138C 001BE2CC  D0 1F 03 78 */	stfs f0, 0x378(r31)
/* 801C1390 001BE2D0  90 1F 03 84 */	stw r0, 0x384(r31)
/* 801C1394 001BE2D4  90 1F 03 80 */	stw r0, 0x380(r31)
/* 801C1398 001BE2D8  4B E6 2B 0D */	bl __nw__FUl
/* 801C139C 001BE2DC  7C 60 1B 79 */	or. r0, r3, r3
/* 801C13A0 001BE2E0  41 82 00 0C */	beq lbl_801C13AC
/* 801C13A4 001BE2E4  48 05 CF 51 */	bl __ct__Q25Radar3MgrFv
/* 801C13A8 001BE2E8  7C 60 1B 78 */	mr r0, r3
lbl_801C13AC:
/* 801C13AC 001BE2EC  90 0D 95 B0 */	stw r0, mgr__5Radar@sda21(r13)
/* 801C13B0 001BE2F0  38 00 00 00 */	li r0, 0
/* 801C13B4 001BE2F4  90 1F 03 88 */	stw r0, 0x388(r31)
/* 801C13B8 001BE2F8  90 1F 03 8C */	stw r0, 0x38c(r31)
/* 801C13BC 001BE2FC  90 1F 03 90 */	stw r0, 0x390(r31)
/* 801C13C0 001BE300  90 1F 03 94 */	stw r0, 0x394(r31)
/* 801C13C4 001BE304  90 1F 03 98 */	stw r0, 0x398(r31)
/* 801C13C8 001BE308  90 1F 03 9C */	stw r0, 0x39c(r31)
/* 801C13CC 001BE30C  90 1F 03 A0 */	stw r0, 0x3a0(r31)
/* 801C13D0 001BE310  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C13D4 001BE314  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C13D8 001BE318  7C 08 03 A6 */	mtlr r0
/* 801C13DC 001BE31C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C13E0 001BE320  4E 80 00 20 */	blr 
.endif

.if version == 1
.global "start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
"start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg":
/* 801C13E4 001BE324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C13E8 001BE328  7C 08 02 A6 */	mflr r0
/* 801C13EC 001BE32C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C13F0 001BE330  38 00 00 00 */	li r0, 0
/* 801C13F4 001BE334  90 04 01 80 */	stw r0, 0x1a4(r4)
/* 801C13F8 001BE338  81 83 00 00 */	lwz r12, 0(r3)
/* 801C13FC 001BE33C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C1400 001BE340  7D 89 03 A6 */	mtctr r12
/* 801C1404 001BE344  4E 80 04 21 */	bctrl 
/* 801C1408 001BE348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C140C 001BE34C  7C 08 03 A6 */	mtlr r0
/* 801C1410 001BE350  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1414 001BE354  4E 80 00 20 */	blr 
.else
.global "start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
"start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg":
/* 801C13E4 001BE324  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C13E8 001BE328  7C 08 02 A6 */	mflr r0
/* 801C13EC 001BE32C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C13F0 001BE330  38 00 00 00 */	li r0, 0
/* 801C13F4 001BE334  90 04 01 80 */	stw r0, 0x180(r4)
/* 801C13F8 001BE338  81 83 00 00 */	lwz r12, 0(r3)
/* 801C13FC 001BE33C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C1400 001BE340  7D 89 03 A6 */	mtctr r12
/* 801C1404 001BE344  4E 80 04 21 */	bctrl 
/* 801C1408 001BE348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C140C 001BE34C  7C 08 03 A6 */	mtlr r0
/* 801C1410 001BE350  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1414 001BE354  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getCurrFloor__Q24Game13VsGameSectionFv
getCurrFloor__Q24Game13VsGameSectionFv:
/* 801C1418 001BE358  80 63 03 24 */	lwz r3, 0x348(r3)
/* 801C141C 001BE35C  4E 80 00 20 */	blr 
.else
.global getCurrFloor__Q24Game13VsGameSectionFv
getCurrFloor__Q24Game13VsGameSectionFv:
/* 801C1418 001BE358  80 63 03 24 */	lwz r3, 0x324(r3)
/* 801C141C 001BE35C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global doUpdate__Q24Game13VsGameSectionFv
doUpdate__Q24Game13VsGameSectionFv:
/* 801C1420 001BE360  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C1424 001BE364  7C 08 02 A6 */	mflr r0
/* 801C1428 001BE368  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C142C 001BE36C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801C1430 001BE370  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801C1434 001BE374  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801C1438 001BE378  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801C143C 001BE37C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801C1440 001BE380  7C 7D 1B 78 */	mr r29, r3
/* 801C1444 001BE384  88 03 02 04 */	lbz r0, 0x228(r3)
/* 801C1448 001BE388  28 00 00 00 */	cmplwi r0, 0
/* 801C144C 001BE38C  41 82 00 14 */	beq lbl_801C1460
/* 801C1450 001BE390  38 00 00 00 */	li r0, 0
/* 801C1454 001BE394  38 60 00 00 */	li r3, 0
/* 801C1458 001BE398  98 1D 00 34 */	stb r0, 0x34(r29)
/* 801C145C 001BE39C  48 00 01 58 */	b lbl_801C15B4
lbl_801C1460:
/* 801C1460 001BE3A0  80 7D 01 7C */	lwz r3, 0x1a0(r29)
/* 801C1464 001BE3A4  7F A4 EB 78 */	mr r4, r29
/* 801C1468 001BE3A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C146C 001BE3AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C1470 001BE3B0  7D 89 03 A6 */	mtctr r12
/* 801C1474 001BE3B4  4E 80 04 21 */	bctrl 
/* 801C1478 001BE3B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C147C 001BE3BC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801C1480 001BE3C0  2C 00 00 01 */	cmpwi r0, 1
/* 801C1484 001BE3C4  40 82 01 2C */	bne lbl_801C15B0
/* 801C1488 001BE3C8  38 60 00 01 */	li r3, 1
/* 801C148C 001BE3CC  48 00 F9 D5 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C1490 001BE3D0  80 9D 03 44 */	lwz r4, 0x368(r29)
/* 801C1494 001BE3D4  38 04 FF FD */	addi r0, r4, -3
/* 801C1498 001BE3D8  7F E0 18 50 */	subf r31, r0, r3
/* 801C149C 001BE3DC  38 60 00 00 */	li r3, 0
/* 801C14A0 001BE3E0  48 00 F9 C1 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C14A4 001BE3E4  80 9D 03 48 */	lwz r4, 0x36c(r29)
/* 801C14A8 001BE3E8  2C 1F 00 00 */	cmpwi r31, 0
/* 801C14AC 001BE3EC  38 04 FF FD */	addi r0, r4, -3
/* 801C14B0 001BE3F0  7F C0 18 50 */	subf r30, r0, r3
/* 801C14B4 001BE3F4  40 80 00 08 */	bge lbl_801C14BC
/* 801C14B8 001BE3F8  3B E0 00 01 */	li r31, 1
lbl_801C14BC:
/* 801C14BC 001BE3FC  2C 1E 00 00 */	cmpwi r30, 0
/* 801C14C0 001BE400  40 80 00 08 */	bge lbl_801C14C8
/* 801C14C4 001BE404  3B C0 00 01 */	li r30, 1
lbl_801C14C8:
/* 801C14C8 001BE408  2C 1F 00 00 */	cmpwi r31, 0
/* 801C14CC 001BE40C  41 82 00 0C */	beq lbl_801C14D8
/* 801C14D0 001BE410  2C 1E 00 00 */	cmpwi r30, 0
/* 801C14D4 001BE414  40 82 00 2C */	bne lbl_801C1500
lbl_801C14D8:
/* 801C14D8 001BE418  2C 1F 00 00 */	cmpwi r31, 0
/* 801C14DC 001BE41C  40 82 00 10 */	bne lbl_801C14EC
/* 801C14E0 001BE420  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C14E4 001BE424  D0 1D 03 54 */	stfs f0, 0x378(r29)
/* 801C14E8 001BE428  48 00 00 C8 */	b lbl_801C15B0
lbl_801C14EC:
/* 801C14EC 001BE42C  2C 1E 00 00 */	cmpwi r30, 0
/* 801C14F0 001BE430  40 82 00 C0 */	bne lbl_801C15B0
/* 801C14F4 001BE434  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C14F8 001BE438  D0 1D 03 54 */	stfs f0, 0x378(r29)
/* 801C14FC 001BE43C  48 00 00 B4 */	b lbl_801C15B0
lbl_801C1500:
/* 801C1500 001BE440  7C 1E F8 00 */	cmpw r30, r31
/* 801C1504 001BE444  40 81 00 40 */	ble lbl_801C1544
/* 801C1508 001BE448  3C 60 43 30 */	lis r3, 0x4330
/* 801C150C 001BE44C  6F C4 80 00 */	xoris r4, r30, 0x8000
/* 801C1510 001BE450  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 801C1514 001BE454  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C1518 001BE458  C8 42 B1 68 */	lfd f2, lbl_805194C8@sda21(r2)
/* 801C151C 001BE45C  90 61 00 08 */	stw r3, 8(r1)
/* 801C1520 001BE460  C8 01 00 08 */	lfd f0, 8(r1)
/* 801C1524 001BE464  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1528 001BE468  EC 20 10 28 */	fsubs f1, f0, f2
/* 801C152C 001BE46C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C1530 001BE470  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C1534 001BE474  EC 00 10 28 */	fsubs f0, f0, f2
/* 801C1538 001BE478  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C153C 001BE47C  D0 1D 03 50 */	stfs f0, 0x374(r29)
/* 801C1540 001BE480  48 00 00 3C */	b lbl_801C157C
lbl_801C1544:
/* 801C1544 001BE484  3C 60 43 30 */	lis r3, 0x4330
/* 801C1548 001BE488  6F E4 80 00 */	xoris r4, r31, 0x8000
/* 801C154C 001BE48C  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 801C1550 001BE490  90 81 00 14 */	stw r4, 0x14(r1)
/* 801C1554 001BE494  C8 42 B1 68 */	lfd f2, lbl_805194C8@sda21(r2)
/* 801C1558 001BE498  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C155C 001BE49C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C1560 001BE4A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C1564 001BE4A4  EC 20 10 28 */	fsubs f1, f0, f2
/* 801C1568 001BE4A8  90 61 00 08 */	stw r3, 8(r1)
/* 801C156C 001BE4AC  C8 01 00 08 */	lfd f0, 8(r1)
/* 801C1570 001BE4B0  EC 00 10 28 */	fsubs f0, f0, f2
/* 801C1574 001BE4B4  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C1578 001BE4B8  D0 1D 03 50 */	stfs f0, 0x374(r29)
lbl_801C157C:
/* 801C157C 001BE4BC  C8 22 B1 60 */	lfd f1, lbl_805194C0@sda21(r2)
/* 801C1580 001BE4C0  4B F0 E4 6D */	bl log10
/* 801C1584 001BE4C4  FF E0 08 18 */	frsp f31, f1
/* 801C1588 001BE4C8  C0 3D 03 50 */	lfs f1, 0x374(r29)
/* 801C158C 001BE4CC  4B F0 E4 61 */	bl log10
/* 801C1590 001BE4D0  FC 00 08 18 */	frsp f0, f1
/* 801C1594 001BE4D4  7C 1F F0 00 */	cmpw r31, r30
/* 801C1598 001BE4D8  EC 00 F8 24 */	fdivs f0, f0, f31
/* 801C159C 001BE4DC  D0 1D 03 54 */	stfs f0, 0x378(r29)
/* 801C15A0 001BE4E0  40 80 00 10 */	bge lbl_801C15B0
/* 801C15A4 001BE4E4  C0 1D 03 54 */	lfs f0, 0x378(r29)
/* 801C15A8 001BE4E8  FC 00 00 50 */	fneg f0, f0
/* 801C15AC 001BE4EC  D0 1D 03 54 */	stfs f0, 0x378(r29)
lbl_801C15B0:
/* 801C15B0 001BE4F0  88 7D 00 34 */	lbz r3, 0x34(r29)
lbl_801C15B4:
/* 801C15B4 001BE4F4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801C15B8 001BE4F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C15BC 001BE4FC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801C15C0 001BE500  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801C15C4 001BE504  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801C15C8 001BE508  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801C15CC 001BE50C  7C 08 03 A6 */	mtlr r0
/* 801C15D0 001BE510  38 21 00 40 */	addi r1, r1, 0x40
/* 801C15D4 001BE514  4E 80 00 20 */	blr 
.else
.global doUpdate__Q24Game13VsGameSectionFv
doUpdate__Q24Game13VsGameSectionFv:
/* 801C1420 001BE360  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C1424 001BE364  7C 08 02 A6 */	mflr r0
/* 801C1428 001BE368  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C142C 001BE36C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801C1430 001BE370  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801C1434 001BE374  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801C1438 001BE378  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801C143C 001BE37C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801C1440 001BE380  7C 7D 1B 78 */	mr r29, r3
/* 801C1444 001BE384  88 03 02 04 */	lbz r0, 0x204(r3)
/* 801C1448 001BE388  28 00 00 00 */	cmplwi r0, 0
/* 801C144C 001BE38C  41 82 00 14 */	beq lbl_801C1460
/* 801C1450 001BE390  38 00 00 00 */	li r0, 0
/* 801C1454 001BE394  38 60 00 00 */	li r3, 0
/* 801C1458 001BE398  98 1D 00 34 */	stb r0, 0x34(r29)
/* 801C145C 001BE39C  48 00 01 58 */	b lbl_801C15B4
lbl_801C1460:
/* 801C1460 001BE3A0  80 7D 01 7C */	lwz r3, 0x17c(r29)
/* 801C1464 001BE3A4  7F A4 EB 78 */	mr r4, r29
/* 801C1468 001BE3A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C146C 001BE3AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C1470 001BE3B0  7D 89 03 A6 */	mtctr r12
/* 801C1474 001BE3B4  4E 80 04 21 */	bctrl 
/* 801C1478 001BE3B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C147C 001BE3BC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801C1480 001BE3C0  2C 00 00 01 */	cmpwi r0, 1
/* 801C1484 001BE3C4  40 82 01 2C */	bne lbl_801C15B0
/* 801C1488 001BE3C8  38 60 00 01 */	li r3, 1
/* 801C148C 001BE3CC  48 00 F9 D5 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C1490 001BE3D0  80 9D 03 44 */	lwz r4, 0x344(r29)
/* 801C1494 001BE3D4  38 04 FF FD */	addi r0, r4, -3
/* 801C1498 001BE3D8  7F E0 18 50 */	subf r31, r0, r3
/* 801C149C 001BE3DC  38 60 00 00 */	li r3, 0
/* 801C14A0 001BE3E0  48 00 F9 C1 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C14A4 001BE3E4  80 9D 03 48 */	lwz r4, 0x348(r29)
/* 801C14A8 001BE3E8  2C 1F 00 00 */	cmpwi r31, 0
/* 801C14AC 001BE3EC  38 04 FF FD */	addi r0, r4, -3
/* 801C14B0 001BE3F0  7F C0 18 50 */	subf r30, r0, r3
/* 801C14B4 001BE3F4  40 80 00 08 */	bge lbl_801C14BC
/* 801C14B8 001BE3F8  3B E0 00 01 */	li r31, 1
lbl_801C14BC:
/* 801C14BC 001BE3FC  2C 1E 00 00 */	cmpwi r30, 0
/* 801C14C0 001BE400  40 80 00 08 */	bge lbl_801C14C8
/* 801C14C4 001BE404  3B C0 00 01 */	li r30, 1
lbl_801C14C8:
/* 801C14C8 001BE408  2C 1F 00 00 */	cmpwi r31, 0
/* 801C14CC 001BE40C  41 82 00 0C */	beq lbl_801C14D8
/* 801C14D0 001BE410  2C 1E 00 00 */	cmpwi r30, 0
/* 801C14D4 001BE414  40 82 00 2C */	bne lbl_801C1500
lbl_801C14D8:
/* 801C14D8 001BE418  2C 1F 00 00 */	cmpwi r31, 0
/* 801C14DC 001BE41C  40 82 00 10 */	bne lbl_801C14EC
/* 801C14E0 001BE420  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C14E4 001BE424  D0 1D 03 54 */	stfs f0, 0x354(r29)
/* 801C14E8 001BE428  48 00 00 C8 */	b lbl_801C15B0
lbl_801C14EC:
/* 801C14EC 001BE42C  2C 1E 00 00 */	cmpwi r30, 0
/* 801C14F0 001BE430  40 82 00 C0 */	bne lbl_801C15B0
/* 801C14F4 001BE434  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C14F8 001BE438  D0 1D 03 54 */	stfs f0, 0x354(r29)
/* 801C14FC 001BE43C  48 00 00 B4 */	b lbl_801C15B0
lbl_801C1500:
/* 801C1500 001BE440  7C 1E F8 00 */	cmpw r30, r31
/* 801C1504 001BE444  40 81 00 40 */	ble lbl_801C1544
/* 801C1508 001BE448  3C 60 43 30 */	lis r3, 0x4330
/* 801C150C 001BE44C  6F C4 80 00 */	xoris r4, r30, 0x8000
/* 801C1510 001BE450  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 801C1514 001BE454  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C1518 001BE458  C8 42 B1 68 */	lfd f2, lbl_805194C8@sda21(r2)
/* 801C151C 001BE45C  90 61 00 08 */	stw r3, 8(r1)
/* 801C1520 001BE460  C8 01 00 08 */	lfd f0, 8(r1)
/* 801C1524 001BE464  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1528 001BE468  EC 20 10 28 */	fsubs f1, f0, f2
/* 801C152C 001BE46C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C1530 001BE470  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C1534 001BE474  EC 00 10 28 */	fsubs f0, f0, f2
/* 801C1538 001BE478  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C153C 001BE47C  D0 1D 03 50 */	stfs f0, 0x350(r29)
/* 801C1540 001BE480  48 00 00 3C */	b lbl_801C157C
lbl_801C1544:
/* 801C1544 001BE484  3C 60 43 30 */	lis r3, 0x4330
/* 801C1548 001BE488  6F E4 80 00 */	xoris r4, r31, 0x8000
/* 801C154C 001BE48C  6F C0 80 00 */	xoris r0, r30, 0x8000
/* 801C1550 001BE490  90 81 00 14 */	stw r4, 0x14(r1)
/* 801C1554 001BE494  C8 42 B1 68 */	lfd f2, lbl_805194C8@sda21(r2)
/* 801C1558 001BE498  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C155C 001BE49C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C1560 001BE4A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C1564 001BE4A4  EC 20 10 28 */	fsubs f1, f0, f2
/* 801C1568 001BE4A8  90 61 00 08 */	stw r3, 8(r1)
/* 801C156C 001BE4AC  C8 01 00 08 */	lfd f0, 8(r1)
/* 801C1570 001BE4B0  EC 00 10 28 */	fsubs f0, f0, f2
/* 801C1574 001BE4B4  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C1578 001BE4B8  D0 1D 03 50 */	stfs f0, 0x350(r29)
lbl_801C157C:
/* 801C157C 001BE4BC  C8 22 B1 60 */	lfd f1, lbl_805194C0@sda21(r2)
/* 801C1580 001BE4C0  4B F0 E4 6D */	bl log10
/* 801C1584 001BE4C4  FF E0 08 18 */	frsp f31, f1
/* 801C1588 001BE4C8  C0 3D 03 50 */	lfs f1, 0x350(r29)
/* 801C158C 001BE4CC  4B F0 E4 61 */	bl log10
/* 801C1590 001BE4D0  FC 00 08 18 */	frsp f0, f1
/* 801C1594 001BE4D4  7C 1F F0 00 */	cmpw r31, r30
/* 801C1598 001BE4D8  EC 00 F8 24 */	fdivs f0, f0, f31
/* 801C159C 001BE4DC  D0 1D 03 54 */	stfs f0, 0x354(r29)
/* 801C15A0 001BE4E0  40 80 00 10 */	bge lbl_801C15B0
/* 801C15A4 001BE4E4  C0 1D 03 54 */	lfs f0, 0x354(r29)
/* 801C15A8 001BE4E8  FC 00 00 50 */	fneg f0, f0
/* 801C15AC 001BE4EC  D0 1D 03 54 */	stfs f0, 0x354(r29)
lbl_801C15B0:
/* 801C15B0 001BE4F0  88 7D 00 34 */	lbz r3, 0x34(r29)
lbl_801C15B4:
/* 801C15B4 001BE4F4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801C15B8 001BE4F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C15BC 001BE4FC  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801C15C0 001BE500  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801C15C4 001BE504  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801C15C8 001BE508  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801C15CC 001BE50C  7C 08 03 A6 */	mtlr r0
/* 801C15D0 001BE510  38 21 00 40 */	addi r1, r1, 0x40
/* 801C15D4 001BE514  4E 80 00 20 */	blr 
.endif

.if version == 1
.global pre2dDraw__Q24Game13VsGameSectionFR8Graphics
pre2dDraw__Q24Game13VsGameSectionFR8Graphics:
/* 801C15D8 001BE518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C15DC 001BE51C  7C 08 02 A6 */	mflr r0
/* 801C15E0 001BE520  7C 65 1B 78 */	mr r5, r3
/* 801C15E4 001BE524  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C15E8 001BE528  80 63 01 80 */	lwz r3, 0x1a4(r3)
/* 801C15EC 001BE52C  28 03 00 00 */	cmplwi r3, 0
/* 801C15F0 001BE530  41 82 00 14 */	beq lbl_801C1604
/* 801C15F4 001BE534  81 83 00 00 */	lwz r12, 0(r3)
/* 801C15F8 001BE538  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C15FC 001BE53C  7D 89 03 A6 */	mtctr r12
/* 801C1600 001BE540  4E 80 04 21 */	bctrl 
lbl_801C1604:
/* 801C1604 001BE544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1608 001BE548  7C 08 03 A6 */	mtlr r0
/* 801C160C 001BE54C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1610 001BE550  4E 80 00 20 */	blr 
.else
.global pre2dDraw__Q24Game13VsGameSectionFR8Graphics
pre2dDraw__Q24Game13VsGameSectionFR8Graphics:
/* 801C15D8 001BE518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C15DC 001BE51C  7C 08 02 A6 */	mflr r0
/* 801C15E0 001BE520  7C 65 1B 78 */	mr r5, r3
/* 801C15E4 001BE524  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C15E8 001BE528  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801C15EC 001BE52C  28 03 00 00 */	cmplwi r3, 0
/* 801C15F0 001BE530  41 82 00 14 */	beq lbl_801C1604
/* 801C15F4 001BE534  81 83 00 00 */	lwz r12, 0(r3)
/* 801C15F8 001BE538  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C15FC 001BE53C  7D 89 03 A6 */	mtctr r12
/* 801C1600 001BE540  4E 80 04 21 */	bctrl 
lbl_801C1604:
/* 801C1604 001BE544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1608 001BE548  7C 08 03 A6 */	mtlr r0
/* 801C160C 001BE54C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1610 001BE550  4E 80 00 20 */	blr 
.endif

.global pre2dDraw__Q34Game6VsGame5StateFR8GraphicsPQ24Game13VsGameSection
pre2dDraw__Q34Game6VsGame5StateFR8GraphicsPQ24Game13VsGameSection:
/* 801C1614 001BE554  4E 80 00 20 */	blr 

.if version == 1
.global doDraw__Q24Game13VsGameSectionFR8Graphics
doDraw__Q24Game13VsGameSectionFR8Graphics:
/* 801C1618 001BE558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C161C 001BE55C  7C 08 02 A6 */	mflr r0
/* 801C1620 001BE560  7C 66 1B 78 */	mr r6, r3
/* 801C1624 001BE564  7C 85 23 78 */	mr r5, r4
/* 801C1628 001BE568  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C162C 001BE56C  88 03 02 04 */	lbz r0, 0x228(r3)
/* 801C1630 001BE570  28 00 00 00 */	cmplwi r0, 0
/* 801C1634 001BE574  40 82 00 24 */	bne lbl_801C1658
/* 801C1638 001BE578  80 66 01 80 */	lwz r3, 0x1a4(r6)
/* 801C163C 001BE57C  28 03 00 00 */	cmplwi r3, 0
/* 801C1640 001BE580  41 82 00 18 */	beq lbl_801C1658
/* 801C1644 001BE584  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1648 001BE588  7C C4 33 78 */	mr r4, r6
/* 801C164C 001BE58C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C1650 001BE590  7D 89 03 A6 */	mtctr r12
/* 801C1654 001BE594  4E 80 04 21 */	bctrl 
lbl_801C1658:
/* 801C1658 001BE598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C165C 001BE59C  7C 08 03 A6 */	mtlr r0
/* 801C1660 001BE5A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1664 001BE5A4  4E 80 00 20 */	blr 
.else
.global doDraw__Q24Game13VsGameSectionFR8Graphics
doDraw__Q24Game13VsGameSectionFR8Graphics:
/* 801C1618 001BE558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C161C 001BE55C  7C 08 02 A6 */	mflr r0
/* 801C1620 001BE560  7C 66 1B 78 */	mr r6, r3
/* 801C1624 001BE564  7C 85 23 78 */	mr r5, r4
/* 801C1628 001BE568  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C162C 001BE56C  88 03 02 04 */	lbz r0, 0x204(r3)
/* 801C1630 001BE570  28 00 00 00 */	cmplwi r0, 0
/* 801C1634 001BE574  40 82 00 24 */	bne lbl_801C1658
/* 801C1638 001BE578  80 66 01 80 */	lwz r3, 0x180(r6)
/* 801C163C 001BE57C  28 03 00 00 */	cmplwi r3, 0
/* 801C1640 001BE580  41 82 00 18 */	beq lbl_801C1658
/* 801C1644 001BE584  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1648 001BE588  7C C4 33 78 */	mr r4, r6
/* 801C164C 001BE58C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801C1650 001BE590  7D 89 03 A6 */	mtctr r12
/* 801C1654 001BE594  4E 80 04 21 */	bctrl 
lbl_801C1658:
/* 801C1658 001BE598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C165C 001BE59C  7C 08 03 A6 */	mtlr r0
/* 801C1660 001BE5A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1664 001BE5A4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onSetSoundScene__Q24Game13VsGameSectionFv
onSetSoundScene__Q24Game13VsGameSectionFv:
/* 801C1668 001BE5A8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C166C 001BE5AC  7C 08 02 A6 */	mflr r0
/* 801C1670 001BE5B0  3C 80 80 48 */	lis r4, lbl_8047FF98@ha
/* 801C1674 001BE5B4  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C1678 001BE5B8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801C167C 001BE5BC  3B E4 FF 98 */	addi r31, r4, lbl_8047FF98@l
/* 801C1680 001BE5C0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801C1684 001BE5C4  7C 7E 1B 78 */	mr r30, r3
/* 801C1688 001BE5C8  38 61 00 08 */	addi r3, r1, 8
/* 801C168C 001BE5CC  48 17 3E 25 */	bl __ct__Q26PSGame9SceneInfoFv
/* 801C1690 001BE5D0  3C A0 80 4B */	lis r5, __vt__Q26PSGame13CaveFloorInfo@ha
/* 801C1694 001BE5D4  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 801C1698 001BE5D8  38 80 00 00 */	li r4, 0
/* 801C169C 001BE5DC  38 00 00 FF */	li r0, 0xff
/* 801C16A0 001BE5E0  38 A5 12 50 */	addi r5, r5, __vt__Q26PSGame13CaveFloorInfo@l
/* 801C16A4 001BE5E4  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 801C16A8 001BE5E8  90 A1 00 08 */	stw r5, 8(r1)
/* 801C16AC 001BE5EC  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801C16B0 001BE5F0  90 81 00 40 */	stw r4, 0x40(r1)
/* 801C16B4 001BE5F4  90 81 00 44 */	stw r4, 0x44(r1)
/* 801C16B8 001BE5F8  98 81 00 48 */	stb r4, 0x48(r1)
/* 801C16BC 001BE5FC  90 61 00 4C */	stw r3, 0x4c(r1)
/* 801C16C0 001BE600  98 01 00 50 */	stb r0, 0x50(r1)
/* 801C16C4 001BE604  98 01 00 51 */	stb r0, 0x51(r1)
/* 801C16C8 001BE608  80 05 00 44 */	lwz r0, 0x44(r5)
/* 801C16CC 001BE60C  2C 00 00 02 */	cmpwi r0, 2
/* 801C16D0 001BE610  41 82 00 0C */	beq lbl_801C16DC
/* 801C16D4 001BE614  2C 00 00 03 */	cmpwi r0, 3
/* 801C16D8 001BE618  40 82 00 08 */	bne lbl_801C16E0
lbl_801C16DC:
/* 801C16DC 001BE61C  38 80 00 01 */	li r4, 1
lbl_801C16E0:
/* 801C16E0 001BE620  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801C16E4 001BE624  41 82 00 30 */	beq lbl_801C1714
/* 801C16E8 001BE628  38 00 00 06 */	li r0, 6
/* 801C16EC 001BE62C  7F C3 F3 78 */	mr r3, r30
/* 801C16F0 001BE630  98 01 00 0E */	stb r0, 0xe(r1)
/* 801C16F4 001BE634  81 9E 00 00 */	lwz r12, 0(r30)
/* 801C16F8 001BE638  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 801C16FC 001BE63C  7D 89 03 A6 */	mtctr r12
/* 801C1700 001BE640  4E 80 04 21 */	bctrl 
/* 801C1704 001BE644  98 61 00 48 */	stb r3, 0x48(r1)
/* 801C1708 001BE648  80 1E 03 38 */	lwz r0, 0x35c(r30)
/* 801C170C 001BE64C  98 01 00 51 */	stb r0, 0x51(r1)
/* 801C1710 001BE650  48 00 00 14 */	b lbl_801C1724
lbl_801C1714:
/* 801C1714 001BE654  38 00 00 07 */	li r0, 7
/* 801C1718 001BE658  98 01 00 0E */	stb r0, 0xe(r1)
/* 801C171C 001BE65C  80 1E 03 40 */	lwz r0, 0x364(r30)
/* 801C1720 001BE660  98 01 00 48 */	stb r0, 0x48(r1)
lbl_801C1724:
/* 801C1724 001BE664  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 801C1728 001BE668  38 60 00 00 */	li r3, 0
/* 801C172C 001BE66C  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801C1730 001BE670  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 801C1734 001BE674  80 04 02 2C */	lwz r0, 0x22c(r4)
/* 801C1738 001BE678  90 01 00 40 */	stw r0, 0x40(r1)
/* 801C173C 001BE67C  90 61 00 44 */	stw r3, 0x44(r1)
/* 801C1740 001BE680  80 05 00 44 */	lwz r0, 0x44(r5)
/* 801C1744 001BE684  2C 00 00 01 */	cmpwi r0, 1
/* 801C1748 001BE688  41 82 00 0C */	beq lbl_801C1754
/* 801C174C 001BE68C  2C 00 00 03 */	cmpwi r0, 3
/* 801C1750 001BE690  40 82 00 08 */	bne lbl_801C1758
lbl_801C1754:
/* 801C1754 001BE694  38 60 00 01 */	li r3, 1
lbl_801C1758:
/* 801C1758 001BE698  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C175C 001BE69C  40 82 00 18 */	bne lbl_801C1774
/* 801C1760 001BE6A0  38 61 00 08 */	addi r3, r1, 8
/* 801C1764 001BE6A4  38 80 00 00 */	li r4, 0
/* 801C1768 001BE6A8  38 A0 00 01 */	li r5, 1
/* 801C176C 001BE6AC  48 17 3D 7D */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
/* 801C1770 001BE6B0  48 00 00 14 */	b lbl_801C1784
lbl_801C1774:
/* 801C1774 001BE6B4  38 61 00 08 */	addi r3, r1, 8
/* 801C1778 001BE6B8  38 80 00 01 */	li r4, 1
/* 801C177C 001BE6BC  38 A0 00 01 */	li r5, 1
/* 801C1780 001BE6C0  48 17 3D 69 */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
lbl_801C1784:
/* 801C1784 001BE6C4  7F C3 F3 78 */	mr r3, r30
/* 801C1788 001BE6C8  38 81 00 08 */	addi r4, r1, 8
/* 801C178C 001BE6CC  4B F8 C8 11 */	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
/* 801C1790 001BE6D0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801C1794 001BE6D4  28 00 00 00 */	cmplwi r0, 0
/* 801C1798 001BE6D8  40 82 00 18 */	bne lbl_801C17B0
/* 801C179C 001BE6DC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801C17A0 001BE6E0  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C17A4 001BE6E4  38 80 01 D3 */	li r4, 0x1d3
/* 801C17A8 001BE6E8  4C C6 31 82 */	crclr 6
/* 801C17AC 001BE6EC  4B E6 8E 95 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C17B0:
/* 801C17B0 001BE6F0  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 801C17B4 001BE6F4  38 81 00 08 */	addi r4, r1, 8
/* 801C17B8 001BE6F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C17BC 001BE6FC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C17C0 001BE700  7D 89 03 A6 */	mtctr r12
/* 801C17C4 001BE704  4E 80 04 21 */	bctrl 
/* 801C17C8 001BE708  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801C17CC 001BE70C  28 00 00 00 */	cmplwi r0, 0
/* 801C17D0 001BE710  40 82 00 18 */	bne lbl_801C17E8
/* 801C17D4 001BE714  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801C17D8 001BE718  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C17DC 001BE71C  38 80 01 D3 */	li r4, 0x1d3
/* 801C17E0 001BE720  4C C6 31 82 */	crclr 6
/* 801C17E4 001BE724  4B E6 8E 5D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C17E8:
/* 801C17E8 001BE728  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 801C17EC 001BE72C  80 1E 00 04 */	lwz r0, 4(r30)
/* 801C17F0 001BE730  28 00 00 00 */	cmplwi r0, 0
/* 801C17F4 001BE734  40 82 00 18 */	bne lbl_801C180C
/* 801C17F8 001BE738  38 7F 00 34 */	addi r3, r31, 0x34
/* 801C17FC 001BE73C  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C1800 001BE740  38 80 00 C7 */	li r4, 0xc7
/* 801C1804 001BE744  4C C6 31 82 */	crclr 6
/* 801C1808 001BE748  4B E6 8E 39 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C180C:
/* 801C180C 001BE74C  80 7E 00 04 */	lwz r3, 4(r30)
/* 801C1810 001BE750  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1814 001BE754  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1818 001BE758  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C181C 001BE75C  7D 89 03 A6 */	mtctr r12
/* 801C1820 001BE760  4E 80 04 21 */	bctrl 
/* 801C1824 001BE764  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C1828 001BE768  4B F9 90 A9 */	bl createPSMDirectorUpdator__Q24Game7NaviMgrFv
/* 801C182C 001BE76C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C1830 001BE770  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801C1834 001BE774  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801C1838 001BE778  7C 08 03 A6 */	mtlr r0
/* 801C183C 001BE77C  38 21 00 60 */	addi r1, r1, 0x60
/* 801C1840 001BE780  4E 80 00 20 */	blr 
.else
.global onSetSoundScene__Q24Game13VsGameSectionFv
onSetSoundScene__Q24Game13VsGameSectionFv:
/* 801C1668 001BE5A8  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C166C 001BE5AC  7C 08 02 A6 */	mflr r0
/* 801C1670 001BE5B0  3C 80 80 48 */	lis r4, lbl_8047FF98@ha
/* 801C1674 001BE5B4  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C1678 001BE5B8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801C167C 001BE5BC  3B E4 FF 98 */	addi r31, r4, lbl_8047FF98@l
/* 801C1680 001BE5C0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801C1684 001BE5C4  7C 7E 1B 78 */	mr r30, r3
/* 801C1688 001BE5C8  38 61 00 08 */	addi r3, r1, 8
/* 801C168C 001BE5CC  48 17 3E 25 */	bl __ct__Q26PSGame9SceneInfoFv
/* 801C1690 001BE5D0  3C A0 80 4B */	lis r5, __vt__Q26PSGame13CaveFloorInfo@ha
/* 801C1694 001BE5D4  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 801C1698 001BE5D8  38 80 00 00 */	li r4, 0
/* 801C169C 001BE5DC  38 00 00 FF */	li r0, 0xff
/* 801C16A0 001BE5E0  38 A5 12 50 */	addi r5, r5, __vt__Q26PSGame13CaveFloorInfo@l
/* 801C16A4 001BE5E4  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 801C16A8 001BE5E8  90 A1 00 08 */	stw r5, 8(r1)
/* 801C16AC 001BE5EC  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801C16B0 001BE5F0  90 81 00 40 */	stw r4, 0x40(r1)
/* 801C16B4 001BE5F4  90 81 00 44 */	stw r4, 0x44(r1)
/* 801C16B8 001BE5F8  98 81 00 48 */	stb r4, 0x48(r1)
/* 801C16BC 001BE5FC  90 61 00 4C */	stw r3, 0x4c(r1)
/* 801C16C0 001BE600  98 01 00 50 */	stb r0, 0x50(r1)
/* 801C16C4 001BE604  98 01 00 51 */	stb r0, 0x51(r1)
/* 801C16C8 001BE608  80 05 00 44 */	lwz r0, 0x44(r5)
/* 801C16CC 001BE60C  2C 00 00 02 */	cmpwi r0, 2
/* 801C16D0 001BE610  41 82 00 0C */	beq lbl_801C16DC
/* 801C16D4 001BE614  2C 00 00 03 */	cmpwi r0, 3
/* 801C16D8 001BE618  40 82 00 08 */	bne lbl_801C16E0
lbl_801C16DC:
/* 801C16DC 001BE61C  38 80 00 01 */	li r4, 1
lbl_801C16E0:
/* 801C16E0 001BE620  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801C16E4 001BE624  41 82 00 30 */	beq lbl_801C1714
/* 801C16E8 001BE628  38 00 00 06 */	li r0, 6
/* 801C16EC 001BE62C  7F C3 F3 78 */	mr r3, r30
/* 801C16F0 001BE630  98 01 00 0E */	stb r0, 0xe(r1)
/* 801C16F4 001BE634  81 9E 00 00 */	lwz r12, 0(r30)
/* 801C16F8 001BE638  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 801C16FC 001BE63C  7D 89 03 A6 */	mtctr r12
/* 801C1700 001BE640  4E 80 04 21 */	bctrl 
/* 801C1704 001BE644  98 61 00 48 */	stb r3, 0x48(r1)
/* 801C1708 001BE648  80 1E 03 38 */	lwz r0, 0x338(r30)
/* 801C170C 001BE64C  98 01 00 51 */	stb r0, 0x51(r1)
/* 801C1710 001BE650  48 00 00 14 */	b lbl_801C1724
lbl_801C1714:
/* 801C1714 001BE654  38 00 00 07 */	li r0, 7
/* 801C1718 001BE658  98 01 00 0E */	stb r0, 0xe(r1)
/* 801C171C 001BE65C  80 1E 03 40 */	lwz r0, 0x340(r30)
/* 801C1720 001BE660  98 01 00 48 */	stb r0, 0x48(r1)
lbl_801C1724:
/* 801C1724 001BE664  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 801C1728 001BE668  38 60 00 00 */	li r3, 0
/* 801C172C 001BE66C  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801C1730 001BE670  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 801C1734 001BE674  80 04 02 2C */	lwz r0, 0x22c(r4)
/* 801C1738 001BE678  90 01 00 40 */	stw r0, 0x40(r1)
/* 801C173C 001BE67C  90 61 00 44 */	stw r3, 0x44(r1)
/* 801C1740 001BE680  80 05 00 44 */	lwz r0, 0x44(r5)
/* 801C1744 001BE684  2C 00 00 01 */	cmpwi r0, 1
/* 801C1748 001BE688  41 82 00 0C */	beq lbl_801C1754
/* 801C174C 001BE68C  2C 00 00 03 */	cmpwi r0, 3
/* 801C1750 001BE690  40 82 00 08 */	bne lbl_801C1758
lbl_801C1754:
/* 801C1754 001BE694  38 60 00 01 */	li r3, 1
lbl_801C1758:
/* 801C1758 001BE698  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C175C 001BE69C  40 82 00 18 */	bne lbl_801C1774
/* 801C1760 001BE6A0  38 61 00 08 */	addi r3, r1, 8
/* 801C1764 001BE6A4  38 80 00 00 */	li r4, 0
/* 801C1768 001BE6A8  38 A0 00 01 */	li r5, 1
/* 801C176C 001BE6AC  48 17 3D 7D */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
/* 801C1770 001BE6B0  48 00 00 14 */	b lbl_801C1784
lbl_801C1774:
/* 801C1774 001BE6B4  38 61 00 08 */	addi r3, r1, 8
/* 801C1778 001BE6B8  38 80 00 01 */	li r4, 1
/* 801C177C 001BE6BC  38 A0 00 01 */	li r5, 1
/* 801C1780 001BE6C0  48 17 3D 69 */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
lbl_801C1784:
/* 801C1784 001BE6C4  7F C3 F3 78 */	mr r3, r30
/* 801C1788 001BE6C8  38 81 00 08 */	addi r4, r1, 8
/* 801C178C 001BE6CC  4B F8 C8 11 */	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
/* 801C1790 001BE6D0  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801C1794 001BE6D4  28 00 00 00 */	cmplwi r0, 0
/* 801C1798 001BE6D8  40 82 00 18 */	bne lbl_801C17B0
/* 801C179C 001BE6DC  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801C17A0 001BE6E0  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C17A4 001BE6E4  38 80 01 D3 */	li r4, 0x1d3
/* 801C17A8 001BE6E8  4C C6 31 82 */	crclr 6
/* 801C17AC 001BE6EC  4B E6 8E 95 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C17B0:
/* 801C17B0 001BE6F0  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 801C17B4 001BE6F4  38 81 00 08 */	addi r4, r1, 8
/* 801C17B8 001BE6F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C17BC 001BE6FC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C17C0 001BE700  7D 89 03 A6 */	mtctr r12
/* 801C17C4 001BE704  4E 80 04 21 */	bctrl 
/* 801C17C8 001BE708  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801C17CC 001BE70C  28 00 00 00 */	cmplwi r0, 0
/* 801C17D0 001BE710  40 82 00 18 */	bne lbl_801C17E8
/* 801C17D4 001BE714  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801C17D8 001BE718  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C17DC 001BE71C  38 80 01 D3 */	li r4, 0x1d3
/* 801C17E0 001BE720  4C C6 31 82 */	crclr 6
/* 801C17E4 001BE724  4B E6 8E 5D */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C17E8:
/* 801C17E8 001BE728  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 801C17EC 001BE72C  80 1E 00 04 */	lwz r0, 4(r30)
/* 801C17F0 001BE730  28 00 00 00 */	cmplwi r0, 0
/* 801C17F4 001BE734  40 82 00 18 */	bne lbl_801C180C
/* 801C17F8 001BE738  38 7F 00 34 */	addi r3, r31, 0x34
/* 801C17FC 001BE73C  38 BF 00 28 */	addi r5, r31, 0x28
/* 801C1800 001BE740  38 80 00 C7 */	li r4, 0xc7
/* 801C1804 001BE744  4C C6 31 82 */	crclr 6
/* 801C1808 001BE748  4B E6 8E 39 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C180C:
/* 801C180C 001BE74C  80 7E 00 04 */	lwz r3, 4(r30)
/* 801C1810 001BE750  80 63 00 04 */	lwz r3, 4(r3)
/* 801C1814 001BE754  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1818 001BE758  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801C181C 001BE75C  7D 89 03 A6 */	mtctr r12
/* 801C1820 001BE760  4E 80 04 21 */	bctrl 
/* 801C1824 001BE764  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C1828 001BE768  4B F9 90 A9 */	bl createPSMDirectorUpdator__Q24Game7NaviMgrFv
/* 801C182C 001BE76C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C1830 001BE770  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801C1834 001BE774  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801C1838 001BE778  7C 08 03 A6 */	mtlr r0
/* 801C183C 001BE77C  38 21 00 60 */	addi r1, r1, 0x60
/* 801C1840 001BE780  4E 80 00 20 */	blr 
.endif

.global initPlayData__Q24Game13VsGameSectionFv
initPlayData__Q24Game13VsGameSectionFv:
/* 801C1844 001BE784  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1848 001BE788  7C 08 02 A6 */	mflr r0
/* 801C184C 001BE78C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1850 001BE790  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C1854 001BE794  48 02 52 6D */	bl reset__Q24Game8PlayDataFv
/* 801C1858 001BE798  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C185C 001BE79C  38 80 00 01 */	li r4, 1
/* 801C1860 001BE7A0  38 A0 00 01 */	li r5, 1
/* 801C1864 001BE7A4  48 02 56 2D */	bl setDevelopSetting__Q24Game8PlayDataFbb
/* 801C1868 001BE7A8  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 801C186C 001BE7AC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C1870 001BE7B0  80 84 00 C8 */	lwz r4, 0xc8(r4)
/* 801C1874 001BE7B4  C0 04 09 D0 */	lfs f0, 0x9d0(r4)
/* 801C1878 001BE7B8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801C187C 001BE7BC  80 8D 92 E0 */	lwz r4, naviMgr__4Game@sda21(r13)
/* 801C1880 001BE7C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C1884 001BE7C4  80 84 00 C8 */	lwz r4, 0xc8(r4)
/* 801C1888 001BE7C8  C0 04 09 D0 */	lfs f0, 0x9d0(r4)
/* 801C188C 001BE7CC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801C1890 001BE7D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1894 001BE7D4  7C 08 03 A6 */	mtlr r0
/* 801C1898 001BE7D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801C189C 001BE7DC  4E 80 00 20 */	blr 

.if version == 1
.global onSetupFloatMemory__Q24Game13VsGameSectionFv
onSetupFloatMemory__Q24Game13VsGameSectionFv:
/* 801C18A0 001BE7E0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C18A4 001BE7E4  7C 08 02 A6 */	mflr r0
/* 801C18A8 001BE7E8  3C 80 80 48 */	lis r4, lbl_8047FF98@ha
/* 801C18AC 001BE7EC  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C18B0 001BE7F0  38 00 00 00 */	li r0, 0
/* 801C18B4 001BE7F4  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 801C18B8 001BE7F8  7C 7A 1B 78 */	mr r26, r3
/* 801C18BC 001BE7FC  3B E4 FF 98 */	addi r31, r4, lbl_8047FF98@l
/* 801C18C0 001BE800  38 60 00 28 */	li r3, 0x28
/* 801C18C4 001BE804  90 0D 91 D8 */	stw r0, farmMgr__Q24Game4Farm@sda21(r13)
/* 801C18C8 001BE808  4B E6 25 DD */	bl __nw__FUl
/* 801C18CC 001BE80C  7C 60 1B 79 */	or. r0, r3, r3
/* 801C18D0 001BE810  41 82 00 0C */	beq lbl_801C18DC
/* 801C18D4 001BE814  48 07 3A 1D */	bl __ct__Q34Game6VsGame7TekiMgrFv
/* 801C18D8 001BE818  7C 60 1B 78 */	mr r0, r3
lbl_801C18DC:
/* 801C18DC 001BE81C  90 1A 03 2C */	stw r0, 0x350(r26)
/* 801C18E0 001BE820  38 60 01 14 */	li r3, 0x114
/* 801C18E4 001BE824  4B E6 25 C1 */	bl __nw__FUl
/* 801C18E8 001BE828  7C 60 1B 79 */	or. r0, r3, r3
/* 801C18EC 001BE82C  41 82 00 14 */	beq lbl_801C1900
/* 801C18F0 001BE830  80 BA 03 2C */	lwz r5, 0x350(r26)
/* 801C18F4 001BE834  7F 44 D3 78 */	mr r4, r26
/* 801C18F8 001BE838  48 07 3C 15 */	bl __ct__Q34Game6VsGame7CardMgrFPQ24Game13VsGameSectionPQ34Game6VsGame7TekiMgr
/* 801C18FC 001BE83C  7C 60 1B 78 */	mr r0, r3
lbl_801C1900:
/* 801C1900 001BE840  90 1A 03 30 */	stw r0, 0x354(r26)
/* 801C1904 001BE844  80 7A 03 30 */	lwz r3, 0x354(r26)
/* 801C1908 001BE848  48 07 3D A5 */	bl loadResource__Q34Game6VsGame7CardMgrFv
/* 801C190C 001BE84C  80 DF 00 50 */	lwz r6, 0x50(r31)
/* 801C1910 001BE850  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801C1914 001BE854  80 BF 00 54 */	lwz r5, 0x54(r31)
/* 801C1918 001BE858  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C191C 001BE85C  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 801C1920 001BE860  3B C1 00 0C */	addi r30, r1, 0xc
/* 801C1924 001BE864  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801C1928 001BE868  3B 64 A2 F4 */	addi r27, r4, __vt__Q24Game15CreatureInitArg@l
/* 801C192C 001BE86C  80 8D 84 80 */	lwz r4, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 801C1930 001BE870  3B 83 A2 B8 */	addi r28, r3, __vt__Q24Game13PelletInitArg@l
/* 801C1934 001BE874  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C1938 001BE878  3B 40 00 00 */	li r26, 0
/* 801C193C 001BE87C  80 6D 84 7C */	lwz r3, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 801C1940 001BE880  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1944 001BE884  80 0D 84 84 */	lwz r0, cBedamaYellow__13VsOtakaraName@sda21(r13)
/* 801C1948 001BE888  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C194C 001BE88C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C1950 001BE890  90 01 00 14 */	stw r0, 0x14(r1)
lbl_801C1954:
/* 801C1954 001BE894  93 61 00 18 */	stw r27, 0x18(r1)
/* 801C1958 001BE898  38 E0 00 00 */	li r7, 0
/* 801C195C 001BE89C  38 00 FF FF */	li r0, -1
/* 801C1960 001BE8A0  38 C0 00 FF */	li r6, 0xff
/* 801C1964 001BE8A4  38 A0 00 01 */	li r5, 1
/* 801C1968 001BE8A8  93 81 00 18 */	stw r28, 0x18(r1)
/* 801C196C 001BE8AC  80 7E 00 00 */	lwz r3, 0(r30)
/* 801C1970 001BE8B0  38 81 00 08 */	addi r4, r1, 8
/* 801C1974 001BE8B4  98 E1 00 34 */	stb r7, 0x34(r1)
/* 801C1978 001BE8B8  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801C197C 001BE8BC  98 C1 00 2E */	stb r6, 0x2e(r1)
/* 801C1980 001BE8C0  90 E1 00 30 */	stw r7, 0x30(r1)
/* 801C1984 001BE8C4  98 E1 00 2F */	stb r7, 0x2f(r1)
/* 801C1988 001BE8C8  98 A1 00 1C */	stb r5, 0x1c(r1)
/* 801C198C 001BE8CC  98 E1 00 35 */	stb r7, 0x35(r1)
/* 801C1990 001BE8D0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C1994 001BE8D4  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C1998 001BE8D8  98 E1 00 36 */	stb r7, 0x36(r1)
/* 801C199C 001BE8DC  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C19A0 001BE8E0  48 06 64 A1 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C19A4 001BE8E4  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C19A8 001BE8E8  40 82 00 18 */	bne lbl_801C19C0
/* 801C19AC 001BE8EC  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C19B0 001BE8F0  38 BF 00 70 */	addi r5, r31, 0x70
/* 801C19B4 001BE8F4  38 80 03 88 */	li r4, 0x388
/* 801C19B8 001BE8F8  4C C6 31 82 */	crclr 6
/* 801C19BC 001BE8FC  4B E6 8C 85 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C19C0:
/* 801C19C0 001BE900  A8 7D 02 58 */	lha r3, 0x258(r29)
/* 801C19C4 001BE904  38 81 00 18 */	addi r4, r1, 0x18
/* 801C19C8 001BE908  80 01 00 08 */	lwz r0, 8(r1)
/* 801C19CC 001BE90C  90 61 00 28 */	stw r3, 0x28(r1)
/* 801C19D0 001BE910  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C19D4 001BE914  80 BD 00 40 */	lwz r5, 0x40(r29)
/* 801C19D8 001BE918  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801C19DC 001BE91C  98 01 00 2E */	stb r0, 0x2e(r1)
/* 801C19E0 001BE920  4B FA BC FD */	bl setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C19E4 001BE924  3B 5A 00 01 */	addi r26, r26, 1
/* 801C19E8 001BE928  3B DE 00 04 */	addi r30, r30, 4
/* 801C19EC 001BE92C  2C 1A 00 03 */	cmpwi r26, 3
/* 801C19F0 001BE930  41 80 FF 64 */	blt lbl_801C1954
/* 801C19F4 001BE934  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 801C19F8 001BE938  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C19FC 001BE93C  7C 08 03 A6 */	mtlr r0
/* 801C1A00 001BE940  38 21 00 60 */	addi r1, r1, 0x60
/* 801C1A04 001BE944  4E 80 00 20 */	blr 
.else
.global onSetupFloatMemory__Q24Game13VsGameSectionFv
onSetupFloatMemory__Q24Game13VsGameSectionFv:
/* 801C18A0 001BE7E0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C18A4 001BE7E4  7C 08 02 A6 */	mflr r0
/* 801C18A8 001BE7E8  3C 80 80 48 */	lis r4, lbl_8047FF98@ha
/* 801C18AC 001BE7EC  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C18B0 001BE7F0  38 00 00 00 */	li r0, 0
/* 801C18B4 001BE7F4  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 801C18B8 001BE7F8  7C 7A 1B 78 */	mr r26, r3
/* 801C18BC 001BE7FC  3B E4 FF 98 */	addi r31, r4, lbl_8047FF98@l
/* 801C18C0 001BE800  38 60 00 28 */	li r3, 0x28
/* 801C18C4 001BE804  90 0D 91 D8 */	stw r0, farmMgr__Q24Game4Farm@sda21(r13)
/* 801C18C8 001BE808  4B E6 25 DD */	bl __nw__FUl
/* 801C18CC 001BE80C  7C 60 1B 79 */	or. r0, r3, r3
/* 801C18D0 001BE810  41 82 00 0C */	beq lbl_801C18DC
/* 801C18D4 001BE814  48 07 3A 1D */	bl __ct__Q34Game6VsGame7TekiMgrFv
/* 801C18D8 001BE818  7C 60 1B 78 */	mr r0, r3
lbl_801C18DC:
/* 801C18DC 001BE81C  90 1A 03 2C */	stw r0, 0x32c(r26)
/* 801C18E0 001BE820  38 60 01 14 */	li r3, 0x114
/* 801C18E4 001BE824  4B E6 25 C1 */	bl __nw__FUl
/* 801C18E8 001BE828  7C 60 1B 79 */	or. r0, r3, r3
/* 801C18EC 001BE82C  41 82 00 14 */	beq lbl_801C1900
/* 801C18F0 001BE830  80 BA 03 2C */	lwz r5, 0x32c(r26)
/* 801C18F4 001BE834  7F 44 D3 78 */	mr r4, r26
/* 801C18F8 001BE838  48 07 3C 15 */	bl __ct__Q34Game6VsGame7CardMgrFPQ24Game13VsGameSectionPQ34Game6VsGame7TekiMgr
/* 801C18FC 001BE83C  7C 60 1B 78 */	mr r0, r3
lbl_801C1900:
/* 801C1900 001BE840  90 1A 03 30 */	stw r0, 0x330(r26)
/* 801C1904 001BE844  80 7A 03 30 */	lwz r3, 0x330(r26)
/* 801C1908 001BE848  48 07 3D A5 */	bl loadResource__Q34Game6VsGame7CardMgrFv
/* 801C190C 001BE84C  80 DF 00 50 */	lwz r6, 0x50(r31)
/* 801C1910 001BE850  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureInitArg@ha
/* 801C1914 001BE854  80 BF 00 54 */	lwz r5, 0x54(r31)
/* 801C1918 001BE858  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C191C 001BE85C  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 801C1920 001BE860  3B C1 00 0C */	addi r30, r1, 0xc
/* 801C1924 001BE864  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801C1928 001BE868  3B 64 A2 F4 */	addi r27, r4, __vt__Q24Game15CreatureInitArg@l
/* 801C192C 001BE86C  80 8D 84 80 */	lwz r4, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 801C1930 001BE870  3B 83 A2 B8 */	addi r28, r3, __vt__Q24Game13PelletInitArg@l
/* 801C1934 001BE874  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C1938 001BE878  3B 40 00 00 */	li r26, 0
/* 801C193C 001BE87C  80 6D 84 7C */	lwz r3, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 801C1940 001BE880  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1944 001BE884  80 0D 84 84 */	lwz r0, cBedamaYellow__13VsOtakaraName@sda21(r13)
/* 801C1948 001BE888  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C194C 001BE88C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C1950 001BE890  90 01 00 14 */	stw r0, 0x14(r1)
lbl_801C1954:
/* 801C1954 001BE894  93 61 00 18 */	stw r27, 0x18(r1)
/* 801C1958 001BE898  38 E0 00 00 */	li r7, 0
/* 801C195C 001BE89C  38 00 FF FF */	li r0, -1
/* 801C1960 001BE8A0  38 C0 00 FF */	li r6, 0xff
/* 801C1964 001BE8A4  38 A0 00 01 */	li r5, 1
/* 801C1968 001BE8A8  93 81 00 18 */	stw r28, 0x18(r1)
/* 801C196C 001BE8AC  80 7E 00 00 */	lwz r3, 0(r30)
/* 801C1970 001BE8B0  38 81 00 08 */	addi r4, r1, 8
/* 801C1974 001BE8B4  98 E1 00 34 */	stb r7, 0x34(r1)
/* 801C1978 001BE8B8  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801C197C 001BE8BC  98 C1 00 2E */	stb r6, 0x2e(r1)
/* 801C1980 001BE8C0  90 E1 00 30 */	stw r7, 0x30(r1)
/* 801C1984 001BE8C4  98 E1 00 2F */	stb r7, 0x2f(r1)
/* 801C1988 001BE8C8  98 A1 00 1C */	stb r5, 0x1c(r1)
/* 801C198C 001BE8CC  98 E1 00 35 */	stb r7, 0x35(r1)
/* 801C1990 001BE8D0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C1994 001BE8D4  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C1998 001BE8D8  98 E1 00 36 */	stb r7, 0x36(r1)
/* 801C199C 001BE8DC  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C19A0 001BE8E0  48 06 64 A1 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C19A4 001BE8E4  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C19A8 001BE8E8  40 82 00 18 */	bne lbl_801C19C0
/* 801C19AC 001BE8EC  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C19B0 001BE8F0  38 BF 00 70 */	addi r5, r31, 0x70
/* 801C19B4 001BE8F4  38 80 03 88 */	li r4, 0x388
/* 801C19B8 001BE8F8  4C C6 31 82 */	crclr 6
/* 801C19BC 001BE8FC  4B E6 8C 85 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C19C0:
/* 801C19C0 001BE900  A8 7D 02 58 */	lha r3, 0x258(r29)
/* 801C19C4 001BE904  38 81 00 18 */	addi r4, r1, 0x18
/* 801C19C8 001BE908  80 01 00 08 */	lwz r0, 8(r1)
/* 801C19CC 001BE90C  90 61 00 28 */	stw r3, 0x28(r1)
/* 801C19D0 001BE910  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C19D4 001BE914  80 BD 00 40 */	lwz r5, 0x40(r29)
/* 801C19D8 001BE918  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801C19DC 001BE91C  98 01 00 2E */	stb r0, 0x2e(r1)
/* 801C19E0 001BE920  4B FA BC FD */	bl setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C19E4 001BE924  3B 5A 00 01 */	addi r26, r26, 1
/* 801C19E8 001BE928  3B DE 00 04 */	addi r30, r30, 4
/* 801C19EC 001BE92C  2C 1A 00 03 */	cmpwi r26, 3
/* 801C19F0 001BE930  41 80 FF 64 */	blt lbl_801C1954
/* 801C19F4 001BE934  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 801C19F8 001BE938  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C19FC 001BE93C  7C 08 03 A6 */	mtlr r0
/* 801C1A00 001BE940  38 21 00 60 */	addi r1, r1, 0x60
/* 801C1A04 001BE944  4E 80 00 20 */	blr 
.endif

.if version == 1
.global postSetupFloatMemory__Q24Game13VsGameSectionFv
postSetupFloatMemory__Q24Game13VsGameSectionFv:
/* 801C1A08 001BE948  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C1A0C 001BE94C  7C 08 02 A6 */	mflr r0
/* 801C1A10 001BE950  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C1A14 001BE954  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C1A18 001BE958  7C 7F 1B 78 */	mr r31, r3
/* 801C1A1C 001BE95C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C1A20 001BE960  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C1A24 001BE964  2C 00 00 01 */	cmpwi r0, 1
/* 801C1A28 001BE968  40 82 00 64 */	bne lbl_801C1A8C
/* 801C1A2C 001BE96C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C1A30 001BE970  38 00 00 00 */	li r0, 0
/* 801C1A34 001BE974  38 81 00 08 */	addi r4, r1, 8
/* 801C1A38 001BE978  D0 1F 03 5C */	stfs f0, 0x380(r31)
/* 801C1A3C 001BE97C  D0 1F 03 58 */	stfs f0, 0x37c(r31)
/* 801C1A40 001BE980  90 1F 03 84 */	stw r0, 0x3a8(r31)
/* 801C1A44 001BE984  90 1F 03 80 */	stw r0, 0x3a4(r31)
/* 801C1A48 001BE988  D0 01 00 08 */	stfs f0, 8(r1)
/* 801C1A4C 001BE98C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801C1A50 001BE990  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801C1A54 001BE994  48 00 25 0D */	bl "createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<f>"
/* 801C1A58 001BE998  38 00 00 00 */	li r0, 0
/* 801C1A5C 001BE99C  7F E3 FB 78 */	mr r3, r31
/* 801C1A60 001BE9A0  90 1F 03 88 */	stw r0, 0x3ac(r31)
/* 801C1A64 001BE9A4  38 80 00 07 */	li r4, 7
/* 801C1A68 001BE9A8  90 1F 03 8C */	stw r0, 0x3b0(r31)
/* 801C1A6C 001BE9AC  90 1F 03 90 */	stw r0, 0x3b4(r31)
/* 801C1A70 001BE9B0  90 1F 03 94 */	stw r0, 0x3b8(r31)
/* 801C1A74 001BE9B4  90 1F 03 98 */	stw r0, 0x3bc(r31)
/* 801C1A78 001BE9B8  90 1F 03 9C */	stw r0, 0x3c0(r31)
/* 801C1A7C 001BE9BC  90 1F 03 A0 */	stw r0, 0x3c4(r31)
/* 801C1A80 001BE9C0  48 00 23 35 */	bl createYellowBedamas__Q24Game13VsGameSectionFi
/* 801C1A84 001BE9C4  7F E3 FB 78 */	mr r3, r31
/* 801C1A88 001BE9C8  48 00 1A A5 */	bl initCardPellets__Q24Game13VsGameSectionFv
lbl_801C1A8C:
/* 801C1A8C 001BE9CC  7F E3 FB 78 */	mr r3, r31
/* 801C1A90 001BE9D0  4B F8 FA 71 */	bl postSetupFloatMemory__Q24Game15BaseGameSectionFv
/* 801C1A94 001BE9D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C1A98 001BE9D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C1A9C 001BE9DC  7C 08 03 A6 */	mtlr r0
/* 801C1AA0 001BE9E0  38 21 00 20 */	addi r1, r1, 0x20
/* 801C1AA4 001BE9E4  4E 80 00 20 */	blr 
.else
.global postSetupFloatMemory__Q24Game13VsGameSectionFv
postSetupFloatMemory__Q24Game13VsGameSectionFv:
/* 801C1A08 001BE948  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C1A0C 001BE94C  7C 08 02 A6 */	mflr r0
/* 801C1A10 001BE950  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C1A14 001BE954  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C1A18 001BE958  7C 7F 1B 78 */	mr r31, r3
/* 801C1A1C 001BE95C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C1A20 001BE960  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C1A24 001BE964  2C 00 00 01 */	cmpwi r0, 1
/* 801C1A28 001BE968  40 82 00 64 */	bne lbl_801C1A8C
/* 801C1A2C 001BE96C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C1A30 001BE970  38 00 00 00 */	li r0, 0
/* 801C1A34 001BE974  38 81 00 08 */	addi r4, r1, 8
/* 801C1A38 001BE978  D0 1F 03 5C */	stfs f0, 0x35c(r31)
/* 801C1A3C 001BE97C  D0 1F 03 58 */	stfs f0, 0x358(r31)
/* 801C1A40 001BE980  90 1F 03 84 */	stw r0, 0x384(r31)
/* 801C1A44 001BE984  90 1F 03 80 */	stw r0, 0x380(r31)
/* 801C1A48 001BE988  D0 01 00 08 */	stfs f0, 8(r1)
/* 801C1A4C 001BE98C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801C1A50 001BE990  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801C1A54 001BE994  48 00 25 0D */	bl "createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<f>"
/* 801C1A58 001BE998  38 00 00 00 */	li r0, 0
/* 801C1A5C 001BE99C  7F E3 FB 78 */	mr r3, r31
/* 801C1A60 001BE9A0  90 1F 03 88 */	stw r0, 0x388(r31)
/* 801C1A64 001BE9A4  38 80 00 07 */	li r4, 7
/* 801C1A68 001BE9A8  90 1F 03 8C */	stw r0, 0x38c(r31)
/* 801C1A6C 001BE9AC  90 1F 03 90 */	stw r0, 0x390(r31)
/* 801C1A70 001BE9B0  90 1F 03 94 */	stw r0, 0x394(r31)
/* 801C1A74 001BE9B4  90 1F 03 98 */	stw r0, 0x398(r31)
/* 801C1A78 001BE9B8  90 1F 03 9C */	stw r0, 0x39c(r31)
/* 801C1A7C 001BE9BC  90 1F 03 A0 */	stw r0, 0x3a0(r31)
/* 801C1A80 001BE9C0  48 00 23 35 */	bl createYellowBedamas__Q24Game13VsGameSectionFi
/* 801C1A84 001BE9C4  7F E3 FB 78 */	mr r3, r31
/* 801C1A88 001BE9C8  48 00 1A A5 */	bl initCardPellets__Q24Game13VsGameSectionFv
lbl_801C1A8C:
/* 801C1A8C 001BE9CC  7F E3 FB 78 */	mr r3, r31
/* 801C1A90 001BE9D0  4B F8 FA 71 */	bl postSetupFloatMemory__Q24Game15BaseGameSectionFv
/* 801C1A94 001BE9D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C1A98 001BE9D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C1A9C 001BE9DC  7C 08 03 A6 */	mtlr r0
/* 801C1AA0 001BE9E0  38 21 00 20 */	addi r1, r1, 0x20
/* 801C1AA4 001BE9E4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onClearHeap__Q24Game13VsGameSectionFv
onClearHeap__Q24Game13VsGameSectionFv:
/* 801C1AA8 001BE9E8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C1AAC 001BE9EC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C1AB0 001BE9F0  2C 00 00 01 */	cmpwi r0, 1
/* 801C1AB4 001BE9F4  4C 82 00 20 */	bnelr 
/* 801C1AB8 001BE9F8  38 00 00 00 */	li r0, 0
/* 801C1ABC 001BE9FC  90 03 03 D0 */	stw r0, 0x3f4(r3)
/* 801C1AC0 001BEA00  90 03 03 CC */	stw r0, 0x3f0(r3)
/* 801C1AC4 001BEA04  4E 80 00 20 */	blr 
.else
.global onClearHeap__Q24Game13VsGameSectionFv
onClearHeap__Q24Game13VsGameSectionFv:
/* 801C1AA8 001BE9E8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C1AAC 001BE9EC  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C1AB0 001BE9F0  2C 00 00 01 */	cmpwi r0, 1
/* 801C1AB4 001BE9F4  4C 82 00 20 */	bnelr 
/* 801C1AB8 001BE9F8  38 00 00 00 */	li r0, 0
/* 801C1ABC 001BE9FC  90 03 03 D0 */	stw r0, 0x3d0(r3)
/* 801C1AC0 001BEA00  90 03 03 CC */	stw r0, 0x3cc(r3)
/* 801C1AC4 001BEA04  4E 80 00 20 */	blr 
.endif

.if version == 1
.global loadChallengeStageList__Q24Game13VsGameSectionFv
loadChallengeStageList__Q24Game13VsGameSectionFv:
/* 801C1AC8 001BEA08  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801C1ACC 001BEA0C  7C 08 02 A6 */	mflr r0
/* 801C1AD0 001BEA10  3C 80 80 51 */	lis r4, gGameConfig__4Game@ha
/* 801C1AD4 001BEA14  90 01 04 44 */	stw r0, 0x444(r1)
/* 801C1AD8 001BEA18  38 A4 41 FC */	addi r5, r4, gGameConfig__4Game@l
/* 801C1ADC 001BEA1C  38 00 00 00 */	li r0, 0
/* 801C1AE0 001BEA20  3C 80 80 48 */	lis r4, lbl_8048003C@ha
/* 801C1AE4 001BEA24  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801C1AE8 001BEA28  7C 7F 1B 78 */	mr r31, r3
/* 801C1AEC 001BEA2C  38 64 00 3C */	addi r3, r4, lbl_8048003C@l
/* 801C1AF0 001BEA30  90 01 00 08 */	stw r0, 8(r1)
/* 801C1AF4 001BEA34  80 05 02 28 */	lwz r0, 0x228(r5)
/* 801C1AF8 001BEA38  2C 00 00 00 */	cmpwi r0, 0
/* 801C1AFC 001BEA3C  41 82 00 0C */	beq lbl_801C1B08
/* 801C1B00 001BEA40  3C 60 80 48 */	lis r3, lbl_80480014@ha
/* 801C1B04 001BEA44  38 63 00 14 */	addi r3, r3, lbl_80480014@l
lbl_801C1B08:
/* 801C1B08 001BEA48  38 80 00 00 */	li r4, 0
/* 801C1B0C 001BEA4C  38 A0 00 00 */	li r5, 0
/* 801C1B10 001BEA50  38 C0 00 00 */	li r6, 0
/* 801C1B14 001BEA54  38 E0 00 00 */	li r7, 0
/* 801C1B18 001BEA58  39 00 00 02 */	li r8, 2
/* 801C1B1C 001BEA5C  39 20 00 00 */	li r9, 0
/* 801C1B20 001BEA60  39 40 00 00 */	li r10, 0
/* 801C1B24 001BEA64  4B E5 D6 65 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801C1B28 001BEA68  28 03 00 00 */	cmplwi r3, 0
/* 801C1B2C 001BEA6C  41 82 00 38 */	beq lbl_801C1B64
/* 801C1B30 001BEA70  7C 64 1B 78 */	mr r4, r3
/* 801C1B34 001BEA74  38 61 00 10 */	addi r3, r1, 0x10
/* 801C1B38 001BEA78  38 A0 FF FF */	li r5, -1
/* 801C1B3C 001BEA7C  48 25 3D BD */	bl __ct__9RamStreamFPvi
/* 801C1B40 001BEA80  38 00 00 01 */	li r0, 1
/* 801C1B44 001BEA84  2C 00 00 01 */	cmpwi r0, 1
/* 801C1B48 001BEA88  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801C1B4C 001BEA8C  40 82 00 0C */	bne lbl_801C1B58
/* 801C1B50 001BEA90  38 00 00 00 */	li r0, 0
/* 801C1B54 001BEA94  90 01 04 24 */	stw r0, 0x424(r1)
lbl_801C1B58:
/* 801C1B58 001BEA98  80 7F 02 0C */	lwz r3, 0x230(r31)
/* 801C1B5C 001BEA9C  38 81 00 10 */	addi r4, r1, 0x10
/* 801C1B60 001BEAA0  48 06 BE 79 */	bl read__Q34Game13ChallengeGame9StageListFR6Stream
lbl_801C1B64:
/* 801C1B64 001BEAA4  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801C1B68 001BEAA8  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801C1B6C 001BEAAC  7C 08 03 A6 */	mtlr r0
/* 801C1B70 001BEAB0  38 21 04 40 */	addi r1, r1, 0x440
/* 801C1B74 001BEAB4  4E 80 00 20 */	blr 
.else
.global loadChallengeStageList__Q24Game13VsGameSectionFv
loadChallengeStageList__Q24Game13VsGameSectionFv:
/* 801C1AC8 001BEA08  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801C1ACC 001BEA0C  7C 08 02 A6 */	mflr r0
/* 801C1AD0 001BEA10  3C 80 80 51 */	lis r4, gGameConfig__4Game@ha
/* 801C1AD4 001BEA14  90 01 04 44 */	stw r0, 0x444(r1)
/* 801C1AD8 001BEA18  38 A4 41 FC */	addi r5, r4, gGameConfig__4Game@l
/* 801C1ADC 001BEA1C  38 00 00 00 */	li r0, 0
/* 801C1AE0 001BEA20  3C 80 80 48 */	lis r4, lbl_8048003C@ha
/* 801C1AE4 001BEA24  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801C1AE8 001BEA28  7C 7F 1B 78 */	mr r31, r3
/* 801C1AEC 001BEA2C  38 64 00 3C */	addi r3, r4, lbl_8048003C@l
/* 801C1AF0 001BEA30  90 01 00 08 */	stw r0, 8(r1)
/* 801C1AF4 001BEA34  80 05 02 28 */	lwz r0, 0x228(r5)
/* 801C1AF8 001BEA38  2C 00 00 00 */	cmpwi r0, 0
/* 801C1AFC 001BEA3C  41 82 00 0C */	beq lbl_801C1B08
/* 801C1B00 001BEA40  3C 60 80 48 */	lis r3, lbl_80480014@ha
/* 801C1B04 001BEA44  38 63 00 14 */	addi r3, r3, lbl_80480014@l
lbl_801C1B08:
/* 801C1B08 001BEA48  38 80 00 00 */	li r4, 0
/* 801C1B0C 001BEA4C  38 A0 00 00 */	li r5, 0
/* 801C1B10 001BEA50  38 C0 00 00 */	li r6, 0
/* 801C1B14 001BEA54  38 E0 00 00 */	li r7, 0
/* 801C1B18 001BEA58  39 00 00 02 */	li r8, 2
/* 801C1B1C 001BEA5C  39 20 00 00 */	li r9, 0
/* 801C1B20 001BEA60  39 40 00 00 */	li r10, 0
/* 801C1B24 001BEA64  4B E5 D6 65 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801C1B28 001BEA68  28 03 00 00 */	cmplwi r3, 0
/* 801C1B2C 001BEA6C  41 82 00 38 */	beq lbl_801C1B64
/* 801C1B30 001BEA70  7C 64 1B 78 */	mr r4, r3
/* 801C1B34 001BEA74  38 61 00 10 */	addi r3, r1, 0x10
/* 801C1B38 001BEA78  38 A0 FF FF */	li r5, -1
/* 801C1B3C 001BEA7C  48 25 3D BD */	bl __ct__9RamStreamFPvi
/* 801C1B40 001BEA80  38 00 00 01 */	li r0, 1
/* 801C1B44 001BEA84  2C 00 00 01 */	cmpwi r0, 1
/* 801C1B48 001BEA88  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801C1B4C 001BEA8C  40 82 00 0C */	bne lbl_801C1B58
/* 801C1B50 001BEA90  38 00 00 00 */	li r0, 0
/* 801C1B54 001BEA94  90 01 04 24 */	stw r0, 0x424(r1)
lbl_801C1B58:
/* 801C1B58 001BEA98  80 7F 02 0C */	lwz r3, 0x20c(r31)
/* 801C1B5C 001BEA9C  38 81 00 10 */	addi r4, r1, 0x10
/* 801C1B60 001BEAA0  48 06 BE 79 */	bl read__Q34Game13ChallengeGame9StageListFR6Stream
lbl_801C1B64:
/* 801C1B64 001BEAA4  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801C1B68 001BEAA8  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801C1B6C 001BEAAC  7C 08 03 A6 */	mtlr r0
/* 801C1B70 001BEAB0  38 21 04 40 */	addi r1, r1, 0x440
/* 801C1B74 001BEAB4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global loadVsStageList__Q24Game13VsGameSectionFv
loadVsStageList__Q24Game13VsGameSectionFv:
/* 801C1B78 001BEAB8  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801C1B7C 001BEABC  7C 08 02 A6 */	mflr r0
/* 801C1B80 001BEAC0  3C 80 80 48 */	lis r4, lbl_80480060@ha
/* 801C1B84 001BEAC4  38 A0 00 00 */	li r5, 0
/* 801C1B88 001BEAC8  90 01 04 44 */	stw r0, 0x444(r1)
/* 801C1B8C 001BEACC  38 00 00 00 */	li r0, 0
/* 801C1B90 001BEAD0  38 C0 00 00 */	li r6, 0
/* 801C1B94 001BEAD4  38 E0 00 00 */	li r7, 0
/* 801C1B98 001BEAD8  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801C1B9C 001BEADC  7C 7F 1B 78 */	mr r31, r3
/* 801C1BA0 001BEAE0  39 00 00 02 */	li r8, 2
/* 801C1BA4 001BEAE4  39 20 00 00 */	li r9, 0
/* 801C1BA8 001BEAE8  90 01 00 08 */	stw r0, 8(r1)
/* 801C1BAC 001BEAEC  38 04 00 60 */	addi r0, r4, lbl_80480060@l
/* 801C1BB0 001BEAF0  38 80 00 00 */	li r4, 0
/* 801C1BB4 001BEAF4  39 40 00 00 */	li r10, 0
/* 801C1BB8 001BEAF8  7C 03 03 78 */	mr r3, r0
/* 801C1BBC 001BEAFC  4B E5 D5 CD */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801C1BC0 001BEB00  28 03 00 00 */	cmplwi r3, 0
/* 801C1BC4 001BEB04  41 82 00 38 */	beq lbl_801C1BFC
/* 801C1BC8 001BEB08  7C 64 1B 78 */	mr r4, r3
/* 801C1BCC 001BEB0C  38 61 00 10 */	addi r3, r1, 0x10
/* 801C1BD0 001BEB10  38 A0 FF FF */	li r5, -1
/* 801C1BD4 001BEB14  48 25 3D 25 */	bl __ct__9RamStreamFPvi
/* 801C1BD8 001BEB18  38 00 00 01 */	li r0, 1
/* 801C1BDC 001BEB1C  2C 00 00 01 */	cmpwi r0, 1
/* 801C1BE0 001BEB20  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801C1BE4 001BEB24  40 82 00 0C */	bne lbl_801C1BF0
/* 801C1BE8 001BEB28  38 00 00 00 */	li r0, 0
/* 801C1BEC 001BEB2C  90 01 04 24 */	stw r0, 0x424(r1)
lbl_801C1BF0:
/* 801C1BF0 001BEB30  80 7F 02 10 */	lwz r3, 0x234(r31)
/* 801C1BF4 001BEB34  38 81 00 10 */	addi r4, r1, 0x10
/* 801C1BF8 001BEB38  48 06 C0 8D */	bl read__Q34Game6VsGame9StageListFR6Stream
lbl_801C1BFC:
/* 801C1BFC 001BEB3C  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801C1C00 001BEB40  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801C1C04 001BEB44  7C 08 03 A6 */	mtlr r0
/* 801C1C08 001BEB48  38 21 04 40 */	addi r1, r1, 0x440
/* 801C1C0C 001BEB4C  4E 80 00 20 */	blr 
.else
.global loadVsStageList__Q24Game13VsGameSectionFv
loadVsStageList__Q24Game13VsGameSectionFv:
/* 801C1B78 001BEAB8  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801C1B7C 001BEABC  7C 08 02 A6 */	mflr r0
/* 801C1B80 001BEAC0  3C 80 80 48 */	lis r4, lbl_80480060@ha
/* 801C1B84 001BEAC4  38 A0 00 00 */	li r5, 0
/* 801C1B88 001BEAC8  90 01 04 44 */	stw r0, 0x444(r1)
/* 801C1B8C 001BEACC  38 00 00 00 */	li r0, 0
/* 801C1B90 001BEAD0  38 C0 00 00 */	li r6, 0
/* 801C1B94 001BEAD4  38 E0 00 00 */	li r7, 0
/* 801C1B98 001BEAD8  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801C1B9C 001BEADC  7C 7F 1B 78 */	mr r31, r3
/* 801C1BA0 001BEAE0  39 00 00 02 */	li r8, 2
/* 801C1BA4 001BEAE4  39 20 00 00 */	li r9, 0
/* 801C1BA8 001BEAE8  90 01 00 08 */	stw r0, 8(r1)
/* 801C1BAC 001BEAEC  38 04 00 60 */	addi r0, r4, lbl_80480060@l
/* 801C1BB0 001BEAF0  38 80 00 00 */	li r4, 0
/* 801C1BB4 001BEAF4  39 40 00 00 */	li r10, 0
/* 801C1BB8 001BEAF8  7C 03 03 78 */	mr r3, r0
/* 801C1BBC 001BEAFC  4B E5 D5 CD */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801C1BC0 001BEB00  28 03 00 00 */	cmplwi r3, 0
/* 801C1BC4 001BEB04  41 82 00 38 */	beq lbl_801C1BFC
/* 801C1BC8 001BEB08  7C 64 1B 78 */	mr r4, r3
/* 801C1BCC 001BEB0C  38 61 00 10 */	addi r3, r1, 0x10
/* 801C1BD0 001BEB10  38 A0 FF FF */	li r5, -1
/* 801C1BD4 001BEB14  48 25 3D 25 */	bl __ct__9RamStreamFPvi
/* 801C1BD8 001BEB18  38 00 00 01 */	li r0, 1
/* 801C1BDC 001BEB1C  2C 00 00 01 */	cmpwi r0, 1
/* 801C1BE0 001BEB20  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801C1BE4 001BEB24  40 82 00 0C */	bne lbl_801C1BF0
/* 801C1BE8 001BEB28  38 00 00 00 */	li r0, 0
/* 801C1BEC 001BEB2C  90 01 04 24 */	stw r0, 0x424(r1)
lbl_801C1BF0:
/* 801C1BF0 001BEB30  80 7F 02 10 */	lwz r3, 0x210(r31)
/* 801C1BF4 001BEB34  38 81 00 10 */	addi r4, r1, 0x10
/* 801C1BF8 001BEB38  48 06 C0 8D */	bl read__Q34Game6VsGame9StageListFR6Stream
lbl_801C1BFC:
/* 801C1BFC 001BEB3C  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801C1C00 001BEB40  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801C1C04 001BEB44  7C 08 03 A6 */	mtlr r0
/* 801C1C08 001BEB48  38 21 04 40 */	addi r1, r1, 0x440
/* 801C1C0C 001BEB4C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global gmOrimaDown__Q24Game13VsGameSectionFi
gmOrimaDown__Q24Game13VsGameSectionFi:
/* 801C1C10 001BEB50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1C14 001BEB54  7C 08 02 A6 */	mflr r0
/* 801C1C18 001BEB58  7C 66 1B 78 */	mr r6, r3
/* 801C1C1C 001BEB5C  7C 85 23 78 */	mr r5, r4
/* 801C1C20 001BEB60  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1C24 001BEB64  80 63 01 80 */	lwz r3, 0x1a4(r3)
/* 801C1C28 001BEB68  28 03 00 00 */	cmplwi r3, 0
/* 801C1C2C 001BEB6C  41 82 00 18 */	beq lbl_801C1C44
/* 801C1C30 001BEB70  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1C34 001BEB74  7C C4 33 78 */	mr r4, r6
/* 801C1C38 001BEB78  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801C1C3C 001BEB7C  7D 89 03 A6 */	mtctr r12
/* 801C1C40 001BEB80  4E 80 04 21 */	bctrl 
lbl_801C1C44:
/* 801C1C44 001BEB84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1C48 001BEB88  7C 08 03 A6 */	mtlr r0
/* 801C1C4C 001BEB8C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1C50 001BEB90  4E 80 00 20 */	blr 
.else
.global gmOrimaDown__Q24Game13VsGameSectionFi
gmOrimaDown__Q24Game13VsGameSectionFi:
/* 801C1C10 001BEB50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1C14 001BEB54  7C 08 02 A6 */	mflr r0
/* 801C1C18 001BEB58  7C 66 1B 78 */	mr r6, r3
/* 801C1C1C 001BEB5C  7C 85 23 78 */	mr r5, r4
/* 801C1C20 001BEB60  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1C24 001BEB64  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801C1C28 001BEB68  28 03 00 00 */	cmplwi r3, 0
/* 801C1C2C 001BEB6C  41 82 00 18 */	beq lbl_801C1C44
/* 801C1C30 001BEB70  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1C34 001BEB74  7C C4 33 78 */	mr r4, r6
/* 801C1C38 001BEB78  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801C1C3C 001BEB7C  7D 89 03 A6 */	mtctr r12
/* 801C1C40 001BEB80  4E 80 04 21 */	bctrl 
lbl_801C1C44:
/* 801C1C44 001BEB84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1C48 001BEB88  7C 08 03 A6 */	mtlr r0
/* 801C1C4C 001BEB8C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1C50 001BEB90  4E 80 00 20 */	blr 
.endif

.global onOrimaDown__Q34Game6VsGame5StateFPQ24Game13VsGameSectioni
onOrimaDown__Q34Game6VsGame5StateFPQ24Game13VsGameSectioni:
/* 801C1C54 001BEB94  4E 80 00 20 */	blr 

.global gmPikminZero__Q24Game13VsGameSectionFv
gmPikminZero__Q24Game13VsGameSectionFv:
/* 801C1C58 001BEB98  4E 80 00 20 */	blr 

.if version == 1
.global goNextFloor__Q24Game13VsGameSectionFPQ34Game8ItemHole4Item
goNextFloor__Q24Game13VsGameSectionFPQ34Game8ItemHole4Item:
/* 801C1C5C 001BEB9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1C60 001BEBA0  7C 08 02 A6 */	mflr r0
/* 801C1C64 001BEBA4  7C 66 1B 78 */	mr r6, r3
/* 801C1C68 001BEBA8  7C 85 23 78 */	mr r5, r4
/* 801C1C6C 001BEBAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1C70 001BEBB0  7C C4 33 78 */	mr r4, r6
/* 801C1C74 001BEBB4  80 63 01 80 */	lwz r3, 0x1a4(r3)
/* 801C1C78 001BEBB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1C7C 001BEBBC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801C1C80 001BEBC0  7D 89 03 A6 */	mtctr r12
/* 801C1C84 001BEBC4  4E 80 04 21 */	bctrl 
/* 801C1C88 001BEBC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1C8C 001BEBCC  7C 08 03 A6 */	mtlr r0
/* 801C1C90 001BEBD0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1C94 001BEBD4  4E 80 00 20 */	blr 
.else
.global goNextFloor__Q24Game13VsGameSectionFPQ34Game8ItemHole4Item
goNextFloor__Q24Game13VsGameSectionFPQ34Game8ItemHole4Item:
/* 801C1C5C 001BEB9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C1C60 001BEBA0  7C 08 02 A6 */	mflr r0
/* 801C1C64 001BEBA4  7C 66 1B 78 */	mr r6, r3
/* 801C1C68 001BEBA8  7C 85 23 78 */	mr r5, r4
/* 801C1C6C 001BEBAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C1C70 001BEBB0  7C C4 33 78 */	mr r4, r6
/* 801C1C74 001BEBB4  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801C1C78 001BEBB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1C7C 001BEBBC  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801C1C80 001BEBC0  7D 89 03 A6 */	mtctr r12
/* 801C1C84 001BEBC4  4E 80 04 21 */	bctrl 
/* 801C1C88 001BEBC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C1C8C 001BEBCC  7C 08 03 A6 */	mtlr r0
/* 801C1C90 001BEBD0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C1C94 001BEBD4  4E 80 00 20 */	blr 
.endif

.global onNextFloor__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
onNextFloor__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item:
/* 801C1C98 001BEBD8  4E 80 00 20 */	blr 

.if version == 1
.global openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller
openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller:
/* 801C1C9C 001BEBDC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C1CA0 001BEBE0  7C 08 02 A6 */	mflr r0
/* 801C1CA4 001BEBE4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C1CA8 001BEBE8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801C1CAC 001BEBEC  7C 9F 23 78 */	mr r31, r4
/* 801C1CB0 001BEBF0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801C1CB4 001BEBF4  7C 7E 1B 78 */	mr r30, r3
/* 801C1CB8 001BEBF8  7F C4 F3 78 */	mr r4, r30
/* 801C1CBC 001BEBFC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801C1CC0 001BEC00  7C BD 2B 78 */	mr r29, r5
/* 801C1CC4 001BEC04  80 63 01 80 */	lwz r3, 0x1a4(r3)
/* 801C1CC8 001BEC08  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1CCC 001BEC0C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801C1CD0 001BEC10  7D 89 03 A6 */	mtctr r12
/* 801C1CD4 001BEC14  4E 80 04 21 */	bctrl 
/* 801C1CD8 001BEC18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1CDC 001BEC1C  40 82 01 7C */	bne lbl_801C1E58
/* 801C1CE0 001BEC20  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C1CE4 001BEC24  38 60 00 00 */	li r3, 0
/* 801C1CE8 001BEC28  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C1CEC 001BEC2C  2C 00 00 01 */	cmpwi r0, 1
/* 801C1CF0 001BEC30  41 82 00 0C */	beq lbl_801C1CFC
/* 801C1CF4 001BEC34  2C 00 00 03 */	cmpwi r0, 3
/* 801C1CF8 001BEC38  40 82 00 08 */	bne lbl_801C1D00
lbl_801C1CFC:
/* 801C1CFC 001BEC3C  38 60 00 01 */	li r3, 1
lbl_801C1D00:
/* 801C1D00 001BEC40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1D04 001BEC44  41 82 00 1C */	beq lbl_801C1D20
/* 801C1D08 001BEC48  28 1D 00 00 */	cmplwi r29, 0
/* 801C1D0C 001BEC4C  41 82 00 14 */	beq lbl_801C1D20
/* 801C1D10 001BEC50  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1D14 001BEC54  7F A4 EB 78 */	mr r4, r29
/* 801C1D18 001BEC58  48 23 A3 61 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 801C1D1C 001BEC5C  48 00 00 10 */	b lbl_801C1D2C
lbl_801C1D20:
/* 801C1D20 001BEC60  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1D24 001BEC64  80 9E 01 0C */	lwz r4, 0x12c(r30)
/* 801C1D28 001BEC68  48 23 A3 51 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
lbl_801C1D2C:
/* 801C1D2C 001BEC6C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 801C1D30 001BEC70  39 60 00 00 */	li r11, 0
/* 801C1D34 001BEC74  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 801C1D38 001BEC78  39 00 00 01 */	li r8, 1
/* 801C1D3C 001BEC7C  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 801C1D40 001BEC80  3C C0 80 4B */	lis r6, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 801C1D44 001BEC84  38 E3 30 31 */	addi r7, r3, 0x745F3031@l
/* 801C1D48 001BEC88  90 01 00 08 */	stw r0, 8(r1)
/* 801C1D4C 001BEC8C  39 40 00 18 */	li r10, 0x18
/* 801C1D50 001BEC90  39 20 00 45 */	li r9, 0x45
/* 801C1D54 001BEC94  38 06 11 30 */	addi r0, r6, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 801C1D58 001BEC98  91 61 00 28 */	stw r11, 0x28(r1)
/* 801C1D5C 001BEC9C  3C A0 80 4B */	lis r5, __vt__Q32og6Screen18DispMemberCaveMore@ha
/* 801C1D60 001BECA0  3C 80 32 70 */	lis r4, 0x32705F63@ha
/* 801C1D64 001BECA4  90 01 00 08 */	stw r0, 8(r1)
/* 801C1D68 001BECA8  38 C5 11 18 */	addi r6, r5, __vt__Q32og6Screen18DispMemberCaveMore@l
/* 801C1D6C 001BECAC  38 04 5F 63 */	addi r0, r4, 0x32705F63@l
/* 801C1D70 001BECB0  38 A0 00 04 */	li r5, 4
/* 801C1D74 001BECB4  91 41 00 10 */	stw r10, 0x10(r1)
/* 801C1D78 001BECB8  38 80 00 0A */	li r4, 0xa
/* 801C1D7C 001BECBC  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 801C1D80 001BECC0  91 21 00 14 */	stw r9, 0x14(r1)
/* 801C1D84 001BECC4  91 01 00 18 */	stw r8, 0x18(r1)
/* 801C1D88 001BECC8  90 E1 00 20 */	stw r7, 0x20(r1)
/* 801C1D8C 001BECCC  91 61 00 0C */	stw r11, 0xc(r1)
/* 801C1D90 001BECD0  99 01 00 27 */	stb r8, 0x27(r1)
/* 801C1D94 001BECD4  91 01 00 1C */	stw r8, 0x1c(r1)
/* 801C1D98 001BECD8  99 61 00 24 */	stb r11, 0x24(r1)
/* 801C1D9C 001BECDC  99 61 00 25 */	stb r11, 0x25(r1)
/* 801C1DA0 001BECE0  90 C1 00 08 */	stw r6, 8(r1)
/* 801C1DA4 001BECE4  99 61 00 2C */	stb r11, 0x2c(r1)
/* 801C1DA8 001BECE8  99 61 00 2D */	stb r11, 0x2d(r1)
/* 801C1DAC 001BECEC  91 61 00 28 */	stw r11, 0x28(r1)
/* 801C1DB0 001BECF0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C1DB4 001BECF4  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801C1DB8 001BECF8  90 81 00 18 */	stw r4, 0x18(r1)
/* 801C1DBC 001BECFC  90 01 00 20 */	stw r0, 0x20(r1)
/* 801C1DC0 001BED00  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 801C1DC4 001BED04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C1DC8 001BED08  7D 89 03 A6 */	mtctr r12
/* 801C1DCC 001BED0C  4E 80 04 21 */	bctrl 
/* 801C1DD0 001BED10  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C1DD4 001BED14  40 81 00 34 */	ble lbl_801C1E08
/* 801C1DD8 001BED18  38 00 00 01 */	li r0, 1
/* 801C1DDC 001BED1C  38 60 FF FF */	li r3, -1
/* 801C1DE0 001BED20  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801C1DE4 001BED24  48 00 F0 7D */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C1DE8 001BED28  7C 1D 18 00 */	cmpw r29, r3
/* 801C1DEC 001BED2C  40 82 00 10 */	bne lbl_801C1DFC
/* 801C1DF0 001BED30  38 00 00 01 */	li r0, 1
/* 801C1DF4 001BED34  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1DF8 001BED38  48 00 00 1C */	b lbl_801C1E14
lbl_801C1DFC:
/* 801C1DFC 001BED3C  38 00 00 00 */	li r0, 0
/* 801C1E00 001BED40  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1E04 001BED44  48 00 00 10 */	b lbl_801C1E14
lbl_801C1E08:
/* 801C1E08 001BED48  38 00 00 00 */	li r0, 0
/* 801C1E0C 001BED4C  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1E10 001BED50  98 01 00 2C */	stb r0, 0x2c(r1)
lbl_801C1E14:
/* 801C1E14 001BED54  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1E18 001BED58  38 81 00 08 */	addi r4, r1, 8
/* 801C1E1C 001BED5C  48 23 C2 21 */	bl open_CaveMoreMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberCaveMore
/* 801C1E20 001BED60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1E24 001BED64  41 82 00 34 */	beq lbl_801C1E58
/* 801C1E28 001BED68  93 FE 01 FC */	stw r31, 0x220(r30)
/* 801C1E2C 001BED6C  3C 60 80 48 */	lis r3, lbl_80480078@ha
/* 801C1E30 001BED70  38 A3 00 78 */	addi r5, r3, lbl_80480078@l
/* 801C1E34 001BED74  38 80 00 01 */	li r4, 1
/* 801C1E38 001BED78  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1E3C 001BED7C  38 C0 00 03 */	li r6, 3
/* 801C1E40 001BED80  4B FF 31 55 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C1E44 001BED84  3C 80 80 48 */	lis r4, lbl_80480078@ha
/* 801C1E48 001BED88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1E4C 001BED8C  38 A4 00 78 */	addi r5, r4, lbl_80480078@l
/* 801C1E50 001BED90  38 80 00 01 */	li r4, 1
/* 801C1E54 001BED94  4B FF 31 31 */	bl setMoviePause__Q24Game10GameSystemFbPc
lbl_801C1E58:
/* 801C1E58 001BED98  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C1E5C 001BED9C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801C1E60 001BEDA0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801C1E64 001BEDA4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 801C1E68 001BEDA8  7C 08 03 A6 */	mtlr r0
/* 801C1E6C 001BEDAC  38 21 00 40 */	addi r1, r1, 0x40
/* 801C1E70 001BEDB0  4E 80 00 20 */	blr 
.else
.global openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller
openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller:
/* 801C1C9C 001BEBDC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C1CA0 001BEBE0  7C 08 02 A6 */	mflr r0
/* 801C1CA4 001BEBE4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C1CA8 001BEBE8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801C1CAC 001BEBEC  7C 9F 23 78 */	mr r31, r4
/* 801C1CB0 001BEBF0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801C1CB4 001BEBF4  7C 7E 1B 78 */	mr r30, r3
/* 801C1CB8 001BEBF8  7F C4 F3 78 */	mr r4, r30
/* 801C1CBC 001BEBFC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801C1CC0 001BEC00  7C BD 2B 78 */	mr r29, r5
/* 801C1CC4 001BEC04  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801C1CC8 001BEC08  81 83 00 00 */	lwz r12, 0(r3)
/* 801C1CCC 001BEC0C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801C1CD0 001BEC10  7D 89 03 A6 */	mtctr r12
/* 801C1CD4 001BEC14  4E 80 04 21 */	bctrl 
/* 801C1CD8 001BEC18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1CDC 001BEC1C  40 82 01 7C */	bne lbl_801C1E58
/* 801C1CE0 001BEC20  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C1CE4 001BEC24  38 60 00 00 */	li r3, 0
/* 801C1CE8 001BEC28  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C1CEC 001BEC2C  2C 00 00 01 */	cmpwi r0, 1
/* 801C1CF0 001BEC30  41 82 00 0C */	beq lbl_801C1CFC
/* 801C1CF4 001BEC34  2C 00 00 03 */	cmpwi r0, 3
/* 801C1CF8 001BEC38  40 82 00 08 */	bne lbl_801C1D00
lbl_801C1CFC:
/* 801C1CFC 001BEC3C  38 60 00 01 */	li r3, 1
lbl_801C1D00:
/* 801C1D00 001BEC40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1D04 001BEC44  41 82 00 1C */	beq lbl_801C1D20
/* 801C1D08 001BEC48  28 1D 00 00 */	cmplwi r29, 0
/* 801C1D0C 001BEC4C  41 82 00 14 */	beq lbl_801C1D20
/* 801C1D10 001BEC50  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1D14 001BEC54  7F A4 EB 78 */	mr r4, r29
/* 801C1D18 001BEC58  48 23 A3 61 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 801C1D1C 001BEC5C  48 00 00 10 */	b lbl_801C1D2C
lbl_801C1D20:
/* 801C1D20 001BEC60  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1D24 001BEC64  80 9E 01 0C */	lwz r4, 0x10c(r30)
/* 801C1D28 001BEC68  48 23 A3 51 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
lbl_801C1D2C:
/* 801C1D2C 001BEC6C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 801C1D30 001BEC70  39 60 00 00 */	li r11, 0
/* 801C1D34 001BEC74  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 801C1D38 001BEC78  39 00 00 01 */	li r8, 1
/* 801C1D3C 001BEC7C  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 801C1D40 001BEC80  3C C0 80 4B */	lis r6, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 801C1D44 001BEC84  38 E3 30 31 */	addi r7, r3, 0x745F3031@l
/* 801C1D48 001BEC88  90 01 00 08 */	stw r0, 8(r1)
/* 801C1D4C 001BEC8C  39 40 00 18 */	li r10, 0x18
/* 801C1D50 001BEC90  39 20 00 45 */	li r9, 0x45
/* 801C1D54 001BEC94  38 06 11 30 */	addi r0, r6, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 801C1D58 001BEC98  91 61 00 28 */	stw r11, 0x28(r1)
/* 801C1D5C 001BEC9C  3C A0 80 4B */	lis r5, __vt__Q32og6Screen18DispMemberCaveMore@ha
/* 801C1D60 001BECA0  3C 80 32 70 */	lis r4, 0x32705F63@ha
/* 801C1D64 001BECA4  90 01 00 08 */	stw r0, 8(r1)
/* 801C1D68 001BECA8  38 C5 11 18 */	addi r6, r5, __vt__Q32og6Screen18DispMemberCaveMore@l
/* 801C1D6C 001BECAC  38 04 5F 63 */	addi r0, r4, 0x32705F63@l
/* 801C1D70 001BECB0  38 A0 00 04 */	li r5, 4
/* 801C1D74 001BECB4  91 41 00 10 */	stw r10, 0x10(r1)
/* 801C1D78 001BECB8  38 80 00 0A */	li r4, 0xa
/* 801C1D7C 001BECBC  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 801C1D80 001BECC0  91 21 00 14 */	stw r9, 0x14(r1)
/* 801C1D84 001BECC4  91 01 00 18 */	stw r8, 0x18(r1)
/* 801C1D88 001BECC8  90 E1 00 20 */	stw r7, 0x20(r1)
/* 801C1D8C 001BECCC  91 61 00 0C */	stw r11, 0xc(r1)
/* 801C1D90 001BECD0  99 01 00 27 */	stb r8, 0x27(r1)
/* 801C1D94 001BECD4  91 01 00 1C */	stw r8, 0x1c(r1)
/* 801C1D98 001BECD8  99 61 00 24 */	stb r11, 0x24(r1)
/* 801C1D9C 001BECDC  99 61 00 25 */	stb r11, 0x25(r1)
/* 801C1DA0 001BECE0  90 C1 00 08 */	stw r6, 8(r1)
/* 801C1DA4 001BECE4  99 61 00 2C */	stb r11, 0x2c(r1)
/* 801C1DA8 001BECE8  99 61 00 2D */	stb r11, 0x2d(r1)
/* 801C1DAC 001BECEC  91 61 00 28 */	stw r11, 0x28(r1)
/* 801C1DB0 001BECF0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C1DB4 001BECF4  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801C1DB8 001BECF8  90 81 00 18 */	stw r4, 0x18(r1)
/* 801C1DBC 001BECFC  90 01 00 20 */	stw r0, 0x20(r1)
/* 801C1DC0 001BED00  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 801C1DC4 001BED04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C1DC8 001BED08  7D 89 03 A6 */	mtctr r12
/* 801C1DCC 001BED0C  4E 80 04 21 */	bctrl 
/* 801C1DD0 001BED10  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C1DD4 001BED14  40 81 00 34 */	ble lbl_801C1E08
/* 801C1DD8 001BED18  38 00 00 01 */	li r0, 1
/* 801C1DDC 001BED1C  38 60 FF FF */	li r3, -1
/* 801C1DE0 001BED20  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801C1DE4 001BED24  48 00 F0 7D */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C1DE8 001BED28  7C 1D 18 00 */	cmpw r29, r3
/* 801C1DEC 001BED2C  40 82 00 10 */	bne lbl_801C1DFC
/* 801C1DF0 001BED30  38 00 00 01 */	li r0, 1
/* 801C1DF4 001BED34  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1DF8 001BED38  48 00 00 1C */	b lbl_801C1E14
lbl_801C1DFC:
/* 801C1DFC 001BED3C  38 00 00 00 */	li r0, 0
/* 801C1E00 001BED40  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1E04 001BED44  48 00 00 10 */	b lbl_801C1E14
lbl_801C1E08:
/* 801C1E08 001BED48  38 00 00 00 */	li r0, 0
/* 801C1E0C 001BED4C  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1E10 001BED50  98 01 00 2C */	stb r0, 0x2c(r1)
lbl_801C1E14:
/* 801C1E14 001BED54  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1E18 001BED58  38 81 00 08 */	addi r4, r1, 8
/* 801C1E1C 001BED5C  48 23 C2 21 */	bl open_CaveMoreMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberCaveMore
/* 801C1E20 001BED60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1E24 001BED64  41 82 00 34 */	beq lbl_801C1E58
/* 801C1E28 001BED68  93 FE 01 FC */	stw r31, 0x1fc(r30)
/* 801C1E2C 001BED6C  3C 60 80 48 */	lis r3, lbl_80480078@ha
/* 801C1E30 001BED70  38 A3 00 78 */	addi r5, r3, lbl_80480078@l
/* 801C1E34 001BED74  38 80 00 01 */	li r4, 1
/* 801C1E38 001BED78  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1E3C 001BED7C  38 C0 00 03 */	li r6, 3
/* 801C1E40 001BED80  4B FF 31 55 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C1E44 001BED84  3C 80 80 48 */	lis r4, lbl_80480078@ha
/* 801C1E48 001BED88  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1E4C 001BED8C  38 A4 00 78 */	addi r5, r4, lbl_80480078@l
/* 801C1E50 001BED90  38 80 00 01 */	li r4, 1
/* 801C1E54 001BED94  4B FF 31 31 */	bl setMoviePause__Q24Game10GameSystemFbPc
lbl_801C1E58:
/* 801C1E58 001BED98  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C1E5C 001BED9C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801C1E60 001BEDA0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801C1E64 001BEDA4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 801C1E68 001BEDA8  7C 08 03 A6 */	mtlr r0
/* 801C1E6C 001BEDAC  38 21 00 40 */	addi r1, r1, 0x40
/* 801C1E70 001BEDB0  4E 80 00 20 */	blr 
.endif

.global goingToCave__Q34Game6VsGame5StateFPQ24Game13VsGameSection
goingToCave__Q34Game6VsGame5StateFPQ24Game13VsGameSection:
/* 801C1E74 001BEDB4  38 60 00 00 */	li r3, 0
/* 801C1E78 001BEDB8  4E 80 00 20 */	blr 

.if version == 1
.global openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller:
/* 801C1E7C 001BEDBC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C1E80 001BEDC0  7C 08 02 A6 */	mflr r0
/* 801C1E84 001BEDC4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C1E88 001BEDC8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801C1E8C 001BEDCC  7C 9F 23 78 */	mr r31, r4
/* 801C1E90 001BEDD0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801C1E94 001BEDD4  7C 7E 1B 78 */	mr r30, r3
/* 801C1E98 001BEDD8  38 60 00 00 */	li r3, 0
/* 801C1E9C 001BEDDC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801C1EA0 001BEDE0  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 801C1EA4 001BEDE4  80 06 00 44 */	lwz r0, 0x44(r6)
/* 801C1EA8 001BEDE8  2C 00 00 01 */	cmpwi r0, 1
/* 801C1EAC 001BEDEC  41 82 00 0C */	beq lbl_801C1EB8
/* 801C1EB0 001BEDF0  2C 00 00 03 */	cmpwi r0, 3
/* 801C1EB4 001BEDF4  40 82 00 08 */	bne lbl_801C1EBC
lbl_801C1EB8:
/* 801C1EB8 001BEDF8  38 60 00 01 */	li r3, 1
lbl_801C1EBC:
/* 801C1EBC 001BEDFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1EC0 001BEE00  41 82 00 1C */	beq lbl_801C1EDC
/* 801C1EC4 001BEE04  28 05 00 00 */	cmplwi r5, 0
/* 801C1EC8 001BEE08  41 82 00 14 */	beq lbl_801C1EDC
/* 801C1ECC 001BEE0C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1ED0 001BEE10  7C A4 2B 78 */	mr r4, r5
/* 801C1ED4 001BEE14  48 23 A1 A5 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 801C1ED8 001BEE18  48 00 00 10 */	b lbl_801C1EE8
lbl_801C1EDC:
/* 801C1EDC 001BEE1C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1EE0 001BEE20  80 9E 01 0C */	lwz r4, 0x12c(r30)
/* 801C1EE4 001BEE24  48 23 A1 95 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
lbl_801C1EE8:
/* 801C1EE8 001BEE28  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 801C1EEC 001BEE2C  39 20 00 00 */	li r9, 0
/* 801C1EF0 001BEE30  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 801C1EF4 001BEE34  38 E0 00 01 */	li r7, 1
/* 801C1EF8 001BEE38  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 801C1EFC 001BEE3C  90 01 00 08 */	stw r0, 8(r1)
/* 801C1F00 001BEE40  38 A3 11 30 */	addi r5, r3, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 801C1F04 001BEE44  38 00 00 18 */	li r0, 0x18
/* 801C1F08 001BEE48  39 00 00 45 */	li r8, 0x45
/* 801C1F0C 001BEE4C  91 21 00 28 */	stw r9, 0x28(r1)
/* 801C1F10 001BEE50  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 801C1F14 001BEE54  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberKanketuMenu@ha
/* 801C1F18 001BEE58  38 C3 30 31 */	addi r6, r3, 0x745F3031@l
/* 801C1F1C 001BEE5C  90 A1 00 08 */	stw r5, 8(r1)
/* 801C1F20 001BEE60  38 A4 11 00 */	addi r5, r4, __vt__Q32og6Screen21DispMemberKanketuMenu@l
/* 801C1F24 001BEE64  38 80 00 04 */	li r4, 4
/* 801C1F28 001BEE68  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C1F2C 001BEE6C  38 00 00 0A */	li r0, 0xa
/* 801C1F30 001BEE70  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 801C1F34 001BEE74  91 01 00 14 */	stw r8, 0x14(r1)
/* 801C1F38 001BEE78  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801C1F3C 001BEE7C  91 21 00 0C */	stw r9, 0xc(r1)
/* 801C1F40 001BEE80  98 E1 00 27 */	stb r7, 0x27(r1)
/* 801C1F44 001BEE84  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 801C1F48 001BEE88  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801C1F4C 001BEE8C  99 21 00 24 */	stb r9, 0x24(r1)
/* 801C1F50 001BEE90  99 21 00 25 */	stb r9, 0x25(r1)
/* 801C1F54 001BEE94  90 A1 00 08 */	stw r5, 8(r1)
/* 801C1F58 001BEE98  99 21 00 2C */	stb r9, 0x2c(r1)
/* 801C1F5C 001BEE9C  99 21 00 2D */	stb r9, 0x2d(r1)
/* 801C1F60 001BEEA0  99 21 00 2E */	stb r9, 0x2e(r1)
/* 801C1F64 001BEEA4  91 21 00 28 */	stw r9, 0x28(r1)
/* 801C1F68 001BEEA8  90 81 00 10 */	stw r4, 0x10(r1)
/* 801C1F6C 001BEEAC  90 81 00 14 */	stw r4, 0x14(r1)
/* 801C1F70 001BEEB0  90 01 00 18 */	stw r0, 0x18(r1)
/* 801C1F74 001BEEB4  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 801C1F78 001BEEB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C1F7C 001BEEBC  7D 89 03 A6 */	mtctr r12
/* 801C1F80 001BEEC0  4E 80 04 21 */	bctrl 
/* 801C1F84 001BEEC4  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C1F88 001BEEC8  40 81 00 34 */	ble lbl_801C1FBC
/* 801C1F8C 001BEECC  38 00 00 01 */	li r0, 1
/* 801C1F90 001BEED0  38 60 FF FF */	li r3, -1
/* 801C1F94 001BEED4  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801C1F98 001BEED8  48 00 EE C9 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C1F9C 001BEEDC  7C 1D 18 00 */	cmpw r29, r3
/* 801C1FA0 001BEEE0  40 82 00 10 */	bne lbl_801C1FB0
/* 801C1FA4 001BEEE4  38 00 00 01 */	li r0, 1
/* 801C1FA8 001BEEE8  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1FAC 001BEEEC  48 00 00 1C */	b lbl_801C1FC8
lbl_801C1FB0:
/* 801C1FB0 001BEEF0  38 00 00 00 */	li r0, 0
/* 801C1FB4 001BEEF4  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1FB8 001BEEF8  48 00 00 10 */	b lbl_801C1FC8
lbl_801C1FBC:
/* 801C1FBC 001BEEFC  38 00 00 00 */	li r0, 0
/* 801C1FC0 001BEF00  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1FC4 001BEF04  98 01 00 2C */	stb r0, 0x2c(r1)
lbl_801C1FC8:
/* 801C1FC8 001BEF08  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1FCC 001BEF0C  38 81 00 08 */	addi r4, r1, 8
/* 801C1FD0 001BEF10  48 23 BE DD */	bl open_ChallengeKanketuMenu__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberKanketuMenu
/* 801C1FD4 001BEF14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1FD8 001BEF18  41 82 00 38 */	beq lbl_801C2010
/* 801C1FDC 001BEF1C  93 FE 02 00 */	stw r31, 0x224(r30)
/* 801C1FE0 001BEF20  38 80 00 01 */	li r4, 1
/* 801C1FE4 001BEF24  38 A2 B1 70 */	addi r5, r2, lbl_805194D0@sda21
/* 801C1FE8 001BEF28  38 C0 00 03 */	li r6, 3
/* 801C1FEC 001BEF2C  88 1E 01 F8 */	lbz r0, 0x21c(r30)
/* 801C1FF0 001BEF30  60 00 00 04 */	ori r0, r0, 4
/* 801C1FF4 001BEF34  98 1E 01 F8 */	stb r0, 0x21c(r30)
/* 801C1FF8 001BEF38  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1FFC 001BEF3C  4B FF 2F 99 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C2000 001BEF40  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C2004 001BEF44  38 80 00 01 */	li r4, 1
/* 801C2008 001BEF48  38 A2 B1 70 */	addi r5, r2, lbl_805194D0@sda21
/* 801C200C 001BEF4C  4B FF 2F 79 */	bl setMoviePause__Q24Game10GameSystemFbPc
lbl_801C2010:
/* 801C2010 001BEF50  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C2014 001BEF54  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801C2018 001BEF58  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801C201C 001BEF5C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 801C2020 001BEF60  7C 08 03 A6 */	mtlr r0
/* 801C2024 001BEF64  38 21 00 40 */	addi r1, r1, 0x40
/* 801C2028 001BEF68  4E 80 00 20 */	blr 
.else
.global openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller:
/* 801C1E7C 001BEDBC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801C1E80 001BEDC0  7C 08 02 A6 */	mflr r0
/* 801C1E84 001BEDC4  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C1E88 001BEDC8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801C1E8C 001BEDCC  7C 9F 23 78 */	mr r31, r4
/* 801C1E90 001BEDD0  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801C1E94 001BEDD4  7C 7E 1B 78 */	mr r30, r3
/* 801C1E98 001BEDD8  38 60 00 00 */	li r3, 0
/* 801C1E9C 001BEDDC  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801C1EA0 001BEDE0  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 801C1EA4 001BEDE4  80 06 00 44 */	lwz r0, 0x44(r6)
/* 801C1EA8 001BEDE8  2C 00 00 01 */	cmpwi r0, 1
/* 801C1EAC 001BEDEC  41 82 00 0C */	beq lbl_801C1EB8
/* 801C1EB0 001BEDF0  2C 00 00 03 */	cmpwi r0, 3
/* 801C1EB4 001BEDF4  40 82 00 08 */	bne lbl_801C1EBC
lbl_801C1EB8:
/* 801C1EB8 001BEDF8  38 60 00 01 */	li r3, 1
lbl_801C1EBC:
/* 801C1EBC 001BEDFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1EC0 001BEE00  41 82 00 1C */	beq lbl_801C1EDC
/* 801C1EC4 001BEE04  28 05 00 00 */	cmplwi r5, 0
/* 801C1EC8 001BEE08  41 82 00 14 */	beq lbl_801C1EDC
/* 801C1ECC 001BEE0C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1ED0 001BEE10  7C A4 2B 78 */	mr r4, r5
/* 801C1ED4 001BEE14  48 23 A1 A5 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
/* 801C1ED8 001BEE18  48 00 00 10 */	b lbl_801C1EE8
lbl_801C1EDC:
/* 801C1EDC 001BEE1C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1EE0 001BEE20  80 9E 01 0C */	lwz r4, 0x10c(r30)
/* 801C1EE4 001BEE24  48 23 A1 95 */	bl setGamePad__Q26Screen9Game2DMgrFP10Controller
lbl_801C1EE8:
/* 801C1EE8 001BEE28  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 801C1EEC 001BEE2C  39 20 00 00 */	li r9, 0
/* 801C1EF0 001BEE30  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 801C1EF4 001BEE34  38 E0 00 01 */	li r7, 1
/* 801C1EF8 001BEE38  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 801C1EFC 001BEE3C  90 01 00 08 */	stw r0, 8(r1)
/* 801C1F00 001BEE40  38 A3 11 30 */	addi r5, r3, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 801C1F04 001BEE44  38 00 00 18 */	li r0, 0x18
/* 801C1F08 001BEE48  39 00 00 45 */	li r8, 0x45
/* 801C1F0C 001BEE4C  91 21 00 28 */	stw r9, 0x28(r1)
/* 801C1F10 001BEE50  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 801C1F14 001BEE54  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberKanketuMenu@ha
/* 801C1F18 001BEE58  38 C3 30 31 */	addi r6, r3, 0x745F3031@l
/* 801C1F1C 001BEE5C  90 A1 00 08 */	stw r5, 8(r1)
/* 801C1F20 001BEE60  38 A4 11 00 */	addi r5, r4, __vt__Q32og6Screen21DispMemberKanketuMenu@l
/* 801C1F24 001BEE64  38 80 00 04 */	li r4, 4
/* 801C1F28 001BEE68  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C1F2C 001BEE6C  38 00 00 0A */	li r0, 0xa
/* 801C1F30 001BEE70  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 801C1F34 001BEE74  91 01 00 14 */	stw r8, 0x14(r1)
/* 801C1F38 001BEE78  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801C1F3C 001BEE7C  91 21 00 0C */	stw r9, 0xc(r1)
/* 801C1F40 001BEE80  98 E1 00 27 */	stb r7, 0x27(r1)
/* 801C1F44 001BEE84  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 801C1F48 001BEE88  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801C1F4C 001BEE8C  99 21 00 24 */	stb r9, 0x24(r1)
/* 801C1F50 001BEE90  99 21 00 25 */	stb r9, 0x25(r1)
/* 801C1F54 001BEE94  90 A1 00 08 */	stw r5, 8(r1)
/* 801C1F58 001BEE98  99 21 00 2C */	stb r9, 0x2c(r1)
/* 801C1F5C 001BEE9C  99 21 00 2D */	stb r9, 0x2d(r1)
/* 801C1F60 001BEEA0  99 21 00 2E */	stb r9, 0x2e(r1)
/* 801C1F64 001BEEA4  91 21 00 28 */	stw r9, 0x28(r1)
/* 801C1F68 001BEEA8  90 81 00 10 */	stw r4, 0x10(r1)
/* 801C1F6C 001BEEAC  90 81 00 14 */	stw r4, 0x14(r1)
/* 801C1F70 001BEEB0  90 01 00 18 */	stw r0, 0x18(r1)
/* 801C1F74 001BEEB4  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 801C1F78 001BEEB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C1F7C 001BEEBC  7D 89 03 A6 */	mtctr r12
/* 801C1F80 001BEEC0  4E 80 04 21 */	bctrl 
/* 801C1F84 001BEEC4  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C1F88 001BEEC8  40 81 00 34 */	ble lbl_801C1FBC
/* 801C1F8C 001BEECC  38 00 00 01 */	li r0, 1
/* 801C1F90 001BEED0  38 60 FF FF */	li r3, -1
/* 801C1F94 001BEED4  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801C1F98 001BEED8  48 00 EE C9 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801C1F9C 001BEEDC  7C 1D 18 00 */	cmpw r29, r3
/* 801C1FA0 001BEEE0  40 82 00 10 */	bne lbl_801C1FB0
/* 801C1FA4 001BEEE4  38 00 00 01 */	li r0, 1
/* 801C1FA8 001BEEE8  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1FAC 001BEEEC  48 00 00 1C */	b lbl_801C1FC8
lbl_801C1FB0:
/* 801C1FB0 001BEEF0  38 00 00 00 */	li r0, 0
/* 801C1FB4 001BEEF4  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1FB8 001BEEF8  48 00 00 10 */	b lbl_801C1FC8
lbl_801C1FBC:
/* 801C1FBC 001BEEFC  38 00 00 00 */	li r0, 0
/* 801C1FC0 001BEF00  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801C1FC4 001BEF04  98 01 00 2C */	stb r0, 0x2c(r1)
lbl_801C1FC8:
/* 801C1FC8 001BEF08  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C1FCC 001BEF0C  38 81 00 08 */	addi r4, r1, 8
/* 801C1FD0 001BEF10  48 23 BE DD */	bl open_ChallengeKanketuMenu__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberKanketuMenu
/* 801C1FD4 001BEF14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C1FD8 001BEF18  41 82 00 38 */	beq lbl_801C2010
/* 801C1FDC 001BEF1C  93 FE 02 00 */	stw r31, 0x200(r30)
/* 801C1FE0 001BEF20  38 80 00 01 */	li r4, 1
/* 801C1FE4 001BEF24  38 A2 B1 70 */	addi r5, r2, lbl_805194D0@sda21
/* 801C1FE8 001BEF28  38 C0 00 03 */	li r6, 3
/* 801C1FEC 001BEF2C  88 1E 01 F8 */	lbz r0, 0x1f8(r30)
/* 801C1FF0 001BEF30  60 00 00 04 */	ori r0, r0, 4
/* 801C1FF4 001BEF34  98 1E 01 F8 */	stb r0, 0x1f8(r30)
/* 801C1FF8 001BEF38  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C1FFC 001BEF3C  4B FF 2F 99 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C2000 001BEF40  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C2004 001BEF44  38 80 00 01 */	li r4, 1
/* 801C2008 001BEF48  38 A2 B1 70 */	addi r5, r2, lbl_805194D0@sda21
/* 801C200C 001BEF4C  4B FF 2F 79 */	bl setMoviePause__Q24Game10GameSystemFbPc
lbl_801C2010:
/* 801C2010 001BEF50  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801C2014 001BEF54  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 801C2018 001BEF58  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 801C201C 001BEF5C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 801C2020 001BEF60  7C 08 03 A6 */	mtlr r0
/* 801C2024 001BEF64  38 21 00 40 */	addi r1, r1, 0x40
/* 801C2028 001BEF68  4E 80 00 20 */	blr 
.endif

.if version == 1
.global clearCaveMenus__Q24Game13VsGameSectionFv
clearCaveMenus__Q24Game13VsGameSectionFv:
/* 801C202C 001BEF6C  38 00 00 00 */	li r0, 0
/* 801C2030 001BEF70  98 03 01 F8 */	stb r0, 0x21c(r3)
/* 801C2034 001BEF74  90 03 01 FC */	stw r0, 0x220(r3)
/* 801C2038 001BEF78  90 03 02 00 */	stw r0, 0x224(r3)
/* 801C203C 001BEF7C  4E 80 00 20 */	blr 
.else
.global clearCaveMenus__Q24Game13VsGameSectionFv
clearCaveMenus__Q24Game13VsGameSectionFv:
/* 801C202C 001BEF6C  38 00 00 00 */	li r0, 0
/* 801C2030 001BEF70  98 03 01 F8 */	stb r0, 0x1f8(r3)
/* 801C2034 001BEF74  90 03 01 FC */	stw r0, 0x1fc(r3)
/* 801C2038 001BEF78  90 03 02 00 */	stw r0, 0x200(r3)
/* 801C203C 001BEF7C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global updateCaveMenus__Q24Game13VsGameSectionFv
updateCaveMenus__Q24Game13VsGameSectionFv:
/* 801C2040 001BEF80  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801C2044 001BEF84  7C 08 02 A6 */	mflr r0
/* 801C2048 001BEF88  90 01 00 54 */	stw r0, 0x54(r1)
/* 801C204C 001BEF8C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801C2050 001BEF90  7C 7F 1B 78 */	mr r31, r3
/* 801C2054 001BEF94  3C 60 80 48 */	lis r3, lbl_8047FF98@ha
/* 801C2058 001BEF98  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801C205C 001BEF9C  3B C3 FF 98 */	addi r30, r3, lbl_8047FF98@l
/* 801C2060 001BEFA0  88 9F 01 F8 */	lbz r4, 0x21c(r31)
/* 801C2064 001BEFA4  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 801C2068 001BEFA8  41 82 01 14 */	beq lbl_801C217C
/* 801C206C 001BEFAC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C2070 001BEFB0  48 23 C0 CD */	bl check_CaveMoreMenu__Q26Screen9Game2DMgrFv
/* 801C2074 001BEFB4  2C 03 00 02 */	cmpwi r3, 2
/* 801C2078 001BEFB8  41 82 00 BC */	beq lbl_801C2134
/* 801C207C 001BEFBC  40 80 00 14 */	bge lbl_801C2090
/* 801C2080 001BEFC0  2C 03 00 00 */	cmpwi r3, 0
/* 801C2084 001BEFC4  41 82 02 48 */	beq lbl_801C22CC
/* 801C2088 001BEFC8  40 80 00 14 */	bge lbl_801C209C
/* 801C208C 001BEFCC  48 00 02 40 */	b lbl_801C22CC
lbl_801C2090:
/* 801C2090 001BEFD0  2C 03 00 04 */	cmpwi r3, 4
/* 801C2094 001BEFD4  40 80 02 38 */	bge lbl_801C22CC
/* 801C2098 001BEFD8  48 00 00 D0 */	b lbl_801C2168
lbl_801C209C:
/* 801C209C 001BEFDC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C20A0 001BEFE0  38 80 00 00 */	li r4, 0
/* 801C20A4 001BEFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C20A8 001BEFE8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C20AC 001BEFEC  7D 89 03 A6 */	mtctr r12
/* 801C20B0 001BEFF0  4E 80 04 21 */	bctrl 
/* 801C20B4 001BEFF4  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 801C20B8 001BEFF8  38 80 00 01 */	li r4, 1
/* 801C20BC 001BEFFC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C20C0 001BF000  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801C20C4 001BF004  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C20C8 001BF008  81 83 00 00 */	lwz r12, 0(r3)
/* 801C20CC 001BF00C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C20D0 001BF010  7D 89 03 A6 */	mtctr r12
/* 801C20D4 001BF014  4E 80 04 21 */	bctrl 
/* 801C20D8 001BF018  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 801C20DC 001BF01C  38 BE 00 EC */	addi r5, r30, 0xec
/* 801C20E0 001BF020  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C20E4 001BF024  38 80 00 00 */	li r4, 0
/* 801C20E8 001BF028  38 C0 00 03 */	li r6, 3
/* 801C20EC 001BF02C  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801C20F0 001BF030  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C20F4 001BF034  4B FF 2E A1 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C20F8 001BF038  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C20FC 001BF03C  38 BE 00 EC */	addi r5, r30, 0xec
/* 801C2100 001BF040  38 80 00 00 */	li r4, 0
/* 801C2104 001BF044  4B FF 2E 81 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C2108 001BF048  88 1F 01 F8 */	lbz r0, 0x21c(r31)
/* 801C210C 001BF04C  7F E3 FB 78 */	mr r3, r31
/* 801C2110 001BF050  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801C2114 001BF054  98 1F 01 F8 */	stb r0, 0x21c(r31)
/* 801C2118 001BF058  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C211C 001BF05C  80 9F 01 FC */	lwz r4, 0x220(r31)
/* 801C2120 001BF060  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801C2124 001BF064  7D 89 03 A6 */	mtctr r12
/* 801C2128 001BF068  4E 80 04 21 */	bctrl 
/* 801C212C 001BF06C  38 60 00 01 */	li r3, 1
/* 801C2130 001BF070  48 00 01 A0 */	b lbl_801C22D0
lbl_801C2134:
/* 801C2134 001BF074  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C2138 001BF078  38 80 00 00 */	li r4, 0
/* 801C213C 001BF07C  38 A2 B1 78 */	addi r5, r2, lbl_805194D8@sda21
/* 801C2140 001BF080  38 C0 00 03 */	li r6, 3
/* 801C2144 001BF084  4B FF 2E 51 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C2148 001BF088  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C214C 001BF08C  38 80 00 00 */	li r4, 0
/* 801C2150 001BF090  38 A2 B1 78 */	addi r5, r2, lbl_805194D8@sda21
/* 801C2154 001BF094  4B FF 2E 31 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C2158 001BF098  88 1F 01 F8 */	lbz r0, 0x21c(r31)
/* 801C215C 001BF09C  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801C2160 001BF0A0  98 1F 01 F8 */	stb r0, 0x21c(r31)
/* 801C2164 001BF0A4  48 00 01 68 */	b lbl_801C22CC
lbl_801C2168:
/* 801C2168 001BF0A8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C216C 001BF0AC  38 BE 00 F8 */	addi r5, r30, 0xf8
/* 801C2170 001BF0B0  38 80 00 00 */	li r4, 0
/* 801C2174 001BF0B4  4B FF 2E 11 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C2178 001BF0B8  48 00 01 54 */	b lbl_801C22CC
lbl_801C217C:
/* 801C217C 001BF0BC  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 801C2180 001BF0C0  41 82 01 4C */	beq lbl_801C22CC
/* 801C2184 001BF0C4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C2188 001BF0C8  48 23 BE 19 */	bl check_KanketuMenu__Q26Screen9Game2DMgrFv
/* 801C218C 001BF0CC  2C 03 00 02 */	cmpwi r3, 2
/* 801C2190 001BF0D0  41 82 01 0C */	beq lbl_801C229C
/* 801C2194 001BF0D4  40 80 01 38 */	bge lbl_801C22CC
/* 801C2198 001BF0D8  2C 03 00 00 */	cmpwi r3, 0
/* 801C219C 001BF0DC  41 82 01 30 */	beq lbl_801C22CC
/* 801C21A0 001BF0E0  40 80 00 0C */	bge lbl_801C21AC
/* 801C21A4 001BF0E4  48 00 01 28 */	b lbl_801C22CC
/* 801C21A8 001BF0E8  48 00 01 24 */	b lbl_801C22CC
lbl_801C21AC:
/* 801C21AC 001BF0EC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C21B0 001BF0F0  38 80 00 00 */	li r4, 0
/* 801C21B4 001BF0F4  38 A2 B1 80 */	addi r5, r2, lbl_805194E0@sda21
/* 801C21B8 001BF0F8  38 C0 00 03 */	li r6, 3
/* 801C21BC 001BF0FC  4B FF 2D D9 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C21C0 001BF100  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C21C4 001BF104  38 80 00 00 */	li r4, 0
/* 801C21C8 001BF108  38 A2 B1 80 */	addi r5, r2, lbl_805194E0@sda21
/* 801C21CC 001BF10C  4B FF 2D B9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C21D0 001BF110  88 7F 01 F8 */	lbz r3, 0x21c(r31)
/* 801C21D4 001BF114  38 9E 01 04 */	addi r4, r30, 0x104
/* 801C21D8 001BF118  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C21DC 001BF11C  38 00 00 00 */	li r0, 0
/* 801C21E0 001BF120  54 65 07 B8 */	rlwinm r5, r3, 0, 0x1e, 0x1c
/* 801C21E4 001BF124  38 61 00 08 */	addi r3, r1, 8
/* 801C21E8 001BF128  98 BF 01 F8 */	stb r5, 0x21c(r31)
/* 801C21EC 001BF12C  80 BF 00 C8 */	lwz r5, 0xe8(r31)
/* 801C21F0 001BF130  90 81 00 14 */	stw r4, 0x14(r1)
/* 801C21F4 001BF134  90 01 00 18 */	stw r0, 0x18(r1)
/* 801C21F8 001BF138  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801C21FC 001BF13C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801C2200 001BF140  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C2204 001BF144  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801C2208 001BF148  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801C220C 001BF14C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C2210 001BF150  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C2214 001BF154  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801C2218 001BF158  90 01 00 40 */	stw r0, 0x40(r1)
/* 801C221C 001BF15C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C2220 001BF160  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C2224 001BF164  80 9F 02 00 */	lwz r4, 0x224(r31)
/* 801C2228 001BF168  81 84 00 00 */	lwz r12, 0(r4)
/* 801C222C 001BF16C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C2230 001BF170  7D 89 03 A6 */	mtctr r12
/* 801C2234 001BF174  4E 80 04 21 */	bctrl 
/* 801C2238 001BF178  C0 41 00 08 */	lfs f2, 8(r1)
/* 801C223C 001BF17C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801C2240 001BF180  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801C2244 001BF184  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801C2248 001BF188  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801C224C 001BF18C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801C2250 001BF190  80 7F 02 00 */	lwz r3, 0x224(r31)
/* 801C2254 001BF194  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2258 001BF198  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801C225C 001BF19C  7D 89 03 A6 */	mtctr r12
/* 801C2260 001BF1A0  4E 80 04 21 */	bctrl 
/* 801C2264 001BF1A4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801C2268 001BF1A8  38 80 00 00 */	li r4, 0
/* 801C226C 001BF1AC  80 1F 00 CC */	lwz r0, 0xec(r31)
/* 801C2270 001BF1B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C2274 001BF1B4  80 7F 02 00 */	lwz r3, 0x224(r31)
/* 801C2278 001BF1B8  4B F7 97 D9 */	bl movie_begin__Q24Game8CreatureFb
/* 801C227C 001BF1BC  80 1F 02 00 */	lwz r0, 0x224(r31)
/* 801C2280 001BF1C0  38 81 00 14 */	addi r4, r1, 0x14
/* 801C2284 001BF1C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801C2288 001BF1C8  90 03 01 94 */	stw r0, 0x194(r3)
/* 801C228C 001BF1CC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801C2290 001BF1D0  48 26 A7 41 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801C2294 001BF1D4  38 60 00 01 */	li r3, 1
/* 801C2298 001BF1D8  48 00 00 38 */	b lbl_801C22D0
lbl_801C229C:
/* 801C229C 001BF1DC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C22A0 001BF1E0  38 80 00 00 */	li r4, 0
/* 801C22A4 001BF1E4  38 A2 B1 88 */	addi r5, r2, lbl_805194E8@sda21
/* 801C22A8 001BF1E8  38 C0 00 03 */	li r6, 3
/* 801C22AC 001BF1EC  4B FF 2C E9 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C22B0 001BF1F0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C22B4 001BF1F4  38 80 00 00 */	li r4, 0
/* 801C22B8 001BF1F8  38 A2 B1 88 */	addi r5, r2, lbl_805194E8@sda21
/* 801C22BC 001BF1FC  4B FF 2C C9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C22C0 001BF200  88 1F 01 F8 */	lbz r0, 0x21c(r31)
/* 801C22C4 001BF204  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801C22C8 001BF208  98 1F 01 F8 */	stb r0, 0x21c(r31)
lbl_801C22CC:
/* 801C22CC 001BF20C  38 60 00 00 */	li r3, 0
lbl_801C22D0:
/* 801C22D0 001BF210  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801C22D4 001BF214  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801C22D8 001BF218  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801C22DC 001BF21C  7C 08 03 A6 */	mtlr r0
/* 801C22E0 001BF220  38 21 00 50 */	addi r1, r1, 0x50
/* 801C22E4 001BF224  4E 80 00 20 */	blr 
.else
.global updateCaveMenus__Q24Game13VsGameSectionFv
updateCaveMenus__Q24Game13VsGameSectionFv:
/* 801C2040 001BEF80  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801C2044 001BEF84  7C 08 02 A6 */	mflr r0
/* 801C2048 001BEF88  90 01 00 54 */	stw r0, 0x54(r1)
/* 801C204C 001BEF8C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801C2050 001BEF90  7C 7F 1B 78 */	mr r31, r3
/* 801C2054 001BEF94  3C 60 80 48 */	lis r3, lbl_8047FF98@ha
/* 801C2058 001BEF98  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801C205C 001BEF9C  3B C3 FF 98 */	addi r30, r3, lbl_8047FF98@l
/* 801C2060 001BEFA0  88 9F 01 F8 */	lbz r4, 0x1f8(r31)
/* 801C2064 001BEFA4  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 801C2068 001BEFA8  41 82 01 14 */	beq lbl_801C217C
/* 801C206C 001BEFAC  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C2070 001BEFB0  48 23 C0 CD */	bl check_CaveMoreMenu__Q26Screen9Game2DMgrFv
/* 801C2074 001BEFB4  2C 03 00 02 */	cmpwi r3, 2
/* 801C2078 001BEFB8  41 82 00 BC */	beq lbl_801C2134
/* 801C207C 001BEFBC  40 80 00 14 */	bge lbl_801C2090
/* 801C2080 001BEFC0  2C 03 00 00 */	cmpwi r3, 0
/* 801C2084 001BEFC4  41 82 02 48 */	beq lbl_801C22CC
/* 801C2088 001BEFC8  40 80 00 14 */	bge lbl_801C209C
/* 801C208C 001BEFCC  48 00 02 40 */	b lbl_801C22CC
lbl_801C2090:
/* 801C2090 001BEFD0  2C 03 00 04 */	cmpwi r3, 4
/* 801C2094 001BEFD4  40 80 02 38 */	bge lbl_801C22CC
/* 801C2098 001BEFD8  48 00 00 D0 */	b lbl_801C2168
lbl_801C209C:
/* 801C209C 001BEFDC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C20A0 001BEFE0  38 80 00 00 */	li r4, 0
/* 801C20A4 001BEFE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C20A8 001BEFE8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C20AC 001BEFEC  7D 89 03 A6 */	mtctr r12
/* 801C20B0 001BEFF0  4E 80 04 21 */	bctrl 
/* 801C20B4 001BEFF4  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 801C20B8 001BEFF8  38 80 00 01 */	li r4, 1
/* 801C20BC 001BEFFC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C20C0 001BF000  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 801C20C4 001BF004  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C20C8 001BF008  81 83 00 00 */	lwz r12, 0(r3)
/* 801C20CC 001BF00C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C20D0 001BF010  7D 89 03 A6 */	mtctr r12
/* 801C20D4 001BF014  4E 80 04 21 */	bctrl 
/* 801C20D8 001BF018  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 801C20DC 001BF01C  38 BE 00 EC */	addi r5, r30, 0xec
/* 801C20E0 001BF020  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801C20E4 001BF024  38 80 00 00 */	li r4, 0
/* 801C20E8 001BF028  38 C0 00 03 */	li r6, 3
/* 801C20EC 001BF02C  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801C20F0 001BF030  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C20F4 001BF034  4B FF 2E A1 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C20F8 001BF038  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C20FC 001BF03C  38 BE 00 EC */	addi r5, r30, 0xec
/* 801C2100 001BF040  38 80 00 00 */	li r4, 0
/* 801C2104 001BF044  4B FF 2E 81 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C2108 001BF048  88 1F 01 F8 */	lbz r0, 0x1f8(r31)
/* 801C210C 001BF04C  7F E3 FB 78 */	mr r3, r31
/* 801C2110 001BF050  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801C2114 001BF054  98 1F 01 F8 */	stb r0, 0x1f8(r31)
/* 801C2118 001BF058  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C211C 001BF05C  80 9F 01 FC */	lwz r4, 0x1fc(r31)
/* 801C2120 001BF060  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801C2124 001BF064  7D 89 03 A6 */	mtctr r12
/* 801C2128 001BF068  4E 80 04 21 */	bctrl 
/* 801C212C 001BF06C  38 60 00 01 */	li r3, 1
/* 801C2130 001BF070  48 00 01 A0 */	b lbl_801C22D0
lbl_801C2134:
/* 801C2134 001BF074  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C2138 001BF078  38 80 00 00 */	li r4, 0
/* 801C213C 001BF07C  38 A2 B1 78 */	addi r5, r2, lbl_805194D8@sda21
/* 801C2140 001BF080  38 C0 00 03 */	li r6, 3
/* 801C2144 001BF084  4B FF 2E 51 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C2148 001BF088  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C214C 001BF08C  38 80 00 00 */	li r4, 0
/* 801C2150 001BF090  38 A2 B1 78 */	addi r5, r2, lbl_805194D8@sda21
/* 801C2154 001BF094  4B FF 2E 31 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C2158 001BF098  88 1F 01 F8 */	lbz r0, 0x1f8(r31)
/* 801C215C 001BF09C  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801C2160 001BF0A0  98 1F 01 F8 */	stb r0, 0x1f8(r31)
/* 801C2164 001BF0A4  48 00 01 68 */	b lbl_801C22CC
lbl_801C2168:
/* 801C2168 001BF0A8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C216C 001BF0AC  38 BE 00 F8 */	addi r5, r30, 0xf8
/* 801C2170 001BF0B0  38 80 00 00 */	li r4, 0
/* 801C2174 001BF0B4  4B FF 2E 11 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C2178 001BF0B8  48 00 01 54 */	b lbl_801C22CC
lbl_801C217C:
/* 801C217C 001BF0BC  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 801C2180 001BF0C0  41 82 01 4C */	beq lbl_801C22CC
/* 801C2184 001BF0C4  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801C2188 001BF0C8  48 23 BE 19 */	bl check_KanketuMenu__Q26Screen9Game2DMgrFv
/* 801C218C 001BF0CC  2C 03 00 02 */	cmpwi r3, 2
/* 801C2190 001BF0D0  41 82 01 0C */	beq lbl_801C229C
/* 801C2194 001BF0D4  40 80 01 38 */	bge lbl_801C22CC
/* 801C2198 001BF0D8  2C 03 00 00 */	cmpwi r3, 0
/* 801C219C 001BF0DC  41 82 01 30 */	beq lbl_801C22CC
/* 801C21A0 001BF0E0  40 80 00 0C */	bge lbl_801C21AC
/* 801C21A4 001BF0E4  48 00 01 28 */	b lbl_801C22CC
/* 801C21A8 001BF0E8  48 00 01 24 */	b lbl_801C22CC
lbl_801C21AC:
/* 801C21AC 001BF0EC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C21B0 001BF0F0  38 80 00 00 */	li r4, 0
/* 801C21B4 001BF0F4  38 A2 B1 80 */	addi r5, r2, lbl_805194E0@sda21
/* 801C21B8 001BF0F8  38 C0 00 03 */	li r6, 3
/* 801C21BC 001BF0FC  4B FF 2D D9 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C21C0 001BF100  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C21C4 001BF104  38 80 00 00 */	li r4, 0
/* 801C21C8 001BF108  38 A2 B1 80 */	addi r5, r2, lbl_805194E0@sda21
/* 801C21CC 001BF10C  4B FF 2D B9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C21D0 001BF110  88 7F 01 F8 */	lbz r3, 0x1f8(r31)
/* 801C21D4 001BF114  38 9E 01 04 */	addi r4, r30, 0x104
/* 801C21D8 001BF118  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C21DC 001BF11C  38 00 00 00 */	li r0, 0
/* 801C21E0 001BF120  54 65 07 B8 */	rlwinm r5, r3, 0, 0x1e, 0x1c
/* 801C21E4 001BF124  38 61 00 08 */	addi r3, r1, 8
/* 801C21E8 001BF128  98 BF 01 F8 */	stb r5, 0x1f8(r31)
/* 801C21EC 001BF12C  80 BF 00 C8 */	lwz r5, 0xc8(r31)
/* 801C21F0 001BF130  90 81 00 14 */	stw r4, 0x14(r1)
/* 801C21F4 001BF134  90 01 00 18 */	stw r0, 0x18(r1)
/* 801C21F8 001BF138  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801C21FC 001BF13C  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801C2200 001BF140  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C2204 001BF144  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801C2208 001BF148  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801C220C 001BF14C  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C2210 001BF150  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C2214 001BF154  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801C2218 001BF158  90 01 00 40 */	stw r0, 0x40(r1)
/* 801C221C 001BF15C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C2220 001BF160  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C2224 001BF164  80 9F 02 00 */	lwz r4, 0x200(r31)
/* 801C2228 001BF168  81 84 00 00 */	lwz r12, 0(r4)
/* 801C222C 001BF16C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C2230 001BF170  7D 89 03 A6 */	mtctr r12
/* 801C2234 001BF174  4E 80 04 21 */	bctrl 
/* 801C2238 001BF178  C0 41 00 08 */	lfs f2, 8(r1)
/* 801C223C 001BF17C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801C2240 001BF180  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801C2244 001BF184  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801C2248 001BF188  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801C224C 001BF18C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801C2250 001BF190  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801C2254 001BF194  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2258 001BF198  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801C225C 001BF19C  7D 89 03 A6 */	mtctr r12
/* 801C2260 001BF1A0  4E 80 04 21 */	bctrl 
/* 801C2264 001BF1A4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801C2268 001BF1A8  38 80 00 00 */	li r4, 0
/* 801C226C 001BF1AC  80 1F 00 CC */	lwz r0, 0xcc(r31)
/* 801C2270 001BF1B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C2274 001BF1B4  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801C2278 001BF1B8  4B F7 97 D9 */	bl movie_begin__Q24Game8CreatureFb
/* 801C227C 001BF1BC  80 1F 02 00 */	lwz r0, 0x200(r31)
/* 801C2280 001BF1C0  38 81 00 14 */	addi r4, r1, 0x14
/* 801C2284 001BF1C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801C2288 001BF1C8  90 03 01 94 */	stw r0, 0x194(r3)
/* 801C228C 001BF1CC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801C2290 001BF1D0  48 26 A7 41 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801C2294 001BF1D4  38 60 00 01 */	li r3, 1
/* 801C2298 001BF1D8  48 00 00 38 */	b lbl_801C22D0
lbl_801C229C:
/* 801C229C 001BF1DC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C22A0 001BF1E0  38 80 00 00 */	li r4, 0
/* 801C22A4 001BF1E4  38 A2 B1 88 */	addi r5, r2, lbl_805194E8@sda21
/* 801C22A8 001BF1E8  38 C0 00 03 */	li r6, 3
/* 801C22AC 001BF1EC  4B FF 2C E9 */	bl setPause__Q24Game10GameSystemFbPci
/* 801C22B0 001BF1F0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801C22B4 001BF1F4  38 80 00 00 */	li r4, 0
/* 801C22B8 001BF1F8  38 A2 B1 88 */	addi r5, r2, lbl_805194E8@sda21
/* 801C22BC 001BF1FC  4B FF 2C C9 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801C22C0 001BF200  88 1F 01 F8 */	lbz r0, 0x1f8(r31)
/* 801C22C4 001BF204  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801C22C8 001BF208  98 1F 01 F8 */	stb r0, 0x1f8(r31)
lbl_801C22CC:
/* 801C22CC 001BF20C  38 60 00 00 */	li r3, 0
lbl_801C22D0:
/* 801C22D0 001BF210  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801C22D4 001BF214  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801C22D8 001BF218  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801C22DC 001BF21C  7C 08 03 A6 */	mtlr r0
/* 801C22E0 001BF220  38 21 00 50 */	addi r1, r1, 0x50
/* 801C22E4 001BF224  4E 80 00 20 */	blr 
.endif

.global getFaceDir__Q34Game15ItemBigFountain4ItemFv
getFaceDir__Q34Game15ItemBigFountain4ItemFv:
/* 801C22E8 001BF228  C0 23 01 EC */	lfs f1, 0x1ec(r3)
/* 801C22EC 001BF22C  4E 80 00 20 */	blr 

.if version == 1
.global onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl:
/* 801C22F0 001BF230  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C22F4 001BF234  7C 08 02 A6 */	mflr r0
/* 801C22F8 001BF238  3C E0 80 48 */	lis r7, lbl_804800AC@ha
/* 801C22FC 001BF23C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C2300 001BF240  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C2304 001BF244  7C DF 33 78 */	mr r31, r6
/* 801C2308 001BF248  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C230C 001BF24C  7C BE 2B 78 */	mr r30, r5
/* 801C2310 001BF250  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C2314 001BF254  7C 9D 23 78 */	mr r29, r4
/* 801C2318 001BF258  38 87 00 AC */	addi r4, r7, lbl_804800AC@l
/* 801C231C 001BF25C  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C2320 001BF260  7C 7C 1B 78 */	mr r28, r3
/* 801C2324 001BF264  7F A3 EB 78 */	mr r3, r29
/* 801C2328 001BF268  48 26 F5 A5 */	bl is__Q24Game11MovieConfigFPc
/* 801C232C 001BF26C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C2330 001BF270  38 60 00 00 */	li r3, 0
/* 801C2334 001BF274  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C2338 001BF278  2C 00 00 01 */	cmpwi r0, 1
/* 801C233C 001BF27C  41 82 00 0C */	beq lbl_801C2348
/* 801C2340 001BF280  2C 00 00 03 */	cmpwi r0, 3
/* 801C2344 001BF284  40 82 00 08 */	bne lbl_801C234C
lbl_801C2348:
/* 801C2348 001BF288  38 60 00 01 */	li r3, 1
lbl_801C234C:
/* 801C234C 001BF28C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C2350 001BF290  41 82 00 28 */	beq lbl_801C2378
/* 801C2354 001BF294  28 1F 00 01 */	cmplwi r31, 1
/* 801C2358 001BF298  40 82 00 14 */	bne lbl_801C236C
/* 801C235C 001BF29C  7F 83 E3 78 */	mr r3, r28
/* 801C2360 001BF2A0  38 80 00 01 */	li r4, 1
/* 801C2364 001BF2A4  4B F8 B5 B5 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 801C2368 001BF2A8  48 00 00 10 */	b lbl_801C2378
lbl_801C236C:
/* 801C236C 001BF2AC  7F 83 E3 78 */	mr r3, r28
/* 801C2370 001BF2B0  38 80 00 00 */	li r4, 0
/* 801C2374 001BF2B4  4B F8 B5 A5 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
lbl_801C2378:
/* 801C2378 001BF2B8  7F 83 E3 78 */	mr r3, r28
/* 801C237C 001BF2BC  4B F8 BA 0D */	bl setCamController__Q24Game15BaseGameSectionFv
/* 801C2380 001BF2C0  80 7C 01 80 */	lwz r3, 0x1a4(r28)
/* 801C2384 001BF2C4  28 03 00 00 */	cmplwi r3, 0
/* 801C2388 001BF2C8  41 82 00 24 */	beq lbl_801C23AC
/* 801C238C 001BF2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2390 001BF2D0  7F 84 E3 78 */	mr r4, r28
/* 801C2394 001BF2D4  7F A5 EB 78 */	mr r5, r29
/* 801C2398 001BF2D8  7F C6 F3 78 */	mr r6, r30
/* 801C239C 001BF2DC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801C23A0 001BF2E0  7F E7 FB 78 */	mr r7, r31
/* 801C23A4 001BF2E4  7D 89 03 A6 */	mtctr r12
/* 801C23A8 001BF2E8  4E 80 04 21 */	bctrl 
lbl_801C23AC:
/* 801C23AC 001BF2EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C23B0 001BF2F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C23B4 001BF2F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C23B8 001BF2F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C23BC 001BF2FC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C23C0 001BF300  7C 08 03 A6 */	mtlr r0
/* 801C23C4 001BF304  38 21 00 20 */	addi r1, r1, 0x20
/* 801C23C8 001BF308  4E 80 00 20 */	blr 
.else
.global onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl:
/* 801C22F0 001BF230  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C22F4 001BF234  7C 08 02 A6 */	mflr r0
/* 801C22F8 001BF238  3C E0 80 48 */	lis r7, lbl_804800AC@ha
/* 801C22FC 001BF23C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C2300 001BF240  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C2304 001BF244  7C DF 33 78 */	mr r31, r6
/* 801C2308 001BF248  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C230C 001BF24C  7C BE 2B 78 */	mr r30, r5
/* 801C2310 001BF250  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C2314 001BF254  7C 9D 23 78 */	mr r29, r4
/* 801C2318 001BF258  38 87 00 AC */	addi r4, r7, lbl_804800AC@l
/* 801C231C 001BF25C  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C2320 001BF260  7C 7C 1B 78 */	mr r28, r3
/* 801C2324 001BF264  7F A3 EB 78 */	mr r3, r29
/* 801C2328 001BF268  48 26 F5 A5 */	bl is__Q24Game11MovieConfigFPc
/* 801C232C 001BF26C  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 801C2330 001BF270  38 60 00 00 */	li r3, 0
/* 801C2334 001BF274  80 04 00 44 */	lwz r0, 0x44(r4)
/* 801C2338 001BF278  2C 00 00 01 */	cmpwi r0, 1
/* 801C233C 001BF27C  41 82 00 0C */	beq lbl_801C2348
/* 801C2340 001BF280  2C 00 00 03 */	cmpwi r0, 3
/* 801C2344 001BF284  40 82 00 08 */	bne lbl_801C234C
lbl_801C2348:
/* 801C2348 001BF288  38 60 00 01 */	li r3, 1
lbl_801C234C:
/* 801C234C 001BF28C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C2350 001BF290  41 82 00 28 */	beq lbl_801C2378
/* 801C2354 001BF294  28 1F 00 01 */	cmplwi r31, 1
/* 801C2358 001BF298  40 82 00 14 */	bne lbl_801C236C
/* 801C235C 001BF29C  7F 83 E3 78 */	mr r3, r28
/* 801C2360 001BF2A0  38 80 00 01 */	li r4, 1
/* 801C2364 001BF2A4  4B F8 B5 B5 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
/* 801C2368 001BF2A8  48 00 00 10 */	b lbl_801C2378
lbl_801C236C:
/* 801C236C 001BF2AC  7F 83 E3 78 */	mr r3, r28
/* 801C2370 001BF2B0  38 80 00 00 */	li r4, 0
/* 801C2374 001BF2B4  4B F8 B5 A5 */	bl setPlayerMode__Q24Game15BaseGameSectionFi
lbl_801C2378:
/* 801C2378 001BF2B8  7F 83 E3 78 */	mr r3, r28
/* 801C237C 001BF2BC  4B F8 BA 0D */	bl setCamController__Q24Game15BaseGameSectionFv
/* 801C2380 001BF2C0  80 7C 01 80 */	lwz r3, 0x180(r28)
/* 801C2384 001BF2C4  28 03 00 00 */	cmplwi r3, 0
/* 801C2388 001BF2C8  41 82 00 24 */	beq lbl_801C23AC
/* 801C238C 001BF2CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2390 001BF2D0  7F 84 E3 78 */	mr r4, r28
/* 801C2394 001BF2D4  7F A5 EB 78 */	mr r5, r29
/* 801C2398 001BF2D8  7F C6 F3 78 */	mr r6, r30
/* 801C239C 001BF2DC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801C23A0 001BF2E0  7F E7 FB 78 */	mr r7, r31
/* 801C23A4 001BF2E4  7D 89 03 A6 */	mtctr r12
/* 801C23A8 001BF2E8  4E 80 04 21 */	bctrl 
lbl_801C23AC:
/* 801C23AC 001BF2EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C23B0 001BF2F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C23B4 001BF2F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C23B8 001BF2F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C23BC 001BF2FC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C23C0 001BF300  7C 08 03 A6 */	mtlr r0
/* 801C23C4 001BF304  38 21 00 20 */	addi r1, r1, 0x20
/* 801C23C8 001BF308  4E 80 00 20 */	blr 
.endif

.global onMovieStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl:
/* 801C23CC 001BF30C  4E 80 00 20 */	blr 

.if version == 1
.global onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl:
/* 801C23D0 001BF310  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C23D4 001BF314  7C 08 02 A6 */	mflr r0
/* 801C23D8 001BF318  7C 69 1B 78 */	mr r9, r3
/* 801C23DC 001BF31C  7C 88 23 78 */	mr r8, r4
/* 801C23E0 001BF320  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C23E4 001BF324  7C A0 2B 78 */	mr r0, r5
/* 801C23E8 001BF328  7C C7 33 78 */	mr r7, r6
/* 801C23EC 001BF32C  80 63 01 80 */	lwz r3, 0x1a4(r3)
/* 801C23F0 001BF330  28 03 00 00 */	cmplwi r3, 0
/* 801C23F4 001BF334  41 82 00 20 */	beq lbl_801C2414
/* 801C23F8 001BF338  81 83 00 00 */	lwz r12, 0(r3)
/* 801C23FC 001BF33C  7D 24 4B 78 */	mr r4, r9
/* 801C2400 001BF340  7D 05 43 78 */	mr r5, r8
/* 801C2404 001BF344  7C 06 03 78 */	mr r6, r0
/* 801C2408 001BF348  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801C240C 001BF34C  7D 89 03 A6 */	mtctr r12
/* 801C2410 001BF350  4E 80 04 21 */	bctrl 
lbl_801C2414:
/* 801C2414 001BF354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2418 001BF358  7C 08 03 A6 */	mtlr r0
/* 801C241C 001BF35C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2420 001BF360  4E 80 00 20 */	blr 
.else
.global onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl:
/* 801C23D0 001BF310  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C23D4 001BF314  7C 08 02 A6 */	mflr r0
/* 801C23D8 001BF318  7C 69 1B 78 */	mr r9, r3
/* 801C23DC 001BF31C  7C 88 23 78 */	mr r8, r4
/* 801C23E0 001BF320  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C23E4 001BF324  7C A0 2B 78 */	mr r0, r5
/* 801C23E8 001BF328  7C C7 33 78 */	mr r7, r6
/* 801C23EC 001BF32C  80 63 01 80 */	lwz r3, 0x180(r3)
/* 801C23F0 001BF330  28 03 00 00 */	cmplwi r3, 0
/* 801C23F4 001BF334  41 82 00 20 */	beq lbl_801C2414
/* 801C23F8 001BF338  81 83 00 00 */	lwz r12, 0(r3)
/* 801C23FC 001BF33C  7D 24 4B 78 */	mr r4, r9
/* 801C2400 001BF340  7D 05 43 78 */	mr r5, r8
/* 801C2404 001BF344  7C 06 03 78 */	mr r6, r0
/* 801C2408 001BF348  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801C240C 001BF34C  7D 89 03 A6 */	mtctr r12
/* 801C2410 001BF350  4E 80 04 21 */	bctrl 
lbl_801C2414:
/* 801C2414 001BF354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2418 001BF358  7C 08 03 A6 */	mtlr r0
/* 801C241C 001BF35C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2420 001BF360  4E 80 00 20 */	blr 
.endif

.global onMovieDone__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl:
/* 801C2424 001BF364  4E 80 00 20 */	blr 

.global createFallPikmins__Q24Game13VsGameSectionFRQ24Game13PikiContaineri
createFallPikmins__Q24Game13VsGameSectionFRQ24Game13PikiContaineri:
/* 801C2428 001BF368  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 801C242C 001BF36C  7C 08 02 A6 */	mflr r0
/* 801C2430 001BF370  90 01 01 64 */	stw r0, 0x164(r1)
/* 801C2434 001BF374  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 801C2438 001BF378  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 801C243C 001BF37C  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 801C2440 001BF380  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 801C2444 001BF384  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 801C2448 001BF388  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 801C244C 001BF38C  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 801C2450 001BF390  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 801C2454 001BF394  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 801C2458 001BF398  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 801C245C 001BF39C  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 801C2460 001BF3A0  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 801C2464 001BF3A4  DB 21 00 F0 */	stfd f25, 0xf0(r1)
/* 801C2468 001BF3A8  F3 21 00 F8 */	psq_st f25, 248(r1), 0, qr0
/* 801C246C 001BF3AC  DB 01 00 E0 */	stfd f24, 0xe0(r1)
/* 801C2470 001BF3B0  F3 01 00 E8 */	psq_st f24, 232(r1), 0, qr0
/* 801C2474 001BF3B4  DA E1 00 D0 */	stfd f23, 0xd0(r1)
/* 801C2478 001BF3B8  F2 E1 00 D8 */	psq_st f23, 216(r1), 0, qr0
/* 801C247C 001BF3BC  DA C1 00 C0 */	stfd f22, 0xc0(r1)
/* 801C2480 001BF3C0  F2 C1 00 C8 */	psq_st f22, 200(r1), 0, qr0
/* 801C2484 001BF3C4  DA A1 00 B0 */	stfd f21, 0xb0(r1)
/* 801C2488 001BF3C8  F2 A1 00 B8 */	psq_st f21, 184(r1), 0, qr0
/* 801C248C 001BF3CC  DA 81 00 A0 */	stfd f20, 0xa0(r1)
/* 801C2490 001BF3D0  F2 81 00 A8 */	psq_st f20, 168(r1), 0, qr0
/* 801C2494 001BF3D4  BF 21 00 84 */	stmw r25, 0x84(r1)
/* 801C2498 001BF3D8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801C249C 001BF3DC  7C 9A 23 78 */	mr r26, r4
/* 801C24A0 001BF3E0  38 81 00 38 */	addi r4, r1, 0x38
/* 801C24A4 001BF3E4  81 83 00 04 */	lwz r12, 4(r3)
/* 801C24A8 001BF3E8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C24AC 001BF3EC  7D 89 03 A6 */	mtctr r12
/* 801C24B0 001BF3F0  4E 80 04 21 */	bctrl 
/* 801C24B4 001BF3F4  3C 80 80 48 */	lis r4, lbl_804800BC@ha
/* 801C24B8 001BF3F8  7F 43 D3 78 */	mr r3, r26
/* 801C24BC 001BF3FC  38 84 00 BC */	addi r4, r4, lbl_804800BC@l
/* 801C24C0 001BF400  48 02 EE E9 */	bl dump__Q24Game13PikiContainerFPc
/* 801C24C4 001BF404  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C24C8 001BF408  38 80 00 00 */	li r4, 0
/* 801C24CC 001BF40C  81 83 00 00 */	lwz r12, 0(r3)
/* 801C24D0 001BF410  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C24D4 001BF414  7D 89 03 A6 */	mtctr r12
/* 801C24D8 001BF418  4E 80 04 21 */	bctrl 
/* 801C24DC 001BF41C  7C 60 1B 78 */	mr r0, r3
/* 801C24E0 001BF420  38 61 00 08 */	addi r3, r1, 8
/* 801C24E4 001BF424  7C 04 03 78 */	mr r4, r0
/* 801C24E8 001BF428  81 84 00 00 */	lwz r12, 0(r4)
/* 801C24EC 001BF42C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C24F0 001BF430  7D 89 03 A6 */	mtctr r12
/* 801C24F4 001BF434  4E 80 04 21 */	bctrl 
/* 801C24F8 001BF438  C0 41 00 08 */	lfs f2, 8(r1)
/* 801C24FC 001BF43C  38 81 00 38 */	addi r4, r1, 0x38
/* 801C2500 001BF440  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801C2504 001BF444  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801C2508 001BF448  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801C250C 001BF44C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801C2510 001BF450  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801C2514 001BF454  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801C2518 001BF458  81 83 00 04 */	lwz r12, 4(r3)
/* 801C251C 001BF45C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801C2520 001BF460  7D 89 03 A6 */	mtctr r12
/* 801C2524 001BF464  4E 80 04 21 */	bctrl 
/* 801C2528 001BF468  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C252C 001BF46C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801C2530 001BF470  CA C2 B1 68 */	lfd f22, lbl_805194C8@sda21(r2)
/* 801C2534 001BF474  3B E3 71 A0 */	addi r31, r3, sincosTable___5JMath@l
/* 801C2538 001BF478  C2 E2 B1 90 */	lfs f23, lbl_805194F0@sda21(r2)
/* 801C253C 001BF47C  3B A0 00 00 */	li r29, 0
/* 801C2540 001BF480  C3 02 B1 98 */	lfs f24, lbl_805194F8@sda21(r2)
/* 801C2544 001BF484  3F C0 43 30 */	lis r30, 0x4330
/* 801C2548 001BF488  C3 22 B1 94 */	lfs f25, lbl_805194F4@sda21(r2)
/* 801C254C 001BF48C  C3 42 B1 9C */	lfs f26, lbl_805194FC@sda21(r2)
/* 801C2550 001BF490  C3 62 B1 A0 */	lfs f27, lbl_80519500@sda21(r2)
/* 801C2554 001BF494  C3 82 B1 A8 */	lfs f28, lbl_80519508@sda21(r2)
/* 801C2558 001BF498  C3 A2 B1 A4 */	lfs f29, lbl_80519504@sda21(r2)
/* 801C255C 001BF49C  C3 C2 B1 48 */	lfs f30, lbl_805194A8@sda21(r2)
/* 801C2560 001BF4A0  C3 E2 B1 AC */	lfs f31, lbl_8051950C@sda21(r2)
lbl_801C2564:
/* 801C2564 001BF4A4  3B 80 00 00 */	li r28, 0
lbl_801C2568:
/* 801C2568 001BF4A8  3B 60 00 00 */	li r27, 0
/* 801C256C 001BF4AC  48 00 02 40 */	b lbl_801C27AC
lbl_801C2570:
/* 801C2570 001BF4B0  4B F0 70 31 */	bl rand
/* 801C2574 001BF4B4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801C2578 001BF4B8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801C257C 001BF4BC  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801C2580 001BF4C0  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 801C2584 001BF4C4  EC 00 B0 28 */	fsubs f0, f0, f22
/* 801C2588 001BF4C8  EC 00 B8 24 */	fdivs f0, f0, f23
/* 801C258C 001BF4CC  EE B8 C8 3A */	fmadds f21, f24, f0, f25
/* 801C2590 001BF4D0  4B F0 70 11 */	bl rand
/* 801C2594 001BF4D4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801C2598 001BF4D8  93 C1 00 50 */	stw r30, 0x50(r1)
/* 801C259C 001BF4DC  90 01 00 54 */	stw r0, 0x54(r1)
/* 801C25A0 001BF4E0  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 801C25A4 001BF4E4  EC 00 B0 28 */	fsubs f0, f0, f22
/* 801C25A8 001BF4E8  EC 00 B8 24 */	fdivs f0, f0, f23
/* 801C25AC 001BF4EC  EE 9A 00 32 */	fmuls f20, f26, f0
/* 801C25B0 001BF4F0  4B F0 6F F1 */	bl rand
/* 801C25B4 001BF4F4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801C25B8 001BF4F8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801C25BC 001BF4FC  FC 20 A0 90 */	fmr f1, f20
/* 801C25C0 001BF500  90 01 00 5C */	stw r0, 0x5c(r1)
/* 801C25C4 001BF504  FC 14 F0 40 */	fcmpo cr0, f20, f30
/* 801C25C8 001BF508  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 801C25CC 001BF50C  EC 00 B0 28 */	fsubs f0, f0, f22
/* 801C25D0 001BF510  EC 00 B8 24 */	fdivs f0, f0, f23
/* 801C25D4 001BF514  EC 1C E8 3A */	fmadds f0, f28, f0, f29
/* 801C25D8 001BF518  EC 5B 00 2A */	fadds f2, f27, f0
/* 801C25DC 001BF51C  40 80 00 08 */	bge lbl_801C25E4
/* 801C25E0 001BF520  FC 20 A0 50 */	fneg f1, f20
lbl_801C25E4:
/* 801C25E4 001BF524  EC 01 07 F2 */	fmuls f0, f1, f31
/* 801C25E8 001BF528  FC 14 F0 40 */	fcmpo cr0, f20, f30
/* 801C25EC 001BF52C  FC 00 00 1E */	fctiwz f0, f0
/* 801C25F0 001BF530  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 801C25F4 001BF534  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C25F8 001BF538  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C25FC 001BF53C  7C 7F 02 14 */	add r3, r31, r0
/* 801C2600 001BF540  C0 03 00 04 */	lfs f0, 4(r3)
/* 801C2604 001BF544  EC 35 00 32 */	fmuls f1, f21, f0
/* 801C2608 001BF548  40 80 00 30 */	bge lbl_801C2638
/* 801C260C 001BF54C  C0 02 B1 B0 */	lfs f0, lbl_80519510@sda21(r2)
/* 801C2610 001BF550  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2614 001BF554  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C2618 001BF558  EC 14 00 32 */	fmuls f0, f20, f0
/* 801C261C 001BF55C  FC 00 00 1E */	fctiwz f0, f0
/* 801C2620 001BF560  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 801C2624 001BF564  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 801C2628 001BF568  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C262C 001BF56C  7C 03 04 2E */	lfsx f0, r3, r0
/* 801C2630 001BF570  FC 00 00 50 */	fneg f0, f0
/* 801C2634 001BF574  48 00 00 24 */	b lbl_801C2658
lbl_801C2638:
/* 801C2638 001BF578  EC 14 07 F2 */	fmuls f0, f20, f31
/* 801C263C 001BF57C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2640 001BF580  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C2644 001BF584  FC 00 00 1E */	fctiwz f0, f0
/* 801C2648 001BF588  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 801C264C 001BF58C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801C2650 001BF590  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C2654 001BF594  7C 03 04 2E */	lfsx f0, r3, r0
lbl_801C2658:
/* 801C2658 001BF598  EC 15 00 32 */	fmuls f0, f21, f0
/* 801C265C 001BF59C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 801C2660 001BF5A0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801C2664 001BF5A4  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 801C2668 001BF5A8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801C266C 001BF5AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2670 001BF5B0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801C2674 001BF5B4  7D 89 03 A6 */	mtctr r12
/* 801C2678 001BF5B8  4E 80 04 21 */	bctrl 
/* 801C267C 001BF5BC  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801C2680 001BF5C0  7C 79 1B 79 */	or. r25, r3, r3
/* 801C2684 001BF5C4  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801C2688 001BF5C8  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 801C268C 001BF5CC  EC 81 00 2A */	fadds f4, f1, f0
/* 801C2690 001BF5D0  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 801C2694 001BF5D4  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 801C2698 001BF5D8  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 801C269C 001BF5DC  EC 43 10 2A */	fadds f2, f3, f2
/* 801C26A0 001BF5E0  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 801C26A4 001BF5E4  EC 01 00 2A */	fadds f0, f1, f0
/* 801C26A8 001BF5E8  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 801C26AC 001BF5EC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801C26B0 001BF5F0  41 82 00 F8 */	beq lbl_801C27A8
/* 801C26B4 001BF5F4  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 801C26B8 001BF5F8  3C 80 80 4B */	lis r4, __vt__Q24Game11PikiInitArg@ha
/* 801C26BC 001BF5FC  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 801C26C0 001BF600  38 A0 00 0F */	li r5, 0xf
/* 801C26C4 001BF604  90 01 00 20 */	stw r0, 0x20(r1)
/* 801C26C8 001BF608  38 C4 10 F4 */	addi r6, r4, __vt__Q24Game11PikiInitArg@l
/* 801C26CC 001BF60C  38 00 00 00 */	li r0, 0
/* 801C26D0 001BF610  38 81 00 20 */	addi r4, r1, 0x20
/* 801C26D4 001BF614  90 C1 00 20 */	stw r6, 0x20(r1)
/* 801C26D8 001BF618  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801C26DC 001BF61C  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C26E0 001BF620  4B F7 88 E9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801C26E4 001BF624  4B F0 6E BD */	bl rand
/* 801C26E8 001BF628  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C26EC 001BF62C  3C 00 43 30 */	lis r0, 0x4330
/* 801C26F0 001BF630  90 61 00 74 */	stw r3, 0x74(r1)
/* 801C26F4 001BF634  7F 23 CB 78 */	mr r3, r25
/* 801C26F8 001BF638  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C26FC 001BF63C  38 81 00 2C */	addi r4, r1, 0x2c
/* 801C2700 001BF640  90 01 00 70 */	stw r0, 0x70(r1)
/* 801C2704 001BF644  38 A0 00 00 */	li r5, 0
/* 801C2708 001BF648  C0 22 B1 90 */	lfs f1, lbl_805194F0@sda21(r2)
/* 801C270C 001BF64C  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 801C2710 001BF650  C0 02 B1 9C */	lfs f0, lbl_805194FC@sda21(r2)
/* 801C2714 001BF654  EC 42 18 28 */	fsubs f2, f2, f3
/* 801C2718 001BF658  EC 22 08 24 */	fdivs f1, f2, f1
/* 801C271C 001BF65C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801C2720 001BF660  D0 19 01 FC */	stfs f0, 0x1fc(r25)
/* 801C2724 001BF664  4B F7 8A 85 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C2728 001BF668  7F 23 CB 78 */	mr r3, r25
/* 801C272C 001BF66C  7F A4 EB 78 */	mr r4, r29
/* 801C2730 001BF670  4B F8 7E 91 */	bl changeShape__Q24Game4PikiFi
/* 801C2734 001BF674  7F 23 CB 78 */	mr r3, r25
/* 801C2738 001BF678  7F 84 E3 78 */	mr r4, r28
/* 801C273C 001BF67C  4B F8 80 35 */	bl changeHappa__Q24Game4PikiFi
/* 801C2740 001BF680  4B F0 6E 61 */	bl rand
/* 801C2744 001BF684  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C2748 001BF688  3C 00 43 30 */	lis r0, 0x4330
/* 801C274C 001BF68C  90 61 00 6C */	stw r3, 0x6c(r1)
/* 801C2750 001BF690  7F 23 CB 78 */	mr r3, r25
/* 801C2754 001BF694  C0 42 B1 48 */	lfs f2, lbl_805194A8@sda21(r2)
/* 801C2758 001BF698  38 81 00 14 */	addi r4, r1, 0x14
/* 801C275C 001BF69C  90 01 00 68 */	stw r0, 0x68(r1)
/* 801C2760 001BF6A0  C8 22 B1 68 */	lfd f1, lbl_805194C8@sda21(r2)
/* 801C2764 001BF6A4  C8 01 00 68 */	lfd f0, 0x68(r1)
/* 801C2768 001BF6A8  C0 62 B1 90 */	lfs f3, lbl_805194F0@sda21(r2)
/* 801C276C 001BF6AC  EC 80 08 28 */	fsubs f4, f0, f1
/* 801C2770 001BF6B0  C0 22 B1 B8 */	lfs f1, lbl_80519518@sda21(r2)
/* 801C2774 001BF6B4  C0 02 B1 B4 */	lfs f0, lbl_80519514@sda21(r2)
/* 801C2778 001BF6B8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 801C277C 001BF6BC  EC 64 18 24 */	fdivs f3, f4, f3
/* 801C2780 001BF6C0  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 801C2784 001BF6C4  EC 01 00 FE */	fnmadds f0, f1, f3, f0
/* 801C2788 001BF6C8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801C278C 001BF6CC  81 99 00 00 */	lwz r12, 0(r25)
/* 801C2790 001BF6D0  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801C2794 001BF6D4  7D 89 03 A6 */	mtctr r12
/* 801C2798 001BF6D8  4E 80 04 21 */	bctrl 
/* 801C279C 001BF6DC  7F 23 CB 78 */	mr r3, r25
/* 801C27A0 001BF6E0  38 80 00 00 */	li r4, 0
/* 801C27A4 001BF6E4  4B F7 92 AD */	bl movie_begin__Q24Game8CreatureFb
lbl_801C27A8:
/* 801C27A8 001BF6E8  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C27AC:
/* 801C27AC 001BF6EC  7F 43 D3 78 */	mr r3, r26
/* 801C27B0 001BF6F0  7F A4 EB 78 */	mr r4, r29
/* 801C27B4 001BF6F4  7F 85 E3 78 */	mr r5, r28
/* 801C27B8 001BF6F8  48 02 EC 65 */	bl getCount__Q24Game13PikiContainerFii
/* 801C27BC 001BF6FC  80 03 00 00 */	lwz r0, 0(r3)
/* 801C27C0 001BF700  7C 1B 00 00 */	cmpw r27, r0
/* 801C27C4 001BF704  41 80 FD AC */	blt lbl_801C2570
/* 801C27C8 001BF708  3B 9C 00 01 */	addi r28, r28, 1
/* 801C27CC 001BF70C  2C 1C 00 03 */	cmpwi r28, 3
/* 801C27D0 001BF710  41 80 FD 98 */	blt lbl_801C2568
/* 801C27D4 001BF714  3B BD 00 01 */	addi r29, r29, 1
/* 801C27D8 001BF718  2C 1D 00 07 */	cmpwi r29, 7
/* 801C27DC 001BF71C  41 80 FD 88 */	blt lbl_801C2564
/* 801C27E0 001BF720  7F 43 D3 78 */	mr r3, r26
/* 801C27E4 001BF724  48 02 EA A9 */	bl clear__Q24Game13PikiContainerFv
/* 801C27E8 001BF728  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 801C27EC 001BF72C  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 801C27F0 001BF730  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 801C27F4 001BF734  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 801C27F8 001BF738  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 801C27FC 001BF73C  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 801C2800 001BF740  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 801C2804 001BF744  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 801C2808 001BF748  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 801C280C 001BF74C  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 801C2810 001BF750  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 801C2814 001BF754  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 801C2818 001BF758  E3 21 00 F8 */	psq_l f25, 248(r1), 0, qr0
/* 801C281C 001BF75C  CB 21 00 F0 */	lfd f25, 0xf0(r1)
/* 801C2820 001BF760  E3 01 00 E8 */	psq_l f24, 232(r1), 0, qr0
/* 801C2824 001BF764  CB 01 00 E0 */	lfd f24, 0xe0(r1)
/* 801C2828 001BF768  E2 E1 00 D8 */	psq_l f23, 216(r1), 0, qr0
/* 801C282C 001BF76C  CA E1 00 D0 */	lfd f23, 0xd0(r1)
/* 801C2830 001BF770  E2 C1 00 C8 */	psq_l f22, 200(r1), 0, qr0
/* 801C2834 001BF774  CA C1 00 C0 */	lfd f22, 0xc0(r1)
/* 801C2838 001BF778  E2 A1 00 B8 */	psq_l f21, 184(r1), 0, qr0
/* 801C283C 001BF77C  CA A1 00 B0 */	lfd f21, 0xb0(r1)
/* 801C2840 001BF780  E2 81 00 A8 */	psq_l f20, 168(r1), 0, qr0
/* 801C2844 001BF784  CA 81 00 A0 */	lfd f20, 0xa0(r1)
/* 801C2848 001BF788  BB 21 00 84 */	lmw r25, 0x84(r1)
/* 801C284C 001BF78C  80 01 01 64 */	lwz r0, 0x164(r1)
/* 801C2850 001BF790  7C 08 03 A6 */	mtlr r0
/* 801C2854 001BF794  38 21 01 60 */	addi r1, r1, 0x160
/* 801C2858 001BF798  4E 80 00 20 */	blr 

.if version == 1
.global createVsPikmins__Q24Game13VsGameSectionFv
createVsPikmins__Q24Game13VsGameSectionFv:
/* 801C285C 001BF79C  94 21 FE 50 */	stwu r1, -0x1b0(r1)
/* 801C2860 001BF7A0  7C 08 02 A6 */	mflr r0
/* 801C2864 001BF7A4  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 801C2868 001BF7A8  DB E1 01 A0 */	stfd f31, 0x1a0(r1)
/* 801C286C 001BF7AC  F3 E1 01 A8 */	psq_st f31, 424(r1), 0, qr0
/* 801C2870 001BF7B0  DB C1 01 90 */	stfd f30, 0x190(r1)
/* 801C2874 001BF7B4  F3 C1 01 98 */	psq_st f30, 408(r1), 0, qr0
/* 801C2878 001BF7B8  DB A1 01 80 */	stfd f29, 0x180(r1)
/* 801C287C 001BF7BC  F3 A1 01 88 */	psq_st f29, 392(r1), 0, qr0
/* 801C2880 001BF7C0  DB 81 01 70 */	stfd f28, 0x170(r1)
/* 801C2884 001BF7C4  F3 81 01 78 */	psq_st f28, 376(r1), 0, qr0
/* 801C2888 001BF7C8  DB 61 01 60 */	stfd f27, 0x160(r1)
/* 801C288C 001BF7CC  F3 61 01 68 */	psq_st f27, 360(r1), 0, qr0
/* 801C2890 001BF7D0  DB 41 01 50 */	stfd f26, 0x150(r1)
/* 801C2894 001BF7D4  F3 41 01 58 */	psq_st f26, 344(r1), 0, qr0
/* 801C2898 001BF7D8  DB 21 01 40 */	stfd f25, 0x140(r1)
/* 801C289C 001BF7DC  F3 21 01 48 */	psq_st f25, 328(r1), 0, qr0
/* 801C28A0 001BF7E0  DB 01 01 30 */	stfd f24, 0x130(r1)
/* 801C28A4 001BF7E4  F3 01 01 38 */	psq_st f24, 312(r1), 0, qr0
/* 801C28A8 001BF7E8  DA E1 01 20 */	stfd f23, 0x120(r1)
/* 801C28AC 001BF7EC  F2 E1 01 28 */	psq_st f23, 296(r1), 0, qr0
/* 801C28B0 001BF7F0  DA C1 01 10 */	stfd f22, 0x110(r1)
/* 801C28B4 001BF7F4  F2 C1 01 18 */	psq_st f22, 280(r1), 0, qr0
/* 801C28B8 001BF7F8  DA A1 01 00 */	stfd f21, 0x100(r1)
/* 801C28BC 001BF7FC  F2 A1 01 08 */	psq_st f21, 264(r1), 0, qr0
/* 801C28C0 001BF800  DA 81 00 F0 */	stfd f20, 0xf0(r1)
/* 801C28C4 001BF804  F2 81 00 F8 */	psq_st f20, 248(r1), 0, qr0
/* 801C28C8 001BF808  DA 61 00 E0 */	stfd f19, 0xe0(r1)
/* 801C28CC 001BF80C  F2 61 00 E8 */	psq_st f19, 232(r1), 0, qr0
/* 801C28D0 001BF810  DA 41 00 D0 */	stfd f18, 0xd0(r1)
/* 801C28D4 001BF814  F2 41 00 D8 */	psq_st f18, 216(r1), 0, qr0
/* 801C28D8 001BF818  DA 21 00 C0 */	stfd f17, 0xc0(r1)
/* 801C28DC 001BF81C  F2 21 00 C8 */	psq_st f17, 200(r1), 0, qr0
/* 801C28E0 001BF820  DA 01 00 B0 */	stfd f16, 0xb0(r1)
/* 801C28E4 001BF824  F2 01 00 B8 */	psq_st f16, 184(r1), 0, qr0
/* 801C28E8 001BF828  BF 01 00 90 */	stmw r24, 0x90(r1)
/* 801C28EC 001BF82C  7C 79 1B 78 */	mr r25, r3
/* 801C28F0 001BF830  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C28F4 001BF834  38 80 00 01 */	li r4, 1
/* 801C28F8 001BF838  4B FB 91 A5 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C28FC 001BF83C  7C 7A 1B 79 */	or. r26, r3, r3
/* 801C2900 001BF840  40 82 00 20 */	bne lbl_801C2920
/* 801C2904 001BF844  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C2908 001BF848  3C A0 80 48 */	lis r5, lbl_8047FFC0@ha
/* 801C290C 001BF84C  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C2910 001BF850  38 80 05 45 */	li r4, 0x545
/* 801C2914 001BF854  38 A5 FF C0 */	addi r5, r5, lbl_8047FFC0@l
/* 801C2918 001BF858  4C C6 31 82 */	crclr 6
/* 801C291C 001BF85C  4B E6 7D 25 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C2920:
/* 801C2920 001BF860  7F 44 D3 78 */	mr r4, r26
/* 801C2924 001BF864  38 61 00 28 */	addi r3, r1, 0x28
/* 801C2928 001BF868  81 9A 00 00 */	lwz r12, 0(r26)
/* 801C292C 001BF86C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C2930 001BF870  7D 89 03 A6 */	mtctr r12
/* 801C2934 001BF874  4E 80 04 21 */	bctrl 
/* 801C2938 001BF878  C3 21 00 28 */	lfs f25, 0x28(r1)
/* 801C293C 001BF87C  38 80 00 00 */	li r4, 0
/* 801C2940 001BF880  C3 01 00 2C */	lfs f24, 0x2c(r1)
/* 801C2944 001BF884  C2 E1 00 30 */	lfs f23, 0x30(r1)
/* 801C2948 001BF888  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C294C 001BF88C  4B FB 91 51 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C2950 001BF890  7C 7A 1B 79 */	or. r26, r3, r3
/* 801C2954 001BF894  40 82 00 20 */	bne lbl_801C2974
/* 801C2958 001BF898  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C295C 001BF89C  3C A0 80 48 */	lis r5, lbl_8047FFC0@ha
/* 801C2960 001BF8A0  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C2964 001BF8A4  38 80 05 4A */	li r4, 0x54a
/* 801C2968 001BF8A8  38 A5 FF C0 */	addi r5, r5, lbl_8047FFC0@l
/* 801C296C 001BF8AC  4C C6 31 82 */	crclr 6
/* 801C2970 001BF8B0  4B E6 7C D1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C2974:
/* 801C2974 001BF8B4  7F 44 D3 78 */	mr r4, r26
/* 801C2978 001BF8B8  38 61 00 1C */	addi r3, r1, 0x1c
/* 801C297C 001BF8BC  81 9A 00 00 */	lwz r12, 0(r26)
/* 801C2980 001BF8C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C2984 001BF8C4  7D 89 03 A6 */	mtctr r12
/* 801C2988 001BF8C8  4E 80 04 21 */	bctrl 
/* 801C298C 001BF8CC  3B B9 02 14 */	addi r29, r25, 0x238
/* 801C2990 001BF8D0  C2 C1 00 1C */	lfs f22, 0x1c(r1)
/* 801C2994 001BF8D4  C2 A1 00 20 */	lfs f21, 0x20(r1)
/* 801C2998 001BF8D8  7F A3 EB 78 */	mr r3, r29
/* 801C299C 001BF8DC  C2 81 00 24 */	lfs f20, 0x24(r1)
/* 801C29A0 001BF8E0  48 02 E8 ED */	bl clear__Q24Game13PikiContainerFv
/* 801C29A4 001BF8E4  7F A3 EB 78 */	mr r3, r29
/* 801C29A8 001BF8E8  38 80 00 01 */	li r4, 1
/* 801C29AC 001BF8EC  38 A0 00 00 */	li r5, 0
/* 801C29B0 001BF8F0  48 02 EA 6D */	bl getCount__Q24Game13PikiContainerFii
/* 801C29B4 001BF8F4  80 19 03 44 */	lwz r0, 0x368(r25)
/* 801C29B8 001BF8F8  38 80 00 00 */	li r4, 0
/* 801C29BC 001BF8FC  38 A0 00 00 */	li r5, 0
/* 801C29C0 001BF900  1C 00 00 05 */	mulli r0, r0, 5
/* 801C29C4 001BF904  90 03 00 00 */	stw r0, 0(r3)
/* 801C29C8 001BF908  7F A3 EB 78 */	mr r3, r29
/* 801C29CC 001BF90C  48 02 EA 51 */	bl getCount__Q24Game13PikiContainerFii
/* 801C29D0 001BF910  80 19 03 48 */	lwz r0, 0x36c(r25)
/* 801C29D4 001BF914  3B 80 00 00 */	li r28, 0
/* 801C29D8 001BF918  1C 00 00 05 */	mulli r0, r0, 5
/* 801C29DC 001BF91C  90 03 00 00 */	stw r0, 0(r3)
lbl_801C29E0:
/* 801C29E0 001BF920  2C 1C 00 01 */	cmpwi r28, 1
/* 801C29E4 001BF924  40 82 00 14 */	bne lbl_801C29F8
/* 801C29E8 001BF928  FE 60 C8 90 */	fmr f19, f25
/* 801C29EC 001BF92C  FE 40 C0 90 */	fmr f18, f24
/* 801C29F0 001BF930  FE 20 B8 90 */	fmr f17, f23
/* 801C29F4 001BF934  48 00 00 18 */	b lbl_801C2A0C
lbl_801C29F8:
/* 801C29F8 001BF938  2C 1C 00 00 */	cmpwi r28, 0
/* 801C29FC 001BF93C  40 82 01 D8 */	bne lbl_801C2BD4
/* 801C2A00 001BF940  FE 60 B0 90 */	fmr f19, f22
/* 801C2A04 001BF944  FE 40 A8 90 */	fmr f18, f21
/* 801C2A08 001BF948  FE 20 A0 90 */	fmr f17, f20
lbl_801C2A0C:
/* 801C2A0C 001BF94C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2A10 001BF950  CB 42 B1 68 */	lfd f26, lbl_805194C8@sda21(r2)
/* 801C2A14 001BF954  C3 62 B1 90 */	lfs f27, lbl_805194F0@sda21(r2)
/* 801C2A18 001BF958  3B E3 71 A0 */	addi r31, r3, sincosTable___5JMath@l
/* 801C2A1C 001BF95C  C3 82 B1 BC */	lfs f28, lbl_8051951C@sda21(r2)
/* 801C2A20 001BF960  3B 60 00 00 */	li r27, 0
/* 801C2A24 001BF964  C3 A2 B1 9C */	lfs f29, lbl_805194FC@sda21(r2)
/* 801C2A28 001BF968  3F C0 43 30 */	lis r30, 0x4330
/* 801C2A2C 001BF96C  C3 C2 B1 48 */	lfs f30, lbl_805194A8@sda21(r2)
/* 801C2A30 001BF970  C3 E2 B1 AC */	lfs f31, lbl_8051950C@sda21(r2)
lbl_801C2A34:
/* 801C2A34 001BF974  3B 40 00 00 */	li r26, 0
/* 801C2A38 001BF978  48 00 01 74 */	b lbl_801C2BAC
lbl_801C2A3C:
/* 801C2A3C 001BF97C  4B F0 6B 65 */	bl rand
/* 801C2A40 001BF980  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801C2A44 001BF984  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801C2A48 001BF988  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801C2A4C 001BF98C  C8 01 00 68 */	lfd f0, 0x68(r1)
/* 801C2A50 001BF990  EC 00 D0 28 */	fsubs f0, f0, f26
/* 801C2A54 001BF994  EC 00 D8 24 */	fdivs f0, f0, f27
/* 801C2A58 001BF998  EE 1C 00 32 */	fmuls f16, f28, f0
/* 801C2A5C 001BF99C  4B F0 6B 45 */	bl rand
/* 801C2A60 001BF9A0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801C2A64 001BF9A4  93 C1 00 70 */	stw r30, 0x70(r1)
/* 801C2A68 001BF9A8  90 01 00 74 */	stw r0, 0x74(r1)
/* 801C2A6C 001BF9AC  C8 01 00 70 */	lfd f0, 0x70(r1)
/* 801C2A70 001BF9B0  EC 00 D0 28 */	fsubs f0, f0, f26
/* 801C2A74 001BF9B4  EC 00 D8 24 */	fdivs f0, f0, f27
/* 801C2A78 001BF9B8  EC 5D 00 32 */	fmuls f2, f29, f0
/* 801C2A7C 001BF9BC  FC 00 10 90 */	fmr f0, f2
/* 801C2A80 001BF9C0  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 801C2A84 001BF9C4  40 80 00 08 */	bge lbl_801C2A8C
/* 801C2A88 001BF9C8  FC 00 10 50 */	fneg f0, f2
lbl_801C2A8C:
/* 801C2A8C 001BF9CC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801C2A90 001BF9D0  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 801C2A94 001BF9D4  FC 00 00 1E */	fctiwz f0, f0
/* 801C2A98 001BF9D8  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 801C2A9C 001BF9DC  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 801C2AA0 001BF9E0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C2AA4 001BF9E4  7C 7F 02 14 */	add r3, r31, r0
/* 801C2AA8 001BF9E8  C0 03 00 04 */	lfs f0, 4(r3)
/* 801C2AAC 001BF9EC  EC 30 00 32 */	fmuls f1, f16, f0
/* 801C2AB0 001BF9F0  40 80 00 30 */	bge lbl_801C2AE0
/* 801C2AB4 001BF9F4  C0 02 B1 B0 */	lfs f0, lbl_80519510@sda21(r2)
/* 801C2AB8 001BF9F8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2ABC 001BF9FC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C2AC0 001BFA00  EC 02 00 32 */	fmuls f0, f2, f0
/* 801C2AC4 001BFA04  FC 00 00 1E */	fctiwz f0, f0
/* 801C2AC8 001BFA08  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 801C2ACC 001BFA0C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801C2AD0 001BFA10  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C2AD4 001BFA14  7C 03 04 2E */	lfsx f0, r3, r0
/* 801C2AD8 001BFA18  FC 00 00 50 */	fneg f0, f0
/* 801C2ADC 001BFA1C  48 00 00 24 */	b lbl_801C2B00
lbl_801C2AE0:
/* 801C2AE0 001BFA20  EC 02 07 F2 */	fmuls f0, f2, f31
/* 801C2AE4 001BFA24  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2AE8 001BFA28  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C2AEC 001BFA2C  FC 00 00 1E */	fctiwz f0, f0
/* 801C2AF0 001BFA30  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 801C2AF4 001BFA34  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 801C2AF8 001BFA38  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C2AFC 001BFA3C  7C 03 04 2E */	lfsx f0, r3, r0
lbl_801C2B00:
/* 801C2B00 001BFA40  EC 10 00 32 */	fmuls f0, f16, f0
/* 801C2B04 001BFA44  D3 C1 00 60 */	stfs f30, 0x60(r1)
/* 801C2B08 001BFA48  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801C2B0C 001BFA4C  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 801C2B10 001BFA50  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801C2B14 001BFA54  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2B18 001BFA58  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801C2B1C 001BFA5C  7D 89 03 A6 */	mtctr r12
/* 801C2B20 001BFA60  4E 80 04 21 */	bctrl 
/* 801C2B24 001BFA64  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 801C2B28 001BFA68  7C 78 1B 79 */	or. r24, r3, r3
/* 801C2B2C 001BFA6C  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 801C2B30 001BFA70  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 801C2B34 001BFA74  EC 42 98 2A */	fadds f2, f2, f19
/* 801C2B38 001BFA78  EC 21 90 2A */	fadds f1, f1, f18
/* 801C2B3C 001BFA7C  EC 00 88 2A */	fadds f0, f0, f17
/* 801C2B40 001BFA80  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 801C2B44 001BFA84  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801C2B48 001BFA88  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 801C2B4C 001BFA8C  41 82 00 5C */	beq lbl_801C2BA8
/* 801C2B50 001BFA90  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 801C2B54 001BFA94  3C 80 80 4B */	lis r4, __vt__Q24Game11PikiInitArg@ha
/* 801C2B58 001BFA98  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 801C2B5C 001BFA9C  38 A0 FF FF */	li r5, -1
/* 801C2B60 001BFAA0  90 01 00 50 */	stw r0, 0x50(r1)
/* 801C2B64 001BFAA4  38 C4 10 F4 */	addi r6, r4, __vt__Q24Game11PikiInitArg@l
/* 801C2B68 001BFAA8  38 00 00 00 */	li r0, 0
/* 801C2B6C 001BFAAC  38 81 00 50 */	addi r4, r1, 0x50
/* 801C2B70 001BFAB0  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801C2B74 001BFAB4  90 A1 00 54 */	stw r5, 0x54(r1)
/* 801C2B78 001BFAB8  90 01 00 58 */	stw r0, 0x58(r1)
/* 801C2B7C 001BFABC  4B F7 84 4D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801C2B80 001BFAC0  7F 03 C3 78 */	mr r3, r24
/* 801C2B84 001BFAC4  38 81 00 5C */	addi r4, r1, 0x5c
/* 801C2B88 001BFAC8  38 A0 00 00 */	li r5, 0
/* 801C2B8C 001BFACC  4B F7 86 1D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C2B90 001BFAD0  7F 03 C3 78 */	mr r3, r24
/* 801C2B94 001BFAD4  7F 84 E3 78 */	mr r4, r28
/* 801C2B98 001BFAD8  4B F8 7A 29 */	bl changeShape__Q24Game4PikiFi
/* 801C2B9C 001BFADC  7F 03 C3 78 */	mr r3, r24
/* 801C2BA0 001BFAE0  7F 64 DB 78 */	mr r4, r27
/* 801C2BA4 001BFAE4  4B F8 7B CD */	bl changeHappa__Q24Game4PikiFi
lbl_801C2BA8:
/* 801C2BA8 001BFAE8  3B 5A 00 01 */	addi r26, r26, 1
lbl_801C2BAC:
/* 801C2BAC 001BFAEC  7F A3 EB 78 */	mr r3, r29
/* 801C2BB0 001BFAF0  7F 84 E3 78 */	mr r4, r28
/* 801C2BB4 001BFAF4  7F 65 DB 78 */	mr r5, r27
/* 801C2BB8 001BFAF8  48 02 E8 65 */	bl getCount__Q24Game13PikiContainerFii
/* 801C2BBC 001BFAFC  80 03 00 00 */	lwz r0, 0(r3)
/* 801C2BC0 001BFB00  7C 1A 00 00 */	cmpw r26, r0
/* 801C2BC4 001BFB04  41 80 FE 78 */	blt lbl_801C2A3C
/* 801C2BC8 001BFB08  3B 7B 00 01 */	addi r27, r27, 1
/* 801C2BCC 001BFB0C  2C 1B 00 03 */	cmpwi r27, 3
/* 801C2BD0 001BFB10  41 80 FE 64 */	blt lbl_801C2A34
lbl_801C2BD4:
/* 801C2BD4 001BFB14  3B 9C 00 01 */	addi r28, r28, 1
/* 801C2BD8 001BFB18  2C 1C 00 07 */	cmpwi r28, 7
/* 801C2BDC 001BFB1C  41 80 FE 04 */	blt lbl_801C29E0
/* 801C2BE0 001BFB20  80 62 2B 08 */	lwz r3, lbl_80520E68@sda21(r2)
/* 801C2BE4 001BFB24  3B 41 00 08 */	addi r26, r1, 8
/* 801C2BE8 001BFB28  80 02 2B 0C */	lwz r0, lbl_80520E6C@sda21(r2)
/* 801C2BEC 001BFB2C  3B 00 00 00 */	li r24, 0
/* 801C2BF0 001BFB30  90 61 00 08 */	stw r3, 8(r1)
/* 801C2BF4 001BFB34  80 6D 84 80 */	lwz r3, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 801C2BF8 001BFB38  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C2BFC 001BFB3C  80 0D 84 7C */	lwz r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 801C2C00 001BFB40  90 61 00 08 */	stw r3, 8(r1)
/* 801C2C04 001BFB44  90 01 00 0C */	stw r0, 0xc(r1)
lbl_801C2C08:
/* 801C2C08 001BFB48  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C2C0C 001BFB4C  20 98 00 01 */	subfic r4, r24, 1
/* 801C2C10 001BFB50  4B FB 8E 8D */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C2C14 001BFB54  7C 60 1B 78 */	mr r0, r3
/* 801C2C18 001BFB58  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2C1C 001BFB5C  7C 1B 03 78 */	mr r27, r0
/* 801C2C20 001BFB60  4B FA 9D 49 */	bl __ct__Q24Game14PelletIteratorFv
/* 801C2C24 001BFB64  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2C28 001BFB68  4B FA 9D 59 */	bl first__Q24Game14PelletIteratorFv
/* 801C2C2C 001BFB6C  48 00 00 80 */	b lbl_801C2CAC
lbl_801C2C30:
/* 801C2C30 001BFB70  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2C34 001BFB74  4B FA 9D 99 */	bl __ml__Q24Game14PelletIteratorFv
/* 801C2C38 001BFB78  7C 60 1B 78 */	mr r0, r3
/* 801C2C3C 001BFB7C  80 7A 00 00 */	lwz r3, 0(r26)
/* 801C2C40 001BFB80  7C 1C 03 78 */	mr r28, r0
/* 801C2C44 001BFB84  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801C2C48 001BFB88  80 84 00 40 */	lwz r4, 0x40(r4)
/* 801C2C4C 001BFB8C  4B F0 7A 75 */	bl strcmp
/* 801C2C50 001BFB90  2C 03 00 00 */	cmpwi r3, 0
/* 801C2C54 001BFB94  40 82 00 50 */	bne lbl_801C2CA4
/* 801C2C58 001BFB98  7F 64 DB 78 */	mr r4, r27
/* 801C2C5C 001BFB9C  38 61 00 10 */	addi r3, r1, 0x10
/* 801C2C60 001BFBA0  4B FB 53 A5 */	bl getFlagSetPos__Q24Game5OnyonFv
/* 801C2C64 001BFBA4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801C2C68 001BFBA8  7F 83 E3 78 */	mr r3, r28
/* 801C2C6C 001BFBAC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 801C2C70 001BFBB0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801C2C74 001BFBB4  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801C2C78 001BFBB8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801C2C7C 001BFBBC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801C2C80 001BFBC0  4B FA 3D 55 */	bl getCylinderHeight__Q24Game6PelletFv
/* 801C2C84 001BFBC4  C0 42 B1 4C */	lfs f2, lbl_805194AC@sda21(r2)
/* 801C2C88 001BFBC8  7F 83 E3 78 */	mr r3, r28
/* 801C2C8C 001BFBCC  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801C2C90 001BFBD0  38 81 00 34 */	addi r4, r1, 0x34
/* 801C2C94 001BFBD4  38 A0 00 00 */	li r5, 0
/* 801C2C98 001BFBD8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801C2C9C 001BFBDC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801C2CA0 001BFBE0  4B F7 85 09 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
lbl_801C2CA4:
/* 801C2CA4 001BFBE4  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2CA8 001BFBE8  4B FA 9D 8D */	bl next__Q24Game14PelletIteratorFv
lbl_801C2CAC:
/* 801C2CAC 001BFBEC  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2CB0 001BFBF0  4B FA 9E 45 */	bl isDone__Q24Game14PelletIteratorFv
/* 801C2CB4 001BFBF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C2CB8 001BFBF8  41 82 FF 78 */	beq lbl_801C2C30
/* 801C2CBC 001BFBFC  3B 18 00 01 */	addi r24, r24, 1
/* 801C2CC0 001BFC00  3B 5A 00 04 */	addi r26, r26, 4
/* 801C2CC4 001BFC04  2C 18 00 02 */	cmpwi r24, 2
/* 801C2CC8 001BFC08  41 80 FF 40 */	blt lbl_801C2C08
/* 801C2CCC 001BFC0C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C2CD0 001BFC10  38 80 00 00 */	li r4, 0
/* 801C2CD4 001BFC14  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2CD8 001BFC18  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C2CDC 001BFC1C  7D 89 03 A6 */	mtctr r12
/* 801C2CE0 001BFC20  4E 80 04 21 */	bctrl 
/* 801C2CE4 001BFC24  80 B9 03 3C */	lwz r5, 0x360(r25)
/* 801C2CE8 001BFC28  38 80 00 01 */	li r4, 1
/* 801C2CEC 001BFC2C  80 05 00 68 */	lwz r0, 0x68(r5)
/* 801C2CF0 001BFC30  90 03 02 5C */	stw r0, 0x25c(r3)
/* 801C2CF4 001BFC34  80 B9 03 3C */	lwz r5, 0x360(r25)
/* 801C2CF8 001BFC38  80 05 00 64 */	lwz r0, 0x64(r5)
/* 801C2CFC 001BFC3C  90 03 02 60 */	stw r0, 0x260(r3)
/* 801C2D00 001BFC40  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C2D04 001BFC44  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2D08 001BFC48  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C2D0C 001BFC4C  7D 89 03 A6 */	mtctr r12
/* 801C2D10 001BFC50  4E 80 04 21 */	bctrl 
/* 801C2D14 001BFC54  80 99 03 3C */	lwz r4, 0x360(r25)
/* 801C2D18 001BFC58  80 04 00 68 */	lwz r0, 0x68(r4)
/* 801C2D1C 001BFC5C  90 03 02 5C */	stw r0, 0x25c(r3)
/* 801C2D20 001BFC60  80 99 03 3C */	lwz r4, 0x360(r25)
/* 801C2D24 001BFC64  80 04 00 64 */	lwz r0, 0x64(r4)
/* 801C2D28 001BFC68  90 03 02 60 */	stw r0, 0x260(r3)
/* 801C2D2C 001BFC6C  E3 E1 01 A8 */	psq_l f31, 424(r1), 0, qr0
/* 801C2D30 001BFC70  CB E1 01 A0 */	lfd f31, 0x1a0(r1)
/* 801C2D34 001BFC74  E3 C1 01 98 */	psq_l f30, 408(r1), 0, qr0
/* 801C2D38 001BFC78  CB C1 01 90 */	lfd f30, 0x190(r1)
/* 801C2D3C 001BFC7C  E3 A1 01 88 */	psq_l f29, 392(r1), 0, qr0
/* 801C2D40 001BFC80  CB A1 01 80 */	lfd f29, 0x180(r1)
/* 801C2D44 001BFC84  E3 81 01 78 */	psq_l f28, 376(r1), 0, qr0
/* 801C2D48 001BFC88  CB 81 01 70 */	lfd f28, 0x170(r1)
/* 801C2D4C 001BFC8C  E3 61 01 68 */	psq_l f27, 360(r1), 0, qr0
/* 801C2D50 001BFC90  CB 61 01 60 */	lfd f27, 0x160(r1)
/* 801C2D54 001BFC94  E3 41 01 58 */	psq_l f26, 344(r1), 0, qr0
/* 801C2D58 001BFC98  CB 41 01 50 */	lfd f26, 0x150(r1)
/* 801C2D5C 001BFC9C  E3 21 01 48 */	psq_l f25, 328(r1), 0, qr0
/* 801C2D60 001BFCA0  CB 21 01 40 */	lfd f25, 0x140(r1)
/* 801C2D64 001BFCA4  E3 01 01 38 */	psq_l f24, 312(r1), 0, qr0
/* 801C2D68 001BFCA8  CB 01 01 30 */	lfd f24, 0x130(r1)
/* 801C2D6C 001BFCAC  E2 E1 01 28 */	psq_l f23, 296(r1), 0, qr0
/* 801C2D70 001BFCB0  CA E1 01 20 */	lfd f23, 0x120(r1)
/* 801C2D74 001BFCB4  E2 C1 01 18 */	psq_l f22, 280(r1), 0, qr0
/* 801C2D78 001BFCB8  CA C1 01 10 */	lfd f22, 0x110(r1)
/* 801C2D7C 001BFCBC  E2 A1 01 08 */	psq_l f21, 264(r1), 0, qr0
/* 801C2D80 001BFCC0  CA A1 01 00 */	lfd f21, 0x100(r1)
/* 801C2D84 001BFCC4  E2 81 00 F8 */	psq_l f20, 248(r1), 0, qr0
/* 801C2D88 001BFCC8  CA 81 00 F0 */	lfd f20, 0xf0(r1)
/* 801C2D8C 001BFCCC  E2 61 00 E8 */	psq_l f19, 232(r1), 0, qr0
/* 801C2D90 001BFCD0  CA 61 00 E0 */	lfd f19, 0xe0(r1)
/* 801C2D94 001BFCD4  E2 41 00 D8 */	psq_l f18, 216(r1), 0, qr0
/* 801C2D98 001BFCD8  CA 41 00 D0 */	lfd f18, 0xd0(r1)
/* 801C2D9C 001BFCDC  E2 21 00 C8 */	psq_l f17, 200(r1), 0, qr0
/* 801C2DA0 001BFCE0  CA 21 00 C0 */	lfd f17, 0xc0(r1)
/* 801C2DA4 001BFCE4  E2 01 00 B8 */	psq_l f16, 184(r1), 0, qr0
/* 801C2DA8 001BFCE8  CA 01 00 B0 */	lfd f16, 0xb0(r1)
/* 801C2DAC 001BFCEC  BB 01 00 90 */	lmw r24, 0x90(r1)
/* 801C2DB0 001BFCF0  80 01 01 B4 */	lwz r0, 0x1b4(r1)
/* 801C2DB4 001BFCF4  7C 08 03 A6 */	mtlr r0
/* 801C2DB8 001BFCF8  38 21 01 B0 */	addi r1, r1, 0x1b0
/* 801C2DBC 001BFCFC  4E 80 00 20 */	blr 
.else
.global createVsPikmins__Q24Game13VsGameSectionFv
createVsPikmins__Q24Game13VsGameSectionFv:
/* 801C285C 001BF79C  94 21 FE 50 */	stwu r1, -0x1b0(r1)
/* 801C2860 001BF7A0  7C 08 02 A6 */	mflr r0
/* 801C2864 001BF7A4  90 01 01 B4 */	stw r0, 0x1b4(r1)
/* 801C2868 001BF7A8  DB E1 01 A0 */	stfd f31, 0x1a0(r1)
/* 801C286C 001BF7AC  F3 E1 01 A8 */	psq_st f31, 424(r1), 0, qr0
/* 801C2870 001BF7B0  DB C1 01 90 */	stfd f30, 0x190(r1)
/* 801C2874 001BF7B4  F3 C1 01 98 */	psq_st f30, 408(r1), 0, qr0
/* 801C2878 001BF7B8  DB A1 01 80 */	stfd f29, 0x180(r1)
/* 801C287C 001BF7BC  F3 A1 01 88 */	psq_st f29, 392(r1), 0, qr0
/* 801C2880 001BF7C0  DB 81 01 70 */	stfd f28, 0x170(r1)
/* 801C2884 001BF7C4  F3 81 01 78 */	psq_st f28, 376(r1), 0, qr0
/* 801C2888 001BF7C8  DB 61 01 60 */	stfd f27, 0x160(r1)
/* 801C288C 001BF7CC  F3 61 01 68 */	psq_st f27, 360(r1), 0, qr0
/* 801C2890 001BF7D0  DB 41 01 50 */	stfd f26, 0x150(r1)
/* 801C2894 001BF7D4  F3 41 01 58 */	psq_st f26, 344(r1), 0, qr0
/* 801C2898 001BF7D8  DB 21 01 40 */	stfd f25, 0x140(r1)
/* 801C289C 001BF7DC  F3 21 01 48 */	psq_st f25, 328(r1), 0, qr0
/* 801C28A0 001BF7E0  DB 01 01 30 */	stfd f24, 0x130(r1)
/* 801C28A4 001BF7E4  F3 01 01 38 */	psq_st f24, 312(r1), 0, qr0
/* 801C28A8 001BF7E8  DA E1 01 20 */	stfd f23, 0x120(r1)
/* 801C28AC 001BF7EC  F2 E1 01 28 */	psq_st f23, 296(r1), 0, qr0
/* 801C28B0 001BF7F0  DA C1 01 10 */	stfd f22, 0x110(r1)
/* 801C28B4 001BF7F4  F2 C1 01 18 */	psq_st f22, 280(r1), 0, qr0
/* 801C28B8 001BF7F8  DA A1 01 00 */	stfd f21, 0x100(r1)
/* 801C28BC 001BF7FC  F2 A1 01 08 */	psq_st f21, 264(r1), 0, qr0
/* 801C28C0 001BF800  DA 81 00 F0 */	stfd f20, 0xf0(r1)
/* 801C28C4 001BF804  F2 81 00 F8 */	psq_st f20, 248(r1), 0, qr0
/* 801C28C8 001BF808  DA 61 00 E0 */	stfd f19, 0xe0(r1)
/* 801C28CC 001BF80C  F2 61 00 E8 */	psq_st f19, 232(r1), 0, qr0
/* 801C28D0 001BF810  DA 41 00 D0 */	stfd f18, 0xd0(r1)
/* 801C28D4 001BF814  F2 41 00 D8 */	psq_st f18, 216(r1), 0, qr0
/* 801C28D8 001BF818  DA 21 00 C0 */	stfd f17, 0xc0(r1)
/* 801C28DC 001BF81C  F2 21 00 C8 */	psq_st f17, 200(r1), 0, qr0
/* 801C28E0 001BF820  DA 01 00 B0 */	stfd f16, 0xb0(r1)
/* 801C28E4 001BF824  F2 01 00 B8 */	psq_st f16, 184(r1), 0, qr0
/* 801C28E8 001BF828  BF 01 00 90 */	stmw r24, 0x90(r1)
/* 801C28EC 001BF82C  7C 79 1B 78 */	mr r25, r3
/* 801C28F0 001BF830  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C28F4 001BF834  38 80 00 01 */	li r4, 1
/* 801C28F8 001BF838  4B FB 91 A5 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C28FC 001BF83C  7C 7A 1B 79 */	or. r26, r3, r3
/* 801C2900 001BF840  40 82 00 20 */	bne lbl_801C2920
/* 801C2904 001BF844  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C2908 001BF848  3C A0 80 48 */	lis r5, lbl_8047FFC0@ha
/* 801C290C 001BF84C  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C2910 001BF850  38 80 05 45 */	li r4, 0x545
/* 801C2914 001BF854  38 A5 FF C0 */	addi r5, r5, lbl_8047FFC0@l
/* 801C2918 001BF858  4C C6 31 82 */	crclr 6
/* 801C291C 001BF85C  4B E6 7D 25 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C2920:
/* 801C2920 001BF860  7F 44 D3 78 */	mr r4, r26
/* 801C2924 001BF864  38 61 00 28 */	addi r3, r1, 0x28
/* 801C2928 001BF868  81 9A 00 00 */	lwz r12, 0(r26)
/* 801C292C 001BF86C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C2930 001BF870  7D 89 03 A6 */	mtctr r12
/* 801C2934 001BF874  4E 80 04 21 */	bctrl 
/* 801C2938 001BF878  C3 21 00 28 */	lfs f25, 0x28(r1)
/* 801C293C 001BF87C  38 80 00 00 */	li r4, 0
/* 801C2940 001BF880  C3 01 00 2C */	lfs f24, 0x2c(r1)
/* 801C2944 001BF884  C2 E1 00 30 */	lfs f23, 0x30(r1)
/* 801C2948 001BF888  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C294C 001BF88C  4B FB 91 51 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C2950 001BF890  7C 7A 1B 79 */	or. r26, r3, r3
/* 801C2954 001BF894  40 82 00 20 */	bne lbl_801C2974
/* 801C2958 001BF898  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C295C 001BF89C  3C A0 80 48 */	lis r5, lbl_8047FFC0@ha
/* 801C2960 001BF8A0  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C2964 001BF8A4  38 80 05 4A */	li r4, 0x54a
/* 801C2968 001BF8A8  38 A5 FF C0 */	addi r5, r5, lbl_8047FFC0@l
/* 801C296C 001BF8AC  4C C6 31 82 */	crclr 6
/* 801C2970 001BF8B0  4B E6 7C D1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C2974:
/* 801C2974 001BF8B4  7F 44 D3 78 */	mr r4, r26
/* 801C2978 001BF8B8  38 61 00 1C */	addi r3, r1, 0x1c
/* 801C297C 001BF8BC  81 9A 00 00 */	lwz r12, 0(r26)
/* 801C2980 001BF8C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C2984 001BF8C4  7D 89 03 A6 */	mtctr r12
/* 801C2988 001BF8C8  4E 80 04 21 */	bctrl 
/* 801C298C 001BF8CC  3B B9 02 14 */	addi r29, r25, 0x214
/* 801C2990 001BF8D0  C2 C1 00 1C */	lfs f22, 0x1c(r1)
/* 801C2994 001BF8D4  C2 A1 00 20 */	lfs f21, 0x20(r1)
/* 801C2998 001BF8D8  7F A3 EB 78 */	mr r3, r29
/* 801C299C 001BF8DC  C2 81 00 24 */	lfs f20, 0x24(r1)
/* 801C29A0 001BF8E0  48 02 E8 ED */	bl clear__Q24Game13PikiContainerFv
/* 801C29A4 001BF8E4  7F A3 EB 78 */	mr r3, r29
/* 801C29A8 001BF8E8  38 80 00 01 */	li r4, 1
/* 801C29AC 001BF8EC  38 A0 00 00 */	li r5, 0
/* 801C29B0 001BF8F0  48 02 EA 6D */	bl getCount__Q24Game13PikiContainerFii
/* 801C29B4 001BF8F4  80 19 03 44 */	lwz r0, 0x344(r25)
/* 801C29B8 001BF8F8  38 80 00 00 */	li r4, 0
/* 801C29BC 001BF8FC  38 A0 00 00 */	li r5, 0
/* 801C29C0 001BF900  1C 00 00 05 */	mulli r0, r0, 5
/* 801C29C4 001BF904  90 03 00 00 */	stw r0, 0(r3)
/* 801C29C8 001BF908  7F A3 EB 78 */	mr r3, r29
/* 801C29CC 001BF90C  48 02 EA 51 */	bl getCount__Q24Game13PikiContainerFii
/* 801C29D0 001BF910  80 19 03 48 */	lwz r0, 0x348(r25)
/* 801C29D4 001BF914  3B 80 00 00 */	li r28, 0
/* 801C29D8 001BF918  1C 00 00 05 */	mulli r0, r0, 5
/* 801C29DC 001BF91C  90 03 00 00 */	stw r0, 0(r3)
lbl_801C29E0:
/* 801C29E0 001BF920  2C 1C 00 01 */	cmpwi r28, 1
/* 801C29E4 001BF924  40 82 00 14 */	bne lbl_801C29F8
/* 801C29E8 001BF928  FE 60 C8 90 */	fmr f19, f25
/* 801C29EC 001BF92C  FE 40 C0 90 */	fmr f18, f24
/* 801C29F0 001BF930  FE 20 B8 90 */	fmr f17, f23
/* 801C29F4 001BF934  48 00 00 18 */	b lbl_801C2A0C
lbl_801C29F8:
/* 801C29F8 001BF938  2C 1C 00 00 */	cmpwi r28, 0
/* 801C29FC 001BF93C  40 82 01 D8 */	bne lbl_801C2BD4
/* 801C2A00 001BF940  FE 60 B0 90 */	fmr f19, f22
/* 801C2A04 001BF944  FE 40 A8 90 */	fmr f18, f21
/* 801C2A08 001BF948  FE 20 A0 90 */	fmr f17, f20
lbl_801C2A0C:
/* 801C2A0C 001BF94C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2A10 001BF950  CB 42 B1 68 */	lfd f26, lbl_805194C8@sda21(r2)
/* 801C2A14 001BF954  C3 62 B1 90 */	lfs f27, lbl_805194F0@sda21(r2)
/* 801C2A18 001BF958  3B E3 71 A0 */	addi r31, r3, sincosTable___5JMath@l
/* 801C2A1C 001BF95C  C3 82 B1 BC */	lfs f28, lbl_8051951C@sda21(r2)
/* 801C2A20 001BF960  3B 60 00 00 */	li r27, 0
/* 801C2A24 001BF964  C3 A2 B1 9C */	lfs f29, lbl_805194FC@sda21(r2)
/* 801C2A28 001BF968  3F C0 43 30 */	lis r30, 0x4330
/* 801C2A2C 001BF96C  C3 C2 B1 48 */	lfs f30, lbl_805194A8@sda21(r2)
/* 801C2A30 001BF970  C3 E2 B1 AC */	lfs f31, lbl_8051950C@sda21(r2)
lbl_801C2A34:
/* 801C2A34 001BF974  3B 40 00 00 */	li r26, 0
/* 801C2A38 001BF978  48 00 01 74 */	b lbl_801C2BAC
lbl_801C2A3C:
/* 801C2A3C 001BF97C  4B F0 6B 65 */	bl rand
/* 801C2A40 001BF980  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801C2A44 001BF984  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801C2A48 001BF988  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801C2A4C 001BF98C  C8 01 00 68 */	lfd f0, 0x68(r1)
/* 801C2A50 001BF990  EC 00 D0 28 */	fsubs f0, f0, f26
/* 801C2A54 001BF994  EC 00 D8 24 */	fdivs f0, f0, f27
/* 801C2A58 001BF998  EE 1C 00 32 */	fmuls f16, f28, f0
/* 801C2A5C 001BF99C  4B F0 6B 45 */	bl rand
/* 801C2A60 001BF9A0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 801C2A64 001BF9A4  93 C1 00 70 */	stw r30, 0x70(r1)
/* 801C2A68 001BF9A8  90 01 00 74 */	stw r0, 0x74(r1)
/* 801C2A6C 001BF9AC  C8 01 00 70 */	lfd f0, 0x70(r1)
/* 801C2A70 001BF9B0  EC 00 D0 28 */	fsubs f0, f0, f26
/* 801C2A74 001BF9B4  EC 00 D8 24 */	fdivs f0, f0, f27
/* 801C2A78 001BF9B8  EC 5D 00 32 */	fmuls f2, f29, f0
/* 801C2A7C 001BF9BC  FC 00 10 90 */	fmr f0, f2
/* 801C2A80 001BF9C0  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 801C2A84 001BF9C4  40 80 00 08 */	bge lbl_801C2A8C
/* 801C2A88 001BF9C8  FC 00 10 50 */	fneg f0, f2
lbl_801C2A8C:
/* 801C2A8C 001BF9CC  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801C2A90 001BF9D0  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 801C2A94 001BF9D4  FC 00 00 1E */	fctiwz f0, f0
/* 801C2A98 001BF9D8  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 801C2A9C 001BF9DC  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 801C2AA0 001BF9E0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C2AA4 001BF9E4  7C 7F 02 14 */	add r3, r31, r0
/* 801C2AA8 001BF9E8  C0 03 00 04 */	lfs f0, 4(r3)
/* 801C2AAC 001BF9EC  EC 30 00 32 */	fmuls f1, f16, f0
/* 801C2AB0 001BF9F0  40 80 00 30 */	bge lbl_801C2AE0
/* 801C2AB4 001BF9F4  C0 02 B1 B0 */	lfs f0, lbl_80519510@sda21(r2)
/* 801C2AB8 001BF9F8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2ABC 001BF9FC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C2AC0 001BFA00  EC 02 00 32 */	fmuls f0, f2, f0
/* 801C2AC4 001BFA04  FC 00 00 1E */	fctiwz f0, f0
/* 801C2AC8 001BFA08  D8 01 00 80 */	stfd f0, 0x80(r1)
/* 801C2ACC 001BFA0C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801C2AD0 001BFA10  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C2AD4 001BFA14  7C 03 04 2E */	lfsx f0, r3, r0
/* 801C2AD8 001BFA18  FC 00 00 50 */	fneg f0, f0
/* 801C2ADC 001BFA1C  48 00 00 24 */	b lbl_801C2B00
lbl_801C2AE0:
/* 801C2AE0 001BFA20  EC 02 07 F2 */	fmuls f0, f2, f31
/* 801C2AE4 001BFA24  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C2AE8 001BFA28  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801C2AEC 001BFA2C  FC 00 00 1E */	fctiwz f0, f0
/* 801C2AF0 001BFA30  D8 01 00 88 */	stfd f0, 0x88(r1)
/* 801C2AF4 001BFA34  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 801C2AF8 001BFA38  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C2AFC 001BFA3C  7C 03 04 2E */	lfsx f0, r3, r0
lbl_801C2B00:
/* 801C2B00 001BFA40  EC 10 00 32 */	fmuls f0, f16, f0
/* 801C2B04 001BFA44  D3 C1 00 60 */	stfs f30, 0x60(r1)
/* 801C2B08 001BFA48  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801C2B0C 001BFA4C  D0 21 00 64 */	stfs f1, 0x64(r1)
/* 801C2B10 001BFA50  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801C2B14 001BFA54  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2B18 001BFA58  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801C2B1C 001BFA5C  7D 89 03 A6 */	mtctr r12
/* 801C2B20 001BFA60  4E 80 04 21 */	bctrl 
/* 801C2B24 001BFA64  C0 41 00 5C */	lfs f2, 0x5c(r1)
/* 801C2B28 001BFA68  7C 78 1B 79 */	or. r24, r3, r3
/* 801C2B2C 001BFA6C  C0 21 00 60 */	lfs f1, 0x60(r1)
/* 801C2B30 001BFA70  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 801C2B34 001BFA74  EC 42 98 2A */	fadds f2, f2, f19
/* 801C2B38 001BFA78  EC 21 90 2A */	fadds f1, f1, f18
/* 801C2B3C 001BFA7C  EC 00 88 2A */	fadds f0, f0, f17
/* 801C2B40 001BFA80  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 801C2B44 001BFA84  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 801C2B48 001BFA88  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 801C2B4C 001BFA8C  41 82 00 5C */	beq lbl_801C2BA8
/* 801C2B50 001BFA90  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 801C2B54 001BFA94  3C 80 80 4B */	lis r4, __vt__Q24Game11PikiInitArg@ha
/* 801C2B58 001BFA98  38 05 A2 F4 */	addi r0, r5, __vt__Q24Game15CreatureInitArg@l
/* 801C2B5C 001BFA9C  38 A0 FF FF */	li r5, -1
/* 801C2B60 001BFAA0  90 01 00 50 */	stw r0, 0x50(r1)
/* 801C2B64 001BFAA4  38 C4 10 F4 */	addi r6, r4, __vt__Q24Game11PikiInitArg@l
/* 801C2B68 001BFAA8  38 00 00 00 */	li r0, 0
/* 801C2B6C 001BFAAC  38 81 00 50 */	addi r4, r1, 0x50
/* 801C2B70 001BFAB0  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801C2B74 001BFAB4  90 A1 00 54 */	stw r5, 0x54(r1)
/* 801C2B78 001BFAB8  90 01 00 58 */	stw r0, 0x58(r1)
/* 801C2B7C 001BFABC  4B F7 84 4D */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801C2B80 001BFAC0  7F 03 C3 78 */	mr r3, r24
/* 801C2B84 001BFAC4  38 81 00 5C */	addi r4, r1, 0x5c
/* 801C2B88 001BFAC8  38 A0 00 00 */	li r5, 0
/* 801C2B8C 001BFACC  4B F7 86 1D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C2B90 001BFAD0  7F 03 C3 78 */	mr r3, r24
/* 801C2B94 001BFAD4  7F 84 E3 78 */	mr r4, r28
/* 801C2B98 001BFAD8  4B F8 7A 29 */	bl changeShape__Q24Game4PikiFi
/* 801C2B9C 001BFADC  7F 03 C3 78 */	mr r3, r24
/* 801C2BA0 001BFAE0  7F 64 DB 78 */	mr r4, r27
/* 801C2BA4 001BFAE4  4B F8 7B CD */	bl changeHappa__Q24Game4PikiFi
lbl_801C2BA8:
/* 801C2BA8 001BFAE8  3B 5A 00 01 */	addi r26, r26, 1
lbl_801C2BAC:
/* 801C2BAC 001BFAEC  7F A3 EB 78 */	mr r3, r29
/* 801C2BB0 001BFAF0  7F 84 E3 78 */	mr r4, r28
/* 801C2BB4 001BFAF4  7F 65 DB 78 */	mr r5, r27
/* 801C2BB8 001BFAF8  48 02 E8 65 */	bl getCount__Q24Game13PikiContainerFii
/* 801C2BBC 001BFAFC  80 03 00 00 */	lwz r0, 0(r3)
/* 801C2BC0 001BFB00  7C 1A 00 00 */	cmpw r26, r0
/* 801C2BC4 001BFB04  41 80 FE 78 */	blt lbl_801C2A3C
/* 801C2BC8 001BFB08  3B 7B 00 01 */	addi r27, r27, 1
/* 801C2BCC 001BFB0C  2C 1B 00 03 */	cmpwi r27, 3
/* 801C2BD0 001BFB10  41 80 FE 64 */	blt lbl_801C2A34
lbl_801C2BD4:
/* 801C2BD4 001BFB14  3B 9C 00 01 */	addi r28, r28, 1
/* 801C2BD8 001BFB18  2C 1C 00 07 */	cmpwi r28, 7
/* 801C2BDC 001BFB1C  41 80 FE 04 */	blt lbl_801C29E0
/* 801C2BE0 001BFB20  80 62 2B 08 */	lwz r3, lbl_80520E68@sda21(r2)
/* 801C2BE4 001BFB24  3B 41 00 08 */	addi r26, r1, 8
/* 801C2BE8 001BFB28  80 02 2B 0C */	lwz r0, lbl_80520E6C@sda21(r2)
/* 801C2BEC 001BFB2C  3B 00 00 00 */	li r24, 0
/* 801C2BF0 001BFB30  90 61 00 08 */	stw r3, 8(r1)
/* 801C2BF4 001BFB34  80 6D 84 80 */	lwz r3, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 801C2BF8 001BFB38  90 01 00 0C */	stw r0, 0xc(r1)
/* 801C2BFC 001BFB3C  80 0D 84 7C */	lwz r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 801C2C00 001BFB40  90 61 00 08 */	stw r3, 8(r1)
/* 801C2C04 001BFB44  90 01 00 0C */	stw r0, 0xc(r1)
lbl_801C2C08:
/* 801C2C08 001BFB48  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C2C0C 001BFB4C  20 98 00 01 */	subfic r4, r24, 1
/* 801C2C10 001BFB50  4B FB 8E 8D */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C2C14 001BFB54  7C 60 1B 78 */	mr r0, r3
/* 801C2C18 001BFB58  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2C1C 001BFB5C  7C 1B 03 78 */	mr r27, r0
/* 801C2C20 001BFB60  4B FA 9D 49 */	bl __ct__Q24Game14PelletIteratorFv
/* 801C2C24 001BFB64  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2C28 001BFB68  4B FA 9D 59 */	bl first__Q24Game14PelletIteratorFv
/* 801C2C2C 001BFB6C  48 00 00 80 */	b lbl_801C2CAC
lbl_801C2C30:
/* 801C2C30 001BFB70  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2C34 001BFB74  4B FA 9D 99 */	bl __ml__Q24Game14PelletIteratorFv
/* 801C2C38 001BFB78  7C 60 1B 78 */	mr r0, r3
/* 801C2C3C 001BFB7C  80 7A 00 00 */	lwz r3, 0(r26)
/* 801C2C40 001BFB80  7C 1C 03 78 */	mr r28, r0
/* 801C2C44 001BFB84  80 9C 03 5C */	lwz r4, 0x35c(r28)
/* 801C2C48 001BFB88  80 84 00 40 */	lwz r4, 0x40(r4)
/* 801C2C4C 001BFB8C  4B F0 7A 75 */	bl strcmp
/* 801C2C50 001BFB90  2C 03 00 00 */	cmpwi r3, 0
/* 801C2C54 001BFB94  40 82 00 50 */	bne lbl_801C2CA4
/* 801C2C58 001BFB98  7F 64 DB 78 */	mr r4, r27
/* 801C2C5C 001BFB9C  38 61 00 10 */	addi r3, r1, 0x10
/* 801C2C60 001BFBA0  4B FB 53 A5 */	bl getFlagSetPos__Q24Game5OnyonFv
/* 801C2C64 001BFBA4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801C2C68 001BFBA8  7F 83 E3 78 */	mr r3, r28
/* 801C2C6C 001BFBAC  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 801C2C70 001BFBB0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801C2C74 001BFBB4  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 801C2C78 001BFBB8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801C2C7C 001BFBBC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 801C2C80 001BFBC0  4B FA 3D 55 */	bl getCylinderHeight__Q24Game6PelletFv
/* 801C2C84 001BFBC4  C0 42 B1 4C */	lfs f2, lbl_805194AC@sda21(r2)
/* 801C2C88 001BFBC8  7F 83 E3 78 */	mr r3, r28
/* 801C2C8C 001BFBCC  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801C2C90 001BFBD0  38 81 00 34 */	addi r4, r1, 0x34
/* 801C2C94 001BFBD4  38 A0 00 00 */	li r5, 0
/* 801C2C98 001BFBD8  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 801C2C9C 001BFBDC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801C2CA0 001BFBE0  4B F7 85 09 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
lbl_801C2CA4:
/* 801C2CA4 001BFBE4  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2CA8 001BFBE8  4B FA 9D 8D */	bl next__Q24Game14PelletIteratorFv
lbl_801C2CAC:
/* 801C2CAC 001BFBEC  38 61 00 40 */	addi r3, r1, 0x40
/* 801C2CB0 001BFBF0  4B FA 9E 45 */	bl isDone__Q24Game14PelletIteratorFv
/* 801C2CB4 001BFBF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C2CB8 001BFBF8  41 82 FF 78 */	beq lbl_801C2C30
/* 801C2CBC 001BFBFC  3B 18 00 01 */	addi r24, r24, 1
/* 801C2CC0 001BFC00  3B 5A 00 04 */	addi r26, r26, 4
/* 801C2CC4 001BFC04  2C 18 00 02 */	cmpwi r24, 2
/* 801C2CC8 001BFC08  41 80 FF 40 */	blt lbl_801C2C08
/* 801C2CCC 001BFC0C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C2CD0 001BFC10  38 80 00 00 */	li r4, 0
/* 801C2CD4 001BFC14  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2CD8 001BFC18  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C2CDC 001BFC1C  7D 89 03 A6 */	mtctr r12
/* 801C2CE0 001BFC20  4E 80 04 21 */	bctrl 
/* 801C2CE4 001BFC24  80 B9 03 3C */	lwz r5, 0x33c(r25)
/* 801C2CE8 001BFC28  38 80 00 01 */	li r4, 1
/* 801C2CEC 001BFC2C  80 05 00 68 */	lwz r0, 0x68(r5)
/* 801C2CF0 001BFC30  90 03 02 5C */	stw r0, 0x25c(r3)
/* 801C2CF4 001BFC34  80 B9 03 3C */	lwz r5, 0x33c(r25)
/* 801C2CF8 001BFC38  80 05 00 64 */	lwz r0, 0x64(r5)
/* 801C2CFC 001BFC3C  90 03 02 60 */	stw r0, 0x260(r3)
/* 801C2D00 001BFC40  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 801C2D04 001BFC44  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2D08 001BFC48  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801C2D0C 001BFC4C  7D 89 03 A6 */	mtctr r12
/* 801C2D10 001BFC50  4E 80 04 21 */	bctrl 
/* 801C2D14 001BFC54  80 99 03 3C */	lwz r4, 0x33c(r25)
/* 801C2D18 001BFC58  80 04 00 68 */	lwz r0, 0x68(r4)
/* 801C2D1C 001BFC5C  90 03 02 5C */	stw r0, 0x25c(r3)
/* 801C2D20 001BFC60  80 99 03 3C */	lwz r4, 0x33c(r25)
/* 801C2D24 001BFC64  80 04 00 64 */	lwz r0, 0x64(r4)
/* 801C2D28 001BFC68  90 03 02 60 */	stw r0, 0x260(r3)
/* 801C2D2C 001BFC6C  E3 E1 01 A8 */	psq_l f31, 424(r1), 0, qr0
/* 801C2D30 001BFC70  CB E1 01 A0 */	lfd f31, 0x1a0(r1)
/* 801C2D34 001BFC74  E3 C1 01 98 */	psq_l f30, 408(r1), 0, qr0
/* 801C2D38 001BFC78  CB C1 01 90 */	lfd f30, 0x190(r1)
/* 801C2D3C 001BFC7C  E3 A1 01 88 */	psq_l f29, 392(r1), 0, qr0
/* 801C2D40 001BFC80  CB A1 01 80 */	lfd f29, 0x180(r1)
/* 801C2D44 001BFC84  E3 81 01 78 */	psq_l f28, 376(r1), 0, qr0
/* 801C2D48 001BFC88  CB 81 01 70 */	lfd f28, 0x170(r1)
/* 801C2D4C 001BFC8C  E3 61 01 68 */	psq_l f27, 360(r1), 0, qr0
/* 801C2D50 001BFC90  CB 61 01 60 */	lfd f27, 0x160(r1)
/* 801C2D54 001BFC94  E3 41 01 58 */	psq_l f26, 344(r1), 0, qr0
/* 801C2D58 001BFC98  CB 41 01 50 */	lfd f26, 0x150(r1)
/* 801C2D5C 001BFC9C  E3 21 01 48 */	psq_l f25, 328(r1), 0, qr0
/* 801C2D60 001BFCA0  CB 21 01 40 */	lfd f25, 0x140(r1)
/* 801C2D64 001BFCA4  E3 01 01 38 */	psq_l f24, 312(r1), 0, qr0
/* 801C2D68 001BFCA8  CB 01 01 30 */	lfd f24, 0x130(r1)
/* 801C2D6C 001BFCAC  E2 E1 01 28 */	psq_l f23, 296(r1), 0, qr0
/* 801C2D70 001BFCB0  CA E1 01 20 */	lfd f23, 0x120(r1)
/* 801C2D74 001BFCB4  E2 C1 01 18 */	psq_l f22, 280(r1), 0, qr0
/* 801C2D78 001BFCB8  CA C1 01 10 */	lfd f22, 0x110(r1)
/* 801C2D7C 001BFCBC  E2 A1 01 08 */	psq_l f21, 264(r1), 0, qr0
/* 801C2D80 001BFCC0  CA A1 01 00 */	lfd f21, 0x100(r1)
/* 801C2D84 001BFCC4  E2 81 00 F8 */	psq_l f20, 248(r1), 0, qr0
/* 801C2D88 001BFCC8  CA 81 00 F0 */	lfd f20, 0xf0(r1)
/* 801C2D8C 001BFCCC  E2 61 00 E8 */	psq_l f19, 232(r1), 0, qr0
/* 801C2D90 001BFCD0  CA 61 00 E0 */	lfd f19, 0xe0(r1)
/* 801C2D94 001BFCD4  E2 41 00 D8 */	psq_l f18, 216(r1), 0, qr0
/* 801C2D98 001BFCD8  CA 41 00 D0 */	lfd f18, 0xd0(r1)
/* 801C2D9C 001BFCDC  E2 21 00 C8 */	psq_l f17, 200(r1), 0, qr0
/* 801C2DA0 001BFCE0  CA 21 00 C0 */	lfd f17, 0xc0(r1)
/* 801C2DA4 001BFCE4  E2 01 00 B8 */	psq_l f16, 184(r1), 0, qr0
/* 801C2DA8 001BFCE8  CA 01 00 B0 */	lfd f16, 0xb0(r1)
/* 801C2DAC 001BFCEC  BB 01 00 90 */	lmw r24, 0x90(r1)
/* 801C2DB0 001BFCF0  80 01 01 B4 */	lwz r0, 0x1b4(r1)
/* 801C2DB4 001BFCF4  7C 08 03 A6 */	mtlr r0
/* 801C2DB8 001BFCF8  38 21 01 B0 */	addi r1, r1, 0x1b0
/* 801C2DBC 001BFCFC  4E 80 00 20 */	blr 
.endif

.if version == 1
.global addChallengeScore__Q24Game13VsGameSectionFi
addChallengeScore__Q24Game13VsGameSectionFi:
/* 801C2DC0 001BFD00  80 03 03 BC */	lwz r0, 0x3e0(r3)
/* 801C2DC4 001BFD04  7C 00 22 14 */	add r0, r0, r4
/* 801C2DC8 001BFD08  90 03 03 BC */	stw r0, 0x3e0(r3)
/* 801C2DCC 001BFD0C  4E 80 00 20 */	blr 
.else
.global addChallengeScore__Q24Game13VsGameSectionFi
addChallengeScore__Q24Game13VsGameSectionFi:
/* 801C2DC0 001BFD00  80 03 03 BC */	lwz r0, 0x3bc(r3)
/* 801C2DC4 001BFD04  7C 00 22 14 */	add r0, r0, r4
/* 801C2DC8 001BFD08  90 03 03 BC */	stw r0, 0x3bc(r3)
/* 801C2DCC 001BFD0C  4E 80 00 20 */	blr 
.endif

.global sendMessage__Q24Game13VsGameSectionFRQ24Game11GameMessage
sendMessage__Q24Game13VsGameSectionFRQ24Game11GameMessage:
/* 801C2DD0 001BFD10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2DD4 001BFD14  7C 08 02 A6 */	mflr r0
/* 801C2DD8 001BFD18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2DDC 001BFD1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C2DE0 001BFD20  7C 9F 23 78 */	mr r31, r4
/* 801C2DE4 001BFD24  93 C1 00 08 */	stw r30, 8(r1)
/* 801C2DE8 001BFD28  7C 7E 1B 78 */	mr r30, r3
/* 801C2DEC 001BFD2C  7F E3 FB 78 */	mr r3, r31
/* 801C2DF0 001BFD30  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C2DF4 001BFD34  7F C4 F3 78 */	mr r4, r30
/* 801C2DF8 001BFD38  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C2DFC 001BFD3C  7D 89 03 A6 */	mtctr r12
/* 801C2E00 001BFD40  4E 80 04 21 */	bctrl 
/* 801C2E04 001BFD44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C2E08 001BFD48  41 82 00 1C */	beq lbl_801C2E24
/* 801C2E0C 001BFD4C  7F E3 FB 78 */	mr r3, r31
/* 801C2E10 001BFD50  7F C4 F3 78 */	mr r4, r30
/* 801C2E14 001BFD54  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C2E18 001BFD58  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C2E1C 001BFD5C  7D 89 03 A6 */	mtctr r12
/* 801C2E20 001BFD60  4E 80 04 21 */	bctrl 
lbl_801C2E24:
/* 801C2E24 001BFD64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2E28 001BFD68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C2E2C 001BFD6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C2E30 001BFD70  7C 08 03 A6 */	mtlr r0
/* 801C2E34 001BFD74  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2E38 001BFD78  4E 80 00 20 */	blr 

.global actVs__Q24Game22GameMessageVsGetDopingFPQ24Game13VsGameSection
actVs__Q24Game22GameMessageVsGetDopingFPQ24Game13VsGameSection:
/* 801C2E3C 001BFD7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2E40 001BFD80  7C 08 02 A6 */	mflr r0
/* 801C2E44 001BFD84  7C 65 1B 78 */	mr r5, r3
/* 801C2E48 001BFD88  7C 83 23 78 */	mr r3, r4
/* 801C2E4C 001BFD8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2E50 001BFD90  80 85 00 04 */	lwz r4, 4(r5)
/* 801C2E54 001BFD94  80 A5 00 08 */	lwz r5, 8(r5)
/* 801C2E58 001BFD98  48 00 1A 81 */	bl getGetDopeCount__Q24Game13VsGameSectionFii
/* 801C2E5C 001BFD9C  80 83 00 00 */	lwz r4, 0(r3)
/* 801C2E60 001BFDA0  38 04 00 01 */	addi r0, r4, 1
/* 801C2E64 001BFDA4  90 03 00 00 */	stw r0, 0(r3)
/* 801C2E68 001BFDA8  38 60 00 01 */	li r3, 1
/* 801C2E6C 001BFDAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2E70 001BFDB0  7C 08 03 A6 */	mtlr r0
/* 801C2E74 001BFDB4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2E78 001BFDB8  4E 80 00 20 */	blr 

.if version == 1
.global actVs__Q24Game27GameMessageVsBattleFinishedFPQ24Game13VsGameSection
actVs__Q24Game27GameMessageVsBattleFinishedFPQ24Game13VsGameSection:
/* 801C2E7C 001BFDBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2E80 001BFDC0  7C 08 02 A6 */	mflr r0
/* 801C2E84 001BFDC4  7C 65 1B 78 */	mr r5, r3
/* 801C2E88 001BFDC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2E8C 001BFDCC  80 04 01 80 */	lwz r0, 0x1a4(r4)
/* 801C2E90 001BFDD0  28 00 00 00 */	cmplwi r0, 0
/* 801C2E94 001BFDD4  41 82 00 20 */	beq lbl_801C2EB4
/* 801C2E98 001BFDD8  7C 03 03 78 */	mr r3, r0
/* 801C2E9C 001BFDDC  80 A5 00 04 */	lwz r5, 4(r5)
/* 801C2EA0 001BFDE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2EA4 001BFDE4  38 C0 00 00 */	li r6, 0
/* 801C2EA8 001BFDE8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801C2EAC 001BFDEC  7D 89 03 A6 */	mtctr r12
/* 801C2EB0 001BFDF0  4E 80 04 21 */	bctrl 
lbl_801C2EB4:
/* 801C2EB4 001BFDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2EB8 001BFDF8  38 60 00 01 */	li r3, 1
/* 801C2EBC 001BFDFC  7C 08 03 A6 */	mtlr r0
/* 801C2EC0 001BFE00  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2EC4 001BFE04  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game27GameMessageVsBattleFinishedFPQ24Game13VsGameSection
actVs__Q24Game27GameMessageVsBattleFinishedFPQ24Game13VsGameSection:
/* 801C2E7C 001BFDBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2E80 001BFDC0  7C 08 02 A6 */	mflr r0
/* 801C2E84 001BFDC4  7C 65 1B 78 */	mr r5, r3
/* 801C2E88 001BFDC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2E8C 001BFDCC  80 04 01 80 */	lwz r0, 0x180(r4)
/* 801C2E90 001BFDD0  28 00 00 00 */	cmplwi r0, 0
/* 801C2E94 001BFDD4  41 82 00 20 */	beq lbl_801C2EB4
/* 801C2E98 001BFDD8  7C 03 03 78 */	mr r3, r0
/* 801C2E9C 001BFDDC  80 A5 00 04 */	lwz r5, 4(r5)
/* 801C2EA0 001BFDE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2EA4 001BFDE4  38 C0 00 00 */	li r6, 0
/* 801C2EA8 001BFDE8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801C2EAC 001BFDEC  7D 89 03 A6 */	mtctr r12
/* 801C2EB0 001BFDF0  4E 80 04 21 */	bctrl 
lbl_801C2EB4:
/* 801C2EB4 001BFDF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2EB8 001BFDF8  38 60 00 01 */	li r3, 1
/* 801C2EBC 001BFDFC  7C 08 03 A6 */	mtlr r0
/* 801C2EC0 001BFE00  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2EC4 001BFE04  4E 80 00 20 */	blr 
.endif

.global onBattleFinished__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
onBattleFinished__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib:
/* 801C2EC8 001BFE08  4E 80 00 20 */	blr 

.if version == 1
.global actVs__Q24Game27GameMessageVsRedOrSuckStartFPQ24Game13VsGameSection
actVs__Q24Game27GameMessageVsRedOrSuckStartFPQ24Game13VsGameSection:
/* 801C2ECC 001BFE0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2ED0 001BFE10  7C 08 02 A6 */	mflr r0
/* 801C2ED4 001BFE14  7C 66 1B 78 */	mr r6, r3
/* 801C2ED8 001BFE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2EDC 001BFE1C  80 04 01 80 */	lwz r0, 0x1a4(r4)
/* 801C2EE0 001BFE20  28 00 00 00 */	cmplwi r0, 0
/* 801C2EE4 001BFE24  41 82 00 20 */	beq lbl_801C2F04
/* 801C2EE8 001BFE28  7C 03 03 78 */	mr r3, r0
/* 801C2EEC 001BFE2C  80 A6 00 04 */	lwz r5, 4(r6)
/* 801C2EF0 001BFE30  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2EF4 001BFE34  88 C6 00 08 */	lbz r6, 8(r6)
/* 801C2EF8 001BFE38  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801C2EFC 001BFE3C  7D 89 03 A6 */	mtctr r12
/* 801C2F00 001BFE40  4E 80 04 21 */	bctrl 
lbl_801C2F04:
/* 801C2F04 001BFE44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2F08 001BFE48  38 60 00 01 */	li r3, 1
/* 801C2F0C 001BFE4C  7C 08 03 A6 */	mtlr r0
/* 801C2F10 001BFE50  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2F14 001BFE54  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game27GameMessageVsRedOrSuckStartFPQ24Game13VsGameSection
actVs__Q24Game27GameMessageVsRedOrSuckStartFPQ24Game13VsGameSection:
/* 801C2ECC 001BFE0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2ED0 001BFE10  7C 08 02 A6 */	mflr r0
/* 801C2ED4 001BFE14  7C 66 1B 78 */	mr r6, r3
/* 801C2ED8 001BFE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2EDC 001BFE1C  80 04 01 80 */	lwz r0, 0x180(r4)
/* 801C2EE0 001BFE20  28 00 00 00 */	cmplwi r0, 0
/* 801C2EE4 001BFE24  41 82 00 20 */	beq lbl_801C2F04
/* 801C2EE8 001BFE28  7C 03 03 78 */	mr r3, r0
/* 801C2EEC 001BFE2C  80 A6 00 04 */	lwz r5, 4(r6)
/* 801C2EF0 001BFE30  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2EF4 001BFE34  88 C6 00 08 */	lbz r6, 8(r6)
/* 801C2EF8 001BFE38  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801C2EFC 001BFE3C  7D 89 03 A6 */	mtctr r12
/* 801C2F00 001BFE40  4E 80 04 21 */	bctrl 
lbl_801C2F04:
/* 801C2F04 001BFE44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2F08 001BFE48  38 60 00 01 */	li r3, 1
/* 801C2F0C 001BFE4C  7C 08 03 A6 */	mtlr r0
/* 801C2F10 001BFE50  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2F14 001BFE54  4E 80 00 20 */	blr 
.endif

.global onRedOrBlueSuckStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
onRedOrBlueSuckStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib:
/* 801C2F18 001BFE58  4E 80 00 20 */	blr 

.if version == 1
.global actVs__Q24Game23GameMessageVsGetOtakaraFPQ24Game13VsGameSection
actVs__Q24Game23GameMessageVsGetOtakaraFPQ24Game13VsGameSection:
/* 801C2F1C 001BFE5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2F20 001BFE60  7C 08 02 A6 */	mflr r0
/* 801C2F24 001BFE64  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2F28 001BFE68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C2F2C 001BFE6C  7C 9F 23 78 */	mr r31, r4
/* 801C2F30 001BFE70  93 C1 00 08 */	stw r30, 8(r1)
/* 801C2F34 001BFE74  7C 7E 1B 78 */	mr r30, r3
/* 801C2F38 001BFE78  80 04 01 80 */	lwz r0, 0x1a4(r4)
/* 801C2F3C 001BFE7C  28 00 00 00 */	cmplwi r0, 0
/* 801C2F40 001BFE80  41 82 00 78 */	beq lbl_801C2FB8
/* 801C2F44 001BFE84  80 1E 00 04 */	lwz r0, 4(r30)
/* 801C2F48 001BFE88  54 00 10 3A */	slwi r0, r0, 2
/* 801C2F4C 001BFE8C  7C 9F 02 14 */	add r4, r31, r0
/* 801C2F50 001BFE90  80 64 03 D4 */	lwz r3, 0x3f8(r4)
/* 801C2F54 001BFE94  38 03 00 01 */	addi r0, r3, 1
/* 801C2F58 001BFE98  90 04 03 D4 */	stw r0, 0x3f8(r4)
/* 801C2F5C 001BFE9C  80 7E 00 04 */	lwz r3, 4(r30)
/* 801C2F60 001BFEA0  54 60 10 3A */	slwi r0, r3, 2
/* 801C2F64 001BFEA4  7C 64 00 34 */	cntlzw r4, r3
/* 801C2F68 001BFEA8  7C 7F 02 14 */	add r3, r31, r0
/* 801C2F6C 001BFEAC  80 03 03 D4 */	lwz r0, 0x3f8(r3)
/* 801C2F70 001BFEB0  54 83 D9 7E */	srwi r3, r4, 5
/* 801C2F74 001BFEB4  20 00 00 03 */	subfic r0, r0, 3
/* 801C2F78 001BFEB8  7C 00 00 34 */	cntlzw r0, r0
/* 801C2F7C 001BFEBC  54 04 D9 7E */	srwi r4, r0, 5
/* 801C2F80 001BFEC0  48 2A 02 CD */	bl PSSetLastBeedamaDirection__Fbb
/* 801C2F84 001BFEC4  80 BE 00 04 */	lwz r5, 4(r30)
/* 801C2F88 001BFEC8  54 A0 10 3A */	slwi r0, r5, 2
/* 801C2F8C 001BFECC  7C 7F 02 14 */	add r3, r31, r0
/* 801C2F90 001BFED0  80 03 03 D4 */	lwz r0, 0x3f8(r3)
/* 801C2F94 001BFED4  2C 00 00 04 */	cmpwi r0, 4
/* 801C2F98 001BFED8  41 80 00 20 */	blt lbl_801C2FB8
/* 801C2F9C 001BFEDC  80 7F 01 80 */	lwz r3, 0x1a4(r31)
/* 801C2FA0 001BFEE0  7F E4 FB 78 */	mr r4, r31
/* 801C2FA4 001BFEE4  38 C0 00 01 */	li r6, 1
/* 801C2FA8 001BFEE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2FAC 001BFEEC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801C2FB0 001BFEF0  7D 89 03 A6 */	mtctr r12
/* 801C2FB4 001BFEF4  4E 80 04 21 */	bctrl 
lbl_801C2FB8:
/* 801C2FB8 001BFEF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2FBC 001BFEFC  38 60 00 01 */	li r3, 1
/* 801C2FC0 001BFF00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C2FC4 001BFF04  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C2FC8 001BFF08  7C 08 03 A6 */	mtlr r0
/* 801C2FCC 001BFF0C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2FD0 001BFF10  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game23GameMessageVsGetOtakaraFPQ24Game13VsGameSection
actVs__Q24Game23GameMessageVsGetOtakaraFPQ24Game13VsGameSection:
/* 801C2F1C 001BFE5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2F20 001BFE60  7C 08 02 A6 */	mflr r0
/* 801C2F24 001BFE64  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2F28 001BFE68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C2F2C 001BFE6C  7C 9F 23 78 */	mr r31, r4
/* 801C2F30 001BFE70  93 C1 00 08 */	stw r30, 8(r1)
/* 801C2F34 001BFE74  7C 7E 1B 78 */	mr r30, r3
/* 801C2F38 001BFE78  80 04 01 80 */	lwz r0, 0x180(r4)
/* 801C2F3C 001BFE7C  28 00 00 00 */	cmplwi r0, 0
/* 801C2F40 001BFE80  41 82 00 78 */	beq lbl_801C2FB8
/* 801C2F44 001BFE84  80 1E 00 04 */	lwz r0, 4(r30)
/* 801C2F48 001BFE88  54 00 10 3A */	slwi r0, r0, 2
/* 801C2F4C 001BFE8C  7C 9F 02 14 */	add r4, r31, r0
/* 801C2F50 001BFE90  80 64 03 D4 */	lwz r3, 0x3d4(r4)
/* 801C2F54 001BFE94  38 03 00 01 */	addi r0, r3, 1
/* 801C2F58 001BFE98  90 04 03 D4 */	stw r0, 0x3d4(r4)
/* 801C2F5C 001BFE9C  80 7E 00 04 */	lwz r3, 4(r30)
/* 801C2F60 001BFEA0  54 60 10 3A */	slwi r0, r3, 2
/* 801C2F64 001BFEA4  7C 64 00 34 */	cntlzw r4, r3
/* 801C2F68 001BFEA8  7C 7F 02 14 */	add r3, r31, r0
/* 801C2F6C 001BFEAC  80 03 03 D4 */	lwz r0, 0x3d4(r3)
/* 801C2F70 001BFEB0  54 83 D9 7E */	srwi r3, r4, 5
/* 801C2F74 001BFEB4  20 00 00 03 */	subfic r0, r0, 3
/* 801C2F78 001BFEB8  7C 00 00 34 */	cntlzw r0, r0
/* 801C2F7C 001BFEBC  54 04 D9 7E */	srwi r4, r0, 5
/* 801C2F80 001BFEC0  48 2A 02 CD */	bl PSSetLastBeedamaDirection__Fbb
/* 801C2F84 001BFEC4  80 BE 00 04 */	lwz r5, 4(r30)
/* 801C2F88 001BFEC8  54 A0 10 3A */	slwi r0, r5, 2
/* 801C2F8C 001BFECC  7C 7F 02 14 */	add r3, r31, r0
/* 801C2F90 001BFED0  80 03 03 D4 */	lwz r0, 0x3d4(r3)
/* 801C2F94 001BFED4  2C 00 00 04 */	cmpwi r0, 4
/* 801C2F98 001BFED8  41 80 00 20 */	blt lbl_801C2FB8
/* 801C2F9C 001BFEDC  80 7F 01 80 */	lwz r3, 0x180(r31)
/* 801C2FA0 001BFEE0  7F E4 FB 78 */	mr r4, r31
/* 801C2FA4 001BFEE4  38 C0 00 01 */	li r6, 1
/* 801C2FA8 001BFEE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C2FAC 001BFEEC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801C2FB0 001BFEF0  7D 89 03 A6 */	mtctr r12
/* 801C2FB4 001BFEF4  4E 80 04 21 */	bctrl 
lbl_801C2FB8:
/* 801C2FB8 001BFEF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2FBC 001BFEFC  38 60 00 01 */	li r3, 1
/* 801C2FC0 001BFF00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C2FC4 001BFF04  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C2FC8 001BFF08  7C 08 03 A6 */	mtlr r0
/* 801C2FCC 001BFF0C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C2FD0 001BFF10  4E 80 00 20 */	blr 
.endif

.if version == 1
.global actVs__Q24Game21GameMessageVsAddEnemyFPQ24Game13VsGameSection
actVs__Q24Game21GameMessageVsAddEnemyFPQ24Game13VsGameSection:
/* 801C2FD4 001BFF14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2FD8 001BFF18  7C 08 02 A6 */	mflr r0
/* 801C2FDC 001BFF1C  7C 65 1B 78 */	mr r5, r3
/* 801C2FE0 001BFF20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2FE4 001BFF24  80 64 03 2C */	lwz r3, 0x350(r4)
/* 801C2FE8 001BFF28  80 85 00 04 */	lwz r4, 4(r5)
/* 801C2FEC 001BFF2C  80 A5 00 08 */	lwz r5, 8(r5)
/* 801C2FF0 001BFF30  48 07 23 A5 */	bl entry__Q34Game6VsGame7TekiMgrFQ34Game11EnemyTypeID12EEnemyTypeIDi
/* 801C2FF4 001BFF34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2FF8 001BFF38  38 60 00 01 */	li r3, 1
/* 801C2FFC 001BFF3C  7C 08 03 A6 */	mtlr r0
/* 801C3000 001BFF40  38 21 00 10 */	addi r1, r1, 0x10
/* 801C3004 001BFF44  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game21GameMessageVsAddEnemyFPQ24Game13VsGameSection
actVs__Q24Game21GameMessageVsAddEnemyFPQ24Game13VsGameSection:
/* 801C2FD4 001BFF14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C2FD8 001BFF18  7C 08 02 A6 */	mflr r0
/* 801C2FDC 001BFF1C  7C 65 1B 78 */	mr r5, r3
/* 801C2FE0 001BFF20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C2FE4 001BFF24  80 64 03 2C */	lwz r3, 0x32c(r4)
/* 801C2FE8 001BFF28  80 85 00 04 */	lwz r4, 4(r5)
/* 801C2FEC 001BFF2C  80 A5 00 08 */	lwz r5, 8(r5)
/* 801C2FF0 001BFF30  48 07 23 A5 */	bl entry__Q34Game6VsGame7TekiMgrFQ34Game11EnemyTypeID12EEnemyTypeIDi
/* 801C2FF4 001BFF34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C2FF8 001BFF38  38 60 00 01 */	li r3, 1
/* 801C2FFC 001BFF3C  7C 08 03 A6 */	mtlr r0
/* 801C3000 001BFF40  38 21 00 10 */	addi r1, r1, 0x10
/* 801C3004 001BFF44  4E 80 00 20 */	blr 
.endif

.if version == 1
.global actVs__Q24Game21GameMessagePelletBornFPQ24Game13VsGameSection
actVs__Q24Game21GameMessagePelletBornFPQ24Game13VsGameSection:
/* 801C3008 001BFF48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C300C 001BFF4C  7C 08 02 A6 */	mflr r0
/* 801C3010 001BFF50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3014 001BFF54  80 A3 00 04 */	lwz r5, 4(r3)
/* 801C3018 001BFF58  88 05 03 2C */	lbz r0, 0x32c(r5)
/* 801C301C 001BFF5C  28 00 00 06 */	cmplwi r0, 6
/* 801C3020 001BFF60  40 82 00 EC */	bne lbl_801C310C
/* 801C3024 001BFF64  80 04 03 88 */	lwz r0, 0x3ac(r4)
/* 801C3028 001BFF68  7C 00 28 40 */	cmplw r0, r5
/* 801C302C 001BFF6C  40 82 00 0C */	bne lbl_801C3038
/* 801C3030 001BFF70  38 60 00 00 */	li r3, 0
/* 801C3034 001BFF74  48 00 00 DC */	b lbl_801C3110
lbl_801C3038:
/* 801C3038 001BFF78  80 04 03 8C */	lwz r0, 0x3b0(r4)
/* 801C303C 001BFF7C  7C 00 28 40 */	cmplw r0, r5
/* 801C3040 001BFF80  40 82 00 0C */	bne lbl_801C304C
/* 801C3044 001BFF84  38 60 00 00 */	li r3, 0
/* 801C3048 001BFF88  48 00 00 C8 */	b lbl_801C3110
lbl_801C304C:
/* 801C304C 001BFF8C  38 64 00 08 */	addi r3, r4, 8
/* 801C3050 001BFF90  80 04 03 90 */	lwz r0, 0x3b4(r4)
/* 801C3054 001BFF94  7C 00 28 40 */	cmplw r0, r5
/* 801C3058 001BFF98  40 82 00 0C */	bne lbl_801C3064
/* 801C305C 001BFF9C  38 60 00 00 */	li r3, 0
/* 801C3060 001BFFA0  48 00 00 B0 */	b lbl_801C3110
lbl_801C3064:
/* 801C3064 001BFFA4  80 03 03 8C */	lwz r0, 0x3b0(r3)
/* 801C3068 001BFFA8  7C 00 28 40 */	cmplw r0, r5
/* 801C306C 001BFFAC  40 82 00 0C */	bne lbl_801C3078
/* 801C3070 001BFFB0  38 60 00 00 */	li r3, 0
/* 801C3074 001BFFB4  48 00 00 9C */	b lbl_801C3110
lbl_801C3078:
/* 801C3078 001BFFB8  80 03 03 90 */	lwz r0, 0x3b4(r3)
/* 801C307C 001BFFBC  7C 00 28 40 */	cmplw r0, r5
/* 801C3080 001BFFC0  40 82 00 0C */	bne lbl_801C308C
/* 801C3084 001BFFC4  38 60 00 00 */	li r3, 0
/* 801C3088 001BFFC8  48 00 00 88 */	b lbl_801C3110
lbl_801C308C:
/* 801C308C 001BFFCC  80 03 03 94 */	lwz r0, 0x3b8(r3)
/* 801C3090 001BFFD0  7C 00 28 40 */	cmplw r0, r5
/* 801C3094 001BFFD4  40 82 00 0C */	bne lbl_801C30A0
/* 801C3098 001BFFD8  38 60 00 00 */	li r3, 0
/* 801C309C 001BFFDC  48 00 00 74 */	b lbl_801C3110
lbl_801C30A0:
/* 801C30A0 001BFFE0  80 03 03 98 */	lwz r0, 0x3bc(r3)
/* 801C30A4 001BFFE4  7C 00 28 40 */	cmplw r0, r5
/* 801C30A8 001BFFE8  40 82 00 0C */	bne lbl_801C30B4
/* 801C30AC 001BFFEC  38 60 00 00 */	li r3, 0
/* 801C30B0 001BFFF0  48 00 00 60 */	b lbl_801C3110
lbl_801C30B4:
/* 801C30B4 001BFFF4  38 00 00 07 */	li r0, 7
/* 801C30B8 001BFFF8  7C 83 23 78 */	mr r3, r4
/* 801C30BC 001BFFFC  38 C0 00 00 */	li r6, 0
/* 801C30C0 001C0000  7C 09 03 A6 */	mtctr r0
lbl_801C30C4:
/* 801C30C4 001C0004  80 03 03 88 */	lwz r0, 0x3ac(r3)
/* 801C30C8 001C0008  28 00 00 00 */	cmplwi r0, 0
/* 801C30CC 001C000C  40 82 00 18 */	bne lbl_801C30E4
/* 801C30D0 001C0010  54 C0 10 3A */	slwi r0, r6, 2
/* 801C30D4 001C0014  38 60 00 01 */	li r3, 1
/* 801C30D8 001C0018  7C 84 02 14 */	add r4, r4, r0
/* 801C30DC 001C001C  90 A4 03 88 */	stw r5, 0x3ac(r4)
/* 801C30E0 001C0020  48 00 00 30 */	b lbl_801C3110
lbl_801C30E4:
/* 801C30E4 001C0024  38 63 00 04 */	addi r3, r3, 4
/* 801C30E8 001C0028  38 C6 00 01 */	addi r6, r6, 1
/* 801C30EC 001C002C  42 00 FF D8 */	bdnz lbl_801C30C4
/* 801C30F0 001C0030  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C30F4 001C0034  3C A0 80 48 */	lis r5, lbl_804800D0@ha
/* 801C30F8 001C0038  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C30FC 001C003C  38 80 06 38 */	li r4, 0x638
/* 801C3100 001C0040  38 A5 00 D0 */	addi r5, r5, lbl_804800D0@l
/* 801C3104 001C0044  4C C6 31 82 */	crclr 6
/* 801C3108 001C0048  4B E6 75 39 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C310C:
/* 801C310C 001C004C  38 60 00 00 */	li r3, 0
lbl_801C3110:
/* 801C3110 001C0050  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C3114 001C0054  7C 08 03 A6 */	mtlr r0
/* 801C3118 001C0058  38 21 00 10 */	addi r1, r1, 0x10
/* 801C311C 001C005C  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game21GameMessagePelletBornFPQ24Game13VsGameSection
actVs__Q24Game21GameMessagePelletBornFPQ24Game13VsGameSection:
/* 801C3008 001BFF48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C300C 001BFF4C  7C 08 02 A6 */	mflr r0
/* 801C3010 001BFF50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3014 001BFF54  80 A3 00 04 */	lwz r5, 4(r3)
/* 801C3018 001BFF58  88 05 03 2C */	lbz r0, 0x32c(r5)
/* 801C301C 001BFF5C  28 00 00 06 */	cmplwi r0, 6
/* 801C3020 001BFF60  40 82 00 EC */	bne lbl_801C310C
/* 801C3024 001BFF64  80 04 03 88 */	lwz r0, 0x388(r4)
/* 801C3028 001BFF68  7C 00 28 40 */	cmplw r0, r5
/* 801C302C 001BFF6C  40 82 00 0C */	bne lbl_801C3038
/* 801C3030 001BFF70  38 60 00 00 */	li r3, 0
/* 801C3034 001BFF74  48 00 00 DC */	b lbl_801C3110
lbl_801C3038:
/* 801C3038 001BFF78  80 04 03 8C */	lwz r0, 0x38c(r4)
/* 801C303C 001BFF7C  7C 00 28 40 */	cmplw r0, r5
/* 801C3040 001BFF80  40 82 00 0C */	bne lbl_801C304C
/* 801C3044 001BFF84  38 60 00 00 */	li r3, 0
/* 801C3048 001BFF88  48 00 00 C8 */	b lbl_801C3110
lbl_801C304C:
/* 801C304C 001BFF8C  38 64 00 08 */	addi r3, r4, 8
/* 801C3050 001BFF90  80 04 03 90 */	lwz r0, 0x390(r4)
/* 801C3054 001BFF94  7C 00 28 40 */	cmplw r0, r5
/* 801C3058 001BFF98  40 82 00 0C */	bne lbl_801C3064
/* 801C305C 001BFF9C  38 60 00 00 */	li r3, 0
/* 801C3060 001BFFA0  48 00 00 B0 */	b lbl_801C3110
lbl_801C3064:
/* 801C3064 001BFFA4  80 03 03 8C */	lwz r0, 0x38c(r3)
/* 801C3068 001BFFA8  7C 00 28 40 */	cmplw r0, r5
/* 801C306C 001BFFAC  40 82 00 0C */	bne lbl_801C3078
/* 801C3070 001BFFB0  38 60 00 00 */	li r3, 0
/* 801C3074 001BFFB4  48 00 00 9C */	b lbl_801C3110
lbl_801C3078:
/* 801C3078 001BFFB8  80 03 03 90 */	lwz r0, 0x390(r3)
/* 801C307C 001BFFBC  7C 00 28 40 */	cmplw r0, r5
/* 801C3080 001BFFC0  40 82 00 0C */	bne lbl_801C308C
/* 801C3084 001BFFC4  38 60 00 00 */	li r3, 0
/* 801C3088 001BFFC8  48 00 00 88 */	b lbl_801C3110
lbl_801C308C:
/* 801C308C 001BFFCC  80 03 03 94 */	lwz r0, 0x394(r3)
/* 801C3090 001BFFD0  7C 00 28 40 */	cmplw r0, r5
/* 801C3094 001BFFD4  40 82 00 0C */	bne lbl_801C30A0
/* 801C3098 001BFFD8  38 60 00 00 */	li r3, 0
/* 801C309C 001BFFDC  48 00 00 74 */	b lbl_801C3110
lbl_801C30A0:
/* 801C30A0 001BFFE0  80 03 03 98 */	lwz r0, 0x398(r3)
/* 801C30A4 001BFFE4  7C 00 28 40 */	cmplw r0, r5
/* 801C30A8 001BFFE8  40 82 00 0C */	bne lbl_801C30B4
/* 801C30AC 001BFFEC  38 60 00 00 */	li r3, 0
/* 801C30B0 001BFFF0  48 00 00 60 */	b lbl_801C3110
lbl_801C30B4:
/* 801C30B4 001BFFF4  38 00 00 07 */	li r0, 7
/* 801C30B8 001BFFF8  7C 83 23 78 */	mr r3, r4
/* 801C30BC 001BFFFC  38 C0 00 00 */	li r6, 0
/* 801C30C0 001C0000  7C 09 03 A6 */	mtctr r0
lbl_801C30C4:
/* 801C30C4 001C0004  80 03 03 88 */	lwz r0, 0x388(r3)
/* 801C30C8 001C0008  28 00 00 00 */	cmplwi r0, 0
/* 801C30CC 001C000C  40 82 00 18 */	bne lbl_801C30E4
/* 801C30D0 001C0010  54 C0 10 3A */	slwi r0, r6, 2
/* 801C30D4 001C0014  38 60 00 01 */	li r3, 1
/* 801C30D8 001C0018  7C 84 02 14 */	add r4, r4, r0
/* 801C30DC 001C001C  90 A4 03 88 */	stw r5, 0x388(r4)
/* 801C30E0 001C0020  48 00 00 30 */	b lbl_801C3110
lbl_801C30E4:
/* 801C30E4 001C0024  38 63 00 04 */	addi r3, r3, 4
/* 801C30E8 001C0028  38 C6 00 01 */	addi r6, r6, 1
/* 801C30EC 001C002C  42 00 FF D8 */	bdnz lbl_801C30C4
/* 801C30F0 001C0030  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C30F4 001C0034  3C A0 80 48 */	lis r5, lbl_804800D0@ha
/* 801C30F8 001C0038  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C30FC 001C003C  38 80 06 38 */	li r4, 0x638
/* 801C3100 001C0040  38 A5 00 D0 */	addi r5, r5, lbl_804800D0@l
/* 801C3104 001C0044  4C C6 31 82 */	crclr 6
/* 801C3108 001C0048  4B E6 75 39 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C310C:
/* 801C310C 001C004C  38 60 00 00 */	li r3, 0
lbl_801C3110:
/* 801C3110 001C0050  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C3114 001C0054  7C 08 03 A6 */	mtlr r0
/* 801C3118 001C0058  38 21 00 10 */	addi r1, r1, 0x10
/* 801C311C 001C005C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global actVs__Q24Game21GameMessagePelletDeadFPQ24Game13VsGameSection
actVs__Q24Game21GameMessagePelletDeadFPQ24Game13VsGameSection:
/* 801C3120 001C0060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C3124 001C0064  7C 08 02 A6 */	mflr r0
/* 801C3128 001C0068  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C312C 001C006C  80 A3 00 04 */	lwz r5, 4(r3)
/* 801C3130 001C0070  88 05 03 2C */	lbz r0, 0x32c(r5)
/* 801C3134 001C0074  28 00 00 06 */	cmplwi r0, 6
/* 801C3138 001C0078  40 82 00 60 */	bne lbl_801C3198
/* 801C313C 001C007C  38 00 00 07 */	li r0, 7
/* 801C3140 001C0080  7C 83 23 78 */	mr r3, r4
/* 801C3144 001C0084  38 C0 00 00 */	li r6, 0
/* 801C3148 001C0088  7C 09 03 A6 */	mtctr r0
lbl_801C314C:
/* 801C314C 001C008C  80 03 03 88 */	lwz r0, 0x3ac(r3)
/* 801C3150 001C0090  7C 00 28 40 */	cmplw r0, r5
/* 801C3154 001C0094  40 82 00 1C */	bne lbl_801C3170
/* 801C3158 001C0098  54 C0 10 3A */	slwi r0, r6, 2
/* 801C315C 001C009C  38 A0 00 00 */	li r5, 0
/* 801C3160 001C00A0  7C 84 02 14 */	add r4, r4, r0
/* 801C3164 001C00A4  38 60 00 01 */	li r3, 1
/* 801C3168 001C00A8  90 A4 03 88 */	stw r5, 0x3ac(r4)
/* 801C316C 001C00AC  48 00 00 30 */	b lbl_801C319C
lbl_801C3170:
/* 801C3170 001C00B0  38 63 00 04 */	addi r3, r3, 4
/* 801C3174 001C00B4  38 C6 00 01 */	addi r6, r6, 1
/* 801C3178 001C00B8  42 00 FF D4 */	bdnz lbl_801C314C
/* 801C317C 001C00BC  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C3180 001C00C0  3C A0 80 48 */	lis r5, lbl_804800EC@ha
/* 801C3184 001C00C4  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C3188 001C00C8  38 80 06 51 */	li r4, 0x651
/* 801C318C 001C00CC  38 A5 00 EC */	addi r5, r5, lbl_804800EC@l
/* 801C3190 001C00D0  4C C6 31 82 */	crclr 6
/* 801C3194 001C00D4  4B E6 74 AD */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3198:
/* 801C3198 001C00D8  38 60 00 00 */	li r3, 0
lbl_801C319C:
/* 801C319C 001C00DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C31A0 001C00E0  7C 08 03 A6 */	mtlr r0
/* 801C31A4 001C00E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C31A8 001C00E8  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game21GameMessagePelletDeadFPQ24Game13VsGameSection
actVs__Q24Game21GameMessagePelletDeadFPQ24Game13VsGameSection:
/* 801C3120 001C0060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C3124 001C0064  7C 08 02 A6 */	mflr r0
/* 801C3128 001C0068  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C312C 001C006C  80 A3 00 04 */	lwz r5, 4(r3)
/* 801C3130 001C0070  88 05 03 2C */	lbz r0, 0x32c(r5)
/* 801C3134 001C0074  28 00 00 06 */	cmplwi r0, 6
/* 801C3138 001C0078  40 82 00 60 */	bne lbl_801C3198
/* 801C313C 001C007C  38 00 00 07 */	li r0, 7
/* 801C3140 001C0080  7C 83 23 78 */	mr r3, r4
/* 801C3144 001C0084  38 C0 00 00 */	li r6, 0
/* 801C3148 001C0088  7C 09 03 A6 */	mtctr r0
lbl_801C314C:
/* 801C314C 001C008C  80 03 03 88 */	lwz r0, 0x388(r3)
/* 801C3150 001C0090  7C 00 28 40 */	cmplw r0, r5
/* 801C3154 001C0094  40 82 00 1C */	bne lbl_801C3170
/* 801C3158 001C0098  54 C0 10 3A */	slwi r0, r6, 2
/* 801C315C 001C009C  38 A0 00 00 */	li r5, 0
/* 801C3160 001C00A0  7C 84 02 14 */	add r4, r4, r0
/* 801C3164 001C00A4  38 60 00 01 */	li r3, 1
/* 801C3168 001C00A8  90 A4 03 88 */	stw r5, 0x388(r4)
/* 801C316C 001C00AC  48 00 00 30 */	b lbl_801C319C
lbl_801C3170:
/* 801C3170 001C00B0  38 63 00 04 */	addi r3, r3, 4
/* 801C3174 001C00B4  38 C6 00 01 */	addi r6, r6, 1
/* 801C3178 001C00B8  42 00 FF D4 */	bdnz lbl_801C314C
/* 801C317C 001C00BC  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C3180 001C00C0  3C A0 80 48 */	lis r5, lbl_804800EC@ha
/* 801C3184 001C00C4  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C3188 001C00C8  38 80 06 51 */	li r4, 0x651
/* 801C318C 001C00CC  38 A5 00 EC */	addi r5, r5, lbl_804800EC@l
/* 801C3190 001C00D0  4C C6 31 82 */	crclr 6
/* 801C3194 001C00D4  4B E6 74 AD */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3198:
/* 801C3198 001C00D8  38 60 00 00 */	li r3, 0
lbl_801C319C:
/* 801C319C 001C00DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C31A0 001C00E0  7C 08 03 A6 */	mtlr r0
/* 801C31A4 001C00E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C31A8 001C00E8  4E 80 00 20 */	blr 
.endif

.if version == 1
.global actVs__Q24Game30GameMessageVsBirthTekiTreasureFPQ24Game13VsGameSection
actVs__Q24Game30GameMessageVsBirthTekiTreasureFPQ24Game13VsGameSection:
/* 801C31AC 001C00EC  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 801C31B0 001C00F0  7C 08 02 A6 */	mflr r0
/* 801C31B4 001C00F4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 801C31B8 001C00F8  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 801C31BC 001C00FC  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 801C31C0 001C0100  BF 41 00 88 */	stmw r26, 0x88(r1)
/* 801C31C4 001C0104  7C 7E 1B 78 */	mr r30, r3
/* 801C31C8 001C0108  7C 9F 23 78 */	mr r31, r4
/* 801C31CC 001C010C  C0 23 00 04 */	lfs f1, 4(r3)
/* 801C31D0 001C0110  38 61 00 18 */	addi r3, r1, 0x18
/* 801C31D4 001C0114  C0 02 B1 C0 */	lfs f0, lbl_80519520@sda21(r2)
/* 801C31D8 001C0118  38 81 00 08 */	addi r4, r1, 8
/* 801C31DC 001C011C  D0 21 00 08 */	stfs f1, 8(r1)
/* 801C31E0 001C0120  3B A0 00 00 */	li r29, 0
/* 801C31E4 001C0124  3B 80 00 00 */	li r28, 0
/* 801C31E8 001C0128  3B 60 00 00 */	li r27, 0
/* 801C31EC 001C012C  C0 3E 00 08 */	lfs f1, 8(r30)
/* 801C31F0 001C0130  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801C31F4 001C0134  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 801C31F8 001C0138  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801C31FC 001C013C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C3200 001C0140  48 06 B1 A1 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 801C3204 001C0144  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3208 001C0148  38 81 00 18 */	addi r4, r1, 0x18
/* 801C320C 001C014C  48 06 B1 D5 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 801C3210 001C0150  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3214 001C0154  48 06 B2 49 */	bl first__Q24Game12CellIteratorFv
/* 801C3218 001C0158  48 00 00 6C */	b lbl_801C3284
lbl_801C321C:
/* 801C321C 001C015C  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3220 001C0160  48 06 B3 25 */	bl __ml__Q24Game12CellIteratorFv
/* 801C3224 001C0164  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3228 001C0168  7C 7A 1B 78 */	mr r26, r3
/* 801C322C 001C016C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C3230 001C0170  7D 89 03 A6 */	mtctr r12
/* 801C3234 001C0174  4E 80 04 21 */	bctrl 
/* 801C3238 001C0178  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C323C 001C017C  41 82 00 40 */	beq lbl_801C327C
/* 801C3240 001C0180  7F 43 D3 78 */	mr r3, r26
/* 801C3244 001C0184  81 9A 00 00 */	lwz r12, 0(r26)
/* 801C3248 001C0188  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C324C 001C018C  7D 89 03 A6 */	mtctr r12
/* 801C3250 001C0190  4E 80 04 21 */	bctrl 
/* 801C3254 001C0194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C3258 001C0198  41 82 00 24 */	beq lbl_801C327C
/* 801C325C 001C019C  88 1A 02 B8 */	lbz r0, 0x2b8(r26)
/* 801C3260 001C01A0  2C 00 00 01 */	cmpwi r0, 1
/* 801C3264 001C01A4  40 82 00 0C */	bne lbl_801C3270
/* 801C3268 001C01A8  3B 9C 00 01 */	addi r28, r28, 1
/* 801C326C 001C01AC  48 00 00 10 */	b lbl_801C327C
lbl_801C3270:
/* 801C3270 001C01B0  2C 00 00 00 */	cmpwi r0, 0
/* 801C3274 001C01B4  40 82 00 08 */	bne lbl_801C327C
/* 801C3278 001C01B8  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C327C:
/* 801C327C 001C01BC  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3280 001C01C0  48 06 B2 81 */	bl next__Q24Game12CellIteratorFv
lbl_801C3284:
/* 801C3284 001C01C4  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3288 001C01C8  48 06 B2 AD */	bl isDone__Q24Game12CellIteratorFv
/* 801C328C 001C01CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C3290 001C01D0  41 82 FF 8C */	beq lbl_801C321C
/* 801C3294 001C01D4  7C 1B E0 00 */	cmpw r27, r28
/* 801C3298 001C01D8  40 81 00 08 */	ble lbl_801C32A0
/* 801C329C 001C01DC  3B A0 00 01 */	li r29, 1
lbl_801C32A0:
/* 801C32A0 001C01E0  20 1D 00 01 */	subfic r0, r29, 1
/* 801C32A4 001C01E4  57 A3 10 3A */	slwi r3, r29, 2
/* 801C32A8 001C01E8  54 00 10 3A */	slwi r0, r0, 2
/* 801C32AC 001C01EC  C0 02 B1 C8 */	lfs f0, lbl_80519528@sda21(r2)
/* 801C32B0 001C01F0  7C 9F 1A 14 */	add r4, r31, r3
/* 801C32B4 001C01F4  C3 E2 B1 C4 */	lfs f31, lbl_80519524@sda21(r2)
/* 801C32B8 001C01F8  7C 7F 02 14 */	add r3, r31, r0
/* 801C32BC 001C01FC  C0 44 03 70 */	lfs f2, 0x394(r4)
/* 801C32C0 001C0200  C0 23 03 70 */	lfs f1, 0x394(r3)
/* 801C32C4 001C0204  EC 42 08 28 */	fsubs f2, f2, f1
/* 801C32C8 001C0208  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C32CC 001C020C  40 81 00 18 */	ble lbl_801C32E4
/* 801C32D0 001C0210  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801C32D4 001C0214  FF E0 00 90 */	fmr f31, f0
/* 801C32D8 001C0218  38 03 00 02 */	addi r0, r3, 2
/* 801C32DC 001C021C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801C32E0 001C0220  48 00 00 6C */	b lbl_801C334C
lbl_801C32E4:
/* 801C32E4 001C0224  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C32E8 001C0228  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C32EC 001C022C  40 81 00 18 */	ble lbl_801C3304
/* 801C32F0 001C0230  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801C32F4 001C0234  FF E0 00 90 */	fmr f31, f0
/* 801C32F8 001C0238  38 03 00 01 */	addi r0, r3, 1
/* 801C32FC 001C023C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801C3300 001C0240  48 00 00 4C */	b lbl_801C334C
lbl_801C3304:
/* 801C3304 001C0244  C0 22 B1 CC */	lfs f1, lbl_8051952C@sda21(r2)
/* 801C3308 001C0248  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801C330C 001C024C  40 81 00 08 */	ble lbl_801C3314
/* 801C3310 001C0250  48 00 00 3C */	b lbl_801C334C
lbl_801C3314:
/* 801C3314 001C0254  C0 02 B1 D0 */	lfs f0, lbl_80519530@sda21(r2)
/* 801C3318 001C0258  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C331C 001C025C  41 81 00 30 */	bgt lbl_801C334C
/* 801C3320 001C0260  C0 02 B1 D4 */	lfs f0, lbl_80519534@sda21(r2)
/* 801C3324 001C0264  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3328 001C0268  40 81 00 0C */	ble lbl_801C3334
/* 801C332C 001C026C  FF E0 08 90 */	fmr f31, f1
/* 801C3330 001C0270  48 00 00 1C */	b lbl_801C334C
lbl_801C3334:
/* 801C3334 001C0274  C0 02 B1 D8 */	lfs f0, lbl_80519538@sda21(r2)
/* 801C3338 001C0278  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C333C 001C027C  40 81 00 0C */	ble lbl_801C3348
/* 801C3340 001C0280  C3 E2 B1 DC */	lfs f31, lbl_8051953C@sda21(r2)
/* 801C3344 001C0284  48 00 00 08 */	b lbl_801C334C
lbl_801C3348:
/* 801C3348 001C0288  C3 E2 B1 E0 */	lfs f31, lbl_80519540@sda21(r2)
lbl_801C334C:
/* 801C334C 001C028C  4B F0 62 55 */	bl rand
/* 801C3350 001C0290  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 801C3354 001C0294  3C 00 43 30 */	lis r0, 0x4330
/* 801C3358 001C0298  90 81 00 84 */	stw r4, 0x84(r1)
/* 801C335C 001C029C  C8 42 B1 68 */	lfd f2, lbl_805194C8@sda21(r2)
/* 801C3360 001C02A0  90 01 00 80 */	stw r0, 0x80(r1)
/* 801C3364 001C02A4  C0 02 B1 90 */	lfs f0, lbl_805194F0@sda21(r2)
/* 801C3368 001C02A8  C8 21 00 80 */	lfd f1, 0x80(r1)
/* 801C336C 001C02AC  EC 21 10 28 */	fsubs f1, f1, f2
/* 801C3370 001C02B0  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C3374 001C02B4  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 801C3378 001C02B8  41 81 00 40 */	bgt lbl_801C33B8
/* 801C337C 001C02BC  80 7F 03 2C */	lwz r3, 0x350(r31)
/* 801C3380 001C02C0  3B 60 00 00 */	li r27, 0
/* 801C3384 001C02C4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801C3388 001C02C8  3B 43 FF FF */	addi r26, r3, -1
/* 801C338C 001C02CC  48 00 00 1C */	b lbl_801C33A8
lbl_801C3390:
/* 801C3390 001C02D0  80 7F 03 2C */	lwz r3, 0x350(r31)
/* 801C3394 001C02D4  7F 44 D3 78 */	mr r4, r26
/* 801C3398 001C02D8  88 DE 00 14 */	lbz r6, 0x14(r30)
/* 801C339C 001C02DC  38 BE 00 04 */	addi r5, r30, 4
/* 801C33A0 001C02E0  48 07 20 95 */	bl "birth__Q34Game6VsGame7TekiMgrFiR10Vector3<f>b"
/* 801C33A4 001C02E4  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C33A8:
/* 801C33A8 001C02E8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 801C33AC 001C02EC  7C 1B 00 00 */	cmpw r27, r0
/* 801C33B0 001C02F0  41 80 FF E0 */	blt lbl_801C3390
/* 801C33B4 001C02F4  38 60 00 01 */	li r3, 1
lbl_801C33B8:
/* 801C33B8 001C02F8  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 801C33BC 001C02FC  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 801C33C0 001C0300  BB 41 00 88 */	lmw r26, 0x88(r1)
/* 801C33C4 001C0304  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 801C33C8 001C0308  7C 08 03 A6 */	mtlr r0
/* 801C33CC 001C030C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 801C33D0 001C0310  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game30GameMessageVsBirthTekiTreasureFPQ24Game13VsGameSection
actVs__Q24Game30GameMessageVsBirthTekiTreasureFPQ24Game13VsGameSection:
/* 801C31AC 001C00EC  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 801C31B0 001C00F0  7C 08 02 A6 */	mflr r0
/* 801C31B4 001C00F4  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 801C31B8 001C00F8  DB E1 00 A0 */	stfd f31, 0xa0(r1)
/* 801C31BC 001C00FC  F3 E1 00 A8 */	psq_st f31, 168(r1), 0, qr0
/* 801C31C0 001C0100  BF 41 00 88 */	stmw r26, 0x88(r1)
/* 801C31C4 001C0104  7C 7E 1B 78 */	mr r30, r3
/* 801C31C8 001C0108  7C 9F 23 78 */	mr r31, r4
/* 801C31CC 001C010C  C0 23 00 04 */	lfs f1, 4(r3)
/* 801C31D0 001C0110  38 61 00 18 */	addi r3, r1, 0x18
/* 801C31D4 001C0114  C0 02 B1 C0 */	lfs f0, lbl_80519520@sda21(r2)
/* 801C31D8 001C0118  38 81 00 08 */	addi r4, r1, 8
/* 801C31DC 001C011C  D0 21 00 08 */	stfs f1, 8(r1)
/* 801C31E0 001C0120  3B A0 00 00 */	li r29, 0
/* 801C31E4 001C0124  3B 80 00 00 */	li r28, 0
/* 801C31E8 001C0128  3B 60 00 00 */	li r27, 0
/* 801C31EC 001C012C  C0 3E 00 08 */	lfs f1, 8(r30)
/* 801C31F0 001C0130  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801C31F4 001C0134  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 801C31F8 001C0138  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801C31FC 001C013C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C3200 001C0140  48 06 B1 A1 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 801C3204 001C0144  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3208 001C0148  38 81 00 18 */	addi r4, r1, 0x18
/* 801C320C 001C014C  48 06 B1 D5 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 801C3210 001C0150  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3214 001C0154  48 06 B2 49 */	bl first__Q24Game12CellIteratorFv
/* 801C3218 001C0158  48 00 00 6C */	b lbl_801C3284
lbl_801C321C:
/* 801C321C 001C015C  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3220 001C0160  48 06 B3 25 */	bl __ml__Q24Game12CellIteratorFv
/* 801C3224 001C0164  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3228 001C0168  7C 7A 1B 78 */	mr r26, r3
/* 801C322C 001C016C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801C3230 001C0170  7D 89 03 A6 */	mtctr r12
/* 801C3234 001C0174  4E 80 04 21 */	bctrl 
/* 801C3238 001C0178  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C323C 001C017C  41 82 00 40 */	beq lbl_801C327C
/* 801C3240 001C0180  7F 43 D3 78 */	mr r3, r26
/* 801C3244 001C0184  81 9A 00 00 */	lwz r12, 0(r26)
/* 801C3248 001C0188  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C324C 001C018C  7D 89 03 A6 */	mtctr r12
/* 801C3250 001C0190  4E 80 04 21 */	bctrl 
/* 801C3254 001C0194  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C3258 001C0198  41 82 00 24 */	beq lbl_801C327C
/* 801C325C 001C019C  88 1A 02 B8 */	lbz r0, 0x2b8(r26)
/* 801C3260 001C01A0  2C 00 00 01 */	cmpwi r0, 1
/* 801C3264 001C01A4  40 82 00 0C */	bne lbl_801C3270
/* 801C3268 001C01A8  3B 9C 00 01 */	addi r28, r28, 1
/* 801C326C 001C01AC  48 00 00 10 */	b lbl_801C327C
lbl_801C3270:
/* 801C3270 001C01B0  2C 00 00 00 */	cmpwi r0, 0
/* 801C3274 001C01B4  40 82 00 08 */	bne lbl_801C327C
/* 801C3278 001C01B8  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C327C:
/* 801C327C 001C01BC  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3280 001C01C0  48 06 B2 81 */	bl next__Q24Game12CellIteratorFv
lbl_801C3284:
/* 801C3284 001C01C4  38 61 00 38 */	addi r3, r1, 0x38
/* 801C3288 001C01C8  48 06 B2 AD */	bl isDone__Q24Game12CellIteratorFv
/* 801C328C 001C01CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C3290 001C01D0  41 82 FF 8C */	beq lbl_801C321C
/* 801C3294 001C01D4  7C 1B E0 00 */	cmpw r27, r28
/* 801C3298 001C01D8  40 81 00 08 */	ble lbl_801C32A0
/* 801C329C 001C01DC  3B A0 00 01 */	li r29, 1
lbl_801C32A0:
/* 801C32A0 001C01E0  20 1D 00 01 */	subfic r0, r29, 1
/* 801C32A4 001C01E4  57 A3 10 3A */	slwi r3, r29, 2
/* 801C32A8 001C01E8  54 00 10 3A */	slwi r0, r0, 2
/* 801C32AC 001C01EC  C0 02 B1 C8 */	lfs f0, lbl_80519528@sda21(r2)
/* 801C32B0 001C01F0  7C 9F 1A 14 */	add r4, r31, r3
/* 801C32B4 001C01F4  C3 E2 B1 C4 */	lfs f31, lbl_80519524@sda21(r2)
/* 801C32B8 001C01F8  7C 7F 02 14 */	add r3, r31, r0
/* 801C32BC 001C01FC  C0 44 03 70 */	lfs f2, 0x370(r4)
/* 801C32C0 001C0200  C0 23 03 70 */	lfs f1, 0x370(r3)
/* 801C32C4 001C0204  EC 42 08 28 */	fsubs f2, f2, f1
/* 801C32C8 001C0208  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C32CC 001C020C  40 81 00 18 */	ble lbl_801C32E4
/* 801C32D0 001C0210  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801C32D4 001C0214  FF E0 00 90 */	fmr f31, f0
/* 801C32D8 001C0218  38 03 00 02 */	addi r0, r3, 2
/* 801C32DC 001C021C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801C32E0 001C0220  48 00 00 6C */	b lbl_801C334C
lbl_801C32E4:
/* 801C32E4 001C0224  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C32E8 001C0228  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C32EC 001C022C  40 81 00 18 */	ble lbl_801C3304
/* 801C32F0 001C0230  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 801C32F4 001C0234  FF E0 00 90 */	fmr f31, f0
/* 801C32F8 001C0238  38 03 00 01 */	addi r0, r3, 1
/* 801C32FC 001C023C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 801C3300 001C0240  48 00 00 4C */	b lbl_801C334C
lbl_801C3304:
/* 801C3304 001C0244  C0 22 B1 CC */	lfs f1, lbl_8051952C@sda21(r2)
/* 801C3308 001C0248  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801C330C 001C024C  40 81 00 08 */	ble lbl_801C3314
/* 801C3310 001C0250  48 00 00 3C */	b lbl_801C334C
lbl_801C3314:
/* 801C3314 001C0254  C0 02 B1 D0 */	lfs f0, lbl_80519530@sda21(r2)
/* 801C3318 001C0258  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C331C 001C025C  41 81 00 30 */	bgt lbl_801C334C
/* 801C3320 001C0260  C0 02 B1 D4 */	lfs f0, lbl_80519534@sda21(r2)
/* 801C3324 001C0264  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3328 001C0268  40 81 00 0C */	ble lbl_801C3334
/* 801C332C 001C026C  FF E0 08 90 */	fmr f31, f1
/* 801C3330 001C0270  48 00 00 1C */	b lbl_801C334C
lbl_801C3334:
/* 801C3334 001C0274  C0 02 B1 D8 */	lfs f0, lbl_80519538@sda21(r2)
/* 801C3338 001C0278  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C333C 001C027C  40 81 00 0C */	ble lbl_801C3348
/* 801C3340 001C0280  C3 E2 B1 DC */	lfs f31, lbl_8051953C@sda21(r2)
/* 801C3344 001C0284  48 00 00 08 */	b lbl_801C334C
lbl_801C3348:
/* 801C3348 001C0288  C3 E2 B1 E0 */	lfs f31, lbl_80519540@sda21(r2)
lbl_801C334C:
/* 801C334C 001C028C  4B F0 62 55 */	bl rand
/* 801C3350 001C0290  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 801C3354 001C0294  3C 00 43 30 */	lis r0, 0x4330
/* 801C3358 001C0298  90 81 00 84 */	stw r4, 0x84(r1)
/* 801C335C 001C029C  C8 42 B1 68 */	lfd f2, lbl_805194C8@sda21(r2)
/* 801C3360 001C02A0  90 01 00 80 */	stw r0, 0x80(r1)
/* 801C3364 001C02A4  C0 02 B1 90 */	lfs f0, lbl_805194F0@sda21(r2)
/* 801C3368 001C02A8  C8 21 00 80 */	lfd f1, 0x80(r1)
/* 801C336C 001C02AC  EC 21 10 28 */	fsubs f1, f1, f2
/* 801C3370 001C02B0  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C3374 001C02B4  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 801C3378 001C02B8  41 81 00 40 */	bgt lbl_801C33B8
/* 801C337C 001C02BC  80 7F 03 2C */	lwz r3, 0x32c(r31)
/* 801C3380 001C02C0  3B 60 00 00 */	li r27, 0
/* 801C3384 001C02C4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801C3388 001C02C8  3B 43 FF FF */	addi r26, r3, -1
/* 801C338C 001C02CC  48 00 00 1C */	b lbl_801C33A8
lbl_801C3390:
/* 801C3390 001C02D0  80 7F 03 2C */	lwz r3, 0x32c(r31)
/* 801C3394 001C02D4  7F 44 D3 78 */	mr r4, r26
/* 801C3398 001C02D8  88 DE 00 14 */	lbz r6, 0x14(r30)
/* 801C339C 001C02DC  38 BE 00 04 */	addi r5, r30, 4
/* 801C33A0 001C02E0  48 07 20 95 */	bl "birth__Q34Game6VsGame7TekiMgrFiR10Vector3<f>b"
/* 801C33A4 001C02E4  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C33A8:
/* 801C33A8 001C02E8  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 801C33AC 001C02EC  7C 1B 00 00 */	cmpw r27, r0
/* 801C33B0 001C02F0  41 80 FF E0 */	blt lbl_801C3390
/* 801C33B4 001C02F4  38 60 00 01 */	li r3, 1
lbl_801C33B8:
/* 801C33B8 001C02F8  E3 E1 00 A8 */	psq_l f31, 168(r1), 0, qr0
/* 801C33BC 001C02FC  CB E1 00 A0 */	lfd f31, 0xa0(r1)
/* 801C33C0 001C0300  BB 41 00 88 */	lmw r26, 0x88(r1)
/* 801C33C4 001C0304  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 801C33C8 001C0308  7C 08 03 A6 */	mtlr r0
/* 801C33CC 001C030C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 801C33D0 001C0310  4E 80 00 20 */	blr 
.endif

.if version == 1
.global actVs__Q24Game23GameMessageVsPikminDeadFPQ24Game13VsGameSection
actVs__Q24Game23GameMessageVsPikminDeadFPQ24Game13VsGameSection:
/* 801C33D4 001C0314  38 00 00 00 */	li r0, 0
/* 801C33D8 001C0318  38 60 00 01 */	li r3, 1
/* 801C33DC 001C031C  98 04 02 05 */	stb r0, 0x229(r4)
/* 801C33E0 001C0320  80 A4 02 08 */	lwz r5, 0x22c(r4)
/* 801C33E4 001C0324  38 05 00 01 */	addi r0, r5, 1
/* 801C33E8 001C0328  90 04 02 08 */	stw r0, 0x22c(r4)
/* 801C33EC 001C032C  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game23GameMessageVsPikminDeadFPQ24Game13VsGameSection
actVs__Q24Game23GameMessageVsPikminDeadFPQ24Game13VsGameSection:
/* 801C33D4 001C0314  38 00 00 00 */	li r0, 0
/* 801C33D8 001C0318  38 60 00 01 */	li r3, 1
/* 801C33DC 001C031C  98 04 02 05 */	stb r0, 0x205(r4)
/* 801C33E0 001C0320  80 A4 02 08 */	lwz r5, 0x208(r4)
/* 801C33E4 001C0324  38 05 00 01 */	addi r0, r5, 1
/* 801C33E8 001C0328  90 04 02 08 */	stw r0, 0x208(r4)
/* 801C33EC 001C032C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global actVs__Q24Game20GameMessageVsGotCardFPQ24Game13VsGameSection
actVs__Q24Game20GameMessageVsGotCardFPQ24Game13VsGameSection:
/* 801C33F0 001C0330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C33F4 001C0334  7C 08 02 A6 */	mflr r0
/* 801C33F8 001C0338  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C33FC 001C033C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C3400 001C0340  7C 9F 23 78 */	mr r31, r4
/* 801C3404 001C0344  93 C1 00 08 */	stw r30, 8(r1)
/* 801C3408 001C0348  7C 7E 1B 78 */	mr r30, r3
/* 801C340C 001C034C  80 03 00 04 */	lwz r0, 4(r3)
/* 801C3410 001C0350  80 84 03 30 */	lwz r4, 0x354(r4)
/* 801C3414 001C0354  1C 60 00 70 */	mulli r3, r0, 0x70
/* 801C3418 001C0358  38 63 00 18 */	addi r3, r3, 0x18
/* 801C341C 001C035C  7C 64 1A 14 */	add r3, r4, r3
/* 801C3420 001C0360  88 03 00 18 */	lbz r0, 0x18(r3)
/* 801C3424 001C0364  28 00 00 00 */	cmplwi r0, 0
/* 801C3428 001C0368  40 82 00 1C */	bne lbl_801C3444
/* 801C342C 001C036C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801C3430 001C0370  3C 03 00 00 */	addis r0, r3, 0
/* 801C3434 001C0374  28 00 FF FF */	cmplwi r0, 0xffff
/* 801C3438 001C0378  41 82 00 0C */	beq lbl_801C3444
/* 801C343C 001C037C  7F E3 FB 78 */	mr r3, r31
/* 801C3440 001C0380  48 00 05 69 */	bl useCard__Q24Game13VsGameSectionFv
lbl_801C3444:
/* 801C3444 001C0384  80 7F 03 30 */	lwz r3, 0x354(r31)
/* 801C3448 001C0388  80 9E 00 04 */	lwz r4, 4(r30)
/* 801C344C 001C038C  48 07 33 C1 */	bl gotPlayerCard__Q34Game6VsGame7CardMgrFi
/* 801C3450 001C0390  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C3454 001C0394  38 60 00 01 */	li r3, 1
/* 801C3458 001C0398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C345C 001C039C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C3460 001C03A0  7C 08 03 A6 */	mtlr r0
/* 801C3464 001C03A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C3468 001C03A8  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game20GameMessageVsGotCardFPQ24Game13VsGameSection
actVs__Q24Game20GameMessageVsGotCardFPQ24Game13VsGameSection:
/* 801C33F0 001C0330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C33F4 001C0334  7C 08 02 A6 */	mflr r0
/* 801C33F8 001C0338  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C33FC 001C033C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C3400 001C0340  7C 9F 23 78 */	mr r31, r4
/* 801C3404 001C0344  93 C1 00 08 */	stw r30, 8(r1)
/* 801C3408 001C0348  7C 7E 1B 78 */	mr r30, r3
/* 801C340C 001C034C  80 03 00 04 */	lwz r0, 4(r3)
/* 801C3410 001C0350  80 84 03 30 */	lwz r4, 0x330(r4)
/* 801C3414 001C0354  1C 60 00 70 */	mulli r3, r0, 0x70
/* 801C3418 001C0358  38 63 00 18 */	addi r3, r3, 0x18
/* 801C341C 001C035C  7C 64 1A 14 */	add r3, r4, r3
/* 801C3420 001C0360  88 03 00 18 */	lbz r0, 0x18(r3)
/* 801C3424 001C0364  28 00 00 00 */	cmplwi r0, 0
/* 801C3428 001C0368  40 82 00 1C */	bne lbl_801C3444
/* 801C342C 001C036C  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801C3430 001C0370  3C 03 00 00 */	addis r0, r3, 0
/* 801C3434 001C0374  28 00 FF FF */	cmplwi r0, 0xffff
/* 801C3438 001C0378  41 82 00 0C */	beq lbl_801C3444
/* 801C343C 001C037C  7F E3 FB 78 */	mr r3, r31
/* 801C3440 001C0380  48 00 05 69 */	bl useCard__Q24Game13VsGameSectionFv
lbl_801C3444:
/* 801C3444 001C0384  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801C3448 001C0388  80 9E 00 04 */	lwz r4, 4(r30)
/* 801C344C 001C038C  48 07 33 C1 */	bl gotPlayerCard__Q34Game6VsGame7CardMgrFi
/* 801C3450 001C0390  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C3454 001C0394  38 60 00 01 */	li r3, 1
/* 801C3458 001C0398  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C345C 001C039C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C3460 001C03A0  7C 08 03 A6 */	mtlr r0
/* 801C3464 001C03A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801C3468 001C03A8  4E 80 00 20 */	blr 
.endif

.if version == 1
.global actVs__Q24Game20GameMessageVsUseCardFPQ24Game13VsGameSection
actVs__Q24Game20GameMessageVsUseCardFPQ24Game13VsGameSection:
/* 801C346C 001C03AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C3470 001C03B0  7C 08 02 A6 */	mflr r0
/* 801C3474 001C03B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3478 001C03B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C347C 001C03BC  7C 9F 23 78 */	mr r31, r4
/* 801C3480 001C03C0  93 C1 00 08 */	stw r30, 8(r1)
/* 801C3484 001C03C4  7C 7E 1B 78 */	mr r30, r3
/* 801C3488 001C03C8  80 64 01 80 */	lwz r3, 0x1a4(r4)
/* 801C348C 001C03CC  28 03 00 00 */	cmplwi r3, 0
/* 801C3490 001C03D0  41 82 00 24 */	beq lbl_801C34B4
/* 801C3494 001C03D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3498 001C03D8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801C349C 001C03DC  7D 89 03 A6 */	mtctr r12
/* 801C34A0 001C03E0  4E 80 04 21 */	bctrl 
/* 801C34A4 001C03E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C34A8 001C03E8  40 82 00 0C */	bne lbl_801C34B4
/* 801C34AC 001C03EC  38 60 00 00 */	li r3, 0
/* 801C34B0 001C03F0  48 00 00 4C */	b lbl_801C34FC
lbl_801C34B4:
/* 801C34B4 001C03F4  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 801C34B8 001C03F8  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 801C34BC 001C03FC  80 03 01 B8 */	lwz r0, 0x1b8(r3)
/* 801C34C0 001C0400  2C 00 00 00 */	cmpwi r0, 0
/* 801C34C4 001C0404  40 82 00 28 */	bne lbl_801C34EC
/* 801C34C8 001C0408  80 7F 03 30 */	lwz r3, 0x354(r31)
/* 801C34CC 001C040C  80 9E 00 04 */	lwz r4, 4(r30)
/* 801C34D0 001C0410  80 BF 03 2C */	lwz r5, 0x350(r31)
/* 801C34D4 001C0414  48 07 25 AD */	bl usePlayerCard__Q34Game6VsGame7CardMgrFiPQ34Game6VsGame7TekiMgr
/* 801C34D8 001C0418  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C34DC 001C041C  41 82 00 1C */	beq lbl_801C34F8
/* 801C34E0 001C0420  7F E3 FB 78 */	mr r3, r31
/* 801C34E4 001C0424  48 00 04 C5 */	bl useCard__Q24Game13VsGameSectionFv
/* 801C34E8 001C0428  48 00 00 10 */	b lbl_801C34F8
lbl_801C34EC:
/* 801C34EC 001C042C  80 7F 03 30 */	lwz r3, 0x354(r31)
/* 801C34F0 001C0430  80 9E 00 04 */	lwz r4, 4(r30)
/* 801C34F4 001C0434  48 07 25 5D */	bl stopSlot__Q34Game6VsGame7CardMgrFi
lbl_801C34F8:
/* 801C34F8 001C0438  38 60 00 01 */	li r3, 1
lbl_801C34FC:
/* 801C34FC 001C043C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C3500 001C0440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C3504 001C0444  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C3508 001C0448  7C 08 03 A6 */	mtlr r0
/* 801C350C 001C044C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C3510 001C0450  4E 80 00 20 */	blr 
.else
.global actVs__Q24Game20GameMessageVsUseCardFPQ24Game13VsGameSection
actVs__Q24Game20GameMessageVsUseCardFPQ24Game13VsGameSection:
/* 801C346C 001C03AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C3470 001C03B0  7C 08 02 A6 */	mflr r0
/* 801C3474 001C03B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3478 001C03B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C347C 001C03BC  7C 9F 23 78 */	mr r31, r4
/* 801C3480 001C03C0  93 C1 00 08 */	stw r30, 8(r1)
/* 801C3484 001C03C4  7C 7E 1B 78 */	mr r30, r3
/* 801C3488 001C03C8  80 64 01 80 */	lwz r3, 0x180(r4)
/* 801C348C 001C03CC  28 03 00 00 */	cmplwi r3, 0
/* 801C3490 001C03D0  41 82 00 24 */	beq lbl_801C34B4
/* 801C3494 001C03D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3498 001C03D8  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801C349C 001C03DC  7D 89 03 A6 */	mtctr r12
/* 801C34A0 001C03E0  4E 80 04 21 */	bctrl 
/* 801C34A4 001C03E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C34A8 001C03E8  40 82 00 0C */	bne lbl_801C34B4
/* 801C34AC 001C03EC  38 60 00 00 */	li r3, 0
/* 801C34B0 001C03F0  48 00 00 4C */	b lbl_801C34FC
lbl_801C34B4:
/* 801C34B4 001C03F4  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 801C34B8 001C03F8  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 801C34BC 001C03FC  80 03 01 B8 */	lwz r0, 0x1b8(r3)
/* 801C34C0 001C0400  2C 00 00 00 */	cmpwi r0, 0
/* 801C34C4 001C0404  40 82 00 28 */	bne lbl_801C34EC
/* 801C34C8 001C0408  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801C34CC 001C040C  80 9E 00 04 */	lwz r4, 4(r30)
/* 801C34D0 001C0410  80 BF 03 2C */	lwz r5, 0x32c(r31)
/* 801C34D4 001C0414  48 07 25 AD */	bl usePlayerCard__Q34Game6VsGame7CardMgrFiPQ34Game6VsGame7TekiMgr
/* 801C34D8 001C0418  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C34DC 001C041C  41 82 00 1C */	beq lbl_801C34F8
/* 801C34E0 001C0420  7F E3 FB 78 */	mr r3, r31
/* 801C34E4 001C0424  48 00 04 C5 */	bl useCard__Q24Game13VsGameSectionFv
/* 801C34E8 001C0428  48 00 00 10 */	b lbl_801C34F8
lbl_801C34EC:
/* 801C34EC 001C042C  80 7F 03 30 */	lwz r3, 0x330(r31)
/* 801C34F0 001C0430  80 9E 00 04 */	lwz r4, 4(r30)
/* 801C34F4 001C0434  48 07 25 5D */	bl stopSlot__Q34Game6VsGame7CardMgrFi
lbl_801C34F8:
/* 801C34F8 001C0438  38 60 00 01 */	li r3, 1
lbl_801C34FC:
/* 801C34FC 001C043C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C3500 001C0440  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C3504 001C0444  83 C1 00 08 */	lwz r30, 8(r1)
/* 801C3508 001C0448  7C 08 03 A6 */	mtlr r0
/* 801C350C 001C044C  38 21 00 10 */	addi r1, r1, 0x10
/* 801C3510 001C0450  4E 80 00 20 */	blr 
.endif

.global isCardUsable__Q34Game6VsGame5StateFPQ24Game13VsGameSection
isCardUsable__Q34Game6VsGame5StateFPQ24Game13VsGameSection:
/* 801C3514 001C0454  38 60 00 00 */	li r3, 0
/* 801C3518 001C0458  4E 80 00 20 */	blr 

.global "setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi"
"setComeAlive__Q24Game49FixedSizePelletMgr<Q34Game13PelletOtakara6Object>Fi":
/* 801C351C 001C045C  80 63 00 9C */	lwz r3, 0x9c(r3)
/* 801C3520 001C0460  38 00 00 00 */	li r0, 0
/* 801C3524 001C0464  7C 03 21 AE */	stbx r0, r3, r4
/* 801C3528 001C0468  4E 80 00 20 */	blr 

.if version == 1
.global initCardPellets__Q24Game13VsGameSectionFv
initCardPellets__Q24Game13VsGameSectionFv:
/* 801C352C 001C046C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C3530 001C0470  7C 08 02 A6 */	mflr r0
/* 801C3534 001C0474  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C3538 001C0478  38 00 00 0A */	li r0, 0xa
/* 801C353C 001C047C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 801C3540 001C0480  7C 7E 1B 78 */	mr r30, r3
/* 801C3544 001C0484  90 03 03 CC */	stw r0, 0x3f0(r3)
/* 801C3548 001C0488  3C 60 80 48 */	lis r3, lbl_8047FF98@ha
/* 801C354C 001C048C  3B E3 FF 98 */	addi r31, r3, lbl_8047FF98@l
/* 801C3550 001C0490  80 1E 03 CC */	lwz r0, 0x3f0(r30)
/* 801C3554 001C0494  54 03 10 3A */	slwi r3, r0, 2
/* 801C3558 001C0498  4B E6 0A 55 */	bl __nwa__FUl
/* 801C355C 001C049C  90 7E 03 D0 */	stw r3, 0x3f4(r30)
/* 801C3560 001C04A0  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 801C3564 001C04A4  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 801C3568 001C04A8  38 E0 00 00 */	li r7, 0
/* 801C356C 001C04AC  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C3570 001C04B0  90 01 00 18 */	stw r0, 0x18(r1)
/* 801C3574 001C04B4  38 00 FF FF */	li r0, -1
/* 801C3578 001C04B8  38 C0 00 FF */	li r6, 0xff
/* 801C357C 001C04BC  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 801C3580 001C04C0  38 A0 00 01 */	li r5, 1
/* 801C3584 001C04C4  90 61 00 18 */	stw r3, 0x18(r1)
/* 801C3588 001C04C8  38 81 00 08 */	addi r4, r1, 8
/* 801C358C 001C04CC  80 6D 84 78 */	lwz r3, cCoin__13VsOtakaraName@sda21(r13)
/* 801C3590 001C04D0  98 E1 00 34 */	stb r7, 0x34(r1)
/* 801C3594 001C04D4  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801C3598 001C04D8  98 C1 00 2E */	stb r6, 0x2e(r1)
/* 801C359C 001C04DC  90 E1 00 30 */	stw r7, 0x30(r1)
/* 801C35A0 001C04E0  98 E1 00 2F */	stb r7, 0x2f(r1)
/* 801C35A4 001C04E4  98 A1 00 1C */	stb r5, 0x1c(r1)
/* 801C35A8 001C04E8  98 E1 00 35 */	stb r7, 0x35(r1)
/* 801C35AC 001C04EC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C35B0 001C04F0  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C35B4 001C04F4  98 E1 00 36 */	stb r7, 0x36(r1)
/* 801C35B8 001C04F8  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C35BC 001C04FC  48 06 48 85 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C35C0 001C0500  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C35C4 001C0504  40 82 00 18 */	bne lbl_801C35DC
/* 801C35C8 001C0508  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C35CC 001C050C  38 BF 00 70 */	addi r5, r31, 0x70
/* 801C35D0 001C0510  38 80 07 04 */	li r4, 0x704
/* 801C35D4 001C0514  4C C6 31 82 */	crclr 6
/* 801C35D8 001C0518  4B E6 70 69 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C35DC:
/* 801C35DC 001C051C  A8 9D 02 58 */	lha r4, 0x258(r29)
/* 801C35E0 001C0520  38 00 00 01 */	li r0, 1
/* 801C35E4 001C0524  80 61 00 08 */	lwz r3, 8(r1)
/* 801C35E8 001C0528  3B 60 00 00 */	li r27, 0
/* 801C35EC 001C052C  90 81 00 28 */	stw r4, 0x28(r1)
/* 801C35F0 001C0530  3B 80 00 00 */	li r28, 0
/* 801C35F4 001C0534  80 9D 00 40 */	lwz r4, 0x40(r29)
/* 801C35F8 001C0538  90 81 00 20 */	stw r4, 0x20(r1)
/* 801C35FC 001C053C  98 61 00 2E */	stb r3, 0x2e(r1)
/* 801C3600 001C0540  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C3604 001C0544  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C3608 001C0548  48 00 00 64 */	b lbl_801C366C
lbl_801C360C:
/* 801C360C 001C054C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C3610 001C0550  38 81 00 18 */	addi r4, r1, 0x18
/* 801C3614 001C0554  4B FA 9E AD */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C3618 001C0558  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C361C 001C055C  41 82 00 34 */	beq lbl_801C3650
/* 801C3620 001C0560  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3624 001C0564  38 81 00 0C */	addi r4, r1, 0xc
/* 801C3628 001C0568  38 A0 00 00 */	li r5, 0
/* 801C362C 001C056C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801C3630 001C0570  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801C3634 001C0574  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C3638 001C0578  80 DE 03 D0 */	lwz r6, 0x3f4(r30)
/* 801C363C 001C057C  7F A6 E1 2E */	stwx r29, r6, r28
/* 801C3640 001C0580  4B F7 7B 69 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C3644 001C0584  80 7E 03 D0 */	lwz r3, 0x3f4(r30)
/* 801C3648 001C0588  7F A3 E1 2E */	stwx r29, r3, r28
/* 801C364C 001C058C  48 00 00 18 */	b lbl_801C3664
lbl_801C3650:
/* 801C3650 001C0590  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C3654 001C0594  38 BF 01 6C */	addi r5, r31, 0x16c
/* 801C3658 001C0598  38 80 07 15 */	li r4, 0x715
/* 801C365C 001C059C  4C C6 31 82 */	crclr 6
/* 801C3660 001C05A0  4B E6 6F E1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3664:
/* 801C3664 001C05A4  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3668 001C05A8  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C366C:
/* 801C366C 001C05AC  80 1E 03 CC */	lwz r0, 0x3f0(r30)
/* 801C3670 001C05B0  7C 1B 00 00 */	cmpw r27, r0
/* 801C3674 001C05B4  41 80 FF 98 */	blt lbl_801C360C
/* 801C3678 001C05B8  3B 60 00 00 */	li r27, 0
/* 801C367C 001C05BC  3B 80 00 00 */	li r28, 0
/* 801C3680 001C05C0  48 00 00 1C */	b lbl_801C369C
lbl_801C3684:
/* 801C3684 001C05C4  80 7E 03 D0 */	lwz r3, 0x3f4(r30)
/* 801C3688 001C05C8  38 80 00 00 */	li r4, 0
/* 801C368C 001C05CC  7C 63 E0 2E */	lwzx r3, r3, r28
/* 801C3690 001C05D0  4B F7 7A 61 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801C3694 001C05D4  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3698 001C05D8  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C369C:
/* 801C369C 001C05DC  80 1E 03 CC */	lwz r0, 0x3f0(r30)
/* 801C36A0 001C05E0  7C 1B 00 00 */	cmpw r27, r0
/* 801C36A4 001C05E4  41 80 FF E0 */	blt lbl_801C3684
/* 801C36A8 001C05E8  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 801C36AC 001C05EC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C36B0 001C05F0  7C 08 03 A6 */	mtlr r0
/* 801C36B4 001C05F4  38 21 00 60 */	addi r1, r1, 0x60
/* 801C36B8 001C05F8  4E 80 00 20 */	blr 
.else
.global initCardPellets__Q24Game13VsGameSectionFv
initCardPellets__Q24Game13VsGameSectionFv:
/* 801C352C 001C046C  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C3530 001C0470  7C 08 02 A6 */	mflr r0
/* 801C3534 001C0474  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C3538 001C0478  38 00 00 0A */	li r0, 0xa
/* 801C353C 001C047C  BF 61 00 4C */	stmw r27, 0x4c(r1)
/* 801C3540 001C0480  7C 7E 1B 78 */	mr r30, r3
/* 801C3544 001C0484  90 03 03 CC */	stw r0, 0x3cc(r3)
/* 801C3548 001C0488  3C 60 80 48 */	lis r3, lbl_8047FF98@ha
/* 801C354C 001C048C  3B E3 FF 98 */	addi r31, r3, lbl_8047FF98@l
/* 801C3550 001C0490  80 1E 03 CC */	lwz r0, 0x3cc(r30)
/* 801C3554 001C0494  54 03 10 3A */	slwi r3, r0, 2
/* 801C3558 001C0498  4B E6 0A 55 */	bl __nwa__FUl
/* 801C355C 001C049C  90 7E 03 D0 */	stw r3, 0x3d0(r30)
/* 801C3560 001C04A0  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 801C3564 001C04A4  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 801C3568 001C04A8  38 E0 00 00 */	li r7, 0
/* 801C356C 001C04AC  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C3570 001C04B0  90 01 00 18 */	stw r0, 0x18(r1)
/* 801C3574 001C04B4  38 00 FF FF */	li r0, -1
/* 801C3578 001C04B8  38 C0 00 FF */	li r6, 0xff
/* 801C357C 001C04BC  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 801C3580 001C04C0  38 A0 00 01 */	li r5, 1
/* 801C3584 001C04C4  90 61 00 18 */	stw r3, 0x18(r1)
/* 801C3588 001C04C8  38 81 00 08 */	addi r4, r1, 8
/* 801C358C 001C04CC  80 6D 84 78 */	lwz r3, cCoin__13VsOtakaraName@sda21(r13)
/* 801C3590 001C04D0  98 E1 00 34 */	stb r7, 0x34(r1)
/* 801C3594 001C04D4  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801C3598 001C04D8  98 C1 00 2E */	stb r6, 0x2e(r1)
/* 801C359C 001C04DC  90 E1 00 30 */	stw r7, 0x30(r1)
/* 801C35A0 001C04E0  98 E1 00 2F */	stb r7, 0x2f(r1)
/* 801C35A4 001C04E4  98 A1 00 1C */	stb r5, 0x1c(r1)
/* 801C35A8 001C04E8  98 E1 00 35 */	stb r7, 0x35(r1)
/* 801C35AC 001C04EC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C35B0 001C04F0  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C35B4 001C04F4  98 E1 00 36 */	stb r7, 0x36(r1)
/* 801C35B8 001C04F8  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C35BC 001C04FC  48 06 48 85 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C35C0 001C0500  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C35C4 001C0504  40 82 00 18 */	bne lbl_801C35DC
/* 801C35C8 001C0508  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C35CC 001C050C  38 BF 00 70 */	addi r5, r31, 0x70
/* 801C35D0 001C0510  38 80 07 04 */	li r4, 0x704
/* 801C35D4 001C0514  4C C6 31 82 */	crclr 6
/* 801C35D8 001C0518  4B E6 70 69 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C35DC:
/* 801C35DC 001C051C  A8 9D 02 58 */	lha r4, 0x258(r29)
/* 801C35E0 001C0520  38 00 00 01 */	li r0, 1
/* 801C35E4 001C0524  80 61 00 08 */	lwz r3, 8(r1)
/* 801C35E8 001C0528  3B 60 00 00 */	li r27, 0
/* 801C35EC 001C052C  90 81 00 28 */	stw r4, 0x28(r1)
/* 801C35F0 001C0530  3B 80 00 00 */	li r28, 0
/* 801C35F4 001C0534  80 9D 00 40 */	lwz r4, 0x40(r29)
/* 801C35F8 001C0538  90 81 00 20 */	stw r4, 0x20(r1)
/* 801C35FC 001C053C  98 61 00 2E */	stb r3, 0x2e(r1)
/* 801C3600 001C0540  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C3604 001C0544  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C3608 001C0548  48 00 00 64 */	b lbl_801C366C
lbl_801C360C:
/* 801C360C 001C054C  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C3610 001C0550  38 81 00 18 */	addi r4, r1, 0x18
/* 801C3614 001C0554  4B FA 9E AD */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C3618 001C0558  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C361C 001C055C  41 82 00 34 */	beq lbl_801C3650
/* 801C3620 001C0560  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3624 001C0564  38 81 00 0C */	addi r4, r1, 0xc
/* 801C3628 001C0568  38 A0 00 00 */	li r5, 0
/* 801C362C 001C056C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801C3630 001C0570  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801C3634 001C0574  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C3638 001C0578  80 DE 03 D0 */	lwz r6, 0x3d0(r30)
/* 801C363C 001C057C  7F A6 E1 2E */	stwx r29, r6, r28
/* 801C3640 001C0580  4B F7 7B 69 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C3644 001C0584  80 7E 03 D0 */	lwz r3, 0x3d0(r30)
/* 801C3648 001C0588  7F A3 E1 2E */	stwx r29, r3, r28
/* 801C364C 001C058C  48 00 00 18 */	b lbl_801C3664
lbl_801C3650:
/* 801C3650 001C0590  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C3654 001C0594  38 BF 01 6C */	addi r5, r31, 0x16c
/* 801C3658 001C0598  38 80 07 15 */	li r4, 0x715
/* 801C365C 001C059C  4C C6 31 82 */	crclr 6
/* 801C3660 001C05A0  4B E6 6F E1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3664:
/* 801C3664 001C05A4  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3668 001C05A8  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C366C:
/* 801C366C 001C05AC  80 1E 03 CC */	lwz r0, 0x3cc(r30)
/* 801C3670 001C05B0  7C 1B 00 00 */	cmpw r27, r0
/* 801C3674 001C05B4  41 80 FF 98 */	blt lbl_801C360C
/* 801C3678 001C05B8  3B 60 00 00 */	li r27, 0
/* 801C367C 001C05BC  3B 80 00 00 */	li r28, 0
/* 801C3680 001C05C0  48 00 00 1C */	b lbl_801C369C
lbl_801C3684:
/* 801C3684 001C05C4  80 7E 03 D0 */	lwz r3, 0x3d0(r30)
/* 801C3688 001C05C8  38 80 00 00 */	li r4, 0
/* 801C368C 001C05CC  7C 63 E0 2E */	lwzx r3, r3, r28
/* 801C3690 001C05D0  4B F7 7A 61 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801C3694 001C05D4  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3698 001C05D8  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C369C:
/* 801C369C 001C05DC  80 1E 03 CC */	lwz r0, 0x3cc(r30)
/* 801C36A0 001C05E0  7C 1B 00 00 */	cmpw r27, r0
/* 801C36A4 001C05E4  41 80 FF E0 */	blt lbl_801C3684
/* 801C36A8 001C05E8  BB 61 00 4C */	lmw r27, 0x4c(r1)
/* 801C36AC 001C05EC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C36B0 001C05F0  7C 08 03 A6 */	mtlr r0
/* 801C36B4 001C05F4  38 21 00 60 */	addi r1, r1, 0x60
/* 801C36B8 001C05F8  4E 80 00 20 */	blr 
.endif

.if version == 1
.global initCardGeneration__Q24Game13VsGameSectionFv
initCardGeneration__Q24Game13VsGameSectionFv:
/* 801C36BC 001C05FC  38 00 00 00 */	li r0, 0
/* 801C36C0 001C0600  C0 02 B1 E4 */	lfs f0, lbl_80519544@sda21(r2)
/* 801C36C4 001C0604  90 03 03 C4 */	stw r0, 0x3e8(r3)
/* 801C36C8 001C0608  D0 03 03 C8 */	stfs f0, 0x3ec(r3)
/* 801C36CC 001C060C  4E 80 00 20 */	blr 
.else
.global initCardGeneration__Q24Game13VsGameSectionFv
initCardGeneration__Q24Game13VsGameSectionFv:
/* 801C36BC 001C05FC  38 00 00 00 */	li r0, 0
/* 801C36C0 001C0600  C0 02 B1 E4 */	lfs f0, lbl_80519544@sda21(r2)
/* 801C36C4 001C0604  90 03 03 C4 */	stw r0, 0x3c4(r3)
/* 801C36C8 001C0608  D0 03 03 C8 */	stfs f0, 0x3c8(r3)
/* 801C36CC 001C060C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global updateCardGeneration__Q24Game13VsGameSectionFv
updateCardGeneration__Q24Game13VsGameSectionFv:
/* 801C36D0 001C0610  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801C36D4 001C0614  7C 08 02 A6 */	mflr r0
/* 801C36D8 001C0618  90 01 00 54 */	stw r0, 0x54(r1)
/* 801C36DC 001C061C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801C36E0 001C0620  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801C36E4 001C0624  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801C36E8 001C0628  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801C36EC 001C062C  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801C36F0 001C0630  7C 7D 1B 78 */	mr r29, r3
/* 801C36F4 001C0634  C0 82 B1 C4 */	lfs f4, lbl_80519524@sda21(r2)
/* 801C36F8 001C0638  C0 63 03 78 */	lfs f3, 0x39c(r3)
/* 801C36FC 001C063C  3B E0 00 00 */	li r31, 0
/* 801C3700 001C0640  C0 43 03 7C */	lfs f2, 0x3a0(r3)
/* 801C3704 001C0644  3B C0 00 05 */	li r30, 5
/* 801C3708 001C0648  C0 23 03 70 */	lfs f1, 0x394(r3)
/* 801C370C 001C064C  C0 03 03 74 */	lfs f0, 0x398(r3)
/* 801C3710 001C0650  EC 43 10 28 */	fsubs f2, f3, f2
/* 801C3714 001C0654  C3 E2 B1 E8 */	lfs f31, lbl_80519548@sda21(r2)
/* 801C3718 001C0658  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C371C 001C065C  C3 C2 B1 EC */	lfs f30, lbl_8051954C@sda21(r2)
/* 801C3720 001C0660  EC C2 00 28 */	fsubs f6, f2, f0
/* 801C3724 001C0664  FC 00 32 10 */	fabs f0, f6
/* 801C3728 001C0668  FC A0 00 18 */	frsp f5, f0
/* 801C372C 001C066C  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 801C3730 001C0670  41 80 00 A8 */	blt lbl_801C37D8
/* 801C3734 001C0674  FC 04 28 40 */	fcmpo cr0, f4, f5
/* 801C3738 001C0678  4C 40 13 82 */	cror 2, 0, 2
/* 801C373C 001C067C  7C 00 00 26 */	mfcr r0
/* 801C3740 001C0680  3C 60 43 30 */	lis r3, 0x4330
/* 801C3744 001C0684  54 00 1F FE */	rlwinm r0, r0, 3, 0x1f, 0x1f
/* 801C3748 001C0688  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C374C 001C068C  C8 62 B2 08 */	lfd f3, lbl_80519568@sda21(r2)
/* 801C3750 001C0690  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3754 001C0694  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C3758 001C0698  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C375C 001C069C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 801C3760 001C06A0  40 80 00 18 */	bge lbl_801C3778
/* 801C3764 001C06A4  C3 E2 B1 F0 */	lfs f31, lbl_80519550@sda21(r2)
/* 801C3768 001C06A8  3B C0 00 05 */	li r30, 5
/* 801C376C 001C06AC  C3 C2 B1 4C */	lfs f30, lbl_805194AC@sda21(r2)
/* 801C3770 001C06B0  3B E0 00 01 */	li r31, 1
/* 801C3774 001C06B4  48 00 00 64 */	b lbl_801C37D8
lbl_801C3778:
/* 801C3778 001C06B8  FC 1F 28 40 */	fcmpo cr0, f31, f5
/* 801C377C 001C06BC  FC 40 F8 90 */	fmr f2, f31
/* 801C3780 001C06C0  4C 40 13 82 */	cror 2, 0, 2
/* 801C3784 001C06C4  7C 00 00 26 */	mfcr r0
/* 801C3788 001C06C8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C378C 001C06CC  54 00 1F FE */	rlwinm r0, r0, 3, 0x1f, 0x1f
/* 801C3790 001C06D0  C0 02 B1 C8 */	lfs f0, lbl_80519528@sda21(r2)
/* 801C3794 001C06D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3798 001C06D8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801C379C 001C06DC  EC 21 18 28 */	fsubs f1, f1, f3
/* 801C37A0 001C06E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C37A4 001C06E4  40 80 00 18 */	bge lbl_801C37BC
/* 801C37A8 001C06E8  FF E0 20 90 */	fmr f31, f4
/* 801C37AC 001C06EC  3B C0 00 06 */	li r30, 6
/* 801C37B0 001C06F0  FF C0 10 90 */	fmr f30, f2
/* 801C37B4 001C06F4  3B E0 00 01 */	li r31, 1
/* 801C37B8 001C06F8  48 00 00 20 */	b lbl_801C37D8
lbl_801C37BC:
/* 801C37BC 001C06FC  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 801C37C0 001C0700  4C 40 13 82 */	cror 2, 0, 2
/* 801C37C4 001C0704  40 82 00 14 */	bne lbl_801C37D8
/* 801C37C8 001C0708  FF E0 20 90 */	fmr f31, f4
/* 801C37CC 001C070C  3B C0 00 07 */	li r30, 7
/* 801C37D0 001C0710  FF C0 10 90 */	fmr f30, f2
/* 801C37D4 001C0714  3B E0 00 01 */	li r31, 1
lbl_801C37D8:
/* 801C37D8 001C0718  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C37DC 001C071C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 801C37E0 001C0720  40 80 00 14 */	bge lbl_801C37F4
/* 801C37E4 001C0724  FC 20 F8 90 */	fmr f1, f31
/* 801C37E8 001C0728  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C37EC 001C072C  EF E0 F0 28 */	fsubs f31, f0, f30
/* 801C37F0 001C0730  EF C0 08 28 */	fsubs f30, f0, f1
lbl_801C37F4:
/* 801C37F4 001C0734  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801C37F8 001C0738  40 82 00 9C */	bne lbl_801C3894
/* 801C37FC 001C073C  C0 5D 03 64 */	lfs f2, 0x388(r29)
/* 801C3800 001C0740  C0 1D 03 60 */	lfs f0, 0x384(r29)
/* 801C3804 001C0744  C0 22 B1 4C */	lfs f1, lbl_805194AC@sda21(r2)
/* 801C3808 001C0748  EC 62 00 28 */	fsubs f3, f2, f0
/* 801C380C 001C074C  C0 02 B1 CC */	lfs f0, lbl_8051952C@sda21(r2)
/* 801C3810 001C0750  EC 63 00 72 */	fmuls f3, f3, f1
/* 801C3814 001C0754  FC 40 1A 10 */	fabs f2, f3
/* 801C3818 001C0758  FC 40 10 18 */	frsp f2, f2
/* 801C381C 001C075C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3820 001C0760  4C 40 13 82 */	cror 2, 0, 2
/* 801C3824 001C0764  41 82 00 70 */	beq lbl_801C3894
/* 801C3828 001C0768  C0 02 B1 C4 */	lfs f0, lbl_80519524@sda21(r2)
/* 801C382C 001C076C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3830 001C0770  40 80 00 10 */	bge lbl_801C3840
/* 801C3834 001C0774  C3 E2 B1 E8 */	lfs f31, lbl_80519548@sda21(r2)
/* 801C3838 001C0778  C3 C2 B1 F4 */	lfs f30, lbl_80519554@sda21(r2)
/* 801C383C 001C077C  48 00 00 3C */	b lbl_801C3878
lbl_801C3840:
/* 801C3840 001C0780  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801C3844 001C0784  40 80 00 10 */	bge lbl_801C3854
/* 801C3848 001C0788  FF C0 08 90 */	fmr f30, f1
/* 801C384C 001C078C  C3 E2 B1 E8 */	lfs f31, lbl_80519548@sda21(r2)
/* 801C3850 001C0790  48 00 00 28 */	b lbl_801C3878
lbl_801C3854:
/* 801C3854 001C0794  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C3858 001C0798  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C385C 001C079C  40 80 00 1C */	bge lbl_801C3878
/* 801C3860 001C07A0  C0 02 B1 F8 */	lfs f0, lbl_80519558@sda21(r2)
/* 801C3864 001C07A4  FF C0 08 90 */	fmr f30, f1
/* 801C3868 001C07A8  C3 E2 B1 F0 */	lfs f31, lbl_80519550@sda21(r2)
/* 801C386C 001C07AC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3870 001C07B0  40 81 00 08 */	ble lbl_801C3878
/* 801C3874 001C07B4  3B C0 00 05 */	li r30, 5
lbl_801C3878:
/* 801C3878 001C07B8  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C387C 001C07BC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C3880 001C07C0  40 80 00 14 */	bge lbl_801C3894
/* 801C3884 001C07C4  FC 20 F8 90 */	fmr f1, f31
/* 801C3888 001C07C8  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C388C 001C07CC  EF E0 F0 28 */	fsubs f31, f0, f30
/* 801C3890 001C07D0  EF C0 08 28 */	fsubs f30, f0, f1
lbl_801C3894:
/* 801C3894 001C07D4  3B 80 00 00 */	li r28, 0
/* 801C3898 001C07D8  3B 60 00 00 */	li r27, 0
/* 801C389C 001C07DC  93 9D 03 C4 */	stw r28, 0x3e8(r29)
/* 801C38A0 001C07E0  48 00 00 38 */	b lbl_801C38D8
lbl_801C38A4:
/* 801C38A4 001C07E4  80 7D 03 D0 */	lwz r3, 0x3f4(r29)
/* 801C38A8 001C07E8  7C 63 E0 2E */	lwzx r3, r3, r28
/* 801C38AC 001C07EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C38B0 001C07F0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C38B4 001C07F4  7D 89 03 A6 */	mtctr r12
/* 801C38B8 001C07F8  4E 80 04 21 */	bctrl 
/* 801C38BC 001C07FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C38C0 001C0800  41 82 00 10 */	beq lbl_801C38D0
/* 801C38C4 001C0804  80 7D 03 C4 */	lwz r3, 0x3e8(r29)
/* 801C38C8 001C0808  38 03 00 01 */	addi r0, r3, 1
/* 801C38CC 001C080C  90 1D 03 C4 */	stw r0, 0x3e8(r29)
lbl_801C38D0:
/* 801C38D0 001C0810  3B 9C 00 04 */	addi r28, r28, 4
/* 801C38D4 001C0814  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C38D8:
/* 801C38D8 001C0818  80 1D 03 CC */	lwz r0, 0x3f0(r29)
/* 801C38DC 001C081C  7C 1B 00 00 */	cmpw r27, r0
/* 801C38E0 001C0820  41 80 FF C4 */	blt lbl_801C38A4
/* 801C38E4 001C0824  80 7D 03 C4 */	lwz r3, 0x3e8(r29)
/* 801C38E8 001C0828  2C 03 00 04 */	cmpwi r3, 4
/* 801C38EC 001C082C  41 80 00 14 */	blt lbl_801C3900
/* 801C38F0 001C0830  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801C38F4 001C0834  41 82 00 90 */	beq lbl_801C3984
/* 801C38F8 001C0838  7C 03 F0 00 */	cmpw r3, r30
/* 801C38FC 001C083C  40 80 00 88 */	bge lbl_801C3984
lbl_801C3900:
/* 801C3900 001C0840  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C3904 001C0844  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801C3908 001C0848  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 801C390C 001C084C  41 82 00 0C */	beq lbl_801C3918
/* 801C3910 001C0850  C0 02 B1 FC */	lfs f0, lbl_8051955C@sda21(r2)
/* 801C3914 001C0854  EC 42 00 32 */	fmuls f2, f2, f0
lbl_801C3918:
/* 801C3918 001C0858  C0 3D 03 C8 */	lfs f1, 0x3ec(r29)
/* 801C391C 001C085C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3920 001C0860  EC 21 10 28 */	fsubs f1, f1, f2
/* 801C3924 001C0864  D0 3D 03 C8 */	stfs f1, 0x3ec(r29)
/* 801C3928 001C0868  C0 3D 03 C8 */	lfs f1, 0x3ec(r29)
/* 801C392C 001C086C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C3930 001C0870  4C 40 13 82 */	cror 2, 0, 2
/* 801C3934 001C0874  40 82 00 50 */	bne lbl_801C3984
/* 801C3938 001C0878  4B F0 5C 69 */	bl rand
/* 801C393C 001C087C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3940 001C0880  3C 00 43 30 */	lis r0, 0x4330
/* 801C3944 001C0884  90 61 00 14 */	stw r3, 0x14(r1)
/* 801C3948 001C0888  7F A3 EB 78 */	mr r3, r29
/* 801C394C 001C088C  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3950 001C0890  38 81 00 08 */	addi r4, r1, 8
/* 801C3954 001C0894  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C3958 001C0898  C0 42 B1 90 */	lfs f2, lbl_805194F0@sda21(r2)
/* 801C395C 001C089C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C3960 001C08A0  C0 22 B2 00 */	lfs f1, lbl_80519560@sda21(r2)
/* 801C3964 001C08A4  EC 60 18 28 */	fsubs f3, f0, f3
/* 801C3968 001C08A8  C0 02 B1 BC */	lfs f0, lbl_8051951C@sda21(r2)
/* 801C396C 001C08AC  EC 43 10 24 */	fdivs f2, f3, f2
/* 801C3970 001C08B0  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801C3974 001C08B4  D0 1D 03 C8 */	stfs f0, 0x3ec(r29)
/* 801C3978 001C08B8  D3 E1 00 08 */	stfs f31, 8(r1)
/* 801C397C 001C08BC  D3 C1 00 0C */	stfs f30, 0xc(r1)
/* 801C3980 001C08C0  48 00 00 41 */	bl dropCard__Q24Game13VsGameSectionFRQ34Game13VsGameSection11DropCardArg
lbl_801C3984:
/* 801C3984 001C08C4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801C3988 001C08C8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801C398C 001C08CC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801C3990 001C08D0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801C3994 001C08D4  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801C3998 001C08D8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801C399C 001C08DC  7C 08 03 A6 */	mtlr r0
/* 801C39A0 001C08E0  38 21 00 50 */	addi r1, r1, 0x50
/* 801C39A4 001C08E4  4E 80 00 20 */	blr 
.else
.global updateCardGeneration__Q24Game13VsGameSectionFv
updateCardGeneration__Q24Game13VsGameSectionFv:
/* 801C36D0 001C0610  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801C36D4 001C0614  7C 08 02 A6 */	mflr r0
/* 801C36D8 001C0618  90 01 00 54 */	stw r0, 0x54(r1)
/* 801C36DC 001C061C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801C36E0 001C0620  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801C36E4 001C0624  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801C36E8 001C0628  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801C36EC 001C062C  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801C36F0 001C0630  7C 7D 1B 78 */	mr r29, r3
/* 801C36F4 001C0634  C0 82 B1 C4 */	lfs f4, lbl_80519524@sda21(r2)
/* 801C36F8 001C0638  C0 63 03 78 */	lfs f3, 0x378(r3)
/* 801C36FC 001C063C  3B E0 00 00 */	li r31, 0
/* 801C3700 001C0640  C0 43 03 7C */	lfs f2, 0x37c(r3)
/* 801C3704 001C0644  3B C0 00 05 */	li r30, 5
/* 801C3708 001C0648  C0 23 03 70 */	lfs f1, 0x370(r3)
/* 801C370C 001C064C  C0 03 03 74 */	lfs f0, 0x374(r3)
/* 801C3710 001C0650  EC 43 10 28 */	fsubs f2, f3, f2
/* 801C3714 001C0654  C3 E2 B1 E8 */	lfs f31, lbl_80519548@sda21(r2)
/* 801C3718 001C0658  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C371C 001C065C  C3 C2 B1 EC */	lfs f30, lbl_8051954C@sda21(r2)
/* 801C3720 001C0660  EC C2 00 28 */	fsubs f6, f2, f0
/* 801C3724 001C0664  FC 00 32 10 */	fabs f0, f6
/* 801C3728 001C0668  FC A0 00 18 */	frsp f5, f0
/* 801C372C 001C066C  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 801C3730 001C0670  41 80 00 A8 */	blt lbl_801C37D8
/* 801C3734 001C0674  FC 04 28 40 */	fcmpo cr0, f4, f5
/* 801C3738 001C0678  4C 40 13 82 */	cror 2, 0, 2
/* 801C373C 001C067C  7C 00 00 26 */	mfcr r0
/* 801C3740 001C0680  3C 60 43 30 */	lis r3, 0x4330
/* 801C3744 001C0684  54 00 1F FE */	rlwinm r0, r0, 3, 0x1f, 0x1f
/* 801C3748 001C0688  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C374C 001C068C  C8 62 B2 08 */	lfd f3, lbl_80519568@sda21(r2)
/* 801C3750 001C0690  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3754 001C0694  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C3758 001C0698  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C375C 001C069C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 801C3760 001C06A0  40 80 00 18 */	bge lbl_801C3778
/* 801C3764 001C06A4  C3 E2 B1 F0 */	lfs f31, lbl_80519550@sda21(r2)
/* 801C3768 001C06A8  3B C0 00 05 */	li r30, 5
/* 801C376C 001C06AC  C3 C2 B1 4C */	lfs f30, lbl_805194AC@sda21(r2)
/* 801C3770 001C06B0  3B E0 00 01 */	li r31, 1
/* 801C3774 001C06B4  48 00 00 64 */	b lbl_801C37D8
lbl_801C3778:
/* 801C3778 001C06B8  FC 1F 28 40 */	fcmpo cr0, f31, f5
/* 801C377C 001C06BC  FC 40 F8 90 */	fmr f2, f31
/* 801C3780 001C06C0  4C 40 13 82 */	cror 2, 0, 2
/* 801C3784 001C06C4  7C 00 00 26 */	mfcr r0
/* 801C3788 001C06C8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801C378C 001C06CC  54 00 1F FE */	rlwinm r0, r0, 3, 0x1f, 0x1f
/* 801C3790 001C06D0  C0 02 B1 C8 */	lfs f0, lbl_80519528@sda21(r2)
/* 801C3794 001C06D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3798 001C06D8  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801C379C 001C06DC  EC 21 18 28 */	fsubs f1, f1, f3
/* 801C37A0 001C06E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C37A4 001C06E4  40 80 00 18 */	bge lbl_801C37BC
/* 801C37A8 001C06E8  FF E0 20 90 */	fmr f31, f4
/* 801C37AC 001C06EC  3B C0 00 06 */	li r30, 6
/* 801C37B0 001C06F0  FF C0 10 90 */	fmr f30, f2
/* 801C37B4 001C06F4  3B E0 00 01 */	li r31, 1
/* 801C37B8 001C06F8  48 00 00 20 */	b lbl_801C37D8
lbl_801C37BC:
/* 801C37BC 001C06FC  FC 00 28 40 */	fcmpo cr0, f0, f5
/* 801C37C0 001C0700  4C 40 13 82 */	cror 2, 0, 2
/* 801C37C4 001C0704  40 82 00 14 */	bne lbl_801C37D8
/* 801C37C8 001C0708  FF E0 20 90 */	fmr f31, f4
/* 801C37CC 001C070C  3B C0 00 07 */	li r30, 7
/* 801C37D0 001C0710  FF C0 10 90 */	fmr f30, f2
/* 801C37D4 001C0714  3B E0 00 01 */	li r31, 1
lbl_801C37D8:
/* 801C37D8 001C0718  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C37DC 001C071C  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 801C37E0 001C0720  40 80 00 14 */	bge lbl_801C37F4
/* 801C37E4 001C0724  FC 20 F8 90 */	fmr f1, f31
/* 801C37E8 001C0728  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C37EC 001C072C  EF E0 F0 28 */	fsubs f31, f0, f30
/* 801C37F0 001C0730  EF C0 08 28 */	fsubs f30, f0, f1
lbl_801C37F4:
/* 801C37F4 001C0734  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801C37F8 001C0738  40 82 00 9C */	bne lbl_801C3894
/* 801C37FC 001C073C  C0 5D 03 64 */	lfs f2, 0x364(r29)
/* 801C3800 001C0740  C0 1D 03 60 */	lfs f0, 0x360(r29)
/* 801C3804 001C0744  C0 22 B1 4C */	lfs f1, lbl_805194AC@sda21(r2)
/* 801C3808 001C0748  EC 62 00 28 */	fsubs f3, f2, f0
/* 801C380C 001C074C  C0 02 B1 CC */	lfs f0, lbl_8051952C@sda21(r2)
/* 801C3810 001C0750  EC 63 00 72 */	fmuls f3, f3, f1
/* 801C3814 001C0754  FC 40 1A 10 */	fabs f2, f3
/* 801C3818 001C0758  FC 40 10 18 */	frsp f2, f2
/* 801C381C 001C075C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3820 001C0760  4C 40 13 82 */	cror 2, 0, 2
/* 801C3824 001C0764  41 82 00 70 */	beq lbl_801C3894
/* 801C3828 001C0768  C0 02 B1 C4 */	lfs f0, lbl_80519524@sda21(r2)
/* 801C382C 001C076C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3830 001C0770  40 80 00 10 */	bge lbl_801C3840
/* 801C3834 001C0774  C3 E2 B1 E8 */	lfs f31, lbl_80519548@sda21(r2)
/* 801C3838 001C0778  C3 C2 B1 F4 */	lfs f30, lbl_80519554@sda21(r2)
/* 801C383C 001C077C  48 00 00 3C */	b lbl_801C3878
lbl_801C3840:
/* 801C3840 001C0780  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801C3844 001C0784  40 80 00 10 */	bge lbl_801C3854
/* 801C3848 001C0788  FF C0 08 90 */	fmr f30, f1
/* 801C384C 001C078C  C3 E2 B1 E8 */	lfs f31, lbl_80519548@sda21(r2)
/* 801C3850 001C0790  48 00 00 28 */	b lbl_801C3878
lbl_801C3854:
/* 801C3854 001C0794  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C3858 001C0798  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C385C 001C079C  40 80 00 1C */	bge lbl_801C3878
/* 801C3860 001C07A0  C0 02 B1 F8 */	lfs f0, lbl_80519558@sda21(r2)
/* 801C3864 001C07A4  FF C0 08 90 */	fmr f30, f1
/* 801C3868 001C07A8  C3 E2 B1 F0 */	lfs f31, lbl_80519550@sda21(r2)
/* 801C386C 001C07AC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C3870 001C07B0  40 81 00 08 */	ble lbl_801C3878
/* 801C3874 001C07B4  3B C0 00 05 */	li r30, 5
lbl_801C3878:
/* 801C3878 001C07B8  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C387C 001C07BC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C3880 001C07C0  40 80 00 14 */	bge lbl_801C3894
/* 801C3884 001C07C4  FC 20 F8 90 */	fmr f1, f31
/* 801C3888 001C07C8  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C388C 001C07CC  EF E0 F0 28 */	fsubs f31, f0, f30
/* 801C3890 001C07D0  EF C0 08 28 */	fsubs f30, f0, f1
lbl_801C3894:
/* 801C3894 001C07D4  3B 80 00 00 */	li r28, 0
/* 801C3898 001C07D8  3B 60 00 00 */	li r27, 0
/* 801C389C 001C07DC  93 9D 03 C4 */	stw r28, 0x3c4(r29)
/* 801C38A0 001C07E0  48 00 00 38 */	b lbl_801C38D8
lbl_801C38A4:
/* 801C38A4 001C07E4  80 7D 03 D0 */	lwz r3, 0x3d0(r29)
/* 801C38A8 001C07E8  7C 63 E0 2E */	lwzx r3, r3, r28
/* 801C38AC 001C07EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801C38B0 001C07F0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C38B4 001C07F4  7D 89 03 A6 */	mtctr r12
/* 801C38B8 001C07F8  4E 80 04 21 */	bctrl 
/* 801C38BC 001C07FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C38C0 001C0800  41 82 00 10 */	beq lbl_801C38D0
/* 801C38C4 001C0804  80 7D 03 C4 */	lwz r3, 0x3c4(r29)
/* 801C38C8 001C0808  38 03 00 01 */	addi r0, r3, 1
/* 801C38CC 001C080C  90 1D 03 C4 */	stw r0, 0x3c4(r29)
lbl_801C38D0:
/* 801C38D0 001C0810  3B 9C 00 04 */	addi r28, r28, 4
/* 801C38D4 001C0814  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C38D8:
/* 801C38D8 001C0818  80 1D 03 CC */	lwz r0, 0x3cc(r29)
/* 801C38DC 001C081C  7C 1B 00 00 */	cmpw r27, r0
/* 801C38E0 001C0820  41 80 FF C4 */	blt lbl_801C38A4
/* 801C38E4 001C0824  80 7D 03 C4 */	lwz r3, 0x3c4(r29)
/* 801C38E8 001C0828  2C 03 00 04 */	cmpwi r3, 4
/* 801C38EC 001C082C  41 80 00 14 */	blt lbl_801C3900
/* 801C38F0 001C0830  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801C38F4 001C0834  41 82 00 90 */	beq lbl_801C3984
/* 801C38F8 001C0838  7C 03 F0 00 */	cmpw r3, r30
/* 801C38FC 001C083C  40 80 00 88 */	bge lbl_801C3984
lbl_801C3900:
/* 801C3900 001C0840  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801C3904 001C0844  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801C3908 001C0848  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 801C390C 001C084C  41 82 00 0C */	beq lbl_801C3918
/* 801C3910 001C0850  C0 02 B1 FC */	lfs f0, lbl_8051955C@sda21(r2)
/* 801C3914 001C0854  EC 42 00 32 */	fmuls f2, f2, f0
lbl_801C3918:
/* 801C3918 001C0858  C0 3D 03 C8 */	lfs f1, 0x3c8(r29)
/* 801C391C 001C085C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3920 001C0860  EC 21 10 28 */	fsubs f1, f1, f2
/* 801C3924 001C0864  D0 3D 03 C8 */	stfs f1, 0x3c8(r29)
/* 801C3928 001C0868  C0 3D 03 C8 */	lfs f1, 0x3c8(r29)
/* 801C392C 001C086C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C3930 001C0870  4C 40 13 82 */	cror 2, 0, 2
/* 801C3934 001C0874  40 82 00 50 */	bne lbl_801C3984
/* 801C3938 001C0878  4B F0 5C 69 */	bl rand
/* 801C393C 001C087C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3940 001C0880  3C 00 43 30 */	lis r0, 0x4330
/* 801C3944 001C0884  90 61 00 14 */	stw r3, 0x14(r1)
/* 801C3948 001C0888  7F A3 EB 78 */	mr r3, r29
/* 801C394C 001C088C  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3950 001C0890  38 81 00 08 */	addi r4, r1, 8
/* 801C3954 001C0894  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C3958 001C0898  C0 42 B1 90 */	lfs f2, lbl_805194F0@sda21(r2)
/* 801C395C 001C089C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801C3960 001C08A0  C0 22 B2 00 */	lfs f1, lbl_80519560@sda21(r2)
/* 801C3964 001C08A4  EC 60 18 28 */	fsubs f3, f0, f3
/* 801C3968 001C08A8  C0 02 B1 BC */	lfs f0, lbl_8051951C@sda21(r2)
/* 801C396C 001C08AC  EC 43 10 24 */	fdivs f2, f3, f2
/* 801C3970 001C08B0  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 801C3974 001C08B4  D0 1D 03 C8 */	stfs f0, 0x3c8(r29)
/* 801C3978 001C08B8  D3 E1 00 08 */	stfs f31, 8(r1)
/* 801C397C 001C08BC  D3 C1 00 0C */	stfs f30, 0xc(r1)
/* 801C3980 001C08C0  48 00 00 41 */	bl dropCard__Q24Game13VsGameSectionFRQ34Game13VsGameSection11DropCardArg
lbl_801C3984:
/* 801C3984 001C08C4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801C3988 001C08C8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801C398C 001C08CC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801C3990 001C08D0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801C3994 001C08D4  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801C3998 001C08D8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801C399C 001C08DC  7C 08 03 A6 */	mtlr r0
/* 801C39A0 001C08E0  38 21 00 50 */	addi r1, r1, 0x50
/* 801C39A4 001C08E4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global useCard__Q24Game13VsGameSectionFv
useCard__Q24Game13VsGameSectionFv:
/* 801C39A8 001C08E8  80 83 03 C4 */	lwz r4, 0x3e8(r3)
/* 801C39AC 001C08EC  2C 04 00 00 */	cmpwi r4, 0
/* 801C39B0 001C08F0  4C 81 00 20 */	blelr 
/* 801C39B4 001C08F4  38 04 FF FF */	addi r0, r4, -1
/* 801C39B8 001C08F8  90 03 03 C4 */	stw r0, 0x3e8(r3)
/* 801C39BC 001C08FC  4E 80 00 20 */	blr 
.else
.global useCard__Q24Game13VsGameSectionFv
useCard__Q24Game13VsGameSectionFv:
/* 801C39A8 001C08E8  80 83 03 C4 */	lwz r4, 0x3c4(r3)
/* 801C39AC 001C08EC  2C 04 00 00 */	cmpwi r4, 0
/* 801C39B0 001C08F0  4C 81 00 20 */	blelr 
/* 801C39B4 001C08F4  38 04 FF FF */	addi r0, r4, -1
/* 801C39B8 001C08F8  90 03 03 C4 */	stw r0, 0x3c4(r3)
/* 801C39BC 001C08FC  4E 80 00 20 */	blr 
.endif

.if version == 1
.global dropCard__Q24Game13VsGameSectionFRQ34Game13VsGameSection11DropCardArg
dropCard__Q24Game13VsGameSectionFRQ34Game13VsGameSection11DropCardArg:
/* 801C39C0 001C0900  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 801C39C4 001C0904  7C 08 02 A6 */	mflr r0
/* 801C39C8 001C0908  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801C39CC 001C090C  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 801C39D0 001C0910  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 801C39D4 001C0914  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 801C39D8 001C0918  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 801C39DC 001C091C  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 801C39E0 001C0920  93 81 00 D0 */	stw r28, 0xd0(r1)
/* 801C39E4 001C0924  7C 85 23 78 */	mr r5, r4
/* 801C39E8 001C0928  7C 7E 1B 78 */	mr r30, r3
/* 801C39EC 001C092C  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 801C39F0 001C0930  38 81 00 28 */	addi r4, r1, 0x28
/* 801C39F4 001C0934  C0 25 00 00 */	lfs f1, 0(r5)
/* 801C39F8 001C0938  C0 45 00 04 */	lfs f2, 4(r5)
/* 801C39FC 001C093C  48 08 11 41 */	bl "getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3<f>ff"
/* 801C3A00 001C0940  4B F0 5B A1 */	bl rand
/* 801C3A04 001C0944  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3A08 001C0948  3C 00 43 30 */	lis r0, 0x4330
/* 801C3A0C 001C094C  90 61 00 AC */	stw r3, 0xac(r1)
/* 801C3A10 001C0950  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3A14 001C0954  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801C3A18 001C0958  C0 22 B1 90 */	lfs f1, lbl_805194F0@sda21(r2)
/* 801C3A1C 001C095C  C8 41 00 A8 */	lfd f2, 0xa8(r1)
/* 801C3A20 001C0960  C0 02 B1 C0 */	lfs f0, lbl_80519520@sda21(r2)
/* 801C3A24 001C0964  EC 42 18 28 */	fsubs f2, f2, f3
/* 801C3A28 001C0968  EC 22 08 24 */	fdivs f1, f2, f1
/* 801C3A2C 001C096C  EF E0 00 72 */	fmuls f31, f0, f1
/* 801C3A30 001C0970  4B F0 5B 71 */	bl rand
/* 801C3A34 001C0974  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3A38 001C0978  3C 00 43 30 */	lis r0, 0x4330
/* 801C3A3C 001C097C  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 801C3A40 001C0980  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3A44 001C0984  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 801C3A48 001C0988  C0 42 B1 90 */	lfs f2, lbl_805194F0@sda21(r2)
/* 801C3A4C 001C098C  C8 01 00 B0 */	lfd f0, 0xb0(r1)
/* 801C3A50 001C0990  C0 22 B1 9C */	lfs f1, lbl_805194FC@sda21(r2)
/* 801C3A54 001C0994  EC 60 18 28 */	fsubs f3, f0, f3
/* 801C3A58 001C0998  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3A5C 001C099C  EC 43 10 24 */	fdivs f2, f3, f2
/* 801C3A60 001C09A0  EC 61 00 B2 */	fmuls f3, f1, f2
/* 801C3A64 001C09A4  FC 20 18 90 */	fmr f1, f3
/* 801C3A68 001C09A8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C3A6C 001C09AC  40 80 00 08 */	bge lbl_801C3A74
/* 801C3A70 001C09B0  FC 20 18 50 */	fneg f1, f3
lbl_801C3A74:
/* 801C3A74 001C09B4  C0 42 B1 AC */	lfs f2, lbl_8051950C@sda21(r2)
/* 801C3A78 001C09B8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C3A7C 001C09BC  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3A80 001C09C0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 801C3A84 001C09C4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801C3A88 001C09C8  C0 81 00 28 */	lfs f4, 0x28(r1)
/* 801C3A8C 001C09CC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C3A90 001C09D0  FC 00 08 1E */	fctiwz f0, f1
/* 801C3A94 001C09D4  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 801C3A98 001C09D8  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 801C3A9C 001C09DC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C3AA0 001C09E0  7C 64 02 14 */	add r3, r4, r0
/* 801C3AA4 001C09E4  C0 03 00 04 */	lfs f0, 4(r3)
/* 801C3AA8 001C09E8  EC BF 00 32 */	fmuls f5, f31, f0
/* 801C3AAC 001C09EC  40 80 00 28 */	bge lbl_801C3AD4
/* 801C3AB0 001C09F0  C0 02 B1 B0 */	lfs f0, lbl_80519510@sda21(r2)
/* 801C3AB4 001C09F4  EC 03 00 32 */	fmuls f0, f3, f0
/* 801C3AB8 001C09F8  FC 00 00 1E */	fctiwz f0, f0
/* 801C3ABC 001C09FC  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 801C3AC0 001C0A00  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801C3AC4 001C0A04  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C3AC8 001C0A08  7C 04 04 2E */	lfsx f0, r4, r0
/* 801C3ACC 001C0A0C  FC 00 00 50 */	fneg f0, f0
/* 801C3AD0 001C0A10  48 00 00 1C */	b lbl_801C3AEC
lbl_801C3AD4:
/* 801C3AD4 001C0A14  EC 03 00 B2 */	fmuls f0, f3, f2
/* 801C3AD8 001C0A18  FC 00 00 1E */	fctiwz f0, f0
/* 801C3ADC 001C0A1C  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 801C3AE0 001C0A20  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 801C3AE4 001C0A24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C3AE8 001C0A28  7C 04 04 2E */	lfsx f0, r4, r0
lbl_801C3AEC:
/* 801C3AEC 001C0A2C  EC 7F 00 32 */	fmuls f3, f31, f0
/* 801C3AF0 001C0A30  38 E0 00 00 */	li r7, 0
/* 801C3AF4 001C0A34  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 801C3AF8 001C0A38  38 00 FF FF */	li r0, -1
/* 801C3AFC 001C0A3C  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 801C3B00 001C0A40  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 801C3B04 001C0A44  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C3B08 001C0A48  EC 64 18 2A */	fadds f3, f4, f3
/* 801C3B0C 001C0A4C  EC 00 28 2A */	fadds f0, f0, f5
/* 801C3B10 001C0A50  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 801C3B14 001C0A54  EC 22 08 2A */	fadds f1, f2, f1
/* 801C3B18 001C0A58  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C3B1C 001C0A5C  38 C0 00 FF */	li r6, 0xff
/* 801C3B20 001C0A60  38 A0 00 01 */	li r5, 1
/* 801C3B24 001C0A64  90 81 00 4C */	stw r4, 0x4c(r1)
/* 801C3B28 001C0A68  39 03 A2 B8 */	addi r8, r3, __vt__Q24Game13PelletInitArg@l
/* 801C3B2C 001C0A6C  80 6D 84 78 */	lwz r3, cCoin__13VsOtakaraName@sda21(r13)
/* 801C3B30 001C0A70  38 81 00 08 */	addi r4, r1, 8
/* 801C3B34 001C0A74  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 801C3B38 001C0A78  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801C3B3C 001C0A7C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C3B40 001C0A80  91 01 00 4C */	stw r8, 0x4c(r1)
/* 801C3B44 001C0A84  98 E1 00 68 */	stb r7, 0x68(r1)
/* 801C3B48 001C0A88  B0 E1 00 60 */	sth r7, 0x60(r1)
/* 801C3B4C 001C0A8C  98 C1 00 62 */	stb r6, 0x62(r1)
/* 801C3B50 001C0A90  90 E1 00 64 */	stw r7, 0x64(r1)
/* 801C3B54 001C0A94  98 E1 00 63 */	stb r7, 0x63(r1)
/* 801C3B58 001C0A98  98 A1 00 50 */	stb r5, 0x50(r1)
/* 801C3B5C 001C0A9C  98 E1 00 69 */	stb r7, 0x69(r1)
/* 801C3B60 001C0AA0  90 01 00 70 */	stw r0, 0x70(r1)
/* 801C3B64 001C0AA4  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801C3B68 001C0AA8  98 E1 00 6A */	stb r7, 0x6a(r1)
/* 801C3B6C 001C0AAC  98 E1 00 6B */	stb r7, 0x6b(r1)
/* 801C3B70 001C0AB0  48 06 42 D1 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C3B74 001C0AB4  7C 7F 1B 79 */	or. r31, r3, r3
/* 801C3B78 001C0AB8  40 82 00 20 */	bne lbl_801C3B98
/* 801C3B7C 001C0ABC  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C3B80 001C0AC0  3C A0 80 48 */	lis r5, lbl_80480008@ha
/* 801C3B84 001C0AC4  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C3B88 001C0AC8  38 80 06 DF */	li r4, 0x6df
/* 801C3B8C 001C0ACC  38 A5 00 08 */	addi r5, r5, lbl_80480008@l
/* 801C3B90 001C0AD0  4C C6 31 82 */	crclr 6
/* 801C3B94 001C0AD4  4B E6 6A AD */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3B98:
/* 801C3B98 001C0AD8  A8 9F 02 58 */	lha r4, 0x258(r31)
/* 801C3B9C 001C0ADC  3B A0 00 00 */	li r29, 0
/* 801C3BA0 001C0AE0  80 61 00 08 */	lwz r3, 8(r1)
/* 801C3BA4 001C0AE4  38 00 00 01 */	li r0, 1
/* 801C3BA8 001C0AE8  90 81 00 5C */	stw r4, 0x5c(r1)
/* 801C3BAC 001C0AEC  7F BC EB 78 */	mr r28, r29
/* 801C3BB0 001C0AF0  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 801C3BB4 001C0AF4  90 81 00 54 */	stw r4, 0x54(r1)
/* 801C3BB8 001C0AF8  98 61 00 62 */	stb r3, 0x62(r1)
/* 801C3BBC 001C0AFC  98 01 00 68 */	stb r0, 0x68(r1)
/* 801C3BC0 001C0B00  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801C3BC4 001C0B04  90 01 00 70 */	stw r0, 0x70(r1)
/* 801C3BC8 001C0B08  48 00 00 68 */	b lbl_801C3C30
lbl_801C3BCC:
/* 801C3BCC 001C0B0C  80 7E 03 D0 */	lwz r3, 0x3f4(r30)
/* 801C3BD0 001C0B10  7F E3 E0 2E */	lwzx r31, r3, r28
/* 801C3BD4 001C0B14  7F E3 FB 78 */	mr r3, r31
/* 801C3BD8 001C0B18  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C3BDC 001C0B1C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C3BE0 001C0B20  7D 89 03 A6 */	mtctr r12
/* 801C3BE4 001C0B24  4E 80 04 21 */	bctrl 
/* 801C3BE8 001C0B28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C3BEC 001C0B2C  40 82 00 3C */	bne lbl_801C3C28
/* 801C3BF0 001C0B30  7F E3 FB 78 */	mr r3, r31
/* 801C3BF4 001C0B34  4B FA 4B A9 */	bl getStateID__Q24Game6PelletFv
/* 801C3BF8 001C0B38  2C 03 00 00 */	cmpwi r3, 0
/* 801C3BFC 001C0B3C  40 82 00 2C */	bne lbl_801C3C28
/* 801C3C00 001C0B40  80 6D 95 20 */	lwz r3, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 801C3C04 001C0B44  80 9F 04 40 */	lwz r4, 0x440(r31)
/* 801C3C08 001C0B48  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3C0C 001C0B4C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801C3C10 001C0B50  7D 89 03 A6 */	mtctr r12
/* 801C3C14 001C0B54  4E 80 04 21 */	bctrl 
/* 801C3C18 001C0B58  7F E3 FB 78 */	mr r3, r31
/* 801C3C1C 001C0B5C  38 81 00 4C */	addi r4, r1, 0x4c
/* 801C3C20 001C0B60  4B F7 73 A9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801C3C24 001C0B64  48 00 00 1C */	b lbl_801C3C40
lbl_801C3C28:
/* 801C3C28 001C0B68  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3C2C 001C0B6C  3B BD 00 01 */	addi r29, r29, 1
lbl_801C3C30:
/* 801C3C30 001C0B70  80 1E 03 CC */	lwz r0, 0x3f0(r30)
/* 801C3C34 001C0B74  7C 1D 00 00 */	cmpw r29, r0
/* 801C3C38 001C0B78  41 80 FF 94 */	blt lbl_801C3BCC
/* 801C3C3C 001C0B7C  3B E0 00 00 */	li r31, 0
lbl_801C3C40:
/* 801C3C40 001C0B80  28 1F 00 00 */	cmplwi r31, 0
/* 801C3C44 001C0B84  41 82 01 10 */	beq lbl_801C3D54
/* 801C3C48 001C0B88  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801C3C4C 001C0B8C  7F E3 FB 78 */	mr r3, r31
/* 801C3C50 001C0B90  C0 02 B2 10 */	lfs f0, lbl_80519570@sda21(r2)
/* 801C3C54 001C0B94  38 81 00 28 */	addi r4, r1, 0x28
/* 801C3C58 001C0B98  38 A0 00 00 */	li r5, 0
/* 801C3C5C 001C0B9C  EC 01 00 2A */	fadds f0, f1, f0
/* 801C3C60 001C0BA0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801C3C64 001C0BA4  4B F7 75 45 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C3C68 001C0BA8  80 A1 00 28 */	lwz r5, 0x28(r1)
/* 801C3C6C 001C0BAC  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 801C3C70 001C0BB0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801C3C74 001C0BB4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801C3C78 001C0BB8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801C3C7C 001C0BBC  39 06 A7 F8 */	addi r8, r6, __vt__Q23efx5TBase@l
/* 801C3C80 001C0BC0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C3C84 001C0BC4  38 C3 A7 EC */	addi r6, r3, __vt__Q23efx3Arg@l
/* 801C3C88 001C0BC8  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C3C8C 001C0BCC  3C A0 80 4F */	lis r5, __vt__Q23efx13TEnemyApsmoke@ha
/* 801C3C90 001C0BD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3C94 001C0BD4  3C 60 80 4B */	lis r3, __vt__Q23efx12ArgEnemyType@ha
/* 801C3C98 001C0BD8  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801C3C9C 001C0BDC  38 00 00 01 */	li r0, 1
/* 801C3CA0 001C0BE0  90 81 00 18 */	stw r4, 0x18(r1)
/* 801C3CA4 001C0BE4  38 E5 85 98 */	addi r7, r5, __vt__Q23efx13TEnemyApsmoke@l
/* 801C3CA8 001C0BE8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801C3CAC 001C0BEC  38 A3 A7 E0 */	addi r5, r3, __vt__Q23efx12ArgEnemyType@l
/* 801C3CB0 001C0BF0  91 01 00 0C */	stw r8, 0xc(r1)
/* 801C3CB4 001C0BF4  38 61 00 0C */	addi r3, r1, 0xc
/* 801C3CB8 001C0BF8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801C3CBC 001C0BFC  38 81 00 34 */	addi r4, r1, 0x34
/* 801C3CC0 001C0C00  90 C1 00 34 */	stw r6, 0x34(r1)
/* 801C3CC4 001C0C04  90 E1 00 0C */	stw r7, 0xc(r1)
/* 801C3CC8 001C0C08  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 801C3CCC 001C0C0C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 801C3CD0 001C0C10  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801C3CD4 001C0C14  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801C3CD8 001C0C18  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C3CDC 001C0C1C  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801C3CE0 001C0C20  48 20 54 D9 */	bl create__Q23efx13TEnemyApsmokeFPQ23efx3Arg
/* 801C3CE4 001C0C24  4B F0 58 BD */	bl rand
/* 801C3CE8 001C0C28  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3CEC 001C0C2C  3C 00 43 30 */	lis r0, 0x4330
/* 801C3CF0 001C0C30  90 61 00 CC */	stw r3, 0xcc(r1)
/* 801C3CF4 001C0C34  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801C3CF8 001C0C38  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C3CFC 001C0C3C  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 801C3D00 001C0C40  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 801C3D04 001C0C44  38 61 00 74 */	addi r3, r1, 0x74
/* 801C3D08 001C0C48  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3D0C 001C0C4C  38 A1 00 1C */	addi r5, r1, 0x1c
/* 801C3D10 001C0C50  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 801C3D14 001C0C54  C0 42 B1 90 */	lfs f2, lbl_805194F0@sda21(r2)
/* 801C3D18 001C0C58  EC 60 18 28 */	fsubs f3, f0, f3
/* 801C3D1C 001C0C5C  C0 02 B1 9C */	lfs f0, lbl_805194FC@sda21(r2)
/* 801C3D20 001C0C60  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801C3D24 001C0C64  EC 43 10 24 */	fdivs f2, f3, f2
/* 801C3D28 001C0C68  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801C3D2C 001C0C6C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801C3D30 001C0C70  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801C3D34 001C0C74  48 26 4B 55 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801C3D38 001C0C78  7F E3 FB 78 */	mr r3, r31
/* 801C3D3C 001C0C7C  38 81 00 74 */	addi r4, r1, 0x74
/* 801C3D40 001C0C80  4B FA 47 8D */	bl setOrientation__Q24Game6PelletFR7Matrixf
/* 801C3D44 001C0C84  80 7E 03 C4 */	lwz r3, 0x3e8(r30)
/* 801C3D48 001C0C88  38 03 00 01 */	addi r0, r3, 1
/* 801C3D4C 001C0C8C  90 1E 03 C4 */	stw r0, 0x3e8(r30)
/* 801C3D50 001C0C90  48 00 00 3C */	b lbl_801C3D8C
lbl_801C3D54:
/* 801C3D54 001C0C94  3B A0 00 00 */	li r29, 0
/* 801C3D58 001C0C98  3B 80 00 00 */	li r28, 0
/* 801C3D5C 001C0C9C  48 00 00 24 */	b lbl_801C3D80
lbl_801C3D60:
/* 801C3D60 001C0CA0  80 7E 03 D0 */	lwz r3, 0x3f4(r30)
/* 801C3D64 001C0CA4  7C 63 E0 2E */	lwzx r3, r3, r28
/* 801C3D68 001C0CA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3D6C 001C0CAC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C3D70 001C0CB0  7D 89 03 A6 */	mtctr r12
/* 801C3D74 001C0CB4  4E 80 04 21 */	bctrl 
/* 801C3D78 001C0CB8  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3D7C 001C0CBC  3B BD 00 01 */	addi r29, r29, 1
lbl_801C3D80:
/* 801C3D80 001C0CC0  80 1E 03 CC */	lwz r0, 0x3f0(r30)
/* 801C3D84 001C0CC4  7C 1D 00 00 */	cmpw r29, r0
/* 801C3D88 001C0CC8  41 80 FF D8 */	blt lbl_801C3D60
lbl_801C3D8C:
/* 801C3D8C 001C0CCC  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 801C3D90 001C0CD0  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 801C3D94 001C0CD4  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 801C3D98 001C0CD8  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 801C3D9C 001C0CDC  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 801C3DA0 001C0CE0  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 801C3DA4 001C0CE4  83 81 00 D0 */	lwz r28, 0xd0(r1)
/* 801C3DA8 001C0CE8  7C 08 03 A6 */	mtlr r0
/* 801C3DAC 001C0CEC  38 21 00 F0 */	addi r1, r1, 0xf0
/* 801C3DB0 001C0CF0  4E 80 00 20 */	blr 
.else
.global dropCard__Q24Game13VsGameSectionFRQ34Game13VsGameSection11DropCardArg
dropCard__Q24Game13VsGameSectionFRQ34Game13VsGameSection11DropCardArg:
/* 801C39C0 001C0900  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 801C39C4 001C0904  7C 08 02 A6 */	mflr r0
/* 801C39C8 001C0908  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 801C39CC 001C090C  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 801C39D0 001C0910  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 801C39D4 001C0914  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 801C39D8 001C0918  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 801C39DC 001C091C  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 801C39E0 001C0920  93 81 00 D0 */	stw r28, 0xd0(r1)
/* 801C39E4 001C0924  7C 85 23 78 */	mr r5, r4
/* 801C39E8 001C0928  7C 7E 1B 78 */	mr r30, r3
/* 801C39EC 001C092C  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 801C39F0 001C0930  38 81 00 28 */	addi r4, r1, 0x28
/* 801C39F4 001C0934  C0 25 00 00 */	lfs f1, 0(r5)
/* 801C39F8 001C0938  C0 45 00 04 */	lfs f2, 4(r5)
/* 801C39FC 001C093C  48 08 11 41 */	bl "getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3<f>ff"
/* 801C3A00 001C0940  4B F0 5B A1 */	bl rand
/* 801C3A04 001C0944  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3A08 001C0948  3C 00 43 30 */	lis r0, 0x4330
/* 801C3A0C 001C094C  90 61 00 AC */	stw r3, 0xac(r1)
/* 801C3A10 001C0950  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3A14 001C0954  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801C3A18 001C0958  C0 22 B1 90 */	lfs f1, lbl_805194F0@sda21(r2)
/* 801C3A1C 001C095C  C8 41 00 A8 */	lfd f2, 0xa8(r1)
/* 801C3A20 001C0960  C0 02 B1 C0 */	lfs f0, lbl_80519520@sda21(r2)
/* 801C3A24 001C0964  EC 42 18 28 */	fsubs f2, f2, f3
/* 801C3A28 001C0968  EC 22 08 24 */	fdivs f1, f2, f1
/* 801C3A2C 001C096C  EF E0 00 72 */	fmuls f31, f0, f1
/* 801C3A30 001C0970  4B F0 5B 71 */	bl rand
/* 801C3A34 001C0974  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3A38 001C0978  3C 00 43 30 */	lis r0, 0x4330
/* 801C3A3C 001C097C  90 61 00 B4 */	stw r3, 0xb4(r1)
/* 801C3A40 001C0980  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3A44 001C0984  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 801C3A48 001C0988  C0 42 B1 90 */	lfs f2, lbl_805194F0@sda21(r2)
/* 801C3A4C 001C098C  C8 01 00 B0 */	lfd f0, 0xb0(r1)
/* 801C3A50 001C0990  C0 22 B1 9C */	lfs f1, lbl_805194FC@sda21(r2)
/* 801C3A54 001C0994  EC 60 18 28 */	fsubs f3, f0, f3
/* 801C3A58 001C0998  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3A5C 001C099C  EC 43 10 24 */	fdivs f2, f3, f2
/* 801C3A60 001C09A0  EC 61 00 B2 */	fmuls f3, f1, f2
/* 801C3A64 001C09A4  FC 20 18 90 */	fmr f1, f3
/* 801C3A68 001C09A8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C3A6C 001C09AC  40 80 00 08 */	bge lbl_801C3A74
/* 801C3A70 001C09B0  FC 20 18 50 */	fneg f1, f3
lbl_801C3A74:
/* 801C3A74 001C09B4  C0 42 B1 AC */	lfs f2, lbl_8051950C@sda21(r2)
/* 801C3A78 001C09B8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801C3A7C 001C09BC  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C3A80 001C09C0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 801C3A84 001C09C4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801C3A88 001C09C8  C0 81 00 28 */	lfs f4, 0x28(r1)
/* 801C3A8C 001C09CC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C3A90 001C09D0  FC 00 08 1E */	fctiwz f0, f1
/* 801C3A94 001C09D4  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 801C3A98 001C09D8  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 801C3A9C 001C09DC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C3AA0 001C09E0  7C 64 02 14 */	add r3, r4, r0
/* 801C3AA4 001C09E4  C0 03 00 04 */	lfs f0, 4(r3)
/* 801C3AA8 001C09E8  EC BF 00 32 */	fmuls f5, f31, f0
/* 801C3AAC 001C09EC  40 80 00 28 */	bge lbl_801C3AD4
/* 801C3AB0 001C09F0  C0 02 B1 B0 */	lfs f0, lbl_80519510@sda21(r2)
/* 801C3AB4 001C09F4  EC 03 00 32 */	fmuls f0, f3, f0
/* 801C3AB8 001C09F8  FC 00 00 1E */	fctiwz f0, f0
/* 801C3ABC 001C09FC  D8 01 00 C0 */	stfd f0, 0xc0(r1)
/* 801C3AC0 001C0A00  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 801C3AC4 001C0A04  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C3AC8 001C0A08  7C 04 04 2E */	lfsx f0, r4, r0
/* 801C3ACC 001C0A0C  FC 00 00 50 */	fneg f0, f0
/* 801C3AD0 001C0A10  48 00 00 1C */	b lbl_801C3AEC
lbl_801C3AD4:
/* 801C3AD4 001C0A14  EC 03 00 B2 */	fmuls f0, f3, f2
/* 801C3AD8 001C0A18  FC 00 00 1E */	fctiwz f0, f0
/* 801C3ADC 001C0A1C  D8 01 00 C8 */	stfd f0, 0xc8(r1)
/* 801C3AE0 001C0A20  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 801C3AE4 001C0A24  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801C3AE8 001C0A28  7C 04 04 2E */	lfsx f0, r4, r0
lbl_801C3AEC:
/* 801C3AEC 001C0A2C  EC 7F 00 32 */	fmuls f3, f31, f0
/* 801C3AF0 001C0A30  38 E0 00 00 */	li r7, 0
/* 801C3AF4 001C0A34  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 801C3AF8 001C0A38  38 00 FF FF */	li r0, -1
/* 801C3AFC 001C0A3C  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 801C3B00 001C0A40  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 801C3B04 001C0A44  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C3B08 001C0A48  EC 64 18 2A */	fadds f3, f4, f3
/* 801C3B0C 001C0A4C  EC 00 28 2A */	fadds f0, f0, f5
/* 801C3B10 001C0A50  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 801C3B14 001C0A54  EC 22 08 2A */	fadds f1, f2, f1
/* 801C3B18 001C0A58  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C3B1C 001C0A5C  38 C0 00 FF */	li r6, 0xff
/* 801C3B20 001C0A60  38 A0 00 01 */	li r5, 1
/* 801C3B24 001C0A64  90 81 00 4C */	stw r4, 0x4c(r1)
/* 801C3B28 001C0A68  39 03 A2 B8 */	addi r8, r3, __vt__Q24Game13PelletInitArg@l
/* 801C3B2C 001C0A6C  80 6D 84 78 */	lwz r3, cCoin__13VsOtakaraName@sda21(r13)
/* 801C3B30 001C0A70  38 81 00 08 */	addi r4, r1, 8
/* 801C3B34 001C0A74  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 801C3B38 001C0A78  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 801C3B3C 001C0A7C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801C3B40 001C0A80  91 01 00 4C */	stw r8, 0x4c(r1)
/* 801C3B44 001C0A84  98 E1 00 68 */	stb r7, 0x68(r1)
/* 801C3B48 001C0A88  B0 E1 00 60 */	sth r7, 0x60(r1)
/* 801C3B4C 001C0A8C  98 C1 00 62 */	stb r6, 0x62(r1)
/* 801C3B50 001C0A90  90 E1 00 64 */	stw r7, 0x64(r1)
/* 801C3B54 001C0A94  98 E1 00 63 */	stb r7, 0x63(r1)
/* 801C3B58 001C0A98  98 A1 00 50 */	stb r5, 0x50(r1)
/* 801C3B5C 001C0A9C  98 E1 00 69 */	stb r7, 0x69(r1)
/* 801C3B60 001C0AA0  90 01 00 70 */	stw r0, 0x70(r1)
/* 801C3B64 001C0AA4  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801C3B68 001C0AA8  98 E1 00 6A */	stb r7, 0x6a(r1)
/* 801C3B6C 001C0AAC  98 E1 00 6B */	stb r7, 0x6b(r1)
/* 801C3B70 001C0AB0  48 06 42 D1 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C3B74 001C0AB4  7C 7F 1B 79 */	or. r31, r3, r3
/* 801C3B78 001C0AB8  40 82 00 20 */	bne lbl_801C3B98
/* 801C3B7C 001C0ABC  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C3B80 001C0AC0  3C A0 80 48 */	lis r5, lbl_80480008@ha
/* 801C3B84 001C0AC4  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C3B88 001C0AC8  38 80 06 DF */	li r4, 0x6df
/* 801C3B8C 001C0ACC  38 A5 00 08 */	addi r5, r5, lbl_80480008@l
/* 801C3B90 001C0AD0  4C C6 31 82 */	crclr 6
/* 801C3B94 001C0AD4  4B E6 6A AD */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3B98:
/* 801C3B98 001C0AD8  A8 9F 02 58 */	lha r4, 0x258(r31)
/* 801C3B9C 001C0ADC  3B A0 00 00 */	li r29, 0
/* 801C3BA0 001C0AE0  80 61 00 08 */	lwz r3, 8(r1)
/* 801C3BA4 001C0AE4  38 00 00 01 */	li r0, 1
/* 801C3BA8 001C0AE8  90 81 00 5C */	stw r4, 0x5c(r1)
/* 801C3BAC 001C0AEC  7F BC EB 78 */	mr r28, r29
/* 801C3BB0 001C0AF0  80 9F 00 40 */	lwz r4, 0x40(r31)
/* 801C3BB4 001C0AF4  90 81 00 54 */	stw r4, 0x54(r1)
/* 801C3BB8 001C0AF8  98 61 00 62 */	stb r3, 0x62(r1)
/* 801C3BBC 001C0AFC  98 01 00 68 */	stb r0, 0x68(r1)
/* 801C3BC0 001C0B00  90 01 00 6C */	stw r0, 0x6c(r1)
/* 801C3BC4 001C0B04  90 01 00 70 */	stw r0, 0x70(r1)
/* 801C3BC8 001C0B08  48 00 00 68 */	b lbl_801C3C30
lbl_801C3BCC:
/* 801C3BCC 001C0B0C  80 7E 03 D0 */	lwz r3, 0x3d0(r30)
/* 801C3BD0 001C0B10  7F E3 E0 2E */	lwzx r31, r3, r28
/* 801C3BD4 001C0B14  7F E3 FB 78 */	mr r3, r31
/* 801C3BD8 001C0B18  81 9F 00 00 */	lwz r12, 0(r31)
/* 801C3BDC 001C0B1C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C3BE0 001C0B20  7D 89 03 A6 */	mtctr r12
/* 801C3BE4 001C0B24  4E 80 04 21 */	bctrl 
/* 801C3BE8 001C0B28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C3BEC 001C0B2C  40 82 00 3C */	bne lbl_801C3C28
/* 801C3BF0 001C0B30  7F E3 FB 78 */	mr r3, r31
/* 801C3BF4 001C0B34  4B FA 4B A9 */	bl getStateID__Q24Game6PelletFv
/* 801C3BF8 001C0B38  2C 03 00 00 */	cmpwi r3, 0
/* 801C3BFC 001C0B3C  40 82 00 2C */	bne lbl_801C3C28
/* 801C3C00 001C0B40  80 6D 95 20 */	lwz r3, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 801C3C04 001C0B44  80 9F 04 40 */	lwz r4, 0x440(r31)
/* 801C3C08 001C0B48  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3C0C 001C0B4C  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801C3C10 001C0B50  7D 89 03 A6 */	mtctr r12
/* 801C3C14 001C0B54  4E 80 04 21 */	bctrl 
/* 801C3C18 001C0B58  7F E3 FB 78 */	mr r3, r31
/* 801C3C1C 001C0B5C  38 81 00 4C */	addi r4, r1, 0x4c
/* 801C3C20 001C0B60  4B F7 73 A9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801C3C24 001C0B64  48 00 00 1C */	b lbl_801C3C40
lbl_801C3C28:
/* 801C3C28 001C0B68  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3C2C 001C0B6C  3B BD 00 01 */	addi r29, r29, 1
lbl_801C3C30:
/* 801C3C30 001C0B70  80 1E 03 CC */	lwz r0, 0x3cc(r30)
/* 801C3C34 001C0B74  7C 1D 00 00 */	cmpw r29, r0
/* 801C3C38 001C0B78  41 80 FF 94 */	blt lbl_801C3BCC
/* 801C3C3C 001C0B7C  3B E0 00 00 */	li r31, 0
lbl_801C3C40:
/* 801C3C40 001C0B80  28 1F 00 00 */	cmplwi r31, 0
/* 801C3C44 001C0B84  41 82 01 10 */	beq lbl_801C3D54
/* 801C3C48 001C0B88  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801C3C4C 001C0B8C  7F E3 FB 78 */	mr r3, r31
/* 801C3C50 001C0B90  C0 02 B2 10 */	lfs f0, lbl_80519570@sda21(r2)
/* 801C3C54 001C0B94  38 81 00 28 */	addi r4, r1, 0x28
/* 801C3C58 001C0B98  38 A0 00 00 */	li r5, 0
/* 801C3C5C 001C0B9C  EC 01 00 2A */	fadds f0, f1, f0
/* 801C3C60 001C0BA0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801C3C64 001C0BA4  4B F7 75 45 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C3C68 001C0BA8  80 A1 00 28 */	lwz r5, 0x28(r1)
/* 801C3C6C 001C0BAC  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 801C3C70 001C0BB0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801C3C74 001C0BB4  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801C3C78 001C0BB8  80 81 00 30 */	lwz r4, 0x30(r1)
/* 801C3C7C 001C0BBC  39 06 A7 F8 */	addi r8, r6, __vt__Q23efx5TBase@l
/* 801C3C80 001C0BC0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 801C3C84 001C0BC4  38 C3 A7 EC */	addi r6, r3, __vt__Q23efx3Arg@l
/* 801C3C88 001C0BC8  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C3C8C 001C0BCC  3C A0 80 4F */	lis r5, __vt__Q23efx13TEnemyApsmoke@ha
/* 801C3C90 001C0BD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C3C94 001C0BD4  3C 60 80 4B */	lis r3, __vt__Q23efx12ArgEnemyType@ha
/* 801C3C98 001C0BD8  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801C3C9C 001C0BDC  38 00 00 01 */	li r0, 1
/* 801C3CA0 001C0BE0  90 81 00 18 */	stw r4, 0x18(r1)
/* 801C3CA4 001C0BE4  38 E5 85 98 */	addi r7, r5, __vt__Q23efx13TEnemyApsmoke@l
/* 801C3CA8 001C0BE8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801C3CAC 001C0BEC  38 A3 A7 E0 */	addi r5, r3, __vt__Q23efx12ArgEnemyType@l
/* 801C3CB0 001C0BF0  91 01 00 0C */	stw r8, 0xc(r1)
/* 801C3CB4 001C0BF4  38 61 00 0C */	addi r3, r1, 0xc
/* 801C3CB8 001C0BF8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801C3CBC 001C0BFC  38 81 00 34 */	addi r4, r1, 0x34
/* 801C3CC0 001C0C00  90 C1 00 34 */	stw r6, 0x34(r1)
/* 801C3CC4 001C0C04  90 E1 00 0C */	stw r7, 0xc(r1)
/* 801C3CC8 001C0C08  D0 61 00 38 */	stfs f3, 0x38(r1)
/* 801C3CCC 001C0C0C  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 801C3CD0 001C0C10  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801C3CD4 001C0C14  90 A1 00 34 */	stw r5, 0x34(r1)
/* 801C3CD8 001C0C18  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C3CDC 001C0C1C  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801C3CE0 001C0C20  48 20 54 D9 */	bl create__Q23efx13TEnemyApsmokeFPQ23efx3Arg
/* 801C3CE4 001C0C24  4B F0 58 BD */	bl rand
/* 801C3CE8 001C0C28  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801C3CEC 001C0C2C  3C 00 43 30 */	lis r0, 0x4330
/* 801C3CF0 001C0C30  90 61 00 CC */	stw r3, 0xcc(r1)
/* 801C3CF4 001C0C34  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801C3CF8 001C0C38  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C3CFC 001C0C3C  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 801C3D00 001C0C40  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 801C3D04 001C0C44  38 61 00 74 */	addi r3, r1, 0x74
/* 801C3D08 001C0C48  C8 62 B1 68 */	lfd f3, lbl_805194C8@sda21(r2)
/* 801C3D0C 001C0C4C  38 A1 00 1C */	addi r5, r1, 0x1c
/* 801C3D10 001C0C50  C8 01 00 C8 */	lfd f0, 0xc8(r1)
/* 801C3D14 001C0C54  C0 42 B1 90 */	lfs f2, lbl_805194F0@sda21(r2)
/* 801C3D18 001C0C58  EC 60 18 28 */	fsubs f3, f0, f3
/* 801C3D1C 001C0C5C  C0 02 B1 9C */	lfs f0, lbl_805194FC@sda21(r2)
/* 801C3D20 001C0C60  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801C3D24 001C0C64  EC 43 10 24 */	fdivs f2, f3, f2
/* 801C3D28 001C0C68  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 801C3D2C 001C0C6C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801C3D30 001C0C70  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801C3D34 001C0C74  48 26 4B 55 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801C3D38 001C0C78  7F E3 FB 78 */	mr r3, r31
/* 801C3D3C 001C0C7C  38 81 00 74 */	addi r4, r1, 0x74
/* 801C3D40 001C0C80  4B FA 47 8D */	bl setOrientation__Q24Game6PelletFR7Matrixf
/* 801C3D44 001C0C84  80 7E 03 C4 */	lwz r3, 0x3c4(r30)
/* 801C3D48 001C0C88  38 03 00 01 */	addi r0, r3, 1
/* 801C3D4C 001C0C8C  90 1E 03 C4 */	stw r0, 0x3c4(r30)
/* 801C3D50 001C0C90  48 00 00 3C */	b lbl_801C3D8C
lbl_801C3D54:
/* 801C3D54 001C0C94  3B A0 00 00 */	li r29, 0
/* 801C3D58 001C0C98  3B 80 00 00 */	li r28, 0
/* 801C3D5C 001C0C9C  48 00 00 24 */	b lbl_801C3D80
lbl_801C3D60:
/* 801C3D60 001C0CA0  80 7E 03 D0 */	lwz r3, 0x3d0(r30)
/* 801C3D64 001C0CA4  7C 63 E0 2E */	lwzx r3, r3, r28
/* 801C3D68 001C0CA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C3D6C 001C0CAC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C3D70 001C0CB0  7D 89 03 A6 */	mtctr r12
/* 801C3D74 001C0CB4  4E 80 04 21 */	bctrl 
/* 801C3D78 001C0CB8  3B 9C 00 04 */	addi r28, r28, 4
/* 801C3D7C 001C0CBC  3B BD 00 01 */	addi r29, r29, 1
lbl_801C3D80:
/* 801C3D80 001C0CC0  80 1E 03 CC */	lwz r0, 0x3cc(r30)
/* 801C3D84 001C0CC4  7C 1D 00 00 */	cmpw r29, r0
/* 801C3D88 001C0CC8  41 80 FF D8 */	blt lbl_801C3D60
lbl_801C3D8C:
/* 801C3D8C 001C0CCC  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 801C3D90 001C0CD0  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 801C3D94 001C0CD4  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 801C3D98 001C0CD8  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 801C3D9C 001C0CDC  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 801C3DA0 001C0CE0  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 801C3DA4 001C0CE4  83 81 00 D0 */	lwz r28, 0xd0(r1)
/* 801C3DA8 001C0CE8  7C 08 03 A6 */	mtlr r0
/* 801C3DAC 001C0CEC  38 21 00 F0 */	addi r1, r1, 0xf0
/* 801C3DB0 001C0CF0  4E 80 00 20 */	blr 
.endif

.if version == 1
.global createYellowBedamas__Q24Game13VsGameSectionFi
createYellowBedamas__Q24Game13VsGameSectionFi:
/* 801C3DB4 001C0CF4  94 21 FD 50 */	stwu r1, -0x2b0(r1)
/* 801C3DB8 001C0CF8  7C 08 02 A6 */	mflr r0
/* 801C3DBC 001C0CFC  90 01 02 B4 */	stw r0, 0x2b4(r1)
/* 801C3DC0 001C0D00  BF 61 02 9C */	stmw r27, 0x29c(r1)
/* 801C3DC4 001C0D04  7C 7E 1B 78 */	mr r30, r3
/* 801C3DC8 001C0D08  3C 60 80 48 */	lis r3, lbl_8047FF98@ha
/* 801C3DCC 001C0D0C  7C 9F 23 78 */	mr r31, r4
/* 801C3DD0 001C0D10  3B 83 FF 98 */	addi r28, r3, lbl_8047FF98@l
/* 801C3DD4 001C0D14  80 BE 03 3C */	lwz r5, 0x360(r30)
/* 801C3DD8 001C0D18  28 05 00 00 */	cmplwi r5, 0
/* 801C3DDC 001C0D1C  41 82 00 1C */	beq lbl_801C3DF8
/* 801C3DE0 001C0D20  83 E5 00 B0 */	lwz r31, 0xb0(r5)
/* 801C3DE4 001C0D24  2C 1F 00 00 */	cmpwi r31, 0
/* 801C3DE8 001C0D28  41 82 01 64 */	beq lbl_801C3F4C
/* 801C3DEC 001C0D2C  2C 1F 00 07 */	cmpwi r31, 7
/* 801C3DF0 001C0D30  41 80 00 08 */	blt lbl_801C3DF8
/* 801C3DF4 001C0D34  3B E0 00 07 */	li r31, 7
lbl_801C3DF8:
/* 801C3DF8 001C0D38  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 801C3DFC 001C0D3C  38 E0 00 00 */	li r7, 0
/* 801C3E00 001C0D40  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 801C3E04 001C0D44  38 00 FF FF */	li r0, -1
/* 801C3E08 001C0D48  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C3E0C 001C0D4C  90 81 00 18 */	stw r4, 0x18(r1)
/* 801C3E10 001C0D50  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 801C3E14 001C0D54  38 C0 00 FF */	li r6, 0xff
/* 801C3E18 001C0D58  38 A0 00 01 */	li r5, 1
/* 801C3E1C 001C0D5C  90 61 00 18 */	stw r3, 0x18(r1)
/* 801C3E20 001C0D60  80 6D 84 84 */	lwz r3, cBedamaYellow__13VsOtakaraName@sda21(r13)
/* 801C3E24 001C0D64  38 81 00 08 */	addi r4, r1, 8
/* 801C3E28 001C0D68  98 E1 00 34 */	stb r7, 0x34(r1)
/* 801C3E2C 001C0D6C  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801C3E30 001C0D70  98 C1 00 2E */	stb r6, 0x2e(r1)
/* 801C3E34 001C0D74  90 E1 00 30 */	stw r7, 0x30(r1)
/* 801C3E38 001C0D78  98 E1 00 2F */	stb r7, 0x2f(r1)
/* 801C3E3C 001C0D7C  98 A1 00 1C */	stb r5, 0x1c(r1)
/* 801C3E40 001C0D80  98 E1 00 35 */	stb r7, 0x35(r1)
/* 801C3E44 001C0D84  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C3E48 001C0D88  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C3E4C 001C0D8C  98 E1 00 36 */	stb r7, 0x36(r1)
/* 801C3E50 001C0D90  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C3E54 001C0D94  48 06 3F ED */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C3E58 001C0D98  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C3E5C 001C0D9C  40 82 00 18 */	bne lbl_801C3E74
/* 801C3E60 001C0DA0  38 7C 00 5C */	addi r3, r28, 0x5c
/* 801C3E64 001C0DA4  38 BC 00 70 */	addi r5, r28, 0x70
/* 801C3E68 001C0DA8  38 80 08 6A */	li r4, 0x86a
/* 801C3E6C 001C0DAC  4C C6 31 82 */	crclr 6
/* 801C3E70 001C0DB0  4B E6 67 D1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3E74:
/* 801C3E74 001C0DB4  A8 1D 02 58 */	lha r0, 0x258(r29)
/* 801C3E78 001C0DB8  2C 1F 00 32 */	cmpwi r31, 0x32
/* 801C3E7C 001C0DBC  80 81 00 08 */	lwz r4, 8(r1)
/* 801C3E80 001C0DC0  38 60 00 01 */	li r3, 1
/* 801C3E84 001C0DC4  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C3E88 001C0DC8  38 00 00 08 */	li r0, 8
/* 801C3E8C 001C0DCC  80 BD 00 40 */	lwz r5, 0x40(r29)
/* 801C3E90 001C0DD0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801C3E94 001C0DD4  98 81 00 2E */	stb r4, 0x2e(r1)
/* 801C3E98 001C0DD8  90 61 00 38 */	stw r3, 0x38(r1)
/* 801C3E9C 001C0DDC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C3EA0 001C0DE0  40 81 00 1C */	ble lbl_801C3EBC
/* 801C3EA4 001C0DE4  7F E6 FB 78 */	mr r6, r31
/* 801C3EA8 001C0DE8  38 7C 00 5C */	addi r3, r28, 0x5c
/* 801C3EAC 001C0DEC  38 BC 01 7C */	addi r5, r28, 0x17c
/* 801C3EB0 001C0DF0  38 80 08 73 */	li r4, 0x873
/* 801C3EB4 001C0DF4  4C C6 31 82 */	crclr 6
/* 801C3EB8 001C0DF8  4B E6 67 89 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3EBC:
/* 801C3EBC 001C0DFC  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 801C3EC0 001C0E00  38 61 00 40 */	addi r3, r1, 0x40
/* 801C3EC4 001C0E04  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 801C3EC8 001C0E08  38 A0 00 00 */	li r5, 0
/* 801C3ECC 001C0E0C  38 C0 00 0C */	li r6, 0xc
/* 801C3ED0 001C0E10  38 E0 00 32 */	li r7, 0x32
/* 801C3ED4 001C0E14  4B EF D9 69 */	bl __construct_array
/* 801C3ED8 001C0E18  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 801C3EDC 001C0E1C  7F E5 FB 78 */	mr r5, r31
/* 801C3EE0 001C0E20  C0 22 B1 E8 */	lfs f1, lbl_80519548@sda21(r2)
/* 801C3EE4 001C0E24  38 81 00 40 */	addi r4, r1, 0x40
/* 801C3EE8 001C0E28  C0 42 B1 EC */	lfs f2, lbl_8051954C@sda21(r2)
/* 801C3EEC 001C0E2C  48 08 0C F1 */	bl "getItemDropPosition__Q34Game4Cave10RandMapMgrFP10Vector3<f>iff"
/* 801C3EF0 001C0E30  7F DD F3 78 */	mr r29, r30
/* 801C3EF4 001C0E34  3B 81 00 40 */	addi r28, r1, 0x40
/* 801C3EF8 001C0E38  3B 60 00 00 */	li r27, 0
/* 801C3EFC 001C0E3C  48 00 00 48 */	b lbl_801C3F44
lbl_801C3F00:
/* 801C3F00 001C0E40  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C3F04 001C0E44  38 81 00 18 */	addi r4, r1, 0x18
/* 801C3F08 001C0E48  4B FA 95 B9 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C3F0C 001C0E4C  C0 5C 00 00 */	lfs f2, 0(r28)
/* 801C3F10 001C0E50  7C 7E 1B 78 */	mr r30, r3
/* 801C3F14 001C0E54  C0 3C 00 04 */	lfs f1, 4(r28)
/* 801C3F18 001C0E58  38 81 00 0C */	addi r4, r1, 0xc
/* 801C3F1C 001C0E5C  C0 1C 00 08 */	lfs f0, 8(r28)
/* 801C3F20 001C0E60  38 A0 00 00 */	li r5, 0
/* 801C3F24 001C0E64  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 801C3F28 001C0E68  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801C3F2C 001C0E6C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C3F30 001C0E70  4B F7 72 79 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C3F34 001C0E74  93 DD 03 88 */	stw r30, 0x3ac(r29)
/* 801C3F38 001C0E78  3B 9C 00 0C */	addi r28, r28, 0xc
/* 801C3F3C 001C0E7C  3B BD 00 04 */	addi r29, r29, 4
/* 801C3F40 001C0E80  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C3F44:
/* 801C3F44 001C0E84  7C 1B F8 00 */	cmpw r27, r31
/* 801C3F48 001C0E88  41 80 FF B8 */	blt lbl_801C3F00
lbl_801C3F4C:
/* 801C3F4C 001C0E8C  BB 61 02 9C */	lmw r27, 0x29c(r1)
/* 801C3F50 001C0E90  80 01 02 B4 */	lwz r0, 0x2b4(r1)
/* 801C3F54 001C0E94  7C 08 03 A6 */	mtlr r0
/* 801C3F58 001C0E98  38 21 02 B0 */	addi r1, r1, 0x2b0
/* 801C3F5C 001C0E9C  4E 80 00 20 */	blr 
.else
.global createYellowBedamas__Q24Game13VsGameSectionFi
createYellowBedamas__Q24Game13VsGameSectionFi:
/* 801C3DB4 001C0CF4  94 21 FD 50 */	stwu r1, -0x2b0(r1)
/* 801C3DB8 001C0CF8  7C 08 02 A6 */	mflr r0
/* 801C3DBC 001C0CFC  90 01 02 B4 */	stw r0, 0x2b4(r1)
/* 801C3DC0 001C0D00  BF 61 02 9C */	stmw r27, 0x29c(r1)
/* 801C3DC4 001C0D04  7C 7E 1B 78 */	mr r30, r3
/* 801C3DC8 001C0D08  3C 60 80 48 */	lis r3, lbl_8047FF98@ha
/* 801C3DCC 001C0D0C  7C 9F 23 78 */	mr r31, r4
/* 801C3DD0 001C0D10  3B 83 FF 98 */	addi r28, r3, lbl_8047FF98@l
/* 801C3DD4 001C0D14  80 BE 03 3C */	lwz r5, 0x33c(r30)
/* 801C3DD8 001C0D18  28 05 00 00 */	cmplwi r5, 0
/* 801C3DDC 001C0D1C  41 82 00 1C */	beq lbl_801C3DF8
/* 801C3DE0 001C0D20  83 E5 00 B0 */	lwz r31, 0xb0(r5)
/* 801C3DE4 001C0D24  2C 1F 00 00 */	cmpwi r31, 0
/* 801C3DE8 001C0D28  41 82 01 64 */	beq lbl_801C3F4C
/* 801C3DEC 001C0D2C  2C 1F 00 07 */	cmpwi r31, 7
/* 801C3DF0 001C0D30  41 80 00 08 */	blt lbl_801C3DF8
/* 801C3DF4 001C0D34  3B E0 00 07 */	li r31, 7
lbl_801C3DF8:
/* 801C3DF8 001C0D38  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 801C3DFC 001C0D3C  38 E0 00 00 */	li r7, 0
/* 801C3E00 001C0D40  38 83 A2 F4 */	addi r4, r3, __vt__Q24Game15CreatureInitArg@l
/* 801C3E04 001C0D44  38 00 FF FF */	li r0, -1
/* 801C3E08 001C0D48  3C 60 80 4B */	lis r3, __vt__Q24Game13PelletInitArg@ha
/* 801C3E0C 001C0D4C  90 81 00 18 */	stw r4, 0x18(r1)
/* 801C3E10 001C0D50  38 63 A2 B8 */	addi r3, r3, __vt__Q24Game13PelletInitArg@l
/* 801C3E14 001C0D54  38 C0 00 FF */	li r6, 0xff
/* 801C3E18 001C0D58  38 A0 00 01 */	li r5, 1
/* 801C3E1C 001C0D5C  90 61 00 18 */	stw r3, 0x18(r1)
/* 801C3E20 001C0D60  80 6D 84 84 */	lwz r3, cBedamaYellow__13VsOtakaraName@sda21(r13)
/* 801C3E24 001C0D64  38 81 00 08 */	addi r4, r1, 8
/* 801C3E28 001C0D68  98 E1 00 34 */	stb r7, 0x34(r1)
/* 801C3E2C 001C0D6C  B0 E1 00 2C */	sth r7, 0x2c(r1)
/* 801C3E30 001C0D70  98 C1 00 2E */	stb r6, 0x2e(r1)
/* 801C3E34 001C0D74  90 E1 00 30 */	stw r7, 0x30(r1)
/* 801C3E38 001C0D78  98 E1 00 2F */	stb r7, 0x2f(r1)
/* 801C3E3C 001C0D7C  98 A1 00 1C */	stb r5, 0x1c(r1)
/* 801C3E40 001C0D80  98 E1 00 35 */	stb r7, 0x35(r1)
/* 801C3E44 001C0D84  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C3E48 001C0D88  90 01 00 38 */	stw r0, 0x38(r1)
/* 801C3E4C 001C0D8C  98 E1 00 36 */	stb r7, 0x36(r1)
/* 801C3E50 001C0D90  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C3E54 001C0D94  48 06 3F ED */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C3E58 001C0D98  7C 7D 1B 79 */	or. r29, r3, r3
/* 801C3E5C 001C0D9C  40 82 00 18 */	bne lbl_801C3E74
/* 801C3E60 001C0DA0  38 7C 00 5C */	addi r3, r28, 0x5c
/* 801C3E64 001C0DA4  38 BC 00 70 */	addi r5, r28, 0x70
/* 801C3E68 001C0DA8  38 80 08 6A */	li r4, 0x86a
/* 801C3E6C 001C0DAC  4C C6 31 82 */	crclr 6
/* 801C3E70 001C0DB0  4B E6 67 D1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3E74:
/* 801C3E74 001C0DB4  A8 1D 02 58 */	lha r0, 0x258(r29)
/* 801C3E78 001C0DB8  2C 1F 00 32 */	cmpwi r31, 0x32
/* 801C3E7C 001C0DBC  80 81 00 08 */	lwz r4, 8(r1)
/* 801C3E80 001C0DC0  38 60 00 01 */	li r3, 1
/* 801C3E84 001C0DC4  90 01 00 28 */	stw r0, 0x28(r1)
/* 801C3E88 001C0DC8  38 00 00 08 */	li r0, 8
/* 801C3E8C 001C0DCC  80 BD 00 40 */	lwz r5, 0x40(r29)
/* 801C3E90 001C0DD0  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801C3E94 001C0DD4  98 81 00 2E */	stb r4, 0x2e(r1)
/* 801C3E98 001C0DD8  90 61 00 38 */	stw r3, 0x38(r1)
/* 801C3E9C 001C0DDC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801C3EA0 001C0DE0  40 81 00 1C */	ble lbl_801C3EBC
/* 801C3EA4 001C0DE4  7F E6 FB 78 */	mr r6, r31
/* 801C3EA8 001C0DE8  38 7C 00 5C */	addi r3, r28, 0x5c
/* 801C3EAC 001C0DEC  38 BC 01 7C */	addi r5, r28, 0x17c
/* 801C3EB0 001C0DF0  38 80 08 73 */	li r4, 0x873
/* 801C3EB4 001C0DF4  4C C6 31 82 */	crclr 6
/* 801C3EB8 001C0DF8  4B E6 67 89 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C3EBC:
/* 801C3EBC 001C0DFC  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 801C3EC0 001C0E00  38 61 00 40 */	addi r3, r1, 0x40
/* 801C3EC4 001C0E04  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 801C3EC8 001C0E08  38 A0 00 00 */	li r5, 0
/* 801C3ECC 001C0E0C  38 C0 00 0C */	li r6, 0xc
/* 801C3ED0 001C0E10  38 E0 00 32 */	li r7, 0x32
/* 801C3ED4 001C0E14  4B EF D9 69 */	bl __construct_array
/* 801C3ED8 001C0E18  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 801C3EDC 001C0E1C  7F E5 FB 78 */	mr r5, r31
/* 801C3EE0 001C0E20  C0 22 B1 E8 */	lfs f1, lbl_80519548@sda21(r2)
/* 801C3EE4 001C0E24  38 81 00 40 */	addi r4, r1, 0x40
/* 801C3EE8 001C0E28  C0 42 B1 EC */	lfs f2, lbl_8051954C@sda21(r2)
/* 801C3EEC 001C0E2C  48 08 0C F1 */	bl "getItemDropPosition__Q34Game4Cave10RandMapMgrFP10Vector3<f>iff"
/* 801C3EF0 001C0E30  7F DD F3 78 */	mr r29, r30
/* 801C3EF4 001C0E34  3B 81 00 40 */	addi r28, r1, 0x40
/* 801C3EF8 001C0E38  3B 60 00 00 */	li r27, 0
/* 801C3EFC 001C0E3C  48 00 00 48 */	b lbl_801C3F44
lbl_801C3F00:
/* 801C3F00 001C0E40  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C3F04 001C0E44  38 81 00 18 */	addi r4, r1, 0x18
/* 801C3F08 001C0E48  4B FA 95 B9 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C3F0C 001C0E4C  C0 5C 00 00 */	lfs f2, 0(r28)
/* 801C3F10 001C0E50  7C 7E 1B 78 */	mr r30, r3
/* 801C3F14 001C0E54  C0 3C 00 04 */	lfs f1, 4(r28)
/* 801C3F18 001C0E58  38 81 00 0C */	addi r4, r1, 0xc
/* 801C3F1C 001C0E5C  C0 1C 00 08 */	lfs f0, 8(r28)
/* 801C3F20 001C0E60  38 A0 00 00 */	li r5, 0
/* 801C3F24 001C0E64  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 801C3F28 001C0E68  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 801C3F2C 001C0E6C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 801C3F30 001C0E70  4B F7 72 79 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C3F34 001C0E74  93 DD 03 88 */	stw r30, 0x388(r29)
/* 801C3F38 001C0E78  3B 9C 00 0C */	addi r28, r28, 0xc
/* 801C3F3C 001C0E7C  3B BD 00 04 */	addi r29, r29, 4
/* 801C3F40 001C0E80  3B 7B 00 01 */	addi r27, r27, 1
lbl_801C3F44:
/* 801C3F44 001C0E84  7C 1B F8 00 */	cmpw r27, r31
/* 801C3F48 001C0E88  41 80 FF B8 */	blt lbl_801C3F00
lbl_801C3F4C:
/* 801C3F4C 001C0E8C  BB 61 02 9C */	lmw r27, 0x29c(r1)
/* 801C3F50 001C0E90  80 01 02 B4 */	lwz r0, 0x2b4(r1)
/* 801C3F54 001C0E94  7C 08 03 A6 */	mtlr r0
/* 801C3F58 001C0E98  38 21 02 B0 */	addi r1, r1, 0x2b0
/* 801C3F5C 001C0E9C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global "createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<f>"
"createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<f>":
/* 801C3F60 001C0EA0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C3F64 001C0EA4  7C 08 02 A6 */	mflr r0
/* 801C3F68 001C0EA8  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 801C3F6C 001C0EAC  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C3F70 001C0EB0  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 801C3F74 001C0EB4  7C 7C 1B 78 */	mr r28, r3
/* 801C3F78 001C0EB8  3B A1 00 0C */	addi r29, r1, 0xc
/* 801C3F7C 001C0EBC  3B C5 A2 F4 */	addi r30, r5, __vt__Q24Game15CreatureInitArg@l
/* 801C3F80 001C0EC0  3B 60 00 00 */	li r27, 0
/* 801C3F84 001C0EC4  80 82 2B 10 */	lwz r4, lbl_80520E70@sda21(r2)
/* 801C3F88 001C0EC8  80 02 2B 14 */	lwz r0, lbl_80520E74@sda21(r2)
/* 801C3F8C 001C0ECC  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C3F90 001C0ED0  3C 80 80 4B */	lis r4, __vt__Q24Game13PelletInitArg@ha
/* 801C3F94 001C0ED4  80 CD 84 80 */	lwz r6, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 801C3F98 001C0ED8  3B E4 A2 B8 */	addi r31, r4, __vt__Q24Game13PelletInitArg@l
/* 801C3F9C 001C0EDC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C3FA0 001C0EE0  80 0D 84 7C */	lwz r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 801C3FA4 001C0EE4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801C3FA8 001C0EE8  90 01 00 10 */	stw r0, 0x10(r1)
lbl_801C3FAC:
/* 801C3FAC 001C0EEC  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801C3FB0 001C0EF0  38 E0 00 00 */	li r7, 0
/* 801C3FB4 001C0EF4  38 00 FF FF */	li r0, -1
/* 801C3FB8 001C0EF8  38 C0 00 FF */	li r6, 0xff
/* 801C3FBC 001C0EFC  38 A0 00 01 */	li r5, 1
/* 801C3FC0 001C0F00  93 E1 00 20 */	stw r31, 0x20(r1)
/* 801C3FC4 001C0F04  80 7D 00 00 */	lwz r3, 0(r29)
/* 801C3FC8 001C0F08  38 81 00 08 */	addi r4, r1, 8
/* 801C3FCC 001C0F0C  98 E1 00 3C */	stb r7, 0x3c(r1)
/* 801C3FD0 001C0F10  B0 E1 00 34 */	sth r7, 0x34(r1)
/* 801C3FD4 001C0F14  98 C1 00 36 */	stb r6, 0x36(r1)
/* 801C3FD8 001C0F18  90 E1 00 38 */	stw r7, 0x38(r1)
/* 801C3FDC 001C0F1C  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C3FE0 001C0F20  98 A1 00 24 */	stb r5, 0x24(r1)
/* 801C3FE4 001C0F24  98 E1 00 3D */	stb r7, 0x3d(r1)
/* 801C3FE8 001C0F28  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C3FEC 001C0F2C  90 01 00 40 */	stw r0, 0x40(r1)
/* 801C3FF0 001C0F30  98 E1 00 3E */	stb r7, 0x3e(r1)
/* 801C3FF4 001C0F34  98 E1 00 3F */	stb r7, 0x3f(r1)
/* 801C3FF8 001C0F38  48 06 3E 49 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C3FFC 001C0F3C  7C 7A 1B 79 */	or. r26, r3, r3
/* 801C4000 001C0F40  40 82 00 20 */	bne lbl_801C4020
/* 801C4004 001C0F44  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C4008 001C0F48  3C A0 80 48 */	lis r5, lbl_80480008@ha
/* 801C400C 001C0F4C  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C4010 001C0F50  38 80 08 A3 */	li r4, 0x8a3
/* 801C4014 001C0F54  38 A5 00 08 */	addi r5, r5, lbl_80480008@l
/* 801C4018 001C0F58  4C C6 31 82 */	crclr 6
/* 801C401C 001C0F5C  4B E6 66 25 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C4020:
/* 801C4020 001C0F60  A8 7A 02 58 */	lha r3, 0x258(r26)
/* 801C4024 001C0F64  38 A0 00 01 */	li r5, 1
/* 801C4028 001C0F68  80 C1 00 08 */	lwz r6, 8(r1)
/* 801C402C 001C0F6C  38 00 00 08 */	li r0, 8
/* 801C4030 001C0F70  90 61 00 30 */	stw r3, 0x30(r1)
/* 801C4034 001C0F74  38 81 00 20 */	addi r4, r1, 0x20
/* 801C4038 001C0F78  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C403C 001C0F7C  80 FA 00 40 */	lwz r7, 0x40(r26)
/* 801C4040 001C0F80  90 E1 00 28 */	stw r7, 0x28(r1)
/* 801C4044 001C0F84  98 C1 00 36 */	stb r6, 0x36(r1)
/* 801C4048 001C0F88  90 A1 00 40 */	stw r5, 0x40(r1)
/* 801C404C 001C0F8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C4050 001C0F90  4B FA 94 71 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C4054 001C0F94  7C 60 1B 78 */	mr r0, r3
/* 801C4058 001C0F98  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 801C405C 001C0F9C  C0 22 B1 C4 */	lfs f1, lbl_80519524@sda21(r2)
/* 801C4060 001C0FA0  7C 1A 03 78 */	mr r26, r0
/* 801C4064 001C0FA4  C0 42 B1 C8 */	lfs f2, lbl_80519528@sda21(r2)
/* 801C4068 001C0FA8  38 81 00 14 */	addi r4, r1, 0x14
/* 801C406C 001C0FAC  48 08 0A D1 */	bl "getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3<f>ff"
/* 801C4070 001C0FB0  7F 43 D3 78 */	mr r3, r26
/* 801C4074 001C0FB4  38 81 00 14 */	addi r4, r1, 0x14
/* 801C4078 001C0FB8  38 A0 00 00 */	li r5, 0
/* 801C407C 001C0FBC  4B F7 71 2D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C4080 001C0FC0  3B 7B 00 01 */	addi r27, r27, 1
/* 801C4084 001C0FC4  93 5C 03 80 */	stw r26, 0x3a4(r28)
/* 801C4088 001C0FC8  2C 1B 00 02 */	cmpwi r27, 2
/* 801C408C 001C0FCC  3B BD 00 04 */	addi r29, r29, 4
/* 801C4090 001C0FD0  3B 9C 00 04 */	addi r28, r28, 4
/* 801C4094 001C0FD4  41 80 FF 18 */	blt lbl_801C3FAC
/* 801C4098 001C0FD8  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 801C409C 001C0FDC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C40A0 001C0FE0  7C 08 03 A6 */	mtlr r0
/* 801C40A4 001C0FE4  38 21 00 60 */	addi r1, r1, 0x60
/* 801C40A8 001C0FE8  4E 80 00 20 */	blr 
.else
.global "createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<f>"
"createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<f>":
/* 801C3F60 001C0EA0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801C3F64 001C0EA4  7C 08 02 A6 */	mflr r0
/* 801C3F68 001C0EA8  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 801C3F6C 001C0EAC  90 01 00 64 */	stw r0, 0x64(r1)
/* 801C3F70 001C0EB0  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 801C3F74 001C0EB4  7C 7C 1B 78 */	mr r28, r3
/* 801C3F78 001C0EB8  3B A1 00 0C */	addi r29, r1, 0xc
/* 801C3F7C 001C0EBC  3B C5 A2 F4 */	addi r30, r5, __vt__Q24Game15CreatureInitArg@l
/* 801C3F80 001C0EC0  3B 60 00 00 */	li r27, 0
/* 801C3F84 001C0EC4  80 82 2B 10 */	lwz r4, lbl_80520E70@sda21(r2)
/* 801C3F88 001C0EC8  80 02 2B 14 */	lwz r0, lbl_80520E74@sda21(r2)
/* 801C3F8C 001C0ECC  90 81 00 0C */	stw r4, 0xc(r1)
/* 801C3F90 001C0ED0  3C 80 80 4B */	lis r4, __vt__Q24Game13PelletInitArg@ha
/* 801C3F94 001C0ED4  80 CD 84 80 */	lwz r6, cBedamaRed__13VsOtakaraName@sda21(r13)
/* 801C3F98 001C0ED8  3B E4 A2 B8 */	addi r31, r4, __vt__Q24Game13PelletInitArg@l
/* 801C3F9C 001C0EDC  90 01 00 10 */	stw r0, 0x10(r1)
/* 801C3FA0 001C0EE0  80 0D 84 7C */	lwz r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
/* 801C3FA4 001C0EE4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 801C3FA8 001C0EE8  90 01 00 10 */	stw r0, 0x10(r1)
lbl_801C3FAC:
/* 801C3FAC 001C0EEC  93 C1 00 20 */	stw r30, 0x20(r1)
/* 801C3FB0 001C0EF0  38 E0 00 00 */	li r7, 0
/* 801C3FB4 001C0EF4  38 00 FF FF */	li r0, -1
/* 801C3FB8 001C0EF8  38 C0 00 FF */	li r6, 0xff
/* 801C3FBC 001C0EFC  38 A0 00 01 */	li r5, 1
/* 801C3FC0 001C0F00  93 E1 00 20 */	stw r31, 0x20(r1)
/* 801C3FC4 001C0F04  80 7D 00 00 */	lwz r3, 0(r29)
/* 801C3FC8 001C0F08  38 81 00 08 */	addi r4, r1, 8
/* 801C3FCC 001C0F0C  98 E1 00 3C */	stb r7, 0x3c(r1)
/* 801C3FD0 001C0F10  B0 E1 00 34 */	sth r7, 0x34(r1)
/* 801C3FD4 001C0F14  98 C1 00 36 */	stb r6, 0x36(r1)
/* 801C3FD8 001C0F18  90 E1 00 38 */	stw r7, 0x38(r1)
/* 801C3FDC 001C0F1C  98 E1 00 37 */	stb r7, 0x37(r1)
/* 801C3FE0 001C0F20  98 A1 00 24 */	stb r5, 0x24(r1)
/* 801C3FE4 001C0F24  98 E1 00 3D */	stb r7, 0x3d(r1)
/* 801C3FE8 001C0F28  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C3FEC 001C0F2C  90 01 00 40 */	stw r0, 0x40(r1)
/* 801C3FF0 001C0F30  98 E1 00 3E */	stb r7, 0x3e(r1)
/* 801C3FF4 001C0F34  98 E1 00 3F */	stb r7, 0x3f(r1)
/* 801C3FF8 001C0F38  48 06 3E 49 */	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
/* 801C3FFC 001C0F3C  7C 7A 1B 79 */	or. r26, r3, r3
/* 801C4000 001C0F40  40 82 00 20 */	bne lbl_801C4020
/* 801C4004 001C0F44  3C 60 80 48 */	lis r3, lbl_8047FFF4@ha
/* 801C4008 001C0F48  3C A0 80 48 */	lis r5, lbl_80480008@ha
/* 801C400C 001C0F4C  38 63 FF F4 */	addi r3, r3, lbl_8047FFF4@l
/* 801C4010 001C0F50  38 80 08 A3 */	li r4, 0x8a3
/* 801C4014 001C0F54  38 A5 00 08 */	addi r5, r5, lbl_80480008@l
/* 801C4018 001C0F58  4C C6 31 82 */	crclr 6
/* 801C401C 001C0F5C  4B E6 66 25 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C4020:
/* 801C4020 001C0F60  A8 7A 02 58 */	lha r3, 0x258(r26)
/* 801C4024 001C0F64  38 A0 00 01 */	li r5, 1
/* 801C4028 001C0F68  80 C1 00 08 */	lwz r6, 8(r1)
/* 801C402C 001C0F6C  38 00 00 08 */	li r0, 8
/* 801C4030 001C0F70  90 61 00 30 */	stw r3, 0x30(r1)
/* 801C4034 001C0F74  38 81 00 20 */	addi r4, r1, 0x20
/* 801C4038 001C0F78  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801C403C 001C0F7C  80 FA 00 40 */	lwz r7, 0x40(r26)
/* 801C4040 001C0F80  90 E1 00 28 */	stw r7, 0x28(r1)
/* 801C4044 001C0F84  98 C1 00 36 */	stb r6, 0x36(r1)
/* 801C4048 001C0F88  90 A1 00 40 */	stw r5, 0x40(r1)
/* 801C404C 001C0F8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 801C4050 001C0F90  4B FA 94 71 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801C4054 001C0F94  7C 60 1B 78 */	mr r0, r3
/* 801C4058 001C0F98  80 6D 96 88 */	lwz r3, randMapMgr__Q24Game4Cave@sda21(r13)
/* 801C405C 001C0F9C  C0 22 B1 C4 */	lfs f1, lbl_80519524@sda21(r2)
/* 801C4060 001C0FA0  7C 1A 03 78 */	mr r26, r0
/* 801C4064 001C0FA4  C0 42 B1 C8 */	lfs f2, lbl_80519528@sda21(r2)
/* 801C4068 001C0FA8  38 81 00 14 */	addi r4, r1, 0x14
/* 801C406C 001C0FAC  48 08 0A D1 */	bl "getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3<f>ff"
/* 801C4070 001C0FB0  7F 43 D3 78 */	mr r3, r26
/* 801C4074 001C0FB4  38 81 00 14 */	addi r4, r1, 0x14
/* 801C4078 001C0FB8  38 A0 00 00 */	li r5, 0
/* 801C407C 001C0FBC  4B F7 71 2D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801C4080 001C0FC0  3B 7B 00 01 */	addi r27, r27, 1
/* 801C4084 001C0FC4  93 5C 03 80 */	stw r26, 0x380(r28)
/* 801C4088 001C0FC8  2C 1B 00 02 */	cmpwi r27, 2
/* 801C408C 001C0FCC  3B BD 00 04 */	addi r29, r29, 4
/* 801C4090 001C0FD0  3B 9C 00 04 */	addi r28, r28, 4
/* 801C4094 001C0FD4  41 80 FF 18 */	blt lbl_801C3FAC
/* 801C4098 001C0FD8  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 801C409C 001C0FDC  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801C40A0 001C0FE0  7C 08 03 A6 */	mtlr r0
/* 801C40A4 001C0FE4  38 21 00 60 */	addi r1, r1, 0x60
/* 801C40A8 001C0FE8  4E 80 00 20 */	blr 
.endif

.if version == 1
.global calcVsScores__Q24Game13VsGameSectionFv
calcVsScores__Q24Game13VsGameSectionFv:
/* 801C40AC 001C0FEC  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 801C40B0 001C0FF0  7C 08 02 A6 */	mflr r0
/* 801C40B4 001C0FF4  90 01 01 84 */	stw r0, 0x184(r1)
/* 801C40B8 001C0FF8  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 801C40BC 001C0FFC  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 801C40C0 001C1000  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 801C40C4 001C1004  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 801C40C8 001C1008  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 801C40CC 001C100C  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 801C40D0 001C1010  BE C1 01 28 */	stmw r22, 0x128(r1)
/* 801C40D4 001C1014  7C 7D 1B 78 */	mr r29, r3
/* 801C40D8 001C1018  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C40DC 001C101C  38 80 00 01 */	li r4, 1
/* 801C40E0 001C1020  4B FB 79 BD */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C40E4 001C1024  90 61 00 18 */	stw r3, 0x18(r1)
/* 801C40E8 001C1028  38 80 00 00 */	li r4, 0
/* 801C40EC 001C102C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C40F0 001C1030  4B FB 79 AD */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C40F4 001C1034  3B E1 00 A8 */	addi r31, r1, 0xa8
/* 801C40F8 001C1038  3B C1 00 8C */	addi r30, r1, 0x8c
/* 801C40FC 001C103C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 801C4100 001C1040  7F BC EB 78 */	mr r28, r29
/* 801C4104 001C1044  7F FB FB 78 */	mr r27, r31
/* 801C4108 001C1048  7F DA F3 78 */	mr r26, r30
/* 801C410C 001C104C  7C 79 1B 78 */	mr r25, r3
/* 801C4110 001C1050  3B 00 00 00 */	li r24, 0
lbl_801C4114:
/* 801C4114 001C1054  82 FC 03 88 */	lwz r23, 0x3ac(r28)
/* 801C4118 001C1058  28 17 00 00 */	cmplwi r23, 0
/* 801C411C 001C105C  41 82 01 EC */	beq lbl_801C4308
/* 801C4120 001C1060  7E E3 BB 78 */	mr r3, r23
/* 801C4124 001C1064  81 97 00 00 */	lwz r12, 0(r23)
/* 801C4128 001C1068  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C412C 001C106C  7D 89 03 A6 */	mtctr r12
/* 801C4130 001C1070  4E 80 04 21 */	bctrl 
/* 801C4134 001C1074  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C4138 001C1078  41 82 01 D0 */	beq lbl_801C4308
/* 801C413C 001C107C  7E E3 BB 78 */	mr r3, r23
/* 801C4140 001C1080  4B FA 46 5D */	bl getStateID__Q24Game6PelletFv
/* 801C4144 001C1084  2C 03 00 00 */	cmpwi r3, 0
/* 801C4148 001C1088  40 82 01 C0 */	bne lbl_801C4308
/* 801C414C 001C108C  7E E3 BB 78 */	mr r3, r23
/* 801C4150 001C1090  3A C0 FF FF */	li r22, -1
/* 801C4154 001C1094  81 97 00 00 */	lwz r12, 0(r23)
/* 801C4158 001C1098  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 801C415C 001C109C  7D 89 03 A6 */	mtctr r12
/* 801C4160 001C10A0  4E 80 04 21 */	bctrl 
/* 801C4164 001C10A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C4168 001C10A8  41 82 00 2C */	beq lbl_801C4194
/* 801C416C 001C10AC  80 17 03 D4 */	lwz r0, 0x3d4(r23)
/* 801C4170 001C10B0  2C 00 00 01 */	cmpwi r0, 1
/* 801C4174 001C10B4  41 82 00 14 */	beq lbl_801C4188
/* 801C4178 001C10B8  40 80 00 1C */	bge lbl_801C4194
/* 801C417C 001C10BC  2C 00 00 00 */	cmpwi r0, 0
/* 801C4180 001C10C0  40 80 00 10 */	bge lbl_801C4190
/* 801C4184 001C10C4  48 00 00 10 */	b lbl_801C4194
lbl_801C4188:
/* 801C4188 001C10C8  3A C0 00 00 */	li r22, 0
/* 801C418C 001C10CC  48 00 00 08 */	b lbl_801C4194
lbl_801C4190:
/* 801C4190 001C10D0  3A C0 00 01 */	li r22, 1
lbl_801C4194:
/* 801C4194 001C10D4  7E E4 BB 78 */	mr r4, r23
/* 801C4198 001C10D8  38 61 00 80 */	addi r3, r1, 0x80
/* 801C419C 001C10DC  81 97 00 00 */	lwz r12, 0(r23)
/* 801C41A0 001C10E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C41A4 001C10E4  7D 89 03 A6 */	mtctr r12
/* 801C41A8 001C10E8  4E 80 04 21 */	bctrl 
/* 801C41AC 001C10EC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801C41B0 001C10F0  38 61 00 74 */	addi r3, r1, 0x74
/* 801C41B4 001C10F4  C3 C1 00 80 */	lfs f30, 0x80(r1)
/* 801C41B8 001C10F8  81 84 00 00 */	lwz r12, 0(r4)
/* 801C41BC 001C10FC  C3 A1 00 88 */	lfs f29, 0x88(r1)
/* 801C41C0 001C1100  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C41C4 001C1104  7D 89 03 A6 */	mtctr r12
/* 801C41C8 001C1108  4E 80 04 21 */	bctrl 
/* 801C41CC 001C110C  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 801C41D0 001C1110  C0 21 00 74 */	lfs f1, 0x74(r1)
/* 801C41D4 001C1114  EC 7D 00 28 */	fsubs f3, f29, f0
/* 801C41D8 001C1118  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C41DC 001C111C  EC 5E 08 28 */	fsubs f2, f30, f1
/* 801C41E0 001C1120  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C41E4 001C1124  EF E2 08 BA */	fmadds f31, f2, f2, f1
/* 801C41E8 001C1128  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801C41EC 001C112C  40 81 00 14 */	ble lbl_801C4200
/* 801C41F0 001C1130  40 81 00 14 */	ble lbl_801C4204
/* 801C41F4 001C1134  FC 00 F8 34 */	frsqrte f0, f31
/* 801C41F8 001C1138  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801C41FC 001C113C  48 00 00 08 */	b lbl_801C4204
lbl_801C4200:
/* 801C4200 001C1140  FF E0 00 90 */	fmr f31, f0
lbl_801C4204:
/* 801C4204 001C1144  7F 24 CB 78 */	mr r4, r25
/* 801C4208 001C1148  38 61 00 68 */	addi r3, r1, 0x68
/* 801C420C 001C114C  81 99 00 00 */	lwz r12, 0(r25)
/* 801C4210 001C1150  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4214 001C1154  7D 89 03 A6 */	mtctr r12
/* 801C4218 001C1158  4E 80 04 21 */	bctrl 
/* 801C421C 001C115C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 801C4220 001C1160  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 801C4224 001C1164  EC 7D 00 28 */	fsubs f3, f29, f0
/* 801C4228 001C1168  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C422C 001C116C  EC 5E 08 28 */	fsubs f2, f30, f1
/* 801C4230 001C1170  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4234 001C1174  EC 62 08 BA */	fmadds f3, f2, f2, f1
/* 801C4238 001C1178  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C423C 001C117C  40 81 00 14 */	ble lbl_801C4250
/* 801C4240 001C1180  40 81 00 14 */	ble lbl_801C4254
/* 801C4244 001C1184  FC 00 18 34 */	frsqrte f0, f3
/* 801C4248 001C1188  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801C424C 001C118C  48 00 00 08 */	b lbl_801C4254
lbl_801C4250:
/* 801C4250 001C1190  FC 60 00 90 */	fmr f3, f0
lbl_801C4254:
/* 801C4254 001C1194  EC 3F 18 2A */	fadds f1, f31, f3
/* 801C4258 001C1198  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C425C 001C119C  C0 42 B2 14 */	lfs f2, lbl_80519574@sda21(r2)
/* 801C4260 001C11A0  EC 23 08 24 */	fdivs f1, f3, f1
/* 801C4264 001C11A4  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C4268 001C11A8  EC 22 00 32 */	fmuls f1, f2, f0
/* 801C426C 001C11AC  4B F0 B7 41 */	bl exp
/* 801C4270 001C11B0  FC 00 08 18 */	frsp f0, f1
/* 801C4274 001C11B4  C0 22 B1 58 */	lfs f1, lbl_805194B8@sda21(r2)
/* 801C4278 001C11B8  80 17 00 B8 */	lwz r0, 0xb8(r23)
/* 801C427C 001C11BC  38 60 00 00 */	li r3, 0
/* 801C4280 001C11C0  EC 01 00 2A */	fadds f0, f1, f0
/* 801C4284 001C11C4  28 00 00 00 */	cmplwi r0, 0
/* 801C4288 001C11C8  EC 61 00 24 */	fdivs f3, f1, f0
/* 801C428C 001C11CC  41 82 00 08 */	beq lbl_801C4294
/* 801C4290 001C11D0  38 60 00 01 */	li r3, 1
lbl_801C4294:
/* 801C4294 001C11D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C4298 001C11D8  40 82 00 50 */	bne lbl_801C42E8
/* 801C429C 001C11DC  2C 16 FF FF */	cmpwi r22, -1
/* 801C42A0 001C11E0  40 82 00 18 */	bne lbl_801C42B8
/* 801C42A4 001C11E4  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C42A8 001C11E8  D0 7B 00 00 */	stfs f3, 0(r27)
/* 801C42AC 001C11EC  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C42B0 001C11F0  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C42B4 001C11F4  48 00 00 60 */	b lbl_801C4314
lbl_801C42B8:
/* 801C42B8 001C11F8  2C 16 00 00 */	cmpwi r22, 0
/* 801C42BC 001C11FC  40 82 00 14 */	bne lbl_801C42D0
/* 801C42C0 001C1200  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C42C4 001C1204  D0 7B 00 00 */	stfs f3, 0(r27)
/* 801C42C8 001C1208  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C42CC 001C120C  48 00 00 48 */	b lbl_801C4314
lbl_801C42D0:
/* 801C42D0 001C1210  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C42D4 001C1214  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C42D8 001C1218  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C42DC 001C121C  D0 3B 00 00 */	stfs f1, 0(r27)
/* 801C42E0 001C1220  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C42E4 001C1224  48 00 00 30 */	b lbl_801C4314
lbl_801C42E8:
/* 801C42E8 001C1228  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C42EC 001C122C  C0 42 B1 CC */	lfs f2, lbl_8051952C@sda21(r2)
/* 801C42F0 001C1230  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C42F4 001C1234  EC 22 00 F2 */	fmuls f1, f2, f3
/* 801C42F8 001C1238  EC 02 00 32 */	fmuls f0, f2, f0
/* 801C42FC 001C123C  D0 3B 00 00 */	stfs f1, 0(r27)
/* 801C4300 001C1240  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C4304 001C1244  48 00 00 10 */	b lbl_801C4314
lbl_801C4308:
/* 801C4308 001C1248  C0 02 B2 18 */	lfs f0, lbl_80519578@sda21(r2)
/* 801C430C 001C124C  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4310 001C1250  D0 1A 00 00 */	stfs f0, 0(r26)
lbl_801C4314:
/* 801C4314 001C1254  3B 18 00 01 */	addi r24, r24, 1
/* 801C4318 001C1258  3B 7B 00 04 */	addi r27, r27, 4
/* 801C431C 001C125C  2C 18 00 07 */	cmpwi r24, 7
/* 801C4320 001C1260  3B 5A 00 04 */	addi r26, r26, 4
/* 801C4324 001C1264  3B 9C 00 04 */	addi r28, r28, 4
/* 801C4328 001C1268  41 80 FD EC */	blt lbl_801C4114
/* 801C432C 001C126C  C0 62 B1 48 */	lfs f3, lbl_805194A8@sda21(r2)
/* 801C4330 001C1270  7F A7 EB 78 */	mr r7, r29
/* 801C4334 001C1274  C8 82 B1 68 */	lfd f4, lbl_805194C8@sda21(r2)
/* 801C4338 001C1278  39 01 00 10 */	addi r8, r1, 0x10
/* 801C433C 001C127C  C0 42 B2 1C */	lfs f2, lbl_8051957C@sda21(r2)
/* 801C4340 001C1280  39 20 00 00 */	li r9, 0
/* 801C4344 001C1284  C0 22 B2 20 */	lfs f1, lbl_80519580@sda21(r2)
/* 801C4348 001C1288  3C 60 43 30 */	lis r3, 0x4330
lbl_801C434C:
/* 801C434C 001C128C  80 87 03 DC */	lwz r4, 0x400(r7)
/* 801C4350 001C1290  38 00 00 07 */	li r0, 7
/* 801C4354 001C1294  90 61 01 18 */	stw r3, 0x118(r1)
/* 801C4358 001C1298  7F E5 FB 78 */	mr r5, r31
/* 801C435C 001C129C  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 801C4360 001C12A0  7F C6 F3 78 */	mr r6, r30
/* 801C4364 001C12A4  90 81 01 1C */	stw r4, 0x11c(r1)
/* 801C4368 001C12A8  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 801C436C 001C12AC  EC A0 20 28 */	fsubs f5, f0, f4
/* 801C4370 001C12B0  7C 09 03 A6 */	mtctr r0
lbl_801C4374:
/* 801C4374 001C12B4  2C 09 00 00 */	cmpwi r9, 0
/* 801C4378 001C12B8  40 82 00 18 */	bne lbl_801C4390
/* 801C437C 001C12BC  C0 05 00 00 */	lfs f0, 0(r5)
/* 801C4380 001C12C0  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801C4384 001C12C4  4C 41 13 82 */	cror 2, 1, 2
/* 801C4388 001C12C8  40 82 00 08 */	bne lbl_801C4390
/* 801C438C 001C12CC  EC A5 00 2A */	fadds f5, f5, f0
lbl_801C4390:
/* 801C4390 001C12D0  2C 09 00 01 */	cmpwi r9, 1
/* 801C4394 001C12D4  40 82 00 18 */	bne lbl_801C43AC
/* 801C4398 001C12D8  C0 06 00 00 */	lfs f0, 0(r6)
/* 801C439C 001C12DC  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801C43A0 001C12E0  4C 41 13 82 */	cror 2, 1, 2
/* 801C43A4 001C12E4  40 82 00 08 */	bne lbl_801C43AC
/* 801C43A8 001C12E8  EC A5 00 2A */	fadds f5, f5, f0
lbl_801C43AC:
/* 801C43AC 001C12EC  38 A5 00 04 */	addi r5, r5, 4
/* 801C43B0 001C12F0  38 C6 00 04 */	addi r6, r6, 4
/* 801C43B4 001C12F4  42 00 FF C0 */	bdnz lbl_801C4374
/* 801C43B8 001C12F8  FC 05 10 40 */	fcmpo cr0, f5, f2
/* 801C43BC 001C12FC  4C 41 13 82 */	cror 2, 1, 2
/* 801C43C0 001C1300  40 82 00 08 */	bne lbl_801C43C8
/* 801C43C4 001C1304  FC A0 10 90 */	fmr f5, f2
lbl_801C43C8:
/* 801C43C8 001C1308  EC A5 00 72 */	fmuls f5, f5, f1
/* 801C43CC 001C130C  39 29 00 01 */	addi r9, r9, 1
/* 801C43D0 001C1310  2C 09 00 02 */	cmpwi r9, 2
/* 801C43D4 001C1314  D0 A8 00 00 */	stfs f5, 0(r8)
/* 801C43D8 001C1318  C0 08 00 00 */	lfs f0, 0(r8)
/* 801C43DC 001C131C  39 08 00 04 */	addi r8, r8, 4
/* 801C43E0 001C1320  D0 07 03 70 */	stfs f0, 0x394(r7)
/* 801C43E4 001C1324  38 E7 00 04 */	addi r7, r7, 4
/* 801C43E8 001C1328  41 80 FF 64 */	blt lbl_801C434C
/* 801C43EC 001C132C  80 62 2B 18 */	lwz r3, lbl_80520E78@sda21(r2)
/* 801C43F0 001C1330  7F B9 EB 78 */	mr r25, r29
/* 801C43F4 001C1334  80 02 2B 1C */	lwz r0, lbl_80520E7C@sda21(r2)
/* 801C43F8 001C1338  3B 41 00 18 */	addi r26, r1, 0x18
/* 801C43FC 001C133C  90 61 00 08 */	stw r3, 8(r1)
/* 801C4400 001C1340  3B 61 00 08 */	addi r27, r1, 8
/* 801C4404 001C1344  3A C0 00 00 */	li r22, 0
/* 801C4408 001C1348  90 01 00 0C */	stw r0, 0xc(r1)
lbl_801C440C:
/* 801C440C 001C134C  80 99 03 80 */	lwz r4, 0x3a4(r25)
/* 801C4410 001C1350  82 FA 00 00 */	lwz r23, 0(r26)
/* 801C4414 001C1354  28 04 00 00 */	cmplwi r4, 0
/* 801C4418 001C1358  41 82 01 04 */	beq lbl_801C451C
/* 801C441C 001C135C  81 84 00 00 */	lwz r12, 0(r4)
/* 801C4420 001C1360  38 61 00 5C */	addi r3, r1, 0x5c
/* 801C4424 001C1364  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4428 001C1368  7D 89 03 A6 */	mtctr r12
/* 801C442C 001C136C  4E 80 04 21 */	bctrl 
/* 801C4430 001C1370  7E E4 BB 78 */	mr r4, r23
/* 801C4434 001C1374  38 61 00 50 */	addi r3, r1, 0x50
/* 801C4438 001C1378  81 97 00 00 */	lwz r12, 0(r23)
/* 801C443C 001C137C  C3 A1 00 5C */	lfs f29, 0x5c(r1)
/* 801C4440 001C1380  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4444 001C1384  C3 C1 00 64 */	lfs f30, 0x64(r1)
/* 801C4448 001C1388  7D 89 03 A6 */	mtctr r12
/* 801C444C 001C138C  4E 80 04 21 */	bctrl 
/* 801C4450 001C1390  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801C4454 001C1394  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 801C4458 001C1398  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C445C 001C139C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4460 001C13A0  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C4464 001C13A4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4468 001C13A8  EF E2 08 BA */	fmadds f31, f2, f2, f1
/* 801C446C 001C13AC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801C4470 001C13B0  40 81 00 14 */	ble lbl_801C4484
/* 801C4474 001C13B4  40 81 00 14 */	ble lbl_801C4488
/* 801C4478 001C13B8  FC 00 F8 34 */	frsqrte f0, f31
/* 801C447C 001C13BC  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801C4480 001C13C0  48 00 00 08 */	b lbl_801C4488
lbl_801C4484:
/* 801C4484 001C13C4  FF E0 00 90 */	fmr f31, f0
lbl_801C4488:
/* 801C4488 001C13C8  20 16 00 01 */	subfic r0, r22, 1
/* 801C448C 001C13CC  38 81 00 18 */	addi r4, r1, 0x18
/* 801C4490 001C13D0  54 00 10 3A */	slwi r0, r0, 2
/* 801C4494 001C13D4  38 61 00 44 */	addi r3, r1, 0x44
/* 801C4498 001C13D8  7C 84 00 2E */	lwzx r4, r4, r0
/* 801C449C 001C13DC  81 84 00 00 */	lwz r12, 0(r4)
/* 801C44A0 001C13E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C44A4 001C13E4  7D 89 03 A6 */	mtctr r12
/* 801C44A8 001C13E8  4E 80 04 21 */	bctrl 
/* 801C44AC 001C13EC  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 801C44B0 001C13F0  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 801C44B4 001C13F4  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C44B8 001C13F8  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C44BC 001C13FC  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C44C0 001C1400  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C44C4 001C1404  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801C44C8 001C1408  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C44CC 001C140C  40 81 00 14 */	ble lbl_801C44E0
/* 801C44D0 001C1410  40 81 00 14 */	ble lbl_801C44E4
/* 801C44D4 001C1414  FC 00 08 34 */	frsqrte f0, f1
/* 801C44D8 001C1418  EC 20 00 72 */	fmuls f1, f0, f1
/* 801C44DC 001C141C  48 00 00 08 */	b lbl_801C44E4
lbl_801C44E0:
/* 801C44E0 001C1420  FC 20 00 90 */	fmr f1, f0
lbl_801C44E4:
/* 801C44E4 001C1424  EC 3F 08 2A */	fadds f1, f31, f1
/* 801C44E8 001C1428  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C44EC 001C142C  C0 42 B2 14 */	lfs f2, lbl_80519574@sda21(r2)
/* 801C44F0 001C1430  EC 3F 08 24 */	fdivs f1, f31, f1
/* 801C44F4 001C1434  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C44F8 001C1438  EC 22 00 32 */	fmuls f1, f2, f0
/* 801C44FC 001C143C  4B F0 B4 B1 */	bl exp
/* 801C4500 001C1440  FC 00 08 18 */	frsp f0, f1
/* 801C4504 001C1444  C0 22 B1 58 */	lfs f1, lbl_805194B8@sda21(r2)
/* 801C4508 001C1448  EC 01 00 2A */	fadds f0, f1, f0
/* 801C450C 001C144C  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C4510 001C1450  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4514 001C1454  C0 1B 00 00 */	lfs f0, 0(r27)
/* 801C4518 001C1458  D0 19 03 78 */	stfs f0, 0x39c(r25)
lbl_801C451C:
/* 801C451C 001C145C  3A D6 00 01 */	addi r22, r22, 1
/* 801C4520 001C1460  3B 5A 00 04 */	addi r26, r26, 4
/* 801C4524 001C1464  2C 16 00 02 */	cmpwi r22, 2
/* 801C4528 001C1468  3B 7B 00 04 */	addi r27, r27, 4
/* 801C452C 001C146C  3B 39 00 04 */	addi r25, r25, 4
/* 801C4530 001C1470  41 80 FE DC */	blt lbl_801C440C
/* 801C4534 001C1474  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801C4538 001C1478  3B 81 00 EC */	addi r28, r1, 0xec
/* 801C453C 001C147C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801C4540 001C1480  3B C1 00 C4 */	addi r30, r1, 0xc4
/* 801C4544 001C1484  C0 41 00 08 */	lfs f2, 8(r1)
/* 801C4548 001C1488  7F 9A E3 78 */	mr r26, r28
/* 801C454C 001C148C  EC 23 00 28 */	fsubs f1, f3, f0
/* 801C4550 001C1490  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 801C4554 001C1494  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4558 001C1498  7F DB F3 78 */	mr r27, r30
/* 801C455C 001C149C  3A C0 00 00 */	li r22, 0
/* 801C4560 001C14A0  3B 20 00 00 */	li r25, 0
/* 801C4564 001C14A4  EC 21 10 28 */	fsubs f1, f1, f2
/* 801C4568 001C14A8  EC 00 20 28 */	fsubs f0, f0, f4
/* 801C456C 001C14AC  EC 24 08 2A */	fadds f1, f4, f1
/* 801C4570 001C14B0  EC 02 00 2A */	fadds f0, f2, f0
/* 801C4574 001C14B4  D0 3D 03 58 */	stfs f1, 0x37c(r29)
/* 801C4578 001C14B8  D0 1D 03 5C */	stfs f0, 0x380(r29)
lbl_801C457C:
/* 801C457C 001C14BC  80 7D 03 D0 */	lwz r3, 0x3f4(r29)
/* 801C4580 001C14C0  7E E3 C8 2E */	lwzx r23, r3, r25
/* 801C4584 001C14C4  7E E3 BB 78 */	mr r3, r23
/* 801C4588 001C14C8  81 97 00 00 */	lwz r12, 0(r23)
/* 801C458C 001C14CC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C4590 001C14D0  7D 89 03 A6 */	mtctr r12
/* 801C4594 001C14D4  4E 80 04 21 */	bctrl 
/* 801C4598 001C14D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C459C 001C14DC  41 82 01 D0 */	beq lbl_801C476C
/* 801C45A0 001C14E0  7E E3 BB 78 */	mr r3, r23
/* 801C45A4 001C14E4  4B FA 41 F9 */	bl getStateID__Q24Game6PelletFv
/* 801C45A8 001C14E8  2C 03 00 00 */	cmpwi r3, 0
/* 801C45AC 001C14EC  40 82 01 C0 */	bne lbl_801C476C
/* 801C45B0 001C14F0  7E E3 BB 78 */	mr r3, r23
/* 801C45B4 001C14F4  3B 00 FF FF */	li r24, -1
/* 801C45B8 001C14F8  81 97 00 00 */	lwz r12, 0(r23)
/* 801C45BC 001C14FC  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 801C45C0 001C1500  7D 89 03 A6 */	mtctr r12
/* 801C45C4 001C1504  4E 80 04 21 */	bctrl 
/* 801C45C8 001C1508  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C45CC 001C150C  41 82 00 2C */	beq lbl_801C45F8
/* 801C45D0 001C1510  80 17 03 D4 */	lwz r0, 0x3d4(r23)
/* 801C45D4 001C1514  2C 00 00 01 */	cmpwi r0, 1
/* 801C45D8 001C1518  41 82 00 14 */	beq lbl_801C45EC
/* 801C45DC 001C151C  40 80 00 1C */	bge lbl_801C45F8
/* 801C45E0 001C1520  2C 00 00 00 */	cmpwi r0, 0
/* 801C45E4 001C1524  40 80 00 10 */	bge lbl_801C45F4
/* 801C45E8 001C1528  48 00 00 10 */	b lbl_801C45F8
lbl_801C45EC:
/* 801C45EC 001C152C  3B 00 00 00 */	li r24, 0
/* 801C45F0 001C1530  48 00 00 08 */	b lbl_801C45F8
lbl_801C45F4:
/* 801C45F4 001C1534  3B 00 00 01 */	li r24, 1
lbl_801C45F8:
/* 801C45F8 001C1538  7E E4 BB 78 */	mr r4, r23
/* 801C45FC 001C153C  38 61 00 38 */	addi r3, r1, 0x38
/* 801C4600 001C1540  81 97 00 00 */	lwz r12, 0(r23)
/* 801C4604 001C1544  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4608 001C1548  7D 89 03 A6 */	mtctr r12
/* 801C460C 001C154C  4E 80 04 21 */	bctrl 
/* 801C4610 001C1550  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801C4614 001C1554  38 61 00 2C */	addi r3, r1, 0x2c
/* 801C4618 001C1558  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 801C461C 001C155C  81 84 00 00 */	lwz r12, 0(r4)
/* 801C4620 001C1560  C3 C1 00 40 */	lfs f30, 0x40(r1)
/* 801C4624 001C1564  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4628 001C1568  7D 89 03 A6 */	mtctr r12
/* 801C462C 001C156C  4E 80 04 21 */	bctrl 
/* 801C4630 001C1570  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 801C4634 001C1574  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801C4638 001C1578  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C463C 001C157C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4640 001C1580  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C4644 001C1584  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4648 001C1588  EF E2 08 BA */	fmadds f31, f2, f2, f1
/* 801C464C 001C158C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801C4650 001C1590  40 81 00 14 */	ble lbl_801C4664
/* 801C4654 001C1594  40 81 00 14 */	ble lbl_801C4668
/* 801C4658 001C1598  FC 00 F8 34 */	frsqrte f0, f31
/* 801C465C 001C159C  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801C4660 001C15A0  48 00 00 08 */	b lbl_801C4668
lbl_801C4664:
/* 801C4664 001C15A4  FF E0 00 90 */	fmr f31, f0
lbl_801C4668:
/* 801C4668 001C15A8  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 801C466C 001C15AC  38 61 00 20 */	addi r3, r1, 0x20
/* 801C4670 001C15B0  81 84 00 00 */	lwz r12, 0(r4)
/* 801C4674 001C15B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4678 001C15B8  7D 89 03 A6 */	mtctr r12
/* 801C467C 001C15BC  4E 80 04 21 */	bctrl 
/* 801C4680 001C15C0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801C4684 001C15C4  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 801C4688 001C15C8  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C468C 001C15CC  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4690 001C15D0  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C4694 001C15D4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4698 001C15D8  EC 62 08 BA */	fmadds f3, f2, f2, f1
/* 801C469C 001C15DC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C46A0 001C15E0  40 81 00 14 */	ble lbl_801C46B4
/* 801C46A4 001C15E4  40 81 00 14 */	ble lbl_801C46B8
/* 801C46A8 001C15E8  FC 00 18 34 */	frsqrte f0, f3
/* 801C46AC 001C15EC  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801C46B0 001C15F0  48 00 00 08 */	b lbl_801C46B8
lbl_801C46B4:
/* 801C46B4 001C15F4  FC 60 00 90 */	fmr f3, f0
lbl_801C46B8:
/* 801C46B8 001C15F8  EC 3F 18 2A */	fadds f1, f31, f3
/* 801C46BC 001C15FC  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C46C0 001C1600  C0 42 B2 14 */	lfs f2, lbl_80519574@sda21(r2)
/* 801C46C4 001C1604  EC 23 08 24 */	fdivs f1, f3, f1
/* 801C46C8 001C1608  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C46CC 001C160C  EC 22 00 32 */	fmuls f1, f2, f0
/* 801C46D0 001C1610  4B F0 B2 DD */	bl exp
/* 801C46D4 001C1614  FC 00 08 18 */	frsp f0, f1
/* 801C46D8 001C1618  C0 22 B1 58 */	lfs f1, lbl_805194B8@sda21(r2)
/* 801C46DC 001C161C  80 17 00 B8 */	lwz r0, 0xb8(r23)
/* 801C46E0 001C1620  38 60 00 00 */	li r3, 0
/* 801C46E4 001C1624  EC 01 00 2A */	fadds f0, f1, f0
/* 801C46E8 001C1628  28 00 00 00 */	cmplwi r0, 0
/* 801C46EC 001C162C  EC 61 00 24 */	fdivs f3, f1, f0
/* 801C46F0 001C1630  41 82 00 08 */	beq lbl_801C46F8
/* 801C46F4 001C1634  38 60 00 01 */	li r3, 1
lbl_801C46F8:
/* 801C46F8 001C1638  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C46FC 001C163C  40 82 00 50 */	bne lbl_801C474C
/* 801C4700 001C1640  2C 18 FF FF */	cmpwi r24, -1
/* 801C4704 001C1644  40 82 00 18 */	bne lbl_801C471C
/* 801C4708 001C1648  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C470C 001C164C  D0 7A 00 00 */	stfs f3, 0(r26)
/* 801C4710 001C1650  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4714 001C1654  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4718 001C1658  48 00 00 60 */	b lbl_801C4778
lbl_801C471C:
/* 801C471C 001C165C  2C 18 00 00 */	cmpwi r24, 0
/* 801C4720 001C1660  40 82 00 14 */	bne lbl_801C4734
/* 801C4724 001C1664  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4728 001C1668  D0 7A 00 00 */	stfs f3, 0(r26)
/* 801C472C 001C166C  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4730 001C1670  48 00 00 48 */	b lbl_801C4778
lbl_801C4734:
/* 801C4734 001C1674  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C4738 001C1678  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C473C 001C167C  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4740 001C1680  D0 3A 00 00 */	stfs f1, 0(r26)
/* 801C4744 001C1684  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4748 001C1688  48 00 00 30 */	b lbl_801C4778
lbl_801C474C:
/* 801C474C 001C168C  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C4750 001C1690  C0 42 B1 CC */	lfs f2, lbl_8051952C@sda21(r2)
/* 801C4754 001C1694  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4758 001C1698  EC 22 00 F2 */	fmuls f1, f2, f3
/* 801C475C 001C169C  EC 02 00 32 */	fmuls f0, f2, f0
/* 801C4760 001C16A0  D0 3A 00 00 */	stfs f1, 0(r26)
/* 801C4764 001C16A4  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4768 001C16A8  48 00 00 10 */	b lbl_801C4778
lbl_801C476C:
/* 801C476C 001C16AC  C0 02 B2 18 */	lfs f0, lbl_80519578@sda21(r2)
/* 801C4770 001C16B0  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C4774 001C16B4  D0 1B 00 00 */	stfs f0, 0(r27)
lbl_801C4778:
/* 801C4778 001C16B8  3A D6 00 01 */	addi r22, r22, 1
/* 801C477C 001C16BC  3B 5A 00 04 */	addi r26, r26, 4
/* 801C4780 001C16C0  2C 16 00 0A */	cmpwi r22, 0xa
/* 801C4784 001C16C4  3B 7B 00 04 */	addi r27, r27, 4
/* 801C4788 001C16C8  3B 39 00 04 */	addi r25, r25, 4
/* 801C478C 001C16CC  41 80 FD F0 */	blt lbl_801C457C
/* 801C4790 001C16D0  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C4794 001C16D4  7F A5 EB 78 */	mr r5, r29
/* 801C4798 001C16D8  38 C0 00 00 */	li r6, 0
lbl_801C479C:
/* 801C479C 001C16DC  FC 60 08 90 */	fmr f3, f1
/* 801C47A0 001C16E0  38 00 00 05 */	li r0, 5
/* 801C47A4 001C16E4  7F 83 E3 78 */	mr r3, r28
/* 801C47A8 001C16E8  7F C4 F3 78 */	mr r4, r30
/* 801C47AC 001C16EC  D0 25 03 68 */	stfs f1, 0x38c(r5)
/* 801C47B0 001C16F0  38 E0 00 00 */	li r7, 0
/* 801C47B4 001C16F4  7C 09 03 A6 */	mtctr r0
lbl_801C47B8:
/* 801C47B8 001C16F8  2C 06 00 00 */	cmpwi r6, 0
/* 801C47BC 001C16FC  C0 82 B1 48 */	lfs f4, lbl_805194A8@sda21(r2)
/* 801C47C0 001C1700  40 82 00 1C */	bne lbl_801C47DC
/* 801C47C4 001C1704  C0 03 00 00 */	lfs f0, 0(r3)
/* 801C47C8 001C1708  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C47CC 001C170C  4C 41 13 82 */	cror 2, 1, 2
/* 801C47D0 001C1710  40 82 00 0C */	bne lbl_801C47DC
/* 801C47D4 001C1714  EC 63 00 2A */	fadds f3, f3, f0
/* 801C47D8 001C1718  FC 80 00 90 */	fmr f4, f0
lbl_801C47DC:
/* 801C47DC 001C171C  2C 06 00 01 */	cmpwi r6, 1
/* 801C47E0 001C1720  40 82 00 20 */	bne lbl_801C4800
/* 801C47E4 001C1724  C0 44 00 00 */	lfs f2, 0(r4)
/* 801C47E8 001C1728  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C47EC 001C172C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C47F0 001C1730  4C 41 13 82 */	cror 2, 1, 2
/* 801C47F4 001C1734  40 82 00 0C */	bne lbl_801C4800
/* 801C47F8 001C1738  EC 63 10 2A */	fadds f3, f3, f2
/* 801C47FC 001C173C  FC 80 10 90 */	fmr f4, f2
lbl_801C4800:
/* 801C4800 001C1740  C0 05 03 68 */	lfs f0, 0x38c(r5)
/* 801C4804 001C1744  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C4808 001C1748  4C 40 13 82 */	cror 2, 0, 2
/* 801C480C 001C174C  40 82 00 08 */	bne lbl_801C4814
/* 801C4810 001C1750  D0 85 03 68 */	stfs f4, 0x38c(r5)
lbl_801C4814:
/* 801C4814 001C1754  2C 06 00 00 */	cmpwi r6, 0
/* 801C4818 001C1758  C0 82 B1 48 */	lfs f4, lbl_805194A8@sda21(r2)
/* 801C481C 001C175C  40 82 00 1C */	bne lbl_801C4838
/* 801C4820 001C1760  C0 03 00 04 */	lfs f0, 4(r3)
/* 801C4824 001C1764  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C4828 001C1768  4C 41 13 82 */	cror 2, 1, 2
/* 801C482C 001C176C  40 82 00 0C */	bne lbl_801C4838
/* 801C4830 001C1770  EC 63 00 2A */	fadds f3, f3, f0
/* 801C4834 001C1774  FC 80 00 90 */	fmr f4, f0
lbl_801C4838:
/* 801C4838 001C1778  2C 06 00 01 */	cmpwi r6, 1
/* 801C483C 001C177C  40 82 00 20 */	bne lbl_801C485C
/* 801C4840 001C1780  C0 44 00 04 */	lfs f2, 4(r4)
/* 801C4844 001C1784  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4848 001C1788  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C484C 001C178C  4C 41 13 82 */	cror 2, 1, 2
/* 801C4850 001C1790  40 82 00 0C */	bne lbl_801C485C
/* 801C4854 001C1794  EC 63 10 2A */	fadds f3, f3, f2
/* 801C4858 001C1798  FC 80 10 90 */	fmr f4, f2
lbl_801C485C:
/* 801C485C 001C179C  C0 05 03 68 */	lfs f0, 0x38c(r5)
/* 801C4860 001C17A0  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C4864 001C17A4  4C 40 13 82 */	cror 2, 0, 2
/* 801C4868 001C17A8  40 82 00 08 */	bne lbl_801C4870
/* 801C486C 001C17AC  D0 85 03 68 */	stfs f4, 0x38c(r5)
lbl_801C4870:
/* 801C4870 001C17B0  38 63 00 08 */	addi r3, r3, 8
/* 801C4874 001C17B4  38 84 00 08 */	addi r4, r4, 8
/* 801C4878 001C17B8  38 E7 00 01 */	addi r7, r7, 1
/* 801C487C 001C17BC  42 00 FF 3C */	bdnz lbl_801C47B8
/* 801C4880 001C17C0  38 C6 00 01 */	addi r6, r6, 1
/* 801C4884 001C17C4  D0 65 03 60 */	stfs f3, 0x384(r5)
/* 801C4888 001C17C8  2C 06 00 02 */	cmpwi r6, 2
/* 801C488C 001C17CC  38 A5 00 04 */	addi r5, r5, 4
/* 801C4890 001C17D0  41 80 FF 0C */	blt lbl_801C479C
/* 801C4894 001C17D4  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 801C4898 001C17D8  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 801C489C 001C17DC  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 801C48A0 001C17E0  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 801C48A4 001C17E4  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 801C48A8 001C17E8  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 801C48AC 001C17EC  BA C1 01 28 */	lmw r22, 0x128(r1)
/* 801C48B0 001C17F0  80 01 01 84 */	lwz r0, 0x184(r1)
/* 801C48B4 001C17F4  7C 08 03 A6 */	mtlr r0
/* 801C48B8 001C17F8  38 21 01 80 */	addi r1, r1, 0x180
/* 801C48BC 001C17FC  4E 80 00 20 */	blr 
.else
.global calcVsScores__Q24Game13VsGameSectionFv
calcVsScores__Q24Game13VsGameSectionFv:
/* 801C40AC 001C0FEC  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 801C40B0 001C0FF0  7C 08 02 A6 */	mflr r0
/* 801C40B4 001C0FF4  90 01 01 84 */	stw r0, 0x184(r1)
/* 801C40B8 001C0FF8  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 801C40BC 001C0FFC  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 801C40C0 001C1000  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 801C40C4 001C1004  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 801C40C8 001C1008  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 801C40CC 001C100C  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 801C40D0 001C1010  BE C1 01 28 */	stmw r22, 0x128(r1)
/* 801C40D4 001C1014  7C 7D 1B 78 */	mr r29, r3
/* 801C40D8 001C1018  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C40DC 001C101C  38 80 00 01 */	li r4, 1
/* 801C40E0 001C1020  4B FB 79 BD */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C40E4 001C1024  90 61 00 18 */	stw r3, 0x18(r1)
/* 801C40E8 001C1028  38 80 00 00 */	li r4, 0
/* 801C40EC 001C102C  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801C40F0 001C1030  4B FB 79 AD */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 801C40F4 001C1034  3B E1 00 A8 */	addi r31, r1, 0xa8
/* 801C40F8 001C1038  3B C1 00 8C */	addi r30, r1, 0x8c
/* 801C40FC 001C103C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 801C4100 001C1040  7F BC EB 78 */	mr r28, r29
/* 801C4104 001C1044  7F FB FB 78 */	mr r27, r31
/* 801C4108 001C1048  7F DA F3 78 */	mr r26, r30
/* 801C410C 001C104C  7C 79 1B 78 */	mr r25, r3
/* 801C4110 001C1050  3B 00 00 00 */	li r24, 0
lbl_801C4114:
/* 801C4114 001C1054  82 FC 03 88 */	lwz r23, 0x388(r28)
/* 801C4118 001C1058  28 17 00 00 */	cmplwi r23, 0
/* 801C411C 001C105C  41 82 01 EC */	beq lbl_801C4308
/* 801C4120 001C1060  7E E3 BB 78 */	mr r3, r23
/* 801C4124 001C1064  81 97 00 00 */	lwz r12, 0(r23)
/* 801C4128 001C1068  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C412C 001C106C  7D 89 03 A6 */	mtctr r12
/* 801C4130 001C1070  4E 80 04 21 */	bctrl 
/* 801C4134 001C1074  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C4138 001C1078  41 82 01 D0 */	beq lbl_801C4308
/* 801C413C 001C107C  7E E3 BB 78 */	mr r3, r23
/* 801C4140 001C1080  4B FA 46 5D */	bl getStateID__Q24Game6PelletFv
/* 801C4144 001C1084  2C 03 00 00 */	cmpwi r3, 0
/* 801C4148 001C1088  40 82 01 C0 */	bne lbl_801C4308
/* 801C414C 001C108C  7E E3 BB 78 */	mr r3, r23
/* 801C4150 001C1090  3A C0 FF FF */	li r22, -1
/* 801C4154 001C1094  81 97 00 00 */	lwz r12, 0(r23)
/* 801C4158 001C1098  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 801C415C 001C109C  7D 89 03 A6 */	mtctr r12
/* 801C4160 001C10A0  4E 80 04 21 */	bctrl 
/* 801C4164 001C10A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C4168 001C10A8  41 82 00 2C */	beq lbl_801C4194
/* 801C416C 001C10AC  80 17 03 D4 */	lwz r0, 0x3d4(r23)
/* 801C4170 001C10B0  2C 00 00 01 */	cmpwi r0, 1
/* 801C4174 001C10B4  41 82 00 14 */	beq lbl_801C4188
/* 801C4178 001C10B8  40 80 00 1C */	bge lbl_801C4194
/* 801C417C 001C10BC  2C 00 00 00 */	cmpwi r0, 0
/* 801C4180 001C10C0  40 80 00 10 */	bge lbl_801C4190
/* 801C4184 001C10C4  48 00 00 10 */	b lbl_801C4194
lbl_801C4188:
/* 801C4188 001C10C8  3A C0 00 00 */	li r22, 0
/* 801C418C 001C10CC  48 00 00 08 */	b lbl_801C4194
lbl_801C4190:
/* 801C4190 001C10D0  3A C0 00 01 */	li r22, 1
lbl_801C4194:
/* 801C4194 001C10D4  7E E4 BB 78 */	mr r4, r23
/* 801C4198 001C10D8  38 61 00 80 */	addi r3, r1, 0x80
/* 801C419C 001C10DC  81 97 00 00 */	lwz r12, 0(r23)
/* 801C41A0 001C10E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C41A4 001C10E4  7D 89 03 A6 */	mtctr r12
/* 801C41A8 001C10E8  4E 80 04 21 */	bctrl 
/* 801C41AC 001C10EC  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801C41B0 001C10F0  38 61 00 74 */	addi r3, r1, 0x74
/* 801C41B4 001C10F4  C3 C1 00 80 */	lfs f30, 0x80(r1)
/* 801C41B8 001C10F8  81 84 00 00 */	lwz r12, 0(r4)
/* 801C41BC 001C10FC  C3 A1 00 88 */	lfs f29, 0x88(r1)
/* 801C41C0 001C1100  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C41C4 001C1104  7D 89 03 A6 */	mtctr r12
/* 801C41C8 001C1108  4E 80 04 21 */	bctrl 
/* 801C41CC 001C110C  C0 01 00 7C */	lfs f0, 0x7c(r1)
/* 801C41D0 001C1110  C0 21 00 74 */	lfs f1, 0x74(r1)
/* 801C41D4 001C1114  EC 7D 00 28 */	fsubs f3, f29, f0
/* 801C41D8 001C1118  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C41DC 001C111C  EC 5E 08 28 */	fsubs f2, f30, f1
/* 801C41E0 001C1120  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C41E4 001C1124  EF E2 08 BA */	fmadds f31, f2, f2, f1
/* 801C41E8 001C1128  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801C41EC 001C112C  40 81 00 14 */	ble lbl_801C4200
/* 801C41F0 001C1130  40 81 00 14 */	ble lbl_801C4204
/* 801C41F4 001C1134  FC 00 F8 34 */	frsqrte f0, f31
/* 801C41F8 001C1138  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801C41FC 001C113C  48 00 00 08 */	b lbl_801C4204
lbl_801C4200:
/* 801C4200 001C1140  FF E0 00 90 */	fmr f31, f0
lbl_801C4204:
/* 801C4204 001C1144  7F 24 CB 78 */	mr r4, r25
/* 801C4208 001C1148  38 61 00 68 */	addi r3, r1, 0x68
/* 801C420C 001C114C  81 99 00 00 */	lwz r12, 0(r25)
/* 801C4210 001C1150  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4214 001C1154  7D 89 03 A6 */	mtctr r12
/* 801C4218 001C1158  4E 80 04 21 */	bctrl 
/* 801C421C 001C115C  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 801C4220 001C1160  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 801C4224 001C1164  EC 7D 00 28 */	fsubs f3, f29, f0
/* 801C4228 001C1168  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C422C 001C116C  EC 5E 08 28 */	fsubs f2, f30, f1
/* 801C4230 001C1170  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4234 001C1174  EC 62 08 BA */	fmadds f3, f2, f2, f1
/* 801C4238 001C1178  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C423C 001C117C  40 81 00 14 */	ble lbl_801C4250
/* 801C4240 001C1180  40 81 00 14 */	ble lbl_801C4254
/* 801C4244 001C1184  FC 00 18 34 */	frsqrte f0, f3
/* 801C4248 001C1188  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801C424C 001C118C  48 00 00 08 */	b lbl_801C4254
lbl_801C4250:
/* 801C4250 001C1190  FC 60 00 90 */	fmr f3, f0
lbl_801C4254:
/* 801C4254 001C1194  EC 3F 18 2A */	fadds f1, f31, f3
/* 801C4258 001C1198  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C425C 001C119C  C0 42 B2 14 */	lfs f2, lbl_80519574@sda21(r2)
/* 801C4260 001C11A0  EC 23 08 24 */	fdivs f1, f3, f1
/* 801C4264 001C11A4  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C4268 001C11A8  EC 22 00 32 */	fmuls f1, f2, f0
/* 801C426C 001C11AC  4B F0 B7 41 */	bl exp
/* 801C4270 001C11B0  FC 00 08 18 */	frsp f0, f1
/* 801C4274 001C11B4  C0 22 B1 58 */	lfs f1, lbl_805194B8@sda21(r2)
/* 801C4278 001C11B8  80 17 00 B8 */	lwz r0, 0xb8(r23)
/* 801C427C 001C11BC  38 60 00 00 */	li r3, 0
/* 801C4280 001C11C0  EC 01 00 2A */	fadds f0, f1, f0
/* 801C4284 001C11C4  28 00 00 00 */	cmplwi r0, 0
/* 801C4288 001C11C8  EC 61 00 24 */	fdivs f3, f1, f0
/* 801C428C 001C11CC  41 82 00 08 */	beq lbl_801C4294
/* 801C4290 001C11D0  38 60 00 01 */	li r3, 1
lbl_801C4294:
/* 801C4294 001C11D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C4298 001C11D8  40 82 00 50 */	bne lbl_801C42E8
/* 801C429C 001C11DC  2C 16 FF FF */	cmpwi r22, -1
/* 801C42A0 001C11E0  40 82 00 18 */	bne lbl_801C42B8
/* 801C42A4 001C11E4  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C42A8 001C11E8  D0 7B 00 00 */	stfs f3, 0(r27)
/* 801C42AC 001C11EC  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C42B0 001C11F0  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C42B4 001C11F4  48 00 00 60 */	b lbl_801C4314
lbl_801C42B8:
/* 801C42B8 001C11F8  2C 16 00 00 */	cmpwi r22, 0
/* 801C42BC 001C11FC  40 82 00 14 */	bne lbl_801C42D0
/* 801C42C0 001C1200  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C42C4 001C1204  D0 7B 00 00 */	stfs f3, 0(r27)
/* 801C42C8 001C1208  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C42CC 001C120C  48 00 00 48 */	b lbl_801C4314
lbl_801C42D0:
/* 801C42D0 001C1210  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C42D4 001C1214  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C42D8 001C1218  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C42DC 001C121C  D0 3B 00 00 */	stfs f1, 0(r27)
/* 801C42E0 001C1220  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C42E4 001C1224  48 00 00 30 */	b lbl_801C4314
lbl_801C42E8:
/* 801C42E8 001C1228  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C42EC 001C122C  C0 42 B1 CC */	lfs f2, lbl_8051952C@sda21(r2)
/* 801C42F0 001C1230  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C42F4 001C1234  EC 22 00 F2 */	fmuls f1, f2, f3
/* 801C42F8 001C1238  EC 02 00 32 */	fmuls f0, f2, f0
/* 801C42FC 001C123C  D0 3B 00 00 */	stfs f1, 0(r27)
/* 801C4300 001C1240  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C4304 001C1244  48 00 00 10 */	b lbl_801C4314
lbl_801C4308:
/* 801C4308 001C1248  C0 02 B2 18 */	lfs f0, lbl_80519578@sda21(r2)
/* 801C430C 001C124C  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4310 001C1250  D0 1A 00 00 */	stfs f0, 0(r26)
lbl_801C4314:
/* 801C4314 001C1254  3B 18 00 01 */	addi r24, r24, 1
/* 801C4318 001C1258  3B 7B 00 04 */	addi r27, r27, 4
/* 801C431C 001C125C  2C 18 00 07 */	cmpwi r24, 7
/* 801C4320 001C1260  3B 5A 00 04 */	addi r26, r26, 4
/* 801C4324 001C1264  3B 9C 00 04 */	addi r28, r28, 4
/* 801C4328 001C1268  41 80 FD EC */	blt lbl_801C4114
/* 801C432C 001C126C  C0 62 B1 48 */	lfs f3, lbl_805194A8@sda21(r2)
/* 801C4330 001C1270  7F A7 EB 78 */	mr r7, r29
/* 801C4334 001C1274  C8 82 B1 68 */	lfd f4, lbl_805194C8@sda21(r2)
/* 801C4338 001C1278  39 01 00 10 */	addi r8, r1, 0x10
/* 801C433C 001C127C  C0 42 B2 1C */	lfs f2, lbl_8051957C@sda21(r2)
/* 801C4340 001C1280  39 20 00 00 */	li r9, 0
/* 801C4344 001C1284  C0 22 B2 20 */	lfs f1, lbl_80519580@sda21(r2)
/* 801C4348 001C1288  3C 60 43 30 */	lis r3, 0x4330
lbl_801C434C:
/* 801C434C 001C128C  80 87 03 DC */	lwz r4, 0x3dc(r7)
/* 801C4350 001C1290  38 00 00 07 */	li r0, 7
/* 801C4354 001C1294  90 61 01 18 */	stw r3, 0x118(r1)
/* 801C4358 001C1298  7F E5 FB 78 */	mr r5, r31
/* 801C435C 001C129C  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 801C4360 001C12A0  7F C6 F3 78 */	mr r6, r30
/* 801C4364 001C12A4  90 81 01 1C */	stw r4, 0x11c(r1)
/* 801C4368 001C12A8  C8 01 01 18 */	lfd f0, 0x118(r1)
/* 801C436C 001C12AC  EC A0 20 28 */	fsubs f5, f0, f4
/* 801C4370 001C12B0  7C 09 03 A6 */	mtctr r0
lbl_801C4374:
/* 801C4374 001C12B4  2C 09 00 00 */	cmpwi r9, 0
/* 801C4378 001C12B8  40 82 00 18 */	bne lbl_801C4390
/* 801C437C 001C12BC  C0 05 00 00 */	lfs f0, 0(r5)
/* 801C4380 001C12C0  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801C4384 001C12C4  4C 41 13 82 */	cror 2, 1, 2
/* 801C4388 001C12C8  40 82 00 08 */	bne lbl_801C4390
/* 801C438C 001C12CC  EC A5 00 2A */	fadds f5, f5, f0
lbl_801C4390:
/* 801C4390 001C12D0  2C 09 00 01 */	cmpwi r9, 1
/* 801C4394 001C12D4  40 82 00 18 */	bne lbl_801C43AC
/* 801C4398 001C12D8  C0 06 00 00 */	lfs f0, 0(r6)
/* 801C439C 001C12DC  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801C43A0 001C12E0  4C 41 13 82 */	cror 2, 1, 2
/* 801C43A4 001C12E4  40 82 00 08 */	bne lbl_801C43AC
/* 801C43A8 001C12E8  EC A5 00 2A */	fadds f5, f5, f0
lbl_801C43AC:
/* 801C43AC 001C12EC  38 A5 00 04 */	addi r5, r5, 4
/* 801C43B0 001C12F0  38 C6 00 04 */	addi r6, r6, 4
/* 801C43B4 001C12F4  42 00 FF C0 */	bdnz lbl_801C4374
/* 801C43B8 001C12F8  FC 05 10 40 */	fcmpo cr0, f5, f2
/* 801C43BC 001C12FC  4C 41 13 82 */	cror 2, 1, 2
/* 801C43C0 001C1300  40 82 00 08 */	bne lbl_801C43C8
/* 801C43C4 001C1304  FC A0 10 90 */	fmr f5, f2
lbl_801C43C8:
/* 801C43C8 001C1308  EC A5 00 72 */	fmuls f5, f5, f1
/* 801C43CC 001C130C  39 29 00 01 */	addi r9, r9, 1
/* 801C43D0 001C1310  2C 09 00 02 */	cmpwi r9, 2
/* 801C43D4 001C1314  D0 A8 00 00 */	stfs f5, 0(r8)
/* 801C43D8 001C1318  C0 08 00 00 */	lfs f0, 0(r8)
/* 801C43DC 001C131C  39 08 00 04 */	addi r8, r8, 4
/* 801C43E0 001C1320  D0 07 03 70 */	stfs f0, 0x370(r7)
/* 801C43E4 001C1324  38 E7 00 04 */	addi r7, r7, 4
/* 801C43E8 001C1328  41 80 FF 64 */	blt lbl_801C434C
/* 801C43EC 001C132C  80 62 2B 18 */	lwz r3, lbl_80520E78@sda21(r2)
/* 801C43F0 001C1330  7F B9 EB 78 */	mr r25, r29
/* 801C43F4 001C1334  80 02 2B 1C */	lwz r0, lbl_80520E7C@sda21(r2)
/* 801C43F8 001C1338  3B 41 00 18 */	addi r26, r1, 0x18
/* 801C43FC 001C133C  90 61 00 08 */	stw r3, 8(r1)
/* 801C4400 001C1340  3B 61 00 08 */	addi r27, r1, 8
/* 801C4404 001C1344  3A C0 00 00 */	li r22, 0
/* 801C4408 001C1348  90 01 00 0C */	stw r0, 0xc(r1)
lbl_801C440C:
/* 801C440C 001C134C  80 99 03 80 */	lwz r4, 0x380(r25)
/* 801C4410 001C1350  82 FA 00 00 */	lwz r23, 0(r26)
/* 801C4414 001C1354  28 04 00 00 */	cmplwi r4, 0
/* 801C4418 001C1358  41 82 01 04 */	beq lbl_801C451C
/* 801C441C 001C135C  81 84 00 00 */	lwz r12, 0(r4)
/* 801C4420 001C1360  38 61 00 5C */	addi r3, r1, 0x5c
/* 801C4424 001C1364  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4428 001C1368  7D 89 03 A6 */	mtctr r12
/* 801C442C 001C136C  4E 80 04 21 */	bctrl 
/* 801C4430 001C1370  7E E4 BB 78 */	mr r4, r23
/* 801C4434 001C1374  38 61 00 50 */	addi r3, r1, 0x50
/* 801C4438 001C1378  81 97 00 00 */	lwz r12, 0(r23)
/* 801C443C 001C137C  C3 A1 00 5C */	lfs f29, 0x5c(r1)
/* 801C4440 001C1380  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4444 001C1384  C3 C1 00 64 */	lfs f30, 0x64(r1)
/* 801C4448 001C1388  7D 89 03 A6 */	mtctr r12
/* 801C444C 001C138C  4E 80 04 21 */	bctrl 
/* 801C4450 001C1390  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801C4454 001C1394  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 801C4458 001C1398  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C445C 001C139C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4460 001C13A0  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C4464 001C13A4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4468 001C13A8  EF E2 08 BA */	fmadds f31, f2, f2, f1
/* 801C446C 001C13AC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801C4470 001C13B0  40 81 00 14 */	ble lbl_801C4484
/* 801C4474 001C13B4  40 81 00 14 */	ble lbl_801C4488
/* 801C4478 001C13B8  FC 00 F8 34 */	frsqrte f0, f31
/* 801C447C 001C13BC  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801C4480 001C13C0  48 00 00 08 */	b lbl_801C4488
lbl_801C4484:
/* 801C4484 001C13C4  FF E0 00 90 */	fmr f31, f0
lbl_801C4488:
/* 801C4488 001C13C8  20 16 00 01 */	subfic r0, r22, 1
/* 801C448C 001C13CC  38 81 00 18 */	addi r4, r1, 0x18
/* 801C4490 001C13D0  54 00 10 3A */	slwi r0, r0, 2
/* 801C4494 001C13D4  38 61 00 44 */	addi r3, r1, 0x44
/* 801C4498 001C13D8  7C 84 00 2E */	lwzx r4, r4, r0
/* 801C449C 001C13DC  81 84 00 00 */	lwz r12, 0(r4)
/* 801C44A0 001C13E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C44A4 001C13E4  7D 89 03 A6 */	mtctr r12
/* 801C44A8 001C13E8  4E 80 04 21 */	bctrl 
/* 801C44AC 001C13EC  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 801C44B0 001C13F0  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 801C44B4 001C13F4  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C44B8 001C13F8  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C44BC 001C13FC  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C44C0 001C1400  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C44C4 001C1404  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801C44C8 001C1408  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801C44CC 001C140C  40 81 00 14 */	ble lbl_801C44E0
/* 801C44D0 001C1410  40 81 00 14 */	ble lbl_801C44E4
/* 801C44D4 001C1414  FC 00 08 34 */	frsqrte f0, f1
/* 801C44D8 001C1418  EC 20 00 72 */	fmuls f1, f0, f1
/* 801C44DC 001C141C  48 00 00 08 */	b lbl_801C44E4
lbl_801C44E0:
/* 801C44E0 001C1420  FC 20 00 90 */	fmr f1, f0
lbl_801C44E4:
/* 801C44E4 001C1424  EC 3F 08 2A */	fadds f1, f31, f1
/* 801C44E8 001C1428  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C44EC 001C142C  C0 42 B2 14 */	lfs f2, lbl_80519574@sda21(r2)
/* 801C44F0 001C1430  EC 3F 08 24 */	fdivs f1, f31, f1
/* 801C44F4 001C1434  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C44F8 001C1438  EC 22 00 32 */	fmuls f1, f2, f0
/* 801C44FC 001C143C  4B F0 B4 B1 */	bl exp
/* 801C4500 001C1440  FC 00 08 18 */	frsp f0, f1
/* 801C4504 001C1444  C0 22 B1 58 */	lfs f1, lbl_805194B8@sda21(r2)
/* 801C4508 001C1448  EC 01 00 2A */	fadds f0, f1, f0
/* 801C450C 001C144C  EC 01 00 24 */	fdivs f0, f1, f0
/* 801C4510 001C1450  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4514 001C1454  C0 1B 00 00 */	lfs f0, 0(r27)
/* 801C4518 001C1458  D0 19 03 78 */	stfs f0, 0x378(r25)
lbl_801C451C:
/* 801C451C 001C145C  3A D6 00 01 */	addi r22, r22, 1
/* 801C4520 001C1460  3B 5A 00 04 */	addi r26, r26, 4
/* 801C4524 001C1464  2C 16 00 02 */	cmpwi r22, 2
/* 801C4528 001C1468  3B 7B 00 04 */	addi r27, r27, 4
/* 801C452C 001C146C  3B 39 00 04 */	addi r25, r25, 4
/* 801C4530 001C1470  41 80 FE DC */	blt lbl_801C440C
/* 801C4534 001C1474  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801C4538 001C1478  3B 81 00 EC */	addi r28, r1, 0xec
/* 801C453C 001C147C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801C4540 001C1480  3B C1 00 C4 */	addi r30, r1, 0xc4
/* 801C4544 001C1484  C0 41 00 08 */	lfs f2, 8(r1)
/* 801C4548 001C1488  7F 9A E3 78 */	mr r26, r28
/* 801C454C 001C148C  EC 23 00 28 */	fsubs f1, f3, f0
/* 801C4550 001C1490  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 801C4554 001C1494  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4558 001C1498  7F DB F3 78 */	mr r27, r30
/* 801C455C 001C149C  3A C0 00 00 */	li r22, 0
/* 801C4560 001C14A0  3B 20 00 00 */	li r25, 0
/* 801C4564 001C14A4  EC 21 10 28 */	fsubs f1, f1, f2
/* 801C4568 001C14A8  EC 00 20 28 */	fsubs f0, f0, f4
/* 801C456C 001C14AC  EC 24 08 2A */	fadds f1, f4, f1
/* 801C4570 001C14B0  EC 02 00 2A */	fadds f0, f2, f0
/* 801C4574 001C14B4  D0 3D 03 58 */	stfs f1, 0x358(r29)
/* 801C4578 001C14B8  D0 1D 03 5C */	stfs f0, 0x35c(r29)
lbl_801C457C:
/* 801C457C 001C14BC  80 7D 03 D0 */	lwz r3, 0x3d0(r29)
/* 801C4580 001C14C0  7E E3 C8 2E */	lwzx r23, r3, r25
/* 801C4584 001C14C4  7E E3 BB 78 */	mr r3, r23
/* 801C4588 001C14C8  81 97 00 00 */	lwz r12, 0(r23)
/* 801C458C 001C14CC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801C4590 001C14D0  7D 89 03 A6 */	mtctr r12
/* 801C4594 001C14D4  4E 80 04 21 */	bctrl 
/* 801C4598 001C14D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C459C 001C14DC  41 82 01 D0 */	beq lbl_801C476C
/* 801C45A0 001C14E0  7E E3 BB 78 */	mr r3, r23
/* 801C45A4 001C14E4  4B FA 41 F9 */	bl getStateID__Q24Game6PelletFv
/* 801C45A8 001C14E8  2C 03 00 00 */	cmpwi r3, 0
/* 801C45AC 001C14EC  40 82 01 C0 */	bne lbl_801C476C
/* 801C45B0 001C14F0  7E E3 BB 78 */	mr r3, r23
/* 801C45B4 001C14F4  3B 00 FF FF */	li r24, -1
/* 801C45B8 001C14F8  81 97 00 00 */	lwz r12, 0(r23)
/* 801C45BC 001C14FC  81 8C 02 04 */	lwz r12, 0x204(r12)
/* 801C45C0 001C1500  7D 89 03 A6 */	mtctr r12
/* 801C45C4 001C1504  4E 80 04 21 */	bctrl 
/* 801C45C8 001C1508  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C45CC 001C150C  41 82 00 2C */	beq lbl_801C45F8
/* 801C45D0 001C1510  80 17 03 D4 */	lwz r0, 0x3d4(r23)
/* 801C45D4 001C1514  2C 00 00 01 */	cmpwi r0, 1
/* 801C45D8 001C1518  41 82 00 14 */	beq lbl_801C45EC
/* 801C45DC 001C151C  40 80 00 1C */	bge lbl_801C45F8
/* 801C45E0 001C1520  2C 00 00 00 */	cmpwi r0, 0
/* 801C45E4 001C1524  40 80 00 10 */	bge lbl_801C45F4
/* 801C45E8 001C1528  48 00 00 10 */	b lbl_801C45F8
lbl_801C45EC:
/* 801C45EC 001C152C  3B 00 00 00 */	li r24, 0
/* 801C45F0 001C1530  48 00 00 08 */	b lbl_801C45F8
lbl_801C45F4:
/* 801C45F4 001C1534  3B 00 00 01 */	li r24, 1
lbl_801C45F8:
/* 801C45F8 001C1538  7E E4 BB 78 */	mr r4, r23
/* 801C45FC 001C153C  38 61 00 38 */	addi r3, r1, 0x38
/* 801C4600 001C1540  81 97 00 00 */	lwz r12, 0(r23)
/* 801C4604 001C1544  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4608 001C1548  7D 89 03 A6 */	mtctr r12
/* 801C460C 001C154C  4E 80 04 21 */	bctrl 
/* 801C4610 001C1550  80 81 00 18 */	lwz r4, 0x18(r1)
/* 801C4614 001C1554  38 61 00 2C */	addi r3, r1, 0x2c
/* 801C4618 001C1558  C3 A1 00 38 */	lfs f29, 0x38(r1)
/* 801C461C 001C155C  81 84 00 00 */	lwz r12, 0(r4)
/* 801C4620 001C1560  C3 C1 00 40 */	lfs f30, 0x40(r1)
/* 801C4624 001C1564  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4628 001C1568  7D 89 03 A6 */	mtctr r12
/* 801C462C 001C156C  4E 80 04 21 */	bctrl 
/* 801C4630 001C1570  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 801C4634 001C1574  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 801C4638 001C1578  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C463C 001C157C  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4640 001C1580  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C4644 001C1584  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4648 001C1588  EF E2 08 BA */	fmadds f31, f2, f2, f1
/* 801C464C 001C158C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801C4650 001C1590  40 81 00 14 */	ble lbl_801C4664
/* 801C4654 001C1594  40 81 00 14 */	ble lbl_801C4668
/* 801C4658 001C1598  FC 00 F8 34 */	frsqrte f0, f31
/* 801C465C 001C159C  EF E0 07 F2 */	fmuls f31, f0, f31
/* 801C4660 001C15A0  48 00 00 08 */	b lbl_801C4668
lbl_801C4664:
/* 801C4664 001C15A4  FF E0 00 90 */	fmr f31, f0
lbl_801C4668:
/* 801C4668 001C15A8  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 801C466C 001C15AC  38 61 00 20 */	addi r3, r1, 0x20
/* 801C4670 001C15B0  81 84 00 00 */	lwz r12, 0(r4)
/* 801C4674 001C15B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4678 001C15B8  7D 89 03 A6 */	mtctr r12
/* 801C467C 001C15BC  4E 80 04 21 */	bctrl 
/* 801C4680 001C15C0  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801C4684 001C15C4  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 801C4688 001C15C8  EC 7E 00 28 */	fsubs f3, f30, f0
/* 801C468C 001C15CC  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4690 001C15D0  EC 5D 08 28 */	fsubs f2, f29, f1
/* 801C4694 001C15D4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 801C4698 001C15D8  EC 62 08 BA */	fmadds f3, f2, f2, f1
/* 801C469C 001C15DC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801C46A0 001C15E0  40 81 00 14 */	ble lbl_801C46B4
/* 801C46A4 001C15E4  40 81 00 14 */	ble lbl_801C46B8
/* 801C46A8 001C15E8  FC 00 18 34 */	frsqrte f0, f3
/* 801C46AC 001C15EC  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801C46B0 001C15F0  48 00 00 08 */	b lbl_801C46B8
lbl_801C46B4:
/* 801C46B4 001C15F4  FC 60 00 90 */	fmr f3, f0
lbl_801C46B8:
/* 801C46B8 001C15F8  EC 3F 18 2A */	fadds f1, f31, f3
/* 801C46BC 001C15FC  C0 02 B1 4C */	lfs f0, lbl_805194AC@sda21(r2)
/* 801C46C0 001C1600  C0 42 B2 14 */	lfs f2, lbl_80519574@sda21(r2)
/* 801C46C4 001C1604  EC 23 08 24 */	fdivs f1, f3, f1
/* 801C46C8 001C1608  EC 01 00 28 */	fsubs f0, f1, f0
/* 801C46CC 001C160C  EC 22 00 32 */	fmuls f1, f2, f0
/* 801C46D0 001C1610  4B F0 B2 DD */	bl exp
/* 801C46D4 001C1614  FC 00 08 18 */	frsp f0, f1
/* 801C46D8 001C1618  C0 22 B1 58 */	lfs f1, lbl_805194B8@sda21(r2)
/* 801C46DC 001C161C  80 17 00 B8 */	lwz r0, 0xb8(r23)
/* 801C46E0 001C1620  38 60 00 00 */	li r3, 0
/* 801C46E4 001C1624  EC 01 00 2A */	fadds f0, f1, f0
/* 801C46E8 001C1628  28 00 00 00 */	cmplwi r0, 0
/* 801C46EC 001C162C  EC 61 00 24 */	fdivs f3, f1, f0
/* 801C46F0 001C1630  41 82 00 08 */	beq lbl_801C46F8
/* 801C46F4 001C1634  38 60 00 01 */	li r3, 1
lbl_801C46F8:
/* 801C46F8 001C1638  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801C46FC 001C163C  40 82 00 50 */	bne lbl_801C474C
/* 801C4700 001C1640  2C 18 FF FF */	cmpwi r24, -1
/* 801C4704 001C1644  40 82 00 18 */	bne lbl_801C471C
/* 801C4708 001C1648  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C470C 001C164C  D0 7A 00 00 */	stfs f3, 0(r26)
/* 801C4710 001C1650  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4714 001C1654  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4718 001C1658  48 00 00 60 */	b lbl_801C4778
lbl_801C471C:
/* 801C471C 001C165C  2C 18 00 00 */	cmpwi r24, 0
/* 801C4720 001C1660  40 82 00 14 */	bne lbl_801C4734
/* 801C4724 001C1664  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4728 001C1668  D0 7A 00 00 */	stfs f3, 0(r26)
/* 801C472C 001C166C  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4730 001C1670  48 00 00 48 */	b lbl_801C4778
lbl_801C4734:
/* 801C4734 001C1674  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C4738 001C1678  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C473C 001C167C  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4740 001C1680  D0 3A 00 00 */	stfs f1, 0(r26)
/* 801C4744 001C1684  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4748 001C1688  48 00 00 30 */	b lbl_801C4778
lbl_801C474C:
/* 801C474C 001C168C  C0 02 B1 58 */	lfs f0, lbl_805194B8@sda21(r2)
/* 801C4750 001C1690  C0 42 B1 CC */	lfs f2, lbl_8051952C@sda21(r2)
/* 801C4754 001C1694  EC 00 18 28 */	fsubs f0, f0, f3
/* 801C4758 001C1698  EC 22 00 F2 */	fmuls f1, f2, f3
/* 801C475C 001C169C  EC 02 00 32 */	fmuls f0, f2, f0
/* 801C4760 001C16A0  D0 3A 00 00 */	stfs f1, 0(r26)
/* 801C4764 001C16A4  D0 1B 00 00 */	stfs f0, 0(r27)
/* 801C4768 001C16A8  48 00 00 10 */	b lbl_801C4778
lbl_801C476C:
/* 801C476C 001C16AC  C0 02 B2 18 */	lfs f0, lbl_80519578@sda21(r2)
/* 801C4770 001C16B0  D0 1A 00 00 */	stfs f0, 0(r26)
/* 801C4774 001C16B4  D0 1B 00 00 */	stfs f0, 0(r27)
lbl_801C4778:
/* 801C4778 001C16B8  3A D6 00 01 */	addi r22, r22, 1
/* 801C477C 001C16BC  3B 5A 00 04 */	addi r26, r26, 4
/* 801C4780 001C16C0  2C 16 00 0A */	cmpwi r22, 0xa
/* 801C4784 001C16C4  3B 7B 00 04 */	addi r27, r27, 4
/* 801C4788 001C16C8  3B 39 00 04 */	addi r25, r25, 4
/* 801C478C 001C16CC  41 80 FD F0 */	blt lbl_801C457C
/* 801C4790 001C16D0  C0 22 B1 48 */	lfs f1, lbl_805194A8@sda21(r2)
/* 801C4794 001C16D4  7F A5 EB 78 */	mr r5, r29
/* 801C4798 001C16D8  38 C0 00 00 */	li r6, 0
lbl_801C479C:
/* 801C479C 001C16DC  FC 60 08 90 */	fmr f3, f1
/* 801C47A0 001C16E0  38 00 00 05 */	li r0, 5
/* 801C47A4 001C16E4  7F 83 E3 78 */	mr r3, r28
/* 801C47A8 001C16E8  7F C4 F3 78 */	mr r4, r30
/* 801C47AC 001C16EC  D0 25 03 68 */	stfs f1, 0x368(r5)
/* 801C47B0 001C16F0  38 E0 00 00 */	li r7, 0
/* 801C47B4 001C16F4  7C 09 03 A6 */	mtctr r0
lbl_801C47B8:
/* 801C47B8 001C16F8  2C 06 00 00 */	cmpwi r6, 0
/* 801C47BC 001C16FC  C0 82 B1 48 */	lfs f4, lbl_805194A8@sda21(r2)
/* 801C47C0 001C1700  40 82 00 1C */	bne lbl_801C47DC
/* 801C47C4 001C1704  C0 03 00 00 */	lfs f0, 0(r3)
/* 801C47C8 001C1708  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C47CC 001C170C  4C 41 13 82 */	cror 2, 1, 2
/* 801C47D0 001C1710  40 82 00 0C */	bne lbl_801C47DC
/* 801C47D4 001C1714  EC 63 00 2A */	fadds f3, f3, f0
/* 801C47D8 001C1718  FC 80 00 90 */	fmr f4, f0
lbl_801C47DC:
/* 801C47DC 001C171C  2C 06 00 01 */	cmpwi r6, 1
/* 801C47E0 001C1720  40 82 00 20 */	bne lbl_801C4800
/* 801C47E4 001C1724  C0 44 00 00 */	lfs f2, 0(r4)
/* 801C47E8 001C1728  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C47EC 001C172C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C47F0 001C1730  4C 41 13 82 */	cror 2, 1, 2
/* 801C47F4 001C1734  40 82 00 0C */	bne lbl_801C4800
/* 801C47F8 001C1738  EC 63 10 2A */	fadds f3, f3, f2
/* 801C47FC 001C173C  FC 80 10 90 */	fmr f4, f2
lbl_801C4800:
/* 801C4800 001C1740  C0 05 03 68 */	lfs f0, 0x368(r5)
/* 801C4804 001C1744  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C4808 001C1748  4C 40 13 82 */	cror 2, 0, 2
/* 801C480C 001C174C  40 82 00 08 */	bne lbl_801C4814
/* 801C4810 001C1750  D0 85 03 68 */	stfs f4, 0x368(r5)
lbl_801C4814:
/* 801C4814 001C1754  2C 06 00 00 */	cmpwi r6, 0
/* 801C4818 001C1758  C0 82 B1 48 */	lfs f4, lbl_805194A8@sda21(r2)
/* 801C481C 001C175C  40 82 00 1C */	bne lbl_801C4838
/* 801C4820 001C1760  C0 03 00 04 */	lfs f0, 4(r3)
/* 801C4824 001C1764  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C4828 001C1768  4C 41 13 82 */	cror 2, 1, 2
/* 801C482C 001C176C  40 82 00 0C */	bne lbl_801C4838
/* 801C4830 001C1770  EC 63 00 2A */	fadds f3, f3, f0
/* 801C4834 001C1774  FC 80 00 90 */	fmr f4, f0
lbl_801C4838:
/* 801C4838 001C1778  2C 06 00 01 */	cmpwi r6, 1
/* 801C483C 001C177C  40 82 00 20 */	bne lbl_801C485C
/* 801C4840 001C1780  C0 44 00 04 */	lfs f2, 4(r4)
/* 801C4844 001C1784  C0 02 B1 48 */	lfs f0, lbl_805194A8@sda21(r2)
/* 801C4848 001C1788  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801C484C 001C178C  4C 41 13 82 */	cror 2, 1, 2
/* 801C4850 001C1790  40 82 00 0C */	bne lbl_801C485C
/* 801C4854 001C1794  EC 63 10 2A */	fadds f3, f3, f2
/* 801C4858 001C1798  FC 80 10 90 */	fmr f4, f2
lbl_801C485C:
/* 801C485C 001C179C  C0 05 03 68 */	lfs f0, 0x368(r5)
/* 801C4860 001C17A0  FC 00 20 40 */	fcmpo cr0, f0, f4
/* 801C4864 001C17A4  4C 40 13 82 */	cror 2, 0, 2
/* 801C4868 001C17A8  40 82 00 08 */	bne lbl_801C4870
/* 801C486C 001C17AC  D0 85 03 68 */	stfs f4, 0x368(r5)
lbl_801C4870:
/* 801C4870 001C17B0  38 63 00 08 */	addi r3, r3, 8
/* 801C4874 001C17B4  38 84 00 08 */	addi r4, r4, 8
/* 801C4878 001C17B8  38 E7 00 01 */	addi r7, r7, 1
/* 801C487C 001C17BC  42 00 FF 3C */	bdnz lbl_801C47B8
/* 801C4880 001C17C0  38 C6 00 01 */	addi r6, r6, 1
/* 801C4884 001C17C4  D0 65 03 60 */	stfs f3, 0x360(r5)
/* 801C4888 001C17C8  2C 06 00 02 */	cmpwi r6, 2
/* 801C488C 001C17CC  38 A5 00 04 */	addi r5, r5, 4
/* 801C4890 001C17D0  41 80 FF 0C */	blt lbl_801C479C
/* 801C4894 001C17D4  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 801C4898 001C17D8  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 801C489C 001C17DC  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 801C48A0 001C17E0  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 801C48A4 001C17E4  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 801C48A8 001C17E8  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 801C48AC 001C17EC  BA C1 01 28 */	lmw r22, 0x128(r1)
/* 801C48B0 001C17F0  80 01 01 84 */	lwz r0, 0x184(r1)
/* 801C48B4 001C17F4  7C 08 03 A6 */	mtlr r0
/* 801C48B8 001C17F8  38 21 01 80 */	addi r1, r1, 0x180
/* 801C48BC 001C17FC  4E 80 00 20 */	blr 
.endif

.if version == 1
.global clearGetDopeCount__Q24Game13VsGameSectionFv
clearGetDopeCount__Q24Game13VsGameSectionFv:
/* 801C48C0 001C1800  38 00 00 00 */	li r0, 0
/* 801C48C4 001C1804  90 03 03 B0 */	stw r0, 0x3d4(r3)
/* 801C48C8 001C1808  90 03 03 AC */	stw r0, 0x3d0(r3)
/* 801C48CC 001C180C  90 03 03 A8 */	stw r0, 0x3cc(r3)
/* 801C48D0 001C1810  90 03 03 A4 */	stw r0, 0x3c8(r3)
/* 801C48D4 001C1814  4E 80 00 20 */	blr 
.else
.global clearGetDopeCount__Q24Game13VsGameSectionFv
clearGetDopeCount__Q24Game13VsGameSectionFv:
/* 801C48C0 001C1800  38 00 00 00 */	li r0, 0
/* 801C48C4 001C1804  90 03 03 B0 */	stw r0, 0x3b0(r3)
/* 801C48C8 001C1808  90 03 03 AC */	stw r0, 0x3ac(r3)
/* 801C48CC 001C180C  90 03 03 A8 */	stw r0, 0x3a8(r3)
/* 801C48D0 001C1810  90 03 03 A4 */	stw r0, 0x3a4(r3)
/* 801C48D4 001C1814  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getGetDopeCount__Q24Game13VsGameSectionFii
getGetDopeCount__Q24Game13VsGameSectionFii:
/* 801C48D8 001C1818  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C48DC 001C181C  7C 08 02 A6 */	mflr r0
/* 801C48E0 001C1820  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C48E4 001C1824  38 00 00 00 */	li r0, 0
/* 801C48E8 001C1828  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C48EC 001C182C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C48F0 001C1830  7C BE 2B 78 */	mr r30, r5
/* 801C48F4 001C1834  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C48F8 001C1838  7C 9D 23 79 */	or. r29, r4, r4
/* 801C48FC 001C183C  3C 80 80 48 */	lis r4, lbl_8047FF98@ha
/* 801C4900 001C1840  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C4904 001C1844  7C 7C 1B 78 */	mr r28, r3
/* 801C4908 001C1848  3B E4 FF 98 */	addi r31, r4, lbl_8047FF98@l
/* 801C490C 001C184C  41 80 00 10 */	blt lbl_801C491C
/* 801C4910 001C1850  2C 1D 00 01 */	cmpwi r29, 1
/* 801C4914 001C1854  41 81 00 08 */	bgt lbl_801C491C
/* 801C4918 001C1858  38 00 00 01 */	li r0, 1
lbl_801C491C:
/* 801C491C 001C185C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801C4920 001C1860  40 82 00 1C */	bne lbl_801C493C
/* 801C4924 001C1864  7F A6 EB 78 */	mr r6, r29
/* 801C4928 001C1868  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C492C 001C186C  38 BF 01 88 */	addi r5, r31, 0x188
/* 801C4930 001C1870  38 80 0A 07 */	li r4, 0xa07
/* 801C4934 001C1874  4C C6 31 82 */	crclr 6
/* 801C4938 001C1878  4B E6 5D 09 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C493C:
/* 801C493C 001C187C  2C 1E 00 00 */	cmpwi r30, 0
/* 801C4940 001C1880  38 00 00 00 */	li r0, 0
/* 801C4944 001C1884  41 80 00 10 */	blt lbl_801C4954
/* 801C4948 001C1888  2C 1E 00 01 */	cmpwi r30, 1
/* 801C494C 001C188C  41 81 00 08 */	bgt lbl_801C4954
/* 801C4950 001C1890  38 00 00 01 */	li r0, 1
lbl_801C4954:
/* 801C4954 001C1894  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801C4958 001C1898  40 82 00 1C */	bne lbl_801C4974
/* 801C495C 001C189C  7F C6 F3 78 */	mr r6, r30
/* 801C4960 001C18A0  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C4964 001C18A4  38 BF 01 98 */	addi r5, r31, 0x198
/* 801C4968 001C18A8  38 80 0A 08 */	li r4, 0xa08
/* 801C496C 001C18AC  4C C6 31 82 */	crclr 6
/* 801C4970 001C18B0  4B E6 5C D1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C4974:
/* 801C4974 001C18B4  57 A3 18 38 */	slwi r3, r29, 3
/* 801C4978 001C18B8  57 C0 10 3A */	slwi r0, r30, 2
/* 801C497C 001C18BC  7C 63 02 14 */	add r3, r3, r0
/* 801C4980 001C18C0  38 63 03 A4 */	addi r3, r3, 0x3c8
/* 801C4984 001C18C4  7C 7C 1A 14 */	add r3, r28, r3
/* 801C4988 001C18C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C498C 001C18CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C4990 001C18D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C4994 001C18D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C4998 001C18D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C499C 001C18DC  7C 08 03 A6 */	mtlr r0
/* 801C49A0 001C18E0  38 21 00 20 */	addi r1, r1, 0x20
/* 801C49A4 001C18E4  4E 80 00 20 */	blr 
.else
.global getGetDopeCount__Q24Game13VsGameSectionFii
getGetDopeCount__Q24Game13VsGameSectionFii:
/* 801C48D8 001C1818  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C48DC 001C181C  7C 08 02 A6 */	mflr r0
/* 801C48E0 001C1820  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C48E4 001C1824  38 00 00 00 */	li r0, 0
/* 801C48E8 001C1828  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801C48EC 001C182C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801C48F0 001C1830  7C BE 2B 78 */	mr r30, r5
/* 801C48F4 001C1834  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801C48F8 001C1838  7C 9D 23 79 */	or. r29, r4, r4
/* 801C48FC 001C183C  3C 80 80 48 */	lis r4, lbl_8047FF98@ha
/* 801C4900 001C1840  93 81 00 10 */	stw r28, 0x10(r1)
/* 801C4904 001C1844  7C 7C 1B 78 */	mr r28, r3
/* 801C4908 001C1848  3B E4 FF 98 */	addi r31, r4, lbl_8047FF98@l
/* 801C490C 001C184C  41 80 00 10 */	blt lbl_801C491C
/* 801C4910 001C1850  2C 1D 00 01 */	cmpwi r29, 1
/* 801C4914 001C1854  41 81 00 08 */	bgt lbl_801C491C
/* 801C4918 001C1858  38 00 00 01 */	li r0, 1
lbl_801C491C:
/* 801C491C 001C185C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801C4920 001C1860  40 82 00 1C */	bne lbl_801C493C
/* 801C4924 001C1864  7F A6 EB 78 */	mr r6, r29
/* 801C4928 001C1868  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C492C 001C186C  38 BF 01 88 */	addi r5, r31, 0x188
/* 801C4930 001C1870  38 80 0A 07 */	li r4, 0xa07
/* 801C4934 001C1874  4C C6 31 82 */	crclr 6
/* 801C4938 001C1878  4B E6 5D 09 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C493C:
/* 801C493C 001C187C  2C 1E 00 00 */	cmpwi r30, 0
/* 801C4940 001C1880  38 00 00 00 */	li r0, 0
/* 801C4944 001C1884  41 80 00 10 */	blt lbl_801C4954
/* 801C4948 001C1888  2C 1E 00 01 */	cmpwi r30, 1
/* 801C494C 001C188C  41 81 00 08 */	bgt lbl_801C4954
/* 801C4950 001C1890  38 00 00 01 */	li r0, 1
lbl_801C4954:
/* 801C4954 001C1894  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801C4958 001C1898  40 82 00 1C */	bne lbl_801C4974
/* 801C495C 001C189C  7F C6 F3 78 */	mr r6, r30
/* 801C4960 001C18A0  38 7F 00 5C */	addi r3, r31, 0x5c
/* 801C4964 001C18A4  38 BF 01 98 */	addi r5, r31, 0x198
/* 801C4968 001C18A8  38 80 0A 08 */	li r4, 0xa08
/* 801C496C 001C18AC  4C C6 31 82 */	crclr 6
/* 801C4970 001C18B0  4B E6 5C D1 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_801C4974:
/* 801C4974 001C18B4  57 A3 18 38 */	slwi r3, r29, 3
/* 801C4978 001C18B8  57 C0 10 3A */	slwi r0, r30, 2
/* 801C497C 001C18BC  7C 63 02 14 */	add r3, r3, r0
/* 801C4980 001C18C0  38 63 03 A4 */	addi r3, r3, 0x3a4
/* 801C4984 001C18C4  7C 7C 1A 14 */	add r3, r28, r3
/* 801C4988 001C18C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801C498C 001C18CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801C4990 001C18D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801C4994 001C18D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801C4998 001C18D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C499C 001C18DC  7C 08 03 A6 */	mtlr r0
/* 801C49A0 001C18E0  38 21 00 20 */	addi r1, r1, 0x20
/* 801C49A4 001C18E4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global clearGetCherryCount__Q24Game13VsGameSectionFv
clearGetCherryCount__Q24Game13VsGameSectionFv:
/* 801C49A8 001C18E8  38 00 00 00 */	li r0, 0
/* 801C49AC 001C18EC  90 03 03 B8 */	stw r0, 0x3dc(r3)
/* 801C49B0 001C18F0  90 03 03 B4 */	stw r0, 0x3d8(r3)
/* 801C49B4 001C18F4  4E 80 00 20 */	blr 
.else
.global clearGetCherryCount__Q24Game13VsGameSectionFv
clearGetCherryCount__Q24Game13VsGameSectionFv:
/* 801C49A8 001C18E8  38 00 00 00 */	li r0, 0
/* 801C49AC 001C18EC  90 03 03 B8 */	stw r0, 0x3b8(r3)
/* 801C49B0 001C18F0  90 03 03 B4 */	stw r0, 0x3b4(r3)
/* 801C49B4 001C18F4  4E 80 00 20 */	blr 
.endif

.global challengeDisablePelplant__Q24Game13VsGameSectionFv
challengeDisablePelplant__Q24Game13VsGameSectionFv:
/* 801C49B8 001C18F8  38 60 00 00 */	li r3, 0
/* 801C49BC 001C18FC  4E 80 00 20 */	blr 

.global player2enabled__Q24Game13VsGameSectionFv
player2enabled__Q24Game13VsGameSectionFv:
/* 801C49C0 001C1900  38 60 00 01 */	li r3, 1
/* 801C49C4 001C1904  4E 80 00 20 */	blr 

.if version == 1
.global getCaveFilename__Q24Game13VsGameSectionFv
getCaveFilename__Q24Game13VsGameSectionFv:
/* 801C49C8 001C1908  38 63 02 24 */	addi r3, r3, 0x248
/* 801C49CC 001C190C  4E 80 00 20 */	blr 
.else
.global getCaveFilename__Q24Game13VsGameSectionFv
getCaveFilename__Q24Game13VsGameSectionFv:
/* 801C49C8 001C1908  38 63 02 24 */	addi r3, r3, 0x224
/* 801C49CC 001C190C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getEditorFilename__Q24Game13VsGameSectionFv
getEditorFilename__Q24Game13VsGameSectionFv:
/* 801C49D0 001C1910  38 63 02 A4 */	addi r3, r3, 0x2c8
/* 801C49D4 001C1914  4E 80 00 20 */	blr 
.else
.global getEditorFilename__Q24Game13VsGameSectionFv
getEditorFilename__Q24Game13VsGameSectionFv:
/* 801C49D0 001C1910  38 63 02 A4 */	addi r3, r3, 0x2a4
/* 801C49D4 001C1914  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getVsEditNumber__Q24Game13VsGameSectionFv
getVsEditNumber__Q24Game13VsGameSectionFv:
/* 801C49D8 001C1918  80 63 03 28 */	lwz r3, 0x34c(r3)
/* 801C49DC 001C191C  4E 80 00 20 */	blr 
.else
.global getVsEditNumber__Q24Game13VsGameSectionFv
getVsEditNumber__Q24Game13VsGameSectionFv:
/* 801C49D8 001C1918  80 63 03 28 */	lwz r3, 0x328(r3)
/* 801C49DC 001C191C  4E 80 00 20 */	blr 
.endif

.global "init__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
"init__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection":
/* 801C49E0 001C1920  4E 80 00 20 */	blr 

.global "create__Q24Game36StateMachine<Q24Game13VsGameSection>Fi"
"create__Q24Game36StateMachine<Q24Game13VsGameSection>Fi":
/* 801C49E4 001C1924  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C49E8 001C1928  7C 08 02 A6 */	mflr r0
/* 801C49EC 001C192C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C49F0 001C1930  38 00 00 00 */	li r0, 0
/* 801C49F4 001C1934  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801C49F8 001C1938  7C 7F 1B 78 */	mr r31, r3
/* 801C49FC 001C193C  90 83 00 0C */	stw r4, 0xc(r3)
/* 801C4A00 001C1940  90 03 00 08 */	stw r0, 8(r3)
/* 801C4A04 001C1944  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801C4A08 001C1948  54 03 10 3A */	slwi r3, r0, 2
/* 801C4A0C 001C194C  4B E5 F5 A1 */	bl __nwa__FUl
/* 801C4A10 001C1950  90 7F 00 04 */	stw r3, 4(r31)
/* 801C4A14 001C1954  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801C4A18 001C1958  54 03 10 3A */	slwi r3, r0, 2
/* 801C4A1C 001C195C  4B E5 F5 91 */	bl __nwa__FUl
/* 801C4A20 001C1960  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801C4A24 001C1964  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801C4A28 001C1968  54 03 10 3A */	slwi r3, r0, 2
/* 801C4A2C 001C196C  4B E5 F5 81 */	bl __nwa__FUl
/* 801C4A30 001C1970  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801C4A34 001C1974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C4A38 001C1978  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801C4A3C 001C197C  7C 08 03 A6 */	mtlr r0
/* 801C4A40 001C1980  38 21 00 10 */	addi r1, r1, 0x10
/* 801C4A44 001C1984  4E 80 00 20 */	blr 

.if version == 1
.global "transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
"transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg":
/* 801C4A48 001C1988  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C4A4C 001C198C  7C 08 02 A6 */	mflr r0
/* 801C4A50 001C1990  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C4A54 001C1994  54 A0 10 3A */	slwi r0, r5, 2
/* 801C4A58 001C1998  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801C4A5C 001C199C  7C 7B 1B 78 */	mr r27, r3
/* 801C4A60 001C19A0  7C 9C 23 78 */	mr r28, r4
/* 801C4A64 001C19A4  7C DD 33 78 */	mr r29, r6
/* 801C4A68 001C19A8  83 C4 01 80 */	lwz r30, 0x1a4(r4)
/* 801C4A6C 001C19AC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801C4A70 001C19B0  28 1E 00 00 */	cmplwi r30, 0
/* 801C4A74 001C19B4  7F E3 00 2E */	lwzx r31, r3, r0
/* 801C4A78 001C19B8  41 82 00 20 */	beq lbl_801C4A98
/* 801C4A7C 001C19BC  7F C3 F3 78 */	mr r3, r30
/* 801C4A80 001C19C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801C4A84 001C19C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C4A88 001C19C8  7D 89 03 A6 */	mtctr r12
/* 801C4A8C 001C19CC  4E 80 04 21 */	bctrl 
/* 801C4A90 001C19D0  80 1E 00 04 */	lwz r0, 4(r30)
/* 801C4A94 001C19D4  90 1B 00 18 */	stw r0, 0x18(r27)
lbl_801C4A98:
/* 801C4A98 001C19D8  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801C4A9C 001C19DC  7C 1F 00 00 */	cmpw r31, r0
/* 801C4AA0 001C19E0  41 80 00 08 */	blt lbl_801C4AA8
lbl_801C4AA4:
/* 801C4AA4 001C19E4  48 00 00 00 */	b lbl_801C4AA4
lbl_801C4AA8:
/* 801C4AA8 001C19E8  80 7B 00 04 */	lwz r3, 4(r27)
/* 801C4AAC 001C19EC  57 E0 10 3A */	slwi r0, r31, 2
/* 801C4AB0 001C19F0  7F 84 E3 78 */	mr r4, r28
/* 801C4AB4 001C19F4  7F A5 EB 78 */	mr r5, r29
/* 801C4AB8 001C19F8  7C 63 00 2E */	lwzx r3, r3, r0
/* 801C4ABC 001C19FC  90 7C 01 80 */	stw r3, 0x1a4(r28)
/* 801C4AC0 001C1A00  81 83 00 00 */	lwz r12, 0(r3)
/* 801C4AC4 001C1A04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4AC8 001C1A08  7D 89 03 A6 */	mtctr r12
/* 801C4ACC 001C1A0C  4E 80 04 21 */	bctrl 
/* 801C4AD0 001C1A10  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801C4AD4 001C1A14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C4AD8 001C1A18  7C 08 03 A6 */	mtlr r0
/* 801C4ADC 001C1A1C  38 21 00 20 */	addi r1, r1, 0x20
/* 801C4AE0 001C1A20  4E 80 00 20 */	blr 
.else
.global "transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
"transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg":
/* 801C4A48 001C1988  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801C4A4C 001C198C  7C 08 02 A6 */	mflr r0
/* 801C4A50 001C1990  90 01 00 24 */	stw r0, 0x24(r1)
/* 801C4A54 001C1994  54 A0 10 3A */	slwi r0, r5, 2
/* 801C4A58 001C1998  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801C4A5C 001C199C  7C 7B 1B 78 */	mr r27, r3
/* 801C4A60 001C19A0  7C 9C 23 78 */	mr r28, r4
/* 801C4A64 001C19A4  7C DD 33 78 */	mr r29, r6
/* 801C4A68 001C19A8  83 C4 01 80 */	lwz r30, 0x180(r4)
/* 801C4A6C 001C19AC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801C4A70 001C19B0  28 1E 00 00 */	cmplwi r30, 0
/* 801C4A74 001C19B4  7F E3 00 2E */	lwzx r31, r3, r0
/* 801C4A78 001C19B8  41 82 00 20 */	beq lbl_801C4A98
/* 801C4A7C 001C19BC  7F C3 F3 78 */	mr r3, r30
/* 801C4A80 001C19C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801C4A84 001C19C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801C4A88 001C19C8  7D 89 03 A6 */	mtctr r12
/* 801C4A8C 001C19CC  4E 80 04 21 */	bctrl 
/* 801C4A90 001C19D0  80 1E 00 04 */	lwz r0, 4(r30)
/* 801C4A94 001C19D4  90 1B 00 18 */	stw r0, 0x18(r27)
lbl_801C4A98:
/* 801C4A98 001C19D8  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801C4A9C 001C19DC  7C 1F 00 00 */	cmpw r31, r0
/* 801C4AA0 001C19E0  41 80 00 08 */	blt lbl_801C4AA8
lbl_801C4AA4:
/* 801C4AA4 001C19E4  48 00 00 00 */	b lbl_801C4AA4
lbl_801C4AA8:
/* 801C4AA8 001C19E8  80 7B 00 04 */	lwz r3, 4(r27)
/* 801C4AAC 001C19EC  57 E0 10 3A */	slwi r0, r31, 2
/* 801C4AB0 001C19F0  7F 84 E3 78 */	mr r4, r28
/* 801C4AB4 001C19F4  7F A5 EB 78 */	mr r5, r29
/* 801C4AB8 001C19F8  7C 63 00 2E */	lwzx r3, r3, r0
/* 801C4ABC 001C19FC  90 7C 01 80 */	stw r3, 0x180(r28)
/* 801C4AC0 001C1A00  81 83 00 00 */	lwz r12, 0(r3)
/* 801C4AC4 001C1A04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801C4AC8 001C1A08  7D 89 03 A6 */	mtctr r12
/* 801C4ACC 001C1A0C  4E 80 04 21 */	bctrl 
/* 801C4AD0 001C1A10  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801C4AD4 001C1A14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801C4AD8 001C1A18  7C 08 03 A6 */	mtlr r0
/* 801C4ADC 001C1A1C  38 21 00 20 */	addi r1, r1, 0x20
/* 801C4AE0 001C1A20  4E 80 00 20 */	blr 
.endif

.global "init__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectionPQ24Game8StateArg"
"init__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectionPQ24Game8StateArg":
/* 801C4AE4 001C1A24  4E 80 00 20 */	blr 

.global "cleanup__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
"cleanup__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection":
/* 801C4AE8 001C1A28  4E 80 00 20 */	blr 

.global "registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
"registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>":
/* 801C4AEC 001C1A2C  80 C3 00 08 */	lwz r6, 8(r3)
/* 801C4AF0 001C1A30  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801C4AF4 001C1A34  7C 06 00 00 */	cmpw r6, r0
/* 801C4AF8 001C1A38  4C 80 00 20 */	bgelr 
/* 801C4AFC 001C1A3C  80 A3 00 04 */	lwz r5, 4(r3)
/* 801C4B00 001C1A40  54 C0 10 3A */	slwi r0, r6, 2
/* 801C4B04 001C1A44  7C 85 01 2E */	stwx r4, r5, r0
/* 801C4B08 001C1A48  80 A4 00 04 */	lwz r5, 4(r4)
/* 801C4B0C 001C1A4C  2C 05 00 00 */	cmpwi r5, 0
/* 801C4B10 001C1A50  41 80 00 10 */	blt lbl_801C4B20
/* 801C4B14 001C1A54  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801C4B18 001C1A58  7C 05 00 00 */	cmpw r5, r0
/* 801C4B1C 001C1A5C  41 80 00 0C */	blt lbl_801C4B28
lbl_801C4B20:
/* 801C4B20 001C1A60  38 00 00 00 */	li r0, 0
/* 801C4B24 001C1A64  48 00 00 08 */	b lbl_801C4B2C
lbl_801C4B28:
/* 801C4B28 001C1A68  38 00 00 01 */	li r0, 1
lbl_801C4B2C:
/* 801C4B2C 001C1A6C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801C4B30 001C1A70  4D 82 00 20 */	beqlr 
/* 801C4B34 001C1A74  90 64 00 08 */	stw r3, 8(r4)
/* 801C4B38 001C1A78  80 03 00 08 */	lwz r0, 8(r3)
/* 801C4B3C 001C1A7C  80 C4 00 04 */	lwz r6, 4(r4)
/* 801C4B40 001C1A80  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801C4B44 001C1A84  54 00 10 3A */	slwi r0, r0, 2
/* 801C4B48 001C1A88  7C C5 01 2E */	stwx r6, r5, r0
/* 801C4B4C 001C1A8C  80 04 00 04 */	lwz r0, 4(r4)
/* 801C4B50 001C1A90  80 A3 00 08 */	lwz r5, 8(r3)
/* 801C4B54 001C1A94  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801C4B58 001C1A98  54 00 10 3A */	slwi r0, r0, 2
/* 801C4B5C 001C1A9C  7C A4 01 2E */	stwx r5, r4, r0
/* 801C4B60 001C1AA0  80 83 00 08 */	lwz r4, 8(r3)
/* 801C4B64 001C1AA4  38 04 00 01 */	addi r0, r4, 1
/* 801C4B68 001C1AA8  90 03 00 08 */	stw r0, 8(r3)
/* 801C4B6C 001C1AAC  4E 80 00 20 */	blr 

.if version == 1
.global "exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
"exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection":
/* 801C4B70 001C1AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C4B74 001C1AB4  7C 08 02 A6 */	mflr r0
/* 801C4B78 001C1AB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C4B7C 001C1ABC  80 64 01 80 */	lwz r3, 0x1a4(r4)
/* 801C4B80 001C1AC0  28 03 00 00 */	cmplwi r3, 0
/* 801C4B84 001C1AC4  41 82 00 14 */	beq lbl_801C4B98
/* 801C4B88 001C1AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C4B8C 001C1ACC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C4B90 001C1AD0  7D 89 03 A6 */	mtctr r12
/* 801C4B94 001C1AD4  4E 80 04 21 */	bctrl 
lbl_801C4B98:
/* 801C4B98 001C1AD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C4B9C 001C1ADC  7C 08 03 A6 */	mtlr r0
/* 801C4BA0 001C1AE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C4BA4 001C1AE4  4E 80 00 20 */	blr 
.else
.global "exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
"exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection":
/* 801C4B70 001C1AB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801C4B74 001C1AB4  7C 08 02 A6 */	mflr r0
/* 801C4B78 001C1AB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801C4B7C 001C1ABC  80 64 01 80 */	lwz r3, 0x180(r4)
/* 801C4B80 001C1AC0  28 03 00 00 */	cmplwi r3, 0
/* 801C4B84 001C1AC4  41 82 00 14 */	beq lbl_801C4B98
/* 801C4B88 001C1AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801C4B8C 001C1ACC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801C4B90 001C1AD0  7D 89 03 A6 */	mtctr r12
/* 801C4B94 001C1AD4  4E 80 04 21 */	bctrl 
lbl_801C4B98:
/* 801C4B98 001C1AD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801C4B9C 001C1ADC  7C 08 03 A6 */	mtlr r0
/* 801C4BA0 001C1AE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801C4BA4 001C1AE4  4E 80 00 20 */	blr 
.endif

.global "exec__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
"exec__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection":
/* 801C4BA8 001C1AE8  4E 80 00 20 */	blr 

.global __sinit_vsGameSection_cpp
__sinit_vsGameSection_cpp:
/* 801C4BAC 001C1AEC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 801C4BB0 001C1AF0  38 00 FF FF */	li r0, -1
/* 801C4BB4 001C1AF4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 801C4BB8 001C1AF8  3C 60 80 4B */	lis r3, lbl_804B60E8@ha
/* 801C4BBC 001C1AFC  90 0D 94 08 */	stw r0, lbl_80515A88@sda21(r13)
/* 801C4BC0 001C1B00  D4 03 60 E8 */	stfsu f0, lbl_804B60E8@l(r3)
/* 801C4BC4 001C1B04  D0 0D 94 0C */	stfs f0, lbl_80515A8C@sda21(r13)
/* 801C4BC8 001C1B08  D0 03 00 04 */	stfs f0, 4(r3)
/* 801C4BCC 001C1B0C  D0 03 00 08 */	stfs f0, 8(r3)
/* 801C4BD0 001C1B10  4E 80 00 20 */	blr 
