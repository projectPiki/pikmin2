#include "Dolphin/string.h"
#include "Game/BaseGameSection.h"
#include "Game/GameSystem.h"
#include "Game/Piki.h"
#include "Iterator.h"
#include "Screen/Enums.h"
#include "types.h"
#include "Game/SingleGameSection.h"
#include "Game/SingleGame.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGameSection_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047CD98
    lbl_8047CD98:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x53696E67
        .4byte 0x6C654761
        .4byte 0x6D655365
        .4byte 0x6374696F
        .4byte 0x6E000000
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
    .global lbl_8047CDC4
    lbl_8047CDC4:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x67657420
        .4byte 0x736F756E
        .4byte 0x64207363
        .4byte 0x656E6520
        .4byte 0x61740A69
        .4byte 0x6E76616C
        .4byte 0x69642074
        .4byte 0x696D6D69
        .4byte 0x6E670A00
        .4byte 0x50534D61
        .4byte 0x696E5369
        .4byte 0x64655F53
        .4byte 0x63656E65
        .4byte 0x2E680000
    .global lbl_8047CE14
    lbl_8047CE14:
        .4byte 0x63617665
        .4byte 0x64617965
        .4byte 0x6E640000
        .4byte 0x5347533A
        .4byte 0x3A6F6E49
        .4byte 0x6E697400
        .4byte 0x5347533A
        .4byte 0x3A46534D
        .4byte 0x00000000
        .4byte 0x5347533A
        .4byte 0x3A736574
        .4byte 0x75704669
        .4byte 0x78000000
    .global lbl_8047CE48
    lbl_8047CE48:
        .4byte 0x73696E67
        .4byte 0x6C654761
        .4byte 0x6D655365
        .4byte 0x6374696F
        .4byte 0x6E2E6370
        .4byte 0x70000000
    .global lbl_8047CE60
    lbl_8047CE60:
        .4byte 0x43757272
        .4byte 0x54696D65
        .4byte 0x72202825
        .4byte 0x6429203A
        .4byte 0x20646973
        .4byte 0x61626C65
        .4byte 0x54696D65
        .4byte 0x72282564
        .4byte 0x290A0000
        .4byte 0x6730325F
        .4byte 0x626F6F74
        .4byte 0x5F6F6E79
        .4byte 0x6F6E5200
        .4byte 0x6731455F
        .4byte 0x626F6F74
        .4byte 0x5F6F6E79
        .4byte 0x6F6E5900
        .4byte 0x6732305F
        .4byte 0x626F6F74
        .4byte 0x5F6F6E79
        .4byte 0x6F6E4200
        .4byte 0x6730335F
        .4byte 0x6D656574
        .4byte 0x5F726564
        .4byte 0x70696B6D
        .4byte 0x696E0000
        .4byte 0x4E6F2052
        .4byte 0x4544204F
        .4byte 0x4E594F4E
        .4byte 0x00000000
        .4byte 0x6731465F
        .4byte 0x6D656574
        .4byte 0x5F79656C
        .4byte 0x6C6F7770
        .4byte 0x696B6D69
        .4byte 0x6E000000
        .4byte 0x6732315F
        .4byte 0x6D656574
        .4byte 0x5F626C75
        .4byte 0x6570696B
        .4byte 0x6D696E00
        .4byte 0x6732345F
        .4byte 0x6D656574
        .4byte 0x5F626C61
        .4byte 0x636B7069
        .4byte 0x6B6D696E
        .4byte 0x00000000
        .4byte 0x6732375F
        .4byte 0x6D656574
        .4byte 0x5F776869
        .4byte 0x74657069
        .4byte 0x6B6D696E
        .4byte 0x00000000
    .global lbl_8047CF34
    lbl_8047CF34:
        .4byte 0x6F70656E
        .4byte 0x5F636176
        .4byte 0x65496E00
    .global lbl_8047CF40
    lbl_8047CF40:
        .4byte 0x6F70656E
        .4byte 0x43617665
        .4byte 0x4D6F7265
        .4byte 0x00000000
    .global lbl_8047CF50
    lbl_8047CF50:
        .4byte 0x6F70656E
        .4byte 0x4B616E6B
        .4byte 0x65747500
        .4byte 0x63617665
        .4byte 0x2D796573
        .4byte 0x00000000
        .4byte 0x63617665
        .4byte 0x2D7A656E
        .4byte 0x6B616900
        .4byte 0x6D6F7265
        .4byte 0x2D796573
        .4byte 0x00000000
        .4byte 0x6D6F7265
        .4byte 0x2D7A656E
        .4byte 0x6B616900
        .4byte 0x6B616E6B
        .4byte 0x2D796573
        .4byte 0x00000000
    .global lbl_8047CF98
    lbl_8047CF98:
        .4byte 0x63726561
        .4byte 0x74654661
        .4byte 0x6C6C5069
        .4byte 0x6B6D696E
        .4byte 0x73000000
    .global lbl_8047CFAC
    lbl_8047CFAC:
        .4byte 0x67616D65
        .4byte 0x53746174
        .4byte 0x2E680000
    .global lbl_8047CFB8
    lbl_8047CFB8:
        .4byte 0x50696B69
        .4byte 0x496E6974
        .4byte 0x41726700
    .global lbl_8047CFC4
    lbl_8047CFC4:
        .4byte 0x50696B69
        .4byte 0x4B696C6C
        .4byte 0x41726700
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x4B696C6C
        .4byte 0x41726700

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B1070
    lbl_804B1070:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804B107C
    lbl_804B107C:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte saveCaveMore__Q24Game17SingleGameSectionFv
    .global lbl_804B1088
    lbl_804B1088:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte setupFloatMemory__Q24Game15BaseGameSectionFv
    .global __vt__Q32og6Screen14DispMemberCave
    __vt__Q32og6Screen14DispMemberCave:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen14DispMemberCaveFv
        .4byte getOwnerID__Q32og6Screen14DispMemberCaveFv
        .4byte getMemberID__Q32og6Screen14DispMemberCaveFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen17DispMemberHurryUp
    __vt__Q32og6Screen17DispMemberHurryUp:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen17DispMemberHurryUpFv
        .4byte getOwnerID__Q32og6Screen17DispMemberHurryUpFv
        .4byte getMemberID__Q32og6Screen17DispMemberHurryUpFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen21DispMemberDayEndCount
    __vt__Q32og6Screen21DispMemberDayEndCount:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen21DispMemberDayEndCountFv
        .4byte getOwnerID__Q32og6Screen21DispMemberDayEndCountFv
        .4byte getMemberID__Q32og6Screen21DispMemberDayEndCountFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen16DispMemberGround
    __vt__Q32og6Screen16DispMemberGround:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen16DispMemberGroundFv
        .4byte getOwnerID__Q32og6Screen16DispMemberGroundFv
        .4byte getMemberID__Q32og6Screen16DispMemberGroundFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q24Game11PikiInitArg
    __vt__Q24Game11PikiInitArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q24Game11PikiInitArgFv
    .global __vt__Q32og6Screen21DispMemberKanketuMenu
    __vt__Q32og6Screen21DispMemberKanketuMenu:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen21DispMemberKanketuMenuFv
        .4byte getOwnerID__Q32og6Screen21DispMemberKanketuMenuFv
        .4byte getMemberID__Q32og6Screen21DispMemberKanketuMenuFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen18DispMemberCaveMore
    __vt__Q32og6Screen18DispMemberCaveMore:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen18DispMemberCaveMoreFv
        .4byte getOwnerID__Q32og6Screen18DispMemberCaveMoreFv
        .4byte getMemberID__Q32og6Screen18DispMemberCaveMoreFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen17DispMemberAnaDemo
    __vt__Q32og6Screen17DispMemberAnaDemo:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen17DispMemberAnaDemoFv
        .4byte getOwnerID__Q32og6Screen17DispMemberAnaDemoFv
        .4byte getMemberID__Q32og6Screen17DispMemberAnaDemoFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32og6Screen14DispMemberBase
    __vt__Q32og6Screen14DispMemberBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q24Game11PikiKillArg
    __vt__Q24Game11PikiKillArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q24Game11PikiKillArgFv
    .global __vt__Q23efx11TLastMomiji
    __vt__Q23efx11TLastMomiji:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TLastMomijiFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx11TLastMomijiFv
    .global __vt__Q23efx13TForestSakura
    __vt__Q23efx13TForestSakura:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TForestSakuraFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx13TForestSakuraFv
    .global __vt__Q23efx13TTutorialSnow
    __vt__Q23efx13TTutorialSnow:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TTutorialSnowFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx13TTutorialSnowFv
    .global __vt__Q26PSGame13CaveFloorInfo
    __vt__Q26PSGame13CaveFloorInfo:
        .4byte 0
        .4byte 0
        .4byte isCaveFloor__Q26PSGame13CaveFloorInfoFv
        .4byte isBossFloor__Q26PSGame13CaveFloorInfoFv
        .4byte isRelaxFloor__Q26PSGame13CaveFloorInfoFv
    .global "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>"
    "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   "exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
    .global "__vt__36Delegate<Q24Game17SingleGameSection>"
    "__vt__36Delegate<Q24Game17SingleGameSection>":
        .4byte 0
        .4byte 0
        .4byte "invoke__36Delegate<Q24Game17SingleGameSection>Fv"
    .global __vt__Q34Game10SingleGame15CaveDayEndState
    __vt__Q34Game10SingleGame15CaveDayEndState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte
   exec__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection .4byte
   cleanup__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection
        .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionR8Graphics
        .4byte
   onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
        .4byte
   onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
        .4byte
   onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
        .4byte
   on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
        .4byte
   on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl
    .global __vt__Q34Game10SingleGame5State
    __vt__Q34Game10SingleGame5State:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectionPQ24Game8StateArg"
        .4byte
   "exec__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "cleanup__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionR8Graphics .4byte
   onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
        .4byte
   onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
        .4byte
   onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
        .4byte
   on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
        .4byte
   on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl
    .global "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"
    "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectionPQ24Game8StateArg"
        .4byte
   "exec__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "cleanup__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
    .global __vt__Q34Game10SingleGame3FSM
    __vt__Q34Game10SingleGame3FSM:
        .4byte 0
        .4byte 0
        .4byte init__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSection
        .4byte
   "start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   "exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   transit__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSectioniPQ24Game8StateArg
    .global __vt__Q24Game17SingleGameSection
    __vt__Q24Game17SingleGameSection:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game17SingleGameSectionFv
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
   doUpdate__Q24Game17SingleGameSectionFv .4byte
   doDraw__Q24Game17SingleGameSectionFR8Graphics .4byte isFinishable__7SectionFv
        .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
        .4byte refreshHIO__Q24Game14BaseHIOSectionFv
        .4byte sendMessage__Q24Game15BaseGameSectionFRQ24Game11GameMessage
        .4byte pre2dDraw__Q24Game15BaseGameSectionFR8Graphics
        .4byte getCurrFloor__Q24Game17SingleGameSectionFv
        .4byte isDevelopSection__Q24Game17SingleGameSectionFv
        .4byte addChallengeScore__Q24Game15BaseGameSectionFi
        .4byte startMainBgm__Q24Game17SingleGameSectionFv
        .4byte section_fadeout__Q24Game17SingleGameSectionFv
        .4byte goNextFloor__Q24Game17SingleGameSectionFPQ34Game8ItemHole4Item
        .4byte goCave__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Item
        .4byte
   goMainMap__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4Item .4byte
   getCaveID__Q24Game17SingleGameSectionFv .4byte
   getCurrentCourseInfo__Q24Game17SingleGameSectionFv .4byte
   challengeDisablePelplant__Q24Game15BaseGameSectionFv .4byte
   getCaveFilename__Q24Game17SingleGameSectionFv .4byte
   getEditorFilename__Q24Game15BaseGameSectionFv .4byte
   getVsEditNumber__Q24Game15BaseGameSectionFv .4byte
   openContainerWindow__Q24Game15BaseGameSectionFv .4byte
   closeContainerWindow__Q24Game15BaseGameSectionFv .4byte
   playMovie_firstexperience__Q24Game17SingleGameSectionFiPQ24Game8Creature
        .4byte playMovie_bootup__Q24Game17SingleGameSectionFPQ24Game5Onyon
        .4byte playMovie_helloPikmin__Q24Game17SingleGameSectionFPQ24Game4Piki
        .4byte enableTimer__Q24Game17SingleGameSectionFfUl
        .4byte disableTimer__Q24Game17SingleGameSectionFUl
        .4byte getTimerType__Q24Game17SingleGameSectionFv
        .4byte
   onMovieStart__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieDone__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieCommand__Q24Game17SingleGameSectionFi .4byte
   startFadeout__Q24Game15BaseGameSectionFf .4byte
   startFadein__Q24Game15BaseGameSectionFf .4byte
   startFadeoutin__Q24Game15BaseGameSectionFf .4byte
   startFadeblack__Q24Game15BaseGameSectionFv .4byte
   startFadewhite__Q24Game15BaseGameSectionFv .4byte
   gmOrimaDown__Q24Game17SingleGameSectionFi .4byte
   gmPikminZero__Q24Game17SingleGameSectionFv .4byte
   openCaveInMenu__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Itemi .4byte
   openCaveMoreMenu__Q24Game17SingleGameSectionFPQ34Game8ItemHole4ItemP10Controller
        .4byte
   openKanketuMenu__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
        .4byte on_setCamController__Q24Game17SingleGameSectionFi
        .4byte onTogglePlayer__Q24Game15BaseGameSectionFv
        .4byte onPlayerJoin__Q24Game15BaseGameSectionFv
        .4byte onInit__Q24Game17SingleGameSectionFv
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
        .4byte onSetupFloatMemory__Q24Game17SingleGameSectionFv
        .4byte postSetupFloatMemory__Q24Game15BaseGameSectionFv
        .4byte onSetSoundScene__Q24Game17SingleGameSectionFv
        .4byte onStartHeap__Q24Game17SingleGameSectionFv
        .4byte onClearHeap__Q24Game17SingleGameSectionFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515940
    lbl_80515940:
        .skip 0x4
    .global lbl_80515944
    lbl_80515944:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805185C0
    lbl_805185C0:
        .4byte 0x79657300
    .global lbl_805185C4
    lbl_805185C4:
        .4byte 0x40200000
    .global lbl_805185C8
    lbl_805185C8:
        .4byte 0x00000000
    .global lbl_805185CC
    lbl_805185CC:
        .4byte 0x63617665
        .4byte 0x2D6E6F00
    .global lbl_805185D4
    lbl_805185D4:
        .4byte 0x6D6F7265
        .4byte 0x2D6E6F00
    .global lbl_805185DC
    lbl_805185DC:
        .4byte 0x6B616E6B
        .4byte 0x2D6E6F00
    .global lbl_805185E4
    lbl_805185E4:
        .4byte 0x47000000
    .global lbl_805185E8
    lbl_805185E8:
        .4byte 0x41700000
    .global lbl_805185EC
    lbl_805185EC:
        .4byte 0x42200000
    .global lbl_805185F0
    lbl_805185F0:
        .4byte 0x40C90FDB
    .global lbl_805185F4
    lbl_805185F4:
        .4byte 0x44408000
    .global lbl_805185F8
    lbl_805185F8:
        .4byte 0x44548000
    .global lbl_805185FC
    lbl_805185FC:
        .4byte 0x42F00000
    .global lbl_80518600
    lbl_80518600:
        .4byte 0x43A2F983
    .global lbl_80518604
    lbl_80518604:
        .4byte 0xC3A2F983
    .global lbl_80518608
    lbl_80518608:
        .4byte 0x4528C000
    .global lbl_8051860C
    lbl_8051860C:
        .4byte 0x43160000
    .global lbl_80518610
    lbl_80518610:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518618
    lbl_80518618:
        .float 900.0
    .global lbl_8051861C
    lbl_8051861C:
        .float 1.0
    .global lbl_80518620
    lbl_80518620:
        .float 0.9
    .global lbl_80518624
    lbl_80518624:
        .float 0.8
*/

namespace Game {

/*
 * --INFO--
 * Address:	80152074
 * Size:	000084
 */
SingleGameSection::~SingleGameSection(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801520DC
	lis      r3, __vt__Q24Game17SingleGameSection@ha
	addic.   r0, r30, 0x1b8
	addi     r3, r3, __vt__Q24Game17SingleGameSection@l
	li       r0, 0
	stw      r3, 0(r30)
	stw      r0, mgr__5Radar@sda21(r13)
	beq      lbl_801520C0
	addic.   r3, r30, 0x214
	beq      lbl_801520C0
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_801520C0:
	mr       r3, r30
	li       r4, 0
	bl       __dt__Q24Game15BaseGameSectionFv
	extsh.   r0, r31
	ble      lbl_801520DC
	mr       r3, r30
	bl       __dl__FPv

lbl_801520DC:
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
 * Address:	801520F8
 * Size:	000184
 */
void SingleGameSection::startMainBgm(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8047CD98@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047CD98@l
	stw      r30, 8(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	ori      r0, r0, 2
	stb      r0, 0x3c(r3)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80152144
	addi     r3, r31, 0x20
	addi     r5, r31, 0x2c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80152144:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80152168
	addi     r3, r31, 0x38
	addi     r5, r31, 0x2c
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80152168:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80152264
	bl       getNumOtakaraItems__Q25Radar3MgrFv
	cmpwi    r3, 0
	bne      lbl_80152264
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80152264
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801521C8
	addi     r3, r31, 0x20
	addi     r5, r31, 0x2c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801521C8:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_801521E8
	addi     r3, r31, 0x20
	addi     r5, r31, 0x2c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801521E8:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80152208
	addi     r3, r31, 0x38
	addi     r5, r31, 0x2c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80152208:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_8015222C
	addi     r3, r31, 0x38
	addi     r5, r31, 0x44
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015222C:
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015225C
	addi     r3, r31, 0x68
	addi     r5, r31, 0x2c
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015225C:
	mr       r3, r30
	bl       stopPollutionSe__Q23PSM10Scene_CaveFv

lbl_80152264:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace PSM {

/*
 * --INFO--
 * Address:	8015227C
 * Size:	000008
 */
bool SceneBase::isGameScene(void) { return false; }
} // namespace PSM

namespace Game {
/*
 * --INFO--
 * Address:	80152284
 * Size:	0002A0
 */
void SingleGame::FSM::init(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xc
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       "create__Q24Game40StateMachine<Q24Game17SingleGameSection>Fi"
	li       r3, 0x38
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801522BC
	bl       __ct__Q34Game10SingleGame9FileStateFv
	mr       r4, r3

lbl_801522BC:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x30
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801522DC
	bl       __ct__Q34Game10SingleGame11SelectStateFv
	mr       r4, r3

lbl_801522DC:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80152328
	lis      r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	lis      r5, __vt__Q34Game10SingleGame5State@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r3, __vt__Q34Game10SingleGame9LoadState@ha
	stw      r0, 0(r4)
	li       r0, 2
	li       r6, 0
	addi     r5, r5, __vt__Q34Game10SingleGame5State@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q34Game10SingleGame9LoadState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_80152328:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x24
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80152374
	lis      r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	lis      r5, __vt__Q34Game10SingleGame5State@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r3, __vt__Q34Game10SingleGame9GameState@ha
	stw      r0, 0(r4)
	li       r0, 3
	li       r6, 0
	addi     r5, r5, __vt__Q34Game10SingleGame5State@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q34Game10SingleGame9GameState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_80152374:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801523C0
	lis      r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	lis      r5, __vt__Q34Game10SingleGame5State@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r3, __vt__Q34Game10SingleGame9CaveState@ha
	stw      r0, 0(r4)
	li       r0, 4
	li       r6, 0
	addi     r5, r5, __vt__Q34Game10SingleGame5State@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q34Game10SingleGame9CaveState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_801523C0:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x20
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80152414
	lis      r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	lis      r4, __vt__Q34Game10SingleGame5State@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r3, __vt__Q34Game10SingleGame11DayEndState@ha
	stw      r0, 0(r30)
	li       r0, 5
	li       r5, 0
	addi     r4, r4, __vt__Q34Game10SingleGame5State@l
	stw      r0, 4(r30)
	addi     r0, r3, __vt__Q34Game10SingleGame11DayEndState@l
	addi     r3, r30, 0x18
	stw      r5, 8(r30)
	stw      r4, 0(r30)
	stw      r0, 0(r30)
	bl       __ct__Q24Game13PikiContainerFv

lbl_80152414:
	mr       r3, r31
	mr       r4, r30
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x14
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80152464
	lis      r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	lis      r5, __vt__Q34Game10SingleGame5State@ha
	addi     r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r3, __vt__Q34Game10SingleGame15CaveDayEndState@ha
	stw      r0, 0(r4)
	li       r0, 6
	li       r6, 0
	addi     r5, r5, __vt__Q34Game10SingleGame5State@l
	stw      r0, 4(r4)
	addi     r0, r3, __vt__Q34Game10SingleGame15CaveDayEndState@l
	stw      r6, 8(r4)
	stw      r5, 0(r4)
	stw      r0, 0(r4)

lbl_80152464:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x140
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80152484
	bl       __ct__Q34Game10SingleGame15MainResultStateFv
	mr       r4, r3

lbl_80152484:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x100
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801524A4
	bl       __ct__Q34Game10SingleGame15CaveResultStateFv
	mr       r4, r3

lbl_801524A4:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801524C4
	bl       __ct__Q34Game10SingleGame10MovieStateFv
	mr       r4, r3

lbl_801524C4:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x118
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801524E4
	bl       __ct__Q34Game10SingleGame10ZukanStateFv
	mr       r4, r3

lbl_801524E4:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
	li       r3, 0x30
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80152504
	bl       __ct__Q34Game10SingleGame11EndingStateFv
	mr       r4, r3

lbl_80152504:
	mr       r3, r31
	bl
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
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
 * Address:	........
 * Size:	000038
 */
void SingleGame::FSM::draw(Game::SingleGameSection*, Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80152524
 * Size:	000004
 */
void SingleGame::State::draw(Game::SingleGameSection*, Graphics&) { }

/*
 * --INFO--
 * Address:	80152528
 * Size:	000020
 */
void SingleGame::FSM::transit(Game::SingleGameSection*, int, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl
	"transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152548
 * Size:	000040
 */
void SingleGame::FSM::getState(int)
{
	/*
	cmpwi    r4, 0
	blt      lbl_8015255C
	lwz      r0, 0xc(r3)
	cmpw     r4, r0
	blt      lbl_80152564

lbl_8015255C:
	li       r0, 0
	b        lbl_80152568

lbl_80152564:
	li       r0, 1

lbl_80152568:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80152580
	lwz      r3, 4(r3)
	slwi     r0, r4, 2
	lwzx     r3, r3, r0
	blr

lbl_80152580:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152588
 * Size:	000200
 */
void SingleGame::State::accountEarnings(Game::SingleGameSection*, Game::PelletCropMemory*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r30, r5
	  mr        r29, r4
	  mr        r31, r6
	  addi      r25, r30, 0x4
	  li        r24, 0
	  lwz       r26, -0x6AE0(r13)
	  b         .loc_0xC4

	.loc_0x2C:
	  mr        r3, r26
	  mr        r4, r24
	  bl        0x197CC
	  mr.       r28, r3
	  beq-      .loc_0xC0
	  lwz       r27, 0x170(r28)
	  mr        r3, r25
	  mr        r4, r24
	  bl        0x92E2C
	  lbz       r0, 0x0(r3)
	  mr        r3, r25
	  lwz       r5, -0x6B70(r13)
	  mr        r4, r24
	  mullw     r6, r0, r27
	  lwz       r0, 0xE8(r5)
	  add       r0, r0, r6
	  stw       r0, 0xE8(r5)
	  bl        0x92E08
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r26
	  mr        r5, r24
	  bl        0x94F80
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0xC0
	  lwz       r4, 0x180(r28)
	  subi      r3, r2, 0x5DA0
	  bl        -0x87F68
	  cmpwi     r3, 0
	  bne-      .loc_0xC0
	  lwz       r4, 0x22C(r29)
	  addi      r5, r29, 0x230
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x48(r4)
	  bl        0x9631C

	.loc_0xC0:
	  addi      r24, r24, 0x1

	.loc_0xC4:
	  lhz       r0, 0x0(r25)
	  cmpw      r24, r0
	  blt+      .loc_0x2C
	  lbz       r0, 0x274(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x138
	  lwz       r28, -0x6B00(r13)
	  addi      r24, r30, 0x14
	  li        r25, 0
	  b         .loc_0x12C

	.loc_0xEC:
	  mr        r3, r28
	  mr        r4, r25
	  bl        0x1970C
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lwz       r27, 0x170(r3)
	  mr        r3, r24
	  mr        r4, r25
	  bl        0x92D6C
	  lbz       r0, 0x0(r3)
	  lwz       r3, -0x6B70(r13)
	  mullw     r4, r0, r27
	  lwz       r0, 0xE8(r3)
	  add       r0, r0, r4
	  stw       r0, 0xE8(r3)

	.loc_0x128:
	  addi      r25, r25, 0x1

	.loc_0x12C:
	  lhz       r0, 0x0(r24)
	  cmpw      r25, r0
	  blt+      .loc_0xEC

	.loc_0x138:
	  lwz       r28, -0x6AD8(r13)
	  addi      r24, r30, 0xC
	  li        r25, 0
	  b         .loc_0x1E0

	.loc_0x148:
	  mr        r3, r28
	  mr        r4, r25
	  bl        0x196B0
	  mr.       r30, r3
	  beq-      .loc_0x1DC
	  lwz       r27, 0x170(r30)
	  mr        r3, r24
	  mr        r4, r25
	  bl        0x92D10
	  lbz       r0, 0x0(r3)
	  mr        r3, r24
	  lwz       r5, -0x6B70(r13)
	  mr        r4, r25
	  mullw     r6, r0, r27
	  lwz       r0, 0xE8(r5)
	  add       r0, r0, r6
	  stw       r0, 0xE8(r5)
	  bl        0x92CEC
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1DC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r28
	  mr        r5, r25
	  bl        0x94E64
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x1DC
	  lwz       r4, 0x180(r30)
	  subi      r3, r2, 0x5DA0
	  bl        -0x88084
	  cmpwi     r3, 0
	  bne-      .loc_0x1DC
	  lwz       r4, 0x22C(r29)
	  addi      r5, r29, 0x230
	  lwz       r3, -0x6B70(r13)
	  lwz       r4, 0x48(r4)
	  bl        0x96200

	.loc_0x1DC:
	  addi      r25, r25, 0x1

	.loc_0x1E0:
	  lhz       r0, 0x0(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x148
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80152788
 * Size:	000160
 */
void SingleGame::CaveDayEndState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r5, 0x3268
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, -0x64AC(r13)
	  bl        0x2DA0FC
	  lwz       r0, 0xD8(r30)
	  lfs       f0, -0x5D9C(r2)
	  stw       r0, 0x18(r30)
	  stfs      f0, 0x10(r29)
	  lwz       r3, 0xD8(r30)
	  lfs       f1, 0x10(r29)
	  bl        0x2D9598
	  lwz       r3, -0x6C18(r13)
	  addi      r5, r31, 0x7C
	  li        r4, 0x1
	  li        r6, 0x3
	  bl        0x627B0
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x1281C4

	.loc_0x80:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xA0
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x1281E4

	.loc_0xA0:
	  cmplwi    r30, 0
	  beq-      .loc_0x144
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x12820C

	.loc_0xC8:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xE8
	  addi      r3, r31, 0x20
	  addi      r5, r31, 0x2C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x12822C

	.loc_0xE8:
	  lwz       r0, 0x4(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  addi      r3, r31, 0x38
	  addi      r5, r31, 0x2C
	  li        r4, 0xC7
	  crclr     6, 0x6
	  bl        -0x12824C

	.loc_0x108:
	  lwz       r3, 0x4(r30)
	  lwz       r30, 0x4(r3)
	  cmplwi    r30, 0
	  beq-      .loc_0x144
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x10(r29)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x90D64
	  lwz       r12, 0x0(r30)
	  mr        r4, r3
	  mr        r3, r30
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x144:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801528E8
 * Size:	0000B4
 */
void SingleGame::CaveDayEndState::exec(Game::SingleGameSection*)
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
	bl       doUpdate__Q24Game15BaseGameSectionFv
	mr       r3, r31
	bl       updateCaveScreen__Q24Game17SingleGameSectionFv
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x10(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805185C8@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x10(r30)
	lfs      f1, 0x10(r30)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80152984
	mr       r3, r31
	bl       advanceDayCount__Q24Game15BaseGameSectionFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	bl       setStartTime__Q24Game7TimeMgrFv
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80152984:
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
 * Address:	8015299C
 * Size:	000030
 */
// void transit__Q24Game36FSMState<Game::SingleGameSection> FPQ24Game17SingleGameSectioniPQ24Game8StateArg(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801529CC
 * Size:	00003C
 */
void SingleGame::CaveDayEndState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	mr       r4, r5
	bl       doDraw__Q24Game15BaseGameSectionFR8Graphics
	mr       r3, r31
	bl       drawCaveScreen__Q24Game17SingleGameSectionFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152A08
 * Size:	000034
 */
void SingleGame::CaveDayEndState::cleanup(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8047CE14@ha
	li       r6, 3
	stw      r0, 0x14(r1)
	addi     r5, r4, lbl_8047CE14@l
	li       r4, 0
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152A3C
 * Size:	0000E0
 */
SingleGameSection::SingleGameSection(JKRHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       __ct__Q24Game15BaseGameSectionFP7JKRHeap
	lis      r3, __vt__Q24Game17SingleGameSection@ha
	li       r0, 0
	addi     r4, r3, __vt__Q24Game17SingleGameSection@l
	addi     r3, r31, 0x1b8
	stw      r4, 0(r31)
	stb      r0, 0x180(r31)
	bl       __ct__16DvdThreadCommandFv
	addi     r3, r31, 0x230
	bl       __ct__4ID32Fv
	addi     r3, r31, 0x254
	bl       __ct__Q24Game11KindCounterFv
	addi     r3, r31, 0x25c
	bl       __ct__Q24Game11KindCounterFv
	addi     r3, r31, 0x264
	bl       __ct__Q24Game11KindCounterFv
	addi     r3, r31, 0x26c
	bl       __ct__Q24Game11KindCounterFv
	li       r0, 2
	li       r3, 0x14
	stw      r0, 0x114(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80152AF8
	lis      r4, lbl_804B107C@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804B107C@l
	lis      r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@l
	lwz      r4, 8(r8)
	stw      r7, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r31, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x10(r3)

lbl_80152AF8:
	stw      r3, 0x240(r31)
	mr       r3, r31
	bl       newCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152B1C
 * Size:	000034
 */
void SingleGameSection::section_fadeout(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x250(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
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
 * Address:	80152B50
 * Size:	000004
 */
void SingleGame::State::on_section_fadeout(Game::SingleGameSection*) { }

/*
 * --INFO--
 * Address:	80152B54
 * Size:	00000C
 */
void SingleGameSection::flow_goto_title(void)
{
	// Generated from stb r0, 0x1B5(r3)
	_1B5 = 1;
}

/*
 * --INFO--
 * Address:	80152B60
 * Size:	000188
 */
void SingleGameSection::onInit(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stb      r0, 0x228(r3)
	lis      r3, lbl_8047CD98@ha
	addi     r31, r3, lbl_8047CD98@l
	lwz      r4, gameSystem__4Game@sda21(r13)
	addi     r3, r31, 0x88
	stw      r0, 0x44(r4)
	bl       assert_fragmentation__6SystemFPc
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x244(r30)
	stb      r0, 0x194(r30)
	bl       clearCaveMenus__Q24Game17SingleGameSectionFv
	li       r0, 0
	li       r3, 0x14
	stb      r0, 0x11c(r30)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80152C0C
	lis      r4, lbl_804B1088@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804B1088@l
	lis      r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@l
	lwz      r4, 8(r8)
	stw      r7, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r30, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x10(r3)

lbl_80152C0C:
	stw      r3, 0x224(r30)
	li       r3, 0x1c
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80152C40
	lis      r5, "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>"@ha
	lis      r4, __vt__Q34Game10SingleGame3FSM@ha
	addi     r0, r5, "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>"@l
	li       r5, -1
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q34Game10SingleGame3FSM@l
	stw      r5, 0x18(r3)
	stw      r0, 0(r3)

lbl_80152C40:
	stw      r3, 0x24c(r30)
	mr       r4, r30
	lwz      r3, 0x24c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x24c(r30)
	mr       r4, r30
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x94
	bl       assert_fragmentation__6SystemFPc
	mr       r3, r30
	bl       setupFixMemory__Q24Game15BaseGameSectionFv
	addi     r3, r31, 0xa0
	bl       assert_fragmentation__6SystemFPc
	li       r0, 0
	li       r3, 0x5c
	stb      r0, 0x1b5(r30)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80152CB4
	bl       __ct__Q25Radar3MgrFv
	mr       r0, r3

lbl_80152CB4:
	stw      r0, mgr__5Radar@sda21(r13)
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152CE8
 * Size:	000034
 */
// void start__Q24Game40StateMachine<Game::SingleGameSection> FPQ24Game17SingleGameSectioniPQ24Game8StateArg(void)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  stw       r0, 0x250(r4)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80152D1C
 * Size:	0000EC
 */
void SingleGameSection::doUpdate(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x1b5(r3)
	cmplwi   r0, 0
	bne      lbl_80152DDC
	lwz      r3, 0x24c(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_80152DDC
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80152DDC
	lbz      r0, 0x178(r31)
	cmplwi   r0, 0
	beq      lbl_80152DDC
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80152DDC
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80152DDC
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x174(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_805185C8@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x174(r31)
	lfs      f1, 0x174(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80152DDC
	lwz      r3, 0x250(r31)
	mr       r4, r31
	lwz      r5, 0x17c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_80152DDC:
	lbz      r0, 0x1b5(r31)
	cmplwi   r0, 0
	beq      lbl_80152DF0
	li       r0, 0
	stb      r0, 0x34(r31)

lbl_80152DF0:
	lwz      r0, 0x14(r1)
	lbz      r3, 0x34(r31)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152E08
 * Size:	000004
 */
void SingleGame::State::on_demo_timer(Game::SingleGameSection*, unsigned long) { }

/*
 * --INFO--
 * Address:	80152E0C
 * Size:	000050
 */
void SingleGameSection::doDraw(Graphics& gfx)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	lbz      r0, 0x1b5(r3)
	cmplwi   r0, 0
	bne      lbl_80152E4C
	lwz      r3, 0x250(r6)
	cmplwi   r3, 0
	beq      lbl_80152E4C
	lwz      r12, 0(r3)
	mr       r4, r6
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_80152E4C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152E5C
 * Size:	00005C
 */
void SingleGameSection::on_setCamController(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x244(r3)
	cmplwi   r0, 0
	beq      lbl_80152EA4
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	beq      lbl_80152EA4
	lwz      r12, 0(r3)
	lwz      r12, 0x100(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x244(r31)
	stw      r3, 0x10(r4)

lbl_80152EA4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80152EB8
 * Size:	000260
 */
void SingleGameSection::onSetSoundScene(void)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r3
	lis      r3, lbl_8047CD98@ha
	lbz      r0, 0x23c(r30)
	addi     r31, r3, lbl_8047CD98@l
	cmplwi   r0, 0
	beq      lbl_80152FE4
	addi     r3, r1, 0x40
	bl       __ct__Q26PSGame9SceneInfoFv
	lis      r4, __vt__Q26PSGame13CaveFloorInfo@ha
	lis      r3, 0x0000FFFF@ha
	li       r5, 0
	li       r0, 0xff
	addi     r6, r4, __vt__Q26PSGame13CaveFloorInfo@l
	addi     r4, r3, 0x0000FFFF@l
	stw      r6, 0x40(r1)
	mr       r3, r30
	lwz      r6, mapMgr__4Game@sda21(r13)
	stw      r5, 0x78(r1)
	stw      r5, 0x7c(r1)
	stb      r5, 0x80(r1)
	stw      r4, 0x84(r1)
	stb      r0, 0x88(r1)
	stb      r0, 0x89(r1)
	lwz      r4, 0x2c(r6)
	lwz      r5, 0x30(r6)
	lwz      r0, 0x22c(r4)
	stw      r0, 0x78(r1)
	lwz      r0, 0x250(r4)
	stw      r0, 0x7c(r1)
	stb      r5, 0x80(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x84(r1)
	mr       r3, r30
	addi     r4, r1, 0x40
	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo addi
r3, r1, 0x40 li       r4, 0 li       r5, 1 bl
setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
	lwz      r3, 0x22c(r30)
	lwz      r0, 0x48(r3)
	cmpwi    r0, 4
	blt      lbl_80152F98
	addi     r3, r31, 0xb0
	addi     r5, r31, 0x2c
	li       r4, 0x485
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80152F98:
	lwz      r3, 0x22c(r30)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r3, 0x48(r3)
	cmplwi   r0, 0
	addi     r0, r3, 1
	stb      r0, 0x46(r1)
	bne      lbl_80152FC8
	addi     r3, r31, 0x20
	addi     r5, r31, 0x2c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80152FC8:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 0x40
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_8015308C

lbl_80152FE4:
	addi     r3, r1, 8
	bl       __ct__Q26PSGame9SceneInfoFv
	mr       r3, r30
	addi     r4, r1, 8
	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo addi
r3, r1, 8 li       r4, 0 li       r5, 1 bl
setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
	lwz      r3, 0x22c(r30)
	lwz      r4, 0x48(r3)
	cmpwi    r4, 4
	blt      lbl_80153024
	li       r0, 1
	stb      r0, 0xe(r1)
	b        lbl_80153054

lbl_80153024:
	cmpwi    r4, 0
	bne      lbl_8015304C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplwi   r0, 0
	bne      lbl_8015304C
	li       r0, 0x14
	stb      r0, 0xe(r1)
	b        lbl_80153054

lbl_8015304C:
	addi     r0, r4, 1
	stb      r0, 0xe(r1)

lbl_80153054:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80153074
	addi     r3, r31, 0x20
	addi     r5, r31, 0x2c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80153074:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8015308C:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801530AC
	addi     r3, r31, 0x20
	addi     r5, r31, 0x2c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801530AC:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_801530D0
	addi     r3, r31, 0x38
	addi     r5, r31, 0x2c
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801530D0:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_80153100
	li       r3, 0
	bl       PSSetCurCameraNo__FUc

lbl_80153100:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153118
 * Size:	000008
 */
void SingleGameSection::getCaveID(void)
{
	/*
	lwz      r3, 0x238(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153120
 * Size:	0002A0
 */
void SingleGameSection::onSetupFloatMemory(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x23c(r3)
	cmplwi   r0, 0
	bne      lbl_80153348
	lwz      r0, 0x22c(r31)
	cmplwi   r0, 0
	bne      lbl_80153168
	lis      r3, lbl_8047CE48@ha
	lis      r5, lbl_8047CDC4@ha
	addi     r3, r3, lbl_8047CE48@l
	li       r4, 0x4ec
	addi     r5, r5, lbl_8047CDC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80153168:
	lwz      r3, 0x22c(r31)
	lwz      r0, 0x48(r3)
	cmpwi    r0, 2
	beq      lbl_8015333C
	bge      lbl_8015318C
	cmpwi    r0, 0
	beq      lbl_80153198
	bge      lbl_80153224
	b        lbl_8015333C

lbl_8015318C:
	cmpwi    r0, 4
	bge      lbl_8015333C
	b        lbl_801532B0

lbl_80153198:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8015321C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx13TTutorialSnow@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx13TTutorialSnow@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x272
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_8015321C:
	stw      r3, 0x244(r31)
	b        lbl_80153350

lbl_80153224:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801532A8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx13TForestSakura@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx13TForestSakura@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x5b
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_801532A8:
	stw      r3, 0x244(r31)
	b        lbl_80153350

lbl_801532B0:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80153334
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx11TLastMomiji@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx11TLastMomiji@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x27c
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80153334:
	stw      r3, 0x244(r31)
	b        lbl_80153350

lbl_8015333C:
	li       r0, 0
	stw      r0, 0x244(r31)
	b        lbl_80153350

lbl_80153348:
	li       r0, 0
	stw      r0, farmMgr__Q24Game4Farm@sda21(r13)

lbl_80153350:
	lbz      r0, 0x23c(r31)
	cmplwi   r0, 0
	bne      lbl_801533AC
	lwz      r3, 0x22c(r31)
	li       r4, 0
	bl       createMapMgr__Q24Game6StagesFPQ24Game10CourseInfoPQ24Game8RouteMgr
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80153378
	lwz      r4, 0(r4)

lbl_80153378:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801533AC
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801533A4
	addi     r4, r4, 4

lbl_801533A4:
	mr       r3, r31
	bl       addGenNode__Q24Game14BaseHIOSectionFP5CNode

lbl_801533AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801533C0
 * Size:	000050
 */
void SingleGameSection::onClearHeap(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, farmMgr__Q24Game4Farm@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801533FC
	addi     r3, r4, 4
	bl       del__5CNodeFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, farmMgr__Q24Game4Farm@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	li       r0, 0
	stw      r0, 0x244(r31)

lbl_801533FC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153410
 * Size:	00000C
 */
void SingleGameSection::onStartHeap(void)
{
	// Generated from stb r0, 0x194(r3)
	_194 = 0;
}

/*
 * --INFO--
 * Address:	8015341C
 * Size:	000044
 */
void SingleGameSection::gmOrimaDown(int naviID)
{
	if (m_currentState) {
		m_currentState->onOrimaDown(this, naviID);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	lwz      r3, 0x250(r3)
	cmplwi   r3, 0
	beq      lbl_80153450
	lwz      r12, 0(r3)
	mr       r4, r6
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_80153450:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153460
 * Size:	000004
 */
void SingleGame::State::onOrimaDown(Game::SingleGameSection*, int) { }

/*
 * --INFO--
 * Address:	80153464
 * Size:	000004
 */
void SingleGameSection::gmPikminZero(void) { }

/*
 * --INFO--
 * Address:	80153468
 * Size:	000020
 */
void SingleGameSection::enableTimer(float initialValue, unsigned long timerType)
{
	if (timerType != 0) {
		return;
	}
	m_timerType    = timerType;
	m_timer        = initialValue;
	m_timerEnabled = true;
	/*
	lwz      r0, 0x17c(r3)
	cmplwi   r0, 0
	bnelr
	stw      r4, 0x17c(r3)
	li       r0, 1
	stfs     f1, 0x174(r3)
	stb      r0, 0x178(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153488
 * Size:	000080
 */
void SingleGameSection::disableTimer(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bne      lbl_801534B4
	li       r0, 0
	stb      r0, 0x178(r31)
	stw      r0, 0x17c(r31)
	b        lbl_801534F4

lbl_801534B4:
	lwz      r6, 0x17c(r31)
	cmplwi   r6, 0
	beq      lbl_801534E8
	cmplw    r4, r6
	beq      lbl_801534E8
	lis      r3, lbl_8047CE48@ha
	lis      r5, lbl_8047CE60@ha
	mr       r7, r4
	li       r4, 0x551
	addi     r3, r3, lbl_8047CE48@l
	addi     r5, r5, lbl_8047CE60@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801534E8:
	li       r0, 0
	stb      r0, 0x178(r31)
	stw      r0, 0x17c(r31)

lbl_801534F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153508
 * Size:	000054
 */
void SingleGameSection::onMovieStart(Game::MovieConfig* config, unsigned long p2, unsigned long p3)
{
	if (m_currentState) {
		m_currentState->onMovieStart(this, config, p2, p3);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r3
	  mr        r8, r4
	  stw       r0, 0x14(r1)
	  mr        r0, r5
	  mr        r7, r6
	  lwz       r3, 0x250(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  mr        r4, r9
	  mr        r5, r8
	  mr        r6, r0
	  lwz       r12, 0x28(r12)
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
 * Address:	8015355C
 * Size:	000004
 */
void SingleGame::State::onMovieStart(Game::SingleGameSection*, Game::MovieConfig*, unsigned long, unsigned long) { }

/*
 * --INFO--
 * Address:	80153560
 * Size:	000064
 */
void SingleGameSection::onMovieDone(Game::MovieConfig* config, unsigned long p2, unsigned long p3)
{
	gameSystem->m_flags &= 0xF7;
	if (m_currentState) {
		m_currentState->onMovieDone(this, config, p2, p3);
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r11, r3
	  mr        r10, r4
	  stw       r0, 0x14(r1)
	  mr        r9, r5
	  mr        r7, r6
	  lwz       r8, -0x6C18(r13)
	  lbz       r0, 0x3C(r8)
	  rlwinm    r0,r0,0,29,27
	  stb       r0, 0x3C(r8)
	  lwz       r3, 0x250(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  mr        r4, r11
	  mr        r5, r10
	  mr        r6, r9
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801535C4
 * Size:	000004
 */
void SingleGame::State::onMovieDone(Game::SingleGameSection*, Game::MovieConfig*, unsigned long, unsigned long) { }

/*
 * --INFO--
 * Address:	801535C8
 * Size:	00005C
 */
void SingleGameSection::onMovieCommand(int p1)
{
	BaseGameSection::onMovieCommand(p1);
	if (m_currentState) {
		m_currentState->onMovieCommand(this, p1);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       onMovieCommand__Q24Game15BaseGameSectionFi
	lwz      r3, 0x250(r30)
	cmplwi   r3, 0
	beq      lbl_8015360C
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_8015360C:
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
 * Address:	80153624
 * Size:	000004
 */
void SingleGame::State::onMovieCommand(Game::SingleGameSection*, int) { }

/*
 * --INFO--
 * Address:	80153628
 * Size:	000240
 */
void SingleGameSection::playMovie_bootup(Game::Onyon*)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	lis      r5, lbl_8047CD98@ha
	stw      r0, 0xd4(r1)
	addi     r5, r5, lbl_8047CD98@l
	stw      r31, 0xcc(r1)
	mr       r31, r4
	lhz      r0, 0x22e(r4)
	cmpwi    r0, 1
	beq      lbl_8015366C
	bge      lbl_80153660
	cmpwi    r0, 0
	bge      lbl_801537B4
	b        lbl_80153854

lbl_80153660:
	cmpwi    r0, 3
	bge      lbl_80153854
	b        lbl_80153710

lbl_8015366C:
	lwz      r6, 0xc8(r3)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r5, 0xec
	stw      r3, 0x94(r1)
	addi     r3, r1, 0x20
	stw      r0, 0x98(r1)
	stw      r6, 0xa0(r1)
	stfs     f0, 0xac(r1)
	stfs     f0, 0xb0(r1)
	stfs     f0, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	stw      r0, 0xbc(r1)
	stw      r0, 0xa4(r1)
	stw      r0, 0x9c(r1)
	stw      r0, 0xc0(r1)
	stw      r0, 0xa8(r1)
	stw      r0, 0xc4(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r31
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0xac(r1)
	stfs     f1, 0xb0(r1)
	stfs     f0, 0xb4(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xb8(r1)
	addi     r4, r1, 0x94
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x22e(r31)
	bl       setBootContainer__Q24Game8PlayDataFi
	b        lbl_80153854

lbl_80153710:
	lwz      r6, 0xc8(r3)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r5, 0xfc
	stw      r3, 0x60(r1)
	addi     r3, r1, 0x14
	stw      r0, 0x64(r1)
	stw      r6, 0x6c(r1)
	stfs     f0, 0x78(r1)
	stfs     f0, 0x7c(r1)
	stfs     f0, 0x80(r1)
	stfs     f0, 0x84(r1)
	stw      r0, 0x88(r1)
	stw      r0, 0x70(r1)
	stw      r0, 0x68(r1)
	stw      r0, 0x8c(r1)
	stw      r0, 0x74(r1)
	stw      r0, 0x90(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r3, r31
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x78(r1)
	stfs     f1, 0x7c(r1)
	stfs     f0, 0x80(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x84(r1)
	addi     r4, r1, 0x60
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x22e(r31)
	bl       setBootContainer__Q24Game8PlayDataFi
	b        lbl_80153854

lbl_801537B4:
	lwz      r6, 0xc8(r3)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r5, 0x10c
	stw      r3, 0x2c(r1)
	addi     r3, r1, 8
	stw      r0, 0x30(r1)
	stw      r6, 0x38(r1)
	stfs     f0, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x58(r1)
	stw      r0, 0x40(r1)
	stw      r0, 0x5c(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x50(r1)
	addi     r4, r1, 0x2c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x22e(r31)
	bl       setBootContainer__Q24Game8PlayDataFi

lbl_80153854:
	lwz      r0, 0xd4(r1)
	lwz      r31, 0xcc(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153868
 * Size:	000008
 */
void Onyon::getFaceDir(void)
{
	/*
	lfs      f1, 0x228(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153870
 * Size:	000454
 */
void SingleGameSection::playMovie_helloPikmin(Game::Piki* p)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	lis      r5, lbl_8047CD98@ha
	stw      r0, 0x164(r1)
	stw      r31, 0x15c(r1)
	mr       r31, r4
	stw      r30, 0x158(r1)
	addi     r30, r5, lbl_8047CD98@l
	stw      r29, 0x154(r1)
	stw      r28, 0x150(r1)
	mr       r28, r3
	lbz      r0, 0x2b8(r4)
	cmpwi    r0, 2
	beq      lbl_801539C8
	bge      lbl_801538BC
	cmpwi    r0, 0
	beq      lbl_80153A80
	bge      lbl_801538CC
	b        lbl_80153CA4

lbl_801538BC:
	cmpwi    r0, 4
	beq      lbl_80153BF0
	bge      lbl_80153CA4
	b        lbl_80153B38

lbl_801538CC:
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r30, 0x11c
	stw      r3, 0x114(r1)
	li       r4, 1
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	stw      r0, 0x118(r1)
	stw      r5, 0x120(r1)
	stfs     f0, 0x12c(r1)
	stfs     f0, 0x130(r1)
	stfs     f0, 0x134(r1)
	stfs     f0, 0x138(r1)
	stw      r0, 0x13c(r1)
	stw      r0, 0x124(r1)
	stw      r0, 0x11c(r1)
	stw      r0, 0x140(r1)
	stw      r0, 0x128(r1)
	stw      r0, 0x144(r1)
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	or.      r29, r3, r3
	bne      lbl_80153938
	addi     r3, r30, 0xb0
	addi     r5, r30, 0x130
	li       r4, 0x5c9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80153938:
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x38(r1)
	mr       r3, r29
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	stfs     f2, 0x12c(r1)
	stfs     f1, 0x130(r1)
	stfs     f0, 0x134(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x138(r1)
	addi     r4, r1, 0x114
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setMeetPikmin__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setContainer__Q24Game8PlayDataFi
	mr       r3, r28
	li       r4, 1
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	b        lbl_80153CA4

lbl_801539C8:
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r30, 0x140
	stw      r3, 0xe0(r1)
	addi     r3, r1, 0x2c
	stw      r0, 0xe4(r1)
	stw      r5, 0xec(r1)
	stfs     f0, 0xf8(r1)
	stfs     f0, 0xfc(r1)
	stfs     f0, 0x100(r1)
	stfs     f0, 0x104(r1)
	stw      r0, 0x108(r1)
	stw      r0, 0xf0(r1)
	stw      r0, 0xe8(r1)
	stw      r0, 0x10c(r1)
	stw      r0, 0xf4(r1)
	stw      r0, 0x110(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x2c(r1)
	mr       r3, r31
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	stfs     f2, 0xf8(r1)
	stfs     f1, 0xfc(r1)
	stfs     f0, 0x100(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x104(r1)
	addi     r4, r1, 0xe0
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setMeetPikmin__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setContainer__Q24Game8PlayDataFi
	b        lbl_80153CA4

lbl_80153A80:
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r30, 0x158
	stw      r3, 0xac(r1)
	addi     r3, r1, 0x20
	stw      r0, 0xb0(r1)
	stw      r5, 0xb8(r1)
	stfs     f0, 0xc4(r1)
	stfs     f0, 0xc8(r1)
	stfs     f0, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	stw      r0, 0xd4(r1)
	stw      r0, 0xbc(r1)
	stw      r0, 0xb4(r1)
	stw      r0, 0xd8(r1)
	stw      r0, 0xc0(r1)
	stw      r0, 0xdc(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r31
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0xc4(r1)
	stfs     f1, 0xc8(r1)
	stfs     f0, 0xcc(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xd0(r1)
	addi     r4, r1, 0xac
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setMeetPikmin__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setContainer__Q24Game8PlayDataFi
	b        lbl_80153CA4

lbl_80153B38:
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r30, 0x16c
	stw      r3, 0x78(r1)
	addi     r3, r1, 0x14
	stw      r0, 0x7c(r1)
	stw      r5, 0x84(r1)
	stfs     f0, 0x90(r1)
	stfs     f0, 0x94(r1)
	stfs     f0, 0x98(r1)
	stfs     f0, 0x9c(r1)
	stw      r0, 0xa0(r1)
	stw      r0, 0x88(r1)
	stw      r0, 0x80(r1)
	stw      r0, 0xa4(r1)
	stw      r0, 0x8c(r1)
	stw      r0, 0xa8(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r3, r31
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stfs     f0, 0x98(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x9c(r1)
	addi     r4, r1, 0x78
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setMeetPikmin__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setContainer__Q24Game8PlayDataFi
	b        lbl_80153CA4

lbl_80153BF0:
	lwz      r5, 0xc8(r28)
	li       r0, 0
	lfs      f0, lbl_805185C8@sda21(r2)
	addi     r3, r30, 0x184
	stw      r3, 0x44(r1)
	addi     r3, r1, 8
	stw      r0, 0x48(r1)
	stw      r5, 0x50(r1)
	stfs     f0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	stfs     f0, 0x64(r1)
	stfs     f0, 0x68(r1)
	stw      r0, 0x6c(r1)
	stw      r0, 0x54(r1)
	stw      r0, 0x4c(r1)
	stw      r0, 0x70(r1)
	stw      r0, 0x58(r1)
	stw      r0, 0x74(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x68(r1)
	addi     r4, r1, 0x44
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setMeetPikmin__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setContainer__Q24Game8PlayDataFi

lbl_80153CA4:
	lwz      r0, 0x164(r1)
	lwz      r31, 0x15c(r1)
	lwz      r30, 0x158(r1)
	lwz      r29, 0x154(r1)
	lwz      r28, 0x150(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153CC4
 * Size:	000004
 */
void SingleGameSection::playMovie_firstexperience(int, Game::Creature*) { }

/*
 * --INFO--
 * Address:	80153CC8
 * Size:	0002A0
 */
void SingleGameSection::saveMainMapSituation(bool isSubmergedCastle)
{
	if (isSubmergedCastle) {
		Iterator<Piki> iterator(pikiMgr, 0, nullptr);
		iterator.first();
		while (!iterator.isDone()) {
			Piki* piki = (*iterator);
			if (piki->isAlive() && piki->m_pikiKind != Blue) {
				playData->m_pikiContainer.getCount(piki->m_pikiKind, piki->m_happaKind)++;
				PikiKillArg killArg(0x10001);
				piki->kill(&pikiKillArg);
			}
			iterator.next();
		}
	}
	pikiMgr->caveSaveFormationPikmins(false);
	pikiMgr->forceEnterPikmins(1);
	playData->m_caveSaveData.m_time = gameSystem->m_timeMgr->m_currentTimeOfDay;
	saveToGeneratorCache(m_currentCourseInfo);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	beq      lbl_80153F18
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x10(r1)
	stw      r0, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_80153D28
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80153EF8

lbl_80153D28:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80153D94

lbl_80153D40:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80153EF8
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80153D94:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80153D40
	b        lbl_80153EF8

lbl_80153DB4:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80153E3C
	lbz      r4, 0x2b8(r30)
	cmpwi    r4, 0
	beq      lbl_80153E3C
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r5, 0x2b9(r30)
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r7, 0(r3)
	lis      r6, __vt__Q24Game15CreatureKillArg@ha
	lis      r5, 0x00010001@ha
	lis      r4, __vt__Q24Game11PikiKillArg@ha
	addi     r0, r7, 1
	addi     r6, r6, __vt__Q24Game15CreatureKillArg@l
	stw      r0, 0(r3)
	addi     r5, r5, 0x00010001@l
	addi     r0, r4, __vt__Q24Game11PikiKillArg@l
	mr       r3, r30
	stw      r6, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80153E3C:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_80153E68
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80153EF8

lbl_80153E68:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80153EDC

lbl_80153E88:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80153EF8
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80153EDC:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80153E88

lbl_80153EF8:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80153DB4

lbl_80153F18:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       caveSaveFormationPikmins__Q24Game7PikiMgrFb
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 1
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc
	lwz      r5, gameSystem__4Game@sda21(r13)
	mr       r3, r31
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r5, 0x40(r5)
	lfs      f0, 0x20c(r5)
	stfs     f0, 0x68(r4)
	lwz      r4, 0x22c(r31)
	bl       saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153F68
 * Size:	000030
 */
void SingleGameSection::loadMainMapSituation()
{
	gameSystem->m_timeMgr->setTime(playData->m_caveSaveData.m_time);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lfs      f1, 0x68(r4)
	bl       setTime__Q24Game7TimeMgrFf
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153F98
 * Size:	000018
 */
void SingleGameSection::clearCaveMenus()
{
	_180          = 0;
	m_currentCave = nullptr;
	m_hole        = nullptr;
	m_fountain    = nullptr;
	/*
	li       r0, 0
	stb      r0, 0x180(r3)
	stw      r0, 0x184(r3)
	stw      r0, 0x188(r3)
	stw      r0, 0x18c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80153FB0
 * Size:	000418
 */
void SingleGameSection::openCaveInMenu(Game::ItemCave::Item*, int)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r26, 0x48(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r29, r5
	li       r31, 0
	lwz      r4, 0x1f0(r4)
	addis    r0, r4, 0x86a1
	cmplwi   r0, 0x3034
	bne      lbl_80153FE4
	li       r31, 1

lbl_80153FE4:
	lbz      r0, 0x194(r27)
	cmplwi   r0, 0
	bne      lbl_801543B4
	lbz      r0, 0x180(r27)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_801543B4
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stw      r4, 0x190(r27)
	li       r8, 0
	li       r4, 1
	addi     r9, r3, __vt__Q32og6Screen14DispMemberBase@l
	stw      r8, 0x38(r1)
	lis      r7, __vt__Q32og6Screen17DispMemberAnaDemo@ha
	lis      r3, 0x745F3031@ha
	addi     r0, r3, 0x745F3031@l
	li       r6, 0x18
	li       r5, 0x45
	stw      r9, 0x18(r1)
	addi     r7, r7, __vt__Q32og6Screen17DispMemberAnaDemo@l
	mr       r3, r28
	stw      r8, 0x1c(r1)
	stw      r7, 0x18(r1)
	stw      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	stb      r4, 0x37(r1)
	stw      r4, 0x28(r1)
	stw      r4, 0x2c(r1)
	stw      r0, 0x30(r1)
	stb      r8, 0x34(r1)
	stb      r8, 0x35(r1)
	stw      r8, 0x38(r1)
	bl       getCaveOtakaraNum__Q34Game8ItemCave4ItemFv
	stw      r3, 0x20(r1)
	mr       r3, r28
	bl       getCaveOtakaraMax__Q34Game8ItemCave4ItemFv
	stw      r3, 0x24(r1)
	li       r3, -1
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r4)
	clrlwi   r0, r0, 0x1f
	stb      r0, 0x35(r1)
	bl       getMapPikmins__Q24Game8GameStatFi
	mr       r30, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	li       r4, 0
	lwz      r0, pikiMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	subf     r6, r3, r30
	addi     r3, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r4, 0
	stw      r6, 0x2c(r1)
	li       r30, 0
	stw      r3, 8(r1)
	stw      r4, 0x14(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	bne      lbl_801540E8
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801542D4

lbl_801540E8:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80154158

lbl_80154104:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801542D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80154158:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80154104
	b        lbl_801542D4

lbl_80154178:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x17c(r3)
	mr       r26, r3
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x17c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80154218
	mr       r3, r26
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_80154218
	mr       r3, r26
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 6
	beq      lbl_80154218
	cmpwi    r3, 0x12
	beq      lbl_80154218
	lwz      r3, 0x2c4(r26)
	cmplwi   r3, 0
	beq      lbl_80154218
	lhz      r0, 0x2dc(r3)
	cmpw     r29, r0
	bne      lbl_80154218
	clrlwi.  r0, r31, 0x18
	beq      lbl_80154208
	lbz      r0, 0x2b8(r26)
	cmpwi    r0, 0
	bne      lbl_80154218

lbl_80154208:
	lwz      r0, 0x17c(r26)
	addi     r30, r30, 1
	ori      r0, r0, 0x40
	stw      r0, 0x17c(r26)

lbl_80154218:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80154244
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801542D4

lbl_80154244:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801542B8

lbl_80154264:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801542D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801542B8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80154264

lbl_801542D4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80154178
	stw      r30, 0x28(r1)
	addi     r4, r1, 0x18
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r0, 0x190(r27)
	stw      r0, 0x30(r1)
	bl open_CaveInMenu__Q26Screen9Game2DMgrFRQ32og6Screen17DispMemberAnaDemo
	clrlwi.  r0, r3, 0x18
	beq      lbl_801543B4
	lwz      r5, playData__4Game@sda21(r13)
	li       r4, 3
	li       r0, 0
	mr       r3, r27
	stb      r4, 0x19(r5)
	stw      r0, 0x1c(r5)
	lwz      r12, 0(r27)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0x48(r4)
	bl       setCurrentCourse__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	addi     r4, r28, 0x1e8
	li       r5, 0
	bl       setCurrentCave__Q24Game8PlayDataFR4ID32i
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	addi     r4, r28, 0x1e8
	bl       getCaveinfoFilename_FromID__Q24Game10CourseInfoFR4ID32
	stw      r28, 0x184(r27)
	lis      r3, lbl_8047CF34@ha
	addi     r5, r3, lbl_8047CF34@l
	li       r4, 1
	lbz      r0, 0x180(r27)
	li       r6, 3
	ori      r0, r0, 1
	stb      r0, 0x180(r27)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lis      r4, lbl_8047CF34@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8047CF34@l
	li       r4, 1
	bl       setMoviePause__Q24Game10GameSystemFbPc

lbl_801543B4:
	lmw      r26, 0x48(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801543C8
 * Size:	000008
 */
CourseInfo* SingleGameSection::getCurrentCourseInfo()
{
	return m_currentCourseInfo;
	/*
	lwz      r3, 0x22c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801543D0
 * Size:	00019C
 */
void SingleGameSection::openCaveMoreMenu(Game::ItemHole::Item*, Controller*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	lbz      r0, 0x194(r3)
	cmplwi   r0, 0
	bne      lbl_80154550
	lbz      r0, 0x180(r30)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80154550
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
	lis      r4, 0x745F3031@ha
	lis      r3, __vt__Q32og6Screen18DispMemberCaveMore@ha
	addi     r6, r4, 0x745F3031@l
	stw      r5, 8(r1)
	addi     r5, r3, __vt__Q32og6Screen18DispMemberCaveMore@l
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
	stw      r9, 0x28(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	lwz      r0, 0x190(r30)
	stw      r0, 0x20(r1)
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	ble      lbl_801544E0
	li       r0, 1
	li       r3, -1
	stb      r0, 0x2c(r1)
	bl       getMapPikmins__Q24Game8GameStatFi
	cmpw     r29, r3
	bne      lbl_801544D4
	li       r0, 1
	stb      r0, 0x2d(r1)
	b        lbl_801544EC

lbl_801544D4:
	li       r0, 0
	stb      r0, 0x2d(r1)
	b        lbl_801544EC

lbl_801544E0:
	li       r0, 0
	stb      r0, 0x2d(r1)
	stb      r0, 0x2c(r1)

lbl_801544EC:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl open_CaveMoreMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberCaveMore
	clrlwi.  r0, r3, 0x18
	beq      lbl_80154550
	lwz      r6, playData__4Game@sda21(r13)
	li       r4, 3
	lis      r3, lbl_8047CF40@ha
	li       r0, 0
	stb      r4, 0x19(r6)
	addi     r5, r3, lbl_8047CF40@l
	li       r4, 1
	stw      r0, 0x1c(r6)
	li       r6, 3
	stw      r31, 0x188(r30)
	lbz      r0, 0x180(r30)
	ori      r0, r0, 2
	stb      r0, 0x180(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lis      r4, lbl_8047CF40@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_8047CF40@l
	li       r4, 1
	bl       setMoviePause__Q24Game10GameSystemFbPc

lbl_80154550:
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
 * Address:	8015456C
 * Size:	00002C
 */
void SingleGameSection::saveCaveMore()
{
	pikiMgr->caveSaveAllPikmins(false, false);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	bl       caveSaveAllPikmins__Q24Game7PikiMgrFbb
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80154598
 * Size:	000184
 */
void SingleGameSection::openKanketuMenu(Game::ItemBigFountain::Item*, Controller*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  stw       r29, 0x34(r1)
	  lbz       r0, 0x194(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x168
	  lbz       r0, 0x180(r30)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x168
	  lis       r3, 0x804B
	  li        r9, 0
	  addi      r0, r3, 0x1148
	  li        r7, 0x1
	  lis       r3, 0x804B
	  stw       r0, 0x8(r1)
	  addi      r5, r3, 0x1130
	  li        r0, 0x18
	  li        r8, 0x45
	  stw       r9, 0x28(r1)
	  lis       r3, 0x745F
	  lis       r4, 0x804B
	  addi      r6, r3, 0x3031
	  stw       r5, 0x8(r1)
	  addi      r5, r4, 0x1100
	  li        r4, 0x4
	  stw       r0, 0x10(r1)
	  li        r0, 0xA
	  lis       r3, 0x8051
	  stw       r8, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r9, 0xC(r1)
	  stb       r7, 0x27(r1)
	  stw       r7, 0x1C(r1)
	  stw       r6, 0x20(r1)
	  stb       r9, 0x24(r1)
	  stb       r9, 0x25(r1)
	  stw       r5, 0x8(r1)
	  stb       r9, 0x2C(r1)
	  stb       r9, 0x2D(r1)
	  stb       r9, 0x2E(r1)
	  stw       r9, 0x28(r1)
	  stw       r4, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lwzu      r12, 0x260C(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  ble-      .loc_0x10C
	  li        r0, 0x1
	  li        r3, -0x1
	  stb       r0, 0x2C(r1)
	  bl        0x7C7E0
	  cmpw      r29, r3
	  bne-      .loc_0x100
	  li        r0, 0x1
	  stb       r0, 0x2D(r1)
	  b         .loc_0x118

	.loc_0x100:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  b         .loc_0x118

	.loc_0x10C:
	  li        r0, 0
	  stb       r0, 0x2D(r1)
	  stb       r0, 0x2C(r1)

	.loc_0x118:
	  lwz       r3, -0x6560(r13)
	  addi      r4, r1, 0x8
	  bl        0x2A9714
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x168
	  stw       r31, 0x18C(r30)
	  lis       r3, 0x8048
	  subi      r5, r3, 0x30B0
	  li        r4, 0x1
	  lbz       r0, 0x180(r30)
	  li        r6, 0x3
	  ori       r0, r0, 0x4
	  stb       r0, 0x180(r30)
	  lwz       r3, -0x6C18(r13)
	  bl        0x608AC
	  lis       r4, 0x8048
	  lwz       r3, -0x6C18(r13)
	  subi      r5, r4, 0x30B0
	  li        r4, 0x1
	  bl        0x60888

	.loc_0x168:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8015471C
 * Size:	000300
 */
void SingleGameSection::updateCaveMenus(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8047CD98@ha
	stw      r30, 8(r1)
	addi     r30, r3, lbl_8047CD98@l
	lbz      r4, 0x180(r31)
	clrlwi.  r0, r4, 0x1f
	beq      lbl_80154838
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_CaveInMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_801547F0
	bge      lbl_8015476C
	cmpwi    r3, 0
	beq      lbl_80154A00
	bge      lbl_80154778
	b        lbl_80154A00

lbl_8015476C:
	cmpwi    r3, 4
	bge      lbl_80154A00
	b        lbl_80154824

lbl_80154778:
	lwz      r6, naviMgr__4Game@sda21(r13)
	addi     r5, r30, 0x1c4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	lwz      r7, 0xc8(r6)
	li       r6, 3
	lfs      f0, 0x9d0(r7)
	stfs     f0, 0x24(r3)
	lwz      r7, naviMgr__4Game@sda21(r13)
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r7, 0xc8(r7)
	lfs      f0, 0x9d0(r7)
	stfs     f0, 0x28(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0x1c4
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x180(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x180(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0x184(r31)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80154A04

lbl_801547F0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805185CC@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805185CC@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x180(r31)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x180(r31)
	b        lbl_80154A00

lbl_80154824:
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0x1d0
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	b        lbl_80154A00

lbl_80154838:
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_80154950
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_CaveMoreMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_80154908
	bge      lbl_80154864
	cmpwi    r3, 0
	beq      lbl_80154A00
	bge      lbl_80154870
	b        lbl_80154A00

lbl_80154864:
	cmpwi    r3, 4
	bge      lbl_80154A00
	b        lbl_8015493C

lbl_80154870:
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
	addi     r5, r30, 0x1dc
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	li       r6, 3
	stfs     f0, 0x28(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0x1dc
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x180(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x180(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0x188(r31)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80154A04

lbl_80154908:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805185D4@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805185D4@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x180(r31)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x180(r31)
	b        lbl_80154A00

lbl_8015493C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0x1e8
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	b        lbl_80154A00

lbl_80154950:
	rlwinm.  r0, r4, 0, 0x1d, 0x1d
	beq      lbl_80154A00
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_KanketuMenu__Q26Screen9Game2DMgrFv
	cmpwi    r3, 2
	beq      lbl_801549D0
	bge      lbl_80154A00
	cmpwi    r3, 0
	beq      lbl_80154A00
	bge      lbl_80154980
	b        lbl_80154A00
	b        lbl_80154A00

lbl_80154980:
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0x1f4
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r30, 0x1f4
	li       r4, 0
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x180(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stb      r0, 0x180(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0x18c(r31)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80154A04

lbl_801549D0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805185DC@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_805185DC@sda21
	bl       setMoviePause__Q24Game10GameSystemFbPc
	lbz      r0, 0x180(r31)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stb      r0, 0x180(r31)

lbl_80154A00:
	li       r3, 0

lbl_80154A04:
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
 * Address:	80154A1C
 * Size:	000040
 */
void SingleGameSection::goNextFloor(Game::ItemHole::Item* hole)
{
	_194 = true;
	m_currentState->onNextFloor(this, hole);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	mr       r4, r3
	stw      r0, 0x14(r1)
	li       r0, 1
	stb      r0, 0x194(r3)
	lwz      r3, 0x250(r3)
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
 * Address:	80154A5C
 * Size:	000004
 */
void SingleGame::State::onNextFloor(Game::SingleGameSection*, Game::ItemHole::Item*) { }

/*
 * --INFO--
 * Address:	80154A60
 * Size:	000074
 */
void SingleGameSection::goCave(Game::ItemCave::Item* cave)
{
	strcpy(m_caveFilename, cave->m_caveFilename);
	m_caveID->setID(cave->m_caveID.getID());
	_194     = true;
	m_inCave = true;
	m_currentState->onHoleIn(this, cave);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	addi     r3, r30, 0x195
	lwz      r4, 0x1e0(r4)
	bl       strcpy
	lwz      r4, 0x1f0(r31)
	addi     r3, r30, 0x230
	bl       setID__4ID32FUl
	li       r0, 1
	mr       r4, r30
	stb      r0, 0x194(r30)
	mr       r5, r31
	stb      r0, 0x23c(r30)
	lwz      r3, 0x250(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
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
 * Address:	80154AD4
 * Size:	000004
 */
void SingleGame::State::onHoleIn(Game::SingleGameSection*, Game::ItemCave::Item*) { }

/*
 * --INFO--
 * Address:	80154AD8
 * Size:	000048
 */
void SingleGameSection::goMainMap(Game::ItemBigFountain::Item* fountain)
{
	_194     = true;
	m_inCave = false;
	m_currentState->onFountainReturn(this, fountain);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r4
	mr       r4, r3
	stw      r0, 0x14(r1)
	li       r0, 1
	stb      r0, 0x194(r3)
	li       r0, 0
	stb      r0, 0x23c(r3)
	lwz      r3, 0x250(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
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
 * Address:	80154B20
 * Size:	000004
 */
void SingleGame::State::onFountainReturn(Game::SingleGameSection*, Game::ItemBigFountain::Item*) { }

/*
 * --INFO--
 * Address:	80154B24
 * Size:	000020
 */
void SingleGameSection::setupMainMapGames(void)
{
	createFallPikmins();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       createFallPikmins__Q24Game17SingleGameSectionFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80154B44
 * Size:	000020
 */
void SingleGameSection::setupCaveGames(void)
{
	createFallPikmins();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       createFallPikmins__Q24Game17SingleGameSectionFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80154B64
 * Size:	000474
 */
void SingleGameSection::createFallPikmins(void)
{
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stfd     f24, 0xd0(r1)
	psq_st   f24, 216(r1), 0, qr0
	stfd     f23, 0xc0(r1)
	psq_st   f23, 200(r1), 0, qr0
	stfd     f22, 0xb0(r1)
	psq_st   f22, 184(r1), 0, qr0
	stfd     f21, 0xa0(r1)
	psq_st   f21, 168(r1), 0, qr0
	stfd     f20, 0x90(r1)
	psq_st   f20, 152(r1), 0, qr0
	stmw     r26, 0x78(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x38
	li       r5, 0
	lwz      r12, 4(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r5, playData__4Game@sda21(r13)
	lis      r3, lbl_8047CF98@ha
	addi     r4, r3, lbl_8047CF98@l
	addi     r3, r5, 0x60
	bl       dump__Q24Game13PikiContainerFPc
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	bl       getAliveOrima__Q24Game7NaviMgrFi
	cmplwi   r3, 0
	beq      lbl_80154C48
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)

lbl_80154C48:
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r1, 0x38
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3c(r1)
	li       r4, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getDeadOrima__Q24Game7NaviMgrFi
	lis      r3, sincosTable___5JMath@ha
	lfd      f22, lbl_80518610@sda21(r2)
	lfs      f23, lbl_805185E4@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	lfs      f24, lbl_805185EC@sda21(r2)
	li       r29, 0
	lfs      f25, lbl_805185E8@sda21(r2)
	lis      r30, 0x4330
	lfs      f26, lbl_805185F0@sda21(r2)
	lfs      f27, lbl_805185F4@sda21(r2)
	lfs      f28, lbl_805185FC@sda21(r2)
	lfs      f29, lbl_805185F8@sda21(r2)
	lfs      f30, lbl_805185C8@sda21(r2)
	lfs      f31, lbl_80518600@sda21(r2)

lbl_80154CA8:
	li       r28, 0

lbl_80154CAC:
	li       r27, 0
	b        lbl_80154F20

lbl_80154CB4:
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
	bge      lbl_80154D28
	fneg     f1, f20

lbl_80154D28:
	fmuls    f0, f1, f31
	fcmpo    cr0, f20, f30
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f1, f21, f0
	bge      lbl_80154D7C
	lfs      f0, lbl_80518604@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f20, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80154D9C

lbl_80154D7C:
	fmuls    f0, f20, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80154D9C:
	fmuls    f0, f21, f0
	li       r0, 2
	stfs     f2, 0x30(r1)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x34(r1)
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	li       r6, 0
	lfs      f0, 0x38(r1)
	or.      r26, r3, r3
	lfs      f3, 0x30(r1)
	fadds    f4, f1, f0
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x34(r1)
	lfs      f0, 0x40(r1)
	fadds    f2, f3, f2
	stw      r6, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	fadds    f0, f1, f0
	stfs     f4, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	beq      lbl_80154EFC
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r5, r5, __vt__Q24Game15CreatureInitArg@l
	li       r0, 0xf
	stw      r5, 0x20(r1)
	addi     r5, r4, __vt__Q24Game11PikiInitArg@l
	addi     r4, r1, 0x20
	stw      r5, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r6, 0x28(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r26
	addi     r4, r1, 0x2c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x74(r1)
	mr       r3, r26
	lfd      f3, lbl_80518610@sda21(r2)
	mr       r4, r29
	stw      r0, 0x70(r1)
	lfs      f1, lbl_805185E4@sda21(r2)
	lfd      f2, 0x70(r1)
	lfs      f0, lbl_805185F0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1fc(r26)
	bl       changeShape__Q24Game4PikiFi
	mr       r3, r26
	mr       r4, r28
	bl       changeHappa__Q24Game4PikiFi
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	mr       r3, r26
	lfs      f2, lbl_805185C8@sda21(r2)
	addi     r4, r1, 0x14
	stw      r0, 0x68(r1)
	lfd      f1, lbl_80518610@sda21(r2)
	lfd      f0, 0x68(r1)
	lfs      f3, lbl_805185E4@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_8051860C@sda21(r2)
	lfs      f0, lbl_80518608@sda21(r2)
	stfs     f2, 0x14(r1)
	fdivs    f3, f4, f3
	stfs     f2, 0x1c(r1)
	fnmadds  f0, f1, f3, f0
	stfs     f0, 0x18(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r26
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	b        lbl_80154F1C

lbl_80154EFC:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r29
	mr       r5, r28
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r4, 0(r3)
	addi     r0, r4, 1
	stw      r0, 0(r3)

lbl_80154F1C:
	addi     r27, r27, 1

lbl_80154F20:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r29
	mr       r5, r28
	addi     r3, r3, 0x60
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r0, 0(r3)
	cmpw     r27, r0
	blt      lbl_80154CB4
	addi     r28, r28, 1
	cmpwi    r28, 3
	blt      lbl_80154CAC
	addi     r29, r29, 1
	cmpwi    r29, 7
	blt      lbl_80154CA8
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0x60
	bl       clear__Q24Game13PikiContainerFv
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	psq_l    f24, 216(r1), 0, qr0
	lfd      f24, 0xd0(r1)
	psq_l    f23, 200(r1), 0, qr0
	lfd      f23, 0xc0(r1)
	psq_l    f22, 184(r1), 0, qr0
	lfd      f22, 0xb0(r1)
	psq_l    f21, 168(r1), 0, qr0
	lfd      f21, 0xa0(r1)
	psq_l    f20, 152(r1), 0, qr0
	lfd      f20, 0x90(r1)
	lmw      r26, 0x78(r1)
	lwz      r0, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000440
 */
void SingleGameSection::createFallPikmins(Game::PikiContainer&, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80154FD8
 * Size:	000504
 */
void SingleGameSection::setDispMemberSMenu(og::Screen::DispMemberSMenuAll&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r28, r3
	mr       r29, r4
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	li       r30, 0
	beq      lbl_80155008
	lhz      r30, 0x2dc(r3)

lbl_80155008:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplwi   r0, 0
	bne      lbl_80155024
	li       r0, 1
	stb      r0, 0xc0(r29)

lbl_80155024:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 9
	addi     r3, r3, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r31, r3
	li       r4, 8
	addi     r3, r5, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	li       r4, 0
	beq      lbl_80155060
	clrlwi.  r0, r31, 0x18
	beq      lbl_80155060
	li       r4, 1

lbl_80155060:
	clrlwi.  r0, r4, 0x18
	beq      lbl_80155070
	li       r3, 3
	b        lbl_80155090

lbl_80155070:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155080
	li       r3, 1
	b        lbl_80155090

lbl_80155080:
	clrlwi.  r0, r31, 0x18
	li       r3, 0
	beq      lbl_80155090
	li       r3, 2

lbl_80155090:
	stw      r3, 0x64(r29)
	li       r4, 1
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	stw      r3, 0x68(r29)
	li       r4, 2
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	stw      r3, 0x6c(r29)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	stw      r3, 0x70(r29)
	li       r4, 4
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	stw      r3, 0x74(r29)
	li       r4, 3
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r30, 0
	stw      r3, 0x78(r29)
	li       r0, 0
	blt      lbl_80155110
	cmpwi    r30, 7
	bge      lbl_80155110
	li       r0, 1

lbl_80155110:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80155134
	lis      r3, lbl_8047CFAC@ha
	lis      r5, lbl_8047CDC4@ha
	addi     r3, r3, lbl_8047CFAC@l
	li       r4, 0x77
	addi     r5, r5, lbl_8047CDC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80155134:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r5, r30, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	li       r4, 1
	add      r31, r0, r5
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r30, 0
	stw      r3, 0x7c(r29)
	li       r0, 0
	blt      lbl_80155178
	cmpwi    r30, 7
	bge      lbl_80155178
	li       r0, 1

lbl_80155178:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8015519C
	lis      r3, lbl_8047CFAC@ha
	lis      r5, lbl_8047CDC4@ha
	addi     r3, r3, lbl_8047CFAC@l
	li       r4, 0x77
	addi     r5, r5, lbl_8047CDC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015519C:
	mr       r3, r31
	li       r4, 2
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r30, 0
	stw      r3, 0x80(r29)
	li       r0, 0
	blt      lbl_801551D0
	cmpwi    r30, 7
	bge      lbl_801551D0
	li       r0, 1

lbl_801551D0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801551F4
	lis      r3, lbl_8047CFAC@ha
	lis      r5, lbl_8047CDC4@ha
	addi     r3, r3, lbl_8047CFAC@l
	li       r4, 0x77
	addi     r5, r5, lbl_8047CDC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801551F4:
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r30, 0
	stw      r3, 0x84(r29)
	li       r0, 0
	blt      lbl_80155228
	cmpwi    r30, 7
	bge      lbl_80155228
	li       r0, 1

lbl_80155228:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8015524C
	lis      r3, lbl_8047CFAC@ha
	lis      r5, lbl_8047CDC4@ha
	addi     r3, r3, lbl_8047CFAC@l
	li       r4, 0x77
	addi     r5, r5, lbl_8047CDC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015524C:
	mr       r3, r31
	li       r4, 4
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r30, 0
	stw      r3, 0x88(r29)
	li       r0, 0
	blt      lbl_80155280
	cmpwi    r30, 7
	bge      lbl_80155280
	li       r0, 1

lbl_80155280:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801552A4
	lis      r3, lbl_8047CFAC@ha
	lis      r5, lbl_8047CDC4@ha
	addi     r3, r3, lbl_8047CFAC@l
	li       r4, 0x77
	addi     r5, r5, lbl_8047CDC4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801552A4:
	mr       r3, r31
	li       r4, 3
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lis      r4, formationPikis__Q24Game8GameStat@ha
	li       r31, 0
	stw      r3, 0x8c(r29)
	addi     r27, r4, formationPikis__Q24Game8GameStat@l
	mr       r30, r31

lbl_801552D0:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	add      r31, r31, r3
	cmpwi    r30, 7
	addi     r27, r27, 0x20
	blt      lbl_801552D0
	lis      r3, workPikis__Q24Game8GameStat@ha
	li       r27, 0
	addi     r26, r3, workPikis__Q24Game8GameStat@l
	mr       r30, r27

lbl_80155308:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	add      r27, r27, r3
	cmpwi    r30, 7
	addi     r26, r26, 0x20
	blt      lbl_80155308
	lis      r3, alivePikis__Q24Game8GameStat@ha
	lwzu     r12, alivePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	subf     r0, r31, r3
	li       r4, 1
	subf     r0, r27, r0
	stw      r0, 0x90(r29)
	lwz      r5, playData__4Game@sda21(r13)
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lwz      r5, 0xe8(r5)
	lwz      r0, 0x48(r3)
	subf     r0, r5, r0
	stw      r0, 0x94(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r3)
	stb      r0, 0xa5(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x48(r3)
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 0xa6(r29)
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasContainer__Q24Game8PlayDataFi
	stb      r3, 0xa0(r29)
	li       r4, 2
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasContainer__Q24Game8PlayDataFi
	stb      r3, 0xa1(r29)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasContainer__Q24Game8PlayDataFi
	stb      r3, 0xa2(r29)
	li       r4, 4
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasContainer__Q24Game8PlayDataFi
	stb      r3, 0xa3(r29)
	li       r4, 3
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasContainer__Q24Game8PlayDataFi
	stb      r3, 0xa4(r29)
	li       r4, 1
	lwz      r0, 0x190(r28)
	stw      r0, 0x9c(r29)
	lwz      r3, 0x22c(r28)
	lwz      r0, 0x48(r3)
	stw      r0, 0x98(r29)
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x3c(r29)
	li       r4, 1
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	stw      r3, 0x40(r29)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x44(r29)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeFruitCount__Q24Game8PlayDataFi
	stw      r3, 0x48(r29)
	li       r26, 0

lbl_80155430:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	addi     r3, r3, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	addi     r0, r26, 0x4c
	addi     r26, r26, 1
	cmpwi    r26, 0xc
	stbx     r3, r29, r0
	blt      lbl_80155430
	lwz      r5, playData__4Game@sda21(r13)
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwz      r4, _aiConstants__4Game@sda21(r13)
	lwz      r5, 0xe8(r5)
	lwz      r0, 0x48(r4)
	subf     r0, r5, r0
	stw      r0, 0x10(r29)
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r0, 0xe8(r4)
	stw      r0, 0x14(r29)
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r0, 0xec(r4)
	stw      r0, 0x24(r29)
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	neg      r0, r3
	li       r4, 0x1e
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x2d(r29)
	lwz      r3, playData__4Game@sda21(r13)
	bl       isDemoFlag__Q24Game8PlayDataFi
	stb      r3, 0x58(r29)
	li       r4, 0x1d
	lwz      r3, playData__4Game@sda21(r13)
	bl       isDemoFlag__Q24Game8PlayDataFi
	stb      r3, 0x59(r29)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801554DC
 * Size:	000010
 */
void GameStat::PikiCounter::operator()(int)
{
	/*
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void SingleGameSection::setDispMemberNavi(og::Screen::DataNavi&, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void SingleGameSection::calcOtakaraLevel(float&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801554EC
 * Size:	00058C
 */
void SingleGameSection::updateMainMapScreen(void)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	lis      r11, __vt__Q32og6Screen16DispMemberGround@ha
	lis      r5, __vt__Q32og6Screen21DispMemberDayEndCount@ha
	stw      r0, 0xd4(r1)
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lfs      f3, lbl_8051861C@sda21(r2)
	li       r12, 0
	stw      r31, 0xcc(r1)
	li       r8, 1
	lfs      f2, lbl_80518620@sda21(r2)
	li       r6, 0xa
	stw      r30, 0xc8(r1)
	li       r7, 2
	lfs      f1, lbl_80518624@sda21(r2)
	li       r10, 0x4d2
	stw      r29, 0xc4(r1)
	addi     r29, r4, __vt__Q32og6Screen14DispMemberBase@l
	lfs      f4, lbl_805185C8@sda21(r2)
	lis      r4, __vt__Q32og6Screen17DispMemberHurryUp@ha
	lfs      f0, lbl_80518618@sda21(r2)
	li       r9, 0x32
	stw      r29, 0x30(r1)
	addi     r11, r11, __vt__Q32og6Screen16DispMemberGround@l
	mr       r30, r3
	addi     r5, r5, __vt__Q32og6Screen21DispMemberDayEndCount@l
	stw      r29, 0x98(r1)
	addi     r0, r4, __vt__Q32og6Screen17DispMemberHurryUp@l
	lwz      r3, naviMgr__4Game@sda21(r13)
	stw      r29, 0xa8(r1)
	stw      r12, 0x34(r1)
	stw      r11, 0x30(r1)
	stfs     f4, 0x38(r1)
	stw      r12, 0x3c(r1)
	stw      r12, 0x44(r1)
	stw      r10, 0x40(r1)
	stw      r9, 0x48(r1)
	stb      r12, 0x4c(r1)
	stw      r12, 0x50(r1)
	stfs     f3, 0x54(r1)
	stw      r8, 0x58(r1)
	stw      r7, 0x5c(r1)
	stw      r6, 0x60(r1)
	stw      r6, 0x64(r1)
	stb      r8, 0x68(r1)
	stfs     f3, 0x6c(r1)
	stw      r8, 0x70(r1)
	stw      r7, 0x74(r1)
	stw      r6, 0x78(r1)
	stw      r6, 0x7c(r1)
	stb      r8, 0x80(r1)
	stw      r12, 0x9c(r1)
	stw      r5, 0x98(r1)
	stfs     f2, 0xa4(r1)
	stfs     f2, 0xa0(r1)
	stw      r12, 0xac(r1)
	stw      r0, 0xa8(r1)
	stfs     f1, 0xb4(r1)
	stfs     f1, 0xb0(r1)
	stb      r12, 0x8e(r1)
	stfs     f0, 0x84(r1)
	stb      r12, 0x8c(r1)
	stb      r8, 0x8d(r1)
	stw      r8, 0x88(r1)
	stb      r12, 0x8f(r1)
	stb      r12, 0x90(r1)
	stb      r12, 0x91(r1)
	stb      r12, 0x92(r1)
	stb      r12, 0x93(r1)
	stb      r12, 0x94(r1)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lfs      f0, lbl_80518618@sda21(r2)
	cmplwi   r3, 0
	li       r29, 5
	stfs     f0, 8(r1)
	beq      lbl_801556A0
	mr       r4, r3
	addi     r3, r1, 0x24
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x24(r1)
	addi     r4, r1, 0xc
	lfs      f1, 0x28(r1)
	addi     r5, r1, 0x18
	lfs      f0, 0x2c(r1)
	addi     r6, r1, 8
	stfs     f2, 0xc(r1)
	lwz      r3, mgr__5Radar@sda21(r13)
	stfs     f1, 0x10(r1)
	lfs      f1, lbl_80518618@sda21(r2)
	stfs     f0, 0x14(r1)
	bl       "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
	mr       r29, r3
	cmpwi    r29, 2
	bne      lbl_80155694
	lfs      f1, 8(r1)
	lfs      f0, lbl_80518618@sda21(r2)
	lfs      f2, lbl_8051861C@sda21(r2)
	fdivs    f1, f1, f0
	lfs      f0, lbl_805185C8@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	blt      lbl_801556A0
	b        lbl_801556A0

lbl_80155694:
	cmpwi    r29, 1
	bne      lbl_801556A0
	bl       rand

lbl_801556A0:
	lfs      f0, 8(r1)
	li       r31, 0
	stw      r29, 0x88(r1)
	stfs     f0, 0x84(r1)
	lbz      r0, 0x23e(r30)
	cmplwi   r0, 0
	bne      lbl_801556E0
	cmpwi    r29, 0
	bne      lbl_801556E0
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       is_GameGround__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801556E0
	li       r0, 1
	li       r31, 1
	stb      r0, 0x23e(r30)

lbl_801556E0:
	lbz      r0, 0x23d(r30)
	cmplwi   r0, 0
	bne      lbl_801556FC
	cmpwi    r29, 0
	bne      lbl_801556FC
	li       r0, 1
	stb      r0, 0x23d(r30)

lbl_801556FC:
	lbz      r0, 0x23d(r30)
	cmplwi   r0, 0
	beq      lbl_80155724
	cmpwi    r29, 0
	beq      lbl_80155724
	cmpwi    r29, 5
	beq      lbl_80155724
	li       r0, 0
	stb      r0, 0x23d(r30)
	stb      r0, 0x23e(r30)

lbl_80155724:
	lbz      r0, 0x23d(r30)
	li       r4, 8
	lwz      r3, playData__4Game@sda21(r13)
	stb      r0, 0x93(r1)
	addi     r3, r3, 0x48
	stb      r31, 0x94(r1)
	bl       hasItem__Q24Game10OlimarDataFi
	stb      r3, 0x8c(r1)
	li       r3, -1
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r4, 0x40(r4)
	lwz      r4, 0x218(r4)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	stb      r0, 0x8d(r1)
	bl       getMapPikmins__Q24Game8GameStatFi
	mr       r29, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subf     r0, r3, r29
	li       r3, -1
	stw      r0, 0x48(r1)
	bl       getAllPikmins__Q24Game8GameStatFi
	mr       r29, r3
	li       r3, -1
	bl       getZikatuPikmins__Q24Game8GameStatFi
	subf     r0, r3, r29
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x40(r1)
	lwz      r3, 0x40(r3)
	lwz      r4, 0x218(r3)
	addi     r0, r4, 1
	stw      r0, 0x3c(r1)
	bl       getSunGaugeRatio__Q24Game7TimeMgrFv
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1e
	stfs     f1, 0x38(r1)
	lwz      r0, 0xe8(r3)
	stw      r0, 0x50(r1)
	bl       isDemoFlag__Q24Game8PlayDataFi
	mr       r29, r3
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x1d
	bl       isDemoFlag__Q24Game8PlayDataFi
	mr       r31, r3
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x38
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_801557FC
	li       r0, 1
	stb      r0, 0x8f(r1)
	b        lbl_80155804

lbl_801557FC:
	li       r0, 0
	stb      r0, 0x8f(r1)

lbl_80155804:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x37
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155824
	li       r0, 1
	stb      r0, 0x90(r1)
	b        lbl_8015582C

lbl_80155824:
	li       r0, 0
	stb      r0, 0x90(r1)

lbl_8015582C:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       is_GameGround__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155880
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80155880
	clrlwi.  r0, r29, 0x18
	beq      lbl_80155880
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x38
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80155880
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x38
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r0, 1
	stb      r0, 0x91(r1)
	b        lbl_80155888

lbl_80155880:
	li       r0, 0
	stb      r0, 0x91(r1)

lbl_80155888:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       is_GameGround__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801558DC
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_801558DC
	clrlwi.  r0, r31, 0x18
	beq      lbl_801558DC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x37
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801558DC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x37
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r0, 1
	stb      r0, 0x92(r1)
	b        lbl_801558E4

lbl_801558DC:
	li       r0, 0
	stb      r0, 0x92(r1)

lbl_801558E4:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801558FC
	li       r0, 1
	stb      r0, 0x8e(r1)

lbl_801558FC:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	li       r31, 2
	beq      lbl_80155914
	lhz      r31, 0x2dc(r3)

lbl_80155914:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	lwzu     r12, formationPikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	li       r4, 1
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x60(r1)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x64(r1)
	li       r4, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	bl       getLifeRatio__Q24Game4NaviFv
	stfs     f1, 0x54(r1)
	mr       r3, r29
	bl       ogGetNextThrowPiki__Q24Game4NaviFv
	cmpwi    r31, 0
	stw      r3, 0x5c(r1)
	bne      lbl_80155998
	li       r3, 1
	li       r0, 0
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)
	b        lbl_801559E4

lbl_80155998:
	cmpwi    r31, 1
	bne      lbl_801559B4
	li       r3, 0
	li       r0, 1
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)
	b        lbl_801559E4

lbl_801559B4:
	lwz      r0, 0xe4(r30)
	cmpwi    r0, 0
	bne      lbl_801559D4
	li       r3, 0
	li       r0, 1
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)
	b        lbl_801559E4

lbl_801559D4:
	li       r3, 1
	li       r0, 0
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)

lbl_801559E4:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	addi     r3, r3, formationPikis__Q24Game8GameStat@l
	lwzu     r12, 0x20(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	li       r4, 1
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x78(r1)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x7c(r1)
	li       r4, 1
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	bl       getLifeRatio__Q24Game4NaviFv
	stfs     f1, 0x6c(r1)
	mr       r3, r29
	bl       ogGetNextThrowPiki__Q24Game4NaviFv
	stw      r3, 0x74(r1)
	addi     r4, r1, 0x30
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
	lwz      r0, 0xd4(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80155A78
 * Size:	000004
 */
void SingleGameSection::drawMainMapScreen(void) { }

/*
 * --INFO--
 * Address:	80155A7C
 * Size:	0004D8
 */
void SingleGameSection::updateCaveScreen(void)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r8, __vt__Q32og6Screen14DispMemberCave@ha
	stw      r0, 0xb4(r1)
	addi     r10, r4, __vt__Q32og6Screen14DispMemberBase@l
	li       r9, 0
	lfs      f1, lbl_8051861C@sda21(r2)
	stw      r31, 0xac(r1)
	li       r5, 1
	lfs      f2, lbl_805185C8@sda21(r2)
	li       r0, 0xa
	stw      r30, 0xa8(r1)
	li       r4, 2
	lfs      f0, lbl_80518618@sda21(r2)
	li       r7, 0x4d2
	stw      r29, 0xa4(r1)
	li       r6, 0x32
	mr       r31, r3
	addi     r8, r8, __vt__Q32og6Screen14DispMemberCave@l
	stb      r9, 0x4c(r1)
	lwz      r3, naviMgr__4Game@sda21(r13)
	stw      r10, 0x30(r1)
	stw      r9, 0x34(r1)
	stw      r8, 0x30(r1)
	stfs     f2, 0x38(r1)
	stw      r9, 0x3c(r1)
	stw      r9, 0x44(r1)
	stw      r7, 0x40(r1)
	stw      r6, 0x48(r1)
	stw      r9, 0x50(r1)
	stfs     f1, 0x54(r1)
	stw      r5, 0x58(r1)
	stw      r4, 0x5c(r1)
	stw      r0, 0x60(r1)
	stw      r0, 0x64(r1)
	stb      r5, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stw      r5, 0x70(r1)
	stw      r4, 0x74(r1)
	stw      r0, 0x78(r1)
	stw      r0, 0x7c(r1)
	stb      r5, 0x80(r1)
	stb      r5, 0x4c(r1)
	stb      r9, 0x8d(r1)
	stb      r9, 0x8e(r1)
	stfs     f0, 0x84(r1)
	stb      r9, 0x8c(r1)
	stw      r5, 0x88(r1)
	stb      r9, 0x8f(r1)
	stb      r9, 0x92(r1)
	stb      r9, 0x93(r1)
	stb      r9, 0x90(r1)
	stb      r9, 0x91(r1)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lfs      f0, lbl_80518618@sda21(r2)
	cmplwi   r3, 0
	li       r30, 5
	stfs     f0, 8(r1)
	beq      lbl_80155BF0
	mr       r4, r3
	addi     r3, r1, 0x24
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x24(r1)
	addi     r4, r1, 0xc
	lfs      f1, 0x28(r1)
	addi     r5, r1, 0x18
	lfs      f0, 0x2c(r1)
	addi     r6, r1, 8
	stfs     f2, 0xc(r1)
	lwz      r3, mgr__5Radar@sda21(r13)
	stfs     f1, 0x10(r1)
	lfs      f1, lbl_80518618@sda21(r2)
	stfs     f0, 0x14(r1)
	bl       "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
	mr       r30, r3
	cmpwi    r30, 2
	bne      lbl_80155BE4
	lfs      f1, 8(r1)
	lfs      f0, lbl_80518618@sda21(r2)
	lfs      f2, lbl_8051861C@sda21(r2)
	fdivs    f1, f1, f0
	lfs      f0, lbl_805185C8@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	blt      lbl_80155BF0
	b        lbl_80155BF0

lbl_80155BE4:
	cmpwi    r30, 1
	bne      lbl_80155BF0
	bl       rand

lbl_80155BF0:
	lfs      f0, 8(r1)
	li       r29, 0
	stw      r30, 0x88(r1)
	stfs     f0, 0x84(r1)
	lbz      r0, 0x23e(r31)
	cmplwi   r0, 0
	bne      lbl_80155C30
	cmpwi    r30, 0
	bne      lbl_80155C30
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       is_GameCave__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155C30
	li       r0, 1
	li       r29, 1
	stb      r0, 0x23e(r31)

lbl_80155C30:
	lbz      r0, 0x23d(r31)
	cmplwi   r0, 0
	bne      lbl_80155C4C
	cmpwi    r30, 0
	bne      lbl_80155C4C
	li       r0, 1
	stb      r0, 0x23d(r31)

lbl_80155C4C:
	lbz      r0, 0x23d(r31)
	cmplwi   r0, 0
	beq      lbl_80155C74
	cmpwi    r30, 0
	beq      lbl_80155C74
	cmpwi    r30, 5
	beq      lbl_80155C74
	li       r0, 0
	stb      r0, 0x23d(r31)
	stb      r0, 0x23e(r31)

lbl_80155C74:
	lbz      r0, 0x23d(r31)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	stb      r0, 0x90(r1)
	stb      r29, 0x91(r1)
	bl       is_GameCave__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155CE8
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80155CE8
	li       r0, 0
	lwz      r3, playData__4Game@sda21(r13)
	stb      r0, 0x8f(r1)
	li       r4, 0x36
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80155CE8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 8
	addi     r3, r3, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155CE8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x36
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r0, 1
	stb      r0, 0x8f(r1)

lbl_80155CE8:
	lwz      r3, playData__4Game@sda21(r13)
	li       r30, 0
	li       r4, 8
	addi     r3, r3, 0x48
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155D1C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x36
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80155D1C
	li       r30, 1

lbl_80155D1C:
	stb      r30, 0x8c(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	addi     r0, r3, 1
	lwz      r3, playData__4Game@sda21(r13)
	stw      r0, 0x44(r1)
	li       r4, 0x1e
	bl       isDemoFlag__Q24Game8PlayDataFi
	stb      r3, 0x92(r1)
	li       r4, 0x1d
	lwz      r3, playData__4Game@sda21(r13)
	bl       isDemoFlag__Q24Game8PlayDataFi
	stb      r3, 0x93(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r3, 0x28(r3)
	bl       getFloorMax__Q34Game4Cave8CaveInfoFv
	lwz      r0, 0x44(r1)
	subf     r0, r0, r3
	li       r3, -1
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 0x8e(r1)
	bl       getMapPikmins__Q24Game8GameStatFi
	stw      r3, 0x48(r1)
	li       r3, -1
	bl       getAllPikmins__Q24Game8GameStatFi
	stw      r3, 0x40(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r4, 0x218(r3)
	addi     r0, r4, 1
	stw      r0, 0x3c(r1)
	bl       getSunGaugeRatio__Q24Game7TimeMgrFv
	stfs     f1, 0x38(r1)
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r3, 0xec(r4)
	lwz      r0, 0xe8(r4)
	add      r0, r0, r3
	stw      r0, 0x50(r1)
	lbz      r0, 0x2f(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80155DD8
	li       r0, 1
	stb      r0, 0x8d(r1)

lbl_80155DD8:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	li       r29, 2
	beq      lbl_80155DF0
	lhz      r29, 0x2dc(r3)

lbl_80155DF0:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	lwzu     r12, formationPikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	li       r4, 1
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x60(r1)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x64(r1)
	li       r4, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	bl       getLifeRatio__Q24Game4NaviFv
	stfs     f1, 0x54(r1)
	mr       r3, r30
	bl       ogGetNextThrowPiki__Q24Game4NaviFv
	cmpwi    r29, 0
	stw      r3, 0x5c(r1)
	bne      lbl_80155E74
	li       r3, 1
	li       r0, 0
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)
	b        lbl_80155EC0

lbl_80155E74:
	cmpwi    r29, 1
	bne      lbl_80155E90
	li       r3, 0
	li       r0, 1
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)
	b        lbl_80155EC0

lbl_80155E90:
	lwz      r0, 0xe4(r31)
	cmpwi    r0, 0
	bne      lbl_80155EB0
	li       r3, 0
	li       r0, 1
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)
	b        lbl_80155EC0

lbl_80155EB0:
	li       r3, 1
	li       r0, 0
	stb      r3, 0x68(r1)
	stb      r0, 0x80(r1)

lbl_80155EC0:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	addi     r3, r3, formationPikis__Q24Game8GameStat@l
	lwzu     r12, 0x20(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	li       r4, 1
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x78(r1)
	li       r4, 0
	lwz      r3, playData__4Game@sda21(r13)
	bl       getDopeCount__Q24Game8PlayDataFi
	stw      r3, 0x7c(r1)
	li       r4, 1
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r30, r3
	bl       getLifeRatio__Q24Game4NaviFv
	stfs     f1, 0x6c(r1)
	mr       r3, r30
	bl       ogGetNextThrowPiki__Q24Game4NaviFv
	stw      r3, 0x74(r1)
	addi     r4, r1, 0x30
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80155F54
 * Size:	000008
 */
int SingleGameSection::getCurrFloor()
{
	return m_currentFloor;
	/*
	lwz      r3, 0x248(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80155F5C
 * Size:	000004
 */
void SingleGameSection::drawCaveScreen(void) { }

/*
 * --INFO--
 * Address:	80155F60
 * Size:	00008C
 */
void SingleGameSection::newCaveOtakaraEarningsAndDrops(void)
{
	int otakaraCount = PelletList::Mgr::getCount(PelletList::OTAKARA);
	int itemCount    = PelletList::Mgr::getCount(PelletList::ITEM);
	_254.alloc(otakaraCount);
	_25C.alloc(itemCount);
	_264.alloc(otakaraCount);
	_26C.alloc(itemCount);
	_274 = 0;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 3
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r0, r3
	li       r3, 4
	mr       r31, r0
	bl       getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
	mr       r30, r3
	mr       r4, r31
	addi     r3, r29, 0x254
	bl       alloc__Q24Game11KindCounterFi
	mr       r4, r30
	addi     r3, r29, 0x25c
	bl       alloc__Q24Game11KindCounterFi
	mr       r4, r31
	addi     r3, r29, 0x264
	bl       alloc__Q24Game11KindCounterFi
	mr       r4, r30
	addi     r3, r29, 0x26c
	bl       alloc__Q24Game11KindCounterFi
	li       r0, 0
	stb      r0, 0x274(r29)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80155FEC
 * Size:	000050
 */
void SingleGameSection::clearCaveOtakaraEarningsAndDrops(void)
{
	_254.clear();
	_25C.clear();
	_264.clear();
	_26C.clear();
	_274 = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x254
	bl       clear__Q24Game11KindCounterFv
	addi     r3, r31, 0x25c
	bl       clear__Q24Game11KindCounterFv
	addi     r3, r31, 0x264
	bl       clear__Q24Game11KindCounterFv
	addi     r3, r31, 0x26c
	bl       clear__Q24Game11KindCounterFv
	li       r0, 0
	stb      r0, 0x274(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	8015603C
 * Size:	000008
 */
u32 DispMemberCave::getSize(void) { return sizeof(DispMemberCave); }

/*
 * --INFO--
 * Address:	80156044
 * Size:	00000C
 */
ScreenOwnerID DispMemberCave::getOwnerID(void)
{
	return OWNER_OGA;
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80156050
 * Size:	000010
 */
ScreenMemberID DispMemberCave::getMemberID(void)
{
	return MEMBER_CAVE;
	/*
lis      r4, 0x43415645@ha
li       r3, 0
addi     r4, r4, 0x43415645@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80156060
 * Size:	000004
 */
void DispMemberBase::doSetSubMemberAll(void) { }

/*
 * --INFO--
 * Address:	80156064
 * Size:	000008
 */
u32 DispMemberHurryUp::getSize(void) { return sizeof(DispMemberHurryUp); }

/*
 * --INFO--
 * Address:	8015606C
 * Size:	00000C
 */
ScreenOwnerID DispMemberHurryUp::getOwnerID(void)
{
	return OWNER_MRMR;
	/*
lis      r3, 0x4D524D52@ha
addi     r3, r3, 0x4D524D52@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80156078
 * Size:	000014
 */
ScreenMemberID DispMemberHurryUp::getMemberID(void)
{
	return MEMBER_HURRY_UP;
	/*
lis      r4, 0x52595550@ha
lis      r3, 0x00485552@ha
addi     r4, r4, 0x52595550@l
addi     r3, r3, 0x00485552@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8015608C
 * Size:	000008
 */
u32 DispMemberDayEndCount::getSize(void) { return sizeof(DispMemberDayEndCount); }

/*
 * --INFO--
 * Address:	80156094
 * Size:	00000C
 */
ScreenOwnerID DispMemberDayEndCount::getOwnerID(void)
{
	return OWNER_MRMR;
	/*
lis      r3, 0x4D524D52@ha
addi     r3, r3, 0x4D524D52@l
blr
	*/
}

/*
 * --INFO--
 * Address:	801560A0
 * Size:	000014
 */
ScreenMemberID DispMemberDayEndCount::getMemberID(void)
{
	return MEMBER_DAY_END_COUNT;
	/*
lis      r4, 0x4E444344@ha
lis      r3, 0x44415945@ha
addi     r4, r4, 0x4E444344@l
addi     r3, r3, 0x44415945@l
blr
	*/
}

// /*
//  * --INFO--
//  * Address:	801560B4
//  * Size:	000008
//  */
// u32 DispMemberGround::getSize(void) { return 0x88; }

// /*
//  * --INFO--
//  * Address:	801560BC
//  * Size:	00000C
//  */
// void DispMemberGround::getOwnerID(void)
// {
// 	/*
// lis      r3, 0x004F4741@ha
// addi     r3, r3, 0x004F4741@l
// blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801560C8
//  * Size:	000010
//  */
// void DispMemberGround::getMemberID(void)
// {
// 	/*
// lis      r4, 0x4F554E44@ha
// li       r3, 0x4752
// addi     r4, r4, 0x4F554E44@l
// blr
// 	*/
// }

namespace Game {

} // namespace Game

} // namespace Screen

/*
 * --INFO--
 * Address:	801560D8
 * Size:	00000C
 */
void PikiInitArg::getName(void)
{
	return "PikiInitArg";
	/*
	lis      r3, lbl_8047CFB8@ha
	addi     r3, r3, lbl_8047CFB8@l
	blr
	*/
}

} // namespace og

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	801560E4
 * Size:	000008
 */
u32 DispMemberKanketuMenu::getSize(void) { return sizeof(DispMemberKanketuMenu); }

/*
 * --INFO--
 * Address:	801560EC
 * Size:	00000C
 */
ScreenOwnerID DispMemberKanketuMenu::getOwnerID(void)
{
	return OWNER_OGA;
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	801560F8
 * Size:	000014
 */
ScreenMemberID DispMemberKanketuMenu::getMemberID(void)
{
	/*
lis      r4, 0x4B455455@ha
lis      r3, 0x004B414E@ha
addi     r4, r4, 0x4B455455@l
addi     r3, r3, 0x004B414E@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8015610C
 * Size:	000008
 */
u32 DispMemberCaveMore::getSize(void) { return 0x28; }

/*
 * --INFO--
 * Address:	80156114
 * Size:	00000C
 */
void DispMemberCaveMore::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80156120
 * Size:	000014
 */
void DispMemberCaveMore::getMemberID(void)
{
	/*
lis      r4, 0x4D4F5245@ha
lis      r3, 0x43415645@ha
addi     r4, r4, 0x4D4F5245@l
addi     r3, r3, 0x43415645@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80156134
 * Size:	000008
 */
u32 DispMemberAnaDemo::getSize(void) { return 0x24; }

/*
 * --INFO--
 * Address:	8015613C
 * Size:	00000C
 */
void DispMemberAnaDemo::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80156148
 * Size:	000014
 */
void DispMemberAnaDemo::getMemberID(void)
{
	/*
lis      r4, 0x44454D4F@ha
lis      r3, 0x414E415F@ha
addi     r4, r4, 0x44454D4F@l
addi     r3, r3, 0x414E415F@l
blr
	*/
}

namespace Game {

} // namespace Game

} // namespace Screen

/*
 * --INFO--
 * Address:	8015615C
 * Size:	00000C
 */
void PikiKillArg::getName(void)
{
	/*
	lis      r3, lbl_8047CFC4@ha
	addi     r3, r3, lbl_8047CFC4@l
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	80156168
 * Size:	00009C
 */
TLastMomiji::~TLastMomiji(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_801561E8
lis      r3, __vt__Q23efx11TLastMomiji@ha
addi     r3, r3, __vt__Q23efx11TLastMomiji@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_801561D8
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_801561D8
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_801561D8:
extsh.   r0, r31
ble      lbl_801561E8
mr       r3, r30
bl       __dl__FPv

lbl_801561E8:
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
 * Address:	80156204
 * Size:	00009C
 */
TForestSakura::~TForestSakura(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80156284
lis      r3, __vt__Q23efx13TForestSakura@ha
addi     r3, r3, __vt__Q23efx13TForestSakura@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80156274
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80156274
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_80156274:
extsh.   r0, r31
ble      lbl_80156284
mr       r3, r30
bl       __dl__FPv

lbl_80156284:
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
 * Address:	801562A0
 * Size:	00009C
 */
TTutorialSnow::~TTutorialSnow(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80156320
lis      r3, __vt__Q23efx13TTutorialSnow@ha
addi     r3, r3, __vt__Q23efx13TTutorialSnow@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80156310
lis      r3, __vt__Q23efx9TChasePos@ha
addi     r3, r3, __vt__Q23efx9TChasePos@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80156310
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_80156310:
extsh.   r0, r31
ble      lbl_80156320
mr       r3, r30
bl       __dl__FPv

lbl_80156320:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace efx

} // namespace og

/**
 * @reified{isCaveFloor__Q26PSGame13CaveFloorInfoFv}
 * @reified{isBossFloor__Q26PSGame13CaveFloorInfoFv}
 * @reified{isRelaxFloor__Q26PSGame13CaveFloorInfoFv}
 */

namespace Game {

/*
 * --INFO--
 * Address:	8015636C
 * Size:	000008
 */
bool SingleGameSection::isDevelopSection() { return false; }

/*
 * --INFO--
 * Address:	80156374
 * Size:	000008
 */
void SingleGameSection::getTimerType()
{
	/*
	lwz      r3, 0x17c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015637C
 * Size:	000008
 */
void SingleGameSection::getCaveFilename(void)
{
	/*
	addi     r3, r3, 0x195
	blr
	*/
}

/*
 * --INFO--
 * Address:	80156384
 * Size:	000004
 */
void FSMState<SingleGameSection>::init(SingleGameSection*, StateArg*) { }

/*
 * --INFO--
 * Address:	80156388
 * Size:	000004
 */
void FSMState<SingleGameSection>::exec(SingleGameSection*) { }

/*
 * --INFO--
 * Address:	8015638C
 * Size:	000004
 */
void FSMState<SingleGameSection>::cleanup(SingleGameSection*) { }

/*
 * --INFO--
 * Address:	80156390
 * Size:	000004
 */
void FSMState<SingleGameSection>::resume(SingleGameSection*) { }

/*
 * --INFO--
 * Address:	80156394
 * Size:	000004
 */
void FSMState<SingleGameSection>::restart(SingleGameSection*) { }

/*
 * --INFO--
 * Address:	80156398
 * Size:	000004
 */
void StateMachine<SingleGameSection>::init(SingleGameSection*) { }

/*
 * --INFO--
 * Address:	8015639C
 * Size:	000038
 */
void StateMachine<SingleGameSection>::exec(SingleGameSection*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x250(r4)
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
 * Address:	801563D4
 * Size:	000064
 */
void StateMachine<SingleGameSection>::create(int)
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

/**
 * @generated{invoke__36Delegate<Q24Game17SingleGameSection>Fv}
 */

/*
 * --INFO--
 * Address:	80156468
 * Size:	00009C
 */
void StateMachine<SingleGameSection>::transit(SingleGameSection*, int, StateArg*)
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
	  lwz       r30, 0x250(r4)
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
	  stw       r3, 0x250(r28)
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
 * Address:	80156504
 * Size:	000084
 */
void StateMachine<SingleGameSection>::registerState(FSMState<SingleGameSection>*)
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

} // namespace Game

/*
 * --INFO--
 * Address:	80156588
 * Size:	000028
 */
void __sinit_singleGameSection_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B1070@ha
	stw      r0, lbl_80515940@sda21(r13)
	stfsu    f0, lbl_804B1070@l(r3)
	stfs     f0, lbl_80515944@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/**
 * @generated{@4@__dt__Q23efx13TTutorialSnowFv}
 * @generated{@4@__dt__Q23efx13TForestSakuraFv}
 * @generated{@4@__dt__Q23efx11TLastMomijiFv}
 */
