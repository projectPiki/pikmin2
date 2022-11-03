.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_BigFoot_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8048B6E8:
	.asciz "rhand1jnt"
.balign 4
lbl_8048B6F4:
	.asciz "rhand2jnt"
.balign 4
lbl_8048B700:
	.asciz "rhand3jnt"
.balign 4
lbl_8048B70C:
	.asciz "lhand1jnt"
.balign 4
lbl_8048B718:
	.asciz "lhand2jnt"
.balign 4
lbl_8048B724:
	.asciz "lhand3jnt"
.balign 4
lbl_8048B730:
	.asciz "rfoot1jnt"
.balign 4
lbl_8048B73C:
	.asciz "rfoot2jnt"
.balign 4
lbl_8048B748:
	.asciz "rfoot3jnt"
.balign 4
lbl_8048B754:
	.asciz "lfoot1jnt"
.balign 4
lbl_8048B760:
	.asciz "lfoot2jnt"
.balign 4
lbl_8048B76C:
	.asciz "lfoot3jnt"
.balign 4
lbl_8048B778:
	.4byte lbl_8048B6E8
	.4byte lbl_8048B6F4
	.4byte lbl_8048B700
	.4byte lbl_8048B70C
	.4byte lbl_8048B718
	.4byte lbl_8048B724
	.4byte lbl_8048B730
	.4byte lbl_8048B73C
	.4byte lbl_8048B748
	.4byte lbl_8048B754
	.4byte lbl_8048B760
	.4byte lbl_8048B76C
lbl_8048B7A8:
	.4byte 0x6C667431 # LFT1
	.4byte 0x6C687431 # LHT1
	.4byte 0x72667431 # RFT1
	.4byte 0x72687431 # RHT1
lbl_8048B7B8:
	.asciz "PSMainSide_ObjSound.h"
.balign 4
lbl_8048B7D0:
	.asciz "P2Assert"
.balign 4
lbl_8048B7DC:
	.4byte lbl_8048B6F4
	.4byte lbl_8048B718
	.4byte lbl_8048B73C
	.4byte lbl_8048B760

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q23efx10TOdamaWalk
__vt__Q23efx10TOdamaWalk:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx10TOdamaFur1
__vt__Q23efx10TOdamaFur1:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TOdamaFur1Fv"
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
	.4byte __dt__Q23efx10TOdamaFur1Fv
.global __vt__Q23efx17TOdamaDeadHahenC2
__vt__Q23efx17TOdamaDeadHahenC2:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx17TOdamaDeadHahenC2Fv"
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
	.4byte __dt__Q23efx17TOdamaDeadHahenC2Fv
.global __vt__Q23efx17TOdamaDeadHahenC1
__vt__Q23efx17TOdamaDeadHahenC1:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx17TOdamaDeadHahenC1Fv"
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
	.4byte __dt__Q23efx17TOdamaDeadHahenC1Fv
.global __vt__Q23efx10TOdamaFur2
__vt__Q23efx10TOdamaFur2:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TOdamaFur2Fv"
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
	.4byte __dt__Q23efx10TOdamaFur2Fv
.global __vt__Q23efx16TOdamaDeadHahenB
__vt__Q23efx16TOdamaDeadHahenB:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx16TOdamaDeadHahenBFv"
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
	.4byte __dt__Q23efx16TOdamaDeadHahenBFv
.global __vt__Q23efx16TOdamaDeadHahenA
__vt__Q23efx16TOdamaDeadHahenA:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx16TOdamaDeadHahenAFv"
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
	.4byte __dt__Q23efx16TOdamaDeadHahenAFv
.global __vt__Q23efx11TOdamaHahen
__vt__Q23efx11TOdamaHahen:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TOdamaHahenFv"
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
	.4byte __dt__Q23efx11TOdamaHahenFv
.global __vt__Q23efx10TOdamaFoot
__vt__Q23efx10TOdamaFoot:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.global __vt__Q34Game7BigFoot3Obj
__vt__Q34Game7BigFoot3Obj:
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
	.4byte onInit__Q34Game7BigFoot3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game7BigFoot3ObjFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game7BigFoot3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game7BigFoot3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game7BigFoot3ObjFv
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
	.4byte collisionCallback__Q34Game7BigFoot3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game7BigFoot3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game7BigFoot3ObjFv
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
	.4byte __dt__Q34Game7BigFoot3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game7BigFoot3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game7BigFoot3ObjFv
	.4byte doUpdateCommon__Q34Game7BigFoot3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game7BigFoot3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game7BigFoot3ObjFR8Graphics
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
	.4byte setParameters__Q24Game9EnemyBaseFv
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
	.4byte getEnemyTypeID__Q34Game7BigFoot3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q34Game7BigFoot3ObjFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q34Game7BigFoot3ObjFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q34Game7BigFoot3ObjFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game7BigFoot3ObjFPQ24Game8CreaturefP8CollPart
	.4byte pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart
	.4byte dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature
	.4byte earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte farmCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f"
	.4byte eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef
	.4byte dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei
	.4byte doStartStoneState__Q34Game7BigFoot3ObjFv
	.4byte doFinishStoneState__Q34Game7BigFoot3ObjFv
	.4byte getDamageCoeStoneState__Q34Game7BigFoot3ObjFv
	.4byte doStartEarthquakeState__Q24Game9EnemyBaseFf
	.4byte doFinishEarthquakeState__Q24Game9EnemyBaseFv
	.4byte doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	.4byte lifeRecover__Q24Game9EnemyBaseFv
	.4byte startCarcassMotion__Q24Game9EnemyBaseFv
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
	.4byte doStartMovie__Q34Game7BigFoot3ObjFv
	.4byte doEndMovie__Q34Game7BigFoot3ObjFv
	.4byte setFSM__Q34Game7BigFoot3ObjFPQ34Game7BigFoot3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@1196@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@1196@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@1196@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@1196@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@1196@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@1196@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.global __vt__Q34Game7BigFoot21BigFootGroundCallBack
__vt__Q34Game7BigFoot21BigFootGroundCallBack:
	.4byte 0
	.4byte 0
	.4byte invokeOnGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox
	.4byte invokeOffGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051C728:
	.float 0.0
lbl_8051C72C:
	.float 1.0
lbl_8051C730:
	.float 0.1
lbl_8051C734:
	.float 500.0
lbl_8051C738:
	.float 10.0
lbl_8051C73C:
	.float -1000.0
.balign 4
lbl_8051C740:
	.asciz "kosi"
.balign 4
lbl_8051C748:
	.float 100.0
lbl_8051C74C:
	.float 0.5
lbl_8051C750:
	.float 32768.0
.balign 8
lbl_8051C758:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051C760:
	.float 2.0
lbl_8051C764: # pi
	.float 3.1415927
lbl_8051C768:
	.float 0.0055555557
lbl_8051C76C:
	.float -325.9493
lbl_8051C770:
	.float 325.9493
lbl_8051C774:
	.float 625.0
lbl_8051C778: # half-pi
	.float 1.5707964
lbl_8051C77C:
	.float 0.75
lbl_8051C780:
	.float 120.0
lbl_8051C784:
	.float 3.0
lbl_8051C788:
	.float -0.15
lbl_8051C78C:
	.float -2.0
lbl_8051C790:
	.float 75.0
lbl_8051C794:
	.float 30.0
lbl_8051C798:
	.float 60.0
lbl_8051C79C:
	.float 0.7
lbl_8051C7A0:
	.float -1.5
lbl_8051C7A4:
	.float 40.0
lbl_8051C7A8:
	.float 50.0
.balign 4
lbl_8051C7AC:
	.asciz "tama1"
.balign 4
lbl_8051C7B4:
	.asciz "tama2"
.balign 4
lbl_8051C7BC:
	.float 0.8
lbl_8051C7C0:
	.float 0.175
lbl_8051C7C4:
	.float 0.35
lbl_8051C7C8:
	.float 4.0
lbl_8051C7CC:
	.float 0.25

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global invokeOnGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox
invokeOnGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox:
/* 802C7EF0 002C4E30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C7EF4 002C4E34  7C 08 02 A6 */	mflr r0
/* 802C7EF8 002C4E38  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C7EFC 002C4E3C  80 63 00 04 */	lwz r3, 4(r3)
/* 802C7F00 002C4E40  48 00 26 4D */	bl createOnGroundEffect__Q34Game7BigFoot3ObjFiPQ24Game8WaterBox
/* 802C7F04 002C4E44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C7F08 002C4E48  7C 08 03 A6 */	mtlr r0
/* 802C7F0C 002C4E4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C7F10 002C4E50  4E 80 00 20 */	blr 

.global invokeOffGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox
invokeOffGround__Q34Game7BigFoot21BigFootGroundCallBackFiPQ24Game8WaterBox:
/* 802C7F14 002C4E54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C7F18 002C4E58  7C 08 02 A6 */	mflr r0
/* 802C7F1C 002C4E5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C7F20 002C4E60  80 63 00 04 */	lwz r3, 4(r3)
/* 802C7F24 002C4E64  48 00 28 51 */	bl createOffGroundEffect__Q34Game7BigFoot3ObjFiPQ24Game8WaterBox
/* 802C7F28 002C4E68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C7F2C 002C4E6C  7C 08 03 A6 */	mtlr r0
/* 802C7F30 002C4E70  38 21 00 10 */	addi r1, r1, 0x10
/* 802C7F34 002C4E74  4E 80 00 20 */	blr 

.global __ct__Q34Game7BigFoot3ObjFv
__ct__Q34Game7BigFoot3ObjFv:
/* 802C7F38 002C4E78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C7F3C 002C4E7C  7C 08 02 A6 */	mflr r0
/* 802C7F40 002C4E80  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C7F44 002C4E84  7C 80 07 35 */	extsh. r0, r4
/* 802C7F48 002C4E88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C7F4C 002C4E8C  7C 7F 1B 78 */	mr r31, r3
/* 802C7F50 002C4E90  93 C1 00 08 */	stw r30, 8(r1)
/* 802C7F54 002C4E94  41 82 00 24 */	beq .L_802C7F78
/* 802C7F58 002C4E98  38 1F 04 AC */	addi r0, r31, 0x4ac
/* 802C7F5C 002C4E9C  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802C7F60 002C4EA0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802C7F64 002C4EA4  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802C7F68 002C4EA8  38 00 00 00 */	li r0, 0
/* 802C7F6C 002C4EAC  90 7F 04 AC */	stw r3, 0x4ac(r31)
/* 802C7F70 002C4EB0  90 1F 04 B0 */	stw r0, 0x4b0(r31)
/* 802C7F74 002C4EB4  90 1F 04 B4 */	stw r0, 0x4b4(r31)
.L_802C7F78:
/* 802C7F78 002C4EB8  7F E3 FB 78 */	mr r3, r31
/* 802C7F7C 002C4EBC  38 80 00 00 */	li r4, 0
/* 802C7F80 002C4EC0  4B E3 94 21 */	bl __ct__Q24Game9EnemyBaseFv
/* 802C7F84 002C4EC4  3C 80 80 4D */	lis r4, __vt__Q34Game7BigFoot3Obj@ha
/* 802C7F88 002C4EC8  38 1F 04 AC */	addi r0, r31, 0x4ac
/* 802C7F8C 002C4ECC  38 C4 1E 10 */	addi r6, r4, __vt__Q34Game7BigFoot3Obj@l
/* 802C7F90 002C4ED0  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 802C7F94 002C4ED4  90 DF 00 00 */	stw r6, 0(r31)
/* 802C7F98 002C4ED8  38 A6 01 B0 */	addi r5, r6, 0x1b0
/* 802C7F9C 002C4EDC  39 26 02 FC */	addi r9, r6, 0x2fc
/* 802C7FA0 002C4EE0  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 802C7FA4 002C4EE4  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802C7FA8 002C4EE8  38 7F 02 F0 */	addi r3, r31, 0x2f0
/* 802C7FAC 002C4EEC  38 A0 00 00 */	li r5, 0
/* 802C7FB0 002C4EF0  38 C0 00 0C */	li r6, 0xc
/* 802C7FB4 002C4EF4  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 802C7FB8 002C4EF8  38 E0 00 10 */	li r7, 0x10
/* 802C7FBC 002C4EFC  91 28 00 00 */	stw r9, 0(r8)
/* 802C7FC0 002C4F00  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 802C7FC4 002C4F04  7C 08 00 50 */	subf r0, r8, r0
/* 802C7FC8 002C4F08  90 08 00 0C */	stw r0, 0xc(r8)
/* 802C7FCC 002C4F0C  4B DF 98 71 */	bl __construct_array
/* 802C7FD0 002C4F10  38 60 00 2C */	li r3, 0x2c
/* 802C7FD4 002C4F14  4B D5 BE D1 */	bl __nw__FUl
/* 802C7FD8 002C4F18  7C 7E 1B 79 */	or. r30, r3, r3
/* 802C7FDC 002C4F1C  41 82 00 44 */	beq .L_802C8020
/* 802C7FE0 002C4F20  4B E5 F9 95 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802C7FE4 002C4F24  3C 60 80 4D */	lis r3, __vt__Q34Game7BigFoot14ProperAnimator@ha
/* 802C7FE8 002C4F28  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802C7FEC 002C4F2C  38 03 1A A8 */	addi r0, r3, __vt__Q34Game7BigFoot14ProperAnimator@l
/* 802C7FF0 002C4F30  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802C7FF4 002C4F34  90 1E 00 00 */	stw r0, 0(r30)
/* 802C7FF8 002C4F38  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802C7FFC 002C4F3C  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802C8000 002C4F40  38 00 00 00 */	li r0, 0
/* 802C8004 002C4F44  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802C8008 002C4F48  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802C800C 002C4F4C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802C8010 002C4F50  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802C8014 002C4F54  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802C8018 002C4F58  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802C801C 002C4F5C  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802C8020:
/* 802C8020 002C4F60  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802C8024 002C4F64  38 60 00 1C */	li r3, 0x1c
/* 802C8028 002C4F68  4B D5 BE 7D */	bl __nw__FUl
/* 802C802C 002C4F6C  7C 64 1B 79 */	or. r4, r3, r3
/* 802C8030 002C4F70  41 82 00 24 */	beq .L_802C8054
/* 802C8034 002C4F74  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802C8038 002C4F78  3C 60 80 4D */	lis r3, __vt__Q34Game7BigFoot3FSM@ha
/* 802C803C 002C4F7C  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802C8040 002C4F80  38 A0 FF FF */	li r5, -1
/* 802C8044 002C4F84  90 04 00 00 */	stw r0, 0(r4)
/* 802C8048 002C4F88  38 03 1A 80 */	addi r0, r3, __vt__Q34Game7BigFoot3FSM@l
/* 802C804C 002C4F8C  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802C8050 002C4F90  90 04 00 00 */	stw r0, 0(r4)
.L_802C8054:
/* 802C8054 002C4F94  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C8058 002C4F98  7F E3 FB 78 */	mr r3, r31
/* 802C805C 002C4F9C  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802C8060 002C4FA0  7D 89 03 A6 */	mtctr r12
/* 802C8064 002C4FA4  4E 80 04 21 */	bctrl 
/* 802C8068 002C4FA8  7F E3 FB 78 */	mr r3, r31
/* 802C806C 002C4FAC  48 00 0C 95 */	bl createIKSystem__Q34Game7BigFoot3ObjFv
/* 802C8070 002C4FB0  7F E3 FB 78 */	mr r3, r31
/* 802C8074 002C4FB4  48 00 12 25 */	bl createShadowSystem__Q34Game7BigFoot3ObjFv
/* 802C8078 002C4FB8  7F E3 FB 78 */	mr r3, r31
/* 802C807C 002C4FBC  48 00 1C 25 */	bl createEffect__Q34Game7BigFoot3ObjFv
/* 802C8080 002C4FC0  7F E3 FB 78 */	mr r3, r31
/* 802C8084 002C4FC4  48 00 12 F5 */	bl createMaterialAnimation__Q34Game7BigFoot3ObjFv
/* 802C8088 002C4FC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C808C 002C4FCC  7F E3 FB 78 */	mr r3, r31
/* 802C8090 002C4FD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C8094 002C4FD4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C8098 002C4FD8  7C 08 03 A6 */	mtlr r0
/* 802C809C 002C4FDC  38 21 00 10 */	addi r1, r1, 0x10
/* 802C80A0 002C4FE0  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game7BigFoot3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game7BigFoot3ObjFPQ24Game21EnemyInitialParamBase:
/* 802C80A4 002C4FE4  4E 80 00 20 */	blr 

.global onInit__Q34Game7BigFoot3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game7BigFoot3ObjFPQ24Game15CreatureInitArg:
/* 802C80A8 002C4FE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C80AC 002C4FEC  7C 08 02 A6 */	mflr r0
/* 802C80B0 002C4FF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C80B4 002C4FF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C80B8 002C4FF8  7C 7F 1B 78 */	mr r31, r3
/* 802C80BC 002C4FFC  4B E3 99 9D */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802C80C0 002C5000  7F E3 FB 78 */	mr r3, r31
/* 802C80C4 002C5004  4B E3 F6 B9 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802C80C8 002C5008  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802C80CC 002C500C  38 80 FF FF */	li r4, -1
/* 802C80D0 002C5010  C0 22 E3 C8 */	lfs f1, lbl_8051C728@sda21(r2)
/* 802C80D4 002C5014  38 00 00 00 */	li r0, 0
/* 802C80D8 002C5018  54 65 05 24 */	rlwinm r5, r3, 0, 0x14, 0x12
/* 802C80DC 002C501C  7F E3 FB 78 */	mr r3, r31
/* 802C80E0 002C5020  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802C80E4 002C5024  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802C80E8 002C5028  54 A5 06 6E */	rlwinm r5, r5, 0, 0x19, 0x17
/* 802C80EC 002C502C  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802C80F0 002C5030  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 802C80F4 002C5034  90 9F 02 C4 */	stw r4, 0x2c4(r31)
/* 802C80F8 002C5038  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802C80FC 002C503C  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802C8100 002C5040  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802C8104 002C5044  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802C8108 002C5048  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802C810C 002C504C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802C8110 002C5050  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 802C8114 002C5054  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802C8118 002C5058  98 1F 02 DD */	stb r0, 0x2dd(r31)
/* 802C811C 002C505C  48 00 06 DD */	bl resetFlickWalkTimeMax__Q34Game7BigFoot3ObjFv
/* 802C8120 002C5060  38 00 00 00 */	li r0, 0
/* 802C8124 002C5064  7F E3 FB 78 */	mr r3, r31
/* 802C8128 002C5068  98 1F 02 DE */	stb r0, 0x2de(r31)
/* 802C812C 002C506C  48 00 0C E1 */	bl setupIKSystem__Q34Game7BigFoot3ObjFv
/* 802C8130 002C5070  7F E3 FB 78 */	mr r3, r31
/* 802C8134 002C5074  48 00 11 AD */	bl setupShadowSystem__Q34Game7BigFoot3ObjFv
/* 802C8138 002C5078  7F E3 FB 78 */	mr r3, r31
/* 802C813C 002C507C  48 00 13 BD */	bl setupCollision__Q34Game7BigFoot3ObjFv
/* 802C8140 002C5080  7F E3 FB 78 */	mr r3, r31
/* 802C8144 002C5084  48 00 22 25 */	bl setupEffect__Q34Game7BigFoot3ObjFv
/* 802C8148 002C5088  7F E3 FB 78 */	mr r3, r31
/* 802C814C 002C508C  48 00 2D 99 */	bl startFurEffect__Q34Game7BigFoot3ObjFv
/* 802C8150 002C5090  7F E3 FB 78 */	mr r3, r31
/* 802C8154 002C5094  48 00 19 D5 */	bl resetBossAppearBGM__Q34Game7BigFoot3ObjFv
/* 802C8158 002C5098  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802C815C 002C509C  7F E4 FB 78 */	mr r4, r31
/* 802C8160 002C50A0  4B F7 9B 91 */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802C8164 002C50A4  7F E3 FB 78 */	mr r3, r31
/* 802C8168 002C50A8  48 00 12 65 */	bl startMaterialAnimation__Q34Game7BigFoot3ObjFv
/* 802C816C 002C50AC  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802C8170 002C50B0  7F E4 FB 78 */	mr r4, r31
/* 802C8174 002C50B4  38 A0 00 01 */	li r5, 1
/* 802C8178 002C50B8  38 C0 00 00 */	li r6, 0
/* 802C817C 002C50BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802C8180 002C50C0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802C8184 002C50C4  7D 89 03 A6 */	mtctr r12
/* 802C8188 002C50C8  4E 80 04 21 */	bctrl 
/* 802C818C 002C50CC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802C8190 002C50D0  28 03 00 00 */	cmplwi r3, 0
/* 802C8194 002C50D4  41 82 00 34 */	beq .L_802C81C8
/* 802C8198 002C50D8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802C819C 002C50DC  2C 00 00 04 */	cmpwi r0, 4
/* 802C81A0 002C50E0  40 82 00 28 */	bne .L_802C81C8
/* 802C81A4 002C50E4  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802C81A8 002C50E8  7F E4 FB 78 */	mr r4, r31
/* 802C81AC 002C50EC  38 A0 00 02 */	li r5, 2
/* 802C81B0 002C50F0  38 C0 00 00 */	li r6, 0
/* 802C81B4 002C50F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802C81B8 002C50F8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802C81BC 002C50FC  7D 89 03 A6 */	mtctr r12
/* 802C81C0 002C5100  4E 80 04 21 */	bctrl 
/* 802C81C4 002C5104  48 00 00 18 */	b .L_802C81DC
.L_802C81C8:
/* 802C81C8 002C5108  7F E3 FB 78 */	mr r3, r31
/* 802C81CC 002C510C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C81D0 002C5110  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 802C81D4 002C5114  7D 89 03 A6 */	mtctr r12
/* 802C81D8 002C5118  4E 80 04 21 */	bctrl 
.L_802C81DC:
/* 802C81DC 002C511C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C81E0 002C5120  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C81E4 002C5124  7C 08 03 A6 */	mtlr r0
/* 802C81E8 002C5128  38 21 00 10 */	addi r1, r1, 0x10
/* 802C81EC 002C512C  4E 80 00 20 */	blr 

.global onKill__Q34Game7BigFoot3ObjFPQ24Game15CreatureKillArg
onKill__Q34Game7BigFoot3ObjFPQ24Game15CreatureKillArg:
/* 802C81F0 002C5130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C81F4 002C5134  7C 08 02 A6 */	mflr r0
/* 802C81F8 002C5138  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C81FC 002C513C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8200 002C5140  7C 9F 23 78 */	mr r31, r4
/* 802C8204 002C5144  93 C1 00 08 */	stw r30, 8(r1)
/* 802C8208 002C5148  7C 7E 1B 78 */	mr r30, r3
/* 802C820C 002C514C  48 00 2D 4D */	bl finishFurEffect__Q34Game7BigFoot3ObjFv
/* 802C8210 002C5150  7F C3 F3 78 */	mr r3, r30
/* 802C8214 002C5154  7F E4 FB 78 */	mr r4, r31
/* 802C8218 002C5158  4B E3 9C D1 */	bl onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
/* 802C821C 002C515C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8220 002C5160  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C8224 002C5164  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C8228 002C5168  7C 08 03 A6 */	mtlr r0
/* 802C822C 002C516C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8230 002C5170  4E 80 00 20 */	blr 

.global doUpdate__Q34Game7BigFoot3ObjFv
doUpdate__Q34Game7BigFoot3ObjFv:
/* 802C8234 002C5174  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8238 002C5178  7C 08 02 A6 */	mflr r0
/* 802C823C 002C517C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8240 002C5180  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8244 002C5184  7C 7F 1B 78 */	mr r31, r3
/* 802C8248 002C5188  7F E4 FB 78 */	mr r4, r31
/* 802C824C 002C518C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802C8250 002C5190  81 83 00 00 */	lwz r12, 0(r3)
/* 802C8254 002C5194  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802C8258 002C5198  7D 89 03 A6 */	mtctr r12
/* 802C825C 002C519C  4E 80 04 21 */	bctrl 
/* 802C8260 002C51A0  7F E3 FB 78 */	mr r3, r31
/* 802C8264 002C51A4  48 00 2A 2D */	bl updatePinchLife__Q34Game7BigFoot3ObjFv
/* 802C8268 002C51A8  7F E3 FB 78 */	mr r3, r31
/* 802C826C 002C51AC  48 00 0E 09 */	bl updateIKSystem__Q34Game7BigFoot3ObjFv
/* 802C8270 002C51B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8274 002C51B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C8278 002C51B8  7C 08 03 A6 */	mtlr r0
/* 802C827C 002C51BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8280 002C51C0  4E 80 00 20 */	blr 

.global doUpdateCommon__Q34Game7BigFoot3ObjFv
doUpdateCommon__Q34Game7BigFoot3ObjFv:
/* 802C8284 002C51C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8288 002C51C8  7C 08 02 A6 */	mflr r0
/* 802C828C 002C51CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8290 002C51D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8294 002C51D4  7C 7F 1B 78 */	mr r31, r3
/* 802C8298 002C51D8  4B E3 AC 7D */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802C829C 002C51DC  7F E3 FB 78 */	mr r3, r31
/* 802C82A0 002C51E0  48 00 17 8D */	bl updateBossBGM__Q34Game7BigFoot3ObjFv
/* 802C82A4 002C51E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C82A8 002C51E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C82AC 002C51EC  7C 08 03 A6 */	mtlr r0
/* 802C82B0 002C51F0  38 21 00 10 */	addi r1, r1, 0x10
/* 802C82B4 002C51F4  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game7BigFoot3ObjFv
doAnimationCullingOff__Q34Game7BigFoot3ObjFv:
/* 802C82B8 002C51F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C82BC 002C51FC  7C 08 02 A6 */	mflr r0
/* 802C82C0 002C5200  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C82C4 002C5204  38 00 00 00 */	li r0, 0
/* 802C82C8 002C5208  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C82CC 002C520C  7C 7F 1B 78 */	mr r31, r3
/* 802C82D0 002C5210  80 83 01 88 */	lwz r4, 0x188(r3)
/* 802C82D4 002C5214  98 04 00 24 */	stb r0, 0x24(r4)
/* 802C82D8 002C5218  81 83 00 00 */	lwz r12, 0(r3)
/* 802C82DC 002C521C  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 802C82E0 002C5220  7D 89 03 A6 */	mtctr r12
/* 802C82E4 002C5224  4E 80 04 21 */	bctrl 
/* 802C82E8 002C5228  7F E3 FB 78 */	mr r3, r31
/* 802C82EC 002C522C  48 00 0D E9 */	bl doAnimationIKSystem__Q34Game7BigFoot3ObjFv
/* 802C82F0 002C5230  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802C82F4 002C5234  38 7F 01 38 */	addi r3, r31, 0x138
/* 802C82F8 002C5238  80 84 00 08 */	lwz r4, 8(r4)
/* 802C82FC 002C523C  38 84 00 24 */	addi r4, r4, 0x24
/* 802C8300 002C5240  4B E2 1F CD */	bl PSMTXCopy
/* 802C8304 002C5244  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802C8308 002C5248  80 63 00 08 */	lwz r3, 8(r3)
/* 802C830C 002C524C  81 83 00 00 */	lwz r12, 0(r3)
/* 802C8310 002C5250  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802C8314 002C5254  7D 89 03 A6 */	mtctr r12
/* 802C8318 002C5258  4E 80 04 21 */	bctrl 
/* 802C831C 002C525C  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802C8320 002C5260  4B E6 D7 7D */	bl update__8CollTreeFv
/* 802C8324 002C5264  7F E3 FB 78 */	mr r3, r31
/* 802C8328 002C5268  48 00 10 2D */	bl doAnimationShadowSystem__Q34Game7BigFoot3ObjFv
/* 802C832C 002C526C  7F E3 FB 78 */	mr r3, r31
/* 802C8330 002C5270  48 00 10 D9 */	bl updateMaterialAnimation__Q34Game7BigFoot3ObjFv
/* 802C8334 002C5274  7F E3 FB 78 */	mr r3, r31
/* 802C8338 002C5278  48 00 0D FD */	bl finishAnimationIKSystem__Q34Game7BigFoot3ObjFv
/* 802C833C 002C527C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8340 002C5280  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C8344 002C5284  7C 08 03 A6 */	mtlr r0
/* 802C8348 002C5288  38 21 00 10 */	addi r1, r1, 0x10
/* 802C834C 002C528C  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game7BigFoot3ObjFR8Graphics
doDirectDraw__Q34Game7BigFoot3ObjFR8Graphics:
/* 802C8350 002C5290  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game7BigFoot3ObjFR8Graphics
doDebugDraw__Q34Game7BigFoot3ObjFR8Graphics:
/* 802C8354 002C5294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8358 002C5298  7C 08 02 A6 */	mflr r0
/* 802C835C 002C529C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8360 002C52A0  4B E3 DB 0D */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802C8364 002C52A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8368 002C52A8  7C 08 03 A6 */	mtlr r0
/* 802C836C 002C52AC  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8370 002C52B0  4E 80 00 20 */	blr 

.global setFSM__Q34Game7BigFoot3ObjFPQ34Game7BigFoot3FSM
setFSM__Q34Game7BigFoot3ObjFPQ34Game7BigFoot3FSM:
/* 802C8374 002C52B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8378 002C52B8  7C 08 02 A6 */	mflr r0
/* 802C837C 002C52BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8380 002C52C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8384 002C52C4  7C 7F 1B 78 */	mr r31, r3
/* 802C8388 002C52C8  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802C838C 002C52CC  7F E4 FB 78 */	mr r4, r31
/* 802C8390 002C52D0  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802C8394 002C52D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802C8398 002C52D8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802C839C 002C52DC  7D 89 03 A6 */	mtctr r12
/* 802C83A0 002C52E0  4E 80 04 21 */	bctrl 
/* 802C83A4 002C52E4  38 00 00 00 */	li r0, 0
/* 802C83A8 002C52E8  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802C83AC 002C52EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C83B0 002C52F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C83B4 002C52F4  7C 08 03 A6 */	mtlr r0
/* 802C83B8 002C52F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C83BC 002C52FC  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game7BigFoot3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game7BigFoot3ObjFRQ24Game11ShadowParam:
/* 802C83C0 002C5300  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802C83C4 002C5304  C0 42 E3 C8 */	lfs f2, lbl_8051C728@sda21(r2)
/* 802C83C8 002C5308  D0 04 00 00 */	stfs f0, 0(r4)
/* 802C83CC 002C530C  C0 22 E3 CC */	lfs f1, lbl_8051C72C@sda21(r2)
/* 802C83D0 002C5310  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 802C83D4 002C5314  C0 02 E3 D0 */	lfs f0, lbl_8051C730@sda21(r2)
/* 802C83D8 002C5318  D0 64 00 04 */	stfs f3, 4(r4)
/* 802C83DC 002C531C  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 802C83E0 002C5320  D0 64 00 08 */	stfs f3, 8(r4)
/* 802C83E4 002C5324  D0 44 00 0C */	stfs f2, 0xc(r4)
/* 802C83E8 002C5328  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 802C83EC 002C532C  D0 44 00 14 */	stfs f2, 0x14(r4)
/* 802C83F0 002C5330  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 802C83F4 002C5334  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 802C83F8 002C5338  4E 80 00 20 */	blr 

.global needShadow__Q34Game7BigFoot3ObjFv
needShadow__Q34Game7BigFoot3ObjFv:
/* 802C83FC 002C533C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8400 002C5340  7C 08 02 A6 */	mflr r0
/* 802C8404 002C5344  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8408 002C5348  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C840C 002C534C  7C 7F 1B 78 */	mr r31, r3
/* 802C8410 002C5350  4B E3 F0 01 */	bl needShadow__Q24Game9EnemyBaseFv
/* 802C8414 002C5354  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C8418 002C5358  41 82 00 0C */	beq .L_802C8424
/* 802C841C 002C535C  38 60 00 01 */	li r3, 1
/* 802C8420 002C5360  48 00 00 18 */	b .L_802C8438
.L_802C8424:
/* 802C8424 002C5364  7F E3 FB 78 */	mr r3, r31
/* 802C8428 002C5368  4B E3 EF CD */	bl getStateID__Q24Game9EnemyBaseFv
/* 802C842C 002C536C  20 03 00 02 */	subfic r0, r3, 2
/* 802C8430 002C5370  7C 00 00 34 */	cntlzw r0, r0
/* 802C8434 002C5374  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
.L_802C8438:
/* 802C8438 002C5378  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C843C 002C537C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C8440 002C5380  7C 08 03 A6 */	mtlr r0
/* 802C8444 002C5384  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8448 002C5388  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game7BigFoot3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game7BigFoot3ObjFPQ24Game8CreaturefP8CollPart:
/* 802C844C 002C538C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C8450 002C5390  7C 08 02 A6 */	mflr r0
/* 802C8454 002C5394  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C8458 002C5398  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802C845C 002C539C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802C8460 002C53A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8464 002C53A4  93 C1 00 08 */	stw r30, 8(r1)
/* 802C8468 002C53A8  7C 9F 23 79 */	or. r31, r4, r4
/* 802C846C 002C53AC  FF E0 08 90 */	fmr f31, f1
/* 802C8470 002C53B0  7C 7E 1B 78 */	mr r30, r3
/* 802C8474 002C53B4  41 82 00 50 */	beq .L_802C84C4
/* 802C8478 002C53B8  28 05 00 00 */	cmplwi r5, 0
/* 802C847C 002C53BC  41 82 00 48 */	beq .L_802C84C4
/* 802C8480 002C53C0  7F E3 FB 78 */	mr r3, r31
/* 802C8484 002C53C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C8488 002C53C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802C848C 002C53CC  7D 89 03 A6 */	mtctr r12
/* 802C8490 002C53D0  4E 80 04 21 */	bctrl 
/* 802C8494 002C53D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C8498 002C53D8  41 82 00 2C */	beq .L_802C84C4
/* 802C849C 002C53DC  7F E3 FB 78 */	mr r3, r31
/* 802C84A0 002C53E0  4B ED 70 D5 */	bl isStickTo__Q24Game8CreatureFv
/* 802C84A4 002C53E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C84A8 002C53E8  41 82 00 1C */	beq .L_802C84C4
/* 802C84AC 002C53EC  FC 20 F8 90 */	fmr f1, f31
/* 802C84B0 002C53F0  C0 42 E3 CC */	lfs f2, lbl_8051C72C@sda21(r2)
/* 802C84B4 002C53F4  7F C3 F3 78 */	mr r3, r30
/* 802C84B8 002C53F8  4B E3 DB 75 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802C84BC 002C53FC  38 60 00 01 */	li r3, 1
/* 802C84C0 002C5400  48 00 00 08 */	b .L_802C84C8
.L_802C84C4:
/* 802C84C4 002C5404  38 60 00 00 */	li r3, 0
.L_802C84C8:
/* 802C84C8 002C5408  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802C84CC 002C540C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C84D0 002C5410  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802C84D4 002C5414  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C84D8 002C5418  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C84DC 002C541C  7C 08 03 A6 */	mtlr r0
/* 802C84E0 002C5420  38 21 00 20 */	addi r1, r1, 0x20
/* 802C84E4 002C5424  4E 80 00 20 */	blr 

.global collisionCallback__Q34Game7BigFoot3ObjFRQ24Game9CollEvent
collisionCallback__Q34Game7BigFoot3ObjFRQ24Game9CollEvent:
/* 802C84E8 002C5428  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802C84EC 002C542C  7C 08 02 A6 */	mflr r0
/* 802C84F0 002C5430  90 01 00 44 */	stw r0, 0x44(r1)
/* 802C84F4 002C5434  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802C84F8 002C5438  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802C84FC 002C543C  7C 9E 23 78 */	mr r30, r4
/* 802C8500 002C5440  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802C8504 002C5444  7C 7D 1B 78 */	mr r29, r3
/* 802C8508 002C5448  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802C850C 002C544C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802C8510 002C5450  40 82 01 50 */	bne .L_802C8660
/* 802C8514 002C5454  83 FE 00 00 */	lwz r31, 0(r30)
/* 802C8518 002C5458  28 1F 00 00 */	cmplwi r31, 0
/* 802C851C 002C545C  41 82 01 44 */	beq .L_802C8660
/* 802C8520 002C5460  80 1E 00 04 */	lwz r0, 4(r30)
/* 802C8524 002C5464  28 00 00 00 */	cmplwi r0, 0
/* 802C8528 002C5468  41 82 01 38 */	beq .L_802C8660
/* 802C852C 002C546C  7F E3 FB 78 */	mr r3, r31
/* 802C8530 002C5470  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C8534 002C5474  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802C8538 002C5478  7D 89 03 A6 */	mtctr r12
/* 802C853C 002C547C  4E 80 04 21 */	bctrl 
/* 802C8540 002C5480  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C8544 002C5484  41 82 01 1C */	beq .L_802C8660
/* 802C8548 002C5488  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 802C854C 002C548C  28 00 00 00 */	cmplwi r0, 0
/* 802C8550 002C5490  41 82 01 10 */	beq .L_802C8660
/* 802C8554 002C5494  7F E3 FB 78 */	mr r3, r31
/* 802C8558 002C5498  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C855C 002C549C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C8560 002C54A0  7D 89 03 A6 */	mtctr r12
/* 802C8564 002C54A4  4E 80 04 21 */	bctrl 
/* 802C8568 002C54A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C856C 002C54AC  40 82 00 20 */	bne .L_802C858C
/* 802C8570 002C54B0  7F E3 FB 78 */	mr r3, r31
/* 802C8574 002C54B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C8578 002C54B8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802C857C 002C54BC  7D 89 03 A6 */	mtctr r12
/* 802C8580 002C54C0  4E 80 04 21 */	bctrl 
/* 802C8584 002C54C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C8588 002C54C8  41 82 00 64 */	beq .L_802C85EC
.L_802C858C:
/* 802C858C 002C54CC  80 9E 00 08 */	lwz r4, 8(r30)
/* 802C8590 002C54D0  7F A3 EB 78 */	mr r3, r29
/* 802C8594 002C54D4  48 00 0C E1 */	bl isCollisionCheck__Q34Game7BigFoot3ObjFP8CollPart
/* 802C8598 002C54D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C859C 002C54DC  41 82 00 C4 */	beq .L_802C8660
/* 802C85A0 002C54E0  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 802C85A4 002C54E4  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802C85A8 002C54E8  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 802C85AC 002C54EC  38 00 00 00 */	li r0, 0
/* 802C85B0 002C54F0  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 802C85B4 002C54F4  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 802C85B8 002C54F8  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 802C85BC 002C54FC  7F E3 FB 78 */	mr r3, r31
/* 802C85C0 002C5500  90 81 00 18 */	stw r4, 0x18(r1)
/* 802C85C4 002C5504  38 81 00 18 */	addi r4, r1, 0x18
/* 802C85C8 002C5508  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 802C85CC 002C550C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802C85D0 002C5510  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802C85D4 002C5514  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C85D8 002C5518  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C85DC 002C551C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802C85E0 002C5520  7D 89 03 A6 */	mtctr r12
/* 802C85E4 002C5524  4E 80 04 21 */	bctrl 
/* 802C85E8 002C5528  48 00 00 78 */	b .L_802C8660
.L_802C85EC:
/* 802C85EC 002C552C  7F E3 FB 78 */	mr r3, r31
/* 802C85F0 002C5530  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C85F4 002C5534  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 802C85F8 002C5538  7D 89 03 A6 */	mtctr r12
/* 802C85FC 002C553C  4E 80 04 21 */	bctrl 
/* 802C8600 002C5540  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C8604 002C5544  41 82 00 5C */	beq .L_802C8660
/* 802C8608 002C5548  80 9E 00 08 */	lwz r4, 8(r30)
/* 802C860C 002C554C  7F A3 EB 78 */	mr r3, r29
/* 802C8610 002C5550  48 00 0C 65 */	bl isCollisionCheck__Q34Game7BigFoot3ObjFP8CollPart
/* 802C8614 002C5554  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C8618 002C5558  41 82 00 48 */	beq .L_802C8660
/* 802C861C 002C555C  80 BE 00 04 */	lwz r5, 4(r30)
/* 802C8620 002C5560  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802C8624 002C5564  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802C8628 002C5568  C0 02 E3 D4 */	lfs f0, lbl_8051C734@sda21(r2)
/* 802C862C 002C556C  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 802C8630 002C5570  90 01 00 08 */	stw r0, 8(r1)
/* 802C8634 002C5574  38 03 4D E0 */	addi r0, r3, __vt__Q24Game14InteractAttack@l
/* 802C8638 002C5578  7F E3 FB 78 */	mr r3, r31
/* 802C863C 002C557C  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802C8640 002C5580  38 81 00 08 */	addi r4, r1, 8
/* 802C8644 002C5584  90 01 00 08 */	stw r0, 8(r1)
/* 802C8648 002C5588  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802C864C 002C558C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802C8650 002C5590  81 9F 00 00 */	lwz r12, 0(r31)
/* 802C8654 002C5594  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802C8658 002C5598  7D 89 03 A6 */	mtctr r12
/* 802C865C 002C559C  4E 80 04 21 */	bctrl 
.L_802C8660:
/* 802C8660 002C55A0  7F A3 EB 78 */	mr r3, r29
/* 802C8664 002C55A4  7F C4 F3 78 */	mr r4, r30
/* 802C8668 002C55A8  81 9D 00 00 */	lwz r12, 0(r29)
/* 802C866C 002C55AC  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 802C8670 002C55B0  7D 89 03 A6 */	mtctr r12
/* 802C8674 002C55B4  4E 80 04 21 */	bctrl 
/* 802C8678 002C55B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802C867C 002C55BC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802C8680 002C55C0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802C8684 002C55C4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802C8688 002C55C8  7C 08 03 A6 */	mtlr r0
/* 802C868C 002C55CC  38 21 00 40 */	addi r1, r1, 0x40
/* 802C8690 002C55D0  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game7BigFoot3ObjFv
doStartStoneState__Q34Game7BigFoot3ObjFv:
/* 802C8694 002C55D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8698 002C55D8  7C 08 02 A6 */	mflr r0
/* 802C869C 002C55DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C86A0 002C55E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C86A4 002C55E4  7C 7F 1B 78 */	mr r31, r3
/* 802C86A8 002C55E8  4B E3 A8 4D */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802C86AC 002C55EC  7F E3 FB 78 */	mr r3, r31
/* 802C86B0 002C55F0  48 00 23 C9 */	bl finishPinchJointEffect__Q34Game7BigFoot3ObjFv
/* 802C86B4 002C55F4  7F E3 FB 78 */	mr r3, r31
/* 802C86B8 002C55F8  48 00 28 A1 */	bl finishFurEffect__Q34Game7BigFoot3ObjFv
/* 802C86BC 002C55FC  7F E3 FB 78 */	mr r3, r31
/* 802C86C0 002C5600  48 00 11 C5 */	bl startStoneStateBossAttackLoopBGM__Q34Game7BigFoot3ObjFv
/* 802C86C4 002C5604  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C86C8 002C5608  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C86CC 002C560C  7C 08 03 A6 */	mtlr r0
/* 802C86D0 002C5610  38 21 00 10 */	addi r1, r1, 0x10
/* 802C86D4 002C5614  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game7BigFoot3ObjFv
doFinishStoneState__Q34Game7BigFoot3ObjFv:
/* 802C86D8 002C5618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C86DC 002C561C  7C 08 02 A6 */	mflr r0
/* 802C86E0 002C5620  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C86E4 002C5624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C86E8 002C5628  7C 7F 1B 78 */	mr r31, r3
/* 802C86EC 002C562C  4B E3 A8 1D */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802C86F0 002C5630  C0 22 E3 CC */	lfs f1, lbl_8051C72C@sda21(r2)
/* 802C86F4 002C5634  7F E3 FB 78 */	mr r3, r31
/* 802C86F8 002C5638  C0 42 E3 D8 */	lfs f2, lbl_8051C738@sda21(r2)
/* 802C86FC 002C563C  38 80 00 00 */	li r4, 0
/* 802C8700 002C5640  C0 62 E3 C8 */	lfs f3, lbl_8051C728@sda21(r2)
/* 802C8704 002C5644  C0 82 E3 DC */	lfs f4, lbl_8051C73C@sda21(r2)
/* 802C8708 002C5648  4B E4 AA 15 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802C870C 002C564C  88 1F 02 DD */	lbz r0, 0x2dd(r31)
/* 802C8710 002C5650  28 00 00 00 */	cmplwi r0, 0
/* 802C8714 002C5654  41 82 00 0C */	beq .L_802C8720
/* 802C8718 002C5658  7F E3 FB 78 */	mr r3, r31
/* 802C871C 002C565C  48 00 21 BD */	bl startPinchJointEffect__Q34Game7BigFoot3ObjFv
.L_802C8720:
/* 802C8720 002C5660  7F E3 FB 78 */	mr r3, r31
/* 802C8724 002C5664  48 00 27 C1 */	bl startFurEffect__Q34Game7BigFoot3ObjFv
/* 802C8728 002C5668  7F E3 FB 78 */	mr r3, r31
/* 802C872C 002C566C  48 00 12 2D */	bl finishStoneStateBossAttackLoopBGM__Q34Game7BigFoot3ObjFv
/* 802C8730 002C5670  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8734 002C5674  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C8738 002C5678  7C 08 03 A6 */	mtlr r0
/* 802C873C 002C567C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8740 002C5680  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game7BigFoot3ObjFv
doStartMovie__Q34Game7BigFoot3ObjFv:
/* 802C8744 002C5684  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8748 002C5688  7C 08 02 A6 */	mflr r0
/* 802C874C 002C568C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8750 002C5690  48 00 2A B5 */	bl effectDrawOff__Q34Game7BigFoot3ObjFv
/* 802C8754 002C5694  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8758 002C5698  7C 08 03 A6 */	mtlr r0
/* 802C875C 002C569C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8760 002C56A0  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game7BigFoot3ObjFv
doEndMovie__Q34Game7BigFoot3ObjFv:
/* 802C8764 002C56A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8768 002C56A8  7C 08 02 A6 */	mflr r0
/* 802C876C 002C56AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8770 002C56B0  48 00 28 BD */	bl effectDrawOn__Q34Game7BigFoot3ObjFv
/* 802C8774 002C56B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8778 002C56B8  7C 08 03 A6 */	mtlr r0
/* 802C877C 002C56BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8780 002C56C0  4E 80 00 20 */	blr 

.global "getThrowupItemPosition__Q34Game7BigFoot3ObjFP10Vector3<f>"
"getThrowupItemPosition__Q34Game7BigFoot3ObjFP10Vector3<f>":
/* 802C8784 002C56C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8788 002C56C8  7C 08 02 A6 */	mflr r0
/* 802C878C 002C56CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8790 002C56D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8794 002C56D4  7C 9F 23 78 */	mr r31, r4
/* 802C8798 002C56D8  38 82 E3 E0 */	addi r4, r2, lbl_8051C740@sda21
/* 802C879C 002C56DC  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802C87A0 002C56E0  48 17 68 45 */	bl getJoint__Q28SysShape5ModelFPc
/* 802C87A4 002C56E4  48 16 10 FD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802C87A8 002C56E8  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 802C87AC 002C56EC  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802C87B0 002C56F0  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 802C87B4 002C56F4  C0 02 E3 E8 */	lfs f0, lbl_8051C748@sda21(r2)
/* 802C87B8 002C56F8  D0 3F 00 00 */	stfs f1, 0(r31)
/* 802C87BC 002C56FC  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802C87C0 002C5700  D0 7F 00 08 */	stfs f3, 8(r31)
/* 802C87C4 002C5704  C0 3F 00 04 */	lfs f1, 4(r31)
/* 802C87C8 002C5708  EC 01 00 28 */	fsubs f0, f1, f0
/* 802C87CC 002C570C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802C87D0 002C5710  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C87D4 002C5714  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C87D8 002C5718  7C 08 03 A6 */	mtlr r0
/* 802C87DC 002C571C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C87E0 002C5720  4E 80 00 20 */	blr 

.global "getThrowupItemVelocity__Q34Game7BigFoot3ObjFP10Vector3<f>"
"getThrowupItemVelocity__Q34Game7BigFoot3ObjFP10Vector3<f>":
/* 802C87E4 002C5724  C0 02 E3 C8 */	lfs f0, lbl_8051C728@sda21(r2)
/* 802C87E8 002C5728  D0 04 00 08 */	stfs f0, 8(r4)
/* 802C87EC 002C572C  D0 04 00 04 */	stfs f0, 4(r4)
/* 802C87F0 002C5730  D0 04 00 00 */	stfs f0, 0(r4)
/* 802C87F4 002C5734  4E 80 00 20 */	blr 

.global resetFlickWalkTimeMax__Q34Game7BigFoot3ObjFv
resetFlickWalkTimeMax__Q34Game7BigFoot3ObjFv:
/* 802C87F8 002C5738  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802C87FC 002C573C  7C 08 02 A6 */	mflr r0
/* 802C8800 002C5740  90 01 00 44 */	stw r0, 0x44(r1)
/* 802C8804 002C5744  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802C8808 002C5748  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802C880C 002C574C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802C8810 002C5750  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802C8814 002C5754  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802C8818 002C5758  7C 7F 1B 78 */	mr r31, r3
/* 802C881C 002C575C  C0 02 E3 EC */	lfs f0, lbl_8051C74C@sda21(r2)
/* 802C8820 002C5760  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802C8824 002C5764  C3 E3 0A 24 */	lfs f31, 0xa24(r3)
/* 802C8828 002C5768  EF C0 07 F2 */	fmuls f30, f0, f31
/* 802C882C 002C576C  4B E0 0D 75 */	bl rand
/* 802C8830 002C5770  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802C8834 002C5774  3C 00 43 30 */	lis r0, 0x4330
/* 802C8838 002C5778  90 61 00 0C */	stw r3, 0xc(r1)
/* 802C883C 002C577C  C8 42 E3 F8 */	lfd f2, lbl_8051C758@sda21(r2)
/* 802C8840 002C5780  90 01 00 08 */	stw r0, 8(r1)
/* 802C8844 002C5784  C0 02 E3 F0 */	lfs f0, lbl_8051C750@sda21(r2)
/* 802C8848 002C5788  C8 21 00 08 */	lfd f1, 8(r1)
/* 802C884C 002C578C  EC 21 10 28 */	fsubs f1, f1, f2
/* 802C8850 002C5790  EC 3F 00 72 */	fmuls f1, f31, f1
/* 802C8854 002C5794  EC 01 00 24 */	fdivs f0, f1, f0
/* 802C8858 002C5798  EC 1E 00 2A */	fadds f0, f30, f0
/* 802C885C 002C579C  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802C8860 002C57A0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802C8864 002C57A4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802C8868 002C57A8  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802C886C 002C57AC  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802C8870 002C57B0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802C8874 002C57B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802C8878 002C57B8  7C 08 03 A6 */	mtlr r0
/* 802C887C 002C57BC  38 21 00 40 */	addi r1, r1, 0x40
/* 802C8880 002C57C0  4E 80 00 20 */	blr 

.global setFlickWalkTimeMax__Q34Game7BigFoot3ObjFv
setFlickWalkTimeMax__Q34Game7BigFoot3ObjFv:
/* 802C8884 002C57C4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802C8888 002C57C8  7C 08 02 A6 */	mflr r0
/* 802C888C 002C57CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802C8890 002C57D0  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802C8894 002C57D4  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802C8898 002C57D8  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802C889C 002C57DC  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802C88A0 002C57E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802C88A4 002C57E4  7C 7F 1B 78 */	mr r31, r3
/* 802C88A8 002C57E8  C0 02 E3 EC */	lfs f0, lbl_8051C74C@sda21(r2)
/* 802C88AC 002C57EC  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 802C88B0 002C57F0  C3 E3 0A 4C */	lfs f31, 0xa4c(r3)
/* 802C88B4 002C57F4  EF C0 07 F2 */	fmuls f30, f0, f31
/* 802C88B8 002C57F8  4B E0 0C E9 */	bl rand
/* 802C88BC 002C57FC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802C88C0 002C5800  3C 00 43 30 */	lis r0, 0x4330
/* 802C88C4 002C5804  90 61 00 0C */	stw r3, 0xc(r1)
/* 802C88C8 002C5808  C8 42 E3 F8 */	lfd f2, lbl_8051C758@sda21(r2)
/* 802C88CC 002C580C  90 01 00 08 */	stw r0, 8(r1)
/* 802C88D0 002C5810  C0 02 E3 F0 */	lfs f0, lbl_8051C750@sda21(r2)
/* 802C88D4 002C5814  C8 21 00 08 */	lfd f1, 8(r1)
/* 802C88D8 002C5818  EC 21 10 28 */	fsubs f1, f1, f2
/* 802C88DC 002C581C  EC 3F 00 72 */	fmuls f1, f31, f1
/* 802C88E0 002C5820  EC 01 00 24 */	fdivs f0, f1, f0
/* 802C88E4 002C5824  EC 1E 00 2A */	fadds f0, f30, f0
/* 802C88E8 002C5828  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802C88EC 002C582C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802C88F0 002C5830  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802C88F4 002C5834  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802C88F8 002C5838  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802C88FC 002C583C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802C8900 002C5840  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802C8904 002C5844  7C 08 03 A6 */	mtlr r0
/* 802C8908 002C5848  38 21 00 40 */	addi r1, r1, 0x40
/* 802C890C 002C584C  4E 80 00 20 */	blr 

.global getTargetPosition__Q34Game7BigFoot3ObjFv
getTargetPosition__Q34Game7BigFoot3ObjFv:
/* 802C8910 002C5850  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802C8914 002C5854  7C 08 02 A6 */	mflr r0
/* 802C8918 002C5858  90 01 00 84 */	stw r0, 0x84(r1)
/* 802C891C 002C585C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802C8920 002C5860  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802C8924 002C5864  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802C8928 002C5868  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802C892C 002C586C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 802C8930 002C5870  7C 7F 1B 78 */	mr r31, r3
/* 802C8934 002C5874  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802C8938 002C5878  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802C893C 002C587C  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802C8940 002C5880  EC 41 00 28 */	fsubs f2, f1, f0
/* 802C8944 002C5884  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 802C8948 002C5888  C0 83 01 98 */	lfs f4, 0x198(r3)
/* 802C894C 002C588C  C0 07 03 5C */	lfs f0, 0x35c(r7)
/* 802C8950 002C5890  EC 61 20 28 */	fsubs f3, f1, f4
/* 802C8954 002C5894  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802C8958 002C5898  EC 00 00 32 */	fmuls f0, f0, f0
/* 802C895C 002C589C  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802C8960 002C58A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802C8964 002C58A4  40 80 03 58 */	bge .L_802C8CBC
/* 802C8968 002C58A8  88 1F 02 DE */	lbz r0, 0x2de(r31)
/* 802C896C 002C58AC  28 00 00 00 */	cmplwi r0, 0
/* 802C8970 002C58B0  41 82 01 2C */	beq .L_802C8A9C
/* 802C8974 002C58B4  80 7F 02 E4 */	lwz r3, 0x2e4(r31)
/* 802C8978 002C58B8  C0 22 E4 00 */	lfs f1, lbl_8051C760@sda21(r2)
/* 802C897C 002C58BC  C0 03 00 34 */	lfs f0, 0x34(r3)
/* 802C8980 002C58C0  EF C1 00 32 */	fmuls f30, f1, f0
/* 802C8984 002C58C4  4B E0 0C 1D */	bl rand
/* 802C8988 002C58C8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802C898C 002C58CC  3C 00 43 30 */	lis r0, 0x4330
/* 802C8990 002C58D0  90 61 00 24 */	stw r3, 0x24(r1)
/* 802C8994 002C58D4  80 9F 02 E4 */	lwz r4, 0x2e4(r31)
/* 802C8998 002C58D8  90 01 00 20 */	stw r0, 0x20(r1)
/* 802C899C 002C58DC  C8 22 E3 F8 */	lfd f1, lbl_8051C758@sda21(r2)
/* 802C89A0 002C58E0  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802C89A4 002C58E4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802C89A8 002C58E8  EC 00 08 28 */	fsubs f0, f0, f1
/* 802C89AC 002C58EC  C0 62 E3 F0 */	lfs f3, lbl_8051C750@sda21(r2)
/* 802C89B0 002C58F0  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 802C89B4 002C58F4  C0 42 E4 08 */	lfs f2, lbl_8051C768@sda21(r2)
/* 802C89B8 002C58F8  EC DE 00 32 */	fmuls f6, f30, f0
/* 802C89BC 002C58FC  C0 82 E4 04 */	lfs f4, lbl_8051C764@sda21(r2)
/* 802C89C0 002C5900  C0 BF 01 FC */	lfs f5, 0x1fc(r31)
/* 802C89C4 002C5904  C0 02 E3 C8 */	lfs f0, lbl_8051C728@sda21(r2)
/* 802C89C8 002C5908  EC C6 18 24 */	fdivs f6, f6, f3
/* 802C89CC 002C590C  C0 63 09 FC */	lfs f3, 0x9fc(r3)
/* 802C89D0 002C5910  EC 26 08 28 */	fsubs f1, f6, f1
/* 802C89D4 002C5914  EC 22 00 72 */	fmuls f1, f2, f1
/* 802C89D8 002C5918  EC 24 00 72 */	fmuls f1, f4, f1
/* 802C89DC 002C591C  EC 85 08 2A */	fadds f4, f5, f1
/* 802C89E0 002C5920  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802C89E4 002C5924  40 80 00 30 */	bge .L_802C8A14
/* 802C89E8 002C5928  C0 02 E4 0C */	lfs f0, lbl_8051C76C@sda21(r2)
/* 802C89EC 002C592C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C89F0 002C5930  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802C89F4 002C5934  EC 04 00 32 */	fmuls f0, f4, f0
/* 802C89F8 002C5938  FC 00 00 1E */	fctiwz f0, f0
/* 802C89FC 002C593C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802C8A00 002C5940  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802C8A04 002C5944  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C8A08 002C5948  7C 03 04 2E */	lfsx f0, r3, r0
/* 802C8A0C 002C594C  FC 40 00 50 */	fneg f2, f0
/* 802C8A10 002C5950  48 00 00 28 */	b .L_802C8A38
.L_802C8A14:
/* 802C8A14 002C5954  C0 02 E4 10 */	lfs f0, lbl_8051C770@sda21(r2)
/* 802C8A18 002C5958  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C8A1C 002C595C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802C8A20 002C5960  EC 04 00 32 */	fmuls f0, f4, f0
/* 802C8A24 002C5964  FC 00 00 1E */	fctiwz f0, f0
/* 802C8A28 002C5968  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802C8A2C 002C596C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802C8A30 002C5970  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C8A34 002C5974  7C 43 04 2E */	lfsx f2, r3, r0
.L_802C8A38:
/* 802C8A38 002C5978  C0 3F 01 8C */	lfs f1, 0x18c(r31)
/* 802C8A3C 002C597C  C0 02 E3 C8 */	lfs f0, lbl_8051C728@sda21(r2)
/* 802C8A40 002C5980  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802C8A44 002C5984  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 802C8A48 002C5988  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 802C8A4C 002C598C  C0 1F 01 90 */	lfs f0, 0x190(r31)
/* 802C8A50 002C5990  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802C8A54 002C5994  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802C8A58 002C5998  40 80 00 08 */	bge .L_802C8A60
/* 802C8A5C 002C599C  FC 80 20 50 */	fneg f4, f4
.L_802C8A60:
/* 802C8A60 002C59A0  C0 02 E4 10 */	lfs f0, lbl_8051C770@sda21(r2)
/* 802C8A64 002C59A4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C8A68 002C59A8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802C8A6C 002C59AC  C0 44 09 FC */	lfs f2, 0x9fc(r4)
/* 802C8A70 002C59B0  EC 24 00 32 */	fmuls f1, f4, f0
/* 802C8A74 002C59B4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 802C8A78 002C59B8  FC 20 08 1E */	fctiwz f1, f1
/* 802C8A7C 002C59BC  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 802C8A80 002C59C0  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802C8A84 002C59C4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C8A88 002C59C8  7C 63 02 14 */	add r3, r3, r0
/* 802C8A8C 002C59CC  C0 23 00 04 */	lfs f1, 4(r3)
/* 802C8A90 002C59D0  EC 02 00 7A */	fmadds f0, f2, f1, f0
/* 802C8A94 002C59D4  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802C8A98 002C59D8  48 00 02 38 */	b .L_802C8CD0
.L_802C8A9C:
/* 802C8A9C 002C59DC  3C A0 80 4B */	lis r5, "__vt__23Condition<Q24Game4Piki>"@ha
/* 802C8AA0 002C59E0  3C 80 80 4D */	lis r4, __vt__Q24Game23ConditionNotStickClient@ha
/* 802C8AA4 002C59E4  38 C5 BC 60 */	addi r6, r5, "__vt__23Condition<Q24Game4Piki>"@l
/* 802C8AA8 002C59E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8AAC 002C59EC  38 04 DB 70 */	addi r0, r4, __vt__Q24Game23ConditionNotStickClient@l
/* 802C8AB0 002C59F0  38 A1 00 08 */	addi r5, r1, 8
/* 802C8AB4 002C59F4  90 C1 00 08 */	stw r6, 8(r1)
/* 802C8AB8 002C59F8  38 80 00 00 */	li r4, 0
/* 802C8ABC 002C59FC  90 01 00 08 */	stw r0, 8(r1)
/* 802C8AC0 002C5A00  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 802C8AC4 002C5A04  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802C8AC8 002C5A08  4B E4 A0 9D */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 802C8ACC 002C5A0C  28 03 00 00 */	cmplwi r3, 0
/* 802C8AD0 002C5A10  41 82 00 38 */	beq .L_802C8B08
/* 802C8AD4 002C5A14  7C 64 1B 78 */	mr r4, r3
/* 802C8AD8 002C5A18  38 61 00 10 */	addi r3, r1, 0x10
/* 802C8ADC 002C5A1C  81 84 00 00 */	lwz r12, 0(r4)
/* 802C8AE0 002C5A20  81 8C 00 08 */	lwz r12, 8(r12)
/* 802C8AE4 002C5A24  7D 89 03 A6 */	mtctr r12
/* 802C8AE8 002C5A28  4E 80 04 21 */	bctrl 
/* 802C8AEC 002C5A2C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802C8AF0 002C5A30  D0 1F 02 C8 */	stfs f0, 0x2c8(r31)
/* 802C8AF4 002C5A34  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802C8AF8 002C5A38  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802C8AFC 002C5A3C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802C8B00 002C5A40  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802C8B04 002C5A44  48 00 01 CC */	b .L_802C8CD0
.L_802C8B08:
/* 802C8B08 002C5A48  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802C8B0C 002C5A4C  C0 1F 02 D0 */	lfs f0, 0x2d0(r31)
/* 802C8B10 002C5A50  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 802C8B14 002C5A54  EC 61 00 28 */	fsubs f3, f1, f0
/* 802C8B18 002C5A58  C0 3F 02 C8 */	lfs f1, 0x2c8(r31)
/* 802C8B1C 002C5A5C  C0 02 E4 14 */	lfs f0, lbl_8051C774@sda21(r2)
/* 802C8B20 002C5A60  EC 42 08 28 */	fsubs f2, f2, f1
/* 802C8B24 002C5A64  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802C8B28 002C5A68  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802C8B2C 002C5A6C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802C8B30 002C5A70  40 80 01 A0 */	bge .L_802C8CD0
/* 802C8B34 002C5A74  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802C8B38 002C5A78  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802C8B3C 002C5A7C  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802C8B40 002C5A80  EF C1 00 28 */	fsubs f30, f1, f0
/* 802C8B44 002C5A84  4B E0 0A 5D */	bl rand
/* 802C8B48 002C5A88  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802C8B4C 002C5A8C  3C 00 43 30 */	lis r0, 0x4330
/* 802C8B50 002C5A90  90 61 00 3C */	stw r3, 0x3c(r1)
/* 802C8B54 002C5A94  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802C8B58 002C5A98  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802C8B5C 002C5A9C  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802C8B60 002C5AA0  90 01 00 38 */	stw r0, 0x38(r1)
/* 802C8B64 002C5AA4  C8 22 E3 F8 */	lfd f1, lbl_8051C758@sda21(r2)
/* 802C8B68 002C5AA8  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 802C8B6C 002C5AAC  C0 A2 E3 F0 */	lfs f5, lbl_8051C750@sda21(r2)
/* 802C8B70 002C5AB0  EC 00 08 28 */	fsubs f0, f0, f1
/* 802C8B74 002C5AB4  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802C8B78 002C5AB8  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802C8B7C 002C5ABC  C0 84 03 84 */	lfs f4, 0x384(r4)
/* 802C8B80 002C5AC0  EC DE 00 32 */	fmuls f6, f30, f0
/* 802C8B84 002C5AC4  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802C8B88 002C5AC8  EC 23 08 28 */	fsubs f1, f3, f1
/* 802C8B8C 002C5ACC  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802C8B90 002C5AD0  EC 66 28 24 */	fdivs f3, f6, f5
/* 802C8B94 002C5AD4  EF E4 18 2A */	fadds f31, f4, f3
/* 802C8B98 002C5AD8  EC 42 00 28 */	fsubs f2, f2, f0
/* 802C8B9C 002C5ADC  4B D6 C5 6D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802C8BA0 002C5AE0  FF C0 08 90 */	fmr f30, f1
/* 802C8BA4 002C5AE4  4B E0 09 FD */	bl rand
/* 802C8BA8 002C5AE8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802C8BAC 002C5AEC  3C 00 43 30 */	lis r0, 0x4330
/* 802C8BB0 002C5AF0  90 61 00 34 */	stw r3, 0x34(r1)
/* 802C8BB4 002C5AF4  C8 42 E3 F8 */	lfd f2, lbl_8051C758@sda21(r2)
/* 802C8BB8 002C5AF8  90 01 00 30 */	stw r0, 0x30(r1)
/* 802C8BBC 002C5AFC  C0 62 E4 04 */	lfs f3, lbl_8051C764@sda21(r2)
/* 802C8BC0 002C5B00  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802C8BC4 002C5B04  C0 22 E3 F0 */	lfs f1, lbl_8051C750@sda21(r2)
/* 802C8BC8 002C5B08  EC 80 10 28 */	fsubs f4, f0, f2
/* 802C8BCC 002C5B0C  C0 42 E4 18 */	lfs f2, lbl_8051C778@sda21(r2)
/* 802C8BD0 002C5B10  C0 02 E3 C8 */	lfs f0, lbl_8051C728@sda21(r2)
/* 802C8BD4 002C5B14  EC 63 01 32 */	fmuls f3, f3, f4
/* 802C8BD8 002C5B18  EC 23 08 24 */	fdivs f1, f3, f1
/* 802C8BDC 002C5B1C  EC 3E 08 2A */	fadds f1, f30, f1
/* 802C8BE0 002C5B20  EC 62 08 2A */	fadds f3, f2, f1
/* 802C8BE4 002C5B24  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802C8BE8 002C5B28  40 80 00 30 */	bge .L_802C8C18
/* 802C8BEC 002C5B2C  C0 02 E4 0C */	lfs f0, lbl_8051C76C@sda21(r2)
/* 802C8BF0 002C5B30  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C8BF4 002C5B34  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802C8BF8 002C5B38  EC 03 00 32 */	fmuls f0, f3, f0
/* 802C8BFC 002C5B3C  FC 00 00 1E */	fctiwz f0, f0
/* 802C8C00 002C5B40  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802C8C04 002C5B44  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802C8C08 002C5B48  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C8C0C 002C5B4C  7C 03 04 2E */	lfsx f0, r3, r0
/* 802C8C10 002C5B50  FC 40 00 50 */	fneg f2, f0
/* 802C8C14 002C5B54  48 00 00 28 */	b .L_802C8C3C
.L_802C8C18:
/* 802C8C18 002C5B58  C0 02 E4 10 */	lfs f0, lbl_8051C770@sda21(r2)
/* 802C8C1C 002C5B5C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C8C20 002C5B60  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802C8C24 002C5B64  EC 03 00 32 */	fmuls f0, f3, f0
/* 802C8C28 002C5B68  FC 00 00 1E */	fctiwz f0, f0
/* 802C8C2C 002C5B6C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802C8C30 002C5B70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C8C34 002C5B74  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C8C38 002C5B78  7C 43 04 2E */	lfsx f2, r3, r0
.L_802C8C3C:
/* 802C8C3C 002C5B7C  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802C8C40 002C5B80  C0 02 E3 C8 */	lfs f0, lbl_8051C728@sda21(r2)
/* 802C8C44 002C5B84  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 802C8C48 002C5B88  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802C8C4C 002C5B8C  D0 3F 02 C8 */	stfs f1, 0x2c8(r31)
/* 802C8C50 002C5B90  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802C8C54 002C5B94  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802C8C58 002C5B98  40 80 00 30 */	bge .L_802C8C88
/* 802C8C5C 002C5B9C  C0 02 E4 0C */	lfs f0, lbl_8051C76C@sda21(r2)
/* 802C8C60 002C5BA0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C8C64 002C5BA4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802C8C68 002C5BA8  EC 03 00 32 */	fmuls f0, f3, f0
/* 802C8C6C 002C5BAC  FC 00 00 1E */	fctiwz f0, f0
/* 802C8C70 002C5BB0  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 802C8C74 002C5BB4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802C8C78 002C5BB8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C8C7C 002C5BBC  7C 03 04 2E */	lfsx f0, r3, r0
/* 802C8C80 002C5BC0  FC 20 00 50 */	fneg f1, f0
/* 802C8C84 002C5BC4  48 00 00 28 */	b .L_802C8CAC
.L_802C8C88:
/* 802C8C88 002C5BC8  C0 02 E4 10 */	lfs f0, lbl_8051C770@sda21(r2)
/* 802C8C8C 002C5BCC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802C8C90 002C5BD0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802C8C94 002C5BD4  EC 03 00 32 */	fmuls f0, f3, f0
/* 802C8C98 002C5BD8  FC 00 00 1E */	fctiwz f0, f0
/* 802C8C9C 002C5BDC  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 802C8CA0 002C5BE0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 802C8CA4 002C5BE4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802C8CA8 002C5BE8  7C 23 04 2E */	lfsx f1, r3, r0
.L_802C8CAC:
/* 802C8CAC 002C5BEC  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802C8CB0 002C5BF0  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802C8CB4 002C5BF4  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802C8CB8 002C5BF8  48 00 00 18 */	b .L_802C8CD0
.L_802C8CBC:
/* 802C8CBC 002C5BFC  D0 9F 02 C8 */	stfs f4, 0x2c8(r31)
/* 802C8CC0 002C5C00  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802C8CC4 002C5C04  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802C8CC8 002C5C08  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802C8CCC 002C5C0C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
.L_802C8CD0:
/* 802C8CD0 002C5C10  7F E3 FB 78 */	mr r3, r31
/* 802C8CD4 002C5C14  38 9F 02 C8 */	addi r4, r31, 0x2c8
/* 802C8CD8 002C5C18  48 00 03 7D */	bl "setIKSystemTargetPosition__Q34Game7BigFoot3ObjFR10Vector3<f>"
/* 802C8CDC 002C5C1C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802C8CE0 002C5C20  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802C8CE4 002C5C24  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802C8CE8 002C5C28  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802C8CEC 002C5C2C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802C8CF0 002C5C30  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 802C8CF4 002C5C34  7C 08 03 A6 */	mtlr r0
/* 802C8CF8 002C5C38  38 21 00 80 */	addi r1, r1, 0x80
/* 802C8CFC 002C5C3C  4E 80 00 20 */	blr 

.global createIKSystem__Q34Game7BigFoot3ObjFv
createIKSystem__Q34Game7BigFoot3ObjFv:
/* 802C8D00 002C5C40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C8D04 002C5C44  7C 08 02 A6 */	mflr r0
/* 802C8D08 002C5C48  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C8D0C 002C5C4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C8D10 002C5C50  7C 7F 1B 78 */	mr r31, r3
/* 802C8D14 002C5C54  38 60 00 9C */	li r3, 0x9c
/* 802C8D18 002C5C58  4B D5 B1 8D */	bl __nw__FUl
/* 802C8D1C 002C5C5C  7C 60 1B 79 */	or. r0, r3, r3
/* 802C8D20 002C5C60  41 82 00 0C */	beq .L_802C8D2C
/* 802C8D24 002C5C64  4B FD FD 95 */	bl __ct__Q24Game11IKSystemMgrFv
/* 802C8D28 002C5C68  7C 60 1B 78 */	mr r0, r3
.L_802C8D2C:
/* 802C8D2C 002C5C6C  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 802C8D30 002C5C70  38 60 00 48 */	li r3, 0x48
/* 802C8D34 002C5C74  4B D5 B1 71 */	bl __nw__FUl
/* 802C8D38 002C5C78  28 03 00 00 */	cmplwi r3, 0
/* 802C8D3C 002C5C7C  41 82 00 88 */	beq .L_802C8DC4
/* 802C8D40 002C5C80  38 00 FF FF */	li r0, -1
/* 802C8D44 002C5C84  C0 A2 E3 C8 */	lfs f5, lbl_8051C728@sda21(r2)
/* 802C8D48 002C5C88  90 03 00 00 */	stw r0, 0(r3)
/* 802C8D4C 002C5C8C  C0 22 E4 1C */	lfs f1, lbl_8051C77C@sda21(r2)
/* 802C8D50 002C5C90  D0 A3 00 04 */	stfs f5, 4(r3)
/* 802C8D54 002C5C94  C0 02 E4 20 */	lfs f0, lbl_8051C780@sda21(r2)
/* 802C8D58 002C5C98  D0 A3 00 08 */	stfs f5, 8(r3)
/* 802C8D5C 002C5C9C  C0 42 E4 24 */	lfs f2, lbl_8051C784@sda21(r2)
/* 802C8D60 002C5CA0  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 802C8D64 002C5CA4  C0 22 E4 28 */	lfs f1, lbl_8051C788@sda21(r2)
/* 802C8D68 002C5CA8  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802C8D6C 002C5CAC  C0 02 E3 EC */	lfs f0, lbl_8051C74C@sda21(r2)
/* 802C8D70 002C5CB0  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 802C8D74 002C5CB4  C0 42 E3 D8 */	lfs f2, lbl_8051C738@sda21(r2)
/* 802C8D78 002C5CB8  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 802C8D7C 002C5CBC  C0 22 E4 2C */	lfs f1, lbl_8051C78C@sda21(r2)
/* 802C8D80 002C5CC0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802C8D84 002C5CC4  C0 02 E4 30 */	lfs f0, lbl_8051C790@sda21(r2)
/* 802C8D88 002C5CC8  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 802C8D8C 002C5CCC  C0 82 E4 34 */	lfs f4, lbl_8051C794@sda21(r2)
/* 802C8D90 002C5CD0  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 802C8D94 002C5CD4  C0 62 E4 38 */	lfs f3, lbl_8051C798@sda21(r2)
/* 802C8D98 002C5CD8  D0 A3 00 28 */	stfs f5, 0x28(r3)
/* 802C8D9C 002C5CDC  C0 42 E3 D0 */	lfs f2, lbl_8051C730@sda21(r2)
/* 802C8DA0 002C5CE0  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802C8DA4 002C5CE4  C0 22 E4 3C */	lfs f1, lbl_8051C79C@sda21(r2)
/* 802C8DA8 002C5CE8  D0 A3 00 30 */	stfs f5, 0x30(r3)
/* 802C8DAC 002C5CEC  C0 02 E4 40 */	lfs f0, lbl_8051C7A0@sda21(r2)
/* 802C8DB0 002C5CF0  D0 83 00 34 */	stfs f4, 0x34(r3)
/* 802C8DB4 002C5CF4  D0 63 00 38 */	stfs f3, 0x38(r3)
/* 802C8DB8 002C5CF8  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 802C8DBC 002C5CFC  D0 23 00 40 */	stfs f1, 0x40(r3)
/* 802C8DC0 002C5D00  D0 03 00 44 */	stfs f0, 0x44(r3)
.L_802C8DC4:
/* 802C8DC4 002C5D04  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 802C8DC8 002C5D08  38 60 00 08 */	li r3, 8
/* 802C8DCC 002C5D0C  4B D5 B0 D9 */	bl __nw__FUl
/* 802C8DD0 002C5D10  28 03 00 00 */	cmplwi r3, 0
/* 802C8DD4 002C5D14  41 82 00 20 */	beq .L_802C8DF4
/* 802C8DD8 002C5D18  3C A0 80 4D */	lis r5, __vt__Q24Game19JointGroundCallBack@ha
/* 802C8DDC 002C5D1C  3C 80 80 4D */	lis r4, __vt__Q34Game7BigFoot21BigFootGroundCallBack@ha
/* 802C8DE0 002C5D20  38 05 DB 60 */	addi r0, r5, __vt__Q24Game19JointGroundCallBack@l
/* 802C8DE4 002C5D24  90 03 00 00 */	stw r0, 0(r3)
/* 802C8DE8 002C5D28  38 04 21 3C */	addi r0, r4, __vt__Q34Game7BigFoot21BigFootGroundCallBack@l
/* 802C8DEC 002C5D2C  90 03 00 00 */	stw r0, 0(r3)
/* 802C8DF0 002C5D30  93 E3 00 04 */	stw r31, 4(r3)
.L_802C8DF4:
/* 802C8DF4 002C5D34  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 802C8DF8 002C5D38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C8DFC 002C5D3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C8E00 002C5D40  7C 08 03 A6 */	mtlr r0
/* 802C8E04 002C5D44  38 21 00 10 */	addi r1, r1, 0x10
/* 802C8E08 002C5D48  4E 80 00 20 */	blr 

.global setupIKSystem__Q34Game7BigFoot3ObjFv
setupIKSystem__Q34Game7BigFoot3ObjFv:
/* 802C8E0C 002C5D4C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802C8E10 002C5D50  7C 08 02 A6 */	mflr r0
/* 802C8E14 002C5D54  38 A0 00 00 */	li r5, 0
/* 802C8E18 002C5D58  90 01 00 54 */	stw r0, 0x54(r1)
/* 802C8E1C 002C5D5C  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 802C8E20 002C5D60  7C 7F 1B 78 */	mr r31, r3
/* 802C8E24 002C5D64  7F E4 FB 78 */	mr r4, r31
/* 802C8E28 002C5D68  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C8E2C 002C5D6C  4B FD FD 09 */	bl init__Q24Game11IKSystemMgrFPQ24Game9EnemyBasePQ24Game19JointGroundCallBack
/* 802C8E30 002C5D70  3C 60 80 49 */	lis r3, lbl_8048B778@ha
/* 802C8E34 002C5D74  38 C1 00 08 */	addi r6, r1, 8
/* 802C8E38 002C5D78  3B 63 B7 78 */	addi r27, r3, lbl_8048B778@l
/* 802C8E3C 002C5D7C  38 A0 00 00 */	li r5, 0
/* 802C8E40 002C5D80  83 9B 00 00 */	lwz r28, 0(r27)
/* 802C8E44 002C5D84  83 BB 00 04 */	lwz r29, 4(r27)
/* 802C8E48 002C5D88  83 DB 00 08 */	lwz r30, 8(r27)
/* 802C8E4C 002C5D8C  81 9B 00 0C */	lwz r12, 0xc(r27)
/* 802C8E50 002C5D90  81 7B 00 10 */	lwz r11, 0x10(r27)
/* 802C8E54 002C5D94  81 5B 00 14 */	lwz r10, 0x14(r27)
/* 802C8E58 002C5D98  81 3B 00 18 */	lwz r9, 0x18(r27)
/* 802C8E5C 002C5D9C  81 1B 00 1C */	lwz r8, 0x1c(r27)
/* 802C8E60 002C5DA0  80 FB 00 20 */	lwz r7, 0x20(r27)
/* 802C8E64 002C5DA4  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 802C8E68 002C5DA8  80 7B 00 28 */	lwz r3, 0x28(r27)
/* 802C8E6C 002C5DAC  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 802C8E70 002C5DB0  93 81 00 08 */	stw r28, 8(r1)
/* 802C8E74 002C5DB4  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802C8E78 002C5DB8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802C8E7C 002C5DBC  91 81 00 14 */	stw r12, 0x14(r1)
/* 802C8E80 002C5DC0  91 61 00 18 */	stw r11, 0x18(r1)
/* 802C8E84 002C5DC4  91 41 00 1C */	stw r10, 0x1c(r1)
/* 802C8E88 002C5DC8  91 21 00 20 */	stw r9, 0x20(r1)
/* 802C8E8C 002C5DCC  91 01 00 24 */	stw r8, 0x24(r1)
/* 802C8E90 002C5DD0  90 E1 00 28 */	stw r7, 0x28(r1)
/* 802C8E94 002C5DD4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 802C8E98 002C5DD8  90 61 00 30 */	stw r3, 0x30(r1)
/* 802C8E9C 002C5DDC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802C8EA0 002C5DE0  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C8EA4 002C5DE4  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802C8EA8 002C5DE8  4B FD FD D1 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802C8EAC 002C5DEC  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C8EB0 002C5DF0  38 C1 00 14 */	addi r6, r1, 0x14
/* 802C8EB4 002C5DF4  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802C8EB8 002C5DF8  38 A0 00 01 */	li r5, 1
/* 802C8EBC 002C5DFC  4B FD FD BD */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802C8EC0 002C5E00  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C8EC4 002C5E04  38 C1 00 20 */	addi r6, r1, 0x20
/* 802C8EC8 002C5E08  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802C8ECC 002C5E0C  38 A0 00 02 */	li r5, 2
/* 802C8ED0 002C5E10  4B FD FD A9 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802C8ED4 002C5E14  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C8ED8 002C5E18  38 C1 00 2C */	addi r6, r1, 0x2c
/* 802C8EDC 002C5E1C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802C8EE0 002C5E20  38 A0 00 03 */	li r5, 3
/* 802C8EE4 002C5E24  4B FD FD 95 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802C8EE8 002C5E28  3C 80 80 49 */	lis r4, lbl_8048B700@ha
/* 802C8EEC 002C5E2C  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C8EF0 002C5E30  38 A4 B7 00 */	addi r5, r4, lbl_8048B700@l
/* 802C8EF4 002C5E34  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802C8EF8 002C5E38  4B FD FD ED */	bl setupCallBack__Q24Game11IKSystemMgrFPQ28SysShape5ModelPc
/* 802C8EFC 002C5E3C  7F E3 FB 78 */	mr r3, r31
/* 802C8F00 002C5E40  48 00 00 31 */	bl setIKParameter__Q34Game7BigFoot3ObjFv
/* 802C8F04 002C5E44  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C8F08 002C5E48  80 9F 02 E4 */	lwz r4, 0x2e4(r31)
/* 802C8F0C 002C5E4C  4B FD FE 11 */	bl setParameters__Q24Game11IKSystemMgrFPQ24Game13IKSystemParms
/* 802C8F10 002C5E50  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 802C8F14 002C5E54  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C8F18 002C5E58  90 03 00 94 */	stw r0, 0x94(r3)
/* 802C8F1C 002C5E5C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 802C8F20 002C5E60  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802C8F24 002C5E64  7C 08 03 A6 */	mtlr r0
/* 802C8F28 002C5E68  38 21 00 50 */	addi r1, r1, 0x50
/* 802C8F2C 002C5E6C  4E 80 00 20 */	blr 

.global setIKParameter__Q34Game7BigFoot3ObjFv
setIKParameter__Q34Game7BigFoot3ObjFv:
/* 802C8F30 002C5E70  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8F34 002C5E74  38 00 00 0C */	li r0, 0xc
/* 802C8F38 002C5E78  C0 42 E3 D8 */	lfs f2, lbl_8051C738@sda21(r2)
/* 802C8F3C 002C5E7C  90 04 00 00 */	stw r0, 0(r4)
/* 802C8F40 002C5E80  C0 22 E4 44 */	lfs f1, lbl_8051C7A4@sda21(r2)
/* 802C8F44 002C5E84  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8F48 002C5E88  C0 02 E3 EC */	lfs f0, lbl_8051C74C@sda21(r2)
/* 802C8F4C 002C5E8C  D0 44 00 04 */	stfs f2, 4(r4)
/* 802C8F50 002C5E90  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8F54 002C5E94  D0 24 00 08 */	stfs f1, 8(r4)
/* 802C8F58 002C5E98  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8F5C 002C5E9C  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 802C8F60 002C5EA0  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8F64 002C5EA4  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8F68 002C5EA8  C0 05 03 34 */	lfs f0, 0x334(r5)
/* 802C8F6C 002C5EAC  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 802C8F70 002C5EB0  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8F74 002C5EB4  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8F78 002C5EB8  C0 05 02 E4 */	lfs f0, 0x2e4(r5)
/* 802C8F7C 002C5EBC  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 802C8F80 002C5EC0  88 03 02 DE */	lbz r0, 0x2de(r3)
/* 802C8F84 002C5EC4  28 00 00 00 */	cmplwi r0, 0
/* 802C8F88 002C5EC8  41 82 00 68 */	beq .L_802C8FF0
/* 802C8F8C 002C5ECC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8F90 002C5ED0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8F94 002C5ED4  C0 05 09 0C */	lfs f0, 0x90c(r5)
/* 802C8F98 002C5ED8  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 802C8F9C 002C5EDC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8FA0 002C5EE0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8FA4 002C5EE4  C0 05 09 34 */	lfs f0, 0x934(r5)
/* 802C8FA8 002C5EE8  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 802C8FAC 002C5EEC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8FB0 002C5EF0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8FB4 002C5EF4  C0 05 09 5C */	lfs f0, 0x95c(r5)
/* 802C8FB8 002C5EF8  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 802C8FBC 002C5EFC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8FC0 002C5F00  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8FC4 002C5F04  C0 05 09 AC */	lfs f0, 0x9ac(r5)
/* 802C8FC8 002C5F08  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 802C8FCC 002C5F0C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8FD0 002C5F10  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8FD4 002C5F14  C0 05 09 84 */	lfs f0, 0x984(r5)
/* 802C8FD8 002C5F18  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 802C8FDC 002C5F1C  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802C8FE0 002C5F20  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802C8FE4 002C5F24  C0 04 09 D4 */	lfs f0, 0x9d4(r4)
/* 802C8FE8 002C5F28  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802C8FEC 002C5F2C  4E 80 00 20 */	blr 
.L_802C8FF0:
/* 802C8FF0 002C5F30  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C8FF4 002C5F34  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C8FF8 002C5F38  C0 05 08 1C */	lfs f0, 0x81c(r5)
/* 802C8FFC 002C5F3C  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 802C9000 002C5F40  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C9004 002C5F44  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C9008 002C5F48  C0 05 08 44 */	lfs f0, 0x844(r5)
/* 802C900C 002C5F4C  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 802C9010 002C5F50  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C9014 002C5F54  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C9018 002C5F58  C0 05 08 6C */	lfs f0, 0x86c(r5)
/* 802C901C 002C5F5C  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 802C9020 002C5F60  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C9024 002C5F64  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C9028 002C5F68  C0 05 08 BC */	lfs f0, 0x8bc(r5)
/* 802C902C 002C5F6C  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 802C9030 002C5F70  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802C9034 002C5F74  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802C9038 002C5F78  C0 05 08 94 */	lfs f0, 0x894(r5)
/* 802C903C 002C5F7C  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 802C9040 002C5F80  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802C9044 002C5F84  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802C9048 002C5F88  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 802C904C 002C5F8C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802C9050 002C5F90  4E 80 00 20 */	blr 

.global "setIKSystemTargetPosition__Q34Game7BigFoot3ObjFR10Vector3<f>"
"setIKSystemTargetPosition__Q34Game7BigFoot3ObjFR10Vector3<f>":
/* 802C9054 002C5F94  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C9058 002C5F98  C0 04 00 00 */	lfs f0, 0(r4)
/* 802C905C 002C5F9C  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802C9060 002C5FA0  C0 04 00 04 */	lfs f0, 4(r4)
/* 802C9064 002C5FA4  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 802C9068 002C5FA8  C0 04 00 08 */	lfs f0, 8(r4)
/* 802C906C 002C5FAC  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802C9070 002C5FB0  4E 80 00 20 */	blr 

.global updateIKSystem__Q34Game7BigFoot3ObjFv
updateIKSystem__Q34Game7BigFoot3ObjFv:
/* 802C9074 002C5FB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9078 002C5FB8  7C 08 02 A6 */	mflr r0
/* 802C907C 002C5FBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9080 002C5FC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9084 002C5FC4  7C 7F 1B 78 */	mr r31, r3
/* 802C9088 002C5FC8  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C908C 002C5FCC  4B FE 00 59 */	bl doUpdate__Q24Game11IKSystemMgrFv
/* 802C9090 002C5FD0  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C9094 002C5FD4  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 802C9098 002C5FD8  C0 43 00 40 */	lfs f2, 0x40(r3)
/* 802C909C 002C5FDC  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 802C90A0 002C5FE0  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 802C90A4 002C5FE4  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 802C90A8 002C5FE8  D0 5F 01 94 */	stfs f2, 0x194(r31)
/* 802C90AC 002C5FEC  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802C90B0 002C5FF0  C0 03 00 04 */	lfs f0, 4(r3)
/* 802C90B4 002C5FF4  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 802C90B8 002C5FF8  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802C90BC 002C5FFC  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802C90C0 002C6000  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C90C4 002C6004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C90C8 002C6008  7C 08 03 A6 */	mtlr r0
/* 802C90CC 002C600C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C90D0 002C6010  4E 80 00 20 */	blr 

.global doAnimationIKSystem__Q34Game7BigFoot3ObjFv
doAnimationIKSystem__Q34Game7BigFoot3ObjFv:
/* 802C90D4 002C6014  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C90D8 002C6018  7C 08 02 A6 */	mflr r0
/* 802C90DC 002C601C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C90E0 002C6020  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802C90E4 002C6024  7C 7F 1B 78 */	mr r31, r3
/* 802C90E8 002C6028  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C90EC 002C602C  4B FD FF F1 */	bl setAnimationCallBack__Q24Game11IKSystemMgrFv
/* 802C90F0 002C6030  80 FF 02 E0 */	lwz r7, 0x2e0(r31)
/* 802C90F4 002C6034  38 7F 01 38 */	addi r3, r31, 0x138
/* 802C90F8 002C6038  38 9F 01 68 */	addi r4, r31, 0x168
/* 802C90FC 002C603C  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 802C9100 002C6040  C0 27 00 48 */	lfs f1, 0x48(r7)
/* 802C9104 002C6044  38 C1 00 08 */	addi r6, r1, 8
/* 802C9108 002C6048  C0 47 00 4C */	lfs f2, 0x4c(r7)
/* 802C910C 002C604C  C0 07 00 44 */	lfs f0, 0x44(r7)
/* 802C9110 002C6050  D0 01 00 08 */	stfs f0, 8(r1)
/* 802C9114 002C6054  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802C9118 002C6058  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802C911C 002C605C  48 15 F1 BD */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 802C9120 002C6060  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C9124 002C6064  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802C9128 002C6068  7C 08 03 A6 */	mtlr r0
/* 802C912C 002C606C  38 21 00 20 */	addi r1, r1, 0x20
/* 802C9130 002C6070  4E 80 00 20 */	blr 

.global finishAnimationIKSystem__Q34Game7BigFoot3ObjFv
finishAnimationIKSystem__Q34Game7BigFoot3ObjFv:
/* 802C9134 002C6074  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9138 002C6078  7C 08 02 A6 */	mflr r0
/* 802C913C 002C607C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9140 002C6080  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C9144 002C6084  4B FD FF 8D */	bl resetAnimationCallBack__Q24Game11IKSystemMgrFv
/* 802C9148 002C6088  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C914C 002C608C  7C 08 03 A6 */	mtlr r0
/* 802C9150 002C6090  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9154 002C6094  4E 80 00 20 */	blr 

.global startProgramedIK__Q34Game7BigFoot3ObjFv
startProgramedIK__Q34Game7BigFoot3ObjFv:
/* 802C9158 002C6098  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C915C 002C609C  7C 08 02 A6 */	mflr r0
/* 802C9160 002C60A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9164 002C60A4  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C9168 002C60A8  4B FD FC 19 */	bl startProgramedIK__Q24Game11IKSystemMgrFv
/* 802C916C 002C60AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9170 002C60B0  7C 08 03 A6 */	mtlr r0
/* 802C9174 002C60B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9178 002C60B8  4E 80 00 20 */	blr 

.global startIKMotion__Q34Game7BigFoot3ObjFv
startIKMotion__Q34Game7BigFoot3ObjFv:
/* 802C917C 002C60BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9180 002C60C0  7C 08 02 A6 */	mflr r0
/* 802C9184 002C60C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9188 002C60C8  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C918C 002C60CC  4B FD FD 7D */	bl startIKMotion__Q24Game11IKSystemMgrFv
/* 802C9190 002C60D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9194 002C60D4  7C 08 03 A6 */	mtlr r0
/* 802C9198 002C60D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C919C 002C60DC  4E 80 00 20 */	blr 

.global finishIKMotion__Q34Game7BigFoot3ObjFv
finishIKMotion__Q34Game7BigFoot3ObjFv:
/* 802C91A0 002C60E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C91A4 002C60E4  7C 08 02 A6 */	mflr r0
/* 802C91A8 002C60E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C91AC 002C60EC  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C91B0 002C60F0  4B FD FD 7D */	bl finishIKMotion__Q24Game11IKSystemMgrFv
/* 802C91B4 002C60F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C91B8 002C60F8  7C 08 03 A6 */	mtlr r0
/* 802C91BC 002C60FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802C91C0 002C6100  4E 80 00 20 */	blr 

.global forceFinishIKMotion__Q34Game7BigFoot3ObjFv
forceFinishIKMotion__Q34Game7BigFoot3ObjFv:
/* 802C91C4 002C6104  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C91C8 002C6108  7C 08 02 A6 */	mflr r0
/* 802C91CC 002C610C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C91D0 002C6110  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C91D4 002C6114  4B FD FD 65 */	bl forceFinishIKMotion__Q24Game11IKSystemMgrFv
/* 802C91D8 002C6118  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C91DC 002C611C  7C 08 03 A6 */	mtlr r0
/* 802C91E0 002C6120  38 21 00 10 */	addi r1, r1, 0x10
/* 802C91E4 002C6124  4E 80 00 20 */	blr 

.global isFinishIKMotion__Q34Game7BigFoot3ObjFv
isFinishIKMotion__Q34Game7BigFoot3ObjFv:
/* 802C91E8 002C6128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C91EC 002C612C  7C 08 02 A6 */	mflr r0
/* 802C91F0 002C6130  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C91F4 002C6134  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C91F8 002C6138  4B FD FE 69 */	bl isFinishIKMotion__Q24Game11IKSystemMgrFv
/* 802C91FC 002C613C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9200 002C6140  7C 08 03 A6 */	mtlr r0
/* 802C9204 002C6144  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9208 002C6148  4E 80 00 20 */	blr 

.global startBlendMotion__Q34Game7BigFoot3ObjFv
startBlendMotion__Q34Game7BigFoot3ObjFv:
/* 802C920C 002C614C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9210 002C6150  7C 08 02 A6 */	mflr r0
/* 802C9214 002C6154  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9218 002C6158  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C921C 002C615C  4B FD FD 31 */	bl startBlendMotion__Q24Game11IKSystemMgrFv
/* 802C9220 002C6160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9224 002C6164  7C 08 03 A6 */	mtlr r0
/* 802C9228 002C6168  38 21 00 10 */	addi r1, r1, 0x10
/* 802C922C 002C616C  4E 80 00 20 */	blr 

.global finishBlendMotion__Q34Game7BigFoot3ObjFv
finishBlendMotion__Q34Game7BigFoot3ObjFv:
/* 802C9230 002C6170  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9234 002C6174  7C 08 02 A6 */	mflr r0
/* 802C9238 002C6178  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C923C 002C617C  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C9240 002C6180  4B FD FD 69 */	bl finishBlendMotion__Q24Game11IKSystemMgrFv
/* 802C9244 002C6184  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9248 002C6188  7C 08 03 A6 */	mtlr r0
/* 802C924C 002C618C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9250 002C6190  4E 80 00 20 */	blr 

.global getTraceCentrePosition__Q34Game7BigFoot3ObjFv
getTraceCentrePosition__Q34Game7BigFoot3ObjFv:
/* 802C9254 002C6194  80 84 02 E0 */	lwz r4, 0x2e0(r4)
/* 802C9258 002C6198  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 802C925C 002C619C  D0 03 00 00 */	stfs f0, 0(r3)
/* 802C9260 002C61A0  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 802C9264 002C61A4  D0 03 00 04 */	stfs f0, 4(r3)
/* 802C9268 002C61A8  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 802C926C 002C61AC  D0 03 00 08 */	stfs f0, 8(r3)
/* 802C9270 002C61B0  4E 80 00 20 */	blr 

.global isCollisionCheck__Q34Game7BigFoot3ObjFP8CollPart
isCollisionCheck__Q34Game7BigFoot3ObjFP8CollPart:
/* 802C9274 002C61B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9278 002C61B8  7C 08 02 A6 */	mflr r0
/* 802C927C 002C61BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9280 002C61C0  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802C9284 002C61C4  4B FD FF 71 */	bl isCollisionCheck__Q24Game11IKSystemMgrFP8CollPart
/* 802C9288 002C61C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C928C 002C61CC  7C 08 03 A6 */	mtlr r0
/* 802C9290 002C61D0  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9294 002C61D4  4E 80 00 20 */	blr 

.global createShadowSystem__Q34Game7BigFoot3ObjFv
createShadowSystem__Q34Game7BigFoot3ObjFv:
/* 802C9298 002C61D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C929C 002C61DC  7C 08 02 A6 */	mflr r0
/* 802C92A0 002C61E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C92A4 002C61E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C92A8 002C61E8  7C 7F 1B 78 */	mr r31, r3
/* 802C92AC 002C61EC  38 60 00 B0 */	li r3, 0xb0
/* 802C92B0 002C61F0  4B D5 AB F5 */	bl __nw__FUl
/* 802C92B4 002C61F4  7C 60 1B 79 */	or. r0, r3, r3
/* 802C92B8 002C61F8  41 82 00 10 */	beq .L_802C92C8
/* 802C92BC 002C61FC  7F E4 FB 78 */	mr r4, r31
/* 802C92C0 002C6200  4B FF E5 51 */	bl __ct__Q34Game7BigFoot16BigFootShadowMgrFPQ34Game7BigFoot3Obj
/* 802C92C4 002C6204  7C 60 1B 78 */	mr r0, r3
.L_802C92C8:
/* 802C92C8 002C6208  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 802C92CC 002C620C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C92D0 002C6210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C92D4 002C6214  7C 08 03 A6 */	mtlr r0
/* 802C92D8 002C6218  38 21 00 10 */	addi r1, r1, 0x10
/* 802C92DC 002C621C  4E 80 00 20 */	blr 

.global setupShadowSystem__Q34Game7BigFoot3ObjFv
setupShadowSystem__Q34Game7BigFoot3ObjFv:
/* 802C92E0 002C6220  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C92E4 002C6224  7C 08 02 A6 */	mflr r0
/* 802C92E8 002C6228  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C92EC 002C622C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802C92F0 002C6230  7C 7B 1B 78 */	mr r27, r3
/* 802C92F4 002C6234  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 802C92F8 002C6238  4B FF E7 25 */	bl init__Q34Game7BigFoot16BigFootShadowMgrFv
/* 802C92FC 002C623C  3B A0 00 00 */	li r29, 0
/* 802C9300 002C6240  7F 7E DB 78 */	mr r30, r27
.L_802C9304:
/* 802C9304 002C6244  3B 80 00 00 */	li r28, 0
/* 802C9308 002C6248  7F DF F3 78 */	mr r31, r30
.L_802C930C:
/* 802C930C 002C624C  80 7B 02 EC */	lwz r3, 0x2ec(r27)
/* 802C9310 002C6250  7F A4 EB 78 */	mr r4, r29
/* 802C9314 002C6254  7F 85 E3 78 */	mr r5, r28
/* 802C9318 002C6258  38 DF 02 F0 */	addi r6, r31, 0x2f0
/* 802C931C 002C625C  4B FF E8 4D */	bl "setJointPosPtr__Q34Game7BigFoot16BigFootShadowMgrFiiP10Vector3<f>"
/* 802C9320 002C6260  3B 9C 00 01 */	addi r28, r28, 1
/* 802C9324 002C6264  3B FF 00 0C */	addi r31, r31, 0xc
/* 802C9328 002C6268  2C 1C 00 04 */	cmpwi r28, 4
/* 802C932C 002C626C  41 80 FF E0 */	blt .L_802C930C
/* 802C9330 002C6270  3B BD 00 01 */	addi r29, r29, 1
/* 802C9334 002C6274  3B DE 00 30 */	addi r30, r30, 0x30
/* 802C9338 002C6278  2C 1D 00 04 */	cmpwi r29, 4
/* 802C933C 002C627C  41 80 FF C8 */	blt .L_802C9304
/* 802C9340 002C6280  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802C9344 002C6284  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C9348 002C6288  7C 08 03 A6 */	mtlr r0
/* 802C934C 002C628C  38 21 00 20 */	addi r1, r1, 0x20
/* 802C9350 002C6290  4E 80 00 20 */	blr 

.global doAnimationShadowSystem__Q34Game7BigFoot3ObjFv
doAnimationShadowSystem__Q34Game7BigFoot3ObjFv:
/* 802C9354 002C6294  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9358 002C6298  7C 08 02 A6 */	mflr r0
/* 802C935C 002C629C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9360 002C62A0  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 802C9364 002C62A4  4B FF E8 1D */	bl update__Q34Game7BigFoot16BigFootShadowMgrFv
/* 802C9368 002C62A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C936C 002C62AC  7C 08 03 A6 */	mtlr r0
/* 802C9370 002C62B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9374 002C62B4  4E 80 00 20 */	blr 

.global createMaterialAnimation__Q34Game7BigFoot3ObjFv
createMaterialAnimation__Q34Game7BigFoot3ObjFv:
/* 802C9378 002C62B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C937C 002C62BC  7C 08 02 A6 */	mflr r0
/* 802C9380 002C62C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9384 002C62C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9388 002C62C8  93 C1 00 08 */	stw r30, 8(r1)
/* 802C938C 002C62CC  7C 7E 1B 78 */	mr r30, r3
/* 802C9390 002C62D0  38 60 00 0C */	li r3, 0xc
/* 802C9394 002C62D4  4B D5 AB 11 */	bl __nw__FUl
/* 802C9398 002C62D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 802C939C 002C62DC  41 82 00 14 */	beq .L_802C93B0
/* 802C93A0 002C62E0  48 16 AF B5 */	bl __ct__Q23Sys15MatBaseAnimatorFv
/* 802C93A4 002C62E4  3C 60 80 4F */	lis r3, __vt__Q23Sys15MatLoopAnimator@ha
/* 802C93A8 002C62E8  38 03 C4 8C */	addi r0, r3, __vt__Q23Sys15MatLoopAnimator@l
/* 802C93AC 002C62EC  90 1F 00 00 */	stw r0, 0(r31)
.L_802C93B0:
/* 802C93B0 002C62F0  93 FE 04 A8 */	stw r31, 0x4a8(r30)
/* 802C93B4 002C62F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C93B8 002C62F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C93BC 002C62FC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C93C0 002C6300  7C 08 03 A6 */	mtlr r0
/* 802C93C4 002C6304  38 21 00 10 */	addi r1, r1, 0x10
/* 802C93C8 002C6308  4E 80 00 20 */	blr 

.global startMaterialAnimation__Q34Game7BigFoot3ObjFv
startMaterialAnimation__Q34Game7BigFoot3ObjFv:
/* 802C93CC 002C630C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C93D0 002C6310  7C 08 02 A6 */	mflr r0
/* 802C93D4 002C6314  7C 64 1B 78 */	mr r4, r3
/* 802C93D8 002C6318  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C93DC 002C631C  80 63 04 A8 */	lwz r3, 0x4a8(r3)
/* 802C93E0 002C6320  80 84 01 80 */	lwz r4, 0x180(r4)
/* 802C93E4 002C6324  81 83 00 00 */	lwz r12, 0(r3)
/* 802C93E8 002C6328  80 84 00 44 */	lwz r4, 0x44(r4)
/* 802C93EC 002C632C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802C93F0 002C6330  7D 89 03 A6 */	mtctr r12
/* 802C93F4 002C6334  4E 80 04 21 */	bctrl 
/* 802C93F8 002C6338  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C93FC 002C633C  7C 08 03 A6 */	mtlr r0
/* 802C9400 002C6340  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9404 002C6344  4E 80 00 20 */	blr 

.global updateMaterialAnimation__Q34Game7BigFoot3ObjFv
updateMaterialAnimation__Q34Game7BigFoot3ObjFv:
/* 802C9408 002C6348  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C940C 002C634C  7C 08 02 A6 */	mflr r0
/* 802C9410 002C6350  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C9414 002C6354  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802C9418 002C6358  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802C941C 002C635C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9420 002C6360  7C 7F 1B 78 */	mr r31, r3
/* 802C9424 002C6364  88 03 02 DC */	lbz r0, 0x2dc(r3)
/* 802C9428 002C6368  28 00 00 00 */	cmplwi r0, 0
/* 802C942C 002C636C  41 82 00 7C */	beq .L_802C94A8
/* 802C9430 002C6370  80 9F 04 A8 */	lwz r4, 0x4a8(r31)
/* 802C9434 002C6374  80 64 00 04 */	lwz r3, 4(r4)
/* 802C9438 002C6378  C3 E4 00 08 */	lfs f31, 8(r4)
/* 802C943C 002C637C  28 03 00 00 */	cmplwi r3, 0
/* 802C9440 002C6380  41 82 00 0C */	beq .L_802C944C
/* 802C9444 002C6384  48 16 AC 61 */	bl getFrameMax__Q23Sys16MatBaseAnimationFv
/* 802C9448 002C6388  48 00 00 08 */	b .L_802C9450
.L_802C944C:
/* 802C944C 002C638C  C0 22 E3 C8 */	lfs f1, lbl_8051C728@sda21(r2)
.L_802C9450:
/* 802C9450 002C6390  C0 02 E4 48 */	lfs f0, lbl_8051C7A8@sda21(r2)
/* 802C9454 002C6394  FC 1F 08 40 */	fcmpo cr0, f31, f1
/* 802C9458 002C6398  C0 42 E3 CC */	lfs f2, lbl_8051C72C@sda21(r2)
/* 802C945C 002C639C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802C9460 002C63A0  EF E2 00 24 */	fdivs f31, f2, f0
/* 802C9464 002C63A4  40 80 00 14 */	bge .L_802C9478
/* 802C9468 002C63A8  80 7F 04 A8 */	lwz r3, 0x4a8(r31)
/* 802C946C 002C63AC  C0 22 E4 34 */	lfs f1, lbl_8051C794@sda21(r2)
/* 802C9470 002C63B0  48 16 B0 DD */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 802C9474 002C63B4  48 00 00 10 */	b .L_802C9484
.L_802C9478:
/* 802C9478 002C63B8  80 7F 04 A8 */	lwz r3, 0x4a8(r31)
/* 802C947C 002C63BC  C0 22 E3 C8 */	lfs f1, lbl_8051C728@sda21(r2)
/* 802C9480 002C63C0  48 16 B0 CD */	bl animate__Q23Sys15MatBaseAnimatorFf
.L_802C9484:
/* 802C9484 002C63C4  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 802C9488 002C63C8  C0 02 E3 C8 */	lfs f0, lbl_8051C728@sda21(r2)
/* 802C948C 002C63CC  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802C9490 002C63D0  D0 3F 02 D4 */	stfs f1, 0x2d4(r31)
/* 802C9494 002C63D4  C0 3F 02 D4 */	lfs f1, 0x2d4(r31)
/* 802C9498 002C63D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802C949C 002C63DC  40 80 00 40 */	bge .L_802C94DC
/* 802C94A0 002C63E0  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802C94A4 002C63E4  48 00 00 38 */	b .L_802C94DC
.L_802C94A8:
/* 802C94A8 002C63E8  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802C94AC 002C63EC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802C94B0 002C63F0  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 802C94B4 002C63F4  C0 42 E3 CC */	lfs f2, lbl_8051C72C@sda21(r2)
/* 802C94B8 002C63F8  EC 01 00 24 */	fdivs f0, f1, f0
/* 802C94BC 002C63FC  C0 22 E4 48 */	lfs f1, lbl_8051C7A8@sda21(r2)
/* 802C94C0 002C6400  80 7F 04 A8 */	lwz r3, 0x4a8(r31)
/* 802C94C4 002C6404  EC 02 00 28 */	fsubs f0, f2, f0
/* 802C94C8 002C6408  EC 21 00 32 */	fmuls f1, f1, f0
/* 802C94CC 002C640C  48 16 AF 11 */	bl setCurrentFrame__Q23Sys15MatBaseAnimatorFf
/* 802C94D0 002C6410  80 7F 04 A8 */	lwz r3, 0x4a8(r31)
/* 802C94D4 002C6414  C0 22 E3 C8 */	lfs f1, lbl_8051C728@sda21(r2)
/* 802C94D8 002C6418  48 16 B0 75 */	bl animate__Q23Sys15MatBaseAnimatorFf
.L_802C94DC:
/* 802C94DC 002C641C  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802C94E0 002C6420  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C94E4 002C6424  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802C94E8 002C6428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C94EC 002C642C  7C 08 03 A6 */	mtlr r0
/* 802C94F0 002C6430  38 21 00 20 */	addi r1, r1, 0x20
/* 802C94F4 002C6434  4E 80 00 20 */	blr 

.global setupCollision__Q34Game7BigFoot3ObjFv
setupCollision__Q34Game7BigFoot3ObjFv:
/* 802C94F8 002C6438  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802C94FC 002C643C  7C 08 02 A6 */	mflr r0
/* 802C9500 002C6440  3C 80 80 49 */	lis r4, lbl_8048B7A8@ha
/* 802C9504 002C6444  90 01 00 34 */	stw r0, 0x34(r1)
/* 802C9508 002C6448  38 C4 B7 A8 */	addi r6, r4, lbl_8048B7A8@l
/* 802C950C 002C644C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802C9510 002C6450  3B E1 00 08 */	addi r31, r1, 8
/* 802C9514 002C6454  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802C9518 002C6458  3B C0 00 00 */	li r30, 0
/* 802C951C 002C645C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802C9520 002C6460  7C 7D 1B 78 */	mr r29, r3
/* 802C9524 002C6464  80 A6 00 00 */	lwz r5, 0(r6)
/* 802C9528 002C6468  80 86 00 04 */	lwz r4, 4(r6)
/* 802C952C 002C646C  80 66 00 08 */	lwz r3, 8(r6)
/* 802C9530 002C6470  80 06 00 0C */	lwz r0, 0xc(r6)
/* 802C9534 002C6474  90 A1 00 08 */	stw r5, 8(r1)
/* 802C9538 002C6478  90 81 00 0C */	stw r4, 0xc(r1)
/* 802C953C 002C647C  90 61 00 10 */	stw r3, 0x10(r1)
/* 802C9540 002C6480  90 01 00 14 */	stw r0, 0x14(r1)
.L_802C9544:
/* 802C9544 002C6484  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 802C9548 002C6488  80 9F 00 00 */	lwz r4, 0(r31)
/* 802C954C 002C648C  4B E6 C8 F9 */	bl getCollPart__8CollTreeFUl
/* 802C9550 002C6490  28 03 00 00 */	cmplwi r3, 0
/* 802C9554 002C6494  41 82 00 08 */	beq .L_802C955C
/* 802C9558 002C6498  4B E6 DE 45 */	bl makeTubeTree__8CollPartFv
.L_802C955C:
/* 802C955C 002C649C  3B DE 00 01 */	addi r30, r30, 1
/* 802C9560 002C64A0  3B FF 00 04 */	addi r31, r31, 4
/* 802C9564 002C64A4  2C 1E 00 04 */	cmpwi r30, 4
/* 802C9568 002C64A8  41 80 FF DC */	blt .L_802C9544
/* 802C956C 002C64AC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802C9570 002C64B0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802C9574 002C64B4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802C9578 002C64B8  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802C957C 002C64BC  7C 08 03 A6 */	mtlr r0
/* 802C9580 002C64C0  38 21 00 30 */	addi r1, r1, 0x30
/* 802C9584 002C64C4  4E 80 00 20 */	blr 

.global createItemAndEnemy__Q34Game7BigFoot3ObjFv
createItemAndEnemy__Q34Game7BigFoot3ObjFv:
/* 802C9588 002C64C8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802C958C 002C64CC  7C 08 02 A6 */	mflr r0
/* 802C9590 002C64D0  90 01 00 54 */	stw r0, 0x54(r1)
/* 802C9594 002C64D4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802C9598 002C64D8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802C959C 002C64DC  7C 7E 1B 78 */	mr r30, r3
/* 802C95A0 002C64E0  38 7E 02 50 */	addi r3, r30, 0x250
/* 802C95A4 002C64E4  4B EA 42 E5 */	bl isNull__Q34Game9PelletMgr15OtakaraItemCodeFv
/* 802C95A8 002C64E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802C95AC 002C64EC  41 82 00 68 */	beq .L_802C9614
/* 802C95B0 002C64F0  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802C95B4 002C64F4  38 80 00 44 */	li r4, 0x44
/* 802C95B8 002C64F8  4B E4 46 ED */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802C95BC 002C64FC  7C 7F 1B 79 */	or. r31, r3, r3
/* 802C95C0 002C6500  41 82 00 54 */	beq .L_802C9614
/* 802C95C4 002C6504  38 61 00 14 */	addi r3, r1, 0x14
/* 802C95C8 002C6508  4B E6 56 5D */	bl __ct__Q24Game13EnemyBirthArgFv
/* 802C95CC 002C650C  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 802C95D0 002C6510  7F C3 F3 78 */	mr r3, r30
/* 802C95D4 002C6514  38 81 00 14 */	addi r4, r1, 0x14
/* 802C95D8 002C6518  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802C95DC 002C651C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802C95E0 002C6520  81 8C 02 68 */	lwz r12, 0x268(r12)
/* 802C95E4 002C6524  7D 89 03 A6 */	mtctr r12
/* 802C95E8 002C6528  4E 80 04 21 */	bctrl 
/* 802C95EC 002C652C  C0 02 E3 C8 */	lfs f0, lbl_8051C728@sda21(r2)
/* 802C95F0 002C6530  7F E3 FB 78 */	mr r3, r31
/* 802C95F4 002C6534  C0 22 E3 E8 */	lfs f1, lbl_8051C748@sda21(r2)
/* 802C95F8 002C6538  38 81 00 14 */	addi r4, r1, 0x14
/* 802C95FC 002C653C  D0 01 00 08 */	stfs f0, 8(r1)
/* 802C9600 002C6540  38 C1 00 08 */	addi r6, r1, 8
/* 802C9604 002C6544  38 A0 00 1E */	li r5, 0x1e
/* 802C9608 002C6548  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802C960C 002C654C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802C9610 002C6550  48 0A 49 19 */	bl "createGroupByBigFoot__Q34Game11TamagoMushi3MgrFRQ24Game13EnemyBirthArgiR10Vector3<f>f"
.L_802C9614:
/* 802C9614 002C6554  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802C9618 002C6558  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802C961C 002C655C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802C9620 002C6560  7C 08 03 A6 */	mtlr r0
/* 802C9624 002C6564  38 21 00 50 */	addi r1, r1, 0x50
/* 802C9628 002C6568  4E 80 00 20 */	blr 

.global startBossChargeBGM__Q34Game7BigFoot3ObjFv
startBossChargeBGM__Q34Game7BigFoot3ObjFv:
/* 802C962C 002C656C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9630 002C6570  7C 08 02 A6 */	mflr r0
/* 802C9634 002C6574  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9638 002C6578  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C963C 002C657C  3B E0 00 00 */	li r31, 0
/* 802C9640 002C6580  93 C1 00 08 */	stw r30, 8(r1)
/* 802C9644 002C6584  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C9648 002C6588  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C964C 002C658C  7F C3 F3 78 */	mr r3, r30
/* 802C9650 002C6590  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9654 002C6594  7D 89 03 A6 */	mtctr r12
/* 802C9658 002C6598  4E 80 04 21 */	bctrl 
/* 802C965C 002C659C  2C 03 00 05 */	cmpwi r3, 5
/* 802C9660 002C65A0  41 82 00 3C */	beq .L_802C969C
/* 802C9664 002C65A4  7F C3 F3 78 */	mr r3, r30
/* 802C9668 002C65A8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C966C 002C65AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9670 002C65B0  7D 89 03 A6 */	mtctr r12
/* 802C9674 002C65B4  4E 80 04 21 */	bctrl 
/* 802C9678 002C65B8  2C 03 00 06 */	cmpwi r3, 6
/* 802C967C 002C65BC  41 82 00 20 */	beq .L_802C969C
/* 802C9680 002C65C0  7F C3 F3 78 */	mr r3, r30
/* 802C9684 002C65C4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9688 002C65C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C968C 002C65CC  7D 89 03 A6 */	mtctr r12
/* 802C9690 002C65D0  4E 80 04 21 */	bctrl 
/* 802C9694 002C65D4  2C 03 00 07 */	cmpwi r3, 7
/* 802C9698 002C65D8  40 82 00 08 */	bne .L_802C96A0
.L_802C969C:
/* 802C969C 002C65DC  3B E0 00 01 */	li r31, 1
.L_802C96A0:
/* 802C96A0 002C65E0  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C96A4 002C65E4  40 82 00 20 */	bne .L_802C96C4
/* 802C96A8 002C65E8  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C96AC 002C65EC  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C96B0 002C65F0  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C96B4 002C65F4  38 80 04 54 */	li r4, 0x454
/* 802C96B8 002C65F8  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C96BC 002C65FC  4C C6 31 82 */	crclr 6
/* 802C96C0 002C6600  4B D6 0F 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C96C4:
/* 802C96C4 002C6604  7F C3 F3 78 */	mr r3, r30
/* 802C96C8 002C6608  38 80 00 02 */	li r4, 2
/* 802C96CC 002C660C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C96D0 002C6610  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802C96D4 002C6614  7D 89 03 A6 */	mtctr r12
/* 802C96D8 002C6618  4E 80 04 21 */	bctrl 
/* 802C96DC 002C661C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C96E0 002C6620  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C96E4 002C6624  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C96E8 002C6628  7C 08 03 A6 */	mtlr r0
/* 802C96EC 002C662C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C96F0 002C6630  4E 80 00 20 */	blr 

.global startBossAttackLoopBGM__Q34Game7BigFoot3ObjFv
startBossAttackLoopBGM__Q34Game7BigFoot3ObjFv:
/* 802C96F4 002C6634  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C96F8 002C6638  7C 08 02 A6 */	mflr r0
/* 802C96FC 002C663C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9700 002C6640  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9704 002C6644  3B E0 00 00 */	li r31, 0
/* 802C9708 002C6648  93 C1 00 08 */	stw r30, 8(r1)
/* 802C970C 002C664C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C9710 002C6650  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9714 002C6654  7F C3 F3 78 */	mr r3, r30
/* 802C9718 002C6658  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C971C 002C665C  7D 89 03 A6 */	mtctr r12
/* 802C9720 002C6660  4E 80 04 21 */	bctrl 
/* 802C9724 002C6664  2C 03 00 05 */	cmpwi r3, 5
/* 802C9728 002C6668  41 82 00 3C */	beq .L_802C9764
/* 802C972C 002C666C  7F C3 F3 78 */	mr r3, r30
/* 802C9730 002C6670  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9734 002C6674  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9738 002C6678  7D 89 03 A6 */	mtctr r12
/* 802C973C 002C667C  4E 80 04 21 */	bctrl 
/* 802C9740 002C6680  2C 03 00 06 */	cmpwi r3, 6
/* 802C9744 002C6684  41 82 00 20 */	beq .L_802C9764
/* 802C9748 002C6688  7F C3 F3 78 */	mr r3, r30
/* 802C974C 002C668C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9750 002C6690  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9754 002C6694  7D 89 03 A6 */	mtctr r12
/* 802C9758 002C6698  4E 80 04 21 */	bctrl 
/* 802C975C 002C669C  2C 03 00 07 */	cmpwi r3, 7
/* 802C9760 002C66A0  40 82 00 08 */	bne .L_802C9768
.L_802C9764:
/* 802C9764 002C66A4  3B E0 00 01 */	li r31, 1
.L_802C9768:
/* 802C9768 002C66A8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C976C 002C66AC  40 82 00 20 */	bne .L_802C978C
/* 802C9770 002C66B0  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C9774 002C66B4  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C9778 002C66B8  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C977C 002C66BC  38 80 04 54 */	li r4, 0x454
/* 802C9780 002C66C0  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C9784 002C66C4  4C C6 31 82 */	crclr 6
/* 802C9788 002C66C8  4B D6 0E B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C978C:
/* 802C978C 002C66CC  7F C3 F3 78 */	mr r3, r30
/* 802C9790 002C66D0  38 80 00 08 */	li r4, 8
/* 802C9794 002C66D4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9798 002C66D8  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802C979C 002C66DC  7D 89 03 A6 */	mtctr r12
/* 802C97A0 002C66E0  4E 80 04 21 */	bctrl 
/* 802C97A4 002C66E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C97A8 002C66E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C97AC 002C66EC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C97B0 002C66F0  7C 08 03 A6 */	mtlr r0
/* 802C97B4 002C66F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802C97B8 002C66F8  4E 80 00 20 */	blr 

.global finishBossAttackLoopBGM__Q34Game7BigFoot3ObjFv
finishBossAttackLoopBGM__Q34Game7BigFoot3ObjFv:
/* 802C97BC 002C66FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C97C0 002C6700  7C 08 02 A6 */	mflr r0
/* 802C97C4 002C6704  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C97C8 002C6708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C97CC 002C670C  3B E0 00 00 */	li r31, 0
/* 802C97D0 002C6710  93 C1 00 08 */	stw r30, 8(r1)
/* 802C97D4 002C6714  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C97D8 002C6718  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C97DC 002C671C  7F C3 F3 78 */	mr r3, r30
/* 802C97E0 002C6720  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C97E4 002C6724  7D 89 03 A6 */	mtctr r12
/* 802C97E8 002C6728  4E 80 04 21 */	bctrl 
/* 802C97EC 002C672C  2C 03 00 05 */	cmpwi r3, 5
/* 802C97F0 002C6730  41 82 00 3C */	beq .L_802C982C
/* 802C97F4 002C6734  7F C3 F3 78 */	mr r3, r30
/* 802C97F8 002C6738  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C97FC 002C673C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9800 002C6740  7D 89 03 A6 */	mtctr r12
/* 802C9804 002C6744  4E 80 04 21 */	bctrl 
/* 802C9808 002C6748  2C 03 00 06 */	cmpwi r3, 6
/* 802C980C 002C674C  41 82 00 20 */	beq .L_802C982C
/* 802C9810 002C6750  7F C3 F3 78 */	mr r3, r30
/* 802C9814 002C6754  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9818 002C6758  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C981C 002C675C  7D 89 03 A6 */	mtctr r12
/* 802C9820 002C6760  4E 80 04 21 */	bctrl 
/* 802C9824 002C6764  2C 03 00 07 */	cmpwi r3, 7
/* 802C9828 002C6768  40 82 00 08 */	bne .L_802C9830
.L_802C982C:
/* 802C982C 002C676C  3B E0 00 01 */	li r31, 1
.L_802C9830:
/* 802C9830 002C6770  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C9834 002C6774  40 82 00 20 */	bne .L_802C9854
/* 802C9838 002C6778  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C983C 002C677C  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C9840 002C6780  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C9844 002C6784  38 80 04 54 */	li r4, 0x454
/* 802C9848 002C6788  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C984C 002C678C  4C C6 31 82 */	crclr 6
/* 802C9850 002C6790  4B D6 0D F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C9854:
/* 802C9854 002C6794  7F C3 F3 78 */	mr r3, r30
/* 802C9858 002C6798  38 80 00 01 */	li r4, 1
/* 802C985C 002C679C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9860 002C67A0  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802C9864 002C67A4  7D 89 03 A6 */	mtctr r12
/* 802C9868 002C67A8  4E 80 04 21 */	bctrl 
/* 802C986C 002C67AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9870 002C67B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C9874 002C67B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C9878 002C67B8  7C 08 03 A6 */	mtlr r0
/* 802C987C 002C67BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9880 002C67C0  4E 80 00 20 */	blr 

.global startStoneStateBossAttackLoopBGM__Q34Game7BigFoot3ObjFv
startStoneStateBossAttackLoopBGM__Q34Game7BigFoot3ObjFv:
/* 802C9884 002C67C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9888 002C67C8  7C 08 02 A6 */	mflr r0
/* 802C988C 002C67CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9890 002C67D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9894 002C67D4  93 C1 00 08 */	stw r30, 8(r1)
/* 802C9898 002C67D8  88 03 02 DE */	lbz r0, 0x2de(r3)
/* 802C989C 002C67DC  28 00 00 00 */	cmplwi r0, 0
/* 802C98A0 002C67E0  41 82 00 A0 */	beq .L_802C9940
/* 802C98A4 002C67E4  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C98A8 002C67E8  3B E0 00 00 */	li r31, 0
/* 802C98AC 002C67EC  7F C3 F3 78 */	mr r3, r30
/* 802C98B0 002C67F0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C98B4 002C67F4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C98B8 002C67F8  7D 89 03 A6 */	mtctr r12
/* 802C98BC 002C67FC  4E 80 04 21 */	bctrl 
/* 802C98C0 002C6800  2C 03 00 05 */	cmpwi r3, 5
/* 802C98C4 002C6804  41 82 00 3C */	beq .L_802C9900
/* 802C98C8 002C6808  7F C3 F3 78 */	mr r3, r30
/* 802C98CC 002C680C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C98D0 002C6810  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C98D4 002C6814  7D 89 03 A6 */	mtctr r12
/* 802C98D8 002C6818  4E 80 04 21 */	bctrl 
/* 802C98DC 002C681C  2C 03 00 06 */	cmpwi r3, 6
/* 802C98E0 002C6820  41 82 00 20 */	beq .L_802C9900
/* 802C98E4 002C6824  7F C3 F3 78 */	mr r3, r30
/* 802C98E8 002C6828  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C98EC 002C682C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C98F0 002C6830  7D 89 03 A6 */	mtctr r12
/* 802C98F4 002C6834  4E 80 04 21 */	bctrl 
/* 802C98F8 002C6838  2C 03 00 07 */	cmpwi r3, 7
/* 802C98FC 002C683C  40 82 00 08 */	bne .L_802C9904
.L_802C9900:
/* 802C9900 002C6840  3B E0 00 01 */	li r31, 1
.L_802C9904:
/* 802C9904 002C6844  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C9908 002C6848  40 82 00 20 */	bne .L_802C9928
/* 802C990C 002C684C  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C9910 002C6850  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C9914 002C6854  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C9918 002C6858  38 80 04 54 */	li r4, 0x454
/* 802C991C 002C685C  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C9920 002C6860  4C C6 31 82 */	crclr 6
/* 802C9924 002C6864  4B D6 0D 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C9928:
/* 802C9928 002C6868  7F C3 F3 78 */	mr r3, r30
/* 802C992C 002C686C  38 80 00 01 */	li r4, 1
/* 802C9930 002C6870  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9934 002C6874  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802C9938 002C6878  7D 89 03 A6 */	mtctr r12
/* 802C993C 002C687C  4E 80 04 21 */	bctrl 
.L_802C9940:
/* 802C9940 002C6880  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9944 002C6884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C9948 002C6888  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C994C 002C688C  7C 08 03 A6 */	mtlr r0
/* 802C9950 002C6890  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9954 002C6894  4E 80 00 20 */	blr 

.global finishStoneStateBossAttackLoopBGM__Q34Game7BigFoot3ObjFv
finishStoneStateBossAttackLoopBGM__Q34Game7BigFoot3ObjFv:
/* 802C9958 002C6898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C995C 002C689C  7C 08 02 A6 */	mflr r0
/* 802C9960 002C68A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9964 002C68A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9968 002C68A8  93 C1 00 08 */	stw r30, 8(r1)
/* 802C996C 002C68AC  88 03 02 DE */	lbz r0, 0x2de(r3)
/* 802C9970 002C68B0  28 00 00 00 */	cmplwi r0, 0
/* 802C9974 002C68B4  41 82 00 A0 */	beq .L_802C9A14
/* 802C9978 002C68B8  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C997C 002C68BC  3B E0 00 00 */	li r31, 0
/* 802C9980 002C68C0  7F C3 F3 78 */	mr r3, r30
/* 802C9984 002C68C4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9988 002C68C8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C998C 002C68CC  7D 89 03 A6 */	mtctr r12
/* 802C9990 002C68D0  4E 80 04 21 */	bctrl 
/* 802C9994 002C68D4  2C 03 00 05 */	cmpwi r3, 5
/* 802C9998 002C68D8  41 82 00 3C */	beq .L_802C99D4
/* 802C999C 002C68DC  7F C3 F3 78 */	mr r3, r30
/* 802C99A0 002C68E0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C99A4 002C68E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C99A8 002C68E8  7D 89 03 A6 */	mtctr r12
/* 802C99AC 002C68EC  4E 80 04 21 */	bctrl 
/* 802C99B0 002C68F0  2C 03 00 06 */	cmpwi r3, 6
/* 802C99B4 002C68F4  41 82 00 20 */	beq .L_802C99D4
/* 802C99B8 002C68F8  7F C3 F3 78 */	mr r3, r30
/* 802C99BC 002C68FC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C99C0 002C6900  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C99C4 002C6904  7D 89 03 A6 */	mtctr r12
/* 802C99C8 002C6908  4E 80 04 21 */	bctrl 
/* 802C99CC 002C690C  2C 03 00 07 */	cmpwi r3, 7
/* 802C99D0 002C6910  40 82 00 08 */	bne .L_802C99D8
.L_802C99D4:
/* 802C99D4 002C6914  3B E0 00 01 */	li r31, 1
.L_802C99D8:
/* 802C99D8 002C6918  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C99DC 002C691C  40 82 00 20 */	bne .L_802C99FC
/* 802C99E0 002C6920  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C99E4 002C6924  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C99E8 002C6928  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C99EC 002C692C  38 80 04 54 */	li r4, 0x454
/* 802C99F0 002C6930  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C99F4 002C6934  4C C6 31 82 */	crclr 6
/* 802C99F8 002C6938  4B D6 0C 49 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C99FC:
/* 802C99FC 002C693C  7F C3 F3 78 */	mr r3, r30
/* 802C9A00 002C6940  38 80 00 08 */	li r4, 8
/* 802C9A04 002C6944  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9A08 002C6948  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802C9A0C 002C694C  7D 89 03 A6 */	mtctr r12
/* 802C9A10 002C6950  4E 80 04 21 */	bctrl 
.L_802C9A14:
/* 802C9A14 002C6954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9A18 002C6958  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C9A1C 002C695C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C9A20 002C6960  7C 08 03 A6 */	mtlr r0
/* 802C9A24 002C6964  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9A28 002C6968  4E 80 00 20 */	blr 

.global updateBossBGM__Q34Game7BigFoot3ObjFv
updateBossBGM__Q34Game7BigFoot3ObjFv:
/* 802C9A2C 002C696C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802C9A30 002C6970  7C 08 02 A6 */	mflr r0
/* 802C9A34 002C6974  90 01 00 24 */	stw r0, 0x24(r1)
/* 802C9A38 002C6978  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802C9A3C 002C697C  3B E0 00 00 */	li r31, 0
/* 802C9A40 002C6980  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802C9A44 002C6984  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802C9A48 002C6988  7C 7D 1B 78 */	mr r29, r3
/* 802C9A4C 002C698C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C9A50 002C6990  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9A54 002C6994  7F C3 F3 78 */	mr r3, r30
/* 802C9A58 002C6998  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9A5C 002C699C  7D 89 03 A6 */	mtctr r12
/* 802C9A60 002C69A0  4E 80 04 21 */	bctrl 
/* 802C9A64 002C69A4  2C 03 00 05 */	cmpwi r3, 5
/* 802C9A68 002C69A8  41 82 00 3C */	beq .L_802C9AA4
/* 802C9A6C 002C69AC  7F C3 F3 78 */	mr r3, r30
/* 802C9A70 002C69B0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9A74 002C69B4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9A78 002C69B8  7D 89 03 A6 */	mtctr r12
/* 802C9A7C 002C69BC  4E 80 04 21 */	bctrl 
/* 802C9A80 002C69C0  2C 03 00 06 */	cmpwi r3, 6
/* 802C9A84 002C69C4  41 82 00 20 */	beq .L_802C9AA4
/* 802C9A88 002C69C8  7F C3 F3 78 */	mr r3, r30
/* 802C9A8C 002C69CC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9A90 002C69D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9A94 002C69D4  7D 89 03 A6 */	mtctr r12
/* 802C9A98 002C69D8  4E 80 04 21 */	bctrl 
/* 802C9A9C 002C69DC  2C 03 00 07 */	cmpwi r3, 7
/* 802C9AA0 002C69E0  40 82 00 08 */	bne .L_802C9AA8
.L_802C9AA4:
/* 802C9AA4 002C69E4  3B E0 00 01 */	li r31, 1
.L_802C9AA8:
/* 802C9AA8 002C69E8  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C9AAC 002C69EC  40 82 00 20 */	bne .L_802C9ACC
/* 802C9AB0 002C69F0  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C9AB4 002C69F4  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C9AB8 002C69F8  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C9ABC 002C69FC  38 80 04 54 */	li r4, 0x454
/* 802C9AC0 002C6A00  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C9AC4 002C6A04  4C C6 31 82 */	crclr 6
/* 802C9AC8 002C6A08  4B D6 0B 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C9ACC:
/* 802C9ACC 002C6A0C  80 1D 01 F4 */	lwz r0, 0x1f4(r29)
/* 802C9AD0 002C6A10  2C 00 00 00 */	cmpwi r0, 0
/* 802C9AD4 002C6A14  41 82 00 20 */	beq .L_802C9AF4
/* 802C9AD8 002C6A18  7F C3 F3 78 */	mr r3, r30
/* 802C9ADC 002C6A1C  38 80 00 01 */	li r4, 1
/* 802C9AE0 002C6A20  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9AE4 002C6A24  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802C9AE8 002C6A28  7D 89 03 A6 */	mtctr r12
/* 802C9AEC 002C6A2C  4E 80 04 21 */	bctrl 
/* 802C9AF0 002C6A30  48 00 00 1C */	b .L_802C9B0C
.L_802C9AF4:
/* 802C9AF4 002C6A34  7F C3 F3 78 */	mr r3, r30
/* 802C9AF8 002C6A38  38 80 00 00 */	li r4, 0
/* 802C9AFC 002C6A3C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9B00 002C6A40  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802C9B04 002C6A44  7D 89 03 A6 */	mtctr r12
/* 802C9B08 002C6A48  4E 80 04 21 */	bctrl 
.L_802C9B0C:
/* 802C9B0C 002C6A4C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802C9B10 002C6A50  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802C9B14 002C6A54  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802C9B18 002C6A58  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802C9B1C 002C6A5C  7C 08 03 A6 */	mtlr r0
/* 802C9B20 002C6A60  38 21 00 20 */	addi r1, r1, 0x20
/* 802C9B24 002C6A64  4E 80 00 20 */	blr 

.global resetBossAppearBGM__Q34Game7BigFoot3ObjFv
resetBossAppearBGM__Q34Game7BigFoot3ObjFv:
/* 802C9B28 002C6A68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9B2C 002C6A6C  7C 08 02 A6 */	mflr r0
/* 802C9B30 002C6A70  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9B34 002C6A74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9B38 002C6A78  3B E0 00 00 */	li r31, 0
/* 802C9B3C 002C6A7C  93 C1 00 08 */	stw r30, 8(r1)
/* 802C9B40 002C6A80  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C9B44 002C6A84  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9B48 002C6A88  7F C3 F3 78 */	mr r3, r30
/* 802C9B4C 002C6A8C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9B50 002C6A90  7D 89 03 A6 */	mtctr r12
/* 802C9B54 002C6A94  4E 80 04 21 */	bctrl 
/* 802C9B58 002C6A98  2C 03 00 05 */	cmpwi r3, 5
/* 802C9B5C 002C6A9C  41 82 00 3C */	beq .L_802C9B98
/* 802C9B60 002C6AA0  7F C3 F3 78 */	mr r3, r30
/* 802C9B64 002C6AA4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9B68 002C6AA8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9B6C 002C6AAC  7D 89 03 A6 */	mtctr r12
/* 802C9B70 002C6AB0  4E 80 04 21 */	bctrl 
/* 802C9B74 002C6AB4  2C 03 00 06 */	cmpwi r3, 6
/* 802C9B78 002C6AB8  41 82 00 20 */	beq .L_802C9B98
/* 802C9B7C 002C6ABC  7F C3 F3 78 */	mr r3, r30
/* 802C9B80 002C6AC0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9B84 002C6AC4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9B88 002C6AC8  7D 89 03 A6 */	mtctr r12
/* 802C9B8C 002C6ACC  4E 80 04 21 */	bctrl 
/* 802C9B90 002C6AD0  2C 03 00 07 */	cmpwi r3, 7
/* 802C9B94 002C6AD4  40 82 00 08 */	bne .L_802C9B9C
.L_802C9B98:
/* 802C9B98 002C6AD8  3B E0 00 01 */	li r31, 1
.L_802C9B9C:
/* 802C9B9C 002C6ADC  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C9BA0 002C6AE0  40 82 00 20 */	bne .L_802C9BC0
/* 802C9BA4 002C6AE4  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C9BA8 002C6AE8  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C9BAC 002C6AEC  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C9BB0 002C6AF0  38 80 04 54 */	li r4, 0x454
/* 802C9BB4 002C6AF4  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C9BB8 002C6AF8  4C C6 31 82 */	crclr 6
/* 802C9BBC 002C6AFC  4B D6 0A 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C9BC0:
/* 802C9BC0 002C6B00  7F C3 F3 78 */	mr r3, r30
/* 802C9BC4 002C6B04  38 80 00 00 */	li r4, 0
/* 802C9BC8 002C6B08  48 19 5E 29 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802C9BCC 002C6B0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9BD0 002C6B10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C9BD4 002C6B14  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C9BD8 002C6B18  7C 08 03 A6 */	mtlr r0
/* 802C9BDC 002C6B1C  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9BE0 002C6B20  4E 80 00 20 */	blr 

.global setBossAppearBGM__Q34Game7BigFoot3ObjFv
setBossAppearBGM__Q34Game7BigFoot3ObjFv:
/* 802C9BE4 002C6B24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C9BE8 002C6B28  7C 08 02 A6 */	mflr r0
/* 802C9BEC 002C6B2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C9BF0 002C6B30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C9BF4 002C6B34  3B E0 00 00 */	li r31, 0
/* 802C9BF8 002C6B38  93 C1 00 08 */	stw r30, 8(r1)
/* 802C9BFC 002C6B3C  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802C9C00 002C6B40  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9C04 002C6B44  7F C3 F3 78 */	mr r3, r30
/* 802C9C08 002C6B48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9C0C 002C6B4C  7D 89 03 A6 */	mtctr r12
/* 802C9C10 002C6B50  4E 80 04 21 */	bctrl 
/* 802C9C14 002C6B54  2C 03 00 05 */	cmpwi r3, 5
/* 802C9C18 002C6B58  41 82 00 3C */	beq .L_802C9C54
/* 802C9C1C 002C6B5C  7F C3 F3 78 */	mr r3, r30
/* 802C9C20 002C6B60  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9C24 002C6B64  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9C28 002C6B68  7D 89 03 A6 */	mtctr r12
/* 802C9C2C 002C6B6C  4E 80 04 21 */	bctrl 
/* 802C9C30 002C6B70  2C 03 00 06 */	cmpwi r3, 6
/* 802C9C34 002C6B74  41 82 00 20 */	beq .L_802C9C54
/* 802C9C38 002C6B78  7F C3 F3 78 */	mr r3, r30
/* 802C9C3C 002C6B7C  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802C9C40 002C6B80  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802C9C44 002C6B84  7D 89 03 A6 */	mtctr r12
/* 802C9C48 002C6B88  4E 80 04 21 */	bctrl 
/* 802C9C4C 002C6B8C  2C 03 00 07 */	cmpwi r3, 7
/* 802C9C50 002C6B90  40 82 00 08 */	bne .L_802C9C58
.L_802C9C54:
/* 802C9C54 002C6B94  3B E0 00 01 */	li r31, 1
.L_802C9C58:
/* 802C9C58 002C6B98  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802C9C5C 002C6B9C  40 82 00 20 */	bne .L_802C9C7C
/* 802C9C60 002C6BA0  3C 60 80 49 */	lis r3, lbl_8048B7B8@ha
/* 802C9C64 002C6BA4  3C A0 80 49 */	lis r5, lbl_8048B7D0@ha
/* 802C9C68 002C6BA8  38 63 B7 B8 */	addi r3, r3, lbl_8048B7B8@l
/* 802C9C6C 002C6BAC  38 80 04 54 */	li r4, 0x454
/* 802C9C70 002C6BB0  38 A5 B7 D0 */	addi r5, r5, lbl_8048B7D0@l
/* 802C9C74 002C6BB4  4C C6 31 82 */	crclr 6
/* 802C9C78 002C6BB8  4B D6 09 C9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802C9C7C:
/* 802C9C7C 002C6BBC  7F C3 F3 78 */	mr r3, r30
/* 802C9C80 002C6BC0  38 80 00 01 */	li r4, 1
/* 802C9C84 002C6BC4  48 19 5D 6D */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802C9C88 002C6BC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C9C8C 002C6BCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C9C90 002C6BD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802C9C94 002C6BD4  7C 08 03 A6 */	mtlr r0
/* 802C9C98 002C6BD8  38 21 00 10 */	addi r1, r1, 0x10
/* 802C9C9C 002C6BDC  4E 80 00 20 */	blr 

.global createEffect__Q34Game7BigFoot3ObjFv
createEffect__Q34Game7BigFoot3ObjFv:
/* 802C9CA0 002C6BE0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802C9CA4 002C6BE4  7C 08 02 A6 */	mflr r0
/* 802C9CA8 002C6BE8  3D 80 80 4E */	lis r12, __vt__Q23efx9TChasePos@ha
/* 802C9CAC 002C6BEC  3D 60 80 4D */	lis r11, __vt__Q23efx10TDamaFootw@ha
/* 802C9CB0 002C6BF0  90 01 00 54 */	stw r0, 0x54(r1)
/* 802C9CB4 002C6BF4  3D 40 80 4E */	lis r10, __vt__Q23efx12TChasePosPos@ha
/* 802C9CB8 002C6BF8  3D 20 80 4D */	lis r9, __vt__Q23efx11TOdamaHahen@ha
/* 802C9CBC 002C6BFC  3D 00 80 4D */	lis r8, __vt__Q23efx14TDamaDeadElecA@ha
/* 802C9CC0 002C6C00  BD C1 00 08 */	stmw r14, 8(r1)
/* 802C9CC4 002C6C04  7C 70 1B 78 */	mr r16, r3
/* 802C9CC8 002C6C08  3D C0 80 4E */	lis r14, __vt__Q23efx5TSync@ha
/* 802C9CCC 002C6C0C  3C E0 80 4D */	lis r7, __vt__Q23efx14TDamaDeadElecB@ha
/* 802C9CD0 002C6C10  3C C0 80 4D */	lis r6, __vt__Q23efx16TOdamaDeadHahenA@ha
/* 802C9CD4 002C6C14  3C A0 80 4D */	lis r5, __vt__Q23efx16TOdamaDeadHahenB@ha
/* 802C9CD8 002C6C18  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 802C9CDC 002C6C1C  3C 60 80 4D */	lis r3, __vt__Q23efx10TOdamaFur2@ha
/* 802C9CE0 002C6C20  39 CE 69 8C */	addi r14, r14, __vt__Q23efx5TSync@l
/* 802C9CE4 002C6C24  39 8C 69 40 */	addi r12, r12, __vt__Q23efx9TChasePos@l
/* 802C9CE8 002C6C28  39 6B DA F8 */	addi r11, r11, __vt__Q23efx10TDamaFootw@l
/* 802C9CEC 002C6C2C  39 4A 68 10 */	addi r10, r10, __vt__Q23efx12TChasePosPos@l
/* 802C9CF0 002C6C30  39 29 1D A8 */	addi r9, r9, __vt__Q23efx11TOdamaHahen@l
/* 802C9CF4 002C6C34  39 08 DA 60 */	addi r8, r8, __vt__Q23efx14TDamaDeadElecA@l
/* 802C9CF8 002C6C38  38 E7 DA 14 */	addi r7, r7, __vt__Q23efx14TDamaDeadElecB@l
/* 802C9CFC 002C6C3C  38 C6 1D 5C */	addi r6, r6, __vt__Q23efx16TOdamaDeadHahenA@l
/* 802C9D00 002C6C40  38 A5 1D 10 */	addi r5, r5, __vt__Q23efx16TOdamaDeadHahenB@l
/* 802C9D04 002C6C44  38 84 68 A8 */	addi r4, r4, __vt__Q23efx9TChaseMtx@l
/* 802C9D08 002C6C48  38 63 1C C4 */	addi r3, r3, __vt__Q23efx10TOdamaFur2@l
/* 802C9D0C 002C6C4C  7E 1F 83 78 */	mr r31, r16
/* 802C9D10 002C6C50  7E 1E 83 78 */	mr r30, r16
/* 802C9D14 002C6C54  7E 1D 83 78 */	mr r29, r16
/* 802C9D18 002C6C58  3A 8E 00 14 */	addi r20, r14, 0x14
/* 802C9D1C 002C6C5C  3A 6C 00 14 */	addi r19, r12, 0x14
/* 802C9D20 002C6C60  3B 8B 00 14 */	addi r28, r11, 0x14
/* 802C9D24 002C6C64  3B 6A 00 14 */	addi r27, r10, 0x14
/* 802C9D28 002C6C68  3B 49 00 14 */	addi r26, r9, 0x14
/* 802C9D2C 002C6C6C  3B 28 00 14 */	addi r25, r8, 0x14
/* 802C9D30 002C6C70  3B 07 00 14 */	addi r24, r7, 0x14
/* 802C9D34 002C6C74  3A E6 00 14 */	addi r23, r6, 0x14
/* 802C9D38 002C6C78  3A C5 00 14 */	addi r22, r5, 0x14
/* 802C9D3C 002C6C7C  3A 44 00 14 */	addi r18, r4, 0x14
/* 802C9D40 002C6C80  3A A3 00 14 */	addi r21, r3, 0x14
/* 802C9D44 002C6C84  3A 20 00 00 */	li r17, 0
.L_802C9D48:
/* 802C9D48 002C6C88  38 60 00 2C */	li r3, 0x2c
/* 802C9D4C 002C6C8C  4B D5 A1 59 */	bl __nw__FUl
/* 802C9D50 002C6C90  7C 6F 1B 79 */	or. r15, r3, r3
/* 802C9D54 002C6C94  41 82 00 20 */	beq .L_802C9D74
/* 802C9D58 002C6C98  38 80 00 00 */	li r4, 0
/* 802C9D5C 002C6C9C  38 A0 00 F1 */	li r5, 0xf1
/* 802C9D60 002C6CA0  38 C0 00 25 */	li r6, 0x25
/* 802C9D64 002C6CA4  48 0E 64 DD */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 802C9D68 002C6CA8  3C 60 80 4D */	lis r3, __vt__Q23efx10TOdamaFoot@ha
/* 802C9D6C 002C6CAC  38 03 1D F4 */	addi r0, r3, __vt__Q23efx10TOdamaFoot@l
/* 802C9D70 002C6CB0  90 0F 00 00 */	stw r0, 0(r15)
.L_802C9D74:
/* 802C9D74 002C6CB4  91 FF 03 B0 */	stw r15, 0x3b0(r31)
/* 802C9D78 002C6CB8  38 60 00 14 */	li r3, 0x14
/* 802C9D7C 002C6CBC  4B D5 A1 29 */	bl __nw__FUl
/* 802C9D80 002C6CC0  28 03 00 00 */	cmplwi r3, 0
/* 802C9D84 002C6CC4  41 82 00 6C */	beq .L_802C9DF0
/* 802C9D88 002C6CC8  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802C9D8C 002C6CCC  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802C9D90 002C6CD0  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802C9D94 002C6CD4  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802C9D98 002C6CD8  90 03 00 00 */	stw r0, 0(r3)
/* 802C9D9C 002C6CDC  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802C9DA0 002C6CE0  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802C9DA4 002C6CE4  3C 80 80 4D */	lis r4, __vt__Q23efx10TDamaFootw@ha
/* 802C9DA8 002C6CE8  90 03 00 04 */	stw r0, 4(r3)
/* 802C9DAC 002C6CEC  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802C9DB0 002C6CF0  39 00 00 00 */	li r8, 0
/* 802C9DB4 002C6CF4  38 E0 02 B2 */	li r7, 0x2b2
/* 802C9DB8 002C6CF8  90 03 00 00 */	stw r0, 0(r3)
/* 802C9DBC 002C6CFC  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802C9DC0 002C6D00  38 A0 00 23 */	li r5, 0x23
/* 802C9DC4 002C6D04  38 04 DA F8 */	addi r0, r4, __vt__Q23efx10TDamaFootw@l
/* 802C9DC8 002C6D08  92 83 00 04 */	stw r20, 4(r3)
/* 802C9DCC 002C6D0C  91 03 00 08 */	stw r8, 8(r3)
/* 802C9DD0 002C6D10  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802C9DD4 002C6D14  99 03 00 0E */	stb r8, 0xe(r3)
/* 802C9DD8 002C6D18  90 C3 00 00 */	stw r6, 0(r3)
/* 802C9DDC 002C6D1C  92 63 00 04 */	stw r19, 4(r3)
/* 802C9DE0 002C6D20  91 03 00 10 */	stw r8, 0x10(r3)
/* 802C9DE4 002C6D24  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802C9DE8 002C6D28  90 03 00 00 */	stw r0, 0(r3)
/* 802C9DEC 002C6D2C  93 83 00 04 */	stw r28, 4(r3)
.L_802C9DF0:
/* 802C9DF0 002C6D30  90 7F 03 C0 */	stw r3, 0x3c0(r31)
/* 802C9DF4 002C6D34  7F CF F3 78 */	mr r15, r30
/* 802C9DF8 002C6D38  39 C0 00 00 */	li r14, 0
.L_802C9DFC:
/* 802C9DFC 002C6D3C  38 60 00 18 */	li r3, 0x18
/* 802C9E00 002C6D40  4B D5 A0 A5 */	bl __nw__FUl
/* 802C9E04 002C6D44  28 03 00 00 */	cmplwi r3, 0
/* 802C9E08 002C6D48  41 82 00 70 */	beq .L_802C9E78
/* 802C9E0C 002C6D4C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802C9E10 002C6D50  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802C9E14 002C6D54  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802C9E18 002C6D58  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802C9E1C 002C6D5C  90 03 00 00 */	stw r0, 0(r3)
/* 802C9E20 002C6D60  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802C9E24 002C6D64  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802C9E28 002C6D68  3C 80 80 4D */	lis r4, __vt__Q23efx11TOdamaHahen@ha
/* 802C9E2C 002C6D6C  90 03 00 04 */	stw r0, 4(r3)
/* 802C9E30 002C6D70  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802C9E34 002C6D74  39 00 00 00 */	li r8, 0
/* 802C9E38 002C6D78  38 E0 02 B2 */	li r7, 0x2b2
/* 802C9E3C 002C6D7C  90 03 00 00 */	stw r0, 0(r3)
/* 802C9E40 002C6D80  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802C9E44 002C6D84  38 A0 00 F4 */	li r5, 0xf4
/* 802C9E48 002C6D88  38 04 1D A8 */	addi r0, r4, __vt__Q23efx11TOdamaHahen@l
/* 802C9E4C 002C6D8C  92 83 00 04 */	stw r20, 4(r3)
/* 802C9E50 002C6D90  91 03 00 08 */	stw r8, 8(r3)
/* 802C9E54 002C6D94  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802C9E58 002C6D98  99 03 00 0E */	stb r8, 0xe(r3)
/* 802C9E5C 002C6D9C  90 C3 00 00 */	stw r6, 0(r3)
/* 802C9E60 002C6DA0  93 63 00 04 */	stw r27, 4(r3)
/* 802C9E64 002C6DA4  91 03 00 10 */	stw r8, 0x10(r3)
/* 802C9E68 002C6DA8  91 03 00 14 */	stw r8, 0x14(r3)
/* 802C9E6C 002C6DAC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802C9E70 002C6DB0  90 03 00 00 */	stw r0, 0(r3)
/* 802C9E74 002C6DB4  93 43 00 04 */	stw r26, 4(r3)
.L_802C9E78:
/* 802C9E78 002C6DB8  90 6F 03 DC */	stw r3, 0x3dc(r15)
/* 802C9E7C 002C6DBC  38 60 00 18 */	li r3, 0x18
/* 802C9E80 002C6DC0  4B D5 A0 25 */	bl __nw__FUl
/* 802C9E84 002C6DC4  28 03 00 00 */	cmplwi r3, 0
/* 802C9E88 002C6DC8  41 82 00 70 */	beq .L_802C9EF8
/* 802C9E8C 002C6DCC  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802C9E90 002C6DD0  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802C9E94 002C6DD4  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802C9E98 002C6DD8  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802C9E9C 002C6DDC  90 03 00 00 */	stw r0, 0(r3)
/* 802C9EA0 002C6DE0  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802C9EA4 002C6DE4  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802C9EA8 002C6DE8  3C 80 80 4D */	lis r4, __vt__Q23efx14TDamaDeadElecA@ha
/* 802C9EAC 002C6DEC  90 03 00 04 */	stw r0, 4(r3)
/* 802C9EB0 002C6DF0  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802C9EB4 002C6DF4  39 00 00 00 */	li r8, 0
/* 802C9EB8 002C6DF8  38 E0 02 B2 */	li r7, 0x2b2
/* 802C9EBC 002C6DFC  90 03 00 00 */	stw r0, 0(r3)
/* 802C9EC0 002C6E00  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802C9EC4 002C6E04  38 A0 00 1D */	li r5, 0x1d
/* 802C9EC8 002C6E08  38 04 DA 60 */	addi r0, r4, __vt__Q23efx14TDamaDeadElecA@l
/* 802C9ECC 002C6E0C  92 83 00 04 */	stw r20, 4(r3)
/* 802C9ED0 002C6E10  91 03 00 08 */	stw r8, 8(r3)
/* 802C9ED4 002C6E14  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802C9ED8 002C6E18  99 03 00 0E */	stb r8, 0xe(r3)
/* 802C9EDC 002C6E1C  90 C3 00 00 */	stw r6, 0(r3)
/* 802C9EE0 002C6E20  93 63 00 04 */	stw r27, 4(r3)
/* 802C9EE4 002C6E24  91 03 00 10 */	stw r8, 0x10(r3)
/* 802C9EE8 002C6E28  91 03 00 14 */	stw r8, 0x14(r3)
/* 802C9EEC 002C6E2C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802C9EF0 002C6E30  90 03 00 00 */	stw r0, 0(r3)
/* 802C9EF4 002C6E34  93 23 00 04 */	stw r25, 4(r3)
.L_802C9EF8:
/* 802C9EF8 002C6E38  39 CE 00 01 */	addi r14, r14, 1
/* 802C9EFC 002C6E3C  90 6F 04 0C */	stw r3, 0x40c(r15)
/* 802C9F00 002C6E40  2C 0E 00 03 */	cmpwi r14, 3
/* 802C9F04 002C6E44  39 EF 00 04 */	addi r15, r15, 4
/* 802C9F08 002C6E48  41 80 FE F4 */	blt .L_802C9DFC
/* 802C9F0C 002C6E4C  39 C0 00 00 */	li r14, 0
/* 802C9F10 002C6E50  7F AF EB 78 */	mr r15, r29
.L_802C9F14:
/* 802C9F14 002C6E54  38 60 00 14 */	li r3, 0x14
/* 802C9F18 002C6E58  4B D5 9F 8D */	bl __nw__FUl
/* 802C9F1C 002C6E5C  28 03 00 00 */	cmplwi r3, 0
/* 802C9F20 002C6E60  41 82 00 6C */	beq .L_802C9F8C
/* 802C9F24 002C6E64  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802C9F28 002C6E68  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802C9F2C 002C6E6C  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802C9F30 002C6E70  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802C9F34 002C6E74  90 03 00 00 */	stw r0, 0(r3)
/* 802C9F38 002C6E78  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802C9F3C 002C6E7C  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802C9F40 002C6E80  3C 80 80 4D */	lis r4, __vt__Q23efx14TDamaDeadElecB@ha
/* 802C9F44 002C6E84  90 03 00 04 */	stw r0, 4(r3)
/* 802C9F48 002C6E88  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802C9F4C 002C6E8C  39 00 00 00 */	li r8, 0
/* 802C9F50 002C6E90  38 E0 02 B2 */	li r7, 0x2b2
/* 802C9F54 002C6E94  90 03 00 00 */	stw r0, 0(r3)
/* 802C9F58 002C6E98  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802C9F5C 002C6E9C  38 A0 00 1E */	li r5, 0x1e
/* 802C9F60 002C6EA0  38 04 DA 14 */	addi r0, r4, __vt__Q23efx14TDamaDeadElecB@l
/* 802C9F64 002C6EA4  92 83 00 04 */	stw r20, 4(r3)
/* 802C9F68 002C6EA8  91 03 00 08 */	stw r8, 8(r3)
/* 802C9F6C 002C6EAC  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802C9F70 002C6EB0  99 03 00 0E */	stb r8, 0xe(r3)
/* 802C9F74 002C6EB4  90 C3 00 00 */	stw r6, 0(r3)
/* 802C9F78 002C6EB8  92 63 00 04 */	stw r19, 4(r3)
/* 802C9F7C 002C6EBC  91 03 00 10 */	stw r8, 0x10(r3)
/* 802C9F80 002C6EC0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802C9F84 002C6EC4  90 03 00 00 */	stw r0, 0(r3)
/* 802C9F88 002C6EC8  93 03 00 04 */	stw r24, 4(r3)
.L_802C9F8C:
/* 802C9F8C 002C6ECC  90 6F 04 3C */	stw r3, 0x43c(r15)
/* 802C9F90 002C6ED0  38 60 00 18 */	li r3, 0x18
/* 802C9F94 002C6ED4  4B D5 9F 11 */	bl __nw__FUl
/* 802C9F98 002C6ED8  28 03 00 00 */	cmplwi r3, 0
/* 802C9F9C 002C6EDC  41 82 00 70 */	beq .L_802CA00C
/* 802C9FA0 002C6EE0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802C9FA4 002C6EE4  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802C9FA8 002C6EE8  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802C9FAC 002C6EEC  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802C9FB0 002C6EF0  90 03 00 00 */	stw r0, 0(r3)
/* 802C9FB4 002C6EF4  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802C9FB8 002C6EF8  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802C9FBC 002C6EFC  3C 80 80 4D */	lis r4, __vt__Q23efx16TOdamaDeadHahenA@ha
/* 802C9FC0 002C6F00  90 03 00 04 */	stw r0, 4(r3)
/* 802C9FC4 002C6F04  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802C9FC8 002C6F08  39 00 00 00 */	li r8, 0
/* 802C9FCC 002C6F0C  38 E0 02 B2 */	li r7, 0x2b2
/* 802C9FD0 002C6F10  90 03 00 00 */	stw r0, 0(r3)
/* 802C9FD4 002C6F14  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802C9FD8 002C6F18  38 A0 00 ED */	li r5, 0xed
/* 802C9FDC 002C6F1C  38 04 1D 5C */	addi r0, r4, __vt__Q23efx16TOdamaDeadHahenA@l
/* 802C9FE0 002C6F20  92 83 00 04 */	stw r20, 4(r3)
/* 802C9FE4 002C6F24  91 03 00 08 */	stw r8, 8(r3)
/* 802C9FE8 002C6F28  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802C9FEC 002C6F2C  99 03 00 0E */	stb r8, 0xe(r3)
/* 802C9FF0 002C6F30  90 C3 00 00 */	stw r6, 0(r3)
/* 802C9FF4 002C6F34  93 63 00 04 */	stw r27, 4(r3)
/* 802C9FF8 002C6F38  91 03 00 10 */	stw r8, 0x10(r3)
/* 802C9FFC 002C6F3C  91 03 00 14 */	stw r8, 0x14(r3)
/* 802CA000 002C6F40  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802CA004 002C6F44  90 03 00 00 */	stw r0, 0(r3)
/* 802CA008 002C6F48  92 E3 00 04 */	stw r23, 4(r3)
.L_802CA00C:
/* 802CA00C 002C6F4C  39 CE 00 01 */	addi r14, r14, 1
/* 802CA010 002C6F50  90 6F 04 5C */	stw r3, 0x45c(r15)
/* 802CA014 002C6F54  2C 0E 00 02 */	cmpwi r14, 2
/* 802CA018 002C6F58  39 EF 00 04 */	addi r15, r15, 4
/* 802CA01C 002C6F5C  41 80 FE F8 */	blt .L_802C9F14
/* 802CA020 002C6F60  38 60 00 18 */	li r3, 0x18
/* 802CA024 002C6F64  4B D5 9E 81 */	bl __nw__FUl
/* 802CA028 002C6F68  28 03 00 00 */	cmplwi r3, 0
/* 802CA02C 002C6F6C  41 82 00 70 */	beq .L_802CA09C
/* 802CA030 002C6F70  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802CA034 002C6F74  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802CA038 002C6F78  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802CA03C 002C6F7C  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802CA040 002C6F80  90 03 00 00 */	stw r0, 0(r3)
/* 802CA044 002C6F84  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802CA048 002C6F88  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802CA04C 002C6F8C  3C 80 80 4D */	lis r4, __vt__Q23efx16TOdamaDeadHahenB@ha
/* 802CA050 002C6F90  90 03 00 04 */	stw r0, 4(r3)
/* 802CA054 002C6F94  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802CA058 002C6F98  39 00 00 00 */	li r8, 0
/* 802CA05C 002C6F9C  38 E0 02 B2 */	li r7, 0x2b2
/* 802CA060 002C6FA0  90 03 00 00 */	stw r0, 0(r3)
/* 802CA064 002C6FA4  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802CA068 002C6FA8  38 A0 00 EE */	li r5, 0xee
/* 802CA06C 002C6FAC  38 04 1D 10 */	addi r0, r4, __vt__Q23efx16TOdamaDeadHahenB@l
/* 802CA070 002C6FB0  92 83 00 04 */	stw r20, 4(r3)
/* 802CA074 002C6FB4  91 03 00 08 */	stw r8, 8(r3)
/* 802CA078 002C6FB8  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802CA07C 002C6FBC  99 03 00 0E */	stb r8, 0xe(r3)
/* 802CA080 002C6FC0  90 C3 00 00 */	stw r6, 0(r3)
/* 802CA084 002C6FC4  93 63 00 04 */	stw r27, 4(r3)
/* 802CA088 002C6FC8  91 03 00 10 */	stw r8, 0x10(r3)
/* 802CA08C 002C6FCC  91 03 00 14 */	stw r8, 0x14(r3)
/* 802CA090 002C6FD0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802CA094 002C6FD4  90 03 00 00 */	stw r0, 0(r3)
/* 802CA098 002C6FD8  92 C3 00 04 */	stw r22, 4(r3)
.L_802CA09C:
/* 802CA09C 002C6FDC  90 7F 04 7C */	stw r3, 0x47c(r31)
/* 802CA0A0 002C6FE0  38 60 00 14 */	li r3, 0x14
/* 802CA0A4 002C6FE4  4B D5 9E 01 */	bl __nw__FUl
/* 802CA0A8 002C6FE8  28 03 00 00 */	cmplwi r3, 0
/* 802CA0AC 002C6FEC  41 82 00 6C */	beq .L_802CA118
/* 802CA0B0 002C6FF0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802CA0B4 002C6FF4  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802CA0B8 002C6FF8  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802CA0BC 002C6FFC  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802CA0C0 002C7000  90 03 00 00 */	stw r0, 0(r3)
/* 802CA0C4 002C7004  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802CA0C8 002C7008  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802CA0CC 002C700C  3C 80 80 4D */	lis r4, __vt__Q23efx10TOdamaFur2@ha
/* 802CA0D0 002C7010  90 03 00 04 */	stw r0, 4(r3)
/* 802CA0D4 002C7014  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802CA0D8 002C7018  39 00 00 00 */	li r8, 0
/* 802CA0DC 002C701C  38 E0 02 B2 */	li r7, 0x2b2
/* 802CA0E0 002C7020  90 03 00 00 */	stw r0, 0(r3)
/* 802CA0E4 002C7024  38 C5 68 A8 */	addi r6, r5, __vt__Q23efx9TChaseMtx@l
/* 802CA0E8 002C7028  38 A0 00 F3 */	li r5, 0xf3
/* 802CA0EC 002C702C  38 04 1C C4 */	addi r0, r4, __vt__Q23efx10TOdamaFur2@l
/* 802CA0F0 002C7030  92 83 00 04 */	stw r20, 4(r3)
/* 802CA0F4 002C7034  91 03 00 08 */	stw r8, 8(r3)
/* 802CA0F8 002C7038  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802CA0FC 002C703C  99 03 00 0E */	stb r8, 0xe(r3)
/* 802CA100 002C7040  90 C3 00 00 */	stw r6, 0(r3)
/* 802CA104 002C7044  92 43 00 04 */	stw r18, 4(r3)
/* 802CA108 002C7048  91 03 00 10 */	stw r8, 0x10(r3)
/* 802CA10C 002C704C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802CA110 002C7050  90 03 00 00 */	stw r0, 0(r3)
/* 802CA114 002C7054  92 A3 00 04 */	stw r21, 4(r3)
.L_802CA118:
/* 802CA118 002C7058  3A 31 00 01 */	addi r17, r17, 1
/* 802CA11C 002C705C  90 7F 04 98 */	stw r3, 0x498(r31)
/* 802CA120 002C7060  2C 11 00 04 */	cmpwi r17, 4
/* 802CA124 002C7064  3B FF 00 04 */	addi r31, r31, 4
/* 802CA128 002C7068  3B DE 00 0C */	addi r30, r30, 0xc
/* 802CA12C 002C706C  3B BD 00 08 */	addi r29, r29, 8
/* 802CA130 002C7070  41 80 FC 18 */	blt .L_802C9D48
/* 802CA134 002C7074  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaSmoke@ha
/* 802CA138 002C7078  7E 0F 83 78 */	mr r15, r16
/* 802CA13C 002C707C  38 63 D9 30 */	addi r3, r3, __vt__Q23efx10TDamaSmoke@l
/* 802CA140 002C7080  39 C0 00 00 */	li r14, 0
/* 802CA144 002C7084  3A 23 00 14 */	addi r17, r3, 0x14
.L_802CA148:
/* 802CA148 002C7088  38 60 00 14 */	li r3, 0x14
/* 802CA14C 002C708C  4B D5 9D 59 */	bl __nw__FUl
/* 802CA150 002C7090  28 03 00 00 */	cmplwi r3, 0
/* 802CA154 002C7094  41 82 00 6C */	beq .L_802CA1C0
/* 802CA158 002C7098  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802CA15C 002C709C  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802CA160 002C70A0  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802CA164 002C70A4  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802CA168 002C70A8  90 03 00 00 */	stw r0, 0(r3)
/* 802CA16C 002C70AC  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802CA170 002C70B0  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802CA174 002C70B4  3C 80 80 4D */	lis r4, __vt__Q23efx10TDamaSmoke@ha
/* 802CA178 002C70B8  90 03 00 04 */	stw r0, 4(r3)
/* 802CA17C 002C70BC  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802CA180 002C70C0  39 00 00 00 */	li r8, 0
/* 802CA184 002C70C4  38 E0 02 B2 */	li r7, 0x2b2
/* 802CA188 002C70C8  90 03 00 00 */	stw r0, 0(r3)
/* 802CA18C 002C70CC  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802CA190 002C70D0  38 A0 00 27 */	li r5, 0x27
/* 802CA194 002C70D4  38 04 D9 30 */	addi r0, r4, __vt__Q23efx10TDamaSmoke@l
/* 802CA198 002C70D8  92 83 00 04 */	stw r20, 4(r3)
/* 802CA19C 002C70DC  91 03 00 08 */	stw r8, 8(r3)
/* 802CA1A0 002C70E0  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802CA1A4 002C70E4  99 03 00 0E */	stb r8, 0xe(r3)
/* 802CA1A8 002C70E8  90 C3 00 00 */	stw r6, 0(r3)
/* 802CA1AC 002C70EC  92 63 00 04 */	stw r19, 4(r3)
/* 802CA1B0 002C70F0  91 03 00 10 */	stw r8, 0x10(r3)
/* 802CA1B4 002C70F4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802CA1B8 002C70F8  90 03 00 00 */	stw r0, 0(r3)
/* 802CA1BC 002C70FC  92 23 00 04 */	stw r17, 4(r3)
.L_802CA1C0:
/* 802CA1C0 002C7100  39 CE 00 01 */	addi r14, r14, 1
/* 802CA1C4 002C7104  90 6F 03 D0 */	stw r3, 0x3d0(r15)
/* 802CA1C8 002C7108  2C 0E 00 03 */	cmpwi r14, 3
/* 802CA1CC 002C710C  39 EF 00 04 */	addi r15, r15, 4
/* 802CA1D0 002C7110  41 80 FF 78 */	blt .L_802CA148
/* 802CA1D4 002C7114  38 60 00 14 */	li r3, 0x14
/* 802CA1D8 002C7118  4B D5 9C CD */	bl __nw__FUl
/* 802CA1DC 002C711C  28 03 00 00 */	cmplwi r3, 0
/* 802CA1E0 002C7120  41 82 00 70 */	beq .L_802CA250
/* 802CA1E4 002C7124  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802CA1E8 002C7128  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802CA1EC 002C712C  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802CA1F0 002C7130  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802CA1F4 002C7134  90 03 00 00 */	stw r0, 0(r3)
/* 802CA1F8 002C7138  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802CA1FC 002C713C  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802CA200 002C7140  3C 80 80 4D */	lis r4, __vt__Q23efx17TOdamaDeadHahenC1@ha
/* 802CA204 002C7144  90 03 00 04 */	stw r0, 4(r3)
/* 802CA208 002C7148  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802CA20C 002C714C  38 84 1C 78 */	addi r4, r4, __vt__Q23efx17TOdamaDeadHahenC1@l
/* 802CA210 002C7150  39 00 00 00 */	li r8, 0
/* 802CA214 002C7154  90 03 00 00 */	stw r0, 0(r3)
/* 802CA218 002C7158  38 E0 02 B2 */	li r7, 0x2b2
/* 802CA21C 002C715C  38 C5 68 A8 */	addi r6, r5, __vt__Q23efx9TChaseMtx@l
/* 802CA220 002C7160  38 A0 00 EF */	li r5, 0xef
/* 802CA224 002C7164  92 83 00 04 */	stw r20, 4(r3)
/* 802CA228 002C7168  38 04 00 14 */	addi r0, r4, 0x14
/* 802CA22C 002C716C  91 03 00 08 */	stw r8, 8(r3)
/* 802CA230 002C7170  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802CA234 002C7174  99 03 00 0E */	stb r8, 0xe(r3)
/* 802CA238 002C7178  90 C3 00 00 */	stw r6, 0(r3)
/* 802CA23C 002C717C  92 43 00 04 */	stw r18, 4(r3)
/* 802CA240 002C7180  91 03 00 10 */	stw r8, 0x10(r3)
/* 802CA244 002C7184  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802CA248 002C7188  90 83 00 00 */	stw r4, 0(r3)
/* 802CA24C 002C718C  90 03 00 04 */	stw r0, 4(r3)
.L_802CA250:
/* 802CA250 002C7190  90 70 04 8C */	stw r3, 0x48c(r16)
/* 802CA254 002C7194  38 60 00 14 */	li r3, 0x14
/* 802CA258 002C7198  4B D5 9C 4D */	bl __nw__FUl
/* 802CA25C 002C719C  28 03 00 00 */	cmplwi r3, 0
/* 802CA260 002C71A0  41 82 00 70 */	beq .L_802CA2D0
/* 802CA264 002C71A4  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802CA268 002C71A8  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802CA26C 002C71AC  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802CA270 002C71B0  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802CA274 002C71B4  90 03 00 00 */	stw r0, 0(r3)
/* 802CA278 002C71B8  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802CA27C 002C71BC  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802CA280 002C71C0  3C 80 80 4D */	lis r4, __vt__Q23efx17TOdamaDeadHahenC2@ha
/* 802CA284 002C71C4  90 03 00 04 */	stw r0, 4(r3)
/* 802CA288 002C71C8  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802CA28C 002C71CC  38 84 1C 2C */	addi r4, r4, __vt__Q23efx17TOdamaDeadHahenC2@l
/* 802CA290 002C71D0  39 00 00 00 */	li r8, 0
/* 802CA294 002C71D4  90 03 00 00 */	stw r0, 0(r3)
/* 802CA298 002C71D8  38 E0 02 B2 */	li r7, 0x2b2
/* 802CA29C 002C71DC  38 C5 68 A8 */	addi r6, r5, __vt__Q23efx9TChaseMtx@l
/* 802CA2A0 002C71E0  38 A0 00 F0 */	li r5, 0xf0
/* 802CA2A4 002C71E4  92 83 00 04 */	stw r20, 4(r3)
/* 802CA2A8 002C71E8  38 04 00 14 */	addi r0, r4, 0x14
/* 802CA2AC 002C71EC  91 03 00 08 */	stw r8, 8(r3)
/* 802CA2B0 002C71F0  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802CA2B4 002C71F4  99 03 00 0E */	stb r8, 0xe(r3)
/* 802CA2B8 002C71F8  90 C3 00 00 */	stw r6, 0(r3)
/* 802CA2BC 002C71FC  92 43 00 04 */	stw r18, 4(r3)
/* 802CA2C0 002C7200  91 03 00 10 */	stw r8, 0x10(r3)
/* 802CA2C4 002C7204  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802CA2C8 002C7208  90 83 00 00 */	stw r4, 0(r3)
/* 802CA2CC 002C720C  90 03 00 04 */	stw r0, 4(r3)
.L_802CA2D0:
/* 802CA2D0 002C7210  90 70 04 90 */	stw r3, 0x490(r16)
/* 802CA2D4 002C7214  38 60 00 14 */	li r3, 0x14
/* 802CA2D8 002C7218  4B D5 9B CD */	bl __nw__FUl
/* 802CA2DC 002C721C  28 03 00 00 */	cmplwi r3, 0
/* 802CA2E0 002C7220  41 82 00 70 */	beq .L_802CA350
/* 802CA2E4 002C7224  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802CA2E8 002C7228  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802CA2EC 002C722C  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802CA2F0 002C7230  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802CA2F4 002C7234  90 03 00 00 */	stw r0, 0(r3)
/* 802CA2F8 002C7238  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802CA2FC 002C723C  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802CA300 002C7240  3C 80 80 4D */	lis r4, __vt__Q23efx10TOdamaFur1@ha
/* 802CA304 002C7244  90 03 00 04 */	stw r0, 4(r3)
/* 802CA308 002C7248  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802CA30C 002C724C  38 84 1B E0 */	addi r4, r4, __vt__Q23efx10TOdamaFur1@l
/* 802CA310 002C7250  39 00 00 00 */	li r8, 0
/* 802CA314 002C7254  90 03 00 00 */	stw r0, 0(r3)
/* 802CA318 002C7258  38 E0 02 B2 */	li r7, 0x2b2
/* 802CA31C 002C725C  38 C5 68 A8 */	addi r6, r5, __vt__Q23efx9TChaseMtx@l
/* 802CA320 002C7260  38 A0 00 F2 */	li r5, 0xf2
/* 802CA324 002C7264  92 83 00 04 */	stw r20, 4(r3)
/* 802CA328 002C7268  38 04 00 14 */	addi r0, r4, 0x14
/* 802CA32C 002C726C  91 03 00 08 */	stw r8, 8(r3)
/* 802CA330 002C7270  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802CA334 002C7274  99 03 00 0E */	stb r8, 0xe(r3)
/* 802CA338 002C7278  90 C3 00 00 */	stw r6, 0(r3)
/* 802CA33C 002C727C  92 43 00 04 */	stw r18, 4(r3)
/* 802CA340 002C7280  91 03 00 10 */	stw r8, 0x10(r3)
/* 802CA344 002C7284  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802CA348 002C7288  90 83 00 00 */	stw r4, 0(r3)
/* 802CA34C 002C728C  90 03 00 04 */	stw r0, 4(r3)
.L_802CA350:
/* 802CA350 002C7290  90 70 04 94 */	stw r3, 0x494(r16)
/* 802CA354 002C7294  B9 C1 00 08 */	lmw r14, 8(r1)
/* 802CA358 002C7298  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802CA35C 002C729C  7C 08 03 A6 */	mtlr r0
/* 802CA360 002C72A0  38 21 00 50 */	addi r1, r1, 0x50
/* 802CA364 002C72A4  4E 80 00 20 */	blr 

.global setupEffect__Q34Game7BigFoot3ObjFv
setupEffect__Q34Game7BigFoot3ObjFv:
/* 802CA368 002C72A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802CA36C 002C72AC  7C 08 02 A6 */	mflr r0
/* 802CA370 002C72B0  3C 80 80 49 */	lis r4, lbl_8048B7DC@ha
/* 802CA374 002C72B4  90 01 00 44 */	stw r0, 0x44(r1)
/* 802CA378 002C72B8  38 C4 B7 DC */	addi r6, r4, lbl_8048B7DC@l
/* 802CA37C 002C72BC  BF 01 00 20 */	stmw r24, 0x20(r1)
/* 802CA380 002C72C0  7C 79 1B 78 */	mr r25, r3
/* 802CA384 002C72C4  3B 61 00 08 */	addi r27, r1, 8
/* 802CA388 002C72C8  3B 40 00 00 */	li r26, 0
/* 802CA38C 002C72CC  7F 3F CB 78 */	mr r31, r25
/* 802CA390 002C72D0  7F 3E CB 78 */	mr r30, r25
/* 802CA394 002C72D4  7F 3D CB 78 */	mr r29, r25
/* 802CA398 002C72D8  7F 3C CB 78 */	mr r28, r25
/* 802CA39C 002C72DC  80 A6 00 00 */	lwz r5, 0(r6)
/* 802CA3A0 002C72E0  80 86 00 04 */	lwz r4, 4(r6)
/* 802CA3A4 002C72E4  80 66 00 08 */	lwz r3, 8(r6)
/* 802CA3A8 002C72E8  80 06 00 0C */	lwz r0, 0xc(r6)
/* 802CA3AC 002C72EC  90 A1 00 08 */	stw r5, 8(r1)
/* 802CA3B0 002C72F0  90 81 00 0C */	stw r4, 0xc(r1)
/* 802CA3B4 002C72F4  90 61 00 10 */	stw r3, 0x10(r1)
/* 802CA3B8 002C72F8  90 01 00 14 */	stw r0, 0x14(r1)
.L_802CA3BC:
/* 802CA3BC 002C72FC  80 7E 03 B0 */	lwz r3, 0x3b0(r30)
/* 802CA3C0 002C7300  38 9F 03 14 */	addi r4, r31, 0x314
/* 802CA3C4 002C7304  48 0E 5F 81 */	bl "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
/* 802CA3C8 002C7308  80 7E 03 C0 */	lwz r3, 0x3c0(r30)
/* 802CA3CC 002C730C  39 5F 03 14 */	addi r10, r31, 0x314
/* 802CA3D0 002C7310  39 00 00 01 */	li r8, 1
/* 802CA3D4 002C7314  38 A0 00 01 */	li r5, 1
/* 802CA3D8 002C7318  91 43 00 10 */	stw r10, 0x10(r3)
/* 802CA3DC 002C731C  1C E8 00 0C */	mulli r7, r8, 0xc
/* 802CA3E0 002C7320  39 3F 02 F0 */	addi r9, r31, 0x2f0
/* 802CA3E4 002C7324  80 9B 00 00 */	lwz r4, 0(r27)
/* 802CA3E8 002C7328  81 7D 03 DC */	lwz r11, 0x3dc(r29)
/* 802CA3EC 002C732C  39 00 00 02 */	li r8, 2
/* 802CA3F0 002C7330  39 87 02 F0 */	addi r12, r7, 0x2f0
/* 802CA3F4 002C7334  91 2B 00 10 */	stw r9, 0x10(r11)
/* 802CA3F8 002C7338  1C C5 00 0C */	mulli r6, r5, 0xc
/* 802CA3FC 002C733C  7D 9F 62 14 */	add r12, r31, r12
/* 802CA400 002C7340  91 8B 00 14 */	stw r12, 0x14(r11)
/* 802CA404 002C7344  7D 23 4B 78 */	mr r3, r9
/* 802CA408 002C7348  1C E8 00 0C */	mulli r7, r8, 0xc
/* 802CA40C 002C734C  39 00 00 03 */	li r8, 3
/* 802CA410 002C7350  81 7D 04 0C */	lwz r11, 0x40c(r29)
/* 802CA414 002C7354  3B 06 02 F0 */	addi r24, r6, 0x2f0
/* 802CA418 002C7358  38 A0 00 02 */	li r5, 2
/* 802CA41C 002C735C  91 2B 00 10 */	stw r9, 0x10(r11)
/* 802CA420 002C7360  39 3F 02 FC */	addi r9, r31, 0x2fc
/* 802CA424 002C7364  7F 1F C2 14 */	add r24, r31, r24
/* 802CA428 002C7368  91 8B 00 14 */	stw r12, 0x14(r11)
/* 802CA42C 002C736C  39 87 02 F0 */	addi r12, r7, 0x2f0
/* 802CA430 002C7370  7D 9F 62 14 */	add r12, r31, r12
/* 802CA434 002C7374  38 1F 03 08 */	addi r0, r31, 0x308
/* 802CA438 002C7378  81 7D 03 E0 */	lwz r11, 0x3e0(r29)
/* 802CA43C 002C737C  1C E8 00 0C */	mulli r7, r8, 0xc
/* 802CA440 002C7380  91 2B 00 10 */	stw r9, 0x10(r11)
/* 802CA444 002C7384  1C C5 00 0C */	mulli r6, r5, 0xc
/* 802CA448 002C7388  91 8B 00 14 */	stw r12, 0x14(r11)
/* 802CA44C 002C738C  81 7D 04 10 */	lwz r11, 0x410(r29)
/* 802CA450 002C7390  91 2B 00 10 */	stw r9, 0x10(r11)
/* 802CA454 002C7394  39 3F 03 08 */	addi r9, r31, 0x308
/* 802CA458 002C7398  91 8B 00 14 */	stw r12, 0x14(r11)
/* 802CA45C 002C739C  39 87 02 F0 */	addi r12, r7, 0x2f0
/* 802CA460 002C73A0  7D 9F 62 14 */	add r12, r31, r12
/* 802CA464 002C73A4  81 7D 03 E4 */	lwz r11, 0x3e4(r29)
/* 802CA468 002C73A8  91 2B 00 10 */	stw r9, 0x10(r11)
/* 802CA46C 002C73AC  91 8B 00 14 */	stw r12, 0x14(r11)
/* 802CA470 002C73B0  81 7D 04 14 */	lwz r11, 0x414(r29)
/* 802CA474 002C73B4  91 2B 00 10 */	stw r9, 0x10(r11)
/* 802CA478 002C73B8  91 8B 00 14 */	stw r12, 0x14(r11)
/* 802CA47C 002C73BC  80 BC 04 3C */	lwz r5, 0x43c(r28)
/* 802CA480 002C73C0  93 05 00 10 */	stw r24, 0x10(r5)
/* 802CA484 002C73C4  80 BC 04 5C */	lwz r5, 0x45c(r28)
/* 802CA488 002C73C8  90 65 00 10 */	stw r3, 0x10(r5)
/* 802CA48C 002C73CC  38 7F 02 FC */	addi r3, r31, 0x2fc
/* 802CA490 002C73D0  93 05 00 14 */	stw r24, 0x14(r5)
/* 802CA494 002C73D4  3B 06 02 F0 */	addi r24, r6, 0x2f0
/* 802CA498 002C73D8  7F 1F C2 14 */	add r24, r31, r24
/* 802CA49C 002C73DC  80 BC 04 40 */	lwz r5, 0x440(r28)
/* 802CA4A0 002C73E0  93 05 00 10 */	stw r24, 0x10(r5)
/* 802CA4A4 002C73E4  80 BC 04 60 */	lwz r5, 0x460(r28)
/* 802CA4A8 002C73E8  90 65 00 10 */	stw r3, 0x10(r5)
/* 802CA4AC 002C73EC  93 05 00 14 */	stw r24, 0x14(r5)
/* 802CA4B0 002C73F0  80 7E 04 7C */	lwz r3, 0x47c(r30)
/* 802CA4B4 002C73F4  90 03 00 10 */	stw r0, 0x10(r3)
/* 802CA4B8 002C73F8  91 43 00 14 */	stw r10, 0x14(r3)
/* 802CA4BC 002C73FC  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802CA4C0 002C7400  48 17 4B 25 */	bl getJoint__Q28SysShape5ModelFPc
/* 802CA4C4 002C7404  48 15 F3 DD */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802CA4C8 002C7408  80 9E 04 98 */	lwz r4, 0x498(r30)
/* 802CA4CC 002C740C  3B 5A 00 01 */	addi r26, r26, 1
/* 802CA4D0 002C7410  2C 1A 00 04 */	cmpwi r26, 4
/* 802CA4D4 002C7414  3B DE 00 04 */	addi r30, r30, 4
/* 802CA4D8 002C7418  90 64 00 10 */	stw r3, 0x10(r4)
/* 802CA4DC 002C741C  3B BD 00 0C */	addi r29, r29, 0xc
/* 802CA4E0 002C7420  3B 9C 00 08 */	addi r28, r28, 8
/* 802CA4E4 002C7424  3B 7B 00 04 */	addi r27, r27, 4
/* 802CA4E8 002C7428  3B FF 00 30 */	addi r31, r31, 0x30
/* 802CA4EC 002C742C  41 80 FE D0 */	blt .L_802CA3BC
/* 802CA4F0 002C7430  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802CA4F4 002C7434  38 82 E4 4C */	addi r4, r2, lbl_8051C7AC@sda21
/* 802CA4F8 002C7438  48 17 4A ED */	bl getJoint__Q28SysShape5ModelFPc
/* 802CA4FC 002C743C  48 15 F3 A5 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802CA500 002C7440  80 B9 04 8C */	lwz r5, 0x48c(r25)
/* 802CA504 002C7444  38 82 E4 54 */	addi r4, r2, lbl_8051C7B4@sda21
/* 802CA508 002C7448  90 65 00 10 */	stw r3, 0x10(r5)
/* 802CA50C 002C744C  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802CA510 002C7450  48 17 4A D5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802CA514 002C7454  48 15 F3 8D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802CA518 002C7458  80 B9 04 90 */	lwz r5, 0x490(r25)
/* 802CA51C 002C745C  38 82 E3 E0 */	addi r4, r2, lbl_8051C740@sda21
/* 802CA520 002C7460  90 65 00 10 */	stw r3, 0x10(r5)
/* 802CA524 002C7464  80 79 01 74 */	lwz r3, 0x174(r25)
/* 802CA528 002C7468  48 17 4A BD */	bl getJoint__Q28SysShape5ModelFPc
/* 802CA52C 002C746C  48 15 F3 75 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802CA530 002C7470  80 99 04 94 */	lwz r4, 0x494(r25)
/* 802CA534 002C7474  90 64 00 10 */	stw r3, 0x10(r4)
/* 802CA538 002C7478  BB 01 00 20 */	lmw r24, 0x20(r1)
/* 802CA53C 002C747C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802CA540 002C7480  7C 08 03 A6 */	mtlr r0
/* 802CA544 002C7484  38 21 00 40 */	addi r1, r1, 0x40
/* 802CA548 002C7488  4E 80 00 20 */	blr 

.global createOnGroundEffect__Q34Game7BigFoot3ObjFiPQ24Game8WaterBox
createOnGroundEffect__Q34Game7BigFoot3ObjFiPQ24Game8WaterBox:
/* 802CA54C 002C748C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802CA550 002C7490  7C 08 02 A6 */	mflr r0
/* 802CA554 002C7494  90 01 00 84 */	stw r0, 0x84(r1)
/* 802CA558 002C7498  93 E1 00 7C */	stw r31, 0x7c(r1)
/* 802CA55C 002C749C  7C 9F 23 78 */	mr r31, r4
/* 802CA560 002C74A0  93 C1 00 78 */	stw r30, 0x78(r1)
/* 802CA564 002C74A4  7C 7E 1B 78 */	mr r30, r3
/* 802CA568 002C74A8  93 A1 00 74 */	stw r29, 0x74(r1)
/* 802CA56C 002C74AC  93 81 00 70 */	stw r28, 0x70(r1)
/* 802CA570 002C74B0  7C BC 2B 78 */	mr r28, r5
/* 802CA574 002C74B4  7F E5 FB 78 */	mr r5, r31
/* 802CA578 002C74B8  80 83 02 E0 */	lwz r4, 0x2e0(r3)
/* 802CA57C 002C74BC  38 61 00 08 */	addi r3, r1, 8
/* 802CA580 002C74C0  4B FD EC 3D */	bl getCollisionCentre__Q24Game11IKSystemMgrFi
/* 802CA584 002C74C4  C0 41 00 08 */	lfs f2, 8(r1)
/* 802CA588 002C74C8  28 1C 00 00 */	cmplwi r28, 0
/* 802CA58C 002C74CC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802CA590 002C74D0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802CA594 002C74D4  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 802CA598 002C74D8  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802CA59C 002C74DC  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 802CA5A0 002C74E0  41 82 00 D4 */	beq .L_802CA674
/* 802CA5A4 002C74E4  7F 83 E3 78 */	mr r3, r28
/* 802CA5A8 002C74E8  81 9C 00 00 */	lwz r12, 0(r28)
/* 802CA5AC 002C74EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CA5B0 002C74F0  7D 89 03 A6 */	mtctr r12
/* 802CA5B4 002C74F4  4E 80 04 21 */	bctrl 
/* 802CA5B8 002C74F8  C0 43 00 00 */	lfs f2, 0(r3)
/* 802CA5BC 002C74FC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802CA5C0 002C7500  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802CA5C4 002C7504  38 A0 00 00 */	li r5, 0
/* 802CA5C8 002C7508  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 802CA5CC 002C750C  90 01 00 50 */	stw r0, 0x50(r1)
/* 802CA5D0 002C7510  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 802CA5D4 002C7514  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 802CA5D8 002C7518  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 802CA5DC 002C751C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802CA5E0 002C7520  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaWalkw@ha
/* 802CA5E4 002C7524  39 00 00 28 */	li r8, 0x28
/* 802CA5E8 002C7528  39 24 A7 EC */	addi r9, r4, __vt__Q23efx3Arg@l
/* 802CA5EC 002C752C  38 E0 00 29 */	li r7, 0x29
/* 802CA5F0 002C7530  38 C0 00 2A */	li r6, 0x2a
/* 802CA5F4 002C7534  90 01 00 50 */	stw r0, 0x50(r1)
/* 802CA5F8 002C7538  38 03 D8 4C */	addi r0, r3, __vt__Q23efx10TDamaWalkw@l
/* 802CA5FC 002C753C  38 61 00 50 */	addi r3, r1, 0x50
/* 802CA600 002C7540  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 802CA604 002C7544  38 81 00 34 */	addi r4, r1, 0x34
/* 802CA608 002C7548  91 21 00 34 */	stw r9, 0x34(r1)
/* 802CA60C 002C754C  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 802CA610 002C7550  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802CA614 002C7554  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802CA618 002C7558  B1 01 00 54 */	sth r8, 0x54(r1)
/* 802CA61C 002C755C  B0 E1 00 56 */	sth r7, 0x56(r1)
/* 802CA620 002C7560  B0 C1 00 58 */	sth r6, 0x58(r1)
/* 802CA624 002C7564  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 802CA628 002C7568  90 A1 00 60 */	stw r5, 0x60(r1)
/* 802CA62C 002C756C  90 A1 00 64 */	stw r5, 0x64(r1)
/* 802CA630 002C7570  90 01 00 50 */	stw r0, 0x50(r1)
/* 802CA634 002C7574  48 0E 4A 89 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 802CA638 002C7578  1C 9F 00 30 */	mulli r4, r31, 0x30
/* 802CA63C 002C757C  38 60 38 49 */	li r3, 0x3849
/* 802CA640 002C7580  38 84 03 14 */	addi r4, r4, 0x314
/* 802CA644 002C7584  7C 9E 22 14 */	add r4, r30, r4
/* 802CA648 002C7588  48 1A 3A 6D */	bl PSStartSoundVec__FUlP3Vec
/* 802CA64C 002C758C  28 03 00 00 */	cmplwi r3, 0
/* 802CA650 002C7590  41 82 00 88 */	beq .L_802CA6D8
/* 802CA654 002C7594  81 83 00 10 */	lwz r12, 0x10(r3)
/* 802CA658 002C7598  38 80 00 00 */	li r4, 0
/* 802CA65C 002C759C  C0 22 E4 5C */	lfs f1, lbl_8051C7BC@sda21(r2)
/* 802CA660 002C75A0  38 A0 00 00 */	li r5, 0
/* 802CA664 002C75A4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 802CA668 002C75A8  7D 89 03 A6 */	mtctr r12
/* 802CA66C 002C75AC  4E 80 04 21 */	bctrl 
/* 802CA670 002C75B0  48 00 00 68 */	b .L_802CA6D8
.L_802CA674:
/* 802CA674 002C75B4  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802CA678 002C75B8  38 A0 00 00 */	li r5, 0
/* 802CA67C 002C75BC  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802CA680 002C75C0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 802CA684 002C75C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CA688 002C75C8  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 802CA68C 002C75CC  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802CA690 002C75D0  3C 60 80 4D */	lis r3, __vt__Q23efx10TOdamaWalk@ha
/* 802CA694 002C75D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CA698 002C75D8  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802CA69C 002C75DC  38 03 1B CC */	addi r0, r3, __vt__Q23efx10TOdamaWalk@l
/* 802CA6A0 002C75E0  38 E0 00 F5 */	li r7, 0xf5
/* 802CA6A4 002C75E4  38 C0 00 F6 */	li r6, 0xf6
/* 802CA6A8 002C75E8  90 81 00 24 */	stw r4, 0x24(r1)
/* 802CA6AC 002C75EC  38 61 00 14 */	addi r3, r1, 0x14
/* 802CA6B0 002C75F0  38 81 00 24 */	addi r4, r1, 0x24
/* 802CA6B4 002C75F4  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 802CA6B8 002C75F8  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 802CA6BC 002C75FC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802CA6C0 002C7600  B0 E1 00 18 */	sth r7, 0x18(r1)
/* 802CA6C4 002C7604  B0 C1 00 1A */	sth r6, 0x1a(r1)
/* 802CA6C8 002C7608  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 802CA6CC 002C760C  90 A1 00 20 */	stw r5, 0x20(r1)
/* 802CA6D0 002C7610  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CA6D4 002C7614  48 0E 49 41 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_802CA6D8:
/* 802CA6D8 002C7618  88 1E 02 DD */	lbz r0, 0x2dd(r30)
/* 802CA6DC 002C761C  28 00 00 00 */	cmplwi r0, 0
/* 802CA6E0 002C7620  41 82 00 38 */	beq .L_802CA718
/* 802CA6E4 002C7624  1C 1F 00 0C */	mulli r0, r31, 0xc
/* 802CA6E8 002C7628  3B 80 00 00 */	li r28, 0
/* 802CA6EC 002C762C  7F BE 02 14 */	add r29, r30, r0
.L_802CA6F0:
/* 802CA6F0 002C7630  80 7D 03 DC */	lwz r3, 0x3dc(r29)
/* 802CA6F4 002C7634  38 80 00 00 */	li r4, 0
/* 802CA6F8 002C7638  81 83 00 00 */	lwz r12, 0(r3)
/* 802CA6FC 002C763C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CA700 002C7640  7D 89 03 A6 */	mtctr r12
/* 802CA704 002C7644  4E 80 04 21 */	bctrl 
/* 802CA708 002C7648  3B 9C 00 01 */	addi r28, r28, 1
/* 802CA70C 002C764C  3B BD 00 04 */	addi r29, r29, 4
/* 802CA710 002C7650  2C 1C 00 03 */	cmpwi r28, 3
/* 802CA714 002C7654  41 80 FF DC */	blt .L_802CA6F0
.L_802CA718:
/* 802CA718 002C7658  1C 9F 00 30 */	mulli r4, r31, 0x30
/* 802CA71C 002C765C  38 60 58 96 */	li r3, 0x5896
/* 802CA720 002C7660  38 84 03 14 */	addi r4, r4, 0x314
/* 802CA724 002C7664  7C 9E 22 14 */	add r4, r30, r4
/* 802CA728 002C7668  48 1A 39 8D */	bl PSStartSoundVec__FUlP3Vec
/* 802CA72C 002C766C  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802CA730 002C7670  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CA734 002C7674  38 80 00 06 */	li r4, 6
/* 802CA738 002C7678  38 C0 00 02 */	li r6, 2
/* 802CA73C 002C767C  4B F8 7B 01 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802CA740 002C7680  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802CA744 002C7684  38 A1 00 44 */	addi r5, r1, 0x44
/* 802CA748 002C7688  38 80 00 0E */	li r4, 0xe
/* 802CA74C 002C768C  38 C0 00 02 */	li r6, 2
/* 802CA750 002C7690  4B F8 90 31 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802CA754 002C7694  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802CA758 002C7698  83 E1 00 7C */	lwz r31, 0x7c(r1)
/* 802CA75C 002C769C  83 C1 00 78 */	lwz r30, 0x78(r1)
/* 802CA760 002C76A0  83 A1 00 74 */	lwz r29, 0x74(r1)
/* 802CA764 002C76A4  83 81 00 70 */	lwz r28, 0x70(r1)
/* 802CA768 002C76A8  7C 08 03 A6 */	mtlr r0
/* 802CA76C 002C76AC  38 21 00 80 */	addi r1, r1, 0x80
/* 802CA770 002C76B0  4E 80 00 20 */	blr 

.global createOffGroundEffect__Q34Game7BigFoot3ObjFiPQ24Game8WaterBox
createOffGroundEffect__Q34Game7BigFoot3ObjFiPQ24Game8WaterBox:
/* 802CA774 002C76B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CA778 002C76B8  7C 08 02 A6 */	mflr r0
/* 802CA77C 002C76BC  28 05 00 00 */	cmplwi r5, 0
/* 802CA780 002C76C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CA784 002C76C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CA788 002C76C8  7C 7F 1B 78 */	mr r31, r3
/* 802CA78C 002C76CC  41 82 00 28 */	beq .L_802CA7B4
/* 802CA790 002C76D0  54 80 10 3A */	slwi r0, r4, 2
/* 802CA794 002C76D4  38 80 00 00 */	li r4, 0
/* 802CA798 002C76D8  7C 7F 02 14 */	add r3, r31, r0
/* 802CA79C 002C76DC  80 63 03 C0 */	lwz r3, 0x3c0(r3)
/* 802CA7A0 002C76E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CA7A4 002C76E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CA7A8 002C76E8  7D 89 03 A6 */	mtctr r12
/* 802CA7AC 002C76EC  4E 80 04 21 */	bctrl 
/* 802CA7B0 002C76F0  48 00 00 24 */	b .L_802CA7D4
.L_802CA7B4:
/* 802CA7B4 002C76F4  54 80 10 3A */	slwi r0, r4, 2
/* 802CA7B8 002C76F8  38 80 00 00 */	li r4, 0
/* 802CA7BC 002C76FC  7C 7F 02 14 */	add r3, r31, r0
/* 802CA7C0 002C7700  80 63 03 B0 */	lwz r3, 0x3b0(r3)
/* 802CA7C4 002C7704  81 83 00 00 */	lwz r12, 0(r3)
/* 802CA7C8 002C7708  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CA7CC 002C770C  7D 89 03 A6 */	mtctr r12
/* 802CA7D0 002C7710  4E 80 04 21 */	bctrl 
.L_802CA7D4:
/* 802CA7D4 002C7714  88 1F 02 DE */	lbz r0, 0x2de(r31)
/* 802CA7D8 002C7718  28 00 00 00 */	cmplwi r0, 0
/* 802CA7DC 002C771C  41 82 00 34 */	beq .L_802CA810
/* 802CA7E0 002C7720  7F E3 FB 78 */	mr r3, r31
/* 802CA7E4 002C7724  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CA7E8 002C7728  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802CA7EC 002C772C  7D 89 03 A6 */	mtctr r12
/* 802CA7F0 002C7730  4E 80 04 21 */	bctrl 
/* 802CA7F4 002C7734  81 83 00 00 */	lwz r12, 0(r3)
/* 802CA7F8 002C7738  38 80 58 4B */	li r4, 0x584b
/* 802CA7FC 002C773C  38 A0 00 00 */	li r5, 0
/* 802CA800 002C7740  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802CA804 002C7744  7D 89 03 A6 */	mtctr r12
/* 802CA808 002C7748  4E 80 04 21 */	bctrl 
/* 802CA80C 002C774C  48 00 00 B8 */	b .L_802CA8C4
.L_802CA810:
/* 802CA810 002C7750  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802CA814 002C7754  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 802CA818 002C7758  C0 23 01 04 */	lfs f1, 0x104(r3)
/* 802CA81C 002C775C  C0 02 E4 60 */	lfs f0, lbl_8051C7C0@sda21(r2)
/* 802CA820 002C7760  EC 22 08 24 */	fdivs f1, f2, f1
/* 802CA824 002C7764  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CA828 002C7768  40 80 00 34 */	bge .L_802CA85C
/* 802CA82C 002C776C  7F E3 FB 78 */	mr r3, r31
/* 802CA830 002C7770  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CA834 002C7774  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802CA838 002C7778  7D 89 03 A6 */	mtctr r12
/* 802CA83C 002C777C  4E 80 04 21 */	bctrl 
/* 802CA840 002C7780  81 83 00 00 */	lwz r12, 0(r3)
/* 802CA844 002C7784  38 80 58 4A */	li r4, 0x584a
/* 802CA848 002C7788  38 A0 00 00 */	li r5, 0
/* 802CA84C 002C778C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802CA850 002C7790  7D 89 03 A6 */	mtctr r12
/* 802CA854 002C7794  4E 80 04 21 */	bctrl 
/* 802CA858 002C7798  48 00 00 6C */	b .L_802CA8C4
.L_802CA85C:
/* 802CA85C 002C779C  C0 02 E4 64 */	lfs f0, lbl_8051C7C4@sda21(r2)
/* 802CA860 002C77A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CA864 002C77A4  40 80 00 34 */	bge .L_802CA898
/* 802CA868 002C77A8  7F E3 FB 78 */	mr r3, r31
/* 802CA86C 002C77AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CA870 002C77B0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802CA874 002C77B4  7D 89 03 A6 */	mtctr r12
/* 802CA878 002C77B8  4E 80 04 21 */	bctrl 
/* 802CA87C 002C77BC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CA880 002C77C0  38 80 58 49 */	li r4, 0x5849
/* 802CA884 002C77C4  38 A0 00 00 */	li r5, 0
/* 802CA888 002C77C8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802CA88C 002C77CC  7D 89 03 A6 */	mtctr r12
/* 802CA890 002C77D0  4E 80 04 21 */	bctrl 
/* 802CA894 002C77D4  48 00 00 30 */	b .L_802CA8C4
.L_802CA898:
/* 802CA898 002C77D8  7F E3 FB 78 */	mr r3, r31
/* 802CA89C 002C77DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802CA8A0 002C77E0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802CA8A4 002C77E4  7D 89 03 A6 */	mtctr r12
/* 802CA8A8 002C77E8  4E 80 04 21 */	bctrl 
/* 802CA8AC 002C77EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CA8B0 002C77F0  38 80 58 48 */	li r4, 0x5848
/* 802CA8B4 002C77F4  38 A0 00 00 */	li r5, 0
/* 802CA8B8 002C77F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802CA8BC 002C77FC  7D 89 03 A6 */	mtctr r12
/* 802CA8C0 002C7800  4E 80 04 21 */	bctrl 
.L_802CA8C4:
/* 802CA8C4 002C7804  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CA8C8 002C7808  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CA8CC 002C780C  7C 08 03 A6 */	mtlr r0
/* 802CA8D0 002C7810  38 21 00 10 */	addi r1, r1, 0x10
/* 802CA8D4 002C7814  4E 80 00 20 */	blr 

.global startPinchJointEffect__Q34Game7BigFoot3ObjFv
startPinchJointEffect__Q34Game7BigFoot3ObjFv:
/* 802CA8D8 002C7818  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802CA8DC 002C781C  7C 08 02 A6 */	mflr r0
/* 802CA8E0 002C7820  90 01 00 84 */	stw r0, 0x84(r1)
/* 802CA8E4 002C7824  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802CA8E8 002C7828  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802CA8EC 002C782C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802CA8F0 002C7830  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802CA8F4 002C7834  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802CA8F8 002C7838  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802CA8FC 002C783C  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 802CA900 002C7840  3B C1 00 18 */	addi r30, r1, 0x18
/* 802CA904 002C7844  CB E2 E3 F8 */	lfd f31, lbl_8051C758@sda21(r2)
/* 802CA908 002C7848  C3 C2 E3 F0 */	lfs f30, lbl_8051C750@sda21(r2)
/* 802CA90C 002C784C  7C 7D 1B 78 */	mr r29, r3
/* 802CA910 002C7850  C3 A2 E4 00 */	lfs f29, lbl_8051C760@sda21(r2)
/* 802CA914 002C7854  7F DF F3 78 */	mr r31, r30
/* 802CA918 002C7858  3B 60 00 00 */	li r27, 0
/* 802CA91C 002C785C  3F 80 43 30 */	lis r28, 0x4330
.L_802CA920:
/* 802CA920 002C7860  4B DF EC 81 */	bl rand
/* 802CA924 002C7864  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802CA928 002C7868  3B 7B 00 01 */	addi r27, r27, 1
/* 802CA92C 002C786C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802CA930 002C7870  2C 1B 00 03 */	cmpwi r27, 3
/* 802CA934 002C7874  93 81 00 28 */	stw r28, 0x28(r1)
/* 802CA938 002C7878  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802CA93C 002C787C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802CA940 002C7880  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802CA944 002C7884  EC 1D 00 32 */	fmuls f0, f29, f0
/* 802CA948 002C7888  FC 00 00 1E */	fctiwz f0, f0
/* 802CA94C 002C788C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802CA950 002C7890  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802CA954 002C7894  38 03 00 01 */	addi r0, r3, 1
/* 802CA958 002C7898  90 1F 00 00 */	stw r0, 0(r31)
/* 802CA95C 002C789C  3B FF 00 04 */	addi r31, r31, 4
/* 802CA960 002C78A0  41 80 FF C0 */	blt .L_802CA920
/* 802CA964 002C78A4  38 A0 00 00 */	li r5, 0
/* 802CA968 002C78A8  38 80 00 01 */	li r4, 1
/* 802CA96C 002C78AC  38 60 00 02 */	li r3, 2
/* 802CA970 002C78B0  38 00 00 03 */	li r0, 3
/* 802CA974 002C78B4  3B E1 00 08 */	addi r31, r1, 8
/* 802CA978 002C78B8  90 A1 00 08 */	stw r5, 8(r1)
/* 802CA97C 002C78BC  CB A2 E3 F8 */	lfd f29, lbl_8051C758@sda21(r2)
/* 802CA980 002C78C0  7F FB FB 78 */	mr r27, r31
/* 802CA984 002C78C4  90 81 00 0C */	stw r4, 0xc(r1)
/* 802CA988 002C78C8  3B 40 00 00 */	li r26, 0
/* 802CA98C 002C78CC  C3 C2 E3 F0 */	lfs f30, lbl_8051C750@sda21(r2)
/* 802CA990 002C78D0  3F 80 43 30 */	lis r28, 0x4330
/* 802CA994 002C78D4  90 61 00 10 */	stw r3, 0x10(r1)
/* 802CA998 002C78D8  C3 E2 E4 68 */	lfs f31, lbl_8051C7C8@sda21(r2)
/* 802CA99C 002C78DC  90 01 00 14 */	stw r0, 0x14(r1)
.L_802CA9A0:
/* 802CA9A0 002C78E0  4B DF EC 01 */	bl rand
/* 802CA9A4 002C78E4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802CA9A8 002C78E8  3B 5A 00 01 */	addi r26, r26, 1
/* 802CA9AC 002C78EC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802CA9B0 002C78F0  2C 1A 00 04 */	cmpwi r26, 4
/* 802CA9B4 002C78F4  80 9B 00 00 */	lwz r4, 0(r27)
/* 802CA9B8 002C78F8  93 81 00 30 */	stw r28, 0x30(r1)
/* 802CA9BC 002C78FC  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802CA9C0 002C7900  EC 00 E8 28 */	fsubs f0, f0, f29
/* 802CA9C4 002C7904  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802CA9C8 002C7908  EC 1F 00 32 */	fmuls f0, f31, f0
/* 802CA9CC 002C790C  FC 00 00 1E */	fctiwz f0, f0
/* 802CA9D0 002C7910  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802CA9D4 002C7914  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802CA9D8 002C7918  54 03 10 3A */	slwi r3, r0, 2
/* 802CA9DC 002C791C  7C 1F 18 2E */	lwzx r0, r31, r3
/* 802CA9E0 002C7920  90 1B 00 00 */	stw r0, 0(r27)
/* 802CA9E4 002C7924  3B 7B 00 04 */	addi r27, r27, 4
/* 802CA9E8 002C7928  7C 9F 19 2E */	stwx r4, r31, r3
/* 802CA9EC 002C792C  41 80 FF B4 */	blt .L_802CA9A0
/* 802CA9F0 002C7930  7F BB EB 78 */	mr r27, r29
/* 802CA9F4 002C7934  3B 40 00 00 */	li r26, 0
.L_802CA9F8:
/* 802CA9F8 002C7938  80 7F 00 00 */	lwz r3, 0(r31)
/* 802CA9FC 002C793C  38 80 00 00 */	li r4, 0
/* 802CAA00 002C7940  80 1E 00 00 */	lwz r0, 0(r30)
/* 802CAA04 002C7944  1C A3 00 30 */	mulli r5, r3, 0x30
/* 802CAA08 002C7948  80 7B 03 D0 */	lwz r3, 0x3d0(r27)
/* 802CAA0C 002C794C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802CAA10 002C7950  7C A5 02 14 */	add r5, r5, r0
/* 802CAA14 002C7954  38 05 02 F0 */	addi r0, r5, 0x2f0
/* 802CAA18 002C7958  7C 1D 02 14 */	add r0, r29, r0
/* 802CAA1C 002C795C  90 03 00 10 */	stw r0, 0x10(r3)
/* 802CAA20 002C7960  80 7B 03 D0 */	lwz r3, 0x3d0(r27)
/* 802CAA24 002C7964  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAA28 002C7968  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CAA2C 002C796C  7D 89 03 A6 */	mtctr r12
/* 802CAA30 002C7970  4E 80 04 21 */	bctrl 
/* 802CAA34 002C7974  3B 5A 00 01 */	addi r26, r26, 1
/* 802CAA38 002C7978  3B FF 00 04 */	addi r31, r31, 4
/* 802CAA3C 002C797C  2C 1A 00 03 */	cmpwi r26, 3
/* 802CAA40 002C7980  3B 7B 00 04 */	addi r27, r27, 4
/* 802CAA44 002C7984  3B DE 00 04 */	addi r30, r30, 4
/* 802CAA48 002C7988  41 80 FF B0 */	blt .L_802CA9F8
/* 802CAA4C 002C798C  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802CAA50 002C7990  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802CAA54 002C7994  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802CAA58 002C7998  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802CAA5C 002C799C  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802CAA60 002C79A0  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802CAA64 002C79A4  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 802CAA68 002C79A8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802CAA6C 002C79AC  7C 08 03 A6 */	mtlr r0
/* 802CAA70 002C79B0  38 21 00 80 */	addi r1, r1, 0x80
/* 802CAA74 002C79B4  4E 80 00 20 */	blr 

.global finishPinchJointEffect__Q34Game7BigFoot3ObjFv
finishPinchJointEffect__Q34Game7BigFoot3ObjFv:
/* 802CAA78 002C79B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CAA7C 002C79BC  7C 08 02 A6 */	mflr r0
/* 802CAA80 002C79C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CAA84 002C79C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CAA88 002C79C8  7C 7F 1B 78 */	mr r31, r3
/* 802CAA8C 002C79CC  93 C1 00 08 */	stw r30, 8(r1)
/* 802CAA90 002C79D0  3B C0 00 00 */	li r30, 0
.L_802CAA94:
/* 802CAA94 002C79D4  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 802CAA98 002C79D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAA9C 002C79DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CAAA0 002C79E0  7D 89 03 A6 */	mtctr r12
/* 802CAAA4 002C79E4  4E 80 04 21 */	bctrl 
/* 802CAAA8 002C79E8  3B DE 00 01 */	addi r30, r30, 1
/* 802CAAAC 002C79EC  3B FF 00 04 */	addi r31, r31, 4
/* 802CAAB0 002C79F0  2C 1E 00 03 */	cmpwi r30, 3
/* 802CAAB4 002C79F4  41 80 FF E0 */	blt .L_802CAA94
/* 802CAAB8 002C79F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CAABC 002C79FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CAAC0 002C7A00  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CAAC4 002C7A04  7C 08 03 A6 */	mtlr r0
/* 802CAAC8 002C7A08  38 21 00 10 */	addi r1, r1, 0x10
/* 802CAACC 002C7A0C  4E 80 00 20 */	blr 

.global startDeadEffect__Q34Game7BigFoot3ObjFv
startDeadEffect__Q34Game7BigFoot3ObjFv:
/* 802CAAD0 002C7A10  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802CAAD4 002C7A14  7C 08 02 A6 */	mflr r0
/* 802CAAD8 002C7A18  3C C0 80 4B */	lis r6, __vt__Q23efx3Arg@ha
/* 802CAADC 002C7A1C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802CAAE0 002C7A20  90 01 00 64 */	stw r0, 0x64(r1)
/* 802CAAE4 002C7A24  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802CAAE8 002C7A28  BE 41 00 28 */	stmw r18, 0x28(r1)
/* 802CAAEC 002C7A2C  7C 7B 1B 78 */	mr r27, r3
/* 802CAAF0 002C7A30  3C 60 80 4D */	lis r3, __vt__Q23efx13TDamaDeadBomb@ha
/* 802CAAF4 002C7A34  3A A6 A7 EC */	addi r21, r6, __vt__Q23efx3Arg@l
/* 802CAAF8 002C7A38  7F 7F DB 78 */	mr r31, r27
/* 802CAAFC 002C7A3C  7F 7E DB 78 */	mr r30, r27
/* 802CAB00 002C7A40  7F 7D DB 78 */	mr r29, r27
/* 802CAB04 002C7A44  7F 7C DB 78 */	mr r28, r27
/* 802CAB08 002C7A48  3A C5 A7 F8 */	addi r22, r5, __vt__Q23efx5TBase@l
/* 802CAB0C 002C7A4C  3A E4 6A 78 */	addi r23, r4, __vt__Q23efx8TSimple1@l
/* 802CAB10 002C7A50  3B 43 D8 24 */	addi r26, r3, __vt__Q23efx13TDamaDeadBomb@l
/* 802CAB14 002C7A54  3A 60 00 00 */	li r19, 0
.L_802CAB18:
/* 802CAB18 002C7A58  3A 9F 00 0C */	addi r20, r31, 0xc
/* 802CAB1C 002C7A5C  3A 40 00 01 */	li r18, 1
/* 802CAB20 002C7A60  3B 00 00 1C */	li r24, 0x1c
/* 802CAB24 002C7A64  3B 20 00 00 */	li r25, 0
.L_802CAB28:
/* 802CAB28 002C7A68  92 A1 00 14 */	stw r21, 0x14(r1)
/* 802CAB2C 002C7A6C  38 61 00 08 */	addi r3, r1, 8
/* 802CAB30 002C7A70  38 81 00 14 */	addi r4, r1, 0x14
/* 802CAB34 002C7A74  C0 14 02 F0 */	lfs f0, 0x2f0(r20)
/* 802CAB38 002C7A78  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802CAB3C 002C7A7C  C0 14 02 F4 */	lfs f0, 0x2f4(r20)
/* 802CAB40 002C7A80  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802CAB44 002C7A84  C0 14 02 F8 */	lfs f0, 0x2f8(r20)
/* 802CAB48 002C7A88  92 C1 00 08 */	stw r22, 8(r1)
/* 802CAB4C 002C7A8C  92 E1 00 08 */	stw r23, 8(r1)
/* 802CAB50 002C7A90  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802CAB54 002C7A94  B3 01 00 0C */	sth r24, 0xc(r1)
/* 802CAB58 002C7A98  93 21 00 10 */	stw r25, 0x10(r1)
/* 802CAB5C 002C7A9C  93 41 00 08 */	stw r26, 8(r1)
/* 802CAB60 002C7AA0  48 0E 44 25 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802CAB64 002C7AA4  3A 52 00 01 */	addi r18, r18, 1
/* 802CAB68 002C7AA8  3A 94 00 0C */	addi r20, r20, 0xc
/* 802CAB6C 002C7AAC  2C 12 00 03 */	cmpwi r18, 3
/* 802CAB70 002C7AB0  41 80 FF B8 */	blt .L_802CAB28
/* 802CAB74 002C7AB4  3A 40 00 00 */	li r18, 0
/* 802CAB78 002C7AB8  7F D4 F3 78 */	mr r20, r30
.L_802CAB7C:
/* 802CAB7C 002C7ABC  80 74 04 0C */	lwz r3, 0x40c(r20)
/* 802CAB80 002C7AC0  38 80 00 00 */	li r4, 0
/* 802CAB84 002C7AC4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAB88 002C7AC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CAB8C 002C7ACC  7D 89 03 A6 */	mtctr r12
/* 802CAB90 002C7AD0  4E 80 04 21 */	bctrl 
/* 802CAB94 002C7AD4  3A 52 00 01 */	addi r18, r18, 1
/* 802CAB98 002C7AD8  3A 94 00 04 */	addi r20, r20, 4
/* 802CAB9C 002C7ADC  2C 12 00 03 */	cmpwi r18, 3
/* 802CABA0 002C7AE0  41 80 FF DC */	blt .L_802CAB7C
/* 802CABA4 002C7AE4  3A 40 00 00 */	li r18, 0
/* 802CABA8 002C7AE8  7F B4 EB 78 */	mr r20, r29
.L_802CABAC:
/* 802CABAC 002C7AEC  80 74 04 3C */	lwz r3, 0x43c(r20)
/* 802CABB0 002C7AF0  38 80 00 00 */	li r4, 0
/* 802CABB4 002C7AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CABB8 002C7AF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CABBC 002C7AFC  7D 89 03 A6 */	mtctr r12
/* 802CABC0 002C7B00  4E 80 04 21 */	bctrl 
/* 802CABC4 002C7B04  80 74 04 5C */	lwz r3, 0x45c(r20)
/* 802CABC8 002C7B08  38 80 00 00 */	li r4, 0
/* 802CABCC 002C7B0C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CABD0 002C7B10  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CABD4 002C7B14  7D 89 03 A6 */	mtctr r12
/* 802CABD8 002C7B18  4E 80 04 21 */	bctrl 
/* 802CABDC 002C7B1C  3A 52 00 01 */	addi r18, r18, 1
/* 802CABE0 002C7B20  3A 94 00 04 */	addi r20, r20, 4
/* 802CABE4 002C7B24  2C 12 00 02 */	cmpwi r18, 2
/* 802CABE8 002C7B28  41 80 FF C4 */	blt .L_802CABAC
/* 802CABEC 002C7B2C  80 7C 04 7C */	lwz r3, 0x47c(r28)
/* 802CABF0 002C7B30  38 80 00 00 */	li r4, 0
/* 802CABF4 002C7B34  81 83 00 00 */	lwz r12, 0(r3)
/* 802CABF8 002C7B38  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CABFC 002C7B3C  7D 89 03 A6 */	mtctr r12
/* 802CAC00 002C7B40  4E 80 04 21 */	bctrl 
/* 802CAC04 002C7B44  3A 73 00 01 */	addi r19, r19, 1
/* 802CAC08 002C7B48  3B DE 00 0C */	addi r30, r30, 0xc
/* 802CAC0C 002C7B4C  2C 13 00 04 */	cmpwi r19, 4
/* 802CAC10 002C7B50  3B BD 00 08 */	addi r29, r29, 8
/* 802CAC14 002C7B54  3B 9C 00 04 */	addi r28, r28, 4
/* 802CAC18 002C7B58  3B FF 00 30 */	addi r31, r31, 0x30
/* 802CAC1C 002C7B5C  41 80 FE FC */	blt .L_802CAB18
/* 802CAC20 002C7B60  80 7B 04 8C */	lwz r3, 0x48c(r27)
/* 802CAC24 002C7B64  38 80 00 00 */	li r4, 0
/* 802CAC28 002C7B68  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAC2C 002C7B6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CAC30 002C7B70  7D 89 03 A6 */	mtctr r12
/* 802CAC34 002C7B74  4E 80 04 21 */	bctrl 
/* 802CAC38 002C7B78  80 7B 04 90 */	lwz r3, 0x490(r27)
/* 802CAC3C 002C7B7C  38 80 00 00 */	li r4, 0
/* 802CAC40 002C7B80  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAC44 002C7B84  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CAC48 002C7B88  7D 89 03 A6 */	mtctr r12
/* 802CAC4C 002C7B8C  4E 80 04 21 */	bctrl 
/* 802CAC50 002C7B90  3A A0 00 00 */	li r21, 0
/* 802CAC54 002C7B94  7F 74 DB 78 */	mr r20, r27
.L_802CAC58:
/* 802CAC58 002C7B98  80 74 03 D0 */	lwz r3, 0x3d0(r20)
/* 802CAC5C 002C7B9C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAC60 002C7BA0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CAC64 002C7BA4  7D 89 03 A6 */	mtctr r12
/* 802CAC68 002C7BA8  4E 80 04 21 */	bctrl 
/* 802CAC6C 002C7BAC  3A B5 00 01 */	addi r21, r21, 1
/* 802CAC70 002C7BB0  3A 94 00 04 */	addi r20, r20, 4
/* 802CAC74 002C7BB4  2C 15 00 03 */	cmpwi r21, 3
/* 802CAC78 002C7BB8  41 80 FF E0 */	blt .L_802CAC58
/* 802CAC7C 002C7BBC  BA 41 00 28 */	lmw r18, 0x28(r1)
/* 802CAC80 002C7BC0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802CAC84 002C7BC4  7C 08 03 A6 */	mtlr r0
/* 802CAC88 002C7BC8  38 21 00 60 */	addi r1, r1, 0x60
/* 802CAC8C 002C7BCC  4E 80 00 20 */	blr 

.global updatePinchLife__Q34Game7BigFoot3ObjFv
updatePinchLife__Q34Game7BigFoot3ObjFv:
/* 802CAC90 002C7BD0  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802CAC94 002C7BD4  7C 08 02 A6 */	mflr r0
/* 802CAC98 002C7BD8  90 01 00 84 */	stw r0, 0x84(r1)
/* 802CAC9C 002C7BDC  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802CACA0 002C7BE0  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802CACA4 002C7BE4  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802CACA8 002C7BE8  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802CACAC 002C7BEC  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802CACB0 002C7BF0  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802CACB4 002C7BF4  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 802CACB8 002C7BF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CACBC 002C7BFC  7C 7D 1B 78 */	mr r29, r3
/* 802CACC0 002C7C00  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802CACC4 002C7C04  7D 89 03 A6 */	mtctr r12
/* 802CACC8 002C7C08  4E 80 04 21 */	bctrl 
/* 802CACCC 002C7C0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802CACD0 002C7C10  41 82 01 E8 */	beq .L_802CAEB8
/* 802CACD4 002C7C14  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 802CACD8 002C7C18  88 1D 02 DD */	lbz r0, 0x2dd(r29)
/* 802CACDC 002C7C1C  C0 3D 02 00 */	lfs f1, 0x200(r29)
/* 802CACE0 002C7C20  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 802CACE4 002C7C24  28 00 00 00 */	cmplwi r0, 0
/* 802CACE8 002C7C28  EC 21 00 24 */	fdivs f1, f1, f0
/* 802CACEC 002C7C2C  41 82 00 48 */	beq .L_802CAD34
/* 802CACF0 002C7C30  C0 02 E4 64 */	lfs f0, lbl_8051C7C4@sda21(r2)
/* 802CACF4 002C7C34  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CACF8 002C7C38  40 81 01 C0 */	ble .L_802CAEB8
/* 802CACFC 002C7C3C  3B 80 00 00 */	li r28, 0
/* 802CAD00 002C7C40  7F BB EB 78 */	mr r27, r29
.L_802CAD04:
/* 802CAD04 002C7C44  80 7B 03 D0 */	lwz r3, 0x3d0(r27)
/* 802CAD08 002C7C48  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAD0C 002C7C4C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CAD10 002C7C50  7D 89 03 A6 */	mtctr r12
/* 802CAD14 002C7C54  4E 80 04 21 */	bctrl 
/* 802CAD18 002C7C58  3B 9C 00 01 */	addi r28, r28, 1
/* 802CAD1C 002C7C5C  3B 7B 00 04 */	addi r27, r27, 4
/* 802CAD20 002C7C60  2C 1C 00 03 */	cmpwi r28, 3
/* 802CAD24 002C7C64  41 80 FF E0 */	blt .L_802CAD04
/* 802CAD28 002C7C68  38 00 00 00 */	li r0, 0
/* 802CAD2C 002C7C6C  98 1D 02 DD */	stb r0, 0x2dd(r29)
/* 802CAD30 002C7C70  48 00 01 88 */	b .L_802CAEB8
.L_802CAD34:
/* 802CAD34 002C7C74  C0 02 E4 64 */	lfs f0, lbl_8051C7C4@sda21(r2)
/* 802CAD38 002C7C78  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802CAD3C 002C7C7C  40 80 01 7C */	bge .L_802CAEB8
/* 802CAD40 002C7C80  3B C1 00 08 */	addi r30, r1, 8
/* 802CAD44 002C7C84  CB E2 E3 F8 */	lfd f31, lbl_8051C758@sda21(r2)
/* 802CAD48 002C7C88  C3 C2 E3 F0 */	lfs f30, lbl_8051C750@sda21(r2)
/* 802CAD4C 002C7C8C  7F DF F3 78 */	mr r31, r30
/* 802CAD50 002C7C90  C3 A2 E4 00 */	lfs f29, lbl_8051C760@sda21(r2)
/* 802CAD54 002C7C94  3B 60 00 00 */	li r27, 0
/* 802CAD58 002C7C98  3F 80 43 30 */	lis r28, 0x4330
.L_802CAD5C:
/* 802CAD5C 002C7C9C  4B DF E8 45 */	bl rand
/* 802CAD60 002C7CA0  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802CAD64 002C7CA4  3B 7B 00 01 */	addi r27, r27, 1
/* 802CAD68 002C7CA8  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802CAD6C 002C7CAC  2C 1B 00 03 */	cmpwi r27, 3
/* 802CAD70 002C7CB0  93 81 00 28 */	stw r28, 0x28(r1)
/* 802CAD74 002C7CB4  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802CAD78 002C7CB8  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802CAD7C 002C7CBC  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802CAD80 002C7CC0  EC 1D 00 32 */	fmuls f0, f29, f0
/* 802CAD84 002C7CC4  FC 00 00 1E */	fctiwz f0, f0
/* 802CAD88 002C7CC8  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802CAD8C 002C7CCC  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802CAD90 002C7CD0  38 03 00 01 */	addi r0, r3, 1
/* 802CAD94 002C7CD4  90 1F 00 00 */	stw r0, 0(r31)
/* 802CAD98 002C7CD8  3B FF 00 04 */	addi r31, r31, 4
/* 802CAD9C 002C7CDC  41 80 FF C0 */	blt .L_802CAD5C
/* 802CADA0 002C7CE0  3B 60 00 00 */	li r27, 0
/* 802CADA4 002C7CE4  38 80 00 01 */	li r4, 1
/* 802CADA8 002C7CE8  38 60 00 02 */	li r3, 2
/* 802CADAC 002C7CEC  38 00 00 03 */	li r0, 3
/* 802CADB0 002C7CF0  3B E1 00 14 */	addi r31, r1, 0x14
/* 802CADB4 002C7CF4  93 61 00 14 */	stw r27, 0x14(r1)
/* 802CADB8 002C7CF8  CB A2 E3 F8 */	lfd f29, lbl_8051C758@sda21(r2)
/* 802CADBC 002C7CFC  7F FA FB 78 */	mr r26, r31
/* 802CADC0 002C7D00  90 81 00 18 */	stw r4, 0x18(r1)
/* 802CADC4 002C7D04  3F 80 43 30 */	lis r28, 0x4330
/* 802CADC8 002C7D08  C3 C2 E3 F0 */	lfs f30, lbl_8051C750@sda21(r2)
/* 802CADCC 002C7D0C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802CADD0 002C7D10  C3 E2 E4 68 */	lfs f31, lbl_8051C7C8@sda21(r2)
/* 802CADD4 002C7D14  90 01 00 20 */	stw r0, 0x20(r1)
.L_802CADD8:
/* 802CADD8 002C7D18  4B DF E7 C9 */	bl rand
/* 802CADDC 002C7D1C  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802CADE0 002C7D20  3B 7B 00 01 */	addi r27, r27, 1
/* 802CADE4 002C7D24  90 01 00 34 */	stw r0, 0x34(r1)
/* 802CADE8 002C7D28  2C 1B 00 04 */	cmpwi r27, 4
/* 802CADEC 002C7D2C  80 9A 00 00 */	lwz r4, 0(r26)
/* 802CADF0 002C7D30  93 81 00 30 */	stw r28, 0x30(r1)
/* 802CADF4 002C7D34  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802CADF8 002C7D38  EC 00 E8 28 */	fsubs f0, f0, f29
/* 802CADFC 002C7D3C  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802CAE00 002C7D40  EC 1F 00 32 */	fmuls f0, f31, f0
/* 802CAE04 002C7D44  FC 00 00 1E */	fctiwz f0, f0
/* 802CAE08 002C7D48  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802CAE0C 002C7D4C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802CAE10 002C7D50  54 03 10 3A */	slwi r3, r0, 2
/* 802CAE14 002C7D54  7C 1F 18 2E */	lwzx r0, r31, r3
/* 802CAE18 002C7D58  90 1A 00 00 */	stw r0, 0(r26)
/* 802CAE1C 002C7D5C  3B 5A 00 04 */	addi r26, r26, 4
/* 802CAE20 002C7D60  7C 9F 19 2E */	stwx r4, r31, r3
/* 802CAE24 002C7D64  41 80 FF B4 */	blt .L_802CADD8
/* 802CAE28 002C7D68  7F BA EB 78 */	mr r26, r29
/* 802CAE2C 002C7D6C  3B 80 00 00 */	li r28, 0
.L_802CAE30:
/* 802CAE30 002C7D70  80 7F 00 00 */	lwz r3, 0(r31)
/* 802CAE34 002C7D74  38 80 00 00 */	li r4, 0
/* 802CAE38 002C7D78  80 1E 00 00 */	lwz r0, 0(r30)
/* 802CAE3C 002C7D7C  1C A3 00 30 */	mulli r5, r3, 0x30
/* 802CAE40 002C7D80  80 7A 03 D0 */	lwz r3, 0x3d0(r26)
/* 802CAE44 002C7D84  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802CAE48 002C7D88  7C A5 02 14 */	add r5, r5, r0
/* 802CAE4C 002C7D8C  38 05 02 F0 */	addi r0, r5, 0x2f0
/* 802CAE50 002C7D90  7C 1D 02 14 */	add r0, r29, r0
/* 802CAE54 002C7D94  90 03 00 10 */	stw r0, 0x10(r3)
/* 802CAE58 002C7D98  80 7A 03 D0 */	lwz r3, 0x3d0(r26)
/* 802CAE5C 002C7D9C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAE60 002C7DA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CAE64 002C7DA4  7D 89 03 A6 */	mtctr r12
/* 802CAE68 002C7DA8  4E 80 04 21 */	bctrl 
/* 802CAE6C 002C7DAC  3B 9C 00 01 */	addi r28, r28, 1
/* 802CAE70 002C7DB0  3B FF 00 04 */	addi r31, r31, 4
/* 802CAE74 002C7DB4  2C 1C 00 03 */	cmpwi r28, 3
/* 802CAE78 002C7DB8  3B 5A 00 04 */	addi r26, r26, 4
/* 802CAE7C 002C7DBC  3B DE 00 04 */	addi r30, r30, 4
/* 802CAE80 002C7DC0  41 80 FF B0 */	blt .L_802CAE30
/* 802CAE84 002C7DC4  38 00 00 01 */	li r0, 1
/* 802CAE88 002C7DC8  7F A3 EB 78 */	mr r3, r29
/* 802CAE8C 002C7DCC  98 1D 02 DD */	stb r0, 0x2dd(r29)
/* 802CAE90 002C7DD0  81 9D 00 00 */	lwz r12, 0(r29)
/* 802CAE94 002C7DD4  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802CAE98 002C7DD8  7D 89 03 A6 */	mtctr r12
/* 802CAE9C 002C7DDC  4E 80 04 21 */	bctrl 
/* 802CAEA0 002C7DE0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAEA4 002C7DE4  38 80 58 44 */	li r4, 0x5844
/* 802CAEA8 002C7DE8  38 A0 00 00 */	li r5, 0
/* 802CAEAC 002C7DEC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802CAEB0 002C7DF0  7D 89 03 A6 */	mtctr r12
/* 802CAEB4 002C7DF4  4E 80 04 21 */	bctrl 
.L_802CAEB8:
/* 802CAEB8 002C7DF8  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802CAEBC 002C7DFC  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802CAEC0 002C7E00  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802CAEC4 002C7E04  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802CAEC8 002C7E08  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802CAECC 002C7E0C  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802CAED0 002C7E10  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 802CAED4 002C7E14  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802CAED8 002C7E18  7C 08 03 A6 */	mtlr r0
/* 802CAEDC 002C7E1C  38 21 00 80 */	addi r1, r1, 0x80
/* 802CAEE0 002C7E20  4E 80 00 20 */	blr 

.global startFurEffect__Q34Game7BigFoot3ObjFv
startFurEffect__Q34Game7BigFoot3ObjFv:
/* 802CAEE4 002C7E24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CAEE8 002C7E28  7C 08 02 A6 */	mflr r0
/* 802CAEEC 002C7E2C  38 80 00 00 */	li r4, 0
/* 802CAEF0 002C7E30  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CAEF4 002C7E34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CAEF8 002C7E38  7C 7F 1B 78 */	mr r31, r3
/* 802CAEFC 002C7E3C  93 C1 00 08 */	stw r30, 8(r1)
/* 802CAF00 002C7E40  80 63 04 94 */	lwz r3, 0x494(r3)
/* 802CAF04 002C7E44  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAF08 002C7E48  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CAF0C 002C7E4C  7D 89 03 A6 */	mtctr r12
/* 802CAF10 002C7E50  4E 80 04 21 */	bctrl 
/* 802CAF14 002C7E54  3B C0 00 00 */	li r30, 0
.L_802CAF18:
/* 802CAF18 002C7E58  80 7F 04 98 */	lwz r3, 0x498(r31)
/* 802CAF1C 002C7E5C  38 80 00 00 */	li r4, 0
/* 802CAF20 002C7E60  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAF24 002C7E64  81 8C 00 08 */	lwz r12, 8(r12)
/* 802CAF28 002C7E68  7D 89 03 A6 */	mtctr r12
/* 802CAF2C 002C7E6C  4E 80 04 21 */	bctrl 
/* 802CAF30 002C7E70  3B DE 00 01 */	addi r30, r30, 1
/* 802CAF34 002C7E74  3B FF 00 04 */	addi r31, r31, 4
/* 802CAF38 002C7E78  2C 1E 00 04 */	cmpwi r30, 4
/* 802CAF3C 002C7E7C  41 80 FF DC */	blt .L_802CAF18
/* 802CAF40 002C7E80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CAF44 002C7E84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CAF48 002C7E88  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CAF4C 002C7E8C  7C 08 03 A6 */	mtlr r0
/* 802CAF50 002C7E90  38 21 00 10 */	addi r1, r1, 0x10
/* 802CAF54 002C7E94  4E 80 00 20 */	blr 

.global finishFurEffect__Q34Game7BigFoot3ObjFv
finishFurEffect__Q34Game7BigFoot3ObjFv:
/* 802CAF58 002C7E98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CAF5C 002C7E9C  7C 08 02 A6 */	mflr r0
/* 802CAF60 002C7EA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CAF64 002C7EA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CAF68 002C7EA8  7C 7F 1B 78 */	mr r31, r3
/* 802CAF6C 002C7EAC  93 C1 00 08 */	stw r30, 8(r1)
/* 802CAF70 002C7EB0  80 63 04 94 */	lwz r3, 0x494(r3)
/* 802CAF74 002C7EB4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAF78 002C7EB8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CAF7C 002C7EBC  7D 89 03 A6 */	mtctr r12
/* 802CAF80 002C7EC0  4E 80 04 21 */	bctrl 
/* 802CAF84 002C7EC4  3B C0 00 00 */	li r30, 0
.L_802CAF88:
/* 802CAF88 002C7EC8  80 7F 04 98 */	lwz r3, 0x498(r31)
/* 802CAF8C 002C7ECC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CAF90 002C7ED0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802CAF94 002C7ED4  7D 89 03 A6 */	mtctr r12
/* 802CAF98 002C7ED8  4E 80 04 21 */	bctrl 
/* 802CAF9C 002C7EDC  3B DE 00 01 */	addi r30, r30, 1
/* 802CAFA0 002C7EE0  3B FF 00 04 */	addi r31, r31, 4
/* 802CAFA4 002C7EE4  2C 1E 00 04 */	cmpwi r30, 4
/* 802CAFA8 002C7EE8  41 80 FF E0 */	blt .L_802CAF88
/* 802CAFAC 002C7EEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CAFB0 002C7EF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CAFB4 002C7EF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CAFB8 002C7EF8  7C 08 03 A6 */	mtlr r0
/* 802CAFBC 002C7EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 802CAFC0 002C7F00  4E 80 00 20 */	blr 

.global updateDeadFurEffect__Q34Game7BigFoot3ObjFv
updateDeadFurEffect__Q34Game7BigFoot3ObjFv:
/* 802CAFC4 002C7F04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802CAFC8 002C7F08  7C 08 02 A6 */	mflr r0
/* 802CAFCC 002C7F0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CAFD0 002C7F10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802CAFD4 002C7F14  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802CAFD8 002C7F18  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802CAFDC 002C7F1C  7C 7D 1B 78 */	mr r29, r3
/* 802CAFE0 002C7F20  80 63 04 94 */	lwz r3, 0x494(r3)
/* 802CAFE4 002C7F24  C0 3D 02 D4 */	lfs f1, 0x2d4(r29)
/* 802CAFE8 002C7F28  48 12 1A 7D */	bl setGlobalScale__Q23efx10TOdamaFur1Ff
/* 802CAFEC 002C7F2C  3B C0 00 00 */	li r30, 0
/* 802CAFF0 002C7F30  7F BF EB 78 */	mr r31, r29
.L_802CAFF4:
/* 802CAFF4 002C7F34  80 7F 04 98 */	lwz r3, 0x498(r31)
/* 802CAFF8 002C7F38  C0 3D 02 D4 */	lfs f1, 0x2d4(r29)
/* 802CAFFC 002C7F3C  48 12 1A 81 */	bl setGlobalScale__Q23efx10TOdamaFur2Ff
/* 802CB000 002C7F40  3B DE 00 01 */	addi r30, r30, 1
/* 802CB004 002C7F44  3B FF 00 04 */	addi r31, r31, 4
/* 802CB008 002C7F48  2C 1E 00 04 */	cmpwi r30, 4
/* 802CB00C 002C7F4C  41 80 FF E8 */	blt .L_802CAFF4
/* 802CB010 002C7F50  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802CB014 002C7F54  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802CB018 002C7F58  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802CB01C 002C7F5C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802CB020 002C7F60  7C 08 03 A6 */	mtlr r0
/* 802CB024 002C7F64  38 21 00 20 */	addi r1, r1, 0x20
/* 802CB028 002C7F68  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game7BigFoot3ObjFv
effectDrawOn__Q34Game7BigFoot3ObjFv:
/* 802CB02C 002C7F6C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802CB030 002C7F70  7C 08 02 A6 */	mflr r0
/* 802CB034 002C7F74  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CB038 002C7F78  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802CB03C 002C7F7C  7C 7B 1B 78 */	mr r27, r3
/* 802CB040 002C7F80  3B C0 00 00 */	li r30, 0
/* 802CB044 002C7F84  7F 7F DB 78 */	mr r31, r27
.L_802CB048:
/* 802CB048 002C7F88  80 7F 03 B0 */	lwz r3, 0x3b0(r31)
/* 802CB04C 002C7F8C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB050 002C7F90  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802CB054 002C7F94  7D 89 03 A6 */	mtctr r12
/* 802CB058 002C7F98  4E 80 04 21 */	bctrl 
/* 802CB05C 002C7F9C  80 7F 03 C0 */	lwz r3, 0x3c0(r31)
/* 802CB060 002C7FA0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB064 002C7FA4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB068 002C7FA8  7D 89 03 A6 */	mtctr r12
/* 802CB06C 002C7FAC  4E 80 04 21 */	bctrl 
/* 802CB070 002C7FB0  3B DE 00 01 */	addi r30, r30, 1
/* 802CB074 002C7FB4  3B FF 00 04 */	addi r31, r31, 4
/* 802CB078 002C7FB8  2C 1E 00 04 */	cmpwi r30, 4
/* 802CB07C 002C7FBC  41 80 FF CC */	blt .L_802CB048
/* 802CB080 002C7FC0  3B C0 00 00 */	li r30, 0
/* 802CB084 002C7FC4  7F 7F DB 78 */	mr r31, r27
.L_802CB088:
/* 802CB088 002C7FC8  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 802CB08C 002C7FCC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB090 002C7FD0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB094 002C7FD4  7D 89 03 A6 */	mtctr r12
/* 802CB098 002C7FD8  4E 80 04 21 */	bctrl 
/* 802CB09C 002C7FDC  3B DE 00 01 */	addi r30, r30, 1
/* 802CB0A0 002C7FE0  3B FF 00 04 */	addi r31, r31, 4
/* 802CB0A4 002C7FE4  2C 1E 00 03 */	cmpwi r30, 3
/* 802CB0A8 002C7FE8  41 80 FF E0 */	blt .L_802CB088
/* 802CB0AC 002C7FEC  3B A0 00 00 */	li r29, 0
/* 802CB0B0 002C7FF0  7F 7E DB 78 */	mr r30, r27
.L_802CB0B4:
/* 802CB0B4 002C7FF4  3B 80 00 00 */	li r28, 0
/* 802CB0B8 002C7FF8  7F DF F3 78 */	mr r31, r30
.L_802CB0BC:
/* 802CB0BC 002C7FFC  80 7F 03 DC */	lwz r3, 0x3dc(r31)
/* 802CB0C0 002C8000  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB0C4 002C8004  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB0C8 002C8008  7D 89 03 A6 */	mtctr r12
/* 802CB0CC 002C800C  4E 80 04 21 */	bctrl 
/* 802CB0D0 002C8010  80 7F 04 0C */	lwz r3, 0x40c(r31)
/* 802CB0D4 002C8014  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB0D8 002C8018  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB0DC 002C801C  7D 89 03 A6 */	mtctr r12
/* 802CB0E0 002C8020  4E 80 04 21 */	bctrl 
/* 802CB0E4 002C8024  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB0E8 002C8028  3B FF 00 04 */	addi r31, r31, 4
/* 802CB0EC 002C802C  2C 1C 00 03 */	cmpwi r28, 3
/* 802CB0F0 002C8030  41 80 FF CC */	blt .L_802CB0BC
/* 802CB0F4 002C8034  3B BD 00 01 */	addi r29, r29, 1
/* 802CB0F8 002C8038  3B DE 00 0C */	addi r30, r30, 0xc
/* 802CB0FC 002C803C  2C 1D 00 04 */	cmpwi r29, 4
/* 802CB100 002C8040  41 80 FF B4 */	blt .L_802CB0B4
/* 802CB104 002C8044  3B 80 00 00 */	li r28, 0
/* 802CB108 002C8048  7F 7F DB 78 */	mr r31, r27
.L_802CB10C:
/* 802CB10C 002C804C  3B A0 00 00 */	li r29, 0
/* 802CB110 002C8050  7F FE FB 78 */	mr r30, r31
.L_802CB114:
/* 802CB114 002C8054  80 7E 04 3C */	lwz r3, 0x43c(r30)
/* 802CB118 002C8058  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB11C 002C805C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB120 002C8060  7D 89 03 A6 */	mtctr r12
/* 802CB124 002C8064  4E 80 04 21 */	bctrl 
/* 802CB128 002C8068  80 7E 04 5C */	lwz r3, 0x45c(r30)
/* 802CB12C 002C806C  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB130 002C8070  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB134 002C8074  7D 89 03 A6 */	mtctr r12
/* 802CB138 002C8078  4E 80 04 21 */	bctrl 
/* 802CB13C 002C807C  3B BD 00 01 */	addi r29, r29, 1
/* 802CB140 002C8080  3B DE 00 04 */	addi r30, r30, 4
/* 802CB144 002C8084  2C 1D 00 02 */	cmpwi r29, 2
/* 802CB148 002C8088  41 80 FF CC */	blt .L_802CB114
/* 802CB14C 002C808C  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB150 002C8090  3B FF 00 08 */	addi r31, r31, 8
/* 802CB154 002C8094  2C 1C 00 04 */	cmpwi r28, 4
/* 802CB158 002C8098  41 80 FF B4 */	blt .L_802CB10C
/* 802CB15C 002C809C  3B 80 00 00 */	li r28, 0
/* 802CB160 002C80A0  7F 7E DB 78 */	mr r30, r27
.L_802CB164:
/* 802CB164 002C80A4  80 7E 04 7C */	lwz r3, 0x47c(r30)
/* 802CB168 002C80A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB16C 002C80AC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB170 002C80B0  7D 89 03 A6 */	mtctr r12
/* 802CB174 002C80B4  4E 80 04 21 */	bctrl 
/* 802CB178 002C80B8  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB17C 002C80BC  3B DE 00 04 */	addi r30, r30, 4
/* 802CB180 002C80C0  2C 1C 00 04 */	cmpwi r28, 4
/* 802CB184 002C80C4  41 80 FF E0 */	blt .L_802CB164
/* 802CB188 002C80C8  80 7B 04 8C */	lwz r3, 0x48c(r27)
/* 802CB18C 002C80CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB190 002C80D0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB194 002C80D4  7D 89 03 A6 */	mtctr r12
/* 802CB198 002C80D8  4E 80 04 21 */	bctrl 
/* 802CB19C 002C80DC  80 7B 04 90 */	lwz r3, 0x490(r27)
/* 802CB1A0 002C80E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB1A4 002C80E4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB1A8 002C80E8  7D 89 03 A6 */	mtctr r12
/* 802CB1AC 002C80EC  4E 80 04 21 */	bctrl 
/* 802CB1B0 002C80F0  80 7B 04 94 */	lwz r3, 0x494(r27)
/* 802CB1B4 002C80F4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB1B8 002C80F8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB1BC 002C80FC  7D 89 03 A6 */	mtctr r12
/* 802CB1C0 002C8100  4E 80 04 21 */	bctrl 
/* 802CB1C4 002C8104  3B 80 00 00 */	li r28, 0
/* 802CB1C8 002C8108  7F 7E DB 78 */	mr r30, r27
.L_802CB1CC:
/* 802CB1CC 002C810C  80 7E 04 98 */	lwz r3, 0x498(r30)
/* 802CB1D0 002C8110  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB1D4 002C8114  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802CB1D8 002C8118  7D 89 03 A6 */	mtctr r12
/* 802CB1DC 002C811C  4E 80 04 21 */	bctrl 
/* 802CB1E0 002C8120  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB1E4 002C8124  3B DE 00 04 */	addi r30, r30, 4
/* 802CB1E8 002C8128  2C 1C 00 04 */	cmpwi r28, 4
/* 802CB1EC 002C812C  41 80 FF E0 */	blt .L_802CB1CC
/* 802CB1F0 002C8130  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802CB1F4 002C8134  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802CB1F8 002C8138  7C 08 03 A6 */	mtlr r0
/* 802CB1FC 002C813C  38 21 00 20 */	addi r1, r1, 0x20
/* 802CB200 002C8140  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game7BigFoot3ObjFv
effectDrawOff__Q34Game7BigFoot3ObjFv:
/* 802CB204 002C8144  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802CB208 002C8148  7C 08 02 A6 */	mflr r0
/* 802CB20C 002C814C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802CB210 002C8150  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802CB214 002C8154  7C 7B 1B 78 */	mr r27, r3
/* 802CB218 002C8158  3B C0 00 00 */	li r30, 0
/* 802CB21C 002C815C  7F 7F DB 78 */	mr r31, r27
.L_802CB220:
/* 802CB220 002C8160  80 7F 03 B0 */	lwz r3, 0x3b0(r31)
/* 802CB224 002C8164  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB228 002C8168  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802CB22C 002C816C  7D 89 03 A6 */	mtctr r12
/* 802CB230 002C8170  4E 80 04 21 */	bctrl 
/* 802CB234 002C8174  80 7F 03 C0 */	lwz r3, 0x3c0(r31)
/* 802CB238 002C8178  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB23C 002C817C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB240 002C8180  7D 89 03 A6 */	mtctr r12
/* 802CB244 002C8184  4E 80 04 21 */	bctrl 
/* 802CB248 002C8188  3B DE 00 01 */	addi r30, r30, 1
/* 802CB24C 002C818C  3B FF 00 04 */	addi r31, r31, 4
/* 802CB250 002C8190  2C 1E 00 04 */	cmpwi r30, 4
/* 802CB254 002C8194  41 80 FF CC */	blt .L_802CB220
/* 802CB258 002C8198  3B C0 00 00 */	li r30, 0
/* 802CB25C 002C819C  7F 7F DB 78 */	mr r31, r27
.L_802CB260:
/* 802CB260 002C81A0  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 802CB264 002C81A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB268 002C81A8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB26C 002C81AC  7D 89 03 A6 */	mtctr r12
/* 802CB270 002C81B0  4E 80 04 21 */	bctrl 
/* 802CB274 002C81B4  3B DE 00 01 */	addi r30, r30, 1
/* 802CB278 002C81B8  3B FF 00 04 */	addi r31, r31, 4
/* 802CB27C 002C81BC  2C 1E 00 03 */	cmpwi r30, 3
/* 802CB280 002C81C0  41 80 FF E0 */	blt .L_802CB260
/* 802CB284 002C81C4  3B A0 00 00 */	li r29, 0
/* 802CB288 002C81C8  7F 7E DB 78 */	mr r30, r27
.L_802CB28C:
/* 802CB28C 002C81CC  3B 80 00 00 */	li r28, 0
/* 802CB290 002C81D0  7F DF F3 78 */	mr r31, r30
.L_802CB294:
/* 802CB294 002C81D4  80 7F 03 DC */	lwz r3, 0x3dc(r31)
/* 802CB298 002C81D8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB29C 002C81DC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB2A0 002C81E0  7D 89 03 A6 */	mtctr r12
/* 802CB2A4 002C81E4  4E 80 04 21 */	bctrl 
/* 802CB2A8 002C81E8  80 7F 04 0C */	lwz r3, 0x40c(r31)
/* 802CB2AC 002C81EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB2B0 002C81F0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB2B4 002C81F4  7D 89 03 A6 */	mtctr r12
/* 802CB2B8 002C81F8  4E 80 04 21 */	bctrl 
/* 802CB2BC 002C81FC  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB2C0 002C8200  3B FF 00 04 */	addi r31, r31, 4
/* 802CB2C4 002C8204  2C 1C 00 03 */	cmpwi r28, 3
/* 802CB2C8 002C8208  41 80 FF CC */	blt .L_802CB294
/* 802CB2CC 002C820C  3B BD 00 01 */	addi r29, r29, 1
/* 802CB2D0 002C8210  3B DE 00 0C */	addi r30, r30, 0xc
/* 802CB2D4 002C8214  2C 1D 00 04 */	cmpwi r29, 4
/* 802CB2D8 002C8218  41 80 FF B4 */	blt .L_802CB28C
/* 802CB2DC 002C821C  3B 80 00 00 */	li r28, 0
/* 802CB2E0 002C8220  7F 7F DB 78 */	mr r31, r27
.L_802CB2E4:
/* 802CB2E4 002C8224  3B A0 00 00 */	li r29, 0
/* 802CB2E8 002C8228  7F FE FB 78 */	mr r30, r31
.L_802CB2EC:
/* 802CB2EC 002C822C  80 7E 04 3C */	lwz r3, 0x43c(r30)
/* 802CB2F0 002C8230  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB2F4 002C8234  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB2F8 002C8238  7D 89 03 A6 */	mtctr r12
/* 802CB2FC 002C823C  4E 80 04 21 */	bctrl 
/* 802CB300 002C8240  80 7E 04 5C */	lwz r3, 0x45c(r30)
/* 802CB304 002C8244  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB308 002C8248  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB30C 002C824C  7D 89 03 A6 */	mtctr r12
/* 802CB310 002C8250  4E 80 04 21 */	bctrl 
/* 802CB314 002C8254  3B BD 00 01 */	addi r29, r29, 1
/* 802CB318 002C8258  3B DE 00 04 */	addi r30, r30, 4
/* 802CB31C 002C825C  2C 1D 00 02 */	cmpwi r29, 2
/* 802CB320 002C8260  41 80 FF CC */	blt .L_802CB2EC
/* 802CB324 002C8264  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB328 002C8268  3B FF 00 08 */	addi r31, r31, 8
/* 802CB32C 002C826C  2C 1C 00 04 */	cmpwi r28, 4
/* 802CB330 002C8270  41 80 FF B4 */	blt .L_802CB2E4
/* 802CB334 002C8274  3B 80 00 00 */	li r28, 0
/* 802CB338 002C8278  7F 7E DB 78 */	mr r30, r27
.L_802CB33C:
/* 802CB33C 002C827C  80 7E 04 7C */	lwz r3, 0x47c(r30)
/* 802CB340 002C8280  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB344 002C8284  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB348 002C8288  7D 89 03 A6 */	mtctr r12
/* 802CB34C 002C828C  4E 80 04 21 */	bctrl 
/* 802CB350 002C8290  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB354 002C8294  3B DE 00 04 */	addi r30, r30, 4
/* 802CB358 002C8298  2C 1C 00 04 */	cmpwi r28, 4
/* 802CB35C 002C829C  41 80 FF E0 */	blt .L_802CB33C
/* 802CB360 002C82A0  80 7B 04 8C */	lwz r3, 0x48c(r27)
/* 802CB364 002C82A4  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB368 002C82A8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB36C 002C82AC  7D 89 03 A6 */	mtctr r12
/* 802CB370 002C82B0  4E 80 04 21 */	bctrl 
/* 802CB374 002C82B4  80 7B 04 90 */	lwz r3, 0x490(r27)
/* 802CB378 002C82B8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB37C 002C82BC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB380 002C82C0  7D 89 03 A6 */	mtctr r12
/* 802CB384 002C82C4  4E 80 04 21 */	bctrl 
/* 802CB388 002C82C8  80 7B 04 94 */	lwz r3, 0x494(r27)
/* 802CB38C 002C82CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB390 002C82D0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB394 002C82D4  7D 89 03 A6 */	mtctr r12
/* 802CB398 002C82D8  4E 80 04 21 */	bctrl 
/* 802CB39C 002C82DC  3B 80 00 00 */	li r28, 0
/* 802CB3A0 002C82E0  7F 7E DB 78 */	mr r30, r27
.L_802CB3A4:
/* 802CB3A4 002C82E4  80 7E 04 98 */	lwz r3, 0x498(r30)
/* 802CB3A8 002C82E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802CB3AC 002C82EC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802CB3B0 002C82F0  7D 89 03 A6 */	mtctr r12
/* 802CB3B4 002C82F4  4E 80 04 21 */	bctrl 
/* 802CB3B8 002C82F8  3B 9C 00 01 */	addi r28, r28, 1
/* 802CB3BC 002C82FC  3B DE 00 04 */	addi r30, r30, 4
/* 802CB3C0 002C8300  2C 1C 00 04 */	cmpwi r28, 4
/* 802CB3C4 002C8304  41 80 FF E0 */	blt .L_802CB3A4
/* 802CB3C8 002C8308  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802CB3CC 002C830C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802CB3D0 002C8310  7C 08 03 A6 */	mtlr r0
/* 802CB3D4 002C8314  38 21 00 20 */	addi r1, r1, 0x20
/* 802CB3D8 002C8318  4E 80 00 20 */	blr 

.global addShadowScale__Q34Game7BigFoot3ObjFv
addShadowScale__Q34Game7BigFoot3ObjFv:
/* 802CB3DC 002C831C  C0 63 02 D4 */	lfs f3, 0x2d4(r3)
/* 802CB3E0 002C8320  C0 42 E3 CC */	lfs f2, lbl_8051C72C@sda21(r2)
/* 802CB3E4 002C8324  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802CB3E8 002C8328  4C 80 00 20 */	bgelr 
/* 802CB3EC 002C832C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802CB3F0 002C8330  C0 22 E4 00 */	lfs f1, lbl_8051C760@sda21(r2)
/* 802CB3F4 002C8334  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802CB3F8 002C8338  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 802CB3FC 002C833C  D0 03 02 D4 */	stfs f0, 0x2d4(r3)
/* 802CB400 002C8340  C0 03 02 D4 */	lfs f0, 0x2d4(r3)
/* 802CB404 002C8344  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802CB408 002C8348  4C 81 00 20 */	blelr 
/* 802CB40C 002C834C  D0 43 02 D4 */	stfs f2, 0x2d4(r3)
/* 802CB410 002C8350  4E 80 00 20 */	blr 

.global __dt__Q23efx10TOdamaFur1Fv
__dt__Q23efx10TOdamaFur1Fv:
/* 802CB414 002C8354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB418 002C8358  7C 08 02 A6 */	mflr r0
/* 802CB41C 002C835C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB420 002C8360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB424 002C8364  7C 9F 23 78 */	mr r31, r4
/* 802CB428 002C8368  93 C1 00 08 */	stw r30, 8(r1)
/* 802CB42C 002C836C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CB430 002C8370  41 82 00 64 */	beq .L_802CB494
/* 802CB434 002C8374  3C 60 80 4D */	lis r3, __vt__Q23efx10TOdamaFur1@ha
/* 802CB438 002C8378  38 63 1B E0 */	addi r3, r3, __vt__Q23efx10TOdamaFur1@l
/* 802CB43C 002C837C  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB440 002C8380  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB444 002C8384  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB448 002C8388  41 82 00 3C */	beq .L_802CB484
/* 802CB44C 002C838C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802CB450 002C8390  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802CB454 002C8394  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB458 002C8398  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB45C 002C839C  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB460 002C83A0  41 82 00 24 */	beq .L_802CB484
/* 802CB464 002C83A4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802CB468 002C83A8  38 7E 00 04 */	addi r3, r30, 4
/* 802CB46C 002C83AC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802CB470 002C83B0  38 80 00 00 */	li r4, 0
/* 802CB474 002C83B4  90 BE 00 00 */	stw r5, 0(r30)
/* 802CB478 002C83B8  38 05 00 14 */	addi r0, r5, 0x14
/* 802CB47C 002C83BC  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB480 002C83C0  4B DC 48 1D */	bl __dt__18JPAEmitterCallBackFv
.L_802CB484:
/* 802CB484 002C83C4  7F E0 07 35 */	extsh. r0, r31
/* 802CB488 002C83C8  40 81 00 0C */	ble .L_802CB494
/* 802CB48C 002C83CC  7F C3 F3 78 */	mr r3, r30
/* 802CB490 002C83D0  4B D5 8C 25 */	bl __dl__FPv
.L_802CB494:
/* 802CB494 002C83D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CB498 002C83D8  7F C3 F3 78 */	mr r3, r30
/* 802CB49C 002C83DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CB4A0 002C83E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CB4A4 002C83E4  7C 08 03 A6 */	mtlr r0
/* 802CB4A8 002C83E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802CB4AC 002C83EC  4E 80 00 20 */	blr 

.global __dt__Q23efx17TOdamaDeadHahenC2Fv
__dt__Q23efx17TOdamaDeadHahenC2Fv:
/* 802CB4B0 002C83F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB4B4 002C83F4  7C 08 02 A6 */	mflr r0
/* 802CB4B8 002C83F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB4BC 002C83FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB4C0 002C8400  7C 9F 23 78 */	mr r31, r4
/* 802CB4C4 002C8404  93 C1 00 08 */	stw r30, 8(r1)
/* 802CB4C8 002C8408  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CB4CC 002C840C  41 82 00 64 */	beq .L_802CB530
/* 802CB4D0 002C8410  3C 60 80 4D */	lis r3, __vt__Q23efx17TOdamaDeadHahenC2@ha
/* 802CB4D4 002C8414  38 63 1C 2C */	addi r3, r3, __vt__Q23efx17TOdamaDeadHahenC2@l
/* 802CB4D8 002C8418  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB4DC 002C841C  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB4E0 002C8420  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB4E4 002C8424  41 82 00 3C */	beq .L_802CB520
/* 802CB4E8 002C8428  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802CB4EC 002C842C  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802CB4F0 002C8430  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB4F4 002C8434  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB4F8 002C8438  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB4FC 002C843C  41 82 00 24 */	beq .L_802CB520
/* 802CB500 002C8440  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802CB504 002C8444  38 7E 00 04 */	addi r3, r30, 4
/* 802CB508 002C8448  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802CB50C 002C844C  38 80 00 00 */	li r4, 0
/* 802CB510 002C8450  90 BE 00 00 */	stw r5, 0(r30)
/* 802CB514 002C8454  38 05 00 14 */	addi r0, r5, 0x14
/* 802CB518 002C8458  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB51C 002C845C  4B DC 47 81 */	bl __dt__18JPAEmitterCallBackFv
.L_802CB520:
/* 802CB520 002C8460  7F E0 07 35 */	extsh. r0, r31
/* 802CB524 002C8464  40 81 00 0C */	ble .L_802CB530
/* 802CB528 002C8468  7F C3 F3 78 */	mr r3, r30
/* 802CB52C 002C846C  4B D5 8B 89 */	bl __dl__FPv
.L_802CB530:
/* 802CB530 002C8470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CB534 002C8474  7F C3 F3 78 */	mr r3, r30
/* 802CB538 002C8478  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CB53C 002C847C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CB540 002C8480  7C 08 03 A6 */	mtlr r0
/* 802CB544 002C8484  38 21 00 10 */	addi r1, r1, 0x10
/* 802CB548 002C8488  4E 80 00 20 */	blr 

.global __dt__Q23efx17TOdamaDeadHahenC1Fv
__dt__Q23efx17TOdamaDeadHahenC1Fv:
/* 802CB54C 002C848C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB550 002C8490  7C 08 02 A6 */	mflr r0
/* 802CB554 002C8494  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB558 002C8498  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB55C 002C849C  7C 9F 23 78 */	mr r31, r4
/* 802CB560 002C84A0  93 C1 00 08 */	stw r30, 8(r1)
/* 802CB564 002C84A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CB568 002C84A8  41 82 00 64 */	beq .L_802CB5CC
/* 802CB56C 002C84AC  3C 60 80 4D */	lis r3, __vt__Q23efx17TOdamaDeadHahenC1@ha
/* 802CB570 002C84B0  38 63 1C 78 */	addi r3, r3, __vt__Q23efx17TOdamaDeadHahenC1@l
/* 802CB574 002C84B4  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB578 002C84B8  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB57C 002C84BC  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB580 002C84C0  41 82 00 3C */	beq .L_802CB5BC
/* 802CB584 002C84C4  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802CB588 002C84C8  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802CB58C 002C84CC  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB590 002C84D0  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB594 002C84D4  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB598 002C84D8  41 82 00 24 */	beq .L_802CB5BC
/* 802CB59C 002C84DC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802CB5A0 002C84E0  38 7E 00 04 */	addi r3, r30, 4
/* 802CB5A4 002C84E4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802CB5A8 002C84E8  38 80 00 00 */	li r4, 0
/* 802CB5AC 002C84EC  90 BE 00 00 */	stw r5, 0(r30)
/* 802CB5B0 002C84F0  38 05 00 14 */	addi r0, r5, 0x14
/* 802CB5B4 002C84F4  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB5B8 002C84F8  4B DC 46 E5 */	bl __dt__18JPAEmitterCallBackFv
.L_802CB5BC:
/* 802CB5BC 002C84FC  7F E0 07 35 */	extsh. r0, r31
/* 802CB5C0 002C8500  40 81 00 0C */	ble .L_802CB5CC
/* 802CB5C4 002C8504  7F C3 F3 78 */	mr r3, r30
/* 802CB5C8 002C8508  4B D5 8A ED */	bl __dl__FPv
.L_802CB5CC:
/* 802CB5CC 002C850C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CB5D0 002C8510  7F C3 F3 78 */	mr r3, r30
/* 802CB5D4 002C8514  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CB5D8 002C8518  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CB5DC 002C851C  7C 08 03 A6 */	mtlr r0
/* 802CB5E0 002C8520  38 21 00 10 */	addi r1, r1, 0x10
/* 802CB5E4 002C8524  4E 80 00 20 */	blr 

.global __dt__Q23efx10TOdamaFur2Fv
__dt__Q23efx10TOdamaFur2Fv:
/* 802CB5E8 002C8528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB5EC 002C852C  7C 08 02 A6 */	mflr r0
/* 802CB5F0 002C8530  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB5F4 002C8534  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB5F8 002C8538  7C 9F 23 78 */	mr r31, r4
/* 802CB5FC 002C853C  93 C1 00 08 */	stw r30, 8(r1)
/* 802CB600 002C8540  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CB604 002C8544  41 82 00 64 */	beq .L_802CB668
/* 802CB608 002C8548  3C 60 80 4D */	lis r3, __vt__Q23efx10TOdamaFur2@ha
/* 802CB60C 002C854C  38 63 1C C4 */	addi r3, r3, __vt__Q23efx10TOdamaFur2@l
/* 802CB610 002C8550  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB614 002C8554  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB618 002C8558  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB61C 002C855C  41 82 00 3C */	beq .L_802CB658
/* 802CB620 002C8560  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802CB624 002C8564  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802CB628 002C8568  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB62C 002C856C  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB630 002C8570  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB634 002C8574  41 82 00 24 */	beq .L_802CB658
/* 802CB638 002C8578  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802CB63C 002C857C  38 7E 00 04 */	addi r3, r30, 4
/* 802CB640 002C8580  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802CB644 002C8584  38 80 00 00 */	li r4, 0
/* 802CB648 002C8588  90 BE 00 00 */	stw r5, 0(r30)
/* 802CB64C 002C858C  38 05 00 14 */	addi r0, r5, 0x14
/* 802CB650 002C8590  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB654 002C8594  4B DC 46 49 */	bl __dt__18JPAEmitterCallBackFv
.L_802CB658:
/* 802CB658 002C8598  7F E0 07 35 */	extsh. r0, r31
/* 802CB65C 002C859C  40 81 00 0C */	ble .L_802CB668
/* 802CB660 002C85A0  7F C3 F3 78 */	mr r3, r30
/* 802CB664 002C85A4  4B D5 8A 51 */	bl __dl__FPv
.L_802CB668:
/* 802CB668 002C85A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CB66C 002C85AC  7F C3 F3 78 */	mr r3, r30
/* 802CB670 002C85B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CB674 002C85B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CB678 002C85B8  7C 08 03 A6 */	mtlr r0
/* 802CB67C 002C85BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802CB680 002C85C0  4E 80 00 20 */	blr 

.global __dt__Q23efx16TOdamaDeadHahenBFv
__dt__Q23efx16TOdamaDeadHahenBFv:
/* 802CB684 002C85C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB688 002C85C8  7C 08 02 A6 */	mflr r0
/* 802CB68C 002C85CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB690 002C85D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB694 002C85D4  7C 9F 23 78 */	mr r31, r4
/* 802CB698 002C85D8  93 C1 00 08 */	stw r30, 8(r1)
/* 802CB69C 002C85DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CB6A0 002C85E0  41 82 00 64 */	beq .L_802CB704
/* 802CB6A4 002C85E4  3C 60 80 4D */	lis r3, __vt__Q23efx16TOdamaDeadHahenB@ha
/* 802CB6A8 002C85E8  38 63 1D 10 */	addi r3, r3, __vt__Q23efx16TOdamaDeadHahenB@l
/* 802CB6AC 002C85EC  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB6B0 002C85F0  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB6B4 002C85F4  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB6B8 002C85F8  41 82 00 3C */	beq .L_802CB6F4
/* 802CB6BC 002C85FC  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802CB6C0 002C8600  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802CB6C4 002C8604  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB6C8 002C8608  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB6CC 002C860C  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB6D0 002C8610  41 82 00 24 */	beq .L_802CB6F4
/* 802CB6D4 002C8614  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802CB6D8 002C8618  38 7E 00 04 */	addi r3, r30, 4
/* 802CB6DC 002C861C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802CB6E0 002C8620  38 80 00 00 */	li r4, 0
/* 802CB6E4 002C8624  90 BE 00 00 */	stw r5, 0(r30)
/* 802CB6E8 002C8628  38 05 00 14 */	addi r0, r5, 0x14
/* 802CB6EC 002C862C  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB6F0 002C8630  4B DC 45 AD */	bl __dt__18JPAEmitterCallBackFv
.L_802CB6F4:
/* 802CB6F4 002C8634  7F E0 07 35 */	extsh. r0, r31
/* 802CB6F8 002C8638  40 81 00 0C */	ble .L_802CB704
/* 802CB6FC 002C863C  7F C3 F3 78 */	mr r3, r30
/* 802CB700 002C8640  4B D5 89 B5 */	bl __dl__FPv
.L_802CB704:
/* 802CB704 002C8644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CB708 002C8648  7F C3 F3 78 */	mr r3, r30
/* 802CB70C 002C864C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CB710 002C8650  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CB714 002C8654  7C 08 03 A6 */	mtlr r0
/* 802CB718 002C8658  38 21 00 10 */	addi r1, r1, 0x10
/* 802CB71C 002C865C  4E 80 00 20 */	blr 

.global __dt__Q23efx16TOdamaDeadHahenAFv
__dt__Q23efx16TOdamaDeadHahenAFv:
/* 802CB720 002C8660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB724 002C8664  7C 08 02 A6 */	mflr r0
/* 802CB728 002C8668  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB72C 002C866C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB730 002C8670  7C 9F 23 78 */	mr r31, r4
/* 802CB734 002C8674  93 C1 00 08 */	stw r30, 8(r1)
/* 802CB738 002C8678  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CB73C 002C867C  41 82 00 64 */	beq .L_802CB7A0
/* 802CB740 002C8680  3C 60 80 4D */	lis r3, __vt__Q23efx16TOdamaDeadHahenA@ha
/* 802CB744 002C8684  38 63 1D 5C */	addi r3, r3, __vt__Q23efx16TOdamaDeadHahenA@l
/* 802CB748 002C8688  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB74C 002C868C  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB750 002C8690  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB754 002C8694  41 82 00 3C */	beq .L_802CB790
/* 802CB758 002C8698  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802CB75C 002C869C  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802CB760 002C86A0  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB764 002C86A4  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB768 002C86A8  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB76C 002C86AC  41 82 00 24 */	beq .L_802CB790
/* 802CB770 002C86B0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802CB774 002C86B4  38 7E 00 04 */	addi r3, r30, 4
/* 802CB778 002C86B8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802CB77C 002C86BC  38 80 00 00 */	li r4, 0
/* 802CB780 002C86C0  90 BE 00 00 */	stw r5, 0(r30)
/* 802CB784 002C86C4  38 05 00 14 */	addi r0, r5, 0x14
/* 802CB788 002C86C8  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB78C 002C86CC  4B DC 45 11 */	bl __dt__18JPAEmitterCallBackFv
.L_802CB790:
/* 802CB790 002C86D0  7F E0 07 35 */	extsh. r0, r31
/* 802CB794 002C86D4  40 81 00 0C */	ble .L_802CB7A0
/* 802CB798 002C86D8  7F C3 F3 78 */	mr r3, r30
/* 802CB79C 002C86DC  4B D5 89 19 */	bl __dl__FPv
.L_802CB7A0:
/* 802CB7A0 002C86E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CB7A4 002C86E4  7F C3 F3 78 */	mr r3, r30
/* 802CB7A8 002C86E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CB7AC 002C86EC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CB7B0 002C86F0  7C 08 03 A6 */	mtlr r0
/* 802CB7B4 002C86F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802CB7B8 002C86F8  4E 80 00 20 */	blr 

.global __dt__Q23efx11TOdamaHahenFv
__dt__Q23efx11TOdamaHahenFv:
/* 802CB7BC 002C86FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802CB7C0 002C8700  7C 08 02 A6 */	mflr r0
/* 802CB7C4 002C8704  90 01 00 14 */	stw r0, 0x14(r1)
/* 802CB7C8 002C8708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802CB7CC 002C870C  7C 9F 23 78 */	mr r31, r4
/* 802CB7D0 002C8710  93 C1 00 08 */	stw r30, 8(r1)
/* 802CB7D4 002C8714  7C 7E 1B 79 */	or. r30, r3, r3
/* 802CB7D8 002C8718  41 82 00 64 */	beq .L_802CB83C
/* 802CB7DC 002C871C  3C 60 80 4D */	lis r3, __vt__Q23efx11TOdamaHahen@ha
/* 802CB7E0 002C8720  38 63 1D A8 */	addi r3, r3, __vt__Q23efx11TOdamaHahen@l
/* 802CB7E4 002C8724  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB7E8 002C8728  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB7EC 002C872C  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB7F0 002C8730  41 82 00 3C */	beq .L_802CB82C
/* 802CB7F4 002C8734  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802CB7F8 002C8738  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802CB7FC 002C873C  90 7E 00 00 */	stw r3, 0(r30)
/* 802CB800 002C8740  38 03 00 14 */	addi r0, r3, 0x14
/* 802CB804 002C8744  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB808 002C8748  41 82 00 24 */	beq .L_802CB82C
/* 802CB80C 002C874C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802CB810 002C8750  38 7E 00 04 */	addi r3, r30, 4
/* 802CB814 002C8754  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802CB818 002C8758  38 80 00 00 */	li r4, 0
/* 802CB81C 002C875C  90 BE 00 00 */	stw r5, 0(r30)
/* 802CB820 002C8760  38 05 00 14 */	addi r0, r5, 0x14
/* 802CB824 002C8764  90 1E 00 04 */	stw r0, 4(r30)
/* 802CB828 002C8768  4B DC 44 75 */	bl __dt__18JPAEmitterCallBackFv
.L_802CB82C:
/* 802CB82C 002C876C  7F E0 07 35 */	extsh. r0, r31
/* 802CB830 002C8770  40 81 00 0C */	ble .L_802CB83C
/* 802CB834 002C8774  7F C3 F3 78 */	mr r3, r30
/* 802CB838 002C8778  4B D5 88 7D */	bl __dl__FPv
.L_802CB83C:
/* 802CB83C 002C877C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802CB840 002C8780  7F C3 F3 78 */	mr r3, r30
/* 802CB844 002C8784  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802CB848 002C8788  83 C1 00 08 */	lwz r30, 8(r1)
/* 802CB84C 002C878C  7C 08 03 A6 */	mtlr r0
/* 802CB850 002C8790  38 21 00 10 */	addi r1, r1, 0x10
/* 802CB854 002C8794  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game7BigFoot3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game7BigFoot3ObjFPQ24Game8WaterBox:
/* 802CB858 002C8798  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game7BigFoot3ObjFv
outWaterCallback__Q34Game7BigFoot3ObjFv:
/* 802CB85C 002C879C  4E 80 00 20 */	blr 

.global getDamageCoeStoneState__Q34Game7BigFoot3ObjFv
getDamageCoeStoneState__Q34Game7BigFoot3ObjFv:
/* 802CB860 002C87A0  C0 22 E4 6C */	lfs f1, lbl_8051C7CC@sda21(r2)
/* 802CB864 002C87A4  4E 80 00 20 */	blr 

.global throwupItemInDeathProcedure__Q34Game7BigFoot3ObjFv
throwupItemInDeathProcedure__Q34Game7BigFoot3ObjFv:
/* 802CB868 002C87A8  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game7BigFoot3ObjFv
getEnemyTypeID__Q34Game7BigFoot3ObjFv:
/* 802CB86C 002C87AC  38 60 00 45 */	li r3, 0x45
/* 802CB870 002C87B0  4E 80 00 20 */	blr 

__sinit_BigFoot_cpp: #static initializer
/* 802CB874 002C87B4  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802CB878 002C87B8  38 00 FF FF */	li r0, -1
/* 802CB87C 002C87BC  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802CB880 002C87C0  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802CB884 002C87C4  90 0D 97 30 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802CB888 002C87C8  D4 03 1B C0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802CB88C 002C87CC  D0 0D 97 34 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802CB890 002C87D0  D0 03 00 04 */	stfs f0, 4(r3)
/* 802CB894 002C87D4  D0 03 00 08 */	stfs f0, 8(r3)
/* 802CB898 002C87D8  4E 80 00 20 */	blr 

.global "@1196@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@1196@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 802CB89C 002C87DC  39 60 00 0C */	li r11, 0xc
/* 802CB8A0 002C87E0  7D 63 58 2E */	lwzx r11, r3, r11
/* 802CB8A4 002C87E4  7C 63 5A 14 */	add r3, r3, r11
/* 802CB8A8 002C87E8  38 63 FB 54 */	addi r3, r3, -1196
/* 802CB8AC 002C87EC  4B E3 B0 70 */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@1196@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@1196@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 802CB8B0 002C87F0  39 60 00 0C */	li r11, 0xc
/* 802CB8B4 002C87F4  7D 63 58 2E */	lwzx r11, r3, r11
/* 802CB8B8 002C87F8  7C 63 5A 14 */	add r3, r3, r11
/* 802CB8BC 002C87FC  38 63 FB 54 */	addi r3, r3, -1196
/* 802CB8C0 002C8800  4B E3 AD E8 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@1196@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@1196@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 802CB8C4 002C8804  39 60 00 0C */	li r11, 0xc
/* 802CB8C8 002C8808  7D 63 58 2E */	lwzx r11, r3, r11
/* 802CB8CC 002C880C  7C 63 5A 14 */	add r3, r3, r11
/* 802CB8D0 002C8810  38 63 FB 54 */	addi r3, r3, -1196
/* 802CB8D4 002C8814  4B E3 AD F4 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@1196@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@1196@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 802CB8D8 002C8818  39 60 00 0C */	li r11, 0xc
/* 802CB8DC 002C881C  7D 63 58 2E */	lwzx r11, r3, r11
/* 802CB8E0 002C8820  7C 63 5A 14 */	add r3, r3, r11
/* 802CB8E4 002C8824  38 63 FB 54 */	addi r3, r3, -1196
/* 802CB8E8 002C8828  4B E3 B1 90 */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@1196@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@1196@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 802CB8EC 002C882C  39 60 00 0C */	li r11, 0xc
/* 802CB8F0 002C8830  7D 63 58 2E */	lwzx r11, r3, r11
/* 802CB8F4 002C8834  7C 63 5A 14 */	add r3, r3, r11
/* 802CB8F8 002C8838  38 63 FB 54 */	addi r3, r3, -1196
/* 802CB8FC 002C883C  4B E3 B1 50 */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@1196@12@viewGetShape__Q24Game9EnemyBaseFv"
"@1196@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 802CB900 002C8840  39 60 00 0C */	li r11, 0xc
/* 802CB904 002C8844  7D 63 58 2E */	lwzx r11, r3, r11
/* 802CB908 002C8848  7C 63 5A 14 */	add r3, r3, r11
/* 802CB90C 002C884C  38 63 FB 54 */	addi r3, r3, -1196
/* 802CB910 002C8850  4B E3 AD 90 */	b viewGetShape__Q24Game9EnemyBaseFv

.global "@4@__dt__Q23efx11TOdamaHahenFv"
"@4@__dt__Q23efx11TOdamaHahenFv":
/* 802CB914 002C8854  38 63 FF FC */	addi r3, r3, -4
/* 802CB918 002C8858  4B FF FE A4 */	b __dt__Q23efx11TOdamaHahenFv

.global "@4@__dt__Q23efx16TOdamaDeadHahenAFv"
"@4@__dt__Q23efx16TOdamaDeadHahenAFv":
/* 802CB91C 002C885C  38 63 FF FC */	addi r3, r3, -4
/* 802CB920 002C8860  4B FF FE 00 */	b __dt__Q23efx16TOdamaDeadHahenAFv

.global "@4@__dt__Q23efx16TOdamaDeadHahenBFv"
"@4@__dt__Q23efx16TOdamaDeadHahenBFv":
/* 802CB924 002C8864  38 63 FF FC */	addi r3, r3, -4
/* 802CB928 002C8868  4B FF FD 5C */	b __dt__Q23efx16TOdamaDeadHahenBFv

.global "@4@__dt__Q23efx10TOdamaFur2Fv"
"@4@__dt__Q23efx10TOdamaFur2Fv":
/* 802CB92C 002C886C  38 63 FF FC */	addi r3, r3, -4
/* 802CB930 002C8870  4B FF FC B8 */	b __dt__Q23efx10TOdamaFur2Fv

.global "@4@__dt__Q23efx17TOdamaDeadHahenC1Fv"
"@4@__dt__Q23efx17TOdamaDeadHahenC1Fv":
/* 802CB934 002C8874  38 63 FF FC */	addi r3, r3, -4
/* 802CB938 002C8878  4B FF FC 14 */	b __dt__Q23efx17TOdamaDeadHahenC1Fv

.global "@4@__dt__Q23efx17TOdamaDeadHahenC2Fv"
"@4@__dt__Q23efx17TOdamaDeadHahenC2Fv":
/* 802CB93C 002C887C  38 63 FF FC */	addi r3, r3, -4
/* 802CB940 002C8880  4B FF FB 70 */	b __dt__Q23efx17TOdamaDeadHahenC2Fv

.global "@4@__dt__Q23efx10TOdamaFur1Fv"
"@4@__dt__Q23efx10TOdamaFur1Fv":
/* 802CB944 002C8884  38 63 FF FC */	addi r3, r3, -4
/* 802CB948 002C8888  4B FF FA CC */	b __dt__Q23efx10TOdamaFur1Fv
