#include "Game/VsGameSection.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_vsGameSection_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
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
        .4byte
   actVs__Q24Game30GameMessageVsBirthTekiTreasureFPQ24Game13VsGameSection
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
        .4byte
   actVs__Q24Game27GameMessageVsRedOrSuckStartFPQ24Game13VsGameSection .global
   __vt__Q24Game27GameMessageVsBattleFinished
    __vt__Q24Game27GameMessageVsBattleFinished:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11GameMessageFPQ24Game15BaseGameSection
        .4byte actSingle__Q24Game11GameMessageFPQ24Game17SingleGameSection
        .4byte
   actVs__Q24Game27GameMessageVsBattleFinishedFPQ24Game13VsGameSection .global
   __vt__Q24Game22GameMessageVsGetDoping
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
        .4byte
   "init__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte
   "exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
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
        .4byte
   drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode .4byte
   doExit__7SectionFv .4byte forceFinish__Q24Game15BaseGameSectionFv .4byte
   forceReset__7SectionFv .4byte getCurrentSection__7SectionFv .4byte
   doLoadingStart__7SectionFv .4byte doLoading__7SectionFv .4byte
   doUpdate__Q24Game13VsGameSectionFv .4byte
   doDraw__Q24Game13VsGameSectionFR8Graphics .4byte isFinishable__7SectionFv
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
        .4byte
   goMainMap__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4Item .4byte
   getCaveID__Q24Game15BaseGameSectionFv .4byte
   getCurrentCourseInfo__Q24Game15BaseGameSectionFv .4byte
   challengeDisablePelplant__Q24Game13VsGameSectionFv .4byte
   getCaveFilename__Q24Game13VsGameSectionFv .4byte
   getEditorFilename__Q24Game13VsGameSectionFv .4byte
   getVsEditNumber__Q24Game13VsGameSectionFv .4byte
   openContainerWindow__Q24Game15BaseGameSectionFv .4byte
   closeContainerWindow__Q24Game15BaseGameSectionFv .4byte
   playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature .4byte
   playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon .4byte
   playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki .4byte
   enableTimer__Q24Game15BaseGameSectionFfUl .4byte
   disableTimer__Q24Game15BaseGameSectionFUl .4byte
   getTimerType__Q24Game15BaseGameSectionFv .4byte
   onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieCommand__Q24Game15BaseGameSectionFi .4byte
   startFadeout__Q24Game15BaseGameSectionFf .4byte
   startFadein__Q24Game15BaseGameSectionFf .4byte
   startFadeoutin__Q24Game15BaseGameSectionFf .4byte
   startFadeblack__Q24Game15BaseGameSectionFv .4byte
   startFadewhite__Q24Game15BaseGameSectionFv .4byte
   gmOrimaDown__Q24Game13VsGameSectionFi .4byte
   gmPikminZero__Q24Game13VsGameSectionFv .4byte
   openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi .4byte
   openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller
        .4byte
   openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
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
        .4byte
   "start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte
   "exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   transit__Q34Game6VsGame3FSMFPQ24Game13VsGameSectioniPQ24Game8StateArg

    .section .sbss # 0x80514D80 - 0x80516360
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

    .section .sbss2, "", @nobits # 0x80520e40 - 0x80520ED8
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
*/

namespace Game {

/*
 * --INFO--
 * Address:	801C0DF8
 * Size:	0000D0
 */
void VsGame::FSM::init(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 5
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "create__Q24Game36StateMachine<Q24Game13VsGameSection>Fi"
	li       r3, 0x44
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801C0E2C
	bl       __ct__Q34Game6VsGame10TitleStateFv
	mr       r4, r3

lbl_801C0E2C:
	mr       r3, r31
	bl
"registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
	li       r3, 0xa4
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801C0E4C
	bl       __ct__Q34Game6VsGame9LoadStateFv
	mr       r4, r3

lbl_801C0E4C:
	mr       r3, r31
	bl
"registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801C0E6C
	bl       __ct__Q34Game6VsGame9GameStateFv
	mr       r4, r3

lbl_801C0E6C:
	mr       r3, r31
	bl
"registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801C0E8C
	bl       __ct__Q34Game6VsGame7VSStateFv
	mr       r4, r3

lbl_801C0E8C:
	mr       r3, r31
	bl
"registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801C0EAC
	bl       __ct__Q34Game6VsGame11ResultStateFv
	mr       r4, r3

lbl_801C0EAC:
	mr       r3, r31
	bl
"registerState__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game32FSMState<Q24Game13VsGameSection>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void VsGame::FSM::draw(Game::VsGameSection*, Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C0EC8
 * Size:	000004
 */
void VsGame::State::draw(Game::VsGameSection*, Graphics&) { }

/*
 * --INFO--
 * Address:	801C0ECC
 * Size:	000020
 */
void VsGame::FSM::transit(Game::VsGameSection*, int, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl
	"transit__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0EEC
 * Size:	0000FC
 */
VsGameSection::VsGameSection(JKRHeap*, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q24Game15BaseGameSectionFP7JKRHeap
	lis      r4, __vt__Q24Game13VsGameSection@ha
	addi     r3, r30, 0x184
	addi     r0, r4, __vt__Q24Game13VsGameSection@l
	stw      r0, 0(r30)
	bl       __ct__16DvdThreadCommandFv
	li       r0, 0
	addi     r3, r30, 0x214
	stb      r0, 0x1f8(r30)
	bl       __ct__Q24Game13PikiContainerFv
	addi     r3, r30, 0x21c
	bl       __ct__Q24Game13PikiContainerFv
	stb      r31, 0x174(r30)
	li       r0, 1
	lis      r3, gGameConfig__4Game@ha
	li       r6, 0
	stb      r0, 0x205(r30)
	li       r5, -1
	li       r4, 2
	li       r0, -2
	stw      r6, 0x338(r30)
	addi     r3, r3, gGameConfig__4Game@l
	stw      r6, 0x340(r30)
	stw      r5, 0x34c(r30)
	stw      r4, 0x348(r30)
	stw      r4, 0x344(r30)
	stw      r6, 0x3d8(r30)
	stw      r6, 0x3d4(r30)
	stw      r6, 0x3e0(r30)
	stw      r6, 0x3dc(r30)
	stw      r0, 0x328(r30)
	stw      r6, 0x178(r30)
	lwz      r0, 0x278(r3)
	cmpwi    r0, 0
	ble      lbl_801C0FCC
	slwi     r31, r0, 0xa
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801C0FB4
	mr       r4, r31
	bl       __ct__6VSFifoFUl
	mr       r0, r3

lbl_801C0FB4:
	stw      r0, 0x178(r30)
	lwz      r3, 0x178(r30)
	bl       becomeCurrent__6VSFifoFv
	lwz      r3, 0x178(r30)
	lwz      r3, 4(r3)
	bl       GXSetGPFifo

lbl_801C0FCC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C0FE8
 * Size:	0000CC
 */
VsGameSection::~VsGameSection(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801C1098
	lis      r3, __vt__Q24Game13VsGameSection@ha
	addi     r0, r3, __vt__Q24Game13VsGameSection@l
	stw      r0, 0(r30)
	lwz      r3, 0x178(r30)
	cmplwi   r3, 0
	beq      lbl_801C1064
	lwz      r3, 4(r3)
	bl       GXSaveCPUFifo

lbl_801C1028:
	bl       isGPActive__6VSFifoFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801C1028
	bl       GXDrawDone
	lwz      r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
	lwz      r4, 8(r3)
	lwz      r3, 4(r3)
	mr       r5, r4
	bl       GXInitFifoPtrs
	lwz      r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
	lwz      r3, 4(r3)
	bl       GXSetCPUFifo
	lwz      r3, sCurrentFifo__12JUTGraphFifo@sda21(r13)
	lwz      r3, 4(r3)
	bl       GXSetGPFifo

lbl_801C1064:
	addic.   r0, r30, 0x184
	beq      lbl_801C107C
	addic.   r3, r30, 0x1e0
	beq      lbl_801C107C
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_801C107C:
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q24Game15BaseGameSectionFv
	extsh.   r0, r31
	ble      lbl_801C1098
	mr       r3, r30
	bl       __dl__FPv

lbl_801C1098:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801C10B4
 * Size:	00005C
 */
void VSFifo::isGPActive()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r13, mGpStatus__6VSFifo@sda21
	addi     r6, r13, mGpStatus__6VSFifo@sda21
	stw      r0, 0x14(r1)
	addi     r7, r13, mGpStatus__6VSFifo@sda21
	addi     r3, r13, mGpStatus__6VSFifo@sda21
	addi     r4, r4, 1
	stw      r31, 0xc(r1)
	addi     r31, r13, mGpStatus__6VSFifo@sda21
	addi     r31, r31, 2
	addi     r6, r6, 3
	mr       r5, r31
	addi     r7, r7, 4
	bl       GXGetGPStatus
	lbz      r0, 0(r31)
	lwz      r31, 0xc(r1)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801C1110
 * Size:	000034
 */
void VsGameSection::section_fadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x180(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1144
 * Size:	000004
 */
void VsGame::State::on_section_fadeout(Game::VsGameSection*) { }

/*
 * --INFO--
 * Address:	801C1148
 * Size:	000090
 */
void VsGameSection::startMainBgm(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, lbl_8047FF98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r3, lbl_8047FF98@l
	stw      r30, 8(r1)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801C1184
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C1184:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_801C11A8
	addi     r3, r31, 0x34
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C11A8:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C11D8
 * Size:	00020C
 */
void VsGameSection::onInit(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_805194A8@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, lbl_805194AC@sda21(r2)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stfs     f1, 0x350(r3)
	stfs     f0, 0x354(r3)
	stfs     f1, 0x1f4(r3)
	stfs     f1, 0x1f0(r3)
	bl       clearGetDopeCount__Q24Game13VsGameSectionFv
	mr       r3, r31
	bl       clearGetCherryCount__Q24Game13VsGameSectionFv
	lbz      r0, 0x174(r31)
	cmplwi   r0, 0
	beq      lbl_801C122C
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 1
	stw      r0, 0x44(r3)
	b        lbl_801C1238

lbl_801C122C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 2
	stw      r0, 0x44(r3)

lbl_801C1238:
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r5, 1
	li       r0, 0
	lis      r3, lbl_8047FFD8@ha
	stb      r5, 0x48(r4)
	addi     r4, r3, lbl_8047FFD8@l
	addi     r3, r31, 0x224
	stb      r0, 0x11c(r31)
	stw      r0, 0x1fc(r31)
	stw      r0, 0x3bc(r31)
	stb      r0, 0x204(r31)
	crclr    6
	bl       sprintf
	addi     r3, r31, 0x2a4
	addi     r4, r2, lbl_805194B0@sda21
	crclr    6
	bl       sprintf
	mr       r3, r31
	bl       setupFixMemory__Q24Game15BaseGameSectionFv
	li       r3, 0x94
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801C129C
	bl       __ct__Q34Game13ChallengeGame9StageListFv
	mr       r0, r3

lbl_801C129C:
	stw      r0, 0x20c(r31)
	mr       r3, r31
	lwz      r4, 0x20c(r31)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	li       r3, 0xcc
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801C12C4
	bl       __ct__Q34Game6VsGame9StageListFv
	mr       r0, r3

lbl_801C12C4:
	stw      r0, 0x210(r31)
	mr       r3, r31
	lwz      r4, 0x210(r31)
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode
	mr       r3, r31
	bl       loadChallengeStageList__Q24Game13VsGameSectionFv
	mr       r3, r31
	bl       loadVsStageList__Q24Game13VsGameSectionFv
	li       r3, 0x1c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801C1314
	lis      r5, "__vt__Q24Game36StateMachine<Q24Game13VsGameSection>"@ha
	lis      r4, __vt__Q34Game6VsGame3FSM@ha
	addi     r0, r5, "__vt__Q24Game36StateMachine<Q24Game13VsGameSection>"@l
	li       r5, -1
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q34Game6VsGame3FSM@l
	stw      r5, 0x18(r3)
	stw      r0, 0(r3)

lbl_801C1314:
	stw      r3, 0x17c(r31)
	mr       r4, r31
	lwz      r3, 0x17c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       initPlayData__Q24Game13VsGameSectionFv
	lwz      r3, 0x17c(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_805194A8@sda21(r2)
	stw      r0, 0x324(r31)
	li       r3, 0x5c
	stfs     f0, 0x35c(r31)
	stfs     f0, 0x358(r31)
	stfs     f0, 0x374(r31)
	stfs     f0, 0x370(r31)
	stfs     f0, 0x364(r31)
	stfs     f0, 0x360(r31)
	stfs     f0, 0x36c(r31)
	stfs     f0, 0x368(r31)
	stfs     f0, 0x37c(r31)
	stfs     f0, 0x378(r31)
	stw      r0, 0x384(r31)
	stw      r0, 0x380(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801C13AC
	bl       __ct__Q25Radar3MgrFv
	mr       r0, r3

lbl_801C13AC:
	stw      r0, mgr__5Radar@sda21(r13)
	li       r0, 0
	stw      r0, 0x388(r31)
	stw      r0, 0x38c(r31)
	stw      r0, 0x390(r31)
	stw      r0, 0x394(r31)
	stw      r0, 0x398(r31)
	stw      r0, 0x39c(r31)
	stw      r0, 0x3a0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C13E4
 * Size:	000034
 */
void start__Q24Game36StateMachine<Game::VsGameSection> FPQ24Game13VsGameSectioniPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x180(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C1418
 * Size:	000008
 */
void VsGameSection::getCurrFloor(void)
{
	/*
	lwz      r3, 0x324(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1420
 * Size:	0001B8
 */
void VsGameSection::doUpdate(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r3
	lbz      r0, 0x204(r3)
	cmplwi   r0, 0
	beq      lbl_801C1460
	li       r0, 0
	li       r3, 0
	stb      r0, 0x34(r29)
	b        lbl_801C15B4

lbl_801C1460:
	lwz      r3, 0x17c(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801C15B0
	li       r3, 1
	bl       getMapPikmins__Q24Game8GameStatFi
	lwz      r4, 0x344(r29)
	addi     r0, r4, -3
	subf     r31, r0, r3
	li       r3, 0
	bl       getMapPikmins__Q24Game8GameStatFi
	lwz      r4, 0x348(r29)
	cmpwi    r31, 0
	addi     r0, r4, -3
	subf     r30, r0, r3
	bge      lbl_801C14BC
	li       r31, 1

lbl_801C14BC:
	cmpwi    r30, 0
	bge      lbl_801C14C8
	li       r30, 1

lbl_801C14C8:
	cmpwi    r31, 0
	beq      lbl_801C14D8
	cmpwi    r30, 0
	bne      lbl_801C1500

lbl_801C14D8:
	cmpwi    r31, 0
	bne      lbl_801C14EC
	lfs      f0, lbl_805194B8@sda21(r2)
	stfs     f0, 0x354(r29)
	b        lbl_801C15B0

lbl_801C14EC:
	cmpwi    r30, 0
	bne      lbl_801C15B0
	lfs      f0, lbl_805194A8@sda21(r2)
	stfs     f0, 0x354(r29)
	b        lbl_801C15B0

lbl_801C1500:
	cmpw     r30, r31
	ble      lbl_801C1544
	lis      r3, 0x4330
	xoris    r4, r30, 0x8000
	xoris    r0, r31, 0x8000
	stw      r4, 0xc(r1)
	lfd      f2, lbl_805194C8@sda21(r2)
	stw      r3, 8(r1)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x350(r29)
	b        lbl_801C157C

lbl_801C1544:
	lis      r3, 0x4330
	xoris    r4, r31, 0x8000
	xoris    r0, r30, 0x8000
	stw      r4, 0x14(r1)
	lfd      f2, lbl_805194C8@sda21(r2)
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f1, f0, f2
	stw      r3, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x350(r29)

lbl_801C157C:
	lfd      f1, lbl_805194C0@sda21(r2)
	bl       log10
	frsp     f31, f1
	lfs      f1, 0x350(r29)
	bl       log10
	frsp     f0, f1
	cmpw     r31, r30
	fdivs    f0, f0, f31
	stfs     f0, 0x354(r29)
	bge      lbl_801C15B0
	lfs      f0, 0x354(r29)
	fneg     f0, f0
	stfs     f0, 0x354(r29)

lbl_801C15B0:
	lbz      r3, 0x34(r29)

lbl_801C15B4:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C15D8
 * Size:	00003C
 */
void VsGameSection::pre2dDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x180(r3)
	cmplwi   r3, 0
	beq      lbl_801C1604
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_801C1604:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1614
 * Size:	000004
 */
void VsGame::State::pre2dDraw(Graphics&, Game::VsGameSection*) { }

/*
 * --INFO--
 * Address:	801C1618
 * Size:	000050
 */
void VsGameSection::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	lbz      r0, 0x204(r3)
	cmplwi   r0, 0
	bne      lbl_801C1658
	lwz      r3, 0x180(r6)
	cmplwi   r3, 0
	beq      lbl_801C1658
	lwz      r12, 0(r3)
	mr       r4, r6
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_801C1658:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1668
 * Size:	0001DC
 */
void VsGameSection::onSetSoundScene(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_8047FF98@ha
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	addi     r31, r4, lbl_8047FF98@l
	stw      r30, 0x58(r1)
	mr       r30, r3
	addi     r3, r1, 8
	bl       __ct__Q26PSGame9SceneInfoFv
	lis      r5, __vt__Q26PSGame13CaveFloorInfo@ha
	lis      r3, 0x0000FFFF@ha
	li       r4, 0
	li       r0, 0xff
	addi     r5, r5, __vt__Q26PSGame13CaveFloorInfo@l
	addi     r3, r3, 0x0000FFFF@l
	stw      r5, 8(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	stw      r4, 0x40(r1)
	stw      r4, 0x44(r1)
	stb      r4, 0x48(r1)
	stw      r3, 0x4c(r1)
	stb      r0, 0x50(r1)
	stb      r0, 0x51(r1)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 2
	beq      lbl_801C16DC
	cmpwi    r0, 3
	bne      lbl_801C16E0

lbl_801C16DC:
	li       r4, 1

lbl_801C16E0:
	clrlwi.  r0, r4, 0x18
	beq      lbl_801C1714
	li       r0, 6
	mr       r3, r30
	stb      r0, 0xe(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	stb      r3, 0x48(r1)
	lwz      r0, 0x338(r30)
	stb      r0, 0x51(r1)
	b        lbl_801C1724

lbl_801C1714:
	li       r0, 7
	stb      r0, 0xe(r1)
	lwz      r0, 0x340(r30)
	stb      r0, 0x48(r1)

lbl_801C1724:
	lwz      r4, mapMgr__4Game@sda21(r13)
	li       r3, 0
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r4, 0x2c(r4)
	lwz      r0, 0x22c(r4)
	stw      r0, 0x40(r1)
	stw      r3, 0x44(r1)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	beq      lbl_801C1754
	cmpwi    r0, 3
	bne      lbl_801C1758

lbl_801C1754:
	li       r3, 1

lbl_801C1758:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801C1774
	addi     r3, r1, 8
	li       r4, 0
	li       r5, 1
	bl
setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
	b        lbl_801C1784

lbl_801C1774:
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 1
	bl
setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift

lbl_801C1784:
	mr       r3, r30
	addi     r4, r1, 8
	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo lwz
r0, spSceneMgr__8PSSystem@sda21(r13) cmplwi   r0, 0 bne      lbl_801C17B0 addi
r3, r31, 0x1c addi     r5, r31, 0x28 li       r4, 0x1d3 crclr    6 bl
panic_f__12JUTExceptionFPCciPCce

lbl_801C17B0:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801C17E8
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C17E8:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_801C180C
	addi     r3, r31, 0x34
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C180C:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       createPSMDirectorUpdator__Q24Game7NaviMgrFv
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1844
 * Size:	00005C
 */
void VsGameSection::initPlayData(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, playData__4Game@sda21(r13)
	bl       reset__Q24Game8PlayDataFv
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	li       r5, 1
	bl       setDevelopSetting__Q24Game8PlayDataFbb
	lwz      r4, naviMgr__4Game@sda21(r13)
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0xc8(r4)
	lfs      f0, 0x9d0(r4)
	stfs     f0, 0x24(r3)
	lwz      r4, naviMgr__4Game@sda21(r13)
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0xc8(r4)
	lfs      f0, 0x9d0(r4)
	stfs     f0, 0x28(r3)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C18A0
 * Size:	000168
 */
void VsGameSection::onSetupFloatMemory(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_8047FF98@ha
	stw      r0, 0x64(r1)
	li       r0, 0
	stmw     r26, 0x48(r1)
	mr       r26, r3
	addi     r31, r4, lbl_8047FF98@l
	li       r3, 0x28
	stw      r0, farmMgr__Q24Game4Farm@sda21(r13)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801C18DC
	bl       __ct__Q34Game6VsGame7TekiMgrFv
	mr       r0, r3

lbl_801C18DC:
	stw      r0, 0x32c(r26)
	li       r3, 0x114
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801C1900
	lwz      r5, 0x32c(r26)
	mr       r4, r26
	bl
__ct__Q34Game6VsGame7CardMgrFPQ24Game13VsGameSectionPQ34Game6VsGame7TekiMgr mr
r0, r3

lbl_801C1900:
	stw      r0, 0x330(r26)
	lwz      r3, 0x330(r26)
	bl       loadResource__Q34Game6VsGame7CardMgrFv
	lwz      r6, 0x50(r31)
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	lwz      r5, 0x54(r31)
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	lwz      r0, 0x58(r31)
	addi     r30, r1, 0xc
	stw      r6, 0xc(r1)
	addi     r27, r4, __vt__Q24Game15CreatureInitArg@l
	lwz      r4, cBedamaRed__13VsOtakaraName@sda21(r13)
	addi     r28, r3, __vt__Q24Game13PelletInitArg@l
	stw      r5, 0x10(r1)
	li       r26, 0
	lwz      r3, cBedamaBlue__13VsOtakaraName@sda21(r13)
	stw      r0, 0x14(r1)
	lwz      r0, cBedamaYellow__13VsOtakaraName@sda21(r13)
	stw      r4, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)

lbl_801C1954:
	stw      r27, 0x18(r1)
	li       r7, 0
	li       r0, -1
	li       r6, 0xff
	li       r5, 1
	stw      r28, 0x18(r1)
	lwz      r3, 0(r30)
	addi     r4, r1, 8
	stb      r7, 0x34(r1)
	sth      r7, 0x2c(r1)
	stb      r6, 0x2e(r1)
	stw      r7, 0x30(r1)
	stb      r7, 0x2f(r1)
	stb      r5, 0x1c(r1)
	stb      r7, 0x35(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x38(r1)
	stb      r7, 0x36(r1)
	stb      r7, 0x37(r1)
	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
	or.      r29, r3, r3
	bne      lbl_801C19C0
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x70
	li       r4, 0x388
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C19C0:
	lha      r3, 0x258(r29)
	addi     r4, r1, 0x18
	lwz      r0, 8(r1)
	stw      r3, 0x28(r1)
	lwz      r3, pelletMgr__4Game@sda21(r13)
	lwz      r5, 0x40(r29)
	stw      r5, 0x20(r1)
	stb      r0, 0x2e(r1)
	bl       setUse__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	addi     r26, r26, 1
	addi     r30, r30, 4
	cmpwi    r26, 3
	blt      lbl_801C1954
	lmw      r26, 0x48(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1A08
 * Size:	0000A0
 */
void VsGameSection::postSetupFloatMemory(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_801C1A8C
	lfs      f0, lbl_805194A8@sda21(r2)
	li       r0, 0
	addi     r4, r1, 8
	stfs     f0, 0x35c(r31)
	stfs     f0, 0x358(r31)
	stw      r0, 0x384(r31)
	stw      r0, 0x380(r31)
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3<f>"
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x388(r31)
	li       r4, 7
	stw      r0, 0x38c(r31)
	stw      r0, 0x390(r31)
	stw      r0, 0x394(r31)
	stw      r0, 0x398(r31)
	stw      r0, 0x39c(r31)
	stw      r0, 0x3a0(r31)
	bl       createYellowBedamas__Q24Game13VsGameSectionFi
	mr       r3, r31
	bl       initCardPellets__Q24Game13VsGameSectionFv

lbl_801C1A8C:
	mr       r3, r31
	bl       postSetupFloatMemory__Q24Game15BaseGameSectionFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1AA8
 * Size:	000020
 */
void VsGameSection::onClearHeap(void)
{
	/*
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bnelr
	li       r0, 0
	stw      r0, 0x3d0(r3)
	stw      r0, 0x3cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1AC8
 * Size:	0000B0
 */
void VsGameSection::loadChallengeStageList(void)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	lis      r4, gGameConfig__4Game@ha
	stw      r0, 0x444(r1)
	addi     r5, r4, gGameConfig__4Game@l
	li       r0, 0
	lis      r4, lbl_8048003C@ha
	stw      r31, 0x43c(r1)
	mr       r31, r3
	addi     r3, r4, lbl_8048003C@l
	stw      r0, 8(r1)
	lwz      r0, 0x228(r5)
	cmpwi    r0, 0
	beq      lbl_801C1B08
	lis      r3, lbl_80480014@ha
	addi     r3, r3, lbl_80480014@l

lbl_801C1B08:
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	cmplwi   r3, 0
	beq      lbl_801C1B64
	mr       r4, r3
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_801C1B58
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_801C1B58:
	lwz      r3, 0x20c(r31)
	addi     r4, r1, 0x10
	bl       read__Q34Game13ChallengeGame9StageListFR6Stream

lbl_801C1B64:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1B78
 * Size:	000098
 */
void VsGameSection::loadVsStageList(void)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	lis      r4, lbl_80480060@ha
	li       r5, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r6, 0
	li       r7, 0
	stw      r31, 0x43c(r1)
	mr       r31, r3
	li       r8, 2
	li       r9, 0
	stw      r0, 8(r1)
	addi     r0, r4, lbl_80480060@l
	li       r4, 0
	li       r10, 0
	mr       r3, r0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	cmplwi   r3, 0
	beq      lbl_801C1BFC
	mr       r4, r3
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_801C1BF0
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_801C1BF0:
	lwz      r3, 0x210(r31)
	addi     r4, r1, 0x10
	bl       read__Q34Game6VsGame9StageListFR6Stream

lbl_801C1BFC:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1C10
 * Size:	000044
 */
void VsGameSection::gmOrimaDown(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r3, 0x180(r3)
	cmplwi   r3, 0
	beq      lbl_801C1C44
	lwz      r12, 0(r3)
	mr       r4, r6
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_801C1C44:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1C54
 * Size:	000004
 */
void VsGame::State::onOrimaDown(Game::VsGameSection*, int) { }

/*
 * --INFO--
 * Address:	801C1C58
 * Size:	000004
 */
void VsGameSection::gmPikminZero(void) { }

/*
 * --INFO--
 * Address:	801C1C5C
 * Size:	00003C
 */
void VsGameSection::goNextFloor(Game::ItemHole::Item*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	mr       r4, r6
	lwz      r3, 0x180(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1C98
 * Size:	000004
 */
void VsGame::State::onNextFloor(Game::VsGameSection*, Game::ItemHole::Item*) { }

/*
 * --INFO--
 * Address:	801C1C9C
 * Size:	0001D8
 */
void VsGameSection::openCaveMoreMenu(Game::ItemHole::Item*, Controller*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r4, r30
	stw      r29, 0x34(r1)
	mr       r29, r5
	lwz      r3, 0x180(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801C1E58
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_801C1CFC
	cmpwi    r0, 3
	bne      lbl_801C1D00

lbl_801C1CFC:
	li       r3, 1

lbl_801C1D00:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C1D20
	cmplwi   r29, 0
	beq      lbl_801C1D20
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	mr       r4, r29
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	b        lbl_801C1D2C

lbl_801C1D20:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x10c(r30)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller

lbl_801C1D2C:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r11, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	li       r8, 1
	lis      r3, 0x745F3031@ha
	lis      r6, __vt__Q32og6Screen17DispMemberAnaDemo@ha
	addi     r7, r3, 0x745F3031@l
	stw      r0, 8(r1)
	li       r10, 0x18
	li       r9, 0x45
	addi     r0, r6, __vt__Q32og6Screen17DispMemberAnaDemo@l
	stw      r11, 0x28(r1)
	lis      r5, __vt__Q32og6Screen18DispMemberCaveMore@ha
	lis      r4, 0x32705F63@ha
	stw      r0, 8(r1)
	addi     r6, r5, __vt__Q32og6Screen18DispMemberCaveMore@l
	addi     r0, r4, 0x32705F63@l
	li       r5, 4
	stw      r10, 0x10(r1)
	li       r4, 0xa
	lis      r3, mePikis__Q24Game8GameStat@ha
	stw      r9, 0x14(r1)
	stw      r8, 0x18(r1)
	stw      r7, 0x20(r1)
	stw      r11, 0xc(r1)
	stb      r8, 0x27(r1)
	stw      r8, 0x1c(r1)
	stb      r11, 0x24(r1)
	stb      r11, 0x25(r1)
	stw      r6, 8(r1)
	stb      r11, 0x2c(r1)
	stb      r11, 0x2d(r1)
	stw      r11, 0x28(r1)
	stw      r5, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r4, 0x18(r1)
	stw      r0, 0x20(r1)
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	ble      lbl_801C1E08
	li       r0, 1
	li       r3, -1
	stb      r0, 0x2c(r1)
	bl       getMapPikmins__Q24Game8GameStatFi
	cmpw     r29, r3
	bne      lbl_801C1DFC
	li       r0, 1
	stb      r0, 0x2d(r1)
	b        lbl_801C1E14

lbl_801C1DFC:
	li       r0, 0
	stb      r0, 0x2d(r1)
	b        lbl_801C1E14

lbl_801C1E08:
	li       r0, 0
	stb      r0, 0x2d(r1)
	stb      r0, 0x2c(r1)

lbl_801C1E14:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl open_CaveMoreMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberCaveMore
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C1E58
	stw      r31, 0x1fc(r30)
	lis      r3, lbl_80480078@ha
	addi     r5, r3, lbl_80480078@l
	li       r4, 1
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lis      r4, lbl_80480078@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_80480078@l
	li       r4, 1
	bl       setMoviePause__Q24Game10GameSystemFbPc

lbl_801C1E58:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C1E74
 * Size:	000008
 */
u32 VsGame::State::goingToCave(Game::VsGameSection*) { return 0x0; }

/*
 * --INFO--
 * Address:	801C1E7C
 * Size:	0001B0
 */
void VsGameSection::openKanketuMenu(Game::ItemBigFountain::Item*, Controller*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	li       r3, 0
	stw      r29, 0x34(r1)
	lwz      r6, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r6)
	cmpwi    r0, 1
	beq      lbl_801C1EB8
	cmpwi    r0, 3
	bne      lbl_801C1EBC

lbl_801C1EB8:
	li       r3, 1

lbl_801C1EBC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C1EDC
	cmplwi   r5, 0
	beq      lbl_801C1EDC
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	mr       r4, r5
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	b        lbl_801C1EE8

lbl_801C1EDC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x10c(r30)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller

lbl_801C1EE8:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r9, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	li       r7, 1
	lis      r3, __vt__Q32og6Screen17DispMemberAnaDemo@ha
	stw      r0, 8(r1)
	addi     r5, r3, __vt__Q32og6Screen17DispMemberAnaDemo@l
	li       r0, 0x18
	li       r8, 0x45
	stw      r9, 0x28(r1)
	lis      r3, 0x745F3031@ha
	lis      r4, __vt__Q32og6Screen21DispMemberKanketuMenu@ha
	addi     r6, r3, 0x745F3031@l
	stw      r5, 8(r1)
	addi     r5, r4, __vt__Q32og6Screen21DispMemberKanketuMenu@l
	li       r4, 4
	stw      r0, 0x10(r1)
	li       r0, 0xa
	lis      r3, mePikis__Q24Game8GameStat@ha
	stw      r8, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r9, 0xc(r1)
	stb      r7, 0x27(r1)
	stw      r7, 0x1c(r1)
	stw      r6, 0x20(r1)
	stb      r9, 0x24(r1)
	stb      r9, 0x25(r1)
	stw      r5, 8(r1)
	stb      r9, 0x2c(r1)
	stb      r9, 0x2d(r1)
	stb      r9, 0x2e(r1)
	stw      r9, 0x28(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	ble      lbl_801C1FBC
	li       r0, 1
	li       r3, -1
	stb      r0, 0x2c(r1)
	bl       getMapPikmins__Q24Game8GameStatFi
	cmpw     r29, r3
	bne      lbl_801C1FB0
	li       r0, 1
	stb      r0, 0x2d(r1)
	b        lbl_801C1FC8

lbl_801C1FB0:
	li       r0, 0
	stb      r0, 0x2d(r1)
	b        lbl_801C1FC8

lbl_801C1FBC:
	li       r0, 0
	stb      r0, 0x2d(r1)
	stb      r0, 0x2c(r1)

lbl_801C1FC8:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl
open_ChallengeKanketuMenu__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberKanketuMenu
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C2010
	stw      r31, 0x200(r30)
	li       r4, 1
	addi     r5, r2, lbl_805194D0@sda21
	li       r6, 3
	lbz      r0, 0x1f8(r30)
	ori      r0, r0, 4
	stb      r0, 0x1f8(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	addi     r5, r2, lbl_805194D0@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc

lbl_801C2010:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C202C
 * Size:	000014
 */
void VsGameSection::clearCaveMenus(void)
{
	/*
	li       r0, 0
	stb      r0, 0x1f8(r3)
	stw      r0, 0x1fc(r3)
	stw      r0, 0x200(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2040
 * Size:	0002A8
 */
void VsGameSection::updateCaveMenus(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lis      r3, lbl_8047FF98@ha
	stw      r30, 0x48(r1)
	addi     r30, r3, lbl_8047FF98@l
	lbz      r4, 0x1f8(r31)
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_801C217C
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_CaveMoreMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_801C2134
	bge      lbl_801C2090
	cmpwi    r3, 0
	beq      lbl_801C22CC
	bge      lbl_801C209C
	b        lbl_801C22CC

lbl_801C2090:
	cmpwi    r3, 4
	bge      lbl_801C22CC
	b        lbl_801C2168

lbl_801C209C:
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x2a0(r3)
	li       r4, 1
	lwz      r3, playData__4Game@sda21(r13)
	stfs     f0, 0x24(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x2a0(r3)
	addi     r5, r30, 0xec
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	li       r6, 3
	stfs     f0, 0x28(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0xec
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x1f8(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x1f8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0x1fc(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_801C22D0

lbl_801C2134:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805194D8@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805194D8@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x1f8(r31)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x1f8(r31)
	b        lbl_801C22CC

lbl_801C2168:
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0xf8
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	b        lbl_801C22CC

lbl_801C217C:
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_801C22CC
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_KanketuMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_801C229C
	bge      lbl_801C22CC
	cmpwi    r3, 0
	beq      lbl_801C22CC
	bge      lbl_801C21AC
	b        lbl_801C22CC
	b        lbl_801C22CC

lbl_801C21AC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805194E0@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805194E0@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r3, 0x1f8(r31)
	addi     r4, r30, 0x104
	lfs      f0, lbl_805194A8@sda21(r2)
	li       r0, 0
	rlwinm   r5, r3, 0, 0x1e, 0x1c
	addi     r3, r1, 8
	stb      r5, 0x1f8(r31)
	lwz      r5, 0xc8(r31)
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	stw      r5, 0x20(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x44(r1)
	lwz      r4, 0x200(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x200(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	li       r4, 0
	lwz      r0, 0xcc(r31)
	stw      r0, 0x24(r1)
	lwz      r3, 0x200(r31)
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r0, 0x200(r31)
	addi     r4, r1, 0x14
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r0, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	li       r3, 1
	b        lbl_801C22D0

lbl_801C229C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805194E8@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805194E8@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x1f8(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stb      r0, 0x1f8(r31)

lbl_801C22CC:
	li       r3, 0

lbl_801C22D0:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C22E8
 * Size:	000008
 */
void ItemBigFountain::Item::getFaceDir(void)
{
	/*
	lfs      f1, 0x1ec(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C22F0
 * Size:	0000DC
 */
void VsGameSection::onMovieStart(Game::MovieConfig*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  addi      r4, r7, 0xAC
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        0x26F5A4
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x58
	  cmpwi     r0, 0x3
	  bne-      .loc_0x5C

	.loc_0x58:
	  li        r3, 0x1

	.loc_0x5C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  cmplwi    r31, 0x1
	  bne-      .loc_0x7C
	  mr        r3, r28
	  li        r4, 0x1
	  bl        -0x74A4C
	  b         .loc_0x88

	.loc_0x7C:
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x74A5C

	.loc_0x88:
	  mr        r3, r28
	  bl        -0x745F4
	  lwz       r3, 0x180(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0xBC
	  lwz       r12, 0x0(r3)
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  lwz       r12, 0x2C(r12)
	  mr        r7, r31
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C23CC
 * Size:	000004
 */
void VsGame::State::onMovieStart(Game::VsGameSection*, Game::MovieConfig*, unsigned long, unsigned long) { }

/*
 * --INFO--
 * Address:	801C23D0
 * Size:	000054
 */
void VsGameSection::onMovieDone(Game::MovieConfig*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r3
	  mr        r8, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r7, r6
	  lwz       r3, 0x180(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  mr        r4, r9
	  mr        r5, r8
	  mr        r6, r0
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C2424
 * Size:	000004
 */
void VsGame::State::onMovieDone(Game::VsGameSection*, Game::MovieConfig*, unsigned long, unsigned long) { }

/*
 * --INFO--
 * Address:	801C2428
 * Size:	000434
 */
void VsGameSection::createFallPikmins(Game::PikiContainer&, int)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stfd     f20, 0xa0(r1)
	psq_st   f20, 168(r1), 0, qr0
	stmw     r25, 0x84(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	mr       r26, r4
	addi     r4, r1, 0x38
	lwz      r12, 4(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lis      r4, lbl_804800BC@ha
	mr       r3, r26
	addi     r4, r4, lbl_804800BC@l
	bl       dump__Q24Game13PikiContainerFPc
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r1, 8
	mr       r4, r0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x38
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x38(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lis      r3, sincosTable___5JMath@ha
	stfs     f1, 0x3c(r1)
	lfd      f22, lbl_805194C8@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	lfs      f23, lbl_805194F0@sda21(r2)
	li       r29, 0
	lfs      f24, lbl_805194F8@sda21(r2)
	lis      r30, 0x4330
	lfs      f25, lbl_805194F4@sda21(r2)
	lfs      f26, lbl_805194FC@sda21(r2)
	lfs      f27, lbl_80519500@sda21(r2)
	lfs      f28, lbl_80519508@sda21(r2)
	lfs      f29, lbl_80519504@sda21(r2)
	lfs      f30, lbl_805194A8@sda21(r2)
	lfs      f31, lbl_8051950C@sda21(r2)

lbl_801C2564:
	li       r28, 0

lbl_801C2568:
	li       r27, 0
	b        lbl_801C27AC

lbl_801C2570:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x48(r1)
	stw      r0, 0x4c(r1)
	lfd      f0, 0x48(r1)
	fsubs    f0, f0, f22
	fdivs    f0, f0, f23
	fmadds   f21, f24, f0, f25
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x50(r1)
	stw      r0, 0x54(r1)
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f22
	fdivs    f0, f0, f23
	fmuls    f20, f26, f0
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x58(r1)
	fmr      f1, f20
	stw      r0, 0x5c(r1)
	fcmpo    cr0, f20, f30
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f22
	fdivs    f0, f0, f23
	fmadds   f0, f28, f0, f29
	fadds    f2, f27, f0
	bge      lbl_801C25E4
	fneg     f1, f20

lbl_801C25E4:
	fmuls    f0, f1, f31
	fcmpo    cr0, f20, f30
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f1, f21, f0
	bge      lbl_801C2638
	lfs      f0, lbl_80519510@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f20, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_801C2658

lbl_801C2638:
	fmuls    f0, f20, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_801C2658:
	fmuls    f0, f21, f0
	stfs     f2, 0x30(r1)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	or.      r25, r3, r3
	lfs      f0, 0x38(r1)
	lfs      f3, 0x30(r1)
	fadds    f4, f1, f0
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x34(r1)
	lfs      f0, 0x40(r1)
	fadds    f2, f3, f2
	stfs     f4, 0x2c(r1)
	fadds    f0, f1, f0
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	beq      lbl_801C27A8
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r5, 0xf
	stw      r0, 0x20(r1)
	addi     r6, r4, __vt__Q24Game11PikiInitArg@l
	li       r0, 0
	addi     r4, r1, 0x20
	stw      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r0, 0x28(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x74(r1)
	mr       r3, r25
	lfd      f3, lbl_805194C8@sda21(r2)
	addi     r4, r1, 0x2c
	stw      r0, 0x70(r1)
	li       r5, 0
	lfs      f1, lbl_805194F0@sda21(r2)
	lfd      f2, 0x70(r1)
	lfs      f0, lbl_805194FC@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1fc(r25)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r25
	mr       r4, r29
	bl       changeShape__Q24Game4PikiFi
	mr       r3, r25
	mr       r4, r28
	bl       changeHappa__Q24Game4PikiFi
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	mr       r3, r25
	lfs      f2, lbl_805194A8@sda21(r2)
	addi     r4, r1, 0x14
	stw      r0, 0x68(r1)
	lfd      f1, lbl_805194C8@sda21(r2)
	lfd      f0, 0x68(r1)
	lfs      f3, lbl_805194F0@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_80519518@sda21(r2)
	lfs      f0, lbl_80519514@sda21(r2)
	stfs     f2, 0x14(r1)
	fdivs    f3, f4, f3
	stfs     f2, 0x1c(r1)
	fnmadds  f0, f1, f3, f0
	stfs     f0, 0x18(r1)
	lwz      r12, 0(r25)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r25
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_801C27A8:
	addi     r27, r27, 1

lbl_801C27AC:
	mr       r3, r26
	mr       r4, r29
	mr       r5, r28
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r0, 0(r3)
	cmpw     r27, r0
	blt      lbl_801C2570
	addi     r28, r28, 1
	cmpwi    r28, 3
	blt      lbl_801C2568
	addi     r29, r29, 1
	cmpwi    r29, 7
	blt      lbl_801C2564
	mr       r3, r26
	bl       clear__Q24Game13PikiContainerFv
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	psq_l    f20, 168(r1), 0, qr0
	lfd      f20, 0xa0(r1)
	lmw      r25, 0x84(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C285C
 * Size:	000564
 */
void VsGameSection::createVsPikmins(void)
{
	/*
	stwu     r1, -0x1b0(r1)
	mflr     r0
	stw      r0, 0x1b4(r1)
	stfd     f31, 0x1a0(r1)
	psq_st   f31, 424(r1), 0, qr0
	stfd     f30, 0x190(r1)
	psq_st   f30, 408(r1), 0, qr0
	stfd     f29, 0x180(r1)
	psq_st   f29, 392(r1), 0, qr0
	stfd     f28, 0x170(r1)
	psq_st   f28, 376(r1), 0, qr0
	stfd     f27, 0x160(r1)
	psq_st   f27, 360(r1), 0, qr0
	stfd     f26, 0x150(r1)
	psq_st   f26, 344(r1), 0, qr0
	stfd     f25, 0x140(r1)
	psq_st   f25, 328(r1), 0, qr0
	stfd     f24, 0x130(r1)
	psq_st   f24, 312(r1), 0, qr0
	stfd     f23, 0x120(r1)
	psq_st   f23, 296(r1), 0, qr0
	stfd     f22, 0x110(r1)
	psq_st   f22, 280(r1), 0, qr0
	stfd     f21, 0x100(r1)
	psq_st   f21, 264(r1), 0, qr0
	stfd     f20, 0xf0(r1)
	psq_st   f20, 248(r1), 0, qr0
	stfd     f19, 0xe0(r1)
	psq_st   f19, 232(r1), 0, qr0
	stfd     f18, 0xd0(r1)
	psq_st   f18, 216(r1), 0, qr0
	stfd     f17, 0xc0(r1)
	psq_st   f17, 200(r1), 0, qr0
	stfd     f16, 0xb0(r1)
	psq_st   f16, 184(r1), 0, qr0
	stmw     r24, 0x90(r1)
	mr       r25, r3
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 1
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	or.      r26, r3, r3
	bne      lbl_801C2920
	lis      r3, lbl_8047FFF4@ha
	lis      r5, lbl_8047FFC0@ha
	addi     r3, r3, lbl_8047FFF4@l
	li       r4, 0x545
	addi     r5, r5, lbl_8047FFC0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C2920:
	mr       r4, r26
	addi     r3, r1, 0x28
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f25, 0x28(r1)
	li       r4, 0
	lfs      f24, 0x2c(r1)
	lfs      f23, 0x30(r1)
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	or.      r26, r3, r3
	bne      lbl_801C2974
	lis      r3, lbl_8047FFF4@ha
	lis      r5, lbl_8047FFC0@ha
	addi     r3, r3, lbl_8047FFF4@l
	li       r4, 0x54a
	addi     r5, r5, lbl_8047FFC0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C2974:
	mr       r4, r26
	addi     r3, r1, 0x1c
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r29, r25, 0x214
	lfs      f22, 0x1c(r1)
	lfs      f21, 0x20(r1)
	mr       r3, r29
	lfs      f20, 0x24(r1)
	bl       clear__Q24Game13PikiContainerFv
	mr       r3, r29
	li       r4, 1
	li       r5, 0
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r0, 0x344(r25)
	li       r4, 0
	li       r5, 0
	mulli    r0, r0, 5
	stw      r0, 0(r3)
	mr       r3, r29
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r0, 0x348(r25)
	li       r28, 0
	mulli    r0, r0, 5
	stw      r0, 0(r3)

lbl_801C29E0:
	cmpwi    r28, 1
	bne      lbl_801C29F8
	fmr      f19, f25
	fmr      f18, f24
	fmr      f17, f23
	b        lbl_801C2A0C

lbl_801C29F8:
	cmpwi    r28, 0
	bne      lbl_801C2BD4
	fmr      f19, f22
	fmr      f18, f21
	fmr      f17, f20

lbl_801C2A0C:
	lis      r3, sincosTable___5JMath@ha
	lfd      f26, lbl_805194C8@sda21(r2)
	lfs      f27, lbl_805194F0@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	lfs      f28, lbl_8051951C@sda21(r2)
	li       r27, 0
	lfs      f29, lbl_805194FC@sda21(r2)
	lis      r30, 0x4330
	lfs      f30, lbl_805194A8@sda21(r2)
	lfs      f31, lbl_8051950C@sda21(r2)

lbl_801C2A34:
	li       r26, 0
	b        lbl_801C2BAC

lbl_801C2A3C:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x68(r1)
	stw      r0, 0x6c(r1)
	lfd      f0, 0x68(r1)
	fsubs    f0, f0, f26
	fdivs    f0, f0, f27
	fmuls    f16, f28, f0
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r30, 0x70(r1)
	stw      r0, 0x74(r1)
	lfd      f0, 0x70(r1)
	fsubs    f0, f0, f26
	fdivs    f0, f0, f27
	fmuls    f2, f29, f0
	fmr      f0, f2
	fcmpo    cr0, f2, f30
	bge      lbl_801C2A8C
	fneg     f0, f2

lbl_801C2A8C:
	fmuls    f0, f0, f31
	fcmpo    cr0, f2, f30
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f1, f16, f0
	bge      lbl_801C2AE0
	lfs      f0, lbl_80519510@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_801C2B00

lbl_801C2AE0:
	fmuls    f0, f2, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_801C2B00:
	fmuls    f0, f16, f0
	stfs     f30, 0x60(r1)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stfs     f1, 0x64(r1)
	stfs     f0, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x5c(r1)
	or.      r24, r3, r3
	lfs      f1, 0x60(r1)
	lfs      f0, 0x64(r1)
	fadds    f2, f2, f19
	fadds    f1, f1, f18
	fadds    f0, f0, f17
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	beq      lbl_801C2BA8
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r5, -1
	stw      r0, 0x50(r1)
	addi     r6, r4, __vt__Q24Game11PikiInitArg@l
	li       r0, 0
	addi     r4, r1, 0x50
	stw      r6, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x58(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r24
	addi     r4, r1, 0x5c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r24
	mr       r4, r28
	bl       changeShape__Q24Game4PikiFi
	mr       r3, r24
	mr       r4, r27
	bl       changeHappa__Q24Game4PikiFi

lbl_801C2BA8:
	addi     r26, r26, 1

lbl_801C2BAC:
	mr       r3, r29
	mr       r4, r28
	mr       r5, r27
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r0, 0(r3)
	cmpw     r26, r0
	blt      lbl_801C2A3C
	addi     r27, r27, 1
	cmpwi    r27, 3
	blt      lbl_801C2A34

lbl_801C2BD4:
	addi     r28, r28, 1
	cmpwi    r28, 7
	blt      lbl_801C29E0
	lwz      r3, lbl_80520E68@sda21(r2)
	addi     r26, r1, 8
	lwz      r0, lbl_80520E6C@sda21(r2)
	li       r24, 0
	stw      r3, 8(r1)
	lwz      r3, cBedamaRed__13VsOtakaraName@sda21(r13)
	stw      r0, 0xc(r1)
	lwz      r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)

lbl_801C2C08:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	subfic   r4, r24, 1
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	mr       r0, r3
	addi     r3, r1, 0x40
	mr       r27, r0
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 0x40
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_801C2CAC

lbl_801C2C30:
	addi     r3, r1, 0x40
	bl       __ml__Q24Game14PelletIteratorFv
	mr       r0, r3
	lwz      r3, 0(r26)
	mr       r28, r0
	lwz      r4, 0x35c(r28)
	lwz      r4, 0x40(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801C2CA4
	mr       r4, r27
	addi     r3, r1, 0x10
	bl       getFlagSetPos__Q24Game5OnyonFv
	lfs      f2, 0x10(r1)
	mr       r3, r28
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f2, lbl_805194AC@sda21(r2)
	mr       r3, r28
	lfs      f0, 0x38(r1)
	addi     r4, r1, 0x34
	li       r5, 0
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x38(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_801C2CA4:
	addi     r3, r1, 0x40
	bl       next__Q24Game14PelletIteratorFv

lbl_801C2CAC:
	addi     r3, r1, 0x40
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C2C30
	addi     r24, r24, 1
	addi     r26, r26, 4
	cmpwi    r24, 2
	blt      lbl_801C2C08
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x33c(r25)
	li       r4, 1
	lwz      r0, 0x68(r5)
	stw      r0, 0x25c(r3)
	lwz      r5, 0x33c(r25)
	lwz      r0, 0x64(r5)
	stw      r0, 0x260(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x33c(r25)
	lwz      r0, 0x68(r4)
	stw      r0, 0x25c(r3)
	lwz      r4, 0x33c(r25)
	lwz      r0, 0x64(r4)
	stw      r0, 0x260(r3)
	psq_l    f31, 424(r1), 0, qr0
	lfd      f31, 0x1a0(r1)
	psq_l    f30, 408(r1), 0, qr0
	lfd      f30, 0x190(r1)
	psq_l    f29, 392(r1), 0, qr0
	lfd      f29, 0x180(r1)
	psq_l    f28, 376(r1), 0, qr0
	lfd      f28, 0x170(r1)
	psq_l    f27, 360(r1), 0, qr0
	lfd      f27, 0x160(r1)
	psq_l    f26, 344(r1), 0, qr0
	lfd      f26, 0x150(r1)
	psq_l    f25, 328(r1), 0, qr0
	lfd      f25, 0x140(r1)
	psq_l    f24, 312(r1), 0, qr0
	lfd      f24, 0x130(r1)
	psq_l    f23, 296(r1), 0, qr0
	lfd      f23, 0x120(r1)
	psq_l    f22, 280(r1), 0, qr0
	lfd      f22, 0x110(r1)
	psq_l    f21, 264(r1), 0, qr0
	lfd      f21, 0x100(r1)
	psq_l    f20, 248(r1), 0, qr0
	lfd      f20, 0xf0(r1)
	psq_l    f19, 232(r1), 0, qr0
	lfd      f19, 0xe0(r1)
	psq_l    f18, 216(r1), 0, qr0
	lfd      f18, 0xd0(r1)
	psq_l    f17, 200(r1), 0, qr0
	lfd      f17, 0xc0(r1)
	psq_l    f16, 184(r1), 0, qr0
	lfd      f16, 0xb0(r1)
	lmw      r24, 0x90(r1)
	lwz      r0, 0x1b4(r1)
	mtlr     r0
	addi     r1, r1, 0x1b0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2DC0
 * Size:	000010
 */
void VsGameSection::addChallengeScore(int)
{
	/*
	lwz      r0, 0x3bc(r3)
	add      r0, r0, r4
	stw      r0, 0x3bc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2DD0
 * Size:	00006C
 */
void VsGameSection::sendMessage(Game::GameMessage&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C2E24
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801C2E24:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2E3C
 * Size:	000040
 */
void GameMessageVsGetDoping::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r4, 4(r5)
	lwz      r5, 8(r5)
	bl       getGetDopeCount__Q24Game13VsGameSectionFii
	lwz      r4, 0(r3)
	addi     r0, r4, 1
	stw      r0, 0(r3)
	li       r3, 1
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2E7C
 * Size:	00004C
 */
void GameMessageVsBattleFinished::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	lwz      r0, 0x180(r4)
	cmplwi   r0, 0
	beq      lbl_801C2EB4
	mr       r3, r0
	lwz      r5, 4(r5)
	lwz      r12, 0(r3)
	li       r6, 0
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_801C2EB4:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2EC8
 * Size:	000004
 */
void VsGame::State::onBattleFinished(Game::VsGameSection*, int, bool) { }

/*
 * --INFO--
 * Address:	801C2ECC
 * Size:	00004C
 */
void GameMessageVsRedOrSuckStart::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x14(r1)
	lwz      r0, 0x180(r4)
	cmplwi   r0, 0
	beq      lbl_801C2F04
	mr       r3, r0
	lwz      r5, 4(r6)
	lwz      r12, 0(r3)
	lbz      r6, 8(r6)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_801C2F04:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2F18
 * Size:	000004
 */
void VsGame::State::onRedOrBlueSuckStart(Game::VsGameSection*, int, bool) { }

/*
 * --INFO--
 * Address:	801C2F1C
 * Size:	0000B8
 */
void GameMessageVsGetOtakara::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0x180(r4)
	cmplwi   r0, 0
	beq      lbl_801C2FB8
	lwz      r0, 4(r30)
	slwi     r0, r0, 2
	add      r4, r31, r0
	lwz      r3, 0x3d4(r4)
	addi     r0, r3, 1
	stw      r0, 0x3d4(r4)
	lwz      r3, 4(r30)
	slwi     r0, r3, 2
	cntlzw   r4, r3
	add      r3, r31, r0
	lwz      r0, 0x3d4(r3)
	srwi     r3, r4, 5
	subfic   r0, r0, 3
	cntlzw   r0, r0
	srwi     r4, r0, 5
	bl       PSSetLastBeedamaDirection__Fbb
	lwz      r5, 4(r30)
	slwi     r0, r5, 2
	add      r3, r31, r0
	lwz      r0, 0x3d4(r3)
	cmpwi    r0, 4
	blt      lbl_801C2FB8
	lwz      r3, 0x180(r31)
	mr       r4, r31
	li       r6, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_801C2FB8:
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C2FD4
 * Size:	000034
 */
void GameMessageVsAddEnemy::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x32c(r4)
	lwz      r4, 4(r5)
	lwz      r5, 8(r5)
	bl       entry__Q34Game6VsGame7TekiMgrFQ34Game11EnemyTypeID12EEnemyTypeIDi
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void GameMessageVsBirthTeki::actVs(Game::VsGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C3008
 * Size:	000118
 */
void GameMessagePelletBorn::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lbz      r0, 0x32c(r5)
	cmplwi   r0, 6
	bne      lbl_801C310C
	lwz      r0, 0x388(r4)
	cmplw    r0, r5
	bne      lbl_801C3038
	li       r3, 0
	b        lbl_801C3110

lbl_801C3038:
	lwz      r0, 0x38c(r4)
	cmplw    r0, r5
	bne      lbl_801C304C
	li       r3, 0
	b        lbl_801C3110

lbl_801C304C:
	addi     r3, r4, 8
	lwz      r0, 0x390(r4)
	cmplw    r0, r5
	bne      lbl_801C3064
	li       r3, 0
	b        lbl_801C3110

lbl_801C3064:
	lwz      r0, 0x38c(r3)
	cmplw    r0, r5
	bne      lbl_801C3078
	li       r3, 0
	b        lbl_801C3110

lbl_801C3078:
	lwz      r0, 0x390(r3)
	cmplw    r0, r5
	bne      lbl_801C308C
	li       r3, 0
	b        lbl_801C3110

lbl_801C308C:
	lwz      r0, 0x394(r3)
	cmplw    r0, r5
	bne      lbl_801C30A0
	li       r3, 0
	b        lbl_801C3110

lbl_801C30A0:
	lwz      r0, 0x398(r3)
	cmplw    r0, r5
	bne      lbl_801C30B4
	li       r3, 0
	b        lbl_801C3110

lbl_801C30B4:
	li       r0, 7
	mr       r3, r4
	li       r6, 0
	mtctr    r0

lbl_801C30C4:
	lwz      r0, 0x388(r3)
	cmplwi   r0, 0
	bne      lbl_801C30E4
	slwi     r0, r6, 2
	li       r3, 1
	add      r4, r4, r0
	stw      r5, 0x388(r4)
	b        lbl_801C3110

lbl_801C30E4:
	addi     r3, r3, 4
	addi     r6, r6, 1
	bdnz     lbl_801C30C4
	lis      r3, lbl_8047FFF4@ha
	lis      r5, lbl_804800D0@ha
	addi     r3, r3, lbl_8047FFF4@l
	li       r4, 0x638
	addi     r5, r5, lbl_804800D0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C310C:
	li       r3, 0

lbl_801C3110:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C3120
 * Size:	00008C
 */
void GameMessagePelletDead::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lbz      r0, 0x32c(r5)
	cmplwi   r0, 6
	bne      lbl_801C3198
	li       r0, 7
	mr       r3, r4
	li       r6, 0
	mtctr    r0

lbl_801C314C:
	lwz      r0, 0x388(r3)
	cmplw    r0, r5
	bne      lbl_801C3170
	slwi     r0, r6, 2
	li       r5, 0
	add      r4, r4, r0
	li       r3, 1
	stw      r5, 0x388(r4)
	b        lbl_801C319C

lbl_801C3170:
	addi     r3, r3, 4
	addi     r6, r6, 1
	bdnz     lbl_801C314C
	lis      r3, lbl_8047FFF4@ha
	lis      r5, lbl_804800EC@ha
	addi     r3, r3, lbl_8047FFF4@l
	li       r4, 0x651
	addi     r5, r5, lbl_804800EC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C3198:
	li       r3, 0

lbl_801C319C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C31AC
 * Size:	000228
 */
void GameMessageVsBirthTekiTreasure::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stmw     r26, 0x88(r1)
	mr       r30, r3
	mr       r31, r4
	lfs      f1, 4(r3)
	addi     r3, r1, 0x18
	lfs      f0, lbl_80519520@sda21(r2)
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	li       r29, 0
	li       r28, 0
	li       r27, 0
	lfs      f1, 8(r30)
	stfs     f1, 0xc(r1)
	lfs      f1, 0xc(r30)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	addi     r3, r1, 0x38
	addi     r4, r1, 0x18
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x38
	bl       first__Q24Game12CellIteratorFv
	b        lbl_801C3284

lbl_801C321C:
	addi     r3, r1, 0x38
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r26, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C327C
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C327C
	lbz      r0, 0x2b8(r26)
	cmpwi    r0, 1
	bne      lbl_801C3270
	addi     r28, r28, 1
	b        lbl_801C327C

lbl_801C3270:
	cmpwi    r0, 0
	bne      lbl_801C327C
	addi     r27, r27, 1

lbl_801C327C:
	addi     r3, r1, 0x38
	bl       next__Q24Game12CellIteratorFv

lbl_801C3284:
	addi     r3, r1, 0x38
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C321C
	cmpw     r27, r28
	ble      lbl_801C32A0
	li       r29, 1

lbl_801C32A0:
	subfic   r0, r29, 1
	slwi     r3, r29, 2
	slwi     r0, r0, 2
	lfs      f0, lbl_80519528@sda21(r2)
	add      r4, r31, r3
	lfs      f31, lbl_80519524@sda21(r2)
	add      r3, r31, r0
	lfs      f2, 0x370(r4)
	lfs      f1, 0x370(r3)
	fsubs    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_801C32E4
	lwz      r3, 0x10(r30)
	fmr      f31, f0
	addi     r0, r3, 2
	stw      r0, 0x10(r30)
	b        lbl_801C334C

lbl_801C32E4:
	lfs      f0, lbl_805194AC@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801C3304
	lwz      r3, 0x10(r30)
	fmr      f31, f0
	addi     r0, r3, 1
	stw      r0, 0x10(r30)
	b        lbl_801C334C

lbl_801C3304:
	lfs      f1, lbl_8051952C@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_801C3314
	b        lbl_801C334C

lbl_801C3314:
	lfs      f0, lbl_80519530@sda21(r2)
	fcmpo    cr0, f2, f0
	bgt      lbl_801C334C
	lfs      f0, lbl_80519534@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801C3334
	fmr      f31, f1
	b        lbl_801C334C

lbl_801C3334:
	lfs      f0, lbl_80519538@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801C3348
	lfs      f31, lbl_8051953C@sda21(r2)
	b        lbl_801C334C

lbl_801C3348:
	lfs      f31, lbl_80519540@sda21(r2)

lbl_801C334C:
	bl       rand
	xoris    r4, r3, 0x8000
	lis      r0, 0x4330
	stw      r4, 0x84(r1)
	lfd      f2, lbl_805194C8@sda21(r2)
	stw      r0, 0x80(r1)
	lfs      f0, lbl_805194F0@sda21(r2)
	lfd      f1, 0x80(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	fcmpo    cr0, f0, f31
	bgt      lbl_801C33B8
	lwz      r3, 0x32c(r31)
	li       r27, 0
	lwz      r3, 0x24(r3)
	addi     r26, r3, -1
	b        lbl_801C33A8

lbl_801C3390:
	lwz      r3, 0x32c(r31)
	mr       r4, r26
	lbz      r6, 0x14(r30)
	addi     r5, r30, 4
	bl       "birth__Q34Game6VsGame7TekiMgrFiR10Vector3<f>b"
	addi     r27, r27, 1

lbl_801C33A8:
	lwz      r0, 0x10(r30)
	cmpw     r27, r0
	blt      lbl_801C3390
	li       r3, 1

lbl_801C33B8:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	lmw      r26, 0x88(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C33D4
 * Size:	00001C
 */
void GameMessageVsPikminDead::actVs(Game::VsGameSection*)
{
	/*
	li       r0, 0
	li       r3, 1
	stb      r0, 0x205(r4)
	lwz      r5, 0x208(r4)
	addi     r0, r5, 1
	stw      r0, 0x208(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C33F0
 * Size:	00007C
 */
void GameMessageVsGotCard::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 4(r3)
	lwz      r4, 0x330(r4)
	mulli    r3, r0, 0x70
	addi     r3, r3, 0x18
	add      r3, r4, r3
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	bne      lbl_801C3444
	lwz      r3, 0x58(r3)
	addis    r0, r3, 0
	cmplwi   r0, 0xffff
	beq      lbl_801C3444
	mr       r3, r31
	bl       useCard__Q24Game13VsGameSectionFv

lbl_801C3444:
	lwz      r3, 0x330(r31)
	lwz      r4, 4(r30)
	bl       gotPlayerCard__Q34Game6VsGame7CardMgrFi
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C346C
 * Size:	0000A8
 */
void GameMessageVsUseCard::actVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x180(r4)
	cmplwi   r3, 0
	beq      lbl_801C34B4
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801C34B4
	li       r3, 0
	b        lbl_801C34FC

lbl_801C34B4:
	lis      r3, gGameConfig__4Game@ha
	addi     r3, r3, gGameConfig__4Game@l
	lwz      r0, 0x1b8(r3)
	cmpwi    r0, 0
	bne      lbl_801C34EC
	lwz      r3, 0x330(r31)
	lwz      r4, 4(r30)
	lwz      r5, 0x32c(r31)
	bl       usePlayerCard__Q34Game6VsGame7CardMgrFiPQ34Game6VsGame7TekiMgr
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C34F8
	mr       r3, r31
	bl       useCard__Q24Game13VsGameSectionFv
	b        lbl_801C34F8

lbl_801C34EC:
	lwz      r3, 0x330(r31)
	lwz      r4, 4(r30)
	bl       stopSlot__Q34Game6VsGame7CardMgrFi

lbl_801C34F8:
	li       r3, 1

lbl_801C34FC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C3514
 * Size:	000008
 */
u32 VsGame::State::isCardUsable(Game::VsGameSection*) { return 0x0; }

/*
 * --INFO--
 * Address:	........
 * Size:	000170
 */
void VsGameSection::createCardPellet(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C351C
 * Size:	000010
 */
void setComeAlive__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fi(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x9C(r3)
	  li        r0, 0
	  stbx      r0, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C352C
 * Size:	000190
 */
void VsGameSection::initCardPellets(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	li       r0, 0xa
	stmw     r27, 0x4c(r1)
	mr       r30, r3
	stw      r0, 0x3cc(r3)
	lis      r3, lbl_8047FF98@ha
	addi     r31, r3, lbl_8047FF98@l
	lwz      r0, 0x3cc(r30)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x3d0(r30)
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	addi     r0, r3, __vt__Q24Game15CreatureInitArg@l
	li       r7, 0
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	stw      r0, 0x18(r1)
	li       r0, -1
	li       r6, 0xff
	addi     r3, r3, __vt__Q24Game13PelletInitArg@l
	li       r5, 1
	stw      r3, 0x18(r1)
	addi     r4, r1, 8
	lwz      r3, cCoin__13VsOtakaraName@sda21(r13)
	stb      r7, 0x34(r1)
	sth      r7, 0x2c(r1)
	stb      r6, 0x2e(r1)
	stw      r7, 0x30(r1)
	stb      r7, 0x2f(r1)
	stb      r5, 0x1c(r1)
	stb      r7, 0x35(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x38(r1)
	stb      r7, 0x36(r1)
	stb      r7, 0x37(r1)
	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
	or.      r29, r3, r3
	bne      lbl_801C35DC
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x70
	li       r4, 0x704
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C35DC:
	lha      r4, 0x258(r29)
	li       r0, 1
	lwz      r3, 8(r1)
	li       r27, 0
	stw      r4, 0x28(r1)
	li       r28, 0
	lwz      r4, 0x40(r29)
	stw      r4, 0x20(r1)
	stb      r3, 0x2e(r1)
	stw      r0, 0x38(r1)
	stw      r0, 0x3c(r1)
	b        lbl_801C366C

lbl_801C360C:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x18
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r29, r3, r3
	beq      lbl_801C3650
	lfs      f0, lbl_805194A8@sda21(r2)
	addi     r4, r1, 0xc
	li       r5, 0
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	stfs     f0, 0x14(r1)
	lwz      r6, 0x3d0(r30)
	stwx     r29, r6, r28
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x3d0(r30)
	stwx     r29, r3, r28
	b        lbl_801C3664

lbl_801C3650:
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x16c
	li       r4, 0x715
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C3664:
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_801C366C:
	lwz      r0, 0x3cc(r30)
	cmpw     r27, r0
	blt      lbl_801C360C
	li       r27, 0
	li       r28, 0
	b        lbl_801C369C

lbl_801C3684:
	lwz      r3, 0x3d0(r30)
	li       r4, 0
	lwzx     r3, r3, r28
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_801C369C:
	lwz      r0, 0x3cc(r30)
	cmpw     r27, r0
	blt      lbl_801C3684
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C36BC
 * Size:	000014
 */
void VsGameSection::initCardGeneration(void)
{
	/*
	li       r0, 0
	lfs      f0, lbl_80519544@sda21(r2)
	stw      r0, 0x3c4(r3)
	stfs     f0, 0x3c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C36D0
 * Size:	0002D8
 */
void VsGameSection::updateCardGeneration(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stmw     r27, 0x1c(r1)
	mr       r29, r3
	lfs      f4, lbl_80519524@sda21(r2)
	lfs      f3, 0x378(r3)
	li       r31, 0
	lfs      f2, 0x37c(r3)
	li       r30, 5
	lfs      f1, 0x370(r3)
	lfs      f0, 0x374(r3)
	fsubs    f2, f3, f2
	lfs      f31, lbl_80519548@sda21(r2)
	fsubs    f0, f1, f0
	lfs      f30, lbl_8051954C@sda21(r2)
	fsubs    f6, f2, f0
	fabs     f0, f6
	frsp     f5, f0
	fcmpo    cr0, f5, f4
	blt      lbl_801C37D8
	fcmpo    cr0, f4, f5
	cror     2, 0, 2
	mfcr     r0
	lis      r3, 0x4330
	rlwinm   r0, r0, 3, 0x1f, 0x1f
	stw      r3, 0x10(r1)
	lfd      f3, lbl_80519568@sda21(r2)
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f3
	fcmpo    cr0, f0, f31
	bge      lbl_801C3778
	lfs      f31, lbl_80519550@sda21(r2)
	li       r30, 5
	lfs      f30, lbl_805194AC@sda21(r2)
	li       r31, 1
	b        lbl_801C37D8

lbl_801C3778:
	fcmpo    cr0, f31, f5
	fmr      f2, f31
	cror     2, 0, 2
	mfcr     r0
	stw      r3, 0x10(r1)
	rlwinm   r0, r0, 3, 0x1f, 0x1f
	lfs      f0, lbl_80519528@sda21(r2)
	stw      r0, 0x14(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f3
	fcmpo    cr0, f1, f0
	bge      lbl_801C37BC
	fmr      f31, f4
	li       r30, 6
	fmr      f30, f2
	li       r31, 1
	b        lbl_801C37D8

lbl_801C37BC:
	fcmpo    cr0, f0, f5
	cror     2, 0, 2
	bne      lbl_801C37D8
	fmr      f31, f4
	li       r30, 7
	fmr      f30, f2
	li       r31, 1

lbl_801C37D8:
	lfs      f0, lbl_805194A8@sda21(r2)
	fcmpo    cr0, f6, f0
	bge      lbl_801C37F4
	fmr      f1, f31
	lfs      f0, lbl_805194B8@sda21(r2)
	fsubs    f31, f0, f30
	fsubs    f30, f0, f1

lbl_801C37F4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_801C3894
	lfs      f2, 0x364(r29)
	lfs      f0, 0x360(r29)
	lfs      f1, lbl_805194AC@sda21(r2)
	fsubs    f3, f2, f0
	lfs      f0, lbl_8051952C@sda21(r2)
	fmuls    f3, f3, f1
	fabs     f2, f3
	frsp     f2, f2
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	beq      lbl_801C3894
	lfs      f0, lbl_80519524@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_801C3840
	lfs      f31, lbl_80519548@sda21(r2)
	lfs      f30, lbl_80519554@sda21(r2)
	b        lbl_801C3878

lbl_801C3840:
	fcmpo    cr0, f2, f1
	bge      lbl_801C3854
	fmr      f30, f1
	lfs      f31, lbl_80519548@sda21(r2)
	b        lbl_801C3878

lbl_801C3854:
	lfs      f0, lbl_805194B8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_801C3878
	lfs      f0, lbl_80519558@sda21(r2)
	fmr      f30, f1
	lfs      f31, lbl_80519550@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801C3878
	li       r30, 5

lbl_801C3878:
	lfs      f0, lbl_805194A8@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_801C3894
	fmr      f1, f31
	lfs      f0, lbl_805194B8@sda21(r2)
	fsubs    f31, f0, f30
	fsubs    f30, f0, f1

lbl_801C3894:
	li       r28, 0
	li       r27, 0
	stw      r28, 0x3c4(r29)
	b        lbl_801C38D8

lbl_801C38A4:
	lwz      r3, 0x3d0(r29)
	lwzx     r3, r3, r28
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C38D0
	lwz      r3, 0x3c4(r29)
	addi     r0, r3, 1
	stw      r0, 0x3c4(r29)

lbl_801C38D0:
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_801C38D8:
	lwz      r0, 0x3cc(r29)
	cmpw     r27, r0
	blt      lbl_801C38A4
	lwz      r3, 0x3c4(r29)
	cmpwi    r3, 4
	blt      lbl_801C3900
	clrlwi.  r0, r31, 0x18
	beq      lbl_801C3984
	cmpw     r3, r30
	bge      lbl_801C3984

lbl_801C3900:
	lwz      r3, sys@sda21(r13)
	clrlwi.  r0, r31, 0x18
	lfs      f2, 0x54(r3)
	beq      lbl_801C3918
	lfs      f0, lbl_8051955C@sda21(r2)
	fmuls    f2, f2, f0

lbl_801C3918:
	lfs      f1, 0x3c8(r29)
	lfs      f0, lbl_805194A8@sda21(r2)
	fsubs    f1, f1, f2
	stfs     f1, 0x3c8(r29)
	lfs      f1, 0x3c8(r29)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_801C3984
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	mr       r3, r29
	lfd      f3, lbl_805194C8@sda21(r2)
	addi     r4, r1, 8
	stw      r0, 0x10(r1)
	lfs      f2, lbl_805194F0@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_80519560@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051951C@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	stfs     f0, 0x3c8(r29)
	stfs     f31, 8(r1)
	stfs     f30, 0xc(r1)
	bl dropCard__Q24Game13VsGameSectionFRQ34Game13VsGameSection11DropCardArg

lbl_801C3984:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C39A8
 * Size:	000018
 */
void VsGameSection::useCard(void)
{
	/*
	lwz      r4, 0x3c4(r3)
	cmpwi    r4, 0
	blelr
	addi     r0, r4, -1
	stw      r0, 0x3c4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C39C0
 * Size:	0003F4
 */
void VsGameSection::dropCard(Game::VsGameSection::DropCardArg&)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	stw      r28, 0xd0(r1)
	mr       r5, r4
	mr       r30, r3
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	addi     r4, r1, 0x28
	lfs      f1, 0(r5)
	lfs      f2, 4(r5)
	bl       "getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3<f>ff"
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xac(r1)
	lfd      f3, lbl_805194C8@sda21(r2)
	stw      r0, 0xa8(r1)
	lfs      f1, lbl_805194F0@sda21(r2)
	lfd      f2, 0xa8(r1)
	lfs      f0, lbl_80519520@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f31, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xb4(r1)
	lfd      f3, lbl_805194C8@sda21(r2)
	stw      r0, 0xb0(r1)
	lfs      f2, lbl_805194F0@sda21(r2)
	lfd      f0, 0xb0(r1)
	lfs      f1, lbl_805194FC@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805194A8@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_801C3A74
	fneg     f1, f3

lbl_801C3A74:
	lfs      f2, lbl_8051950C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_805194A8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f4, 0x28(r1)
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f5, f31, f0
	bge      lbl_801C3AD4
	lfs      f0, lbl_80519510@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xc0(r1)
	lwz      r0, 0xc4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_801C3AEC

lbl_801C3AD4:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xc8(r1)
	lwz      r0, 0xcc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_801C3AEC:
	fmuls    f3, f31, f0
	li       r7, 0
	lfs      f0, 0x30(r1)
	li       r0, -1
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	lfs      f2, 0x2c(r1)
	lfs      f1, lbl_805194A8@sda21(r2)
	fadds    f3, f4, f3
	fadds    f0, f0, f5
	addi     r4, r3, __vt__Q24Game15CreatureInitArg@l
	fadds    f1, f2, f1
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	li       r6, 0xff
	li       r5, 1
	stw      r4, 0x4c(r1)
	addi     r8, r3, __vt__Q24Game13PelletInitArg@l
	lwz      r3, cCoin__13VsOtakaraName@sda21(r13)
	addi     r4, r1, 8
	stfs     f3, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stw      r8, 0x4c(r1)
	stb      r7, 0x68(r1)
	sth      r7, 0x60(r1)
	stb      r6, 0x62(r1)
	stw      r7, 0x64(r1)
	stb      r7, 0x63(r1)
	stb      r5, 0x50(r1)
	stb      r7, 0x69(r1)
	stw      r0, 0x70(r1)
	stw      r0, 0x6c(r1)
	stb      r7, 0x6a(r1)
	stb      r7, 0x6b(r1)
	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
	or.      r31, r3, r3
	bne      lbl_801C3B98
	lis      r3, lbl_8047FFF4@ha
	lis      r5, lbl_80480008@ha
	addi     r3, r3, lbl_8047FFF4@l
	li       r4, 0x6df
	addi     r5, r5, lbl_80480008@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C3B98:
	lha      r4, 0x258(r31)
	li       r29, 0
	lwz      r3, 8(r1)
	li       r0, 1
	stw      r4, 0x5c(r1)
	mr       r28, r29
	lwz      r4, 0x40(r31)
	stw      r4, 0x54(r1)
	stb      r3, 0x62(r1)
	stb      r0, 0x68(r1)
	stw      r0, 0x6c(r1)
	stw      r0, 0x70(r1)
	b        lbl_801C3C30

lbl_801C3BCC:
	lwz      r3, 0x3d0(r30)
	lwzx     r31, r3, r28
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801C3C28
	mr       r3, r31
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 0
	bne      lbl_801C3C28
	lwz      r3, mgr__Q24Game13PelletOtakara@sda21(r13)
	lwz      r4, 0x440(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r1, 0x4c
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	b        lbl_801C3C40

lbl_801C3C28:
	addi     r28, r28, 4
	addi     r29, r29, 1

lbl_801C3C30:
	lwz      r0, 0x3cc(r30)
	cmpw     r29, r0
	blt      lbl_801C3BCC
	li       r31, 0

lbl_801C3C40:
	cmplwi   r31, 0
	beq      lbl_801C3D54
	lfs      f1, 0x2c(r1)
	mr       r3, r31
	lfs      f0, lbl_80519570@sda21(r2)
	addi     r4, r1, 0x28
	li       r5, 0
	fadds    f0, f1, f0
	stfs     f0, 0x2c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r5, 0x28(r1)
	lis      r6, __vt__Q23efx5TBase@ha
	lwz      r0, 0x2c(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lwz      r4, 0x30(r1)
	addi     r8, r6, __vt__Q23efx5TBase@l
	stw      r5, 0x10(r1)
	addi     r6, r3, __vt__Q23efx3Arg@l
	lfs      f0, lbl_805194B8@sda21(r2)
	lis      r5, __vt__Q23efx13TEnemyApsmoke@ha
	stw      r0, 0x14(r1)
	lis      r3, __vt__Q23efx12ArgEnemyType@ha
	lfs      f3, 0x10(r1)
	li       r0, 1
	stw      r4, 0x18(r1)
	addi     r7, r5, __vt__Q23efx13TEnemyApsmoke@l
	lfs      f2, 0x14(r1)
	addi     r5, r3, __vt__Q23efx12ArgEnemyType@l
	stw      r8, 0xc(r1)
	addi     r3, r1, 0xc
	lfs      f1, 0x18(r1)
	addi     r4, r1, 0x34
	stw      r6, 0x34(r1)
	stw      r7, 0xc(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stw      r5, 0x34(r1)
	stw      r0, 0x44(r1)
	stfs     f0, 0x48(r1)
	bl       create__Q23efx13TEnemyApsmokeFPQ23efx3Arg
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xcc(r1)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f1, lbl_805194A8@sda21(r2)
	addi     r4, r3, "zero__10Vector3<f>"@l
	stw      r0, 0xc8(r1)
	addi     r3, r1, 0x74
	lfd      f3, lbl_805194C8@sda21(r2)
	addi     r5, r1, 0x1c
	lfd      f0, 0xc8(r1)
	lfs      f2, lbl_805194F0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805194FC@sda21(r2)
	stfs     f1, 0x1c(r1)
	fdivs    f2, f3, f2
	stfs     f1, 0x24(r1)
	fmuls    f0, f0, f2
	stfs     f0, 0x20(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	addi     r4, r1, 0x74
	bl       setOrientation__Q24Game6PelletFR7Matrixf
	lwz      r3, 0x3c4(r30)
	addi     r0, r3, 1
	stw      r0, 0x3c4(r30)
	b        lbl_801C3D8C

lbl_801C3D54:
	li       r29, 0
	li       r28, 0
	b        lbl_801C3D80

lbl_801C3D60:
	lwz      r3, 0x3d0(r30)
	lwzx     r3, r3, r28
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 4
	addi     r29, r29, 1

lbl_801C3D80:
	lwz      r0, 0x3cc(r30)
	cmpw     r29, r0
	blt      lbl_801C3D60

lbl_801C3D8C:
	psq_l    f31, 232(r1), 0, qr0
	lwz      r0, 0xf4(r1)
	lfd      f31, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	lwz      r28, 0xd0(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C3DB4
 * Size:	0001AC
 */
void VsGameSection::createYellowBedamas(int)
{
	/*
	stwu     r1, -0x2b0(r1)
	mflr     r0
	stw      r0, 0x2b4(r1)
	stmw     r27, 0x29c(r1)
	mr       r30, r3
	lis      r3, lbl_8047FF98@ha
	mr       r31, r4
	addi     r28, r3, lbl_8047FF98@l
	lwz      r5, 0x33c(r30)
	cmplwi   r5, 0
	beq      lbl_801C3DF8
	lwz      r31, 0xb0(r5)
	cmpwi    r31, 0
	beq      lbl_801C3F4C
	cmpwi    r31, 7
	blt      lbl_801C3DF8
	li       r31, 7

lbl_801C3DF8:
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	li       r7, 0
	addi     r4, r3, __vt__Q24Game15CreatureInitArg@l
	li       r0, -1
	lis      r3, __vt__Q24Game13PelletInitArg@ha
	stw      r4, 0x18(r1)
	addi     r3, r3, __vt__Q24Game13PelletInitArg@l
	li       r6, 0xff
	li       r5, 1
	stw      r3, 0x18(r1)
	lwz      r3, cBedamaYellow__13VsOtakaraName@sda21(r13)
	addi     r4, r1, 8
	stb      r7, 0x34(r1)
	sth      r7, 0x2c(r1)
	stb      r6, 0x2e(r1)
	stw      r7, 0x30(r1)
	stb      r7, 0x2f(r1)
	stb      r5, 0x1c(r1)
	stb      r7, 0x35(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x38(r1)
	stb      r7, 0x36(r1)
	stb      r7, 0x37(r1)
	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
	or.      r29, r3, r3
	bne      lbl_801C3E74
	addi     r3, r28, 0x5c
	addi     r5, r28, 0x70
	li       r4, 0x86a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C3E74:
	lha      r0, 0x258(r29)
	cmpwi    r31, 0x32
	lwz      r4, 8(r1)
	li       r3, 1
	stw      r0, 0x28(r1)
	li       r0, 8
	lwz      r5, 0x40(r29)
	stw      r5, 0x20(r1)
	stb      r4, 0x2e(r1)
	stw      r3, 0x38(r1)
	stw      r0, 0x3c(r1)
	ble      lbl_801C3EBC
	mr       r6, r31
	addi     r3, r28, 0x5c
	addi     r5, r28, 0x17c
	li       r4, 0x873
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C3EBC:
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	addi     r3, r1, 0x40
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	li       r7, 0x32
	bl       __construct_array
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	mr       r5, r31
	lfs      f1, lbl_80519548@sda21(r2)
	addi     r4, r1, 0x40
	lfs      f2, lbl_8051954C@sda21(r2)
	bl       "getItemDropPosition__Q34Game4Cave10RandMapMgrFP10Vector3<f>iff"
	mr       r29, r30
	addi     r28, r1, 0x40
	li       r27, 0
	b        lbl_801C3F44

lbl_801C3F00:
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0x18
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	lfs      f2, 0(r28)
	mr       r30, r3
	lfs      f1, 4(r28)
	addi     r4, r1, 0xc
	lfs      f0, 8(r28)
	li       r5, 0
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	stw      r30, 0x388(r29)
	addi     r28, r28, 0xc
	addi     r29, r29, 4
	addi     r27, r27, 1

lbl_801C3F44:
	cmpw     r27, r31
	blt      lbl_801C3F00

lbl_801C3F4C:
	lmw      r27, 0x29c(r1)
	lwz      r0, 0x2b4(r1)
	mtlr     r0
	addi     r1, r1, 0x2b0
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801C3F60
 * Size:	00014C
 */
void createRedBlueBedamas__Q24Game13VsGameSectionFR10Vector3f(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	stw      r0, 0x64(r1)
	stmw     r26, 0x48(r1)
	mr       r28, r3
	addi     r29, r1, 0xc
	addi     r30, r5, __vt__Q24Game15CreatureInitArg@l
	li       r27, 0
	lwz      r4, lbl_80520E70@sda21(r2)
	lwz      r0, lbl_80520E74@sda21(r2)
	stw      r4, 0xc(r1)
	lis      r4, __vt__Q24Game13PelletInitArg@ha
	lwz      r6, cBedamaRed__13VsOtakaraName@sda21(r13)
	addi     r31, r4, __vt__Q24Game13PelletInitArg@l
	stw      r0, 0x10(r1)
	lwz      r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
	stw      r6, 0xc(r1)
	stw      r0, 0x10(r1)

lbl_801C3FAC:
	stw      r30, 0x20(r1)
	li       r7, 0
	li       r0, -1
	li       r6, 0xff
	li       r5, 1
	stw      r31, 0x20(r1)
	lwz      r3, 0(r29)
	addi     r4, r1, 8
	stb      r7, 0x3c(r1)
	sth      r7, 0x34(r1)
	stb      r6, 0x36(r1)
	stw      r7, 0x38(r1)
	stb      r7, 0x37(r1)
	stb      r5, 0x24(r1)
	stb      r7, 0x3d(r1)
	stw      r0, 0x44(r1)
	stw      r0, 0x40(r1)
	stb      r7, 0x3e(r1)
	stb      r7, 0x3f(r1)
	bl getConfigAndKind__Q34Game10PelletList3MgrFPcRQ34Game10PelletList5cKind
	or.      r26, r3, r3
	bne      lbl_801C4020
	lis      r3, lbl_8047FFF4@ha
	lis      r5, lbl_80480008@ha
	addi     r3, r3, lbl_8047FFF4@l
	li       r4, 0x8a3
	addi     r5, r5, lbl_80480008@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C4020:
	lha      r3, 0x258(r26)
	li       r5, 1
	lwz      r6, 8(r1)
	li       r0, 8
	stw      r3, 0x30(r1)
	addi     r4, r1, 0x20
	lwz      r3, pelletMgr__4Game@sda21(r13)
	lwz      r7, 0x40(r26)
	stw      r7, 0x28(r1)
	stb      r6, 0x36(r1)
	stw      r5, 0x40(r1)
	stw      r0, 0x44(r1)
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	mr       r0, r3
	lwz      r3, randMapMgr__Q24Game4Cave@sda21(r13)
	lfs      f1, lbl_80519524@sda21(r2)
	mr       r26, r0
	lfs      f2, lbl_80519528@sda21(r2)
	addi     r4, r1, 0x14
	bl       "getItemDropPosition__Q34Game4Cave10RandMapMgrFR10Vector3<f>ff"
	mr       r3, r26
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	addi     r27, r27, 1
	stw      r26, 0x380(r28)
	cmpwi    r27, 2
	addi     r29, r29, 4
	addi     r28, r28, 4
	blt      lbl_801C3FAC
	lmw      r26, 0x48(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	801C40AC
 * Size:	000814
 */
void VsGameSection::calcVsScores(void)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stmw     r22, 0x128(r1)
	mr       r29, r3
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r4, 1
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	stw      r3, 0x18(r1)
	li       r4, 0
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	addi     r31, r1, 0xa8
	addi     r30, r1, 0x8c
	stw      r3, 0x1c(r1)
	mr       r28, r29
	mr       r27, r31
	mr       r26, r30
	mr       r25, r3
	li       r24, 0

lbl_801C4114:
	lwz      r23, 0x388(r28)
	cmplwi   r23, 0
	beq      lbl_801C4308
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C4308
	mr       r3, r23
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 0
	bne      lbl_801C4308
	mr       r3, r23
	li       r22, -1
	lwz      r12, 0(r23)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C4194
	lwz      r0, 0x3d4(r23)
	cmpwi    r0, 1
	beq      lbl_801C4188
	bge      lbl_801C4194
	cmpwi    r0, 0
	bge      lbl_801C4190
	b        lbl_801C4194

lbl_801C4188:
	li       r22, 0
	b        lbl_801C4194

lbl_801C4190:
	li       r22, 1

lbl_801C4194:
	mr       r4, r23
	addi     r3, r1, 0x80
	lwz      r12, 0(r23)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	addi     r3, r1, 0x74
	lfs      f30, 0x80(r1)
	lwz      r12, 0(r4)
	lfs      f29, 0x88(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x7c(r1)
	lfs      f1, 0x74(r1)
	fsubs    f3, f29, f0
	lfs      f0, lbl_805194A8@sda21(r2)
	fsubs    f2, f30, f1
	fmuls    f1, f3, f3
	fmadds   f31, f2, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801C4200
	ble      lbl_801C4204
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801C4204

lbl_801C4200:
	fmr      f31, f0

lbl_801C4204:
	mr       r4, r25
	addi     r3, r1, 0x68
	lwz      r12, 0(r25)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x70(r1)
	lfs      f1, 0x68(r1)
	fsubs    f3, f29, f0
	lfs      f0, lbl_805194A8@sda21(r2)
	fsubs    f2, f30, f1
	fmuls    f1, f3, f3
	fmadds   f3, f2, f2, f1
	fcmpo    cr0, f3, f0
	ble      lbl_801C4250
	ble      lbl_801C4254
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_801C4254

lbl_801C4250:
	fmr      f3, f0

lbl_801C4254:
	fadds    f1, f31, f3
	lfs      f0, lbl_805194AC@sda21(r2)
	lfs      f2, lbl_80519574@sda21(r2)
	fdivs    f1, f3, f1
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       exp
	frsp     f0, f1
	lfs      f1, lbl_805194B8@sda21(r2)
	lwz      r0, 0xb8(r23)
	li       r3, 0
	fadds    f0, f1, f0
	cmplwi   r0, 0
	fdivs    f3, f1, f0
	beq      lbl_801C4294
	li       r3, 1

lbl_801C4294:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801C42E8
	cmpwi    r22, -1
	bne      lbl_801C42B8
	lfs      f0, lbl_805194B8@sda21(r2)
	stfs     f3, 0(r27)
	fsubs    f0, f0, f3
	stfs     f0, 0(r26)
	b        lbl_801C4314

lbl_801C42B8:
	cmpwi    r22, 0
	bne      lbl_801C42D0
	lfs      f0, lbl_805194A8@sda21(r2)
	stfs     f3, 0(r27)
	stfs     f0, 0(r26)
	b        lbl_801C4314

lbl_801C42D0:
	lfs      f0, lbl_805194B8@sda21(r2)
	lfs      f1, lbl_805194A8@sda21(r2)
	fsubs    f0, f0, f3
	stfs     f1, 0(r27)
	stfs     f0, 0(r26)
	b        lbl_801C4314

lbl_801C42E8:
	lfs      f0, lbl_805194B8@sda21(r2)
	lfs      f2, lbl_8051952C@sda21(r2)
	fsubs    f0, f0, f3
	fmuls    f1, f2, f3
	fmuls    f0, f2, f0
	stfs     f1, 0(r27)
	stfs     f0, 0(r26)
	b        lbl_801C4314

lbl_801C4308:
	lfs      f0, lbl_80519578@sda21(r2)
	stfs     f0, 0(r27)
	stfs     f0, 0(r26)

lbl_801C4314:
	addi     r24, r24, 1
	addi     r27, r27, 4
	cmpwi    r24, 7
	addi     r26, r26, 4
	addi     r28, r28, 4
	blt      lbl_801C4114
	lfs      f3, lbl_805194A8@sda21(r2)
	mr       r7, r29
	lfd      f4, lbl_805194C8@sda21(r2)
	addi     r8, r1, 0x10
	lfs      f2, lbl_8051957C@sda21(r2)
	li       r9, 0
	lfs      f1, lbl_80519580@sda21(r2)
	lis      r3, 0x4330

lbl_801C434C:
	lwz      r4, 0x3dc(r7)
	li       r0, 7
	stw      r3, 0x118(r1)
	mr       r5, r31
	xoris    r4, r4, 0x8000
	mr       r6, r30
	stw      r4, 0x11c(r1)
	lfd      f0, 0x118(r1)
	fsubs    f5, f0, f4
	mtctr    r0

lbl_801C4374:
	cmpwi    r9, 0
	bne      lbl_801C4390
	lfs      f0, 0(r5)
	fcmpo    cr0, f0, f3
	cror     2, 1, 2
	bne      lbl_801C4390
	fadds    f5, f5, f0

lbl_801C4390:
	cmpwi    r9, 1
	bne      lbl_801C43AC
	lfs      f0, 0(r6)
	fcmpo    cr0, f0, f3
	cror     2, 1, 2
	bne      lbl_801C43AC
	fadds    f5, f5, f0

lbl_801C43AC:
	addi     r5, r5, 4
	addi     r6, r6, 4
	bdnz     lbl_801C4374
	fcmpo    cr0, f5, f2
	cror     2, 1, 2
	bne      lbl_801C43C8
	fmr      f5, f2

lbl_801C43C8:
	fmuls    f5, f5, f1
	addi     r9, r9, 1
	cmpwi    r9, 2
	stfs     f5, 0(r8)
	lfs      f0, 0(r8)
	addi     r8, r8, 4
	stfs     f0, 0x370(r7)
	addi     r7, r7, 4
	blt      lbl_801C434C
	lwz      r3, lbl_80520E78@sda21(r2)
	mr       r25, r29
	lwz      r0, lbl_80520E7C@sda21(r2)
	addi     r26, r1, 0x18
	stw      r3, 8(r1)
	addi     r27, r1, 8
	li       r22, 0
	stw      r0, 0xc(r1)

lbl_801C440C:
	lwz      r4, 0x380(r25)
	lwz      r23, 0(r26)
	cmplwi   r4, 0
	beq      lbl_801C451C
	lwz      r12, 0(r4)
	addi     r3, r1, 0x5c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r23
	addi     r3, r1, 0x50
	lwz      r12, 0(r23)
	lfs      f29, 0x5c(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x64(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x58(r1)
	lfs      f1, 0x50(r1)
	fsubs    f3, f30, f0
	lfs      f0, lbl_805194A8@sda21(r2)
	fsubs    f2, f29, f1
	fmuls    f1, f3, f3
	fmadds   f31, f2, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801C4484
	ble      lbl_801C4488
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801C4488

lbl_801C4484:
	fmr      f31, f0

lbl_801C4488:
	subfic   r0, r22, 1
	addi     r4, r1, 0x18
	slwi     r0, r0, 2
	addi     r3, r1, 0x44
	lwzx     r4, r4, r0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x4c(r1)
	lfs      f1, 0x44(r1)
	fsubs    f3, f30, f0
	lfs      f0, lbl_805194A8@sda21(r2)
	fsubs    f2, f29, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801C44E0
	ble      lbl_801C44E4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801C44E4

lbl_801C44E0:
	fmr      f1, f0

lbl_801C44E4:
	fadds    f1, f31, f1
	lfs      f0, lbl_805194AC@sda21(r2)
	lfs      f2, lbl_80519574@sda21(r2)
	fdivs    f1, f31, f1
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       exp
	frsp     f0, f1
	lfs      f1, lbl_805194B8@sda21(r2)
	fadds    f0, f1, f0
	fdivs    f0, f1, f0
	stfs     f0, 0(r27)
	lfs      f0, 0(r27)
	stfs     f0, 0x378(r25)

lbl_801C451C:
	addi     r22, r22, 1
	addi     r26, r26, 4
	cmpwi    r22, 2
	addi     r27, r27, 4
	addi     r25, r25, 4
	blt      lbl_801C440C
	lfs      f3, 0x10(r1)
	addi     r28, r1, 0xec
	lfs      f0, 0x14(r1)
	addi     r30, r1, 0xc4
	lfs      f2, 8(r1)
	mr       r26, r28
	fsubs    f1, f3, f0
	lfs      f4, 0xc(r1)
	fsubs    f0, f0, f3
	mr       r27, r30
	li       r22, 0
	li       r25, 0
	fsubs    f1, f1, f2
	fsubs    f0, f0, f4
	fadds    f1, f4, f1
	fadds    f0, f2, f0
	stfs     f1, 0x358(r29)
	stfs     f0, 0x35c(r29)

lbl_801C457C:
	lwz      r3, 0x3d0(r29)
	lwzx     r23, r3, r25
	mr       r3, r23
	lwz      r12, 0(r23)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C476C
	mr       r3, r23
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 0
	bne      lbl_801C476C
	mr       r3, r23
	li       r24, -1
	lwz      r12, 0(r23)
	lwz      r12, 0x204(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801C45F8
	lwz      r0, 0x3d4(r23)
	cmpwi    r0, 1
	beq      lbl_801C45EC
	bge      lbl_801C45F8
	cmpwi    r0, 0
	bge      lbl_801C45F4
	b        lbl_801C45F8

lbl_801C45EC:
	li       r24, 0
	b        lbl_801C45F8

lbl_801C45F4:
	li       r24, 1

lbl_801C45F8:
	mr       r4, r23
	addi     r3, r1, 0x38
	lwz      r12, 0(r23)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	addi     r3, r1, 0x2c
	lfs      f29, 0x38(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x40(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x34(r1)
	lfs      f1, 0x2c(r1)
	fsubs    f3, f30, f0
	lfs      f0, lbl_805194A8@sda21(r2)
	fsubs    f2, f29, f1
	fmuls    f1, f3, f3
	fmadds   f31, f2, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801C4664
	ble      lbl_801C4668
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801C4668

lbl_801C4664:
	fmr      f31, f0

lbl_801C4668:
	lwz      r4, 0x1c(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x28(r1)
	lfs      f1, 0x20(r1)
	fsubs    f3, f30, f0
	lfs      f0, lbl_805194A8@sda21(r2)
	fsubs    f2, f29, f1
	fmuls    f1, f3, f3
	fmadds   f3, f2, f2, f1
	fcmpo    cr0, f3, f0
	ble      lbl_801C46B4
	ble      lbl_801C46B8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_801C46B8

lbl_801C46B4:
	fmr      f3, f0

lbl_801C46B8:
	fadds    f1, f31, f3
	lfs      f0, lbl_805194AC@sda21(r2)
	lfs      f2, lbl_80519574@sda21(r2)
	fdivs    f1, f3, f1
	fsubs    f0, f1, f0
	fmuls    f1, f2, f0
	bl       exp
	frsp     f0, f1
	lfs      f1, lbl_805194B8@sda21(r2)
	lwz      r0, 0xb8(r23)
	li       r3, 0
	fadds    f0, f1, f0
	cmplwi   r0, 0
	fdivs    f3, f1, f0
	beq      lbl_801C46F8
	li       r3, 1

lbl_801C46F8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801C474C
	cmpwi    r24, -1
	bne      lbl_801C471C
	lfs      f0, lbl_805194B8@sda21(r2)
	stfs     f3, 0(r26)
	fsubs    f0, f0, f3
	stfs     f0, 0(r27)
	b        lbl_801C4778

lbl_801C471C:
	cmpwi    r24, 0
	bne      lbl_801C4734
	lfs      f0, lbl_805194A8@sda21(r2)
	stfs     f3, 0(r26)
	stfs     f0, 0(r27)
	b        lbl_801C4778

lbl_801C4734:
	lfs      f0, lbl_805194B8@sda21(r2)
	lfs      f1, lbl_805194A8@sda21(r2)
	fsubs    f0, f0, f3
	stfs     f1, 0(r26)
	stfs     f0, 0(r27)
	b        lbl_801C4778

lbl_801C474C:
	lfs      f0, lbl_805194B8@sda21(r2)
	lfs      f2, lbl_8051952C@sda21(r2)
	fsubs    f0, f0, f3
	fmuls    f1, f2, f3
	fmuls    f0, f2, f0
	stfs     f1, 0(r26)
	stfs     f0, 0(r27)
	b        lbl_801C4778

lbl_801C476C:
	lfs      f0, lbl_80519578@sda21(r2)
	stfs     f0, 0(r26)
	stfs     f0, 0(r27)

lbl_801C4778:
	addi     r22, r22, 1
	addi     r26, r26, 4
	cmpwi    r22, 0xa
	addi     r27, r27, 4
	addi     r25, r25, 4
	blt      lbl_801C457C
	lfs      f1, lbl_805194A8@sda21(r2)
	mr       r5, r29
	li       r6, 0

lbl_801C479C:
	fmr      f3, f1
	li       r0, 5
	mr       r3, r28
	mr       r4, r30
	stfs     f1, 0x368(r5)
	li       r7, 0
	mtctr    r0

lbl_801C47B8:
	cmpwi    r6, 0
	lfs      f4, lbl_805194A8@sda21(r2)
	bne      lbl_801C47DC
	lfs      f0, 0(r3)
	fcmpo    cr0, f0, f4
	cror     2, 1, 2
	bne      lbl_801C47DC
	fadds    f3, f3, f0
	fmr      f4, f0

lbl_801C47DC:
	cmpwi    r6, 1
	bne      lbl_801C4800
	lfs      f2, 0(r4)
	lfs      f0, lbl_805194A8@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_801C4800
	fadds    f3, f3, f2
	fmr      f4, f2

lbl_801C4800:
	lfs      f0, 0x368(r5)
	fcmpo    cr0, f0, f4
	cror     2, 0, 2
	bne      lbl_801C4814
	stfs     f4, 0x368(r5)

lbl_801C4814:
	cmpwi    r6, 0
	lfs      f4, lbl_805194A8@sda21(r2)
	bne      lbl_801C4838
	lfs      f0, 4(r3)
	fcmpo    cr0, f0, f4
	cror     2, 1, 2
	bne      lbl_801C4838
	fadds    f3, f3, f0
	fmr      f4, f0

lbl_801C4838:
	cmpwi    r6, 1
	bne      lbl_801C485C
	lfs      f2, 4(r4)
	lfs      f0, lbl_805194A8@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_801C485C
	fadds    f3, f3, f2
	fmr      f4, f2

lbl_801C485C:
	lfs      f0, 0x368(r5)
	fcmpo    cr0, f0, f4
	cror     2, 0, 2
	bne      lbl_801C4870
	stfs     f4, 0x368(r5)

lbl_801C4870:
	addi     r3, r3, 8
	addi     r4, r4, 8
	addi     r7, r7, 1
	bdnz     lbl_801C47B8
	addi     r6, r6, 1
	stfs     f3, 0x360(r5)
	cmpwi    r6, 2
	addi     r5, r5, 4
	blt      lbl_801C479C
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	lmw      r22, 0x128(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C48C0
 * Size:	000018
 */
void VsGameSection::clearGetDopeCount(void)
{
	/*
	li       r0, 0
	stw      r0, 0x3b0(r3)
	stw      r0, 0x3ac(r3)
	stw      r0, 0x3a8(r3)
	stw      r0, 0x3a4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C48D8
 * Size:	0000D0
 */
void VsGameSection::getGetDopeCount(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	lis      r4, lbl_8047FF98@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_8047FF98@l
	blt      lbl_801C491C
	cmpwi    r29, 1
	bgt      lbl_801C491C
	li       r0, 1

lbl_801C491C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801C493C
	mr       r6, r29
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x188
	li       r4, 0xa07
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C493C:
	cmpwi    r30, 0
	li       r0, 0
	blt      lbl_801C4954
	cmpwi    r30, 1
	bgt      lbl_801C4954
	li       r0, 1

lbl_801C4954:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801C4974
	mr       r6, r30
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x198
	li       r4, 0xa08
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801C4974:
	slwi     r3, r29, 3
	slwi     r0, r30, 2
	add      r3, r3, r0
	addi     r3, r3, 0x3a4
	add      r3, r28, r3
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C49A8
 * Size:	000010
 */
void VsGameSection::clearGetCherryCount(void)
{
	/*
	li       r0, 0
	stw      r0, 0x3b8(r3)
	stw      r0, 0x3b4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
u32 VsGameSection::getGetCherryCount(int playerIndex)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C49B8
 * Size:	000008
 */
bool VsGameSection::challengeDisablePelplant(void) { return false; }

/*
 * --INFO--
 * Address:	801C49C0
 * Size:	000008
 */
bool VsGameSection::player2enabled(void) { return true; }

/*
 * --INFO--
 * Address:	801C49C8
 * Size:	000008
 */
char* VsGameSection::getCaveFilename(void)
{
	/*
	addi     r3, r3, 0x224
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C49D0
 * Size:	000008
 */
void VsGameSection::getEditorFilename(void)
{
	/*
	addi     r3, r3, 0x2a4
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C49D8
 * Size:	000008
 */
void VsGameSection::getVsEditNumber(void)
{
	/*
	lwz      r3, 0x328(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C49E0
 * Size:	000004
 */
void init__Q24Game36StateMachine<Game::VsGameSection> FPQ24Game13VsGameSection(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	801C49E4
 * Size:	000064
 */
void create__Q24Game36StateMachine<Game::VsGameSection> Fi(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xc(r3)
	stw      r0, 8(r3)
	lwz      r0, 0xc(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x10(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x14(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801C4A48
 * Size:	00009C
 */
void transit__Q24Game36StateMachine<Game::VsGameSection> FPQ24Game13VsGameSectioniPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x180(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x180(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C4AE4
 * Size:	000004
 */
void init__Q24Game32FSMState<Game::VsGameSection> FPQ24Game13VsGameSectionPQ24Game8StateArg(void) { }

/*
 * --INFO--
 * Address:	801C4AE8
 * Size:	000004
 */
void cleanup__Q24Game32FSMState<Game::VsGameSection> FPQ24Game13VsGameSection(void) { }

/*
 * --INFO--
 * Address:	801C4AEC
 * Size:	000084
 */
void registerState__Q24Game36StateMachine<Game::VsGameSection> FPQ24Game32FSMState<Game::VsGameSection>(void)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C4B70
 * Size:	000038
 */
void exec__Q24Game36StateMachine<Game::VsGameSection> FPQ24Game13VsGameSection(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x180(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801C4BA8
 * Size:	000004
 */
void exec__Q24Game32FSMState<Game::VsGameSection> FPQ24Game13VsGameSection(void) { }

/*
 * --INFO--
 * Address:	801C4BAC
 * Size:	000028
 */
void __sinit_vsGameSection_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B60E8@ha
	stw      r0, lbl_80515A88@sda21(r13)
	stfsu    f0, lbl_804B60E8@l(r3)
	stfs     f0, lbl_80515A8C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
