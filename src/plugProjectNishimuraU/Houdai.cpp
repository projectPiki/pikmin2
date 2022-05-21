#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_Houdai_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048B0D8
    lbl_8048B0D8:
        .asciz "rhand1jnt"
        .skip 2
    .global lbl_8048B0E4
    lbl_8048B0E4:
        .asciz "rhand2jnt"
        .skip 2
    .global lbl_8048B0F0
    lbl_8048B0F0:
        .asciz "rhand3jnt"
        .skip 2
    .global lbl_8048B0FC
    lbl_8048B0FC:
        .asciz "lhand1jnt"
        .skip 2
    .global lbl_8048B108
    lbl_8048B108:
        .asciz "lhand2jnt"
        .skip 2
    .global lbl_8048B114
    lbl_8048B114:
        .asciz "lhand3jnt"
        .skip 2
    .global lbl_8048B120
    lbl_8048B120:
        .asciz "rfoot1jnt"
        .skip 2
    .global lbl_8048B12C
    lbl_8048B12C:
        .asciz "rfoot2jnt"
        .skip 2
    .global lbl_8048B138
    lbl_8048B138:
        .asciz "rfoot3jnt"
        .skip 2
    .global lbl_8048B144
    lbl_8048B144:
        .asciz "lfoot1jnt"
        .skip 2
    .global lbl_8048B150
    lbl_8048B150:
        .asciz "lfoot2jnt"
        .skip 2
    .global lbl_8048B15C
    lbl_8048B15C:
        .asciz "lfoot3jnt"
        .skip 2
    .global lbl_8048B168
    lbl_8048B168:
        .4byte lbl_8048B0D8
        .4byte lbl_8048B0E4
        .4byte lbl_8048B0F0
        .4byte lbl_8048B0FC
        .4byte lbl_8048B108
        .4byte lbl_8048B114
        .4byte lbl_8048B120
        .4byte lbl_8048B12C
        .4byte lbl_8048B138
        .4byte lbl_8048B144
        .4byte lbl_8048B150
        .4byte lbl_8048B15C
    .global lbl_8048B198
    lbl_8048B198:
        .asciz "PSMainSide_ObjSound.h"
        .skip 2
    .global lbl_8048B1B0
    lbl_8048B1B0:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8048B1BC
    lbl_8048B1BC:
        .asciz "ef_01_loc"
        .skip 2
    .global lbl_8048B1C8
    lbl_8048B1C8:
        .asciz "ef_02_loc"
        .skip 2
    .global lbl_8048B1D4
    lbl_8048B1D4:
        .asciz "ef_03_loc"
        .skip 2
    .global lbl_8048B1E0
    lbl_8048B1E0:
        .4byte lbl_8048B1BC
        .4byte lbl_8048B1C8
        .4byte lbl_8048B1D4
    .global lbl_8048B1EC
    lbl_8048B1EC:
        .asciz "ArgPosPos"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804D0E98
    lbl_804D0E98:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q23efx9ArgPosPos
    __vt__Q23efx9ArgPosPos:
        .4byte 0
        .4byte 0
        .4byte getName__Q23efx9ArgPosPosFv
    .global __vt__Q23efx10THdamaOpen
    __vt__Q23efx10THdamaOpen:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx14THdamaOnSteam2
    __vt__Q23efx14THdamaOnSteam2:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx13THdamaOnSmoke
    __vt__Q23efx13THdamaOnSmoke:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx16THdamaDeadSteamT
    __vt__Q23efx16THdamaDeadSteamT:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple1FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple1Fv
        .4byte fade__Q23efx8TSimple1Fv
    .global __vt__Q23efx10TOootaWalk
    __vt__Q23efx10TOootaWalk:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx8TSimple2FPQ23efx3Arg
        .4byte forceKill__Q23efx8TSimple2Fv
        .4byte fade__Q23efx8TSimple2Fv
    .global __vt__Q23efx15THdamaDeadSteam
    __vt__Q23efx15THdamaDeadSteam:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx14THdamaDeadbomb
    __vt__Q23efx14THdamaDeadbomb:
        .4byte 0
        .4byte 0
        .4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
        .4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
        .4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
    .global __vt__Q23efx13THdamaSteamBd
    __vt__Q23efx13THdamaSteamBd:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13THdamaSteamBdFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx13THdamaSteamBdFv
    .global __vt__Q23efx14THdamaOnSteam1
    __vt__Q23efx14THdamaOnSteam1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14THdamaOnSteam1Fv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx14THdamaOnSteam1Fv
    .global __vt__Q23efx14THdamaOnHahen1
    __vt__Q23efx14THdamaOnHahen1:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14THdamaOnHahen1Fv"
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
        .4byte __dt__Q23efx14THdamaOnHahen1Fv
    .global __vt__Q23efx11THdamaHahen
    __vt__Q23efx11THdamaHahen:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11THdamaHahenFv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx11THdamaHahenFv
    .global __vt__Q23efx13THdamaSteamSt
    __vt__Q23efx13THdamaSteamSt:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx13THdamaSteamStFv"
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
        .4byte __dt__Q23efx13THdamaSteamStFv
    .global __vt__Q23efx11THdamaSteam
    __vt__Q23efx11THdamaSteam:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx11THdamaSteamFv"
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
        .4byte __dt__Q23efx11THdamaSteamFv
    .global __vt__Q23efx14THdamaOnHahen2
    __vt__Q23efx14THdamaOnHahen2:
        .4byte 0
        .4byte 0
        .4byte create__Q23efx5TSyncFPQ23efx3Arg
        .4byte forceKill__Q23efx5TSyncFv
        .4byte fade__Q23efx5TSyncFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q23efx14THdamaOnHahen2Fv"
        .4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
        .4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
        .4byte execute__Q23efx5TSyncFP14JPABaseEmitter
        .4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
        .4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
        .4byte startDemoDrawOff__Q23efx5TSyncFv
        .4byte endDemoDrawOn__Q23efx5TSyncFv
        .4byte __dt__Q23efx14THdamaOnHahen2Fv
    .global __vt__Q34Game6Houdai3Obj
    __vt__Q34Game6Houdai3Obj:
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
        .4byte onInit__Q34Game6Houdai3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q34Game6Houdai3ObjFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q24Game9EnemyBaseFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q24Game9EnemyBaseFf
        .4byte doDirectDraw__Q34Game6Houdai3ObjFR8Graphics
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
        .4byte inWaterCallback__Q34Game6Houdai3ObjFPQ24Game8WaterBox
        .4byte outWaterCallback__Q34Game6Houdai3ObjFv
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
        .4byte collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
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
        .4byte getShadowParam__Q34Game6Houdai3ObjFRQ24Game11ShadowParam
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
        .4byte __dt__Q34Game6Houdai3ObjFv
        .4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game6Houdai3ObjFPQ24Game21EnemyInitialParamBase .4byte
   update__Q24Game9EnemyBaseFv .4byte doUpdate__Q34Game6Houdai3ObjFv .4byte
   doUpdateCommon__Q34Game6Houdai3ObjFv .4byte
   doUpdateCarcass__Q24Game9EnemyBaseFv .4byte
   doAnimationUpdateAnimator__Q24Game9EnemyBaseFv .4byte
   doAnimationCullingOff__Q34Game6Houdai3ObjFv .4byte
   doAnimationCullingOn__Q24Game9EnemyBaseFv .4byte
   doAnimationStick__Q24Game9EnemyBaseFv .4byte
   doSimulationCarcass__Q24Game9EnemyBaseFf .4byte
   doDebugDraw__Q34Game6Houdai3ObjFR8Graphics .4byte
   doSimpleDraw__Q24Game9EnemyBaseFP8Viewport .4byte
   doSimulationGround__Q24Game9EnemyBaseFf .4byte
   doSimulationFlying__Q24Game9EnemyBaseFf .4byte
   doSimulationStick__Q24Game9EnemyBaseFf .4byte
   changeMaterial__Q24Game9EnemyBaseFv .4byte
   "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>" .4byte
   getFitEffectPos__Q24Game9EnemyBaseFv .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q34Game6Houdai3ObjFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
        .4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game6Houdai3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte throwupItem__Q24Game9EnemyBaseFv
        .4byte "getThrowupItemPosition__Q34Game6Houdai3ObjFP10Vector3<f>"
        .4byte "getThrowupItemVelocity__Q34Game6Houdai3ObjFP10Vector3<f>"
        .4byte throwupItemInDeathProcedure__Q34Game6Houdai3ObjFv
        .4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte damageCallBack__Q34Game6Houdai3ObjFPQ24Game8CreaturefP8CollPart
        .4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
        .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q34Game6Houdai3ObjFv .4byte
   doFinishStoneState__Q34Game6Houdai3ObjFv .4byte
   getDamageCoeStoneState__Q34Game6Houdai3ObjFv .4byte
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
   doStartMovie__Q34Game6Houdai3ObjFv .4byte doEndMovie__Q34Game6Houdai3ObjFv
        .4byte setFSM__Q34Game6Houdai3ObjFPQ34Game6Houdai3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@1056@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@1056@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@1056@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@1056@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@1056@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@1056@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
    .global __vt__Q34Game6Houdai20HoudaiGroundCallBack
    __vt__Q34Game6Houdai20HoudaiGroundCallBack:
        .4byte 0
        .4byte 0
        .4byte
   invokeOnGround__Q34Game6Houdai20HoudaiGroundCallBackFiPQ24Game8WaterBox
        .4byte
   invokeOffGround__Q34Game6Houdai20HoudaiGroundCallBackFiPQ24Game8WaterBox
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515D98
    lbl_80515D98:
        .skip 0x4
    .global lbl_80515D9C
    lbl_80515D9C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051C4F8
    lbl_8051C4F8:
        .4byte 0x00000000
    .global lbl_8051C4FC
    lbl_8051C4FC:
        .float 1.0
    .global lbl_8051C500
    lbl_8051C500:
        .float 0.1
    .global lbl_8051C504
    lbl_8051C504:
        .float 0.25
    .global lbl_8051C508
    lbl_8051C508:
        .4byte 0x41200000
    .global lbl_8051C50C
    lbl_8051C50C:
        .4byte 0xC47A0000
    .global lbl_8051C510
    lbl_8051C510:
        .4byte 0x6B6F7369
        .4byte 0x00000000
    .global lbl_8051C518
    lbl_8051C518:
        .4byte 0x40000000
    .global lbl_8051C51C
    lbl_8051C51C:
        .4byte 0x47000000
    .global lbl_8051C520
    lbl_8051C520:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051C528
    lbl_8051C528:
        .4byte 0x441C4000
    .global lbl_8051C52C
    lbl_8051C52C:
        .4byte 0x40490FDB
    .global lbl_8051C530
    lbl_8051C530:
        .4byte 0x3FC90FDB
    .global lbl_8051C534
    lbl_8051C534:
        .4byte 0xC3A2F983
    .global lbl_8051C538
    lbl_8051C538:
        .4byte 0x43A2F983
    .global lbl_8051C53C
    lbl_8051C53C:
        .4byte 0x43340000
    .global lbl_8051C540
    lbl_8051C540:
        .4byte 0x40C90FDB
    .global lbl_8051C544
    lbl_8051C544:
        .4byte 0x3F400000
    .global lbl_8051C548
    lbl_8051C548:
        .4byte 0x42F00000
    .global lbl_8051C54C
    lbl_8051C54C:
        .4byte 0x40400000
    .global lbl_8051C550
    lbl_8051C550:
        .4byte 0xBE19999A
    .global lbl_8051C554
    lbl_8051C554:
        .float 0.5
    .global lbl_8051C558
    lbl_8051C558:
        .4byte 0xC0000000
    .global lbl_8051C55C
    lbl_8051C55C:
        .4byte 0x42960000
    .global lbl_8051C560
    lbl_8051C560:
        .4byte 0x41F00000
    .global lbl_8051C564
    lbl_8051C564:
        .4byte 0x42700000
    .global lbl_8051C568
    lbl_8051C568:
        .float 0.7
    .global lbl_8051C56C
    lbl_8051C56C:
        .4byte 0xBFC00000
    .global lbl_8051C570
    lbl_8051C570:
        .4byte 0x3F2B851F
    .global lbl_8051C574
    lbl_8051C574:
        .4byte 0x3F4CCCCD
    .global lbl_8051C578
    lbl_8051C578:
        .float 0.3
    .global lbl_8051C57C
    lbl_8051C57C:
        .4byte 0x3F99999A
    .global lbl_8051C580
    lbl_8051C580:
        .4byte 0x3E333333
    .global lbl_8051C584
    lbl_8051C584:
        .4byte 0x3EB33333
*/

#include "Game/Entities/Houdai.h"

namespace Game {

/*
 * --INFO--
 * Address:	802BFCB0
 * Size:	000024
 */
void Houdai::HoudaiGroundCallBack::invokeOnGround(int idx, Game::WaterBox* water)
{
	m_parent->createOnGroundEffect(idx, water);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	bl       createOnGroundEffect__Q34Game6Houdai3ObjFiPQ24Game8WaterBox
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BFCD4
 * Size:	000024
 */
void Houdai::HoudaiGroundCallBack::invokeOffGround(int idx, WaterBox* water)
{
	m_parent->createOffGroundEffect(idx, water);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 4(r3)
	bl       createOffGroundEffect__Q34Game6Houdai3ObjFiPQ24Game8WaterBox
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BFCF8
 * Size:	00016C
 */
Houdai::Obj::Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802BFD38
	addi     r0, r31, 0x420
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x420(r31)
	stw      r0, 0x424(r31)
	stw      r0, 0x428(r31)

lbl_802BFD38:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r4, __vt__Q34Game6Houdai3Obj@ha
	addi     r0, r31, 0x420
	addi     r6, r4, __vt__Q34Game6Houdai3Obj@l
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	stw      r6, 0(r31)
	addi     r5, r6, 0x1b0
	addi     r9, r6, 0x2fc
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	stw      r5, 0x178(r31)
	addi     r3, r31, 0x304
	li       r5, 0
	li       r6, 0xc
	lwz      r8, 0x17c(r31)
	li       r7, 0x10
	stw      r9, 0(r8)
	lwz      r8, 0x17c(r31)
	subf     r0, r8, r0
	stw      r0, 0xc(r8)
	bl       __construct_array
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802BFDE0
	bl       __ct__Q24Game17EnemyAnimatorBaseFv
	lis      r3, __vt__Q34Game6Houdai14ProperAnimator@ha
	lis      r4, __vt__Q28SysShape12BaseAnimator@ha
	addi     r0, r3, __vt__Q34Game6Houdai14ProperAnimator@l
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

lbl_802BFDE0:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_802BFE14
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game6Houdai3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game6Houdai3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_802BFE14:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       createIKSystem__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       createShadowSystem__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       createShotGun__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       createEffect__Q34Game6Houdai3ObjFv
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
 * Address:	802BFE64
 * Size:	000004
 */
void Houdai::Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802BFE68
 * Size:	000144
 */
void Houdai::Obj::onInit(Game::CreatureInitArg*)
{
	// TODO: Finish
	onInit();
	hardConstraintOn();
	setupIKSystem();
	setupShadowSystem();
	setTargetPattern();
	setupShotgun();
	setupCollision();
	setupEffect();
	startSteamEffect();
	resetBossAppearBGM();
	shadowMgr->delShadow(this);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r3, 0x1e0(r31)
	li       r4, -1
	lfs      f0, lbl_8051C4F8@sda21(r2)
	li       r0, 0
	rlwinm   r5, r3, 0, 0x1a, 0x18
	mr       r3, r31
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x14, 0x12
	stw      r5, 0x1e0(r31)
	lwz      r5, 0x1e0(r31)
	rlwinm   r5, r5, 0, 0x19, 0x17
	stw      r5, 0x1e0(r31)
	stfs     f0, 0x2c0(r31)
	stfs     f0, 0x2c4(r31)
	stfs     f0, 0x2c8(r31)
	stw      r4, 0x2d0(r31)
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2dc(r31)
	stb      r0, 0x2ec(r31)
	bl       setupIKSystem__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       setupShadowSystem__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       setTargetPattern__Q34Game6Houdai3ObjFv
	lfs      f0, lbl_8051C4F8@sda21(r2)
	li       r0, 0
	mr       r3, r31
	stfs     f0, 0x2cc(r31)
	stb      r0, 0x2ed(r31)
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2e0(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2e8(r31)
	bl       setupShotGun__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       setupCollision__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       setupEffect__Q34Game6Houdai3ObjFv
	mr       r3, r31
	li       r4, 0
	bl       startSteamEffect__Q34Game6Houdai3ObjFb
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2ef(r31)
	bl       resetBossAppearBGM__Q34Game6Houdai3ObjFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 1
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1dc(r12)
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
 * Address:	802BFFAC
 * Size:	000054
 */
void Houdai::Obj::onKill(Game::CreatureKillArg* arg)
{
	finishSteamEffect();
	finishChimneyEffect();
	forceFinishShotGun();
	onKill(arg);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       finishSteamEffect__Q34Game6Houdai3ObjFv
	mr       r3, r30
	bl       finishChimneyEffect__Q34Game6Houdai3ObjFv
	mr       r3, r30
	bl       forceFinishShotGun__Q34Game6Houdai3ObjFv
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
 * Address:	802C0000
 * Size:	000088
 */
void Houdai::Obj::setParameters()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_802C006C
	lbz      r0, 0x48(r4)
	cmplwi   r0, 0
	beq      lbl_802C006C
	lwz      r0, 0x44(r4)
	cmpwi    r0, 0
	bne      lbl_802C006C
	lwz      r3, 0x58(r4)
	cmplwi   r3, 0
	beq      lbl_802C006C
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x93a1
	cmplwi   r0, 0x3032
	bne      lbl_802C006C
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x9ac(r3)
	stfs     f0, 0x35c(r3)

lbl_802C006C:
	mr       r3, r31
	bl       setParameters__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0088
 * Size:	0000B4
 */
void Houdai::Obj::doUpdate()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       updateShotGunTimer__Q34Game6Houdai3ObjFv
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       updatePinchLife__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       updateIKSystem__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       doUpdateShotGun__Q34Game6Houdai3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C0128
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	ble      lbl_802C0128
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x512e
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802C0128:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C013C
 * Size:	00003C
 */
void Houdai::Obj::doUpdateCommon()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doUpdateCommon__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       doUpdateCommonShotGun__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       updateBossBGM__Q34Game6Houdai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0178
 * Size:	0000A0
 */
void Houdai::Obj::doAnimationCullingOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       setShotGunCallBack__Q34Game6Houdai3ObjFv
	lwz      r4, 0x188(r31)
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x24(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doAnimationIKSystem__Q34Game6Houdai3ObjFv
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x114(r31)
	bl       update__8CollTreeFv
	mr       r3, r31
	bl       doAnimationShadowSystem__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       finishAnimationIKSystem__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       resetShotGunCallBack__Q34Game6Houdai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0218
 * Size:	000004
 */
void Houdai::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802C021C
 * Size:	000020
 */
void Houdai::Obj::doDebugDraw(Graphics&)
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
 * Address:	802C023C
 * Size:	00004C
 */
void Houdai::Obj::setFSM(Game::Houdai::FSM*)
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
 * Address:	802C0288
 * Size:	00003C
 */
void Houdai::Obj::getShadowParam(Game::ShadowParam&)
{
	/*
	lfs      f0, 0x18c(r3)
	lfs      f2, lbl_8051C4F8@sda21(r2)
	stfs     f0, 0(r4)
	lfs      f1, lbl_8051C4FC@sda21(r2)
	lfs      f3, 0x190(r3)
	lfs      f0, lbl_8051C500@sda21(r2)
	stfs     f3, 4(r4)
	lfs      f3, 0x194(r3)
	stfs     f3, 8(r4)
	stfs     f2, 0xc(r4)
	stfs     f1, 0x10(r4)
	stfs     f2, 0x14(r4)
	stfs     f0, 0x18(r4)
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C02C4
 * Size:	0000B4
 */
void Houdai::Obj::damageCallBack(Game::Creature*, float, CollPart*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	or.      r31, r4, r4
	fmr      f31, f1
	mr       r30, r3
	beq      lbl_802C0354
	cmplwi   r5, 0
	beq      lbl_802C0354
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C0354
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C0354
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 2
	bne      lbl_802C033C
	lfs      f0, lbl_8051C504@sda21(r2)
	fmuls    f31, f31, f0

lbl_802C033C:
	fmr      f1, f31
	lfs      f2, lbl_8051C4FC@sda21(r2)
	mr       r3, r30
	bl       addDamage__Q24Game9EnemyBaseFff
	li       r3, 1
	b        lbl_802C0358

lbl_802C0354:
	li       r3, 0

lbl_802C0358:
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
 * Address:	802C0378
 * Size:	000054
 */
void Houdai::Obj::doStartStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishPinchJointEffect__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       finishSteamEffect__Q34Game6Houdai3ObjFv
	mr       r3, r31
	bl       finishChimneyEffect__Q34Game6Houdai3ObjFv
	lwz      r3, 0x300(r31)
	bl       startStoneStateEffectOff__Q34Game6Houdai16HoudaiShotGunMgrFv
	mr       r3, r31
	bl       startStoneStateBossAttackLoopBGM__Q34Game6Houdai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C03CC
 * Size:	000078
 */
void Houdai::Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051C4FC@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_8051C508@sda21(r2)
	li       r4, 0
	lfs      f3, lbl_8051C4F8@sda21(r2)
	lfs      f4, lbl_8051C50C@sda21(r2)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lbz      r0, 0x2ec(r31)
	cmplwi   r0, 0
	beq      lbl_802C0414
	mr       r3, r31
	bl       startPinchJointEffect__Q34Game6Houdai3ObjFv

lbl_802C0414:
	mr       r3, r31
	li       r4, 1
	bl       startSteamEffect__Q34Game6Houdai3ObjFb
	lwz      r3, 0x300(r31)
	bl       finishStoneStateEffectOn__Q34Game6Houdai16HoudaiShotGunMgrFv
	mr       r3, r31
	bl       finishStoneStateBossAttackLoopBGM__Q34Game6Houdai3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0444
 * Size:	000020
 */
void Houdai::Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game6Houdai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0464
 * Size:	000020
 */
void Houdai::Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game6Houdai3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0484
 * Size:	000050
 */
void Houdai::Obj::getThrowupItemPosition(Vector3f*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	addi     r4, r2, lbl_8051C510@sda21
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C04D4
 * Size:	000014
 */
void Houdai::Obj::getThrowupItemVelocity(Vector3f*)
{
	/*
	lfs      f0, lbl_8051C4F8@sda21(r2)
	stfs     f0, 8(r4)
	stfs     f0, 4(r4)
	stfs     f0, 0(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C04E8
 * Size:	0000C8
 */
void Houdai::Obj::setTargetPattern()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 1
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stb      r0, 0x2ee(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802C059C
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_802C059C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_802C059C
	lwz      r3, 0x58(r3)
	cmplwi   r3, 0
	beq      lbl_802C059C
	lwz      r12, 0(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	addis    r0, r3, 0x93a1
	cmplwi   r0, 0x3032
	bne      lbl_802C059C
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051C520@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051C51C@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051C518@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x2ee(r31)

lbl_802C059C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C05B0
 * Size:	000298
 */
void Houdai::Obj::getTargetPosition()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lfs      f1, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lwz      r7, 0xc0(r3)
	fsubs    f2, f1, f0
	lfs      f1, 0x18c(r3)
	lfs      f4, 0x198(r3)
	lfs      f0, 0x35c(r7)
	fsubs    f3, f1, f4
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802C0804
	lis      r5, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r4, __vt__Q24Game23ConditionNotStickClient@ha
	addi     r6, r5, "__vt__23Condition<Q24Game4Piki>"@l
	stw      r31, 0xc(r1)
	addi     r0, r4, __vt__Q24Game23ConditionNotStickClient@l
	addi     r5, r1, 8
	stw      r6, 8(r1)
	li       r4, 0
	stw      r0, 8(r1)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802C0674
	mr       r4, r3
	addi     r3, r1, 0x10
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2dc(r31)
	b        lbl_802C0818

lbl_802C0674:
	lfs      f1, 0x194(r31)
	lfs      f0, 0x2dc(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2d4(r31)
	lfs      f0, lbl_8051C528@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802C0818
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lis      r3, atanTable___5JMath@ha
	lwz      r4, 0xc0(r31)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 0x20(r1)
	lfd      f1, lbl_8051C520@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f5, lbl_8051C51C@sda21(r2)
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
	stw      r3, 0x2c(r1)
	lfd      f2, lbl_8051C520@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f3, lbl_8051C52C@sda21(r2)
	lfd      f0, 0x28(r1)
	lfs      f1, lbl_8051C51C@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051C530@sda21(r2)
	lfs      f0, lbl_8051C4F8@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	bge      lbl_802C0784
	lfs      f0, lbl_8051C534@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_802C07A8

lbl_802C0784:
	lfs      f0, lbl_8051C538@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_802C07A8:
	lfs      f1, 0x198(r31)
	lfs      f0, lbl_8051C4F8@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2d4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d8(r31)
	bge      lbl_802C07CC
	fneg     f3, f3

lbl_802C07CC:
	lfs      f1, lbl_8051C538@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x1a0(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2dc(r31)
	b        lbl_802C0818

lbl_802C0804:
	stfs     f4, 0x2d4(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2dc(r31)

lbl_802C0818:
	mr       r3, r31
	addi     r4, r31, 0x2d4
	bl       "setIKSystemTargetPosition__Q34Game6Houdai3ObjFR10Vector3<f>"
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0848
 * Size:	000234
 */
void Houdai::Obj::setShotGunTargetPosition()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	lis      r5, "__vt__23Condition<Q24Game4Piki>"@ha
	lis      r4, __vt__Q24Game23ConditionNotStickClient@ha
	addi     r0, r5, "__vt__23Condition<Q24Game4Piki>"@l
	mr       r31, r3
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q24Game23ConditionNotStickClient@l
	stw      r0, 8(r1)
	stw      r31, 0xc(r1)
	lbz      r0, 0x2ee(r3)
	cmplwi   r0, 0
	beq      lbl_802C08B8
	lwz      r5, 0xc0(r31)
	addi     r6, r1, 8
	lfs      f1, lbl_8051C53C@sda21(r2)
	li       r4, 0
	lfs      f2, 0x44c(r5)
	li       r5, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	mr       r4, r3
	b        lbl_802C08F4

lbl_802C08B8:
	lwz      r6, 0xc0(r31)
	li       r4, 0
	lfs      f1, lbl_8051C53C@sda21(r2)
	li       r5, 0
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	or.      r4, r3, r3
	beq      lbl_802C08F4
	lwz      r6, 0xc0(r31)
	addi     r5, r1, 8
	lfs      f1, lbl_8051C53C@sda21(r2)
	li       r4, 0
	lfs      f2, 0x44c(r6)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	mr       r4, r3

lbl_802C08F4:
	cmplwi   r4, 0
	beq      lbl_802C092C
	lwz      r12, 0(r4)
	addi     r3, r1, 0x10
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2e0(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2e8(r31)
	b        lbl_802C0A4C

lbl_802C092C:
	lfs      f1, 0x2c8(r31)
	lfs      f0, lbl_8051C4FC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802C0A4C
	lfs      f0, lbl_8051C4F8@sda21(r2)
	stfs     f0, 0x2c8(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lwz      r3, 0xc0(r31)
	stw      r0, 0x20(r1)
	lfd      f2, lbl_8051C520@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051C540@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051C51C@sda21(r2)
	lfs      f31, 0x44c(r3)
	fmuls    f1, f1, f2
	fdivs    f30, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	fmr      f4, f30
	lfs      f0, lbl_8051C4F8@sda21(r2)
	stw      r0, 0x28(r1)
	lfd      f2, lbl_8051C520@sda21(r2)
	fcmpo    cr0, f30, f0
	lfd      f1, 0x28(r1)
	lfs      f0, lbl_8051C51C@sda21(r2)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f5, f1, f0
	bge      lbl_802C09BC
	fneg     f4, f30

lbl_802C09BC:
	lfs      f3, lbl_8051C538@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C4F8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f4, f3
	lfs      f1, 0x194(r31)
	fcmpo    cr0, f30, f0
	lfs      f4, 0x190(r31)
	fctiwz   f0, f2
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f5, f0, f1
	bge      lbl_802C0A20
	lfs      f0, lbl_8051C534@sda21(r2)
	fmuls    f0, f30, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_802C0A38

lbl_802C0A20:
	fmuls    f0, f30, f3
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_802C0A38:
	lfs      f0, 0x18c(r31)
	fmadds   f0, f5, f1, f0
	stfs     f0, 0x2e0(r31)
	stfs     f4, 0x2e4(r31)
	stfs     f2, 0x2e8(r31)

lbl_802C0A4C:
	mr       r3, r31
	addi     r4, r31, 0x2e0
	bl       "setShotGunTarget__Q34Game6Houdai3ObjFR10Vector3<f>"
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0A7C
 * Size:	00010C
 */
void Houdai::Obj::createIKSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x9c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802C0AA8
	bl       __ct__Q24Game11IKSystemMgrFv
	mr       r0, r3

lbl_802C0AA8:
	stw      r0, 0x2f0(r31)
	li       r3, 0x48
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C0B40
	li       r0, -1
	lfs      f5, lbl_8051C4F8@sda21(r2)
	stw      r0, 0(r3)
	lfs      f1, lbl_8051C544@sda21(r2)
	stfs     f5, 4(r3)
	lfs      f0, lbl_8051C548@sda21(r2)
	stfs     f5, 8(r3)
	lfs      f2, lbl_8051C54C@sda21(r2)
	stfs     f1, 0xc(r3)
	lfs      f1, lbl_8051C550@sda21(r2)
	stfs     f0, 0x10(r3)
	lfs      f0, lbl_8051C554@sda21(r2)
	stfs     f2, 0x14(r3)
	lfs      f2, lbl_8051C508@sda21(r2)
	stfs     f1, 0x18(r3)
	lfs      f1, lbl_8051C558@sda21(r2)
	stfs     f0, 0x1c(r3)
	lfs      f0, lbl_8051C55C@sda21(r2)
	stfs     f2, 0x20(r3)
	lfs      f4, lbl_8051C560@sda21(r2)
	stfs     f1, 0x24(r3)
	lfs      f3, lbl_8051C564@sda21(r2)
	stfs     f5, 0x28(r3)
	lfs      f2, lbl_8051C500@sda21(r2)
	stfs     f0, 0x2c(r3)
	lfs      f1, lbl_8051C568@sda21(r2)
	stfs     f5, 0x30(r3)
	lfs      f0, lbl_8051C56C@sda21(r2)
	stfs     f4, 0x34(r3)
	stfs     f3, 0x38(r3)
	stfs     f2, 0x3c(r3)
	stfs     f1, 0x40(r3)
	stfs     f0, 0x44(r3)

lbl_802C0B40:
	stw      r3, 0x2f4(r31)
	li       r3, 8
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C0B70
	lis      r5, __vt__Q24Game19JointGroundCallBack@ha
	lis      r4, __vt__Q34Game6Houdai20HoudaiGroundCallBack@ha
	addi     r0, r5, __vt__Q24Game19JointGroundCallBack@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q34Game6Houdai20HoudaiGroundCallBack@l
	stw      r0, 0(r3)
	stw      r31, 4(r3)

lbl_802C0B70:
	stw      r3, 0x2f8(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0B88
 * Size:	000124
 */
void Houdai::Obj::setupIKSystem()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x54(r1)
	stmw     r27, 0x3c(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x2f0(r3)
	bl
	init__Q24Game11IKSystemMgrFPQ24Game9EnemyBasePQ24Game19JointGroundCallBack
	lis      r3, lbl_8048B168@ha
	addi     r6, r1, 8
	addi     r27, r3, lbl_8048B168@l
	li       r5, 0
	lwz      r28, 0(r27)
	lwz      r29, 4(r27)
	lwz      r30, 8(r27)
	lwz      r12, 0xc(r27)
	lwz      r11, 0x10(r27)
	lwz      r10, 0x14(r27)
	lwz      r9, 0x18(r27)
	lwz      r8, 0x1c(r27)
	lwz      r7, 0x20(r27)
	lwz      r4, 0x24(r27)
	lwz      r3, 0x28(r27)
	lwz      r0, 0x2c(r27)
	stw      r28, 8(r1)
	stw      r29, 0xc(r1)
	stw      r30, 0x10(r1)
	stw      r12, 0x14(r1)
	stw      r11, 0x18(r1)
	stw      r10, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r8, 0x24(r1)
	stw      r7, 0x28(r1)
	stw      r4, 0x2c(r1)
	stw      r3, 0x30(r1)
	stw      r0, 0x34(r1)
	lwz      r3, 0x2f0(r31)
	lwz      r4, 0x174(r31)
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2f0(r31)
	addi     r6, r1, 0x14
	lwz      r4, 0x174(r31)
	li       r5, 1
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2f0(r31)
	addi     r6, r1, 0x20
	lwz      r4, 0x174(r31)
	li       r5, 2
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lwz      r3, 0x2f0(r31)
	addi     r6, r1, 0x2c
	lwz      r4, 0x174(r31)
	li       r5, 3
	bl       setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
	lis      r4, lbl_8048B0F0@ha
	lwz      r3, 0x2f0(r31)
	addi     r5, r4, lbl_8048B0F0@l
	lwz      r4, 0x174(r31)
	bl       setupCallBack__Q24Game11IKSystemMgrFPQ28SysShape5ModelPc
	mr       r3, r31
	bl       setIKParameter__Q34Game6Houdai3ObjFv
	lwz      r3, 0x2f0(r31)
	lwz      r4, 0x2f4(r31)
	bl       setParameters__Q24Game11IKSystemMgrFPQ24Game13IKSystemParms
	lwz      r0, 0x2f8(r31)
	lwz      r3, 0x2f0(r31)
	stw      r0, 0x94(r3)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0CAC
 * Size:	000090
 */
void Houdai::Obj::setIKParameter()
{
	/*
	lfs      f0, lbl_8051C570@sda21(r2)
	lwz      r4, 0x2f4(r3)
	stfs     f0, 0x28(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2f4(r3)
	lfs      f0, 0x334(r5)
	stfs     f0, 0x38(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2f4(r3)
	lfs      f0, 0x2e4(r5)
	stfs     f0, 0x2c(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2f4(r3)
	lfs      f0, 0x81c(r5)
	stfs     f0, 0x14(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2f4(r3)
	lfs      f0, 0x844(r5)
	stfs     f0, 0x18(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2f4(r3)
	lfs      f0, 0x86c(r5)
	stfs     f0, 0x1c(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2f4(r3)
	lfs      f0, 0x8bc(r5)
	stfs     f0, 0x20(r4)
	lwz      r5, 0xc0(r3)
	lwz      r4, 0x2f4(r3)
	lfs      f0, 0x894(r5)
	stfs     f0, 0x24(r4)
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x2f4(r3)
	lfs      f0, 0x8e4(r4)
	stfs     f0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0D3C
 * Size:	000020
 */
void Houdai::Obj::setIKSystemTargetPosition(Vector3f&)
{
	/*
	lwz      r3, 0x2f0(r3)
	lfs      f0, 0(r4)
	stfs     f0, 0x2c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x30(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x34(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0D5C
 * Size:	000060
 */
void Houdai::Obj::updateIKSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	bl       doUpdate__Q24Game11IKSystemMgrFv
	lwz      r3, 0x2f0(r31)
	lfs      f1, 0x3c(r3)
	lfs      f2, 0x40(r3)
	lfs      f0, 0x38(r3)
	stfs     f0, 0x18c(r31)
	stfs     f1, 0x190(r31)
	stfs     f2, 0x194(r31)
	lwz      r3, 0x2f0(r31)
	lfs      f0, 4(r3)
	stfs     f0, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0DBC
 * Size:	000060
 */
void Houdai::Obj::doAnimationIKSystem()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x2f0(r3)
	bl       setAnimationCallBack__Q24Game11IKSystemMgrFv
	lwz      r7, 0x2f0(r31)
	addi     r3, r31, 0x138
	addi     r4, r31, 0x168
	addi     r5, r31, 0x1a4
	lfs      f1, 0x48(r7)
	addi     r6, r1, 8
	lfs      f2, 0x4c(r7)
	lfs      f0, 0x44(r7)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0E1C
 * Size:	000024
 */
void Houdai::Obj::finishAnimationIKSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       resetAnimationCallBack__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0E40
 * Size:	000024
 */
void Houdai::Obj::startProgramedIK()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       startProgramedIK__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0E64
 * Size:	000024
 */
void Houdai::Obj::startIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       startIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0E88
 * Size:	000024
 */
void Houdai::Obj::finishIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       finishIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0EAC
 * Size:	000024
 */
void Houdai::Obj::forceFinishIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       forceFinishIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0ED0
 * Size:	000024
 */
void Houdai::Obj::isFinishIKMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       isFinishIKMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0EF4
 * Size:	000024
 */
void Houdai::Obj::startBlendMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       startBlendMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0F18
 * Size:	000024
 */
void Houdai::Obj::finishBlendMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2f0(r3)
	bl       finishBlendMotion__Q24Game11IKSystemMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0F3C
 * Size:	000020
 */
void Houdai::Obj::getTraceCentrePosition()
{
	/*
	lwz      r4, 0x2f0(r4)
	lfs      f0, 0x44(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x48(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x4c(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0F5C
 * Size:	000048
 */
void Houdai::Obj::createShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0xc4
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802C0F8C
	mr       r4, r31
	bl       __ct__Q34Game6Houdai15HoudaiShadowMgrFPQ34Game6Houdai3Obj
	mr       r0, r3

lbl_802C0F8C:
	stw      r0, 0x2fc(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C0FA4
 * Size:	000074
 */
void Houdai::Obj::setupShadowSystem()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	lwz      r3, 0x2fc(r3)
	bl       init__Q34Game6Houdai15HoudaiShadowMgrFv
	li       r29, 0
	mr       r30, r27

lbl_802C0FC8:
	li       r28, 0
	mr       r31, r30

lbl_802C0FD0:
	lwz      r3, 0x2fc(r27)
	mr       r4, r29
	mr       r5, r28
	addi     r6, r31, 0x304
	bl       "setJointPosPtr__Q34Game6Houdai15HoudaiShadowMgrFiiP10Vector3<f>"
	addi     r28, r28, 1
	addi     r31, r31, 0xc
	cmpwi    r28, 4
	blt      lbl_802C0FD0
	addi     r29, r29, 1
	addi     r30, r30, 0x30
	cmpwi    r29, 4
	blt      lbl_802C0FC8
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1018
 * Size:	000024
 */
void Houdai::Obj::doAnimationShadowSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2fc(r3)
	bl       update__Q34Game6Houdai15HoudaiShadowMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C103C
 * Size:	000078
 */
void Houdai::Obj::setShotGunEmitKeepTimerOn()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x90c(r3)
	lfs      f0, 0x934(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051C520@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051C51C@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x2cc(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C10B4
 * Size:	000078
 */
void Houdai::Obj::setShotGunEmitKeepTimerOff()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x95c(r3)
	lfs      f0, 0x984(r3)
	fsubs    f31, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_8051C520@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, lbl_8051C51C@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f31, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x2cc(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C112C
 * Size:	000030
 */
void Houdai::Obj::updateShotGunTimer()
{
	/*
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_802C1144
	lfs      f0, lbl_8051C4F8@sda21(r2)
	stfs     f0, 0x2c8(r3)
	blr

lbl_802C1144:
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C115C
 * Size:	00001C
 */
void Houdai::Obj::isTransitShotGunState()
{
	/*
	lwz      r4, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	lfs      f0, 0x474(r4)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1178
 * Size:	000048
 */
void Houdai::Obj::createShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802C11A8
	mr       r4, r31
	bl       __ct__Q34Game6Houdai16HoudaiShotGunMgrFPQ34Game6Houdai3Obj
	mr       r0, r3

lbl_802C11A8:
	stw      r0, 0x300(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C11C0
 * Size:	000024
 */
void Houdai::Obj::setupShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       setupShotGun__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C11E4
 * Size:	000024
 */
void Houdai::Obj::setShotGunTarget(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       "setShotGunTarget__Q34Game6Houdai16HoudaiShotGunMgrFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1208
 * Size:	000024
 */
void Houdai::Obj::resetShotGunCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       resetCallBack__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C122C
 * Size:	000024
 */
void Houdai::Obj::setShotGunCallBack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       setCallBack__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1250
 * Size:	000024
 */
void Houdai::Obj::doUpdateShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       doUpdate__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1274
 * Size:	000024
 */
void Houdai::Obj::doUpdateCommonShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       doUpdateCommon__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1298
 * Size:	000024
 */
void Houdai::Obj::startShotGunRotation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       startRotation__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C12BC
 * Size:	000024
 */
void Houdai::Obj::finishShotGunRotation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       finishRotation__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C12E0
 * Size:	000024
 */
void Houdai::Obj::isShotGunRotation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       isShotGunRotation__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1304
 * Size:	000024
 */
void Houdai::Obj::isShotGunLockOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       isShotGunLockOn__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1328
 * Size:	000024
 */
void Houdai::Obj::isFinishShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       isFinishShotGun__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C134C
 * Size:	00005C
 */
void Houdai::Obj::emitShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x300(r3)
	bl       emitShotGun__Q34Game6Houdai16HoudaiShotGunMgrFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5934
	li       r5, 0
	lwz      r12, 0xc(r12)
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
 * Address:	802C13A8
 * Size:	000024
 */
void Houdai::Obj::forceFinishShotGun()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x300(r3)
	bl       forceFinishShotGun__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C13CC
 * Size:	000038
 */
void Houdai::Obj::setupCollision()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, 0x72687431@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, 0x72687431@l
	lwz      r3, 0x114(r3)
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_802C13F4
	bl       makeTubeTree__8CollPartFv

lbl_802C13F4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C1404
 * Size:	0000C8
 */
void Houdai::Obj::startBossChargeBGM()
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
	beq      lbl_802C1474
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C1474
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C1478

lbl_802C1474:
	li       r31, 1

lbl_802C1478:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C149C
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C149C:
	mr       r3, r30
	li       r4, 2
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
 * Address:	802C14CC
 * Size:	0000DC
 */
void Houdai::Obj::startBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2ef(r3)
	cmplwi   r0, 0
	bne      lbl_802C1590
	li       r0, 1
	li       r31, 0
	stb      r0, 0x2ef(r3)
	lwz      r30, 0x28c(r3)
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C1550
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C1550
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C1554

lbl_802C1550:
	li       r31, 1

lbl_802C1554:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C1578
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C1578:
	mr       r3, r30
	li       r4, 8
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_802C1590:
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
 * Address:	802C15A8
 * Size:	0000D8
 */
void Houdai::Obj::finishBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2ef(r3)
	cmplwi   r0, 0
	beq      lbl_802C1668
	li       r31, 0
	stb      r31, 0x2ef(r3)
	lwz      r30, 0x28c(r3)
	lwz      r12, 0x28(r30)
	mr       r3, r30
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C1628
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C1628
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C162C

lbl_802C1628:
	li       r31, 1

lbl_802C162C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C1650
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C1650:
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_802C1668:
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
 * Address:	802C1680
 * Size:	0000D4
 */
void Houdai::Obj::startStoneStateBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2ef(r3)
	cmplwi   r0, 0
	beq      lbl_802C173C
	lwz      r30, 0x28c(r3)
	li       r31, 0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C16FC
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C16FC
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C1700

lbl_802C16FC:
	li       r31, 1

lbl_802C1700:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C1724
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C1724:
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_802C173C:
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
 * Address:	802C1754
 * Size:	0000D4
 */
void Houdai::Obj::finishStoneStateBossAttackLoopBGM()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lbz      r0, 0x2ef(r3)
	cmplwi   r0, 0
	beq      lbl_802C1810
	lwz      r30, 0x28c(r3)
	li       r31, 0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 5
	beq      lbl_802C17D0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C17D0
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C17D4

lbl_802C17D0:
	li       r31, 1

lbl_802C17D4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C17F8
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C17F8:
	mr       r3, r30
	li       r4, 8
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd4(r12)
	mtctr    r12
	bctrl

lbl_802C1810:
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
 * Address:	802C1828
 * Size:	0000C8
 */
void Houdai::Obj::startBossFlickBGM()
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
	beq      lbl_802C1898
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C1898
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C189C

lbl_802C1898:
	li       r31, 1

lbl_802C189C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C18C0
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C18C0:
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
 * Address:	802C18F0
 * Size:	0000FC
 */
void Houdai::Obj::updateBossBGM()
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
	beq      lbl_802C1968
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C1968
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C196C

lbl_802C1968:
	li       r31, 1

lbl_802C196C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C1990
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C1990:
	lwz      r0, 0x1f4(r29)
	cmpwi    r0, 0
	beq      lbl_802C19B8
	mr       r3, r30
	li       r4, 1
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl
	b        lbl_802C19D0

lbl_802C19B8:
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x28(r30)
	lwz      r12, 0xd8(r12)
	mtctr    r12
	bctrl

lbl_802C19D0:
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
 * Address:	802C19EC
 * Size:	0000BC
 */
void Houdai::Obj::resetBossAppearBGM()
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
	beq      lbl_802C1A5C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C1A5C
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C1A60

lbl_802C1A5C:
	li       r31, 1

lbl_802C1A60:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C1A84
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C1A84:
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
 * Address:	802C1AA8
 * Size:	0000BC
 */
void Houdai::Obj::setBossAppearBGM()
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
	beq      lbl_802C1B18
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 6
	beq      lbl_802C1B18
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 7
	bne      lbl_802C1B1C

lbl_802C1B18:
	li       r31, 1

lbl_802C1B1C:
	clrlwi.  r0, r31, 0x18
	bne      lbl_802C1B40
	lis      r3, lbl_8048B198@ha
	lis      r5, lbl_8048B1B0@ha
	addi     r3, r3, lbl_8048B198@l
	li       r4, 0x454
	addi     r5, r5, lbl_8048B1B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802C1B40:
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
 * Address:	802C1B64
 * Size:	0005CC
 */
void Houdai::Obj::createEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, __vt__Q23efx5TSync@ha
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	stw      r0, 0x34(r1)
	lis      r4, __vt__Q23efx14THdamaOnHahen2@ha
	addi     r6, r6, __vt__Q23efx5TSync@l
	addi     r5, r5, __vt__Q23efx12TChasePosPos@l
	stmw     r22, 8(r1)
	mr       r22, r3
	addi     r3, r4, __vt__Q23efx14THdamaOnHahen2@l
	addi     r26, r6, 0x14
	mr       r31, r22
	addi     r25, r5, 0x14
	addi     r30, r3, 0x14
	li       r24, 0

lbl_802C1BA4:
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C1C20
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx14THdamaOnHahen2@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x205
	addi     r0, r4, __vt__Q23efx14THdamaOnHahen2@l
	stw      r26, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r25, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r30, 4(r3)

lbl_802C1C20:
	addi     r24, r24, 1
	stw      r3, 0x3e8(r31)
	cmpwi    r24, 4
	addi     r31, r31, 4
	blt      lbl_802C1BA4
	lis      r7, __vt__Q23efx14TDamaDeadElecA@ha
	lis      r6, __vt__Q23efx9TChaseMtx@ha
	lis      r5, __vt__Q23efx11THdamaSteam@ha
	lis      r4, __vt__Q23efx13THdamaSteamSt@ha
	lis      r3, __vt__Q23efx11THdamaHahen@ha
	addi     r7, r7, __vt__Q23efx14TDamaDeadElecA@l
	addi     r6, r6, __vt__Q23efx9TChaseMtx@l
	addi     r5, r5, __vt__Q23efx11THdamaSteam@l
	addi     r4, r4, __vt__Q23efx13THdamaSteamSt@l
	addi     r3, r3, __vt__Q23efx11THdamaHahen@l
	mr       r30, r22
	addi     r31, r7, 0x14
	addi     r24, r6, 0x14
	addi     r29, r5, 0x14
	addi     r28, r4, 0x14
	addi     r27, r3, 0x14
	li       r23, 0

lbl_802C1C78:
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C1CF4
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx14TDamaDeadElecA@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x1d
	addi     r0, r4, __vt__Q23efx14TDamaDeadElecA@l
	stw      r26, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r25, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r31, 4(r3)

lbl_802C1CF4:
	stw      r3, 0x3d8(r30)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C1D70
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx11THdamaSteam@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChaseMtx@l
	li       r5, 0x20b
	addi     r0, r4, __vt__Q23efx11THdamaSteam@l
	stw      r26, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r24, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r29, 4(r3)

lbl_802C1D70:
	stw      r3, 0x400(r30)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C1DEC
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx13THdamaSteamSt@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChaseMtx@l
	li       r5, 0x20d
	addi     r0, r4, __vt__Q23efx13THdamaSteamSt@l
	stw      r26, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r24, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r28, 4(r3)

lbl_802C1DEC:
	stw      r3, 0x40c(r30)
	li       r3, 0x18
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C1E6C
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx12TChasePosPos@ha
	lis      r4, __vt__Q23efx11THdamaHahen@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx12TChasePosPos@l
	li       r5, 0x203
	addi     r0, r4, __vt__Q23efx11THdamaHahen@l
	stw      r26, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r25, 4(r3)
	stw      r8, 0x10(r3)
	stw      r8, 0x14(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r27, 4(r3)

lbl_802C1E6C:
	addi     r23, r23, 1
	stw      r3, 0x3cc(r30)
	cmpwi    r23, 3
	addi     r30, r30, 4
	blt      lbl_802C1C78
	lis      r4, __vt__Q23efx9TChasePos@ha
	lis      r3, __vt__Q23efx10TDamaSmoke@ha
	addi     r4, r4, __vt__Q23efx9TChasePos@l
	mr       r27, r22
	addi     r3, r3, __vt__Q23efx10TDamaSmoke@l
	li       r23, 0
	addi     r28, r4, 0x14
	addi     r29, r3, 0x14

lbl_802C1EA0:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C1F18
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChasePos@ha
	lis      r4, __vt__Q23efx10TDamaSmoke@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	li       r8, 0
	li       r7, 0x2b2
	stw      r0, 0(r3)
	addi     r6, r5, __vt__Q23efx9TChasePos@l
	li       r5, 0x27
	addi     r0, r4, __vt__Q23efx10TDamaSmoke@l
	stw      r26, 4(r3)
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r28, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r0, 0(r3)
	stw      r29, 4(r3)

lbl_802C1F18:
	addi     r23, r23, 1
	stw      r3, 0x3c4(r27)
	cmpwi    r23, 2
	addi     r27, r27, 4
	blt      lbl_802C1EA0
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C1FA8
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx9TChaseMtx@ha
	lis      r4, __vt__Q23efx14THdamaOnHahen1@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r4, r4, __vt__Q23efx14THdamaOnHahen1@l
	li       r8, 0
	stw      r0, 0(r3)
	li       r7, 0x2b2
	addi     r6, r5, __vt__Q23efx9TChaseMtx@l
	li       r5, 0x204
	stw      r26, 4(r3)
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r24, 4(r3)
	stw      r8, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802C1FA8:
	stw      r3, 0x3e4(r22)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C202C
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx10TChaseMtxT@ha
	lis      r4, __vt__Q23efx14THdamaOnSteam1@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r7, r5, __vt__Q23efx10TChaseMtxT@l
	addi     r4, r4, __vt__Q23efx14THdamaOnSteam1@l
	stw      r0, 0(r3)
	li       r9, 0
	li       r8, 0x2b2
	addi     r6, r7, 0x14
	stw      r26, 4(r3)
	li       r5, 0x208
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

lbl_802C202C:
	stw      r3, 0x3f8(r22)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802C20B0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__18JPAEmitterCallBack@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r6, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r4, __vt__18JPAEmitterCallBack@l
	lis      r5, __vt__Q23efx10TChaseMtxT@ha
	lis      r4, __vt__Q23efx13THdamaSteamBd@ha
	stw      r0, 4(r3)
	addi     r0, r6, __vt__Q23efx5TSync@l
	addi     r7, r5, __vt__Q23efx10TChaseMtxT@l
	addi     r4, r4, __vt__Q23efx13THdamaSteamBd@l
	stw      r0, 0(r3)
	li       r9, 0
	li       r8, 0x2b2
	addi     r6, r7, 0x14
	stw      r26, 4(r3)
	li       r5, 0x20c
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

lbl_802C20B0:
	stw      r3, 0x3fc(r22)
	li       r3, 0x54
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_802C20E8
	li       r4, 0
	li       r5, 0x1f9
	li       r6, 0x1fa
	li       r7, 0x1fb
	li       r8, 0x1fc
	bl       __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs
	lis      r3, __vt__Q23efx14THdamaDeadbomb@ha
	addi     r0, r3, __vt__Q23efx14THdamaDeadbomb@l
	stw      r0, 0(r23)

lbl_802C20E8:
	stw      r23, 0x418(r22)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_802C2118
	li       r4, 0
	li       r5, 0x200
	li       r6, 0x201
	bl       __ct__Q23efx10TChaseMtx2FPA4_fUsUs
	lis      r3, __vt__Q23efx15THdamaDeadSteam@ha
	addi     r0, r3, __vt__Q23efx15THdamaDeadSteam@l
	stw      r0, 0(r23)

lbl_802C2118:
	stw      r23, 0x41c(r22)
	lmw      r22, 8(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C2130
 * Size:	0001A8
 */
void Houdai::Obj::setupEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051C510@sda21
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r31, r3
	addi     r12, r31, 0x310
	addi     r11, r31, 0x31c
	addi     r10, r31, 0x340
	addi     r9, r31, 0x34c
	addi     r8, r31, 0x370
	addi     r7, r31, 0x37c
	addi     r6, r31, 0x3a0
	addi     r5, r31, 0x3ac
	addi     r0, r31, 0x328
	lwz      r3, 0x3e8(r3)
	stw      r12, 0x10(r3)
	stw      r11, 0x14(r3)
	addi     r3, r31, 0x304
	lwz      r29, 0x3ec(r31)
	stw      r10, 0x10(r29)
	stw      r9, 0x14(r29)
	lwz      r29, 0x3f0(r31)
	stw      r8, 0x10(r29)
	stw      r7, 0x14(r29)
	lwz      r29, 0x3f4(r31)
	stw      r6, 0x10(r29)
	stw      r5, 0x14(r29)
	lwz      r30, 0x3d8(r31)
	stw      r3, 0x10(r30)
	stw      r12, 0x14(r30)
	lwz      r3, 0x3dc(r31)
	stw      r12, 0x10(r3)
	stw      r11, 0x14(r3)
	lwz      r3, 0x3e0(r31)
	stw      r11, 0x10(r3)
	stw      r0, 0x14(r3)
	lwz      r3, 0x3cc(r31)
	stw      r8, 0x10(r3)
	stw      r7, 0x14(r3)
	lwz      r3, 0x3d0(r31)
	stw      r10, 0x10(r3)
	stw      r9, 0x14(r3)
	lwz      r3, 0x3d4(r31)
	stw      r6, 0x10(r3)
	stw      r5, 0x14(r3)
	lwz      r3, 0x3c4(r31)
	stw      r12, 0x10(r3)
	lwz      r3, 0x3c8(r31)
	stw      r11, 0x10(r3)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	mr       r28, r3
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x3e4(r31)
	stw      r3, 0x10(r4)
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x3f8(r31)
	stw      r3, 0x10(r4)
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x3fc(r31)
	stw      r3, 0x10(r4)
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x418(r31)
	bl       setMtxptr__Q23efx10TChaseMtx4FPA4_f
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x41c(r31)
	bl       setMtxptr__Q23efx10TChaseMtx2FPA4_f
	lis      r3, lbl_8048B1E0@ha
	mr       r29, r31
	addi     r5, r3, lbl_8048B1E0@l
	addi     r30, r1, 8
	lwz      r4, 0(r5)
	li       r27, 0
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 8(r1)
	stw      r3, 0xc(r1)
	stw      r0, 0x10(r1)

lbl_802C2284:
	lwz      r3, 0x174(r31)
	lwz      r4, 0(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	mr       r28, r3
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x400(r29)
	stw      r3, 0x10(r4)
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x40c(r29)
	addi     r27, r27, 1
	cmpwi    r27, 3
	addi     r29, r29, 4
	stw      r3, 0x10(r4)
	addi     r30, r30, 4
	blt      lbl_802C2284
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C22D8
 * Size:	000384
 */
void Houdai::Obj::createOnGroundEffect(int, Game::WaterBox*)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	or.      r30, r4, r4
	stw      r29, 0xc4(r1)
	mr       r29, r3
	mulli    r31, r30, 0x30
	add      r3, r29, r31
	lfs      f3, 0x328(r3)
	lfs      f2, 0x32c(r3)
	lfs      f1, 0x330(r3)
	stfs     f3, 0x64(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	bne      lbl_802C2468
	cmplwi   r5, 0
	beq      lbl_802C23F0
	mr       r3, r5
	lwz      r12, 0(r5)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0(r3)
	lis      r3, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r5, 0
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x9c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lfs      f1, 0x64(r1)
	lfs      f0, 0x6c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx10TDamaWalkw@ha
	li       r8, 0x28
	addi     r9, r4, __vt__Q23efx3Arg@l
	li       r7, 0x29
	li       r6, 0x2a
	stw      r0, 0x9c(r1)
	addi     r0, r3, __vt__Q23efx10TDamaWalkw@l
	addi     r3, r1, 0x9c
	stfs     f2, 0x68(r1)
	addi     r4, r1, 0x54
	stw      r9, 0x54(r1)
	stfs     f1, 0x58(r1)
	stfs     f2, 0x5c(r1)
	stfs     f0, 0x60(r1)
	sth      r8, 0xa0(r1)
	sth      r7, 0xa2(r1)
	sth      r6, 0xa4(r1)
	stw      r5, 0xa8(r1)
	stw      r5, 0xac(r1)
	stw      r5, 0xb0(r1)
	stw      r0, 0x9c(r1)
	bl       create__Q23efx8TSimple3FPQ23efx3Arg
	addi     r4, r31, 0x328
	li       r3, 0x380d
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec
	cmplwi   r3, 0
	beq      lbl_802C2454
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051C574@sda21(r2)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_802C2454

lbl_802C23F0:
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x34(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx10TOootaWalk@ha
	stw      r0, 0x34(r1)
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx10TOootaWalk@l
	li       r7, 0x115
	li       r6, 0x116
	stw      r4, 0x44(r1)
	addi     r3, r1, 0x34
	addi     r4, r1, 0x44
	stfs     f3, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	sth      r7, 0x38(r1)
	sth      r6, 0x3a(r1)
	stw      r5, 0x3c(r1)
	stw      r5, 0x40(r1)
	stw      r0, 0x34(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg

lbl_802C2454:
	addi     r4, r31, 0x328
	li       r3, 0x5927
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec
	b        lbl_802C2640

lbl_802C2468:
	cmplwi   r5, 0
	beq      lbl_802C256C
	mr       r3, r5
	lwz      r12, 0(r5)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	li       r5, 0
	lwz      r8, 0x64(r1)
	lis      r3, __vt__Q23efx5TBase@ha
	stfs     f0, 0x68(r1)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lwz      r6, 0x6c(r1)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r7, 0x68(r1)
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r8, 8(r1)
	addi     r11, r4, __vt__Q23efx3Arg@l
	lfs      f0, lbl_8051C578@sda21(r2)
	lis      r4, __vt__Q23efx8ArgScale@ha
	stw      r7, 0xc(r1)
	addi     r9, r3, __vt__Q23efx8TSimple3@l
	lfs      f3, 8(r1)
	lis      r3, __vt__Q23efx13TEnemyDownWat@ha
	stw      r6, 0x10(r1)
	li       r8, 0x54
	lfs      f2, 0xc(r1)
	li       r7, 0x55
	stw      r0, 0x70(r1)
	li       r6, 0x56
	lfs      f1, 0x10(r1)
	addi     r10, r4, __vt__Q23efx8ArgScale@l
	stw      r11, 0x88(r1)
	addi     r0, r3, __vt__Q23efx13TEnemyDownWat@l
	addi     r3, r1, 0x70
	addi     r4, r1, 0x88
	stw      r9, 0x70(r1)
	stfs     f3, 0x8c(r1)
	stfs     f2, 0x90(r1)
	stfs     f1, 0x94(r1)
	stw      r10, 0x88(r1)
	stfs     f0, 0x98(r1)
	sth      r8, 0x74(r1)
	sth      r7, 0x76(r1)
	sth      r6, 0x78(r1)
	stw      r5, 0x7c(r1)
	stw      r5, 0x80(r1)
	stw      r5, 0x84(r1)
	stw      r0, 0x70(r1)
	bl       create__Q23efx13TEnemyDownWatFPQ23efx3Arg
	addi     r4, r31, 0x328
	li       r3, 0x380c
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec
	cmplwi   r3, 0
	beq      lbl_802C25D4
	lwz      r12, 0x10(r3)
	li       r4, 0
	lfs      f1, lbl_8051C57C@sda21(r2)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_802C25D4

lbl_802C256C:
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f0, lbl_8051C4FC@sda21(r2)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx15TEnemyDownSmoke@ha
	stw      r0, 0x14(r1)
	addi     r4, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx15TEnemyDownSmoke@l
	li       r6, 0x53
	li       r5, 0
	stfs     f0, 0x20(r1)
	lfs      f0, lbl_8051C578@sda21(r2)
	addi     r3, r1, 0x14
	stw      r4, 0x24(r1)
	addi     r4, r1, 0x24
	stfs     f3, 0x28(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	sth      r6, 0x18(r1)
	stw      r5, 0x1c(r1)
	stw      r0, 0x14(r1)
	stfs     f0, 0x20(r1)
	bl       create__Q23efx15TEnemyDownSmokeFPQ23efx3Arg

lbl_802C25D4:
	lbz      r0, 0x2ec(r29)
	cmplwi   r0, 0
	beq      lbl_802C2630
	cmpwi    r30, 2
	li       r0, 0
	bne      lbl_802C25F4
	li       r0, 0
	b        lbl_802C2610

lbl_802C25F4:
	cmpwi    r30, 1
	bne      lbl_802C2604
	li       r0, 1
	b        lbl_802C2610

lbl_802C2604:
	cmpwi    r30, 3
	bne      lbl_802C2610
	li       r0, 2

lbl_802C2610:
	slwi     r0, r0, 2
	li       r4, 0
	add      r3, r29, r0
	lwz      r3, 0x3cc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802C2630:
	addi     r4, r31, 0x328
	li       r3, 0x5926
	add      r4, r29, r4
	bl       PSStartSoundVec__FUlP3Vec

lbl_802C2640:
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
 * Address:	802C265C
 * Size:	000168
 */
void Houdai::Obj::createOffGroundEffect(int, Game::WaterBox*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	lwz      r5, 0xc0(r3)
	lfs      f1, 0x200(r3)
	lfs      f0, 0x104(r5)
	fdivs    f1, f1, f0
	bne      lbl_802C271C
	lfs      f0, lbl_8051C580@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802C26B8
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x592d
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802C27B4

lbl_802C26B8:
	lfs      f0, lbl_8051C584@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802C26F0
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x592c
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802C27B4

lbl_802C26F0:
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x592b
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802C27B4

lbl_802C271C:
	lfs      f0, lbl_8051C580@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802C2754
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x592a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802C27B4

lbl_802C2754:
	lfs      f0, lbl_8051C584@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802C278C
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5929
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802C27B4

lbl_802C278C:
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5928
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802C27B4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C27C4
 * Size:	00005C
 */
void Houdai::Obj::startPinchJointEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	li       r30, 0

lbl_802C27E0:
	lwz      r3, 0x3c4(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 2
	blt      lbl_802C27E0
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
 * Address:	802C2820
 * Size:	000058
 */
void Houdai::Obj::finishPinchJointEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	li       r30, 0

lbl_802C283C:
	lwz      r3, 0x3c4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 2
	blt      lbl_802C283C
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
 * Address:	802C2878
 * Size:	000194
 */
void Houdai::Obj::createHoudaiDeadEffect()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	lis      r6, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	stw      r0, 0x74(r1)
	lis      r4, __vt__Q23efx8TSimple1@ha
	stmw     r21, 0x44(r1)
	mr       r31, r3
	lis      r3, __vt__Q23efx13TDamaDeadBomb@ha
	addi     r25, r6, __vt__Q23efx3Arg@l
	mr       r23, r31
	addi     r26, r5, __vt__Q23efx5TBase@l
	addi     r27, r4, __vt__Q23efx8TSimple1@l
	addi     r30, r3, __vt__Q23efx13TDamaDeadBomb@l
	li       r22, 0

lbl_802C28B4:
	addi     r24, r23, 0xc
	li       r21, 1
	li       r28, 0x1c
	li       r29, 0

lbl_802C28C4:
	stw      r25, 0x30(r1)
	addi     r3, r1, 0x24
	addi     r4, r1, 0x30
	lfs      f0, 0x304(r24)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x308(r24)
	stfs     f0, 0x38(r1)
	lfs      f0, 0x30c(r24)
	stw      r26, 0x24(r1)
	stw      r27, 0x24(r1)
	stfs     f0, 0x3c(r1)
	sth      r28, 0x28(r1)
	stw      r29, 0x2c(r1)
	stw      r30, 0x24(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	addi     r21, r21, 1
	addi     r24, r24, 0xc
	cmpwi    r21, 3
	blt      lbl_802C28C4
	addi     r22, r22, 1
	addi     r23, r23, 0x30
	cmpwi    r22, 4
	blt      lbl_802C28B4
	li       r21, 0
	mr       r23, r31

lbl_802C2928:
	lwz      r3, 0x3d8(r23)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r21, r21, 1
	addi     r23, r23, 4
	cmpwi    r21, 3
	blt      lbl_802C2928
	lwz      r3, 0x41c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx3Arg@ha
	lis      r5, __vt__Q23efx5TBase@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	lis      r4, __vt__Q23efx8TSimple1@ha
	stw      r0, 0x14(r1)
	lis      r3, __vt__Q23efx16THdamaDeadSteamT@ha
	addi     r8, r5, __vt__Q23efx5TBase@l
	addi     r7, r4, __vt__Q23efx8TSimple1@l
	lfs      f0, 0x18c(r31)
	addi     r0, r3, __vt__Q23efx16THdamaDeadSteamT@l
	li       r6, 0x202
	li       r5, 0
	stfs     f0, 0x18(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x14
	lfs      f0, 0x190(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x194(r31)
	stw      r8, 8(r1)
	stw      r7, 8(r1)
	stfs     f0, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	li       r25, 0
	mr       r23, r31

lbl_802C29D4:
	lwz      r3, 0x3c4(r23)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r25, r25, 1
	addi     r23, r23, 4
	cmpwi    r25, 2
	blt      lbl_802C29D4
	lmw      r21, 0x44(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C2A0C
 * Size:	000120
 */
void Houdai::Obj::updatePinchLife()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802C2B10
	lwz      r3, 0xc0(r29)
	lbz      r0, 0x2ec(r29)
	lfs      f1, 0x200(r29)
	lfs      f0, 0x104(r3)
	cmplwi   r0, 0
	fdivs    f1, f1, f0
	beq      lbl_802C2AA0
	lfs      f0, lbl_8051C584@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802C2B10
	li       r31, 0
	mr       r30, r29

lbl_802C2A70:
	lwz      r3, 0x3c4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1
	addi     r30, r30, 4
	cmpwi    r31, 2
	blt      lbl_802C2A70
	li       r0, 0
	stb      r0, 0x2ec(r29)
	b        lbl_802C2B10

lbl_802C2AA0:
	lfs      f0, lbl_8051C584@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802C2B10
	li       r31, 0
	mr       r30, r29

lbl_802C2AB4:
	lwz      r3, 0x3c4(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1
	addi     r30, r30, 4
	cmpwi    r31, 2
	blt      lbl_802C2AB4
	li       r0, 1
	mr       r3, r29
	stb      r0, 0x2ec(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5844
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802C2B10:
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
 * Address:	802C2B2C
 * Size:	0000F0
 */
void Houdai::Obj::createAppearEffect()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx3Arg@ha
	stw      r0, 0x44(r1)
	addi     r0, r4, __vt__Q23efx3Arg@l
	addi     r9, r5, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r31, 0x3c(r1)
	mr       r31, r3
	addi     r8, r4, __vt__Q23efx8TSimple2@l
	lis      r3, __vt__Q23efx13THdamaOnSmoke@ha
	stw      r0, 0x24(r1)
	addi     r0, r3, __vt__Q23efx13THdamaOnSmoke@l
	li       r7, 0x206
	li       r6, 0x207
	lfs      f0, 0x18c(r31)
	li       r5, 0
	addi     r3, r1, 0x14
	addi     r4, r1, 0x24
	stfs     f0, 0x28(r1)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x194(r31)
	stw      r9, 0x14(r1)
	stw      r8, 0x14(r1)
	stfs     f0, 0x30(r1)
	sth      r7, 0x18(r1)
	sth      r6, 0x1a(r1)
	stw      r5, 0x1c(r1)
	stw      r5, 0x20(r1)
	stw      r0, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r3, 0x3f8(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx14THdamaOnSteam2@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	li       r6, 0x209
	li       r5, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx14THdamaOnSteam2@l
	addi     r3, r1, 8
	addi     r4, r1, 0x24
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C2C1C
 * Size:	000034
 */
void Houdai::Obj::createAppearHahenEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x3e4(r3)
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
 * Address:	802C2C50
 * Size:	00003C
 */
void Houdai::Obj::createAppearFootEffect(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	slwi     r0, r4, 2
	add      r3, r3, r0
	li       r4, 0
	lwz      r3, 0x3e8(r3)
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
 * Address:	802C2C8C
 * Size:	00007C
 */
void Houdai::Obj::startSteamEffect(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_802C2CC4
	lwz      r3, 0x3fc(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802C2CC4:
	li       r30, 0

lbl_802C2CC8:
	lwz      r3, 0x400(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C2CC8
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
 * Address:	802C2D08
 * Size:	00006C
 */
void Houdai::Obj::finishSteamEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r3, 0x3fc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r30, 0

lbl_802C2D38:
	lwz      r3, 0x400(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C2D38
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
 * Address:	802C2D74
 * Size:	00005C
 */
void Houdai::Obj::startChimneyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	li       r30, 0

lbl_802C2D90:
	lwz      r3, 0x40c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C2D90
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
 * Address:	802C2DD0
 * Size:	000058
 */
void Houdai::Obj::finishChimneyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	li       r30, 0

lbl_802C2DEC:
	lwz      r3, 0x40c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C2DEC
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
 * Address:	802C2E28
 * Size:	000090
 */
void Houdai::Obj::createShotGunOpenEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051C510@sda21
	stw      r0, 0x34(r1)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	addi     r4, r4, __vt__Q23efx5TBase@l
	lfs      f0, 0xc(r3)
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r5, __vt__Q23efx3Arg@ha
	stw      r4, 8(r1)
	lis      r3, __vt__Q23efx10THdamaOpen@ha
	addi     r4, r5, __vt__Q23efx3Arg@l
	li       r6, 0x20a
	li       r5, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q23efx10THdamaOpen@l
	addi     r3, r1, 8
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	sth      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C2EB8
 * Size:	000258
 */
void Houdai::Obj::createDeadBombEffect()
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0xe4(r1)
	stmw     r21, 0xb4(r1)
	mr       r21, r3
	lwz      r3, 0x418(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, "zero__10Vector3<f>"@ha
	mr       r27, r21
	addi     r29, r3, "zero__10Vector3<f>"@l
	li       r26, 0

lbl_802C2EF4:
	cmpwi    r26, 0
	bne      lbl_802C2FFC
	lis      r8, __vt__Q23efx3Arg@ha
	lis      r7, "zero__10Vector3<f>"@ha
	lis      r6, __vt__Q23efx9ArgPosPos@ha
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple2@ha
	lis      r3, __vt__Q23efx16THdamaDeadHahen2@ha
	mr       r28, r27
	addi     r30, r8, __vt__Q23efx3Arg@l
	addi     r31, r7, "zero__10Vector3<f>"@l
	addi     r24, r6, __vt__Q23efx9ArgPosPos@l
	addi     r23, r5, __vt__Q23efx5TBase@l
	addi     r22, r4, __vt__Q23efx8TSimple2@l
	addi     r21, r3, __vt__Q23efx16THdamaDeadHahen2@l
	li       r25, 0

lbl_802C2F34:
	lwz      r12, 0x310(r28)
	li       r6, 0x1fe
	lwz      r11, 0x314(r28)
	li       r5, 0x1ff
	lwz      r10, 0x318(r28)
	li       r0, 0
	lwz      r9, 0x304(r28)
	addi     r3, r1, 0x44
	lwz      r8, 0x308(r28)
	addi     r4, r1, 0x7c
	lwz      r7, 0x30c(r28)
	stw      r12, 0x20(r1)
	lfs      f8, 0(r31)
	stw      r11, 0x24(r1)
	lfs      f7, 4(r29)
	stw      r10, 0x28(r1)
	lfs      f6, 8(r29)
	stw      r9, 0x2c(r1)
	lfs      f2, 0x20(r1)
	stw      r8, 0x30(r1)
	lfs      f5, 0x2c(r1)
	stw      r7, 0x34(r1)
	lfs      f4, 0x30(r1)
	stw      r23, 0x44(r1)
	lfs      f3, 0x34(r1)
	stw      r30, 0x7c(r1)
	lfs      f1, 0x24(r1)
	stw      r22, 0x44(r1)
	lfs      f0, 0x28(r1)
	stfs     f8, 0x80(r1)
	stfs     f7, 0x84(r1)
	stfs     f6, 0x88(r1)
	stw      r24, 0x7c(r1)
	stfs     f5, 0x8c(r1)
	stfs     f4, 0x90(r1)
	stfs     f3, 0x94(r1)
	stfs     f2, 0x98(r1)
	stfs     f1, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	sth      r6, 0x48(r1)
	sth      r5, 0x4a(r1)
	stw      r0, 0x4c(r1)
	stw      r0, 0x50(r1)
	stw      r21, 0x44(r1)
	bl       create__Q23efx16THdamaDeadHahen2FPQ23efx3Arg
	addi     r25, r25, 1
	addi     r28, r28, 0xc
	cmpwi    r25, 3
	blt      lbl_802C2F34
	b        lbl_802C30EC

lbl_802C2FFC:
	lis      r8, __vt__Q23efx3Arg@ha
	lis      r7, "zero__10Vector3<f>"@ha
	lis      r6, __vt__Q23efx9ArgPosPos@ha
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	lis      r3, __vt__Q23efx16THdamaDeadHahen1@ha
	mr       r28, r27
	addi     r31, r8, __vt__Q23efx3Arg@l
	addi     r21, r7, "zero__10Vector3<f>"@l
	addi     r22, r6, __vt__Q23efx9ArgPosPos@l
	addi     r23, r5, __vt__Q23efx5TBase@l
	addi     r24, r4, __vt__Q23efx8TSimple1@l
	addi     r30, r3, __vt__Q23efx16THdamaDeadHahen1@l
	li       r25, 0

lbl_802C3034:
	lwz      r11, 0x310(r28)
	li       r5, 0x1fd
	lwz      r10, 0x314(r28)
	li       r0, 0
	lwz      r9, 0x318(r28)
	addi     r3, r1, 0x38
	lwz      r8, 0x304(r28)
	addi     r4, r1, 0x54
	lwz      r7, 0x308(r28)
	lwz      r6, 0x30c(r28)
	stw      r11, 8(r1)
	lfs      f8, 0(r21)
	stw      r10, 0xc(r1)
	lfs      f7, 4(r29)
	stw      r9, 0x10(r1)
	lfs      f6, 8(r29)
	stw      r8, 0x14(r1)
	lfs      f2, 8(r1)
	stw      r7, 0x18(r1)
	lfs      f5, 0x14(r1)
	stw      r6, 0x1c(r1)
	lfs      f4, 0x18(r1)
	stw      r23, 0x38(r1)
	lfs      f3, 0x1c(r1)
	stw      r31, 0x54(r1)
	lfs      f1, 0xc(r1)
	stw      r24, 0x38(r1)
	lfs      f0, 0x10(r1)
	stfs     f8, 0x58(r1)
	stfs     f7, 0x5c(r1)
	stfs     f6, 0x60(r1)
	stw      r22, 0x54(r1)
	stfs     f5, 0x64(r1)
	stfs     f4, 0x68(r1)
	stfs     f3, 0x6c(r1)
	stfs     f2, 0x70(r1)
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	sth      r5, 0x3c(r1)
	stw      r0, 0x40(r1)
	stw      r30, 0x38(r1)
	bl       create__Q23efx16THdamaDeadHahen1FPQ23efx3Arg
	addi     r25, r25, 1
	addi     r28, r28, 0xc
	cmpwi    r25, 3
	blt      lbl_802C3034

lbl_802C30EC:
	addi     r26, r26, 1
	addi     r27, r27, 0x30
	cmpwi    r26, 4
	blt      lbl_802C2EF4
	lmw      r21, 0xb4(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C3110
 * Size:	00017C
 */
void Houdai::Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r31, r29

lbl_802C3134:
	lwz      r3, 0x3c4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 2
	blt      lbl_802C3134
	li       r30, 0
	mr       r31, r29

lbl_802C3160:
	lwz      r3, 0x3cc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C3160
	lwz      r3, 0x3e4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	li       r30, 0
	mr       r31, r29

lbl_802C31B4:
	lwz      r3, 0x3e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802C31B4
	lwz      r3, 0x3f8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3fc(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	li       r30, 0
	mr       r31, r29

lbl_802C3208:
	lwz      r3, 0x400(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C3208
	lwz      r3, 0x418(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x41c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r29)
	bl       effectDrawOn__Q34Game6Houdai16HoudaiShotGunMgrFv
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
 * Address:	802C328C
 * Size:	00017C
 */
void Houdai::Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r31, r29

lbl_802C32B0:
	lwz      r3, 0x3c4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 2
	blt      lbl_802C32B0
	li       r30, 0
	mr       r31, r29

lbl_802C32DC:
	lwz      r3, 0x3cc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C32DC
	lwz      r3, 0x3e4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	li       r30, 0
	mr       r31, r29

lbl_802C3330:
	lwz      r3, 0x3e8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 4
	blt      lbl_802C3330
	lwz      r3, 0x3f8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3fc(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	li       r30, 0
	mr       r31, r29

lbl_802C3384:
	lwz      r3, 0x400(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x40c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1
	addi     r31, r31, 4
	cmpwi    r30, 3
	blt      lbl_802C3384
	lwz      r3, 0x418(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x41c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r29)
	bl       effectDrawOff__Q34Game6Houdai16HoudaiShotGunMgrFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	802C3408
 * Size:	00000C
 */
void ArgPosPos::getName()
{
	/*
	lis      r3, lbl_8048B1EC@ha
	addi     r3, r3, lbl_8048B1EC@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C3414
 * Size:	00009C
 */
THdamaSteamBd::~THdamaSteamBd()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802C3494
	lis      r3, __vt__Q23efx13THdamaSteamBd@ha
	addi     r3, r3, __vt__Q23efx13THdamaSteamBd@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3484
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3484
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802C3484:
	extsh.   r0, r31
	ble      lbl_802C3494
	mr       r3, r30
	bl       __dl__FPv

lbl_802C3494:
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
 * Address:	802C34B0
 * Size:	00009C
 */
THdamaOnSteam1::~THdamaOnSteam1()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802C3530
	lis      r3, __vt__Q23efx14THdamaOnSteam1@ha
	addi     r3, r3, __vt__Q23efx14THdamaOnSteam1@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3520
	lis      r3, __vt__Q23efx10TChaseMtxT@ha
	addi     r3, r3, __vt__Q23efx10TChaseMtxT@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3520
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802C3520:
	extsh.   r0, r31
	ble      lbl_802C3530
	mr       r3, r30
	bl       __dl__FPv

lbl_802C3530:
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
 * Address:	802C354C
 * Size:	00009C
 */
THdamaOnHahen1::~THdamaOnHahen1()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802C35CC
	lis      r3, __vt__Q23efx14THdamaOnHahen1@ha
	addi     r3, r3, __vt__Q23efx14THdamaOnHahen1@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C35BC
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C35BC
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802C35BC:
	extsh.   r0, r31
	ble      lbl_802C35CC
	mr       r3, r30
	bl       __dl__FPv

lbl_802C35CC:
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
 * Address:	802C35E8
 * Size:	00009C
 */
THdamaHahen::~THdamaHahen()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802C3668
	lis      r3, __vt__Q23efx11THdamaHahen@ha
	addi     r3, r3, __vt__Q23efx11THdamaHahen@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3658
	lis      r3, __vt__Q23efx12TChasePosPos@ha
	addi     r3, r3, __vt__Q23efx12TChasePosPos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3658
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802C3658:
	extsh.   r0, r31
	ble      lbl_802C3668
	mr       r3, r30
	bl       __dl__FPv

lbl_802C3668:
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
 * Address:	802C3684
 * Size:	00009C
 */
THdamaSteamSt::~THdamaSteamSt()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802C3704
	lis      r3, __vt__Q23efx13THdamaSteamSt@ha
	addi     r3, r3, __vt__Q23efx13THdamaSteamSt@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C36F4
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C36F4
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802C36F4:
	extsh.   r0, r31
	ble      lbl_802C3704
	mr       r3, r30
	bl       __dl__FPv

lbl_802C3704:
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
 * Address:	802C3720
 * Size:	00009C
 */
THdamaSteam::~THdamaSteam()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802C37A0
	lis      r3, __vt__Q23efx11THdamaSteam@ha
	addi     r3, r3, __vt__Q23efx11THdamaSteam@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3790
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C3790
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802C3790:
	extsh.   r0, r31
	ble      lbl_802C37A0
	mr       r3, r30
	bl       __dl__FPv

lbl_802C37A0:
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
 * Address:	802C37BC
 * Size:	00009C
 */
THdamaOnHahen2::~THdamaOnHahen2()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802C383C
	lis      r3, __vt__Q23efx14THdamaOnHahen2@ha
	addi     r3, r3, __vt__Q23efx14THdamaOnHahen2@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C382C
	lis      r3, __vt__Q23efx12TChasePosPos@ha
	addi     r3, r3, __vt__Q23efx12TChasePosPos@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_802C382C
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_802C382C:
	extsh.   r0, r31
	ble      lbl_802C383C
	mr       r3, r30
	bl       __dl__FPv

lbl_802C383C:
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
 * Address:	802C3858
 * Size:	000004
 */
void Houdai::Obj::inWaterCallback(Game::WaterBox*) { }

/*
 * --INFO--
 * Address:	802C385C
 * Size:	000004
 */
void Houdai::Obj::outWaterCallback() { }

/*
 * --INFO--
 * Address:	802C3860
 * Size:	000008
 */
void Houdai::Obj::getDamageCoeStoneState()
{
	/*
	lfs      f1, lbl_8051C504@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802C3868
 * Size:	000004
 */
void Houdai::Obj::throwupItemInDeathProcedure() { }

/*
 * --INFO--
 * Address:	802C386C
 * Size:	000008
 */
u32 Houdai::Obj::getEnemyTypeID() { return 0x42; }

} // namespace efx

/*
 * --INFO--
 * Address:	802C3874
 * Size:	000028
 */
void __sinit_Houdai_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804D0E98@ha
	stw      r0, lbl_80515D98@sda21(r13)
	stfsu    f0, lbl_804D0E98@l(r3)
	stfs     f0, lbl_80515D9C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	802C389C
 * Size:	000014
 */
void EnemyBase::@1056 @12 @viewOnPelletKilled()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1056
	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802C38B0
 * Size:	000014
 */
void EnemyBase::@1056 @12 @viewStartCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1056
	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802C38C4
 * Size:	000014
 */
void EnemyBase::@1056 @12 @viewStartPreCarryMotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1056
	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802C38D8
 * Size:	000014
 */
void EnemyBase::@1056 @12 @view_finish_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1056
	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802C38EC
 * Size:	000014
 */
void EnemyBase::@1056 @12 @view_start_carrymotion()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1056
	b        view_start_carrymotion__Q24Game9EnemyBaseFv
	*/
}

/*
 * --INFO--
 * Address:	802C3900
 * Size:	000014
 */
void EnemyBase::@1056 @12 @viewGetShape()
{
	/*
	li       r11, 0xc
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -1056
	b        viewGetShape__Q24Game9EnemyBaseFv
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	802C3914
 * Size:	000008
 */
THdamaOnHahen2::@4 @~THdamaOnHahen2()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx14THdamaOnHahen2Fv
	*/
}

/*
 * --INFO--
 * Address:	802C391C
 * Size:	000008
 */
THdamaSteam::@4 @~THdamaSteam()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx11THdamaSteamFv
	*/
}

/*
 * --INFO--
 * Address:	802C3924
 * Size:	000008
 */
THdamaSteamSt::@4 @~THdamaSteamSt()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx13THdamaSteamStFv
	*/
}

/*
 * --INFO--
 * Address:	802C392C
 * Size:	000008
 */
THdamaHahen::@4 @~THdamaHahen()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx11THdamaHahenFv
	*/
}

/*
 * --INFO--
 * Address:	802C3934
 * Size:	000008
 */
THdamaOnHahen1::@4 @~THdamaOnHahen1()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx14THdamaOnHahen1Fv
	*/
}

/*
 * --INFO--
 * Address:	802C393C
 * Size:	000008
 */
THdamaOnSteam1::@4 @~THdamaOnSteam1()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx14THdamaOnSteam1Fv
	*/
}

/*
 * --INFO--
 * Address:	802C3944
 * Size:	000008
 */
THdamaSteamBd::@4 @~THdamaSteamBd()
{
	/*
addi     r3, r3, -4
b        __dt__Q23efx13THdamaSteamBdFv
	*/
}
} // namespace efx

} // namespace Game
