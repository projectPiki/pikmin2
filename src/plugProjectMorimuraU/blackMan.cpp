#include "types.h"
#include "Game/Entities/BlackMan.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_blackMan_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80495670
    lbl_80495670:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x626C6163
        .4byte 0x6B4D616E
        .4byte 0x00000000
    .global lbl_80495688
    lbl_80495688:
        .4byte 0x626C6163
        .4byte 0x6B4D616E
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_80495698
    lbl_80495698:
        .asciz "P2Assert"
        .skip 3
    .global lbl_804956A4
    lbl_804956A4:
        .asciz "handLend"
        .skip 3
    .global lbl_804956B0
    lbl_804956B0:
        .asciz "handRend"
        .skip 3
    .global lbl_804956BC
    lbl_804956BC:
        .asciz "PSMainSide_ObjSound.h"
        .skip 2
        .asciz "kage_mat"
        .skip 3
        .asciz "PSGame.h"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "x20_blackman"
        .skip 3
    .global lbl_80495708
    lbl_80495708:
        .asciz "failed traceRoutePoint\n"
        .asciz "no handle pathFinder\n"
        .skip 2
        .4byte lbl_8051F454
        .4byte lbl_8051F45C
        .4byte lbl_8051F464
        .4byte lbl_8051F46C
        .4byte lbl_804956A4
        .4byte lbl_804956B0
        .4byte lbl_8051F444
        .4byte lbl_8051F44C
        .4byte lbl_8051F500
        .4byte lbl_8051F508
        .4byte lbl_8051F510
        .4byte lbl_8051F518
        .4byte lbl_8051F520
        .4byte lbl_8051F528
        .4byte lbl_8051F530
        .4byte lbl_8051F538
    .global lbl_80495778
    lbl_80495778:
        .asciz "shoulderL"
        .skip 2
    .global lbl_80495784
    lbl_80495784:
        .asciz "shoulderR"
        .skip 2
        .4byte lbl_80495778
        .4byte lbl_80495784
        .4byte lbl_8051F540
        .4byte lbl_8051F548
        .asciz "get sound scene at\ninvalid timming\n"
    .global lbl_804957C4
    lbl_804957C4:
        .asciz "ArgPrmColor"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804E5D00
    lbl_804E5D00:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q23efx10TKageBend1
    __vt__Q23efx10TKageBend1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx11ArgPrmColor
    __vt__Q23efx11ArgPrmColor:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx11ArgPrmColorFv
    .global __vt__Q23efx10TKageFlick
    __vt__Q23efx10TKageFlick:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TKageFlickFv"
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
        .4byte __dt__Q23efx10TKageFlickFv
    .global __vt__Q23efx11TKageTyreup
    __vt__Q23efx11TKageTyreup:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11TKageTyreupFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx11TKageTyreupFv .global __vt__Q23efx10TKageDead1
    __vt__Q23efx10TKageDead1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx10TKageDead1Fv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx10TKageDead1Fv
    .global __vt__Q23efx8TKageRun
    __vt__Q23efx8TKageRun:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx8TKageRunFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx8TKageRunFv .global __vt__Q23efx9TKageMove
    __vt__Q23efx9TKageMove:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx9TKageMoveFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte
   doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter .4byte
   doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter .4byte
   startDemoDrawOff__Q23efx5TSyncFv .4byte endDemoDrawOn__Q23efx5TSyncFv .4byte
   __dt__Q23efx9TKageMoveFv .global __vt__Q34Game8BlackMan3Obj
    __vt__Q34Game8BlackMan3Obj:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game9EnemyBaseFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game9EnemyBaseFv
        .4byte onInit__Q34Game8BlackMan3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game8BlackMan3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q34Game8BlackMan3ObjFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game8BlackMan3ObjFf
        .4byte doDirectDraw__Q34Game8BlackMan3ObjFR8Graphics
        .4byte getBodyRadius__Q24Game9EnemyBaseFv
        .4byte getCellRadius__Q24Game9EnemyBaseFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q24Game9EnemyBaseFv
        .4byte "setVelocity__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getVelocity__Q24Game9EnemyBaseFv
        .4byte "onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte updateTrMatrix__Q24Game9EnemyBaseFv
        .4byte isTeki__Q24Game9EnemyBaseFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game9EnemyBaseFv
        .4byte inWater__Q24Game9EnemyBaseFv
        .4byte getFlockMgr__Q24Game8CreatureFv
        .4byte onStartCapture__Q24Game8CreatureFv
        .4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
        .4byte onEndCapture__Q24Game8CreatureFv
        .4byte isAtari__Q24Game8CreatureFv
        .4byte setAtari__Q24Game8CreatureFb
        .4byte isAlive__Q24Game8CreatureFv
        .4byte setAlive__Q24Game8CreatureFb
        .4byte isCollisionFlick__Q24Game8CreatureFv
        .4byte setCollisionFlick__Q24Game8CreatureFb
        .4byte isMovieActor__Q24Game8CreatureFv
        .4byte isMovieExtra__Q24Game8CreatureFv
        .4byte isMovieMotion__Q24Game8CreatureFv
        .4byte setMovieMotion__Q24Game8CreatureFb
        .4byte isBuried__Q24Game8CreatureFv
        .4byte isFlying__Q24Game9EnemyBaseFv
        .4byte isUnderground__Q34Game8BlackMan3ObjFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game8BlackMan3ObjFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game9EnemyBaseFv
        .4byte getPSCreature__Q24Game9EnemyBaseFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game9EnemyBaseFv
        .4byte sound_culling__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimFrame__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8CreatureFf
        .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q34Game8BlackMan3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game9EnemyBaseFv
        .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte "getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>"
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game8BlackMan3ObjFv
        .4byte "birth__Q34Game8BlackMan3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game8BlackMan3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game8BlackMan3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOff__Q34Game8BlackMan3ObjFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game8BlackMan3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game8BlackMan3ObjFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q34Game8BlackMan3ObjFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q34Game8BlackMan3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game8BlackMan3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q34Game8BlackMan3ObjFv
        .4byte createEfxHamon__Q34Game8BlackMan3ObjFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game8BlackMan3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte
   doGetLifeGaugeParam__Q34Game8BlackMan3ObjFRQ24Game14LifeGaugeParam .4byte
   throwupItem__Q24Game9EnemyBaseFv .4byte
   "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   throwupItemInDeathProcedure__Q34Game8BlackMan3ObjFv .4byte
   setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere .4byte
   damageCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game8BlackMan3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q34Game8BlackMan3ObjFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game8BlackMan3ObjFv .4byte
   doFinishStoneState__Q34Game8BlackMan3ObjFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q24Game9EnemyBaseFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game8BlackMan3ObjFPQ34Game8BlackMan3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@940@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@940@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@940@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@940@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@940@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@940@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516058
    lbl_80516058:
        .skip 0x4
    .global lbl_8051605C
    lbl_8051605C:
        .skip 0x4
    .global curB__Q24Game8BlackMan
    curB__Q24Game8BlackMan:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051F438
    lbl_8051F438:
        .4byte 0x00000000
    .global lbl_8051F43C
    lbl_8051F43C:
        .4byte 0x63686573
        .4byte 0x74000000
    .global lbl_8051F444
    lbl_8051F444:
        .asciz "footL"
        .skip 2
    .global lbl_8051F44C
    lbl_8051F44C:
        .asciz "footR"
        .skip 2
    .global lbl_8051F454
    lbl_8051F454:
        .asciz "tyreFL"
        .skip 1
    .global lbl_8051F45C
    lbl_8051F45C:
        .asciz "TyreFR"
        .skip 1
    .global lbl_8051F464
    lbl_8051F464:
        .asciz "TyreBL"
        .skip 1
    .global lbl_8051F46C
    lbl_8051F46C:
        .asciz "tyreBR"
        .skip 1
    .global lbl_8051F474
    lbl_8051F474:
        .asciz "waist"
        .skip 2
    .global lbl_8051F47C
    lbl_8051F47C:
        .float 10.0
    .global lbl_8051F480
    lbl_8051F480:
        .float 1.0
    .global lbl_8051F484
    lbl_8051F484:
        .4byte 0x437F0000
    .global lbl_8051F488
    lbl_8051F488:
        .4byte 0x461C4000
    .global lbl_8051F48C
    lbl_8051F48C:
        .4byte 0xBF800000
    .global lbl_8051F490
    lbl_8051F490:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_8051F498
    lbl_8051F498:
        .4byte 0x3C23D70A
    .global lbl_8051F49C
    lbl_8051F49C:
        .4byte 0xC47A0000
    .global lbl_8051F4A0
    lbl_8051F4A0:
        .float 0.1
    .global lbl_8051F4A4
    lbl_8051F4A4:
        .4byte 0x41F00000
    .global lbl_8051F4A8
    lbl_8051F4A8:
        .4byte 0x40000000
    .global lbl_8051F4AC
    lbl_8051F4AC:
        .4byte 0x42480000
    .global lbl_8051F4B0
    lbl_8051F4B0:
        .4byte 0x40A00000
    .global lbl_8051F4B4
    lbl_8051F4B4:
        .4byte 0x491C4000
    .global lbl_8051F4B8
    lbl_8051F4B8:
        .4byte 0x481C4000
    .global lbl_8051F4BC
    lbl_8051F4BC:
        .4byte 0x3E4CCCCD
    .global lbl_8051F4C0
    lbl_8051F4C0:
        .4byte 0x42C80000
    .global lbl_8051F4C4
    lbl_8051F4C4:
        .float 138.23009
    .global lbl_8051F4C8
    lbl_8051F4C8:
        .float 0.25
        .4byte 0x00000000
    .global lbl_8051F4D0
    lbl_8051F4D0:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_8051F4D8
    lbl_8051F4D8:
        .float 0.05
    .global lbl_8051F4DC
    lbl_8051F4DC:
        .float 0.5
    .global lbl_8051F4E0
    lbl_8051F4E0:
        .float 1.4
        .4byte 0x00000000
    .global lbl_8051F4E8
    lbl_8051F4E8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051F4F0
    lbl_8051F4F0:
        .float -325.9493
    .global lbl_8051F4F4
    lbl_8051F4F4:
        .float 325.9493
    .global lbl_8051F4F8
    lbl_8051F4F8:
        .float 32768.0
    .global lbl_8051F4FC
    lbl_8051F4FC:
        .float 1000000.0
    .global lbl_8051F500
    lbl_8051F500:
        .asciz "handL"
        .skip 2
    .global lbl_8051F508
    lbl_8051F508:
        .asciz "handR"
        .skip 2
    .global lbl_8051F510
    lbl_8051F510:
        .asciz "legBL"
        .skip 2
    .global lbl_8051F518
    lbl_8051F518:
        .asciz "legBR"
        .skip 2
    .global lbl_8051F520
    lbl_8051F520:
        .asciz "armBL"
        .skip 2
    .global lbl_8051F528
    lbl_8051F528:
        .asciz "armBR"
        .skip 2
    .global lbl_8051F530
    lbl_8051F530:
        .asciz "legTL"
        .skip 2
    .global lbl_8051F538
    lbl_8051F538:
        .asciz "legTR"
        .skip 2
    .global lbl_8051F540
    lbl_8051F540:
        .asciz "clouchL"
    .global lbl_8051F548
    lbl_8051F548:
        .asciz "clouchR"
    .global lbl_8051F550
    lbl_8051F550:
        .4byte 0x41700000
    .global lbl_8051F554
    lbl_8051F554:
        .4byte lbl_8051F454
    .global lbl_8051F558
    lbl_8051F558:
        .4byte lbl_8051F45C
    .global lbl_8051F55C
    lbl_8051F55C:
        .4byte 0x3F4CCCCD
    .global lbl_8051F560
    lbl_8051F560:
        .4byte 0x68656164
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	803A5DB0
 * Size:	00003C
 */
void BlackMan::lHandCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_803A5DD8
	lwz      r3, curB__Q24Game8BlackMan@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A5DD8
	li       r4, 0
	bl       jointMtxCalc__Q34Game8BlackMan3ObjFi

lbl_803A5DD8:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A5DEC
 * Size:	00003C
 */
void BlackMan::rHandCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_803A5E14
	lwz      r3, curB__Q24Game8BlackMan@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A5E14
	li       r4, 1
	bl       jointMtxCalc__Q34Game8BlackMan3ObjFi

lbl_803A5E14:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A5E28
 * Size:	00003C
 */
void BlackMan::lFootCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_803A5E50
	lwz      r3, curB__Q24Game8BlackMan@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A5E50
	li       r4, 2
	bl       jointMtxCalc__Q34Game8BlackMan3ObjFi

lbl_803A5E50:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A5E64
 * Size:	00003C
 */
void BlackMan::rFootCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_803A5E8C
	lwz      r3, curB__Q24Game8BlackMan@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A5E8C
	li       r4, 3
	bl       jointMtxCalc__Q34Game8BlackMan3ObjFi

lbl_803A5E8C:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A5EA0
 * Size:	000038
 */
void BlackMan::bodyCallBack(J3DJoint*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	bne      lbl_803A5EC4
	lwz      r3, curB__Q24Game8BlackMan@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A5EC4
	bl       bodyMtxCalc__Q34Game8BlackMan3ObjFv

lbl_803A5EC4:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A5ED8
 * Size:	0000F0
 */
void BlackMan::Obj::setParameters(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setParameters__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_803A5F54
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x190(r31)
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x190(r31)
	lfs      f0, 0xa50(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x190(r31)
	lwz      r3, 0x364(r31)
	cmplwi   r3, 0
	beq      lbl_803A5F54
	lwz      r12, 0(r3)
	addi     r4, r31, 0x18c
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl

lbl_803A5F54:
	lwz      r3, 0xc0(r31)
	lfs      f31, 0xa24(r3)
	stfs     f31, 0x1f8(r31)
	fmr      f1, f31
	stfs     f31, 0x168(r31)
	stfs     f31, 0x16c(r31)
	stfs     f31, 0x170(r31)
	lwz      r3, 0x114(r31)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf
	lwz      r3, 0x364(r31)
	cmplwi   r3, 0
	beq      lbl_803A5FAC
	stfs     f31, 0x1f8(r3)
	fmr      f1, f31
	stfs     f31, 0x168(r3)
	stfs     f31, 0x16c(r3)
	stfs     f31, 0x170(r3)
	lwz      r3, 0x364(r31)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	bl       setScale__8CollPartFf

lbl_803A5FAC:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A5FC8
 * Size:	000020
 */
void BlackMan::Obj::birth(Vector3f& position, f32 faceDirection) { EnemyBase::birth(position, faceDirection); }

/*
 * --INFO--
 * Address:	803A5FE8
 * Size:	0006B4
 */
void BlackMan::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	lis      r5, lbl_80495670@ha
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	addi     r31, r5, lbl_80495670@l
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r29, r3
	stw      r28, 0x60(r1)
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r29)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r29)
	lwz      r0, 0x1e0(r29)
	rlwinm   r0, r0, 0, 0x19, 0x17
	stw      r0, 0x1e0(r29)
	lwz      r0, 0x1e0(r29)
	rlwinm   r0, r0, 0, 0x18, 0x16
	stw      r0, 0x1e0(r29)
	lwz      r3, 0xc0(r29)
	lbz      r0, 0xa10(r3)
	stw      r0, 0x2e0(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_803A60B4
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x86a1
	cmplwi   r0, 0x3031
	bne      lbl_803A60B4
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A60B4
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_803A60B4
	lwz      r3, 0x360(r29)
	mr       r4, r29
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	stw      r0, 0x2e0(r29)
	b        lbl_803A6140

lbl_803A60B4:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	li       r4, 0x62
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r28, r3, r3
	beq      lbl_803A6120
	addi     r3, r1, 0x20
	bl       __ct__Q24Game13EnemyBirthArgFv
	lfs      f0, 0x18c(r29)
	mr       r3, r28
	addi     r4, r1, 0x20
	stfs     f0, 0x20(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x28(r1)
	lfs      f0, 0x1fc(r29)
	stfs     f0, 0x2c(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x364(r29)
	li       r4, 0
	lwz      r3, 0x364(r29)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r3, 0x364(r29)
	stw      r29, 0x2bc(r3)

lbl_803A6120:
	lwz      r3, 0x360(r29)
	mr       r4, r29
	li       r5, 5
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_803A6140:
	lwz      r0, 0x358(r29)
	cmplwi   r0, 0
	bne      lbl_803A6160
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0xb2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A6160:
	lwz      r3, 0x358(r29)
	lwz      r4, 0x180(r29)
	lwz      r12, 0(r3)
	lwz      r4, 0x44(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, -1
	li       r0, 0
	stw      r3, 0x2dc(r29)
	lfs      f0, lbl_8051F438@sda21(r2)
	lfs      f1, 0x18c(r29)
	stfs     f1, 0x2f8(r29)
	lfs      f1, 0x190(r29)
	stfs     f1, 0x2fc(r29)
	lfs      f1, 0x194(r29)
	stfs     f1, 0x300(r29)
	lfs      f1, 0x2f8(r29)
	stfs     f1, 0x198(r29)
	lfs      f1, 0x2fc(r29)
	stfs     f1, 0x19c(r29)
	lfs      f1, 0x300(r29)
	stfs     f1, 0x1a0(r29)
	lfs      f1, 0x198(r29)
	stfs     f1, 0x2d0(r29)
	lfs      f1, 0x19c(r29)
	stfs     f1, 0x2d4(r29)
	lfs      f1, 0x1a0(r29)
	stfs     f1, 0x2d8(r29)
	stw      r0, 0x348(r29)
	stb      r0, 0x34c(r29)
	stw      r0, 0x35c(r29)
	stw      r0, 0x2e4(r29)
	stw      r0, 0x2e8(r29)
	stw      r0, 0x334(r29)
	stw      r0, 0x2cc(r29)
	stfs     f0, 0x374(r29)
	stw      r0, curB__Q24Game8BlackMan@sda21(r13)
	lwz      r0, 0x174(r29)
	cmplwi   r0, 0
	bne      lbl_803A6218
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A6218:
	lwz      r3, 0x174(r29)
	lwz      r3, 8(r3)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_803A6240
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0xd4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A6240:
	lwz      r3, 0x174(r29)
	addi     r4, r2, lbl_8051F43C@sda21
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x36a(r29)
	addi     r4, r31, 0x34
	lwz      r3, 0x174(r29)
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x36c(r29)
	addi     r4, r31, 0x40
	lwz      r3, 0x174(r29)
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x36e(r29)
	addi     r4, r2, lbl_8051F444@sda21
	lwz      r3, 0x174(r29)
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x370(r29)
	addi     r4, r2, lbl_8051F44C@sda21
	lwz      r3, 0x174(r29)
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x372(r29)
	lwz      r3, 0x364(r29)
	cmplwi   r3, 0
	beq      lbl_803A6410
	lwz      r28, 0x174(r3)
	addi     r4, r2, lbl_8051F454@sda21
	mr       r3, r28
	bl       getJointIndex__Q28SysShape5ModelFPc
	lwz      r12, 0(r28)
	clrlwi   r4, r3, 0x10
	mr       r3, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2bc(r29)
	lis      r3, lHandCallBack__Q24Game8BlackManFP8J3DJointi@ha
	addi     r5, r3, lHandCallBack__Q24Game8BlackManFP8J3DJointi@l
	addi     r4, r2, lbl_8051F45C@sda21
	lhz      r0, 0x36c(r29)
	lwz      r3, 0x28(r30)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r5, 4(r3)
	lwz      r3, 0x364(r29)
	lwz      r28, 0x174(r3)
	mr       r3, r28
	bl       getJointIndex__Q28SysShape5ModelFPc
	lwz      r12, 0(r28)
	clrlwi   r4, r3, 0x10
	mr       r3, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c0(r29)
	lis      r3, rHandCallBack__Q24Game8BlackManFP8J3DJointi@ha
	addi     r5, r3, rHandCallBack__Q24Game8BlackManFP8J3DJointi@l
	addi     r4, r2, lbl_8051F464@sda21
	lhz      r0, 0x36e(r29)
	lwz      r3, 0x28(r30)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r5, 4(r3)
	lwz      r3, 0x364(r29)
	lwz      r28, 0x174(r3)
	mr       r3, r28
	bl       getJointIndex__Q28SysShape5ModelFPc
	lwz      r12, 0(r28)
	clrlwi   r4, r3, 0x10
	mr       r3, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c4(r29)
	lis      r3, lFootCallBack__Q24Game8BlackManFP8J3DJointi@ha
	addi     r5, r3, lFootCallBack__Q24Game8BlackManFP8J3DJointi@l
	addi     r4, r2, lbl_8051F46C@sda21
	lhz      r0, 0x370(r29)
	lwz      r3, 0x28(r30)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r5, 4(r3)
	lwz      r3, 0x364(r29)
	lwz      r28, 0x174(r3)
	mr       r3, r28
	bl       getJointIndex__Q28SysShape5ModelFPc
	lwz      r12, 0(r28)
	clrlwi   r4, r3, 0x10
	mr       r3, r28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c8(r29)
	lis      r3, rFootCallBack__Q24Game8BlackManFP8J3DJointi@ha
	addi     r4, r3, rFootCallBack__Q24Game8BlackManFP8J3DJointi@l
	lhz      r0, 0x372(r29)
	lwz      r3, 0x28(r30)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r4, 4(r3)
	lwz      r3, 0x174(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r29)
	lwz      r3, 0x174(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lhz      r0, 0x36a(r29)
	lis      r4, bodyCallBack__Q24Game8BlackManFP8J3DJointi@ha
	lwz      r3, 0x28(r30)
	addi     r4, r4, bodyCallBack__Q24Game8BlackManFP8J3DJointi@l
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	stw      r4, 4(r3)

lbl_803A6410:
	lwz      r3, 0x174(r29)
	addi     r4, r2, lbl_8051F474@sda21
	bl       getJointIndex__Q28SysShape5ModelFPc
	sth      r3, 0x368(r29)
	lwz      r0, 0x364(r29)
	cmplwi   r0, 0
	beq      lbl_803A6458
	lwz      r3, 0xc0(r29)
	addi     r4, r29, 0x18c
	lfs      f1, 0x190(r29)
	lfs      f0, 0xa50(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x190(r29)
	lwz      r3, 0x364(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl

lbl_803A6458:
	lfs      f1, 0x18c(r29)
	li       r0, 0
	lfs      f0, lbl_8051F47C@sda21(r2)
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f1, 0x190(r29)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x194(r29)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	lha      r0, 0x36(r3)
	mr       r3, r29
	sth      r0, 0x344(r29)
	sth      r0, 0x342(r29)
	sth      r0, 0x340(r29)
	lfs      f0, 0x18c(r29)
	stfs     f0, 0x2f8(r29)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x2fc(r29)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x300(r29)
	lfs      f0, 0x2f8(r29)
	stfs     f0, 0x198(r29)
	lfs      f0, 0x2fc(r29)
	stfs     f0, 0x19c(r29)
	lfs      f0, 0x300(r29)
	stfs     f0, 0x1a0(r29)
	lfs      f0, 0x198(r29)
	stfs     f0, 0x2d0(r29)
	lfs      f0, 0x19c(r29)
	stfs     f0, 0x2d4(r29)
	lfs      f0, 0x1a0(r29)
	stfs     f0, 0x2d8(r29)
	bl       isFinalFloor__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A6550
	lwz      r30, 0x28c(r29)
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_803A6530
	addi     r3, r31, 0x4c
	addi     r5, r31, 0x28
	li       r4, 0x45a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A6530:
	cmplwi   r30, 0
	beq      lbl_803A6580
	mr       r3, r30
	li       r4, 0
	bl       setAppearFlag__Q23PSM9EnemyBossFb
	li       r0, 1
	stb      r0, 0xff(r30)
	b        lbl_803A6580

lbl_803A6550:
	lwz      r0, 0x364(r29)
	cmplwi   r0, 0
	beq      lbl_803A6580
	addi     r3, r29, 0x250
	bl       isNull__Q34Game9PelletMgr15OtakaraItemCodeFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A6580
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803A6580
	mr       r3, r29
	bl       exit__Q25Radar3MgrFPQ24Game15TPositionObject

lbl_803A6580:
	li       r0, 0xb5
	li       r3, 0xc0
	stb      r0, 0x384(r29)
	li       r0, 0xae
	li       r8, 0xff
	li       r7, 0x20
	stb      r3, 0x385(r29)
	li       r6, 0x16
	li       r5, 0x30
	li       r4, 0x3f
	stb      r0, 0x386(r29)
	li       r3, 0x57
	li       r0, 0
	stb      r8, 0x387(r29)
	stb      r8, 0x388(r29)
	stb      r7, 0x389(r29)
	stb      r6, 0x38a(r29)
	stb      r8, 0x38b(r29)
	stb      r5, 0x38c(r29)
	stb      r4, 0x38d(r29)
	stb      r3, 0x38e(r29)
	stb      r0, 0x38f(r29)
	lbz      r0, 0x384(r29)
	stb      r0, 0x380(r29)
	lbz      r0, 0x385(r29)
	stb      r0, 0x381(r29)
	lbz      r0, 0x386(r29)
	stb      r0, 0x382(r29)
	lbz      r0, 0x387(r29)
	stb      r0, 0x383(r29)
	lwz      r3, 0x174(r29)
	lwz      r3, 8(r3)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_803A6620
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0x126
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A6620:
	lwz      r3, 0x64(r30)
	addi     r4, r31, 0x64
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x60(r30)
	rlwinm   r0, r3, 2, 0xe, 0x1d
	lwzx     r0, r4, r0
	stw      r0, 0x37c(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A665C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803A665C
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f0, 0x33c(r29)

lbl_803A665C:
	lhz      r0, 0x36a(r29)
	lwz      r3, 0x174(r29)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x39c(r29)
	stw      r3, 0x10(r4)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A669C
 * Size:	000560
 */
BlackMan::Obj::Obj(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_803A66DC
	addi     r0, r31, 0x3ac
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x3ac(r31)
	stw      r0, 0x3b0(r31)
	stw      r0, 0x3b4(r31)

lbl_803A66DC:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r4, __vt__Q34Game8BlackMan3Obj@ha
	addi     r9, r31, 0x3ac
	addi     r5, r4, __vt__Q34Game8BlackMan3Obj@l
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	stw      r5, 0(r31)
	addi     r0, r5, 0x1b0
	addi     r10, r5, 0x2fc
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	stw      r0, 0x178(r31)
	li       r8, -1
	li       r0, 0
	addi     r3, r31, 0x310
	lwz      r7, 0x17c(r31)
	li       r5, 0
	li       r6, 0xc
	stw      r10, 0(r7)
	li       r7, 2
	lwz      r10, 0x17c(r31)
	subf     r9, r10, r9
	stw      r9, 0xc(r10)
	stw      r8, 0x2dc(r31)
	stw      r0, 0x2e4(r31)
	stw      r0, 0x2e8(r31)
	stw      r0, 0x2ec(r31)
	stw      r0, 0x2f0(r31)
	stw      r0, 0x2f4(r31)
	bl       __construct_array
	li       r4, 0
	lfs      f0, lbl_8051F47C@sda21(r2)
	stw      r4, 0x334(r31)
	li       r0, -1
	addi     r3, r31, 0x350
	stb      r4, 0x338(r31)
	stfs     f0, 0x33c(r31)
	sth      r0, 0x340(r31)
	sth      r0, 0x342(r31)
	sth      r0, 0x344(r31)
	stw      r4, 0x348(r31)
	stb      r4, 0x34c(r31)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r0, 0
	lfs      f0, lbl_8051F480@sda21(r2)
	stw      r0, 0x358(r31)
	li       r3, 0x2c
	stw      r0, 0x35c(r31)
	stw      r0, 0x360(r31)
	stw      r0, 0x364(r31)
	stfs     f0, 0x378(r31)
	stw      r0, 0x37c(r31)
	stw      r0, 0x390(r31)
	stw      r0, 0x394(r31)
	stw      r0, 0x398(r31)
	stw      r0, 0x39c(r31)
	stb      r0, 0x3a8(r31)
	stb      r0, 0x3a9(r31)
	stb      r0, 0x3aa(r31)
	stb      r0, 0x3ab(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803A6818
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game8BlackMan14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game8BlackMan14ProperAnimator@l
	lis      r3, __vt__Q28SysShape8Animator@ha
	stw      r0, 0(r30)
	addi     r4, r4, __vt__Q28SysShape12BaseAnimator@l
	addi     r3, r3, __vt__Q28SysShape8Animator@l
	li       r0, 0
	stw      r4, 0x10(r30)
	stw      r3, 0x10(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x1c(r30)
	stw      r0, 0x14(r30)
	stb      r0, 0x28(r30)
	stw      r0, 0x20(r30)

lbl_803A6818:
	stw      r30, 0x184(r31)
	li       r3, 0xc
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_803A683C
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r30)

lbl_803A683C:
	stw      r30, 0x358(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_803A6870
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game8BlackMan3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game8BlackMan3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_803A6870:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803A6914
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx13TChasePosYRot@ha
	stw      r0, 4(r3)
	addi     r9, r4, __vt__Q23efx13TChasePosYRot@l
	lis      r4, __vt__Q23efx9TKageMove@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TKageMove@l
	li       r11, 0
	li       r10, 0x2b2
	stw      r0, 4(r3)
	addi     r8, r9, 0x14
	addi     r7, r31, 0x304
	addi     r6, r31, 0x1fc
	stw      r11, 8(r3)
	li       r5, 0x299
	addi     r0, r4, 0x14
	sth      r10, 0xc(r3)
	stb      r11, 0xe(r3)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 0x10(r3)
	stw      r6, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_803A6914:
	stw      r3, 0x390(r31)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803A69A8
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx13TChasePosYRot@ha
	stw      r0, 4(r3)
	addi     r9, r4, __vt__Q23efx13TChasePosYRot@l
	lis      r4, __vt__Q23efx8TKageRun@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx8TKageRun@l
	li       r11, 0
	li       r10, 0x2b2
	stw      r0, 4(r3)
	addi     r8, r9, 0x14
	addi     r7, r31, 0x304
	addi     r6, r31, 0x1fc
	stw      r11, 8(r3)
	li       r5, 0x29c
	addi     r0, r4, 0x14
	sth      r10, 0xc(r3)
	stb      r11, 0xe(r3)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 0x10(r3)
	stw      r6, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_803A69A8:
	stw      r3, 0x394(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803A6A30
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx10TKageDead1@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TKageDead1@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x297
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

lbl_803A6A30:
	stw      r3, 0x39c(r31)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803A6AC4
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx13TChasePosYRot@ha
	stw      r0, 4(r3)
	addi     r9, r4, __vt__Q23efx13TChasePosYRot@l
	lis      r4, __vt__Q23efx11TKageTyreup@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx11TKageTyreup@l
	li       r11, 0
	li       r10, 0x2b2
	stw      r0, 4(r3)
	addi     r8, r9, 0x14
	addi     r7, r31, 0x328
	addi     r6, r31, 0x1fc
	stw      r11, 8(r3)
	li       r5, 0x2a1
	addi     r0, r4, 0x14
	sth      r10, 0xc(r3)
	stb      r11, 0xe(r3)
	stw      r9, 0(r3)
	stw      r8, 4(r3)
	stw      r7, 0x10(r3)
	stw      r6, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_803A6AC4:
	stw      r3, 0x398(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803A6B50
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx10TKageFlick@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TKageFlick@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x310
	li       r5, 0x2ae
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_803A6B50:
	stw      r3, 0x3a0(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_803A6BDC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx10TKageFlick@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TKageFlick@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x31c
	li       r5, 0x2ae
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_803A6BDC:
	stw      r3, 0x3a4(r31)
	mr       r3, r31
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
 * Address:	803A6BFC
 * Size:	00004C
 */
void BlackMan::Obj::setFSM(Game::BlackMan::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x360(r3)
	mr       r4, r31
	lwz      r3, 0x360(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2b4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A6C48
 * Size:	0006C4
 */
void BlackMan::Obj::doUpdate(void)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	lis      r4, lbl_80495670@ha
	mr       r30, r3
	addi     r31, r4, lbl_80495670@l
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r3, r30
	bl       isStopMotion__Q24Game9EnemyBaseFv
	mr       r3, r30
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	lwz      r3, 0x360(r30)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x378(r30)
	lfs      f1, lbl_8051F480@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_803A6E48
	lwz      r3, 0xc0(r30)
	lfs      f0, 0xa3c(r3)
	fadds    f0, f2, f0
	stfs     f0, 0x378(r30)
	lfs      f0, 0x378(r30)
	fcmpo    cr0, f0, f1
	ble      lbl_803A6CE8
	stfs     f1, 0x378(r30)

lbl_803A6CE8:
	lfs      f1, lbl_8051F480@sda21(r2)
	lis      r3, 0x6B6F7369@ha
	lfs      f0, 0x378(r30)
	addi     r4, r3, 0x6B6F7369@l
	lwz      r3, 0x114(r30)
	fsubs    f31, f1, f0
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A6D2C
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	bne      lbl_803A6D4C

lbl_803A6D2C:
	lfs      f1, lbl_8051F484@sda21(r2)
	lfs      f0, 0x378(r30)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	stb      r0, 0x38f(r30)
	b        lbl_803A6E48

lbl_803A6D4C:
	lbz      r0, 0x38f(r30)
	lis      r3, 0x4330
	stw      r3, 0x60(r1)
	lfd      f3, lbl_8051F490@sda21(r2)
	stw      r0, 0x64(r1)
	lfd      f0, 0x60(r1)
	stw      r3, 0x78(r1)
	fsubs    f0, f0, f3
	stw      r3, 0x70(r1)
	fmuls    f0, f0, f31
	stw      r3, 0x90(r1)
	stw      r3, 0x88(r1)
	fctiwz   f0, f0
	stw      r3, 0xa8(r1)
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	stw      r3, 0xa0(r1)
	stb      r0, 0x38f(r30)
	lbz      r0, 0x384(r30)
	lbz      r3, 0x380(r30)
	stw      r0, 0x7c(r1)
	lfs      f0, 0x378(r30)
	lfd      f1, 0x78(r1)
	stw      r3, 0x74(r1)
	fsubs    f1, f1, f3
	lfd      f2, 0x70(r1)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fmadds   f0, f2, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	stb      r0, 0x380(r30)
	lbz      r0, 0x385(r30)
	lbz      r3, 0x381(r30)
	stw      r0, 0x94(r1)
	lfs      f0, 0x378(r30)
	lfd      f1, 0x90(r1)
	stw      r3, 0x8c(r1)
	fsubs    f1, f1, f3
	lfd      f2, 0x88(r1)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fmadds   f0, f2, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x98(r1)
	lwz      r0, 0x9c(r1)
	stb      r0, 0x381(r30)
	lbz      r0, 0x386(r30)
	lbz      r3, 0x382(r30)
	stw      r0, 0xac(r1)
	lfs      f0, 0x378(r30)
	lfd      f1, 0xa8(r1)
	stw      r3, 0xa4(r1)
	fsubs    f1, f1, f3
	lfd      f2, 0xa0(r1)
	fsubs    f2, f2, f3
	fmuls    f0, f1, f0
	fmadds   f0, f2, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	stb      r0, 0x382(r30)

lbl_803A6E48:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x33c(r30)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x33c(r30)
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_803A72A4
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	bne      lbl_803A72A4
	lwz      r3, 0xc0(r30)
	lwz      r0, 0x364(r30)
	lfs      f0, 0xa4c(r3)
	cmplwi   r0, 0
	fneg     f1, f0
	beq      lbl_803A6E9C
	lfs      f0, 0x33c(r30)
	fcmpo    cr0, f0, f1
	bge      lbl_803A6ED8

lbl_803A6E9C:
	mr       r3, r30
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r3, 0x174(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x28c(r30)
	li       r4, 0x597b
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_803A700C

lbl_803A6ED8:
	lbz      r0, 0x3a9(r30)
	lfs      f28, 0xa58(r3)
	cmplwi   r0, 0
	bne      lbl_803A700C
	fcmpo    cr0, f0, f28
	bge      lbl_803A700C
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A6F18
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803A6F18
	li       r0, 1
	stb      r0, 0x3a9(r30)
	lwz      r3, 0x364(r30)
	stb      r0, 0x2d2(r3)

lbl_803A6F18:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lbz      r0, 0x3a9(r30)
	mr       r29, r3
	cmplwi   r0, 0
	bne      lbl_803A6FFC
	cmplwi   r29, 0
	beq      lbl_803A6FFC
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A6FFC
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lfs      f29, 0x194(r30)
	lwz      r12, 8(r12)
	lfs      f30, 0x18c(r30)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f31, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f29
	lfs      f1, 0x20(r1)
	mr       r3, r30
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f29, f1, f1, f0
	bl       isFinalFloor__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A6FD0
	lwz      r3, 0xc0(r30)
	lfs      f0, 0xa54(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f29, f0
	bge      lbl_803A6FE4
	li       r0, 1
	stb      r0, 0x3a9(r30)
	b        lbl_803A6FE4

lbl_803A6FD0:
	lfs      f0, lbl_8051F488@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_803A6FE4
	li       r0, 1
	stb      r0, 0x3a9(r30)

lbl_803A6FE4:
	lbz      r0, 0x3a9(r30)
	cmplwi   r0, 0
	beq      lbl_803A6FFC
	lwz      r3, 0x364(r30)
	li       r0, 1
	stb      r0, 0x2d2(r3)

lbl_803A6FFC:
	lbz      r0, 0x3a9(r30)
	cmplwi   r0, 0
	bne      lbl_803A700C
	stfs     f28, 0x33c(r30)

lbl_803A700C:
	lwz      r3, 0x364(r30)
	cmplwi   r3, 0
	beq      lbl_803A72A4
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0xd, 0xd
	beq      lbl_803A72A4
	lfs      f1, 0x33c(r30)
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803A72A4
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A7258
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_803A7258
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_803A7258
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x86a1
	cmplwi   r0, 0x3034
	bne      lbl_803A7258
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803A7094
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A7094:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_803A70B4
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A70B4:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_803A70D4
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A70D4:
	lwz      r3, 4(r29)
	lwz      r29, 4(r3)
	cmplwi   r29, 0
	bne      lbl_803A70F8
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1e5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A70F8:
	addi     r3, r29, 0x10
	li       r4, 0
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	or.      r29, r3, r3
	bne      lbl_803A7120
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1e7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A7120:
	cmplwi   r29, 0
	bne      lbl_803A713C
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0x1e9
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A713C:
	mr       r3, r29
	li       r4, 5
	lwz      r12, 0x10(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       isFinalFloor__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A7258
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x32
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A7258
	lwz      r0, moviePlayer__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803A7258
	lfs      f0, lbl_8051F438@sda21(r2)
	li       r0, 0
	addi     r5, r31, 0x88
	stw      r0, 0x30(r1)
	mr       r4, r30
	addi     r3, r1, 8
	stw      r5, 0x2c(r1)
	stw      r0, 0x38(r1)
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
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r30, 0x18c
	lfs      f29, 8(r1)
	lwz      r12, 4(r3)
	lfs      f30, 0x10(r1)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f29, 0x44(r1)
	mr       r3, r30
	stfs     f1, 0x48(r1)
	stfs     f30, 0x4c(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x50(r1)
	addi     r4, r1, 0x2c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r30, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, 0x364(r30)
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x32
	bl       setDemoFlag__Q24Game8PlayDataFi
	li       r0, 1
	stb      r0, 0x3ab(r30)
	stb      r0, 0x3aa(r30)

lbl_803A7258:
	lbz      r0, 0x3ab(r30)
	cmplwi   r0, 0
	bne      lbl_803A7284
	lwz      r3, 0x364(r30)
	li       r4, 0x597b
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_803A7284:
	lwz      r3, 0x364(r30)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r3, 0x364(r30)
	lwz      r3, 0x174(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_803A72A4:
	lbz      r0, 0x3a9(r30)
	cmplwi   r0, 0
	beq      lbl_803A72D0
	lfs      f1, 0x33c(r30)
	lfs      f0, lbl_8051F48C@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803A72D0
	lwz      r3, 0x364(r30)
	cmplwi   r3, 0
	beq      lbl_803A72D0
	bl       scaleUpShadow__Q34Game4Tyre3ObjFv

lbl_803A72D0:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r0, 0x114(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A730C
 * Size:	000004
 */
void BlackMan::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803A7310
 * Size:	000020
 */
void BlackMan::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	803A7330
 * Size:	000174
 */
void BlackMan::Obj::doSimulation(float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803A7384
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x2e0(r3)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x2e4(r3)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x2e8(r3)

lbl_803A7384:
	lwz      r3, 0x2e8(r30)
	addi     r0, r3, -1
	stw      r0, 0x2e8(r30)
	lwz      r0, 0x2e8(r30)
	cmpwi    r0, 0
	bge      lbl_803A73A4
	li       r0, 0
	stw      r0, 0x2e8(r30)

lbl_803A73A4:
	mr       r3, r30
	bl       doSimulation__Q24Game9EnemyBaseFf
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	lwz      r4, 0x364(r30)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_803A7474
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r31, 5
	lfs      f31, 8(r1)
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bne      lbl_803A7414
	mr       r3, r30
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A7414
	lfs      f0, lbl_8051F498@sda21(r2)
	fadds    f1, f0, f31
	fadds    f0, f0, f29
	stfs     f1, 0x18c(r30)
	stfs     f0, 0x194(r30)
	b        lbl_803A7420

lbl_803A7414:
	stfs     f31, 0x18c(r30)
	stfs     f30, 0x190(r30)
	stfs     f29, 0x194(r30)

lbl_803A7420:
	cmpwi    r31, 3
	beq      lbl_803A7474
	cmpwi    r31, 7
	beq      lbl_803A7474
	cmpwi    r31, 6
	beq      lbl_803A7474
	cmpwi    r31, 5
	beq      lbl_803A7474
	lwz      r3, 0x364(r30)
	addi     r4, r30, 0x1c8
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r30)
	lfs      f0, 0x1d4(r30)
	stfs     f0, 0x1d4(r3)
	lfs      f0, 0x1d8(r30)
	stfs     f0, 0x1d8(r3)
	lfs      f0, 0x1dc(r30)
	stfs     f0, 0x1dc(r3)

lbl_803A7474:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A74A4
 * Size:	000238
 */
void BlackMan::Obj::doAnimationCullingOff(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0xff
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stb      r0, 8(r1)
	stb      r0, 9(r1)
	stb      r0, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 0x2f0(r3)
	cmpwi    r0, 0
	beq      lbl_803A7500
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A7500
	lbz      r0, 0x380(r31)
	stb      r0, 8(r1)
	lbz      r0, 0x381(r31)
	stb      r0, 9(r1)
	lbz      r0, 0x382(r31)
	stb      r0, 0xa(r1)

lbl_803A7500:
	lwz      r3, 0x390(r31)
	addi     r4, r1, 8
	bl       setGlobalPrmColor__Q23efx9TKageMoveFR6Color4
	lwz      r3, 0x394(r31)
	addi     r4, r1, 8
	bl       setGlobalPrmColor__Q23efx8TKageRunFR6Color4
	lwz      r3, 0x39c(r31)
	addi     r4, r1, 8
	bl       setGlobalPrmColor__Q23efx10TKageDead1FR6Color4
	lhz      r0, 0x36a(r31)
	lwz      r3, 0x174(r31)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x304(r31)
	stfs     f1, 0x308(r31)
	stfs     f2, 0x30c(r31)
	lhz      r0, 0x36c(r31)
	lwz      r3, 0x174(r31)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x310(r31)
	stfs     f1, 0x314(r31)
	stfs     f2, 0x318(r31)
	lhz      r0, 0x36e(r31)
	lwz      r3, 0x174(r31)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x31c(r31)
	stfs     f1, 0x320(r31)
	stfs     f2, 0x324(r31)
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A7600
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	beq      lbl_803A75E4
	lwz      r3, 0xc0(r31)
	lbz      r0, 0xa14(r3)
	cmplwi   r0, 0
	beq      lbl_803A75E4
	stw      r31, curB__Q24Game8BlackMan@sda21(r13)

lbl_803A75E4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x364(r31)
	stb      r3, 0x2d1(r4)

lbl_803A7600:
	mr       r3, r31
	bl       doAnimationCullingOff__Q24Game9EnemyBaseFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	stw      r0, curB__Q24Game8BlackMan@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A7628
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_803A76C4

lbl_803A7628:
	lwz      r30, 0x28c(r31)
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_803A7664
	lis      r3, lbl_804956BC@ha
	lis      r5, lbl_80495698@ha
	addi     r3, r3, lbl_804956BC@l
	li       r4, 0x45a
	addi     r5, r5, lbl_80495698@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A7664:
	cmplwi   r30, 0
	beq      lbl_803A76C4
	lwz      r0, 0xf0(r31)
	cmplwi   r0, 0
	bne      lbl_803A7690
	lwz      r3, 0x364(r31)
	cmplwi   r3, 0
	beq      lbl_803A76AC
	lwz      r0, 0xf0(r3)
	cmplwi   r0, 0
	beq      lbl_803A76AC

lbl_803A7690:
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_803A76C4

lbl_803A76AC:
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_803A76C4:
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
 * Address:	803A76DC
 * Size:	00003C
 */
void BlackMan::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	mr       r3, r31
	bl       releasePathFinder__Q34Game8BlackMan3ObjFv
	mr       r3, r31
	bl       fadeFlickEffect__Q34Game8BlackMan3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A7718
 * Size:	0000DC
 */
void BlackMan::Obj::doStartStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	beq      lbl_803A775C
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)

lbl_803A775C:
	lwz      r3, 0x364(r31)
	cmplwi   r3, 0
	beq      lbl_803A7770
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f0, 0x30c(r3)

lbl_803A7770:
	lis      r4, 0x6B6F7369@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x6B6F7369@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x6D756E65@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x6D756E65@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	mr       r3, r31
	bl       fadeTraceEffect__Q34Game8BlackMan3ObjFv
	mr       r3, r31
	bl       fadeFlickEffect__Q34Game8BlackMan3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A77F4
 * Size:	0000BC
 */
void BlackMan::Obj::doFinishStoneState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	beq      lbl_803A788C
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 3
	beq      lbl_803A788C
	lis      r4, 0x6B6F7369@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x6B6F7369@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x6D756E65@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x6D756E65@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl

lbl_803A788C:
	mr       r3, r31
	bl       flick__Q34Game8BlackMan3ObjFv
	mr       r3, r31
	bl       fadeTraceEffect__Q34Game8BlackMan3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A78B0
 * Size:	000058
 */
bool BlackMan::Obj::isUnderground(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	addi     r0, r3, -2
	cmplwi   r0, 1
	ble      lbl_803A78E8
	cmpwi    r3, 8
	beq      lbl_803A78E8
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803A78F0

lbl_803A78E8:
	li       r3, 0
	b        lbl_803A78F4

lbl_803A78F0:
	li       r3, 1

lbl_803A78F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A7908
 * Size:	0000A4
 */
void BlackMan::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	lwz      r0, 0x364(r30)
	cmplwi   r0, 0
	beq      lbl_803A7940
	lwz      r0, 0x2e0(r30)
	cmpwi    r0, 2
	bne      lbl_803A7948

lbl_803A7940:
	li       r0, 0
	b        lbl_803A794C

lbl_803A7948:
	li       r0, 1

lbl_803A794C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803A7994
	lwz      r3, 0x174(r30)
	lhz      r0, 0x368(r30)
	lwz      r4, 8(r3)
	lwz      r3, 0xc0(r30)
	mulli    r0, r0, 0x30
	lwz      r4, 0x84(r4)
	lfs      f1, 0x190(r30)
	lwz      r4, 0xc(r4)
	lfs      f0, 0x12c(r3)
	add      r3, r4, r0
	lfs      f2, 0x2c(r3)
	fadds    f1, f1, f0
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)

lbl_803A7994:
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
 * Address:	803A79AC
 * Size:	0001B8
 */
void BlackMan::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r4
	stw      r28, 0x30(r1)
	mr       r28, r3
	lwz      r30, 0(r4)
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 3
	beq      lbl_803A7AE4
	cmpwi    r31, 2
	beq      lbl_803A7AE4
	lwz      r0, 0x1e0(r28)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803A7AE4
	cmplwi   r30, 0
	beq      lbl_803A7AE4
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A7AE4
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r30)
	mr       r4, r30
	cmpwi    r0, 3
	beq      lbl_803A7AB4
	lwz      r5, 0xc0(r28)
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game13InteractFlick@ha
	lfs      f1, lbl_8051F438@sda21(r2)
	lfs      f2, 0x4c4(r5)
	addi     r4, r4, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051F49C@sda21(r2)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	stw      r4, 0x14(r1)
	mr       r3, r30
	addi     r4, r1, 0x14
	stw      r28, 0x18(r1)
	stw      r0, 0x14(r1)
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x28c(r28)
	li       r4, 0x5977
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_803A7AE4

lbl_803A7AB4:
	cmpwi    r31, 0
	beq      lbl_803A7AC4
	cmpwi    r31, 8
	bne      lbl_803A7AE4

lbl_803A7AC4:
	lwz      r3, 0x364(r28)
	cmplwi   r3, 0
	beq      lbl_803A7AE4
	lwz      r12, 0(r3)
	lfs      f1, lbl_8051F438@sda21(r2)
	lwz      r12, 0x28c(r12)
	mtctr    r12
	bctrl

lbl_803A7AE4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A7B2C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x62
	bne      lbl_803A7B2C
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f0, 0x11c(r28)
	stfs     f0, 0x120(r28)
	stfs     f0, 0x124(r28)

lbl_803A7B2C:
	lwz      r0, 0x2e0(r28)
	cmpwi    r0, 2
	beq      lbl_803A7B44
	mr       r3, r28
	mr       r4, r29
	bl       collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent

lbl_803A7B44:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A7B64
 * Size:	00016C
 */
bool BlackMan::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	fmr      f31, f1
	mr       r28, r3
	mr       r29, r4
	mr       r30, r5
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 8
	bne      lbl_803A7C1C
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A7C1C
	lbz      r0, 0x2b8(r29)
	cmpwi    r0, 3
	bne      lbl_803A7C1C
	lwz      r0, 0xc8(r29)
	cmplwi   r0, 0
	bne      lbl_803A7C1C
	li       r0, 0
	mr       r4, r28
	stw      r0, 0x2cc(r28)
	li       r5, 2
	li       r6, 0
	lwz      r3, 0x360(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	fmr      f1, f31
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	b        lbl_803A7CA8

lbl_803A7C1C:
	addi     r0, r31, -2
	cmplwi   r0, 1
	ble      lbl_803A7C34
	lwz      r0, 0x1e0(r28)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803A7CA4

lbl_803A7C34:
	lwz      r0, 0x1e0(r28)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803A7C48
	li       r3, 0
	b        lbl_803A7CA8

lbl_803A7C48:
	lwz      r0, 0x364(r28)
	cmplwi   r0, 0
	beq      lbl_803A7C8C
	lfs      f1, lbl_8051F438@sda21(r2)
	mr       r3, r28
	mr       r4, r29
	li       r5, 0
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	lwz      r3, 0x364(r28)
	fmr      f1, f31
	mr       r4, r29
	mr       r5, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x278(r12)
	mtctr    r12
	bctrl
	b        lbl_803A7CA8

lbl_803A7C8C:
	fmr      f1, f31
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       damageCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	b        lbl_803A7CA8

lbl_803A7CA4:
	li       r3, 0

lbl_803A7CA8:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A7CD0
 * Size:	000134
 */
bool BlackMan::Obj::hipdropCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f31, f1
	mr       r29, r3
	mr       r30, r4
	mr       r31, r5
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	bne      lbl_803A7D4C
	li       r0, 0
	mr       r4, r29
	stw      r0, 0x2cc(r29)
	li       r5, 2
	li       r6, 0
	lwz      r3, 0x360(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	fmr      f1, f31
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	b        lbl_803A7DE0

lbl_803A7D4C:
	addi     r0, r3, -2
	cmplwi   r0, 1
	ble      lbl_803A7D64
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803A7DDC

lbl_803A7D64:
	lwz      r3, 0x364(r29)
	cmplwi   r3, 0
	beq      lbl_803A7DC4
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803A7D80
	lfs      f31, lbl_8051F4A0@sda21(r2)

lbl_803A7D80:
	lfs      f1, 0x200(r3)
	lfs      f0, lbl_8051F480@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803A7D94
	lfs      f31, lbl_8051F438@sda21(r2)

lbl_803A7D94:
	fmr      f1, f31
	lfs      f2, lbl_8051F480@sda21(r2)
	bl       addDamage__Q24Game9EnemyBaseFff
	lwz      r0, 0x1e0(r29)
	mr       r3, r29
	lfs      f1, lbl_8051F438@sda21(r2)
	oris     r0, r0, 8
	lfs      f2, lbl_8051F480@sda21(r2)
	stw      r0, 0x1e0(r29)
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 0
	b        lbl_803A7DE0

lbl_803A7DC4:
	fmr      f1, f31
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	b        lbl_803A7DE0

lbl_803A7DDC:
	li       r3, 0

lbl_803A7DE0:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A7E04
 * Size:	0000DC
 */
bool BlackMan::Obj::earthquakeCallBack(Game::Creature*, float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	mr       r31, r4
	stw      r30, 0x10(r1)
	mr       r30, r3
	lwz      r0, 0x364(r3)
	cmplwi   r0, 0
	beq      lbl_803A7E5C
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x28c(r12)
	mtctr    r12
	bctrl
	fmr      f1, f31
	mr       r3, r30
	mr       r4, r31
	bl       earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	b        lbl_803A7EC4

lbl_803A7E5C:
	lwz      r4, 0xc0(r30)
	lbz      r0, 0xa12(r4)
	cmplwi   r0, 0
	beq      lbl_803A7EB4
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 0
	beq      lbl_803A7E88
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	bne      lbl_803A7EB4

lbl_803A7E88:
	li       r0, 0
	mr       r4, r30
	stw      r0, 0x2cc(r30)
	li       r5, 2
	li       r6, 0
	stw      r0, 0x2f4(r30)
	lwz      r3, 0x360(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_803A7EB4:
	fmr      f1, f31
	mr       r3, r30
	mr       r4, r31
	bl       earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef

lbl_803A7EC4:
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A7EE0
 * Size:	000068
 */
void BlackMan::Obj::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lbz      r0, 0xa17(r3)
	cmplwi   r0, 0
	beq      lbl_803A7F14
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 8
	bl       setDrawBuffer__Q24Game10GameSystemFi
	b        lbl_803A7F20

lbl_803A7F14:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 4
	bl       setDrawBuffer__Q24Game10GameSystemFi

lbl_803A7F20:
	mr       r3, r31
	bl       doEntry__Q24Game9EnemyBaseFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A7F48
 * Size:	00031C
 */
void BlackMan::Obj::changeMaterial(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	addi     r4, r1, 0x10
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r3
	stw      r28, 0x50(r1)
	lwz      r5, sys@sda21(r13)
	lwz      r3, 0x24(r5)
	lwz      r3, 0x25c(r3)
	lwz      r3, 0x44(r3)
	addi     r3, r3, 0xb4
	bl       PSMTX44Copy
	lfs      f5, 0x40(r1)
	addi     r5, r1, 0xc
	lfs      f4, 0x44(r1)
	li       r4, 0
	lfs      f1, lbl_8051F438@sda21(r2)
	lfs      f3, 0x48(r1)
	lfs      f2, 0x4c(r1)
	lfs      f0, lbl_8051F480@sda21(r2)
	stfs     f5, 0x30(r1)
	stfs     f4, 0x34(r1)
	stfs     f3, 0x38(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r3, 0x174(r29)
	lbz      r0, 0x380(r29)
	lwz      r30, 8(r3)
	lwz      r31, 4(r30)
	stb      r0, 0xc(r1)
	lbz      r0, 0x381(r29)
	stb      r0, 0xd(r1)
	lbz      r0, 0x382(r29)
	stb      r0, 0xe(r1)
	lbz      r0, 0x383(r29)
	stb      r0, 0xf(r1)
	lwz      r3, 0x37c(r29)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x38c(r29)
	addi     r5, r1, 8
	li       r4, 3
	stb      r0, 8(r1)
	lbz      r0, 0x38d(r29)
	stb      r0, 9(r1)
	lbz      r0, 0x38e(r29)
	stb      r0, 0xa(r1)
	lbz      r0, 0x38f(r29)
	stb      r0, 0xb(r1)
	lwz      r3, 0x37c(r29)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x358(r29)
	lfs      f1, lbl_8051F4A4@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x60(r31)
	li       r4, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lis      r4, j3dSys@ha
	lfs      f1, lbl_8051F438@sda21(r2)
	addi     r28, r4, j3dSys@l
	stfs     f0, 0x24(r3)
	li       r29, 0
	lfs      f0, lbl_8051F480@sda21(r2)
	lfs      f2, 0x14(r1)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x18(r1)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x1c(r1)
	stfs     f2, 0x30(r3)
	lfs      f2, 0x20(r1)
	stfs     f2, 0x34(r3)
	lfs      f2, 0x24(r1)
	stfs     f2, 0x38(r3)
	lfs      f2, 0x28(r1)
	stfs     f2, 0x3c(r3)
	lfs      f2, 0x2c(r1)
	stfs     f2, 0x40(r3)
	lfs      f2, 0x30(r1)
	stfs     f2, 0x44(r3)
	lfs      f2, 0x34(r1)
	stfs     f2, 0x48(r3)
	lfs      f2, 0x38(r1)
	stfs     f2, 0x4c(r3)
	lfs      f2, 0x3c(r1)
	stfs     f2, 0x50(r3)
	stfs     f1, 0x5c(r3)
	stfs     f1, 0x58(r3)
	stfs     f1, 0x54(r3)
	stfs     f0, 0x60(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r5, 0x6c(r31)
	lwz      r4, 0x54(r3)
	lwz      r3, 4(r5)
	lwz      r4, 0x20(r4)
	lbz      r0, 0(r4)
	stb      r0, 0(r3)
	lbz      r0, 1(r4)
	stb      r0, 1(r3)
	lhz      r0, 2(r4)
	sth      r0, 2(r3)
	lhz      r0, 4(r4)
	sth      r0, 4(r3)
	lbz      r0, 6(r4)
	stb      r0, 6(r3)
	lbz      r0, 7(r4)
	stb      r0, 7(r3)
	lbz      r0, 8(r4)
	stb      r0, 8(r3)
	lbz      r0, 9(r4)
	stb      r0, 9(r3)
	lhz      r0, 0xa(r4)
	sth      r0, 0xa(r3)
	lwz      r0, 0xc(r4)
	stw      r0, 0xc(r3)
	lbz      r0, 0x10(r4)
	stb      r0, 0x10(r3)
	lbz      r0, 0x11(r4)
	stb      r0, 0x11(r3)
	lbz      r0, 0x12(r4)
	stb      r0, 0x12(r3)
	lbz      r0, 0x13(r4)
	stb      r0, 0x13(r3)
	lbz      r0, 0x14(r4)
	stb      r0, 0x14(r3)
	lbz      r0, 0x15(r4)
	stb      r0, 0x15(r3)
	lbz      r0, 0x16(r4)
	stb      r0, 0x16(r3)
	lbz      r0, 0x17(r4)
	stb      r0, 0x17(r3)
	lbz      r0, 0x18(r4)
	stb      r0, 0x18(r3)
	lbz      r0, 0x19(r4)
	stb      r0, 0x19(r3)
	lha      r0, 0x1a(r4)
	sth      r0, 0x1a(r3)
	lwz      r0, 0x1c(r4)
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r5)
	lwz      r0, 0x1c(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0x1c(r3)
	lwz      r3, 4(r5)
	lwz      r0, 0xc(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	b        lbl_803A8234

lbl_803A81FC:
	lwz      r4, 0xc0(r30)
	rlwinm   r3, r29, 6, 0xa, 0x19
	rlwinm   r0, r29, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r28)
	lwz      r3, 0x60(r31)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r29, r29, 1

lbl_803A8234:
	lhz      r0, 0x5c(r31)
	clrlwi   r3, r29, 0x10
	cmplw    r3, r0
	blt      lbl_803A81FC
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A8264
 * Size:	000050
 */
void BlackMan::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x304(r3)
	lfs      f5, lbl_8051F4A8@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f3, lbl_8051F438@sda21(r2)
	lfs      f0, 0x308(r3)
	lfs      f2, lbl_8051F480@sda21(r2)
	stfs     f0, 4(r4)
	lfs      f1, lbl_8051F4AC@sda21(r2)
	lfs      f4, 0x30c(r3)
	lfs      f0, lbl_8051F4A4@sda21(r2)
	stfs     f4, 8(r4)
	lfs      f4, 0x190(r3)
	fadds    f4, f5, f4
	stfs     f4, 4(r4)
	stfs     f3, 0xc(r4)
	stfs     f2, 0x10(r4)
	stfs     f3, 0x14(r4)
	stfs     f1, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A82B4
 * Size:	000064
 */
void BlackMan::Obj::initWalkSmokeEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 2
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x350
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x350
	lfs      f1, lbl_8051F47C@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051F44C@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x350
	lfs      f1, lbl_8051F47C@sda21(r2)
	li       r4, 1
	addi     r6, r2, lbl_8051F444@sda21
	bl       setup__Q34Game15WalkSmokeEffect3MgrFiPQ28SysShape5ModelPcf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A8318
 * Size:	00001C
 */
WalkSmokeEffect::Mgr* BlackMan::Obj::getWalkSmokeEffectMgr(void)
{
	/*
	lwz      r0, 0x364(r3)
	cmplwi   r0, 0
	beq      lbl_803A832C
	li       r3, 0
	blr

lbl_803A832C:
	addi     r3, r3, 0x350
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A8334
 * Size:	000848
 */
void BlackMan::Obj::walkFunc(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r31, r3
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803A837C
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803A8B4C

lbl_803A837C:
	mr       r3, r31
	bl       isTyreFreeze__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A83B8
	lwz      r3, 0x360(r31)
	mr       r4, r31
	li       r5, 3
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x2cc(r31)
	b        lbl_803A8B4C

lbl_803A83B8:
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A83D0
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 2
	bne      lbl_803A83D8

lbl_803A83D0:
	li       r0, 0
	b        lbl_803A83DC

lbl_803A83D8:
	li       r0, 1

lbl_803A83DC:
	clrlwi.  r0, r0, 0x18
	beq      lbl_803A8408
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051F4B0@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x200(r31)
	lfs      f0, 0x200(r31)
	lfs      f1, 0x204(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_803A8408
	stfs     f1, 0x200(r31)

lbl_803A8408:
	lwz      r3, 0xc0(r31)
	lha      r4, 0xa1a(r3)
	lfs      f31, 0x2e4(r3)
	extsh.   r0, r4
	lfs      f30, 0x334(r3)
	lfs      f29, 0x30c(r3)
	blt      lbl_803A842C
	stw      r4, 0x2f0(r31)
	b        lbl_803A8438

lbl_803A842C:
	lwz      r3, 0x2ec(r31)
	addi     r0, r3, 1
	stw      r0, 0x2ec(r31)

lbl_803A8438:
	lwz      r0, 0x2f0(r31)
	cmpwi    r0, 0
	bne      lbl_803A8474
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2ec(r31)
	lwz      r0, 0x95c(r3)
	cmpw     r4, r0
	ble      lbl_803A8484
	li       r3, 1
	li       r0, 0
	stw      r3, 0x2f0(r31)
	lfs      f0, lbl_8051F438@sda21(r2)
	stw      r0, 0x2ec(r31)
	stfs     f0, 0x378(r31)
	b        lbl_803A8484

lbl_803A8474:
	lwz      r3, 0xc0(r31)
	lfs      f31, 0x8bc(r3)
	lfs      f30, 0x90c(r3)
	lfs      f29, 0x8e4(r3)

lbl_803A8484:
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 2
	bne      lbl_803A8678
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	lwz      r4, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f29, 0x844(r4)
	beq      lbl_803A8624
	mr       r4, r3
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	li       r30, 0
	lfs      f0, 0x34(r1)
	lwz      r3, 0x188(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x2c(r1)
	lbz      r0, 0x24(r3)
	fsubs    f1, f1, f0
	fmuls    f0, f2, f2
	cmplwi   r0, 0
	fmadds   f1, f1, f1, f0
	beq      lbl_803A8504
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_803A8504
	li       r30, 1

lbl_803A8504:
	lfs      f0, lbl_8051F4B4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803A854C
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2f4(r31)
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 9
	beq      lbl_803A8530
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A8530:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8624
	mr       r3, r31
	li       r4, 9
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803A8624

lbl_803A854C:
	lfs      f0, lbl_8051F4B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803A8594
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2f4(r31)
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xb
	beq      lbl_803A8578
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A8578:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8624
	mr       r3, r31
	li       r4, 0xb
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803A8624

lbl_803A8594:
	lwz      r3, 0x2f4(r31)
	addi     r0, r3, 1
	stw      r0, 0x2f4(r31)
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2f4(r31)
	lwz      r0, 0x9d4(r3)
	cmpw     r4, r0
	bgt      lbl_803A85C4
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 8
	beq      lbl_803A85CC

lbl_803A85C4:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A85CC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8624
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x2f4(r31)
	lwz      r0, 0x9d4(r3)
	cmpw     r4, r0
	ble      lbl_803A8614
	li       r0, 0
	mr       r4, r31
	stw      r0, 0x2f4(r31)
	li       r5, 8
	li       r6, 0
	lwz      r3, 0x360(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_803A8624

lbl_803A8614:
	mr       r3, r31
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_803A8624:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 9
	bne      lbl_803A8638
	lfs      f29, lbl_8051F438@sda21(r2)

lbl_803A8638:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xb
	bne      lbl_803A8650
	lwz      r3, 0xc0(r31)
	lfs      f29, 0x934(r3)

lbl_803A8650:
	lfs      f1, 0x374(r31)
	lfs      f2, lbl_8051F4BC@sda21(r2)
	fsubs    f0, f29, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x374(r31)
	lwz      r3, 0xc0(r31)
	lfs      f31, 0x374(r31)
	lfs      f30, 0x894(r3)
	lfs      f29, 0x86c(r3)
	b        lbl_803A8758

lbl_803A8678:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803A8758
	lwz      r4, 0xac(r3)
	cmplwi   r4, 0
	beq      lbl_803A8758
	lwz      r12, 0(r4)
	addi     r3, r1, 0x20
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x194(r31)
	li       r30, 0
	lfs      f0, 0x28(r1)
	lwz      r3, 0x188(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x20(r1)
	lbz      r0, 0x24(r3)
	fsubs    f1, f1, f0
	fmuls    f0, f2, f2
	cmplwi   r0, 0
	fmadds   f1, f1, f1, f0
	beq      lbl_803A86E8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_803A86E8
	li       r30, 1

lbl_803A86E8:
	lfs      f0, lbl_8051F488@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803A8728
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	bne      lbl_803A870C
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A870C:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8758
	mr       r3, r31
	li       r4, 0xc
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_803A8758

lbl_803A8728:
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xc
	bne      lbl_803A8740
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803A8740:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8758
	mr       r3, r31
	li       r4, 6
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_803A8758:
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A87C4
	lwz      r3, 0xc0(r31)
	lwz      r0, 0x2e0(r31)
	lbz      r3, 0xa10(r3)
	cmpw     r3, r0
	beq      lbl_803A87C4
	stw      r3, 0x2e0(r31)
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 4
	bne      lbl_803A87B4
	lfs      f0, lbl_8051F438@sda21(r2)
	mr       r3, r31
	li       r4, 0
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setPathFinder__Q34Game8BlackMan3ObjFb
	b        lbl_803A87C4

lbl_803A87B4:
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x34c(r31)
	bl       releasePathFinder__Q34Game8BlackMan3ObjFv

lbl_803A87C4:
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 4
	bne      lbl_803A87F0
	mr       r3, r31
	bl       isEndPathFinder__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A8B4C
	lwz      r3, 0xc0(r31)
	lfs      f31, 0x81c(r3)
	b        lbl_803A87F0
	b        lbl_803A8B4C

lbl_803A87F0:
	lfs      f1, 0x2d0(r31)
	lfs      f0, 0x18c(r31)
	lfs      f2, lbl_8051F4C0@sda21(r2)
	fsubs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	bge      lbl_803A882C
	lfs      f1, 0x2d8(r31)
	lfs      f0, 0x194(r31)
	fsubs    f0, f1, f0
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f2
	blt      lbl_803A8834

lbl_803A882C:
	li       r0, 0
	stw      r0, 0x2e4(r31)

lbl_803A8834:
	lwz      r3, 0x364(r31)
	cmplwi   r3, 0
	beq      lbl_803A8848
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x314(r3)

lbl_803A8848:
	fmr      f1, f31
	lfs      f31, 0x1fc(r31)
	fmr      f2, f29
	mr       r3, r31
	fmr      f3, f30
	addi     r4, r31, 0x2d0
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lwz
r3, 0x364(r31) cmplwi   r3, 0 beq      lbl_803A88D0 lfs      f1, 0x194(r31) lfs
f0, 0x2e8(r3) lfs      f2, 0x18c(r31) fsubs    f3, f1, f0 lfs      f1, 0x2e0(r3)
	lfs      f0, lbl_8051F438@sda21(r2)
	fsubs    f1, f2, f1
	fmuls    f2, f3, f3
	fmadds   f1, f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_803A88AC
	ble      lbl_803A88B0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803A88B0

lbl_803A88AC:
	fmr      f1, f0

lbl_803A88B0:
	lfs      f0, lbl_8051F4C4@sda21(r2)
	fdivs    f0, f1, f0
	stfs     f0, 0x30c(r3)
	lwz      r3, 0x364(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1fc(r3)
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x1a8(r3)

lbl_803A88D0:
	lwz      r0, 0x2e8(r31)
	cmpwi    r0, 0
	bne      lbl_803A8950
	lwz      r3, 0x334(r31)
	addi     r0, r3, 1
	stw      r0, 0x334(r31)
	lwz      r0, 0x334(r31)
	cmpwi    r0, 0x3c
	ble      lbl_803A8950
	lfs      f1, 0x194(r31)
	lfs      f0, 0x300(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2f8(r31)
	lfs      f0, lbl_8051F4C0@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803A8930
	li       r0, 0x78
	mr       r3, r31
	stw      r0, 0x2e8(r31)
	bl       findNextRoutePoint__Q34Game8BlackMan3ObjFv

lbl_803A8930:
	lfs      f0, 0x18c(r31)
	li       r0, 0
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2fc(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x300(r31)
	stw      r0, 0x334(r31)

lbl_803A8950:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	li       r30, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2d0(r31)
	lfs      f0, 0x2d8(r31)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	lfs      f0, lbl_8051F4C8@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r3
	lis      r0, 0x4330
	rlwinm   r3, r3, 2, 0x1f, 0x1f
	stw      r0, 0x38(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r0, 0x3c(r1)
	lfd      f0, lbl_8051F4D0@sda21(r2)
	lfd      f1, 0x38(r1)
	fsub     f1, f1, f2
	fabs     f1, f1
	fcmpu    cr0, f1, f0
	beq      lbl_803A8A08
	li       r30, 1

lbl_803A8A08:
	clrlwi.  r0, r30, 0x18
	bne      lbl_803A8A30
	lfs      f1, 0x1fc(r31)
	lfs      f0, lbl_8051F4D8@sda21(r2)
	fsubs    f1, f31, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_803A8A30
	li       r30, 1

lbl_803A8A30:
	clrlwi.  r0, r30, 0x18
	beq      lbl_803A8A54
	lfs      f0, 0x1c8(r31)
	lfs      f1, lbl_8051F4DC@sda21(r2)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c8(r31)
	lfs      f0, 0x1d0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x1d0(r31)

lbl_803A8A54:
	lwz      r0, 0x364(r31)
	cmplwi   r0, 0
	beq      lbl_803A8B4C
	lwz      r0, 0x2f0(r31)
	cmpwi    r0, 0
	bne      lbl_803A8ACC
	lwz      r3, 0x28c(r31)
	li       r4, 0x5174
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	li       r4, 0x516e
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	li       r4, 0x5189
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	b        lbl_803A8B4C

lbl_803A8ACC:
	lwz      r3, 0x28c(r31)
	li       r4, 0x5174
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_803A8B0C
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051F4E0@sda21(r2)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_803A8B0C:
	lwz      r3, 0x364(r31)
	li       r4, 0x516e
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x364(r31)
	li       r4, 0x5189
	li       r5, 0
	lwz      r3, 0x28c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl

lbl_803A8B4C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A8B7C
 * Size:	000034
 */
bool BlackMan::Obj::isReachToGoal(float)
{
	/*
	fmuls    f0, f1, f1
	lfs      f2, 0x194(r3)
	lfs      f1, 0x2d8(r3)
	lfs      f3, 0x18c(r3)
	fsubs    f2, f2, f1
	lfs      f1, 0x2d0(r3)
	fsubs    f3, f3, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A8BB0
 * Size:	000ED0
 */
void BlackMan::Obj::findNextRoutePoint(void)
{
	/*
	stwu     r1, -0x1e0(r1)
	mflr     r0
	stw      r0, 0x1e4(r1)
	stfd     f31, 0x1d0(r1)
	psq_st   f31, 472(r1), 0, qr0
	stfd     f30, 0x1c0(r1)
	psq_st   f30, 456(r1), 0, qr0
	stfd     f29, 0x1b0(r1)
	psq_st   f29, 440(r1), 0, qr0
	stfd     f28, 0x1a0(r1)
	psq_st   f28, 424(r1), 0, qr0
	stfd     f27, 0x190(r1)
	psq_st   f27, 408(r1), 0, qr0
	stfd     f26, 0x180(r1)
	psq_st   f26, 392(r1), 0, qr0
	stmw     r22, 0x158(r1)
	mr       r31, r3
	lbz      r0, 0x34c(r3)
	cmplwi   r0, 0
	bne      lbl_803A8C0C
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 4
	bne      lbl_803A8C18

lbl_803A8C0C:
	mr       r3, r31
	bl       findNextTraceRoutePoint__Q34Game8BlackMan3ObjFv
	b        lbl_803A9A3C

lbl_803A8C18:
	lwz      r0, 0x2e8(r31)
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmpwi    r0, 0
	lwz      r30, 8(r3)
	ble      lbl_803A8EF0
	lha      r0, 0x342(r31)
	lha      r3, 0x340(r31)
	cmpw     r0, r3
	bne      lbl_803A8C64
	lha      r0, 0x344(r31)
	cmpw     r3, r0
	bne      lbl_803A8C64
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2d8(r31)
	b        lbl_803A9A3C

lbl_803A8C64:
	li       r5, 0
	li       r0, -1
	stw      r5, 0x2e8(r31)
	mr       r3, r30
	addi     r4, r1, 0x118
	stw      r5, 0x134(r1)
	stw      r5, 0x130(r1)
	stb      r5, 0x124(r1)
	sth      r0, 0x12c(r1)
	stw      r5, 0x128(r1)
	lfs      f0, 0x18c(r31)
	stfs     f0, 0x118(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x11c(r1)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x120(r1)
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A8EF0
	lwz      r4, 0x130(r1)
	lha      r24, 0x340(r31)
	lbz      r0, 0x34(r4)
	lha      r25, 0x342(r31)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8D70
	mr       r3, r30
	lha      r4, 0x36(r4)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	bne      lbl_803A8D14
	lwz      r3, 0x134(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8D14
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)
	lwz      r3, 0x134(r1)
	lha      r0, 0x36(r3)
	sth      r0, 0x340(r31)
	b        lbl_803A8DC8

lbl_803A8D14:
	lwz      r4, 0x130(r1)
	mr       r3, r30
	lha      r0, 0x36(r4)
	sth      r0, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r4, 0x134(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_803A8D64
	lwz      r3, 0x134(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8D64
	lha      r0, 0x36(r3)
	sth      r0, 0x342(r31)
	b        lbl_803A8DC8

lbl_803A8D64:
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)
	b        lbl_803A8DC8

lbl_803A8D70:
	lwz      r4, 0x134(r1)
	mr       r3, r30
	lha      r0, 0x36(r4)
	sth      r0, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r4, 0x130(r1)
	lwz      r12, 0x2c(r12)
	lha      r4, 0x36(r4)
	mtctr    r12
	bctrl
	lha      r0, 0x38(r3)
	cmpwi    r0, 1
	ble      lbl_803A8DC0
	lwz      r3, 0x130(r1)
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8DC0
	lha      r0, 0x36(r3)
	sth      r0, 0x342(r31)
	b        lbl_803A8DC8

lbl_803A8DC0:
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)

lbl_803A8DC8:
	lha      r3, 0x340(r31)
	cmpw     r3, r24
	bne      lbl_803A8EB8
	lha      r0, 0x342(r31)
	cmpw     r0, r25
	bne      lbl_803A8EB8
	lfs      f1, 0x18c(r31)
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f1, 0x2d0(r31)
	lfs      f3, lbl_8051F4C0@sda21(r2)
	lfs      f1, 0x190(r31)
	stfs     f1, 0x2d4(r31)
	lfs      f1, 0x194(r31)
	stfs     f1, 0x2d8(r31)
	lfs      f1, 0x1fc(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_803A8E38
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r0, 0x13c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_803A8E5C

lbl_803A8E38:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x140(r1)
	lwz      r0, 0x144(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_803A8E5C:
	lfs      f1, 0x2d0(r31)
	lfs      f0, lbl_8051F438@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x2d0(r31)
	lfs      f1, 0x1fc(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_803A8E7C
	fneg     f1, f1

lbl_803A8E7C:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f2, lbl_8051F4C0@sda21(r2)
	fmuls    f1, f1, f0
	lfs      f0, 0x2d8(r31)
	fctiwz   f1, f1
	stfd     f1, 0x148(r1)
	lwz      r0, 0x14c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fnmsubs  f0, f2, f1, f0
	stfs     f0, 0x2d8(r31)
	b        lbl_803A9A3C

lbl_803A8EB8:
	sth      r3, 0x342(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lha      r4, 0x340(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2d0(r31)
	stfs     f1, 0x2d4(r31)
	stfs     f2, 0x2d8(r31)
	b        lbl_803A9A3C

lbl_803A8EF0:
	mr       r3, r30
	lha      r4, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_803A8F2C
	lis      r3, lbl_80495688@ha
	lis      r5, lbl_80495698@ha
	addi     r3, r3, lbl_80495688@l
	li       r4, 0x615
	addi     r5, r5, lbl_80495698@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A8F2C:
	mr       r4, r25
	addi     r3, r1, 0xfc
	li       r29, 0
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 0xfc
	bl       first__Q24Game16WayPointIteratorFv
	addi     r24, r1, 0x108
	mr       r22, r24
	b        lbl_803A8FD0

lbl_803A8F54:
	addi     r3, r1, 0xfc
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	mr       r23, r0
	mr       r4, r23
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x4c(r3)
	cmplwi   r3, 0
	lfs      f1, 0x50(r3)
	lfs      f0, 0x54(r3)
	stfs     f2, 0xb0(r1)
	stfs     f1, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	beq      lbl_803A8FC8
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A8FC8
	lha      r4, 0x5c(r3)
	lha      r0, 0x38(r3)
	add      r0, r4, r0
	cmpwi    r0, 1
	ble      lbl_803A8FC8
	sth      r23, 0(r22)
	addi     r22, r22, 2
	addi     r29, r29, 1

lbl_803A8FC8:
	addi     r3, r1, 0xfc
	bl       next__Q24Game16WayPointIteratorFv

lbl_803A8FD0:
	addi     r3, r1, 0xfc
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A8F54
	cmpwi    r29, 0
	bne      lbl_803A9070
	mr       r4, r25
	addi     r3, r1, 0xf0
	li       r5, 1
	bl       __ct__Q24Game16WayPointIteratorFPQ24Game8WayPointb
	addi     r3, r1, 0xf0
	bl       first__Q24Game16WayPointIteratorFv
	slwi     r0, r29, 1
	addi     r22, r1, 0x108
	add      r22, r22, r0
	b        lbl_803A9060

lbl_803A9010:
	addi     r3, r1, 0xf0
	bl       __ml__Q24Game16WayPointIteratorFv
	mr       r0, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	mr       r23, r0
	mr       r4, r23
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_803A9058
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_803A9058
	sth      r23, 0(r22)
	addi     r22, r22, 2
	addi     r29, r29, 1

lbl_803A9058:
	addi     r3, r1, 0xf0
	bl       next__Q24Game16WayPointIteratorFv

lbl_803A9060:
	addi     r3, r1, 0xf0
	bl       isDone__Q24Game16WayPointIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A9010

lbl_803A9070:
	cmpwi    r29, 0
	beq      lbl_803A9A04
	lwz      r3, 0xc0(r31)
	li       r28, -1
	lwz      r0, 0x2e0(r31)
	li       r27, 0
	lfs      f0, 0x44c(r3)
	cmpwi    r0, 2
	fmuls    f31, f0, f0
	beq      lbl_803A9504
	bge      lbl_803A90AC
	cmpwi    r0, 0
	beq      lbl_803A90B8
	bge      lbl_803A9108
	b        lbl_803A998C

lbl_803A90AC:
	cmpwi    r0, 4
	bge      lbl_803A998C
	b        lbl_803A96DC

lbl_803A90B8:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r4, 0x148(r1)
	lfs      f0, lbl_8051F4F8@sda21(r2)
	lfd      f1, 0x148(r1)
	stw      r0, 0x144(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x140(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	b        lbl_803A998C

lbl_803A9108:
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r23, 0
	addi     r25, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	b        lbl_803A9474

lbl_803A9118:
	lwz      r0, pikiMgr__4Game@sda21(r13)
	li       r3, 0
	stw      r25, 0xe0(r1)
	lha      r4, 0(r24)
	stw      r3, 0xec(r1)
	stw      r3, 0xe4(r1)
	stw      r0, 0xe8(r1)
	lha      r0, 0x342(r31)
	cmpw     r0, r4
	bne      lbl_803A9160
	lbz      r0, 0x338(r31)
	cmplwi   r0, 0
	bne      lbl_803A946C
	lwz      r3, 0xc0(r31)
	lbz      r0, 0xa15(r3)
	cmplwi   r0, 0
	beq      lbl_803A946C
	li       r27, 1

lbl_803A9160:
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xec(r1)
	mr       r26, r3
	cmplwi   r0, 0
	bne      lbl_803A91A0
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A93A8

lbl_803A91A0:
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A9210

lbl_803A91BC:
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xec(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A93A8
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)

lbl_803A9210:
	lwz      r12, 0xe0(r1)
	addi     r3, r1, 0xe0
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A91BC
	b        lbl_803A93A8

lbl_803A9230:
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r22, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A92EC
	mr       r3, r22
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A92EC
	mr       r4, r22
	lfs      f30, 0x4c(r26)
	lwz      r12, 0(r22)
	addi     r3, r1, 0x98
	lfs      f0, 0x50(r26)
	lfs      f29, 0x54(r26)
	lwz      r12, 8(r12)
	stfs     f30, 0x80(r1)
	stfs     f0, 0x84(r1)
	stfs     f29, 0x88(r1)
	stfs     f30, 0x8c(r1)
	stfs     f0, 0x90(r1)
	stfs     f29, 0x94(r1)
	mtctr    r12
	bctrl
	mr       r4, r22
	addi     r3, r1, 0xa4
	lwz      r12, 0(r22)
	lfs      f28, 0xa0(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f28, f29
	lfs      f1, 0xa4(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_803A92EC
	fmr      f31, f0
	mr       r28, r23

lbl_803A92EC:
	lwz      r0, 0xec(r1)
	cmplwi   r0, 0
	bne      lbl_803A9318
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A93A8

lbl_803A9318:
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)
	b        lbl_803A938C

lbl_803A9338:
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xec(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803A93A8
	lwz      r3, 0xe8(r1)
	lwz      r4, 0xe4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xe4(r1)

lbl_803A938C:
	lwz      r12, 0xe0(r1)
	addi     r3, r1, 0xe0
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A9338

lbl_803A93A8:
	lwz      r3, 0xe8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xe4(r1)
	cmplw    r4, r3
	bne      lbl_803A9230
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r22, r3, r3
	beq      lbl_803A946C
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A946C
	mr       r4, r22
	lfs      f30, 0x4c(r26)
	lwz      r12, 0(r22)
	addi     r3, r1, 0x68
	lfs      f0, 0x50(r26)
	lfs      f29, 0x54(r26)
	lwz      r12, 8(r12)
	stfs     f30, 0x50(r1)
	stfs     f0, 0x54(r1)
	stfs     f29, 0x58(r1)
	stfs     f30, 0x5c(r1)
	stfs     f0, 0x60(r1)
	stfs     f29, 0x64(r1)
	mtctr    r12
	bctrl
	mr       r4, r22
	addi     r3, r1, 0x74
	lwz      r12, 0(r22)
	lfs      f28, 0x70(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f28, f29
	lfs      f1, 0x74(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_803A946C
	fmr      f31, f0
	mr       r28, r23

lbl_803A946C:
	addi     r24, r24, 2
	addi     r23, r23, 1

lbl_803A9474:
	cmpw     r23, r29
	blt      lbl_803A9118
	cmpwi    r28, 0
	bge      lbl_803A94FC
	lfd      f30, lbl_8051F4E8@sda21(r2)
	xoris    r24, r29, 0x8000
	lfs      f29, lbl_8051F4F8@sda21(r2)
	addi     r23, r1, 0x108
	li       r22, 0
	lis      r25, 0x4330

lbl_803A949C:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r25, 0x148(r1)
	lha      r3, 0x342(r31)
	stw      r0, 0x14c(r1)
	lfd      f0, 0x148(r1)
	stw      r24, 0x144(r1)
	fsubs    f0, f0, f30
	stw      r25, 0x140(r1)
	fdivs    f1, f0, f29
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	slwi     r0, r26, 1
	lhax     r0, r23, r0
	cmpw     r3, r0
	bne      lbl_803A998C
	addi     r22, r22, 1
	cmpwi    r22, 0x64
	blt      lbl_803A949C
	b        lbl_803A998C

lbl_803A94FC:
	mr       r26, r28
	b        lbl_803A998C

lbl_803A9504:
	lfs      f26, lbl_8051F4FC@sda21(r2)
	li       r22, 0
	b        lbl_803A95FC

lbl_803A9510:
	lha      r4, 0(r24)
	lha      r0, 0x342(r31)
	cmpw     r0, r4
	beq      lbl_803A95F4
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r23, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r25, r3, r3
	beq      lbl_803A95F4
	mr       r4, r25
	lfs      f29, 0x4c(r23)
	lwz      r12, 0(r25)
	addi     r3, r1, 0x2c
	lfs      f31, 0x50(r23)
	lfs      f30, 0x54(r23)
	lwz      r12, 8(r12)
	stfs     f29, 8(r1)
	stfs     f31, 0xc(r1)
	stfs     f30, 0x10(r1)
	stfs     f29, 0x14(r1)
	stfs     f31, 0x18(r1)
	stfs     f30, 0x1c(r1)
	stfs     f29, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f30, 0x28(r1)
	mtctr    r12
	bctrl
	mr       r4, r25
	addi     r3, r1, 0x38
	lwz      r12, 0(r25)
	lfs      f27, 0x34(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r25
	addi     r3, r1, 0x44
	lwz      r12, 0(r25)
	lfs      f28, 0x3c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f28, f31
	lfs      f2, 0x44(r1)
	fsubs    f1, f27, f30
	fsubs    f2, f2, f29
	fmuls    f0, f0, f0
	fmadds   f0, f2, f2, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_803A95F4
	fmr      f26, f0
	mr       r28, r22

lbl_803A95F4:
	addi     r24, r24, 2
	addi     r22, r22, 1

lbl_803A95FC:
	cmpw     r22, r29
	blt      lbl_803A9510
	cmpwi    r28, 0
	blt      lbl_803A9614
	cmpwi    r29, 2
	bgt      lbl_803A9664

lbl_803A9614:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r4, 0x148(r1)
	lfs      f0, lbl_8051F4F8@sda21(r2)
	lfd      f1, 0x148(r1)
	stw      r0, 0x144(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x140(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	b        lbl_803A998C

lbl_803A9664:
	lfd      f30, lbl_8051F4E8@sda21(r2)
	xoris    r23, r29, 0x8000
	lfs      f31, lbl_8051F4F8@sda21(r2)
	li       r22, 0
	lis      r24, 0x4330

lbl_803A9678:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r24, 0x148(r1)
	stw      r0, 0x14c(r1)
	lfd      f0, 0x148(r1)
	stw      r23, 0x144(r1)
	fsubs    f0, f0, f30
	stw      r24, 0x140(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	cmpw     r26, r28
	bne      lbl_803A96CC
	addi     r22, r22, 1
	li       r26, -1
	cmpwi    r22, 0xa
	blt      lbl_803A9678

lbl_803A96CC:
	cmpwi    r26, 0
	bge      lbl_803A998C
	mr       r26, r28
	b        lbl_803A998C

lbl_803A96DC:
	lfs      f31, lbl_8051F438@sda21(r2)
	li       r22, 0
	b        lbl_803A9928

lbl_803A96E8:
	lha      r23, 0(r24)
	lha      r0, 0x342(r31)
	cmpw     r0, r23
	beq      lbl_803A9920
	mr       r3, r30
	lha      r4, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f27, 0x4c(r3)
	lfs      f28, 0x54(r3)
	mr       r3, r30
	lwz      r12, 0(r30)
	lha      r4, 0x342(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x4c(r3)
	lfs      f3, 0x54(r3)
	fsubs    f2, f27, f0
	lfs      f1, lbl_8051F438@sda21(r2)
	fsubs    f3, f28, f3
	fmuls    f4, f1, f1
	stfs     f1, 0xd8(r1)
	fmuls    f0, f2, f2
	fmuls    f5, f3, f3
	stfs     f2, 0xd4(r1)
	fadds    f0, f0, f4
	stfs     f3, 0xdc(r1)
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803A9788
	fmadds   f0, f2, f2, f4
	fadds    f3, f5, f0
	fcmpo    cr0, f3, f1
	ble      lbl_803A978C
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_803A978C

lbl_803A9788:
	fmr      f3, f1

lbl_803A978C:
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_803A97C4
	lfs      f0, lbl_8051F480@sda21(r2)
	lfs      f2, 0xd4(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xd8(r1)
	lfs      f0, 0xdc(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0xd4(r1)
	stfs     f1, 0xd8(r1)
	stfs     f0, 0xdc(r1)

lbl_803A97C4:
	lfs      f1, lbl_8051F438@sda21(r2)
	addi     r3, r1, 0xc8
	lfs      f0, lbl_8051F480@sda21(r2)
	addi     r4, r1, 0xd4
	stfs     f1, 0xc8(r1)
	addi     r5, r1, 0xbc
	stfs     f0, 0xcc(r1)
	stfs     f1, 0xd0(r1)
	bl       PSVECCrossProduct
	lfs      f2, 0xbc(r1)
	lfs      f1, 0xc0(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0xc4(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051F438@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_803A9830
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_803A9834
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_803A9834

lbl_803A9830:
	fmr      f3, f1

lbl_803A9834:
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_803A986C
	lfs      f0, lbl_8051F480@sda21(r2)
	lfs      f2, 0xbc(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0xc0(r1)
	lfs      f0, 0xc4(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0xbc(r1)
	stfs     f1, 0xc0(r1)
	stfs     f0, 0xc4(r1)

lbl_803A986C:
	mr       r3, r30
	mr       r4, r23
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f0, 0x190(r31)
	lfs      f3, 0x4c(r3)
	fsubs    f4, f1, f0
	lfs      f2, 0x18c(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x194(r31)
	fsubs    f3, f3, f2
	fmuls    f2, f4, f4
	fsubs    f5, f1, f0
	lfs      f0, lbl_8051F438@sda21(r2)
	fmadds   f1, f3, f3, f2
	fmuls    f2, f5, f5
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_803A98D4
	ble      lbl_803A98D8
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803A98D8

lbl_803A98D4:
	fmr      f1, f0

lbl_803A98D8:
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803A98F8
	lfs      f0, lbl_8051F480@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

lbl_803A98F8:
	lfs      f0, 0xc0(r1)
	lfs      f1, 0xbc(r1)
	fmuls    f0, f0, f4
	lfs      f2, 0xc4(r1)
	fmadds   f0, f1, f3, f0
	fmadds   f0, f2, f5, f0
	fcmpo    cr0, f0, f31
	ble      lbl_803A9920
	fmr      f31, f0
	mr       r28, r22

lbl_803A9920:
	addi     r24, r24, 2
	addi     r22, r22, 1

lbl_803A9928:
	cmpw     r22, r29
	blt      lbl_803A96E8
	cmpwi    r28, 0
	bge      lbl_803A9988
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14c(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_8051F4E8@sda21(r2)
	stw      r4, 0x148(r1)
	lfs      f0, lbl_8051F4F8@sda21(r2)
	lfd      f1, 0x148(r1)
	stw      r0, 0x144(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x140(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x140(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x138(r1)
	lwz      r26, 0x13c(r1)
	b        lbl_803A998C

lbl_803A9988:
	mr       r26, r28

lbl_803A998C:
	cmpw     r26, r29
	blt      lbl_803A9998
	addi     r26, r29, -1

lbl_803A9998:
	mr       r3, r30
	slwi     r0, r26, 1
	lwz      r12, 0(r30)
	addi     r4, r1, 0x108
	lhax     r22, r4, r0
	lwz      r12, 0x2c(r12)
	mr       r4, r22
	mtctr    r12
	bctrl
	clrlwi.  r0, r27, 0x18
	bne      lbl_803A99D8
	cmpwi    r29, 1
	beq      lbl_803A99D8
	lha      r0, 0x342(r31)
	cmpw     r22, r0
	beq      lbl_803A9A04

lbl_803A99D8:
	lha      r0, 0x342(r31)
	cmpw     r0, r22
	bne      lbl_803A99F0
	li       r0, 1
	stb      r0, 0x338(r31)
	b        lbl_803A99F8

lbl_803A99F0:
	li       r0, 0
	stb      r0, 0x338(r31)

lbl_803A99F8:
	lha      r0, 0x340(r31)
	sth      r0, 0x342(r31)
	sth      r22, 0x340(r31)

lbl_803A9A04:
	mr       r3, r30
	lha      r4, 0x340(r31)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_803A9A3C
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2d0(r31)
	stfs     f1, 0x2d4(r31)
	stfs     f2, 0x2d8(r31)

lbl_803A9A3C:
	psq_l    f31, 472(r1), 0, qr0
	lfd      f31, 0x1d0(r1)
	psq_l    f30, 456(r1), 0, qr0
	lfd      f30, 0x1c0(r1)
	psq_l    f29, 440(r1), 0, qr0
	lfd      f29, 0x1b0(r1)
	psq_l    f28, 424(r1), 0, qr0
	lfd      f28, 0x1a0(r1)
	psq_l    f27, 408(r1), 0, qr0
	lfd      f27, 0x190(r1)
	psq_l    f26, 392(r1), 0, qr0
	lfd      f26, 0x180(r1)
	lmw      r22, 0x158(r1)
	lwz      r0, 0x1e4(r1)
	mtlr     r0
	addi     r1, r1, 0x1e0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A9A80
 * Size:	0000D0
 */
void BlackMan::Obj::findNextTraceRoutePoint(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x35c(r3)
	cmplwi   r0, 0
	beq      lbl_803A9B3C
	mr       r4, r0
	b        lbl_803A9B18

lbl_803A9AA8:
	lha      r0, 0x20(r4)
	lha      r3, 0x340(r31)
	cmpw     r0, r3
	bne      lbl_803A9B14
	sth      r3, 0x342(r31)
	lwz      r3, 0xc(r4)
	cmplwi   r3, 0
	beq      lbl_803A9AD4
	lha      r0, 0x20(r3)
	sth      r0, 0x340(r31)
	b        lbl_803A9ADC

lbl_803A9AD4:
	lha      r0, 0x344(r31)
	sth      r0, 0x340(r31)

lbl_803A9ADC:
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x340(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x2d0(r31)
	stfs     f1, 0x2d4(r31)
	stfs     f2, 0x2d8(r31)
	b        lbl_803A9B3C

lbl_803A9B14:
	lwz      r4, 0xc(r4)

lbl_803A9B18:
	cmplwi   r4, 0
	bne      lbl_803A9AA8
	lis      r3, lbl_80495688@ha
	lis      r5, lbl_80495708@ha
	addi     r3, r3, lbl_80495688@l
	li       r4, 0x72e
	addi     r5, r5, lbl_80495708@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A9B3C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A9B50
 * Size:	000114
 */
bool BlackMan::Obj::isEndPathFinder(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_80495670@ha
	lbz      r0, 0x34c(r30)
	addi     r31, r3, lbl_80495670@l
	cmplwi   r0, 0
	beq      lbl_803A9B84
	li       r3, 1
	b        lbl_803A9C4C

lbl_803A9B84:
	lwz      r0, testPathfinder__4Game@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803A9BA4
	addi     r3, r31, 0x18
	addi     r5, r31, 0x28
	li       r4, 0x73a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A9BA4:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	lwz      r4, 0x348(r30)
	bl       check__Q24Game10PathfinderFUl
	cmpwi    r3, 2
	beq      lbl_803A9BF8
	bge      lbl_803A9BCC
	cmpwi    r3, 0
	beq      lbl_803A9BD8
	bge      lbl_803A9C08
	b        lbl_803A9C48

lbl_803A9BCC:
	cmpwi    r3, 4
	bge      lbl_803A9C48
	b        lbl_803A9C24

lbl_803A9BD8:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	addi     r5, r30, 0x35c
	lwz      r4, 0x348(r30)
	bl       makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
	li       r0, 1
	li       r3, 1
	stb      r0, 0x34c(r30)
	b        lbl_803A9C4C

lbl_803A9BF8:
	li       r0, 0
	li       r3, 0
	stb      r0, 0x34c(r30)
	b        lbl_803A9C4C

lbl_803A9C08:
	li       r0, 0
	mr       r3, r30
	stb      r0, 0x34c(r30)
	li       r4, 1
	bl       setPathFinder__Q34Game8BlackMan3ObjFb
	li       r3, 0
	b        lbl_803A9C4C

lbl_803A9C24:
	addi     r3, r31, 0x18
	addi     r5, r31, 0xb0
	li       r4, 0x74e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r0, 0
	li       r3, 0
	stb      r0, 0x34c(r30)
	b        lbl_803A9C4C

lbl_803A9C48:
	li       r3, 0

lbl_803A9C4C:
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
 * Address:	803A9C64
 * Size:	0001D8
 */
void BlackMan::Obj::setPathFinder(bool)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r29, r3
	mr       r30, r4
	bl       releasePathFinder__Q34Game8BlackMan3ObjFv
	li       r4, 0
	li       r0, -1
	stw      r4, 0x2c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r4, 0x28(r1)
	stb      r4, 0x1c(r1)
	sth      r0, 0x24(r1)
	stw      r4, 0x20(r1)
	lfs      f0, 0x18c(r29)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x18(r1)
	lwz      r31, 8(r3)
	cmplwi   r31, 0
	bne      lbl_803A9CE0
	lis      r3, lbl_80495688@ha
	lis      r5, lbl_80495698@ha
	addi     r3, r3, lbl_80495688@l
	li       r4, 0x765
	addi     r5, r5, lbl_80495698@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803A9CE0:
	mr       r3, r31
	addi     r4, r1, 0x10
	bl       getNearestEdge__Q24Game8RouteMgrFRQ24Game15WPEdgeSearchArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_803A9E0C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x2c(r1)
	lfs      f3, 0x1a0(r29)
	lfs      f1, 0x54(r4)
	lfs      f0, 0x54(r3)
	fsubs    f4, f1, f3
	lfs      f2, 0x4c(r4)
	fsubs    f3, f0, f3
	lfs      f6, 0x198(r29)
	lfs      f1, 0x4c(r3)
	fsubs    f5, f2, f6
	fmuls    f0, f4, f4
	lha      r0, 0x36(r3)
	fsubs    f2, f1, f6
	lha      r3, 0x36(r4)
	fmuls    f1, f3, f3
	fmadds   f0, f5, f5, f0
	mr       r28, r0
	mr       r27, r3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_803A9D54
	mr       r27, r0
	mr       r28, r3

lbl_803A9D54:
	mr       r3, r31
	mr       r4, r28
	lwz      r12, 0(r31)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803A9D7C
	mr       r28, r27

lbl_803A9D7C:
	lha      r4, 0x340(r29)
	clrlwi   r3, r30, 0x18
	neg      r0, r3
	sth      r4, 0x342(r29)
	or       r0, r0, r3
	srawi    r3, r0, 0x1f
	sth      r28, 0x340(r29)
	addi     r30, r3, 0xc3
	lwz      r4, 0x348(r29)
	cmplwi   r4, 0
	beq      lbl_803A9DB0
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_803A9DB0:
	lha      r5, 0x344(r29)
	addi     r4, r1, 8
	lha      r0, 0x340(r29)
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r0, 8(r1)
	sth      r5, 0xa(r1)
	stb      r30, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x348(r29)
	mr       r3, r31
	lwz      r12, 0(r31)
	lha      r4, 0x340(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x50(r3)
	lfs      f2, 0x54(r3)
	lfs      f0, 0x4c(r3)
	li       r3, 1
	stfs     f0, 0x2d0(r29)
	stfs     f1, 0x2d4(r29)
	stfs     f2, 0x2d8(r29)
	b        lbl_803A9E28

lbl_803A9E0C:
	lis      r3, lbl_80495688@ha
	li       r4, 0x78e
	addi     r3, r3, lbl_80495688@l
	li       r5, 0
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_803A9E28:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A9E3C
 * Size:	000044
 */
void BlackMan::Obj::releasePathFinder(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stb      r0, 0x34c(r3)
	lwz      r0, testPathfinder__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_803A9E70
	lwz      r4, 0x348(r3)
	cmplwi   r4, 0
	beq      lbl_803A9E70
	mr       r3, r0
	bl       release__Q24Game10PathfinderFUl

lbl_803A9E70:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803A9E80
 * Size:	000590
 */
void BlackMan::Obj::jointMtxCalc(int)
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
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stfd     f25, 0x110(r1)
	psq_st   f25, 280(r1), 0, qr0
	stfd     f24, 0x100(r1)
	psq_st   f24, 264(r1), 0, qr0
	stfd     f23, 0xf0(r1)
	psq_st   f23, 248(r1), 0, qr0
	stfd     f22, 0xe0(r1)
	psq_st   f22, 232(r1), 0, qr0
	stfd     f21, 0xd0(r1)
	psq_st   f21, 216(r1), 0, qr0
	stfd     f20, 0xc0(r1)
	psq_st   f20, 200(r1), 0, qr0
	stmw     r17, 0x84(r1)
	lis      r5, lbl_80495670@ha
	mr       r26, r3
	mr       r27, r4
	addi     r29, r5, lbl_80495670@l
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r27, 2
	bge      lbl_803A9F3C
	cmpwi    r3, 6
	beq      lbl_803A9F1C
	cmpwi    r3, 7
	bne      lbl_803A9F3C

lbl_803A9F1C:
	lwz      r0, 0x1e0(r26)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AA39C
	lwz      r3, 0x364(r26)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803A9F3C
	b        lbl_803AA39C

lbl_803A9F3C:
	lwz      r17, 0x364(r26)
	cmplwi   r17, 0
	beq      lbl_803AA39C
	cmpwi    r27, 4
	bge      lbl_803AA39C
	lwz      r3, 0xc8(r29)
	slwi     r28, r27, 2
	lwz      r18, 0xcc(r29)
	addi     r4, r1, 0x48
	lwz      r19, 0xd0(r29)
	lwz      r20, 0xd4(r29)
	lwz      r21, 0xd8(r29)
	lwz      r22, 0xdc(r29)
	lwz      r23, 0xe0(r29)
	lwz      r24, 0xe4(r29)
	lwz      r25, 0xe8(r29)
	lwz      r31, 0xec(r29)
	lwz      r30, 0xf0(r29)
	lwz      r12, 0xf4(r29)
	lwz      r11, 0xf8(r29)
	lwz      r10, 0xfc(r29)
	lwz      r9, 0x100(r29)
	lwz      r8, 0x104(r29)
	lwz      r7, 0x120(r29)
	lwz      r6, 0x124(r29)
	lwz      r5, 0x128(r29)
	lwz      r0, 0x12c(r29)
	stw      r3, 0x48(r1)
	lwz      r3, 0x174(r17)
	stw      r18, 0x4c(r1)
	stw      r19, 0x50(r1)
	stw      r20, 0x54(r1)
	stw      r21, 0x38(r1)
	lwzx     r4, r4, r28
	stw      r22, 0x3c(r1)
	stw      r23, 0x40(r1)
	stw      r24, 0x44(r1)
	stw      r25, 0x28(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x30(r1)
	stw      r12, 0x34(r1)
	stw      r11, 0x18(r1)
	stw      r10, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r8, 0x24(r1)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x38
	mr       r29, r3
	lwz      r3, 0x174(r26)
	lwzx     r4, r4, r28
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x2f0(r26)
	lfs      f7, lbl_8051F550@sda21(r2)
	cmpwi    r0, 1
	bge      lbl_803AA034
	lfs      f7, lbl_8051F438@sda21(r2)

lbl_803AA034:
	cmpwi    r27, 2
	bge      lbl_803AA040
	lfs      f7, lbl_8051F438@sda21(r2)

lbl_803AA040:
	srwi     r4, r27, 0x1f
	clrlwi   r0, r27, 0x1f
	xor      r0, r0, r4
	subf.    r0, r4, r0
	beq      lbl_803AA058
	fneg     f7, f7

lbl_803AA058:
	lfs      f3, 4(r29)
	lis      r4, mCurrentMtx__6J3DSys@ha
	lfs      f2, 0xc(r29)
	addi     r4, r4, mCurrentMtx__6J3DSys@l
	lfs      f1, 0x14(r29)
	lfs      f0, 0x1c(r29)
	fmadds   f2, f3, f7, f2
	lfs      f5, 0(r29)
	fmadds   f0, f1, f7, f0
	lfs      f4, lbl_8051F438@sda21(r2)
	lfs      f1, 0x10(r29)
	fmadds   f5, f5, f4, f2
	lfs      f3, 0x24(r29)
	fmadds   f6, f1, f4, f0
	lfs      f2, 0x2c(r29)
	lfs      f1, 0x1c(r3)
	fmadds   f2, f3, f7, f2
	lfs      f0, 0xc(r3)
	fsubs    f30, f6, f1
	lfs      f3, 0x20(r29)
	lfs      f1, 0x2c(r3)
	fsubs    f31, f5, f0
	fmadds   f0, f3, f4, f2
	stfs     f5, 0xc(r3)
	stfs     f6, 0x1c(r3)
	fsubs    f29, f0, f1
	stfs     f0, 0x2c(r3)
	bl       PSMTXCopy
	addi     r4, r1, 0x28
	lwz      r3, 0x174(r26)
	lwzx     r4, r4, r28
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x18
	mr       r30, r3
	lwz      r3, 0x174(r26)
	lwzx     r4, r4, r28
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0xc0(r26)
	cmpwi    r27, 2
	mr       r31, r3
	lfs      f0, 0xa30(r4)
	lfs      f1, 0xa34(r4)
	fmuls    f28, f31, f0
	fmuls    f27, f30, f0
	fmuls    f26, f29, f0
	bge      lbl_803AA11C
	lfs      f1, lbl_8051F4A0@sda21(r2)

lbl_803AA11C:
	lfs      f22, lbl_8051F438@sda21(r2)
	cmpwi    r27, 2
	fmuls    f25, f31, f1
	fmr      f21, f22
	fmr      f20, f22
	fmuls    f24, f30, f1
	fmuls    f23, f29, f1
	bge      lbl_803AA2E8
	lbz      r0, 0xa18(r4)
	cmplwi   r0, 0
	beq      lbl_803AA2E8
	lwz      r3, 0x364(r26)
	lfs      f1, 0x2cc(r3)
	fcmpo    cr0, f1, f22
	bge      lbl_803AA184
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803AA1A8

lbl_803AA184:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803AA1A8:
	fabs     f0, f0
	lwz      r4, 0xc0(r26)
	lwz      r3, 0x364(r26)
	lfs      f2, 0xa40(r4)
	frsp     f1, f0
	lfs      f3, 0x2cc(r3)
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f3, f0
	fmuls    f23, f2, f1
	bge      lbl_803AA1FC
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803AA220

lbl_803AA1FC:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803AA220:
	fabs     f0, f0
	lwz      r4, 0xc0(r26)
	mr       r3, r26
	lfs      f1, 0xa44(r4)
	frsp     f0, f0
	fmuls    f24, f1, f0
	bl       getStateID__Q24Game9EnemyBaseFv
	lwz      r4, 0x364(r26)
	lfs      f0, lbl_8051F438@sda21(r2)
	lfs      f1, 0x2cc(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_803AA270
	cmpwi    r27, 0
	bne      lbl_803AA294
	lfs      f1, 0(r29)
	fmr      f21, f24
	lfs      f0, 0x20(r29)
	fmuls    f22, f1, f23
	fmuls    f20, f0, f23
	b        lbl_803AA294

lbl_803AA270:
	cmpwi    r27, 1
	bne      lbl_803AA294
	lfs      f1, 0(r29)
	fmr      f21, f24
	lfs      f0, 0x20(r29)
	fneg     f1, f1
	fneg     f0, f0
	fmuls    f22, f1, f23
	fmuls    f20, f0, f23

lbl_803AA294:
	lwz      r3, 0xc0(r26)
	lbz      r0, 0xa11(r3)
	cmplwi   r0, 0
	bne      lbl_803AA2B0
	fmr      f25, f22
	fmr      f23, f20
	b        lbl_803AA2E8

lbl_803AA2B0:
	mulli    r0, r27, 0xc
	lfs      f5, 0xc(r29)
	lfs      f3, 0x1c(r29)
	lfs      f1, 0x2c(r29)
	add      r3, r4, r0
	lfs      f4, 0x2ec(r3)
	lfs      f2, 0x2f0(r3)
	lfs      f0, 0x2f4(r3)
	fsubs    f4, f5, f4
	fsubs    f2, f3, f2
	fsubs    f0, f1, f0
	fadds    f25, f22, f4
	fadds    f24, f21, f2
	fadds    f23, f20, f0

lbl_803AA2E8:
	lfs      f0, 0xc(r30)
	addi     r3, r1, 8
	lwzx     r4, r3, r28
	fadds    f0, f0, f28
	stfs     f0, 0xc(r30)
	lfs      f0, 0x1c(r30)
	fadds    f0, f0, f27
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x2c(r30)
	fadds    f0, f0, f26
	stfs     f0, 0x2c(r30)
	lfs      f0, 0xc(r31)
	fadds    f0, f0, f25
	stfs     f0, 0xc(r31)
	lfs      f0, 0x1c(r31)
	fadds    f0, f0, f24
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x2c(r31)
	fadds    f0, f0, f23
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x174(r26)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0xc0(r26)
	cmpwi    r27, 2
	lfs      f0, 0xa38(r4)
	fmuls    f1, f31, f0
	fmuls    f2, f30, f0
	fmuls    f3, f29, f0
	bge      lbl_803AA378
	fmuls    f25, f25, f0
	fmuls    f24, f24, f0
	fmuls    f23, f23, f0
	fmr      f1, f25
	fmr      f2, f24
	fmr      f3, f23

lbl_803AA378:
	lfs      f0, 0xc(r3)
	fadds    f0, f0, f1
	stfs     f0, 0xc(r3)
	lfs      f0, 0x1c(r3)
	fadds    f0, f0, f2
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x2c(r3)
	fadds    f0, f0, f3
	stfs     f0, 0x2c(r3)

lbl_803AA39C:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	psq_l    f25, 280(r1), 0, qr0
	lfd      f25, 0x110(r1)
	psq_l    f24, 264(r1), 0, qr0
	lfd      f24, 0x100(r1)
	psq_l    f23, 248(r1), 0, qr0
	lfd      f23, 0xf0(r1)
	psq_l    f22, 232(r1), 0, qr0
	lfd      f22, 0xe0(r1)
	psq_l    f21, 216(r1), 0, qr0
	lfd      f21, 0xd0(r1)
	psq_l    f20, 200(r1), 0, qr0
	lfd      f20, 0xc0(r1)
	lmw      r17, 0x84(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AA410
 * Size:	00028C
 */
void BlackMan::Obj::bodyMtxCalc(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r30, r3
	lwz      r3, 0xc0(r3)
	lbz      r0, 0xa18(r3)
	cmplwi   r0, 0
	beq      lbl_803AA684
	lhz      r0, 0x36a(r30)
	lwz      r3, 0x174(r30)
	mulli    r0, r0, 0x3c
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x364(r30)
	mr       r31, r3
	lwz      r4, lbl_8051F554@sda21(r2)
	lfs      f1, 0x2cc(r5)
	lfs      f0, lbl_8051F438@sda21(r2)
	lwz      r0, lbl_8051F558@sda21(r2)
	fcmpo    cr0, f1, f0
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	ble      lbl_803AA494
	lwz      r3, 0x174(r5)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0xc(r3)
	lfs      f5, 0x1c(r3)
	lfs      f0, 0x2c(r3)
	b        lbl_803AA4B0

lbl_803AA494:
	lwz      r3, 0x174(r5)
	mr       r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0xc(r3)
	lfs      f5, 0x1c(r3)
	lfs      f0, 0x2c(r3)

lbl_803AA4B0:
	lfs      f1, 0x190(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f5, f5, f1
	lfs      f2, 0x194(r30)
	fsubs    f4, f4, f3
	lfs      f1, lbl_8051F438@sda21(r2)
	fsubs    f0, f0, f2
	fmuls    f2, f5, f5
	fmuls    f3, f0, f0
	fmadds   f2, f4, f4, f2
	fadds    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_803AA4F4
	ble      lbl_803AA4F8
	frsqrte  f1, f2
	fmuls    f2, f1, f2
	b        lbl_803AA4F8

lbl_803AA4F4:
	fmr      f2, f1

lbl_803AA4F8:
	lfs      f1, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_803AA514
	lfs      f1, lbl_8051F480@sda21(r2)
	fdivs    f1, f1, f2
	fmuls    f4, f4, f1
	fmuls    f0, f0, f1

lbl_803AA514:
	lwz      r3, 0x364(r30)
	lfs      f1, lbl_8051F438@sda21(r2)
	lfs      f2, 0x2cc(r3)
	fcmpo    cr0, f2, f1
	bge      lbl_803AA554
	lfs      f1, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0
	fneg     f1, f1
	b        lbl_803AA578

lbl_803AA554:
	lfs      f1, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f2, f1
	fctiwz   f1, f1
	stfd     f1, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_803AA578:
	lwz      r4, 0xc0(r30)
	fabs     f3, f1
	lfs      f1, 0xc(r31)
	lis      r3, mCurrentMtx__6J3DSys@ha
	lfs      f2, 0xa28(r4)
	addi     r4, r3, mCurrentMtx__6J3DSys@l
	frsp     f3, f3
	fmuls    f2, f2, f4
	mr       r3, r31
	fmadds   f1, f3, f2, f1
	stfs     f1, 0xc(r31)
	lwz      r5, 0xc0(r30)
	lfs      f1, 0x2c(r31)
	lfs      f2, 0xa28(r5)
	fmuls    f0, f2, f0
	fmadds   f0, f3, f0, f1
	stfs     f0, 0x2c(r31)
	bl       PSMTXCopy
	lfs      f1, lbl_8051F438@sda21(r2)
	stfs     f1, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f1, 0x24(r1)
	lwz      r4, 0x364(r30)
	lwz      r3, 0xc0(r30)
	lfs      f2, 0x2cc(r4)
	lfs      f0, 0xa2c(r3)
	fcmpo    cr0, f2, f1
	fneg     f1, f0
	bge      lbl_803AA618
	lfs      f0, lbl_8051F4F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_803AA63C

lbl_803AA618:
	lfs      f0, lbl_8051F4F4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_803AA63C:
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051F438@sda21(r2)
	addi     r3, r1, 0x28
	addi     r4, r1, 0x1c
	stfs     f0, 0x10(r1)
	addi     r5, r1, 0x10
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	mr       r5, r31
	addi     r4, r1, 0x28
	bl       PSMTXConcat
	lis      r3, mCurrentMtx__6J3DSys@ha
	addi     r4, r1, 0x28
	addi     r3, r3, mCurrentMtx__6J3DSys@l
	mr       r5, r3
	bl       PSMTXConcat

lbl_803AA684:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AA69C
 * Size:	000040
 */
bool BlackMan::Obj::isTyreFreeze(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803AA6C8
	bl       isFreeze__Q34Game4Tyre3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_803AA6C8
	li       r3, 1
	b        lbl_803AA6CC

lbl_803AA6C8:
	li       r3, 0

lbl_803AA6CC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AA6DC
 * Size:	00009C
 */
bool BlackMan::Obj::isTyreDead(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803AA760
	lfs      f1, 0x200(r3)
	lfs      f0, lbl_8051F438@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803AA760
	lwz      r3, 0x184(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x18(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803AA758
	lwz      r6, 0x364(r31)
	li       r4, 0
	li       r0, 2
	li       r3, 1
	lwz      r5, 0x1e0(r6)
	ori      r5, r5, 1
	stw      r5, 0x1e0(r6)
	stw      r4, 0x364(r31)
	stw      r0, 0x2e0(r31)
	b        lbl_803AA764

lbl_803AA758:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_803AA760:
	li       r3, 0

lbl_803AA764:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AA778
 * Size:	000074
 */
bool BlackMan::Obj::isFallEnd(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_803AA7A4
	li       r31, 1

lbl_803AA7A4:
	lwz      r3, 0x364(r30)
	cmplwi   r3, 0
	beq      lbl_803AA7D0
	bl       isFreeze__Q34Game4Tyre3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AA7CC
	lwz      r3, 0x364(r30)
	lbz      r0, 0x322(r3)
	cmplwi   r0, 0
	beq      lbl_803AA7D0

lbl_803AA7CC:
	li       r31, 1

lbl_803AA7D0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AA7EC
 * Size:	0001D4
 */
void BlackMan::Obj::moveRestart(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80495670@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	addi     r30, r4, lbl_80495670@l
	stw      r29, 0x14(r1)
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803AA9A4
	bl       moveStart__Q34Game4Tyre3ObjFv
	lwz      r3, 0x364(r31)
	li       r4, 0
	stb      r4, 0x2d0(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803AA84C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803AA84C
	stb      r4, 0x3a8(r31)
	b        lbl_803AA984

lbl_803AA84C:
	mr       r3, r31
	bl       isFinalFloor__Q34Game8BlackMan3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803AA984
	lbz      r0, 0x3a8(r31)
	cmplwi   r0, 0
	bne      lbl_803AA984
	lbz      r0, 0x3ab(r31)
	cmplwi   r0, 0
	bne      lbl_803AA984
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_803AA984
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x86a1
	cmplwi   r0, 0x3034
	bne      lbl_803AA984
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803AA8C0
	addi     r3, r30, 0x70
	addi     r5, r30, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AA8C0:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_803AA8E0
	addi     r3, r30, 0x70
	addi     r5, r30, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AA8E0:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_803AA900
	addi     r3, r30, 0x7c
	addi     r5, r30, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AA900:
	lwz      r3, 4(r29)
	lwz      r29, 4(r3)
	cmplwi   r29, 0
	bne      lbl_803AA924
	addi     r3, r30, 0x70
	addi     r5, r30, 0x28
	li       r4, 0x1e5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AA924:
	addi     r3, r29, 0x10
	li       r4, 1
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	or.      r29, r3, r3
	bne      lbl_803AA94C
	addi     r3, r30, 0x70
	addi     r5, r30, 0x28
	li       r4, 0x1e7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AA94C:
	cmplwi   r29, 0
	bne      lbl_803AA968
	addi     r3, r30, 0x18
	addi     r5, r30, 0x28
	li       r4, 0x8ad
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AA968:
	mr       r3, r29
	lwz      r12, 0x10(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x3a8(r31)

lbl_803AA984:
	lwz      r5, 0xc0(r31)
	li       r4, 0
	lwz      r3, 0x364(r31)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	lfs      f4, lbl_8051F49C@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"

lbl_803AA9A4:
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
 * Address:	803AA9C0
 * Size:	000004
 */
void BlackMan::Obj::escape(void) { }

/*
 * --INFO--
 * Address:	803AA9C4
 * Size:	000008
 */
void BlackMan::Obj::setTimer(float)
{
	/*
	stfs     f1, 0x33c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AA9CC
 * Size:	000008
 */
void BlackMan::Obj::getTimer(void)
{
	/*
	lfs      f1, 0x33c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AA9D4
 * Size:	0000A0
 */
void BlackMan::Obj::collisionStOn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x6B6F7369@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x6B6F7369@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x6D756E65@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x6D756E65@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __as__4ID32FUl
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 0xa
	beq      lbl_803AAA60
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f0, 0x378(r31)

lbl_803AAA60:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AAA74
 * Size:	000098
 */
void BlackMan::Obj::collisionStOff(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x6B6F7369@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x6B6F7369@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x6D756E65@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x6D756E65@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lis      r4, 0x68656164@ha
	lwz      r3, 0x114(r31)
	addi     r4, r4, 0x68656164@l
	bl       getCollPart__8CollTreeFUl
	lis      r4, 0x5F5F5F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x5F5F5F5F@l
	bl       __as__4ID32FUl
	lfs      f0, lbl_8051F438@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x378(r31)
	bl       flick__Q34Game8BlackMan3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AAB0C
 * Size:	00004C
 */
void BlackMan::Obj::flick(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f4, lbl_8051F49C@sda21(r2)
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051F438@sda21(r2)
	stfs     f0, 0x20c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AAB58
 * Size:	000150
 */
void BlackMan::Obj::recover(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, 0x364(r3)
	cmplwi   r4, 0
	beq      lbl_803AAC94
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AABE4
	lwz      r0, 0x1e0(r4)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_803AABE4
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051F4B0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803AABC0
	lfs      f0, lbl_8051F4DC@sda21(r2)
	mr       r3, r31
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	fneg     f0, f0
	fmuls    f1, f1, f0
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_803AABEC

lbl_803AABC0:
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051F480@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_803AABEC
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_803AABEC

lbl_803AABE4:
	mr       r3, r31
	bl       resetAnimSpeed__Q24Game9EnemyBaseFv

lbl_803AABEC:
	lwz      r3, 0x364(r31)
	li       r0, 1
	lfs      f5, lbl_8051F4DC@sda21(r2)
	stb      r0, 0x2d0(r3)
	lfs      f0, lbl_8051F55C@sda21(r2)
	lwz      r4, 0x174(r31)
	lhz      r3, 0x36c(r31)
	lwz      r5, 8(r4)
	lhz      r0, 0x36e(r31)
	mulli    r4, r3, 0x30
	lwz      r5, 0x84(r5)
	lwz      r3, 0x364(r31)
	lwz      r5, 0xc(r5)
	mulli    r0, r0, 0x30
	add      r4, r5, r4
	add      r5, r5, r0
	lfs      f2, 0xc(r4)
	lfs      f1, 0xc(r5)
	lfs      f3, 0x1c(r4)
	fadds    f1, f2, f1
	lfs      f2, 0x1c(r5)
	lfs      f4, 0x2c(r4)
	fadds    f2, f3, f2
	lfs      f3, 0x2c(r5)
	fmuls    f1, f5, f1
	fadds    f3, f4, f3
	fmuls    f2, f5, f2
	stfs     f1, 0x2d4(r3)
	fmuls    f1, f5, f3
	stfs     f2, 0x2d8(r3)
	stfs     f1, 0x2dc(r3)
	lwz      r3, 0x364(r31)
	lfs      f1, 0x2d4(r3)
	stfs     f1, 0x328(r31)
	lfs      f1, 0x2d8(r3)
	stfs     f1, 0x32c(r31)
	lfs      f1, 0x2dc(r3)
	stfs     f1, 0x330(r31)
	lwz      r3, 0x364(r31)
	lfs      f1, 0x2cc(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x2cc(r3)

lbl_803AAC94:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AACA8
 * Size:	0000F8
 */
void BlackMan::Obj::recoverFlick(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stfd     f28, 0x10(r1)
	psq_st   f28, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x364(r3)
	lwz      r4, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f31, 0x53c(r4)
	lfs      f30, 0x4c4(r4)
	lfs      f29, 0x4ec(r4)
	lfs      f28, 0x514(r4)
	beq      lbl_803AAD18
	lfs      f0, lbl_8051F4A8@sda21(r2)
	fmr      f1, f31
	fmr      f3, f29
	lfs      f4, 0x1fc(r31)
	fmuls    f2, f0, f30
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"

lbl_803AAD18:
	fmr      f1, f31
	lfs      f4, 0x1fc(r31)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f29
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f28
	lfs      f4, 0x1fc(r31)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f29
	li       r4, 0
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f28
	lfs      f4, 0x1fc(r31)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f29
	li       r4, 0
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	psq_l    f28, 24(r1), 0, qr0
	lfd      f28, 0x10(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AADA0
 * Size:	00002C
 */
void BlackMan::Obj::tyreFlick(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803AADBC
	bl       flick__Q34Game4Tyre3ObjFv

lbl_803AADBC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AADCC
 * Size:	0000D0
 */
void BlackMan::Obj::deadEffect(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       createDeadBombEffect__Q24Game9EnemyBaseFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x264(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051F438@sda21(r2)
	mr       r3, r31
	bl       PSStartEnemyFatalHitSE__FPQ24Game9EnemyBasef
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx10TKageDead2@ha
	stw      r0, 8(r1)
	addi     r5, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx3Arg@ha
	li       r0, 0x298
	stw      r5, 8(r1)
	addi     r7, r4, __vt__Q23efx10TKageDead2@l
	addi     r6, r3, __vt__Q23efx3Arg@l
	li       r4, 0
	sth      r0, 0xc(r1)
	lis      r3, __vt__Q23efx11ArgPrmColor@ha
	addi     r5, r3, __vt__Q23efx11ArgPrmColor@l
	li       r0, 0xff
	stw      r4, 0x10(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	stw      r7, 8(r1)
	stw      r6, 0x14(r1)
	lfs      f0, 0x304(r31)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x308(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x30c(r31)
	stfs     f0, 0x20(r1)
	stw      r5, 0x14(r1)
	stb      r0, 0x24(r1)
	stb      r0, 0x25(r1)
	stb      r0, 0x26(r1)
	stb      r0, 0x27(r1)
	bl       create__Q23efx10TKageDead2FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AAE9C
 * Size:	000034
 */
void BlackMan::Obj::deadTraceEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x39c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	803AAED0
 * Size:	000074
 */
void BlackMan::Obj::tyreUpEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803AAF30
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AAF08
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_803AAF30

lbl_803AAF08:
	lwz      r12, 0(r3)
	lwz      r12, 0x254(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x398(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803AAF30:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AAF44
 * Size:	000050
 */
void BlackMan::Obj::tyreDownEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x364(r3)
	cmplwi   r3, 0
	beq      lbl_803AAF80
	addi     r4, r31, 0x328
	bl       "landEffect__Q34Game4Tyre3ObjFR10Vector3<f>"
	lwz      r3, 0x364(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x250(r12)
	mtctr    r12
	bctrl

lbl_803AAF80:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AAF94
 * Size:	000094
 */
void BlackMan::Obj::bendEffect(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r0, 0x364(r3)
	cmplwi   r0, 0
	beq      lbl_803AB018
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051F560@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx10TKageBend1@ha
	stw      r0, 8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x295
	li       r5, 0x296
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx10TKageBend1@l
	li       r4, 0
	stw      r3, 0x18(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	sth      r5, 0xe(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg

lbl_803AB018:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB028
 * Size:	00005C
 */
void BlackMan::Obj::createTraceEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x364(r3)
	cmplwi   r0, 0
	beq      lbl_803AB05C
	lwz      r3, 0x390(r3)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_803AB074

lbl_803AB05C:
	lwz      r3, 0x394(r3)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_803AB074:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB084
 * Size:	000050
 */
void BlackMan::Obj::fadeTraceEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x390(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x394(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB0D4
 * Size:	000058
 */
void BlackMan::Obj::createFlickEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x3a0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3a4(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB12C
 * Size:	000050
 */
void BlackMan::Obj::fadeFlickEffect(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x3a0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3a4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB17C
 * Size:	0000C4
 */
bool BlackMan::Obj::isFinalFloor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803AB1B0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_803AB1B0
	li       r3, 0
	b        lbl_803AB228

lbl_803AB1B0:
	lwz      r30, 0x58(r3)
	cmplwi   r30, 0
	beq      lbl_803AB224
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x86a1
	cmplwi   r0, 0x3034
	bne      lbl_803AB224
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_803AB224
	lwz      r3, 0x28(r3)
	cmplwi   r3, 0
	beq      lbl_803AB224
	bl       getFloorMax__Q34Game4Cave8CaveInfoFv
	mr       r31, r3
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	addi     r0, r3, 1
	cmpw     r0, r31
	bne      lbl_803AB224
	li       r3, 1
	b        lbl_803AB228

lbl_803AB224:
	li       r3, 0

lbl_803AB228:
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
 * Address:	803AB240
 * Size:	0001C0
 */
void BlackMan::Obj::appearFanfare(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_80495670@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r5, lbl_80495670@l
	stw      r30, 8(r1)
	lwz      r4, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_803AB3E8
	lbz      r0, 0x3aa(r3)
	cmplwi   r0, 0
	beq      lbl_803AB3E8
	li       r0, 0
	stb      r0, 0x3aa(r3)
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803AB2A0
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB2A0:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_803AB2C0
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB2C0:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_803AB2E0
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB2E0:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_803AB304
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x130
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB304:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_803AB324
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x28
	li       r4, 0x5a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB324:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_803AB3E8
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_803AB350
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB350:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_803AB370
	addi     r3, r31, 0x70
	addi     r5, r31, 0x28
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB370:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_803AB390
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x28
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB390:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_803AB3B4
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x130
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB3B4:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_803AB3D4
	addi     r3, r31, 0x7c
	addi     r5, r31, 0x28
	li       r4, 0x5a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_803AB3D4:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803AB3E8:
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
 * Address:	803AB718
 * Size:	000004
 */
void BlackMan::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	803AB71C
 * Size:	000004
 */
void BlackMan::Obj::throwupItemInDeathProcedure(void) { }

/*
 * --INFO--
 * Address:	803AB720
 * Size:	00002C
 */
void BlackMan::Obj::createEfxHamon(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x364(r3)
	cmplwi   r0, 0
	bne      lbl_803AB73C
	bl       createEfxHamon__Q24Game9EnemyBaseFv

lbl_803AB73C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB74C
 * Size:	000040
 */
void BlackMan::Obj::updateEfxHamon(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x364(r3)
	cmplwi   r0, 0
	beq      lbl_803AB778
	lwz      r12, 0(r3)
	lwz      r12, 0x254(r12)
	mtctr    r12
	bctrl
	b        lbl_803AB77C

lbl_803AB778:
	bl       updateEfxHamon__Q24Game9EnemyBaseFv

lbl_803AB77C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	803AB78C
 * Size:	000008
 */
bool BlackMan::Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 f) { return false; }
} // namespace Game