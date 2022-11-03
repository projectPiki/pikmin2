.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_Damagumo_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_80489870:
	.asciz "rhand1jnt"
.balign 4
lbl_8048987C:
	.asciz "rhand2jnt"
.balign 4
lbl_80489888:
	.asciz "rhand3jnt"
.balign 4
lbl_80489894:
	.asciz "lhand1jnt"
.balign 4
lbl_804898A0:
	.asciz "lhand2jnt"
.balign 4
lbl_804898AC:
	.asciz "lhand3jnt"
.balign 4
lbl_804898B8:
	.asciz "rfoot1jnt"
.balign 4
lbl_804898C4:
	.asciz "rfoot2jnt"
.balign 4
lbl_804898D0:
	.asciz "rfoot3jnt"
.balign 4
lbl_804898DC:
	.asciz "lfoot1jnt"
.balign 4
lbl_804898E8:
	.asciz "lfoot2jnt"
.balign 4
lbl_804898F4:
	.asciz "lfoot3jnt"
.balign 4
lbl_80489900:
	.4byte lbl_80489870
	.4byte lbl_8048987C
	.4byte lbl_80489888
	.4byte lbl_80489894
	.4byte lbl_804898A0
	.4byte lbl_804898AC
	.4byte lbl_804898B8
	.4byte lbl_804898C4
	.4byte lbl_804898D0
	.4byte lbl_804898DC
	.4byte lbl_804898E8
	.4byte lbl_804898F4
.balign 4
lbl_80489930: # local object
	.ascii "lft1"
	.ascii "lht1"
	.ascii "rft1"
	.ascii "rht1"
.balign 4
lbl_80489940:
	.asciz "PSMainSide_ObjSound.h"
.balign 4
lbl_80489958:
	.asciz "P2Assert"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__Q23efx13TDamaDeadBomb
__vt__Q23efx13TDamaDeadBomb:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.global __vt__Q23efx9TDamaWalk
__vt__Q23efx9TDamaWalk:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.global __vt__Q23efx10TDamaWalkw
__vt__Q23efx10TDamaWalkw:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.global "__vt__Q23efx29TSyncGroup2<Q23efx9TChasePos>"
"__vt__Q23efx29TSyncGroup2<Q23efx9TChasePos>":
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.global __vt__Q23efx10TChasePos2
__vt__Q23efx10TChasePos2:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.global __vt__Q23efx16TDamaDeadHahenC2
__vt__Q23efx16TDamaDeadHahenC2:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx16TDamaDeadHahenC2Fv"
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
	.4byte __dt__Q23efx16TDamaDeadHahenC2Fv
.global __vt__Q23efx16TDamaDeadHahenC1
__vt__Q23efx16TDamaDeadHahenC1:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx16TDamaDeadHahenC1Fv"
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
	.4byte __dt__Q23efx16TDamaDeadHahenC1Fv
.global __vt__Q23efx10TDamaSmoke
__vt__Q23efx10TDamaSmoke:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TDamaSmokeFv"
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
	.4byte __dt__Q23efx10TDamaSmokeFv
.global __vt__Q23efx15TDamaDeadHahenB
__vt__Q23efx15TDamaDeadHahenB:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TDamaDeadHahenBFv"
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
	.4byte __dt__Q23efx15TDamaDeadHahenBFv
.global __vt__Q23efx15TDamaDeadHahenA
__vt__Q23efx15TDamaDeadHahenA:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TDamaDeadHahenAFv"
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
	.4byte __dt__Q23efx15TDamaDeadHahenAFv
.global __vt__Q23efx14TDamaDeadElecB
__vt__Q23efx14TDamaDeadElecB:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TDamaDeadElecBFv"
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
	.4byte __dt__Q23efx14TDamaDeadElecBFv
.global __vt__Q23efx14TDamaDeadElecA
__vt__Q23efx14TDamaDeadElecA:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx14TDamaDeadElecAFv"
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
	.4byte __dt__Q23efx14TDamaDeadElecAFv
.global __vt__Q23efx10TDamaHahen
__vt__Q23efx10TDamaHahen:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TDamaHahenFv"
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
	.4byte __dt__Q23efx10TDamaHahenFv
.global __vt__Q23efx10TDamaFootw
__vt__Q23efx10TDamaFootw:
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TDamaFootwFv"
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
	.4byte __dt__Q23efx10TDamaFootwFv
.global __vt__Q23efx9TDamaFoot
__vt__Q23efx9TDamaFoot:
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.global __vt__Q24Game19JointGroundCallBack
__vt__Q24Game19JointGroundCallBack:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
.global __vt__Q24Game23ConditionNotStickClient
__vt__Q24Game23ConditionNotStickClient:
	.4byte 0
	.4byte 0
	.4byte satisfy__Q24Game23ConditionNotStickClientFPQ24Game4Piki
.global __vt__Q34Game8Damagumo3Obj
__vt__Q34Game8Damagumo3Obj:
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
	.4byte constructor__Q34Game8Damagumo3ObjFv
	.4byte onInit__Q34Game8Damagumo3ObjFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game9EnemyBaseFv
	.4byte doEntry__Q24Game9EnemyBaseFv
	.4byte doSetView__Q24Game9EnemyBaseFi
	.4byte doViewCalc__Q24Game9EnemyBaseFv
	.4byte doSimulation__Q24Game9EnemyBaseFf
	.4byte doDirectDraw__Q34Game8Damagumo3ObjFR8Graphics
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
	.4byte inWaterCallback__Q34Game8Damagumo3ObjFPQ24Game8WaterBox
	.4byte outWaterCallback__Q34Game8Damagumo3ObjFv
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
	.4byte collisionCallback__Q34Game8Damagumo3ObjFRQ24Game9CollEvent
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
	.4byte getShadowParam__Q34Game8Damagumo3ObjFRQ24Game11ShadowParam
	.4byte needShadow__Q34Game8Damagumo3ObjFv
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
	.4byte __dt__Q34Game8Damagumo3ObjFv
	.4byte "birth__Q24Game9EnemyBaseFR10Vector3<f>f"
	.4byte setInitialSetting__Q34Game8Damagumo3ObjFPQ24Game21EnemyInitialParamBase
	.4byte update__Q24Game9EnemyBaseFv
	.4byte doUpdate__Q34Game8Damagumo3ObjFv
	.4byte doUpdateCommon__Q34Game8Damagumo3ObjFv
	.4byte doUpdateCarcass__Q24Game9EnemyBaseFv
	.4byte doAnimationUpdateAnimator__Q24Game9EnemyBaseFv
	.4byte doAnimationCullingOff__Q34Game8Damagumo3ObjFv
	.4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
	.4byte doAnimationStick__Q24Game9EnemyBaseFv
	.4byte doSimulationCarcass__Q24Game9EnemyBaseFf
	.4byte doDebugDraw__Q34Game8Damagumo3ObjFR8Graphics
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
	.4byte getEnemyTypeID__Q34Game8Damagumo3ObjFv
	.4byte getMouthSlots__Q24Game9EnemyBaseFv
	.4byte doGetLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
	.4byte throwupItem__Q24Game9EnemyBaseFv
	.4byte "getThrowupItemPosition__Q34Game8Damagumo3ObjFP10Vector3<f>"
	.4byte "getThrowupItemVelocity__Q34Game8Damagumo3ObjFP10Vector3<f>"
	.4byte throwupItemInDeathProcedure__Q34Game8Damagumo3ObjFv
	.4byte setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
	.4byte damageCallBack__Q34Game8Damagumo3ObjFPQ24Game8CreaturefP8CollPart
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
	.4byte doStartStoneState__Q34Game8Damagumo3ObjFv
	.4byte doFinishStoneState__Q34Game8Damagumo3ObjFv
	.4byte getDamageCoeStoneState__Q34Game8Damagumo3ObjFv
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
	.4byte doStartMovie__Q34Game8Damagumo3ObjFv
	.4byte doEndMovie__Q34Game8Damagumo3ObjFv
	.4byte setFSM__Q34Game8Damagumo3ObjFPQ34Game8Damagumo3FSM
	.4byte 0
	.4byte 0
	.4byte viewGetBaseScale__Q24Game10PelletViewFv
	.4byte "@1176@12@viewGetShape__Q24Game9EnemyBaseFv"
	.4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
	.4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
	.4byte "@1176@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@1176@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
	.4byte "@1176@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@1176@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
	.4byte "@1176@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
	.4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
.global __vt__Q34Game8Damagumo22DamagumoGroundCallBack
__vt__Q34Game8Damagumo22DamagumoGroundCallBack:
	.4byte 0
	.4byte 0
	.4byte invokeOnGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox
	.4byte invokeOffGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051BED0:
	.float 0.0
lbl_8051BED4:
	.float 1.0
lbl_8051BED8:
	.float 0.1
lbl_8051BEDC:
	.float 500.0
lbl_8051BEE0:
	.float 10.0
lbl_8051BEE4:
	.float -1000.0
.balign 4
lbl_8051BEE8:
	.asciz "kosi"
.balign 4
lbl_8051BEF0:
	.float 30.0
lbl_8051BEF4:
	.float 625.0
lbl_8051BEF8:
	.float 32768.0
lbl_8051BEFC: # pi
	.float 3.1415927
lbl_8051BF00: # pi/2
	.float 1.5707964
lbl_8051BF04:
	.float -325.9493
lbl_8051BF08:
	.float 325.9493
.balign 8
lbl_8051BF10:
	.4byte 0x43300000
	.4byte 0x80000000
lbl_8051BF18:
	.float 0.75
lbl_8051BF1C:
	.float 120.0
lbl_8051BF20:
	.float 3.0
lbl_8051BF24:
	.float -0.15
lbl_8051BF28:
	.float 0.5
lbl_8051BF2C:
	.float -2.0
lbl_8051BF30:
	.float 75.0
lbl_8051BF34:
	.float 60.0
lbl_8051BF38:
	.float 0.7
lbl_8051BF3C:
	.float -1.5
lbl_8051BF40:
	.float 0.67
lbl_8051BF44:
	.float 50.0
.balign 4
lbl_8051BF48:
	.asciz "tama1"
.balign 4
lbl_8051BF50:
	.asciz "tama2"
.balign 4
lbl_8051BF58:
	.float 0.175
lbl_8051BF5C:
	.float 0.35
lbl_8051BF60:
	.float 2.0
lbl_8051BF64:
	.float 4.0
lbl_8051BF68:
	.float 0.25

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global invokeOnGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox
invokeOnGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox:
/* 802A57A4 002A26E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A57A8 002A26E8  7C 08 02 A6 */	mflr r0
/* 802A57AC 002A26EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A57B0 002A26F0  80 63 00 04 */	lwz r3, 4(r3)
/* 802A57B4 002A26F4  48 00 1F 3D */	bl createOnGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox
/* 802A57B8 002A26F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A57BC 002A26FC  7C 08 03 A6 */	mtlr r0
/* 802A57C0 002A2700  38 21 00 10 */	addi r1, r1, 0x10
/* 802A57C4 002A2704  4E 80 00 20 */	blr 

.global invokeOffGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox
invokeOffGround__Q34Game8Damagumo22DamagumoGroundCallBackFiPQ24Game8WaterBox:
/* 802A57C8 002A2708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A57CC 002A270C  7C 08 02 A6 */	mflr r0
/* 802A57D0 002A2710  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A57D4 002A2714  80 63 00 04 */	lwz r3, 4(r3)
/* 802A57D8 002A2718  48 00 21 09 */	bl createOffGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox
/* 802A57DC 002A271C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A57E0 002A2720  7C 08 03 A6 */	mtlr r0
/* 802A57E4 002A2724  38 21 00 10 */	addi r1, r1, 0x10
/* 802A57E8 002A2728  4E 80 00 20 */	blr 

.global __ct__Q34Game8Damagumo3ObjFv
__ct__Q34Game8Damagumo3ObjFv:
/* 802A57EC 002A272C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A57F0 002A2730  7C 08 02 A6 */	mflr r0
/* 802A57F4 002A2734  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A57F8 002A2738  7C 80 07 35 */	extsh. r0, r4
/* 802A57FC 002A273C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5800 002A2740  7C 7F 1B 78 */	mr r31, r3
/* 802A5804 002A2744  93 C1 00 08 */	stw r30, 8(r1)
/* 802A5808 002A2748  41 82 00 24 */	beq .L_802A582C
/* 802A580C 002A274C  38 1F 04 98 */	addi r0, r31, 0x498
/* 802A5810 002A2750  3C 60 80 4B */	lis r3, __vt__Q24Game10PelletView@ha
/* 802A5814 002A2754  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 802A5818 002A2758  38 63 A6 78 */	addi r3, r3, __vt__Q24Game10PelletView@l
/* 802A581C 002A275C  38 00 00 00 */	li r0, 0
/* 802A5820 002A2760  90 7F 04 98 */	stw r3, 0x498(r31)
/* 802A5824 002A2764  90 1F 04 9C */	stw r0, 0x49c(r31)
/* 802A5828 002A2768  90 1F 04 A0 */	stw r0, 0x4a0(r31)
.L_802A582C:
/* 802A582C 002A276C  7F E3 FB 78 */	mr r3, r31
/* 802A5830 002A2770  38 80 00 00 */	li r4, 0
/* 802A5834 002A2774  4B E5 BB 6D */	bl __ct__Q24Game9EnemyBaseFv
/* 802A5838 002A2778  3C 80 80 4D */	lis r4, __vt__Q34Game8Damagumo3Obj@ha
/* 802A583C 002A277C  38 1F 04 98 */	addi r0, r31, 0x498
/* 802A5840 002A2780  38 C4 DB 7C */	addi r6, r4, __vt__Q34Game8Damagumo3Obj@l
/* 802A5844 002A2784  3C 60 80 12 */	lis r3, "__ct__10Vector3<f>Fv"@ha
/* 802A5848 002A2788  90 DF 00 00 */	stw r6, 0(r31)
/* 802A584C 002A278C  38 A6 01 B0 */	addi r5, r6, 0x1b0
/* 802A5850 002A2790  39 26 02 FC */	addi r9, r6, 0x2fc
/* 802A5854 002A2794  38 83 F3 48 */	addi r4, r3, "__ct__10Vector3<f>Fv"@l
/* 802A5858 002A2798  90 BF 01 78 */	stw r5, 0x178(r31)
/* 802A585C 002A279C  38 7F 02 F0 */	addi r3, r31, 0x2f0
/* 802A5860 002A27A0  38 A0 00 00 */	li r5, 0
/* 802A5864 002A27A4  38 C0 00 0C */	li r6, 0xc
/* 802A5868 002A27A8  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 802A586C 002A27AC  38 E0 00 10 */	li r7, 0x10
/* 802A5870 002A27B0  91 28 00 00 */	stw r9, 0(r8)
/* 802A5874 002A27B4  81 1F 01 7C */	lwz r8, 0x17c(r31)
/* 802A5878 002A27B8  7C 08 00 50 */	subf r0, r8, r0
/* 802A587C 002A27BC  90 08 00 0C */	stw r0, 0xc(r8)
/* 802A5880 002A27C0  4B E1 BF BD */	bl __construct_array
/* 802A5884 002A27C4  38 60 00 2C */	li r3, 0x2c
/* 802A5888 002A27C8  4B D7 E6 1D */	bl __nw__FUl
/* 802A588C 002A27CC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A5890 002A27D0  41 82 00 44 */	beq .L_802A58D4
/* 802A5894 002A27D4  4B E8 20 E1 */	bl __ct__Q24Game17EnemyAnimatorBaseFv
/* 802A5898 002A27D8  3C 60 80 4D */	lis r3, __vt__Q34Game8Damagumo14ProperAnimator@ha
/* 802A589C 002A27DC  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 802A58A0 002A27E0  38 03 D7 00 */	addi r0, r3, __vt__Q34Game8Damagumo14ProperAnimator@l
/* 802A58A4 002A27E4  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 802A58A8 002A27E8  90 1E 00 00 */	stw r0, 0(r30)
/* 802A58AC 002A27EC  38 84 B9 88 */	addi r4, r4, __vt__Q28SysShape12BaseAnimator@l
/* 802A58B0 002A27F0  38 63 BE 00 */	addi r3, r3, __vt__Q28SysShape8Animator@l
/* 802A58B4 002A27F4  38 00 00 00 */	li r0, 0
/* 802A58B8 002A27F8  90 9E 00 10 */	stw r4, 0x10(r30)
/* 802A58BC 002A27FC  90 7E 00 10 */	stw r3, 0x10(r30)
/* 802A58C0 002A2800  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802A58C4 002A2804  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 802A58C8 002A2808  90 1E 00 14 */	stw r0, 0x14(r30)
/* 802A58CC 002A280C  98 1E 00 28 */	stb r0, 0x28(r30)
/* 802A58D0 002A2810  90 1E 00 20 */	stw r0, 0x20(r30)
.L_802A58D4:
/* 802A58D4 002A2814  93 DF 01 84 */	stw r30, 0x184(r31)
/* 802A58D8 002A2818  38 60 00 1C */	li r3, 0x1c
/* 802A58DC 002A281C  4B D7 E5 C9 */	bl __nw__FUl
/* 802A58E0 002A2820  7C 64 1B 79 */	or. r4, r3, r3
/* 802A58E4 002A2824  41 82 00 24 */	beq .L_802A5908
/* 802A58E8 002A2828  3C A0 80 4B */	lis r5, __vt__Q24Game17EnemyStateMachine@ha
/* 802A58EC 002A282C  3C 60 80 4D */	lis r3, __vt__Q34Game8Damagumo3FSM@ha
/* 802A58F0 002A2830  38 05 F9 80 */	addi r0, r5, __vt__Q24Game17EnemyStateMachine@l
/* 802A58F4 002A2834  38 A0 FF FF */	li r5, -1
/* 802A58F8 002A2838  90 04 00 00 */	stw r0, 0(r4)
/* 802A58FC 002A283C  38 03 D6 D8 */	addi r0, r3, __vt__Q34Game8Damagumo3FSM@l
/* 802A5900 002A2840  90 A4 00 18 */	stw r5, 0x18(r4)
/* 802A5904 002A2844  90 04 00 00 */	stw r0, 0(r4)
.L_802A5908:
/* 802A5908 002A2848  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A590C 002A284C  7F E3 FB 78 */	mr r3, r31
/* 802A5910 002A2850  81 8C 02 F8 */	lwz r12, 0x2f8(r12)
/* 802A5914 002A2854  7D 89 03 A6 */	mtctr r12
/* 802A5918 002A2858  4E 80 04 21 */	bctrl 
/* 802A591C 002A285C  7F E3 FB 78 */	mr r3, r31
/* 802A5920 002A2860  48 00 09 E1 */	bl createIKSystem__Q34Game8Damagumo3ObjFv
/* 802A5924 002A2864  7F E3 FB 78 */	mr r3, r31
/* 802A5928 002A2868  48 00 0E DD */	bl createShadowSystem__Q34Game8Damagumo3ObjFv
/* 802A592C 002A286C  7F E3 FB 78 */	mr r3, r31
/* 802A5930 002A2870  48 00 15 FD */	bl createEffect__Q34Game8Damagumo3ObjFv
/* 802A5934 002A2874  7F E3 FB 78 */	mr r3, r31
/* 802A5938 002A2878  48 00 0F AD */	bl createMaterialAnimation__Q34Game8Damagumo3ObjFv
/* 802A593C 002A287C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5940 002A2880  7F E3 FB 78 */	mr r3, r31
/* 802A5944 002A2884  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5948 002A2888  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A594C 002A288C  7C 08 03 A6 */	mtlr r0
/* 802A5950 002A2890  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5954 002A2894  4E 80 00 20 */	blr 

.global constructor__Q34Game8Damagumo3ObjFv
constructor__Q34Game8Damagumo3ObjFv:
/* 802A5958 002A2898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A595C 002A289C  7C 08 02 A6 */	mflr r0
/* 802A5960 002A28A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5964 002A28A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5968 002A28A8  7C 7F 1B 78 */	mr r31, r3
/* 802A596C 002A28AC  4B E5 BE 1D */	bl constructor__Q24Game9EnemyBaseFv
/* 802A5970 002A28B0  7F E3 FB 78 */	mr r3, r31
/* 802A5974 002A28B4  48 00 14 39 */	bl resetBossAppearBGM__Q34Game8Damagumo3ObjFv
/* 802A5978 002A28B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A597C 002A28BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5980 002A28C0  7C 08 03 A6 */	mtlr r0
/* 802A5984 002A28C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5988 002A28C8  4E 80 00 20 */	blr 

.global setInitialSetting__Q34Game8Damagumo3ObjFPQ24Game21EnemyInitialParamBase
setInitialSetting__Q34Game8Damagumo3ObjFPQ24Game21EnemyInitialParamBase:
/* 802A598C 002A28CC  4E 80 00 20 */	blr 

.global onInit__Q34Game8Damagumo3ObjFPQ24Game15CreatureInitArg
onInit__Q34Game8Damagumo3ObjFPQ24Game15CreatureInitArg:
/* 802A5990 002A28D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5994 002A28D4  7C 08 02 A6 */	mflr r0
/* 802A5998 002A28D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A599C 002A28DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A59A0 002A28E0  7C 7F 1B 78 */	mr r31, r3
/* 802A59A4 002A28E4  4B E5 C0 B5 */	bl onInit__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
/* 802A59A8 002A28E8  7F E3 FB 78 */	mr r3, r31
/* 802A59AC 002A28EC  4B E6 1D D1 */	bl hardConstraintOn__Q24Game9EnemyBaseFv
/* 802A59B0 002A28F0  80 7F 01 E0 */	lwz r3, 0x1e0(r31)
/* 802A59B4 002A28F4  38 80 FF FF */	li r4, -1
/* 802A59B8 002A28F8  C0 22 DB 70 */	lfs f1, lbl_8051BED0@sda21(r2)
/* 802A59BC 002A28FC  38 00 00 00 */	li r0, 0
/* 802A59C0 002A2900  54 65 05 24 */	rlwinm r5, r3, 0, 0x14, 0x12
/* 802A59C4 002A2904  7F E3 FB 78 */	mr r3, r31
/* 802A59C8 002A2908  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802A59CC 002A290C  80 BF 01 E0 */	lwz r5, 0x1e0(r31)
/* 802A59D0 002A2910  54 A5 06 6E */	rlwinm r5, r5, 0, 0x19, 0x17
/* 802A59D4 002A2914  90 BF 01 E0 */	stw r5, 0x1e0(r31)
/* 802A59D8 002A2918  D0 3F 02 C0 */	stfs f1, 0x2c0(r31)
/* 802A59DC 002A291C  D0 3F 02 C4 */	stfs f1, 0x2c4(r31)
/* 802A59E0 002A2920  90 9F 02 C8 */	stw r4, 0x2c8(r31)
/* 802A59E4 002A2924  C0 1F 01 98 */	lfs f0, 0x198(r31)
/* 802A59E8 002A2928  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802A59EC 002A292C  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802A59F0 002A2930  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802A59F4 002A2934  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802A59F8 002A2938  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802A59FC 002A293C  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 802A5A00 002A2940  98 1F 02 DC */	stb r0, 0x2dc(r31)
/* 802A5A04 002A2944  98 1F 02 DD */	stb r0, 0x2dd(r31)
/* 802A5A08 002A2948  48 00 0A 05 */	bl setupIKSystem__Q34Game8Damagumo3ObjFv
/* 802A5A0C 002A294C  7F E3 FB 78 */	mr r3, r31
/* 802A5A10 002A2950  48 00 0E 3D */	bl setupShadowSystem__Q34Game8Damagumo3ObjFv
/* 802A5A14 002A2954  7F E3 FB 78 */	mr r3, r31
/* 802A5A18 002A2958  48 00 10 B5 */	bl setupCollision__Q34Game8Damagumo3ObjFv
/* 802A5A1C 002A295C  7F E3 FB 78 */	mr r3, r31
/* 802A5A20 002A2960  48 00 1B 4D */	bl setupEffect__Q34Game8Damagumo3ObjFv
/* 802A5A24 002A2964  7F E3 FB 78 */	mr r3, r31
/* 802A5A28 002A2968  48 00 13 85 */	bl resetBossAppearBGM__Q34Game8Damagumo3ObjFv
/* 802A5A2C 002A296C  80 6D 96 80 */	lwz r3, shadowMgr__4Game@sda21(r13)
/* 802A5A30 002A2970  7F E4 FB 78 */	mr r4, r31
/* 802A5A34 002A2974  4B F9 C2 BD */	bl delShadow__Q24Game9ShadowMgrFPQ24Game8Creature
/* 802A5A38 002A2978  7F E3 FB 78 */	mr r3, r31
/* 802A5A3C 002A297C  48 00 0E F5 */	bl startMaterialAnimation__Q34Game8Damagumo3ObjFv
/* 802A5A40 002A2980  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802A5A44 002A2984  7F E4 FB 78 */	mr r4, r31
/* 802A5A48 002A2988  38 A0 00 01 */	li r5, 1
/* 802A5A4C 002A298C  38 C0 00 00 */	li r6, 0
/* 802A5A50 002A2990  81 83 00 00 */	lwz r12, 0(r3)
/* 802A5A54 002A2994  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802A5A58 002A2998  7D 89 03 A6 */	mtctr r12
/* 802A5A5C 002A299C  4E 80 04 21 */	bctrl 
/* 802A5A60 002A29A0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 802A5A64 002A29A4  28 03 00 00 */	cmplwi r3, 0
/* 802A5A68 002A29A8  41 82 00 34 */	beq .L_802A5A9C
/* 802A5A6C 002A29AC  80 03 00 44 */	lwz r0, 0x44(r3)
/* 802A5A70 002A29B0  2C 00 00 04 */	cmpwi r0, 4
/* 802A5A74 002A29B4  40 82 00 28 */	bne .L_802A5A9C
/* 802A5A78 002A29B8  80 7F 02 BC */	lwz r3, 0x2bc(r31)
/* 802A5A7C 002A29BC  7F E4 FB 78 */	mr r4, r31
/* 802A5A80 002A29C0  38 A0 00 02 */	li r5, 2
/* 802A5A84 002A29C4  38 C0 00 00 */	li r6, 0
/* 802A5A88 002A29C8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A5A8C 002A29CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A5A90 002A29D0  7D 89 03 A6 */	mtctr r12
/* 802A5A94 002A29D4  4E 80 04 21 */	bctrl 
/* 802A5A98 002A29D8  48 00 00 18 */	b .L_802A5AB0
.L_802A5A9C:
/* 802A5A9C 002A29DC  7F E3 FB 78 */	mr r3, r31
/* 802A5AA0 002A29E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5AA4 002A29E4  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 802A5AA8 002A29E8  7D 89 03 A6 */	mtctr r12
/* 802A5AAC 002A29EC  4E 80 04 21 */	bctrl 
.L_802A5AB0:
/* 802A5AB0 002A29F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5AB4 002A29F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5AB8 002A29F8  7C 08 03 A6 */	mtlr r0
/* 802A5ABC 002A29FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5AC0 002A2A00  4E 80 00 20 */	blr 

.global doUpdate__Q34Game8Damagumo3ObjFv
doUpdate__Q34Game8Damagumo3ObjFv:
/* 802A5AC4 002A2A04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5AC8 002A2A08  7C 08 02 A6 */	mflr r0
/* 802A5ACC 002A2A0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5AD0 002A2A10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5AD4 002A2A14  7C 7F 1B 78 */	mr r31, r3
/* 802A5AD8 002A2A18  7F E4 FB 78 */	mr r4, r31
/* 802A5ADC 002A2A1C  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802A5AE0 002A2A20  81 83 00 00 */	lwz r12, 0(r3)
/* 802A5AE4 002A2A24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A5AE8 002A2A28  7D 89 03 A6 */	mtctr r12
/* 802A5AEC 002A2A2C  4E 80 04 21 */	bctrl 
/* 802A5AF0 002A2A30  7F E3 FB 78 */	mr r3, r31
/* 802A5AF4 002A2A34  48 00 22 CD */	bl updatePinchLife__Q34Game8Damagumo3ObjFv
/* 802A5AF8 002A2A38  7F E3 FB 78 */	mr r3, r31
/* 802A5AFC 002A2A3C  48 00 0A E5 */	bl updateIKSystem__Q34Game8Damagumo3ObjFv
/* 802A5B00 002A2A40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5B04 002A2A44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5B08 002A2A48  7C 08 03 A6 */	mtlr r0
/* 802A5B0C 002A2A4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5B10 002A2A50  4E 80 00 20 */	blr 

.global doUpdateCommon__Q34Game8Damagumo3ObjFv
doUpdateCommon__Q34Game8Damagumo3ObjFv:
/* 802A5B14 002A2A54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5B18 002A2A58  7C 08 02 A6 */	mflr r0
/* 802A5B1C 002A2A5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5B20 002A2A60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5B24 002A2A64  7C 7F 1B 78 */	mr r31, r3
/* 802A5B28 002A2A68  4B E5 D3 ED */	bl doUpdateCommon__Q24Game9EnemyBaseFv
/* 802A5B2C 002A2A6C  7F E3 FB 78 */	mr r3, r31
/* 802A5B30 002A2A70  48 00 11 81 */	bl updateBossBGM__Q34Game8Damagumo3ObjFv
/* 802A5B34 002A2A74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5B38 002A2A78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5B3C 002A2A7C  7C 08 03 A6 */	mtlr r0
/* 802A5B40 002A2A80  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5B44 002A2A84  4E 80 00 20 */	blr 

.global doAnimationCullingOff__Q34Game8Damagumo3ObjFv
doAnimationCullingOff__Q34Game8Damagumo3ObjFv:
/* 802A5B48 002A2A88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5B4C 002A2A8C  7C 08 02 A6 */	mflr r0
/* 802A5B50 002A2A90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5B54 002A2A94  38 00 00 00 */	li r0, 0
/* 802A5B58 002A2A98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5B5C 002A2A9C  7C 7F 1B 78 */	mr r31, r3
/* 802A5B60 002A2AA0  80 83 01 88 */	lwz r4, 0x188(r3)
/* 802A5B64 002A2AA4  98 04 00 24 */	stb r0, 0x24(r4)
/* 802A5B68 002A2AA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A5B6C 002A2AAC  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 802A5B70 002A2AB0  7D 89 03 A6 */	mtctr r12
/* 802A5B74 002A2AB4  4E 80 04 21 */	bctrl 
/* 802A5B78 002A2AB8  7F E3 FB 78 */	mr r3, r31
/* 802A5B7C 002A2ABC  48 00 0A C5 */	bl doAnimationIKSystem__Q34Game8Damagumo3ObjFv
/* 802A5B80 002A2AC0  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802A5B84 002A2AC4  38 7F 01 38 */	addi r3, r31, 0x138
/* 802A5B88 002A2AC8  80 84 00 08 */	lwz r4, 8(r4)
/* 802A5B8C 002A2ACC  38 84 00 24 */	addi r4, r4, 0x24
/* 802A5B90 002A2AD0  4B E4 47 3D */	bl PSMTXCopy
/* 802A5B94 002A2AD4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 802A5B98 002A2AD8  80 63 00 08 */	lwz r3, 8(r3)
/* 802A5B9C 002A2ADC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A5BA0 002A2AE0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A5BA4 002A2AE4  7D 89 03 A6 */	mtctr r12
/* 802A5BA8 002A2AE8  4E 80 04 21 */	bctrl 
/* 802A5BAC 002A2AEC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 802A5BB0 002A2AF0  4B E8 FE ED */	bl update__8CollTreeFv
/* 802A5BB4 002A2AF4  7F E3 FB 78 */	mr r3, r31
/* 802A5BB8 002A2AF8  48 00 0D 09 */	bl doAnimationShadowSystem__Q34Game8Damagumo3ObjFv
/* 802A5BBC 002A2AFC  7F E3 FB 78 */	mr r3, r31
/* 802A5BC0 002A2B00  48 00 0D D1 */	bl updateMaterialAnimation__Q34Game8Damagumo3ObjFv
/* 802A5BC4 002A2B04  7F E3 FB 78 */	mr r3, r31
/* 802A5BC8 002A2B08  48 00 0A D9 */	bl finishAnimationIKSystem__Q34Game8Damagumo3ObjFv
/* 802A5BCC 002A2B0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5BD0 002A2B10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5BD4 002A2B14  7C 08 03 A6 */	mtlr r0
/* 802A5BD8 002A2B18  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5BDC 002A2B1C  4E 80 00 20 */	blr 

.global doDirectDraw__Q34Game8Damagumo3ObjFR8Graphics
doDirectDraw__Q34Game8Damagumo3ObjFR8Graphics:
/* 802A5BE0 002A2B20  4E 80 00 20 */	blr 

.global doDebugDraw__Q34Game8Damagumo3ObjFR8Graphics
doDebugDraw__Q34Game8Damagumo3ObjFR8Graphics:
/* 802A5BE4 002A2B24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5BE8 002A2B28  7C 08 02 A6 */	mflr r0
/* 802A5BEC 002A2B2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5BF0 002A2B30  4B E6 02 7D */	bl doDebugDraw__Q24Game9EnemyBaseFR8Graphics
/* 802A5BF4 002A2B34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5BF8 002A2B38  7C 08 03 A6 */	mtlr r0
/* 802A5BFC 002A2B3C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5C00 002A2B40  4E 80 00 20 */	blr 

.global setFSM__Q34Game8Damagumo3ObjFPQ34Game8Damagumo3FSM
setFSM__Q34Game8Damagumo3ObjFPQ34Game8Damagumo3FSM:
/* 802A5C04 002A2B44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5C08 002A2B48  7C 08 02 A6 */	mflr r0
/* 802A5C0C 002A2B4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5C10 002A2B50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5C14 002A2B54  7C 7F 1B 78 */	mr r31, r3
/* 802A5C18 002A2B58  90 83 02 BC */	stw r4, 0x2bc(r3)
/* 802A5C1C 002A2B5C  7F E4 FB 78 */	mr r4, r31
/* 802A5C20 002A2B60  80 63 02 BC */	lwz r3, 0x2bc(r3)
/* 802A5C24 002A2B64  81 83 00 00 */	lwz r12, 0(r3)
/* 802A5C28 002A2B68  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A5C2C 002A2B6C  7D 89 03 A6 */	mtctr r12
/* 802A5C30 002A2B70  4E 80 04 21 */	bctrl 
/* 802A5C34 002A2B74  38 00 00 00 */	li r0, 0
/* 802A5C38 002A2B78  90 1F 02 B4 */	stw r0, 0x2b4(r31)
/* 802A5C3C 002A2B7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5C40 002A2B80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5C44 002A2B84  7C 08 03 A6 */	mtlr r0
/* 802A5C48 002A2B88  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5C4C 002A2B8C  4E 80 00 20 */	blr 

.global getShadowParam__Q34Game8Damagumo3ObjFRQ24Game11ShadowParam
getShadowParam__Q34Game8Damagumo3ObjFRQ24Game11ShadowParam:
/* 802A5C50 002A2B90  C0 03 01 8C */	lfs f0, 0x18c(r3)
/* 802A5C54 002A2B94  C0 42 DB 70 */	lfs f2, lbl_8051BED0@sda21(r2)
/* 802A5C58 002A2B98  D0 04 00 00 */	stfs f0, 0(r4)
/* 802A5C5C 002A2B9C  C0 22 DB 74 */	lfs f1, lbl_8051BED4@sda21(r2)
/* 802A5C60 002A2BA0  C0 63 01 90 */	lfs f3, 0x190(r3)
/* 802A5C64 002A2BA4  C0 02 DB 78 */	lfs f0, lbl_8051BED8@sda21(r2)
/* 802A5C68 002A2BA8  D0 64 00 04 */	stfs f3, 4(r4)
/* 802A5C6C 002A2BAC  C0 63 01 94 */	lfs f3, 0x194(r3)
/* 802A5C70 002A2BB0  D0 64 00 08 */	stfs f3, 8(r4)
/* 802A5C74 002A2BB4  D0 44 00 0C */	stfs f2, 0xc(r4)
/* 802A5C78 002A2BB8  D0 24 00 10 */	stfs f1, 0x10(r4)
/* 802A5C7C 002A2BBC  D0 44 00 14 */	stfs f2, 0x14(r4)
/* 802A5C80 002A2BC0  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 802A5C84 002A2BC4  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 802A5C88 002A2BC8  4E 80 00 20 */	blr 

.global needShadow__Q34Game8Damagumo3ObjFv
needShadow__Q34Game8Damagumo3ObjFv:
/* 802A5C8C 002A2BCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5C90 002A2BD0  7C 08 02 A6 */	mflr r0
/* 802A5C94 002A2BD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5C98 002A2BD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5C9C 002A2BDC  7C 7F 1B 78 */	mr r31, r3
/* 802A5CA0 002A2BE0  4B E6 17 71 */	bl needShadow__Q24Game9EnemyBaseFv
/* 802A5CA4 002A2BE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5CA8 002A2BE8  41 82 00 0C */	beq .L_802A5CB4
/* 802A5CAC 002A2BEC  38 60 00 01 */	li r3, 1
/* 802A5CB0 002A2BF0  48 00 00 18 */	b .L_802A5CC8
.L_802A5CB4:
/* 802A5CB4 002A2BF4  7F E3 FB 78 */	mr r3, r31
/* 802A5CB8 002A2BF8  4B E6 17 3D */	bl getStateID__Q24Game9EnemyBaseFv
/* 802A5CBC 002A2BFC  20 03 00 02 */	subfic r0, r3, 2
/* 802A5CC0 002A2C00  7C 00 00 34 */	cntlzw r0, r0
/* 802A5CC4 002A2C04  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
.L_802A5CC8:
/* 802A5CC8 002A2C08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5CCC 002A2C0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5CD0 002A2C10  7C 08 03 A6 */	mtlr r0
/* 802A5CD4 002A2C14  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5CD8 002A2C18  4E 80 00 20 */	blr 

.global damageCallBack__Q34Game8Damagumo3ObjFPQ24Game8CreaturefP8CollPart
damageCallBack__Q34Game8Damagumo3ObjFPQ24Game8CreaturefP8CollPart:
/* 802A5CDC 002A2C1C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A5CE0 002A2C20  7C 08 02 A6 */	mflr r0
/* 802A5CE4 002A2C24  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A5CE8 002A2C28  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802A5CEC 002A2C2C  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802A5CF0 002A2C30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5CF4 002A2C34  93 C1 00 08 */	stw r30, 8(r1)
/* 802A5CF8 002A2C38  7C 9F 23 79 */	or. r31, r4, r4
/* 802A5CFC 002A2C3C  FF E0 08 90 */	fmr f31, f1
/* 802A5D00 002A2C40  7C 7E 1B 78 */	mr r30, r3
/* 802A5D04 002A2C44  41 82 00 50 */	beq .L_802A5D54
/* 802A5D08 002A2C48  28 05 00 00 */	cmplwi r5, 0
/* 802A5D0C 002A2C4C  41 82 00 48 */	beq .L_802A5D54
/* 802A5D10 002A2C50  7F E3 FB 78 */	mr r3, r31
/* 802A5D14 002A2C54  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5D18 002A2C58  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A5D1C 002A2C5C  7D 89 03 A6 */	mtctr r12
/* 802A5D20 002A2C60  4E 80 04 21 */	bctrl 
/* 802A5D24 002A2C64  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5D28 002A2C68  41 82 00 2C */	beq .L_802A5D54
/* 802A5D2C 002A2C6C  7F E3 FB 78 */	mr r3, r31
/* 802A5D30 002A2C70  4B EF 98 45 */	bl isStickTo__Q24Game8CreatureFv
/* 802A5D34 002A2C74  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5D38 002A2C78  41 82 00 1C */	beq .L_802A5D54
/* 802A5D3C 002A2C7C  FC 20 F8 90 */	fmr f1, f31
/* 802A5D40 002A2C80  C0 42 DB 74 */	lfs f2, lbl_8051BED4@sda21(r2)
/* 802A5D44 002A2C84  7F C3 F3 78 */	mr r3, r30
/* 802A5D48 002A2C88  4B E6 02 E5 */	bl addDamage__Q24Game9EnemyBaseFff
/* 802A5D4C 002A2C8C  38 60 00 01 */	li r3, 1
/* 802A5D50 002A2C90  48 00 00 08 */	b .L_802A5D58
.L_802A5D54:
/* 802A5D54 002A2C94  38 60 00 00 */	li r3, 0
.L_802A5D58:
/* 802A5D58 002A2C98  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802A5D5C 002A2C9C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A5D60 002A2CA0  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802A5D64 002A2CA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5D68 002A2CA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A5D6C 002A2CAC  7C 08 03 A6 */	mtlr r0
/* 802A5D70 002A2CB0  38 21 00 20 */	addi r1, r1, 0x20
/* 802A5D74 002A2CB4  4E 80 00 20 */	blr 

.global collisionCallback__Q34Game8Damagumo3ObjFRQ24Game9CollEvent
collisionCallback__Q34Game8Damagumo3ObjFRQ24Game9CollEvent:
/* 802A5D78 002A2CB8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802A5D7C 002A2CBC  7C 08 02 A6 */	mflr r0
/* 802A5D80 002A2CC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A5D84 002A2CC4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802A5D88 002A2CC8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802A5D8C 002A2CCC  7C 9E 23 78 */	mr r30, r4
/* 802A5D90 002A2CD0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 802A5D94 002A2CD4  7C 7D 1B 78 */	mr r29, r3
/* 802A5D98 002A2CD8  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802A5D9C 002A2CDC  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802A5DA0 002A2CE0  40 82 01 50 */	bne .L_802A5EF0
/* 802A5DA4 002A2CE4  83 FE 00 00 */	lwz r31, 0(r30)
/* 802A5DA8 002A2CE8  28 1F 00 00 */	cmplwi r31, 0
/* 802A5DAC 002A2CEC  41 82 01 44 */	beq .L_802A5EF0
/* 802A5DB0 002A2CF0  80 1E 00 04 */	lwz r0, 4(r30)
/* 802A5DB4 002A2CF4  28 00 00 00 */	cmplwi r0, 0
/* 802A5DB8 002A2CF8  41 82 01 38 */	beq .L_802A5EF0
/* 802A5DBC 002A2CFC  7F E3 FB 78 */	mr r3, r31
/* 802A5DC0 002A2D00  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5DC4 002A2D04  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A5DC8 002A2D08  7D 89 03 A6 */	mtctr r12
/* 802A5DCC 002A2D0C  4E 80 04 21 */	bctrl 
/* 802A5DD0 002A2D10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5DD4 002A2D14  41 82 01 1C */	beq .L_802A5EF0
/* 802A5DD8 002A2D18  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 802A5DDC 002A2D1C  28 00 00 00 */	cmplwi r0, 0
/* 802A5DE0 002A2D20  41 82 01 10 */	beq .L_802A5EF0
/* 802A5DE4 002A2D24  7F E3 FB 78 */	mr r3, r31
/* 802A5DE8 002A2D28  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5DEC 002A2D2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A5DF0 002A2D30  7D 89 03 A6 */	mtctr r12
/* 802A5DF4 002A2D34  4E 80 04 21 */	bctrl 
/* 802A5DF8 002A2D38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5DFC 002A2D3C  40 82 00 20 */	bne .L_802A5E1C
/* 802A5E00 002A2D40  7F E3 FB 78 */	mr r3, r31
/* 802A5E04 002A2D44  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5E08 002A2D48  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A5E0C 002A2D4C  7D 89 03 A6 */	mtctr r12
/* 802A5E10 002A2D50  4E 80 04 21 */	bctrl 
/* 802A5E14 002A2D54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5E18 002A2D58  41 82 00 64 */	beq .L_802A5E7C
.L_802A5E1C:
/* 802A5E1C 002A2D5C  80 9E 00 08 */	lwz r4, 8(r30)
/* 802A5E20 002A2D60  7F A3 EB 78 */	mr r3, r29
/* 802A5E24 002A2D64  48 00 09 BD */	bl isCollisionCheck__Q34Game8Damagumo3ObjFP8CollPart
/* 802A5E28 002A2D68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5E2C 002A2D6C  41 82 00 C4 */	beq .L_802A5EF0
/* 802A5E30 002A2D70  80 BD 00 C0 */	lwz r5, 0xc0(r29)
/* 802A5E34 002A2D74  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 802A5E38 002A2D78  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractPress@ha
/* 802A5E3C 002A2D7C  38 00 00 00 */	li r0, 0
/* 802A5E40 002A2D80  C0 05 06 04 */	lfs f0, 0x604(r5)
/* 802A5E44 002A2D84  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 802A5E48 002A2D88  38 A3 B3 20 */	addi r5, r3, __vt__Q24Game13InteractPress@l
/* 802A5E4C 002A2D8C  7F E3 FB 78 */	mr r3, r31
/* 802A5E50 002A2D90  90 81 00 18 */	stw r4, 0x18(r1)
/* 802A5E54 002A2D94  38 81 00 18 */	addi r4, r1, 0x18
/* 802A5E58 002A2D98  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 802A5E5C 002A2D9C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 802A5E60 002A2DA0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802A5E64 002A2DA4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A5E68 002A2DA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5E6C 002A2DAC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802A5E70 002A2DB0  7D 89 03 A6 */	mtctr r12
/* 802A5E74 002A2DB4  4E 80 04 21 */	bctrl 
/* 802A5E78 002A2DB8  48 00 00 78 */	b .L_802A5EF0
.L_802A5E7C:
/* 802A5E7C 002A2DBC  7F E3 FB 78 */	mr r3, r31
/* 802A5E80 002A2DC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5E84 002A2DC4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 802A5E88 002A2DC8  7D 89 03 A6 */	mtctr r12
/* 802A5E8C 002A2DCC  4E 80 04 21 */	bctrl 
/* 802A5E90 002A2DD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5E94 002A2DD4  41 82 00 5C */	beq .L_802A5EF0
/* 802A5E98 002A2DD8  80 9E 00 08 */	lwz r4, 8(r30)
/* 802A5E9C 002A2DDC  7F A3 EB 78 */	mr r3, r29
/* 802A5EA0 002A2DE0  48 00 09 41 */	bl isCollisionCheck__Q34Game8Damagumo3ObjFP8CollPart
/* 802A5EA4 002A2DE4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A5EA8 002A2DE8  41 82 00 48 */	beq .L_802A5EF0
/* 802A5EAC 002A2DEC  80 BE 00 04 */	lwz r5, 4(r30)
/* 802A5EB0 002A2DF0  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802A5EB4 002A2DF4  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802A5EB8 002A2DF8  C0 02 DB 7C */	lfs f0, lbl_8051BEDC@sda21(r2)
/* 802A5EBC 002A2DFC  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 802A5EC0 002A2E00  90 01 00 08 */	stw r0, 8(r1)
/* 802A5EC4 002A2E04  38 03 4D E0 */	addi r0, r3, __vt__Q24Game14InteractAttack@l
/* 802A5EC8 002A2E08  7F E3 FB 78 */	mr r3, r31
/* 802A5ECC 002A2E0C  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802A5ED0 002A2E10  38 81 00 08 */	addi r4, r1, 8
/* 802A5ED4 002A2E14  90 01 00 08 */	stw r0, 8(r1)
/* 802A5ED8 002A2E18  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802A5EDC 002A2E1C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802A5EE0 002A2E20  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A5EE4 002A2E24  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802A5EE8 002A2E28  7D 89 03 A6 */	mtctr r12
/* 802A5EEC 002A2E2C  4E 80 04 21 */	bctrl 
.L_802A5EF0:
/* 802A5EF0 002A2E30  7F A3 EB 78 */	mr r3, r29
/* 802A5EF4 002A2E34  7F C4 F3 78 */	mr r4, r30
/* 802A5EF8 002A2E38  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A5EFC 002A2E3C  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 802A5F00 002A2E40  7D 89 03 A6 */	mtctr r12
/* 802A5F04 002A2E44  4E 80 04 21 */	bctrl 
/* 802A5F08 002A2E48  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A5F0C 002A2E4C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802A5F10 002A2E50  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802A5F14 002A2E54  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 802A5F18 002A2E58  7C 08 03 A6 */	mtlr r0
/* 802A5F1C 002A2E5C  38 21 00 40 */	addi r1, r1, 0x40
/* 802A5F20 002A2E60  4E 80 00 20 */	blr 

.global doStartStoneState__Q34Game8Damagumo3ObjFv
doStartStoneState__Q34Game8Damagumo3ObjFv:
/* 802A5F24 002A2E64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5F28 002A2E68  7C 08 02 A6 */	mflr r0
/* 802A5F2C 002A2E6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5F30 002A2E70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5F34 002A2E74  7C 7F 1B 78 */	mr r31, r3
/* 802A5F38 002A2E78  4B E5 CF BD */	bl doStartStoneState__Q24Game9EnemyBaseFv
/* 802A5F3C 002A2E7C  7F E3 FB 78 */	mr r3, r31
/* 802A5F40 002A2E80  48 00 1C 69 */	bl finishPinchJointEffect__Q34Game8Damagumo3ObjFv
/* 802A5F44 002A2E84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5F48 002A2E88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5F4C 002A2E8C  7C 08 03 A6 */	mtlr r0
/* 802A5F50 002A2E90  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5F54 002A2E94  4E 80 00 20 */	blr 

.global doFinishStoneState__Q34Game8Damagumo3ObjFv
doFinishStoneState__Q34Game8Damagumo3ObjFv:
/* 802A5F58 002A2E98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5F5C 002A2E9C  7C 08 02 A6 */	mflr r0
/* 802A5F60 002A2EA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5F64 002A2EA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A5F68 002A2EA8  7C 7F 1B 78 */	mr r31, r3
/* 802A5F6C 002A2EAC  4B E5 CF 9D */	bl doFinishStoneState__Q24Game9EnemyBaseFv
/* 802A5F70 002A2EB0  C0 22 DB 74 */	lfs f1, lbl_8051BED4@sda21(r2)
/* 802A5F74 002A2EB4  7F E3 FB 78 */	mr r3, r31
/* 802A5F78 002A2EB8  C0 42 DB 80 */	lfs f2, lbl_8051BEE0@sda21(r2)
/* 802A5F7C 002A2EBC  38 80 00 00 */	li r4, 0
/* 802A5F80 002A2EC0  C0 62 DB 70 */	lfs f3, lbl_8051BED0@sda21(r2)
/* 802A5F84 002A2EC4  C0 82 DB 84 */	lfs f4, lbl_8051BEE4@sda21(r2)
/* 802A5F88 002A2EC8  4B E6 D1 95 */	bl "flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
/* 802A5F8C 002A2ECC  88 1F 02 DD */	lbz r0, 0x2dd(r31)
/* 802A5F90 002A2ED0  28 00 00 00 */	cmplwi r0, 0
/* 802A5F94 002A2ED4  41 82 00 0C */	beq .L_802A5FA0
/* 802A5F98 002A2ED8  7F E3 FB 78 */	mr r3, r31
/* 802A5F9C 002A2EDC  48 00 1A 6D */	bl startPinchJointEffect__Q34Game8Damagumo3ObjFv
.L_802A5FA0:
/* 802A5FA0 002A2EE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5FA4 002A2EE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A5FA8 002A2EE8  7C 08 03 A6 */	mtlr r0
/* 802A5FAC 002A2EEC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5FB0 002A2EF0  4E 80 00 20 */	blr 

.global doStartMovie__Q34Game8Damagumo3ObjFv
doStartMovie__Q34Game8Damagumo3ObjFv:
/* 802A5FB4 002A2EF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5FB8 002A2EF8  7C 08 02 A6 */	mflr r0
/* 802A5FBC 002A2EFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5FC0 002A2F00  48 00 21 E9 */	bl effectDrawOff__Q34Game8Damagumo3ObjFv
/* 802A5FC4 002A2F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5FC8 002A2F08  7C 08 03 A6 */	mtlr r0
/* 802A5FCC 002A2F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5FD0 002A2F10  4E 80 00 20 */	blr 

.global doEndMovie__Q34Game8Damagumo3ObjFv
doEndMovie__Q34Game8Damagumo3ObjFv:
/* 802A5FD4 002A2F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5FD8 002A2F18  7C 08 02 A6 */	mflr r0
/* 802A5FDC 002A2F1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A5FE0 002A2F20  48 00 20 31 */	bl effectDrawOn__Q34Game8Damagumo3ObjFv
/* 802A5FE4 002A2F24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A5FE8 002A2F28  7C 08 03 A6 */	mtlr r0
/* 802A5FEC 002A2F2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A5FF0 002A2F30  4E 80 00 20 */	blr 

.global "getThrowupItemPosition__Q34Game8Damagumo3ObjFP10Vector3<f>"
"getThrowupItemPosition__Q34Game8Damagumo3ObjFP10Vector3<f>":
/* 802A5FF4 002A2F34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A5FF8 002A2F38  7C 08 02 A6 */	mflr r0
/* 802A5FFC 002A2F3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6000 002A2F40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A6004 002A2F44  7C 9F 23 78 */	mr r31, r4
/* 802A6008 002A2F48  38 82 DB 88 */	addi r4, r2, lbl_8051BEE8@sda21
/* 802A600C 002A2F4C  80 63 01 74 */	lwz r3, 0x174(r3)
/* 802A6010 002A2F50  48 19 8F D5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802A6014 002A2F54  48 18 38 8D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802A6018 002A2F58  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 802A601C 002A2F5C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 802A6020 002A2F60  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 802A6024 002A2F64  C0 02 DB 90 */	lfs f0, lbl_8051BEF0@sda21(r2)
/* 802A6028 002A2F68  D0 3F 00 00 */	stfs f1, 0(r31)
/* 802A602C 002A2F6C  D0 5F 00 04 */	stfs f2, 4(r31)
/* 802A6030 002A2F70  D0 7F 00 08 */	stfs f3, 8(r31)
/* 802A6034 002A2F74  C0 3F 00 04 */	lfs f1, 4(r31)
/* 802A6038 002A2F78  EC 01 00 28 */	fsubs f0, f1, f0
/* 802A603C 002A2F7C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 802A6040 002A2F80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6044 002A2F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6048 002A2F88  7C 08 03 A6 */	mtlr r0
/* 802A604C 002A2F8C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6050 002A2F90  4E 80 00 20 */	blr 

.global "getThrowupItemVelocity__Q34Game8Damagumo3ObjFP10Vector3<f>"
"getThrowupItemVelocity__Q34Game8Damagumo3ObjFP10Vector3<f>":
/* 802A6054 002A2F94  C0 02 DB 70 */	lfs f0, lbl_8051BED0@sda21(r2)
/* 802A6058 002A2F98  D0 04 00 08 */	stfs f0, 8(r4)
/* 802A605C 002A2F9C  D0 04 00 04 */	stfs f0, 4(r4)
/* 802A6060 002A2FA0  D0 04 00 00 */	stfs f0, 0(r4)
/* 802A6064 002A2FA4  4E 80 00 20 */	blr 

.global getTargetPosition__Q34Game8Damagumo3ObjFv
getTargetPosition__Q34Game8Damagumo3ObjFv:
/* 802A6068 002A2FA8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802A606C 002A2FAC  7C 08 02 A6 */	mflr r0
/* 802A6070 002A2FB0  90 01 00 74 */	stw r0, 0x74(r1)
/* 802A6074 002A2FB4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 802A6078 002A2FB8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 802A607C 002A2FBC  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 802A6080 002A2FC0  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 802A6084 002A2FC4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802A6088 002A2FC8  7C 7F 1B 78 */	mr r31, r3
/* 802A608C 002A2FCC  C0 23 01 94 */	lfs f1, 0x194(r3)
/* 802A6090 002A2FD0  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 802A6094 002A2FD4  80 E3 00 C0 */	lwz r7, 0xc0(r3)
/* 802A6098 002A2FD8  EC 41 00 28 */	fsubs f2, f1, f0
/* 802A609C 002A2FDC  C0 23 01 8C */	lfs f1, 0x18c(r3)
/* 802A60A0 002A2FE0  C0 83 01 98 */	lfs f4, 0x198(r3)
/* 802A60A4 002A2FE4  C0 07 03 5C */	lfs f0, 0x35c(r7)
/* 802A60A8 002A2FE8  EC 61 20 28 */	fsubs f3, f1, f4
/* 802A60AC 002A2FEC  EC 22 00 B2 */	fmuls f1, f2, f2
/* 802A60B0 002A2FF0  EC 00 00 32 */	fmuls f0, f0, f0
/* 802A60B4 002A2FF4  EC 23 08 FA */	fmadds f1, f3, f3, f1
/* 802A60B8 002A2FF8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A60BC 002A2FFC  40 80 02 00 */	bge .L_802A62BC
/* 802A60C0 002A3000  3C A0 80 4B */	lis r5, "__vt__23Condition<Q24Game4Piki>"@ha
/* 802A60C4 002A3004  3C 80 80 4D */	lis r4, __vt__Q24Game23ConditionNotStickClient@ha
/* 802A60C8 002A3008  38 C5 BC 60 */	addi r6, r5, "__vt__23Condition<Q24Game4Piki>"@l
/* 802A60CC 002A300C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A60D0 002A3010  38 04 DB 70 */	addi r0, r4, __vt__Q24Game23ConditionNotStickClient@l
/* 802A60D4 002A3014  38 A1 00 08 */	addi r5, r1, 8
/* 802A60D8 002A3018  90 C1 00 08 */	stw r6, 8(r1)
/* 802A60DC 002A301C  38 80 00 00 */	li r4, 0
/* 802A60E0 002A3020  90 01 00 08 */	stw r0, 8(r1)
/* 802A60E4 002A3024  C0 27 04 24 */	lfs f1, 0x424(r7)
/* 802A60E8 002A3028  C0 47 03 D4 */	lfs f2, 0x3d4(r7)
/* 802A60EC 002A302C  4B E6 CA 79 */	bl "getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
/* 802A60F0 002A3030  28 03 00 00 */	cmplwi r3, 0
/* 802A60F4 002A3034  41 82 00 38 */	beq .L_802A612C
/* 802A60F8 002A3038  7C 64 1B 78 */	mr r4, r3
/* 802A60FC 002A303C  38 61 00 10 */	addi r3, r1, 0x10
/* 802A6100 002A3040  81 84 00 00 */	lwz r12, 0(r4)
/* 802A6104 002A3044  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A6108 002A3048  7D 89 03 A6 */	mtctr r12
/* 802A610C 002A304C  4E 80 04 21 */	bctrl 
/* 802A6110 002A3050  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802A6114 002A3054  D0 1F 02 CC */	stfs f0, 0x2cc(r31)
/* 802A6118 002A3058  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802A611C 002A305C  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802A6120 002A3060  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802A6124 002A3064  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802A6128 002A3068  48 00 01 A8 */	b .L_802A62D0
.L_802A612C:
/* 802A612C 002A306C  C0 3F 01 94 */	lfs f1, 0x194(r31)
/* 802A6130 002A3070  C0 1F 02 D4 */	lfs f0, 0x2d4(r31)
/* 802A6134 002A3074  C0 5F 01 8C */	lfs f2, 0x18c(r31)
/* 802A6138 002A3078  EC 61 00 28 */	fsubs f3, f1, f0
/* 802A613C 002A307C  C0 3F 02 CC */	lfs f1, 0x2cc(r31)
/* 802A6140 002A3080  C0 02 DB 94 */	lfs f0, lbl_8051BEF4@sda21(r2)
/* 802A6144 002A3084  EC 42 08 28 */	fsubs f2, f2, f1
/* 802A6148 002A3088  EC 23 00 F2 */	fmuls f1, f3, f3
/* 802A614C 002A308C  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 802A6150 002A3090  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A6154 002A3094  40 80 01 7C */	bge .L_802A62D0
/* 802A6158 002A3098  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A615C 002A309C  C0 23 03 5C */	lfs f1, 0x35c(r3)
/* 802A6160 002A30A0  C0 03 03 84 */	lfs f0, 0x384(r3)
/* 802A6164 002A30A4  EF C1 00 28 */	fsubs f30, f1, f0
/* 802A6168 002A30A8  4B E2 34 39 */	bl rand
/* 802A616C 002A30AC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802A6170 002A30B0  3C 00 43 30 */	lis r0, 0x4330
/* 802A6174 002A30B4  90 61 00 24 */	stw r3, 0x24(r1)
/* 802A6178 002A30B8  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802A617C 002A30BC  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 802A6180 002A30C0  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802A6184 002A30C4  90 01 00 20 */	stw r0, 0x20(r1)
/* 802A6188 002A30C8  C8 22 DB B0 */	lfd f1, lbl_8051BF10@sda21(r2)
/* 802A618C 002A30CC  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802A6190 002A30D0  C0 A2 DB 98 */	lfs f5, lbl_8051BEF8@sda21(r2)
/* 802A6194 002A30D4  EC 00 08 28 */	fsubs f0, f0, f1
/* 802A6198 002A30D8  C0 7F 01 8C */	lfs f3, 0x18c(r31)
/* 802A619C 002A30DC  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802A61A0 002A30E0  C0 84 03 84 */	lfs f4, 0x384(r4)
/* 802A61A4 002A30E4  EC DE 00 32 */	fmuls f6, f30, f0
/* 802A61A8 002A30E8  C0 5F 01 94 */	lfs f2, 0x194(r31)
/* 802A61AC 002A30EC  EC 23 08 28 */	fsubs f1, f3, f1
/* 802A61B0 002A30F0  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802A61B4 002A30F4  EC 66 28 24 */	fdivs f3, f6, f5
/* 802A61B8 002A30F8  EF E4 18 2A */	fadds f31, f4, f3
/* 802A61BC 002A30FC  EC 42 00 28 */	fsubs f2, f2, f0
/* 802A61C0 002A3100  4B D8 EF 49 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802A61C4 002A3104  FF C0 08 90 */	fmr f30, f1
/* 802A61C8 002A3108  4B E2 33 D9 */	bl rand
/* 802A61CC 002A310C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802A61D0 002A3110  3C 00 43 30 */	lis r0, 0x4330
/* 802A61D4 002A3114  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802A61D8 002A3118  C8 42 DB B0 */	lfd f2, lbl_8051BF10@sda21(r2)
/* 802A61DC 002A311C  90 01 00 28 */	stw r0, 0x28(r1)
/* 802A61E0 002A3120  C0 62 DB 9C */	lfs f3, lbl_8051BEFC@sda21(r2)
/* 802A61E4 002A3124  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802A61E8 002A3128  C0 22 DB 98 */	lfs f1, lbl_8051BEF8@sda21(r2)
/* 802A61EC 002A312C  EC 80 10 28 */	fsubs f4, f0, f2
/* 802A61F0 002A3130  C0 42 DB A0 */	lfs f2, lbl_8051BF00@sda21(r2)
/* 802A61F4 002A3134  C0 02 DB 70 */	lfs f0, lbl_8051BED0@sda21(r2)
/* 802A61F8 002A3138  EC 63 01 32 */	fmuls f3, f3, f4
/* 802A61FC 002A313C  EC 23 08 24 */	fdivs f1, f3, f1
/* 802A6200 002A3140  EC 3E 08 2A */	fadds f1, f30, f1
/* 802A6204 002A3144  EC 62 08 2A */	fadds f3, f2, f1
/* 802A6208 002A3148  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802A620C 002A314C  40 80 00 30 */	bge .L_802A623C
/* 802A6210 002A3150  C0 02 DB A4 */	lfs f0, lbl_8051BF04@sda21(r2)
/* 802A6214 002A3154  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A6218 002A3158  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A621C 002A315C  EC 03 00 32 */	fmuls f0, f3, f0
/* 802A6220 002A3160  FC 00 00 1E */	fctiwz f0, f0
/* 802A6224 002A3164  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802A6228 002A3168  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802A622C 002A316C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A6230 002A3170  7C 03 04 2E */	lfsx f0, r3, r0
/* 802A6234 002A3174  FC 40 00 50 */	fneg f2, f0
/* 802A6238 002A3178  48 00 00 28 */	b .L_802A6260
.L_802A623C:
/* 802A623C 002A317C  C0 02 DB A8 */	lfs f0, lbl_8051BF08@sda21(r2)
/* 802A6240 002A3180  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A6244 002A3184  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A6248 002A3188  EC 03 00 32 */	fmuls f0, f3, f0
/* 802A624C 002A318C  FC 00 00 1E */	fctiwz f0, f0
/* 802A6250 002A3190  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802A6254 002A3194  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802A6258 002A3198  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A625C 002A319C  7C 43 04 2E */	lfsx f2, r3, r0
.L_802A6260:
/* 802A6260 002A31A0  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 802A6264 002A31A4  C0 02 DB 70 */	lfs f0, lbl_8051BED0@sda21(r2)
/* 802A6268 002A31A8  EC 3F 08 BA */	fmadds f1, f31, f2, f1
/* 802A626C 002A31AC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802A6270 002A31B0  D0 3F 02 CC */	stfs f1, 0x2cc(r31)
/* 802A6274 002A31B4  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802A6278 002A31B8  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802A627C 002A31BC  40 80 00 08 */	bge .L_802A6284
/* 802A6280 002A31C0  FC 60 18 50 */	fneg f3, f3
.L_802A6284:
/* 802A6284 002A31C4  C0 22 DB A8 */	lfs f1, lbl_8051BF08@sda21(r2)
/* 802A6288 002A31C8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802A628C 002A31CC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802A6290 002A31D0  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802A6294 002A31D4  EC 23 00 72 */	fmuls f1, f3, f1
/* 802A6298 002A31D8  FC 20 08 1E */	fctiwz f1, f1
/* 802A629C 002A31DC  D8 21 00 40 */	stfd f1, 0x40(r1)
/* 802A62A0 002A31E0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A62A4 002A31E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802A62A8 002A31E8  7C 63 02 14 */	add r3, r3, r0
/* 802A62AC 002A31EC  C0 23 00 04 */	lfs f1, 4(r3)
/* 802A62B0 002A31F0  EC 1F 00 7A */	fmadds f0, f31, f1, f0
/* 802A62B4 002A31F4  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
/* 802A62B8 002A31F8  48 00 00 18 */	b .L_802A62D0
.L_802A62BC:
/* 802A62BC 002A31FC  D0 9F 02 CC */	stfs f4, 0x2cc(r31)
/* 802A62C0 002A3200  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 802A62C4 002A3204  D0 1F 02 D0 */	stfs f0, 0x2d0(r31)
/* 802A62C8 002A3208  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 802A62CC 002A320C  D0 1F 02 D4 */	stfs f0, 0x2d4(r31)
.L_802A62D0:
/* 802A62D0 002A3210  7F E3 FB 78 */	mr r3, r31
/* 802A62D4 002A3214  38 9F 02 CC */	addi r4, r31, 0x2cc
/* 802A62D8 002A3218  48 00 02 E9 */	bl "setIKSystemTargetPosition__Q34Game8Damagumo3ObjFR10Vector3<f>"
/* 802A62DC 002A321C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 802A62E0 002A3220  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 802A62E4 002A3224  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 802A62E8 002A3228  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 802A62EC 002A322C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802A62F0 002A3230  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802A62F4 002A3234  7C 08 03 A6 */	mtlr r0
/* 802A62F8 002A3238  38 21 00 70 */	addi r1, r1, 0x70
/* 802A62FC 002A323C  4E 80 00 20 */	blr 

.global createIKSystem__Q34Game8Damagumo3ObjFv
createIKSystem__Q34Game8Damagumo3ObjFv:
/* 802A6300 002A3240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6304 002A3244  7C 08 02 A6 */	mflr r0
/* 802A6308 002A3248  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A630C 002A324C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A6310 002A3250  7C 7F 1B 78 */	mr r31, r3
/* 802A6314 002A3254  38 60 00 9C */	li r3, 0x9c
/* 802A6318 002A3258  4B D7 DB 8D */	bl __nw__FUl
/* 802A631C 002A325C  7C 60 1B 79 */	or. r0, r3, r3
/* 802A6320 002A3260  41 82 00 0C */	beq .L_802A632C
/* 802A6324 002A3264  48 00 27 95 */	bl __ct__Q24Game11IKSystemMgrFv
/* 802A6328 002A3268  7C 60 1B 78 */	mr r0, r3
.L_802A632C:
/* 802A632C 002A326C  90 1F 02 E0 */	stw r0, 0x2e0(r31)
/* 802A6330 002A3270  38 60 00 48 */	li r3, 0x48
/* 802A6334 002A3274  4B D7 DB 71 */	bl __nw__FUl
/* 802A6338 002A3278  28 03 00 00 */	cmplwi r3, 0
/* 802A633C 002A327C  41 82 00 88 */	beq .L_802A63C4
/* 802A6340 002A3280  38 00 FF FF */	li r0, -1
/* 802A6344 002A3284  C0 A2 DB 70 */	lfs f5, lbl_8051BED0@sda21(r2)
/* 802A6348 002A3288  90 03 00 00 */	stw r0, 0(r3)
/* 802A634C 002A328C  C0 22 DB B8 */	lfs f1, lbl_8051BF18@sda21(r2)
/* 802A6350 002A3290  D0 A3 00 04 */	stfs f5, 4(r3)
/* 802A6354 002A3294  C0 02 DB BC */	lfs f0, lbl_8051BF1C@sda21(r2)
/* 802A6358 002A3298  D0 A3 00 08 */	stfs f5, 8(r3)
/* 802A635C 002A329C  C0 42 DB C0 */	lfs f2, lbl_8051BF20@sda21(r2)
/* 802A6360 002A32A0  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 802A6364 002A32A4  C0 22 DB C4 */	lfs f1, lbl_8051BF24@sda21(r2)
/* 802A6368 002A32A8  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802A636C 002A32AC  C0 02 DB C8 */	lfs f0, lbl_8051BF28@sda21(r2)
/* 802A6370 002A32B0  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 802A6374 002A32B4  C0 42 DB 80 */	lfs f2, lbl_8051BEE0@sda21(r2)
/* 802A6378 002A32B8  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 802A637C 002A32BC  C0 22 DB CC */	lfs f1, lbl_8051BF2C@sda21(r2)
/* 802A6380 002A32C0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802A6384 002A32C4  C0 02 DB D0 */	lfs f0, lbl_8051BF30@sda21(r2)
/* 802A6388 002A32C8  D0 43 00 20 */	stfs f2, 0x20(r3)
/* 802A638C 002A32CC  C0 82 DB 90 */	lfs f4, lbl_8051BEF0@sda21(r2)
/* 802A6390 002A32D0  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 802A6394 002A32D4  C0 62 DB D4 */	lfs f3, lbl_8051BF34@sda21(r2)
/* 802A6398 002A32D8  D0 A3 00 28 */	stfs f5, 0x28(r3)
/* 802A639C 002A32DC  C0 42 DB 78 */	lfs f2, lbl_8051BED8@sda21(r2)
/* 802A63A0 002A32E0  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802A63A4 002A32E4  C0 22 DB D8 */	lfs f1, lbl_8051BF38@sda21(r2)
/* 802A63A8 002A32E8  D0 A3 00 30 */	stfs f5, 0x30(r3)
/* 802A63AC 002A32EC  C0 02 DB DC */	lfs f0, lbl_8051BF3C@sda21(r2)
/* 802A63B0 002A32F0  D0 83 00 34 */	stfs f4, 0x34(r3)
/* 802A63B4 002A32F4  D0 63 00 38 */	stfs f3, 0x38(r3)
/* 802A63B8 002A32F8  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 802A63BC 002A32FC  D0 23 00 40 */	stfs f1, 0x40(r3)
/* 802A63C0 002A3300  D0 03 00 44 */	stfs f0, 0x44(r3)
.L_802A63C4:
/* 802A63C4 002A3304  90 7F 02 E4 */	stw r3, 0x2e4(r31)
/* 802A63C8 002A3308  38 60 00 08 */	li r3, 8
/* 802A63CC 002A330C  4B D7 DA D9 */	bl __nw__FUl
/* 802A63D0 002A3310  28 03 00 00 */	cmplwi r3, 0
/* 802A63D4 002A3314  41 82 00 20 */	beq .L_802A63F4
/* 802A63D8 002A3318  3C A0 80 4D */	lis r5, __vt__Q24Game19JointGroundCallBack@ha
/* 802A63DC 002A331C  3C 80 80 4D */	lis r4, __vt__Q34Game8Damagumo22DamagumoGroundCallBack@ha
/* 802A63E0 002A3320  38 05 DB 60 */	addi r0, r5, __vt__Q24Game19JointGroundCallBack@l
/* 802A63E4 002A3324  90 03 00 00 */	stw r0, 0(r3)
/* 802A63E8 002A3328  38 04 DE A8 */	addi r0, r4, __vt__Q34Game8Damagumo22DamagumoGroundCallBack@l
/* 802A63EC 002A332C  90 03 00 00 */	stw r0, 0(r3)
/* 802A63F0 002A3330  93 E3 00 04 */	stw r31, 4(r3)
.L_802A63F4:
/* 802A63F4 002A3334  90 7F 02 E8 */	stw r3, 0x2e8(r31)
/* 802A63F8 002A3338  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A63FC 002A333C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6400 002A3340  7C 08 03 A6 */	mtlr r0
/* 802A6404 002A3344  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6408 002A3348  4E 80 00 20 */	blr 

.global setupIKSystem__Q34Game8Damagumo3ObjFv
setupIKSystem__Q34Game8Damagumo3ObjFv:
/* 802A640C 002A334C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802A6410 002A3350  7C 08 02 A6 */	mflr r0
/* 802A6414 002A3354  38 A0 00 00 */	li r5, 0
/* 802A6418 002A3358  90 01 00 54 */	stw r0, 0x54(r1)
/* 802A641C 002A335C  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 802A6420 002A3360  7C 7F 1B 78 */	mr r31, r3
/* 802A6424 002A3364  7F E4 FB 78 */	mr r4, r31
/* 802A6428 002A3368  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A642C 002A336C  48 00 27 09 */	bl init__Q24Game11IKSystemMgrFPQ24Game9EnemyBasePQ24Game19JointGroundCallBack
/* 802A6430 002A3370  3C 60 80 49 */	lis r3, lbl_80489900@ha
/* 802A6434 002A3374  38 C1 00 08 */	addi r6, r1, 8
/* 802A6438 002A3378  3B 63 99 00 */	addi r27, r3, lbl_80489900@l
/* 802A643C 002A337C  38 A0 00 00 */	li r5, 0
/* 802A6440 002A3380  83 9B 00 00 */	lwz r28, 0(r27)
/* 802A6444 002A3384  83 BB 00 04 */	lwz r29, 4(r27)
/* 802A6448 002A3388  83 DB 00 08 */	lwz r30, 8(r27)
/* 802A644C 002A338C  81 9B 00 0C */	lwz r12, 0xc(r27)
/* 802A6450 002A3390  81 7B 00 10 */	lwz r11, 0x10(r27)
/* 802A6454 002A3394  81 5B 00 14 */	lwz r10, 0x14(r27)
/* 802A6458 002A3398  81 3B 00 18 */	lwz r9, 0x18(r27)
/* 802A645C 002A339C  81 1B 00 1C */	lwz r8, 0x1c(r27)
/* 802A6460 002A33A0  80 FB 00 20 */	lwz r7, 0x20(r27)
/* 802A6464 002A33A4  80 9B 00 24 */	lwz r4, 0x24(r27)
/* 802A6468 002A33A8  80 7B 00 28 */	lwz r3, 0x28(r27)
/* 802A646C 002A33AC  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 802A6470 002A33B0  93 81 00 08 */	stw r28, 8(r1)
/* 802A6474 002A33B4  93 A1 00 0C */	stw r29, 0xc(r1)
/* 802A6478 002A33B8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802A647C 002A33BC  91 81 00 14 */	stw r12, 0x14(r1)
/* 802A6480 002A33C0  91 61 00 18 */	stw r11, 0x18(r1)
/* 802A6484 002A33C4  91 41 00 1C */	stw r10, 0x1c(r1)
/* 802A6488 002A33C8  91 21 00 20 */	stw r9, 0x20(r1)
/* 802A648C 002A33CC  91 01 00 24 */	stw r8, 0x24(r1)
/* 802A6490 002A33D0  90 E1 00 28 */	stw r7, 0x28(r1)
/* 802A6494 002A33D4  90 81 00 2C */	stw r4, 0x2c(r1)
/* 802A6498 002A33D8  90 61 00 30 */	stw r3, 0x30(r1)
/* 802A649C 002A33DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802A64A0 002A33E0  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A64A4 002A33E4  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802A64A8 002A33E8  48 00 27 D1 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802A64AC 002A33EC  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A64B0 002A33F0  38 C1 00 14 */	addi r6, r1, 0x14
/* 802A64B4 002A33F4  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802A64B8 002A33F8  38 A0 00 01 */	li r5, 1
/* 802A64BC 002A33FC  48 00 27 BD */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802A64C0 002A3400  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A64C4 002A3404  38 C1 00 20 */	addi r6, r1, 0x20
/* 802A64C8 002A3408  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802A64CC 002A340C  38 A0 00 02 */	li r5, 2
/* 802A64D0 002A3410  48 00 27 A9 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802A64D4 002A3414  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A64D8 002A3418  38 C1 00 2C */	addi r6, r1, 0x2c
/* 802A64DC 002A341C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802A64E0 002A3420  38 A0 00 03 */	li r5, 3
/* 802A64E4 002A3424  48 00 27 95 */	bl setupJoint__Q24Game11IKSystemMgrFPQ28SysShape5ModeliPPc
/* 802A64E8 002A3428  3C 80 80 49 */	lis r4, lbl_80489888@ha
/* 802A64EC 002A342C  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A64F0 002A3430  38 A4 98 88 */	addi r5, r4, lbl_80489888@l
/* 802A64F4 002A3434  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 802A64F8 002A3438  48 00 27 ED */	bl setupCallBack__Q24Game11IKSystemMgrFPQ28SysShape5ModelPc
/* 802A64FC 002A343C  7F E3 FB 78 */	mr r3, r31
/* 802A6500 002A3440  48 00 00 31 */	bl setIKParameter__Q34Game8Damagumo3ObjFv
/* 802A6504 002A3444  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A6508 002A3448  80 9F 02 E4 */	lwz r4, 0x2e4(r31)
/* 802A650C 002A344C  48 00 28 11 */	bl setParameters__Q24Game11IKSystemMgrFPQ24Game13IKSystemParms
/* 802A6510 002A3450  80 1F 02 E8 */	lwz r0, 0x2e8(r31)
/* 802A6514 002A3454  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A6518 002A3458  90 03 00 94 */	stw r0, 0x94(r3)
/* 802A651C 002A345C  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 802A6520 002A3460  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802A6524 002A3464  7C 08 03 A6 */	mtlr r0
/* 802A6528 002A3468  38 21 00 50 */	addi r1, r1, 0x50
/* 802A652C 002A346C  4E 80 00 20 */	blr 

.global setIKParameter__Q34Game8Damagumo3ObjFv
setIKParameter__Q34Game8Damagumo3ObjFv:
/* 802A6530 002A3470  C0 02 DB E0 */	lfs f0, lbl_8051BF40@sda21(r2)
/* 802A6534 002A3474  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A6538 002A3478  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 802A653C 002A347C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A6540 002A3480  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A6544 002A3484  C0 05 03 34 */	lfs f0, 0x334(r5)
/* 802A6548 002A3488  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 802A654C 002A348C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A6550 002A3490  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A6554 002A3494  C0 05 02 E4 */	lfs f0, 0x2e4(r5)
/* 802A6558 002A3498  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 802A655C 002A349C  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A6560 002A34A0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A6564 002A34A4  C0 05 08 1C */	lfs f0, 0x81c(r5)
/* 802A6568 002A34A8  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 802A656C 002A34AC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A6570 002A34B0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A6574 002A34B4  C0 05 08 44 */	lfs f0, 0x844(r5)
/* 802A6578 002A34B8  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 802A657C 002A34BC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A6580 002A34C0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A6584 002A34C4  C0 05 08 6C */	lfs f0, 0x86c(r5)
/* 802A6588 002A34C8  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 802A658C 002A34CC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A6590 002A34D0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A6594 002A34D4  C0 05 08 BC */	lfs f0, 0x8bc(r5)
/* 802A6598 002A34D8  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 802A659C 002A34DC  80 A3 00 C0 */	lwz r5, 0xc0(r3)
/* 802A65A0 002A34E0  80 83 02 E4 */	lwz r4, 0x2e4(r3)
/* 802A65A4 002A34E4  C0 05 08 94 */	lfs f0, 0x894(r5)
/* 802A65A8 002A34E8  D0 04 00 24 */	stfs f0, 0x24(r4)
/* 802A65AC 002A34EC  80 83 00 C0 */	lwz r4, 0xc0(r3)
/* 802A65B0 002A34F0  80 63 02 E4 */	lwz r3, 0x2e4(r3)
/* 802A65B4 002A34F4  C0 04 08 E4 */	lfs f0, 0x8e4(r4)
/* 802A65B8 002A34F8  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802A65BC 002A34FC  4E 80 00 20 */	blr 

.global "setIKSystemTargetPosition__Q34Game8Damagumo3ObjFR10Vector3<f>"
"setIKSystemTargetPosition__Q34Game8Damagumo3ObjFR10Vector3<f>":
/* 802A65C0 002A3500  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A65C4 002A3504  C0 04 00 00 */	lfs f0, 0(r4)
/* 802A65C8 002A3508  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802A65CC 002A350C  C0 04 00 04 */	lfs f0, 4(r4)
/* 802A65D0 002A3510  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 802A65D4 002A3514  C0 04 00 08 */	lfs f0, 8(r4)
/* 802A65D8 002A3518  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802A65DC 002A351C  4E 80 00 20 */	blr 

.global updateIKSystem__Q34Game8Damagumo3ObjFv
updateIKSystem__Q34Game8Damagumo3ObjFv:
/* 802A65E0 002A3520  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A65E4 002A3524  7C 08 02 A6 */	mflr r0
/* 802A65E8 002A3528  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A65EC 002A352C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A65F0 002A3530  7C 7F 1B 78 */	mr r31, r3
/* 802A65F4 002A3534  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A65F8 002A3538  48 00 2A ED */	bl doUpdate__Q24Game11IKSystemMgrFv
/* 802A65FC 002A353C  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A6600 002A3540  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 802A6604 002A3544  C0 43 00 40 */	lfs f2, 0x40(r3)
/* 802A6608 002A3548  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 802A660C 002A354C  D0 1F 01 8C */	stfs f0, 0x18c(r31)
/* 802A6610 002A3550  D0 3F 01 90 */	stfs f1, 0x190(r31)
/* 802A6614 002A3554  D0 5F 01 94 */	stfs f2, 0x194(r31)
/* 802A6618 002A3558  80 7F 02 E0 */	lwz r3, 0x2e0(r31)
/* 802A661C 002A355C  C0 03 00 04 */	lfs f0, 4(r3)
/* 802A6620 002A3560  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 802A6624 002A3564  C0 1F 01 FC */	lfs f0, 0x1fc(r31)
/* 802A6628 002A3568  D0 1F 01 A8 */	stfs f0, 0x1a8(r31)
/* 802A662C 002A356C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6630 002A3570  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6634 002A3574  7C 08 03 A6 */	mtlr r0
/* 802A6638 002A3578  38 21 00 10 */	addi r1, r1, 0x10
/* 802A663C 002A357C  4E 80 00 20 */	blr 

.global doAnimationIKSystem__Q34Game8Damagumo3ObjFv
doAnimationIKSystem__Q34Game8Damagumo3ObjFv:
/* 802A6640 002A3580  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A6644 002A3584  7C 08 02 A6 */	mflr r0
/* 802A6648 002A3588  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A664C 002A358C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A6650 002A3590  7C 7F 1B 78 */	mr r31, r3
/* 802A6654 002A3594  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A6658 002A3598  48 00 2A 85 */	bl setAnimationCallBack__Q24Game11IKSystemMgrFv
/* 802A665C 002A359C  80 FF 02 E0 */	lwz r7, 0x2e0(r31)
/* 802A6660 002A35A0  38 7F 01 38 */	addi r3, r31, 0x138
/* 802A6664 002A35A4  38 9F 01 68 */	addi r4, r31, 0x168
/* 802A6668 002A35A8  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 802A666C 002A35AC  C0 27 00 48 */	lfs f1, 0x48(r7)
/* 802A6670 002A35B0  38 C1 00 08 */	addi r6, r1, 8
/* 802A6674 002A35B4  C0 47 00 4C */	lfs f2, 0x4c(r7)
/* 802A6678 002A35B8  C0 07 00 44 */	lfs f0, 0x44(r7)
/* 802A667C 002A35BC  D0 01 00 08 */	stfs f0, 8(r1)
/* 802A6680 002A35C0  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802A6684 002A35C4  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 802A6688 002A35C8  48 18 1C 51 */	bl "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
/* 802A668C 002A35CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A6690 002A35D0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A6694 002A35D4  7C 08 03 A6 */	mtlr r0
/* 802A6698 002A35D8  38 21 00 20 */	addi r1, r1, 0x20
/* 802A669C 002A35DC  4E 80 00 20 */	blr 

.global finishAnimationIKSystem__Q34Game8Damagumo3ObjFv
finishAnimationIKSystem__Q34Game8Damagumo3ObjFv:
/* 802A66A0 002A35E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A66A4 002A35E4  7C 08 02 A6 */	mflr r0
/* 802A66A8 002A35E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A66AC 002A35EC  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A66B0 002A35F0  48 00 2A 21 */	bl resetAnimationCallBack__Q24Game11IKSystemMgrFv
/* 802A66B4 002A35F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A66B8 002A35F8  7C 08 03 A6 */	mtlr r0
/* 802A66BC 002A35FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A66C0 002A3600  4E 80 00 20 */	blr 

.global startProgramedIK__Q34Game8Damagumo3ObjFv
startProgramedIK__Q34Game8Damagumo3ObjFv:
/* 802A66C4 002A3604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A66C8 002A3608  7C 08 02 A6 */	mflr r0
/* 802A66CC 002A360C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A66D0 002A3610  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A66D4 002A3614  48 00 26 AD */	bl startProgramedIK__Q24Game11IKSystemMgrFv
/* 802A66D8 002A3618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A66DC 002A361C  7C 08 03 A6 */	mtlr r0
/* 802A66E0 002A3620  38 21 00 10 */	addi r1, r1, 0x10
/* 802A66E4 002A3624  4E 80 00 20 */	blr 

.global startIKMotion__Q34Game8Damagumo3ObjFv
startIKMotion__Q34Game8Damagumo3ObjFv:
/* 802A66E8 002A3628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A66EC 002A362C  7C 08 02 A6 */	mflr r0
/* 802A66F0 002A3630  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A66F4 002A3634  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A66F8 002A3638  48 00 28 11 */	bl startIKMotion__Q24Game11IKSystemMgrFv
/* 802A66FC 002A363C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6700 002A3640  7C 08 03 A6 */	mtlr r0
/* 802A6704 002A3644  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6708 002A3648  4E 80 00 20 */	blr 

.global finishIKMotion__Q34Game8Damagumo3ObjFv
finishIKMotion__Q34Game8Damagumo3ObjFv:
/* 802A670C 002A364C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6710 002A3650  7C 08 02 A6 */	mflr r0
/* 802A6714 002A3654  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6718 002A3658  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A671C 002A365C  48 00 28 11 */	bl finishIKMotion__Q24Game11IKSystemMgrFv
/* 802A6720 002A3660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6724 002A3664  7C 08 03 A6 */	mtlr r0
/* 802A6728 002A3668  38 21 00 10 */	addi r1, r1, 0x10
/* 802A672C 002A366C  4E 80 00 20 */	blr 

.global forceFinishIKMotion__Q34Game8Damagumo3ObjFv
forceFinishIKMotion__Q34Game8Damagumo3ObjFv:
/* 802A6730 002A3670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6734 002A3674  7C 08 02 A6 */	mflr r0
/* 802A6738 002A3678  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A673C 002A367C  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A6740 002A3680  48 00 27 F9 */	bl forceFinishIKMotion__Q24Game11IKSystemMgrFv
/* 802A6744 002A3684  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6748 002A3688  7C 08 03 A6 */	mtlr r0
/* 802A674C 002A368C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6750 002A3690  4E 80 00 20 */	blr 

.global isFinishIKMotion__Q34Game8Damagumo3ObjFv
isFinishIKMotion__Q34Game8Damagumo3ObjFv:
/* 802A6754 002A3694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6758 002A3698  7C 08 02 A6 */	mflr r0
/* 802A675C 002A369C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6760 002A36A0  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A6764 002A36A4  48 00 28 FD */	bl isFinishIKMotion__Q24Game11IKSystemMgrFv
/* 802A6768 002A36A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A676C 002A36AC  7C 08 03 A6 */	mtlr r0
/* 802A6770 002A36B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6774 002A36B4  4E 80 00 20 */	blr 

.global startBlendMotion__Q34Game8Damagumo3ObjFv
startBlendMotion__Q34Game8Damagumo3ObjFv:
/* 802A6778 002A36B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A677C 002A36BC  7C 08 02 A6 */	mflr r0
/* 802A6780 002A36C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6784 002A36C4  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A6788 002A36C8  48 00 27 C5 */	bl startBlendMotion__Q24Game11IKSystemMgrFv
/* 802A678C 002A36CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6790 002A36D0  7C 08 03 A6 */	mtlr r0
/* 802A6794 002A36D4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6798 002A36D8  4E 80 00 20 */	blr 

.global finishBlendMotion__Q34Game8Damagumo3ObjFv
finishBlendMotion__Q34Game8Damagumo3ObjFv:
/* 802A679C 002A36DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A67A0 002A36E0  7C 08 02 A6 */	mflr r0
/* 802A67A4 002A36E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A67A8 002A36E8  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A67AC 002A36EC  48 00 27 FD */	bl finishBlendMotion__Q24Game11IKSystemMgrFv
/* 802A67B0 002A36F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A67B4 002A36F4  7C 08 03 A6 */	mtlr r0
/* 802A67B8 002A36F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A67BC 002A36FC  4E 80 00 20 */	blr 

.global getTraceCentrePosition__Q34Game8Damagumo3ObjFv
getTraceCentrePosition__Q34Game8Damagumo3ObjFv:
/* 802A67C0 002A3700  80 84 02 E0 */	lwz r4, 0x2e0(r4)
/* 802A67C4 002A3704  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 802A67C8 002A3708  D0 03 00 00 */	stfs f0, 0(r3)
/* 802A67CC 002A370C  C0 04 00 48 */	lfs f0, 0x48(r4)
/* 802A67D0 002A3710  D0 03 00 04 */	stfs f0, 4(r3)
/* 802A67D4 002A3714  C0 04 00 4C */	lfs f0, 0x4c(r4)
/* 802A67D8 002A3718  D0 03 00 08 */	stfs f0, 8(r3)
/* 802A67DC 002A371C  4E 80 00 20 */	blr 

.global isCollisionCheck__Q34Game8Damagumo3ObjFP8CollPart
isCollisionCheck__Q34Game8Damagumo3ObjFP8CollPart:
/* 802A67E0 002A3720  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A67E4 002A3724  7C 08 02 A6 */	mflr r0
/* 802A67E8 002A3728  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A67EC 002A372C  80 63 02 E0 */	lwz r3, 0x2e0(r3)
/* 802A67F0 002A3730  48 00 2A 05 */	bl isCollisionCheck__Q24Game11IKSystemMgrFP8CollPart
/* 802A67F4 002A3734  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A67F8 002A3738  7C 08 03 A6 */	mtlr r0
/* 802A67FC 002A373C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6800 002A3740  4E 80 00 20 */	blr 

.global createShadowSystem__Q34Game8Damagumo3ObjFv
createShadowSystem__Q34Game8Damagumo3ObjFv:
/* 802A6804 002A3744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6808 002A3748  7C 08 02 A6 */	mflr r0
/* 802A680C 002A374C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6810 002A3750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A6814 002A3754  7C 7F 1B 78 */	mr r31, r3
/* 802A6818 002A3758  38 60 00 B0 */	li r3, 0xb0
/* 802A681C 002A375C  4B D7 D6 89 */	bl __nw__FUl
/* 802A6820 002A3760  7C 60 1B 79 */	or. r0, r3, r3
/* 802A6824 002A3764  41 82 00 10 */	beq .L_802A6834
/* 802A6828 002A3768  7F E4 FB 78 */	mr r4, r31
/* 802A682C 002A376C  48 00 45 69 */	bl __ct__Q34Game8Damagumo17DamagumoShadowMgrFPQ34Game8Damagumo3Obj
/* 802A6830 002A3770  7C 60 1B 78 */	mr r0, r3
.L_802A6834:
/* 802A6834 002A3774  90 1F 02 EC */	stw r0, 0x2ec(r31)
/* 802A6838 002A3778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A683C 002A377C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6840 002A3780  7C 08 03 A6 */	mtlr r0
/* 802A6844 002A3784  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6848 002A3788  4E 80 00 20 */	blr 

.global setupShadowSystem__Q34Game8Damagumo3ObjFv
setupShadowSystem__Q34Game8Damagumo3ObjFv:
/* 802A684C 002A378C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A6850 002A3790  7C 08 02 A6 */	mflr r0
/* 802A6854 002A3794  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A6858 002A3798  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802A685C 002A379C  7C 7B 1B 78 */	mr r27, r3
/* 802A6860 002A37A0  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 802A6864 002A37A4  48 00 47 3D */	bl init__Q34Game8Damagumo17DamagumoShadowMgrFv
/* 802A6868 002A37A8  3B A0 00 00 */	li r29, 0
/* 802A686C 002A37AC  7F 7E DB 78 */	mr r30, r27
.L_802A6870:
/* 802A6870 002A37B0  3B 80 00 00 */	li r28, 0
/* 802A6874 002A37B4  7F DF F3 78 */	mr r31, r30
.L_802A6878:
/* 802A6878 002A37B8  80 7B 02 EC */	lwz r3, 0x2ec(r27)
/* 802A687C 002A37BC  7F A4 EB 78 */	mr r4, r29
/* 802A6880 002A37C0  7F 85 E3 78 */	mr r5, r28
/* 802A6884 002A37C4  38 DF 02 F0 */	addi r6, r31, 0x2f0
/* 802A6888 002A37C8  48 00 48 65 */	bl "setJointPosPtr__Q34Game8Damagumo17DamagumoShadowMgrFiiP10Vector3<f>"
/* 802A688C 002A37CC  3B 9C 00 01 */	addi r28, r28, 1
/* 802A6890 002A37D0  3B FF 00 0C */	addi r31, r31, 0xc
/* 802A6894 002A37D4  2C 1C 00 04 */	cmpwi r28, 4
/* 802A6898 002A37D8  41 80 FF E0 */	blt .L_802A6878
/* 802A689C 002A37DC  3B BD 00 01 */	addi r29, r29, 1
/* 802A68A0 002A37E0  3B DE 00 30 */	addi r30, r30, 0x30
/* 802A68A4 002A37E4  2C 1D 00 04 */	cmpwi r29, 4
/* 802A68A8 002A37E8  41 80 FF C8 */	blt .L_802A6870
/* 802A68AC 002A37EC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802A68B0 002A37F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A68B4 002A37F4  7C 08 03 A6 */	mtlr r0
/* 802A68B8 002A37F8  38 21 00 20 */	addi r1, r1, 0x20
/* 802A68BC 002A37FC  4E 80 00 20 */	blr 

.global doAnimationShadowSystem__Q34Game8Damagumo3ObjFv
doAnimationShadowSystem__Q34Game8Damagumo3ObjFv:
/* 802A68C0 002A3800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A68C4 002A3804  7C 08 02 A6 */	mflr r0
/* 802A68C8 002A3808  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A68CC 002A380C  80 63 02 EC */	lwz r3, 0x2ec(r3)
/* 802A68D0 002A3810  48 00 48 35 */	bl update__Q34Game8Damagumo17DamagumoShadowMgrFv
/* 802A68D4 002A3814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A68D8 002A3818  7C 08 03 A6 */	mtlr r0
/* 802A68DC 002A381C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A68E0 002A3820  4E 80 00 20 */	blr 

.global createMaterialAnimation__Q34Game8Damagumo3ObjFv
createMaterialAnimation__Q34Game8Damagumo3ObjFv:
/* 802A68E4 002A3824  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A68E8 002A3828  7C 08 02 A6 */	mflr r0
/* 802A68EC 002A382C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A68F0 002A3830  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A68F4 002A3834  7C 7F 1B 78 */	mr r31, r3
/* 802A68F8 002A3838  38 60 00 28 */	li r3, 0x28
/* 802A68FC 002A383C  4B D7 D6 B1 */	bl __nwa__FUl
/* 802A6900 002A3840  3C 80 80 16 */	lis r4, __ct__Q23Sys15MatLoopAnimatorFv@ha
/* 802A6904 002A3844  38 A0 00 00 */	li r5, 0
/* 802A6908 002A3848  38 84 38 EC */	addi r4, r4, __ct__Q23Sys15MatLoopAnimatorFv@l
/* 802A690C 002A384C  38 C0 00 0C */	li r6, 0xc
/* 802A6910 002A3850  38 E0 00 02 */	li r7, 2
/* 802A6914 002A3854  4B E1 B0 DD */	bl __construct_new_array
/* 802A6918 002A3858  90 7F 04 94 */	stw r3, 0x494(r31)
/* 802A691C 002A385C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6920 002A3860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6924 002A3864  7C 08 03 A6 */	mtlr r0
/* 802A6928 002A3868  38 21 00 10 */	addi r1, r1, 0x10
/* 802A692C 002A386C  4E 80 00 20 */	blr 

.global startMaterialAnimation__Q34Game8Damagumo3ObjFv
startMaterialAnimation__Q34Game8Damagumo3ObjFv:
/* 802A6930 002A3870  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6934 002A3874  7C 08 02 A6 */	mflr r0
/* 802A6938 002A3878  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A693C 002A387C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A6940 002A3880  7C 7F 1B 78 */	mr r31, r3
/* 802A6944 002A3884  80 63 04 94 */	lwz r3, 0x494(r3)
/* 802A6948 002A3888  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 802A694C 002A388C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A6950 002A3890  80 84 00 44 */	lwz r4, 0x44(r4)
/* 802A6954 002A3894  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A6958 002A3898  7D 89 03 A6 */	mtctr r12
/* 802A695C 002A389C  4E 80 04 21 */	bctrl 
/* 802A6960 002A38A0  80 7F 04 94 */	lwz r3, 0x494(r31)
/* 802A6964 002A38A4  85 83 00 0C */	lwzu r12, 0xc(r3)
/* 802A6968 002A38A8  80 9F 01 80 */	lwz r4, 0x180(r31)
/* 802A696C 002A38AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A6970 002A38B0  80 84 00 48 */	lwz r4, 0x48(r4)
/* 802A6974 002A38B4  7D 89 03 A6 */	mtctr r12
/* 802A6978 002A38B8  4E 80 04 21 */	bctrl 
/* 802A697C 002A38BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6980 002A38C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6984 002A38C4  7C 08 03 A6 */	mtlr r0
/* 802A6988 002A38C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A698C 002A38CC  4E 80 00 20 */	blr 

.global updateMaterialAnimation__Q34Game8Damagumo3ObjFv
updateMaterialAnimation__Q34Game8Damagumo3ObjFv:
/* 802A6990 002A38D0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802A6994 002A38D4  7C 08 02 A6 */	mflr r0
/* 802A6998 002A38D8  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A699C 002A38DC  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802A69A0 002A38E0  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802A69A4 002A38E4  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 802A69A8 002A38E8  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 802A69AC 002A38EC  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 802A69B0 002A38F0  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 802A69B4 002A38F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A69B8 002A38F8  7C 7F 1B 78 */	mr r31, r3
/* 802A69BC 002A38FC  88 03 02 DC */	lbz r0, 0x2dc(r3)
/* 802A69C0 002A3900  28 00 00 00 */	cmplwi r0, 0
/* 802A69C4 002A3904  41 82 00 94 */	beq .L_802A6A58
/* 802A69C8 002A3908  80 9F 04 94 */	lwz r4, 0x494(r31)
/* 802A69CC 002A390C  80 64 00 10 */	lwz r3, 0x10(r4)
/* 802A69D0 002A3910  C3 C4 00 14 */	lfs f30, 0x14(r4)
/* 802A69D4 002A3914  28 03 00 00 */	cmplwi r3, 0
/* 802A69D8 002A3918  41 82 00 10 */	beq .L_802A69E8
/* 802A69DC 002A391C  48 18 D6 C9 */	bl getFrameMax__Q23Sys16MatBaseAnimationFv
/* 802A69E0 002A3920  FF E0 08 90 */	fmr f31, f1
/* 802A69E4 002A3924  48 00 00 08 */	b .L_802A69EC
.L_802A69E8:
/* 802A69E8 002A3928  C3 E2 DB 70 */	lfs f31, lbl_8051BED0@sda21(r2)
.L_802A69EC:
/* 802A69EC 002A392C  C0 02 DB E4 */	lfs f0, lbl_8051BF44@sda21(r2)
/* 802A69F0 002A3930  C0 42 DB 74 */	lfs f2, lbl_8051BED4@sda21(r2)
/* 802A69F4 002A3934  EC 1F 00 28 */	fsubs f0, f31, f0
/* 802A69F8 002A3938  80 7F 04 94 */	lwz r3, 0x494(r31)
/* 802A69FC 002A393C  C0 22 DB 70 */	lfs f1, lbl_8051BED0@sda21(r2)
/* 802A6A00 002A3940  EF A2 00 24 */	fdivs f29, f2, f0
/* 802A6A04 002A3944  48 18 DB 49 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 802A6A08 002A3948  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 802A6A0C 002A394C  40 80 00 18 */	bge .L_802A6A24
/* 802A6A10 002A3950  80 7F 04 94 */	lwz r3, 0x494(r31)
/* 802A6A14 002A3954  C0 22 DB 90 */	lfs f1, lbl_8051BEF0@sda21(r2)
/* 802A6A18 002A3958  38 63 00 0C */	addi r3, r3, 0xc
/* 802A6A1C 002A395C  48 18 DB 31 */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 802A6A20 002A3960  48 00 00 14 */	b .L_802A6A34
.L_802A6A24:
/* 802A6A24 002A3964  80 7F 04 94 */	lwz r3, 0x494(r31)
/* 802A6A28 002A3968  C0 22 DB 70 */	lfs f1, lbl_8051BED0@sda21(r2)
/* 802A6A2C 002A396C  38 63 00 0C */	addi r3, r3, 0xc
/* 802A6A30 002A3970  48 18 DB 1D */	bl animate__Q23Sys15MatBaseAnimatorFf
.L_802A6A34:
/* 802A6A34 002A3974  C0 3F 02 D8 */	lfs f1, 0x2d8(r31)
/* 802A6A38 002A3978  C0 02 DB 70 */	lfs f0, lbl_8051BED0@sda21(r2)
/* 802A6A3C 002A397C  EC 21 E8 28 */	fsubs f1, f1, f29
/* 802A6A40 002A3980  D0 3F 02 D8 */	stfs f1, 0x2d8(r31)
/* 802A6A44 002A3984  C0 3F 02 D8 */	lfs f1, 0x2d8(r31)
/* 802A6A48 002A3988  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A6A4C 002A398C  40 80 00 54 */	bge .L_802A6AA0
/* 802A6A50 002A3990  D0 1F 02 D8 */	stfs f0, 0x2d8(r31)
/* 802A6A54 002A3994  48 00 00 4C */	b .L_802A6AA0
.L_802A6A58:
/* 802A6A58 002A3998  80 7F 04 94 */	lwz r3, 0x494(r31)
/* 802A6A5C 002A399C  C0 22 DB 90 */	lfs f1, lbl_8051BEF0@sda21(r2)
/* 802A6A60 002A39A0  48 18 DA ED */	bl animate__Q23Sys15MatBaseAnimatorFf
/* 802A6A64 002A39A4  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A6A68 002A39A8  80 9F 04 94 */	lwz r4, 0x494(r31)
/* 802A6A6C 002A39AC  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 802A6A70 002A39B0  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 802A6A74 002A39B4  38 64 00 0C */	addi r3, r4, 0xc
/* 802A6A78 002A39B8  C0 42 DB 74 */	lfs f2, lbl_8051BED4@sda21(r2)
/* 802A6A7C 002A39BC  EC 01 00 24 */	fdivs f0, f1, f0
/* 802A6A80 002A39C0  C0 22 DB E4 */	lfs f1, lbl_8051BF44@sda21(r2)
/* 802A6A84 002A39C4  EC 02 00 28 */	fsubs f0, f2, f0
/* 802A6A88 002A39C8  EC 21 00 32 */	fmuls f1, f1, f0
/* 802A6A8C 002A39CC  48 18 D9 51 */	bl setCurrentFrame__Q23Sys15MatBaseAnimatorFf
/* 802A6A90 002A39D0  80 7F 04 94 */	lwz r3, 0x494(r31)
/* 802A6A94 002A39D4  C0 22 DB 70 */	lfs f1, lbl_8051BED0@sda21(r2)
/* 802A6A98 002A39D8  38 63 00 0C */	addi r3, r3, 0xc
/* 802A6A9C 002A39DC  48 18 DA B1 */	bl animate__Q23Sys15MatBaseAnimatorFf
.L_802A6AA0:
/* 802A6AA0 002A39E0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802A6AA4 002A39E4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802A6AA8 002A39E8  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 802A6AAC 002A39EC  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 802A6AB0 002A39F0  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 802A6AB4 002A39F4  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 802A6AB8 002A39F8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802A6ABC 002A39FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6AC0 002A3A00  7C 08 03 A6 */	mtlr r0
/* 802A6AC4 002A3A04  38 21 00 40 */	addi r1, r1, 0x40
/* 802A6AC8 002A3A08  4E 80 00 20 */	blr 

.global setupCollision__Q34Game8Damagumo3ObjFv
setupCollision__Q34Game8Damagumo3ObjFv:
/* 802A6ACC 002A3A0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802A6AD0 002A3A10  7C 08 02 A6 */	mflr r0
/* 802A6AD4 002A3A14  3C 80 80 49 */	lis r4, lbl_80489930@ha
/* 802A6AD8 002A3A18  90 01 00 34 */	stw r0, 0x34(r1)
/* 802A6ADC 002A3A1C  38 C4 99 30 */	addi r6, r4, lbl_80489930@l
/* 802A6AE0 002A3A20  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802A6AE4 002A3A24  3B E1 00 08 */	addi r31, r1, 8
/* 802A6AE8 002A3A28  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802A6AEC 002A3A2C  3B C0 00 00 */	li r30, 0
/* 802A6AF0 002A3A30  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802A6AF4 002A3A34  7C 7D 1B 78 */	mr r29, r3
/* 802A6AF8 002A3A38  80 A6 00 00 */	lwz r5, 0(r6)
/* 802A6AFC 002A3A3C  80 86 00 04 */	lwz r4, 4(r6)
/* 802A6B00 002A3A40  80 66 00 08 */	lwz r3, 8(r6)
/* 802A6B04 002A3A44  80 06 00 0C */	lwz r0, 0xc(r6)
/* 802A6B08 002A3A48  90 A1 00 08 */	stw r5, 8(r1)
/* 802A6B0C 002A3A4C  90 81 00 0C */	stw r4, 0xc(r1)
/* 802A6B10 002A3A50  90 61 00 10 */	stw r3, 0x10(r1)
/* 802A6B14 002A3A54  90 01 00 14 */	stw r0, 0x14(r1)
.L_802A6B18:
/* 802A6B18 002A3A58  80 7D 01 14 */	lwz r3, 0x114(r29)
/* 802A6B1C 002A3A5C  80 9F 00 00 */	lwz r4, 0(r31)
/* 802A6B20 002A3A60  4B E8 F3 25 */	bl getCollPart__8CollTreeFUl
/* 802A6B24 002A3A64  28 03 00 00 */	cmplwi r3, 0
/* 802A6B28 002A3A68  41 82 00 08 */	beq .L_802A6B30
/* 802A6B2C 002A3A6C  4B E9 08 71 */	bl makeTubeTree__8CollPartFv
.L_802A6B30:
/* 802A6B30 002A3A70  3B DE 00 01 */	addi r30, r30, 1
/* 802A6B34 002A3A74  3B FF 00 04 */	addi r31, r31, 4
/* 802A6B38 002A3A78  2C 1E 00 04 */	cmpwi r30, 4
/* 802A6B3C 002A3A7C  41 80 FF DC */	blt .L_802A6B18
/* 802A6B40 002A3A80  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802A6B44 002A3A84  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802A6B48 002A3A88  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802A6B4C 002A3A8C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802A6B50 002A3A90  7C 08 03 A6 */	mtlr r0
/* 802A6B54 002A3A94  38 21 00 30 */	addi r1, r1, 0x30
/* 802A6B58 002A3A98  4E 80 00 20 */	blr 

.global createItemAndEnemy__Q34Game8Damagumo3ObjFv
createItemAndEnemy__Q34Game8Damagumo3ObjFv:
/* 802A6B5C 002A3A9C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802A6B60 002A3AA0  7C 08 02 A6 */	mflr r0
/* 802A6B64 002A3AA4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802A6B68 002A3AA8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802A6B6C 002A3AAC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802A6B70 002A3AB0  7C 7E 1B 78 */	mr r30, r3
/* 802A6B74 002A3AB4  38 7E 02 50 */	addi r3, r30, 0x250
/* 802A6B78 002A3AB8  4B EC 6D 11 */	bl isNull__Q34Game9PelletMgr15OtakaraItemCodeFv
/* 802A6B7C 002A3ABC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A6B80 002A3AC0  41 82 00 50 */	beq .L_802A6BD0
/* 802A6B84 002A3AC4  80 6D 91 E0 */	lwz r3, generalEnemyMgr__4Game@sda21(r13)
/* 802A6B88 002A3AC8  38 80 00 4D */	li r4, 0x4d
/* 802A6B8C 002A3ACC  4B E6 71 19 */	bl getEnemyMgr__Q24Game15GeneralEnemyMgrFi
/* 802A6B90 002A3AD0  7C 7F 1B 79 */	or. r31, r3, r3
/* 802A6B94 002A3AD4  41 82 00 3C */	beq .L_802A6BD0
/* 802A6B98 002A3AD8  38 61 00 08 */	addi r3, r1, 8
/* 802A6B9C 002A3ADC  4B E8 80 89 */	bl __ct__Q24Game13EnemyBirthArgFv
/* 802A6BA0 002A3AE0  C0 1E 01 FC */	lfs f0, 0x1fc(r30)
/* 802A6BA4 002A3AE4  7F C3 F3 78 */	mr r3, r30
/* 802A6BA8 002A3AE8  38 81 00 08 */	addi r4, r1, 8
/* 802A6BAC 002A3AEC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802A6BB0 002A3AF0  81 9E 00 00 */	lwz r12, 0(r30)
/* 802A6BB4 002A3AF4  81 8C 02 68 */	lwz r12, 0x268(r12)
/* 802A6BB8 002A3AF8  7D 89 03 A6 */	mtctr r12
/* 802A6BBC 002A3AFC  4E 80 04 21 */	bctrl 
/* 802A6BC0 002A3B00  7F E3 FB 78 */	mr r3, r31
/* 802A6BC4 002A3B04  38 81 00 08 */	addi r4, r1, 8
/* 802A6BC8 002A3B08  38 A0 00 19 */	li r5, 0x19
/* 802A6BCC 002A3B0C  48 0E 25 35 */	bl createGroupByBigFoot__Q34Game11ShijimiChou3MgrFRQ24Game13EnemyBirthArgi
.L_802A6BD0:
/* 802A6BD0 002A3B10  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802A6BD4 002A3B14  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802A6BD8 002A3B18  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802A6BDC 002A3B1C  7C 08 03 A6 */	mtlr r0
/* 802A6BE0 002A3B20  38 21 00 50 */	addi r1, r1, 0x50
/* 802A6BE4 002A3B24  4E 80 00 20 */	blr 

.global startBossFlickBGM__Q34Game8Damagumo3ObjFv
startBossFlickBGM__Q34Game8Damagumo3ObjFv:
/* 802A6BE8 002A3B28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6BEC 002A3B2C  7C 08 02 A6 */	mflr r0
/* 802A6BF0 002A3B30  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6BF4 002A3B34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A6BF8 002A3B38  3B E0 00 00 */	li r31, 0
/* 802A6BFC 002A3B3C  93 C1 00 08 */	stw r30, 8(r1)
/* 802A6C00 002A3B40  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802A6C04 002A3B44  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6C08 002A3B48  7F C3 F3 78 */	mr r3, r30
/* 802A6C0C 002A3B4C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6C10 002A3B50  7D 89 03 A6 */	mtctr r12
/* 802A6C14 002A3B54  4E 80 04 21 */	bctrl 
/* 802A6C18 002A3B58  2C 03 00 05 */	cmpwi r3, 5
/* 802A6C1C 002A3B5C  41 82 00 3C */	beq .L_802A6C58
/* 802A6C20 002A3B60  7F C3 F3 78 */	mr r3, r30
/* 802A6C24 002A3B64  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6C28 002A3B68  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6C2C 002A3B6C  7D 89 03 A6 */	mtctr r12
/* 802A6C30 002A3B70  4E 80 04 21 */	bctrl 
/* 802A6C34 002A3B74  2C 03 00 06 */	cmpwi r3, 6
/* 802A6C38 002A3B78  41 82 00 20 */	beq .L_802A6C58
/* 802A6C3C 002A3B7C  7F C3 F3 78 */	mr r3, r30
/* 802A6C40 002A3B80  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6C44 002A3B84  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6C48 002A3B88  7D 89 03 A6 */	mtctr r12
/* 802A6C4C 002A3B8C  4E 80 04 21 */	bctrl 
/* 802A6C50 002A3B90  2C 03 00 07 */	cmpwi r3, 7
/* 802A6C54 002A3B94  40 82 00 08 */	bne .L_802A6C5C
.L_802A6C58:
/* 802A6C58 002A3B98  3B E0 00 01 */	li r31, 1
.L_802A6C5C:
/* 802A6C5C 002A3B9C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802A6C60 002A3BA0  40 82 00 20 */	bne .L_802A6C80
/* 802A6C64 002A3BA4  3C 60 80 49 */	lis r3, lbl_80489940@ha
/* 802A6C68 002A3BA8  3C A0 80 49 */	lis r5, lbl_80489958@ha
/* 802A6C6C 002A3BAC  38 63 99 40 */	addi r3, r3, lbl_80489940@l
/* 802A6C70 002A3BB0  38 80 04 54 */	li r4, 0x454
/* 802A6C74 002A3BB4  38 A5 99 58 */	addi r5, r5, lbl_80489958@l
/* 802A6C78 002A3BB8  4C C6 31 82 */	crclr 6
/* 802A6C7C 002A3BBC  4B D8 39 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802A6C80:
/* 802A6C80 002A3BC0  7F C3 F3 78 */	mr r3, r30
/* 802A6C84 002A3BC4  38 80 00 04 */	li r4, 4
/* 802A6C88 002A3BC8  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6C8C 002A3BCC  81 8C 00 D4 */	lwz r12, 0xd4(r12)
/* 802A6C90 002A3BD0  7D 89 03 A6 */	mtctr r12
/* 802A6C94 002A3BD4  4E 80 04 21 */	bctrl 
/* 802A6C98 002A3BD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6C9C 002A3BDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6CA0 002A3BE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A6CA4 002A3BE4  7C 08 03 A6 */	mtlr r0
/* 802A6CA8 002A3BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6CAC 002A3BEC  4E 80 00 20 */	blr 

.global updateBossBGM__Q34Game8Damagumo3ObjFv
updateBossBGM__Q34Game8Damagumo3ObjFv:
/* 802A6CB0 002A3BF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A6CB4 002A3BF4  7C 08 02 A6 */	mflr r0
/* 802A6CB8 002A3BF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A6CBC 002A3BFC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802A6CC0 002A3C00  3B E0 00 00 */	li r31, 0
/* 802A6CC4 002A3C04  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802A6CC8 002A3C08  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802A6CCC 002A3C0C  7C 7D 1B 78 */	mr r29, r3
/* 802A6CD0 002A3C10  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802A6CD4 002A3C14  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6CD8 002A3C18  7F C3 F3 78 */	mr r3, r30
/* 802A6CDC 002A3C1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6CE0 002A3C20  7D 89 03 A6 */	mtctr r12
/* 802A6CE4 002A3C24  4E 80 04 21 */	bctrl 
/* 802A6CE8 002A3C28  2C 03 00 05 */	cmpwi r3, 5
/* 802A6CEC 002A3C2C  41 82 00 3C */	beq .L_802A6D28
/* 802A6CF0 002A3C30  7F C3 F3 78 */	mr r3, r30
/* 802A6CF4 002A3C34  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6CF8 002A3C38  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6CFC 002A3C3C  7D 89 03 A6 */	mtctr r12
/* 802A6D00 002A3C40  4E 80 04 21 */	bctrl 
/* 802A6D04 002A3C44  2C 03 00 06 */	cmpwi r3, 6
/* 802A6D08 002A3C48  41 82 00 20 */	beq .L_802A6D28
/* 802A6D0C 002A3C4C  7F C3 F3 78 */	mr r3, r30
/* 802A6D10 002A3C50  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6D14 002A3C54  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6D18 002A3C58  7D 89 03 A6 */	mtctr r12
/* 802A6D1C 002A3C5C  4E 80 04 21 */	bctrl 
/* 802A6D20 002A3C60  2C 03 00 07 */	cmpwi r3, 7
/* 802A6D24 002A3C64  40 82 00 08 */	bne .L_802A6D2C
.L_802A6D28:
/* 802A6D28 002A3C68  3B E0 00 01 */	li r31, 1
.L_802A6D2C:
/* 802A6D2C 002A3C6C  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802A6D30 002A3C70  40 82 00 20 */	bne .L_802A6D50
/* 802A6D34 002A3C74  3C 60 80 49 */	lis r3, lbl_80489940@ha
/* 802A6D38 002A3C78  3C A0 80 49 */	lis r5, lbl_80489958@ha
/* 802A6D3C 002A3C7C  38 63 99 40 */	addi r3, r3, lbl_80489940@l
/* 802A6D40 002A3C80  38 80 04 54 */	li r4, 0x454
/* 802A6D44 002A3C84  38 A5 99 58 */	addi r5, r5, lbl_80489958@l
/* 802A6D48 002A3C88  4C C6 31 82 */	crclr 6
/* 802A6D4C 002A3C8C  4B D8 38 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802A6D50:
/* 802A6D50 002A3C90  80 1D 01 F4 */	lwz r0, 0x1f4(r29)
/* 802A6D54 002A3C94  2C 00 00 00 */	cmpwi r0, 0
/* 802A6D58 002A3C98  41 82 00 20 */	beq .L_802A6D78
/* 802A6D5C 002A3C9C  7F C3 F3 78 */	mr r3, r30
/* 802A6D60 002A3CA0  38 80 00 01 */	li r4, 1
/* 802A6D64 002A3CA4  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6D68 002A3CA8  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802A6D6C 002A3CAC  7D 89 03 A6 */	mtctr r12
/* 802A6D70 002A3CB0  4E 80 04 21 */	bctrl 
/* 802A6D74 002A3CB4  48 00 00 1C */	b .L_802A6D90
.L_802A6D78:
/* 802A6D78 002A3CB8  7F C3 F3 78 */	mr r3, r30
/* 802A6D7C 002A3CBC  38 80 00 00 */	li r4, 0
/* 802A6D80 002A3CC0  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6D84 002A3CC4  81 8C 00 D8 */	lwz r12, 0xd8(r12)
/* 802A6D88 002A3CC8  7D 89 03 A6 */	mtctr r12
/* 802A6D8C 002A3CCC  4E 80 04 21 */	bctrl 
.L_802A6D90:
/* 802A6D90 002A3CD0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A6D94 002A3CD4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802A6D98 002A3CD8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802A6D9C 002A3CDC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802A6DA0 002A3CE0  7C 08 03 A6 */	mtlr r0
/* 802A6DA4 002A3CE4  38 21 00 20 */	addi r1, r1, 0x20
/* 802A6DA8 002A3CE8  4E 80 00 20 */	blr 

.global resetBossAppearBGM__Q34Game8Damagumo3ObjFv
resetBossAppearBGM__Q34Game8Damagumo3ObjFv:
/* 802A6DAC 002A3CEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6DB0 002A3CF0  7C 08 02 A6 */	mflr r0
/* 802A6DB4 002A3CF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6DB8 002A3CF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A6DBC 002A3CFC  3B E0 00 00 */	li r31, 0
/* 802A6DC0 002A3D00  93 C1 00 08 */	stw r30, 8(r1)
/* 802A6DC4 002A3D04  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802A6DC8 002A3D08  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6DCC 002A3D0C  7F C3 F3 78 */	mr r3, r30
/* 802A6DD0 002A3D10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6DD4 002A3D14  7D 89 03 A6 */	mtctr r12
/* 802A6DD8 002A3D18  4E 80 04 21 */	bctrl 
/* 802A6DDC 002A3D1C  2C 03 00 05 */	cmpwi r3, 5
/* 802A6DE0 002A3D20  41 82 00 3C */	beq .L_802A6E1C
/* 802A6DE4 002A3D24  7F C3 F3 78 */	mr r3, r30
/* 802A6DE8 002A3D28  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6DEC 002A3D2C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6DF0 002A3D30  7D 89 03 A6 */	mtctr r12
/* 802A6DF4 002A3D34  4E 80 04 21 */	bctrl 
/* 802A6DF8 002A3D38  2C 03 00 06 */	cmpwi r3, 6
/* 802A6DFC 002A3D3C  41 82 00 20 */	beq .L_802A6E1C
/* 802A6E00 002A3D40  7F C3 F3 78 */	mr r3, r30
/* 802A6E04 002A3D44  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6E08 002A3D48  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6E0C 002A3D4C  7D 89 03 A6 */	mtctr r12
/* 802A6E10 002A3D50  4E 80 04 21 */	bctrl 
/* 802A6E14 002A3D54  2C 03 00 07 */	cmpwi r3, 7
/* 802A6E18 002A3D58  40 82 00 08 */	bne .L_802A6E20
.L_802A6E1C:
/* 802A6E1C 002A3D5C  3B E0 00 01 */	li r31, 1
.L_802A6E20:
/* 802A6E20 002A3D60  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802A6E24 002A3D64  40 82 00 20 */	bne .L_802A6E44
/* 802A6E28 002A3D68  3C 60 80 49 */	lis r3, lbl_80489940@ha
/* 802A6E2C 002A3D6C  3C A0 80 49 */	lis r5, lbl_80489958@ha
/* 802A6E30 002A3D70  38 63 99 40 */	addi r3, r3, lbl_80489940@l
/* 802A6E34 002A3D74  38 80 04 54 */	li r4, 0x454
/* 802A6E38 002A3D78  38 A5 99 58 */	addi r5, r5, lbl_80489958@l
/* 802A6E3C 002A3D7C  4C C6 31 82 */	crclr 6
/* 802A6E40 002A3D80  4B D8 38 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_802A6E44:
/* 802A6E44 002A3D84  7F C3 F3 78 */	mr r3, r30
/* 802A6E48 002A3D88  38 80 00 00 */	li r4, 0
/* 802A6E4C 002A3D8C  48 1B 8B A5 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802A6E50 002A3D90  38 00 00 01 */	li r0, 1
/* 802A6E54 002A3D94  98 1E 00 FF */	stb r0, 0xff(r30)
/* 802A6E58 002A3D98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6E5C 002A3D9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6E60 002A3DA0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A6E64 002A3DA4  7C 08 03 A6 */	mtlr r0
/* 802A6E68 002A3DA8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6E6C 002A3DAC  4E 80 00 20 */	blr 

.global setBossAppearBGM__Q34Game8Damagumo3ObjFv
setBossAppearBGM__Q34Game8Damagumo3ObjFv:
/* 802A6E70 002A3DB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A6E74 002A3DB4  7C 08 02 A6 */	mflr r0
/* 802A6E78 002A3DB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A6E7C 002A3DBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A6E80 002A3DC0  3B E0 00 00 */	li r31, 0
/* 802A6E84 002A3DC4  93 C1 00 08 */	stw r30, 8(r1)
/* 802A6E88 002A3DC8  83 C3 02 8C */	lwz r30, 0x28c(r3)
/* 802A6E8C 002A3DCC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6E90 002A3DD0  7F C3 F3 78 */	mr r3, r30
/* 802A6E94 002A3DD4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6E98 002A3DD8  7D 89 03 A6 */	mtctr r12
/* 802A6E9C 002A3DDC  4E 80 04 21 */	bctrl 
/* 802A6EA0 002A3DE0  2C 03 00 05 */	cmpwi r3, 5
/* 802A6EA4 002A3DE4  41 82 00 3C */	beq .L_802A6EE0
/* 802A6EA8 002A3DE8  7F C3 F3 78 */	mr r3, r30
/* 802A6EAC 002A3DEC  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6EB0 002A3DF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6EB4 002A3DF4  7D 89 03 A6 */	mtctr r12
/* 802A6EB8 002A3DF8  4E 80 04 21 */	bctrl 
/* 802A6EBC 002A3DFC  2C 03 00 06 */	cmpwi r3, 6
/* 802A6EC0 002A3E00  41 82 00 20 */	beq .L_802A6EE0
/* 802A6EC4 002A3E04  7F C3 F3 78 */	mr r3, r30
/* 802A6EC8 002A3E08  81 9E 00 28 */	lwz r12, 0x28(r30)
/* 802A6ECC 002A3E0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802A6ED0 002A3E10  7D 89 03 A6 */	mtctr r12
/* 802A6ED4 002A3E14  4E 80 04 21 */	bctrl 
/* 802A6ED8 002A3E18  2C 03 00 07 */	cmpwi r3, 7
/* 802A6EDC 002A3E1C  40 82 00 08 */	bne .L_802A6EE4
.L_802A6EE0:
/* 802A6EE0 002A3E20  3B E0 00 01 */	li r31, 1
.L_802A6EE4:
/* 802A6EE4 002A3E24  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802A6EE8 002A3E28  40 82 00 20 */	bne .L_802A6F08
/* 802A6EEC 002A3E2C  3C 60 80 49 */	lis r3, lbl_80489940@ha
/* 802A6EF0 002A3E30  3C A0 80 49 */	lis r5, lbl_80489958@ha
/* 802A6EF4 002A3E34  38 63 99 40 */	addi r3, r3, lbl_80489940@l
/* 802A6EF8 002A3E38  38 80 04 54 */	li r4, 0x454
/* 802A6EFC 002A3E3C  38 A5 99 58 */	addi r5, r5, lbl_80489958@l
/* 802A6F00 002A3E40  4C C6 31 82 */	crclr 6
/* 802A6F04 002A3E44  4B D8 37 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_802A6F08:
/* 802A6F08 002A3E48  7F C3 F3 78 */	mr r3, r30
/* 802A6F0C 002A3E4C  38 80 00 01 */	li r4, 1
/* 802A6F10 002A3E50  48 1B 8A E1 */	bl setAppearFlag__Q23PSM9EnemyBossFb
/* 802A6F14 002A3E54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A6F18 002A3E58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A6F1C 002A3E5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A6F20 002A3E60  7C 08 03 A6 */	mtlr r0
/* 802A6F24 002A3E64  38 21 00 10 */	addi r1, r1, 0x10
/* 802A6F28 002A3E68  4E 80 00 20 */	blr 

.global createEffect__Q34Game8Damagumo3ObjFv
createEffect__Q34Game8Damagumo3ObjFv:
/* 802A6F2C 002A3E6C  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802A6F30 002A3E70  7C 08 02 A6 */	mflr r0
/* 802A6F34 002A3E74  3D 60 80 4E */	lis r11, __vt__Q23efx5TSync@ha
/* 802A6F38 002A3E78  3D 40 80 4E */	lis r10, __vt__Q23efx9TChasePos@ha
/* 802A6F3C 002A3E7C  90 01 00 54 */	stw r0, 0x54(r1)
/* 802A6F40 002A3E80  3D 20 80 4D */	lis r9, __vt__Q23efx10TDamaFootw@ha
/* 802A6F44 002A3E84  3D 00 80 4E */	lis r8, __vt__Q23efx12TChasePosPos@ha
/* 802A6F48 002A3E88  3C E0 80 4D */	lis r7, __vt__Q23efx10TDamaHahen@ha
/* 802A6F4C 002A3E8C  BE 01 00 10 */	stmw r16, 0x10(r1)
/* 802A6F50 002A3E90  7C 7F 1B 78 */	mr r31, r3
/* 802A6F54 002A3E94  3C C0 80 4D */	lis r6, __vt__Q23efx14TDamaDeadElecA@ha
/* 802A6F58 002A3E98  3C A0 80 4D */	lis r5, __vt__Q23efx14TDamaDeadElecB@ha
/* 802A6F5C 002A3E9C  3C 80 80 4D */	lis r4, __vt__Q23efx15TDamaDeadHahenA@ha
/* 802A6F60 002A3EA0  3C 60 80 4D */	lis r3, __vt__Q23efx15TDamaDeadHahenB@ha
/* 802A6F64 002A3EA4  39 6B 69 8C */	addi r11, r11, __vt__Q23efx5TSync@l
/* 802A6F68 002A3EA8  39 4A 69 40 */	addi r10, r10, __vt__Q23efx9TChasePos@l
/* 802A6F6C 002A3EAC  39 29 DA F8 */	addi r9, r9, __vt__Q23efx10TDamaFootw@l
/* 802A6F70 002A3EB0  39 08 68 10 */	addi r8, r8, __vt__Q23efx12TChasePosPos@l
/* 802A6F74 002A3EB4  38 E7 DA AC */	addi r7, r7, __vt__Q23efx10TDamaHahen@l
/* 802A6F78 002A3EB8  38 C6 DA 60 */	addi r6, r6, __vt__Q23efx14TDamaDeadElecA@l
/* 802A6F7C 002A3EBC  38 A5 DA 14 */	addi r5, r5, __vt__Q23efx14TDamaDeadElecB@l
/* 802A6F80 002A3EC0  38 84 D9 C8 */	addi r4, r4, __vt__Q23efx15TDamaDeadHahenA@l
/* 802A6F84 002A3EC4  38 63 D9 7C */	addi r3, r3, __vt__Q23efx15TDamaDeadHahenB@l
/* 802A6F88 002A3EC8  7F FD FB 78 */	mr r29, r31
/* 802A6F8C 002A3ECC  7F FC FB 78 */	mr r28, r31
/* 802A6F90 002A3ED0  7F FB FB 78 */	mr r27, r31
/* 802A6F94 002A3ED4  3A 6B 00 14 */	addi r19, r11, 0x14
/* 802A6F98 002A3ED8  3A 4A 00 14 */	addi r18, r10, 0x14
/* 802A6F9C 002A3EDC  3B 49 00 14 */	addi r26, r9, 0x14
/* 802A6FA0 002A3EE0  3B 28 00 14 */	addi r25, r8, 0x14
/* 802A6FA4 002A3EE4  3B 07 00 14 */	addi r24, r7, 0x14
/* 802A6FA8 002A3EE8  3A E6 00 14 */	addi r23, r6, 0x14
/* 802A6FAC 002A3EEC  3A C5 00 14 */	addi r22, r5, 0x14
/* 802A6FB0 002A3EF0  3A A4 00 14 */	addi r21, r4, 0x14
/* 802A6FB4 002A3EF4  3A 83 00 14 */	addi r20, r3, 0x14
/* 802A6FB8 002A3EF8  3A 20 00 00 */	li r17, 0
.L_802A6FBC:
/* 802A6FBC 002A3EFC  38 60 00 2C */	li r3, 0x2c
/* 802A6FC0 002A3F00  4B D7 CE E5 */	bl __nw__FUl
/* 802A6FC4 002A3F04  7C 70 1B 79 */	or. r16, r3, r3
/* 802A6FC8 002A3F08  41 82 00 20 */	beq .L_802A6FE8
/* 802A6FCC 002A3F0C  38 80 00 00 */	li r4, 0
/* 802A6FD0 002A3F10  38 A0 00 24 */	li r5, 0x24
/* 802A6FD4 002A3F14  38 C0 00 25 */	li r6, 0x25
/* 802A6FD8 002A3F18  48 10 92 69 */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 802A6FDC 002A3F1C  3C 60 80 4D */	lis r3, __vt__Q23efx9TDamaFoot@ha
/* 802A6FE0 002A3F20  38 03 DB 44 */	addi r0, r3, __vt__Q23efx9TDamaFoot@l
/* 802A6FE4 002A3F24  90 10 00 00 */	stw r0, 0(r16)
.L_802A6FE8:
/* 802A6FE8 002A3F28  92 1D 03 B0 */	stw r16, 0x3b0(r29)
/* 802A6FEC 002A3F2C  38 60 00 14 */	li r3, 0x14
/* 802A6FF0 002A3F30  4B D7 CE B5 */	bl __nw__FUl
/* 802A6FF4 002A3F34  28 03 00 00 */	cmplwi r3, 0
/* 802A6FF8 002A3F38  41 82 00 6C */	beq .L_802A7064
/* 802A6FFC 002A3F3C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A7000 002A3F40  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A7004 002A3F44  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A7008 002A3F48  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A700C 002A3F4C  90 03 00 00 */	stw r0, 0(r3)
/* 802A7010 002A3F50  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A7014 002A3F54  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802A7018 002A3F58  3C 80 80 4D */	lis r4, __vt__Q23efx10TDamaFootw@ha
/* 802A701C 002A3F5C  90 03 00 04 */	stw r0, 4(r3)
/* 802A7020 002A3F60  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A7024 002A3F64  39 00 00 00 */	li r8, 0
/* 802A7028 002A3F68  38 E0 02 B2 */	li r7, 0x2b2
/* 802A702C 002A3F6C  90 03 00 00 */	stw r0, 0(r3)
/* 802A7030 002A3F70  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802A7034 002A3F74  38 A0 00 23 */	li r5, 0x23
/* 802A7038 002A3F78  38 04 DA F8 */	addi r0, r4, __vt__Q23efx10TDamaFootw@l
/* 802A703C 002A3F7C  92 63 00 04 */	stw r19, 4(r3)
/* 802A7040 002A3F80  91 03 00 08 */	stw r8, 8(r3)
/* 802A7044 002A3F84  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802A7048 002A3F88  99 03 00 0E */	stb r8, 0xe(r3)
/* 802A704C 002A3F8C  90 C3 00 00 */	stw r6, 0(r3)
/* 802A7050 002A3F90  92 43 00 04 */	stw r18, 4(r3)
/* 802A7054 002A3F94  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A7058 002A3F98  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A705C 002A3F9C  90 03 00 00 */	stw r0, 0(r3)
/* 802A7060 002A3FA0  93 43 00 04 */	stw r26, 4(r3)
.L_802A7064:
/* 802A7064 002A3FA4  90 7D 03 C0 */	stw r3, 0x3c0(r29)
/* 802A7068 002A3FA8  7F 9E E3 78 */	mr r30, r28
/* 802A706C 002A3FAC  3A 00 00 00 */	li r16, 0
.L_802A7070:
/* 802A7070 002A3FB0  38 60 00 18 */	li r3, 0x18
/* 802A7074 002A3FB4  4B D7 CE 31 */	bl __nw__FUl
/* 802A7078 002A3FB8  28 03 00 00 */	cmplwi r3, 0
/* 802A707C 002A3FBC  41 82 00 70 */	beq .L_802A70EC
/* 802A7080 002A3FC0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A7084 002A3FC4  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A7088 002A3FC8  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A708C 002A3FCC  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A7090 002A3FD0  90 03 00 00 */	stw r0, 0(r3)
/* 802A7094 002A3FD4  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A7098 002A3FD8  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802A709C 002A3FDC  3C 80 80 4D */	lis r4, __vt__Q23efx10TDamaHahen@ha
/* 802A70A0 002A3FE0  90 03 00 04 */	stw r0, 4(r3)
/* 802A70A4 002A3FE4  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A70A8 002A3FE8  39 00 00 00 */	li r8, 0
/* 802A70AC 002A3FEC  38 E0 02 B2 */	li r7, 0x2b2
/* 802A70B0 002A3FF0  90 03 00 00 */	stw r0, 0(r3)
/* 802A70B4 002A3FF4  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802A70B8 002A3FF8  38 A0 00 26 */	li r5, 0x26
/* 802A70BC 002A3FFC  38 04 DA AC */	addi r0, r4, __vt__Q23efx10TDamaHahen@l
/* 802A70C0 002A4000  92 63 00 04 */	stw r19, 4(r3)
/* 802A70C4 002A4004  91 03 00 08 */	stw r8, 8(r3)
/* 802A70C8 002A4008  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802A70CC 002A400C  99 03 00 0E */	stb r8, 0xe(r3)
/* 802A70D0 002A4010  90 C3 00 00 */	stw r6, 0(r3)
/* 802A70D4 002A4014  93 23 00 04 */	stw r25, 4(r3)
/* 802A70D8 002A4018  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A70DC 002A401C  91 03 00 14 */	stw r8, 0x14(r3)
/* 802A70E0 002A4020  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A70E4 002A4024  90 03 00 00 */	stw r0, 0(r3)
/* 802A70E8 002A4028  93 03 00 04 */	stw r24, 4(r3)
.L_802A70EC:
/* 802A70EC 002A402C  90 7E 03 DC */	stw r3, 0x3dc(r30)
/* 802A70F0 002A4030  38 60 00 18 */	li r3, 0x18
/* 802A70F4 002A4034  4B D7 CD B1 */	bl __nw__FUl
/* 802A70F8 002A4038  28 03 00 00 */	cmplwi r3, 0
/* 802A70FC 002A403C  41 82 00 70 */	beq .L_802A716C
/* 802A7100 002A4040  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A7104 002A4044  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A7108 002A4048  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A710C 002A404C  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A7110 002A4050  90 03 00 00 */	stw r0, 0(r3)
/* 802A7114 002A4054  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A7118 002A4058  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802A711C 002A405C  3C 80 80 4D */	lis r4, __vt__Q23efx14TDamaDeadElecA@ha
/* 802A7120 002A4060  90 03 00 04 */	stw r0, 4(r3)
/* 802A7124 002A4064  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A7128 002A4068  39 00 00 00 */	li r8, 0
/* 802A712C 002A406C  38 E0 02 B2 */	li r7, 0x2b2
/* 802A7130 002A4070  90 03 00 00 */	stw r0, 0(r3)
/* 802A7134 002A4074  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802A7138 002A4078  38 A0 00 1D */	li r5, 0x1d
/* 802A713C 002A407C  38 04 DA 60 */	addi r0, r4, __vt__Q23efx14TDamaDeadElecA@l
/* 802A7140 002A4080  92 63 00 04 */	stw r19, 4(r3)
/* 802A7144 002A4084  91 03 00 08 */	stw r8, 8(r3)
/* 802A7148 002A4088  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802A714C 002A408C  99 03 00 0E */	stb r8, 0xe(r3)
/* 802A7150 002A4090  90 C3 00 00 */	stw r6, 0(r3)
/* 802A7154 002A4094  93 23 00 04 */	stw r25, 4(r3)
/* 802A7158 002A4098  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A715C 002A409C  91 03 00 14 */	stw r8, 0x14(r3)
/* 802A7160 002A40A0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A7164 002A40A4  90 03 00 00 */	stw r0, 0(r3)
/* 802A7168 002A40A8  92 E3 00 04 */	stw r23, 4(r3)
.L_802A716C:
/* 802A716C 002A40AC  3A 10 00 01 */	addi r16, r16, 1
/* 802A7170 002A40B0  90 7E 04 0C */	stw r3, 0x40c(r30)
/* 802A7174 002A40B4  2C 10 00 03 */	cmpwi r16, 3
/* 802A7178 002A40B8  3B DE 00 04 */	addi r30, r30, 4
/* 802A717C 002A40BC  41 80 FE F4 */	blt .L_802A7070
/* 802A7180 002A40C0  3A 00 00 00 */	li r16, 0
/* 802A7184 002A40C4  7F 7E DB 78 */	mr r30, r27
.L_802A7188:
/* 802A7188 002A40C8  38 60 00 14 */	li r3, 0x14
/* 802A718C 002A40CC  4B D7 CD 19 */	bl __nw__FUl
/* 802A7190 002A40D0  28 03 00 00 */	cmplwi r3, 0
/* 802A7194 002A40D4  41 82 00 6C */	beq .L_802A7200
/* 802A7198 002A40D8  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A719C 002A40DC  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A71A0 002A40E0  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A71A4 002A40E4  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A71A8 002A40E8  90 03 00 00 */	stw r0, 0(r3)
/* 802A71AC 002A40EC  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A71B0 002A40F0  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802A71B4 002A40F4  3C 80 80 4D */	lis r4, __vt__Q23efx14TDamaDeadElecB@ha
/* 802A71B8 002A40F8  90 03 00 04 */	stw r0, 4(r3)
/* 802A71BC 002A40FC  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A71C0 002A4100  39 00 00 00 */	li r8, 0
/* 802A71C4 002A4104  38 E0 02 B2 */	li r7, 0x2b2
/* 802A71C8 002A4108  90 03 00 00 */	stw r0, 0(r3)
/* 802A71CC 002A410C  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802A71D0 002A4110  38 A0 00 1E */	li r5, 0x1e
/* 802A71D4 002A4114  38 04 DA 14 */	addi r0, r4, __vt__Q23efx14TDamaDeadElecB@l
/* 802A71D8 002A4118  92 63 00 04 */	stw r19, 4(r3)
/* 802A71DC 002A411C  91 03 00 08 */	stw r8, 8(r3)
/* 802A71E0 002A4120  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802A71E4 002A4124  99 03 00 0E */	stb r8, 0xe(r3)
/* 802A71E8 002A4128  90 C3 00 00 */	stw r6, 0(r3)
/* 802A71EC 002A412C  92 43 00 04 */	stw r18, 4(r3)
/* 802A71F0 002A4130  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A71F4 002A4134  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A71F8 002A4138  90 03 00 00 */	stw r0, 0(r3)
/* 802A71FC 002A413C  92 C3 00 04 */	stw r22, 4(r3)
.L_802A7200:
/* 802A7200 002A4140  90 7E 04 3C */	stw r3, 0x43c(r30)
/* 802A7204 002A4144  38 60 00 18 */	li r3, 0x18
/* 802A7208 002A4148  4B D7 CC 9D */	bl __nw__FUl
/* 802A720C 002A414C  28 03 00 00 */	cmplwi r3, 0
/* 802A7210 002A4150  41 82 00 70 */	beq .L_802A7280
/* 802A7214 002A4154  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A7218 002A4158  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A721C 002A415C  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A7220 002A4160  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A7224 002A4164  90 03 00 00 */	stw r0, 0(r3)
/* 802A7228 002A4168  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A722C 002A416C  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802A7230 002A4170  3C 80 80 4D */	lis r4, __vt__Q23efx15TDamaDeadHahenA@ha
/* 802A7234 002A4174  90 03 00 04 */	stw r0, 4(r3)
/* 802A7238 002A4178  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A723C 002A417C  39 00 00 00 */	li r8, 0
/* 802A7240 002A4180  38 E0 02 B2 */	li r7, 0x2b2
/* 802A7244 002A4184  90 03 00 00 */	stw r0, 0(r3)
/* 802A7248 002A4188  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802A724C 002A418C  38 A0 00 1F */	li r5, 0x1f
/* 802A7250 002A4190  38 04 D9 C8 */	addi r0, r4, __vt__Q23efx15TDamaDeadHahenA@l
/* 802A7254 002A4194  92 63 00 04 */	stw r19, 4(r3)
/* 802A7258 002A4198  91 03 00 08 */	stw r8, 8(r3)
/* 802A725C 002A419C  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802A7260 002A41A0  99 03 00 0E */	stb r8, 0xe(r3)
/* 802A7264 002A41A4  90 C3 00 00 */	stw r6, 0(r3)
/* 802A7268 002A41A8  93 23 00 04 */	stw r25, 4(r3)
/* 802A726C 002A41AC  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A7270 002A41B0  91 03 00 14 */	stw r8, 0x14(r3)
/* 802A7274 002A41B4  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A7278 002A41B8  90 03 00 00 */	stw r0, 0(r3)
/* 802A727C 002A41BC  92 A3 00 04 */	stw r21, 4(r3)
.L_802A7280:
/* 802A7280 002A41C0  3A 10 00 01 */	addi r16, r16, 1
/* 802A7284 002A41C4  90 7E 04 5C */	stw r3, 0x45c(r30)
/* 802A7288 002A41C8  2C 10 00 02 */	cmpwi r16, 2
/* 802A728C 002A41CC  3B DE 00 04 */	addi r30, r30, 4
/* 802A7290 002A41D0  41 80 FE F8 */	blt .L_802A7188
/* 802A7294 002A41D4  38 60 00 18 */	li r3, 0x18
/* 802A7298 002A41D8  4B D7 CC 0D */	bl __nw__FUl
/* 802A729C 002A41DC  28 03 00 00 */	cmplwi r3, 0
/* 802A72A0 002A41E0  41 82 00 70 */	beq .L_802A7310
/* 802A72A4 002A41E4  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A72A8 002A41E8  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A72AC 002A41EC  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A72B0 002A41F0  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A72B4 002A41F4  90 03 00 00 */	stw r0, 0(r3)
/* 802A72B8 002A41F8  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A72BC 002A41FC  3C A0 80 4E */	lis r5, __vt__Q23efx12TChasePosPos@ha
/* 802A72C0 002A4200  3C 80 80 4D */	lis r4, __vt__Q23efx15TDamaDeadHahenB@ha
/* 802A72C4 002A4204  90 03 00 04 */	stw r0, 4(r3)
/* 802A72C8 002A4208  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A72CC 002A420C  39 00 00 00 */	li r8, 0
/* 802A72D0 002A4210  38 E0 02 B2 */	li r7, 0x2b2
/* 802A72D4 002A4214  90 03 00 00 */	stw r0, 0(r3)
/* 802A72D8 002A4218  38 C5 68 10 */	addi r6, r5, __vt__Q23efx12TChasePosPos@l
/* 802A72DC 002A421C  38 A0 00 20 */	li r5, 0x20
/* 802A72E0 002A4220  38 04 D9 7C */	addi r0, r4, __vt__Q23efx15TDamaDeadHahenB@l
/* 802A72E4 002A4224  92 63 00 04 */	stw r19, 4(r3)
/* 802A72E8 002A4228  91 03 00 08 */	stw r8, 8(r3)
/* 802A72EC 002A422C  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802A72F0 002A4230  99 03 00 0E */	stb r8, 0xe(r3)
/* 802A72F4 002A4234  90 C3 00 00 */	stw r6, 0(r3)
/* 802A72F8 002A4238  93 23 00 04 */	stw r25, 4(r3)
/* 802A72FC 002A423C  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A7300 002A4240  91 03 00 14 */	stw r8, 0x14(r3)
/* 802A7304 002A4244  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A7308 002A4248  90 03 00 00 */	stw r0, 0(r3)
/* 802A730C 002A424C  92 83 00 04 */	stw r20, 4(r3)
.L_802A7310:
/* 802A7310 002A4250  3A 31 00 01 */	addi r17, r17, 1
/* 802A7314 002A4254  90 7D 04 7C */	stw r3, 0x47c(r29)
/* 802A7318 002A4258  2C 11 00 04 */	cmpwi r17, 4
/* 802A731C 002A425C  3B BD 00 04 */	addi r29, r29, 4
/* 802A7320 002A4260  3B 9C 00 0C */	addi r28, r28, 0xc
/* 802A7324 002A4264  3B 7B 00 08 */	addi r27, r27, 8
/* 802A7328 002A4268  41 80 FC 94 */	blt .L_802A6FBC
/* 802A732C 002A426C  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaSmoke@ha
/* 802A7330 002A4270  7F F4 FB 78 */	mr r20, r31
/* 802A7334 002A4274  38 63 D9 30 */	addi r3, r3, __vt__Q23efx10TDamaSmoke@l
/* 802A7338 002A4278  3A 00 00 00 */	li r16, 0
/* 802A733C 002A427C  3A A3 00 14 */	addi r21, r3, 0x14
.L_802A7340:
/* 802A7340 002A4280  38 60 00 14 */	li r3, 0x14
/* 802A7344 002A4284  4B D7 CB 61 */	bl __nw__FUl
/* 802A7348 002A4288  28 03 00 00 */	cmplwi r3, 0
/* 802A734C 002A428C  41 82 00 6C */	beq .L_802A73B8
/* 802A7350 002A4290  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A7354 002A4294  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A7358 002A4298  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A735C 002A429C  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A7360 002A42A0  90 03 00 00 */	stw r0, 0(r3)
/* 802A7364 002A42A4  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A7368 002A42A8  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802A736C 002A42AC  3C 80 80 4D */	lis r4, __vt__Q23efx10TDamaSmoke@ha
/* 802A7370 002A42B0  90 03 00 04 */	stw r0, 4(r3)
/* 802A7374 002A42B4  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A7378 002A42B8  39 00 00 00 */	li r8, 0
/* 802A737C 002A42BC  38 E0 02 B2 */	li r7, 0x2b2
/* 802A7380 002A42C0  90 03 00 00 */	stw r0, 0(r3)
/* 802A7384 002A42C4  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802A7388 002A42C8  38 A0 00 27 */	li r5, 0x27
/* 802A738C 002A42CC  38 04 D9 30 */	addi r0, r4, __vt__Q23efx10TDamaSmoke@l
/* 802A7390 002A42D0  92 63 00 04 */	stw r19, 4(r3)
/* 802A7394 002A42D4  91 03 00 08 */	stw r8, 8(r3)
/* 802A7398 002A42D8  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802A739C 002A42DC  99 03 00 0E */	stb r8, 0xe(r3)
/* 802A73A0 002A42E0  90 C3 00 00 */	stw r6, 0(r3)
/* 802A73A4 002A42E4  92 43 00 04 */	stw r18, 4(r3)
/* 802A73A8 002A42E8  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A73AC 002A42EC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A73B0 002A42F0  90 03 00 00 */	stw r0, 0(r3)
/* 802A73B4 002A42F4  92 A3 00 04 */	stw r21, 4(r3)
.L_802A73B8:
/* 802A73B8 002A42F8  3A 10 00 01 */	addi r16, r16, 1
/* 802A73BC 002A42FC  90 74 03 D0 */	stw r3, 0x3d0(r20)
/* 802A73C0 002A4300  2C 10 00 03 */	cmpwi r16, 3
/* 802A73C4 002A4304  3A 94 00 04 */	addi r20, r20, 4
/* 802A73C8 002A4308  41 80 FF 78 */	blt .L_802A7340
/* 802A73CC 002A430C  38 60 00 14 */	li r3, 0x14
/* 802A73D0 002A4310  4B D7 CA D5 */	bl __nw__FUl
/* 802A73D4 002A4314  28 03 00 00 */	cmplwi r3, 0
/* 802A73D8 002A4318  41 82 00 74 */	beq .L_802A744C
/* 802A73DC 002A431C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A73E0 002A4320  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A73E4 002A4324  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A73E8 002A4328  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A73EC 002A432C  90 03 00 00 */	stw r0, 0(r3)
/* 802A73F0 002A4330  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A73F4 002A4334  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802A73F8 002A4338  3C 80 80 4D */	lis r4, __vt__Q23efx16TDamaDeadHahenC1@ha
/* 802A73FC 002A433C  90 03 00 04 */	stw r0, 4(r3)
/* 802A7400 002A4340  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A7404 002A4344  38 E5 68 A8 */	addi r7, r5, __vt__Q23efx9TChaseMtx@l
/* 802A7408 002A4348  38 84 D8 E4 */	addi r4, r4, __vt__Q23efx16TDamaDeadHahenC1@l
/* 802A740C 002A434C  90 03 00 00 */	stw r0, 0(r3)
/* 802A7410 002A4350  39 20 00 00 */	li r9, 0
/* 802A7414 002A4354  39 00 02 B2 */	li r8, 0x2b2
/* 802A7418 002A4358  38 C7 00 14 */	addi r6, r7, 0x14
/* 802A741C 002A435C  92 63 00 04 */	stw r19, 4(r3)
/* 802A7420 002A4360  38 A0 00 21 */	li r5, 0x21
/* 802A7424 002A4364  38 04 00 14 */	addi r0, r4, 0x14
/* 802A7428 002A4368  91 23 00 08 */	stw r9, 8(r3)
/* 802A742C 002A436C  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802A7430 002A4370  99 23 00 0E */	stb r9, 0xe(r3)
/* 802A7434 002A4374  90 E3 00 00 */	stw r7, 0(r3)
/* 802A7438 002A4378  90 C3 00 04 */	stw r6, 4(r3)
/* 802A743C 002A437C  91 23 00 10 */	stw r9, 0x10(r3)
/* 802A7440 002A4380  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A7444 002A4384  90 83 00 00 */	stw r4, 0(r3)
/* 802A7448 002A4388  90 03 00 04 */	stw r0, 4(r3)
.L_802A744C:
/* 802A744C 002A438C  90 7F 04 8C */	stw r3, 0x48c(r31)
/* 802A7450 002A4390  38 60 00 14 */	li r3, 0x14
/* 802A7454 002A4394  4B D7 CA 51 */	bl __nw__FUl
/* 802A7458 002A4398  28 03 00 00 */	cmplwi r3, 0
/* 802A745C 002A439C  41 82 00 74 */	beq .L_802A74D0
/* 802A7460 002A43A0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A7464 002A43A4  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802A7468 002A43A8  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802A746C 002A43AC  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802A7470 002A43B0  90 03 00 00 */	stw r0, 0(r3)
/* 802A7474 002A43B4  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802A7478 002A43B8  3C A0 80 4E */	lis r5, __vt__Q23efx9TChaseMtx@ha
/* 802A747C 002A43BC  3C 80 80 4D */	lis r4, __vt__Q23efx16TDamaDeadHahenC2@ha
/* 802A7480 002A43C0  90 03 00 04 */	stw r0, 4(r3)
/* 802A7484 002A43C4  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802A7488 002A43C8  38 E5 68 A8 */	addi r7, r5, __vt__Q23efx9TChaseMtx@l
/* 802A748C 002A43CC  38 84 D8 98 */	addi r4, r4, __vt__Q23efx16TDamaDeadHahenC2@l
/* 802A7490 002A43D0  90 03 00 00 */	stw r0, 0(r3)
/* 802A7494 002A43D4  39 20 00 00 */	li r9, 0
/* 802A7498 002A43D8  39 00 02 B2 */	li r8, 0x2b2
/* 802A749C 002A43DC  38 C7 00 14 */	addi r6, r7, 0x14
/* 802A74A0 002A43E0  92 63 00 04 */	stw r19, 4(r3)
/* 802A74A4 002A43E4  38 A0 00 22 */	li r5, 0x22
/* 802A74A8 002A43E8  38 04 00 14 */	addi r0, r4, 0x14
/* 802A74AC 002A43EC  91 23 00 08 */	stw r9, 8(r3)
/* 802A74B0 002A43F0  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802A74B4 002A43F4  99 23 00 0E */	stb r9, 0xe(r3)
/* 802A74B8 002A43F8  90 E3 00 00 */	stw r7, 0(r3)
/* 802A74BC 002A43FC  90 C3 00 04 */	stw r6, 4(r3)
/* 802A74C0 002A4400  91 23 00 10 */	stw r9, 0x10(r3)
/* 802A74C4 002A4404  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802A74C8 002A4408  90 83 00 00 */	stw r4, 0(r3)
/* 802A74CC 002A440C  90 03 00 04 */	stw r0, 4(r3)
.L_802A74D0:
/* 802A74D0 002A4410  90 7F 04 90 */	stw r3, 0x490(r31)
/* 802A74D4 002A4414  BA 01 00 10 */	lmw r16, 0x10(r1)
/* 802A74D8 002A4418  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802A74DC 002A441C  7C 08 03 A6 */	mtlr r0
/* 802A74E0 002A4420  38 21 00 50 */	addi r1, r1, 0x50
/* 802A74E4 002A4424  4E 80 00 20 */	blr 

.global __dt__Q23efx12TChasePosPosFv
__dt__Q23efx12TChasePosPosFv:
/* 802A74E8 002A4428  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A74EC 002A442C  7C 08 02 A6 */	mflr r0
/* 802A74F0 002A4430  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A74F4 002A4434  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A74F8 002A4438  7C 9F 23 78 */	mr r31, r4
/* 802A74FC 002A443C  93 C1 00 08 */	stw r30, 8(r1)
/* 802A7500 002A4440  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A7504 002A4444  41 82 00 4C */	beq .L_802A7550
/* 802A7508 002A4448  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802A750C 002A444C  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802A7510 002A4450  90 7E 00 00 */	stw r3, 0(r30)
/* 802A7514 002A4454  38 03 00 14 */	addi r0, r3, 0x14
/* 802A7518 002A4458  90 1E 00 04 */	stw r0, 4(r30)
/* 802A751C 002A445C  41 82 00 24 */	beq .L_802A7540
/* 802A7520 002A4460  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A7524 002A4464  38 7E 00 04 */	addi r3, r30, 4
/* 802A7528 002A4468  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A752C 002A446C  38 80 00 00 */	li r4, 0
/* 802A7530 002A4470  90 BE 00 00 */	stw r5, 0(r30)
/* 802A7534 002A4474  38 05 00 14 */	addi r0, r5, 0x14
/* 802A7538 002A4478  90 1E 00 04 */	stw r0, 4(r30)
/* 802A753C 002A447C  4B DE 87 61 */	bl __dt__18JPAEmitterCallBackFv
.L_802A7540:
/* 802A7540 002A4480  7F E0 07 35 */	extsh. r0, r31
/* 802A7544 002A4484  40 81 00 0C */	ble .L_802A7550
/* 802A7548 002A4488  7F C3 F3 78 */	mr r3, r30
/* 802A754C 002A448C  4B D7 CB 69 */	bl __dl__FPv
.L_802A7550:
/* 802A7550 002A4490  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A7554 002A4494  7F C3 F3 78 */	mr r3, r30
/* 802A7558 002A4498  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A755C 002A449C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A7560 002A44A0  7C 08 03 A6 */	mtlr r0
/* 802A7564 002A44A4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A7568 002A44A8  4E 80 00 20 */	blr 

.global setupEffect__Q34Game8Damagumo3ObjFv
setupEffect__Q34Game8Damagumo3ObjFv:
/* 802A756C 002A44AC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A7570 002A44B0  7C 08 02 A6 */	mflr r0
/* 802A7574 002A44B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A7578 002A44B8  BF 41 00 08 */	stmw r26, 8(r1)
/* 802A757C 002A44BC  7C 7A 1B 78 */	mr r26, r3
/* 802A7580 002A44C0  3B 60 00 00 */	li r27, 0
/* 802A7584 002A44C4  7F 5F D3 78 */	mr r31, r26
/* 802A7588 002A44C8  7F 5E D3 78 */	mr r30, r26
/* 802A758C 002A44CC  7F 5D D3 78 */	mr r29, r26
/* 802A7590 002A44D0  7F 5C D3 78 */	mr r28, r26
.L_802A7594:
/* 802A7594 002A44D4  80 7E 03 B0 */	lwz r3, 0x3b0(r30)
/* 802A7598 002A44D8  38 9F 03 14 */	addi r4, r31, 0x314
/* 802A759C 002A44DC  48 10 8D A9 */	bl "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
/* 802A75A0 002A44E0  80 7E 03 C0 */	lwz r3, 0x3c0(r30)
/* 802A75A4 002A44E4  39 1F 03 14 */	addi r8, r31, 0x314
/* 802A75A8 002A44E8  38 C0 00 01 */	li r6, 1
/* 802A75AC 002A44EC  38 00 00 01 */	li r0, 1
/* 802A75B0 002A44F0  91 03 00 10 */	stw r8, 0x10(r3)
/* 802A75B4 002A44F4  1C 86 00 0C */	mulli r4, r6, 0xc
/* 802A75B8 002A44F8  38 FF 02 F0 */	addi r7, r31, 0x2f0
/* 802A75BC 002A44FC  81 3D 03 DC */	lwz r9, 0x3dc(r29)
/* 802A75C0 002A4500  3B 7B 00 01 */	addi r27, r27, 1
/* 802A75C4 002A4504  1C A0 00 0C */	mulli r5, r0, 0xc
/* 802A75C8 002A4508  38 C0 00 02 */	li r6, 2
/* 802A75CC 002A450C  39 44 02 F0 */	addi r10, r4, 0x2f0
/* 802A75D0 002A4510  90 E9 00 10 */	stw r7, 0x10(r9)
/* 802A75D4 002A4514  7C E3 3B 78 */	mr r3, r7
/* 802A75D8 002A4518  7D 5F 52 14 */	add r10, r31, r10
/* 802A75DC 002A451C  91 49 00 14 */	stw r10, 0x14(r9)
/* 802A75E0 002A4520  1C 86 00 0C */	mulli r4, r6, 0xc
/* 802A75E4 002A4524  39 65 02 F0 */	addi r11, r5, 0x2f0
/* 802A75E8 002A4528  81 3D 04 0C */	lwz r9, 0x40c(r29)
/* 802A75EC 002A452C  38 00 00 02 */	li r0, 2
/* 802A75F0 002A4530  1C A0 00 0C */	mulli r5, r0, 0xc
/* 802A75F4 002A4534  38 C0 00 03 */	li r6, 3
/* 802A75F8 002A4538  90 E9 00 10 */	stw r7, 0x10(r9)
/* 802A75FC 002A453C  38 FF 02 FC */	addi r7, r31, 0x2fc
/* 802A7600 002A4540  7D 7F 5A 14 */	add r11, r31, r11
/* 802A7604 002A4544  91 49 00 14 */	stw r10, 0x14(r9)
/* 802A7608 002A4548  39 44 02 F0 */	addi r10, r4, 0x2f0
/* 802A760C 002A454C  38 1F 03 08 */	addi r0, r31, 0x308
/* 802A7610 002A4550  81 3D 03 E0 */	lwz r9, 0x3e0(r29)
/* 802A7614 002A4554  7D 5F 52 14 */	add r10, r31, r10
/* 802A7618 002A4558  1C 86 00 0C */	mulli r4, r6, 0xc
/* 802A761C 002A455C  2C 1B 00 04 */	cmpwi r27, 4
/* 802A7620 002A4560  90 E9 00 10 */	stw r7, 0x10(r9)
/* 802A7624 002A4564  91 49 00 14 */	stw r10, 0x14(r9)
/* 802A7628 002A4568  81 3D 04 10 */	lwz r9, 0x410(r29)
/* 802A762C 002A456C  90 E9 00 10 */	stw r7, 0x10(r9)
/* 802A7630 002A4570  38 FF 03 08 */	addi r7, r31, 0x308
/* 802A7634 002A4574  91 49 00 14 */	stw r10, 0x14(r9)
/* 802A7638 002A4578  39 44 02 F0 */	addi r10, r4, 0x2f0
/* 802A763C 002A457C  7D 5F 52 14 */	add r10, r31, r10
/* 802A7640 002A4580  81 3D 03 E4 */	lwz r9, 0x3e4(r29)
/* 802A7644 002A4584  90 E9 00 10 */	stw r7, 0x10(r9)
/* 802A7648 002A4588  91 49 00 14 */	stw r10, 0x14(r9)
/* 802A764C 002A458C  81 3D 04 14 */	lwz r9, 0x414(r29)
/* 802A7650 002A4590  3B BD 00 0C */	addi r29, r29, 0xc
/* 802A7654 002A4594  90 E9 00 10 */	stw r7, 0x10(r9)
/* 802A7658 002A4598  91 49 00 14 */	stw r10, 0x14(r9)
/* 802A765C 002A459C  80 9C 04 3C */	lwz r4, 0x43c(r28)
/* 802A7660 002A45A0  91 64 00 10 */	stw r11, 0x10(r4)
/* 802A7664 002A45A4  80 9C 04 5C */	lwz r4, 0x45c(r28)
/* 802A7668 002A45A8  90 64 00 10 */	stw r3, 0x10(r4)
/* 802A766C 002A45AC  38 7F 02 FC */	addi r3, r31, 0x2fc
/* 802A7670 002A45B0  91 64 00 14 */	stw r11, 0x14(r4)
/* 802A7674 002A45B4  39 65 02 F0 */	addi r11, r5, 0x2f0
/* 802A7678 002A45B8  7D 7F 5A 14 */	add r11, r31, r11
/* 802A767C 002A45BC  3B FF 00 30 */	addi r31, r31, 0x30
/* 802A7680 002A45C0  80 9C 04 40 */	lwz r4, 0x440(r28)
/* 802A7684 002A45C4  91 64 00 10 */	stw r11, 0x10(r4)
/* 802A7688 002A45C8  80 9C 04 60 */	lwz r4, 0x460(r28)
/* 802A768C 002A45CC  3B 9C 00 08 */	addi r28, r28, 8
/* 802A7690 002A45D0  90 64 00 10 */	stw r3, 0x10(r4)
/* 802A7694 002A45D4  91 64 00 14 */	stw r11, 0x14(r4)
/* 802A7698 002A45D8  80 7E 04 7C */	lwz r3, 0x47c(r30)
/* 802A769C 002A45DC  3B DE 00 04 */	addi r30, r30, 4
/* 802A76A0 002A45E0  90 03 00 10 */	stw r0, 0x10(r3)
/* 802A76A4 002A45E4  91 03 00 14 */	stw r8, 0x14(r3)
/* 802A76A8 002A45E8  41 80 FE EC */	blt .L_802A7594
/* 802A76AC 002A45EC  80 7A 01 74 */	lwz r3, 0x174(r26)
/* 802A76B0 002A45F0  38 82 DB E8 */	addi r4, r2, lbl_8051BF48@sda21
/* 802A76B4 002A45F4  48 19 79 31 */	bl getJoint__Q28SysShape5ModelFPc
/* 802A76B8 002A45F8  48 18 21 E9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802A76BC 002A45FC  80 BA 04 8C */	lwz r5, 0x48c(r26)
/* 802A76C0 002A4600  38 82 DB F0 */	addi r4, r2, lbl_8051BF50@sda21
/* 802A76C4 002A4604  90 65 00 10 */	stw r3, 0x10(r5)
/* 802A76C8 002A4608  80 7A 01 74 */	lwz r3, 0x174(r26)
/* 802A76CC 002A460C  48 19 79 19 */	bl getJoint__Q28SysShape5ModelFPc
/* 802A76D0 002A4610  48 18 21 D1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802A76D4 002A4614  80 9A 04 90 */	lwz r4, 0x490(r26)
/* 802A76D8 002A4618  90 64 00 10 */	stw r3, 0x10(r4)
/* 802A76DC 002A461C  BB 41 00 08 */	lmw r26, 8(r1)
/* 802A76E0 002A4620  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A76E4 002A4624  7C 08 03 A6 */	mtlr r0
/* 802A76E8 002A4628  38 21 00 20 */	addi r1, r1, 0x20
/* 802A76EC 002A462C  4E 80 00 20 */	blr 

.global createOnGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox
createOnGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox:
/* 802A76F0 002A4630  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 802A76F4 002A4634  7C 08 02 A6 */	mflr r0
/* 802A76F8 002A4638  28 05 00 00 */	cmplwi r5, 0
/* 802A76FC 002A463C  90 01 00 74 */	stw r0, 0x74(r1)
/* 802A7700 002A4640  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802A7704 002A4644  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802A7708 002A4648  7C 9E 23 78 */	mr r30, r4
/* 802A770C 002A464C  1F FE 00 30 */	mulli r31, r30, 0x30
/* 802A7710 002A4650  93 A1 00 64 */	stw r29, 0x64(r1)
/* 802A7714 002A4654  7C 7D 1B 78 */	mr r29, r3
/* 802A7718 002A4658  93 81 00 60 */	stw r28, 0x60(r1)
/* 802A771C 002A465C  7C 7D FA 14 */	add r3, r29, r31
/* 802A7720 002A4660  C0 43 03 14 */	lfs f2, 0x314(r3)
/* 802A7724 002A4664  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 802A7728 002A4668  C0 23 03 18 */	lfs f1, 0x318(r3)
/* 802A772C 002A466C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 802A7730 002A4670  C0 03 03 1C */	lfs f0, 0x31c(r3)
/* 802A7734 002A4674  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 802A7738 002A4678  41 82 00 AC */	beq .L_802A77E4
/* 802A773C 002A467C  7C A3 2B 78 */	mr r3, r5
/* 802A7740 002A4680  81 85 00 00 */	lwz r12, 0(r5)
/* 802A7744 002A4684  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A7748 002A4688  7D 89 03 A6 */	mtctr r12
/* 802A774C 002A468C  4E 80 04 21 */	bctrl 
/* 802A7750 002A4690  C0 43 00 00 */	lfs f2, 0(r3)
/* 802A7754 002A4694  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802A7758 002A4698  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802A775C 002A469C  38 A0 00 00 */	li r5, 0
/* 802A7760 002A46A0  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple3@ha
/* 802A7764 002A46A4  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A7768 002A46A8  38 03 6A 50 */	addi r0, r3, __vt__Q23efx8TSimple3@l
/* 802A776C 002A46AC  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802A7770 002A46B0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 802A7774 002A46B4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802A7778 002A46B8  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaWalkw@ha
/* 802A777C 002A46BC  39 00 00 28 */	li r8, 0x28
/* 802A7780 002A46C0  39 24 A7 EC */	addi r9, r4, __vt__Q23efx3Arg@l
/* 802A7784 002A46C4  38 E0 00 29 */	li r7, 0x29
/* 802A7788 002A46C8  38 C0 00 2A */	li r6, 0x2a
/* 802A778C 002A46CC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A7790 002A46D0  38 03 D8 4C */	addi r0, r3, __vt__Q23efx10TDamaWalkw@l
/* 802A7794 002A46D4  38 61 00 44 */	addi r3, r1, 0x44
/* 802A7798 002A46D8  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 802A779C 002A46DC  38 81 00 28 */	addi r4, r1, 0x28
/* 802A77A0 002A46E0  91 21 00 28 */	stw r9, 0x28(r1)
/* 802A77A4 002A46E4  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 802A77A8 002A46E8  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 802A77AC 002A46EC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802A77B0 002A46F0  B1 01 00 48 */	sth r8, 0x48(r1)
/* 802A77B4 002A46F4  B0 E1 00 4A */	sth r7, 0x4a(r1)
/* 802A77B8 002A46F8  B0 C1 00 4C */	sth r6, 0x4c(r1)
/* 802A77BC 002A46FC  90 A1 00 50 */	stw r5, 0x50(r1)
/* 802A77C0 002A4700  90 A1 00 54 */	stw r5, 0x54(r1)
/* 802A77C4 002A4704  90 A1 00 58 */	stw r5, 0x58(r1)
/* 802A77C8 002A4708  90 01 00 44 */	stw r0, 0x44(r1)
/* 802A77CC 002A470C  48 10 78 F1 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 802A77D0 002A4710  38 9F 03 14 */	addi r4, r31, 0x314
/* 802A77D4 002A4714  38 60 38 49 */	li r3, 0x3849
/* 802A77D8 002A4718  7C 9D 22 14 */	add r4, r29, r4
/* 802A77DC 002A471C  48 1C 68 D9 */	bl PSStartSoundVec__FUlP3Vec
/* 802A77E0 002A4720  48 00 00 68 */	b .L_802A7848
.L_802A77E4:
/* 802A77E4 002A4724  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 802A77E8 002A4728  38 A0 00 00 */	li r5, 0
/* 802A77EC 002A472C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 802A77F0 002A4730  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 802A77F4 002A4734  90 01 00 08 */	stw r0, 8(r1)
/* 802A77F8 002A4738  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 802A77FC 002A473C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802A7800 002A4740  3C 60 80 4D */	lis r3, __vt__Q23efx9TDamaWalk@ha
/* 802A7804 002A4744  90 01 00 08 */	stw r0, 8(r1)
/* 802A7808 002A4748  38 84 A7 EC */	addi r4, r4, __vt__Q23efx3Arg@l
/* 802A780C 002A474C  38 03 D8 38 */	addi r0, r3, __vt__Q23efx9TDamaWalk@l
/* 802A7810 002A4750  38 E0 00 2B */	li r7, 0x2b
/* 802A7814 002A4754  38 C0 00 2C */	li r6, 0x2c
/* 802A7818 002A4758  90 81 00 18 */	stw r4, 0x18(r1)
/* 802A781C 002A475C  38 61 00 08 */	addi r3, r1, 8
/* 802A7820 002A4760  38 81 00 18 */	addi r4, r1, 0x18
/* 802A7824 002A4764  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 802A7828 002A4768  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 802A782C 002A476C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 802A7830 002A4770  B0 E1 00 0C */	sth r7, 0xc(r1)
/* 802A7834 002A4774  B0 C1 00 0E */	sth r6, 0xe(r1)
/* 802A7838 002A4778  90 A1 00 10 */	stw r5, 0x10(r1)
/* 802A783C 002A477C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802A7840 002A4780  90 01 00 08 */	stw r0, 8(r1)
/* 802A7844 002A4784  48 10 77 D1 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_802A7848:
/* 802A7848 002A4788  88 1D 02 DD */	lbz r0, 0x2dd(r29)
/* 802A784C 002A478C  28 00 00 00 */	cmplwi r0, 0
/* 802A7850 002A4790  41 82 00 38 */	beq .L_802A7888
/* 802A7854 002A4794  1C 1E 00 0C */	mulli r0, r30, 0xc
/* 802A7858 002A4798  3B 80 00 00 */	li r28, 0
/* 802A785C 002A479C  7F DD 02 14 */	add r30, r29, r0
.L_802A7860:
/* 802A7860 002A47A0  80 7E 03 DC */	lwz r3, 0x3dc(r30)
/* 802A7864 002A47A4  38 80 00 00 */	li r4, 0
/* 802A7868 002A47A8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A786C 002A47AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7870 002A47B0  7D 89 03 A6 */	mtctr r12
/* 802A7874 002A47B4  4E 80 04 21 */	bctrl 
/* 802A7878 002A47B8  3B 9C 00 01 */	addi r28, r28, 1
/* 802A787C 002A47BC  3B DE 00 04 */	addi r30, r30, 4
/* 802A7880 002A47C0  2C 1C 00 03 */	cmpwi r28, 3
/* 802A7884 002A47C4  41 80 FF DC */	blt .L_802A7860
.L_802A7888:
/* 802A7888 002A47C8  38 9F 03 14 */	addi r4, r31, 0x314
/* 802A788C 002A47CC  38 60 58 37 */	li r3, 0x5837
/* 802A7890 002A47D0  7C 9D 22 14 */	add r4, r29, r4
/* 802A7894 002A47D4  48 1C 68 21 */	bl PSStartSoundVec__FUlP3Vec
/* 802A7898 002A47D8  80 6D 96 A0 */	lwz r3, cameraMgr__4Game@sda21(r13)
/* 802A789C 002A47DC  38 A1 00 38 */	addi r5, r1, 0x38
/* 802A78A0 002A47E0  38 80 00 06 */	li r4, 6
/* 802A78A4 002A47E4  38 C0 00 02 */	li r6, 2
/* 802A78A8 002A47E8  4B FA A9 95 */	bl "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
/* 802A78AC 002A47EC  80 6D 96 A8 */	lwz r3, rumbleMgr__4Game@sda21(r13)
/* 802A78B0 002A47F0  38 A1 00 38 */	addi r5, r1, 0x38
/* 802A78B4 002A47F4  38 80 00 0E */	li r4, 0xe
/* 802A78B8 002A47F8  38 C0 00 02 */	li r6, 2
/* 802A78BC 002A47FC  4B FA BE C5 */	bl "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
/* 802A78C0 002A4800  80 01 00 74 */	lwz r0, 0x74(r1)
/* 802A78C4 002A4804  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802A78C8 002A4808  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802A78CC 002A480C  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 802A78D0 002A4810  83 81 00 60 */	lwz r28, 0x60(r1)
/* 802A78D4 002A4814  7C 08 03 A6 */	mtlr r0
/* 802A78D8 002A4818  38 21 00 70 */	addi r1, r1, 0x70
/* 802A78DC 002A481C  4E 80 00 20 */	blr 

.global createOffGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox
createOffGroundEffect__Q34Game8Damagumo3ObjFiPQ24Game8WaterBox:
/* 802A78E0 002A4820  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A78E4 002A4824  7C 08 02 A6 */	mflr r0
/* 802A78E8 002A4828  28 05 00 00 */	cmplwi r5, 0
/* 802A78EC 002A482C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A78F0 002A4830  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A78F4 002A4834  7C 7F 1B 78 */	mr r31, r3
/* 802A78F8 002A4838  41 82 00 28 */	beq .L_802A7920
/* 802A78FC 002A483C  54 80 10 3A */	slwi r0, r4, 2
/* 802A7900 002A4840  38 80 00 00 */	li r4, 0
/* 802A7904 002A4844  7C 7F 02 14 */	add r3, r31, r0
/* 802A7908 002A4848  80 63 03 C0 */	lwz r3, 0x3c0(r3)
/* 802A790C 002A484C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7910 002A4850  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7914 002A4854  7D 89 03 A6 */	mtctr r12
/* 802A7918 002A4858  4E 80 04 21 */	bctrl 
/* 802A791C 002A485C  48 00 00 24 */	b .L_802A7940
.L_802A7920:
/* 802A7920 002A4860  54 80 10 3A */	slwi r0, r4, 2
/* 802A7924 002A4864  38 80 00 00 */	li r4, 0
/* 802A7928 002A4868  7C 7F 02 14 */	add r3, r31, r0
/* 802A792C 002A486C  80 63 03 B0 */	lwz r3, 0x3b0(r3)
/* 802A7930 002A4870  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7934 002A4874  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7938 002A4878  7D 89 03 A6 */	mtctr r12
/* 802A793C 002A487C  4E 80 04 21 */	bctrl 
.L_802A7940:
/* 802A7940 002A4880  80 7F 00 C0 */	lwz r3, 0xc0(r31)
/* 802A7944 002A4884  C0 5F 02 00 */	lfs f2, 0x200(r31)
/* 802A7948 002A4888  C0 23 01 04 */	lfs f1, 0x104(r3)
/* 802A794C 002A488C  C0 02 DB F8 */	lfs f0, lbl_8051BF58@sda21(r2)
/* 802A7950 002A4890  EC 22 08 24 */	fdivs f1, f2, f1
/* 802A7954 002A4894  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A7958 002A4898  40 80 00 34 */	bge .L_802A798C
/* 802A795C 002A489C  7F E3 FB 78 */	mr r3, r31
/* 802A7960 002A48A0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A7964 002A48A4  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802A7968 002A48A8  7D 89 03 A6 */	mtctr r12
/* 802A796C 002A48AC  4E 80 04 21 */	bctrl 
/* 802A7970 002A48B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7974 002A48B4  38 80 58 47 */	li r4, 0x5847
/* 802A7978 002A48B8  38 A0 00 00 */	li r5, 0
/* 802A797C 002A48BC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802A7980 002A48C0  7D 89 03 A6 */	mtctr r12
/* 802A7984 002A48C4  4E 80 04 21 */	bctrl 
/* 802A7988 002A48C8  48 00 00 6C */	b .L_802A79F4
.L_802A798C:
/* 802A798C 002A48CC  C0 02 DB FC */	lfs f0, lbl_8051BF5C@sda21(r2)
/* 802A7990 002A48D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A7994 002A48D4  40 80 00 34 */	bge .L_802A79C8
/* 802A7998 002A48D8  7F E3 FB 78 */	mr r3, r31
/* 802A799C 002A48DC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A79A0 002A48E0  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802A79A4 002A48E4  7D 89 03 A6 */	mtctr r12
/* 802A79A8 002A48E8  4E 80 04 21 */	bctrl 
/* 802A79AC 002A48EC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A79B0 002A48F0  38 80 58 46 */	li r4, 0x5846
/* 802A79B4 002A48F4  38 A0 00 00 */	li r5, 0
/* 802A79B8 002A48F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802A79BC 002A48FC  7D 89 03 A6 */	mtctr r12
/* 802A79C0 002A4900  4E 80 04 21 */	bctrl 
/* 802A79C4 002A4904  48 00 00 30 */	b .L_802A79F4
.L_802A79C8:
/* 802A79C8 002A4908  7F E3 FB 78 */	mr r3, r31
/* 802A79CC 002A490C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A79D0 002A4910  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802A79D4 002A4914  7D 89 03 A6 */	mtctr r12
/* 802A79D8 002A4918  4E 80 04 21 */	bctrl 
/* 802A79DC 002A491C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A79E0 002A4920  38 80 58 45 */	li r4, 0x5845
/* 802A79E4 002A4924  38 A0 00 00 */	li r5, 0
/* 802A79E8 002A4928  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802A79EC 002A492C  7D 89 03 A6 */	mtctr r12
/* 802A79F0 002A4930  4E 80 04 21 */	bctrl 
.L_802A79F4:
/* 802A79F4 002A4934  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A79F8 002A4938  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A79FC 002A493C  7C 08 03 A6 */	mtlr r0
/* 802A7A00 002A4940  38 21 00 10 */	addi r1, r1, 0x10
/* 802A7A04 002A4944  4E 80 00 20 */	blr 

.global startPinchJointEffect__Q34Game8Damagumo3ObjFv
startPinchJointEffect__Q34Game8Damagumo3ObjFv:
/* 802A7A08 002A4948  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802A7A0C 002A494C  7C 08 02 A6 */	mflr r0
/* 802A7A10 002A4950  90 01 00 84 */	stw r0, 0x84(r1)
/* 802A7A14 002A4954  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802A7A18 002A4958  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802A7A1C 002A495C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802A7A20 002A4960  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802A7A24 002A4964  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802A7A28 002A4968  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802A7A2C 002A496C  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 802A7A30 002A4970  3B C1 00 18 */	addi r30, r1, 0x18
/* 802A7A34 002A4974  CB E2 DB B0 */	lfd f31, lbl_8051BF10@sda21(r2)
/* 802A7A38 002A4978  C3 C2 DB 98 */	lfs f30, lbl_8051BEF8@sda21(r2)
/* 802A7A3C 002A497C  7C 7D 1B 78 */	mr r29, r3
/* 802A7A40 002A4980  C3 A2 DC 00 */	lfs f29, lbl_8051BF60@sda21(r2)
/* 802A7A44 002A4984  7F DF F3 78 */	mr r31, r30
/* 802A7A48 002A4988  3B 60 00 00 */	li r27, 0
/* 802A7A4C 002A498C  3F 80 43 30 */	lis r28, 0x4330
.L_802A7A50:
/* 802A7A50 002A4990  4B E2 1B 51 */	bl rand
/* 802A7A54 002A4994  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802A7A58 002A4998  3B 7B 00 01 */	addi r27, r27, 1
/* 802A7A5C 002A499C  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802A7A60 002A49A0  2C 1B 00 03 */	cmpwi r27, 3
/* 802A7A64 002A49A4  93 81 00 28 */	stw r28, 0x28(r1)
/* 802A7A68 002A49A8  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802A7A6C 002A49AC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802A7A70 002A49B0  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802A7A74 002A49B4  EC 1D 00 32 */	fmuls f0, f29, f0
/* 802A7A78 002A49B8  FC 00 00 1E */	fctiwz f0, f0
/* 802A7A7C 002A49BC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802A7A80 002A49C0  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A7A84 002A49C4  38 03 00 01 */	addi r0, r3, 1
/* 802A7A88 002A49C8  90 1F 00 00 */	stw r0, 0(r31)
/* 802A7A8C 002A49CC  3B FF 00 04 */	addi r31, r31, 4
/* 802A7A90 002A49D0  41 80 FF C0 */	blt .L_802A7A50
/* 802A7A94 002A49D4  38 A0 00 00 */	li r5, 0
/* 802A7A98 002A49D8  38 80 00 01 */	li r4, 1
/* 802A7A9C 002A49DC  38 60 00 02 */	li r3, 2
/* 802A7AA0 002A49E0  38 00 00 03 */	li r0, 3
/* 802A7AA4 002A49E4  3B E1 00 08 */	addi r31, r1, 8
/* 802A7AA8 002A49E8  90 A1 00 08 */	stw r5, 8(r1)
/* 802A7AAC 002A49EC  CB A2 DB B0 */	lfd f29, lbl_8051BF10@sda21(r2)
/* 802A7AB0 002A49F0  7F FB FB 78 */	mr r27, r31
/* 802A7AB4 002A49F4  90 81 00 0C */	stw r4, 0xc(r1)
/* 802A7AB8 002A49F8  3B 40 00 00 */	li r26, 0
/* 802A7ABC 002A49FC  C3 C2 DB 98 */	lfs f30, lbl_8051BEF8@sda21(r2)
/* 802A7AC0 002A4A00  3F 80 43 30 */	lis r28, 0x4330
/* 802A7AC4 002A4A04  90 61 00 10 */	stw r3, 0x10(r1)
/* 802A7AC8 002A4A08  C3 E2 DC 04 */	lfs f31, lbl_8051BF64@sda21(r2)
/* 802A7ACC 002A4A0C  90 01 00 14 */	stw r0, 0x14(r1)
.L_802A7AD0:
/* 802A7AD0 002A4A10  4B E2 1A D1 */	bl rand
/* 802A7AD4 002A4A14  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802A7AD8 002A4A18  3B 5A 00 01 */	addi r26, r26, 1
/* 802A7ADC 002A4A1C  90 01 00 34 */	stw r0, 0x34(r1)
/* 802A7AE0 002A4A20  2C 1A 00 04 */	cmpwi r26, 4
/* 802A7AE4 002A4A24  80 9B 00 00 */	lwz r4, 0(r27)
/* 802A7AE8 002A4A28  93 81 00 30 */	stw r28, 0x30(r1)
/* 802A7AEC 002A4A2C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802A7AF0 002A4A30  EC 00 E8 28 */	fsubs f0, f0, f29
/* 802A7AF4 002A4A34  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802A7AF8 002A4A38  EC 1F 00 32 */	fmuls f0, f31, f0
/* 802A7AFC 002A4A3C  FC 00 00 1E */	fctiwz f0, f0
/* 802A7B00 002A4A40  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802A7B04 002A4A44  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802A7B08 002A4A48  54 03 10 3A */	slwi r3, r0, 2
/* 802A7B0C 002A4A4C  7C 1F 18 2E */	lwzx r0, r31, r3
/* 802A7B10 002A4A50  90 1B 00 00 */	stw r0, 0(r27)
/* 802A7B14 002A4A54  3B 7B 00 04 */	addi r27, r27, 4
/* 802A7B18 002A4A58  7C 9F 19 2E */	stwx r4, r31, r3
/* 802A7B1C 002A4A5C  41 80 FF B4 */	blt .L_802A7AD0
/* 802A7B20 002A4A60  7F BB EB 78 */	mr r27, r29
/* 802A7B24 002A4A64  3B 40 00 00 */	li r26, 0
.L_802A7B28:
/* 802A7B28 002A4A68  80 7F 00 00 */	lwz r3, 0(r31)
/* 802A7B2C 002A4A6C  38 80 00 00 */	li r4, 0
/* 802A7B30 002A4A70  80 1E 00 00 */	lwz r0, 0(r30)
/* 802A7B34 002A4A74  1C A3 00 30 */	mulli r5, r3, 0x30
/* 802A7B38 002A4A78  80 7B 03 D0 */	lwz r3, 0x3d0(r27)
/* 802A7B3C 002A4A7C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802A7B40 002A4A80  7C A5 02 14 */	add r5, r5, r0
/* 802A7B44 002A4A84  38 05 02 F0 */	addi r0, r5, 0x2f0
/* 802A7B48 002A4A88  7C 1D 02 14 */	add r0, r29, r0
/* 802A7B4C 002A4A8C  90 03 00 10 */	stw r0, 0x10(r3)
/* 802A7B50 002A4A90  80 7B 03 D0 */	lwz r3, 0x3d0(r27)
/* 802A7B54 002A4A94  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7B58 002A4A98  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7B5C 002A4A9C  7D 89 03 A6 */	mtctr r12
/* 802A7B60 002A4AA0  4E 80 04 21 */	bctrl 
/* 802A7B64 002A4AA4  3B 5A 00 01 */	addi r26, r26, 1
/* 802A7B68 002A4AA8  3B FF 00 04 */	addi r31, r31, 4
/* 802A7B6C 002A4AAC  2C 1A 00 03 */	cmpwi r26, 3
/* 802A7B70 002A4AB0  3B 7B 00 04 */	addi r27, r27, 4
/* 802A7B74 002A4AB4  3B DE 00 04 */	addi r30, r30, 4
/* 802A7B78 002A4AB8  41 80 FF B0 */	blt .L_802A7B28
/* 802A7B7C 002A4ABC  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802A7B80 002A4AC0  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802A7B84 002A4AC4  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802A7B88 002A4AC8  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802A7B8C 002A4ACC  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802A7B90 002A4AD0  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802A7B94 002A4AD4  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 802A7B98 002A4AD8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802A7B9C 002A4ADC  7C 08 03 A6 */	mtlr r0
/* 802A7BA0 002A4AE0  38 21 00 80 */	addi r1, r1, 0x80
/* 802A7BA4 002A4AE4  4E 80 00 20 */	blr 

.global finishPinchJointEffect__Q34Game8Damagumo3ObjFv
finishPinchJointEffect__Q34Game8Damagumo3ObjFv:
/* 802A7BA8 002A4AE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A7BAC 002A4AEC  7C 08 02 A6 */	mflr r0
/* 802A7BB0 002A4AF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A7BB4 002A4AF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A7BB8 002A4AF8  7C 7F 1B 78 */	mr r31, r3
/* 802A7BBC 002A4AFC  93 C1 00 08 */	stw r30, 8(r1)
/* 802A7BC0 002A4B00  3B C0 00 00 */	li r30, 0
.L_802A7BC4:
/* 802A7BC4 002A4B04  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 802A7BC8 002A4B08  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7BCC 002A4B0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A7BD0 002A4B10  7D 89 03 A6 */	mtctr r12
/* 802A7BD4 002A4B14  4E 80 04 21 */	bctrl 
/* 802A7BD8 002A4B18  3B DE 00 01 */	addi r30, r30, 1
/* 802A7BDC 002A4B1C  3B FF 00 04 */	addi r31, r31, 4
/* 802A7BE0 002A4B20  2C 1E 00 03 */	cmpwi r30, 3
/* 802A7BE4 002A4B24  41 80 FF E0 */	blt .L_802A7BC4
/* 802A7BE8 002A4B28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A7BEC 002A4B2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A7BF0 002A4B30  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A7BF4 002A4B34  7C 08 03 A6 */	mtlr r0
/* 802A7BF8 002A4B38  38 21 00 10 */	addi r1, r1, 0x10
/* 802A7BFC 002A4B3C  4E 80 00 20 */	blr 

.global startDeadEffect__Q34Game8Damagumo3ObjFv
startDeadEffect__Q34Game8Damagumo3ObjFv:
/* 802A7C00 002A4B40  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802A7C04 002A4B44  7C 08 02 A6 */	mflr r0
/* 802A7C08 002A4B48  3C C0 80 4B */	lis r6, __vt__Q23efx3Arg@ha
/* 802A7C0C 002A4B4C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802A7C10 002A4B50  90 01 00 64 */	stw r0, 0x64(r1)
/* 802A7C14 002A4B54  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802A7C18 002A4B58  BE 41 00 28 */	stmw r18, 0x28(r1)
/* 802A7C1C 002A4B5C  7C 7B 1B 78 */	mr r27, r3
/* 802A7C20 002A4B60  3C 60 80 4D */	lis r3, __vt__Q23efx13TDamaDeadBomb@ha
/* 802A7C24 002A4B64  3A A6 A7 EC */	addi r21, r6, __vt__Q23efx3Arg@l
/* 802A7C28 002A4B68  7F 7F DB 78 */	mr r31, r27
/* 802A7C2C 002A4B6C  7F 7E DB 78 */	mr r30, r27
/* 802A7C30 002A4B70  7F 7D DB 78 */	mr r29, r27
/* 802A7C34 002A4B74  7F 7C DB 78 */	mr r28, r27
/* 802A7C38 002A4B78  3A C5 A7 F8 */	addi r22, r5, __vt__Q23efx5TBase@l
/* 802A7C3C 002A4B7C  3A E4 6A 78 */	addi r23, r4, __vt__Q23efx8TSimple1@l
/* 802A7C40 002A4B80  3B 43 D8 24 */	addi r26, r3, __vt__Q23efx13TDamaDeadBomb@l
/* 802A7C44 002A4B84  3A 60 00 00 */	li r19, 0
.L_802A7C48:
/* 802A7C48 002A4B88  3A 9F 00 0C */	addi r20, r31, 0xc
/* 802A7C4C 002A4B8C  3A 40 00 01 */	li r18, 1
/* 802A7C50 002A4B90  3B 00 00 1C */	li r24, 0x1c
/* 802A7C54 002A4B94  3B 20 00 00 */	li r25, 0
.L_802A7C58:
/* 802A7C58 002A4B98  92 A1 00 14 */	stw r21, 0x14(r1)
/* 802A7C5C 002A4B9C  38 61 00 08 */	addi r3, r1, 8
/* 802A7C60 002A4BA0  38 81 00 14 */	addi r4, r1, 0x14
/* 802A7C64 002A4BA4  C0 14 02 F0 */	lfs f0, 0x2f0(r20)
/* 802A7C68 002A4BA8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802A7C6C 002A4BAC  C0 14 02 F4 */	lfs f0, 0x2f4(r20)
/* 802A7C70 002A4BB0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802A7C74 002A4BB4  C0 14 02 F8 */	lfs f0, 0x2f8(r20)
/* 802A7C78 002A4BB8  92 C1 00 08 */	stw r22, 8(r1)
/* 802A7C7C 002A4BBC  92 E1 00 08 */	stw r23, 8(r1)
/* 802A7C80 002A4BC0  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802A7C84 002A4BC4  B3 01 00 0C */	sth r24, 0xc(r1)
/* 802A7C88 002A4BC8  93 21 00 10 */	stw r25, 0x10(r1)
/* 802A7C8C 002A4BCC  93 41 00 08 */	stw r26, 8(r1)
/* 802A7C90 002A4BD0  48 10 72 F5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 802A7C94 002A4BD4  3A 52 00 01 */	addi r18, r18, 1
/* 802A7C98 002A4BD8  3A 94 00 0C */	addi r20, r20, 0xc
/* 802A7C9C 002A4BDC  2C 12 00 03 */	cmpwi r18, 3
/* 802A7CA0 002A4BE0  41 80 FF B8 */	blt .L_802A7C58
/* 802A7CA4 002A4BE4  3A 40 00 00 */	li r18, 0
/* 802A7CA8 002A4BE8  7F D4 F3 78 */	mr r20, r30
.L_802A7CAC:
/* 802A7CAC 002A4BEC  80 74 04 0C */	lwz r3, 0x40c(r20)
/* 802A7CB0 002A4BF0  38 80 00 00 */	li r4, 0
/* 802A7CB4 002A4BF4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7CB8 002A4BF8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7CBC 002A4BFC  7D 89 03 A6 */	mtctr r12
/* 802A7CC0 002A4C00  4E 80 04 21 */	bctrl 
/* 802A7CC4 002A4C04  3A 52 00 01 */	addi r18, r18, 1
/* 802A7CC8 002A4C08  3A 94 00 04 */	addi r20, r20, 4
/* 802A7CCC 002A4C0C  2C 12 00 03 */	cmpwi r18, 3
/* 802A7CD0 002A4C10  41 80 FF DC */	blt .L_802A7CAC
/* 802A7CD4 002A4C14  3A 40 00 00 */	li r18, 0
/* 802A7CD8 002A4C18  7F B4 EB 78 */	mr r20, r29
.L_802A7CDC:
/* 802A7CDC 002A4C1C  80 74 04 3C */	lwz r3, 0x43c(r20)
/* 802A7CE0 002A4C20  38 80 00 00 */	li r4, 0
/* 802A7CE4 002A4C24  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7CE8 002A4C28  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7CEC 002A4C2C  7D 89 03 A6 */	mtctr r12
/* 802A7CF0 002A4C30  4E 80 04 21 */	bctrl 
/* 802A7CF4 002A4C34  80 74 04 5C */	lwz r3, 0x45c(r20)
/* 802A7CF8 002A4C38  38 80 00 00 */	li r4, 0
/* 802A7CFC 002A4C3C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7D00 002A4C40  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7D04 002A4C44  7D 89 03 A6 */	mtctr r12
/* 802A7D08 002A4C48  4E 80 04 21 */	bctrl 
/* 802A7D0C 002A4C4C  3A 52 00 01 */	addi r18, r18, 1
/* 802A7D10 002A4C50  3A 94 00 04 */	addi r20, r20, 4
/* 802A7D14 002A4C54  2C 12 00 02 */	cmpwi r18, 2
/* 802A7D18 002A4C58  41 80 FF C4 */	blt .L_802A7CDC
/* 802A7D1C 002A4C5C  80 7C 04 7C */	lwz r3, 0x47c(r28)
/* 802A7D20 002A4C60  38 80 00 00 */	li r4, 0
/* 802A7D24 002A4C64  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7D28 002A4C68  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7D2C 002A4C6C  7D 89 03 A6 */	mtctr r12
/* 802A7D30 002A4C70  4E 80 04 21 */	bctrl 
/* 802A7D34 002A4C74  3A 73 00 01 */	addi r19, r19, 1
/* 802A7D38 002A4C78  3B DE 00 0C */	addi r30, r30, 0xc
/* 802A7D3C 002A4C7C  2C 13 00 04 */	cmpwi r19, 4
/* 802A7D40 002A4C80  3B BD 00 08 */	addi r29, r29, 8
/* 802A7D44 002A4C84  3B 9C 00 04 */	addi r28, r28, 4
/* 802A7D48 002A4C88  3B FF 00 30 */	addi r31, r31, 0x30
/* 802A7D4C 002A4C8C  41 80 FE FC */	blt .L_802A7C48
/* 802A7D50 002A4C90  80 7B 04 8C */	lwz r3, 0x48c(r27)
/* 802A7D54 002A4C94  38 80 00 00 */	li r4, 0
/* 802A7D58 002A4C98  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7D5C 002A4C9C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7D60 002A4CA0  7D 89 03 A6 */	mtctr r12
/* 802A7D64 002A4CA4  4E 80 04 21 */	bctrl 
/* 802A7D68 002A4CA8  80 7B 04 90 */	lwz r3, 0x490(r27)
/* 802A7D6C 002A4CAC  38 80 00 00 */	li r4, 0
/* 802A7D70 002A4CB0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7D74 002A4CB4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7D78 002A4CB8  7D 89 03 A6 */	mtctr r12
/* 802A7D7C 002A4CBC  4E 80 04 21 */	bctrl 
/* 802A7D80 002A4CC0  3A A0 00 00 */	li r21, 0
/* 802A7D84 002A4CC4  7F 74 DB 78 */	mr r20, r27
.L_802A7D88:
/* 802A7D88 002A4CC8  80 74 03 D0 */	lwz r3, 0x3d0(r20)
/* 802A7D8C 002A4CCC  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7D90 002A4CD0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A7D94 002A4CD4  7D 89 03 A6 */	mtctr r12
/* 802A7D98 002A4CD8  4E 80 04 21 */	bctrl 
/* 802A7D9C 002A4CDC  3A B5 00 01 */	addi r21, r21, 1
/* 802A7DA0 002A4CE0  3A 94 00 04 */	addi r20, r20, 4
/* 802A7DA4 002A4CE4  2C 15 00 03 */	cmpwi r21, 3
/* 802A7DA8 002A4CE8  41 80 FF E0 */	blt .L_802A7D88
/* 802A7DAC 002A4CEC  BA 41 00 28 */	lmw r18, 0x28(r1)
/* 802A7DB0 002A4CF0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802A7DB4 002A4CF4  7C 08 03 A6 */	mtlr r0
/* 802A7DB8 002A4CF8  38 21 00 60 */	addi r1, r1, 0x60
/* 802A7DBC 002A4CFC  4E 80 00 20 */	blr 

.global updatePinchLife__Q34Game8Damagumo3ObjFv
updatePinchLife__Q34Game8Damagumo3ObjFv:
/* 802A7DC0 002A4D00  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 802A7DC4 002A4D04  7C 08 02 A6 */	mflr r0
/* 802A7DC8 002A4D08  90 01 00 84 */	stw r0, 0x84(r1)
/* 802A7DCC 002A4D0C  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 802A7DD0 002A4D10  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 802A7DD4 002A4D14  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 802A7DD8 002A4D18  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 802A7DDC 002A4D1C  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 802A7DE0 002A4D20  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 802A7DE4 002A4D24  BF 41 00 38 */	stmw r26, 0x38(r1)
/* 802A7DE8 002A4D28  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7DEC 002A4D2C  7C 7D 1B 78 */	mr r29, r3
/* 802A7DF0 002A4D30  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A7DF4 002A4D34  7D 89 03 A6 */	mtctr r12
/* 802A7DF8 002A4D38  4E 80 04 21 */	bctrl 
/* 802A7DFC 002A4D3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A7E00 002A4D40  41 82 01 E4 */	beq .L_802A7FE4
/* 802A7E04 002A4D44  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 802A7E08 002A4D48  88 1D 02 DD */	lbz r0, 0x2dd(r29)
/* 802A7E0C 002A4D4C  C0 3D 02 00 */	lfs f1, 0x200(r29)
/* 802A7E10 002A4D50  C0 03 01 04 */	lfs f0, 0x104(r3)
/* 802A7E14 002A4D54  28 00 00 00 */	cmplwi r0, 0
/* 802A7E18 002A4D58  EC 21 00 24 */	fdivs f1, f1, f0
/* 802A7E1C 002A4D5C  41 82 00 44 */	beq .L_802A7E60
/* 802A7E20 002A4D60  C0 02 DB FC */	lfs f0, lbl_8051BF5C@sda21(r2)
/* 802A7E24 002A4D64  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A7E28 002A4D68  40 81 01 BC */	ble .L_802A7FE4
/* 802A7E2C 002A4D6C  3B 80 00 00 */	li r28, 0
/* 802A7E30 002A4D70  7F BB EB 78 */	mr r27, r29
/* 802A7E34 002A4D74  9B 9D 02 DD */	stb r28, 0x2dd(r29)
.L_802A7E38:
/* 802A7E38 002A4D78  80 7B 03 D0 */	lwz r3, 0x3d0(r27)
/* 802A7E3C 002A4D7C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7E40 002A4D80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802A7E44 002A4D84  7D 89 03 A6 */	mtctr r12
/* 802A7E48 002A4D88  4E 80 04 21 */	bctrl 
/* 802A7E4C 002A4D8C  3B 9C 00 01 */	addi r28, r28, 1
/* 802A7E50 002A4D90  3B 7B 00 04 */	addi r27, r27, 4
/* 802A7E54 002A4D94  2C 1C 00 03 */	cmpwi r28, 3
/* 802A7E58 002A4D98  41 80 FF E0 */	blt .L_802A7E38
/* 802A7E5C 002A4D9C  48 00 01 88 */	b .L_802A7FE4
.L_802A7E60:
/* 802A7E60 002A4DA0  C0 02 DB FC */	lfs f0, lbl_8051BF5C@sda21(r2)
/* 802A7E64 002A4DA4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802A7E68 002A4DA8  40 80 01 7C */	bge .L_802A7FE4
/* 802A7E6C 002A4DAC  38 00 00 01 */	li r0, 1
/* 802A7E70 002A4DB0  3B C1 00 08 */	addi r30, r1, 8
/* 802A7E74 002A4DB4  98 1D 02 DD */	stb r0, 0x2dd(r29)
/* 802A7E78 002A4DB8  7F DF F3 78 */	mr r31, r30
/* 802A7E7C 002A4DBC  CB E2 DB B0 */	lfd f31, lbl_8051BF10@sda21(r2)
/* 802A7E80 002A4DC0  3B 60 00 00 */	li r27, 0
/* 802A7E84 002A4DC4  C3 C2 DB 98 */	lfs f30, lbl_8051BEF8@sda21(r2)
/* 802A7E88 002A4DC8  3F 80 43 30 */	lis r28, 0x4330
/* 802A7E8C 002A4DCC  C3 A2 DC 00 */	lfs f29, lbl_8051BF60@sda21(r2)
.L_802A7E90:
/* 802A7E90 002A4DD0  4B E2 17 11 */	bl rand
/* 802A7E94 002A4DD4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802A7E98 002A4DD8  3B 7B 00 01 */	addi r27, r27, 1
/* 802A7E9C 002A4DDC  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802A7EA0 002A4DE0  2C 1B 00 03 */	cmpwi r27, 3
/* 802A7EA4 002A4DE4  93 81 00 28 */	stw r28, 0x28(r1)
/* 802A7EA8 002A4DE8  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 802A7EAC 002A4DEC  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802A7EB0 002A4DF0  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802A7EB4 002A4DF4  EC 1D 00 32 */	fmuls f0, f29, f0
/* 802A7EB8 002A4DF8  FC 00 00 1E */	fctiwz f0, f0
/* 802A7EBC 002A4DFC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802A7EC0 002A4E00  80 61 00 34 */	lwz r3, 0x34(r1)
/* 802A7EC4 002A4E04  38 03 00 01 */	addi r0, r3, 1
/* 802A7EC8 002A4E08  90 1F 00 00 */	stw r0, 0(r31)
/* 802A7ECC 002A4E0C  3B FF 00 04 */	addi r31, r31, 4
/* 802A7ED0 002A4E10  41 80 FF C0 */	blt .L_802A7E90
/* 802A7ED4 002A4E14  3B 60 00 00 */	li r27, 0
/* 802A7ED8 002A4E18  38 80 00 01 */	li r4, 1
/* 802A7EDC 002A4E1C  38 60 00 02 */	li r3, 2
/* 802A7EE0 002A4E20  38 00 00 03 */	li r0, 3
/* 802A7EE4 002A4E24  3B E1 00 14 */	addi r31, r1, 0x14
/* 802A7EE8 002A4E28  93 61 00 14 */	stw r27, 0x14(r1)
/* 802A7EEC 002A4E2C  CB A2 DB B0 */	lfd f29, lbl_8051BF10@sda21(r2)
/* 802A7EF0 002A4E30  7F FA FB 78 */	mr r26, r31
/* 802A7EF4 002A4E34  90 81 00 18 */	stw r4, 0x18(r1)
/* 802A7EF8 002A4E38  3F 80 43 30 */	lis r28, 0x4330
/* 802A7EFC 002A4E3C  C3 C2 DB 98 */	lfs f30, lbl_8051BEF8@sda21(r2)
/* 802A7F00 002A4E40  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802A7F04 002A4E44  C3 E2 DC 04 */	lfs f31, lbl_8051BF64@sda21(r2)
/* 802A7F08 002A4E48  90 01 00 20 */	stw r0, 0x20(r1)
.L_802A7F0C:
/* 802A7F0C 002A4E4C  4B E2 16 95 */	bl rand
/* 802A7F10 002A4E50  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802A7F14 002A4E54  3B 7B 00 01 */	addi r27, r27, 1
/* 802A7F18 002A4E58  90 01 00 34 */	stw r0, 0x34(r1)
/* 802A7F1C 002A4E5C  2C 1B 00 04 */	cmpwi r27, 4
/* 802A7F20 002A4E60  80 9A 00 00 */	lwz r4, 0(r26)
/* 802A7F24 002A4E64  93 81 00 30 */	stw r28, 0x30(r1)
/* 802A7F28 002A4E68  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802A7F2C 002A4E6C  EC 00 E8 28 */	fsubs f0, f0, f29
/* 802A7F30 002A4E70  EC 00 F0 24 */	fdivs f0, f0, f30
/* 802A7F34 002A4E74  EC 1F 00 32 */	fmuls f0, f31, f0
/* 802A7F38 002A4E78  FC 00 00 1E */	fctiwz f0, f0
/* 802A7F3C 002A4E7C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802A7F40 002A4E80  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802A7F44 002A4E84  54 03 10 3A */	slwi r3, r0, 2
/* 802A7F48 002A4E88  7C 1F 18 2E */	lwzx r0, r31, r3
/* 802A7F4C 002A4E8C  90 1A 00 00 */	stw r0, 0(r26)
/* 802A7F50 002A4E90  3B 5A 00 04 */	addi r26, r26, 4
/* 802A7F54 002A4E94  7C 9F 19 2E */	stwx r4, r31, r3
/* 802A7F58 002A4E98  41 80 FF B4 */	blt .L_802A7F0C
/* 802A7F5C 002A4E9C  7F BA EB 78 */	mr r26, r29
/* 802A7F60 002A4EA0  3B 80 00 00 */	li r28, 0
.L_802A7F64:
/* 802A7F64 002A4EA4  80 7F 00 00 */	lwz r3, 0(r31)
/* 802A7F68 002A4EA8  38 80 00 00 */	li r4, 0
/* 802A7F6C 002A4EAC  80 1E 00 00 */	lwz r0, 0(r30)
/* 802A7F70 002A4EB0  1C A3 00 30 */	mulli r5, r3, 0x30
/* 802A7F74 002A4EB4  80 7A 03 D0 */	lwz r3, 0x3d0(r26)
/* 802A7F78 002A4EB8  1C 00 00 0C */	mulli r0, r0, 0xc
/* 802A7F7C 002A4EBC  7C A5 02 14 */	add r5, r5, r0
/* 802A7F80 002A4EC0  38 05 02 F0 */	addi r0, r5, 0x2f0
/* 802A7F84 002A4EC4  7C 1D 02 14 */	add r0, r29, r0
/* 802A7F88 002A4EC8  90 03 00 10 */	stw r0, 0x10(r3)
/* 802A7F8C 002A4ECC  80 7A 03 D0 */	lwz r3, 0x3d0(r26)
/* 802A7F90 002A4ED0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7F94 002A4ED4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802A7F98 002A4ED8  7D 89 03 A6 */	mtctr r12
/* 802A7F9C 002A4EDC  4E 80 04 21 */	bctrl 
/* 802A7FA0 002A4EE0  3B 9C 00 01 */	addi r28, r28, 1
/* 802A7FA4 002A4EE4  3B FF 00 04 */	addi r31, r31, 4
/* 802A7FA8 002A4EE8  2C 1C 00 03 */	cmpwi r28, 3
/* 802A7FAC 002A4EEC  3B 5A 00 04 */	addi r26, r26, 4
/* 802A7FB0 002A4EF0  3B DE 00 04 */	addi r30, r30, 4
/* 802A7FB4 002A4EF4  41 80 FF B0 */	blt .L_802A7F64
/* 802A7FB8 002A4EF8  7F A3 EB 78 */	mr r3, r29
/* 802A7FBC 002A4EFC  81 9D 00 00 */	lwz r12, 0(r29)
/* 802A7FC0 002A4F00  81 8C 00 F4 */	lwz r12, 0xf4(r12)
/* 802A7FC4 002A4F04  7D 89 03 A6 */	mtctr r12
/* 802A7FC8 002A4F08  4E 80 04 21 */	bctrl 
/* 802A7FCC 002A4F0C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A7FD0 002A4F10  38 80 58 44 */	li r4, 0x5844
/* 802A7FD4 002A4F14  38 A0 00 00 */	li r5, 0
/* 802A7FD8 002A4F18  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802A7FDC 002A4F1C  7D 89 03 A6 */	mtctr r12
/* 802A7FE0 002A4F20  4E 80 04 21 */	bctrl 
.L_802A7FE4:
/* 802A7FE4 002A4F24  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 802A7FE8 002A4F28  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 802A7FEC 002A4F2C  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 802A7FF0 002A4F30  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 802A7FF4 002A4F34  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 802A7FF8 002A4F38  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 802A7FFC 002A4F3C  BB 41 00 38 */	lmw r26, 0x38(r1)
/* 802A8000 002A4F40  80 01 00 84 */	lwz r0, 0x84(r1)
/* 802A8004 002A4F44  7C 08 03 A6 */	mtlr r0
/* 802A8008 002A4F48  38 21 00 80 */	addi r1, r1, 0x80
/* 802A800C 002A4F4C  4E 80 00 20 */	blr 

.global effectDrawOn__Q34Game8Damagumo3ObjFv
effectDrawOn__Q34Game8Damagumo3ObjFv:
/* 802A8010 002A4F50  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A8014 002A4F54  7C 08 02 A6 */	mflr r0
/* 802A8018 002A4F58  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A801C 002A4F5C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802A8020 002A4F60  7C 7B 1B 78 */	mr r27, r3
/* 802A8024 002A4F64  3B C0 00 00 */	li r30, 0
/* 802A8028 002A4F68  7F 7F DB 78 */	mr r31, r27
.L_802A802C:
/* 802A802C 002A4F6C  80 7F 03 B0 */	lwz r3, 0x3b0(r31)
/* 802A8030 002A4F70  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8034 002A4F74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802A8038 002A4F78  7D 89 03 A6 */	mtctr r12
/* 802A803C 002A4F7C  4E 80 04 21 */	bctrl 
/* 802A8040 002A4F80  80 7F 03 C0 */	lwz r3, 0x3c0(r31)
/* 802A8044 002A4F84  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8048 002A4F88  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A804C 002A4F8C  7D 89 03 A6 */	mtctr r12
/* 802A8050 002A4F90  4E 80 04 21 */	bctrl 
/* 802A8054 002A4F94  3B DE 00 01 */	addi r30, r30, 1
/* 802A8058 002A4F98  3B FF 00 04 */	addi r31, r31, 4
/* 802A805C 002A4F9C  2C 1E 00 04 */	cmpwi r30, 4
/* 802A8060 002A4FA0  41 80 FF CC */	blt .L_802A802C
/* 802A8064 002A4FA4  3B C0 00 00 */	li r30, 0
/* 802A8068 002A4FA8  7F 7F DB 78 */	mr r31, r27
.L_802A806C:
/* 802A806C 002A4FAC  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 802A8070 002A4FB0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8074 002A4FB4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A8078 002A4FB8  7D 89 03 A6 */	mtctr r12
/* 802A807C 002A4FBC  4E 80 04 21 */	bctrl 
/* 802A8080 002A4FC0  3B DE 00 01 */	addi r30, r30, 1
/* 802A8084 002A4FC4  3B FF 00 04 */	addi r31, r31, 4
/* 802A8088 002A4FC8  2C 1E 00 03 */	cmpwi r30, 3
/* 802A808C 002A4FCC  41 80 FF E0 */	blt .L_802A806C
/* 802A8090 002A4FD0  3B A0 00 00 */	li r29, 0
/* 802A8094 002A4FD4  7F 7E DB 78 */	mr r30, r27
.L_802A8098:
/* 802A8098 002A4FD8  3B 80 00 00 */	li r28, 0
/* 802A809C 002A4FDC  7F DF F3 78 */	mr r31, r30
.L_802A80A0:
/* 802A80A0 002A4FE0  80 7F 03 DC */	lwz r3, 0x3dc(r31)
/* 802A80A4 002A4FE4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A80A8 002A4FE8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A80AC 002A4FEC  7D 89 03 A6 */	mtctr r12
/* 802A80B0 002A4FF0  4E 80 04 21 */	bctrl 
/* 802A80B4 002A4FF4  80 7F 04 0C */	lwz r3, 0x40c(r31)
/* 802A80B8 002A4FF8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A80BC 002A4FFC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A80C0 002A5000  7D 89 03 A6 */	mtctr r12
/* 802A80C4 002A5004  4E 80 04 21 */	bctrl 
/* 802A80C8 002A5008  3B 9C 00 01 */	addi r28, r28, 1
/* 802A80CC 002A500C  3B FF 00 04 */	addi r31, r31, 4
/* 802A80D0 002A5010  2C 1C 00 03 */	cmpwi r28, 3
/* 802A80D4 002A5014  41 80 FF CC */	blt .L_802A80A0
/* 802A80D8 002A5018  3B BD 00 01 */	addi r29, r29, 1
/* 802A80DC 002A501C  3B DE 00 0C */	addi r30, r30, 0xc
/* 802A80E0 002A5020  2C 1D 00 04 */	cmpwi r29, 4
/* 802A80E4 002A5024  41 80 FF B4 */	blt .L_802A8098
/* 802A80E8 002A5028  3B 80 00 00 */	li r28, 0
/* 802A80EC 002A502C  7F 7F DB 78 */	mr r31, r27
.L_802A80F0:
/* 802A80F0 002A5030  3B A0 00 00 */	li r29, 0
/* 802A80F4 002A5034  7F FE FB 78 */	mr r30, r31
.L_802A80F8:
/* 802A80F8 002A5038  80 7E 04 3C */	lwz r3, 0x43c(r30)
/* 802A80FC 002A503C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8100 002A5040  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A8104 002A5044  7D 89 03 A6 */	mtctr r12
/* 802A8108 002A5048  4E 80 04 21 */	bctrl 
/* 802A810C 002A504C  80 7E 04 5C */	lwz r3, 0x45c(r30)
/* 802A8110 002A5050  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8114 002A5054  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A8118 002A5058  7D 89 03 A6 */	mtctr r12
/* 802A811C 002A505C  4E 80 04 21 */	bctrl 
/* 802A8120 002A5060  3B BD 00 01 */	addi r29, r29, 1
/* 802A8124 002A5064  3B DE 00 04 */	addi r30, r30, 4
/* 802A8128 002A5068  2C 1D 00 02 */	cmpwi r29, 2
/* 802A812C 002A506C  41 80 FF CC */	blt .L_802A80F8
/* 802A8130 002A5070  3B 9C 00 01 */	addi r28, r28, 1
/* 802A8134 002A5074  3B FF 00 08 */	addi r31, r31, 8
/* 802A8138 002A5078  2C 1C 00 04 */	cmpwi r28, 4
/* 802A813C 002A507C  41 80 FF B4 */	blt .L_802A80F0
/* 802A8140 002A5080  3B 80 00 00 */	li r28, 0
/* 802A8144 002A5084  7F 7E DB 78 */	mr r30, r27
.L_802A8148:
/* 802A8148 002A5088  80 7E 04 7C */	lwz r3, 0x47c(r30)
/* 802A814C 002A508C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8150 002A5090  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A8154 002A5094  7D 89 03 A6 */	mtctr r12
/* 802A8158 002A5098  4E 80 04 21 */	bctrl 
/* 802A815C 002A509C  3B 9C 00 01 */	addi r28, r28, 1
/* 802A8160 002A50A0  3B DE 00 04 */	addi r30, r30, 4
/* 802A8164 002A50A4  2C 1C 00 04 */	cmpwi r28, 4
/* 802A8168 002A50A8  41 80 FF E0 */	blt .L_802A8148
/* 802A816C 002A50AC  80 7B 04 8C */	lwz r3, 0x48c(r27)
/* 802A8170 002A50B0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8174 002A50B4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A8178 002A50B8  7D 89 03 A6 */	mtctr r12
/* 802A817C 002A50BC  4E 80 04 21 */	bctrl 
/* 802A8180 002A50C0  80 7B 04 90 */	lwz r3, 0x490(r27)
/* 802A8184 002A50C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8188 002A50C8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 802A818C 002A50CC  7D 89 03 A6 */	mtctr r12
/* 802A8190 002A50D0  4E 80 04 21 */	bctrl 
/* 802A8194 002A50D4  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802A8198 002A50D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A819C 002A50DC  7C 08 03 A6 */	mtlr r0
/* 802A81A0 002A50E0  38 21 00 20 */	addi r1, r1, 0x20
/* 802A81A4 002A50E4  4E 80 00 20 */	blr 

.global effectDrawOff__Q34Game8Damagumo3ObjFv
effectDrawOff__Q34Game8Damagumo3ObjFv:
/* 802A81A8 002A50E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802A81AC 002A50EC  7C 08 02 A6 */	mflr r0
/* 802A81B0 002A50F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802A81B4 002A50F4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802A81B8 002A50F8  7C 7B 1B 78 */	mr r27, r3
/* 802A81BC 002A50FC  3B C0 00 00 */	li r30, 0
/* 802A81C0 002A5100  7F 7F DB 78 */	mr r31, r27
.L_802A81C4:
/* 802A81C4 002A5104  80 7F 03 B0 */	lwz r3, 0x3b0(r31)
/* 802A81C8 002A5108  81 83 00 00 */	lwz r12, 0(r3)
/* 802A81CC 002A510C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802A81D0 002A5110  7D 89 03 A6 */	mtctr r12
/* 802A81D4 002A5114  4E 80 04 21 */	bctrl 
/* 802A81D8 002A5118  80 7F 03 C0 */	lwz r3, 0x3c0(r31)
/* 802A81DC 002A511C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A81E0 002A5120  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A81E4 002A5124  7D 89 03 A6 */	mtctr r12
/* 802A81E8 002A5128  4E 80 04 21 */	bctrl 
/* 802A81EC 002A512C  3B DE 00 01 */	addi r30, r30, 1
/* 802A81F0 002A5130  3B FF 00 04 */	addi r31, r31, 4
/* 802A81F4 002A5134  2C 1E 00 04 */	cmpwi r30, 4
/* 802A81F8 002A5138  41 80 FF CC */	blt .L_802A81C4
/* 802A81FC 002A513C  3B C0 00 00 */	li r30, 0
/* 802A8200 002A5140  7F 7F DB 78 */	mr r31, r27
.L_802A8204:
/* 802A8204 002A5144  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 802A8208 002A5148  81 83 00 00 */	lwz r12, 0(r3)
/* 802A820C 002A514C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A8210 002A5150  7D 89 03 A6 */	mtctr r12
/* 802A8214 002A5154  4E 80 04 21 */	bctrl 
/* 802A8218 002A5158  3B DE 00 01 */	addi r30, r30, 1
/* 802A821C 002A515C  3B FF 00 04 */	addi r31, r31, 4
/* 802A8220 002A5160  2C 1E 00 03 */	cmpwi r30, 3
/* 802A8224 002A5164  41 80 FF E0 */	blt .L_802A8204
/* 802A8228 002A5168  3B A0 00 00 */	li r29, 0
/* 802A822C 002A516C  7F 7E DB 78 */	mr r30, r27
.L_802A8230:
/* 802A8230 002A5170  3B 80 00 00 */	li r28, 0
/* 802A8234 002A5174  7F DF F3 78 */	mr r31, r30
.L_802A8238:
/* 802A8238 002A5178  80 7F 03 DC */	lwz r3, 0x3dc(r31)
/* 802A823C 002A517C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8240 002A5180  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A8244 002A5184  7D 89 03 A6 */	mtctr r12
/* 802A8248 002A5188  4E 80 04 21 */	bctrl 
/* 802A824C 002A518C  80 7F 04 0C */	lwz r3, 0x40c(r31)
/* 802A8250 002A5190  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8254 002A5194  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A8258 002A5198  7D 89 03 A6 */	mtctr r12
/* 802A825C 002A519C  4E 80 04 21 */	bctrl 
/* 802A8260 002A51A0  3B 9C 00 01 */	addi r28, r28, 1
/* 802A8264 002A51A4  3B FF 00 04 */	addi r31, r31, 4
/* 802A8268 002A51A8  2C 1C 00 03 */	cmpwi r28, 3
/* 802A826C 002A51AC  41 80 FF CC */	blt .L_802A8238
/* 802A8270 002A51B0  3B BD 00 01 */	addi r29, r29, 1
/* 802A8274 002A51B4  3B DE 00 0C */	addi r30, r30, 0xc
/* 802A8278 002A51B8  2C 1D 00 04 */	cmpwi r29, 4
/* 802A827C 002A51BC  41 80 FF B4 */	blt .L_802A8230
/* 802A8280 002A51C0  3B 80 00 00 */	li r28, 0
/* 802A8284 002A51C4  7F 7F DB 78 */	mr r31, r27
.L_802A8288:
/* 802A8288 002A51C8  3B A0 00 00 */	li r29, 0
/* 802A828C 002A51CC  7F FE FB 78 */	mr r30, r31
.L_802A8290:
/* 802A8290 002A51D0  80 7E 04 3C */	lwz r3, 0x43c(r30)
/* 802A8294 002A51D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8298 002A51D8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A829C 002A51DC  7D 89 03 A6 */	mtctr r12
/* 802A82A0 002A51E0  4E 80 04 21 */	bctrl 
/* 802A82A4 002A51E4  80 7E 04 5C */	lwz r3, 0x45c(r30)
/* 802A82A8 002A51E8  81 83 00 00 */	lwz r12, 0(r3)
/* 802A82AC 002A51EC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A82B0 002A51F0  7D 89 03 A6 */	mtctr r12
/* 802A82B4 002A51F4  4E 80 04 21 */	bctrl 
/* 802A82B8 002A51F8  3B BD 00 01 */	addi r29, r29, 1
/* 802A82BC 002A51FC  3B DE 00 04 */	addi r30, r30, 4
/* 802A82C0 002A5200  2C 1D 00 02 */	cmpwi r29, 2
/* 802A82C4 002A5204  41 80 FF CC */	blt .L_802A8290
/* 802A82C8 002A5208  3B 9C 00 01 */	addi r28, r28, 1
/* 802A82CC 002A520C  3B FF 00 08 */	addi r31, r31, 8
/* 802A82D0 002A5210  2C 1C 00 04 */	cmpwi r28, 4
/* 802A82D4 002A5214  41 80 FF B4 */	blt .L_802A8288
/* 802A82D8 002A5218  3B 80 00 00 */	li r28, 0
/* 802A82DC 002A521C  7F 7E DB 78 */	mr r30, r27
.L_802A82E0:
/* 802A82E0 002A5220  80 7E 04 7C */	lwz r3, 0x47c(r30)
/* 802A82E4 002A5224  81 83 00 00 */	lwz r12, 0(r3)
/* 802A82E8 002A5228  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A82EC 002A522C  7D 89 03 A6 */	mtctr r12
/* 802A82F0 002A5230  4E 80 04 21 */	bctrl 
/* 802A82F4 002A5234  3B 9C 00 01 */	addi r28, r28, 1
/* 802A82F8 002A5238  3B DE 00 04 */	addi r30, r30, 4
/* 802A82FC 002A523C  2C 1C 00 04 */	cmpwi r28, 4
/* 802A8300 002A5240  41 80 FF E0 */	blt .L_802A82E0
/* 802A8304 002A5244  80 7B 04 8C */	lwz r3, 0x48c(r27)
/* 802A8308 002A5248  81 83 00 00 */	lwz r12, 0(r3)
/* 802A830C 002A524C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A8310 002A5250  7D 89 03 A6 */	mtctr r12
/* 802A8314 002A5254  4E 80 04 21 */	bctrl 
/* 802A8318 002A5258  80 7B 04 90 */	lwz r3, 0x490(r27)
/* 802A831C 002A525C  81 83 00 00 */	lwz r12, 0(r3)
/* 802A8320 002A5260  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 802A8324 002A5264  7D 89 03 A6 */	mtctr r12
/* 802A8328 002A5268  4E 80 04 21 */	bctrl 
/* 802A832C 002A526C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802A8330 002A5270  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802A8334 002A5274  7C 08 03 A6 */	mtlr r0
/* 802A8338 002A5278  38 21 00 20 */	addi r1, r1, 0x20
/* 802A833C 002A527C  4E 80 00 20 */	blr 

.global addShadowScale__Q34Game8Damagumo3ObjFv
addShadowScale__Q34Game8Damagumo3ObjFv:
/* 802A8340 002A5280  C0 63 02 D8 */	lfs f3, 0x2d8(r3)
/* 802A8344 002A5284  C0 42 DB 74 */	lfs f2, lbl_8051BED4@sda21(r2)
/* 802A8348 002A5288  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802A834C 002A528C  4C 80 00 20 */	bgelr 
/* 802A8350 002A5290  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802A8354 002A5294  C0 22 DC 00 */	lfs f1, lbl_8051BF60@sda21(r2)
/* 802A8358 002A5298  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 802A835C 002A529C  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 802A8360 002A52A0  D0 03 02 D8 */	stfs f0, 0x2d8(r3)
/* 802A8364 002A52A4  C0 03 02 D8 */	lfs f0, 0x2d8(r3)
/* 802A8368 002A52A8  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802A836C 002A52AC  4C 81 00 20 */	blelr 
/* 802A8370 002A52B0  D0 43 02 D8 */	stfs f2, 0x2d8(r3)
/* 802A8374 002A52B4  4E 80 00 20 */	blr 

.global __dt__Q23efx16TDamaDeadHahenC2Fv
__dt__Q23efx16TDamaDeadHahenC2Fv:
/* 802A8378 002A52B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A837C 002A52BC  7C 08 02 A6 */	mflr r0
/* 802A8380 002A52C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A8384 002A52C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A8388 002A52C8  7C 9F 23 78 */	mr r31, r4
/* 802A838C 002A52CC  93 C1 00 08 */	stw r30, 8(r1)
/* 802A8390 002A52D0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A8394 002A52D4  41 82 00 64 */	beq .L_802A83F8
/* 802A8398 002A52D8  3C 60 80 4D */	lis r3, __vt__Q23efx16TDamaDeadHahenC2@ha
/* 802A839C 002A52DC  38 63 D8 98 */	addi r3, r3, __vt__Q23efx16TDamaDeadHahenC2@l
/* 802A83A0 002A52E0  90 7E 00 00 */	stw r3, 0(r30)
/* 802A83A4 002A52E4  38 03 00 14 */	addi r0, r3, 0x14
/* 802A83A8 002A52E8  90 1E 00 04 */	stw r0, 4(r30)
/* 802A83AC 002A52EC  41 82 00 3C */	beq .L_802A83E8
/* 802A83B0 002A52F0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802A83B4 002A52F4  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802A83B8 002A52F8  90 7E 00 00 */	stw r3, 0(r30)
/* 802A83BC 002A52FC  38 03 00 14 */	addi r0, r3, 0x14
/* 802A83C0 002A5300  90 1E 00 04 */	stw r0, 4(r30)
/* 802A83C4 002A5304  41 82 00 24 */	beq .L_802A83E8
/* 802A83C8 002A5308  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A83CC 002A530C  38 7E 00 04 */	addi r3, r30, 4
/* 802A83D0 002A5310  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A83D4 002A5314  38 80 00 00 */	li r4, 0
/* 802A83D8 002A5318  90 BE 00 00 */	stw r5, 0(r30)
/* 802A83DC 002A531C  38 05 00 14 */	addi r0, r5, 0x14
/* 802A83E0 002A5320  90 1E 00 04 */	stw r0, 4(r30)
/* 802A83E4 002A5324  4B DE 78 B9 */	bl __dt__18JPAEmitterCallBackFv
.L_802A83E8:
/* 802A83E8 002A5328  7F E0 07 35 */	extsh. r0, r31
/* 802A83EC 002A532C  40 81 00 0C */	ble .L_802A83F8
/* 802A83F0 002A5330  7F C3 F3 78 */	mr r3, r30
/* 802A83F4 002A5334  4B D7 BC C1 */	bl __dl__FPv
.L_802A83F8:
/* 802A83F8 002A5338  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A83FC 002A533C  7F C3 F3 78 */	mr r3, r30
/* 802A8400 002A5340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A8404 002A5344  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A8408 002A5348  7C 08 03 A6 */	mtlr r0
/* 802A840C 002A534C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A8410 002A5350  4E 80 00 20 */	blr 

.global __dt__Q23efx16TDamaDeadHahenC1Fv
__dt__Q23efx16TDamaDeadHahenC1Fv:
/* 802A8414 002A5354  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A8418 002A5358  7C 08 02 A6 */	mflr r0
/* 802A841C 002A535C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A8420 002A5360  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A8424 002A5364  7C 9F 23 78 */	mr r31, r4
/* 802A8428 002A5368  93 C1 00 08 */	stw r30, 8(r1)
/* 802A842C 002A536C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A8430 002A5370  41 82 00 64 */	beq .L_802A8494
/* 802A8434 002A5374  3C 60 80 4D */	lis r3, __vt__Q23efx16TDamaDeadHahenC1@ha
/* 802A8438 002A5378  38 63 D8 E4 */	addi r3, r3, __vt__Q23efx16TDamaDeadHahenC1@l
/* 802A843C 002A537C  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8440 002A5380  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8444 002A5384  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8448 002A5388  41 82 00 3C */	beq .L_802A8484
/* 802A844C 002A538C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChaseMtx@ha
/* 802A8450 002A5390  38 63 68 A8 */	addi r3, r3, __vt__Q23efx9TChaseMtx@l
/* 802A8454 002A5394  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8458 002A5398  38 03 00 14 */	addi r0, r3, 0x14
/* 802A845C 002A539C  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8460 002A53A0  41 82 00 24 */	beq .L_802A8484
/* 802A8464 002A53A4  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A8468 002A53A8  38 7E 00 04 */	addi r3, r30, 4
/* 802A846C 002A53AC  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A8470 002A53B0  38 80 00 00 */	li r4, 0
/* 802A8474 002A53B4  90 BE 00 00 */	stw r5, 0(r30)
/* 802A8478 002A53B8  38 05 00 14 */	addi r0, r5, 0x14
/* 802A847C 002A53BC  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8480 002A53C0  4B DE 78 1D */	bl __dt__18JPAEmitterCallBackFv
.L_802A8484:
/* 802A8484 002A53C4  7F E0 07 35 */	extsh. r0, r31
/* 802A8488 002A53C8  40 81 00 0C */	ble .L_802A8494
/* 802A848C 002A53CC  7F C3 F3 78 */	mr r3, r30
/* 802A8490 002A53D0  4B D7 BC 25 */	bl __dl__FPv
.L_802A8494:
/* 802A8494 002A53D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A8498 002A53D8  7F C3 F3 78 */	mr r3, r30
/* 802A849C 002A53DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A84A0 002A53E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A84A4 002A53E4  7C 08 03 A6 */	mtlr r0
/* 802A84A8 002A53E8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A84AC 002A53EC  4E 80 00 20 */	blr 

.global __dt__Q23efx10TDamaSmokeFv
__dt__Q23efx10TDamaSmokeFv:
/* 802A84B0 002A53F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A84B4 002A53F4  7C 08 02 A6 */	mflr r0
/* 802A84B8 002A53F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A84BC 002A53FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A84C0 002A5400  7C 9F 23 78 */	mr r31, r4
/* 802A84C4 002A5404  93 C1 00 08 */	stw r30, 8(r1)
/* 802A84C8 002A5408  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A84CC 002A540C  41 82 00 64 */	beq .L_802A8530
/* 802A84D0 002A5410  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaSmoke@ha
/* 802A84D4 002A5414  38 63 D9 30 */	addi r3, r3, __vt__Q23efx10TDamaSmoke@l
/* 802A84D8 002A5418  90 7E 00 00 */	stw r3, 0(r30)
/* 802A84DC 002A541C  38 03 00 14 */	addi r0, r3, 0x14
/* 802A84E0 002A5420  90 1E 00 04 */	stw r0, 4(r30)
/* 802A84E4 002A5424  41 82 00 3C */	beq .L_802A8520
/* 802A84E8 002A5428  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802A84EC 002A542C  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802A84F0 002A5430  90 7E 00 00 */	stw r3, 0(r30)
/* 802A84F4 002A5434  38 03 00 14 */	addi r0, r3, 0x14
/* 802A84F8 002A5438  90 1E 00 04 */	stw r0, 4(r30)
/* 802A84FC 002A543C  41 82 00 24 */	beq .L_802A8520
/* 802A8500 002A5440  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A8504 002A5444  38 7E 00 04 */	addi r3, r30, 4
/* 802A8508 002A5448  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A850C 002A544C  38 80 00 00 */	li r4, 0
/* 802A8510 002A5450  90 BE 00 00 */	stw r5, 0(r30)
/* 802A8514 002A5454  38 05 00 14 */	addi r0, r5, 0x14
/* 802A8518 002A5458  90 1E 00 04 */	stw r0, 4(r30)
/* 802A851C 002A545C  4B DE 77 81 */	bl __dt__18JPAEmitterCallBackFv
.L_802A8520:
/* 802A8520 002A5460  7F E0 07 35 */	extsh. r0, r31
/* 802A8524 002A5464  40 81 00 0C */	ble .L_802A8530
/* 802A8528 002A5468  7F C3 F3 78 */	mr r3, r30
/* 802A852C 002A546C  4B D7 BB 89 */	bl __dl__FPv
.L_802A8530:
/* 802A8530 002A5470  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A8534 002A5474  7F C3 F3 78 */	mr r3, r30
/* 802A8538 002A5478  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A853C 002A547C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A8540 002A5480  7C 08 03 A6 */	mtlr r0
/* 802A8544 002A5484  38 21 00 10 */	addi r1, r1, 0x10
/* 802A8548 002A5488  4E 80 00 20 */	blr 

.global __dt__Q23efx15TDamaDeadHahenBFv
__dt__Q23efx15TDamaDeadHahenBFv:
/* 802A854C 002A548C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A8550 002A5490  7C 08 02 A6 */	mflr r0
/* 802A8554 002A5494  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A8558 002A5498  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A855C 002A549C  7C 9F 23 78 */	mr r31, r4
/* 802A8560 002A54A0  93 C1 00 08 */	stw r30, 8(r1)
/* 802A8564 002A54A4  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A8568 002A54A8  41 82 00 64 */	beq .L_802A85CC
/* 802A856C 002A54AC  3C 60 80 4D */	lis r3, __vt__Q23efx15TDamaDeadHahenB@ha
/* 802A8570 002A54B0  38 63 D9 7C */	addi r3, r3, __vt__Q23efx15TDamaDeadHahenB@l
/* 802A8574 002A54B4  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8578 002A54B8  38 03 00 14 */	addi r0, r3, 0x14
/* 802A857C 002A54BC  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8580 002A54C0  41 82 00 3C */	beq .L_802A85BC
/* 802A8584 002A54C4  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802A8588 002A54C8  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802A858C 002A54CC  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8590 002A54D0  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8594 002A54D4  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8598 002A54D8  41 82 00 24 */	beq .L_802A85BC
/* 802A859C 002A54DC  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A85A0 002A54E0  38 7E 00 04 */	addi r3, r30, 4
/* 802A85A4 002A54E4  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A85A8 002A54E8  38 80 00 00 */	li r4, 0
/* 802A85AC 002A54EC  90 BE 00 00 */	stw r5, 0(r30)
/* 802A85B0 002A54F0  38 05 00 14 */	addi r0, r5, 0x14
/* 802A85B4 002A54F4  90 1E 00 04 */	stw r0, 4(r30)
/* 802A85B8 002A54F8  4B DE 76 E5 */	bl __dt__18JPAEmitterCallBackFv
.L_802A85BC:
/* 802A85BC 002A54FC  7F E0 07 35 */	extsh. r0, r31
/* 802A85C0 002A5500  40 81 00 0C */	ble .L_802A85CC
/* 802A85C4 002A5504  7F C3 F3 78 */	mr r3, r30
/* 802A85C8 002A5508  4B D7 BA ED */	bl __dl__FPv
.L_802A85CC:
/* 802A85CC 002A550C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A85D0 002A5510  7F C3 F3 78 */	mr r3, r30
/* 802A85D4 002A5514  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A85D8 002A5518  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A85DC 002A551C  7C 08 03 A6 */	mtlr r0
/* 802A85E0 002A5520  38 21 00 10 */	addi r1, r1, 0x10
/* 802A85E4 002A5524  4E 80 00 20 */	blr 

.global __dt__Q23efx15TDamaDeadHahenAFv
__dt__Q23efx15TDamaDeadHahenAFv:
/* 802A85E8 002A5528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A85EC 002A552C  7C 08 02 A6 */	mflr r0
/* 802A85F0 002A5530  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A85F4 002A5534  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A85F8 002A5538  7C 9F 23 78 */	mr r31, r4
/* 802A85FC 002A553C  93 C1 00 08 */	stw r30, 8(r1)
/* 802A8600 002A5540  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A8604 002A5544  41 82 00 64 */	beq .L_802A8668
/* 802A8608 002A5548  3C 60 80 4D */	lis r3, __vt__Q23efx15TDamaDeadHahenA@ha
/* 802A860C 002A554C  38 63 D9 C8 */	addi r3, r3, __vt__Q23efx15TDamaDeadHahenA@l
/* 802A8610 002A5550  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8614 002A5554  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8618 002A5558  90 1E 00 04 */	stw r0, 4(r30)
/* 802A861C 002A555C  41 82 00 3C */	beq .L_802A8658
/* 802A8620 002A5560  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802A8624 002A5564  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802A8628 002A5568  90 7E 00 00 */	stw r3, 0(r30)
/* 802A862C 002A556C  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8630 002A5570  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8634 002A5574  41 82 00 24 */	beq .L_802A8658
/* 802A8638 002A5578  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A863C 002A557C  38 7E 00 04 */	addi r3, r30, 4
/* 802A8640 002A5580  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A8644 002A5584  38 80 00 00 */	li r4, 0
/* 802A8648 002A5588  90 BE 00 00 */	stw r5, 0(r30)
/* 802A864C 002A558C  38 05 00 14 */	addi r0, r5, 0x14
/* 802A8650 002A5590  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8654 002A5594  4B DE 76 49 */	bl __dt__18JPAEmitterCallBackFv
.L_802A8658:
/* 802A8658 002A5598  7F E0 07 35 */	extsh. r0, r31
/* 802A865C 002A559C  40 81 00 0C */	ble .L_802A8668
/* 802A8660 002A55A0  7F C3 F3 78 */	mr r3, r30
/* 802A8664 002A55A4  4B D7 BA 51 */	bl __dl__FPv
.L_802A8668:
/* 802A8668 002A55A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A866C 002A55AC  7F C3 F3 78 */	mr r3, r30
/* 802A8670 002A55B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A8674 002A55B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A8678 002A55B8  7C 08 03 A6 */	mtlr r0
/* 802A867C 002A55BC  38 21 00 10 */	addi r1, r1, 0x10
/* 802A8680 002A55C0  4E 80 00 20 */	blr 

.global __dt__Q23efx14TDamaDeadElecBFv
__dt__Q23efx14TDamaDeadElecBFv:
/* 802A8684 002A55C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A8688 002A55C8  7C 08 02 A6 */	mflr r0
/* 802A868C 002A55CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A8690 002A55D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A8694 002A55D4  7C 9F 23 78 */	mr r31, r4
/* 802A8698 002A55D8  93 C1 00 08 */	stw r30, 8(r1)
/* 802A869C 002A55DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A86A0 002A55E0  41 82 00 64 */	beq .L_802A8704
/* 802A86A4 002A55E4  3C 60 80 4D */	lis r3, __vt__Q23efx14TDamaDeadElecB@ha
/* 802A86A8 002A55E8  38 63 DA 14 */	addi r3, r3, __vt__Q23efx14TDamaDeadElecB@l
/* 802A86AC 002A55EC  90 7E 00 00 */	stw r3, 0(r30)
/* 802A86B0 002A55F0  38 03 00 14 */	addi r0, r3, 0x14
/* 802A86B4 002A55F4  90 1E 00 04 */	stw r0, 4(r30)
/* 802A86B8 002A55F8  41 82 00 3C */	beq .L_802A86F4
/* 802A86BC 002A55FC  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802A86C0 002A5600  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802A86C4 002A5604  90 7E 00 00 */	stw r3, 0(r30)
/* 802A86C8 002A5608  38 03 00 14 */	addi r0, r3, 0x14
/* 802A86CC 002A560C  90 1E 00 04 */	stw r0, 4(r30)
/* 802A86D0 002A5610  41 82 00 24 */	beq .L_802A86F4
/* 802A86D4 002A5614  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A86D8 002A5618  38 7E 00 04 */	addi r3, r30, 4
/* 802A86DC 002A561C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A86E0 002A5620  38 80 00 00 */	li r4, 0
/* 802A86E4 002A5624  90 BE 00 00 */	stw r5, 0(r30)
/* 802A86E8 002A5628  38 05 00 14 */	addi r0, r5, 0x14
/* 802A86EC 002A562C  90 1E 00 04 */	stw r0, 4(r30)
/* 802A86F0 002A5630  4B DE 75 AD */	bl __dt__18JPAEmitterCallBackFv
.L_802A86F4:
/* 802A86F4 002A5634  7F E0 07 35 */	extsh. r0, r31
/* 802A86F8 002A5638  40 81 00 0C */	ble .L_802A8704
/* 802A86FC 002A563C  7F C3 F3 78 */	mr r3, r30
/* 802A8700 002A5640  4B D7 B9 B5 */	bl __dl__FPv
.L_802A8704:
/* 802A8704 002A5644  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A8708 002A5648  7F C3 F3 78 */	mr r3, r30
/* 802A870C 002A564C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A8710 002A5650  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A8714 002A5654  7C 08 03 A6 */	mtlr r0
/* 802A8718 002A5658  38 21 00 10 */	addi r1, r1, 0x10
/* 802A871C 002A565C  4E 80 00 20 */	blr 

.global __dt__Q23efx14TDamaDeadElecAFv
__dt__Q23efx14TDamaDeadElecAFv:
/* 802A8720 002A5660  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A8724 002A5664  7C 08 02 A6 */	mflr r0
/* 802A8728 002A5668  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A872C 002A566C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A8730 002A5670  7C 9F 23 78 */	mr r31, r4
/* 802A8734 002A5674  93 C1 00 08 */	stw r30, 8(r1)
/* 802A8738 002A5678  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A873C 002A567C  41 82 00 64 */	beq .L_802A87A0
/* 802A8740 002A5680  3C 60 80 4D */	lis r3, __vt__Q23efx14TDamaDeadElecA@ha
/* 802A8744 002A5684  38 63 DA 60 */	addi r3, r3, __vt__Q23efx14TDamaDeadElecA@l
/* 802A8748 002A5688  90 7E 00 00 */	stw r3, 0(r30)
/* 802A874C 002A568C  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8750 002A5690  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8754 002A5694  41 82 00 3C */	beq .L_802A8790
/* 802A8758 002A5698  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802A875C 002A569C  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802A8760 002A56A0  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8764 002A56A4  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8768 002A56A8  90 1E 00 04 */	stw r0, 4(r30)
/* 802A876C 002A56AC  41 82 00 24 */	beq .L_802A8790
/* 802A8770 002A56B0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A8774 002A56B4  38 7E 00 04 */	addi r3, r30, 4
/* 802A8778 002A56B8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A877C 002A56BC  38 80 00 00 */	li r4, 0
/* 802A8780 002A56C0  90 BE 00 00 */	stw r5, 0(r30)
/* 802A8784 002A56C4  38 05 00 14 */	addi r0, r5, 0x14
/* 802A8788 002A56C8  90 1E 00 04 */	stw r0, 4(r30)
/* 802A878C 002A56CC  4B DE 75 11 */	bl __dt__18JPAEmitterCallBackFv
.L_802A8790:
/* 802A8790 002A56D0  7F E0 07 35 */	extsh. r0, r31
/* 802A8794 002A56D4  40 81 00 0C */	ble .L_802A87A0
/* 802A8798 002A56D8  7F C3 F3 78 */	mr r3, r30
/* 802A879C 002A56DC  4B D7 B9 19 */	bl __dl__FPv
.L_802A87A0:
/* 802A87A0 002A56E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A87A4 002A56E4  7F C3 F3 78 */	mr r3, r30
/* 802A87A8 002A56E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A87AC 002A56EC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A87B0 002A56F0  7C 08 03 A6 */	mtlr r0
/* 802A87B4 002A56F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A87B8 002A56F8  4E 80 00 20 */	blr 

.global __dt__Q23efx10TDamaHahenFv
__dt__Q23efx10TDamaHahenFv:
/* 802A87BC 002A56FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A87C0 002A5700  7C 08 02 A6 */	mflr r0
/* 802A87C4 002A5704  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A87C8 002A5708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A87CC 002A570C  7C 9F 23 78 */	mr r31, r4
/* 802A87D0 002A5710  93 C1 00 08 */	stw r30, 8(r1)
/* 802A87D4 002A5714  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A87D8 002A5718  41 82 00 64 */	beq .L_802A883C
/* 802A87DC 002A571C  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaHahen@ha
/* 802A87E0 002A5720  38 63 DA AC */	addi r3, r3, __vt__Q23efx10TDamaHahen@l
/* 802A87E4 002A5724  90 7E 00 00 */	stw r3, 0(r30)
/* 802A87E8 002A5728  38 03 00 14 */	addi r0, r3, 0x14
/* 802A87EC 002A572C  90 1E 00 04 */	stw r0, 4(r30)
/* 802A87F0 002A5730  41 82 00 3C */	beq .L_802A882C
/* 802A87F4 002A5734  3C 60 80 4E */	lis r3, __vt__Q23efx12TChasePosPos@ha
/* 802A87F8 002A5738  38 63 68 10 */	addi r3, r3, __vt__Q23efx12TChasePosPos@l
/* 802A87FC 002A573C  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8800 002A5740  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8804 002A5744  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8808 002A5748  41 82 00 24 */	beq .L_802A882C
/* 802A880C 002A574C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A8810 002A5750  38 7E 00 04 */	addi r3, r30, 4
/* 802A8814 002A5754  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A8818 002A5758  38 80 00 00 */	li r4, 0
/* 802A881C 002A575C  90 BE 00 00 */	stw r5, 0(r30)
/* 802A8820 002A5760  38 05 00 14 */	addi r0, r5, 0x14
/* 802A8824 002A5764  90 1E 00 04 */	stw r0, 4(r30)
/* 802A8828 002A5768  4B DE 74 75 */	bl __dt__18JPAEmitterCallBackFv
.L_802A882C:
/* 802A882C 002A576C  7F E0 07 35 */	extsh. r0, r31
/* 802A8830 002A5770  40 81 00 0C */	ble .L_802A883C
/* 802A8834 002A5774  7F C3 F3 78 */	mr r3, r30
/* 802A8838 002A5778  4B D7 B8 7D */	bl __dl__FPv
.L_802A883C:
/* 802A883C 002A577C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A8840 002A5780  7F C3 F3 78 */	mr r3, r30
/* 802A8844 002A5784  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A8848 002A5788  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A884C 002A578C  7C 08 03 A6 */	mtlr r0
/* 802A8850 002A5790  38 21 00 10 */	addi r1, r1, 0x10
/* 802A8854 002A5794  4E 80 00 20 */	blr 

.global __dt__Q23efx10TDamaFootwFv
__dt__Q23efx10TDamaFootwFv:
/* 802A8858 002A5798  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A885C 002A579C  7C 08 02 A6 */	mflr r0
/* 802A8860 002A57A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A8864 002A57A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A8868 002A57A8  7C 9F 23 78 */	mr r31, r4
/* 802A886C 002A57AC  93 C1 00 08 */	stw r30, 8(r1)
/* 802A8870 002A57B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802A8874 002A57B4  41 82 00 64 */	beq .L_802A88D8
/* 802A8878 002A57B8  3C 60 80 4D */	lis r3, __vt__Q23efx10TDamaFootw@ha
/* 802A887C 002A57BC  38 63 DA F8 */	addi r3, r3, __vt__Q23efx10TDamaFootw@l
/* 802A8880 002A57C0  90 7E 00 00 */	stw r3, 0(r30)
/* 802A8884 002A57C4  38 03 00 14 */	addi r0, r3, 0x14
/* 802A8888 002A57C8  90 1E 00 04 */	stw r0, 4(r30)
/* 802A888C 002A57CC  41 82 00 3C */	beq .L_802A88C8
/* 802A8890 002A57D0  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802A8894 002A57D4  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802A8898 002A57D8  90 7E 00 00 */	stw r3, 0(r30)
/* 802A889C 002A57DC  38 03 00 14 */	addi r0, r3, 0x14
/* 802A88A0 002A57E0  90 1E 00 04 */	stw r0, 4(r30)
/* 802A88A4 002A57E4  41 82 00 24 */	beq .L_802A88C8
/* 802A88A8 002A57E8  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802A88AC 002A57EC  38 7E 00 04 */	addi r3, r30, 4
/* 802A88B0 002A57F0  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802A88B4 002A57F4  38 80 00 00 */	li r4, 0
/* 802A88B8 002A57F8  90 BE 00 00 */	stw r5, 0(r30)
/* 802A88BC 002A57FC  38 05 00 14 */	addi r0, r5, 0x14
/* 802A88C0 002A5800  90 1E 00 04 */	stw r0, 4(r30)
/* 802A88C4 002A5804  4B DE 73 D9 */	bl __dt__18JPAEmitterCallBackFv
.L_802A88C8:
/* 802A88C8 002A5808  7F E0 07 35 */	extsh. r0, r31
/* 802A88CC 002A580C  40 81 00 0C */	ble .L_802A88D8
/* 802A88D0 002A5810  7F C3 F3 78 */	mr r3, r30
/* 802A88D4 002A5814  4B D7 B7 E1 */	bl __dl__FPv
.L_802A88D8:
/* 802A88D8 002A5818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A88DC 002A581C  7F C3 F3 78 */	mr r3, r30
/* 802A88E0 002A5820  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A88E4 002A5824  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A88E8 002A5828  7C 08 03 A6 */	mtlr r0
/* 802A88EC 002A582C  38 21 00 10 */	addi r1, r1, 0x10
/* 802A88F0 002A5830  4E 80 00 20 */	blr 

.global satisfy__Q24Game23ConditionNotStickClientFPQ24Game4Piki
satisfy__Q24Game23ConditionNotStickClientFPQ24Game4Piki:
/* 802A88F4 002A5834  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A88F8 002A5838  7C 08 02 A6 */	mflr r0
/* 802A88FC 002A583C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A8900 002A5840  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802A8904 002A5844  7C 9F 23 78 */	mr r31, r4
/* 802A8908 002A5848  93 C1 00 08 */	stw r30, 8(r1)
/* 802A890C 002A584C  7C 7E 1B 78 */	mr r30, r3
/* 802A8910 002A5850  7F E3 FB 78 */	mr r3, r31
/* 802A8914 002A5854  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A8918 002A5858  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802A891C 002A585C  7D 89 03 A6 */	mtctr r12
/* 802A8920 002A5860  4E 80 04 21 */	bctrl 
/* 802A8924 002A5864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A8928 002A5868  41 82 00 38 */	beq .L_802A8960
/* 802A892C 002A586C  7F E3 FB 78 */	mr r3, r31
/* 802A8930 002A5870  81 9F 00 00 */	lwz r12, 0(r31)
/* 802A8934 002A5874  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802A8938 002A5878  7D 89 03 A6 */	mtctr r12
/* 802A893C 002A587C  4E 80 04 21 */	bctrl 
/* 802A8940 002A5880  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802A8944 002A5884  41 82 00 1C */	beq .L_802A8960
/* 802A8948 002A5888  80 7F 00 F4 */	lwz r3, 0xf4(r31)
/* 802A894C 002A588C  80 1E 00 04 */	lwz r0, 4(r30)
/* 802A8950 002A5890  7C 03 00 40 */	cmplw r3, r0
/* 802A8954 002A5894  41 82 00 0C */	beq .L_802A8960
/* 802A8958 002A5898  38 60 00 01 */	li r3, 1
/* 802A895C 002A589C  48 00 00 08 */	b .L_802A8964
.L_802A8960:
/* 802A8960 002A58A0  38 60 00 00 */	li r3, 0
.L_802A8964:
/* 802A8964 002A58A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A8968 002A58A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802A896C 002A58AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802A8970 002A58B0  7C 08 03 A6 */	mtlr r0
/* 802A8974 002A58B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802A8978 002A58B8  4E 80 00 20 */	blr 

.global inWaterCallback__Q34Game8Damagumo3ObjFPQ24Game8WaterBox
inWaterCallback__Q34Game8Damagumo3ObjFPQ24Game8WaterBox:
/* 802A897C 002A58BC  4E 80 00 20 */	blr 

.global outWaterCallback__Q34Game8Damagumo3ObjFv
outWaterCallback__Q34Game8Damagumo3ObjFv:
/* 802A8980 002A58C0  4E 80 00 20 */	blr 

.global getDamageCoeStoneState__Q34Game8Damagumo3ObjFv
getDamageCoeStoneState__Q34Game8Damagumo3ObjFv:
/* 802A8984 002A58C4  C0 22 DC 08 */	lfs f1, lbl_8051BF68@sda21(r2)
/* 802A8988 002A58C8  4E 80 00 20 */	blr 

.global throwupItemInDeathProcedure__Q34Game8Damagumo3ObjFv
throwupItemInDeathProcedure__Q34Game8Damagumo3ObjFv:
/* 802A898C 002A58CC  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game8Damagumo3ObjFv
getEnemyTypeID__Q34Game8Damagumo3ObjFv:
/* 802A8990 002A58D0  38 60 00 38 */	li r3, 0x38
/* 802A8994 002A58D4  4E 80 00 20 */	blr 

__sinit_Damagumo_cpp: # static initializer
/* 802A8998 002A58D8  3C 80 80 51 */	lis r4, __float_nan@ha
/* 802A899C 002A58DC  38 00 FF FF */	li r0, -1
/* 802A89A0 002A58E0  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 802A89A4 002A58E4  3C 60 80 4D */	lis r3, govNAN___Q24Game5P2JST@ha
/* 802A89A8 002A58E8  90 0D 96 F0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 802A89AC 002A58EC  D4 03 D8 18 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 802A89B0 002A58F0  D0 0D 96 F4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 802A89B4 002A58F4  D0 03 00 04 */	stfs f0, 4(r3)
/* 802A89B8 002A58F8  D0 03 00 08 */	stfs f0, 8(r3)
/* 802A89BC 002A58FC  4E 80 00 20 */	blr 

.global "@1176@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
"@1176@12@viewOnPelletKilled__Q24Game9EnemyBaseFv":
/* 802A89C0 002A5900  39 60 00 0C */	li r11, 0xc
/* 802A89C4 002A5904  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A89C8 002A5908  7C 63 5A 14 */	add r3, r3, r11
/* 802A89CC 002A590C  38 63 FB 68 */	addi r3, r3, -1176
/* 802A89D0 002A5910  4B E5 DF 4C */	b viewOnPelletKilled__Q24Game9EnemyBaseFv

.global "@1176@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
"@1176@12@viewStartCarryMotion__Q24Game9EnemyBaseFv":
/* 802A89D4 002A5914  39 60 00 0C */	li r11, 0xc
/* 802A89D8 002A5918  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A89DC 002A591C  7C 63 5A 14 */	add r3, r3, r11
/* 802A89E0 002A5920  38 63 FB 68 */	addi r3, r3, -1176
/* 802A89E4 002A5924  4B E5 DC C4 */	b viewStartCarryMotion__Q24Game9EnemyBaseFv

.global "@1176@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
"@1176@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv":
/* 802A89E8 002A5928  39 60 00 0C */	li r11, 0xc
/* 802A89EC 002A592C  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A89F0 002A5930  7C 63 5A 14 */	add r3, r3, r11
/* 802A89F4 002A5934  38 63 FB 68 */	addi r3, r3, -1176
/* 802A89F8 002A5938  4B E5 DC D0 */	b viewStartPreCarryMotion__Q24Game9EnemyBaseFv

.global "@1176@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
"@1176@12@view_finish_carrymotion__Q24Game9EnemyBaseFv":
/* 802A89FC 002A593C  39 60 00 0C */	li r11, 0xc
/* 802A8A00 002A5940  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A8A04 002A5944  7C 63 5A 14 */	add r3, r3, r11
/* 802A8A08 002A5948  38 63 FB 68 */	addi r3, r3, -1176
/* 802A8A0C 002A594C  4B E5 E0 6C */	b view_finish_carrymotion__Q24Game9EnemyBaseFv

.global "@1176@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
"@1176@12@view_start_carrymotion__Q24Game9EnemyBaseFv":
/* 802A8A10 002A5950  39 60 00 0C */	li r11, 0xc
/* 802A8A14 002A5954  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A8A18 002A5958  7C 63 5A 14 */	add r3, r3, r11
/* 802A8A1C 002A595C  38 63 FB 68 */	addi r3, r3, -1176
/* 802A8A20 002A5960  4B E5 E0 2C */	b view_start_carrymotion__Q24Game9EnemyBaseFv

.global "@1176@12@viewGetShape__Q24Game9EnemyBaseFv"
"@1176@12@viewGetShape__Q24Game9EnemyBaseFv":
/* 802A8A24 002A5964  39 60 00 0C */	li r11, 0xc
/* 802A8A28 002A5968  7D 63 58 2E */	lwzx r11, r3, r11
/* 802A8A2C 002A596C  7C 63 5A 14 */	add r3, r3, r11
/* 802A8A30 002A5970  38 63 FB 68 */	addi r3, r3, -1176
/* 802A8A34 002A5974  4B E5 DC 6C */	b viewGetShape__Q24Game9EnemyBaseFv

.global "@4@__dt__Q23efx10TDamaFootwFv"
"@4@__dt__Q23efx10TDamaFootwFv":
/* 802A8A38 002A5978  38 63 FF FC */	addi r3, r3, -4
/* 802A8A3C 002A597C  4B FF FE 1C */	b __dt__Q23efx10TDamaFootwFv

.global "@4@__dt__Q23efx10TDamaHahenFv"
"@4@__dt__Q23efx10TDamaHahenFv":
/* 802A8A40 002A5980  38 63 FF FC */	addi r3, r3, -4
/* 802A8A44 002A5984  4B FF FD 78 */	b __dt__Q23efx10TDamaHahenFv

.global "@4@__dt__Q23efx14TDamaDeadElecAFv"
"@4@__dt__Q23efx14TDamaDeadElecAFv":
/* 802A8A48 002A5988  38 63 FF FC */	addi r3, r3, -4
/* 802A8A4C 002A598C  4B FF FC D4 */	b __dt__Q23efx14TDamaDeadElecAFv

.global "@4@__dt__Q23efx14TDamaDeadElecBFv"
"@4@__dt__Q23efx14TDamaDeadElecBFv":
/* 802A8A50 002A5990  38 63 FF FC */	addi r3, r3, -4
/* 802A8A54 002A5994  4B FF FC 30 */	b __dt__Q23efx14TDamaDeadElecBFv

.global "@4@__dt__Q23efx15TDamaDeadHahenAFv"
"@4@__dt__Q23efx15TDamaDeadHahenAFv":
/* 802A8A58 002A5998  38 63 FF FC */	addi r3, r3, -4
/* 802A8A5C 002A599C  4B FF FB 8C */	b __dt__Q23efx15TDamaDeadHahenAFv

.global "@4@__dt__Q23efx15TDamaDeadHahenBFv"
"@4@__dt__Q23efx15TDamaDeadHahenBFv":
/* 802A8A60 002A59A0  38 63 FF FC */	addi r3, r3, -4
/* 802A8A64 002A59A4  4B FF FA E8 */	b __dt__Q23efx15TDamaDeadHahenBFv

.global "@4@__dt__Q23efx10TDamaSmokeFv"
"@4@__dt__Q23efx10TDamaSmokeFv":
/* 802A8A68 002A59A8  38 63 FF FC */	addi r3, r3, -4
/* 802A8A6C 002A59AC  4B FF FA 44 */	b __dt__Q23efx10TDamaSmokeFv

.global "@4@__dt__Q23efx16TDamaDeadHahenC1Fv"
"@4@__dt__Q23efx16TDamaDeadHahenC1Fv":
/* 802A8A70 002A59B0  38 63 FF FC */	addi r3, r3, -4
/* 802A8A74 002A59B4  4B FF F9 A0 */	b __dt__Q23efx16TDamaDeadHahenC1Fv

.global "@4@__dt__Q23efx16TDamaDeadHahenC2Fv"
"@4@__dt__Q23efx16TDamaDeadHahenC2Fv":
/* 802A8A78 002A59B8  38 63 FF FC */	addi r3, r3, -4
/* 802A8A7C 002A59BC  4B FF F8 FC */	b __dt__Q23efx16TDamaDeadHahenC2Fv
