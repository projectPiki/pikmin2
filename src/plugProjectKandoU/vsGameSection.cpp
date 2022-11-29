#include "CarryInfo.h"
#include "Controller.h"
#include "Dolphin/dvd.h"
#include "Dolphin/gx.h"
#include "Dolphin/rand.h"
#include "Dolphin/stl.h"
#include "DvdThreadCommand.h"
#include "efx/TEnemyApsmoke.h"
#include "Game/BaseGameSection.h"
#include "Game/BaseHIO.h"
#include "Game/CameraMgr.h"
#include "Game/Cave/RandMapMgr.h
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Farm.h"
#include "Game/GameConfig.h"
#include "Game/gameGenerator.h"
#include "Game/gameGeneratorCache.h"
#include "Game/GameMessage.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "Game/gameStat.h"
#include "Game/GameSystem.h"
#include "Game/MapMgr.h"
#include "Game/mapParts.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/PikiMgr.h"
#include "Game/rumble.h"
#include "Game/shadowMgr.h"
#include "Game/SingleGame.h"
#include "Game/TimeMgr.h"
#include "Game/VsGame.h"
#include "Game/VsGameSection.h"
#include "Graphics.h"
#include "IDelegate.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JFW/JFWDisplay.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JUT/JUTGraphFifo.h
#include "JSystem/JUT/JUTXfb.h"
#include "LifeGaugeMgr.h"
#include "nans.h"
#include "og/newScreen/Floor.h
#include "og/Screen/ogScreen.h"
#include "PSGame/PikScene.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSSystemIF.h"
#include "Radar.h"
#include "Screen/Game2DMgr.h"
#include "stream.h"
#include "System.h"
#include "SysTimers.h"
#include "TParticle2dMgr.h"
#include "types.h"
#include "utilityU.h"
#include "VsOtakaraName.h"
#include "wipe.h"

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
namespace VsGame {

/*
 * --INFO--
 * Address:	801C0DF8
 * Size:	0000D0
 */
void FSM::init(VsGameSection* section) {
    StateMachine<VsGameSection>::create(VGS_StateCount);
    StateMachine<VsGameSection>::registerState(new TitleState);
    StateMachine<VsGameSection>::registerState(new LoadState);
    StateMachine<VsGameSection>::registerState(new GameState);
    StateMachine<VsGameSection>::registerState(new VSState);
    StateMachine<VsGameSection>::registerState(new ResultState);
}


/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void FSM::draw(VsGameSection*, Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C0EC8
 * Size:	000004
 */
void State::draw(VsGameSection*, Graphics&) { }

/*
 * --INFO--
 * Address:	801C0ECC
 * Size:	000020
 */
void FSM::transit(VsGameSection* section, int state, StateArg* arg) {
    StateMachine<VsGameSection>::transit(section, state, arg);
}
} // VsGame
/*
 * --INFO--
 * Address:	801C0EEC
 * Size:	0000FC
 */

VsGameSection::VsGameSection(JKRHeap* heap, bool gameMode) : BaseGameSection(heap), 
    m_menuFlags(0)
{
    m_isVersusMode          = gameMode;
    _205                    = 1;
    m_challengeStageNum     = 0;
    m_VsStageNum            = 0;
    m_vsWinner              = -1;
    m_player2Pikis          = 2;
    m_player1Pikis          = 2;
    m_cardCount             = 0;
    _3C0                    = 0; 
    m_yellowMarbleCounts[1] = 0; 
    m_yellowMarbleCounts[0] = 0;
    m_editNumber            = -2;
    m_vsFifo                = nullptr;
    
    if (gGameConfig.m_parms.m_vsFifo.m_data > 0) {
        unsigned long fifo_param = gGameConfig.m_parms.m_vsFifo.m_data << 10;
        m_vsFifo = new VSFifo(fifo_param);
        m_vsFifo->becomeCurrent();
        GXSetGPFifo(m_vsFifo->m_fifo);
    }
    
    
}


/*
 * --INFO--
 * Address:	801C0FE8
 * Size:	0000CC
 */
VsGameSection::~VsGameSection() {
    if (m_vsFifo) {
        GXSaveCPUFifo(m_vsFifo->m_fifo);
        while (VSFifo::isGPActive());
        GXDrawDone();
        GXInitFifoPtrs(
            JUTGraphFifo::sCurrentFifo->m_fifo, 
            JUTGraphFifo::sCurrentFifo->_08,
            JUTGraphFifo::sCurrentFifo->_08);
        GXSetCPUFifo(JUTGraphFifo::sCurrentFifo->m_fifo);
        GXSetGPFifo(JUTGraphFifo::sCurrentFifo->m_fifo);
    }
        
}

} // namespace Game

/*
 * --INFO--
 * Address:	801C10B4
 * Size:	00005C
 */
bool VSFifo::isGPActive() {
    GXGetGPStatus(&mGpStatus[0], &mGpStatus[1], &mGpStatus[2], &mGpStatus[3], &mGpStatus[4]);
    return !mGpStatus[2];
}


namespace Game {

/*
 * --INFO--
 * Address:	801C1110
 * Size:	000034
 */
void VsGameSection::section_fadeout() {
    m_state->on_section_fadeout(this);
}

/*
 * --INFO--
 * Address:	801C1144
 * Size:	000004
 */
void VsGame::State::on_section_fadeout(VsGameSection*) { }

/*
 * --INFO--
 * Address:	801C1148
 * Size:	000090
 */
void VsGameSection::startMainBgm() {
    PSSystem::SceneMgr* sceneMgr = getSceneMgr();
    sceneMgr->checkScene();
    sceneMgr->m_scenes->m_child->startMainSeq();
}

/*
 * --INFO--
 * Address:	801C11D8
 * Size:	00020C
 */
void VsGameSection::onInit(void) {
    m_pikminRatio      = 0.0f;
    m_pikminCountTimer = 0.5f;
    _1F4               = 0.0f;
    _1F0               = 0.0f;
    clearGetDopeCount();
    clearGetCherryCount();
    if (m_isVersusMode) {
        gameSystem->m_mode = GSM_VERSUS_MODE;
    }
    else {
        gameSystem->m_mode = GSM_ONE_PLAYER_CHALLENGE;
    }
    gameSystem->m_inCave = true;
    _11C = 0;
    m_hole = nullptr;
    m_pokoCount = 0;
    m_menuRunning = false;
    sprintf(m_caveInfoFilename, "caveinfo.txt");
    sprintf(m_editFilename, "random");
    setupFixMemory();
    m_challengeStageList = new ChallengeGame::StageList();
    addGenNode(m_challengeStageList);
    m_VsStageList = new VsGame::StageList();
    addGenNode(m_VsStageList);
    loadChallengeStageList();
    loadVsStageList();
    m_FSM = new VsGame::FSM();
    m_FSM->init(this);
    initPlayData();
    m_FSM->start(this, VsGame::VGS_Title, nullptr);
    m_currentFloor = 0;
	m_redBlueYellowScore[1] = 0.0f;
	m_redBlueYellowScore[0] = 0.0f;
    m_yellowScore[1] = 0.0f;
    m_yellowScore[0] = 0.0f;
    m_cherryScore[1] = 0.0f;
    m_cherryScore[0] = 0.0f;
    m_maxCherryScore[1] = 0.0f;
    m_maxCherryScore[0] = 0.0f;
    m_redBlueScore[0] = 0.0f;
    m_redBlueScore[1] = 0.0f;
    m_marbleRedBlue[1] = nullptr;
    m_marbleRedBlue[0] = nullptr;
    Radar::mgr = new Radar::Mgr();
    
    for (int i = 0; i < 7; i++) {
        m_marbleYellow[i] = nullptr;
    }
}


/*
 * --INFO--
 * Address:	801C13E4
 * Size:	000034
 */
void StateMachine<VsGameSection>::start(VsGameSection* section, int limit, StateArg* arg) {
    section->m_state = nullptr;
    transit(section, limit, arg);
}

/*
 * --INFO--
 * Address:	801C1418
 * Size:	000008
 */
int VsGameSection::getCurrFloor(void) {
    return m_currentFloor;
}


/*
 * --INFO--
 * Address:	801C1420
 * Size:	0001B8
 */
inline float log(float& a, double b) {
    float divisor = log10(b);
    float dividend = log10(a);
    return dividend / divisor;
}

bool VsGameSection::doUpdate() {
    if (m_menuRunning) {
        _34 = 0;
        return false;
    }
    m_FSM->exec(this);
    if (gameSystem->m_mode == GSM_VERSUS_MODE) {
        int redPikmins = GameStat::getMapPikmins(1) - (m_player1Pikis - 3);
        int bluePikmins = GameStat::getMapPikmins(0) - (m_player2Pikis - 3);
        if (redPikmins < 0) {
            redPikmins = 1;
        }
        if (bluePikmins < 0) {
            bluePikmins = 1;
        }
        if (!redPikmins || !bluePikmins) {
            if (!redPikmins) {
                m_pikminCountTimer = 1.0f;
            }
            else if (!bluePikmins) {
                m_pikminCountTimer = 0.0f;
            }
        }
        else {
            if (bluePikmins > redPikmins) {
                m_pikminRatio = (float)bluePikmins / (float)redPikmins;
            }
            else {
                m_pikminRatio = (float)redPikmins / (float)bluePikmins;
            }
            m_pikminCountTimer = log(_350, 50.0); // log50(_50)
            if (redPikmins < bluePikmins) {
                m_pikminCountTimer = -m_pikminCountTimer;
            }
        }

    }
    return _34;
}


/*
 * --INFO--
 * Address:	801C15D8
 * Size:	00003C
 */
void VsGameSection::pre2dDraw(Graphics& gfx) {
    if (m_state) {
        m_state->pre2dDraw(gfx, this);
    }
}

/*
 * --INFO--
 * Address:	801C1614
 * Size:	000004
 */
void VsGame::State::pre2dDraw(Graphics&, VsGameSection*) { }

/*
 * --INFO--
 * Address:	801C1618
 * Size:	000050
 */
void VsGameSection::doDraw(Graphics& gfx) {
    if (!m_menuRunning && m_state) {
        m_state->draw(this, gfx);
    }
}


/*
 * --INFO--
 * Address:	801C1668
 * Size:	0001DC
 */
void VsGameSection::onSetSoundScene() {
    PSGame::CaveFloorInfo floorInfo;
    
    if (gameSystem->isChallengeMode()) {
        floorInfo.m_gameType = PSGame::SceneInfo::CHALLENGE_MODE;
        floorInfo._40 = getCurrFloor();
        floorInfo._49 = m_challengeStageNum;
    } else {
        floorInfo.m_gameType = PSGame::SceneInfo::TWO_PLAYER_BATTLE;
        floorInfo._40 = m_VsStageNum;
    }
    
    floorInfo.m_alphaType = mapMgr->m_floorInfo->m_parms.m_floorAlphaType.m_value;
    floorInfo.m_betaType = 0;
    
    if (!gameSystem->isMultiplayerMode()) {
        floorInfo.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk0, PSGame::SceneInfo::SFBS_1);
    } else {
        floorInfo.setStageFlag(PSGame::SceneInfo::SCENEFLAG_Unk1, PSGame::SceneInfo::SFBS_1);
    }
    
    setDefaultPSSceneInfo(floorInfo);
    PSSystem::SceneMgr* sceneMgr = getSceneMgr();
    static_cast<PSGame::PikSceneMgr*>(sceneMgr)->newAndSetCurrentScene(&floorInfo);
    sceneMgr = getSceneMgr();
    sceneMgr->checkScene();
    sceneMgr->m_scenes->m_child->scene1stLoadSync();
    naviMgr->createPSMDirectorUpdator();
}

/*
 * --INFO--
 * Address:	801C1844
 * Size:	00005C
 */
void VsGameSection::initPlayData() {
    playData->reset();
    playData->setDevelopSetting(true, true);
    playData->m_naviLifeMax[0] = naviMgr->m_naviParms->m_naviParms.m_p050.m_value;
    playData->m_naviLifeMax[1] = naviMgr->m_naviParms->m_naviParms.m_p050.m_value;
}

/*
 * --INFO--
 * Address:	801C18A0
 * Size:	000168
 */


void VsGameSection::onSetupFloatMemory() {
    Farm::farmMgr = nullptr;
    m_tekiMgr = new VsGame::TekiMgr();
    m_cardMgr = new VsGame::CardMgr(this, m_tekiMgr);
    m_cardMgr->loadResource();
    const char* marbles[3] = {VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue, VsOtakaraName::cBedamaYellow};

    for (int i = 0; i < 3; i++) {
        
        PelletInitArg initArg;
        PelletList::cKind cKind;

        PelletConfig* pelletConfig = PelletList::Mgr::getConfigAndKind(const_cast<char*>(marbles[i]), cKind);

        JUT_ASSERTLINE(904, pelletConfig, "zannenn\n");

        
        initArg._10 = pelletConfig->m_params.m_index;
        initArg.m_textIdentifier = pelletConfig->m_params.m_name.m_data;
        initArg.m_pelletType = cKind;
        pelletMgr->setUse(&initArg);
        
    }
}


/*
 * --INFO--
 * Address:	801C1A08
 * Size:	0000A0
 */
void VsGameSection::postSetupFloatMemory() {
    if (gameSystem->m_mode == GSM_VERSUS_MODE) {
        m_redBlueYellowScore[1] = 0.0f;
        m_redBlueYellowScore[0] = 0.0f;
        m_marbleRedBlue[1] = nullptr;
        m_marbleRedBlue[0] = nullptr;
        Vector3f Vector = Vector3f(0.0f);
        createRedBlueBedamas(Vector);
        for (int i = 0; i < 7; i++) {
            m_marbleYellow[i] = nullptr;
        }
        createYellowBedamas(7);
        initCardPellets();
    }
    BaseGameSection::postSetupFloatMemory();
}


/*
 * --INFO--
 * Address:	801C1AA8
 * Size:	000020
 */
void VsGameSection::onClearHeap() {
    if (gameSystem->m_mode == GSM_VERSUS_MODE) {
        m_cherryArray = nullptr;
        m_maxCherries = 0;
    }
}


/*
 * --INFO--
 * Address:	801C1AC8
 * Size:	0000B0
 */
void VsGameSection::loadChallengeStageList() {
    JKRDvdRipper::EAllocDirection EAlloc = JKRDvdRipper::EAllocDirection(2);
    JKRExpandSwitch expandSwitch = JKRExpandSwitch();
    void* loadRam = JKRDvdRipper::loadToMainRAM(
    ((gGameConfig.m_parms.m_KFesVersion.m_data) ? "/user/Matoba/challenge/kfes-stages.txt" : "/user/Matoba/challenge/stages.txt"), 
    nullptr, expandSwitch, nullptr, nullptr, EAlloc, nullptr, nullptr, nullptr);
    if (!loadRam) {
        return;
    }
    RamStream ram (loadRam, -1);
    ram.resetPosition(1, 1);
    m_challengeStageList->read(ram);
    
}


/*
 * --INFO--
 * Address:	801C1B78
 * Size:	000098
 */
void VsGameSection::loadVsStageList() {
    JKRDvdRipper::EAllocDirection EAlloc = JKRDvdRipper::EAllocDirection(2);
    JKRExpandSwitch expandSwitch = JKRExpandSwitch();
    void* loadRam = JKRDvdRipper::loadToMainRAM(
    "/user/abe/vs/stages.txt", nullptr, expandSwitch, nullptr, nullptr, EAlloc, nullptr, nullptr, nullptr);
    if (!loadRam) {
        return;
    }
    RamStream ram (loadRam, -1);
    ram.resetPosition(1, 1);
    m_VsStageList->read(ram);
}


/*
 * --INFO--
 * Address:	801C1C10
 * Size:	000044
 */
void VsGameSection::gmOrimaDown(int arg) {
    if (m_state) {
        m_state->onOrimaDown(this, arg);
    }
}


/*
 * --INFO--
 * Address:	801C1C54
 * Size:	000004
 */
void VsGame::State::onOrimaDown(VsGameSection*, int) { }

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
void VsGameSection::goNextFloor(ItemHole::Item* hole) {
    m_state->onNextFloor(this, hole);
}

/*
 * --INFO--
 * Address:	801C1C98
 * Size:	000004
 */
void VsGame::State::onNextFloor(VsGameSection*, ItemHole::Item*) { }

/*
 * --INFO--
 * Address:	801C1C9C
 * Size:	0001D8
 */
void VsGameSection::openCaveMoreMenu(ItemHole::Item* hole, Controller* controller) {
    if (m_state->goingToCave(this)) {
        return;
    }
    if (gameSystem->isMultiplayerMode() && controller) {
        Screen::gGame2DMgr->setGamePad(controller);
    }
    else {
        Screen::gGame2DMgr->setGamePad(_10C);
    }
    og::Screen::DispMemberCaveMore cave;
    // cave.m_subMember = nullptr;
    // cave._1F = 1;
    // cave._1C = 0;
    // cave._1D = 0;
    // cave._24 = 0;
    // cave._25 = 0;
    // cave._20 = 0;
    // cave.m_caveOtakaraNum = 4;
    // cave.m_caveOtakaraMax = 4;
    // cave._10 = 10;
    // cave.m_caveID = '2p_c';
    int mePikis = GameStat::mePikis;
    if (mePikis > 0) {
        cave._24 = 1;
        int map_pikis = GameStat::getMapPikmins(-1);
        if (mePikis == map_pikis) {
            cave._25 = 1;
        }
        else {
            cave._25 = 0;
        }
    }
    else {
        cave._25 = 0;
        cave._24 = 0;
        
    }
    bool open = Screen::gGame2DMgr->open_CaveMoreMenu(cave);
    if (open) {
        m_hole = hole;
        gameSystem->setPause(true, "op-c-more", 3);
        gameSystem->setMoviePause(true, "op-c-more");
    }
    
}


/*
 * --INFO--
 * Address:	801C1E74
 * Size:	000008
 */
bool VsGame::State::goingToCave(VsGameSection*) { return false; }

/*
 * --INFO--
 * Address:	801C1E7C
 * Size:	0001B0
 */
void VsGameSection::openKanketuMenu(ItemBigFountain::Item* fountain, Controller* controller) {
if (gameSystem->isMultiplayerMode() && controller) {
        Screen::gGame2DMgr->setGamePad(controller);
    }
    else {
        Screen::gGame2DMgr->setGamePad(_10C);
    }
    og::Screen::DispMemberKanketuMenu cave;
    // cave.m_subMember = nullptr;
    // cave._1F = 1;
    // cave._14 = 0;
    // cave.m_caveID = '2p_c';
    // cave._1C = 0;
    // cave._1D = 0;
    // cave._24 = 0;
    // cave._25 = 0;
    // cave._20 = 0;
    // cave.m_caveOtakaraNum = 4;
    // cave.m_caveOtakaraMax = 4;
    // cave._10 = 10;
    
    int mePikis = GameStat::mePikis;
    if (mePikis > 0) {
        cave._24 = 1;
        int map_pikis = GameStat::getMapPikmins(-1);
        if (mePikis == map_pikis) {
            cave._25 = 1;
        }
        else {
            cave._25 = 0;
        }
    }
    else {
        cave._25 = 0;
        cave._24 = 0;
        
    }
    bool open = Screen::gGame2DMgr->open_ChallengeKanketuMenu(cave);
    if (open) {
        m_fountain = fountain;
        m_menuFlags |= 4;
        gameSystem->setPause(true, "op-kk", 3);
        gameSystem->setMoviePause(true, "op-kk");
    }
    

}


/*
 * --INFO--
 * Address:	801C202C
 * Size:	000014
 */
void VsGameSection::clearCaveMenus() {
    m_menuFlags = 0;
    m_hole = nullptr;
    m_fountain = nullptr;
}


/*
 * --INFO--
 * Address:	801C2040
 * Size:	0002A8
 */
bool VsGameSection::updateCaveMenus() {
    if (m_menuFlags & 2) {
        switch (Screen::gGame2DMgr->check_CaveMoreMenu()) {
            case 0:
                break;
            case 1:
                playData->m_naviLifeMax[0] = naviMgr->getAt(0)->m_currentLife;
                playData->m_naviLifeMax[1] = naviMgr->getAt(1)->m_currentLife;
                gameSystem->setPause(false, "more-yes", 3);
                gameSystem->setMoviePause(false, "more-yes");
                m_menuFlags &= ~2;
                goNextFloor(m_hole);
                return true;
            case 2:
                gameSystem->setPause(false, "more-no", 3);
                gameSystem->setMoviePause(false, "more-no");
                m_menuFlags &= ~2;
                break;
            case 3:
                gameSystem->setMoviePause(false, "more-zenkai");
                break;
        }
    }
    else if (m_menuFlags & 4) {
        switch (Screen::gGame2DMgr->check_KanketuMenu()) {
            case 0:
                break;
            case 1:
                gameSystem->setPause(false, "kk-no", 3);
                gameSystem->setMoviePause(false, "kk-no");
                m_menuFlags &= ~4;
                MoviePlayArg arg ("s0C_cv_escape", nullptr, _C8, 0);
                arg.m_origin = m_fountain->getPosition();
                arg.m_angle = m_fountain->getFaceDir();
                arg._10 = _CC;
                m_fountain->movie_begin(false);
                moviePlayer->m_targetObject = m_fountain;
                moviePlayer->play(arg);
                return true;
            case 2:
                gameSystem->setPause(false, "kk-yes", 3);
                gameSystem->setMoviePause(false, "kk-yes");
                m_menuFlags &= ~4;
                break;
            case 3:
                break;
        }
    }
    return false;
}


/*
 * --INFO--
 * Address:	801C22E8
 * Size:	000008
 */
f32 ItemBigFountain::Item::getFaceDir() {
    return _1EC; // Face Dir
}


/*
 * --INFO--
 * Address:	801C22F0
 * Size:	0000DC
 */
void VsGameSection::onMovieStart(MovieConfig* movie, u32 param_2, u32 playerMode) {
    movie->is("s03_orimadown");
    if (gameSystem->isMultiplayerMode()) {
        if (playerMode == 1) {
            BaseGameSection::setPlayerMode(1);
        }
        else {
            BaseGameSection::setPlayerMode(0);
        }
    }
    BaseGameSection::setCamController();
    if (m_state) {
        m_state->onMovieStart(this, movie, param_2, playerMode);
    }
}


/*
 * --INFO--
 * Address:	801C23CC
 * Size:	000004
 */
void VsGame::State::onMovieStart(VsGameSection*, MovieConfig*, u32, u32) { }

/*
 * --INFO--
 * Address:	801C23D0
 * Size:	000054
 */
void VsGameSection::onMovieDone(MovieConfig* movie, u32 param_2, u32 param_3) {
    if (m_state) {
        m_state->onMovieDone(this, movie, param_2, param_3);
    }
}


/*
 * --INFO--
 * Address:	801C2424
 * Size:	000004
 */
void VsGame::State::onMovieDone(VsGameSection*, MovieConfig*, u32, u32) { }

/*
 * --INFO--
 * Address:	801C2428
 * Size:	000434
 */
void VsGameSection::createFallPikmins(PikiContainer& setPikmin, int param_2) { 
    Vector3f start;
    mapMgr->getStartPosition(start, param_2);
    setPikmin.dump("createFallPikmins");
    Navi* orima = naviMgr->getAt(0);
    start = orima->getPosition();
    start.y = mapMgr->getMinY(start);
    for (int color = Blue; color < PikiColorCount; color++) {
        for (int happa = Leaf; happa < PikiGrowthStageCount; happa++) {
            for (int i = 0; i < setPikmin.getCount(color, happa); i++) {
                // Gets Random in cylindrical geometry for some reason
                float radius = (randFloat() * 120.0f + 770.0f);
                float angle = randFloat() * TAU;
                float height = (randFloat() * 30.0f + 15.0f) + 850.0f;
                
                
                
                Vector3f spawn = Vector3f(
                    radius * pikmin2_sinf(angle), 
                    height, 
                    radius * pikmin2_cosf(angle)
                );

                
                
                Piki* piki = pikiMgr->birth();
                spawn += start;
                if (piki) {
                    PikiInitArg arg;
                    piki->init(&arg);
                    piki->m_faceDir = randFloat() * TAU;
                    piki->setPosition(spawn, false);
                    piki->changeShape(color);
                    piki->changeHappa(happa);
                    Vector3f velocity = Vector3f(
                    0.0f, 
                    -(randFloat() * 150.0f + 2700.0f), 
                    0.0f);
                    piki->setVelocity(velocity);
                    piki->movie_begin(false);
                }
            }
        }
    }
    setPikmin.clear();
}


/*
 * --INFO--
 * Address:	801C285C
 * Size:	000564
 */
void VsGameSection::createVsPikmins() {
    Onyon* redOnyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
    P2ASSERTLINE(0x545, redOnyon);
    Vector3f redOnyonPos = redOnyon->getPosition();
    
    Onyon* blueOnyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_BLUE);
    P2ASSERTLINE(0x54a, blueOnyon);
    Vector3f blueOnyonPos = blueOnyon->getPosition();
    PikiContainer* pikmin = &m_container1;
    pikmin->clear();
    
    int* reds = &pikmin->getCount(Red, Leaf);
    *reds = m_player1Pikis * 5;
    int* blues = &pikmin->getCount(Blue, Leaf);
    *blues = m_player2Pikis * 5;
    Vector3f spawnOnyonPos;
    
    for (int color = Blue; color < PikiColorCount; color++) {
        if (color == Red) {
            spawnOnyonPos = redOnyonPos;
        }
        else if (color == Blue) {
            spawnOnyonPos = blueOnyonPos;
        }
        else {
            continue;
        }
        for (int happa = Leaf; happa < PikiGrowthStageCount; happa++) {
            for (int i = 0; i < pikmin->getCount(color, happa); i++) {
                float radius = randFloat() * 10.0f;
                float angle = randFloat() * TAU;
                float height = 0.0f;
                
                
                
                Vector3f spawn = Vector3f(
                    radius * pikmin2_sinf(angle), 
                    height, 
                    radius * pikmin2_cosf(angle)
                );
    
                Piki* piki = pikiMgr->birth();
                spawn += spawnOnyonPos;
                
                if (piki) {
                    PikiInitArg arg;
                    piki->init(&arg);
                    piki->setPosition(spawn, false);
                    piki->changeShape(color);
                    piki->changeHappa(happa);
                }
            }
        }
    }
    const char* marbles[2] = {VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue};
    for (int onyonType = 0; onyonType < 2; onyonType++) {
        Onyon* currentOnyon = ItemOnyon::mgr->getOnyon(1 - onyonType);
        PelletIterator pelletIter;
        pelletIter.first();
        while (!pelletIter.isDone()) {
            Pellet* pellet = *pelletIter;
            int i = strcmp(marbles[onyonType], pellet->m_config->m_params.m_name.m_data);
            if (i == 0) {
                Vector3f flagPos = currentOnyon->getFlagSetPos();
                flagPos.y += pellet->getCylinderHeight() * 0.5f;
                pellet->setPosition(flagPos, false);
            }
            pelletIter.next();
        }
    }
    Navi* orima = naviMgr->getAt(0);
    orima->m_sprayCounts[0] = m_VsStageData->m_startNumSpicy;
    orima->m_sprayCounts[1] = m_VsStageData->m_startNumBitter;
    Navi* luji = naviMgr->getAt(1);
    luji->m_sprayCounts[0] = m_VsStageData->m_startNumSpicy;
    luji->m_sprayCounts[1] = m_VsStageData->m_startNumBitter;
    
}


/*
 * --INFO--
 * Address:	801C2DC0
 * Size:	000010
 */
void VsGameSection::addChallengeScore(int score) {
    m_pokoCount += score;
}


/*
 * --INFO--
 * Address:	801C2DD0
 * Size:	00006C
 */
void VsGameSection::sendMessage(GameMessage& message) {
    if (message.actCommon(this)) {
        message.actVs(this);
    }
}


/*
 * --INFO--
 * Address:	801C2E3C
 * Size:	000040
 */
bool GameMessageVsGetDoping::actVs(VsGameSection* section) {
    u32* dope = section->getGetDopeCount(_04, _08);
    *dope += 1;
    return true;
}


/*
 * --INFO--
 * Address:	801C2E7C
 * Size:	00004C
 */
bool GameMessageVsBattleFinished::actVs(VsGameSection* section) {
    if (section->m_state) {
        section->m_state->onBattleFinished(section, _04, 0);
    }
    return true;
}


/*
 * --INFO--
 * Address:	801C2EC8
 * Size:	000004
 */
void VsGame::State::onBattleFinished(VsGameSection*, int, bool) { }

/*
 * --INFO--
 * Address:	801C2ECC
 * Size:	00004C
 */
bool GameMessageVsRedOrSuckStart::actVs(VsGameSection* section) {
    if (section->m_state) {
        section->m_state->onRedOrBlueSuckStart(section, _04, _08);
    }
    return true;
}


/*
 * --INFO--
 * Address:	801C2F18
 * Size:	000004
 */
void VsGame::State::onRedOrBlueSuckStart(VsGameSection*, int, bool) { }

/*
 * --INFO--
 * Address:	801C2F1C
 * Size:	0000B8
 */
bool GameMessageVsGetOtakara::actVs(VsGameSection* section) {
    if (section->m_state) {
        section->m_yellowMarbleCounts[_04 - 2]++;
        PSSetLastBeedamaDirection(_04 == 0, section->m_yellowMarbleCounts[_04 - 2] == 3);
        if (section->m_yellowMarbleCounts[_04 - 2] >= 4) {
            section->m_state->onBattleFinished(section, _04, true);
        }
        
    }
    
    return true;
}


/*
 * --INFO--
 * Address:	801C2FD4
 * Size:	000034
 */
bool GameMessageVsAddEnemy::actVs(VsGameSection* section) {
    section->m_tekiMgr->entry(_04, _08);
    return true;
}


/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void GameMessageVsBirthTeki::actVs(VsGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801C3008
 * Size:	000118
 */
bool GameMessagePelletBorn::actVs(VsGameSection* section) {
    if (m_pellet->_32C == 6) { // is yellow bedama
        for (int i = 0; i < 7; i++) {
            if (section->m_marbleYellow[i] == m_pellet) {
                return false;
            }
        }
        for (int i = 0; i < 7; i++) {
            if (!section->m_marbleYellow[i]) {
                section->m_marbleYellow[i] = m_pellet;
                return true;
            }
        }
        JUT_PANICLINE(0x638, "no space for new yellow\n");
    }
    return false;
}

/*
 * --INFO--
 * Address:	801C3120
 * Size:	00008C
 */
bool GameMessagePelletDead::actVs(VsGameSection* section) {
    if (m_pellet->_32C == 6) { // is yellow bedama
        for (int i = 0; i < 7; i++) {
            if (section->m_marbleYellow[i] == m_pellet) {
                section->m_marbleYellow[i] = nullptr;
                return true;
            }
        }
        JUT_PANICLINE(0x651, "no entry for pellet\n");
    }
    
    
    return false;
}

/*
 * --INFO--
 * Address:	801C31AC
 * Size:	000228
 */
bool GameMessageVsBirthTekiTreasure::actVs(VsGameSection* section) {
    // This function spawns the shearwigs (suprise maggots)
    Sys::Sphere sphere (m_position, 20.0f);
    int target = 0;
    int redPikis = 0;
    int bluePikis = 0;
    CellIteratorArg arg = sphere;
    CellIterator cellIter = arg;

    CI_LOOP(cellIter){
        CellObject* cell = *cellIter;
        if (cell->isPiki()) {
            Piki* piki = (Piki*) cell;
            if (piki->isAlive()) {
                if ((s32)piki->m_pikiKind == Red) {
                    redPikis++;
                }
                else if ((s32)piki->m_pikiKind == Blue) {
                    bluePikis++;
                }
            }
        }
    }

    if (bluePikis > redPikis) {
        target = 1;
    }
    
    float tobiFactor = section->m_yellowScore[target] - section->m_yellowScore[1 - target];

    float tobiChance = 0.2f;
    
    if (tobiFactor > 0.8f) {
        _10 += 2;
        tobiChance = 0.8f;
    }
    else if (tobiFactor > 0.5f) {
        _10 += 1;
        tobiChance = 0.5f;
    }
    else if (tobiFactor > 0.1f) {
        tobiChance = 0.2f;
    }
    else if (tobiFactor > -0.1f) {

    }
    else if (tobiFactor > -0.5f) {
        tobiChance = 0.1f;
    }
    else if (tobiFactor > -0.8f) {
        tobiChance = 0.05;
    }
    else {
        tobiChance = 0.01;
    }
    if (!(randFloat() > tobiChance)) {
        int nodes = section->m_tekiMgr->m_nodeCount - 1;
        for (int i = 0; i < _10; i++) {
            section->m_tekiMgr->birth(nodes, m_position, _14);
        }
        return true;
    }
}


/*
 * --INFO--
 * Address:	801C33D4
 * Size:	00001C
 */
bool GameMessageVsPikminDead::actVs(VsGameSection* section) {
    section->_205 = false;
    section->_208 += 1;
    return true;
}


/*
 * --INFO--
 * Address:	801C33F0
 * Size:	00007C
 */
bool GameMessageVsGotCard::actVs(VsGameSection* section) {
    VsGame::CardMgr::SlotMachine* slot = &section->m_cardMgr->m_slotMachines[_04];
    if (!slot->_18 && slot->_58 != 0xffff) {
        section->useCard();
    }
    section->m_cardMgr->gotPlayerCard(_04);
    return true;
}


/*
 * --INFO--
 * Address:	801C346C
 * Size:	0000A8
 */
bool GameMessageVsUseCard::actVs(VsGameSection* section) {
    if (section->m_state) {
        if (!section->m_state->isCardUsable(section)) {
            return false;
        }
    }
    if (gGameConfig.m_parms.m_vsY.m_data == 0) {
        if (section->m_cardMgr->usePlayerCard(_04, section->m_tekiMgr)) {
            section->useCard();
        }
    }
    else {
        section->m_cardMgr->stopSlot(_04);
    }
    return true;
}


/*
 * --INFO--
 * Address:	801C3514
 * Size:	000008
 */
bool VsGame::State::isCardUsable(VsGameSection*) { return false; }

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
void FixedSizePelletMgr<PelletOtakara::Object>::setComeAlive(int index) {
    m_monoObjectMgr.m_openIds[index] = false;
}


/*
 * --INFO--
 * Address:	801C352C
 * Size:	000190
 */
void VsGameSection::initCardPellets() {
    m_maxCherries = 10;
    m_cherryArray = new Pellet*[m_maxCherries];

        
    char* name = const_cast<char*>(VsOtakaraName::cCoin);
    PelletList::cKind kind; 
    PelletInitArg arg;

    PelletConfig* config =
    PelletList::Mgr::getConfigAndKind(name, kind); 
    JUT_ASSERTLINE(0x704, config, "zannenn\n");
    arg._10 = config->m_params.m_index;
    arg.m_textIdentifier = config->m_params.m_name.m_data;
    arg.m_pelletType  = kind;
    arg.m_minCarriers = 1;
    arg.m_maxCarriers = 1;
    
    for (int j = 0; j < m_maxCherries; j++) {
        Pellet* pellet = pelletMgr->birth(&arg);
        if (pellet) {
            Vector3f position = Vector3f(0.0f);
            m_cherryArray[j] = pellet;
            pellet->setPosition(position, false);
            m_cherryArray[j] = pellet;
        } else {
            JUT_PANICLINE(1813, "birth failed !\n");
        }
    }
    
    for (int i = 0; i < m_maxCherries; i++) {
        m_cherryArray[i]->kill(nullptr);
    }
}

/*
 * --INFO--
 * Address:	801C36BC
 * Size:	000014
 */
void VsGameSection::initCardGeneration() {
    m_cardCount = 0;
    m_spawnTimer = 0.0f;
}


/*
 * --INFO--
 * Address:	801C36D0
 * Size:	0002D8
 */
void VsGameSection::updateCardGeneration() {
    bool isHigh = false;
    int maxSpawnCherries = 5;
    float spawnFactor = (m_redBlueScore[0] - m_redBlueScore[1]) - (m_yellowScore[0] - m_yellowScore[1]);
    float factor1 = 0.4f;
    float factor2 = 0.6f;
    if (FABS(spawnFactor) < 0.2f) {
        
    }
    else if (0.2f <= FABS(spawnFactor) < 0.4f) {
        maxSpawnCherries = 5;
        isHigh = true;
        factor1 = 0.3f;
        factor2 = 0.5f;
    } else if (0.4f <= FABS(spawnFactor) < 0.8f) {
        maxSpawnCherries = 6;
        isHigh = true;
        factor1 = 0.2f;
        factor2 = 0.4f;
    } else if (0.8f <= FABS(spawnFactor)) {
        maxSpawnCherries = 7;
        isHigh = true;
        factor1 = 0.2f;
        factor2 = 0.4f;
    }
        
    if (spawnFactor < 0.0f) {
        float temp = factor1;
        factor1 = 1.0f - factor2;
        factor2 = 1.0f - temp;
    }
    
    if (!isHigh) {
        float absLowFactor;
        float lowFactor = m_cherryScore[1] - m_cherryScore[0];
        lowFactor /= 2.0f;
        absLowFactor = FABS(lowFactor);
        if (absLowFactor <= 0.1f) {
        
        }
        else {
            if (absLowFactor < 0.2f) {
                factor1 = 0.4f;
                factor2 = 0.55f;
            }
            else if (absLowFactor < 0.5f) {
                factor1 = 0.4f;
                factor2 = 0.5f;
            }
            else if (absLowFactor < 1.0f) {
                factor1 = 0.3f;
                factor2 = 0.5f;
                if (absLowFactor > 0.9f) {
                    maxSpawnCherries = 5;
                }
                
            }
            if (lowFactor < 0.0f) {
                float temp = factor1;
                factor1 = 1.0f - factor2;
                factor2 = 1.0f - temp;
            }
        }
    }
    
    m_cardCount = 0;
    for (int i = 0; i < (int)m_maxCherries; i++) {
        if (m_cherryArray[i]->isAlive()) {
            m_cardCount += 1;    
        }
    }
    
    if (m_cardCount < 4 || (isHigh && m_cardCount < maxSpawnCherries)) {
        float ticking = sys->m_deltaTime;
        if (isHigh) {
            ticking *= 2.0f;
        }
        m_spawnTimer -= ticking;
        if (m_spawnTimer <= 0.0f) {
            m_spawnTimer = 3.0f * randFloat() + 10.0f;
            DropCardArg arg;
            arg._00 = factor1;
            arg._04 = factor2;
            dropCard(arg);
        }
    }
}

/*
 * --INFO--
 * Address:	801C39A8
 * Size:	000018
 */
void VsGameSection::useCard() {
    if (m_cardCount > 0) {
        m_cardCount -= 1;
    }
}


/*
 * --INFO--
 * Address:	801C39C0
 * Size:	0003F4
 */
Pellet* VsGameSection::createCardPellet()
{
    PelletList::cKind kind; // at 0x8
    char* name = const_cast<char*>(VsOtakaraName::cCoin);
    PelletInitArg pelletArg; // at 0x4c

    PelletConfig* config = PelletList::Mgr::getConfigAndKind(name, kind); 
    JUT_ASSERTLINE(0x6df, config, "zannenn\n");
    pelletArg._10 = config->m_params.m_index;
    pelletArg.m_textIdentifier = config->m_params.m_name.m_data;
    pelletArg.m_pelletType = kind;
    pelletArg._1C = 1;
    pelletArg.m_minCarriers = 1;
    pelletArg.m_maxCarriers = 1;
    
    for (int i = 0; i < m_maxCherries; i++) {
        Pellet *pellet = m_cherryArray[i];
        if (!pellet->isAlive() && !pellet->getStateID()) {
            PelletOtakara::mgr->setComeAlive(pellet->m_slotIndex);
            pellet->init(&pelletArg);
            return pellet;
        }
    }
    return nullptr;
}

void VsGameSection::dropCard(VsGameSection::DropCardArg& arg) {
    Vector3f spawn; // at 0x28
    Cave::randMapMgr->getItemDropPosition(spawn, arg._00, arg._04);
    float radius = (randFloat() * 20.0f);
    float angle = randFloat() * TAU;
    
    spawn += Vector3f(
        radius * pikmin2_sinf(angle), 
        0.0f, 
        radius * pikmin2_cosf(angle)
    );

    Pellet *pellet = createCardPellet();
    
    if (pellet) {
        spawn.y += 140.0f;
        pellet->setPosition(spawn, false);
        efx::TEnemyApsmoke smoke; // at 0xc
        efx::ArgEnemyType smokeArg (spawn, EnemyTypeID::EnemyID_Kochappy, 1.0f); // at 0x34
        smoke.create(&smokeArg);
            
        Vector3f newRand = Vector3f(0.0f, randFloat() * TAU, 0.0f);
        Matrixf mat; // at 0x74
        mat.makeTR(Vector3f::zero, newRand);
        pellet->setOrientation(mat);
        m_cardCount++;
    }
    else
    {
        for (int i = 0; i < m_maxCherries; i++)
        {
            m_cherryArray[i]->isAlive();
        }
    }
}

/*
 * --INFO--
 * Address:	801C3DB4
 * Size:	0001AC
 */
void VsGameSection::createYellowBedamas(int bedamas) {
    if (m_VsStageData) {
        bedamas = m_VsStageData->m_startNumYellowMarbles;
        if (bedamas == 0) {
            return;
        }
        if (bedamas >= 7) {
            bedamas = 7;
        }
    }
    PelletList::cKind kind; 
    char* name = const_cast<char*>(VsOtakaraName::cBedamaYellow);
    PelletInitArg pelletArg;

    PelletConfig* config = PelletList::Mgr::getConfigAndKind(name, kind); 
    JUT_ASSERTLINE(0x86a, config, "zannenn\n");
    
    pelletArg._10 = config->m_params.m_index;
    
    pelletArg.m_textIdentifier = config->m_params.m_name.m_data;
    pelletArg.m_pelletType = kind;
    pelletArg.m_minCarriers = 1;
    pelletArg.m_maxCarriers = 8;
    JUT_ASSERTLINE(0x873, bedamas <= 50, "oosugi %d\n", bedamas);
    Vector3f positions[50]; 
    Cave::randMapMgr->getItemDropPosition(positions, bedamas, 0.4f, 0.6f);
    for (int i = 0; i < bedamas; i++) {
        Pellet* pellet = pelletMgr->birth(&pelletArg);
        Vector3f pos = positions[i];
        pellet->setPosition(pos, false);
        m_marbleYellow[i] = pellet;
    }
}

void VsGameSection::createRedBlueBedamas(Vector3f& pos) {
    const char* marbles[2] = {VsOtakaraName::cBedamaRed, VsOtakaraName::cBedamaBlue};
    for (int i = 0; i < 2; i++) {
        PelletList::cKind kind; 
        
        PelletInitArg pelletArg;
        char* name = const_cast<char*>(marbles[i]);
        PelletConfig* config = PelletList::Mgr::getConfigAndKind(name, kind); 
        JUT_ASSERTLINE(0x8a3, config, "zannenn\n");
        pelletArg._10 = config->m_params.m_index;
        pelletArg.m_textIdentifier = config->m_params.m_name.m_data;
        pelletArg.m_pelletType = kind;
        pelletArg.m_minCarriers = 1;
        pelletArg.m_maxCarriers = 8;
        Pellet* pellet = pelletMgr->birth(&pelletArg);
        Vector3f position;
        Cave::randMapMgr->getItemDropPosition(position, 0.2f, 0.8f);
        pellet->setPosition(position, false);
        m_marbleRedBlue[i] = pellet;

    }
}

/*
 * --INFO--
 * Address:	801C40AC
 * Size:	000814
 */
void VsGameSection::calcVsScores(void) {
    
    float yellowMarbleRedDist[7];
    float yellowMarbleBlueDist[7];
    Onyon* onyons[2]; 
    onyons[0] = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
    onyons[1] = ItemOnyon::mgr->getOnyon(ONYON_TYPE_BLUE);
    
    for (int i = 0; i < 7; i++) {
        Pellet* marble = m_marbleYellow[i];
        
        if (marble && marble->isAlive() && marble->getStateID() == 0) {
            int marbleCarryFactor = -1;
            if (marble->isCarried()) {
                switch (marble->m_carryColor) {
                    case Red:
                        marbleCarryFactor = 0;
                        break;
                    case Blue:
                        marbleCarryFactor = 1;
                        break;
                }
            }
            
            Vector3f marblePosition = marble->getPosition();
            Vector3f redOnyonPosition = onyons[0]->getPosition();
            float expDistRed = _distanceXZ(marblePosition, redOnyonPosition);
            
            Vector3f blueOnyonPosition = onyons[1]->getPosition();
            float expDistBlue =  _distanceXZ(marblePosition, blueOnyonPosition);
            
            float finally = 1.0f / ((f32)exp((expDistBlue / (expDistRed + expDistBlue) - 0.5f) * -10.0f) + 1.0f);
            bool check = false;
            if (marble->m_captureMatrix) {
                check = true;
            }

            if (!check) {
                if (marbleCarryFactor == -1) {
                    yellowMarbleRedDist[i] = finally;
                    yellowMarbleBlueDist[i] = 1.0f - finally;
                } else if (marbleCarryFactor == 0) {
                    yellowMarbleRedDist[i] = finally;
                    yellowMarbleBlueDist[i] = 0.0f;
                } else {
                    yellowMarbleRedDist[i] = 0.0f;
                    yellowMarbleBlueDist[i] = 1.0f - finally;
                }
            } else {
                yellowMarbleRedDist[i] = 0.1f * finally;
                yellowMarbleBlueDist[i] = 0.1f * (1.0f - finally); 
            }
        } else {
            yellowMarbleRedDist[i] = -1.0f;
            yellowMarbleBlueDist[i] = -1.0f;
        }
    }
    
    float yellowScore[2];
    for (int i = 0; i < 2; i++) {
        float count = m_yellowMarbleCounts[i];
        for (int j = 0; j < 7; j++) {
            if (i == 0 && yellowMarbleRedDist[j] >= 0.0f) {
                count += yellowMarbleRedDist[j];
            }
            if (i == 1 && yellowMarbleBlueDist[j] >= 0.0f) {
                count += yellowMarbleBlueDist[j];
            }
        }
        if (count >= 4.0f) {
            count = 4.0f;
        }
        count /= 4.0f;
        yellowScore[i] = count;
        m_yellowScore[i] = yellowScore[i];
    }

    f32 redBlueScore[] = {0.0f, 0.0f};
    
    for (int i = 0; i < 2; i++) {
        Pellet* marble = m_marbleRedBlue[i];
        Onyon* onyon = onyons[i];
        if (marble) {
            Vector3f marblePosition = marble->getPosition();
            Vector3f onyonPosition = onyon->getPosition();
            float expDistRed = _distanceXZ(marblePosition, onyonPosition);

            Vector3f otherOnyonPosition = onyons[(1 - i)]->getPosition();
            float expDistBlue = _distanceXZ(marblePosition, otherOnyonPosition);
            redBlueScore[i] = 1.0f / ((f32)exp((expDistRed / (expDistRed + expDistBlue) - 0.5f) * -10.0f) + 1.0f);
            m_redBlueScore[i] = redBlueScore[i];
        }
    }

    m_redBlueYellowScore[0] = redBlueScore[1] + ((yellowScore[0] - yellowScore[1]) - redBlueScore[0]);
    m_redBlueYellowScore[1] = redBlueScore[0] + ((yellowScore[1] - yellowScore[0]) - redBlueScore[1]);
    
    float cherryValue;
    float cherryRedDist[10];
    float cherryBlueDist[10];
    for (int i = 0; i < 10; i++) {
        Pellet* cherry = m_cherryArray[i];
        if (cherry->isAlive() && cherry->getStateID() == 0) {
            int cherryCarryFactor = -1;
            if (cherry->isCarried()) {
                switch (cherry->m_carryColor) {
                    case Red:
                        cherryCarryFactor = 0;
                        break;
                    case Blue:
                        cherryCarryFactor = 1;
                        break;
                }
            }
            Vector3f cherryPosition = cherry->getPosition();
            Vector3f redOnyonPosition = onyons[0]->getPosition();
            float expDistRed = _distanceXZ(cherryPosition, redOnyonPosition);
            
            Vector3f blueOnyonPosition = onyons[1]->getPosition();
            float expDistBlue = _distanceXZ(cherryPosition, blueOnyonPosition);
            float finally = 1.0f / ((f32)exp((expDistBlue / (expDistRed + expDistBlue) - 0.5f) * -10.0f) + 1.0f);

            bool check = false;
            if (cherry->m_captureMatrix) {
                check = true;
            }
            if (!check) {
                if (cherryCarryFactor == -1) {
                    cherryRedDist[i] = finally;
                    cherryBlueDist[i] = 1.0f - finally;
                } else if (cherryCarryFactor == 0) {
                    cherryRedDist[i] = finally;
                    cherryBlueDist[i] = 0.0f;
                } else {
                    cherryRedDist[i] = 0.0f;
                    cherryBlueDist[i] = 1.0f - finally;
                }
            } else {
                cherryRedDist[i] = 0.1f * finally;
                cherryBlueDist[i] = 0.1f * (1.0f - finally);                
            }
        } else {
            cherryRedDist[i] = -1.0f;
            cherryBlueDist[i] = -1.0f;
        }
    }

    float redCherryValue;
    float blueCherryValue;
    for (int i = 0; i < 2; i++) {
        m_maxCherryScore[i] = 0.0f;
        float count = 0.0f;
        for (int j = 0; j < 10; j++) {
                float miniCount = 0.0f;
                if (i == 0 && cherryRedDist[j] >= 0.0f) {
                    count += cherryRedDist[j];
                    miniCount = cherryRedDist[j];
                }
                if (i == 1 && cherryBlueDist[j] >= 0.0f) {
                    count += cherryBlueDist[j];
                    miniCount = cherryBlueDist[j];
                }
                if (m_maxCherryScore[i] <= miniCount) {
                    m_maxCherryScore[i] = miniCount;
                }
        }
        yellowMarbleRedDist[i] = count / 4.0f;
        m_cherryScore[i] = count;
    }
}


/*
 * --INFO--
 * Address:	801C48C0
 * Size:	000018
 */
void VsGameSection::clearGetDopeCount() {
    m_dopeCounts[1][1] = 0;
    m_dopeCounts[1][0] = 0;
    m_dopeCounts[0][1] = 0;
    m_dopeCounts[0][0] = 0;
}


/*
 * --INFO--
 * Address:	801C48D8
 * Size:	0000D0
 */
u32* VsGameSection::getGetDopeCount(int player, int type) {
    JUTASSERTBOUNDSINCLUSIVELINE(0xa07, 0, player, 1, "%d playerID\n");
    JUTASSERTBOUNDSINCLUSIVELINE(0xa08, 0, type, 1, "%d typeID\n");
    return &m_dopeCounts[player][type];    
}

/*
 * --INFO--
 * Address:	801C49A8
 * Size:	000010
 */
void VsGameSection::clearGetCherryCount() {
    m_player1Cherries = 0;
    m_player2Cherries = 0;
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
char* VsGameSection::getCaveFilename() {
    return m_caveInfoFilename;
}


/*
 * --INFO--
 * Address:	801C49D0
 * Size:	000008
 */
char* VsGameSection::getEditorFilename() {
    return m_editFilename;
}


/*
 * --INFO--
 * Address:	801C49D8
 * Size:	000008
 */
u32 VsGameSection::getVsEditNumber() {
    return m_editNumber;
}


/*
 * --INFO--
 * Address:	801C49E0
 * Size:	000004
 */
void StateMachine<VsGameSection>::init(VsGameSection) { }

/*
 * --INFO--
 * Address:	801C49E4
 * Size:	000064
 */
void StateMachine<VsGameSection>::create(int states) {
    m_limit =          states;
    m_count =          0;
    m_states =         new FSMState<VsGameSection>*[m_limit];
    m_indexToIDArray = new int*[m_limit];
    m_idToIndexArray = new int*[m_limit];
}


/*
 * --INFO--
 * Address:	801C4A48
 * Size:	00009C
 */
void StateMachine<VsGameSection>::transit(VsGameSection* section, int stateID, StateArg* arg) {
    
    int stateIndex = m_idToIndexArray[stateID];
    VsGame::State* currentState = section->m_state;
    if (currentState) {
        currentState->cleanup(section);
        m_currentID = currentState->m_id;
    }
    if (stateIndex >= m_limit) {
        while(true); 
    }
    VsGame::State* state = static_cast<VsGame::State*>(m_states[stateIndex]);
    section->m_state = state;
    state->init(section, arg);
    
}


/*
 * --INFO--
 * Address:	801C4AE4
 * Size:	000004
 */
void FSMState<VsGameSection>::init(VsGameSection*, StateArg*) { }

/*
 * --INFO--
 * Address:	801C4AE8
 * Size:	000004
 */
void FSMState<VsGameSection>::cleanup(VsGameSection*) { }

/*
 * --INFO--
 * Address:	801C4AEC
 * Size:	000084
 */
void StateMachine<VsGameSection>::registerState(FSMState<VsGameSection>* state) {
    if (m_count >= m_limit) {
        return;
    }
    m_states[m_count] = state;
    bool inlineHere;
    if (state->m_id < 0 || state->m_id >= m_limit) {
        inlineHere = false;
    }
    else {
        inlineHere = true;
    }
    
    if (!inlineHere) {
        return;
    }

    state->m_stateMachine = this;
    m_indexToIDArray[m_count] = state->m_id;
    m_idToIndexArray[state->m_id] = m_count;
    m_count++;
}

/*
 * --INFO--
 * Address:	801C4B70
 * Size:	000038
 */
void StateMachine<VsGameSection>::exec(VsGameSection* section) {
    if (section->m_state) {
        section->m_state->exec(section);
    }
}


/*
 * --INFO--
 * Address:	801C4BA8
 * Size:	000004
 */
void FSMState<VsGameSection>::exec(VsGameSection*) { }

} // namespace Game
