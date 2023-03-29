.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_Queen_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80487FF8, local
	.asciz "body_end"
.endobj lbl_80487FF8
.balign 4
.obj lbl_80488004, local
	.asciz "PSMainSide_ObjSound.h"
.endobj lbl_80488004
.balign 4
.obj lbl_8048801C, local
	.asciz "P2Assert"
.endobj lbl_8048801C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj "__vt__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
.endobj "__vt__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>"
.obj __vt__Q23efx14TChasePosYRot3, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx14TChasePosYRot3
.obj __vt__Q23efx13TQueenHanacho, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx13TQueenHanachoFv"
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
	.4byte __dt__Q23efx13TQueenHanachoFv
.endobj __vt__Q23efx13TQueenHanacho
.obj __vt__Q23efx12TQueenWakeup, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TQueenWakeupFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TQueenWakeupFv
.endobj __vt__Q23efx12TQueenWakeup
.obj __vt__Q23efx10TQueenDead, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx10TQueenDead
.obj __vt__Q23efx11TQueenFlick, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx11TQueenFlick
.obj __vt__Q23efx12TQueenDamage, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TQueenDamageFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TQueenDamageFv
.endobj __vt__Q23efx12TQueenDamage
.obj __vt__Q23efx15TQueenCrashRock, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TQueenCrashRockFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx15TQueenCrashRockFv
.endobj __vt__Q23efx15TQueenCrashRock
.obj __vt__Q23efx12TQueenCrashL, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TQueenCrashLFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TQueenCrashLFv
.endobj __vt__Q23efx12TQueenCrashL
.obj __vt__Q23efx12TQueenCrashR, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TQueenCrashRFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TQueenCrashRFv
.endobj __vt__Q23efx12TQueenCrashR
.obj __vt__Q23efx10TQueenRoll, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx10TQueenRoll
.obj __vt__Q23efx12TQueenRollCL, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx12TQueenRollCL
.obj __vt__Q23efx12TQueenRollCR, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx12TQueenRollCR
.obj __vt__Q23efx9TQueenLay, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TQueenLayFv"
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
	.4byte __dt__Q23efx9TQueenLayFv
.endobj __vt__Q23efx9TQueenLay
.obj "__vt__Q24Game31EnemyIterator<Q34Game4Baby3Obj>", weak
	.4byte 0
	.4byte 0
	.4byte "first__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"
	.4byte "next__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"
	.4byte "isDone__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"
	.4byte "__ml__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"
.endobj "__vt__Q24Game31EnemyIterator<Q34Game4Baby3Obj>"
.obj __vt__Q34Game5Queen3Obj, global
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
	.4byte onInit__Q34Game5Queen3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game5Queen3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game5Queen3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game5Queen3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game5Queen3ObjFv
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
	.4byte getShadowParam__Q34Game5Queen3ObjFRQ24Game11ShadowParam
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
	.4byte ignoreAtari__Q34Game5Queen3ObjFPQ24Game8Creature
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
	.4byte __dt__Q34Game5Queen3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game5Queen3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game5Queen3ObjFv
	.4byte doUpdateCommon__Q34Game5Queen3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game5Queen3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game5Queen3ObjFR8Graphics
	.4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
	.4byte doSimulationGround__Q24Game9EnemyBaseFf
	.4byte doSimulationFlying__Q24Game9EnemyBaseFf
	.4byte doSimulationStick__Q24Game9EnemyBaseFf
	.4byte changeMaterial__Q24Game9EnemyBaseFv
	.4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
	.4byte getFitEffectPos__Q24Game9EnemyBaseFv
	.4byte viewGetShape__Q24Game9EnemyBaseFv
	.4byte view_start_carrymotion__Q24Game9EnemyBaseFv
	.4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
	.4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
	.4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
	.4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
	.4byte setParameters__Q34Game5Queen3ObjFv
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
	.4byte getEnemyTypeID__Q34Game5Queen3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q24Game9EnemyBaseFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game5Queen3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q34Game5Queen3ObjFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game5Queen3ObjFv
	.4byte doFinishStoneState__Q34Game5Queen3ObjFv
	.4byte getDamageCoeStoneState__Q34Game5Queen3ObjFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q34Game5Queen3ObjFv
	.4byte setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg
	.4byte getCarcassArgHeight__Q24Game9EnemyBaseFv
	.4byte doBecomeCarcass__Q24Game9EnemyBaseFv
	.4byte startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv
	.4byte wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo
	.4byte getDownSmokeScale__Q24Game9EnemyBaseFv
	.4byte doStartMovie__Q34Game5Queen3ObjFv
	.4byte doEndMovie__Q34Game5Queen3ObjFv
	.4byte setFSM__Q34Game5Queen3ObjFPQ34Game5Queen3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@784@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@784@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@784@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.endobj __vt__Q34Game5Queen3Obj

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051B818, local
	.float 0.0
.endobj lbl_8051B818
.obj lbl_8051B81C, local
	.float 30.0
.endobj lbl_8051B81C
.obj lbl_8051B820, local
	.float 15.0
.endobj lbl_8051B820
.obj lbl_8051B824, local
	.float 1.0
.endobj lbl_8051B824
.obj lbl_8051B828, local
	.float 50.0
.endobj lbl_8051B828
.obj lbl_8051B82C, local
	.float 45.0
.endobj lbl_8051B82C
.obj lbl_8051B830, local
	.float 0.1
.endobj lbl_8051B830
.obj lbl_8051B834, local
	.float 0.2
.endobj lbl_8051B834
.obj lbl_8051B838, local
	.float 10.0
.endobj lbl_8051B838
.obj lbl_8051B83C, local
	.float -1000.0
.endobj lbl_8051B83C
.obj lbl_8051B840, local
	.float 325.9493
.endobj lbl_8051B840
.obj lbl_8051B844, local
	.float -325.9493
.endobj lbl_8051B844
.obj lbl_8051B848, local
	.float 250.0
.endobj lbl_8051B848
.obj lbl_8051B84C, local # pi
	.float 3.1415927
.endobj lbl_8051B84C
.obj lbl_8051B850, local # pi/2
	.float 1.5707964
.endobj lbl_8051B850
.obj lbl_8051B854, local
	.float 32768.0
.endobj lbl_8051B854
.obj lbl_8051B858, local
	.float 0.5
.endobj lbl_8051B858
.balign 8
.obj lbl_8051B860, local
	.8byte 0x4330000080000000
.endobj lbl_8051B860
.obj lbl_8051B868, local
	.float 225.0
.endobj lbl_8051B868
.obj lbl_8051B86C, local
	.float 150.0
.endobj lbl_8051B86C
.obj lbl_8051B870, local
	.float 1000.0
.endobj lbl_8051B870
.balign 4
.obj lbl_8051B874, local
	.asciz "body5"
.endobj lbl_8051B874
.balign 4
.obj lbl_8051B87C, local
	.asciz "head"
.endobj lbl_8051B87C
.balign 4
.obj lbl_8051B884, local
	.float 0.25
.endobj lbl_8051B884

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__Q34Game5Queen3ObjFv, global
/* 802894D4 00286414  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802894D8 00286418  7C 08 02 A6 */	mflr r0
/* 802894DC 0028641C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802894E0 00286420  7C 80 07 35 */	extsh. r0, r4
/* 802894E4 00286424  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802894E8 00286428  7C 7F 1B 78 */	mr r31, r3
/* 802894EC 0028642C  93 C1 00 08 */	stw r30, 8(r1)
/* 802894F0 00286430  41 82 00 24 */	beq .L_80289514
/* 802894F4 00286434  38 1F 03 10 */	addi r0, r31, 0x310
/* 802894F8 00286438  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802894FC 0028643C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80289500 00286440  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 80289504 00286444  38 00 00 00 */	li r0, 0
/* 80289508 00286448  90 7F 03 10 */	stw r3, 0x310(r31)
/* 8028950C 0028644C  90 1F 03 14 */	stw r0, 0x314(r31)
/* 80289510 00286450  90 1F 03 18 */	stw r0, 0x318(r31)
.L_80289514:
/* 80289514 00286454  7F E3 FB 78 */	mr r3, r31
/* 80289518 00286458  38 80 00 00 */	li r4, 0
/* 8028951C 0028645C  4B E7 7E 85 */	bl __ct__Q24Game9EnemyBaseFv
/* 80289520 00286460  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen3Obj@ha
/* 80289524 00286464  38 1F 03 10 */	addi r0, r31, 0x310
/* 80289528 00286468  38 A3 A0 1C */	addi r5, r3, __vt__Q34Game5Queen3Obj@l
/* 8028952C 0028646C  38 60 00 2C */	li r3, 0x2c
/* 80289530 00286470  90 BF 00 00 */	stw r5, 0(r31)
/* 80289534 00286474  38 85 01 B0 */	addi r4, r5, 0x1b0
/* 80289538 00286478  38 A5 02 FC */	addi r5, r5, 0x2fc
/* 8028953C 0028647C  90 9F 01 78 */	stw r4, 0x178(r31)
/* 80289540 00286480  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 80289544 00286484  90 A4 00 00 */	stw r5, 0(r4)
/* 80289548 00286488  80 9F 01 7C */	lwz r4, 0x17c(r31)
/* 8028954C 0028648C  7C 04 00 50 */	subf r0, r4, r0
/* 80289550 00286490  90 04 00 0C */	stw r0, 0xc(r4)
/* 80289554 00286494  4B D9 A9 51 */	bl __nw__FUl
/* 80289558 00286498  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028955C 0028649C  41 82 00 44 */	beq .L_802895A0
/* 80289560 002864A0  4B E9 E4 15 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 80289564 002864A4  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen14ProperAnimator@ha
/* 80289568 002864A8  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 8028956C 002864AC  38 03 9C 08 */	addi r0, r3, __vt__Q34Game5Queen14ProperAnimator@l
/* 80289570 002864B0  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 80289574 002864B4  90 1E 00 00 */	stw r0, 0(r30)
/* 80289578 002864B8  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 8028957C 002864BC  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 80289580 002864C0  38 00 00 00 */	li r0, 0
/* 80289584 002864C4  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80289588 002864C8  90 7E 00 10 */	stw r3, 0x10(r30)
/* 8028958C 002864CC  98 1E 00 28 */	stb r0, 0x28(r30)
/* 80289590 002864D0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80289594 002864D4  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80289598 002864D8  98 1E 00 28 */	stb r0, 0x28(r30)
/* 8028959C 002864DC  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802895A0:
/* 802895A0 002864E0  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802895A4 002864E4  38 60 00 1C */	li r3, 0x1c
/* 802895A8 002864E8  4B D9 A8 FD */	bl __nw__FUl
/* 802895AC 002864EC  7C 64 1B 79 */	or. r4, r3, r3
/* 802895B0 002864F0  41 82 00 24 */	beq .L_802895D4
/* 802895B4 002864F4  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802895B8 002864F8  3C 60 80 4D */	lis r3, __vt__Q34Game5Queen3FSM@ha
/* 802895BC 002864FC  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802895C0 00286500  38 A0 FF FF */	li r5, -1
/* 802895C4 00286504  90 04 00 00 */	stw r0, 0(r4)
/* 802895C8 00286508  38 03 9B E4 */	addi r0, r3, __vt__Q34Game5Queen3FSM@l
/* 802895CC 0028650C  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802895D0 00286510  90 04 00 00 */	stw r0, 0(r4)
.L_802895D4:
/* 802895D4 00286514  81 9F 00 00 */	lwz r12, 0(r31)
/* 802895D8 00286518  7F E3 FB 78 */	mr r3, r31
/* 802895DC 0028651C  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802895E0 00286520  7D 89 03 A6 */	mtctr r12
/* 802895E4 00286524  4E 80 04 21 */	bctrl 
/* 802895E8 00286528  38 60 00 0C */	li r3, 0xc
/* 802895EC 0028652C  4B D9 A8 B9 */	bl __nw__FUl
/* 802895F0 00286530  7C 60 1B 79 */	or. r0, r3, r3
/* 802895F4 00286534  41 82 00 10 */	beq .L_80289604
/* 802895F8 00286538  7F E4 FB 78 */	mr r4, r31
/* 802895FC 0028653C  48 00 57 19 */	bl __ct__Q34Game5Queen14QueenShadowMgrFPQ34Game5Queen3Obj
/* 80289600 00286540  7C 60 1B 78 */	mr r0, r3
.L_80289604:
/* 80289604 00286544  90 1F 02 D8 */	stw r0, 0x2d8(r31)
/* 80289608 00286548  38 60 00 0C */	li r3, 0xc
/* 8028960C 0028654C  4B D9 A8 99 */	bl __nw__FUl
/* 80289610 00286550  7C 7E 1B 79 */	or. r30, r3, r3
/* 80289614 00286554  41 82 00 14 */	beq .L_80289628
/* 80289618 00286558  48 1A AD 3D */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 8028961C 0028655C  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 80289620 00286560  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 80289624 00286564  90 1E 00 00 */	stw r0, 0(r30)
.L_80289628:
/* 80289628 00286568  93 DF 02 DC */	stw r30, 0x2dc(r31)
/* 8028962C 0028656C  7F E3 FB 78 */	mr r3, r31
/* 80289630 00286570  48 00 1C F1 */	bl createEffect__Q34Game5Queen3ObjFv
/* 80289634 00286574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289638 00286578  7F E3 FB 78 */	mr r3, r31
/* 8028963C 0028657C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289640 00286580  83 C1 00 08 */	lwz r30, 8(r1)
/* 80289644 00286584  7C 08 03 A6 */	mtlr r0
/* 80289648 00286588  38 21 00 10 */	addi r1, r1, 0x10
/* 8028964C 0028658C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game5Queen3ObjFv

.fn setInitialSetting__Q34Game5Queen3ObjFPQ24Game21EnemyInitialParamBase, global
/* 80289650 00286590  4E 80 00 20 */	blr 
.endfn setInitialSetting__Q34Game5Queen3ObjFPQ24Game21EnemyInitialParamBase

.fn onInit__Q34Game5Queen3ObjFPQ24Game15CreatureInitArg, global
/* 80289654 00286594  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289658 00286598  7C 08 02 A6 */	mflr r0
/* 8028965C 0028659C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289660 002865A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289664 002865A4  7C 7F 1B 78 */	mr r31, r3
/* 80289668 002865A8  4B E7 83 F1 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 8028966C 002865AC  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 80289670 002865B0  38 80 FF FF */	li r4, -1
/* 80289674 002865B4  38 00 00 00 */	li r0, 0
/* 80289678 002865B8  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028967C 002865BC  54 65 05 24 */	rlwinm r5, r3, 0, 0x14, 0x12
/* 80289680 002865C0  7F E3 FB 78 */	mr r3, r31
/* 80289684 002865C4  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 80289688 002865C8  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 8028968C 002865CC  54 A5 06 B0 */	rlwinm r5, r5, 0, 0x1a, 0x18
/* 80289690 002865D0  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 80289694 002865D4  90 9F 02 D4 */	stw r4, 0x2d4(r31)
/* 80289698 002865D8  98 1F 02 C2 */	stb r0, 0x2c2(r31)
/* 8028969C 002865DC  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802896A0 002865E0  98 1F 02 C1 */	stb r0, 0x2c1(r31)
/* 802896A4 002865E4  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802896A8 002865E8  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802896AC 002865EC  48 00 15 C5 */	bl resetJointShadow__Q34Game5Queen3ObjFv
/* 802896B0 002865F0  80 7F 02 D8 */	lwz r3, 0x2d8(r31)
/* 802896B4 002865F4  48 00 57 15 */	bl init__Q34Game5Queen14QueenShadowMgrFv
/* 802896B8 002865F8  7F E3 FB 78 */	mr r3, r31
/* 802896BC 002865FC  48 00 21 99 */	bl setupEffect__Q34Game5Queen3ObjFv
/* 802896C0 00286600  38 00 00 00 */	li r0, 0
/* 802896C4 00286604  7F E3 FB 78 */	mr r3, r31
/* 802896C8 00286608  98 1F 02 C4 */	stb r0, 0x2c4(r31)
/* 802896CC 0028660C  98 1F 02 C5 */	stb r0, 0x2c5(r31)
/* 802896D0 00286610  48 00 1B 29 */	bl resetMidBossAppearBGM__Q34Game5Queen3ObjFv
/* 802896D4 00286614  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 802896D8 00286618  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 802896DC 0028661C  81 83 00 00 */	lwz r12, 0(r3)
/* 802896E0 00286620  80 84 00 44 */	lwz r4, 0x44(r4)
/* 802896E4 00286624  81 8C 00 08 */	lwz r12, 8(r12)
/* 802896E8 00286628  7D 89 03 A6 */	mtctr r12
/* 802896EC 0028662C  4E 80 04 21 */	bctrl 
/* 802896F0 00286630  88 1F 02 C0 */	lbz r0, 0x2c0(r31)
/* 802896F4 00286634  28 00 00 00 */	cmplwi r0, 0
/* 802896F8 00286638  41 82 00 28 */	beq .L_80289720
/* 802896FC 0028663C  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80289700 00286640  7F E4 FB 78 */	mr r4, r31
/* 80289704 00286644  38 A0 00 02 */	li r5, 2
/* 80289708 00286648  38 C0 00 00 */	li r6, 0
/* 8028970C 0028664C  81 83 00 00 */	lwz r12, 0(r3)
/* 80289710 00286650  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80289714 00286654  7D 89 03 A6 */	mtctr r12
/* 80289718 00286658  4E 80 04 21 */	bctrl 
/* 8028971C 0028665C  48 00 00 24 */	b .L_80289740
.L_80289720:
/* 80289720 00286660  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 80289724 00286664  7F E4 FB 78 */	mr r4, r31
/* 80289728 00286668  38 A0 00 01 */	li r5, 1
/* 8028972C 0028666C  38 C0 00 00 */	li r6, 0
/* 80289730 00286670  81 83 00 00 */	lwz r12, 0(r3)
/* 80289734 00286674  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80289738 00286678  7D 89 03 A6 */	mtctr r12
/* 8028973C 0028667C  4E 80 04 21 */	bctrl 
.L_80289740:
/* 80289740 00286680  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289744 00286684  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289748 00286688  7C 08 03 A6 */	mtlr r0
/* 8028974C 0028668C  38 21 00 10 */	addi r1, r1, 0x10
/* 80289750 00286690  4E 80 00 20 */	blr 
.endfn onInit__Q34Game5Queen3ObjFPQ24Game15CreatureInitArg

.fn onKill__Q34Game5Queen3ObjFPQ24Game15CreatureKillArg, global
/* 80289754 00286694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289758 00286698  7C 08 02 A6 */	mflr r0
/* 8028975C 0028669C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289760 002866A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289764 002866A4  7C 9F 23 78 */	mr r31, r4
/* 80289768 002866A8  38 80 00 00 */	li r4, 0
/* 8028976C 002866AC  93 C1 00 08 */	stw r30, 8(r1)
/* 80289770 002866B0  7C 7E 1B 78 */	mr r30, r3
/* 80289774 002866B4  48 00 22 0D */	bl finishRollingEffect__Q34Game5Queen3ObjFb
/* 80289778 002866B8  7F C3 F3 78 */	mr r3, r30
/* 8028977C 002866BC  48 00 23 7D */	bl finishDamageEffect__Q34Game5Queen3ObjFv
/* 80289780 002866C0  7F C3 F3 78 */	mr r3, r30
/* 80289784 002866C4  48 00 24 75 */	bl finishSleepEffect__Q34Game5Queen3ObjFv
/* 80289788 002866C8  7F C3 F3 78 */	mr r3, r30
/* 8028978C 002866CC  7F E4 FB 78 */	mr r4, r31
/* 80289790 002866D0  4B E7 87 59 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 80289794 002866D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289798 002866D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028979C 002866DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802897A0 002866E0  7C 08 03 A6 */	mtlr r0
/* 802897A4 002866E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802897A8 002866E8  4E 80 00 20 */	blr 
.endfn onKill__Q34Game5Queen3ObjFPQ24Game15CreatureKillArg

.fn setParameters__Q34Game5Queen3ObjFv, global
/* 802897AC 002866EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802897B0 002866F0  7C 08 02 A6 */	mflr r0
/* 802897B4 002866F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802897B8 002866F8  38 00 00 01 */	li r0, 1
/* 802897BC 002866FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802897C0 00286700  7C 7F 1B 78 */	mr r31, r3
/* 802897C4 00286704  98 03 02 C0 */	stb r0, 0x2c0(r3)
/* 802897C8 00286708  38 00 00 00 */	li r0, 0
/* 802897CC 0028670C  98 03 02 C3 */	stb r0, 0x2c3(r3)
/* 802897D0 00286710  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802897D4 00286714  28 03 00 00 */	cmplwi r3, 0
/* 802897D8 00286718  41 82 00 70 */	beq .L_80289848
/* 802897DC 0028671C  80 83 00 44 */	lwz r4, 0x44(r3)
/* 802897E0 00286720  2C 04 00 04 */	cmpwi r4, 4
/* 802897E4 00286724  40 82 00 0C */	bne .L_802897F0
/* 802897E8 00286728  98 1F 02 C0 */	stb r0, 0x2c0(r31)
/* 802897EC 0028672C  48 00 00 5C */	b .L_80289848
.L_802897F0:
/* 802897F0 00286730  88 03 00 48 */	lbz r0, 0x48(r3)
/* 802897F4 00286734  28 00 00 00 */	cmplwi r0, 0
/* 802897F8 00286738  41 82 00 50 */	beq .L_80289848
/* 802897FC 0028673C  2C 04 00 00 */	cmpwi r4, 0
/* 80289800 00286740  40 82 00 48 */	bne .L_80289848
/* 80289804 00286744  80 63 00 58 */	lwz r3, 0x58(r3)
/* 80289808 00286748  28 03 00 00 */	cmplwi r3, 0
/* 8028980C 0028674C  41 82 00 3C */	beq .L_80289848
/* 80289810 00286750  81 83 00 00 */	lwz r12, 0(r3)
/* 80289814 00286754  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 80289818 00286758  7D 89 03 A6 */	mtctr r12
/* 8028981C 0028675C  4E 80 04 21 */	bctrl 
/* 80289820 00286760  3C 03 99 A1 */	subis r0, r3, 0x665f
/* 80289824 00286764  28 00 30 31 */	cmplwi r0, 0x3031
/* 80289828 00286768  40 82 00 20 */	bne .L_80289848
/* 8028982C 0028676C  38 60 00 00 */	li r3, 0
/* 80289830 00286770  38 00 00 01 */	li r0, 1
/* 80289834 00286774  98 7F 02 C0 */	stb r3, 0x2c0(r31)
/* 80289838 00286778  98 1F 02 C3 */	stb r0, 0x2c3(r31)
/* 8028983C 0028677C  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80289840 00286780  C0 03 08 6C */	lfs f0, 0x86c(r3)
/* 80289844 00286784  D0 03 01 04 */	stfs f0, 0x104(r3)
.L_80289848:
/* 80289848 00286788  7F E3 FB 78 */	mr r3, r31
/* 8028984C 0028678C  4B E7 93 8D */	bl setParameters__Q24Game9EnemyBaseFv
/* 80289850 00286790  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289854 00286794  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289858 00286798  7C 08 03 A6 */	mtlr r0
/* 8028985C 0028679C  38 21 00 10 */	addi r1, r1, 0x10
/* 80289860 002867A0  4E 80 00 20 */	blr 
.endfn setParameters__Q34Game5Queen3ObjFv

.fn doUpdate__Q34Game5Queen3ObjFv, global
/* 80289864 002867A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289868 002867A8  7C 08 02 A6 */	mflr r0
/* 8028986C 002867AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289870 002867B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289874 002867B4  7C 7F 1B 78 */	mr r31, r3
/* 80289878 002867B8  80 63 02 D8 */	lwz r3, 0x2d8(r3)
/* 8028987C 002867BC  48 00 57 F1 */	bl update__Q34Game5Queen14QueenShadowMgrFv
/* 80289880 002867C0  7F E3 FB 78 */	mr r3, r31
/* 80289884 002867C4  48 00 11 25 */	bl updateCreateBaby__Q34Game5Queen3ObjFv
/* 80289888 002867C8  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 8028988C 002867CC  7F E4 FB 78 */	mr r4, r31
/* 80289890 002867D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80289894 002867D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80289898 002867D8  7D 89 03 A6 */	mtctr r12
/* 8028989C 002867DC  4E 80 04 21 */	bctrl 
/* 802898A0 002867E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802898A4 002867E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802898A8 002867E8  7C 08 03 A6 */	mtlr r0
/* 802898AC 002867EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802898B0 002867F0  4E 80 00 20 */	blr 
.endfn doUpdate__Q34Game5Queen3ObjFv

.fn doUpdateCommon__Q34Game5Queen3ObjFv, global
/* 802898B4 002867F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802898B8 002867F8  7C 08 02 A6 */	mflr r0
/* 802898BC 002867FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802898C0 00286800  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802898C4 00286804  7C 7F 1B 78 */	mr r31, r3
/* 802898C8 00286808  4B E7 96 4D */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802898CC 0028680C  7F E3 FB 78 */	mr r3, r31
/* 802898D0 00286810  48 00 18 2D */	bl updateBossBGM__Q34Game5Queen3ObjFv
/* 802898D4 00286814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802898D8 00286818  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802898DC 0028681C  7C 08 03 A6 */	mtlr r0
/* 802898E0 00286820  38 21 00 10 */	addi r1, r1, 0x10
/* 802898E4 00286824  4E 80 00 20 */	blr 
.endfn doUpdateCommon__Q34Game5Queen3ObjFv

.fn doAnimationCullingOff__Q34Game5Queen3ObjFv, global
/* 802898E8 00286828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802898EC 0028682C  7C 08 02 A6 */	mflr r0
/* 802898F0 00286830  90 01 00 14 */	stw r0, 0x14(r1)
/* 802898F4 00286834  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802898F8 00286838  7C 7F 1B 78 */	mr r31, r3
/* 802898FC 0028683C  4B E7 97 85 */	bl doAnimationCullingOff__Q24Game9EnemyBaseFv
/* 80289900 00286840  7F E3 FB 78 */	mr r3, r31
/* 80289904 00286844  81 9F 00 00 */	lwz r12, 0(r31)
/* 80289908 00286848  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8028990C 0028684C  7D 89 03 A6 */	mtctr r12
/* 80289910 00286850  4E 80 04 21 */	bctrl 
/* 80289914 00286854  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80289918 00286858  41 82 00 10 */	beq .L_80289928
/* 8028991C 0028685C  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 80289920 00286860  C0 22 D4 BC */	lfs f1, lbl_8051B81C@sda21(r2)
/* 80289924 00286864  48 1A AC 29 */	bl animate__Q23Sys15MatBaseAnimatorFf
.L_80289928:
/* 80289928 00286868  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028992C 0028686C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289930 00286870  7C 08 03 A6 */	mtlr r0
/* 80289934 00286874  38 21 00 10 */	addi r1, r1, 0x10
/* 80289938 00286878  4E 80 00 20 */	blr 
.endfn doAnimationCullingOff__Q34Game5Queen3ObjFv

.fn doDirectDraw__Q34Game5Queen3ObjFR8Graphics, global
/* 8028993C 0028687C  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game5Queen3ObjFR8Graphics

.fn doDebugDraw__Q34Game5Queen3ObjFR8Graphics, global
/* 80289940 00286880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289944 00286884  7C 08 02 A6 */	mflr r0
/* 80289948 00286888  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028994C 0028688C  4B E7 C5 21 */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 80289950 00286890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289954 00286894  7C 08 03 A6 */	mtlr r0
/* 80289958 00286898  38 21 00 10 */	addi r1, r1, 0x10
/* 8028995C 0028689C  4E 80 00 20 */	blr 
.endfn doDebugDraw__Q34Game5Queen3ObjFR8Graphics

.fn setFSM__Q34Game5Queen3ObjFPQ34Game5Queen3FSM, global
/* 80289960 002868A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289964 002868A4  7C 08 02 A6 */	mflr r0
/* 80289968 002868A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028996C 002868AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289970 002868B0  7C 7F 1B 78 */	mr r31, r3
/* 80289974 002868B4  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 80289978 002868B8  7F E4 FB 78 */	mr r4, r31
/* 8028997C 002868BC  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 80289980 002868C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80289984 002868C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80289988 002868C8  7D 89 03 A6 */	mtctr r12
/* 8028998C 002868CC  4E 80 04 21 */	bctrl 
/* 80289990 002868D0  38 00 00 00 */	li r0, 0
/* 80289994 002868D4  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 80289998 002868D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028999C 002868DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802899A0 002868E0  7C 08 03 A6 */	mtlr r0
/* 802899A4 002868E4  38 21 00 10 */	addi r1, r1, 0x10
/* 802899A8 002868E8  4E 80 00 20 */	blr 
.endfn setFSM__Q34Game5Queen3ObjFPQ34Game5Queen3FSM

.fn getShadowParam__Q34Game5Queen3ObjFRQ24Game11ShadowParam, global
/* 802899AC 002868EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802899B0 002868F0  7C 08 02 A6 */	mflr r0
/* 802899B4 002868F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802899B8 002868F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802899BC 002868FC  7C 9F 23 78 */	mr r31, r4
/* 802899C0 00286900  7C 64 1B 78 */	mr r4, r3
/* 802899C4 00286904  38 61 00 08 */	addi r3, r1, 8
/* 802899C8 00286908  81 84 00 00 */	lwz r12, 0(r4)
/* 802899CC 0028690C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802899D0 00286910  7D 89 03 A6 */	mtctr r12
/* 802899D4 00286914  4E 80 04 21 */	bctrl 
/* 802899D8 00286918  C0 01 00 08 */	lfs f0, 8(r1)
/* 802899DC 0028691C  C0 82 D4 C0 */	lfs f4, lbl_8051B820@sda21(r2)
/* 802899E0 00286920  D0 1F 00 00 */	stfs f0, 0(r31)
/* 802899E4 00286924  C0 62 D4 B8 */	lfs f3, lbl_8051B818@sda21(r2)
/* 802899E8 00286928  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802899EC 0028692C  C0 42 D4 C4 */	lfs f2, lbl_8051B824@sda21(r2)
/* 802899F0 00286930  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802899F4 00286934  C0 22 D4 C8 */	lfs f1, lbl_8051B828@sda21(r2)
/* 802899F8 00286938  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 802899FC 0028693C  C0 02 D4 CC */	lfs f0, lbl_8051B82C@sda21(r2)
/* 80289A00 00286940  D0 BF 00 08 */	stfs f5, 8(r31)
/* 80289A04 00286944  C0 BF 00 04 */	lfs f5, 4(r31)
/* 80289A08 00286948  EC 85 20 2A */	fadds f4, f5, f4
/* 80289A0C 0028694C  D0 9F 00 04 */	stfs f4, 4(r31)
/* 80289A10 00286950  D0 7F 00 0C */	stfs f3, 0xc(r31)
/* 80289A14 00286954  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 80289A18 00286958  D0 7F 00 14 */	stfs f3, 0x14(r31)
/* 80289A1C 0028695C  D0 3F 00 18 */	stfs f1, 0x18(r31)
/* 80289A20 00286960  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 80289A24 00286964  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80289A28 00286968  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80289A2C 0028696C  7C 08 03 A6 */	mtlr r0
/* 80289A30 00286970  38 21 00 20 */	addi r1, r1, 0x20
/* 80289A34 00286974  4E 80 00 20 */	blr 
.endfn getShadowParam__Q34Game5Queen3ObjFRQ24Game11ShadowParam

.fn damageCallBack__Q34Game5Queen3ObjFPQ24Game8CreaturefP8CollPart, global
/* 80289A38 00286978  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80289A3C 0028697C  7C 08 02 A6 */	mflr r0
/* 80289A40 00286980  90 01 00 24 */	stw r0, 0x24(r1)
/* 80289A44 00286984  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 80289A48 00286988  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 80289A4C 0028698C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289A50 00286990  FF E0 08 90 */	fmr f31, f1
/* 80289A54 00286994  28 05 00 00 */	cmplwi r5, 0
/* 80289A58 00286998  7C 7F 1B 78 */	mr r31, r3
/* 80289A5C 0028699C  41 82 00 6C */	beq .L_80289AC8
/* 80289A60 002869A0  28 04 00 00 */	cmplwi r4, 0
/* 80289A64 002869A4  41 82 00 64 */	beq .L_80289AC8
/* 80289A68 002869A8  7C 83 23 78 */	mr r3, r4
/* 80289A6C 002869AC  81 84 00 00 */	lwz r12, 0(r4)
/* 80289A70 002869B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80289A74 002869B4  7D 89 03 A6 */	mtctr r12
/* 80289A78 002869B8  4E 80 04 21 */	bctrl 
/* 80289A7C 002869BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80289A80 002869C0  41 82 00 48 */	beq .L_80289AC8
/* 80289A84 002869C4  7F E3 FB 78 */	mr r3, r31
/* 80289A88 002869C8  4B E7 D9 6D */	bl getStateID__Q24Game9EnemyBaseFv
/* 80289A8C 002869CC  2C 03 00 01 */	cmpwi r3, 1
/* 80289A90 002869D0  40 82 00 10 */	bne .L_80289AA0
/* 80289A94 002869D4  C0 02 D4 D0 */	lfs f0, lbl_8051B830@sda21(r2)
/* 80289A98 002869D8  EF FF 00 32 */	fmuls f31, f31, f0
/* 80289A9C 002869DC  48 00 00 14 */	b .L_80289AB0
.L_80289AA0:
/* 80289AA0 002869E0  2C 03 00 04 */	cmpwi r3, 4
/* 80289AA4 002869E4  40 82 00 0C */	bne .L_80289AB0
/* 80289AA8 002869E8  C0 02 D4 D4 */	lfs f0, lbl_8051B834@sda21(r2)
/* 80289AAC 002869EC  EF FF 00 32 */	fmuls f31, f31, f0
.L_80289AB0:
/* 80289AB0 002869F0  FC 20 F8 90 */	fmr f1, f31
/* 80289AB4 002869F4  C0 42 D4 C4 */	lfs f2, lbl_8051B824@sda21(r2)
/* 80289AB8 002869F8  7F E3 FB 78 */	mr r3, r31
/* 80289ABC 002869FC  4B E7 C5 71 */	bl addDamage__Q24Game9EnemyBaseFff
/* 80289AC0 00286A00  38 60 00 01 */	li r3, 1
/* 80289AC4 00286A04  48 00 00 08 */	b .L_80289ACC
.L_80289AC8:
/* 80289AC8 00286A08  38 60 00 00 */	li r3, 0
.L_80289ACC:
/* 80289ACC 00286A0C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 80289AD0 00286A10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80289AD4 00286A14  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80289AD8 00286A18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289ADC 00286A1C  7C 08 03 A6 */	mtlr r0
/* 80289AE0 00286A20  38 21 00 20 */	addi r1, r1, 0x20
/* 80289AE4 00286A24  4E 80 00 20 */	blr 
.endfn damageCallBack__Q34Game5Queen3ObjFPQ24Game8CreaturefP8CollPart

.fn earthquakeCallBack__Q34Game5Queen3ObjFPQ24Game8Creaturef, global
/* 80289AE8 00286A28  38 60 00 00 */	li r3, 0
/* 80289AEC 00286A2C  4E 80 00 20 */	blr 
.endfn earthquakeCallBack__Q34Game5Queen3ObjFPQ24Game8Creaturef

.fn doStartStoneState__Q34Game5Queen3ObjFv, global
/* 80289AF0 00286A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289AF4 00286A34  7C 08 02 A6 */	mflr r0
/* 80289AF8 00286A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289AFC 00286A3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289B00 00286A40  7C 7F 1B 78 */	mr r31, r3
/* 80289B04 00286A44  4B E7 93 F1 */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 80289B08 00286A48  7F E3 FB 78 */	mr r3, r31
/* 80289B0C 00286A4C  48 00 20 ED */	bl finishSleepEffect__Q34Game5Queen3ObjFv
/* 80289B10 00286A50  7F E3 FB 78 */	mr r3, r31
/* 80289B14 00286A54  48 00 1F E5 */	bl finishDamageEffect__Q34Game5Queen3ObjFv
/* 80289B18 00286A58  7F E3 FB 78 */	mr r3, r31
/* 80289B1C 00286A5C  48 00 1F 45 */	bl forceFinishRollingEffect__Q34Game5Queen3ObjFv
/* 80289B20 00286A60  7F E3 FB 78 */	mr r3, r31
/* 80289B24 00286A64  48 00 14 31 */	bl startStoneStateBossAttackLoopBGM__Q34Game5Queen3ObjFv
/* 80289B28 00286A68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289B2C 00286A6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289B30 00286A70  7C 08 03 A6 */	mtlr r0
/* 80289B34 00286A74  38 21 00 10 */	addi r1, r1, 0x10
/* 80289B38 00286A78  4E 80 00 20 */	blr 
.endfn doStartStoneState__Q34Game5Queen3ObjFv

.fn doFinishStoneState__Q34Game5Queen3ObjFv, global
/* 80289B3C 00286A7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289B40 00286A80  7C 08 02 A6 */	mflr r0
/* 80289B44 00286A84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289B48 00286A88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289B4C 00286A8C  7C 7F 1B 78 */	mr r31, r3
/* 80289B50 00286A90  4B E7 93 B9 */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 80289B54 00286A94  C0 22 D4 C4 */	lfs f1, lbl_8051B824@sda21(r2)
/* 80289B58 00286A98  7F E3 FB 78 */	mr r3, r31
/* 80289B5C 00286A9C  C0 42 D4 D8 */	lfs f2, lbl_8051B838@sda21(r2)
/* 80289B60 00286AA0  38 80 00 00 */	li r4, 0
/* 80289B64 00286AA4  C0 62 D4 B8 */	lfs f3, lbl_8051B818@sda21(r2)
/* 80289B68 00286AA8  C0 82 D4 DC */	lfs f4, lbl_8051B83C@sda21(r2)
/* 80289B6C 00286AAC  4B E8 95 B1 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 80289B70 00286AB0  7F E3 FB 78 */	mr r3, r31
/* 80289B74 00286AB4  4B E7 D8 81 */	bl getStateID__Q24Game9EnemyBaseFv
/* 80289B78 00286AB8  2C 03 00 03 */	cmpwi r3, 3
/* 80289B7C 00286ABC  40 82 00 10 */	bne .L_80289B8C
/* 80289B80 00286AC0  7F E3 FB 78 */	mr r3, r31
/* 80289B84 00286AC4  48 00 1F 41 */	bl startDamageEffect__Q34Game5Queen3ObjFv
/* 80289B88 00286AC8  48 00 00 20 */	b .L_80289BA8
.L_80289B8C:
/* 80289B8C 00286ACC  2C 03 00 05 */	cmpwi r3, 5
/* 80289B90 00286AD0  40 82 00 18 */	bne .L_80289BA8
/* 80289B94 00286AD4  88 1F 02 C2 */	lbz r0, 0x2c2(r31)
/* 80289B98 00286AD8  28 00 00 00 */	cmplwi r0, 0
/* 80289B9C 00286ADC  41 82 00 0C */	beq .L_80289BA8
/* 80289BA0 00286AE0  7F E3 FB 78 */	mr r3, r31
/* 80289BA4 00286AE4  48 00 1D 5D */	bl startRollingEffect__Q34Game5Queen3ObjFv
.L_80289BA8:
/* 80289BA8 00286AE8  7F E3 FB 78 */	mr r3, r31
/* 80289BAC 00286AEC  48 00 14 7D */	bl finishStoneStateBossAttackLoopBGM__Q34Game5Queen3ObjFv
/* 80289BB0 00286AF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289BB4 00286AF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289BB8 00286AF8  7C 08 03 A6 */	mtlr r0
/* 80289BBC 00286AFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80289BC0 00286B00  4E 80 00 20 */	blr 
.endfn doFinishStoneState__Q34Game5Queen3ObjFv

.fn ignoreAtari__Q34Game5Queen3ObjFPQ24Game8Creature, global
/* 80289BC4 00286B04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289BC8 00286B08  7C 08 02 A6 */	mflr r0
/* 80289BCC 00286B0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289BD0 00286B10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80289BD4 00286B14  7C 9F 23 78 */	mr r31, r4
/* 80289BD8 00286B18  88 03 02 C2 */	lbz r0, 0x2c2(r3)
/* 80289BDC 00286B1C  28 00 00 00 */	cmplwi r0, 0
/* 80289BE0 00286B20  41 82 00 50 */	beq .L_80289C30
/* 80289BE4 00286B24  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 80289BE8 00286B28  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 80289BEC 00286B2C  40 82 00 44 */	bne .L_80289C30
/* 80289BF0 00286B30  7F E3 FB 78 */	mr r3, r31
/* 80289BF4 00286B34  81 9F 00 00 */	lwz r12, 0(r31)
/* 80289BF8 00286B38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80289BFC 00286B3C  7D 89 03 A6 */	mtctr r12
/* 80289C00 00286B40  4E 80 04 21 */	bctrl 
/* 80289C04 00286B44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80289C08 00286B48  40 82 00 20 */	bne .L_80289C28
/* 80289C0C 00286B4C  7F E3 FB 78 */	mr r3, r31
/* 80289C10 00286B50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80289C14 00286B54  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80289C18 00286B58  7D 89 03 A6 */	mtctr r12
/* 80289C1C 00286B5C  4E 80 04 21 */	bctrl 
/* 80289C20 00286B60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80289C24 00286B64  41 82 00 0C */	beq .L_80289C30
.L_80289C28:
/* 80289C28 00286B68  38 60 00 01 */	li r3, 1
/* 80289C2C 00286B6C  48 00 00 08 */	b .L_80289C34
.L_80289C30:
/* 80289C30 00286B70  38 60 00 00 */	li r3, 0
.L_80289C34:
/* 80289C34 00286B74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289C38 00286B78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80289C3C 00286B7C  7C 08 03 A6 */	mtlr r0
/* 80289C40 00286B80  38 21 00 10 */	addi r1, r1, 0x10
/* 80289C44 00286B84  4E 80 00 20 */	blr 
.endfn ignoreAtari__Q34Game5Queen3ObjFPQ24Game8Creature

.fn startCarcassMotion__Q34Game5Queen3ObjFv, global
/* 80289C48 00286B88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289C4C 00286B8C  7C 08 02 A6 */	mflr r0
/* 80289C50 00286B90  38 80 00 08 */	li r4, 8
/* 80289C54 00286B94  38 A0 00 00 */	li r5, 0
/* 80289C58 00286B98  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289C5C 00286B9C  4B E7 B3 A9 */	bl startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
/* 80289C60 00286BA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289C64 00286BA4  7C 08 03 A6 */	mtlr r0
/* 80289C68 00286BA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80289C6C 00286BAC  4E 80 00 20 */	blr 
.endfn startCarcassMotion__Q34Game5Queen3ObjFv

.fn doStartMovie__Q34Game5Queen3ObjFv, global
/* 80289C70 00286BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289C74 00286BB4  7C 08 02 A6 */	mflr r0
/* 80289C78 00286BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289C7C 00286BBC  48 00 20 C5 */	bl effectDrawOff__Q34Game5Queen3ObjFv
/* 80289C80 00286BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289C84 00286BC4  7C 08 03 A6 */	mtlr r0
/* 80289C88 00286BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 80289C8C 00286BCC  4E 80 00 20 */	blr 
.endfn doStartMovie__Q34Game5Queen3ObjFv

.fn doEndMovie__Q34Game5Queen3ObjFv, global
/* 80289C90 00286BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80289C94 00286BD4  7C 08 02 A6 */	mflr r0
/* 80289C98 00286BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289C9C 00286BDC  48 00 1F 8D */	bl effectDrawOn__Q34Game5Queen3ObjFv
/* 80289CA0 00286BE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80289CA4 00286BE4  7C 08 03 A6 */	mtlr r0
/* 80289CA8 00286BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 80289CAC 00286BEC  4E 80 00 20 */	blr 
.endfn doEndMovie__Q34Game5Queen3ObjFv

.fn rollingAttack__Q34Game5Queen3ObjFv, global
/* 80289CB0 00286BF0  94 21 FE B0 */	stwu r1, -0x150(r1)
/* 80289CB4 00286BF4  7C 08 02 A6 */	mflr r0
/* 80289CB8 00286BF8  90 01 01 54 */	stw r0, 0x154(r1)
/* 80289CBC 00286BFC  DB E1 01 40 */	stfd f31, 0x140(r1)
/* 80289CC0 00286C00  F3 E1 01 48 */	psq_st f31, 328(r1), 0, qr0
/* 80289CC4 00286C04  DB C1 01 30 */	stfd f30, 0x130(r1)
/* 80289CC8 00286C08  F3 C1 01 38 */	psq_st f30, 312(r1), 0, qr0
/* 80289CCC 00286C0C  DB A1 01 20 */	stfd f29, 0x120(r1)
/* 80289CD0 00286C10  F3 A1 01 28 */	psq_st f29, 296(r1), 0, qr0
/* 80289CD4 00286C14  DB 81 01 10 */	stfd f28, 0x110(r1)
/* 80289CD8 00286C18  F3 81 01 18 */	psq_st f28, 280(r1), 0, qr0
/* 80289CDC 00286C1C  DB 61 01 00 */	stfd f27, 0x100(r1)
/* 80289CE0 00286C20  F3 61 01 08 */	psq_st f27, 264(r1), 0, qr0
/* 80289CE4 00286C24  DB 41 00 F0 */	stfd f26, 0xf0(r1)
/* 80289CE8 00286C28  F3 41 00 F8 */	psq_st f26, 248(r1), 0, qr0
/* 80289CEC 00286C2C  DB 21 00 E0 */	stfd f25, 0xe0(r1)
/* 80289CF0 00286C30  F3 21 00 E8 */	psq_st f25, 232(r1), 0, qr0
/* 80289CF4 00286C34  DB 01 00 D0 */	stfd f24, 0xd0(r1)
/* 80289CF8 00286C38  F3 01 00 D8 */	psq_st f24, 216(r1), 0, qr0
/* 80289CFC 00286C3C  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 80289D00 00286C40  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 80289D04 00286C44  7C 7F 1B 78 */	mr r31, r3
/* 80289D08 00286C48  38 61 00 14 */	addi r3, r1, 0x14
/* 80289D0C 00286C4C  7F E4 FB 78 */	mr r4, r31
/* 80289D10 00286C50  81 9F 00 00 */	lwz r12, 0(r31)
/* 80289D14 00286C54  81 8C 00 08 */	lwz r12, 8(r12)
/* 80289D18 00286C58  7D 89 03 A6 */	mtctr r12
/* 80289D1C 00286C5C  4E 80 04 21 */	bctrl 
/* 80289D20 00286C60  7F E3 FB 78 */	mr r3, r31
/* 80289D24 00286C64  C3 81 00 14 */	lfs f28, 0x14(r1)
/* 80289D28 00286C68  81 9F 00 00 */	lwz r12, 0(r31)
/* 80289D2C 00286C6C  C3 61 00 18 */	lfs f27, 0x18(r1)
/* 80289D30 00286C70  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80289D34 00286C74  C3 41 00 1C */	lfs f26, 0x1c(r1)
/* 80289D38 00286C78  7D 89 03 A6 */	mtctr r12
/* 80289D3C 00286C7C  4E 80 04 21 */	bctrl 
/* 80289D40 00286C80  FC 40 08 90 */	fmr f2, f1
/* 80289D44 00286C84  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 80289D48 00286C88  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 80289D4C 00286C8C  C3 23 05 B4 */	lfs f25, 0x5b4(r3)
/* 80289D50 00286C90  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80289D54 00286C94  C3 03 05 DC */	lfs f24, 0x5dc(r3)
/* 80289D58 00286C98  40 80 00 08 */	bge .L_80289D60
/* 80289D5C 00286C9C  FC 40 10 50 */	fneg f2, f2
.L_80289D60:
/* 80289D60 00286CA0  C0 62 D4 E0 */	lfs f3, lbl_8051B840@sda21(r2)
/* 80289D64 00286CA4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80289D68 00286CA8  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 80289D6C 00286CAC  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80289D70 00286CB0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80289D74 00286CB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80289D78 00286CB8  FC 00 10 1E */	fctiwz f0, f2
/* 80289D7C 00286CBC  D8 01 00 A8 */	stfd f0, 0xa8(r1)
/* 80289D80 00286CC0  80 01 00 AC */	lwz r0, 0xac(r1)
/* 80289D84 00286CC4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80289D88 00286CC8  7C 64 02 14 */	add r3, r4, r0
/* 80289D8C 00286CCC  C3 C3 00 04 */	lfs f30, 4(r3)
/* 80289D90 00286CD0  40 80 00 28 */	bge .L_80289DB8
/* 80289D94 00286CD4  C0 02 D4 E4 */	lfs f0, lbl_8051B844@sda21(r2)
/* 80289D98 00286CD8  EC 01 00 32 */	fmuls f0, f1, f0
/* 80289D9C 00286CDC  FC 00 00 1E */	fctiwz f0, f0
/* 80289DA0 00286CE0  D8 01 00 B0 */	stfd f0, 0xb0(r1)
/* 80289DA4 00286CE4  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80289DA8 00286CE8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80289DAC 00286CEC  7C 04 04 2E */	lfsx f0, r4, r0
/* 80289DB0 00286CF0  FF A0 00 50 */	fneg f29, f0
/* 80289DB4 00286CF4  48 00 00 1C */	b .L_80289DD0
.L_80289DB8:
/* 80289DB8 00286CF8  EC 01 00 F2 */	fmuls f0, f1, f3
/* 80289DBC 00286CFC  FC 00 00 1E */	fctiwz f0, f0
/* 80289DC0 00286D00  D8 01 00 B8 */	stfd f0, 0xb8(r1)
/* 80289DC4 00286D04  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 80289DC8 00286D08  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80289DCC 00286D0C  7F A4 04 2E */	lfsx f29, r4, r0
.L_80289DD0:
/* 80289DD0 00286D10  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 80289DD4 00286D14  FF E0 F0 50 */	fneg f31, f30
/* 80289DD8 00286D18  C0 02 D4 E8 */	lfs f0, lbl_8051B848@sda21(r2)
/* 80289DDC 00286D1C  38 61 00 40 */	addi r3, r1, 0x40
/* 80289DE0 00286D20  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80289DE4 00286D24  38 81 00 30 */	addi r4, r1, 0x30
/* 80289DE8 00286D28  C0 3F 01 90 */	lfs f1, 0x190(r31)
/* 80289DEC 00286D2C  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 80289DF0 00286D30  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 80289DF4 00286D34  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 80289DF8 00286D38  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80289DFC 00286D3C  4B FA 45 A5 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 80289E00 00286D40  38 00 00 01 */	li r0, 1
/* 80289E04 00286D44  38 61 00 60 */	addi r3, r1, 0x60
/* 80289E08 00286D48  98 01 00 5C */	stb r0, 0x5c(r1)
/* 80289E0C 00286D4C  38 81 00 40 */	addi r4, r1, 0x40
/* 80289E10 00286D50  4B FA 45 D1 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 80289E14 00286D54  38 61 00 60 */	addi r3, r1, 0x60
/* 80289E18 00286D58  4B FA 46 45 */	bl first__Q24Game12CellIteratorFv
/* 80289E1C 00286D5C  48 00 01 18 */	b .L_80289F34
.L_80289E20:
/* 80289E20 00286D60  38 61 00 60 */	addi r3, r1, 0x60
/* 80289E24 00286D64  4B FA 47 21 */	bl __ml__Q24Game12CellIteratorFv
/* 80289E28 00286D68  81 83 00 00 */	lwz r12, 0(r3)
/* 80289E2C 00286D6C  7C 7E 1B 78 */	mr r30, r3
/* 80289E30 00286D70  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 80289E34 00286D74  7D 89 03 A6 */	mtctr r12
/* 80289E38 00286D78  4E 80 04 21 */	bctrl 
/* 80289E3C 00286D7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80289E40 00286D80  41 82 00 EC */	beq .L_80289F2C
/* 80289E44 00286D84  7F C4 F3 78 */	mr r4, r30
/* 80289E48 00286D88  38 61 00 08 */	addi r3, r1, 8
/* 80289E4C 00286D8C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80289E50 00286D90  81 8C 00 08 */	lwz r12, 8(r12)
/* 80289E54 00286D94  7D 89 03 A6 */	mtctr r12
/* 80289E58 00286D98  4E 80 04 21 */	bctrl 
/* 80289E5C 00286D9C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80289E60 00286DA0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 80289E64 00286DA4  EC 60 D8 28 */	fsubs f3, f0, f27
/* 80289E68 00286DA8  C0 21 00 08 */	lfs f1, 8(r1)
/* 80289E6C 00286DAC  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 80289E70 00286DB0  EC 82 D0 28 */	fsubs f4, f2, f26
/* 80289E74 00286DB4  EC 41 E0 28 */	fsubs f2, f1, f28
/* 80289E78 00286DB8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80289E7C 00286DBC  40 81 00 0C */	ble .L_80289E88
/* 80289E80 00286DC0  FC 20 18 90 */	fmr f1, f3
/* 80289E84 00286DC4  48 00 00 08 */	b .L_80289E8C
.L_80289E88:
/* 80289E88 00286DC8  FC 20 18 50 */	fneg f1, f3
.L_80289E8C:
/* 80289E8C 00286DCC  C0 02 D4 C8 */	lfs f0, lbl_8051B828@sda21(r2)
/* 80289E90 00286DD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80289E94 00286DD4  40 80 00 98 */	bge .L_80289F2C
/* 80289E98 00286DD8  C0 22 D4 B8 */	lfs f1, lbl_8051B818@sda21(r2)
/* 80289E9C 00286DDC  EC 61 00 F2 */	fmuls f3, f1, f3
/* 80289EA0 00286DE0  EC 1F 18 BA */	fmadds f0, f31, f2, f3
/* 80289EA4 00286DE4  EC 1D 01 3A */	fmadds f0, f29, f4, f0
/* 80289EA8 00286DE8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 80289EAC 00286DEC  40 81 00 08 */	ble .L_80289EB4
/* 80289EB0 00286DF0  48 00 00 08 */	b .L_80289EB8
.L_80289EB4:
/* 80289EB4 00286DF4  FC 00 00 50 */	fneg f0, f0
.L_80289EB8:
/* 80289EB8 00286DF8  FC 00 C0 40 */	fcmpo cr0, f0, f24
/* 80289EBC 00286DFC  40 80 00 70 */	bge .L_80289F2C
/* 80289EC0 00286E00  EC 3D 18 BA */	fmadds f1, f29, f2, f3
/* 80289EC4 00286E04  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 80289EC8 00286E08  EC 3E 09 3A */	fmadds f1, f30, f4, f1
/* 80289ECC 00286E0C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80289ED0 00286E10  40 81 00 08 */	ble .L_80289ED8
/* 80289ED4 00286E14  48 00 00 08 */	b .L_80289EDC
.L_80289ED8:
/* 80289ED8 00286E18  FC 20 08 50 */	fneg f1, f1
.L_80289EDC:
/* 80289EDC 00286E1C  FC 01 C8 40 */	fcmpo cr0, f1, f25
/* 80289EE0 00286E20  40 80 00 4C */	bge .L_80289F2C
/* 80289EE4 00286E24  80 BF 00 C0 */	lwz r5, 0xc0(r31)
/* 80289EE8 00286E28  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 80289EEC 00286E2C  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 80289EF0 00286E30  38 00 00 00 */	li r0, 0
/* 80289EF4 00286E34  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 80289EF8 00286E38  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 80289EFC 00286E3C  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 80289F00 00286E40  7F C3 F3 78 */	mr r3, r30
/* 80289F04 00286E44  90 81 00 20 */	stw r4, 0x20(r1)
/* 80289F08 00286E48  38 81 00 20 */	addi r4, r1, 0x20
/* 80289F0C 00286E4C  93 E1 00 24 */	stw r31, 0x24(r1)
/* 80289F10 00286E50  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80289F14 00286E54  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80289F18 00286E58  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80289F1C 00286E5C  81 9E 00 00 */	lwz r12, 0(r30)
/* 80289F20 00286E60  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80289F24 00286E64  7D 89 03 A6 */	mtctr r12
/* 80289F28 00286E68  4E 80 04 21 */	bctrl 
.L_80289F2C:
/* 80289F2C 00286E6C  38 61 00 60 */	addi r3, r1, 0x60
/* 80289F30 00286E70  4B FA 45 D1 */	bl next__Q24Game12CellIteratorFv
.L_80289F34:
/* 80289F34 00286E74  38 61 00 60 */	addi r3, r1, 0x60
/* 80289F38 00286E78  4B FA 45 FD */	bl isDone__Q24Game12CellIteratorFv
/* 80289F3C 00286E7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80289F40 00286E80  41 82 FE E0 */	beq .L_80289E20
/* 80289F44 00286E84  E3 E1 01 48 */	psq_l f31, 328(r1), 0, qr0
/* 80289F48 00286E88  CB E1 01 40 */	lfd f31, 0x140(r1)
/* 80289F4C 00286E8C  E3 C1 01 38 */	psq_l f30, 312(r1), 0, qr0
/* 80289F50 00286E90  CB C1 01 30 */	lfd f30, 0x130(r1)
/* 80289F54 00286E94  E3 A1 01 28 */	psq_l f29, 296(r1), 0, qr0
/* 80289F58 00286E98  CB A1 01 20 */	lfd f29, 0x120(r1)
/* 80289F5C 00286E9C  E3 81 01 18 */	psq_l f28, 280(r1), 0, qr0
/* 80289F60 00286EA0  CB 81 01 10 */	lfd f28, 0x110(r1)
/* 80289F64 00286EA4  E3 61 01 08 */	psq_l f27, 264(r1), 0, qr0
/* 80289F68 00286EA8  CB 61 01 00 */	lfd f27, 0x100(r1)
/* 80289F6C 00286EAC  E3 41 00 F8 */	psq_l f26, 248(r1), 0, qr0
/* 80289F70 00286EB0  CB 41 00 F0 */	lfd f26, 0xf0(r1)
/* 80289F74 00286EB4  E3 21 00 E8 */	psq_l f25, 232(r1), 0, qr0
/* 80289F78 00286EB8  CB 21 00 E0 */	lfd f25, 0xe0(r1)
/* 80289F7C 00286EBC  E3 01 00 D8 */	psq_l f24, 216(r1), 0, qr0
/* 80289F80 00286EC0  CB 01 00 D0 */	lfd f24, 0xd0(r1)
/* 80289F84 00286EC4  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 80289F88 00286EC8  80 01 01 54 */	lwz r0, 0x154(r1)
/* 80289F8C 00286ECC  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 80289F90 00286ED0  7C 08 03 A6 */	mtlr r0
/* 80289F94 00286ED4  38 21 01 50 */	addi r1, r1, 0x150
/* 80289F98 00286ED8  4E 80 00 20 */	blr 
.endfn rollingAttack__Q34Game5Queen3ObjFv

.fn flickPikmin__Q34Game5Queen3ObjFf, global
/* 80289F9C 00286EDC  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80289FA0 00286EE0  7C 08 02 A6 */	mflr r0
/* 80289FA4 00286EE4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80289FA8 00286EE8  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80289FAC 00286EEC  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 80289FB0 00286EF0  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80289FB4 00286EF4  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 80289FB8 00286EF8  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 80289FBC 00286EFC  93 C1 00 78 */	stw r30, 0x78(r1)
/* 80289FC0 00286F00  93 A1 00 74 */	stw r29, 0x74(r1)
/* 80289FC4 00286F04  FF C0 08 90 */	fmr f30, f1
/* 80289FC8 00286F08  7C 7E 1B 78 */	mr r30, r3
/* 80289FCC 00286F0C  C0 02 D4 EC */	lfs f0, lbl_8051B84C@sda21(r2)
/* 80289FD0 00286F10  7F C4 F3 78 */	mr r4, r30
/* 80289FD4 00286F14  38 61 00 54 */	addi r3, r1, 0x54
/* 80289FD8 00286F18  EF E0 F0 2A */	fadds f31, f0, f30
/* 80289FDC 00286F1C  4B F1 5C 81 */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 80289FE0 00286F20  38 00 00 00 */	li r0, 0
/* 80289FE4 00286F24  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 80289FE8 00286F28  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 80289FEC 00286F2C  38 61 00 54 */	addi r3, r1, 0x54
/* 80289FF0 00286F30  28 00 00 00 */	cmplwi r0, 0
/* 80289FF4 00286F34  90 81 00 08 */	stw r4, 8(r1)
/* 80289FF8 00286F38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80289FFC 00286F3C  90 01 00 0C */	stw r0, 0xc(r1)
/* 8028A000 00286F40  90 61 00 10 */	stw r3, 0x10(r1)
/* 8028A004 00286F44  40 82 00 1C */	bne .L_8028A020
/* 8028A008 00286F48  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A00C 00286F4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028A010 00286F50  7D 89 03 A6 */	mtctr r12
/* 8028A014 00286F54  4E 80 04 21 */	bctrl 
/* 8028A018 00286F58  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028A01C 00286F5C  48 00 02 D0 */	b .L_8028A2EC
.L_8028A020:
/* 8028A020 00286F60  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A024 00286F64  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028A028 00286F68  7D 89 03 A6 */	mtctr r12
/* 8028A02C 00286F6C  4E 80 04 21 */	bctrl 
/* 8028A030 00286F70  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028A034 00286F74  48 00 00 58 */	b .L_8028A08C
.L_8028A038:
/* 8028A038 00286F78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A03C 00286F7C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028A040 00286F80  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A044 00286F84  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028A048 00286F88  7D 89 03 A6 */	mtctr r12
/* 8028A04C 00286F8C  4E 80 04 21 */	bctrl 
/* 8028A050 00286F90  7C 64 1B 78 */	mr r4, r3
/* 8028A054 00286F94  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8028A058 00286F98  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A05C 00286F9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028A060 00286FA0  7D 89 03 A6 */	mtctr r12
/* 8028A064 00286FA4  4E 80 04 21 */	bctrl 
/* 8028A068 00286FA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A06C 00286FAC  40 82 02 80 */	bne .L_8028A2EC
/* 8028A070 00286FB0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A074 00286FB4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028A078 00286FB8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A07C 00286FBC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028A080 00286FC0  7D 89 03 A6 */	mtctr r12
/* 8028A084 00286FC4  4E 80 04 21 */	bctrl 
/* 8028A088 00286FC8  90 61 00 0C */	stw r3, 0xc(r1)
.L_8028A08C:
/* 8028A08C 00286FCC  81 81 00 08 */	lwz r12, 8(r1)
/* 8028A090 00286FD0  38 61 00 08 */	addi r3, r1, 8
/* 8028A094 00286FD4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028A098 00286FD8  7D 89 03 A6 */	mtctr r12
/* 8028A09C 00286FDC  4E 80 04 21 */	bctrl 
/* 8028A0A0 00286FE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A0A4 00286FE4  41 82 FF 94 */	beq .L_8028A038
/* 8028A0A8 00286FE8  48 00 02 44 */	b .L_8028A2EC
.L_8028A0AC:
/* 8028A0AC 00286FEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A0B0 00286FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A0B4 00286FF4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028A0B8 00286FF8  7D 89 03 A6 */	mtctr r12
/* 8028A0BC 00286FFC  4E 80 04 21 */	bctrl 
/* 8028A0C0 00287000  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A0C4 00287004  7C 7F 1B 78 */	mr r31, r3
/* 8028A0C8 00287008  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8028A0CC 0028700C  7D 89 03 A6 */	mtctr r12
/* 8028A0D0 00287010  4E 80 04 21 */	bctrl 
/* 8028A0D4 00287014  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A0D8 00287018  41 82 01 58 */	beq .L_8028A230
/* 8028A0DC 0028701C  83 BF 00 F8 */	lwz r29, 0xf8(r31)
/* 8028A0E0 00287020  28 1D 00 00 */	cmplwi r29, 0
/* 8028A0E4 00287024  41 82 01 4C */	beq .L_8028A230
/* 8028A0E8 00287028  3C 80 6E 6F */	lis r4, 0x6E6F7365@ha
/* 8028A0EC 0028702C  38 7D 00 30 */	addi r3, r29, 0x30
/* 8028A0F0 00287030  38 84 73 65 */	addi r4, r4, 0x6E6F7365@l
/* 8028A0F4 00287034  48 18 93 41 */	bl __eq__4ID32FUl
/* 8028A0F8 00287038  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A0FC 0028703C  40 82 00 34 */	bne .L_8028A130
/* 8028A100 00287040  3C 80 68 65 */	lis r4, 0x68656164@ha
/* 8028A104 00287044  38 7D 00 30 */	addi r3, r29, 0x30
/* 8028A108 00287048  38 84 61 64 */	addi r4, r4, 0x68656164@l
/* 8028A10C 0028704C  48 18 93 29 */	bl __eq__4ID32FUl
/* 8028A110 00287050  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A114 00287054  40 82 00 1C */	bne .L_8028A130
/* 8028A118 00287058  3C 80 62 6F */	lis r4, 0x626F6431@ha
/* 8028A11C 0028705C  38 7D 00 30 */	addi r3, r29, 0x30
/* 8028A120 00287060  38 84 64 31 */	addi r4, r4, 0x626F6431@l
/* 8028A124 00287064  48 18 93 11 */	bl __eq__4ID32FUl
/* 8028A128 00287068  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A12C 0028706C  41 82 00 54 */	beq .L_8028A180
.L_8028A130:
/* 8028A130 00287070  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 8028A134 00287074  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8028A138 00287078  3C 80 80 4B */	lis r4, __vt__Q24Game13InteractFlick@ha
/* 8028A13C 0028707C  7F E3 FB 78 */	mr r3, r31
/* 8028A140 00287080  C0 26 04 EC */	lfs f1, 0x4ec(r6)
/* 8028A144 00287084  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 8028A148 00287088  C0 06 04 C4 */	lfs f0, 0x4c4(r6)
/* 8028A14C 0028708C  38 04 4E 04 */	addi r0, r4, __vt__Q24Game13InteractFlick@l
/* 8028A150 00287090  38 81 00 40 */	addi r4, r1, 0x40
/* 8028A154 00287094  90 A1 00 40 */	stw r5, 0x40(r1)
/* 8028A158 00287098  93 C1 00 44 */	stw r30, 0x44(r1)
/* 8028A15C 0028709C  90 01 00 40 */	stw r0, 0x40(r1)
/* 8028A160 002870A0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 8028A164 002870A4  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 8028A168 002870A8  D3 C1 00 50 */	stfs f30, 0x50(r1)
/* 8028A16C 002870AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A170 002870B0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8028A174 002870B4  7D 89 03 A6 */	mtctr r12
/* 8028A178 002870B8  4E 80 04 21 */	bctrl 
/* 8028A17C 002870BC  48 00 00 B4 */	b .L_8028A230
.L_8028A180:
/* 8028A180 002870C0  3C 80 62 6F */	lis r4, 0x626F6435@ha
/* 8028A184 002870C4  38 7D 00 30 */	addi r3, r29, 0x30
/* 8028A188 002870C8  38 84 64 35 */	addi r4, r4, 0x626F6435@l
/* 8028A18C 002870CC  48 18 92 A9 */	bl __eq__4ID32FUl
/* 8028A190 002870D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A194 002870D4  41 82 00 54 */	beq .L_8028A1E8
/* 8028A198 002870D8  80 DE 00 C0 */	lwz r6, 0xc0(r30)
/* 8028A19C 002870DC  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 8028A1A0 002870E0  3C 80 80 4B */	lis r4, __vt__Q24Game13InteractFlick@ha
/* 8028A1A4 002870E4  7F E3 FB 78 */	mr r3, r31
/* 8028A1A8 002870E8  C0 26 04 EC */	lfs f1, 0x4ec(r6)
/* 8028A1AC 002870EC  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 8028A1B0 002870F0  C0 06 04 C4 */	lfs f0, 0x4c4(r6)
/* 8028A1B4 002870F4  38 04 4E 04 */	addi r0, r4, __vt__Q24Game13InteractFlick@l
/* 8028A1B8 002870F8  38 81 00 2C */	addi r4, r1, 0x2c
/* 8028A1BC 002870FC  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 8028A1C0 00287100  93 C1 00 30 */	stw r30, 0x30(r1)
/* 8028A1C4 00287104  90 01 00 2C */	stw r0, 0x2c(r1)
/* 8028A1C8 00287108  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8028A1CC 0028710C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8028A1D0 00287110  D3 E1 00 3C */	stfs f31, 0x3c(r1)
/* 8028A1D4 00287114  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A1D8 00287118  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8028A1DC 0028711C  7D 89 03 A6 */	mtctr r12
/* 8028A1E0 00287120  4E 80 04 21 */	bctrl 
/* 8028A1E4 00287124  48 00 00 4C */	b .L_8028A230
.L_8028A1E8:
/* 8028A1E8 00287128  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 8028A1EC 0028712C  C0 22 D4 B8 */	lfs f1, lbl_8051B818@sda21(r2)
/* 8028A1F0 00287130  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 8028A1F4 00287134  C0 02 D4 DC */	lfs f0, lbl_8051B83C@sda21(r2)
/* 8028A1F8 00287138  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 8028A1FC 0028713C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8028A200 00287140  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 8028A204 00287144  7F E3 FB 78 */	mr r3, r31
/* 8028A208 00287148  93 C1 00 1C */	stw r30, 0x1c(r1)
/* 8028A20C 0028714C  38 81 00 18 */	addi r4, r1, 0x18
/* 8028A210 00287150  90 01 00 18 */	stw r0, 0x18(r1)
/* 8028A214 00287154  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8028A218 00287158  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8028A21C 0028715C  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8028A220 00287160  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A224 00287164  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 8028A228 00287168  7D 89 03 A6 */	mtctr r12
/* 8028A22C 0028716C  4E 80 04 21 */	bctrl 
.L_8028A230:
/* 8028A230 00287170  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028A234 00287174  28 00 00 00 */	cmplwi r0, 0
/* 8028A238 00287178  40 82 00 24 */	bne .L_8028A25C
/* 8028A23C 0028717C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A240 00287180  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028A244 00287184  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A248 00287188  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028A24C 0028718C  7D 89 03 A6 */	mtctr r12
/* 8028A250 00287190  4E 80 04 21 */	bctrl 
/* 8028A254 00287194  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028A258 00287198  48 00 00 94 */	b .L_8028A2EC
.L_8028A25C:
/* 8028A25C 0028719C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A260 002871A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028A264 002871A4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A268 002871A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028A26C 002871AC  7D 89 03 A6 */	mtctr r12
/* 8028A270 002871B0  4E 80 04 21 */	bctrl 
/* 8028A274 002871B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028A278 002871B8  48 00 00 58 */	b .L_8028A2D0
.L_8028A27C:
/* 8028A27C 002871BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A280 002871C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028A284 002871C4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A288 002871C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8028A28C 002871CC  7D 89 03 A6 */	mtctr r12
/* 8028A290 002871D0  4E 80 04 21 */	bctrl 
/* 8028A294 002871D4  7C 64 1B 78 */	mr r4, r3
/* 8028A298 002871D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8028A29C 002871DC  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A2A0 002871E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028A2A4 002871E4  7D 89 03 A6 */	mtctr r12
/* 8028A2A8 002871E8  4E 80 04 21 */	bctrl 
/* 8028A2AC 002871EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A2B0 002871F0  40 82 00 3C */	bne .L_8028A2EC
/* 8028A2B4 002871F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A2B8 002871F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028A2BC 002871FC  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A2C0 00287200  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028A2C4 00287204  7D 89 03 A6 */	mtctr r12
/* 8028A2C8 00287208  4E 80 04 21 */	bctrl 
/* 8028A2CC 0028720C  90 61 00 0C */	stw r3, 0xc(r1)
.L_8028A2D0:
/* 8028A2D0 00287210  81 81 00 08 */	lwz r12, 8(r1)
/* 8028A2D4 00287214  38 61 00 08 */	addi r3, r1, 8
/* 8028A2D8 00287218  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028A2DC 0028721C  7D 89 03 A6 */	mtctr r12
/* 8028A2E0 00287220  4E 80 04 21 */	bctrl 
/* 8028A2E4 00287224  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028A2E8 00287228  41 82 FF 94 */	beq .L_8028A27C
.L_8028A2EC:
/* 8028A2EC 0028722C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028A2F0 00287230  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A2F4 00287234  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028A2F8 00287238  7D 89 03 A6 */	mtctr r12
/* 8028A2FC 0028723C  4E 80 04 21 */	bctrl 
/* 8028A300 00287240  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028A304 00287244  7C 04 18 40 */	cmplw r4, r3
/* 8028A308 00287248  40 82 FD A4 */	bne .L_8028A0AC
/* 8028A30C 0028724C  38 61 00 54 */	addi r3, r1, 0x54
/* 8028A310 00287250  38 80 FF FF */	li r4, -1
/* 8028A314 00287254  4B F1 5A 51 */	bl __dt__Q24Game8StickersFv
/* 8028A318 00287258  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 8028A31C 0028725C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 8028A320 00287260  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 8028A324 00287264  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 8028A328 00287268  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 8028A32C 0028726C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 8028A330 00287270  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8028A334 00287274  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 8028A338 00287278  7C 08 03 A6 */	mtlr r0
/* 8028A33C 0028727C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8028A340 00287280  4E 80 00 20 */	blr 
.endfn flickPikmin__Q34Game5Queen3ObjFf

.fn isRollingAttackLeft__Q34Game5Queen3ObjFv, global
/* 8028A344 00287284  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8028A348 00287288  7C 08 02 A6 */	mflr r0
/* 8028A34C 0028728C  90 01 00 64 */	stw r0, 0x64(r1)
/* 8028A350 00287290  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 8028A354 00287294  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 8028A358 00287298  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 8028A35C 0028729C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 8028A360 002872A0  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8028A364 002872A4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8028A368 002872A8  7C 7E 1B 78 */	mr r30, r3
/* 8028A36C 002872AC  88 03 02 C3 */	lbz r0, 0x2c3(r3)
/* 8028A370 002872B0  28 00 00 00 */	cmplwi r0, 0
/* 8028A374 002872B4  41 82 01 10 */	beq .L_8028A484
/* 8028A378 002872B8  38 00 00 00 */	li r0, 0
/* 8028A37C 002872BC  98 1E 02 C3 */	stb r0, 0x2c3(r30)
/* 8028A380 002872C0  80 6D 92 E0 */	lwz r3, naviMgr__4Game@sda21(r13)
/* 8028A384 002872C4  4B ED 08 9D */	bl getActiveNavi__Q24Game7NaviMgrFv
/* 8028A388 002872C8  7C 7F 1B 79 */	or. r31, r3, r3
/* 8028A38C 002872CC  41 82 00 F0 */	beq .L_8028A47C
/* 8028A390 002872D0  7F C3 F3 78 */	mr r3, r30
/* 8028A394 002872D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028A398 002872D8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028A39C 002872DC  7D 89 03 A6 */	mtctr r12
/* 8028A3A0 002872E0  4E 80 04 21 */	bctrl 
/* 8028A3A4 002872E4  C0 42 D4 F0 */	lfs f2, lbl_8051B850@sda21(r2)
/* 8028A3A8 002872E8  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028A3AC 002872EC  EC 62 08 2A */	fadds f3, f2, f1
/* 8028A3B0 002872F0  FC 20 18 90 */	fmr f1, f3
/* 8028A3B4 002872F4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8028A3B8 002872F8  40 80 00 08 */	bge .L_8028A3C0
/* 8028A3BC 002872FC  FC 20 18 50 */	fneg f1, f3
.L_8028A3C0:
/* 8028A3C0 00287300  C0 42 D4 E0 */	lfs f2, lbl_8051B840@sda21(r2)
/* 8028A3C4 00287304  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028A3C8 00287308  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028A3CC 0028730C  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8028A3D0 00287310  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8028A3D4 00287314  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8028A3D8 00287318  FC 00 08 1E */	fctiwz f0, f1
/* 8028A3DC 0028731C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8028A3E0 00287320  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 8028A3E4 00287324  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A3E8 00287328  7C 64 02 14 */	add r3, r4, r0
/* 8028A3EC 0028732C  C3 E3 00 04 */	lfs f31, 4(r3)
/* 8028A3F0 00287330  40 80 00 28 */	bge .L_8028A418
/* 8028A3F4 00287334  C0 02 D4 E4 */	lfs f0, lbl_8051B844@sda21(r2)
/* 8028A3F8 00287338  EC 03 00 32 */	fmuls f0, f3, f0
/* 8028A3FC 0028733C  FC 00 00 1E */	fctiwz f0, f0
/* 8028A400 00287340  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8028A404 00287344  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8028A408 00287348  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A40C 0028734C  7C 04 04 2E */	lfsx f0, r4, r0
/* 8028A410 00287350  FF C0 00 50 */	fneg f30, f0
/* 8028A414 00287354  48 00 00 1C */	b .L_8028A430
.L_8028A418:
/* 8028A418 00287358  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8028A41C 0028735C  FC 00 00 1E */	fctiwz f0, f0
/* 8028A420 00287360  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8028A424 00287364  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8028A428 00287368  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A42C 0028736C  7F C4 04 2E */	lfsx f30, r4, r0
.L_8028A430:
/* 8028A430 00287370  7F E4 FB 78 */	mr r4, r31
/* 8028A434 00287374  38 61 00 08 */	addi r3, r1, 8
/* 8028A438 00287378  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A43C 0028737C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028A440 00287380  7D 89 03 A6 */	mtctr r12
/* 8028A444 00287384  4E 80 04 21 */	bctrl 
/* 8028A448 00287388  C0 21 00 08 */	lfs f1, 8(r1)
/* 8028A44C 0028738C  C0 1E 01 8C */	lfs f0, 0x18c(r30)
/* 8028A450 00287390  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8028A454 00287394  C0 5E 01 94 */	lfs f2, 0x194(r30)
/* 8028A458 00287398  EC 01 00 28 */	fsubs f0, f1, f0
/* 8028A45C 0028739C  C0 22 D4 B8 */	lfs f1, lbl_8051B818@sda21(r2)
/* 8028A460 002873A0  EC 43 10 28 */	fsubs f2, f3, f2
/* 8028A464 002873A4  EC 1E 08 3A */	fmadds f0, f30, f0, f1
/* 8028A468 002873A8  EC 1F 00 BA */	fmadds f0, f31, f2, f0
/* 8028A46C 002873AC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8028A470 002873B0  40 81 00 0C */	ble .L_8028A47C
/* 8028A474 002873B4  38 60 00 00 */	li r3, 0
/* 8028A478 002873B8  48 00 00 4C */	b .L_8028A4C4
.L_8028A47C:
/* 8028A47C 002873BC  38 60 00 01 */	li r3, 1
/* 8028A480 002873C0  48 00 00 44 */	b .L_8028A4C4
.L_8028A484:
/* 8028A484 002873C4  4B E3 F1 1D */	bl rand
/* 8028A488 002873C8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8028A48C 002873CC  3C 00 43 30 */	lis r0, 0x4330
/* 8028A490 002873D0  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8028A494 002873D4  C8 62 D5 00 */	lfd f3, lbl_8051B860@sda21(r2)
/* 8028A498 002873D8  90 01 00 28 */	stw r0, 0x28(r1)
/* 8028A49C 002873DC  C0 42 D4 C4 */	lfs f2, lbl_8051B824@sda21(r2)
/* 8028A4A0 002873E0  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 8028A4A4 002873E4  C0 22 D4 F4 */	lfs f1, lbl_8051B854@sda21(r2)
/* 8028A4A8 002873E8  EC 60 18 28 */	fsubs f3, f0, f3
/* 8028A4AC 002873EC  C0 02 D4 F8 */	lfs f0, lbl_8051B858@sda21(r2)
/* 8028A4B0 002873F0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8028A4B4 002873F4  EC 22 08 24 */	fdivs f1, f2, f1
/* 8028A4B8 002873F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028A4BC 002873FC  7C 00 00 26 */	mfcr r0
/* 8028A4C0 00287400  54 03 0F FE */	srwi r3, r0, 0x1f
.L_8028A4C4:
/* 8028A4C4 00287404  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 8028A4C8 00287408  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 8028A4CC 0028740C  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8028A4D0 00287410  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 8028A4D4 00287414  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8028A4D8 00287418  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8028A4DC 0028741C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8028A4E0 00287420  7C 08 03 A6 */	mtlr r0
/* 8028A4E4 00287424  38 21 00 60 */	addi r1, r1, 0x60
/* 8028A4E8 00287428  4E 80 00 20 */	blr 
.endfn isRollingAttackLeft__Q34Game5Queen3ObjFv

.fn createCrashFallRock__Q34Game5Queen3ObjFv, global
/* 8028A4EC 0028742C  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 8028A4F0 00287430  7C 08 02 A6 */	mflr r0
/* 8028A4F4 00287434  90 01 01 44 */	stw r0, 0x144(r1)
/* 8028A4F8 00287438  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 8028A4FC 0028743C  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 8028A500 00287440  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 8028A504 00287444  F3 C1 01 28 */	psq_st f30, 296(r1), 0, qr0
/* 8028A508 00287448  DB A1 01 10 */	stfd f29, 0x110(r1)
/* 8028A50C 0028744C  F3 A1 01 18 */	psq_st f29, 280(r1), 0, qr0
/* 8028A510 00287450  DB 81 01 00 */	stfd f28, 0x100(r1)
/* 8028A514 00287454  F3 81 01 08 */	psq_st f28, 264(r1), 0, qr0
/* 8028A518 00287458  DB 61 00 F0 */	stfd f27, 0xf0(r1)
/* 8028A51C 0028745C  F3 61 00 F8 */	psq_st f27, 248(r1), 0, qr0
/* 8028A520 00287460  DB 41 00 E0 */	stfd f26, 0xe0(r1)
/* 8028A524 00287464  F3 41 00 E8 */	psq_st f26, 232(r1), 0, qr0
/* 8028A528 00287468  DB 21 00 D0 */	stfd f25, 0xd0(r1)
/* 8028A52C 0028746C  F3 21 00 D8 */	psq_st f25, 216(r1), 0, qr0
/* 8028A530 00287470  DB 01 00 C0 */	stfd f24, 0xc0(r1)
/* 8028A534 00287474  F3 01 00 C8 */	psq_st f24, 200(r1), 0, qr0
/* 8028A538 00287478  DA E1 00 B0 */	stfd f23, 0xb0(r1)
/* 8028A53C 0028747C  F2 E1 00 B8 */	psq_st f23, 184(r1), 0, qr0
/* 8028A540 00287480  DA C1 00 A0 */	stfd f22, 0xa0(r1)
/* 8028A544 00287484  F2 C1 00 A8 */	psq_st f22, 168(r1), 0, qr0
/* 8028A548 00287488  DA A1 00 90 */	stfd f21, 0x90(r1)
/* 8028A54C 0028748C  F2 A1 00 98 */	psq_st f21, 152(r1), 0, qr0
/* 8028A550 00287490  DA 81 00 80 */	stfd f20, 0x80(r1)
/* 8028A554 00287494  F2 81 00 88 */	psq_st f20, 136(r1), 0, qr0
/* 8028A558 00287498  DA 61 00 70 */	stfd f19, 0x70(r1)
/* 8028A55C 0028749C  F2 61 00 78 */	psq_st f19, 120(r1), 0, qr0
/* 8028A560 002874A0  BF 61 00 5C */	stmw r27, 0x5c(r1)
/* 8028A564 002874A4  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8028A568 002874A8  7C 7F 1B 78 */	mr r31, r3
/* 8028A56C 002874AC  28 04 00 00 */	cmplwi r4, 0
/* 8028A570 002874B0  41 82 01 D4 */	beq .L_8028A744
/* 8028A574 002874B4  88 04 00 48 */	lbz r0, 0x48(r4)
/* 8028A578 002874B8  28 00 00 00 */	cmplwi r0, 0
/* 8028A57C 002874BC  41 82 01 C8 */	beq .L_8028A744
/* 8028A580 002874C0  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8028A584 002874C4  2C 00 00 00 */	cmpwi r0, 0
/* 8028A588 002874C8  40 82 01 BC */	bne .L_8028A744
/* 8028A58C 002874CC  80 64 00 58 */	lwz r3, 0x58(r4)
/* 8028A590 002874D0  28 03 00 00 */	cmplwi r3, 0
/* 8028A594 002874D4  41 82 01 B0 */	beq .L_8028A744
/* 8028A598 002874D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A59C 002874DC  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 8028A5A0 002874E0  7D 89 03 A6 */	mtctr r12
/* 8028A5A4 002874E4  4E 80 04 21 */	bctrl 
/* 8028A5A8 002874E8  3C 03 93 A1 */	subis r0, r3, 0x6c5f
/* 8028A5AC 002874EC  28 00 30 32 */	cmplwi r0, 0x3032
/* 8028A5B0 002874F0  40 82 01 94 */	bne .L_8028A744
/* 8028A5B4 002874F4  C0 7F 01 FC */	lfs f3, 0x1fc(r31)
/* 8028A5B8 002874F8  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028A5BC 002874FC  FC 20 18 90 */	fmr f1, f3
/* 8028A5C0 00287500  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8028A5C4 00287504  40 80 00 08 */	bge .L_8028A5CC
/* 8028A5C8 00287508  FC 20 18 50 */	fneg f1, f3
.L_8028A5CC:
/* 8028A5CC 0028750C  C0 42 D4 E0 */	lfs f2, lbl_8051B840@sda21(r2)
/* 8028A5D0 00287510  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028A5D4 00287514  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028A5D8 00287518  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8028A5DC 0028751C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8028A5E0 00287520  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8028A5E4 00287524  FC 00 08 1E */	fctiwz f0, f1
/* 8028A5E8 00287528  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 8028A5EC 0028752C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8028A5F0 00287530  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A5F4 00287534  7C 64 02 14 */	add r3, r4, r0
/* 8028A5F8 00287538  C3 03 00 04 */	lfs f24, 4(r3)
/* 8028A5FC 0028753C  40 80 00 28 */	bge .L_8028A624
/* 8028A600 00287540  C0 02 D4 E4 */	lfs f0, lbl_8051B844@sda21(r2)
/* 8028A604 00287544  EC 03 00 32 */	fmuls f0, f3, f0
/* 8028A608 00287548  FC 00 00 1E */	fctiwz f0, f0
/* 8028A60C 0028754C  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8028A610 00287550  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8028A614 00287554  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A618 00287558  7C 04 04 2E */	lfsx f0, r4, r0
/* 8028A61C 0028755C  FE E0 00 50 */	fneg f23, f0
/* 8028A620 00287560  48 00 00 1C */	b .L_8028A63C
.L_8028A624:
/* 8028A624 00287564  EC 03 00 B2 */	fmuls f0, f3, f2
/* 8028A628 00287568  FC 00 00 1E */	fctiwz f0, f0
/* 8028A62C 0028756C  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8028A630 00287570  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8028A634 00287574  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A638 00287578  7E E4 04 2E */	lfsx f23, r4, r0
.L_8028A63C:
/* 8028A63C 0028757C  C0 42 D5 08 */	lfs f2, lbl_8051B868@sda21(r2)
/* 8028A640 00287580  FF 60 B8 50 */	fneg f27, f23
/* 8028A644 00287584  C0 3F 01 A0 */	lfs f1, 0x1a0(r31)
/* 8028A648 00287588  38 80 00 13 */	li r4, 0x13
/* 8028A64C 0028758C  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 8028A650 00287590  EF 22 0E 3A */	fmadds f25, f2, f24, f1
/* 8028A654 00287594  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8028A658 00287598  EF 42 05 FA */	fmadds f26, f2, f23, f0
/* 8028A65C 0028759C  4B E8 36 49 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8028A660 002875A0  7C 7C 1B 79 */	or. r28, r3, r3
/* 8028A664 002875A4  41 82 00 E0 */	beq .L_8028A744
/* 8028A668 002875A8  CB 82 D5 00 */	lfd f28, lbl_8051B860@sda21(r2)
/* 8028A66C 002875AC  3B 60 00 00 */	li r27, 0
/* 8028A670 002875B0  C3 A2 D5 0C */	lfs f29, lbl_8051B86C@sda21(r2)
/* 8028A674 002875B4  3F A0 43 30 */	lis r29, 0x4330
/* 8028A678 002875B8  C3 C2 D4 F4 */	lfs f30, lbl_8051B854@sda21(r2)
/* 8028A67C 002875BC  C3 E2 D4 C8 */	lfs f31, lbl_8051B828@sda21(r2)
/* 8028A680 002875C0  C2 A2 D4 B8 */	lfs f21, lbl_8051B818@sda21(r2)
/* 8028A684 002875C4  C2 C2 D4 BC */	lfs f22, lbl_8051B81C@sda21(r2)
.L_8028A688:
/* 8028A688 002875C8  4B E3 EF 19 */	bl rand
/* 8028A68C 002875CC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 8028A690 002875D0  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 8028A694 002875D4  90 61 00 54 */	stw r3, 0x54(r1)
/* 8028A698 002875D8  38 61 00 08 */	addi r3, r1, 8
/* 8028A69C 002875DC  93 A1 00 50 */	stw r29, 0x50(r1)
/* 8028A6A0 002875E0  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8028A6A4 002875E4  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8028A6A8 002875E8  EC 00 E0 28 */	fsubs f0, f0, f28
/* 8028A6AC 002875EC  93 A1 00 48 */	stw r29, 0x48(r1)
/* 8028A6B0 002875F0  EC 3D 00 32 */	fmuls f1, f29, f0
/* 8028A6B4 002875F4  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 8028A6B8 002875F8  EC 00 E0 28 */	fsubs f0, f0, f28
/* 8028A6BC 002875FC  EE 81 F0 24 */	fdivs f20, f1, f30
/* 8028A6C0 00287600  EE 7F E8 38 */	fmsubs f19, f31, f0, f29
/* 8028A6C4 00287604  4B EA 45 61 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 8028A6C8 00287608  EC 37 D5 3A */	fmadds f1, f23, f20, f26
/* 8028A6CC 0028760C  38 00 00 13 */	li r0, 0x13
/* 8028A6D0 00287610  EC 18 CD 3A */	fmadds f0, f24, f20, f25
/* 8028A6D4 00287614  90 01 00 30 */	stw r0, 0x30(r1)
/* 8028A6D8 00287618  7F 83 E3 78 */	mr r3, r28
/* 8028A6DC 0028761C  38 81 00 08 */	addi r4, r1, 8
/* 8028A6E0 00287620  EC 38 0C FA */	fmadds f1, f24, f19, f1
/* 8028A6E4 00287624  D2 A1 00 0C */	stfs f21, 0xc(r1)
/* 8028A6E8 00287628  EC 1B 04 FA */	fmadds f0, f27, f19, f0
/* 8028A6EC 0028762C  D0 21 00 08 */	stfs f1, 8(r1)
/* 8028A6F0 00287630  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8028A6F4 00287634  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 8028A6F8 00287638  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8028A6FC 0028763C  D2 C1 00 34 */	stfs f22, 0x34(r1)
/* 8028A700 00287640  81 9C 00 00 */	lwz r12, 0(r28)
/* 8028A704 00287644  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8028A708 00287648  7D 89 03 A6 */	mtctr r12
/* 8028A70C 0028764C  4E 80 04 21 */	bctrl 
/* 8028A710 00287650  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028A714 00287654  41 82 00 24 */	beq .L_8028A738
/* 8028A718 00287658  38 80 00 00 */	li r4, 0
/* 8028A71C 0028765C  4B EB 08 AD */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8028A720 00287660  80 1E 01 E0 */	lwz r0, 0x1e0(r30)
/* 8028A724 00287664  C0 02 D5 10 */	lfs f0, lbl_8051B870@sda21(r2)
/* 8028A728 00287668  54 00 06 B0 */	rlwinm r0, r0, 0, 0x1a, 0x18
/* 8028A72C 0028766C  90 1E 01 E0 */	stw r0, 0x1e0(r30)
/* 8028A730 00287670  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8028A734 00287674  D0 03 03 D4 */	stfs f0, 0x3d4(r3)
.L_8028A738:
/* 8028A738 00287678  3B 7B 00 01 */	addi r27, r27, 1
/* 8028A73C 0028767C  2C 1B 00 07 */	cmpwi r27, 7
/* 8028A740 00287680  41 80 FF 48 */	blt .L_8028A688
.L_8028A744:
/* 8028A744 00287684  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 8028A748 00287688  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 8028A74C 0028768C  E3 C1 01 28 */	psq_l f30, 296(r1), 0, qr0
/* 8028A750 00287690  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 8028A754 00287694  E3 A1 01 18 */	psq_l f29, 280(r1), 0, qr0
/* 8028A758 00287698  CB A1 01 10 */	lfd f29, 0x110(r1)
/* 8028A75C 0028769C  E3 81 01 08 */	psq_l f28, 264(r1), 0, qr0
/* 8028A760 002876A0  CB 81 01 00 */	lfd f28, 0x100(r1)
/* 8028A764 002876A4  E3 61 00 F8 */	psq_l f27, 248(r1), 0, qr0
/* 8028A768 002876A8  CB 61 00 F0 */	lfd f27, 0xf0(r1)
/* 8028A76C 002876AC  E3 41 00 E8 */	psq_l f26, 232(r1), 0, qr0
/* 8028A770 002876B0  CB 41 00 E0 */	lfd f26, 0xe0(r1)
/* 8028A774 002876B4  E3 21 00 D8 */	psq_l f25, 216(r1), 0, qr0
/* 8028A778 002876B8  CB 21 00 D0 */	lfd f25, 0xd0(r1)
/* 8028A77C 002876BC  E3 01 00 C8 */	psq_l f24, 200(r1), 0, qr0
/* 8028A780 002876C0  CB 01 00 C0 */	lfd f24, 0xc0(r1)
/* 8028A784 002876C4  E2 E1 00 B8 */	psq_l f23, 184(r1), 0, qr0
/* 8028A788 002876C8  CA E1 00 B0 */	lfd f23, 0xb0(r1)
/* 8028A78C 002876CC  E2 C1 00 A8 */	psq_l f22, 168(r1), 0, qr0
/* 8028A790 002876D0  CA C1 00 A0 */	lfd f22, 0xa0(r1)
/* 8028A794 002876D4  E2 A1 00 98 */	psq_l f21, 152(r1), 0, qr0
/* 8028A798 002876D8  CA A1 00 90 */	lfd f21, 0x90(r1)
/* 8028A79C 002876DC  E2 81 00 88 */	psq_l f20, 136(r1), 0, qr0
/* 8028A7A0 002876E0  CA 81 00 80 */	lfd f20, 0x80(r1)
/* 8028A7A4 002876E4  E2 61 00 78 */	psq_l f19, 120(r1), 0, qr0
/* 8028A7A8 002876E8  CA 61 00 70 */	lfd f19, 0x70(r1)
/* 8028A7AC 002876EC  BB 61 00 5C */	lmw r27, 0x5c(r1)
/* 8028A7B0 002876F0  80 01 01 44 */	lwz r0, 0x144(r1)
/* 8028A7B4 002876F4  7C 08 03 A6 */	mtlr r0
/* 8028A7B8 002876F8  38 21 01 40 */	addi r1, r1, 0x140
/* 8028A7BC 002876FC  4E 80 00 20 */	blr 
.endfn createCrashFallRock__Q34Game5Queen3ObjFv

.fn createBabyChappy__Q34Game5Queen3ObjFv, global
/* 8028A7C0 00287700  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8028A7C4 00287704  7C 08 02 A6 */	mflr r0
/* 8028A7C8 00287708  38 80 00 1F */	li r4, 0x1f
/* 8028A7CC 0028770C  90 01 00 74 */	stw r0, 0x74(r1)
/* 8028A7D0 00287710  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 8028A7D4 00287714  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8028A7D8 00287718  7C 7E 1B 78 */	mr r30, r3
/* 8028A7DC 0028771C  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8028A7E0 00287720  4B E8 34 C5 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8028A7E4 00287724  7C 7F 1B 79 */	or. r31, r3, r3
/* 8028A7E8 00287728  41 82 01 5C */	beq .L_8028A944
/* 8028A7EC 0028772C  38 61 00 14 */	addi r3, r1, 0x14
/* 8028A7F0 00287730  4B EA 44 35 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 8028A7F4 00287734  3C 80 80 48 */	lis r4, lbl_80487FF8@ha
/* 8028A7F8 00287738  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 8028A7FC 0028773C  38 84 7F F8 */	addi r4, r4, lbl_80487FF8@l
/* 8028A800 00287740  48 1B 47 E5 */	bl getJoint__Q28SysShape5ModelFPc
/* 8028A804 00287744  48 19 F0 9D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8028A808 00287748  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 8028A80C 0028774C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8028A810 00287750  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8028A814 00287754  7F C3 F3 78 */	mr r3, r30
/* 8028A818 00287758  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8028A81C 0028775C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8028A820 00287760  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8028A824 00287764  81 9E 00 00 */	lwz r12, 0(r30)
/* 8028A828 00287768  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8028A82C 0028776C  7D 89 03 A6 */	mtctr r12
/* 8028A830 00287770  4E 80 04 21 */	bctrl 
/* 8028A834 00287774  C0 02 D4 EC */	lfs f0, lbl_8051B84C@sda21(r2)
/* 8028A838 00287778  7F E3 FB 78 */	mr r3, r31
/* 8028A83C 0028777C  38 81 00 14 */	addi r4, r1, 0x14
/* 8028A840 00287780  EC 00 08 2A */	fadds f0, f0, f1
/* 8028A844 00287784  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8028A848 00287788  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A84C 0028778C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 8028A850 00287790  7D 89 03 A6 */	mtctr r12
/* 8028A854 00287794  4E 80 04 21 */	bctrl 
/* 8028A858 00287798  7C 7F 1B 79 */	or. r31, r3, r3
/* 8028A85C 0028779C  41 82 00 E8 */	beq .L_8028A944
/* 8028A860 002877A0  C0 A1 00 20 */	lfs f5, 0x20(r1)
/* 8028A864 002877A4  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028A868 002877A8  FC 20 28 90 */	fmr f1, f5
/* 8028A86C 002877AC  80 BE 00 C0 */	lwz r5, 0xc0(r30)
/* 8028A870 002877B0  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8028A874 002877B4  40 80 00 08 */	bge .L_8028A87C
/* 8028A878 002877B8  FC 20 28 50 */	fneg f1, f5
.L_8028A87C:
/* 8028A87C 002877BC  C0 42 D4 E0 */	lfs f2, lbl_8051B840@sda21(r2)
/* 8028A880 002877C0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8028A884 002877C4  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028A888 002877C8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8028A88C 002877CC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 8028A890 002877D0  C0 65 04 4C */	lfs f3, 0x44c(r5)
/* 8028A894 002877D4  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8028A898 002877D8  FC 00 08 1E */	fctiwz f0, f1
/* 8028A89C 002877DC  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 8028A8A0 002877E0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8028A8A4 002877E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A8A8 002877E8  7C 64 02 14 */	add r3, r4, r0
/* 8028A8AC 002877EC  C0 03 00 04 */	lfs f0, 4(r3)
/* 8028A8B0 002877F0  EC 83 00 32 */	fmuls f4, f3, f0
/* 8028A8B4 002877F4  40 80 00 28 */	bge .L_8028A8DC
/* 8028A8B8 002877F8  C0 02 D4 E4 */	lfs f0, lbl_8051B844@sda21(r2)
/* 8028A8BC 002877FC  EC 05 00 32 */	fmuls f0, f5, f0
/* 8028A8C0 00287800  FC 00 00 1E */	fctiwz f0, f0
/* 8028A8C4 00287804  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8028A8C8 00287808  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8028A8CC 0028780C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A8D0 00287810  7C 04 04 2E */	lfsx f0, r4, r0
/* 8028A8D4 00287814  FC 00 00 50 */	fneg f0, f0
/* 8028A8D8 00287818  48 00 00 1C */	b .L_8028A8F4
.L_8028A8DC:
/* 8028A8DC 0028781C  EC 05 00 B2 */	fmuls f0, f5, f2
/* 8028A8E0 00287820  FC 00 00 1E */	fctiwz f0, f0
/* 8028A8E4 00287824  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 8028A8E8 00287828  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8028A8EC 0028782C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 8028A8F0 00287830  7C 04 04 2E */	lfsx f0, r4, r0
.L_8028A8F4:
/* 8028A8F4 00287834  EC 23 00 32 */	fmuls f1, f3, f0
/* 8028A8F8 00287838  C0 02 D4 B8 */	lfs f0, lbl_8051B818@sda21(r2)
/* 8028A8FC 0028783C  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 8028A900 00287840  7F E3 FB 78 */	mr r3, r31
/* 8028A904 00287844  38 80 00 00 */	li r4, 0
/* 8028A908 00287848  D0 21 00 08 */	stfs f1, 8(r1)
/* 8028A90C 0028784C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8028A910 00287850  4B EB 06 B9 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 8028A914 00287854  7F E3 FB 78 */	mr r3, r31
/* 8028A918 00287858  38 81 00 08 */	addi r4, r1, 8
/* 8028A91C 0028785C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028A920 00287860  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 8028A924 00287864  7D 89 03 A6 */	mtctr r12
/* 8028A928 00287868  4E 80 04 21 */	bctrl 
/* 8028A92C 0028786C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8028A930 00287870  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 8028A934 00287874  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8028A938 00287878  D0 1F 01 D8 */	stfs f0, 0x1d8(r31)
/* 8028A93C 0028787C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8028A940 00287880  D0 1F 01 DC */	stfs f0, 0x1dc(r31)
.L_8028A944:
/* 8028A944 00287884  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8028A948 00287888  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 8028A94C 0028788C  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 8028A950 00287890  7C 08 03 A6 */	mtlr r0
/* 8028A954 00287894  38 21 00 70 */	addi r1, r1, 0x70
/* 8028A958 00287898  4E 80 00 20 */	blr 
.endfn createBabyChappy__Q34Game5Queen3ObjFv

.fn "isDone__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv", weak
/* 8028A95C 0028789C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028A960 002878A0  7C 08 02 A6 */	mflr r0
/* 8028A964 002878A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028A968 002878A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028A96C 002878AC  7C 7F 1B 78 */	mr r31, r3
/* 8028A970 002878B0  80 63 00 08 */	lwz r3, 8(r3)
/* 8028A974 002878B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028A978 002878B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028A97C 002878BC  7D 89 03 A6 */	mtctr r12
/* 8028A980 002878C0  4E 80 04 21 */	bctrl 
/* 8028A984 002878C4  80 1F 00 04 */	lwz r0, 4(r31)
/* 8028A988 002878C8  7C 00 18 50 */	subf r0, r0, r3
/* 8028A98C 002878CC  7C 00 00 34 */	cntlzw r0, r0
/* 8028A990 002878D0  54 03 D9 7E */	srwi r3, r0, 5
/* 8028A994 002878D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028A998 002878D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028A99C 002878DC  7C 08 03 A6 */	mtlr r0
/* 8028A9A0 002878E0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028A9A4 002878E4  4E 80 00 20 */	blr 
.endfn "isDone__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"

.fn updateCreateBaby__Q34Game5Queen3ObjFv, global
/* 8028A9A8 002878E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8028A9AC 002878EC  7C 08 02 A6 */	mflr r0
/* 8028A9B0 002878F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8028A9B4 002878F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8028A9B8 002878F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8028A9BC 002878FC  7C 7E 1B 78 */	mr r30, r3
/* 8028A9C0 00287900  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 8028A9C4 00287904  28 00 00 00 */	cmplwi r0, 0
/* 8028A9C8 00287908  41 82 02 3C */	beq .L_8028AC04
/* 8028A9CC 0028790C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8028A9D0 00287910  3B E0 00 00 */	li r31, 0
/* 8028A9D4 00287914  C0 3E 02 CC */	lfs f1, 0x2cc(r30)
/* 8028A9D8 00287918  38 80 00 1F */	li r4, 0x1f
/* 8028A9DC 0028791C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 8028A9E0 00287920  EC 01 00 2A */	fadds f0, f1, f0
/* 8028A9E4 00287924  D0 1E 02 CC */	stfs f0, 0x2cc(r30)
/* 8028A9E8 00287928  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 8028A9EC 0028792C  4B E8 32 B9 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 8028A9F0 00287930  28 03 00 00 */	cmplwi r3, 0
/* 8028A9F4 00287934  41 82 01 E0 */	beq .L_8028ABD4
/* 8028A9F8 00287938  41 82 00 08 */	beq .L_8028AA00
/* 8028A9FC 0028793C  38 63 00 04 */	addi r3, r3, 4
.L_8028AA00:
/* 8028AA00 00287940  38 00 00 00 */	li r0, 0
/* 8028AA04 00287944  3C 80 80 4D */	lis r4, "__vt__Q24Game31EnemyIterator<Q34Game4Baby3Obj>"@ha
/* 8028AA08 00287948  38 84 A0 04 */	addi r4, r4, "__vt__Q24Game31EnemyIterator<Q34Game4Baby3Obj>"@l
/* 8028AA0C 0028794C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028AA10 00287950  28 00 00 00 */	cmplwi r0, 0
/* 8028AA14 00287954  90 81 00 08 */	stw r4, 8(r1)
/* 8028AA18 00287958  90 01 00 0C */	stw r0, 0xc(r1)
/* 8028AA1C 0028795C  90 61 00 10 */	stw r3, 0x10(r1)
/* 8028AA20 00287960  40 82 00 1C */	bne .L_8028AA3C
/* 8028AA24 00287964  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AA28 00287968  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028AA2C 0028796C  7D 89 03 A6 */	mtctr r12
/* 8028AA30 00287970  4E 80 04 21 */	bctrl 
/* 8028AA34 00287974  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028AA38 00287978  48 00 01 7C */	b .L_8028ABB4
.L_8028AA3C:
/* 8028AA3C 0028797C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AA40 00287980  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028AA44 00287984  7D 89 03 A6 */	mtctr r12
/* 8028AA48 00287988  4E 80 04 21 */	bctrl 
/* 8028AA4C 0028798C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028AA50 00287990  48 00 00 58 */	b .L_8028AAA8
.L_8028AA54:
/* 8028AA54 00287994  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028AA58 00287998  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028AA5C 0028799C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AA60 002879A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028AA64 002879A4  7D 89 03 A6 */	mtctr r12
/* 8028AA68 002879A8  4E 80 04 21 */	bctrl 
/* 8028AA6C 002879AC  7C 64 1B 78 */	mr r4, r3
/* 8028AA70 002879B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8028AA74 002879B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AA78 002879B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028AA7C 002879BC  7D 89 03 A6 */	mtctr r12
/* 8028AA80 002879C0  4E 80 04 21 */	bctrl 
/* 8028AA84 002879C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028AA88 002879C8  40 82 01 2C */	bne .L_8028ABB4
/* 8028AA8C 002879CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028AA90 002879D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028AA94 002879D4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AA98 002879D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028AA9C 002879DC  7D 89 03 A6 */	mtctr r12
/* 8028AAA0 002879E0  4E 80 04 21 */	bctrl 
/* 8028AAA4 002879E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8028AAA8:
/* 8028AAA8 002879E8  81 81 00 08 */	lwz r12, 8(r1)
/* 8028AAAC 002879EC  38 61 00 08 */	addi r3, r1, 8
/* 8028AAB0 002879F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028AAB4 002879F4  7D 89 03 A6 */	mtctr r12
/* 8028AAB8 002879F8  4E 80 04 21 */	bctrl 
/* 8028AABC 002879FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028AAC0 00287A00  41 82 FF 94 */	beq .L_8028AA54
/* 8028AAC4 00287A04  48 00 00 F0 */	b .L_8028ABB4
.L_8028AAC8:
/* 8028AAC8 00287A08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028AACC 00287A0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AAD0 00287A10  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028AAD4 00287A14  7D 89 03 A6 */	mtctr r12
/* 8028AAD8 00287A18  4E 80 04 21 */	bctrl 
/* 8028AADC 00287A1C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AAE0 00287A20  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 8028AAE4 00287A24  7D 89 03 A6 */	mtctr r12
/* 8028AAE8 00287A28  4E 80 04 21 */	bctrl 
/* 8028AAEC 00287A2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028AAF0 00287A30  41 82 00 08 */	beq .L_8028AAF8
/* 8028AAF4 00287A34  3B FF 00 01 */	addi r31, r31, 1
.L_8028AAF8:
/* 8028AAF8 00287A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028AAFC 00287A3C  28 00 00 00 */	cmplwi r0, 0
/* 8028AB00 00287A40  40 82 00 24 */	bne .L_8028AB24
/* 8028AB04 00287A44  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028AB08 00287A48  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028AB0C 00287A4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AB10 00287A50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028AB14 00287A54  7D 89 03 A6 */	mtctr r12
/* 8028AB18 00287A58  4E 80 04 21 */	bctrl 
/* 8028AB1C 00287A5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028AB20 00287A60  48 00 00 94 */	b .L_8028ABB4
.L_8028AB24:
/* 8028AB24 00287A64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028AB28 00287A68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028AB2C 00287A6C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AB30 00287A70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028AB34 00287A74  7D 89 03 A6 */	mtctr r12
/* 8028AB38 00287A78  4E 80 04 21 */	bctrl 
/* 8028AB3C 00287A7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028AB40 00287A80  48 00 00 58 */	b .L_8028AB98
.L_8028AB44:
/* 8028AB44 00287A84  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028AB48 00287A88  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028AB4C 00287A8C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AB50 00287A90  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028AB54 00287A94  7D 89 03 A6 */	mtctr r12
/* 8028AB58 00287A98  4E 80 04 21 */	bctrl 
/* 8028AB5C 00287A9C  7C 64 1B 78 */	mr r4, r3
/* 8028AB60 00287AA0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8028AB64 00287AA4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AB68 00287AA8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028AB6C 00287AAC  7D 89 03 A6 */	mtctr r12
/* 8028AB70 00287AB0  4E 80 04 21 */	bctrl 
/* 8028AB74 00287AB4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028AB78 00287AB8  40 82 00 3C */	bne .L_8028ABB4
/* 8028AB7C 00287ABC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028AB80 00287AC0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028AB84 00287AC4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028AB88 00287AC8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028AB8C 00287ACC  7D 89 03 A6 */	mtctr r12
/* 8028AB90 00287AD0  4E 80 04 21 */	bctrl 
/* 8028AB94 00287AD4  90 61 00 0C */	stw r3, 0xc(r1)
.L_8028AB98:
/* 8028AB98 00287AD8  81 81 00 08 */	lwz r12, 8(r1)
/* 8028AB9C 00287ADC  38 61 00 08 */	addi r3, r1, 8
/* 8028ABA0 00287AE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028ABA4 00287AE4  7D 89 03 A6 */	mtctr r12
/* 8028ABA8 00287AE8  4E 80 04 21 */	bctrl 
/* 8028ABAC 00287AEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028ABB0 00287AF0  41 82 FF 94 */	beq .L_8028AB44
.L_8028ABB4:
/* 8028ABB4 00287AF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 8028ABB8 00287AF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028ABBC 00287AFC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028ABC0 00287B00  7D 89 03 A6 */	mtctr r12
/* 8028ABC4 00287B04  4E 80 04 21 */	bctrl 
/* 8028ABC8 00287B08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 8028ABCC 00287B0C  7C 04 18 40 */	cmplw r4, r3
/* 8028ABD0 00287B10  40 82 FE F8 */	bne .L_8028AAC8
.L_8028ABD4:
/* 8028ABD4 00287B14  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8028ABD8 00287B18  80 03 08 94 */	lwz r0, 0x894(r3)
/* 8028ABDC 00287B1C  7C 1F 00 00 */	cmpw r31, r0
/* 8028ABE0 00287B20  41 80 00 10 */	blt .L_8028ABF0
/* 8028ABE4 00287B24  38 00 00 00 */	li r0, 0
/* 8028ABE8 00287B28  98 1E 02 C1 */	stb r0, 0x2c1(r30)
/* 8028ABEC 00287B2C  48 00 00 18 */	b .L_8028AC04
.L_8028ABF0:
/* 8028ABF0 00287B30  80 03 08 BC */	lwz r0, 0x8bc(r3)
/* 8028ABF4 00287B34  7C 1F 00 00 */	cmpw r31, r0
/* 8028ABF8 00287B38  41 81 00 0C */	bgt .L_8028AC04
/* 8028ABFC 00287B3C  38 00 00 01 */	li r0, 1
/* 8028AC00 00287B40  98 1E 02 C1 */	stb r0, 0x2c1(r30)
.L_8028AC04:
/* 8028AC04 00287B44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8028AC08 00287B48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8028AC0C 00287B4C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8028AC10 00287B50  7C 08 03 A6 */	mtlr r0
/* 8028AC14 00287B54  38 21 00 20 */	addi r1, r1, 0x20
/* 8028AC18 00287B58  4E 80 00 20 */	blr 
.endfn updateCreateBaby__Q34Game5Queen3ObjFv

.fn isCreateBaby__Q34Game5Queen3ObjFv, global
/* 8028AC1C 00287B5C  88 03 02 C0 */	lbz r0, 0x2c0(r3)
/* 8028AC20 00287B60  28 00 00 00 */	cmplwi r0, 0
/* 8028AC24 00287B64  41 82 00 2C */	beq .L_8028AC50
/* 8028AC28 00287B68  88 03 02 C1 */	lbz r0, 0x2c1(r3)
/* 8028AC2C 00287B6C  28 00 00 00 */	cmplwi r0, 0
/* 8028AC30 00287B70  41 82 00 20 */	beq .L_8028AC50
/* 8028AC34 00287B74  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 8028AC38 00287B78  C0 23 02 CC */	lfs f1, 0x2cc(r3)
/* 8028AC3C 00287B7C  C0 04 08 44 */	lfs f0, 0x844(r4)
/* 8028AC40 00287B80  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028AC44 00287B84  40 81 00 0C */	ble .L_8028AC50
/* 8028AC48 00287B88  38 60 00 01 */	li r3, 1
/* 8028AC4C 00287B8C  4E 80 00 20 */	blr 
.L_8028AC50:
/* 8028AC50 00287B90  38 60 00 00 */	li r3, 0
/* 8028AC54 00287B94  4E 80 00 20 */	blr 
.endfn isCreateBaby__Q34Game5Queen3ObjFv

.fn isHitCounterUp__Q34Game5Queen3ObjFv, global
/* 8028AC58 00287B98  C0 23 02 0C */	lfs f1, 0x20c(r3)
/* 8028AC5C 00287B9C  C0 03 02 D0 */	lfs f0, 0x2d0(r3)
/* 8028AC60 00287BA0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8028AC64 00287BA4  7C 00 00 26 */	mfcr r0
/* 8028AC68 00287BA8  54 03 17 FE */	rlwinm r3, r0, 2, 0x1f, 0x1f
/* 8028AC6C 00287BAC  4E 80 00 20 */	blr 
.endfn isHitCounterUp__Q34Game5Queen3ObjFv

.fn resetJointShadow__Q34Game5Queen3ObjFv, global
/* 8028AC70 00287BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028AC74 00287BB4  7C 08 02 A6 */	mflr r0
/* 8028AC78 00287BB8  7C 64 1B 78 */	mr r4, r3
/* 8028AC7C 00287BBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028AC80 00287BC0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8028AC84 00287BC4  4B FB 72 15 */	bl delNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8028AC88 00287BC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028AC8C 00287BCC  7C 08 03 A6 */	mtlr r0
/* 8028AC90 00287BD0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028AC94 00287BD4  4E 80 00 20 */	blr 
.endfn resetJointShadow__Q34Game5Queen3ObjFv

.fn releaseJointShadow__Q34Game5Queen3ObjFv, global
/* 8028AC98 00287BD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028AC9C 00287BDC  7C 08 02 A6 */	mflr r0
/* 8028ACA0 00287BE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028ACA4 00287BE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028ACA8 00287BE8  7C 7F 1B 78 */	mr r31, r3
/* 8028ACAC 00287BEC  7F E4 FB 78 */	mr r4, r31
/* 8028ACB0 00287BF0  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8028ACB4 00287BF4  4B FB 70 81 */	bl addNormalShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8028ACB8 00287BF8  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 8028ACBC 00287BFC  7F E4 FB 78 */	mr r4, r31
/* 8028ACC0 00287C00  4B FB 72 45 */	bl delJointShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 8028ACC4 00287C04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028ACC8 00287C08  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028ACCC 00287C0C  7C 08 03 A6 */	mtlr r0
/* 8028ACD0 00287C10  38 21 00 10 */	addi r1, r1, 0x10
/* 8028ACD4 00287C14  4E 80 00 20 */	blr 
.endfn releaseJointShadow__Q34Game5Queen3ObjFv

.fn startBossChargeBGM__Q34Game5Queen3ObjFv, global
/* 8028ACD8 00287C18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028ACDC 00287C1C  7C 08 02 A6 */	mflr r0
/* 8028ACE0 00287C20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028ACE4 00287C24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028ACE8 00287C28  3B E0 00 00 */	li r31, 0
/* 8028ACEC 00287C2C  93 C1 00 08 */	stw r30, 8(r1)
/* 8028ACF0 00287C30  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 8028ACF4 00287C34  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028ACF8 00287C38  7F C3 F3 78 */	mr r3, r30
/* 8028ACFC 00287C3C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AD00 00287C40  7D 89 03 A6 */	mtctr r12
/* 8028AD04 00287C44  4E 80 04 21 */	bctrl 
/* 8028AD08 00287C48  2C 03 00 05 */	cmpwi r3, 5
/* 8028AD0C 00287C4C  41 82 00 3C */	beq .L_8028AD48
/* 8028AD10 00287C50  7F C3 F3 78 */	mr r3, r30
/* 8028AD14 00287C54  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AD18 00287C58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AD1C 00287C5C  7D 89 03 A6 */	mtctr r12
/* 8028AD20 00287C60  4E 80 04 21 */	bctrl 
/* 8028AD24 00287C64  2C 03 00 06 */	cmpwi r3, 6
/* 8028AD28 00287C68  41 82 00 20 */	beq .L_8028AD48
/* 8028AD2C 00287C6C  7F C3 F3 78 */	mr r3, r30
/* 8028AD30 00287C70  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AD34 00287C74  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AD38 00287C78  7D 89 03 A6 */	mtctr r12
/* 8028AD3C 00287C7C  4E 80 04 21 */	bctrl 
/* 8028AD40 00287C80  2C 03 00 07 */	cmpwi r3, 7
/* 8028AD44 00287C84  40 82 00 08 */	bne .L_8028AD4C
.L_8028AD48:
/* 8028AD48 00287C88  3B E0 00 01 */	li r31, 1
.L_8028AD4C:
/* 8028AD4C 00287C8C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028AD50 00287C90  40 82 00 20 */	bne .L_8028AD70
/* 8028AD54 00287C94  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028AD58 00287C98  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028AD5C 00287C9C  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028AD60 00287CA0  38 80 04 54 */	li r4, 0x454
/* 8028AD64 00287CA4  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028AD68 00287CA8  4C C6 31 82 */	crclr 6
/* 8028AD6C 00287CAC  4B D9 F8 D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028AD70:
/* 8028AD70 00287CB0  7F C3 F3 78 */	mr r3, r30
/* 8028AD74 00287CB4  38 80 00 02 */	li r4, 2
/* 8028AD78 00287CB8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AD7C 00287CBC  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8028AD80 00287CC0  7D 89 03 A6 */	mtctr r12
/* 8028AD84 00287CC4  4E 80 04 21 */	bctrl 
/* 8028AD88 00287CC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028AD8C 00287CCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028AD90 00287CD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028AD94 00287CD4  7C 08 03 A6 */	mtlr r0
/* 8028AD98 00287CD8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028AD9C 00287CDC  4E 80 00 20 */	blr 
.endfn startBossChargeBGM__Q34Game5Queen3ObjFv

.fn startBossAttackLoopBGM__Q34Game5Queen3ObjFv, global
/* 8028ADA0 00287CE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028ADA4 00287CE4  7C 08 02 A6 */	mflr r0
/* 8028ADA8 00287CE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028ADAC 00287CEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028ADB0 00287CF0  93 C1 00 08 */	stw r30, 8(r1)
/* 8028ADB4 00287CF4  88 03 02 C5 */	lbz r0, 0x2c5(r3)
/* 8028ADB8 00287CF8  28 00 00 00 */	cmplwi r0, 0
/* 8028ADBC 00287CFC  40 82 00 A8 */	bne .L_8028AE64
/* 8028ADC0 00287D00  38 00 00 01 */	li r0, 1
/* 8028ADC4 00287D04  3B E0 00 00 */	li r31, 0
/* 8028ADC8 00287D08  98 03 02 C5 */	stb r0, 0x2c5(r3)
/* 8028ADCC 00287D0C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 8028ADD0 00287D10  7F C3 F3 78 */	mr r3, r30
/* 8028ADD4 00287D14  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028ADD8 00287D18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028ADDC 00287D1C  7D 89 03 A6 */	mtctr r12
/* 8028ADE0 00287D20  4E 80 04 21 */	bctrl 
/* 8028ADE4 00287D24  2C 03 00 05 */	cmpwi r3, 5
/* 8028ADE8 00287D28  41 82 00 3C */	beq .L_8028AE24
/* 8028ADEC 00287D2C  7F C3 F3 78 */	mr r3, r30
/* 8028ADF0 00287D30  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028ADF4 00287D34  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028ADF8 00287D38  7D 89 03 A6 */	mtctr r12
/* 8028ADFC 00287D3C  4E 80 04 21 */	bctrl 
/* 8028AE00 00287D40  2C 03 00 06 */	cmpwi r3, 6
/* 8028AE04 00287D44  41 82 00 20 */	beq .L_8028AE24
/* 8028AE08 00287D48  7F C3 F3 78 */	mr r3, r30
/* 8028AE0C 00287D4C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AE10 00287D50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AE14 00287D54  7D 89 03 A6 */	mtctr r12
/* 8028AE18 00287D58  4E 80 04 21 */	bctrl 
/* 8028AE1C 00287D5C  2C 03 00 07 */	cmpwi r3, 7
/* 8028AE20 00287D60  40 82 00 08 */	bne .L_8028AE28
.L_8028AE24:
/* 8028AE24 00287D64  3B E0 00 01 */	li r31, 1
.L_8028AE28:
/* 8028AE28 00287D68  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028AE2C 00287D6C  40 82 00 20 */	bne .L_8028AE4C
/* 8028AE30 00287D70  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028AE34 00287D74  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028AE38 00287D78  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028AE3C 00287D7C  38 80 04 54 */	li r4, 0x454
/* 8028AE40 00287D80  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028AE44 00287D84  4C C6 31 82 */	crclr 6
/* 8028AE48 00287D88  4B D9 F7 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028AE4C:
/* 8028AE4C 00287D8C  7F C3 F3 78 */	mr r3, r30
/* 8028AE50 00287D90  38 80 00 08 */	li r4, 8
/* 8028AE54 00287D94  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AE58 00287D98  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8028AE5C 00287D9C  7D 89 03 A6 */	mtctr r12
/* 8028AE60 00287DA0  4E 80 04 21 */	bctrl 
.L_8028AE64:
/* 8028AE64 00287DA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028AE68 00287DA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028AE6C 00287DAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028AE70 00287DB0  7C 08 03 A6 */	mtlr r0
/* 8028AE74 00287DB4  38 21 00 10 */	addi r1, r1, 0x10
/* 8028AE78 00287DB8  4E 80 00 20 */	blr 
.endfn startBossAttackLoopBGM__Q34Game5Queen3ObjFv

.fn finishBossAttackLoopBGM__Q34Game5Queen3ObjFv, global
/* 8028AE7C 00287DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028AE80 00287DC0  7C 08 02 A6 */	mflr r0
/* 8028AE84 00287DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028AE88 00287DC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028AE8C 00287DCC  93 C1 00 08 */	stw r30, 8(r1)
/* 8028AE90 00287DD0  88 03 02 C5 */	lbz r0, 0x2c5(r3)
/* 8028AE94 00287DD4  28 00 00 00 */	cmplwi r0, 0
/* 8028AE98 00287DD8  41 82 00 A4 */	beq .L_8028AF3C
/* 8028AE9C 00287DDC  3B E0 00 00 */	li r31, 0
/* 8028AEA0 00287DE0  9B E3 02 C5 */	stb r31, 0x2c5(r3)
/* 8028AEA4 00287DE4  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 8028AEA8 00287DE8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AEAC 00287DEC  7F C3 F3 78 */	mr r3, r30
/* 8028AEB0 00287DF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AEB4 00287DF4  7D 89 03 A6 */	mtctr r12
/* 8028AEB8 00287DF8  4E 80 04 21 */	bctrl 
/* 8028AEBC 00287DFC  2C 03 00 05 */	cmpwi r3, 5
/* 8028AEC0 00287E00  41 82 00 3C */	beq .L_8028AEFC
/* 8028AEC4 00287E04  7F C3 F3 78 */	mr r3, r30
/* 8028AEC8 00287E08  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AECC 00287E0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AED0 00287E10  7D 89 03 A6 */	mtctr r12
/* 8028AED4 00287E14  4E 80 04 21 */	bctrl 
/* 8028AED8 00287E18  2C 03 00 06 */	cmpwi r3, 6
/* 8028AEDC 00287E1C  41 82 00 20 */	beq .L_8028AEFC
/* 8028AEE0 00287E20  7F C3 F3 78 */	mr r3, r30
/* 8028AEE4 00287E24  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AEE8 00287E28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AEEC 00287E2C  7D 89 03 A6 */	mtctr r12
/* 8028AEF0 00287E30  4E 80 04 21 */	bctrl 
/* 8028AEF4 00287E34  2C 03 00 07 */	cmpwi r3, 7
/* 8028AEF8 00287E38  40 82 00 08 */	bne .L_8028AF00
.L_8028AEFC:
/* 8028AEFC 00287E3C  3B E0 00 01 */	li r31, 1
.L_8028AF00:
/* 8028AF00 00287E40  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028AF04 00287E44  40 82 00 20 */	bne .L_8028AF24
/* 8028AF08 00287E48  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028AF0C 00287E4C  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028AF10 00287E50  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028AF14 00287E54  38 80 04 54 */	li r4, 0x454
/* 8028AF18 00287E58  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028AF1C 00287E5C  4C C6 31 82 */	crclr 6
/* 8028AF20 00287E60  4B D9 F7 21 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028AF24:
/* 8028AF24 00287E64  7F C3 F3 78 */	mr r3, r30
/* 8028AF28 00287E68  38 80 00 01 */	li r4, 1
/* 8028AF2C 00287E6C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AF30 00287E70  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8028AF34 00287E74  7D 89 03 A6 */	mtctr r12
/* 8028AF38 00287E78  4E 80 04 21 */	bctrl 
.L_8028AF3C:
/* 8028AF3C 00287E7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028AF40 00287E80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028AF44 00287E84  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028AF48 00287E88  7C 08 03 A6 */	mtlr r0
/* 8028AF4C 00287E8C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028AF50 00287E90  4E 80 00 20 */	blr 
.endfn finishBossAttackLoopBGM__Q34Game5Queen3ObjFv

.fn startStoneStateBossAttackLoopBGM__Q34Game5Queen3ObjFv, global
/* 8028AF54 00287E94  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028AF58 00287E98  7C 08 02 A6 */	mflr r0
/* 8028AF5C 00287E9C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028AF60 00287EA0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028AF64 00287EA4  93 C1 00 08 */	stw r30, 8(r1)
/* 8028AF68 00287EA8  88 03 02 C5 */	lbz r0, 0x2c5(r3)
/* 8028AF6C 00287EAC  28 00 00 00 */	cmplwi r0, 0
/* 8028AF70 00287EB0  41 82 00 A0 */	beq .L_8028B010
/* 8028AF74 00287EB4  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 8028AF78 00287EB8  3B E0 00 00 */	li r31, 0
/* 8028AF7C 00287EBC  7F C3 F3 78 */	mr r3, r30
/* 8028AF80 00287EC0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AF84 00287EC4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AF88 00287EC8  7D 89 03 A6 */	mtctr r12
/* 8028AF8C 00287ECC  4E 80 04 21 */	bctrl 
/* 8028AF90 00287ED0  2C 03 00 05 */	cmpwi r3, 5
/* 8028AF94 00287ED4  41 82 00 3C */	beq .L_8028AFD0
/* 8028AF98 00287ED8  7F C3 F3 78 */	mr r3, r30
/* 8028AF9C 00287EDC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AFA0 00287EE0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AFA4 00287EE4  7D 89 03 A6 */	mtctr r12
/* 8028AFA8 00287EE8  4E 80 04 21 */	bctrl 
/* 8028AFAC 00287EEC  2C 03 00 06 */	cmpwi r3, 6
/* 8028AFB0 00287EF0  41 82 00 20 */	beq .L_8028AFD0
/* 8028AFB4 00287EF4  7F C3 F3 78 */	mr r3, r30
/* 8028AFB8 00287EF8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028AFBC 00287EFC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028AFC0 00287F00  7D 89 03 A6 */	mtctr r12
/* 8028AFC4 00287F04  4E 80 04 21 */	bctrl 
/* 8028AFC8 00287F08  2C 03 00 07 */	cmpwi r3, 7
/* 8028AFCC 00287F0C  40 82 00 08 */	bne .L_8028AFD4
.L_8028AFD0:
/* 8028AFD0 00287F10  3B E0 00 01 */	li r31, 1
.L_8028AFD4:
/* 8028AFD4 00287F14  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028AFD8 00287F18  40 82 00 20 */	bne .L_8028AFF8
/* 8028AFDC 00287F1C  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028AFE0 00287F20  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028AFE4 00287F24  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028AFE8 00287F28  38 80 04 54 */	li r4, 0x454
/* 8028AFEC 00287F2C  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028AFF0 00287F30  4C C6 31 82 */	crclr 6
/* 8028AFF4 00287F34  4B D9 F6 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028AFF8:
/* 8028AFF8 00287F38  7F C3 F3 78 */	mr r3, r30
/* 8028AFFC 00287F3C  38 80 00 01 */	li r4, 1
/* 8028B000 00287F40  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B004 00287F44  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8028B008 00287F48  7D 89 03 A6 */	mtctr r12
/* 8028B00C 00287F4C  4E 80 04 21 */	bctrl 
.L_8028B010:
/* 8028B010 00287F50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B014 00287F54  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028B018 00287F58  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028B01C 00287F5C  7C 08 03 A6 */	mtlr r0
/* 8028B020 00287F60  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B024 00287F64  4E 80 00 20 */	blr 
.endfn startStoneStateBossAttackLoopBGM__Q34Game5Queen3ObjFv

.fn finishStoneStateBossAttackLoopBGM__Q34Game5Queen3ObjFv, global
/* 8028B028 00287F68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B02C 00287F6C  7C 08 02 A6 */	mflr r0
/* 8028B030 00287F70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B034 00287F74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028B038 00287F78  93 C1 00 08 */	stw r30, 8(r1)
/* 8028B03C 00287F7C  88 03 02 C5 */	lbz r0, 0x2c5(r3)
/* 8028B040 00287F80  28 00 00 00 */	cmplwi r0, 0
/* 8028B044 00287F84  41 82 00 A0 */	beq .L_8028B0E4
/* 8028B048 00287F88  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 8028B04C 00287F8C  3B E0 00 00 */	li r31, 0
/* 8028B050 00287F90  7F C3 F3 78 */	mr r3, r30
/* 8028B054 00287F94  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B058 00287F98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B05C 00287F9C  7D 89 03 A6 */	mtctr r12
/* 8028B060 00287FA0  4E 80 04 21 */	bctrl 
/* 8028B064 00287FA4  2C 03 00 05 */	cmpwi r3, 5
/* 8028B068 00287FA8  41 82 00 3C */	beq .L_8028B0A4
/* 8028B06C 00287FAC  7F C3 F3 78 */	mr r3, r30
/* 8028B070 00287FB0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B074 00287FB4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B078 00287FB8  7D 89 03 A6 */	mtctr r12
/* 8028B07C 00287FBC  4E 80 04 21 */	bctrl 
/* 8028B080 00287FC0  2C 03 00 06 */	cmpwi r3, 6
/* 8028B084 00287FC4  41 82 00 20 */	beq .L_8028B0A4
/* 8028B088 00287FC8  7F C3 F3 78 */	mr r3, r30
/* 8028B08C 00287FCC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B090 00287FD0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B094 00287FD4  7D 89 03 A6 */	mtctr r12
/* 8028B098 00287FD8  4E 80 04 21 */	bctrl 
/* 8028B09C 00287FDC  2C 03 00 07 */	cmpwi r3, 7
/* 8028B0A0 00287FE0  40 82 00 08 */	bne .L_8028B0A8
.L_8028B0A4:
/* 8028B0A4 00287FE4  3B E0 00 01 */	li r31, 1
.L_8028B0A8:
/* 8028B0A8 00287FE8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028B0AC 00287FEC  40 82 00 20 */	bne .L_8028B0CC
/* 8028B0B0 00287FF0  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028B0B4 00287FF4  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028B0B8 00287FF8  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028B0BC 00287FFC  38 80 04 54 */	li r4, 0x454
/* 8028B0C0 00288000  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028B0C4 00288004  4C C6 31 82 */	crclr 6
/* 8028B0C8 00288008  4B D9 F5 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028B0CC:
/* 8028B0CC 0028800C  7F C3 F3 78 */	mr r3, r30
/* 8028B0D0 00288010  38 80 00 08 */	li r4, 8
/* 8028B0D4 00288014  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B0D8 00288018  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 8028B0DC 0028801C  7D 89 03 A6 */	mtctr r12
/* 8028B0E0 00288020  4E 80 04 21 */	bctrl 
.L_8028B0E4:
/* 8028B0E4 00288024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B0E8 00288028  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028B0EC 0028802C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028B0F0 00288030  7C 08 03 A6 */	mtlr r0
/* 8028B0F4 00288034  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B0F8 00288038  4E 80 00 20 */	blr 
.endfn finishStoneStateBossAttackLoopBGM__Q34Game5Queen3ObjFv

.fn updateBossBGM__Q34Game5Queen3ObjFv, global
/* 8028B0FC 0028803C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8028B100 00288040  7C 08 02 A6 */	mflr r0
/* 8028B104 00288044  90 01 00 24 */	stw r0, 0x24(r1)
/* 8028B108 00288048  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8028B10C 0028804C  3B E0 00 00 */	li r31, 0
/* 8028B110 00288050  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8028B114 00288054  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8028B118 00288058  7C 7D 1B 78 */	mr r29, r3
/* 8028B11C 0028805C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 8028B120 00288060  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B124 00288064  7F C3 F3 78 */	mr r3, r30
/* 8028B128 00288068  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B12C 0028806C  7D 89 03 A6 */	mtctr r12
/* 8028B130 00288070  4E 80 04 21 */	bctrl 
/* 8028B134 00288074  2C 03 00 05 */	cmpwi r3, 5
/* 8028B138 00288078  41 82 00 3C */	beq .L_8028B174
/* 8028B13C 0028807C  7F C3 F3 78 */	mr r3, r30
/* 8028B140 00288080  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B144 00288084  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B148 00288088  7D 89 03 A6 */	mtctr r12
/* 8028B14C 0028808C  4E 80 04 21 */	bctrl 
/* 8028B150 00288090  2C 03 00 06 */	cmpwi r3, 6
/* 8028B154 00288094  41 82 00 20 */	beq .L_8028B174
/* 8028B158 00288098  7F C3 F3 78 */	mr r3, r30
/* 8028B15C 0028809C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B160 002880A0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B164 002880A4  7D 89 03 A6 */	mtctr r12
/* 8028B168 002880A8  4E 80 04 21 */	bctrl 
/* 8028B16C 002880AC  2C 03 00 07 */	cmpwi r3, 7
/* 8028B170 002880B0  40 82 00 08 */	bne .L_8028B178
.L_8028B174:
/* 8028B174 002880B4  3B E0 00 01 */	li r31, 1
.L_8028B178:
/* 8028B178 002880B8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028B17C 002880BC  40 82 00 20 */	bne .L_8028B19C
/* 8028B180 002880C0  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028B184 002880C4  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028B188 002880C8  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028B18C 002880CC  38 80 04 54 */	li r4, 0x454
/* 8028B190 002880D0  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028B194 002880D4  4C C6 31 82 */	crclr 6
/* 8028B198 002880D8  4B D9 F4 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028B19C:
/* 8028B19C 002880DC  80 1D 01 F4 */	lwz r0, 0x1f4(r29)
/* 8028B1A0 002880E0  2C 00 00 00 */	cmpwi r0, 0
/* 8028B1A4 002880E4  41 82 00 20 */	beq .L_8028B1C4
/* 8028B1A8 002880E8  7F C3 F3 78 */	mr r3, r30
/* 8028B1AC 002880EC  38 80 00 01 */	li r4, 1
/* 8028B1B0 002880F0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B1B4 002880F4  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8028B1B8 002880F8  7D 89 03 A6 */	mtctr r12
/* 8028B1BC 002880FC  4E 80 04 21 */	bctrl 
/* 8028B1C0 00288100  48 00 00 1C */	b .L_8028B1DC
.L_8028B1C4:
/* 8028B1C4 00288104  7F C3 F3 78 */	mr r3, r30
/* 8028B1C8 00288108  38 80 00 00 */	li r4, 0
/* 8028B1CC 0028810C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 8028B1D0 00288110  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 8028B1D4 00288114  7D 89 03 A6 */	mtctr r12
/* 8028B1D8 00288118  4E 80 04 21 */	bctrl 
.L_8028B1DC:
/* 8028B1DC 0028811C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8028B1E0 00288120  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8028B1E4 00288124  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8028B1E8 00288128  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8028B1EC 0028812C  7C 08 03 A6 */	mtlr r0
/* 8028B1F0 00288130  38 21 00 20 */	addi r1, r1, 0x20
/* 8028B1F4 00288134  4E 80 00 20 */	blr 
.endfn updateBossBGM__Q34Game5Queen3ObjFv

.fn resetMidBossAppearBGM__Q34Game5Queen3ObjFv, global
/* 8028B1F8 00288138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B1FC 0028813C  7C 08 02 A6 */	mflr r0
/* 8028B200 00288140  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B204 00288144  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028B208 00288148  93 C1 00 08 */	stw r30, 8(r1)
/* 8028B20C 0028814C  7C 7E 1B 78 */	mr r30, r3
/* 8028B210 00288150  80 8D 93 E8 */	lwz r4, gameSystem__4Game@sda21(r13)
/* 8028B214 00288154  28 04 00 00 */	cmplwi r4, 0
/* 8028B218 00288158  41 82 00 70 */	beq .L_8028B288
/* 8028B21C 0028815C  88 04 00 48 */	lbz r0, 0x48(r4)
/* 8028B220 00288160  28 00 00 00 */	cmplwi r0, 0
/* 8028B224 00288164  41 82 00 64 */	beq .L_8028B288
/* 8028B228 00288168  83 FE 02 8C */	lwz r31, 0x28c(r30)
/* 8028B22C 0028816C  7F E3 FB 78 */	mr r3, r31
/* 8028B230 00288170  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 8028B234 00288174  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B238 00288178  7D 89 03 A6 */	mtctr r12
/* 8028B23C 0028817C  4E 80 04 21 */	bctrl 
/* 8028B240 00288180  2C 03 00 06 */	cmpwi r3, 6
/* 8028B244 00288184  41 82 00 20 */	beq .L_8028B264
/* 8028B248 00288188  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028B24C 0028818C  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028B250 00288190  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028B254 00288194  38 80 04 5A */	li r4, 0x45a
/* 8028B258 00288198  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028B25C 0028819C  4C C6 31 82 */	crclr 6
/* 8028B260 002881A0  4B D9 F3 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028B264:
/* 8028B264 002881A4  7F E3 FB 78 */	mr r3, r31
/* 8028B268 002881A8  38 80 00 00 */	li r4, 0
/* 8028B26C 002881AC  48 1D 47 85 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 8028B270 002881B0  88 1E 02 C0 */	lbz r0, 0x2c0(r30)
/* 8028B274 002881B4  28 00 00 00 */	cmplwi r0, 0
/* 8028B278 002881B8  41 82 00 10 */	beq .L_8028B288
/* 8028B27C 002881BC  38 00 00 01 */	li r0, 1
/* 8028B280 002881C0  98 1E 02 C4 */	stb r0, 0x2c4(r30)
/* 8028B284 002881C4  98 1F 01 18 */	stb r0, 0x118(r31)
.L_8028B288:
/* 8028B288 002881C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B28C 002881CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028B290 002881D0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028B294 002881D4  7C 08 03 A6 */	mtlr r0
/* 8028B298 002881D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B29C 002881DC  4E 80 00 20 */	blr 
.endfn resetMidBossAppearBGM__Q34Game5Queen3ObjFv

.fn setMidBossAppearBGM__Q34Game5Queen3ObjFv, global
/* 8028B2A0 002881E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B2A4 002881E4  7C 08 02 A6 */	mflr r0
/* 8028B2A8 002881E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B2AC 002881EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028B2B0 002881F0  88 03 02 C4 */	lbz r0, 0x2c4(r3)
/* 8028B2B4 002881F4  28 00 00 00 */	cmplwi r0, 0
/* 8028B2B8 002881F8  40 82 00 54 */	bne .L_8028B30C
/* 8028B2BC 002881FC  38 00 00 01 */	li r0, 1
/* 8028B2C0 00288200  98 03 02 C4 */	stb r0, 0x2c4(r3)
/* 8028B2C4 00288204  83 E3 02 8C */	lwz r31, 0x28c(r3)
/* 8028B2C8 00288208  7F E3 FB 78 */	mr r3, r31
/* 8028B2CC 0028820C  81 9F 00 28 */	lwz r12, 0x28(r31)
/* 8028B2D0 00288210  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8028B2D4 00288214  7D 89 03 A6 */	mtctr r12
/* 8028B2D8 00288218  4E 80 04 21 */	bctrl 
/* 8028B2DC 0028821C  2C 03 00 06 */	cmpwi r3, 6
/* 8028B2E0 00288220  41 82 00 20 */	beq .L_8028B300
/* 8028B2E4 00288224  3C 60 80 49 */	lis r3, lbl_80488004@ha
/* 8028B2E8 00288228  3C A0 80 49 */	lis r5, lbl_8048801C@ha
/* 8028B2EC 0028822C  38 63 80 04 */	addi r3, r3, lbl_80488004@l
/* 8028B2F0 00288230  38 80 04 5A */	li r4, 0x45a
/* 8028B2F4 00288234  38 A5 80 1C */	addi r5, r5, lbl_8048801C@l
/* 8028B2F8 00288238  4C C6 31 82 */	crclr 6
/* 8028B2FC 0028823C  4B D9 F3 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8028B300:
/* 8028B300 00288240  7F E3 FB 78 */	mr r3, r31
/* 8028B304 00288244  38 80 00 01 */	li r4, 1
/* 8028B308 00288248  48 1D 46 E9 */	bl setAppearFlag__Q23PSM9EnemyBossFb
.L_8028B30C:
/* 8028B30C 0028824C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B310 00288250  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028B314 00288254  7C 08 03 A6 */	mtlr r0
/* 8028B318 00288258  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B31C 0028825C  4E 80 00 20 */	blr 
.endfn setMidBossAppearBGM__Q34Game5Queen3ObjFv

.fn createEffect__Q34Game5Queen3ObjFv, global
/* 8028B320 00288260  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B324 00288264  7C 08 02 A6 */	mflr r0
/* 8028B328 00288268  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B32C 0028826C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028B330 00288270  7C 7F 1B 78 */	mr r31, r3
/* 8028B334 00288274  38 60 00 14 */	li r3, 0x14
/* 8028B338 00288278  93 C1 00 08 */	stw r30, 8(r1)
/* 8028B33C 0028827C  4B D9 8B 69 */	bl __nw__FUl
/* 8028B340 00288280  28 03 00 00 */	cmplwi r3, 0
/* 8028B344 00288284  41 82 00 78 */	beq .L_8028B3BC
/* 8028B348 00288288  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028B34C 0028828C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028B350 00288290  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028B354 00288294  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028B358 00288298  90 03 00 00 */	stw r0, 0(r3)
/* 8028B35C 0028829C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028B360 002882A0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028B364 002882A4  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 8028B368 002882A8  90 03 00 04 */	stw r0, 4(r3)
/* 8028B36C 002882AC  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 8028B370 002882B0  3C 80 80 4D */	lis r4, __vt__Q23efx9TQueenLay@ha
/* 8028B374 002882B4  38 05 00 14 */	addi r0, r5, 0x14
/* 8028B378 002882B8  90 A3 00 00 */	stw r5, 0(r3)
/* 8028B37C 002882BC  38 84 9F B8 */	addi r4, r4, __vt__Q23efx9TQueenLay@l
/* 8028B380 002882C0  39 20 00 00 */	li r9, 0
/* 8028B384 002882C4  39 00 02 B2 */	li r8, 0x2b2
/* 8028B388 002882C8  90 03 00 04 */	stw r0, 4(r3)
/* 8028B38C 002882CC  38 C7 00 14 */	addi r6, r7, 0x14
/* 8028B390 002882D0  38 A0 01 97 */	li r5, 0x197
/* 8028B394 002882D4  38 04 00 14 */	addi r0, r4, 0x14
/* 8028B398 002882D8  91 23 00 08 */	stw r9, 8(r3)
/* 8028B39C 002882DC  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8028B3A0 002882E0  99 23 00 0E */	stb r9, 0xe(r3)
/* 8028B3A4 002882E4  90 E3 00 00 */	stw r7, 0(r3)
/* 8028B3A8 002882E8  90 C3 00 04 */	stw r6, 4(r3)
/* 8028B3AC 002882EC  91 23 00 10 */	stw r9, 0x10(r3)
/* 8028B3B0 002882F0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028B3B4 002882F4  90 83 00 00 */	stw r4, 0(r3)
/* 8028B3B8 002882F8  90 03 00 04 */	stw r0, 4(r3)
.L_8028B3BC:
/* 8028B3BC 002882FC  90 7F 02 E0 */	stw r3, 0x2e0(r31)
/* 8028B3C0 00288300  38 60 00 4C */	li r3, 0x4c
/* 8028B3C4 00288304  4B D9 8A E1 */	bl __nw__FUl
/* 8028B3C8 00288308  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028B3CC 0028830C  41 82 00 28 */	beq .L_8028B3F4
/* 8028B3D0 00288310  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8028B3D4 00288314  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 8028B3D8 00288318  38 C0 01 9B */	li r6, 0x19b
/* 8028B3DC 0028831C  38 E0 01 9D */	li r7, 0x19d
/* 8028B3E0 00288320  39 00 01 9F */	li r8, 0x19f
/* 8028B3E4 00288324  48 12 56 E1 */	bl "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs"
/* 8028B3E8 00288328  3C 60 80 4D */	lis r3, __vt__Q23efx12TQueenRollCR@ha
/* 8028B3EC 0028832C  38 03 9F 9C */	addi r0, r3, __vt__Q23efx12TQueenRollCR@l
/* 8028B3F0 00288330  90 1E 00 00 */	stw r0, 0(r30)
.L_8028B3F4:
/* 8028B3F4 00288334  93 DF 02 E4 */	stw r30, 0x2e4(r31)
/* 8028B3F8 00288338  38 60 00 4C */	li r3, 0x4c
/* 8028B3FC 0028833C  4B D9 8A A9 */	bl __nw__FUl
/* 8028B400 00288340  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028B404 00288344  41 82 00 28 */	beq .L_8028B42C
/* 8028B408 00288348  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8028B40C 0028834C  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 8028B410 00288350  38 C0 01 9A */	li r6, 0x19a
/* 8028B414 00288354  38 E0 01 9C */	li r7, 0x19c
/* 8028B418 00288358  39 00 01 9E */	li r8, 0x19e
/* 8028B41C 0028835C  48 12 56 A9 */	bl "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs"
/* 8028B420 00288360  3C 60 80 4D */	lis r3, __vt__Q23efx12TQueenRollCL@ha
/* 8028B424 00288364  38 03 9F 80 */	addi r0, r3, __vt__Q23efx12TQueenRollCL@l
/* 8028B428 00288368  90 1E 00 00 */	stw r0, 0(r30)
.L_8028B42C:
/* 8028B42C 0028836C  93 DF 02 E8 */	stw r30, 0x2e8(r31)
/* 8028B430 00288370  38 60 00 34 */	li r3, 0x34
/* 8028B434 00288374  4B D9 8A 71 */	bl __nw__FUl
/* 8028B438 00288378  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028B43C 0028837C  41 82 00 24 */	beq .L_8028B460
/* 8028B440 00288380  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8028B444 00288384  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 8028B448 00288388  38 C0 01 98 */	li r6, 0x198
/* 8028B44C 0028838C  38 E0 01 99 */	li r7, 0x199
/* 8028B450 00288390  48 12 55 7D */	bl "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
/* 8028B454 00288394  3C 60 80 4D */	lis r3, __vt__Q23efx10TQueenRoll@ha
/* 8028B458 00288398  38 03 9F 64 */	addi r0, r3, __vt__Q23efx10TQueenRoll@l
/* 8028B45C 0028839C  90 1E 00 00 */	stw r0, 0(r30)
.L_8028B460:
/* 8028B460 002883A0  93 DF 02 EC */	stw r30, 0x2ec(r31)
/* 8028B464 002883A4  38 60 00 18 */	li r3, 0x18
/* 8028B468 002883A8  4B D9 8A 3D */	bl __nw__FUl
/* 8028B46C 002883AC  28 03 00 00 */	cmplwi r3, 0
/* 8028B470 002883B0  41 82 00 84 */	beq .L_8028B4F4
/* 8028B474 002883B4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028B478 002883B8  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028B47C 002883BC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028B480 002883C0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028B484 002883C4  90 03 00 00 */	stw r0, 0(r3)
/* 8028B488 002883C8  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028B48C 002883CC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028B490 002883D0  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 8028B494 002883D4  90 03 00 04 */	stw r0, 4(r3)
/* 8028B498 002883D8  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 8028B49C 002883DC  3C 80 80 4D */	lis r4, __vt__Q23efx12TQueenCrashR@ha
/* 8028B4A0 002883E0  38 05 00 14 */	addi r0, r5, 0x14
/* 8028B4A4 002883E4  90 A3 00 00 */	stw r5, 0(r3)
/* 8028B4A8 002883E8  38 84 9F 18 */	addi r4, r4, __vt__Q23efx12TQueenCrashR@l
/* 8028B4AC 002883EC  39 60 00 00 */	li r11, 0
/* 8028B4B0 002883F0  39 40 02 B2 */	li r10, 0x2b2
/* 8028B4B4 002883F4  90 03 00 04 */	stw r0, 4(r3)
/* 8028B4B8 002883F8  39 09 00 14 */	addi r8, r9, 0x14
/* 8028B4BC 002883FC  38 FF 01 8C */	addi r7, r31, 0x18c
/* 8028B4C0 00288400  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 8028B4C4 00288404  91 63 00 08 */	stw r11, 8(r3)
/* 8028B4C8 00288408  38 A0 01 8D */	li r5, 0x18d
/* 8028B4CC 0028840C  38 04 00 14 */	addi r0, r4, 0x14
/* 8028B4D0 00288410  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8028B4D4 00288414  99 63 00 0E */	stb r11, 0xe(r3)
/* 8028B4D8 00288418  91 23 00 00 */	stw r9, 0(r3)
/* 8028B4DC 0028841C  91 03 00 04 */	stw r8, 4(r3)
/* 8028B4E0 00288420  90 E3 00 10 */	stw r7, 0x10(r3)
/* 8028B4E4 00288424  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8028B4E8 00288428  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028B4EC 0028842C  90 83 00 00 */	stw r4, 0(r3)
/* 8028B4F0 00288430  90 03 00 04 */	stw r0, 4(r3)
.L_8028B4F4:
/* 8028B4F4 00288434  90 7F 02 F0 */	stw r3, 0x2f0(r31)
/* 8028B4F8 00288438  38 60 00 18 */	li r3, 0x18
/* 8028B4FC 0028843C  4B D9 89 A9 */	bl __nw__FUl
/* 8028B500 00288440  28 03 00 00 */	cmplwi r3, 0
/* 8028B504 00288444  41 82 00 84 */	beq .L_8028B588
/* 8028B508 00288448  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028B50C 0028844C  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028B510 00288450  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028B514 00288454  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028B518 00288458  90 03 00 00 */	stw r0, 0(r3)
/* 8028B51C 0028845C  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028B520 00288460  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028B524 00288464  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 8028B528 00288468  90 03 00 04 */	stw r0, 4(r3)
/* 8028B52C 0028846C  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 8028B530 00288470  3C 80 80 4D */	lis r4, __vt__Q23efx12TQueenCrashL@ha
/* 8028B534 00288474  38 05 00 14 */	addi r0, r5, 0x14
/* 8028B538 00288478  90 A3 00 00 */	stw r5, 0(r3)
/* 8028B53C 0028847C  38 84 9E CC */	addi r4, r4, __vt__Q23efx12TQueenCrashL@l
/* 8028B540 00288480  39 60 00 00 */	li r11, 0
/* 8028B544 00288484  39 40 02 B2 */	li r10, 0x2b2
/* 8028B548 00288488  90 03 00 04 */	stw r0, 4(r3)
/* 8028B54C 0028848C  39 09 00 14 */	addi r8, r9, 0x14
/* 8028B550 00288490  38 FF 01 8C */	addi r7, r31, 0x18c
/* 8028B554 00288494  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 8028B558 00288498  91 63 00 08 */	stw r11, 8(r3)
/* 8028B55C 0028849C  38 A0 01 8C */	li r5, 0x18c
/* 8028B560 002884A0  38 04 00 14 */	addi r0, r4, 0x14
/* 8028B564 002884A4  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8028B568 002884A8  99 63 00 0E */	stb r11, 0xe(r3)
/* 8028B56C 002884AC  91 23 00 00 */	stw r9, 0(r3)
/* 8028B570 002884B0  91 03 00 04 */	stw r8, 4(r3)
/* 8028B574 002884B4  90 E3 00 10 */	stw r7, 0x10(r3)
/* 8028B578 002884B8  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8028B57C 002884BC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028B580 002884C0  90 83 00 00 */	stw r4, 0(r3)
/* 8028B584 002884C4  90 03 00 04 */	stw r0, 4(r3)
.L_8028B588:
/* 8028B588 002884C8  90 7F 02 F4 */	stw r3, 0x2f4(r31)
/* 8028B58C 002884CC  38 60 00 18 */	li r3, 0x18
/* 8028B590 002884D0  4B D9 89 15 */	bl __nw__FUl
/* 8028B594 002884D4  28 03 00 00 */	cmplwi r3, 0
/* 8028B598 002884D8  41 82 00 84 */	beq .L_8028B61C
/* 8028B59C 002884DC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028B5A0 002884E0  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028B5A4 002884E4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028B5A8 002884E8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028B5AC 002884EC  90 03 00 00 */	stw r0, 0(r3)
/* 8028B5B0 002884F0  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028B5B4 002884F4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028B5B8 002884F8  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 8028B5BC 002884FC  90 03 00 04 */	stw r0, 4(r3)
/* 8028B5C0 00288500  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 8028B5C4 00288504  3C 80 80 4D */	lis r4, __vt__Q23efx15TQueenCrashRock@ha
/* 8028B5C8 00288508  38 05 00 14 */	addi r0, r5, 0x14
/* 8028B5CC 0028850C  90 A3 00 00 */	stw r5, 0(r3)
/* 8028B5D0 00288510  38 84 9E 80 */	addi r4, r4, __vt__Q23efx15TQueenCrashRock@l
/* 8028B5D4 00288514  39 60 00 00 */	li r11, 0
/* 8028B5D8 00288518  39 40 02 B2 */	li r10, 0x2b2
/* 8028B5DC 0028851C  90 03 00 04 */	stw r0, 4(r3)
/* 8028B5E0 00288520  39 09 00 14 */	addi r8, r9, 0x14
/* 8028B5E4 00288524  38 FF 01 8C */	addi r7, r31, 0x18c
/* 8028B5E8 00288528  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 8028B5EC 0028852C  91 63 00 08 */	stw r11, 8(r3)
/* 8028B5F0 00288530  38 A0 01 8E */	li r5, 0x18e
/* 8028B5F4 00288534  38 04 00 14 */	addi r0, r4, 0x14
/* 8028B5F8 00288538  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8028B5FC 0028853C  99 63 00 0E */	stb r11, 0xe(r3)
/* 8028B600 00288540  91 23 00 00 */	stw r9, 0(r3)
/* 8028B604 00288544  91 03 00 04 */	stw r8, 4(r3)
/* 8028B608 00288548  90 E3 00 10 */	stw r7, 0x10(r3)
/* 8028B60C 0028854C  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8028B610 00288550  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028B614 00288554  90 83 00 00 */	stw r4, 0(r3)
/* 8028B618 00288558  90 03 00 04 */	stw r0, 4(r3)
.L_8028B61C:
/* 8028B61C 0028855C  90 7F 02 F8 */	stw r3, 0x2f8(r31)
/* 8028B620 00288560  38 60 00 18 */	li r3, 0x18
/* 8028B624 00288564  4B D9 88 81 */	bl __nw__FUl
/* 8028B628 00288568  28 03 00 00 */	cmplwi r3, 0
/* 8028B62C 0028856C  41 82 00 84 */	beq .L_8028B6B0
/* 8028B630 00288570  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028B634 00288574  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028B638 00288578  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028B63C 0028857C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028B640 00288580  90 03 00 00 */	stw r0, 0(r3)
/* 8028B644 00288584  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028B648 00288588  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028B64C 0028858C  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 8028B650 00288590  90 03 00 04 */	stw r0, 4(r3)
/* 8028B654 00288594  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 8028B658 00288598  3C 80 80 4D */	lis r4, __vt__Q23efx12TQueenDamage@ha
/* 8028B65C 0028859C  38 05 00 14 */	addi r0, r5, 0x14
/* 8028B660 002885A0  90 A3 00 00 */	stw r5, 0(r3)
/* 8028B664 002885A4  38 84 9E 34 */	addi r4, r4, __vt__Q23efx12TQueenDamage@l
/* 8028B668 002885A8  39 60 00 00 */	li r11, 0
/* 8028B66C 002885AC  39 40 02 B2 */	li r10, 0x2b2
/* 8028B670 002885B0  90 03 00 04 */	stw r0, 4(r3)
/* 8028B674 002885B4  39 09 00 14 */	addi r8, r9, 0x14
/* 8028B678 002885B8  38 FF 01 8C */	addi r7, r31, 0x18c
/* 8028B67C 002885BC  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 8028B680 002885C0  91 63 00 08 */	stw r11, 8(r3)
/* 8028B684 002885C4  38 A0 01 8F */	li r5, 0x18f
/* 8028B688 002885C8  38 04 00 14 */	addi r0, r4, 0x14
/* 8028B68C 002885CC  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8028B690 002885D0  99 63 00 0E */	stb r11, 0xe(r3)
/* 8028B694 002885D4  91 23 00 00 */	stw r9, 0(r3)
/* 8028B698 002885D8  91 03 00 04 */	stw r8, 4(r3)
/* 8028B69C 002885DC  90 E3 00 10 */	stw r7, 0x10(r3)
/* 8028B6A0 002885E0  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8028B6A4 002885E4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028B6A8 002885E8  90 83 00 00 */	stw r4, 0(r3)
/* 8028B6AC 002885EC  90 03 00 04 */	stw r0, 4(r3)
.L_8028B6B0:
/* 8028B6B0 002885F0  90 7F 02 FC */	stw r3, 0x2fc(r31)
/* 8028B6B4 002885F4  38 60 00 34 */	li r3, 0x34
/* 8028B6B8 002885F8  4B D9 87 ED */	bl __nw__FUl
/* 8028B6BC 002885FC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028B6C0 00288600  41 82 00 24 */	beq .L_8028B6E4
/* 8028B6C4 00288604  38 9F 01 8C */	addi r4, r31, 0x18c
/* 8028B6C8 00288608  38 BF 01 FC */	addi r5, r31, 0x1fc
/* 8028B6CC 0028860C  38 C0 01 94 */	li r6, 0x194
/* 8028B6D0 00288610  38 E0 01 95 */	li r7, 0x195
/* 8028B6D4 00288614  48 12 52 F9 */	bl "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
/* 8028B6D8 00288618  3C 60 80 4D */	lis r3, __vt__Q23efx11TQueenFlick@ha
/* 8028B6DC 0028861C  38 03 9E 18 */	addi r0, r3, __vt__Q23efx11TQueenFlick@l
/* 8028B6E0 00288620  90 1E 00 00 */	stw r0, 0(r30)
.L_8028B6E4:
/* 8028B6E4 00288624  93 DF 03 00 */	stw r30, 0x300(r31)
/* 8028B6E8 00288628  38 60 00 54 */	li r3, 0x54
/* 8028B6EC 0028862C  4B D9 87 B9 */	bl __nw__FUl
/* 8028B6F0 00288630  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028B6F4 00288634  41 82 00 28 */	beq .L_8028B71C
/* 8028B6F8 00288638  38 80 00 00 */	li r4, 0
/* 8028B6FC 0028863C  38 A0 01 90 */	li r5, 0x190
/* 8028B700 00288640  38 C0 01 91 */	li r6, 0x191
/* 8028B704 00288644  38 E0 01 92 */	li r7, 0x192
/* 8028B708 00288648  39 00 01 93 */	li r8, 0x193
/* 8028B70C 0028864C  48 12 4F 51 */	bl __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs
/* 8028B710 00288650  3C 60 80 4D */	lis r3, __vt__Q23efx10TQueenDead@ha
/* 8028B714 00288654  38 03 9D FC */	addi r0, r3, __vt__Q23efx10TQueenDead@l
/* 8028B718 00288658  90 1E 00 00 */	stw r0, 0(r30)
.L_8028B71C:
/* 8028B71C 0028865C  93 DF 03 04 */	stw r30, 0x304(r31)
/* 8028B720 00288660  38 60 00 18 */	li r3, 0x18
/* 8028B724 00288664  4B D9 87 81 */	bl __nw__FUl
/* 8028B728 00288668  28 03 00 00 */	cmplwi r3, 0
/* 8028B72C 0028866C  41 82 00 84 */	beq .L_8028B7B0
/* 8028B730 00288670  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028B734 00288674  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028B738 00288678  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028B73C 0028867C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028B740 00288680  90 03 00 00 */	stw r0, 0(r3)
/* 8028B744 00288684  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028B748 00288688  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028B74C 0028868C  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 8028B750 00288690  90 03 00 04 */	stw r0, 4(r3)
/* 8028B754 00288694  39 24 68 F4 */	addi r9, r4, __vt__Q23efx13TChasePosYRot@l
/* 8028B758 00288698  3C 80 80 4D */	lis r4, __vt__Q23efx12TQueenWakeup@ha
/* 8028B75C 0028869C  38 05 00 14 */	addi r0, r5, 0x14
/* 8028B760 002886A0  90 A3 00 00 */	stw r5, 0(r3)
/* 8028B764 002886A4  38 84 9D B0 */	addi r4, r4, __vt__Q23efx12TQueenWakeup@l
/* 8028B768 002886A8  39 60 00 00 */	li r11, 0
/* 8028B76C 002886AC  39 40 02 B2 */	li r10, 0x2b2
/* 8028B770 002886B0  90 03 00 04 */	stw r0, 4(r3)
/* 8028B774 002886B4  39 09 00 14 */	addi r8, r9, 0x14
/* 8028B778 002886B8  38 FF 01 8C */	addi r7, r31, 0x18c
/* 8028B77C 002886BC  38 DF 01 FC */	addi r6, r31, 0x1fc
/* 8028B780 002886C0  91 63 00 08 */	stw r11, 8(r3)
/* 8028B784 002886C4  38 A0 01 A0 */	li r5, 0x1a0
/* 8028B788 002886C8  38 04 00 14 */	addi r0, r4, 0x14
/* 8028B78C 002886CC  B1 43 00 0C */	sth r10, 0xc(r3)
/* 8028B790 002886D0  99 63 00 0E */	stb r11, 0xe(r3)
/* 8028B794 002886D4  91 23 00 00 */	stw r9, 0(r3)
/* 8028B798 002886D8  91 03 00 04 */	stw r8, 4(r3)
/* 8028B79C 002886DC  90 E3 00 10 */	stw r7, 0x10(r3)
/* 8028B7A0 002886E0  90 C3 00 14 */	stw r6, 0x14(r3)
/* 8028B7A4 002886E4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028B7A8 002886E8  90 83 00 00 */	stw r4, 0(r3)
/* 8028B7AC 002886EC  90 03 00 04 */	stw r0, 4(r3)
.L_8028B7B0:
/* 8028B7B0 002886F0  90 7F 03 08 */	stw r3, 0x308(r31)
/* 8028B7B4 002886F4  38 60 00 14 */	li r3, 0x14
/* 8028B7B8 002886F8  4B D9 86 ED */	bl __nw__FUl
/* 8028B7BC 002886FC  28 03 00 00 */	cmplwi r3, 0
/* 8028B7C0 00288700  41 82 00 78 */	beq .L_8028B838
/* 8028B7C4 00288704  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 8028B7C8 00288708  3C A0 80 4A */	lis r5, __vt__18JPAEmitterCallBack@ha
/* 8028B7CC 0028870C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 8028B7D0 00288710  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028B7D4 00288714  90 03 00 00 */	stw r0, 0(r3)
/* 8028B7D8 00288718  38 05 E2 7C */	addi r0, r5, __vt__18JPAEmitterCallBack@l
/* 8028B7DC 0028871C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028B7E0 00288720  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 8028B7E4 00288724  90 03 00 04 */	stw r0, 4(r3)
/* 8028B7E8 00288728  38 E4 68 A8 */	addi r7, r4, __vt__Q23efx9TChaseMtx@l
/* 8028B7EC 0028872C  3C 80 80 4D */	lis r4, __vt__Q23efx13TQueenHanacho@ha
/* 8028B7F0 00288730  38 05 00 14 */	addi r0, r5, 0x14
/* 8028B7F4 00288734  90 A3 00 00 */	stw r5, 0(r3)
/* 8028B7F8 00288738  38 84 9D 64 */	addi r4, r4, __vt__Q23efx13TQueenHanacho@l
/* 8028B7FC 0028873C  39 20 00 00 */	li r9, 0
/* 8028B800 00288740  39 00 02 B2 */	li r8, 0x2b2
/* 8028B804 00288744  90 03 00 04 */	stw r0, 4(r3)
/* 8028B808 00288748  38 C7 00 14 */	addi r6, r7, 0x14
/* 8028B80C 0028874C  38 A0 01 96 */	li r5, 0x196
/* 8028B810 00288750  38 04 00 14 */	addi r0, r4, 0x14
/* 8028B814 00288754  91 23 00 08 */	stw r9, 8(r3)
/* 8028B818 00288758  B1 03 00 0C */	sth r8, 0xc(r3)
/* 8028B81C 0028875C  99 23 00 0E */	stb r9, 0xe(r3)
/* 8028B820 00288760  90 E3 00 00 */	stw r7, 0(r3)
/* 8028B824 00288764  90 C3 00 04 */	stw r6, 4(r3)
/* 8028B828 00288768  91 23 00 10 */	stw r9, 0x10(r3)
/* 8028B82C 0028876C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 8028B830 00288770  90 83 00 00 */	stw r4, 0(r3)
/* 8028B834 00288774  90 03 00 04 */	stw r0, 4(r3)
.L_8028B838:
/* 8028B838 00288778  90 7F 03 0C */	stw r3, 0x30c(r31)
/* 8028B83C 0028877C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B840 00288780  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028B844 00288784  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028B848 00288788  7C 08 03 A6 */	mtlr r0
/* 8028B84C 0028878C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B850 00288790  4E 80 00 20 */	blr 
.endfn createEffect__Q34Game5Queen3ObjFv

.fn setupEffect__Q34Game5Queen3ObjFv, global
/* 8028B854 00288794  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B858 00288798  7C 08 02 A6 */	mflr r0
/* 8028B85C 0028879C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B860 002887A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028B864 002887A4  7C 7F 1B 78 */	mr r31, r3
/* 8028B868 002887A8  3C 60 80 48 */	lis r3, lbl_80487FF8@ha
/* 8028B86C 002887AC  38 83 7F F8 */	addi r4, r3, lbl_80487FF8@l
/* 8028B870 002887B0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8028B874 002887B4  48 1B 37 71 */	bl getJoint__Q28SysShape5ModelFPc
/* 8028B878 002887B8  48 19 E0 29 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8028B87C 002887BC  80 BF 02 E0 */	lwz r5, 0x2e0(r31)
/* 8028B880 002887C0  38 82 D5 14 */	addi r4, r2, lbl_8051B874@sda21
/* 8028B884 002887C4  90 65 00 10 */	stw r3, 0x10(r5)
/* 8028B888 002887C8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8028B88C 002887CC  48 1B 37 59 */	bl getJoint__Q28SysShape5ModelFPc
/* 8028B890 002887D0  48 19 E0 11 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8028B894 002887D4  7C 64 1B 78 */	mr r4, r3
/* 8028B898 002887D8  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 8028B89C 002887DC  48 12 4E 6D */	bl setMtxptr__Q23efx10TChaseMtx4FPA4_f
/* 8028B8A0 002887E0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 8028B8A4 002887E4  38 82 D5 1C */	addi r4, r2, lbl_8051B87C@sda21
/* 8028B8A8 002887E8  48 1B 37 3D */	bl getJoint__Q28SysShape5ModelFPc
/* 8028B8AC 002887EC  48 19 DF F5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 8028B8B0 002887F0  80 9F 03 0C */	lwz r4, 0x30c(r31)
/* 8028B8B4 002887F4  90 64 00 10 */	stw r3, 0x10(r4)
/* 8028B8B8 002887F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B8BC 002887FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028B8C0 00288800  7C 08 03 A6 */	mtlr r0
/* 8028B8C4 00288804  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B8C8 00288808  4E 80 00 20 */	blr 
.endfn setupEffect__Q34Game5Queen3ObjFv

.fn createBornEffect__Q34Game5Queen3ObjFv, global
/* 8028B8CC 0028880C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B8D0 00288810  7C 08 02 A6 */	mflr r0
/* 8028B8D4 00288814  38 80 00 00 */	li r4, 0
/* 8028B8D8 00288818  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B8DC 0028881C  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 8028B8E0 00288820  81 83 00 00 */	lwz r12, 0(r3)
/* 8028B8E4 00288824  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028B8E8 00288828  7D 89 03 A6 */	mtctr r12
/* 8028B8EC 0028882C  4E 80 04 21 */	bctrl 
/* 8028B8F0 00288830  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B8F4 00288834  7C 08 03 A6 */	mtlr r0
/* 8028B8F8 00288838  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B8FC 0028883C  4E 80 00 20 */	blr 
.endfn createBornEffect__Q34Game5Queen3ObjFv

.fn startRollingEffect__Q34Game5Queen3ObjFv, global
/* 8028B900 00288840  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B904 00288844  7C 08 02 A6 */	mflr r0
/* 8028B908 00288848  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B90C 0028884C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028B910 00288850  7C 7F 1B 78 */	mr r31, r3
/* 8028B914 00288854  4B E7 BA 35 */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 8028B918 00288858  2C 03 00 06 */	cmpwi r3, 6
/* 8028B91C 0028885C  40 82 00 20 */	bne .L_8028B93C
/* 8028B920 00288860  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8028B924 00288864  38 80 00 00 */	li r4, 0
/* 8028B928 00288868  81 83 00 00 */	lwz r12, 0(r3)
/* 8028B92C 0028886C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028B930 00288870  7D 89 03 A6 */	mtctr r12
/* 8028B934 00288874  4E 80 04 21 */	bctrl 
/* 8028B938 00288878  48 00 00 1C */	b .L_8028B954
.L_8028B93C:
/* 8028B93C 0028887C  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 8028B940 00288880  38 80 00 00 */	li r4, 0
/* 8028B944 00288884  81 83 00 00 */	lwz r12, 0(r3)
/* 8028B948 00288888  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028B94C 0028888C  7D 89 03 A6 */	mtctr r12
/* 8028B950 00288890  4E 80 04 21 */	bctrl 
.L_8028B954:
/* 8028B954 00288894  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8028B958 00288898  38 80 00 00 */	li r4, 0
/* 8028B95C 0028889C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028B960 002888A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028B964 002888A4  7D 89 03 A6 */	mtctr r12
/* 8028B968 002888A8  4E 80 04 21 */	bctrl 
/* 8028B96C 002888AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028B970 002888B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028B974 002888B4  7C 08 03 A6 */	mtlr r0
/* 8028B978 002888B8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028B97C 002888BC  4E 80 00 20 */	blr 
.endfn startRollingEffect__Q34Game5Queen3ObjFv

.fn finishRollingEffect__Q34Game5Queen3ObjFb, global
/* 8028B980 002888C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028B984 002888C4  7C 08 02 A6 */	mflr r0
/* 8028B988 002888C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028B98C 002888CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028B990 002888D0  7C 9F 23 78 */	mr r31, r4
/* 8028B994 002888D4  93 C1 00 08 */	stw r30, 8(r1)
/* 8028B998 002888D8  7C 7E 1B 78 */	mr r30, r3
/* 8028B99C 002888DC  4B E7 B9 AD */	bl getCurrAnimIndex__Q24Game9EnemyBaseFv
/* 8028B9A0 002888E0  2C 03 00 06 */	cmpwi r3, 6
/* 8028B9A4 002888E4  40 82 00 3C */	bne .L_8028B9E0
/* 8028B9A8 002888E8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028B9AC 002888EC  41 82 00 1C */	beq .L_8028B9C8
/* 8028B9B0 002888F0  80 7E 02 F0 */	lwz r3, 0x2f0(r30)
/* 8028B9B4 002888F4  38 80 00 00 */	li r4, 0
/* 8028B9B8 002888F8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028B9BC 002888FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028B9C0 00288900  7D 89 03 A6 */	mtctr r12
/* 8028B9C4 00288904  4E 80 04 21 */	bctrl 
.L_8028B9C8:
/* 8028B9C8 00288908  80 7E 02 E4 */	lwz r3, 0x2e4(r30)
/* 8028B9CC 0028890C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028B9D0 00288910  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028B9D4 00288914  7D 89 03 A6 */	mtctr r12
/* 8028B9D8 00288918  4E 80 04 21 */	bctrl 
/* 8028B9DC 0028891C  48 00 00 38 */	b .L_8028BA14
.L_8028B9E0:
/* 8028B9E0 00288920  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028B9E4 00288924  41 82 00 1C */	beq .L_8028BA00
/* 8028B9E8 00288928  80 7E 02 F4 */	lwz r3, 0x2f4(r30)
/* 8028B9EC 0028892C  38 80 00 00 */	li r4, 0
/* 8028B9F0 00288930  81 83 00 00 */	lwz r12, 0(r3)
/* 8028B9F4 00288934  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028B9F8 00288938  7D 89 03 A6 */	mtctr r12
/* 8028B9FC 0028893C  4E 80 04 21 */	bctrl 
.L_8028BA00:
/* 8028BA00 00288940  80 7E 02 E8 */	lwz r3, 0x2e8(r30)
/* 8028BA04 00288944  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BA08 00288948  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028BA0C 0028894C  7D 89 03 A6 */	mtctr r12
/* 8028BA10 00288950  4E 80 04 21 */	bctrl 
.L_8028BA14:
/* 8028BA14 00288954  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 8028BA18 00288958  41 82 00 1C */	beq .L_8028BA34
/* 8028BA1C 0028895C  80 7E 02 F8 */	lwz r3, 0x2f8(r30)
/* 8028BA20 00288960  38 80 00 00 */	li r4, 0
/* 8028BA24 00288964  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BA28 00288968  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028BA2C 0028896C  7D 89 03 A6 */	mtctr r12
/* 8028BA30 00288970  4E 80 04 21 */	bctrl 
.L_8028BA34:
/* 8028BA34 00288974  80 7E 02 EC */	lwz r3, 0x2ec(r30)
/* 8028BA38 00288978  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BA3C 0028897C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028BA40 00288980  7D 89 03 A6 */	mtctr r12
/* 8028BA44 00288984  4E 80 04 21 */	bctrl 
/* 8028BA48 00288988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BA4C 0028898C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028BA50 00288990  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028BA54 00288994  7C 08 03 A6 */	mtlr r0
/* 8028BA58 00288998  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BA5C 0028899C  4E 80 00 20 */	blr 
.endfn finishRollingEffect__Q34Game5Queen3ObjFb

.fn forceFinishRollingEffect__Q34Game5Queen3ObjFv, global
/* 8028BA60 002889A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BA64 002889A4  7C 08 02 A6 */	mflr r0
/* 8028BA68 002889A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BA6C 002889AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028BA70 002889B0  7C 7F 1B 78 */	mr r31, r3
/* 8028BA74 002889B4  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 8028BA78 002889B8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BA7C 002889BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028BA80 002889C0  7D 89 03 A6 */	mtctr r12
/* 8028BA84 002889C4  4E 80 04 21 */	bctrl 
/* 8028BA88 002889C8  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 8028BA8C 002889CC  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BA90 002889D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028BA94 002889D4  7D 89 03 A6 */	mtctr r12
/* 8028BA98 002889D8  4E 80 04 21 */	bctrl 
/* 8028BA9C 002889DC  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8028BAA0 002889E0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BAA4 002889E4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028BAA8 002889E8  7D 89 03 A6 */	mtctr r12
/* 8028BAAC 002889EC  4E 80 04 21 */	bctrl 
/* 8028BAB0 002889F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BAB4 002889F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028BAB8 002889F8  7C 08 03 A6 */	mtlr r0
/* 8028BABC 002889FC  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BAC0 00288A00  4E 80 00 20 */	blr 
.endfn forceFinishRollingEffect__Q34Game5Queen3ObjFv

.fn startDamageEffect__Q34Game5Queen3ObjFv, global
/* 8028BAC4 00288A04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BAC8 00288A08  7C 08 02 A6 */	mflr r0
/* 8028BACC 00288A0C  38 80 00 00 */	li r4, 0
/* 8028BAD0 00288A10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BAD4 00288A14  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 8028BAD8 00288A18  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BADC 00288A1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028BAE0 00288A20  7D 89 03 A6 */	mtctr r12
/* 8028BAE4 00288A24  4E 80 04 21 */	bctrl 
/* 8028BAE8 00288A28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BAEC 00288A2C  7C 08 03 A6 */	mtlr r0
/* 8028BAF0 00288A30  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BAF4 00288A34  4E 80 00 20 */	blr 
.endfn startDamageEffect__Q34Game5Queen3ObjFv

.fn finishDamageEffect__Q34Game5Queen3ObjFv, global
/* 8028BAF8 00288A38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BAFC 00288A3C  7C 08 02 A6 */	mflr r0
/* 8028BB00 00288A40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BB04 00288A44  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 8028BB08 00288A48  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BB0C 00288A4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028BB10 00288A50  7D 89 03 A6 */	mtctr r12
/* 8028BB14 00288A54  4E 80 04 21 */	bctrl 
/* 8028BB18 00288A58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BB1C 00288A5C  7C 08 03 A6 */	mtlr r0
/* 8028BB20 00288A60  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BB24 00288A64  4E 80 00 20 */	blr 
.endfn finishDamageEffect__Q34Game5Queen3ObjFv

.fn createFlickEffect__Q34Game5Queen3ObjFv, global
/* 8028BB28 00288A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BB2C 00288A6C  7C 08 02 A6 */	mflr r0
/* 8028BB30 00288A70  38 80 00 00 */	li r4, 0
/* 8028BB34 00288A74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BB38 00288A78  80 63 03 00 */	lwz r3, 0x300(r3)
/* 8028BB3C 00288A7C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BB40 00288A80  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028BB44 00288A84  7D 89 03 A6 */	mtctr r12
/* 8028BB48 00288A88  4E 80 04 21 */	bctrl 
/* 8028BB4C 00288A8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BB50 00288A90  7C 08 03 A6 */	mtlr r0
/* 8028BB54 00288A94  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BB58 00288A98  4E 80 00 20 */	blr 
.endfn createFlickEffect__Q34Game5Queen3ObjFv

.fn createDeadEffect__Q34Game5Queen3ObjFv, global
/* 8028BB5C 00288A9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BB60 00288AA0  7C 08 02 A6 */	mflr r0
/* 8028BB64 00288AA4  38 80 00 00 */	li r4, 0
/* 8028BB68 00288AA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BB6C 00288AAC  80 63 03 04 */	lwz r3, 0x304(r3)
/* 8028BB70 00288AB0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BB74 00288AB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028BB78 00288AB8  7D 89 03 A6 */	mtctr r12
/* 8028BB7C 00288ABC  4E 80 04 21 */	bctrl 
/* 8028BB80 00288AC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BB84 00288AC4  7C 08 03 A6 */	mtlr r0
/* 8028BB88 00288AC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BB8C 00288ACC  4E 80 00 20 */	blr 
.endfn createDeadEffect__Q34Game5Queen3ObjFv

.fn createWakeUpEffect__Q34Game5Queen3ObjFv, global
/* 8028BB90 00288AD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BB94 00288AD4  7C 08 02 A6 */	mflr r0
/* 8028BB98 00288AD8  38 80 00 00 */	li r4, 0
/* 8028BB9C 00288ADC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BBA0 00288AE0  80 63 03 08 */	lwz r3, 0x308(r3)
/* 8028BBA4 00288AE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BBA8 00288AE8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028BBAC 00288AEC  7D 89 03 A6 */	mtctr r12
/* 8028BBB0 00288AF0  4E 80 04 21 */	bctrl 
/* 8028BBB4 00288AF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BBB8 00288AF8  7C 08 03 A6 */	mtlr r0
/* 8028BBBC 00288AFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BBC0 00288B00  4E 80 00 20 */	blr 
.endfn createWakeUpEffect__Q34Game5Queen3ObjFv

.fn startSleepEffect__Q34Game5Queen3ObjFv, global
/* 8028BBC4 00288B04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BBC8 00288B08  7C 08 02 A6 */	mflr r0
/* 8028BBCC 00288B0C  38 80 00 00 */	li r4, 0
/* 8028BBD0 00288B10  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BBD4 00288B14  80 63 03 0C */	lwz r3, 0x30c(r3)
/* 8028BBD8 00288B18  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BBDC 00288B1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028BBE0 00288B20  7D 89 03 A6 */	mtctr r12
/* 8028BBE4 00288B24  4E 80 04 21 */	bctrl 
/* 8028BBE8 00288B28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BBEC 00288B2C  7C 08 03 A6 */	mtlr r0
/* 8028BBF0 00288B30  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BBF4 00288B34  4E 80 00 20 */	blr 
.endfn startSleepEffect__Q34Game5Queen3ObjFv

.fn finishSleepEffect__Q34Game5Queen3ObjFv, global
/* 8028BBF8 00288B38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BBFC 00288B3C  7C 08 02 A6 */	mflr r0
/* 8028BC00 00288B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BC04 00288B44  80 63 03 0C */	lwz r3, 0x30c(r3)
/* 8028BC08 00288B48  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BC0C 00288B4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028BC10 00288B50  7D 89 03 A6 */	mtctr r12
/* 8028BC14 00288B54  4E 80 04 21 */	bctrl 
/* 8028BC18 00288B58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BC1C 00288B5C  7C 08 03 A6 */	mtlr r0
/* 8028BC20 00288B60  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BC24 00288B64  4E 80 00 20 */	blr 
.endfn finishSleepEffect__Q34Game5Queen3ObjFv

.fn effectDrawOn__Q34Game5Queen3ObjFv, global
/* 8028BC28 00288B68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BC2C 00288B6C  7C 08 02 A6 */	mflr r0
/* 8028BC30 00288B70  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BC34 00288B74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028BC38 00288B78  7C 7F 1B 78 */	mr r31, r3
/* 8028BC3C 00288B7C  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 8028BC40 00288B80  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BC44 00288B84  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028BC48 00288B88  7D 89 03 A6 */	mtctr r12
/* 8028BC4C 00288B8C  4E 80 04 21 */	bctrl 
/* 8028BC50 00288B90  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8028BC54 00288B94  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BC58 00288B98  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028BC5C 00288B9C  7D 89 03 A6 */	mtctr r12
/* 8028BC60 00288BA0  4E 80 04 21 */	bctrl 
/* 8028BC64 00288BA4  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 8028BC68 00288BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BC6C 00288BAC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028BC70 00288BB0  7D 89 03 A6 */	mtctr r12
/* 8028BC74 00288BB4  4E 80 04 21 */	bctrl 
/* 8028BC78 00288BB8  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8028BC7C 00288BBC  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BC80 00288BC0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028BC84 00288BC4  7D 89 03 A6 */	mtctr r12
/* 8028BC88 00288BC8  4E 80 04 21 */	bctrl 
/* 8028BC8C 00288BCC  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8028BC90 00288BD0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BC94 00288BD4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028BC98 00288BD8  7D 89 03 A6 */	mtctr r12
/* 8028BC9C 00288BDC  4E 80 04 21 */	bctrl 
/* 8028BCA0 00288BE0  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 8028BCA4 00288BE4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BCA8 00288BE8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028BCAC 00288BEC  7D 89 03 A6 */	mtctr r12
/* 8028BCB0 00288BF0  4E 80 04 21 */	bctrl 
/* 8028BCB4 00288BF4  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 8028BCB8 00288BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BCBC 00288BFC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028BCC0 00288C00  7D 89 03 A6 */	mtctr r12
/* 8028BCC4 00288C04  4E 80 04 21 */	bctrl 
/* 8028BCC8 00288C08  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 8028BCCC 00288C0C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BCD0 00288C10  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028BCD4 00288C14  7D 89 03 A6 */	mtctr r12
/* 8028BCD8 00288C18  4E 80 04 21 */	bctrl 
/* 8028BCDC 00288C1C  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 8028BCE0 00288C20  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BCE4 00288C24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028BCE8 00288C28  7D 89 03 A6 */	mtctr r12
/* 8028BCEC 00288C2C  4E 80 04 21 */	bctrl 
/* 8028BCF0 00288C30  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 8028BCF4 00288C34  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BCF8 00288C38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028BCFC 00288C3C  7D 89 03 A6 */	mtctr r12
/* 8028BD00 00288C40  4E 80 04 21 */	bctrl 
/* 8028BD04 00288C44  80 7F 03 08 */	lwz r3, 0x308(r31)
/* 8028BD08 00288C48  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BD0C 00288C4C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028BD10 00288C50  7D 89 03 A6 */	mtctr r12
/* 8028BD14 00288C54  4E 80 04 21 */	bctrl 
/* 8028BD18 00288C58  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 8028BD1C 00288C5C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BD20 00288C60  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8028BD24 00288C64  7D 89 03 A6 */	mtctr r12
/* 8028BD28 00288C68  4E 80 04 21 */	bctrl 
/* 8028BD2C 00288C6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BD30 00288C70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028BD34 00288C74  7C 08 03 A6 */	mtlr r0
/* 8028BD38 00288C78  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BD3C 00288C7C  4E 80 00 20 */	blr 
.endfn effectDrawOn__Q34Game5Queen3ObjFv

.fn effectDrawOff__Q34Game5Queen3ObjFv, global
/* 8028BD40 00288C80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BD44 00288C84  7C 08 02 A6 */	mflr r0
/* 8028BD48 00288C88  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BD4C 00288C8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028BD50 00288C90  7C 7F 1B 78 */	mr r31, r3
/* 8028BD54 00288C94  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 8028BD58 00288C98  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BD5C 00288C9C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028BD60 00288CA0  7D 89 03 A6 */	mtctr r12
/* 8028BD64 00288CA4  4E 80 04 21 */	bctrl 
/* 8028BD68 00288CA8  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 8028BD6C 00288CAC  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BD70 00288CB0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028BD74 00288CB4  7D 89 03 A6 */	mtctr r12
/* 8028BD78 00288CB8  4E 80 04 21 */	bctrl 
/* 8028BD7C 00288CBC  80 7F 02 E8 */	lwz r3, 0x2e8(r31)
/* 8028BD80 00288CC0  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BD84 00288CC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028BD88 00288CC8  7D 89 03 A6 */	mtctr r12
/* 8028BD8C 00288CCC  4E 80 04 21 */	bctrl 
/* 8028BD90 00288CD0  80 7F 02 EC */	lwz r3, 0x2ec(r31)
/* 8028BD94 00288CD4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BD98 00288CD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028BD9C 00288CDC  7D 89 03 A6 */	mtctr r12
/* 8028BDA0 00288CE0  4E 80 04 21 */	bctrl 
/* 8028BDA4 00288CE4  80 7F 02 F0 */	lwz r3, 0x2f0(r31)
/* 8028BDA8 00288CE8  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BDAC 00288CEC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028BDB0 00288CF0  7D 89 03 A6 */	mtctr r12
/* 8028BDB4 00288CF4  4E 80 04 21 */	bctrl 
/* 8028BDB8 00288CF8  80 7F 02 F4 */	lwz r3, 0x2f4(r31)
/* 8028BDBC 00288CFC  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BDC0 00288D00  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028BDC4 00288D04  7D 89 03 A6 */	mtctr r12
/* 8028BDC8 00288D08  4E 80 04 21 */	bctrl 
/* 8028BDCC 00288D0C  80 7F 02 F8 */	lwz r3, 0x2f8(r31)
/* 8028BDD0 00288D10  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BDD4 00288D14  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028BDD8 00288D18  7D 89 03 A6 */	mtctr r12
/* 8028BDDC 00288D1C  4E 80 04 21 */	bctrl 
/* 8028BDE0 00288D20  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 8028BDE4 00288D24  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BDE8 00288D28  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028BDEC 00288D2C  7D 89 03 A6 */	mtctr r12
/* 8028BDF0 00288D30  4E 80 04 21 */	bctrl 
/* 8028BDF4 00288D34  80 7F 03 00 */	lwz r3, 0x300(r31)
/* 8028BDF8 00288D38  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BDFC 00288D3C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028BE00 00288D40  7D 89 03 A6 */	mtctr r12
/* 8028BE04 00288D44  4E 80 04 21 */	bctrl 
/* 8028BE08 00288D48  80 7F 03 04 */	lwz r3, 0x304(r31)
/* 8028BE0C 00288D4C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BE10 00288D50  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028BE14 00288D54  7D 89 03 A6 */	mtctr r12
/* 8028BE18 00288D58  4E 80 04 21 */	bctrl 
/* 8028BE1C 00288D5C  80 7F 03 08 */	lwz r3, 0x308(r31)
/* 8028BE20 00288D60  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BE24 00288D64  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028BE28 00288D68  7D 89 03 A6 */	mtctr r12
/* 8028BE2C 00288D6C  4E 80 04 21 */	bctrl 
/* 8028BE30 00288D70  80 7F 03 0C */	lwz r3, 0x30c(r31)
/* 8028BE34 00288D74  81 83 00 00 */	lwz r12, 0(r3)
/* 8028BE38 00288D78  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8028BE3C 00288D7C  7D 89 03 A6 */	mtctr r12
/* 8028BE40 00288D80  4E 80 04 21 */	bctrl 
/* 8028BE44 00288D84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BE48 00288D88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028BE4C 00288D8C  7C 08 03 A6 */	mtlr r0
/* 8028BE50 00288D90  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BE54 00288D94  4E 80 00 20 */	blr 
.endfn effectDrawOff__Q34Game5Queen3ObjFv

.fn __dt__Q23efx13TQueenHanachoFv, weak
/* 8028BE58 00288D98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BE5C 00288D9C  7C 08 02 A6 */	mflr r0
/* 8028BE60 00288DA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BE64 00288DA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028BE68 00288DA8  7C 9F 23 78 */	mr r31, r4
/* 8028BE6C 00288DAC  93 C1 00 08 */	stw r30, 8(r1)
/* 8028BE70 00288DB0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028BE74 00288DB4  41 82 00 64 */	beq .L_8028BED8
/* 8028BE78 00288DB8  3C 60 80 4D */	lis r3, __vt__Q23efx13TQueenHanacho@ha
/* 8028BE7C 00288DBC  38 63 9D 64 */	addi r3, r3, __vt__Q23efx13TQueenHanacho@l
/* 8028BE80 00288DC0  90 7E 00 00 */	stw r3, 0(r30)
/* 8028BE84 00288DC4  38 03 00 14 */	addi r0, r3, 0x14
/* 8028BE88 00288DC8  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BE8C 00288DCC  41 82 00 3C */	beq .L_8028BEC8
/* 8028BE90 00288DD0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8028BE94 00288DD4  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 8028BE98 00288DD8  90 7E 00 00 */	stw r3, 0(r30)
/* 8028BE9C 00288DDC  38 03 00 14 */	addi r0, r3, 0x14
/* 8028BEA0 00288DE0  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BEA4 00288DE4  41 82 00 24 */	beq .L_8028BEC8
/* 8028BEA8 00288DE8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028BEAC 00288DEC  38 7E 00 04 */	addi r3, r30, 4
/* 8028BEB0 00288DF0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028BEB4 00288DF4  38 80 00 00 */	li r4, 0
/* 8028BEB8 00288DF8  90 BE 00 00 */	stw r5, 0(r30)
/* 8028BEBC 00288DFC  38 05 00 14 */	addi r0, r5, 0x14
/* 8028BEC0 00288E00  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BEC4 00288E04  4B E0 3D D9 */	bl __dt__18JPAEmitterCallBackFv
.L_8028BEC8:
/* 8028BEC8 00288E08  7F E0 07 35 */	extsh. r0, r31
/* 8028BECC 00288E0C  40 81 00 0C */	ble .L_8028BED8
/* 8028BED0 00288E10  7F C3 F3 78 */	mr r3, r30
/* 8028BED4 00288E14  4B D9 81 E1 */	bl __dl__FPv
.L_8028BED8:
/* 8028BED8 00288E18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BEDC 00288E1C  7F C3 F3 78 */	mr r3, r30
/* 8028BEE0 00288E20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028BEE4 00288E24  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028BEE8 00288E28  7C 08 03 A6 */	mtlr r0
/* 8028BEEC 00288E2C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BEF0 00288E30  4E 80 00 20 */	blr 
.endfn __dt__Q23efx13TQueenHanachoFv

.fn __dt__Q23efx12TQueenWakeupFv, weak
/* 8028BEF4 00288E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BEF8 00288E38  7C 08 02 A6 */	mflr r0
/* 8028BEFC 00288E3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BF00 00288E40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028BF04 00288E44  7C 9F 23 78 */	mr r31, r4
/* 8028BF08 00288E48  93 C1 00 08 */	stw r30, 8(r1)
/* 8028BF0C 00288E4C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028BF10 00288E50  41 82 00 64 */	beq .L_8028BF74
/* 8028BF14 00288E54  3C 60 80 4D */	lis r3, __vt__Q23efx12TQueenWakeup@ha
/* 8028BF18 00288E58  38 63 9D B0 */	addi r3, r3, __vt__Q23efx12TQueenWakeup@l
/* 8028BF1C 00288E5C  90 7E 00 00 */	stw r3, 0(r30)
/* 8028BF20 00288E60  38 03 00 14 */	addi r0, r3, 0x14
/* 8028BF24 00288E64  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BF28 00288E68  41 82 00 3C */	beq .L_8028BF64
/* 8028BF2C 00288E6C  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 8028BF30 00288E70  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 8028BF34 00288E74  90 7E 00 00 */	stw r3, 0(r30)
/* 8028BF38 00288E78  38 03 00 14 */	addi r0, r3, 0x14
/* 8028BF3C 00288E7C  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BF40 00288E80  41 82 00 24 */	beq .L_8028BF64
/* 8028BF44 00288E84  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028BF48 00288E88  38 7E 00 04 */	addi r3, r30, 4
/* 8028BF4C 00288E8C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028BF50 00288E90  38 80 00 00 */	li r4, 0
/* 8028BF54 00288E94  90 BE 00 00 */	stw r5, 0(r30)
/* 8028BF58 00288E98  38 05 00 14 */	addi r0, r5, 0x14
/* 8028BF5C 00288E9C  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BF60 00288EA0  4B E0 3D 3D */	bl __dt__18JPAEmitterCallBackFv
.L_8028BF64:
/* 8028BF64 00288EA4  7F E0 07 35 */	extsh. r0, r31
/* 8028BF68 00288EA8  40 81 00 0C */	ble .L_8028BF74
/* 8028BF6C 00288EAC  7F C3 F3 78 */	mr r3, r30
/* 8028BF70 00288EB0  4B D9 81 45 */	bl __dl__FPv
.L_8028BF74:
/* 8028BF74 00288EB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028BF78 00288EB8  7F C3 F3 78 */	mr r3, r30
/* 8028BF7C 00288EBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028BF80 00288EC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028BF84 00288EC4  7C 08 03 A6 */	mtlr r0
/* 8028BF88 00288EC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8028BF8C 00288ECC  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TQueenWakeupFv

.fn __dt__Q23efx12TQueenDamageFv, weak
/* 8028BF90 00288ED0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028BF94 00288ED4  7C 08 02 A6 */	mflr r0
/* 8028BF98 00288ED8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028BF9C 00288EDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028BFA0 00288EE0  7C 9F 23 78 */	mr r31, r4
/* 8028BFA4 00288EE4  93 C1 00 08 */	stw r30, 8(r1)
/* 8028BFA8 00288EE8  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028BFAC 00288EEC  41 82 00 64 */	beq .L_8028C010
/* 8028BFB0 00288EF0  3C 60 80 4D */	lis r3, __vt__Q23efx12TQueenDamage@ha
/* 8028BFB4 00288EF4  38 63 9E 34 */	addi r3, r3, __vt__Q23efx12TQueenDamage@l
/* 8028BFB8 00288EF8  90 7E 00 00 */	stw r3, 0(r30)
/* 8028BFBC 00288EFC  38 03 00 14 */	addi r0, r3, 0x14
/* 8028BFC0 00288F00  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BFC4 00288F04  41 82 00 3C */	beq .L_8028C000
/* 8028BFC8 00288F08  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 8028BFCC 00288F0C  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 8028BFD0 00288F10  90 7E 00 00 */	stw r3, 0(r30)
/* 8028BFD4 00288F14  38 03 00 14 */	addi r0, r3, 0x14
/* 8028BFD8 00288F18  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BFDC 00288F1C  41 82 00 24 */	beq .L_8028C000
/* 8028BFE0 00288F20  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028BFE4 00288F24  38 7E 00 04 */	addi r3, r30, 4
/* 8028BFE8 00288F28  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028BFEC 00288F2C  38 80 00 00 */	li r4, 0
/* 8028BFF0 00288F30  90 BE 00 00 */	stw r5, 0(r30)
/* 8028BFF4 00288F34  38 05 00 14 */	addi r0, r5, 0x14
/* 8028BFF8 00288F38  90 1E 00 04 */	stw r0, 4(r30)
/* 8028BFFC 00288F3C  4B E0 3C A1 */	bl __dt__18JPAEmitterCallBackFv
.L_8028C000:
/* 8028C000 00288F40  7F E0 07 35 */	extsh. r0, r31
/* 8028C004 00288F44  40 81 00 0C */	ble .L_8028C010
/* 8028C008 00288F48  7F C3 F3 78 */	mr r3, r30
/* 8028C00C 00288F4C  4B D9 80 A9 */	bl __dl__FPv
.L_8028C010:
/* 8028C010 00288F50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C014 00288F54  7F C3 F3 78 */	mr r3, r30
/* 8028C018 00288F58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C01C 00288F5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028C020 00288F60  7C 08 03 A6 */	mtlr r0
/* 8028C024 00288F64  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C028 00288F68  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TQueenDamageFv

.fn __dt__Q23efx15TQueenCrashRockFv, weak
/* 8028C02C 00288F6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C030 00288F70  7C 08 02 A6 */	mflr r0
/* 8028C034 00288F74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C038 00288F78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C03C 00288F7C  7C 9F 23 78 */	mr r31, r4
/* 8028C040 00288F80  93 C1 00 08 */	stw r30, 8(r1)
/* 8028C044 00288F84  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028C048 00288F88  41 82 00 64 */	beq .L_8028C0AC
/* 8028C04C 00288F8C  3C 60 80 4D */	lis r3, __vt__Q23efx15TQueenCrashRock@ha
/* 8028C050 00288F90  38 63 9E 80 */	addi r3, r3, __vt__Q23efx15TQueenCrashRock@l
/* 8028C054 00288F94  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C058 00288F98  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C05C 00288F9C  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C060 00288FA0  41 82 00 3C */	beq .L_8028C09C
/* 8028C064 00288FA4  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 8028C068 00288FA8  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 8028C06C 00288FAC  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C070 00288FB0  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C074 00288FB4  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C078 00288FB8  41 82 00 24 */	beq .L_8028C09C
/* 8028C07C 00288FBC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028C080 00288FC0  38 7E 00 04 */	addi r3, r30, 4
/* 8028C084 00288FC4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028C088 00288FC8  38 80 00 00 */	li r4, 0
/* 8028C08C 00288FCC  90 BE 00 00 */	stw r5, 0(r30)
/* 8028C090 00288FD0  38 05 00 14 */	addi r0, r5, 0x14
/* 8028C094 00288FD4  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C098 00288FD8  4B E0 3C 05 */	bl __dt__18JPAEmitterCallBackFv
.L_8028C09C:
/* 8028C09C 00288FDC  7F E0 07 35 */	extsh. r0, r31
/* 8028C0A0 00288FE0  40 81 00 0C */	ble .L_8028C0AC
/* 8028C0A4 00288FE4  7F C3 F3 78 */	mr r3, r30
/* 8028C0A8 00288FE8  4B D9 80 0D */	bl __dl__FPv
.L_8028C0AC:
/* 8028C0AC 00288FEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C0B0 00288FF0  7F C3 F3 78 */	mr r3, r30
/* 8028C0B4 00288FF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C0B8 00288FF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028C0BC 00288FFC  7C 08 03 A6 */	mtlr r0
/* 8028C0C0 00289000  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C0C4 00289004  4E 80 00 20 */	blr 
.endfn __dt__Q23efx15TQueenCrashRockFv

.fn __dt__Q23efx12TQueenCrashLFv, weak
/* 8028C0C8 00289008  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C0CC 0028900C  7C 08 02 A6 */	mflr r0
/* 8028C0D0 00289010  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C0D4 00289014  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C0D8 00289018  7C 9F 23 78 */	mr r31, r4
/* 8028C0DC 0028901C  93 C1 00 08 */	stw r30, 8(r1)
/* 8028C0E0 00289020  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028C0E4 00289024  41 82 00 64 */	beq .L_8028C148
/* 8028C0E8 00289028  3C 60 80 4D */	lis r3, __vt__Q23efx12TQueenCrashL@ha
/* 8028C0EC 0028902C  38 63 9E CC */	addi r3, r3, __vt__Q23efx12TQueenCrashL@l
/* 8028C0F0 00289030  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C0F4 00289034  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C0F8 00289038  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C0FC 0028903C  41 82 00 3C */	beq .L_8028C138
/* 8028C100 00289040  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 8028C104 00289044  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 8028C108 00289048  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C10C 0028904C  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C110 00289050  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C114 00289054  41 82 00 24 */	beq .L_8028C138
/* 8028C118 00289058  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028C11C 0028905C  38 7E 00 04 */	addi r3, r30, 4
/* 8028C120 00289060  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028C124 00289064  38 80 00 00 */	li r4, 0
/* 8028C128 00289068  90 BE 00 00 */	stw r5, 0(r30)
/* 8028C12C 0028906C  38 05 00 14 */	addi r0, r5, 0x14
/* 8028C130 00289070  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C134 00289074  4B E0 3B 69 */	bl __dt__18JPAEmitterCallBackFv
.L_8028C138:
/* 8028C138 00289078  7F E0 07 35 */	extsh. r0, r31
/* 8028C13C 0028907C  40 81 00 0C */	ble .L_8028C148
/* 8028C140 00289080  7F C3 F3 78 */	mr r3, r30
/* 8028C144 00289084  4B D9 7F 71 */	bl __dl__FPv
.L_8028C148:
/* 8028C148 00289088  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C14C 0028908C  7F C3 F3 78 */	mr r3, r30
/* 8028C150 00289090  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C154 00289094  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028C158 00289098  7C 08 03 A6 */	mtlr r0
/* 8028C15C 0028909C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C160 002890A0  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TQueenCrashLFv

.fn __dt__Q23efx12TQueenCrashRFv, weak
/* 8028C164 002890A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C168 002890A8  7C 08 02 A6 */	mflr r0
/* 8028C16C 002890AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C170 002890B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C174 002890B4  7C 9F 23 78 */	mr r31, r4
/* 8028C178 002890B8  93 C1 00 08 */	stw r30, 8(r1)
/* 8028C17C 002890BC  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028C180 002890C0  41 82 00 64 */	beq .L_8028C1E4
/* 8028C184 002890C4  3C 60 80 4D */	lis r3, __vt__Q23efx12TQueenCrashR@ha
/* 8028C188 002890C8  38 63 9F 18 */	addi r3, r3, __vt__Q23efx12TQueenCrashR@l
/* 8028C18C 002890CC  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C190 002890D0  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C194 002890D4  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C198 002890D8  41 82 00 3C */	beq .L_8028C1D4
/* 8028C19C 002890DC  3C 60 80 4E */	lis r3, __vt__Q23efx13TChasePosYRot@ha
/* 8028C1A0 002890E0  38 63 68 F4 */	addi r3, r3, __vt__Q23efx13TChasePosYRot@l
/* 8028C1A4 002890E4  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C1A8 002890E8  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C1AC 002890EC  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C1B0 002890F0  41 82 00 24 */	beq .L_8028C1D4
/* 8028C1B4 002890F4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028C1B8 002890F8  38 7E 00 04 */	addi r3, r30, 4
/* 8028C1BC 002890FC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028C1C0 00289100  38 80 00 00 */	li r4, 0
/* 8028C1C4 00289104  90 BE 00 00 */	stw r5, 0(r30)
/* 8028C1C8 00289108  38 05 00 14 */	addi r0, r5, 0x14
/* 8028C1CC 0028910C  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C1D0 00289110  4B E0 3A CD */	bl __dt__18JPAEmitterCallBackFv
.L_8028C1D4:
/* 8028C1D4 00289114  7F E0 07 35 */	extsh. r0, r31
/* 8028C1D8 00289118  40 81 00 0C */	ble .L_8028C1E4
/* 8028C1DC 0028911C  7F C3 F3 78 */	mr r3, r30
/* 8028C1E0 00289120  4B D9 7E D5 */	bl __dl__FPv
.L_8028C1E4:
/* 8028C1E4 00289124  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C1E8 00289128  7F C3 F3 78 */	mr r3, r30
/* 8028C1EC 0028912C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C1F0 00289130  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028C1F4 00289134  7C 08 03 A6 */	mtlr r0
/* 8028C1F8 00289138  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C1FC 0028913C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx12TQueenCrashRFv

.fn __dt__Q23efx9TQueenLayFv, weak
/* 8028C200 00289140  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C204 00289144  7C 08 02 A6 */	mflr r0
/* 8028C208 00289148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C20C 0028914C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C210 00289150  7C 9F 23 78 */	mr r31, r4
/* 8028C214 00289154  93 C1 00 08 */	stw r30, 8(r1)
/* 8028C218 00289158  7C 7E 1B 79 */	or. r30, r3, r3
/* 8028C21C 0028915C  41 82 00 64 */	beq .L_8028C280
/* 8028C220 00289160  3C 60 80 4D */	lis r3, __vt__Q23efx9TQueenLay@ha
/* 8028C224 00289164  38 63 9F B8 */	addi r3, r3, __vt__Q23efx9TQueenLay@l
/* 8028C228 00289168  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C22C 0028916C  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C230 00289170  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C234 00289174  41 82 00 3C */	beq .L_8028C270
/* 8028C238 00289178  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 8028C23C 0028917C  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 8028C240 00289180  90 7E 00 00 */	stw r3, 0(r30)
/* 8028C244 00289184  38 03 00 14 */	addi r0, r3, 0x14
/* 8028C248 00289188  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C24C 0028918C  41 82 00 24 */	beq .L_8028C270
/* 8028C250 00289190  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 8028C254 00289194  38 7E 00 04 */	addi r3, r30, 4
/* 8028C258 00289198  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 8028C25C 0028919C  38 80 00 00 */	li r4, 0
/* 8028C260 002891A0  90 BE 00 00 */	stw r5, 0(r30)
/* 8028C264 002891A4  38 05 00 14 */	addi r0, r5, 0x14
/* 8028C268 002891A8  90 1E 00 04 */	stw r0, 4(r30)
/* 8028C26C 002891AC  4B E0 3A 31 */	bl __dt__18JPAEmitterCallBackFv
.L_8028C270:
/* 8028C270 002891B0  7F E0 07 35 */	extsh. r0, r31
/* 8028C274 002891B4  40 81 00 0C */	ble .L_8028C280
/* 8028C278 002891B8  7F C3 F3 78 */	mr r3, r30
/* 8028C27C 002891BC  4B D9 7E 39 */	bl __dl__FPv
.L_8028C280:
/* 8028C280 002891C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C284 002891C4  7F C3 F3 78 */	mr r3, r30
/* 8028C288 002891C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C28C 002891CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028C290 002891D0  7C 08 03 A6 */	mtlr r0
/* 8028C294 002891D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C298 002891D8  4E 80 00 20 */	blr 
.endfn __dt__Q23efx9TQueenLayFv

.fn "__ml__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv", weak
/* 8028C29C 002891DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C2A0 002891E0  7C 08 02 A6 */	mflr r0
/* 8028C2A4 002891E4  7C 64 1B 78 */	mr r4, r3
/* 8028C2A8 002891E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C2AC 002891EC  80 63 00 08 */	lwz r3, 8(r3)
/* 8028C2B0 002891F0  80 84 00 04 */	lwz r4, 4(r4)
/* 8028C2B4 002891F4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C2B8 002891F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028C2BC 002891FC  7D 89 03 A6 */	mtctr r12
/* 8028C2C0 00289200  4E 80 04 21 */	bctrl 
/* 8028C2C4 00289204  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C2C8 00289208  7C 08 03 A6 */	mtlr r0
/* 8028C2CC 0028920C  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C2D0 00289210  4E 80 00 20 */	blr 
.endfn "__ml__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"

.fn "next__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv", weak
/* 8028C2D4 00289214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C2D8 00289218  7C 08 02 A6 */	mflr r0
/* 8028C2DC 0028921C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C2E0 00289220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C2E4 00289224  7C 7F 1B 78 */	mr r31, r3
/* 8028C2E8 00289228  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8028C2EC 0028922C  28 00 00 00 */	cmplwi r0, 0
/* 8028C2F0 00289230  40 82 00 24 */	bne .L_8028C314
/* 8028C2F4 00289234  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C2F8 00289238  80 9F 00 04 */	lwz r4, 4(r31)
/* 8028C2FC 0028923C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C300 00289240  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028C304 00289244  7D 89 03 A6 */	mtctr r12
/* 8028C308 00289248  4E 80 04 21 */	bctrl 
/* 8028C30C 0028924C  90 7F 00 04 */	stw r3, 4(r31)
/* 8028C310 00289250  48 00 00 94 */	b .L_8028C3A4
.L_8028C314:
/* 8028C314 00289254  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C318 00289258  80 9F 00 04 */	lwz r4, 4(r31)
/* 8028C31C 0028925C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C320 00289260  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028C324 00289264  7D 89 03 A6 */	mtctr r12
/* 8028C328 00289268  4E 80 04 21 */	bctrl 
/* 8028C32C 0028926C  90 7F 00 04 */	stw r3, 4(r31)
/* 8028C330 00289270  48 00 00 58 */	b .L_8028C388
.L_8028C334:
/* 8028C334 00289274  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C338 00289278  80 9F 00 04 */	lwz r4, 4(r31)
/* 8028C33C 0028927C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C340 00289280  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028C344 00289284  7D 89 03 A6 */	mtctr r12
/* 8028C348 00289288  4E 80 04 21 */	bctrl 
/* 8028C34C 0028928C  7C 64 1B 78 */	mr r4, r3
/* 8028C350 00289290  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8028C354 00289294  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C358 00289298  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028C35C 0028929C  7D 89 03 A6 */	mtctr r12
/* 8028C360 002892A0  4E 80 04 21 */	bctrl 
/* 8028C364 002892A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028C368 002892A8  40 82 00 3C */	bne .L_8028C3A4
/* 8028C36C 002892AC  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C370 002892B0  80 9F 00 04 */	lwz r4, 4(r31)
/* 8028C374 002892B4  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C378 002892B8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028C37C 002892BC  7D 89 03 A6 */	mtctr r12
/* 8028C380 002892C0  4E 80 04 21 */	bctrl 
/* 8028C384 002892C4  90 7F 00 04 */	stw r3, 4(r31)
.L_8028C388:
/* 8028C388 002892C8  7F E3 FB 78 */	mr r3, r31
/* 8028C38C 002892CC  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028C390 002892D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028C394 002892D4  7D 89 03 A6 */	mtctr r12
/* 8028C398 002892D8  4E 80 04 21 */	bctrl 
/* 8028C39C 002892DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028C3A0 002892E0  41 82 FF 94 */	beq .L_8028C334
.L_8028C3A4:
/* 8028C3A4 002892E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C3A8 002892E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C3AC 002892EC  7C 08 03 A6 */	mtlr r0
/* 8028C3B0 002892F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C3B4 002892F4  4E 80 00 20 */	blr 
.endfn "next__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"

.fn "first__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv", weak
/* 8028C3B8 002892F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8028C3BC 002892FC  7C 08 02 A6 */	mflr r0
/* 8028C3C0 00289300  90 01 00 14 */	stw r0, 0x14(r1)
/* 8028C3C4 00289304  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028C3C8 00289308  7C 7F 1B 78 */	mr r31, r3
/* 8028C3CC 0028930C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8028C3D0 00289310  28 00 00 00 */	cmplwi r0, 0
/* 8028C3D4 00289314  40 82 00 20 */	bne .L_8028C3F4
/* 8028C3D8 00289318  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C3DC 0028931C  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C3E0 00289320  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028C3E4 00289324  7D 89 03 A6 */	mtctr r12
/* 8028C3E8 00289328  4E 80 04 21 */	bctrl 
/* 8028C3EC 0028932C  90 7F 00 04 */	stw r3, 4(r31)
/* 8028C3F0 00289330  48 00 00 90 */	b .L_8028C480
.L_8028C3F4:
/* 8028C3F4 00289334  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C3F8 00289338  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C3FC 0028933C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8028C400 00289340  7D 89 03 A6 */	mtctr r12
/* 8028C404 00289344  4E 80 04 21 */	bctrl 
/* 8028C408 00289348  90 7F 00 04 */	stw r3, 4(r31)
/* 8028C40C 0028934C  48 00 00 58 */	b .L_8028C464
.L_8028C410:
/* 8028C410 00289350  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C414 00289354  80 9F 00 04 */	lwz r4, 4(r31)
/* 8028C418 00289358  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C41C 0028935C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028C420 00289360  7D 89 03 A6 */	mtctr r12
/* 8028C424 00289364  4E 80 04 21 */	bctrl 
/* 8028C428 00289368  7C 64 1B 78 */	mr r4, r3
/* 8028C42C 0028936C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 8028C430 00289370  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C434 00289374  81 8C 00 08 */	lwz r12, 8(r12)
/* 8028C438 00289378  7D 89 03 A6 */	mtctr r12
/* 8028C43C 0028937C  4E 80 04 21 */	bctrl 
/* 8028C440 00289380  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028C444 00289384  40 82 00 3C */	bne .L_8028C480
/* 8028C448 00289388  80 7F 00 08 */	lwz r3, 8(r31)
/* 8028C44C 0028938C  80 9F 00 04 */	lwz r4, 4(r31)
/* 8028C450 00289390  81 83 00 00 */	lwz r12, 0(r3)
/* 8028C454 00289394  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8028C458 00289398  7D 89 03 A6 */	mtctr r12
/* 8028C45C 0028939C  4E 80 04 21 */	bctrl 
/* 8028C460 002893A0  90 7F 00 04 */	stw r3, 4(r31)
.L_8028C464:
/* 8028C464 002893A4  7F E3 FB 78 */	mr r3, r31
/* 8028C468 002893A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8028C46C 002893AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8028C470 002893B0  7D 89 03 A6 */	mtctr r12
/* 8028C474 002893B4  4E 80 04 21 */	bctrl 
/* 8028C478 002893B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8028C47C 002893BC  41 82 FF 94 */	beq .L_8028C410
.L_8028C480:
/* 8028C480 002893C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8028C484 002893C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8028C488 002893C8  7C 08 03 A6 */	mtlr r0
/* 8028C48C 002893CC  38 21 00 10 */	addi r1, r1, 0x10
/* 8028C490 002893D0  4E 80 00 20 */	blr 
.endfn "first__Q24Game31EnemyIterator<Q34Game4Baby3Obj>Fv"

.fn inWaterCallback__Q34Game5Queen3ObjFPQ24Game8WaterBox, weak
/* 8028C494 002893D4  4E 80 00 20 */	blr 
.endfn inWaterCallback__Q34Game5Queen3ObjFPQ24Game8WaterBox

.fn outWaterCallback__Q34Game5Queen3ObjFv, weak
/* 8028C498 002893D8  4E 80 00 20 */	blr 
.endfn outWaterCallback__Q34Game5Queen3ObjFv

.fn getDamageCoeStoneState__Q34Game5Queen3ObjFv, weak
/* 8028C49C 002893DC  C0 22 D5 24 */	lfs f1, lbl_8051B884@sda21(r2)
/* 8028C4A0 002893E0  4E 80 00 20 */	blr 
.endfn getDamageCoeStoneState__Q34Game5Queen3ObjFv

.fn getEnemyTypeID__Q34Game5Queen3ObjFv, weak
/* 8028C4A4 002893E4  38 60 00 1E */	li r3, 0x1e
/* 8028C4A8 002893E8  4E 80 00 20 */	blr 
.endfn getEnemyTypeID__Q34Game5Queen3ObjFv

.fn __sinit_Queen_cpp, local
/* 8028C4AC 002893EC  3C 80 80 51 */	lis r4, __float_nan@ha
/* 8028C4B0 002893F0  38 00 FF FF */	li r0, -1
/* 8028C4B4 002893F4  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 8028C4B8 002893F8  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 8028C4BC 002893FC  90 0D 96 D0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 8028C4C0 00289400  D4 03 9D 20 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 8028C4C4 00289404  D0 0D 96 D4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 8028C4C8 00289408  D0 03 00 04 */	stfs f0, 4(r3)
/* 8028C4CC 0028940C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8028C4D0 00289410  4E 80 00 20 */	blr 
.endfn __sinit_Queen_cpp

.fn "@784@12@viewOnPelletKilled__Q24Game9EnemyBaseFv", weak
/* 8028C4D4 00289414  39 60 00 0C */	li r11, 0xc
/* 8028C4D8 00289418  7D 63 58 2E */	lwzx r11, r3, r11
/* 8028C4DC 0028941C  7C 63 5A 14 */	add r3, r3, r11
/* 8028C4E0 00289420  38 63 FC F0 */	addi r3, r3, -784
/* 8028C4E4 00289424  4B E7 A4 38 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv
.endfn "@784@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"

.fn "@784@12@viewStartCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8028C4E8 00289428  39 60 00 0C */	li r11, 0xc
/* 8028C4EC 0028942C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8028C4F0 00289430  7C 63 5A 14 */	add r3, r3, r11
/* 8028C4F4 00289434  38 63 FC F0 */	addi r3, r3, -784
/* 8028C4F8 00289438  4B E7 A1 B0 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv
.endfn "@784@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"

.fn "@784@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv", weak
/* 8028C4FC 0028943C  39 60 00 0C */	li r11, 0xc
/* 8028C500 00289440  7D 63 58 2E */	lwzx r11, r3, r11
/* 8028C504 00289444  7C 63 5A 14 */	add r3, r3, r11
/* 8028C508 00289448  38 63 FC F0 */	addi r3, r3, -784
/* 8028C50C 0028944C  4B E7 A1 BC */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv
.endfn "@784@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"

.fn "@784@12@view_finish_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8028C510 00289450  39 60 00 0C */	li r11, 0xc
/* 8028C514 00289454  7D 63 58 2E */	lwzx r11, r3, r11
/* 8028C518 00289458  7C 63 5A 14 */	add r3, r3, r11
/* 8028C51C 0028945C  38 63 FC F0 */	addi r3, r3, -784
/* 8028C520 00289460  4B E7 A5 58 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv
.endfn "@784@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"

.fn "@784@12@view_start_carrymotion__Q24Game9EnemyBaseFv", weak
/* 8028C524 00289464  39 60 00 0C */	li r11, 0xc
/* 8028C528 00289468  7D 63 58 2E */	lwzx r11, r3, r11
/* 8028C52C 0028946C  7C 63 5A 14 */	add r3, r3, r11
/* 8028C530 00289470  38 63 FC F0 */	addi r3, r3, -784
/* 8028C534 00289474  4B E7 A5 18 */	b view_start_carrymotion__Q24Game9EnemyBaseFv
.endfn "@784@12@view_start_carrymotion__Q24Game9EnemyBaseFv"

.fn "@784@12@viewGetShape__Q24Game9EnemyBaseFv", weak
/* 8028C538 00289478  39 60 00 0C */	li r11, 0xc
/* 8028C53C 0028947C  7D 63 58 2E */	lwzx r11, r3, r11
/* 8028C540 00289480  7C 63 5A 14 */	add r3, r3, r11
/* 8028C544 00289484  38 63 FC F0 */	addi r3, r3, -784
/* 8028C548 00289488  4B E7 A1 58 */	b viewGetShape__Q24Game9EnemyBaseFv
.endfn "@784@12@viewGetShape__Q24Game9EnemyBaseFv"

.fn "@4@__dt__Q23efx9TQueenLayFv", weak
/* 8028C54C 0028948C  38 63 FF FC */	addi r3, r3, -4
/* 8028C550 00289490  4B FF FC B0 */	b __dt__Q23efx9TQueenLayFv
.endfn "@4@__dt__Q23efx9TQueenLayFv"

.fn "@4@__dt__Q23efx12TQueenCrashRFv", weak
/* 8028C554 00289494  38 63 FF FC */	addi r3, r3, -4
/* 8028C558 00289498  4B FF FC 0C */	b __dt__Q23efx12TQueenCrashRFv
.endfn "@4@__dt__Q23efx12TQueenCrashRFv"

.fn "@4@__dt__Q23efx12TQueenCrashLFv", weak
/* 8028C55C 0028949C  38 63 FF FC */	addi r3, r3, -4
/* 8028C560 002894A0  4B FF FB 68 */	b __dt__Q23efx12TQueenCrashLFv
.endfn "@4@__dt__Q23efx12TQueenCrashLFv"

.fn "@4@__dt__Q23efx15TQueenCrashRockFv", weak
/* 8028C564 002894A4  38 63 FF FC */	addi r3, r3, -4
/* 8028C568 002894A8  4B FF FA C4 */	b __dt__Q23efx15TQueenCrashRockFv
.endfn "@4@__dt__Q23efx15TQueenCrashRockFv"

.fn "@4@__dt__Q23efx12TQueenDamageFv", weak
/* 8028C56C 002894AC  38 63 FF FC */	addi r3, r3, -4
/* 8028C570 002894B0  4B FF FA 20 */	b __dt__Q23efx12TQueenDamageFv
.endfn "@4@__dt__Q23efx12TQueenDamageFv"

.fn "@4@__dt__Q23efx12TQueenWakeupFv", weak
/* 8028C574 002894B4  38 63 FF FC */	addi r3, r3, -4
/* 8028C578 002894B8  4B FF F9 7C */	b __dt__Q23efx12TQueenWakeupFv
.endfn "@4@__dt__Q23efx12TQueenWakeupFv"

.fn "@4@__dt__Q23efx13TQueenHanachoFv", weak
/* 8028C57C 002894BC  38 63 FF FC */	addi r3, r3, -4
/* 8028C580 002894C0  4B FF F8 D8 */	b __dt__Q23efx13TQueenHanachoFv
.endfn "@4@__dt__Q23efx13TQueenHanachoFv"
