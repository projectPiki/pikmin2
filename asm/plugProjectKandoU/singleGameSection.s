.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_singleGameSection_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8047CD98:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.balign 4
lbl_8047CDA4:
	.asciz "SingleGameSection"
.balign 4
lbl_8047CDB8:
	.asciz "PSGame.h"
.balign 4
lbl_8047CDC4:
	.asciz "P2Assert"
.balign 4
lbl_8047CDD0:
	.asciz "PSScene.h"
.balign 4
lbl_8047CDDC:
	.asciz "get sound scene at\ninvalid timming\n"
.balign 4
lbl_8047CE00:
	.asciz "PSMainSide_Scene.h"
.balign 4
lbl_8047CE14:
	.asciz "cavedayend"
.balign 4
lbl_8047CE20:
	.asciz "SGS::onInit"
.balign 4
lbl_8047CE2C:
	.asciz "SGS::FSM"
.balign 4
lbl_8047CE38:
	.asciz "SGS::setupFix"
.balign 4
lbl_8047CE48:
	.asciz "singleGameSection.cpp"
.balign 4
lbl_8047CE60:
	.asciz "CurrTimer (%d) : disableTimer(%d)\n"
.balign 4
lbl_8047CE84:
	.asciz "g02_boot_onyonR"
.balign 4
lbl_8047CE94:
	.asciz "g1E_boot_onyonY"
.balign 4
lbl_8047CEA4:
	.asciz "g20_boot_onyonB"
.balign 4
lbl_8047CEB4:
	.asciz "g03_meet_redpikmin"
.balign 4
lbl_8047CEC8:
	.asciz "No RED ONYON"
.balign 4
lbl_8047CED8:
	.asciz "g1F_meet_yellowpikmin"
.balign 4
lbl_8047CEF0:
	.asciz "g21_meet_bluepikmin"
.balign 4
lbl_8047CF04:
	.asciz "g24_meet_blackpikmin"
.balign 4
lbl_8047CF1C:
	.asciz "g27_meet_whitepikmin"
.balign 4
lbl_8047CF34:
	.asciz "open_caveIn"
.balign 4
lbl_8047CF40:
	.asciz "openCaveMore"
.balign 4
lbl_8047CF50:
	.asciz "openKanketu"
.balign 4
lbl_8047CF5C:
	.asciz "cave-yes"
.balign 4
lbl_8047CF68:
	.asciz "cave-zenkai"
.balign 4
lbl_8047CF74:
	.asciz "more-yes"
.balign 4
lbl_8047CF80:
	.asciz "more-zenkai"
.balign 4
lbl_8047CF8C:
	.asciz "kank-yes"
.balign 4
lbl_8047CF98:
	.asciz "createFallPikmins"
.balign 4
lbl_8047CFAC:
	.asciz "gameStat.h"
.balign 4
lbl_8047CFB8:
	.asciz "PikiInitArg"
.balign 4
lbl_8047CFC4:
	.asciz "PikiKillArg"
.balign 4
lbl_8047CFD0:
	.asciz "CreatureKillArg"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
lbl_804B107C:
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte saveCaveMore__Q24Game17SingleGameSectionFv
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
	.4byte "init__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
.global "__vt__36Delegate<Q24Game17SingleGameSection>"
"__vt__36Delegate<Q24Game17SingleGameSection>":
	.4byte 0
	.4byte 0
	.4byte "invoke__36Delegate<Q24Game17SingleGameSection>Fv"
.global __vt__Q34Game10SingleGame15CaveDayEndState
__vt__Q34Game10SingleGame15CaveDayEndState:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
	.4byte exec__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection
	.4byte cleanup__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection
	.4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionR8Graphics
	.4byte onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
	.4byte onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
	.4byte onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
	.4byte onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
	.4byte onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
	.4byte on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
	.4byte on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl
.global __vt__Q34Game10SingleGame5State
__vt__Q34Game10SingleGame5State:
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectionPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "cleanup__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	.4byte draw__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionR8Graphics
	.4byte onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
	.4byte onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
	.4byte onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
	.4byte onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
	.4byte onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
	.4byte on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
	.4byte on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl
.global "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"
"__vt__Q24Game36FSMState<Q24Game17SingleGameSection>":
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectionPQ24Game8StateArg"
	.4byte "exec__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "cleanup__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
.global __vt__Q34Game10SingleGame3FSM
__vt__Q34Game10SingleGame3FSM:
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSection
	.4byte "start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
	.4byte "exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
	.4byte transit__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSectioniPQ24Game8StateArg
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
	.4byte drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode
	.4byte doExit__7SectionFv
	.4byte forceFinish__Q24Game15BaseGameSectionFv
	.4byte forceReset__7SectionFv
	.4byte getCurrentSection__7SectionFv
	.4byte doLoadingStart__7SectionFv
	.4byte doLoading__7SectionFv
	.4byte doUpdate__Q24Game17SingleGameSectionFv
	.4byte doDraw__Q24Game17SingleGameSectionFR8Graphics
	.4byte isFinishable__7SectionFv
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
	.4byte goMainMap__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4Item
	.4byte getCaveID__Q24Game17SingleGameSectionFv
	.4byte getCurrentCourseInfo__Q24Game17SingleGameSectionFv
	.4byte challengeDisablePelplant__Q24Game15BaseGameSectionFv
	.4byte getCaveFilename__Q24Game17SingleGameSectionFv
	.4byte getEditorFilename__Q24Game15BaseGameSectionFv
	.4byte getVsEditNumber__Q24Game15BaseGameSectionFv
	.4byte openContainerWindow__Q24Game15BaseGameSectionFv
	.4byte closeContainerWindow__Q24Game15BaseGameSectionFv
	.4byte playMovie_firstexperience__Q24Game17SingleGameSectionFiPQ24Game8Creature
	.4byte playMovie_bootup__Q24Game17SingleGameSectionFPQ24Game5Onyon
	.4byte playMovie_helloPikmin__Q24Game17SingleGameSectionFPQ24Game4Piki
	.4byte enableTimer__Q24Game17SingleGameSectionFfUl
	.4byte disableTimer__Q24Game17SingleGameSectionFUl
	.4byte getTimerType__Q24Game17SingleGameSectionFv
	.4byte onMovieStart__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl
	.4byte onMovieDone__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl
	.4byte onMovieCommand__Q24Game17SingleGameSectionFi
	.4byte startFadeout__Q24Game15BaseGameSectionFf
	.4byte startFadein__Q24Game15BaseGameSectionFf
	.4byte startFadeoutin__Q24Game15BaseGameSectionFf
	.4byte startFadeblack__Q24Game15BaseGameSectionFv
	.4byte startFadewhite__Q24Game15BaseGameSectionFv
	.4byte gmOrimaDown__Q24Game17SingleGameSectionFi
	.4byte gmPikminZero__Q24Game17SingleGameSectionFv
	.4byte openCaveInMenu__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Itemi
	.4byte openCaveMoreMenu__Q24Game17SingleGameSectionFPQ34Game8ItemHole4ItemP10Controller
	.4byte openKanketuMenu__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
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

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 4
gfNAN___Q24Game5P2JST:
	.skip 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_805185C0:
	.asciz "yes"
.balign 4
lbl_805185C4:
	.float 2.5
lbl_805185C8:
	.float 0.0
.balign 4
lbl_805185CC:
	.asciz "cave-no"
.balign 4
lbl_805185D4:
	.asciz "more-no"
.balign 4
lbl_805185DC:
	.asciz "kank-no"
.balign 4
lbl_805185E4:
	.float 32768.0
lbl_805185E8:
	.float 15.0
lbl_805185EC:
	.float 40.0
lbl_805185F0:
	.float 6.2831855
lbl_805185F4:
	.float 770.0
lbl_805185F8:
	.float 850.0
lbl_805185FC:
	.float 120.0
lbl_80518600:
	.float 325.9493
lbl_80518604:
	.float -325.9493
lbl_80518608:
	.float 2700.0
lbl_8051860C:
	.float 150.0
.balign 8
lbl_80518610:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_80518618:
	.float 900.0
lbl_8051861C:
	.float 1.0
lbl_80518620:
	.float 0.9
lbl_80518624:
	.float 0.8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.if version == 1
.global __dt__Q24Game17SingleGameSectionFv
__dt__Q24Game17SingleGameSectionFv:
/* 80152074 0014EFB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152078 0014EFB8  7C 08 02 A6 */	mflr r0
/* 8015207C 0014EFBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152080 0014EFC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152084 0014EFC4  7C 9F 23 78 */	mr r31, r4
/* 80152088 0014EFC8  93 C1 00 08 */	stw r30, 8(r1)
/* 8015208C 0014EFCC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80152090 0014EFD0  41 82 00 4C */	beq .L_801520DC
/* 80152094 0014EFD4  3C 60 80 4B */	lis r3, __vt__Q24Game17SingleGameSection@ha
/* 80152098 0014EFD8  34 1E 01 B8 */	addic. r0, r30, 0x1dc
/* 8015209C 0014EFDC  38 63 13 50 */	addi r3, r3, __vt__Q24Game17SingleGameSection@l
/* 801520A0 0014EFE0  38 00 00 00 */	li r0, 0
/* 801520A4 0014EFE4  90 7E 00 00 */	stw r3, 0(r30)
/* 801520A8 0014EFE8  90 0D 95 B0 */	stw r0, mgr__5Radar@sda21(r13)
/* 801520AC 0014EFEC  41 82 00 14 */	beq .L_801520C0
/* 801520B0 0014EFF0  34 7E 02 14 */	addic. r3, r30, 0x238
/* 801520B4 0014EFF4  41 82 00 0C */	beq .L_801520C0
/* 801520B8 0014EFF8  38 80 00 00 */	li r4, 0
/* 801520BC 0014EFFC  4B ED 47 15 */	bl __dt__10JSUPtrLinkFv
.L_801520C0:
/* 801520C0 0014F000  7F C3 F3 78 */	mr r3, r30
/* 801520C4 0014F004  38 80 00 00 */	li r4, 0
/* 801520C8 0014F008  4B FF 91 15 */	bl __dt__Q24Game15BaseGameSectionFv
/* 801520CC 0014F00C  7F E0 07 35 */	extsh. r0, r31
/* 801520D0 0014F010  40 81 00 0C */	ble .L_801520DC
/* 801520D4 0014F014  7F C3 F3 78 */	mr r3, r30
/* 801520D8 0014F018  4B ED 1F DD */	bl __dl__FPv
.L_801520DC:
/* 801520DC 0014F01C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801520E0 0014F020  7F C3 F3 78 */	mr r3, r30
/* 801520E4 0014F024  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801520E8 0014F028  83 C1 00 08 */	lwz r30, 8(r1)
/* 801520EC 0014F02C  7C 08 03 A6 */	mtlr r0
/* 801520F0 0014F030  38 21 00 10 */	addi r1, r1, 0x10
/* 801520F4 0014F034  4E 80 00 20 */	blr 
.else
.global __dt__Q24Game17SingleGameSectionFv
__dt__Q24Game17SingleGameSectionFv:
/* 80152074 0014EFB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152078 0014EFB8  7C 08 02 A6 */	mflr r0
/* 8015207C 0014EFBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152080 0014EFC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152084 0014EFC4  7C 9F 23 78 */	mr r31, r4
/* 80152088 0014EFC8  93 C1 00 08 */	stw r30, 8(r1)
/* 8015208C 0014EFCC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80152090 0014EFD0  41 82 00 4C */	beq .L_801520DC
/* 80152094 0014EFD4  3C 60 80 4B */	lis r3, __vt__Q24Game17SingleGameSection@ha
/* 80152098 0014EFD8  34 1E 01 B8 */	addic. r0, r30, 0x1b8
/* 8015209C 0014EFDC  38 63 13 50 */	addi r3, r3, __vt__Q24Game17SingleGameSection@l
/* 801520A0 0014EFE0  38 00 00 00 */	li r0, 0
/* 801520A4 0014EFE4  90 7E 00 00 */	stw r3, 0(r30)
/* 801520A8 0014EFE8  90 0D 95 B0 */	stw r0, mgr__5Radar@sda21(r13)
/* 801520AC 0014EFEC  41 82 00 14 */	beq .L_801520C0
/* 801520B0 0014EFF0  34 7E 02 14 */	addic. r3, r30, 0x214
/* 801520B4 0014EFF4  41 82 00 0C */	beq .L_801520C0
/* 801520B8 0014EFF8  38 80 00 00 */	li r4, 0
/* 801520BC 0014EFFC  4B ED 47 15 */	bl __dt__10JSUPtrLinkFv
.L_801520C0:
/* 801520C0 0014F000  7F C3 F3 78 */	mr r3, r30
/* 801520C4 0014F004  38 80 00 00 */	li r4, 0
/* 801520C8 0014F008  4B FF 91 15 */	bl __dt__Q24Game15BaseGameSectionFv
/* 801520CC 0014F00C  7F E0 07 35 */	extsh. r0, r31
/* 801520D0 0014F010  40 81 00 0C */	ble .L_801520DC
/* 801520D4 0014F014  7F C3 F3 78 */	mr r3, r30
/* 801520D8 0014F018  4B ED 1F DD */	bl __dl__FPv
.L_801520DC:
/* 801520DC 0014F01C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801520E0 0014F020  7F C3 F3 78 */	mr r3, r30
/* 801520E4 0014F024  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801520E8 0014F028  83 C1 00 08 */	lwz r30, 8(r1)
/* 801520EC 0014F02C  7C 08 03 A6 */	mtlr r0
/* 801520F0 0014F030  38 21 00 10 */	addi r1, r1, 0x10
/* 801520F4 0014F034  4E 80 00 20 */	blr 
.endif

.global startMainBgm__Q24Game17SingleGameSectionFv
startMainBgm__Q24Game17SingleGameSectionFv:
/* 801520F8 0014F038  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801520FC 0014F03C  7C 08 02 A6 */	mflr r0
/* 80152100 0014F040  3C 80 80 48 */	lis r4, lbl_8047CD98@ha
/* 80152104 0014F044  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152108 0014F048  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015210C 0014F04C  3B E4 CD 98 */	addi r31, r4, lbl_8047CD98@l
/* 80152110 0014F050  93 C1 00 08 */	stw r30, 8(r1)
/* 80152114 0014F054  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80152118 0014F058  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 8015211C 0014F05C  60 00 00 02 */	ori r0, r0, 2
/* 80152120 0014F060  98 03 00 3C */	stb r0, 0x3c(r3)
/* 80152124 0014F064  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80152128 0014F068  28 00 00 00 */	cmplwi r0, 0
/* 8015212C 0014F06C  40 82 00 18 */	bne .L_80152144
/* 80152130 0014F070  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152134 0014F074  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152138 0014F078  38 80 01 D3 */	li r4, 0x1d3
/* 8015213C 0014F07C  4C C6 31 82 */	crclr 6
/* 80152140 0014F080  4B ED 85 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152144:
/* 80152144 0014F084  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80152148 0014F088  80 1E 00 04 */	lwz r0, 4(r30)
/* 8015214C 0014F08C  28 00 00 00 */	cmplwi r0, 0
/* 80152150 0014F090  40 82 00 18 */	bne .L_80152168
/* 80152154 0014F094  38 7F 00 38 */	addi r3, r31, 0x38
/* 80152158 0014F098  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8015215C 0014F09C  38 80 00 C7 */	li r4, 0xc7
/* 80152160 0014F0A0  4C C6 31 82 */	crclr 6
/* 80152164 0014F0A4  4B ED 84 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152168:
/* 80152168 0014F0A8  80 7E 00 04 */	lwz r3, 4(r30)
/* 8015216C 0014F0AC  80 63 00 04 */	lwz r3, 4(r3)
/* 80152170 0014F0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 80152174 0014F0B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80152178 0014F0B8  7D 89 03 A6 */	mtctr r12
/* 8015217C 0014F0BC  4E 80 04 21 */	bctrl 
/* 80152180 0014F0C0  80 0D 95 B0 */	lwz r0, mgr__5Radar@sda21(r13)
/* 80152184 0014F0C4  28 00 00 00 */	cmplwi r0, 0
/* 80152188 0014F0C8  41 82 00 DC */	beq .L_80152264
/* 8015218C 0014F0CC  48 0C C4 A5 */	bl getNumOtakaraItems__Q25Radar3MgrFv
/* 80152190 0014F0D0  2C 03 00 00 */	cmpwi r3, 0
/* 80152194 0014F0D4  40 82 00 D0 */	bne .L_80152264
/* 80152198 0014F0D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015219C 0014F0DC  88 03 00 48 */	lbz r0, 0x48(r3)
/* 801521A0 0014F0E0  28 00 00 00 */	cmplwi r0, 0
/* 801521A4 0014F0E4  41 82 00 C0 */	beq .L_80152264
/* 801521A8 0014F0E8  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801521AC 0014F0EC  28 00 00 00 */	cmplwi r0, 0
/* 801521B0 0014F0F0  40 82 00 18 */	bne .L_801521C8
/* 801521B4 0014F0F4  38 7F 00 20 */	addi r3, r31, 0x20
/* 801521B8 0014F0F8  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801521BC 0014F0FC  38 80 01 D3 */	li r4, 0x1d3
/* 801521C0 0014F100  4C C6 31 82 */	crclr 6
/* 801521C4 0014F104  4B ED 84 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801521C8:
/* 801521C8 0014F108  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 801521CC 0014F10C  28 1E 00 00 */	cmplwi r30, 0
/* 801521D0 0014F110  40 82 00 18 */	bne .L_801521E8
/* 801521D4 0014F114  38 7F 00 20 */	addi r3, r31, 0x20
/* 801521D8 0014F118  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801521DC 0014F11C  38 80 01 DC */	li r4, 0x1dc
/* 801521E0 0014F120  4C C6 31 82 */	crclr 6
/* 801521E4 0014F124  4B ED 84 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801521E8:
/* 801521E8 0014F128  80 1E 00 04 */	lwz r0, 4(r30)
/* 801521EC 0014F12C  28 00 00 00 */	cmplwi r0, 0
/* 801521F0 0014F130  40 82 00 18 */	bne .L_80152208
/* 801521F4 0014F134  38 7F 00 38 */	addi r3, r31, 0x38
/* 801521F8 0014F138  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801521FC 0014F13C  38 80 00 CF */	li r4, 0xcf
/* 80152200 0014F140  4C C6 31 82 */	crclr 6
/* 80152204 0014F144  4B ED 84 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152208:
/* 80152208 0014F148  80 7E 00 04 */	lwz r3, 4(r30)
/* 8015220C 0014F14C  83 C3 00 04 */	lwz r30, 4(r3)
/* 80152210 0014F150  28 1E 00 00 */	cmplwi r30, 0
/* 80152214 0014F154  40 82 00 18 */	bne .L_8015222C
/* 80152218 0014F158  38 7F 00 38 */	addi r3, r31, 0x38
/* 8015221C 0014F15C  38 BF 00 44 */	addi r5, r31, 0x44
/* 80152220 0014F160  38 80 00 D1 */	li r4, 0xd1
/* 80152224 0014F164  4C C6 31 82 */	crclr 6
/* 80152228 0014F168  4B ED 84 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015222C:
/* 8015222C 0014F16C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80152230 0014F170  7F C3 F3 78 */	mr r3, r30
/* 80152234 0014F174  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80152238 0014F178  7D 89 03 A6 */	mtctr r12
/* 8015223C 0014F17C  4E 80 04 21 */	bctrl 
/* 80152240 0014F180  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80152244 0014F184  40 82 00 18 */	bne .L_8015225C
/* 80152248 0014F188  38 7F 00 68 */	addi r3, r31, 0x68
/* 8015224C 0014F18C  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152250 0014F190  38 80 01 77 */	li r4, 0x177
/* 80152254 0014F194  4C C6 31 82 */	crclr 6
/* 80152258 0014F198  4B ED 83 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015225C:
/* 8015225C 0014F19C  7F C3 F3 78 */	mr r3, r30
/* 80152260 0014F1A0  48 31 7E 95 */	bl stopPollutionSe__Q23PSM10Scene_CaveFv
.L_80152264:
/* 80152264 0014F1A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152268 0014F1A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015226C 0014F1AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80152270 0014F1B0  7C 08 03 A6 */	mtlr r0
/* 80152274 0014F1B4  38 21 00 10 */	addi r1, r1, 0x10
/* 80152278 0014F1B8  4E 80 00 20 */	blr 

.global isGameScene__Q23PSM9SceneBaseFv # weak function
isGameScene__Q23PSM9SceneBaseFv:
/* 8015227C 0014F1BC  38 60 00 00 */	li r3, 0
/* 80152280 0014F1C0  4E 80 00 20 */	blr 

.global init__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSection
init__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSection:
/* 80152284 0014F1C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152288 0014F1C8  7C 08 02 A6 */	mflr r0
/* 8015228C 0014F1CC  38 80 00 0C */	li r4, 0xc
/* 80152290 0014F1D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152294 0014F1D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152298 0014F1D8  7C 7F 1B 78 */	mr r31, r3
/* 8015229C 0014F1DC  93 C1 00 08 */	stw r30, 8(r1)
/* 801522A0 0014F1E0  48 00 41 35 */	bl "create__Q24Game40StateMachine<Q24Game17SingleGameSection>Fi"
/* 801522A4 0014F1E4  38 60 00 38 */	li r3, 0x38
/* 801522A8 0014F1E8  4B ED 1B FD */	bl __nw__FUl
/* 801522AC 0014F1EC  7C 64 1B 79 */	or. r4, r3, r3
/* 801522B0 0014F1F0  41 82 00 0C */	beq .L_801522BC
/* 801522B4 0014F1F4  48 0C A4 65 */	bl __ct__Q34Game10SingleGame9FileStateFv
/* 801522B8 0014F1F8  7C 64 1B 78 */	mr r4, r3
.L_801522BC:
/* 801522BC 0014F1FC  7F E3 FB 78 */	mr r3, r31
/* 801522C0 0014F200  48 00 42 45 */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 801522C4 0014F204  38 60 00 30 */	li r3, 0x30
/* 801522C8 0014F208  4B ED 1B DD */	bl __nw__FUl
/* 801522CC 0014F20C  7C 64 1B 79 */	or. r4, r3, r3
/* 801522D0 0014F210  41 82 00 0C */	beq .L_801522DC
/* 801522D4 0014F214  48 0C 96 79 */	bl __ct__Q34Game10SingleGame11SelectStateFv
/* 801522D8 0014F218  7C 64 1B 78 */	mr r4, r3
.L_801522DC:
/* 801522DC 0014F21C  7F E3 FB 78 */	mr r3, r31
/* 801522E0 0014F220  48 00 42 25 */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 801522E4 0014F224  38 60 00 2C */	li r3, 0x2c
/* 801522E8 0014F228  4B ED 1B BD */	bl __nw__FUl
/* 801522EC 0014F22C  7C 64 1B 79 */	or. r4, r3, r3
/* 801522F0 0014F230  41 82 00 38 */	beq .L_80152328
/* 801522F4 0014F234  3C 60 80 4B */	lis r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
/* 801522F8 0014F238  3C A0 80 4B */	lis r5, __vt__Q34Game10SingleGame5State@ha
/* 801522FC 0014F23C  38 03 13 18 */	addi r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
/* 80152300 0014F240  3C 60 80 4C */	lis r3, __vt__Q34Game10SingleGame9LoadState@ha
/* 80152304 0014F244  90 04 00 00 */	stw r0, 0(r4)
/* 80152308 0014F248  38 00 00 02 */	li r0, 2
/* 8015230C 0014F24C  38 C0 00 00 */	li r6, 0
/* 80152310 0014F250  38 A5 12 D0 */	addi r5, r5, __vt__Q34Game10SingleGame5State@l
/* 80152314 0014F254  90 04 00 04 */	stw r0, 4(r4)
/* 80152318 0014F258  38 03 15 E4 */	addi r0, r3, __vt__Q34Game10SingleGame9LoadState@l
/* 8015231C 0014F25C  90 C4 00 08 */	stw r6, 8(r4)
/* 80152320 0014F260  90 A4 00 00 */	stw r5, 0(r4)
/* 80152324 0014F264  90 04 00 00 */	stw r0, 0(r4)
.L_80152328:
/* 80152328 0014F268  7F E3 FB 78 */	mr r3, r31
/* 8015232C 0014F26C  48 00 41 D9 */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 80152330 0014F270  38 60 00 24 */	li r3, 0x24
/* 80152334 0014F274  4B ED 1B 71 */	bl __nw__FUl
/* 80152338 0014F278  7C 64 1B 79 */	or. r4, r3, r3
/* 8015233C 0014F27C  41 82 00 38 */	beq .L_80152374
/* 80152340 0014F280  3C 60 80 4B */	lis r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
/* 80152344 0014F284  3C A0 80 4B */	lis r5, __vt__Q34Game10SingleGame5State@ha
/* 80152348 0014F288  38 03 13 18 */	addi r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
/* 8015234C 0014F28C  3C 60 80 4C */	lis r3, __vt__Q34Game10SingleGame9GameState@ha
/* 80152350 0014F290  90 04 00 00 */	stw r0, 0(r4)
/* 80152354 0014F294  38 00 00 03 */	li r0, 3
/* 80152358 0014F298  38 C0 00 00 */	li r6, 0
/* 8015235C 0014F29C  38 A5 12 D0 */	addi r5, r5, __vt__Q34Game10SingleGame5State@l
/* 80152360 0014F2A0  90 04 00 04 */	stw r0, 4(r4)
/* 80152364 0014F2A4  38 03 05 A4 */	addi r0, r3, __vt__Q34Game10SingleGame9GameState@l
/* 80152368 0014F2A8  90 C4 00 08 */	stw r6, 8(r4)
/* 8015236C 0014F2AC  90 A4 00 00 */	stw r5, 0(r4)
/* 80152370 0014F2B0  90 04 00 00 */	stw r0, 0(r4)
.L_80152374:
/* 80152374 0014F2B4  7F E3 FB 78 */	mr r3, r31
/* 80152378 0014F2B8  48 00 41 8D */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 8015237C 0014F2BC  38 60 00 1C */	li r3, 0x1c
/* 80152380 0014F2C0  4B ED 1B 25 */	bl __nw__FUl
/* 80152384 0014F2C4  7C 64 1B 79 */	or. r4, r3, r3
/* 80152388 0014F2C8  41 82 00 38 */	beq .L_801523C0
/* 8015238C 0014F2CC  3C 60 80 4B */	lis r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
/* 80152390 0014F2D0  3C A0 80 4B */	lis r5, __vt__Q34Game10SingleGame5State@ha
/* 80152394 0014F2D4  38 03 13 18 */	addi r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
/* 80152398 0014F2D8  3C 60 80 4C */	lis r3, __vt__Q34Game10SingleGame9CaveState@ha
/* 8015239C 0014F2DC  90 04 00 00 */	stw r0, 0(r4)
/* 801523A0 0014F2E0  38 00 00 04 */	li r0, 4
/* 801523A4 0014F2E4  38 C0 00 00 */	li r6, 0
/* 801523A8 0014F2E8  38 A5 12 D0 */	addi r5, r5, __vt__Q34Game10SingleGame5State@l
/* 801523AC 0014F2EC  90 04 00 04 */	stw r0, 4(r4)
/* 801523B0 0014F2F0  38 03 05 FC */	addi r0, r3, __vt__Q34Game10SingleGame9CaveState@l
/* 801523B4 0014F2F4  90 C4 00 08 */	stw r6, 8(r4)
/* 801523B8 0014F2F8  90 A4 00 00 */	stw r5, 0(r4)
/* 801523BC 0014F2FC  90 04 00 00 */	stw r0, 0(r4)
.L_801523C0:
/* 801523C0 0014F300  7F E3 FB 78 */	mr r3, r31
/* 801523C4 0014F304  48 00 41 41 */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 801523C8 0014F308  38 60 00 20 */	li r3, 0x20
/* 801523CC 0014F30C  4B ED 1A D9 */	bl __nw__FUl
/* 801523D0 0014F310  7C 7E 1B 79 */	or. r30, r3, r3
/* 801523D4 0014F314  41 82 00 40 */	beq .L_80152414
/* 801523D8 0014F318  3C 60 80 4B */	lis r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
/* 801523DC 0014F31C  3C 80 80 4B */	lis r4, __vt__Q34Game10SingleGame5State@ha
/* 801523E0 0014F320  38 03 13 18 */	addi r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
/* 801523E4 0014F324  3C 60 80 4C */	lis r3, __vt__Q34Game10SingleGame11DayEndState@ha
/* 801523E8 0014F328  90 1E 00 00 */	stw r0, 0(r30)
/* 801523EC 0014F32C  38 00 00 05 */	li r0, 5
/* 801523F0 0014F330  38 A0 00 00 */	li r5, 0
/* 801523F4 0014F334  38 84 12 D0 */	addi r4, r4, __vt__Q34Game10SingleGame5State@l
/* 801523F8 0014F338  90 1E 00 04 */	stw r0, 4(r30)
/* 801523FC 0014F33C  38 03 16 3C */	addi r0, r3, __vt__Q34Game10SingleGame11DayEndState@l
/* 80152400 0014F340  38 7E 00 18 */	addi r3, r30, 0x18
/* 80152404 0014F344  90 BE 00 08 */	stw r5, 8(r30)
/* 80152408 0014F348  90 9E 00 00 */	stw r4, 0(r30)
/* 8015240C 0014F34C  90 1E 00 00 */	stw r0, 0(r30)
/* 80152410 0014F350  48 09 EE 31 */	bl __ct__Q24Game13PikiContainerFv
.L_80152414:
/* 80152414 0014F354  7F E3 FB 78 */	mr r3, r31
/* 80152418 0014F358  7F C4 F3 78 */	mr r4, r30
/* 8015241C 0014F35C  48 00 40 E9 */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 80152420 0014F360  38 60 00 14 */	li r3, 0x14
/* 80152424 0014F364  4B ED 1A 81 */	bl __nw__FUl
/* 80152428 0014F368  7C 64 1B 79 */	or. r4, r3, r3
/* 8015242C 0014F36C  41 82 00 38 */	beq .L_80152464
/* 80152430 0014F370  3C 60 80 4B */	lis r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
/* 80152434 0014F374  3C A0 80 4B */	lis r5, __vt__Q34Game10SingleGame5State@ha
/* 80152438 0014F378  38 03 13 18 */	addi r0, r3, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
/* 8015243C 0014F37C  3C 60 80 4B */	lis r3, __vt__Q34Game10SingleGame15CaveDayEndState@ha
/* 80152440 0014F380  90 04 00 00 */	stw r0, 0(r4)
/* 80152444 0014F384  38 00 00 06 */	li r0, 6
/* 80152448 0014F388  38 C0 00 00 */	li r6, 0
/* 8015244C 0014F38C  38 A5 12 D0 */	addi r5, r5, __vt__Q34Game10SingleGame5State@l
/* 80152450 0014F390  90 04 00 04 */	stw r0, 4(r4)
/* 80152454 0014F394  38 03 12 88 */	addi r0, r3, __vt__Q34Game10SingleGame15CaveDayEndState@l
/* 80152458 0014F398  90 C4 00 08 */	stw r6, 8(r4)
/* 8015245C 0014F39C  90 A4 00 00 */	stw r5, 0(r4)
/* 80152460 0014F3A0  90 04 00 00 */	stw r0, 0(r4)
.L_80152464:
/* 80152464 0014F3A4  7F E3 FB 78 */	mr r3, r31
/* 80152468 0014F3A8  48 00 40 9D */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 8015246C 0014F3AC  38 60 01 40 */	li r3, 0x140
/* 80152470 0014F3B0  4B ED 1A 35 */	bl __nw__FUl
/* 80152474 0014F3B4  7C 64 1B 79 */	or. r4, r3, r3
/* 80152478 0014F3B8  41 82 00 0C */	beq .L_80152484
/* 8015247C 0014F3BC  48 0C 7A CD */	bl __ct__Q34Game10SingleGame15MainResultStateFv
/* 80152480 0014F3C0  7C 64 1B 78 */	mr r4, r3
.L_80152484:
/* 80152484 0014F3C4  7F E3 FB 78 */	mr r3, r31
/* 80152488 0014F3C8  48 00 40 7D */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 8015248C 0014F3CC  38 60 01 00 */	li r3, 0x100
/* 80152490 0014F3D0  4B ED 1A 15 */	bl __nw__FUl
/* 80152494 0014F3D4  7C 64 1B 79 */	or. r4, r3, r3
/* 80152498 0014F3D8  41 82 00 0C */	beq .L_801524A4
/* 8015249C 0014F3DC  48 0C 87 85 */	bl __ct__Q34Game10SingleGame15CaveResultStateFv
/* 801524A0 0014F3E0  7C 64 1B 78 */	mr r4, r3
.L_801524A4:
/* 801524A4 0014F3E4  7F E3 FB 78 */	mr r3, r31
/* 801524A8 0014F3E8  48 00 40 5D */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 801524AC 0014F3EC  38 60 00 28 */	li r3, 0x28
/* 801524B0 0014F3F0  4B ED 19 F5 */	bl __nw__FUl
/* 801524B4 0014F3F4  7C 64 1B 79 */	or. r4, r3, r3
/* 801524B8 0014F3F8  41 82 00 0C */	beq .L_801524C4
/* 801524BC 0014F3FC  48 0C CA 1D */	bl __ct__Q34Game10SingleGame10MovieStateFv
/* 801524C0 0014F400  7C 64 1B 78 */	mr r4, r3
.L_801524C4:
/* 801524C4 0014F404  7F E3 FB 78 */	mr r3, r31
/* 801524C8 0014F408  48 00 40 3D */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 801524CC 0014F40C  38 60 01 18 */	li r3, 0x118
/* 801524D0 0014F410  4B ED 19 D5 */	bl __nw__FUl
/* 801524D4 0014F414  7C 64 1B 79 */	or. r4, r3, r3
/* 801524D8 0014F418  41 82 00 0C */	beq .L_801524E4
/* 801524DC 0014F41C  48 0D 00 11 */	bl __ct__Q34Game10SingleGame10ZukanStateFv
/* 801524E0 0014F420  7C 64 1B 78 */	mr r4, r3
.L_801524E4:
/* 801524E4 0014F424  7F E3 FB 78 */	mr r3, r31
/* 801524E8 0014F428  48 00 40 1D */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 801524EC 0014F42C  38 60 00 30 */	li r3, 0x30
/* 801524F0 0014F430  4B ED 19 B5 */	bl __nw__FUl
/* 801524F4 0014F434  7C 64 1B 79 */	or. r4, r3, r3
/* 801524F8 0014F438  41 82 00 0C */	beq .L_80152504
/* 801524FC 0014F43C  48 0E 01 AD */	bl __ct__Q34Game10SingleGame11EndingStateFv
/* 80152500 0014F440  7C 64 1B 78 */	mr r4, r3
.L_80152504:
/* 80152504 0014F444  7F E3 FB 78 */	mr r3, r31
/* 80152508 0014F448  48 00 3F FD */	bl "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>"
/* 8015250C 0014F44C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152510 0014F450  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152514 0014F454  83 C1 00 08 */	lwz r30, 8(r1)
/* 80152518 0014F458  7C 08 03 A6 */	mtlr r0
/* 8015251C 0014F45C  38 21 00 10 */	addi r1, r1, 0x10
/* 80152520 0014F460  4E 80 00 20 */	blr 

.global draw__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionR8Graphics # weak function
draw__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionR8Graphics:
/* 80152524 0014F464  4E 80 00 20 */	blr 

.global transit__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSectioniPQ24Game8StateArg
transit__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSectioniPQ24Game8StateArg:
/* 80152528 0014F468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015252C 0014F46C  7C 08 02 A6 */	mflr r0
/* 80152530 0014F470  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152534 0014F474  48 00 3F 35 */	bl "transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
/* 80152538 0014F478  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015253C 0014F47C  7C 08 03 A6 */	mtlr r0
/* 80152540 0014F480  38 21 00 10 */	addi r1, r1, 0x10
/* 80152544 0014F484  4E 80 00 20 */	blr 

.global getState__Q34Game10SingleGame3FSMFi
getState__Q34Game10SingleGame3FSMFi:
/* 80152548 0014F488  2C 04 00 00 */	cmpwi r4, 0
/* 8015254C 0014F48C  41 80 00 10 */	blt .L_8015255C
/* 80152550 0014F490  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80152554 0014F494  7C 04 00 00 */	cmpw r4, r0
/* 80152558 0014F498  41 80 00 0C */	blt .L_80152564
.L_8015255C:
/* 8015255C 0014F49C  38 00 00 00 */	li r0, 0
/* 80152560 0014F4A0  48 00 00 08 */	b .L_80152568
.L_80152564:
/* 80152564 0014F4A4  38 00 00 01 */	li r0, 1
.L_80152568:
/* 80152568 0014F4A8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8015256C 0014F4AC  41 82 00 14 */	beq .L_80152580
/* 80152570 0014F4B0  80 63 00 04 */	lwz r3, 4(r3)
/* 80152574 0014F4B4  54 80 10 3A */	slwi r0, r4, 2
/* 80152578 0014F4B8  7C 63 00 2E */	lwzx r3, r3, r0
/* 8015257C 0014F4BC  4E 80 00 20 */	blr 
.L_80152580:
/* 80152580 0014F4C0  38 60 00 00 */	li r3, 0
/* 80152584 0014F4C4  4E 80 00 20 */	blr 

.if version == 1
.global accountEarnings__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game16PelletCropMemoryb
accountEarnings__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game16PelletCropMemoryb:
/* 80152588 0014F4C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8015258C 0014F4CC  7C 08 02 A6 */	mflr r0
/* 80152590 0014F4D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80152594 0014F4D4  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 80152598 0014F4D8  7C BE 2B 78 */	mr r30, r5
/* 8015259C 0014F4DC  7C 9D 23 78 */	mr r29, r4
/* 801525A0 0014F4E0  7C DF 33 78 */	mr r31, r6
/* 801525A4 0014F4E4  3B 3E 00 04 */	addi r25, r30, 4
/* 801525A8 0014F4E8  3B 00 00 00 */	li r24, 0
/* 801525AC 0014F4EC  83 4D 95 20 */	lwz r26, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 801525B0 0014F4F0  48 00 00 9C */	b .L_8015264C
.L_801525B4:
/* 801525B4 0014F4F4  7F 43 D3 78 */	mr r3, r26
/* 801525B8 0014F4F8  7F 04 C3 78 */	mr r4, r24
/* 801525BC 0014F4FC  48 01 97 CD */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 801525C0 0014F500  7C 7C 1B 79 */	or. r28, r3, r3
/* 801525C4 0014F504  41 82 00 84 */	beq .L_80152648
/* 801525C8 0014F508  83 7C 01 70 */	lwz r27, 0x170(r28)
/* 801525CC 0014F50C  7F 23 CB 78 */	mr r3, r25
/* 801525D0 0014F510  7F 04 C3 78 */	mr r4, r24
/* 801525D4 0014F514  48 09 2E 2D */	bl __cl__Q24Game11KindCounterFi
/* 801525D8 0014F518  88 03 00 00 */	lbz r0, 0(r3)
/* 801525DC 0014F51C  7F 23 CB 78 */	mr r3, r25
/* 801525E0 0014F520  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 801525E4 0014F524  7F 04 C3 78 */	mr r4, r24
/* 801525E8 0014F528  7C C0 D9 D6 */	mullw r6, r0, r27
/* 801525EC 0014F52C  80 05 00 E8 */	lwz r0, 0xe8(r5)
/* 801525F0 0014F530  7C 00 32 14 */	add r0, r0, r6
/* 801525F4 0014F534  90 05 00 E8 */	stw r0, 0xe8(r5)
/* 801525F8 0014F538  48 09 2E 09 */	bl __cl__Q24Game11KindCounterFi
/* 801525FC 0014F53C  88 03 00 00 */	lbz r0, 0(r3)
/* 80152600 0014F540  28 00 00 00 */	cmplwi r0, 0
/* 80152604 0014F544  41 82 00 44 */	beq .L_80152648
/* 80152608 0014F548  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015260C 0014F54C  7F 44 D3 78 */	mr r4, r26
/* 80152610 0014F550  7F 05 C3 78 */	mr r5, r24
/* 80152614 0014F554  48 09 4F 81 */	bl obtainPellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80152618 0014F558  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8015261C 0014F55C  41 82 00 2C */	beq .L_80152648
/* 80152620 0014F560  80 9C 01 80 */	lwz r4, 0x180(r28)
/* 80152624 0014F564  38 62 A2 60 */	addi r3, r2, lbl_805185C0@sda21
/* 80152628 0014F568  4B F7 80 99 */	bl strcmp
/* 8015262C 0014F56C  2C 03 00 00 */	cmpwi r3, 0
/* 80152630 0014F570  40 82 00 18 */	bne .L_80152648
/* 80152634 0014F574  80 9D 02 2C */	lwz r4, 0x250(r29)
/* 80152638 0014F578  38 BD 02 30 */	addi r5, r29, 0x254
/* 8015263C 0014F57C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80152640 0014F580  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80152644 0014F584  48 09 63 1D */	bl incCaveOtakara__Q24Game8PlayDataFiR4ID32
.L_80152648:
/* 80152648 0014F588  3B 18 00 01 */	addi r24, r24, 1
.L_8015264C:
/* 8015264C 0014F58C  A0 19 00 00 */	lhz r0, 0(r25)
/* 80152650 0014F590  7C 18 00 00 */	cmpw r24, r0
/* 80152654 0014F594  41 80 FF 60 */	blt .L_801525B4
/* 80152658 0014F598  88 1D 02 74 */	lbz r0, 0x298(r29)
/* 8015265C 0014F59C  28 00 00 00 */	cmplwi r0, 0
/* 80152660 0014F5A0  40 82 00 60 */	bne .L_801526C0
/* 80152664 0014F5A4  83 8D 95 00 */	lwz r28, mgr__Q24Game13PelletCarcass@sda21(r13)
/* 80152668 0014F5A8  3B 1E 00 14 */	addi r24, r30, 0x14
/* 8015266C 0014F5AC  3B 20 00 00 */	li r25, 0
/* 80152670 0014F5B0  48 00 00 44 */	b .L_801526B4
.L_80152674:
/* 80152674 0014F5B4  7F 83 E3 78 */	mr r3, r28
/* 80152678 0014F5B8  7F 24 CB 78 */	mr r4, r25
/* 8015267C 0014F5BC  48 01 97 0D */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80152680 0014F5C0  28 03 00 00 */	cmplwi r3, 0
/* 80152684 0014F5C4  41 82 00 2C */	beq .L_801526B0
/* 80152688 0014F5C8  83 63 01 70 */	lwz r27, 0x170(r3)
/* 8015268C 0014F5CC  7F 03 C3 78 */	mr r3, r24
/* 80152690 0014F5D0  7F 24 CB 78 */	mr r4, r25
/* 80152694 0014F5D4  48 09 2D 6D */	bl __cl__Q24Game11KindCounterFi
/* 80152698 0014F5D8  88 03 00 00 */	lbz r0, 0(r3)
/* 8015269C 0014F5DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801526A0 0014F5E0  7C 80 D9 D6 */	mullw r4, r0, r27
/* 801526A4 0014F5E4  80 03 00 E8 */	lwz r0, 0xe8(r3)
/* 801526A8 0014F5E8  7C 00 22 14 */	add r0, r0, r4
/* 801526AC 0014F5EC  90 03 00 E8 */	stw r0, 0xe8(r3)
.L_801526B0:
/* 801526B0 0014F5F0  3B 39 00 01 */	addi r25, r25, 1
.L_801526B4:
/* 801526B4 0014F5F4  A0 18 00 00 */	lhz r0, 0(r24)
/* 801526B8 0014F5F8  7C 19 00 00 */	cmpw r25, r0
/* 801526BC 0014F5FC  41 80 FF B8 */	blt .L_80152674
.L_801526C0:
/* 801526C0 0014F600  83 8D 95 28 */	lwz r28, mgr__Q24Game10PelletItem@sda21(r13)
/* 801526C4 0014F604  3B 1E 00 0C */	addi r24, r30, 0xc
/* 801526C8 0014F608  3B 20 00 00 */	li r25, 0
/* 801526CC 0014F60C  48 00 00 9C */	b .L_80152768
.L_801526D0:
/* 801526D0 0014F610  7F 83 E3 78 */	mr r3, r28
/* 801526D4 0014F614  7F 24 CB 78 */	mr r4, r25
/* 801526D8 0014F618  48 01 96 B1 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 801526DC 0014F61C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801526E0 0014F620  41 82 00 84 */	beq .L_80152764
/* 801526E4 0014F624  83 7E 01 70 */	lwz r27, 0x170(r30)
/* 801526E8 0014F628  7F 03 C3 78 */	mr r3, r24
/* 801526EC 0014F62C  7F 24 CB 78 */	mr r4, r25
/* 801526F0 0014F630  48 09 2D 11 */	bl __cl__Q24Game11KindCounterFi
/* 801526F4 0014F634  88 03 00 00 */	lbz r0, 0(r3)
/* 801526F8 0014F638  7F 03 C3 78 */	mr r3, r24
/* 801526FC 0014F63C  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80152700 0014F640  7F 24 CB 78 */	mr r4, r25
/* 80152704 0014F644  7C C0 D9 D6 */	mullw r6, r0, r27
/* 80152708 0014F648  80 05 00 E8 */	lwz r0, 0xe8(r5)
/* 8015270C 0014F64C  7C 00 32 14 */	add r0, r0, r6
/* 80152710 0014F650  90 05 00 E8 */	stw r0, 0xe8(r5)
/* 80152714 0014F654  48 09 2C ED */	bl __cl__Q24Game11KindCounterFi
/* 80152718 0014F658  88 03 00 00 */	lbz r0, 0(r3)
/* 8015271C 0014F65C  28 00 00 00 */	cmplwi r0, 0
/* 80152720 0014F660  41 82 00 44 */	beq .L_80152764
/* 80152724 0014F664  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80152728 0014F668  7F 84 E3 78 */	mr r4, r28
/* 8015272C 0014F66C  7F 25 CB 78 */	mr r5, r25
/* 80152730 0014F670  48 09 4E 65 */	bl obtainPellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80152734 0014F674  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80152738 0014F678  41 82 00 2C */	beq .L_80152764
/* 8015273C 0014F67C  80 9E 01 80 */	lwz r4, 0x180(r30)
/* 80152740 0014F680  38 62 A2 60 */	addi r3, r2, lbl_805185C0@sda21
/* 80152744 0014F684  4B F7 7F 7D */	bl strcmp
/* 80152748 0014F688  2C 03 00 00 */	cmpwi r3, 0
/* 8015274C 0014F68C  40 82 00 18 */	bne .L_80152764
/* 80152750 0014F690  80 9D 02 2C */	lwz r4, 0x250(r29)
/* 80152754 0014F694  38 BD 02 30 */	addi r5, r29, 0x254
/* 80152758 0014F698  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015275C 0014F69C  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80152760 0014F6A0  48 09 62 01 */	bl incCaveOtakara__Q24Game8PlayDataFiR4ID32
.L_80152764:
/* 80152764 0014F6A4  3B 39 00 01 */	addi r25, r25, 1
.L_80152768:
/* 80152768 0014F6A8  A0 18 00 00 */	lhz r0, 0(r24)
/* 8015276C 0014F6AC  7C 19 00 00 */	cmpw r25, r0
/* 80152770 0014F6B0  41 80 FF 60 */	blt .L_801526D0
/* 80152774 0014F6B4  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 80152778 0014F6B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8015277C 0014F6BC  7C 08 03 A6 */	mtlr r0
/* 80152780 0014F6C0  38 21 00 30 */	addi r1, r1, 0x30
/* 80152784 0014F6C4  4E 80 00 20 */	blr 
.else
.global accountEarnings__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game16PelletCropMemoryb
accountEarnings__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game16PelletCropMemoryb:
/* 80152588 0014F4C8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8015258C 0014F4CC  7C 08 02 A6 */	mflr r0
/* 80152590 0014F4D0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80152594 0014F4D4  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 80152598 0014F4D8  7C BE 2B 78 */	mr r30, r5
/* 8015259C 0014F4DC  7C 9D 23 78 */	mr r29, r4
/* 801525A0 0014F4E0  7C DF 33 78 */	mr r31, r6
/* 801525A4 0014F4E4  3B 3E 00 04 */	addi r25, r30, 4
/* 801525A8 0014F4E8  3B 00 00 00 */	li r24, 0
/* 801525AC 0014F4EC  83 4D 95 20 */	lwz r26, mgr__Q24Game13PelletOtakara@sda21(r13)
/* 801525B0 0014F4F0  48 00 00 9C */	b .L_8015264C
.L_801525B4:
/* 801525B4 0014F4F4  7F 43 D3 78 */	mr r3, r26
/* 801525B8 0014F4F8  7F 04 C3 78 */	mr r4, r24
/* 801525BC 0014F4FC  48 01 97 CD */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 801525C0 0014F500  7C 7C 1B 79 */	or. r28, r3, r3
/* 801525C4 0014F504  41 82 00 84 */	beq .L_80152648
/* 801525C8 0014F508  83 7C 01 70 */	lwz r27, 0x170(r28)
/* 801525CC 0014F50C  7F 23 CB 78 */	mr r3, r25
/* 801525D0 0014F510  7F 04 C3 78 */	mr r4, r24
/* 801525D4 0014F514  48 09 2E 2D */	bl __cl__Q24Game11KindCounterFi
/* 801525D8 0014F518  88 03 00 00 */	lbz r0, 0(r3)
/* 801525DC 0014F51C  7F 23 CB 78 */	mr r3, r25
/* 801525E0 0014F520  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 801525E4 0014F524  7F 04 C3 78 */	mr r4, r24
/* 801525E8 0014F528  7C C0 D9 D6 */	mullw r6, r0, r27
/* 801525EC 0014F52C  80 05 00 E8 */	lwz r0, 0xe8(r5)
/* 801525F0 0014F530  7C 00 32 14 */	add r0, r0, r6
/* 801525F4 0014F534  90 05 00 E8 */	stw r0, 0xe8(r5)
/* 801525F8 0014F538  48 09 2E 09 */	bl __cl__Q24Game11KindCounterFi
/* 801525FC 0014F53C  88 03 00 00 */	lbz r0, 0(r3)
/* 80152600 0014F540  28 00 00 00 */	cmplwi r0, 0
/* 80152604 0014F544  41 82 00 44 */	beq .L_80152648
/* 80152608 0014F548  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015260C 0014F54C  7F 44 D3 78 */	mr r4, r26
/* 80152610 0014F550  7F 05 C3 78 */	mr r5, r24
/* 80152614 0014F554  48 09 4F 81 */	bl obtainPellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80152618 0014F558  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8015261C 0014F55C  41 82 00 2C */	beq .L_80152648
/* 80152620 0014F560  80 9C 01 80 */	lwz r4, 0x180(r28)
/* 80152624 0014F564  38 62 A2 60 */	addi r3, r2, lbl_805185C0@sda21
/* 80152628 0014F568  4B F7 80 99 */	bl strcmp
/* 8015262C 0014F56C  2C 03 00 00 */	cmpwi r3, 0
/* 80152630 0014F570  40 82 00 18 */	bne .L_80152648
/* 80152634 0014F574  80 9D 02 2C */	lwz r4, 0x22c(r29)
/* 80152638 0014F578  38 BD 02 30 */	addi r5, r29, 0x230
/* 8015263C 0014F57C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80152640 0014F580  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80152644 0014F584  48 09 63 1D */	bl incCaveOtakara__Q24Game8PlayDataFiR4ID32
.L_80152648:
/* 80152648 0014F588  3B 18 00 01 */	addi r24, r24, 1
.L_8015264C:
/* 8015264C 0014F58C  A0 19 00 00 */	lhz r0, 0(r25)
/* 80152650 0014F590  7C 18 00 00 */	cmpw r24, r0
/* 80152654 0014F594  41 80 FF 60 */	blt .L_801525B4
/* 80152658 0014F598  88 1D 02 74 */	lbz r0, 0x274(r29)
/* 8015265C 0014F59C  28 00 00 00 */	cmplwi r0, 0
/* 80152660 0014F5A0  40 82 00 60 */	bne .L_801526C0
/* 80152664 0014F5A4  83 8D 95 00 */	lwz r28, mgr__Q24Game13PelletCarcass@sda21(r13)
/* 80152668 0014F5A8  3B 1E 00 14 */	addi r24, r30, 0x14
/* 8015266C 0014F5AC  3B 20 00 00 */	li r25, 0
/* 80152670 0014F5B0  48 00 00 44 */	b .L_801526B4
.L_80152674:
/* 80152674 0014F5B4  7F 83 E3 78 */	mr r3, r28
/* 80152678 0014F5B8  7F 24 CB 78 */	mr r4, r25
/* 8015267C 0014F5BC  48 01 97 0D */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 80152680 0014F5C0  28 03 00 00 */	cmplwi r3, 0
/* 80152684 0014F5C4  41 82 00 2C */	beq .L_801526B0
/* 80152688 0014F5C8  83 63 01 70 */	lwz r27, 0x170(r3)
/* 8015268C 0014F5CC  7F 03 C3 78 */	mr r3, r24
/* 80152690 0014F5D0  7F 24 CB 78 */	mr r4, r25
/* 80152694 0014F5D4  48 09 2D 6D */	bl __cl__Q24Game11KindCounterFi
/* 80152698 0014F5D8  88 03 00 00 */	lbz r0, 0(r3)
/* 8015269C 0014F5DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801526A0 0014F5E0  7C 80 D9 D6 */	mullw r4, r0, r27
/* 801526A4 0014F5E4  80 03 00 E8 */	lwz r0, 0xe8(r3)
/* 801526A8 0014F5E8  7C 00 22 14 */	add r0, r0, r4
/* 801526AC 0014F5EC  90 03 00 E8 */	stw r0, 0xe8(r3)
.L_801526B0:
/* 801526B0 0014F5F0  3B 39 00 01 */	addi r25, r25, 1
.L_801526B4:
/* 801526B4 0014F5F4  A0 18 00 00 */	lhz r0, 0(r24)
/* 801526B8 0014F5F8  7C 19 00 00 */	cmpw r25, r0
/* 801526BC 0014F5FC  41 80 FF B8 */	blt .L_80152674
.L_801526C0:
/* 801526C0 0014F600  83 8D 95 28 */	lwz r28, mgr__Q24Game10PelletItem@sda21(r13)
/* 801526C4 0014F604  3B 1E 00 0C */	addi r24, r30, 0xc
/* 801526C8 0014F608  3B 20 00 00 */	li r25, 0
/* 801526CC 0014F60C  48 00 00 9C */	b .L_80152768
.L_801526D0:
/* 801526D0 0014F610  7F 83 E3 78 */	mr r3, r28
/* 801526D4 0014F614  7F 24 CB 78 */	mr r4, r25
/* 801526D8 0014F618  48 01 96 B1 */	bl getPelletConfig__Q24Game13BasePelletMgrFi
/* 801526DC 0014F61C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801526E0 0014F620  41 82 00 84 */	beq .L_80152764
/* 801526E4 0014F624  83 7E 01 70 */	lwz r27, 0x170(r30)
/* 801526E8 0014F628  7F 03 C3 78 */	mr r3, r24
/* 801526EC 0014F62C  7F 24 CB 78 */	mr r4, r25
/* 801526F0 0014F630  48 09 2D 11 */	bl __cl__Q24Game11KindCounterFi
/* 801526F4 0014F634  88 03 00 00 */	lbz r0, 0(r3)
/* 801526F8 0014F638  7F 03 C3 78 */	mr r3, r24
/* 801526FC 0014F63C  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80152700 0014F640  7F 24 CB 78 */	mr r4, r25
/* 80152704 0014F644  7C C0 D9 D6 */	mullw r6, r0, r27
/* 80152708 0014F648  80 05 00 E8 */	lwz r0, 0xe8(r5)
/* 8015270C 0014F64C  7C 00 32 14 */	add r0, r0, r6
/* 80152710 0014F650  90 05 00 E8 */	stw r0, 0xe8(r5)
/* 80152714 0014F654  48 09 2C ED */	bl __cl__Q24Game11KindCounterFi
/* 80152718 0014F658  88 03 00 00 */	lbz r0, 0(r3)
/* 8015271C 0014F65C  28 00 00 00 */	cmplwi r0, 0
/* 80152720 0014F660  41 82 00 44 */	beq .L_80152764
/* 80152724 0014F664  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80152728 0014F668  7F 84 E3 78 */	mr r4, r28
/* 8015272C 0014F66C  7F 25 CB 78 */	mr r5, r25
/* 80152730 0014F670  48 09 4E 65 */	bl obtainPellet__Q24Game8PlayDataFPQ24Game13BasePelletMgri
/* 80152734 0014F674  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80152738 0014F678  41 82 00 2C */	beq .L_80152764
/* 8015273C 0014F67C  80 9E 01 80 */	lwz r4, 0x180(r30)
/* 80152740 0014F680  38 62 A2 60 */	addi r3, r2, lbl_805185C0@sda21
/* 80152744 0014F684  4B F7 7F 7D */	bl strcmp
/* 80152748 0014F688  2C 03 00 00 */	cmpwi r3, 0
/* 8015274C 0014F68C  40 82 00 18 */	bne .L_80152764
/* 80152750 0014F690  80 9D 02 2C */	lwz r4, 0x22c(r29)
/* 80152754 0014F694  38 BD 02 30 */	addi r5, r29, 0x230
/* 80152758 0014F698  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015275C 0014F69C  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80152760 0014F6A0  48 09 62 01 */	bl incCaveOtakara__Q24Game8PlayDataFiR4ID32
.L_80152764:
/* 80152764 0014F6A4  3B 39 00 01 */	addi r25, r25, 1
.L_80152768:
/* 80152768 0014F6A8  A0 18 00 00 */	lhz r0, 0(r24)
/* 8015276C 0014F6AC  7C 19 00 00 */	cmpw r25, r0
/* 80152770 0014F6B0  41 80 FF 60 */	blt .L_801526D0
/* 80152774 0014F6B4  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 80152778 0014F6B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8015277C 0014F6BC  7C 08 03 A6 */	mtlr r0
/* 80152780 0014F6C0  38 21 00 30 */	addi r1, r1, 0x30
/* 80152784 0014F6C4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global init__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
init__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionPQ24Game8StateArg:
/* 80152788 0014F6C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015278C 0014F6CC  7C 08 02 A6 */	mflr r0
/* 80152790 0014F6D0  3C A0 80 48 */	lis r5, lbl_8047CD98@ha
/* 80152794 0014F6D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152798 0014F6D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8015279C 0014F6DC  3B E5 CD 98 */	addi r31, r5, lbl_8047CD98@l
/* 801527A0 0014F6E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801527A4 0014F6E4  7C 9E 23 78 */	mr r30, r4
/* 801527A8 0014F6E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801527AC 0014F6EC  7C 7D 1B 78 */	mr r29, r3
/* 801527B0 0014F6F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801527B4 0014F6F4  48 2D A0 FD */	bl reset__Q24Game11MoviePlayerFv
/* 801527B8 0014F6F8  80 1E 00 D8 */	lwz r0, 0xf8(r30)
/* 801527BC 0014F6FC  C0 02 A2 64 */	lfs f0, lbl_805185C4@sda21(r2)
/* 801527C0 0014F700  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801527C4 0014F704  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 801527C8 0014F708  80 7E 00 D8 */	lwz r3, 0xf8(r30)
/* 801527CC 0014F70C  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 801527D0 0014F710  48 2D 95 99 */	bl start__8WipeBaseFf
/* 801527D4 0014F714  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801527D8 0014F718  38 BF 00 7C */	addi r5, r31, 0x7c
/* 801527DC 0014F71C  38 80 00 01 */	li r4, 1
/* 801527E0 0014F720  38 C0 00 03 */	li r6, 3
/* 801527E4 0014F724  48 06 27 B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 801527E8 0014F728  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801527EC 0014F72C  28 00 00 00 */	cmplwi r0, 0
/* 801527F0 0014F730  40 82 00 18 */	bne .L_80152808
/* 801527F4 0014F734  38 7F 00 20 */	addi r3, r31, 0x20
/* 801527F8 0014F738  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801527FC 0014F73C  38 80 01 D3 */	li r4, 0x1d3
/* 80152800 0014F740  4C C6 31 82 */	crclr 6
/* 80152804 0014F744  4B ED 7E 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152808:
/* 80152808 0014F748  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8015280C 0014F74C  28 1E 00 00 */	cmplwi r30, 0
/* 80152810 0014F750  40 82 00 18 */	bne .L_80152828
/* 80152814 0014F754  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152818 0014F758  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8015281C 0014F75C  38 80 01 DC */	li r4, 0x1dc
/* 80152820 0014F760  4C C6 31 82 */	crclr 6
/* 80152824 0014F764  4B ED 7E 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152828:
/* 80152828 0014F768  28 1E 00 00 */	cmplwi r30, 0
/* 8015282C 0014F76C  41 82 00 A0 */	beq .L_801528CC
/* 80152830 0014F770  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80152834 0014F774  28 00 00 00 */	cmplwi r0, 0
/* 80152838 0014F778  40 82 00 18 */	bne .L_80152850
/* 8015283C 0014F77C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152840 0014F780  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152844 0014F784  38 80 01 D3 */	li r4, 0x1d3
/* 80152848 0014F788  4C C6 31 82 */	crclr 6
/* 8015284C 0014F78C  4B ED 7D F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152850:
/* 80152850 0014F790  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80152854 0014F794  28 1E 00 00 */	cmplwi r30, 0
/* 80152858 0014F798  40 82 00 18 */	bne .L_80152870
/* 8015285C 0014F79C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152860 0014F7A0  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152864 0014F7A4  38 80 01 DC */	li r4, 0x1dc
/* 80152868 0014F7A8  4C C6 31 82 */	crclr 6
/* 8015286C 0014F7AC  4B ED 7D D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152870:
/* 80152870 0014F7B0  80 1E 00 04 */	lwz r0, 4(r30)
/* 80152874 0014F7B4  28 00 00 00 */	cmplwi r0, 0
/* 80152878 0014F7B8  40 82 00 18 */	bne .L_80152890
/* 8015287C 0014F7BC  38 7F 00 38 */	addi r3, r31, 0x38
/* 80152880 0014F7C0  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152884 0014F7C4  38 80 00 C7 */	li r4, 0xc7
/* 80152888 0014F7C8  4C C6 31 82 */	crclr 6
/* 8015288C 0014F7CC  4B ED 7D B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152890:
/* 80152890 0014F7D0  80 7E 00 04 */	lwz r3, 4(r30)
/* 80152894 0014F7D4  83 C3 00 04 */	lwz r30, 4(r3)
/* 80152898 0014F7D8  28 1E 00 00 */	cmplwi r30, 0
/* 8015289C 0014F7DC  41 82 00 30 */	beq .L_801528CC
/* 801528A0 0014F7E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801528A4 0014F7E4  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 801528A8 0014F7E8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 801528AC 0014F7EC  EC 21 00 24 */	fdivs f1, f1, f0
/* 801528B0 0014F7F0  4B F6 F2 9D */	bl __cvt_fp2unsigned
/* 801528B4 0014F7F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801528B8 0014F7F8  7C 64 1B 78 */	mr r4, r3
/* 801528BC 0014F7FC  7F C3 F3 78 */	mr r3, r30
/* 801528C0 0014F800  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801528C4 0014F804  7D 89 03 A6 */	mtctr r12
/* 801528C8 0014F808  4E 80 04 21 */	bctrl 
.L_801528CC:
/* 801528CC 0014F80C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801528D0 0014F810  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801528D4 0014F814  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801528D8 0014F818  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801528DC 0014F81C  7C 08 03 A6 */	mtlr r0
/* 801528E0 0014F820  38 21 00 20 */	addi r1, r1, 0x20
/* 801528E4 0014F824  4E 80 00 20 */	blr 
.else
.global init__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
init__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionPQ24Game8StateArg:
/* 80152788 0014F6C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015278C 0014F6CC  7C 08 02 A6 */	mflr r0
/* 80152790 0014F6D0  3C A0 80 48 */	lis r5, lbl_8047CD98@ha
/* 80152794 0014F6D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152798 0014F6D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8015279C 0014F6DC  3B E5 CD 98 */	addi r31, r5, lbl_8047CD98@l
/* 801527A0 0014F6E0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801527A4 0014F6E4  7C 9E 23 78 */	mr r30, r4
/* 801527A8 0014F6E8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801527AC 0014F6EC  7C 7D 1B 78 */	mr r29, r3
/* 801527B0 0014F6F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801527B4 0014F6F4  48 2D A0 FD */	bl reset__Q24Game11MoviePlayerFv
/* 801527B8 0014F6F8  80 1E 00 D8 */	lwz r0, 0xd8(r30)
/* 801527BC 0014F6FC  C0 02 A2 64 */	lfs f0, lbl_805185C4@sda21(r2)
/* 801527C0 0014F700  90 1E 00 18 */	stw r0, 0x18(r30)
/* 801527C4 0014F704  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 801527C8 0014F708  80 7E 00 D8 */	lwz r3, 0xd8(r30)
/* 801527CC 0014F70C  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 801527D0 0014F710  48 2D 95 99 */	bl start__8WipeBaseFf
/* 801527D4 0014F714  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801527D8 0014F718  38 BF 00 7C */	addi r5, r31, 0x7c
/* 801527DC 0014F71C  38 80 00 01 */	li r4, 1
/* 801527E0 0014F720  38 C0 00 03 */	li r6, 3
/* 801527E4 0014F724  48 06 27 B1 */	bl setPause__Q24Game10GameSystemFbPci
/* 801527E8 0014F728  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 801527EC 0014F72C  28 00 00 00 */	cmplwi r0, 0
/* 801527F0 0014F730  40 82 00 18 */	bne .L_80152808
/* 801527F4 0014F734  38 7F 00 20 */	addi r3, r31, 0x20
/* 801527F8 0014F738  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801527FC 0014F73C  38 80 01 D3 */	li r4, 0x1d3
/* 80152800 0014F740  4C C6 31 82 */	crclr 6
/* 80152804 0014F744  4B ED 7E 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152808:
/* 80152808 0014F748  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 8015280C 0014F74C  28 1E 00 00 */	cmplwi r30, 0
/* 80152810 0014F750  40 82 00 18 */	bne .L_80152828
/* 80152814 0014F754  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152818 0014F758  38 BF 00 2C */	addi r5, r31, 0x2c
/* 8015281C 0014F75C  38 80 01 DC */	li r4, 0x1dc
/* 80152820 0014F760  4C C6 31 82 */	crclr 6
/* 80152824 0014F764  4B ED 7E 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152828:
/* 80152828 0014F768  28 1E 00 00 */	cmplwi r30, 0
/* 8015282C 0014F76C  41 82 00 A0 */	beq .L_801528CC
/* 80152830 0014F770  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80152834 0014F774  28 00 00 00 */	cmplwi r0, 0
/* 80152838 0014F778  40 82 00 18 */	bne .L_80152850
/* 8015283C 0014F77C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152840 0014F780  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152844 0014F784  38 80 01 D3 */	li r4, 0x1d3
/* 80152848 0014F788  4C C6 31 82 */	crclr 6
/* 8015284C 0014F78C  4B ED 7D F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152850:
/* 80152850 0014F790  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 80152854 0014F794  28 1E 00 00 */	cmplwi r30, 0
/* 80152858 0014F798  40 82 00 18 */	bne .L_80152870
/* 8015285C 0014F79C  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152860 0014F7A0  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152864 0014F7A4  38 80 01 DC */	li r4, 0x1dc
/* 80152868 0014F7A8  4C C6 31 82 */	crclr 6
/* 8015286C 0014F7AC  4B ED 7D D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152870:
/* 80152870 0014F7B0  80 1E 00 04 */	lwz r0, 4(r30)
/* 80152874 0014F7B4  28 00 00 00 */	cmplwi r0, 0
/* 80152878 0014F7B8  40 82 00 18 */	bne .L_80152890
/* 8015287C 0014F7BC  38 7F 00 38 */	addi r3, r31, 0x38
/* 80152880 0014F7C0  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152884 0014F7C4  38 80 00 C7 */	li r4, 0xc7
/* 80152888 0014F7C8  4C C6 31 82 */	crclr 6
/* 8015288C 0014F7CC  4B ED 7D B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152890:
/* 80152890 0014F7D0  80 7E 00 04 */	lwz r3, 4(r30)
/* 80152894 0014F7D4  83 C3 00 04 */	lwz r30, 4(r3)
/* 80152898 0014F7D8  28 1E 00 00 */	cmplwi r30, 0
/* 8015289C 0014F7DC  41 82 00 30 */	beq .L_801528CC
/* 801528A0 0014F7E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801528A4 0014F7E4  C0 3D 00 10 */	lfs f1, 0x10(r29)
/* 801528A8 0014F7E8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 801528AC 0014F7EC  EC 21 00 24 */	fdivs f1, f1, f0
/* 801528B0 0014F7F0  4B F6 F2 9D */	bl __cvt_fp2unsigned
/* 801528B4 0014F7F4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801528B8 0014F7F8  7C 64 1B 78 */	mr r4, r3
/* 801528BC 0014F7FC  7F C3 F3 78 */	mr r3, r30
/* 801528C0 0014F800  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801528C4 0014F804  7D 89 03 A6 */	mtctr r12
/* 801528C8 0014F808  4E 80 04 21 */	bctrl 
.L_801528CC:
/* 801528CC 0014F80C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801528D0 0014F810  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801528D4 0014F814  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801528D8 0014F818  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801528DC 0014F81C  7C 08 03 A6 */	mtlr r0
/* 801528E0 0014F820  38 21 00 20 */	addi r1, r1, 0x20
/* 801528E4 0014F824  4E 80 00 20 */	blr 
.endif

.global exec__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection
exec__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection:
/* 801528E8 0014F828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801528EC 0014F82C  7C 08 02 A6 */	mflr r0
/* 801528F0 0014F830  90 01 00 14 */	stw r0, 0x14(r1)
/* 801528F4 0014F834  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801528F8 0014F838  7C 9F 23 78 */	mr r31, r4
/* 801528FC 0014F83C  93 C1 00 08 */	stw r30, 8(r1)
/* 80152900 0014F840  7C 7E 1B 78 */	mr r30, r3
/* 80152904 0014F844  7F E3 FB 78 */	mr r3, r31
/* 80152908 0014F848  4B FF 8F 75 */	bl doUpdate__Q24Game15BaseGameSectionFv
/* 8015290C 0014F84C  7F E3 FB 78 */	mr r3, r31
/* 80152910 0014F850  48 00 31 6D */	bl updateCaveScreen__Q24Game17SingleGameSectionFv
/* 80152914 0014F854  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80152918 0014F858  C0 5E 00 10 */	lfs f2, 0x10(r30)
/* 8015291C 0014F85C  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80152920 0014F860  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80152924 0014F864  EC 22 08 28 */	fsubs f1, f2, f1
/* 80152928 0014F868  D0 3E 00 10 */	stfs f1, 0x10(r30)
/* 8015292C 0014F86C  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80152930 0014F870  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80152934 0014F874  4C 40 13 82 */	cror 2, 0, 2
/* 80152938 0014F878  40 82 00 4C */	bne .L_80152984
/* 8015293C 0014F87C  7F E3 FB 78 */	mr r3, r31
/* 80152940 0014F880  4B FF AD AD */	bl advanceDayCount__Q24Game15BaseGameSectionFv
/* 80152944 0014F884  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80152948 0014F888  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8015294C 0014F88C  4B FD 47 91 */	bl setStartTime__Q24Game7TimeMgrFv
/* 80152950 0014F890  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80152954 0014F894  38 80 00 00 */	li r4, 0
/* 80152958 0014F898  48 00 D3 5D */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 8015295C 0014F89C  7F E3 FB 78 */	mr r3, r31
/* 80152960 0014F8A0  4B FF D4 45 */	bl clearHeap__Q24Game15BaseGameSectionFv
/* 80152964 0014F8A4  7F C3 F3 78 */	mr r3, r30
/* 80152968 0014F8A8  7F E4 FB 78 */	mr r4, r31
/* 8015296C 0014F8AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 80152970 0014F8B0  38 A0 00 01 */	li r5, 1
/* 80152974 0014F8B4  38 C0 00 00 */	li r6, 0
/* 80152978 0014F8B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8015297C 0014F8BC  7D 89 03 A6 */	mtctr r12
/* 80152980 0014F8C0  4E 80 04 21 */	bctrl 
.L_80152984:
/* 80152984 0014F8C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152988 0014F8C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015298C 0014F8CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 80152990 0014F8D0  7C 08 03 A6 */	mtlr r0
/* 80152994 0014F8D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80152998 0014F8D8  4E 80 00 20 */	blr 

.global "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg" # weak function
"transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg":
/* 8015299C 0014F8DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801529A0 0014F8E0  7C 08 02 A6 */	mflr r0
/* 801529A4 0014F8E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801529A8 0014F8E8  80 63 00 08 */	lwz r3, 8(r3)
/* 801529AC 0014F8EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801529B0 0014F8F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801529B4 0014F8F4  7D 89 03 A6 */	mtctr r12
/* 801529B8 0014F8F8  4E 80 04 21 */	bctrl 
/* 801529BC 0014F8FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801529C0 0014F900  7C 08 03 A6 */	mtlr r0
/* 801529C4 0014F904  38 21 00 10 */	addi r1, r1, 0x10
/* 801529C8 0014F908  4E 80 00 20 */	blr 

.global draw__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionR8Graphics
draw__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSectionR8Graphics:
/* 801529CC 0014F90C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801529D0 0014F910  7C 08 02 A6 */	mflr r0
/* 801529D4 0014F914  90 01 00 14 */	stw r0, 0x14(r1)
/* 801529D8 0014F918  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801529DC 0014F91C  7C 9F 23 78 */	mr r31, r4
/* 801529E0 0014F920  7F E3 FB 78 */	mr r3, r31
/* 801529E4 0014F924  7C A4 2B 78 */	mr r4, r5
/* 801529E8 0014F928  4B FF 92 41 */	bl doDraw__Q24Game15BaseGameSectionFR8Graphics
/* 801529EC 0014F92C  7F E3 FB 78 */	mr r3, r31
/* 801529F0 0014F930  48 00 35 6D */	bl drawCaveScreen__Q24Game17SingleGameSectionFv
/* 801529F4 0014F934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801529F8 0014F938  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801529FC 0014F93C  7C 08 03 A6 */	mtlr r0
/* 80152A00 0014F940  38 21 00 10 */	addi r1, r1, 0x10
/* 80152A04 0014F944  4E 80 00 20 */	blr 

.global cleanup__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection
cleanup__Q34Game10SingleGame15CaveDayEndStateFPQ24Game17SingleGameSection:
/* 80152A08 0014F948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152A0C 0014F94C  7C 08 02 A6 */	mflr r0
/* 80152A10 0014F950  3C 80 80 48 */	lis r4, lbl_8047CE14@ha
/* 80152A14 0014F954  38 C0 00 03 */	li r6, 3
/* 80152A18 0014F958  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152A1C 0014F95C  38 A4 CE 14 */	addi r5, r4, lbl_8047CE14@l
/* 80152A20 0014F960  38 80 00 00 */	li r4, 0
/* 80152A24 0014F964  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80152A28 0014F968  48 06 25 6D */	bl setPause__Q24Game10GameSystemFbPci
/* 80152A2C 0014F96C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152A30 0014F970  7C 08 03 A6 */	mtlr r0
/* 80152A34 0014F974  38 21 00 10 */	addi r1, r1, 0x10
/* 80152A38 0014F978  4E 80 00 20 */	blr 

.if version == 1
.global __ct__Q24Game17SingleGameSectionFP7JKRHeap
__ct__Q24Game17SingleGameSectionFP7JKRHeap:
/* 80152A3C 0014F97C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152A40 0014F980  7C 08 02 A6 */	mflr r0
/* 80152A44 0014F984  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152A48 0014F988  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152A4C 0014F98C  7C 7F 1B 78 */	mr r31, r3
/* 80152A50 0014F990  4B FF 83 51 */	bl __ct__Q24Game15BaseGameSectionFP7JKRHeap
/* 80152A54 0014F994  3C 60 80 4B */	lis r3, __vt__Q24Game17SingleGameSection@ha
/* 80152A58 0014F998  38 00 00 00 */	li r0, 0
/* 80152A5C 0014F99C  38 83 13 50 */	addi r4, r3, __vt__Q24Game17SingleGameSection@l
/* 80152A60 0014F9A0  38 7F 01 B8 */	addi r3, r31, 0x1dc
/* 80152A64 0014F9A4  90 9F 00 00 */	stw r4, 0(r31)
/* 80152A68 0014F9A8  98 1F 01 80 */	stb r0, 0x1a4(r31)
/* 80152A6C 0014F9AC  48 2D 1D AD */	bl __ct__16DvdThreadCommandFv
/* 80152A70 0014F9B0  38 7F 02 30 */	addi r3, r31, 0x254
/* 80152A74 0014F9B4  48 2C 07 FD */	bl __ct__4ID32Fv
/* 80152A78 0014F9B8  38 7F 02 54 */	addi r3, r31, 0x278
/* 80152A7C 0014F9BC  48 09 28 D9 */	bl __ct__Q24Game11KindCounterFv
/* 80152A80 0014F9C0  38 7F 02 5C */	addi r3, r31, 0x280
/* 80152A84 0014F9C4  48 09 28 D1 */	bl __ct__Q24Game11KindCounterFv
/* 80152A88 0014F9C8  38 7F 02 64 */	addi r3, r31, 0x288
/* 80152A8C 0014F9CC  48 09 28 C9 */	bl __ct__Q24Game11KindCounterFv
/* 80152A90 0014F9D0  38 7F 02 6C */	addi r3, r31, 0x290
/* 80152A94 0014F9D4  48 09 28 C1 */	bl __ct__Q24Game11KindCounterFv
/* 80152A98 0014F9D8  38 00 00 02 */	li r0, 2
/* 80152A9C 0014F9DC  38 60 00 14 */	li r3, 0x14
/* 80152AA0 0014F9E0  90 1F 01 14 */	stw r0, 0x134(r31)
/* 80152AA4 0014F9E4  4B ED 14 01 */	bl __nw__FUl
/* 80152AA8 0014F9E8  28 03 00 00 */	cmplwi r3, 0
/* 80152AAC 0014F9EC  41 82 00 4C */	beq .L_80152AF8
/* 80152AB0 0014F9F0  3C 80 80 4B */	lis r4, lbl_804B107C@ha
/* 80152AB4 0014F9F4  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 80152AB8 0014F9F8  39 04 10 7C */	addi r8, r4, lbl_804B107C@l
/* 80152ABC 0014F9FC  3C 80 80 4B */	lis r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@ha
/* 80152AC0 0014FA00  80 E8 00 00 */	lwz r7, 0(r8)
/* 80152AC4 0014FA04  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 80152AC8 0014FA08  80 C8 00 04 */	lwz r6, 4(r8)
/* 80152ACC 0014FA0C  38 04 12 7C */	addi r0, r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@l
/* 80152AD0 0014FA10  80 88 00 08 */	lwz r4, 8(r8)
/* 80152AD4 0014FA14  90 E1 00 08 */	stw r7, 8(r1)
/* 80152AD8 0014FA18  90 A3 00 00 */	stw r5, 0(r3)
/* 80152ADC 0014FA1C  90 03 00 00 */	stw r0, 0(r3)
/* 80152AE0 0014FA20  93 E3 00 04 */	stw r31, 4(r3)
/* 80152AE4 0014FA24  90 E3 00 08 */	stw r7, 8(r3)
/* 80152AE8 0014FA28  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80152AEC 0014FA2C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80152AF0 0014FA30  90 81 00 10 */	stw r4, 0x10(r1)
/* 80152AF4 0014FA34  90 83 00 10 */	stw r4, 0x10(r3)
.L_80152AF8:
/* 80152AF8 0014FA38  90 7F 02 40 */	stw r3, 0x264(r31)
/* 80152AFC 0014FA3C  7F E3 FB 78 */	mr r3, r31
/* 80152B00 0014FA40  48 00 34 61 */	bl newCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
/* 80152B04 0014FA44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80152B08 0014FA48  7F E3 FB 78 */	mr r3, r31
/* 80152B0C 0014FA4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152B10 0014FA50  7C 08 03 A6 */	mtlr r0
/* 80152B14 0014FA54  38 21 00 20 */	addi r1, r1, 0x20
/* 80152B18 0014FA58  4E 80 00 20 */	blr 
.else
.global __ct__Q24Game17SingleGameSectionFP7JKRHeap
__ct__Q24Game17SingleGameSectionFP7JKRHeap:
/* 80152A3C 0014F97C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152A40 0014F980  7C 08 02 A6 */	mflr r0
/* 80152A44 0014F984  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152A48 0014F988  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152A4C 0014F98C  7C 7F 1B 78 */	mr r31, r3
/* 80152A50 0014F990  4B FF 83 51 */	bl __ct__Q24Game15BaseGameSectionFP7JKRHeap
/* 80152A54 0014F994  3C 60 80 4B */	lis r3, __vt__Q24Game17SingleGameSection@ha
/* 80152A58 0014F998  38 00 00 00 */	li r0, 0
/* 80152A5C 0014F99C  38 83 13 50 */	addi r4, r3, __vt__Q24Game17SingleGameSection@l
/* 80152A60 0014F9A0  38 7F 01 B8 */	addi r3, r31, 0x1b8
/* 80152A64 0014F9A4  90 9F 00 00 */	stw r4, 0(r31)
/* 80152A68 0014F9A8  98 1F 01 80 */	stb r0, 0x180(r31)
/* 80152A6C 0014F9AC  48 2D 1D AD */	bl __ct__16DvdThreadCommandFv
/* 80152A70 0014F9B0  38 7F 02 30 */	addi r3, r31, 0x230
/* 80152A74 0014F9B4  48 2C 07 FD */	bl __ct__4ID32Fv
/* 80152A78 0014F9B8  38 7F 02 54 */	addi r3, r31, 0x254
/* 80152A7C 0014F9BC  48 09 28 D9 */	bl __ct__Q24Game11KindCounterFv
/* 80152A80 0014F9C0  38 7F 02 5C */	addi r3, r31, 0x25c
/* 80152A84 0014F9C4  48 09 28 D1 */	bl __ct__Q24Game11KindCounterFv
/* 80152A88 0014F9C8  38 7F 02 64 */	addi r3, r31, 0x264
/* 80152A8C 0014F9CC  48 09 28 C9 */	bl __ct__Q24Game11KindCounterFv
/* 80152A90 0014F9D0  38 7F 02 6C */	addi r3, r31, 0x26c
/* 80152A94 0014F9D4  48 09 28 C1 */	bl __ct__Q24Game11KindCounterFv
/* 80152A98 0014F9D8  38 00 00 02 */	li r0, 2
/* 80152A9C 0014F9DC  38 60 00 14 */	li r3, 0x14
/* 80152AA0 0014F9E0  90 1F 01 14 */	stw r0, 0x114(r31)
/* 80152AA4 0014F9E4  4B ED 14 01 */	bl __nw__FUl
/* 80152AA8 0014F9E8  28 03 00 00 */	cmplwi r3, 0
/* 80152AAC 0014F9EC  41 82 00 4C */	beq .L_80152AF8
/* 80152AB0 0014F9F0  3C 80 80 4B */	lis r4, lbl_804B107C@ha
/* 80152AB4 0014F9F4  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 80152AB8 0014F9F8  39 04 10 7C */	addi r8, r4, lbl_804B107C@l
/* 80152ABC 0014F9FC  3C 80 80 4B */	lis r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@ha
/* 80152AC0 0014FA00  80 E8 00 00 */	lwz r7, 0(r8)
/* 80152AC4 0014FA04  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 80152AC8 0014FA08  80 C8 00 04 */	lwz r6, 4(r8)
/* 80152ACC 0014FA0C  38 04 12 7C */	addi r0, r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@l
/* 80152AD0 0014FA10  80 88 00 08 */	lwz r4, 8(r8)
/* 80152AD4 0014FA14  90 E1 00 08 */	stw r7, 8(r1)
/* 80152AD8 0014FA18  90 A3 00 00 */	stw r5, 0(r3)
/* 80152ADC 0014FA1C  90 03 00 00 */	stw r0, 0(r3)
/* 80152AE0 0014FA20  93 E3 00 04 */	stw r31, 4(r3)
/* 80152AE4 0014FA24  90 E3 00 08 */	stw r7, 8(r3)
/* 80152AE8 0014FA28  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80152AEC 0014FA2C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80152AF0 0014FA30  90 81 00 10 */	stw r4, 0x10(r1)
/* 80152AF4 0014FA34  90 83 00 10 */	stw r4, 0x10(r3)
.L_80152AF8:
/* 80152AF8 0014FA38  90 7F 02 40 */	stw r3, 0x240(r31)
/* 80152AFC 0014FA3C  7F E3 FB 78 */	mr r3, r31
/* 80152B00 0014FA40  48 00 34 61 */	bl newCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
/* 80152B04 0014FA44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80152B08 0014FA48  7F E3 FB 78 */	mr r3, r31
/* 80152B0C 0014FA4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152B10 0014FA50  7C 08 03 A6 */	mtlr r0
/* 80152B14 0014FA54  38 21 00 20 */	addi r1, r1, 0x20
/* 80152B18 0014FA58  4E 80 00 20 */	blr 
.endif

.if version == 1
.global section_fadeout__Q24Game17SingleGameSectionFv
section_fadeout__Q24Game17SingleGameSectionFv:
/* 80152B1C 0014FA5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152B20 0014FA60  7C 08 02 A6 */	mflr r0
/* 80152B24 0014FA64  7C 64 1B 78 */	mr r4, r3
/* 80152B28 0014FA68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152B2C 0014FA6C  80 63 02 50 */	lwz r3, 0x274(r3)
/* 80152B30 0014FA70  81 83 00 00 */	lwz r12, 0(r3)
/* 80152B34 0014FA74  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80152B38 0014FA78  7D 89 03 A6 */	mtctr r12
/* 80152B3C 0014FA7C  4E 80 04 21 */	bctrl 
/* 80152B40 0014FA80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152B44 0014FA84  7C 08 03 A6 */	mtlr r0
/* 80152B48 0014FA88  38 21 00 10 */	addi r1, r1, 0x10
/* 80152B4C 0014FA8C  4E 80 00 20 */	blr 
.else
.global section_fadeout__Q24Game17SingleGameSectionFv
section_fadeout__Q24Game17SingleGameSectionFv:
/* 80152B1C 0014FA5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152B20 0014FA60  7C 08 02 A6 */	mflr r0
/* 80152B24 0014FA64  7C 64 1B 78 */	mr r4, r3
/* 80152B28 0014FA68  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152B2C 0014FA6C  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80152B30 0014FA70  81 83 00 00 */	lwz r12, 0(r3)
/* 80152B34 0014FA74  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80152B38 0014FA78  7D 89 03 A6 */	mtctr r12
/* 80152B3C 0014FA7C  4E 80 04 21 */	bctrl 
/* 80152B40 0014FA80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152B44 0014FA84  7C 08 03 A6 */	mtlr r0
/* 80152B48 0014FA88  38 21 00 10 */	addi r1, r1, 0x10
/* 80152B4C 0014FA8C  4E 80 00 20 */	blr 
.endif

.global on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection # weak function
on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection:
/* 80152B50 0014FA90  4E 80 00 20 */	blr 

.if version == 1
.global flow_goto_title__Q24Game17SingleGameSectionFv
flow_goto_title__Q24Game17SingleGameSectionFv:
/* 80152B54 0014FA94  38 00 00 01 */	li r0, 1
/* 80152B58 0014FA98  98 03 01 B5 */	stb r0, 0x1d9(r3)
/* 80152B5C 0014FA9C  4E 80 00 20 */	blr 
.else
.global flow_goto_title__Q24Game17SingleGameSectionFv
flow_goto_title__Q24Game17SingleGameSectionFv:
/* 80152B54 0014FA94  38 00 00 01 */	li r0, 1
/* 80152B58 0014FA98  98 03 01 B5 */	stb r0, 0x1b5(r3)
/* 80152B5C 0014FA9C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onInit__Q24Game17SingleGameSectionFv
onInit__Q24Game17SingleGameSectionFv:
/* 80152B60 0014FAA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152B64 0014FAA4  7C 08 02 A6 */	mflr r0
/* 80152B68 0014FAA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152B6C 0014FAAC  38 00 00 00 */	li r0, 0
/* 80152B70 0014FAB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152B74 0014FAB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80152B78 0014FAB8  7C 7E 1B 78 */	mr r30, r3
/* 80152B7C 0014FABC  98 03 02 28 */	stb r0, 0x24c(r3)
/* 80152B80 0014FAC0  3C 60 80 48 */	lis r3, lbl_8047CD98@ha
/* 80152B84 0014FAC4  3B E3 CD 98 */	addi r31, r3, lbl_8047CD98@l
/* 80152B88 0014FAC8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80152B8C 0014FACC  38 7F 00 88 */	addi r3, r31, 0x88
/* 80152B90 0014FAD0  90 04 00 44 */	stw r0, 0x44(r4)
/* 80152B94 0014FAD4  48 2C F7 4D */	bl assert_fragmentation__6SystemFPc
/* 80152B98 0014FAD8  38 00 00 00 */	li r0, 0
/* 80152B9C 0014FADC  7F C3 F3 78 */	mr r3, r30
/* 80152BA0 0014FAE0  90 1E 02 44 */	stw r0, 0x268(r30)
/* 80152BA4 0014FAE4  98 1E 01 94 */	stb r0, 0x1b8(r30)
/* 80152BA8 0014FAE8  48 00 13 F1 */	bl clearCaveMenus__Q24Game17SingleGameSectionFv
/* 80152BAC 0014FAEC  38 00 00 00 */	li r0, 0
/* 80152BB0 0014FAF0  38 60 00 14 */	li r3, 0x14
/* 80152BB4 0014FAF4  98 1E 01 1C */	stb r0, 0x13c(r30)
/* 80152BB8 0014FAF8  4B ED 12 ED */	bl __nw__FUl
/* 80152BBC 0014FAFC  28 03 00 00 */	cmplwi r3, 0
/* 80152BC0 0014FB00  41 82 00 4C */	beq .L_80152C0C
/* 80152BC4 0014FB04  3C 80 80 4B */	lis r4, lbl_804B1088@ha
/* 80152BC8 0014FB08  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 80152BCC 0014FB0C  39 04 10 88 */	addi r8, r4, lbl_804B1088@l
/* 80152BD0 0014FB10  3C 80 80 4B */	lis r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@ha
/* 80152BD4 0014FB14  80 E8 00 00 */	lwz r7, 0(r8)
/* 80152BD8 0014FB18  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 80152BDC 0014FB1C  80 C8 00 04 */	lwz r6, 4(r8)
/* 80152BE0 0014FB20  38 04 12 7C */	addi r0, r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@l
/* 80152BE4 0014FB24  80 88 00 08 */	lwz r4, 8(r8)
/* 80152BE8 0014FB28  90 E1 00 08 */	stw r7, 8(r1)
/* 80152BEC 0014FB2C  90 A3 00 00 */	stw r5, 0(r3)
/* 80152BF0 0014FB30  90 03 00 00 */	stw r0, 0(r3)
/* 80152BF4 0014FB34  93 C3 00 04 */	stw r30, 4(r3)
/* 80152BF8 0014FB38  90 E3 00 08 */	stw r7, 8(r3)
/* 80152BFC 0014FB3C  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80152C00 0014FB40  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80152C04 0014FB44  90 81 00 10 */	stw r4, 0x10(r1)
/* 80152C08 0014FB48  90 83 00 10 */	stw r4, 0x10(r3)
.L_80152C0C:
/* 80152C0C 0014FB4C  90 7E 02 24 */	stw r3, 0x248(r30)
/* 80152C10 0014FB50  38 60 00 1C */	li r3, 0x1c
/* 80152C14 0014FB54  4B ED 12 91 */	bl __nw__FUl
/* 80152C18 0014FB58  28 03 00 00 */	cmplwi r3, 0
/* 80152C1C 0014FB5C  41 82 00 24 */	beq .L_80152C40
/* 80152C20 0014FB60  3C A0 80 4B */	lis r5, "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>"@ha
/* 80152C24 0014FB64  3C 80 80 4B */	lis r4, __vt__Q34Game10SingleGame3FSM@ha
/* 80152C28 0014FB68  38 05 12 64 */	addi r0, r5, "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>"@l
/* 80152C2C 0014FB6C  38 A0 FF FF */	li r5, -1
/* 80152C30 0014FB70  90 03 00 00 */	stw r0, 0(r3)
/* 80152C34 0014FB74  38 04 13 38 */	addi r0, r4, __vt__Q34Game10SingleGame3FSM@l
/* 80152C38 0014FB78  90 A3 00 18 */	stw r5, 0x18(r3)
/* 80152C3C 0014FB7C  90 03 00 00 */	stw r0, 0(r3)
.L_80152C40:
/* 80152C40 0014FB80  90 7E 02 4C */	stw r3, 0x270(r30)
/* 80152C44 0014FB84  7F C4 F3 78 */	mr r4, r30
/* 80152C48 0014FB88  80 7E 02 4C */	lwz r3, 0x270(r30)
/* 80152C4C 0014FB8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80152C50 0014FB90  81 8C 00 08 */	lwz r12, 8(r12)
/* 80152C54 0014FB94  7D 89 03 A6 */	mtctr r12
/* 80152C58 0014FB98  4E 80 04 21 */	bctrl 
/* 80152C5C 0014FB9C  80 7E 02 4C */	lwz r3, 0x270(r30)
/* 80152C60 0014FBA0  7F C4 F3 78 */	mr r4, r30
/* 80152C64 0014FBA4  38 A0 00 00 */	li r5, 0
/* 80152C68 0014FBA8  38 C0 00 00 */	li r6, 0
/* 80152C6C 0014FBAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80152C70 0014FBB0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80152C74 0014FBB4  7D 89 03 A6 */	mtctr r12
/* 80152C78 0014FBB8  4E 80 04 21 */	bctrl 
/* 80152C7C 0014FBBC  38 7F 00 94 */	addi r3, r31, 0x94
/* 80152C80 0014FBC0  48 2C F6 61 */	bl assert_fragmentation__6SystemFPc
/* 80152C84 0014FBC4  7F C3 F3 78 */	mr r3, r30
/* 80152C88 0014FBC8  4B FF D5 25 */	bl setupFixMemory__Q24Game15BaseGameSectionFv
/* 80152C8C 0014FBCC  38 7F 00 A0 */	addi r3, r31, 0xa0
/* 80152C90 0014FBD0  48 2C F6 51 */	bl assert_fragmentation__6SystemFPc
/* 80152C94 0014FBD4  38 00 00 00 */	li r0, 0
/* 80152C98 0014FBD8  38 60 00 5C */	li r3, 0x5c
/* 80152C9C 0014FBDC  98 1E 01 B5 */	stb r0, 0x1d9(r30)
/* 80152CA0 0014FBE0  4B ED 12 05 */	bl __nw__FUl
/* 80152CA4 0014FBE4  7C 60 1B 79 */	or. r0, r3, r3
/* 80152CA8 0014FBE8  41 82 00 0C */	beq .L_80152CB4
/* 80152CAC 0014FBEC  48 0C B6 49 */	bl __ct__Q25Radar3MgrFv
/* 80152CB0 0014FBF0  7C 60 1B 78 */	mr r0, r3
.L_80152CB4:
/* 80152CB4 0014FBF4  90 0D 95 B0 */	stw r0, mgr__5Radar@sda21(r13)
/* 80152CB8 0014FBF8  7F C3 F3 78 */	mr r3, r30
/* 80152CBC 0014FBFC  38 80 00 00 */	li r4, 0
/* 80152CC0 0014FC00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80152CC4 0014FC04  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80152CC8 0014FC08  7D 89 03 A6 */	mtctr r12
/* 80152CCC 0014FC0C  4E 80 04 21 */	bctrl 
/* 80152CD0 0014FC10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80152CD4 0014FC14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152CD8 0014FC18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80152CDC 0014FC1C  7C 08 03 A6 */	mtlr r0
/* 80152CE0 0014FC20  38 21 00 20 */	addi r1, r1, 0x20
/* 80152CE4 0014FC24  4E 80 00 20 */	blr 
.else
.global onInit__Q24Game17SingleGameSectionFv
onInit__Q24Game17SingleGameSectionFv:
/* 80152B60 0014FAA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80152B64 0014FAA4  7C 08 02 A6 */	mflr r0
/* 80152B68 0014FAA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80152B6C 0014FAAC  38 00 00 00 */	li r0, 0
/* 80152B70 0014FAB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80152B74 0014FAB4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80152B78 0014FAB8  7C 7E 1B 78 */	mr r30, r3
/* 80152B7C 0014FABC  98 03 02 28 */	stb r0, 0x228(r3)
/* 80152B80 0014FAC0  3C 60 80 48 */	lis r3, lbl_8047CD98@ha
/* 80152B84 0014FAC4  3B E3 CD 98 */	addi r31, r3, lbl_8047CD98@l
/* 80152B88 0014FAC8  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 80152B8C 0014FACC  38 7F 00 88 */	addi r3, r31, 0x88
/* 80152B90 0014FAD0  90 04 00 44 */	stw r0, 0x44(r4)
/* 80152B94 0014FAD4  48 2C F7 4D */	bl assert_fragmentation__6SystemFPc
/* 80152B98 0014FAD8  38 00 00 00 */	li r0, 0
/* 80152B9C 0014FADC  7F C3 F3 78 */	mr r3, r30
/* 80152BA0 0014FAE0  90 1E 02 44 */	stw r0, 0x244(r30)
/* 80152BA4 0014FAE4  98 1E 01 94 */	stb r0, 0x194(r30)
/* 80152BA8 0014FAE8  48 00 13 F1 */	bl clearCaveMenus__Q24Game17SingleGameSectionFv
/* 80152BAC 0014FAEC  38 00 00 00 */	li r0, 0
/* 80152BB0 0014FAF0  38 60 00 14 */	li r3, 0x14
/* 80152BB4 0014FAF4  98 1E 01 1C */	stb r0, 0x11c(r30)
/* 80152BB8 0014FAF8  4B ED 12 ED */	bl __nw__FUl
/* 80152BBC 0014FAFC  28 03 00 00 */	cmplwi r3, 0
/* 80152BC0 0014FB00  41 82 00 4C */	beq .L_80152C0C
/* 80152BC4 0014FB04  3C 80 80 4B */	lis r4, lbl_804B1088@ha
/* 80152BC8 0014FB08  3C A0 80 4B */	lis r5, __vt__9IDelegate@ha
/* 80152BCC 0014FB0C  39 04 10 88 */	addi r8, r4, lbl_804B1088@l
/* 80152BD0 0014FB10  3C 80 80 4B */	lis r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@ha
/* 80152BD4 0014FB14  80 E8 00 00 */	lwz r7, 0(r8)
/* 80152BD8 0014FB18  38 A5 0F 00 */	addi r5, r5, __vt__9IDelegate@l
/* 80152BDC 0014FB1C  80 C8 00 04 */	lwz r6, 4(r8)
/* 80152BE0 0014FB20  38 04 12 7C */	addi r0, r4, "__vt__36Delegate<Q24Game17SingleGameSection>"@l
/* 80152BE4 0014FB24  80 88 00 08 */	lwz r4, 8(r8)
/* 80152BE8 0014FB28  90 E1 00 08 */	stw r7, 8(r1)
/* 80152BEC 0014FB2C  90 A3 00 00 */	stw r5, 0(r3)
/* 80152BF0 0014FB30  90 03 00 00 */	stw r0, 0(r3)
/* 80152BF4 0014FB34  93 C3 00 04 */	stw r30, 4(r3)
/* 80152BF8 0014FB38  90 E3 00 08 */	stw r7, 8(r3)
/* 80152BFC 0014FB3C  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80152C00 0014FB40  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80152C04 0014FB44  90 81 00 10 */	stw r4, 0x10(r1)
/* 80152C08 0014FB48  90 83 00 10 */	stw r4, 0x10(r3)
.L_80152C0C:
/* 80152C0C 0014FB4C  90 7E 02 24 */	stw r3, 0x224(r30)
/* 80152C10 0014FB50  38 60 00 1C */	li r3, 0x1c
/* 80152C14 0014FB54  4B ED 12 91 */	bl __nw__FUl
/* 80152C18 0014FB58  28 03 00 00 */	cmplwi r3, 0
/* 80152C1C 0014FB5C  41 82 00 24 */	beq .L_80152C40
/* 80152C20 0014FB60  3C A0 80 4B */	lis r5, "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>"@ha
/* 80152C24 0014FB64  3C 80 80 4B */	lis r4, __vt__Q34Game10SingleGame3FSM@ha
/* 80152C28 0014FB68  38 05 12 64 */	addi r0, r5, "__vt__Q24Game40StateMachine<Q24Game17SingleGameSection>"@l
/* 80152C2C 0014FB6C  38 A0 FF FF */	li r5, -1
/* 80152C30 0014FB70  90 03 00 00 */	stw r0, 0(r3)
/* 80152C34 0014FB74  38 04 13 38 */	addi r0, r4, __vt__Q34Game10SingleGame3FSM@l
/* 80152C38 0014FB78  90 A3 00 18 */	stw r5, 0x18(r3)
/* 80152C3C 0014FB7C  90 03 00 00 */	stw r0, 0(r3)
.L_80152C40:
/* 80152C40 0014FB80  90 7E 02 4C */	stw r3, 0x24c(r30)
/* 80152C44 0014FB84  7F C4 F3 78 */	mr r4, r30
/* 80152C48 0014FB88  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 80152C4C 0014FB8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80152C50 0014FB90  81 8C 00 08 */	lwz r12, 8(r12)
/* 80152C54 0014FB94  7D 89 03 A6 */	mtctr r12
/* 80152C58 0014FB98  4E 80 04 21 */	bctrl 
/* 80152C5C 0014FB9C  80 7E 02 4C */	lwz r3, 0x24c(r30)
/* 80152C60 0014FBA0  7F C4 F3 78 */	mr r4, r30
/* 80152C64 0014FBA4  38 A0 00 00 */	li r5, 0
/* 80152C68 0014FBA8  38 C0 00 00 */	li r6, 0
/* 80152C6C 0014FBAC  81 83 00 00 */	lwz r12, 0(r3)
/* 80152C70 0014FBB0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80152C74 0014FBB4  7D 89 03 A6 */	mtctr r12
/* 80152C78 0014FBB8  4E 80 04 21 */	bctrl 
/* 80152C7C 0014FBBC  38 7F 00 94 */	addi r3, r31, 0x94
/* 80152C80 0014FBC0  48 2C F6 61 */	bl assert_fragmentation__6SystemFPc
/* 80152C84 0014FBC4  7F C3 F3 78 */	mr r3, r30
/* 80152C88 0014FBC8  4B FF D5 25 */	bl setupFixMemory__Q24Game15BaseGameSectionFv
/* 80152C8C 0014FBCC  38 7F 00 A0 */	addi r3, r31, 0xa0
/* 80152C90 0014FBD0  48 2C F6 51 */	bl assert_fragmentation__6SystemFPc
/* 80152C94 0014FBD4  38 00 00 00 */	li r0, 0
/* 80152C98 0014FBD8  38 60 00 5C */	li r3, 0x5c
/* 80152C9C 0014FBDC  98 1E 01 B5 */	stb r0, 0x1b5(r30)
/* 80152CA0 0014FBE0  4B ED 12 05 */	bl __nw__FUl
/* 80152CA4 0014FBE4  7C 60 1B 79 */	or. r0, r3, r3
/* 80152CA8 0014FBE8  41 82 00 0C */	beq .L_80152CB4
/* 80152CAC 0014FBEC  48 0C B6 49 */	bl __ct__Q25Radar3MgrFv
/* 80152CB0 0014FBF0  7C 60 1B 78 */	mr r0, r3
.L_80152CB4:
/* 80152CB4 0014FBF4  90 0D 95 B0 */	stw r0, mgr__5Radar@sda21(r13)
/* 80152CB8 0014FBF8  7F C3 F3 78 */	mr r3, r30
/* 80152CBC 0014FBFC  38 80 00 00 */	li r4, 0
/* 80152CC0 0014FC00  81 9E 00 00 */	lwz r12, 0(r30)
/* 80152CC4 0014FC04  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80152CC8 0014FC08  7D 89 03 A6 */	mtctr r12
/* 80152CCC 0014FC0C  4E 80 04 21 */	bctrl 
/* 80152CD0 0014FC10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80152CD4 0014FC14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80152CD8 0014FC18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80152CDC 0014FC1C  7C 08 03 A6 */	mtlr r0
/* 80152CE0 0014FC20  38 21 00 20 */	addi r1, r1, 0x20
/* 80152CE4 0014FC24  4E 80 00 20 */	blr 
.endif

.if version == 1
.global "start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg" # weak function
"start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg":
/* 80152CE8 0014FC28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152CEC 0014FC2C  7C 08 02 A6 */	mflr r0
/* 80152CF0 0014FC30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152CF4 0014FC34  38 00 00 00 */	li r0, 0
/* 80152CF8 0014FC38  90 04 02 50 */	stw r0, 0x274(r4)
/* 80152CFC 0014FC3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80152D00 0014FC40  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80152D04 0014FC44  7D 89 03 A6 */	mtctr r12
/* 80152D08 0014FC48  4E 80 04 21 */	bctrl 
/* 80152D0C 0014FC4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152D10 0014FC50  7C 08 03 A6 */	mtlr r0
/* 80152D14 0014FC54  38 21 00 10 */	addi r1, r1, 0x10
/* 80152D18 0014FC58  4E 80 00 20 */	blr 
.else
.global "start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg" # weak function
"start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg":
/* 80152CE8 0014FC28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152CEC 0014FC2C  7C 08 02 A6 */	mflr r0
/* 80152CF0 0014FC30  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152CF4 0014FC34  38 00 00 00 */	li r0, 0
/* 80152CF8 0014FC38  90 04 02 50 */	stw r0, 0x250(r4)
/* 80152CFC 0014FC3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80152D00 0014FC40  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80152D04 0014FC44  7D 89 03 A6 */	mtctr r12
/* 80152D08 0014FC48  4E 80 04 21 */	bctrl 
/* 80152D0C 0014FC4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152D10 0014FC50  7C 08 03 A6 */	mtlr r0
/* 80152D14 0014FC54  38 21 00 10 */	addi r1, r1, 0x10
/* 80152D18 0014FC58  4E 80 00 20 */	blr 
.endif

.if version == 1
.global doUpdate__Q24Game17SingleGameSectionFv
doUpdate__Q24Game17SingleGameSectionFv:
/* 80152D1C 0014FC5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152D20 0014FC60  7C 08 02 A6 */	mflr r0
/* 80152D24 0014FC64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152D28 0014FC68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152D2C 0014FC6C  7C 7F 1B 78 */	mr r31, r3
/* 80152D30 0014FC70  88 03 01 B5 */	lbz r0, 0x1d9(r3)
/* 80152D34 0014FC74  28 00 00 00 */	cmplwi r0, 0
/* 80152D38 0014FC78  40 82 00 A4 */	bne .L_80152DDC
/* 80152D3C 0014FC7C  80 7F 02 4C */	lwz r3, 0x270(r31)
/* 80152D40 0014FC80  7F E4 FB 78 */	mr r4, r31
/* 80152D44 0014FC84  81 83 00 00 */	lwz r12, 0(r3)
/* 80152D48 0014FC88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80152D4C 0014FC8C  7D 89 03 A6 */	mtctr r12
/* 80152D50 0014FC90  4E 80 04 21 */	bctrl 
/* 80152D54 0014FC94  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80152D58 0014FC98  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 80152D5C 0014FC9C  28 00 00 00 */	cmplwi r0, 0
/* 80152D60 0014FCA0  40 82 00 7C */	bne .L_80152DDC
/* 80152D64 0014FCA4  48 06 22 65 */	bl paused__Q24Game10GameSystemFv
/* 80152D68 0014FCA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80152D6C 0014FCAC  40 82 00 70 */	bne .L_80152DDC
/* 80152D70 0014FCB0  88 1F 01 78 */	lbz r0, 0x19c(r31)
/* 80152D74 0014FCB4  28 00 00 00 */	cmplwi r0, 0
/* 80152D78 0014FCB8  41 82 00 64 */	beq .L_80152DDC
/* 80152D7C 0014FCBC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80152D80 0014FCC0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80152D84 0014FCC4  2C 00 00 00 */	cmpwi r0, 0
/* 80152D88 0014FCC8  40 82 00 54 */	bne .L_80152DDC
/* 80152D8C 0014FCCC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80152D90 0014FCD0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80152D94 0014FCD4  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80152D98 0014FCD8  41 82 00 44 */	beq .L_80152DDC
/* 80152D9C 0014FCDC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80152DA0 0014FCE0  C0 5F 01 74 */	lfs f2, 0x198(r31)
/* 80152DA4 0014FCE4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80152DA8 0014FCE8  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80152DAC 0014FCEC  EC 22 08 28 */	fsubs f1, f2, f1
/* 80152DB0 0014FCF0  D0 3F 01 74 */	stfs f1, 0x198(r31)
/* 80152DB4 0014FCF4  C0 3F 01 74 */	lfs f1, 0x198(r31)
/* 80152DB8 0014FCF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80152DBC 0014FCFC  40 80 00 20 */	bge .L_80152DDC
/* 80152DC0 0014FD00  80 7F 02 50 */	lwz r3, 0x274(r31)
/* 80152DC4 0014FD04  7F E4 FB 78 */	mr r4, r31
/* 80152DC8 0014FD08  80 BF 01 7C */	lwz r5, 0x1a0(r31)
/* 80152DCC 0014FD0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80152DD0 0014FD10  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80152DD4 0014FD14  7D 89 03 A6 */	mtctr r12
/* 80152DD8 0014FD18  4E 80 04 21 */	bctrl 
.L_80152DDC:
/* 80152DDC 0014FD1C  88 1F 01 B5 */	lbz r0, 0x1d9(r31)
/* 80152DE0 0014FD20  28 00 00 00 */	cmplwi r0, 0
/* 80152DE4 0014FD24  41 82 00 0C */	beq .L_80152DF0
/* 80152DE8 0014FD28  38 00 00 00 */	li r0, 0
/* 80152DEC 0014FD2C  98 1F 00 34 */	stb r0, 0x34(r31)
.L_80152DF0:
/* 80152DF0 0014FD30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152DF4 0014FD34  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 80152DF8 0014FD38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152DFC 0014FD3C  7C 08 03 A6 */	mtlr r0
/* 80152E00 0014FD40  38 21 00 10 */	addi r1, r1, 0x10
/* 80152E04 0014FD44  4E 80 00 20 */	blr 
.else
.global doUpdate__Q24Game17SingleGameSectionFv
doUpdate__Q24Game17SingleGameSectionFv:
/* 80152D1C 0014FC5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152D20 0014FC60  7C 08 02 A6 */	mflr r0
/* 80152D24 0014FC64  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152D28 0014FC68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152D2C 0014FC6C  7C 7F 1B 78 */	mr r31, r3
/* 80152D30 0014FC70  88 03 01 B5 */	lbz r0, 0x1b5(r3)
/* 80152D34 0014FC74  28 00 00 00 */	cmplwi r0, 0
/* 80152D38 0014FC78  40 82 00 A4 */	bne .L_80152DDC
/* 80152D3C 0014FC7C  80 7F 02 4C */	lwz r3, 0x24c(r31)
/* 80152D40 0014FC80  7F E4 FB 78 */	mr r4, r31
/* 80152D44 0014FC84  81 83 00 00 */	lwz r12, 0(r3)
/* 80152D48 0014FC88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80152D4C 0014FC8C  7D 89 03 A6 */	mtctr r12
/* 80152D50 0014FC90  4E 80 04 21 */	bctrl 
/* 80152D54 0014FC94  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80152D58 0014FC98  88 03 00 4A */	lbz r0, 0x4a(r3)
/* 80152D5C 0014FC9C  28 00 00 00 */	cmplwi r0, 0
/* 80152D60 0014FCA0  40 82 00 7C */	bne .L_80152DDC
/* 80152D64 0014FCA4  48 06 22 65 */	bl paused__Q24Game10GameSystemFv
/* 80152D68 0014FCA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80152D6C 0014FCAC  40 82 00 70 */	bne .L_80152DDC
/* 80152D70 0014FCB0  88 1F 01 78 */	lbz r0, 0x178(r31)
/* 80152D74 0014FCB4  28 00 00 00 */	cmplwi r0, 0
/* 80152D78 0014FCB8  41 82 00 64 */	beq .L_80152DDC
/* 80152D7C 0014FCBC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80152D80 0014FCC0  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80152D84 0014FCC4  2C 00 00 00 */	cmpwi r0, 0
/* 80152D88 0014FCC8  40 82 00 54 */	bne .L_80152DDC
/* 80152D8C 0014FCCC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80152D90 0014FCD0  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80152D94 0014FCD4  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80152D98 0014FCD8  41 82 00 44 */	beq .L_80152DDC
/* 80152D9C 0014FCDC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80152DA0 0014FCE0  C0 5F 01 74 */	lfs f2, 0x174(r31)
/* 80152DA4 0014FCE4  C0 23 00 54 */	lfs f1, 0x54(r3)
/* 80152DA8 0014FCE8  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80152DAC 0014FCEC  EC 22 08 28 */	fsubs f1, f2, f1
/* 80152DB0 0014FCF0  D0 3F 01 74 */	stfs f1, 0x174(r31)
/* 80152DB4 0014FCF4  C0 3F 01 74 */	lfs f1, 0x174(r31)
/* 80152DB8 0014FCF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80152DBC 0014FCFC  40 80 00 20 */	bge .L_80152DDC
/* 80152DC0 0014FD00  80 7F 02 50 */	lwz r3, 0x250(r31)
/* 80152DC4 0014FD04  7F E4 FB 78 */	mr r4, r31
/* 80152DC8 0014FD08  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 80152DCC 0014FD0C  81 83 00 00 */	lwz r12, 0(r3)
/* 80152DD0 0014FD10  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80152DD4 0014FD14  7D 89 03 A6 */	mtctr r12
/* 80152DD8 0014FD18  4E 80 04 21 */	bctrl 
.L_80152DDC:
/* 80152DDC 0014FD1C  88 1F 01 B5 */	lbz r0, 0x1b5(r31)
/* 80152DE0 0014FD20  28 00 00 00 */	cmplwi r0, 0
/* 80152DE4 0014FD24  41 82 00 0C */	beq .L_80152DF0
/* 80152DE8 0014FD28  38 00 00 00 */	li r0, 0
/* 80152DEC 0014FD2C  98 1F 00 34 */	stb r0, 0x34(r31)
.L_80152DF0:
/* 80152DF0 0014FD30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152DF4 0014FD34  88 7F 00 34 */	lbz r3, 0x34(r31)
/* 80152DF8 0014FD38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152DFC 0014FD3C  7C 08 03 A6 */	mtlr r0
/* 80152E00 0014FD40  38 21 00 10 */	addi r1, r1, 0x10
/* 80152E04 0014FD44  4E 80 00 20 */	blr 
.endif

.global on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl # weak function
on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl:
/* 80152E08 0014FD48  4E 80 00 20 */	blr 

.if version == 1
.global doDraw__Q24Game17SingleGameSectionFR8Graphics
doDraw__Q24Game17SingleGameSectionFR8Graphics:
/* 80152E0C 0014FD4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152E10 0014FD50  7C 08 02 A6 */	mflr r0
/* 80152E14 0014FD54  7C 66 1B 78 */	mr r6, r3
/* 80152E18 0014FD58  7C 85 23 78 */	mr r5, r4
/* 80152E1C 0014FD5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152E20 0014FD60  88 03 01 B5 */	lbz r0, 0x1d9(r3)
/* 80152E24 0014FD64  28 00 00 00 */	cmplwi r0, 0
/* 80152E28 0014FD68  40 82 00 24 */	bne .L_80152E4C
/* 80152E2C 0014FD6C  80 66 02 50 */	lwz r3, 0x274(r6)
/* 80152E30 0014FD70  28 03 00 00 */	cmplwi r3, 0
/* 80152E34 0014FD74  41 82 00 18 */	beq .L_80152E4C
/* 80152E38 0014FD78  81 83 00 00 */	lwz r12, 0(r3)
/* 80152E3C 0014FD7C  7C C4 33 78 */	mr r4, r6
/* 80152E40 0014FD80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80152E44 0014FD84  7D 89 03 A6 */	mtctr r12
/* 80152E48 0014FD88  4E 80 04 21 */	bctrl 
.L_80152E4C:
/* 80152E4C 0014FD8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152E50 0014FD90  7C 08 03 A6 */	mtlr r0
/* 80152E54 0014FD94  38 21 00 10 */	addi r1, r1, 0x10
/* 80152E58 0014FD98  4E 80 00 20 */	blr 
.else
.global doDraw__Q24Game17SingleGameSectionFR8Graphics
doDraw__Q24Game17SingleGameSectionFR8Graphics:
/* 80152E0C 0014FD4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152E10 0014FD50  7C 08 02 A6 */	mflr r0
/* 80152E14 0014FD54  7C 66 1B 78 */	mr r6, r3
/* 80152E18 0014FD58  7C 85 23 78 */	mr r5, r4
/* 80152E1C 0014FD5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152E20 0014FD60  88 03 01 B5 */	lbz r0, 0x1b5(r3)
/* 80152E24 0014FD64  28 00 00 00 */	cmplwi r0, 0
/* 80152E28 0014FD68  40 82 00 24 */	bne .L_80152E4C
/* 80152E2C 0014FD6C  80 66 02 50 */	lwz r3, 0x250(r6)
/* 80152E30 0014FD70  28 03 00 00 */	cmplwi r3, 0
/* 80152E34 0014FD74  41 82 00 18 */	beq .L_80152E4C
/* 80152E38 0014FD78  81 83 00 00 */	lwz r12, 0(r3)
/* 80152E3C 0014FD7C  7C C4 33 78 */	mr r4, r6
/* 80152E40 0014FD80  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80152E44 0014FD84  7D 89 03 A6 */	mtctr r12
/* 80152E48 0014FD88  4E 80 04 21 */	bctrl 
.L_80152E4C:
/* 80152E4C 0014FD8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152E50 0014FD90  7C 08 03 A6 */	mtlr r0
/* 80152E54 0014FD94  38 21 00 10 */	addi r1, r1, 0x10
/* 80152E58 0014FD98  4E 80 00 20 */	blr 
.endif

.if version == 1
.global on_setCamController__Q24Game17SingleGameSectionFi
on_setCamController__Q24Game17SingleGameSectionFi:
/* 80152E5C 0014FD9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152E60 0014FDA0  7C 08 02 A6 */	mflr r0
/* 80152E64 0014FDA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152E68 0014FDA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152E6C 0014FDAC  7C 7F 1B 78 */	mr r31, r3
/* 80152E70 0014FDB0  80 03 02 44 */	lwz r0, 0x268(r3)
/* 80152E74 0014FDB4  28 00 00 00 */	cmplwi r0, 0
/* 80152E78 0014FDB8  41 82 00 2C */	beq .L_80152EA4
/* 80152E7C 0014FDBC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80152E80 0014FDC0  48 00 7D A1 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80152E84 0014FDC4  28 03 00 00 */	cmplwi r3, 0
/* 80152E88 0014FDC8  41 82 00 1C */	beq .L_80152EA4
/* 80152E8C 0014FDCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80152E90 0014FDD0  81 8C 01 00 */	lwz r12, 0x100(r12)
/* 80152E94 0014FDD4  7D 89 03 A6 */	mtctr r12
/* 80152E98 0014FDD8  4E 80 04 21 */	bctrl 
/* 80152E9C 0014FDDC  80 9F 02 44 */	lwz r4, 0x268(r31)
/* 80152EA0 0014FDE0  90 64 00 10 */	stw r3, 0x10(r4)
.L_80152EA4:
/* 80152EA4 0014FDE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152EA8 0014FDE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152EAC 0014FDEC  7C 08 03 A6 */	mtlr r0
/* 80152EB0 0014FDF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80152EB4 0014FDF4  4E 80 00 20 */	blr 
.else
.global on_setCamController__Q24Game17SingleGameSectionFi
on_setCamController__Q24Game17SingleGameSectionFi:
/* 80152E5C 0014FD9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80152E60 0014FDA0  7C 08 02 A6 */	mflr r0
/* 80152E64 0014FDA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80152E68 0014FDA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80152E6C 0014FDAC  7C 7F 1B 78 */	mr r31, r3
/* 80152E70 0014FDB0  80 03 02 44 */	lwz r0, 0x244(r3)
/* 80152E74 0014FDB4  28 00 00 00 */	cmplwi r0, 0
/* 80152E78 0014FDB8  41 82 00 2C */	beq .L_80152EA4
/* 80152E7C 0014FDBC  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80152E80 0014FDC0  48 00 7D A1 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80152E84 0014FDC4  28 03 00 00 */	cmplwi r3, 0
/* 80152E88 0014FDC8  41 82 00 1C */	beq .L_80152EA4
/* 80152E8C 0014FDCC  81 83 00 00 */	lwz r12, 0(r3)
/* 80152E90 0014FDD0  81 8C 01 00 */	lwz r12, 0x100(r12)
/* 80152E94 0014FDD4  7D 89 03 A6 */	mtctr r12
/* 80152E98 0014FDD8  4E 80 04 21 */	bctrl 
/* 80152E9C 0014FDDC  80 9F 02 44 */	lwz r4, 0x244(r31)
/* 80152EA0 0014FDE0  90 64 00 10 */	stw r3, 0x10(r4)
.L_80152EA4:
/* 80152EA4 0014FDE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80152EA8 0014FDE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80152EAC 0014FDEC  7C 08 03 A6 */	mtlr r0
/* 80152EB0 0014FDF0  38 21 00 10 */	addi r1, r1, 0x10
/* 80152EB4 0014FDF4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onSetSoundScene__Q24Game17SingleGameSectionFv
onSetSoundScene__Q24Game17SingleGameSectionFv:
/* 80152EB8 0014FDF8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80152EBC 0014FDFC  7C 08 02 A6 */	mflr r0
/* 80152EC0 0014FE00  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80152EC4 0014FE04  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80152EC8 0014FE08  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80152ECC 0014FE0C  7C 7E 1B 78 */	mr r30, r3
/* 80152ED0 0014FE10  3C 60 80 48 */	lis r3, lbl_8047CD98@ha
/* 80152ED4 0014FE14  88 1E 02 3C */	lbz r0, 0x260(r30)
/* 80152ED8 0014FE18  3B E3 CD 98 */	addi r31, r3, lbl_8047CD98@l
/* 80152EDC 0014FE1C  28 00 00 00 */	cmplwi r0, 0
/* 80152EE0 0014FE20  41 82 01 04 */	beq .L_80152FE4
/* 80152EE4 0014FE24  38 61 00 40 */	addi r3, r1, 0x40
/* 80152EE8 0014FE28  48 1E 25 C9 */	bl __ct__Q26PSGame9SceneInfoFv
/* 80152EEC 0014FE2C  3C 80 80 4B */	lis r4, __vt__Q26PSGame13CaveFloorInfo@ha
/* 80152EF0 0014FE30  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 80152EF4 0014FE34  38 A0 00 00 */	li r5, 0
/* 80152EF8 0014FE38  38 00 00 FF */	li r0, 0xff
/* 80152EFC 0014FE3C  38 C4 12 50 */	addi r6, r4, __vt__Q26PSGame13CaveFloorInfo@l
/* 80152F00 0014FE40  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 80152F04 0014FE44  90 C1 00 40 */	stw r6, 0x40(r1)
/* 80152F08 0014FE48  7F C3 F3 78 */	mr r3, r30
/* 80152F0C 0014FE4C  80 CD 93 08 */	lwz r6, mapMgr__4Game@sda21(r13)
/* 80152F10 0014FE50  90 A1 00 78 */	stw r5, 0x78(r1)
/* 80152F14 0014FE54  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 80152F18 0014FE58  98 A1 00 80 */	stb r5, 0x80(r1)
/* 80152F1C 0014FE5C  90 81 00 84 */	stw r4, 0x84(r1)
/* 80152F20 0014FE60  98 01 00 88 */	stb r0, 0x88(r1)
/* 80152F24 0014FE64  98 01 00 89 */	stb r0, 0x89(r1)
/* 80152F28 0014FE68  80 86 00 2C */	lwz r4, 0x2c(r6)
/* 80152F2C 0014FE6C  80 A6 00 30 */	lwz r5, 0x30(r6)
/* 80152F30 0014FE70  80 04 02 2C */	lwz r0, 0x22c(r4)
/* 80152F34 0014FE74  90 01 00 78 */	stw r0, 0x78(r1)
/* 80152F38 0014FE78  80 04 02 50 */	lwz r0, 0x250(r4)
/* 80152F3C 0014FE7C  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80152F40 0014FE80  98 A1 00 80 */	stb r5, 0x80(r1)
/* 80152F44 0014FE84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80152F48 0014FE88  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 80152F4C 0014FE8C  7D 89 03 A6 */	mtctr r12
/* 80152F50 0014FE90  4E 80 04 21 */	bctrl 
/* 80152F54 0014FE94  90 61 00 84 */	stw r3, 0x84(r1)
/* 80152F58 0014FE98  7F C3 F3 78 */	mr r3, r30
/* 80152F5C 0014FE9C  38 81 00 40 */	addi r4, r1, 0x40
/* 80152F60 0014FEA0  4B FF B0 3D */	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
/* 80152F64 0014FEA4  38 61 00 40 */	addi r3, r1, 0x40
/* 80152F68 0014FEA8  38 80 00 00 */	li r4, 0
/* 80152F6C 0014FEAC  38 A0 00 01 */	li r5, 1
/* 80152F70 0014FEB0  48 1E 25 79 */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
/* 80152F74 0014FEB4  80 7E 02 2C */	lwz r3, 0x250(r30)
/* 80152F78 0014FEB8  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80152F7C 0014FEBC  2C 00 00 04 */	cmpwi r0, 4
/* 80152F80 0014FEC0  41 80 00 18 */	blt .L_80152F98
/* 80152F84 0014FEC4  38 7F 00 B0 */	addi r3, r31, 0xb0
/* 80152F88 0014FEC8  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152F8C 0014FECC  38 80 04 85 */	li r4, 0x485
/* 80152F90 0014FED0  4C C6 31 82 */	crclr 6
/* 80152F94 0014FED4  4B ED 76 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152F98:
/* 80152F98 0014FED8  80 7E 02 2C */	lwz r3, 0x250(r30)
/* 80152F9C 0014FEDC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80152FA0 0014FEE0  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80152FA4 0014FEE4  28 00 00 00 */	cmplwi r0, 0
/* 80152FA8 0014FEE8  38 03 00 01 */	addi r0, r3, 1
/* 80152FAC 0014FEEC  98 01 00 46 */	stb r0, 0x46(r1)
/* 80152FB0 0014FEF0  40 82 00 18 */	bne .L_80152FC8
/* 80152FB4 0014FEF4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152FB8 0014FEF8  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152FBC 0014FEFC  38 80 01 D3 */	li r4, 0x1d3
/* 80152FC0 0014FF00  4C C6 31 82 */	crclr 6
/* 80152FC4 0014FF04  4B ED 76 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152FC8:
/* 80152FC8 0014FF08  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 80152FCC 0014FF0C  38 81 00 40 */	addi r4, r1, 0x40
/* 80152FD0 0014FF10  81 83 00 00 */	lwz r12, 0(r3)
/* 80152FD4 0014FF14  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80152FD8 0014FF18  7D 89 03 A6 */	mtctr r12
/* 80152FDC 0014FF1C  4E 80 04 21 */	bctrl 
/* 80152FE0 0014FF20  48 00 00 AC */	b .L_8015308C
.L_80152FE4:
/* 80152FE4 0014FF24  38 61 00 08 */	addi r3, r1, 8
/* 80152FE8 0014FF28  48 1E 24 C9 */	bl __ct__Q26PSGame9SceneInfoFv
/* 80152FEC 0014FF2C  7F C3 F3 78 */	mr r3, r30
/* 80152FF0 0014FF30  38 81 00 08 */	addi r4, r1, 8
/* 80152FF4 0014FF34  4B FF AF A9 */	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
/* 80152FF8 0014FF38  38 61 00 08 */	addi r3, r1, 8
/* 80152FFC 0014FF3C  38 80 00 00 */	li r4, 0
/* 80153000 0014FF40  38 A0 00 01 */	li r5, 1
/* 80153004 0014FF44  48 1E 24 E5 */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
/* 80153008 0014FF48  80 7E 02 2C */	lwz r3, 0x250(r30)
/* 8015300C 0014FF4C  80 83 00 48 */	lwz r4, 0x48(r3)
/* 80153010 0014FF50  2C 04 00 04 */	cmpwi r4, 4
/* 80153014 0014FF54  41 80 00 10 */	blt .L_80153024
/* 80153018 0014FF58  38 00 00 01 */	li r0, 1
/* 8015301C 0014FF5C  98 01 00 0E */	stb r0, 0xe(r1)
/* 80153020 0014FF60  48 00 00 34 */	b .L_80153054
.L_80153024:
/* 80153024 0014FF64  2C 04 00 00 */	cmpwi r4, 0
/* 80153028 0014FF68  40 82 00 24 */	bne .L_8015304C
/* 8015302C 0014FF6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80153030 0014FF70  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80153034 0014FF74  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80153038 0014FF78  28 00 00 00 */	cmplwi r0, 0
/* 8015303C 0014FF7C  40 82 00 10 */	bne .L_8015304C
/* 80153040 0014FF80  38 00 00 14 */	li r0, 0x14
/* 80153044 0014FF84  98 01 00 0E */	stb r0, 0xe(r1)
/* 80153048 0014FF88  48 00 00 0C */	b .L_80153054
.L_8015304C:
/* 8015304C 0014FF8C  38 04 00 01 */	addi r0, r4, 1
/* 80153050 0014FF90  98 01 00 0E */	stb r0, 0xe(r1)
.L_80153054:
/* 80153054 0014FF94  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80153058 0014FF98  28 00 00 00 */	cmplwi r0, 0
/* 8015305C 0014FF9C  40 82 00 18 */	bne .L_80153074
/* 80153060 0014FFA0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80153064 0014FFA4  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80153068 0014FFA8  38 80 01 D3 */	li r4, 0x1d3
/* 8015306C 0014FFAC  4C C6 31 82 */	crclr 6
/* 80153070 0014FFB0  4B ED 75 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80153074:
/* 80153074 0014FFB4  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 80153078 0014FFB8  38 81 00 08 */	addi r4, r1, 8
/* 8015307C 0014FFBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80153080 0014FFC0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80153084 0014FFC4  7D 89 03 A6 */	mtctr r12
/* 80153088 0014FFC8  4E 80 04 21 */	bctrl 
.L_8015308C:
/* 8015308C 0014FFCC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80153090 0014FFD0  28 00 00 00 */	cmplwi r0, 0
/* 80153094 0014FFD4  40 82 00 18 */	bne .L_801530AC
/* 80153098 0014FFD8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8015309C 0014FFDC  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801530A0 0014FFE0  38 80 01 D3 */	li r4, 0x1d3
/* 801530A4 0014FFE4  4C C6 31 82 */	crclr 6
/* 801530A8 0014FFE8  4B ED 75 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801530AC:
/* 801530AC 0014FFEC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 801530B0 0014FFF0  80 1E 00 04 */	lwz r0, 4(r30)
/* 801530B4 0014FFF4  28 00 00 00 */	cmplwi r0, 0
/* 801530B8 0014FFF8  40 82 00 18 */	bne .L_801530D0
/* 801530BC 0014FFFC  38 7F 00 38 */	addi r3, r31, 0x38
/* 801530C0 00150000  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801530C4 00150004  38 80 00 C7 */	li r4, 0xc7
/* 801530C8 00150008  4C C6 31 82 */	crclr 6
/* 801530CC 0015000C  4B ED 75 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801530D0:
/* 801530D0 00150010  80 7E 00 04 */	lwz r3, 4(r30)
/* 801530D4 00150014  80 63 00 04 */	lwz r3, 4(r3)
/* 801530D8 00150018  81 83 00 00 */	lwz r12, 0(r3)
/* 801530DC 0015001C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801530E0 00150020  7D 89 03 A6 */	mtctr r12
/* 801530E4 00150024  4E 80 04 21 */	bctrl 
/* 801530E8 00150028  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801530EC 0015002C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801530F0 00150030  2C 00 00 00 */	cmpwi r0, 0
/* 801530F4 00150034  40 82 00 0C */	bne .L_80153100
/* 801530F8 00150038  38 60 00 00 */	li r3, 0
/* 801530FC 0015003C  48 31 00 F1 */	bl PSSetCurCameraNo__FUc
.L_80153100:
/* 80153100 00150040  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80153104 00150044  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 80153108 00150048  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8015310C 0015004C  7C 08 03 A6 */	mtlr r0
/* 80153110 00150050  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80153114 00150054  4E 80 00 20 */	blr 
.else
.global onSetSoundScene__Q24Game17SingleGameSectionFv
onSetSoundScene__Q24Game17SingleGameSectionFv:
/* 80152EB8 0014FDF8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80152EBC 0014FDFC  7C 08 02 A6 */	mflr r0
/* 80152EC0 0014FE00  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80152EC4 0014FE04  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 80152EC8 0014FE08  93 C1 00 98 */	stw r30, 0x98(r1)
/* 80152ECC 0014FE0C  7C 7E 1B 78 */	mr r30, r3
/* 80152ED0 0014FE10  3C 60 80 48 */	lis r3, lbl_8047CD98@ha
/* 80152ED4 0014FE14  88 1E 02 3C */	lbz r0, 0x23c(r30)
/* 80152ED8 0014FE18  3B E3 CD 98 */	addi r31, r3, lbl_8047CD98@l
/* 80152EDC 0014FE1C  28 00 00 00 */	cmplwi r0, 0
/* 80152EE0 0014FE20  41 82 01 04 */	beq .L_80152FE4
/* 80152EE4 0014FE24  38 61 00 40 */	addi r3, r1, 0x40
/* 80152EE8 0014FE28  48 1E 25 C9 */	bl __ct__Q26PSGame9SceneInfoFv
/* 80152EEC 0014FE2C  3C 80 80 4B */	lis r4, __vt__Q26PSGame13CaveFloorInfo@ha
/* 80152EF0 0014FE30  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 80152EF4 0014FE34  38 A0 00 00 */	li r5, 0
/* 80152EF8 0014FE38  38 00 00 FF */	li r0, 0xff
/* 80152EFC 0014FE3C  38 C4 12 50 */	addi r6, r4, __vt__Q26PSGame13CaveFloorInfo@l
/* 80152F00 0014FE40  38 83 FF FF */	addi r4, r3, 0x0000FFFF@l
/* 80152F04 0014FE44  90 C1 00 40 */	stw r6, 0x40(r1)
/* 80152F08 0014FE48  7F C3 F3 78 */	mr r3, r30
/* 80152F0C 0014FE4C  80 CD 93 08 */	lwz r6, mapMgr__4Game@sda21(r13)
/* 80152F10 0014FE50  90 A1 00 78 */	stw r5, 0x78(r1)
/* 80152F14 0014FE54  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 80152F18 0014FE58  98 A1 00 80 */	stb r5, 0x80(r1)
/* 80152F1C 0014FE5C  90 81 00 84 */	stw r4, 0x84(r1)
/* 80152F20 0014FE60  98 01 00 88 */	stb r0, 0x88(r1)
/* 80152F24 0014FE64  98 01 00 89 */	stb r0, 0x89(r1)
/* 80152F28 0014FE68  80 86 00 2C */	lwz r4, 0x2c(r6)
/* 80152F2C 0014FE6C  80 A6 00 30 */	lwz r5, 0x30(r6)
/* 80152F30 0014FE70  80 04 02 2C */	lwz r0, 0x22c(r4)
/* 80152F34 0014FE74  90 01 00 78 */	stw r0, 0x78(r1)
/* 80152F38 0014FE78  80 04 02 50 */	lwz r0, 0x250(r4)
/* 80152F3C 0014FE7C  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80152F40 0014FE80  98 A1 00 80 */	stb r5, 0x80(r1)
/* 80152F44 0014FE84  81 9E 00 00 */	lwz r12, 0(r30)
/* 80152F48 0014FE88  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 80152F4C 0014FE8C  7D 89 03 A6 */	mtctr r12
/* 80152F50 0014FE90  4E 80 04 21 */	bctrl 
/* 80152F54 0014FE94  90 61 00 84 */	stw r3, 0x84(r1)
/* 80152F58 0014FE98  7F C3 F3 78 */	mr r3, r30
/* 80152F5C 0014FE9C  38 81 00 40 */	addi r4, r1, 0x40
/* 80152F60 0014FEA0  4B FF B0 3D */	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
/* 80152F64 0014FEA4  38 61 00 40 */	addi r3, r1, 0x40
/* 80152F68 0014FEA8  38 80 00 00 */	li r4, 0
/* 80152F6C 0014FEAC  38 A0 00 01 */	li r5, 1
/* 80152F70 0014FEB0  48 1E 25 79 */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
/* 80152F74 0014FEB4  80 7E 02 2C */	lwz r3, 0x22c(r30)
/* 80152F78 0014FEB8  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80152F7C 0014FEBC  2C 00 00 04 */	cmpwi r0, 4
/* 80152F80 0014FEC0  41 80 00 18 */	blt .L_80152F98
/* 80152F84 0014FEC4  38 7F 00 B0 */	addi r3, r31, 0xb0
/* 80152F88 0014FEC8  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152F8C 0014FECC  38 80 04 85 */	li r4, 0x485
/* 80152F90 0014FED0  4C C6 31 82 */	crclr 6
/* 80152F94 0014FED4  4B ED 76 AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152F98:
/* 80152F98 0014FED8  80 7E 02 2C */	lwz r3, 0x22c(r30)
/* 80152F9C 0014FEDC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80152FA0 0014FEE0  80 63 00 48 */	lwz r3, 0x48(r3)
/* 80152FA4 0014FEE4  28 00 00 00 */	cmplwi r0, 0
/* 80152FA8 0014FEE8  38 03 00 01 */	addi r0, r3, 1
/* 80152FAC 0014FEEC  98 01 00 46 */	stb r0, 0x46(r1)
/* 80152FB0 0014FEF0  40 82 00 18 */	bne .L_80152FC8
/* 80152FB4 0014FEF4  38 7F 00 20 */	addi r3, r31, 0x20
/* 80152FB8 0014FEF8  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80152FBC 0014FEFC  38 80 01 D3 */	li r4, 0x1d3
/* 80152FC0 0014FF00  4C C6 31 82 */	crclr 6
/* 80152FC4 0014FF04  4B ED 76 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80152FC8:
/* 80152FC8 0014FF08  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 80152FCC 0014FF0C  38 81 00 40 */	addi r4, r1, 0x40
/* 80152FD0 0014FF10  81 83 00 00 */	lwz r12, 0(r3)
/* 80152FD4 0014FF14  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80152FD8 0014FF18  7D 89 03 A6 */	mtctr r12
/* 80152FDC 0014FF1C  4E 80 04 21 */	bctrl 
/* 80152FE0 0014FF20  48 00 00 AC */	b .L_8015308C
.L_80152FE4:
/* 80152FE4 0014FF24  38 61 00 08 */	addi r3, r1, 8
/* 80152FE8 0014FF28  48 1E 24 C9 */	bl __ct__Q26PSGame9SceneInfoFv
/* 80152FEC 0014FF2C  7F C3 F3 78 */	mr r3, r30
/* 80152FF0 0014FF30  38 81 00 08 */	addi r4, r1, 8
/* 80152FF4 0014FF34  4B FF AF A9 */	bl setDefaultPSSceneInfo__Q24Game15BaseGameSectionFRQ26PSGame9SceneInfo
/* 80152FF8 0014FF38  38 61 00 08 */	addi r3, r1, 8
/* 80152FFC 0014FF3C  38 80 00 00 */	li r4, 0
/* 80153000 0014FF40  38 A0 00 01 */	li r5, 1
/* 80153004 0014FF44  48 1E 24 E5 */	bl setStageFlag__Q26PSGame9SceneInfoFQ36PSGame9SceneInfo7FlagDefQ36PSGame9SceneInfo12FlagBitShift
/* 80153008 0014FF48  80 7E 02 2C */	lwz r3, 0x22c(r30)
/* 8015300C 0014FF4C  80 83 00 48 */	lwz r4, 0x48(r3)
/* 80153010 0014FF50  2C 04 00 04 */	cmpwi r4, 4
/* 80153014 0014FF54  41 80 00 10 */	blt .L_80153024
/* 80153018 0014FF58  38 00 00 01 */	li r0, 1
/* 8015301C 0014FF5C  98 01 00 0E */	stb r0, 0xe(r1)
/* 80153020 0014FF60  48 00 00 34 */	b .L_80153054
.L_80153024:
/* 80153024 0014FF64  2C 04 00 00 */	cmpwi r4, 0
/* 80153028 0014FF68  40 82 00 24 */	bne .L_8015304C
/* 8015302C 0014FF6C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80153030 0014FF70  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80153034 0014FF74  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80153038 0014FF78  28 00 00 00 */	cmplwi r0, 0
/* 8015303C 0014FF7C  40 82 00 10 */	bne .L_8015304C
/* 80153040 0014FF80  38 00 00 14 */	li r0, 0x14
/* 80153044 0014FF84  98 01 00 0E */	stb r0, 0xe(r1)
/* 80153048 0014FF88  48 00 00 0C */	b .L_80153054
.L_8015304C:
/* 8015304C 0014FF8C  38 04 00 01 */	addi r0, r4, 1
/* 80153050 0014FF90  98 01 00 0E */	stb r0, 0xe(r1)
.L_80153054:
/* 80153054 0014FF94  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80153058 0014FF98  28 00 00 00 */	cmplwi r0, 0
/* 8015305C 0014FF9C  40 82 00 18 */	bne .L_80153074
/* 80153060 0014FFA0  38 7F 00 20 */	addi r3, r31, 0x20
/* 80153064 0014FFA4  38 BF 00 2C */	addi r5, r31, 0x2c
/* 80153068 0014FFA8  38 80 01 D3 */	li r4, 0x1d3
/* 8015306C 0014FFAC  4C C6 31 82 */	crclr 6
/* 80153070 0014FFB0  4B ED 75 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80153074:
/* 80153074 0014FFB4  80 6D 98 80 */	lwz r3, spSceneMgr__8PSSystem@sda21(r13)
/* 80153078 0014FFB8  38 81 00 08 */	addi r4, r1, 8
/* 8015307C 0014FFBC  81 83 00 00 */	lwz r12, 0(r3)
/* 80153080 0014FFC0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80153084 0014FFC4  7D 89 03 A6 */	mtctr r12
/* 80153088 0014FFC8  4E 80 04 21 */	bctrl 
.L_8015308C:
/* 8015308C 0014FFCC  80 0D 98 80 */	lwz r0, spSceneMgr__8PSSystem@sda21(r13)
/* 80153090 0014FFD0  28 00 00 00 */	cmplwi r0, 0
/* 80153094 0014FFD4  40 82 00 18 */	bne .L_801530AC
/* 80153098 0014FFD8  38 7F 00 20 */	addi r3, r31, 0x20
/* 8015309C 0014FFDC  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801530A0 0014FFE0  38 80 01 D3 */	li r4, 0x1d3
/* 801530A4 0014FFE4  4C C6 31 82 */	crclr 6
/* 801530A8 0014FFE8  4B ED 75 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801530AC:
/* 801530AC 0014FFEC  83 CD 98 80 */	lwz r30, spSceneMgr__8PSSystem@sda21(r13)
/* 801530B0 0014FFF0  80 1E 00 04 */	lwz r0, 4(r30)
/* 801530B4 0014FFF4  28 00 00 00 */	cmplwi r0, 0
/* 801530B8 0014FFF8  40 82 00 18 */	bne .L_801530D0
/* 801530BC 0014FFFC  38 7F 00 38 */	addi r3, r31, 0x38
/* 801530C0 00150000  38 BF 00 2C */	addi r5, r31, 0x2c
/* 801530C4 00150004  38 80 00 C7 */	li r4, 0xc7
/* 801530C8 00150008  4C C6 31 82 */	crclr 6
/* 801530CC 0015000C  4B ED 75 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801530D0:
/* 801530D0 00150010  80 7E 00 04 */	lwz r3, 4(r30)
/* 801530D4 00150014  80 63 00 04 */	lwz r3, 4(r3)
/* 801530D8 00150018  81 83 00 00 */	lwz r12, 0(r3)
/* 801530DC 0015001C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801530E0 00150020  7D 89 03 A6 */	mtctr r12
/* 801530E4 00150024  4E 80 04 21 */	bctrl 
/* 801530E8 00150028  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801530EC 0015002C  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801530F0 00150030  2C 00 00 00 */	cmpwi r0, 0
/* 801530F4 00150034  40 82 00 0C */	bne .L_80153100
/* 801530F8 00150038  38 60 00 00 */	li r3, 0
/* 801530FC 0015003C  48 31 00 F1 */	bl PSSetCurCameraNo__FUc
.L_80153100:
/* 80153100 00150040  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80153104 00150044  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 80153108 00150048  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 8015310C 0015004C  7C 08 03 A6 */	mtlr r0
/* 80153110 00150050  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80153114 00150054  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getCaveID__Q24Game17SingleGameSectionFv
getCaveID__Q24Game17SingleGameSectionFv:
/* 80153118 00150058  80 63 02 38 */	lwz r3, 0x25c(r3)
/* 8015311C 0015005C  4E 80 00 20 */	blr 
.else
.global getCaveID__Q24Game17SingleGameSectionFv
getCaveID__Q24Game17SingleGameSectionFv:
/* 80153118 00150058  80 63 02 38 */	lwz r3, 0x238(r3)
/* 8015311C 0015005C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onSetupFloatMemory__Q24Game17SingleGameSectionFv
onSetupFloatMemory__Q24Game17SingleGameSectionFv:
/* 80153120 00150060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153124 00150064  7C 08 02 A6 */	mflr r0
/* 80153128 00150068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015312C 0015006C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80153130 00150070  7C 7F 1B 78 */	mr r31, r3
/* 80153134 00150074  88 03 02 3C */	lbz r0, 0x260(r3)
/* 80153138 00150078  28 00 00 00 */	cmplwi r0, 0
/* 8015313C 0015007C  40 82 02 0C */	bne .L_80153348
/* 80153140 00150080  80 1F 02 2C */	lwz r0, 0x250(r31)
/* 80153144 00150084  28 00 00 00 */	cmplwi r0, 0
/* 80153148 00150088  40 82 00 20 */	bne .L_80153168
/* 8015314C 0015008C  3C 60 80 48 */	lis r3, lbl_8047CE48@ha
/* 80153150 00150090  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80153154 00150094  38 63 CE 48 */	addi r3, r3, lbl_8047CE48@l
/* 80153158 00150098  38 80 04 EC */	li r4, 0x4ec
/* 8015315C 0015009C  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 80153160 001500A0  4C C6 31 82 */	crclr 6
/* 80153164 001500A4  4B ED 74 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80153168:
/* 80153168 001500A8  80 7F 02 2C */	lwz r3, 0x250(r31)
/* 8015316C 001500AC  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80153170 001500B0  2C 00 00 02 */	cmpwi r0, 2
/* 80153174 001500B4  41 82 01 C8 */	beq .L_8015333C
/* 80153178 001500B8  40 80 00 14 */	bge .L_8015318C
/* 8015317C 001500BC  2C 00 00 00 */	cmpwi r0, 0
/* 80153180 001500C0  41 82 00 18 */	beq .L_80153198
/* 80153184 001500C4  40 80 00 A0 */	bge .L_80153224
/* 80153188 001500C8  48 00 01 B4 */	b .L_8015333C
.L_8015318C:
/* 8015318C 001500CC  2C 00 00 04 */	cmpwi r0, 4
/* 80153190 001500D0  40 80 01 AC */	bge .L_8015333C
/* 80153194 001500D4  48 00 01 1C */	b .L_801532B0
.L_80153198:
/* 80153198 001500D8  38 60 00 14 */	li r3, 0x14
/* 8015319C 001500DC  4B ED 0D 09 */	bl __nw__FUl
/* 801531A0 001500E0  28 03 00 00 */	cmplwi r3, 0
/* 801531A4 001500E4  41 82 00 78 */	beq .L_8015321C
/* 801531A8 001500E8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801531AC 001500EC  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 801531B0 001500F0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801531B4 001500F4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801531B8 001500F8  90 03 00 00 */	stw r0, 0(r3)
/* 801531BC 001500FC  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 801531C0 00150100  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801531C4 00150104  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 801531C8 00150108  90 03 00 04 */	stw r0, 4(r3)
/* 801531CC 0015010C  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 801531D0 00150110  3C 80 80 4B */	lis r4, __vt__Q23efx13TTutorialSnow@ha
/* 801531D4 00150114  38 05 00 14 */	addi r0, r5, 0x14
/* 801531D8 00150118  90 A3 00 00 */	stw r5, 0(r3)
/* 801531DC 0015011C  38 84 12 04 */	addi r4, r4, __vt__Q23efx13TTutorialSnow@l
/* 801531E0 00150120  39 20 00 00 */	li r9, 0
/* 801531E4 00150124  39 00 02 B2 */	li r8, 0x2b2
/* 801531E8 00150128  90 03 00 04 */	stw r0, 4(r3)
/* 801531EC 0015012C  38 C7 00 14 */	addi r6, r7, 0x14
/* 801531F0 00150130  38 A0 02 72 */	li r5, 0x272
/* 801531F4 00150134  38 04 00 14 */	addi r0, r4, 0x14
/* 801531F8 00150138  91 23 00 08 */	stw r9, 8(r3)
/* 801531FC 0015013C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80153200 00150140  99 23 00 0E */	stb r9, 0xe(r3)
/* 80153204 00150144  90 E3 00 00 */	stw r7, 0(r3)
/* 80153208 00150148  90 C3 00 04 */	stw r6, 4(r3)
/* 8015320C 0015014C  91 23 00 10 */	stw r9, 0x10(r3)
/* 80153210 00150150  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80153214 00150154  90 83 00 00 */	stw r4, 0(r3)
/* 80153218 00150158  90 03 00 04 */	stw r0, 4(r3)
.L_8015321C:
/* 8015321C 0015015C  90 7F 02 44 */	stw r3, 0x268(r31)
/* 80153220 00150160  48 00 01 30 */	b .L_80153350
.L_80153224:
/* 80153224 00150164  38 60 00 14 */	li r3, 0x14
/* 80153228 00150168  4B ED 0C 7D */	bl __nw__FUl
/* 8015322C 0015016C  28 03 00 00 */	cmplwi r3, 0
/* 80153230 00150170  41 82 00 78 */	beq .L_801532A8
/* 80153234 00150174  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80153238 00150178  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8015323C 0015017C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80153240 00150180  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80153244 00150184  90 03 00 00 */	stw r0, 0(r3)
/* 80153248 00150188  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8015324C 0015018C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80153250 00150190  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80153254 00150194  90 03 00 04 */	stw r0, 4(r3)
/* 80153258 00150198  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 8015325C 0015019C  3C 80 80 4B */	lis r4, __vt__Q23efx13TForestSakura@ha
/* 80153260 001501A0  38 05 00 14 */	addi r0, r5, 0x14
/* 80153264 001501A4  90 A3 00 00 */	stw r5, 0(r3)
/* 80153268 001501A8  38 84 11 B8 */	addi r4, r4, __vt__Q23efx13TForestSakura@l
/* 8015326C 001501AC  39 20 00 00 */	li r9, 0
/* 80153270 001501B0  39 00 02 B2 */	li r8, 0x2b2
/* 80153274 001501B4  90 03 00 04 */	stw r0, 4(r3)
/* 80153278 001501B8  38 C7 00 14 */	addi r6, r7, 0x14
/* 8015327C 001501BC  38 A0 00 5B */	li r5, 0x5b
/* 80153280 001501C0  38 04 00 14 */	addi r0, r4, 0x14
/* 80153284 001501C4  91 23 00 08 */	stw r9, 8(r3)
/* 80153288 001501C8  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8015328C 001501CC  99 23 00 0E */	stb r9, 0xe(r3)
/* 80153290 001501D0  90 E3 00 00 */	stw r7, 0(r3)
/* 80153294 001501D4  90 C3 00 04 */	stw r6, 4(r3)
/* 80153298 001501D8  91 23 00 10 */	stw r9, 0x10(r3)
/* 8015329C 001501DC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 801532A0 001501E0  90 83 00 00 */	stw r4, 0(r3)
/* 801532A4 001501E4  90 03 00 04 */	stw r0, 4(r3)
.L_801532A8:
/* 801532A8 001501E8  90 7F 02 44 */	stw r3, 0x268(r31)
/* 801532AC 001501EC  48 00 00 A4 */	b .L_80153350
.L_801532B0:
/* 801532B0 001501F0  38 60 00 14 */	li r3, 0x14
/* 801532B4 001501F4  4B ED 0B F1 */	bl __nw__FUl
/* 801532B8 001501F8  28 03 00 00 */	cmplwi r3, 0
/* 801532BC 001501FC  41 82 00 78 */	beq .L_80153334
/* 801532C0 00150200  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801532C4 00150204  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 801532C8 00150208  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801532CC 0015020C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801532D0 00150210  90 03 00 00 */	stw r0, 0(r3)
/* 801532D4 00150214  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 801532D8 00150218  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801532DC 0015021C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 801532E0 00150220  90 03 00 04 */	stw r0, 4(r3)
/* 801532E4 00150224  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 801532E8 00150228  3C 80 80 4B */	lis r4, __vt__Q23efx11TLastMomiji@ha
/* 801532EC 0015022C  38 05 00 14 */	addi r0, r5, 0x14
/* 801532F0 00150230  90 A3 00 00 */	stw r5, 0(r3)
/* 801532F4 00150234  38 84 11 6C */	addi r4, r4, __vt__Q23efx11TLastMomiji@l
/* 801532F8 00150238  39 20 00 00 */	li r9, 0
/* 801532FC 0015023C  39 00 02 B2 */	li r8, 0x2b2
/* 80153300 00150240  90 03 00 04 */	stw r0, 4(r3)
/* 80153304 00150244  38 C7 00 14 */	addi r6, r7, 0x14
/* 80153308 00150248  38 A0 02 7C */	li r5, 0x27c
/* 8015330C 0015024C  38 04 00 14 */	addi r0, r4, 0x14
/* 80153310 00150250  91 23 00 08 */	stw r9, 8(r3)
/* 80153314 00150254  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80153318 00150258  99 23 00 0E */	stb r9, 0xe(r3)
/* 8015331C 0015025C  90 E3 00 00 */	stw r7, 0(r3)
/* 80153320 00150260  90 C3 00 04 */	stw r6, 4(r3)
/* 80153324 00150264  91 23 00 10 */	stw r9, 0x10(r3)
/* 80153328 00150268  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8015332C 0015026C  90 83 00 00 */	stw r4, 0(r3)
/* 80153330 00150270  90 03 00 04 */	stw r0, 4(r3)
.L_80153334:
/* 80153334 00150274  90 7F 02 44 */	stw r3, 0x268(r31)
/* 80153338 00150278  48 00 00 18 */	b .L_80153350
.L_8015333C:
/* 8015333C 0015027C  38 00 00 00 */	li r0, 0
/* 80153340 00150280  90 1F 02 44 */	stw r0, 0x268(r31)
/* 80153344 00150284  48 00 00 0C */	b .L_80153350
.L_80153348:
/* 80153348 00150288  38 00 00 00 */	li r0, 0
/* 8015334C 0015028C  90 0D 91 D8 */	stw r0, farmMgr__Q24Game4Farm@sda21(r13)
.L_80153350:
/* 80153350 00150290  88 1F 02 3C */	lbz r0, 0x260(r31)
/* 80153354 00150294  28 00 00 00 */	cmplwi r0, 0
/* 80153358 00150298  40 82 00 54 */	bne .L_801533AC
/* 8015335C 0015029C  80 7F 02 2C */	lwz r3, 0x250(r31)
/* 80153360 001502A0  38 80 00 00 */	li r4, 0
/* 80153364 001502A4  48 05 AC BD */	bl createMapMgr__Q24Game6StagesFPQ24Game10CourseInfoPQ24Game8RouteMgr
/* 80153368 001502A8  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8015336C 001502AC  28 04 00 00 */	cmplwi r4, 0
/* 80153370 001502B0  41 82 00 08 */	beq .L_80153378
/* 80153374 001502B4  80 84 00 00 */	lwz r4, 0(r4)
.L_80153378:
/* 80153378 001502B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015337C 001502BC  48 06 2B CD */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80153380 001502C0  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 80153384 001502C4  28 04 00 00 */	cmplwi r4, 0
/* 80153388 001502C8  41 82 00 24 */	beq .L_801533AC
/* 8015338C 001502CC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80153390 001502D0  48 06 2B B9 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80153394 001502D4  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 80153398 001502D8  28 04 00 00 */	cmplwi r4, 0
/* 8015339C 001502DC  41 82 00 08 */	beq .L_801533A4
/* 801533A0 001502E0  38 84 00 04 */	addi r4, r4, 4
.L_801533A4:
/* 801533A4 001502E4  7F E3 FB 78 */	mr r3, r31
/* 801533A8 001502E8  48 01 1C 09 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
.L_801533AC:
/* 801533AC 001502EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801533B0 001502F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801533B4 001502F4  7C 08 03 A6 */	mtlr r0
/* 801533B8 001502F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801533BC 001502FC  4E 80 00 20 */	blr 
.else
.global onSetupFloatMemory__Q24Game17SingleGameSectionFv
onSetupFloatMemory__Q24Game17SingleGameSectionFv:
/* 80153120 00150060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153124 00150064  7C 08 02 A6 */	mflr r0
/* 80153128 00150068  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015312C 0015006C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80153130 00150070  7C 7F 1B 78 */	mr r31, r3
/* 80153134 00150074  88 03 02 3C */	lbz r0, 0x23c(r3)
/* 80153138 00150078  28 00 00 00 */	cmplwi r0, 0
/* 8015313C 0015007C  40 82 02 0C */	bne .L_80153348
/* 80153140 00150080  80 1F 02 2C */	lwz r0, 0x22c(r31)
/* 80153144 00150084  28 00 00 00 */	cmplwi r0, 0
/* 80153148 00150088  40 82 00 20 */	bne .L_80153168
/* 8015314C 0015008C  3C 60 80 48 */	lis r3, lbl_8047CE48@ha
/* 80153150 00150090  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80153154 00150094  38 63 CE 48 */	addi r3, r3, lbl_8047CE48@l
/* 80153158 00150098  38 80 04 EC */	li r4, 0x4ec
/* 8015315C 0015009C  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 80153160 001500A0  4C C6 31 82 */	crclr 6
/* 80153164 001500A4  4B ED 74 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_80153168:
/* 80153168 001500A8  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 8015316C 001500AC  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80153170 001500B0  2C 00 00 02 */	cmpwi r0, 2
/* 80153174 001500B4  41 82 01 C8 */	beq .L_8015333C
/* 80153178 001500B8  40 80 00 14 */	bge .L_8015318C
/* 8015317C 001500BC  2C 00 00 00 */	cmpwi r0, 0
/* 80153180 001500C0  41 82 00 18 */	beq .L_80153198
/* 80153184 001500C4  40 80 00 A0 */	bge .L_80153224
/* 80153188 001500C8  48 00 01 B4 */	b .L_8015333C
.L_8015318C:
/* 8015318C 001500CC  2C 00 00 04 */	cmpwi r0, 4
/* 80153190 001500D0  40 80 01 AC */	bge .L_8015333C
/* 80153194 001500D4  48 00 01 1C */	b .L_801532B0
.L_80153198:
/* 80153198 001500D8  38 60 00 14 */	li r3, 0x14
/* 8015319C 001500DC  4B ED 0D 09 */	bl __nw__FUl
/* 801531A0 001500E0  28 03 00 00 */	cmplwi r3, 0
/* 801531A4 001500E4  41 82 00 78 */	beq .L_8015321C
/* 801531A8 001500E8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801531AC 001500EC  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 801531B0 001500F0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801531B4 001500F4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801531B8 001500F8  90 03 00 00 */	stw r0, 0(r3)
/* 801531BC 001500FC  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 801531C0 00150100  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801531C4 00150104  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 801531C8 00150108  90 03 00 04 */	stw r0, 4(r3)
/* 801531CC 0015010C  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 801531D0 00150110  3C 80 80 4B */	lis r4, __vt__Q23efx13TTutorialSnow@ha
/* 801531D4 00150114  38 05 00 14 */	addi r0, r5, 0x14
/* 801531D8 00150118  90 A3 00 00 */	stw r5, 0(r3)
/* 801531DC 0015011C  38 84 12 04 */	addi r4, r4, __vt__Q23efx13TTutorialSnow@l
/* 801531E0 00150120  39 20 00 00 */	li r9, 0
/* 801531E4 00150124  39 00 02 B2 */	li r8, 0x2b2
/* 801531E8 00150128  90 03 00 04 */	stw r0, 4(r3)
/* 801531EC 0015012C  38 C7 00 14 */	addi r6, r7, 0x14
/* 801531F0 00150130  38 A0 02 72 */	li r5, 0x272
/* 801531F4 00150134  38 04 00 14 */	addi r0, r4, 0x14
/* 801531F8 00150138  91 23 00 08 */	stw r9, 8(r3)
/* 801531FC 0015013C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80153200 00150140  99 23 00 0E */	stb r9, 0xe(r3)
/* 80153204 00150144  90 E3 00 00 */	stw r7, 0(r3)
/* 80153208 00150148  90 C3 00 04 */	stw r6, 4(r3)
/* 8015320C 0015014C  91 23 00 10 */	stw r9, 0x10(r3)
/* 80153210 00150150  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 80153214 00150154  90 83 00 00 */	stw r4, 0(r3)
/* 80153218 00150158  90 03 00 04 */	stw r0, 4(r3)
.L_8015321C:
/* 8015321C 0015015C  90 7F 02 44 */	stw r3, 0x244(r31)
/* 80153220 00150160  48 00 01 30 */	b .L_80153350
.L_80153224:
/* 80153224 00150164  38 60 00 14 */	li r3, 0x14
/* 80153228 00150168  4B ED 0C 7D */	bl __nw__FUl
/* 8015322C 0015016C  28 03 00 00 */	cmplwi r3, 0
/* 80153230 00150170  41 82 00 78 */	beq .L_801532A8
/* 80153234 00150174  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 80153238 00150178  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8015323C 0015017C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 80153240 00150180  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80153244 00150184  90 03 00 00 */	stw r0, 0(r3)
/* 80153248 00150188  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8015324C 0015018C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80153250 00150190  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 80153254 00150194  90 03 00 04 */	stw r0, 4(r3)
/* 80153258 00150198  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 8015325C 0015019C  3C 80 80 4B */	lis r4, __vt__Q23efx13TForestSakura@ha
/* 80153260 001501A0  38 05 00 14 */	addi r0, r5, 0x14
/* 80153264 001501A4  90 A3 00 00 */	stw r5, 0(r3)
/* 80153268 001501A8  38 84 11 B8 */	addi r4, r4, __vt__Q23efx13TForestSakura@l
/* 8015326C 001501AC  39 20 00 00 */	li r9, 0
/* 80153270 001501B0  39 00 02 B2 */	li r8, 0x2b2
/* 80153274 001501B4  90 03 00 04 */	stw r0, 4(r3)
/* 80153278 001501B8  38 C7 00 14 */	addi r6, r7, 0x14
/* 8015327C 001501BC  38 A0 00 5B */	li r5, 0x5b
/* 80153280 001501C0  38 04 00 14 */	addi r0, r4, 0x14
/* 80153284 001501C4  91 23 00 08 */	stw r9, 8(r3)
/* 80153288 001501C8  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8015328C 001501CC  99 23 00 0E */	stb r9, 0xe(r3)
/* 80153290 001501D0  90 E3 00 00 */	stw r7, 0(r3)
/* 80153294 001501D4  90 C3 00 04 */	stw r6, 4(r3)
/* 80153298 001501D8  91 23 00 10 */	stw r9, 0x10(r3)
/* 8015329C 001501DC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 801532A0 001501E0  90 83 00 00 */	stw r4, 0(r3)
/* 801532A4 001501E4  90 03 00 04 */	stw r0, 4(r3)
.L_801532A8:
/* 801532A8 001501E8  90 7F 02 44 */	stw r3, 0x244(r31)
/* 801532AC 001501EC  48 00 00 A4 */	b .L_80153350
.L_801532B0:
/* 801532B0 001501F0  38 60 00 14 */	li r3, 0x14
/* 801532B4 001501F4  4B ED 0B F1 */	bl __nw__FUl
/* 801532B8 001501F8  28 03 00 00 */	cmplwi r3, 0
/* 801532BC 001501FC  41 82 00 78 */	beq .L_80153334
/* 801532C0 00150200  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801532C4 00150204  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 801532C8 00150208  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801532CC 0015020C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801532D0 00150210  90 03 00 00 */	stw r0, 0(r3)
/* 801532D4 00150214  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 801532D8 00150218  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801532DC 0015021C  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 801532E0 00150220  90 03 00 04 */	stw r0, 4(r3)
/* 801532E4 00150224  38 E4 69 40 */	addi r7, r4, __vt__Q23efx9TChasePos@l
/* 801532E8 00150228  3C 80 80 4B */	lis r4, __vt__Q23efx11TLastMomiji@ha
/* 801532EC 0015022C  38 05 00 14 */	addi r0, r5, 0x14
/* 801532F0 00150230  90 A3 00 00 */	stw r5, 0(r3)
/* 801532F4 00150234  38 84 11 6C */	addi r4, r4, __vt__Q23efx11TLastMomiji@l
/* 801532F8 00150238  39 20 00 00 */	li r9, 0
/* 801532FC 0015023C  39 00 02 B2 */	li r8, 0x2b2
/* 80153300 00150240  90 03 00 04 */	stw r0, 4(r3)
/* 80153304 00150244  38 C7 00 14 */	addi r6, r7, 0x14
/* 80153308 00150248  38 A0 02 7C */	li r5, 0x27c
/* 8015330C 0015024C  38 04 00 14 */	addi r0, r4, 0x14
/* 80153310 00150250  91 23 00 08 */	stw r9, 8(r3)
/* 80153314 00150254  B1 03 00 0C */	sth r8, 0xc(r3)
/* 80153318 00150258  99 23 00 0E */	stb r9, 0xe(r3)
/* 8015331C 0015025C  90 E3 00 00 */	stw r7, 0(r3)
/* 80153320 00150260  90 C3 00 04 */	stw r6, 4(r3)
/* 80153324 00150264  91 23 00 10 */	stw r9, 0x10(r3)
/* 80153328 00150268  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8015332C 0015026C  90 83 00 00 */	stw r4, 0(r3)
/* 80153330 00150270  90 03 00 04 */	stw r0, 4(r3)
.L_80153334:
/* 80153334 00150274  90 7F 02 44 */	stw r3, 0x244(r31)
/* 80153338 00150278  48 00 00 18 */	b .L_80153350
.L_8015333C:
/* 8015333C 0015027C  38 00 00 00 */	li r0, 0
/* 80153340 00150280  90 1F 02 44 */	stw r0, 0x244(r31)
/* 80153344 00150284  48 00 00 0C */	b .L_80153350
.L_80153348:
/* 80153348 00150288  38 00 00 00 */	li r0, 0
/* 8015334C 0015028C  90 0D 91 D8 */	stw r0, farmMgr__Q24Game4Farm@sda21(r13)
.L_80153350:
/* 80153350 00150290  88 1F 02 3C */	lbz r0, 0x23c(r31)
/* 80153354 00150294  28 00 00 00 */	cmplwi r0, 0
/* 80153358 00150298  40 82 00 54 */	bne .L_801533AC
/* 8015335C 0015029C  80 7F 02 2C */	lwz r3, 0x22c(r31)
/* 80153360 001502A0  38 80 00 00 */	li r4, 0
/* 80153364 001502A4  48 05 AC BD */	bl createMapMgr__Q24Game6StagesFPQ24Game10CourseInfoPQ24Game8RouteMgr
/* 80153368 001502A8  80 8D 93 08 */	lwz r4, mapMgr__4Game@sda21(r13)
/* 8015336C 001502AC  28 04 00 00 */	cmplwi r4, 0
/* 80153370 001502B0  41 82 00 08 */	beq .L_80153378
/* 80153374 001502B4  80 84 00 00 */	lwz r4, 0(r4)
.L_80153378:
/* 80153378 001502B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015337C 001502BC  48 06 2B CD */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80153380 001502C0  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 80153384 001502C4  28 04 00 00 */	cmplwi r4, 0
/* 80153388 001502C8  41 82 00 24 */	beq .L_801533AC
/* 8015338C 001502CC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80153390 001502D0  48 06 2B B9 */	bl addObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 80153394 001502D4  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 80153398 001502D8  28 04 00 00 */	cmplwi r4, 0
/* 8015339C 001502DC  41 82 00 08 */	beq .L_801533A4
/* 801533A0 001502E0  38 84 00 04 */	addi r4, r4, 4
.L_801533A4:
/* 801533A4 001502E4  7F E3 FB 78 */	mr r3, r31
/* 801533A8 001502E8  48 01 1C 09 */	bl addGenNode__Q24Game14BaseHIOSectionFP5CNode
.L_801533AC:
/* 801533AC 001502EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801533B0 001502F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801533B4 001502F4  7C 08 03 A6 */	mtlr r0
/* 801533B8 001502F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801533BC 001502FC  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onClearHeap__Q24Game17SingleGameSectionFv
onClearHeap__Q24Game17SingleGameSectionFv:
/* 801533C0 00150300  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801533C4 00150304  7C 08 02 A6 */	mflr r0
/* 801533C8 00150308  90 01 00 14 */	stw r0, 0x14(r1)
/* 801533CC 0015030C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801533D0 00150310  7C 7F 1B 78 */	mr r31, r3
/* 801533D4 00150314  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 801533D8 00150318  28 04 00 00 */	cmplwi r4, 0
/* 801533DC 0015031C  41 82 00 20 */	beq .L_801533FC
/* 801533E0 00150320  38 64 00 04 */	addi r3, r4, 4
/* 801533E4 00150324  48 2B E1 ED */	bl del__5CNodeFv
/* 801533E8 00150328  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801533EC 0015032C  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 801533F0 00150330  48 06 2B C5 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 801533F4 00150334  38 00 00 00 */	li r0, 0
/* 801533F8 00150338  90 1F 02 44 */	stw r0, 0x268(r31)
.L_801533FC:
/* 801533FC 0015033C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153400 00150340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80153404 00150344  7C 08 03 A6 */	mtlr r0
/* 80153408 00150348  38 21 00 10 */	addi r1, r1, 0x10
/* 8015340C 0015034C  4E 80 00 20 */	blr 
.else
.global onClearHeap__Q24Game17SingleGameSectionFv
onClearHeap__Q24Game17SingleGameSectionFv:
/* 801533C0 00150300  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801533C4 00150304  7C 08 02 A6 */	mflr r0
/* 801533C8 00150308  90 01 00 14 */	stw r0, 0x14(r1)
/* 801533CC 0015030C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801533D0 00150310  7C 7F 1B 78 */	mr r31, r3
/* 801533D4 00150314  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 801533D8 00150318  28 04 00 00 */	cmplwi r4, 0
/* 801533DC 0015031C  41 82 00 20 */	beq .L_801533FC
/* 801533E0 00150320  38 64 00 04 */	addi r3, r4, 4
/* 801533E4 00150324  48 2B E1 ED */	bl del__5CNodeFv
/* 801533E8 00150328  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801533EC 0015032C  80 8D 91 D8 */	lwz r4, farmMgr__Q24Game4Farm@sda21(r13)
/* 801533F0 00150330  48 06 2B C5 */	bl detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
/* 801533F4 00150334  38 00 00 00 */	li r0, 0
/* 801533F8 00150338  90 1F 02 44 */	stw r0, 0x244(r31)
.L_801533FC:
/* 801533FC 0015033C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153400 00150340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80153404 00150344  7C 08 03 A6 */	mtlr r0
/* 80153408 00150348  38 21 00 10 */	addi r1, r1, 0x10
/* 8015340C 0015034C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onStartHeap__Q24Game17SingleGameSectionFv
onStartHeap__Q24Game17SingleGameSectionFv:
/* 80153410 00150350  38 00 00 00 */	li r0, 0
/* 80153414 00150354  98 03 01 94 */	stb r0, 0x1b8(r3)
/* 80153418 00150358  4E 80 00 20 */	blr 
.else
.global onStartHeap__Q24Game17SingleGameSectionFv
onStartHeap__Q24Game17SingleGameSectionFv:
/* 80153410 00150350  38 00 00 00 */	li r0, 0
/* 80153414 00150354  98 03 01 94 */	stb r0, 0x194(r3)
/* 80153418 00150358  4E 80 00 20 */	blr 
.endif

.if version == 1
.global gmOrimaDown__Q24Game17SingleGameSectionFi
gmOrimaDown__Q24Game17SingleGameSectionFi:
/* 8015341C 0015035C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153420 00150360  7C 08 02 A6 */	mflr r0
/* 80153424 00150364  7C 66 1B 78 */	mr r6, r3
/* 80153428 00150368  7C 85 23 78 */	mr r5, r4
/* 8015342C 0015036C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153430 00150370  80 63 02 50 */	lwz r3, 0x274(r3)
/* 80153434 00150374  28 03 00 00 */	cmplwi r3, 0
/* 80153438 00150378  41 82 00 18 */	beq .L_80153450
/* 8015343C 0015037C  81 83 00 00 */	lwz r12, 0(r3)
/* 80153440 00150380  7C C4 33 78 */	mr r4, r6
/* 80153444 00150384  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80153448 00150388  7D 89 03 A6 */	mtctr r12
/* 8015344C 0015038C  4E 80 04 21 */	bctrl 
.L_80153450:
/* 80153450 00150390  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153454 00150394  7C 08 03 A6 */	mtlr r0
/* 80153458 00150398  38 21 00 10 */	addi r1, r1, 0x10
/* 8015345C 0015039C  4E 80 00 20 */	blr 
.else
.global gmOrimaDown__Q24Game17SingleGameSectionFi
gmOrimaDown__Q24Game17SingleGameSectionFi:
/* 8015341C 0015035C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153420 00150360  7C 08 02 A6 */	mflr r0
/* 80153424 00150364  7C 66 1B 78 */	mr r6, r3
/* 80153428 00150368  7C 85 23 78 */	mr r5, r4
/* 8015342C 0015036C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153430 00150370  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80153434 00150374  28 03 00 00 */	cmplwi r3, 0
/* 80153438 00150378  41 82 00 18 */	beq .L_80153450
/* 8015343C 0015037C  81 83 00 00 */	lwz r12, 0(r3)
/* 80153440 00150380  7C C4 33 78 */	mr r4, r6
/* 80153444 00150384  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80153448 00150388  7D 89 03 A6 */	mtctr r12
/* 8015344C 0015038C  4E 80 04 21 */	bctrl 
.L_80153450:
/* 80153450 00150390  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153454 00150394  7C 08 03 A6 */	mtlr r0
/* 80153458 00150398  38 21 00 10 */	addi r1, r1, 0x10
/* 8015345C 0015039C  4E 80 00 20 */	blr 
.endif

.global onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni:
/* 80153460 001503A0  4E 80 00 20 */	blr 

.global gmPikminZero__Q24Game17SingleGameSectionFv
gmPikminZero__Q24Game17SingleGameSectionFv:
/* 80153464 001503A4  4E 80 00 20 */	blr 

.if version == 1
.global enableTimer__Q24Game17SingleGameSectionFfUl
enableTimer__Q24Game17SingleGameSectionFfUl:
/* 80153468 001503A8  80 03 01 7C */	lwz r0, 0x1a0(r3)
/* 8015346C 001503AC  28 00 00 00 */	cmplwi r0, 0
/* 80153470 001503B0  4C 82 00 20 */	bnelr 
/* 80153474 001503B4  90 83 01 7C */	stw r4, 0x1a0(r3)
/* 80153478 001503B8  38 00 00 01 */	li r0, 1
/* 8015347C 001503BC  D0 23 01 74 */	stfs f1, 0x198(r3)
/* 80153480 001503C0  98 03 01 78 */	stb r0, 0x19c(r3)
/* 80153484 001503C4  4E 80 00 20 */	blr 
.else
.global enableTimer__Q24Game17SingleGameSectionFfUl
enableTimer__Q24Game17SingleGameSectionFfUl:
/* 80153468 001503A8  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 8015346C 001503AC  28 00 00 00 */	cmplwi r0, 0
/* 80153470 001503B0  4C 82 00 20 */	bnelr 
/* 80153474 001503B4  90 83 01 7C */	stw r4, 0x17c(r3)
/* 80153478 001503B8  38 00 00 01 */	li r0, 1
/* 8015347C 001503BC  D0 23 01 74 */	stfs f1, 0x174(r3)
/* 80153480 001503C0  98 03 01 78 */	stb r0, 0x178(r3)
/* 80153484 001503C4  4E 80 00 20 */	blr 
.endif

.if version == 1
.global disableTimer__Q24Game17SingleGameSectionFUl
disableTimer__Q24Game17SingleGameSectionFUl:
/* 80153488 001503C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015348C 001503CC  7C 08 02 A6 */	mflr r0
/* 80153490 001503D0  28 04 00 00 */	cmplwi r4, 0
/* 80153494 001503D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153498 001503D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015349C 001503DC  7C 7F 1B 78 */	mr r31, r3
/* 801534A0 001503E0  40 82 00 14 */	bne .L_801534B4
/* 801534A4 001503E4  38 00 00 00 */	li r0, 0
/* 801534A8 001503E8  98 1F 01 78 */	stb r0, 0x19c(r31)
/* 801534AC 001503EC  90 1F 01 7C */	stw r0, 0x1a0(r31)
/* 801534B0 001503F0  48 00 00 44 */	b .L_801534F4
.L_801534B4:
/* 801534B4 001503F4  80 DF 01 7C */	lwz r6, 0x1a0(r31)
/* 801534B8 001503F8  28 06 00 00 */	cmplwi r6, 0
/* 801534BC 001503FC  41 82 00 2C */	beq .L_801534E8
/* 801534C0 00150400  7C 04 30 40 */	cmplw r4, r6
/* 801534C4 00150404  41 82 00 24 */	beq .L_801534E8
/* 801534C8 00150408  3C 60 80 48 */	lis r3, lbl_8047CE48@ha
/* 801534CC 0015040C  3C A0 80 48 */	lis r5, lbl_8047CE60@ha
/* 801534D0 00150410  7C 87 23 78 */	mr r7, r4
/* 801534D4 00150414  38 80 05 51 */	li r4, 0x551
/* 801534D8 00150418  38 63 CE 48 */	addi r3, r3, lbl_8047CE48@l
/* 801534DC 0015041C  38 A5 CE 60 */	addi r5, r5, lbl_8047CE60@l
/* 801534E0 00150420  4C C6 31 82 */	crclr 6
/* 801534E4 00150424  4B ED 71 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801534E8:
/* 801534E8 00150428  38 00 00 00 */	li r0, 0
/* 801534EC 0015042C  98 1F 01 78 */	stb r0, 0x19c(r31)
/* 801534F0 00150430  90 1F 01 7C */	stw r0, 0x1a0(r31)
.L_801534F4:
/* 801534F4 00150434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801534F8 00150438  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801534FC 0015043C  7C 08 03 A6 */	mtlr r0
/* 80153500 00150440  38 21 00 10 */	addi r1, r1, 0x10
/* 80153504 00150444  4E 80 00 20 */	blr 
.else
.global disableTimer__Q24Game17SingleGameSectionFUl
disableTimer__Q24Game17SingleGameSectionFUl:
/* 80153488 001503C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015348C 001503CC  7C 08 02 A6 */	mflr r0
/* 80153490 001503D0  28 04 00 00 */	cmplwi r4, 0
/* 80153494 001503D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153498 001503D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015349C 001503DC  7C 7F 1B 78 */	mr r31, r3
/* 801534A0 001503E0  40 82 00 14 */	bne .L_801534B4
/* 801534A4 001503E4  38 00 00 00 */	li r0, 0
/* 801534A8 001503E8  98 1F 01 78 */	stb r0, 0x178(r31)
/* 801534AC 001503EC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801534B0 001503F0  48 00 00 44 */	b .L_801534F4
.L_801534B4:
/* 801534B4 001503F4  80 DF 01 7C */	lwz r6, 0x17c(r31)
/* 801534B8 001503F8  28 06 00 00 */	cmplwi r6, 0
/* 801534BC 001503FC  41 82 00 2C */	beq .L_801534E8
/* 801534C0 00150400  7C 04 30 40 */	cmplw r4, r6
/* 801534C4 00150404  41 82 00 24 */	beq .L_801534E8
/* 801534C8 00150408  3C 60 80 48 */	lis r3, lbl_8047CE48@ha
/* 801534CC 0015040C  3C A0 80 48 */	lis r5, lbl_8047CE60@ha
/* 801534D0 00150410  7C 87 23 78 */	mr r7, r4
/* 801534D4 00150414  38 80 05 51 */	li r4, 0x551
/* 801534D8 00150418  38 63 CE 48 */	addi r3, r3, lbl_8047CE48@l
/* 801534DC 0015041C  38 A5 CE 60 */	addi r5, r5, lbl_8047CE60@l
/* 801534E0 00150420  4C C6 31 82 */	crclr 6
/* 801534E4 00150424  4B ED 71 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801534E8:
/* 801534E8 00150428  38 00 00 00 */	li r0, 0
/* 801534EC 0015042C  98 1F 01 78 */	stb r0, 0x178(r31)
/* 801534F0 00150430  90 1F 01 7C */	stw r0, 0x17c(r31)
.L_801534F4:
/* 801534F4 00150434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801534F8 00150438  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801534FC 0015043C  7C 08 03 A6 */	mtlr r0
/* 80153500 00150440  38 21 00 10 */	addi r1, r1, 0x10
/* 80153504 00150444  4E 80 00 20 */	blr 
.endif

.if version == 1
.global onMovieStart__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl
onMovieStart__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl:
/* 80153508 00150448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015350C 0015044C  7C 08 02 A6 */	mflr r0
/* 80153510 00150450  7C 69 1B 78 */	mr r9, r3
/* 80153514 00150454  7C 88 23 78 */	mr r8, r4
/* 80153518 00150458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015351C 0015045C  7C A0 2B 78 */	mr r0, r5
/* 80153520 00150460  7C C7 33 78 */	mr r7, r6
/* 80153524 00150464  80 63 02 50 */	lwz r3, 0x274(r3)
/* 80153528 00150468  28 03 00 00 */	cmplwi r3, 0
/* 8015352C 0015046C  41 82 00 20 */	beq .L_8015354C
/* 80153530 00150470  81 83 00 00 */	lwz r12, 0(r3)
/* 80153534 00150474  7D 24 4B 78 */	mr r4, r9
/* 80153538 00150478  7D 05 43 78 */	mr r5, r8
/* 8015353C 0015047C  7C 06 03 78 */	mr r6, r0
/* 80153540 00150480  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80153544 00150484  7D 89 03 A6 */	mtctr r12
/* 80153548 00150488  4E 80 04 21 */	bctrl 
.L_8015354C:
/* 8015354C 0015048C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153550 00150490  7C 08 03 A6 */	mtlr r0
/* 80153554 00150494  38 21 00 10 */	addi r1, r1, 0x10
/* 80153558 00150498  4E 80 00 20 */	blr 
.else
.global onMovieStart__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl
onMovieStart__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl:
/* 80153508 00150448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015350C 0015044C  7C 08 02 A6 */	mflr r0
/* 80153510 00150450  7C 69 1B 78 */	mr r9, r3
/* 80153514 00150454  7C 88 23 78 */	mr r8, r4
/* 80153518 00150458  90 01 00 14 */	stw r0, 0x14(r1)
/* 8015351C 0015045C  7C A0 2B 78 */	mr r0, r5
/* 80153520 00150460  7C C7 33 78 */	mr r7, r6
/* 80153524 00150464  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80153528 00150468  28 03 00 00 */	cmplwi r3, 0
/* 8015352C 0015046C  41 82 00 20 */	beq .L_8015354C
/* 80153530 00150470  81 83 00 00 */	lwz r12, 0(r3)
/* 80153534 00150474  7D 24 4B 78 */	mr r4, r9
/* 80153538 00150478  7D 05 43 78 */	mr r5, r8
/* 8015353C 0015047C  7C 06 03 78 */	mr r6, r0
/* 80153540 00150480  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80153544 00150484  7D 89 03 A6 */	mtctr r12
/* 80153548 00150488  4E 80 04 21 */	bctrl 
.L_8015354C:
/* 8015354C 0015048C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153550 00150490  7C 08 03 A6 */	mtlr r0
/* 80153554 00150494  38 21 00 10 */	addi r1, r1, 0x10
/* 80153558 00150498  4E 80 00 20 */	blr 
.endif

.global onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 8015355C 0015049C  4E 80 00 20 */	blr 

.if version == 1
.global onMovieDone__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl
onMovieDone__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl:
/* 80153560 001504A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153564 001504A4  7C 08 02 A6 */	mflr r0
/* 80153568 001504A8  7C 6B 1B 78 */	mr r11, r3
/* 8015356C 001504AC  7C 8A 23 78 */	mr r10, r4
/* 80153570 001504B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153574 001504B4  7C A9 2B 78 */	mr r9, r5
/* 80153578 001504B8  7C C7 33 78 */	mr r7, r6
/* 8015357C 001504BC  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 80153580 001504C0  88 08 00 3C */	lbz r0, 0x3c(r8)
/* 80153584 001504C4  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80153588 001504C8  98 08 00 3C */	stb r0, 0x3c(r8)
/* 8015358C 001504CC  80 63 02 50 */	lwz r3, 0x274(r3)
/* 80153590 001504D0  28 03 00 00 */	cmplwi r3, 0
/* 80153594 001504D4  41 82 00 20 */	beq .L_801535B4
/* 80153598 001504D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8015359C 001504DC  7D 64 5B 78 */	mr r4, r11
/* 801535A0 001504E0  7D 45 53 78 */	mr r5, r10
/* 801535A4 001504E4  7D 26 4B 78 */	mr r6, r9
/* 801535A8 001504E8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801535AC 001504EC  7D 89 03 A6 */	mtctr r12
/* 801535B0 001504F0  4E 80 04 21 */	bctrl 
.L_801535B4:
/* 801535B4 001504F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801535B8 001504F8  7C 08 03 A6 */	mtlr r0
/* 801535BC 001504FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801535C0 00150500  4E 80 00 20 */	blr 
.else
.global onMovieDone__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl
onMovieDone__Q24Game17SingleGameSectionFPQ24Game11MovieConfigUlUl:
/* 80153560 001504A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153564 001504A4  7C 08 02 A6 */	mflr r0
/* 80153568 001504A8  7C 6B 1B 78 */	mr r11, r3
/* 8015356C 001504AC  7C 8A 23 78 */	mr r10, r4
/* 80153570 001504B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153574 001504B4  7C A9 2B 78 */	mr r9, r5
/* 80153578 001504B8  7C C7 33 78 */	mr r7, r6
/* 8015357C 001504BC  81 0D 93 E8 */	lwz r8, gameSystem__4Game@sda21(r13)
/* 80153580 001504C0  88 08 00 3C */	lbz r0, 0x3c(r8)
/* 80153584 001504C4  54 00 07 76 */	rlwinm r0, r0, 0, 0x1d, 0x1b
/* 80153588 001504C8  98 08 00 3C */	stb r0, 0x3c(r8)
/* 8015358C 001504CC  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80153590 001504D0  28 03 00 00 */	cmplwi r3, 0
/* 80153594 001504D4  41 82 00 20 */	beq .L_801535B4
/* 80153598 001504D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8015359C 001504DC  7D 64 5B 78 */	mr r4, r11
/* 801535A0 001504E0  7D 45 53 78 */	mr r5, r10
/* 801535A4 001504E4  7D 26 4B 78 */	mr r6, r9
/* 801535A8 001504E8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801535AC 001504EC  7D 89 03 A6 */	mtctr r12
/* 801535B0 001504F0  4E 80 04 21 */	bctrl 
.L_801535B4:
/* 801535B4 001504F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801535B8 001504F8  7C 08 03 A6 */	mtlr r0
/* 801535BC 001504FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801535C0 00150500  4E 80 00 20 */	blr 
.endif

.global onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl:
/* 801535C4 00150504  4E 80 00 20 */	blr 

.if version == 1
.global onMovieCommand__Q24Game17SingleGameSectionFi
onMovieCommand__Q24Game17SingleGameSectionFi:
/* 801535C8 00150508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801535CC 0015050C  7C 08 02 A6 */	mflr r0
/* 801535D0 00150510  90 01 00 14 */	stw r0, 0x14(r1)
/* 801535D4 00150514  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801535D8 00150518  7C 9F 23 78 */	mr r31, r4
/* 801535DC 0015051C  93 C1 00 08 */	stw r30, 8(r1)
/* 801535E0 00150520  7C 7E 1B 78 */	mr r30, r3
/* 801535E4 00150524  4B FF 88 35 */	bl onMovieCommand__Q24Game15BaseGameSectionFi
/* 801535E8 00150528  80 7E 02 50 */	lwz r3, 0x274(r30)
/* 801535EC 0015052C  28 03 00 00 */	cmplwi r3, 0
/* 801535F0 00150530  41 82 00 1C */	beq .L_8015360C
/* 801535F4 00150534  81 83 00 00 */	lwz r12, 0(r3)
/* 801535F8 00150538  7F C4 F3 78 */	mr r4, r30
/* 801535FC 0015053C  7F E5 FB 78 */	mr r5, r31
/* 80153600 00150540  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80153604 00150544  7D 89 03 A6 */	mtctr r12
/* 80153608 00150548  4E 80 04 21 */	bctrl 
.L_8015360C:
/* 8015360C 0015054C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153610 00150550  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80153614 00150554  83 C1 00 08 */	lwz r30, 8(r1)
/* 80153618 00150558  7C 08 03 A6 */	mtlr r0
/* 8015361C 0015055C  38 21 00 10 */	addi r1, r1, 0x10
/* 80153620 00150560  4E 80 00 20 */	blr 
.else
.global onMovieCommand__Q24Game17SingleGameSectionFi
onMovieCommand__Q24Game17SingleGameSectionFi:
/* 801535C8 00150508  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801535CC 0015050C  7C 08 02 A6 */	mflr r0
/* 801535D0 00150510  90 01 00 14 */	stw r0, 0x14(r1)
/* 801535D4 00150514  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801535D8 00150518  7C 9F 23 78 */	mr r31, r4
/* 801535DC 0015051C  93 C1 00 08 */	stw r30, 8(r1)
/* 801535E0 00150520  7C 7E 1B 78 */	mr r30, r3
/* 801535E4 00150524  4B FF 88 35 */	bl onMovieCommand__Q24Game15BaseGameSectionFi
/* 801535E8 00150528  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 801535EC 0015052C  28 03 00 00 */	cmplwi r3, 0
/* 801535F0 00150530  41 82 00 1C */	beq .L_8015360C
/* 801535F4 00150534  81 83 00 00 */	lwz r12, 0(r3)
/* 801535F8 00150538  7F C4 F3 78 */	mr r4, r30
/* 801535FC 0015053C  7F E5 FB 78 */	mr r5, r31
/* 80153600 00150540  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80153604 00150544  7D 89 03 A6 */	mtctr r12
/* 80153608 00150548  4E 80 04 21 */	bctrl 
.L_8015360C:
/* 8015360C 0015054C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153610 00150550  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80153614 00150554  83 C1 00 08 */	lwz r30, 8(r1)
/* 80153618 00150558  7C 08 03 A6 */	mtlr r0
/* 8015361C 0015055C  38 21 00 10 */	addi r1, r1, 0x10
/* 80153620 00150560  4E 80 00 20 */	blr 
.endif

.global onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni:
/* 80153624 00150564  4E 80 00 20 */	blr 

.if version == 1
.global playMovie_bootup__Q24Game17SingleGameSectionFPQ24Game5Onyon
playMovie_bootup__Q24Game17SingleGameSectionFPQ24Game5Onyon:
/* 80153628 00150568  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8015362C 0015056C  7C 08 02 A6 */	mflr r0
/* 80153630 00150570  3C A0 80 48 */	lis r5, lbl_8047CD98@ha
/* 80153634 00150574  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80153638 00150578  38 A5 CD 98 */	addi r5, r5, lbl_8047CD98@l
/* 8015363C 0015057C  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80153640 00150580  7C 9F 23 78 */	mr r31, r4
/* 80153644 00150584  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 80153648 00150588  2C 00 00 01 */	cmpwi r0, 1
/* 8015364C 0015058C  41 82 00 20 */	beq .L_8015366C
/* 80153650 00150590  40 80 00 10 */	bge .L_80153660
/* 80153654 00150594  2C 00 00 00 */	cmpwi r0, 0
/* 80153658 00150598  40 80 01 5C */	bge .L_801537B4
/* 8015365C 0015059C  48 00 01 F8 */	b .L_80153854
.L_80153660:
/* 80153660 001505A0  2C 00 00 03 */	cmpwi r0, 3
/* 80153664 001505A4  40 80 01 F0 */	bge .L_80153854
/* 80153668 001505A8  48 00 00 A8 */	b .L_80153710
.L_8015366C:
/* 8015366C 001505AC  80 C3 00 C8 */	lwz r6, 0xe8(r3)
/* 80153670 001505B0  38 00 00 00 */	li r0, 0
/* 80153674 001505B4  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153678 001505B8  38 65 00 EC */	addi r3, r5, 0xec
/* 8015367C 001505BC  90 61 00 94 */	stw r3, 0x94(r1)
/* 80153680 001505C0  38 61 00 20 */	addi r3, r1, 0x20
/* 80153684 001505C4  90 01 00 98 */	stw r0, 0x98(r1)
/* 80153688 001505C8  90 C1 00 A0 */	stw r6, 0xa0(r1)
/* 8015368C 001505CC  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 80153690 001505D0  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 80153694 001505D4  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 80153698 001505D8  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 8015369C 001505DC  90 01 00 BC */	stw r0, 0xbc(r1)
/* 801536A0 001505E0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801536A4 001505E4  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801536A8 001505E8  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 801536AC 001505EC  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801536B0 001505F0  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 801536B4 001505F4  81 84 00 00 */	lwz r12, 0(r4)
/* 801536B8 001505F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801536BC 001505FC  7D 89 03 A6 */	mtctr r12
/* 801536C0 00150600  4E 80 04 21 */	bctrl 
/* 801536C4 00150604  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801536C8 00150608  7F E3 FB 78 */	mr r3, r31
/* 801536CC 0015060C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801536D0 00150610  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801536D4 00150614  D0 41 00 AC */	stfs f2, 0xac(r1)
/* 801536D8 00150618  D0 21 00 B0 */	stfs f1, 0xb0(r1)
/* 801536DC 0015061C  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 801536E0 00150620  81 9F 00 00 */	lwz r12, 0(r31)
/* 801536E4 00150624  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801536E8 00150628  7D 89 03 A6 */	mtctr r12
/* 801536EC 0015062C  4E 80 04 21 */	bctrl 
/* 801536F0 00150630  D0 21 00 B8 */	stfs f1, 0xb8(r1)
/* 801536F4 00150634  38 81 00 94 */	addi r4, r1, 0x94
/* 801536F8 00150638  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801536FC 0015063C  48 2D 92 D5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153700 00150640  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153704 00150644  A0 9F 02 2E */	lhz r4, 0x22e(r31)
/* 80153708 00150648  48 09 3B 75 */	bl setBootContainer__Q24Game8PlayDataFi
/* 8015370C 0015064C  48 00 01 48 */	b .L_80153854
.L_80153710:
/* 80153710 00150650  80 C3 00 C8 */	lwz r6, 0xe8(r3)
/* 80153714 00150654  38 00 00 00 */	li r0, 0
/* 80153718 00150658  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 8015371C 0015065C  38 65 00 FC */	addi r3, r5, 0xfc
/* 80153720 00150660  90 61 00 60 */	stw r3, 0x60(r1)
/* 80153724 00150664  38 61 00 14 */	addi r3, r1, 0x14
/* 80153728 00150668  90 01 00 64 */	stw r0, 0x64(r1)
/* 8015372C 0015066C  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80153730 00150670  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80153734 00150674  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 80153738 00150678  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 8015373C 0015067C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80153740 00150680  90 01 00 88 */	stw r0, 0x88(r1)
/* 80153744 00150684  90 01 00 70 */	stw r0, 0x70(r1)
/* 80153748 00150688  90 01 00 68 */	stw r0, 0x68(r1)
/* 8015374C 0015068C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80153750 00150690  90 01 00 74 */	stw r0, 0x74(r1)
/* 80153754 00150694  90 01 00 90 */	stw r0, 0x90(r1)
/* 80153758 00150698  81 84 00 00 */	lwz r12, 0(r4)
/* 8015375C 0015069C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153760 001506A0  7D 89 03 A6 */	mtctr r12
/* 80153764 001506A4  4E 80 04 21 */	bctrl 
/* 80153768 001506A8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8015376C 001506AC  7F E3 FB 78 */	mr r3, r31
/* 80153770 001506B0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80153774 001506B4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80153778 001506B8  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 8015377C 001506BC  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 80153780 001506C0  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 80153784 001506C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153788 001506C8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8015378C 001506CC  7D 89 03 A6 */	mtctr r12
/* 80153790 001506D0  4E 80 04 21 */	bctrl 
/* 80153794 001506D4  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 80153798 001506D8  38 81 00 60 */	addi r4, r1, 0x60
/* 8015379C 001506DC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801537A0 001506E0  48 2D 92 31 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801537A4 001506E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801537A8 001506E8  A0 9F 02 2E */	lhz r4, 0x22e(r31)
/* 801537AC 001506EC  48 09 3A D1 */	bl setBootContainer__Q24Game8PlayDataFi
/* 801537B0 001506F0  48 00 00 A4 */	b .L_80153854
.L_801537B4:
/* 801537B4 001506F4  80 C3 00 C8 */	lwz r6, 0xe8(r3)
/* 801537B8 001506F8  38 00 00 00 */	li r0, 0
/* 801537BC 001506FC  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 801537C0 00150700  38 65 01 0C */	addi r3, r5, 0x10c
/* 801537C4 00150704  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801537C8 00150708  38 61 00 08 */	addi r3, r1, 8
/* 801537CC 0015070C  90 01 00 30 */	stw r0, 0x30(r1)
/* 801537D0 00150710  90 C1 00 38 */	stw r6, 0x38(r1)
/* 801537D4 00150714  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801537D8 00150718  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801537DC 0015071C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801537E0 00150720  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 801537E4 00150724  90 01 00 54 */	stw r0, 0x54(r1)
/* 801537E8 00150728  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801537EC 0015072C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801537F0 00150730  90 01 00 58 */	stw r0, 0x58(r1)
/* 801537F4 00150734  90 01 00 40 */	stw r0, 0x40(r1)
/* 801537F8 00150738  90 01 00 5C */	stw r0, 0x5c(r1)
/* 801537FC 0015073C  81 84 00 00 */	lwz r12, 0(r4)
/* 80153800 00150740  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153804 00150744  7D 89 03 A6 */	mtctr r12
/* 80153808 00150748  4E 80 04 21 */	bctrl 
/* 8015380C 0015074C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80153810 00150750  7F E3 FB 78 */	mr r3, r31
/* 80153814 00150754  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80153818 00150758  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8015381C 0015075C  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80153820 00150760  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80153824 00150764  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80153828 00150768  81 9F 00 00 */	lwz r12, 0(r31)
/* 8015382C 0015076C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153830 00150770  7D 89 03 A6 */	mtctr r12
/* 80153834 00150774  4E 80 04 21 */	bctrl 
/* 80153838 00150778  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 8015383C 0015077C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80153840 00150780  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153844 00150784  48 2D 91 8D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153848 00150788  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015384C 0015078C  A0 9F 02 2E */	lhz r4, 0x22e(r31)
/* 80153850 00150790  48 09 3A 2D */	bl setBootContainer__Q24Game8PlayDataFi
.L_80153854:
/* 80153854 00150794  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80153858 00150798  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 8015385C 0015079C  7C 08 03 A6 */	mtlr r0
/* 80153860 001507A0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80153864 001507A4  4E 80 00 20 */	blr 
.else
.global playMovie_bootup__Q24Game17SingleGameSectionFPQ24Game5Onyon
playMovie_bootup__Q24Game17SingleGameSectionFPQ24Game5Onyon:
/* 80153628 00150568  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 8015362C 0015056C  7C 08 02 A6 */	mflr r0
/* 80153630 00150570  3C A0 80 48 */	lis r5, lbl_8047CD98@ha
/* 80153634 00150574  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80153638 00150578  38 A5 CD 98 */	addi r5, r5, lbl_8047CD98@l
/* 8015363C 0015057C  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80153640 00150580  7C 9F 23 78 */	mr r31, r4
/* 80153644 00150584  A0 04 02 2E */	lhz r0, 0x22e(r4)
/* 80153648 00150588  2C 00 00 01 */	cmpwi r0, 1
/* 8015364C 0015058C  41 82 00 20 */	beq .L_8015366C
/* 80153650 00150590  40 80 00 10 */	bge .L_80153660
/* 80153654 00150594  2C 00 00 00 */	cmpwi r0, 0
/* 80153658 00150598  40 80 01 5C */	bge .L_801537B4
/* 8015365C 0015059C  48 00 01 F8 */	b .L_80153854
.L_80153660:
/* 80153660 001505A0  2C 00 00 03 */	cmpwi r0, 3
/* 80153664 001505A4  40 80 01 F0 */	bge .L_80153854
/* 80153668 001505A8  48 00 00 A8 */	b .L_80153710
.L_8015366C:
/* 8015366C 001505AC  80 C3 00 C8 */	lwz r6, 0xc8(r3)
/* 80153670 001505B0  38 00 00 00 */	li r0, 0
/* 80153674 001505B4  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153678 001505B8  38 65 00 EC */	addi r3, r5, 0xec
/* 8015367C 001505BC  90 61 00 94 */	stw r3, 0x94(r1)
/* 80153680 001505C0  38 61 00 20 */	addi r3, r1, 0x20
/* 80153684 001505C4  90 01 00 98 */	stw r0, 0x98(r1)
/* 80153688 001505C8  90 C1 00 A0 */	stw r6, 0xa0(r1)
/* 8015368C 001505CC  D0 01 00 AC */	stfs f0, 0xac(r1)
/* 80153690 001505D0  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 80153694 001505D4  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 80153698 001505D8  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 8015369C 001505DC  90 01 00 BC */	stw r0, 0xbc(r1)
/* 801536A0 001505E0  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801536A4 001505E4  90 01 00 9C */	stw r0, 0x9c(r1)
/* 801536A8 001505E8  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 801536AC 001505EC  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801536B0 001505F0  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 801536B4 001505F4  81 84 00 00 */	lwz r12, 0(r4)
/* 801536B8 001505F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801536BC 001505FC  7D 89 03 A6 */	mtctr r12
/* 801536C0 00150600  4E 80 04 21 */	bctrl 
/* 801536C4 00150604  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801536C8 00150608  7F E3 FB 78 */	mr r3, r31
/* 801536CC 0015060C  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801536D0 00150610  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801536D4 00150614  D0 41 00 AC */	stfs f2, 0xac(r1)
/* 801536D8 00150618  D0 21 00 B0 */	stfs f1, 0xb0(r1)
/* 801536DC 0015061C  D0 01 00 B4 */	stfs f0, 0xb4(r1)
/* 801536E0 00150620  81 9F 00 00 */	lwz r12, 0(r31)
/* 801536E4 00150624  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801536E8 00150628  7D 89 03 A6 */	mtctr r12
/* 801536EC 0015062C  4E 80 04 21 */	bctrl 
/* 801536F0 00150630  D0 21 00 B8 */	stfs f1, 0xb8(r1)
/* 801536F4 00150634  38 81 00 94 */	addi r4, r1, 0x94
/* 801536F8 00150638  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801536FC 0015063C  48 2D 92 D5 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153700 00150640  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153704 00150644  A0 9F 02 2E */	lhz r4, 0x22e(r31)
/* 80153708 00150648  48 09 3B 75 */	bl setBootContainer__Q24Game8PlayDataFi
/* 8015370C 0015064C  48 00 01 48 */	b .L_80153854
.L_80153710:
/* 80153710 00150650  80 C3 00 C8 */	lwz r6, 0xc8(r3)
/* 80153714 00150654  38 00 00 00 */	li r0, 0
/* 80153718 00150658  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 8015371C 0015065C  38 65 00 FC */	addi r3, r5, 0xfc
/* 80153720 00150660  90 61 00 60 */	stw r3, 0x60(r1)
/* 80153724 00150664  38 61 00 14 */	addi r3, r1, 0x14
/* 80153728 00150668  90 01 00 64 */	stw r0, 0x64(r1)
/* 8015372C 0015066C  90 C1 00 6C */	stw r6, 0x6c(r1)
/* 80153730 00150670  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80153734 00150674  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 80153738 00150678  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 8015373C 0015067C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80153740 00150680  90 01 00 88 */	stw r0, 0x88(r1)
/* 80153744 00150684  90 01 00 70 */	stw r0, 0x70(r1)
/* 80153748 00150688  90 01 00 68 */	stw r0, 0x68(r1)
/* 8015374C 0015068C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80153750 00150690  90 01 00 74 */	stw r0, 0x74(r1)
/* 80153754 00150694  90 01 00 90 */	stw r0, 0x90(r1)
/* 80153758 00150698  81 84 00 00 */	lwz r12, 0(r4)
/* 8015375C 0015069C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153760 001506A0  7D 89 03 A6 */	mtctr r12
/* 80153764 001506A4  4E 80 04 21 */	bctrl 
/* 80153768 001506A8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8015376C 001506AC  7F E3 FB 78 */	mr r3, r31
/* 80153770 001506B0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80153774 001506B4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80153778 001506B8  D0 41 00 78 */	stfs f2, 0x78(r1)
/* 8015377C 001506BC  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 80153780 001506C0  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 80153784 001506C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153788 001506C8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8015378C 001506CC  7D 89 03 A6 */	mtctr r12
/* 80153790 001506D0  4E 80 04 21 */	bctrl 
/* 80153794 001506D4  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 80153798 001506D8  38 81 00 60 */	addi r4, r1, 0x60
/* 8015379C 001506DC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801537A0 001506E0  48 2D 92 31 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801537A4 001506E4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801537A8 001506E8  A0 9F 02 2E */	lhz r4, 0x22e(r31)
/* 801537AC 001506EC  48 09 3A D1 */	bl setBootContainer__Q24Game8PlayDataFi
/* 801537B0 001506F0  48 00 00 A4 */	b .L_80153854
.L_801537B4:
/* 801537B4 001506F4  80 C3 00 C8 */	lwz r6, 0xc8(r3)
/* 801537B8 001506F8  38 00 00 00 */	li r0, 0
/* 801537BC 001506FC  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 801537C0 00150700  38 65 01 0C */	addi r3, r5, 0x10c
/* 801537C4 00150704  90 61 00 2C */	stw r3, 0x2c(r1)
/* 801537C8 00150708  38 61 00 08 */	addi r3, r1, 8
/* 801537CC 0015070C  90 01 00 30 */	stw r0, 0x30(r1)
/* 801537D0 00150710  90 C1 00 38 */	stw r6, 0x38(r1)
/* 801537D4 00150714  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801537D8 00150718  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801537DC 0015071C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801537E0 00150720  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 801537E4 00150724  90 01 00 54 */	stw r0, 0x54(r1)
/* 801537E8 00150728  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801537EC 0015072C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801537F0 00150730  90 01 00 58 */	stw r0, 0x58(r1)
/* 801537F4 00150734  90 01 00 40 */	stw r0, 0x40(r1)
/* 801537F8 00150738  90 01 00 5C */	stw r0, 0x5c(r1)
/* 801537FC 0015073C  81 84 00 00 */	lwz r12, 0(r4)
/* 80153800 00150740  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153804 00150744  7D 89 03 A6 */	mtctr r12
/* 80153808 00150748  4E 80 04 21 */	bctrl 
/* 8015380C 0015074C  C0 41 00 08 */	lfs f2, 8(r1)
/* 80153810 00150750  7F E3 FB 78 */	mr r3, r31
/* 80153814 00150754  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80153818 00150758  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8015381C 0015075C  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 80153820 00150760  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 80153824 00150764  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 80153828 00150768  81 9F 00 00 */	lwz r12, 0(r31)
/* 8015382C 0015076C  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153830 00150770  7D 89 03 A6 */	mtctr r12
/* 80153834 00150774  4E 80 04 21 */	bctrl 
/* 80153838 00150778  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 8015383C 0015077C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80153840 00150780  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153844 00150784  48 2D 91 8D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153848 00150788  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015384C 0015078C  A0 9F 02 2E */	lhz r4, 0x22e(r31)
/* 80153850 00150790  48 09 3A 2D */	bl setBootContainer__Q24Game8PlayDataFi
.L_80153854:
/* 80153854 00150794  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80153858 00150798  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 8015385C 0015079C  7C 08 03 A6 */	mtlr r0
/* 80153860 001507A0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80153864 001507A4  4E 80 00 20 */	blr 
.endif

.global getFaceDir__Q24Game5OnyonFv
getFaceDir__Q24Game5OnyonFv:
/* 80153868 001507A8  C0 23 02 28 */	lfs f1, 0x228(r3)
/* 8015386C 001507AC  4E 80 00 20 */	blr 

.if version == 1
.global playMovie_helloPikmin__Q24Game17SingleGameSectionFPQ24Game4Piki
playMovie_helloPikmin__Q24Game17SingleGameSectionFPQ24Game4Piki:
/* 80153870 001507B0  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 80153874 001507B4  7C 08 02 A6 */	mflr r0
/* 80153878 001507B8  3C A0 80 48 */	lis r5, lbl_8047CD98@ha
/* 8015387C 001507BC  90 01 01 64 */	stw r0, 0x164(r1)
/* 80153880 001507C0  93 E1 01 5C */	stw r31, 0x15c(r1)
/* 80153884 001507C4  7C 9F 23 78 */	mr r31, r4
/* 80153888 001507C8  93 C1 01 58 */	stw r30, 0x158(r1)
/* 8015388C 001507CC  3B C5 CD 98 */	addi r30, r5, lbl_8047CD98@l
/* 80153890 001507D0  93 A1 01 54 */	stw r29, 0x154(r1)
/* 80153894 001507D4  93 81 01 50 */	stw r28, 0x150(r1)
/* 80153898 001507D8  7C 7C 1B 78 */	mr r28, r3
/* 8015389C 001507DC  88 04 02 B8 */	lbz r0, 0x2b8(r4)
/* 801538A0 001507E0  2C 00 00 02 */	cmpwi r0, 2
/* 801538A4 001507E4  41 82 01 24 */	beq .L_801539C8
/* 801538A8 001507E8  40 80 00 14 */	bge .L_801538BC
/* 801538AC 001507EC  2C 00 00 00 */	cmpwi r0, 0
/* 801538B0 001507F0  41 82 01 D0 */	beq .L_80153A80
/* 801538B4 001507F4  40 80 00 18 */	bge .L_801538CC
/* 801538B8 001507F8  48 00 03 EC */	b .L_80153CA4
.L_801538BC:
/* 801538BC 001507FC  2C 00 00 04 */	cmpwi r0, 4
/* 801538C0 00150800  41 82 03 30 */	beq .L_80153BF0
/* 801538C4 00150804  40 80 03 E0 */	bge .L_80153CA4
/* 801538C8 00150808  48 00 02 70 */	b .L_80153B38
.L_801538CC:
/* 801538CC 0015080C  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 801538D0 00150810  38 00 00 00 */	li r0, 0
/* 801538D4 00150814  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 801538D8 00150818  38 7E 01 1C */	addi r3, r30, 0x11c
/* 801538DC 0015081C  90 61 01 14 */	stw r3, 0x114(r1)
/* 801538E0 00150820  38 80 00 01 */	li r4, 1
/* 801538E4 00150824  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801538E8 00150828  90 01 01 18 */	stw r0, 0x118(r1)
/* 801538EC 0015082C  90 A1 01 20 */	stw r5, 0x120(r1)
/* 801538F0 00150830  D0 01 01 2C */	stfs f0, 0x12c(r1)
/* 801538F4 00150834  D0 01 01 30 */	stfs f0, 0x130(r1)
/* 801538F8 00150838  D0 01 01 34 */	stfs f0, 0x134(r1)
/* 801538FC 0015083C  D0 01 01 38 */	stfs f0, 0x138(r1)
/* 80153900 00150840  90 01 01 3C */	stw r0, 0x13c(r1)
/* 80153904 00150844  90 01 01 24 */	stw r0, 0x124(r1)
/* 80153908 00150848  90 01 01 1C */	stw r0, 0x11c(r1)
/* 8015390C 0015084C  90 01 01 40 */	stw r0, 0x140(r1)
/* 80153910 00150850  90 01 01 28 */	stw r0, 0x128(r1)
/* 80153914 00150854  90 01 01 44 */	stw r0, 0x144(r1)
/* 80153918 00150858  48 02 81 85 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8015391C 0015085C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80153920 00150860  40 82 00 18 */	bne .L_80153938
/* 80153924 00150864  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 80153928 00150868  38 BE 01 30 */	addi r5, r30, 0x130
/* 8015392C 0015086C  38 80 05 C9 */	li r4, 0x5c9
/* 80153930 00150870  4C C6 31 82 */	crclr 6
/* 80153934 00150874  4B ED 6D 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80153938:
/* 80153938 00150878  7F A4 EB 78 */	mr r4, r29
/* 8015393C 0015087C  38 61 00 38 */	addi r3, r1, 0x38
/* 80153940 00150880  81 9D 00 00 */	lwz r12, 0(r29)
/* 80153944 00150884  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153948 00150888  7D 89 03 A6 */	mtctr r12
/* 8015394C 0015088C  4E 80 04 21 */	bctrl 
/* 80153950 00150890  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80153954 00150894  7F A3 EB 78 */	mr r3, r29
/* 80153958 00150898  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 8015395C 0015089C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80153960 001508A0  D0 41 01 2C */	stfs f2, 0x12c(r1)
/* 80153964 001508A4  D0 21 01 30 */	stfs f1, 0x130(r1)
/* 80153968 001508A8  D0 01 01 34 */	stfs f0, 0x134(r1)
/* 8015396C 001508AC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80153970 001508B0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153974 001508B4  7D 89 03 A6 */	mtctr r12
/* 80153978 001508B8  4E 80 04 21 */	bctrl 
/* 8015397C 001508BC  D0 21 01 38 */	stfs f1, 0x138(r1)
/* 80153980 001508C0  38 81 01 14 */	addi r4, r1, 0x114
/* 80153984 001508C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153988 001508C8  93 E3 01 94 */	stw r31, 0x194(r3)
/* 8015398C 001508CC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153990 001508D0  48 2D 90 41 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153994 001508D4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153998 001508D8  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 8015399C 001508DC  48 09 38 61 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 801539A0 001508E0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801539A4 001508E4  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 801539A8 001508E8  48 09 37 D5 */	bl setContainer__Q24Game8PlayDataFi
/* 801539AC 001508EC  7F 83 E3 78 */	mr r3, r28
/* 801539B0 001508F0  38 80 00 01 */	li r4, 1
/* 801539B4 001508F4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801539B8 001508F8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801539BC 001508FC  7D 89 03 A6 */	mtctr r12
/* 801539C0 00150900  4E 80 04 21 */	bctrl 
/* 801539C4 00150904  48 00 02 E0 */	b .L_80153CA4
.L_801539C8:
/* 801539C8 00150908  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 801539CC 0015090C  38 00 00 00 */	li r0, 0
/* 801539D0 00150910  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 801539D4 00150914  38 7E 01 40 */	addi r3, r30, 0x140
/* 801539D8 00150918  90 61 00 E0 */	stw r3, 0xe0(r1)
/* 801539DC 0015091C  38 61 00 2C */	addi r3, r1, 0x2c
/* 801539E0 00150920  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801539E4 00150924  90 A1 00 EC */	stw r5, 0xec(r1)
/* 801539E8 00150928  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 801539EC 0015092C  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 801539F0 00150930  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 801539F4 00150934  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 801539F8 00150938  90 01 01 08 */	stw r0, 0x108(r1)
/* 801539FC 0015093C  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80153A00 00150940  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 80153A04 00150944  90 01 01 0C */	stw r0, 0x10c(r1)
/* 80153A08 00150948  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80153A0C 0015094C  90 01 01 10 */	stw r0, 0x110(r1)
/* 80153A10 00150950  81 84 00 00 */	lwz r12, 0(r4)
/* 80153A14 00150954  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153A18 00150958  7D 89 03 A6 */	mtctr r12
/* 80153A1C 0015095C  4E 80 04 21 */	bctrl 
/* 80153A20 00150960  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80153A24 00150964  7F E3 FB 78 */	mr r3, r31
/* 80153A28 00150968  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80153A2C 0015096C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80153A30 00150970  D0 41 00 F8 */	stfs f2, 0xf8(r1)
/* 80153A34 00150974  D0 21 00 FC */	stfs f1, 0xfc(r1)
/* 80153A38 00150978  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80153A3C 0015097C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153A40 00150980  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153A44 00150984  7D 89 03 A6 */	mtctr r12
/* 80153A48 00150988  4E 80 04 21 */	bctrl 
/* 80153A4C 0015098C  D0 21 01 04 */	stfs f1, 0x104(r1)
/* 80153A50 00150990  38 81 00 E0 */	addi r4, r1, 0xe0
/* 80153A54 00150994  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153A58 00150998  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153A5C 0015099C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153A60 001509A0  48 2D 8F 71 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153A64 001509A4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153A68 001509A8  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153A6C 001509AC  48 09 37 91 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153A70 001509B0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153A74 001509B4  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153A78 001509B8  48 09 37 05 */	bl setContainer__Q24Game8PlayDataFi
/* 80153A7C 001509BC  48 00 02 28 */	b .L_80153CA4
.L_80153A80:
/* 80153A80 001509C0  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 80153A84 001509C4  38 00 00 00 */	li r0, 0
/* 80153A88 001509C8  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153A8C 001509CC  38 7E 01 58 */	addi r3, r30, 0x158
/* 80153A90 001509D0  90 61 00 AC */	stw r3, 0xac(r1)
/* 80153A94 001509D4  38 61 00 20 */	addi r3, r1, 0x20
/* 80153A98 001509D8  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80153A9C 001509DC  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 80153AA0 001509E0  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 80153AA4 001509E4  D0 01 00 C8 */	stfs f0, 0xc8(r1)
/* 80153AA8 001509E8  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80153AAC 001509EC  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80153AB0 001509F0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80153AB4 001509F4  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80153AB8 001509F8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80153ABC 001509FC  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 80153AC0 00150A00  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80153AC4 00150A04  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80153AC8 00150A08  81 84 00 00 */	lwz r12, 0(r4)
/* 80153ACC 00150A0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153AD0 00150A10  7D 89 03 A6 */	mtctr r12
/* 80153AD4 00150A14  4E 80 04 21 */	bctrl 
/* 80153AD8 00150A18  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80153ADC 00150A1C  7F E3 FB 78 */	mr r3, r31
/* 80153AE0 00150A20  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80153AE4 00150A24  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80153AE8 00150A28  D0 41 00 C4 */	stfs f2, 0xc4(r1)
/* 80153AEC 00150A2C  D0 21 00 C8 */	stfs f1, 0xc8(r1)
/* 80153AF0 00150A30  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80153AF4 00150A34  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153AF8 00150A38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153AFC 00150A3C  7D 89 03 A6 */	mtctr r12
/* 80153B00 00150A40  4E 80 04 21 */	bctrl 
/* 80153B04 00150A44  D0 21 00 D0 */	stfs f1, 0xd0(r1)
/* 80153B08 00150A48  38 81 00 AC */	addi r4, r1, 0xac
/* 80153B0C 00150A4C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153B10 00150A50  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153B14 00150A54  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153B18 00150A58  48 2D 8E B9 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153B1C 00150A5C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153B20 00150A60  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153B24 00150A64  48 09 36 D9 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153B28 00150A68  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153B2C 00150A6C  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153B30 00150A70  48 09 36 4D */	bl setContainer__Q24Game8PlayDataFi
/* 80153B34 00150A74  48 00 01 70 */	b .L_80153CA4
.L_80153B38:
/* 80153B38 00150A78  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 80153B3C 00150A7C  38 00 00 00 */	li r0, 0
/* 80153B40 00150A80  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153B44 00150A84  38 7E 01 6C */	addi r3, r30, 0x16c
/* 80153B48 00150A88  90 61 00 78 */	stw r3, 0x78(r1)
/* 80153B4C 00150A8C  38 61 00 14 */	addi r3, r1, 0x14
/* 80153B50 00150A90  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80153B54 00150A94  90 A1 00 84 */	stw r5, 0x84(r1)
/* 80153B58 00150A98  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 80153B5C 00150A9C  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80153B60 00150AA0  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80153B64 00150AA4  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80153B68 00150AA8  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80153B6C 00150AAC  90 01 00 88 */	stw r0, 0x88(r1)
/* 80153B70 00150AB0  90 01 00 80 */	stw r0, 0x80(r1)
/* 80153B74 00150AB4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80153B78 00150AB8  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80153B7C 00150ABC  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80153B80 00150AC0  81 84 00 00 */	lwz r12, 0(r4)
/* 80153B84 00150AC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153B88 00150AC8  7D 89 03 A6 */	mtctr r12
/* 80153B8C 00150ACC  4E 80 04 21 */	bctrl 
/* 80153B90 00150AD0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80153B94 00150AD4  7F E3 FB 78 */	mr r3, r31
/* 80153B98 00150AD8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80153B9C 00150ADC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80153BA0 00150AE0  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 80153BA4 00150AE4  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 80153BA8 00150AE8  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80153BAC 00150AEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153BB0 00150AF0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153BB4 00150AF4  7D 89 03 A6 */	mtctr r12
/* 80153BB8 00150AF8  4E 80 04 21 */	bctrl 
/* 80153BBC 00150AFC  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 80153BC0 00150B00  38 81 00 78 */	addi r4, r1, 0x78
/* 80153BC4 00150B04  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153BC8 00150B08  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153BCC 00150B0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153BD0 00150B10  48 2D 8E 01 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153BD4 00150B14  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153BD8 00150B18  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153BDC 00150B1C  48 09 36 21 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153BE0 00150B20  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153BE4 00150B24  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153BE8 00150B28  48 09 35 95 */	bl setContainer__Q24Game8PlayDataFi
/* 80153BEC 00150B2C  48 00 00 B8 */	b .L_80153CA4
.L_80153BF0:
/* 80153BF0 00150B30  80 BC 00 C8 */	lwz r5, 0xe8(r28)
/* 80153BF4 00150B34  38 00 00 00 */	li r0, 0
/* 80153BF8 00150B38  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153BFC 00150B3C  38 7E 01 84 */	addi r3, r30, 0x184
/* 80153C00 00150B40  90 61 00 44 */	stw r3, 0x44(r1)
/* 80153C04 00150B44  38 61 00 08 */	addi r3, r1, 8
/* 80153C08 00150B48  90 01 00 48 */	stw r0, 0x48(r1)
/* 80153C0C 00150B4C  90 A1 00 50 */	stw r5, 0x50(r1)
/* 80153C10 00150B50  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80153C14 00150B54  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80153C18 00150B58  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80153C1C 00150B5C  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80153C20 00150B60  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80153C24 00150B64  90 01 00 54 */	stw r0, 0x54(r1)
/* 80153C28 00150B68  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80153C2C 00150B6C  90 01 00 70 */	stw r0, 0x70(r1)
/* 80153C30 00150B70  90 01 00 58 */	stw r0, 0x58(r1)
/* 80153C34 00150B74  90 01 00 74 */	stw r0, 0x74(r1)
/* 80153C38 00150B78  81 84 00 00 */	lwz r12, 0(r4)
/* 80153C3C 00150B7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153C40 00150B80  7D 89 03 A6 */	mtctr r12
/* 80153C44 00150B84  4E 80 04 21 */	bctrl 
/* 80153C48 00150B88  C0 41 00 08 */	lfs f2, 8(r1)
/* 80153C4C 00150B8C  7F E3 FB 78 */	mr r3, r31
/* 80153C50 00150B90  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80153C54 00150B94  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80153C58 00150B98  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 80153C5C 00150B9C  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 80153C60 00150BA0  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80153C64 00150BA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153C68 00150BA8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153C6C 00150BAC  7D 89 03 A6 */	mtctr r12
/* 80153C70 00150BB0  4E 80 04 21 */	bctrl 
/* 80153C74 00150BB4  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 80153C78 00150BB8  38 81 00 44 */	addi r4, r1, 0x44
/* 80153C7C 00150BBC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153C80 00150BC0  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153C84 00150BC4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153C88 00150BC8  48 2D 8D 49 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153C8C 00150BCC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153C90 00150BD0  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153C94 00150BD4  48 09 35 69 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153C98 00150BD8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153C9C 00150BDC  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153CA0 00150BE0  48 09 34 DD */	bl setContainer__Q24Game8PlayDataFi
.L_80153CA4:
/* 80153CA4 00150BE4  80 01 01 64 */	lwz r0, 0x164(r1)
/* 80153CA8 00150BE8  83 E1 01 5C */	lwz r31, 0x15c(r1)
/* 80153CAC 00150BEC  83 C1 01 58 */	lwz r30, 0x158(r1)
/* 80153CB0 00150BF0  83 A1 01 54 */	lwz r29, 0x154(r1)
/* 80153CB4 00150BF4  83 81 01 50 */	lwz r28, 0x150(r1)
/* 80153CB8 00150BF8  7C 08 03 A6 */	mtlr r0
/* 80153CBC 00150BFC  38 21 01 60 */	addi r1, r1, 0x160
/* 80153CC0 00150C00  4E 80 00 20 */	blr 
.else
.global playMovie_helloPikmin__Q24Game17SingleGameSectionFPQ24Game4Piki
playMovie_helloPikmin__Q24Game17SingleGameSectionFPQ24Game4Piki:
/* 80153870 001507B0  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 80153874 001507B4  7C 08 02 A6 */	mflr r0
/* 80153878 001507B8  3C A0 80 48 */	lis r5, lbl_8047CD98@ha
/* 8015387C 001507BC  90 01 01 64 */	stw r0, 0x164(r1)
/* 80153880 001507C0  93 E1 01 5C */	stw r31, 0x15c(r1)
/* 80153884 001507C4  7C 9F 23 78 */	mr r31, r4
/* 80153888 001507C8  93 C1 01 58 */	stw r30, 0x158(r1)
/* 8015388C 001507CC  3B C5 CD 98 */	addi r30, r5, lbl_8047CD98@l
/* 80153890 001507D0  93 A1 01 54 */	stw r29, 0x154(r1)
/* 80153894 001507D4  93 81 01 50 */	stw r28, 0x150(r1)
/* 80153898 001507D8  7C 7C 1B 78 */	mr r28, r3
/* 8015389C 001507DC  88 04 02 B8 */	lbz r0, 0x2b8(r4)
/* 801538A0 001507E0  2C 00 00 02 */	cmpwi r0, 2
/* 801538A4 001507E4  41 82 01 24 */	beq .L_801539C8
/* 801538A8 001507E8  40 80 00 14 */	bge .L_801538BC
/* 801538AC 001507EC  2C 00 00 00 */	cmpwi r0, 0
/* 801538B0 001507F0  41 82 01 D0 */	beq .L_80153A80
/* 801538B4 001507F4  40 80 00 18 */	bge .L_801538CC
/* 801538B8 001507F8  48 00 03 EC */	b .L_80153CA4
.L_801538BC:
/* 801538BC 001507FC  2C 00 00 04 */	cmpwi r0, 4
/* 801538C0 00150800  41 82 03 30 */	beq .L_80153BF0
/* 801538C4 00150804  40 80 03 E0 */	bge .L_80153CA4
/* 801538C8 00150808  48 00 02 70 */	b .L_80153B38
.L_801538CC:
/* 801538CC 0015080C  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 801538D0 00150810  38 00 00 00 */	li r0, 0
/* 801538D4 00150814  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 801538D8 00150818  38 7E 01 1C */	addi r3, r30, 0x11c
/* 801538DC 0015081C  90 61 01 14 */	stw r3, 0x114(r1)
/* 801538E0 00150820  38 80 00 01 */	li r4, 1
/* 801538E4 00150824  80 6D 93 30 */	lwz r3, mgr__Q24Game9ItemOnyon@sda21(r13)
/* 801538E8 00150828  90 01 01 18 */	stw r0, 0x118(r1)
/* 801538EC 0015082C  90 A1 01 20 */	stw r5, 0x120(r1)
/* 801538F0 00150830  D0 01 01 2C */	stfs f0, 0x12c(r1)
/* 801538F4 00150834  D0 01 01 30 */	stfs f0, 0x130(r1)
/* 801538F8 00150838  D0 01 01 34 */	stfs f0, 0x134(r1)
/* 801538FC 0015083C  D0 01 01 38 */	stfs f0, 0x138(r1)
/* 80153900 00150840  90 01 01 3C */	stw r0, 0x13c(r1)
/* 80153904 00150844  90 01 01 24 */	stw r0, 0x124(r1)
/* 80153908 00150848  90 01 01 1C */	stw r0, 0x11c(r1)
/* 8015390C 0015084C  90 01 01 40 */	stw r0, 0x140(r1)
/* 80153910 00150850  90 01 01 28 */	stw r0, 0x128(r1)
/* 80153914 00150854  90 01 01 44 */	stw r0, 0x144(r1)
/* 80153918 00150858  48 02 81 85 */	bl getOnyon__Q34Game9ItemOnyon3MgrFi
/* 8015391C 0015085C  7C 7D 1B 79 */	or. r29, r3, r3
/* 80153920 00150860  40 82 00 18 */	bne .L_80153938
/* 80153924 00150864  38 7E 00 B0 */	addi r3, r30, 0xb0
/* 80153928 00150868  38 BE 01 30 */	addi r5, r30, 0x130
/* 8015392C 0015086C  38 80 05 C9 */	li r4, 0x5c9
/* 80153930 00150870  4C C6 31 82 */	crclr 6
/* 80153934 00150874  4B ED 6D 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80153938:
/* 80153938 00150878  7F A4 EB 78 */	mr r4, r29
/* 8015393C 0015087C  38 61 00 38 */	addi r3, r1, 0x38
/* 80153940 00150880  81 9D 00 00 */	lwz r12, 0(r29)
/* 80153944 00150884  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153948 00150888  7D 89 03 A6 */	mtctr r12
/* 8015394C 0015088C  4E 80 04 21 */	bctrl 
/* 80153950 00150890  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 80153954 00150894  7F A3 EB 78 */	mr r3, r29
/* 80153958 00150898  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 8015395C 0015089C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80153960 001508A0  D0 41 01 2C */	stfs f2, 0x12c(r1)
/* 80153964 001508A4  D0 21 01 30 */	stfs f1, 0x130(r1)
/* 80153968 001508A8  D0 01 01 34 */	stfs f0, 0x134(r1)
/* 8015396C 001508AC  81 9D 00 00 */	lwz r12, 0(r29)
/* 80153970 001508B0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153974 001508B4  7D 89 03 A6 */	mtctr r12
/* 80153978 001508B8  4E 80 04 21 */	bctrl 
/* 8015397C 001508BC  D0 21 01 38 */	stfs f1, 0x138(r1)
/* 80153980 001508C0  38 81 01 14 */	addi r4, r1, 0x114
/* 80153984 001508C4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153988 001508C8  93 E3 01 94 */	stw r31, 0x194(r3)
/* 8015398C 001508CC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153990 001508D0  48 2D 90 41 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153994 001508D4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153998 001508D8  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 8015399C 001508DC  48 09 38 61 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 801539A0 001508E0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801539A4 001508E4  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 801539A8 001508E8  48 09 37 D5 */	bl setContainer__Q24Game8PlayDataFi
/* 801539AC 001508EC  7F 83 E3 78 */	mr r3, r28
/* 801539B0 001508F0  38 80 00 01 */	li r4, 1
/* 801539B4 001508F4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801539B8 001508F8  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801539BC 001508FC  7D 89 03 A6 */	mtctr r12
/* 801539C0 00150900  4E 80 04 21 */	bctrl 
/* 801539C4 00150904  48 00 02 E0 */	b .L_80153CA4
.L_801539C8:
/* 801539C8 00150908  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 801539CC 0015090C  38 00 00 00 */	li r0, 0
/* 801539D0 00150910  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 801539D4 00150914  38 7E 01 40 */	addi r3, r30, 0x140
/* 801539D8 00150918  90 61 00 E0 */	stw r3, 0xe0(r1)
/* 801539DC 0015091C  38 61 00 2C */	addi r3, r1, 0x2c
/* 801539E0 00150920  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801539E4 00150924  90 A1 00 EC */	stw r5, 0xec(r1)
/* 801539E8 00150928  D0 01 00 F8 */	stfs f0, 0xf8(r1)
/* 801539EC 0015092C  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 801539F0 00150930  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 801539F4 00150934  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 801539F8 00150938  90 01 01 08 */	stw r0, 0x108(r1)
/* 801539FC 0015093C  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80153A00 00150940  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 80153A04 00150944  90 01 01 0C */	stw r0, 0x10c(r1)
/* 80153A08 00150948  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80153A0C 0015094C  90 01 01 10 */	stw r0, 0x110(r1)
/* 80153A10 00150950  81 84 00 00 */	lwz r12, 0(r4)
/* 80153A14 00150954  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153A18 00150958  7D 89 03 A6 */	mtctr r12
/* 80153A1C 0015095C  4E 80 04 21 */	bctrl 
/* 80153A20 00150960  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 80153A24 00150964  7F E3 FB 78 */	mr r3, r31
/* 80153A28 00150968  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 80153A2C 0015096C  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80153A30 00150970  D0 41 00 F8 */	stfs f2, 0xf8(r1)
/* 80153A34 00150974  D0 21 00 FC */	stfs f1, 0xfc(r1)
/* 80153A38 00150978  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80153A3C 0015097C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153A40 00150980  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153A44 00150984  7D 89 03 A6 */	mtctr r12
/* 80153A48 00150988  4E 80 04 21 */	bctrl 
/* 80153A4C 0015098C  D0 21 01 04 */	stfs f1, 0x104(r1)
/* 80153A50 00150990  38 81 00 E0 */	addi r4, r1, 0xe0
/* 80153A54 00150994  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153A58 00150998  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153A5C 0015099C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153A60 001509A0  48 2D 8F 71 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153A64 001509A4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153A68 001509A8  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153A6C 001509AC  48 09 37 91 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153A70 001509B0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153A74 001509B4  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153A78 001509B8  48 09 37 05 */	bl setContainer__Q24Game8PlayDataFi
/* 80153A7C 001509BC  48 00 02 28 */	b .L_80153CA4
.L_80153A80:
/* 80153A80 001509C0  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 80153A84 001509C4  38 00 00 00 */	li r0, 0
/* 80153A88 001509C8  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153A8C 001509CC  38 7E 01 58 */	addi r3, r30, 0x158
/* 80153A90 001509D0  90 61 00 AC */	stw r3, 0xac(r1)
/* 80153A94 001509D4  38 61 00 20 */	addi r3, r1, 0x20
/* 80153A98 001509D8  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80153A9C 001509DC  90 A1 00 B8 */	stw r5, 0xb8(r1)
/* 80153AA0 001509E0  D0 01 00 C4 */	stfs f0, 0xc4(r1)
/* 80153AA4 001509E4  D0 01 00 C8 */	stfs f0, 0xc8(r1)
/* 80153AA8 001509E8  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80153AAC 001509EC  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80153AB0 001509F0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80153AB4 001509F4  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80153AB8 001509F8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80153ABC 001509FC  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 80153AC0 00150A00  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80153AC4 00150A04  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80153AC8 00150A08  81 84 00 00 */	lwz r12, 0(r4)
/* 80153ACC 00150A0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153AD0 00150A10  7D 89 03 A6 */	mtctr r12
/* 80153AD4 00150A14  4E 80 04 21 */	bctrl 
/* 80153AD8 00150A18  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80153ADC 00150A1C  7F E3 FB 78 */	mr r3, r31
/* 80153AE0 00150A20  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80153AE4 00150A24  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80153AE8 00150A28  D0 41 00 C4 */	stfs f2, 0xc4(r1)
/* 80153AEC 00150A2C  D0 21 00 C8 */	stfs f1, 0xc8(r1)
/* 80153AF0 00150A30  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80153AF4 00150A34  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153AF8 00150A38  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153AFC 00150A3C  7D 89 03 A6 */	mtctr r12
/* 80153B00 00150A40  4E 80 04 21 */	bctrl 
/* 80153B04 00150A44  D0 21 00 D0 */	stfs f1, 0xd0(r1)
/* 80153B08 00150A48  38 81 00 AC */	addi r4, r1, 0xac
/* 80153B0C 00150A4C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153B10 00150A50  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153B14 00150A54  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153B18 00150A58  48 2D 8E B9 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153B1C 00150A5C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153B20 00150A60  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153B24 00150A64  48 09 36 D9 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153B28 00150A68  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153B2C 00150A6C  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153B30 00150A70  48 09 36 4D */	bl setContainer__Q24Game8PlayDataFi
/* 80153B34 00150A74  48 00 01 70 */	b .L_80153CA4
.L_80153B38:
/* 80153B38 00150A78  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 80153B3C 00150A7C  38 00 00 00 */	li r0, 0
/* 80153B40 00150A80  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153B44 00150A84  38 7E 01 6C */	addi r3, r30, 0x16c
/* 80153B48 00150A88  90 61 00 78 */	stw r3, 0x78(r1)
/* 80153B4C 00150A8C  38 61 00 14 */	addi r3, r1, 0x14
/* 80153B50 00150A90  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80153B54 00150A94  90 A1 00 84 */	stw r5, 0x84(r1)
/* 80153B58 00150A98  D0 01 00 90 */	stfs f0, 0x90(r1)
/* 80153B5C 00150A9C  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80153B60 00150AA0  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80153B64 00150AA4  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80153B68 00150AA8  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80153B6C 00150AAC  90 01 00 88 */	stw r0, 0x88(r1)
/* 80153B70 00150AB0  90 01 00 80 */	stw r0, 0x80(r1)
/* 80153B74 00150AB4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80153B78 00150AB8  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80153B7C 00150ABC  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 80153B80 00150AC0  81 84 00 00 */	lwz r12, 0(r4)
/* 80153B84 00150AC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153B88 00150AC8  7D 89 03 A6 */	mtctr r12
/* 80153B8C 00150ACC  4E 80 04 21 */	bctrl 
/* 80153B90 00150AD0  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80153B94 00150AD4  7F E3 FB 78 */	mr r3, r31
/* 80153B98 00150AD8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80153B9C 00150ADC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80153BA0 00150AE0  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 80153BA4 00150AE4  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 80153BA8 00150AE8  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80153BAC 00150AEC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153BB0 00150AF0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153BB4 00150AF4  7D 89 03 A6 */	mtctr r12
/* 80153BB8 00150AF8  4E 80 04 21 */	bctrl 
/* 80153BBC 00150AFC  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 80153BC0 00150B00  38 81 00 78 */	addi r4, r1, 0x78
/* 80153BC4 00150B04  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153BC8 00150B08  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153BCC 00150B0C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153BD0 00150B10  48 2D 8E 01 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153BD4 00150B14  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153BD8 00150B18  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153BDC 00150B1C  48 09 36 21 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153BE0 00150B20  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153BE4 00150B24  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153BE8 00150B28  48 09 35 95 */	bl setContainer__Q24Game8PlayDataFi
/* 80153BEC 00150B2C  48 00 00 B8 */	b .L_80153CA4
.L_80153BF0:
/* 80153BF0 00150B30  80 BC 00 C8 */	lwz r5, 0xc8(r28)
/* 80153BF4 00150B34  38 00 00 00 */	li r0, 0
/* 80153BF8 00150B38  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80153BFC 00150B3C  38 7E 01 84 */	addi r3, r30, 0x184
/* 80153C00 00150B40  90 61 00 44 */	stw r3, 0x44(r1)
/* 80153C04 00150B44  38 61 00 08 */	addi r3, r1, 8
/* 80153C08 00150B48  90 01 00 48 */	stw r0, 0x48(r1)
/* 80153C0C 00150B4C  90 A1 00 50 */	stw r5, 0x50(r1)
/* 80153C10 00150B50  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 80153C14 00150B54  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 80153C18 00150B58  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80153C1C 00150B5C  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 80153C20 00150B60  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80153C24 00150B64  90 01 00 54 */	stw r0, 0x54(r1)
/* 80153C28 00150B68  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80153C2C 00150B6C  90 01 00 70 */	stw r0, 0x70(r1)
/* 80153C30 00150B70  90 01 00 58 */	stw r0, 0x58(r1)
/* 80153C34 00150B74  90 01 00 74 */	stw r0, 0x74(r1)
/* 80153C38 00150B78  81 84 00 00 */	lwz r12, 0(r4)
/* 80153C3C 00150B7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153C40 00150B80  7D 89 03 A6 */	mtctr r12
/* 80153C44 00150B84  4E 80 04 21 */	bctrl 
/* 80153C48 00150B88  C0 41 00 08 */	lfs f2, 8(r1)
/* 80153C4C 00150B8C  7F E3 FB 78 */	mr r3, r31
/* 80153C50 00150B90  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80153C54 00150B94  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80153C58 00150B98  D0 41 00 5C */	stfs f2, 0x5c(r1)
/* 80153C5C 00150B9C  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 80153C60 00150BA0  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 80153C64 00150BA4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80153C68 00150BA8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80153C6C 00150BAC  7D 89 03 A6 */	mtctr r12
/* 80153C70 00150BB0  4E 80 04 21 */	bctrl 
/* 80153C74 00150BB4  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 80153C78 00150BB8  38 81 00 44 */	addi r4, r1, 0x44
/* 80153C7C 00150BBC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153C80 00150BC0  93 E3 01 94 */	stw r31, 0x194(r3)
/* 80153C84 00150BC4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80153C88 00150BC8  48 2D 8D 49 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 80153C8C 00150BCC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153C90 00150BD0  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153C94 00150BD4  48 09 35 69 */	bl setMeetPikmin__Q24Game8PlayDataFi
/* 80153C98 00150BD8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153C9C 00150BDC  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80153CA0 00150BE0  48 09 34 DD */	bl setContainer__Q24Game8PlayDataFi
.L_80153CA4:
/* 80153CA4 00150BE4  80 01 01 64 */	lwz r0, 0x164(r1)
/* 80153CA8 00150BE8  83 E1 01 5C */	lwz r31, 0x15c(r1)
/* 80153CAC 00150BEC  83 C1 01 58 */	lwz r30, 0x158(r1)
/* 80153CB0 00150BF0  83 A1 01 54 */	lwz r29, 0x154(r1)
/* 80153CB4 00150BF4  83 81 01 50 */	lwz r28, 0x150(r1)
/* 80153CB8 00150BF8  7C 08 03 A6 */	mtlr r0
/* 80153CBC 00150BFC  38 21 01 60 */	addi r1, r1, 0x160
/* 80153CC0 00150C00  4E 80 00 20 */	blr 
.endif

.global playMovie_firstexperience__Q24Game17SingleGameSectionFiPQ24Game8Creature
playMovie_firstexperience__Q24Game17SingleGameSectionFiPQ24Game8Creature:
/* 80153CC4 00150C04  4E 80 00 20 */	blr 

.if version == 1
.global saveMainMapSituation__Q24Game17SingleGameSectionFb
saveMainMapSituation__Q24Game17SingleGameSectionFb:
/* 80153CC8 00150C08  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80153CCC 00150C0C  7C 08 02 A6 */	mflr r0
/* 80153CD0 00150C10  90 01 00 34 */	stw r0, 0x34(r1)
/* 80153CD4 00150C14  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80153CD8 00150C18  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80153CDC 00150C1C  7C 7F 1B 78 */	mr r31, r3
/* 80153CE0 00150C20  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80153CE4 00150C24  41 82 02 34 */	beq .L_80153F18
/* 80153CE8 00150C28  38 00 00 00 */	li r0, 0
/* 80153CEC 00150C2C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80153CF0 00150C30  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80153CF4 00150C34  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80153CF8 00150C38  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80153CFC 00150C3C  28 00 00 00 */	cmplwi r0, 0
/* 80153D00 00150C40  90 81 00 10 */	stw r4, 0x10(r1)
/* 80153D04 00150C44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153D08 00150C48  90 61 00 18 */	stw r3, 0x18(r1)
/* 80153D0C 00150C4C  40 82 00 1C */	bne .L_80153D28
/* 80153D10 00150C50  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D14 00150C54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80153D18 00150C58  7D 89 03 A6 */	mtctr r12
/* 80153D1C 00150C5C  4E 80 04 21 */	bctrl 
/* 80153D20 00150C60  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153D24 00150C64  48 00 01 D4 */	b .L_80153EF8
.L_80153D28:
/* 80153D28 00150C68  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D2C 00150C6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80153D30 00150C70  7D 89 03 A6 */	mtctr r12
/* 80153D34 00150C74  4E 80 04 21 */	bctrl 
/* 80153D38 00150C78  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153D3C 00150C7C  48 00 00 58 */	b .L_80153D94
.L_80153D40:
/* 80153D40 00150C80  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153D44 00150C84  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153D48 00150C88  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D4C 00150C8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80153D50 00150C90  7D 89 03 A6 */	mtctr r12
/* 80153D54 00150C94  4E 80 04 21 */	bctrl 
/* 80153D58 00150C98  7C 64 1B 78 */	mr r4, r3
/* 80153D5C 00150C9C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80153D60 00150CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D64 00150CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153D68 00150CA8  7D 89 03 A6 */	mtctr r12
/* 80153D6C 00150CAC  4E 80 04 21 */	bctrl 
/* 80153D70 00150CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153D74 00150CB4  40 82 01 84 */	bne .L_80153EF8
/* 80153D78 00150CB8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153D7C 00150CBC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153D80 00150CC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D84 00150CC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153D88 00150CC8  7D 89 03 A6 */	mtctr r12
/* 80153D8C 00150CCC  4E 80 04 21 */	bctrl 
/* 80153D90 00150CD0  90 61 00 14 */	stw r3, 0x14(r1)
.L_80153D94:
/* 80153D94 00150CD4  81 81 00 10 */	lwz r12, 0x10(r1)
/* 80153D98 00150CD8  38 61 00 10 */	addi r3, r1, 0x10
/* 80153D9C 00150CDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80153DA0 00150CE0  7D 89 03 A6 */	mtctr r12
/* 80153DA4 00150CE4  4E 80 04 21 */	bctrl 
/* 80153DA8 00150CE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153DAC 00150CEC  41 82 FF 94 */	beq .L_80153D40
/* 80153DB0 00150CF0  48 00 01 48 */	b .L_80153EF8
.L_80153DB4:
/* 80153DB4 00150CF4  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153DB8 00150CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80153DBC 00150CFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80153DC0 00150D00  7D 89 03 A6 */	mtctr r12
/* 80153DC4 00150D04  4E 80 04 21 */	bctrl 
/* 80153DC8 00150D08  81 83 00 00 */	lwz r12, 0(r3)
/* 80153DCC 00150D0C  7C 7E 1B 78 */	mr r30, r3
/* 80153DD0 00150D10  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80153DD4 00150D14  7D 89 03 A6 */	mtctr r12
/* 80153DD8 00150D18  4E 80 04 21 */	bctrl 
/* 80153DDC 00150D1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153DE0 00150D20  41 82 00 5C */	beq .L_80153E3C
/* 80153DE4 00150D24  88 9E 02 B8 */	lbz r4, 0x2b8(r30)
/* 80153DE8 00150D28  2C 04 00 00 */	cmpwi r4, 0
/* 80153DEC 00150D2C  41 82 00 50 */	beq .L_80153E3C
/* 80153DF0 00150D30  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153DF4 00150D34  88 BE 02 B9 */	lbz r5, 0x2b9(r30)
/* 80153DF8 00150D38  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80153DFC 00150D3C  48 09 D6 21 */	bl getCount__Q24Game13PikiContainerFii
/* 80153E00 00150D40  80 E3 00 00 */	lwz r7, 0(r3)
/* 80153E04 00150D44  3C C0 80 4B */	lis r6, __vt__Q24Game15CreatureKillArg@ha
/* 80153E08 00150D48  3C A0 00 01 */	lis r5, 0x00010001@ha
/* 80153E0C 00150D4C  3C 80 80 4B */	lis r4, __vt__Q24Game11PikiKillArg@ha
/* 80153E10 00150D50  38 07 00 01 */	addi r0, r7, 1
/* 80153E14 00150D54  38 C6 A2 D0 */	addi r6, r6, __vt__Q24Game15CreatureKillArg@l
/* 80153E18 00150D58  90 03 00 00 */	stw r0, 0(r3)
/* 80153E1C 00150D5C  38 A5 00 01 */	addi r5, r5, 0x00010001@l
/* 80153E20 00150D60  38 04 11 60 */	addi r0, r4, __vt__Q24Game11PikiKillArg@l
/* 80153E24 00150D64  7F C3 F3 78 */	mr r3, r30
/* 80153E28 00150D68  90 C1 00 08 */	stw r6, 8(r1)
/* 80153E2C 00150D6C  38 81 00 08 */	addi r4, r1, 8
/* 80153E30 00150D70  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80153E34 00150D74  90 01 00 08 */	stw r0, 8(r1)
/* 80153E38 00150D78  4B FE 72 B9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80153E3C:
/* 80153E3C 00150D7C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80153E40 00150D80  28 00 00 00 */	cmplwi r0, 0
/* 80153E44 00150D84  40 82 00 24 */	bne .L_80153E68
/* 80153E48 00150D88  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153E4C 00150D8C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153E50 00150D90  81 83 00 00 */	lwz r12, 0(r3)
/* 80153E54 00150D94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153E58 00150D98  7D 89 03 A6 */	mtctr r12
/* 80153E5C 00150D9C  4E 80 04 21 */	bctrl 
/* 80153E60 00150DA0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153E64 00150DA4  48 00 00 94 */	b .L_80153EF8
.L_80153E68:
/* 80153E68 00150DA8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153E6C 00150DAC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153E70 00150DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153E74 00150DB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153E78 00150DB8  7D 89 03 A6 */	mtctr r12
/* 80153E7C 00150DBC  4E 80 04 21 */	bctrl 
/* 80153E80 00150DC0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153E84 00150DC4  48 00 00 58 */	b .L_80153EDC
.L_80153E88:
/* 80153E88 00150DC8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153E8C 00150DCC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153E90 00150DD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153E94 00150DD4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80153E98 00150DD8  7D 89 03 A6 */	mtctr r12
/* 80153E9C 00150DDC  4E 80 04 21 */	bctrl 
/* 80153EA0 00150DE0  7C 64 1B 78 */	mr r4, r3
/* 80153EA4 00150DE4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80153EA8 00150DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80153EAC 00150DEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153EB0 00150DF0  7D 89 03 A6 */	mtctr r12
/* 80153EB4 00150DF4  4E 80 04 21 */	bctrl 
/* 80153EB8 00150DF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153EBC 00150DFC  40 82 00 3C */	bne .L_80153EF8
/* 80153EC0 00150E00  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153EC4 00150E04  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153EC8 00150E08  81 83 00 00 */	lwz r12, 0(r3)
/* 80153ECC 00150E0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153ED0 00150E10  7D 89 03 A6 */	mtctr r12
/* 80153ED4 00150E14  4E 80 04 21 */	bctrl 
/* 80153ED8 00150E18  90 61 00 14 */	stw r3, 0x14(r1)
.L_80153EDC:
/* 80153EDC 00150E1C  81 81 00 10 */	lwz r12, 0x10(r1)
/* 80153EE0 00150E20  38 61 00 10 */	addi r3, r1, 0x10
/* 80153EE4 00150E24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80153EE8 00150E28  7D 89 03 A6 */	mtctr r12
/* 80153EEC 00150E2C  4E 80 04 21 */	bctrl 
/* 80153EF0 00150E30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153EF4 00150E34  41 82 FF 94 */	beq .L_80153E88
.L_80153EF8:
/* 80153EF8 00150E38  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153EFC 00150E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80153F00 00150E40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80153F04 00150E44  7D 89 03 A6 */	mtctr r12
/* 80153F08 00150E48  4E 80 04 21 */	bctrl 
/* 80153F0C 00150E4C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153F10 00150E50  7C 04 18 40 */	cmplw r4, r3
/* 80153F14 00150E54  40 82 FE A0 */	bne .L_80153DB4
.L_80153F18:
/* 80153F18 00150E58  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80153F1C 00150E5C  38 80 00 00 */	li r4, 0
/* 80153F20 00150E60  48 00 C8 91 */	bl caveSaveFormationPikmins__Q24Game7PikiMgrFb
/* 80153F24 00150E64  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80153F28 00150E68  38 80 00 01 */	li r4, 1
/* 80153F2C 00150E6C  48 00 BD 89 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 80153F30 00150E70  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80153F34 00150E74  7F E3 FB 78 */	mr r3, r31
/* 80153F38 00150E78  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80153F3C 00150E7C  80 A5 00 40 */	lwz r5, 0x40(r5)
/* 80153F40 00150E80  C0 05 02 0C */	lfs f0, 0x20c(r5)
/* 80153F44 00150E84  D0 04 00 68 */	stfs f0, 0x68(r4)
/* 80153F48 00150E88  80 9F 02 2C */	lwz r4, 0x250(r31)
/* 80153F4C 00150E8C  4B FF 98 45 */	bl saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
/* 80153F50 00150E90  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80153F54 00150E94  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80153F58 00150E98  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80153F5C 00150E9C  7C 08 03 A6 */	mtlr r0
/* 80153F60 00150EA0  38 21 00 30 */	addi r1, r1, 0x30
/* 80153F64 00150EA4  4E 80 00 20 */	blr 
.else
.global saveMainMapSituation__Q24Game17SingleGameSectionFb
saveMainMapSituation__Q24Game17SingleGameSectionFb:
/* 80153CC8 00150C08  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80153CCC 00150C0C  7C 08 02 A6 */	mflr r0
/* 80153CD0 00150C10  90 01 00 34 */	stw r0, 0x34(r1)
/* 80153CD4 00150C14  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80153CD8 00150C18  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80153CDC 00150C1C  7C 7F 1B 78 */	mr r31, r3
/* 80153CE0 00150C20  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80153CE4 00150C24  41 82 02 34 */	beq .L_80153F18
/* 80153CE8 00150C28  38 00 00 00 */	li r0, 0
/* 80153CEC 00150C2C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80153CF0 00150C30  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 80153CF4 00150C34  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80153CF8 00150C38  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 80153CFC 00150C3C  28 00 00 00 */	cmplwi r0, 0
/* 80153D00 00150C40  90 81 00 10 */	stw r4, 0x10(r1)
/* 80153D04 00150C44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153D08 00150C48  90 61 00 18 */	stw r3, 0x18(r1)
/* 80153D0C 00150C4C  40 82 00 1C */	bne .L_80153D28
/* 80153D10 00150C50  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D14 00150C54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80153D18 00150C58  7D 89 03 A6 */	mtctr r12
/* 80153D1C 00150C5C  4E 80 04 21 */	bctrl 
/* 80153D20 00150C60  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153D24 00150C64  48 00 01 D4 */	b .L_80153EF8
.L_80153D28:
/* 80153D28 00150C68  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D2C 00150C6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80153D30 00150C70  7D 89 03 A6 */	mtctr r12
/* 80153D34 00150C74  4E 80 04 21 */	bctrl 
/* 80153D38 00150C78  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153D3C 00150C7C  48 00 00 58 */	b .L_80153D94
.L_80153D40:
/* 80153D40 00150C80  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153D44 00150C84  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153D48 00150C88  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D4C 00150C8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80153D50 00150C90  7D 89 03 A6 */	mtctr r12
/* 80153D54 00150C94  4E 80 04 21 */	bctrl 
/* 80153D58 00150C98  7C 64 1B 78 */	mr r4, r3
/* 80153D5C 00150C9C  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80153D60 00150CA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D64 00150CA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153D68 00150CA8  7D 89 03 A6 */	mtctr r12
/* 80153D6C 00150CAC  4E 80 04 21 */	bctrl 
/* 80153D70 00150CB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153D74 00150CB4  40 82 01 84 */	bne .L_80153EF8
/* 80153D78 00150CB8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153D7C 00150CBC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153D80 00150CC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153D84 00150CC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153D88 00150CC8  7D 89 03 A6 */	mtctr r12
/* 80153D8C 00150CCC  4E 80 04 21 */	bctrl 
/* 80153D90 00150CD0  90 61 00 14 */	stw r3, 0x14(r1)
.L_80153D94:
/* 80153D94 00150CD4  81 81 00 10 */	lwz r12, 0x10(r1)
/* 80153D98 00150CD8  38 61 00 10 */	addi r3, r1, 0x10
/* 80153D9C 00150CDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80153DA0 00150CE0  7D 89 03 A6 */	mtctr r12
/* 80153DA4 00150CE4  4E 80 04 21 */	bctrl 
/* 80153DA8 00150CE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153DAC 00150CEC  41 82 FF 94 */	beq .L_80153D40
/* 80153DB0 00150CF0  48 00 01 48 */	b .L_80153EF8
.L_80153DB4:
/* 80153DB4 00150CF4  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153DB8 00150CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80153DBC 00150CFC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80153DC0 00150D00  7D 89 03 A6 */	mtctr r12
/* 80153DC4 00150D04  4E 80 04 21 */	bctrl 
/* 80153DC8 00150D08  81 83 00 00 */	lwz r12, 0(r3)
/* 80153DCC 00150D0C  7C 7E 1B 78 */	mr r30, r3
/* 80153DD0 00150D10  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80153DD4 00150D14  7D 89 03 A6 */	mtctr r12
/* 80153DD8 00150D18  4E 80 04 21 */	bctrl 
/* 80153DDC 00150D1C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153DE0 00150D20  41 82 00 5C */	beq .L_80153E3C
/* 80153DE4 00150D24  88 9E 02 B8 */	lbz r4, 0x2b8(r30)
/* 80153DE8 00150D28  2C 04 00 00 */	cmpwi r4, 0
/* 80153DEC 00150D2C  41 82 00 50 */	beq .L_80153E3C
/* 80153DF0 00150D30  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80153DF4 00150D34  88 BE 02 B9 */	lbz r5, 0x2b9(r30)
/* 80153DF8 00150D38  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80153DFC 00150D3C  48 09 D6 21 */	bl getCount__Q24Game13PikiContainerFii
/* 80153E00 00150D40  80 E3 00 00 */	lwz r7, 0(r3)
/* 80153E04 00150D44  3C C0 80 4B */	lis r6, __vt__Q24Game15CreatureKillArg@ha
/* 80153E08 00150D48  3C A0 00 01 */	lis r5, 0x00010001@ha
/* 80153E0C 00150D4C  3C 80 80 4B */	lis r4, __vt__Q24Game11PikiKillArg@ha
/* 80153E10 00150D50  38 07 00 01 */	addi r0, r7, 1
/* 80153E14 00150D54  38 C6 A2 D0 */	addi r6, r6, __vt__Q24Game15CreatureKillArg@l
/* 80153E18 00150D58  90 03 00 00 */	stw r0, 0(r3)
/* 80153E1C 00150D5C  38 A5 00 01 */	addi r5, r5, 0x00010001@l
/* 80153E20 00150D60  38 04 11 60 */	addi r0, r4, __vt__Q24Game11PikiKillArg@l
/* 80153E24 00150D64  7F C3 F3 78 */	mr r3, r30
/* 80153E28 00150D68  90 C1 00 08 */	stw r6, 8(r1)
/* 80153E2C 00150D6C  38 81 00 08 */	addi r4, r1, 8
/* 80153E30 00150D70  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80153E34 00150D74  90 01 00 08 */	stw r0, 8(r1)
/* 80153E38 00150D78  4B FE 72 B9 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_80153E3C:
/* 80153E3C 00150D7C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80153E40 00150D80  28 00 00 00 */	cmplwi r0, 0
/* 80153E44 00150D84  40 82 00 24 */	bne .L_80153E68
/* 80153E48 00150D88  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153E4C 00150D8C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153E50 00150D90  81 83 00 00 */	lwz r12, 0(r3)
/* 80153E54 00150D94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153E58 00150D98  7D 89 03 A6 */	mtctr r12
/* 80153E5C 00150D9C  4E 80 04 21 */	bctrl 
/* 80153E60 00150DA0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153E64 00150DA4  48 00 00 94 */	b .L_80153EF8
.L_80153E68:
/* 80153E68 00150DA8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153E6C 00150DAC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153E70 00150DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153E74 00150DB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153E78 00150DB8  7D 89 03 A6 */	mtctr r12
/* 80153E7C 00150DBC  4E 80 04 21 */	bctrl 
/* 80153E80 00150DC0  90 61 00 14 */	stw r3, 0x14(r1)
/* 80153E84 00150DC4  48 00 00 58 */	b .L_80153EDC
.L_80153E88:
/* 80153E88 00150DC8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153E8C 00150DCC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153E90 00150DD0  81 83 00 00 */	lwz r12, 0(r3)
/* 80153E94 00150DD4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80153E98 00150DD8  7D 89 03 A6 */	mtctr r12
/* 80153E9C 00150DDC  4E 80 04 21 */	bctrl 
/* 80153EA0 00150DE0  7C 64 1B 78 */	mr r4, r3
/* 80153EA4 00150DE4  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 80153EA8 00150DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80153EAC 00150DEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80153EB0 00150DF0  7D 89 03 A6 */	mtctr r12
/* 80153EB4 00150DF4  4E 80 04 21 */	bctrl 
/* 80153EB8 00150DF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153EBC 00150DFC  40 82 00 3C */	bne .L_80153EF8
/* 80153EC0 00150E00  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153EC4 00150E04  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153EC8 00150E08  81 83 00 00 */	lwz r12, 0(r3)
/* 80153ECC 00150E0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80153ED0 00150E10  7D 89 03 A6 */	mtctr r12
/* 80153ED4 00150E14  4E 80 04 21 */	bctrl 
/* 80153ED8 00150E18  90 61 00 14 */	stw r3, 0x14(r1)
.L_80153EDC:
/* 80153EDC 00150E1C  81 81 00 10 */	lwz r12, 0x10(r1)
/* 80153EE0 00150E20  38 61 00 10 */	addi r3, r1, 0x10
/* 80153EE4 00150E24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80153EE8 00150E28  7D 89 03 A6 */	mtctr r12
/* 80153EEC 00150E2C  4E 80 04 21 */	bctrl 
/* 80153EF0 00150E30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80153EF4 00150E34  41 82 FF 94 */	beq .L_80153E88
.L_80153EF8:
/* 80153EF8 00150E38  80 61 00 18 */	lwz r3, 0x18(r1)
/* 80153EFC 00150E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80153F00 00150E40  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80153F04 00150E44  7D 89 03 A6 */	mtctr r12
/* 80153F08 00150E48  4E 80 04 21 */	bctrl 
/* 80153F0C 00150E4C  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80153F10 00150E50  7C 04 18 40 */	cmplw r4, r3
/* 80153F14 00150E54  40 82 FE A0 */	bne .L_80153DB4
.L_80153F18:
/* 80153F18 00150E58  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80153F1C 00150E5C  38 80 00 00 */	li r4, 0
/* 80153F20 00150E60  48 00 C8 91 */	bl caveSaveFormationPikmins__Q24Game7PikiMgrFb
/* 80153F24 00150E64  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80153F28 00150E68  38 80 00 01 */	li r4, 1
/* 80153F2C 00150E6C  48 00 BD 89 */	bl forceEnterPikmins__Q24Game7PikiMgrFUc
/* 80153F30 00150E70  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 80153F34 00150E74  7F E3 FB 78 */	mr r3, r31
/* 80153F38 00150E78  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80153F3C 00150E7C  80 A5 00 40 */	lwz r5, 0x40(r5)
/* 80153F40 00150E80  C0 05 02 0C */	lfs f0, 0x20c(r5)
/* 80153F44 00150E84  D0 04 00 68 */	stfs f0, 0x68(r4)
/* 80153F48 00150E88  80 9F 02 2C */	lwz r4, 0x22c(r31)
/* 80153F4C 00150E8C  4B FF 98 45 */	bl saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
/* 80153F50 00150E90  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80153F54 00150E94  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80153F58 00150E98  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80153F5C 00150E9C  7C 08 03 A6 */	mtlr r0
/* 80153F60 00150EA0  38 21 00 30 */	addi r1, r1, 0x30
/* 80153F64 00150EA4  4E 80 00 20 */	blr 
.endif

.global loadMainMapSituation__Q24Game17SingleGameSectionFv
loadMainMapSituation__Q24Game17SingleGameSectionFv:
/* 80153F68 00150EA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80153F6C 00150EAC  7C 08 02 A6 */	mflr r0
/* 80153F70 00150EB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80153F74 00150EB4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80153F78 00150EB8  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80153F7C 00150EBC  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80153F80 00150EC0  C0 24 00 68 */	lfs f1, 0x68(r4)
/* 80153F84 00150EC4  4B FD 31 1D */	bl setTime__Q24Game7TimeMgrFf
/* 80153F88 00150EC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80153F8C 00150ECC  7C 08 03 A6 */	mtlr r0
/* 80153F90 00150ED0  38 21 00 10 */	addi r1, r1, 0x10
/* 80153F94 00150ED4  4E 80 00 20 */	blr 

.if version == 1
.global clearCaveMenus__Q24Game17SingleGameSectionFv
clearCaveMenus__Q24Game17SingleGameSectionFv:
/* 80153F98 00150ED8  38 00 00 00 */	li r0, 0
/* 80153F9C 00150EDC  98 03 01 80 */	stb r0, 0x1a4(r3)
/* 80153FA0 00150EE0  90 03 01 84 */	stw r0, 0x1a8(r3)
/* 80153FA4 00150EE4  90 03 01 88 */	stw r0, 0x1ac(r3)
/* 80153FA8 00150EE8  90 03 01 8C */	stw r0, 0x1b0(r3)
/* 80153FAC 00150EEC  4E 80 00 20 */	blr 
.else
.global clearCaveMenus__Q24Game17SingleGameSectionFv
clearCaveMenus__Q24Game17SingleGameSectionFv:
/* 80153F98 00150ED8  38 00 00 00 */	li r0, 0
/* 80153F9C 00150EDC  98 03 01 80 */	stb r0, 0x180(r3)
/* 80153FA0 00150EE0  90 03 01 84 */	stw r0, 0x184(r3)
/* 80153FA4 00150EE4  90 03 01 88 */	stw r0, 0x188(r3)
/* 80153FA8 00150EE8  90 03 01 8C */	stw r0, 0x18c(r3)
/* 80153FAC 00150EEC  4E 80 00 20 */	blr 
.endif

.if version == 1
.global openCaveInMenu__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Itemi
openCaveInMenu__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Itemi:
/* 80153FB0 00150EF0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80153FB4 00150EF4  7C 08 02 A6 */	mflr r0
/* 80153FB8 00150EF8  90 01 00 64 */	stw r0, 0x64(r1)
/* 80153FBC 00150EFC  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 80153FC0 00150F00  7C 9C 23 78 */	mr r28, r4
/* 80153FC4 00150F04  7C 7B 1B 78 */	mr r27, r3
/* 80153FC8 00150F08  7C BD 2B 78 */	mr r29, r5
/* 80153FCC 00150F0C  3B E0 00 00 */	li r31, 0
/* 80153FD0 00150F10  80 84 01 F0 */	lwz r4, 0x1f0(r4)
/* 80153FD4 00150F14  3C 04 86 A1 */	subis r0, r4, 0x795f
/* 80153FD8 00150F18  28 00 30 34 */	cmplwi r0, 0x3034
/* 80153FDC 00150F1C  40 82 00 08 */	bne .L_80153FE4
/* 80153FE0 00150F20  3B E0 00 01 */	li r31, 1
.L_80153FE4:
/* 80153FE4 00150F24  88 1B 01 94 */	lbz r0, 0x1b8(r27)
/* 80153FE8 00150F28  28 00 00 00 */	cmplwi r0, 0
/* 80153FEC 00150F2C  40 82 03 C8 */	bne .L_801543B4
/* 80153FF0 00150F30  88 1B 01 80 */	lbz r0, 0x1a4(r27)
/* 80153FF4 00150F34  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80153FF8 00150F38  40 82 03 BC */	bne .L_801543B4
/* 80153FFC 00150F3C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80154000 00150F40  90 9B 01 90 */	stw r4, 0x1b4(r27)
/* 80154004 00150F44  39 00 00 00 */	li r8, 0
/* 80154008 00150F48  38 80 00 01 */	li r4, 1
/* 8015400C 00150F4C  39 23 11 48 */	addi r9, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80154010 00150F50  91 01 00 38 */	stw r8, 0x38(r1)
/* 80154014 00150F54  3C E0 80 4B */	lis r7, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 80154018 00150F58  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 8015401C 00150F5C  38 03 30 31 */	addi r0, r3, 0x745F3031@l
/* 80154020 00150F60  38 C0 00 18 */	li r6, 0x18
/* 80154024 00150F64  38 A0 00 45 */	li r5, 0x45
/* 80154028 00150F68  91 21 00 18 */	stw r9, 0x18(r1)
/* 8015402C 00150F6C  38 E7 11 30 */	addi r7, r7, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 80154030 00150F70  7F 83 E3 78 */	mr r3, r28
/* 80154034 00150F74  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80154038 00150F78  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8015403C 00150F7C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80154040 00150F80  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80154044 00150F84  98 81 00 37 */	stb r4, 0x37(r1)
/* 80154048 00150F88  90 81 00 28 */	stw r4, 0x28(r1)
/* 8015404C 00150F8C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80154050 00150F90  90 01 00 30 */	stw r0, 0x30(r1)
/* 80154054 00150F94  99 01 00 34 */	stb r8, 0x34(r1)
/* 80154058 00150F98  99 01 00 35 */	stb r8, 0x35(r1)
/* 8015405C 00150F9C  91 01 00 38 */	stw r8, 0x38(r1)
/* 80154060 00150FA0  48 09 6E A5 */	bl getCaveOtakaraNum__Q34Game8ItemCave4ItemFv
/* 80154064 00150FA4  90 61 00 20 */	stw r3, 0x20(r1)
/* 80154068 00150FA8  7F 83 E3 78 */	mr r3, r28
/* 8015406C 00150FAC  48 09 6E F9 */	bl getCaveOtakaraMax__Q34Game8ItemCave4ItemFv
/* 80154070 00150FB0  90 61 00 24 */	stw r3, 0x24(r1)
/* 80154074 00150FB4  38 60 FF FF */	li r3, -1
/* 80154078 00150FB8  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 8015407C 00150FBC  88 04 00 2F */	lbz r0, 0x2f(r4)
/* 80154080 00150FC0  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 80154084 00150FC4  98 01 00 35 */	stb r0, 0x35(r1)
/* 80154088 00150FC8  48 07 CD D9 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8015408C 00150FCC  7C 7E 1B 78 */	mr r30, r3
/* 80154090 00150FD0  38 60 FF FF */	li r3, -1
/* 80154094 00150FD4  48 07 CE 59 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80154098 00150FD8  38 80 00 00 */	li r4, 0
/* 8015409C 00150FDC  80 0D 92 F4 */	lwz r0, pikiMgr__4Game@sda21(r13)
/* 801540A0 00150FE0  3C A0 80 4B */	lis r5, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 801540A4 00150FE4  7C C3 F0 50 */	subf r6, r3, r30
/* 801540A8 00150FE8  38 65 BC 9C */	addi r3, r5, "__vt__22Iterator<Q24Game4Piki>"@l
/* 801540AC 00150FEC  28 04 00 00 */	cmplwi r4, 0
/* 801540B0 00150FF0  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801540B4 00150FF4  3B C0 00 00 */	li r30, 0
/* 801540B8 00150FF8  90 61 00 08 */	stw r3, 8(r1)
/* 801540BC 00150FFC  90 81 00 14 */	stw r4, 0x14(r1)
/* 801540C0 00151000  90 81 00 0C */	stw r4, 0xc(r1)
/* 801540C4 00151004  90 01 00 10 */	stw r0, 0x10(r1)
/* 801540C8 00151008  40 82 00 20 */	bne .L_801540E8
/* 801540CC 0015100C  7C 03 03 78 */	mr r3, r0
/* 801540D0 00151010  81 83 00 00 */	lwz r12, 0(r3)
/* 801540D4 00151014  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801540D8 00151018  7D 89 03 A6 */	mtctr r12
/* 801540DC 0015101C  4E 80 04 21 */	bctrl 
/* 801540E0 00151020  90 61 00 0C */	stw r3, 0xc(r1)
/* 801540E4 00151024  48 00 01 F0 */	b .L_801542D4
.L_801540E8:
/* 801540E8 00151028  7C 03 03 78 */	mr r3, r0
/* 801540EC 0015102C  81 83 00 00 */	lwz r12, 0(r3)
/* 801540F0 00151030  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801540F4 00151034  7D 89 03 A6 */	mtctr r12
/* 801540F8 00151038  4E 80 04 21 */	bctrl 
/* 801540FC 0015103C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80154100 00151040  48 00 00 58 */	b .L_80154158
.L_80154104:
/* 80154104 00151044  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154108 00151048  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015410C 0015104C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154110 00151050  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80154114 00151054  7D 89 03 A6 */	mtctr r12
/* 80154118 00151058  4E 80 04 21 */	bctrl 
/* 8015411C 0015105C  7C 64 1B 78 */	mr r4, r3
/* 80154120 00151060  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80154124 00151064  81 83 00 00 */	lwz r12, 0(r3)
/* 80154128 00151068  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015412C 0015106C  7D 89 03 A6 */	mtctr r12
/* 80154130 00151070  4E 80 04 21 */	bctrl 
/* 80154134 00151074  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154138 00151078  40 82 01 9C */	bne .L_801542D4
/* 8015413C 0015107C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154140 00151080  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80154144 00151084  81 83 00 00 */	lwz r12, 0(r3)
/* 80154148 00151088  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8015414C 0015108C  7D 89 03 A6 */	mtctr r12
/* 80154150 00151090  4E 80 04 21 */	bctrl 
/* 80154154 00151094  90 61 00 0C */	stw r3, 0xc(r1)
.L_80154158:
/* 80154158 00151098  81 81 00 08 */	lwz r12, 8(r1)
/* 8015415C 0015109C  38 61 00 08 */	addi r3, r1, 8
/* 80154160 001510A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80154164 001510A4  7D 89 03 A6 */	mtctr r12
/* 80154168 001510A8  4E 80 04 21 */	bctrl 
/* 8015416C 001510AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154170 001510B0  41 82 FF 94 */	beq .L_80154104
/* 80154174 001510B4  48 00 01 60 */	b .L_801542D4
.L_80154178:
/* 80154178 001510B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8015417C 001510BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80154180 001510C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80154184 001510C4  7D 89 03 A6 */	mtctr r12
/* 80154188 001510C8  4E 80 04 21 */	bctrl 
/* 8015418C 001510CC  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 80154190 001510D0  7C 7A 1B 78 */	mr r26, r3
/* 80154194 001510D4  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80154198 001510D8  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8015419C 001510DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801541A0 001510E0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801541A4 001510E4  7D 89 03 A6 */	mtctr r12
/* 801541A8 001510E8  4E 80 04 21 */	bctrl 
/* 801541AC 001510EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801541B0 001510F0  41 82 00 68 */	beq .L_80154218
/* 801541B4 001510F4  7F 43 D3 78 */	mr r3, r26
/* 801541B8 001510F8  4B FF 3C 91 */	bl getCurrActionID__Q24Game4PikiFv
/* 801541BC 001510FC  2C 03 00 00 */	cmpwi r3, 0
/* 801541C0 00151100  40 82 00 58 */	bne .L_80154218
/* 801541C4 00151104  7F 43 D3 78 */	mr r3, r26
/* 801541C8 00151108  4B FF 4D 6D */	bl getStateID__Q24Game4PikiFv
/* 801541CC 0015110C  2C 03 00 06 */	cmpwi r3, 6
/* 801541D0 00151110  41 82 00 48 */	beq .L_80154218
/* 801541D4 00151114  2C 03 00 12 */	cmpwi r3, 0x12
/* 801541D8 00151118  41 82 00 40 */	beq .L_80154218
/* 801541DC 0015111C  80 7A 02 C4 */	lwz r3, 0x2c4(r26)
/* 801541E0 00151120  28 03 00 00 */	cmplwi r3, 0
/* 801541E4 00151124  41 82 00 34 */	beq .L_80154218
/* 801541E8 00151128  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 801541EC 0015112C  7C 1D 00 00 */	cmpw r29, r0
/* 801541F0 00151130  40 82 00 28 */	bne .L_80154218
/* 801541F4 00151134  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801541F8 00151138  41 82 00 10 */	beq .L_80154208
/* 801541FC 0015113C  88 1A 02 B8 */	lbz r0, 0x2b8(r26)
/* 80154200 00151140  2C 00 00 00 */	cmpwi r0, 0
/* 80154204 00151144  40 82 00 14 */	bne .L_80154218
.L_80154208:
/* 80154208 00151148  80 1A 01 7C */	lwz r0, 0x17c(r26)
/* 8015420C 0015114C  3B DE 00 01 */	addi r30, r30, 1
/* 80154210 00151150  60 00 00 40 */	ori r0, r0, 0x40
/* 80154214 00151154  90 1A 01 7C */	stw r0, 0x17c(r26)
.L_80154218:
/* 80154218 00151158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015421C 0015115C  28 00 00 00 */	cmplwi r0, 0
/* 80154220 00151160  40 82 00 24 */	bne .L_80154244
/* 80154224 00151164  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154228 00151168  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015422C 0015116C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154230 00151170  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80154234 00151174  7D 89 03 A6 */	mtctr r12
/* 80154238 00151178  4E 80 04 21 */	bctrl 
/* 8015423C 0015117C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80154240 00151180  48 00 00 94 */	b .L_801542D4
.L_80154244:
/* 80154244 00151184  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154248 00151188  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015424C 0015118C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154250 00151190  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80154254 00151194  7D 89 03 A6 */	mtctr r12
/* 80154258 00151198  4E 80 04 21 */	bctrl 
/* 8015425C 0015119C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80154260 001511A0  48 00 00 58 */	b .L_801542B8
.L_80154264:
/* 80154264 001511A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154268 001511A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015426C 001511AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80154270 001511B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80154274 001511B4  7D 89 03 A6 */	mtctr r12
/* 80154278 001511B8  4E 80 04 21 */	bctrl 
/* 8015427C 001511BC  7C 64 1B 78 */	mr r4, r3
/* 80154280 001511C0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80154284 001511C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80154288 001511C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015428C 001511CC  7D 89 03 A6 */	mtctr r12
/* 80154290 001511D0  4E 80 04 21 */	bctrl 
/* 80154294 001511D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154298 001511D8  40 82 00 3C */	bne .L_801542D4
/* 8015429C 001511DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801542A0 001511E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801542A4 001511E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801542A8 001511E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801542AC 001511EC  7D 89 03 A6 */	mtctr r12
/* 801542B0 001511F0  4E 80 04 21 */	bctrl 
/* 801542B4 001511F4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801542B8:
/* 801542B8 001511F8  81 81 00 08 */	lwz r12, 8(r1)
/* 801542BC 001511FC  38 61 00 08 */	addi r3, r1, 8
/* 801542C0 00151200  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801542C4 00151204  7D 89 03 A6 */	mtctr r12
/* 801542C8 00151208  4E 80 04 21 */	bctrl 
/* 801542CC 0015120C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801542D0 00151210  41 82 FF 94 */	beq .L_80154264
.L_801542D4:
/* 801542D4 00151214  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801542D8 00151218  81 83 00 00 */	lwz r12, 0(r3)
/* 801542DC 0015121C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801542E0 00151220  7D 89 03 A6 */	mtctr r12
/* 801542E4 00151224  4E 80 04 21 */	bctrl 
/* 801542E8 00151228  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801542EC 0015122C  7C 04 18 40 */	cmplw r4, r3
/* 801542F0 00151230  40 82 FE 88 */	bne .L_80154178
/* 801542F4 00151234  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801542F8 00151238  38 81 00 18 */	addi r4, r1, 0x18
/* 801542FC 0015123C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80154300 00151240  80 1B 01 90 */	lwz r0, 0x1b4(r27)
/* 80154304 00151244  90 01 00 30 */	stw r0, 0x30(r1)
/* 80154308 00151248  48 2A 99 49 */	bl open_CaveInMenu__Q26Screen9Game2DMgrFRQ32og6Screen17DispMemberAnaDemo
/* 8015430C 0015124C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154310 00151250  41 82 00 A4 */	beq .L_801543B4
/* 80154314 00151254  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80154318 00151258  38 80 00 03 */	li r4, 3
/* 8015431C 0015125C  38 00 00 00 */	li r0, 0
/* 80154320 00151260  7F 63 DB 78 */	mr r3, r27
/* 80154324 00151264  98 85 00 19 */	stb r4, 0x19(r5)
/* 80154328 00151268  90 05 00 1C */	stw r0, 0x1c(r5)
/* 8015432C 0015126C  81 9B 00 00 */	lwz r12, 0(r27)
/* 80154330 00151270  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80154334 00151274  7D 89 03 A6 */	mtctr r12
/* 80154338 00151278  4E 80 04 21 */	bctrl 
/* 8015433C 0015127C  7C 64 1B 78 */	mr r4, r3
/* 80154340 00151280  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154344 00151284  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80154348 00151288  48 09 31 25 */	bl setCurrentCourse__Q24Game8PlayDataFi
/* 8015434C 0015128C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154350 00151290  38 9C 01 E8 */	addi r4, r28, 0x1e8
/* 80154354 00151294  38 A0 00 00 */	li r5, 0
/* 80154358 00151298  48 09 31 29 */	bl setCurrentCave__Q24Game8PlayDataFR4ID32i
/* 8015435C 0015129C  7F 63 DB 78 */	mr r3, r27
/* 80154360 001512A0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80154364 001512A4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80154368 001512A8  7D 89 03 A6 */	mtctr r12
/* 8015436C 001512AC  4E 80 04 21 */	bctrl 
/* 80154370 001512B0  38 9C 01 E8 */	addi r4, r28, 0x1e8
/* 80154374 001512B4  48 05 98 2D */	bl getCaveinfoFilename_FromID__Q24Game10CourseInfoFR4ID32
/* 80154378 001512B8  93 9B 01 84 */	stw r28, 0x1a8(r27)
/* 8015437C 001512BC  3C 60 80 48 */	lis r3, lbl_8047CF34@ha
/* 80154380 001512C0  38 A3 CF 34 */	addi r5, r3, lbl_8047CF34@l
/* 80154384 001512C4  38 80 00 01 */	li r4, 1
/* 80154388 001512C8  88 1B 01 80 */	lbz r0, 0x1a4(r27)
/* 8015438C 001512CC  38 C0 00 03 */	li r6, 3
/* 80154390 001512D0  60 00 00 01 */	ori r0, r0, 1
/* 80154394 001512D4  98 1B 01 80 */	stb r0, 0x1a4(r27)
/* 80154398 001512D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015439C 001512DC  48 06 0B F9 */	bl setPause__Q24Game10GameSystemFbPci
/* 801543A0 001512E0  3C 80 80 48 */	lis r4, lbl_8047CF34@ha
/* 801543A4 001512E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801543A8 001512E8  38 A4 CF 34 */	addi r5, r4, lbl_8047CF34@l
/* 801543AC 001512EC  38 80 00 01 */	li r4, 1
/* 801543B0 001512F0  48 06 0B D5 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_801543B4:
/* 801543B4 001512F4  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 801543B8 001512F8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801543BC 001512FC  7C 08 03 A6 */	mtlr r0
/* 801543C0 00151300  38 21 00 60 */	addi r1, r1, 0x60
/* 801543C4 00151304  4E 80 00 20 */	blr 
.else
.global openCaveInMenu__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Itemi
openCaveInMenu__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Itemi:
/* 80153FB0 00150EF0  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80153FB4 00150EF4  7C 08 02 A6 */	mflr r0
/* 80153FB8 00150EF8  90 01 00 64 */	stw r0, 0x64(r1)
/* 80153FBC 00150EFC  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 80153FC0 00150F00  7C 9C 23 78 */	mr r28, r4
/* 80153FC4 00150F04  7C 7B 1B 78 */	mr r27, r3
/* 80153FC8 00150F08  7C BD 2B 78 */	mr r29, r5
/* 80153FCC 00150F0C  3B E0 00 00 */	li r31, 0
/* 80153FD0 00150F10  80 84 01 F0 */	lwz r4, 0x1f0(r4)
/* 80153FD4 00150F14  3C 04 86 A1 */	subis r0, r4, 0x795f
/* 80153FD8 00150F18  28 00 30 34 */	cmplwi r0, 0x3034
/* 80153FDC 00150F1C  40 82 00 08 */	bne .L_80153FE4
/* 80153FE0 00150F20  3B E0 00 01 */	li r31, 1
.L_80153FE4:
/* 80153FE4 00150F24  88 1B 01 94 */	lbz r0, 0x194(r27)
/* 80153FE8 00150F28  28 00 00 00 */	cmplwi r0, 0
/* 80153FEC 00150F2C  40 82 03 C8 */	bne .L_801543B4
/* 80153FF0 00150F30  88 1B 01 80 */	lbz r0, 0x180(r27)
/* 80153FF4 00150F34  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80153FF8 00150F38  40 82 03 BC */	bne .L_801543B4
/* 80153FFC 00150F3C  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 80154000 00150F40  90 9B 01 90 */	stw r4, 0x190(r27)
/* 80154004 00150F44  39 00 00 00 */	li r8, 0
/* 80154008 00150F48  38 80 00 01 */	li r4, 1
/* 8015400C 00150F4C  39 23 11 48 */	addi r9, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80154010 00150F50  91 01 00 38 */	stw r8, 0x38(r1)
/* 80154014 00150F54  3C E0 80 4B */	lis r7, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 80154018 00150F58  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 8015401C 00150F5C  38 03 30 31 */	addi r0, r3, 0x745F3031@l
/* 80154020 00150F60  38 C0 00 18 */	li r6, 0x18
/* 80154024 00150F64  38 A0 00 45 */	li r5, 0x45
/* 80154028 00150F68  91 21 00 18 */	stw r9, 0x18(r1)
/* 8015402C 00150F6C  38 E7 11 30 */	addi r7, r7, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 80154030 00150F70  7F 83 E3 78 */	mr r3, r28
/* 80154034 00150F74  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80154038 00150F78  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8015403C 00150F7C  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80154040 00150F80  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80154044 00150F84  98 81 00 37 */	stb r4, 0x37(r1)
/* 80154048 00150F88  90 81 00 28 */	stw r4, 0x28(r1)
/* 8015404C 00150F8C  90 81 00 2C */	stw r4, 0x2c(r1)
/* 80154050 00150F90  90 01 00 30 */	stw r0, 0x30(r1)
/* 80154054 00150F94  99 01 00 34 */	stb r8, 0x34(r1)
/* 80154058 00150F98  99 01 00 35 */	stb r8, 0x35(r1)
/* 8015405C 00150F9C  91 01 00 38 */	stw r8, 0x38(r1)
/* 80154060 00150FA0  48 09 6E A5 */	bl getCaveOtakaraNum__Q34Game8ItemCave4ItemFv
/* 80154064 00150FA4  90 61 00 20 */	stw r3, 0x20(r1)
/* 80154068 00150FA8  7F 83 E3 78 */	mr r3, r28
/* 8015406C 00150FAC  48 09 6E F9 */	bl getCaveOtakaraMax__Q34Game8ItemCave4ItemFv
/* 80154070 00150FB0  90 61 00 24 */	stw r3, 0x24(r1)
/* 80154074 00150FB4  38 60 FF FF */	li r3, -1
/* 80154078 00150FB8  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 8015407C 00150FBC  88 04 00 2F */	lbz r0, 0x2f(r4)
/* 80154080 00150FC0  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 80154084 00150FC4  98 01 00 35 */	stb r0, 0x35(r1)
/* 80154088 00150FC8  48 07 CD D9 */	bl getMapPikmins__Q24Game8GameStatFi
/* 8015408C 00150FCC  7C 7E 1B 78 */	mr r30, r3
/* 80154090 00150FD0  38 60 FF FF */	li r3, -1
/* 80154094 00150FD4  48 07 CE 59 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80154098 00150FD8  38 80 00 00 */	li r4, 0
/* 8015409C 00150FDC  80 0D 92 F4 */	lwz r0, pikiMgr__4Game@sda21(r13)
/* 801540A0 00150FE0  3C A0 80 4B */	lis r5, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 801540A4 00150FE4  7C C3 F0 50 */	subf r6, r3, r30
/* 801540A8 00150FE8  38 65 BC 9C */	addi r3, r5, "__vt__22Iterator<Q24Game4Piki>"@l
/* 801540AC 00150FEC  28 04 00 00 */	cmplwi r4, 0
/* 801540B0 00150FF0  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801540B4 00150FF4  3B C0 00 00 */	li r30, 0
/* 801540B8 00150FF8  90 61 00 08 */	stw r3, 8(r1)
/* 801540BC 00150FFC  90 81 00 14 */	stw r4, 0x14(r1)
/* 801540C0 00151000  90 81 00 0C */	stw r4, 0xc(r1)
/* 801540C4 00151004  90 01 00 10 */	stw r0, 0x10(r1)
/* 801540C8 00151008  40 82 00 20 */	bne .L_801540E8
/* 801540CC 0015100C  7C 03 03 78 */	mr r3, r0
/* 801540D0 00151010  81 83 00 00 */	lwz r12, 0(r3)
/* 801540D4 00151014  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801540D8 00151018  7D 89 03 A6 */	mtctr r12
/* 801540DC 0015101C  4E 80 04 21 */	bctrl 
/* 801540E0 00151020  90 61 00 0C */	stw r3, 0xc(r1)
/* 801540E4 00151024  48 00 01 F0 */	b .L_801542D4
.L_801540E8:
/* 801540E8 00151028  7C 03 03 78 */	mr r3, r0
/* 801540EC 0015102C  81 83 00 00 */	lwz r12, 0(r3)
/* 801540F0 00151030  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801540F4 00151034  7D 89 03 A6 */	mtctr r12
/* 801540F8 00151038  4E 80 04 21 */	bctrl 
/* 801540FC 0015103C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80154100 00151040  48 00 00 58 */	b .L_80154158
.L_80154104:
/* 80154104 00151044  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154108 00151048  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015410C 0015104C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154110 00151050  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80154114 00151054  7D 89 03 A6 */	mtctr r12
/* 80154118 00151058  4E 80 04 21 */	bctrl 
/* 8015411C 0015105C  7C 64 1B 78 */	mr r4, r3
/* 80154120 00151060  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80154124 00151064  81 83 00 00 */	lwz r12, 0(r3)
/* 80154128 00151068  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015412C 0015106C  7D 89 03 A6 */	mtctr r12
/* 80154130 00151070  4E 80 04 21 */	bctrl 
/* 80154134 00151074  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154138 00151078  40 82 01 9C */	bne .L_801542D4
/* 8015413C 0015107C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154140 00151080  80 81 00 0C */	lwz r4, 0xc(r1)
/* 80154144 00151084  81 83 00 00 */	lwz r12, 0(r3)
/* 80154148 00151088  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8015414C 0015108C  7D 89 03 A6 */	mtctr r12
/* 80154150 00151090  4E 80 04 21 */	bctrl 
/* 80154154 00151094  90 61 00 0C */	stw r3, 0xc(r1)
.L_80154158:
/* 80154158 00151098  81 81 00 08 */	lwz r12, 8(r1)
/* 8015415C 0015109C  38 61 00 08 */	addi r3, r1, 8
/* 80154160 001510A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80154164 001510A4  7D 89 03 A6 */	mtctr r12
/* 80154168 001510A8  4E 80 04 21 */	bctrl 
/* 8015416C 001510AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154170 001510B0  41 82 FF 94 */	beq .L_80154104
/* 80154174 001510B4  48 00 01 60 */	b .L_801542D4
.L_80154178:
/* 80154178 001510B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8015417C 001510BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80154180 001510C0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80154184 001510C4  7D 89 03 A6 */	mtctr r12
/* 80154188 001510C8  4E 80 04 21 */	bctrl 
/* 8015418C 001510CC  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 80154190 001510D0  7C 7A 1B 78 */	mr r26, r3
/* 80154194 001510D4  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 80154198 001510D8  90 03 01 7C */	stw r0, 0x17c(r3)
/* 8015419C 001510DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801541A0 001510E0  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801541A4 001510E4  7D 89 03 A6 */	mtctr r12
/* 801541A8 001510E8  4E 80 04 21 */	bctrl 
/* 801541AC 001510EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801541B0 001510F0  41 82 00 68 */	beq .L_80154218
/* 801541B4 001510F4  7F 43 D3 78 */	mr r3, r26
/* 801541B8 001510F8  4B FF 3C 91 */	bl getCurrActionID__Q24Game4PikiFv
/* 801541BC 001510FC  2C 03 00 00 */	cmpwi r3, 0
/* 801541C0 00151100  40 82 00 58 */	bne .L_80154218
/* 801541C4 00151104  7F 43 D3 78 */	mr r3, r26
/* 801541C8 00151108  4B FF 4D 6D */	bl getStateID__Q24Game4PikiFv
/* 801541CC 0015110C  2C 03 00 06 */	cmpwi r3, 6
/* 801541D0 00151110  41 82 00 48 */	beq .L_80154218
/* 801541D4 00151114  2C 03 00 12 */	cmpwi r3, 0x12
/* 801541D8 00151118  41 82 00 40 */	beq .L_80154218
/* 801541DC 0015111C  80 7A 02 C4 */	lwz r3, 0x2c4(r26)
/* 801541E0 00151120  28 03 00 00 */	cmplwi r3, 0
/* 801541E4 00151124  41 82 00 34 */	beq .L_80154218
/* 801541E8 00151128  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 801541EC 0015112C  7C 1D 00 00 */	cmpw r29, r0
/* 801541F0 00151130  40 82 00 28 */	bne .L_80154218
/* 801541F4 00151134  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801541F8 00151138  41 82 00 10 */	beq .L_80154208
/* 801541FC 0015113C  88 1A 02 B8 */	lbz r0, 0x2b8(r26)
/* 80154200 00151140  2C 00 00 00 */	cmpwi r0, 0
/* 80154204 00151144  40 82 00 14 */	bne .L_80154218
.L_80154208:
/* 80154208 00151148  80 1A 01 7C */	lwz r0, 0x17c(r26)
/* 8015420C 0015114C  3B DE 00 01 */	addi r30, r30, 1
/* 80154210 00151150  60 00 00 40 */	ori r0, r0, 0x40
/* 80154214 00151154  90 1A 01 7C */	stw r0, 0x17c(r26)
.L_80154218:
/* 80154218 00151158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015421C 0015115C  28 00 00 00 */	cmplwi r0, 0
/* 80154220 00151160  40 82 00 24 */	bne .L_80154244
/* 80154224 00151164  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154228 00151168  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015422C 0015116C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154230 00151170  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80154234 00151174  7D 89 03 A6 */	mtctr r12
/* 80154238 00151178  4E 80 04 21 */	bctrl 
/* 8015423C 0015117C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80154240 00151180  48 00 00 94 */	b .L_801542D4
.L_80154244:
/* 80154244 00151184  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154248 00151188  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015424C 0015118C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154250 00151190  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80154254 00151194  7D 89 03 A6 */	mtctr r12
/* 80154258 00151198  4E 80 04 21 */	bctrl 
/* 8015425C 0015119C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80154260 001511A0  48 00 00 58 */	b .L_801542B8
.L_80154264:
/* 80154264 001511A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 80154268 001511A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8015426C 001511AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80154270 001511B0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80154274 001511B4  7D 89 03 A6 */	mtctr r12
/* 80154278 001511B8  4E 80 04 21 */	bctrl 
/* 8015427C 001511BC  7C 64 1B 78 */	mr r4, r3
/* 80154280 001511C0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 80154284 001511C4  81 83 00 00 */	lwz r12, 0(r3)
/* 80154288 001511C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015428C 001511CC  7D 89 03 A6 */	mtctr r12
/* 80154290 001511D0  4E 80 04 21 */	bctrl 
/* 80154294 001511D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154298 001511D8  40 82 00 3C */	bne .L_801542D4
/* 8015429C 001511DC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801542A0 001511E0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801542A4 001511E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801542A8 001511E8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801542AC 001511EC  7D 89 03 A6 */	mtctr r12
/* 801542B0 001511F0  4E 80 04 21 */	bctrl 
/* 801542B4 001511F4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801542B8:
/* 801542B8 001511F8  81 81 00 08 */	lwz r12, 8(r1)
/* 801542BC 001511FC  38 61 00 08 */	addi r3, r1, 8
/* 801542C0 00151200  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801542C4 00151204  7D 89 03 A6 */	mtctr r12
/* 801542C8 00151208  4E 80 04 21 */	bctrl 
/* 801542CC 0015120C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801542D0 00151210  41 82 FF 94 */	beq .L_80154264
.L_801542D4:
/* 801542D4 00151214  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801542D8 00151218  81 83 00 00 */	lwz r12, 0(r3)
/* 801542DC 0015121C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801542E0 00151220  7D 89 03 A6 */	mtctr r12
/* 801542E4 00151224  4E 80 04 21 */	bctrl 
/* 801542E8 00151228  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801542EC 0015122C  7C 04 18 40 */	cmplw r4, r3
/* 801542F0 00151230  40 82 FE 88 */	bne .L_80154178
/* 801542F4 00151234  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801542F8 00151238  38 81 00 18 */	addi r4, r1, 0x18
/* 801542FC 0015123C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80154300 00151240  80 1B 01 90 */	lwz r0, 0x190(r27)
/* 80154304 00151244  90 01 00 30 */	stw r0, 0x30(r1)
/* 80154308 00151248  48 2A 99 49 */	bl open_CaveInMenu__Q26Screen9Game2DMgrFRQ32og6Screen17DispMemberAnaDemo
/* 8015430C 0015124C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80154310 00151250  41 82 00 A4 */	beq .L_801543B4
/* 80154314 00151254  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80154318 00151258  38 80 00 03 */	li r4, 3
/* 8015431C 0015125C  38 00 00 00 */	li r0, 0
/* 80154320 00151260  7F 63 DB 78 */	mr r3, r27
/* 80154324 00151264  98 85 00 19 */	stb r4, 0x19(r5)
/* 80154328 00151268  90 05 00 1C */	stw r0, 0x1c(r5)
/* 8015432C 0015126C  81 9B 00 00 */	lwz r12, 0(r27)
/* 80154330 00151270  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80154334 00151274  7D 89 03 A6 */	mtctr r12
/* 80154338 00151278  4E 80 04 21 */	bctrl 
/* 8015433C 0015127C  7C 64 1B 78 */	mr r4, r3
/* 80154340 00151280  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154344 00151284  80 84 00 48 */	lwz r4, 0x48(r4)
/* 80154348 00151288  48 09 31 25 */	bl setCurrentCourse__Q24Game8PlayDataFi
/* 8015434C 0015128C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154350 00151290  38 9C 01 E8 */	addi r4, r28, 0x1e8
/* 80154354 00151294  38 A0 00 00 */	li r5, 0
/* 80154358 00151298  48 09 31 29 */	bl setCurrentCave__Q24Game8PlayDataFR4ID32i
/* 8015435C 0015129C  7F 63 DB 78 */	mr r3, r27
/* 80154360 001512A0  81 9B 00 00 */	lwz r12, 0(r27)
/* 80154364 001512A4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80154368 001512A8  7D 89 03 A6 */	mtctr r12
/* 8015436C 001512AC  4E 80 04 21 */	bctrl 
/* 80154370 001512B0  38 9C 01 E8 */	addi r4, r28, 0x1e8
/* 80154374 001512B4  48 05 98 2D */	bl getCaveinfoFilename_FromID__Q24Game10CourseInfoFR4ID32
/* 80154378 001512B8  93 9B 01 84 */	stw r28, 0x184(r27)
/* 8015437C 001512BC  3C 60 80 48 */	lis r3, lbl_8047CF34@ha
/* 80154380 001512C0  38 A3 CF 34 */	addi r5, r3, lbl_8047CF34@l
/* 80154384 001512C4  38 80 00 01 */	li r4, 1
/* 80154388 001512C8  88 1B 01 80 */	lbz r0, 0x180(r27)
/* 8015438C 001512CC  38 C0 00 03 */	li r6, 3
/* 80154390 001512D0  60 00 00 01 */	ori r0, r0, 1
/* 80154394 001512D4  98 1B 01 80 */	stb r0, 0x180(r27)
/* 80154398 001512D8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015439C 001512DC  48 06 0B F9 */	bl setPause__Q24Game10GameSystemFbPci
/* 801543A0 001512E0  3C 80 80 48 */	lis r4, lbl_8047CF34@ha
/* 801543A4 001512E4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801543A8 001512E8  38 A4 CF 34 */	addi r5, r4, lbl_8047CF34@l
/* 801543AC 001512EC  38 80 00 01 */	li r4, 1
/* 801543B0 001512F0  48 06 0B D5 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_801543B4:
/* 801543B4 001512F4  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 801543B8 001512F8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 801543BC 001512FC  7C 08 03 A6 */	mtlr r0
/* 801543C0 00151300  38 21 00 60 */	addi r1, r1, 0x60
/* 801543C4 00151304  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getCurrentCourseInfo__Q24Game17SingleGameSectionFv
getCurrentCourseInfo__Q24Game17SingleGameSectionFv:
/* 801543C8 00151308  80 63 02 2C */	lwz r3, 0x250(r3)
/* 801543CC 0015130C  4E 80 00 20 */	blr 
.else
.global getCurrentCourseInfo__Q24Game17SingleGameSectionFv
getCurrentCourseInfo__Q24Game17SingleGameSectionFv:
/* 801543C8 00151308  80 63 02 2C */	lwz r3, 0x22c(r3)
/* 801543CC 0015130C  4E 80 00 20 */	blr 
.endif

.if version == 1
.global openCaveMoreMenu__Q24Game17SingleGameSectionFPQ34Game8ItemHole4ItemP10Controller
openCaveMoreMenu__Q24Game17SingleGameSectionFPQ34Game8ItemHole4ItemP10Controller:
/* 801543D0 00151310  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801543D4 00151314  7C 08 02 A6 */	mflr r0
/* 801543D8 00151318  90 01 00 44 */	stw r0, 0x44(r1)
/* 801543DC 0015131C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801543E0 00151320  7C 9F 23 78 */	mr r31, r4
/* 801543E4 00151324  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801543E8 00151328  7C 7E 1B 78 */	mr r30, r3
/* 801543EC 0015132C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801543F0 00151330  88 03 01 94 */	lbz r0, 0x1b8(r3)
/* 801543F4 00151334  28 00 00 00 */	cmplwi r0, 0
/* 801543F8 00151338  40 82 01 58 */	bne .L_80154550
/* 801543FC 0015133C  88 1E 01 80 */	lbz r0, 0x1a4(r30)
/* 80154400 00151340  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80154404 00151344  40 82 01 4C */	bne .L_80154550
/* 80154408 00151348  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8015440C 0015134C  39 20 00 00 */	li r9, 0
/* 80154410 00151350  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80154414 00151354  38 E0 00 01 */	li r7, 1
/* 80154418 00151358  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 8015441C 0015135C  90 01 00 08 */	stw r0, 8(r1)
/* 80154420 00151360  38 A3 11 30 */	addi r5, r3, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 80154424 00151364  38 00 00 18 */	li r0, 0x18
/* 80154428 00151368  39 00 00 45 */	li r8, 0x45
/* 8015442C 0015136C  91 21 00 28 */	stw r9, 0x28(r1)
/* 80154430 00151370  3C 80 74 5F */	lis r4, 0x745F3031@ha
/* 80154434 00151374  3C 60 80 4B */	lis r3, __vt__Q32og6Screen18DispMemberCaveMore@ha
/* 80154438 00151378  38 C4 30 31 */	addi r6, r4, 0x745F3031@l
/* 8015443C 0015137C  90 A1 00 08 */	stw r5, 8(r1)
/* 80154440 00151380  38 A3 11 18 */	addi r5, r3, __vt__Q32og6Screen18DispMemberCaveMore@l
/* 80154444 00151384  38 80 00 04 */	li r4, 4
/* 80154448 00151388  90 01 00 10 */	stw r0, 0x10(r1)
/* 8015444C 0015138C  38 00 00 0A */	li r0, 0xa
/* 80154450 00151390  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 80154454 00151394  91 01 00 14 */	stw r8, 0x14(r1)
/* 80154458 00151398  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8015445C 0015139C  91 21 00 0C */	stw r9, 0xc(r1)
/* 80154460 001513A0  98 E1 00 27 */	stb r7, 0x27(r1)
/* 80154464 001513A4  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80154468 001513A8  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8015446C 001513AC  99 21 00 24 */	stb r9, 0x24(r1)
/* 80154470 001513B0  99 21 00 25 */	stb r9, 0x25(r1)
/* 80154474 001513B4  90 A1 00 08 */	stw r5, 8(r1)
/* 80154478 001513B8  99 21 00 2C */	stb r9, 0x2c(r1)
/* 8015447C 001513BC  99 21 00 2D */	stb r9, 0x2d(r1)
/* 80154480 001513C0  91 21 00 28 */	stw r9, 0x28(r1)
/* 80154484 001513C4  90 81 00 10 */	stw r4, 0x10(r1)
/* 80154488 001513C8  90 81 00 14 */	stw r4, 0x14(r1)
/* 8015448C 001513CC  90 01 00 18 */	stw r0, 0x18(r1)
/* 80154490 001513D0  80 1E 01 90 */	lwz r0, 0x1b4(r30)
/* 80154494 001513D4  90 01 00 20 */	stw r0, 0x20(r1)
/* 80154498 001513D8  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 8015449C 001513DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801544A0 001513E0  7D 89 03 A6 */	mtctr r12
/* 801544A4 001513E4  4E 80 04 21 */	bctrl 
/* 801544A8 001513E8  7C 7D 1B 79 */	or. r29, r3, r3
/* 801544AC 001513EC  40 81 00 34 */	ble .L_801544E0
/* 801544B0 001513F0  38 00 00 01 */	li r0, 1
/* 801544B4 001513F4  38 60 FF FF */	li r3, -1
/* 801544B8 001513F8  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801544BC 001513FC  48 07 C9 A5 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801544C0 00151400  7C 1D 18 00 */	cmpw r29, r3
/* 801544C4 00151404  40 82 00 10 */	bne .L_801544D4
/* 801544C8 00151408  38 00 00 01 */	li r0, 1
/* 801544CC 0015140C  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801544D0 00151410  48 00 00 1C */	b .L_801544EC
.L_801544D4:
/* 801544D4 00151414  38 00 00 00 */	li r0, 0
/* 801544D8 00151418  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801544DC 0015141C  48 00 00 10 */	b .L_801544EC
.L_801544E0:
/* 801544E0 00151420  38 00 00 00 */	li r0, 0
/* 801544E4 00151424  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801544E8 00151428  98 01 00 2C */	stb r0, 0x2c(r1)
.L_801544EC:
/* 801544EC 0015142C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801544F0 00151430  38 81 00 08 */	addi r4, r1, 8
/* 801544F4 00151434  48 2A 9B 49 */	bl open_CaveMoreMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberCaveMore
/* 801544F8 00151438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801544FC 0015143C  41 82 00 54 */	beq .L_80154550
/* 80154500 00151440  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 80154504 00151444  38 80 00 03 */	li r4, 3
/* 80154508 00151448  3C 60 80 48 */	lis r3, lbl_8047CF40@ha
/* 8015450C 0015144C  38 00 00 00 */	li r0, 0
/* 80154510 00151450  98 86 00 19 */	stb r4, 0x19(r6)
/* 80154514 00151454  38 A3 CF 40 */	addi r5, r3, lbl_8047CF40@l
/* 80154518 00151458  38 80 00 01 */	li r4, 1
/* 8015451C 0015145C  90 06 00 1C */	stw r0, 0x1c(r6)
/* 80154520 00151460  38 C0 00 03 */	li r6, 3
/* 80154524 00151464  93 FE 01 88 */	stw r31, 0x1ac(r30)
/* 80154528 00151468  88 1E 01 80 */	lbz r0, 0x1a4(r30)
/* 8015452C 0015146C  60 00 00 02 */	ori r0, r0, 2
/* 80154530 00151470  98 1E 01 80 */	stb r0, 0x1a4(r30)
/* 80154534 00151474  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154538 00151478  48 06 0A 5D */	bl setPause__Q24Game10GameSystemFbPci
/* 8015453C 0015147C  3C 80 80 48 */	lis r4, lbl_8047CF40@ha
/* 80154540 00151480  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154544 00151484  38 A4 CF 40 */	addi r5, r4, lbl_8047CF40@l
/* 80154548 00151488  38 80 00 01 */	li r4, 1
/* 8015454C 0015148C  48 06 0A 39 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_80154550:
/* 80154550 00151490  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80154554 00151494  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80154558 00151498  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8015455C 0015149C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80154560 001514A0  7C 08 03 A6 */	mtlr r0
/* 80154564 001514A4  38 21 00 40 */	addi r1, r1, 0x40
/* 80154568 001514A8  4E 80 00 20 */	blr 
.else
.global openCaveMoreMenu__Q24Game17SingleGameSectionFPQ34Game8ItemHole4ItemP10Controller
openCaveMoreMenu__Q24Game17SingleGameSectionFPQ34Game8ItemHole4ItemP10Controller:
/* 801543D0 00151310  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801543D4 00151314  7C 08 02 A6 */	mflr r0
/* 801543D8 00151318  90 01 00 44 */	stw r0, 0x44(r1)
/* 801543DC 0015131C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801543E0 00151320  7C 9F 23 78 */	mr r31, r4
/* 801543E4 00151324  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801543E8 00151328  7C 7E 1B 78 */	mr r30, r3
/* 801543EC 0015132C  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801543F0 00151330  88 03 01 94 */	lbz r0, 0x194(r3)
/* 801543F4 00151334  28 00 00 00 */	cmplwi r0, 0
/* 801543F8 00151338  40 82 01 58 */	bne .L_80154550
/* 801543FC 0015133C  88 1E 01 80 */	lbz r0, 0x180(r30)
/* 80154400 00151340  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80154404 00151344  40 82 01 4C */	bne .L_80154550
/* 80154408 00151348  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 8015440C 0015134C  39 20 00 00 */	li r9, 0
/* 80154410 00151350  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 80154414 00151354  38 E0 00 01 */	li r7, 1
/* 80154418 00151358  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 8015441C 0015135C  90 01 00 08 */	stw r0, 8(r1)
/* 80154420 00151360  38 A3 11 30 */	addi r5, r3, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 80154424 00151364  38 00 00 18 */	li r0, 0x18
/* 80154428 00151368  39 00 00 45 */	li r8, 0x45
/* 8015442C 0015136C  91 21 00 28 */	stw r9, 0x28(r1)
/* 80154430 00151370  3C 80 74 5F */	lis r4, 0x745F3031@ha
/* 80154434 00151374  3C 60 80 4B */	lis r3, __vt__Q32og6Screen18DispMemberCaveMore@ha
/* 80154438 00151378  38 C4 30 31 */	addi r6, r4, 0x745F3031@l
/* 8015443C 0015137C  90 A1 00 08 */	stw r5, 8(r1)
/* 80154440 00151380  38 A3 11 18 */	addi r5, r3, __vt__Q32og6Screen18DispMemberCaveMore@l
/* 80154444 00151384  38 80 00 04 */	li r4, 4
/* 80154448 00151388  90 01 00 10 */	stw r0, 0x10(r1)
/* 8015444C 0015138C  38 00 00 0A */	li r0, 0xa
/* 80154450 00151390  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 80154454 00151394  91 01 00 14 */	stw r8, 0x14(r1)
/* 80154458 00151398  90 E1 00 18 */	stw r7, 0x18(r1)
/* 8015445C 0015139C  91 21 00 0C */	stw r9, 0xc(r1)
/* 80154460 001513A0  98 E1 00 27 */	stb r7, 0x27(r1)
/* 80154464 001513A4  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80154468 001513A8  90 C1 00 20 */	stw r6, 0x20(r1)
/* 8015446C 001513AC  99 21 00 24 */	stb r9, 0x24(r1)
/* 80154470 001513B0  99 21 00 25 */	stb r9, 0x25(r1)
/* 80154474 001513B4  90 A1 00 08 */	stw r5, 8(r1)
/* 80154478 001513B8  99 21 00 2C */	stb r9, 0x2c(r1)
/* 8015447C 001513BC  99 21 00 2D */	stb r9, 0x2d(r1)
/* 80154480 001513C0  91 21 00 28 */	stw r9, 0x28(r1)
/* 80154484 001513C4  90 81 00 10 */	stw r4, 0x10(r1)
/* 80154488 001513C8  90 81 00 14 */	stw r4, 0x14(r1)
/* 8015448C 001513CC  90 01 00 18 */	stw r0, 0x18(r1)
/* 80154490 001513D0  80 1E 01 90 */	lwz r0, 0x190(r30)
/* 80154494 001513D4  90 01 00 20 */	stw r0, 0x20(r1)
/* 80154498 001513D8  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 8015449C 001513DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801544A0 001513E0  7D 89 03 A6 */	mtctr r12
/* 801544A4 001513E4  4E 80 04 21 */	bctrl 
/* 801544A8 001513E8  7C 7D 1B 79 */	or. r29, r3, r3
/* 801544AC 001513EC  40 81 00 34 */	ble .L_801544E0
/* 801544B0 001513F0  38 00 00 01 */	li r0, 1
/* 801544B4 001513F4  38 60 FF FF */	li r3, -1
/* 801544B8 001513F8  98 01 00 2C */	stb r0, 0x2c(r1)
/* 801544BC 001513FC  48 07 C9 A5 */	bl getMapPikmins__Q24Game8GameStatFi
/* 801544C0 00151400  7C 1D 18 00 */	cmpw r29, r3
/* 801544C4 00151404  40 82 00 10 */	bne .L_801544D4
/* 801544C8 00151408  38 00 00 01 */	li r0, 1
/* 801544CC 0015140C  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801544D0 00151410  48 00 00 1C */	b .L_801544EC
.L_801544D4:
/* 801544D4 00151414  38 00 00 00 */	li r0, 0
/* 801544D8 00151418  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801544DC 0015141C  48 00 00 10 */	b .L_801544EC
.L_801544E0:
/* 801544E0 00151420  38 00 00 00 */	li r0, 0
/* 801544E4 00151424  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801544E8 00151428  98 01 00 2C */	stb r0, 0x2c(r1)
.L_801544EC:
/* 801544EC 0015142C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801544F0 00151430  38 81 00 08 */	addi r4, r1, 8
/* 801544F4 00151434  48 2A 9B 49 */	bl open_CaveMoreMenu__Q26Screen9Game2DMgrFRQ32og6Screen18DispMemberCaveMore
/* 801544F8 00151438  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801544FC 0015143C  41 82 00 54 */	beq .L_80154550
/* 80154500 00151440  80 CD 94 90 */	lwz r6, playData__4Game@sda21(r13)
/* 80154504 00151444  38 80 00 03 */	li r4, 3
/* 80154508 00151448  3C 60 80 48 */	lis r3, lbl_8047CF40@ha
/* 8015450C 0015144C  38 00 00 00 */	li r0, 0
/* 80154510 00151450  98 86 00 19 */	stb r4, 0x19(r6)
/* 80154514 00151454  38 A3 CF 40 */	addi r5, r3, lbl_8047CF40@l
/* 80154518 00151458  38 80 00 01 */	li r4, 1
/* 8015451C 0015145C  90 06 00 1C */	stw r0, 0x1c(r6)
/* 80154520 00151460  38 C0 00 03 */	li r6, 3
/* 80154524 00151464  93 FE 01 88 */	stw r31, 0x188(r30)
/* 80154528 00151468  88 1E 01 80 */	lbz r0, 0x180(r30)
/* 8015452C 0015146C  60 00 00 02 */	ori r0, r0, 2
/* 80154530 00151470  98 1E 01 80 */	stb r0, 0x180(r30)
/* 80154534 00151474  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154538 00151478  48 06 0A 5D */	bl setPause__Q24Game10GameSystemFbPci
/* 8015453C 0015147C  3C 80 80 48 */	lis r4, lbl_8047CF40@ha
/* 80154540 00151480  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154544 00151484  38 A4 CF 40 */	addi r5, r4, lbl_8047CF40@l
/* 80154548 00151488  38 80 00 01 */	li r4, 1
/* 8015454C 0015148C  48 06 0A 39 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_80154550:
/* 80154550 00151490  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80154554 00151494  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80154558 00151498  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8015455C 0015149C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80154560 001514A0  7C 08 03 A6 */	mtlr r0
/* 80154564 001514A4  38 21 00 40 */	addi r1, r1, 0x40
/* 80154568 001514A8  4E 80 00 20 */	blr 
.endif

.global saveCaveMore__Q24Game17SingleGameSectionFv
saveCaveMore__Q24Game17SingleGameSectionFv:
/* 8015456C 001514AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154570 001514B0  7C 08 02 A6 */	mflr r0
/* 80154574 001514B4  38 80 00 00 */	li r4, 0
/* 80154578 001514B8  38 A0 00 00 */	li r5, 0
/* 8015457C 001514BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154580 001514C0  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80154584 001514C4  48 00 C4 F5 */	bl caveSaveAllPikmins__Q24Game7PikiMgrFbb
/* 80154588 001514C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015458C 001514CC  7C 08 03 A6 */	mtlr r0
/* 80154590 001514D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80154594 001514D4  4E 80 00 20 */	blr 

.if version == 1
.global openKanketuMenu__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
openKanketuMenu__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller:
/* 80154598 001514D8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8015459C 001514DC  7C 08 02 A6 */	mflr r0
/* 801545A0 001514E0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801545A4 001514E4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801545A8 001514E8  7C 9F 23 78 */	mr r31, r4
/* 801545AC 001514EC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801545B0 001514F0  7C 7E 1B 78 */	mr r30, r3
/* 801545B4 001514F4  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801545B8 001514F8  88 03 01 94 */	lbz r0, 0x1b8(r3)
/* 801545BC 001514FC  28 00 00 00 */	cmplwi r0, 0
/* 801545C0 00151500  40 82 01 40 */	bne .L_80154700
/* 801545C4 00151504  88 1E 01 80 */	lbz r0, 0x1a4(r30)
/* 801545C8 00151508  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801545CC 0015150C  40 82 01 34 */	bne .L_80154700
/* 801545D0 00151510  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 801545D4 00151514  39 20 00 00 */	li r9, 0
/* 801545D8 00151518  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 801545DC 0015151C  38 E0 00 01 */	li r7, 1
/* 801545E0 00151520  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 801545E4 00151524  90 01 00 08 */	stw r0, 8(r1)
/* 801545E8 00151528  38 A3 11 30 */	addi r5, r3, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 801545EC 0015152C  38 00 00 18 */	li r0, 0x18
/* 801545F0 00151530  39 00 00 45 */	li r8, 0x45
/* 801545F4 00151534  91 21 00 28 */	stw r9, 0x28(r1)
/* 801545F8 00151538  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 801545FC 0015153C  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberKanketuMenu@ha
/* 80154600 00151540  38 C3 30 31 */	addi r6, r3, 0x745F3031@l
/* 80154604 00151544  90 A1 00 08 */	stw r5, 8(r1)
/* 80154608 00151548  38 A4 11 00 */	addi r5, r4, __vt__Q32og6Screen21DispMemberKanketuMenu@l
/* 8015460C 0015154C  38 80 00 04 */	li r4, 4
/* 80154610 00151550  90 01 00 10 */	stw r0, 0x10(r1)
/* 80154614 00151554  38 00 00 0A */	li r0, 0xa
/* 80154618 00151558  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 8015461C 0015155C  91 01 00 14 */	stw r8, 0x14(r1)
/* 80154620 00151560  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80154624 00151564  91 21 00 0C */	stw r9, 0xc(r1)
/* 80154628 00151568  98 E1 00 27 */	stb r7, 0x27(r1)
/* 8015462C 0015156C  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80154630 00151570  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80154634 00151574  99 21 00 24 */	stb r9, 0x24(r1)
/* 80154638 00151578  99 21 00 25 */	stb r9, 0x25(r1)
/* 8015463C 0015157C  90 A1 00 08 */	stw r5, 8(r1)
/* 80154640 00151580  99 21 00 2C */	stb r9, 0x2c(r1)
/* 80154644 00151584  99 21 00 2D */	stb r9, 0x2d(r1)
/* 80154648 00151588  99 21 00 2E */	stb r9, 0x2e(r1)
/* 8015464C 0015158C  91 21 00 28 */	stw r9, 0x28(r1)
/* 80154650 00151590  90 81 00 10 */	stw r4, 0x10(r1)
/* 80154654 00151594  90 81 00 14 */	stw r4, 0x14(r1)
/* 80154658 00151598  90 01 00 18 */	stw r0, 0x18(r1)
/* 8015465C 0015159C  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 80154660 001515A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80154664 001515A4  7D 89 03 A6 */	mtctr r12
/* 80154668 001515A8  4E 80 04 21 */	bctrl 
/* 8015466C 001515AC  7C 7D 1B 79 */	or. r29, r3, r3
/* 80154670 001515B0  40 81 00 34 */	ble .L_801546A4
/* 80154674 001515B4  38 00 00 01 */	li r0, 1
/* 80154678 001515B8  38 60 FF FF */	li r3, -1
/* 8015467C 001515BC  98 01 00 2C */	stb r0, 0x2c(r1)
/* 80154680 001515C0  48 07 C7 E1 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80154684 001515C4  7C 1D 18 00 */	cmpw r29, r3
/* 80154688 001515C8  40 82 00 10 */	bne .L_80154698
/* 8015468C 001515CC  38 00 00 01 */	li r0, 1
/* 80154690 001515D0  98 01 00 2D */	stb r0, 0x2d(r1)
/* 80154694 001515D4  48 00 00 1C */	b .L_801546B0
.L_80154698:
/* 80154698 001515D8  38 00 00 00 */	li r0, 0
/* 8015469C 001515DC  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801546A0 001515E0  48 00 00 10 */	b .L_801546B0
.L_801546A4:
/* 801546A4 001515E4  38 00 00 00 */	li r0, 0
/* 801546A8 001515E8  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801546AC 001515EC  98 01 00 2C */	stb r0, 0x2c(r1)
.L_801546B0:
/* 801546B0 001515F0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801546B4 001515F4  38 81 00 08 */	addi r4, r1, 8
/* 801546B8 001515F8  48 2A 97 15 */	bl open_KanketuMenu__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberKanketuMenu
/* 801546BC 001515FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801546C0 00151600  41 82 00 40 */	beq .L_80154700
/* 801546C4 00151604  93 FE 01 8C */	stw r31, 0x1b0(r30)
/* 801546C8 00151608  3C 60 80 48 */	lis r3, lbl_8047CF50@ha
/* 801546CC 0015160C  38 A3 CF 50 */	addi r5, r3, lbl_8047CF50@l
/* 801546D0 00151610  38 80 00 01 */	li r4, 1
/* 801546D4 00151614  88 1E 01 80 */	lbz r0, 0x1a4(r30)
/* 801546D8 00151618  38 C0 00 03 */	li r6, 3
/* 801546DC 0015161C  60 00 00 04 */	ori r0, r0, 4
/* 801546E0 00151620  98 1E 01 80 */	stb r0, 0x1a4(r30)
/* 801546E4 00151624  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801546E8 00151628  48 06 08 AD */	bl setPause__Q24Game10GameSystemFbPci
/* 801546EC 0015162C  3C 80 80 48 */	lis r4, lbl_8047CF50@ha
/* 801546F0 00151630  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801546F4 00151634  38 A4 CF 50 */	addi r5, r4, lbl_8047CF50@l
/* 801546F8 00151638  38 80 00 01 */	li r4, 1
/* 801546FC 0015163C  48 06 08 89 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_80154700:
/* 80154700 00151640  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80154704 00151644  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80154708 00151648  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8015470C 0015164C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80154710 00151650  7C 08 03 A6 */	mtlr r0
/* 80154714 00151654  38 21 00 40 */	addi r1, r1, 0x40
/* 80154718 00151658  4E 80 00 20 */	blr 
.else
.global openKanketuMenu__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
openKanketuMenu__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller:
/* 80154598 001514D8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8015459C 001514DC  7C 08 02 A6 */	mflr r0
/* 801545A0 001514E0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801545A4 001514E4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 801545A8 001514E8  7C 9F 23 78 */	mr r31, r4
/* 801545AC 001514EC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 801545B0 001514F0  7C 7E 1B 78 */	mr r30, r3
/* 801545B4 001514F4  93 A1 00 34 */	stw r29, 0x34(r1)
/* 801545B8 001514F8  88 03 01 94 */	lbz r0, 0x194(r3)
/* 801545BC 001514FC  28 00 00 00 */	cmplwi r0, 0
/* 801545C0 00151500  40 82 01 40 */	bne .L_80154700
/* 801545C4 00151504  88 1E 01 80 */	lbz r0, 0x180(r30)
/* 801545C8 00151508  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801545CC 0015150C  40 82 01 34 */	bne .L_80154700
/* 801545D0 00151510  3C 60 80 4B */	lis r3, __vt__Q32og6Screen14DispMemberBase@ha
/* 801545D4 00151514  39 20 00 00 */	li r9, 0
/* 801545D8 00151518  38 03 11 48 */	addi r0, r3, __vt__Q32og6Screen14DispMemberBase@l
/* 801545DC 0015151C  38 E0 00 01 */	li r7, 1
/* 801545E0 00151520  3C 60 80 4B */	lis r3, __vt__Q32og6Screen17DispMemberAnaDemo@ha
/* 801545E4 00151524  90 01 00 08 */	stw r0, 8(r1)
/* 801545E8 00151528  38 A3 11 30 */	addi r5, r3, __vt__Q32og6Screen17DispMemberAnaDemo@l
/* 801545EC 0015152C  38 00 00 18 */	li r0, 0x18
/* 801545F0 00151530  39 00 00 45 */	li r8, 0x45
/* 801545F4 00151534  91 21 00 28 */	stw r9, 0x28(r1)
/* 801545F8 00151538  3C 60 74 5F */	lis r3, 0x745F3031@ha
/* 801545FC 0015153C  3C 80 80 4B */	lis r4, __vt__Q32og6Screen21DispMemberKanketuMenu@ha
/* 80154600 00151540  38 C3 30 31 */	addi r6, r3, 0x745F3031@l
/* 80154604 00151544  90 A1 00 08 */	stw r5, 8(r1)
/* 80154608 00151548  38 A4 11 00 */	addi r5, r4, __vt__Q32og6Screen21DispMemberKanketuMenu@l
/* 8015460C 0015154C  38 80 00 04 */	li r4, 4
/* 80154610 00151550  90 01 00 10 */	stw r0, 0x10(r1)
/* 80154614 00151554  38 00 00 0A */	li r0, 0xa
/* 80154618 00151558  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 8015461C 0015155C  91 01 00 14 */	stw r8, 0x14(r1)
/* 80154620 00151560  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80154624 00151564  91 21 00 0C */	stw r9, 0xc(r1)
/* 80154628 00151568  98 E1 00 27 */	stb r7, 0x27(r1)
/* 8015462C 0015156C  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80154630 00151570  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80154634 00151574  99 21 00 24 */	stb r9, 0x24(r1)
/* 80154638 00151578  99 21 00 25 */	stb r9, 0x25(r1)
/* 8015463C 0015157C  90 A1 00 08 */	stw r5, 8(r1)
/* 80154640 00151580  99 21 00 2C */	stb r9, 0x2c(r1)
/* 80154644 00151584  99 21 00 2D */	stb r9, 0x2d(r1)
/* 80154648 00151588  99 21 00 2E */	stb r9, 0x2e(r1)
/* 8015464C 0015158C  91 21 00 28 */	stw r9, 0x28(r1)
/* 80154650 00151590  90 81 00 10 */	stw r4, 0x10(r1)
/* 80154654 00151594  90 81 00 14 */	stw r4, 0x14(r1)
/* 80154658 00151598  90 01 00 18 */	stw r0, 0x18(r1)
/* 8015465C 0015159C  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 80154660 001515A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80154664 001515A4  7D 89 03 A6 */	mtctr r12
/* 80154668 001515A8  4E 80 04 21 */	bctrl 
/* 8015466C 001515AC  7C 7D 1B 79 */	or. r29, r3, r3
/* 80154670 001515B0  40 81 00 34 */	ble .L_801546A4
/* 80154674 001515B4  38 00 00 01 */	li r0, 1
/* 80154678 001515B8  38 60 FF FF */	li r3, -1
/* 8015467C 001515BC  98 01 00 2C */	stb r0, 0x2c(r1)
/* 80154680 001515C0  48 07 C7 E1 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80154684 001515C4  7C 1D 18 00 */	cmpw r29, r3
/* 80154688 001515C8  40 82 00 10 */	bne .L_80154698
/* 8015468C 001515CC  38 00 00 01 */	li r0, 1
/* 80154690 001515D0  98 01 00 2D */	stb r0, 0x2d(r1)
/* 80154694 001515D4  48 00 00 1C */	b .L_801546B0
.L_80154698:
/* 80154698 001515D8  38 00 00 00 */	li r0, 0
/* 8015469C 001515DC  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801546A0 001515E0  48 00 00 10 */	b .L_801546B0
.L_801546A4:
/* 801546A4 001515E4  38 00 00 00 */	li r0, 0
/* 801546A8 001515E8  98 01 00 2D */	stb r0, 0x2d(r1)
/* 801546AC 001515EC  98 01 00 2C */	stb r0, 0x2c(r1)
.L_801546B0:
/* 801546B0 001515F0  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801546B4 001515F4  38 81 00 08 */	addi r4, r1, 8
/* 801546B8 001515F8  48 2A 97 15 */	bl open_KanketuMenu__Q26Screen9Game2DMgrFRQ32og6Screen21DispMemberKanketuMenu
/* 801546BC 001515FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801546C0 00151600  41 82 00 40 */	beq .L_80154700
/* 801546C4 00151604  93 FE 01 8C */	stw r31, 0x18c(r30)
/* 801546C8 00151608  3C 60 80 48 */	lis r3, lbl_8047CF50@ha
/* 801546CC 0015160C  38 A3 CF 50 */	addi r5, r3, lbl_8047CF50@l
/* 801546D0 00151610  38 80 00 01 */	li r4, 1
/* 801546D4 00151614  88 1E 01 80 */	lbz r0, 0x180(r30)
/* 801546D8 00151618  38 C0 00 03 */	li r6, 3
/* 801546DC 0015161C  60 00 00 04 */	ori r0, r0, 4
/* 801546E0 00151620  98 1E 01 80 */	stb r0, 0x180(r30)
/* 801546E4 00151624  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801546E8 00151628  48 06 08 AD */	bl setPause__Q24Game10GameSystemFbPci
/* 801546EC 0015162C  3C 80 80 48 */	lis r4, lbl_8047CF50@ha
/* 801546F0 00151630  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801546F4 00151634  38 A4 CF 50 */	addi r5, r4, lbl_8047CF50@l
/* 801546F8 00151638  38 80 00 01 */	li r4, 1
/* 801546FC 0015163C  48 06 08 89 */	bl setMoviePause__Q24Game10GameSystemFbPc
.L_80154700:
/* 80154700 00151640  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80154704 00151644  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80154708 00151648  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8015470C 0015164C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80154710 00151650  7C 08 03 A6 */	mtlr r0
/* 80154714 00151654  38 21 00 40 */	addi r1, r1, 0x40
/* 80154718 00151658  4E 80 00 20 */	blr 
.endif

.if version == 1
.global updateCaveMenus__Q24Game17SingleGameSectionFv
updateCaveMenus__Q24Game17SingleGameSectionFv:
/* 8015471C 0015165C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154720 00151660  7C 08 02 A6 */	mflr r0
/* 80154724 00151664  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154728 00151668  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015472C 0015166C  7C 7F 1B 78 */	mr r31, r3
/* 80154730 00151670  3C 60 80 48 */	lis r3, lbl_8047CD98@ha
/* 80154734 00151674  93 C1 00 08 */	stw r30, 8(r1)
/* 80154738 00151678  3B C3 CD 98 */	addi r30, r3, lbl_8047CD98@l
/* 8015473C 0015167C  88 9F 01 80 */	lbz r4, 0x1a4(r31)
/* 80154740 00151680  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 80154744 00151684  41 82 00 F4 */	beq .L_80154838
/* 80154748 00151688  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8015474C 0015168C  48 2A 95 E5 */	bl check_CaveInMenu__Q26Screen9Game2DMgrFv
/* 80154750 00151690  2C 03 00 02 */	cmpwi r3, 2
/* 80154754 00151694  41 82 00 9C */	beq .L_801547F0
/* 80154758 00151698  40 80 00 14 */	bge .L_8015476C
/* 8015475C 0015169C  2C 03 00 00 */	cmpwi r3, 0
/* 80154760 001516A0  41 82 02 A0 */	beq .L_80154A00
/* 80154764 001516A4  40 80 00 14 */	bge .L_80154778
/* 80154768 001516A8  48 00 02 98 */	b .L_80154A00
.L_8015476C:
/* 8015476C 001516AC  2C 03 00 04 */	cmpwi r3, 4
/* 80154770 001516B0  40 80 02 90 */	bge .L_80154A00
/* 80154774 001516B4  48 00 00 B0 */	b .L_80154824
.L_80154778:
/* 80154778 001516B8  80 CD 92 E0 */	lwz r6, naviMgr__4Game@sda21(r13)
/* 8015477C 001516BC  38 BE 01 C4 */	addi r5, r30, 0x1c4
/* 80154780 001516C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154784 001516C4  38 80 00 00 */	li r4, 0
/* 80154788 001516C8  80 E6 00 C8 */	lwz r7, 0xc8(r6)
/* 8015478C 001516CC  38 C0 00 03 */	li r6, 3
/* 80154790 001516D0  C0 07 09 D0 */	lfs f0, 0x9d0(r7)
/* 80154794 001516D4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80154798 001516D8  80 ED 92 E0 */	lwz r7, naviMgr__4Game@sda21(r13)
/* 8015479C 001516DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801547A0 001516E0  80 E7 00 C8 */	lwz r7, 0xc8(r7)
/* 801547A4 001516E4  C0 07 09 D0 */	lfs f0, 0x9d0(r7)
/* 801547A8 001516E8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801547AC 001516EC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801547B0 001516F0  48 06 07 E5 */	bl setPause__Q24Game10GameSystemFbPci
/* 801547B4 001516F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801547B8 001516F8  38 BE 01 C4 */	addi r5, r30, 0x1c4
/* 801547BC 001516FC  38 80 00 00 */	li r4, 0
/* 801547C0 00151700  48 06 07 C5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801547C4 00151704  88 1F 01 80 */	lbz r0, 0x1a4(r31)
/* 801547C8 00151708  7F E3 FB 78 */	mr r3, r31
/* 801547CC 0015170C  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 801547D0 00151710  98 1F 01 80 */	stb r0, 0x1a4(r31)
/* 801547D4 00151714  81 9F 00 00 */	lwz r12, 0(r31)
/* 801547D8 00151718  80 9F 01 84 */	lwz r4, 0x1a8(r31)
/* 801547DC 0015171C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801547E0 00151720  7D 89 03 A6 */	mtctr r12
/* 801547E4 00151724  4E 80 04 21 */	bctrl 
/* 801547E8 00151728  38 60 00 01 */	li r3, 1
/* 801547EC 0015172C  48 00 02 18 */	b .L_80154A04
.L_801547F0:
/* 801547F0 00151730  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801547F4 00151734  38 80 00 00 */	li r4, 0
/* 801547F8 00151738  38 A2 A2 6C */	addi r5, r2, lbl_805185CC@sda21
/* 801547FC 0015173C  38 C0 00 03 */	li r6, 3
/* 80154800 00151740  48 06 07 95 */	bl setPause__Q24Game10GameSystemFbPci
/* 80154804 00151744  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154808 00151748  38 80 00 00 */	li r4, 0
/* 8015480C 0015174C  38 A2 A2 6C */	addi r5, r2, lbl_805185CC@sda21
/* 80154810 00151750  48 06 07 75 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80154814 00151754  88 1F 01 80 */	lbz r0, 0x1a4(r31)
/* 80154818 00151758  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 8015481C 0015175C  98 1F 01 80 */	stb r0, 0x1a4(r31)
/* 80154820 00151760  48 00 01 E0 */	b .L_80154A00
.L_80154824:
/* 80154824 00151764  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154828 00151768  38 BE 01 D0 */	addi r5, r30, 0x1d0
/* 8015482C 0015176C  38 80 00 00 */	li r4, 0
/* 80154830 00151770  48 06 07 55 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80154834 00151774  48 00 01 CC */	b .L_80154A00
.L_80154838:
/* 80154838 00151778  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 8015483C 0015177C  41 82 01 14 */	beq .L_80154950
/* 80154840 00151780  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80154844 00151784  48 2A 98 F9 */	bl check_CaveMoreMenu__Q26Screen9Game2DMgrFv
/* 80154848 00151788  2C 03 00 02 */	cmpwi r3, 2
/* 8015484C 0015178C  41 82 00 BC */	beq .L_80154908
/* 80154850 00151790  40 80 00 14 */	bge .L_80154864
/* 80154854 00151794  2C 03 00 00 */	cmpwi r3, 0
/* 80154858 00151798  41 82 01 A8 */	beq .L_80154A00
/* 8015485C 0015179C  40 80 00 14 */	bge .L_80154870
/* 80154860 001517A0  48 00 01 A0 */	b .L_80154A00
.L_80154864:
/* 80154864 001517A4  2C 03 00 04 */	cmpwi r3, 4
/* 80154868 001517A8  40 80 01 98 */	bge .L_80154A00
/* 8015486C 001517AC  48 00 00 D0 */	b .L_8015493C
.L_80154870:
/* 80154870 001517B0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80154874 001517B4  38 80 00 00 */	li r4, 0
/* 80154878 001517B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8015487C 001517BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80154880 001517C0  7D 89 03 A6 */	mtctr r12
/* 80154884 001517C4  4E 80 04 21 */	bctrl 
/* 80154888 001517C8  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 8015488C 001517CC  38 80 00 01 */	li r4, 1
/* 80154890 001517D0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154894 001517D4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80154898 001517D8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8015489C 001517DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801548A0 001517E0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801548A4 001517E4  7D 89 03 A6 */	mtctr r12
/* 801548A8 001517E8  4E 80 04 21 */	bctrl 
/* 801548AC 001517EC  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 801548B0 001517F0  38 BE 01 DC */	addi r5, r30, 0x1dc
/* 801548B4 001517F4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801548B8 001517F8  38 80 00 00 */	li r4, 0
/* 801548BC 001517FC  38 C0 00 03 */	li r6, 3
/* 801548C0 00151800  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801548C4 00151804  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801548C8 00151808  48 06 06 CD */	bl setPause__Q24Game10GameSystemFbPci
/* 801548CC 0015180C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801548D0 00151810  38 BE 01 DC */	addi r5, r30, 0x1dc
/* 801548D4 00151814  38 80 00 00 */	li r4, 0
/* 801548D8 00151818  48 06 06 AD */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801548DC 0015181C  88 1F 01 80 */	lbz r0, 0x1a4(r31)
/* 801548E0 00151820  7F E3 FB 78 */	mr r3, r31
/* 801548E4 00151824  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801548E8 00151828  98 1F 01 80 */	stb r0, 0x1a4(r31)
/* 801548EC 0015182C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801548F0 00151830  80 9F 01 88 */	lwz r4, 0x1ac(r31)
/* 801548F4 00151834  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801548F8 00151838  7D 89 03 A6 */	mtctr r12
/* 801548FC 0015183C  4E 80 04 21 */	bctrl 
/* 80154900 00151840  38 60 00 01 */	li r3, 1
/* 80154904 00151844  48 00 01 00 */	b .L_80154A04
.L_80154908:
/* 80154908 00151848  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015490C 0015184C  38 80 00 00 */	li r4, 0
/* 80154910 00151850  38 A2 A2 74 */	addi r5, r2, lbl_805185D4@sda21
/* 80154914 00151854  38 C0 00 03 */	li r6, 3
/* 80154918 00151858  48 06 06 7D */	bl setPause__Q24Game10GameSystemFbPci
/* 8015491C 0015185C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154920 00151860  38 80 00 00 */	li r4, 0
/* 80154924 00151864  38 A2 A2 74 */	addi r5, r2, lbl_805185D4@sda21
/* 80154928 00151868  48 06 06 5D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8015492C 0015186C  88 1F 01 80 */	lbz r0, 0x1a4(r31)
/* 80154930 00151870  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80154934 00151874  98 1F 01 80 */	stb r0, 0x1a4(r31)
/* 80154938 00151878  48 00 00 C8 */	b .L_80154A00
.L_8015493C:
/* 8015493C 0015187C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154940 00151880  38 BE 01 E8 */	addi r5, r30, 0x1e8
/* 80154944 00151884  38 80 00 00 */	li r4, 0
/* 80154948 00151888  48 06 06 3D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8015494C 0015188C  48 00 00 B4 */	b .L_80154A00
.L_80154950:
/* 80154950 00151890  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 80154954 00151894  41 82 00 AC */	beq .L_80154A00
/* 80154958 00151898  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8015495C 0015189C  48 2A 96 45 */	bl check_KanketuMenu__Q26Screen9Game2DMgrFv
/* 80154960 001518A0  2C 03 00 02 */	cmpwi r3, 2
/* 80154964 001518A4  41 82 00 6C */	beq .L_801549D0
/* 80154968 001518A8  40 80 00 98 */	bge .L_80154A00
/* 8015496C 001518AC  2C 03 00 00 */	cmpwi r3, 0
/* 80154970 001518B0  41 82 00 90 */	beq .L_80154A00
/* 80154974 001518B4  40 80 00 0C */	bge .L_80154980
/* 80154978 001518B8  48 00 00 88 */	b .L_80154A00
/* 8015497C 001518BC  48 00 00 84 */	b .L_80154A00
.L_80154980:
/* 80154980 001518C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154984 001518C4  38 BE 01 F4 */	addi r5, r30, 0x1f4
/* 80154988 001518C8  38 80 00 00 */	li r4, 0
/* 8015498C 001518CC  38 C0 00 03 */	li r6, 3
/* 80154990 001518D0  48 06 06 05 */	bl setPause__Q24Game10GameSystemFbPci
/* 80154994 001518D4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154998 001518D8  38 BE 01 F4 */	addi r5, r30, 0x1f4
/* 8015499C 001518DC  38 80 00 00 */	li r4, 0
/* 801549A0 001518E0  48 06 05 E5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801549A4 001518E4  88 1F 01 80 */	lbz r0, 0x1a4(r31)
/* 801549A8 001518E8  7F E3 FB 78 */	mr r3, r31
/* 801549AC 001518EC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801549B0 001518F0  98 1F 01 80 */	stb r0, 0x1a4(r31)
/* 801549B4 001518F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801549B8 001518F8  80 9F 01 8C */	lwz r4, 0x1b0(r31)
/* 801549BC 001518FC  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801549C0 00151900  7D 89 03 A6 */	mtctr r12
/* 801549C4 00151904  4E 80 04 21 */	bctrl 
/* 801549C8 00151908  38 60 00 01 */	li r3, 1
/* 801549CC 0015190C  48 00 00 38 */	b .L_80154A04
.L_801549D0:
/* 801549D0 00151910  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801549D4 00151914  38 80 00 00 */	li r4, 0
/* 801549D8 00151918  38 A2 A2 7C */	addi r5, r2, lbl_805185DC@sda21
/* 801549DC 0015191C  38 C0 00 03 */	li r6, 3
/* 801549E0 00151920  48 06 05 B5 */	bl setPause__Q24Game10GameSystemFbPci
/* 801549E4 00151924  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801549E8 00151928  38 80 00 00 */	li r4, 0
/* 801549EC 0015192C  38 A2 A2 7C */	addi r5, r2, lbl_805185DC@sda21
/* 801549F0 00151930  48 06 05 95 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801549F4 00151934  88 1F 01 80 */	lbz r0, 0x1a4(r31)
/* 801549F8 00151938  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801549FC 0015193C  98 1F 01 80 */	stb r0, 0x1a4(r31)
.L_80154A00:
/* 80154A00 00151940  38 60 00 00 */	li r3, 0
.L_80154A04:
/* 80154A04 00151944  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154A08 00151948  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154A0C 0015194C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80154A10 00151950  7C 08 03 A6 */	mtlr r0
/* 80154A14 00151954  38 21 00 10 */	addi r1, r1, 0x10
/* 80154A18 00151958  4E 80 00 20 */	blr 
.else
.global updateCaveMenus__Q24Game17SingleGameSectionFv
updateCaveMenus__Q24Game17SingleGameSectionFv:
/* 8015471C 0015165C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154720 00151660  7C 08 02 A6 */	mflr r0
/* 80154724 00151664  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154728 00151668  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8015472C 0015166C  7C 7F 1B 78 */	mr r31, r3
/* 80154730 00151670  3C 60 80 48 */	lis r3, lbl_8047CD98@ha
/* 80154734 00151674  93 C1 00 08 */	stw r30, 8(r1)
/* 80154738 00151678  3B C3 CD 98 */	addi r30, r3, lbl_8047CD98@l
/* 8015473C 0015167C  88 9F 01 80 */	lbz r4, 0x180(r31)
/* 80154740 00151680  54 80 07 FF */	clrlwi. r0, r4, 0x1f
/* 80154744 00151684  41 82 00 F4 */	beq .L_80154838
/* 80154748 00151688  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8015474C 0015168C  48 2A 95 E5 */	bl check_CaveInMenu__Q26Screen9Game2DMgrFv
/* 80154750 00151690  2C 03 00 02 */	cmpwi r3, 2
/* 80154754 00151694  41 82 00 9C */	beq .L_801547F0
/* 80154758 00151698  40 80 00 14 */	bge .L_8015476C
/* 8015475C 0015169C  2C 03 00 00 */	cmpwi r3, 0
/* 80154760 001516A0  41 82 02 A0 */	beq .L_80154A00
/* 80154764 001516A4  40 80 00 14 */	bge .L_80154778
/* 80154768 001516A8  48 00 02 98 */	b .L_80154A00
.L_8015476C:
/* 8015476C 001516AC  2C 03 00 04 */	cmpwi r3, 4
/* 80154770 001516B0  40 80 02 90 */	bge .L_80154A00
/* 80154774 001516B4  48 00 00 B0 */	b .L_80154824
.L_80154778:
/* 80154778 001516B8  80 CD 92 E0 */	lwz r6, naviMgr__4Game@sda21(r13)
/* 8015477C 001516BC  38 BE 01 C4 */	addi r5, r30, 0x1c4
/* 80154780 001516C0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154784 001516C4  38 80 00 00 */	li r4, 0
/* 80154788 001516C8  80 E6 00 C8 */	lwz r7, 0xc8(r6)
/* 8015478C 001516CC  38 C0 00 03 */	li r6, 3
/* 80154790 001516D0  C0 07 09 D0 */	lfs f0, 0x9d0(r7)
/* 80154794 001516D4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80154798 001516D8  80 ED 92 E0 */	lwz r7, naviMgr__4Game@sda21(r13)
/* 8015479C 001516DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801547A0 001516E0  80 E7 00 C8 */	lwz r7, 0xc8(r7)
/* 801547A4 001516E4  C0 07 09 D0 */	lfs f0, 0x9d0(r7)
/* 801547A8 001516E8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801547AC 001516EC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801547B0 001516F0  48 06 07 E5 */	bl setPause__Q24Game10GameSystemFbPci
/* 801547B4 001516F4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801547B8 001516F8  38 BE 01 C4 */	addi r5, r30, 0x1c4
/* 801547BC 001516FC  38 80 00 00 */	li r4, 0
/* 801547C0 00151700  48 06 07 C5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801547C4 00151704  88 1F 01 80 */	lbz r0, 0x180(r31)
/* 801547C8 00151708  7F E3 FB 78 */	mr r3, r31
/* 801547CC 0015170C  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 801547D0 00151710  98 1F 01 80 */	stb r0, 0x180(r31)
/* 801547D4 00151714  81 9F 00 00 */	lwz r12, 0(r31)
/* 801547D8 00151718  80 9F 01 84 */	lwz r4, 0x184(r31)
/* 801547DC 0015171C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801547E0 00151720  7D 89 03 A6 */	mtctr r12
/* 801547E4 00151724  4E 80 04 21 */	bctrl 
/* 801547E8 00151728  38 60 00 01 */	li r3, 1
/* 801547EC 0015172C  48 00 02 18 */	b .L_80154A04
.L_801547F0:
/* 801547F0 00151730  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801547F4 00151734  38 80 00 00 */	li r4, 0
/* 801547F8 00151738  38 A2 A2 6C */	addi r5, r2, lbl_805185CC@sda21
/* 801547FC 0015173C  38 C0 00 03 */	li r6, 3
/* 80154800 00151740  48 06 07 95 */	bl setPause__Q24Game10GameSystemFbPci
/* 80154804 00151744  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154808 00151748  38 80 00 00 */	li r4, 0
/* 8015480C 0015174C  38 A2 A2 6C */	addi r5, r2, lbl_805185CC@sda21
/* 80154810 00151750  48 06 07 75 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80154814 00151754  88 1F 01 80 */	lbz r0, 0x180(r31)
/* 80154818 00151758  54 00 06 3C */	rlwinm r0, r0, 0, 0x18, 0x1e
/* 8015481C 0015175C  98 1F 01 80 */	stb r0, 0x180(r31)
/* 80154820 00151760  48 00 01 E0 */	b .L_80154A00
.L_80154824:
/* 80154824 00151764  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154828 00151768  38 BE 01 D0 */	addi r5, r30, 0x1d0
/* 8015482C 0015176C  38 80 00 00 */	li r4, 0
/* 80154830 00151770  48 06 07 55 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 80154834 00151774  48 00 01 CC */	b .L_80154A00
.L_80154838:
/* 80154838 00151778  54 80 07 BD */	rlwinm. r0, r4, 0, 0x1e, 0x1e
/* 8015483C 0015177C  41 82 01 14 */	beq .L_80154950
/* 80154840 00151780  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80154844 00151784  48 2A 98 F9 */	bl check_CaveMoreMenu__Q26Screen9Game2DMgrFv
/* 80154848 00151788  2C 03 00 02 */	cmpwi r3, 2
/* 8015484C 0015178C  41 82 00 BC */	beq .L_80154908
/* 80154850 00151790  40 80 00 14 */	bge .L_80154864
/* 80154854 00151794  2C 03 00 00 */	cmpwi r3, 0
/* 80154858 00151798  41 82 01 A8 */	beq .L_80154A00
/* 8015485C 0015179C  40 80 00 14 */	bge .L_80154870
/* 80154860 001517A0  48 00 01 A0 */	b .L_80154A00
.L_80154864:
/* 80154864 001517A4  2C 03 00 04 */	cmpwi r3, 4
/* 80154868 001517A8  40 80 01 98 */	bge .L_80154A00
/* 8015486C 001517AC  48 00 00 D0 */	b .L_8015493C
.L_80154870:
/* 80154870 001517B0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80154874 001517B4  38 80 00 00 */	li r4, 0
/* 80154878 001517B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8015487C 001517BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80154880 001517C0  7D 89 03 A6 */	mtctr r12
/* 80154884 001517C4  4E 80 04 21 */	bctrl 
/* 80154888 001517C8  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 8015488C 001517CC  38 80 00 01 */	li r4, 1
/* 80154890 001517D0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154894 001517D4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 80154898 001517D8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8015489C 001517DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801548A0 001517E0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801548A4 001517E4  7D 89 03 A6 */	mtctr r12
/* 801548A8 001517E8  4E 80 04 21 */	bctrl 
/* 801548AC 001517EC  C0 03 02 A0 */	lfs f0, 0x2a0(r3)
/* 801548B0 001517F0  38 BE 01 DC */	addi r5, r30, 0x1dc
/* 801548B4 001517F4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801548B8 001517F8  38 80 00 00 */	li r4, 0
/* 801548BC 001517FC  38 C0 00 03 */	li r6, 3
/* 801548C0 00151800  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 801548C4 00151804  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801548C8 00151808  48 06 06 CD */	bl setPause__Q24Game10GameSystemFbPci
/* 801548CC 0015180C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801548D0 00151810  38 BE 01 DC */	addi r5, r30, 0x1dc
/* 801548D4 00151814  38 80 00 00 */	li r4, 0
/* 801548D8 00151818  48 06 06 AD */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801548DC 0015181C  88 1F 01 80 */	lbz r0, 0x180(r31)
/* 801548E0 00151820  7F E3 FB 78 */	mr r3, r31
/* 801548E4 00151824  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 801548E8 00151828  98 1F 01 80 */	stb r0, 0x180(r31)
/* 801548EC 0015182C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801548F0 00151830  80 9F 01 88 */	lwz r4, 0x188(r31)
/* 801548F4 00151834  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801548F8 00151838  7D 89 03 A6 */	mtctr r12
/* 801548FC 0015183C  4E 80 04 21 */	bctrl 
/* 80154900 00151840  38 60 00 01 */	li r3, 1
/* 80154904 00151844  48 00 01 00 */	b .L_80154A04
.L_80154908:
/* 80154908 00151848  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015490C 0015184C  38 80 00 00 */	li r4, 0
/* 80154910 00151850  38 A2 A2 74 */	addi r5, r2, lbl_805185D4@sda21
/* 80154914 00151854  38 C0 00 03 */	li r6, 3
/* 80154918 00151858  48 06 06 7D */	bl setPause__Q24Game10GameSystemFbPci
/* 8015491C 0015185C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154920 00151860  38 80 00 00 */	li r4, 0
/* 80154924 00151864  38 A2 A2 74 */	addi r5, r2, lbl_805185D4@sda21
/* 80154928 00151868  48 06 06 5D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8015492C 0015186C  88 1F 01 80 */	lbz r0, 0x180(r31)
/* 80154930 00151870  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80154934 00151874  98 1F 01 80 */	stb r0, 0x180(r31)
/* 80154938 00151878  48 00 00 C8 */	b .L_80154A00
.L_8015493C:
/* 8015493C 0015187C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154940 00151880  38 BE 01 E8 */	addi r5, r30, 0x1e8
/* 80154944 00151884  38 80 00 00 */	li r4, 0
/* 80154948 00151888  48 06 06 3D */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 8015494C 0015188C  48 00 00 B4 */	b .L_80154A00
.L_80154950:
/* 80154950 00151890  54 80 07 7B */	rlwinm. r0, r4, 0, 0x1d, 0x1d
/* 80154954 00151894  41 82 00 AC */	beq .L_80154A00
/* 80154958 00151898  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8015495C 0015189C  48 2A 96 45 */	bl check_KanketuMenu__Q26Screen9Game2DMgrFv
/* 80154960 001518A0  2C 03 00 02 */	cmpwi r3, 2
/* 80154964 001518A4  41 82 00 6C */	beq .L_801549D0
/* 80154968 001518A8  40 80 00 98 */	bge .L_80154A00
/* 8015496C 001518AC  2C 03 00 00 */	cmpwi r3, 0
/* 80154970 001518B0  41 82 00 90 */	beq .L_80154A00
/* 80154974 001518B4  40 80 00 0C */	bge .L_80154980
/* 80154978 001518B8  48 00 00 88 */	b .L_80154A00
/* 8015497C 001518BC  48 00 00 84 */	b .L_80154A00
.L_80154980:
/* 80154980 001518C0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154984 001518C4  38 BE 01 F4 */	addi r5, r30, 0x1f4
/* 80154988 001518C8  38 80 00 00 */	li r4, 0
/* 8015498C 001518CC  38 C0 00 03 */	li r6, 3
/* 80154990 001518D0  48 06 06 05 */	bl setPause__Q24Game10GameSystemFbPci
/* 80154994 001518D4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80154998 001518D8  38 BE 01 F4 */	addi r5, r30, 0x1f4
/* 8015499C 001518DC  38 80 00 00 */	li r4, 0
/* 801549A0 001518E0  48 06 05 E5 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801549A4 001518E4  88 1F 01 80 */	lbz r0, 0x180(r31)
/* 801549A8 001518E8  7F E3 FB 78 */	mr r3, r31
/* 801549AC 001518EC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801549B0 001518F0  98 1F 01 80 */	stb r0, 0x180(r31)
/* 801549B4 001518F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801549B8 001518F8  80 9F 01 8C */	lwz r4, 0x18c(r31)
/* 801549BC 001518FC  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801549C0 00151900  7D 89 03 A6 */	mtctr r12
/* 801549C4 00151904  4E 80 04 21 */	bctrl 
/* 801549C8 00151908  38 60 00 01 */	li r3, 1
/* 801549CC 0015190C  48 00 00 38 */	b .L_80154A04
.L_801549D0:
/* 801549D0 00151910  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801549D4 00151914  38 80 00 00 */	li r4, 0
/* 801549D8 00151918  38 A2 A2 7C */	addi r5, r2, lbl_805185DC@sda21
/* 801549DC 0015191C  38 C0 00 03 */	li r6, 3
/* 801549E0 00151920  48 06 05 B5 */	bl setPause__Q24Game10GameSystemFbPci
/* 801549E4 00151924  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801549E8 00151928  38 80 00 00 */	li r4, 0
/* 801549EC 0015192C  38 A2 A2 7C */	addi r5, r2, lbl_805185DC@sda21
/* 801549F0 00151930  48 06 05 95 */	bl setMoviePause__Q24Game10GameSystemFbPc
/* 801549F4 00151934  88 1F 01 80 */	lbz r0, 0x180(r31)
/* 801549F8 00151938  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 801549FC 0015193C  98 1F 01 80 */	stb r0, 0x180(r31)
.L_80154A00:
/* 80154A00 00151940  38 60 00 00 */	li r3, 0
.L_80154A04:
/* 80154A04 00151944  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154A08 00151948  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154A0C 0015194C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80154A10 00151950  7C 08 03 A6 */	mtlr r0
/* 80154A14 00151954  38 21 00 10 */	addi r1, r1, 0x10
/* 80154A18 00151958  4E 80 00 20 */	blr 
.endif

.if version == 1
.global goNextFloor__Q24Game17SingleGameSectionFPQ34Game8ItemHole4Item
goNextFloor__Q24Game17SingleGameSectionFPQ34Game8ItemHole4Item:
/* 80154A1C 0015195C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154A20 00151960  7C 08 02 A6 */	mflr r0
/* 80154A24 00151964  7C 85 23 78 */	mr r5, r4
/* 80154A28 00151968  7C 64 1B 78 */	mr r4, r3
/* 80154A2C 0015196C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154A30 00151970  38 00 00 01 */	li r0, 1
/* 80154A34 00151974  98 03 01 94 */	stb r0, 0x1b8(r3)
/* 80154A38 00151978  80 63 02 50 */	lwz r3, 0x274(r3)
/* 80154A3C 0015197C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154A40 00151980  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80154A44 00151984  7D 89 03 A6 */	mtctr r12
/* 80154A48 00151988  4E 80 04 21 */	bctrl 
/* 80154A4C 0015198C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154A50 00151990  7C 08 03 A6 */	mtlr r0
/* 80154A54 00151994  38 21 00 10 */	addi r1, r1, 0x10
/* 80154A58 00151998  4E 80 00 20 */	blr 
.else
.global goNextFloor__Q24Game17SingleGameSectionFPQ34Game8ItemHole4Item
goNextFloor__Q24Game17SingleGameSectionFPQ34Game8ItemHole4Item:
/* 80154A1C 0015195C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154A20 00151960  7C 08 02 A6 */	mflr r0
/* 80154A24 00151964  7C 85 23 78 */	mr r5, r4
/* 80154A28 00151968  7C 64 1B 78 */	mr r4, r3
/* 80154A2C 0015196C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154A30 00151970  38 00 00 01 */	li r0, 1
/* 80154A34 00151974  98 03 01 94 */	stb r0, 0x194(r3)
/* 80154A38 00151978  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80154A3C 0015197C  81 83 00 00 */	lwz r12, 0(r3)
/* 80154A40 00151980  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80154A44 00151984  7D 89 03 A6 */	mtctr r12
/* 80154A48 00151988  4E 80 04 21 */	bctrl 
/* 80154A4C 0015198C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154A50 00151990  7C 08 03 A6 */	mtlr r0
/* 80154A54 00151994  38 21 00 10 */	addi r1, r1, 0x10
/* 80154A58 00151998  4E 80 00 20 */	blr 
.endif

.global onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item:
/* 80154A5C 0015199C  4E 80 00 20 */	blr 

.if version == 1
.global goCave__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Item
goCave__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Item:
/* 80154A60 001519A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154A64 001519A4  7C 08 02 A6 */	mflr r0
/* 80154A68 001519A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154A6C 001519AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80154A70 001519B0  7C 9F 23 78 */	mr r31, r4
/* 80154A74 001519B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80154A78 001519B8  7C 7E 1B 78 */	mr r30, r3
/* 80154A7C 001519BC  38 7E 01 95 */	addi r3, r30, 0x1b9
/* 80154A80 001519C0  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 80154A84 001519C4  4B F7 5D D5 */	bl strcpy
/* 80154A88 001519C8  80 9F 01 F0 */	lwz r4, 0x1f0(r31)
/* 80154A8C 001519CC  38 7E 02 30 */	addi r3, r30, 0x254
/* 80154A90 001519D0  48 2B E8 49 */	bl setID__4ID32FUl
/* 80154A94 001519D4  38 00 00 01 */	li r0, 1
/* 80154A98 001519D8  7F C4 F3 78 */	mr r4, r30
/* 80154A9C 001519DC  98 1E 01 94 */	stb r0, 0x1b8(r30)
/* 80154AA0 001519E0  7F E5 FB 78 */	mr r5, r31
/* 80154AA4 001519E4  98 1E 02 3C */	stb r0, 0x260(r30)
/* 80154AA8 001519E8  80 7E 02 50 */	lwz r3, 0x274(r30)
/* 80154AAC 001519EC  81 83 00 00 */	lwz r12, 0(r3)
/* 80154AB0 001519F0  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80154AB4 001519F4  7D 89 03 A6 */	mtctr r12
/* 80154AB8 001519F8  4E 80 04 21 */	bctrl 
/* 80154ABC 001519FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154AC0 00151A00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154AC4 00151A04  83 C1 00 08 */	lwz r30, 8(r1)
/* 80154AC8 00151A08  7C 08 03 A6 */	mtlr r0
/* 80154ACC 00151A0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80154AD0 00151A10  4E 80 00 20 */	blr 
.else
.global goCave__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Item
goCave__Q24Game17SingleGameSectionFPQ34Game8ItemCave4Item:
/* 80154A60 001519A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154A64 001519A4  7C 08 02 A6 */	mflr r0
/* 80154A68 001519A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154A6C 001519AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80154A70 001519B0  7C 9F 23 78 */	mr r31, r4
/* 80154A74 001519B4  93 C1 00 08 */	stw r30, 8(r1)
/* 80154A78 001519B8  7C 7E 1B 78 */	mr r30, r3
/* 80154A7C 001519BC  38 7E 01 95 */	addi r3, r30, 0x195
/* 80154A80 001519C0  80 84 01 E0 */	lwz r4, 0x1e0(r4)
/* 80154A84 001519C4  4B F7 5D D5 */	bl strcpy
/* 80154A88 001519C8  80 9F 01 F0 */	lwz r4, 0x1f0(r31)
/* 80154A8C 001519CC  38 7E 02 30 */	addi r3, r30, 0x230
/* 80154A90 001519D0  48 2B E8 49 */	bl setID__4ID32FUl
/* 80154A94 001519D4  38 00 00 01 */	li r0, 1
/* 80154A98 001519D8  7F C4 F3 78 */	mr r4, r30
/* 80154A9C 001519DC  98 1E 01 94 */	stb r0, 0x194(r30)
/* 80154AA0 001519E0  7F E5 FB 78 */	mr r5, r31
/* 80154AA4 001519E4  98 1E 02 3C */	stb r0, 0x23c(r30)
/* 80154AA8 001519E8  80 7E 02 50 */	lwz r3, 0x250(r30)
/* 80154AAC 001519EC  81 83 00 00 */	lwz r12, 0(r3)
/* 80154AB0 001519F0  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80154AB4 001519F4  7D 89 03 A6 */	mtctr r12
/* 80154AB8 001519F8  4E 80 04 21 */	bctrl 
/* 80154ABC 001519FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154AC0 00151A00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80154AC4 00151A04  83 C1 00 08 */	lwz r30, 8(r1)
/* 80154AC8 00151A08  7C 08 03 A6 */	mtlr r0
/* 80154ACC 00151A0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80154AD0 00151A10  4E 80 00 20 */	blr 
.endif

.global onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item:
/* 80154AD4 00151A14  4E 80 00 20 */	blr 

.if version == 1
.global goMainMap__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4Item
goMainMap__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4Item:
/* 80154AD8 00151A18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154ADC 00151A1C  7C 08 02 A6 */	mflr r0
/* 80154AE0 00151A20  7C 85 23 78 */	mr r5, r4
/* 80154AE4 00151A24  7C 64 1B 78 */	mr r4, r3
/* 80154AE8 00151A28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154AEC 00151A2C  38 00 00 01 */	li r0, 1
/* 80154AF0 00151A30  98 03 01 94 */	stb r0, 0x1b8(r3)
/* 80154AF4 00151A34  38 00 00 00 */	li r0, 0
/* 80154AF8 00151A38  98 03 02 3C */	stb r0, 0x260(r3)
/* 80154AFC 00151A3C  80 63 02 50 */	lwz r3, 0x274(r3)
/* 80154B00 00151A40  81 83 00 00 */	lwz r12, 0(r3)
/* 80154B04 00151A44  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80154B08 00151A48  7D 89 03 A6 */	mtctr r12
/* 80154B0C 00151A4C  4E 80 04 21 */	bctrl 
/* 80154B10 00151A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154B14 00151A54  7C 08 03 A6 */	mtlr r0
/* 80154B18 00151A58  38 21 00 10 */	addi r1, r1, 0x10
/* 80154B1C 00151A5C  4E 80 00 20 */	blr 
.else
.global goMainMap__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4Item
goMainMap__Q24Game17SingleGameSectionFPQ34Game15ItemBigFountain4Item:
/* 80154AD8 00151A18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154ADC 00151A1C  7C 08 02 A6 */	mflr r0
/* 80154AE0 00151A20  7C 85 23 78 */	mr r5, r4
/* 80154AE4 00151A24  7C 64 1B 78 */	mr r4, r3
/* 80154AE8 00151A28  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154AEC 00151A2C  38 00 00 01 */	li r0, 1
/* 80154AF0 00151A30  98 03 01 94 */	stb r0, 0x194(r3)
/* 80154AF4 00151A34  38 00 00 00 */	li r0, 0
/* 80154AF8 00151A38  98 03 02 3C */	stb r0, 0x23c(r3)
/* 80154AFC 00151A3C  80 63 02 50 */	lwz r3, 0x250(r3)
/* 80154B00 00151A40  81 83 00 00 */	lwz r12, 0(r3)
/* 80154B04 00151A44  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80154B08 00151A48  7D 89 03 A6 */	mtctr r12
/* 80154B0C 00151A4C  4E 80 04 21 */	bctrl 
/* 80154B10 00151A50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154B14 00151A54  7C 08 03 A6 */	mtlr r0
/* 80154B18 00151A58  38 21 00 10 */	addi r1, r1, 0x10
/* 80154B1C 00151A5C  4E 80 00 20 */	blr 
.endif

.global onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item:
/* 80154B20 00151A60  4E 80 00 20 */	blr 

.global setupMainMapGames__Q24Game17SingleGameSectionFv
setupMainMapGames__Q24Game17SingleGameSectionFv:
/* 80154B24 00151A64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154B28 00151A68  7C 08 02 A6 */	mflr r0
/* 80154B2C 00151A6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154B30 00151A70  48 00 00 35 */	bl createFallPikmins__Q24Game17SingleGameSectionFv
/* 80154B34 00151A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154B38 00151A78  7C 08 03 A6 */	mtlr r0
/* 80154B3C 00151A7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80154B40 00151A80  4E 80 00 20 */	blr 

.global setupCaveGames__Q24Game17SingleGameSectionFv
setupCaveGames__Q24Game17SingleGameSectionFv:
/* 80154B44 00151A84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80154B48 00151A88  7C 08 02 A6 */	mflr r0
/* 80154B4C 00151A8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80154B50 00151A90  48 00 00 15 */	bl createFallPikmins__Q24Game17SingleGameSectionFv
/* 80154B54 00151A94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80154B58 00151A98  7C 08 03 A6 */	mtlr r0
/* 80154B5C 00151A9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80154B60 00151AA0  4E 80 00 20 */	blr 

.global createFallPikmins__Q24Game17SingleGameSectionFv
createFallPikmins__Q24Game17SingleGameSectionFv:
/* 80154B64 00151AA4  94 21 FE B0 */	stwu r1, -0x150(r1)
/* 80154B68 00151AA8  7C 08 02 A6 */	mflr r0
/* 80154B6C 00151AAC  90 01 01 54 */	stw r0, 0x154(r1)
/* 80154B70 00151AB0  DB E1 01 40 */	stfd f31, 0x140(r1)
/* 80154B74 00151AB4  F3 E1 01 48 */	psq_st f31, 328(r1), 0, qr0
/* 80154B78 00151AB8  DB C1 01 30 */	stfd f30, 0x130(r1)
/* 80154B7C 00151ABC  F3 C1 01 38 */	psq_st f30, 312(r1), 0, qr0
/* 80154B80 00151AC0  DB A1 01 20 */	stfd f29, 0x120(r1)
/* 80154B84 00151AC4  F3 A1 01 28 */	psq_st f29, 296(r1), 0, qr0
/* 80154B88 00151AC8  DB 81 01 10 */	stfd f28, 0x110(r1)
/* 80154B8C 00151ACC  F3 81 01 18 */	psq_st f28, 280(r1), 0, qr0
/* 80154B90 00151AD0  DB 61 01 00 */	stfd f27, 0x100(r1)
/* 80154B94 00151AD4  F3 61 01 08 */	psq_st f27, 264(r1), 0, qr0
/* 80154B98 00151AD8  DB 41 00 F0 */	stfd f26, 0xf0(r1)
/* 80154B9C 00151ADC  F3 41 00 F8 */	psq_st f26, 248(r1), 0, qr0
/* 80154BA0 00151AE0  DB 21 00 E0 */	stfd f25, 0xe0(r1)
/* 80154BA4 00151AE4  F3 21 00 E8 */	psq_st f25, 232(r1), 0, qr0
/* 80154BA8 00151AE8  DB 01 00 D0 */	stfd f24, 0xd0(r1)
/* 80154BAC 00151AEC  F3 01 00 D8 */	psq_st f24, 216(r1), 0, qr0
/* 80154BB0 00151AF0  DA E1 00 C0 */	stfd f23, 0xc0(r1)
/* 80154BB4 00151AF4  F2 E1 00 C8 */	psq_st f23, 200(r1), 0, qr0
/* 80154BB8 00151AF8  DA C1 00 B0 */	stfd f22, 0xb0(r1)
/* 80154BBC 00151AFC  F2 C1 00 B8 */	psq_st f22, 184(r1), 0, qr0
/* 80154BC0 00151B00  DA A1 00 A0 */	stfd f21, 0xa0(r1)
/* 80154BC4 00151B04  F2 A1 00 A8 */	psq_st f21, 168(r1), 0, qr0
/* 80154BC8 00151B08  DA 81 00 90 */	stfd f20, 0x90(r1)
/* 80154BCC 00151B0C  F2 81 00 98 */	psq_st f20, 152(r1), 0, qr0
/* 80154BD0 00151B10  BF 41 00 78 */	stmw r26, 0x78(r1)
/* 80154BD4 00151B14  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80154BD8 00151B18  38 81 00 38 */	addi r4, r1, 0x38
/* 80154BDC 00151B1C  38 A0 00 00 */	li r5, 0
/* 80154BE0 00151B20  81 83 00 04 */	lwz r12, 4(r3)
/* 80154BE4 00151B24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80154BE8 00151B28  7D 89 03 A6 */	mtctr r12
/* 80154BEC 00151B2C  4E 80 04 21 */	bctrl 
/* 80154BF0 00151B30  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80154BF4 00151B34  3C 60 80 48 */	lis r3, lbl_8047CF98@ha
/* 80154BF8 00151B38  38 83 CF 98 */	addi r4, r3, lbl_8047CF98@l
/* 80154BFC 00151B3C  38 65 00 60 */	addi r3, r5, 0x60
/* 80154C00 00151B40  48 09 C7 A9 */	bl dump__Q24Game13PikiContainerFPc
/* 80154C04 00151B44  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80154C08 00151B48  38 80 00 00 */	li r4, 0
/* 80154C0C 00151B4C  48 00 66 C1 */	bl getAliveOrima__Q24Game7NaviMgrFi
/* 80154C10 00151B50  28 03 00 00 */	cmplwi r3, 0
/* 80154C14 00151B54  41 82 00 34 */	beq .L_80154C48
/* 80154C18 00151B58  7C 64 1B 78 */	mr r4, r3
/* 80154C1C 00151B5C  38 61 00 08 */	addi r3, r1, 8
/* 80154C20 00151B60  81 84 00 00 */	lwz r12, 0(r4)
/* 80154C24 00151B64  81 8C 00 08 */	lwz r12, 8(r12)
/* 80154C28 00151B68  7D 89 03 A6 */	mtctr r12
/* 80154C2C 00151B6C  4E 80 04 21 */	bctrl 
/* 80154C30 00151B70  C0 41 00 08 */	lfs f2, 8(r1)
/* 80154C34 00151B74  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80154C38 00151B78  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80154C3C 00151B7C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80154C40 00151B80  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80154C44 00151B84  D0 01 00 40 */	stfs f0, 0x40(r1)
.L_80154C48:
/* 80154C48 00151B88  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80154C4C 00151B8C  38 81 00 38 */	addi r4, r1, 0x38
/* 80154C50 00151B90  81 83 00 04 */	lwz r12, 4(r3)
/* 80154C54 00151B94  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80154C58 00151B98  7D 89 03 A6 */	mtctr r12
/* 80154C5C 00151B9C  4E 80 04 21 */	bctrl 
/* 80154C60 00151BA0  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80154C64 00151BA4  38 80 00 00 */	li r4, 0
/* 80154C68 00151BA8  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80154C6C 00151BAC  48 00 66 15 */	bl getDeadOrima__Q24Game7NaviMgrFi
/* 80154C70 00151BB0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80154C74 00151BB4  CA C2 A2 B0 */	lfd f22, lbl_80518610@sda21(r2)
/* 80154C78 00151BB8  C2 E2 A2 84 */	lfs f23, lbl_805185E4@sda21(r2)
/* 80154C7C 00151BBC  3B E3 71 A0 */	addi r31, r3, sincosTable___5JMath@l
/* 80154C80 00151BC0  C3 02 A2 8C */	lfs f24, lbl_805185EC@sda21(r2)
/* 80154C84 00151BC4  3B A0 00 00 */	li r29, 0
/* 80154C88 00151BC8  C3 22 A2 88 */	lfs f25, lbl_805185E8@sda21(r2)
/* 80154C8C 00151BCC  3F C0 43 30 */	lis r30, 0x4330
/* 80154C90 00151BD0  C3 42 A2 90 */	lfs f26, lbl_805185F0@sda21(r2)
/* 80154C94 00151BD4  C3 62 A2 94 */	lfs f27, lbl_805185F4@sda21(r2)
/* 80154C98 00151BD8  C3 82 A2 9C */	lfs f28, lbl_805185FC@sda21(r2)
/* 80154C9C 00151BDC  C3 A2 A2 98 */	lfs f29, lbl_805185F8@sda21(r2)
/* 80154CA0 00151BE0  C3 C2 A2 68 */	lfs f30, lbl_805185C8@sda21(r2)
/* 80154CA4 00151BE4  C3 E2 A2 A0 */	lfs f31, lbl_80518600@sda21(r2)
.L_80154CA8:
/* 80154CA8 00151BE8  3B 80 00 00 */	li r28, 0
.L_80154CAC:
/* 80154CAC 00151BEC  3B 60 00 00 */	li r27, 0
/* 80154CB0 00151BF0  48 00 02 70 */	b .L_80154F20
.L_80154CB4:
/* 80154CB4 00151BF4  4B F7 48 ED */	bl rand
/* 80154CB8 00151BF8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80154CBC 00151BFC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80154CC0 00151C00  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80154CC4 00151C04  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 80154CC8 00151C08  EC 00 B0 28 */	fsubs f0, f0, f22
/* 80154CCC 00151C0C  EC 00 B8 24 */	fdivs f0, f0, f23
/* 80154CD0 00151C10  EE B8 C8 3A */	fmadds f21, f24, f0, f25
/* 80154CD4 00151C14  4B F7 48 CD */	bl rand
/* 80154CD8 00151C18  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80154CDC 00151C1C  93 C1 00 50 */	stw r30, 0x50(r1)
/* 80154CE0 00151C20  90 01 00 54 */	stw r0, 0x54(r1)
/* 80154CE4 00151C24  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 80154CE8 00151C28  EC 00 B0 28 */	fsubs f0, f0, f22
/* 80154CEC 00151C2C  EC 00 B8 24 */	fdivs f0, f0, f23
/* 80154CF0 00151C30  EE 9A 00 32 */	fmuls f20, f26, f0
/* 80154CF4 00151C34  4B F7 48 AD */	bl rand
/* 80154CF8 00151C38  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80154CFC 00151C3C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 80154D00 00151C40  FC 20 A0 90 */	fmr f1, f20
/* 80154D04 00151C44  90 01 00 5C */	stw r0, 0x5c(r1)
/* 80154D08 00151C48  FC 14 F0 40 */	fcmpo cr0, f20, f30
/* 80154D0C 00151C4C  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 80154D10 00151C50  EC 00 B0 28 */	fsubs f0, f0, f22
/* 80154D14 00151C54  EC 00 B8 24 */	fdivs f0, f0, f23
/* 80154D18 00151C58  EC 1C E8 3A */	fmadds f0, f28, f0, f29
/* 80154D1C 00151C5C  EC 5B 00 2A */	fadds f2, f27, f0
/* 80154D20 00151C60  40 80 00 08 */	bge .L_80154D28
/* 80154D24 00151C64  FC 20 A0 50 */	fneg f1, f20
.L_80154D28:
/* 80154D28 00151C68  EC 01 07 F2 */	fmuls f0, f1, f31
/* 80154D2C 00151C6C  FC 14 F0 40 */	fcmpo cr0, f20, f30
/* 80154D30 00151C70  FC 00 00 1E */	fctiwz f0, f0
/* 80154D34 00151C74  D8 01 00 60 */	stfd f0, 0x60(r1)
/* 80154D38 00151C78  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80154D3C 00151C7C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80154D40 00151C80  7C 7F 02 14 */	add r3, r31, r0
/* 80154D44 00151C84  C0 03 00 04 */	lfs f0, 4(r3)
/* 80154D48 00151C88  EC 35 00 32 */	fmuls f1, f21, f0
/* 80154D4C 00151C8C  40 80 00 30 */	bge .L_80154D7C
/* 80154D50 00151C90  C0 02 A2 A4 */	lfs f0, lbl_80518604@sda21(r2)
/* 80154D54 00151C94  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80154D58 00151C98  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80154D5C 00151C9C  EC 14 00 32 */	fmuls f0, f20, f0
/* 80154D60 00151CA0  FC 00 00 1E */	fctiwz f0, f0
/* 80154D64 00151CA4  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 80154D68 00151CA8  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 80154D6C 00151CAC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80154D70 00151CB0  7C 03 04 2E */	lfsx f0, r3, r0
/* 80154D74 00151CB4  FC 00 00 50 */	fneg f0, f0
/* 80154D78 00151CB8  48 00 00 24 */	b .L_80154D9C
.L_80154D7C:
/* 80154D7C 00151CBC  EC 14 07 F2 */	fmuls f0, f20, f31
/* 80154D80 00151CC0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80154D84 00151CC4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 80154D88 00151CC8  FC 00 00 1E */	fctiwz f0, f0
/* 80154D8C 00151CCC  D8 01 00 70 */	stfd f0, 0x70(r1)
/* 80154D90 00151CD0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80154D94 00151CD4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80154D98 00151CD8  7C 03 04 2E */	lfsx f0, r3, r0
.L_80154D9C:
/* 80154D9C 00151CDC  EC 15 00 32 */	fmuls f0, f21, f0
/* 80154DA0 00151CE0  38 00 00 02 */	li r0, 2
/* 80154DA4 00151CE4  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80154DA8 00151CE8  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 80154DAC 00151CEC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80154DB0 00151CF0  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80154DB4 00151CF4  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 80154DB8 00151CF8  81 83 00 00 */	lwz r12, 0(r3)
/* 80154DBC 00151CFC  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80154DC0 00151D00  7D 89 03 A6 */	mtctr r12
/* 80154DC4 00151D04  4E 80 04 21 */	bctrl 
/* 80154DC8 00151D08  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80154DCC 00151D0C  38 C0 00 00 */	li r6, 0
/* 80154DD0 00151D10  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80154DD4 00151D14  7C 7A 1B 79 */	or. r26, r3, r3
/* 80154DD8 00151D18  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 80154DDC 00151D1C  EC 81 00 2A */	fadds f4, f1, f0
/* 80154DE0 00151D20  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 80154DE4 00151D24  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 80154DE8 00151D28  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80154DEC 00151D2C  EC 43 10 2A */	fadds f2, f3, f2
/* 80154DF0 00151D30  90 CD 92 F8 */	stw r6, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 80154DF4 00151D34  EC 01 00 2A */	fadds f0, f1, f0
/* 80154DF8 00151D38  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 80154DFC 00151D3C  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 80154E00 00151D40  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80154E04 00151D44  41 82 00 F8 */	beq .L_80154EFC
/* 80154E08 00151D48  3C A0 80 4B */	lis r5, __vt__Q24Game15CreatureInitArg@ha
/* 80154E0C 00151D4C  3C 80 80 4B */	lis r4, __vt__Q24Game11PikiInitArg@ha
/* 80154E10 00151D50  38 A5 A2 F4 */	addi r5, r5, __vt__Q24Game15CreatureInitArg@l
/* 80154E14 00151D54  38 00 00 0F */	li r0, 0xf
/* 80154E18 00151D58  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80154E1C 00151D5C  38 A4 10 F4 */	addi r5, r4, __vt__Q24Game11PikiInitArg@l
/* 80154E20 00151D60  38 81 00 20 */	addi r4, r1, 0x20
/* 80154E24 00151D64  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80154E28 00151D68  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154E2C 00151D6C  90 C1 00 28 */	stw r6, 0x28(r1)
/* 80154E30 00151D70  4B FE 61 99 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 80154E34 00151D74  7F 43 D3 78 */	mr r3, r26
/* 80154E38 00151D78  38 81 00 2C */	addi r4, r1, 0x2c
/* 80154E3C 00151D7C  38 A0 00 00 */	li r5, 0
/* 80154E40 00151D80  4B FE 63 69 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 80154E44 00151D84  4B F7 47 5D */	bl rand
/* 80154E48 00151D88  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80154E4C 00151D8C  3C 00 43 30 */	lis r0, 0x4330
/* 80154E50 00151D90  90 61 00 74 */	stw r3, 0x74(r1)
/* 80154E54 00151D94  7F 43 D3 78 */	mr r3, r26
/* 80154E58 00151D98  C8 62 A2 B0 */	lfd f3, lbl_80518610@sda21(r2)
/* 80154E5C 00151D9C  7F A4 EB 78 */	mr r4, r29
/* 80154E60 00151DA0  90 01 00 70 */	stw r0, 0x70(r1)
/* 80154E64 00151DA4  C0 22 A2 84 */	lfs f1, lbl_805185E4@sda21(r2)
/* 80154E68 00151DA8  C8 41 00 70 */	lfd f2, 0x70(r1)
/* 80154E6C 00151DAC  C0 02 A2 90 */	lfs f0, lbl_805185F0@sda21(r2)
/* 80154E70 00151DB0  EC 42 18 28 */	fsubs f2, f2, f3
/* 80154E74 00151DB4  EC 22 08 24 */	fdivs f1, f2, f1
/* 80154E78 00151DB8  EC 00 00 72 */	fmuls f0, f0, f1
/* 80154E7C 00151DBC  D0 1A 01 FC */	stfs f0, 0x1fc(r26)
/* 80154E80 00151DC0  4B FF 57 41 */	bl changeShape__Q24Game4PikiFi
/* 80154E84 00151DC4  7F 43 D3 78 */	mr r3, r26
/* 80154E88 00151DC8  7F 84 E3 78 */	mr r4, r28
/* 80154E8C 00151DCC  4B FF 58 E5 */	bl changeHappa__Q24Game4PikiFi
/* 80154E90 00151DD0  4B F7 47 11 */	bl rand
/* 80154E94 00151DD4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80154E98 00151DD8  3C 00 43 30 */	lis r0, 0x4330
/* 80154E9C 00151DDC  90 61 00 6C */	stw r3, 0x6c(r1)
/* 80154EA0 00151DE0  7F 43 D3 78 */	mr r3, r26
/* 80154EA4 00151DE4  C0 42 A2 68 */	lfs f2, lbl_805185C8@sda21(r2)
/* 80154EA8 00151DE8  38 81 00 14 */	addi r4, r1, 0x14
/* 80154EAC 00151DEC  90 01 00 68 */	stw r0, 0x68(r1)
/* 80154EB0 00151DF0  C8 22 A2 B0 */	lfd f1, lbl_80518610@sda21(r2)
/* 80154EB4 00151DF4  C8 01 00 68 */	lfd f0, 0x68(r1)
/* 80154EB8 00151DF8  C0 62 A2 84 */	lfs f3, lbl_805185E4@sda21(r2)
/* 80154EBC 00151DFC  EC 80 08 28 */	fsubs f4, f0, f1
/* 80154EC0 00151E00  C0 22 A2 AC */	lfs f1, lbl_8051860C@sda21(r2)
/* 80154EC4 00151E04  C0 02 A2 A8 */	lfs f0, lbl_80518608@sda21(r2)
/* 80154EC8 00151E08  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 80154ECC 00151E0C  EC 64 18 24 */	fdivs f3, f4, f3
/* 80154ED0 00151E10  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 80154ED4 00151E14  EC 01 00 FE */	fnmadds f0, f1, f3, f0
/* 80154ED8 00151E18  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80154EDC 00151E1C  81 9A 00 00 */	lwz r12, 0(r26)
/* 80154EE0 00151E20  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 80154EE4 00151E24  7D 89 03 A6 */	mtctr r12
/* 80154EE8 00151E28  4E 80 04 21 */	bctrl 
/* 80154EEC 00151E2C  7F 43 D3 78 */	mr r3, r26
/* 80154EF0 00151E30  38 80 00 00 */	li r4, 0
/* 80154EF4 00151E34  4B FE 6B 5D */	bl movie_begin__Q24Game8CreatureFb
/* 80154EF8 00151E38  48 00 00 24 */	b .L_80154F1C
.L_80154EFC:
/* 80154EFC 00151E3C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154F00 00151E40  7F A4 EB 78 */	mr r4, r29
/* 80154F04 00151E44  7F 85 E3 78 */	mr r5, r28
/* 80154F08 00151E48  38 63 00 A8 */	addi r3, r3, 0xa8
/* 80154F0C 00151E4C  48 09 C5 11 */	bl getCount__Q24Game13PikiContainerFii
/* 80154F10 00151E50  80 83 00 00 */	lwz r4, 0(r3)
/* 80154F14 00151E54  38 04 00 01 */	addi r0, r4, 1
/* 80154F18 00151E58  90 03 00 00 */	stw r0, 0(r3)
.L_80154F1C:
/* 80154F1C 00151E5C  3B 7B 00 01 */	addi r27, r27, 1
.L_80154F20:
/* 80154F20 00151E60  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154F24 00151E64  7F A4 EB 78 */	mr r4, r29
/* 80154F28 00151E68  7F 85 E3 78 */	mr r5, r28
/* 80154F2C 00151E6C  38 63 00 60 */	addi r3, r3, 0x60
/* 80154F30 00151E70  48 09 C4 ED */	bl getCount__Q24Game13PikiContainerFii
/* 80154F34 00151E74  80 03 00 00 */	lwz r0, 0(r3)
/* 80154F38 00151E78  7C 1B 00 00 */	cmpw r27, r0
/* 80154F3C 00151E7C  41 80 FD 78 */	blt .L_80154CB4
/* 80154F40 00151E80  3B 9C 00 01 */	addi r28, r28, 1
/* 80154F44 00151E84  2C 1C 00 03 */	cmpwi r28, 3
/* 80154F48 00151E88  41 80 FD 64 */	blt .L_80154CAC
/* 80154F4C 00151E8C  3B BD 00 01 */	addi r29, r29, 1
/* 80154F50 00151E90  2C 1D 00 07 */	cmpwi r29, 7
/* 80154F54 00151E94  41 80 FD 54 */	blt .L_80154CA8
/* 80154F58 00151E98  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80154F5C 00151E9C  38 63 00 60 */	addi r3, r3, 0x60
/* 80154F60 00151EA0  48 09 C3 2D */	bl clear__Q24Game13PikiContainerFv
/* 80154F64 00151EA4  E3 E1 01 48 */	psq_l f31, 328(r1), 0, qr0
/* 80154F68 00151EA8  CB E1 01 40 */	lfd f31, 0x140(r1)
/* 80154F6C 00151EAC  E3 C1 01 38 */	psq_l f30, 312(r1), 0, qr0
/* 80154F70 00151EB0  CB C1 01 30 */	lfd f30, 0x130(r1)
/* 80154F74 00151EB4  E3 A1 01 28 */	psq_l f29, 296(r1), 0, qr0
/* 80154F78 00151EB8  CB A1 01 20 */	lfd f29, 0x120(r1)
/* 80154F7C 00151EBC  E3 81 01 18 */	psq_l f28, 280(r1), 0, qr0
/* 80154F80 00151EC0  CB 81 01 10 */	lfd f28, 0x110(r1)
/* 80154F84 00151EC4  E3 61 01 08 */	psq_l f27, 264(r1), 0, qr0
/* 80154F88 00151EC8  CB 61 01 00 */	lfd f27, 0x100(r1)
/* 80154F8C 00151ECC  E3 41 00 F8 */	psq_l f26, 248(r1), 0, qr0
/* 80154F90 00151ED0  CB 41 00 F0 */	lfd f26, 0xf0(r1)
/* 80154F94 00151ED4  E3 21 00 E8 */	psq_l f25, 232(r1), 0, qr0
/* 80154F98 00151ED8  CB 21 00 E0 */	lfd f25, 0xe0(r1)
/* 80154F9C 00151EDC  E3 01 00 D8 */	psq_l f24, 216(r1), 0, qr0
/* 80154FA0 00151EE0  CB 01 00 D0 */	lfd f24, 0xd0(r1)
/* 80154FA4 00151EE4  E2 E1 00 C8 */	psq_l f23, 200(r1), 0, qr0
/* 80154FA8 00151EE8  CA E1 00 C0 */	lfd f23, 0xc0(r1)
/* 80154FAC 00151EEC  E2 C1 00 B8 */	psq_l f22, 184(r1), 0, qr0
/* 80154FB0 00151EF0  CA C1 00 B0 */	lfd f22, 0xb0(r1)
/* 80154FB4 00151EF4  E2 A1 00 A8 */	psq_l f21, 168(r1), 0, qr0
/* 80154FB8 00151EF8  CA A1 00 A0 */	lfd f21, 0xa0(r1)
/* 80154FBC 00151EFC  E2 81 00 98 */	psq_l f20, 152(r1), 0, qr0
/* 80154FC0 00151F00  CA 81 00 90 */	lfd f20, 0x90(r1)
/* 80154FC4 00151F04  BB 41 00 78 */	lmw r26, 0x78(r1)
/* 80154FC8 00151F08  80 01 01 54 */	lwz r0, 0x154(r1)
/* 80154FCC 00151F0C  7C 08 03 A6 */	mtlr r0
/* 80154FD0 00151F10  38 21 01 50 */	addi r1, r1, 0x150
/* 80154FD4 00151F14  4E 80 00 20 */	blr 

.if version == 1
.global setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll:
/* 80154FD8 00151F18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80154FDC 00151F1C  7C 08 02 A6 */	mflr r0
/* 80154FE0 00151F20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154FE4 00151F24  BF 41 00 08 */	stmw r26, 8(r1)
/* 80154FE8 00151F28  7C 7C 1B 78 */	mr r28, r3
/* 80154FEC 00151F2C  7C 9D 23 78 */	mr r29, r4
/* 80154FF0 00151F30  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80154FF4 00151F34  48 00 5C 2D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80154FF8 00151F38  28 03 00 00 */	cmplwi r3, 0
/* 80154FFC 00151F3C  3B C0 00 00 */	li r30, 0
/* 80155000 00151F40  41 82 00 08 */	beq .L_80155008
/* 80155004 00151F44  A3 C3 02 DC */	lhz r30, 0x2dc(r3)
.L_80155008:
/* 80155008 00151F48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015500C 00151F4C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80155010 00151F50  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80155014 00151F54  28 00 00 00 */	cmplwi r0, 0
/* 80155018 00151F58  40 82 00 0C */	bne .L_80155024
/* 8015501C 00151F5C  38 00 00 01 */	li r0, 1
/* 80155020 00151F60  98 1D 00 C0 */	stb r0, 0xc0(r29)
.L_80155024:
/* 80155024 00151F64  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155028 00151F68  38 80 00 09 */	li r4, 9
/* 8015502C 00151F6C  38 63 00 48 */	addi r3, r3, 0x48
/* 80155030 00151F70  48 09 0F A1 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155034 00151F74  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80155038 00151F78  7C 7F 1B 78 */	mr r31, r3
/* 8015503C 00151F7C  38 80 00 08 */	li r4, 8
/* 80155040 00151F80  38 65 00 48 */	addi r3, r5, 0x48
/* 80155044 00151F84  48 09 0F 8D */	bl hasItem__Q24Game10OlimarDataFi
/* 80155048 00151F88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8015504C 00151F8C  38 80 00 00 */	li r4, 0
/* 80155050 00151F90  41 82 00 10 */	beq .L_80155060
/* 80155054 00151F94  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80155058 00151F98  41 82 00 08 */	beq .L_80155060
/* 8015505C 00151F9C  38 80 00 01 */	li r4, 1
.L_80155060:
/* 80155060 00151FA0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80155064 00151FA4  41 82 00 0C */	beq .L_80155070
/* 80155068 00151FA8  38 60 00 03 */	li r3, 3
/* 8015506C 00151FAC  48 00 00 24 */	b .L_80155090
.L_80155070:
/* 80155070 00151FB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155074 00151FB4  41 82 00 0C */	beq .L_80155080
/* 80155078 00151FB8  38 60 00 01 */	li r3, 1
/* 8015507C 00151FBC  48 00 00 14 */	b .L_80155090
.L_80155080:
/* 80155080 00151FC0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80155084 00151FC4  38 60 00 00 */	li r3, 0
/* 80155088 00151FC8  41 82 00 08 */	beq .L_80155090
/* 8015508C 00151FCC  38 60 00 02 */	li r3, 2
.L_80155090:
/* 80155090 00151FD0  90 7D 00 64 */	stw r3, 0x64(r29)
/* 80155094 00151FD4  38 80 00 01 */	li r4, 1
/* 80155098 00151FD8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015509C 00151FDC  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550A0 00151FE0  48 09 C5 11 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550A4 00151FE4  90 7D 00 68 */	stw r3, 0x68(r29)
/* 801550A8 00151FE8  38 80 00 02 */	li r4, 2
/* 801550AC 00151FEC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550B0 00151FF0  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550B4 00151FF4  48 09 C4 FD */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550B8 00151FF8  90 7D 00 6C */	stw r3, 0x6c(r29)
/* 801550BC 00151FFC  38 80 00 00 */	li r4, 0
/* 801550C0 00152000  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550C4 00152004  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550C8 00152008  48 09 C4 E9 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550CC 0015200C  90 7D 00 70 */	stw r3, 0x70(r29)
/* 801550D0 00152010  38 80 00 04 */	li r4, 4
/* 801550D4 00152014  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550D8 00152018  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550DC 0015201C  48 09 C4 D5 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550E0 00152020  90 7D 00 74 */	stw r3, 0x74(r29)
/* 801550E4 00152024  38 80 00 03 */	li r4, 3
/* 801550E8 00152028  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550EC 0015202C  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550F0 00152030  48 09 C4 C1 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550F4 00152034  2C 1E 00 00 */	cmpwi r30, 0
/* 801550F8 00152038  90 7D 00 78 */	stw r3, 0x78(r29)
/* 801550FC 0015203C  38 00 00 00 */	li r0, 0
/* 80155100 00152040  41 80 00 10 */	blt .L_80155110
/* 80155104 00152044  2C 1E 00 07 */	cmpwi r30, 7
/* 80155108 00152048  40 80 00 08 */	bge .L_80155110
/* 8015510C 0015204C  38 00 00 01 */	li r0, 1
.L_80155110:
/* 80155110 00152050  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80155114 00152054  40 82 00 20 */	bne .L_80155134
/* 80155118 00152058  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 8015511C 0015205C  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155120 00152060  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 80155124 00152064  38 80 00 77 */	li r4, 0x77
/* 80155128 00152068  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 8015512C 0015206C  4C C6 31 82 */	crclr 6
/* 80155130 00152070  4B ED 55 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80155134:
/* 80155134 00152074  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155138 00152078  57 C5 28 34 */	slwi r5, r30, 5
/* 8015513C 0015207C  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 80155140 00152080  38 80 00 01 */	li r4, 1
/* 80155144 00152084  7F E0 2A 14 */	add r31, r0, r5
/* 80155148 00152088  7F E3 FB 78 */	mr r3, r31
/* 8015514C 0015208C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155150 00152090  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80155154 00152094  7D 89 03 A6 */	mtctr r12
/* 80155158 00152098  4E 80 04 21 */	bctrl 
/* 8015515C 0015209C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155160 001520A0  90 7D 00 7C */	stw r3, 0x7c(r29)
/* 80155164 001520A4  38 00 00 00 */	li r0, 0
/* 80155168 001520A8  41 80 00 10 */	blt .L_80155178
/* 8015516C 001520AC  2C 1E 00 07 */	cmpwi r30, 7
/* 80155170 001520B0  40 80 00 08 */	bge .L_80155178
/* 80155174 001520B4  38 00 00 01 */	li r0, 1
.L_80155178:
/* 80155178 001520B8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8015517C 001520BC  40 82 00 20 */	bne .L_8015519C
/* 80155180 001520C0  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 80155184 001520C4  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155188 001520C8  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 8015518C 001520CC  38 80 00 77 */	li r4, 0x77
/* 80155190 001520D0  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 80155194 001520D4  4C C6 31 82 */	crclr 6
/* 80155198 001520D8  4B ED 54 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015519C:
/* 8015519C 001520DC  7F E3 FB 78 */	mr r3, r31
/* 801551A0 001520E0  38 80 00 02 */	li r4, 2
/* 801551A4 001520E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801551A8 001520E8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801551AC 001520EC  7D 89 03 A6 */	mtctr r12
/* 801551B0 001520F0  4E 80 04 21 */	bctrl 
/* 801551B4 001520F4  2C 1E 00 00 */	cmpwi r30, 0
/* 801551B8 001520F8  90 7D 00 80 */	stw r3, 0x80(r29)
/* 801551BC 001520FC  38 00 00 00 */	li r0, 0
/* 801551C0 00152100  41 80 00 10 */	blt .L_801551D0
/* 801551C4 00152104  2C 1E 00 07 */	cmpwi r30, 7
/* 801551C8 00152108  40 80 00 08 */	bge .L_801551D0
/* 801551CC 0015210C  38 00 00 01 */	li r0, 1
.L_801551D0:
/* 801551D0 00152110  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801551D4 00152114  40 82 00 20 */	bne .L_801551F4
/* 801551D8 00152118  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 801551DC 0015211C  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 801551E0 00152120  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 801551E4 00152124  38 80 00 77 */	li r4, 0x77
/* 801551E8 00152128  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 801551EC 0015212C  4C C6 31 82 */	crclr 6
/* 801551F0 00152130  4B ED 54 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801551F4:
/* 801551F4 00152134  7F E3 FB 78 */	mr r3, r31
/* 801551F8 00152138  38 80 00 00 */	li r4, 0
/* 801551FC 0015213C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155200 00152140  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80155204 00152144  7D 89 03 A6 */	mtctr r12
/* 80155208 00152148  4E 80 04 21 */	bctrl 
/* 8015520C 0015214C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155210 00152150  90 7D 00 84 */	stw r3, 0x84(r29)
/* 80155214 00152154  38 00 00 00 */	li r0, 0
/* 80155218 00152158  41 80 00 10 */	blt .L_80155228
/* 8015521C 0015215C  2C 1E 00 07 */	cmpwi r30, 7
/* 80155220 00152160  40 80 00 08 */	bge .L_80155228
/* 80155224 00152164  38 00 00 01 */	li r0, 1
.L_80155228:
/* 80155228 00152168  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8015522C 0015216C  40 82 00 20 */	bne .L_8015524C
/* 80155230 00152170  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 80155234 00152174  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155238 00152178  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 8015523C 0015217C  38 80 00 77 */	li r4, 0x77
/* 80155240 00152180  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 80155244 00152184  4C C6 31 82 */	crclr 6
/* 80155248 00152188  4B ED 53 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015524C:
/* 8015524C 0015218C  7F E3 FB 78 */	mr r3, r31
/* 80155250 00152190  38 80 00 04 */	li r4, 4
/* 80155254 00152194  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155258 00152198  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8015525C 0015219C  7D 89 03 A6 */	mtctr r12
/* 80155260 001521A0  4E 80 04 21 */	bctrl 
/* 80155264 001521A4  2C 1E 00 00 */	cmpwi r30, 0
/* 80155268 001521A8  90 7D 00 88 */	stw r3, 0x88(r29)
/* 8015526C 001521AC  38 00 00 00 */	li r0, 0
/* 80155270 001521B0  41 80 00 10 */	blt .L_80155280
/* 80155274 001521B4  2C 1E 00 07 */	cmpwi r30, 7
/* 80155278 001521B8  40 80 00 08 */	bge .L_80155280
/* 8015527C 001521BC  38 00 00 01 */	li r0, 1
.L_80155280:
/* 80155280 001521C0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80155284 001521C4  40 82 00 20 */	bne .L_801552A4
/* 80155288 001521C8  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 8015528C 001521CC  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155290 001521D0  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 80155294 001521D4  38 80 00 77 */	li r4, 0x77
/* 80155298 001521D8  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 8015529C 001521DC  4C C6 31 82 */	crclr 6
/* 801552A0 001521E0  4B ED 53 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801552A4:
/* 801552A4 001521E4  7F E3 FB 78 */	mr r3, r31
/* 801552A8 001521E8  38 80 00 03 */	li r4, 3
/* 801552AC 001521EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801552B0 001521F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801552B4 001521F4  7D 89 03 A6 */	mtctr r12
/* 801552B8 001521F8  4E 80 04 21 */	bctrl 
/* 801552BC 001521FC  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 801552C0 00152200  3B E0 00 00 */	li r31, 0
/* 801552C4 00152204  90 7D 00 8C */	stw r3, 0x8c(r29)
/* 801552C8 00152208  3B 64 22 EC */	addi r27, r4, formationPikis__Q24Game8GameStat@l
/* 801552CC 0015220C  7F FE FB 78 */	mr r30, r31
.L_801552D0:
/* 801552D0 00152210  7F 63 DB 78 */	mr r3, r27
/* 801552D4 00152214  81 9B 00 00 */	lwz r12, 0(r27)
/* 801552D8 00152218  81 8C 00 08 */	lwz r12, 8(r12)
/* 801552DC 0015221C  7D 89 03 A6 */	mtctr r12
/* 801552E0 00152220  4E 80 04 21 */	bctrl 
/* 801552E4 00152224  3B DE 00 01 */	addi r30, r30, 1
/* 801552E8 00152228  7F FF 1A 14 */	add r31, r31, r3
/* 801552EC 0015222C  2C 1E 00 07 */	cmpwi r30, 7
/* 801552F0 00152230  3B 7B 00 20 */	addi r27, r27, 0x20
/* 801552F4 00152234  41 80 FF DC */	blt .L_801552D0
/* 801552F8 00152238  3C 60 80 51 */	lis r3, workPikis__Q24Game8GameStat@ha
/* 801552FC 0015223C  3B 60 00 00 */	li r27, 0
/* 80155300 00152240  3B 43 25 0C */	addi r26, r3, workPikis__Q24Game8GameStat@l
/* 80155304 00152244  7F 7E DB 78 */	mr r30, r27
.L_80155308:
/* 80155308 00152248  7F 43 D3 78 */	mr r3, r26
/* 8015530C 0015224C  81 9A 00 00 */	lwz r12, 0(r26)
/* 80155310 00152250  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155314 00152254  7D 89 03 A6 */	mtctr r12
/* 80155318 00152258  4E 80 04 21 */	bctrl 
/* 8015531C 0015225C  3B DE 00 01 */	addi r30, r30, 1
/* 80155320 00152260  7F 7B 1A 14 */	add r27, r27, r3
/* 80155324 00152264  2C 1E 00 07 */	cmpwi r30, 7
/* 80155328 00152268  3B 5A 00 20 */	addi r26, r26, 0x20
/* 8015532C 0015226C  41 80 FF DC */	blt .L_80155308
/* 80155330 00152270  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 80155334 00152274  85 83 25 EC */	lwzu r12, alivePikis__Q24Game8GameStat@l(r3)
/* 80155338 00152278  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015533C 0015227C  7D 89 03 A6 */	mtctr r12
/* 80155340 00152280  4E 80 04 21 */	bctrl 
/* 80155344 00152284  7C 1F 18 50 */	subf r0, r31, r3
/* 80155348 00152288  38 80 00 01 */	li r4, 1
/* 8015534C 0015228C  7C 1B 00 50 */	subf r0, r27, r0
/* 80155350 00152290  90 1D 00 90 */	stw r0, 0x90(r29)
/* 80155354 00152294  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80155358 00152298  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 8015535C 0015229C  80 A5 00 E8 */	lwz r5, 0xe8(r5)
/* 80155360 001522A0  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80155364 001522A4  7C 05 00 50 */	subf r0, r5, r0
/* 80155368 001522A8  90 1D 00 94 */	stw r0, 0x94(r29)
/* 8015536C 001522AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80155370 001522B0  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80155374 001522B4  98 1D 00 A5 */	stb r0, 0xa5(r29)
/* 80155378 001522B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015537C 001522BC  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80155380 001522C0  7C 00 00 34 */	cntlzw r0, r0
/* 80155384 001522C4  54 00 D9 7E */	srwi r0, r0, 5
/* 80155388 001522C8  98 1D 00 A6 */	stb r0, 0xa6(r29)
/* 8015538C 001522CC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155390 001522D0  48 09 1C 91 */	bl hasContainer__Q24Game8PlayDataFi
/* 80155394 001522D4  98 7D 00 A0 */	stb r3, 0xa0(r29)
/* 80155398 001522D8  38 80 00 02 */	li r4, 2
/* 8015539C 001522DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553A0 001522E0  48 09 1C 81 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553A4 001522E4  98 7D 00 A1 */	stb r3, 0xa1(r29)
/* 801553A8 001522E8  38 80 00 00 */	li r4, 0
/* 801553AC 001522EC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553B0 001522F0  48 09 1C 71 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553B4 001522F4  98 7D 00 A2 */	stb r3, 0xa2(r29)
/* 801553B8 001522F8  38 80 00 04 */	li r4, 4
/* 801553BC 001522FC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553C0 00152300  48 09 1C 61 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553C4 00152304  98 7D 00 A3 */	stb r3, 0xa3(r29)
/* 801553C8 00152308  38 80 00 03 */	li r4, 3
/* 801553CC 0015230C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553D0 00152310  48 09 1C 51 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553D4 00152314  98 7D 00 A4 */	stb r3, 0xa4(r29)
/* 801553D8 00152318  38 80 00 01 */	li r4, 1
/* 801553DC 0015231C  80 1C 01 90 */	lwz r0, 0x1b4(r28)
/* 801553E0 00152320  90 1D 00 9C */	stw r0, 0x9c(r29)
/* 801553E4 00152324  80 7C 02 2C */	lwz r3, 0x250(r28)
/* 801553E8 00152328  80 03 00 48 */	lwz r0, 0x48(r3)
/* 801553EC 0015232C  90 1D 00 98 */	stw r0, 0x98(r29)
/* 801553F0 00152330  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553F4 00152334  48 09 2F E5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 801553F8 00152338  90 7D 00 3C */	stw r3, 0x3c(r29)
/* 801553FC 0015233C  38 80 00 01 */	li r4, 1
/* 80155400 00152340  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155404 00152344  48 09 31 D5 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 80155408 00152348  90 7D 00 40 */	stw r3, 0x40(r29)
/* 8015540C 0015234C  38 80 00 00 */	li r4, 0
/* 80155410 00152350  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155414 00152354  48 09 2F C5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155418 00152358  90 7D 00 44 */	stw r3, 0x44(r29)
/* 8015541C 0015235C  38 80 00 00 */	li r4, 0
/* 80155420 00152360  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155424 00152364  48 09 31 B5 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 80155428 00152368  90 7D 00 48 */	stw r3, 0x48(r29)
/* 8015542C 0015236C  3B 40 00 00 */	li r26, 0
.L_80155430:
/* 80155430 00152370  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155434 00152374  7F 44 D3 78 */	mr r4, r26
/* 80155438 00152378  38 63 00 48 */	addi r3, r3, 0x48
/* 8015543C 0015237C  48 09 0B 95 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155440 00152380  38 1A 00 4C */	addi r0, r26, 0x4c
/* 80155444 00152384  3B 5A 00 01 */	addi r26, r26, 1
/* 80155448 00152388  2C 1A 00 0C */	cmpwi r26, 0xc
/* 8015544C 0015238C  7C 7D 01 AE */	stbx r3, r29, r0
/* 80155450 00152390  41 80 FF E0 */	blt .L_80155430
/* 80155454 00152394  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80155458 00152398  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 8015545C 0015239C  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 80155460 001523A0  80 A5 00 E8 */	lwz r5, 0xe8(r5)
/* 80155464 001523A4  80 04 00 48 */	lwz r0, 0x48(r4)
/* 80155468 001523A8  7C 05 00 50 */	subf r0, r5, r0
/* 8015546C 001523AC  90 1D 00 10 */	stw r0, 0x10(r29)
/* 80155470 001523B0  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80155474 001523B4  80 04 00 E8 */	lwz r0, 0xe8(r4)
/* 80155478 001523B8  90 1D 00 14 */	stw r0, 0x14(r29)
/* 8015547C 001523BC  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80155480 001523C0  80 04 00 EC */	lwz r0, 0xec(r4)
/* 80155484 001523C4  90 1D 00 24 */	stw r0, 0x24(r29)
/* 80155488 001523C8  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 8015548C 001523CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155490 001523D0  7D 89 03 A6 */	mtctr r12
/* 80155494 001523D4  4E 80 04 21 */	bctrl 
/* 80155498 001523D8  7C 03 00 D0 */	neg r0, r3
/* 8015549C 001523DC  38 80 00 1E */	li r4, 0x1e
/* 801554A0 001523E0  7C 00 1B 78 */	or r0, r0, r3
/* 801554A4 001523E4  54 00 0F FE */	srwi r0, r0, 0x1f
/* 801554A8 001523E8  98 1D 00 2D */	stb r0, 0x2d(r29)
/* 801554AC 001523EC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801554B0 001523F0  48 09 1F 31 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801554B4 001523F4  98 7D 00 58 */	stb r3, 0x58(r29)
/* 801554B8 001523F8  38 80 00 1D */	li r4, 0x1d
/* 801554BC 001523FC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801554C0 00152400  48 09 1F 21 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801554C4 00152404  98 7D 00 59 */	stb r3, 0x59(r29)
/* 801554C8 00152408  BB 41 00 08 */	lmw r26, 8(r1)
/* 801554CC 0015240C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801554D0 00152410  7C 08 03 A6 */	mtlr r0
/* 801554D4 00152414  38 21 00 20 */	addi r1, r1, 0x20
/* 801554D8 00152418  4E 80 00 20 */	blr 
.else
.global setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll
setDispMemberSMenu__Q24Game17SingleGameSectionFRQ32og6Screen18DispMemberSMenuAll:
/* 80154FD8 00151F18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80154FDC 00151F1C  7C 08 02 A6 */	mflr r0
/* 80154FE0 00151F20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80154FE4 00151F24  BF 41 00 08 */	stmw r26, 8(r1)
/* 80154FE8 00151F28  7C 7C 1B 78 */	mr r28, r3
/* 80154FEC 00151F2C  7C 9D 23 78 */	mr r29, r4
/* 80154FF0 00151F30  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80154FF4 00151F34  48 00 5C 2D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80154FF8 00151F38  28 03 00 00 */	cmplwi r3, 0
/* 80154FFC 00151F3C  3B C0 00 00 */	li r30, 0
/* 80155000 00151F40  41 82 00 08 */	beq .L_80155008
/* 80155004 00151F44  A3 C3 02 DC */	lhz r30, 0x2dc(r3)
.L_80155008:
/* 80155008 00151F48  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015500C 00151F4C  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80155010 00151F50  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80155014 00151F54  28 00 00 00 */	cmplwi r0, 0
/* 80155018 00151F58  40 82 00 0C */	bne .L_80155024
/* 8015501C 00151F5C  38 00 00 01 */	li r0, 1
/* 80155020 00151F60  98 1D 00 C0 */	stb r0, 0xc0(r29)
.L_80155024:
/* 80155024 00151F64  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155028 00151F68  38 80 00 09 */	li r4, 9
/* 8015502C 00151F6C  38 63 00 48 */	addi r3, r3, 0x48
/* 80155030 00151F70  48 09 0F A1 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155034 00151F74  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80155038 00151F78  7C 7F 1B 78 */	mr r31, r3
/* 8015503C 00151F7C  38 80 00 08 */	li r4, 8
/* 80155040 00151F80  38 65 00 48 */	addi r3, r5, 0x48
/* 80155044 00151F84  48 09 0F 8D */	bl hasItem__Q24Game10OlimarDataFi
/* 80155048 00151F88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8015504C 00151F8C  38 80 00 00 */	li r4, 0
/* 80155050 00151F90  41 82 00 10 */	beq .L_80155060
/* 80155054 00151F94  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80155058 00151F98  41 82 00 08 */	beq .L_80155060
/* 8015505C 00151F9C  38 80 00 01 */	li r4, 1
.L_80155060:
/* 80155060 00151FA0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80155064 00151FA4  41 82 00 0C */	beq .L_80155070
/* 80155068 00151FA8  38 60 00 03 */	li r3, 3
/* 8015506C 00151FAC  48 00 00 24 */	b .L_80155090
.L_80155070:
/* 80155070 00151FB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155074 00151FB4  41 82 00 0C */	beq .L_80155080
/* 80155078 00151FB8  38 60 00 01 */	li r3, 1
/* 8015507C 00151FBC  48 00 00 14 */	b .L_80155090
.L_80155080:
/* 80155080 00151FC0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 80155084 00151FC4  38 60 00 00 */	li r3, 0
/* 80155088 00151FC8  41 82 00 08 */	beq .L_80155090
/* 8015508C 00151FCC  38 60 00 02 */	li r3, 2
.L_80155090:
/* 80155090 00151FD0  90 7D 00 64 */	stw r3, 0x64(r29)
/* 80155094 00151FD4  38 80 00 01 */	li r4, 1
/* 80155098 00151FD8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015509C 00151FDC  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550A0 00151FE0  48 09 C5 11 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550A4 00151FE4  90 7D 00 68 */	stw r3, 0x68(r29)
/* 801550A8 00151FE8  38 80 00 02 */	li r4, 2
/* 801550AC 00151FEC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550B0 00151FF0  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550B4 00151FF4  48 09 C4 FD */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550B8 00151FF8  90 7D 00 6C */	stw r3, 0x6c(r29)
/* 801550BC 00151FFC  38 80 00 00 */	li r4, 0
/* 801550C0 00152000  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550C4 00152004  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550C8 00152008  48 09 C4 E9 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550CC 0015200C  90 7D 00 70 */	stw r3, 0x70(r29)
/* 801550D0 00152010  38 80 00 04 */	li r4, 4
/* 801550D4 00152014  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550D8 00152018  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550DC 0015201C  48 09 C4 D5 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550E0 00152020  90 7D 00 74 */	stw r3, 0x74(r29)
/* 801550E4 00152024  38 80 00 03 */	li r4, 3
/* 801550E8 00152028  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801550EC 0015202C  38 63 00 A8 */	addi r3, r3, 0xa8
/* 801550F0 00152030  48 09 C4 C1 */	bl getColorSum__Q24Game13PikiContainerFi
/* 801550F4 00152034  2C 1E 00 00 */	cmpwi r30, 0
/* 801550F8 00152038  90 7D 00 78 */	stw r3, 0x78(r29)
/* 801550FC 0015203C  38 00 00 00 */	li r0, 0
/* 80155100 00152040  41 80 00 10 */	blt .L_80155110
/* 80155104 00152044  2C 1E 00 07 */	cmpwi r30, 7
/* 80155108 00152048  40 80 00 08 */	bge .L_80155110
/* 8015510C 0015204C  38 00 00 01 */	li r0, 1
.L_80155110:
/* 80155110 00152050  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80155114 00152054  40 82 00 20 */	bne .L_80155134
/* 80155118 00152058  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 8015511C 0015205C  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155120 00152060  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 80155124 00152064  38 80 00 77 */	li r4, 0x77
/* 80155128 00152068  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 8015512C 0015206C  4C C6 31 82 */	crclr 6
/* 80155130 00152070  4B ED 55 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80155134:
/* 80155134 00152074  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155138 00152078  57 C5 28 34 */	slwi r5, r30, 5
/* 8015513C 0015207C  38 03 22 EC */	addi r0, r3, formationPikis__Q24Game8GameStat@l
/* 80155140 00152080  38 80 00 01 */	li r4, 1
/* 80155144 00152084  7F E0 2A 14 */	add r31, r0, r5
/* 80155148 00152088  7F E3 FB 78 */	mr r3, r31
/* 8015514C 0015208C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155150 00152090  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80155154 00152094  7D 89 03 A6 */	mtctr r12
/* 80155158 00152098  4E 80 04 21 */	bctrl 
/* 8015515C 0015209C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155160 001520A0  90 7D 00 7C */	stw r3, 0x7c(r29)
/* 80155164 001520A4  38 00 00 00 */	li r0, 0
/* 80155168 001520A8  41 80 00 10 */	blt .L_80155178
/* 8015516C 001520AC  2C 1E 00 07 */	cmpwi r30, 7
/* 80155170 001520B0  40 80 00 08 */	bge .L_80155178
/* 80155174 001520B4  38 00 00 01 */	li r0, 1
.L_80155178:
/* 80155178 001520B8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8015517C 001520BC  40 82 00 20 */	bne .L_8015519C
/* 80155180 001520C0  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 80155184 001520C4  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155188 001520C8  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 8015518C 001520CC  38 80 00 77 */	li r4, 0x77
/* 80155190 001520D0  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 80155194 001520D4  4C C6 31 82 */	crclr 6
/* 80155198 001520D8  4B ED 54 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015519C:
/* 8015519C 001520DC  7F E3 FB 78 */	mr r3, r31
/* 801551A0 001520E0  38 80 00 02 */	li r4, 2
/* 801551A4 001520E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801551A8 001520E8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801551AC 001520EC  7D 89 03 A6 */	mtctr r12
/* 801551B0 001520F0  4E 80 04 21 */	bctrl 
/* 801551B4 001520F4  2C 1E 00 00 */	cmpwi r30, 0
/* 801551B8 001520F8  90 7D 00 80 */	stw r3, 0x80(r29)
/* 801551BC 001520FC  38 00 00 00 */	li r0, 0
/* 801551C0 00152100  41 80 00 10 */	blt .L_801551D0
/* 801551C4 00152104  2C 1E 00 07 */	cmpwi r30, 7
/* 801551C8 00152108  40 80 00 08 */	bge .L_801551D0
/* 801551CC 0015210C  38 00 00 01 */	li r0, 1
.L_801551D0:
/* 801551D0 00152110  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801551D4 00152114  40 82 00 20 */	bne .L_801551F4
/* 801551D8 00152118  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 801551DC 0015211C  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 801551E0 00152120  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 801551E4 00152124  38 80 00 77 */	li r4, 0x77
/* 801551E8 00152128  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 801551EC 0015212C  4C C6 31 82 */	crclr 6
/* 801551F0 00152130  4B ED 54 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801551F4:
/* 801551F4 00152134  7F E3 FB 78 */	mr r3, r31
/* 801551F8 00152138  38 80 00 00 */	li r4, 0
/* 801551FC 0015213C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155200 00152140  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80155204 00152144  7D 89 03 A6 */	mtctr r12
/* 80155208 00152148  4E 80 04 21 */	bctrl 
/* 8015520C 0015214C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155210 00152150  90 7D 00 84 */	stw r3, 0x84(r29)
/* 80155214 00152154  38 00 00 00 */	li r0, 0
/* 80155218 00152158  41 80 00 10 */	blt .L_80155228
/* 8015521C 0015215C  2C 1E 00 07 */	cmpwi r30, 7
/* 80155220 00152160  40 80 00 08 */	bge .L_80155228
/* 80155224 00152164  38 00 00 01 */	li r0, 1
.L_80155228:
/* 80155228 00152168  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8015522C 0015216C  40 82 00 20 */	bne .L_8015524C
/* 80155230 00152170  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 80155234 00152174  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155238 00152178  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 8015523C 0015217C  38 80 00 77 */	li r4, 0x77
/* 80155240 00152180  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 80155244 00152184  4C C6 31 82 */	crclr 6
/* 80155248 00152188  4B ED 53 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8015524C:
/* 8015524C 0015218C  7F E3 FB 78 */	mr r3, r31
/* 80155250 00152190  38 80 00 04 */	li r4, 4
/* 80155254 00152194  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155258 00152198  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 8015525C 0015219C  7D 89 03 A6 */	mtctr r12
/* 80155260 001521A0  4E 80 04 21 */	bctrl 
/* 80155264 001521A4  2C 1E 00 00 */	cmpwi r30, 0
/* 80155268 001521A8  90 7D 00 88 */	stw r3, 0x88(r29)
/* 8015526C 001521AC  38 00 00 00 */	li r0, 0
/* 80155270 001521B0  41 80 00 10 */	blt .L_80155280
/* 80155274 001521B4  2C 1E 00 07 */	cmpwi r30, 7
/* 80155278 001521B8  40 80 00 08 */	bge .L_80155280
/* 8015527C 001521BC  38 00 00 01 */	li r0, 1
.L_80155280:
/* 80155280 001521C0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80155284 001521C4  40 82 00 20 */	bne .L_801552A4
/* 80155288 001521C8  3C 60 80 48 */	lis r3, lbl_8047CFAC@ha
/* 8015528C 001521CC  3C A0 80 48 */	lis r5, lbl_8047CDC4@ha
/* 80155290 001521D0  38 63 CF AC */	addi r3, r3, lbl_8047CFAC@l
/* 80155294 001521D4  38 80 00 77 */	li r4, 0x77
/* 80155298 001521D8  38 A5 CD C4 */	addi r5, r5, lbl_8047CDC4@l
/* 8015529C 001521DC  4C C6 31 82 */	crclr 6
/* 801552A0 001521E0  4B ED 53 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801552A4:
/* 801552A4 001521E4  7F E3 FB 78 */	mr r3, r31
/* 801552A8 001521E8  38 80 00 03 */	li r4, 3
/* 801552AC 001521EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801552B0 001521F0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801552B4 001521F4  7D 89 03 A6 */	mtctr r12
/* 801552B8 001521F8  4E 80 04 21 */	bctrl 
/* 801552BC 001521FC  3C 80 80 51 */	lis r4, formationPikis__Q24Game8GameStat@ha
/* 801552C0 00152200  3B E0 00 00 */	li r31, 0
/* 801552C4 00152204  90 7D 00 8C */	stw r3, 0x8c(r29)
/* 801552C8 00152208  3B 64 22 EC */	addi r27, r4, formationPikis__Q24Game8GameStat@l
/* 801552CC 0015220C  7F FE FB 78 */	mr r30, r31
.L_801552D0:
/* 801552D0 00152210  7F 63 DB 78 */	mr r3, r27
/* 801552D4 00152214  81 9B 00 00 */	lwz r12, 0(r27)
/* 801552D8 00152218  81 8C 00 08 */	lwz r12, 8(r12)
/* 801552DC 0015221C  7D 89 03 A6 */	mtctr r12
/* 801552E0 00152220  4E 80 04 21 */	bctrl 
/* 801552E4 00152224  3B DE 00 01 */	addi r30, r30, 1
/* 801552E8 00152228  7F FF 1A 14 */	add r31, r31, r3
/* 801552EC 0015222C  2C 1E 00 07 */	cmpwi r30, 7
/* 801552F0 00152230  3B 7B 00 20 */	addi r27, r27, 0x20
/* 801552F4 00152234  41 80 FF DC */	blt .L_801552D0
/* 801552F8 00152238  3C 60 80 51 */	lis r3, workPikis__Q24Game8GameStat@ha
/* 801552FC 0015223C  3B 60 00 00 */	li r27, 0
/* 80155300 00152240  3B 43 25 0C */	addi r26, r3, workPikis__Q24Game8GameStat@l
/* 80155304 00152244  7F 7E DB 78 */	mr r30, r27
.L_80155308:
/* 80155308 00152248  7F 43 D3 78 */	mr r3, r26
/* 8015530C 0015224C  81 9A 00 00 */	lwz r12, 0(r26)
/* 80155310 00152250  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155314 00152254  7D 89 03 A6 */	mtctr r12
/* 80155318 00152258  4E 80 04 21 */	bctrl 
/* 8015531C 0015225C  3B DE 00 01 */	addi r30, r30, 1
/* 80155320 00152260  7F 7B 1A 14 */	add r27, r27, r3
/* 80155324 00152264  2C 1E 00 07 */	cmpwi r30, 7
/* 80155328 00152268  3B 5A 00 20 */	addi r26, r26, 0x20
/* 8015532C 0015226C  41 80 FF DC */	blt .L_80155308
/* 80155330 00152270  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 80155334 00152274  85 83 25 EC */	lwzu r12, alivePikis__Q24Game8GameStat@l(r3)
/* 80155338 00152278  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015533C 0015227C  7D 89 03 A6 */	mtctr r12
/* 80155340 00152280  4E 80 04 21 */	bctrl 
/* 80155344 00152284  7C 1F 18 50 */	subf r0, r31, r3
/* 80155348 00152288  38 80 00 01 */	li r4, 1
/* 8015534C 0015228C  7C 1B 00 50 */	subf r0, r27, r0
/* 80155350 00152290  90 1D 00 90 */	stw r0, 0x90(r29)
/* 80155354 00152294  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80155358 00152298  80 6D 93 F0 */	lwz r3, _aiConstants__4Game@sda21(r13)
/* 8015535C 0015229C  80 A5 00 E8 */	lwz r5, 0xe8(r5)
/* 80155360 001522A0  80 03 00 48 */	lwz r0, 0x48(r3)
/* 80155364 001522A4  7C 05 00 50 */	subf r0, r5, r0
/* 80155368 001522A8  90 1D 00 94 */	stw r0, 0x94(r29)
/* 8015536C 001522AC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80155370 001522B0  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80155374 001522B4  98 1D 00 A5 */	stb r0, 0xa5(r29)
/* 80155378 001522B8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 8015537C 001522BC  88 03 00 48 */	lbz r0, 0x48(r3)
/* 80155380 001522C0  7C 00 00 34 */	cntlzw r0, r0
/* 80155384 001522C4  54 00 D9 7E */	srwi r0, r0, 5
/* 80155388 001522C8  98 1D 00 A6 */	stb r0, 0xa6(r29)
/* 8015538C 001522CC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155390 001522D0  48 09 1C 91 */	bl hasContainer__Q24Game8PlayDataFi
/* 80155394 001522D4  98 7D 00 A0 */	stb r3, 0xa0(r29)
/* 80155398 001522D8  38 80 00 02 */	li r4, 2
/* 8015539C 001522DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553A0 001522E0  48 09 1C 81 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553A4 001522E4  98 7D 00 A1 */	stb r3, 0xa1(r29)
/* 801553A8 001522E8  38 80 00 00 */	li r4, 0
/* 801553AC 001522EC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553B0 001522F0  48 09 1C 71 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553B4 001522F4  98 7D 00 A2 */	stb r3, 0xa2(r29)
/* 801553B8 001522F8  38 80 00 04 */	li r4, 4
/* 801553BC 001522FC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553C0 00152300  48 09 1C 61 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553C4 00152304  98 7D 00 A3 */	stb r3, 0xa3(r29)
/* 801553C8 00152308  38 80 00 03 */	li r4, 3
/* 801553CC 0015230C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553D0 00152310  48 09 1C 51 */	bl hasContainer__Q24Game8PlayDataFi
/* 801553D4 00152314  98 7D 00 A4 */	stb r3, 0xa4(r29)
/* 801553D8 00152318  38 80 00 01 */	li r4, 1
/* 801553DC 0015231C  80 1C 01 90 */	lwz r0, 0x190(r28)
/* 801553E0 00152320  90 1D 00 9C */	stw r0, 0x9c(r29)
/* 801553E4 00152324  80 7C 02 2C */	lwz r3, 0x22c(r28)
/* 801553E8 00152328  80 03 00 48 */	lwz r0, 0x48(r3)
/* 801553EC 0015232C  90 1D 00 98 */	stw r0, 0x98(r29)
/* 801553F0 00152330  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801553F4 00152334  48 09 2F E5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 801553F8 00152338  90 7D 00 3C */	stw r3, 0x3c(r29)
/* 801553FC 0015233C  38 80 00 01 */	li r4, 1
/* 80155400 00152340  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155404 00152344  48 09 31 D5 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 80155408 00152348  90 7D 00 40 */	stw r3, 0x40(r29)
/* 8015540C 0015234C  38 80 00 00 */	li r4, 0
/* 80155410 00152350  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155414 00152354  48 09 2F C5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155418 00152358  90 7D 00 44 */	stw r3, 0x44(r29)
/* 8015541C 0015235C  38 80 00 00 */	li r4, 0
/* 80155420 00152360  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155424 00152364  48 09 31 B5 */	bl getDopeFruitCount__Q24Game8PlayDataFi
/* 80155428 00152368  90 7D 00 48 */	stw r3, 0x48(r29)
/* 8015542C 0015236C  3B 40 00 00 */	li r26, 0
.L_80155430:
/* 80155430 00152370  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155434 00152374  7F 44 D3 78 */	mr r4, r26
/* 80155438 00152378  38 63 00 48 */	addi r3, r3, 0x48
/* 8015543C 0015237C  48 09 0B 95 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155440 00152380  38 1A 00 4C */	addi r0, r26, 0x4c
/* 80155444 00152384  3B 5A 00 01 */	addi r26, r26, 1
/* 80155448 00152388  2C 1A 00 0C */	cmpwi r26, 0xc
/* 8015544C 0015238C  7C 7D 01 AE */	stbx r3, r29, r0
/* 80155450 00152390  41 80 FF E0 */	blt .L_80155430
/* 80155454 00152394  80 AD 94 90 */	lwz r5, playData__4Game@sda21(r13)
/* 80155458 00152398  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 8015545C 0015239C  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 80155460 001523A0  80 A5 00 E8 */	lwz r5, 0xe8(r5)
/* 80155464 001523A4  80 04 00 48 */	lwz r0, 0x48(r4)
/* 80155468 001523A8  7C 05 00 50 */	subf r0, r5, r0
/* 8015546C 001523AC  90 1D 00 10 */	stw r0, 0x10(r29)
/* 80155470 001523B0  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80155474 001523B4  80 04 00 E8 */	lwz r0, 0xe8(r4)
/* 80155478 001523B8  90 1D 00 14 */	stw r0, 0x14(r29)
/* 8015547C 001523BC  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80155480 001523C0  80 04 00 EC */	lwz r0, 0xec(r4)
/* 80155484 001523C4  90 1D 00 24 */	stw r0, 0x24(r29)
/* 80155488 001523C8  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 8015548C 001523CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155490 001523D0  7D 89 03 A6 */	mtctr r12
/* 80155494 001523D4  4E 80 04 21 */	bctrl 
/* 80155498 001523D8  7C 03 00 D0 */	neg r0, r3
/* 8015549C 001523DC  38 80 00 1E */	li r4, 0x1e
/* 801554A0 001523E0  7C 00 1B 78 */	or r0, r0, r3
/* 801554A4 001523E4  54 00 0F FE */	srwi r0, r0, 0x1f
/* 801554A8 001523E8  98 1D 00 2D */	stb r0, 0x2d(r29)
/* 801554AC 001523EC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801554B0 001523F0  48 09 1F 31 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801554B4 001523F4  98 7D 00 58 */	stb r3, 0x58(r29)
/* 801554B8 001523F8  38 80 00 1D */	li r4, 0x1d
/* 801554BC 001523FC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801554C0 00152400  48 09 1F 21 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801554C4 00152404  98 7D 00 59 */	stb r3, 0x59(r29)
/* 801554C8 00152408  BB 41 00 08 */	lmw r26, 8(r1)
/* 801554CC 0015240C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801554D0 00152410  7C 08 03 A6 */	mtlr r0
/* 801554D4 00152414  38 21 00 20 */	addi r1, r1, 0x20
/* 801554D8 00152418  4E 80 00 20 */	blr 
.endif

.global __cl__Q34Game8GameStat11PikiCounterFi
__cl__Q34Game8GameStat11PikiCounterFi:
/* 801554DC 0015241C  54 80 10 3A */	slwi r0, r4, 2
/* 801554E0 00152420  7C 63 02 14 */	add r3, r3, r0
/* 801554E4 00152424  80 63 00 04 */	lwz r3, 4(r3)
/* 801554E8 00152428  4E 80 00 20 */	blr 

.if version == 1
.global updateMainMapScreen__Q24Game17SingleGameSectionFv
updateMainMapScreen__Q24Game17SingleGameSectionFv:
/* 801554EC 0015242C  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 801554F0 00152430  7C 08 02 A6 */	mflr r0
/* 801554F4 00152434  3D 60 80 4B */	lis r11, __vt__Q32og6Screen16DispMemberGround@ha
/* 801554F8 00152438  3C A0 80 4B */	lis r5, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 801554FC 0015243C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80155500 00152440  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80155504 00152444  C0 62 A2 BC */	lfs f3, lbl_8051861C@sda21(r2)
/* 80155508 00152448  39 80 00 00 */	li r12, 0
/* 8015550C 0015244C  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80155510 00152450  39 00 00 01 */	li r8, 1
/* 80155514 00152454  C0 42 A2 C0 */	lfs f2, lbl_80518620@sda21(r2)
/* 80155518 00152458  38 C0 00 0A */	li r6, 0xa
/* 8015551C 0015245C  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 80155520 00152460  38 E0 00 02 */	li r7, 2
/* 80155524 00152464  C0 22 A2 C4 */	lfs f1, lbl_80518624@sda21(r2)
/* 80155528 00152468  39 40 04 D2 */	li r10, 0x4d2
/* 8015552C 0015246C  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 80155530 00152470  3B A4 11 48 */	addi r29, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80155534 00152474  C0 82 A2 68 */	lfs f4, lbl_805185C8@sda21(r2)
/* 80155538 00152478  3C 80 80 4B */	lis r4, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 8015553C 0015247C  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155540 00152480  39 20 00 32 */	li r9, 0x32
/* 80155544 00152484  93 A1 00 30 */	stw r29, 0x30(r1)
/* 80155548 00152488  39 6B 10 DC */	addi r11, r11, __vt__Q32og6Screen16DispMemberGround@l
/* 8015554C 0015248C  7C 7E 1B 78 */	mr r30, r3
/* 80155550 00152490  38 A5 10 C4 */	addi r5, r5, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80155554 00152494  93 A1 00 98 */	stw r29, 0x98(r1)
/* 80155558 00152498  38 04 10 AC */	addi r0, r4, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 8015555C 0015249C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155560 001524A0  93 A1 00 A8 */	stw r29, 0xa8(r1)
/* 80155564 001524A4  91 81 00 34 */	stw r12, 0x34(r1)
/* 80155568 001524A8  91 61 00 30 */	stw r11, 0x30(r1)
/* 8015556C 001524AC  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 80155570 001524B0  91 81 00 3C */	stw r12, 0x3c(r1)
/* 80155574 001524B4  91 81 00 44 */	stw r12, 0x44(r1)
/* 80155578 001524B8  91 41 00 40 */	stw r10, 0x40(r1)
/* 8015557C 001524BC  91 21 00 48 */	stw r9, 0x48(r1)
/* 80155580 001524C0  99 81 00 4C */	stb r12, 0x4c(r1)
/* 80155584 001524C4  91 81 00 50 */	stw r12, 0x50(r1)
/* 80155588 001524C8  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 8015558C 001524CC  91 01 00 58 */	stw r8, 0x58(r1)
/* 80155590 001524D0  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80155594 001524D4  90 C1 00 60 */	stw r6, 0x60(r1)
/* 80155598 001524D8  90 C1 00 64 */	stw r6, 0x64(r1)
/* 8015559C 001524DC  99 01 00 68 */	stb r8, 0x68(r1)
/* 801555A0 001524E0  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 801555A4 001524E4  91 01 00 70 */	stw r8, 0x70(r1)
/* 801555A8 001524E8  90 E1 00 74 */	stw r7, 0x74(r1)
/* 801555AC 001524EC  90 C1 00 78 */	stw r6, 0x78(r1)
/* 801555B0 001524F0  90 C1 00 7C */	stw r6, 0x7c(r1)
/* 801555B4 001524F4  99 01 00 80 */	stb r8, 0x80(r1)
/* 801555B8 001524F8  91 81 00 9C */	stw r12, 0x9c(r1)
/* 801555BC 001524FC  90 A1 00 98 */	stw r5, 0x98(r1)
/* 801555C0 00152500  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 801555C4 00152504  D0 41 00 A0 */	stfs f2, 0xa0(r1)
/* 801555C8 00152508  91 81 00 AC */	stw r12, 0xac(r1)
/* 801555CC 0015250C  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801555D0 00152510  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 801555D4 00152514  D0 21 00 B0 */	stfs f1, 0xb0(r1)
/* 801555D8 00152518  99 81 00 8E */	stb r12, 0x8e(r1)
/* 801555DC 0015251C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801555E0 00152520  99 81 00 8C */	stb r12, 0x8c(r1)
/* 801555E4 00152524  99 01 00 8D */	stb r8, 0x8d(r1)
/* 801555E8 00152528  91 01 00 88 */	stw r8, 0x88(r1)
/* 801555EC 0015252C  99 81 00 8F */	stb r12, 0x8f(r1)
/* 801555F0 00152530  99 81 00 90 */	stb r12, 0x90(r1)
/* 801555F4 00152534  99 81 00 91 */	stb r12, 0x91(r1)
/* 801555F8 00152538  99 81 00 92 */	stb r12, 0x92(r1)
/* 801555FC 0015253C  99 81 00 93 */	stb r12, 0x93(r1)
/* 80155600 00152540  99 81 00 94 */	stb r12, 0x94(r1)
/* 80155604 00152544  48 00 56 1D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155608 00152548  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 8015560C 0015254C  28 03 00 00 */	cmplwi r3, 0
/* 80155610 00152550  3B A0 00 05 */	li r29, 5
/* 80155614 00152554  D0 01 00 08 */	stfs f0, 8(r1)
/* 80155618 00152558  41 82 00 88 */	beq .L_801556A0
/* 8015561C 0015255C  7C 64 1B 78 */	mr r4, r3
/* 80155620 00152560  38 61 00 24 */	addi r3, r1, 0x24
/* 80155624 00152564  81 84 00 00 */	lwz r12, 0(r4)
/* 80155628 00152568  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015562C 0015256C  7D 89 03 A6 */	mtctr r12
/* 80155630 00152570  4E 80 04 21 */	bctrl 
/* 80155634 00152574  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80155638 00152578  38 81 00 0C */	addi r4, r1, 0xc
/* 8015563C 0015257C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80155640 00152580  38 A1 00 18 */	addi r5, r1, 0x18
/* 80155644 00152584  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80155648 00152588  38 C1 00 08 */	addi r6, r1, 8
/* 8015564C 0015258C  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80155650 00152590  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80155654 00152594  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80155658 00152598  C0 22 A2 B8 */	lfs f1, lbl_80518618@sda21(r2)
/* 8015565C 0015259C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80155660 001525A0  48 0C 91 15 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80155664 001525A4  7C 7D 1B 78 */	mr r29, r3
/* 80155668 001525A8  2C 1D 00 02 */	cmpwi r29, 2
/* 8015566C 001525AC  40 82 00 28 */	bne .L_80155694
/* 80155670 001525B0  C0 21 00 08 */	lfs f1, 8(r1)
/* 80155674 001525B4  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155678 001525B8  C0 42 A2 BC */	lfs f2, lbl_8051861C@sda21(r2)
/* 8015567C 001525BC  EC 21 00 24 */	fdivs f1, f1, f0
/* 80155680 001525C0  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80155684 001525C4  EC 22 08 28 */	fsubs f1, f2, f1
/* 80155688 001525C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8015568C 001525CC  41 80 00 14 */	blt .L_801556A0
/* 80155690 001525D0  48 00 00 10 */	b .L_801556A0
.L_80155694:
/* 80155694 001525D4  2C 1D 00 01 */	cmpwi r29, 1
/* 80155698 001525D8  40 82 00 08 */	bne .L_801556A0
/* 8015569C 001525DC  4B F7 3F 05 */	bl rand
.L_801556A0:
/* 801556A0 001525E0  C0 01 00 08 */	lfs f0, 8(r1)
/* 801556A4 001525E4  3B E0 00 00 */	li r31, 0
/* 801556A8 001525E8  93 A1 00 88 */	stw r29, 0x88(r1)
/* 801556AC 001525EC  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801556B0 001525F0  88 1E 02 3E */	lbz r0, 0x262(r30)
/* 801556B4 001525F4  28 00 00 00 */	cmplwi r0, 0
/* 801556B8 001525F8  40 82 00 28 */	bne .L_801556E0
/* 801556BC 001525FC  2C 1D 00 00 */	cmpwi r29, 0
/* 801556C0 00152600  40 82 00 20 */	bne .L_801556E0
/* 801556C4 00152604  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801556C8 00152608  48 2A 6A FD */	bl is_GameGround__Q26Screen9Game2DMgrFv
/* 801556CC 0015260C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801556D0 00152610  41 82 00 10 */	beq .L_801556E0
/* 801556D4 00152614  38 00 00 01 */	li r0, 1
/* 801556D8 00152618  3B E0 00 01 */	li r31, 1
/* 801556DC 0015261C  98 1E 02 3E */	stb r0, 0x262(r30)
.L_801556E0:
/* 801556E0 00152620  88 1E 02 3D */	lbz r0, 0x261(r30)
/* 801556E4 00152624  28 00 00 00 */	cmplwi r0, 0
/* 801556E8 00152628  40 82 00 14 */	bne .L_801556FC
/* 801556EC 0015262C  2C 1D 00 00 */	cmpwi r29, 0
/* 801556F0 00152630  40 82 00 0C */	bne .L_801556FC
/* 801556F4 00152634  38 00 00 01 */	li r0, 1
/* 801556F8 00152638  98 1E 02 3D */	stb r0, 0x261(r30)
.L_801556FC:
/* 801556FC 0015263C  88 1E 02 3D */	lbz r0, 0x261(r30)
/* 80155700 00152640  28 00 00 00 */	cmplwi r0, 0
/* 80155704 00152644  41 82 00 20 */	beq .L_80155724
/* 80155708 00152648  2C 1D 00 00 */	cmpwi r29, 0
/* 8015570C 0015264C  41 82 00 18 */	beq .L_80155724
/* 80155710 00152650  2C 1D 00 05 */	cmpwi r29, 5
/* 80155714 00152654  41 82 00 10 */	beq .L_80155724
/* 80155718 00152658  38 00 00 00 */	li r0, 0
/* 8015571C 0015265C  98 1E 02 3D */	stb r0, 0x261(r30)
/* 80155720 00152660  98 1E 02 3E */	stb r0, 0x262(r30)
.L_80155724:
/* 80155724 00152664  88 1E 02 3D */	lbz r0, 0x261(r30)
/* 80155728 00152668  38 80 00 08 */	li r4, 8
/* 8015572C 0015266C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155730 00152670  98 01 00 93 */	stb r0, 0x93(r1)
/* 80155734 00152674  38 63 00 48 */	addi r3, r3, 0x48
/* 80155738 00152678  9B E1 00 94 */	stb r31, 0x94(r1)
/* 8015573C 0015267C  48 09 08 95 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155740 00152680  98 61 00 8C */	stb r3, 0x8c(r1)
/* 80155744 00152684  38 60 FF FF */	li r3, -1
/* 80155748 00152688  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8015574C 0015268C  80 84 00 40 */	lwz r4, 0x40(r4)
/* 80155750 00152690  80 84 02 18 */	lwz r4, 0x218(r4)
/* 80155754 00152694  7C 04 00 D0 */	neg r0, r4
/* 80155758 00152698  7C 00 23 78 */	or r0, r0, r4
/* 8015575C 0015269C  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80155760 001526A0  98 01 00 8D */	stb r0, 0x8d(r1)
/* 80155764 001526A4  48 07 B6 FD */	bl getMapPikmins__Q24Game8GameStatFi
/* 80155768 001526A8  7C 7D 1B 78 */	mr r29, r3
/* 8015576C 001526AC  38 60 FF FF */	li r3, -1
/* 80155770 001526B0  48 07 B7 7D */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80155774 001526B4  7C 03 E8 50 */	subf r0, r3, r29
/* 80155778 001526B8  38 60 FF FF */	li r3, -1
/* 8015577C 001526BC  90 01 00 48 */	stw r0, 0x48(r1)
/* 80155780 001526C0  48 07 B7 BD */	bl getAllPikmins__Q24Game8GameStatFi
/* 80155784 001526C4  7C 7D 1B 78 */	mr r29, r3
/* 80155788 001526C8  38 60 FF FF */	li r3, -1
/* 8015578C 001526CC  48 07 B7 61 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80155790 001526D0  7C 03 E8 50 */	subf r0, r3, r29
/* 80155794 001526D4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80155798 001526D8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8015579C 001526DC  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801557A0 001526E0  80 83 02 18 */	lwz r4, 0x218(r3)
/* 801557A4 001526E4  38 04 00 01 */	addi r0, r4, 1
/* 801557A8 001526E8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801557AC 001526EC  4B FD 1B 19 */	bl getSunGaugeRatio__Q24Game7TimeMgrFv
/* 801557B0 001526F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801557B4 001526F4  38 80 00 1E */	li r4, 0x1e
/* 801557B8 001526F8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801557BC 001526FC  80 03 00 E8 */	lwz r0, 0xe8(r3)
/* 801557C0 00152700  90 01 00 50 */	stw r0, 0x50(r1)
/* 801557C4 00152704  48 09 1C 1D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801557C8 00152708  7C 7D 1B 78 */	mr r29, r3
/* 801557CC 0015270C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801557D0 00152710  38 80 00 1D */	li r4, 0x1d
/* 801557D4 00152714  48 09 1C 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801557D8 00152718  7C 7F 1B 78 */	mr r31, r3
/* 801557DC 0015271C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801557E0 00152720  38 80 00 38 */	li r4, 0x38
/* 801557E4 00152724  48 09 1B FD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801557E8 00152728  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801557EC 0015272C  41 82 00 10 */	beq .L_801557FC
/* 801557F0 00152730  38 00 00 01 */	li r0, 1
/* 801557F4 00152734  98 01 00 8F */	stb r0, 0x8f(r1)
/* 801557F8 00152738  48 00 00 0C */	b .L_80155804
.L_801557FC:
/* 801557FC 0015273C  38 00 00 00 */	li r0, 0
/* 80155800 00152740  98 01 00 8F */	stb r0, 0x8f(r1)
.L_80155804:
/* 80155804 00152744  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155808 00152748  38 80 00 37 */	li r4, 0x37
/* 8015580C 0015274C  48 09 1B D5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155810 00152750  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155814 00152754  41 82 00 10 */	beq .L_80155824
/* 80155818 00152758  38 00 00 01 */	li r0, 1
/* 8015581C 0015275C  98 01 00 90 */	stb r0, 0x90(r1)
/* 80155820 00152760  48 00 00 0C */	b .L_8015582C
.L_80155824:
/* 80155824 00152764  38 00 00 00 */	li r0, 0
/* 80155828 00152768  98 01 00 90 */	stb r0, 0x90(r1)
.L_8015582C:
/* 8015582C 0015276C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155830 00152770  48 2A 69 95 */	bl is_GameGround__Q26Screen9Game2DMgrFv
/* 80155834 00152774  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155838 00152778  41 82 00 48 */	beq .L_80155880
/* 8015583C 0015277C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80155840 00152780  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80155844 00152784  2C 00 00 00 */	cmpwi r0, 0
/* 80155848 00152788  40 82 00 38 */	bne .L_80155880
/* 8015584C 0015278C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80155850 00152790  41 82 00 30 */	beq .L_80155880
/* 80155854 00152794  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155858 00152798  38 80 00 38 */	li r4, 0x38
/* 8015585C 0015279C  48 09 1B 85 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155860 001527A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155864 001527A4  40 82 00 1C */	bne .L_80155880
/* 80155868 001527A8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015586C 001527AC  38 80 00 38 */	li r4, 0x38
/* 80155870 001527B0  48 09 1B 35 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80155874 001527B4  38 00 00 01 */	li r0, 1
/* 80155878 001527B8  98 01 00 91 */	stb r0, 0x91(r1)
/* 8015587C 001527BC  48 00 00 0C */	b .L_80155888
.L_80155880:
/* 80155880 001527C0  38 00 00 00 */	li r0, 0
/* 80155884 001527C4  98 01 00 91 */	stb r0, 0x91(r1)
.L_80155888:
/* 80155888 001527C8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8015588C 001527CC  48 2A 69 39 */	bl is_GameGround__Q26Screen9Game2DMgrFv
/* 80155890 001527D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155894 001527D4  41 82 00 48 */	beq .L_801558DC
/* 80155898 001527D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8015589C 001527DC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801558A0 001527E0  2C 00 00 00 */	cmpwi r0, 0
/* 801558A4 001527E4  40 82 00 38 */	bne .L_801558DC
/* 801558A8 001527E8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801558AC 001527EC  41 82 00 30 */	beq .L_801558DC
/* 801558B0 001527F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801558B4 001527F4  38 80 00 37 */	li r4, 0x37
/* 801558B8 001527F8  48 09 1B 29 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801558BC 001527FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801558C0 00152800  40 82 00 1C */	bne .L_801558DC
/* 801558C4 00152804  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801558C8 00152808  38 80 00 37 */	li r4, 0x37
/* 801558CC 0015280C  48 09 1A D9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801558D0 00152810  38 00 00 01 */	li r0, 1
/* 801558D4 00152814  98 01 00 92 */	stb r0, 0x92(r1)
/* 801558D8 00152818  48 00 00 0C */	b .L_801558E4
.L_801558DC:
/* 801558DC 0015281C  38 00 00 00 */	li r0, 0
/* 801558E0 00152820  98 01 00 92 */	stb r0, 0x92(r1)
.L_801558E4:
/* 801558E4 00152824  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801558E8 00152828  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801558EC 0015282C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801558F0 00152830  41 82 00 0C */	beq .L_801558FC
/* 801558F4 00152834  38 00 00 01 */	li r0, 1
/* 801558F8 00152838  98 01 00 8E */	stb r0, 0x8e(r1)
.L_801558FC:
/* 801558FC 0015283C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155900 00152840  48 00 53 21 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155904 00152844  28 03 00 00 */	cmplwi r3, 0
/* 80155908 00152848  3B E0 00 02 */	li r31, 2
/* 8015590C 0015284C  41 82 00 08 */	beq .L_80155914
/* 80155910 00152850  A3 E3 02 DC */	lhz r31, 0x2dc(r3)
.L_80155914:
/* 80155914 00152854  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155918 00152858  85 83 22 EC */	lwzu r12, formationPikis__Q24Game8GameStat@l(r3)
/* 8015591C 0015285C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155920 00152860  7D 89 03 A6 */	mtctr r12
/* 80155924 00152864  4E 80 04 21 */	bctrl 
/* 80155928 00152868  90 61 00 58 */	stw r3, 0x58(r1)
/* 8015592C 0015286C  38 80 00 01 */	li r4, 1
/* 80155930 00152870  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155934 00152874  48 09 2A A5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155938 00152878  90 61 00 60 */	stw r3, 0x60(r1)
/* 8015593C 0015287C  38 80 00 00 */	li r4, 0
/* 80155940 00152880  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155944 00152884  48 09 2A 95 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155948 00152888  90 61 00 64 */	stw r3, 0x64(r1)
/* 8015594C 0015288C  38 80 00 00 */	li r4, 0
/* 80155950 00152890  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155954 00152894  81 83 00 00 */	lwz r12, 0(r3)
/* 80155958 00152898  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8015595C 0015289C  7D 89 03 A6 */	mtctr r12
/* 80155960 001528A0  4E 80 04 21 */	bctrl 
/* 80155964 001528A4  7C 7D 1B 78 */	mr r29, r3
/* 80155968 001528A8  4B FE C6 95 */	bl getLifeRatio__Q24Game4NaviFv
/* 8015596C 001528AC  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80155970 001528B0  7F A3 EB 78 */	mr r3, r29
/* 80155974 001528B4  4B FF 10 B5 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155978 001528B8  2C 1F 00 00 */	cmpwi r31, 0
/* 8015597C 001528BC  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80155980 001528C0  40 82 00 18 */	bne .L_80155998
/* 80155984 001528C4  38 60 00 01 */	li r3, 1
/* 80155988 001528C8  38 00 00 00 */	li r0, 0
/* 8015598C 001528CC  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155990 001528D0  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155994 001528D4  48 00 00 50 */	b .L_801559E4
.L_80155998:
/* 80155998 001528D8  2C 1F 00 01 */	cmpwi r31, 1
/* 8015599C 001528DC  40 82 00 18 */	bne .L_801559B4
/* 801559A0 001528E0  38 60 00 00 */	li r3, 0
/* 801559A4 001528E4  38 00 00 01 */	li r0, 1
/* 801559A8 001528E8  98 61 00 68 */	stb r3, 0x68(r1)
/* 801559AC 001528EC  98 01 00 80 */	stb r0, 0x80(r1)
/* 801559B0 001528F0  48 00 00 34 */	b .L_801559E4
.L_801559B4:
/* 801559B4 001528F4  80 1E 00 E4 */	lwz r0, 0x104(r30)
/* 801559B8 001528F8  2C 00 00 00 */	cmpwi r0, 0
/* 801559BC 001528FC  40 82 00 18 */	bne .L_801559D4
/* 801559C0 00152900  38 60 00 00 */	li r3, 0
/* 801559C4 00152904  38 00 00 01 */	li r0, 1
/* 801559C8 00152908  98 61 00 68 */	stb r3, 0x68(r1)
/* 801559CC 0015290C  98 01 00 80 */	stb r0, 0x80(r1)
/* 801559D0 00152910  48 00 00 14 */	b .L_801559E4
.L_801559D4:
/* 801559D4 00152914  38 60 00 01 */	li r3, 1
/* 801559D8 00152918  38 00 00 00 */	li r0, 0
/* 801559DC 0015291C  98 61 00 68 */	stb r3, 0x68(r1)
/* 801559E0 00152920  98 01 00 80 */	stb r0, 0x80(r1)
.L_801559E4:
/* 801559E4 00152924  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 801559E8 00152928  38 63 22 EC */	addi r3, r3, formationPikis__Q24Game8GameStat@l
/* 801559EC 0015292C  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 801559F0 00152930  81 8C 00 08 */	lwz r12, 8(r12)
/* 801559F4 00152934  7D 89 03 A6 */	mtctr r12
/* 801559F8 00152938  4E 80 04 21 */	bctrl 
/* 801559FC 0015293C  90 61 00 70 */	stw r3, 0x70(r1)
/* 80155A00 00152940  38 80 00 01 */	li r4, 1
/* 80155A04 00152944  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155A08 00152948  48 09 29 D1 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155A0C 0015294C  90 61 00 78 */	stw r3, 0x78(r1)
/* 80155A10 00152950  38 80 00 00 */	li r4, 0
/* 80155A14 00152954  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155A18 00152958  48 09 29 C1 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155A1C 0015295C  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80155A20 00152960  38 80 00 01 */	li r4, 1
/* 80155A24 00152964  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155A28 00152968  81 83 00 00 */	lwz r12, 0(r3)
/* 80155A2C 0015296C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80155A30 00152970  7D 89 03 A6 */	mtctr r12
/* 80155A34 00152974  4E 80 04 21 */	bctrl 
/* 80155A38 00152978  7C 7D 1B 78 */	mr r29, r3
/* 80155A3C 0015297C  4B FE C5 C1 */	bl getLifeRatio__Q24Game4NaviFv
/* 80155A40 00152980  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 80155A44 00152984  7F A3 EB 78 */	mr r3, r29
/* 80155A48 00152988  4B FF 0F E1 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155A4C 0015298C  90 61 00 74 */	stw r3, 0x74(r1)
/* 80155A50 00152990  38 81 00 30 */	addi r4, r1, 0x30
/* 80155A54 00152994  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155A58 00152998  48 2A 66 45 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 80155A5C 0015299C  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80155A60 001529A0  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 80155A64 001529A4  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 80155A68 001529A8  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 80155A6C 001529AC  7C 08 03 A6 */	mtlr r0
/* 80155A70 001529B0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80155A74 001529B4  4E 80 00 20 */	blr 
.else
.global updateMainMapScreen__Q24Game17SingleGameSectionFv
updateMainMapScreen__Q24Game17SingleGameSectionFv:
/* 801554EC 0015242C  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 801554F0 00152430  7C 08 02 A6 */	mflr r0
/* 801554F4 00152434  3D 60 80 4B */	lis r11, __vt__Q32og6Screen16DispMemberGround@ha
/* 801554F8 00152438  3C A0 80 4B */	lis r5, __vt__Q32og6Screen21DispMemberDayEndCount@ha
/* 801554FC 0015243C  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80155500 00152440  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80155504 00152444  C0 62 A2 BC */	lfs f3, lbl_8051861C@sda21(r2)
/* 80155508 00152448  39 80 00 00 */	li r12, 0
/* 8015550C 0015244C  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80155510 00152450  39 00 00 01 */	li r8, 1
/* 80155514 00152454  C0 42 A2 C0 */	lfs f2, lbl_80518620@sda21(r2)
/* 80155518 00152458  38 C0 00 0A */	li r6, 0xa
/* 8015551C 0015245C  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 80155520 00152460  38 E0 00 02 */	li r7, 2
/* 80155524 00152464  C0 22 A2 C4 */	lfs f1, lbl_80518624@sda21(r2)
/* 80155528 00152468  39 40 04 D2 */	li r10, 0x4d2
/* 8015552C 0015246C  93 A1 00 C4 */	stw r29, 0xc4(r1)
/* 80155530 00152470  3B A4 11 48 */	addi r29, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80155534 00152474  C0 82 A2 68 */	lfs f4, lbl_805185C8@sda21(r2)
/* 80155538 00152478  3C 80 80 4B */	lis r4, __vt__Q32og6Screen17DispMemberHurryUp@ha
/* 8015553C 0015247C  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155540 00152480  39 20 00 32 */	li r9, 0x32
/* 80155544 00152484  93 A1 00 30 */	stw r29, 0x30(r1)
/* 80155548 00152488  39 6B 10 DC */	addi r11, r11, __vt__Q32og6Screen16DispMemberGround@l
/* 8015554C 0015248C  7C 7E 1B 78 */	mr r30, r3
/* 80155550 00152490  38 A5 10 C4 */	addi r5, r5, __vt__Q32og6Screen21DispMemberDayEndCount@l
/* 80155554 00152494  93 A1 00 98 */	stw r29, 0x98(r1)
/* 80155558 00152498  38 04 10 AC */	addi r0, r4, __vt__Q32og6Screen17DispMemberHurryUp@l
/* 8015555C 0015249C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155560 001524A0  93 A1 00 A8 */	stw r29, 0xa8(r1)
/* 80155564 001524A4  91 81 00 34 */	stw r12, 0x34(r1)
/* 80155568 001524A8  91 61 00 30 */	stw r11, 0x30(r1)
/* 8015556C 001524AC  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 80155570 001524B0  91 81 00 3C */	stw r12, 0x3c(r1)
/* 80155574 001524B4  91 81 00 44 */	stw r12, 0x44(r1)
/* 80155578 001524B8  91 41 00 40 */	stw r10, 0x40(r1)
/* 8015557C 001524BC  91 21 00 48 */	stw r9, 0x48(r1)
/* 80155580 001524C0  99 81 00 4C */	stb r12, 0x4c(r1)
/* 80155584 001524C4  91 81 00 50 */	stw r12, 0x50(r1)
/* 80155588 001524C8  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 8015558C 001524CC  91 01 00 58 */	stw r8, 0x58(r1)
/* 80155590 001524D0  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80155594 001524D4  90 C1 00 60 */	stw r6, 0x60(r1)
/* 80155598 001524D8  90 C1 00 64 */	stw r6, 0x64(r1)
/* 8015559C 001524DC  99 01 00 68 */	stb r8, 0x68(r1)
/* 801555A0 001524E0  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 801555A4 001524E4  91 01 00 70 */	stw r8, 0x70(r1)
/* 801555A8 001524E8  90 E1 00 74 */	stw r7, 0x74(r1)
/* 801555AC 001524EC  90 C1 00 78 */	stw r6, 0x78(r1)
/* 801555B0 001524F0  90 C1 00 7C */	stw r6, 0x7c(r1)
/* 801555B4 001524F4  99 01 00 80 */	stb r8, 0x80(r1)
/* 801555B8 001524F8  91 81 00 9C */	stw r12, 0x9c(r1)
/* 801555BC 001524FC  90 A1 00 98 */	stw r5, 0x98(r1)
/* 801555C0 00152500  D0 41 00 A4 */	stfs f2, 0xa4(r1)
/* 801555C4 00152504  D0 41 00 A0 */	stfs f2, 0xa0(r1)
/* 801555C8 00152508  91 81 00 AC */	stw r12, 0xac(r1)
/* 801555CC 0015250C  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 801555D0 00152510  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 801555D4 00152514  D0 21 00 B0 */	stfs f1, 0xb0(r1)
/* 801555D8 00152518  99 81 00 8E */	stb r12, 0x8e(r1)
/* 801555DC 0015251C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801555E0 00152520  99 81 00 8C */	stb r12, 0x8c(r1)
/* 801555E4 00152524  99 01 00 8D */	stb r8, 0x8d(r1)
/* 801555E8 00152528  91 01 00 88 */	stw r8, 0x88(r1)
/* 801555EC 0015252C  99 81 00 8F */	stb r12, 0x8f(r1)
/* 801555F0 00152530  99 81 00 90 */	stb r12, 0x90(r1)
/* 801555F4 00152534  99 81 00 91 */	stb r12, 0x91(r1)
/* 801555F8 00152538  99 81 00 92 */	stb r12, 0x92(r1)
/* 801555FC 0015253C  99 81 00 93 */	stb r12, 0x93(r1)
/* 80155600 00152540  99 81 00 94 */	stb r12, 0x94(r1)
/* 80155604 00152544  48 00 56 1D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155608 00152548  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 8015560C 0015254C  28 03 00 00 */	cmplwi r3, 0
/* 80155610 00152550  3B A0 00 05 */	li r29, 5
/* 80155614 00152554  D0 01 00 08 */	stfs f0, 8(r1)
/* 80155618 00152558  41 82 00 88 */	beq .L_801556A0
/* 8015561C 0015255C  7C 64 1B 78 */	mr r4, r3
/* 80155620 00152560  38 61 00 24 */	addi r3, r1, 0x24
/* 80155624 00152564  81 84 00 00 */	lwz r12, 0(r4)
/* 80155628 00152568  81 8C 00 08 */	lwz r12, 8(r12)
/* 8015562C 0015256C  7D 89 03 A6 */	mtctr r12
/* 80155630 00152570  4E 80 04 21 */	bctrl 
/* 80155634 00152574  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80155638 00152578  38 81 00 0C */	addi r4, r1, 0xc
/* 8015563C 0015257C  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80155640 00152580  38 A1 00 18 */	addi r5, r1, 0x18
/* 80155644 00152584  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80155648 00152588  38 C1 00 08 */	addi r6, r1, 8
/* 8015564C 0015258C  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80155650 00152590  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80155654 00152594  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80155658 00152598  C0 22 A2 B8 */	lfs f1, lbl_80518618@sda21(r2)
/* 8015565C 0015259C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80155660 001525A0  48 0C 91 15 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80155664 001525A4  7C 7D 1B 78 */	mr r29, r3
/* 80155668 001525A8  2C 1D 00 02 */	cmpwi r29, 2
/* 8015566C 001525AC  40 82 00 28 */	bne .L_80155694
/* 80155670 001525B0  C0 21 00 08 */	lfs f1, 8(r1)
/* 80155674 001525B4  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155678 001525B8  C0 42 A2 BC */	lfs f2, lbl_8051861C@sda21(r2)
/* 8015567C 001525BC  EC 21 00 24 */	fdivs f1, f1, f0
/* 80155680 001525C0  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80155684 001525C4  EC 22 08 28 */	fsubs f1, f2, f1
/* 80155688 001525C8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8015568C 001525CC  41 80 00 14 */	blt .L_801556A0
/* 80155690 001525D0  48 00 00 10 */	b .L_801556A0
.L_80155694:
/* 80155694 001525D4  2C 1D 00 01 */	cmpwi r29, 1
/* 80155698 001525D8  40 82 00 08 */	bne .L_801556A0
/* 8015569C 001525DC  4B F7 3F 05 */	bl rand
.L_801556A0:
/* 801556A0 001525E0  C0 01 00 08 */	lfs f0, 8(r1)
/* 801556A4 001525E4  3B E0 00 00 */	li r31, 0
/* 801556A8 001525E8  93 A1 00 88 */	stw r29, 0x88(r1)
/* 801556AC 001525EC  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 801556B0 001525F0  88 1E 02 3E */	lbz r0, 0x23e(r30)
/* 801556B4 001525F4  28 00 00 00 */	cmplwi r0, 0
/* 801556B8 001525F8  40 82 00 28 */	bne .L_801556E0
/* 801556BC 001525FC  2C 1D 00 00 */	cmpwi r29, 0
/* 801556C0 00152600  40 82 00 20 */	bne .L_801556E0
/* 801556C4 00152604  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 801556C8 00152608  48 2A 6A FD */	bl is_GameGround__Q26Screen9Game2DMgrFv
/* 801556CC 0015260C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801556D0 00152610  41 82 00 10 */	beq .L_801556E0
/* 801556D4 00152614  38 00 00 01 */	li r0, 1
/* 801556D8 00152618  3B E0 00 01 */	li r31, 1
/* 801556DC 0015261C  98 1E 02 3E */	stb r0, 0x23e(r30)
.L_801556E0:
/* 801556E0 00152620  88 1E 02 3D */	lbz r0, 0x23d(r30)
/* 801556E4 00152624  28 00 00 00 */	cmplwi r0, 0
/* 801556E8 00152628  40 82 00 14 */	bne .L_801556FC
/* 801556EC 0015262C  2C 1D 00 00 */	cmpwi r29, 0
/* 801556F0 00152630  40 82 00 0C */	bne .L_801556FC
/* 801556F4 00152634  38 00 00 01 */	li r0, 1
/* 801556F8 00152638  98 1E 02 3D */	stb r0, 0x23d(r30)
.L_801556FC:
/* 801556FC 0015263C  88 1E 02 3D */	lbz r0, 0x23d(r30)
/* 80155700 00152640  28 00 00 00 */	cmplwi r0, 0
/* 80155704 00152644  41 82 00 20 */	beq .L_80155724
/* 80155708 00152648  2C 1D 00 00 */	cmpwi r29, 0
/* 8015570C 0015264C  41 82 00 18 */	beq .L_80155724
/* 80155710 00152650  2C 1D 00 05 */	cmpwi r29, 5
/* 80155714 00152654  41 82 00 10 */	beq .L_80155724
/* 80155718 00152658  38 00 00 00 */	li r0, 0
/* 8015571C 0015265C  98 1E 02 3D */	stb r0, 0x23d(r30)
/* 80155720 00152660  98 1E 02 3E */	stb r0, 0x23e(r30)
.L_80155724:
/* 80155724 00152664  88 1E 02 3D */	lbz r0, 0x23d(r30)
/* 80155728 00152668  38 80 00 08 */	li r4, 8
/* 8015572C 0015266C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155730 00152670  98 01 00 93 */	stb r0, 0x93(r1)
/* 80155734 00152674  38 63 00 48 */	addi r3, r3, 0x48
/* 80155738 00152678  9B E1 00 94 */	stb r31, 0x94(r1)
/* 8015573C 0015267C  48 09 08 95 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155740 00152680  98 61 00 8C */	stb r3, 0x8c(r1)
/* 80155744 00152684  38 60 FF FF */	li r3, -1
/* 80155748 00152688  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8015574C 0015268C  80 84 00 40 */	lwz r4, 0x40(r4)
/* 80155750 00152690  80 84 02 18 */	lwz r4, 0x218(r4)
/* 80155754 00152694  7C 04 00 D0 */	neg r0, r4
/* 80155758 00152698  7C 00 23 78 */	or r0, r0, r4
/* 8015575C 0015269C  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80155760 001526A0  98 01 00 8D */	stb r0, 0x8d(r1)
/* 80155764 001526A4  48 07 B6 FD */	bl getMapPikmins__Q24Game8GameStatFi
/* 80155768 001526A8  7C 7D 1B 78 */	mr r29, r3
/* 8015576C 001526AC  38 60 FF FF */	li r3, -1
/* 80155770 001526B0  48 07 B7 7D */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80155774 001526B4  7C 03 E8 50 */	subf r0, r3, r29
/* 80155778 001526B8  38 60 FF FF */	li r3, -1
/* 8015577C 001526BC  90 01 00 48 */	stw r0, 0x48(r1)
/* 80155780 001526C0  48 07 B7 BD */	bl getAllPikmins__Q24Game8GameStatFi
/* 80155784 001526C4  7C 7D 1B 78 */	mr r29, r3
/* 80155788 001526C8  38 60 FF FF */	li r3, -1
/* 8015578C 001526CC  48 07 B7 61 */	bl getZikatuPikmins__Q24Game8GameStatFi
/* 80155790 001526D0  7C 03 E8 50 */	subf r0, r3, r29
/* 80155794 001526D4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80155798 001526D8  90 01 00 40 */	stw r0, 0x40(r1)
/* 8015579C 001526DC  80 63 00 40 */	lwz r3, 0x40(r3)
/* 801557A0 001526E0  80 83 02 18 */	lwz r4, 0x218(r3)
/* 801557A4 001526E4  38 04 00 01 */	addi r0, r4, 1
/* 801557A8 001526E8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 801557AC 001526EC  4B FD 1B 19 */	bl getSunGaugeRatio__Q24Game7TimeMgrFv
/* 801557B0 001526F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801557B4 001526F4  38 80 00 1E */	li r4, 0x1e
/* 801557B8 001526F8  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801557BC 001526FC  80 03 00 E8 */	lwz r0, 0xe8(r3)
/* 801557C0 00152700  90 01 00 50 */	stw r0, 0x50(r1)
/* 801557C4 00152704  48 09 1C 1D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801557C8 00152708  7C 7D 1B 78 */	mr r29, r3
/* 801557CC 0015270C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801557D0 00152710  38 80 00 1D */	li r4, 0x1d
/* 801557D4 00152714  48 09 1C 0D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801557D8 00152718  7C 7F 1B 78 */	mr r31, r3
/* 801557DC 0015271C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801557E0 00152720  38 80 00 38 */	li r4, 0x38
/* 801557E4 00152724  48 09 1B FD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801557E8 00152728  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801557EC 0015272C  41 82 00 10 */	beq .L_801557FC
/* 801557F0 00152730  38 00 00 01 */	li r0, 1
/* 801557F4 00152734  98 01 00 8F */	stb r0, 0x8f(r1)
/* 801557F8 00152738  48 00 00 0C */	b .L_80155804
.L_801557FC:
/* 801557FC 0015273C  38 00 00 00 */	li r0, 0
/* 80155800 00152740  98 01 00 8F */	stb r0, 0x8f(r1)
.L_80155804:
/* 80155804 00152744  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155808 00152748  38 80 00 37 */	li r4, 0x37
/* 8015580C 0015274C  48 09 1B D5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155810 00152750  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155814 00152754  41 82 00 10 */	beq .L_80155824
/* 80155818 00152758  38 00 00 01 */	li r0, 1
/* 8015581C 0015275C  98 01 00 90 */	stb r0, 0x90(r1)
/* 80155820 00152760  48 00 00 0C */	b .L_8015582C
.L_80155824:
/* 80155824 00152764  38 00 00 00 */	li r0, 0
/* 80155828 00152768  98 01 00 90 */	stb r0, 0x90(r1)
.L_8015582C:
/* 8015582C 0015276C  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155830 00152770  48 2A 69 95 */	bl is_GameGround__Q26Screen9Game2DMgrFv
/* 80155834 00152774  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155838 00152778  41 82 00 48 */	beq .L_80155880
/* 8015583C 0015277C  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80155840 00152780  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80155844 00152784  2C 00 00 00 */	cmpwi r0, 0
/* 80155848 00152788  40 82 00 38 */	bne .L_80155880
/* 8015584C 0015278C  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80155850 00152790  41 82 00 30 */	beq .L_80155880
/* 80155854 00152794  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155858 00152798  38 80 00 38 */	li r4, 0x38
/* 8015585C 0015279C  48 09 1B 85 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155860 001527A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155864 001527A4  40 82 00 1C */	bne .L_80155880
/* 80155868 001527A8  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 8015586C 001527AC  38 80 00 38 */	li r4, 0x38
/* 80155870 001527B0  48 09 1B 35 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80155874 001527B4  38 00 00 01 */	li r0, 1
/* 80155878 001527B8  98 01 00 91 */	stb r0, 0x91(r1)
/* 8015587C 001527BC  48 00 00 0C */	b .L_80155888
.L_80155880:
/* 80155880 001527C0  38 00 00 00 */	li r0, 0
/* 80155884 001527C4  98 01 00 91 */	stb r0, 0x91(r1)
.L_80155888:
/* 80155888 001527C8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 8015588C 001527CC  48 2A 69 39 */	bl is_GameGround__Q26Screen9Game2DMgrFv
/* 80155890 001527D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155894 001527D4  41 82 00 48 */	beq .L_801558DC
/* 80155898 001527D8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 8015589C 001527DC  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801558A0 001527E0  2C 00 00 00 */	cmpwi r0, 0
/* 801558A4 001527E4  40 82 00 38 */	bne .L_801558DC
/* 801558A8 001527E8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 801558AC 001527EC  41 82 00 30 */	beq .L_801558DC
/* 801558B0 001527F0  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801558B4 001527F4  38 80 00 37 */	li r4, 0x37
/* 801558B8 001527F8  48 09 1B 29 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801558BC 001527FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801558C0 00152800  40 82 00 1C */	bne .L_801558DC
/* 801558C4 00152804  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801558C8 00152808  38 80 00 37 */	li r4, 0x37
/* 801558CC 0015280C  48 09 1A D9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 801558D0 00152810  38 00 00 01 */	li r0, 1
/* 801558D4 00152814  98 01 00 92 */	stb r0, 0x92(r1)
/* 801558D8 00152818  48 00 00 0C */	b .L_801558E4
.L_801558DC:
/* 801558DC 0015281C  38 00 00 00 */	li r0, 0
/* 801558E0 00152820  98 01 00 92 */	stb r0, 0x92(r1)
.L_801558E4:
/* 801558E4 00152824  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801558E8 00152828  88 03 00 2F */	lbz r0, 0x2f(r3)
/* 801558EC 0015282C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801558F0 00152830  41 82 00 0C */	beq .L_801558FC
/* 801558F4 00152834  38 00 00 01 */	li r0, 1
/* 801558F8 00152838  98 01 00 8E */	stb r0, 0x8e(r1)
.L_801558FC:
/* 801558FC 0015283C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155900 00152840  48 00 53 21 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155904 00152844  28 03 00 00 */	cmplwi r3, 0
/* 80155908 00152848  3B E0 00 02 */	li r31, 2
/* 8015590C 0015284C  41 82 00 08 */	beq .L_80155914
/* 80155910 00152850  A3 E3 02 DC */	lhz r31, 0x2dc(r3)
.L_80155914:
/* 80155914 00152854  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155918 00152858  85 83 22 EC */	lwzu r12, formationPikis__Q24Game8GameStat@l(r3)
/* 8015591C 0015285C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155920 00152860  7D 89 03 A6 */	mtctr r12
/* 80155924 00152864  4E 80 04 21 */	bctrl 
/* 80155928 00152868  90 61 00 58 */	stw r3, 0x58(r1)
/* 8015592C 0015286C  38 80 00 01 */	li r4, 1
/* 80155930 00152870  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155934 00152874  48 09 2A A5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155938 00152878  90 61 00 60 */	stw r3, 0x60(r1)
/* 8015593C 0015287C  38 80 00 00 */	li r4, 0
/* 80155940 00152880  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155944 00152884  48 09 2A 95 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155948 00152888  90 61 00 64 */	stw r3, 0x64(r1)
/* 8015594C 0015288C  38 80 00 00 */	li r4, 0
/* 80155950 00152890  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155954 00152894  81 83 00 00 */	lwz r12, 0(r3)
/* 80155958 00152898  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8015595C 0015289C  7D 89 03 A6 */	mtctr r12
/* 80155960 001528A0  4E 80 04 21 */	bctrl 
/* 80155964 001528A4  7C 7D 1B 78 */	mr r29, r3
/* 80155968 001528A8  4B FE C6 95 */	bl getLifeRatio__Q24Game4NaviFv
/* 8015596C 001528AC  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80155970 001528B0  7F A3 EB 78 */	mr r3, r29
/* 80155974 001528B4  4B FF 10 B5 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155978 001528B8  2C 1F 00 00 */	cmpwi r31, 0
/* 8015597C 001528BC  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80155980 001528C0  40 82 00 18 */	bne .L_80155998
/* 80155984 001528C4  38 60 00 01 */	li r3, 1
/* 80155988 001528C8  38 00 00 00 */	li r0, 0
/* 8015598C 001528CC  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155990 001528D0  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155994 001528D4  48 00 00 50 */	b .L_801559E4
.L_80155998:
/* 80155998 001528D8  2C 1F 00 01 */	cmpwi r31, 1
/* 8015599C 001528DC  40 82 00 18 */	bne .L_801559B4
/* 801559A0 001528E0  38 60 00 00 */	li r3, 0
/* 801559A4 001528E4  38 00 00 01 */	li r0, 1
/* 801559A8 001528E8  98 61 00 68 */	stb r3, 0x68(r1)
/* 801559AC 001528EC  98 01 00 80 */	stb r0, 0x80(r1)
/* 801559B0 001528F0  48 00 00 34 */	b .L_801559E4
.L_801559B4:
/* 801559B4 001528F4  80 1E 00 E4 */	lwz r0, 0xe4(r30)
/* 801559B8 001528F8  2C 00 00 00 */	cmpwi r0, 0
/* 801559BC 001528FC  40 82 00 18 */	bne .L_801559D4
/* 801559C0 00152900  38 60 00 00 */	li r3, 0
/* 801559C4 00152904  38 00 00 01 */	li r0, 1
/* 801559C8 00152908  98 61 00 68 */	stb r3, 0x68(r1)
/* 801559CC 0015290C  98 01 00 80 */	stb r0, 0x80(r1)
/* 801559D0 00152910  48 00 00 14 */	b .L_801559E4
.L_801559D4:
/* 801559D4 00152914  38 60 00 01 */	li r3, 1
/* 801559D8 00152918  38 00 00 00 */	li r0, 0
/* 801559DC 0015291C  98 61 00 68 */	stb r3, 0x68(r1)
/* 801559E0 00152920  98 01 00 80 */	stb r0, 0x80(r1)
.L_801559E4:
/* 801559E4 00152924  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 801559E8 00152928  38 63 22 EC */	addi r3, r3, formationPikis__Q24Game8GameStat@l
/* 801559EC 0015292C  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 801559F0 00152930  81 8C 00 08 */	lwz r12, 8(r12)
/* 801559F4 00152934  7D 89 03 A6 */	mtctr r12
/* 801559F8 00152938  4E 80 04 21 */	bctrl 
/* 801559FC 0015293C  90 61 00 70 */	stw r3, 0x70(r1)
/* 80155A00 00152940  38 80 00 01 */	li r4, 1
/* 80155A04 00152944  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155A08 00152948  48 09 29 D1 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155A0C 0015294C  90 61 00 78 */	stw r3, 0x78(r1)
/* 80155A10 00152950  38 80 00 00 */	li r4, 0
/* 80155A14 00152954  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155A18 00152958  48 09 29 C1 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155A1C 0015295C  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80155A20 00152960  38 80 00 01 */	li r4, 1
/* 80155A24 00152964  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155A28 00152968  81 83 00 00 */	lwz r12, 0(r3)
/* 80155A2C 0015296C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80155A30 00152970  7D 89 03 A6 */	mtctr r12
/* 80155A34 00152974  4E 80 04 21 */	bctrl 
/* 80155A38 00152978  7C 7D 1B 78 */	mr r29, r3
/* 80155A3C 0015297C  4B FE C5 C1 */	bl getLifeRatio__Q24Game4NaviFv
/* 80155A40 00152980  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 80155A44 00152984  7F A3 EB 78 */	mr r3, r29
/* 80155A48 00152988  4B FF 0F E1 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155A4C 0015298C  90 61 00 74 */	stw r3, 0x74(r1)
/* 80155A50 00152990  38 81 00 30 */	addi r4, r1, 0x30
/* 80155A54 00152994  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155A58 00152998  48 2A 66 45 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 80155A5C 0015299C  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 80155A60 001529A0  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 80155A64 001529A4  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 80155A68 001529A8  83 A1 00 C4 */	lwz r29, 0xc4(r1)
/* 80155A6C 001529AC  7C 08 03 A6 */	mtlr r0
/* 80155A70 001529B0  38 21 00 D0 */	addi r1, r1, 0xd0
/* 80155A74 001529B4  4E 80 00 20 */	blr 
.endif

.global drawMainMapScreen__Q24Game17SingleGameSectionFv
drawMainMapScreen__Q24Game17SingleGameSectionFv:
/* 80155A78 001529B8  4E 80 00 20 */	blr 

.if version == 1
.global updateCaveScreen__Q24Game17SingleGameSectionFv
updateCaveScreen__Q24Game17SingleGameSectionFv:
/* 80155A7C 001529BC  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80155A80 001529C0  7C 08 02 A6 */	mflr r0
/* 80155A84 001529C4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80155A88 001529C8  3D 00 80 4B */	lis r8, __vt__Q32og6Screen14DispMemberCave@ha
/* 80155A8C 001529CC  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80155A90 001529D0  39 44 11 48 */	addi r10, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80155A94 001529D4  39 20 00 00 */	li r9, 0
/* 80155A98 001529D8  C0 22 A2 BC */	lfs f1, lbl_8051861C@sda21(r2)
/* 80155A9C 001529DC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80155AA0 001529E0  38 A0 00 01 */	li r5, 1
/* 80155AA4 001529E4  C0 42 A2 68 */	lfs f2, lbl_805185C8@sda21(r2)
/* 80155AA8 001529E8  38 00 00 0A */	li r0, 0xa
/* 80155AAC 001529EC  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80155AB0 001529F0  38 80 00 02 */	li r4, 2
/* 80155AB4 001529F4  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155AB8 001529F8  38 E0 04 D2 */	li r7, 0x4d2
/* 80155ABC 001529FC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80155AC0 00152A00  38 C0 00 32 */	li r6, 0x32
/* 80155AC4 00152A04  7C 7F 1B 78 */	mr r31, r3
/* 80155AC8 00152A08  39 08 10 94 */	addi r8, r8, __vt__Q32og6Screen14DispMemberCave@l
/* 80155ACC 00152A0C  99 21 00 4C */	stb r9, 0x4c(r1)
/* 80155AD0 00152A10  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155AD4 00152A14  91 41 00 30 */	stw r10, 0x30(r1)
/* 80155AD8 00152A18  91 21 00 34 */	stw r9, 0x34(r1)
/* 80155ADC 00152A1C  91 01 00 30 */	stw r8, 0x30(r1)
/* 80155AE0 00152A20  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80155AE4 00152A24  91 21 00 3C */	stw r9, 0x3c(r1)
/* 80155AE8 00152A28  91 21 00 44 */	stw r9, 0x44(r1)
/* 80155AEC 00152A2C  90 E1 00 40 */	stw r7, 0x40(r1)
/* 80155AF0 00152A30  90 C1 00 48 */	stw r6, 0x48(r1)
/* 80155AF4 00152A34  91 21 00 50 */	stw r9, 0x50(r1)
/* 80155AF8 00152A38  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80155AFC 00152A3C  90 A1 00 58 */	stw r5, 0x58(r1)
/* 80155B00 00152A40  90 81 00 5C */	stw r4, 0x5c(r1)
/* 80155B04 00152A44  90 01 00 60 */	stw r0, 0x60(r1)
/* 80155B08 00152A48  90 01 00 64 */	stw r0, 0x64(r1)
/* 80155B0C 00152A4C  98 A1 00 68 */	stb r5, 0x68(r1)
/* 80155B10 00152A50  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 80155B14 00152A54  90 A1 00 70 */	stw r5, 0x70(r1)
/* 80155B18 00152A58  90 81 00 74 */	stw r4, 0x74(r1)
/* 80155B1C 00152A5C  90 01 00 78 */	stw r0, 0x78(r1)
/* 80155B20 00152A60  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80155B24 00152A64  98 A1 00 80 */	stb r5, 0x80(r1)
/* 80155B28 00152A68  98 A1 00 4C */	stb r5, 0x4c(r1)
/* 80155B2C 00152A6C  99 21 00 8D */	stb r9, 0x8d(r1)
/* 80155B30 00152A70  99 21 00 8E */	stb r9, 0x8e(r1)
/* 80155B34 00152A74  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80155B38 00152A78  99 21 00 8C */	stb r9, 0x8c(r1)
/* 80155B3C 00152A7C  90 A1 00 88 */	stw r5, 0x88(r1)
/* 80155B40 00152A80  99 21 00 8F */	stb r9, 0x8f(r1)
/* 80155B44 00152A84  99 21 00 92 */	stb r9, 0x92(r1)
/* 80155B48 00152A88  99 21 00 93 */	stb r9, 0x93(r1)
/* 80155B4C 00152A8C  99 21 00 90 */	stb r9, 0x90(r1)
/* 80155B50 00152A90  99 21 00 91 */	stb r9, 0x91(r1)
/* 80155B54 00152A94  48 00 50 CD */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155B58 00152A98  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155B5C 00152A9C  28 03 00 00 */	cmplwi r3, 0
/* 80155B60 00152AA0  3B C0 00 05 */	li r30, 5
/* 80155B64 00152AA4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80155B68 00152AA8  41 82 00 88 */	beq .L_80155BF0
/* 80155B6C 00152AAC  7C 64 1B 78 */	mr r4, r3
/* 80155B70 00152AB0  38 61 00 24 */	addi r3, r1, 0x24
/* 80155B74 00152AB4  81 84 00 00 */	lwz r12, 0(r4)
/* 80155B78 00152AB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155B7C 00152ABC  7D 89 03 A6 */	mtctr r12
/* 80155B80 00152AC0  4E 80 04 21 */	bctrl 
/* 80155B84 00152AC4  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80155B88 00152AC8  38 81 00 0C */	addi r4, r1, 0xc
/* 80155B8C 00152ACC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80155B90 00152AD0  38 A1 00 18 */	addi r5, r1, 0x18
/* 80155B94 00152AD4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80155B98 00152AD8  38 C1 00 08 */	addi r6, r1, 8
/* 80155B9C 00152ADC  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80155BA0 00152AE0  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80155BA4 00152AE4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80155BA8 00152AE8  C0 22 A2 B8 */	lfs f1, lbl_80518618@sda21(r2)
/* 80155BAC 00152AEC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80155BB0 00152AF0  48 0C 8B C5 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80155BB4 00152AF4  7C 7E 1B 78 */	mr r30, r3
/* 80155BB8 00152AF8  2C 1E 00 02 */	cmpwi r30, 2
/* 80155BBC 00152AFC  40 82 00 28 */	bne .L_80155BE4
/* 80155BC0 00152B00  C0 21 00 08 */	lfs f1, 8(r1)
/* 80155BC4 00152B04  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155BC8 00152B08  C0 42 A2 BC */	lfs f2, lbl_8051861C@sda21(r2)
/* 80155BCC 00152B0C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80155BD0 00152B10  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80155BD4 00152B14  EC 22 08 28 */	fsubs f1, f2, f1
/* 80155BD8 00152B18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80155BDC 00152B1C  41 80 00 14 */	blt .L_80155BF0
/* 80155BE0 00152B20  48 00 00 10 */	b .L_80155BF0
.L_80155BE4:
/* 80155BE4 00152B24  2C 1E 00 01 */	cmpwi r30, 1
/* 80155BE8 00152B28  40 82 00 08 */	bne .L_80155BF0
/* 80155BEC 00152B2C  4B F7 39 B5 */	bl rand
.L_80155BF0:
/* 80155BF0 00152B30  C0 01 00 08 */	lfs f0, 8(r1)
/* 80155BF4 00152B34  3B A0 00 00 */	li r29, 0
/* 80155BF8 00152B38  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80155BFC 00152B3C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80155C00 00152B40  88 1F 02 3E */	lbz r0, 0x262(r31)
/* 80155C04 00152B44  28 00 00 00 */	cmplwi r0, 0
/* 80155C08 00152B48  40 82 00 28 */	bne .L_80155C30
/* 80155C0C 00152B4C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155C10 00152B50  40 82 00 20 */	bne .L_80155C30
/* 80155C14 00152B54  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155C18 00152B58  48 2A 67 C1 */	bl is_GameCave__Q26Screen9Game2DMgrFv
/* 80155C1C 00152B5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155C20 00152B60  41 82 00 10 */	beq .L_80155C30
/* 80155C24 00152B64  38 00 00 01 */	li r0, 1
/* 80155C28 00152B68  3B A0 00 01 */	li r29, 1
/* 80155C2C 00152B6C  98 1F 02 3E */	stb r0, 0x262(r31)
.L_80155C30:
/* 80155C30 00152B70  88 1F 02 3D */	lbz r0, 0x261(r31)
/* 80155C34 00152B74  28 00 00 00 */	cmplwi r0, 0
/* 80155C38 00152B78  40 82 00 14 */	bne .L_80155C4C
/* 80155C3C 00152B7C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155C40 00152B80  40 82 00 0C */	bne .L_80155C4C
/* 80155C44 00152B84  38 00 00 01 */	li r0, 1
/* 80155C48 00152B88  98 1F 02 3D */	stb r0, 0x261(r31)
.L_80155C4C:
/* 80155C4C 00152B8C  88 1F 02 3D */	lbz r0, 0x261(r31)
/* 80155C50 00152B90  28 00 00 00 */	cmplwi r0, 0
/* 80155C54 00152B94  41 82 00 20 */	beq .L_80155C74
/* 80155C58 00152B98  2C 1E 00 00 */	cmpwi r30, 0
/* 80155C5C 00152B9C  41 82 00 18 */	beq .L_80155C74
/* 80155C60 00152BA0  2C 1E 00 05 */	cmpwi r30, 5
/* 80155C64 00152BA4  41 82 00 10 */	beq .L_80155C74
/* 80155C68 00152BA8  38 00 00 00 */	li r0, 0
/* 80155C6C 00152BAC  98 1F 02 3D */	stb r0, 0x261(r31)
/* 80155C70 00152BB0  98 1F 02 3E */	stb r0, 0x262(r31)
.L_80155C74:
/* 80155C74 00152BB4  88 1F 02 3D */	lbz r0, 0x261(r31)
/* 80155C78 00152BB8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155C7C 00152BBC  98 01 00 90 */	stb r0, 0x90(r1)
/* 80155C80 00152BC0  9B A1 00 91 */	stb r29, 0x91(r1)
/* 80155C84 00152BC4  48 2A 67 55 */	bl is_GameCave__Q26Screen9Game2DMgrFv
/* 80155C88 00152BC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155C8C 00152BCC  41 82 00 5C */	beq .L_80155CE8
/* 80155C90 00152BD0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80155C94 00152BD4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80155C98 00152BD8  2C 00 00 00 */	cmpwi r0, 0
/* 80155C9C 00152BDC  40 82 00 4C */	bne .L_80155CE8
/* 80155CA0 00152BE0  38 00 00 00 */	li r0, 0
/* 80155CA4 00152BE4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CA8 00152BE8  98 01 00 8F */	stb r0, 0x8f(r1)
/* 80155CAC 00152BEC  38 80 00 36 */	li r4, 0x36
/* 80155CB0 00152BF0  48 09 17 31 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155CB4 00152BF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155CB8 00152BF8  40 82 00 30 */	bne .L_80155CE8
/* 80155CBC 00152BFC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CC0 00152C00  38 80 00 08 */	li r4, 8
/* 80155CC4 00152C04  38 63 00 48 */	addi r3, r3, 0x48
/* 80155CC8 00152C08  48 09 03 09 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155CCC 00152C0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155CD0 00152C10  41 82 00 18 */	beq .L_80155CE8
/* 80155CD4 00152C14  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CD8 00152C18  38 80 00 36 */	li r4, 0x36
/* 80155CDC 00152C1C  48 09 16 C9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80155CE0 00152C20  38 00 00 01 */	li r0, 1
/* 80155CE4 00152C24  98 01 00 8F */	stb r0, 0x8f(r1)
.L_80155CE8:
/* 80155CE8 00152C28  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CEC 00152C2C  3B C0 00 00 */	li r30, 0
/* 80155CF0 00152C30  38 80 00 08 */	li r4, 8
/* 80155CF4 00152C34  38 63 00 48 */	addi r3, r3, 0x48
/* 80155CF8 00152C38  48 09 02 D9 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155CFC 00152C3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155D00 00152C40  41 82 00 1C */	beq .L_80155D1C
/* 80155D04 00152C44  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155D08 00152C48  38 80 00 36 */	li r4, 0x36
/* 80155D0C 00152C4C  48 09 16 D5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155D10 00152C50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155D14 00152C54  41 82 00 08 */	beq .L_80155D1C
/* 80155D18 00152C58  3B C0 00 01 */	li r30, 1
.L_80155D1C:
/* 80155D1C 00152C5C  9B C1 00 8C */	stb r30, 0x8c(r1)
/* 80155D20 00152C60  7F E3 FB 78 */	mr r3, r31
/* 80155D24 00152C64  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155D28 00152C68  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80155D2C 00152C6C  7D 89 03 A6 */	mtctr r12
/* 80155D30 00152C70  4E 80 04 21 */	bctrl 
/* 80155D34 00152C74  38 03 00 01 */	addi r0, r3, 1
/* 80155D38 00152C78  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155D3C 00152C7C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80155D40 00152C80  38 80 00 1E */	li r4, 0x1e
/* 80155D44 00152C84  48 09 16 9D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155D48 00152C88  98 61 00 92 */	stb r3, 0x92(r1)
/* 80155D4C 00152C8C  38 80 00 1D */	li r4, 0x1d
/* 80155D50 00152C90  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155D54 00152C94  48 09 16 8D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155D58 00152C98  98 61 00 93 */	stb r3, 0x93(r1)
/* 80155D5C 00152C9C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80155D60 00152CA0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80155D64 00152CA4  48 08 17 8D */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 80155D68 00152CA8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80155D6C 00152CAC  7C 00 18 50 */	subf r0, r0, r3
/* 80155D70 00152CB0  38 60 FF FF */	li r3, -1
/* 80155D74 00152CB4  7C 00 00 34 */	cntlzw r0, r0
/* 80155D78 00152CB8  54 00 D9 7E */	srwi r0, r0, 5
/* 80155D7C 00152CBC  98 01 00 8E */	stb r0, 0x8e(r1)
/* 80155D80 00152CC0  48 07 B0 E1 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80155D84 00152CC4  90 61 00 48 */	stw r3, 0x48(r1)
/* 80155D88 00152CC8  38 60 FF FF */	li r3, -1
/* 80155D8C 00152CCC  48 07 B1 B1 */	bl getAllPikmins__Q24Game8GameStatFi
/* 80155D90 00152CD0  90 61 00 40 */	stw r3, 0x40(r1)
/* 80155D94 00152CD4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80155D98 00152CD8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80155D9C 00152CDC  80 83 02 18 */	lwz r4, 0x218(r3)
/* 80155DA0 00152CE0  38 04 00 01 */	addi r0, r4, 1
/* 80155DA4 00152CE4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80155DA8 00152CE8  4B FD 15 1D */	bl getSunGaugeRatio__Q24Game7TimeMgrFv
/* 80155DAC 00152CEC  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80155DB0 00152CF0  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80155DB4 00152CF4  80 64 00 EC */	lwz r3, 0xec(r4)
/* 80155DB8 00152CF8  80 04 00 E8 */	lwz r0, 0xe8(r4)
/* 80155DBC 00152CFC  7C 00 1A 14 */	add r0, r0, r3
/* 80155DC0 00152D00  90 01 00 50 */	stw r0, 0x50(r1)
/* 80155DC4 00152D04  88 04 00 2F */	lbz r0, 0x2f(r4)
/* 80155DC8 00152D08  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80155DCC 00152D0C  41 82 00 0C */	beq .L_80155DD8
/* 80155DD0 00152D10  38 00 00 01 */	li r0, 1
/* 80155DD4 00152D14  98 01 00 8D */	stb r0, 0x8d(r1)
.L_80155DD8:
/* 80155DD8 00152D18  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155DDC 00152D1C  48 00 4E 45 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155DE0 00152D20  28 03 00 00 */	cmplwi r3, 0
/* 80155DE4 00152D24  3B A0 00 02 */	li r29, 2
/* 80155DE8 00152D28  41 82 00 08 */	beq .L_80155DF0
/* 80155DEC 00152D2C  A3 A3 02 DC */	lhz r29, 0x2dc(r3)
.L_80155DF0:
/* 80155DF0 00152D30  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155DF4 00152D34  85 83 22 EC */	lwzu r12, formationPikis__Q24Game8GameStat@l(r3)
/* 80155DF8 00152D38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155DFC 00152D3C  7D 89 03 A6 */	mtctr r12
/* 80155E00 00152D40  4E 80 04 21 */	bctrl 
/* 80155E04 00152D44  90 61 00 58 */	stw r3, 0x58(r1)
/* 80155E08 00152D48  38 80 00 01 */	li r4, 1
/* 80155E0C 00152D4C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155E10 00152D50  48 09 25 C9 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155E14 00152D54  90 61 00 60 */	stw r3, 0x60(r1)
/* 80155E18 00152D58  38 80 00 00 */	li r4, 0
/* 80155E1C 00152D5C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155E20 00152D60  48 09 25 B9 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155E24 00152D64  90 61 00 64 */	stw r3, 0x64(r1)
/* 80155E28 00152D68  38 80 00 00 */	li r4, 0
/* 80155E2C 00152D6C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155E30 00152D70  81 83 00 00 */	lwz r12, 0(r3)
/* 80155E34 00152D74  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80155E38 00152D78  7D 89 03 A6 */	mtctr r12
/* 80155E3C 00152D7C  4E 80 04 21 */	bctrl 
/* 80155E40 00152D80  7C 7E 1B 78 */	mr r30, r3
/* 80155E44 00152D84  4B FE C1 B9 */	bl getLifeRatio__Q24Game4NaviFv
/* 80155E48 00152D88  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80155E4C 00152D8C  7F C3 F3 78 */	mr r3, r30
/* 80155E50 00152D90  4B FF 0B D9 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155E54 00152D94  2C 1D 00 00 */	cmpwi r29, 0
/* 80155E58 00152D98  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80155E5C 00152D9C  40 82 00 18 */	bne .L_80155E74
/* 80155E60 00152DA0  38 60 00 01 */	li r3, 1
/* 80155E64 00152DA4  38 00 00 00 */	li r0, 0
/* 80155E68 00152DA8  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155E6C 00152DAC  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155E70 00152DB0  48 00 00 50 */	b .L_80155EC0
.L_80155E74:
/* 80155E74 00152DB4  2C 1D 00 01 */	cmpwi r29, 1
/* 80155E78 00152DB8  40 82 00 18 */	bne .L_80155E90
/* 80155E7C 00152DBC  38 60 00 00 */	li r3, 0
/* 80155E80 00152DC0  38 00 00 01 */	li r0, 1
/* 80155E84 00152DC4  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155E88 00152DC8  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155E8C 00152DCC  48 00 00 34 */	b .L_80155EC0
.L_80155E90:
/* 80155E90 00152DD0  80 1F 00 E4 */	lwz r0, 0x104(r31)
/* 80155E94 00152DD4  2C 00 00 00 */	cmpwi r0, 0
/* 80155E98 00152DD8  40 82 00 18 */	bne .L_80155EB0
/* 80155E9C 00152DDC  38 60 00 00 */	li r3, 0
/* 80155EA0 00152DE0  38 00 00 01 */	li r0, 1
/* 80155EA4 00152DE4  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155EA8 00152DE8  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155EAC 00152DEC  48 00 00 14 */	b .L_80155EC0
.L_80155EB0:
/* 80155EB0 00152DF0  38 60 00 01 */	li r3, 1
/* 80155EB4 00152DF4  38 00 00 00 */	li r0, 0
/* 80155EB8 00152DF8  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155EBC 00152DFC  98 01 00 80 */	stb r0, 0x80(r1)
.L_80155EC0:
/* 80155EC0 00152E00  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155EC4 00152E04  38 63 22 EC */	addi r3, r3, formationPikis__Q24Game8GameStat@l
/* 80155EC8 00152E08  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 80155ECC 00152E0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155ED0 00152E10  7D 89 03 A6 */	mtctr r12
/* 80155ED4 00152E14  4E 80 04 21 */	bctrl 
/* 80155ED8 00152E18  90 61 00 70 */	stw r3, 0x70(r1)
/* 80155EDC 00152E1C  38 80 00 01 */	li r4, 1
/* 80155EE0 00152E20  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155EE4 00152E24  48 09 24 F5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155EE8 00152E28  90 61 00 78 */	stw r3, 0x78(r1)
/* 80155EEC 00152E2C  38 80 00 00 */	li r4, 0
/* 80155EF0 00152E30  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155EF4 00152E34  48 09 24 E5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155EF8 00152E38  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80155EFC 00152E3C  38 80 00 01 */	li r4, 1
/* 80155F00 00152E40  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155F04 00152E44  81 83 00 00 */	lwz r12, 0(r3)
/* 80155F08 00152E48  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80155F0C 00152E4C  7D 89 03 A6 */	mtctr r12
/* 80155F10 00152E50  4E 80 04 21 */	bctrl 
/* 80155F14 00152E54  7C 7E 1B 78 */	mr r30, r3
/* 80155F18 00152E58  4B FE C0 E5 */	bl getLifeRatio__Q24Game4NaviFv
/* 80155F1C 00152E5C  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 80155F20 00152E60  7F C3 F3 78 */	mr r3, r30
/* 80155F24 00152E64  4B FF 0B 05 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155F28 00152E68  90 61 00 74 */	stw r3, 0x74(r1)
/* 80155F2C 00152E6C  38 81 00 30 */	addi r4, r1, 0x30
/* 80155F30 00152E70  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155F34 00152E74  48 2A 61 69 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 80155F38 00152E78  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80155F3C 00152E7C  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80155F40 00152E80  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80155F44 00152E84  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80155F48 00152E88  7C 08 03 A6 */	mtlr r0
/* 80155F4C 00152E8C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80155F50 00152E90  4E 80 00 20 */	blr 
.else
.global updateCaveScreen__Q24Game17SingleGameSectionFv
updateCaveScreen__Q24Game17SingleGameSectionFv:
/* 80155A7C 001529BC  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80155A80 001529C0  7C 08 02 A6 */	mflr r0
/* 80155A84 001529C4  3C 80 80 4B */	lis r4, __vt__Q32og6Screen14DispMemberBase@ha
/* 80155A88 001529C8  3D 00 80 4B */	lis r8, __vt__Q32og6Screen14DispMemberCave@ha
/* 80155A8C 001529CC  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80155A90 001529D0  39 44 11 48 */	addi r10, r4, __vt__Q32og6Screen14DispMemberBase@l
/* 80155A94 001529D4  39 20 00 00 */	li r9, 0
/* 80155A98 001529D8  C0 22 A2 BC */	lfs f1, lbl_8051861C@sda21(r2)
/* 80155A9C 001529DC  93 E1 00 AC */	stw r31, 0xac(r1)
/* 80155AA0 001529E0  38 A0 00 01 */	li r5, 1
/* 80155AA4 001529E4  C0 42 A2 68 */	lfs f2, lbl_805185C8@sda21(r2)
/* 80155AA8 001529E8  38 00 00 0A */	li r0, 0xa
/* 80155AAC 001529EC  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 80155AB0 001529F0  38 80 00 02 */	li r4, 2
/* 80155AB4 001529F4  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155AB8 001529F8  38 E0 04 D2 */	li r7, 0x4d2
/* 80155ABC 001529FC  93 A1 00 A4 */	stw r29, 0xa4(r1)
/* 80155AC0 00152A00  38 C0 00 32 */	li r6, 0x32
/* 80155AC4 00152A04  7C 7F 1B 78 */	mr r31, r3
/* 80155AC8 00152A08  39 08 10 94 */	addi r8, r8, __vt__Q32og6Screen14DispMemberCave@l
/* 80155ACC 00152A0C  99 21 00 4C */	stb r9, 0x4c(r1)
/* 80155AD0 00152A10  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155AD4 00152A14  91 41 00 30 */	stw r10, 0x30(r1)
/* 80155AD8 00152A18  91 21 00 34 */	stw r9, 0x34(r1)
/* 80155ADC 00152A1C  91 01 00 30 */	stw r8, 0x30(r1)
/* 80155AE0 00152A20  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80155AE4 00152A24  91 21 00 3C */	stw r9, 0x3c(r1)
/* 80155AE8 00152A28  91 21 00 44 */	stw r9, 0x44(r1)
/* 80155AEC 00152A2C  90 E1 00 40 */	stw r7, 0x40(r1)
/* 80155AF0 00152A30  90 C1 00 48 */	stw r6, 0x48(r1)
/* 80155AF4 00152A34  91 21 00 50 */	stw r9, 0x50(r1)
/* 80155AF8 00152A38  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80155AFC 00152A3C  90 A1 00 58 */	stw r5, 0x58(r1)
/* 80155B00 00152A40  90 81 00 5C */	stw r4, 0x5c(r1)
/* 80155B04 00152A44  90 01 00 60 */	stw r0, 0x60(r1)
/* 80155B08 00152A48  90 01 00 64 */	stw r0, 0x64(r1)
/* 80155B0C 00152A4C  98 A1 00 68 */	stb r5, 0x68(r1)
/* 80155B10 00152A50  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 80155B14 00152A54  90 A1 00 70 */	stw r5, 0x70(r1)
/* 80155B18 00152A58  90 81 00 74 */	stw r4, 0x74(r1)
/* 80155B1C 00152A5C  90 01 00 78 */	stw r0, 0x78(r1)
/* 80155B20 00152A60  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80155B24 00152A64  98 A1 00 80 */	stb r5, 0x80(r1)
/* 80155B28 00152A68  98 A1 00 4C */	stb r5, 0x4c(r1)
/* 80155B2C 00152A6C  99 21 00 8D */	stb r9, 0x8d(r1)
/* 80155B30 00152A70  99 21 00 8E */	stb r9, 0x8e(r1)
/* 80155B34 00152A74  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80155B38 00152A78  99 21 00 8C */	stb r9, 0x8c(r1)
/* 80155B3C 00152A7C  90 A1 00 88 */	stw r5, 0x88(r1)
/* 80155B40 00152A80  99 21 00 8F */	stb r9, 0x8f(r1)
/* 80155B44 00152A84  99 21 00 92 */	stb r9, 0x92(r1)
/* 80155B48 00152A88  99 21 00 93 */	stb r9, 0x93(r1)
/* 80155B4C 00152A8C  99 21 00 90 */	stb r9, 0x90(r1)
/* 80155B50 00152A90  99 21 00 91 */	stb r9, 0x91(r1)
/* 80155B54 00152A94  48 00 50 CD */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155B58 00152A98  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155B5C 00152A9C  28 03 00 00 */	cmplwi r3, 0
/* 80155B60 00152AA0  3B C0 00 05 */	li r30, 5
/* 80155B64 00152AA4  D0 01 00 08 */	stfs f0, 8(r1)
/* 80155B68 00152AA8  41 82 00 88 */	beq .L_80155BF0
/* 80155B6C 00152AAC  7C 64 1B 78 */	mr r4, r3
/* 80155B70 00152AB0  38 61 00 24 */	addi r3, r1, 0x24
/* 80155B74 00152AB4  81 84 00 00 */	lwz r12, 0(r4)
/* 80155B78 00152AB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155B7C 00152ABC  7D 89 03 A6 */	mtctr r12
/* 80155B80 00152AC0  4E 80 04 21 */	bctrl 
/* 80155B84 00152AC4  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80155B88 00152AC8  38 81 00 0C */	addi r4, r1, 0xc
/* 80155B8C 00152ACC  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 80155B90 00152AD0  38 A1 00 18 */	addi r5, r1, 0x18
/* 80155B94 00152AD4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80155B98 00152AD8  38 C1 00 08 */	addi r6, r1, 8
/* 80155B9C 00152ADC  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 80155BA0 00152AE0  80 6D 95 B0 */	lwz r3, mgr__5Radar@sda21(r13)
/* 80155BA4 00152AE4  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80155BA8 00152AE8  C0 22 A2 B8 */	lfs f1, lbl_80518618@sda21(r2)
/* 80155BAC 00152AEC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80155BB0 00152AF0  48 0C 8B C5 */	bl "calcNearestTreasure__Q25Radar3MgrFR10Vector3<f>fR10Vector3<f>Rf"
/* 80155BB4 00152AF4  7C 7E 1B 78 */	mr r30, r3
/* 80155BB8 00152AF8  2C 1E 00 02 */	cmpwi r30, 2
/* 80155BBC 00152AFC  40 82 00 28 */	bne .L_80155BE4
/* 80155BC0 00152B00  C0 21 00 08 */	lfs f1, 8(r1)
/* 80155BC4 00152B04  C0 02 A2 B8 */	lfs f0, lbl_80518618@sda21(r2)
/* 80155BC8 00152B08  C0 42 A2 BC */	lfs f2, lbl_8051861C@sda21(r2)
/* 80155BCC 00152B0C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80155BD0 00152B10  C0 02 A2 68 */	lfs f0, lbl_805185C8@sda21(r2)
/* 80155BD4 00152B14  EC 22 08 28 */	fsubs f1, f2, f1
/* 80155BD8 00152B18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80155BDC 00152B1C  41 80 00 14 */	blt .L_80155BF0
/* 80155BE0 00152B20  48 00 00 10 */	b .L_80155BF0
.L_80155BE4:
/* 80155BE4 00152B24  2C 1E 00 01 */	cmpwi r30, 1
/* 80155BE8 00152B28  40 82 00 08 */	bne .L_80155BF0
/* 80155BEC 00152B2C  4B F7 39 B5 */	bl rand
.L_80155BF0:
/* 80155BF0 00152B30  C0 01 00 08 */	lfs f0, 8(r1)
/* 80155BF4 00152B34  3B A0 00 00 */	li r29, 0
/* 80155BF8 00152B38  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80155BFC 00152B3C  D0 01 00 84 */	stfs f0, 0x84(r1)
/* 80155C00 00152B40  88 1F 02 3E */	lbz r0, 0x23e(r31)
/* 80155C04 00152B44  28 00 00 00 */	cmplwi r0, 0
/* 80155C08 00152B48  40 82 00 28 */	bne .L_80155C30
/* 80155C0C 00152B4C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155C10 00152B50  40 82 00 20 */	bne .L_80155C30
/* 80155C14 00152B54  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155C18 00152B58  48 2A 67 C1 */	bl is_GameCave__Q26Screen9Game2DMgrFv
/* 80155C1C 00152B5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155C20 00152B60  41 82 00 10 */	beq .L_80155C30
/* 80155C24 00152B64  38 00 00 01 */	li r0, 1
/* 80155C28 00152B68  3B A0 00 01 */	li r29, 1
/* 80155C2C 00152B6C  98 1F 02 3E */	stb r0, 0x23e(r31)
.L_80155C30:
/* 80155C30 00152B70  88 1F 02 3D */	lbz r0, 0x23d(r31)
/* 80155C34 00152B74  28 00 00 00 */	cmplwi r0, 0
/* 80155C38 00152B78  40 82 00 14 */	bne .L_80155C4C
/* 80155C3C 00152B7C  2C 1E 00 00 */	cmpwi r30, 0
/* 80155C40 00152B80  40 82 00 0C */	bne .L_80155C4C
/* 80155C44 00152B84  38 00 00 01 */	li r0, 1
/* 80155C48 00152B88  98 1F 02 3D */	stb r0, 0x23d(r31)
.L_80155C4C:
/* 80155C4C 00152B8C  88 1F 02 3D */	lbz r0, 0x23d(r31)
/* 80155C50 00152B90  28 00 00 00 */	cmplwi r0, 0
/* 80155C54 00152B94  41 82 00 20 */	beq .L_80155C74
/* 80155C58 00152B98  2C 1E 00 00 */	cmpwi r30, 0
/* 80155C5C 00152B9C  41 82 00 18 */	beq .L_80155C74
/* 80155C60 00152BA0  2C 1E 00 05 */	cmpwi r30, 5
/* 80155C64 00152BA4  41 82 00 10 */	beq .L_80155C74
/* 80155C68 00152BA8  38 00 00 00 */	li r0, 0
/* 80155C6C 00152BAC  98 1F 02 3D */	stb r0, 0x23d(r31)
/* 80155C70 00152BB0  98 1F 02 3E */	stb r0, 0x23e(r31)
.L_80155C74:
/* 80155C74 00152BB4  88 1F 02 3D */	lbz r0, 0x23d(r31)
/* 80155C78 00152BB8  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155C7C 00152BBC  98 01 00 90 */	stb r0, 0x90(r1)
/* 80155C80 00152BC0  9B A1 00 91 */	stb r29, 0x91(r1)
/* 80155C84 00152BC4  48 2A 67 55 */	bl is_GameCave__Q26Screen9Game2DMgrFv
/* 80155C88 00152BC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155C8C 00152BCC  41 82 00 5C */	beq .L_80155CE8
/* 80155C90 00152BD0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80155C94 00152BD4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80155C98 00152BD8  2C 00 00 00 */	cmpwi r0, 0
/* 80155C9C 00152BDC  40 82 00 4C */	bne .L_80155CE8
/* 80155CA0 00152BE0  38 00 00 00 */	li r0, 0
/* 80155CA4 00152BE4  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CA8 00152BE8  98 01 00 8F */	stb r0, 0x8f(r1)
/* 80155CAC 00152BEC  38 80 00 36 */	li r4, 0x36
/* 80155CB0 00152BF0  48 09 17 31 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155CB4 00152BF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155CB8 00152BF8  40 82 00 30 */	bne .L_80155CE8
/* 80155CBC 00152BFC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CC0 00152C00  38 80 00 08 */	li r4, 8
/* 80155CC4 00152C04  38 63 00 48 */	addi r3, r3, 0x48
/* 80155CC8 00152C08  48 09 03 09 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155CCC 00152C0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155CD0 00152C10  41 82 00 18 */	beq .L_80155CE8
/* 80155CD4 00152C14  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CD8 00152C18  38 80 00 36 */	li r4, 0x36
/* 80155CDC 00152C1C  48 09 16 C9 */	bl setDemoFlag__Q24Game8PlayDataFi
/* 80155CE0 00152C20  38 00 00 01 */	li r0, 1
/* 80155CE4 00152C24  98 01 00 8F */	stb r0, 0x8f(r1)
.L_80155CE8:
/* 80155CE8 00152C28  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155CEC 00152C2C  3B C0 00 00 */	li r30, 0
/* 80155CF0 00152C30  38 80 00 08 */	li r4, 8
/* 80155CF4 00152C34  38 63 00 48 */	addi r3, r3, 0x48
/* 80155CF8 00152C38  48 09 02 D9 */	bl hasItem__Q24Game10OlimarDataFi
/* 80155CFC 00152C3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155D00 00152C40  41 82 00 1C */	beq .L_80155D1C
/* 80155D04 00152C44  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155D08 00152C48  38 80 00 36 */	li r4, 0x36
/* 80155D0C 00152C4C  48 09 16 D5 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155D10 00152C50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80155D14 00152C54  41 82 00 08 */	beq .L_80155D1C
/* 80155D18 00152C58  3B C0 00 01 */	li r30, 1
.L_80155D1C:
/* 80155D1C 00152C5C  9B C1 00 8C */	stb r30, 0x8c(r1)
/* 80155D20 00152C60  7F E3 FB 78 */	mr r3, r31
/* 80155D24 00152C64  81 9F 00 00 */	lwz r12, 0(r31)
/* 80155D28 00152C68  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80155D2C 00152C6C  7D 89 03 A6 */	mtctr r12
/* 80155D30 00152C70  4E 80 04 21 */	bctrl 
/* 80155D34 00152C74  38 03 00 01 */	addi r0, r3, 1
/* 80155D38 00152C78  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155D3C 00152C7C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80155D40 00152C80  38 80 00 1E */	li r4, 0x1e
/* 80155D44 00152C84  48 09 16 9D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155D48 00152C88  98 61 00 92 */	stb r3, 0x92(r1)
/* 80155D4C 00152C8C  38 80 00 1D */	li r4, 0x1d
/* 80155D50 00152C90  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155D54 00152C94  48 09 16 8D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80155D58 00152C98  98 61 00 93 */	stb r3, 0x93(r1)
/* 80155D5C 00152C9C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80155D60 00152CA0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 80155D64 00152CA4  48 08 17 8D */	bl getFloorMax__Q34Game4Cave8CaveInfoFv
/* 80155D68 00152CA8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80155D6C 00152CAC  7C 00 18 50 */	subf r0, r0, r3
/* 80155D70 00152CB0  38 60 FF FF */	li r3, -1
/* 80155D74 00152CB4  7C 00 00 34 */	cntlzw r0, r0
/* 80155D78 00152CB8  54 00 D9 7E */	srwi r0, r0, 5
/* 80155D7C 00152CBC  98 01 00 8E */	stb r0, 0x8e(r1)
/* 80155D80 00152CC0  48 07 B0 E1 */	bl getMapPikmins__Q24Game8GameStatFi
/* 80155D84 00152CC4  90 61 00 48 */	stw r3, 0x48(r1)
/* 80155D88 00152CC8  38 60 FF FF */	li r3, -1
/* 80155D8C 00152CCC  48 07 B1 B1 */	bl getAllPikmins__Q24Game8GameStatFi
/* 80155D90 00152CD0  90 61 00 40 */	stw r3, 0x40(r1)
/* 80155D94 00152CD4  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80155D98 00152CD8  80 63 00 40 */	lwz r3, 0x40(r3)
/* 80155D9C 00152CDC  80 83 02 18 */	lwz r4, 0x218(r3)
/* 80155DA0 00152CE0  38 04 00 01 */	addi r0, r4, 1
/* 80155DA4 00152CE4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80155DA8 00152CE8  4B FD 15 1D */	bl getSunGaugeRatio__Q24Game7TimeMgrFv
/* 80155DAC 00152CEC  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80155DB0 00152CF0  80 8D 94 90 */	lwz r4, playData__4Game@sda21(r13)
/* 80155DB4 00152CF4  80 64 00 EC */	lwz r3, 0xec(r4)
/* 80155DB8 00152CF8  80 04 00 E8 */	lwz r0, 0xe8(r4)
/* 80155DBC 00152CFC  7C 00 1A 14 */	add r0, r0, r3
/* 80155DC0 00152D00  90 01 00 50 */	stw r0, 0x50(r1)
/* 80155DC4 00152D04  88 04 00 2F */	lbz r0, 0x2f(r4)
/* 80155DC8 00152D08  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80155DCC 00152D0C  41 82 00 0C */	beq .L_80155DD8
/* 80155DD0 00152D10  38 00 00 01 */	li r0, 1
/* 80155DD4 00152D14  98 01 00 8D */	stb r0, 0x8d(r1)
.L_80155DD8:
/* 80155DD8 00152D18  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155DDC 00152D1C  48 00 4E 45 */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 80155DE0 00152D20  28 03 00 00 */	cmplwi r3, 0
/* 80155DE4 00152D24  3B A0 00 02 */	li r29, 2
/* 80155DE8 00152D28  41 82 00 08 */	beq .L_80155DF0
/* 80155DEC 00152D2C  A3 A3 02 DC */	lhz r29, 0x2dc(r3)
.L_80155DF0:
/* 80155DF0 00152D30  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155DF4 00152D34  85 83 22 EC */	lwzu r12, formationPikis__Q24Game8GameStat@l(r3)
/* 80155DF8 00152D38  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155DFC 00152D3C  7D 89 03 A6 */	mtctr r12
/* 80155E00 00152D40  4E 80 04 21 */	bctrl 
/* 80155E04 00152D44  90 61 00 58 */	stw r3, 0x58(r1)
/* 80155E08 00152D48  38 80 00 01 */	li r4, 1
/* 80155E0C 00152D4C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155E10 00152D50  48 09 25 C9 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155E14 00152D54  90 61 00 60 */	stw r3, 0x60(r1)
/* 80155E18 00152D58  38 80 00 00 */	li r4, 0
/* 80155E1C 00152D5C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155E20 00152D60  48 09 25 B9 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155E24 00152D64  90 61 00 64 */	stw r3, 0x64(r1)
/* 80155E28 00152D68  38 80 00 00 */	li r4, 0
/* 80155E2C 00152D6C  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155E30 00152D70  81 83 00 00 */	lwz r12, 0(r3)
/* 80155E34 00152D74  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80155E38 00152D78  7D 89 03 A6 */	mtctr r12
/* 80155E3C 00152D7C  4E 80 04 21 */	bctrl 
/* 80155E40 00152D80  7C 7E 1B 78 */	mr r30, r3
/* 80155E44 00152D84  4B FE C1 B9 */	bl getLifeRatio__Q24Game4NaviFv
/* 80155E48 00152D88  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 80155E4C 00152D8C  7F C3 F3 78 */	mr r3, r30
/* 80155E50 00152D90  4B FF 0B D9 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155E54 00152D94  2C 1D 00 00 */	cmpwi r29, 0
/* 80155E58 00152D98  90 61 00 5C */	stw r3, 0x5c(r1)
/* 80155E5C 00152D9C  40 82 00 18 */	bne .L_80155E74
/* 80155E60 00152DA0  38 60 00 01 */	li r3, 1
/* 80155E64 00152DA4  38 00 00 00 */	li r0, 0
/* 80155E68 00152DA8  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155E6C 00152DAC  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155E70 00152DB0  48 00 00 50 */	b .L_80155EC0
.L_80155E74:
/* 80155E74 00152DB4  2C 1D 00 01 */	cmpwi r29, 1
/* 80155E78 00152DB8  40 82 00 18 */	bne .L_80155E90
/* 80155E7C 00152DBC  38 60 00 00 */	li r3, 0
/* 80155E80 00152DC0  38 00 00 01 */	li r0, 1
/* 80155E84 00152DC4  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155E88 00152DC8  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155E8C 00152DCC  48 00 00 34 */	b .L_80155EC0
.L_80155E90:
/* 80155E90 00152DD0  80 1F 00 E4 */	lwz r0, 0xe4(r31)
/* 80155E94 00152DD4  2C 00 00 00 */	cmpwi r0, 0
/* 80155E98 00152DD8  40 82 00 18 */	bne .L_80155EB0
/* 80155E9C 00152DDC  38 60 00 00 */	li r3, 0
/* 80155EA0 00152DE0  38 00 00 01 */	li r0, 1
/* 80155EA4 00152DE4  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155EA8 00152DE8  98 01 00 80 */	stb r0, 0x80(r1)
/* 80155EAC 00152DEC  48 00 00 14 */	b .L_80155EC0
.L_80155EB0:
/* 80155EB0 00152DF0  38 60 00 01 */	li r3, 1
/* 80155EB4 00152DF4  38 00 00 00 */	li r0, 0
/* 80155EB8 00152DF8  98 61 00 68 */	stb r3, 0x68(r1)
/* 80155EBC 00152DFC  98 01 00 80 */	stb r0, 0x80(r1)
.L_80155EC0:
/* 80155EC0 00152E00  3C 60 80 51 */	lis r3, formationPikis__Q24Game8GameStat@ha
/* 80155EC4 00152E04  38 63 22 EC */	addi r3, r3, formationPikis__Q24Game8GameStat@l
/* 80155EC8 00152E08  85 83 00 20 */	lwzu r12, 0x20(r3)
/* 80155ECC 00152E0C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80155ED0 00152E10  7D 89 03 A6 */	mtctr r12
/* 80155ED4 00152E14  4E 80 04 21 */	bctrl 
/* 80155ED8 00152E18  90 61 00 70 */	stw r3, 0x70(r1)
/* 80155EDC 00152E1C  38 80 00 01 */	li r4, 1
/* 80155EE0 00152E20  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155EE4 00152E24  48 09 24 F5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155EE8 00152E28  90 61 00 78 */	stw r3, 0x78(r1)
/* 80155EEC 00152E2C  38 80 00 00 */	li r4, 0
/* 80155EF0 00152E30  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80155EF4 00152E34  48 09 24 E5 */	bl getDopeCount__Q24Game8PlayDataFi
/* 80155EF8 00152E38  90 61 00 7C */	stw r3, 0x7c(r1)
/* 80155EFC 00152E3C  38 80 00 01 */	li r4, 1
/* 80155F00 00152E40  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 80155F04 00152E44  81 83 00 00 */	lwz r12, 0(r3)
/* 80155F08 00152E48  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80155F0C 00152E4C  7D 89 03 A6 */	mtctr r12
/* 80155F10 00152E50  4E 80 04 21 */	bctrl 
/* 80155F14 00152E54  7C 7E 1B 78 */	mr r30, r3
/* 80155F18 00152E58  4B FE C0 E5 */	bl getLifeRatio__Q24Game4NaviFv
/* 80155F1C 00152E5C  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 80155F20 00152E60  7F C3 F3 78 */	mr r3, r30
/* 80155F24 00152E64  4B FF 0B 05 */	bl ogGetNextThrowPiki__Q24Game4NaviFv
/* 80155F28 00152E68  90 61 00 74 */	stw r3, 0x74(r1)
/* 80155F2C 00152E6C  38 81 00 30 */	addi r4, r1, 0x30
/* 80155F30 00152E70  80 6D 9A A0 */	lwz r3, gGame2DMgr__6Screen@sda21(r13)
/* 80155F34 00152E74  48 2A 61 69 */	bl setDispMember__Q26Screen9Game2DMgrFPQ32og6Screen14DispMemberBase
/* 80155F38 00152E78  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80155F3C 00152E7C  83 E1 00 AC */	lwz r31, 0xac(r1)
/* 80155F40 00152E80  83 C1 00 A8 */	lwz r30, 0xa8(r1)
/* 80155F44 00152E84  83 A1 00 A4 */	lwz r29, 0xa4(r1)
/* 80155F48 00152E88  7C 08 03 A6 */	mtlr r0
/* 80155F4C 00152E8C  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80155F50 00152E90  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getCurrFloor__Q24Game17SingleGameSectionFv # weak function
getCurrFloor__Q24Game17SingleGameSectionFv:
/* 80155F54 00152E94  80 63 02 48 */	lwz r3, 0x26c(r3)
/* 80155F58 00152E98  4E 80 00 20 */	blr 
.else
.global getCurrFloor__Q24Game17SingleGameSectionFv # weak function
getCurrFloor__Q24Game17SingleGameSectionFv:
/* 80155F54 00152E94  80 63 02 48 */	lwz r3, 0x248(r3)
/* 80155F58 00152E98  4E 80 00 20 */	blr 
.endif

.global drawCaveScreen__Q24Game17SingleGameSectionFv
drawCaveScreen__Q24Game17SingleGameSectionFv:
/* 80155F5C 00152E9C  4E 80 00 20 */	blr 

.if version == 1
.global newCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
newCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv:
/* 80155F60 00152EA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80155F64 00152EA4  7C 08 02 A6 */	mflr r0
/* 80155F68 00152EA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80155F6C 00152EAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80155F70 00152EB0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80155F74 00152EB4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80155F78 00152EB8  7C 7D 1B 78 */	mr r29, r3
/* 80155F7C 00152EBC  38 60 00 03 */	li r3, 3
/* 80155F80 00152EC0  48 0D 1E 4D */	bl getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
/* 80155F84 00152EC4  7C 60 1B 78 */	mr r0, r3
/* 80155F88 00152EC8  38 60 00 04 */	li r3, 4
/* 80155F8C 00152ECC  7C 1F 03 78 */	mr r31, r0
/* 80155F90 00152ED0  48 0D 1E 3D */	bl getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
/* 80155F94 00152ED4  7C 7E 1B 78 */	mr r30, r3
/* 80155F98 00152ED8  7F E4 FB 78 */	mr r4, r31
/* 80155F9C 00152EDC  38 7D 02 54 */	addi r3, r29, 0x278
/* 80155FA0 00152EE0  48 08 F3 C5 */	bl alloc__Q24Game11KindCounterFi
/* 80155FA4 00152EE4  7F C4 F3 78 */	mr r4, r30
/* 80155FA8 00152EE8  38 7D 02 5C */	addi r3, r29, 0x280
/* 80155FAC 00152EEC  48 08 F3 B9 */	bl alloc__Q24Game11KindCounterFi
/* 80155FB0 00152EF0  7F E4 FB 78 */	mr r4, r31
/* 80155FB4 00152EF4  38 7D 02 64 */	addi r3, r29, 0x288
/* 80155FB8 00152EF8  48 08 F3 AD */	bl alloc__Q24Game11KindCounterFi
/* 80155FBC 00152EFC  7F C4 F3 78 */	mr r4, r30
/* 80155FC0 00152F00  38 7D 02 6C */	addi r3, r29, 0x290
/* 80155FC4 00152F04  48 08 F3 A1 */	bl alloc__Q24Game11KindCounterFi
/* 80155FC8 00152F08  38 00 00 00 */	li r0, 0
/* 80155FCC 00152F0C  98 1D 02 74 */	stb r0, 0x298(r29)
/* 80155FD0 00152F10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80155FD4 00152F14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80155FD8 00152F18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80155FDC 00152F1C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80155FE0 00152F20  7C 08 03 A6 */	mtlr r0
/* 80155FE4 00152F24  38 21 00 20 */	addi r1, r1, 0x20
/* 80155FE8 00152F28  4E 80 00 20 */	blr 
.else
.global newCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
newCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv:
/* 80155F60 00152EA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80155F64 00152EA4  7C 08 02 A6 */	mflr r0
/* 80155F68 00152EA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80155F6C 00152EAC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80155F70 00152EB0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80155F74 00152EB4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80155F78 00152EB8  7C 7D 1B 78 */	mr r29, r3
/* 80155F7C 00152EBC  38 60 00 03 */	li r3, 3
/* 80155F80 00152EC0  48 0D 1E 4D */	bl getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
/* 80155F84 00152EC4  7C 60 1B 78 */	mr r0, r3
/* 80155F88 00152EC8  38 60 00 04 */	li r3, 4
/* 80155F8C 00152ECC  7C 1F 03 78 */	mr r31, r0
/* 80155F90 00152ED0  48 0D 1E 3D */	bl getCount__Q34Game10PelletList3MgrFQ34Game10PelletList5cKind
/* 80155F94 00152ED4  7C 7E 1B 78 */	mr r30, r3
/* 80155F98 00152ED8  7F E4 FB 78 */	mr r4, r31
/* 80155F9C 00152EDC  38 7D 02 54 */	addi r3, r29, 0x254
/* 80155FA0 00152EE0  48 08 F3 C5 */	bl alloc__Q24Game11KindCounterFi
/* 80155FA4 00152EE4  7F C4 F3 78 */	mr r4, r30
/* 80155FA8 00152EE8  38 7D 02 5C */	addi r3, r29, 0x25c
/* 80155FAC 00152EEC  48 08 F3 B9 */	bl alloc__Q24Game11KindCounterFi
/* 80155FB0 00152EF0  7F E4 FB 78 */	mr r4, r31
/* 80155FB4 00152EF4  38 7D 02 64 */	addi r3, r29, 0x264
/* 80155FB8 00152EF8  48 08 F3 AD */	bl alloc__Q24Game11KindCounterFi
/* 80155FBC 00152EFC  7F C4 F3 78 */	mr r4, r30
/* 80155FC0 00152F00  38 7D 02 6C */	addi r3, r29, 0x26c
/* 80155FC4 00152F04  48 08 F3 A1 */	bl alloc__Q24Game11KindCounterFi
/* 80155FC8 00152F08  38 00 00 00 */	li r0, 0
/* 80155FCC 00152F0C  98 1D 02 74 */	stb r0, 0x274(r29)
/* 80155FD0 00152F10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80155FD4 00152F14  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80155FD8 00152F18  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80155FDC 00152F1C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80155FE0 00152F20  7C 08 03 A6 */	mtlr r0
/* 80155FE4 00152F24  38 21 00 20 */	addi r1, r1, 0x20
/* 80155FE8 00152F28  4E 80 00 20 */	blr 
.endif

.if version == 1
.global clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv:
/* 80155FEC 00152F2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80155FF0 00152F30  7C 08 02 A6 */	mflr r0
/* 80155FF4 00152F34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80155FF8 00152F38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80155FFC 00152F3C  7C 7F 1B 78 */	mr r31, r3
/* 80156000 00152F40  38 7F 02 54 */	addi r3, r31, 0x278
/* 80156004 00152F44  48 08 F3 D5 */	bl clear__Q24Game11KindCounterFv
/* 80156008 00152F48  38 7F 02 5C */	addi r3, r31, 0x280
/* 8015600C 00152F4C  48 08 F3 CD */	bl clear__Q24Game11KindCounterFv
/* 80156010 00152F50  38 7F 02 64 */	addi r3, r31, 0x288
/* 80156014 00152F54  48 08 F3 C5 */	bl clear__Q24Game11KindCounterFv
/* 80156018 00152F58  38 7F 02 6C */	addi r3, r31, 0x290
/* 8015601C 00152F5C  48 08 F3 BD */	bl clear__Q24Game11KindCounterFv
/* 80156020 00152F60  38 00 00 00 */	li r0, 0
/* 80156024 00152F64  98 1F 02 74 */	stb r0, 0x298(r31)
/* 80156028 00152F68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015602C 00152F6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80156030 00152F70  7C 08 03 A6 */	mtlr r0
/* 80156034 00152F74  38 21 00 10 */	addi r1, r1, 0x10
/* 80156038 00152F78  4E 80 00 20 */	blr 
.else
.global clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv
clearCaveOtakaraEarningsAndDrops__Q24Game17SingleGameSectionFv:
/* 80155FEC 00152F2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80155FF0 00152F30  7C 08 02 A6 */	mflr r0
/* 80155FF4 00152F34  90 01 00 14 */	stw r0, 0x14(r1)
/* 80155FF8 00152F38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80155FFC 00152F3C  7C 7F 1B 78 */	mr r31, r3
/* 80156000 00152F40  38 7F 02 54 */	addi r3, r31, 0x254
/* 80156004 00152F44  48 08 F3 D5 */	bl clear__Q24Game11KindCounterFv
/* 80156008 00152F48  38 7F 02 5C */	addi r3, r31, 0x25c
/* 8015600C 00152F4C  48 08 F3 CD */	bl clear__Q24Game11KindCounterFv
/* 80156010 00152F50  38 7F 02 64 */	addi r3, r31, 0x264
/* 80156014 00152F54  48 08 F3 C5 */	bl clear__Q24Game11KindCounterFv
/* 80156018 00152F58  38 7F 02 6C */	addi r3, r31, 0x26c
/* 8015601C 00152F5C  48 08 F3 BD */	bl clear__Q24Game11KindCounterFv
/* 80156020 00152F60  38 00 00 00 */	li r0, 0
/* 80156024 00152F64  98 1F 02 74 */	stb r0, 0x274(r31)
/* 80156028 00152F68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015602C 00152F6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80156030 00152F70  7C 08 03 A6 */	mtlr r0
/* 80156034 00152F74  38 21 00 10 */	addi r1, r1, 0x10
/* 80156038 00152F78  4E 80 00 20 */	blr 
.endif

.global getSize__Q32og6Screen14DispMemberCaveFv # weak function
getSize__Q32og6Screen14DispMemberCaveFv:
/* 8015603C 00152F7C  38 60 00 64 */	li r3, 0x64
/* 80156040 00152F80  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen14DispMemberCaveFv # weak function
getOwnerID__Q32og6Screen14DispMemberCaveFv:
/* 80156044 00152F84  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80156048 00152F88  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8015604C 00152F8C  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen14DispMemberCaveFv # weak function
getMemberID__Q32og6Screen14DispMemberCaveFv:
/* 80156050 00152F90  3C 80 43 41 */	lis r4, 0x43415645@ha
/* 80156054 00152F94  38 60 00 00 */	li r3, 0
/* 80156058 00152F98  38 84 56 45 */	addi r4, r4, 0x43415645@l
/* 8015605C 00152F9C  4E 80 00 20 */	blr 

.global doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv # weak function
doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv:
/* 80156060 00152FA0  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen17DispMemberHurryUpFv # weak function
getSize__Q32og6Screen17DispMemberHurryUpFv:
/* 80156064 00152FA4  38 60 00 10 */	li r3, 0x10
/* 80156068 00152FA8  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen17DispMemberHurryUpFv # weak function
getOwnerID__Q32og6Screen17DispMemberHurryUpFv:
/* 8015606C 00152FAC  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80156070 00152FB0  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 80156074 00152FB4  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen17DispMemberHurryUpFv # weak function
getMemberID__Q32og6Screen17DispMemberHurryUpFv:
/* 80156078 00152FB8  3C 80 52 59 */	lis r4, 0x52595550@ha
/* 8015607C 00152FBC  3C 60 00 48 */	lis r3, 0x00485552@ha
/* 80156080 00152FC0  38 84 55 50 */	addi r4, r4, 0x52595550@l
/* 80156084 00152FC4  38 63 55 52 */	addi r3, r3, 0x00485552@l
/* 80156088 00152FC8  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen21DispMemberDayEndCountFv # weak function
getSize__Q32og6Screen21DispMemberDayEndCountFv:
/* 8015608C 00152FCC  38 60 00 10 */	li r3, 0x10
/* 80156090 00152FD0  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen21DispMemberDayEndCountFv
getOwnerID__Q32og6Screen21DispMemberDayEndCountFv:
/* 80156094 00152FD4  3C 60 4D 52 */	lis r3, 0x4D524D52@ha
/* 80156098 00152FD8  38 63 4D 52 */	addi r3, r3, 0x4D524D52@l
/* 8015609C 00152FDC  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen21DispMemberDayEndCountFv
getMemberID__Q32og6Screen21DispMemberDayEndCountFv:
/* 801560A0 00152FE0  3C 80 4E 44 */	lis r4, 0x4E444344@ha
/* 801560A4 00152FE4  3C 60 44 41 */	lis r3, 0x44415945@ha
/* 801560A8 00152FE8  38 84 43 44 */	addi r4, r4, 0x4E444344@l
/* 801560AC 00152FEC  38 63 59 45 */	addi r3, r3, 0x44415945@l
/* 801560B0 00152FF0  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen16DispMemberGroundFv
getSize__Q32og6Screen16DispMemberGroundFv:
/* 801560B4 00152FF4  38 60 00 88 */	li r3, 0x88
/* 801560B8 00152FF8  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen16DispMemberGroundFv
getOwnerID__Q32og6Screen16DispMemberGroundFv:
/* 801560BC 00152FFC  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 801560C0 00153000  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 801560C4 00153004  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen16DispMemberGroundFv
getMemberID__Q32og6Screen16DispMemberGroundFv:
/* 801560C8 00153008  3C 80 4F 55 */	lis r4, 0x4F554E44@ha
/* 801560CC 0015300C  38 60 47 52 */	li r3, 0x4752
/* 801560D0 00153010  38 84 4E 44 */	addi r4, r4, 0x4F554E44@l
/* 801560D4 00153014  4E 80 00 20 */	blr 

.global getName__Q24Game11PikiInitArgFv
getName__Q24Game11PikiInitArgFv:
/* 801560D8 00153018  3C 60 80 48 */	lis r3, lbl_8047CFB8@ha
/* 801560DC 0015301C  38 63 CF B8 */	addi r3, r3, lbl_8047CFB8@l
/* 801560E0 00153020  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen21DispMemberKanketuMenuFv
getSize__Q32og6Screen21DispMemberKanketuMenuFv:
/* 801560E4 00153024  38 60 00 28 */	li r3, 0x28
/* 801560E8 00153028  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen21DispMemberKanketuMenuFv
getOwnerID__Q32og6Screen21DispMemberKanketuMenuFv:
/* 801560EC 0015302C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 801560F0 00153030  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 801560F4 00153034  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen21DispMemberKanketuMenuFv
getMemberID__Q32og6Screen21DispMemberKanketuMenuFv:
/* 801560F8 00153038  3C 80 4B 45 */	lis r4, 0x4B455455@ha
/* 801560FC 0015303C  3C 60 00 4B */	lis r3, 0x004B414E@ha
/* 80156100 00153040  38 84 54 55 */	addi r4, r4, 0x4B455455@l
/* 80156104 00153044  38 63 41 4E */	addi r3, r3, 0x004B414E@l
/* 80156108 00153048  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen18DispMemberCaveMoreFv
getSize__Q32og6Screen18DispMemberCaveMoreFv:
/* 8015610C 0015304C  38 60 00 28 */	li r3, 0x28
/* 80156110 00153050  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen18DispMemberCaveMoreFv
getOwnerID__Q32og6Screen18DispMemberCaveMoreFv:
/* 80156114 00153054  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80156118 00153058  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 8015611C 0015305C  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen18DispMemberCaveMoreFv
getMemberID__Q32og6Screen18DispMemberCaveMoreFv:
/* 80156120 00153060  3C 80 4D 4F */	lis r4, 0x4D4F5245@ha
/* 80156124 00153064  3C 60 43 41 */	lis r3, 0x43415645@ha
/* 80156128 00153068  38 84 52 45 */	addi r4, r4, 0x4D4F5245@l
/* 8015612C 0015306C  38 63 56 45 */	addi r3, r3, 0x43415645@l
/* 80156130 00153070  4E 80 00 20 */	blr 

.global getSize__Q32og6Screen17DispMemberAnaDemoFv
getSize__Q32og6Screen17DispMemberAnaDemoFv:
/* 80156134 00153074  38 60 00 24 */	li r3, 0x24
/* 80156138 00153078  4E 80 00 20 */	blr 

.global getOwnerID__Q32og6Screen17DispMemberAnaDemoFv
getOwnerID__Q32og6Screen17DispMemberAnaDemoFv:
/* 8015613C 0015307C  3C 60 00 4F */	lis r3, 0x004F4741@ha
/* 80156140 00153080  38 63 47 41 */	addi r3, r3, 0x004F4741@l
/* 80156144 00153084  4E 80 00 20 */	blr 

.global getMemberID__Q32og6Screen17DispMemberAnaDemoFv
getMemberID__Q32og6Screen17DispMemberAnaDemoFv:
/* 80156148 00153088  3C 80 44 45 */	lis r4, 0x44454D4F@ha
/* 8015614C 0015308C  3C 60 41 4E */	lis r3, 0x414E415F@ha
/* 80156150 00153090  38 84 4D 4F */	addi r4, r4, 0x44454D4F@l
/* 80156154 00153094  38 63 41 5F */	addi r3, r3, 0x414E415F@l
/* 80156158 00153098  4E 80 00 20 */	blr 

.global getName__Q24Game11PikiKillArgFv
getName__Q24Game11PikiKillArgFv:
/* 8015615C 0015309C  3C 60 80 48 */	lis r3, lbl_8047CFC4@ha
/* 80156160 001530A0  38 63 CF C4 */	addi r3, r3, lbl_8047CFC4@l
/* 80156164 001530A4  4E 80 00 20 */	blr 

.global __dt__Q23efx11TLastMomijiFv
__dt__Q23efx11TLastMomijiFv:
/* 80156168 001530A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015616C 001530AC  7C 08 02 A6 */	mflr r0
/* 80156170 001530B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80156174 001530B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80156178 001530B8  7C 9F 23 78 */	mr r31, r4
/* 8015617C 001530BC  93 C1 00 08 */	stw r30, 8(r1)
/* 80156180 001530C0  7C 7E 1B 79 */	or. r30, r3, r3
/* 80156184 001530C4  41 82 00 64 */	beq .L_801561E8
/* 80156188 001530C8  3C 60 80 4B */	lis r3, __vt__Q23efx11TLastMomiji@ha
/* 8015618C 001530CC  38 63 11 6C */	addi r3, r3, __vt__Q23efx11TLastMomiji@l
/* 80156190 001530D0  90 7E 00 00 */	stw r3, 0(r30)
/* 80156194 001530D4  38 03 00 14 */	addi r0, r3, 0x14
/* 80156198 001530D8  90 1E 00 04 */	stw r0, 4(r30)
/* 8015619C 001530DC  41 82 00 3C */	beq .L_801561D8
/* 801561A0 001530E0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 801561A4 001530E4  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 801561A8 001530E8  90 7E 00 00 */	stw r3, 0(r30)
/* 801561AC 001530EC  38 03 00 14 */	addi r0, r3, 0x14
/* 801561B0 001530F0  90 1E 00 04 */	stw r0, 4(r30)
/* 801561B4 001530F4  41 82 00 24 */	beq .L_801561D8
/* 801561B8 001530F8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801561BC 001530FC  38 7E 00 04 */	addi r3, r30, 4
/* 801561C0 00153100  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801561C4 00153104  38 80 00 00 */	li r4, 0
/* 801561C8 00153108  90 BE 00 00 */	stw r5, 0(r30)
/* 801561CC 0015310C  38 05 00 14 */	addi r0, r5, 0x14
/* 801561D0 00153110  90 1E 00 04 */	stw r0, 4(r30)
/* 801561D4 00153114  4B F3 9A C9 */	bl __dt__18JPAEmitterCallBackFv
.L_801561D8:
/* 801561D8 00153118  7F E0 07 35 */	extsh. r0, r31
/* 801561DC 0015311C  40 81 00 0C */	ble .L_801561E8
/* 801561E0 00153120  7F C3 F3 78 */	mr r3, r30
/* 801561E4 00153124  4B EC DE D1 */	bl __dl__FPv
.L_801561E8:
/* 801561E8 00153128  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801561EC 0015312C  7F C3 F3 78 */	mr r3, r30
/* 801561F0 00153130  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801561F4 00153134  83 C1 00 08 */	lwz r30, 8(r1)
/* 801561F8 00153138  7C 08 03 A6 */	mtlr r0
/* 801561FC 0015313C  38 21 00 10 */	addi r1, r1, 0x10
/* 80156200 00153140  4E 80 00 20 */	blr 

.global __dt__Q23efx13TForestSakuraFv
__dt__Q23efx13TForestSakuraFv:
/* 80156204 00153144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80156208 00153148  7C 08 02 A6 */	mflr r0
/* 8015620C 0015314C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80156210 00153150  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80156214 00153154  7C 9F 23 78 */	mr r31, r4
/* 80156218 00153158  93 C1 00 08 */	stw r30, 8(r1)
/* 8015621C 0015315C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80156220 00153160  41 82 00 64 */	beq .L_80156284
/* 80156224 00153164  3C 60 80 4B */	lis r3, __vt__Q23efx13TForestSakura@ha
/* 80156228 00153168  38 63 11 B8 */	addi r3, r3, __vt__Q23efx13TForestSakura@l
/* 8015622C 0015316C  90 7E 00 00 */	stw r3, 0(r30)
/* 80156230 00153170  38 03 00 14 */	addi r0, r3, 0x14
/* 80156234 00153174  90 1E 00 04 */	stw r0, 4(r30)
/* 80156238 00153178  41 82 00 3C */	beq .L_80156274
/* 8015623C 0015317C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 80156240 00153180  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 80156244 00153184  90 7E 00 00 */	stw r3, 0(r30)
/* 80156248 00153188  38 03 00 14 */	addi r0, r3, 0x14
/* 8015624C 0015318C  90 1E 00 04 */	stw r0, 4(r30)
/* 80156250 00153190  41 82 00 24 */	beq .L_80156274
/* 80156254 00153194  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 80156258 00153198  38 7E 00 04 */	addi r3, r30, 4
/* 8015625C 0015319C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 80156260 001531A0  38 80 00 00 */	li r4, 0
/* 80156264 001531A4  90 BE 00 00 */	stw r5, 0(r30)
/* 80156268 001531A8  38 05 00 14 */	addi r0, r5, 0x14
/* 8015626C 001531AC  90 1E 00 04 */	stw r0, 4(r30)
/* 80156270 001531B0  4B F3 9A 2D */	bl __dt__18JPAEmitterCallBackFv
.L_80156274:
/* 80156274 001531B4  7F E0 07 35 */	extsh. r0, r31
/* 80156278 001531B8  40 81 00 0C */	ble .L_80156284
/* 8015627C 001531BC  7F C3 F3 78 */	mr r3, r30
/* 80156280 001531C0  4B EC DE 35 */	bl __dl__FPv
.L_80156284:
/* 80156284 001531C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80156288 001531C8  7F C3 F3 78 */	mr r3, r30
/* 8015628C 001531CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80156290 001531D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80156294 001531D4  7C 08 03 A6 */	mtlr r0
/* 80156298 001531D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8015629C 001531DC  4E 80 00 20 */	blr 

.global __dt__Q23efx13TTutorialSnowFv # weak function
__dt__Q23efx13TTutorialSnowFv:
/* 801562A0 001531E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801562A4 001531E4  7C 08 02 A6 */	mflr r0
/* 801562A8 001531E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801562AC 001531EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801562B0 001531F0  7C 9F 23 78 */	mr r31, r4
/* 801562B4 001531F4  93 C1 00 08 */	stw r30, 8(r1)
/* 801562B8 001531F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801562BC 001531FC  41 82 00 64 */	beq .L_80156320
/* 801562C0 00153200  3C 60 80 4B */	lis r3, __vt__Q23efx13TTutorialSnow@ha
/* 801562C4 00153204  38 63 12 04 */	addi r3, r3, __vt__Q23efx13TTutorialSnow@l
/* 801562C8 00153208  90 7E 00 00 */	stw r3, 0(r30)
/* 801562CC 0015320C  38 03 00 14 */	addi r0, r3, 0x14
/* 801562D0 00153210  90 1E 00 04 */	stw r0, 4(r30)
/* 801562D4 00153214  41 82 00 3C */	beq .L_80156310
/* 801562D8 00153218  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 801562DC 0015321C  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 801562E0 00153220  90 7E 00 00 */	stw r3, 0(r30)
/* 801562E4 00153224  38 03 00 14 */	addi r0, r3, 0x14
/* 801562E8 00153228  90 1E 00 04 */	stw r0, 4(r30)
/* 801562EC 0015322C  41 82 00 24 */	beq .L_80156310
/* 801562F0 00153230  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 801562F4 00153234  38 7E 00 04 */	addi r3, r30, 4
/* 801562F8 00153238  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 801562FC 0015323C  38 80 00 00 */	li r4, 0
/* 80156300 00153240  90 BE 00 00 */	stw r5, 0(r30)
/* 80156304 00153244  38 05 00 14 */	addi r0, r5, 0x14
/* 80156308 00153248  90 1E 00 04 */	stw r0, 4(r30)
/* 8015630C 0015324C  4B F3 99 91 */	bl __dt__18JPAEmitterCallBackFv
.L_80156310:
/* 80156310 00153250  7F E0 07 35 */	extsh. r0, r31
/* 80156314 00153254  40 81 00 0C */	ble .L_80156320
/* 80156318 00153258  7F C3 F3 78 */	mr r3, r30
/* 8015631C 0015325C  4B EC DD 99 */	bl __dl__FPv
.L_80156320:
/* 80156320 00153260  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80156324 00153264  7F C3 F3 78 */	mr r3, r30
/* 80156328 00153268  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015632C 0015326C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80156330 00153270  7C 08 03 A6 */	mtlr r0
/* 80156334 00153274  38 21 00 10 */	addi r1, r1, 0x10
/* 80156338 00153278  4E 80 00 20 */	blr 

.global isCaveFloor__Q26PSGame13CaveFloorInfoFv
isCaveFloor__Q26PSGame13CaveFloorInfoFv:
/* 8015633C 0015327C  38 60 00 01 */	li r3, 1
/* 80156340 00153280  4E 80 00 20 */	blr 

.global isBossFloor__Q26PSGame13CaveFloorInfoFv
isBossFloor__Q26PSGame13CaveFloorInfoFv:
/* 80156344 00153284  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 80156348 00153288  20 00 00 01 */	subfic r0, r0, 1
/* 8015634C 0015328C  7C 00 00 34 */	cntlzw r0, r0
/* 80156350 00153290  54 03 D9 7E */	srwi r3, r0, 5
/* 80156354 00153294  4E 80 00 20 */	blr 

.global isRelaxFloor__Q26PSGame13CaveFloorInfoFv
isRelaxFloor__Q26PSGame13CaveFloorInfoFv:
/* 80156358 00153298  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8015635C 0015329C  20 00 00 02 */	subfic r0, r0, 2
/* 80156360 001532A0  7C 00 00 34 */	cntlzw r0, r0
/* 80156364 001532A4  54 03 D9 7E */	srwi r3, r0, 5
/* 80156368 001532A8  4E 80 00 20 */	blr 

.global isDevelopSection__Q24Game17SingleGameSectionFv
isDevelopSection__Q24Game17SingleGameSectionFv:
/* 8015636C 001532AC  38 60 00 00 */	li r3, 0
/* 80156370 001532B0  4E 80 00 20 */	blr 

.if version == 1
.global getTimerType__Q24Game17SingleGameSectionFv
getTimerType__Q24Game17SingleGameSectionFv:
/* 80156374 001532B4  80 63 01 7C */	lwz r3, 0x1a0(r3)
/* 80156378 001532B8  4E 80 00 20 */	blr 
.else
.global getTimerType__Q24Game17SingleGameSectionFv
getTimerType__Q24Game17SingleGameSectionFv:
/* 80156374 001532B4  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 80156378 001532B8  4E 80 00 20 */	blr 
.endif

.if version == 1
.global getCaveFilename__Q24Game17SingleGameSectionFv
getCaveFilename__Q24Game17SingleGameSectionFv:
/* 8015637C 001532BC  38 63 01 95 */	addi r3, r3, 0x1b9
/* 80156380 001532C0  4E 80 00 20 */	blr 
.else
.global getCaveFilename__Q24Game17SingleGameSectionFv
getCaveFilename__Q24Game17SingleGameSectionFv:
/* 8015637C 001532BC  38 63 01 95 */	addi r3, r3, 0x195
/* 80156380 001532C0  4E 80 00 20 */	blr 
.endif

.global "init__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectionPQ24Game8StateArg"
"init__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectionPQ24Game8StateArg":
/* 80156384 001532C4  4E 80 00 20 */	blr 

.global "exec__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
"exec__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection":
/* 80156388 001532C8  4E 80 00 20 */	blr 

.global "cleanup__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
"cleanup__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection":
/* 8015638C 001532CC  4E 80 00 20 */	blr 

.global "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
"resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection":
/* 80156390 001532D0  4E 80 00 20 */	blr 

.global "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
"restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection":
/* 80156394 001532D4  4E 80 00 20 */	blr 

.global "init__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
"init__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection":
/* 80156398 001532D8  4E 80 00 20 */	blr 

.if version == 1
.global "exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
"exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection":
/* 8015639C 001532DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801563A0 001532E0  7C 08 02 A6 */	mflr r0
/* 801563A4 001532E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801563A8 001532E8  80 64 02 50 */	lwz r3, 0x274(r4)
/* 801563AC 001532EC  28 03 00 00 */	cmplwi r3, 0
/* 801563B0 001532F0  41 82 00 14 */	beq .L_801563C4
/* 801563B4 001532F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801563B8 001532F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801563BC 001532FC  7D 89 03 A6 */	mtctr r12
/* 801563C0 00153300  4E 80 04 21 */	bctrl 
.L_801563C4:
/* 801563C4 00153304  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801563C8 00153308  7C 08 03 A6 */	mtlr r0
/* 801563CC 0015330C  38 21 00 10 */	addi r1, r1, 0x10
/* 801563D0 00153310  4E 80 00 20 */	blr 
.else
.global "exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
"exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection":
/* 8015639C 001532DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801563A0 001532E0  7C 08 02 A6 */	mflr r0
/* 801563A4 001532E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801563A8 001532E8  80 64 02 50 */	lwz r3, 0x250(r4)
/* 801563AC 001532EC  28 03 00 00 */	cmplwi r3, 0
/* 801563B0 001532F0  41 82 00 14 */	beq .L_801563C4
/* 801563B4 001532F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801563B8 001532F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801563BC 001532FC  7D 89 03 A6 */	mtctr r12
/* 801563C0 00153300  4E 80 04 21 */	bctrl 
.L_801563C4:
/* 801563C4 00153304  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801563C8 00153308  7C 08 03 A6 */	mtlr r0
/* 801563CC 0015330C  38 21 00 10 */	addi r1, r1, 0x10
/* 801563D0 00153310  4E 80 00 20 */	blr 
.endif

.global "create__Q24Game40StateMachine<Q24Game17SingleGameSection>Fi"
"create__Q24Game40StateMachine<Q24Game17SingleGameSection>Fi":
/* 801563D4 00153314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801563D8 00153318  7C 08 02 A6 */	mflr r0
/* 801563DC 0015331C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801563E0 00153320  38 00 00 00 */	li r0, 0
/* 801563E4 00153324  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801563E8 00153328  7C 7F 1B 78 */	mr r31, r3
/* 801563EC 0015332C  90 83 00 0C */	stw r4, 0xc(r3)
/* 801563F0 00153330  90 03 00 08 */	stw r0, 8(r3)
/* 801563F4 00153334  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801563F8 00153338  54 03 10 3A */	slwi r3, r0, 2
/* 801563FC 0015333C  4B EC DB B1 */	bl __nwa__FUl
/* 80156400 00153340  90 7F 00 04 */	stw r3, 4(r31)
/* 80156404 00153344  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80156408 00153348  54 03 10 3A */	slwi r3, r0, 2
/* 8015640C 0015334C  4B EC DB A1 */	bl __nwa__FUl
/* 80156410 00153350  90 7F 00 10 */	stw r3, 0x10(r31)
/* 80156414 00153354  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80156418 00153358  54 03 10 3A */	slwi r3, r0, 2
/* 8015641C 0015335C  4B EC DB 91 */	bl __nwa__FUl
/* 80156420 00153360  90 7F 00 14 */	stw r3, 0x14(r31)
/* 80156424 00153364  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80156428 00153368  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8015642C 0015336C  7C 08 03 A6 */	mtlr r0
/* 80156430 00153370  38 21 00 10 */	addi r1, r1, 0x10
/* 80156434 00153374  4E 80 00 20 */	blr 

.global "invoke__36Delegate<Q24Game17SingleGameSection>Fv"
"invoke__36Delegate<Q24Game17SingleGameSection>Fv":
/* 80156438 00153378  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8015643C 0015337C  7C 08 02 A6 */	mflr r0
/* 80156440 00153380  7C 64 1B 78 */	mr r4, r3
/* 80156444 00153384  90 01 00 14 */	stw r0, 0x14(r1)
/* 80156448 00153388  39 84 00 08 */	addi r12, r4, 8
/* 8015644C 0015338C  80 63 00 04 */	lwz r3, 4(r3)
/* 80156450 00153390  4B F6 B6 D5 */	bl __ptmf_scall
/* 80156454 00153394  60 00 00 00 */	nop 
/* 80156458 00153398  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8015645C 0015339C  7C 08 03 A6 */	mtlr r0
/* 80156460 001533A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80156464 001533A4  4E 80 00 20 */	blr 

.if version == 1
.global "transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
"transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg":
/* 80156468 001533A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015646C 001533AC  7C 08 02 A6 */	mflr r0
/* 80156470 001533B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80156474 001533B4  54 A0 10 3A */	slwi r0, r5, 2
/* 80156478 001533B8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8015647C 001533BC  7C 7B 1B 78 */	mr r27, r3
/* 80156480 001533C0  7C 9C 23 78 */	mr r28, r4
/* 80156484 001533C4  7C DD 33 78 */	mr r29, r6
/* 80156488 001533C8  83 C4 02 50 */	lwz r30, 0x274(r4)
/* 8015648C 001533CC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80156490 001533D0  28 1E 00 00 */	cmplwi r30, 0
/* 80156494 001533D4  7F E3 00 2E */	lwzx r31, r3, r0
/* 80156498 001533D8  41 82 00 20 */	beq .L_801564B8
/* 8015649C 001533DC  7F C3 F3 78 */	mr r3, r30
/* 801564A0 001533E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801564A4 001533E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801564A8 001533E8  7D 89 03 A6 */	mtctr r12
/* 801564AC 001533EC  4E 80 04 21 */	bctrl 
/* 801564B0 001533F0  80 1E 00 04 */	lwz r0, 4(r30)
/* 801564B4 001533F4  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801564B8:
/* 801564B8 001533F8  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801564BC 001533FC  7C 1F 00 00 */	cmpw r31, r0
/* 801564C0 00153400  41 80 00 08 */	blt .L_801564C8
.L_801564C4:
/* 801564C4 00153404  48 00 00 00 */	b .L_801564C4
.L_801564C8:
/* 801564C8 00153408  80 7B 00 04 */	lwz r3, 4(r27)
/* 801564CC 0015340C  57 E0 10 3A */	slwi r0, r31, 2
/* 801564D0 00153410  7F 84 E3 78 */	mr r4, r28
/* 801564D4 00153414  7F A5 EB 78 */	mr r5, r29
/* 801564D8 00153418  7C 63 00 2E */	lwzx r3, r3, r0
/* 801564DC 0015341C  90 7C 02 50 */	stw r3, 0x274(r28)
/* 801564E0 00153420  81 83 00 00 */	lwz r12, 0(r3)
/* 801564E4 00153424  81 8C 00 08 */	lwz r12, 8(r12)
/* 801564E8 00153428  7D 89 03 A6 */	mtctr r12
/* 801564EC 0015342C  4E 80 04 21 */	bctrl 
/* 801564F0 00153430  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801564F4 00153434  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801564F8 00153438  7C 08 03 A6 */	mtlr r0
/* 801564FC 0015343C  38 21 00 20 */	addi r1, r1, 0x20
/* 80156500 00153440  4E 80 00 20 */	blr 
.else
.global "transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
"transit__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg":
/* 80156468 001533A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015646C 001533AC  7C 08 02 A6 */	mflr r0
/* 80156470 001533B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80156474 001533B4  54 A0 10 3A */	slwi r0, r5, 2
/* 80156478 001533B8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8015647C 001533BC  7C 7B 1B 78 */	mr r27, r3
/* 80156480 001533C0  7C 9C 23 78 */	mr r28, r4
/* 80156484 001533C4  7C DD 33 78 */	mr r29, r6
/* 80156488 001533C8  83 C4 02 50 */	lwz r30, 0x250(r4)
/* 8015648C 001533CC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80156490 001533D0  28 1E 00 00 */	cmplwi r30, 0
/* 80156494 001533D4  7F E3 00 2E */	lwzx r31, r3, r0
/* 80156498 001533D8  41 82 00 20 */	beq .L_801564B8
/* 8015649C 001533DC  7F C3 F3 78 */	mr r3, r30
/* 801564A0 001533E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801564A4 001533E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801564A8 001533E8  7D 89 03 A6 */	mtctr r12
/* 801564AC 001533EC  4E 80 04 21 */	bctrl 
/* 801564B0 001533F0  80 1E 00 04 */	lwz r0, 4(r30)
/* 801564B4 001533F4  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801564B8:
/* 801564B8 001533F8  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801564BC 001533FC  7C 1F 00 00 */	cmpw r31, r0
/* 801564C0 00153400  41 80 00 08 */	blt .L_801564C8
.L_801564C4:
/* 801564C4 00153404  48 00 00 00 */	b .L_801564C4
.L_801564C8:
/* 801564C8 00153408  80 7B 00 04 */	lwz r3, 4(r27)
/* 801564CC 0015340C  57 E0 10 3A */	slwi r0, r31, 2
/* 801564D0 00153410  7F 84 E3 78 */	mr r4, r28
/* 801564D4 00153414  7F A5 EB 78 */	mr r5, r29
/* 801564D8 00153418  7C 63 00 2E */	lwzx r3, r3, r0
/* 801564DC 0015341C  90 7C 02 50 */	stw r3, 0x250(r28)
/* 801564E0 00153420  81 83 00 00 */	lwz r12, 0(r3)
/* 801564E4 00153424  81 8C 00 08 */	lwz r12, 8(r12)
/* 801564E8 00153428  7D 89 03 A6 */	mtctr r12
/* 801564EC 0015342C  4E 80 04 21 */	bctrl 
/* 801564F0 00153430  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801564F4 00153434  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801564F8 00153438  7C 08 03 A6 */	mtlr r0
/* 801564FC 0015343C  38 21 00 20 */	addi r1, r1, 0x20
/* 80156500 00153440  4E 80 00 20 */	blr 
.endif

.global "registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>" # weak function
"registerState__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game36FSMState<Q24Game17SingleGameSection>":
/* 80156504 00153444  80 C3 00 08 */	lwz r6, 8(r3)
/* 80156508 00153448  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8015650C 0015344C  7C 06 00 00 */	cmpw r6, r0
/* 80156510 00153450  4C 80 00 20 */	bgelr 
/* 80156514 00153454  80 A3 00 04 */	lwz r5, 4(r3)
/* 80156518 00153458  54 C0 10 3A */	slwi r0, r6, 2
/* 8015651C 0015345C  7C 85 01 2E */	stwx r4, r5, r0
/* 80156520 00153460  80 A4 00 04 */	lwz r5, 4(r4)
/* 80156524 00153464  2C 05 00 00 */	cmpwi r5, 0
/* 80156528 00153468  41 80 00 10 */	blt .L_80156538
/* 8015652C 0015346C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 80156530 00153470  7C 05 00 00 */	cmpw r5, r0
/* 80156534 00153474  41 80 00 0C */	blt .L_80156540
.L_80156538:
/* 80156538 00153478  38 00 00 00 */	li r0, 0
/* 8015653C 0015347C  48 00 00 08 */	b .L_80156544
.L_80156540:
/* 80156540 00153480  38 00 00 01 */	li r0, 1
.L_80156544:
/* 80156544 00153484  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80156548 00153488  4D 82 00 20 */	beqlr 
/* 8015654C 0015348C  90 64 00 08 */	stw r3, 8(r4)
/* 80156550 00153490  80 03 00 08 */	lwz r0, 8(r3)
/* 80156554 00153494  80 C4 00 04 */	lwz r6, 4(r4)
/* 80156558 00153498  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 8015655C 0015349C  54 00 10 3A */	slwi r0, r0, 2
/* 80156560 001534A0  7C C5 01 2E */	stwx r6, r5, r0
/* 80156564 001534A4  80 04 00 04 */	lwz r0, 4(r4)
/* 80156568 001534A8  80 A3 00 08 */	lwz r5, 8(r3)
/* 8015656C 001534AC  80 83 00 14 */	lwz r4, 0x14(r3)
/* 80156570 001534B0  54 00 10 3A */	slwi r0, r0, 2
/* 80156574 001534B4  7C A4 01 2E */	stwx r5, r4, r0
/* 80156578 001534B8  80 83 00 08 */	lwz r4, 8(r3)
/* 8015657C 001534BC  38 04 00 01 */	addi r0, r4, 1
/* 80156580 001534C0  90 03 00 08 */	stw r0, 8(r3)
/* 80156584 001534C4  4E 80 00 20 */	blr 

fn local __sinit_singleGameSection_cpp
/* 80156588 001534C8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8015658C 001534CC  38 00 FF FF */	li r0, -1
/* 80156590 001534D0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80156594 001534D4  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80156598 001534D8  90 0D 92 C0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8015659C 001534DC  D4 03 10 70 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 801565A0 001534E0  D0 0D 92 C4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 801565A4 001534E4  D0 03 00 04 */	stfs f0, 4(r3)
/* 801565A8 001534E8  D0 03 00 08 */	stfs f0, 8(r3)
/* 801565AC 001534EC  4E 80 00 20 */	blr 
end __sinit_singleGameSection_cpp

"@4@__dt__Q23efx13TTutorialSnowFv":
/* 801565B0 001534F0  38 63 FF FC */	addi r3, r3, -4
/* 801565B4 001534F4  4B FF FC EC */	b __dt__Q23efx13TTutorialSnowFv

"@4@__dt__Q23efx13TForestSakuraFv":
/* 801565B8 001534F8  38 63 FF FC */	addi r3, r3, -4
/* 801565BC 001534FC  4B FF FC 48 */	b __dt__Q23efx13TForestSakuraFv

"@4@__dt__Q23efx11TLastMomijiFv":
/* 801565C0 00153500  38 63 FF FC */	addi r3, r3, -4
/* 801565C4 00153504  4B FF FB A4 */	b __dt__Q23efx11TLastMomijiFv
