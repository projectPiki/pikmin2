#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048D7E0
    lbl_8048D7E0:
        .asciz "world_root"
        .skip 1
    .global lbl_8048D7EC
    lbl_8048D7EC:
        .asciz "PSMainSide_ObjSound.h"
        .skip 2
    .global lbl_8048D804
    lbl_8048D804:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23efx9TDangoFly
    __vt__Q23efx9TDangoFly:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple3FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple3Fv
        .4byte fade__Q23efx8TSimple3Fv
    .global __vt__Q23efx12TDangoDamage
    __vt__Q23efx12TDangoDamage:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx10TDangoDead
    __vt__Q23efx10TDangoDead:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx15TDangoDeadSmoke
    __vt__Q23efx15TDangoDeadSmoke:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx9TDangoRun
    __vt__Q23efx9TDangoRun:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
    .global __vt__Q23efx13TDangoAttack2
    __vt__Q23efx13TDangoAttack2:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13TDangoAttack2Fv"
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
        .4byte __dt__Q23efx13TDangoAttack2Fv
    .global __vt__Q23efx15TDangoWallBreak
    __vt__Q23efx15TDangoWallBreak:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx15TDangoWallBreakFv"
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
        .4byte __dt__Q23efx15TDangoWallBreakFv
    .global __vt__Q34Game10DangoMushi3Obj
    __vt__Q34Game10DangoMushi3Obj:
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
        .4byte onInit__Q34Game10DangoMushi3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game10DangoMushi3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game10DangoMushi3ObjFR8Graphics
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
        .4byte isUnderground__Q24Game8CreatureFv
        .4byte isLivingThing__Q24Game8CreatureFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q34Game10DangoMushi3ObjFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game10DangoMushi3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q34Game10DangoMushi3ObjFv
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
        .4byte __dt__Q34Game10DangoMushi3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game10DangoMushi3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game10DangoMushi3ObjFv
        .4byte doUpdateCommon__Q34Game10DangoMushi3ObjFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q34Game10DangoMushi3ObjFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game10DangoMushi3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q34Game10DangoMushi3ObjFv
        .4byte "getCommonEffectPos__Q34Game10DangoMushi3ObjFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q34Game10DangoMushi3ObjFv
        .4byte getWalkSmokeEffectMgr__Q34Game10DangoMushi3ObjFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game10DangoMushi3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte
   damageCallBack__Q34Game10DangoMushi3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q34Game10DangoMushi3ObjFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game10DangoMushi3ObjFv .4byte
   doFinishStoneState__Q34Game10DangoMushi3ObjFv .4byte
   getDamageCoeStoneState__Q34Game10DangoMushi3ObjFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q34Game10DangoMushi3ObjFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q34Game10DangoMushi3ObjFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q34Game10DangoMushi3ObjFv .4byte
   doStartMovie__Q34Game10DangoMushi3ObjFv .4byte
   doEndMovie__Q34Game10DangoMushi3ObjFv .4byte
   setFSM__Q34Game10DangoMushi3ObjFPQ34Game10DangoMushi3FSM .4byte 0 .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@768@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@768@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@768@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@768@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@768@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@768@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
    .global __vt__Q34Game10DangoMushi14ProperAnimator
    __vt__Q34Game10DangoMushi14ProperAnimator:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game10DangoMushi14ProperAnimatorFv
        .4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
        .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
        .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
        .4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
        .4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
        .4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
        .4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D3A8
    lbl_8051D3A8:
        .4byte 0x00000000
    .global lbl_8051D3AC
    lbl_8051D3AC:
        .4byte 0x42700000
    .global lbl_8051D3B0
    lbl_8051D3B0:
        .4byte 0x41F00000
    .global lbl_8051D3B4
    lbl_8051D3B4:
        .4byte 0x41200000
    .global lbl_8051D3B8
    lbl_8051D3B8:
        .float 1.0
    .global lbl_8051D3BC
    lbl_8051D3BC:
        .4byte 0x42C80000
    .global lbl_8051D3C0
    lbl_8051D3C0:
        .4byte 0x42480000
    .global lbl_8051D3C4
    lbl_8051D3C4:
        .4byte 0x42340000
    .global lbl_8051D3C8
    lbl_8051D3C8:
        .4byte 0xBF000000
    .global lbl_8051D3CC
    lbl_8051D3CC:
        .4byte 0xC47A0000
    .global lbl_8051D3D0
    lbl_8051D3D0:
        .4byte 0x68616E64
        .4byte 0x5F4C0000
    .global lbl_8051D3D8
    lbl_8051D3D8:
        .4byte 0x40F00000
    .global lbl_8051D3DC
    lbl_8051D3DC:
        .4byte 0x3F19999A
    .global lbl_8051D3E0
    lbl_8051D3E0:
        .4byte 0x47000000
    .global lbl_8051D3E4
    lbl_8051D3E4:
        .4byte 0x40490FDB
    .global lbl_8051D3E8
    lbl_8051D3E8:
        .4byte 0x3FC90FDB
    .global lbl_8051D3EC
    lbl_8051D3EC:
        .4byte 0x43A2F983
    .global lbl_8051D3F0
    lbl_8051D3F0:
        .4byte 0xC3A2F983
        .4byte 0x00000000
    .global lbl_8051D3F8
    lbl_8051D3F8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051D400
    lbl_8051D400:
        .4byte 0x441C4000
    .global lbl_8051D404
    lbl_8051D404:
        .4byte 0x43340000
    .global lbl_8051D408
    lbl_8051D408:
        .4byte 0x3BB60B61
    .global lbl_8051D40C
    lbl_8051D40C:
        .4byte 0x40A00000
    .global lbl_8051D410
    lbl_8051D410:
        .4byte 0x40400000
    .global lbl_8051D414
    lbl_8051D414:
        .4byte 0x00000013
    .global lbl_8051D418
    lbl_8051D418:
        .4byte 0x00000025
    .global lbl_8051D41C
    lbl_8051D41C:
        .4byte 0x0000000A
    .global lbl_8051D420
    lbl_8051D420:
        .4byte 0x00000001
    .global lbl_8051D424
    lbl_8051D424:
        .float 0.5
    .global lbl_8051D428
    lbl_8051D428:
        .float 0.25
    .global lbl_8051D42C
    lbl_8051D42C:
        .4byte 0x41700000
    .global lbl_8051D430
    lbl_8051D430:
        .4byte 0x40060A92
    .global lbl_8051D434
    lbl_8051D434:
        .4byte 0x428C0000
    .global lbl_8051D438
    lbl_8051D438:
        .4byte 0x3F860A92
    .global lbl_8051D43C
    lbl_8051D43C:
        .4byte 0x430C0000
    .global lbl_8051D440
    lbl_8051D440:
        .float 0.1
    .global lbl_8051D444
    lbl_8051D444:
        .4byte 0x3F060A92
    .global lbl_8051D448
    lbl_8051D448:
        .4byte 0x435C0000
    .global lbl_8051D44C
    lbl_8051D44C:
        .4byte 0x40C90FDB
    .global lbl_8051D450
    lbl_8051D450:
        .4byte 0x447A0000
    .global lbl_8051D454
    lbl_8051D454:
        .4byte 0x43FA0000
    .global lbl_8051D458
    lbl_8051D458:
        .4byte 0x626F6430
    .global lbl_8051D45C
    lbl_8051D45C:
        .4byte 0x626F6431
    .global lbl_8051D460
    lbl_8051D460:
        .4byte 0x43160000
    .global lbl_8051D464
    lbl_8051D464:
        .4byte 0x43960000
    .global lbl_8051D468
    lbl_8051D468:
        .4byte 0x42F00000
    .global lbl_8051D46C
    lbl_8051D46C:
        .4byte 0x437A0000
    .global lbl_8051D470
    lbl_8051D470:
        .4byte 0xC1700000
    .global lbl_8051D474
    lbl_8051D474:
        .4byte 0x428C0000
    .global lbl_8051D478
    lbl_8051D478:
        .4byte 0xC1A00000
    .global lbl_8051D47C
    lbl_8051D47C:
        .4byte 0xC2200000
    .global lbl_8051D480
    lbl_8051D480:
        .4byte 0x41700000
    .global lbl_8051D484
    lbl_8051D484:
        .4byte 0x41700000
    .global lbl_8051D488
    lbl_8051D488:
        .4byte 0x68616E64
        .4byte 0x5F520000
    .global lbl_8051D490
    lbl_8051D490:
        .4byte 0x47FA0000
    .global lbl_8051D494
    lbl_8051D494:
        .4byte 0xC7FA0000
    .global lbl_8051D498
    lbl_8051D498:
        .4byte 0x61726D5F
        .4byte 0x52303200
    .global lbl_8051D4A0
    lbl_8051D4A0:
        .4byte 0x73746F6D
        .4byte 0x61636800
    .global lbl_8051D4A8
    lbl_8051D4A8:
        .4byte 0x3FA66666
    .global lbl_8051D4AC
    lbl_8051D4AC:
        .4byte 0x422A0000
    .global lbl_8051D4B0
    lbl_8051D4B0:
        .4byte 0xC1480000
    .global lbl_8051D4B4
    lbl_8051D4B4:
        .4byte 0x41C80000
    .global lbl_8051D4B8
    lbl_8051D4B8:
        .4byte 0x3F2E147B
    .global lbl_8051D4BC
    lbl_8051D4BC:
        .4byte 0x3E4CCCCD
*/

namespace Game {

/*
 * --INFO--
 * Address:	802FC3BC
 * Size:	000134
 */
DangoMushi::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802FC3FC
	addi     r0, r31, 0x300
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x300(r31)
	stw      r0, 0x304(r31)
	stw      r0, 0x308(r31)

lbl_802FC3FC:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game10DangoMushi3Obj@ha
	addi     r0, r31, 0x300
	addi     r5, r3, __vt__Q34Game10DangoMushi3Obj@l
	addi     r3, r31, 0x2e8
	stw      r5, 0(r31)
	addi     r4, r5, 0x1b0
	addi     r5, r5, 0x2fc
	stw      r4, 0x178(r31)
	lwz      r4, 0x17c(r31)
	stw      r5, 0(r4)
	lwz      r4, 0x17c(r31)
	subf     r0, r4, r0
	stw      r0, 0xc(r4)
	bl       __ct__Q34Game15WalkSmokeEffect3MgrFv
	li       r3, 0x60
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802FC460
	bl       __ct__Q24Game22EnemyBlendAnimatorBaseFv
	lis      r3, __vt__Q34Game10DangoMushi14ProperAnimator@ha
	addi     r0, r3, __vt__Q34Game10DangoMushi14ProperAnimator@l
	stw      r0, 0(r30)

lbl_802FC460:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802FC494
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game10DangoMushi3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game10DangoMushi3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802FC494:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createEffect__Q34Game10DangoMushi3ObjFv
	li       r3, 0xc
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802FC4D0
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r30)

lbl_802FC4D0:
	stw      r30, 0x2f0(r31)
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
 * Address:	802FC4F0
 * Size:	000004
 */
void DangoMushi::Obj::setInitialSetting(Game::EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802FC4F4
 * Size:	000130
 */
void DangoMushi::Obj::onInit(Game::CreatureInitArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	lwz      r3, 0x1e0(r31)
	li       r4, 0
	lfs      f0, lbl_8051D3A8@sda21(r2)
	li       r0, -1
	ori      r5, r3, 1
	mr       r3, r31
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x1a, 0x18
	stw      r5, 0x1e0(r31)
	stb      r4, 0x2c0(r31)
	stfs     f0, 0x2e4(r31)
	stfs     f0, 0x2e0(r31)
	stfs     f0, 0x2dc(r31)
	stfs     f0, 0x2c4(r31)
	stw      r0, 0x2cc(r31)
	stfs     f0, 0x2c8(r31)
	bl       setupCollision__Q34Game10DangoMushi3ObjFv
	mr       r3, r31
	li       r4, 0
	bl       setBodyCollision__Q34Game10DangoMushi3ObjFb
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2c1(r31)
	li       r4, 0
	bl       resetMapCollisionSize__Q34Game10DangoMushi3ObjFb
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2c3(r31)
	bl       resetBossAppearBGM__Q34Game10DangoMushi3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game10DangoMushi3ObjFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802FC5D4
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	bne      lbl_802FC5D4
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802FC5F4

lbl_802FC5D4:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802FC5F4:
	lwz      r3, 0x2f0(r31)
	lwz      r4, 0x180(r31)
	lwz      r12, 0(r3)
	lwz      r4, 0x44(r4)
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
 * Address:	802FC624
 * Size:	000044
 */
void DangoMushi::Obj::onKill(Game::CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv
	mr       r3, r30
	mr       r4, r31
	bl       onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
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
 * Address:	802FC668
 * Size:	000050
 */
void DangoMushi::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       updateMapCollisionSize__Q34Game10DangoMushi3ObjFv
	mr       r3, r31
	bl       createMoveHandEffect__Q34Game10DangoMushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FC6B8
 * Size:	000044
 */
void DangoMushi::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f0, 0x1c8(r3)
	stfs     f0, 0x2dc(r3)
	lfs      f0, 0x1d0(r3)
	stfs     f0, 0x2e4(r3)
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       updateBossBGM__Q34Game10DangoMushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FC6FC
 * Size:	000094
 */
void DangoMushi::Obj::doAnimationUpdateAnimator()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q28SysShape13BlendFunction@ha
	lis      r4, __vt__Q28SysShape14BlendLinearFun@ha
	stw      r0, 0x24(r1)
	addi     r0, r5, __vt__Q28SysShape13BlendFunction@l
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f0, lbl_8051D3AC@sda21(r2)
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q28SysShape14BlendLinearFun@l
	lwz      r5, sys@sda21(r13)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lfs      f3, 0x54(r5)
	lwz      r3, 0x184(r3)
	fmuls    f2, f1, f3
	fmuls    f1, f0, f3
	fmr      f3, f2
	bl animate__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape13BlendFunctionfff
	lwz      r3, 0x184(r31)
	lwzu     r12, 0x10(r3)
	lwz      r31, 0x174(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r31)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0(r4)
	stw      r3, 0x54(r4)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FC790
 * Size:	0000C4
 */
void DangoMushi::Obj::changeMaterial()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 0x174(r3)
	lwz      r29, 8(r3)
	lwz      r12, 0(r29)
	mr       r3, r29
	lwz      r30, 4(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f0(r28)
	lfs      f1, lbl_8051D3B0@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lis      r3, j3dSys@ha
	li       r28, 0
	addi     r31, r3, j3dSys@l
	b        lbl_802FC824

lbl_802FC7EC:
	lwz      r4, 0xc0(r29)
	rlwinm   r3, r28, 6, 0xa, 0x19
	rlwinm   r0, r28, 2, 0xe, 0x1d
	add      r4, r4, r3
	stw      r4, 0x3c(r31)
	lwz      r3, 0x60(r30)
	lwz      r4, 0x2c(r4)
	lwzx     r3, r3, r0
	lwz      r4, 0x34(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_802FC824:
	lhz      r0, 0x5c(r30)
	clrlwi   r3, r28, 0x10
	cmplw    r3, r0
	blt      lbl_802FC7EC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FC854
 * Size:	000004
 */
void DangoMushi::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802FC858
 * Size:	000020
 */
void DangoMushi::Obj::doDebugDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       doDebugDraw__Q24Game9EnemyBaseFR8Graphics
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FC878
 * Size:	00004C
 */
void DangoMushi::Obj::setFSM(Game::DangoMushi::FSM*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0x2bc(r3)
	mr       r4, r31
	lwz      r3, 0x2bc(r3)
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
 * Address:	802FC8C4
 * Size:	0000B8
 */
void DangoMushi::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8048D7E0@ha
	addi     r0, r3, lbl_8048D7E0@l
	lwz      r3, 0x174(r30)
	mr       r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f2, 0x1c(r3)
	lfs      f0, 0xc(r3)
	lfs      f3, lbl_8051D3B4@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051D3A8@sda21(r2)
	stfs     f2, 4(r31)
	lfs      f0, lbl_8051D3B8@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f2, 0x190(r30)
	fadds    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802FC94C
	lfs      f0, lbl_8051D3BC@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802FC954

lbl_802FC94C:
	lfs      f0, lbl_8051D3C0@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802FC954:
	lfs      f1, lbl_8051D3C4@sda21(r2)
	lfs      f0, 0x2c8(r30)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FC97C
 * Size:	000070
 */
void DangoMushi::Obj::needShadow()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       needShadow__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FC9A4
	li       r3, 1
	b        lbl_802FC9D8

lbl_802FC9A4:
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FC9D4
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_802FC9CC
	cmpwi    r3, 2
	bne      lbl_802FC9D4

lbl_802FC9CC:
	li       r3, 1
	b        lbl_802FC9D8

lbl_802FC9D4:
	li       r3, 0

lbl_802FC9D8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FC9EC
 * Size:	0000EC
 */
void DangoMushi::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f31, f1
	cmplwi   r4, 0
	mr       r30, r3
	mr       r31, r5
	beq      lbl_802FCAB4
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FCAB4
	lwz      r0, 0x1e0(r30)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_802FCA5C
	fmr      f1, f31
	lfs      f2, lbl_8051D3B8@sda21(r2)
	mr       r3, r30
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802FCAB8

lbl_802FCA5C:
	cmplwi   r31, 0
	beq      lbl_802FCAB4
	lis      r4, 0x626F6430@ha
	addi     r3, r31, 0x30
	addi     r4, r4, 0x626F6430@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802FCA94
	lis      r4, 0x626F6431@ha
	addi     r3, r31, 0x30
	addi     r4, r4, 0x626F6431@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FCAB4

lbl_802FCA94:
	mr       r3, r30
	bl       createBodyDamageEffect__Q34Game10DangoMushi3ObjFv
	fmr      f1, f31
	lfs      f2, lbl_8051D3B8@sda21(r2)
	mr       r3, r30
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802FCAB8

lbl_802FCAB4:
	li       r3, 0

lbl_802FCAB8:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCAD8
 * Size:	000008
 */
u32 DangoMushi::Obj::earthquakeCallBack(Game::Creature*, float) { return 0x0; }

/*
 * --INFO--
 * Address:	802FCAE0
 * Size:	000104
 */
void DangoMushi::Obj::collisionCallback(Game::CollEvent&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802FCBB4
	lwz      r3, 0(r31)
	cmplwi   r3, 0
	beq      lbl_802FCBB4
	lbz      r0, 0x2c0(r30)
	cmplwi   r0, 0
	beq      lbl_802FCB74
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_802FCB74
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game13InteractPress@ha
	li       r0, 0
	lfs      f0, 0x604(r6)
	addi     r6, r5, __vt__Q24Game11Interaction@l
	addi     r5, r4, __vt__Q24Game13InteractPress@l
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stw      r30, 0xc(r1)
	stw      r5, 8(r1)
	stfs     f0, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802FCBB4

lbl_802FCB74:
	lbz      r0, 0x2c1(r30)
	cmplwi   r0, 0
	beq      lbl_802FCBB4
	lwz      r3, 8(r31)
	cmplwi   r3, 0
	beq      lbl_802FCBB4
	lis      r4, 0x6861522A@ha
	addi     r3, r3, 0x30
	addi     r4, r4, 0x6861522A@l
	li       r5, 0x2a
	bl       match__4ID32FUlc
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FCBB4
	lwz      r4, 0(r31)
	mr       r3, r30
	bl       flickHandCollision__Q34Game10DangoMushi3ObjFPQ24Game8Creature

lbl_802FCBB4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x240(r12)
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
 * Address:	802FCBE4
 * Size:	00010C
 */
void DangoMushi::Obj::wallCallback(const Game::MoveInfo&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0x2c0(r3)
	cmplwi   r0, 0
	beq      lbl_802FCCDC
	lfs      f3, 0x2e0(r31)
	lfs      f5, 0x2e4(r31)
	fmuls    f1, f3, f3
	lfs      f4, 0x2dc(r31)
	fmuls    f2, f5, f5
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fmadds   f1, f4, f4, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802FCC3C
	ble      lbl_802FCC40
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802FCC40

lbl_802FCC3C:
	fmr      f1, f0

lbl_802FCC40:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FCC64
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f4, f4, f0
	fmuls    f3, f3, f0
	fmuls    f5, f5, f0
	b        lbl_802FCC68

lbl_802FCC64:
	fmr      f1, f0

lbl_802FCC68:
	lfs      f0, lbl_8051D3BC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FCCDC
	lfs      f0, 0x60(r4)
	lfs      f2, 0x5c(r4)
	fmuls    f1, f3, f0
	lfs      f3, 0x64(r4)
	lfs      f0, lbl_8051D3C8@sda21(r2)
	fmadds   f1, f4, f2, f1
	fmadds   f1, f5, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FCCDC
	lwz      r6, 0x5c(r4)
	mr       r3, r31
	lwz      r5, 0x60(r4)
	lwz      r0, 0x64(r4)
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	bl       "createBodyWallCrashEffect__Q34Game10DangoMushi3ObjF10Vector3<f>"
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 6
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_802FCCDC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCCF0
 * Size:	000038
 */
void DangoMushi::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCD28
 * Size:	000074
 */
void DangoMushi::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051D3B8@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_8051D3B4@sda21(r2)
	li       r4, 0
	lfs      f3, lbl_8051D3A8@sda21(r2)
	lfs      f4, lbl_8051D3CC@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	bne      lbl_802FCD7C
	mr       r3, r31
	bl       isNoDamageCollision__Q34Game10DangoMushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FCD88

lbl_802FCD7C:
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)

lbl_802FCD88:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCD9C
 * Size:	000028
 */
void DangoMushi::Obj::startCarcassMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 8
	li       r5, 0
	stw      r0, 0x14(r1)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCDC4
 * Size:	000020
 */
void DangoMushi::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game10DangoMushi3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCDE4
 * Size:	000020
 */
void DangoMushi::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game10DangoMushi3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCE04
 * Size:	00004C
 */
void DangoMushi::Obj::initWalkSmokeEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x2e8
	bl       alloc__Q34Game15WalkSmokeEffect3MgrFi
	lwz      r5, 0x174(r31)
	addi     r3, r31, 0x2e8
	lfs      f1, lbl_8051D3D8@sda21(r2)
	li       r4, 0
	addi     r6, r2, lbl_8051D3D0@sda21
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
 * Address:	802FCE50
 * Size:	000008
 */
void DangoMushi::Obj::getWalkSmokeEffectMgr()
{
	/*
	addi     r3, r3, 0x2e8
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCE58
 * Size:	000024
 */
void DangoMushi::Obj::getCommonEffectPos(Vector3f&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f1, lbl_8051D3B0@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f0, 0x190(r3)
	fadds    f0, f1, f0
	stfs     f0, 4(r4)
	lfs      f0, 0x194(r3)
	stfs     f0, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCE7C
 * Size:	000050
 */
void DangoMushi::Obj::addShadowScale()
{
	/*
	lfs      f3, 0x2c8(r3)
	lfs      f2, lbl_8051D3B8@sda21(r2)
	fcmpo    cr0, f3, f2
	bge      lbl_802FCEBC
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051D3DC@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x2c8(r3)
	lfs      f0, 0x2c8(r3)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bne      lbl_802FCEC4
	stfs     f2, 0x2c8(r3)
	li       r3, 1
	blr

lbl_802FCEBC:
	li       r3, 1
	blr

lbl_802FCEC4:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FCECC
 * Size:	000198
 */
void DangoMushi::Obj::setRandTarget()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lis      r3, atanTable___5JMath@ha
	lwz      r4, 0xc0(r31)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 8(r1)
	lfd      f1, lbl_8051D3F8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f5, lbl_8051D3E0@sda21(r2)
	fsubs    f0, f0, f1
	lfs      f3, 0x18c(r31)
	lfs      f1, 0x198(r31)
	lfs      f4, 0x384(r4)
	fmuls    f6, f30, f0
	lfs      f2, 0x194(r31)
	fsubs    f1, f3, f1
	lfs      f0, 0x1a0(r31)
	fdivs    f3, f6, f5
	fadds    f31, f4, f3
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f2, lbl_8051D3F8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f3, lbl_8051D3E4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051D3E8@sda21(r2)
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f5, f2, f1
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802FCFB0
	fneg     f1, f5

lbl_802FCFB0:
	lfs      f3, lbl_8051D3EC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051D3A8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 0x1a0(r31)
	fcmpo    cr0, f5, f0
	lfs      f4, 0x19c(r31)
	fctiwz   f0, f2
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f31, f0, f1
	bge      lbl_802FD014
	lfs      f0, lbl_8051D3F0@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_802FD02C

lbl_802FD014:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_802FD02C:
	lfs      f0, 0x198(r31)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2d0(r31)
	stfs     f4, 0x2d4(r31)
	stfs     f2, 0x2d8(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FD064
 * Size:	000034
 */
void DangoMushi::Obj::isReachedTarget()
{
	/*
	lfs      f1, 0x194(r3)
	lfs      f0, 0x2d8(r3)
	lfs      f2, 0x18c(r3)
	fsubs    f3, f1, f0
	lfs      f1, 0x2d0(r3)
	lfs      f0, lbl_8051D400@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FD098
 * Size:	000038
 */
void DangoMushi::Obj::getSearchedTarget()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r6, 0
	lwz      r7, 0xc0(r3)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
	"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FD0D0
 * Size:	0002BC
 */
void DangoMushi::Obj::rollingMove()
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
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	bne      lbl_802FD134
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051D404@sda21(r2)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"

lbl_802FD134:
	cmplwi   r3, 0
	beq      lbl_802FD160
	mr       r4, r3
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x2c(r1)
	lfs      f28, 0x34(r1)
	b        lbl_802FD178

lbl_802FD160:
	lfs      f3, 0x18c(r31)
	lfs      f2, 0x1d4(r31)
	lfs      f1, 0x194(r31)
	lfs      f0, 0x1dc(r31)
	fadds    f29, f3, f2
	fadds    f28, f1, f0

lbl_802FD178:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f30, 0x86c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x844(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f28, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	fmuls    f31, f1, f31
	lfs      f0, lbl_8051D408@sda21(r2)
	lfs      f1, lbl_8051D3E4@sda21(r2)
	fmuls    f0, f0, f30
	fabs     f2, f31
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802FD22C
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802FD228
	fmr      f31, f1
	b        lbl_802FD22C

lbl_802FD228:
	fneg     f31, f1

lbl_802FD22C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f31, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f30, 0x81c(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f29, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f31, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f30, f29
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f30, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r0, 0x288(r31)
	cmplwi   r0, 0
	beq      lbl_802FD344
	lfs      f2, 0x1d0(r31)
	lfs      f0, 0x1c8(r31)
	lfs      f1, lbl_8051D3A8@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f0, f0, f0, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802FD2FC
	ble      lbl_802FD300
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802FD300

lbl_802FD2FC:
	fmr      f2, f1

lbl_802FD300:
	lfs      f0, lbl_8051D3BC@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802FD328
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051D40C@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2c4(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c4(r31)
	b        lbl_802FD358

lbl_802FD328:
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051D410@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2c4(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2c4(r31)
	b        lbl_802FD358

lbl_802FD344:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)

lbl_802FD358:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FD38C
 * Size:	0004E8
 */
void DangoMushi::Obj::createCrashEnemy()
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
	stmw     r23, 0x7c(r1)
	lwz      r6, lbl_8051D414@sda21(r2)
	mr       r25, r3
	lwz      r5, lbl_8051D418@sda21(r2)
	lwz      r4, lbl_8051D41C@sda21(r2)
	lwz      r0, lbl_8051D420@sda21(r2)
	stw      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	bl       getFallEggNum__Q34Game10DangoMushi3ObjFv
	stw      r3, 0xc(r1)
	addi     r30, r1, 0x10
	addi     r29, r1, 8
	li       r28, 0

lbl_802FD434:
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	lwz      r4, 0(r30)
	bl       getEnemyMgr__Q24Game15GeneralEnemyMgrFi
	or.      r27, r3, r3
	beq      lbl_802FD7EC
	mr       r4, r25
	mr       r5, r28
	addi     r3, r1, 0x18
	bl       getFallPosition__Q34Game10DangoMushi3ObjFi
	lfs      f28, 0x18(r1)
	lfs      f27, 0x1c(r1)
	lfs      f26, 0x20(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lis      r3, sincosTable___5JMath@ha
	lfs      f23, lbl_8051D3A8@sda21(r2)
	addi     r23, r3, sincosTable___5JMath@l
	stw      r0, 0x58(r1)
	li       r26, 0
	lfd      f1, lbl_8051D3F8@sda21(r2)
	fmr      f31, f23
	lfd      f0, 0x58(r1)
	fmr      f20, f23
	lfs      f3, lbl_8051D3E4@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f2, lbl_8051D3E0@sda21(r2)
	lfs      f1, lbl_8051D424@sda21(r2)
	lfs      f0, lbl_8051D428@sda21(r2)
	fmuls    f3, f3, f4
	lwz      r31, 0(r29)
	lfs      f30, lbl_8051D44C@sda21(r2)
	lfs      f21, lbl_8051D3EC@sda21(r2)
	fdivs    f29, f3, f2
	fadds    f25, f1, f29
	fadds    f24, f0, f29
	b        lbl_802FD7E4

lbl_802FD4CC:
	cmpwi    r26, 0
	bne      lbl_802FD50C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfd      f3, lbl_8051D3F8@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f1, lbl_8051D42C@sda21(r2)
	lfd      f2, 0x58(r1)
	lfs      f0, lbl_8051D3E0@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fdivs    f0, f1, f0
	fmr      f22, f0
	b        lbl_802FD6BC

lbl_802FD50C:
	cmpwi    r26, 4
	bge      lbl_802FD5A0
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x5c(r1)
	xoris    r0, r26, 0x8000
	lfd      f4, lbl_8051D3F8@sda21(r2)
	stw      r4, 0x58(r1)
	lfs      f0, lbl_8051D3B8@sda21(r2)
	lfd      f2, 0x58(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f3, f2, f4
	stw      r0, 0x64(r1)
	lfs      f2, lbl_8051D430@sda21(r2)
	stw      r4, 0x60(r1)
	fmuls    f3, f0, f3
	lfd      f0, 0x60(r1)
	fdivs    f3, f3, f1
	fsubs    f1, f0, f4
	fadds    f0, f29, f3
	fmadds   f23, f2, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	lfd      f3, lbl_8051D3F8@sda21(r2)
	stw      r0, 0x68(r1)
	lfs      f2, lbl_8051D42C@sda21(r2)
	lfd      f0, 0x68(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D434@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f22, f0, f1
	b        lbl_802FD6BC

lbl_802FD5A0:
	cmpwi    r26, 0xa
	bge      lbl_802FD634
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x6c(r1)
	xoris    r0, r26, 0x8000
	lfd      f4, lbl_8051D3F8@sda21(r2)
	stw      r4, 0x68(r1)
	lfs      f0, lbl_8051D424@sda21(r2)
	lfd      f2, 0x68(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f3, f2, f4
	stw      r0, 0x64(r1)
	lfs      f2, lbl_8051D438@sda21(r2)
	stw      r4, 0x60(r1)
	fmuls    f3, f0, f3
	lfd      f0, 0x60(r1)
	fdivs    f3, f3, f1
	fsubs    f1, f0, f4
	fadds    f0, f25, f3
	fmadds   f23, f2, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfd      f3, lbl_8051D3F8@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f2, lbl_8051D42C@sda21(r2)
	lfd      f0, 0x58(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D43C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f22, f0, f1
	b        lbl_802FD6BC

lbl_802FD634:
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x6c(r1)
	xoris    r0, r26, 0x8000
	lfd      f4, lbl_8051D3F8@sda21(r2)
	stw      r4, 0x68(r1)
	lfs      f0, lbl_8051D440@sda21(r2)
	lfd      f2, 0x68(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f3, f2, f4
	stw      r0, 0x64(r1)
	lfs      f2, lbl_8051D444@sda21(r2)
	stw      r4, 0x60(r1)
	fmuls    f3, f0, f3
	lfd      f0, 0x60(r1)
	fdivs    f3, f3, f1
	fsubs    f1, f0, f4
	fadds    f0, f24, f3
	fmadds   f23, f2, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfd      f3, lbl_8051D3F8@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f2, lbl_8051D42C@sda21(r2)
	lfd      f0, 0x58(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051D448@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fadds    f22, f0, f1

lbl_802FD6BC:
	fcmpo    cr0, f23, f30
	ble      lbl_802FD6C8
	fsubs    f23, f23, f30

lbl_802FD6C8:
	addi     r3, r1, 0x24
	bl       __ct__Q24Game13EnemyBirthArgFv
	lwz      r0, 0(r30)
	fcmpo    cr0, f23, f31
	stw      r0, 0x4c(r1)
	lfs      f0, 0x1fc(r25)
	stfs     f0, 0x30(r1)
	bge      lbl_802FD714
	lfs      f0, lbl_8051D3F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f23, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802FD738

lbl_802FD714:
	lfs      f0, lbl_8051D3EC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f23, f0
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802FD738:
	fmadds   f0, f22, f0, f28
	stfs     f27, 0x28(r1)
	fmr      f1, f23
	fcmpo    cr0, f23, f20
	stfs     f0, 0x24(r1)
	bge      lbl_802FD754
	fneg     f1, f23

lbl_802FD754:
	fmuls    f0, f1, f21
	lwz      r0, 0(r30)
	cmpwi    r0, 0x25
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r23, r0
	lfs      f0, 4(r3)
	fmadds   f0, f22, f0, f26
	stfs     f0, 0x2c(r1)
	bne      lbl_802FD790
	li       r0, 1
	stb      r0, 0x34(r1)
	b        lbl_802FD798

lbl_802FD790:
	lfs      f0, lbl_8051D3B0@sda21(r2)
	stfs     f0, 0x50(r1)

lbl_802FD798:
	mr       r3, r27
	addi     r4, r1, 0x24
	lwz      r12, 0(r27)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	or.      r24, r3, r3
	beq      lbl_802FD7E0
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lwz      r0, 0x1e0(r24)
	lfs      f0, lbl_8051D450@sda21(r2)
	rlwinm   r0, r0, 0, 0x1a, 0x18
	stw      r0, 0x1e0(r24)
	lwz      r3, 0xc0(r24)
	stfs     f0, 0x3ac(r3)
	lwz      r3, 0xc0(r24)
	stfs     f0, 0x3d4(r3)

lbl_802FD7E0:
	addi     r26, r26, 1

lbl_802FD7E4:
	cmpw     r26, r31
	blt      lbl_802FD4CC

lbl_802FD7EC:
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 2
	addi     r30, r30, 4
	blt      lbl_802FD434
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
	lmw      r23, 0x7c(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FD874
 * Size:	0000EC
 */
void DangoMushi::Obj::getFallEggNum()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lwz      r0, 0x20(r3)
	lfd      f1, lbl_8051D3F8@sda21(r2)
	xoris    r0, r0, 0x8000
	lfs      f30, lbl_8051D3A8@sda21(r2)
	stw      r0, 0xc(r1)
	lwz      r3, naviMgr__4Game@sda21(r13)
	lfd      f0, 8(r1)
	fsubs    f31, f0, f1
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	beq      lbl_802FD8EC
	lwz      r3, 0x254(r3)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lwz      r0, 0xbc(r3)
	lfd      f1, lbl_8051D3F8@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f30, f0, f1

lbl_802FD8EC:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802FD93C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	fdivs    f0, f30, f31
	lfd      f4, lbl_8051D3F8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f2, lbl_8051D3B8@sda21(r2)
	lfd      f3, 0x10(r1)
	lfs      f1, lbl_8051D3E0@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FD93C
	li       r3, 1
	b        lbl_802FD940

lbl_802FD93C:
	li       r3, 0

lbl_802FD940:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f30, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FD960
 * Size:	000104
 */
void DangoMushi::Obj::getFallPosition(int)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r31, r4
	cmpwi    r5, 0
	lfs      f31, 0x198(r4)
	mr       r30, r3
	lfs      f30, 0x19c(r4)
	lfs      f29, 0x1a0(r4)
	bne      lbl_802FDA28
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	beq      lbl_802FD9E0
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x14(r1)
	lfs      f30, 0x18(r1)
	lfs      f29, 0x1c(r1)
	b        lbl_802FDA28

lbl_802FD9E0:
	lfs      f1, lbl_8051D404@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_8051D454@sda21(r2)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802FDA28
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 8(r1)
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)

lbl_802FDA28:
	stfs     f31, 0(r30)
	stfs     f30, 4(r30)
	stfs     f29, 8(r30)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FDA64
 * Size:	000038
 */
void DangoMushi::Obj::setupCollision()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x68615230@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x68615230@l
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_802FDA8C
	bl       makeTubeTree__8CollPartFv

lbl_802FDA8C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FDA9C
 * Size:	000444
 */
void DangoMushi::Obj::setBodyCollision(bool)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stmw     r25, 0x84(r1)
	lwz      r5, lbl_8051D458@sda21(r2)
	mr       r25, r4
	lwz      r0, lbl_8051D45C@sda21(r2)
	mr       r31, r3
	stw      r5, 8(r1)
	addi     r27, r1, 8
	clrlwi   r28, r4, 0x18
	li       r26, 0
	stw      r0, 0xc(r1)
	lis      r29, 0x5f74
	lis      r30, 0x7374

lbl_802FDAF0:
	lwz      r3, 0x114(r31)
	lwz      r4, 0(r27)
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_802FDB1C
	cmplwi   r28, 0
	beq      lbl_802FDB1C
	addi     r3, r3, 0x3c
	addi     r4, r29, 0x5f5f
	bl       __as__4ID32FUl
	b        lbl_802FDB28

lbl_802FDB1C:
	addi     r3, r3, 0x3c
	addi     r4, r30, 0x5f5f
	bl       __as__4ID32FUl

lbl_802FDB28:
	addi     r26, r26, 1
	addi     r27, r27, 4
	cmpwi    r26, 2
	blt      lbl_802FDAF0
	clrlwi.  r0, r25, 0x18
	beq      lbl_802FDEB4
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 0
	beq      lbl_802FDEB4
	lfs      f0, 0x200(r31)
	lfs      f1, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	beq      lbl_802FDEB4
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051D3E4@sda21(r2)
	fcmpo    cr0, f3, f1
	lfs      f2, lbl_8051D460@sda21(r2)
	fadds    f31, f0, f3
	bge      lbl_802FDBA4
	lfs      f0, lbl_8051D3F0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f1, f0
	b        lbl_802FDBC8

lbl_802FDBA4:
	lfs      f0, lbl_8051D3EC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r3, r0

lbl_802FDBC8:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fmuls    f30, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_802FDBDC
	fneg     f3, f3

lbl_802FDBDC:
	lfs      f0, lbl_8051D3EC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r5, r3, sincosTable___5JMath@l
	lfs      f1, lbl_8051D460@sda21(r2)
	fmuls    f0, f3, f0
	mr       r4, r31
	addi     r3, r1, 0x4c
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r5, r5, r0
	lfs      f0, 4(r5)
	fmuls    f29, f1, f0
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x4c
	cmplwi   r0, 0
	stw      r4, 0x10(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_802FDC58
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_802FDE88

lbl_802FDC58:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_802FDCC4

lbl_802FDC70:
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
	bne      lbl_802FDE88
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_802FDCC4:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FDC70
	b        lbl_802FDE88

lbl_802FDCE4:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FDDCC
	lbz      r0, 0x2b8(r28)
	cmpwi    r0, 3
	bne      lbl_802FDD70
	lwz      r6, 0xc0(r31)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game13InteractFlick@ha
	mr       r3, r28
	lfs      f1, 0x4ec(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	lfs      f0, 0x4c4(r6)
	addi     r0, r4, __vt__Q24Game13InteractFlick@l
	addi     r4, r1, 0x38
	stw      r5, 0x38(r1)
	stw      r31, 0x3c(r1)
	stw      r0, 0x38(r1)
	stfs     f0, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f31, 0x48(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802FDDCC

lbl_802FDD70:
	lwz      r6, 0xc0(r31)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lis      r3, __vt__Q24Game20InteractHanaChirashi@ha
	lfs      f1, 0x604(r6)
	addi     r0, r5, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051D460@sda21(r2)
	addi     r5, r4, __vt__Q24Game12InteractWind@l
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q24Game20InteractHanaChirashi@l
	mr       r3, r28
	addi     r4, r1, 0x20
	stw      r5, 0x20(r1)
	stw      r31, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f30, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f29, 0x34(r1)
	stw      r0, 0x20(r1)
	lwz      r12, 0(r28)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802FDDCC:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_802FDDF8
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_802FDE88

lbl_802FDDF8:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_802FDE6C

lbl_802FDE18:
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
	bne      lbl_802FDE88
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_802FDE6C:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FDE18

lbl_802FDE88:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_802FDCE4
	addi     r3, r1, 0x4c
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_802FDEB4:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lmw      r25, 0x84(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FDEE0
 * Size:	0002AC
 */
void DangoMushi::Obj::flickHandCollision(Game::Creature*)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	mr       r31, r4
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lfs      f31, 8(r1)
	lwz      r12, 0(r31)
	lfs      f30, 0x10(r1)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FE00C
	lfs      f1, 0x18c(r30)
	lfs      f0, 0x194(r30)
	fsubs    f31, f31, f1
	lfs      f1, lbl_8051D3A8@sda21(r2)
	fsubs    f30, f30, f0
	fmadds   f0, f31, f31, f1
	fmuls    f2, f30, f30
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802FDF7C
	ble      lbl_802FDF80
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802FDF80

lbl_802FDF7C:
	fmr      f2, f1

lbl_802FDF80:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802FDF9C
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0

lbl_802FDF9C:
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_8051D464@sda21(r2)
	lis      r3, __vt__Q24Game12InteractWind@ha
	lfs      f1, 0x604(r5)
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lfs      f2, lbl_8051D3B8@sda21(r2)
	fmuls    f31, f31, f0
	stw      r0, 0x40(r1)
	fmuls    f30, f30, f0
	fmuls    f2, f2, f0
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	lis      r3, __vt__Q24Game20InteractHanaChirashi@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q24Game20InteractHanaChirashi@l
	mr       r3, r31
	stw      r30, 0x44(r1)
	addi     r4, r1, 0x40
	stfs     f1, 0x48(r1)
	stfs     f31, 0x4c(r1)
	stfs     f2, 0x50(r1)
	stfs     f30, 0x54(r1)
	stw      r0, 0x40(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802FE164

lbl_802FE00C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FE164
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 3
	bne      lbl_802FE0A0
	lfs      f1, 0x18c(r30)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x194(r30)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f1, f31
	fsubs    f2, f0, f30
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r6, 0xc0(r30)
	lis      r5, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game13InteractFlick@ha
	mr       r3, r31
	lfs      f2, 0x4ec(r6)
	addi     r5, r5, __vt__Q24Game11Interaction@l
	lfs      f0, 0x4c4(r6)
	addi     r0, r4, __vt__Q24Game13InteractFlick@l
	addi     r4, r1, 0x2c
	stw      r5, 0x2c(r1)
	stw      r30, 0x30(r1)
	stw      r0, 0x2c(r1)
	stfs     f0, 0x34(r1)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_802FE164

lbl_802FE0A0:
	lfs      f1, 0x18c(r30)
	lfs      f0, 0x194(r30)
	fsubs    f31, f31, f1
	lfs      f1, lbl_8051D3A8@sda21(r2)
	fsubs    f30, f30, f0
	fmadds   f0, f31, f31, f1
	fmuls    f2, f30, f30
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802FE0D8
	ble      lbl_802FE0DC
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_802FE0DC

lbl_802FE0D8:
	fmr      f2, f1

lbl_802FE0DC:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_802FE0F8
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0

lbl_802FE0F8:
	lwz      r5, 0xc0(r30)
	lis      r4, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_8051D464@sda21(r2)
	lis      r3, __vt__Q24Game12InteractWind@ha
	lfs      f1, 0x604(r5)
	addi     r0, r4, __vt__Q24Game11Interaction@l
	lfs      f2, lbl_8051D3B8@sda21(r2)
	fmuls    f31, f31, f0
	stw      r0, 0x14(r1)
	fmuls    f30, f30, f0
	fmuls    f2, f2, f0
	addi     r0, r3, __vt__Q24Game12InteractWind@l
	lis      r3, __vt__Q24Game20InteractHanaChirashi@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q24Game20InteractHanaChirashi@l
	mr       r3, r31
	stw      r30, 0x18(r1)
	addi     r4, r1, 0x14
	stfs     f1, 0x1c(r1)
	stfs     f31, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f30, 0x28(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802FE164:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FE18C
 * Size:	000058
 */
void DangoMushi::Obj::isNoDamageCollision()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x626F6430@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x626F6430@l
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_802FE1D0
	lis      r4, 0x73745F5F@ha
	addi     r3, r3, 0x3c
	addi     r4, r4, 0x73745F5F@l
	bl       __eq__4ID32FUl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FE1D0
	li       r3, 0
	b        lbl_802FE1D4

lbl_802FE1D0:
	li       r3, 1

lbl_802FE1D4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FE1E4
 * Size:	00002C
 */
void DangoMushi::Obj::resetMapCollisionSize(bool)
{
	/*
	clrlwi.  r0, r4, 0x18
	stb      r4, 0x2c2(r3)
	beq      lbl_802FE200
	lfs      f0, lbl_8051D3AC@sda21(r2)
	lwz      r3, 0xc0(r3)
	stfs     f0, 0x1a4(r3)
	blr

lbl_802FE200:
	lfs      f0, lbl_8051D468@sda21(r2)
	lwz      r3, 0xc0(r3)
	stfs     f0, 0x1a4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FE210
 * Size:	00008C
 */
void DangoMushi::Obj::updateMapCollisionSize()
{
	/*
	lbz      r0, 0x2c2(r3)
	cmplwi   r0, 0
	beq      lbl_802FE25C
	lwz      r5, 0xc0(r3)
	lfs      f2, lbl_8051D3AC@sda21(r2)
	lfs      f3, 0x1a4(r5)
	fcmpo    cr0, f3, f2
	blelr
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051D46C@sda21(r2)
	lfs      f0, 0x54(r4)
	fnmsubs  f0, f1, f0, f3
	stfs     f0, 0x1a4(r5)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x1a4(r3)
	fcmpo    cr0, f0, f2
	bgelr
	stfs     f2, 0x1a4(r3)
	blr

lbl_802FE25C:
	lwz      r5, 0xc0(r3)
	lfs      f2, lbl_8051D468@sda21(r2)
	lfs      f3, 0x1a4(r5)
	fcmpo    cr0, f3, f2
	bgelr
	lwz      r4, sys@sda21(r13)
	lfs      f1, lbl_8051D46C@sda21(r2)
	lfs      f0, 0x54(r4)
	fmadds   f0, f1, f0, f3
	stfs     f0, 0x1a4(r5)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x1a4(r3)
	fcmpo    cr0, f0, f2
	blelr
	stfs     f2, 0x1a4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FE29C
 * Size:	0003AC
 */
void DangoMushi::Obj::flickHandCollision()
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
	stfd     f19, 0x90(r1)
	psq_st   f19, 152(r1), 0, qr0
	stfd     f18, 0x80(r1)
	psq_st   f18, 136(r1), 0, qr0
	stfd     f17, 0x70(r1)
	psq_st   f17, 120(r1), 0, qr0
	stfd     f16, 0x60(r1)
	psq_st   f16, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	lbz      r0, 0x2c1(r3)
	cmplwi   r0, 0
	beq      lbl_802FE5A4
	lwz      r3, 0x174(r3)
	addi     r4, r2, lbl_8051D488@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f30, 0x10(r3)
	lfs      f29, 0x20(r3)
	fmuls    f0, f30, f30
	lfs      f31, 0(r3)
	lwz      r8, lbl_8051D470@sda21(r2)
	fmuls    f1, f29, f29
	lwz      r7, lbl_8051D474@sda21(r2)
	fmadds   f0, f31, f31, f0
	lwz      r6, lbl_8051D478@sda21(r2)
	lwz      r5, lbl_8051D47C@sda21(r2)
	fadds    f1, f1, f0
	lfs      f0, lbl_8051D3A8@sda21(r2)
	lwz      r4, lbl_8051D480@sda21(r2)
	lwz      r0, lbl_8051D484@sda21(r2)
	fcmpo    cr0, f1, f0
	stw      r8, 0x18(r1)
	lfs      f28, 4(r3)
	stw      r7, 0x1c(r1)
	lfs      f27, 0x14(r3)
	stw      r6, 0x10(r1)
	lfs      f26, 0x24(r3)
	stw      r5, 0x14(r1)
	lfs      f25, 8(r3)
	stw      r4, 8(r1)
	lfs      f24, 0x18(r3)
	stw      r0, 0xc(r1)
	lfs      f23, 0x28(r3)
	lfs      f22, 0xc(r3)
	lfs      f21, 0x1c(r3)
	lfs      f20, 0x2c(r3)
	ble      lbl_802FE3E0
	ble      lbl_802FE3E4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802FE3E4

lbl_802FE3E0:
	fmr      f1, f0

lbl_802FE3E4:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FE404
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0

lbl_802FE404:
	fmuls    f1, f27, f27
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fmuls    f2, f26, f26
	fmadds   f1, f28, f28, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802FE430
	ble      lbl_802FE434
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802FE434

lbl_802FE430:
	fmr      f1, f0

lbl_802FE434:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FE454
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0

lbl_802FE454:
	fmuls    f1, f24, f24
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fmuls    f2, f23, f23
	fmadds   f1, f25, f25, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802FE480
	ble      lbl_802FE484
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802FE484

lbl_802FE480:
	fmr      f1, f0

lbl_802FE484:
	lfs      f0, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FE4A4
	lfs      f0, lbl_8051D3B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f25, f25, f0
	fmuls    f24, f24, f0
	fmuls    f23, f23, f0

lbl_802FE4A4:
	lfs      f16, lbl_8051D490@sda21(r2)
	addi     r31, r1, 0x18
	lfs      f17, lbl_8051D494@sda21(r2)
	addi     r30, r1, 0x10
	lfs      f18, lbl_8051D3A8@sda21(r2)
	addi     r29, r1, 8
	lfs      f19, lbl_8051D3B8@sda21(r2)
	li       r28, 0

lbl_802FE4C4:
	lfs      f0, 0(r31)
	li       r5, 0
	lfs      f1, 0(r30)
	li       r0, 1
	fmuls    f3, f31, f0
	lfs      f2, 0(r29)
	fmuls    f4, f30, f0
	stb      r0, 0x2c(r1)
	fmuls    f0, f29, f0
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f5, f28, f1
	stw      r5, 0x34(r1)
	fadds    f22, f22, f3
	addi     r4, r1, 0x20
	fmuls    f3, f27, f1
	stfs     f16, 0x38(r1)
	fadds    f21, f21, f4
	stfs     f17, 0x3c(r1)
	fmuls    f1, f26, f1
	fadds    f20, f20, f0
	stw      r5, 0x30(r1)
	fmuls    f0, f25, f2
	fadds    f22, f22, f5
	stfs     f18, 0x40(r1)
	fmuls    f4, f24, f2
	fadds    f21, f21, f3
	stfs     f19, 0x44(r1)
	fadds    f22, f22, f0
	fmuls    f0, f23, f2
	stfs     f18, 0x48(r1)
	fadds    f20, f20, f1
	fadds    f21, f21, f4
	stb      r5, 0x2d(r1)
	fadds    f20, f20, f0
	stfs     f22, 0x20(r1)
	stfs     f21, 0x24(r1)
	stfs     f20, 0x28(r1)
	stb      r5, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	beq      lbl_802FE584
	lfs      f0, 0x3c(r1)
	fcmpo    cr0, f0, f21
	ble      lbl_802FE58C

lbl_802FE584:
	li       r3, 1
	b        lbl_802FE5A8

lbl_802FE58C:
	addi     r28, r28, 1
	addi     r30, r30, 4
	cmpwi    r28, 2
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_802FE4C4

lbl_802FE5A4:
	li       r3, 0

lbl_802FE5A8:
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
	psq_l    f19, 152(r1), 0, qr0
	lfd      f19, 0x90(r1)
	psq_l    f18, 136(r1), 0, qr0
	lfd      f18, 0x80(r1)
	psq_l    f17, 120(r1), 0, qr0
	lfd      f17, 0x70(r1)
	psq_l    f16, 104(r1), 0, qr0
	lfd      f16, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r0, 0x164(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FE648
 * Size:	00011C
 */
void DangoMushi::Obj::startBlendAnimation(int, bool)
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
	clrlwi.  r0, r5, 0x18
	mr       r29, r3
	mr       r30, r4
	beq      lbl_802FE738
	lwz      r3, 0x184(r29)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r3)
	mr       r31, r3
	cmplwi   r4, 0
	beq      lbl_802FE6C8
	lwz      r3, 0x18(r4)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lha      r0, 6(r3)
	lfd      f1, lbl_8051D3F8@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f1, f0, f1
	b        lbl_802FE6CC

lbl_802FE6C8:
	lfs      f1, lbl_8051D3A8@sda21(r2)

lbl_802FE6CC:
	lfs      f0, lbl_8051D3B8@sda21(r2)
	lfs      f31, 8(r31)
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_802FE724
	cmplwi   r4, 0
	beq      lbl_802FE6F0
	lha      r4, 0x20(r4)
	b        lbl_802FE6F4

lbl_802FE6F0:
	li       r4, -1

lbl_802FE6F4:
	cmpw     r30, r4
	beq      lbl_802FE740
	lfs      f1, lbl_8051D3B0@sda21(r2)
	mr       r3, r29
	mr       r5, r30
	addi     r6, r13, sBlendLinearFun__Q24Game22EnemyBlendAnimatorBase@sda21
	li       r7, 0
	bl
startBlend__Q24Game9EnemyBaseFiiPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
	fmr      f1, f31
	mr       r3, r31
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	b        lbl_802FE740

lbl_802FE724:
	mr       r3, r29
	mr       r4, r30
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_802FE740

lbl_802FE738:
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_802FE740:
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
 * Address:	802FE764
 * Size:	000098
 */
void DangoMushi::Obj::endBlendAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r4, 1
	lwz      r3, 0x184(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_802FE7B0
	lha      r31, 0x20(r4)
	b        lbl_802FE7B4

lbl_802FE7B0:
	li       r31, -1

lbl_802FE7B4:
	lfs      f31, 8(r3)
	mr       r3, r30
	bl       endBlend__Q24Game9EnemyBaseFv
	mr       r3, r30
	mr       r4, r31
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	fmr      f1, f31
	mr       r3, r30
	bl       setMotionFrame__Q24Game9EnemyBaseFf
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FE7FC
 * Size:	0000C8
 */
void DangoMushi::Obj::startBossFlickBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802FE86C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802FE86C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802FE870

lbl_802FE86C:
	li       r31, 1

lbl_802FE870:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802FE894
	lis      r3, lbl_8048D7EC@ha
	lis      r5, lbl_8048D804@ha
	addi     r3, r3, lbl_8048D7EC@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048D804@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802FE894:
	mr       r3, r30
	li       r4, 4
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
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
 * Address:	802FE8C4
 * Size:	0000C8
 */
void DangoMushi::Obj::startBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802FE934
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802FE934
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802FE938

lbl_802FE934:
	li       r31, 1

lbl_802FE938:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802FE95C
	lis      r3, lbl_8048D7EC@ha
	lis      r5, lbl_8048D804@ha
	addi     r3, r3, lbl_8048D7EC@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048D804@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802FE95C:
	mr       r3, r30
	li       r4, 8
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
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
 * Address:	802FE98C
 * Size:	0000C8
 */
void DangoMushi::Obj::finishBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802FE9FC
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802FE9FC
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802FEA00

lbl_802FE9FC:
	li       r31, 1

lbl_802FEA00:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802FEA24
	lis      r3, lbl_8048D7EC@ha
	lis      r5, lbl_8048D804@ha
	addi     r3, r3, lbl_8048D7EC@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048D804@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802FEA24:
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
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
 * Address:	802FEA54
 * Size:	0000FC
 */
void DangoMushi::Obj::updateBossBGM()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802FEACC
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802FEACC
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802FEAD0

lbl_802FEACC:
	li       r31, 1

lbl_802FEAD0:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802FEAF4
	lis      r3, lbl_8048D7EC@ha
	lis      r5, lbl_8048D804@ha
	addi     r3, r3, lbl_8048D7EC@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048D804@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802FEAF4:
	lwz      r0, 0x1f4(r29)
	cmpwi    r0, 0
	beq      lbl_802FEB1C
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_802FEB34

lbl_802FEB1C:
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_802FEB34:
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
 * Address:	802FEB50
 * Size:	0000BC
 */
void DangoMushi::Obj::resetBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802FEBC0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802FEBC0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802FEBC4

lbl_802FEBC0:
	li       r31, 1

lbl_802FEBC4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802FEBE8
	lis      r3, lbl_8048D7EC@ha
	lis      r5, lbl_8048D804@ha
	addi     r3, r3, lbl_8048D7EC@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048D804@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802FEBE8:
	mr       r3, r30
	li       r4, 0
	bl       setAppearFlag__Q23PSM9EnemyBossFb
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
 * Address:	802FEC0C
 * Size:	0000BC
 */
void DangoMushi::Obj::setBossAppearBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802FEC7C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802FEC7C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802FEC80

lbl_802FEC7C:
	li       r31, 1

lbl_802FEC80:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802FECA4
	lis      r3, lbl_8048D7EC@ha
	lis      r5, lbl_8048D804@ha
	addi     r3, r3, lbl_8048D7EC@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048D804@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802FECA4:
	mr       r3, r30
	li       r4, 1
	bl       setAppearFlag__Q23PSM9EnemyBossFb
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
 * Address:	802FECC8
 * Size:	000170
 */
void DangoMushi::Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	stw      r30, 8(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802FED64
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
	lis      r4, __vt__Q23efx15TDangoWallBreak@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx15TDangoWallBreak@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x2ad
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

lbl_802FED64:
	stw      r3, 0x2f4(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802FEDEC
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
	lis      r4, __vt__Q23efx13TDangoAttack2@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx13TDangoAttack2@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0x2a2
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

lbl_802FEDEC:
	stw      r3, 0x2f8(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802FEE1C
	li       r4, 0
	li       r5, 0x2a9
	li       r6, 0x2aa
	bl       "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
	lis      r3, __vt__Q23efx9TDangoRun@ha
	addi     r0, r3, __vt__Q23efx9TDangoRun@l
	stw      r0, 0(r30)

lbl_802FEE1C:
	stw      r30, 0x2fc(r31)
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
 * Address:	802FEE38
 * Size:	000064
 */
void DangoMushi::Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051D488@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x2f4(r31)
	addi     r4, r2, lbl_8051D498@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x2f8(r31)
	addi     r4, r31, 0x18c
	stw      r3, 0x10(r5)
	lwz      r3, 0x2fc(r31)
	bl       "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FEE9C
 * Size:	00007C
 */
void DangoMushi::Obj::createDeadSmokeEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r2, lbl_8051D4A0@sda21
	stw      r0, 0x24(r1)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx15TDangoDeadSmoke@ha
	li       r7, 0x2a8
	stw      r0, 8(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx15TDangoDeadSmoke@l
	stw      r5, 8(r1)
	li       r4, 0
	stw      r3, 0x14(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FEF18
 * Size:	000088
 */
void DangoMushi::Obj::createDeadBombEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r2, lbl_8051D4A0@sda21
	stw      r0, 0x24(r1)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx10TDangoDead@ha
	stw      r0, 8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x2a6
	li       r5, 0x2a7
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx10TDangoDead@l
	li       r4, 0
	stw      r3, 0x18(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	sth      r5, 0xe(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FEFA0
 * Size:	0000A0
 */
void DangoMushi::Obj::createBodyTurnEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__Q23efx5TBase@ha
	li       r8, 0
	stw      r0, 0x34(r1)
	addi     r0, r4, __vt__Q23efx5TBase@l
	li       r5, 0x2ab
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx10TDangoTurn@ha
	stw      r0, 8(r1)
	addi     r7, r4, __vt__Q23efx10TDangoTurn@l
	li       r0, 0x2ac
	lis      r4, __vt__Q23efx3Arg@ha
	sth      r5, 0xc(r1)
	addi     r6, r4, __vt__Q23efx3Arg@l
	lis      r5, __vt__Q23efx7ArgRotY@ha
	addi     r4, r1, 0x18
	sth      r0, 0xe(r1)
	addi     r0, r5, __vt__Q23efx7ArgRotY@l
	stw      r8, 0x10(r1)
	stw      r8, 0x14(r1)
	stw      r7, 8(r1)
	lfs      f1, 0x1fc(r3)
	stw      r6, 0x18(r1)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x194(r3)
	addi     r3, r1, 8
	stfs     f0, 0x24(r1)
	stw      r0, 0x18(r1)
	stfs     f1, 0x28(r1)
	bl       create__Q23efx10TDangoTurnFPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF040
 * Size:	000054
 */
void DangoMushi::Obj::createWallBreakEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
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
 * Address:	802FF094
 * Size:	000034
 */
void DangoMushi::Obj::createFlickAttackEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f8(r3)
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
 * Address:	802FF0C8
 * Size:	00007C
 */
void DangoMushi::Obj::createBodyDamageEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r2, lbl_8051D4A0@sda21
	stw      r0, 0x24(r1)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx12TDangoDamage@ha
	li       r7, 0x2a5
	stw      r0, 8(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx12TDangoDamage@l
	stw      r5, 8(r1)
	li       r4, 0
	stw      r3, 0x14(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF144
 * Size:	0000CC
 */
void DangoMushi::Obj::createBodyWallCrashEffect(Vector3f)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	lfs      f1, 0(r4)
	stw      r0, 0x44(r1)
	lis      r6, __vt__Q23efx5TBase@ha
	lfs      f0, lbl_8051D3AC@sda21(r2)
	addi     r0, r6, __vt__Q23efx5TBase@l
	lfs      f2, 8(r4)
	lis      r6, __vt__Q23efx11TDangoCrash@ha
	fmuls    f1, f1, f0
	lfs      f3, 0x18c(r3)
	fmuls    f2, f2, f0
	lfs      f4, 0x194(r3)
	lfs      f5, 0x190(r3)
	addi     r5, r5, __vt__Q23efx3Arg@l
	fsubs    f3, f3, f1
	li       r7, 0
	fsubs    f4, f4, f2
	lfs      f2, 0(r4)
	lfs      f1, 4(r4)
	li       r9, 0x2a3
	lfs      f0, 8(r4)
	li       r8, 0x2a4
	lis      r10, __vt__Q23efx8TSimple2@ha
	stw      r0, 8(r1)
	addi     r0, r10, __vt__Q23efx8TSimple2@l
	lis      r3, __vt__Q23efx6ArgDir@ha
	stw      r0, 8(r1)
	addi     r6, r6, __vt__Q23efx11TDangoCrash@l
	addi     r0, r3, __vt__Q23efx6ArgDir@l
	addi     r3, r1, 8
	stw      r5, 0x18(r1)
	addi     r4, r1, 0x18
	sth      r9, 0xc(r1)
	sth      r8, 0xe(r1)
	stw      r7, 0x10(r1)
	stw      r7, 0x14(r1)
	stw      r6, 8(r1)
	stfs     f3, 0x1c(r1)
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stw      r0, 0x18(r1)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	bl       create__Q23efx11TDangoCrashFPQ23efx3Arg
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF210
 * Size:	000034
 */
void DangoMushi::Obj::startRollingMoveEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2fc(r3)
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
 * Address:	802FF244
 * Size:	000030
 */
void DangoMushi::Obj::finishRollingMoveEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2fc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
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
 * Address:	802FF274
 * Size:	000044
 */
void DangoMushi::Obj::createEnemyBounceEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x2ec(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r31, 0x18c
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF2B8
 * Size:	000008
 */
void DangoMushi::Obj::getDownSmokeScale()
{
	/*
	lfs      f1, lbl_8051D4A8@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF2C0
 * Size:	0001E8
 */
void DangoMushi::Obj::createMoveHandEffect()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	beq      lbl_802FF2E8
	cmpwi    r3, 5
	bne      lbl_802FF494

lbl_802FF2E8:
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051D488@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0x10(r3)
	lfs      f1, 0x20(r3)
	fmuls    f4, f0, f0
	lfs      f9, 0(r3)
	lfs      f2, 4(r3)
	fmuls    f7, f1, f1
	lfs      f3, 0x14(r3)
	fmadds   f5, f9, f9, f4
	lfs      f4, 0x24(r3)
	lfs      f6, 0xc(r3)
	fadds    f7, f7, f5
	lfs      f5, lbl_8051D3A8@sda21(r2)
	stfs     f6, 8(r1)
	lfs      f6, 0x1c(r3)
	fcmpo    cr0, f7, f5
	stfs     f6, 0xc(r1)
	lfs      f6, 0x2c(r3)
	stfs     f6, 0x10(r1)
	ble      lbl_802FF354
	ble      lbl_802FF358
	frsqrte  f5, f7
	fmuls    f7, f5, f7
	b        lbl_802FF358

lbl_802FF354:
	fmr      f7, f5

lbl_802FF358:
	lfs      f5, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f7, f5
	ble      lbl_802FF378
	lfs      f5, lbl_8051D3B8@sda21(r2)
	fdivs    f5, f5, f7
	fmuls    f9, f9, f5
	fmuls    f0, f0, f5
	fmuls    f1, f1, f5

lbl_802FF378:
	fmuls    f6, f3, f3
	lfs      f5, lbl_8051D3A8@sda21(r2)
	fmuls    f7, f4, f4
	fmadds   f6, f2, f2, f6
	fadds    f6, f7, f6
	fcmpo    cr0, f6, f5
	ble      lbl_802FF3A4
	ble      lbl_802FF3A8
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_802FF3A8

lbl_802FF3A4:
	fmr      f6, f5

lbl_802FF3A8:
	lfs      f5, lbl_8051D3A8@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_802FF3C8
	lfs      f5, lbl_8051D3B8@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f2, f2, f5
	fmuls    f3, f3, f5
	fmuls    f4, f4, f5

lbl_802FF3C8:
	lfs      f5, lbl_8051D4AC@sda21(r2)
	addi     r4, r1, 8
	lfs      f8, lbl_8051D4B0@sda21(r2)
	fmuls    f9, f9, f5
	lfs      f7, 8(r1)
	fmuls    f0, f0, f5
	lfs      f6, 0xc(r1)
	fmuls    f1, f1, f5
	lfs      f5, 0x10(r1)
	fadds    f7, f7, f9
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmuls    f2, f2, f8
	fadds    f6, f6, f0
	fmuls    f3, f3, f8
	stfs     f7, 8(r1)
	fadds    f0, f5, f1
	fmuls    f4, f4, f8
	stfs     f6, 0xc(r1)
	fadds    f2, f7, f2
	fadds    f1, f6, f3
	stfs     f0, 0x10(r1)
	fadds    f0, f0, f4
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lbz      r0, 0x2c3(r31)
	fsubs    f1, f0, f1
	cmplwi   r0, 0
	beq      lbl_802FF468
	lfs      f0, lbl_8051D3B0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FF494
	li       r0, 0
	stb      r0, 0x2c3(r31)
	b        lbl_802FF494

lbl_802FF468:
	lfs      f0, lbl_8051D4B4@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802FF494
	li       r0, 1
	lfs      f1, lbl_8051D4B8@sda21(r2)
	stb      r0, 0x2c3(r31)
	mr       r3, r31
	addi     r4, r1, 8
	lfs      f0, 0x190(r31)
	stfs     f0, 0xc(r1)
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"

lbl_802FF494:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF4A8
 * Size:	000098
 */
void DangoMushi::Obj::createAppearSmokeEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, __vt__Q23efx9TDangoFly@ha
	lis      r4, __vt__Q23efx5TBase@ha
	stw      r0, 0x34(r1)
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	li       r8, 0x2b2
	lis      r4, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx8TSimple3@l
	li       r7, 0x2b3
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x18(r1)
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r5, r5, __vt__Q23efx9TDangoFly@l
	li       r4, 0x2b1
	sth      r8, 0x1e(r1)
	sth      r4, 0x1c(r1)
	addi     r4, r1, 8
	sth      r7, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r6, 0x28(r1)
	stw      r6, 0x2c(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	lfs      f0, 0x18c(r3)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x194(r3)
	addi     r3, r1, 0x18
	stfs     f0, 0x14(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF540
 * Size:	000064
 */
void DangoMushi::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2fc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
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
 * Address:	802FF5A4
 * Size:	000064
 */
void DangoMushi::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2fc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	802FF608
 * Size:	00009C
 */
TDangoAttack2::~TDangoAttack2()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802FF688
	lis      r3, __vt__Q23efx13TDangoAttack2@ha
	addi     r3, r3, __vt__Q23efx13TDangoAttack2@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802FF678
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802FF678
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802FF678:
	extsh.   r0, r31
	ble      lbl_802FF688
	mr       r3, r30
	bl       __dl__FPv

lbl_802FF688:
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
 * Address:	802FF6A4
 * Size:	00009C
 */
TDangoWallBreak::~TDangoWallBreak()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802FF724
	lis      r3, __vt__Q23efx15TDangoWallBreak@ha
	addi     r3, r3, __vt__Q23efx15TDangoWallBreak@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802FF714
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802FF714
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802FF714:
	extsh.   r0, r31
	ble      lbl_802FF724
	mr       r3, r30
	bl       __dl__FPv

lbl_802FF724:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

} // namespace Game

/*
 * --INFO--
 * Address:	802FF740
 * Size:	000008
 */
void DangoMushi::Obj::getDamageCoeStoneState()
{
	/*
	lfs      f1, lbl_8051D4BC@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FF748
 * Size:	000008
 */
u32 DangoMushi::Obj::getEnemyTypeID() { return 0x5E; }

/*
 * --INFO--
 * Address:	802FF750
 * Size:	00006C
 */
DangoMushi::ProperAnimator::~ProperAnimator()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_802FF7A4
	lis      r3, __vt__Q34Game10DangoMushi14ProperAnimator@ha
	addi     r0, r3, __vt__Q34Game10DangoMushi14ProperAnimator@l
	stw      r0, 0(r31)
	beq      lbl_802FF794
	lis      r3, __vt__Q24Game22EnemyBlendAnimatorBase@ha
	addi     r0, r3, __vt__Q24Game22EnemyBlendAnimatorBase@l
	stw      r0, 0(r31)
	beq      lbl_802FF794
	lis      r3, __vt__Q24Game17EnemyAnimatorBase@ha
	addi     r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
	stw      r0, 0(r31)

lbl_802FF794:
	extsh.   r0, r4
	ble      lbl_802FF7A4
	mr       r3, r31
	bl       __dl__FPv

lbl_802FF7A4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	802FF7BC
 * Size:	000008
 */
TDangoWallBreak::@4 @~TDangoWallBreak()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx15TDangoWallBreakFv
	*/
}

/*
 * --INFO--
 * Address:	802FF7C4
 * Size:	000008
 */
TDangoAttack2::@4 @~TDangoAttack2()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx13TDangoAttack2Fv
	*/
}
} // namespace efx

} // namespace efx
